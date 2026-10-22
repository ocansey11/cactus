#!/bin/bash
# Builds Cactus's kernels and graph for the x86_64 build server through the
# SIMDe shim in this directory and runs Cactus's own kernel and graph tests.
# Proves the NEON→SSE/AVX translation computes the same answers before any
# of it goes into the emulator image. Nothing here touches the Android build.
#   vendor/cactus/jarvisos/x86/host-test.sh [TEST_NAME...]   (default: all)
# Objects and binaries go to $OUT (default ~/.jh/cactus-host).
set -u
CACTUS="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"
TOP="$(cd "$CACTUS/../.." && pwd)"
CXX="$TOP/prebuilts/clang/host/linux-x86/clang-r536225/bin/clang++"
OUT="${OUT:-$HOME/.jh/cactus-host}"
mkdir -p "$OUT/obj" "$OUT/bin"
cd "$CACTUS" || exit 1

FLAGS=(-std=c++20 -O2 -g0 -mavx2 -mfma -mf16c -D__fp16=_Float16 -Wno-keyword-macro -w -DNDEBUG
       -Ijarvisos/x86 -Icactus-kernels -Icactus-kernels/src -Icactus-kernels/libs
       -Icactus-graph -Icactus-graph/src)

# The kernel and graph sources Android.bp builds (the engine needs models, so it is left out).
SRCS=$(grep -oE '"cactus-(kernels|graph)/src/[^"]+\.cpp"' Android.bp | tr -d '"')

echo "== compiling $(echo "$SRCS" | wc -w) sources"
compile() { local o="$OUT/obj/$(echo "$1" | tr / _).o"
            [ "$o" -nt "$1" ] && [ "$o" -nt jarvisos/x86/arm_neon.h ] && return 0
            "$CXX" "${FLAGS[@]}" -c "$1" -o "$o" 2>&1 | head -5; }
export -f compile; export CXX OUT; export FLAGS_STR="${FLAGS[*]}"
FAILED=0
for s in $SRCS; do compile "$s" & while [ "$(jobs -r | wc -l)" -ge "$(nproc)" ]; do sleep 0.2; done; done; wait
rm -f "$OUT/libcactus_host.a"; ar rcs "$OUT/libcactus_host.a" "$OUT"/obj/*.o || exit 1

PASS=0; FAIL=0; FAILED_TESTS=()
for t in cactus-kernels/tests/test_*.cpp cactus-graph/tests/test_*.cpp; do
    name=$(basename "$t" .cpp)
    [ $# -gt 0 ] && [[ " $* " != *" $name "* ]] && continue
    case "$name" in test_metal_parity) continue ;; esac   # Apple GPU only
    if ! "$CXX" "${FLAGS[@]}" -I"$(dirname "$t")" "$t" "$OUT/libcactus_host.a" -lpthread -o "$OUT/bin/$name" \
            > "$OUT/$name.build.log" 2>&1; then
        echo "  BUILD-FAIL  $name ($(grep -m1 'error' "$OUT/$name.build.log" | cut -c1-160))"
        FAIL=$((FAIL+1)); FAILED_TESTS+=("$name"); continue
    fi
    if timeout 600 "$OUT/bin/$name" > "$OUT/$name.log" 2>&1; then
        echo "  pass  $name"; PASS=$((PASS+1))
    else
        echo "  FAIL  $name (exit $?, log $OUT/$name.log)"
        grep -aiE 'fail|mismatch|error' "$OUT/$name.log" | head -8 | sed 's/^/        /'
        FAIL=$((FAIL+1)); FAILED_TESTS+=("$name")
    fi
done
echo
echo "$((PASS+FAIL)) tests, $FAIL failed ${FAILED_TESTS[*]:-}"
[ $FAIL = 0 ]

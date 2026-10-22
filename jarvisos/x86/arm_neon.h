// arm_neon.h for x86_64 builds of libcactus (the Android emulator only).
//
// Cactus's kernels are written in ARM NEON intrinsics with no portable
// fallback. On x86_64 this header stands in for the compiler's own
// <arm_neon.h> and maps every NEON intrinsic onto SSE/AVX through SIMDe
// (https://github.com/simd-everywhere/simde, MIT, v0.8.2 amalgamated,
// simde/arm/neon.h). It is on the include path for x86_64 only; arm64
// builds still use the real header. Correctness, not speed, is the goal:
// the emulator proves the Cactus path works, the phone measures it.
#pragma once
#define SIMDE_ENABLE_NATIVE_ALIASES
#include "simde/arm/neon.h"

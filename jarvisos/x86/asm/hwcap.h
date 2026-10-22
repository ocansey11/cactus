// Empty stand-in for the arm64 kernel header <asm/hwcap.h>, which x86_64
// Android does not have. threading.h includes it on every Android build but
// only reads HWCAP2_I8MM inside its __aarch64__ branch.
#pragma once

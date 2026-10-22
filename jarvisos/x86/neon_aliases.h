// Generated from simde/arm/neon.h by the script in this file's commit
// message; do not edit by hand.
//
// SIMDe's native aliases are function-like macros (`#define vfoo(a, b)
// simde_vfoo((a), (b))`). Cactus breaks them in two ways: it passes
// intrinsics as values (`apply(v, vsqrtq_f32)`), and it passes vector
// literals whose commas the preprocessor splits (`vcombine_s8((int8x8_t){0,
// -2, ...}, ...)`). Plain object-like aliases to SIMDe's real functions work
// for both.
#pragma once
#undef vaba_s16
#define vaba_s16 simde_vaba_s16
#undef vaba_s32
#define vaba_s32 simde_vaba_s32
#undef vaba_s8
#define vaba_s8 simde_vaba_s8
#undef vaba_u16
#define vaba_u16 simde_vaba_u16
#undef vaba_u32
#define vaba_u32 simde_vaba_u32
#undef vaba_u8
#define vaba_u8 simde_vaba_u8
#undef vabal_high_s16
#define vabal_high_s16 simde_vabal_high_s16
#undef vabal_high_s32
#define vabal_high_s32 simde_vabal_high_s32
#undef vabal_high_s8
#define vabal_high_s8 simde_vabal_high_s8
#undef vabal_high_u16
#define vabal_high_u16 simde_vabal_high_u16
#undef vabal_high_u32
#define vabal_high_u32 simde_vabal_high_u32
#undef vabal_high_u8
#define vabal_high_u8 simde_vabal_high_u8
#undef vabal_s16
#define vabal_s16 simde_vabal_s16
#undef vabal_s32
#define vabal_s32 simde_vabal_s32
#undef vabal_s8
#define vabal_s8 simde_vabal_s8
#undef vabal_u16
#define vabal_u16 simde_vabal_u16
#undef vabal_u32
#define vabal_u32 simde_vabal_u32
#undef vabal_u8
#define vabal_u8 simde_vabal_u8
#undef vabaq_s16
#define vabaq_s16 simde_vabaq_s16
#undef vabaq_s32
#define vabaq_s32 simde_vabaq_s32
#undef vabaq_s8
#define vabaq_s8 simde_vabaq_s8
#undef vabaq_u16
#define vabaq_u16 simde_vabaq_u16
#undef vabaq_u32
#define vabaq_u32 simde_vabaq_u32
#undef vabaq_u8
#define vabaq_u8 simde_vabaq_u8
#undef vabd_f16
#define vabd_f16 simde_vabd_f16
#undef vabd_f32
#define vabd_f32 simde_vabd_f32
#undef vabd_f64
#define vabd_f64 simde_vabd_f64
#undef vabd_s16
#define vabd_s16 simde_vabd_s16
#undef vabd_s32
#define vabd_s32 simde_vabd_s32
#undef vabd_s8
#define vabd_s8 simde_vabd_s8
#undef vabd_u16
#define vabd_u16 simde_vabd_u16
#undef vabd_u32
#define vabd_u32 simde_vabd_u32
#undef vabd_u8
#define vabd_u8 simde_vabd_u8
#undef vabdd_f64
#define vabdd_f64 simde_vabdd_f64
#undef vabdh_f16
#define vabdh_f16 simde_vabdh_f16
#undef vabdl_high_s16
#define vabdl_high_s16 simde_vabdl_high_s16
#undef vabdl_high_s32
#define vabdl_high_s32 simde_vabdl_high_s32
#undef vabdl_high_s8
#define vabdl_high_s8 simde_vabdl_high_s8
#undef vabdl_high_u16
#define vabdl_high_u16 simde_vabdl_high_u16
#undef vabdl_high_u32
#define vabdl_high_u32 simde_vabdl_high_u32
#undef vabdl_high_u8
#define vabdl_high_u8 simde_vabdl_high_u8
#undef vabdl_s16
#define vabdl_s16 simde_vabdl_s16
#undef vabdl_s32
#define vabdl_s32 simde_vabdl_s32
#undef vabdl_s8
#define vabdl_s8 simde_vabdl_s8
#undef vabdl_u16
#define vabdl_u16 simde_vabdl_u16
#undef vabdl_u32
#define vabdl_u32 simde_vabdl_u32
#undef vabdl_u8
#define vabdl_u8 simde_vabdl_u8
#undef vabdq_f16
#define vabdq_f16 simde_vabdq_f16
#undef vabdq_f32
#define vabdq_f32 simde_vabdq_f32
#undef vabdq_f64
#define vabdq_f64 simde_vabdq_f64
#undef vabdq_s16
#define vabdq_s16 simde_vabdq_s16
#undef vabdq_s32
#define vabdq_s32 simde_vabdq_s32
#undef vabdq_s8
#define vabdq_s8 simde_vabdq_s8
#undef vabdq_u16
#define vabdq_u16 simde_vabdq_u16
#undef vabdq_u32
#define vabdq_u32 simde_vabdq_u32
#undef vabdq_u8
#define vabdq_u8 simde_vabdq_u8
#undef vabds_f32
#define vabds_f32 simde_vabds_f32
#undef vabs_f16
#define vabs_f16 simde_vabs_f16
#undef vabs_f32
#define vabs_f32 simde_vabs_f32
#undef vabs_f64
#define vabs_f64 simde_vabs_f64
#undef vabs_s16
#define vabs_s16 simde_vabs_s16
#undef vabs_s32
#define vabs_s32 simde_vabs_s32
#undef vabs_s64
#define vabs_s64 simde_vabs_s64
#undef vabs_s8
#define vabs_s8 simde_vabs_s8
#undef vabsd_s64
#define vabsd_s64 simde_vabsd_s64
#undef vabsh_f16
#define vabsh_f16 simde_vabsh_f16
#undef vabsq_f16
#define vabsq_f16 simde_vabsq_f16
#undef vabsq_f32
#define vabsq_f32 simde_vabsq_f32
#undef vabsq_f64
#define vabsq_f64 simde_vabsq_f64
#undef vabsq_s16
#define vabsq_s16 simde_vabsq_s16
#undef vabsq_s32
#define vabsq_s32 simde_vabsq_s32
#undef vabsq_s64
#define vabsq_s64 simde_vabsq_s64
#undef vabsq_s8
#define vabsq_s8 simde_vabsq_s8
#undef vadd_f16
#define vadd_f16 simde_vadd_f16
#undef vadd_f32
#define vadd_f32 simde_vadd_f32
#undef vadd_f64
#define vadd_f64 simde_vadd_f64
#undef vadd_p16
#define vadd_p16 simde_vadd_p16
#undef vadd_p64
#define vadd_p64 simde_vadd_p64
#undef vadd_p8
#define vadd_p8 simde_vadd_p8
#undef vadd_s16
#define vadd_s16 simde_vadd_s16
#undef vadd_s32
#define vadd_s32 simde_vadd_s32
#undef vadd_s64
#define vadd_s64 simde_vadd_s64
#undef vadd_s8
#define vadd_s8 simde_vadd_s8
#undef vadd_u16
#define vadd_u16 simde_vadd_u16
#undef vadd_u32
#define vadd_u32 simde_vadd_u32
#undef vadd_u64
#define vadd_u64 simde_vadd_u64
#undef vadd_u8
#define vadd_u8 simde_vadd_u8
#undef vaddd_s64
#define vaddd_s64 simde_vaddd_s64
#undef vaddd_u64
#define vaddd_u64 simde_vaddd_u64
#undef vaddh_f16
#define vaddh_f16 simde_vaddh_f16
#undef vaddhn_high_s16
#define vaddhn_high_s16 simde_vaddhn_high_s16
#undef vaddhn_high_s32
#define vaddhn_high_s32 simde_vaddhn_high_s32
#undef vaddhn_high_s64
#define vaddhn_high_s64 simde_vaddhn_high_s64
#undef vaddhn_high_u16
#define vaddhn_high_u16 simde_vaddhn_high_u16
#undef vaddhn_high_u32
#define vaddhn_high_u32 simde_vaddhn_high_u32
#undef vaddhn_high_u64
#define vaddhn_high_u64 simde_vaddhn_high_u64
#undef vaddhn_s16
#define vaddhn_s16 simde_vaddhn_s16
#undef vaddhn_s32
#define vaddhn_s32 simde_vaddhn_s32
#undef vaddhn_s64
#define vaddhn_s64 simde_vaddhn_s64
#undef vaddhn_u16
#define vaddhn_u16 simde_vaddhn_u16
#undef vaddhn_u32
#define vaddhn_u32 simde_vaddhn_u32
#undef vaddhn_u64
#define vaddhn_u64 simde_vaddhn_u64
#undef vaddl_high_s16
#define vaddl_high_s16 simde_vaddl_high_s16
#undef vaddl_high_s32
#define vaddl_high_s32 simde_vaddl_high_s32
#undef vaddl_high_s8
#define vaddl_high_s8 simde_vaddl_high_s8
#undef vaddl_high_u16
#define vaddl_high_u16 simde_vaddl_high_u16
#undef vaddl_high_u32
#define vaddl_high_u32 simde_vaddl_high_u32
#undef vaddl_high_u8
#define vaddl_high_u8 simde_vaddl_high_u8
#undef vaddl_s16
#define vaddl_s16 simde_vaddl_s16
#undef vaddl_s32
#define vaddl_s32 simde_vaddl_s32
#undef vaddl_s8
#define vaddl_s8 simde_vaddl_s8
#undef vaddl_u16
#define vaddl_u16 simde_vaddl_u16
#undef vaddl_u32
#define vaddl_u32 simde_vaddl_u32
#undef vaddl_u8
#define vaddl_u8 simde_vaddl_u8
#undef vaddlv_s16
#define vaddlv_s16 simde_vaddlv_s16
#undef vaddlv_s32
#define vaddlv_s32 simde_vaddlv_s32
#undef vaddlv_s8
#define vaddlv_s8 simde_vaddlv_s8
#undef vaddlv_u16
#define vaddlv_u16 simde_vaddlv_u16
#undef vaddlv_u32
#define vaddlv_u32 simde_vaddlv_u32
#undef vaddlv_u8
#define vaddlv_u8 simde_vaddlv_u8
#undef vaddlvq_s16
#define vaddlvq_s16 simde_vaddlvq_s16
#undef vaddlvq_s32
#define vaddlvq_s32 simde_vaddlvq_s32
#undef vaddlvq_s8
#define vaddlvq_s8 simde_vaddlvq_s8
#undef vaddlvq_u16
#define vaddlvq_u16 simde_vaddlvq_u16
#undef vaddlvq_u32
#define vaddlvq_u32 simde_vaddlvq_u32
#undef vaddlvq_u8
#define vaddlvq_u8 simde_vaddlvq_u8
#undef vaddq_f16
#define vaddq_f16 simde_vaddq_f16
#undef vaddq_f32
#define vaddq_f32 simde_vaddq_f32
#undef vaddq_f64
#define vaddq_f64 simde_vaddq_f64
#undef vaddq_p128
#define vaddq_p128 simde_vaddq_p128
#undef vaddq_p16
#define vaddq_p16 simde_vaddq_p16
#undef vaddq_p64
#define vaddq_p64 simde_vaddq_p64
#undef vaddq_p8
#define vaddq_p8 simde_vaddq_p8
#undef vaddq_s16
#define vaddq_s16 simde_vaddq_s16
#undef vaddq_s32
#define vaddq_s32 simde_vaddq_s32
#undef vaddq_s64
#define vaddq_s64 simde_vaddq_s64
#undef vaddq_s8
#define vaddq_s8 simde_vaddq_s8
#undef vaddq_u16
#define vaddq_u16 simde_vaddq_u16
#undef vaddq_u32
#define vaddq_u32 simde_vaddq_u32
#undef vaddq_u64
#define vaddq_u64 simde_vaddq_u64
#undef vaddq_u8
#define vaddq_u8 simde_vaddq_u8
#undef vaddv_f32
#define vaddv_f32 simde_vaddv_f32
#undef vaddv_s16
#define vaddv_s16 simde_vaddv_s16
#undef vaddv_s32
#define vaddv_s32 simde_vaddv_s32
#undef vaddv_s8
#define vaddv_s8 simde_vaddv_s8
#undef vaddv_u16
#define vaddv_u16 simde_vaddv_u16
#undef vaddv_u32
#define vaddv_u32 simde_vaddv_u32
#undef vaddv_u8
#define vaddv_u8 simde_vaddv_u8
#undef vaddvq_f32
#define vaddvq_f32 simde_vaddvq_f32
#undef vaddvq_f64
#define vaddvq_f64 simde_vaddvq_f64
#undef vaddvq_s16
#define vaddvq_s16 simde_vaddvq_s16
#undef vaddvq_s32
#define vaddvq_s32 simde_vaddvq_s32
#undef vaddvq_s64
#define vaddvq_s64 simde_vaddvq_s64
#undef vaddvq_s8
#define vaddvq_s8 simde_vaddvq_s8
#undef vaddvq_u16
#define vaddvq_u16 simde_vaddvq_u16
#undef vaddvq_u32
#define vaddvq_u32 simde_vaddvq_u32
#undef vaddvq_u64
#define vaddvq_u64 simde_vaddvq_u64
#undef vaddvq_u8
#define vaddvq_u8 simde_vaddvq_u8
#undef vaddw_high_s16
#define vaddw_high_s16 simde_vaddw_high_s16
#undef vaddw_high_s32
#define vaddw_high_s32 simde_vaddw_high_s32
#undef vaddw_high_s8
#define vaddw_high_s8 simde_vaddw_high_s8
#undef vaddw_high_u16
#define vaddw_high_u16 simde_vaddw_high_u16
#undef vaddw_high_u32
#define vaddw_high_u32 simde_vaddw_high_u32
#undef vaddw_high_u8
#define vaddw_high_u8 simde_vaddw_high_u8
#undef vaddw_s16
#define vaddw_s16 simde_vaddw_s16
#undef vaddw_s32
#define vaddw_s32 simde_vaddw_s32
#undef vaddw_s8
#define vaddw_s8 simde_vaddw_s8
#undef vaddw_u16
#define vaddw_u16 simde_vaddw_u16
#undef vaddw_u32
#define vaddw_u32 simde_vaddw_u32
#undef vaddw_u8
#define vaddw_u8 simde_vaddw_u8
#undef vaesdq_u8
#define vaesdq_u8 simde_vaesdq_u8
#undef vaeseq_u8
#define vaeseq_u8 simde_vaeseq_u8
#undef vaesimcq_u8
#define vaesimcq_u8 simde_vaesimcq_u8
#undef vaesmcq_u8
#define vaesmcq_u8 simde_vaesmcq_u8
#undef vand_s16
#define vand_s16 simde_vand_s16
#undef vand_s32
#define vand_s32 simde_vand_s32
#undef vand_s64
#define vand_s64 simde_vand_s64
#undef vand_s8
#define vand_s8 simde_vand_s8
#undef vand_u16
#define vand_u16 simde_vand_u16
#undef vand_u32
#define vand_u32 simde_vand_u32
#undef vand_u64
#define vand_u64 simde_vand_u64
#undef vand_u8
#define vand_u8 simde_vand_u8
#undef vandq_s16
#define vandq_s16 simde_vandq_s16
#undef vandq_s32
#define vandq_s32 simde_vandq_s32
#undef vandq_s64
#define vandq_s64 simde_vandq_s64
#undef vandq_s8
#define vandq_s8 simde_vandq_s8
#undef vandq_u16
#define vandq_u16 simde_vandq_u16
#undef vandq_u32
#define vandq_u32 simde_vandq_u32
#undef vandq_u64
#define vandq_u64 simde_vandq_u64
#undef vandq_u8
#define vandq_u8 simde_vandq_u8
#undef vbcaxq_s16
#define vbcaxq_s16 simde_vbcaxq_s16
#undef vbcaxq_s32
#define vbcaxq_s32 simde_vbcaxq_s32
#undef vbcaxq_s64
#define vbcaxq_s64 simde_vbcaxq_s64
#undef vbcaxq_s8
#define vbcaxq_s8 simde_vbcaxq_s8
#undef vbcaxq_u16
#define vbcaxq_u16 simde_vbcaxq_u16
#undef vbcaxq_u32
#define vbcaxq_u32 simde_vbcaxq_u32
#undef vbcaxq_u64
#define vbcaxq_u64 simde_vbcaxq_u64
#undef vbcaxq_u8
#define vbcaxq_u8 simde_vbcaxq_u8
#undef vbfdot_f32
#define vbfdot_f32 simde_vbfdot_f32
#undef vbfdot_lane_f32
#define vbfdot_lane_f32 simde_vbfdot_lane_f32
#undef vbfdot_laneq_f32
#define vbfdot_laneq_f32 simde_vbfdot_laneq_f32
#undef vbfdotq_f32
#define vbfdotq_f32 simde_vbfdotq_f32
#undef vbfdotq_lane_f32
#define vbfdotq_lane_f32 simde_vbfdotq_lane_f32
#undef vbfdotq_laneq_f32
#define vbfdotq_laneq_f32 simde_vbfdotq_laneq_f32
#undef vbfmlalbq_f32
#define vbfmlalbq_f32 simde_vbfmlalbq_f32
#undef vbfmlalbq_lane_f32
#define vbfmlalbq_lane_f32 simde_vbfmlalbq_lane_f32
#undef vbfmlalbq_laneq_f32
#define vbfmlalbq_laneq_f32 simde_vbfmlalbq_laneq_f32
#undef vbfmlaltq_f32
#define vbfmlaltq_f32 simde_vbfmlaltq_f32
#undef vbfmlaltq_lane_f32
#define vbfmlaltq_lane_f32 simde_vbfmlaltq_lane_f32
#undef vbfmlaltq_laneq_f32
#define vbfmlaltq_laneq_f32 simde_vbfmlaltq_laneq_f32
#undef vbfmmlaq_f32
#define vbfmmlaq_f32 simde_vbfmmlaq_f32
#undef vbic_s16
#define vbic_s16 simde_vbic_s16
#undef vbic_s32
#define vbic_s32 simde_vbic_s32
#undef vbic_s64
#define vbic_s64 simde_vbic_s64
#undef vbic_s8
#define vbic_s8 simde_vbic_s8
#undef vbic_u16
#define vbic_u16 simde_vbic_u16
#undef vbic_u32
#define vbic_u32 simde_vbic_u32
#undef vbic_u64
#define vbic_u64 simde_vbic_u64
#undef vbic_u8
#define vbic_u8 simde_vbic_u8
#undef vbicq_s16
#define vbicq_s16 simde_vbicq_s16
#undef vbicq_s32
#define vbicq_s32 simde_vbicq_s32
#undef vbicq_s64
#define vbicq_s64 simde_vbicq_s64
#undef vbicq_s8
#define vbicq_s8 simde_vbicq_s8
#undef vbicq_u16
#define vbicq_u16 simde_vbicq_u16
#undef vbicq_u32
#define vbicq_u32 simde_vbicq_u32
#undef vbicq_u64
#define vbicq_u64 simde_vbicq_u64
#undef vbicq_u8
#define vbicq_u8 simde_vbicq_u8
#undef vbsl_f16
#define vbsl_f16 simde_vbsl_f16
#undef vbsl_f32
#define vbsl_f32 simde_vbsl_f32
#undef vbsl_f64
#define vbsl_f64 simde_vbsl_f64
#undef vbsl_p16
#define vbsl_p16 simde_vbsl_p16
#undef vbsl_p64
#define vbsl_p64 simde_vbsl_p64
#undef vbsl_p8
#define vbsl_p8 simde_vbsl_p8
#undef vbsl_s16
#define vbsl_s16 simde_vbsl_s16
#undef vbsl_s32
#define vbsl_s32 simde_vbsl_s32
#undef vbsl_s64
#define vbsl_s64 simde_vbsl_s64
#undef vbsl_s8
#define vbsl_s8 simde_vbsl_s8
#undef vbsl_u16
#define vbsl_u16 simde_vbsl_u16
#undef vbsl_u32
#define vbsl_u32 simde_vbsl_u32
#undef vbsl_u64
#define vbsl_u64 simde_vbsl_u64
#undef vbsl_u8
#define vbsl_u8 simde_vbsl_u8
#undef vbslq_f16
#define vbslq_f16 simde_vbslq_f16
#undef vbslq_f32
#define vbslq_f32 simde_vbslq_f32
#undef vbslq_f64
#define vbslq_f64 simde_vbslq_f64
#undef vbslq_p16
#define vbslq_p16 simde_vbslq_p16
#undef vbslq_p64
#define vbslq_p64 simde_vbslq_p64
#undef vbslq_p8
#define vbslq_p8 simde_vbslq_p8
#undef vbslq_s16
#define vbslq_s16 simde_vbslq_s16
#undef vbslq_s32
#define vbslq_s32 simde_vbslq_s32
#undef vbslq_s64
#define vbslq_s64 simde_vbslq_s64
#undef vbslq_s8
#define vbslq_s8 simde_vbslq_s8
#undef vbslq_u16
#define vbslq_u16 simde_vbslq_u16
#undef vbslq_u32
#define vbslq_u32 simde_vbslq_u32
#undef vbslq_u64
#define vbslq_u64 simde_vbslq_u64
#undef vbslq_u8
#define vbslq_u8 simde_vbslq_u8
#undef vcadd_rot270_f16
#define vcadd_rot270_f16 simde_vcadd_rot270_f16
#undef vcadd_rot270_f32
#define vcadd_rot270_f32 simde_vcadd_rot270_f32
#undef vcadd_rot90_f16
#define vcadd_rot90_f16 simde_vcadd_rot90_f16
#undef vcadd_rot90_f32
#define vcadd_rot90_f32 simde_vcadd_rot90_f32
#undef vcaddq_rot270_f16
#define vcaddq_rot270_f16 simde_vcaddq_rot270_f16
#undef vcaddq_rot270_f32
#define vcaddq_rot270_f32 simde_vcaddq_rot270_f32
#undef vcaddq_rot270_f64
#define vcaddq_rot270_f64 simde_vcaddq_rot270_f64
#undef vcaddq_rot90_f16
#define vcaddq_rot90_f16 simde_vcaddq_rot90_f16
#undef vcaddq_rot90_f32
#define vcaddq_rot90_f32 simde_vcaddq_rot90_f32
#undef vcaddq_rot90_f64
#define vcaddq_rot90_f64 simde_vcaddq_rot90_f64
#undef vcage_f16
#define vcage_f16 simde_vcage_f16
#undef vcage_f32
#define vcage_f32 simde_vcage_f32
#undef vcage_f64
#define vcage_f64 simde_vcage_f64
#undef vcaged_f64
#define vcaged_f64 simde_vcaged_f64
#undef vcageh_f16
#define vcageh_f16 simde_vcageh_f16
#undef vcageq_f16
#define vcageq_f16 simde_vcageq_f16
#undef vcageq_f32
#define vcageq_f32 simde_vcageq_f32
#undef vcageq_f64
#define vcageq_f64 simde_vcageq_f64
#undef vcages_f32
#define vcages_f32 simde_vcages_f32
#undef vcagt_f16
#define vcagt_f16 simde_vcagt_f16
#undef vcagt_f32
#define vcagt_f32 simde_vcagt_f32
#undef vcagt_f64
#define vcagt_f64 simde_vcagt_f64
#undef vcagtd_f64
#define vcagtd_f64 simde_vcagtd_f64
#undef vcagth_f16
#define vcagth_f16 simde_vcagth_f16
#undef vcagtq_f16
#define vcagtq_f16 simde_vcagtq_f16
#undef vcagtq_f32
#define vcagtq_f32 simde_vcagtq_f32
#undef vcagtq_f64
#define vcagtq_f64 simde_vcagtq_f64
#undef vcagts_f32
#define vcagts_f32 simde_vcagts_f32
#undef vcale_f16
#define vcale_f16 simde_vcale_f16
#undef vcale_f32
#define vcale_f32 simde_vcale_f32
#undef vcale_f64
#define vcale_f64 simde_vcale_f64
#undef vcaled_f64
#define vcaled_f64 simde_vcaled_f64
#undef vcaleh_f16
#define vcaleh_f16 simde_vcaleh_f16
#undef vcaleq_f16
#define vcaleq_f16 simde_vcaleq_f16
#undef vcaleq_f32
#define vcaleq_f32 simde_vcaleq_f32
#undef vcaleq_f64
#define vcaleq_f64 simde_vcaleq_f64
#undef vcales_f32
#define vcales_f32 simde_vcales_f32
#undef vcalt_f16
#define vcalt_f16 simde_vcalt_f16
#undef vcalt_f32
#define vcalt_f32 simde_vcalt_f32
#undef vcalt_f64
#define vcalt_f64 simde_vcalt_f64
#undef vcaltd_f64
#define vcaltd_f64 simde_vcaltd_f64
#undef vcalth_f16
#define vcalth_f16 simde_vcalth_f16
#undef vcaltq_f16
#define vcaltq_f16 simde_vcaltq_f16
#undef vcaltq_f32
#define vcaltq_f32 simde_vcaltq_f32
#undef vcaltq_f64
#define vcaltq_f64 simde_vcaltq_f64
#undef vcalts_f32
#define vcalts_f32 simde_vcalts_f32
#undef vceq_f16
#define vceq_f16 simde_vceq_f16
#undef vceq_f32
#define vceq_f32 simde_vceq_f32
#undef vceq_f64
#define vceq_f64 simde_vceq_f64
#undef vceq_p64
#define vceq_p64 simde_vceq_p64
#undef vceq_p8
#define vceq_p8 simde_vceq_p8
#undef vceq_s16
#define vceq_s16 simde_vceq_s16
#undef vceq_s32
#define vceq_s32 simde_vceq_s32
#undef vceq_s64
#define vceq_s64 simde_vceq_s64
#undef vceq_s8
#define vceq_s8 simde_vceq_s8
#undef vceq_u16
#define vceq_u16 simde_vceq_u16
#undef vceq_u32
#define vceq_u32 simde_vceq_u32
#undef vceq_u64
#define vceq_u64 simde_vceq_u64
#undef vceq_u8
#define vceq_u8 simde_vceq_u8
#undef vceqd_f64
#define vceqd_f64 simde_vceqd_f64
#undef vceqd_s64
#define vceqd_s64 simde_vceqd_s64
#undef vceqd_u64
#define vceqd_u64 simde_vceqd_u64
#undef vceqh_f16
#define vceqh_f16 simde_vceqh_f16
#undef vceqq_f16
#define vceqq_f16 simde_vceqq_f16
#undef vceqq_f32
#define vceqq_f32 simde_vceqq_f32
#undef vceqq_f64
#define vceqq_f64 simde_vceqq_f64
#undef vceqq_p64
#define vceqq_p64 simde_vceqq_p64
#undef vceqq_p8
#define vceqq_p8 simde_vceqq_p8
#undef vceqq_s16
#define vceqq_s16 simde_vceqq_s16
#undef vceqq_s32
#define vceqq_s32 simde_vceqq_s32
#undef vceqq_s64
#define vceqq_s64 simde_vceqq_s64
#undef vceqq_s8
#define vceqq_s8 simde_vceqq_s8
#undef vceqq_u16
#define vceqq_u16 simde_vceqq_u16
#undef vceqq_u32
#define vceqq_u32 simde_vceqq_u32
#undef vceqq_u64
#define vceqq_u64 simde_vceqq_u64
#undef vceqq_u8
#define vceqq_u8 simde_vceqq_u8
#undef vceqs_f32
#define vceqs_f32 simde_vceqs_f32
#undef vceqz_f16
#define vceqz_f16 simde_vceqz_f16
#undef vceqz_f32
#define vceqz_f32 simde_vceqz_f32
#undef vceqz_f64
#define vceqz_f64 simde_vceqz_f64
#undef vceqz_p64
#define vceqz_p64 simde_vceqz_p64
#undef vceqz_p8
#define vceqz_p8 simde_vceqz_p8
#undef vceqz_s16
#define vceqz_s16 simde_vceqz_s16
#undef vceqz_s32
#define vceqz_s32 simde_vceqz_s32
#undef vceqz_s64
#define vceqz_s64 simde_vceqz_s64
#undef vceqz_s8
#define vceqz_s8 simde_vceqz_s8
#undef vceqz_u16
#define vceqz_u16 simde_vceqz_u16
#undef vceqz_u32
#define vceqz_u32 simde_vceqz_u32
#undef vceqz_u64
#define vceqz_u64 simde_vceqz_u64
#undef vceqz_u8
#define vceqz_u8 simde_vceqz_u8
#undef vceqzd_f64
#define vceqzd_f64 simde_vceqzd_f64
#undef vceqzd_s64
#define vceqzd_s64 simde_vceqzd_s64
#undef vceqzd_u64
#define vceqzd_u64 simde_vceqzd_u64
#undef vceqzh_f16
#define vceqzh_f16 simde_vceqzh_f16
#undef vceqzq_f16
#define vceqzq_f16 simde_vceqzq_f16
#undef vceqzq_f32
#define vceqzq_f32 simde_vceqzq_f32
#undef vceqzq_f64
#define vceqzq_f64 simde_vceqzq_f64
#undef vceqzq_p64
#define vceqzq_p64 simde_vceqzq_p64
#undef vceqzq_p8
#define vceqzq_p8 simde_vceqzq_p8
#undef vceqzq_s16
#define vceqzq_s16 simde_vceqzq_s16
#undef vceqzq_s32
#define vceqzq_s32 simde_vceqzq_s32
#undef vceqzq_s64
#define vceqzq_s64 simde_vceqzq_s64
#undef vceqzq_s8
#define vceqzq_s8 simde_vceqzq_s8
#undef vceqzq_u16
#define vceqzq_u16 simde_vceqzq_u16
#undef vceqzq_u32
#define vceqzq_u32 simde_vceqzq_u32
#undef vceqzq_u64
#define vceqzq_u64 simde_vceqzq_u64
#undef vceqzq_u8
#define vceqzq_u8 simde_vceqzq_u8
#undef vceqzs_f32
#define vceqzs_f32 simde_vceqzs_f32
#undef vcge_f16
#define vcge_f16 simde_vcge_f16
#undef vcge_f32
#define vcge_f32 simde_vcge_f32
#undef vcge_f64
#define vcge_f64 simde_vcge_f64
#undef vcge_s16
#define vcge_s16 simde_vcge_s16
#undef vcge_s32
#define vcge_s32 simde_vcge_s32
#undef vcge_s64
#define vcge_s64 simde_vcge_s64
#undef vcge_s8
#define vcge_s8 simde_vcge_s8
#undef vcge_u16
#define vcge_u16 simde_vcge_u16
#undef vcge_u32
#define vcge_u32 simde_vcge_u32
#undef vcge_u64
#define vcge_u64 simde_vcge_u64
#undef vcge_u8
#define vcge_u8 simde_vcge_u8
#undef vcged_f64
#define vcged_f64 simde_vcged_f64
#undef vcged_s64
#define vcged_s64 simde_vcged_s64
#undef vcged_u64
#define vcged_u64 simde_vcged_u64
#undef vcgeh_f16
#define vcgeh_f16 simde_vcgeh_f16
#undef vcgeq_f16
#define vcgeq_f16 simde_vcgeq_f16
#undef vcgeq_f32
#define vcgeq_f32 simde_vcgeq_f32
#undef vcgeq_f64
#define vcgeq_f64 simde_vcgeq_f64
#undef vcgeq_s16
#define vcgeq_s16 simde_vcgeq_s16
#undef vcgeq_s32
#define vcgeq_s32 simde_vcgeq_s32
#undef vcgeq_s64
#define vcgeq_s64 simde_vcgeq_s64
#undef vcgeq_s8
#define vcgeq_s8 simde_vcgeq_s8
#undef vcgeq_u16
#define vcgeq_u16 simde_vcgeq_u16
#undef vcgeq_u32
#define vcgeq_u32 simde_vcgeq_u32
#undef vcgeq_u64
#define vcgeq_u64 simde_vcgeq_u64
#undef vcgeq_u8
#define vcgeq_u8 simde_vcgeq_u8
#undef vcges_f32
#define vcges_f32 simde_vcges_f32
#undef vcgez_f16
#define vcgez_f16 simde_vcgez_f16
#undef vcgez_f32
#define vcgez_f32 simde_vcgez_f32
#undef vcgez_f64
#define vcgez_f64 simde_vcgez_f64
#undef vcgez_s16
#define vcgez_s16 simde_vcgez_s16
#undef vcgez_s32
#define vcgez_s32 simde_vcgez_s32
#undef vcgez_s64
#define vcgez_s64 simde_vcgez_s64
#undef vcgez_s8
#define vcgez_s8 simde_vcgez_s8
#undef vcgezd_f64
#define vcgezd_f64 simde_vcgezd_f64
#undef vcgezd_s64
#define vcgezd_s64 simde_vcgezd_s64
#undef vcgezh_f16
#define vcgezh_f16 simde_vcgezh_f16
#undef vcgezq_f16
#define vcgezq_f16 simde_vcgezq_f16
#undef vcgezq_f32
#define vcgezq_f32 simde_vcgezq_f32
#undef vcgezq_f64
#define vcgezq_f64 simde_vcgezq_f64
#undef vcgezq_s16
#define vcgezq_s16 simde_vcgezq_s16
#undef vcgezq_s32
#define vcgezq_s32 simde_vcgezq_s32
#undef vcgezq_s64
#define vcgezq_s64 simde_vcgezq_s64
#undef vcgezq_s8
#define vcgezq_s8 simde_vcgezq_s8
#undef vcgezs_f32
#define vcgezs_f32 simde_vcgezs_f32
#undef vcgt_f16
#define vcgt_f16 simde_vcgt_f16
#undef vcgt_f32
#define vcgt_f32 simde_vcgt_f32
#undef vcgt_f64
#define vcgt_f64 simde_vcgt_f64
#undef vcgt_s16
#define vcgt_s16 simde_vcgt_s16
#undef vcgt_s32
#define vcgt_s32 simde_vcgt_s32
#undef vcgt_s64
#define vcgt_s64 simde_vcgt_s64
#undef vcgt_s8
#define vcgt_s8 simde_vcgt_s8
#undef vcgt_u16
#define vcgt_u16 simde_vcgt_u16
#undef vcgt_u32
#define vcgt_u32 simde_vcgt_u32
#undef vcgt_u64
#define vcgt_u64 simde_vcgt_u64
#undef vcgt_u8
#define vcgt_u8 simde_vcgt_u8
#undef vcgtd_f64
#define vcgtd_f64 simde_vcgtd_f64
#undef vcgtd_s64
#define vcgtd_s64 simde_vcgtd_s64
#undef vcgtd_u64
#define vcgtd_u64 simde_vcgtd_u64
#undef vcgth_f16
#define vcgth_f16 simde_vcgth_f16
#undef vcgtq_f16
#define vcgtq_f16 simde_vcgtq_f16
#undef vcgtq_f32
#define vcgtq_f32 simde_vcgtq_f32
#undef vcgtq_f64
#define vcgtq_f64 simde_vcgtq_f64
#undef vcgtq_s16
#define vcgtq_s16 simde_vcgtq_s16
#undef vcgtq_s32
#define vcgtq_s32 simde_vcgtq_s32
#undef vcgtq_s64
#define vcgtq_s64 simde_vcgtq_s64
#undef vcgtq_s8
#define vcgtq_s8 simde_vcgtq_s8
#undef vcgtq_u16
#define vcgtq_u16 simde_vcgtq_u16
#undef vcgtq_u32
#define vcgtq_u32 simde_vcgtq_u32
#undef vcgtq_u64
#define vcgtq_u64 simde_vcgtq_u64
#undef vcgtq_u8
#define vcgtq_u8 simde_vcgtq_u8
#undef vcgts_f32
#define vcgts_f32 simde_vcgts_f32
#undef vcgtz_f16
#define vcgtz_f16 simde_vcgtz_f16
#undef vcgtz_f32
#define vcgtz_f32 simde_vcgtz_f32
#undef vcgtz_f64
#define vcgtz_f64 simde_vcgtz_f64
#undef vcgtz_s16
#define vcgtz_s16 simde_vcgtz_s16
#undef vcgtz_s32
#define vcgtz_s32 simde_vcgtz_s32
#undef vcgtz_s64
#define vcgtz_s64 simde_vcgtz_s64
#undef vcgtz_s8
#define vcgtz_s8 simde_vcgtz_s8
#undef vcgtzd_f64
#define vcgtzd_f64 simde_vcgtzd_f64
#undef vcgtzd_s64
#define vcgtzd_s64 simde_vcgtzd_s64
#undef vcgtzh_f16
#define vcgtzh_f16 simde_vcgtzh_f16
#undef vcgtzq_f16
#define vcgtzq_f16 simde_vcgtzq_f16
#undef vcgtzq_f32
#define vcgtzq_f32 simde_vcgtzq_f32
#undef vcgtzq_f64
#define vcgtzq_f64 simde_vcgtzq_f64
#undef vcgtzq_s16
#define vcgtzq_s16 simde_vcgtzq_s16
#undef vcgtzq_s32
#define vcgtzq_s32 simde_vcgtzq_s32
#undef vcgtzq_s64
#define vcgtzq_s64 simde_vcgtzq_s64
#undef vcgtzq_s8
#define vcgtzq_s8 simde_vcgtzq_s8
#undef vcgtzs_f32
#define vcgtzs_f32 simde_vcgtzs_f32
#undef vcle_f16
#define vcle_f16 simde_vcle_f16
#undef vcle_f32
#define vcle_f32 simde_vcle_f32
#undef vcle_f64
#define vcle_f64 simde_vcle_f64
#undef vcle_s16
#define vcle_s16 simde_vcle_s16
#undef vcle_s32
#define vcle_s32 simde_vcle_s32
#undef vcle_s64
#define vcle_s64 simde_vcle_s64
#undef vcle_s8
#define vcle_s8 simde_vcle_s8
#undef vcle_u16
#define vcle_u16 simde_vcle_u16
#undef vcle_u32
#define vcle_u32 simde_vcle_u32
#undef vcle_u64
#define vcle_u64 simde_vcle_u64
#undef vcle_u8
#define vcle_u8 simde_vcle_u8
#undef vcled_f64
#define vcled_f64 simde_vcled_f64
#undef vcled_s64
#define vcled_s64 simde_vcled_s64
#undef vcled_u64
#define vcled_u64 simde_vcled_u64
#undef vcleh_f16
#define vcleh_f16 simde_vcleh_f16
#undef vcleq_f16
#define vcleq_f16 simde_vcleq_f16
#undef vcleq_f32
#define vcleq_f32 simde_vcleq_f32
#undef vcleq_f64
#define vcleq_f64 simde_vcleq_f64
#undef vcleq_s16
#define vcleq_s16 simde_vcleq_s16
#undef vcleq_s32
#define vcleq_s32 simde_vcleq_s32
#undef vcleq_s64
#define vcleq_s64 simde_vcleq_s64
#undef vcleq_s8
#define vcleq_s8 simde_vcleq_s8
#undef vcleq_u16
#define vcleq_u16 simde_vcleq_u16
#undef vcleq_u32
#define vcleq_u32 simde_vcleq_u32
#undef vcleq_u64
#define vcleq_u64 simde_vcleq_u64
#undef vcleq_u8
#define vcleq_u8 simde_vcleq_u8
#undef vcles_f32
#define vcles_f32 simde_vcles_f32
#undef vclez_f16
#define vclez_f16 simde_vclez_f16
#undef vclez_f32
#define vclez_f32 simde_vclez_f32
#undef vclez_f64
#define vclez_f64 simde_vclez_f64
#undef vclez_s16
#define vclez_s16 simde_vclez_s16
#undef vclez_s32
#define vclez_s32 simde_vclez_s32
#undef vclez_s64
#define vclez_s64 simde_vclez_s64
#undef vclez_s8
#define vclez_s8 simde_vclez_s8
#undef vclezd_f64
#define vclezd_f64 simde_vclezd_f64
#undef vclezd_s64
#define vclezd_s64 simde_vclezd_s64
#undef vclezh_f16
#define vclezh_f16 simde_vclezh_f16
#undef vclezq_f16
#define vclezq_f16 simde_vclezq_f16
#undef vclezq_f32
#define vclezq_f32 simde_vclezq_f32
#undef vclezq_f64
#define vclezq_f64 simde_vclezq_f64
#undef vclezq_s16
#define vclezq_s16 simde_vclezq_s16
#undef vclezq_s32
#define vclezq_s32 simde_vclezq_s32
#undef vclezq_s64
#define vclezq_s64 simde_vclezq_s64
#undef vclezq_s8
#define vclezq_s8 simde_vclezq_s8
#undef vclezs_f32
#define vclezs_f32 simde_vclezs_f32
#undef vcls_s16
#define vcls_s16 simde_vcls_s16
#undef vcls_s32
#define vcls_s32 simde_vcls_s32
#undef vcls_s8
#define vcls_s8 simde_vcls_s8
#undef vcls_u16
#define vcls_u16 simde_vcls_u16
#undef vcls_u32
#define vcls_u32 simde_vcls_u32
#undef vcls_u8
#define vcls_u8 simde_vcls_u8
#undef vclsq_s16
#define vclsq_s16 simde_vclsq_s16
#undef vclsq_s32
#define vclsq_s32 simde_vclsq_s32
#undef vclsq_s8
#define vclsq_s8 simde_vclsq_s8
#undef vclsq_u16
#define vclsq_u16 simde_vclsq_u16
#undef vclsq_u32
#define vclsq_u32 simde_vclsq_u32
#undef vclsq_u8
#define vclsq_u8 simde_vclsq_u8
#undef vclt_f16
#define vclt_f16 simde_vclt_f16
#undef vclt_f32
#define vclt_f32 simde_vclt_f32
#undef vclt_f64
#define vclt_f64 simde_vclt_f64
#undef vclt_s16
#define vclt_s16 simde_vclt_s16
#undef vclt_s32
#define vclt_s32 simde_vclt_s32
#undef vclt_s64
#define vclt_s64 simde_vclt_s64
#undef vclt_s8
#define vclt_s8 simde_vclt_s8
#undef vclt_u16
#define vclt_u16 simde_vclt_u16
#undef vclt_u32
#define vclt_u32 simde_vclt_u32
#undef vclt_u64
#define vclt_u64 simde_vclt_u64
#undef vclt_u8
#define vclt_u8 simde_vclt_u8
#undef vcltd_f64
#define vcltd_f64 simde_vcltd_f64
#undef vcltd_s64
#define vcltd_s64 simde_vcltd_s64
#undef vcltd_u64
#define vcltd_u64 simde_vcltd_u64
#undef vclth_f16
#define vclth_f16 simde_vclth_f16
#undef vcltq_f16
#define vcltq_f16 simde_vcltq_f16
#undef vcltq_f32
#define vcltq_f32 simde_vcltq_f32
#undef vcltq_f64
#define vcltq_f64 simde_vcltq_f64
#undef vcltq_s16
#define vcltq_s16 simde_vcltq_s16
#undef vcltq_s32
#define vcltq_s32 simde_vcltq_s32
#undef vcltq_s64
#define vcltq_s64 simde_vcltq_s64
#undef vcltq_s8
#define vcltq_s8 simde_vcltq_s8
#undef vcltq_u16
#define vcltq_u16 simde_vcltq_u16
#undef vcltq_u32
#define vcltq_u32 simde_vcltq_u32
#undef vcltq_u64
#define vcltq_u64 simde_vcltq_u64
#undef vcltq_u8
#define vcltq_u8 simde_vcltq_u8
#undef vclts_f32
#define vclts_f32 simde_vclts_f32
#undef vcltz_f16
#define vcltz_f16 simde_vcltz_f16
#undef vcltz_f32
#define vcltz_f32 simde_vcltz_f32
#undef vcltz_f64
#define vcltz_f64 simde_vcltz_f64
#undef vcltz_s16
#define vcltz_s16 simde_vcltz_s16
#undef vcltz_s32
#define vcltz_s32 simde_vcltz_s32
#undef vcltz_s64
#define vcltz_s64 simde_vcltz_s64
#undef vcltz_s8
#define vcltz_s8 simde_vcltz_s8
#undef vcltzd_f64
#define vcltzd_f64 simde_vcltzd_f64
#undef vcltzd_s64
#define vcltzd_s64 simde_vcltzd_s64
#undef vcltzh_f16
#define vcltzh_f16 simde_vcltzh_f16
#undef vcltzq_f16
#define vcltzq_f16 simde_vcltzq_f16
#undef vcltzq_f32
#define vcltzq_f32 simde_vcltzq_f32
#undef vcltzq_f64
#define vcltzq_f64 simde_vcltzq_f64
#undef vcltzq_s16
#define vcltzq_s16 simde_vcltzq_s16
#undef vcltzq_s32
#define vcltzq_s32 simde_vcltzq_s32
#undef vcltzq_s64
#define vcltzq_s64 simde_vcltzq_s64
#undef vcltzq_s8
#define vcltzq_s8 simde_vcltzq_s8
#undef vcltzs_f32
#define vcltzs_f32 simde_vcltzs_f32
#undef vclz_s16
#define vclz_s16 simde_vclz_s16
#undef vclz_s32
#define vclz_s32 simde_vclz_s32
#undef vclz_s8
#define vclz_s8 simde_vclz_s8
#undef vclz_u16
#define vclz_u16 simde_vclz_u16
#undef vclz_u32
#define vclz_u32 simde_vclz_u32
#undef vclz_u8
#define vclz_u8 simde_vclz_u8
#undef vclzq_s16
#define vclzq_s16 simde_vclzq_s16
#undef vclzq_s32
#define vclzq_s32 simde_vclzq_s32
#undef vclzq_s8
#define vclzq_s8 simde_vclzq_s8
#undef vclzq_u16
#define vclzq_u16 simde_vclzq_u16
#undef vclzq_u32
#define vclzq_u32 simde_vclzq_u32
#undef vclzq_u8
#define vclzq_u8 simde_vclzq_u8
#undef vcmla_f16
#define vcmla_f16 simde_vcmla_f16
#undef vcmla_f32
#define vcmla_f32 simde_vcmla_f32
#undef vcmla_lane_f16
#define vcmla_lane_f16 simde_vcmla_lane_f16
#undef vcmla_lane_f32
#define vcmla_lane_f32 simde_vcmla_lane_f32
#undef vcmla_laneq_f16
#define vcmla_laneq_f16 simde_vcmla_laneq_f16
#undef vcmla_laneq_f32
#define vcmla_laneq_f32 simde_vcmla_laneq_f32
#undef vcmla_rot180_f16
#define vcmla_rot180_f16 simde_vcmla_rot180_f16
#undef vcmla_rot180_f32
#define vcmla_rot180_f32 simde_vcmla_rot180_f32
#undef vcmla_rot180_lane_f16
#define vcmla_rot180_lane_f16 simde_vcmla_rot180_lane_f16
#undef vcmla_rot180_lane_f32
#define vcmla_rot180_lane_f32 simde_vcmla_rot180_lane_f32
#undef vcmla_rot180_laneq_f16
#define vcmla_rot180_laneq_f16 simde_vcmla_rot180_laneq_f16
#undef vcmla_rot180_laneq_f32
#define vcmla_rot180_laneq_f32 simde_vcmla_rot180_laneq_f32
#undef vcmla_rot270_f16
#define vcmla_rot270_f16 simde_vcmla_rot270_f16
#undef vcmla_rot270_f32
#define vcmla_rot270_f32 simde_vcmla_rot270_f32
#undef vcmla_rot270_lane_f16
#define vcmla_rot270_lane_f16 simde_vcmla_rot270_lane_f16
#undef vcmla_rot270_lane_f32
#define vcmla_rot270_lane_f32 simde_vcmla_rot270_lane_f32
#undef vcmla_rot270_laneq_f16
#define vcmla_rot270_laneq_f16 simde_vcmla_rot270_laneq_f16
#undef vcmla_rot270_laneq_f32
#define vcmla_rot270_laneq_f32 simde_vcmla_rot270_laneq_f32
#undef vcmla_rot90_f16
#define vcmla_rot90_f16 simde_vcmla_rot90_f16
#undef vcmla_rot90_f32
#define vcmla_rot90_f32 simde_vcmla_rot90_f32
#undef vcmla_rot90_lane_f16
#define vcmla_rot90_lane_f16 simde_vcmla_rot90_lane_f16
#undef vcmla_rot90_lane_f32
#define vcmla_rot90_lane_f32 simde_vcmla_rot90_lane_f32
#undef vcmla_rot90_laneq_f16
#define vcmla_rot90_laneq_f16 simde_vcmla_rot90_laneq_f16
#undef vcmla_rot90_laneq_f32
#define vcmla_rot90_laneq_f32 simde_vcmla_rot90_laneq_f32
#undef vcmlaq_f16
#define vcmlaq_f16 simde_vcmlaq_f16
#undef vcmlaq_f32
#define vcmlaq_f32 simde_vcmlaq_f32
#undef vcmlaq_f64
#define vcmlaq_f64 simde_vcmlaq_f64
#undef vcmlaq_lane_f16
#define vcmlaq_lane_f16 simde_vcmlaq_lane_f16
#undef vcmlaq_lane_f32
#define vcmlaq_lane_f32 simde_vcmlaq_lane_f32
#undef vcmlaq_laneq_f16
#define vcmlaq_laneq_f16 simde_vcmlaq_laneq_f16
#undef vcmlaq_laneq_f32
#define vcmlaq_laneq_f32 simde_vcmlaq_laneq_f32
#undef vcmlaq_rot180_f16
#define vcmlaq_rot180_f16 simde_vcmlaq_rot180_f16
#undef vcmlaq_rot180_f32
#define vcmlaq_rot180_f32 simde_vcmlaq_rot180_f32
#undef vcmlaq_rot180_f64
#define vcmlaq_rot180_f64 simde_vcmlaq_rot180_f64
#undef vcmlaq_rot180_lane_f16
#define vcmlaq_rot180_lane_f16 simde_vcmlaq_rot180_lane_f16
#undef vcmlaq_rot180_lane_f32
#define vcmlaq_rot180_lane_f32 simde_vcmlaq_rot180_lane_f32
#undef vcmlaq_rot180_laneq_f16
#define vcmlaq_rot180_laneq_f16 simde_vcmlaq_rot180_laneq_f16
#undef vcmlaq_rot180_laneq_f32
#define vcmlaq_rot180_laneq_f32 simde_vcmlaq_rot180_laneq_f32
#undef vcmlaq_rot270_f16
#define vcmlaq_rot270_f16 simde_vcmlaq_rot270_f16
#undef vcmlaq_rot270_f32
#define vcmlaq_rot270_f32 simde_vcmlaq_rot270_f32
#undef vcmlaq_rot270_f64
#define vcmlaq_rot270_f64 simde_vcmlaq_rot270_f64
#undef vcmlaq_rot270_lane_f16
#define vcmlaq_rot270_lane_f16 simde_vcmlaq_rot270_lane_f16
#undef vcmlaq_rot270_lane_f32
#define vcmlaq_rot270_lane_f32 simde_vcmlaq_rot270_lane_f32
#undef vcmlaq_rot270_laneq_f16
#define vcmlaq_rot270_laneq_f16 simde_vcmlaq_rot270_laneq_f16
#undef vcmlaq_rot270_laneq_f32
#define vcmlaq_rot270_laneq_f32 simde_vcmlaq_rot270_laneq_f32
#undef vcmlaq_rot90_f16
#define vcmlaq_rot90_f16 simde_vcmlaq_rot90_f16
#undef vcmlaq_rot90_f32
#define vcmlaq_rot90_f32 simde_vcmlaq_rot90_f32
#undef vcmlaq_rot90_f64
#define vcmlaq_rot90_f64 simde_vcmlaq_rot90_f64
#undef vcmlaq_rot90_lane_f16
#define vcmlaq_rot90_lane_f16 simde_vcmlaq_rot90_lane_f16
#undef vcmlaq_rot90_lane_f32
#define vcmlaq_rot90_lane_f32 simde_vcmlaq_rot90_lane_f32
#undef vcmlaq_rot90_laneq_f16
#define vcmlaq_rot90_laneq_f16 simde_vcmlaq_rot90_laneq_f16
#undef vcmlaq_rot90_laneq_f32
#define vcmlaq_rot90_laneq_f32 simde_vcmlaq_rot90_laneq_f32
#undef vcnt_p8
#define vcnt_p8 simde_vcnt_p8
#undef vcnt_s8
#define vcnt_s8 simde_vcnt_s8
#undef vcnt_u8
#define vcnt_u8 simde_vcnt_u8
#undef vcntq_p8
#define vcntq_p8 simde_vcntq_p8
#undef vcntq_s8
#define vcntq_s8 simde_vcntq_s8
#undef vcntq_u8
#define vcntq_u8 simde_vcntq_u8
#undef vcombine_bf16
#define vcombine_bf16 simde_vcombine_bf16
#undef vcombine_f16
#define vcombine_f16 simde_vcombine_f16
#undef vcombine_f32
#define vcombine_f32 simde_vcombine_f32
#undef vcombine_f64
#define vcombine_f64 simde_vcombine_f64
#undef vcombine_p16
#define vcombine_p16 simde_vcombine_p16
#undef vcombine_p64
#define vcombine_p64 simde_vcombine_p64
#undef vcombine_p8
#define vcombine_p8 simde_vcombine_p8
#undef vcombine_s16
#define vcombine_s16 simde_vcombine_s16
#undef vcombine_s32
#define vcombine_s32 simde_vcombine_s32
#undef vcombine_s64
#define vcombine_s64 simde_vcombine_s64
#undef vcombine_s8
#define vcombine_s8 simde_vcombine_s8
#undef vcombine_u16
#define vcombine_u16 simde_vcombine_u16
#undef vcombine_u32
#define vcombine_u32 simde_vcombine_u32
#undef vcombine_u64
#define vcombine_u64 simde_vcombine_u64
#undef vcombine_u8
#define vcombine_u8 simde_vcombine_u8
#undef vcopy_lane_bf16
#define vcopy_lane_bf16 simde_vcopy_lane_bf16
#undef vcopy_lane_f32
#define vcopy_lane_f32 simde_vcopy_lane_f32
#undef vcopy_lane_f64
#define vcopy_lane_f64 simde_vcopy_lane_f64
#undef vcopy_lane_p16
#define vcopy_lane_p16 simde_vcopy_lane_p16
#undef vcopy_lane_p64
#define vcopy_lane_p64 simde_vcopy_lane_p64
#undef vcopy_lane_p8
#define vcopy_lane_p8 simde_vcopy_lane_p8
#undef vcopy_lane_s16
#define vcopy_lane_s16 simde_vcopy_lane_s16
#undef vcopy_lane_s32
#define vcopy_lane_s32 simde_vcopy_lane_s32
#undef vcopy_lane_s64
#define vcopy_lane_s64 simde_vcopy_lane_s64
#undef vcopy_lane_s8
#define vcopy_lane_s8 simde_vcopy_lane_s8
#undef vcopy_lane_u16
#define vcopy_lane_u16 simde_vcopy_lane_u16
#undef vcopy_lane_u32
#define vcopy_lane_u32 simde_vcopy_lane_u32
#undef vcopy_lane_u64
#define vcopy_lane_u64 simde_vcopy_lane_u64
#undef vcopy_lane_u8
#define vcopy_lane_u8 simde_vcopy_lane_u8
#undef vcopy_laneq_bf16
#define vcopy_laneq_bf16 simde_vcopy_laneq_bf16
#undef vcopy_laneq_f32
#define vcopy_laneq_f32 simde_vcopy_laneq_f32
#undef vcopy_laneq_f64
#define vcopy_laneq_f64 simde_vcopy_laneq_f64
#undef vcopy_laneq_p16
#define vcopy_laneq_p16 simde_vcopy_laneq_p16
#undef vcopy_laneq_p64
#define vcopy_laneq_p64 simde_vcopy_laneq_p64
#undef vcopy_laneq_p8
#define vcopy_laneq_p8 simde_vcopy_laneq_p8
#undef vcopy_laneq_s16
#define vcopy_laneq_s16 simde_vcopy_laneq_s16
#undef vcopy_laneq_s32
#define vcopy_laneq_s32 simde_vcopy_laneq_s32
#undef vcopy_laneq_s64
#define vcopy_laneq_s64 simde_vcopy_laneq_s64
#undef vcopy_laneq_s8
#define vcopy_laneq_s8 simde_vcopy_laneq_s8
#undef vcopy_laneq_u16
#define vcopy_laneq_u16 simde_vcopy_laneq_u16
#undef vcopy_laneq_u32
#define vcopy_laneq_u32 simde_vcopy_laneq_u32
#undef vcopy_laneq_u64
#define vcopy_laneq_u64 simde_vcopy_laneq_u64
#undef vcopy_laneq_u8
#define vcopy_laneq_u8 simde_vcopy_laneq_u8
#undef vcopyq_lane_bf16
#define vcopyq_lane_bf16 simde_vcopyq_lane_bf16
#undef vcopyq_lane_f32
#define vcopyq_lane_f32 simde_vcopyq_lane_f32
#undef vcopyq_lane_f64
#define vcopyq_lane_f64 simde_vcopyq_lane_f64
#undef vcopyq_lane_p16
#define vcopyq_lane_p16 simde_vcopyq_lane_p16
#undef vcopyq_lane_p64
#define vcopyq_lane_p64 simde_vcopyq_lane_p64
#undef vcopyq_lane_p8
#define vcopyq_lane_p8 simde_vcopyq_lane_p8
#undef vcopyq_lane_s16
#define vcopyq_lane_s16 simde_vcopyq_lane_s16
#undef vcopyq_lane_s32
#define vcopyq_lane_s32 simde_vcopyq_lane_s32
#undef vcopyq_lane_s64
#define vcopyq_lane_s64 simde_vcopyq_lane_s64
#undef vcopyq_lane_s8
#define vcopyq_lane_s8 simde_vcopyq_lane_s8
#undef vcopyq_lane_u16
#define vcopyq_lane_u16 simde_vcopyq_lane_u16
#undef vcopyq_lane_u32
#define vcopyq_lane_u32 simde_vcopyq_lane_u32
#undef vcopyq_lane_u64
#define vcopyq_lane_u64 simde_vcopyq_lane_u64
#undef vcopyq_lane_u8
#define vcopyq_lane_u8 simde_vcopyq_lane_u8
#undef vcopyq_laneq_bf16
#define vcopyq_laneq_bf16 simde_vcopyq_laneq_bf16
#undef vcopyq_laneq_f32
#define vcopyq_laneq_f32 simde_vcopyq_laneq_f32
#undef vcopyq_laneq_f64
#define vcopyq_laneq_f64 simde_vcopyq_laneq_f64
#undef vcopyq_laneq_p16
#define vcopyq_laneq_p16 simde_vcopyq_laneq_p16
#undef vcopyq_laneq_p64
#define vcopyq_laneq_p64 simde_vcopyq_laneq_p64
#undef vcopyq_laneq_p8
#define vcopyq_laneq_p8 simde_vcopyq_laneq_p8
#undef vcopyq_laneq_s16
#define vcopyq_laneq_s16 simde_vcopyq_laneq_s16
#undef vcopyq_laneq_s32
#define vcopyq_laneq_s32 simde_vcopyq_laneq_s32
#undef vcopyq_laneq_s64
#define vcopyq_laneq_s64 simde_vcopyq_laneq_s64
#undef vcopyq_laneq_s8
#define vcopyq_laneq_s8 simde_vcopyq_laneq_s8
#undef vcopyq_laneq_u16
#define vcopyq_laneq_u16 simde_vcopyq_laneq_u16
#undef vcopyq_laneq_u32
#define vcopyq_laneq_u32 simde_vcopyq_laneq_u32
#undef vcopyq_laneq_u64
#define vcopyq_laneq_u64 simde_vcopyq_laneq_u64
#undef vcopyq_laneq_u8
#define vcopyq_laneq_u8 simde_vcopyq_laneq_u8
#undef vcreate_bf16
#define vcreate_bf16 simde_vcreate_bf16
#undef vcreate_f16
#define vcreate_f16 simde_vcreate_f16
#undef vcreate_f32
#define vcreate_f32 simde_vcreate_f32
#undef vcreate_f64
#define vcreate_f64 simde_vcreate_f64
#undef vcreate_p16
#define vcreate_p16 simde_vcreate_p16
#undef vcreate_p64
#define vcreate_p64 simde_vcreate_p64
#undef vcreate_p8
#define vcreate_p8 simde_vcreate_p8
#undef vcreate_s16
#define vcreate_s16 simde_vcreate_s16
#undef vcreate_s32
#define vcreate_s32 simde_vcreate_s32
#undef vcreate_s64
#define vcreate_s64 simde_vcreate_s64
#undef vcreate_s8
#define vcreate_s8 simde_vcreate_s8
#undef vcreate_u16
#define vcreate_u16 simde_vcreate_u16
#undef vcreate_u32
#define vcreate_u32 simde_vcreate_u32
#undef vcreate_u64
#define vcreate_u64 simde_vcreate_u64
#undef vcreate_u8
#define vcreate_u8 simde_vcreate_u8
#undef vcvt_bf16_f32
#define vcvt_bf16_f32 simde_vcvt_bf16_f32
#undef vcvt_f16_f32
#define vcvt_f16_f32 simde_vcvt_f16_f32
#undef vcvt_f16_s16
#define vcvt_f16_s16 simde_vcvt_f16_s16
#undef vcvt_f16_u16
#define vcvt_f16_u16 simde_vcvt_f16_u16
#undef vcvt_f32_bf16
#define vcvt_f32_bf16 simde_vcvt_f32_bf16
#undef vcvt_f32_f16
#define vcvt_f32_f16 simde_vcvt_f32_f16
#undef vcvt_f32_f64
#define vcvt_f32_f64 simde_vcvt_f32_f64
#undef vcvt_f32_s32
#define vcvt_f32_s32 simde_vcvt_f32_s32
#undef vcvt_f32_u32
#define vcvt_f32_u32 simde_vcvt_f32_u32
#undef vcvt_f64_f32
#define vcvt_f64_f32 simde_vcvt_f64_f32
#undef vcvt_f64_s64
#define vcvt_f64_s64 simde_vcvt_f64_s64
#undef vcvt_f64_u64
#define vcvt_f64_u64 simde_vcvt_f64_u64
#undef vcvt_high_f16_f32
#define vcvt_high_f16_f32 simde_vcvt_high_f16_f32
#undef vcvt_high_f32_f16
#define vcvt_high_f32_f16 simde_vcvt_high_f32_f16
#undef vcvt_high_f32_f64
#define vcvt_high_f32_f64 simde_vcvt_high_f32_f64
#undef vcvt_high_f64_f32
#define vcvt_high_f64_f32 simde_vcvt_high_f64_f32
#undef vcvt_n_f16_s16
#define vcvt_n_f16_s16 simde_vcvt_n_f16_s16
#undef vcvt_n_f16_u16
#define vcvt_n_f16_u16 simde_vcvt_n_f16_u16
#undef vcvt_n_f32_s32
#define vcvt_n_f32_s32 simde_vcvt_n_f32_s32
#undef vcvt_n_f32_u32
#define vcvt_n_f32_u32 simde_vcvt_n_f32_u32
#undef vcvt_n_f64_s64
#define vcvt_n_f64_s64 simde_vcvt_n_f64_s64
#undef vcvt_n_f64_u64
#define vcvt_n_f64_u64 simde_vcvt_n_f64_u64
#undef vcvt_n_s32_f32
#define vcvt_n_s32_f32 simde_vcvt_n_s32_f32
#undef vcvt_n_s64_f64
#define vcvt_n_s64_f64 simde_vcvt_n_s64_f64
#undef vcvt_n_u16_f16
#define vcvt_n_u16_f16 simde_vcvt_n_u16_f16
#undef vcvt_n_u32_f32
#define vcvt_n_u32_f32 simde_vcvt_n_u32_f32
#undef vcvt_n_u64_f64
#define vcvt_n_u64_f64 simde_vcvt_n_u64_f64
#undef vcvt_s32_f32
#define vcvt_s32_f32 simde_vcvt_s32_f32
#undef vcvt_s64_f64
#define vcvt_s64_f64 simde_vcvt_s64_f64
#undef vcvt_u16_f16
#define vcvt_u16_f16 simde_vcvt_u16_f16
#undef vcvt_u32_f32
#define vcvt_u32_f32 simde_vcvt_u32_f32
#undef vcvt_u64_f64
#define vcvt_u64_f64 simde_vcvt_u64_f64
#undef vcvta_s32_f32
#define vcvta_s32_f32 simde_vcvta_s32_f32
#undef vcvta_s64_f64
#define vcvta_s64_f64 simde_vcvta_s64_f64
#undef vcvta_u16_f16
#define vcvta_u16_f16 simde_vcvta_u16_f16
#undef vcvta_u32_f32
#define vcvta_u32_f32 simde_vcvta_u32_f32
#undef vcvta_u64_f64
#define vcvta_u64_f64 simde_vcvta_u64_f64
#undef vcvtad_s64_f64
#define vcvtad_s64_f64 simde_vcvtad_s64_f64
#undef vcvtad_u64_f64
#define vcvtad_u64_f64 simde_vcvtad_u64_f64
#undef vcvtah_f32_bf16
#define vcvtah_f32_bf16 simde_vcvtah_f32_bf16
#undef vcvtah_s32_f16
#define vcvtah_s32_f16 simde_vcvtah_s32_f16
#undef vcvtah_s64_f16
#define vcvtah_s64_f16 simde_vcvtah_s64_f16
#undef vcvtah_u16_f16
#define vcvtah_u16_f16 simde_vcvtah_u16_f16
#undef vcvtah_u32_f16
#define vcvtah_u32_f16 simde_vcvtah_u32_f16
#undef vcvtah_u64_f16
#define vcvtah_u64_f16 simde_vcvtah_u64_f16
#undef vcvtaq_s32_f32
#define vcvtaq_s32_f32 simde_vcvtaq_s32_f32
#undef vcvtaq_s64_f64
#define vcvtaq_s64_f64 simde_vcvtaq_s64_f64
#undef vcvtaq_u16_f16
#define vcvtaq_u16_f16 simde_vcvtaq_u16_f16
#undef vcvtaq_u32_f32
#define vcvtaq_u32_f32 simde_vcvtaq_u32_f32
#undef vcvtaq_u64_f64
#define vcvtaq_u64_f64 simde_vcvtaq_u64_f64
#undef vcvtas_s32_f32
#define vcvtas_s32_f32 simde_vcvtas_s32_f32
#undef vcvtas_u32_f32
#define vcvtas_u32_f32 simde_vcvtas_u32_f32
#undef vcvtd_f64_s64
#define vcvtd_f64_s64 simde_vcvtd_f64_s64
#undef vcvtd_f64_u64
#define vcvtd_f64_u64 simde_vcvtd_f64_u64
#undef vcvtd_n_f64_s64
#define vcvtd_n_f64_s64 simde_vcvtd_n_f64_s64
#undef vcvtd_n_f64_u64
#define vcvtd_n_f64_u64 simde_vcvtd_n_f64_u64
#undef vcvtd_n_s64_f64
#define vcvtd_n_s64_f64 simde_vcvtd_n_s64_f64
#undef vcvtd_n_u64_f64
#define vcvtd_n_u64_f64 simde_vcvtd_n_u64_f64
#undef vcvtd_s64_f64
#define vcvtd_s64_f64 simde_vcvtd_s64_f64
#undef vcvtd_u64_f64
#define vcvtd_u64_f64 simde_vcvtd_u64_f64
#undef vcvth_bf16_f32
#define vcvth_bf16_f32 simde_vcvth_bf16_f32
#undef vcvth_f16_s16
#define vcvth_f16_s16 simde_vcvth_f16_s16
#undef vcvth_f16_s32
#define vcvth_f16_s32 simde_vcvth_f16_s32
#undef vcvth_f16_s64
#define vcvth_f16_s64 simde_vcvth_f16_s64
#undef vcvth_f16_u16
#define vcvth_f16_u16 simde_vcvth_f16_u16
#undef vcvth_f16_u32
#define vcvth_f16_u32 simde_vcvth_f16_u32
#undef vcvth_f16_u64
#define vcvth_f16_u64 simde_vcvth_f16_u64
#undef vcvth_n_f16_s16
#define vcvth_n_f16_s16 simde_vcvth_n_f16_s16
#undef vcvth_n_f16_u16
#define vcvth_n_f16_u16 simde_vcvth_n_f16_u16
#undef vcvth_n_u16_f16
#define vcvth_n_u16_f16 simde_vcvth_n_u16_f16
#undef vcvth_s32_f16
#define vcvth_s32_f16 simde_vcvth_s32_f16
#undef vcvth_s64_f16
#define vcvth_s64_f16 simde_vcvth_s64_f16
#undef vcvth_u16_f16
#define vcvth_u16_f16 simde_vcvth_u16_f16
#undef vcvth_u32_f16
#define vcvth_u32_f16 simde_vcvth_u32_f16
#undef vcvth_u64_f16
#define vcvth_u64_f16 simde_vcvth_u64_f16
#undef vcvtm_u16_f16
#define vcvtm_u16_f16 simde_vcvtm_u16_f16
#undef vcvtm_u32_f32
#define vcvtm_u32_f32 simde_vcvtm_u32_f32
#undef vcvtm_u64_f64
#define vcvtm_u64_f64 simde_vcvtm_u64_f64
#undef vcvtmd_u64_f64
#define vcvtmd_u64_f64 simde_vcvtmd_u64_f64
#undef vcvtmh_s32_f16
#define vcvtmh_s32_f16 simde_vcvtmh_s32_f16
#undef vcvtmh_s64_f16
#define vcvtmh_s64_f16 simde_vcvtmh_s64_f16
#undef vcvtmh_u16_f16
#define vcvtmh_u16_f16 simde_vcvtmh_u16_f16
#undef vcvtmh_u32_f16
#define vcvtmh_u32_f16 simde_vcvtmh_u32_f16
#undef vcvtmh_u64_f16
#define vcvtmh_u64_f16 simde_vcvtmh_u64_f16
#undef vcvtmq_u16_f16
#define vcvtmq_u16_f16 simde_vcvtmq_u16_f16
#undef vcvtmq_u32_f32
#define vcvtmq_u32_f32 simde_vcvtmq_u32_f32
#undef vcvtmq_u64_f64
#define vcvtmq_u64_f64 simde_vcvtmq_u64_f64
#undef vcvtms_u32_f32
#define vcvtms_u32_f32 simde_vcvtms_u32_f32
#undef vcvtn_s32_f32
#define vcvtn_s32_f32 simde_vcvtn_s32_f32
#undef vcvtn_s64_f64
#define vcvtn_s64_f64 simde_vcvtn_s64_f64
#undef vcvtn_u16_f16
#define vcvtn_u16_f16 simde_vcvtn_u16_f16
#undef vcvtn_u32_f32
#define vcvtn_u32_f32 simde_vcvtn_u32_f32
#undef vcvtn_u64_f64
#define vcvtn_u64_f64 simde_vcvtn_u64_f64
#undef vcvtnd_s64_f64
#define vcvtnd_s64_f64 simde_vcvtnd_s64_f64
#undef vcvtnd_u64_f64
#define vcvtnd_u64_f64 simde_vcvtnd_u64_f64
#undef vcvtnh_s32_f16
#define vcvtnh_s32_f16 simde_vcvtnh_s32_f16
#undef vcvtnh_s64_f16
#define vcvtnh_s64_f16 simde_vcvtnh_s64_f16
#undef vcvtnh_u16_f16
#define vcvtnh_u16_f16 simde_vcvtnh_u16_f16
#undef vcvtnh_u32_f16
#define vcvtnh_u32_f16 simde_vcvtnh_u32_f16
#undef vcvtnh_u64_f16
#define vcvtnh_u64_f16 simde_vcvtnh_u64_f16
#undef vcvtnq_s32_f32
#define vcvtnq_s32_f32 simde_vcvtnq_s32_f32
#undef vcvtnq_s64_f64
#define vcvtnq_s64_f64 simde_vcvtnq_s64_f64
#undef vcvtnq_u16_f16
#define vcvtnq_u16_f16 simde_vcvtnq_u16_f16
#undef vcvtnq_u32_f32
#define vcvtnq_u32_f32 simde_vcvtnq_u32_f32
#undef vcvtnq_u64_f64
#define vcvtnq_u64_f64 simde_vcvtnq_u64_f64
#undef vcvtns_s32_f32
#define vcvtns_s32_f32 simde_vcvtns_s32_f32
#undef vcvtns_u32_f32
#define vcvtns_u32_f32 simde_vcvtns_u32_f32
#undef vcvtp_u16_f16
#define vcvtp_u16_f16 simde_vcvtp_u16_f16
#undef vcvtp_u32_f32
#define vcvtp_u32_f32 simde_vcvtp_u32_f32
#undef vcvtp_u64_f64
#define vcvtp_u64_f64 simde_vcvtp_u64_f64
#undef vcvtpd_u64_f64
#define vcvtpd_u64_f64 simde_vcvtpd_u64_f64
#undef vcvtph_s32_f16
#define vcvtph_s32_f16 simde_vcvtph_s32_f16
#undef vcvtph_s64_f16
#define vcvtph_s64_f16 simde_vcvtph_s64_f16
#undef vcvtph_u16_f16
#define vcvtph_u16_f16 simde_vcvtph_u16_f16
#undef vcvtph_u32_f16
#define vcvtph_u32_f16 simde_vcvtph_u32_f16
#undef vcvtph_u64_f16
#define vcvtph_u64_f16 simde_vcvtph_u64_f16
#undef vcvtpq_u16_f16
#define vcvtpq_u16_f16 simde_vcvtpq_u16_f16
#undef vcvtpq_u32_f32
#define vcvtpq_u32_f32 simde_vcvtpq_u32_f32
#undef vcvtpq_u64_f64
#define vcvtpq_u64_f64 simde_vcvtpq_u64_f64
#undef vcvtps_u32_f32
#define vcvtps_u32_f32 simde_vcvtps_u32_f32
#undef vcvtq_f16_s16
#define vcvtq_f16_s16 simde_vcvtq_f16_s16
#undef vcvtq_f16_u16
#define vcvtq_f16_u16 simde_vcvtq_f16_u16
#undef vcvtq_f32_s32
#define vcvtq_f32_s32 simde_vcvtq_f32_s32
#undef vcvtq_f32_u32
#define vcvtq_f32_u32 simde_vcvtq_f32_u32
#undef vcvtq_f64_s64
#define vcvtq_f64_s64 simde_vcvtq_f64_s64
#undef vcvtq_f64_u64
#define vcvtq_f64_u64 simde_vcvtq_f64_u64
#undef vcvtq_high_bf16_f32
#define vcvtq_high_bf16_f32 simde_vcvtq_high_bf16_f32
#undef vcvtq_high_f32_bf16
#define vcvtq_high_f32_bf16 simde_vcvtq_high_f32_bf16
#undef vcvtq_low_bf16_f32
#define vcvtq_low_bf16_f32 simde_vcvtq_low_bf16_f32
#undef vcvtq_low_f32_bf16
#define vcvtq_low_f32_bf16 simde_vcvtq_low_f32_bf16
#undef vcvtq_n_f16_s16
#define vcvtq_n_f16_s16 simde_vcvtq_n_f16_s16
#undef vcvtq_n_f16_u16
#define vcvtq_n_f16_u16 simde_vcvtq_n_f16_u16
#undef vcvtq_n_f32_s32
#define vcvtq_n_f32_s32 simde_vcvtq_n_f32_s32
#undef vcvtq_n_f32_u32
#define vcvtq_n_f32_u32 simde_vcvtq_n_f32_u32
#undef vcvtq_n_f64_s64
#define vcvtq_n_f64_s64 simde_vcvtq_n_f64_s64
#undef vcvtq_n_f64_u64
#define vcvtq_n_f64_u64 simde_vcvtq_n_f64_u64
#undef vcvtq_n_s32_f32
#define vcvtq_n_s32_f32 simde_vcvtq_n_s32_f32
#undef vcvtq_n_s64_f64
#define vcvtq_n_s64_f64 simde_vcvtq_n_s64_f64
#undef vcvtq_n_u16_f16
#define vcvtq_n_u16_f16 simde_vcvtq_n_u16_f16
#undef vcvtq_n_u32_f32
#define vcvtq_n_u32_f32 simde_vcvtq_n_u32_f32
#undef vcvtq_n_u64_f64
#define vcvtq_n_u64_f64 simde_vcvtq_n_u64_f64
#undef vcvtq_s32_f32
#define vcvtq_s32_f32 simde_vcvtq_s32_f32
#undef vcvtq_s64_f64
#define vcvtq_s64_f64 simde_vcvtq_s64_f64
#undef vcvtq_u16_f16
#define vcvtq_u16_f16 simde_vcvtq_u16_f16
#undef vcvtq_u32_f32
#define vcvtq_u32_f32 simde_vcvtq_u32_f32
#undef vcvtq_u64_f64
#define vcvtq_u64_f64 simde_vcvtq_u64_f64
#undef vcvts_f32_s32
#define vcvts_f32_s32 simde_vcvts_f32_s32
#undef vcvts_f32_u32
#define vcvts_f32_u32 simde_vcvts_f32_u32
#undef vcvts_n_f32_s32
#define vcvts_n_f32_s32 simde_vcvts_n_f32_s32
#undef vcvts_n_f32_u32
#define vcvts_n_f32_u32 simde_vcvts_n_f32_u32
#undef vcvts_n_s32_f32
#define vcvts_n_s32_f32 simde_vcvts_n_s32_f32
#undef vcvts_n_u32_f32
#define vcvts_n_u32_f32 simde_vcvts_n_u32_f32
#undef vcvts_s32_f32
#define vcvts_s32_f32 simde_vcvts_s32_f32
#undef vcvts_u32_f32
#define vcvts_u32_f32 simde_vcvts_u32_f32
#undef vcvtx_f32_f64
#define vcvtx_f32_f64 simde_vcvtx_f32_f64
#undef vcvtx_high_f32_f64
#define vcvtx_high_f32_f64 simde_vcvtx_high_f32_f64
#undef vcvtxd_f32_f64
#define vcvtxd_f32_f64 simde_vcvtxd_f32_f64
#undef vdiv_f16
#define vdiv_f16 simde_vdiv_f16
#undef vdiv_f32
#define vdiv_f32 simde_vdiv_f32
#undef vdiv_f64
#define vdiv_f64 simde_vdiv_f64
#undef vdivh_f16
#define vdivh_f16 simde_vdivh_f16
#undef vdivq_f16
#define vdivq_f16 simde_vdivq_f16
#undef vdivq_f32
#define vdivq_f32 simde_vdivq_f32
#undef vdivq_f64
#define vdivq_f64 simde_vdivq_f64
#undef vdot_lane_s32
#define vdot_lane_s32 simde_vdot_lane_s32
#undef vdot_lane_u32
#define vdot_lane_u32 simde_vdot_lane_u32
#undef vdot_laneq_s32
#define vdot_laneq_s32 simde_vdot_laneq_s32
#undef vdot_laneq_u32
#define vdot_laneq_u32 simde_vdot_laneq_u32
#undef vdot_s32
#define vdot_s32 simde_vdot_s32
#undef vdot_u32
#define vdot_u32 simde_vdot_u32
#undef vdotq_lane_s32
#define vdotq_lane_s32 simde_vdotq_lane_s32
#undef vdotq_lane_u32
#define vdotq_lane_u32 simde_vdotq_lane_u32
#undef vdotq_laneq_s32
#define vdotq_laneq_s32 simde_vdotq_laneq_s32
#undef vdotq_laneq_u32
#define vdotq_laneq_u32 simde_vdotq_laneq_u32
#undef vdotq_s32
#define vdotq_s32 simde_vdotq_s32
#undef vdotq_u32
#define vdotq_u32 simde_vdotq_u32
#undef vdup_lane_bf16
#define vdup_lane_bf16 simde_vdup_lane_bf16
#undef vdup_lane_f16
#define vdup_lane_f16 simde_vdup_lane_f16
#undef vdup_lane_f32
#define vdup_lane_f32 simde_vdup_lane_f32
#undef vdup_lane_f64
#define vdup_lane_f64 simde_vdup_lane_f64
#undef vdup_lane_p16
#define vdup_lane_p16 simde_vdup_lane_p16
#undef vdup_lane_p64
#define vdup_lane_p64 simde_vdup_lane_p64
#undef vdup_lane_p8
#define vdup_lane_p8 simde_vdup_lane_p8
#undef vdup_lane_s16
#define vdup_lane_s16 simde_vdup_lane_s16
#undef vdup_lane_s32
#define vdup_lane_s32 simde_vdup_lane_s32
#undef vdup_lane_s64
#define vdup_lane_s64 simde_vdup_lane_s64
#undef vdup_lane_s8
#define vdup_lane_s8 simde_vdup_lane_s8
#undef vdup_lane_u16
#define vdup_lane_u16 simde_vdup_lane_u16
#undef vdup_lane_u32
#define vdup_lane_u32 simde_vdup_lane_u32
#undef vdup_lane_u64
#define vdup_lane_u64 simde_vdup_lane_u64
#undef vdup_lane_u8
#define vdup_lane_u8 simde_vdup_lane_u8
#undef vdup_laneq_bf16
#define vdup_laneq_bf16 simde_vdup_laneq_bf16
#undef vdup_laneq_f16
#define vdup_laneq_f16 simde_vdup_laneq_f16
#undef vdup_laneq_f32
#define vdup_laneq_f32 simde_vdup_laneq_f32
#undef vdup_laneq_f64
#define vdup_laneq_f64 simde_vdup_laneq_f64
#undef vdup_laneq_p16
#define vdup_laneq_p16 simde_vdup_laneq_p16
#undef vdup_laneq_p64
#define vdup_laneq_p64 simde_vdup_laneq_p64
#undef vdup_laneq_p8
#define vdup_laneq_p8 simde_vdup_laneq_p8
#undef vdup_laneq_s16
#define vdup_laneq_s16 simde_vdup_laneq_s16
#undef vdup_laneq_s32
#define vdup_laneq_s32 simde_vdup_laneq_s32
#undef vdup_laneq_s64
#define vdup_laneq_s64 simde_vdup_laneq_s64
#undef vdup_laneq_s8
#define vdup_laneq_s8 simde_vdup_laneq_s8
#undef vdup_laneq_u16
#define vdup_laneq_u16 simde_vdup_laneq_u16
#undef vdup_laneq_u32
#define vdup_laneq_u32 simde_vdup_laneq_u32
#undef vdup_laneq_u64
#define vdup_laneq_u64 simde_vdup_laneq_u64
#undef vdup_laneq_u8
#define vdup_laneq_u8 simde_vdup_laneq_u8
#undef vdup_n_bf16
#define vdup_n_bf16 simde_vdup_n_bf16
#undef vdup_n_f16
#define vdup_n_f16 simde_vdup_n_f16
#undef vdup_n_f32
#define vdup_n_f32 simde_vdup_n_f32
#undef vdup_n_f64
#define vdup_n_f64 simde_vdup_n_f64
#undef vdup_n_p16
#define vdup_n_p16 simde_vdup_n_p16
#undef vdup_n_p64
#define vdup_n_p64 simde_vdup_n_p64
#undef vdup_n_p8
#define vdup_n_p8 simde_vdup_n_p8
#undef vdup_n_s16
#define vdup_n_s16 simde_vdup_n_s16
#undef vdup_n_s32
#define vdup_n_s32 simde_vdup_n_s32
#undef vdup_n_s64
#define vdup_n_s64 simde_vdup_n_s64
#undef vdup_n_s8
#define vdup_n_s8 simde_vdup_n_s8
#undef vdup_n_u16
#define vdup_n_u16 simde_vdup_n_u16
#undef vdup_n_u32
#define vdup_n_u32 simde_vdup_n_u32
#undef vdup_n_u64
#define vdup_n_u64 simde_vdup_n_u64
#undef vdup_n_u8
#define vdup_n_u8 simde_vdup_n_u8
#undef vdupb_lane_p8
#define vdupb_lane_p8 simde_vdupb_lane_p8
#undef vdupb_lane_s8
#define vdupb_lane_s8 simde_vdupb_lane_s8
#undef vdupb_lane_u8
#define vdupb_lane_u8 simde_vdupb_lane_u8
#undef vdupb_laneq_p8
#define vdupb_laneq_p8 simde_vdupb_laneq_p8
#undef vdupb_laneq_s8
#define vdupb_laneq_s8 simde_vdupb_laneq_s8
#undef vdupb_laneq_u8
#define vdupb_laneq_u8 simde_vdupb_laneq_u8
#undef vdupd_lane_f64
#define vdupd_lane_f64 simde_vdupd_lane_f64
#undef vdupd_lane_s64
#define vdupd_lane_s64 simde_vdupd_lane_s64
#undef vdupd_lane_u64
#define vdupd_lane_u64 simde_vdupd_lane_u64
#undef vdupd_laneq_f64
#define vdupd_laneq_f64 simde_vdupd_laneq_f64
#undef vdupd_laneq_s64
#define vdupd_laneq_s64 simde_vdupd_laneq_s64
#undef vdupd_laneq_u64
#define vdupd_laneq_u64 simde_vdupd_laneq_u64
#undef vduph_lane_bf16
#define vduph_lane_bf16 simde_vduph_lane_bf16
#undef vduph_lane_f16
#define vduph_lane_f16 simde_vduph_lane_f16
#undef vduph_lane_p16
#define vduph_lane_p16 simde_vduph_lane_p16
#undef vduph_lane_s16
#define vduph_lane_s16 simde_vduph_lane_s16
#undef vduph_lane_u16
#define vduph_lane_u16 simde_vduph_lane_u16
#undef vduph_laneq_bf16
#define vduph_laneq_bf16 simde_vduph_laneq_bf16
#undef vduph_laneq_f16
#define vduph_laneq_f16 simde_vduph_laneq_f16
#undef vduph_laneq_p16
#define vduph_laneq_p16 simde_vduph_laneq_p16
#undef vduph_laneq_s16
#define vduph_laneq_s16 simde_vduph_laneq_s16
#undef vduph_laneq_u16
#define vduph_laneq_u16 simde_vduph_laneq_u16
#undef vdupq_lane_bf16
#define vdupq_lane_bf16 simde_vdupq_lane_bf16
#undef vdupq_lane_f16
#define vdupq_lane_f16 simde_vdupq_lane_f16
#undef vdupq_lane_f32
#define vdupq_lane_f32 simde_vdupq_lane_f32
#undef vdupq_lane_f64
#define vdupq_lane_f64 simde_vdupq_lane_f64
#undef vdupq_lane_p16
#define vdupq_lane_p16 simde_vdupq_lane_p16
#undef vdupq_lane_p64
#define vdupq_lane_p64 simde_vdupq_lane_p64
#undef vdupq_lane_p8
#define vdupq_lane_p8 simde_vdupq_lane_p8
#undef vdupq_lane_s16
#define vdupq_lane_s16 simde_vdupq_lane_s16
#undef vdupq_lane_s32
#define vdupq_lane_s32 simde_vdupq_lane_s32
#undef vdupq_lane_s64
#define vdupq_lane_s64 simde_vdupq_lane_s64
#undef vdupq_lane_s8
#define vdupq_lane_s8 simde_vdupq_lane_s8
#undef vdupq_lane_u16
#define vdupq_lane_u16 simde_vdupq_lane_u16
#undef vdupq_lane_u32
#define vdupq_lane_u32 simde_vdupq_lane_u32
#undef vdupq_lane_u64
#define vdupq_lane_u64 simde_vdupq_lane_u64
#undef vdupq_lane_u8
#define vdupq_lane_u8 simde_vdupq_lane_u8
#undef vdupq_laneq_bf16
#define vdupq_laneq_bf16 simde_vdupq_laneq_bf16
#undef vdupq_laneq_f16
#define vdupq_laneq_f16 simde_vdupq_laneq_f16
#undef vdupq_laneq_f32
#define vdupq_laneq_f32 simde_vdupq_laneq_f32
#undef vdupq_laneq_f64
#define vdupq_laneq_f64 simde_vdupq_laneq_f64
#undef vdupq_laneq_p16
#define vdupq_laneq_p16 simde_vdupq_laneq_p16
#undef vdupq_laneq_p64
#define vdupq_laneq_p64 simde_vdupq_laneq_p64
#undef vdupq_laneq_p8
#define vdupq_laneq_p8 simde_vdupq_laneq_p8
#undef vdupq_laneq_s16
#define vdupq_laneq_s16 simde_vdupq_laneq_s16
#undef vdupq_laneq_s32
#define vdupq_laneq_s32 simde_vdupq_laneq_s32
#undef vdupq_laneq_s64
#define vdupq_laneq_s64 simde_vdupq_laneq_s64
#undef vdupq_laneq_s8
#define vdupq_laneq_s8 simde_vdupq_laneq_s8
#undef vdupq_laneq_u16
#define vdupq_laneq_u16 simde_vdupq_laneq_u16
#undef vdupq_laneq_u32
#define vdupq_laneq_u32 simde_vdupq_laneq_u32
#undef vdupq_laneq_u64
#define vdupq_laneq_u64 simde_vdupq_laneq_u64
#undef vdupq_laneq_u8
#define vdupq_laneq_u8 simde_vdupq_laneq_u8
#undef vdupq_n_bf16
#define vdupq_n_bf16 simde_vdupq_n_bf16
#undef vdupq_n_f16
#define vdupq_n_f16 simde_vdupq_n_f16
#undef vdupq_n_f32
#define vdupq_n_f32 simde_vdupq_n_f32
#undef vdupq_n_f64
#define vdupq_n_f64 simde_vdupq_n_f64
#undef vdupq_n_p16
#define vdupq_n_p16 simde_vdupq_n_p16
#undef vdupq_n_p64
#define vdupq_n_p64 simde_vdupq_n_p64
#undef vdupq_n_p8
#define vdupq_n_p8 simde_vdupq_n_p8
#undef vdupq_n_s16
#define vdupq_n_s16 simde_vdupq_n_s16
#undef vdupq_n_s32
#define vdupq_n_s32 simde_vdupq_n_s32
#undef vdupq_n_s64
#define vdupq_n_s64 simde_vdupq_n_s64
#undef vdupq_n_s8
#define vdupq_n_s8 simde_vdupq_n_s8
#undef vdupq_n_u16
#define vdupq_n_u16 simde_vdupq_n_u16
#undef vdupq_n_u32
#define vdupq_n_u32 simde_vdupq_n_u32
#undef vdupq_n_u64
#define vdupq_n_u64 simde_vdupq_n_u64
#undef vdupq_n_u8
#define vdupq_n_u8 simde_vdupq_n_u8
#undef vdups_lane_f32
#define vdups_lane_f32 simde_vdups_lane_f32
#undef vdups_lane_s32
#define vdups_lane_s32 simde_vdups_lane_s32
#undef vdups_lane_u32
#define vdups_lane_u32 simde_vdups_lane_u32
#undef vdups_laneq_f32
#define vdups_laneq_f32 simde_vdups_laneq_f32
#undef vdups_laneq_s32
#define vdups_laneq_s32 simde_vdups_laneq_s32
#undef vdups_laneq_u32
#define vdups_laneq_u32 simde_vdups_laneq_u32
#undef veor3q_s16
#define veor3q_s16 simde_veor3q_s16
#undef veor3q_s32
#define veor3q_s32 simde_veor3q_s32
#undef veor3q_s64
#define veor3q_s64 simde_veor3q_s64
#undef veor3q_s8
#define veor3q_s8 simde_veor3q_s8
#undef veor3q_u16
#define veor3q_u16 simde_veor3q_u16
#undef veor3q_u32
#define veor3q_u32 simde_veor3q_u32
#undef veor3q_u64
#define veor3q_u64 simde_veor3q_u64
#undef veor3q_u8
#define veor3q_u8 simde_veor3q_u8
#undef veor_s16
#define veor_s16 simde_veor_s16
#undef veor_s32
#define veor_s32 simde_veor_s32
#undef veor_s64
#define veor_s64 simde_veor_s64
#undef veor_s8
#define veor_s8 simde_veor_s8
#undef veor_u16
#define veor_u16 simde_veor_u16
#undef veor_u32
#define veor_u32 simde_veor_u32
#undef veor_u64
#define veor_u64 simde_veor_u64
#undef veor_u8
#define veor_u8 simde_veor_u8
#undef veorq_s16
#define veorq_s16 simde_veorq_s16
#undef veorq_s32
#define veorq_s32 simde_veorq_s32
#undef veorq_s64
#define veorq_s64 simde_veorq_s64
#undef veorq_s8
#define veorq_s8 simde_veorq_s8
#undef veorq_u16
#define veorq_u16 simde_veorq_u16
#undef veorq_u32
#define veorq_u32 simde_veorq_u32
#undef veorq_u64
#define veorq_u64 simde_veorq_u64
#undef veorq_u8
#define veorq_u8 simde_veorq_u8
#undef vext_f16
#define vext_f16 simde_vext_f16
#undef vext_f32
#define vext_f32 simde_vext_f32
#undef vext_f64
#define vext_f64 simde_vext_f64
#undef vext_p16
#define vext_p16 simde_vext_p16
#undef vext_p64
#define vext_p64 simde_vext_p64
#undef vext_p8
#define vext_p8 simde_vext_p8
#undef vext_s16
#define vext_s16 simde_vext_s16
#undef vext_s32
#define vext_s32 simde_vext_s32
#undef vext_s64
#define vext_s64 simde_vext_s64
#undef vext_s8
#define vext_s8 simde_vext_s8
#undef vext_u16
#define vext_u16 simde_vext_u16
#undef vext_u32
#define vext_u32 simde_vext_u32
#undef vext_u64
#define vext_u64 simde_vext_u64
#undef vext_u8
#define vext_u8 simde_vext_u8
#undef vextq_f16
#define vextq_f16 simde_vextq_f16
#undef vextq_f32
#define vextq_f32 simde_vextq_f32
#undef vextq_f64
#define vextq_f64 simde_vextq_f64
#undef vextq_p16
#define vextq_p16 simde_vextq_p16
#undef vextq_p64
#define vextq_p64 simde_vextq_p64
#undef vextq_p8
#define vextq_p8 simde_vextq_p8
#undef vextq_s16
#define vextq_s16 simde_vextq_s16
#undef vextq_s32
#define vextq_s32 simde_vextq_s32
#undef vextq_s64
#define vextq_s64 simde_vextq_s64
#undef vextq_s8
#define vextq_s8 simde_vextq_s8
#undef vextq_u16
#define vextq_u16 simde_vextq_u16
#undef vextq_u32
#define vextq_u32 simde_vextq_u32
#undef vextq_u64
#define vextq_u64 simde_vextq_u64
#undef vextq_u8
#define vextq_u8 simde_vextq_u8
#undef vfma_f16
#define vfma_f16 simde_vfma_f16
#undef vfma_f32
#define vfma_f32 simde_vfma_f32
#undef vfma_f64
#define vfma_f64 simde_vfma_f64
#undef vfma_lane_f16
#define vfma_lane_f16 simde_vfma_lane_f16
#undef vfma_lane_f32
#define vfma_lane_f32 simde_vfma_lane_f32
#undef vfma_lane_f64
#define vfma_lane_f64 simde_vfma_lane_f64
#undef vfma_laneq_f16
#define vfma_laneq_f16 simde_vfma_laneq_f16
#undef vfma_laneq_f32
#define vfma_laneq_f32 simde_vfma_laneq_f32
#undef vfma_laneq_f64
#define vfma_laneq_f64 simde_vfma_laneq_f64
#undef vfma_n_f16
#define vfma_n_f16 simde_vfma_n_f16
#undef vfma_n_f32
#define vfma_n_f32 simde_vfma_n_f32
#undef vfma_n_f64
#define vfma_n_f64 simde_vfma_n_f64
#undef vfmad_lane_f64
#define vfmad_lane_f64 simde_vfmad_lane_f64
#undef vfmad_laneq_f64
#define vfmad_laneq_f64 simde_vfmad_laneq_f64
#undef vfmah_f16
#define vfmah_f16 simde_vfmah_f16
#undef vfmah_lane_f16
#define vfmah_lane_f16 simde_vfmah_lane_f16
#undef vfmah_laneq_f16
#define vfmah_laneq_f16 simde_vfmah_laneq_f16
#undef vfmaq_f16
#define vfmaq_f16 simde_vfmaq_f16
#undef vfmaq_f32
#define vfmaq_f32 simde_vfmaq_f32
#undef vfmaq_f64
#define vfmaq_f64 simde_vfmaq_f64
#undef vfmaq_lane_f16
#define vfmaq_lane_f16 simde_vfmaq_lane_f16
#undef vfmaq_lane_f32
#define vfmaq_lane_f32 simde_vfmaq_lane_f32
#undef vfmaq_lane_f64
#define vfmaq_lane_f64 simde_vfmaq_lane_f64
#undef vfmaq_laneq_f16
#define vfmaq_laneq_f16 simde_vfmaq_laneq_f16
#undef vfmaq_laneq_f32
#define vfmaq_laneq_f32 simde_vfmaq_laneq_f32
#undef vfmaq_laneq_f64
#define vfmaq_laneq_f64 simde_vfmaq_laneq_f64
#undef vfmaq_n_f16
#define vfmaq_n_f16 simde_vfmaq_n_f16
#undef vfmaq_n_f32
#define vfmaq_n_f32 simde_vfmaq_n_f32
#undef vfmaq_n_f64
#define vfmaq_n_f64 simde_vfmaq_n_f64
#undef vfmas_lane_f32
#define vfmas_lane_f32 simde_vfmas_lane_f32
#undef vfmas_laneq_f32
#define vfmas_laneq_f32 simde_vfmas_laneq_f32
#undef vfmlal_high_f16
#define vfmlal_high_f16 simde_vfmlal_high_f16
#undef vfmlal_lane_high_f16
#define vfmlal_lane_high_f16 simde_vfmlal_lane_high_f16
#undef vfmlal_lane_low_f16
#define vfmlal_lane_low_f16 simde_vfmlal_lane_low_f16
#undef vfmlal_laneq_high_f16
#define vfmlal_laneq_high_f16 simde_vfmlal_laneq_high_f16
#undef vfmlal_laneq_low_f16
#define vfmlal_laneq_low_f16 simde_vfmlal_laneq_low_f16
#undef vfmlal_low_f16
#define vfmlal_low_f16 simde_vfmlal_low_f16
#undef vfmlalq_high_f16
#define vfmlalq_high_f16 simde_vfmlalq_high_f16
#undef vfmlalq_lane_high_f16
#define vfmlalq_lane_high_f16 simde_vfmlalq_lane_high_f16
#undef vfmlalq_lane_low_f16
#define vfmlalq_lane_low_f16 simde_vfmlalq_lane_low_f16
#undef vfmlalq_laneq_high_f16
#define vfmlalq_laneq_high_f16 simde_vfmlalq_laneq_high_f16
#undef vfmlalq_laneq_low_f16
#define vfmlalq_laneq_low_f16 simde_vfmlalq_laneq_low_f16
#undef vfmlalq_low_f16
#define vfmlalq_low_f16 simde_vfmlalq_low_f16
#undef vfmlsl_high_f16
#define vfmlsl_high_f16 simde_vfmlsl_high_f16
#undef vfmlsl_lane_high_f16
#define vfmlsl_lane_high_f16 simde_vfmlsl_lane_high_f16
#undef vfmlsl_lane_low_f16
#define vfmlsl_lane_low_f16 simde_vfmlsl_lane_low_f16
#undef vfmlsl_laneq_high_f16
#define vfmlsl_laneq_high_f16 simde_vfmlsl_laneq_high_f16
#undef vfmlsl_laneq_low_f16
#define vfmlsl_laneq_low_f16 simde_vfmlsl_laneq_low_f16
#undef vfmlsl_low_f16
#define vfmlsl_low_f16 simde_vfmlsl_low_f16
#undef vfmlslq_high_f16
#define vfmlslq_high_f16 simde_vfmlslq_high_f16
#undef vfmlslq_lane_high_f16
#define vfmlslq_lane_high_f16 simde_vfmlslq_lane_high_f16
#undef vfmlslq_lane_low_f16
#define vfmlslq_lane_low_f16 simde_vfmlslq_lane_low_f16
#undef vfmlslq_laneq_high_f16
#define vfmlslq_laneq_high_f16 simde_vfmlslq_laneq_high_f16
#undef vfmlslq_laneq_low_f16
#define vfmlslq_laneq_low_f16 simde_vfmlslq_laneq_low_f16
#undef vfmlslq_low_f16
#define vfmlslq_low_f16 simde_vfmlslq_low_f16
#undef vfms_f16
#define vfms_f16 simde_vfms_f16
#undef vfms_f32
#define vfms_f32 simde_vfms_f32
#undef vfms_f64
#define vfms_f64 simde_vfms_f64
#undef vfms_lane_f16
#define vfms_lane_f16 simde_vfms_lane_f16
#undef vfms_lane_f32
#define vfms_lane_f32 simde_vfms_lane_f32
#undef vfms_lane_f64
#define vfms_lane_f64 simde_vfms_lane_f64
#undef vfms_laneq_f16
#define vfms_laneq_f16 simde_vfms_laneq_f16
#undef vfms_laneq_f32
#define vfms_laneq_f32 simde_vfms_laneq_f32
#undef vfms_laneq_f64
#define vfms_laneq_f64 simde_vfms_laneq_f64
#undef vfms_n_f16
#define vfms_n_f16 simde_vfms_n_f16
#undef vfms_n_f32
#define vfms_n_f32 simde_vfms_n_f32
#undef vfms_n_f64
#define vfms_n_f64 simde_vfms_n_f64
#undef vfmsd_lane_f64
#define vfmsd_lane_f64 simde_vfmsd_lane_f64
#undef vfmsd_laneq_f64
#define vfmsd_laneq_f64 simde_vfmsd_laneq_f64
#undef vfmsh_f16
#define vfmsh_f16 simde_vfmsh_f16
#undef vfmsh_lane_f16
#define vfmsh_lane_f16 simde_vfmsh_lane_f16
#undef vfmsh_laneq_f16
#define vfmsh_laneq_f16 simde_vfmsh_laneq_f16
#undef vfmsq_f16
#define vfmsq_f16 simde_vfmsq_f16
#undef vfmsq_f32
#define vfmsq_f32 simde_vfmsq_f32
#undef vfmsq_f64
#define vfmsq_f64 simde_vfmsq_f64
#undef vfmsq_lane_f16
#define vfmsq_lane_f16 simde_vfmsq_lane_f16
#undef vfmsq_lane_f32
#define vfmsq_lane_f32 simde_vfmsq_lane_f32
#undef vfmsq_lane_f64
#define vfmsq_lane_f64 simde_vfmsq_lane_f64
#undef vfmsq_laneq_f16
#define vfmsq_laneq_f16 simde_vfmsq_laneq_f16
#undef vfmsq_laneq_f32
#define vfmsq_laneq_f32 simde_vfmsq_laneq_f32
#undef vfmsq_laneq_f64
#define vfmsq_laneq_f64 simde_vfmsq_laneq_f64
#undef vfmsq_n_f16
#define vfmsq_n_f16 simde_vfmsq_n_f16
#undef vfmsq_n_f32
#define vfmsq_n_f32 simde_vfmsq_n_f32
#undef vfmsq_n_f64
#define vfmsq_n_f64 simde_vfmsq_n_f64
#undef vfmss_lane_f32
#define vfmss_lane_f32 simde_vfmss_lane_f32
#undef vfmss_laneq_f32
#define vfmss_laneq_f32 simde_vfmss_laneq_f32
#undef vget_high_bf16
#define vget_high_bf16 simde_vget_high_bf16
#undef vget_high_f16
#define vget_high_f16 simde_vget_high_f16
#undef vget_high_f32
#define vget_high_f32 simde_vget_high_f32
#undef vget_high_f64
#define vget_high_f64 simde_vget_high_f64
#undef vget_high_p16
#define vget_high_p16 simde_vget_high_p16
#undef vget_high_p64
#define vget_high_p64 simde_vget_high_p64
#undef vget_high_p8
#define vget_high_p8 simde_vget_high_p8
#undef vget_high_s16
#define vget_high_s16 simde_vget_high_s16
#undef vget_high_s32
#define vget_high_s32 simde_vget_high_s32
#undef vget_high_s64
#define vget_high_s64 simde_vget_high_s64
#undef vget_high_s8
#define vget_high_s8 simde_vget_high_s8
#undef vget_high_u16
#define vget_high_u16 simde_vget_high_u16
#undef vget_high_u32
#define vget_high_u32 simde_vget_high_u32
#undef vget_high_u64
#define vget_high_u64 simde_vget_high_u64
#undef vget_high_u8
#define vget_high_u8 simde_vget_high_u8
#undef vget_lane_bf16
#define vget_lane_bf16 simde_vget_lane_bf16
#undef vget_lane_f16
#define vget_lane_f16 simde_vget_lane_f16
#undef vget_lane_f32
#define vget_lane_f32 simde_vget_lane_f32
#undef vget_lane_f64
#define vget_lane_f64 simde_vget_lane_f64
#undef vget_lane_p16
#define vget_lane_p16 simde_vget_lane_p16
#undef vget_lane_p64
#define vget_lane_p64 simde_vget_lane_p64
#undef vget_lane_p8
#define vget_lane_p8 simde_vget_lane_p8
#undef vget_lane_s16
#define vget_lane_s16 simde_vget_lane_s16
#undef vget_lane_s32
#define vget_lane_s32 simde_vget_lane_s32
#undef vget_lane_s64
#define vget_lane_s64 simde_vget_lane_s64
#undef vget_lane_s8
#define vget_lane_s8 simde_vget_lane_s8
#undef vget_lane_u16
#define vget_lane_u16 simde_vget_lane_u16
#undef vget_lane_u32
#define vget_lane_u32 simde_vget_lane_u32
#undef vget_lane_u64
#define vget_lane_u64 simde_vget_lane_u64
#undef vget_lane_u8
#define vget_lane_u8 simde_vget_lane_u8
#undef vget_low_bf16
#define vget_low_bf16 simde_vget_low_bf16
#undef vget_low_f16
#define vget_low_f16 simde_vget_low_f16
#undef vget_low_f32
#define vget_low_f32 simde_vget_low_f32
#undef vget_low_f64
#define vget_low_f64 simde_vget_low_f64
#undef vget_low_p16
#define vget_low_p16 simde_vget_low_p16
#undef vget_low_p64
#define vget_low_p64 simde_vget_low_p64
#undef vget_low_p8
#define vget_low_p8 simde_vget_low_p8
#undef vget_low_s16
#define vget_low_s16 simde_vget_low_s16
#undef vget_low_s32
#define vget_low_s32 simde_vget_low_s32
#undef vget_low_s64
#define vget_low_s64 simde_vget_low_s64
#undef vget_low_s8
#define vget_low_s8 simde_vget_low_s8
#undef vget_low_u16
#define vget_low_u16 simde_vget_low_u16
#undef vget_low_u32
#define vget_low_u32 simde_vget_low_u32
#undef vget_low_u64
#define vget_low_u64 simde_vget_low_u64
#undef vget_low_u8
#define vget_low_u8 simde_vget_low_u8
#undef vgetq_lane_bf16
#define vgetq_lane_bf16 simde_vgetq_lane_bf16
#undef vgetq_lane_f16
#define vgetq_lane_f16 simde_vgetq_lane_f16
#undef vgetq_lane_f32
#define vgetq_lane_f32 simde_vgetq_lane_f32
#undef vgetq_lane_f64
#define vgetq_lane_f64 simde_vgetq_lane_f64
#undef vgetq_lane_p16
#define vgetq_lane_p16 simde_vgetq_lane_p16
#undef vgetq_lane_p64
#define vgetq_lane_p64 simde_vgetq_lane_p64
#undef vgetq_lane_p8
#define vgetq_lane_p8 simde_vgetq_lane_p8
#undef vgetq_lane_s16
#define vgetq_lane_s16 simde_vgetq_lane_s16
#undef vgetq_lane_s32
#define vgetq_lane_s32 simde_vgetq_lane_s32
#undef vgetq_lane_s64
#define vgetq_lane_s64 simde_vgetq_lane_s64
#undef vgetq_lane_s8
#define vgetq_lane_s8 simde_vgetq_lane_s8
#undef vgetq_lane_u16
#define vgetq_lane_u16 simde_vgetq_lane_u16
#undef vgetq_lane_u32
#define vgetq_lane_u32 simde_vgetq_lane_u32
#undef vgetq_lane_u64
#define vgetq_lane_u64 simde_vgetq_lane_u64
#undef vgetq_lane_u8
#define vgetq_lane_u8 simde_vgetq_lane_u8
#undef vhadd_s16
#define vhadd_s16 simde_vhadd_s16
#undef vhadd_s32
#define vhadd_s32 simde_vhadd_s32
#undef vhadd_s8
#define vhadd_s8 simde_vhadd_s8
#undef vhadd_u16
#define vhadd_u16 simde_vhadd_u16
#undef vhadd_u32
#define vhadd_u32 simde_vhadd_u32
#undef vhadd_u8
#define vhadd_u8 simde_vhadd_u8
#undef vhaddq_s16
#define vhaddq_s16 simde_vhaddq_s16
#undef vhaddq_s32
#define vhaddq_s32 simde_vhaddq_s32
#undef vhaddq_s8
#define vhaddq_s8 simde_vhaddq_s8
#undef vhaddq_u16
#define vhaddq_u16 simde_vhaddq_u16
#undef vhaddq_u32
#define vhaddq_u32 simde_vhaddq_u32
#undef vhaddq_u8
#define vhaddq_u8 simde_vhaddq_u8
#undef vhsub_s16
#define vhsub_s16 simde_vhsub_s16
#undef vhsub_s32
#define vhsub_s32 simde_vhsub_s32
#undef vhsub_s8
#define vhsub_s8 simde_vhsub_s8
#undef vhsub_u16
#define vhsub_u16 simde_vhsub_u16
#undef vhsub_u32
#define vhsub_u32 simde_vhsub_u32
#undef vhsub_u8
#define vhsub_u8 simde_vhsub_u8
#undef vhsubq_s16
#define vhsubq_s16 simde_vhsubq_s16
#undef vhsubq_s32
#define vhsubq_s32 simde_vhsubq_s32
#undef vhsubq_s8
#define vhsubq_s8 simde_vhsubq_s8
#undef vhsubq_u16
#define vhsubq_u16 simde_vhsubq_u16
#undef vhsubq_u32
#define vhsubq_u32 simde_vhsubq_u32
#undef vhsubq_u8
#define vhsubq_u8 simde_vhsubq_u8
#undef vld1_bf16
#define vld1_bf16 simde_vld1_bf16
#undef vld1_bf16_x2
#define vld1_bf16_x2 simde_vld1_bf16_x2
#undef vld1_bf16_x3
#define vld1_bf16_x3 simde_vld1_bf16_x3
#undef vld1_bf16_x4
#define vld1_bf16_x4 simde_vld1_bf16_x4
#undef vld1_dup_bf16
#define vld1_dup_bf16 simde_vld1_dup_bf16
#undef vld1_dup_f16
#define vld1_dup_f16 simde_vld1_dup_f16
#undef vld1_dup_f32
#define vld1_dup_f32 simde_vld1_dup_f32
#undef vld1_dup_f64
#define vld1_dup_f64 simde_vld1_dup_f64
#undef vld1_dup_p16
#define vld1_dup_p16 simde_vld1_dup_p16
#undef vld1_dup_p64
#define vld1_dup_p64 simde_vld1_dup_p64
#undef vld1_dup_p8
#define vld1_dup_p8 simde_vld1_dup_p8
#undef vld1_dup_s16
#define vld1_dup_s16 simde_vld1_dup_s16
#undef vld1_dup_s32
#define vld1_dup_s32 simde_vld1_dup_s32
#undef vld1_dup_s64
#define vld1_dup_s64 simde_vld1_dup_s64
#undef vld1_dup_s8
#define vld1_dup_s8 simde_vld1_dup_s8
#undef vld1_dup_u16
#define vld1_dup_u16 simde_vld1_dup_u16
#undef vld1_dup_u32
#define vld1_dup_u32 simde_vld1_dup_u32
#undef vld1_dup_u64
#define vld1_dup_u64 simde_vld1_dup_u64
#undef vld1_dup_u8
#define vld1_dup_u8 simde_vld1_dup_u8
#undef vld1_f16
#define vld1_f16 simde_vld1_f16
#undef vld1_f16_x2
#define vld1_f16_x2 simde_vld1_f16_x2
#undef vld1_f16_x3
#define vld1_f16_x3 simde_vld1_f16_x3
#undef vld1_f16_x4
#define vld1_f16_x4 simde_vld1_f16_x4
#undef vld1_f32
#define vld1_f32 simde_vld1_f32
#undef vld1_f32_x2
#define vld1_f32_x2 simde_vld1_f32_x2
#undef vld1_f32_x3
#define vld1_f32_x3 simde_vld1_f32_x3
#undef vld1_f32_x4
#define vld1_f32_x4 simde_vld1_f32_x4
#undef vld1_f64
#define vld1_f64 simde_vld1_f64
#undef vld1_f64_x2
#define vld1_f64_x2 simde_vld1_f64_x2
#undef vld1_f64_x3
#define vld1_f64_x3 simde_vld1_f64_x3
#undef vld1_f64_x4
#define vld1_f64_x4 simde_vld1_f64_x4
#undef vld1_lane_bf16
#define vld1_lane_bf16 simde_vld1_lane_bf16
#undef vld1_lane_f16
#define vld1_lane_f16 simde_vld1_lane_f16
#undef vld1_lane_f32
#define vld1_lane_f32 simde_vld1_lane_f32
#undef vld1_lane_f64
#define vld1_lane_f64 simde_vld1_lane_f64
#undef vld1_lane_p16
#define vld1_lane_p16 simde_vld1_lane_p16
#undef vld1_lane_p64
#define vld1_lane_p64 simde_vld1_lane_p64
#undef vld1_lane_p8
#define vld1_lane_p8 simde_vld1_lane_p8
#undef vld1_lane_s16
#define vld1_lane_s16 simde_vld1_lane_s16
#undef vld1_lane_s32
#define vld1_lane_s32 simde_vld1_lane_s32
#undef vld1_lane_s64
#define vld1_lane_s64 simde_vld1_lane_s64
#undef vld1_lane_s8
#define vld1_lane_s8 simde_vld1_lane_s8
#undef vld1_lane_u16
#define vld1_lane_u16 simde_vld1_lane_u16
#undef vld1_lane_u32
#define vld1_lane_u32 simde_vld1_lane_u32
#undef vld1_lane_u64
#define vld1_lane_u64 simde_vld1_lane_u64
#undef vld1_lane_u8
#define vld1_lane_u8 simde_vld1_lane_u8
#undef vld1_p16
#define vld1_p16 simde_vld1_p16
#undef vld1_p16_x2
#define vld1_p16_x2 simde_vld1_p16_x2
#undef vld1_p16_x3
#define vld1_p16_x3 simde_vld1_p16_x3
#undef vld1_p16_x4
#define vld1_p16_x4 simde_vld1_p16_x4
#undef vld1_p64
#define vld1_p64 simde_vld1_p64
#undef vld1_p64_x2
#define vld1_p64_x2 simde_vld1_p64_x2
#undef vld1_p64_x3
#define vld1_p64_x3 simde_vld1_p64_x3
#undef vld1_p64_x4
#define vld1_p64_x4 simde_vld1_p64_x4
#undef vld1_p8
#define vld1_p8 simde_vld1_p8
#undef vld1_p8_x2
#define vld1_p8_x2 simde_vld1_p8_x2
#undef vld1_p8_x3
#define vld1_p8_x3 simde_vld1_p8_x3
#undef vld1_p8_x4
#define vld1_p8_x4 simde_vld1_p8_x4
#undef vld1_s16
#define vld1_s16 simde_vld1_s16
#undef vld1_s16_x2
#define vld1_s16_x2 simde_vld1_s16_x2
#undef vld1_s16_x3
#define vld1_s16_x3 simde_vld1_s16_x3
#undef vld1_s16_x4
#define vld1_s16_x4 simde_vld1_s16_x4
#undef vld1_s32
#define vld1_s32 simde_vld1_s32
#undef vld1_s32_x2
#define vld1_s32_x2 simde_vld1_s32_x2
#undef vld1_s32_x3
#define vld1_s32_x3 simde_vld1_s32_x3
#undef vld1_s32_x4
#define vld1_s32_x4 simde_vld1_s32_x4
#undef vld1_s64
#define vld1_s64 simde_vld1_s64
#undef vld1_s64_x2
#define vld1_s64_x2 simde_vld1_s64_x2
#undef vld1_s64_x3
#define vld1_s64_x3 simde_vld1_s64_x3
#undef vld1_s64_x4
#define vld1_s64_x4 simde_vld1_s64_x4
#undef vld1_s8
#define vld1_s8 simde_vld1_s8
#undef vld1_s8_x2
#define vld1_s8_x2 simde_vld1_s8_x2
#undef vld1_s8_x3
#define vld1_s8_x3 simde_vld1_s8_x3
#undef vld1_s8_x4
#define vld1_s8_x4 simde_vld1_s8_x4
#undef vld1_u16
#define vld1_u16 simde_vld1_u16
#undef vld1_u16_x2
#define vld1_u16_x2 simde_vld1_u16_x2
#undef vld1_u16_x3
#define vld1_u16_x3 simde_vld1_u16_x3
#undef vld1_u16_x4
#define vld1_u16_x4 simde_vld1_u16_x4
#undef vld1_u32
#define vld1_u32 simde_vld1_u32
#undef vld1_u32_x2
#define vld1_u32_x2 simde_vld1_u32_x2
#undef vld1_u32_x3
#define vld1_u32_x3 simde_vld1_u32_x3
#undef vld1_u32_x4
#define vld1_u32_x4 simde_vld1_u32_x4
#undef vld1_u64
#define vld1_u64 simde_vld1_u64
#undef vld1_u64_x2
#define vld1_u64_x2 simde_vld1_u64_x2
#undef vld1_u64_x3
#define vld1_u64_x3 simde_vld1_u64_x3
#undef vld1_u64_x4
#define vld1_u64_x4 simde_vld1_u64_x4
#undef vld1_u8
#define vld1_u8 simde_vld1_u8
#undef vld1_u8_x2
#define vld1_u8_x2 simde_vld1_u8_x2
#undef vld1_u8_x3
#define vld1_u8_x3 simde_vld1_u8_x3
#undef vld1_u8_x4
#define vld1_u8_x4 simde_vld1_u8_x4
#undef vld1q_bf16
#define vld1q_bf16 simde_vld1q_bf16
#undef vld1q_bf16_x2
#define vld1q_bf16_x2 simde_vld1q_bf16_x2
#undef vld1q_bf16_x3
#define vld1q_bf16_x3 simde_vld1q_bf16_x3
#undef vld1q_bf16_x4
#define vld1q_bf16_x4 simde_vld1q_bf16_x4
#undef vld1q_dup_bf16
#define vld1q_dup_bf16 simde_vld1q_dup_bf16
#undef vld1q_dup_f16
#define vld1q_dup_f16 simde_vld1q_dup_f16
#undef vld1q_dup_f32
#define vld1q_dup_f32 simde_vld1q_dup_f32
#undef vld1q_dup_f64
#define vld1q_dup_f64 simde_vld1q_dup_f64
#undef vld1q_dup_p16
#define vld1q_dup_p16 simde_vld1q_dup_p16
#undef vld1q_dup_p64
#define vld1q_dup_p64 simde_vld1q_dup_p64
#undef vld1q_dup_p8
#define vld1q_dup_p8 simde_vld1q_dup_p8
#undef vld1q_dup_s16
#define vld1q_dup_s16 simde_vld1q_dup_s16
#undef vld1q_dup_s32
#define vld1q_dup_s32 simde_vld1q_dup_s32
#undef vld1q_dup_s64
#define vld1q_dup_s64 simde_vld1q_dup_s64
#undef vld1q_dup_s8
#define vld1q_dup_s8 simde_vld1q_dup_s8
#undef vld1q_dup_u16
#define vld1q_dup_u16 simde_vld1q_dup_u16
#undef vld1q_dup_u32
#define vld1q_dup_u32 simde_vld1q_dup_u32
#undef vld1q_dup_u64
#define vld1q_dup_u64 simde_vld1q_dup_u64
#undef vld1q_dup_u8
#define vld1q_dup_u8 simde_vld1q_dup_u8
#undef vld1q_f16
#define vld1q_f16 simde_vld1q_f16
#undef vld1q_f16_x2
#define vld1q_f16_x2 simde_vld1q_f16_x2
#undef vld1q_f16_x3
#define vld1q_f16_x3 simde_vld1q_f16_x3
#undef vld1q_f16_x4
#define vld1q_f16_x4 simde_vld1q_f16_x4
#undef vld1q_f32
#define vld1q_f32 simde_vld1q_f32
#undef vld1q_f32_x2
#define vld1q_f32_x2 simde_vld1q_f32_x2
#undef vld1q_f32_x3
#define vld1q_f32_x3 simde_vld1q_f32_x3
#undef vld1q_f32_x4
#define vld1q_f32_x4 simde_vld1q_f32_x4
#undef vld1q_f64
#define vld1q_f64 simde_vld1q_f64
#undef vld1q_f64_x2
#define vld1q_f64_x2 simde_vld1q_f64_x2
#undef vld1q_f64_x3
#define vld1q_f64_x3 simde_vld1q_f64_x3
#undef vld1q_f64_x4
#define vld1q_f64_x4 simde_vld1q_f64_x4
#undef vld1q_lane_bf16
#define vld1q_lane_bf16 simde_vld1q_lane_bf16
#undef vld1q_lane_f16
#define vld1q_lane_f16 simde_vld1q_lane_f16
#undef vld1q_lane_f32
#define vld1q_lane_f32 simde_vld1q_lane_f32
#undef vld1q_lane_f64
#define vld1q_lane_f64 simde_vld1q_lane_f64
#undef vld1q_lane_p16
#define vld1q_lane_p16 simde_vld1q_lane_p16
#undef vld1q_lane_p64
#define vld1q_lane_p64 simde_vld1q_lane_p64
#undef vld1q_lane_p8
#define vld1q_lane_p8 simde_vld1q_lane_p8
#undef vld1q_lane_s16
#define vld1q_lane_s16 simde_vld1q_lane_s16
#undef vld1q_lane_s32
#define vld1q_lane_s32 simde_vld1q_lane_s32
#undef vld1q_lane_s64
#define vld1q_lane_s64 simde_vld1q_lane_s64
#undef vld1q_lane_s8
#define vld1q_lane_s8 simde_vld1q_lane_s8
#undef vld1q_lane_u16
#define vld1q_lane_u16 simde_vld1q_lane_u16
#undef vld1q_lane_u32
#define vld1q_lane_u32 simde_vld1q_lane_u32
#undef vld1q_lane_u64
#define vld1q_lane_u64 simde_vld1q_lane_u64
#undef vld1q_lane_u8
#define vld1q_lane_u8 simde_vld1q_lane_u8
#undef vld1q_p16
#define vld1q_p16 simde_vld1q_p16
#undef vld1q_p16_x2
#define vld1q_p16_x2 simde_vld1q_p16_x2
#undef vld1q_p16_x3
#define vld1q_p16_x3 simde_vld1q_p16_x3
#undef vld1q_p16_x4
#define vld1q_p16_x4 simde_vld1q_p16_x4
#undef vld1q_p64
#define vld1q_p64 simde_vld1q_p64
#undef vld1q_p64_x2
#define vld1q_p64_x2 simde_vld1q_p64_x2
#undef vld1q_p64_x3
#define vld1q_p64_x3 simde_vld1q_p64_x3
#undef vld1q_p64_x4
#define vld1q_p64_x4 simde_vld1q_p64_x4
#undef vld1q_p8
#define vld1q_p8 simde_vld1q_p8
#undef vld1q_p8_x2
#define vld1q_p8_x2 simde_vld1q_p8_x2
#undef vld1q_p8_x3
#define vld1q_p8_x3 simde_vld1q_p8_x3
#undef vld1q_p8_x4
#define vld1q_p8_x4 simde_vld1q_p8_x4
#undef vld1q_s16
#define vld1q_s16 simde_vld1q_s16
#undef vld1q_s16_x2
#define vld1q_s16_x2 simde_vld1q_s16_x2
#undef vld1q_s16_x3
#define vld1q_s16_x3 simde_vld1q_s16_x3
#undef vld1q_s16_x4
#define vld1q_s16_x4 simde_vld1q_s16_x4
#undef vld1q_s32
#define vld1q_s32 simde_vld1q_s32
#undef vld1q_s32_x2
#define vld1q_s32_x2 simde_vld1q_s32_x2
#undef vld1q_s32_x3
#define vld1q_s32_x3 simde_vld1q_s32_x3
#undef vld1q_s32_x4
#define vld1q_s32_x4 simde_vld1q_s32_x4
#undef vld1q_s64
#define vld1q_s64 simde_vld1q_s64
#undef vld1q_s64_x2
#define vld1q_s64_x2 simde_vld1q_s64_x2
#undef vld1q_s64_x3
#define vld1q_s64_x3 simde_vld1q_s64_x3
#undef vld1q_s64_x4
#define vld1q_s64_x4 simde_vld1q_s64_x4
#undef vld1q_s8
#define vld1q_s8 simde_vld1q_s8
#undef vld1q_s8_x2
#define vld1q_s8_x2 simde_vld1q_s8_x2
#undef vld1q_s8_x3
#define vld1q_s8_x3 simde_vld1q_s8_x3
#undef vld1q_s8_x4
#define vld1q_s8_x4 simde_vld1q_s8_x4
#undef vld1q_u16
#define vld1q_u16 simde_vld1q_u16
#undef vld1q_u16_x2
#define vld1q_u16_x2 simde_vld1q_u16_x2
#undef vld1q_u16_x3
#define vld1q_u16_x3 simde_vld1q_u16_x3
#undef vld1q_u16_x4
#define vld1q_u16_x4 simde_vld1q_u16_x4
#undef vld1q_u32
#define vld1q_u32 simde_vld1q_u32
#undef vld1q_u32_x2
#define vld1q_u32_x2 simde_vld1q_u32_x2
#undef vld1q_u32_x3
#define vld1q_u32_x3 simde_vld1q_u32_x3
#undef vld1q_u32_x4
#define vld1q_u32_x4 simde_vld1q_u32_x4
#undef vld1q_u64
#define vld1q_u64 simde_vld1q_u64
#undef vld1q_u64_x2
#define vld1q_u64_x2 simde_vld1q_u64_x2
#undef vld1q_u64_x3
#define vld1q_u64_x3 simde_vld1q_u64_x3
#undef vld1q_u64_x4
#define vld1q_u64_x4 simde_vld1q_u64_x4
#undef vld1q_u8
#define vld1q_u8 simde_vld1q_u8
#undef vld1q_u8_x2
#define vld1q_u8_x2 simde_vld1q_u8_x2
#undef vld1q_u8_x3
#define vld1q_u8_x3 simde_vld1q_u8_x3
#undef vld1q_u8_x4
#define vld1q_u8_x4 simde_vld1q_u8_x4
#undef vld2_bf16
#define vld2_bf16 simde_vld2_bf16
#undef vld2_dup_bf16
#define vld2_dup_bf16 simde_vld2_dup_bf16
#undef vld2_dup_f16
#define vld2_dup_f16 simde_vld2_dup_f16
#undef vld2_dup_f32
#define vld2_dup_f32 simde_vld2_dup_f32
#undef vld2_dup_f64
#define vld2_dup_f64 simde_vld2_dup_f64
#undef vld2_dup_p16
#define vld2_dup_p16 simde_vld2_dup_p16
#undef vld2_dup_p64
#define vld2_dup_p64 simde_vld2_dup_p64
#undef vld2_dup_p8
#define vld2_dup_p8 simde_vld2_dup_p8
#undef vld2_dup_s16
#define vld2_dup_s16 simde_vld2_dup_s16
#undef vld2_dup_s32
#define vld2_dup_s32 simde_vld2_dup_s32
#undef vld2_dup_s64
#define vld2_dup_s64 simde_vld2_dup_s64
#undef vld2_dup_s8
#define vld2_dup_s8 simde_vld2_dup_s8
#undef vld2_dup_u16
#define vld2_dup_u16 simde_vld2_dup_u16
#undef vld2_dup_u32
#define vld2_dup_u32 simde_vld2_dup_u32
#undef vld2_dup_u64
#define vld2_dup_u64 simde_vld2_dup_u64
#undef vld2_dup_u8
#define vld2_dup_u8 simde_vld2_dup_u8
#undef vld2_f16
#define vld2_f16 simde_vld2_f16
#undef vld2_f32
#define vld2_f32 simde_vld2_f32
#undef vld2_f64
#define vld2_f64 simde_vld2_f64
#undef vld2_lane_bf16
#define vld2_lane_bf16 simde_vld2_lane_bf16
#undef vld2_lane_f16
#define vld2_lane_f16 simde_vld2_lane_f16
#undef vld2_lane_f32
#define vld2_lane_f32 simde_vld2_lane_f32
#undef vld2_lane_f64
#define vld2_lane_f64 simde_vld2_lane_f64
#undef vld2_lane_p16
#define vld2_lane_p16 simde_vld2_lane_p16
#undef vld2_lane_p64
#define vld2_lane_p64 simde_vld2_lane_p64
#undef vld2_lane_p8
#define vld2_lane_p8 simde_vld2_lane_p8
#undef vld2_lane_s16
#define vld2_lane_s16 simde_vld2_lane_s16
#undef vld2_lane_s32
#define vld2_lane_s32 simde_vld2_lane_s32
#undef vld2_lane_s64
#define vld2_lane_s64 simde_vld2_lane_s64
#undef vld2_lane_s8
#define vld2_lane_s8 simde_vld2_lane_s8
#undef vld2_lane_u16
#define vld2_lane_u16 simde_vld2_lane_u16
#undef vld2_lane_u32
#define vld2_lane_u32 simde_vld2_lane_u32
#undef vld2_lane_u64
#define vld2_lane_u64 simde_vld2_lane_u64
#undef vld2_lane_u8
#define vld2_lane_u8 simde_vld2_lane_u8
#undef vld2_p16
#define vld2_p16 simde_vld2_p16
#undef vld2_p64
#define vld2_p64 simde_vld2_p64
#undef vld2_p8
#define vld2_p8 simde_vld2_p8
#undef vld2_s16
#define vld2_s16 simde_vld2_s16
#undef vld2_s32
#define vld2_s32 simde_vld2_s32
#undef vld2_s64
#define vld2_s64 simde_vld2_s64
#undef vld2_s8
#define vld2_s8 simde_vld2_s8
#undef vld2_u16
#define vld2_u16 simde_vld2_u16
#undef vld2_u32
#define vld2_u32 simde_vld2_u32
#undef vld2_u64
#define vld2_u64 simde_vld2_u64
#undef vld2_u8
#define vld2_u8 simde_vld2_u8
#undef vld2q_bf16
#define vld2q_bf16 simde_vld2q_bf16
#undef vld2q_dup_bf16
#define vld2q_dup_bf16 simde_vld2q_dup_bf16
#undef vld2q_dup_f16
#define vld2q_dup_f16 simde_vld2q_dup_f16
#undef vld2q_dup_f32
#define vld2q_dup_f32 simde_vld2q_dup_f32
#undef vld2q_dup_f64
#define vld2q_dup_f64 simde_vld2q_dup_f64
#undef vld2q_dup_p16
#define vld2q_dup_p16 simde_vld2q_dup_p16
#undef vld2q_dup_p64
#define vld2q_dup_p64 simde_vld2q_dup_p64
#undef vld2q_dup_p8
#define vld2q_dup_p8 simde_vld2q_dup_p8
#undef vld2q_dup_s16
#define vld2q_dup_s16 simde_vld2q_dup_s16
#undef vld2q_dup_s32
#define vld2q_dup_s32 simde_vld2q_dup_s32
#undef vld2q_dup_s64
#define vld2q_dup_s64 simde_vld2q_dup_s64
#undef vld2q_dup_s8
#define vld2q_dup_s8 simde_vld2q_dup_s8
#undef vld2q_dup_u16
#define vld2q_dup_u16 simde_vld2q_dup_u16
#undef vld2q_dup_u32
#define vld2q_dup_u32 simde_vld2q_dup_u32
#undef vld2q_dup_u64
#define vld2q_dup_u64 simde_vld2q_dup_u64
#undef vld2q_dup_u8
#define vld2q_dup_u8 simde_vld2q_dup_u8
#undef vld2q_f16
#define vld2q_f16 simde_vld2q_f16
#undef vld2q_f32
#define vld2q_f32 simde_vld2q_f32
#undef vld2q_f64
#define vld2q_f64 simde_vld2q_f64
#undef vld2q_lane_bf16
#define vld2q_lane_bf16 simde_vld2q_lane_bf16
#undef vld2q_lane_f16
#define vld2q_lane_f16 simde_vld2q_lane_f16
#undef vld2q_lane_f32
#define vld2q_lane_f32 simde_vld2q_lane_f32
#undef vld2q_lane_f64
#define vld2q_lane_f64 simde_vld2q_lane_f64
#undef vld2q_lane_p16
#define vld2q_lane_p16 simde_vld2q_lane_p16
#undef vld2q_lane_p64
#define vld2q_lane_p64 simde_vld2q_lane_p64
#undef vld2q_lane_p8
#define vld2q_lane_p8 simde_vld2q_lane_p8
#undef vld2q_lane_s16
#define vld2q_lane_s16 simde_vld2q_lane_s16
#undef vld2q_lane_s32
#define vld2q_lane_s32 simde_vld2q_lane_s32
#undef vld2q_lane_s64
#define vld2q_lane_s64 simde_vld2q_lane_s64
#undef vld2q_lane_s8
#define vld2q_lane_s8 simde_vld2q_lane_s8
#undef vld2q_lane_u16
#define vld2q_lane_u16 simde_vld2q_lane_u16
#undef vld2q_lane_u32
#define vld2q_lane_u32 simde_vld2q_lane_u32
#undef vld2q_lane_u64
#define vld2q_lane_u64 simde_vld2q_lane_u64
#undef vld2q_lane_u8
#define vld2q_lane_u8 simde_vld2q_lane_u8
#undef vld2q_p16
#define vld2q_p16 simde_vld2q_p16
#undef vld2q_p64
#define vld2q_p64 simde_vld2q_p64
#undef vld2q_p8
#define vld2q_p8 simde_vld2q_p8
#undef vld2q_s16
#define vld2q_s16 simde_vld2q_s16
#undef vld2q_s32
#define vld2q_s32 simde_vld2q_s32
#undef vld2q_s64
#define vld2q_s64 simde_vld2q_s64
#undef vld2q_s8
#define vld2q_s8 simde_vld2q_s8
#undef vld2q_u16
#define vld2q_u16 simde_vld2q_u16
#undef vld2q_u32
#define vld2q_u32 simde_vld2q_u32
#undef vld2q_u64
#define vld2q_u64 simde_vld2q_u64
#undef vld2q_u8
#define vld2q_u8 simde_vld2q_u8
#undef vld3_bf16
#define vld3_bf16 simde_vld3_bf16
#undef vld3_dup_bf16
#define vld3_dup_bf16 simde_vld3_dup_bf16
#undef vld3_dup_f16
#define vld3_dup_f16 simde_vld3_dup_f16
#undef vld3_dup_f32
#define vld3_dup_f32 simde_vld3_dup_f32
#undef vld3_dup_f64
#define vld3_dup_f64 simde_vld3_dup_f64
#undef vld3_dup_p16
#define vld3_dup_p16 simde_vld3_dup_p16
#undef vld3_dup_p64
#define vld3_dup_p64 simde_vld3_dup_p64
#undef vld3_dup_p8
#define vld3_dup_p8 simde_vld3_dup_p8
#undef vld3_dup_s16
#define vld3_dup_s16 simde_vld3_dup_s16
#undef vld3_dup_s32
#define vld3_dup_s32 simde_vld3_dup_s32
#undef vld3_dup_s64
#define vld3_dup_s64 simde_vld3_dup_s64
#undef vld3_dup_s8
#define vld3_dup_s8 simde_vld3_dup_s8
#undef vld3_dup_u16
#define vld3_dup_u16 simde_vld3_dup_u16
#undef vld3_dup_u32
#define vld3_dup_u32 simde_vld3_dup_u32
#undef vld3_dup_u64
#define vld3_dup_u64 simde_vld3_dup_u64
#undef vld3_dup_u8
#define vld3_dup_u8 simde_vld3_dup_u8
#undef vld3_f16
#define vld3_f16 simde_vld3_f16
#undef vld3_f32
#define vld3_f32 simde_vld3_f32
#undef vld3_f64
#define vld3_f64 simde_vld3_f64
#undef vld3_lane_bf16
#define vld3_lane_bf16 simde_vld3_lane_bf16
#undef vld3_lane_f16
#define vld3_lane_f16 simde_vld3_lane_f16
#undef vld3_lane_f32
#define vld3_lane_f32 simde_vld3_lane_f32
#undef vld3_lane_f64
#define vld3_lane_f64 simde_vld3_lane_f64
#undef vld3_lane_p16
#define vld3_lane_p16 simde_vld3_lane_p16
#undef vld3_lane_p64
#define vld3_lane_p64 simde_vld3_lane_p64
#undef vld3_lane_p8
#define vld3_lane_p8 simde_vld3_lane_p8
#undef vld3_lane_s16
#define vld3_lane_s16 simde_vld3_lane_s16
#undef vld3_lane_s32
#define vld3_lane_s32 simde_vld3_lane_s32
#undef vld3_lane_s64
#define vld3_lane_s64 simde_vld3_lane_s64
#undef vld3_lane_s8
#define vld3_lane_s8 simde_vld3_lane_s8
#undef vld3_lane_u16
#define vld3_lane_u16 simde_vld3_lane_u16
#undef vld3_lane_u32
#define vld3_lane_u32 simde_vld3_lane_u32
#undef vld3_lane_u64
#define vld3_lane_u64 simde_vld3_lane_u64
#undef vld3_lane_u8
#define vld3_lane_u8 simde_vld3_lane_u8
#undef vld3_p16
#define vld3_p16 simde_vld3_p16
#undef vld3_p64
#define vld3_p64 simde_vld3_p64
#undef vld3_p8
#define vld3_p8 simde_vld3_p8
#undef vld3_s16
#define vld3_s16 simde_vld3_s16
#undef vld3_s32
#define vld3_s32 simde_vld3_s32
#undef vld3_s64
#define vld3_s64 simde_vld3_s64
#undef vld3_s8
#define vld3_s8 simde_vld3_s8
#undef vld3_u16
#define vld3_u16 simde_vld3_u16
#undef vld3_u32
#define vld3_u32 simde_vld3_u32
#undef vld3_u64
#define vld3_u64 simde_vld3_u64
#undef vld3_u8
#define vld3_u8 simde_vld3_u8
#undef vld3q_bf16
#define vld3q_bf16 simde_vld3q_bf16
#undef vld3q_dup_bf16
#define vld3q_dup_bf16 simde_vld3q_dup_bf16
#undef vld3q_dup_f16
#define vld3q_dup_f16 simde_vld3q_dup_f16
#undef vld3q_dup_f32
#define vld3q_dup_f32 simde_vld3q_dup_f32
#undef vld3q_dup_f64
#define vld3q_dup_f64 simde_vld3q_dup_f64
#undef vld3q_dup_p16
#define vld3q_dup_p16 simde_vld3q_dup_p16
#undef vld3q_dup_p64
#define vld3q_dup_p64 simde_vld3q_dup_p64
#undef vld3q_dup_p8
#define vld3q_dup_p8 simde_vld3q_dup_p8
#undef vld3q_dup_s16
#define vld3q_dup_s16 simde_vld3q_dup_s16
#undef vld3q_dup_s32
#define vld3q_dup_s32 simde_vld3q_dup_s32
#undef vld3q_dup_s64
#define vld3q_dup_s64 simde_vld3q_dup_s64
#undef vld3q_dup_s8
#define vld3q_dup_s8 simde_vld3q_dup_s8
#undef vld3q_dup_u16
#define vld3q_dup_u16 simde_vld3q_dup_u16
#undef vld3q_dup_u32
#define vld3q_dup_u32 simde_vld3q_dup_u32
#undef vld3q_dup_u64
#define vld3q_dup_u64 simde_vld3q_dup_u64
#undef vld3q_dup_u8
#define vld3q_dup_u8 simde_vld3q_dup_u8
#undef vld3q_f16
#define vld3q_f16 simde_vld3q_f16
#undef vld3q_f32
#define vld3q_f32 simde_vld3q_f32
#undef vld3q_f64
#define vld3q_f64 simde_vld3q_f64
#undef vld3q_lane_bf16
#define vld3q_lane_bf16 simde_vld3q_lane_bf16
#undef vld3q_lane_f16
#define vld3q_lane_f16 simde_vld3q_lane_f16
#undef vld3q_lane_f32
#define vld3q_lane_f32 simde_vld3q_lane_f32
#undef vld3q_lane_f64
#define vld3q_lane_f64 simde_vld3q_lane_f64
#undef vld3q_lane_p16
#define vld3q_lane_p16 simde_vld3q_lane_p16
#undef vld3q_lane_p64
#define vld3q_lane_p64 simde_vld3q_lane_p64
#undef vld3q_lane_p8
#define vld3q_lane_p8 simde_vld3q_lane_p8
#undef vld3q_lane_s16
#define vld3q_lane_s16 simde_vld3q_lane_s16
#undef vld3q_lane_s32
#define vld3q_lane_s32 simde_vld3q_lane_s32
#undef vld3q_lane_s64
#define vld3q_lane_s64 simde_vld3q_lane_s64
#undef vld3q_lane_s8
#define vld3q_lane_s8 simde_vld3q_lane_s8
#undef vld3q_lane_u16
#define vld3q_lane_u16 simde_vld3q_lane_u16
#undef vld3q_lane_u32
#define vld3q_lane_u32 simde_vld3q_lane_u32
#undef vld3q_lane_u64
#define vld3q_lane_u64 simde_vld3q_lane_u64
#undef vld3q_lane_u8
#define vld3q_lane_u8 simde_vld3q_lane_u8
#undef vld3q_p16
#define vld3q_p16 simde_vld3q_p16
#undef vld3q_p64
#define vld3q_p64 simde_vld3q_p64
#undef vld3q_p8
#define vld3q_p8 simde_vld3q_p8
#undef vld3q_s16
#define vld3q_s16 simde_vld3q_s16
#undef vld3q_s32
#define vld3q_s32 simde_vld3q_s32
#undef vld3q_s64
#define vld3q_s64 simde_vld3q_s64
#undef vld3q_s8
#define vld3q_s8 simde_vld3q_s8
#undef vld3q_u16
#define vld3q_u16 simde_vld3q_u16
#undef vld3q_u32
#define vld3q_u32 simde_vld3q_u32
#undef vld3q_u64
#define vld3q_u64 simde_vld3q_u64
#undef vld3q_u8
#define vld3q_u8 simde_vld3q_u8
#undef vld4_bf16
#define vld4_bf16 simde_vld4_bf16
#undef vld4_dup_bf16
#define vld4_dup_bf16 simde_vld4_dup_bf16
#undef vld4_dup_f16
#define vld4_dup_f16 simde_vld4_dup_f16
#undef vld4_dup_f32
#define vld4_dup_f32 simde_vld4_dup_f32
#undef vld4_dup_f64
#define vld4_dup_f64 simde_vld4_dup_f64
#undef vld4_dup_p16
#define vld4_dup_p16 simde_vld4_dup_p16
#undef vld4_dup_p64
#define vld4_dup_p64 simde_vld4_dup_p64
#undef vld4_dup_p8
#define vld4_dup_p8 simde_vld4_dup_p8
#undef vld4_dup_s16
#define vld4_dup_s16 simde_vld4_dup_s16
#undef vld4_dup_s32
#define vld4_dup_s32 simde_vld4_dup_s32
#undef vld4_dup_s64
#define vld4_dup_s64 simde_vld4_dup_s64
#undef vld4_dup_s8
#define vld4_dup_s8 simde_vld4_dup_s8
#undef vld4_dup_u16
#define vld4_dup_u16 simde_vld4_dup_u16
#undef vld4_dup_u32
#define vld4_dup_u32 simde_vld4_dup_u32
#undef vld4_dup_u64
#define vld4_dup_u64 simde_vld4_dup_u64
#undef vld4_dup_u8
#define vld4_dup_u8 simde_vld4_dup_u8
#undef vld4_f16
#define vld4_f16 simde_vld4_f16
#undef vld4_f32
#define vld4_f32 simde_vld4_f32
#undef vld4_f64
#define vld4_f64 simde_vld4_f64
#undef vld4_lane_bf16
#define vld4_lane_bf16 simde_vld4_lane_bf16
#undef vld4_lane_f16
#define vld4_lane_f16 simde_vld4_lane_f16
#undef vld4_lane_f32
#define vld4_lane_f32 simde_vld4_lane_f32
#undef vld4_lane_f64
#define vld4_lane_f64 simde_vld4_lane_f64
#undef vld4_lane_p16
#define vld4_lane_p16 simde_vld4_lane_p16
#undef vld4_lane_p64
#define vld4_lane_p64 simde_vld4_lane_p64
#undef vld4_lane_p8
#define vld4_lane_p8 simde_vld4_lane_p8
#undef vld4_lane_s16
#define vld4_lane_s16 simde_vld4_lane_s16
#undef vld4_lane_s32
#define vld4_lane_s32 simde_vld4_lane_s32
#undef vld4_lane_s64
#define vld4_lane_s64 simde_vld4_lane_s64
#undef vld4_lane_s8
#define vld4_lane_s8 simde_vld4_lane_s8
#undef vld4_lane_u16
#define vld4_lane_u16 simde_vld4_lane_u16
#undef vld4_lane_u32
#define vld4_lane_u32 simde_vld4_lane_u32
#undef vld4_lane_u64
#define vld4_lane_u64 simde_vld4_lane_u64
#undef vld4_lane_u8
#define vld4_lane_u8 simde_vld4_lane_u8
#undef vld4_p16
#define vld4_p16 simde_vld4_p16
#undef vld4_p64
#define vld4_p64 simde_vld4_p64
#undef vld4_p8
#define vld4_p8 simde_vld4_p8
#undef vld4_s16
#define vld4_s16 simde_vld4_s16
#undef vld4_s32
#define vld4_s32 simde_vld4_s32
#undef vld4_s64
#define vld4_s64 simde_vld4_s64
#undef vld4_s8
#define vld4_s8 simde_vld4_s8
#undef vld4_u16
#define vld4_u16 simde_vld4_u16
#undef vld4_u32
#define vld4_u32 simde_vld4_u32
#undef vld4_u64
#define vld4_u64 simde_vld4_u64
#undef vld4_u8
#define vld4_u8 simde_vld4_u8
#undef vld4q_bf16
#define vld4q_bf16 simde_vld4q_bf16
#undef vld4q_dup_bf16
#define vld4q_dup_bf16 simde_vld4q_dup_bf16
#undef vld4q_dup_f16
#define vld4q_dup_f16 simde_vld4q_dup_f16
#undef vld4q_dup_f32
#define vld4q_dup_f32 simde_vld4q_dup_f32
#undef vld4q_dup_f64
#define vld4q_dup_f64 simde_vld4q_dup_f64
#undef vld4q_dup_p16
#define vld4q_dup_p16 simde_vld4q_dup_p16
#undef vld4q_dup_p64
#define vld4q_dup_p64 simde_vld4q_dup_p64
#undef vld4q_dup_p8
#define vld4q_dup_p8 simde_vld4q_dup_p8
#undef vld4q_dup_s16
#define vld4q_dup_s16 simde_vld4q_dup_s16
#undef vld4q_dup_s32
#define vld4q_dup_s32 simde_vld4q_dup_s32
#undef vld4q_dup_s64
#define vld4q_dup_s64 simde_vld4q_dup_s64
#undef vld4q_dup_s8
#define vld4q_dup_s8 simde_vld4q_dup_s8
#undef vld4q_dup_u16
#define vld4q_dup_u16 simde_vld4q_dup_u16
#undef vld4q_dup_u32
#define vld4q_dup_u32 simde_vld4q_dup_u32
#undef vld4q_dup_u64
#define vld4q_dup_u64 simde_vld4q_dup_u64
#undef vld4q_dup_u8
#define vld4q_dup_u8 simde_vld4q_dup_u8
#undef vld4q_f16
#define vld4q_f16 simde_vld4q_f16
#undef vld4q_f32
#define vld4q_f32 simde_vld4q_f32
#undef vld4q_f64
#define vld4q_f64 simde_vld4q_f64
#undef vld4q_lane_bf16
#define vld4q_lane_bf16 simde_vld4q_lane_bf16
#undef vld4q_lane_f16
#define vld4q_lane_f16 simde_vld4q_lane_f16
#undef vld4q_lane_f32
#define vld4q_lane_f32 simde_vld4q_lane_f32
#undef vld4q_lane_f64
#define vld4q_lane_f64 simde_vld4q_lane_f64
#undef vld4q_lane_p16
#define vld4q_lane_p16 simde_vld4q_lane_p16
#undef vld4q_lane_p64
#define vld4q_lane_p64 simde_vld4q_lane_p64
#undef vld4q_lane_p8
#define vld4q_lane_p8 simde_vld4q_lane_p8
#undef vld4q_lane_s16
#define vld4q_lane_s16 simde_vld4q_lane_s16
#undef vld4q_lane_s32
#define vld4q_lane_s32 simde_vld4q_lane_s32
#undef vld4q_lane_s64
#define vld4q_lane_s64 simde_vld4q_lane_s64
#undef vld4q_lane_s8
#define vld4q_lane_s8 simde_vld4q_lane_s8
#undef vld4q_lane_u16
#define vld4q_lane_u16 simde_vld4q_lane_u16
#undef vld4q_lane_u32
#define vld4q_lane_u32 simde_vld4q_lane_u32
#undef vld4q_lane_u64
#define vld4q_lane_u64 simde_vld4q_lane_u64
#undef vld4q_lane_u8
#define vld4q_lane_u8 simde_vld4q_lane_u8
#undef vld4q_p16
#define vld4q_p16 simde_vld4q_p16
#undef vld4q_p64
#define vld4q_p64 simde_vld4q_p64
#undef vld4q_p8
#define vld4q_p8 simde_vld4q_p8
#undef vld4q_s16
#define vld4q_s16 simde_vld4q_s16
#undef vld4q_s32
#define vld4q_s32 simde_vld4q_s32
#undef vld4q_s64
#define vld4q_s64 simde_vld4q_s64
#undef vld4q_s8
#define vld4q_s8 simde_vld4q_s8
#undef vld4q_u16
#define vld4q_u16 simde_vld4q_u16
#undef vld4q_u32
#define vld4q_u32 simde_vld4q_u32
#undef vld4q_u64
#define vld4q_u64 simde_vld4q_u64
#undef vld4q_u8
#define vld4q_u8 simde_vld4q_u8
#undef vldrq_p128
#define vldrq_p128 simde_vldrq_p128
#undef vmax_f16
#define vmax_f16 simde_vmax_f16
#undef vmax_f32
#define vmax_f32 simde_vmax_f32
#undef vmax_f64
#define vmax_f64 simde_vmax_f64
#undef vmax_s16
#define vmax_s16 simde_vmax_s16
#undef vmax_s32
#define vmax_s32 simde_vmax_s32
#undef vmax_s8
#define vmax_s8 simde_vmax_s8
#undef vmax_u16
#define vmax_u16 simde_vmax_u16
#undef vmax_u32
#define vmax_u32 simde_vmax_u32
#undef vmax_u8
#define vmax_u8 simde_vmax_u8
#undef vmaxh_f16
#define vmaxh_f16 simde_vmaxh_f16
#undef vmaxnm_f16
#define vmaxnm_f16 simde_vmaxnm_f16
#undef vmaxnm_f32
#define vmaxnm_f32 simde_vmaxnm_f32
#undef vmaxnm_f64
#define vmaxnm_f64 simde_vmaxnm_f64
#undef vmaxnmh_f16
#define vmaxnmh_f16 simde_vmaxnmh_f16
#undef vmaxnmq_f16
#define vmaxnmq_f16 simde_vmaxnmq_f16
#undef vmaxnmq_f32
#define vmaxnmq_f32 simde_vmaxnmq_f32
#undef vmaxnmq_f64
#define vmaxnmq_f64 simde_vmaxnmq_f64
#undef vmaxnmv_f16
#define vmaxnmv_f16 simde_vmaxnmv_f16
#undef vmaxnmv_f32
#define vmaxnmv_f32 simde_vmaxnmv_f32
#undef vmaxnmvq_f16
#define vmaxnmvq_f16 simde_vmaxnmvq_f16
#undef vmaxnmvq_f32
#define vmaxnmvq_f32 simde_vmaxnmvq_f32
#undef vmaxnmvq_f64
#define vmaxnmvq_f64 simde_vmaxnmvq_f64
#undef vmaxq_f16
#define vmaxq_f16 simde_vmaxq_f16
#undef vmaxq_f32
#define vmaxq_f32 simde_vmaxq_f32
#undef vmaxq_f64
#define vmaxq_f64 simde_vmaxq_f64
#undef vmaxq_s16
#define vmaxq_s16 simde_vmaxq_s16
#undef vmaxq_s32
#define vmaxq_s32 simde_vmaxq_s32
#undef vmaxq_s8
#define vmaxq_s8 simde_vmaxq_s8
#undef vmaxq_u16
#define vmaxq_u16 simde_vmaxq_u16
#undef vmaxq_u32
#define vmaxq_u32 simde_vmaxq_u32
#undef vmaxq_u8
#define vmaxq_u8 simde_vmaxq_u8
#undef vmaxv_f16
#define vmaxv_f16 simde_vmaxv_f16
#undef vmaxv_f32
#define vmaxv_f32 simde_vmaxv_f32
#undef vmaxv_s16
#define vmaxv_s16 simde_vmaxv_s16
#undef vmaxv_s32
#define vmaxv_s32 simde_vmaxv_s32
#undef vmaxv_s8
#define vmaxv_s8 simde_vmaxv_s8
#undef vmaxv_u16
#define vmaxv_u16 simde_vmaxv_u16
#undef vmaxv_u32
#define vmaxv_u32 simde_vmaxv_u32
#undef vmaxv_u8
#define vmaxv_u8 simde_vmaxv_u8
#undef vmaxvq_f16
#define vmaxvq_f16 simde_vmaxvq_f16
#undef vmaxvq_f32
#define vmaxvq_f32 simde_vmaxvq_f32
#undef vmaxvq_f64
#define vmaxvq_f64 simde_vmaxvq_f64
#undef vmaxvq_s16
#define vmaxvq_s16 simde_vmaxvq_s16
#undef vmaxvq_s32
#define vmaxvq_s32 simde_vmaxvq_s32
#undef vmaxvq_s8
#define vmaxvq_s8 simde_vmaxvq_s8
#undef vmaxvq_u16
#define vmaxvq_u16 simde_vmaxvq_u16
#undef vmaxvq_u32
#define vmaxvq_u32 simde_vmaxvq_u32
#undef vmaxvq_u8
#define vmaxvq_u8 simde_vmaxvq_u8
#undef vmin_f16
#define vmin_f16 simde_vmin_f16
#undef vmin_f32
#define vmin_f32 simde_vmin_f32
#undef vmin_f64
#define vmin_f64 simde_vmin_f64
#undef vmin_s16
#define vmin_s16 simde_vmin_s16
#undef vmin_s32
#define vmin_s32 simde_vmin_s32
#undef vmin_s8
#define vmin_s8 simde_vmin_s8
#undef vmin_u16
#define vmin_u16 simde_vmin_u16
#undef vmin_u32
#define vmin_u32 simde_vmin_u32
#undef vmin_u8
#define vmin_u8 simde_vmin_u8
#undef vminh_f16
#define vminh_f16 simde_vminh_f16
#undef vminnm_f16
#define vminnm_f16 simde_vminnm_f16
#undef vminnm_f32
#define vminnm_f32 simde_vminnm_f32
#undef vminnm_f64
#define vminnm_f64 simde_vminnm_f64
#undef vminnmh_f16
#define vminnmh_f16 simde_vminnmh_f16
#undef vminnmq_f16
#define vminnmq_f16 simde_vminnmq_f16
#undef vminnmq_f32
#define vminnmq_f32 simde_vminnmq_f32
#undef vminnmq_f64
#define vminnmq_f64 simde_vminnmq_f64
#undef vminnmv_f16
#define vminnmv_f16 simde_vminnmv_f16
#undef vminnmv_f32
#define vminnmv_f32 simde_vminnmv_f32
#undef vminnmvq_f16
#define vminnmvq_f16 simde_vminnmvq_f16
#undef vminnmvq_f32
#define vminnmvq_f32 simde_vminnmvq_f32
#undef vminnmvq_f64
#define vminnmvq_f64 simde_vminnmvq_f64
#undef vminq_f16
#define vminq_f16 simde_vminq_f16
#undef vminq_f32
#define vminq_f32 simde_vminq_f32
#undef vminq_f64
#define vminq_f64 simde_vminq_f64
#undef vminq_s16
#define vminq_s16 simde_vminq_s16
#undef vminq_s32
#define vminq_s32 simde_vminq_s32
#undef vminq_s8
#define vminq_s8 simde_vminq_s8
#undef vminq_u16
#define vminq_u16 simde_vminq_u16
#undef vminq_u32
#define vminq_u32 simde_vminq_u32
#undef vminq_u8
#define vminq_u8 simde_vminq_u8
#undef vminv_f16
#define vminv_f16 simde_vminv_f16
#undef vminv_f32
#define vminv_f32 simde_vminv_f32
#undef vminv_s16
#define vminv_s16 simde_vminv_s16
#undef vminv_s32
#define vminv_s32 simde_vminv_s32
#undef vminv_s8
#define vminv_s8 simde_vminv_s8
#undef vminv_u16
#define vminv_u16 simde_vminv_u16
#undef vminv_u32
#define vminv_u32 simde_vminv_u32
#undef vminv_u8
#define vminv_u8 simde_vminv_u8
#undef vminvq_f16
#define vminvq_f16 simde_vminvq_f16
#undef vminvq_f32
#define vminvq_f32 simde_vminvq_f32
#undef vminvq_f64
#define vminvq_f64 simde_vminvq_f64
#undef vminvq_s16
#define vminvq_s16 simde_vminvq_s16
#undef vminvq_s32
#define vminvq_s32 simde_vminvq_s32
#undef vminvq_s8
#define vminvq_s8 simde_vminvq_s8
#undef vminvq_u16
#define vminvq_u16 simde_vminvq_u16
#undef vminvq_u32
#define vminvq_u32 simde_vminvq_u32
#undef vminvq_u8
#define vminvq_u8 simde_vminvq_u8
#undef vmla_f32
#define vmla_f32 simde_vmla_f32
#undef vmla_f64
#define vmla_f64 simde_vmla_f64
#undef vmla_lane_f32
#define vmla_lane_f32 simde_vmla_lane_f32
#undef vmla_lane_s16
#define vmla_lane_s16 simde_vmla_lane_s16
#undef vmla_lane_s32
#define vmla_lane_s32 simde_vmla_lane_s32
#undef vmla_lane_u16
#define vmla_lane_u16 simde_vmla_lane_u16
#undef vmla_lane_u32
#define vmla_lane_u32 simde_vmla_lane_u32
#undef vmla_laneq_f32
#define vmla_laneq_f32 simde_vmla_laneq_f32
#undef vmla_laneq_s16
#define vmla_laneq_s16 simde_vmla_laneq_s16
#undef vmla_laneq_s32
#define vmla_laneq_s32 simde_vmla_laneq_s32
#undef vmla_laneq_u16
#define vmla_laneq_u16 simde_vmla_laneq_u16
#undef vmla_laneq_u32
#define vmla_laneq_u32 simde_vmla_laneq_u32
#undef vmla_n_f32
#define vmla_n_f32 simde_vmla_n_f32
#undef vmla_n_s16
#define vmla_n_s16 simde_vmla_n_s16
#undef vmla_n_s32
#define vmla_n_s32 simde_vmla_n_s32
#undef vmla_n_u16
#define vmla_n_u16 simde_vmla_n_u16
#undef vmla_n_u32
#define vmla_n_u32 simde_vmla_n_u32
#undef vmla_s16
#define vmla_s16 simde_vmla_s16
#undef vmla_s32
#define vmla_s32 simde_vmla_s32
#undef vmla_s8
#define vmla_s8 simde_vmla_s8
#undef vmla_u16
#define vmla_u16 simde_vmla_u16
#undef vmla_u32
#define vmla_u32 simde_vmla_u32
#undef vmla_u8
#define vmla_u8 simde_vmla_u8
#undef vmlal_high_lane_s16
#define vmlal_high_lane_s16 simde_vmlal_high_lane_s16
#undef vmlal_high_lane_s32
#define vmlal_high_lane_s32 simde_vmlal_high_lane_s32
#undef vmlal_high_lane_u16
#define vmlal_high_lane_u16 simde_vmlal_high_lane_u16
#undef vmlal_high_lane_u32
#define vmlal_high_lane_u32 simde_vmlal_high_lane_u32
#undef vmlal_high_laneq_s16
#define vmlal_high_laneq_s16 simde_vmlal_high_laneq_s16
#undef vmlal_high_laneq_s32
#define vmlal_high_laneq_s32 simde_vmlal_high_laneq_s32
#undef vmlal_high_laneq_u16
#define vmlal_high_laneq_u16 simde_vmlal_high_laneq_u16
#undef vmlal_high_laneq_u32
#define vmlal_high_laneq_u32 simde_vmlal_high_laneq_u32
#undef vmlal_high_n_s16
#define vmlal_high_n_s16 simde_vmlal_high_n_s16
#undef vmlal_high_n_s32
#define vmlal_high_n_s32 simde_vmlal_high_n_s32
#undef vmlal_high_n_u16
#define vmlal_high_n_u16 simde_vmlal_high_n_u16
#undef vmlal_high_n_u32
#define vmlal_high_n_u32 simde_vmlal_high_n_u32
#undef vmlal_high_s16
#define vmlal_high_s16 simde_vmlal_high_s16
#undef vmlal_high_s32
#define vmlal_high_s32 simde_vmlal_high_s32
#undef vmlal_high_s8
#define vmlal_high_s8 simde_vmlal_high_s8
#undef vmlal_high_u16
#define vmlal_high_u16 simde_vmlal_high_u16
#undef vmlal_high_u32
#define vmlal_high_u32 simde_vmlal_high_u32
#undef vmlal_high_u8
#define vmlal_high_u8 simde_vmlal_high_u8
#undef vmlal_lane_s16
#define vmlal_lane_s16 simde_vmlal_lane_s16
#undef vmlal_lane_s32
#define vmlal_lane_s32 simde_vmlal_lane_s32
#undef vmlal_lane_u16
#define vmlal_lane_u16 simde_vmlal_lane_u16
#undef vmlal_lane_u32
#define vmlal_lane_u32 simde_vmlal_lane_u32
#undef vmlal_laneq_s16
#define vmlal_laneq_s16 simde_vmlal_laneq_s16
#undef vmlal_laneq_s32
#define vmlal_laneq_s32 simde_vmlal_laneq_s32
#undef vmlal_laneq_u16
#define vmlal_laneq_u16 simde_vmlal_laneq_u16
#undef vmlal_laneq_u32
#define vmlal_laneq_u32 simde_vmlal_laneq_u32
#undef vmlal_n_s16
#define vmlal_n_s16 simde_vmlal_n_s16
#undef vmlal_n_s32
#define vmlal_n_s32 simde_vmlal_n_s32
#undef vmlal_n_u16
#define vmlal_n_u16 simde_vmlal_n_u16
#undef vmlal_n_u32
#define vmlal_n_u32 simde_vmlal_n_u32
#undef vmlal_s16
#define vmlal_s16 simde_vmlal_s16
#undef vmlal_s32
#define vmlal_s32 simde_vmlal_s32
#undef vmlal_s8
#define vmlal_s8 simde_vmlal_s8
#undef vmlal_u16
#define vmlal_u16 simde_vmlal_u16
#undef vmlal_u32
#define vmlal_u32 simde_vmlal_u32
#undef vmlal_u8
#define vmlal_u8 simde_vmlal_u8
#undef vmlaq_f32
#define vmlaq_f32 simde_vmlaq_f32
#undef vmlaq_f64
#define vmlaq_f64 simde_vmlaq_f64
#undef vmlaq_lane_f32
#define vmlaq_lane_f32 simde_vmlaq_lane_f32
#undef vmlaq_lane_s16
#define vmlaq_lane_s16 simde_vmlaq_lane_s16
#undef vmlaq_lane_s32
#define vmlaq_lane_s32 simde_vmlaq_lane_s32
#undef vmlaq_lane_u16
#define vmlaq_lane_u16 simde_vmlaq_lane_u16
#undef vmlaq_lane_u32
#define vmlaq_lane_u32 simde_vmlaq_lane_u32
#undef vmlaq_laneq_f32
#define vmlaq_laneq_f32 simde_vmlaq_laneq_f32
#undef vmlaq_laneq_s16
#define vmlaq_laneq_s16 simde_vmlaq_laneq_s16
#undef vmlaq_laneq_s32
#define vmlaq_laneq_s32 simde_vmlaq_laneq_s32
#undef vmlaq_laneq_u16
#define vmlaq_laneq_u16 simde_vmlaq_laneq_u16
#undef vmlaq_laneq_u32
#define vmlaq_laneq_u32 simde_vmlaq_laneq_u32
#undef vmlaq_n_f32
#define vmlaq_n_f32 simde_vmlaq_n_f32
#undef vmlaq_n_s16
#define vmlaq_n_s16 simde_vmlaq_n_s16
#undef vmlaq_n_s32
#define vmlaq_n_s32 simde_vmlaq_n_s32
#undef vmlaq_n_u16
#define vmlaq_n_u16 simde_vmlaq_n_u16
#undef vmlaq_n_u32
#define vmlaq_n_u32 simde_vmlaq_n_u32
#undef vmlaq_s16
#define vmlaq_s16 simde_vmlaq_s16
#undef vmlaq_s32
#define vmlaq_s32 simde_vmlaq_s32
#undef vmlaq_s8
#define vmlaq_s8 simde_vmlaq_s8
#undef vmlaq_u16
#define vmlaq_u16 simde_vmlaq_u16
#undef vmlaq_u32
#define vmlaq_u32 simde_vmlaq_u32
#undef vmlaq_u8
#define vmlaq_u8 simde_vmlaq_u8
#undef vmls_f32
#define vmls_f32 simde_vmls_f32
#undef vmls_f64
#define vmls_f64 simde_vmls_f64
#undef vmls_lane_f32
#define vmls_lane_f32 simde_vmls_lane_f32
#undef vmls_lane_s16
#define vmls_lane_s16 simde_vmls_lane_s16
#undef vmls_lane_s32
#define vmls_lane_s32 simde_vmls_lane_s32
#undef vmls_lane_u16
#define vmls_lane_u16 simde_vmls_lane_u16
#undef vmls_lane_u32
#define vmls_lane_u32 simde_vmls_lane_u32
#undef vmls_laneq_f32
#define vmls_laneq_f32 simde_vmls_laneq_f32
#undef vmls_laneq_s16
#define vmls_laneq_s16 simde_vmls_laneq_s16
#undef vmls_laneq_s32
#define vmls_laneq_s32 simde_vmls_laneq_s32
#undef vmls_laneq_u16
#define vmls_laneq_u16 simde_vmls_laneq_u16
#undef vmls_laneq_u32
#define vmls_laneq_u32 simde_vmls_laneq_u32
#undef vmls_n_f32
#define vmls_n_f32 simde_vmls_n_f32
#undef vmls_n_s16
#define vmls_n_s16 simde_vmls_n_s16
#undef vmls_n_s32
#define vmls_n_s32 simde_vmls_n_s32
#undef vmls_n_u16
#define vmls_n_u16 simde_vmls_n_u16
#undef vmls_n_u32
#define vmls_n_u32 simde_vmls_n_u32
#undef vmls_s16
#define vmls_s16 simde_vmls_s16
#undef vmls_s32
#define vmls_s32 simde_vmls_s32
#undef vmls_s8
#define vmls_s8 simde_vmls_s8
#undef vmls_u16
#define vmls_u16 simde_vmls_u16
#undef vmls_u32
#define vmls_u32 simde_vmls_u32
#undef vmls_u8
#define vmls_u8 simde_vmls_u8
#undef vmlsl_high_lane_s16
#define vmlsl_high_lane_s16 simde_vmlsl_high_lane_s16
#undef vmlsl_high_lane_s32
#define vmlsl_high_lane_s32 simde_vmlsl_high_lane_s32
#undef vmlsl_high_lane_u16
#define vmlsl_high_lane_u16 simde_vmlsl_high_lane_u16
#undef vmlsl_high_lane_u32
#define vmlsl_high_lane_u32 simde_vmlsl_high_lane_u32
#undef vmlsl_high_laneq_s16
#define vmlsl_high_laneq_s16 simde_vmlsl_high_laneq_s16
#undef vmlsl_high_laneq_s32
#define vmlsl_high_laneq_s32 simde_vmlsl_high_laneq_s32
#undef vmlsl_high_laneq_u16
#define vmlsl_high_laneq_u16 simde_vmlsl_high_laneq_u16
#undef vmlsl_high_laneq_u32
#define vmlsl_high_laneq_u32 simde_vmlsl_high_laneq_u32
#undef vmlsl_high_n_s16
#define vmlsl_high_n_s16 simde_vmlsl_high_n_s16
#undef vmlsl_high_n_s32
#define vmlsl_high_n_s32 simde_vmlsl_high_n_s32
#undef vmlsl_high_n_u16
#define vmlsl_high_n_u16 simde_vmlsl_high_n_u16
#undef vmlsl_high_n_u32
#define vmlsl_high_n_u32 simde_vmlsl_high_n_u32
#undef vmlsl_high_s16
#define vmlsl_high_s16 simde_vmlsl_high_s16
#undef vmlsl_high_s32
#define vmlsl_high_s32 simde_vmlsl_high_s32
#undef vmlsl_high_s8
#define vmlsl_high_s8 simde_vmlsl_high_s8
#undef vmlsl_high_u16
#define vmlsl_high_u16 simde_vmlsl_high_u16
#undef vmlsl_high_u32
#define vmlsl_high_u32 simde_vmlsl_high_u32
#undef vmlsl_high_u8
#define vmlsl_high_u8 simde_vmlsl_high_u8
#undef vmlsl_lane_s16
#define vmlsl_lane_s16 simde_vmlsl_lane_s16
#undef vmlsl_lane_s32
#define vmlsl_lane_s32 simde_vmlsl_lane_s32
#undef vmlsl_lane_u16
#define vmlsl_lane_u16 simde_vmlsl_lane_u16
#undef vmlsl_lane_u32
#define vmlsl_lane_u32 simde_vmlsl_lane_u32
#undef vmlsl_laneq_s16
#define vmlsl_laneq_s16 simde_vmlsl_laneq_s16
#undef vmlsl_laneq_s32
#define vmlsl_laneq_s32 simde_vmlsl_laneq_s32
#undef vmlsl_laneq_u16
#define vmlsl_laneq_u16 simde_vmlsl_laneq_u16
#undef vmlsl_laneq_u32
#define vmlsl_laneq_u32 simde_vmlsl_laneq_u32
#undef vmlsl_n_s16
#define vmlsl_n_s16 simde_vmlsl_n_s16
#undef vmlsl_n_s32
#define vmlsl_n_s32 simde_vmlsl_n_s32
#undef vmlsl_n_u16
#define vmlsl_n_u16 simde_vmlsl_n_u16
#undef vmlsl_n_u32
#define vmlsl_n_u32 simde_vmlsl_n_u32
#undef vmlsl_s16
#define vmlsl_s16 simde_vmlsl_s16
#undef vmlsl_s32
#define vmlsl_s32 simde_vmlsl_s32
#undef vmlsl_s8
#define vmlsl_s8 simde_vmlsl_s8
#undef vmlsl_u16
#define vmlsl_u16 simde_vmlsl_u16
#undef vmlsl_u32
#define vmlsl_u32 simde_vmlsl_u32
#undef vmlsl_u8
#define vmlsl_u8 simde_vmlsl_u8
#undef vmlsq_f32
#define vmlsq_f32 simde_vmlsq_f32
#undef vmlsq_f64
#define vmlsq_f64 simde_vmlsq_f64
#undef vmlsq_lane_f32
#define vmlsq_lane_f32 simde_vmlsq_lane_f32
#undef vmlsq_lane_s16
#define vmlsq_lane_s16 simde_vmlsq_lane_s16
#undef vmlsq_lane_s32
#define vmlsq_lane_s32 simde_vmlsq_lane_s32
#undef vmlsq_lane_u16
#define vmlsq_lane_u16 simde_vmlsq_lane_u16
#undef vmlsq_lane_u32
#define vmlsq_lane_u32 simde_vmlsq_lane_u32
#undef vmlsq_laneq_f32
#define vmlsq_laneq_f32 simde_vmlsq_laneq_f32
#undef vmlsq_laneq_s16
#define vmlsq_laneq_s16 simde_vmlsq_laneq_s16
#undef vmlsq_laneq_s32
#define vmlsq_laneq_s32 simde_vmlsq_laneq_s32
#undef vmlsq_laneq_u16
#define vmlsq_laneq_u16 simde_vmlsq_laneq_u16
#undef vmlsq_laneq_u32
#define vmlsq_laneq_u32 simde_vmlsq_laneq_u32
#undef vmlsq_n_f32
#define vmlsq_n_f32 simde_vmlsq_n_f32
#undef vmlsq_n_s16
#define vmlsq_n_s16 simde_vmlsq_n_s16
#undef vmlsq_n_s32
#define vmlsq_n_s32 simde_vmlsq_n_s32
#undef vmlsq_n_u16
#define vmlsq_n_u16 simde_vmlsq_n_u16
#undef vmlsq_n_u32
#define vmlsq_n_u32 simde_vmlsq_n_u32
#undef vmlsq_s16
#define vmlsq_s16 simde_vmlsq_s16
#undef vmlsq_s32
#define vmlsq_s32 simde_vmlsq_s32
#undef vmlsq_s8
#define vmlsq_s8 simde_vmlsq_s8
#undef vmlsq_u16
#define vmlsq_u16 simde_vmlsq_u16
#undef vmlsq_u32
#define vmlsq_u32 simde_vmlsq_u32
#undef vmlsq_u8
#define vmlsq_u8 simde_vmlsq_u8
#undef vmmlaq_s32
#define vmmlaq_s32 simde_vmmlaq_s32
#undef vmmlaq_u32
#define vmmlaq_u32 simde_vmmlaq_u32
#undef vmov_n_f16
#define vmov_n_f16 simde_vmov_n_f16
#undef vmov_n_f32
#define vmov_n_f32 simde_vmov_n_f32
#undef vmov_n_f64
#define vmov_n_f64 simde_vmov_n_f64
#undef vmov_n_p16
#define vmov_n_p16 simde_vmov_n_p16
#undef vmov_n_p8
#define vmov_n_p8 simde_vmov_n_p8
#undef vmov_n_s16
#define vmov_n_s16 simde_vmov_n_s16
#undef vmov_n_s32
#define vmov_n_s32 simde_vmov_n_s32
#undef vmov_n_s64
#define vmov_n_s64 simde_vmov_n_s64
#undef vmov_n_s8
#define vmov_n_s8 simde_vmov_n_s8
#undef vmov_n_u16
#define vmov_n_u16 simde_vmov_n_u16
#undef vmov_n_u32
#define vmov_n_u32 simde_vmov_n_u32
#undef vmov_n_u64
#define vmov_n_u64 simde_vmov_n_u64
#undef vmov_n_u8
#define vmov_n_u8 simde_vmov_n_u8
#undef vmovl_high_s16
#define vmovl_high_s16 simde_vmovl_high_s16
#undef vmovl_high_s32
#define vmovl_high_s32 simde_vmovl_high_s32
#undef vmovl_high_s8
#define vmovl_high_s8 simde_vmovl_high_s8
#undef vmovl_high_u16
#define vmovl_high_u16 simde_vmovl_high_u16
#undef vmovl_high_u32
#define vmovl_high_u32 simde_vmovl_high_u32
#undef vmovl_high_u8
#define vmovl_high_u8 simde_vmovl_high_u8
#undef vmovl_s16
#define vmovl_s16 simde_vmovl_s16
#undef vmovl_s32
#define vmovl_s32 simde_vmovl_s32
#undef vmovl_s8
#define vmovl_s8 simde_vmovl_s8
#undef vmovl_u16
#define vmovl_u16 simde_vmovl_u16
#undef vmovl_u32
#define vmovl_u32 simde_vmovl_u32
#undef vmovl_u8
#define vmovl_u8 simde_vmovl_u8
#undef vmovn_high_s16
#define vmovn_high_s16 simde_vmovn_high_s16
#undef vmovn_high_s32
#define vmovn_high_s32 simde_vmovn_high_s32
#undef vmovn_high_s64
#define vmovn_high_s64 simde_vmovn_high_s64
#undef vmovn_high_u16
#define vmovn_high_u16 simde_vmovn_high_u16
#undef vmovn_high_u32
#define vmovn_high_u32 simde_vmovn_high_u32
#undef vmovn_high_u64
#define vmovn_high_u64 simde_vmovn_high_u64
#undef vmovn_s16
#define vmovn_s16 simde_vmovn_s16
#undef vmovn_s32
#define vmovn_s32 simde_vmovn_s32
#undef vmovn_s64
#define vmovn_s64 simde_vmovn_s64
#undef vmovn_u16
#define vmovn_u16 simde_vmovn_u16
#undef vmovn_u32
#define vmovn_u32 simde_vmovn_u32
#undef vmovn_u64
#define vmovn_u64 simde_vmovn_u64
#undef vmovq_n_f16
#define vmovq_n_f16 simde_vmovq_n_f16
#undef vmovq_n_f32
#define vmovq_n_f32 simde_vmovq_n_f32
#undef vmovq_n_f64
#define vmovq_n_f64 simde_vmovq_n_f64
#undef vmovq_n_p16
#define vmovq_n_p16 simde_vmovq_n_p16
#undef vmovq_n_p8
#define vmovq_n_p8 simde_vmovq_n_p8
#undef vmovq_n_s16
#define vmovq_n_s16 simde_vmovq_n_s16
#undef vmovq_n_s32
#define vmovq_n_s32 simde_vmovq_n_s32
#undef vmovq_n_s64
#define vmovq_n_s64 simde_vmovq_n_s64
#undef vmovq_n_s8
#define vmovq_n_s8 simde_vmovq_n_s8
#undef vmovq_n_u16
#define vmovq_n_u16 simde_vmovq_n_u16
#undef vmovq_n_u32
#define vmovq_n_u32 simde_vmovq_n_u32
#undef vmovq_n_u64
#define vmovq_n_u64 simde_vmovq_n_u64
#undef vmovq_n_u8
#define vmovq_n_u8 simde_vmovq_n_u8
#undef vmul_f16
#define vmul_f16 simde_vmul_f16
#undef vmul_f32
#define vmul_f32 simde_vmul_f32
#undef vmul_f64
#define vmul_f64 simde_vmul_f64
#undef vmul_lane_f16
#define vmul_lane_f16 simde_vmul_lane_f16
#undef vmul_lane_f32
#define vmul_lane_f32 simde_vmul_lane_f32
#undef vmul_lane_f64
#define vmul_lane_f64 simde_vmul_lane_f64
#undef vmul_lane_s16
#define vmul_lane_s16 simde_vmul_lane_s16
#undef vmul_lane_s32
#define vmul_lane_s32 simde_vmul_lane_s32
#undef vmul_lane_u16
#define vmul_lane_u16 simde_vmul_lane_u16
#undef vmul_lane_u32
#define vmul_lane_u32 simde_vmul_lane_u32
#undef vmul_laneq_f16
#define vmul_laneq_f16 simde_vmul_laneq_f16
#undef vmul_laneq_f32
#define vmul_laneq_f32 simde_vmul_laneq_f32
#undef vmul_laneq_f64
#define vmul_laneq_f64 simde_vmul_laneq_f64
#undef vmul_laneq_s16
#define vmul_laneq_s16 simde_vmul_laneq_s16
#undef vmul_laneq_s32
#define vmul_laneq_s32 simde_vmul_laneq_s32
#undef vmul_laneq_u16
#define vmul_laneq_u16 simde_vmul_laneq_u16
#undef vmul_laneq_u32
#define vmul_laneq_u32 simde_vmul_laneq_u32
#undef vmul_n_f16
#define vmul_n_f16 simde_vmul_n_f16
#undef vmul_n_f32
#define vmul_n_f32 simde_vmul_n_f32
#undef vmul_n_f64
#define vmul_n_f64 simde_vmul_n_f64
#undef vmul_n_s16
#define vmul_n_s16 simde_vmul_n_s16
#undef vmul_n_s32
#define vmul_n_s32 simde_vmul_n_s32
#undef vmul_n_u16
#define vmul_n_u16 simde_vmul_n_u16
#undef vmul_n_u32
#define vmul_n_u32 simde_vmul_n_u32
#undef vmul_p8
#define vmul_p8 simde_vmul_p8
#undef vmul_s16
#define vmul_s16 simde_vmul_s16
#undef vmul_s32
#define vmul_s32 simde_vmul_s32
#undef vmul_s8
#define vmul_s8 simde_vmul_s8
#undef vmul_u16
#define vmul_u16 simde_vmul_u16
#undef vmul_u32
#define vmul_u32 simde_vmul_u32
#undef vmul_u8
#define vmul_u8 simde_vmul_u8
#undef vmuld_lane_f64
#define vmuld_lane_f64 simde_vmuld_lane_f64
#undef vmuld_laneq_f64
#define vmuld_laneq_f64 simde_vmuld_laneq_f64
#undef vmulh_f16
#define vmulh_f16 simde_vmulh_f16
#undef vmulh_lane_f16
#define vmulh_lane_f16 simde_vmulh_lane_f16
#undef vmulh_laneq_f16
#define vmulh_laneq_f16 simde_vmulh_laneq_f16
#undef vmull_high_lane_s16
#define vmull_high_lane_s16 simde_vmull_high_lane_s16
#undef vmull_high_lane_s32
#define vmull_high_lane_s32 simde_vmull_high_lane_s32
#undef vmull_high_lane_u16
#define vmull_high_lane_u16 simde_vmull_high_lane_u16
#undef vmull_high_lane_u32
#define vmull_high_lane_u32 simde_vmull_high_lane_u32
#undef vmull_high_laneq_s16
#define vmull_high_laneq_s16 simde_vmull_high_laneq_s16
#undef vmull_high_laneq_s32
#define vmull_high_laneq_s32 simde_vmull_high_laneq_s32
#undef vmull_high_laneq_u16
#define vmull_high_laneq_u16 simde_vmull_high_laneq_u16
#undef vmull_high_laneq_u32
#define vmull_high_laneq_u32 simde_vmull_high_laneq_u32
#undef vmull_high_n_s16
#define vmull_high_n_s16 simde_vmull_high_n_s16
#undef vmull_high_n_s32
#define vmull_high_n_s32 simde_vmull_high_n_s32
#undef vmull_high_n_u16
#define vmull_high_n_u16 simde_vmull_high_n_u16
#undef vmull_high_n_u32
#define vmull_high_n_u32 simde_vmull_high_n_u32
#undef vmull_high_p64
#define vmull_high_p64 simde_vmull_high_p64
#undef vmull_high_p8
#define vmull_high_p8 simde_vmull_high_p8
#undef vmull_high_s16
#define vmull_high_s16 simde_vmull_high_s16
#undef vmull_high_s32
#define vmull_high_s32 simde_vmull_high_s32
#undef vmull_high_s8
#define vmull_high_s8 simde_vmull_high_s8
#undef vmull_high_u16
#define vmull_high_u16 simde_vmull_high_u16
#undef vmull_high_u32
#define vmull_high_u32 simde_vmull_high_u32
#undef vmull_high_u8
#define vmull_high_u8 simde_vmull_high_u8
#undef vmull_lane_s16
#define vmull_lane_s16 simde_vmull_lane_s16
#undef vmull_lane_s32
#define vmull_lane_s32 simde_vmull_lane_s32
#undef vmull_lane_u16
#define vmull_lane_u16 simde_vmull_lane_u16
#undef vmull_lane_u32
#define vmull_lane_u32 simde_vmull_lane_u32
#undef vmull_laneq_s16
#define vmull_laneq_s16 simde_vmull_laneq_s16
#undef vmull_laneq_s32
#define vmull_laneq_s32 simde_vmull_laneq_s32
#undef vmull_laneq_u16
#define vmull_laneq_u16 simde_vmull_laneq_u16
#undef vmull_laneq_u32
#define vmull_laneq_u32 simde_vmull_laneq_u32
#undef vmull_n_s16
#define vmull_n_s16 simde_vmull_n_s16
#undef vmull_n_s32
#define vmull_n_s32 simde_vmull_n_s32
#undef vmull_n_u16
#define vmull_n_u16 simde_vmull_n_u16
#undef vmull_n_u32
#define vmull_n_u32 simde_vmull_n_u32
#undef vmull_p64
#define vmull_p64 simde_vmull_p64
#undef vmull_p8
#define vmull_p8 simde_vmull_p8
#undef vmull_s16
#define vmull_s16 simde_vmull_s16
#undef vmull_s32
#define vmull_s32 simde_vmull_s32
#undef vmull_s8
#define vmull_s8 simde_vmull_s8
#undef vmull_u16
#define vmull_u16 simde_vmull_u16
#undef vmull_u32
#define vmull_u32 simde_vmull_u32
#undef vmull_u8
#define vmull_u8 simde_vmull_u8
#undef vmulq_f16
#define vmulq_f16 simde_vmulq_f16
#undef vmulq_f32
#define vmulq_f32 simde_vmulq_f32
#undef vmulq_f64
#define vmulq_f64 simde_vmulq_f64
#undef vmulq_lane_f16
#define vmulq_lane_f16 simde_vmulq_lane_f16
#undef vmulq_lane_f32
#define vmulq_lane_f32 simde_vmulq_lane_f32
#undef vmulq_lane_f64
#define vmulq_lane_f64 simde_vmulq_lane_f64
#undef vmulq_lane_s16
#define vmulq_lane_s16 simde_vmulq_lane_s16
#undef vmulq_lane_s32
#define vmulq_lane_s32 simde_vmulq_lane_s32
#undef vmulq_lane_u16
#define vmulq_lane_u16 simde_vmulq_lane_u16
#undef vmulq_lane_u32
#define vmulq_lane_u32 simde_vmulq_lane_u32
#undef vmulq_laneq_f16
#define vmulq_laneq_f16 simde_vmulq_laneq_f16
#undef vmulq_laneq_f32
#define vmulq_laneq_f32 simde_vmulq_laneq_f32
#undef vmulq_laneq_f64
#define vmulq_laneq_f64 simde_vmulq_laneq_f64
#undef vmulq_laneq_s16
#define vmulq_laneq_s16 simde_vmulq_laneq_s16
#undef vmulq_laneq_s32
#define vmulq_laneq_s32 simde_vmulq_laneq_s32
#undef vmulq_laneq_u16
#define vmulq_laneq_u16 simde_vmulq_laneq_u16
#undef vmulq_laneq_u32
#define vmulq_laneq_u32 simde_vmulq_laneq_u32
#undef vmulq_n_f16
#define vmulq_n_f16 simde_vmulq_n_f16
#undef vmulq_n_f32
#define vmulq_n_f32 simde_vmulq_n_f32
#undef vmulq_n_f64
#define vmulq_n_f64 simde_vmulq_n_f64
#undef vmulq_n_s16
#define vmulq_n_s16 simde_vmulq_n_s16
#undef vmulq_n_s32
#define vmulq_n_s32 simde_vmulq_n_s32
#undef vmulq_n_u16
#define vmulq_n_u16 simde_vmulq_n_u16
#undef vmulq_n_u32
#define vmulq_n_u32 simde_vmulq_n_u32
#undef vmulq_p8
#define vmulq_p8 simde_vmulq_p8
#undef vmulq_s16
#define vmulq_s16 simde_vmulq_s16
#undef vmulq_s32
#define vmulq_s32 simde_vmulq_s32
#undef vmulq_s8
#define vmulq_s8 simde_vmulq_s8
#undef vmulq_u16
#define vmulq_u16 simde_vmulq_u16
#undef vmulq_u32
#define vmulq_u32 simde_vmulq_u32
#undef vmulq_u8
#define vmulq_u8 simde_vmulq_u8
#undef vmuls_lane_f32
#define vmuls_lane_f32 simde_vmuls_lane_f32
#undef vmuls_laneq_f32
#define vmuls_laneq_f32 simde_vmuls_laneq_f32
#undef vmulx_f16
#define vmulx_f16 simde_vmulx_f16
#undef vmulx_f32
#define vmulx_f32 simde_vmulx_f32
#undef vmulx_f64
#define vmulx_f64 simde_vmulx_f64
#undef vmulx_lane_f16
#define vmulx_lane_f16 simde_vmulx_lane_f16
#undef vmulx_lane_f32
#define vmulx_lane_f32 simde_vmulx_lane_f32
#undef vmulx_lane_f64
#define vmulx_lane_f64 simde_vmulx_lane_f64
#undef vmulx_laneq_f16
#define vmulx_laneq_f16 simde_vmulx_laneq_f16
#undef vmulx_laneq_f32
#define vmulx_laneq_f32 simde_vmulx_laneq_f32
#undef vmulx_laneq_f64
#define vmulx_laneq_f64 simde_vmulx_laneq_f64
#undef vmulx_n_f16
#define vmulx_n_f16 simde_vmulx_n_f16
#undef vmulxd_f64
#define vmulxd_f64 simde_vmulxd_f64
#undef vmulxd_lane_f64
#define vmulxd_lane_f64 simde_vmulxd_lane_f64
#undef vmulxd_laneq_f64
#define vmulxd_laneq_f64 simde_vmulxd_laneq_f64
#undef vmulxh_f16
#define vmulxh_f16 simde_vmulxh_f16
#undef vmulxh_lane_f16
#define vmulxh_lane_f16 simde_vmulxh_lane_f16
#undef vmulxh_laneq_f16
#define vmulxh_laneq_f16 simde_vmulxh_laneq_f16
#undef vmulxq_f16
#define vmulxq_f16 simde_vmulxq_f16
#undef vmulxq_f32
#define vmulxq_f32 simde_vmulxq_f32
#undef vmulxq_f64
#define vmulxq_f64 simde_vmulxq_f64
#undef vmulxq_lane_f16
#define vmulxq_lane_f16 simde_vmulxq_lane_f16
#undef vmulxq_lane_f32
#define vmulxq_lane_f32 simde_vmulxq_lane_f32
#undef vmulxq_lane_f64
#define vmulxq_lane_f64 simde_vmulxq_lane_f64
#undef vmulxq_laneq_f16
#define vmulxq_laneq_f16 simde_vmulxq_laneq_f16
#undef vmulxq_laneq_f32
#define vmulxq_laneq_f32 simde_vmulxq_laneq_f32
#undef vmulxq_laneq_f64
#define vmulxq_laneq_f64 simde_vmulxq_laneq_f64
#undef vmulxq_n_f16
#define vmulxq_n_f16 simde_vmulxq_n_f16
#undef vmulxs_f32
#define vmulxs_f32 simde_vmulxs_f32
#undef vmulxs_lane_f32
#define vmulxs_lane_f32 simde_vmulxs_lane_f32
#undef vmulxs_laneq_f32
#define vmulxs_laneq_f32 simde_vmulxs_laneq_f32
#undef vmvn_p8
#define vmvn_p8 simde_vmvn_p8
#undef vmvn_s16
#define vmvn_s16 simde_vmvn_s16
#undef vmvn_s32
#define vmvn_s32 simde_vmvn_s32
#undef vmvn_s8
#define vmvn_s8 simde_vmvn_s8
#undef vmvn_u16
#define vmvn_u16 simde_vmvn_u16
#undef vmvn_u32
#define vmvn_u32 simde_vmvn_u32
#undef vmvn_u8
#define vmvn_u8 simde_vmvn_u8
#undef vmvnq_p8
#define vmvnq_p8 simde_vmvnq_p8
#undef vmvnq_s16
#define vmvnq_s16 simde_vmvnq_s16
#undef vmvnq_s32
#define vmvnq_s32 simde_vmvnq_s32
#undef vmvnq_s8
#define vmvnq_s8 simde_vmvnq_s8
#undef vmvnq_u16
#define vmvnq_u16 simde_vmvnq_u16
#undef vmvnq_u32
#define vmvnq_u32 simde_vmvnq_u32
#undef vmvnq_u8
#define vmvnq_u8 simde_vmvnq_u8
#undef vneg_f16
#define vneg_f16 simde_vneg_f16
#undef vneg_f32
#define vneg_f32 simde_vneg_f32
#undef vneg_f64
#define vneg_f64 simde_vneg_f64
#undef vneg_s16
#define vneg_s16 simde_vneg_s16
#undef vneg_s32
#define vneg_s32 simde_vneg_s32
#undef vneg_s64
#define vneg_s64 simde_vneg_s64
#undef vneg_s8
#define vneg_s8 simde_vneg_s8
#undef vnegd_s64
#define vnegd_s64 simde_vnegd_s64
#undef vnegh_f16
#define vnegh_f16 simde_vnegh_f16
#undef vnegq_f16
#define vnegq_f16 simde_vnegq_f16
#undef vnegq_f32
#define vnegq_f32 simde_vnegq_f32
#undef vnegq_f64
#define vnegq_f64 simde_vnegq_f64
#undef vnegq_s16
#define vnegq_s16 simde_vnegq_s16
#undef vnegq_s32
#define vnegq_s32 simde_vnegq_s32
#undef vnegq_s64
#define vnegq_s64 simde_vnegq_s64
#undef vnegq_s8
#define vnegq_s8 simde_vnegq_s8
#undef vorn_s16
#define vorn_s16 simde_vorn_s16
#undef vorn_s32
#define vorn_s32 simde_vorn_s32
#undef vorn_s64
#define vorn_s64 simde_vorn_s64
#undef vorn_s8
#define vorn_s8 simde_vorn_s8
#undef vorn_u16
#define vorn_u16 simde_vorn_u16
#undef vorn_u32
#define vorn_u32 simde_vorn_u32
#undef vorn_u64
#define vorn_u64 simde_vorn_u64
#undef vorn_u8
#define vorn_u8 simde_vorn_u8
#undef vornq_s16
#define vornq_s16 simde_vornq_s16
#undef vornq_s32
#define vornq_s32 simde_vornq_s32
#undef vornq_s64
#define vornq_s64 simde_vornq_s64
#undef vornq_s8
#define vornq_s8 simde_vornq_s8
#undef vornq_u16
#define vornq_u16 simde_vornq_u16
#undef vornq_u32
#define vornq_u32 simde_vornq_u32
#undef vornq_u64
#define vornq_u64 simde_vornq_u64
#undef vornq_u8
#define vornq_u8 simde_vornq_u8
#undef vorr_s16
#define vorr_s16 simde_vorr_s16
#undef vorr_s32
#define vorr_s32 simde_vorr_s32
#undef vorr_s64
#define vorr_s64 simde_vorr_s64
#undef vorr_s8
#define vorr_s8 simde_vorr_s8
#undef vorr_u16
#define vorr_u16 simde_vorr_u16
#undef vorr_u32
#define vorr_u32 simde_vorr_u32
#undef vorr_u64
#define vorr_u64 simde_vorr_u64
#undef vorr_u8
#define vorr_u8 simde_vorr_u8
#undef vorrq_s16
#define vorrq_s16 simde_vorrq_s16
#undef vorrq_s32
#define vorrq_s32 simde_vorrq_s32
#undef vorrq_s64
#define vorrq_s64 simde_vorrq_s64
#undef vorrq_s8
#define vorrq_s8 simde_vorrq_s8
#undef vorrq_u16
#define vorrq_u16 simde_vorrq_u16
#undef vorrq_u32
#define vorrq_u32 simde_vorrq_u32
#undef vorrq_u64
#define vorrq_u64 simde_vorrq_u64
#undef vorrq_u8
#define vorrq_u8 simde_vorrq_u8
#undef vpadal_s16
#define vpadal_s16 simde_vpadal_s16
#undef vpadal_s32
#define vpadal_s32 simde_vpadal_s32
#undef vpadal_s8
#define vpadal_s8 simde_vpadal_s8
#undef vpadal_u16
#define vpadal_u16 simde_vpadal_u16
#undef vpadal_u32
#define vpadal_u32 simde_vpadal_u32
#undef vpadal_u8
#define vpadal_u8 simde_vpadal_u8
#undef vpadalq_s16
#define vpadalq_s16 simde_vpadalq_s16
#undef vpadalq_s32
#define vpadalq_s32 simde_vpadalq_s32
#undef vpadalq_s8
#define vpadalq_s8 simde_vpadalq_s8
#undef vpadalq_u16
#define vpadalq_u16 simde_vpadalq_u16
#undef vpadalq_u32
#define vpadalq_u32 simde_vpadalq_u32
#undef vpadalq_u8
#define vpadalq_u8 simde_vpadalq_u8
#undef vpadd_f16
#define vpadd_f16 simde_vpadd_f16
#undef vpadd_f32
#define vpadd_f32 simde_vpadd_f32
#undef vpadd_s16
#define vpadd_s16 simde_vpadd_s16
#undef vpadd_s32
#define vpadd_s32 simde_vpadd_s32
#undef vpadd_s8
#define vpadd_s8 simde_vpadd_s8
#undef vpadd_u16
#define vpadd_u16 simde_vpadd_u16
#undef vpadd_u32
#define vpadd_u32 simde_vpadd_u32
#undef vpadd_u8
#define vpadd_u8 simde_vpadd_u8
#undef vpaddd_f64
#define vpaddd_f64 simde_vpaddd_f64
#undef vpaddd_s64
#define vpaddd_s64 simde_vpaddd_s64
#undef vpaddd_u64
#define vpaddd_u64 simde_vpaddd_u64
#undef vpaddl_s16
#define vpaddl_s16 simde_vpaddl_s16
#undef vpaddl_s32
#define vpaddl_s32 simde_vpaddl_s32
#undef vpaddl_s8
#define vpaddl_s8 simde_vpaddl_s8
#undef vpaddl_u16
#define vpaddl_u16 simde_vpaddl_u16
#undef vpaddl_u32
#define vpaddl_u32 simde_vpaddl_u32
#undef vpaddl_u8
#define vpaddl_u8 simde_vpaddl_u8
#undef vpaddlq_s16
#define vpaddlq_s16 simde_vpaddlq_s16
#undef vpaddlq_s32
#define vpaddlq_s32 simde_vpaddlq_s32
#undef vpaddlq_s8
#define vpaddlq_s8 simde_vpaddlq_s8
#undef vpaddlq_u16
#define vpaddlq_u16 simde_vpaddlq_u16
#undef vpaddlq_u32
#define vpaddlq_u32 simde_vpaddlq_u32
#undef vpaddlq_u8
#define vpaddlq_u8 simde_vpaddlq_u8
#undef vpaddq_f16
#define vpaddq_f16 simde_vpaddq_f16
#undef vpaddq_f32
#define vpaddq_f32 simde_vpaddq_f32
#undef vpaddq_f64
#define vpaddq_f64 simde_vpaddq_f64
#undef vpaddq_s16
#define vpaddq_s16 simde_vpaddq_s16
#undef vpaddq_s32
#define vpaddq_s32 simde_vpaddq_s32
#undef vpaddq_s64
#define vpaddq_s64 simde_vpaddq_s64
#undef vpaddq_s8
#define vpaddq_s8 simde_vpaddq_s8
#undef vpaddq_u16
#define vpaddq_u16 simde_vpaddq_u16
#undef vpaddq_u32
#define vpaddq_u32 simde_vpaddq_u32
#undef vpaddq_u64
#define vpaddq_u64 simde_vpaddq_u64
#undef vpaddq_u8
#define vpaddq_u8 simde_vpaddq_u8
#undef vpadds_f32
#define vpadds_f32 simde_vpadds_f32
#undef vpmax_f16
#define vpmax_f16 simde_vpmax_f16
#undef vpmax_f32
#define vpmax_f32 simde_vpmax_f32
#undef vpmax_s16
#define vpmax_s16 simde_vpmax_s16
#undef vpmax_s32
#define vpmax_s32 simde_vpmax_s32
#undef vpmax_s8
#define vpmax_s8 simde_vpmax_s8
#undef vpmax_u16
#define vpmax_u16 simde_vpmax_u16
#undef vpmax_u32
#define vpmax_u32 simde_vpmax_u32
#undef vpmax_u8
#define vpmax_u8 simde_vpmax_u8
#undef vpmaxnm_f16
#define vpmaxnm_f16 simde_vpmaxnm_f16
#undef vpmaxnm_f32
#define vpmaxnm_f32 simde_vpmaxnm_f32
#undef vpmaxnmq_f16
#define vpmaxnmq_f16 simde_vpmaxnmq_f16
#undef vpmaxnmq_f32
#define vpmaxnmq_f32 simde_vpmaxnmq_f32
#undef vpmaxnmq_f64
#define vpmaxnmq_f64 simde_vpmaxnmq_f64
#undef vpmaxnmqd_f64
#define vpmaxnmqd_f64 simde_vpmaxnmqd_f64
#undef vpmaxnms_f32
#define vpmaxnms_f32 simde_vpmaxnms_f32
#undef vpmaxq_f16
#define vpmaxq_f16 simde_vpmaxq_f16
#undef vpmaxq_f32
#define vpmaxq_f32 simde_vpmaxq_f32
#undef vpmaxq_f64
#define vpmaxq_f64 simde_vpmaxq_f64
#undef vpmaxq_s16
#define vpmaxq_s16 simde_vpmaxq_s16
#undef vpmaxq_s32
#define vpmaxq_s32 simde_vpmaxq_s32
#undef vpmaxq_s8
#define vpmaxq_s8 simde_vpmaxq_s8
#undef vpmaxq_u16
#define vpmaxq_u16 simde_vpmaxq_u16
#undef vpmaxq_u32
#define vpmaxq_u32 simde_vpmaxq_u32
#undef vpmaxq_u8
#define vpmaxq_u8 simde_vpmaxq_u8
#undef vpmaxqd_f64
#define vpmaxqd_f64 simde_vpmaxqd_f64
#undef vpmaxs_f32
#define vpmaxs_f32 simde_vpmaxs_f32
#undef vpmin_f16
#define vpmin_f16 simde_vpmin_f16
#undef vpmin_f32
#define vpmin_f32 simde_vpmin_f32
#undef vpmin_s16
#define vpmin_s16 simde_vpmin_s16
#undef vpmin_s32
#define vpmin_s32 simde_vpmin_s32
#undef vpmin_s8
#define vpmin_s8 simde_vpmin_s8
#undef vpmin_u16
#define vpmin_u16 simde_vpmin_u16
#undef vpmin_u32
#define vpmin_u32 simde_vpmin_u32
#undef vpmin_u8
#define vpmin_u8 simde_vpmin_u8
#undef vpminnm_f16
#define vpminnm_f16 simde_vpminnm_f16
#undef vpminnm_f32
#define vpminnm_f32 simde_vpminnm_f32
#undef vpminnmq_f16
#define vpminnmq_f16 simde_vpminnmq_f16
#undef vpminnmq_f32
#define vpminnmq_f32 simde_vpminnmq_f32
#undef vpminnmq_f64
#define vpminnmq_f64 simde_vpminnmq_f64
#undef vpminnmqd_f64
#define vpminnmqd_f64 simde_vpminnmqd_f64
#undef vpminnms_f32
#define vpminnms_f32 simde_vpminnms_f32
#undef vpminq_f16
#define vpminq_f16 simde_vpminq_f16
#undef vpminq_f32
#define vpminq_f32 simde_vpminq_f32
#undef vpminq_f64
#define vpminq_f64 simde_vpminq_f64
#undef vpminq_s16
#define vpminq_s16 simde_vpminq_s16
#undef vpminq_s32
#define vpminq_s32 simde_vpminq_s32
#undef vpminq_s8
#define vpminq_s8 simde_vpminq_s8
#undef vpminq_u16
#define vpminq_u16 simde_vpminq_u16
#undef vpminq_u32
#define vpminq_u32 simde_vpminq_u32
#undef vpminq_u8
#define vpminq_u8 simde_vpminq_u8
#undef vpminqd_f64
#define vpminqd_f64 simde_vpminqd_f64
#undef vpmins_f32
#define vpmins_f32 simde_vpmins_f32
#undef vqabs_s16
#define vqabs_s16 simde_vqabs_s16
#undef vqabs_s32
#define vqabs_s32 simde_vqabs_s32
#undef vqabs_s64
#define vqabs_s64 simde_vqabs_s64
#undef vqabs_s8
#define vqabs_s8 simde_vqabs_s8
#undef vqabsb_s8
#define vqabsb_s8 simde_vqabsb_s8
#undef vqabsd_s64
#define vqabsd_s64 simde_vqabsd_s64
#undef vqabsh_s16
#define vqabsh_s16 simde_vqabsh_s16
#undef vqabsq_s16
#define vqabsq_s16 simde_vqabsq_s16
#undef vqabsq_s32
#define vqabsq_s32 simde_vqabsq_s32
#undef vqabsq_s64
#define vqabsq_s64 simde_vqabsq_s64
#undef vqabsq_s8
#define vqabsq_s8 simde_vqabsq_s8
#undef vqabss_s32
#define vqabss_s32 simde_vqabss_s32
#undef vqadd_s16
#define vqadd_s16 simde_vqadd_s16
#undef vqadd_s32
#define vqadd_s32 simde_vqadd_s32
#undef vqadd_s64
#define vqadd_s64 simde_vqadd_s64
#undef vqadd_s8
#define vqadd_s8 simde_vqadd_s8
#undef vqadd_u16
#define vqadd_u16 simde_vqadd_u16
#undef vqadd_u32
#define vqadd_u32 simde_vqadd_u32
#undef vqadd_u64
#define vqadd_u64 simde_vqadd_u64
#undef vqadd_u8
#define vqadd_u8 simde_vqadd_u8
#undef vqaddb_s8
#define vqaddb_s8 simde_vqaddb_s8
#undef vqaddb_u8
#define vqaddb_u8 simde_vqaddb_u8
#undef vqaddd_s64
#define vqaddd_s64 simde_vqaddd_s64
#undef vqaddd_u64
#define vqaddd_u64 simde_vqaddd_u64
#undef vqaddh_s16
#define vqaddh_s16 simde_vqaddh_s16
#undef vqaddh_u16
#define vqaddh_u16 simde_vqaddh_u16
#undef vqaddq_s16
#define vqaddq_s16 simde_vqaddq_s16
#undef vqaddq_s32
#define vqaddq_s32 simde_vqaddq_s32
#undef vqaddq_s64
#define vqaddq_s64 simde_vqaddq_s64
#undef vqaddq_s8
#define vqaddq_s8 simde_vqaddq_s8
#undef vqaddq_u16
#define vqaddq_u16 simde_vqaddq_u16
#undef vqaddq_u32
#define vqaddq_u32 simde_vqaddq_u32
#undef vqaddq_u64
#define vqaddq_u64 simde_vqaddq_u64
#undef vqaddq_u8
#define vqaddq_u8 simde_vqaddq_u8
#undef vqadds_s32
#define vqadds_s32 simde_vqadds_s32
#undef vqadds_u32
#define vqadds_u32 simde_vqadds_u32
#undef vqdmlal_high_lane_s16
#define vqdmlal_high_lane_s16 simde_vqdmlal_high_lane_s16
#undef vqdmlal_high_lane_s32
#define vqdmlal_high_lane_s32 simde_vqdmlal_high_lane_s32
#undef vqdmlal_high_laneq_s16
#define vqdmlal_high_laneq_s16 simde_vqdmlal_high_laneq_s16
#undef vqdmlal_high_laneq_s32
#define vqdmlal_high_laneq_s32 simde_vqdmlal_high_laneq_s32
#undef vqdmlal_high_n_s16
#define vqdmlal_high_n_s16 simde_vqdmlal_high_n_s16
#undef vqdmlal_high_n_s32
#define vqdmlal_high_n_s32 simde_vqdmlal_high_n_s32
#undef vqdmlal_high_s16
#define vqdmlal_high_s16 simde_vqdmlal_high_s16
#undef vqdmlal_high_s32
#define vqdmlal_high_s32 simde_vqdmlal_high_s32
#undef vqdmlal_lane_s16
#define vqdmlal_lane_s16 simde_vqdmlal_lane_s16
#undef vqdmlal_lane_s32
#define vqdmlal_lane_s32 simde_vqdmlal_lane_s32
#undef vqdmlal_laneq_s16
#define vqdmlal_laneq_s16 simde_vqdmlal_laneq_s16
#undef vqdmlal_laneq_s32
#define vqdmlal_laneq_s32 simde_vqdmlal_laneq_s32
#undef vqdmlal_n_s16
#define vqdmlal_n_s16 simde_vqdmlal_n_s16
#undef vqdmlal_n_s32
#define vqdmlal_n_s32 simde_vqdmlal_n_s32
#undef vqdmlal_s16
#define vqdmlal_s16 simde_vqdmlal_s16
#undef vqdmlal_s32
#define vqdmlal_s32 simde_vqdmlal_s32
#undef vqdmlalh_lane_s16
#define vqdmlalh_lane_s16 simde_vqdmlalh_lane_s16
#undef vqdmlalh_laneq_s16
#define vqdmlalh_laneq_s16 simde_vqdmlalh_laneq_s16
#undef vqdmlalh_s16
#define vqdmlalh_s16 simde_vqdmlalh_s16
#undef vqdmlals_lane_s32
#define vqdmlals_lane_s32 simde_vqdmlals_lane_s32
#undef vqdmlals_laneq_s32
#define vqdmlals_laneq_s32 simde_vqdmlals_laneq_s32
#undef vqdmlals_s32
#define vqdmlals_s32 simde_vqdmlals_s32
#undef vqdmlsl_high_lane_s16
#define vqdmlsl_high_lane_s16 simde_vqdmlsl_high_lane_s16
#undef vqdmlsl_high_lane_s32
#define vqdmlsl_high_lane_s32 simde_vqdmlsl_high_lane_s32
#undef vqdmlsl_high_laneq_s16
#define vqdmlsl_high_laneq_s16 simde_vqdmlsl_high_laneq_s16
#undef vqdmlsl_high_laneq_s32
#define vqdmlsl_high_laneq_s32 simde_vqdmlsl_high_laneq_s32
#undef vqdmlsl_high_n_s16
#define vqdmlsl_high_n_s16 simde_vqdmlsl_high_n_s16
#undef vqdmlsl_high_n_s32
#define vqdmlsl_high_n_s32 simde_vqdmlsl_high_n_s32
#undef vqdmlsl_high_s16
#define vqdmlsl_high_s16 simde_vqdmlsl_high_s16
#undef vqdmlsl_high_s32
#define vqdmlsl_high_s32 simde_vqdmlsl_high_s32
#undef vqdmlsl_lane_s16
#define vqdmlsl_lane_s16 simde_vqdmlsl_lane_s16
#undef vqdmlsl_lane_s32
#define vqdmlsl_lane_s32 simde_vqdmlsl_lane_s32
#undef vqdmlsl_laneq_s16
#define vqdmlsl_laneq_s16 simde_vqdmlsl_laneq_s16
#undef vqdmlsl_laneq_s32
#define vqdmlsl_laneq_s32 simde_vqdmlsl_laneq_s32
#undef vqdmlsl_n_s16
#define vqdmlsl_n_s16 simde_vqdmlsl_n_s16
#undef vqdmlsl_n_s32
#define vqdmlsl_n_s32 simde_vqdmlsl_n_s32
#undef vqdmlsl_s16
#define vqdmlsl_s16 simde_vqdmlsl_s16
#undef vqdmlsl_s32
#define vqdmlsl_s32 simde_vqdmlsl_s32
#undef vqdmlslh_lane_s16
#define vqdmlslh_lane_s16 simde_vqdmlslh_lane_s16
#undef vqdmlslh_laneq_s16
#define vqdmlslh_laneq_s16 simde_vqdmlslh_laneq_s16
#undef vqdmlslh_s16
#define vqdmlslh_s16 simde_vqdmlslh_s16
#undef vqdmlsls_lane_s32
#define vqdmlsls_lane_s32 simde_vqdmlsls_lane_s32
#undef vqdmlsls_laneq_s32
#define vqdmlsls_laneq_s32 simde_vqdmlsls_laneq_s32
#undef vqdmlsls_s32
#define vqdmlsls_s32 simde_vqdmlsls_s32
#undef vqdmulh_lane_s16
#define vqdmulh_lane_s16 simde_vqdmulh_lane_s16
#undef vqdmulh_lane_s32
#define vqdmulh_lane_s32 simde_vqdmulh_lane_s32
#undef vqdmulh_laneq_s16
#define vqdmulh_laneq_s16 simde_vqdmulh_laneq_s16
#undef vqdmulh_laneq_s32
#define vqdmulh_laneq_s32 simde_vqdmulh_laneq_s32
#undef vqdmulh_n_s16
#define vqdmulh_n_s16 simde_vqdmulh_n_s16
#undef vqdmulh_n_s32
#define vqdmulh_n_s32 simde_vqdmulh_n_s32
#undef vqdmulh_s16
#define vqdmulh_s16 simde_vqdmulh_s16
#undef vqdmulh_s32
#define vqdmulh_s32 simde_vqdmulh_s32
#undef vqdmulhh_lane_s16
#define vqdmulhh_lane_s16 simde_vqdmulhh_lane_s16
#undef vqdmulhh_laneq_s16
#define vqdmulhh_laneq_s16 simde_vqdmulhh_laneq_s16
#undef vqdmulhh_s16
#define vqdmulhh_s16 simde_vqdmulhh_s16
#undef vqdmulhq_lane_s16
#define vqdmulhq_lane_s16 simde_vqdmulhq_lane_s16
#undef vqdmulhq_lane_s32
#define vqdmulhq_lane_s32 simde_vqdmulhq_lane_s32
#undef vqdmulhq_laneq_s16
#define vqdmulhq_laneq_s16 simde_vqdmulhq_laneq_s16
#undef vqdmulhq_laneq_s32
#define vqdmulhq_laneq_s32 simde_vqdmulhq_laneq_s32
#undef vqdmulhq_n_s16
#define vqdmulhq_n_s16 simde_vqdmulhq_n_s16
#undef vqdmulhq_n_s32
#define vqdmulhq_n_s32 simde_vqdmulhq_n_s32
#undef vqdmulhq_s16
#define vqdmulhq_s16 simde_vqdmulhq_s16
#undef vqdmulhq_s32
#define vqdmulhq_s32 simde_vqdmulhq_s32
#undef vqdmulhs_lane_s32
#define vqdmulhs_lane_s32 simde_vqdmulhs_lane_s32
#undef vqdmulhs_laneq_s32
#define vqdmulhs_laneq_s32 simde_vqdmulhs_laneq_s32
#undef vqdmulhs_s32
#define vqdmulhs_s32 simde_vqdmulhs_s32
#undef vqdmull_high_lane_s16
#define vqdmull_high_lane_s16 simde_vqdmull_high_lane_s16
#undef vqdmull_high_lane_s32
#define vqdmull_high_lane_s32 simde_vqdmull_high_lane_s32
#undef vqdmull_high_laneq_s16
#define vqdmull_high_laneq_s16 simde_vqdmull_high_laneq_s16
#undef vqdmull_high_laneq_s32
#define vqdmull_high_laneq_s32 simde_vqdmull_high_laneq_s32
#undef vqdmull_high_n_s16
#define vqdmull_high_n_s16 simde_vqdmull_high_n_s16
#undef vqdmull_high_n_s32
#define vqdmull_high_n_s32 simde_vqdmull_high_n_s32
#undef vqdmull_high_s16
#define vqdmull_high_s16 simde_vqdmull_high_s16
#undef vqdmull_high_s32
#define vqdmull_high_s32 simde_vqdmull_high_s32
#undef vqdmull_lane_s16
#define vqdmull_lane_s16 simde_vqdmull_lane_s16
#undef vqdmull_lane_s32
#define vqdmull_lane_s32 simde_vqdmull_lane_s32
#undef vqdmull_laneq_s16
#define vqdmull_laneq_s16 simde_vqdmull_laneq_s16
#undef vqdmull_laneq_s32
#define vqdmull_laneq_s32 simde_vqdmull_laneq_s32
#undef vqdmull_n_s16
#define vqdmull_n_s16 simde_vqdmull_n_s16
#undef vqdmull_n_s32
#define vqdmull_n_s32 simde_vqdmull_n_s32
#undef vqdmull_s16
#define vqdmull_s16 simde_vqdmull_s16
#undef vqdmull_s32
#define vqdmull_s32 simde_vqdmull_s32
#undef vqdmullh_lane_s16
#define vqdmullh_lane_s16 simde_vqdmullh_lane_s16
#undef vqdmullh_laneq_s16
#define vqdmullh_laneq_s16 simde_vqdmullh_laneq_s16
#undef vqdmullh_s16
#define vqdmullh_s16 simde_vqdmullh_s16
#undef vqdmulls_lane_s32
#define vqdmulls_lane_s32 simde_vqdmulls_lane_s32
#undef vqdmulls_laneq_s32
#define vqdmulls_laneq_s32 simde_vqdmulls_laneq_s32
#undef vqdmulls_s32
#define vqdmulls_s32 simde_vqdmulls_s32
#undef vqmovn_high_s16
#define vqmovn_high_s16 simde_vqmovn_high_s16
#undef vqmovn_high_s32
#define vqmovn_high_s32 simde_vqmovn_high_s32
#undef vqmovn_high_s64
#define vqmovn_high_s64 simde_vqmovn_high_s64
#undef vqmovn_high_u16
#define vqmovn_high_u16 simde_vqmovn_high_u16
#undef vqmovn_high_u32
#define vqmovn_high_u32 simde_vqmovn_high_u32
#undef vqmovn_high_u64
#define vqmovn_high_u64 simde_vqmovn_high_u64
#undef vqmovn_s16
#define vqmovn_s16 simde_vqmovn_s16
#undef vqmovn_s32
#define vqmovn_s32 simde_vqmovn_s32
#undef vqmovn_s64
#define vqmovn_s64 simde_vqmovn_s64
#undef vqmovn_u16
#define vqmovn_u16 simde_vqmovn_u16
#undef vqmovn_u32
#define vqmovn_u32 simde_vqmovn_u32
#undef vqmovn_u64
#define vqmovn_u64 simde_vqmovn_u64
#undef vqmovnd_s64
#define vqmovnd_s64 simde_vqmovnd_s64
#undef vqmovnd_u64
#define vqmovnd_u64 simde_vqmovnd_u64
#undef vqmovnh_s16
#define vqmovnh_s16 simde_vqmovnh_s16
#undef vqmovnh_u16
#define vqmovnh_u16 simde_vqmovnh_u16
#undef vqmovns_s32
#define vqmovns_s32 simde_vqmovns_s32
#undef vqmovns_u32
#define vqmovns_u32 simde_vqmovns_u32
#undef vqmovun_high_s16
#define vqmovun_high_s16 simde_vqmovun_high_s16
#undef vqmovun_high_s32
#define vqmovun_high_s32 simde_vqmovun_high_s32
#undef vqmovun_high_s64
#define vqmovun_high_s64 simde_vqmovun_high_s64
#undef vqmovun_s16
#define vqmovun_s16 simde_vqmovun_s16
#undef vqmovun_s32
#define vqmovun_s32 simde_vqmovun_s32
#undef vqmovun_s64
#define vqmovun_s64 simde_vqmovun_s64
#undef vqmovund_s64
#define vqmovund_s64 simde_vqmovund_s64
#undef vqmovunh_s16
#define vqmovunh_s16 simde_vqmovunh_s16
#undef vqmovuns_s32
#define vqmovuns_s32 simde_vqmovuns_s32
#undef vqneg_s16
#define vqneg_s16 simde_vqneg_s16
#undef vqneg_s32
#define vqneg_s32 simde_vqneg_s32
#undef vqneg_s64
#define vqneg_s64 simde_vqneg_s64
#undef vqneg_s8
#define vqneg_s8 simde_vqneg_s8
#undef vqnegb_s8
#define vqnegb_s8 simde_vqnegb_s8
#undef vqnegd_s64
#define vqnegd_s64 simde_vqnegd_s64
#undef vqnegh_s16
#define vqnegh_s16 simde_vqnegh_s16
#undef vqnegq_s16
#define vqnegq_s16 simde_vqnegq_s16
#undef vqnegq_s32
#define vqnegq_s32 simde_vqnegq_s32
#undef vqnegq_s64
#define vqnegq_s64 simde_vqnegq_s64
#undef vqnegq_s8
#define vqnegq_s8 simde_vqnegq_s8
#undef vqnegs_s32
#define vqnegs_s32 simde_vqnegs_s32
#undef vqrdmlah_lane_s16
#define vqrdmlah_lane_s16 simde_vqrdmlah_lane_s16
#undef vqrdmlah_lane_s32
#define vqrdmlah_lane_s32 simde_vqrdmlah_lane_s32
#undef vqrdmlah_laneq_s16
#define vqrdmlah_laneq_s16 simde_vqrdmlah_laneq_s16
#undef vqrdmlah_laneq_s32
#define vqrdmlah_laneq_s32 simde_vqrdmlah_laneq_s32
#undef vqrdmlah_s16
#define vqrdmlah_s16 simde_vqrdmlah_s16
#undef vqrdmlah_s32
#define vqrdmlah_s32 simde_vqrdmlah_s32
#undef vqrdmlahh_lane_s16
#define vqrdmlahh_lane_s16 simde_vqrdmlahh_lane_s16
#undef vqrdmlahh_laneq_s16
#define vqrdmlahh_laneq_s16 simde_vqrdmlahh_laneq_s16
#undef vqrdmlahh_s16
#define vqrdmlahh_s16 simde_vqrdmlahh_s16
#undef vqrdmlahq_lane_s16
#define vqrdmlahq_lane_s16 simde_vqrdmlahq_lane_s16
#undef vqrdmlahq_lane_s32
#define vqrdmlahq_lane_s32 simde_vqrdmlahq_lane_s32
#undef vqrdmlahq_laneq_s16
#define vqrdmlahq_laneq_s16 simde_vqrdmlahq_laneq_s16
#undef vqrdmlahq_laneq_s32
#define vqrdmlahq_laneq_s32 simde_vqrdmlahq_laneq_s32
#undef vqrdmlahq_s16
#define vqrdmlahq_s16 simde_vqrdmlahq_s16
#undef vqrdmlahq_s32
#define vqrdmlahq_s32 simde_vqrdmlahq_s32
#undef vqrdmlahs_lane_s32
#define vqrdmlahs_lane_s32 simde_vqrdmlahs_lane_s32
#undef vqrdmlahs_laneq_s32
#define vqrdmlahs_laneq_s32 simde_vqrdmlahs_laneq_s32
#undef vqrdmlahs_s32
#define vqrdmlahs_s32 simde_vqrdmlahs_s32
#undef vqrdmlsh_lane_s16
#define vqrdmlsh_lane_s16 simde_vqrdmlsh_lane_s16
#undef vqrdmlsh_lane_s32
#define vqrdmlsh_lane_s32 simde_vqrdmlsh_lane_s32
#undef vqrdmlsh_laneq_s16
#define vqrdmlsh_laneq_s16 simde_vqrdmlsh_laneq_s16
#undef vqrdmlsh_laneq_s32
#define vqrdmlsh_laneq_s32 simde_vqrdmlsh_laneq_s32
#undef vqrdmlsh_s16
#define vqrdmlsh_s16 simde_vqrdmlsh_s16
#undef vqrdmlsh_s32
#define vqrdmlsh_s32 simde_vqrdmlsh_s32
#undef vqrdmlshh_lane_s16
#define vqrdmlshh_lane_s16 simde_vqrdmlshh_lane_s16
#undef vqrdmlshh_laneq_s16
#define vqrdmlshh_laneq_s16 simde_vqrdmlshh_laneq_s16
#undef vqrdmlshh_s16
#define vqrdmlshh_s16 simde_vqrdmlshh_s16
#undef vqrdmlshq_lane_s16
#define vqrdmlshq_lane_s16 simde_vqrdmlshq_lane_s16
#undef vqrdmlshq_lane_s32
#define vqrdmlshq_lane_s32 simde_vqrdmlshq_lane_s32
#undef vqrdmlshq_laneq_s16
#define vqrdmlshq_laneq_s16 simde_vqrdmlshq_laneq_s16
#undef vqrdmlshq_laneq_s32
#define vqrdmlshq_laneq_s32 simde_vqrdmlshq_laneq_s32
#undef vqrdmlshq_s16
#define vqrdmlshq_s16 simde_vqrdmlshq_s16
#undef vqrdmlshq_s32
#define vqrdmlshq_s32 simde_vqrdmlshq_s32
#undef vqrdmlshs_lane_s32
#define vqrdmlshs_lane_s32 simde_vqrdmlshs_lane_s32
#undef vqrdmlshs_laneq_s32
#define vqrdmlshs_laneq_s32 simde_vqrdmlshs_laneq_s32
#undef vqrdmlshs_s32
#define vqrdmlshs_s32 simde_vqrdmlshs_s32
#undef vqrdmulh_lane_s16
#define vqrdmulh_lane_s16 simde_vqrdmulh_lane_s16
#undef vqrdmulh_lane_s32
#define vqrdmulh_lane_s32 simde_vqrdmulh_lane_s32
#undef vqrdmulh_laneq_s16
#define vqrdmulh_laneq_s16 simde_vqrdmulh_laneq_s16
#undef vqrdmulh_laneq_s32
#define vqrdmulh_laneq_s32 simde_vqrdmulh_laneq_s32
#undef vqrdmulh_n_s16
#define vqrdmulh_n_s16 simde_vqrdmulh_n_s16
#undef vqrdmulh_n_s32
#define vqrdmulh_n_s32 simde_vqrdmulh_n_s32
#undef vqrdmulh_s16
#define vqrdmulh_s16 simde_vqrdmulh_s16
#undef vqrdmulh_s32
#define vqrdmulh_s32 simde_vqrdmulh_s32
#undef vqrdmulhh_lane_s16
#define vqrdmulhh_lane_s16 simde_vqrdmulhh_lane_s16
#undef vqrdmulhh_laneq_s16
#define vqrdmulhh_laneq_s16 simde_vqrdmulhh_laneq_s16
#undef vqrdmulhh_s16
#define vqrdmulhh_s16 simde_vqrdmulhh_s16
#undef vqrdmulhq_lane_s16
#define vqrdmulhq_lane_s16 simde_vqrdmulhq_lane_s16
#undef vqrdmulhq_lane_s32
#define vqrdmulhq_lane_s32 simde_vqrdmulhq_lane_s32
#undef vqrdmulhq_laneq_s16
#define vqrdmulhq_laneq_s16 simde_vqrdmulhq_laneq_s16
#undef vqrdmulhq_laneq_s32
#define vqrdmulhq_laneq_s32 simde_vqrdmulhq_laneq_s32
#undef vqrdmulhq_n_s16
#define vqrdmulhq_n_s16 simde_vqrdmulhq_n_s16
#undef vqrdmulhq_n_s32
#define vqrdmulhq_n_s32 simde_vqrdmulhq_n_s32
#undef vqrdmulhq_s16
#define vqrdmulhq_s16 simde_vqrdmulhq_s16
#undef vqrdmulhq_s32
#define vqrdmulhq_s32 simde_vqrdmulhq_s32
#undef vqrdmulhs_lane_s32
#define vqrdmulhs_lane_s32 simde_vqrdmulhs_lane_s32
#undef vqrdmulhs_laneq_s32
#define vqrdmulhs_laneq_s32 simde_vqrdmulhs_laneq_s32
#undef vqrdmulhs_s32
#define vqrdmulhs_s32 simde_vqrdmulhs_s32
#undef vqrshl_s16
#define vqrshl_s16 simde_vqrshl_s16
#undef vqrshl_s32
#define vqrshl_s32 simde_vqrshl_s32
#undef vqrshl_s64
#define vqrshl_s64 simde_vqrshl_s64
#undef vqrshl_s8
#define vqrshl_s8 simde_vqrshl_s8
#undef vqrshl_u16
#define vqrshl_u16 simde_vqrshl_u16
#undef vqrshl_u32
#define vqrshl_u32 simde_vqrshl_u32
#undef vqrshl_u64
#define vqrshl_u64 simde_vqrshl_u64
#undef vqrshl_u8
#define vqrshl_u8 simde_vqrshl_u8
#undef vqrshlb_s8
#define vqrshlb_s8 simde_vqrshlb_s8
#undef vqrshlb_u8
#define vqrshlb_u8 simde_vqrshlb_u8
#undef vqrshld_s64
#define vqrshld_s64 simde_vqrshld_s64
#undef vqrshld_u64
#define vqrshld_u64 simde_vqrshld_u64
#undef vqrshlh_s16
#define vqrshlh_s16 simde_vqrshlh_s16
#undef vqrshlh_u16
#define vqrshlh_u16 simde_vqrshlh_u16
#undef vqrshlq_s16
#define vqrshlq_s16 simde_vqrshlq_s16
#undef vqrshlq_s32
#define vqrshlq_s32 simde_vqrshlq_s32
#undef vqrshlq_s64
#define vqrshlq_s64 simde_vqrshlq_s64
#undef vqrshlq_s8
#define vqrshlq_s8 simde_vqrshlq_s8
#undef vqrshlq_u16
#define vqrshlq_u16 simde_vqrshlq_u16
#undef vqrshlq_u32
#define vqrshlq_u32 simde_vqrshlq_u32
#undef vqrshlq_u64
#define vqrshlq_u64 simde_vqrshlq_u64
#undef vqrshlq_u8
#define vqrshlq_u8 simde_vqrshlq_u8
#undef vqrshls_s32
#define vqrshls_s32 simde_vqrshls_s32
#undef vqrshls_u32
#define vqrshls_u32 simde_vqrshls_u32
#undef vqrshrn_high_n_s16
#define vqrshrn_high_n_s16 simde_vqrshrn_high_n_s16
#undef vqrshrn_high_n_s32
#define vqrshrn_high_n_s32 simde_vqrshrn_high_n_s32
#undef vqrshrn_high_n_s64
#define vqrshrn_high_n_s64 simde_vqrshrn_high_n_s64
#undef vqrshrn_high_n_u16
#define vqrshrn_high_n_u16 simde_vqrshrn_high_n_u16
#undef vqrshrn_high_n_u32
#define vqrshrn_high_n_u32 simde_vqrshrn_high_n_u32
#undef vqrshrn_high_n_u64
#define vqrshrn_high_n_u64 simde_vqrshrn_high_n_u64
#undef vqrshrn_n_s16
#define vqrshrn_n_s16 simde_vqrshrn_n_s16
#undef vqrshrn_n_s32
#define vqrshrn_n_s32 simde_vqrshrn_n_s32
#undef vqrshrn_n_s64
#define vqrshrn_n_s64 simde_vqrshrn_n_s64
#undef vqrshrn_n_u16
#define vqrshrn_n_u16 simde_vqrshrn_n_u16
#undef vqrshrn_n_u32
#define vqrshrn_n_u32 simde_vqrshrn_n_u32
#undef vqrshrn_n_u64
#define vqrshrn_n_u64 simde_vqrshrn_n_u64
#undef vqrshrnd_n_s64
#define vqrshrnd_n_s64 simde_vqrshrnd_n_s64
#undef vqrshrnd_n_u64
#define vqrshrnd_n_u64 simde_vqrshrnd_n_u64
#undef vqrshrnh_n_s16
#define vqrshrnh_n_s16 simde_vqrshrnh_n_s16
#undef vqrshrnh_n_u16
#define vqrshrnh_n_u16 simde_vqrshrnh_n_u16
#undef vqrshrns_n_s32
#define vqrshrns_n_s32 simde_vqrshrns_n_s32
#undef vqrshrns_n_u32
#define vqrshrns_n_u32 simde_vqrshrns_n_u32
#undef vqrshrun_high_n_s16
#define vqrshrun_high_n_s16 simde_vqrshrun_high_n_s16
#undef vqrshrun_high_n_s32
#define vqrshrun_high_n_s32 simde_vqrshrun_high_n_s32
#undef vqrshrun_high_n_s64
#define vqrshrun_high_n_s64 simde_vqrshrun_high_n_s64
#undef vqrshrun_n_s16
#define vqrshrun_n_s16 simde_vqrshrun_n_s16
#undef vqrshrun_n_s32
#define vqrshrun_n_s32 simde_vqrshrun_n_s32
#undef vqrshrun_n_s64
#define vqrshrun_n_s64 simde_vqrshrun_n_s64
#undef vqrshrund_n_s64
#define vqrshrund_n_s64 simde_vqrshrund_n_s64
#undef vqrshrunh_n_s16
#define vqrshrunh_n_s16 simde_vqrshrunh_n_s16
#undef vqrshruns_n_s32
#define vqrshruns_n_s32 simde_vqrshruns_n_s32
#undef vqshl_n_s16
#define vqshl_n_s16 simde_vqshl_n_s16
#undef vqshl_n_s32
#define vqshl_n_s32 simde_vqshl_n_s32
#undef vqshl_n_s64
#define vqshl_n_s64 simde_vqshl_n_s64
#undef vqshl_n_s8
#define vqshl_n_s8 simde_vqshl_n_s8
#undef vqshl_n_u16
#define vqshl_n_u16 simde_vqshl_n_u16
#undef vqshl_n_u32
#define vqshl_n_u32 simde_vqshl_n_u32
#undef vqshl_n_u64
#define vqshl_n_u64 simde_vqshl_n_u64
#undef vqshl_n_u8
#define vqshl_n_u8 simde_vqshl_n_u8
#undef vqshl_s16
#define vqshl_s16 simde_vqshl_s16
#undef vqshl_s32
#define vqshl_s32 simde_vqshl_s32
#undef vqshl_s64
#define vqshl_s64 simde_vqshl_s64
#undef vqshl_s8
#define vqshl_s8 simde_vqshl_s8
#undef vqshl_u16
#define vqshl_u16 simde_vqshl_u16
#undef vqshl_u32
#define vqshl_u32 simde_vqshl_u32
#undef vqshl_u64
#define vqshl_u64 simde_vqshl_u64
#undef vqshl_u8
#define vqshl_u8 simde_vqshl_u8
#undef vqshlb_n_s8
#define vqshlb_n_s8 simde_vqshlb_n_s8
#undef vqshlb_n_u8
#define vqshlb_n_u8 simde_vqshlb_n_u8
#undef vqshlb_s8
#define vqshlb_s8 simde_vqshlb_s8
#undef vqshlb_u8
#define vqshlb_u8 simde_vqshlb_u8
#undef vqshld_n_s64
#define vqshld_n_s64 simde_vqshld_n_s64
#undef vqshld_n_u64
#define vqshld_n_u64 simde_vqshld_n_u64
#undef vqshld_s64
#define vqshld_s64 simde_vqshld_s64
#undef vqshld_u64
#define vqshld_u64 simde_vqshld_u64
#undef vqshlh_n_s16
#define vqshlh_n_s16 simde_vqshlh_n_s16
#undef vqshlh_n_u16
#define vqshlh_n_u16 simde_vqshlh_n_u16
#undef vqshlh_s16
#define vqshlh_s16 simde_vqshlh_s16
#undef vqshlh_u16
#define vqshlh_u16 simde_vqshlh_u16
#undef vqshlq_n_s16
#define vqshlq_n_s16 simde_vqshlq_n_s16
#undef vqshlq_n_s32
#define vqshlq_n_s32 simde_vqshlq_n_s32
#undef vqshlq_n_s64
#define vqshlq_n_s64 simde_vqshlq_n_s64
#undef vqshlq_n_s8
#define vqshlq_n_s8 simde_vqshlq_n_s8
#undef vqshlq_n_u16
#define vqshlq_n_u16 simde_vqshlq_n_u16
#undef vqshlq_n_u32
#define vqshlq_n_u32 simde_vqshlq_n_u32
#undef vqshlq_n_u64
#define vqshlq_n_u64 simde_vqshlq_n_u64
#undef vqshlq_n_u8
#define vqshlq_n_u8 simde_vqshlq_n_u8
#undef vqshlq_s16
#define vqshlq_s16 simde_vqshlq_s16
#undef vqshlq_s32
#define vqshlq_s32 simde_vqshlq_s32
#undef vqshlq_s64
#define vqshlq_s64 simde_vqshlq_s64
#undef vqshlq_s8
#define vqshlq_s8 simde_vqshlq_s8
#undef vqshlq_u16
#define vqshlq_u16 simde_vqshlq_u16
#undef vqshlq_u32
#define vqshlq_u32 simde_vqshlq_u32
#undef vqshlq_u64
#define vqshlq_u64 simde_vqshlq_u64
#undef vqshlq_u8
#define vqshlq_u8 simde_vqshlq_u8
#undef vqshls_n_s32
#define vqshls_n_s32 simde_vqshls_n_s32
#undef vqshls_n_u32
#define vqshls_n_u32 simde_vqshls_n_u32
#undef vqshls_s32
#define vqshls_s32 simde_vqshls_s32
#undef vqshls_u32
#define vqshls_u32 simde_vqshls_u32
#undef vqshlu_n_s16
#define vqshlu_n_s16 simde_vqshlu_n_s16
#undef vqshlu_n_s32
#define vqshlu_n_s32 simde_vqshlu_n_s32
#undef vqshlu_n_s64
#define vqshlu_n_s64 simde_vqshlu_n_s64
#undef vqshlu_n_s8
#define vqshlu_n_s8 simde_vqshlu_n_s8
#undef vqshlub_n_s8
#define vqshlub_n_s8 simde_vqshlub_n_s8
#undef vqshlud_n_s64
#define vqshlud_n_s64 simde_vqshlud_n_s64
#undef vqshluh_n_s16
#define vqshluh_n_s16 simde_vqshluh_n_s16
#undef vqshluq_n_s16
#define vqshluq_n_s16 simde_vqshluq_n_s16
#undef vqshluq_n_s32
#define vqshluq_n_s32 simde_vqshluq_n_s32
#undef vqshluq_n_s64
#define vqshluq_n_s64 simde_vqshluq_n_s64
#undef vqshluq_n_s8
#define vqshluq_n_s8 simde_vqshluq_n_s8
#undef vqshlus_n_s32
#define vqshlus_n_s32 simde_vqshlus_n_s32
#undef vqshrn_high_n_s16
#define vqshrn_high_n_s16 simde_vqshrn_high_n_s16
#undef vqshrn_high_n_s32
#define vqshrn_high_n_s32 simde_vqshrn_high_n_s32
#undef vqshrn_high_n_s64
#define vqshrn_high_n_s64 simde_vqshrn_high_n_s64
#undef vqshrn_high_n_u16
#define vqshrn_high_n_u16 simde_vqshrn_high_n_u16
#undef vqshrn_high_n_u32
#define vqshrn_high_n_u32 simde_vqshrn_high_n_u32
#undef vqshrn_high_n_u64
#define vqshrn_high_n_u64 simde_vqshrn_high_n_u64
#undef vqshrn_n_s16
#define vqshrn_n_s16 simde_vqshrn_n_s16
#undef vqshrn_n_s32
#define vqshrn_n_s32 simde_vqshrn_n_s32
#undef vqshrn_n_s64
#define vqshrn_n_s64 simde_vqshrn_n_s64
#undef vqshrn_n_u16
#define vqshrn_n_u16 simde_vqshrn_n_u16
#undef vqshrn_n_u32
#define vqshrn_n_u32 simde_vqshrn_n_u32
#undef vqshrn_n_u64
#define vqshrn_n_u64 simde_vqshrn_n_u64
#undef vqshrnd_n_s64
#define vqshrnd_n_s64 simde_vqshrnd_n_s64
#undef vqshrnd_n_u64
#define vqshrnd_n_u64 simde_vqshrnd_n_u64
#undef vqshrnh_n_s16
#define vqshrnh_n_s16 simde_vqshrnh_n_s16
#undef vqshrnh_n_u16
#define vqshrnh_n_u16 simde_vqshrnh_n_u16
#undef vqshrns_n_s32
#define vqshrns_n_s32 simde_vqshrns_n_s32
#undef vqshrns_n_u32
#define vqshrns_n_u32 simde_vqshrns_n_u32
#undef vqshrun_high_n_s16
#define vqshrun_high_n_s16 simde_vqshrun_high_n_s16
#undef vqshrun_high_n_s32
#define vqshrun_high_n_s32 simde_vqshrun_high_n_s32
#undef vqshrun_high_n_s64
#define vqshrun_high_n_s64 simde_vqshrun_high_n_s64
#undef vqshrun_n_s16
#define vqshrun_n_s16 simde_vqshrun_n_s16
#undef vqshrun_n_s32
#define vqshrun_n_s32 simde_vqshrun_n_s32
#undef vqshrun_n_s64
#define vqshrun_n_s64 simde_vqshrun_n_s64
#undef vqshrund_n_s64
#define vqshrund_n_s64 simde_vqshrund_n_s64
#undef vqshrunh_n_s16
#define vqshrunh_n_s16 simde_vqshrunh_n_s16
#undef vqshruns_n_s32
#define vqshruns_n_s32 simde_vqshruns_n_s32
#undef vqsub_s16
#define vqsub_s16 simde_vqsub_s16
#undef vqsub_s32
#define vqsub_s32 simde_vqsub_s32
#undef vqsub_s64
#define vqsub_s64 simde_vqsub_s64
#undef vqsub_s8
#define vqsub_s8 simde_vqsub_s8
#undef vqsub_u16
#define vqsub_u16 simde_vqsub_u16
#undef vqsub_u32
#define vqsub_u32 simde_vqsub_u32
#undef vqsub_u64
#define vqsub_u64 simde_vqsub_u64
#undef vqsub_u8
#define vqsub_u8 simde_vqsub_u8
#undef vqsubb_s8
#define vqsubb_s8 simde_vqsubb_s8
#undef vqsubb_u8
#define vqsubb_u8 simde_vqsubb_u8
#undef vqsubd_s64
#define vqsubd_s64 simde_vqsubd_s64
#undef vqsubd_u64
#define vqsubd_u64 simde_vqsubd_u64
#undef vqsubh_s16
#define vqsubh_s16 simde_vqsubh_s16
#undef vqsubh_u16
#define vqsubh_u16 simde_vqsubh_u16
#undef vqsubq_s16
#define vqsubq_s16 simde_vqsubq_s16
#undef vqsubq_s32
#define vqsubq_s32 simde_vqsubq_s32
#undef vqsubq_s64
#define vqsubq_s64 simde_vqsubq_s64
#undef vqsubq_s8
#define vqsubq_s8 simde_vqsubq_s8
#undef vqsubq_u16
#define vqsubq_u16 simde_vqsubq_u16
#undef vqsubq_u32
#define vqsubq_u32 simde_vqsubq_u32
#undef vqsubq_u64
#define vqsubq_u64 simde_vqsubq_u64
#undef vqsubq_u8
#define vqsubq_u8 simde_vqsubq_u8
#undef vqsubs_s32
#define vqsubs_s32 simde_vqsubs_s32
#undef vqsubs_u32
#define vqsubs_u32 simde_vqsubs_u32
#undef vqtbl1_p8
#define vqtbl1_p8 simde_vqtbl1_p8
#undef vqtbl1_s8
#define vqtbl1_s8 simde_vqtbl1_s8
#undef vqtbl1_u8
#define vqtbl1_u8 simde_vqtbl1_u8
#undef vqtbl1q_p8
#define vqtbl1q_p8 simde_vqtbl1q_p8
#undef vqtbl1q_s8
#define vqtbl1q_s8 simde_vqtbl1q_s8
#undef vqtbl1q_u8
#define vqtbl1q_u8 simde_vqtbl1q_u8
#undef vqtbl2_p8
#define vqtbl2_p8 simde_vqtbl2_p8
#undef vqtbl2_s8
#define vqtbl2_s8 simde_vqtbl2_s8
#undef vqtbl2_u8
#define vqtbl2_u8 simde_vqtbl2_u8
#undef vqtbl2q_p8
#define vqtbl2q_p8 simde_vqtbl2q_p8
#undef vqtbl2q_s8
#define vqtbl2q_s8 simde_vqtbl2q_s8
#undef vqtbl2q_u8
#define vqtbl2q_u8 simde_vqtbl2q_u8
#undef vqtbl3_p8
#define vqtbl3_p8 simde_vqtbl3_p8
#undef vqtbl3_s8
#define vqtbl3_s8 simde_vqtbl3_s8
#undef vqtbl3_u8
#define vqtbl3_u8 simde_vqtbl3_u8
#undef vqtbl3q_p8
#define vqtbl3q_p8 simde_vqtbl3q_p8
#undef vqtbl3q_s8
#define vqtbl3q_s8 simde_vqtbl3q_s8
#undef vqtbl3q_u8
#define vqtbl3q_u8 simde_vqtbl3q_u8
#undef vqtbl4_p8
#define vqtbl4_p8 simde_vqtbl4_p8
#undef vqtbl4_s8
#define vqtbl4_s8 simde_vqtbl4_s8
#undef vqtbl4_u8
#define vqtbl4_u8 simde_vqtbl4_u8
#undef vqtbl4q_p8
#define vqtbl4q_p8 simde_vqtbl4q_p8
#undef vqtbl4q_s8
#define vqtbl4q_s8 simde_vqtbl4q_s8
#undef vqtbl4q_u8
#define vqtbl4q_u8 simde_vqtbl4q_u8
#undef vqtbx1_p8
#define vqtbx1_p8 simde_vqtbx1_p8
#undef vqtbx1_s8
#define vqtbx1_s8 simde_vqtbx1_s8
#undef vqtbx1_u8
#define vqtbx1_u8 simde_vqtbx1_u8
#undef vqtbx1q_p8
#define vqtbx1q_p8 simde_vqtbx1q_p8
#undef vqtbx1q_s8
#define vqtbx1q_s8 simde_vqtbx1q_s8
#undef vqtbx1q_u8
#define vqtbx1q_u8 simde_vqtbx1q_u8
#undef vqtbx2_p8
#define vqtbx2_p8 simde_vqtbx2_p8
#undef vqtbx2_s8
#define vqtbx2_s8 simde_vqtbx2_s8
#undef vqtbx2_u8
#define vqtbx2_u8 simde_vqtbx2_u8
#undef vqtbx2q_p8
#define vqtbx2q_p8 simde_vqtbx2q_p8
#undef vqtbx2q_s8
#define vqtbx2q_s8 simde_vqtbx2q_s8
#undef vqtbx2q_u8
#define vqtbx2q_u8 simde_vqtbx2q_u8
#undef vqtbx3_p8
#define vqtbx3_p8 simde_vqtbx3_p8
#undef vqtbx3_s8
#define vqtbx3_s8 simde_vqtbx3_s8
#undef vqtbx3_u8
#define vqtbx3_u8 simde_vqtbx3_u8
#undef vqtbx3q_p8
#define vqtbx3q_p8 simde_vqtbx3q_p8
#undef vqtbx3q_s8
#define vqtbx3q_s8 simde_vqtbx3q_s8
#undef vqtbx3q_u8
#define vqtbx3q_u8 simde_vqtbx3q_u8
#undef vqtbx4_p8
#define vqtbx4_p8 simde_vqtbx4_p8
#undef vqtbx4_s8
#define vqtbx4_s8 simde_vqtbx4_s8
#undef vqtbx4_u8
#define vqtbx4_u8 simde_vqtbx4_u8
#undef vqtbx4q_p8
#define vqtbx4q_p8 simde_vqtbx4q_p8
#undef vqtbx4q_s8
#define vqtbx4q_s8 simde_vqtbx4q_s8
#undef vqtbx4q_u8
#define vqtbx4q_u8 simde_vqtbx4q_u8
#undef vraddhn_high_s16
#define vraddhn_high_s16 simde_vraddhn_high_s16
#undef vraddhn_high_s32
#define vraddhn_high_s32 simde_vraddhn_high_s32
#undef vraddhn_high_s64
#define vraddhn_high_s64 simde_vraddhn_high_s64
#undef vraddhn_high_u16
#define vraddhn_high_u16 simde_vraddhn_high_u16
#undef vraddhn_high_u32
#define vraddhn_high_u32 simde_vraddhn_high_u32
#undef vraddhn_high_u64
#define vraddhn_high_u64 simde_vraddhn_high_u64
#undef vraddhn_s16
#define vraddhn_s16 simde_vraddhn_s16
#undef vraddhn_s32
#define vraddhn_s32 simde_vraddhn_s32
#undef vraddhn_s64
#define vraddhn_s64 simde_vraddhn_s64
#undef vraddhn_u16
#define vraddhn_u16 simde_vraddhn_u16
#undef vraddhn_u32
#define vraddhn_u32 simde_vraddhn_u32
#undef vraddhn_u64
#define vraddhn_u64 simde_vraddhn_u64
#undef vrax1q_u64
#define vrax1q_u64 simde_vrax1q_u64
#undef vrbit_p8
#define vrbit_p8 simde_vrbit_p8
#undef vrbit_s8
#define vrbit_s8 simde_vrbit_s8
#undef vrbit_u8
#define vrbit_u8 simde_vrbit_u8
#undef vrbitq_p8
#define vrbitq_p8 simde_vrbitq_p8
#undef vrbitq_s8
#define vrbitq_s8 simde_vrbitq_s8
#undef vrbitq_u8
#define vrbitq_u8 simde_vrbitq_u8
#undef vrecpe_f16
#define vrecpe_f16 simde_vrecpe_f16
#undef vrecpe_f32
#define vrecpe_f32 simde_vrecpe_f32
#undef vrecpe_f64
#define vrecpe_f64 simde_vrecpe_f64
#undef vrecpe_u32
#define vrecpe_u32 simde_vrecpe_u32
#undef vrecped_f64
#define vrecped_f64 simde_vrecped_f64
#undef vrecpeh_f16
#define vrecpeh_f16 simde_vrecpeh_f16
#undef vrecpeq_f16
#define vrecpeq_f16 simde_vrecpeq_f16
#undef vrecpeq_f32
#define vrecpeq_f32 simde_vrecpeq_f32
#undef vrecpeq_f64
#define vrecpeq_f64 simde_vrecpeq_f64
#undef vrecpeq_u32
#define vrecpeq_u32 simde_vrecpeq_u32
#undef vrecpes_f32
#define vrecpes_f32 simde_vrecpes_f32
#undef vrecps_f16
#define vrecps_f16 simde_vrecps_f16
#undef vrecps_f32
#define vrecps_f32 simde_vrecps_f32
#undef vrecps_f64
#define vrecps_f64 simde_vrecps_f64
#undef vrecpsd_f64
#define vrecpsd_f64 simde_vrecpsd_f64
#undef vrecpsh_f16
#define vrecpsh_f16 simde_vrecpsh_f16
#undef vrecpsq_f16
#define vrecpsq_f16 simde_vrecpsq_f16
#undef vrecpsq_f32
#define vrecpsq_f32 simde_vrecpsq_f32
#undef vrecpsq_f64
#define vrecpsq_f64 simde_vrecpsq_f64
#undef vrecpss_f32
#define vrecpss_f32 simde_vrecpss_f32
#undef vrecpxd_f64
#define vrecpxd_f64 simde_vrecpxd_f64
#undef vrecpxh_f16
#define vrecpxh_f16 simde_vrecpxh_f16
#undef vrecpxs_f32
#define vrecpxs_f32 simde_vrecpxs_f32
#undef vreinterpret_bf16_p16
#define vreinterpret_bf16_p16 simde_vreinterpret_bf16_p16
#undef vreinterpret_bf16_p64
#define vreinterpret_bf16_p64 simde_vreinterpret_bf16_p64
#undef vreinterpret_bf16_p8
#define vreinterpret_bf16_p8 simde_vreinterpret_bf16_p8
#undef vreinterpret_bf16_s16
#define vreinterpret_bf16_s16 simde_vreinterpret_bf16_s16
#undef vreinterpret_bf16_s32
#define vreinterpret_bf16_s32 simde_vreinterpret_bf16_s32
#undef vreinterpret_bf16_s64
#define vreinterpret_bf16_s64 simde_vreinterpret_bf16_s64
#undef vreinterpret_bf16_s8
#define vreinterpret_bf16_s8 simde_vreinterpret_bf16_s8
#undef vreinterpret_bf16_u16
#define vreinterpret_bf16_u16 simde_vreinterpret_bf16_u16
#undef vreinterpret_bf16_u32
#define vreinterpret_bf16_u32 simde_vreinterpret_bf16_u32
#undef vreinterpret_bf16_u64
#define vreinterpret_bf16_u64 simde_vreinterpret_bf16_u64
#undef vreinterpret_bf16_u8
#define vreinterpret_bf16_u8 simde_vreinterpret_bf16_u8
#undef vreinterpret_f16_p16
#define vreinterpret_f16_p16 simde_vreinterpret_f16_p16
#undef vreinterpret_f16_u16
#define vreinterpret_f16_u16 simde_vreinterpret_f16_u16
#undef vreinterpret_p16_bf16
#define vreinterpret_p16_bf16 simde_vreinterpret_p16_bf16
#undef vreinterpret_p16_f16
#define vreinterpret_p16_f16 simde_vreinterpret_p16_f16
#undef vreinterpret_p64_bf16
#define vreinterpret_p64_bf16 simde_vreinterpret_p64_bf16
#undef vreinterpret_p8_bf16
#define vreinterpret_p8_bf16 simde_vreinterpret_p8_bf16
#undef vreinterpret_p8_f16
#define vreinterpret_p8_f16 simde_vreinterpret_p8_f16
#undef vreinterpret_s16_bf16
#define vreinterpret_s16_bf16 simde_vreinterpret_s16_bf16
#undef vreinterpret_s16_f16
#define vreinterpret_s16_f16 simde_vreinterpret_s16_f16
#undef vreinterpret_s32_bf16
#define vreinterpret_s32_bf16 simde_vreinterpret_s32_bf16
#undef vreinterpret_s32_f16
#define vreinterpret_s32_f16 simde_vreinterpret_s32_f16
#undef vreinterpret_s64_bf16
#define vreinterpret_s64_bf16 simde_vreinterpret_s64_bf16
#undef vreinterpret_s64_f16
#define vreinterpret_s64_f16 simde_vreinterpret_s64_f16
#undef vreinterpret_s8_bf16
#define vreinterpret_s8_bf16 simde_vreinterpret_s8_bf16
#undef vreinterpret_s8_f16
#define vreinterpret_s8_f16 simde_vreinterpret_s8_f16
#undef vreinterpret_u16_bf16
#define vreinterpret_u16_bf16 simde_vreinterpret_u16_bf16
#undef vreinterpret_u16_f16
#define vreinterpret_u16_f16 simde_vreinterpret_u16_f16
#undef vreinterpret_u32_bf16
#define vreinterpret_u32_bf16 simde_vreinterpret_u32_bf16
#undef vreinterpret_u32_f16
#define vreinterpret_u32_f16 simde_vreinterpret_u32_f16
#undef vreinterpret_u64_bf16
#define vreinterpret_u64_bf16 simde_vreinterpret_u64_bf16
#undef vreinterpret_u8_bf16
#define vreinterpret_u8_bf16 simde_vreinterpret_u8_bf16
#undef vreinterpret_u8_f16
#define vreinterpret_u8_f16 simde_vreinterpret_u8_f16
#undef vreinterpretq_bf16_p128
#define vreinterpretq_bf16_p128 simde_vreinterpretq_bf16_p128
#undef vreinterpretq_bf16_p16
#define vreinterpretq_bf16_p16 simde_vreinterpretq_bf16_p16
#undef vreinterpretq_bf16_p64
#define vreinterpretq_bf16_p64 simde_vreinterpretq_bf16_p64
#undef vreinterpretq_bf16_p8
#define vreinterpretq_bf16_p8 simde_vreinterpretq_bf16_p8
#undef vreinterpretq_bf16_s16
#define vreinterpretq_bf16_s16 simde_vreinterpretq_bf16_s16
#undef vreinterpretq_bf16_s32
#define vreinterpretq_bf16_s32 simde_vreinterpretq_bf16_s32
#undef vreinterpretq_bf16_s64
#define vreinterpretq_bf16_s64 simde_vreinterpretq_bf16_s64
#undef vreinterpretq_bf16_s8
#define vreinterpretq_bf16_s8 simde_vreinterpretq_bf16_s8
#undef vreinterpretq_bf16_u16
#define vreinterpretq_bf16_u16 simde_vreinterpretq_bf16_u16
#undef vreinterpretq_bf16_u32
#define vreinterpretq_bf16_u32 simde_vreinterpretq_bf16_u32
#undef vreinterpretq_bf16_u64
#define vreinterpretq_bf16_u64 simde_vreinterpretq_bf16_u64
#undef vreinterpretq_bf16_u8
#define vreinterpretq_bf16_u8 simde_vreinterpretq_bf16_u8
#undef vreinterpretq_f16_f32
#define vreinterpretq_f16_f32 simde_vreinterpretq_f16_f32
#undef vreinterpretq_f16_f64
#define vreinterpretq_f16_f64 simde_vreinterpretq_f16_f64
#undef vreinterpretq_f16_p128
#define vreinterpretq_f16_p128 simde_vreinterpretq_f16_p128
#undef vreinterpretq_f16_p16
#define vreinterpretq_f16_p16 simde_vreinterpretq_f16_p16
#undef vreinterpretq_f16_p64
#define vreinterpretq_f16_p64 simde_vreinterpretq_f16_p64
#undef vreinterpretq_f16_p8
#define vreinterpretq_f16_p8 simde_vreinterpretq_f16_p8
#undef vreinterpretq_f16_s16
#define vreinterpretq_f16_s16 simde_vreinterpretq_f16_s16
#undef vreinterpretq_f16_s32
#define vreinterpretq_f16_s32 simde_vreinterpretq_f16_s32
#undef vreinterpretq_f16_s64
#define vreinterpretq_f16_s64 simde_vreinterpretq_f16_s64
#undef vreinterpretq_f16_s8
#define vreinterpretq_f16_s8 simde_vreinterpretq_f16_s8
#undef vreinterpretq_f16_u16
#define vreinterpretq_f16_u16 simde_vreinterpretq_f16_u16
#undef vreinterpretq_f16_u32
#define vreinterpretq_f16_u32 simde_vreinterpretq_f16_u32
#undef vreinterpretq_f16_u64
#define vreinterpretq_f16_u64 simde_vreinterpretq_f16_u64
#undef vreinterpretq_f16_u8
#define vreinterpretq_f16_u8 simde_vreinterpretq_f16_u8
#undef vreinterpretq_f32_f64
#define vreinterpretq_f32_f64 simde_vreinterpretq_f32_f64
#undef vreinterpretq_f32_p16
#define vreinterpretq_f32_p16 simde_vreinterpretq_f32_p16
#undef vreinterpretq_f32_p8
#define vreinterpretq_f32_p8 simde_vreinterpretq_f32_p8
#undef vreinterpretq_f32_s16
#define vreinterpretq_f32_s16 simde_vreinterpretq_f32_s16
#undef vreinterpretq_f32_s32
#define vreinterpretq_f32_s32 simde_vreinterpretq_f32_s32
#undef vreinterpretq_f32_s64
#define vreinterpretq_f32_s64 simde_vreinterpretq_f32_s64
#undef vreinterpretq_f32_s8
#define vreinterpretq_f32_s8 simde_vreinterpretq_f32_s8
#undef vreinterpretq_f32_u16
#define vreinterpretq_f32_u16 simde_vreinterpretq_f32_u16
#undef vreinterpretq_f32_u32
#define vreinterpretq_f32_u32 simde_vreinterpretq_f32_u32
#undef vreinterpretq_f32_u64
#define vreinterpretq_f32_u64 simde_vreinterpretq_f32_u64
#undef vreinterpretq_f32_u8
#define vreinterpretq_f32_u8 simde_vreinterpretq_f32_u8
#undef vreinterpretq_f64_f32
#define vreinterpretq_f64_f32 simde_vreinterpretq_f64_f32
#undef vreinterpretq_f64_p128
#define vreinterpretq_f64_p128 simde_vreinterpretq_f64_p128
#undef vreinterpretq_f64_p16
#define vreinterpretq_f64_p16 simde_vreinterpretq_f64_p16
#undef vreinterpretq_f64_p64
#define vreinterpretq_f64_p64 simde_vreinterpretq_f64_p64
#undef vreinterpretq_f64_p8
#define vreinterpretq_f64_p8 simde_vreinterpretq_f64_p8
#undef vreinterpretq_f64_s16
#define vreinterpretq_f64_s16 simde_vreinterpretq_f64_s16
#undef vreinterpretq_f64_s32
#define vreinterpretq_f64_s32 simde_vreinterpretq_f64_s32
#undef vreinterpretq_f64_s64
#define vreinterpretq_f64_s64 simde_vreinterpretq_f64_s64
#undef vreinterpretq_f64_s8
#define vreinterpretq_f64_s8 simde_vreinterpretq_f64_s8
#undef vreinterpretq_f64_u16
#define vreinterpretq_f64_u16 simde_vreinterpretq_f64_u16
#undef vreinterpretq_f64_u32
#define vreinterpretq_f64_u32 simde_vreinterpretq_f64_u32
#undef vreinterpretq_f64_u64
#define vreinterpretq_f64_u64 simde_vreinterpretq_f64_u64
#undef vreinterpretq_f64_u8
#define vreinterpretq_f64_u8 simde_vreinterpretq_f64_u8
#undef vreinterpretq_p128_bf16
#define vreinterpretq_p128_bf16 simde_vreinterpretq_p128_bf16
#undef vreinterpretq_p128_f16
#define vreinterpretq_p128_f16 simde_vreinterpretq_p128_f16
#undef vreinterpretq_p128_f32
#define vreinterpretq_p128_f32 simde_vreinterpretq_p128_f32
#undef vreinterpretq_p128_f64
#define vreinterpretq_p128_f64 simde_vreinterpretq_p128_f64
#undef vreinterpretq_p128_p16
#define vreinterpretq_p128_p16 simde_vreinterpretq_p128_p16
#undef vreinterpretq_p128_p8
#define vreinterpretq_p128_p8 simde_vreinterpretq_p128_p8
#undef vreinterpretq_p128_s16
#define vreinterpretq_p128_s16 simde_vreinterpretq_p128_s16
#undef vreinterpretq_p128_s32
#define vreinterpretq_p128_s32 simde_vreinterpretq_p128_s32
#undef vreinterpretq_p128_s64
#define vreinterpretq_p128_s64 simde_vreinterpretq_p128_s64
#undef vreinterpretq_p128_s8
#define vreinterpretq_p128_s8 simde_vreinterpretq_p128_s8
#undef vreinterpretq_p128_u16
#define vreinterpretq_p128_u16 simde_vreinterpretq_p128_u16
#undef vreinterpretq_p128_u32
#define vreinterpretq_p128_u32 simde_vreinterpretq_p128_u32
#undef vreinterpretq_p128_u64
#define vreinterpretq_p128_u64 simde_vreinterpretq_p128_u64
#undef vreinterpretq_p128_u8
#define vreinterpretq_p128_u8 simde_vreinterpretq_p128_u8
#undef vreinterpretq_p16_bf16
#define vreinterpretq_p16_bf16 simde_vreinterpretq_p16_bf16
#undef vreinterpretq_p16_f16
#define vreinterpretq_p16_f16 simde_vreinterpretq_p16_f16
#undef vreinterpretq_p16_f32
#define vreinterpretq_p16_f32 simde_vreinterpretq_p16_f32
#undef vreinterpretq_p16_f64
#define vreinterpretq_p16_f64 simde_vreinterpretq_p16_f64
#undef vreinterpretq_p16_p128
#define vreinterpretq_p16_p128 simde_vreinterpretq_p16_p128
#undef vreinterpretq_p16_p64
#define vreinterpretq_p16_p64 simde_vreinterpretq_p16_p64
#undef vreinterpretq_p16_p8
#define vreinterpretq_p16_p8 simde_vreinterpretq_p16_p8
#undef vreinterpretq_p16_s16
#define vreinterpretq_p16_s16 simde_vreinterpretq_p16_s16
#undef vreinterpretq_p16_s32
#define vreinterpretq_p16_s32 simde_vreinterpretq_p16_s32
#undef vreinterpretq_p16_s64
#define vreinterpretq_p16_s64 simde_vreinterpretq_p16_s64
#undef vreinterpretq_p16_s8
#define vreinterpretq_p16_s8 simde_vreinterpretq_p16_s8
#undef vreinterpretq_p16_u16
#define vreinterpretq_p16_u16 simde_vreinterpretq_p16_u16
#undef vreinterpretq_p16_u32
#define vreinterpretq_p16_u32 simde_vreinterpretq_p16_u32
#undef vreinterpretq_p16_u64
#define vreinterpretq_p16_u64 simde_vreinterpretq_p16_u64
#undef vreinterpretq_p16_u8
#define vreinterpretq_p16_u8 simde_vreinterpretq_p16_u8
#undef vreinterpretq_p64_bf16
#define vreinterpretq_p64_bf16 simde_vreinterpretq_p64_bf16
#undef vreinterpretq_p64_f32
#define vreinterpretq_p64_f32 simde_vreinterpretq_p64_f32
#undef vreinterpretq_p64_f64
#define vreinterpretq_p64_f64 simde_vreinterpretq_p64_f64
#undef vreinterpretq_p64_p16
#define vreinterpretq_p64_p16 simde_vreinterpretq_p64_p16
#undef vreinterpretq_p64_p8
#define vreinterpretq_p64_p8 simde_vreinterpretq_p64_p8
#undef vreinterpretq_p64_s16
#define vreinterpretq_p64_s16 simde_vreinterpretq_p64_s16
#undef vreinterpretq_p64_s32
#define vreinterpretq_p64_s32 simde_vreinterpretq_p64_s32
#undef vreinterpretq_p64_s64
#define vreinterpretq_p64_s64 simde_vreinterpretq_p64_s64
#undef vreinterpretq_p64_s8
#define vreinterpretq_p64_s8 simde_vreinterpretq_p64_s8
#undef vreinterpretq_p64_u16
#define vreinterpretq_p64_u16 simde_vreinterpretq_p64_u16
#undef vreinterpretq_p64_u32
#define vreinterpretq_p64_u32 simde_vreinterpretq_p64_u32
#undef vreinterpretq_p64_u64
#define vreinterpretq_p64_u64 simde_vreinterpretq_p64_u64
#undef vreinterpretq_p64_u8
#define vreinterpretq_p64_u8 simde_vreinterpretq_p64_u8
#undef vreinterpretq_p8_bf16
#define vreinterpretq_p8_bf16 simde_vreinterpretq_p8_bf16
#undef vreinterpretq_p8_f16
#define vreinterpretq_p8_f16 simde_vreinterpretq_p8_f16
#undef vreinterpretq_p8_f32
#define vreinterpretq_p8_f32 simde_vreinterpretq_p8_f32
#undef vreinterpretq_p8_f64
#define vreinterpretq_p8_f64 simde_vreinterpretq_p8_f64
#undef vreinterpretq_p8_p128
#define vreinterpretq_p8_p128 simde_vreinterpretq_p8_p128
#undef vreinterpretq_p8_p16
#define vreinterpretq_p8_p16 simde_vreinterpretq_p8_p16
#undef vreinterpretq_p8_p64
#define vreinterpretq_p8_p64 simde_vreinterpretq_p8_p64
#undef vreinterpretq_p8_s16
#define vreinterpretq_p8_s16 simde_vreinterpretq_p8_s16
#undef vreinterpretq_p8_s32
#define vreinterpretq_p8_s32 simde_vreinterpretq_p8_s32
#undef vreinterpretq_p8_s64
#define vreinterpretq_p8_s64 simde_vreinterpretq_p8_s64
#undef vreinterpretq_p8_s8
#define vreinterpretq_p8_s8 simde_vreinterpretq_p8_s8
#undef vreinterpretq_p8_u16
#define vreinterpretq_p8_u16 simde_vreinterpretq_p8_u16
#undef vreinterpretq_p8_u32
#define vreinterpretq_p8_u32 simde_vreinterpretq_p8_u32
#undef vreinterpretq_p8_u64
#define vreinterpretq_p8_u64 simde_vreinterpretq_p8_u64
#undef vreinterpretq_p8_u8
#define vreinterpretq_p8_u8 simde_vreinterpretq_p8_u8
#undef vreinterpretq_s16_bf16
#define vreinterpretq_s16_bf16 simde_vreinterpretq_s16_bf16
#undef vreinterpretq_s16_f16
#define vreinterpretq_s16_f16 simde_vreinterpretq_s16_f16
#undef vreinterpretq_s16_f32
#define vreinterpretq_s16_f32 simde_vreinterpretq_s16_f32
#undef vreinterpretq_s16_f64
#define vreinterpretq_s16_f64 simde_vreinterpretq_s16_f64
#undef vreinterpretq_s16_p128
#define vreinterpretq_s16_p128 simde_vreinterpretq_s16_p128
#undef vreinterpretq_s16_p16
#define vreinterpretq_s16_p16 simde_vreinterpretq_s16_p16
#undef vreinterpretq_s16_p64
#define vreinterpretq_s16_p64 simde_vreinterpretq_s16_p64
#undef vreinterpretq_s16_p8
#define vreinterpretq_s16_p8 simde_vreinterpretq_s16_p8
#undef vreinterpretq_s16_s32
#define vreinterpretq_s16_s32 simde_vreinterpretq_s16_s32
#undef vreinterpretq_s16_s64
#define vreinterpretq_s16_s64 simde_vreinterpretq_s16_s64
#undef vreinterpretq_s16_s8
#define vreinterpretq_s16_s8 simde_vreinterpretq_s16_s8
#undef vreinterpretq_s16_u16
#define vreinterpretq_s16_u16 simde_vreinterpretq_s16_u16
#undef vreinterpretq_s16_u32
#define vreinterpretq_s16_u32 simde_vreinterpretq_s16_u32
#undef vreinterpretq_s16_u64
#define vreinterpretq_s16_u64 simde_vreinterpretq_s16_u64
#undef vreinterpretq_s16_u8
#define vreinterpretq_s16_u8 simde_vreinterpretq_s16_u8
#undef vreinterpretq_s32_bf16
#define vreinterpretq_s32_bf16 simde_vreinterpretq_s32_bf16
#undef vreinterpretq_s32_f16
#define vreinterpretq_s32_f16 simde_vreinterpretq_s32_f16
#undef vreinterpretq_s32_f32
#define vreinterpretq_s32_f32 simde_vreinterpretq_s32_f32
#undef vreinterpretq_s32_f64
#define vreinterpretq_s32_f64 simde_vreinterpretq_s32_f64
#undef vreinterpretq_s32_p128
#define vreinterpretq_s32_p128 simde_vreinterpretq_s32_p128
#undef vreinterpretq_s32_p16
#define vreinterpretq_s32_p16 simde_vreinterpretq_s32_p16
#undef vreinterpretq_s32_p64
#define vreinterpretq_s32_p64 simde_vreinterpretq_s32_p64
#undef vreinterpretq_s32_p8
#define vreinterpretq_s32_p8 simde_vreinterpretq_s32_p8
#undef vreinterpretq_s32_s16
#define vreinterpretq_s32_s16 simde_vreinterpretq_s32_s16
#undef vreinterpretq_s32_s64
#define vreinterpretq_s32_s64 simde_vreinterpretq_s32_s64
#undef vreinterpretq_s32_s8
#define vreinterpretq_s32_s8 simde_vreinterpretq_s32_s8
#undef vreinterpretq_s32_u16
#define vreinterpretq_s32_u16 simde_vreinterpretq_s32_u16
#undef vreinterpretq_s32_u32
#define vreinterpretq_s32_u32 simde_vreinterpretq_s32_u32
#undef vreinterpretq_s32_u64
#define vreinterpretq_s32_u64 simde_vreinterpretq_s32_u64
#undef vreinterpretq_s32_u8
#define vreinterpretq_s32_u8 simde_vreinterpretq_s32_u8
#undef vreinterpretq_s64_bf16
#define vreinterpretq_s64_bf16 simde_vreinterpretq_s64_bf16
#undef vreinterpretq_s64_f16
#define vreinterpretq_s64_f16 simde_vreinterpretq_s64_f16
#undef vreinterpretq_s64_f32
#define vreinterpretq_s64_f32 simde_vreinterpretq_s64_f32
#undef vreinterpretq_s64_f64
#define vreinterpretq_s64_f64 simde_vreinterpretq_s64_f64
#undef vreinterpretq_s64_p128
#define vreinterpretq_s64_p128 simde_vreinterpretq_s64_p128
#undef vreinterpretq_s64_p16
#define vreinterpretq_s64_p16 simde_vreinterpretq_s64_p16
#undef vreinterpretq_s64_p64
#define vreinterpretq_s64_p64 simde_vreinterpretq_s64_p64
#undef vreinterpretq_s64_p8
#define vreinterpretq_s64_p8 simde_vreinterpretq_s64_p8
#undef vreinterpretq_s64_s16
#define vreinterpretq_s64_s16 simde_vreinterpretq_s64_s16
#undef vreinterpretq_s64_s32
#define vreinterpretq_s64_s32 simde_vreinterpretq_s64_s32
#undef vreinterpretq_s64_s8
#define vreinterpretq_s64_s8 simde_vreinterpretq_s64_s8
#undef vreinterpretq_s64_u16
#define vreinterpretq_s64_u16 simde_vreinterpretq_s64_u16
#undef vreinterpretq_s64_u32
#define vreinterpretq_s64_u32 simde_vreinterpretq_s64_u32
#undef vreinterpretq_s64_u64
#define vreinterpretq_s64_u64 simde_vreinterpretq_s64_u64
#undef vreinterpretq_s64_u8
#define vreinterpretq_s64_u8 simde_vreinterpretq_s64_u8
#undef vreinterpretq_s8_bf16
#define vreinterpretq_s8_bf16 simde_vreinterpretq_s8_bf16
#undef vreinterpretq_s8_f16
#define vreinterpretq_s8_f16 simde_vreinterpretq_s8_f16
#undef vreinterpretq_s8_f32
#define vreinterpretq_s8_f32 simde_vreinterpretq_s8_f32
#undef vreinterpretq_s8_f64
#define vreinterpretq_s8_f64 simde_vreinterpretq_s8_f64
#undef vreinterpretq_s8_p128
#define vreinterpretq_s8_p128 simde_vreinterpretq_s8_p128
#undef vreinterpretq_s8_p16
#define vreinterpretq_s8_p16 simde_vreinterpretq_s8_p16
#undef vreinterpretq_s8_p64
#define vreinterpretq_s8_p64 simde_vreinterpretq_s8_p64
#undef vreinterpretq_s8_p8
#define vreinterpretq_s8_p8 simde_vreinterpretq_s8_p8
#undef vreinterpretq_s8_s16
#define vreinterpretq_s8_s16 simde_vreinterpretq_s8_s16
#undef vreinterpretq_s8_s32
#define vreinterpretq_s8_s32 simde_vreinterpretq_s8_s32
#undef vreinterpretq_s8_s64
#define vreinterpretq_s8_s64 simde_vreinterpretq_s8_s64
#undef vreinterpretq_s8_u16
#define vreinterpretq_s8_u16 simde_vreinterpretq_s8_u16
#undef vreinterpretq_s8_u32
#define vreinterpretq_s8_u32 simde_vreinterpretq_s8_u32
#undef vreinterpretq_s8_u64
#define vreinterpretq_s8_u64 simde_vreinterpretq_s8_u64
#undef vreinterpretq_s8_u8
#define vreinterpretq_s8_u8 simde_vreinterpretq_s8_u8
#undef vreinterpretq_u16_bf16
#define vreinterpretq_u16_bf16 simde_vreinterpretq_u16_bf16
#undef vreinterpretq_u16_f16
#define vreinterpretq_u16_f16 simde_vreinterpretq_u16_f16
#undef vreinterpretq_u16_f32
#define vreinterpretq_u16_f32 simde_vreinterpretq_u16_f32
#undef vreinterpretq_u16_f64
#define vreinterpretq_u16_f64 simde_vreinterpretq_u16_f64
#undef vreinterpretq_u16_p128
#define vreinterpretq_u16_p128 simde_vreinterpretq_u16_p128
#undef vreinterpretq_u16_p16
#define vreinterpretq_u16_p16 simde_vreinterpretq_u16_p16
#undef vreinterpretq_u16_p64
#define vreinterpretq_u16_p64 simde_vreinterpretq_u16_p64
#undef vreinterpretq_u16_p8
#define vreinterpretq_u16_p8 simde_vreinterpretq_u16_p8
#undef vreinterpretq_u16_s16
#define vreinterpretq_u16_s16 simde_vreinterpretq_u16_s16
#undef vreinterpretq_u16_s32
#define vreinterpretq_u16_s32 simde_vreinterpretq_u16_s32
#undef vreinterpretq_u16_s64
#define vreinterpretq_u16_s64 simde_vreinterpretq_u16_s64
#undef vreinterpretq_u16_s8
#define vreinterpretq_u16_s8 simde_vreinterpretq_u16_s8
#undef vreinterpretq_u16_u32
#define vreinterpretq_u16_u32 simde_vreinterpretq_u16_u32
#undef vreinterpretq_u16_u64
#define vreinterpretq_u16_u64 simde_vreinterpretq_u16_u64
#undef vreinterpretq_u16_u8
#define vreinterpretq_u16_u8 simde_vreinterpretq_u16_u8
#undef vreinterpretq_u32_bf16
#define vreinterpretq_u32_bf16 simde_vreinterpretq_u32_bf16
#undef vreinterpretq_u32_f16
#define vreinterpretq_u32_f16 simde_vreinterpretq_u32_f16
#undef vreinterpretq_u32_f32
#define vreinterpretq_u32_f32 simde_vreinterpretq_u32_f32
#undef vreinterpretq_u32_f64
#define vreinterpretq_u32_f64 simde_vreinterpretq_u32_f64
#undef vreinterpretq_u32_p128
#define vreinterpretq_u32_p128 simde_vreinterpretq_u32_p128
#undef vreinterpretq_u32_p16
#define vreinterpretq_u32_p16 simde_vreinterpretq_u32_p16
#undef vreinterpretq_u32_p64
#define vreinterpretq_u32_p64 simde_vreinterpretq_u32_p64
#undef vreinterpretq_u32_p8
#define vreinterpretq_u32_p8 simde_vreinterpretq_u32_p8
#undef vreinterpretq_u32_s16
#define vreinterpretq_u32_s16 simde_vreinterpretq_u32_s16
#undef vreinterpretq_u32_s32
#define vreinterpretq_u32_s32 simde_vreinterpretq_u32_s32
#undef vreinterpretq_u32_s64
#define vreinterpretq_u32_s64 simde_vreinterpretq_u32_s64
#undef vreinterpretq_u32_s8
#define vreinterpretq_u32_s8 simde_vreinterpretq_u32_s8
#undef vreinterpretq_u32_u16
#define vreinterpretq_u32_u16 simde_vreinterpretq_u32_u16
#undef vreinterpretq_u32_u64
#define vreinterpretq_u32_u64 simde_vreinterpretq_u32_u64
#undef vreinterpretq_u32_u8
#define vreinterpretq_u32_u8 simde_vreinterpretq_u32_u8
#undef vreinterpretq_u64_bf16
#define vreinterpretq_u64_bf16 simde_vreinterpretq_u64_bf16
#undef vreinterpretq_u64_f32
#define vreinterpretq_u64_f32 simde_vreinterpretq_u64_f32
#undef vreinterpretq_u64_f64
#define vreinterpretq_u64_f64 simde_vreinterpretq_u64_f64
#undef vreinterpretq_u64_p128
#define vreinterpretq_u64_p128 simde_vreinterpretq_u64_p128
#undef vreinterpretq_u64_p16
#define vreinterpretq_u64_p16 simde_vreinterpretq_u64_p16
#undef vreinterpretq_u64_p64
#define vreinterpretq_u64_p64 simde_vreinterpretq_u64_p64
#undef vreinterpretq_u64_p8
#define vreinterpretq_u64_p8 simde_vreinterpretq_u64_p8
#undef vreinterpretq_u64_s16
#define vreinterpretq_u64_s16 simde_vreinterpretq_u64_s16
#undef vreinterpretq_u64_s32
#define vreinterpretq_u64_s32 simde_vreinterpretq_u64_s32
#undef vreinterpretq_u64_s64
#define vreinterpretq_u64_s64 simde_vreinterpretq_u64_s64
#undef vreinterpretq_u64_s8
#define vreinterpretq_u64_s8 simde_vreinterpretq_u64_s8
#undef vreinterpretq_u64_u16
#define vreinterpretq_u64_u16 simde_vreinterpretq_u64_u16
#undef vreinterpretq_u64_u32
#define vreinterpretq_u64_u32 simde_vreinterpretq_u64_u32
#undef vreinterpretq_u64_u8
#define vreinterpretq_u64_u8 simde_vreinterpretq_u64_u8
#undef vreinterpretq_u8_bf16
#define vreinterpretq_u8_bf16 simde_vreinterpretq_u8_bf16
#undef vreinterpretq_u8_f16
#define vreinterpretq_u8_f16 simde_vreinterpretq_u8_f16
#undef vreinterpretq_u8_f32
#define vreinterpretq_u8_f32 simde_vreinterpretq_u8_f32
#undef vreinterpretq_u8_f64
#define vreinterpretq_u8_f64 simde_vreinterpretq_u8_f64
#undef vreinterpretq_u8_p128
#define vreinterpretq_u8_p128 simde_vreinterpretq_u8_p128
#undef vreinterpretq_u8_p16
#define vreinterpretq_u8_p16 simde_vreinterpretq_u8_p16
#undef vreinterpretq_u8_p64
#define vreinterpretq_u8_p64 simde_vreinterpretq_u8_p64
#undef vreinterpretq_u8_p8
#define vreinterpretq_u8_p8 simde_vreinterpretq_u8_p8
#undef vreinterpretq_u8_s16
#define vreinterpretq_u8_s16 simde_vreinterpretq_u8_s16
#undef vreinterpretq_u8_s32
#define vreinterpretq_u8_s32 simde_vreinterpretq_u8_s32
#undef vreinterpretq_u8_s64
#define vreinterpretq_u8_s64 simde_vreinterpretq_u8_s64
#undef vreinterpretq_u8_s8
#define vreinterpretq_u8_s8 simde_vreinterpretq_u8_s8
#undef vreinterpretq_u8_u16
#define vreinterpretq_u8_u16 simde_vreinterpretq_u8_u16
#undef vreinterpretq_u8_u32
#define vreinterpretq_u8_u32 simde_vreinterpretq_u8_u32
#undef vreinterpretq_u8_u64
#define vreinterpretq_u8_u64 simde_vreinterpretq_u8_u64
#undef vrev16_p8
#define vrev16_p8 simde_vrev16_p8
#undef vrev16_s8
#define vrev16_s8 simde_vrev16_s8
#undef vrev16_u8
#define vrev16_u8 simde_vrev16_u8
#undef vrev16q_p8
#define vrev16q_p8 simde_vrev16q_p8
#undef vrev16q_s8
#define vrev16q_s8 simde_vrev16q_s8
#undef vrev16q_u8
#define vrev16q_u8 simde_vrev16q_u8
#undef vrev32_p16
#define vrev32_p16 simde_vrev32_p16
#undef vrev32_p8
#define vrev32_p8 simde_vrev32_p8
#undef vrev32_s16
#define vrev32_s16 simde_vrev32_s16
#undef vrev32_s8
#define vrev32_s8 simde_vrev32_s8
#undef vrev32_u16
#define vrev32_u16 simde_vrev32_u16
#undef vrev32_u8
#define vrev32_u8 simde_vrev32_u8
#undef vrev32q_p16
#define vrev32q_p16 simde_vrev32q_p16
#undef vrev32q_p8
#define vrev32q_p8 simde_vrev32q_p8
#undef vrev32q_s16
#define vrev32q_s16 simde_vrev32q_s16
#undef vrev32q_s8
#define vrev32q_s8 simde_vrev32q_s8
#undef vrev32q_u16
#define vrev32q_u16 simde_vrev32q_u16
#undef vrev32q_u8
#define vrev32q_u8 simde_vrev32q_u8
#undef vrev64_f16
#define vrev64_f16 simde_vrev64_f16
#undef vrev64_f32
#define vrev64_f32 simde_vrev64_f32
#undef vrev64_p16
#define vrev64_p16 simde_vrev64_p16
#undef vrev64_p8
#define vrev64_p8 simde_vrev64_p8
#undef vrev64_s16
#define vrev64_s16 simde_vrev64_s16
#undef vrev64_s32
#define vrev64_s32 simde_vrev64_s32
#undef vrev64_s8
#define vrev64_s8 simde_vrev64_s8
#undef vrev64_u16
#define vrev64_u16 simde_vrev64_u16
#undef vrev64_u32
#define vrev64_u32 simde_vrev64_u32
#undef vrev64_u8
#define vrev64_u8 simde_vrev64_u8
#undef vrev64q_f16
#define vrev64q_f16 simde_vrev64q_f16
#undef vrev64q_f32
#define vrev64q_f32 simde_vrev64q_f32
#undef vrev64q_p16
#define vrev64q_p16 simde_vrev64q_p16
#undef vrev64q_p8
#define vrev64q_p8 simde_vrev64q_p8
#undef vrev64q_s16
#define vrev64q_s16 simde_vrev64q_s16
#undef vrev64q_s32
#define vrev64q_s32 simde_vrev64q_s32
#undef vrev64q_s8
#define vrev64q_s8 simde_vrev64q_s8
#undef vrev64q_u16
#define vrev64q_u16 simde_vrev64q_u16
#undef vrev64q_u32
#define vrev64q_u32 simde_vrev64q_u32
#undef vrev64q_u8
#define vrev64q_u8 simde_vrev64q_u8
#undef vrhadd_s16
#define vrhadd_s16 simde_vrhadd_s16
#undef vrhadd_s32
#define vrhadd_s32 simde_vrhadd_s32
#undef vrhadd_s8
#define vrhadd_s8 simde_vrhadd_s8
#undef vrhadd_u16
#define vrhadd_u16 simde_vrhadd_u16
#undef vrhadd_u32
#define vrhadd_u32 simde_vrhadd_u32
#undef vrhadd_u8
#define vrhadd_u8 simde_vrhadd_u8
#undef vrhaddq_s16
#define vrhaddq_s16 simde_vrhaddq_s16
#undef vrhaddq_s32
#define vrhaddq_s32 simde_vrhaddq_s32
#undef vrhaddq_s8
#define vrhaddq_s8 simde_vrhaddq_s8
#undef vrhaddq_u16
#define vrhaddq_u16 simde_vrhaddq_u16
#undef vrhaddq_u32
#define vrhaddq_u32 simde_vrhaddq_u32
#undef vrhaddq_u8
#define vrhaddq_u8 simde_vrhaddq_u8
#undef vrnd32x_f32
#define vrnd32x_f32 simde_vrnd32x_f32
#undef vrnd32x_f64
#define vrnd32x_f64 simde_vrnd32x_f64
#undef vrnd32xq_f32
#define vrnd32xq_f32 simde_vrnd32xq_f32
#undef vrnd32xq_f64
#define vrnd32xq_f64 simde_vrnd32xq_f64
#undef vrnd32z_f32
#define vrnd32z_f32 simde_vrnd32z_f32
#undef vrnd32z_f64
#define vrnd32z_f64 simde_vrnd32z_f64
#undef vrnd32zq_f32
#define vrnd32zq_f32 simde_vrnd32zq_f32
#undef vrnd32zq_f64
#define vrnd32zq_f64 simde_vrnd32zq_f64
#undef vrnd64x_f32
#define vrnd64x_f32 simde_vrnd64x_f32
#undef vrnd64x_f64
#define vrnd64x_f64 simde_vrnd64x_f64
#undef vrnd64xq_f32
#define vrnd64xq_f32 simde_vrnd64xq_f32
#undef vrnd64xq_f64
#define vrnd64xq_f64 simde_vrnd64xq_f64
#undef vrnd64z_f32
#define vrnd64z_f32 simde_vrnd64z_f32
#undef vrnd64z_f64
#define vrnd64z_f64 simde_vrnd64z_f64
#undef vrnd64zq_f32
#define vrnd64zq_f32 simde_vrnd64zq_f32
#undef vrnd64zq_f64
#define vrnd64zq_f64 simde_vrnd64zq_f64
#undef vrnd_f16
#define vrnd_f16 simde_vrnd_f16
#undef vrnd_f32
#define vrnd_f32 simde_vrnd_f32
#undef vrnd_f64
#define vrnd_f64 simde_vrnd_f64
#undef vrnda_f16
#define vrnda_f16 simde_vrnda_f16
#undef vrnda_f32
#define vrnda_f32 simde_vrnda_f32
#undef vrnda_f64
#define vrnda_f64 simde_vrnda_f64
#undef vrndah_f16
#define vrndah_f16 simde_vrndah_f16
#undef vrndaq_f16
#define vrndaq_f16 simde_vrndaq_f16
#undef vrndaq_f32
#define vrndaq_f32 simde_vrndaq_f32
#undef vrndaq_f64
#define vrndaq_f64 simde_vrndaq_f64
#undef vrndh_f16
#define vrndh_f16 simde_vrndh_f16
#undef vrndi_f16
#define vrndi_f16 simde_vrndi_f16
#undef vrndi_f32
#define vrndi_f32 simde_vrndi_f32
#undef vrndi_f64
#define vrndi_f64 simde_vrndi_f64
#undef vrndih_f16
#define vrndih_f16 simde_vrndih_f16
#undef vrndiq_f16
#define vrndiq_f16 simde_vrndiq_f16
#undef vrndiq_f32
#define vrndiq_f32 simde_vrndiq_f32
#undef vrndiq_f64
#define vrndiq_f64 simde_vrndiq_f64
#undef vrndm_f16
#define vrndm_f16 simde_vrndm_f16
#undef vrndm_f32
#define vrndm_f32 simde_vrndm_f32
#undef vrndm_f64
#define vrndm_f64 simde_vrndm_f64
#undef vrndmh_f16
#define vrndmh_f16 simde_vrndmh_f16
#undef vrndmq_f16
#define vrndmq_f16 simde_vrndmq_f16
#undef vrndmq_f32
#define vrndmq_f32 simde_vrndmq_f32
#undef vrndmq_f64
#define vrndmq_f64 simde_vrndmq_f64
#undef vrndn_f16
#define vrndn_f16 simde_vrndn_f16
#undef vrndn_f32
#define vrndn_f32 simde_vrndn_f32
#undef vrndn_f64
#define vrndn_f64 simde_vrndn_f64
#undef vrndnh_f16
#define vrndnh_f16 simde_vrndnh_f16
#undef vrndnq_f16
#define vrndnq_f16 simde_vrndnq_f16
#undef vrndnq_f32
#define vrndnq_f32 simde_vrndnq_f32
#undef vrndnq_f64
#define vrndnq_f64 simde_vrndnq_f64
#undef vrndns_f32
#define vrndns_f32 simde_vrndns_f32
#undef vrndp_f16
#define vrndp_f16 simde_vrndp_f16
#undef vrndp_f32
#define vrndp_f32 simde_vrndp_f32
#undef vrndp_f64
#define vrndp_f64 simde_vrndp_f64
#undef vrndph_f16
#define vrndph_f16 simde_vrndph_f16
#undef vrndpq_f16
#define vrndpq_f16 simde_vrndpq_f16
#undef vrndpq_f32
#define vrndpq_f32 simde_vrndpq_f32
#undef vrndpq_f64
#define vrndpq_f64 simde_vrndpq_f64
#undef vrndq_f16
#define vrndq_f16 simde_vrndq_f16
#undef vrndq_f32
#define vrndq_f32 simde_vrndq_f32
#undef vrndq_f64
#define vrndq_f64 simde_vrndq_f64
#undef vrndx_f16
#define vrndx_f16 simde_vrndx_f16
#undef vrndx_f32
#define vrndx_f32 simde_vrndx_f32
#undef vrndx_f64
#define vrndx_f64 simde_vrndx_f64
#undef vrndxh_f16
#define vrndxh_f16 simde_vrndxh_f16
#undef vrndxq_f16
#define vrndxq_f16 simde_vrndxq_f16
#undef vrndxq_f32
#define vrndxq_f32 simde_vrndxq_f32
#undef vrndxq_f64
#define vrndxq_f64 simde_vrndxq_f64
#undef vrshl_s16
#define vrshl_s16 simde_vrshl_s16
#undef vrshl_s32
#define vrshl_s32 simde_vrshl_s32
#undef vrshl_s64
#define vrshl_s64 simde_vrshl_s64
#undef vrshl_s8
#define vrshl_s8 simde_vrshl_s8
#undef vrshl_u16
#define vrshl_u16 simde_vrshl_u16
#undef vrshl_u32
#define vrshl_u32 simde_vrshl_u32
#undef vrshl_u64
#define vrshl_u64 simde_vrshl_u64
#undef vrshl_u8
#define vrshl_u8 simde_vrshl_u8
#undef vrshld_s64
#define vrshld_s64 simde_vrshld_s64
#undef vrshld_u64
#define vrshld_u64 simde_vrshld_u64
#undef vrshlq_s16
#define vrshlq_s16 simde_vrshlq_s16
#undef vrshlq_s32
#define vrshlq_s32 simde_vrshlq_s32
#undef vrshlq_s64
#define vrshlq_s64 simde_vrshlq_s64
#undef vrshlq_s8
#define vrshlq_s8 simde_vrshlq_s8
#undef vrshlq_u16
#define vrshlq_u16 simde_vrshlq_u16
#undef vrshlq_u32
#define vrshlq_u32 simde_vrshlq_u32
#undef vrshlq_u64
#define vrshlq_u64 simde_vrshlq_u64
#undef vrshlq_u8
#define vrshlq_u8 simde_vrshlq_u8
#undef vrshr_n_s16
#define vrshr_n_s16 simde_vrshr_n_s16
#undef vrshr_n_s32
#define vrshr_n_s32 simde_vrshr_n_s32
#undef vrshr_n_s64
#define vrshr_n_s64 simde_vrshr_n_s64
#undef vrshr_n_s8
#define vrshr_n_s8 simde_vrshr_n_s8
#undef vrshr_n_u16
#define vrshr_n_u16 simde_vrshr_n_u16
#undef vrshr_n_u32
#define vrshr_n_u32 simde_vrshr_n_u32
#undef vrshr_n_u64
#define vrshr_n_u64 simde_vrshr_n_u64
#undef vrshr_n_u8
#define vrshr_n_u8 simde_vrshr_n_u8
#undef vrshrd_n_s64
#define vrshrd_n_s64 simde_vrshrd_n_s64
#undef vrshrd_n_u64
#define vrshrd_n_u64 simde_vrshrd_n_u64
#undef vrshrn_high_n_s16
#define vrshrn_high_n_s16 simde_vrshrn_high_n_s16
#undef vrshrn_high_n_s32
#define vrshrn_high_n_s32 simde_vrshrn_high_n_s32
#undef vrshrn_high_n_s64
#define vrshrn_high_n_s64 simde_vrshrn_high_n_s64
#undef vrshrn_high_n_u16
#define vrshrn_high_n_u16 simde_vrshrn_high_n_u16
#undef vrshrn_high_n_u32
#define vrshrn_high_n_u32 simde_vrshrn_high_n_u32
#undef vrshrn_high_n_u64
#define vrshrn_high_n_u64 simde_vrshrn_high_n_u64
#undef vrshrn_n_s16
#define vrshrn_n_s16 simde_vrshrn_n_s16
#undef vrshrn_n_s32
#define vrshrn_n_s32 simde_vrshrn_n_s32
#undef vrshrn_n_s64
#define vrshrn_n_s64 simde_vrshrn_n_s64
#undef vrshrn_n_u16
#define vrshrn_n_u16 simde_vrshrn_n_u16
#undef vrshrn_n_u32
#define vrshrn_n_u32 simde_vrshrn_n_u32
#undef vrshrn_n_u64
#define vrshrn_n_u64 simde_vrshrn_n_u64
#undef vrshrq_n_s16
#define vrshrq_n_s16 simde_vrshrq_n_s16
#undef vrshrq_n_s32
#define vrshrq_n_s32 simde_vrshrq_n_s32
#undef vrshrq_n_s64
#define vrshrq_n_s64 simde_vrshrq_n_s64
#undef vrshrq_n_s8
#define vrshrq_n_s8 simde_vrshrq_n_s8
#undef vrshrq_n_u16
#define vrshrq_n_u16 simde_vrshrq_n_u16
#undef vrshrq_n_u32
#define vrshrq_n_u32 simde_vrshrq_n_u32
#undef vrshrq_n_u64
#define vrshrq_n_u64 simde_vrshrq_n_u64
#undef vrshrq_n_u8
#define vrshrq_n_u8 simde_vrshrq_n_u8
#undef vrsqrte_f16
#define vrsqrte_f16 simde_vrsqrte_f16
#undef vrsqrte_f32
#define vrsqrte_f32 simde_vrsqrte_f32
#undef vrsqrte_f64
#define vrsqrte_f64 simde_vrsqrte_f64
#undef vrsqrte_u32
#define vrsqrte_u32 simde_vrsqrte_u32
#undef vrsqrted_f64
#define vrsqrted_f64 simde_vrsqrted_f64
#undef vrsqrteh_f16
#define vrsqrteh_f16 simde_vrsqrteh_f16
#undef vrsqrteq_f16
#define vrsqrteq_f16 simde_vrsqrteq_f16
#undef vrsqrteq_f32
#define vrsqrteq_f32 simde_vrsqrteq_f32
#undef vrsqrteq_f64
#define vrsqrteq_f64 simde_vrsqrteq_f64
#undef vrsqrteq_u32
#define vrsqrteq_u32 simde_vrsqrteq_u32
#undef vrsqrtes_f32
#define vrsqrtes_f32 simde_vrsqrtes_f32
#undef vrsqrts_f16
#define vrsqrts_f16 simde_vrsqrts_f16
#undef vrsqrts_f32
#define vrsqrts_f32 simde_vrsqrts_f32
#undef vrsqrts_f64
#define vrsqrts_f64 simde_vrsqrts_f64
#undef vrsqrtsd_f64
#define vrsqrtsd_f64 simde_vrsqrtsd_f64
#undef vrsqrtsh_f16
#define vrsqrtsh_f16 simde_vrsqrtsh_f16
#undef vrsqrtsq_f16
#define vrsqrtsq_f16 simde_vrsqrtsq_f16
#undef vrsqrtsq_f32
#define vrsqrtsq_f32 simde_vrsqrtsq_f32
#undef vrsqrtsq_f64
#define vrsqrtsq_f64 simde_vrsqrtsq_f64
#undef vrsqrtss_f32
#define vrsqrtss_f32 simde_vrsqrtss_f32
#undef vrsra_n_s16
#define vrsra_n_s16 simde_vrsra_n_s16
#undef vrsra_n_s32
#define vrsra_n_s32 simde_vrsra_n_s32
#undef vrsra_n_s64
#define vrsra_n_s64 simde_vrsra_n_s64
#undef vrsra_n_s8
#define vrsra_n_s8 simde_vrsra_n_s8
#undef vrsra_n_u16
#define vrsra_n_u16 simde_vrsra_n_u16
#undef vrsra_n_u32
#define vrsra_n_u32 simde_vrsra_n_u32
#undef vrsra_n_u64
#define vrsra_n_u64 simde_vrsra_n_u64
#undef vrsra_n_u8
#define vrsra_n_u8 simde_vrsra_n_u8
#undef vrsrad_n_s64
#define vrsrad_n_s64 simde_vrsrad_n_s64
#undef vrsrad_n_u64
#define vrsrad_n_u64 simde_vrsrad_n_u64
#undef vrsraq_n_s16
#define vrsraq_n_s16 simde_vrsraq_n_s16
#undef vrsraq_n_s32
#define vrsraq_n_s32 simde_vrsraq_n_s32
#undef vrsraq_n_s64
#define vrsraq_n_s64 simde_vrsraq_n_s64
#undef vrsraq_n_s8
#define vrsraq_n_s8 simde_vrsraq_n_s8
#undef vrsraq_n_u16
#define vrsraq_n_u16 simde_vrsraq_n_u16
#undef vrsraq_n_u32
#define vrsraq_n_u32 simde_vrsraq_n_u32
#undef vrsraq_n_u64
#define vrsraq_n_u64 simde_vrsraq_n_u64
#undef vrsraq_n_u8
#define vrsraq_n_u8 simde_vrsraq_n_u8
#undef vrsubhn_high_s16
#define vrsubhn_high_s16 simde_vrsubhn_high_s16
#undef vrsubhn_high_s32
#define vrsubhn_high_s32 simde_vrsubhn_high_s32
#undef vrsubhn_high_s64
#define vrsubhn_high_s64 simde_vrsubhn_high_s64
#undef vrsubhn_high_u16
#define vrsubhn_high_u16 simde_vrsubhn_high_u16
#undef vrsubhn_high_u32
#define vrsubhn_high_u32 simde_vrsubhn_high_u32
#undef vrsubhn_high_u64
#define vrsubhn_high_u64 simde_vrsubhn_high_u64
#undef vrsubhn_s16
#define vrsubhn_s16 simde_vrsubhn_s16
#undef vrsubhn_s32
#define vrsubhn_s32 simde_vrsubhn_s32
#undef vrsubhn_s64
#define vrsubhn_s64 simde_vrsubhn_s64
#undef vrsubhn_u16
#define vrsubhn_u16 simde_vrsubhn_u16
#undef vrsubhn_u32
#define vrsubhn_u32 simde_vrsubhn_u32
#undef vrsubhn_u64
#define vrsubhn_u64 simde_vrsubhn_u64
#undef vset_lane_bf16
#define vset_lane_bf16 simde_vset_lane_bf16
#undef vset_lane_f16
#define vset_lane_f16 simde_vset_lane_f16
#undef vset_lane_f32
#define vset_lane_f32 simde_vset_lane_f32
#undef vset_lane_f64
#define vset_lane_f64 simde_vset_lane_f64
#undef vset_lane_p16
#define vset_lane_p16 simde_vset_lane_p16
#undef vset_lane_p64
#define vset_lane_p64 simde_vset_lane_p64
#undef vset_lane_p8
#define vset_lane_p8 simde_vset_lane_p8
#undef vset_lane_s16
#define vset_lane_s16 simde_vset_lane_s16
#undef vset_lane_s32
#define vset_lane_s32 simde_vset_lane_s32
#undef vset_lane_s64
#define vset_lane_s64 simde_vset_lane_s64
#undef vset_lane_s8
#define vset_lane_s8 simde_vset_lane_s8
#undef vset_lane_u16
#define vset_lane_u16 simde_vset_lane_u16
#undef vset_lane_u32
#define vset_lane_u32 simde_vset_lane_u32
#undef vset_lane_u64
#define vset_lane_u64 simde_vset_lane_u64
#undef vset_lane_u8
#define vset_lane_u8 simde_vset_lane_u8
#undef vsetq_lane_bf16
#define vsetq_lane_bf16 simde_vsetq_lane_bf16
#undef vsetq_lane_f16
#define vsetq_lane_f16 simde_vsetq_lane_f16
#undef vsetq_lane_f32
#define vsetq_lane_f32 simde_vsetq_lane_f32
#undef vsetq_lane_f64
#define vsetq_lane_f64 simde_vsetq_lane_f64
#undef vsetq_lane_p16
#define vsetq_lane_p16 simde_vsetq_lane_p16
#undef vsetq_lane_p64
#define vsetq_lane_p64 simde_vsetq_lane_p64
#undef vsetq_lane_p8
#define vsetq_lane_p8 simde_vsetq_lane_p8
#undef vsetq_lane_s16
#define vsetq_lane_s16 simde_vsetq_lane_s16
#undef vsetq_lane_s32
#define vsetq_lane_s32 simde_vsetq_lane_s32
#undef vsetq_lane_s64
#define vsetq_lane_s64 simde_vsetq_lane_s64
#undef vsetq_lane_s8
#define vsetq_lane_s8 simde_vsetq_lane_s8
#undef vsetq_lane_u16
#define vsetq_lane_u16 simde_vsetq_lane_u16
#undef vsetq_lane_u32
#define vsetq_lane_u32 simde_vsetq_lane_u32
#undef vsetq_lane_u64
#define vsetq_lane_u64 simde_vsetq_lane_u64
#undef vsetq_lane_u8
#define vsetq_lane_u8 simde_vsetq_lane_u8
#undef vsha1cq_u32
#define vsha1cq_u32 simde_vsha1cq_u32
#undef vsha1h_u32
#define vsha1h_u32 simde_vsha1h_u32
#undef vsha1mq_u32
#define vsha1mq_u32 simde_vsha1mq_u32
#undef vsha1pq_u32
#define vsha1pq_u32 simde_vsha1pq_u32
#undef vsha1su0q_u32
#define vsha1su0q_u32 simde_vsha1su0q_u32
#undef vsha1su1q_u32
#define vsha1su1q_u32 simde_vsha1su1q_u32
#undef vsha256h2q_u32
#define vsha256h2q_u32 simde_vsha256h2q_u32
#undef vsha256hq_u32
#define vsha256hq_u32 simde_vsha256hq_u32
#undef vsha256su0q_u32
#define vsha256su0q_u32 simde_vsha256su0q_u32
#undef vsha256su1q_u32
#define vsha256su1q_u32 simde_vsha256su1q_u32
#undef vsha512h2q_u64
#define vsha512h2q_u64 simde_vsha512h2q_u64
#undef vsha512hq_u64
#define vsha512hq_u64 simde_vsha512hq_u64
#undef vsha512su0q_u64
#define vsha512su0q_u64 simde_vsha512su0q_u64
#undef vsha512su1q_u64
#define vsha512su1q_u64 simde_vsha512su1q_u64
#undef vshl_n_s16
#define vshl_n_s16 simde_vshl_n_s16
#undef vshl_n_s32
#define vshl_n_s32 simde_vshl_n_s32
#undef vshl_n_s64
#define vshl_n_s64 simde_vshl_n_s64
#undef vshl_n_s8
#define vshl_n_s8 simde_vshl_n_s8
#undef vshl_n_u16
#define vshl_n_u16 simde_vshl_n_u16
#undef vshl_n_u32
#define vshl_n_u32 simde_vshl_n_u32
#undef vshl_n_u64
#define vshl_n_u64 simde_vshl_n_u64
#undef vshl_n_u8
#define vshl_n_u8 simde_vshl_n_u8
#undef vshl_s16
#define vshl_s16 simde_vshl_s16
#undef vshl_s32
#define vshl_s32 simde_vshl_s32
#undef vshl_s64
#define vshl_s64 simde_vshl_s64
#undef vshl_s8
#define vshl_s8 simde_vshl_s8
#undef vshl_u16
#define vshl_u16 simde_vshl_u16
#undef vshl_u32
#define vshl_u32 simde_vshl_u32
#undef vshl_u64
#define vshl_u64 simde_vshl_u64
#undef vshl_u8
#define vshl_u8 simde_vshl_u8
#undef vshld_n_s64
#define vshld_n_s64 simde_vshld_n_s64
#undef vshld_n_u64
#define vshld_n_u64 simde_vshld_n_u64
#undef vshld_s64
#define vshld_s64 simde_vshld_s64
#undef vshld_u64
#define vshld_u64 simde_vshld_u64
#undef vshll_high_n_s16
#define vshll_high_n_s16 simde_vshll_high_n_s16
#undef vshll_high_n_s32
#define vshll_high_n_s32 simde_vshll_high_n_s32
#undef vshll_high_n_s8
#define vshll_high_n_s8 simde_vshll_high_n_s8
#undef vshll_high_n_u16
#define vshll_high_n_u16 simde_vshll_high_n_u16
#undef vshll_high_n_u32
#define vshll_high_n_u32 simde_vshll_high_n_u32
#undef vshll_high_n_u8
#define vshll_high_n_u8 simde_vshll_high_n_u8
#undef vshll_n_s16
#define vshll_n_s16 simde_vshll_n_s16
#undef vshll_n_s32
#define vshll_n_s32 simde_vshll_n_s32
#undef vshll_n_s8
#define vshll_n_s8 simde_vshll_n_s8
#undef vshll_n_u16
#define vshll_n_u16 simde_vshll_n_u16
#undef vshll_n_u32
#define vshll_n_u32 simde_vshll_n_u32
#undef vshll_n_u8
#define vshll_n_u8 simde_vshll_n_u8
#undef vshlq_n_s16
#define vshlq_n_s16 simde_vshlq_n_s16
#undef vshlq_n_s32
#define vshlq_n_s32 simde_vshlq_n_s32
#undef vshlq_n_s64
#define vshlq_n_s64 simde_vshlq_n_s64
#undef vshlq_n_s8
#define vshlq_n_s8 simde_vshlq_n_s8
#undef vshlq_n_u16
#define vshlq_n_u16 simde_vshlq_n_u16
#undef vshlq_n_u32
#define vshlq_n_u32 simde_vshlq_n_u32
#undef vshlq_n_u64
#define vshlq_n_u64 simde_vshlq_n_u64
#undef vshlq_n_u8
#define vshlq_n_u8 simde_vshlq_n_u8
#undef vshlq_s16
#define vshlq_s16 simde_vshlq_s16
#undef vshlq_s32
#define vshlq_s32 simde_vshlq_s32
#undef vshlq_s64
#define vshlq_s64 simde_vshlq_s64
#undef vshlq_s8
#define vshlq_s8 simde_vshlq_s8
#undef vshlq_u16
#define vshlq_u16 simde_vshlq_u16
#undef vshlq_u32
#define vshlq_u32 simde_vshlq_u32
#undef vshlq_u64
#define vshlq_u64 simde_vshlq_u64
#undef vshlq_u8
#define vshlq_u8 simde_vshlq_u8
#undef vshr_n_s16
#define vshr_n_s16 simde_vshr_n_s16
#undef vshr_n_s32
#define vshr_n_s32 simde_vshr_n_s32
#undef vshr_n_s64
#define vshr_n_s64 simde_vshr_n_s64
#undef vshr_n_s8
#define vshr_n_s8 simde_vshr_n_s8
#undef vshr_n_u16
#define vshr_n_u16 simde_vshr_n_u16
#undef vshr_n_u32
#define vshr_n_u32 simde_vshr_n_u32
#undef vshr_n_u64
#define vshr_n_u64 simde_vshr_n_u64
#undef vshr_n_u8
#define vshr_n_u8 simde_vshr_n_u8
#undef vshrd_n_s64
#define vshrd_n_s64 simde_vshrd_n_s64
#undef vshrd_n_u64
#define vshrd_n_u64 simde_vshrd_n_u64
#undef vshrn_high_n_s16
#define vshrn_high_n_s16 simde_vshrn_high_n_s16
#undef vshrn_high_n_s32
#define vshrn_high_n_s32 simde_vshrn_high_n_s32
#undef vshrn_high_n_s64
#define vshrn_high_n_s64 simde_vshrn_high_n_s64
#undef vshrn_high_n_u16
#define vshrn_high_n_u16 simde_vshrn_high_n_u16
#undef vshrn_high_n_u32
#define vshrn_high_n_u32 simde_vshrn_high_n_u32
#undef vshrn_high_n_u64
#define vshrn_high_n_u64 simde_vshrn_high_n_u64
#undef vshrn_n_s16
#define vshrn_n_s16 simde_vshrn_n_s16
#undef vshrn_n_s32
#define vshrn_n_s32 simde_vshrn_n_s32
#undef vshrn_n_s64
#define vshrn_n_s64 simde_vshrn_n_s64
#undef vshrn_n_u16
#define vshrn_n_u16 simde_vshrn_n_u16
#undef vshrn_n_u32
#define vshrn_n_u32 simde_vshrn_n_u32
#undef vshrn_n_u64
#define vshrn_n_u64 simde_vshrn_n_u64
#undef vshrq_n_s16
#define vshrq_n_s16 simde_vshrq_n_s16
#undef vshrq_n_s32
#define vshrq_n_s32 simde_vshrq_n_s32
#undef vshrq_n_s64
#define vshrq_n_s64 simde_vshrq_n_s64
#undef vshrq_n_s8
#define vshrq_n_s8 simde_vshrq_n_s8
#undef vshrq_n_u16
#define vshrq_n_u16 simde_vshrq_n_u16
#undef vshrq_n_u32
#define vshrq_n_u32 simde_vshrq_n_u32
#undef vshrq_n_u64
#define vshrq_n_u64 simde_vshrq_n_u64
#undef vshrq_n_u8
#define vshrq_n_u8 simde_vshrq_n_u8
#undef vsli_n_p16
#define vsli_n_p16 simde_vsli_n_p16
#undef vsli_n_p64
#define vsli_n_p64 simde_vsli_n_p64
#undef vsli_n_p8
#define vsli_n_p8 simde_vsli_n_p8
#undef vsli_n_s16
#define vsli_n_s16 simde_vsli_n_s16
#undef vsli_n_s32
#define vsli_n_s32 simde_vsli_n_s32
#undef vsli_n_s64
#define vsli_n_s64 simde_vsli_n_s64
#undef vsli_n_s8
#define vsli_n_s8 simde_vsli_n_s8
#undef vsli_n_u16
#define vsli_n_u16 simde_vsli_n_u16
#undef vsli_n_u32
#define vsli_n_u32 simde_vsli_n_u32
#undef vsli_n_u64
#define vsli_n_u64 simde_vsli_n_u64
#undef vsli_n_u8
#define vsli_n_u8 simde_vsli_n_u8
#undef vslid_n_s64
#define vslid_n_s64 simde_vslid_n_s64
#undef vslid_n_u64
#define vslid_n_u64 simde_vslid_n_u64
#undef vsliq_n_p16
#define vsliq_n_p16 simde_vsliq_n_p16
#undef vsliq_n_p64
#define vsliq_n_p64 simde_vsliq_n_p64
#undef vsliq_n_p8
#define vsliq_n_p8 simde_vsliq_n_p8
#undef vsliq_n_s16
#define vsliq_n_s16 simde_vsliq_n_s16
#undef vsliq_n_s32
#define vsliq_n_s32 simde_vsliq_n_s32
#undef vsliq_n_s64
#define vsliq_n_s64 simde_vsliq_n_s64
#undef vsliq_n_s8
#define vsliq_n_s8 simde_vsliq_n_s8
#undef vsliq_n_u16
#define vsliq_n_u16 simde_vsliq_n_u16
#undef vsliq_n_u32
#define vsliq_n_u32 simde_vsliq_n_u32
#undef vsliq_n_u64
#define vsliq_n_u64 simde_vsliq_n_u64
#undef vsliq_n_u8
#define vsliq_n_u8 simde_vsliq_n_u8
#undef vsm3partw1q_u32
#define vsm3partw1q_u32 simde_vsm3partw1q_u32
#undef vsm3partw2q_u32
#define vsm3partw2q_u32 simde_vsm3partw2q_u32
#undef vsm3ss1q_u32
#define vsm3ss1q_u32 simde_vsm3ss1q_u32
#undef vsm3tt1aq_u32
#define vsm3tt1aq_u32 simde_vsm3tt1aq_u32
#undef vsm3tt1bq_u32
#define vsm3tt1bq_u32 simde_vsm3tt1bq_u32
#undef vsm3tt2aq_u32
#define vsm3tt2aq_u32 simde_vsm3tt2aq_u32
#undef vsm3tt2bq_u32
#define vsm3tt2bq_u32 simde_vsm3tt2bq_u32
#undef vsm4ekeyq_u32
#define vsm4ekeyq_u32 simde_vsm4ekeyq_u32
#undef vsm4eq_u32
#define vsm4eq_u32 simde_vsm4eq_u32
#undef vsqadd_u16
#define vsqadd_u16 simde_vsqadd_u16
#undef vsqadd_u32
#define vsqadd_u32 simde_vsqadd_u32
#undef vsqadd_u64
#define vsqadd_u64 simde_vsqadd_u64
#undef vsqadd_u8
#define vsqadd_u8 simde_vsqadd_u8
#undef vsqaddb_u8
#define vsqaddb_u8 simde_vsqaddb_u8
#undef vsqaddd_u64
#define vsqaddd_u64 simde_vsqaddd_u64
#undef vsqaddh_u16
#define vsqaddh_u16 simde_vsqaddh_u16
#undef vsqaddq_u16
#define vsqaddq_u16 simde_vsqaddq_u16
#undef vsqaddq_u32
#define vsqaddq_u32 simde_vsqaddq_u32
#undef vsqaddq_u64
#define vsqaddq_u64 simde_vsqaddq_u64
#undef vsqaddq_u8
#define vsqaddq_u8 simde_vsqaddq_u8
#undef vsqadds_u32
#define vsqadds_u32 simde_vsqadds_u32
#undef vsqrt_f16
#define vsqrt_f16 simde_vsqrt_f16
#undef vsqrt_f32
#define vsqrt_f32 simde_vsqrt_f32
#undef vsqrt_f64
#define vsqrt_f64 simde_vsqrt_f64
#undef vsqrth_f16
#define vsqrth_f16 simde_vsqrth_f16
#undef vsqrtq_f16
#define vsqrtq_f16 simde_vsqrtq_f16
#undef vsqrtq_f32
#define vsqrtq_f32 simde_vsqrtq_f32
#undef vsqrtq_f64
#define vsqrtq_f64 simde_vsqrtq_f64
#undef vsra_n_s16
#define vsra_n_s16 simde_vsra_n_s16
#undef vsra_n_s32
#define vsra_n_s32 simde_vsra_n_s32
#undef vsra_n_s64
#define vsra_n_s64 simde_vsra_n_s64
#undef vsra_n_s8
#define vsra_n_s8 simde_vsra_n_s8
#undef vsra_n_u16
#define vsra_n_u16 simde_vsra_n_u16
#undef vsra_n_u32
#define vsra_n_u32 simde_vsra_n_u32
#undef vsra_n_u64
#define vsra_n_u64 simde_vsra_n_u64
#undef vsra_n_u8
#define vsra_n_u8 simde_vsra_n_u8
#undef vsrad_n_s64
#define vsrad_n_s64 simde_vsrad_n_s64
#undef vsrad_n_u64
#define vsrad_n_u64 simde_vsrad_n_u64
#undef vsraq_n_s16
#define vsraq_n_s16 simde_vsraq_n_s16
#undef vsraq_n_s32
#define vsraq_n_s32 simde_vsraq_n_s32
#undef vsraq_n_s64
#define vsraq_n_s64 simde_vsraq_n_s64
#undef vsraq_n_s8
#define vsraq_n_s8 simde_vsraq_n_s8
#undef vsraq_n_u16
#define vsraq_n_u16 simde_vsraq_n_u16
#undef vsraq_n_u32
#define vsraq_n_u32 simde_vsraq_n_u32
#undef vsraq_n_u64
#define vsraq_n_u64 simde_vsraq_n_u64
#undef vsraq_n_u8
#define vsraq_n_u8 simde_vsraq_n_u8
#undef vsri_n_p16
#define vsri_n_p16 simde_vsri_n_p16
#undef vsri_n_p64
#define vsri_n_p64 simde_vsri_n_p64
#undef vsri_n_p8
#define vsri_n_p8 simde_vsri_n_p8
#undef vsri_n_s16
#define vsri_n_s16 simde_vsri_n_s16
#undef vsri_n_s32
#define vsri_n_s32 simde_vsri_n_s32
#undef vsri_n_s64
#define vsri_n_s64 simde_vsri_n_s64
#undef vsri_n_s8
#define vsri_n_s8 simde_vsri_n_s8
#undef vsri_n_u16
#define vsri_n_u16 simde_vsri_n_u16
#undef vsri_n_u32
#define vsri_n_u32 simde_vsri_n_u32
#undef vsri_n_u64
#define vsri_n_u64 simde_vsri_n_u64
#undef vsri_n_u8
#define vsri_n_u8 simde_vsri_n_u8
#undef vsrid_n_s64
#define vsrid_n_s64 simde_vsrid_n_s64
#undef vsrid_n_u64
#define vsrid_n_u64 simde_vsrid_n_u64
#undef vsriq_n_p16
#define vsriq_n_p16 simde_vsriq_n_p16
#undef vsriq_n_p64
#define vsriq_n_p64 simde_vsriq_n_p64
#undef vsriq_n_p8
#define vsriq_n_p8 simde_vsriq_n_p8
#undef vsriq_n_s16
#define vsriq_n_s16 simde_vsriq_n_s16
#undef vsriq_n_s32
#define vsriq_n_s32 simde_vsriq_n_s32
#undef vsriq_n_s64
#define vsriq_n_s64 simde_vsriq_n_s64
#undef vsriq_n_s8
#define vsriq_n_s8 simde_vsriq_n_s8
#undef vsriq_n_u16
#define vsriq_n_u16 simde_vsriq_n_u16
#undef vsriq_n_u32
#define vsriq_n_u32 simde_vsriq_n_u32
#undef vsriq_n_u64
#define vsriq_n_u64 simde_vsriq_n_u64
#undef vsriq_n_u8
#define vsriq_n_u8 simde_vsriq_n_u8
#undef vst1_bf16
#define vst1_bf16 simde_vst1_bf16
#undef vst1_bf16_x2
#define vst1_bf16_x2 simde_vst1_bf16_x2
#undef vst1_bf16_x3
#define vst1_bf16_x3 simde_vst1_bf16_x3
#undef vst1_bf16_x4
#define vst1_bf16_x4 simde_vst1_bf16_x4
#undef vst1_f16
#define vst1_f16 simde_vst1_f16
#undef vst1_f16_x2
#define vst1_f16_x2 simde_vst1_f16_x2
#undef vst1_f16_x3
#define vst1_f16_x3 simde_vst1_f16_x3
#undef vst1_f16_x4
#define vst1_f16_x4 simde_vst1_f16_x4
#undef vst1_f32
#define vst1_f32 simde_vst1_f32
#undef vst1_f32_x2
#define vst1_f32_x2 simde_vst1_f32_x2
#undef vst1_f32_x3
#define vst1_f32_x3 simde_vst1_f32_x3
#undef vst1_f32_x4
#define vst1_f32_x4 simde_vst1_f32_x4
#undef vst1_f64
#define vst1_f64 simde_vst1_f64
#undef vst1_f64_x2
#define vst1_f64_x2 simde_vst1_f64_x2
#undef vst1_f64_x3
#define vst1_f64_x3 simde_vst1_f64_x3
#undef vst1_f64_x4
#define vst1_f64_x4 simde_vst1_f64_x4
#undef vst1_lane_bf16
#define vst1_lane_bf16 simde_vst1_lane_bf16
#undef vst1_lane_f16
#define vst1_lane_f16 simde_vst1_lane_f16
#undef vst1_lane_f32
#define vst1_lane_f32 simde_vst1_lane_f32
#undef vst1_lane_f64
#define vst1_lane_f64 simde_vst1_lane_f64
#undef vst1_lane_p16
#define vst1_lane_p16 simde_vst1_lane_p16
#undef vst1_lane_p64
#define vst1_lane_p64 simde_vst1_lane_p64
#undef vst1_lane_p8
#define vst1_lane_p8 simde_vst1_lane_p8
#undef vst1_lane_s16
#define vst1_lane_s16 simde_vst1_lane_s16
#undef vst1_lane_s32
#define vst1_lane_s32 simde_vst1_lane_s32
#undef vst1_lane_s64
#define vst1_lane_s64 simde_vst1_lane_s64
#undef vst1_lane_s8
#define vst1_lane_s8 simde_vst1_lane_s8
#undef vst1_lane_u16
#define vst1_lane_u16 simde_vst1_lane_u16
#undef vst1_lane_u32
#define vst1_lane_u32 simde_vst1_lane_u32
#undef vst1_lane_u64
#define vst1_lane_u64 simde_vst1_lane_u64
#undef vst1_lane_u8
#define vst1_lane_u8 simde_vst1_lane_u8
#undef vst1_p16
#define vst1_p16 simde_vst1_p16
#undef vst1_p16_x2
#define vst1_p16_x2 simde_vst1_p16_x2
#undef vst1_p16_x3
#define vst1_p16_x3 simde_vst1_p16_x3
#undef vst1_p16_x4
#define vst1_p16_x4 simde_vst1_p16_x4
#undef vst1_p64
#define vst1_p64 simde_vst1_p64
#undef vst1_p64_x2
#define vst1_p64_x2 simde_vst1_p64_x2
#undef vst1_p64_x3
#define vst1_p64_x3 simde_vst1_p64_x3
#undef vst1_p64_x4
#define vst1_p64_x4 simde_vst1_p64_x4
#undef vst1_p8
#define vst1_p8 simde_vst1_p8
#undef vst1_p8_x2
#define vst1_p8_x2 simde_vst1_p8_x2
#undef vst1_p8_x3
#define vst1_p8_x3 simde_vst1_p8_x3
#undef vst1_p8_x4
#define vst1_p8_x4 simde_vst1_p8_x4
#undef vst1_s16
#define vst1_s16 simde_vst1_s16
#undef vst1_s16_x2
#define vst1_s16_x2 simde_vst1_s16_x2
#undef vst1_s16_x3
#define vst1_s16_x3 simde_vst1_s16_x3
#undef vst1_s16_x4
#define vst1_s16_x4 simde_vst1_s16_x4
#undef vst1_s32
#define vst1_s32 simde_vst1_s32
#undef vst1_s32_x2
#define vst1_s32_x2 simde_vst1_s32_x2
#undef vst1_s32_x3
#define vst1_s32_x3 simde_vst1_s32_x3
#undef vst1_s32_x4
#define vst1_s32_x4 simde_vst1_s32_x4
#undef vst1_s64
#define vst1_s64 simde_vst1_s64
#undef vst1_s64_x2
#define vst1_s64_x2 simde_vst1_s64_x2
#undef vst1_s64_x3
#define vst1_s64_x3 simde_vst1_s64_x3
#undef vst1_s64_x4
#define vst1_s64_x4 simde_vst1_s64_x4
#undef vst1_s8
#define vst1_s8 simde_vst1_s8
#undef vst1_s8_x2
#define vst1_s8_x2 simde_vst1_s8_x2
#undef vst1_s8_x3
#define vst1_s8_x3 simde_vst1_s8_x3
#undef vst1_s8_x4
#define vst1_s8_x4 simde_vst1_s8_x4
#undef vst1_u16
#define vst1_u16 simde_vst1_u16
#undef vst1_u16_x2
#define vst1_u16_x2 simde_vst1_u16_x2
#undef vst1_u16_x3
#define vst1_u16_x3 simde_vst1_u16_x3
#undef vst1_u16_x4
#define vst1_u16_x4 simde_vst1_u16_x4
#undef vst1_u32
#define vst1_u32 simde_vst1_u32
#undef vst1_u32_x2
#define vst1_u32_x2 simde_vst1_u32_x2
#undef vst1_u32_x3
#define vst1_u32_x3 simde_vst1_u32_x3
#undef vst1_u32_x4
#define vst1_u32_x4 simde_vst1_u32_x4
#undef vst1_u64
#define vst1_u64 simde_vst1_u64
#undef vst1_u64_x2
#define vst1_u64_x2 simde_vst1_u64_x2
#undef vst1_u64_x3
#define vst1_u64_x3 simde_vst1_u64_x3
#undef vst1_u64_x4
#define vst1_u64_x4 simde_vst1_u64_x4
#undef vst1_u8
#define vst1_u8 simde_vst1_u8
#undef vst1_u8_x2
#define vst1_u8_x2 simde_vst1_u8_x2
#undef vst1_u8_x3
#define vst1_u8_x3 simde_vst1_u8_x3
#undef vst1_u8_x4
#define vst1_u8_x4 simde_vst1_u8_x4
#undef vst1q_bf16
#define vst1q_bf16 simde_vst1q_bf16
#undef vst1q_bf16_x2
#define vst1q_bf16_x2 simde_vst1q_bf16_x2
#undef vst1q_bf16_x3
#define vst1q_bf16_x3 simde_vst1q_bf16_x3
#undef vst1q_bf16_x4
#define vst1q_bf16_x4 simde_vst1q_bf16_x4
#undef vst1q_f16
#define vst1q_f16 simde_vst1q_f16
#undef vst1q_f16_x2
#define vst1q_f16_x2 simde_vst1q_f16_x2
#undef vst1q_f16_x3
#define vst1q_f16_x3 simde_vst1q_f16_x3
#undef vst1q_f16_x4
#define vst1q_f16_x4 simde_vst1q_f16_x4
#undef vst1q_f32
#define vst1q_f32 simde_vst1q_f32
#undef vst1q_f32_x2
#define vst1q_f32_x2 simde_vst1q_f32_x2
#undef vst1q_f32_x3
#define vst1q_f32_x3 simde_vst1q_f32_x3
#undef vst1q_f32_x4
#define vst1q_f32_x4 simde_vst1q_f32_x4
#undef vst1q_f64
#define vst1q_f64 simde_vst1q_f64
#undef vst1q_f64_x2
#define vst1q_f64_x2 simde_vst1q_f64_x2
#undef vst1q_f64_x3
#define vst1q_f64_x3 simde_vst1q_f64_x3
#undef vst1q_f64_x4
#define vst1q_f64_x4 simde_vst1q_f64_x4
#undef vst1q_lane_bf16
#define vst1q_lane_bf16 simde_vst1q_lane_bf16
#undef vst1q_lane_f16
#define vst1q_lane_f16 simde_vst1q_lane_f16
#undef vst1q_lane_f32
#define vst1q_lane_f32 simde_vst1q_lane_f32
#undef vst1q_lane_f64
#define vst1q_lane_f64 simde_vst1q_lane_f64
#undef vst1q_lane_p16
#define vst1q_lane_p16 simde_vst1q_lane_p16
#undef vst1q_lane_p64
#define vst1q_lane_p64 simde_vst1q_lane_p64
#undef vst1q_lane_p8
#define vst1q_lane_p8 simde_vst1q_lane_p8
#undef vst1q_lane_s16
#define vst1q_lane_s16 simde_vst1q_lane_s16
#undef vst1q_lane_s32
#define vst1q_lane_s32 simde_vst1q_lane_s32
#undef vst1q_lane_s64
#define vst1q_lane_s64 simde_vst1q_lane_s64
#undef vst1q_lane_s8
#define vst1q_lane_s8 simde_vst1q_lane_s8
#undef vst1q_lane_u16
#define vst1q_lane_u16 simde_vst1q_lane_u16
#undef vst1q_lane_u32
#define vst1q_lane_u32 simde_vst1q_lane_u32
#undef vst1q_lane_u64
#define vst1q_lane_u64 simde_vst1q_lane_u64
#undef vst1q_lane_u8
#define vst1q_lane_u8 simde_vst1q_lane_u8
#undef vst1q_p16
#define vst1q_p16 simde_vst1q_p16
#undef vst1q_p16_x2
#define vst1q_p16_x2 simde_vst1q_p16_x2
#undef vst1q_p16_x3
#define vst1q_p16_x3 simde_vst1q_p16_x3
#undef vst1q_p16_x4
#define vst1q_p16_x4 simde_vst1q_p16_x4
#undef vst1q_p64
#define vst1q_p64 simde_vst1q_p64
#undef vst1q_p64_x2
#define vst1q_p64_x2 simde_vst1q_p64_x2
#undef vst1q_p64_x3
#define vst1q_p64_x3 simde_vst1q_p64_x3
#undef vst1q_p64_x4
#define vst1q_p64_x4 simde_vst1q_p64_x4
#undef vst1q_p8
#define vst1q_p8 simde_vst1q_p8
#undef vst1q_p8_x2
#define vst1q_p8_x2 simde_vst1q_p8_x2
#undef vst1q_p8_x3
#define vst1q_p8_x3 simde_vst1q_p8_x3
#undef vst1q_p8_x4
#define vst1q_p8_x4 simde_vst1q_p8_x4
#undef vst1q_s16
#define vst1q_s16 simde_vst1q_s16
#undef vst1q_s16_x2
#define vst1q_s16_x2 simde_vst1q_s16_x2
#undef vst1q_s16_x3
#define vst1q_s16_x3 simde_vst1q_s16_x3
#undef vst1q_s16_x4
#define vst1q_s16_x4 simde_vst1q_s16_x4
#undef vst1q_s32
#define vst1q_s32 simde_vst1q_s32
#undef vst1q_s32_x2
#define vst1q_s32_x2 simde_vst1q_s32_x2
#undef vst1q_s32_x3
#define vst1q_s32_x3 simde_vst1q_s32_x3
#undef vst1q_s32_x4
#define vst1q_s32_x4 simde_vst1q_s32_x4
#undef vst1q_s64
#define vst1q_s64 simde_vst1q_s64
#undef vst1q_s64_x2
#define vst1q_s64_x2 simde_vst1q_s64_x2
#undef vst1q_s64_x3
#define vst1q_s64_x3 simde_vst1q_s64_x3
#undef vst1q_s64_x4
#define vst1q_s64_x4 simde_vst1q_s64_x4
#undef vst1q_s8
#define vst1q_s8 simde_vst1q_s8
#undef vst1q_s8_x2
#define vst1q_s8_x2 simde_vst1q_s8_x2
#undef vst1q_s8_x3
#define vst1q_s8_x3 simde_vst1q_s8_x3
#undef vst1q_s8_x4
#define vst1q_s8_x4 simde_vst1q_s8_x4
#undef vst1q_u16
#define vst1q_u16 simde_vst1q_u16
#undef vst1q_u16_x2
#define vst1q_u16_x2 simde_vst1q_u16_x2
#undef vst1q_u16_x3
#define vst1q_u16_x3 simde_vst1q_u16_x3
#undef vst1q_u16_x4
#define vst1q_u16_x4 simde_vst1q_u16_x4
#undef vst1q_u32
#define vst1q_u32 simde_vst1q_u32
#undef vst1q_u32_x2
#define vst1q_u32_x2 simde_vst1q_u32_x2
#undef vst1q_u32_x3
#define vst1q_u32_x3 simde_vst1q_u32_x3
#undef vst1q_u32_x4
#define vst1q_u32_x4 simde_vst1q_u32_x4
#undef vst1q_u64
#define vst1q_u64 simde_vst1q_u64
#undef vst1q_u64_x2
#define vst1q_u64_x2 simde_vst1q_u64_x2
#undef vst1q_u64_x3
#define vst1q_u64_x3 simde_vst1q_u64_x3
#undef vst1q_u64_x4
#define vst1q_u64_x4 simde_vst1q_u64_x4
#undef vst1q_u8
#define vst1q_u8 simde_vst1q_u8
#undef vst1q_u8_x2
#define vst1q_u8_x2 simde_vst1q_u8_x2
#undef vst1q_u8_x3
#define vst1q_u8_x3 simde_vst1q_u8_x3
#undef vst1q_u8_x4
#define vst1q_u8_x4 simde_vst1q_u8_x4
#undef vst2_bf16
#define vst2_bf16 simde_vst2_bf16
#undef vst2_f16
#define vst2_f16 simde_vst2_f16
#undef vst2_f32
#define vst2_f32 simde_vst2_f32
#undef vst2_f64
#define vst2_f64 simde_vst2_f64
#undef vst2_lane_bf16
#define vst2_lane_bf16 simde_vst2_lane_bf16
#undef vst2_lane_f16
#define vst2_lane_f16 simde_vst2_lane_f16
#undef vst2_lane_f32
#define vst2_lane_f32 simde_vst2_lane_f32
#undef vst2_lane_f64
#define vst2_lane_f64 simde_vst2_lane_f64
#undef vst2_lane_p16
#define vst2_lane_p16 simde_vst2_lane_p16
#undef vst2_lane_p64
#define vst2_lane_p64 simde_vst2_lane_p64
#undef vst2_lane_p8
#define vst2_lane_p8 simde_vst2_lane_p8
#undef vst2_lane_s16
#define vst2_lane_s16 simde_vst2_lane_s16
#undef vst2_lane_s32
#define vst2_lane_s32 simde_vst2_lane_s32
#undef vst2_lane_s64
#define vst2_lane_s64 simde_vst2_lane_s64
#undef vst2_lane_s8
#define vst2_lane_s8 simde_vst2_lane_s8
#undef vst2_lane_u16
#define vst2_lane_u16 simde_vst2_lane_u16
#undef vst2_lane_u32
#define vst2_lane_u32 simde_vst2_lane_u32
#undef vst2_lane_u64
#define vst2_lane_u64 simde_vst2_lane_u64
#undef vst2_lane_u8
#define vst2_lane_u8 simde_vst2_lane_u8
#undef vst2_p16
#define vst2_p16 simde_vst2_p16
#undef vst2_p64
#define vst2_p64 simde_vst2_p64
#undef vst2_p8
#define vst2_p8 simde_vst2_p8
#undef vst2_s16
#define vst2_s16 simde_vst2_s16
#undef vst2_s32
#define vst2_s32 simde_vst2_s32
#undef vst2_s64
#define vst2_s64 simde_vst2_s64
#undef vst2_s8
#define vst2_s8 simde_vst2_s8
#undef vst2_u16
#define vst2_u16 simde_vst2_u16
#undef vst2_u32
#define vst2_u32 simde_vst2_u32
#undef vst2_u64
#define vst2_u64 simde_vst2_u64
#undef vst2_u8
#define vst2_u8 simde_vst2_u8
#undef vst2q_bf16
#define vst2q_bf16 simde_vst2q_bf16
#undef vst2q_f16
#define vst2q_f16 simde_vst2q_f16
#undef vst2q_f32
#define vst2q_f32 simde_vst2q_f32
#undef vst2q_f64
#define vst2q_f64 simde_vst2q_f64
#undef vst2q_lane_bf16
#define vst2q_lane_bf16 simde_vst2q_lane_bf16
#undef vst2q_lane_f16
#define vst2q_lane_f16 simde_vst2q_lane_f16
#undef vst2q_lane_f32
#define vst2q_lane_f32 simde_vst2q_lane_f32
#undef vst2q_lane_f64
#define vst2q_lane_f64 simde_vst2q_lane_f64
#undef vst2q_lane_p16
#define vst2q_lane_p16 simde_vst2q_lane_p16
#undef vst2q_lane_p64
#define vst2q_lane_p64 simde_vst2q_lane_p64
#undef vst2q_lane_p8
#define vst2q_lane_p8 simde_vst2q_lane_p8
#undef vst2q_lane_s16
#define vst2q_lane_s16 simde_vst2q_lane_s16
#undef vst2q_lane_s32
#define vst2q_lane_s32 simde_vst2q_lane_s32
#undef vst2q_lane_s64
#define vst2q_lane_s64 simde_vst2q_lane_s64
#undef vst2q_lane_s8
#define vst2q_lane_s8 simde_vst2q_lane_s8
#undef vst2q_lane_u16
#define vst2q_lane_u16 simde_vst2q_lane_u16
#undef vst2q_lane_u32
#define vst2q_lane_u32 simde_vst2q_lane_u32
#undef vst2q_lane_u64
#define vst2q_lane_u64 simde_vst2q_lane_u64
#undef vst2q_lane_u8
#define vst2q_lane_u8 simde_vst2q_lane_u8
#undef vst2q_p16
#define vst2q_p16 simde_vst2q_p16
#undef vst2q_p64
#define vst2q_p64 simde_vst2q_p64
#undef vst2q_p8
#define vst2q_p8 simde_vst2q_p8
#undef vst2q_s16
#define vst2q_s16 simde_vst2q_s16
#undef vst2q_s32
#define vst2q_s32 simde_vst2q_s32
#undef vst2q_s64
#define vst2q_s64 simde_vst2q_s64
#undef vst2q_s8
#define vst2q_s8 simde_vst2q_s8
#undef vst2q_u16
#define vst2q_u16 simde_vst2q_u16
#undef vst2q_u32
#define vst2q_u32 simde_vst2q_u32
#undef vst2q_u64
#define vst2q_u64 simde_vst2q_u64
#undef vst2q_u8
#define vst2q_u8 simde_vst2q_u8
#undef vst3_bf16
#define vst3_bf16 simde_vst3_bf16
#undef vst3_f16
#define vst3_f16 simde_vst3_f16
#undef vst3_f32
#define vst3_f32 simde_vst3_f32
#undef vst3_f64
#define vst3_f64 simde_vst3_f64
#undef vst3_lane_bf16
#define vst3_lane_bf16 simde_vst3_lane_bf16
#undef vst3_lane_f16
#define vst3_lane_f16 simde_vst3_lane_f16
#undef vst3_lane_f32
#define vst3_lane_f32 simde_vst3_lane_f32
#undef vst3_lane_f64
#define vst3_lane_f64 simde_vst3_lane_f64
#undef vst3_lane_p16
#define vst3_lane_p16 simde_vst3_lane_p16
#undef vst3_lane_p64
#define vst3_lane_p64 simde_vst3_lane_p64
#undef vst3_lane_p8
#define vst3_lane_p8 simde_vst3_lane_p8
#undef vst3_lane_s16
#define vst3_lane_s16 simde_vst3_lane_s16
#undef vst3_lane_s32
#define vst3_lane_s32 simde_vst3_lane_s32
#undef vst3_lane_s64
#define vst3_lane_s64 simde_vst3_lane_s64
#undef vst3_lane_s8
#define vst3_lane_s8 simde_vst3_lane_s8
#undef vst3_lane_u16
#define vst3_lane_u16 simde_vst3_lane_u16
#undef vst3_lane_u32
#define vst3_lane_u32 simde_vst3_lane_u32
#undef vst3_lane_u64
#define vst3_lane_u64 simde_vst3_lane_u64
#undef vst3_lane_u8
#define vst3_lane_u8 simde_vst3_lane_u8
#undef vst3_p16
#define vst3_p16 simde_vst3_p16
#undef vst3_p64
#define vst3_p64 simde_vst3_p64
#undef vst3_p8
#define vst3_p8 simde_vst3_p8
#undef vst3_s16
#define vst3_s16 simde_vst3_s16
#undef vst3_s32
#define vst3_s32 simde_vst3_s32
#undef vst3_s64
#define vst3_s64 simde_vst3_s64
#undef vst3_s8
#define vst3_s8 simde_vst3_s8
#undef vst3_u16
#define vst3_u16 simde_vst3_u16
#undef vst3_u32
#define vst3_u32 simde_vst3_u32
#undef vst3_u64
#define vst3_u64 simde_vst3_u64
#undef vst3_u8
#define vst3_u8 simde_vst3_u8
#undef vst3q_bf16
#define vst3q_bf16 simde_vst3q_bf16
#undef vst3q_f16
#define vst3q_f16 simde_vst3q_f16
#undef vst3q_f32
#define vst3q_f32 simde_vst3q_f32
#undef vst3q_f64
#define vst3q_f64 simde_vst3q_f64
#undef vst3q_lane_bf16
#define vst3q_lane_bf16 simde_vst3q_lane_bf16
#undef vst3q_lane_f16
#define vst3q_lane_f16 simde_vst3q_lane_f16
#undef vst3q_lane_f32
#define vst3q_lane_f32 simde_vst3q_lane_f32
#undef vst3q_lane_f64
#define vst3q_lane_f64 simde_vst3q_lane_f64
#undef vst3q_lane_p16
#define vst3q_lane_p16 simde_vst3q_lane_p16
#undef vst3q_lane_p64
#define vst3q_lane_p64 simde_vst3q_lane_p64
#undef vst3q_lane_p8
#define vst3q_lane_p8 simde_vst3q_lane_p8
#undef vst3q_lane_s16
#define vst3q_lane_s16 simde_vst3q_lane_s16
#undef vst3q_lane_s32
#define vst3q_lane_s32 simde_vst3q_lane_s32
#undef vst3q_lane_s64
#define vst3q_lane_s64 simde_vst3q_lane_s64
#undef vst3q_lane_s8
#define vst3q_lane_s8 simde_vst3q_lane_s8
#undef vst3q_lane_u16
#define vst3q_lane_u16 simde_vst3q_lane_u16
#undef vst3q_lane_u32
#define vst3q_lane_u32 simde_vst3q_lane_u32
#undef vst3q_lane_u64
#define vst3q_lane_u64 simde_vst3q_lane_u64
#undef vst3q_lane_u8
#define vst3q_lane_u8 simde_vst3q_lane_u8
#undef vst3q_p16
#define vst3q_p16 simde_vst3q_p16
#undef vst3q_p64
#define vst3q_p64 simde_vst3q_p64
#undef vst3q_p8
#define vst3q_p8 simde_vst3q_p8
#undef vst3q_s16
#define vst3q_s16 simde_vst3q_s16
#undef vst3q_s32
#define vst3q_s32 simde_vst3q_s32
#undef vst3q_s64
#define vst3q_s64 simde_vst3q_s64
#undef vst3q_s8
#define vst3q_s8 simde_vst3q_s8
#undef vst3q_u16
#define vst3q_u16 simde_vst3q_u16
#undef vst3q_u32
#define vst3q_u32 simde_vst3q_u32
#undef vst3q_u64
#define vst3q_u64 simde_vst3q_u64
#undef vst3q_u8
#define vst3q_u8 simde_vst3q_u8
#undef vst4_bf16
#define vst4_bf16 simde_vst4_bf16
#undef vst4_f16
#define vst4_f16 simde_vst4_f16
#undef vst4_f32
#define vst4_f32 simde_vst4_f32
#undef vst4_f64
#define vst4_f64 simde_vst4_f64
#undef vst4_lane_bf16
#define vst4_lane_bf16 simde_vst4_lane_bf16
#undef vst4_lane_f16
#define vst4_lane_f16 simde_vst4_lane_f16
#undef vst4_lane_f32
#define vst4_lane_f32 simde_vst4_lane_f32
#undef vst4_lane_f64
#define vst4_lane_f64 simde_vst4_lane_f64
#undef vst4_lane_p16
#define vst4_lane_p16 simde_vst4_lane_p16
#undef vst4_lane_p64
#define vst4_lane_p64 simde_vst4_lane_p64
#undef vst4_lane_p8
#define vst4_lane_p8 simde_vst4_lane_p8
#undef vst4_lane_s16
#define vst4_lane_s16 simde_vst4_lane_s16
#undef vst4_lane_s32
#define vst4_lane_s32 simde_vst4_lane_s32
#undef vst4_lane_s64
#define vst4_lane_s64 simde_vst4_lane_s64
#undef vst4_lane_s8
#define vst4_lane_s8 simde_vst4_lane_s8
#undef vst4_lane_u16
#define vst4_lane_u16 simde_vst4_lane_u16
#undef vst4_lane_u32
#define vst4_lane_u32 simde_vst4_lane_u32
#undef vst4_lane_u64
#define vst4_lane_u64 simde_vst4_lane_u64
#undef vst4_lane_u8
#define vst4_lane_u8 simde_vst4_lane_u8
#undef vst4_p16
#define vst4_p16 simde_vst4_p16
#undef vst4_p64
#define vst4_p64 simde_vst4_p64
#undef vst4_p8
#define vst4_p8 simde_vst4_p8
#undef vst4_s16
#define vst4_s16 simde_vst4_s16
#undef vst4_s32
#define vst4_s32 simde_vst4_s32
#undef vst4_s64
#define vst4_s64 simde_vst4_s64
#undef vst4_s8
#define vst4_s8 simde_vst4_s8
#undef vst4_u16
#define vst4_u16 simde_vst4_u16
#undef vst4_u32
#define vst4_u32 simde_vst4_u32
#undef vst4_u64
#define vst4_u64 simde_vst4_u64
#undef vst4_u8
#define vst4_u8 simde_vst4_u8
#undef vst4q_bf16
#define vst4q_bf16 simde_vst4q_bf16
#undef vst4q_f16
#define vst4q_f16 simde_vst4q_f16
#undef vst4q_f32
#define vst4q_f32 simde_vst4q_f32
#undef vst4q_f64
#define vst4q_f64 simde_vst4q_f64
#undef vst4q_lane_bf16
#define vst4q_lane_bf16 simde_vst4q_lane_bf16
#undef vst4q_lane_f16
#define vst4q_lane_f16 simde_vst4q_lane_f16
#undef vst4q_lane_f32
#define vst4q_lane_f32 simde_vst4q_lane_f32
#undef vst4q_lane_f64
#define vst4q_lane_f64 simde_vst4q_lane_f64
#undef vst4q_lane_p16
#define vst4q_lane_p16 simde_vst4q_lane_p16
#undef vst4q_lane_p64
#define vst4q_lane_p64 simde_vst4q_lane_p64
#undef vst4q_lane_p8
#define vst4q_lane_p8 simde_vst4q_lane_p8
#undef vst4q_lane_s16
#define vst4q_lane_s16 simde_vst4q_lane_s16
#undef vst4q_lane_s32
#define vst4q_lane_s32 simde_vst4q_lane_s32
#undef vst4q_lane_s64
#define vst4q_lane_s64 simde_vst4q_lane_s64
#undef vst4q_lane_s8
#define vst4q_lane_s8 simde_vst4q_lane_s8
#undef vst4q_lane_u16
#define vst4q_lane_u16 simde_vst4q_lane_u16
#undef vst4q_lane_u32
#define vst4q_lane_u32 simde_vst4q_lane_u32
#undef vst4q_lane_u64
#define vst4q_lane_u64 simde_vst4q_lane_u64
#undef vst4q_lane_u8
#define vst4q_lane_u8 simde_vst4q_lane_u8
#undef vst4q_p16
#define vst4q_p16 simde_vst4q_p16
#undef vst4q_p64
#define vst4q_p64 simde_vst4q_p64
#undef vst4q_p8
#define vst4q_p8 simde_vst4q_p8
#undef vst4q_s16
#define vst4q_s16 simde_vst4q_s16
#undef vst4q_s32
#define vst4q_s32 simde_vst4q_s32
#undef vst4q_s64
#define vst4q_s64 simde_vst4q_s64
#undef vst4q_s8
#define vst4q_s8 simde_vst4q_s8
#undef vst4q_u16
#define vst4q_u16 simde_vst4q_u16
#undef vst4q_u32
#define vst4q_u32 simde_vst4q_u32
#undef vst4q_u64
#define vst4q_u64 simde_vst4q_u64
#undef vst4q_u8
#define vst4q_u8 simde_vst4q_u8
#undef vstrq_p128
#define vstrq_p128 simde_vstrq_p128
#undef vsub_f16
#define vsub_f16 simde_vsub_f16
#undef vsub_f32
#define vsub_f32 simde_vsub_f32
#undef vsub_f64
#define vsub_f64 simde_vsub_f64
#undef vsub_s16
#define vsub_s16 simde_vsub_s16
#undef vsub_s32
#define vsub_s32 simde_vsub_s32
#undef vsub_s64
#define vsub_s64 simde_vsub_s64
#undef vsub_s8
#define vsub_s8 simde_vsub_s8
#undef vsub_u16
#define vsub_u16 simde_vsub_u16
#undef vsub_u32
#define vsub_u32 simde_vsub_u32
#undef vsub_u64
#define vsub_u64 simde_vsub_u64
#undef vsub_u8
#define vsub_u8 simde_vsub_u8
#undef vsubd_s64
#define vsubd_s64 simde_vsubd_s64
#undef vsubd_u64
#define vsubd_u64 simde_vsubd_u64
#undef vsubh_f16
#define vsubh_f16 simde_vsubh_f16
#undef vsubhn_high_s16
#define vsubhn_high_s16 simde_vsubhn_high_s16
#undef vsubhn_high_s32
#define vsubhn_high_s32 simde_vsubhn_high_s32
#undef vsubhn_high_s64
#define vsubhn_high_s64 simde_vsubhn_high_s64
#undef vsubhn_high_u16
#define vsubhn_high_u16 simde_vsubhn_high_u16
#undef vsubhn_high_u32
#define vsubhn_high_u32 simde_vsubhn_high_u32
#undef vsubhn_high_u64
#define vsubhn_high_u64 simde_vsubhn_high_u64
#undef vsubhn_s16
#define vsubhn_s16 simde_vsubhn_s16
#undef vsubhn_s32
#define vsubhn_s32 simde_vsubhn_s32
#undef vsubhn_s64
#define vsubhn_s64 simde_vsubhn_s64
#undef vsubhn_u16
#define vsubhn_u16 simde_vsubhn_u16
#undef vsubhn_u32
#define vsubhn_u32 simde_vsubhn_u32
#undef vsubhn_u64
#define vsubhn_u64 simde_vsubhn_u64
#undef vsubl_high_s16
#define vsubl_high_s16 simde_vsubl_high_s16
#undef vsubl_high_s32
#define vsubl_high_s32 simde_vsubl_high_s32
#undef vsubl_high_s8
#define vsubl_high_s8 simde_vsubl_high_s8
#undef vsubl_high_u16
#define vsubl_high_u16 simde_vsubl_high_u16
#undef vsubl_high_u32
#define vsubl_high_u32 simde_vsubl_high_u32
#undef vsubl_high_u8
#define vsubl_high_u8 simde_vsubl_high_u8
#undef vsubl_s16
#define vsubl_s16 simde_vsubl_s16
#undef vsubl_s32
#define vsubl_s32 simde_vsubl_s32
#undef vsubl_s8
#define vsubl_s8 simde_vsubl_s8
#undef vsubl_u16
#define vsubl_u16 simde_vsubl_u16
#undef vsubl_u32
#define vsubl_u32 simde_vsubl_u32
#undef vsubl_u8
#define vsubl_u8 simde_vsubl_u8
#undef vsubq_f16
#define vsubq_f16 simde_vsubq_f16
#undef vsubq_f32
#define vsubq_f32 simde_vsubq_f32
#undef vsubq_f64
#define vsubq_f64 simde_vsubq_f64
#undef vsubq_s16
#define vsubq_s16 simde_vsubq_s16
#undef vsubq_s32
#define vsubq_s32 simde_vsubq_s32
#undef vsubq_s64
#define vsubq_s64 simde_vsubq_s64
#undef vsubq_s8
#define vsubq_s8 simde_vsubq_s8
#undef vsubq_u16
#define vsubq_u16 simde_vsubq_u16
#undef vsubq_u32
#define vsubq_u32 simde_vsubq_u32
#undef vsubq_u64
#define vsubq_u64 simde_vsubq_u64
#undef vsubq_u8
#define vsubq_u8 simde_vsubq_u8
#undef vsubw_high_s16
#define vsubw_high_s16 simde_vsubw_high_s16
#undef vsubw_high_s32
#define vsubw_high_s32 simde_vsubw_high_s32
#undef vsubw_high_s8
#define vsubw_high_s8 simde_vsubw_high_s8
#undef vsubw_high_u16
#define vsubw_high_u16 simde_vsubw_high_u16
#undef vsubw_high_u32
#define vsubw_high_u32 simde_vsubw_high_u32
#undef vsubw_high_u8
#define vsubw_high_u8 simde_vsubw_high_u8
#undef vsubw_s16
#define vsubw_s16 simde_vsubw_s16
#undef vsubw_s32
#define vsubw_s32 simde_vsubw_s32
#undef vsubw_s8
#define vsubw_s8 simde_vsubw_s8
#undef vsubw_u16
#define vsubw_u16 simde_vsubw_u16
#undef vsubw_u32
#define vsubw_u32 simde_vsubw_u32
#undef vsubw_u8
#define vsubw_u8 simde_vsubw_u8
#undef vsudot_lane_s32
#define vsudot_lane_s32 simde_vsudot_lane_s32
#undef vsudot_laneq_s32
#define vsudot_laneq_s32 simde_vsudot_laneq_s32
#undef vsudotq_lane_s32
#define vsudotq_lane_s32 simde_vsudotq_lane_s32
#undef vsudotq_laneq_s32
#define vsudotq_laneq_s32 simde_vsudotq_laneq_s32
#undef vtbl1_p8
#define vtbl1_p8 simde_vtbl1_p8
#undef vtbl1_s8
#define vtbl1_s8 simde_vtbl1_s8
#undef vtbl1_u8
#define vtbl1_u8 simde_vtbl1_u8
#undef vtbl2_p8
#define vtbl2_p8 simde_vtbl2_p8
#undef vtbl2_s8
#define vtbl2_s8 simde_vtbl2_s8
#undef vtbl2_u8
#define vtbl2_u8 simde_vtbl2_u8
#undef vtbl3_p8
#define vtbl3_p8 simde_vtbl3_p8
#undef vtbl3_s8
#define vtbl3_s8 simde_vtbl3_s8
#undef vtbl3_u8
#define vtbl3_u8 simde_vtbl3_u8
#undef vtbl4_p8
#define vtbl4_p8 simde_vtbl4_p8
#undef vtbl4_s8
#define vtbl4_s8 simde_vtbl4_s8
#undef vtbl4_u8
#define vtbl4_u8 simde_vtbl4_u8
#undef vtbx1_p8
#define vtbx1_p8 simde_vtbx1_p8
#undef vtbx1_s8
#define vtbx1_s8 simde_vtbx1_s8
#undef vtbx1_u8
#define vtbx1_u8 simde_vtbx1_u8
#undef vtbx2_p8
#define vtbx2_p8 simde_vtbx2_p8
#undef vtbx2_s8
#define vtbx2_s8 simde_vtbx2_s8
#undef vtbx2_u8
#define vtbx2_u8 simde_vtbx2_u8
#undef vtbx3_p8
#define vtbx3_p8 simde_vtbx3_p8
#undef vtbx3_s8
#define vtbx3_s8 simde_vtbx3_s8
#undef vtbx3_u8
#define vtbx3_u8 simde_vtbx3_u8
#undef vtbx4_p8
#define vtbx4_p8 simde_vtbx4_p8
#undef vtbx4_s8
#define vtbx4_s8 simde_vtbx4_s8
#undef vtbx4_u8
#define vtbx4_u8 simde_vtbx4_u8
#undef vtrn1_f16
#define vtrn1_f16 simde_vtrn1_f16
#undef vtrn1_f32
#define vtrn1_f32 simde_vtrn1_f32
#undef vtrn1_p16
#define vtrn1_p16 simde_vtrn1_p16
#undef vtrn1_p8
#define vtrn1_p8 simde_vtrn1_p8
#undef vtrn1_s16
#define vtrn1_s16 simde_vtrn1_s16
#undef vtrn1_s32
#define vtrn1_s32 simde_vtrn1_s32
#undef vtrn1_s8
#define vtrn1_s8 simde_vtrn1_s8
#undef vtrn1_u16
#define vtrn1_u16 simde_vtrn1_u16
#undef vtrn1_u32
#define vtrn1_u32 simde_vtrn1_u32
#undef vtrn1_u8
#define vtrn1_u8 simde_vtrn1_u8
#undef vtrn1q_f16
#define vtrn1q_f16 simde_vtrn1q_f16
#undef vtrn1q_f32
#define vtrn1q_f32 simde_vtrn1q_f32
#undef vtrn1q_f64
#define vtrn1q_f64 simde_vtrn1q_f64
#undef vtrn1q_p16
#define vtrn1q_p16 simde_vtrn1q_p16
#undef vtrn1q_p64
#define vtrn1q_p64 simde_vtrn1q_p64
#undef vtrn1q_p8
#define vtrn1q_p8 simde_vtrn1q_p8
#undef vtrn1q_s16
#define vtrn1q_s16 simde_vtrn1q_s16
#undef vtrn1q_s32
#define vtrn1q_s32 simde_vtrn1q_s32
#undef vtrn1q_s64
#define vtrn1q_s64 simde_vtrn1q_s64
#undef vtrn1q_s8
#define vtrn1q_s8 simde_vtrn1q_s8
#undef vtrn1q_u16
#define vtrn1q_u16 simde_vtrn1q_u16
#undef vtrn1q_u32
#define vtrn1q_u32 simde_vtrn1q_u32
#undef vtrn1q_u64
#define vtrn1q_u64 simde_vtrn1q_u64
#undef vtrn1q_u8
#define vtrn1q_u8 simde_vtrn1q_u8
#undef vtrn2_f16
#define vtrn2_f16 simde_vtrn2_f16
#undef vtrn2_f32
#define vtrn2_f32 simde_vtrn2_f32
#undef vtrn2_p16
#define vtrn2_p16 simde_vtrn2_p16
#undef vtrn2_p8
#define vtrn2_p8 simde_vtrn2_p8
#undef vtrn2_s16
#define vtrn2_s16 simde_vtrn2_s16
#undef vtrn2_s32
#define vtrn2_s32 simde_vtrn2_s32
#undef vtrn2_s8
#define vtrn2_s8 simde_vtrn2_s8
#undef vtrn2_u16
#define vtrn2_u16 simde_vtrn2_u16
#undef vtrn2_u32
#define vtrn2_u32 simde_vtrn2_u32
#undef vtrn2_u8
#define vtrn2_u8 simde_vtrn2_u8
#undef vtrn2q_f16
#define vtrn2q_f16 simde_vtrn2q_f16
#undef vtrn2q_f32
#define vtrn2q_f32 simde_vtrn2q_f32
#undef vtrn2q_f64
#define vtrn2q_f64 simde_vtrn2q_f64
#undef vtrn2q_p16
#define vtrn2q_p16 simde_vtrn2q_p16
#undef vtrn2q_p64
#define vtrn2q_p64 simde_vtrn2q_p64
#undef vtrn2q_p8
#define vtrn2q_p8 simde_vtrn2q_p8
#undef vtrn2q_s16
#define vtrn2q_s16 simde_vtrn2q_s16
#undef vtrn2q_s32
#define vtrn2q_s32 simde_vtrn2q_s32
#undef vtrn2q_s64
#define vtrn2q_s64 simde_vtrn2q_s64
#undef vtrn2q_s8
#define vtrn2q_s8 simde_vtrn2q_s8
#undef vtrn2q_u16
#define vtrn2q_u16 simde_vtrn2q_u16
#undef vtrn2q_u32
#define vtrn2q_u32 simde_vtrn2q_u32
#undef vtrn2q_u64
#define vtrn2q_u64 simde_vtrn2q_u64
#undef vtrn2q_u8
#define vtrn2q_u8 simde_vtrn2q_u8
#undef vtrn_f16
#define vtrn_f16 simde_vtrn_f16
#undef vtrn_f32
#define vtrn_f32 simde_vtrn_f32
#undef vtrn_p16
#define vtrn_p16 simde_vtrn_p16
#undef vtrn_p8
#define vtrn_p8 simde_vtrn_p8
#undef vtrn_s16
#define vtrn_s16 simde_vtrn_s16
#undef vtrn_s32
#define vtrn_s32 simde_vtrn_s32
#undef vtrn_s8
#define vtrn_s8 simde_vtrn_s8
#undef vtrn_u16
#define vtrn_u16 simde_vtrn_u16
#undef vtrn_u32
#define vtrn_u32 simde_vtrn_u32
#undef vtrn_u8
#define vtrn_u8 simde_vtrn_u8
#undef vtrnq_f16
#define vtrnq_f16 simde_vtrnq_f16
#undef vtrnq_f32
#define vtrnq_f32 simde_vtrnq_f32
#undef vtrnq_p16
#define vtrnq_p16 simde_vtrnq_p16
#undef vtrnq_p8
#define vtrnq_p8 simde_vtrnq_p8
#undef vtrnq_s16
#define vtrnq_s16 simde_vtrnq_s16
#undef vtrnq_s32
#define vtrnq_s32 simde_vtrnq_s32
#undef vtrnq_s8
#define vtrnq_s8 simde_vtrnq_s8
#undef vtrnq_u16
#define vtrnq_u16 simde_vtrnq_u16
#undef vtrnq_u32
#define vtrnq_u32 simde_vtrnq_u32
#undef vtrnq_u8
#define vtrnq_u8 simde_vtrnq_u8
#undef vtst_p64
#define vtst_p64 simde_vtst_p64
#undef vtst_p8
#define vtst_p8 simde_vtst_p8
#undef vtst_s16
#define vtst_s16 simde_vtst_s16
#undef vtst_s32
#define vtst_s32 simde_vtst_s32
#undef vtst_s64
#define vtst_s64 simde_vtst_s64
#undef vtst_s8
#define vtst_s8 simde_vtst_s8
#undef vtst_u16
#define vtst_u16 simde_vtst_u16
#undef vtst_u32
#define vtst_u32 simde_vtst_u32
#undef vtst_u64
#define vtst_u64 simde_vtst_u64
#undef vtst_u8
#define vtst_u8 simde_vtst_u8
#undef vtstd_s64
#define vtstd_s64 simde_vtstd_s64
#undef vtstd_u64
#define vtstd_u64 simde_vtstd_u64
#undef vtstq_p64
#define vtstq_p64 simde_vtstq_p64
#undef vtstq_p8
#define vtstq_p8 simde_vtstq_p8
#undef vtstq_s16
#define vtstq_s16 simde_vtstq_s16
#undef vtstq_s32
#define vtstq_s32 simde_vtstq_s32
#undef vtstq_s64
#define vtstq_s64 simde_vtstq_s64
#undef vtstq_s8
#define vtstq_s8 simde_vtstq_s8
#undef vtstq_u16
#define vtstq_u16 simde_vtstq_u16
#undef vtstq_u32
#define vtstq_u32 simde_vtstq_u32
#undef vtstq_u64
#define vtstq_u64 simde_vtstq_u64
#undef vtstq_u8
#define vtstq_u8 simde_vtstq_u8
#undef vuqadd_s16
#define vuqadd_s16 simde_vuqadd_s16
#undef vuqadd_s32
#define vuqadd_s32 simde_vuqadd_s32
#undef vuqadd_s64
#define vuqadd_s64 simde_vuqadd_s64
#undef vuqadd_s8
#define vuqadd_s8 simde_vuqadd_s8
#undef vuqaddb_s8
#define vuqaddb_s8 simde_vuqaddb_s8
#undef vuqaddd_s64
#define vuqaddd_s64 simde_vuqaddd_s64
#undef vuqaddh_s16
#define vuqaddh_s16 simde_vuqaddh_s16
#undef vuqaddq_s16
#define vuqaddq_s16 simde_vuqaddq_s16
#undef vuqaddq_s32
#define vuqaddq_s32 simde_vuqaddq_s32
#undef vuqaddq_s64
#define vuqaddq_s64 simde_vuqaddq_s64
#undef vuqaddq_s8
#define vuqaddq_s8 simde_vuqaddq_s8
#undef vuqadds_s32
#define vuqadds_s32 simde_vuqadds_s32
#undef vusdot_lane_s32
#define vusdot_lane_s32 simde_vusdot_lane_s32
#undef vusdot_laneq_s32
#define vusdot_laneq_s32 simde_vusdot_laneq_s32
#undef vusdot_s32
#define vusdot_s32 simde_vusdot_s32
#undef vusdotq_lane_s32
#define vusdotq_lane_s32 simde_vusdotq_lane_s32
#undef vusdotq_laneq_s32
#define vusdotq_laneq_s32 simde_vusdotq_laneq_s32
#undef vusdotq_s32
#define vusdotq_s32 simde_vusdotq_s32
#undef vusmmlaq_s32
#define vusmmlaq_s32 simde_vusmmlaq_s32
#undef vuzp1_f16
#define vuzp1_f16 simde_vuzp1_f16
#undef vuzp1_f32
#define vuzp1_f32 simde_vuzp1_f32
#undef vuzp1_p16
#define vuzp1_p16 simde_vuzp1_p16
#undef vuzp1_p8
#define vuzp1_p8 simde_vuzp1_p8
#undef vuzp1_s16
#define vuzp1_s16 simde_vuzp1_s16
#undef vuzp1_s32
#define vuzp1_s32 simde_vuzp1_s32
#undef vuzp1_s8
#define vuzp1_s8 simde_vuzp1_s8
#undef vuzp1_u16
#define vuzp1_u16 simde_vuzp1_u16
#undef vuzp1_u32
#define vuzp1_u32 simde_vuzp1_u32
#undef vuzp1_u8
#define vuzp1_u8 simde_vuzp1_u8
#undef vuzp1q_f16
#define vuzp1q_f16 simde_vuzp1q_f16
#undef vuzp1q_f32
#define vuzp1q_f32 simde_vuzp1q_f32
#undef vuzp1q_f64
#define vuzp1q_f64 simde_vuzp1q_f64
#undef vuzp1q_p16
#define vuzp1q_p16 simde_vuzp1q_p16
#undef vuzp1q_p64
#define vuzp1q_p64 simde_vuzp1q_p64
#undef vuzp1q_p8
#define vuzp1q_p8 simde_vuzp1q_p8
#undef vuzp1q_s16
#define vuzp1q_s16 simde_vuzp1q_s16
#undef vuzp1q_s32
#define vuzp1q_s32 simde_vuzp1q_s32
#undef vuzp1q_s64
#define vuzp1q_s64 simde_vuzp1q_s64
#undef vuzp1q_s8
#define vuzp1q_s8 simde_vuzp1q_s8
#undef vuzp1q_u16
#define vuzp1q_u16 simde_vuzp1q_u16
#undef vuzp1q_u32
#define vuzp1q_u32 simde_vuzp1q_u32
#undef vuzp1q_u64
#define vuzp1q_u64 simde_vuzp1q_u64
#undef vuzp1q_u8
#define vuzp1q_u8 simde_vuzp1q_u8
#undef vuzp2_f16
#define vuzp2_f16 simde_vuzp2_f16
#undef vuzp2_f32
#define vuzp2_f32 simde_vuzp2_f32
#undef vuzp2_p16
#define vuzp2_p16 simde_vuzp2_p16
#undef vuzp2_p8
#define vuzp2_p8 simde_vuzp2_p8
#undef vuzp2_s16
#define vuzp2_s16 simde_vuzp2_s16
#undef vuzp2_s32
#define vuzp2_s32 simde_vuzp2_s32
#undef vuzp2_s8
#define vuzp2_s8 simde_vuzp2_s8
#undef vuzp2_u16
#define vuzp2_u16 simde_vuzp2_u16
#undef vuzp2_u32
#define vuzp2_u32 simde_vuzp2_u32
#undef vuzp2_u8
#define vuzp2_u8 simde_vuzp2_u8
#undef vuzp2q_f16
#define vuzp2q_f16 simde_vuzp2q_f16
#undef vuzp2q_f32
#define vuzp2q_f32 simde_vuzp2q_f32
#undef vuzp2q_f64
#define vuzp2q_f64 simde_vuzp2q_f64
#undef vuzp2q_p16
#define vuzp2q_p16 simde_vuzp2q_p16
#undef vuzp2q_p64
#define vuzp2q_p64 simde_vuzp2q_p64
#undef vuzp2q_p8
#define vuzp2q_p8 simde_vuzp2q_p8
#undef vuzp2q_s16
#define vuzp2q_s16 simde_vuzp2q_s16
#undef vuzp2q_s32
#define vuzp2q_s32 simde_vuzp2q_s32
#undef vuzp2q_s64
#define vuzp2q_s64 simde_vuzp2q_s64
#undef vuzp2q_s8
#define vuzp2q_s8 simde_vuzp2q_s8
#undef vuzp2q_u16
#define vuzp2q_u16 simde_vuzp2q_u16
#undef vuzp2q_u32
#define vuzp2q_u32 simde_vuzp2q_u32
#undef vuzp2q_u64
#define vuzp2q_u64 simde_vuzp2q_u64
#undef vuzp2q_u8
#define vuzp2q_u8 simde_vuzp2q_u8
#undef vuzp_f16
#define vuzp_f16 simde_vuzp_f16
#undef vuzp_f32
#define vuzp_f32 simde_vuzp_f32
#undef vuzp_p16
#define vuzp_p16 simde_vuzp_p16
#undef vuzp_p8
#define vuzp_p8 simde_vuzp_p8
#undef vuzp_s16
#define vuzp_s16 simde_vuzp_s16
#undef vuzp_s32
#define vuzp_s32 simde_vuzp_s32
#undef vuzp_s8
#define vuzp_s8 simde_vuzp_s8
#undef vuzp_u16
#define vuzp_u16 simde_vuzp_u16
#undef vuzp_u32
#define vuzp_u32 simde_vuzp_u32
#undef vuzp_u8
#define vuzp_u8 simde_vuzp_u8
#undef vuzpq_f16
#define vuzpq_f16 simde_vuzpq_f16
#undef vuzpq_f32
#define vuzpq_f32 simde_vuzpq_f32
#undef vuzpq_p16
#define vuzpq_p16 simde_vuzpq_p16
#undef vuzpq_p8
#define vuzpq_p8 simde_vuzpq_p8
#undef vuzpq_s16
#define vuzpq_s16 simde_vuzpq_s16
#undef vuzpq_s32
#define vuzpq_s32 simde_vuzpq_s32
#undef vuzpq_s8
#define vuzpq_s8 simde_vuzpq_s8
#undef vuzpq_u16
#define vuzpq_u16 simde_vuzpq_u16
#undef vuzpq_u32
#define vuzpq_u32 simde_vuzpq_u32
#undef vuzpq_u8
#define vuzpq_u8 simde_vuzpq_u8
#undef vxarq_u64
#define vxarq_u64 simde_vxarq_u64
#undef vzip1_f16
#define vzip1_f16 simde_vzip1_f16
#undef vzip1_f32
#define vzip1_f32 simde_vzip1_f32
#undef vzip1_p16
#define vzip1_p16 simde_vzip1_p16
#undef vzip1_p8
#define vzip1_p8 simde_vzip1_p8
#undef vzip1_s16
#define vzip1_s16 simde_vzip1_s16
#undef vzip1_s32
#define vzip1_s32 simde_vzip1_s32
#undef vzip1_s8
#define vzip1_s8 simde_vzip1_s8
#undef vzip1_u16
#define vzip1_u16 simde_vzip1_u16
#undef vzip1_u32
#define vzip1_u32 simde_vzip1_u32
#undef vzip1_u8
#define vzip1_u8 simde_vzip1_u8
#undef vzip1q_f16
#define vzip1q_f16 simde_vzip1q_f16
#undef vzip1q_f32
#define vzip1q_f32 simde_vzip1q_f32
#undef vzip1q_f64
#define vzip1q_f64 simde_vzip1q_f64
#undef vzip1q_p16
#define vzip1q_p16 simde_vzip1q_p16
#undef vzip1q_p64
#define vzip1q_p64 simde_vzip1q_p64
#undef vzip1q_p8
#define vzip1q_p8 simde_vzip1q_p8
#undef vzip1q_s16
#define vzip1q_s16 simde_vzip1q_s16
#undef vzip1q_s32
#define vzip1q_s32 simde_vzip1q_s32
#undef vzip1q_s64
#define vzip1q_s64 simde_vzip1q_s64
#undef vzip1q_s8
#define vzip1q_s8 simde_vzip1q_s8
#undef vzip1q_u16
#define vzip1q_u16 simde_vzip1q_u16
#undef vzip1q_u32
#define vzip1q_u32 simde_vzip1q_u32
#undef vzip1q_u64
#define vzip1q_u64 simde_vzip1q_u64
#undef vzip1q_u8
#define vzip1q_u8 simde_vzip1q_u8
#undef vzip2_f16
#define vzip2_f16 simde_vzip2_f16
#undef vzip2_f32
#define vzip2_f32 simde_vzip2_f32
#undef vzip2_p16
#define vzip2_p16 simde_vzip2_p16
#undef vzip2_p8
#define vzip2_p8 simde_vzip2_p8
#undef vzip2_s16
#define vzip2_s16 simde_vzip2_s16
#undef vzip2_s32
#define vzip2_s32 simde_vzip2_s32
#undef vzip2_s8
#define vzip2_s8 simde_vzip2_s8
#undef vzip2_u16
#define vzip2_u16 simde_vzip2_u16
#undef vzip2_u32
#define vzip2_u32 simde_vzip2_u32
#undef vzip2_u8
#define vzip2_u8 simde_vzip2_u8
#undef vzip2q_f16
#define vzip2q_f16 simde_vzip2q_f16
#undef vzip2q_f32
#define vzip2q_f32 simde_vzip2q_f32
#undef vzip2q_f64
#define vzip2q_f64 simde_vzip2q_f64
#undef vzip2q_p16
#define vzip2q_p16 simde_vzip2q_p16
#undef vzip2q_p64
#define vzip2q_p64 simde_vzip2q_p64
#undef vzip2q_p8
#define vzip2q_p8 simde_vzip2q_p8
#undef vzip2q_s16
#define vzip2q_s16 simde_vzip2q_s16
#undef vzip2q_s32
#define vzip2q_s32 simde_vzip2q_s32
#undef vzip2q_s64
#define vzip2q_s64 simde_vzip2q_s64
#undef vzip2q_s8
#define vzip2q_s8 simde_vzip2q_s8
#undef vzip2q_u16
#define vzip2q_u16 simde_vzip2q_u16
#undef vzip2q_u32
#define vzip2q_u32 simde_vzip2q_u32
#undef vzip2q_u64
#define vzip2q_u64 simde_vzip2q_u64
#undef vzip2q_u8
#define vzip2q_u8 simde_vzip2q_u8
#undef vzip_f16
#define vzip_f16 simde_vzip_f16
#undef vzip_f32
#define vzip_f32 simde_vzip_f32
#undef vzip_p16
#define vzip_p16 simde_vzip_p16
#undef vzip_p8
#define vzip_p8 simde_vzip_p8
#undef vzip_s16
#define vzip_s16 simde_vzip_s16
#undef vzip_s32
#define vzip_s32 simde_vzip_s32
#undef vzip_s8
#define vzip_s8 simde_vzip_s8
#undef vzip_u16
#define vzip_u16 simde_vzip_u16
#undef vzip_u32
#define vzip_u32 simde_vzip_u32
#undef vzip_u8
#define vzip_u8 simde_vzip_u8
#undef vzipq_f16
#define vzipq_f16 simde_vzipq_f16
#undef vzipq_f32
#define vzipq_f32 simde_vzipq_f32
#undef vzipq_p16
#define vzipq_p16 simde_vzipq_p16
#undef vzipq_p8
#define vzipq_p8 simde_vzipq_p8
#undef vzipq_s16
#define vzipq_s16 simde_vzipq_s16
#undef vzipq_s32
#define vzipq_s32 simde_vzipq_s32
#undef vzipq_s8
#define vzipq_s8 simde_vzipq_s8
#undef vzipq_u16
#define vzipq_u16 simde_vzipq_u16
#undef vzipq_u32
#define vzipq_u32 simde_vzipq_u32
#undef vzipq_u8
#define vzipq_u8 simde_vzipq_u8

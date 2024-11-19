#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_misc_copy_mock_relocs[] = {
};
static const u_printf_info gfx125_misc_copy_mock_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_misc_copy_mock_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g34<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g24<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g34UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g3<1>UW         0x76543210V                     { align1 WE_all 1Q };
shl(16)         g9<1>D          g24<8,8,1>D     0x00000004UD    { align1 1H I@2 };
add(8)          g3.8<1>UW       g3<1,1,0>UW     0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g5<1>D          g3<8,8,1>UW                     { align1 1H };
and(16)         g7<1>UD         g5<1,1,0>UD     0x0000000fUD    { align1 1H I@1 compacted };
add(16)         g4<1>D          g7<1,1,0>D      g9<1,1,0>D      { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
shl(16)         g11<1>D         g1<0,1,0>D      0x00000004UD    { align1 1H };

LABEL1:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cmp.ge.f0.0(16) null<1>UD       g4<8,8,1>UD     g2.4<0,1,0>UD   { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL0        UIP:  LABEL0              { align1 1H };
add(16)         g13<1>D         g2.2<0,1,0>D    g4<1,1,0>D      { align1 1H compacted };
add(16)         g19<1>D         g2<0,1,0>D      g4<1,1,0>D      { align1 1H compacted };
cmp.l.f0.0(16)  g15<1>UD        g13<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g25<2>UD        g13<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g27<2>UD        g14<4,4,1>UD                    { align1 2Q $1.src };
cmp.l.f0.0(16)  g21<1>UD        g19<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@4 compacted };
mov(8)          g29<2>UD        g19<4,4,1>UD                    { align1 1Q $0.src };
mov(8)          g31<2>UD        g20<4,4,1>UD                    { align1 2Q $0.src };
add(16)         g17<1>D         -g15<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@6 compacted };
add(16)         g23<1>D         -g21<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@4 compacted };
mov(8)          g25.1<2>UD      g17<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g27.1<2>UD      g18<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g29.1<2>UD      g23<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g31.1<2>UD      g24<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g18UD           g25UD           nullUD          0x08200980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g33<1>UD        g18<32,8,4>UB                   { align1 1H $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g29UD           g33UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };
add(16)         g4<1>D          g4<1,1,0>D      g11<1,1,0>D     { align1 1H compacted };

LABEL0:
while(16)       JIP:  LABEL1                                    { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_mock_code[] = {
    0x80000065, 0x22058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x18050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00220c, 0x00340000,
    0x80030061, 0x03054410, 0x00000000, 0x76543210,
    0x00041a69, 0x09058660, 0x02461805, 0x00000004,
    0x64031a40, 0x00800395, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x05050160,
    0x00460305, 0x00000000, 0xe0071965, 0x00f00503,
    0xa0041940, 0x09000702, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x0b058660,
    0x02000104, 0x00000004, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00041a70, 0x00010220,
    0x42460405, 0x00000284, 0x01040028, 0x0001c660,
    0x00000128, 0x00000128, 0xa00d0040, 0x04010242,
    0xa0130040, 0x04010202, 0x270f1a70, 0x02100d2b,
    0x00033161, 0x19060220, 0x00340d05, 0x00000000,
    0x00133161, 0x1b060220, 0x00340e05, 0x00000000,
    0x27151c70, 0x02101303, 0x00033061, 0x1d060220,
    0x00341305, 0x00000000, 0x00133061, 0x1f060220,
    0x00341405, 0x00000000, 0xa0111e40, 0x02120f1a,
    0xa0171c40, 0x02121512, 0x00031a61, 0x19260220,
    0x00341105, 0x00000000, 0x00131b61, 0x1b260220,
    0x00341205, 0x00000000, 0x00031b61, 0x1d260220,
    0x00341705, 0x00000000, 0x00131c61, 0x1f260220,
    0x00341805, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x12140000,
    0xf3001924, 0x00020000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00042161, 0x21050020,
    0x00661207, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x00000000,
    0xf3081d24, 0x00022114, 0xa0040040, 0x0b000402,
    0x00040027, 0x00014060, 0x00000000, 0xfffffeb8,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_misc_copy_mock = {
   .prog_data = {
      .base.nr_params = 13,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 560,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_misc_copy_mock_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_misc_copy_mock_printfs,
      .base.uses_atomic_load_store = false,
      .local_size = { 16, 1, 1 },
      .prog_offset = { 0, 0, 0 },
      .prog_mask = 2,
      .prog_spilled = 0,
      .uses_barrier = false,
      .uses_num_work_groups = false,
      .push.per_thread.dwords = 0,
      .push.per_thread.regs = 0,
      .push.per_thread.size = 0,
      .push.cross_thread.dwords = 13,
      .push.cross_thread.regs = 2,
      .push.cross_thread.size = 64,
   },
   .args_size = 20,
   .arg_count = 3,
   .args = gfx125_misc_copy_mock_args,
   .code = gfx125_misc_copy_mock_code,
};
const char *gfx125_misc_copy_mock_sha1 = "eeac1a7380ce2a1494f4b5b9772130db5f69b34b";

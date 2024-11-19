#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_misc_mem_set_relocs[] = {
};
static const u_printf_info gfx125_misc_mem_set_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_misc_mem_set_args[] = {
   { 0, 8 },
   { 8, 4 },
   { 12, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g31<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g23<1>UD        g0.1<0,1,0>UD                   { align1 1H };
and(16)         g4<1>UD         g0.2<0,1,0>UD   0x000000ffUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g1UD            g31UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g3<1>UW         0x76543210V                     { align1 WE_all 1Q };
shl(16)         g14<1>D         g23<8,8,1>D     0x00000005UD    { align1 1H I@3 };
shl(16)         g6<1>D          g4<8,8,1>D      0x00000004UD    { align1 1H I@3 };
add(8)          g3.8<1>UW       g3<1,1,0>UW     0x0008UW        { align1 WE_all 1Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g8<1>D          g3<8,8,1>UW                     { align1 1H };
add(16)         g10<1>D         g8<1,1,0>D      g6<1,1,0>D      { align1 1H I@1 compacted };
and(16)         g12<1>UD        g10<1,1,0>UD    0x0000001fUD    { align1 1H I@1 compacted };
add(16)         g16<1>D         g12<1,1,0>D     g14<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cmp.l.f0.0(16)  null<1>UD       g16<8,8,1>UD    g2.3<0,1,0>UD   { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g18<1>D         g2<0,1,0>D      g16<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g30<4>UB        g2.2<0,1,0>UD                   { align1 1H };
cmp.l.f0.0(16)  g20<1>UD        g18<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@2 compacted };
mov(8)          g24<2>UD        g18<4,4,1>UD                    { align1 1Q };
mov(8)          g26<2>UD        g19<4,4,1>UD                    { align1 2Q };
mov(16)         g28<1>UD        g30<32,8,4>UB                   { align1 1H I@4 };
add(16)         g22<1>D         -g20<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@4 compacted };
mov(8)          g24.1<2>UD      g22<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g26.1<2>UD      g23<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g24UD           g28UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_mem_set_code[] = {
    0x80000065, 0x1f058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x17050220, 0x00000024, 0x00000000,
    0xe0040065, 0x0ff10043, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa001f0c, 0x00340000, 0x80030061, 0x03054410,
    0x00000000, 0x76543210, 0x00041b69, 0x0e058660,
    0x02461705, 0x00000005, 0x00041b69, 0x06058660,
    0x02460405, 0x00000004, 0x64031b40, 0x00800395,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x08050160, 0x00460305, 0x00000000,
    0xa00a1940, 0x06000802, 0xe00c1965, 0x01f00a03,
    0xa0101940, 0x0e000c02, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00041970, 0x00010220,
    0x52461005, 0x00000264, 0x01040022, 0x0001c060,
    0x000000c8, 0x000000c8, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xa0120040, 0x10010202,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x1e070200, 0x00000244, 0x00000000,
    0x27141a70, 0x02101203, 0x00030061, 0x18060220,
    0x00341205, 0x00000000, 0x00130061, 0x1a060220,
    0x00341305, 0x00000000, 0x00041c61, 0x1c050020,
    0x00661e07, 0x00000000, 0xa0161c40, 0x02121412,
    0x00031961, 0x18260220, 0x00341605, 0x00000000,
    0x00131a61, 0x1a260220, 0x00341705, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xf3081824, 0x00021c14,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_misc_mem_set = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 464,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_misc_mem_set_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_misc_mem_set_printfs,
      .base.uses_atomic_load_store = false,
      .local_size = { 32, 1, 1 },
      .prog_offset = { 0, 0, 0 },
      .prog_mask = 2,
      .prog_spilled = 0,
      .uses_barrier = false,
      .uses_num_work_groups = false,
      .push.per_thread.dwords = 0,
      .push.per_thread.regs = 0,
      .push.per_thread.size = 0,
      .push.cross_thread.dwords = 12,
      .push.cross_thread.regs = 2,
      .push.cross_thread.size = 64,
   },
   .args_size = 16,
   .arg_count = 3,
   .args = gfx125_misc_mem_set_args,
   .code = gfx125_misc_mem_set_code,
};
const char *gfx125_misc_mem_set_sha1 = "3e265d4599d0bbae6575e669ea6205af678456d1";

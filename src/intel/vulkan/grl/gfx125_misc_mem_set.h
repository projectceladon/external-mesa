#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_misc_mem_set_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_misc_mem_set_args[] = {
   { 0, 8 },
   { 8, 4 },
   { 12, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g37<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(8)          g3<1>UW         0x76543210V                     { align1 WE_all 1Q };
mov(16)         g29<1>UD        g0.1<0,1,0>UD                   { align1 1H };
and(16)         g8<1>UD         g0.2<0,1,0>UD   0x000000ffUD    { align1 1H compacted };
add(1)          g38<1>UD        g37<0,1,0>UD    0x00000000UD    { align1 WE_all 1N I@4 compacted };
add(8)          g3.8<1>UW       g3<1,1,0>UW     0x0008UW        { align1 WE_all 1Q I@4 compacted };
shl(16)         g18<1>D         g29<8,8,1>D     0x00000005UD    { align1 1H I@4 };
shl(16)         g10<1>D         g8<8,8,1>D      0x00000004UD    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(1)         g1UD            g38UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
mov(16)         g12<1>D         g3<8,8,1>UW                     { align1 1H };
add(16)         g14<1>D         g12<1,1,0>D     g10<1,1,0>D     { align1 1H I@1 compacted };
and(16)         g16<1>UD        g14<1,1,0>UD    0x0000001fUD    { align1 1H I@1 compacted };
add(16)         g20<1>D         g16<1,1,0>D     g18<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cmp.l.f0.0(16)  null<1>UD       g20<8,8,1>UD    g2.3<0,1,0>UD   { align1 1H I@1 };
mov(8)          g4.1<2>F        g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g6.1<2>F        g2.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g4<2>F          g2<0,1,0>F                      { align1 1Q F@2 compacted };
mov(8)          g6<2>F          g2<0,1,0>F                      { align1 2Q F@2 compacted };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
add(8)          g22<1>D         g4<8,4,2>D      g20<1,1,0>D     { align1 1Q F@2 compacted };
add(8)          g23<1>D         g6<8,4,2>D      g21<1,1,0>D     { align1 2Q F@1 compacted };
mov(16)         g36<4>UB        g2.2<0,1,0>UD                   { align1 1H };
cmp.l.f0.0(8)   g24<1>UD        g22<8,8,1>UD    g4<8,4,2>UD     { align1 1Q I@3 };
cmp.l.f0.0(8)   g25<1>UD        g23<8,8,1>UD    g6<8,4,2>UD     { align1 2Q I@3 };
mov(8)          g30<2>UD        g22<4,4,1>UD                    { align1 1Q };
mov(8)          g32<2>UD        g23<4,4,1>UD                    { align1 2Q };
mov(16)         g34<1>UD        g36<32,8,4>UB                   { align1 1H I@5 };
add(8)          g26<1>D         -g24<8,8,1>D    g4.1<8,4,2>D    { align1 1Q I@5 };
add(8)          g27<1>D         -g25<8,8,1>D    g6.1<8,4,2>D    { align1 2Q I@5 };
mov(8)          g30.1<2>UD      g26<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g32.1<2>UD      g27<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g30UD           g34UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $1 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_mem_set_code[] = {
    0x80000065, 0x25058220, 0x02000004, 0xffffffc0,
    0x80030061, 0x03054410, 0x00000000, 0x76543210,
    0x00040061, 0x1d050220, 0x00000024, 0x00000000,
    0xe0080065, 0x0ff10043, 0xe2261c40, 0x00012503,
    0x64031c40, 0x00800395, 0x00041c69, 0x12058660,
    0x02461d05, 0x00000005, 0x00041c69, 0x0a058660,
    0x02460805, 0x00000004, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa00260c, 0x00340000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x0c050160,
    0x00460305, 0x00000000, 0xa00e1940, 0x0a000c02,
    0xe0101965, 0x01f00e03, 0xa0141940, 0x12001002,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x00041970, 0x00010220, 0x52461405, 0x00000264,
    0x21040061, 0x001102cc, 0x2a060061, 0x001102cc,
    0x21041261, 0x00110204, 0x2a061261, 0x00110204,
    0x01040022, 0x0001c060, 0x000000e0, 0x000000e0,
    0xa1161240, 0x140e0402, 0xaa171140, 0x150e0602,
    0x00040061, 0x24070200, 0x00000244, 0x00000000,
    0x00031b70, 0x18050220, 0x52461605, 0x00440406,
    0x00131b70, 0x19050220, 0x52461705, 0x00440606,
    0x00030061, 0x1e060220, 0x00341605, 0x00000000,
    0x00130061, 0x20060220, 0x00341705, 0x00000000,
    0x00041d61, 0x22050020, 0x00662407, 0x00000000,
    0x00031d40, 0x1a052660, 0x06461805, 0x00440426,
    0x00131d40, 0x1b052660, 0x06461905, 0x00440626,
    0x00031a61, 0x1e260220, 0x00341a05, 0x00000000,
    0x00131a61, 0x20260220, 0x00341b05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xf3081e24, 0x00022214,
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
      .base.program_size = 528,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_misc_mem_set_relocs,
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
const char *gfx125_misc_mem_set_sha1 = "8c3772e207af2ff968e9b06f5124ac4c28e63b82";

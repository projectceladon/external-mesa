#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_BFS_build_qnodes_begin_batchable_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_BFS_build_qnodes_begin_batchable_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_BFS_build_qnodes_begin_batchable_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g90<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g87<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g90UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g8<1>UW         0x76543210V                     { align1 WE_all 1Q };
shl(16)         g4<1>D          g87<8,8,1>D     0x00000004UD    { align1 1H I@2 };
add(8)          g8.8<1>UW       g8<1,1,0>UW     0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g6<1>UD         g8<8,8,1>UW                     { align1 1H };
and(16)         g9<1>UD         g6<1,1,0>UD     0x0000000fUD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g12<1>D         g2<0,1,0>D      24D             { align1 1H compacted };
cmp.l.f0.0(16)  g14<1>UD        g12<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g18<2>UD        g12<4,4,1>UD                    { align1 1Q };
mov(8)          g20<2>UD        g13<4,4,1>UD                    { align1 2Q };
add(16)         g11<1>D         g4<1,1,0>D      g9<1,1,0>D      { align1 1H I@5 compacted };
add(16)         g16<1>D         -g14<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@4 compacted };
mov(8)          g18.1<2>UD      g16<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g20.1<2>UD      g17<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g22UD           g18UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
cmp.l.f0.0(16)  null<1>UD       g11<8,8,1>UD    g22<8,8,1>UD    { align1 1H @4 $1.dst };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
add(16)         g23<1>D         g2<0,1,0>D      36D             { align1 1H compacted };
add(16)         g34<1>D         g2<0,1,0>D      44D             { align1 1H compacted };
shl(16)         g37<1>D         g11<8,8,1>D     0x00000004UD    { align1 1H };
mov(16)         g3<1>UD         0x00000000UD                    { align1 1H };
mov(16)         g5<1>UD         0x00000000UD                    { align1 1H };
mov(16)         g9<1>UD         0x00000001UD                    { align1 1H };
cmp.l.f0.0(16)  g52<1>UD        g23<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@6 compacted };
mov(8)          g29<2>UD        g23<4,4,1>UD                    { align1 1Q };
mov(8)          g31<2>UD        g24<4,4,1>UD                    { align1 2Q };
add(16)         g39<1>D         g34<1,1,0>D     g37<1,1,0>D     { align1 1H I@7 compacted };
cmp.l.f0.0(16)  g36<1>UD        g34<1,1,0>UD    0x0000002cUD    { align1 1H compacted };
add(16)         g27<1>D         -g52<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@5 compacted };
cmp.l.f0.0(16)  g41<1>UD        g39<1,1,0>UD    g34<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g45<2>UD        g39<4,4,1>UD                    { align1 1Q };
mov(8)          g47<2>UD        g40<4,4,1>UD                    { align1 2Q };
mov(8)          g29.1<2>UD      g27<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g31.1<2>UD      g28<4,4,1>UD                    { align1 2Q I@5 };
add3(16)        g43<1>D         -g36<8,8,1>D    g2.1<0,1,0>D    -g41<1,1,1>D { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g33UD           g29UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mov(8)          g45.1<2>UD      g43<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g47.1<2>UD      g44<4,4,1>UD                    { align1 2Q I@2 };
add(16)         g7<1>D          g33<1,1,0>D     g11<1,1,0>D     { align1 1H $2.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g45UD           g3UD            0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $3 };
mul(8)          acc0<1>UD       g7<8,8,1>UD     0x0058UW        { align1 1Q $3.src };
mul(16)         g48<1>D         g7<1,1,0>D      88W             { align1 1H $3.src compacted };
mov(16)         g88<1>UD        0x00000000UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g90<1>UD        0x00000000UD                    { align1 1H };
mov(16)         g92<1>UD        0x00000000UD                    { align1 1H };
mov(16)         g94<1>UD        0x00000000UD                    { align1 1H };
mach(8)         g46<1>UD        g7<1,1,0>UD     0x00000058UD    { align1 1Q $3.src compacted AccWrEnable };
add(16)         g50<1>D         g2.2<0,1,0>D    g48<1,1,0>D     { align1 1H I@6 compacted };
mul(8)          acc0<1>UD       g8<8,8,1>UD     0x0058UW        { align1 2Q };
cmp.l.f0.0(16)  g25<1>UD        g50<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@2 compacted };
add(16)         g55<1>D         g50<1,1,0>D     64D             { align1 1H compacted };
mach(8)         g47<1>UD        g8<8,8,1>UD     0x00000058UD    { align1 2Q $3.src AccWrEnable };
cmp.l.f0.0(16)  g57<1>UD        g55<1,1,0>UD    g50<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g61<2>UD        g55<4,4,1>UD                    { align1 1Q };
mov(8)          g63<2>UD        g56<4,4,1>UD                    { align1 2Q };
add3(16)        g54<1>D         g2.3<0,1,0>D    g46<8,8,1>D     -g25<1,1,1>D { align1 1H I@4 };
add(16)         g59<1>D         -g57<1,1,0>D    g54<1,1,0>D     { align1 1H I@1 compacted };
mov(8)          g61.1<2>UD      g59<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g63.1<2>UD      g60<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g61UD           g88UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $4 };
add(16)         g62<1>D         g50<1,1,0>D     32D             { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g64<1>UD        g62<1,1,0>UD    g50<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g68<2>UD        g62<4,4,1>UD                    { align1 1Q };
mov(8)          g70<2>UD        g63<4,4,1>UD                    { align1 2Q };
add(16)         g66<1>D         -g64<1,1,0>D    g54<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g68.1<2>UD      g66<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g70.1<2>UD      g67<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g72UD           g68UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
add(16)         g76<1>D         g72<1,1,0>D     12D             { align1 1H $5.dst compacted };
cmp.l.f0.0(16)  g78<1>UD        g76<1,1,0>UD    g72<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g82<2>UD        g76<4,4,1>UD                    { align1 1Q };
mov(8)          g84<2>UD        g77<4,4,1>UD                    { align1 2Q };
add(16)         g80<1>D         -g78<1,1,0>D    g74<1,1,0>D     { align1 1H @3 $5.dst compacted };
mov(8)          g82.1<2>UD      g80<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g84.1<2>UD      g81<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g86UD           g82UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g89<1>D         g86<1,1,0>D     1D              { align1 1H $6.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g82UD           g89UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_BFS_build_qnodes_begin_batchable_code[] = {
    0x80000065, 0x5a058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x57050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa005a0c, 0x00340000,
    0x80030061, 0x08054410, 0x00000000, 0x76543210,
    0x00041a69, 0x04058660, 0x02465705, 0x00000004,
    0x64081a40, 0x00800895, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x06050120,
    0x00460805, 0x00000000, 0xe0091965, 0x00f00603,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa00c0040, 0x01810203, 0x270e1970, 0x02100c03,
    0x00030061, 0x12060220, 0x00340c05, 0x00000000,
    0x00130061, 0x14060220, 0x00340d05, 0x00000000,
    0xa00b1d40, 0x09000402, 0xa0101c40, 0x02120e12,
    0x00031961, 0x12260220, 0x00341005, 0x00000000,
    0x00131a61, 0x14260220, 0x00341105, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x16140000, 0xfb001224, 0x00000000,
    0x0004c170, 0x00010220, 0x52460b05, 0x00461605,
    0x01040022, 0x0001c060, 0x000003d0, 0x000003d0,
    0xa0170040, 0x02410203, 0xa0220040, 0x02c10203,
    0x00040069, 0x25058660, 0x02460b05, 0x00000004,
    0x00040061, 0x03054220, 0x00000000, 0x00000000,
    0x00040061, 0x05054220, 0x00000000, 0x00000000,
    0x00040061, 0x09054220, 0x00000000, 0x00000001,
    0x27341e70, 0x02101703, 0x00030061, 0x1d060220,
    0x00341705, 0x00000000, 0x00130061, 0x1f060220,
    0x00341805, 0x00000000, 0xa0271f40, 0x25002202,
    0xe7240070, 0x02c02203, 0xa01b1d40, 0x02123412,
    0x27291b70, 0x22002703, 0x00030061, 0x2d060220,
    0x00342705, 0x00000000, 0x00130061, 0x2f060220,
    0x00342805, 0x00000000, 0x00031c61, 0x1d260220,
    0x00341b05, 0x00000000, 0x00131d61, 0x1f260220,
    0x00341c05, 0x00000000, 0x00041d52, 0x2b042e68,
    0x06262405, 0x29050224, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x21140000,
    0xfb001d24, 0x00000000, 0x00031961, 0x2d260220,
    0x00342b05, 0x00000000, 0x00131a61, 0x2f260220,
    0x00342c05, 0x00000000, 0xa0072240, 0x0b002102,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x00000000, 0xfb082d24, 0x000c0344,
    0x00033341, 0x20018220, 0x01460705, 0x00580058,
    0x60303341, 0x05800702, 0x00040061, 0x58054220,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x5a054220,
    0x00000000, 0x00000000, 0x00040061, 0x5c054220,
    0x00000000, 0x00000000, 0x00040061, 0x5e054220,
    0x00000000, 0x00000000, 0xfe2e3349, 0x05800703,
    0xa0321e40, 0x30010242, 0x00130041, 0x20018220,
    0x01460805, 0x00580058, 0x27191a70, 0x0210322b,
    0xa0370040, 0x04003203, 0x00133349, 0x2f058222,
    0x02460805, 0x00000058, 0x27391a70, 0x32003703,
    0x00030061, 0x3d060220, 0x00343705, 0x00000000,
    0x00130061, 0x3f060220, 0x00343805, 0x00000000,
    0x00041c52, 0x36040660, 0x0e2e0264, 0x19052e05,
    0xa03b1940, 0x36023902, 0x00031961, 0x3d260220,
    0x00343b05, 0x00000000, 0x00131a61, 0x3f260220,
    0x00343c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xfb083d24, 0x000c5844, 0xa03e3440, 0x02003203,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x27401970, 0x32003e03, 0x00030061, 0x44060220,
    0x00343e05, 0x00000000, 0x00130061, 0x46060220,
    0x00343f05, 0x00000000, 0xa0421b40, 0x36024002,
    0x00031961, 0x44260220, 0x00344205, 0x00000000,
    0x00131a61, 0x46260220, 0x00344305, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x48240000, 0xfb004424, 0x00040000,
    0xa04c2540, 0x00c04803, 0x274e1970, 0x48004c03,
    0x00030061, 0x52060220, 0x00344c05, 0x00000000,
    0x00130061, 0x54060220, 0x00344d05, 0x00000000,
    0xa050b540, 0x4a024e02, 0x00031961, 0x52260220,
    0x00345005, 0x00000000, 0x00131a61, 0x54260220,
    0x00345105, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x56140000,
    0xfb005224, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xa0592640, 0x00105603,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb085224, 0x00005914,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_BFS_build_qnodes_begin_batchable = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 1328,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_BFS_build_qnodes_begin_batchable_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_BFS_build_qnodes_begin_batchable_printfs,
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
      .push.cross_thread.dwords = 12,
      .push.cross_thread.regs = 2,
      .push.cross_thread.size = 64,
   },
   .args_size = 16,
   .arg_count = 2,
   .args = gfx125_bvh_build_BFS_build_qnodes_begin_batchable_args,
   .code = gfx125_bvh_build_BFS_build_qnodes_begin_batchable_code,
};
const char *gfx125_bvh_build_BFS_build_qnodes_begin_batchable_sha1 = "90f9ffe68e3e659c56e433e381805765051fedfd";

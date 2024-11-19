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

and(1)          g89<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g71<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g89UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g12<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g13<1>D         g71<8,8,1>D     0x00000004UD    { align1 1H I@2 };
add(8)          g12.8<1>UW      g12<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g15<1>D         g12<8,8,1>UW                    { align1 1H };
and(16)         g17<1>UD        g15<1,1,0>UD    0x0000000fUD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g20<1>D         g2<0,1,0>D      24D             { align1 1H compacted };
cmp.l.f0.0(16)  g22<1>UD        g20<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g73<2>UD        g20<4,4,1>UD                    { align1 1Q };
mov(8)          g75<2>UD        g21<4,4,1>UD                    { align1 2Q };
add(16)         g19<1>D         g13<1,1,0>D     g17<1,1,0>D     { align1 1H I@5 compacted };
add(16)         g24<1>D         -g22<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@4 compacted };
mov(8)          g73.1<2>UD      g24<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g75.1<2>UD      g25<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g25UD           g73UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
cmp.l.f0.0(16)  null<1>UD       g19<8,8,1>UD    g25<8,8,1>UD    { align1 1H @4 $1.dst };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
add(16)         g26<1>D         g2<0,1,0>D      36D             { align1 1H compacted };
add(16)         g32<1>D         g2<0,1,0>D      44D             { align1 1H compacted };
shl(16)         g42<1>D         g19<8,8,1>D     0x00000004UD    { align1 1H };
mov(16)         g3<1>UD         0x00000000UD                    { align1 1H };
mov(16)         g5<1>UD         0x00000000UD                    { align1 1H };
mov(16)         g9<1>UD         0x00000001UD                    { align1 1H };
cmp.l.f0.0(16)  g28<1>UD        g26<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@6 compacted };
mov(8)          g74<2>UD        g26<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g76<2>UD        g27<4,4,1>UD                    { align1 2Q $1.src };
add(16)         g37<1>D         g32<1,1,0>D     g42<1,1,0>D     { align1 1H I@7 compacted };
cmp.l.f0.0(16)  g41<1>UD        g32<1,1,0>UD    0x0000002cUD    { align1 1H compacted };
add(16)         g30<1>D         -g28<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@5 compacted };
cmp.l.f0.0(16)  g39<1>UD        g37<1,1,0>UD    g32<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g78<2>UD        g37<4,4,1>UD                    { align1 1Q };
mov(8)          g80<2>UD        g38<4,4,1>UD                    { align1 2Q };
mov(8)          g74.1<2>UD      g30<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g76.1<2>UD      g31<4,4,1>UD                    { align1 2Q I@5 };
add3(16)        g34<1>D         -g41<8,8,1>D    g2.1<0,1,0>D    -g39<1,1,1>D { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g31UD           g74UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(8)          g78.1<2>UD      g34<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g80.1<2>UD      g35<4,4,1>UD                    { align1 2Q I@2 };
add(16)         g7<1>D          g31<1,1,0>D     g19<1,1,0>D     { align1 1H $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g78UD           g3UD            0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $2 };
mul(8)          acc0<1>UD       g7<8,8,1>UD     0x0058UW        { align1 1Q $2.src };
mul(16)         g44<1>D         g7<1,1,0>D      88W             { align1 1H $2.src compacted };
mov(16)         g11<1>D         0D                              { align1 1H };
mov(16)         g13<1>D         0D                              { align1 1H };
mov(16)         g15<1>D         0D                              { align1 1H };
mov(16)         g17<1>D         0D                              { align1 1H };
mach(8)         g35<1>UD        g7<1,1,0>UD     0x00000058UD    { align1 1Q compacted AccWrEnable };
add(16)         g46<1>D         g2.2<0,1,0>D    g44<1,1,0>D     { align1 1H I@6 compacted };
mul(8)          acc0<1>UD       g8<8,8,1>UD     0x0058UW        { align1 2Q };
cmp.l.f0.0(16)  g48<1>UD        g46<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@2 compacted };
add(16)         g51<1>D         g46<1,1,0>D     64D             { align1 1H compacted };
mach(8)         g36<1>UD        g8<8,8,1>UD     0x00000058UD    { align1 2Q AccWrEnable };
cmp.l.f0.0(16)  g53<1>UD        g51<1,1,0>UD    g46<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g79<2>UD        g51<4,4,1>UD                    { align1 1Q $2.src };
mov(8)          g81<2>UD        g52<4,4,1>UD                    { align1 2Q $2.src };
add3(16)        g50<1>D         g2.3<0,1,0>D    g35<8,8,1>D     -g48<1,1,1>D { align1 1H I@4 };
add(16)         g55<1>D         -g53<1,1,0>D    g50<1,1,0>D     { align1 1H I@1 compacted };
mov(8)          g79.1<2>UD      g55<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g81.1<2>UD      g56<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g79UD           g11UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $3 };
add(16)         g56<1>D         g46<1,1,0>D     32D             { align1 1H compacted };
cmp.l.f0.0(16)  g58<1>UD        g56<1,1,0>UD    g46<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g80<2>UD        g56<4,4,1>UD                    { align1 1Q $3.src };
mov(8)          g82<2>UD        g57<4,4,1>UD                    { align1 2Q $3.src };
add(16)         g60<1>D         -g58<1,1,0>D    g50<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g80.1<2>UD      g60<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g82.1<2>UD      g61<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g61UD           g80UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
add(16)         g65<1>D         g61<1,1,0>D     12D             { align1 1H $4.dst compacted };
cmp.l.f0.0(16)  g67<1>UD        g65<1,1,0>UD    g61<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g84<2>UD        g65<4,4,1>UD                    { align1 1Q };
mov(8)          g86<2>UD        g66<4,4,1>UD                    { align1 2Q };
add(16)         g69<1>D         -g67<1,1,0>D    g63<1,1,0>D     { align1 1H @3 $4.dst compacted };
mov(8)          g84.1<2>UD      g69<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g86.1<2>UD      g70<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g70UD           g84UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g88<1>D         g70<1,1,0>D     1D              { align1 1H $5.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g84UD           g88UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_BFS_build_qnodes_begin_batchable_code[] = {
    0x80000065, 0x59058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x47050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00590c, 0x00340000,
    0x80030061, 0x0c054410, 0x00000000, 0x76543210,
    0x00041a69, 0x0d058660, 0x02464705, 0x00000004,
    0x640c1a40, 0x00800c95, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x0f050160,
    0x00460c05, 0x00000000, 0xe0111965, 0x00f00f03,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa0140040, 0x01810203, 0x27161970, 0x02101403,
    0x00030061, 0x49060220, 0x00341405, 0x00000000,
    0x00130061, 0x4b060220, 0x00341505, 0x00000000,
    0xa0131d40, 0x11000d02, 0xa0181c40, 0x02121612,
    0x00031961, 0x49260220, 0x00341805, 0x00000000,
    0x00131a61, 0x4b260220, 0x00341905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x19140000, 0xfb044924, 0x00040000,
    0x0004c170, 0x00010220, 0x52461305, 0x00461905,
    0x01040022, 0x0001c060, 0x000003b0, 0x000003b0,
    0xa01a0040, 0x02410203, 0xa0200040, 0x02c10203,
    0x00040069, 0x2a058660, 0x02461305, 0x00000004,
    0x00040061, 0x03054220, 0x00000000, 0x00000000,
    0x00040061, 0x05054220, 0x00000000, 0x00000000,
    0x00040061, 0x09054220, 0x00000000, 0x00000001,
    0x271c1e70, 0x02101a03, 0x00033161, 0x4a060220,
    0x00341a05, 0x00000000, 0x00133161, 0x4c060220,
    0x00341b05, 0x00000000, 0xa0251f40, 0x2a002002,
    0xe7290070, 0x02c02003, 0xa01e1d40, 0x02121c12,
    0x27271b70, 0x20002503, 0x00030061, 0x4e060220,
    0x00342505, 0x00000000, 0x00130061, 0x50060220,
    0x00342605, 0x00000000, 0x00031c61, 0x4a260220,
    0x00341e05, 0x00000000, 0x00131d61, 0x4c260220,
    0x00341f05, 0x00000000, 0x00041d52, 0x22042e68,
    0x06262905, 0x27050224, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x1f140000,
    0xfb044a24, 0x00040000, 0x00031961, 0x4e260220,
    0x00342205, 0x00000000, 0x00131a61, 0x50260220,
    0x00342305, 0x00000000, 0xa0072140, 0x13001f02,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x00000000, 0xfb0c4e24, 0x003c0344,
    0x00033241, 0x20018220, 0x01460705, 0x00580058,
    0x602c3241, 0x05800702, 0x00040061, 0x0b054660,
    0x00000000, 0x00000000, 0x00040061, 0x0d054660,
    0x00000000, 0x00000000, 0x00040061, 0x0f054660,
    0x00000000, 0x00000000, 0x00040061, 0x11054660,
    0x00000000, 0x00000000, 0xfe230049, 0x05800703,
    0xa02e1e40, 0x2c010242, 0x00130041, 0x20018220,
    0x01460805, 0x00580058, 0x27301a70, 0x02102e2b,
    0xa0330040, 0x04002e03, 0x00130049, 0x24058222,
    0x02460805, 0x00000058, 0x27351a70, 0x2e003303,
    0x00033261, 0x4f060220, 0x00343305, 0x00000000,
    0x00133261, 0x51060220, 0x00343405, 0x00000000,
    0x00041c52, 0x32040660, 0x0e2e0264, 0x30052305,
    0xa0371940, 0x32023502, 0x00031961, 0x4f260220,
    0x00343705, 0x00000000, 0x00131a61, 0x51260220,
    0x00343805, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xfb0c4f24, 0x003c0b44, 0xa0380040, 0x02002e03,
    0x273a1970, 0x2e003803, 0x00033361, 0x50060220,
    0x00343805, 0x00000000, 0x00133361, 0x52060220,
    0x00343905, 0x00000000, 0xa03c1b40, 0x32023a02,
    0x00031961, 0x50260220, 0x00343c05, 0x00000000,
    0x00131a61, 0x52260220, 0x00343d05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x3d240000, 0xfb045024, 0x000c0000,
    0xa0412440, 0x00c03d03, 0x27431970, 0x3d004103,
    0x00030061, 0x54060220, 0x00344105, 0x00000000,
    0x00130061, 0x56060220, 0x00344205, 0x00000000,
    0xa045b440, 0x3f024302, 0x00031961, 0x54260220,
    0x00344505, 0x00000000, 0x00131a61, 0x56260220,
    0x00344605, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x46140000,
    0xfb045424, 0x00040000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xa0582540, 0x00104603,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb0c5424, 0x00045814,
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
      .base.program_size = 1296,
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
const char *gfx125_bvh_build_BFS_build_qnodes_begin_batchable_sha1 = "3265276a211718865a64599a931b78a172a73e43";

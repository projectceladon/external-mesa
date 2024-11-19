#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_BFS_build_qnodes_init_scheduler_batched_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_BFS_build_qnodes_init_scheduler_batched_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_BFS_build_qnodes_init_scheduler_batched_args[] = {
   { 0, 8 },
   { 8, 4 },
   { 12, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g21<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g1UD            g21UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(8)          g1<1>D          g2<0,1,0>D      16D             { align1 1Q compacted };
add(8)          g7<1>D          g2<0,1,0>D      24D             { align1 1Q compacted };
mov(8)          g17<1>UD        g2.3<0,1,0>UD                   { align1 1Q };
cmp.l.f0.0(8)   g3<1>UD         g1<1,1,0>UD     g2<0,1,0>UD     { align1 1Q I@3 compacted };
mov(8)          g5<2>UD         g1<4,4,1>UD                     { align1 1Q };
cmp.l.f0.0(8)   g8<1>UD         g7<1,1,0>UD     g2<0,1,0>UD     { align1 1Q I@4 compacted };
mov(8)          g10<2>UD        g7<4,4,1>UD                     { align1 1Q };
add(8)          g4<1>D          -g3<1,1,0>D     g2.1<0,1,0>D    { align1 1Q I@4 compacted };
add(8)          g9<1>D          -g8<1,1,0>D     g2.1<0,1,0>D    { align1 1Q I@3 compacted };
mov(8)          g5.1<2>UD       g4<4,4,1>UD                     { align1 1Q I@2 };
mov(8)          g10.1<2>UD      g9<4,4,1>UD                     { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(8)         g6UD            g5UD            nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $1 };
add(8)          g19<1>D         g6<1,1,0>D      g7<1,1,0>D      { align1 1Q $1.dst compacted };
add(8)          g16<1>D         g2.2<0,1,0>D    -g19<1,1,0>D    { align1 1Q I@1 compacted };
mov(8)          g18<1>UD        g16<8,8,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g10UD           g16UD           0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $2 };
add(8)          g11<1>D         g16<1,1,0>D     15D             { align1 1Q $2.src compacted };
mov(8)          g20<1>UD        g16<8,8,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
shr(8)          g19<1>UD        g11<1,1,0>UD    0x00000004UD    { align1 1Q I@2 compacted };
mov(8)          g17.1<2>D       g2.1<0,1,0>D                    { align1 1Q $2.src };
mov(8)          g17<2>D         g2<0,1,0>D                      { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g17UD           g19UD           0x04001584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1Q $3 };
add(8)          g12<1>D         g2<0,1,0>D      40D             { align1 1Q compacted };
mov(8)          g20<1>UD        g2.3<0,1,0>UD                   { align1 1Q $3.src };
cmp.l.f0.0(8)   g13<1>UD        g12<1,1,0>UD    g2<0,1,0>UD     { align1 1Q I@2 compacted };
mov(8)          g15<2>UD        g12<4,4,1>UD                    { align1 1Q };
add(8)          g14<1>D         -g13<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@2 compacted };
mov(8)          g15.1<2>UD      g14<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g15UD           g20UD           0x04000584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1Q $4 };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(8)         nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1Q A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_BFS_build_qnodes_init_scheduler_batched_code[] = {
    0x80000065, 0x15058220, 0x02000004, 0xffffffc0,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00150c, 0x00340000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa1010040, 0x01010203, 0xa1070040, 0x01810203,
    0x00030061, 0x11050220, 0x00000264, 0x00000000,
    0x30031b70, 0x02100103, 0x00030061, 0x05060220,
    0x00340105, 0x00000000, 0x30081c70, 0x02100703,
    0x00030061, 0x0a060220, 0x00340705, 0x00000000,
    0xa1041c40, 0x02120312, 0xa1091b40, 0x02120812,
    0x00031a61, 0x05260220, 0x00340405, 0x00000000,
    0x00031a61, 0x0a260220, 0x00340905, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00034131, 0x06140000, 0xfb000514, 0x00040000,
    0xa1132140, 0x07000602, 0xa1101940, 0x13210242,
    0x00031961, 0x12050220, 0x00461005, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034231, 0x00000000, 0xfb080a14, 0x000c1024,
    0xa10b3240, 0x00f01003, 0x00030061, 0x14050220,
    0x00461005, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xe1131a68, 0x00400b03,
    0x00033261, 0x11260660, 0x00000224, 0x00000000,
    0x00031961, 0x11060660, 0x00000204, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034331, 0x00000000, 0xfb081114, 0x00041314,
    0xa10c0040, 0x02810203, 0x00033361, 0x14050220,
    0x00000264, 0x00000000, 0x300d1a70, 0x02100c03,
    0x00030061, 0x0f060220, 0x00340c05, 0x00000000,
    0xa10e1a40, 0x02120d12, 0x00031961, 0x0f260220,
    0x00340e05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034431, 0x00000000,
    0xfb080f14, 0x0000140c, 0x80030061, 0x7e050220,
    0x00460005, 0x00000000, 0x80030931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_BFS_build_qnodes_init_scheduler_batched = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 544,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_BFS_build_qnodes_init_scheduler_batched_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_BFS_build_qnodes_init_scheduler_batched_printfs,
      .base.uses_atomic_load_store = false,
      .local_size = { 1, 1, 1 },
      .prog_offset = { 0, 0, 0 },
      .prog_mask = 1,
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
   .args = gfx125_bvh_build_BFS_build_qnodes_init_scheduler_batched_args,
   .code = gfx125_bvh_build_BFS_build_qnodes_init_scheduler_batched_code,
};
const char *gfx125_bvh_build_BFS_build_qnodes_init_scheduler_batched_sha1 = "ae064fab2344c0d0de22f9d9a3d0ad7edcf3a0c8";

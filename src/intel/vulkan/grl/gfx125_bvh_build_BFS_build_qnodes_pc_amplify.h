#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_BFS_build_qnodes_pc_amplify_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_BFS_build_qnodes_pc_amplify_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g61<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g19<1>UD        g0.1<0,1,0>UD                   { align1 1H };
mov(8)          g10<1>UW        0x76543210UV                    { align1 WE_all 1Q };
add(1)          g62<1>UD        g61<0,1,0>UD    0x00000000UD    { align1 WE_all 1N I@3 compacted };
shl(16)         g35<1>D         g19<8,8,1>D     0x00000001UD    { align1 1H I@3 };
mov(8)          g10<1>UD        g10<8,8,1>UW                    { align1 WE_all 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g1UD            g62UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
add(8)          g11<1>UD        g10<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g10<1>UD        g10<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g10<1>UD        g10<1,1,0>UD    0x00000800UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
and(16)         g122<1>UD       g2.4<0,1,0>UD   0x00000002UD    { align1 1H compacted };
and(16)         g101<1>UD       g2.4<0,1,0>UD   0x00000001UD    { align1 1H compacted };
mov(8)          g43.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g45.1<2>F       g2.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g43<2>F         g2<0,1,0>F                      { align1 1Q F@2 compacted };
mov(8)          g45<2>F         g2<0,1,0>F                      { align1 2Q F@2 compacted };
add(8)          g103<1>D        g43<8,4,2>D     56D             { align1 1Q F@2 compacted };
add(8)          g110<1>D        g43<8,4,2>D     32D             { align1 1Q compacted };
add(8)          g116<1>D        g43<8,4,2>D     16D             { align1 1Q compacted };
add(8)          g23<1>D         g43<8,4,2>D     72D             { align1 1Q compacted };
add(8)          g39<1>D         g43<8,4,2>D     80D             { align1 1Q compacted };
add(8)          g104<1>D        g45<8,4,2>D     56D             { align1 2Q F@1 compacted };
add(8)          g111<1>D        g45<8,4,2>D     32D             { align1 2Q compacted };
add(8)          g117<1>D        g45<8,4,2>D     16D             { align1 2Q compacted };
add(8)          g24<1>D         g45<8,4,2>D     72D             { align1 2Q compacted };
add(8)          g40<1>D         g45<8,4,2>D     80D             { align1 2Q compacted };
send(16)        g77UD           g43UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(8)   g105<1>UD       g103<8,8,1>UD   g43<8,4,2>UD    { align1 1Q I@7 };
cmp.l.f0.0(8)   g112<1>UD       g110<8,8,1>UD   g43<8,4,2>UD    { align1 1Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
cmp.l.f0.0(8)   g106<1>UD       g104<8,8,1>UD   g45<8,4,2>UD    { align1 2Q I@7 };
cmp.l.f0.0(8)   g118<1>UD       g116<8,8,1>UD   g43<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(8)   g113<1>UD       g111<8,8,1>UD   g45<8,4,2>UD    { align1 2Q I@7 };
cmp.l.f0.0(8)   g119<1>UD       g117<8,8,1>UD   g45<8,4,2>UD    { align1 2Q I@7 };
add(8)          g107<1>D        -g105<8,8,1>D   g43.1<8,4,2>D   { align1 1Q I@6 };
add(8)          g114<1>D        -g112<8,8,1>D   g43.1<8,4,2>D   { align1 1Q I@6 };
add(8)          g108<1>D        -g106<8,8,1>D   g45.1<8,4,2>D   { align1 2Q I@6 };
add(8)          g120<1>D        -g118<8,8,1>D   g43.1<8,4,2>D   { align1 1Q I@6 };
add(8)          g115<1>D        -g113<8,8,1>D   g45.1<8,4,2>D   { align1 2Q I@6 };
add(8)          g121<1>D        -g119<8,8,1>D   g45.1<8,4,2>D   { align1 2Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g10UD           g77UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $2 };
mov(8)          g12<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g12<1>UD        g12<8,8,1>UW                    { align1 WE_all 1Q I@1 };
add(8)          g13<1>UD        g12<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g12<1>UD        g12<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g12<1>UD        g12<1,1,0>UD    0x00000840UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g12UD           g79UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $3 };
mov(8)          g14<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g14<1>UD        g14<8,8,1>UW                    { align1 WE_all 1Q I@1 };
add(8)          g15<1>UD        g14<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g14<1>UD        g14<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g14<1>UD        g14<1,1,0>UD    0x00000880UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g14UD           g81UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $4 };
mov(8)          g16<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g16<1>UD        g16<8,8,1>UW                    { align1 WE_all 1Q I@1 };
add(8)          g17<1>UD        g16<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g16<1>UD        g16<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g16<1>UD        g16<1,1,0>UD    0x000008c0UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g16UD           g83UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $5 };
mov(8)          g25<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g47<2>UD        g110<4,4,1>UD                   { align1 1Q };
mov(8)          g49<2>UD        g111<4,4,1>UD                   { align1 2Q };
mov(8)          g25<1>UD        g25<8,8,1>UW                    { align1 WE_all 1Q I@3 };
mov(8)          g47.1<2>UD      g114<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g49.1<2>UD      g115<4,4,1>UD                   { align1 2Q I@3 };
add(8)          g26<1>UD        g25<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g13UD           g47UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $6 };
shl(16)         g25<1>UD        g25<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g25<1>UD        g25<1,1,0>UD    0x00000540UD    { align1 WE_all 1H I@1 compacted };
add(16)         g124<1>D        g13<1,1,0>D     192D            { align1 1H $6.dst compacted };
add(16)         g5<1>D          g13<1,1,0>D     40D             { align1 1H compacted };
cmp.l.f0.0(16)  g126<1>UD       g124<1,1,0>UD   g13<1,1,0>UD    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g7<1>UD         g5<1,1,0>UD     g13<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g49<2>UD        g5<4,4,1>UD                     { align1 1Q $6.src };
mov(8)          g51<2>UD        g6<4,4,1>UD                     { align1 2Q };
add(16)         g3<1>D          -g126<1,1,0>D   g15<1,1,0>D     { align1 1H @4 $6.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g9<1>D          -g7<1,1,0>D     g15<1,1,0>D     { align1 1H I@4 compacted };
mov(8)          g51.1<2>UD      g10<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g49.1<2>UD      g9<4,4,1>UD                     { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g11UD           g49UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
shl(16)         g17<1>D         g11<8,8,1>D     0x00000006UD    { align1 1H $7.dst };
add(16)         g21<1>D         g13<1,1,0>D     g17<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g25UD           g21UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $8 };
mov(8)          g28<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g65<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g28<1>UD        g28<8,8,1>UW                    { align1 WE_all 1Q I@2 };
mov(8)          g65<1>UD        g65<8,8,1>UW                    { align1 WE_all 1Q I@2 };
add(8)          g29<1>UD        g28<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
add(8)          g66<1>UD        g65<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
shl(16)         g28<1>UD        g28<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
shl(16)         g65<1>UD        g65<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
add(16)         g28<1>UD        g28<1,1,0>UD    0x00000540UD    { align1 WE_all 1H I@2 compacted };
add(16)         g65<1>UD        g65<1,1,0>UD    0x00000400UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g26UD           g28UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
cmp.l.f0.0(16)  g18<1>UD        g26<1,1,0>UD    g13<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(8)   g25<1>UD        g23<8,8,1>UD    g43<8,4,2>UD    { align1 1Q $8.src };
cmp.l.f0.0(8)   g26<1>UD        g24<8,8,1>UD    g45<8,4,2>UD    { align1 2Q };
cmp.l.f0.0(8)   g41<1>UD        g39<8,8,1>UD    g43<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(8)   g42<1>UD        g40<8,8,1>UD    g45<8,4,2>UD    { align1 2Q };
add(16)         g63<1>D         -g18<1,1,0>D    g15<1,1,0>D     { align1 1H I@5 compacted };
add(8)          g31<1>D         -g25<8,8,1>D    g43.1<8,4,2>D   { align1 1Q I@5 };
add(8)          g32<1>D         -g26<8,8,1>D    g45.1<8,4,2>D   { align1 2Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(8)          g47<1>D         -g41<8,8,1>D    g43.1<8,4,2>D   { align1 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $6.src };
add(8)          g48<1>D         -g42<8,8,1>D    g45.1<8,4,2>D   { align1 2Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g65UD           g63UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $10 };
mov(8)          g109<1>UW       0x76543210V                     { align1 WE_all 1Q };
mov(8)          g127<1>UW       0x76543210UV                    { align1 WE_all 1Q };
add(8)          g109.8<1>UW     g109<1,1,0>UW   0x0008UW        { align1 WE_all 1Q I@2 compacted };
mov(8)          g50<2>UD        g23<4,4,1>UD                    { align1 1Q $7.src };
mov(8)          g52<2>UD        g24<4,4,1>UD                    { align1 2Q $7.src };
mov(8)          g5.1<2>F        g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g127<1>UD       g127<8,8,1>UW                   { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
mov(16)         g25<1>D         g109<8,8,1>UW                   { align1 1H };
mov(8)          g50.1<2>UD      g31<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g52.1<2>UD      g32<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g5<2>F          g2.2<0,1,0>F                    { align1 1Q F@1 compacted };
shl(8)          g127<1>UD       g127<1,1,0>UD   0x00000002UD    { align1 WE_all 1Q I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
shr(16)         g21<1>UD        g25<1,1,0>UD    0x00000003UD    { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
and(16)         g27<1>UD        g25<1,1,0>UD    0x00000007UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(16)        g33UD           g50UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $11 };
mov(8)          g126<1>UD       g5.1<8,4,2>UD                   { align1 1Q F@1 };
add(8)          g127<1>UD       g127<1,1,0>UD   0x00000500UD    { align1 WE_all 1Q I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g29<1>UD        g21<16,8,2>UW                   { align1 1H I@4 };
mov(8)          g53<2>UD        g39<4,4,1>UD                    { align1 1Q $11.src };
mov(8)          g55<2>UD        g40<4,4,1>UD                    { align1 2Q };
mov(8)          g53.1<2>UD      g47<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g55.1<2>UD      g48<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g49UD           g53UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $12 };
add3(16)        g37<1>D         g33<8,8,1>D     g35<8,8,1>D     g29<1,1,1>D { align1 1H @5 $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(16)         g51<1>D         g37<1,1,0>D     -1D             { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g53<1>UD        g37<1,1,0>UD    g49<1,1,0>UD    { align1 1H $12.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
(+f0.0) sel(16) g55<1>UD        g37<1,1,0>UD    g51<1,1,0>UD    { align1 1H I@2 compacted };
shl(16)         g57<1>D         g55<8,8,1>D     0x00000003UD    { align1 1H I@1 };
shr(16)         g59<1>UD        g55<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
add(8)          g61<1>D         g5<8,4,2>D      g57<1,1,0>D     { align1 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
cmp.l.f0.0(8)   g63<1>UD        g61<8,8,1>UD    g5<8,4,2>UD     { align1 1Q I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000004fUD    { align1 WE_all 1N };
send(8)         nullUD          g127UD          g126UD          0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 1Q @1 $13 };
mov(8)          g7.1<2>F        g2.3<0,1,0>F                    { align1 2Q };
mov(8)          g9<1>UW         0x76543210UV                    { align1 WE_all 2Q };
mov(8)          g7<2>F          g2.2<0,1,0>F                    { align1 2Q F@1 compacted };
mov(8)          g9<1>UD         g9<8,8,1>UW                     { align1 WE_all 2Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
add(8)          g62<1>D         g7<8,4,2>D      g58<1,1,0>D     { align1 2Q A@1 compacted };
mov(8)          g2<1>UD         g7.1<8,4,2>UD                   { align1 2Q F@1 };
shl(8)          g9<1>UD         g9<8,8,1>UD     0x00000002UD    { align1 WE_all 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $10.src };
cmp.l.f0.0(8)   g64<1>UD        g62<8,8,1>UD    g7<8,4,2>UD     { align1 2Q I@3 };
add(8)          g9<1>UD         g9<8,8,1>UD     0x00000520UD    { align1 WE_all 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 3N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000004fUD    { align1 WE_all 3N };
send(8)         nullUD          g9UD            g2UD            0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 2Q @1 $14 };
mov(8)          g17<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g75<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g17<1>UD        g17<8,8,1>UW                    { align1 WE_all 1Q I@2 };
mov(8)          g48<2>UD        g116<4,4,1>UD                   { align1 1Q };
mov(8)          g50<2>UD        g117<4,4,1>UD                   { align1 2Q };
mov(8)          g38<2>UD        g61<4,4,1>UD                    { align1 1Q };
mov(8)          g40<2>UD        g62<4,4,1>UD                    { align1 2Q };
mov(8)          g75<1>UD        g75<8,8,1>UW                    { align1 WE_all 1Q I@6 };
add(8)          g18<1>UD        g17<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@6 compacted };
mov(8)          g48.1<2>UD      g120<4,4,1>UD                   { align1 1Q I@6 };
mov(8)          g50.1<2>UD      g121<4,4,1>UD                   { align1 2Q I@6 };
add(8)          g76<1>UD        g75<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@4 compacted };
shl(16)         g17<1>UD        g17<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@4 compacted };
shl(16)         g75<1>UD        g75<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
add(16)         g17<1>UD        g17<1,1,0>UD    0x00000500UD    { align1 WE_all 1H I@2 compacted };
add(16)         g75<1>UD        g75<1,1,0>UD    0x00000700UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g10UD           g17UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
send(16)        g17UD           g48UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
add3(16)        g65<1>D         g10<8,8,1>D     g59<8,8,1>D     -g63<1,1,1>D { align1 1H $10.src };
add(16)         g91<1>D         g17<1,1,0>D     32D             { align1 1H $0.dst compacted };
add(16)         g95<1>D         g17<1,1,0>D     56D             { align1 1H compacted };
mov(8)          g40.1<2>UD      g66<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g38.1<2>UD      g65<4,4,1>UD                    { align1 1Q I@4 };
cmp.l.f0.0(16)  g69<1>UD        g91<1,1,0>UD    g17<1,1,0>UD    { align1 1H I@4 compacted };
cmp.l.f0.0(16)  g72<1>UD        g95<1,1,0>UD    0x00000038UD    { align1 1H I@4 compacted };
add(16)         g93<1>D         -g69<1,1,0>D    g19<1,1,0>D     { align1 1H @2 $0.dst compacted };
add(16)         g97<1>D         -g72<1,1,0>D    g19<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g70UD           g38UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g75UD           g70UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $2 };
mov(8)          g77<1>UW        0x76543210UV                    { align1 WE_all 1Q $2.src };
mov(8)          g77<1>UD        g77<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(8)          g78<1>UD        g77<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g77<1>UD        g77<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g77<1>UD        g77<1,1,0>UD    0x00000740UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g77UD           g72UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $3 };
mov(8)          g80<1>UW        0x76543210UV                    { align1 WE_all 1Q $3.src };
mov(8)          g83<1>UW        0x76543210UV                    { align1 WE_all 1Q $5.src };
mov(8)          g86<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g116<1>UW       0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g80<1>UD        g80<8,8,1>UW                    { align1 WE_all 1Q I@4 };
mov(8)          g83<1>UD        g83<8,8,1>UW                    { align1 WE_all 1Q I@4 };
mov(8)          g86<1>UD        g86<8,8,1>UW                    { align1 WE_all 1Q I@4 };
mov(8)          g116<1>UD       g116<8,8,1>UW                   { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(8)          g81<1>UD        g80<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(8)          g84<1>UD        g83<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@4 compacted };
add(8)          g87<1>UD        g86<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@4 compacted };
add(8)          g117<1>UD       g116<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@4 compacted };
shl(16)         g80<1>UD        g80<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@4 compacted };
shl(16)         g83<1>UD        g83<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@4 compacted };
shl(16)         g86<1>UD        g86<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@4 compacted };
shl(16)         g116<1>UD       g116<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@4 compacted };
add(16)         g80<1>UD        g80<1,1,0>UD    0x00000700UD    { align1 WE_all 1H I@4 compacted };
add(16)         g83<1>UD        g83<1,1,0>UD    0x00000700UD    { align1 WE_all 1H I@4 compacted };
add(16)         g86<1>UD        g86<1,1,0>UD    0x00000740UD    { align1 WE_all 1H I@4 compacted };
add(16)         g116<1>UD       g116<1,1,0>UD   0x000004c0UD    { align1 WE_all 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g78UD           g80UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g81UD           g83UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g84UD           g86UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
shl(16)         g70<1>D         g78<8,8,1>D     0x00000005UD    { align1 1H $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
shl(16)         g114<1>D        g84<8,8,1>D     0x00000006UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g73<1>D         g95<1,1,0>D     g70<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
shr(16)         g71<1>UD        g81<1,1,0>UD    0x0000001bUD    { align1 1H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g75<1>UD        g73<1,1,0>UD    g95<1,1,0>UD    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add3(16)        g77<1>D         g97<8,8,1>D     g71<8,8,1>D     -g75<1,1,1>D { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g116UD          g114UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $7 };
mov(8)          g119<1>UW       0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g89<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g32<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g33<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g119<1>UD       g119<8,8,1>UW                   { align1 WE_all 1Q I@4 };
mov(8)          g89<1>UD        g89<8,8,1>UW                    { align1 WE_all 1Q I@4 };
mov(16)         g60<2>W         -g53<8,8,1>D                    { align1 1H };
mov(8)          g32<1>UD        g32<8,8,1>UW                    { align1 WE_all 1Q I@5 };
mov(8)          g33<1>UD        g33<8,8,1>UW                    { align1 WE_all 1Q I@5 };
add(8)          g120<1>UD       g119<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@5 compacted };
add(8)          g90<1>UD        g89<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@5 compacted };
shl(8)          g32<1>UD        g32<1,1,0>UD    0x00000002UD    { align1 WE_all 1Q I@4 compacted };
shl(8)          g33<1>UD        g33<1,1,0>UD    0x00000002UD    { align1 WE_all 1Q I@4 compacted };
shl(16)         g119<1>UD       g119<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@4 compacted };
shl(16)         g89<1>UD        g89<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@4 compacted };
add(8)          g32<1>UD        g32<1,1,0>UD    0x00000680UD    { align1 WE_all 1Q I@4 compacted };
add(8)          g33<1>UD        g33<1,1,0>UD    0x00000680UD    { align1 WE_all 1Q I@4 compacted };
add(16)         g119<1>UD       g119<1,1,0>UD   0x000004c0UD    { align1 WE_all 1H I@4 compacted };
add(16)         g89<1>UD        g89<1,1,0>UD    0x00000740UD    { align1 WE_all 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(8)         g31UD           g32UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1Q @1 $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g117UD          g119UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g87UD           g89UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
and(16)         g31<1>UW        g60<16,8,2>UW   0x0001UW        { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
add(16)         g81<1>D         g124<1,1,0>D    g117<1,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
shr(16)         g99<1>UD        g87<1,1,0>UD    0x0000001aUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000004fUD    { align1 WE_all 1N };
send(8)         nullUD          g33UD           g31UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1Q @1 $11 };
mov(8)          g35<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g35<1>UD        g35<8,8,1>UW                    { align1 WE_all 1Q I@1 };
mov(8)          g39<2>UD        g73<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g41<2>UD        g74<4,4,1>UD                    { align1 2Q $1.src };
shl(8)          g35<1>UD        g35<1,1,0>UD    0x00000002UD    { align1 WE_all 1Q I@3 compacted };
mov(8)          g39.1<2>UD      g77<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g41.1<2>UD      g78<4,4,1>UD                    { align1 2Q I@3 };
add(8)          g35<1>UD        g35<1,1,0>UD    0x00000680UD    { align1 WE_all 1Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(8)         g34UD           g35UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1Q @1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
mov(16)         g68<1>W         g34<32,16,2>B                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g31UD           g39UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $13 };
mov(8)          g39<1>UW        0x76543210UV                    { align1 WE_all 1Q $13.src };
mov(8)          g40<1>UW        0x76543210UV                    { align1 WE_all 1Q $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.nz.f0.0(16) g83<1>W         g68<16,16,1>W   0W              { align1 1H I@3 };
mov(8)          g39<1>UD        g39<8,8,1>UW                    { align1 WE_all 1Q I@3 };
mov(8)          g40<1>UD        g40<8,8,1>UW                    { align1 WE_all 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g79<1>D         g83<8,8,1>W                     { align1 1H I@3 };
shl(8)          g39<1>UD        g39<1,1,0>UD    0x00000002UD    { align1 WE_all 1Q I@3 compacted };
shl(8)          g40<1>UD        g40<1,1,0>UD    0x00000002UD    { align1 WE_all 1Q I@3 compacted };
mov(16)         g61<2>W         -g79<8,8,1>D                    { align1 1H I@3 };
add(8)          g39<1>UD        g39<1,1,0>UD    0x000006a0UD    { align1 WE_all 1Q I@3 compacted };
add(8)          g40<1>UD        g40<1,1,0>UD    0x000006a0UD    { align1 WE_all 1Q I@3 compacted };
and(16)         g85<1>UW        g61<16,8,2>UW   0x0001UW        { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(8)         g38UD           g39UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1Q @1 $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g86<1>W         g85<32,16,2>B                   { align1 1H I@1 };
and(16)         g87<1>UD        g33<8,8,1>UD    0x00010000UD    { align1 1H $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g120<1>UD       g33.3<32,8,4>UB                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
cmp.z.f0.0(16)  g89<1>D         g87<1,1,0>D     0D              { align1 1H I@2 compacted };
cmp.nz.f0.0(16) g105<1>W        g86<16,16,1>W   0W              { align1 1H I@4 };
cmp.nz.f0.0(16) g111<1>D        g87<1,1,0>D     0D              { align1 1H compacted };
cmp.nz.f0.0(16) g117<1>D        g122<1,1,0>D    0D              { align1 1H compacted };
mov(16)         g77<1>D         g105<8,8,1>W                    { align1 1H I@3 };
mov(16)         g63<2>W         -g117<8,8,1>D                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
and(16)         g113<1>UD       g77<1,1,0>UD    g111<1,1,0>UD   { align1 1H I@2 compacted };
and(16)         g110<1>UD       g77<1,1,0>UD    g89<1,1,0>UD    { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
and(16)         g119<1>UW       g63<16,8,2>UW   0x0001UW        { align1 1H I@3 };
mov.z.f0.0(16)  null<1>W        g119<32,16,2>B                  { align1 1H I@1 };
mov(16)         g62<2>W         -g113<8,8,1>D                   { align1 1H I@4 };
(-f0.0) sel(16) g122<1>UD       g120<8,8,1>UD   0x000000ffUD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
and(16)         g115<1>UW       g62<16,8,2>UW   0x0001UW        { align1 1H I@2 };
mov(16)         g64<4>UB        g122<8,8,1>UD                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g116<1>W        g115<32,16,2>B                  { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g126<1>UW       g64<32,8,4>UB                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
cmp.nz.f0.0(16) g127<1>W        g116<16,16,1>W  0W              { align1 1H I@2 };
mov.nz.f0.0(16) g79<1>D         g127<8,8,1>W                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
(+f0.0) sel(16) g38<1>UW        g126<1,1,0>UW   0x00ffUW        { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000004fUD    { align1 WE_all 1N };
send(8)         nullUD          g40UD           g38UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1Q @1 $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cmp.l.f0.0(16)  g1<1>UD         g81<1,1,0>UD    g124<1,1,0>UD   { align1 1H $14.src compacted };
mov(8)          g114<1>UW       0x76543210UV                    { align1 WE_all 1Q };
add3(16)        g112<1>D        g3<8,8,1>D      g99<8,8,1>D     -g1<1,1,1>D { align1 1H I@2 };
mov(8)          g114<1>UD       g114<8,8,1>UW                   { align1 WE_all 1Q I@2 };
add(8)          g115<1>UD       g114<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g114<1>UD       g114<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g114<1>UD       g114<1,1,0>UD   0x00000780UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g114UD          g112UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $15 };
mov(16)         g65<2>W         -g110<8,8,1>D                   { align1 1H };
mov(8)          g110<1>UW       0x76543210UV                    { align1 WE_all 1Q };
and(16)         g4<1>UW         g65<16,8,2>UW   0x0001UW        { align1 1H I@2 };
mov(8)          g110<1>UD       g110<8,8,1>UW                   { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         g9<1>W          g4<32,16,2>B                    { align1 1H I@2 };
add(8)          g111<1>UD       g110<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@2 compacted };
cmp.nz.f0.0(16) g10<1>W         g9<16,16,1>W    0W              { align1 1H I@2 };
shl(16)         g110<1>UD       g110<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@2 compacted };
cmp.nz.f0.0(16) g105<1>D        g101<1,1,0>D    0D              { align1 1H compacted };
mov(16)         g83<1>D         g10<8,8,1>W                     { align1 1H I@3 };
add(16)         g110<1>UD       g110<1,1,0>UD   0x00000480UD    { align1 WE_all 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g110UD          g105UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $0 };
mov.nz.f0.0(16) null<1>D        g83<8,8,1>D                     { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(8)          g116<1>UW       0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g118<1>UW       0x76543210UV                    { align1 WE_all 2Q };
mov(8)          g68<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g70<1>UW        0x76543210UV                    { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(8)          g35<2>UD        g103<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $14.src };
mov(8)          g37<2>UD        g104<4,4,1>UD                   { align1 2Q };
mov(8)          g1<2>UD         g81<4,4,1>UD                    { align1 1Q };
mov(8)          g3<2>UD         g82<4,4,1>UD                    { align1 2Q };
mov(8)          g116<1>UD       g116<8,8,1>UW                   { align1 WE_all 1Q I@7 };
mov(8)          g118<1>UD       g118<8,8,1>UW                   { align1 WE_all 2Q I@7 };
mov(16)         g87<2>UW        g25<8,8,1>UD                    { align1 1H };
mov(8)          g68<1>UD        g68<8,8,1>UW                    { align1 WE_all 1Q I@7 };
mov(8)          g70<1>UD        g70<8,8,1>UW                    { align1 WE_all 1Q I@7 };
mov(8)          g35.1<2>UD      g107<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g37.1<2>UD      g108<4,4,1>UD                   { align1 2Q I@7 };
shl(8)          g116<1>UD       g116<1,1,0>UD   0x00000002UD    { align1 WE_all 1Q I@7 compacted };
shl(8)          g118<1>UD       g118<8,8,1>UD   0x00000002UD    { align1 WE_all 2Q I@7 };
add(8)          g69<1>UD        g68<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@6 compacted };
add(8)          g71<1>UD        g70<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g9UD            g35UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $13 };
add(8)          g116<1>UD       g116<1,1,0>UD   0x00000780UD    { align1 WE_all 1Q I@4 compacted };
add(8)          g118<1>UD       g118<8,8,1>UD   0x000007a0UD    { align1 WE_all 2Q I@4 };
shl(16)         g68<1>UD        g68<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@4 compacted };
shl(16)         g70<1>UD        g70<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(8)         g115UD          g116UD          nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1Q @1 $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@3 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 3N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 3N };
send(8)         g117UD          g118UD          nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 2Q @1 $2 };
add(16)         g68<1>UD        g68<1,1,0>UD    0x000006c0UD    { align1 WE_all 1H I@2 compacted };
add(16)         g70<1>UD        g70<1,1,0>UD    0x000006c0UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g66UD           g68UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $3 };
mov(16)         g85<2>UW        g11<8,8,1>UD                    { align1 1H $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mov(8)          g1.1<2>UD       g115<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $2.dst };
mov(8)          g3.1<2>UD       g117<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
mov(16)         g66<2>UW        g27<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g70UD           g66UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $4 };
mov(16)         g63<1>D         0D                              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g65<1>D         8D                              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g67<1>D         16D                             { align1 1H };
mov(16)         g89<1>D         1D                              { align1 1H };
mov(8)          g99<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g99<1>UD        g99<8,8,1>UW                    { align1 WE_all 1Q I@1 };
add(8)          g100<1>UD       g99<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g99<1>UD        g99<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g99<1>UD        g99<1,1,0>UD    0x00000440UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g99UD           g89UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g69<1>D         56D                             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g71<1>D         32D                             { align1 1H };
mov(16)         g73<1>D         40D                             { align1 1H };
mov(16)         g89<1>D         255D                            { align1 1H $0.src };
mov(16)         g75<1>D         4D                              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
mov(8)          g37<1>UW        0x76543210UV                    { align1 WE_all 1Q $13.src };
mov(16)         g99<2>UW        g33<8,8,1>UD                    { align1 1H $0.src };
mov(8)          g37<1>UD        g37<8,8,1>UW                    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(8)          g38<1>UD        g37<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g37<1>UD        g37<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g37<1>UD        g37<1,1,0>UD    0x000006c0UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g35UD           g37UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
cmp.l.f0.0(16)  null<1>UW       g35<16,8,2>UW   g99<16,8,2>UW   { align1 1H I@5 };
mov(16)         g35<1>UD        g27<16,8,2>UW                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
(+f0.0) sel(16) g37<1>UD        g35<1,1,0>UD    0x00000000UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g51<1>D         g31<1,1,0>D     g37<1,1,0>D     { align1 1H @1 $13.dst compacted };
mov(8)          g37<1>UW        0x76543210UV                    { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
shl(16)         g41<1>D         g51<8,8,1>D     0x00000002UD    { align1 1H I@2 };
shr(16)         g47<1>UD        g51<1,1,0>UD    0x0000001eUD    { align1 1H $0.src compacted };
mov(8)          g37<1>UD        g37<8,8,1>UW                    { align1 WE_all 1Q I@3 };
add(8)          g38<1>UD        g37<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g37<1>UD        g37<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g37<1>UD        g37<1,1,0>UD    0x00000800UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g35UD           g37UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $6 };
mov(8)          g37<1>UW        0x76543210UV                    { align1 WE_all 1Q $6.src };
mov(8)          g37<1>UD        g37<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(8)          g38<1>UD        g37<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g37<1>UD        g37<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g37<1>UD        g37<1,1,0>UD    0x00000800UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(16)         g39<1>D         g35<1,1,0>D     g41<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g35UD           g37UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $7 };
mov(8)          g37<1>UW        0x76543210UV                    { align1 WE_all 1Q $7.src };
mov(8)          g37<1>UD        g37<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(8)          g38<1>UD        g37<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g37<1>UD        g37<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g37<1>UD        g37<1,1,0>UD    0x00000840UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
cmp.l.f0.0(16)  g100<1>UD       g39<1,1,0>UD    g35<1,1,0>UD    { align1 1H I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g35UD           g37UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
add3(16)        g102<1>D        g35<8,8,1>D     g47<8,8,1>D     -g100<1,1,1>D { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g35<2>UD        g39<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $8.src };
mov(8)          g37<2>UD        g40<4,4,1>UD                    { align1 2Q };
mov(8)          g35.1<2>UD      g102<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g37.1<2>UD      g103<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g53UD           g35UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $9 };
mov(8)          g37<1>UW        0x76543210UV                    { align1 WE_all 1Q $9.src };
mov(8)          g37<1>UD        g37<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(8)          g38<1>UD        g37<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g37<1>UD        g37<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g37<1>UD        g37<1,1,0>UD    0x00000880UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g35UD           g37UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $10 };
mov(8)          g37<1>UW        0x76543210UV                    { align1 WE_all 1Q $10.src };
mov(8)          g37<1>UD        g37<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(8)          g38<1>UD        g37<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g37<1>UD        g37<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g37<1>UD        g37<1,1,0>UD    0x00000880UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shl(16)         g49<1>D         g53<8,8,1>D     0x00000005UD    { align1 1H $9.dst };
shr(16)         g55<1>UD        g53<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
add(16)         g39<1>D         g35<1,1,0>D     g49<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g35UD           g37UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $11 };
mov(8)          g37<1>UW        0x76543210UV                    { align1 WE_all 1Q $11.src };
add(16)         g99<1>D         g39<1,1,0>D     16D             { align1 1H I@2 compacted };
mov(8)          g37<1>UD        g37<8,8,1>UW                    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(8)          g38<1>UD        g37<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g37<1>UD        g37<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g37<1>UD        g37<1,1,0>UD    0x000008c0UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
cmp.l.f0.0(16)  g47<1>UD        g39<1,1,0>UD    g35<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  g49<1>UD        g99<1,1,0>UD    0x00000010UD    { align1 1H I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g35UD           g37UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
add3(16)        g41<1>D         g35<8,8,1>D     g55<8,8,1>D     -g47<1,1,1>D { align1 1H I@2 };
add(16)         g47<1>D         g13<1,1,0>D     16D             { align1 1H compacted };
add(16)         g101<1>D        -g49<1,1,0>D    g41<1,1,0>D     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g35<1>UD        g47<1,1,0>UD    g13<1,1,0>UD    { align1 1H I@2 compacted };
add(16)         g49<1>D         -g35<1,1,0>D    g15<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(8)          g35<2>UD        g47<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $12.src };
mov(8)          g37<2>UD        g48<4,4,1>UD                    { align1 2Q };
mov(8)          g35.1<2>UD      g49<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g37.1<2>UD      g50<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g47UD           g35UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shl(16)         g105<1>D        g47<8,8,1>D     0x00000006UD    { align1 1H $13.dst };
mov(8)          g47<2>UD        g39<4,4,1>UD                    { align1 1Q };
mov(8)          g49<2>UD        g40<4,4,1>UD                    { align1 2Q };
mov(8)          g47.1<2>UD      g41<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g49.1<2>UD      g42<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g35UD           g47UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $14 };
mov(8)          g47<2>UD        g99<4,4,1>UD                    { align1 1Q $14.src };
mov(8)          g49<2>UD        g100<4,4,1>UD                   { align1 2Q $14.src };
mov(8)          g47.1<2>UD      g101<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g49.1<2>UD      g102<4,4,1>UD                   { align1 2Q I@2 };
mov(16)         g55<1>UD        g35<8,8,1>UD                    { align1 1H $14.dst };
mov(16)         g57<1>UD        g37<8,8,1>UD                    { align1 1H $14.dst };
mov(16)         g59<1>UD        g39<8,8,1>UD                    { align1 1H $14.dst };
mov(16)         g61<1>UD        g41<8,8,1>UD                    { align1 1H $14.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g35UD           g47UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $15 };
mov(8)          g49<1>UW        0x76543210UV                    { align1 WE_all 1Q $15.src };
mov(8)          g49<1>UD        g49<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(8)          g50<1>UD        g49<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g49<1>UD        g49<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g49<1>UD        g49<1,1,0>UD    0x000007c0UD    { align1 WE_all 1H I@1 compacted };
mov(16)         g99<1>UD        g35<8,8,1>UD                    { align1 1H $15.dst };
mov(16)         g101<1>UD       g37<8,8,1>UD                    { align1 1H $15.dst };
mov(16)         g103<1>UD       g39<8,8,1>UD                    { align1 1H $15.dst };
mov(16)         g47<1>UD        g41<8,8,1>UD                    { align1 1H $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g49UD           g47UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $0 };
mov(16)         g35<1>UD        g9<16,8,2>UW                    { align1 1H $13.dst };
mul(16)         g37<1>UD        g31<8,8,1>UD    g35<16,8,2>UW   { align1 1H I@1 };
add(16)         g35<1>D         g105<1,1,0>D    g37<1,1,0>D     { align1 1H I@1 compacted };
mov(8)          g37<1>UW        0x76543210UV                    { align1 WE_all 1Q };
add3(16)        g39<1>D         g13<8,8,1>D     g35<8,8,1>D     -g81<1,1,1>D { align1 1H I@2 };
mov(8)          g37<1>UD        g37<8,8,1>UW                    { align1 WE_all 1Q I@2 };
asr(16)         g35<1>D         g39<8,8,1>D     0x00000006UD    { align1 1H I@2 };
add(8)          g38<1>UD        g37<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
shl(16)         g37<1>UD        g37<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g37<1>UD        g37<1,1,0>UD    0x00000640UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g37UD           g35UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $13 };
mov(16)         g105<1>UD       g33<16,8,2>UW                   { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
mov(1)          g107<2>UW       0x00000000UD                    { align1 WE_all 1N };
mov(1)          f0<1>UW         g107<0,1,0>UW                   { align1 WE_all 1N I@1 };
cmp.nz.f0.0(16) null<1>UD       g79<8,8,1>UD    0x00000000UD    { align1 1H };
mov.nz.f0.0(16) null<1>UD       f0<0,1,0>UW                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL2              { align1 1H };
mov(16)         g35<1>UD        g33<16,8,2>UW                   { align1 1H $13.src };
mov(8)          g37<1>UW        0x76543210UV                    { align1 WE_all 1Q $13.src };
mov(16)         g107<1>D        28D                             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(16)         g39<1>D         g31<1,1,0>D     g35<1,1,0>D     { align1 1H @3 $13.dst compacted };
mov(8)          g37<1>UD        g37<8,8,1>UW                    { align1 WE_all 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(8)          g38<1>UD        g37<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g37<1>UD        g37<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g37<1>UD        g37<1,1,0>UD    0x000006c0UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g35UD           g37UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cmp.z.f0.0(16)  null<1>W        g35<16,8,2>W    1W              { align1 1H };
(+f0.0) sel(16) g35<1>UD        g39<1,1,0>UD    g31<1,1,0>UD    { align1 1H I@6 compacted };
cmp.nz.f0.0(16) null<1>D        g79<8,8,1>D     0D              { align1 1H };
mov(16)         g31<2>W         -g79<8,8,1>D                    { align1 1H };
(+f0.0) sel(16) g53<1>UD        g35<1,1,0>UD    g53<1,1,0>UD    { align1 1H I@3 compacted };
(-f0.0) sel(16) g105<1>UD       g105<8,8,1>UD   0x00000002UD    { align1 1H $0.src };
mov(16)         g120<1>UW       g31<16,8,2>UW                   { align1 1H I@3 };

LABEL7:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
and(16)         g112<1>UW       g120<1,1,0>UW   0x0001UW        { align1 1H I@1 compacted };
mov(16)         g121<1>UW       g120<32,16,2>UB                 { align1 1H };
mov.nz.f0.0(16) null<1>W        g112<32,16,2>B                  { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL4          UIP:  LABEL3              { align1 1H };
shl(16)         g31<1>D         g53<8,8,1>D     0x00000005UD    { align1 1H I@7 };
shr(16)         g41<1>UD        g53<1,1,0>UD    0x0000001bUD    { align1 1H $13.src compacted };
add(16)         g35<1>D         g91<1,1,0>D     g31<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g47<1>UD        g35<1,1,0>UD    g91<1,1,0>UD    { align1 1H A@1 compacted };
add(16)         g112<1>D        g35<1,1,0>D     16D             { align1 1H $15.src compacted };
add(16)         g39<1>D         g35<1,1,0>D     28D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add3(16)        g37<1>D         g93<8,8,1>D     g41<8,8,1>D     -g47<1,1,1>D { align1 1H I@3 };
cmp.l.f0.0(16)  g31<1>UD        g112<1,1,0>UD   0x00000010UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g33<1>UD        g39<1,1,0>UD    g35<1,1,0>UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g114<1>D        -g31<1,1,0>D    g37<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g47<2>UD        g112<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
mov(8)          g49<2>UD        g113<4,4,1>UD                   { align1 2Q F@6 };
add(16)         g41<1>D         -g33<1,1,0>D    g37<1,1,0>D     { align1 1H I@4 compacted };
mov(8)          g47.1<2>UD      g114<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g49.1<2>UD      g115<4,4,1>UD                   { align1 2Q I@3 };
mov(8)          g31<2>UD        g39<4,4,1>UD                    { align1 1Q };
mov(8)          g33<2>UD        g40<4,4,1>UD                    { align1 2Q };
mov(8)          g31.1<2>UD      g41<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g33.1<2>UD      g42<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g39UD           g31UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
and(16)         g31<1>UD        g39<8,8,1>UD    0x00010000UD    { align1 1H $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.nz.f0.0(16) g116<1>D        g31<1,1,0>D     0D              { align1 1H I@1 compacted };
mov(8)          g39<2>UD        g35<4,4,1>UD                    { align1 1Q };
mov(8)          g41<2>UD        g36<4,4,1>UD                    { align1 2Q };
mov(8)          g39.1<2>UD      g37<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g41.1<2>UD      g38<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g31UD           g39UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
send(16)        g39UD           g47UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
add(16)         g118<1>F        g37<1,1,0>F     -g31<1,1,0>F    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
add(16)         g47<1>F         g39<1,1,0>F     -g33<1,1,0>F    { align1 1H $3.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
add(16)         g49<1>F         g41<1,1,0>F     -g35<1,1,0>F    { align1 1H $3.dst compacted };
add(16)         g31<1>F         g47<1,1,0>F     g49<1,1,0>F     { align1 1H F@1 compacted };
mul(16)         g33<1>F         g118<1,1,0>F    g31<1,1,0>F     { align1 1H F@1 compacted };
mul(16)         g31<1>F         g47<1,1,0>F     g49<1,1,0>F     { align1 1H compacted };
add(16)         g35<1>F         g33<1,1,0>F     g31<1,1,0>F     { align1 1H F@1 compacted };
mov(16)         g33<1>UD        g27<16,8,2>UW                   { align1 1H F@1 };
mov(16)         g31<2>W         -g116<8,8,1>D                   { align1 1H A@1 };
and(16)         g116<1>UW       g31<16,8,2>UW   0x0001UW        { align1 1H I@1 };
mov(16)         g41<1>UW        g31<16,8,2>UW                   { align1 1H F@5 };
cmp.l.f0.0(16)  g31<1>UD        g33<1,1,0>UD    g105<1,1,0>UD   { align1 1H I@4 compacted };
mov(16)         g117<1>W        g116<32,16,2>B                  { align1 1H I@3 };
cmp.nz.f0.0(16) g118<1>W        g117<16,16,1>W  0W              { align1 1H A@1 };
mov(16)         g33<1>D         g118<8,8,1>W                    { align1 1H I@1 };
and.nz.f0.0(16) g37<1>UD        g33<1,1,0>UD    g31<1,1,0>UD    { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
or(16)          g31<1>UD        g37<1,1,0>UD    g110<1,1,0>UD   { align1 1H I@1 compacted };
(+f0.0) sel(16) g33<1>UD        g35<1,1,0>UD    0x00000000UD    { align1 1H F@1 compacted };
or(16)          g110<1>UD       ~g37<8,8,1>D    g31<8,8,1>UD    { align1 1H I@2 };
cmp.nz.f0.0(16) null<1>D        g110<8,8,1>D    0D              { align1 1H I@1 };
(+f0.0) sel(16) g31<1>UD        g33<1,1,0>UD    g35<1,1,0>UD    { align1 1H I@3 compacted };
else(16)        JIP:  LABEL3          UIP:  LABEL3              { align1 1H };

LABEL4:
mov(16)         g31<1>UD        0x00000000UD                    { align1 1H I@2 };
mov(16)         g41<1>UW        0x0000UW                        { align1 1H $13.src };

LABEL3:
endif(16)       JIP:  LABEL5                                    { align1 1H };
add(16)         g33<1>D         g25<1,1,0>D     4D              { align1 1H I@3 compacted };
add(16)         g35<1>D         g25<1,1,0>D     -12D            { align1 1H compacted };
and(16)         g119<1>UW       g41<1,1,0>UW    0x0001UW        { align1 1H A@3 compacted };
cmp.l.f0.0(16)  null<1>D        g33<8,8,1>D     16D             { align1 1H I@3 };
mov(16)         g124<1>W        g119<32,16,2>B                  { align1 1H I@2 };
mov(1)          g122<2>UW       0x00000000UD                    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
(+f0.0) sel(16) g37<1>UD        g33<1,1,0>UD    g35<1,1,0>UD    { align1 1H I@5 compacted };
mov(16)         a0<1>UW         0x03e0UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g37<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x03e0UW        { align1 1H A@1 };
mov(16)         g35<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
add(16)         g37<1>D         g25<1,1,0>D     -14D            { align1 1H compacted };
sel.ge(16)      g33<1>F         g31<1,1,0>F     g35<1,1,0>F     { align1 1H I@2 compacted };
add(16)         g35<1>D         g25<1,1,0>D     2D              { align1 1H F@1 compacted };
cmp.l.f0.0(16)  null<1>D        g35<8,8,1>D     16D             { align1 1H I@1 };
(+f0.0) sel(16) g39<1>UD        g35<1,1,0>UD    g37<1,1,0>UD    { align1 1H A@3 compacted };
mov(16)         a0<1>UW         0x0420UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g39<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0420UW        { align1 1H A@1 };
mov(16)         g35<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g37<1>F         g33<1,1,0>F     g35<1,1,0>F     { align1 1H I@1 compacted };
add(16)         g33<1>D         g25<1,1,0>D     1D              { align1 1H A@1 compacted };
add(16)         g35<1>D         g25<1,1,0>D     -15D            { align1 1H F@1 compacted };
cmp.l.f0.0(16)  null<1>D        g33<8,8,1>D     16D             { align1 1H I@2 };
(+f0.0) sel(16) g39<1>UD        g33<1,1,0>UD    g35<1,1,0>UD    { align1 1H I@2 compacted };
mov(16)         a0<1>UW         0x04a0UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g39<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x04a0UW        { align1 1H A@1 };
mov(16)         g33<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.nz.f0.0(16) g125<1>W        g124<16,16,1>W  0W              { align1 1H };
sel.ge(16)      g35<1>F         g37<1,1,0>F     g33<1,1,0>F     { align1 1H I@2 compacted };
and(16)         g33<1>UD        g25<8,8,1>UD    0xfffffff8UD    { align1 1H F@1 };
mov(16)         g39<1>D         g125<8,8,1>W                    { align1 1H I@2 };
mov(16)         a0<1>UW         0x0460UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g33<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0460UW        { align1 1H A@1 };
mov(16)         g37<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         g35<1>UD        g27<16,8,2>UW                   { align1 1H };
cmp.z.f0.0(16)  g33<1>F         g37<1,1,0>F     g31<1,1,0>F     { align1 1H I@2 compacted };
and(16)         g31<1>UD        g39<1,1,0>UD    g33<1,1,0>UD    { align1 1H A@1 compacted };
cmp.l.f0.0(16)  g33<1>UD        g35<1,1,0>UD    g105<1,1,0>UD   { align1 1H I@2 compacted };
and(16)         g37<1>UD        g31<1,1,0>UD    g33<1,1,0>UD    { align1 1H A@1 compacted };
mov(16)         g31<2>W         -g37<8,8,1>D                    { align1 1H I@1 };
and(16)         g127<1>UW       g31<16,8,2>UW   0x0001UW        { align1 1H I@1 };
mov(16)         g31<1>W         g127<32,16,2>B                  { align1 1H I@1 };
cmp.nz.f0.0(16) g33<1>W         g31<16,16,1>W   0W              { align1 1H I@1 };
mov(16)         g31<1>D         g33<8,8,1>W                     { align1 1H I@1 };
mov(1)          f0<1>UW         g122<0,1,0>UW                   { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g31<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g33<1>UD        f0<0,1,0>UW                     { align1 1H };
shl(16)         g31<1>D         g29<8,8,1>D     0x00000003UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
shl(16)         g37<1>D         g89<8,8,1>D     g31<8,8,1>UD    { align1 1H I@1 };
and(16)         g31<1>UD        g33<1,1,0>UD    g37<1,1,0>UD    { align1 1H I@1 compacted };
cmp.z.f0.0(16)  g39<1>D         g31<1,1,0>D     0D              { align1 1H I@1 compacted };
(-f0.0) sel(16) g34<1>UW        g121<16,16,1>UW 0x0000UW        { align1 1H };
and(16)         g37<1>UW        g34<1,1,0>UW    0x0001UW        { align1 1H I@1 compacted };
mov(16)         g120<1>UW       g34<32,16,2>UB                  { align1 1H };
fbl(16)         g33<1>UD        g31<8,8,1>UD                    { align1 1H };
(-f0.0) sel(16) g31<1>UD        g33<8,8,1>UD    0x00000020UD    { align1 1H I@1 };
mov(16)         a0<1>UW         0x06a0UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g31<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x06a0UW        { align1 1H A@1 };
mov(16)         g33<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g41<2>UW        g31<8,8,1>UD                    { align1 1H F@7 };
mov.nz.f0.0(16) null<1>W        g37<32,16,2>B                   { align1 1H I@6 };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL6              { align1 1H };
shl(16)         g37<1>D         g33<8,8,1>D     0x00000005UD    { align1 1H I@4 };
add(16)         g31<1>D         g95<1,1,0>D     g37<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g37<1>UD        g31<1,1,0>UD    g95<1,1,0>UD    { align1 1H I@1 compacted };
cmp.z.f0.0(16)  null<1>D        g35<8,8,1>D     g105<8,8,1>D    { align1 1H };
shr(16)         g35<1>UD        g33<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
add(16)         g105<1>D        g105<1,1,0>D    1D              { align1 1H compacted };
add3(16)        g33<1>D         g97<8,8,1>D     g35<8,8,1>D     -g37<1,1,1>D { align1 1H I@2 };
mov(8)          g35<2>UD        g31<4,4,1>UD                    { align1 1Q };
mov(8)          g37<2>UD        g32<4,4,1>UD                    { align1 2Q };
mov(8)          g35.1<2>UD      g33<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g37.1<2>UD      g34<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g31UD           g35UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $4 };
mov(16)         g35<1>UD        g33<16,8,2>UW                   { align1 1H $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g37<1>D         g31<1,1,0>D     g35<1,1,0>D     { align1 1H $4.dst compacted };
(+f0.0) sel(16) g35<1>UD        g37<1,1,0>UD    g53<1,1,0>UD    { align1 1H I@1 compacted };
cmp.z.f0.0(16)  null<1>W        g87<16,8,2>W    g41<16,8,2>W    { align1 1H };
(+f0.0) sel(16) g53<1>UD        g31<1,1,0>UD    g35<1,1,0>UD    { align1 1H I@2 compacted };
cmp.ge.f0.0(16) g31<1>UD        g105<1,1,0>UD   0x00000006UD    { align1 1H compacted };
or.nz.f0.0(16)  null<1>UD       g31<8,8,1>UD    g39<8,8,1>UD    { align1 1H I@1 };
(-f0.0) sel(16) g39<1>UW        g121<16,16,1>UW 0x0000UW        { align1 1H };
mov(16)         g120<1>UW       g39<32,16,2>UB                  { align1 1H I@1 };

LABEL6:
endif(16)       JIP:  LABEL5                                    { align1 1H };
and(16)         g40<1>UW        g120<1,1,0>UW   0x0001UW        { align1 1H I@2 compacted };
mov(16)         g41<1>W         g40<32,16,2>B                   { align1 1H I@1 };
mov(1)          g123<2>UW       0x00000000UD                    { align1 WE_all 1N };
cmp.nz.f0.0(16) g42<1>W         g41<16,16,1>W   0W              { align1 1H I@2 };
mov(16)         g31<1>D         g42<8,8,1>W                     { align1 1H I@1 };
mov(1)          f0<1>UW         g123<0,1,0>UW                   { align1 WE_all 1N I@3 };
cmp.nz.f0.0(16) null<1>UD       g31<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov.z.f0.0(16)  null<1>UD       f0<0,1,0>UW                     { align1 1H };

LABEL5:
(-f0.0) while(16) JIP:  LABEL7                                  { align1 1H };
cmp.nz.f0.0(16) null<1>D        g79<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
(+f0.0) sel(16) g31<1>UD        g105<1,1,0>UD   0x00000000UD    { align1 1H I@3 compacted };
mov(16)         g33<1>UD        g31<16,8,2>UW                   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.z.f0.0(16)  g47<1>W         g87<16,8,2>W    0W              { align1 1H F@6 };
add(16)         g31<1>D         g34<0,1,0>D     g33<0,1,0>D     { align1 1H I@2 compacted };
mov(16)         g39<1>UD        g33<0,1,0>UW                    { align1 1H };
mov(16)         g33<1>D         g47<8,8,1>W                     { align1 1H I@3 };
mov(16)         g35<1>UD        g31<16,8,2>UW                   { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g37<2>UW        g31<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.nz.f0.0(16) g48<1>W         g37<16,8,2>W    0W              { align1 1H A@1 };
mov(16)         g31<1>D         g48<8,8,1>W                     { align1 1H I@1 };
and.nz.f0.0(16) null<1>UD       g33<8,8,1>UD    g31<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL8              { align1 1H };
add(16)         g37<1>D         g13<1,1,0>D     12D             { align1 1H compacted };
cmp.l.f0.0(16)  g31<1>UD        g37<1,1,0>UD    g13<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g41<1>D         -g31<1,1,0>D    g15<1,1,0>D     { align1 1H I@1 compacted };
mov(8)          g31<2>UD        g37<4,4,1>UD                    { align1 1Q };
mov(8)          g33<2>UD        g38<4,4,1>UD                    { align1 2Q };
mov(8)          g31.1<2>UD      g41<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g33.1<2>UD      g42<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g37UD           g31UD           g35UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $13 };

LABEL8:
endif(16)       JIP:  LABEL2                                    { align1 1H };
mov.nz.f0.0(16) null<1>D        g79<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL9          UIP:  LABEL9              { align1 1H };
shl(16)         g31<1>D         g53<8,8,1>D     0x00000005UD    { align1 1H $13.src };
mov(16)         g41<1>D         12D                             { align1 1H $13.src };
add(16)         g47<1>D         g91<1,1,0>D     g31<1,1,0>D     { align1 1H A@2 compacted };
and(16)         g31<1>UD        g41<8,8,1>D     0xfffffffcUD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
cmp.l.f0.0(16)  g35<1>UD        g47<1,1,0>UD    g91<1,1,0>UD    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
shl(16)         g33<1>UD        g31<1,1,0>UD    0x00000004UD    { align1 1H I@2 compacted };
and(16)         g31<1>UD        g41<8,8,1>D     0x00000003UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
or(16)          g49<1>UD        g31<1,1,0>UD    g33<1,1,0>UD    { align1 1H A@1 compacted };
mul(16)         g31<1>D         g39<8,8,1>D     g29<16,8,2>W    { align1 1H };
add(16)         g33<1>D         g37<0,1,0>D     g31<1,1,0>D     { align1 1H @1 $13.dst compacted };
shl(16)         g31<1>D         g33<8,8,1>D     0x00000006UD    { align1 1H I@1 };
mov(8)          g33<1>UW        0x76543210UV                    { align1 WE_all 1Q };
add3(16)        g37<1>D         g13<8,8,1>D     g31<8,8,1>D     -g81<1,1,1>D { align1 1H @2 $13.dst };
mov(8)          g33<1>UD        g33<8,8,1>UW                    { align1 WE_all 1Q I@2 };
asr(16)         g31<1>D         g37<8,8,1>D     0x00000006UD    { align1 1H I@2 };
add(8)          g34<1>UD        g33<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
shl(16)         g33<1>UD        g33<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g33<1>UD        g33<1,1,0>UD    0x00000640UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g33UD           g31UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $5 };
shr(16)         g31<1>UD        g53<1,1,0>UD    0x0000001bUD    { align1 1H $5.src compacted };
shl(16)         g89<1>UD        g109<8,8,1>UW   0x00000002UD    { align1 1H };
and(1)          g97<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g98<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
add3(16)        g95<1>D         g93<8,8,1>D     g31<8,8,1>D     -g35<1,1,1>D { align1 1H I@4 };
mov(8)          g39<2>UD        g47<4,4,1>UD                    { align1 1Q };
mov(8)          g41<2>UD        g48<4,4,1>UD                    { align1 2Q };
or(16)          g91<1>UD        g49<1,1,0>UD    g89<1,1,0>UD    { align1 1H I@6 compacted };
and(16)         g49<1>UD        g63<8,8,1>D     0x00000003UD    { align1 1H };
mov(8)          g39.1<2>UD      g95<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g41.1<2>UD      g96<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g31UD           g39UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $6 };
and(16)         g41<1>UD        g63<8,8,1>D     0xfffffffcUD    { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shl(16)         g39<1>UD        g41<1,1,0>UD    0x00000004UD    { align1 1H I@1 compacted };
or(16)          g41<1>UD        g49<1,1,0>UD    g39<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g97<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g39UD           g91UD           nullUD          0x44201502                a0.1<0>UD
                            ugm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $7 };
or(16)          g93<1>UD        g41<1,1,0>UD    g89<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g98<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g93UD           g31UD           0x44001506                a0.1<0>UD
                            ugm MsgDesc: ( store_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $8 };
and(16)         g41<1>UD        g75<8,8,1>D     0xfffffffcUD    { align1 1H };
and(1)          g110<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $0.src };
shl(16)         g49<1>UD        g41<1,1,0>UD    0x00000004UD    { align1 1H I@2 compacted };
and(16)         g41<1>UD        g75<8,8,1>D     0x00000003UD    { align1 1H };
or(16)          g97<1>UD        g41<1,1,0>UD    g49<1,1,0>UD    { align1 1H I@1 compacted };
or(16)          g75<1>UD        g97<1,1,0>UD    g89<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g110<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g75UD           g33UD           0x44001506                a0.1<0>UD
                            ugm MsgDesc: ( store_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $9 };
and(16)         g41<1>UD        g65<8,8,1>D     0xfffffffcUD    { align1 1H };
and(1)          g111<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $0.src };
shl(16)         g49<1>UD        g41<1,1,0>UD    0x00000004UD    { align1 1H I@2 compacted };
and(16)         g41<1>UD        g65<8,8,1>D     0x00000003UD    { align1 1H };
or(16)          g97<1>UD        g41<1,1,0>UD    g49<1,1,0>UD    { align1 1H I@1 compacted };
or(16)          g65<1>UD        g97<1,1,0>UD    g89<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g111<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g65UD           g35UD           0x44001506                a0.1<0>UD
                            ugm MsgDesc: ( store_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $10 };
and(1)          g112<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g112<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g91UD           g39UD           0x44001506                a0.1<0>UD
                            ugm MsgDesc: ( store_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $11 };
add(16)         g39<1>D         g47<1,1,0>D     16D             { align1 1H $11.src compacted };
and(1)          g115<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g116<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g47<1>UD        g39<1,1,0>UD    0x00000010UD    { align1 1H I@3 compacted };
add(16)         g41<1>D         -g47<1,1,0>D    g95<1,1,0>D     { align1 1H I@1 compacted };
and(16)         g47<1>UD        g107<8,8,1>D    0xfffffffcUD    { align1 1H };
shl(16)         g95<1>UD        g47<1,1,0>UD    0x00000004UD    { align1 1H I@1 compacted };
mov(8)          g47<2>UD        g39<4,4,1>UD                    { align1 1Q };
mov(8)          g49<2>UD        g40<4,4,1>UD                    { align1 2Q };
mov(8)          g47.1<2>UD      g41<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g49.1<2>UD      g42<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g39UD           g47UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $12 };
and(16)         g47<1>UD        g107<8,8,1>D    0x00000003UD    { align1 1H $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
or(16)          g49<1>UD        g47<1,1,0>UD    g95<1,1,0>UD    { align1 1H I@1 compacted };
or(16)          g47<1>UD        g49<1,1,0>UD    g89<1,1,0>UD    { align1 1H I@1 compacted };
and(16)         g49<1>UD        g67<8,8,1>D     0xfffffffcUD    { align1 1H };
shl(16)         g95<1>UD        g49<1,1,0>UD    0x00000004UD    { align1 1H I@1 compacted };
and(16)         g49<1>UD        g67<8,8,1>D     0x00000003UD    { align1 1H };
or(16)          g67<1>UD        g49<1,1,0>UD    g95<1,1,0>UD    { align1 1H I@1 compacted };
or(16)          g49<1>UD        g67<1,1,0>UD    g89<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g115<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g67UD           g47UD           nullUD          0x44201502                a0.1<0>UD
                            ugm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g116<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g49UD           g37UD           0x44001506                a0.1<0>UD
                            ugm MsgDesc: ( store_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $14 };
mov(16)         g31<1>D         20D                             { align1 1H $8.src };
and(1)          g117<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
and(16)         g33<1>UD        g31<8,8,1>D     0xfffffffcUD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
shl(16)         g35<1>UD        g33<1,1,0>UD    0x00000004UD    { align1 1H I@1 compacted };
and(16)         g33<1>UD        g31<8,8,1>D     0x00000003UD    { align1 1H };
or(16)          g31<1>UD        g33<1,1,0>UD    g35<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
or(16)          g37<1>UD        g31<1,1,0>UD    g89<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g117<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g37UD           g39UD           0x44001506                a0.1<0>UD
                            ugm MsgDesc: ( store_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $14 };
mov(16)         g31<1>D         24D                             { align1 1H };
and(1)          g118<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $2.src };
and(16)         g33<1>UD        g31<8,8,1>D     0xfffffffcUD    { align1 1H I@2 };
shl(16)         g35<1>UD        g33<1,1,0>UD    0x00000004UD    { align1 1H I@1 compacted };
and(16)         g33<1>UD        g31<8,8,1>D     0x00000003UD    { align1 1H };
or(16)          g31<1>UD        g33<1,1,0>UD    g35<1,1,0>UD    { align1 1H I@1 compacted };
or(16)          g33<1>UD        g31<1,1,0>UD    g89<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g118<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g33UD           g41UD           0x44001506                a0.1<0>UD
                            ugm MsgDesc: ( store_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $13 };
and(1)          g119<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g119<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g47UD           g67UD           0x44001506                a0.1<0>UD
                            ugm MsgDesc: ( store_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $15 };
and(1)          g120<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g121<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g122<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g123<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g124<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g125<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g126<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g127<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
or(1)           a0.1<1>UD       g120<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g55UD           g93UD           nullUD          0x44201502                a0.1<0>UD
                            ugm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
or(1)           a0.1<1>UD       g121<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g57UD           g75UD           nullUD          0x44201502                a0.1<0>UD
                            ugm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
or(1)           a0.1<1>UD       g122<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g59UD           g65UD           nullUD          0x44201502                a0.1<0>UD
                            ugm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
or(1)           a0.1<1>UD       g123<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g61UD           g91UD           nullUD          0x44201502                a0.1<0>UD
                            ugm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g124<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $0.src };
send(16)        g99UD           g49UD           nullUD          0x44201502                a0.1<0>UD
                            ugm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g125<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g101UD          g37UD           nullUD          0x44201502                a0.1<0>UD
                            ugm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g126<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g103UD          g33UD           nullUD          0x44201502                a0.1<0>UD
                            ugm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g127<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g31UD           g47UD           nullUD          0x44201502                a0.1<0>UD
                            ugm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $0 };
mov(8)          g33<1>UW        0x76543210UV                    { align1 WE_all 1Q $4.src };
mov(8)          g33<1>UD        g33<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(8)          g34<1>UD        g33<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g33<1>UD        g33<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g33<1>UD        g33<1,1,0>UD    0x000007c0UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g33UD           g31UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $13 };

LABEL9:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
endif(16)       JIP:  LABEL10                                   { align1 1H };

LABEL10:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
add(16)         g32<1>F         g101<1,1,0>F    -g57<1,1,0>F    { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g34<1>F         g103<1,1,0>F    -g59<1,1,0>F    { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g47<1>UD        g105<16,8,2>UW                  { align1 1H A@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
add(16)         g36<1>F         g32<1,1,0>F     g34<1,1,0>F     { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mul(16)         g38<1>F         g32<1,1,0>F     g34<1,1,0>F     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
add(16)         g31<1>F         g99<1,1,0>F     -g55<1,1,0>F    { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mad(16)         g41<1>F         g38<8,8,1>F     g36<8,8,1>F     g31<1,1,1>F { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g39<1>UD        g27<16,8,2>UW                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
xor(16)         g67<1>UD        g39<1,1,0>UD    0x00000007UD    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  null<1>D        g39<8,8,1>D     g47<8,8,1>D     { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
(+f0.0) sel(16) g48<1>UD        g41<1,1,0>UD    0x00000000UD    { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
and(16)         g65<1>UD        g48<8,8,1>UD    0xffffff80UD    { align1 1H I@1 };
add(16)         g33<1>D         g65<1,1,0>D     g67<1,1,0>D     { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g75<1>UD        g33<1,1,0>UD    g33.5<0,1,0>UD  { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g89<1>UD        g33<1,1,0>UD    g33<0,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  g91<1>UD        g33<1,1,0>UD    g33.2<0,1,0>UD  { align1 1H $3.src compacted };
cmp.l.f0.0(16)  g93<1>UD        g33<1,1,0>UD    g33.4<0,1,0>UD  { align1 1H $0.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g107<1>D        -g89<8,8,1>D    -g91<8,8,1>D    -g93<1,1,1>D { align1 1H };
cmp.l.f0.0(16)  g94<1>UD        g33<1,1,0>UD    g33.1<0,1,0>UD  { align1 1H compacted };
cmp.l.f0.0(16)  g96<1>UD        g33<1,1,0>UD    g33.3<0,1,0>UD  { align1 1H compacted };
cmp.l.f0.0(16)  g35<1>UD        g33<1,1,0>UD    g34.5<0,1,0>UD  { align1 1H F@1 compacted };
cmp.l.f0.0(16)  g37<1>UD        g33<1,1,0>UD    g34<0,1,0>UD    { align1 1H F@1 compacted };
cmp.l.f0.0(16)  g41<1>UD        g33<1,1,0>UD    g34.2<0,1,0>UD  { align1 1H compacted };
cmp.l.f0.0(16)  g47<1>UD        g33<1,1,0>UD    g34.4<0,1,0>UD  { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g110<1>D        -g94<1,1,0>D    -g96<1,1,0>D    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add3(16)        g49<1>D         -g37<8,8,1>D    -g41<8,8,1>D    -g47<1,1,1>D { align1 1H I@2 };
add3(16)        g31<1>D         -g75<8,8,1>D    g110<8,8,1>D    g107<1,1,1>D { align1 1H A@1 };
cmp.l.f0.0(16)  g37<1>UD        g33<1,1,0>UD    g34.1<0,1,0>UD  { align1 1H compacted };
cmp.l.f0.0(16)  g41<1>UD        g33<1,1,0>UD    g34.3<0,1,0>UD  { align1 1H compacted };
add(16)         g33<1>D         -g37<1,1,0>D    -g41<1,1,0>D    { align1 1H I@1 compacted };
add3(16)        g37<1>D         -g35<8,8,1>D    g33<8,8,1>D     g49<1,1,1>D { align1 1H I@1 };
mov(16)         g33<1>UD        g25<16,8,2>UW                   { align1 1H };
mov(16)         g49<1>D         10D                             { align1 1H };
cmp.ge.f0.0(16) null<1>D        g33<8,8,1>D     8D              { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
mov(16)         g35<1>UD        g37<16,8,2>UW                   { align1 1H I@5 };
add(16)         g37<1>D         g33<1,1,0>D     -8D             { align1 1H compacted };
cmp.z.f0.0(16)  g41<1>D         g36.1<0,1,0>D   g37<1,1,0>D     { align1 1H I@1 compacted };
cmp.z.f0.0(16)  null<1>D        g36.2<0,1,0>D   g37<8,8,1>D     { align1 1H };
(+f0.0) sel(16) g47<1>UD        g49<1,1,0>UD    0x00000008UD    { align1 1H I@7 compacted };
cmp.z.f0.0(16)  null<1>D        g36.3<0,1,0>D   g37<8,8,1>D     { align1 1H };
(-f0.0) sel(16) g49<1>UD        g63<8,8,1>UD    0x00000003UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g36.4<0,1,0>D   g37<8,8,1>D     { align1 1H };
(-f0.0) sel(16) g65<1>UD        g63<8,8,1>UD    0x00000004UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g36.5<0,1,0>D   g37<8,8,1>D     { align1 1H };
add(16)         g35<1>D         g47<1,1,0>D     g65<1,1,0>D     { align1 1H I@2 compacted };
(-f0.0) sel(16) g37<1>UD        g63<8,8,1>UD    0x00000005UD    { align1 1H };
mov(16)         g110<2>UW       g35<8,8,1>UD                    { align1 1H I@2 };
add3(16)        g47<1>D         -g41<8,8,1>D    g49<8,8,1>D     g37<1,1,1>D { align1 1H I@2 };
mov(16)         g89<1>UW        g110<16,8,2>UW                  { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g111<2>UW       g47<8,8,1>UD                    { align1 1H I@2 };
mov(16)         g90<1>UW        g111<16,8,2>UW                  { align1 1H I@1 };
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g111<1>UD       g31<16,8,2>UW                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
cmp.z.f0.0(16)  g113<1>D        g111.1<0,1,0>D  g33<1,1,0>D     { align1 1H I@1 compacted };
cmp.z.f0.0(16)  null<1>D        g111.2<0,1,0>D  g33<8,8,1>D     { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
(-f0.0) sel(16) g115<1>UD       g63<8,8,1>UD    0x00000002UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g111.3<0,1,0>D  g33<8,8,1>D     { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
(-f0.0) sel(16) g117<1>UD       g63<8,8,1>UD    0x00000003UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g111.4<0,1,0>D  g33<8,8,1>D     { align1 1H };
(-f0.0) sel(16) g119<1>UD       g63<8,8,1>UD    0x00000004UD    { align1 1H };
add(16)         g97<1>D         g115<1,1,0>D    g119<1,1,0>D    { align1 1H I@1 compacted };
cmp.z.f0.0(16)  null<1>D        g111.5<0,1,0>D  g33<8,8,1>D     { align1 1H };
(-f0.0) sel(16) g107<1>UD       g63<8,8,1>UD    0x00000005UD    { align1 1H };
add3(16)        g110<1>D        -g113<8,8,1>D   g117<8,8,1>D    g107<1,1,1>D { align1 1H I@1 };
mov(16)         g112<2>UW       g97<8,8,1>UD                    { align1 1H I@4 };
mov(16)         g89<1>UW        g112<16,8,2>UW                  { align1 1H I@1 };
mov(16)         g113<2>UW       g110<8,8,1>UD                   { align1 1H I@3 };
mov(16)         g90<1>UW        g113<16,8,2>UW                  { align1 1H I@1 };

LABEL11:
endif(16)       JIP:  LABEL13                                   { align1 1H };

LABEL13:
and(16)         g31<1>UD        g71<8,8,1>D     0xfffffffcUD    { align1 1H };
mov(16)         g111<1>UD       g89<8,8,1>UW                    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g113<1>UD       g90<8,8,1>UW                    { align1 1H I@4 };
shl(16)         g48<1>UD        g109<8,8,1>UW   0x00000002UD    { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
and(1)          g118<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N I@7 };
shl(16)         g37<1>UD        g31<1,1,0>UD    0x00000004UD    { align1 1H I@5 compacted };
and(16)         g32<1>UD        g71<8,8,1>D     0x00000003UD    { align1 1H };
add(16)         g35<1>D         g111<1,1,0>D    g113<1,1,0>D    { align1 1H I@5 compacted };
or(16)          g107<1>UD       g32<1,1,0>UD    g37<1,1,0>UD    { align1 1H I@2 compacted };
mov(16)         a0<1>UW         0x06e0UW                        { align1 WE_all 1H I@2 };
shl(16)         a0<1>UW         g35<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x06e0UW        { align1 1H A@1 };
mov(16)         g63<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0720UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g35<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0720UW        { align1 1H A@1 };
mov(16)         g65<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0760UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g35<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0760UW        { align1 1H A@1 };
mov(16)         g67<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x07a0UW                        { align1 WE_all 1H $3.dst };
shl(16)         a0<1>UW         g35<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x07a0UW        { align1 1H A@1 };
mov(16)         g75<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
or(16)          g89<1>UD        g107<1,1,0>UD   g48<1,1,0>UD    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g118<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g89UD           g63UD           0x44001506                a0.1<0>UD
                            ugm MsgDesc: ( store_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $5 };
mov(16)         g119<1>D        36D                             { align1 1H };
and(16)         g33<1>UD        g119<8,8,1>D    0xfffffffcUD    { align1 1H I@1 };
and(16)         g37<1>UD        g119<8,8,1>D    0x00000003UD    { align1 1H };
and(1)          g120<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shl(16)         g71<1>UD        g33<1,1,0>UD    0x00000004UD    { align1 1H I@3 compacted };
or(16)          g108<1>UD       g37<1,1,0>UD    g71<1,1,0>UD    { align1 1H I@1 compacted };
or(16)          g91<1>UD        g108<1,1,0>UD   g48<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g120<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g91UD           g65UD           0x44001506                a0.1<0>UD
                            ugm MsgDesc: ( store_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $6 };
and(16)         g41<1>UD        g73<8,8,1>D     0xfffffffcUD    { align1 1H };
and(16)         g55<1>UD        g73<8,8,1>D     0x00000003UD    { align1 1H F@2 };
and(1)          g121<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shl(16)         g93<1>UD        g41<1,1,0>UD    0x00000004UD    { align1 1H I@3 compacted };
or(16)          g109<1>UD       g55<1,1,0>UD    g93<1,1,0>UD    { align1 1H I@1 compacted };
or(16)          g93<1>UD        g109<1,1,0>UD   g48<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g121<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g93UD           g67UD           0x44001506                a0.1<0>UD
                            ugm MsgDesc: ( store_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $7 };
mov(16)         g122<1>D        44D                             { align1 1H };
and(16)         g56<1>UD        g122<8,8,1>D    0xfffffffcUD    { align1 1H A@1 };
shl(16)         g95<1>UD        g56<1,1,0>UD    0x00000004UD    { align1 1H I@1 compacted };
and(16)         g57<1>UD        g122<8,8,1>D    0x00000003UD    { align1 1H F@6 };
and(1)          g123<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g110<1>UD       g57<1,1,0>UD    g95<1,1,0>UD    { align1 1H I@2 compacted };
or(16)          g95<1>UD        g110<1,1,0>UD   g48<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g123<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g95UD           g75UD           0x44001506                a0.1<0>UD
                            ugm MsgDesc: ( store_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $8 };
mov(16)         g31<1>D         48D                             { align1 1H };
mov(16)         a0<1>UW         0x0c60UW                        { align1 WE_all 1H $8.src };
shl(16)         a0<1>UW         g35<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0c60UW        { align1 1H A@1 };
mov(16)         g75<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0ca0UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g35<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ca0UW        { align1 1H A@1 };
mov(16)         g41<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0ce0UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g35<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ce0UW        { align1 1H A@1 };
mov(16)         g55<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(8)          g33<1>UW        0x76543210UV                    { align1 WE_all 1Q };
and(16)         g58<1>UD        g31<8,8,1>D     0xfffffffcUD    { align1 1H A@5 };
mov(8)          g33<1>UD        g33<8,8,1>UW                    { align1 WE_all 1Q I@2 };
shl(16)         g97<1>UD        g58<1,1,0>UD    0x00000004UD    { align1 1H I@2 compacted };
and(16)         g59<1>UD        g31<8,8,1>D     0x00000003UD    { align1 1H F@5 };
add(8)          g34<1>UD        g33<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@3 compacted };
or(16)          g111<1>UD       g59<1,1,0>UD    g97<1,1,0>UD    { align1 1H I@2 compacted };
shl(16)         g33<1>UD        g33<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
or(16)          g97<1>UD        g111<1,1,0>UD   g48<1,1,0>UD    { align1 1H I@2 compacted };
add(16)         g33<1>UD        g33<1,1,0>UD    0x000007c0UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g31UD           g33UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
mov(16)         a0<1>UW         0x03e0UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g35<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x03e0UW        { align1 1H A@1 };
mov(16)         g57<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
and(1)          g32<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g32<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g97UD           g75UD           0x44001506                a0.1<0>UD
                            ugm MsgDesc: ( store_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g33<1>D         52D                             { align1 1H };
and(16)         g60<1>UD        g33<8,8,1>D     0xfffffffcUD    { align1 1H I@1 };
shl(16)         g99<1>UD        g60<1,1,0>UD    0x00000004UD    { align1 1H A@1 compacted };
and(16)         g61<1>UD        g33<8,8,1>D     0x00000003UD    { align1 1H };
and(1)          g34<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g112<1>UD       g61<1,1,0>UD    g99<1,1,0>UD    { align1 1H I@2 compacted };
or(16)          g59<1>UD        g112<1,1,0>UD   g48<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g34<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g59UD           g41UD           0x44001506                a0.1<0>UD
                            ugm MsgDesc: ( store_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $11 };
and(16)         g62<1>UD        g69<8,8,1>D     0xfffffffcUD    { align1 1H $5.src };
and(1)          g37<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shl(16)         g100<1>UD       g62<1,1,0>UD    0x00000004UD    { align1 1H A@2 compacted };
and(16)         g63<1>UD        g69<8,8,1>D     0x00000003UD    { align1 1H $5.src };
or(16)          g113<1>UD       g63<1,1,0>UD    g100<1,1,0>UD   { align1 1H I@1 compacted };
or(16)          g63<1>UD        g113<1,1,0>UD   g48<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g37<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g63UD           g55UD           0x44001506                a0.1<0>UD
                            ugm MsgDesc: ( store_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $12 };
mov(16)         g41<1>D         60D                             { align1 1H $11.src };
and(16)         g61<1>UD        g41<8,8,1>D     0xfffffffcUD    { align1 1H I@1 };
and(16)         g55<1>UD        g41<8,8,1>D     0x00000003UD    { align1 1H $12.src };
and(1)          g42<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shl(16)         g65<1>UD        g61<1,1,0>UD    0x00000004UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
or(16)          g67<1>UD        g55<1,1,0>UD    g65<1,1,0>UD    { align1 1H I@1 compacted };
or(16)          g99<1>UD        g67<1,1,0>UD    g48<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g42<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g99UD           g57UD           0x44001506                a0.1<0>UD
                            ugm MsgDesc: ( store_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $13 };
and(1)          g62<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g65<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g66<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g67<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g68<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g69<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g70<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
cmp.l.f0.0(16)  g71<1>UD        g39<1,1,0>UD    g105<1,1,0>UD   { align1 1H compacted };
mov(16)         a0<1>UW         0x06a0UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g35<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x06a0UW        { align1 1H A@1 };
mov(16)         g31<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
or(1)           a0.1<1>UD       g62<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g41UD           g89UD           nullUD          0x44201502                a0.1<0>UD
                            ugm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
or(1)           a0.1<1>UD       g65<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g47UD           g91UD           nullUD          0x44201502                a0.1<0>UD
                            ugm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
or(1)           a0.1<1>UD       g66<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g49UD           g93UD           nullUD          0x44201502                a0.1<0>UD
                            ugm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
or(1)           a0.1<1>UD       g68<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g55UD           g97UD           nullUD          0x44201502                a0.1<0>UD
                            ugm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
or(1)           a0.1<1>UD       g67<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g61UD           g95UD           nullUD          0x44201502                a0.1<0>UD
                            ugm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g69<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g57UD           g59UD           nullUD          0x44201502                a0.1<0>UD
                            ugm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $3 };
and.nz.f0.0(16) null<1>UD       g71<8,8,1>UD    g83<8,8,1>UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g70<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g59UD           g63UD           nullUD          0x44201502                a0.1<0>UD
                            ugm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $2 };
(+f0.0) if(16)  JIP:  LABEL14         UIP:  LABEL14             { align1 1H };
shl(16)         g72<1>D         g51<8,8,1>D     0x00000002UD    { align1 1H $0.src };
mov(8)          g37<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g37<1>UD        g37<8,8,1>UW                    { align1 WE_all 1Q I@1 };
add(8)          g38<1>UD        g37<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g37<1>UD        g37<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g37<1>UD        g37<1,1,0>UD    0x00000800UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g35UD           g37UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $4 };
mov(8)          g37<1>UW        0x76543210UV                    { align1 WE_all 1Q $4.src };
mov(8)          g37<1>UD        g37<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(8)          g38<1>UD        g37<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g37<1>UD        g37<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g37<1>UD        g37<1,1,0>UD    0x00000800UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
add(16)         g120<1>D        g35<1,1,0>D     g72<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g35UD           g37UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $5 };
shr(16)         g73<1>UD        g51<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
mov(8)          g37<1>UW        0x76543210UV                    { align1 WE_all 1Q $5.src };
mov(8)          g37<1>UD        g37<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(8)          g38<1>UD        g37<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g37<1>UD        g37<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g37<1>UD        g37<1,1,0>UD    0x00000840UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
cmp.l.f0.0(16)  g75<1>UD        g120<1,1,0>UD   g35<1,1,0>UD    { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g35UD           g37UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add3(16)        g89<1>D         g35<8,8,1>D     g73<8,8,1>D     -g75<1,1,1>D { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g35<2>UD        g120<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $6.src };
mov(8)          g37<2>UD        g121<4,4,1>UD                   { align1 2Q };
mov(8)          g35.1<2>UD      g89<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g37.1<2>UD      g90<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g35UD           g31UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $7 };
cmp.g.f0.0(16)  g91<1>UD        g13<1,1,0>UD    0x00000000UD    { align1 1H $15.src compacted };
add(16)         g95<1>D         g81<1,1,0>D     -g13<1,1,0>D    { align1 1H $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g116<1>D        g21<1,1,0>D     36D             { align1 1H $0.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g93<1>D         -g15<1,1,0>D    g91<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g15<1>UW        0x76543210UV                    { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g97<1>UD        g95<1,1,0>UD    g81<1,1,0>UD    { align1 1H I@4 compacted };
cmp.g.f0.0(16)  g101<1>UD       g95<1,1,0>UD    0x00000000UD    { align1 1H F@6 compacted };
mov(8)          g15<1>UD        g15<8,8,1>UW                    { align1 WE_all 1Q I@3 };
add(8)          g16<1>UD        g15<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g15<1>UD        g15<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g15<1>UD        g15<1,1,0>UD    0x00000780UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g13UD           g15UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add3(16)        g99<1>D         g13<8,8,1>D     g93<8,8,1>D     -g97<1,1,1>D { align1 1H A@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g103<1>D        -g99<1,1,0>D    g101<1,1,0>D    { align1 1H A@1 compacted };
cmp.l.f0.0(16)  null<1>D        g99<8,8,1>D     0D              { align1 1H };
mov(8)          g13<2>UD        g116<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $8.src };
mov(8)          g15<2>UD        g117<4,4,1>UD                   { align1 2Q };
(+f0.0) sel(16) g107<1>UD       g103<1,1,0>UD   g99<1,1,0>UD    { align1 1H I@4 compacted };
shl(16)         g112<1>D        g107<8,8,1>D    0x0000001aUD    { align1 1H I@1 };
(+f0.0) sel(16) g108<1>D        -g95<1,1,0>D    g95<1,1,0>D     { align1 1H compacted };
shr(16)         g110<1>UD       g108<1,1,0>UD   0x00000006UD    { align1 1H I@1 compacted };
or(16)          g114<1>UD       g110<1,1,0>UD   g112<1,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
(+f0.0) sel(16) g64<1>D         -g114<1,1,0>D   g114<1,1,0>D    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g118<1>UD       g116<1,1,0>UD   g21<1,1,0>UD    { align1 1H compacted };
add(16)         g120<1>D        -g118<1,1,0>D   g23<1,1,0>D     { align1 1H @1 $0.dst compacted };
mov(8)          g15.1<2>UD      g121<4,4,1>UD                   { align1 2Q I@1 };
mov(8)          g13.1<2>UD      g120<4,4,1>UD                   { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g122UD          g13UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $9 };
mov(8)          g15<1>UW        0x76543210UV                    { align1 WE_all 1Q $9.src };
mov(8)          g15<1>UD        g15<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(8)          g16<1>UD        g15<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g15<1>UD        g15<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g15<1>UD        g15<1,1,0>UD    0x00000800UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g13UD           g15UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $10 };
mov(8)          g15<1>UW        0x76543210UV                    { align1 WE_all 1Q $10.src };
mov(8)          g15<1>UD        g15<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(8)          g16<1>UD        g15<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g15<1>UD        g15<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g15<1>UD        g15<1,1,0>UD    0x00000800UD    { align1 WE_all 1H I@1 compacted };
add(16)         g124<1>D        g51<1,1,0>D     g122<1,1,0>D    { align1 1H $9.dst compacted };
shl(16)         g126<1>D        g124<8,8,1>D    0x00000002UD    { align1 1H I@1 };
shr(16)         g17<1>UD        g124<1,1,0>UD   0x0000001eUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
add(16)         g19<1>D         g13<1,1,0>D     g126<1,1,0>D    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g13UD           g15UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $11 };
mov(8)          g15<1>UW        0x76543210UV                    { align1 WE_all 1Q $11.src };
mov(8)          g15<1>UD        g15<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(8)          g16<1>UD        g15<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g15<1>UD        g15<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g15<1>UD        g15<1,1,0>UD    0x00000840UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
cmp.l.f0.0(16)  g21<1>UD        g19<1,1,0>UD    g13<1,1,0>UD    { align1 1H I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g13UD           g15UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
add3(16)        g23<1>D         g13<8,8,1>D     g17<8,8,1>D     -g21<1,1,1>D { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(8)          g13<2>UD        g19<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $12.src };
mov(8)          g15<2>UD        g20<4,4,1>UD                    { align1 2Q };
mov(8)          g13.1<2>UD      g23<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g15.1<2>UD      g24<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g13UD           g64UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $2 };

LABEL14:
endif(16)       JIP:  LABEL15                                   { align1 1H };

LABEL15:
mov(16)         g35<1>UD        g11<16,8,2>UW                   { align1 1H $7.src };
cmp.nz.f0.0(16) null<1>D        g83<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g121<1>UD       g35<1,1,0>UD    0x00000000UD    { align1 1H I@2 compacted };
cmp.z.f0.0(16)  null<1>W        g85<16,8,2>W    1W              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL16             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g36<1>UD        g61.3<32,8,4>UB                 { align1 1H $2.dst };
cmp.ge.f0.0(16) null<1>UD       g39<8,8,1>UD    g105<8,8,1>UD   { align1 1H };
add(16)         g63<1>D         g25<1,1,0>D     -12D            { align1 1H $2.src compacted };
add(16)         g73<1>D         g25<1,1,0>D     2D              { align1 1H compacted };
add(16)         g75<1>D         g25<1,1,0>D     -14D            { align1 1H $10.src compacted };
add(16)         g95<1>D         g25<1,1,0>D     1D              { align1 1H $2.src compacted };
add(16)         g97<1>D         g25<1,1,0>D     -15D            { align1 1H $1.src compacted };
and(16)         g107<1>UD       g25<8,8,1>UD    0xfffffff8UD    { align1 1H };
add(16)         g61<1>D         g25<1,1,0>D     4D              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
(-f0.0) sel(16) g51<1>UD        g36<8,8,1>UD    0x00000000UD    { align1 1H I@7 };
mov(16)         g119<2>W        -g83<8,8,1>D                    { align1 1H };
mov(16)         g53<1>UD        g51<32,8,4>UB                   { align1 1H I@2 };
cmp.l.f0.0(16)  null<1>D        g61<8,8,1>D     16D             { align1 1H I@4 };
and(16)         g112<1>UW       g119<16,8,2>UW  0x0001UW        { align1 1H I@3 };
(+f0.0) sel(16) g65<1>UD        g61<1,1,0>UD    g63<1,1,0>UD    { align1 1H $2.src compacted };
mov(8)          g62<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g63<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(16)         g113<1>W        g112<32,16,2>B                  { align1 1H I@4 };
mov(16)         a0<1>UW         0x06a0UW                        { align1 WE_all 1H I@4 };
shl(16)         a0<1>UW         g65<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x06a0UW        { align1 1H A@1 };
mov(16)         g67<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.l.f0.0(16)  null<1>D        g73<8,8,1>D     16D             { align1 1H };
mov(8)          g62<1>UD        g62<8,8,1>UW                    { align1 WE_all 1Q I@5 };
mov(8)          g54<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g63<1>UD        g63<8,8,1>UW                    { align1 WE_all 1Q I@6 };
or(16)          g69<1>UD        g51<1,1,0>UD    g67<1,1,0>UD    { align1 1H I@5 compacted };
(+f0.0) sel(16) g85<1>UD        g73<1,1,0>UD    g75<1,1,0>UD    { align1 1H compacted };
shl(8)          g62<1>UD        g62<1,1,0>UD    0x00000002UD    { align1 WE_all 1Q I@5 compacted };
mov(8)          g54<1>UD        g54<8,8,1>UW                    { align1 WE_all 1Q I@5 };
shl(8)          g63<1>UD        g63<1,1,0>UD    0x00000002UD    { align1 WE_all 1Q I@5 compacted };
mov(16)         g71<1>UD        g69<32,8,4>UB                   { align1 1H I@5 };
cmp.l.f0.0(16)  null<1>D        g95<8,8,1>D     16D             { align1 1H };
add(8)          g62<1>UD        g62<1,1,0>UD    0x000006a0UD    { align1 WE_all 1Q I@5 compacted };
shl(8)          g54<1>UD        g54<1,1,0>UD    0x00000002UD    { align1 WE_all 1Q I@5 compacted };
add(8)          g63<1>UD        g63<1,1,0>UD    0x000006a0UD    { align1 WE_all 1Q I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         a0<1>UW         0x08e0UW                        { align1 WE_all 1H I@5 };
shl(16)         a0<1>UW         g85<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x08e0UW        { align1 1H A@1 };
mov(16)         g89<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
(+f0.0) sel(16) g99<1>UD        g95<1,1,0>UD    g97<1,1,0>UD    { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(8)         g61UD           g62UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1Q @1 $2 };
add(8)          g54<1>UD        g54<1,1,0>UD    0x000006a0UD    { align1 WE_all 1Q I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
or(16)          g91<1>UD        g71<1,1,0>UD    g89<1,1,0>UD    { align1 1H I@3 compacted };
cmp.nz.f0.0(16) g118<1>W        g113<16,16,1>W  0W              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(8)         g53UD           g54UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1Q @1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g93<1>UD        g91<32,8,4>UB                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov.nz.f0.0(16) g116<1>D        g118<8,8,1>W                    { align1 1H };
mov(16)         a0<1>UW         0x0ba0UW                        { align1 WE_all 1H A@2 };
shl(16)         a0<1>UW         g99<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ba0UW        { align1 1H A@1 };
mov(16)         g101<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
or(16)          g103<1>UD       g91<1,1,0>UD    g101<1,1,0>UD   { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0ce0UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g107<16,8,2>W   0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ce0UW        { align1 1H A@1 };
mov(16)         g109<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         g118<4>UB       g109<8,8,1>UD                   { align1 1H I@1 };
mov(16)         g114<1>UW       g118<32,8,4>UB                  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
mov(16)         g115<1>UW       g53<32,16,2>UB                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
(+f0.0) sel(16) g61<1>UW        g114<16,16,1>UW g115<16,16,1>UW { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000004fUD    { align1 WE_all 1N };
send(8)         nullUD          g63UD           g61UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1Q @1 $2 };
cmp.z.f0.0(16)  g119<1>D        g51<1,1,0>D     0D              { align1 1H compacted };
mov.nz.f0.0(16) null<1>D        g116<8,8,1>D                    { align1 1H I@7 };
(+f0.0) if(16)  JIP:  LABEL18         UIP:  LABEL18             { align1 1H };
mov(16)         g124<2>W        -g119<8,8,1>D                   { align1 1H I@3 };
and(16)         g123<1>UW       g124<16,8,2>UW  0x0001UW        { align1 1H I@1 };
mov(16)         g125<1>UD       g109<32,8,4>UB                  { align1 1H };
mov(16)         g124<1>W        g123<32,16,2>B                  { align1 1H I@2 };
cmp.nz.f0.0(16) g9<1>D          g125<1,1,0>D    0D              { align1 1H @2 $13.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.nz.f0.0(16) g13<1>W         g124<16,16,1>W  0W              { align1 1H I@2 };
mov(16)         g11<1>D         g13<8,8,1>W                     { align1 1H I@1 };
and.nz.f0.0(16) null<1>UD       g9<8,8,1>UD     g11<8,8,1>UD    { align1 1H I@1 };
(-f0.0) sel(16) g55<1>UD        g55<8,8,1>UD    0xff800000UD    { align1 1H $1.dst };
(-f0.0) sel(16) g57<1>UD        g57<8,8,1>UD    0xff800000UD    { align1 1H $3.dst };
(-f0.0) sel(16) g59<1>UD        g59<8,8,1>UD    0xff800000UD    { align1 1H $2.dst };
(-f0.0) sel(16) g41<1>UD        g41<8,8,1>UD    0x7f800000UD    { align1 1H $14.dst };
(-f0.0) sel(16) g47<1>UD        g47<8,8,1>UD    0x7f800000UD    { align1 1H $15.dst };
(-f0.0) sel(16) g49<1>UD        g49<8,8,1>UD    0x7f800000UD    { align1 1H $0.dst };

LABEL18:
endif(16)       JIP:  LABEL19                                   { align1 1H };
mov(16)         g125<2>W        -g119<8,8,1>D                   { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
and(16)         g15<1>UW        g125<16,8,2>UW  0x0001UW        { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g16<1>W         g15<32,16,2>B                   { align1 1H I@1 };
cmp.nz.f0.0(16) g19<1>W         g16<16,16,1>W   0W              { align1 1H I@1 };
cmp.nz.f0.0(16) null<1>W        g113<16,16,1>W  0W              { align1 1H };
mov(16)         g17<1>D         g19<8,8,1>W                     { align1 1H I@2 };
(+f0.0) sel(16) g20<1>D         -g17<1,1,0>D    0D              { align1 1H @1 $0.dst compacted };
cmp.nz.f0.0(16) g22<1>D         g20<1,1,0>D     0D              { align1 1H @1 $0.dst compacted };
mov(16)         g126<2>W        -g22<8,8,1>D                    { align1 1H I@1 };
mov(16)         g91<1>UW        g126<16,8,2>UW                  { align1 1H I@1 };

LABEL19:
else(16)        JIP:  LABEL16         UIP:  LABEL16             { align1 1H };

LABEL17:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g91<1>UW        0x0000UW                        { align1 1H I@2 };

LABEL16:
endif(16)       JIP:  LABEL20                                   { align1 1H };

LABEL20:
add(16)         g36<1>D         g25<1,1,0>D     4D              { align1 1H $7.src compacted };
add(16)         g51<1>D         g25<1,1,0>D     -12D            { align1 1H $0.src compacted };
add(16)         g71<1>D         g25<1,1,0>D     2D              { align1 1H compacted };
add(16)         g73<1>D         g25<1,1,0>D     -14D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g96<1>D         g25<1,1,0>D     1D              { align1 1H $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g98<1>D         g25<1,1,0>D     -15D            { align1 1H F@2 compacted };
and(16)         g24<1>UW        g91<1,1,0>UW    0x0001UW        { align1 1H @7 $0.dst compacted };
cmp.l.f0.0(16)  null<1>D        g36<8,8,1>D     16D             { align1 1H I@7 };
mov(16)         g35<1>W         g24<32,16,2>B                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
(+f0.0) sel(16) g53<1>UD        g36<1,1,0>UD    g51<1,1,0>UD    { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
mov(16)         a0<1>UW         0x0520UW                        { align1 WE_all 1H @1 $14.dst };
shl(16)         a0<1>UW         g53<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0520UW        { align1 1H A@1 };
mov(16)         g61<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x06e0UW                        { align1 WE_all 1H $1.dst };
shl(16)         a0<1>UW         g53<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x06e0UW        { align1 1H A@1 };
mov(16)         g114<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.l.f0.0(16)  null<1>D        g71<8,8,1>D     16D             { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.l(16)       g65<1>F         g41<1,1,0>F     g61<1,1,0>F     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         a0<1>UW         0x05e0UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g53<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x05e0UW        { align1 1H A@1 };
mov(16)         g62<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g118<1>F        g55<1,1,0>F     g114<1,1,0>F    { align1 1H I@3 compacted };
(+f0.0) sel(16) g75<1>UD        g71<1,1,0>UD    g73<1,1,0>UD    { align1 1H $10.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         a0<1>UW         0x0720UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g53<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0720UW        { align1 1H A@1 };
mov(16)         g115<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g67<1>F         g47<1,1,0>F     g62<1,1,0>F     { align1 1H I@3 compacted };
and(16)         g61<1>UD        g25<8,8,1>UD    0xfffffff8UD    { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         a0<1>UW         0x0620UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g53<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0620UW        { align1 1H A@1 };
mov(16)         g63<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0820UW                        { align1 WE_all 1H A@3 };
shl(16)         a0<1>UW         g75<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0820UW        { align1 1H A@1 };
mov(16)         g83<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         a0<1>UW         0x0ec0UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g75<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ec0UW        { align1 1H A@1 };
mov(16)         g13<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.l.f0.0(16)  null<1>D        g96<8,8,1>D     16D             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sel.ge(16)      g9<1>F          g57<1,1,0>F     g115<1,1,0>F    { align1 1H I@6 compacted };
sel.l(16)       g69<1>F         g49<1,1,0>F     g63<1,1,0>F     { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
mov(16)         a0<1>UW         0x0760UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g53<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0760UW        { align1 1H A@1 };
mov(16)         g116<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sel.l(16)       g89<1>F         g65<1,1,0>F     g83<1,1,0>F     { align1 1H I@4 compacted };
sel.ge(16)      g123<1>F        g118<1,1,0>F    g13<1,1,0>F     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
(+f0.0) sel(16) g100<1>UD       g96<1,1,0>UD    g98<1,1,0>UD    { align1 1H F@7 compacted };
mov(8)          g65<1>UW        0x76543210UV                    { align1 WE_all 1Q A@2 };
mov(16)         a0<1>UW         0x0860UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g75<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0860UW        { align1 1H A@1 };
mov(16)         g84<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         a0<1>UW         0x0120UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g75<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0120UW        { align1 1H A@1 };
mov(16)         g14<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g11<1>F         g59<1,1,0>F     g116<1,1,0>F    { align1 1H I@5 compacted };
mov(16)         a0<1>UW         0x0b20UW                        { align1 WE_all 1H A@3 };
shl(16)         a0<1>UW         g100<16,8,2>W   0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b20UW        { align1 1H A@1 };
mov(16)         g102<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0f60UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g100<16,8,2>W   0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0f60UW        { align1 1H A@1 };
mov(16)         g19<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(8)          g65<1>UD        g65<8,8,1>UW                    { align1 WE_all 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sel.l(16)       g92<1>F         g67<1,1,0>F     g84<1,1,0>F     { align1 1H I@5 compacted };
sel.ge(16)      g125<1>F        g9<1,1,0>F      g14<1,1,0>F     { align1 1H I@4 compacted };
mov(16)         a0<1>UW         0x08a0UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g75<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x08a0UW        { align1 1H A@1 };
mov(16)         g85<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         a0<1>UW         0x0160UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g75<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0160UW        { align1 1H A@1 };
mov(16)         g15<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g109<1>F        g89<1,1,0>F     g102<1,1,0>F    { align1 1H I@5 compacted };
sel.ge(16)      g36<1>F         g123<1,1,0>F    g19<1,1,0>F     { align1 1H I@4 compacted };
shl(8)          g65<1>UD        g65<1,1,0>UD    0x00000002UD    { align1 WE_all 1Q I@3 compacted };
mov(16)         a0<1>UW         0x0b80UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g100<16,8,2>W   0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b80UW        { align1 1H A@1 };
mov(16)         g103<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.l(16)       g94<1>F         g69<1,1,0>F     g85<1,1,0>F     { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(16)         a0<1>UW         0x0fa0UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g100<16,8,2>W   0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0fa0UW        { align1 1H A@1 };
mov(16)         g20<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         g9<2>W          -g77<8,8,1>D                    { align1 1H A@4 };
sel.ge(16)      g17<1>F         g11<1,1,0>F     g15<1,1,0>F     { align1 1H I@5 compacted };
mov(16)         a0<1>UW         0x0480UW                        { align1 WE_all 1H A@2 };
shl(16)         a0<1>UW         g61<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0480UW        { align1 1H A@1 };
mov(16)         g70<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
add(8)          g65<1>UD        g65<1,1,0>UD    0x000006a0UD    { align1 WE_all 1Q I@5 compacted };
sel.l(16)       g111<1>F        g92<1,1,0>F     g103<1,1,0>F    { align1 1H I@5 compacted };
mov(16)         a0<1>UW         0x0bc0UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g100<16,8,2>W   0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0bc0UW        { align1 1H A@1 };
mov(16)         g107<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g51<1>F         g125<1,1,0>F    g20<1,1,0>F     { align1 1H I@5 compacted };
and(16)         g76<1>UW        g9<16,8,2>UW    0x0001UW        { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(16)         a0<1>UW         0x0220UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g100<16,8,2>W   0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0220UW        { align1 1H A@1 };
mov(16)         g21<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(8)         g64UD           g65UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1Q @1 $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         a0<1>UW         0x0de0UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g61<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0de0UW        { align1 1H A@1 };
mov(16)         g65<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g113<1>F        g94<1,1,0>F     g107<1,1,0>F    { align1 1H I@4 compacted };
mov(16)         a0<1>UW         0x0660UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g61<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0660UW        { align1 1H A@1 };
mov(16)         g72<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         g77<1>W         g76<32,16,2>B                   { align1 1H I@4 };
sel.ge(16)      g53<1>F         g17<1,1,0>F     g21<1,1,0>F     { align1 1H I@4 compacted };
mov(16)         a0<1>UW         0x0e20UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g61<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0e20UW        { align1 1H A@1 };
mov(16)         g67<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.nz.f0.0(16) g85<1>W         g77<16,16,1>W   0W              { align1 1H A@2 };
cmp.l.f0.0(16)  g96<1>UD        g27<1,1,0>UD    0x00000006UD    { align1 1H compacted };
mov(16)         a0<1>UW         0x06a0UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g61<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x06a0UW        { align1 1H A@1 };
mov(16)         g74<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         g83<1>D         g85<8,8,1>W                     { align1 1H A@3 };
and(16)         g9<1>UD         g83<1,1,0>UD    g96<1,1,0>UD    { align1 1H I@1 compacted };
cmp.nz.f0.0(16) g97<1>W         g35<16,16,1>W   0W              { align1 1H };
mov.nz.f0.0(16) null<1>D        g9<8,8,1>D                      { align1 1H I@2 };
mov(16)         g17<1>D         g97<8,8,1>W                     { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
mov(16)         g69<2>UB        g64<16,16,1>UW                  { align1 1H F@6 };
mov(16)         a0<1>UW         0x0da0UW                        { align1 WE_all 1H F@7 };
shl(16)         a0<1>UW         g61<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0da0UW        { align1 1H A@1 };
mov(16)         g63<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
(+f0.0) if(16)  JIP:  LABEL21         UIP:  LABEL21             { align1 1H };
sel.ge(16)      g99<1>F         (abs)g65<1,1,0>F (abs)g72<1,1,0>F { align1 1H compacted };
sel.ge(16)      g101<1>F        (abs)g67<1,1,0>F (abs)g74<1,1,0>F { align1 1H A@7 compacted };
mov(8)          g76<1>UW        0x76543210UV                    { align1 WE_all 1Q };
sel.ge(16)      g103<1>F        g99<1,1,0>F     g101<1,1,0>F    { align1 1H F@1 compacted };
mov(8)          g76<1>UD        g76<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sel.ge(16)      g98<1>F         (abs)g63<1,1,0>F (abs)g70<1,1,0>F { align1 1H I@4 compacted };
add(8)          g77<1>UD        g76<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
sel.ge(16)      g107<1>F        g98<1,1,0>F     g103<1,1,0>F    { align1 1H F@1 compacted };
shl(16)         g76<1>UD        g76<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
mul(16)         g109<1>F        g107<1,1,0>F    0x34000000F  /* 1.19209e-07F */ { align1 1H A@1 compacted };
add(16)         g76<1>UD        g76<1,1,0>UD    0x00000580UD    { align1 WE_all 1H I@1 compacted };
add(16)         g61<1>F         g63<1,1,0>F     -g109<1,1,0>F   { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g76UD           g61UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $15 };
add(16)         g77<1>F         g65<1,1,0>F     -g109<1,1,0>F   { align1 1H $15.src compacted };
mov(8)          g83<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g83<1>UD        g83<8,8,1>UW                    { align1 WE_all 1Q I@1 };
add(8)          g84<1>UD        g83<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g83<1>UD        g83<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g83<1>UD        g83<1,1,0>UD    0x000005c0UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g83UD           g77UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $0 };
add(16)         g84<1>F         g67<1,1,0>F     -g109<1,1,0>F   { align1 1H $0.src compacted };
mov(8)          g89<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g89<1>UD        g89<8,8,1>UW                    { align1 WE_all 1Q I@1 };
add(8)          g90<1>UD        g89<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g89<1>UD        g89<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g89<1>UD        g89<1,1,0>UD    0x00000600UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g89UD           g84UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $1 };
add(16)         g111<1>F        g70<1,1,0>F     g109<1,1,0>F    { align1 1H compacted };
mov(8)          g92<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g95<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g98<1>UW        0x76543210UV                    { align1 WE_all 1Q F@6 };
add(16)         g85<1>D         g81<1,1,0>D     16D             { align1 1H $1.src compacted };
mov(8)          g92<1>UD        g92<8,8,1>UW                    { align1 WE_all 1Q I@4 };
mov(8)          g95<1>UD        g95<8,8,1>UW                    { align1 WE_all 1Q I@4 };
mov(8)          g98<1>UD        g98<8,8,1>UW                    { align1 WE_all 1Q I@4 };
add(8)          g93<1>UD        g92<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@3 compacted };
add(8)          g96<1>UD        g95<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@3 compacted };
add(8)          g99<1>UD        g98<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@3 compacted };
shl(16)         g92<1>UD        g92<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@3 compacted };
shl(16)         g95<1>UD        g95<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@3 compacted };
shl(16)         g98<1>UD        g98<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@3 compacted };
add(16)         g92<1>UD        g92<1,1,0>UD    0x00000580UD    { align1 WE_all 1H I@3 compacted };
add(16)         g95<1>UD        g95<1,1,0>UD    0x00000600UD    { align1 WE_all 1H I@3 compacted };
add(16)         g98<1>UD        g98<1,1,0>UD    0x000005c0UD    { align1 WE_all 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g90UD           g92UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g93UD           g95UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g96UD           g98UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
add(16)         g115<1>F        g111<1,1,0>F    -g90<1,1,0>F    { align1 1H F@1 compacted };
add(16)         g112<1>F        g72<1,1,0>F     g109<1,1,0>F    { align1 1H compacted };
mul(16)         g118<1>F        g115<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H F@2 };
add(16)         g114<1>F        g74<1,1,0>F     g109<1,1,0>F    { align1 1H compacted };
and(16)         g124<1>UD       g118<8,8,1>UD   0x007fffffUD    { align1 1H F@2 };
and(16)         g24<1>UD        g118<8,8,1>UD   0x80000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
and(16)         g62<1>UD        g118<8,8,1>UD   0x7f800000UD    { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
add(16)         g117<1>F        g114<1,1,0>F    -g93<1,1,0>F    { align1 1H A@1 compacted };
add(16)         g9<1>D          g124<8,8,1>D    1056964608D     { align1 1H I@3 };
asr(16)         g65<1>D         g62<8,8,1>D     0x00000017UD    { align1 1H A@2 };
mul(16)         g123<1>F        g117<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
add(16)         g116<1>F        g112<1,1,0>F    -g96<1,1,0>F    { align1 1H F@5 compacted };
cmp.z.f0.0(16)  null<1>F        g9<1,1,0>F      0x3f800000F  /* 1F */ { align1 1H I@2 compacted };
add(16)         g21<1>D         g65<1,1,0>D     -126D           { align1 1H I@1 compacted };
and(16)         g64<1>UD        g123<8,8,1>UD   0x7f800000UD    { align1 1H F@3 };
and(16)         g126<1>UD       g123<8,8,1>UD   0x007fffffUD    { align1 1H };
mul(16)         g119<1>F        g116<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H A@2 };
(-f0.0) sel(16) g13<1>UD        g9<8,8,1>UD     0x3f000000UD    { align1 1H };
asr(16)         g67<1>D         g64<8,8,1>D     0x00000017UD    { align1 1H I@3 };
and(16)         g63<1>UD        g119<8,8,1>UD   0x7f800000UD    { align1 1H F@1 };
and(16)         g36<1>UD        g13<8,8,1>UD    0x7fffffffUD    { align1 1H I@3 };
add(16)         g12<1>D         g126<8,8,1>D    1056964608D     { align1 1H I@5 };
add(16)         g71<1>D         g67<1,1,0>D     -126D           { align1 1H A@4 compacted };
and(16)         g125<1>UD       g119<8,8,1>UD   0x007fffffUD    { align1 1H };
asr(16)         g66<1>D         g63<8,8,1>D     0x00000017UD    { align1 1H I@5 };
or(16)          g19<1>UD        g36<1,1,0>UD    g24<1,1,0>UD    { align1 1H I@5 compacted };
and(16)         g35<1>UD        g123<8,8,1>UD   0x80000000UD    { align1 1H };
and(16)         g25<1>UD        g119<8,8,1>UD   0x80000000UD    { align1 1H };
add(16)         g10<1>D         g125<8,8,1>D    1056964608D     { align1 1H A@2 };
cmp.z.f0.0(16)  null<1>F        g10<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@1 compacted };
(-f0.0) sel(16) g14<1>UD        g10<8,8,1>UD    0x3f000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
and(16)         g37<1>UD        g14<8,8,1>UD    0x7fffffffUD    { align1 1H I@1 };
cmp.z.f0.0(16)  null<1>F        g12<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@7 compacted };
mov(16)         g10<4>UB        g121<8,8,1>UD                   { align1 1H A@2 };
(-f0.0) sel(16) g23<1>UD        g12<8,8,1>UD    0x3f000000UD    { align1 1H $0.dst };
mov(16)         g101<1>UD       g10<32,8,4>UB                   { align1 1H I@2 };
and(16)         g51<1>UD        g23<8,8,1>UD    0x7fffffffUD    { align1 1H I@2 };
cmp.g.f0.0(16)  g73<1>F         g19<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
or(16)          g61<1>UD        g51<1,1,0>UD    g35<1,1,0>UD    { align1 1H I@1 compacted };
or(16)          g52<1>UD        g37<1,1,0>UD    g25<1,1,0>UD    { align1 1H I@6 compacted };
add(16)         g23<1>D         g21<1,1,0>D     -g73<1,1,0>D    { align1 1H F@1 compacted };
mov(8)          g73<1>UW        0x76543210UV                    { align1 WE_all 1Q };
cmp.g.f0.0(16)  g74<1>F         g52<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.g.f0.0(16)  g76<1>F         g61<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@4 };
mov(8)          g73<1>UD        g73<8,8,1>UW                    { align1 WE_all 1Q I@1 };
cmp.l.f0.0(16)  g89<1>UD        g85<1,1,0>UD    g81<1,1,0>UD    { align1 1H $1.src compacted };
add(16)         g25<1>D         g71<1,1,0>D     -g76<1,1,0>D    { align1 1H F@1 compacted };
add(16)         g70<1>D         g66<1,1,0>D     -126D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g83<1>D         g70<1,1,0>D     -g74<1,1,0>D    { align1 1H A@1 compacted };
add(8)          g74<1>UD        g73<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@5 compacted };
mov(8)          g65<2>UD        g85<4,4,1>UD                    { align1 1Q };
mov(8)          g67<2>UD        g86<4,4,1>UD                    { align1 2Q };
shl(16)         g73<1>UD        g73<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@3 compacted };
add(16)         g73<1>UD        g73<1,1,0>UD    0x00000780UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g71UD           g73UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g91<1>D         -g89<1,1,0>D    g71<1,1,0>D     { align1 1H I@7 compacted };
mov(8)          g67.1<2>UD      g92<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g65.1<2>UD      g91<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g65UD           g101UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $6 };
mov(1)          g99<1>UD        0x00000580UD                    { align1 WE_all 1N $4.src };
mov(1)          g100<1>UD       0x00000600UD                    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(1)         g9UD            g99UD           nullUD          0x4240e500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V32, transpose, L1STATE_L3MOCS dst_len = 4, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1N @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(1)         g13UD           g100UD          nullUD          0x4240e500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V32, transpose, L1STATE_L3MOCS dst_len = 4, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1N @1 $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
send(16)        nullUD          g1UD            g9UD            0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $9 };
add(16)         g96<1>D         g81<1,1,0>D     18D             { align1 1H F@7 compacted };
mov(8)          g76<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(16)         g11<4>UB        g23<8,8,1>UD                    { align1 1H $9.src };
mov(16)         g13<4>UB        g83<8,8,1>UD                    { align1 1H $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(16)  g98<1>UD        g96<1,1,0>UD    g81<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g76<1>UD        g76<8,8,1>UW                    { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g102<4>UB       g11<32,8,4>UB                   { align1 1H I@4 };
add(8)          g77<1>UD        g76<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
mov(16)         g102.1<4>UB     g13<32,8,4>UB                   { align1 1H I@2 };
shl(16)         g76<1>UD        g76<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
mov(16)         g14<4>UB        g25<8,8,1>UD                    { align1 1H $9.src };
add(16)         g76<1>UD        g76<1,1,0>UD    0x00000780UD    { align1 WE_all 1H I@2 compacted };
mov(16)         g102.2<4>UB     g14<32,8,4>UB                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g74UD           g76UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $0 };
mov(16)         g102.3<4>UB     g69<16,8,2>UB                   { align1 1H I@1 };
mov(8)          g66<2>UD        g96<4,4,1>UD                    { align1 1Q $6.src };
mov(8)          g68<2>UD        g97<4,4,1>UD                    { align1 2Q $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g100<1>D        -g98<1,1,0>D    g74<1,1,0>D     { align1 1H $6.src compacted };
mov(8)          g68.1<2>UD      g101<4,4,1>UD                   { align1 2Q I@1 };
mov(8)          g66.1<2>UD      g100<4,4,1>UD                   { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g66UD           g102UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $10 };
cmp.l.f0.0(16)  null<1>UD       g27<8,8,1>UD    g105<8,8,1>UD   { align1 1H };
(+f0.0) if(16)  JIP:  LABEL23         UIP:  LABEL22             { align1 1H };
sel.ge(16)      g108<1>F        (abs)g47<1,1,0>F (abs)g57<1,1,0>F { align1 1H compacted };
sel.ge(16)      g110<1>F        (abs)g49<1,1,0>F (abs)g59<1,1,0>F { align1 1H compacted };
mov(8)          g103<1>UW       0x76543210UV                    { align1 WE_all 1Q $10.src };
mov(8)          g19<1>UW        0x76543210UV                    { align1 WE_all 1Q F@5 };
sel.ge(16)      g112<1>F        g108<1,1,0>F    g110<1,1,0>F    { align1 1H F@1 compacted };
mov(8)          g103<1>UD       g103<8,8,1>UW                   { align1 WE_all 1Q I@2 };
sel.ge(16)      g107<1>F        (abs)g41<1,1,0>F (abs)g55<1,1,0>F { align1 1H compacted };
mov(8)          g109<1>UW       0x76543210UV                    { align1 WE_all 1Q F@2 };
mov(8)          g19<1>UD        g19<8,8,1>UW                    { align1 WE_all 1Q I@3 };
add(8)          g104<1>UD       g103<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@3 compacted };
sel.ge(16)      g114<1>F        g107<1,1,0>F    g112<1,1,0>F    { align1 1H F@1 compacted };
mov(8)          g109<1>UD       g109<8,8,1>UW                   { align1 WE_all 1Q I@3 };
mov(8)          g112<1>UW       0x76543210UV                    { align1 WE_all 1Q F@1 };
add(8)          g20<1>UD        g19<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@4 compacted };
shl(16)         g103<1>UD       g103<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@4 compacted };
mul(16)         g116<1>F        g114<1,1,0>F    0x34000000F  /* 1.19209e-07F */ { align1 1H F@1 compacted };
add(8)          g110<1>UD       g109<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q A@4 compacted };
mov(8)          g112<1>UD       g112<8,8,1>UW                   { align1 WE_all 1Q I@4 };
shl(16)         g19<1>UD        g19<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@4 compacted };
add(16)         g103<1>UD       g103<1,1,0>UD   0x00000580UD    { align1 WE_all 1H I@4 compacted };
add(16)         g118<1>F        g41<1,1,0>F     -g116<1,1,0>F   { align1 1H F@1 compacted };
add(16)         g123<1>F        g49<1,1,0>F     -g116<1,1,0>F   { align1 1H compacted };
shl(16)         g109<1>UD       g109<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@4 compacted };
shl(16)         g41<1>D         -g25<8,8,1>D    0x00000017UD    { align1 1H F@2 };
add(8)          g113<1>UD       g112<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q A@4 compacted };
add(16)         g19<1>UD        g19<1,1,0>UD    0x000005c0UD    { align1 WE_all 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $10.src };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $10.src };
send(16)        g101UD          g103UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $10 };
add(16)         g109<1>UD       g109<1,1,0>UD   0x000005c0UD    { align1 WE_all 1H I@4 compacted };
shl(16)         g112<1>UD       g112<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g107UD          g109UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $11 };
add(16)         g112<1>UD       g112<1,1,0>UD   0x00000600UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g110UD          g112UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g2<1>F          g118<1,1,0>F    -g101<1,1,0>F   { align1 1H F@2 compacted };
mov(8)          g118<1>UW       0x76543210UV                    { align1 WE_all 1Q F@1 };
add(16)         g119<1>F        g47<1,1,0>F     -g116<1,1,0>F   { align1 1H compacted };
mul(16)         g11<1>F         g2<8,8,1>F      0x3f7ffffeF  /* 1F */ { align1 1H F@2 };
mov(8)          g118<1>UD       g118<8,8,1>UW                   { align1 WE_all 1Q I@1 };
add(16)         g1<1>F          g59<1,1,0>F     g116<1,1,0>F    { align1 1H $9.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g3<1>F          g119<1,1,0>F    -g107<1,1,0>F   { align1 1H F@3 compacted };
add(8)          g119<1>UD       g118<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q A@1 compacted };
mul(16)         g13<1>F         g3<8,8,1>F      0x3f7ffffeF  /* 1F */ { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g9<1>F          g123<1,1,0>F    -g110<1,1,0>F   { align1 1H F@7 compacted };
mov(8)          g123<1>UW       0x76543210UV                    { align1 WE_all 1Q F@1 };
add(16)         g124<1>F        g55<1,1,0>F     g116<1,1,0>F    { align1 1H compacted };
shl(16)         g118<1>UD       g118<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mul(16)         g15<1>F         g9<8,8,1>F      0x3f7ffffeF  /* 1F */ { align1 1H F@2 };
mov(8)          g123<1>UD       g123<8,8,1>UW                   { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g9UD            g19UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
shl(16)         g19<1>D         -g23<8,8,1>D    0x00000017UD    { align1 1H };
add(16)         g118<1>UD       g118<1,1,0>UD   0x00000580UD    { align1 WE_all 1H I@3 compacted };
add(16)         g21<1>D         g19<8,8,1>D     1132462080D     { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g113UD          g118UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $14 };
mul(16)         g48<1>F         g11<1,1,0>F     g21<1,1,0>F     { align1 1H A@1 compacted };
rndd(16)        g51<1>F         g48<1,1,0>F                     { align1 1H F@1 compacted };
add(16)         g47<1>D         g41<8,8,1>D     1132462080D     { align1 1H F@1 };
sel.ge(16)      g54<1>F         g51<1,1,0>F     0x0F  /* 0F */  { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
add(16)         g63<1>F         g124<1,1,0>F    -g113<1,1,0>F   { align1 1H F@5 compacted };
add(8)          g124<1>UD       g123<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q A@1 compacted };
add(16)         g125<1>F        g57<1,1,0>F     g116<1,1,0>F    { align1 1H compacted };
sel.l(16)       g58<1>F         g54<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mul(16)         g67<1>F         g63<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
shl(16)         g123<1>UD       g123<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mul(16)         g73<1>F         g67<1,1,0>F     g21<1,1,0>F     { align1 1H F@1 compacted };
shl(16)         g22<1>D         -g83<8,8,1>D    0x00000017UD    { align1 1H F@1 };
add(16)         g123<1>UD       g123<1,1,0>UD   0x00000600UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
rndd(16)        g76<1>F         -g73<1,1,0>F                    { align1 1H compacted };
add(16)         g37<1>D         g22<8,8,1>D     1132462080D     { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g119UD          g123UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $15 };
sel.ge(16)      g85<1>F         -g76<1,1,0>F    0x0F  /* 0F */  { align1 1H F@1 compacted };
mul(16)         g49<1>F         g13<1,1,0>F     g37<1,1,0>F     { align1 1H I@1 compacted };
mov(16)         g21<2>W         -g17<8,8,1>D                    { align1 1H F@4 };
sel.l(16)       g35<1>F         g85<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@2 };
rndd(16)        g52<1>F         g49<1,1,0>F                     { align1 1H F@2 compacted };
mul(16)         g50<1>F         g15<1,1,0>F     g47<1,1,0>F     { align1 1H I@7 compacted };
and(16)         g107<1>UW       g21<16,8,2>UW   0x0001UW        { align1 1H I@1 };
sel.ge(16)      g55<1>F         g52<1,1,0>F     0x0F  /* 0F */  { align1 1H F@2 compacted };
rndd(16)        g53<1>F         g50<1,1,0>F                     { align1 1H F@2 compacted };
mov.nz.f0.0(16) null<1>W        g107<32,16,2>B                  { align1 1H I@1 };
mov(16)         g15<4>UB        g58<8,8,1>F                     { align1 1H F@3 };
sel.l(16)       g60<1>F         g55<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@2 };
sel.ge(16)      g56<1>F         g53<1,1,0>F     0x0F  /* 0F */  { align1 1H F@2 compacted };
mov(16)         g111<1>UW       g15<32,8,4>UB                   { align1 1H I@1 };
sel.l(16)       g62<1>F         g56<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(-f0.0) sel(16) g95<1>UW        g111<16,16,1>UW 0x0000UW        { align1 1H };
mov(16)         g16<4>UB        g60<8,8,1>F                     { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         g112<1>UW       g16<32,8,4>UB                   { align1 1H I@1 };
(-f0.0) sel(16) g96<1>UW        g112<16,16,1>UW 0x0000UW        { align1 1H I@1 };
mov(16)         g17<4>UB        g62<8,8,1>F                     { align1 1H F@1 };
mov(16)         g113<1>UW       g17<32,8,4>UB                   { align1 1H I@1 };
(-f0.0) sel(16) g97<1>UW        g113<16,16,1>UW 0x0000UW        { align1 1H I@1 };
mov(16)         g18<4>UB        g35<8,8,1>F                     { align1 1H F@7 };
mov(16)         g108<1>UW       g18<32,8,4>UB                   { align1 1H I@1 };
(-f0.0) sel(16) g92<1>UW        g108<16,16,1>UW 0x0000UW        { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g65<1>F         g1<1,1,0>F      -g119<1,1,0>F   { align1 1H $6.src compacted };
mul(16)         g71<1>F         g65<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
add(16)         g64<1>F         g125<1,1,0>F    -g9<1,1,0>F     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mul(16)         g69<1>F         g64<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@1 };
mul(16)         g74<1>F         g69<1,1,0>F     g37<1,1,0>F     { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
rndd(16)        g77<1>F         -g74<1,1,0>F                    { align1 1H F@1 compacted };
mul(16)         g75<1>F         g71<1,1,0>F     g47<1,1,0>F     { align1 1H F@5 compacted };
sel.ge(16)      g89<1>F         -g77<1,1,0>F    0x0F  /* 0F */  { align1 1H F@2 compacted };
rndd(16)        g83<1>F         -g75<1,1,0>F                    { align1 1H F@2 compacted };
sel.l(16)       g93<1>F         g89<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@2 };
sel.ge(16)      g90<1>F         -g83<1,1,0>F    0x0F  /* 0F */  { align1 1H F@2 compacted };
mov(16)         g19<4>UB        g93<8,8,1>F                     { align1 1H F@2 };
sel.l(16)       g98<1>F         g90<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g109<1>UW       g19<32,8,4>UB                   { align1 1H I@1 };
(-f0.0) sel(16) g93<1>UW        g109<16,16,1>UW 0x0000UW        { align1 1H I@1 };
mov(16)         g20<4>UB        g98<8,8,1>F                     { align1 1H F@1 };
mov(16)         g110<1>UW       g20<32,8,4>UB                   { align1 1H I@1 };
(-f0.0) sel(16) g94<1>UW        g110<16,16,1>UW 0x0000UW        { align1 1H I@1 };
else(16)        JIP:  LABEL22         UIP:  LABEL22             { align1 1H };

LABEL23:
mov(16)         g97<1>UW        0x0080UW                        { align1 1H I@6 };
mov(16)         g96<1>UW        0x0080UW                        { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g95<1>UW        0x0080UW                        { align1 1H };
mov(16)         g94<1>UW        0x0000UW                        { align1 1H A@5 };
mov(16)         g93<1>UW        0x0000UW                        { align1 1H A@7 };
mov(16)         g92<1>UW        0x0000UW                        { align1 1H };

LABEL22:
endif(16)       JIP:  LABEL21                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g123<1>D        g81<1,1,0>D     g27<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g9<1>UW         0x76543210UV                    { align1 WE_all 1Q F@7 };
cmp.l.f0.0(16)  g125<1>UD       g123<1,1,0>UD   g81<1,1,0>UD    { align1 1H A@2 compacted };
add(16)         g3<1>D          g123<1,1,0>D    28D             { align1 1H $9.src compacted };
mov(8)          g9<1>UD         g9<8,8,1>UW                     { align1 WE_all 1Q I@3 };
mov(16)         g35<2>UB        g95<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g53<2>UB        g94<16,16,1>UW                  { align1 1H A@2 };
mov(16)         g54<2>UB        g93<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g55<2>UB        g92<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g27<2>UB        g97<16,16,1>UW                  { align1 1H };
mov(16)         g28<2>UB        g96<16,16,1>UW                  { align1 1H };
mov(8)          g107<2>UD       g3<4,4,1>UD                     { align1 1Q I@7 };
mov(8)          g109<2>UD       g4<4,4,1>UD                     { align1 2Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(8)          g10<1>UD        g9<1,1,0>UD     0x00000008UD    { align1 WE_all 1Q A@7 compacted };
mov(16)         g111<1>UD       g35<16,8,2>UB                   { align1 1H A@7 };
shl(16)         g9<1>UD         g9<1,1,0>UD     0x00000002UD    { align1 WE_all 1H I@2 compacted };
add(16)         g9<1>UD         g9<1,1,0>UD     0x00000780UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g119UD          g9UD            nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g9<1>UD         g3<1,1,0>UD     g123<1,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g1<1>D          -g125<1,1,0>D   g119<1,1,0>D    { align1 1H $9.src compacted };
add(16)         g11<1>D         -g9<1,1,0>D     g1<1,1,0>D      { align1 1H I@1 compacted };
mov(8)          g109.1<2>UD     g12<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g107.1<2>UD     g11<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g107UD          g111UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $1 };
add(16)         g14<1>D         g123<1,1,0>D    40D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g116<1>UD       g28<16,8,2>UB                   { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
cmp.l.f0.0(16)  g16<1>UD        g14<1,1,0>UD    g123<1,1,0>UD   { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g112<2>UD       g14<4,4,1>UD                    { align1 1Q F@7 };
mov(8)          g114<2>UD       g15<4,4,1>UD                    { align1 2Q F@7 };
add(16)         g18<1>D         -g16<1,1,0>D    g1<1,1,0>D      { align1 1H A@3 compacted };
mov(8)          g114.1<2>UD     g19<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g112.1<2>UD     g18<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g112UD          g116UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $2 };
add(16)         g21<1>D         g123<1,1,0>D    52D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
mov(16)         g125<1>UD       g27<16,8,2>UB                   { align1 1H };
cmp.l.f0.0(16)  g23<1>UD        g21<1,1,0>UD    g123<1,1,0>UD   { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
mov(8)          g117<2>UD       g21<4,4,1>UD                    { align1 1Q $2.src };
mov(8)          g119<2>UD       g22<4,4,1>UD                    { align1 2Q };
add(16)         g25<1>D         -g23<1,1,0>D    g1<1,1,0>D      { align1 1H I@3 compacted };
mov(8)          g119.1<2>UD     g26<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g117.1<2>UD     g25<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g117UD          g125UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $7 };
add(16)         g35<1>D         g123<1,1,0>D    34D             { align1 1H compacted };
mov(16)         g13<1>UD        g55<16,8,2>UB                   { align1 1H };
cmp.l.f0.0(16)  g37<1>UD        g35<1,1,0>UD    g123<1,1,0>UD   { align1 1H A@2 compacted };
mov(8)          g9<2>UD         g35<4,4,1>UD                    { align1 1Q };
mov(8)          g11<2>UD        g36<4,4,1>UD                    { align1 2Q };
add(16)         g41<1>D         -g37<1,1,0>D    g1<1,1,0>D      { align1 1H I@3 compacted };
mov(8)          g11.1<2>UD      g42<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g9.1<2>UD       g41<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g9UD            g13UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $3 };
add(16)         g47<1>D         g123<1,1,0>D    46D             { align1 1H F@6 compacted };
mov(16)         g18<1>UD        g54<16,8,2>UB                   { align1 1H };
cmp.l.f0.0(16)  g49<1>UD        g47<1,1,0>UD    g123<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g14<2>UD        g47<4,4,1>UD                    { align1 1Q $3.src };
mov(8)          g16<2>UD        g48<4,4,1>UD                    { align1 2Q };
add(16)         g51<1>D         -g49<1,1,0>D    g1<1,1,0>D      { align1 1H A@2 compacted };
mov(8)          g16.1<2>UD      g52<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g14.1<2>UD      g51<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g14UD           g18UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $4 };
add(16)         g54<1>D         g123<1,1,0>D    58D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g23<1>UD        g53<16,8,2>UB                   { align1 1H };
cmp.l.f0.0(16)  g56<1>UD        g54<1,1,0>UD    g123<1,1,0>UD   { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g19<2>UD        g54<4,4,1>UD                    { align1 1Q F@3 };
mov(8)          g21<2>UD        g55<4,4,1>UD                    { align1 2Q };
add(16)         g58<1>D         -g56<1,1,0>D    g1<1,1,0>D      { align1 1H I@3 compacted };
mov(8)          g21.1<2>UD      g59<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g19.1<2>UD      g58<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g19UD           g23UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $0 };
cmp.z.f0.0(16)  null<1>D        g121<8,8,1>D    1D              { align1 1H };
mov(8)          g102<1>UW       0x76543210UV                    { align1 WE_all 1Q $10.src };
add(16)         g63<1>D         g123<1,1,0>D    22D             { align1 1H F@7 compacted };
mov(8)          g102<1>UD       g102<8,8,1>UW                   { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g24<2>UD        g63<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g26<2>UD        g64<4,4,1>UD                    { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(8)          g103<1>UD       g102<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@3 compacted };
shl(16)         g102<1>UD       g102<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g102<1>UD       g102<1,1,0>UD   0x00000440UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g100UD          g102UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
(-f0.0) sel(16) g61<1>UD        g100<8,8,1>UD   0x00000002UD    { align1 1H F@1 };
mov(16)         g56<4>UB        g61<8,8,1>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
cmp.l.f0.0(16)  g65<1>UD        g63<1,1,0>UD    g123<1,1,0>UD   { align1 1H F@7 compacted };
mov(16)         g35<1>UD        g56<32,8,4>UB                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g67<1>D         -g65<1,1,0>D    g1<1,1,0>D      { align1 1H I@2 compacted };
mov(8)          g26.1<2>UD      g68<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g24.1<2>UD      g67<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g24UD           g35UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $6 };

LABEL21:
endif(16)       JIP:  LABEL24                                   { align1 1H };

LABEL24:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g22<1>UW        0x76543210UV                    { align1 WE_all 1Q F@1 };
mov(8)          g92<1>UW        0x76543210UV                    { align1 WE_all 1Q F@4 };
cmp.nz.f0.0(16) null<1>D        g79<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g113<1>UW       0x76543210UV                    { align1 WE_all 1Q F@7 };
mov(8)          g37<1>UW        0x76543210UV                    { align1 WE_all 1Q F@7 };
mov(8)          g22<1>UD        g22<8,8,1>UW                    { align1 WE_all 1Q I@5 };
mov(8)          g92<1>UD        g92<8,8,1>UW                    { align1 WE_all 1Q I@5 };
(+f0.0) sel(16) g70<1>UD        g105<1,1,0>UD   0x00000000UD    { align1 1H F@6 compacted };
mov(8)          g113<1>UD       g113<8,8,1>UW                   { align1 WE_all 1Q I@5 };
mov(8)          g37<1>UD        g37<8,8,1>UW                    { align1 WE_all 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
add(8)          g23<1>UD        g22<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q $0.dst compacted };
add(8)          g93<1>UD        g92<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(8)          g114<1>UD       g113<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q A@4 compacted };
shl(8)          g37<1>UD        g37<1,1,0>UD    0x00000002UD    { align1 WE_all 1Q I@4 compacted };
shl(16)         g22<1>UD        g22<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@4 compacted };
shl(16)         g92<1>UD        g92<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@4 compacted };
shl(16)         g113<1>UD       g113<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@4 compacted };
add(8)          g37<1>UD        g37<1,1,0>UD    0x00000680UD    { align1 WE_all 1Q I@4 compacted };
add(16)         g22<1>UD        g22<1,1,0>UD    0x00000640UD    { align1 WE_all 1H I@4 compacted };
add(16)         g92<1>UD        g92<1,1,0>UD    0x00000740UD    { align1 WE_all 1H I@4 compacted };
add(16)         g113<1>UD       g113<1,1,0>UD   0x00000480UD    { align1 WE_all 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(8)         g36UD           g37UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1Q @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g20UD           g22UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g90UD           g92UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g111UD          g113UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
add3(16)        g33<1>D         g90<8,8,1>D     g20<8,8,1>D     g39<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
mov(16)         g57<2>W         -g111<8,8,1>D                   { align1 1H };
and(16)         g72<1>UW        g57<16,8,2>UW   0x0001UW        { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(16)         g73<1>UW        g36<16,16,1>UW  g72<16,16,1>UW  { align1 1H };
mov.nz.f0.0(16) null<1>W        g73<32,16,2>B                   { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL25         UIP:  LABEL25             { align1 1H };
mov(8)          g74<1>UW        0x76543210UV                    { align1 WE_all 1Q F@7 };
mov(8)          g74<1>UD        g74<8,8,1>UW                    { align1 WE_all 1Q I@1 };
add(8)          g75<1>UD        g74<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@1 compacted };
shl(16)         g74<1>UD        g74<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g74<1>UD        g74<1,1,0>UD    0x000006c0UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g72UD           g74UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
cmp.z.f0.0(16)  null<1>W        g72<16,8,2>W    0W              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL26         UIP:  LABEL26             { align1 1H };
mov(8)          g95<1>UW        0x76543210UV                    { align1 WE_all 1Q F@2 };
mov(8)          g95<1>UD        g95<8,8,1>UW                    { align1 WE_all 1Q I@1 };
add(8)          g96<1>UD        g95<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g95<1>UD        g95<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g95<1>UD        g95<1,1,0>UD    0x00000740UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g93UD           g95UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
cmp.nz.f0.0(16) null<1>D        g93<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL28         UIP:  LABEL27             { align1 1H };
mov(8)          g98<1>UW        0x76543210UV                    { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g37<1>UW        0x76543210UV                    { align1 WE_all 1Q F@7 };
mov(8)          g47<1>UW        0x76543210UV                    { align1 WE_all 1Q F@6 };
mov(8)          g101<1>UW       0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g68<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g98<1>UD        g98<8,8,1>UW                    { align1 WE_all 1Q I@5 };
mov(8)          g37<1>UD        g37<8,8,1>UW                    { align1 WE_all 1Q I@5 };
mov(8)          g47<1>UD        g47<8,8,1>UW                    { align1 WE_all 1Q I@5 };
mov(8)          g101<1>UD       g101<8,8,1>UW                   { align1 WE_all 1Q I@5 };
mov(8)          g68<1>UD        g68<8,8,1>UW                    { align1 WE_all 1Q I@5 };
add(8)          g99<1>UD        g98<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(8)          g38<1>UD        g37<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@5 compacted };
add(8)          g48<1>UD        g47<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(8)          g102<1>UD       g101<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q A@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(8)          g69<1>UD        g68<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@5 compacted };
shl(16)         g98<1>UD        g98<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@5 compacted };
shl(16)         g37<1>UD        g37<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@5 compacted };
shl(16)         g47<1>UD        g47<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@5 compacted };
shl(16)         g101<1>UD       g101<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@5 compacted };
shl(16)         g68<1>UD        g68<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@5 compacted };
add(16)         g98<1>UD        g98<1,1,0>UD    0x00000740UD    { align1 WE_all 1H I@5 compacted };
add(16)         g37<1>UD        g37<1,1,0>UD    0x00000540UD    { align1 WE_all 1H I@5 compacted };
add(16)         g47<1>UD        g47<1,1,0>UD    0x00000540UD    { align1 WE_all 1H I@5 compacted };
add(16)         g101<1>UD       g101<1,1,0>UD   0x00000740UD    { align1 WE_all 1H I@5 compacted };
add(16)         g68<1>UD        g68<1,1,0>UD    0x00000400UD    { align1 WE_all 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g96UD           g98UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g35UD           g37UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g41UD           g47UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g99UD           g101UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g66UD           g68UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
shl(16)         g74<1>D         g96<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g77<1>D         g35<1,1,0>D     g74<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
shr(16)         g75<1>UD        g99<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
cmp.l.f0.0(16)  g79<1>UD        g77<1,1,0>UD    g41<1,1,0>UD    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(8)          g47<2>UD        g77<4,4,1>UD                    { align1 1Q };
mov(8)          g49<2>UD        g78<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
add3(16)        g81<1>D         g66<8,8,1>D     g75<8,8,1>D     -g79<1,1,1>D { align1 1H I@3 };
mov(8)          g49.1<2>UD      g82<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g47.1<2>UD      g81<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g98UD           g47UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $14 };
else(16)        JIP:  LABEL27         UIP:  LABEL27             { align1 1H };

LABEL28:
mov(16)         g98<1>UD        0xffffffc0UD                    { align1 1H $14.dst };

LABEL27:
endif(16)       JIP:  LABEL26                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g107<1>UW       0x76543210UV                    { align1 WE_all 1Q F@2 };
mov(8)          g110<1>UW       0x76543210UV                    { align1 WE_all 1Q $1.src };
mov(8)          g50<1>UW        0x76543210UV                    { align1 WE_all 1Q $14.src };
mov(8)          g53<1>UW        0x76543210UV                    { align1 WE_all 1Q F@2 };
mov(8)          g74<1>UW        0x76543210UV                    { align1 WE_all 1Q $10.src };
shl(16)         g83<1>D         g105<8,8,1>D    0x00000003UD    { align1 1H F@2 };
mov(8)          g107<1>UD       g107<8,8,1>UW                   { align1 WE_all 1Q I@6 };
mov(8)          g110<1>UD       g110<8,8,1>UW                   { align1 WE_all 1Q I@6 };
mov(8)          g50<1>UD        g50<8,8,1>UW                    { align1 WE_all 1Q I@6 };
mov(8)          g53<1>UD        g53<8,8,1>UW                    { align1 WE_all 1Q I@6 };
mov(8)          g74<1>UD        g74<8,8,1>UW                    { align1 WE_all 1Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(8)          g108<1>UD       g107<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q A@2 compacted };
add(8)          g111<1>UD       g110<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@5 compacted };
add(8)          g51<1>UD        g50<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@5 compacted };
add(8)          g54<1>UD        g53<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(8)          g75<1>UD        g74<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@5 compacted };
shl(16)         g107<1>UD       g107<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@5 compacted };
shl(16)         g110<1>UD       g110<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@5 compacted };
shl(16)         g50<1>UD        g50<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@5 compacted };
shl(16)         g53<1>UD        g53<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@5 compacted };
shl(16)         g74<1>UD        g74<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@5 compacted };
add(16)         g107<1>UD       g107<1,1,0>UD   0x00000740UD    { align1 WE_all 1H I@5 compacted };
add(16)         g110<1>UD       g110<1,1,0>UD   0x00000740UD    { align1 WE_all 1H I@5 compacted };
add(16)         g50<1>UD        g50<1,1,0>UD    0x00000540UD    { align1 WE_all 1H I@5 compacted };
add(16)         g53<1>UD        g53<1,1,0>UD    0x00000540UD    { align1 WE_all 1H I@5 compacted };
add(16)         g74<1>UD        g74<1,1,0>UD    0x00000400UD    { align1 WE_all 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g102UD          g107UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $1.src };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $1.src };
send(16)        g108UD          g110UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g48UD           g50UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g51UD           g53UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g72UD           g74UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
shl(16)         g85<1>D         g102<8,8,1>D    0x00000002UD    { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
shr(16)         g89<1>UD        g108<1,1,0>UD   0x0000001eUD    { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g91<1>D         g48<1,1,0>D     g85<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
cmp.l.f0.0(16)  g93<1>UD        g91<1,1,0>UD    g51<1,1,0>UD    { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
or(16)          g52<1>UD        g98<1,1,0>UD    g83<1,1,0>UD    { align1 1H $14.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
add3(16)        g95<1>D         g72<8,8,1>D     g89<8,8,1>D     -g93<1,1,1>D { align1 1H };
mov(8)          g48<2>UD        g91<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $15.src };
mov(8)          g50<2>UD        g92<4,4,1>UD                    { align1 2Q };
mov(8)          g48.1<2>UD      g95<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g50.1<2>UD      g96<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g48UD           g52UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $7 };

LABEL26:
endif(16)       JIP:  LABEL25                                   { align1 1H };
mov(16)         g97<1>UD        g70<16,8,2>UW                   { align1 1H };
cmp.l.f0.0(16)  null<1>D        g39<8,8,1>D     g97<8,8,1>D     { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL29         UIP:  LABEL29             { align1 1H };
shl(16)         g98<1>D         g33<8,8,1>D     0x00000002UD    { align1 1H I@7 };
mov(8)          g56<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g59<1>UW        0x76543210UV                    { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g77<1>UW        0x76543210UV                    { align1 WE_all 1Q F@5 };
mov(8)          g122<1>UW       0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g56<1>UD        g56<8,8,1>UW                    { align1 WE_all 1Q I@4 };
mov(8)          g59<1>UD        g59<8,8,1>UW                    { align1 WE_all 1Q I@4 };
mov(8)          g77<1>UD        g77<8,8,1>UW                    { align1 WE_all 1Q I@4 };
mov(8)          g122<1>UD       g122<8,8,1>UW                   { align1 WE_all 1Q I@4 };
add(8)          g57<1>UD        g56<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@4 compacted };
add(8)          g60<1>UD        g59<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(8)          g78<1>UD        g77<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@4 compacted };
add(8)          g123<1>UD       g122<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q A@4 compacted };
shl(16)         g56<1>UD        g56<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@4 compacted };
shl(16)         g59<1>UD        g59<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@4 compacted };
shl(16)         g77<1>UD        g77<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@4 compacted };
shl(16)         g122<1>UD       g122<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@4 compacted };
add(16)         g56<1>UD        g56<1,1,0>UD    0x00000540UD    { align1 WE_all 1H I@4 compacted };
add(16)         g59<1>UD        g59<1,1,0>UD    0x00000540UD    { align1 WE_all 1H I@4 compacted };
add(16)         g77<1>UD        g77<1,1,0>UD    0x00000400UD    { align1 WE_all 1H I@4 compacted };
add(16)         g122<1>UD       g122<1,1,0>UD   0x000004c0UD    { align1 WE_all 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g54UD           g56UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g57UD           g59UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $0.src };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $0.src };
send(16)        g75UD           g77UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g120UD          g122UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
add(16)         g101<1>D        g54<1,1,0>D     g98<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shr(16)         g99<1>UD        g33<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
cmp.l.f0.0(16)  g103<1>UD       g101<1,1,0>UD   g57<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g53<2>UD        g101<4,4,1>UD                   { align1 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
mov(8)          g55<2>UD        g102<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add3(16)        g105<1>D        g75<8,8,1>D     g99<8,8,1>D     -g103<1,1,1>D { align1 1H I@3 };
mov(8)          g55.1<2>UD      g106<4,4,1>UD                   { align1 2Q I@1 };
mov(8)          g53.1<2>UD      g105<4,4,1>UD                   { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g53UD           g120UD          0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $7 };

LABEL29:
endif(16)       JIP:  LABEL25                                   { align1 1H };

LABEL25:
endif(16)       JIP:  LABEL30                                   { align1 1H };

LABEL30:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
mov(16)         g107<1>UD       g70<16,8,2>UW                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g111<1>D        g108<0,1,0>D    g107<0,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g109<1>UD       g107<0,1,0>UW                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g58<1>UD        g111<16,8,2>UW                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g60<2>UW        g111<8,8,1>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.nz.f0.0(16) g116<1>W        g60<16,8,2>W    0W              { align1 1H A@1 };
cmp.z.f0.0(16)  g119<1>W        g87<16,8,2>W    0W              { align1 1H $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
mov(16)         g114<1>D        g116<8,8,1>W                    { align1 1H $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g117<1>D        g119<8,8,1>W                    { align1 1H A@2 };
and.nz.f0.0(16) null<1>UD       g114<8,8,1>UD   g117<8,8,1>UD   { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL31         UIP:  LABEL31             { align1 1H };
add(8)          g120<1>D        g43<8,4,2>D     64D             { align1 1Q $7.src compacted };
add(8)          g121<1>D        g45<8,4,2>D     64D             { align1 2Q $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(8)   g122<1>UD       g120<8,8,1>UD   g43<8,4,2>UD    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N A@2 };
cmp.l.f0.0(8)   g123<1>UD       g121<8,8,1>UD   g45<8,4,2>UD    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g54<2>UD        g120<4,4,1>UD                   { align1 1Q };
mov(8)          g56<2>UD        g121<4,4,1>UD                   { align1 2Q $7.src };
add(8)          g124<1>D        -g122<8,8,1>D   g43.1<8,4,2>D   { align1 1Q A@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $7.src };
add(8)          g125<1>D        -g123<8,8,1>D   g45.1<8,4,2>D   { align1 2Q A@3 };
mov(8)          g54.1<2>UD      g124<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g56.1<2>UD      g125<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g99UD           g54UD           g58UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $7 };

LABEL31:
endif(16)       JIP:  LABEL32                                   { align1 1H };

LABEL32:
mul(16)         g1<1>D          g109<8,8,1>D    g29<16,8,2>W    { align1 1H I@7 };
cmp.l.f0.0(16)  null<1>D        g39<8,8,1>D     g107<8,8,1>D    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL33         UIP:  LABEL33             { align1 1H };
add3(16)        g3<1>D          g99.0<0,1,0>D   g1<8,8,1>D      g39<1,1,1>D { align1 1H @3 $7.dst };
mov(8)          g20<1>UW        0x76543210UV                    { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
shl(16)         g9<1>D          g3<8,8,1>D      0x00000003UD    { align1 1H A@2 };
mov(8)          g20<1>UD        g20<8,8,1>UW                    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(8)          g12<1>D         g5<8,4,2>D      g9<1,1,0>D      { align1 1Q A@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $3.src };
add(8)          g13<1>D         g7<8,4,2>D      g10<1,1,0>D     { align1 2Q I@3 compacted };
add(8)          g21<1>UD        g20<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
shr(16)         g10<1>UD        g3<1,1,0>UD     0x0000001dUD    { align1 1H F@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(8)   g14<1>UD        g12<8,8,1>UD    g5<8,4,2>UD     { align1 1Q A@4 };
mov(8)          g59<2>UD        g12<4,4,1>UD                    { align1 1Q $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $4.src };
cmp.l.f0.0(8)   g15<1>UD        g13<8,8,1>UD    g7<8,4,2>UD     { align1 2Q A@5 };
mov(8)          g61<2>UD        g13<4,4,1>UD                    { align1 2Q F@1 };
shl(16)         g20<1>UD        g20<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@6 compacted };
add(16)         g20<1>UD        g20<1,1,0>UD    0x00000500UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g18UD           g20UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add3(16)        g16<1>D         g18<8,8,1>D     g10<8,8,1>D     -g14<1,1,1>D { align1 1H A@4 };
mov(8)          g61.1<2>UD      g17<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g59.1<2>UD      g16<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g59UD           g31UD           0x08003586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 4 flat ) base_offset 0  { align1 1H $7 };

LABEL33:
endif(16)       JIP:  LABEL34                                   { align1 1H };

LABEL34:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q F@3 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_BFS_build_qnodes_pc_amplify_code[] = {
    0x80000065, 0x3d058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x13050220, 0x00000024, 0x00000000,
    0x80030061, 0x0a054010, 0x00000000, 0x76543210,
    0xe23e1b40, 0x00013d03, 0x00041b69, 0x23058660,
    0x02461305, 0x00000001, 0x80031b61, 0x0a050120,
    0x00460a05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa003e0c, 0x00340000, 0xe40b1940, 0x00800a03,
    0xe30a1969, 0x00200a03, 0xe30a1940, 0x80000a03,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xe07a0065, 0x0021025b, 0xe0650065, 0x0011025b,
    0x212b0061, 0x001102cc, 0x2a2d0061, 0x001102cc,
    0x212b1261, 0x00110204, 0x2a2d1261, 0x00110204,
    0xa1671240, 0x038e2b03, 0xa16e0040, 0x020e2b03,
    0xa1740040, 0x010e2b03, 0xa1170040, 0x048e2b03,
    0xa1270040, 0x050e2b03, 0xaa681140, 0x038e2d03,
    0xaa6f0040, 0x020e2d03, 0xaa750040, 0x010e2d03,
    0xaa180040, 0x048e2d03, 0xaa280040, 0x050e2d03,
    0x00044131, 0x4d440000, 0xfb042b24, 0x003c0000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00031f70, 0x69050220, 0x52466705, 0x00442b06,
    0x00031f70, 0x70050220, 0x52466e05, 0x00442b06,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x00131f70, 0x6a050220, 0x52466805, 0x00442d06,
    0x00030070, 0x76050220, 0x52467405, 0x00442b06,
    0x00131f70, 0x71050220, 0x52466f05, 0x00442d06,
    0x00131f70, 0x77050220, 0x52467505, 0x00442d06,
    0x00031e40, 0x6b052660, 0x06466905, 0x00442b26,
    0x00031e40, 0x72052660, 0x06467005, 0x00442b26,
    0x00131e40, 0x6c052660, 0x06466a05, 0x00442d26,
    0x00031e40, 0x78052660, 0x06467605, 0x00442b26,
    0x00131e40, 0x73052660, 0x06467105, 0x00442d26,
    0x00131e40, 0x79052660, 0x06467705, 0x00442d26,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049231, 0x00020100, 0xfa080a14, 0x04004d04,
    0x80030061, 0x0c054010, 0x00000000, 0x76543210,
    0x80031961, 0x0c050120, 0x00460c05, 0x00000000,
    0xe40d1940, 0x00800c03, 0xe30c1969, 0x00200c03,
    0xe30c1940, 0x84000c03, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049331, 0x00020100,
    0xfa080c14, 0x04004f04, 0x80030061, 0x0e054010,
    0x00000000, 0x76543210, 0x80031961, 0x0e050120,
    0x00460e05, 0x00000000, 0xe40f1940, 0x00800e03,
    0xe30e1969, 0x00200e03, 0xe30e1940, 0x88000e03,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049431, 0x00020100, 0xfa080e14, 0x04005104,
    0x80030061, 0x10054010, 0x00000000, 0x76543210,
    0x80031961, 0x10050120, 0x00461005, 0x00000000,
    0xe4111940, 0x00801003, 0xe3101969, 0x00201003,
    0xe3101940, 0x8c001003, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049531, 0x00020100,
    0xfa081014, 0x04005304, 0x80030061, 0x19054010,
    0x00000000, 0x76543210, 0x00030061, 0x2f060220,
    0x00346e05, 0x00000000, 0x00130061, 0x31060220,
    0x00346f05, 0x00000000, 0x80031b61, 0x19050120,
    0x00461905, 0x00000000, 0x00031b61, 0x2f260220,
    0x00347205, 0x00000000, 0x00131b61, 0x31260220,
    0x00347305, 0x00000000, 0xe41a1b40, 0x00801903,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x0d240000, 0xfb042f24, 0x000c0000,
    0xe3191969, 0x00201903, 0xe3191940, 0x54001903,
    0xa07c2640, 0x0c000d03, 0xa0050040, 0x02800d03,
    0x277e1a70, 0x0d007c03, 0x27071a70, 0x0d000503,
    0x00033661, 0x31060220, 0x00340505, 0x00000000,
    0x00130061, 0x33060220, 0x00340605, 0x00000000,
    0xa003c640, 0x0f027e02, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa0091c40, 0x0f020702,
    0x00131961, 0x33260220, 0x00340a05, 0x00000000,
    0x00031a61, 0x31260220, 0x00340905, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x0b140000, 0xfb043124, 0x00040000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00042769, 0x11058660, 0x02460b05, 0x00000006,
    0xa0151940, 0x11000d02, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049831, 0x00020100,
    0xfa081914, 0x04001504, 0x80030061, 0x1c054010,
    0x00000000, 0x76543210, 0x80030061, 0x41054010,
    0x00000000, 0x76543210, 0x80031a61, 0x1c050120,
    0x00461c05, 0x00000000, 0x80031a61, 0x41050120,
    0x00464105, 0x00000000, 0xe41d1a40, 0x00801c03,
    0xe4421a40, 0x00804103, 0xe31c1a69, 0x00201c03,
    0xe3411a69, 0x00204103, 0xe31c1a40, 0x54001c03,
    0xe3411a40, 0x40004103, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049931, 0x1a160100,
    0xfa001c14, 0x04000000, 0x80002901, 0x00000000,
    0x00000000, 0x00000000, 0x27120070, 0x0d001a03,
    0x00033870, 0x19050220, 0x52461705, 0x00442b06,
    0x00130070, 0x1a050220, 0x52461805, 0x00442d06,
    0x00030070, 0x29050220, 0x52462705, 0x00442b06,
    0x00130070, 0x2a050220, 0x52462805, 0x00442d06,
    0xa03f1d40, 0x0f021202, 0x00031d40, 0x1f052660,
    0x06461905, 0x00442b26, 0x00131d40, 0x20052660,
    0x06461a05, 0x00442d26, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00031d40, 0x2f052660,
    0x06462905, 0x00442b26, 0x80103601, 0x00000000,
    0x00000000, 0x00000000, 0x00131d40, 0x30052660,
    0x06462a05, 0x00442d26, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049a31, 0x00020100,
    0xfa084114, 0x04003f04, 0x80030061, 0x6d054410,
    0x00000000, 0x76543210, 0x80030061, 0x7f054010,
    0x00000000, 0x76543210, 0x646d1a40, 0x00806d95,
    0x00033761, 0x32060220, 0x00341705, 0x00000000,
    0x00133761, 0x34060220, 0x00341805, 0x00000000,
    0x00030061, 0x05260aa0, 0x00000264, 0x00000000,
    0x80031c61, 0x7f050120, 0x00467f05, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x19050160, 0x00466d05, 0x00000000,
    0x00031c61, 0x32260220, 0x00341f05, 0x00000000,
    0x00131c61, 0x34260220, 0x00342005, 0x00000000,
    0x21051161, 0x00110244, 0xe47f1c69, 0x00207f03,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xe0151c68, 0x00301903, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0xe01b0065, 0x00701903,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x21140000, 0xfb043224, 0x00040000,
    0x00031161, 0x7e050220, 0x00440526, 0x00000000,
    0xe47f1c40, 0x50007f03, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x00041c61, 0x1d050120,
    0x00561506, 0x00000000, 0x00033b61, 0x35060220,
    0x00342705, 0x00000000, 0x00130061, 0x37060220,
    0x00342805, 0x00000000, 0x00031a61, 0x35260220,
    0x00342f05, 0x00000000, 0x00131a61, 0x37260220,
    0x00343005, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x31140000,
    0xfb043524, 0x00040000, 0x0004db52, 0x25040e68,
    0x0e0e2105, 0x1d052305, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0xa0331940, 0xfff02503,
    0x27352c70, 0x31002503, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x2f371a62, 0x33002503,
    0x00041969, 0x39058660, 0x02463705, 0x00000003,
    0xe03b0068, 0x01d03703, 0xa13d1a40, 0x390e0502,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x00031970, 0x3f050220, 0x52463d05, 0x00440506,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000004f,
    0x00039d31, 0x00020100, 0xfa087f0c, 0x04007e04,
    0x00130061, 0x07260aa0, 0x00000264, 0x00000000,
    0x80130061, 0x09054010, 0x00000000, 0x76543210,
    0x2a071161, 0x00110244, 0x80131961, 0x09050120,
    0x00460905, 0x00000000, 0x80103001, 0x00000000,
    0x00000000, 0x00000000, 0xaa3e0940, 0x3a0e0702,
    0x00131161, 0x02050220, 0x00440726, 0x00000000,
    0x80131b69, 0x09058220, 0x02460905, 0x00000002,
    0x80103a01, 0x00000000, 0x00000000, 0x00000000,
    0x00131b70, 0x40050220, 0x52463e05, 0x00440706,
    0x80131a40, 0x09058220, 0x02460905, 0x00000520,
    0x80101901, 0x00000000, 0x00000000, 0x00000000,
    0x80100065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80100066, 0x10218220, 0x02001020, 0x0000004f,
    0x00139e31, 0x00020100, 0xfa08090c, 0x04000204,
    0x80030061, 0x11054010, 0x00000000, 0x76543210,
    0x80030061, 0x4b054010, 0x00000000, 0x76543210,
    0x80031a61, 0x11050120, 0x00461105, 0x00000000,
    0x00030061, 0x30060220, 0x00347405, 0x00000000,
    0x00130061, 0x32060220, 0x00347505, 0x00000000,
    0x00030061, 0x26060220, 0x00343d05, 0x00000000,
    0x00130061, 0x28060220, 0x00343e05, 0x00000000,
    0x80031e61, 0x4b050120, 0x00464b05, 0x00000000,
    0xe4121e40, 0x00801103, 0x00031e61, 0x30260220,
    0x00347805, 0x00000000, 0x00131e61, 0x32260220,
    0x00347905, 0x00000000, 0xe44c1c40, 0x00804b03,
    0xe3111c69, 0x00201103, 0xe34b1a69, 0x00204b03,
    0xe3111a40, 0x50001103, 0xe34b1a40, 0x70004b03,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049f31, 0x0a160100, 0xfa001114, 0x04000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x11440000, 0xfb043024, 0x003c0000,
    0x80002f01, 0x00000000, 0x00000000, 0x00000000,
    0x00043a52, 0x41040e68, 0x0e2e0a05, 0x3f053b05,
    0xa05b2040, 0x02001103, 0xa05f0040, 0x03801103,
    0x00131b61, 0x28260220, 0x00344205, 0x00000000,
    0x00031c61, 0x26260220, 0x00344105, 0x00000000,
    0x27451c70, 0x11005b03, 0xe7481c70, 0x03805f03,
    0xa05da040, 0x13024502, 0xa0611a40, 0x13024802,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x46240000, 0xfb042624, 0x000c0000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049231, 0x00020100, 0xfa084b14, 0x04004604,
    0x80033261, 0x4d054010, 0x00000000, 0x76543210,
    0x80031961, 0x4d050120, 0x00464d05, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xe44e1940, 0x00804d03, 0xe34d1969, 0x00204d03,
    0xe34d1940, 0x74004d03, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049331, 0x00020100,
    0xfa084d14, 0x04004804, 0x80033361, 0x50054010,
    0x00000000, 0x76543210, 0x80033561, 0x53054010,
    0x00000000, 0x76543210, 0x80030061, 0x56054010,
    0x00000000, 0x76543210, 0x80030061, 0x74054010,
    0x00000000, 0x76543210, 0x80031c61, 0x50050120,
    0x00465005, 0x00000000, 0x80031c61, 0x53050120,
    0x00465305, 0x00000000, 0x80031c61, 0x56050120,
    0x00465605, 0x00000000, 0x80031c61, 0x74050120,
    0x00467405, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xe4511c40, 0x00805003,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xe4541c40, 0x00805303, 0xe4571c40, 0x00805603,
    0xe4751c40, 0x00807403, 0xe3501c69, 0x00205003,
    0xe3531c69, 0x00205303, 0xe3561c69, 0x00205603,
    0xe3741c69, 0x00207403, 0xe3501c40, 0x70005003,
    0xe3531c40, 0x70005303, 0xe3561c40, 0x74005603,
    0xe3741c40, 0x4c007403, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049431, 0x4e160100,
    0xfa005014, 0x04000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049531, 0x51160100,
    0xfa005314, 0x04000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049631, 0x54160100,
    0xfa005614, 0x04000000, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0x00043269, 0x46058660,
    0x02464e05, 0x00000005, 0x80002601, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x72058660,
    0x02465405, 0x00000006, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa0491a40, 0x46005f02,
    0x80002501, 0x00000000, 0x00000000, 0x00000000,
    0xe0473368, 0x01b05103, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x274b1a70, 0x5f004903,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00041952, 0x4d040e68, 0x0e2e6105, 0x4b054705,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049731, 0x00020100, 0xfa087414, 0x04007204,
    0x80030061, 0x77054010, 0x00000000, 0x76543210,
    0x80030061, 0x59054010, 0x00000000, 0x76543210,
    0x80030061, 0x20054010, 0x00000000, 0x76543210,
    0x80030061, 0x21054010, 0x00000000, 0x76543210,
    0x80031c61, 0x77050120, 0x00467705, 0x00000000,
    0x80031c61, 0x59050120, 0x00465905, 0x00000000,
    0x00040061, 0x3c062650, 0x00463505, 0x00000000,
    0x80031d61, 0x20050120, 0x00462005, 0x00000000,
    0x80031d61, 0x21050120, 0x00462105, 0x00000000,
    0xe4781d40, 0x00807703, 0xe45a1d40, 0x00805903,
    0xe4201c69, 0x00202003, 0xe4211c69, 0x00202103,
    0xe3771c69, 0x00207703, 0xe3591c69, 0x00205903,
    0xe4201c40, 0x68002003, 0xe4211c40, 0x68002103,
    0xe3771c40, 0x4c007703, 0xe3591c40, 0x74005903,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80039831, 0x1f0e0100, 0xfa00200c, 0x04000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049931, 0x75160100, 0xfa007714, 0x04000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049a31, 0x57160100, 0xfa005914, 0x04000000,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x00040065, 0x1f058110, 0x01563c06, 0x00010001,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0xa0510040, 0x75007c02, 0x80002a01, 0x00000000,
    0x00000000, 0x00000000, 0xe0630068, 0x01a05703,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000004f,
    0x80039b31, 0x00020100, 0xfa08210c, 0x04001f04,
    0x80030061, 0x23054010, 0x00000000, 0x76543210,
    0x80031961, 0x23050120, 0x00462305, 0x00000000,
    0x00033161, 0x27060220, 0x00344905, 0x00000000,
    0x00133161, 0x29060220, 0x00344a05, 0x00000000,
    0xe4231b69, 0x00202303, 0x00031b61, 0x27260220,
    0x00344d05, 0x00000000, 0x00131b61, 0x29260220,
    0x00344e05, 0x00000000, 0xe4231b40, 0x68002303,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80039c31, 0x220e0100, 0xfa00230c, 0x04000000,
    0x80002c01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x44050450, 0x00682206, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044d31, 0x1f240000, 0xfb042724, 0x000c0000,
    0x80033d61, 0x27054010, 0x00000000, 0x76543210,
    0x80033d61, 0x28054010, 0x00000000, 0x76543210,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00041b70, 0x53058550, 0x25584405, 0x00000000,
    0x80031b61, 0x27050120, 0x00462705, 0x00000000,
    0x80031b61, 0x28050120, 0x00462805, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00041b61, 0x4f050560, 0x00465305, 0x00000000,
    0xe4271b69, 0x00202703, 0xe4281b69, 0x00202803,
    0x00041b61, 0x3d062650, 0x00464f05, 0x00000000,
    0xe4271b40, 0x6a002703, 0xe4281b40, 0x6a002803,
    0x00041b65, 0x55058110, 0x01563d06, 0x00010001,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80039e31, 0x260e0100, 0xfa00270c, 0x04000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041961, 0x56050450, 0x00685506, 0x00000000,
    0x00042d65, 0x57058220, 0x02462105, 0x00010000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x78050020, 0x0066211f, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0xac591a70, 0x00005703, 0x00041c70, 0x69058550,
    0x25585605, 0x00000000, 0xae6f0070, 0x00005703,
    0xae750070, 0x00007a03, 0x00041b61, 0x4d050560,
    0x00466905, 0x00000000, 0x00041a61, 0x3f062650,
    0x00467505, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x20711a65, 0x6f004d03,
    0x206e1f65, 0x59004d03, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x00041b65, 0x77058110,
    0x01563f06, 0x00010001, 0x00041961, 0x00010450,
    0x10687706, 0x00000000, 0x00041c61, 0x3e062650,
    0x00467105, 0x00000000, 0x11040062, 0x7a058220,
    0x02467805, 0x000000ff, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00041a65, 0x73058110,
    0x01563e06, 0x00010001, 0x00041a61, 0x40070200,
    0x00467a05, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00041a61, 0x74050450,
    0x00687306, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x00041a61, 0x7e050010,
    0x00664007, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x00041a70, 0x7f058550,
    0x25587405, 0x00000000, 0x00041961, 0x4f050560,
    0x20467f05, 0x00000000, 0x80002e01, 0x00000000,
    0x00000000, 0x00000000, 0x6f261b62, 0x0ff07e05,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000004f,
    0x80039e31, 0x00020100, 0xfa08280c, 0x04002604,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x27013e70, 0x7c005103, 0x80030061, 0x72054010,
    0x00000000, 0x76543210, 0x00041a52, 0x70040e68,
    0x0e2e0305, 0x01056305, 0x80031a61, 0x72050120,
    0x00467205, 0x00000000, 0xe4731940, 0x00807203,
    0xe3721969, 0x00207203, 0xe3721940, 0x78007203,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049f31, 0x00020100, 0xfa087214, 0x04007004,
    0x00040061, 0x41062650, 0x00466e05, 0x00000000,
    0x80030061, 0x6e054010, 0x00000000, 0x76543210,
    0x00041a65, 0x04058110, 0x01564106, 0x00010001,
    0x80031a61, 0x6e050120, 0x00466e05, 0x00000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x00041a61, 0x09050450, 0x00680406, 0x00000000,
    0xe46f1a40, 0x00806e03, 0x00041a70, 0x0a058550,
    0x25580905, 0x00000000, 0xe36e1a69, 0x00206e03,
    0xae690070, 0x00006503, 0x00041b61, 0x53050560,
    0x00460a05, 0x00000000, 0xe36e1b40, 0x48006e03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049031, 0x00020100, 0xfa086e14, 0x04006904,
    0x00041a61, 0x00010660, 0x20465305, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80030061, 0x74054010, 0x00000000, 0x76543210,
    0x80130061, 0x76054010, 0x00000000, 0x76543210,
    0x80030061, 0x44054010, 0x00000000, 0x76543210,
    0x80030061, 0x46054010, 0x00000000, 0x76543210,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x23060220, 0x00346705, 0x00000000,
    0x80103e01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x25060220, 0x00346805, 0x00000000,
    0x00030061, 0x01060220, 0x00345105, 0x00000000,
    0x00130061, 0x03060220, 0x00345205, 0x00000000,
    0x80031f61, 0x74050120, 0x00467405, 0x00000000,
    0x80131f61, 0x76050120, 0x00467605, 0x00000000,
    0x00040061, 0x57060210, 0x00461905, 0x00000000,
    0x80031f61, 0x44050120, 0x00464405, 0x00000000,
    0x80031f61, 0x46050120, 0x00464605, 0x00000000,
    0x00031f61, 0x23260220, 0x00346b05, 0x00000000,
    0x00131f61, 0x25260220, 0x00346c05, 0x00000000,
    0xe4741f69, 0x00207403, 0x80131f69, 0x76058220,
    0x02467605, 0x00000002, 0xe4451e40, 0x00804403,
    0xe4471e40, 0x00804603, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00044d31, 0x09240000,
    0xfb042324, 0x000c0000, 0xe4741c40, 0x78007403,
    0x80131c40, 0x76058220, 0x02467605, 0x000007a0,
    0xe3441c69, 0x00204403, 0xe3461c69, 0x00204603,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80039131, 0x730e0100, 0xfa00740c, 0x04000000,
    0x80101b01, 0x00000000, 0x00000000, 0x00000000,
    0x80100065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80100066, 0x10218220, 0x02001020, 0x0000000f,
    0x80139231, 0x750e0100, 0xfa00760c, 0x04000000,
    0xe3441a40, 0x6c004403, 0xe3461a40, 0x6c004603,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049331, 0x42160100, 0xfa004414, 0x04000000,
    0x00042d61, 0x55060210, 0x00460b05, 0x00000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x01260220, 0x00347305, 0x00000000,
    0x80102201, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x03260220, 0x00347505, 0x00000000,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x42060210, 0x00461b05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x80049431, 0x00020100, 0xfa084614, 0x04004204,
    0x00040061, 0x3f054660, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x41054660, 0x00000000, 0x00000008,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x43054660, 0x00000000, 0x00000010,
    0x00040061, 0x59054660, 0x00000000, 0x00000001,
    0x80030061, 0x63054010, 0x00000000, 0x76543210,
    0x80031961, 0x63050120, 0x00466305, 0x00000000,
    0xe4641940, 0x00806303, 0xe3631969, 0x00206303,
    0xe3631940, 0x44006303, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049031, 0x00020100,
    0xfa086314, 0x04005904, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x45054660,
    0x00000000, 0x00000038, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x47054660,
    0x00000000, 0x00000020, 0x00040061, 0x49054660,
    0x00000000, 0x00000028, 0x00043061, 0x59054660,
    0x00000000, 0x000000ff, 0x00040061, 0x4b054660,
    0x00000000, 0x00000004, 0x01040022, 0x0001c060,
    0x00000940, 0x00000940, 0x80033d61, 0x25054010,
    0x00000000, 0x76543210, 0x00043061, 0x63060210,
    0x00462105, 0x00000000, 0x80031a61, 0x25050120,
    0x00462505, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0xe4261940, 0x00802503,
    0xe3251969, 0x00202503, 0xe3251940, 0x6c002503,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049531, 0x23160100, 0xfa002514, 0x04000000,
    0x80002501, 0x00000000, 0x00000000, 0x00000000,
    0x00041d70, 0x00010110, 0x51562306, 0x00566306,
    0x00040061, 0x23050120, 0x00561b06, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xef251962, 0x00002303, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xa0339d40, 0x25001f02,
    0x80030061, 0x25054010, 0x00000000, 0x76543210,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x00041a69, 0x29058660, 0x02463305, 0x00000002,
    0xe02f3068, 0x01e03303, 0x80031b61, 0x25050120,
    0x00462505, 0x00000000, 0xe4261940, 0x00802503,
    0xe3251969, 0x00202503, 0xe3251940, 0x80002503,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049631, 0x23160100, 0xfa002514, 0x04000000,
    0x80033661, 0x25054010, 0x00000000, 0x76543210,
    0x80031961, 0x25050120, 0x00462505, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xe4261940, 0x00802503, 0xe3251969, 0x00202503,
    0xe3251940, 0x80002503, 0x80002601, 0x00000000,
    0x00000000, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0xa0270040, 0x29002302,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049731, 0x23160100, 0xfa002514, 0x04000000,
    0x80033761, 0x25054010, 0x00000000, 0x76543210,
    0x80031961, 0x25050120, 0x00462505, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xe4261940, 0x00802503, 0xe3251969, 0x00202503,
    0xe3251940, 0x84002503, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x27641e70, 0x23002703,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049831, 0x23160100, 0xfa002514, 0x04000000,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x00041952, 0x66040e68, 0x0e2e2305, 0x64052f05,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x23060220, 0x00342705, 0x00000000,
    0x80103801, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x25060220, 0x00342805, 0x00000000,
    0x00031a61, 0x23260220, 0x00346605, 0x00000000,
    0x00131a61, 0x25260220, 0x00346705, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x35140000, 0xfb042324, 0x00040000,
    0x80033961, 0x25054010, 0x00000000, 0x76543210,
    0x80031961, 0x25050120, 0x00462505, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xe4261940, 0x00802503, 0xe3251969, 0x00202503,
    0xe3251940, 0x88002503, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049a31, 0x23160100,
    0xfa002514, 0x04000000, 0x80033a61, 0x25054010,
    0x00000000, 0x76543210, 0x80031961, 0x25050120,
    0x00462505, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0xe4261940, 0x00802503,
    0xe3251969, 0x00202503, 0xe3251940, 0x88002503,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00042969, 0x31058660, 0x02463505, 0x00000005,
    0xe0370068, 0x01b03503, 0x80002a01, 0x00000000,
    0x00000000, 0x00000000, 0xa0271a40, 0x31002302,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049b31, 0x23160100, 0xfa002514, 0x04000000,
    0x80033b61, 0x25054010, 0x00000000, 0x76543210,
    0xa0631a40, 0x01002703, 0x80031a61, 0x25050120,
    0x00462505, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0xe4261940, 0x00802503,
    0xe3251969, 0x00202503, 0xe3251940, 0x8c002503,
    0x80002b01, 0x00000000, 0x00000000, 0x00000000,
    0x272f0070, 0x23002703, 0xe7311e70, 0x01006303,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049c31, 0x23160100, 0xfa002514, 0x04000000,
    0x80002c01, 0x00000000, 0x00000000, 0x00000000,
    0x00041a52, 0x29040e68, 0x0e2e2305, 0x2f053705,
    0xa02f0040, 0x01000d03, 0xa0651a40, 0x29023102,
    0x27231a70, 0x0d002f03, 0xa0311940, 0x0f022302,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x23060220, 0x00342f05, 0x00000000,
    0x80103c01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x25060220, 0x00343005, 0x00000000,
    0x00031a61, 0x23260220, 0x00343105, 0x00000000,
    0x00131a61, 0x25260220, 0x00343205, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044d31, 0x2f140000, 0xfb042324, 0x00040000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00042d69, 0x69058660, 0x02462f05, 0x00000006,
    0x00030061, 0x2f060220, 0x00342705, 0x00000000,
    0x00130061, 0x31060220, 0x00342805, 0x00000000,
    0x00031a61, 0x2f260220, 0x00342905, 0x00000000,
    0x00131a61, 0x31260220, 0x00342a05, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x23440000, 0xfb042f24, 0x003c0000,
    0x00033e61, 0x2f060220, 0x00346305, 0x00000000,
    0x00133e61, 0x31060220, 0x00346405, 0x00000000,
    0x00031a61, 0x2f260220, 0x00346505, 0x00000000,
    0x00131a61, 0x31260220, 0x00346605, 0x00000000,
    0x00042e61, 0x37050220, 0x00462305, 0x00000000,
    0x00042e61, 0x39050220, 0x00462505, 0x00000000,
    0x00042e61, 0x3b050220, 0x00462705, 0x00000000,
    0x00042e61, 0x3d050220, 0x00462905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044f31, 0x23440000, 0xfb042f24, 0x003c0000,
    0x80033f61, 0x31054010, 0x00000000, 0x76543210,
    0x80031961, 0x31050120, 0x00463105, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0xe4321940, 0x00803103, 0xe3311969, 0x00203103,
    0xe3311940, 0x7c003103, 0x00042f61, 0x63050220,
    0x00462305, 0x00000000, 0x00042f61, 0x65050220,
    0x00462505, 0x00000000, 0x00042f61, 0x67050220,
    0x00462705, 0x00000000, 0x00042f61, 0x2f050220,
    0x00462905, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049031, 0x00020100,
    0xfa083114, 0x04002f04, 0x00042d61, 0x23050120,
    0x00560906, 0x00000000, 0x00041941, 0x25050220,
    0x01461f05, 0x00562306, 0xa0231940, 0x25006902,
    0x80030061, 0x25054010, 0x00000000, 0x76543210,
    0x00041a52, 0x27040e68, 0x0e2e0d05, 0x51052305,
    0x80031a61, 0x25050120, 0x00462505, 0x00000000,
    0x00041a6c, 0x23058660, 0x02462705, 0x00000006,
    0xe4261a40, 0x00802503, 0xe3251969, 0x00202503,
    0xe3251940, 0x64002503, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049d31, 0x00020100,
    0xfa082514, 0x04002304, 0x00040061, 0x69050120,
    0x00562106, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80000061, 0x6b064210,
    0x00000000, 0x00000000, 0x80001961, 0x30010110,
    0x00006b04, 0x00000000, 0x00040070, 0x00018220,
    0x22464f05, 0x00000000, 0x00040061, 0x00010120,
    0x20003000, 0x00000000, 0x01040022, 0x0001c060,
    0x000016a8, 0x000016a8, 0x00043d61, 0x23050120,
    0x00562106, 0x00000000, 0x80033d61, 0x25054010,
    0x00000000, 0x76543210, 0x00040061, 0x6b054660,
    0x00000000, 0x0000001c, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0xa027bd40, 0x23001f02,
    0x80031b61, 0x25050120, 0x00462505, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0xe4261940, 0x00802503, 0xe3251969, 0x00202503,
    0xe3251940, 0x6c002503, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049031, 0x23160100,
    0xfa002514, 0x04000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00040070, 0x00018550,
    0x15562306, 0x00010001, 0x2f231e62, 0x1f002703,
    0x00040070, 0x00018660, 0x26464f05, 0x00000000,
    0x00040061, 0x1f062650, 0x00464f05, 0x00000000,
    0x2f351b62, 0x35002303, 0x11043062, 0x69058220,
    0x02466905, 0x00000002, 0x00041b61, 0x78050110,
    0x00561f06, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x60701965, 0x00107805,
    0x00040061, 0x79050010, 0x00687806, 0x00000000,
    0x00041a61, 0x00010450, 0x20687006, 0x00000000,
    0x01040022, 0x0001c060, 0x00000390, 0x00000370,
    0x00041f69, 0x1f058660, 0x02463505, 0x00000005,
    0xe0293d68, 0x01b03503, 0xa0231a40, 0x1f005b02,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x272f0970, 0x5b002303, 0xa0703f40, 0x01002303,
    0xa0270040, 0x01c02303, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00041b52, 0x25040e68,
    0x0e2e5d05, 0x2f052905, 0xe71f1b70, 0x01007003,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x27211b70, 0x23002703, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0xa0721a40, 0x25021f02,
    0x00030061, 0x2f060220, 0x00347005, 0x00000000,
    0x80103001, 0x00000000, 0x00000000, 0x00000000,
    0x00131661, 0x31060220, 0x00347105, 0x00000000,
    0xa0291c40, 0x25022102, 0x00031b61, 0x2f260220,
    0x00347205, 0x00000000, 0x00131b61, 0x31260220,
    0x00347305, 0x00000000, 0x00030061, 0x1f060220,
    0x00342705, 0x00000000, 0x00130061, 0x21060220,
    0x00342805, 0x00000000, 0x00031a61, 0x1f260220,
    0x00342905, 0x00000000, 0x00131a61, 0x21260220,
    0x00342a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x27140000,
    0xfb041f24, 0x00040000, 0x00042165, 0x1f058220,
    0x02462705, 0x00010000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xae741970, 0x00001f03,
    0x00030061, 0x27060220, 0x00342305, 0x00000000,
    0x00130061, 0x29060220, 0x00342405, 0x00000000,
    0x00031a61, 0x27260220, 0x00342505, 0x00000000,
    0x00131a61, 0x29260220, 0x00342605, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x1f440000, 0xfb042724, 0x003c0000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x27240000, 0xfb042f24, 0x000c0000,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x20760040, 0x1f202500, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x202f2340, 0x21202700,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x20312340, 0x23202900, 0x201f1140, 0x31002f00,
    0x20211141, 0x1f007600, 0x201f0041, 0x31002f00,
    0x20231140, 0x1f002100, 0x00041161, 0x21050120,
    0x00561b06, 0x00000000, 0x00040961, 0x1f062650,
    0x00467405, 0x00000000, 0x00041965, 0x74058110,
    0x01561f06, 0x00010001, 0x00041561, 0x29050110,
    0x00561f06, 0x00000000, 0x271f1c70, 0x69002103,
    0x00041b61, 0x75050450, 0x00687406, 0x00000000,
    0x00040970, 0x76058550, 0x25587505, 0x00000000,
    0x00041961, 0x21050560, 0x00467605, 0x00000000,
    0x2e250965, 0x1f002103, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x201f1966, 0x6e002503,
    0xef211162, 0x00002303, 0x00041a66, 0x6e052620,
    0x02462505, 0x00461f05, 0x00041970, 0x00018660,
    0x26466e05, 0x00000000, 0x2f1f1b62, 0x23002103,
    0x00040024, 0x0001c060, 0x00000030, 0x00000030,
    0x00041a61, 0x1f054220, 0x00000000, 0x00000000,
    0x00043d61, 0x29054110, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000550,
    0xa0211b40, 0x00401903, 0xa0230040, 0xff401903,
    0x60770b65, 0x00102905, 0x00041b70, 0x00018660,
    0x56462105, 0x00000010, 0x00041a61, 0x7c050450,
    0x00687706, 0x00000000, 0x80000061, 0x7a064210,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x2f251d62, 0x23002103,
    0x80041961, 0x10014110, 0x00000000, 0x03e003e0,
    0x00040069, 0x10018510, 0x01562506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x03e003e0,
    0xe0230961, 0x001b0004, 0xa0250040, 0xff201903,
    0x25211a62, 0x23001f00, 0xa0231140, 0x00201903,
    0x00041970, 0x00018660, 0x56462305, 0x00000010,
    0x2f270b62, 0x25002303, 0x80040961, 0x10014110,
    0x00000000, 0x04200420, 0x00040069, 0x10018510,
    0x01562706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x04200420, 0xe0230961, 0x001b0004,
    0x25251962, 0x23002100, 0xa0210940, 0x00101903,
    0xa0231140, 0xff101903, 0x00041a70, 0x00018660,
    0x56462105, 0x00000010, 0x2f271a62, 0x23002103,
    0x80040961, 0x10014110, 0x00000000, 0x04a004a0,
    0x00040069, 0x10018510, 0x01562706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x04a004a0,
    0xe0210961, 0x001b0004, 0x00040070, 0x7d058550,
    0x25587c05, 0x00000000, 0x25231a62, 0x21002500,
    0x00041165, 0x21058220, 0x02461905, 0xfffffff8,
    0x00041a61, 0x27050560, 0x00467d05, 0x00000000,
    0x80040961, 0x10014110, 0x00000000, 0x04600460,
    0x00040069, 0x10018510, 0x01562106, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x04600460,
    0xe0250961, 0x001b0004, 0x00040061, 0x23050120,
    0x00561b06, 0x00000000, 0x2c211a70, 0x1f002500,
    0x201f0965, 0x21002703, 0x27211a70, 0x69002303,
    0x20250965, 0x21001f03, 0x00041961, 0x1f062650,
    0x00462505, 0x00000000, 0x00041965, 0x7f058110,
    0x01561f06, 0x00010001, 0x00041961, 0x1f050450,
    0x00687f06, 0x00000000, 0x00041970, 0x21058550,
    0x25581f05, 0x00000000, 0x00041961, 0x1f050560,
    0x00462105, 0x00000000, 0x80000061, 0x30010110,
    0x00007a04, 0x00000000, 0x00041a70, 0x00018220,
    0x22461f05, 0x00000000, 0x00040061, 0x21050120,
    0x00003000, 0x00000000, 0x00040069, 0x1f058660,
    0x02461d05, 0x00000003, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x00041969, 0x25050660,
    0x02465905, 0x00461f05, 0x201f1965, 0x25002103,
    0xac271970, 0x00001f03, 0x11040062, 0x22058110,
    0x01587905, 0x00000000, 0x60251965, 0x00102205,
    0x00040061, 0x78050010, 0x00682206, 0x00000000,
    0x0004004c, 0x21050220, 0x00461f05, 0x00000000,
    0x11041962, 0x1f058220, 0x02462105, 0x00000020,
    0x80041961, 0x10014110, 0x00000000, 0x06a006a0,
    0x00040069, 0x10018510, 0x01561f06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x06a006a0,
    0xe0210961, 0x001b0004, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x00041761, 0x29060210,
    0x00461f05, 0x00000000, 0x00041e61, 0x00010450,
    0x20682506, 0x00000000, 0x01040022, 0x0001c060,
    0x00000140, 0x00000140, 0x00041c69, 0x25058660,
    0x02462105, 0x00000005, 0xa01f1940, 0x25005f02,
    0x27251970, 0x5f001f03, 0x00040070, 0x00010660,
    0x16462305, 0x00466905, 0xe0230068, 0x01b02103,
    0xa0690040, 0x00106903, 0x00041a52, 0x21040e68,
    0x0e2e6105, 0x25052305, 0x00030061, 0x23060220,
    0x00341f05, 0x00000000, 0x00130061, 0x25060220,
    0x00342005, 0x00000000, 0x00031a61, 0x23260220,
    0x00342105, 0x00000000, 0x00131a61, 0x25260220,
    0x00342205, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x1f240000,
    0xfb042324, 0x000c0000, 0x00042461, 0x23050120,
    0x00562106, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0252440, 0x23001f02,
    0x2f231962, 0x35002503, 0x00040070, 0x00010550,
    0x15565706, 0x00562906, 0x2f351a62, 0x23001f03,
    0xe51f0070, 0x00606903, 0x00041966, 0x00010220,
    0x22461f05, 0x00462705, 0x11040062, 0x27058110,
    0x01587905, 0x00000000, 0x00041961, 0x78050010,
    0x00682706, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000088, 0x60281a65, 0x00107805,
    0x00041961, 0x29050450, 0x00682806, 0x00000000,
    0x80000061, 0x7b064210, 0x00000000, 0x00000000,
    0x00041a70, 0x2a058550, 0x25582905, 0x00000000,
    0x00041961, 0x1f050560, 0x00462a05, 0x00000000,
    0x80001b61, 0x30010110, 0x00007b04, 0x00000000,
    0x00041a70, 0x00018220, 0x22461f05, 0x00000000,
    0x00040061, 0x00010120, 0x10003000, 0x00000000,
    0x11040027, 0x00014060, 0x00000000, 0xfffff6e8,
    0x00040070, 0x00018660, 0x26464f05, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xef1f1b62, 0x00006903, 0x00041961, 0x21050120,
    0x00561f06, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00041670, 0x2f058550,
    0x15565706, 0x00000000, 0xa01f1a40, 0x21112202,
    0x00040061, 0x27050120, 0x00002104, 0x00000000,
    0x00041b61, 0x21050560, 0x00462f05, 0x00000000,
    0x00041b61, 0x23050120, 0x00561f06, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x25060210, 0x00461f05, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00040970, 0x30058550, 0x25562506, 0x00000000,
    0x00041961, 0x1f050560, 0x00463005, 0x00000000,
    0x00041965, 0x00010220, 0x22462105, 0x00461f05,
    0x01040022, 0x0001c060, 0x00000098, 0x00000098,
    0xa0250040, 0x00c00d03, 0x271f1970, 0x0d002503,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0xa0291940, 0x0f021f02, 0x00030061, 0x1f060220,
    0x00342505, 0x00000000, 0x00130061, 0x21060220,
    0x00342605, 0x00000000, 0x00031a61, 0x1f260220,
    0x00342905, 0x00000000, 0x00131a61, 0x21260220,
    0x00342a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044d31, 0x25140000,
    0xfb181f24, 0x01002314, 0x00040025, 0x00004600,
    0x00000000, 0x00000ab8, 0x00040061, 0x00010660,
    0x20464f05, 0x00000000, 0x01040022, 0x0001c060,
    0x00000a88, 0x00000a88, 0x00043d69, 0x1f058660,
    0x02463505, 0x00000005, 0x00043d61, 0x29054660,
    0x00000000, 0x0000000c, 0xa02f0a40, 0x1f005b02,
    0x00041a65, 0x1f058620, 0x02462905, 0xfffffffc,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x27231a70, 0x5b002f03, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0xe0211a69, 0x00401f03,
    0x00040065, 0x1f058620, 0x02462905, 0x00000003,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x20310966, 0x21001f03, 0x00040041, 0x1f050660,
    0x05462705, 0x00561d06, 0xa0219d40, 0x1f012502,
    0x00041969, 0x1f058660, 0x02462105, 0x00000006,
    0x80030061, 0x21054010, 0x00000000, 0x76543210,
    0x0004ad52, 0x25040e68, 0x0e2e0d05, 0x51051f05,
    0x80031a61, 0x21050120, 0x00462105, 0x00000000,
    0x00041a6c, 0x1f058660, 0x02462505, 0x00000006,
    0xe4221a40, 0x00802103, 0xe3211969, 0x00202103,
    0xe3211940, 0x64002103, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049531, 0x00020100,
    0xfa082114, 0x04001f04, 0xe01f3568, 0x01b03503,
    0x00040069, 0x59058120, 0x02466d05, 0x00000002,
    0x80000065, 0x61058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x62058220, 0x020000a4, 0xfffffc00,
    0x00041c52, 0x5f040e68, 0x0e2e5d05, 0x23051f05,
    0x00030061, 0x27060220, 0x00342f05, 0x00000000,
    0x00130061, 0x29060220, 0x00343005, 0x00000000,
    0x205b1e66, 0x59003103, 0x00040065, 0x31058620,
    0x02463f05, 0x00000003, 0x00031c61, 0x27260220,
    0x00345f05, 0x00000000, 0x00131c61, 0x29260220,
    0x00346005, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x1f440000,
    0xfb042724, 0x003c0000, 0x00043665, 0x29058620,
    0x02463f05, 0xfffffffc, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xe0271969, 0x00402903,
    0x20291966, 0x27003103, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006104, 0x0000000f, 0x00049731, 0x27160100,
    0xfa045b14, 0x04040000, 0x205d1966, 0x59002903,
    0x80002601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02006204, 0x0000008f,
    0x00049831, 0x00020100, 0xfa0c5d14, 0x04041f04,
    0x00040065, 0x29058620, 0x02464b05, 0xfffffffc,
    0x80003065, 0x6e058220, 0x020000a4, 0xfffffc00,
    0xe0311a69, 0x00402903, 0x00040065, 0x29058620,
    0x02464b05, 0x00000003, 0x20611966, 0x31002903,
    0x204b1966, 0x59006103, 0x80002601, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006e04, 0x0000008f, 0x00049931, 0x00020100,
    0xfa0c4b14, 0x04042104, 0x00040065, 0x29058620,
    0x02464105, 0xfffffffc, 0x80003065, 0x6f058220,
    0x020000a4, 0xfffffc00, 0xe0311a69, 0x00402903,
    0x00040065, 0x29058620, 0x02464105, 0x00000003,
    0x20611966, 0x31002903, 0x20411966, 0x59006103,
    0x80002601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02006f04, 0x0000008f,
    0x00049a31, 0x00020100, 0xfa0c4114, 0x04042304,
    0x80003f65, 0x70058220, 0x020000a4, 0xfffffc00,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02007004, 0x0000008f,
    0x00049b31, 0x00020100, 0xfa0c5b14, 0x04042704,
    0xa0273b40, 0x01002f03, 0x80000065, 0x73058220,
    0x020000a4, 0xfffffc00, 0x80003165, 0x74058220,
    0x020000a4, 0xfffffc00, 0xe72f1b70, 0x01002703,
    0xa0291940, 0x5f022f02, 0x00040065, 0x2f058620,
    0x02466b05, 0xfffffffc, 0xe05f1969, 0x00402f03,
    0x00030061, 0x2f060220, 0x00342705, 0x00000000,
    0x00130061, 0x31060220, 0x00342805, 0x00000000,
    0x00031a61, 0x2f260220, 0x00342905, 0x00000000,
    0x00131a61, 0x31260220, 0x00342a05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x27240000, 0xfb042f24, 0x000c0000,
    0x00043c65, 0x2f058620, 0x02466b05, 0x00000003,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x20311966, 0x5f002f03, 0x202f1966, 0x59003103,
    0x00040065, 0x31058620, 0x02464305, 0xfffffffc,
    0xe05f1969, 0x00403103, 0x00040065, 0x31058620,
    0x02464305, 0x00000003, 0x20431966, 0x5f003103,
    0x20311966, 0x59004303, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007304, 0x0000000f, 0x00049d31, 0x43160100,
    0xfa042f14, 0x04040000, 0x80002601, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007404, 0x0000008f, 0x00049e31, 0x00020100,
    0xfa0c3114, 0x04042504, 0x00043861, 0x1f054660,
    0x00000000, 0x00000014, 0x80000065, 0x75058220,
    0x020000a4, 0xfffffc00, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x00041a65, 0x21058620,
    0x02461f05, 0xfffffffc, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0xe0231969, 0x00402103,
    0x00040065, 0x21058620, 0x02461f05, 0x00000003,
    0x201f1966, 0x23002103, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x20251966, 0x59001f03,
    0x80002c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02007504, 0x0000008f,
    0x00049e31, 0x00020100, 0xfa0c2514, 0x04042704,
    0x00040061, 0x1f054660, 0x00000000, 0x00000018,
    0x80003265, 0x76058220, 0x020000a4, 0xfffffc00,
    0x00041a65, 0x21058620, 0x02461f05, 0xfffffffc,
    0xe0231969, 0x00402103, 0x00040065, 0x21058620,
    0x02461f05, 0x00000003, 0x201f1966, 0x23002103,
    0x20211966, 0x59001f03, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007604, 0x0000008f, 0x00049d31, 0x00020100,
    0xfa0c2114, 0x04042904, 0x80001765, 0x77058220,
    0x020000a4, 0xfffffc00, 0x80002d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007704, 0x0000008f, 0x00049f31, 0x00020100,
    0xfa0c2f14, 0x04044304, 0x80000065, 0x78058220,
    0x020000a4, 0xfffffc00, 0x80000065, 0x79058220,
    0x020000a4, 0xfffffc00, 0x80000065, 0x7a058220,
    0x020000a4, 0xfffffc00, 0x80000065, 0x7b058220,
    0x020000a4, 0xfffffc00, 0x80000065, 0x7c058220,
    0x020000a4, 0xfffffc00, 0x80000065, 0x7d058220,
    0x020000a4, 0xfffffc00, 0x80000065, 0x7e058220,
    0x020000a4, 0xfffffc00, 0x80000065, 0x7f058220,
    0x020000a4, 0xfffffc00, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007804, 0x0000000f, 0x00049031, 0x37160100,
    0xfa045d14, 0x04040000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007904, 0x0000000f, 0x00049131, 0x39160100,
    0xfa044b14, 0x04040000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80001e01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007a04, 0x0000000f, 0x00049231, 0x3b160100,
    0xfa044114, 0x04040000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007b04, 0x0000000f, 0x00049331, 0x3d160100,
    0xfa045b14, 0x04040000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003066, 0x10218220,
    0x02007c04, 0x0000000f, 0x00049031, 0x63160100,
    0xfa043114, 0x04040000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007d04, 0x0000000f, 0x00049d31, 0x65160100,
    0xfa042514, 0x04040000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007e04, 0x0000000f, 0x00049431, 0x67160100,
    0xfa042114, 0x04040000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007f04, 0x0000000f, 0x00049031, 0x1f160100,
    0xfa042f14, 0x04040000, 0x80033461, 0x21054010,
    0x00000000, 0x76543210, 0x80031961, 0x21050120,
    0x00462105, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xe4221940, 0x00802103,
    0xe3211969, 0x00202103, 0xe3211940, 0x7c002103,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049d31, 0x00020100, 0xfa082114, 0x04001f04,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80002d01, 0x00000000, 0x00000000, 0x00000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x20201f40, 0x39206500, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x20221f40, 0x3b206700,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00040f61, 0x2f050120, 0x00566906, 0x00000000,
    0x80002d01, 0x00000000, 0x00000000, 0x00000000,
    0x20240940, 0x22002000, 0x80002d01, 0x00000000,
    0x00000000, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x20260041, 0x22002000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x80002d01, 0x00000000, 0x00000000, 0x00000000,
    0x201f1f40, 0x37206300, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x0004095b, 0x29040aa8,
    0x0a0a2605, 0x1f052405, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x27050120,
    0x00561b06, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0xe0431967, 0x00702703,
    0x00041b70, 0x00010660, 0x56462705, 0x00462f05,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xef301162, 0x00002903, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041965, 0x41058220,
    0x02463005, 0xffffff80, 0xa0210940, 0x43004102,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x274b1970, 0x21102133, 0x27590070, 0x21102103,
    0x275b3370, 0x2110212b, 0x275d3070, 0x2110210b,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x6b042e68, 0x0eae5905, 0x5d055b05,
    0x275e0070, 0x21102113, 0x27600070, 0x2110211b,
    0x27231170, 0x22102133, 0x27251170, 0x22102103,
    0x27290070, 0x2210212b, 0x272f0070, 0x2210210b,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa06e1d40, 0x60225e02, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00041a52, 0x31042e68,
    0x0eae2505, 0x2f052905, 0x00040952, 0x1f042e68,
    0x0e0e4b05, 0x6b056e05, 0x27250070, 0x22102113,
    0x27290070, 0x2210211b, 0xa0211940, 0x29222502,
    0x00041952, 0x25042e68, 0x0e0e2305, 0x31052105,
    0x00040061, 0x21050120, 0x00561906, 0x00000000,
    0x00040061, 0x31054660, 0x00000000, 0x0000000a,
    0x00041a70, 0x00018660, 0x46462105, 0x00000008,
    0x01040022, 0x0001c060, 0x00000260, 0x00000120,
    0x00041d61, 0x23050120, 0x00562506, 0x00000000,
    0xa0250040, 0xff802103, 0xac291970, 0x25012422,
    0x00040070, 0x00010660, 0x16002444, 0x00462505,
    0xef2f1f62, 0x00803103, 0x00040070, 0x00010660,
    0x16002464, 0x00462505, 0x11040062, 0x31058220,
    0x02463f05, 0x00000003, 0x00040070, 0x00010660,
    0x16002484, 0x00462505, 0x11040062, 0x41058220,
    0x02463f05, 0x00000004, 0x00040070, 0x00010660,
    0x160024a4, 0x00462505, 0xa0231a40, 0x41002f02,
    0x11040062, 0x25058220, 0x02463f05, 0x00000005,
    0x00041a61, 0x6e060210, 0x00462305, 0x00000000,
    0x00041a52, 0x2f042e68, 0x0e0e2905, 0x25053105,
    0x00041a61, 0x59050110, 0x00566e06, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x00041a61, 0x6f060210, 0x00462f05, 0x00000000,
    0x00041961, 0x5a050110, 0x00566f06, 0x00000000,
    0x00040024, 0x0001c060, 0x00000150, 0x00000150,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x00041a61, 0x6f050120, 0x00561f06, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0xac711970, 0x21016f22, 0x00040070, 0x00010660,
    0x16006f44, 0x00462105, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x11040062, 0x73058220,
    0x02463f05, 0x00000002, 0x00040070, 0x00010660,
    0x16006f64, 0x00462105, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x11040062, 0x75058220,
    0x02463f05, 0x00000003, 0x00040070, 0x00010660,
    0x16006f84, 0x00462105, 0x11040062, 0x77058220,
    0x02463f05, 0x00000004, 0xa0611940, 0x77007302,
    0x00040070, 0x00010660, 0x16006fa4, 0x00462105,
    0x11040062, 0x6b058220, 0x02463f05, 0x00000005,
    0x00041952, 0x6e042e68, 0x0e0e7105, 0x6b057505,
    0x00041c61, 0x70060210, 0x00466105, 0x00000000,
    0x00041961, 0x59050110, 0x00567006, 0x00000000,
    0x00041b61, 0x71060210, 0x00466e05, 0x00000000,
    0x00041961, 0x5a050110, 0x00567106, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040065, 0x1f058620, 0x02464705, 0xfffffffc,
    0x00041d61, 0x6f050120, 0x00465905, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x00041c61, 0x71050120, 0x00465a05, 0x00000000,
    0x00041f69, 0x30058120, 0x02466d05, 0x00000002,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001f65, 0x76058220, 0x020000a4, 0xfffffc00,
    0xe0251d69, 0x00401f03, 0x00040065, 0x20058620,
    0x02464705, 0x00000003, 0xa0231d40, 0x71006f02,
    0x206b1a66, 0x25002003, 0x80041a61, 0x10014110,
    0x00000000, 0x06e006e0, 0x00040069, 0x10018510,
    0x01562306, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x06e006e0, 0xe03f0961, 0x001b0004,
    0x80040061, 0x10014110, 0x00000000, 0x07200720,
    0x00040069, 0x10018510, 0x01562306, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x07200720,
    0xe0410961, 0x001b0004, 0x80040061, 0x10014110,
    0x00000000, 0x07600760, 0x00040069, 0x10018510,
    0x01562306, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x07600760, 0xe0430961, 0x001b0004,
    0x80042361, 0x10014110, 0x00000000, 0x07a007a0,
    0x00040069, 0x10018510, 0x01562306, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x07a007a0,
    0xe04b0961, 0x001b0004, 0x20591d66, 0x30006b03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02007604, 0x0000008f,
    0x00049531, 0x00020100, 0xfa0c5914, 0x04043f04,
    0x00040061, 0x77054660, 0x00000000, 0x00000024,
    0x00041965, 0x21058620, 0x02467705, 0xfffffffc,
    0x00040065, 0x25058620, 0x02467705, 0x00000003,
    0x80000065, 0x78058220, 0x020000a4, 0xfffffc00,
    0xe0471b69, 0x00402103, 0x206c1966, 0x47002503,
    0x205b1966, 0x30006c03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007804, 0x0000008f, 0x00049631, 0x00020100,
    0xfa0c5b14, 0x04044104, 0x00040065, 0x29058620,
    0x02464905, 0xfffffffc, 0x00041265, 0x37058620,
    0x02464905, 0x00000003, 0x80000065, 0x79058220,
    0x020000a4, 0xfffffc00, 0xe05d1b69, 0x00402903,
    0x206d1966, 0x5d003703, 0x205d1966, 0x30006d03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02007904, 0x0000008f,
    0x00049731, 0x00020100, 0xfa0c5d14, 0x04044304,
    0x00040061, 0x7a054660, 0x00000000, 0x0000002c,
    0x00040965, 0x38058620, 0x02467a05, 0xfffffffc,
    0xe05f1969, 0x00403803, 0x00041665, 0x39058620,
    0x02467a05, 0x00000003, 0x80000065, 0x7b058220,
    0x020000a4, 0xfffffc00, 0x206e1a66, 0x5f003903,
    0x205f1966, 0x30006e03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007b04, 0x0000008f, 0x00049831, 0x00020100,
    0xfa0c5f14, 0x04044b04, 0x00040061, 0x1f054660,
    0x00000000, 0x00000030, 0x80043861, 0x10014110,
    0x00000000, 0x0c600c60, 0x00040069, 0x10018510,
    0x01562306, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0c600c60, 0xe04b0961, 0x001b0004,
    0x80040061, 0x10014110, 0x00000000, 0x0ca00ca0,
    0x00040069, 0x10018510, 0x01562306, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0ca00ca0,
    0xe0290961, 0x001b0004, 0x80040061, 0x10014110,
    0x00000000, 0x0ce00ce0, 0x00040069, 0x10018510,
    0x01562306, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0ce00ce0, 0xe0370961, 0x001b0004,
    0x80030061, 0x21054010, 0x00000000, 0x76543210,
    0x00040d65, 0x3a058620, 0x02461f05, 0xfffffffc,
    0x80031a61, 0x21050120, 0x00462105, 0x00000000,
    0xe0611a69, 0x00403a03, 0x00041565, 0x3b058620,
    0x02461f05, 0x00000003, 0xe4221b40, 0x00802103,
    0x206f1a66, 0x61003b03, 0xe3211a69, 0x00202103,
    0x20611a66, 0x30006f03, 0xe3211a40, 0x7c002103,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049931, 0x1f160100, 0xfa002114, 0x04000000,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x80040061, 0x10014110, 0x00000000, 0x03e003e0,
    0x00040069, 0x10018510, 0x01562306, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x03e003e0,
    0xe0390961, 0x001b0004, 0x80000065, 0x20058220,
    0x020000a4, 0xfffffc00, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02002004, 0x0000008f, 0x00049a31, 0x00020100,
    0xfa0c6114, 0x04044b04, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x21054660,
    0x00000000, 0x00000034, 0x00041965, 0x3c058620,
    0x02462105, 0xfffffffc, 0xe0630969, 0x00403c03,
    0x00040065, 0x3d058620, 0x02462105, 0x00000003,
    0x80000065, 0x22058220, 0x020000a4, 0xfffffc00,
    0x20701a66, 0x63003d03, 0x203b1966, 0x30007003,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02002204, 0x0000008f,
    0x00049b31, 0x00020100, 0xfa0c3b14, 0x04042904,
    0x00043565, 0x3e058620, 0x02464505, 0xfffffffc,
    0x80000065, 0x25058220, 0x020000a4, 0xfffffc00,
    0xe0640a69, 0x00403e03, 0x00043565, 0x3f058620,
    0x02464505, 0x00000003, 0x20711966, 0x64003f03,
    0x203f1966, 0x30007103, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02002504, 0x0000008f, 0x00049c31, 0x00020100,
    0xfa0c3f14, 0x04043704, 0x00043b61, 0x29054660,
    0x00000000, 0x0000003c, 0x00041965, 0x3d058620,
    0x02462905, 0xfffffffc, 0x00043c65, 0x37058620,
    0x02462905, 0x00000003, 0x80000065, 0x2a058220,
    0x020000a4, 0xfffffc00, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xe0411b69, 0x00403d03,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x20431966, 0x41003703, 0x20631966, 0x30004303,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02002a04, 0x0000008f,
    0x00049d31, 0x00020100, 0xfa0c6314, 0x04043904,
    0x80000065, 0x3e058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x41058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x42058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x43058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x44058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x45058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x46058220, 0x020000a4, 0xfffffc00,
    0x27470070, 0x69002703, 0x80040061, 0x10014110,
    0x00000000, 0x06a006a0, 0x00040069, 0x10018510,
    0x01562306, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x06a006a0, 0xe01f0961, 0x001b0004,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003e04, 0x0000000f,
    0x00049e31, 0x29160100, 0xfa045914, 0x04040000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004104, 0x0000000f,
    0x00049f31, 0x2f160100, 0xfa045b14, 0x04040000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004204, 0x0000000f,
    0x00049031, 0x31160100, 0xfa045d14, 0x04040000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004404, 0x0000000f,
    0x00049131, 0x37160100, 0xfa046114, 0x04040000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004304, 0x0000000f,
    0x00049231, 0x3d160100, 0xfa045f14, 0x04040000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004504, 0x0000000f,
    0x00049331, 0x39160100, 0xfa043b14, 0x04040000,
    0x00041a65, 0x00010220, 0x22464705, 0x00465305,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004604, 0x0000000f,
    0x00049231, 0x3b160100, 0xfa043f14, 0x04040000,
    0x01040022, 0x0001c060, 0x00000730, 0x00000730,
    0x00043069, 0x48058660, 0x02463305, 0x00000002,
    0x80030061, 0x25054010, 0x00000000, 0x76543210,
    0x80031961, 0x25050120, 0x00462505, 0x00000000,
    0xe4261940, 0x00802503, 0xe3251969, 0x00202503,
    0xe3251940, 0x80002503, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049431, 0x23160100,
    0xfa002514, 0x04000000, 0x80033461, 0x25054010,
    0x00000000, 0x76543210, 0x80031961, 0x25050120,
    0x00462505, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xe4261940, 0x00802503,
    0xe3251969, 0x00202503, 0xe3251940, 0x80002503,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0xa0780040, 0x48002302, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049531, 0x23160100,
    0xfa002514, 0x04000000, 0xe0490068, 0x01e03303,
    0x80033561, 0x25054010, 0x00000000, 0x76543210,
    0x80031961, 0x25050120, 0x00462505, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xe4261940, 0x00802503, 0xe3251969, 0x00202503,
    0xe3251940, 0x84002503, 0x80002501, 0x00000000,
    0x00000000, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x274b1f70, 0x23007803,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049631, 0x23160100, 0xfa002514, 0x04000000,
    0x80002601, 0x00000000, 0x00000000, 0x00000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x00041952, 0x59040e68, 0x0e2e2305, 0x4b054905,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x23060220, 0x00347805, 0x00000000,
    0x80103601, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x25060220, 0x00347905, 0x00000000,
    0x00031a61, 0x23260220, 0x00345905, 0x00000000,
    0x00131a61, 0x25260220, 0x00345a05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x00000000, 0xfb0c2324, 0x00041f14,
    0xeb5b3f70, 0x00000d03, 0xa05f3240, 0x0d205102,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa0742040, 0x02401503, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xa05d1b40, 0x5b020f02,
    0x80030061, 0x0f054010, 0x00000000, 0x76543210,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x27611c70, 0x51005f03, 0xeb651670, 0x00005f03,
    0x80031b61, 0x0f050120, 0x00460f05, 0x00000000,
    0xe4101940, 0x00800f03, 0xe30f1969, 0x00200f03,
    0xe30f1940, 0x78000f03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049831, 0x0d160100,
    0xfa000f14, 0x04000000, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x00040a52, 0x63040e68,
    0x0e2e0d05, 0x61055d05, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xa0670940, 0x65026302,
    0x00040070, 0x00018660, 0x56466305, 0x00000000,
    0x00030061, 0x0d060220, 0x00347405, 0x00000000,
    0x80103801, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x0f060220, 0x00347505, 0x00000000,
    0x2f6b1c62, 0x63006703, 0x00041969, 0x70058660,
    0x02466b05, 0x0000001a, 0xaf6c0062, 0x5f025f02,
    0xe06e1968, 0x00606c03, 0x20721966, 0x70006e03,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xaf401962, 0x72027202, 0x27760070, 0x15007403,
    0xa0789040, 0x17027602, 0x00131961, 0x0f260220,
    0x00347905, 0x00000000, 0x00031a61, 0x0d260220,
    0x00347805, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x7a140000,
    0xfb040d24, 0x00040000, 0x80033961, 0x0f054010,
    0x00000000, 0x76543210, 0x80031961, 0x0f050120,
    0x00460f05, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0xe4101940, 0x00800f03,
    0xe30f1969, 0x00200f03, 0xe30f1940, 0x80000f03,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049a31, 0x0d160100, 0xfa000f14, 0x04000000,
    0x80033a61, 0x0f054010, 0x00000000, 0x76543210,
    0x80031961, 0x0f050120, 0x00460f05, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0xe4101940, 0x00800f03, 0xe30f1969, 0x00200f03,
    0xe30f1940, 0x80000f03, 0xa07c2940, 0x7a003302,
    0x00041969, 0x7e058660, 0x02467c05, 0x00000002,
    0xe0110068, 0x01e07c03, 0x80002a01, 0x00000000,
    0x00000000, 0x00000000, 0xa0131a40, 0x7e000d02,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049b31, 0x0d160100, 0xfa000f14, 0x04000000,
    0x80033b61, 0x0f054010, 0x00000000, 0x76543210,
    0x80031961, 0x0f050120, 0x00460f05, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0xe4101940, 0x00800f03, 0xe30f1969, 0x00200f03,
    0xe30f1940, 0x84000f03, 0x80002b01, 0x00000000,
    0x00000000, 0x00000000, 0x27151e70, 0x0d001303,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049c31, 0x0d160100, 0xfa000f14, 0x04000000,
    0x80002c01, 0x00000000, 0x00000000, 0x00000000,
    0x00041952, 0x17040e68, 0x0e2e0d05, 0x15051105,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x0d060220, 0x00341305, 0x00000000,
    0x80103c01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x0f060220, 0x00341405, 0x00000000,
    0x00031a61, 0x0d260220, 0x00341705, 0x00000000,
    0x00131a61, 0x0f260220, 0x00341805, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x00000000, 0xfb0c0d24, 0x00044014,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00043761, 0x23050120, 0x00560b06, 0x00000000,
    0x00040070, 0x00018660, 0x26465305, 0x00000000,
    0xef791a62, 0x00002303, 0x00040070, 0x00018550,
    0x15565506, 0x00010001, 0x01040022, 0x0001c060,
    0x00000670, 0x00000650, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00042261, 0x24050020,
    0x00663d1f, 0x00000000, 0x00040070, 0x00010220,
    0x42462705, 0x00466905, 0xa03f3240, 0xff401903,
    0xa0490040, 0x00201903, 0xa04b3a40, 0xff201903,
    0xa05f3240, 0x00101903, 0xa0613140, 0xff101903,
    0x00040065, 0x6b058220, 0x02461905, 0xfffffff8,
    0xa03d0040, 0x00401903, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x11041f62, 0x33058220,
    0x02462405, 0x00000000, 0x00040061, 0x77062650,
    0x00465305, 0x00000000, 0x00041a61, 0x35050020,
    0x00663307, 0x00000000, 0x00041c70, 0x00018660,
    0x56463d05, 0x00000010, 0x00041b65, 0x70058110,
    0x01567706, 0x00010001, 0x2f413262, 0x3f003d03,
    0x80030061, 0x3e054010, 0x00000000, 0x76543210,
    0x80030061, 0x3f054010, 0x00000000, 0x76543210,
    0x00041c61, 0x71050450, 0x00687006, 0x00000000,
    0x80041c61, 0x10014110, 0x00000000, 0x06a006a0,
    0x00040069, 0x10018510, 0x01564106, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x06a006a0,
    0xe0430961, 0x001b0004, 0x00040070, 0x00018660,
    0x56464905, 0x00000010, 0x80031d61, 0x3e050120,
    0x00463e05, 0x00000000, 0x80030061, 0x36054010,
    0x00000000, 0x76543210, 0x80031e61, 0x3f050120,
    0x00463f05, 0x00000000, 0x20451d66, 0x43003303,
    0x2f550062, 0x4b004903, 0xe43e1d69, 0x00203e03,
    0x80031d61, 0x36050120, 0x00463605, 0x00000000,
    0xe43f1d69, 0x00203f03, 0x00041d61, 0x47050020,
    0x00664507, 0x00000000, 0x00040070, 0x00018660,
    0x56465f05, 0x00000010, 0xe43e1d40, 0x6a003e03,
    0xe4361d69, 0x00203603, 0xe43f1d40, 0x6a003f03,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80041d61, 0x10014110, 0x00000000, 0x08e008e0,
    0x00040069, 0x10018510, 0x01565506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x08e008e0,
    0xe0590961, 0x001b0004, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x2f631262, 0x61005f03,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80039231, 0x3d0e0100, 0xfa003e0c, 0x04000000,
    0xe4361c40, 0x6a003603, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x205b1b66, 0x59004703,
    0x00040070, 0x76058550, 0x25587105, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80039d31, 0x350e0100, 0xfa00360c, 0x04000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00041a61, 0x5d050020, 0x00665b07, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x74050560, 0x20467605, 0x00000000,
    0x80040a61, 0x10014110, 0x00000000, 0x0ba00ba0,
    0x00040069, 0x10018510, 0x01566306, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0ba00ba0,
    0xe0650961, 0x001b0004, 0x20670966, 0x65005b03,
    0x80041961, 0x10014110, 0x00000000, 0x0ce00ce0,
    0x00040069, 0x10018510, 0x01566b06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0ce00ce0,
    0xe06d0961, 0x001b0004, 0x00041961, 0x76070200,
    0x00466d05, 0x00000000, 0x00041961, 0x72050010,
    0x00667607, 0x00000000, 0x80002d01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x73050010,
    0x00683506, 0x00000000, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x01041962, 0x3d050110,
    0x01587205, 0x00587305, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000004f, 0x80039231, 0x00020100,
    0xfa083f0c, 0x04003d04, 0xac770070, 0x00003303,
    0x00041f61, 0x00010660, 0x20467405, 0x00000000,
    0x01040022, 0x0001c060, 0x000000f8, 0x000000f8,
    0x00041b61, 0x7c062650, 0x00467705, 0x00000000,
    0x00041965, 0x7b058110, 0x01567c06, 0x00010001,
    0x00040061, 0x7d050020, 0x00666d07, 0x00000000,
    0x00041a61, 0x7c050450, 0x00687b06, 0x00000000,
    0xae09ad70, 0x00007d03, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041a70, 0x0d058550,
    0x25587c05, 0x00000000, 0x00041961, 0x0b050560,
    0x00460d05, 0x00000000, 0x00041965, 0x00010220,
    0x22460905, 0x00460b05, 0x11042162, 0x37058220,
    0x02463705, 0xff800000, 0x11042362, 0x39058220,
    0x02463905, 0xff800000, 0x11042262, 0x3b058220,
    0x02463b05, 0xff800000, 0x11042e62, 0x29058220,
    0x02462905, 0x7f800000, 0x11042f62, 0x2f058220,
    0x02462f05, 0x7f800000, 0x11042062, 0x31058220,
    0x02463105, 0x7f800000, 0x00040025, 0x00004600,
    0x00000000, 0x000000c0, 0x00041c61, 0x7d062650,
    0x00467705, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041965, 0x0f058110,
    0x01567d06, 0x00010001, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041961, 0x10050450,
    0x00680f06, 0x00000000, 0x00041970, 0x13058550,
    0x25581005, 0x00000000, 0x00040070, 0x00018550,
    0x25587105, 0x00000000, 0x00041a61, 0x11050560,
    0x00461305, 0x00000000, 0xaf149062, 0x00021103,
    0xae169070, 0x00001403, 0x00041961, 0x7e062650,
    0x00461605, 0x00000000, 0x00041961, 0x5b050110,
    0x00567e06, 0x00000000, 0x00040024, 0x0001c060,
    0x00000030, 0x00000030, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x00041a61, 0x5b054110,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0xa0243740, 0x00401903,
    0xa0333040, 0xff401903, 0xa0470040, 0x00201903,
    0xa0490040, 0xff201903, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0603240, 0x00101903,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0xa0621240, 0xff101903, 0x6018f065, 0x00105b05,
    0x00041f70, 0x00018660, 0x56462405, 0x00000010,
    0x00041a61, 0x23050450, 0x00681806, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x2f351f62, 0x33002403, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x80049e61, 0x10014110,
    0x00000000, 0x05200520, 0x00040069, 0x10018510,
    0x01563506, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x05200520, 0xe03d0961, 0x001b0004,
    0x80042161, 0x10014110, 0x00000000, 0x06e006e0,
    0x00040069, 0x10018510, 0x01563506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x06e006e0,
    0xe0720961, 0x001b0004, 0x00041f70, 0x00018660,
    0x56464705, 0x00000010, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x27411b62, 0x3d002900,
    0x80002f01, 0x00000000, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80041161, 0x10014110, 0x00000000, 0x05e005e0,
    0x00040069, 0x10018510, 0x01563506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x05e005e0,
    0xe03e0961, 0x001b0004, 0x25761b62, 0x72003700,
    0x2f4b3a62, 0x49004703, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x80040061, 0x10014110,
    0x00000000, 0x07200720, 0x00040069, 0x10018510,
    0x01563506, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x07200720, 0xe0730961, 0x001b0004,
    0x27431b62, 0x3e002f00, 0x00041165, 0x3d058220,
    0x02461905, 0xfffffff8, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80041161, 0x10014110,
    0x00000000, 0x06200620, 0x00040069, 0x10018510,
    0x01563506, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x06200620, 0xe03f0961, 0x001b0004,
    0x80040b61, 0x10014110, 0x00000000, 0x08200820,
    0x00040069, 0x10018510, 0x01564b06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x08200820,
    0xe0530961, 0x001b0004, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80041261, 0x10014110,
    0x00000000, 0x0ec00ec0, 0x00040069, 0x10018510,
    0x01564b06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0ec00ec0, 0xe00d0961, 0x001b0004,
    0x00040070, 0x00018660, 0x56466005, 0x00000010,
    0x80002d01, 0x00000000, 0x00000000, 0x00000000,
    0x25091e62, 0x73003900, 0x27451c62, 0x3f003100,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x80041261, 0x10014110, 0x00000000, 0x07600760,
    0x00040069, 0x10018510, 0x01563506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x07600760,
    0xe0740961, 0x001b0004, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x27591c62, 0x53004100,
    0x257b1b62, 0x0d007600, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x2f641762, 0x62006003,
    0x80030a61, 0x41054010, 0x00000000, 0x76543210,
    0x80041261, 0x10014110, 0x00000000, 0x08600860,
    0x00040069, 0x10018510, 0x01564b06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x08600860,
    0xe0540961, 0x001b0004, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80041161, 0x10014110,
    0x00000000, 0x01200120, 0x00040069, 0x10018510,
    0x01564b06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x01200120, 0xe00e0961, 0x001b0004,
    0x250b1d62, 0x74003b00, 0x80040b61, 0x10014110,
    0x00000000, 0x0b200b20, 0x00040069, 0x10018510,
    0x01566406, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0b200b20, 0xe0660961, 0x001b0004,
    0x80041261, 0x10014110, 0x00000000, 0x0f600f60,
    0x00040069, 0x10018510, 0x01566406, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0f600f60,
    0xe0130961, 0x001b0004, 0x80031d61, 0x41050120,
    0x00464105, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x275c1d62, 0x54004300,
    0x257d1c62, 0x0e000900, 0x80041261, 0x10014110,
    0x00000000, 0x08a008a0, 0x00040069, 0x10018510,
    0x01564b06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x08a008a0, 0xe0550961, 0x001b0004,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80041161, 0x10014110, 0x00000000, 0x01600160,
    0x00040069, 0x10018510, 0x01564b06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x01600160,
    0xe00f0961, 0x001b0004, 0x276d1d62, 0x66005900,
    0x25241c62, 0x13007b00, 0xe4411b69, 0x00204103,
    0x80041261, 0x10014110, 0x00000000, 0x0b800b80,
    0x00040069, 0x10018510, 0x01566406, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0b800b80,
    0xe0670961, 0x001b0004, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x275e1c62, 0x55004500,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x80041261, 0x10014110, 0x00000000, 0x0fa00fa0,
    0x00040069, 0x10018510, 0x01566406, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0fa00fa0,
    0xe0140961, 0x001b0004, 0x00040c61, 0x09062650,
    0x00464d05, 0x00000000, 0x25111d62, 0x0f000b00,
    0x80040a61, 0x10014110, 0x00000000, 0x04800480,
    0x00040069, 0x10018510, 0x01563d06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x04800480,
    0xe0460961, 0x001b0004, 0xe4411d40, 0x6a004103,
    0x276f1d62, 0x67005c00, 0x80041361, 0x10014110,
    0x00000000, 0x0bc00bc0, 0x00040069, 0x10018510,
    0x01566406, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0bc00bc0, 0xe06b0961, 0x001b0004,
    0x25331d62, 0x14007d00, 0x00041c65, 0x4c058110,
    0x01560906, 0x00010001, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80041161, 0x10014110,
    0x00000000, 0x02200220, 0x00040069, 0x10018510,
    0x01566406, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x02200220, 0xe0150961, 0x001b0004,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80039e31, 0x400e0100, 0xfa00410c, 0x04000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80041261, 0x10014110, 0x00000000, 0x0de00de0,
    0x00040069, 0x10018510, 0x01563d06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0de00de0,
    0xe0410961, 0x001b0004, 0x27711c62, 0x6b005e00,
    0x80041261, 0x10014110, 0x00000000, 0x06600660,
    0x00040069, 0x10018510, 0x01563d06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x06600660,
    0xe0480961, 0x001b0004, 0x00041c61, 0x4d050450,
    0x00684c06, 0x00000000, 0x25351c62, 0x15001100,
    0x80041261, 0x10014110, 0x00000000, 0x0e200e20,
    0x00040069, 0x10018510, 0x01563d06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0e200e20,
    0xe0430961, 0x001b0004, 0x00040a70, 0x55058550,
    0x25584d05, 0x00000000, 0xe7600070, 0x00601b03,
    0x80041161, 0x10014110, 0x00000000, 0x06a006a0,
    0x00040069, 0x10018510, 0x01563d06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x06a006a0,
    0xe04a0961, 0x001b0004, 0x00040b61, 0x53050560,
    0x00465505, 0x00000000, 0x20091965, 0x60005303,
    0x00040070, 0x61058550, 0x25582305, 0x00000000,
    0x00041a61, 0x00010660, 0x20460905, 0x00000000,
    0x00040961, 0x11050560, 0x00466105, 0x00000000,
    0x80002e01, 0x00000000, 0x00000000, 0x00000000,
    0x00041661, 0x45060100, 0x00584005, 0x00000000,
    0x80041761, 0x10014110, 0x00000000, 0x0da00da0,
    0x00040069, 0x10018510, 0x01563d06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0da00da0,
    0xe03f0961, 0x001b0004, 0x01040022, 0x0001c060,
    0x00001928, 0x00001928, 0x25630062, 0x48434100,
    0x25650f62, 0x4a434300, 0x80030061, 0x4c054010,
    0x00000000, 0x76543210, 0x25671162, 0x65006300,
    0x80031961, 0x4c050120, 0x00464c05, 0x00000000,
    0x25621c62, 0x46433f00, 0xe44d1940, 0x00804c03,
    0x256b1162, 0x67006200, 0xe34c1969, 0x00204c03,
    0xe06d0941, 0x34006b00, 0xe34c1940, 0x58004c03,
    0x203d0940, 0x6d203f00, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049f31, 0x00020100,
    0xfa084c14, 0x04003d04, 0x204d3f40, 0x6d204100,
    0x80030061, 0x53054010, 0x00000000, 0x76543210,
    0x80031961, 0x53050120, 0x00465305, 0x00000000,
    0xe4541940, 0x00805303, 0xe3531969, 0x00205303,
    0xe3531940, 0x5c005303, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049031, 0x00020100,
    0xfa085314, 0x04004d04, 0x20543040, 0x6d204300,
    0x80030061, 0x59054010, 0x00000000, 0x76543210,
    0x80031961, 0x59050120, 0x00465905, 0x00000000,
    0xe45a1940, 0x00805903, 0xe3591969, 0x00205903,
    0xe3591940, 0x60005903, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049131, 0x00020100,
    0xfa085914, 0x04005404, 0x206f0040, 0x6d004600,
    0x80030061, 0x5c054010, 0x00000000, 0x76543210,
    0x80030061, 0x5f054010, 0x00000000, 0x76543210,
    0x80031661, 0x62054010, 0x00000000, 0x76543210,
    0xa0553140, 0x01005103, 0x80031c61, 0x5c050120,
    0x00465c05, 0x00000000, 0x80031c61, 0x5f050120,
    0x00465f05, 0x00000000, 0x80031c61, 0x62050120,
    0x00466205, 0x00000000, 0xe45d1b40, 0x00805c03,
    0xe4601b40, 0x00805f03, 0xe4630b40, 0x00806203,
    0xe35c1b69, 0x00205c03, 0xe35f1b69, 0x00205f03,
    0xe3621b69, 0x00206203, 0xe35c1b40, 0x58005c03,
    0xe35f1b40, 0x60005f03, 0xe3621b40, 0x5c006203,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049231, 0x5a160100, 0xfa005c14, 0x04000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049331, 0x5d160100, 0xfa005f14, 0x04000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049431, 0x60160100, 0xfa006214, 0x04000000,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x20731140, 0x5a206f00, 0x20700040, 0x6d004800,
    0x00041241, 0x76058aa0, 0x0a467305, 0x3f800001,
    0x20720040, 0x6d004a00, 0x00041265, 0x7c058220,
    0x02467605, 0x007fffff, 0x00040065, 0x18058220,
    0x02467605, 0x80000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x00041765, 0x3e058220,
    0x02467605, 0x7f800000, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0x20750940, 0x5d207200,
    0x00041b40, 0x09058660, 0x06467c05, 0x3f000000,
    0x00040a6c, 0x41058660, 0x02463e05, 0x00000017,
    0x00040941, 0x7b058aa0, 0x0a467505, 0x3f800001,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x20741540, 0x60207000, 0xac001a70, 0x3f800901,
    0xa0151940, 0xf8204103, 0x00041365, 0x40058220,
    0x02467b05, 0x7f800000, 0x00040065, 0x7e058220,
    0x02467b05, 0x007fffff, 0x00040a41, 0x77058aa0,
    0x0a467405, 0x3f800001, 0x11040062, 0x0d058220,
    0x02460905, 0x3f000000, 0x00041b6c, 0x43058660,
    0x02464005, 0x00000017, 0x00041165, 0x3f058220,
    0x02467705, 0x7f800000, 0x00041b65, 0x24058220,
    0x02460d05, 0x7fffffff, 0x00041d40, 0x0c058660,
    0x06467e05, 0x3f000000, 0xa0470c40, 0xf8204303,
    0x00040065, 0x7d058220, 0x02467705, 0x007fffff,
    0x00041d6c, 0x42058660, 0x02463f05, 0x00000017,
    0x20131d66, 0x18002403, 0x00040065, 0x23058220,
    0x02467b05, 0x80000000, 0x00040065, 0x19058220,
    0x02467705, 0x80000000, 0x00040a40, 0x0a058660,
    0x06467d05, 0x3f000000, 0xac001970, 0x3f800a01,
    0x11040062, 0x0e058220, 0x02460a05, 0x3f000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00041965, 0x25058220, 0x02460e05, 0x7fffffff,
    0xac001f70, 0x3f800c01, 0x00040a61, 0x0a070200,
    0x00467905, 0x00000000, 0x11042062, 0x17058220,
    0x02460c05, 0x3f000000, 0x00041a61, 0x65050020,
    0x00660a07, 0x00000000, 0x00041a65, 0x33058220,
    0x02461705, 0x7fffffff, 0x00041f70, 0x49058aa0,
    0x3a461305, 0x3f7f0000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x203d1966, 0x23003303,
    0x20341e66, 0x19002503, 0xa0171140, 0x49201502,
    0x80030061, 0x49054010, 0x00000000, 0x76543210,
    0x00041a70, 0x4a058aa0, 0x3a463405, 0x3f7f0000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00041c70, 0x4c058aa0, 0x3a463d05, 0x3f7f0000,
    0x80031961, 0x49050120, 0x00464905, 0x00000000,
    0x27593170, 0x51005503, 0xa0191140, 0x4c204702,
    0xa0460040, 0xf8204203, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0530940, 0x4a204602,
    0xe44a1d40, 0x00804903, 0x00030061, 0x41060220,
    0x00345505, 0x00000000, 0x00130061, 0x43060220,
    0x00345605, 0x00000000, 0xe3491b69, 0x00204903,
    0xe3491940, 0x78004903, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049531, 0x47160100,
    0xfa004914, 0x04000000, 0x80002501, 0x00000000,
    0x00000000, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa05b1f40, 0x47025902,
    0x00131961, 0x43260220, 0x00345c05, 0x00000000,
    0x00031a61, 0x41260220, 0x00345b05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xf3084124, 0x00026514,
    0x80003461, 0x63054220, 0x00000000, 0x00000580,
    0x80000061, 0x64054220, 0x00000000, 0x00000600,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80009731, 0x09260100, 0xfa00630c, 0x04380000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80009831, 0x0d260100, 0xfa00640c, 0x04380000,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x00000000, 0xfb0c0124, 0x003c0944,
    0xa0601740, 0x01205103, 0x80030061, 0x4c054010,
    0x00000000, 0x76543210, 0x00043961, 0x0b070200,
    0x00461705, 0x00000000, 0x00043961, 0x0d070200,
    0x00465305, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x27621c70, 0x51006003,
    0x80031c61, 0x4c050120, 0x00464c05, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041c61, 0x66070000, 0x00660b07, 0x00000000,
    0xe44d1a40, 0x00804c03, 0x00041a61, 0x660f0000,
    0x00660d07, 0x00000000, 0xe34c1a69, 0x00204c03,
    0x00043961, 0x0e070200, 0x00461905, 0x00000000,
    0xe34c1a40, 0x78004c03, 0x00041a61, 0x66170000,
    0x00660e07, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049031, 0x4a160100,
    0xfa004c14, 0x04000000, 0x00041961, 0x661f0000,
    0x00564506, 0x00000000, 0x00033661, 0x42060220,
    0x00346005, 0x00000000, 0x00133661, 0x44060220,
    0x00346105, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xa0643640, 0x4a026202,
    0x00131961, 0x44260220, 0x00346505, 0x00000000,
    0x00031a61, 0x42260220, 0x00346405, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044a31, 0x00000000, 0xfb084224, 0x00006614,
    0x00040070, 0x00010220, 0x52461b05, 0x00466905,
    0x01040022, 0x0001c060, 0x00000880, 0x00000810,
    0x256c0062, 0x39432f00, 0x256e0062, 0x3b433100,
    0x80033a61, 0x67054010, 0x00000000, 0x76543210,
    0x80031561, 0x13054010, 0x00000000, 0x76543210,
    0x25701162, 0x6e006c00, 0x80031a61, 0x67050120,
    0x00466705, 0x00000000, 0x256b0062, 0x37432900,
    0x80031261, 0x6d054010, 0x00000000, 0x76543210,
    0x80031b61, 0x13050120, 0x00461305, 0x00000000,
    0xe4681b40, 0x00806703, 0x25721162, 0x70006b00,
    0x80031b61, 0x6d050120, 0x00466d05, 0x00000000,
    0x80031161, 0x70054010, 0x00000000, 0x76543210,
    0xe4140c40, 0x00801303, 0xe3671c69, 0x00206703,
    0xe0741141, 0x34007200, 0xe46e0c40, 0x00806d03,
    0x80031c61, 0x70050120, 0x00467005, 0x00000000,
    0xe3131c69, 0x00201303, 0xe3671c40, 0x58006703,
    0x20761140, 0x74202900, 0x207b0040, 0x74203100,
    0xe36d1c69, 0x00206d03, 0x00041269, 0x2905a660,
    0x02461905, 0x00000017, 0xe4710c40, 0x00807003,
    0xe3131d40, 0x5c001303, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80003a65, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80003a66, 0x10218220,
    0x02001020, 0x0000000f, 0x80049a31, 0x65160100,
    0xfa006714, 0x04000000, 0xe36d1c40, 0x5c006d03,
    0xe3701b69, 0x00207003, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049b31, 0x6b160100,
    0xfa006d14, 0x04000000, 0xe3701940, 0x60007003,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049c31, 0x6e160100, 0xfa007014, 0x04000000,
    0x80002a01, 0x00000000, 0x00000000, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x20021240, 0x65207600, 0x80031161, 0x76054010,
    0x00000000, 0x76543210, 0x20770040, 0x74202f00,
    0x00041241, 0x0b058aa0, 0x0a460205, 0x3f7ffffe,
    0x80031961, 0x76050120, 0x00467605, 0x00000000,
    0x20013940, 0x74003b00, 0x80002b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x20031340, 0x6b207700,
    0xe4770940, 0x00807603, 0x00041141, 0x0d058aa0,
    0x0a460305, 0x3f7ffffe, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x20091740, 0x6e207b00,
    0x80031161, 0x7b054010, 0x00000000, 0x76543210,
    0x207c0040, 0x74003700, 0xe3761a69, 0x00207603,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x00041241, 0x0f058aa0, 0x0a460905, 0x3f7ffffe,
    0x80031a61, 0x7b050120, 0x00467b05, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049d31, 0x09160100, 0xfa001314, 0x04000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x1305a660, 0x02461705, 0x00000017,
    0xe3761b40, 0x58007603, 0x00041a40, 0x15058660,
    0x06461305, 0x43800000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049e31, 0x71160100,
    0xfa007614, 0x04000000, 0x20300941, 0x15000b00,
    0x60331145, 0x00103000, 0x00041140, 0x2f058660,
    0x06462905, 0x43800000, 0xe5361162, 0x00003300,
    0x80002e01, 0x00000000, 0x00000000, 0x00000000,
    0x203f1540, 0x71207c00, 0xe47c0940, 0x00807b03,
    0x207d0040, 0x74003900, 0x00041162, 0x3a058aa0,
    0x5a463605, 0x437f0000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x00041341, 0x43058aa0,
    0x0a463f05, 0x3f800001, 0xe37b1969, 0x00207b03,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x20491141, 0x15004300, 0x00041169, 0x1605a660,
    0x02465305, 0x00000017, 0xe37b1a40, 0x60007b03,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x604c0045, 0x00124900, 0x00041a40, 0x25058660,
    0x06461605, 0x43800000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049f31, 0x77160100,
    0xfa007b14, 0x04000000, 0xe5551162, 0x00024c00,
    0x20311941, 0x25000d00, 0x00041461, 0x15062650,
    0x00461105, 0x00000000, 0x00041262, 0x23058aa0,
    0x5a465505, 0x437f0000, 0x60341245, 0x00103100,
    0x20321f41, 0x2f000f00, 0x00041965, 0x6b058110,
    0x01561506, 0x00010001, 0xe5371262, 0x00003400,
    0x60351245, 0x00103200, 0x00041961, 0x00010450,
    0x20686b06, 0x00000000, 0x00041361, 0x0f070a00,
    0x00463a05, 0x00000000, 0x00041262, 0x3c058aa0,
    0x5a463705, 0x437f0000, 0xe5381262, 0x00003500,
    0x00041961, 0x6f050010, 0x00660f07, 0x00000000,
    0x00041162, 0x3e058aa0, 0x5a463805, 0x437f0000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x11040062, 0x5f058110, 0x01586f05, 0x00000000,
    0x00041361, 0x10070a00, 0x00463c05, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x00041961, 0x70050010, 0x00661007, 0x00000000,
    0x11041962, 0x60058110, 0x01587005, 0x00000000,
    0x00041161, 0x11070a00, 0x00463e05, 0x00000000,
    0x00041961, 0x71050010, 0x00661107, 0x00000000,
    0x11041962, 0x61058110, 0x01587105, 0x00000000,
    0x00041761, 0x12070a00, 0x00462305, 0x00000000,
    0x00041961, 0x6c050010, 0x00661207, 0x00000000,
    0x11041962, 0x5c058110, 0x01586c05, 0x00000000,
    0x80002f01, 0x00000000, 0x00000000, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x20413640, 0x77200100, 0x00041141, 0x47058aa0,
    0x0a464105, 0x3f800001, 0x80002d01, 0x00000000,
    0x00000000, 0x00000000, 0x20400040, 0x09207d00,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x00041141, 0x45058aa0, 0x0a464005, 0x3f800001,
    0x204a1141, 0x25004500, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x604d1145, 0x00124a00,
    0x204b1541, 0x2f004700, 0xe5591262, 0x00024d00,
    0x60531245, 0x00124b00, 0x00041262, 0x5d058aa0,
    0x5a465905, 0x437f0000, 0xe55a1262, 0x00025300,
    0x00041261, 0x13070a00, 0x00465d05, 0x00000000,
    0x00041162, 0x62058aa0, 0x5a465a05, 0x437f0000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x00041961, 0x6d050010, 0x00661307, 0x00000000,
    0x11041962, 0x5d058110, 0x01586d05, 0x00000000,
    0x00041161, 0x14070a00, 0x00466205, 0x00000000,
    0x00041961, 0x6e050010, 0x00661407, 0x00000000,
    0x11041962, 0x5e058110, 0x01586e05, 0x00000000,
    0x00040024, 0x0001c060, 0x00000080, 0x00000080,
    0x00041e61, 0x61054110, 0x00000000, 0x00800080,
    0x00041f61, 0x60054110, 0x00000000, 0x00800080,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x5f054110, 0x00000000, 0x00800080,
    0x00040d61, 0x5e054110, 0x00000000, 0x00000000,
    0x00040f61, 0x5d054110, 0x00000000, 0x00000000,
    0x00040061, 0x5c054110, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000006a0,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0xa07b0040, 0x1b005102, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80031761, 0x09054010,
    0x00000000, 0x76543210, 0x277d0a70, 0x51007b03,
    0xa0033940, 0x01c07b03, 0x80031b61, 0x09050120,
    0x00460905, 0x00000000, 0x00041f61, 0x23060100,
    0x00585f05, 0x00000000, 0x00040a61, 0x35060100,
    0x00585e05, 0x00000000, 0x00041f61, 0x36060100,
    0x00585d05, 0x00000000, 0x00041f61, 0x37060100,
    0x00585c05, 0x00000000, 0x00040061, 0x1b060100,
    0x00586105, 0x00000000, 0x00040061, 0x1c060100,
    0x00586005, 0x00000000, 0x00031f61, 0x6b060220,
    0x00340305, 0x00000000, 0x00131f61, 0x6d060220,
    0x00340405, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0xe40a0f40, 0x00800903,
    0x00040f61, 0x6f050020, 0x00562306, 0x00000000,
    0xe3091a69, 0x00200903, 0xe3091940, 0x78000903,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049031, 0x77160100, 0xfa000914, 0x04000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x27090070, 0x7b000303, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa0013940, 0x77027d02,
    0xa00b1940, 0x01020902, 0x00131961, 0x6d260220,
    0x00340c05, 0x00000000, 0x00031a61, 0x6b260220,
    0x00340b05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xf3086b24, 0x00026f14, 0xa00e0040, 0x02807b03,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00041661, 0x74050020, 0x00561c06, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x27101a70, 0x7b000e03, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00031761, 0x70060220,
    0x00340e05, 0x00000000, 0x00131761, 0x72060220,
    0x00340f05, 0x00000000, 0xa0120b40, 0x01021002,
    0x00131961, 0x72260220, 0x00341305, 0x00000000,
    0x00031a61, 0x70260220, 0x00341205, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x00000000, 0xf3087024, 0x00027414,
    0xa0150040, 0x03407b03, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x7d050020,
    0x00561b06, 0x00000000, 0x27171a70, 0x7b001503,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x00033261, 0x75060220, 0x00341505, 0x00000000,
    0x00130061, 0x77060220, 0x00341605, 0x00000000,
    0xa0191b40, 0x01021702, 0x00131961, 0x77260220,
    0x00341a05, 0x00000000, 0x00031a61, 0x75260220,
    0x00341905, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x00000000,
    0xf3087524, 0x00027d14, 0xa0230040, 0x02207b03,
    0x00040061, 0x0d050020, 0x00563706, 0x00000000,
    0x27250a70, 0x7b002303, 0x00030061, 0x09060220,
    0x00342305, 0x00000000, 0x00130061, 0x0b060220,
    0x00342405, 0x00000000, 0xa0291b40, 0x01022502,
    0x00131961, 0x0b260220, 0x00342a05, 0x00000000,
    0x00031a61, 0x09260220, 0x00342905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x00000000, 0xf3080924, 0x00020d14,
    0xa02f1640, 0x02e07b03, 0x00040061, 0x12050020,
    0x00563606, 0x00000000, 0x27311a70, 0x7b002f03,
    0x00033361, 0x0e060220, 0x00342f05, 0x00000000,
    0x00130061, 0x10060220, 0x00343005, 0x00000000,
    0xa0330a40, 0x01023102, 0x00131961, 0x10260220,
    0x00343405, 0x00000000, 0x00031a61, 0x0e260220,
    0x00343305, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xf3080e24, 0x00021214, 0xa0360040, 0x03a07b03,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x17050020, 0x00563506, 0x00000000,
    0x27381a70, 0x7b003603, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00031361, 0x13060220,
    0x00343605, 0x00000000, 0x00130061, 0x15060220,
    0x00343705, 0x00000000, 0xa03a1b40, 0x01023802,
    0x00131961, 0x15260220, 0x00343b05, 0x00000000,
    0x00031a61, 0x13260220, 0x00343a05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xf3081324, 0x00021714,
    0x00040070, 0x00018660, 0x16467905, 0x00000001,
    0x80033a61, 0x66054010, 0x00000000, 0x76543210,
    0xa03f1740, 0x01607b03, 0x80031a61, 0x66050120,
    0x00466605, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00031a61, 0x18060220,
    0x00343f05, 0x00000000, 0x00131b61, 0x1a060220,
    0x00344005, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0xe4671b40, 0x00806603,
    0xe3661969, 0x00206603, 0xe3661940, 0x44006603,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049531, 0x64160100, 0xfa006614, 0x04000000,
    0x80002501, 0x00000000, 0x00000000, 0x00000000,
    0x11041162, 0x3d058220, 0x02466405, 0x00000002,
    0x00041961, 0x38070200, 0x00463d05, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x27411770, 0x7b003f03, 0x00041a61, 0x23050020,
    0x00663807, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0xa0431a40, 0x01024102,
    0x00131961, 0x1a260220, 0x00344405, 0x00000000,
    0x00031a61, 0x18260220, 0x00344305, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xf3081824, 0x00022314,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80031161, 0x16054010, 0x00000000, 0x76543210,
    0x80031461, 0x5c054010, 0x00000000, 0x76543210,
    0x00040070, 0x00018660, 0x26464f05, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80031761, 0x71054010, 0x00000000, 0x76543210,
    0x80031761, 0x25054010, 0x00000000, 0x76543210,
    0x80031d61, 0x16050120, 0x00461605, 0x00000000,
    0x80031d61, 0x5c050120, 0x00465c05, 0x00000000,
    0xef461662, 0x00006903, 0x80031d61, 0x71050120,
    0x00467105, 0x00000000, 0x80031d61, 0x25050120,
    0x00462505, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0xe4172040, 0x00801603,
    0xe45d0c40, 0x00805c03, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xe4720c40, 0x00807103,
    0xe4251c69, 0x00202503, 0xe3161c69, 0x00201603,
    0xe35c1c69, 0x00205c03, 0xe3711c69, 0x00207103,
    0xe4251c40, 0x68002503, 0xe3161c40, 0x64001603,
    0xe35c1c40, 0x74005c03, 0xe3711c40, 0x48007103,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80039731, 0x240e0100, 0xfa00250c, 0x04000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049731, 0x14160100, 0xfa001614, 0x04000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049831, 0x5a160100, 0xfa005c14, 0x04000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049931, 0x6f160100, 0xfa007114, 0x04000000,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x21040e68, 0x0e0e5a05, 0x27051405,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x39062650, 0x00466f05, 0x00000000,
    0x00040965, 0x48058110, 0x01563906, 0x00010001,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040065, 0x49050110, 0x01582405, 0x00584805,
    0x00041961, 0x00010450, 0x20684906, 0x00000000,
    0x01040022, 0x0001c060, 0x00000df0, 0x00000df0,
    0x80031761, 0x4a054010, 0x00000000, 0x76543210,
    0x80031961, 0x4a050120, 0x00464a05, 0x00000000,
    0xe44b0940, 0x00804a03, 0xe34a1969, 0x00204a03,
    0xe34a1940, 0x6c004a03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049a31, 0x48160100,
    0xfa004a14, 0x04000000, 0x80002a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040070, 0x00018550,
    0x15564806, 0x00000000, 0x01040022, 0x0001c060,
    0x00000950, 0x00000950, 0x80031261, 0x5f054010,
    0x00000000, 0x76543210, 0x80031961, 0x5f050120,
    0x00465f05, 0x00000000, 0xe4601940, 0x00805f03,
    0xe35f1969, 0x00205f03, 0xe35f1940, 0x74005f03,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049b31, 0x5d160100, 0xfa005f14, 0x04000000,
    0x80002b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040070, 0x00018660, 0x26465d05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000460, 0x00000450,
    0x80030061, 0x62054010, 0x00000000, 0x76543210,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80031761, 0x25054010, 0x00000000, 0x76543210,
    0x80031661, 0x2f054010, 0x00000000, 0x76543210,
    0x80030061, 0x65054010, 0x00000000, 0x76543210,
    0x80030061, 0x44054010, 0x00000000, 0x76543210,
    0x80031d61, 0x62050120, 0x00466205, 0x00000000,
    0x80031d61, 0x25050120, 0x00462505, 0x00000000,
    0x80031d61, 0x2f050120, 0x00462f05, 0x00000000,
    0x80031d61, 0x65050120, 0x00466505, 0x00000000,
    0x80031d61, 0x44050120, 0x00464405, 0x00000000,
    0xe4631d40, 0x00806203, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0xe4260d40, 0x00802503,
    0xe4300d40, 0x00802f03, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xe4660d40, 0x00806503,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0xe4450d40, 0x00804403, 0xe3621d69, 0x00206203,
    0xe3251d69, 0x00202503, 0xe32f1d69, 0x00202f03,
    0xe3651d69, 0x00206503, 0xe3441d69, 0x00204403,
    0xe3621d40, 0x74006203, 0xe3251d40, 0x54002503,
    0xe32f1d40, 0x54002f03, 0xe3651d40, 0x74006503,
    0xe3441d40, 0x40004403, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049c31, 0x60160100,
    0xfa006214, 0x04000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049731, 0x23160100,
    0xfa002514, 0x04000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049d31, 0x29160100,
    0xfa002f14, 0x04000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049531, 0x63160100,
    0xfa006514, 0x04000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049a31, 0x42160100,
    0xfa004414, 0x04000000, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x4a058660,
    0x02466005, 0x00000002, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0xa04d0040, 0x4a002302,
    0x80002501, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001401, 0x00000000, 0x00000000, 0x00000000,
    0xe04b0068, 0x01e06303, 0x80002d01, 0x00000000,
    0x00000000, 0x00000000, 0x274f1a70, 0x29004d03,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x2f060220, 0x00344d05, 0x00000000,
    0x00130061, 0x31060220, 0x00344e05, 0x00000000,
    0x80002a01, 0x00000000, 0x00000000, 0x00000000,
    0x00041b52, 0x51040e68, 0x0e2e4205, 0x4f054b05,
    0x00131961, 0x31260220, 0x00345205, 0x00000000,
    0x00031a61, 0x2f260220, 0x00345105, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x62140000, 0xfb042f24, 0x00040000,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00042e61, 0x62054220, 0x00000000, 0xffffffc0,
    0x00040025, 0x00004600, 0x00000000, 0x00000438,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80031261, 0x6b054010, 0x00000000, 0x76543210,
    0x80033161, 0x6e054010, 0x00000000, 0x76543210,
    0x80033e61, 0x32054010, 0x00000000, 0x76543210,
    0x80031261, 0x35054010, 0x00000000, 0x76543210,
    0x80033a61, 0x4a054010, 0x00000000, 0x76543210,
    0x00041269, 0x53058660, 0x02466905, 0x00000003,
    0x80031e61, 0x6b050120, 0x00466b05, 0x00000000,
    0x80031e61, 0x6e050120, 0x00466e05, 0x00000000,
    0x80031e61, 0x32050120, 0x00463205, 0x00000000,
    0x80031e61, 0x35050120, 0x00463505, 0x00000000,
    0x80031e61, 0x4a050120, 0x00464a05, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xe46c0a40, 0x00806b03, 0xe46f1d40, 0x00806e03,
    0xe4331d40, 0x00803203, 0xe4361d40, 0x00803503,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0xe44b1d40, 0x00804a03, 0xe36b1d69, 0x00206b03,
    0xe36e1d69, 0x00206e03, 0xe3321d69, 0x00203203,
    0xe3351d69, 0x00203503, 0xe34a1d69, 0x00204a03,
    0xe36b1d40, 0x74006b03, 0xe36e1d40, 0x74006e03,
    0xe3321d40, 0x54003203, 0xe3351d40, 0x54003503,
    0xe34a1d40, 0x40004a03, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80000c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049131, 0x66160100,
    0xfa006b14, 0x04000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003165, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80003166, 0x10218220,
    0x02001020, 0x0000000f, 0x80049131, 0x6c160100,
    0xfa006e14, 0x04000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80000b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049f31, 0x30160100,
    0xfa003214, 0x04000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049731, 0x33160100,
    0xfa003514, 0x04000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049a31, 0x48160100,
    0xfa004a14, 0x04000000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x00041669, 0x55058660,
    0x02466605, 0x00000002, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0xe0591168, 0x01e06c03,
    0x80002f01, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0xa05b0040, 0x55003002, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x275d0970, 0x33005b03,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x20342e66, 0x53006203, 0x80002a01, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x5f040e68,
    0x0e2e4805, 0x5d055905, 0x00030061, 0x30060220,
    0x00345b05, 0x00000000, 0x80103f01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x32060220,
    0x00345c05, 0x00000000, 0x00031a61, 0x30260220,
    0x00345f05, 0x00000000, 0x00131a61, 0x32260220,
    0x00346005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x00000000,
    0xfb0c3024, 0x00043414, 0x00040025, 0x00004600,
    0x00000000, 0x000003f8, 0x00040061, 0x61050120,
    0x00564606, 0x00000000, 0x00041970, 0x00010660,
    0x56462705, 0x00466105, 0x01040022, 0x0001c060,
    0x000003b8, 0x000003b8, 0x00041f69, 0x62058660,
    0x02462105, 0x00000002, 0x80030061, 0x38054010,
    0x00000000, 0x76543210, 0x80030061, 0x3b054010,
    0x00000000, 0x76543210, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80031561, 0x4d054010,
    0x00000000, 0x76543210, 0x80030061, 0x7a054010,
    0x00000000, 0x76543210, 0x80031c61, 0x38050120,
    0x00463805, 0x00000000, 0x80031c61, 0x3b050120,
    0x00463b05, 0x00000000, 0x80031c61, 0x4d050120,
    0x00464d05, 0x00000000, 0x80031c61, 0x7a050120,
    0x00467a05, 0x00000000, 0xe4391c40, 0x00803803,
    0xe43c1c40, 0x00803b03, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xe44e0c40, 0x00804d03,
    0xe47b0c40, 0x00807a03, 0xe3381c69, 0x00203803,
    0xe33b1c69, 0x00203b03, 0xe34d1c69, 0x00204d03,
    0xe37a1c69, 0x00207a03, 0xe3381c40, 0x54003803,
    0xe33b1c40, 0x54003b03, 0xe34d1c40, 0x40004d03,
    0xe37a1c40, 0x4c007a03, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049031, 0x36160100,
    0xfa003814, 0x04000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049131, 0x39160100,
    0xfa003b14, 0x04000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x80003065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80003066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049031, 0x4b160100,
    0xfa004d14, 0x04000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049231, 0x78160100,
    0xfa007a14, 0x04000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0xa0650040, 0x62003602,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xe0630068, 0x01e02103, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x27670070, 0x39006503,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00031261, 0x35060220, 0x00346505, 0x00000000,
    0x80103001, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x37060220, 0x00346605, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x00041b52, 0x69040e68, 0x0e2e4b05, 0x67056305,
    0x00131961, 0x37260220, 0x00346a05, 0x00000000,
    0x00031a61, 0x35260220, 0x00346905, 0x00000000,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x00000000, 0xfb0c3524, 0x00047814,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x6b050120, 0x00564606, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0xa06f0040, 0x6b116c02, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x6d050120,
    0x00006b04, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x3a050120,
    0x00566f06, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x3c060210,
    0x00466f05, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00040970, 0x74058550,
    0x25563c06, 0x00000000, 0x00043770, 0x77058550,
    0x15565706, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x00043261, 0x72050560,
    0x00467405, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00040a61, 0x75050560,
    0x00467705, 0x00000000, 0x00041965, 0x00010220,
    0x22467205, 0x00467505, 0x01040022, 0x0001c060,
    0x00000130, 0x00000130, 0xa1783740, 0x040e2b03,
    0xaa793740, 0x040e2d03, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00030070, 0x7a050220,
    0x52467805, 0x00442b06, 0x80103201, 0x00000000,
    0x00000000, 0x00000000, 0x80100a01, 0x00000000,
    0x00000000, 0x00000000, 0x00130070, 0x7b050220,
    0x52467905, 0x00442d06, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x36060220,
    0x00347805, 0x00000000, 0x00133761, 0x38060220,
    0x00347905, 0x00000000, 0x00030c40, 0x7c052660,
    0x06467a05, 0x00442b26, 0x80103701, 0x00000000,
    0x00000000, 0x00000000, 0x00130b40, 0x7d052660,
    0x06467b05, 0x00442d26, 0x00031a61, 0x36260220,
    0x00347c05, 0x00000000, 0x00131a61, 0x38260220,
    0x00347d05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x63140000,
    0xfb183624, 0x01003a14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00041f41, 0x01050660,
    0x05466d05, 0x00561d06, 0x00040070, 0x00010660,
    0x56462705, 0x00466b05, 0x01040022, 0x0001c060,
    0x00000200, 0x00000200, 0x0004b752, 0x03040660,
    0x0e0e6304, 0x27050105, 0x80031361, 0x14054010,
    0x00000000, 0x76543210, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00040a69, 0x09058660,
    0x02460305, 0x00000003, 0x80031a61, 0x14050120,
    0x00461405, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa10c0a40, 0x090e0502,
    0x80103301, 0x00000000, 0x00000000, 0x00000000,
    0xaa0d1b40, 0x0a0e0702, 0xe4150940, 0x00801403,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xe00a1568, 0x01d00303, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00030c70, 0x0e050220,
    0x52460c05, 0x00440506, 0x00033761, 0x3b060220,
    0x00340c05, 0x00000000, 0x80103401, 0x00000000,
    0x00000000, 0x00000000, 0x00130d70, 0x0f050220,
    0x52460d05, 0x00440706, 0x00131161, 0x3d060220,
    0x00340d05, 0x00000000, 0xe3141e69, 0x00201403,
    0xe3141940, 0x50001403, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049331, 0x12160100,
    0xfa001414, 0x04000000, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00040c52, 0x10040e68,
    0x0e2e1205, 0x0e050a05, 0x00131961, 0x3d260220,
    0x00341105, 0x00000000, 0x00031a61, 0x3b260220,
    0x00341005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x00000000,
    0xfb0c3b24, 0x000c1f24, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80031361, 0x7e050220,
    0x00460005, 0x00000000, 0x80040931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_BFS_build_qnodes_pc_amplify = {
   .prog_data = {
      .base.nr_params = 13,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 4096,
      .base.total_shared = 0,
      .base.program_size = 37616,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_BFS_build_qnodes_pc_amplify_relocs,
      .base.uses_atomic_load_store = false,
      .local_size = { 16, 1, 1 },
      .prog_offset = { 0, 0, 0 },
      .prog_mask = 2,
      .prog_spilled = 6,
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
   .args = gfx125_bvh_build_BFS_build_qnodes_pc_amplify_args,
   .code = gfx125_bvh_build_BFS_build_qnodes_pc_amplify_code,
};
const char *gfx125_bvh_build_BFS_build_qnodes_pc_amplify_sha1 = "39c6be4f3343a3b6f7c5ca4f167cba6784b9e76e";

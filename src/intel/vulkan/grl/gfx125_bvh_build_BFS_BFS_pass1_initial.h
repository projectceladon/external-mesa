#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_BFS_BFS_pass1_initial_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_BFS_BFS_pass1_initial_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g78<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
and(16)         g56<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 1H compacted };
mov(16)         g21<1>UD        g0.1<0,1,0>UD                   { align1 1H };
mov(8)          g30<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(1)          g79<1>UD        g78<0,1,0>UD    0x00000000UD    { align1 WE_all 1N I@4 compacted };
shl(16)         g58<1>D         g56<8,8,1>D     0x00000004UD    { align1 1H I@4 };
shl(16)         g51<1>D         g21<8,8,1>D     0x00000009UD    { align1 1H I@4 };
add(8)          g30.8<1>UW      g30<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(1)         g1UD            g79UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
add(16)         g53<1>D         g51<1,1,0>D     512D            { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g60<1>D         g30<8,8,1>UW                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g62.1<2>F       g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g40.1<2>F       g2.3<0,1,0>F                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g62<2>F         g2.2<0,1,0>F                    { align1 1Q F@2 compacted };
mov(8)          g40<2>F         g2.2<0,1,0>F                    { align1 2Q F@2 compacted };
add(8)          g65<1>D         g62<8,4,2>D     52D             { align1 1Q F@2 compacted };
add(8)          g68<1>D         g62<8,4,2>D     8D              { align1 1Q compacted };
add(8)          g42<1>D         g40<8,4,2>D     52D             { align1 2Q F@1 compacted };
add(8)          g47<1>D         g40<8,4,2>D     8D              { align1 2Q compacted };
cmp.l.f0.0(8)   g66<1>UD        g65<8,8,1>UD    g62<8,4,2>UD    { align1 1Q I@4 };
mov(8)          g22<2>UD        g65<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g69<1>UD        g68<8,8,1>UD    g62<8,4,2>UD    { align1 1Q I@5 };
cmp.l.f0.0(8)   g43<1>UD        g42<8,8,1>UD    g40<8,4,2>UD    { align1 2Q I@5 };
mov(8)          g24<2>UD        g42<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(8)   g48<1>UD        g47<8,8,1>UD    g40<8,4,2>UD    { align1 2Q I@6 };
add(8)          g67<1>D         -g66<8,8,1>D    g62.1<8,4,2>D   { align1 1Q I@6 };
add(8)          g70<1>D         -g69<8,8,1>D    g62.1<8,4,2>D   { align1 1Q I@5 };
add(16)         g62<1>D         g60<1,1,0>D     g58<1,1,0>D     { align1 1H compacted };
add(8)          g44<1>D         -g43<8,8,1>D    g40.1<8,4,2>D   { align1 2Q I@6 };
add(8)          g49<1>D         -g48<8,8,1>D    g40.1<8,4,2>D   { align1 2Q I@5 };
mov(8)          g22.1<2>UD      g67<4,4,1>UD                    { align1 1Q I@5 };
and(16)         g3<1>UD         g62<1,1,0>UD    0x000001ffUD    { align1 1H I@4 compacted };
mov(8)          g24.1<2>UD      g44<4,4,1>UD                    { align1 2Q I@4 };
add(16)         g63<1>D         g51<1,1,0>D     g3<1,1,0>D      { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g45UD           g22UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
mov(8)          g23<2>UD        g68<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g25<2>UD        g47<4,4,1>UD                    { align1 2Q $1.src };
mov(8)          g23.1<2>UD      g70<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g25.1<2>UD      g49<4,4,1>UD                    { align1 2Q I@2 };
sel.l(16)       g55<1>UD        g53<1,1,0>UD    g45<1,1,0>UD    { align1 1H $1.dst compacted };
cmp.l.f0.0(16)  g65<1>UD        g63<1,1,0>UD    g55<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g50UD           g23UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
add(16)         g69<1>D         g54<1,1,0>D     32D             { align1 1H $2.dst compacted };
add(16)         g75<1>D         g54<1,1,0>D     48D             { align1 1H compacted };
cmp.l.f0.0(16)  g71<1>UD        g69<1,1,0>UD    g54<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g28<2>UD        g69<4,4,1>UD                    { align1 1Q };
mov(8)          g30<2>UD        g70<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g77<1>UD        g75<1,1,0>UD    0x00000030UD    { align1 1H I@4 compacted };
add(16)         g73<1>D         -g71<1,1,0>D    g56<1,1,0>D     { align1 1H @4 $2.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g79<1>D         -g77<1,1,0>D    g56<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g30.1<2>UD      g74<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g28.1<2>UD      g73<4,4,1>UD                    { align1 1Q I@3 };
mov(16)         g71<2>W         -g65<8,8,1>D                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g20UD           g28UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $3 };
and(16)         g67<1>UW        g71<16,8,2>UW   0x0001UW        { align1 1H I@1 };
mov(8)          g29<2>UD        g75<4,4,1>UD                    { align1 1Q $3.src };
mov(8)          g31<2>UD        g76<4,4,1>UD                    { align1 2Q $3.src };
mov(16)         g68<1>W         g67<32,16,2>B                   { align1 1H I@3 };
mov(8)          g29.1<2>UD      g79<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g31.1<2>UD      g80<4,4,1>UD                    { align1 2Q I@3 };
add(16)         g81<1>F         g26<1,1,0>F     -g20<1,1,0>F    { align1 1H $3.dst compacted };
sel.ge(16)      g87<1>F         g81<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@1 };
cmp.l.f0.0(16)  g100<1>F        g87<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H F@1 };
math inv(16)    g91<1>F         g87<8,8,1>F     null<8,8,1>F    { align1 1H $4 };
cmp.g.f0.0(16)  g102<1>F        g81<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g80UD           g29UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $5 };
mul(16)         g93<1>F         g91<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H $4.dst };
and.nz.f0.0(16) null<1>UD       g100<8,8,1>UD   g102<8,8,1>UD   { align1 1H F@2 };
(+f0.0) sel(16) g103<1>UD       g93<1,1,0>UD    0x00000000UD    { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
add(16)         g84<1>F         g80<1,1,0>F     -g22<1,1,0>F    { align1 1H $5.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g86<1>F         g82<1,1,0>F     -g24<1,1,0>F    { align1 1H $5.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.ge(16)      g88<1>F         g84<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@2 };
cmp.g.f0.0(16)  g105<1>F        g84<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
sel.ge(16)      g90<1>F         g86<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@3 };
cmp.l.f0.0(16)  g107<1>F        g88<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
math inv(16)    g94<1>F         g88<8,8,1>F     null<8,8,1>F    { align1 1H $6 };
math inv(16)    g97<1>F         g90<8,8,1>F     null<8,8,1>F    { align1 1H @2 $7 };
and.nz.f0.0(16) null<1>UD       g107<8,8,1>UD   g105<8,8,1>UD   { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
mul(16)         g99<1>F         g97<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H I@3 };
mul(16)         g96<1>F         g94<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H $6.dst };
(+f0.0) sel(16) g108<1>UD       g96<1,1,0>UD    0x00000000UD    { align1 1H F@1 compacted };
cmp.g.f0.0(16)  g110<1>F        g86<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
cmp.l.f0.0(16)  g112<1>F        g90<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H $7.src };
and.nz.f0.0(16) null<1>UD       g112<8,8,1>UD   g110<8,8,1>UD   { align1 1H F@1 };
(+f0.0) sel(16) g113<1>UD       g99<1,1,0>UD    0x00000000UD    { align1 1H F@4 compacted };
cmp.nz.f0.0(16) g117<1>W        g68<16,16,1>W   0W              { align1 1H I@7 };
mov(16)         g115<1>D        g117<8,8,1>W                    { align1 1H I@1 };
mov(8)          g117<1>UW       0x76543210UV                    { align1 WE_all 1Q };
mov(16)         g72<2>W         -g115<8,8,1>D                   { align1 1H I@2 };
mov(8)          g117<1>UD       g117<8,8,1>UW                   { align1 WE_all 1Q I@2 };
mov(8)          g115<1>UW       0x76543210UV                    { align1 WE_all 1Q };
and(16)         g119<1>UW       g72<16,8,2>UW   0x0001UW        { align1 1H I@3 };
add(8)          g118<1>UD       g117<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@3 compacted };
mov(8)          g115<1>UD       g115<8,8,1>UW                   { align1 WE_all 1Q I@3 };
mov(16)         g120<1>W        g119<32,16,2>B                  { align1 1H I@3 };
shl(16)         g117<1>UD       g117<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@3 compacted };
add(8)          g116<1>UD       g115<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@3 compacted };
cmp.nz.f0.0(16) g123<1>W        g120<16,16,1>W  0W              { align1 1H I@3 };
add(16)         g117<1>UD       g117<1,1,0>UD   0x000000c0UD    { align1 WE_all 1H I@3 compacted };
shl(16)         g115<1>UD       g115<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@3 compacted };
mov.nz.f0.0(16) g121<1>D        g123<8,8,1>W                    { align1 1H I@3 };
add(16)         g115<1>UD       g115<1,1,0>UD   0x000000c0UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g110UD          g115UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
mov(8)          g110.1<2>F      g2.1<0,1,0>F                    { align1 1Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g117UD          g110UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $9 };
mov(8)          g123<1>UW       0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g125<1>UW       0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g123<1>UD       g123<8,8,1>UW                   { align1 WE_all 1Q I@2 };
mov(8)          g125<1>UD       g125<8,8,1>UW                   { align1 WE_all 1Q I@2 };
add(8)          g124<1>UD       g123<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@2 compacted };
add(8)          g126<1>UD       g125<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@2 compacted };
shl(16)         g123<1>UD       g123<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@2 compacted };
shl(16)         g125<1>UD       g125<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@2 compacted };
add(16)         g123<1>UD       g123<1,1,0>UD   0x000000c0UD    { align1 WE_all 1H I@2 compacted };
add(16)         g125<1>UD       g125<1,1,0>UD   0x000000c0UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g118UD          g123UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
mov(8)          g118<2>F        g2<0,1,0>F                      { align1 1Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g125UD          g118UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g18<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g28<1>UW        0x76543210UV                    { align1 WE_all 1Q $3.src };
mov(8)          g18<1>UD        g18<8,8,1>UW                    { align1 WE_all 1Q I@2 };
mov(8)          g28<1>UD        g28<8,8,1>UW                    { align1 WE_all 1Q I@2 };
add(8)          g19<1>UD        g18<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(8)          g29<1>UD        g28<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
shl(16)         g18<1>UD        g18<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
shl(16)         g28<1>UD        g28<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
add(16)         g18<1>UD        g18<1,1,0>UD    0x00000100UD    { align1 WE_all 1H I@2 compacted };
add(16)         g28<1>UD        g28<1,1,0>UD    0x00000100UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g16UD           g18UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $2.dst };
mov(8)          g16.1<2>F       g2.1<0,1,0>F                    { align1 2Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g28UD           g16UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $2 };
mov(8)          g31<1>UW        0x76543210UV                    { align1 WE_all 1Q $5.src };
mov(8)          g33<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g31<1>UD        g31<8,8,1>UW                    { align1 WE_all 1Q I@2 };
mov(8)          g33<1>UD        g33<8,8,1>UW                    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(8)          g32<1>UD        g31<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
add(8)          g34<1>UD        g33<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
shl(16)         g31<1>UD        g31<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
shl(16)         g33<1>UD        g33<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
add(16)         g31<1>UD        g31<1,1,0>UD    0x00000100UD    { align1 WE_all 1H I@2 compacted };
add(16)         g33<1>UD        g33<1,1,0>UD    0x00000100UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $2.src };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $2.src };
send(16)        g29UD           g31UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $2.dst };
mov(8)          g29<2>F         g2<0,1,0>F                      { align1 2Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g33UD           g29UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $2 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
shl(16)         g124<1>D        g63<8,8,1>D     0x00000005UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g1<1>D          g50<1,1,0>D     g124<1,1,0>D    { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
shr(16)         g125<1>UD       g63<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
cmp.l.f0.0(16)  g5<1>UD         g1<1,1,0>UD     g50<1,1,0>UD    { align1 1H I@2 compacted };
add(16)         g9<1>D          g1<1,1,0>D      16D             { align1 1H compacted };
mov(8)          g37<2>UD        g1<4,4,1>UD                     { align1 1Q };
mov(8)          g39<2>UD        g2<4,4,1>UD                     { align1 2Q };
mov(8)          g51<1>UW        0x76543210UV                    { align1 WE_all 1Q };
add3(16)        g7<1>D          g52<8,8,1>D     g125<8,8,1>D    -g5<1,1,1>D { align1 1H @5 $2.dst };
cmp.l.f0.0(16)  g11<1>UD        g9<1,1,0>UD     g1<1,1,0>UD     { align1 1H I@5 compacted };
mov(8)          g51<1>UD        g51<8,8,1>UW                    { align1 WE_all 1Q I@3 };
mov(8)          g39.1<2>UD      g8<4,4,1>UD                     { align1 2Q I@3 };
mov(8)          g37.1<2>UD      g7<4,4,1>UD                     { align1 1Q I@4 };
add(16)         g13<1>D         -g11<1,1,0>D    g7<1,1,0>D      { align1 1H I@4 compacted };
add(8)          g52<1>UD        g51<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g29UD           g37UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $12 };
shl(16)         g51<1>UD        g51<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g51<1>UD        g51<1,1,0>UD    0x00000180UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g51UD           g29UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $2 };
mov(8)          g53<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g53<1>UD        g53<8,8,1>UW                    { align1 WE_all 1Q I@1 };
add(8)          g54<1>UD        g53<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g53<1>UD        g53<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g53<1>UD        g53<1,1,0>UD    0x000001c0UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g53UD           g31UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $2 };
mov(8)          g55<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g55<1>UD        g55<8,8,1>UW                    { align1 WE_all 1Q I@1 };
add(8)          g56<1>UD        g55<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g55<1>UD        g55<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g55<1>UD        g55<1,1,0>UD    0x00000200UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g55UD           g33UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $2 };
mov(8)          g57<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g57<1>UD        g57<8,8,1>UW                    { align1 WE_all 1Q I@1 };
add(8)          g58<1>UD        g57<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g57<1>UD        g57<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g57<1>UD        g57<1,1,0>UD    0x00000240UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g57UD           g35UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $2 };
mov(8)          g38<2>UD        g9<4,4,1>UD                     { align1 1Q $12.src };
mov(8)          g40<2>UD        g10<4,4,1>UD                    { align1 2Q $12.src };
mov(8)          g38.1<2>UD      g13<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g40.1<2>UD      g14<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g12UD           g38UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
shl(16)         g36<1>D         g3<8,8,1>D      0x00000002UD    { align1 1H $2.src };
mov(16)         g40<1>D         1D                              { align1 1H $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g38<1>UD        g36<8,8,1>UD                    { align1 1H I@2 };

LABEL3:
cmp.ge.f0.0(16) null<1>UD       g38<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL2        UIP:  LABEL2              { align1 1H };
shl(16)         g42<1>D         g38<8,8,1>D     0x00000002UD    { align1 1H $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g28<1>UD        0x7f800000UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g30<1>UD        0x7f800000UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g32<1>UD        0x7f800000UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g34<1>UD        0x7f800000UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g42UD           g28UD           0x0400f506                0x00000200
                            slm MsgDesc: ( store_cmask, a32, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 8 flat ) base_offset 0  { align1 1H $2 };
add(16)         g38<1>D         g38<8,8,1>D     2048D           { align1 1H };

LABEL2:
while(16)       JIP:  LABEL3                                    { align1 1H };

LABEL5:
cmp.ge.f0.0(16) null<1>UD       g36<8,8,1>UD    0x00000030UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
shl(16)         g42<1>D         g36<8,8,1>D     0x00000002UD    { align1 1H $2.src };
mov(16)         g46<1>UD        0x00000000UD                    { align1 1H $2.src };
mov(16)         g48<1>UD        0x00000000UD                    { align1 1H $2.src };
mov(16)         g50<1>UD        0x00000000UD                    { align1 1H $2.dst };
mov(16)         g52<1>UD        0x00000000UD                    { align1 1H $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g44<1>D         g42<1,1,0>D     1152D           { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g44UD           g46UD           0x0400f506                0x00000200
                            slm MsgDesc: ( store_cmask, a32, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 8 flat ) base_offset 0  { align1 1H $2 };
add(16)         g36<1>D         g36<8,8,1>D     2048D           { align1 1H };

LABEL4:
while(16)       JIP:  LABEL5                                    { align1 1H };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(1)         g43UD           g0UD            nullUD          0x0210111f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, evict, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
mov(8)          g44<1>UD        0x00000000UD                    { align1 WE_all 1Q $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(2)          g44.10<1>UB     g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g44UD           nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $14 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
mov(8)          g100<1>UW       0x76543210UV                    { align1 WE_all 1Q };
mov(16)         g73<2>W         -g121<8,8,1>D                   { align1 1H };
mov(8)          g100<1>UD       g100<8,8,1>UW                   { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
and(16)         g55<1>UW        g73<16,8,2>UW   0x0001UW        { align1 1H I@2 };
add(8)          g101<1>UD       g100<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g56<1>W         g55<32,16,2>B                   { align1 1H I@2 };
shl(16)         g100<1>UD       g100<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.nz.f0.0(16) g57<1>W         g56<16,16,1>W   0W              { align1 1H I@2 };
add(16)         g100<1>UD       g100<1,1,0>UD   0x00000080UD    { align1 WE_all 1H I@2 compacted };
mov(16)         g98<1>D         g57<8,8,1>W                     { align1 1H A@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g100UD          g98UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $15 };
mov(8)          g105<1>UW       0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g47<1>UW        0x76543210UV                    { align1 WE_all 1Q $2.src };
mov(8)          g105<1>UD       g105<8,8,1>UW                   { align1 WE_all 1Q I@2 };
mov(8)          g47<1>UD        g47<8,8,1>UW                    { align1 WE_all 1Q I@2 };
add(8)          g106<1>UD       g105<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@2 compacted };
shl(16)         g105<1>UD       g105<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g105<1>UD       g105<1,1,0>UD   0x00000080UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g101UD          g105UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(16)         g74<2>W         -g101<8,8,1>D                   { align1 1H };
and(16)         g59<1>UW        g74<16,8,2>UW   0x0001UW        { align1 1H I@1 };
mov(16)         g62<1>W         g59<32,16,2>B                   { align1 1H I@1 };
cmp.nz.f0.0(16) g63<1>W         g62<16,16,1>W   0W              { align1 1H I@1 };
mov(8)          g62<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(16)         g5<1>D          g63<8,8,1>W                     { align1 1H I@2 };
mov(8)          g62<1>UD        g62<8,8,1>UW                    { align1 WE_all 1Q I@2 };
add(8)          g63<1>UD        g62<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g62<1>UD        g62<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g62<1>UD        g62<1,1,0>UD    0x00000180UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g58UD           g62UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
add(16)         g45<1>F         g58<1,1,0>F     g12<1,1,0>F     { align1 1H $2.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g48<1>F         g45<1,1,0>F     -g20<1,1,0>F    { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mul(16)         g51<1>F         g48<1,1,0>F     g103<1,1,0>F    { align1 1H $2.dst compacted };
add(8)          g48<1>UD        g47<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q F@1 compacted };
mov(16)         g45<1>UD        g51<8,8,1>F                     { align1 1H F@1 };
shl(16)         g47<1>UD        g47<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
add(16)         g47<1>UD        g47<1,1,0>UD    0x00000140UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g47UD           g45UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $14 };
mov(8)          g65<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g82<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g65<1>UD        g65<8,8,1>UW                    { align1 WE_all 1Q I@2 };
mov(8)          g82<1>UD        g82<8,8,1>UW                    { align1 WE_all 1Q I@2 };
add(8)          g66<1>UD        g65<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
add(8)          g83<1>UD        g82<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
shl(16)         g65<1>UD        g65<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
shl(16)         g82<1>UD        g82<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
add(16)         g65<1>UD        g65<1,1,0>UD    0x000001c0UD    { align1 WE_all 1H I@2 compacted };
add(16)         g82<1>UD        g82<1,1,0>UD    0x00000000UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g63UD           g65UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
add(16)         g46<1>F         g63<1,1,0>F     g14<1,1,0>F     { align1 1H $14.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
add(16)         g49<1>F         g46<1,1,0>F     -g22<1,1,0>F    { align1 1H $2.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mul(16)         g52<1>F         g49<1,1,0>F     g108<1,1,0>F    { align1 1H $2.dst compacted };
mov(16)         g80<1>UD        g52<8,8,1>F                     { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g82UD           g80UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $3 };
mov(8)          g68<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g91<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g68<1>UD        g68<8,8,1>UW                    { align1 WE_all 1Q I@2 };
mov(8)          g91<1>UD        g91<8,8,1>UW                    { align1 WE_all 1Q I@2 };
add(8)          g69<1>UD        g68<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
add(8)          g92<1>UD        g91<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
shl(16)         g68<1>UD        g68<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
shl(16)         g91<1>UD        g91<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
add(16)         g68<1>UD        g68<1,1,0>UD    0x00000200UD    { align1 WE_all 1H I@2 compacted };
add(16)         g91<1>UD        g91<1,1,0>UD    0x00000040UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g66UD           g68UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
add(16)         g47<1>F         g66<1,1,0>F     g16<1,1,0>F     { align1 1H $14.src compacted };
add(16)         g50<1>F         g47<1,1,0>F     -g24<1,1,0>F    { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mul(16)         g53<1>F         g50<1,1,0>F     g113<1,1,0>F    { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g89<1>UD        g53<8,8,1>F                     { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g91UD           g89UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $6 };
mov(1)          g75<2>UW        0x00000000UD                    { align1 WE_all 1N };
mov(1)          f0<1>UW         g75<0,1,0>UW                    { align1 WE_all 1N I@1 };
cmp.nz.f0.0(16) null<1>UD       g5<8,8,1>UD     0x00000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(16)         g1<1>UD         f0<0,1,0>UW                     { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
shl(16)         g64<1>D         g40<8,8,1>D     g60<8,8,1>UD    { align1 1H F@6 };
and(16)         g20<1>UD        g60<1,1,0>UD    0x00000003UD    { align1 1H F@7 compacted };
shr(16)         g22<1>UD        g60<1,1,0>UD    0x00000002UD    { align1 1H F@5 compacted };
and(16)         g24<1>UD        g64<1,1,0>UD    0x00000077UD    { align1 1H A@2 compacted };

LABEL8:
cmp.z.f0.0(16)  null<1>D        g1<8,8,1>D      0D              { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL6        UIP:  LABEL6              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
fbl(16)         g28<1>UD        g1<8,8,1>UD                     { align1 1H };
mov(8)          g9<1>UW         0x76543210UV                    { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g9<1>UD         g9<8,8,1>UW                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(8)          g10<1>UD        g9<1,1,0>UD     0x00000008UD    { align1 WE_all 1Q A@1 compacted };
shl(16)         g9<1>UD         g9<1,1,0>UD     0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g9<1>UD         g9<1,1,0>UD     0x00000140UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g7UD            g9UD            nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $6 };
mov(8)          g9<1>UW         0x76543210UV                    { align1 WE_all 1Q $6.src };
mov(8)          g9<1>UD         g9<8,8,1>UW                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(8)          g10<1>UD        g9<1,1,0>UD     0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g9<1>UD         g9<1,1,0>UD     0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g9<1>UD         g9<1,1,0>UD     0x00000140UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
mov(16)         a0<1>UW         0x00e0UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g28<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x00e0UW        { align1 1H A@1 };
mov(16)         g26<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g7UD            g9UD            nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
cmp.z.f0.0(16)  g28<1>D         g26<1,1,0>D     g7<1,1,0>D      { align1 1H I@1 compacted };
and(16)         g7<1>UD         g28<1,1,0>UD    g5<1,1,0>UD     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g9<2>W          -g7<8,8,1>D                     { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
and(16)         g106<1>UW       g9<16,8,2>UW    0x0001UW        { align1 1H I@1 };
mov(8)          g10<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(16)         g107<1>W        g106<32,16,2>B                  { align1 1H I@2 };
mov(8)          g10<1>UD        g10<8,8,1>UW                    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
cmp.nz.f0.0(16) g108<1>W        g107<16,16,1>W  0W              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(8)          g11<1>UD        g10<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
mov.nz.f0.0(16) g28<1>D         g108<8,8,1>W                    { align1 1H I@2 };
shl(16)         g10<1>UD        g10<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
(+f0.0) sel(16) g7<1>UD         g12<8,8,1>UD    0xff800000UD    { align1 1H };
add(16)         g10<1>UD        g10<1,1,0>UD    0x00000180UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g30<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@1 compacted };
mov(16)         g30<1>F         g7<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g7<1>UD         g14<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g116<2>UD       g30.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g32<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@2 compacted };
mov(16)         g32<1>F         g7<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g8UD            g10UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $9 };
mov(8)          g10<1>UW        0x76543210UV                    { align1 WE_all 1Q $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(8)          g118<2>UD       g32.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(8)          g10<1>UD        g10<8,8,1>UW                    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(8)          g11<1>UD        g10<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g10<1>UD        g10<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g10<1>UD        g10<1,1,0>UD    0x000001c0UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
(+f0.0) sel(16) g108<1>UD       g8<8,8,1>UD     0x7f800000UD    { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g8UD            g10UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $10 };
mov(8)          g10<1>UW        0x76543210UV                    { align1 WE_all 1Q $10.src };
mov(16)         g106<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g106<1>F        g108<1,1,0>F                    { align1 1H compacted };
mov(8)          g10<1>UD        g10<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(8)          g11<1>UD        g10<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g10<1>UD        g10<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g10<1>UD        g10<1,1,0>UD    0x00000200UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g110<1>UD       g8<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g7<1>UD         g16<8,8,1>UD    0xff800000UD    { align1 1H };
mov(16)         g108<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g108<1>F        g110<1,1,0>F                    { align1 1H compacted };
mov(16)         g110<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H I@1 compacted };
mov(16)         g110<1>F        g7<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g8UD            g10UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g114<2>UD       g108.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
(+f0.0) sel(16) g112<1>UD       g8<8,8,1>UD     0x7f800000UD    { align1 1H };
mov(16)         g7<1>F          0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g7<1>F          g112<1,1,0>F                    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g20<8,8,1>D     1D              { align1 1H };
mov(8)          g112<2>UD       g106.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(8)        g9<2>F          g106<8,4,2>F    g112<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g106.1<2>UD     g9<8,4,2>UD                     { align1 WE_all 1Q A@1 };
mov(8)          g112<2>UD       g7.1<8,4,2>UD                   { align1 WE_all 1Q F@1 };
mov(4)          g36<4>UD        g106.1<8,2,4>UD                 { align1 WE_all 1N I@2 };
mov(4)          g38<4>UD        g106.2<8,2,4>UD                 { align1 WE_all 1N };
sel.l(8)        g9<2>F          g108<8,4,2>F    g114<8,4,2>F    { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.l(4)        g34<4>F         g36<8,2,4>F     g38<8,2,4>F     { align1 WE_all 1N I@1 };
mov(8)          g108.1<2>UD     g9<8,4,2>UD                     { align1 WE_all 1Q A@2 };
mov(8)          g114<2>UD       g110.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
mov(4)          g106.2<4>UD     g34<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g48<4>UD        g108.1<8,2,4>UD                 { align1 WE_all 1N I@3 };
mov(4)          g50<4>UD        g108.2<8,2,4>UD                 { align1 WE_all 1N F@7 };
sel.ge(8)       g9<2>F          g30<8,4,2>F     g116<8,4,2>F    { align1 WE_all 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(4)          g42<4>UD        g106.1<8,2,4>UD                 { align1 WE_all 1N I@3 };
mov(4)          g44<4>UD        g106.3<8,2,4>UD                 { align1 WE_all 1N $14.src };
sel.l(4)        g46<4>F         g48<8,2,4>F     g50<8,2,4>F     { align1 WE_all 1N I@3 };
mov(8)          g30.1<2>UD      g9<8,4,2>UD                     { align1 WE_all 1Q F@2 };
sel.l(4)        g40<4>F         g42<8,2,4>F     g44<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g108.2<4>UD     g46<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g72<4>UD        g30.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g74<4>UD        g30.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g9<2>F          g32<8,4,2>F     g118<8,4,2>F    { align1 WE_all 1Q I@4 };
mov(4)          g106.3<4>UD     g40<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g54<4>UD        g108.1<8,2,4>UD                 { align1 WE_all 1N I@4 };
mov(4)          g56<4>UD        g108.3<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g70<4>F         g72<8,2,4>F     g74<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g32.1<2>UD      g9<8,4,2>UD                     { align1 WE_all 1Q F@2 };
sel.l(4)        g106.4<1>F      g106.3<0,1,0>F  g106.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g107.4<1>F      g107.3<0,1,0>F  g107.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g52<4>F         g54<8,2,4>F     g56<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g30.2<4>UD      g70<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g84<4>UD        g32.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g86<4>UD        g32.2<8,2,4>UD                  { align1 WE_all 1N };
sel.l(8)        g9<2>F          g7<8,4,2>F      g112<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.l(8)        g107<1>F        g106.7<0,1,0>F  g107<8,8,1>F    { align1 WE_all 1Q F@3 };
mov(4)          g108.3<4>UD     g52<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g78<4>UD        g30.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g80<4>UD        g30.3<8,2,4>UD                  { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.ge(4)       g82<4>F         g84<8,2,4>F     g86<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g7.1<2>UD       g9<8,4,2>UD                     { align1 WE_all 1Q F@3 };
sel.l(4)        g108.4<1>F      g108.3<0,1,0>F  g108.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g109.4<1>F      g109.3<0,1,0>F  g109.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.ge(4)       g76<4>F         g78<8,2,4>F     g80<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g32.2<4>UD      g82<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g60<4>UD        g7.1<8,2,4>UD                   { align1 WE_all 1N I@2 };
mov(4)          g62<4>UD        g7.2<8,2,4>UD                   { align1 WE_all 1N $1.src };
sel.ge(8)       g9<2>F          g110<8,4,2>F    g114<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.l(8)        g109<1>F        g108.7<0,1,0>F  g109<8,8,1>F    { align1 WE_all 1Q F@3 };
mov(4)          g30.3<4>UD      g76<8,2,4>UD                    { align1 WE_all 1N F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(4)          g90<4>UD        g32.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g92<4>UD        g32.3<8,2,4>UD                  { align1 WE_all 1N $6.src };
sel.l(4)        g58<4>F         g60<8,2,4>F     g62<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g110.1<2>UD     g9<8,4,2>UD                     { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g9<1>UD         g109.7<0,1,0>UD g107.7<0,1,0>UD { align1 1H };
sel.ge(4)       g30.4<1>F       g30.3<0,1,0>F   g30.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g31.4<1>F       g31.3<0,1,0>F   g31.4<4,4,1>F   { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.ge(4)       g88<4>F         g90<8,2,4>F     g92<8,2,4>F     { align1 WE_all 1N I@3 };
mov(4)          g7.2<4>UD       g58<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g96<4>UD        g110.1<8,2,4>UD                 { align1 WE_all 1N I@3 };
mov(4)          g98<4>UD        g110.2<8,2,4>UD                 { align1 WE_all 1N $15.src };
sel.ge(8)       g31<1>F         g30.7<0,1,0>F   g31<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g32.3<4>UD      g88<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g66<4>UD        g7.1<8,2,4>UD                   { align1 WE_all 1N I@4 };
mov(4)          g68<4>UD        g7.3<8,2,4>UD                   { align1 WE_all 1N $4.src };
sel.ge(4)       g94<4>F         g96<8,2,4>F     g98<8,2,4>F     { align1 WE_all 1N I@4 };
sel.ge(4)       g32.4<1>F       g32.3<0,1,0>F   g32.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g33.4<1>F       g33.3<0,1,0>F   g33.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g64<4>F         g66<8,2,4>F     g68<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g110.2<4>UD     g94<8,2,4>UD                    { align1 WE_all 1N F@4 };
sel.ge(8)       g33<1>F         g32.7<0,1,0>F   g33<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g7.3<4>UD       g64<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g102<4>UD       g110.1<8,2,4>UD                 { align1 WE_all 1N I@2 };
mov(4)          g104<4>UD       g110.3<8,2,4>UD                 { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g106<1>UD       g33.7<0,1,0>UD  g31.7<0,1,0>UD  { align1 1H };
sel.l(4)        g7.4<1>F        g7.3<0,1,0>F    g7.4<4,4,1>F    { align1 WE_all 1N I@4 };
sel.l(4)        g8.4<1>F        g8.3<0,1,0>F    g8.4<4,4,1>F    { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sel.ge(4)       g100<4>F        g102<8,2,4>F    g104<8,2,4>F    { align1 WE_all 1N I@2 };
cmp.z.f0.0(16)  null<1>D        g20<8,8,1>D     2D              { align1 1H };
sel.l(8)        g8<1>F          g7.7<0,1,0>F    g8<8,8,1>F      { align1 WE_all 1Q F@2 };
mov(4)          g110.3<4>UD     g100<8,2,4>UD                   { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g30<1>UD        g8.7<0,1,0>UD   g9<1,1,0>UD     { align1 1H compacted };
sel.ge(4)       g110.4<1>F      g110.3<0,1,0>F  g110.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.ge(4)       g111.4<1>F      g111.3<0,1,0>F  g111.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.ge(8)       g111<1>F        g110.7<0,1,0>F  g111<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g7<1>UD         g111.7<0,1,0>UD g106<1,1,0>UD   { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g22<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g9<1>F          g30<1,1,0>F     -g7<1,1,0>F     { align1 1H I@2 compacted };
cmp.nz.f0.0(16) null<1>D        g24<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
mul(16)         g7<1>D          g26<1,1,0>D     6W              { align1 1H F@1 compacted };
mul(16)         g26<1>D         g22<1,1,0>D     3W              { align1 1H I@1 compacted };
add3(16)        g30<1>D         g7<8,8,1>D      g20<8,8,1>D     g26<1,1,1>D { align1 1H A@1 };
shl(16)         g7<1>D          g30<8,8,1>D     0x00000002UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g7UD            g9UD            0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat ) base_offset 0  { align1 1H $5 };

LABEL7:
endif(16)       JIP:  LABEL6                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
not(16)         g7<1>D          g28<8,8,1>D                     { align1 1H F@1 };
mov(1)          g120<2>UW       0x00000000UD                    { align1 WE_all 1N };
mov(1)          f0<1>UW         g120<0,1,0>UW                   { align1 WE_all 1N I@1 };
cmp.nz.f0.0(16) null<1>UD       g7<8,8,1>UD     0x00000000UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g8<1>UD         f0<0,1,0>UW                     { align1 1H F@1 };
and(16)         g1<1>UD         g1<1,1,0>UD     g8<1,1,0>UD     { align1 1H I@1 compacted };

LABEL6:
while(16)       JIP:  LABEL8                                    { align1 1H };
mov(8)          g85<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(1)          g76<2>UW        0x00000000UD                    { align1 WE_all 1N };
mov(8)          g85<1>UD        g85<8,8,1>UW                    { align1 WE_all 1Q I@2 };
add(8)          g86<1>UD        g85<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g85<1>UD        g85<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g85<1>UD        g85<1,1,0>UD    0x00000000UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g83UD           g85UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
add(16)         g26<1>D         g83<1,1,0>D     16D             { align1 1H compacted };
mov(1)          f0<1>UW         g76<0,1,0>UW                    { align1 WE_all 1N I@6 };
cmp.nz.f0.0(16) null<1>UD       g5<8,8,1>UD     0x00000000UD    { align1 1H };
mov(16)         g1<1>UD         f0<0,1,0>UW                     { align1 1H };

LABEL11:
cmp.z.f0.0(16)  null<1>D        g1<8,8,1>D      0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL9        UIP:  LABEL9              { align1 1H };
fbl(16)         g7<1>UD         g1<8,8,1>UD                     { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         a0<1>UW         0x0340UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g7<16,8,2>W     0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0340UW        { align1 1H A@1 };
mov(16)         g28<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.z.f0.0(16)  g7<1>D          g28<1,1,0>D     g26<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
and(16)         g9<1>UD         g7<1,1,0>UD     g5<1,1,0>UD     { align1 1H A@1 compacted };
mov(16)         g7<2>W          -g9<8,8,1>D                     { align1 1H I@1 };
mov(8)          g10<1>UW        0x76543210UV                    { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
and(16)         g110<1>UW       g7<16,8,2>UW    0x0001UW        { align1 1H };
mov(8)          g10<1>UD        g10<8,8,1>UW                    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g111<1>W        g110<32,16,2>B                  { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(8)          g11<1>UD        g10<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
cmp.nz.f0.0(16) g112<1>W        g111<16,16,1>W  0W              { align1 1H };
shl(16)         g10<1>UD        g10<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
mov.nz.f0.0(16) g30<1>D         g112<8,8,1>W                    { align1 1H };
add(16)         g10<1>UD        g10<1,1,0>UD    0x00000180UD    { align1 WE_all 1H I@2 compacted };
(+f0.0) sel(16) g7<1>UD         g12<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g32<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@1 compacted };
mov(16)         g32<1>F         g7<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g7<1>UD         g14<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(8)          g118<2>UD       g32.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g34<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@2 compacted };
mov(16)         g34<1>F         g7<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g8UD            g10UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $12 };
mov(8)          g10<1>UW        0x76543210UV                    { align1 WE_all 1Q $12.src };
mov(8)          g120<2>UD       g34.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(8)          g10<1>UD        g10<8,8,1>UW                    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(8)          g11<1>UD        g10<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g10<1>UD        g10<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g10<1>UD        g10<1,1,0>UD    0x000001c0UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
(+f0.0) sel(16) g110<1>UD       g8<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g8UD            g10UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $13 };
mov(8)          g10<1>UW        0x76543210UV                    { align1 WE_all 1Q $13.src };
mov(16)         g108<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g108<1>F        g110<1,1,0>F                    { align1 1H compacted };
mov(8)          g10<1>UD        g10<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(8)          g11<1>UD        g10<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g10<1>UD        g10<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g10<1>UD        g10<1,1,0>UD    0x00000200UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g112<1>UD       g8<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g7<1>UD         g16<8,8,1>UD    0xff800000UD    { align1 1H };
mov(16)         g110<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g110<1>F        g112<1,1,0>F                    { align1 1H compacted };
mov(16)         g112<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H I@1 compacted };
mov(16)         g112<1>F        g7<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g8UD            g10UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g116<2>UD       g110.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
(+f0.0) sel(16) g114<1>UD       g8<8,8,1>UD     0x7f800000UD    { align1 1H };
mov(16)         g7<1>F          0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g7<1>F          g114<1,1,0>F                    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g20<8,8,1>D     1D              { align1 1H };
mov(8)          g114<2>UD       g108.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(8)        g9<2>F          g108<8,4,2>F    g114<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g108.1<2>UD     g9<8,4,2>UD                     { align1 WE_all 1Q A@1 };
mov(8)          g114<2>UD       g7.1<8,4,2>UD                   { align1 WE_all 1Q F@1 };
mov(4)          g38<4>UD        g108.1<8,2,4>UD                 { align1 WE_all 1N I@2 };
mov(4)          g40<4>UD        g108.2<8,2,4>UD                 { align1 WE_all 1N };
sel.l(8)        g9<2>F          g110<8,4,2>F    g116<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.l(4)        g36<4>F         g38<8,2,4>F     g40<8,2,4>F     { align1 WE_all 1N I@1 };
mov(8)          g110.1<2>UD     g9<8,4,2>UD                     { align1 WE_all 1Q A@2 };
mov(8)          g116<2>UD       g112.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
mov(4)          g108.2<4>UD     g36<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g50<4>UD        g110.1<8,2,4>UD                 { align1 WE_all 1N A@3 };
mov(4)          g52<4>UD        g110.2<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(8)       g9<2>F          g32<8,4,2>F     g118<8,4,2>F    { align1 WE_all 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(4)          g44<4>UD        g108.1<8,2,4>UD                 { align1 WE_all 1N I@3 };
mov(4)          g46<4>UD        g108.3<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g48<4>F         g50<8,2,4>F     g52<8,2,4>F     { align1 WE_all 1N I@3 };
mov(8)          g32.1<2>UD      g9<8,4,2>UD                     { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.l(4)        g42<4>F         g44<8,2,4>F     g46<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g110.2<4>UD     g48<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g74<4>UD        g32.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g76<4>UD        g32.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g9<2>F          g34<8,4,2>F     g120<8,4,2>F    { align1 WE_all 1Q I@4 };
mov(4)          g108.3<4>UD     g42<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g56<4>UD        g110.1<8,2,4>UD                 { align1 WE_all 1N I@4 };
mov(4)          g58<4>UD        g110.3<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g72<4>F         g74<8,2,4>F     g76<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g34.1<2>UD      g9<8,4,2>UD                     { align1 WE_all 1Q F@2 };
sel.l(4)        g108.4<1>F      g108.3<0,1,0>F  g108.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g109.4<1>F      g109.3<0,1,0>F  g109.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g54<4>F         g56<8,2,4>F     g58<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g32.2<4>UD      g72<8,2,4>UD                    { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(4)          g86<4>UD        g34.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g88<4>UD        g34.2<8,2,4>UD                  { align1 WE_all 1N $6.src };
sel.l(8)        g9<2>F          g7<8,4,2>F      g114<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.l(8)        g109<1>F        g108.7<0,1,0>F  g109<8,8,1>F    { align1 WE_all 1Q F@3 };
mov(4)          g110.3<4>UD     g54<8,2,4>UD                    { align1 WE_all 1N F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(4)          g80<4>UD        g32.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g82<4>UD        g32.3<8,2,4>UD                  { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.ge(4)       g84<4>F         g86<8,2,4>F     g88<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g7.1<2>UD       g9<8,4,2>UD                     { align1 WE_all 1Q F@3 };
sel.l(4)        g110.4<1>F      g110.3<0,1,0>F  g110.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g111.4<1>F      g111.3<0,1,0>F  g111.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.ge(4)       g78<4>F         g80<8,2,4>F     g82<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g34.2<4>UD      g84<8,2,4>UD                    { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(4)          g62<4>UD        g7.1<8,2,4>UD                   { align1 WE_all 1N I@2 };
mov(4)          g64<4>UD        g7.2<8,2,4>UD                   { align1 WE_all 1N };
sel.ge(8)       g9<2>F          g112<8,4,2>F    g116<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.l(8)        g111<1>F        g110.7<0,1,0>F  g111<8,8,1>F    { align1 WE_all 1Q F@3 };
mov(4)          g32.3<4>UD      g78<8,2,4>UD                    { align1 WE_all 1N F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(4)          g92<4>UD        g34.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g94<4>UD        g34.3<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g60<4>F         g62<8,2,4>F     g64<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g112.1<2>UD     g9<8,4,2>UD                     { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g9<1>UD         g111.7<0,1,0>UD g109.7<0,1,0>UD { align1 1H };
sel.ge(4)       g32.4<1>F       g32.3<0,1,0>F   g32.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g33.4<1>F       g33.3<0,1,0>F   g33.4<4,4,1>F   { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.ge(4)       g90<4>F         g92<8,2,4>F     g94<8,2,4>F     { align1 WE_all 1N I@3 };
mov(4)          g7.2<4>UD       g60<8,2,4>UD                    { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(4)          g98<4>UD        g112.1<8,2,4>UD                 { align1 WE_all 1N I@3 };
mov(4)          g100<4>UD       g112.2<8,2,4>UD                 { align1 WE_all 1N $15.src };
sel.ge(8)       g33<1>F         g32.7<0,1,0>F   g33<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g34.3<4>UD      g90<8,2,4>UD                    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g68<4>UD        g7.1<8,2,4>UD                   { align1 WE_all 1N I@4 };
mov(4)          g70<4>UD        g7.3<8,2,4>UD                   { align1 WE_all 1N };
sel.ge(4)       g96<4>F         g98<8,2,4>F     g100<8,2,4>F    { align1 WE_all 1N I@4 };
sel.ge(4)       g34.4<1>F       g34.3<0,1,0>F   g34.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g35.4<1>F       g35.3<0,1,0>F   g35.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g66<4>F         g68<8,2,4>F     g70<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g112.2<4>UD     g96<8,2,4>UD                    { align1 WE_all 1N F@4 };
sel.ge(8)       g35<1>F         g34.7<0,1,0>F   g35<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g7.3<4>UD       g66<8,2,4>UD                    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(4)          g104<4>UD       g112.1<8,2,4>UD                 { align1 WE_all 1N I@2 };
mov(4)          g106<4>UD       g112.3<8,2,4>UD                 { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g108<1>UD       g35.7<0,1,0>UD  g33.7<0,1,0>UD  { align1 1H };
sel.l(4)        g7.4<1>F        g7.3<0,1,0>F    g7.4<4,4,1>F    { align1 WE_all 1N I@4 };
sel.l(4)        g8.4<1>F        g8.3<0,1,0>F    g8.4<4,4,1>F    { align1 WE_all 1N I@4 };
sel.ge(4)       g102<4>F        g104<8,2,4>F    g106<8,2,4>F    { align1 WE_all 1N I@2 };
cmp.z.f0.0(16)  null<1>D        g20<8,8,1>D     2D              { align1 1H };
sel.l(8)        g8<1>F          g7.7<0,1,0>F    g8<8,8,1>F      { align1 WE_all 1Q F@2 };
mov(4)          g112.3<4>UD     g102<8,2,4>UD                   { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g32<1>UD        g8.7<0,1,0>UD   g9<1,1,0>UD     { align1 1H compacted };
sel.ge(4)       g112.4<1>F      g112.3<0,1,0>F  g112.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.ge(4)       g113.4<1>F      g113.3<0,1,0>F  g113.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.ge(8)       g113<1>F        g112.7<0,1,0>F  g113<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g7<1>UD         g113.7<0,1,0>UD g108<1,1,0>UD   { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g22<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g9<1>F          g32<1,1,0>F     -g7<1,1,0>F     { align1 1H I@2 compacted };
cmp.nz.f0.0(16) null<1>D        g24<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL10             { align1 1H };
mul(16)         g7<1>D          g28<1,1,0>D     6W              { align1 1H F@1 compacted };
mul(16)         g28<1>D         g22<1,1,0>D     3W              { align1 1H compacted };
add3(16)        g32<1>D         g7<8,8,1>D      g20<8,8,1>D     g28<1,1,1>D { align1 1H A@1 };
shl(16)         g7<1>D          g32<8,8,1>D     0x00000002UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g7UD            g9UD            0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat ) base_offset 0  { align1 1H $5 };

LABEL10:
endif(16)       JIP:  LABEL9                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
not(16)         g7<1>D          g30<8,8,1>D                     { align1 1H F@1 };
mov(1)          g122<2>UW       0x00000000UD                    { align1 WE_all 1N };
mov(1)          f0<1>UW         g122<0,1,0>UW                   { align1 WE_all 1N I@1 };
cmp.nz.f0.0(16) null<1>UD       g7<8,8,1>UD     0x00000000UD    { align1 1H I@3 };
mov(16)         g7<1>UD         f0<0,1,0>UW                     { align1 1H };
and(16)         g1<1>UD         g1<1,1,0>UD     g7<1,1,0>UD     { align1 1H I@1 compacted };

LABEL9:
while(16)       JIP:  LABEL11                                   { align1 1H };
mov(8)          g94<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(1)          g77<2>UW        0x00000000UD                    { align1 WE_all 1N };
mov(8)          g94<1>UD        g94<8,8,1>UW                    { align1 WE_all 1Q I@2 };
add(8)          g95<1>UD        g94<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g94<1>UD        g94<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g94<1>UD        g94<1,1,0>UD    0x00000040UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g92UD           g94UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
add(16)         g26<1>D         g92<1,1,0>D     32D             { align1 1H I@7 compacted };
mov(1)          f0<1>UW         g77<0,1,0>UW                    { align1 WE_all 1N I@6 };
cmp.nz.f0.0(16) null<1>UD       g5<8,8,1>UD     0x00000000UD    { align1 1H };
mov(16)         g1<1>UD         f0<0,1,0>UW                     { align1 1H I@7 };

LABEL14:
cmp.z.f0.0(16)  null<1>D        g1<8,8,1>D      0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL12       UIP:  LABEL12             { align1 1H };
fbl(16)         g7<1>UD         g1<8,8,1>UD                     { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         a0<1>UW         0x0340UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g7<16,8,2>W     0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0340UW        { align1 1H A@1 };
mov(16)         g28<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.z.f0.0(16)  g7<1>D          g28<1,1,0>D     g26<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
and(16)         g9<1>UD         g7<1,1,0>UD     g5<1,1,0>UD     { align1 1H A@1 compacted };
mov(16)         g7<2>W          -g9<8,8,1>D                     { align1 1H I@1 };
mov(8)          g10<1>UW        0x76543210UV                    { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(16)         g114<1>UW       g7<16,8,2>UW    0x0001UW        { align1 1H };
mov(8)          g10<1>UD        g10<8,8,1>UW                    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g115<1>W        g114<32,16,2>B                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(8)          g11<1>UD        g10<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.nz.f0.0(16) g116<1>W        g115<16,16,1>W  0W              { align1 1H };
shl(16)         g10<1>UD        g10<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
mov.nz.f0.0(16) g30<1>D         g116<8,8,1>W                    { align1 1H };
add(16)         g10<1>UD        g10<1,1,0>UD    0x00000180UD    { align1 WE_all 1H I@2 compacted };
(+f0.0) sel(16) g7<1>UD         g12<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g32<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@1 compacted };
mov(16)         g32<1>F         g7<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g7<1>UD         g14<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(8)          g118<2>UD       g32.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g34<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@2 compacted };
mov(16)         g34<1>F         g7<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g8UD            g10UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $15 };
mov(8)          g10<1>UW        0x76543210UV                    { align1 WE_all 1Q $15.src };
mov(8)          g120<2>UD       g34.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(8)          g10<1>UD        g10<8,8,1>UW                    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(8)          g11<1>UD        g10<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g10<1>UD        g10<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g10<1>UD        g10<1,1,0>UD    0x000001c0UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g110<1>UD       g8<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g8UD            g10UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $0 };
mov(8)          g10<1>UW        0x76543210UV                    { align1 WE_all 1Q $0.src };
mov(16)         g108<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g108<1>F        g110<1,1,0>F                    { align1 1H compacted };
mov(8)          g10<1>UD        g10<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(8)          g11<1>UD        g10<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g10<1>UD        g10<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g10<1>UD        g10<1,1,0>UD    0x00000200UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g112<1>UD       g8<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g7<1>UD         g16<8,8,1>UD    0xff800000UD    { align1 1H };
mov(16)         g110<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g110<1>F        g112<1,1,0>F                    { align1 1H compacted };
mov(16)         g112<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H I@1 compacted };
mov(16)         g112<1>F        g7<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g8UD            g10UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g116<2>UD       g110.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
(+f0.0) sel(16) g114<1>UD       g8<8,8,1>UD     0x7f800000UD    { align1 1H };
mov(16)         g7<1>F          0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g7<1>F          g114<1,1,0>F                    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g20<8,8,1>D     1D              { align1 1H };
mov(8)          g114<2>UD       g108.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(8)        g9<2>F          g108<8,4,2>F    g114<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g108.1<2>UD     g9<8,4,2>UD                     { align1 WE_all 1Q A@1 };
mov(8)          g114<2>UD       g7.1<8,4,2>UD                   { align1 WE_all 1Q F@1 };
mov(4)          g38<4>UD        g108.1<8,2,4>UD                 { align1 WE_all 1N I@2 };
mov(4)          g40<4>UD        g108.2<8,2,4>UD                 { align1 WE_all 1N };
sel.l(8)        g9<2>F          g110<8,4,2>F    g116<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.l(4)        g36<4>F         g38<8,2,4>F     g40<8,2,4>F     { align1 WE_all 1N I@1 };
mov(8)          g110.1<2>UD     g9<8,4,2>UD                     { align1 WE_all 1Q A@2 };
mov(8)          g116<2>UD       g112.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
mov(4)          g108.2<4>UD     g36<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g50<4>UD        g110.1<8,2,4>UD                 { align1 WE_all 1N A@3 };
mov(4)          g52<4>UD        g110.2<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(8)       g9<2>F          g32<8,4,2>F     g118<8,4,2>F    { align1 WE_all 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(4)          g44<4>UD        g108.1<8,2,4>UD                 { align1 WE_all 1N I@3 };
mov(4)          g46<4>UD        g108.3<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g48<4>F         g50<8,2,4>F     g52<8,2,4>F     { align1 WE_all 1N I@3 };
mov(8)          g32.1<2>UD      g9<8,4,2>UD                     { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.l(4)        g42<4>F         g44<8,2,4>F     g46<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g110.2<4>UD     g48<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g74<4>UD        g32.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g76<4>UD        g32.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g9<2>F          g34<8,4,2>F     g120<8,4,2>F    { align1 WE_all 1Q I@4 };
mov(4)          g108.3<4>UD     g42<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g56<4>UD        g110.1<8,2,4>UD                 { align1 WE_all 1N I@4 };
mov(4)          g58<4>UD        g110.3<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g72<4>F         g74<8,2,4>F     g76<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g34.1<2>UD      g9<8,4,2>UD                     { align1 WE_all 1Q F@2 };
sel.l(4)        g108.4<1>F      g108.3<0,1,0>F  g108.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g109.4<1>F      g109.3<0,1,0>F  g109.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g54<4>F         g56<8,2,4>F     g58<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g32.2<4>UD      g72<8,2,4>UD                    { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(4)          g86<4>UD        g34.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g88<4>UD        g34.2<8,2,4>UD                  { align1 WE_all 1N $6.src };
sel.l(8)        g9<2>F          g7<8,4,2>F      g114<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.l(8)        g109<1>F        g108.7<0,1,0>F  g109<8,8,1>F    { align1 WE_all 1Q F@3 };
mov(4)          g110.3<4>UD     g54<8,2,4>UD                    { align1 WE_all 1N F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(4)          g80<4>UD        g32.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g82<4>UD        g32.3<8,2,4>UD                  { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.ge(4)       g84<4>F         g86<8,2,4>F     g88<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g7.1<2>UD       g9<8,4,2>UD                     { align1 WE_all 1Q F@3 };
sel.l(4)        g110.4<1>F      g110.3<0,1,0>F  g110.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g111.4<1>F      g111.3<0,1,0>F  g111.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.ge(4)       g78<4>F         g80<8,2,4>F     g82<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g34.2<4>UD      g84<8,2,4>UD                    { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(4)          g62<4>UD        g7.1<8,2,4>UD                   { align1 WE_all 1N I@2 };
mov(4)          g64<4>UD        g7.2<8,2,4>UD                   { align1 WE_all 1N };
sel.ge(8)       g9<2>F          g112<8,4,2>F    g116<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.l(8)        g111<1>F        g110.7<0,1,0>F  g111<8,8,1>F    { align1 WE_all 1Q F@3 };
mov(4)          g32.3<4>UD      g78<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g92<4>UD        g34.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g94<4>UD        g34.3<8,2,4>UD                  { align1 WE_all 1N $14.src };
sel.l(4)        g60<4>F         g62<8,2,4>F     g64<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g112.1<2>UD     g9<8,4,2>UD                     { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g9<1>UD         g111.7<0,1,0>UD g109.7<0,1,0>UD { align1 1H };
sel.ge(4)       g32.4<1>F       g32.3<0,1,0>F   g32.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g33.4<1>F       g33.3<0,1,0>F   g33.4<4,4,1>F   { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.ge(4)       g90<4>F         g92<8,2,4>F     g94<8,2,4>F     { align1 WE_all 1N I@3 };
mov(4)          g7.2<4>UD       g60<8,2,4>UD                    { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(4)          g98<4>UD        g112.1<8,2,4>UD                 { align1 WE_all 1N I@3 };
mov(4)          g100<4>UD       g112.2<8,2,4>UD                 { align1 WE_all 1N $15.src };
sel.ge(8)       g33<1>F         g32.7<0,1,0>F   g33<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g34.3<4>UD      g90<8,2,4>UD                    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g68<4>UD        g7.1<8,2,4>UD                   { align1 WE_all 1N I@4 };
mov(4)          g70<4>UD        g7.3<8,2,4>UD                   { align1 WE_all 1N };
sel.ge(4)       g96<4>F         g98<8,2,4>F     g100<8,2,4>F    { align1 WE_all 1N I@4 };
sel.ge(4)       g34.4<1>F       g34.3<0,1,0>F   g34.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g35.4<1>F       g35.3<0,1,0>F   g35.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g66<4>F         g68<8,2,4>F     g70<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g112.2<4>UD     g96<8,2,4>UD                    { align1 WE_all 1N F@4 };
sel.ge(8)       g35<1>F         g34.7<0,1,0>F   g35<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g7.3<4>UD       g66<8,2,4>UD                    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(4)          g104<4>UD       g112.1<8,2,4>UD                 { align1 WE_all 1N I@2 };
mov(4)          g106<4>UD       g112.3<8,2,4>UD                 { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g108<1>UD       g35.7<0,1,0>UD  g33.7<0,1,0>UD  { align1 1H };
sel.l(4)        g7.4<1>F        g7.3<0,1,0>F    g7.4<4,4,1>F    { align1 WE_all 1N I@4 };
sel.l(4)        g8.4<1>F        g8.3<0,1,0>F    g8.4<4,4,1>F    { align1 WE_all 1N I@4 };
sel.ge(4)       g102<4>F        g104<8,2,4>F    g106<8,2,4>F    { align1 WE_all 1N I@2 };
cmp.z.f0.0(16)  null<1>D        g20<8,8,1>D     2D              { align1 1H };
sel.l(8)        g8<1>F          g7.7<0,1,0>F    g8<8,8,1>F      { align1 WE_all 1Q F@2 };
mov(4)          g112.3<4>UD     g102<8,2,4>UD                   { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g32<1>UD        g8.7<0,1,0>UD   g9<1,1,0>UD     { align1 1H compacted };
sel.ge(4)       g112.4<1>F      g112.3<0,1,0>F  g112.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.ge(4)       g113.4<1>F      g113.3<0,1,0>F  g113.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.ge(8)       g113<1>F        g112.7<0,1,0>F  g113<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g7<1>UD         g113.7<0,1,0>UD g108<1,1,0>UD   { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g22<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g9<1>F          g32<1,1,0>F     -g7<1,1,0>F     { align1 1H I@2 compacted };
cmp.nz.f0.0(16) null<1>D        g24<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL13             { align1 1H };
mul(16)         g7<1>D          g28<1,1,0>D     6W              { align1 1H F@1 compacted };
mul(16)         g28<1>D         g22<1,1,0>D     3W              { align1 1H compacted };
add3(16)        g32<1>D         g7<8,8,1>D      g20<8,8,1>D     g28<1,1,1>D { align1 1H A@1 };
shl(16)         g7<1>D          g32<8,8,1>D     0x00000002UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g7UD            g9UD            0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat ) base_offset 0  { align1 1H $5 };

LABEL13:
endif(16)       JIP:  LABEL12                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
not(16)         g7<1>D          g30<8,8,1>D                     { align1 1H F@1 };
mov(1)          g122<2>UW       0x00000000UD                    { align1 WE_all 1N };
mov(1)          f0<1>UW         g122<0,1,0>UW                   { align1 WE_all 1N I@1 };
cmp.nz.f0.0(16) null<1>UD       g7<8,8,1>UD     0x00000000UD    { align1 1H I@3 };
mov(16)         g7<1>UD         f0<0,1,0>UW                     { align1 1H };
and(16)         g1<1>UD         g1<1,1,0>UD     g7<1,1,0>UD     { align1 1H I@1 compacted };

LABEL12:
while(16)       JIP:  LABEL14                                   { align1 1H };
mov(8)          g108<1>UW       0x76543210UV                    { align1 WE_all 1Q F@4 };
mov(8)          g108<1>UD       g108<8,8,1>UW                   { align1 WE_all 1Q I@1 };
add(8)          g109<1>UD       g108<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q A@1 compacted };
shl(16)         g108<1>UD       g108<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g108<1>UD       g108<1,1,0>UD   0x00000080UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g106UD          g108UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mov.nz.f0.0(16) null<1>D        g106<8,8,1>D                    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL15         UIP:  LABEL15             { align1 1H };
mov(8)          g50<1>UW        0x76543210UV                    { align1 WE_all 1Q F@1 };
mov(8)          g50<1>UD        g50<8,8,1>UW                    { align1 WE_all 1Q I@1 };
add(8)          g51<1>UD        g50<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@1 compacted };
shl(16)         g50<1>UD        g50<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g50<1>UD        g50<1,1,0>UD    0x00000140UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g48UD           g50UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
shl(16)         g117<1>D        g48<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g47<1>D         g117<1,1,0>D    1152D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g47UD           nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
mov(8)          g88<1>UW        0x76543210UV                    { align1 WE_all 1Q $6.src };
mov(8)          g88<1>UD        g88<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(8)          g89<1>UD        g88<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g88<1>UD        g88<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g88<1>UD        g88<1,1,0>UD    0x00000000UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g86UD           g88UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
shl(16)         g118<1>D        g86<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g48<1>D         g118<1,1,0>D    1216D           { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g48UD           nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1H $3 };
mov(8)          g97<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g97<1>UD        g97<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(8)          g98<1>UD        g97<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g97<1>UD        g97<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g97<1>UD        g97<1,1,0>UD    0x00000040UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g95UD           g97UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
shl(16)         g119<1>D        g95<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g49<1>D         g119<1,1,0>D    1280D           { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g49UD           nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };

LABEL15:
endif(16)       JIP:  LABEL16                                   { align1 1H };

LABEL16:
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g120UD          g0UD            nullUD          0x0210111f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, evict, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
mov(8)          g121<1>UD       0x00000000UD                    { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(2)          g121.10<1>UB    g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g121UD          nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $5 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
mov(8)          g5<1>UW         0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g36<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(16)         g39<1>UD        g3<8,8,1>UD                     { align1 1H };
mov(8)          g8<1>UW         0x76543210UV                    { align1 WE_all 1Q F@1 };
mov(8)          g41<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g5<1>UD         g5<8,8,1>UW                     { align1 WE_all 1Q I@5 };
mov(8)          g36<1>UD        g36<8,8,1>UW                    { align1 WE_all 1Q I@5 };
mov(8)          g8<1>UD         g8<8,8,1>UW                     { align1 WE_all 1Q I@4 };
mov(8)          g41<1>UD        g41<8,8,1>UW                    { align1 WE_all 1Q I@4 };
add(8)          g6<1>UD         g5<1,1,0>UD     0x00000008UD    { align1 WE_all 1Q I@4 compacted };
add(8)          g37<1>UD        g36<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(8)          g9<1>UD         g8<1,1,0>UD     0x00000008UD    { align1 WE_all 1Q A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(8)          g42<1>UD        g41<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@4 compacted };
shl(16)         g5<1>UD         g5<1,1,0>UD     0x00000002UD    { align1 WE_all 1H I@4 compacted };
shl(16)         g36<1>UD        g36<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@4 compacted };
shl(16)         g8<1>UD         g8<1,1,0>UD     0x00000002UD    { align1 WE_all 1H I@4 compacted };
shl(16)         g41<1>UD        g41<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@4 compacted };
add(16)         g5<1>UD         g5<1,1,0>UD     0x000000c0UD    { align1 WE_all 1H I@4 compacted };
add(16)         g36<1>UD        g36<1,1,0>UD    0x00000100UD    { align1 WE_all 1H I@4 compacted };
add(16)         g8<1>UD         g8<1,1,0>UD     0x000000c0UD    { align1 WE_all 1H I@4 compacted };
add(16)         g41<1>UD        g41<1,1,0>UD    0x00000100UD    { align1 WE_all 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g126UD          g5UD            nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g34UD           g36UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g6UD            g8UD            nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g37UD           g41UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(8)          g124<1>D        g126<8,4,2>D    11352D          { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $11.src };
add(8)          g125<1>D        g34<8,4,2>D     11352D          { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mov(8)          g122<1>UD       g6.1<8,4,2>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $10.src };
mov(8)          g123<1>UD       g37.1<8,4,2>UD                  { align1 2Q };
cmp.l.f0.0(16)  g126<1>UD       g124<8,8,1>UD   0x00002c58UD    { align1 1H I@3 };

LABEL19:
cmp.ge.f0.0(16) null<1>UD       g39<8,8,1>UD    0x00000120UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL17       UIP:  LABEL17             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
shl(16)         g50<1>D         g39<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g55UD           g50UD           nullUD          0x04201502                0x00000000
                            slm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
cmp.nz.f0.0(16) null<1>F        g55<1,1,0>F     0x7f800000F  /* infF */ { align1 1H $1.dst compacted };
(+f0.0) if(16)  JIP:  LABEL18         UIP:  LABEL18             { align1 1H };
add(16)         g1<1>D          g124<1,1,0>D    g50<1,1,0>D     { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g5<1>UD         g1<1,1,0>UD     g124<1,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
mov(8)          g51<2>UD        g1<4,4,1>UD                     { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g53<2>UD        g2<4,4,1>UD                     { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
add3(16)        g7<1>D          -g126<8,8,1>D   g122<8,8,1>D    -g5<1,1,1>D { align1 1H };
mov(8)          g53.1<2>UD      g8<4,4,1>UD                     { align1 2Q I@1 };
mov(8)          g51.1<2>UD      g7<4,4,1>UD                     { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g8UD            g51UD           g55UD           0x08240595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $1 };

LABEL18:
endif(16)       JIP:  LABEL17                                   { align1 1H };
add(16)         g39<1>D         g39<1,1,0>D     512D            { align1 1H compacted };

LABEL17:
while(16)       JIP:  LABEL19                                   { align1 1H };

LABEL22:
cmp.ge.f0.0(16) null<1>UD       g3<8,8,1>UD     0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL20       UIP:  LABEL20             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
shl(16)         g9<1>D          g3<8,8,1>D      0x00000002UD    { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g56<1>D         g9<1,1,0>D      1152D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g61UD           g56UD           nullUD          0x04201502                0x00000000
                            slm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
cmp.nz.f0.0(16) null<1>D        g61<8,8,1>D     0D              { align1 1H $1.dst };
(+f0.0) if(16)  JIP:  LABEL21         UIP:  LABEL21             { align1 1H };
mov(8)          g15<1>UW        0x76543210UV                    { align1 WE_all 1Q F@6 };
mov(8)          g44<1>UW        0x76543210UV                    { align1 WE_all 1Q $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
mov(8)          g15<1>UD        g15<8,8,1>UW                    { align1 WE_all 1Q I@2 };
mov(8)          g44<1>UD        g44<8,8,1>UW                    { align1 WE_all 1Q I@2 };
add(8)          g16<1>UD        g15<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(8)          g45<1>UD        g44<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
shl(16)         g15<1>UD        g15<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
shl(16)         g44<1>UD        g44<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
add(16)         g15<1>UD        g15<1,1,0>UD    0x000000c0UD    { align1 WE_all 1H I@2 compacted };
add(16)         g44<1>UD        g44<1,1,0>UD    0x00000100UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g13UD           g15UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g42UD           g44UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(8)          g11<1>D         g13<8,4,2>D     12504D          { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $14.dst };
add(8)          g12<1>D         g42<8,4,2>D     12504D          { align1 2Q F@7 };
cmp.l.f0.0(16)  g13<1>UD        g11<8,8,1>UD    0x000030d8UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g15<1>D         g11<1,1,0>D     g9<1,1,0>D      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
cmp.l.f0.0(16)  g17<1>UD        g15<1,1,0>UD    g11<1,1,0>UD    { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
mov(8)          g57<2>UD        g15<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N F@7 };
mov(8)          g59<2>UD        g16<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
add3(16)        g19<1>D         -g13<8,8,1>D    g122<8,8,1>D    -g17<1,1,1>D { align1 1H @3 $1.dst };
mov(8)          g59.1<2>UD      g20<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g57.1<2>UD      g19<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g20UD           g57UD           g61UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $1 };

LABEL21:
endif(16)       JIP:  LABEL20                                   { align1 1H };
add(16)         g3<1>D          g3<1,1,0>D      512D            { align1 1H compacted };

LABEL20:
while(16)       JIP:  LABEL22                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q I@1 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_BFS_BFS_pass1_initial_code[] = {
    0x80000065, 0x4e058220, 0x02000004, 0xffffffc0,
    0xe0380065, 0x0ff10043, 0x00040061, 0x15050220,
    0x00000024, 0x00000000, 0x80030061, 0x1e054410,
    0x00000000, 0x76543210, 0xe24f1c40, 0x00014e03,
    0x00041c69, 0x3a058660, 0x02463805, 0x00000004,
    0x00041c69, 0x33058660, 0x02461505, 0x00000009,
    0x641e1c40, 0x00801e95, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa004f0c, 0x00340000, 0xa0351a40, 0x20003303,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x3c050160, 0x00461e05, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x3e260aa0, 0x00000264, 0x00000000,
    0x00130061, 0x28260aa0, 0x00000264, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x213e1261, 0x00110244, 0x2a281261, 0x00110244,
    0xa1411240, 0x034e3e03, 0xa1440040, 0x008e3e03,
    0xaa2a1140, 0x034e2803, 0xaa2f0040, 0x008e2803,
    0x00031c70, 0x42050220, 0x52464105, 0x00443e06,
    0x00030061, 0x16060220, 0x00344105, 0x00000000,
    0x00031d70, 0x45050220, 0x52464405, 0x00443e06,
    0x00131d70, 0x2b050220, 0x52462a05, 0x00442806,
    0x00130061, 0x18060220, 0x00342a05, 0x00000000,
    0x00131e70, 0x30050220, 0x52462f05, 0x00442806,
    0x00031e40, 0x43052660, 0x06464205, 0x00443e26,
    0x00031d40, 0x46052660, 0x06464505, 0x00443e26,
    0xa03e0040, 0x3a003c02, 0x00131e40, 0x2c052660,
    0x06462b05, 0x00442826, 0x00131d40, 0x31052660,
    0x06463005, 0x00442826, 0x00031d61, 0x16260220,
    0x00344305, 0x00000000, 0xe0031c65, 0x1ff03e03,
    0x00131c61, 0x18260220, 0x00342c05, 0x00000000,
    0xa03f1a40, 0x03003302, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x2d140000,
    0xfb041624, 0x00040000, 0x00033161, 0x17060220,
    0x00344405, 0x00000000, 0x00133161, 0x19060220,
    0x00342f05, 0x00000000, 0x00031a61, 0x17260220,
    0x00344605, 0x00000000, 0x00131a61, 0x19260220,
    0x00343105, 0x00000000, 0x27372162, 0x2d003503,
    0x27411970, 0x37003f03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x32440000,
    0xfb041724, 0x003c0000, 0xa0452240, 0x02003603,
    0xa04b0040, 0x03003603, 0x27471a70, 0x36004503,
    0x00030061, 0x1c060220, 0x00344505, 0x00000000,
    0x00130061, 0x1e060220, 0x00344605, 0x00000000,
    0xe74d1c70, 0x03004b03, 0xa049c240, 0x38024702,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa04f1a40, 0x38024d02, 0x00131a61, 0x1e260220,
    0x00344a05, 0x00000000, 0x00031b61, 0x1c260220,
    0x00344905, 0x00000000, 0x00040061, 0x47062650,
    0x00464105, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x14440000,
    0xfb041c24, 0x003c0000, 0x00041965, 0x43058110,
    0x01564706, 0x00010001, 0x00033361, 0x1d060220,
    0x00344b05, 0x00000000, 0x00133361, 0x1f060220,
    0x00344c05, 0x00000000, 0x00041b61, 0x44050450,
    0x00684306, 0x00000000, 0x00031b61, 0x1d260220,
    0x00344f05, 0x00000000, 0x00131b61, 0x1f260220,
    0x00345005, 0x00000000, 0x20512340, 0x14201a00,
    0x00041162, 0x57058aa0, 0x4a465105, 0x0704ec3d,
    0x00041170, 0x64058aa0, 0x5a465705, 0x77f684df,
    0x00044438, 0x5b050aa0, 0x1a465705, 0x00460001,
    0x00040070, 0x66058aa0, 0x3a465105, 0x0704ec3d,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x50240000, 0xfb041d24, 0x000c0000,
    0x00042441, 0x5d058aa0, 0x0a465b05, 0x417d70a4,
    0x00041265, 0x00010220, 0x22466405, 0x00466605,
    0xef671162, 0x00005d03, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0x20542540, 0x16205000,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x20562540, 0x18205200, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00041262, 0x58058aa0,
    0x4a465405, 0x0704ec3d, 0x00040070, 0x69058aa0,
    0x3a465405, 0x0704ec3d, 0x00041362, 0x5a058aa0,
    0x4a465605, 0x0704ec3d, 0x00041370, 0x6b058aa0,
    0x5a465805, 0x77f684df, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044638, 0x5e050aa0,
    0x1a465805, 0x00460001, 0x0004a738, 0x61050aa0,
    0x1a465a05, 0x00460001, 0x00041165, 0x00010220,
    0x22466b05, 0x00466905, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x00041b41, 0x63058aa0,
    0x0a466105, 0x417d70a4, 0x00042641, 0x60058aa0,
    0x0a465e05, 0x417d70a4, 0xef6c1162, 0x00006003,
    0x00040070, 0x6e058aa0, 0x3a465605, 0x0704ec3d,
    0x00043770, 0x70058aa0, 0x5a465a05, 0x77f684df,
    0x00041165, 0x00010220, 0x22467005, 0x00466e05,
    0xef711462, 0x00006303, 0x00041f70, 0x75058550,
    0x25584405, 0x00000000, 0x00041961, 0x73050560,
    0x00467505, 0x00000000, 0x80030061, 0x75054010,
    0x00000000, 0x76543210, 0x00041a61, 0x48062650,
    0x00467305, 0x00000000, 0x80031a61, 0x75050120,
    0x00467505, 0x00000000, 0x80030061, 0x73054010,
    0x00000000, 0x76543210, 0x00041b65, 0x77058110,
    0x01564806, 0x00010001, 0xe4761b40, 0x00807503,
    0x80031b61, 0x73050120, 0x00467305, 0x00000000,
    0x00041b61, 0x78050450, 0x00687706, 0x00000000,
    0xe3751b69, 0x00207503, 0xe4741b40, 0x00807303,
    0x00041b70, 0x7b058550, 0x25587805, 0x00000000,
    0xe3751b40, 0x0c007503, 0xe3731b69, 0x00207303,
    0x00041b61, 0x79050560, 0x20467b05, 0x00000000,
    0xe3731a40, 0x0c007303, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049831, 0x6e160100,
    0xfa007314, 0x04000000, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x216e0061, 0x001102cc,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x80049931, 0x00020100, 0xfa087514, 0x04006e04,
    0x80030061, 0x7b054010, 0x00000000, 0x76543210,
    0x80030061, 0x7d054010, 0x00000000, 0x76543210,
    0x80031a61, 0x7b050120, 0x00467b05, 0x00000000,
    0x80031a61, 0x7d050120, 0x00467d05, 0x00000000,
    0xe47c1a40, 0x00807b03, 0xe47e1a40, 0x00807d03,
    0xe37b1a69, 0x00207b03, 0xe37d1a69, 0x00207d03,
    0xe37b1a40, 0x0c007b03, 0xe37d1a40, 0x0c007d03,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049a31, 0x76160100, 0xfa007b14, 0x04000000,
    0x80002a01, 0x00000000, 0x00000000, 0x00000000,
    0x21760061, 0x00110204, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x80049b31, 0x00020100,
    0xfa087d14, 0x04007604, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80030061, 0x12054010,
    0x00000000, 0x76543210, 0x80033361, 0x1c054010,
    0x00000000, 0x76543210, 0x80031a61, 0x12050120,
    0x00461205, 0x00000000, 0x80031a61, 0x1c050120,
    0x00461c05, 0x00000000, 0xe4131a40, 0x00801203,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xe41d1a40, 0x00801c03, 0xe3121a69, 0x00201203,
    0xe31c1a69, 0x00201c03, 0xe3121a40, 0x10001203,
    0xe31c1a40, 0x10001c03, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049231, 0x10160100,
    0xfa001214, 0x04000000, 0x80102201, 0x00000000,
    0x00000000, 0x00000000, 0x2a100061, 0x001102cc,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x80049231, 0x00020100, 0xfa081c14, 0x04001004,
    0x80033561, 0x1f054010, 0x00000000, 0x76543210,
    0x80030061, 0x21054010, 0x00000000, 0x76543210,
    0x80031a61, 0x1f050120, 0x00461f05, 0x00000000,
    0x80031a61, 0x21050120, 0x00462105, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xe4201a40, 0x00801f03, 0xe4221a40, 0x00802103,
    0xe31f1a69, 0x00201f03, 0xe3211a69, 0x00202103,
    0xe31f1a40, 0x10001f03, 0xe3211a40, 0x10002103,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80003265, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80003266, 0x10218220, 0x02001020, 0x0000000f,
    0x80049231, 0x1d160100, 0xfa001f14, 0x04000000,
    0x80102201, 0x00000000, 0x00000000, 0x00000000,
    0x2a1d0061, 0x00110204, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x80049231, 0x00020100,
    0xfa082114, 0x04001d04, 0x01040022, 0x0001c060,
    0x000003b0, 0x000003b0, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x7c058660,
    0x02463f05, 0x00000005, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa0010940, 0x7c003202,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0xe07d0068, 0x01b03f03, 0x27051a70, 0x32000103,
    0xa0090040, 0x01000103, 0x00030061, 0x25060220,
    0x00340105, 0x00000000, 0x00130061, 0x27060220,
    0x00340205, 0x00000000, 0x80030061, 0x33054010,
    0x00000000, 0x76543210, 0x0004d252, 0x07040e68,
    0x0e2e3405, 0x05057d05, 0x270b1d70, 0x01000903,
    0x80031b61, 0x33050120, 0x00463305, 0x00000000,
    0x00131b61, 0x27260220, 0x00340805, 0x00000000,
    0x00031c61, 0x25260220, 0x00340705, 0x00000000,
    0xa00d1c40, 0x07020b02, 0xe4341c40, 0x00803303,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x1d440000, 0xfb042524, 0x003c0000,
    0xe3331969, 0x00203303, 0xe3331940, 0x18003303,
    0x80002c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049231, 0x00020100, 0xfa083314, 0x04001d04,
    0x80030061, 0x35054010, 0x00000000, 0x76543210,
    0x80031961, 0x35050120, 0x00463505, 0x00000000,
    0xe4361940, 0x00803503, 0xe3351969, 0x00203503,
    0xe3351940, 0x1c003503, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049231, 0x00020100,
    0xfa083514, 0x04001f04, 0x80030061, 0x37054010,
    0x00000000, 0x76543210, 0x80031961, 0x37050120,
    0x00463705, 0x00000000, 0xe4381940, 0x00803703,
    0xe3371969, 0x00203703, 0xe3371940, 0x20003703,
    0x80002c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049231, 0x00020100, 0xfa083714, 0x04002104,
    0x80030061, 0x39054010, 0x00000000, 0x76543210,
    0x80031961, 0x39050120, 0x00463905, 0x00000000,
    0xe43a1940, 0x00803903, 0xe3391969, 0x00203903,
    0xe3391940, 0x24003903, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049231, 0x00020100,
    0xfa083914, 0x04002304, 0x00033c61, 0x26060220,
    0x00340905, 0x00000000, 0x00133c61, 0x28060220,
    0x00340a05, 0x00000000, 0x00031a61, 0x26260220,
    0x00340d05, 0x00000000, 0x00131a61, 0x28260220,
    0x00340e05, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x0c440000,
    0xfb042624, 0x003c0000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x00043269, 0x24058660,
    0x02460305, 0x00000002, 0x00043261, 0x28054660,
    0x00000000, 0x00000001, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041a61, 0x26050220,
    0x00462405, 0x00000000, 0x00041970, 0x00018220,
    0x42462605, 0x00000120, 0x01040028, 0x0001c660,
    0x000000d0, 0x000000d0, 0x00043269, 0x2a058660,
    0x02462605, 0x00000002, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x1c054220,
    0x00000000, 0x7f800000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x1e054220,
    0x00000000, 0x7f800000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x20054220,
    0x00000000, 0x7f800000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x22054220,
    0x00000000, 0x7f800000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xea0c2a14, 0x003c1c44, 0x00040040, 0x26058660,
    0x06462605, 0x00000800, 0x00040027, 0x00014060,
    0x00000000, 0xffffff20, 0x00041970, 0x00018220,
    0x42462405, 0x00000030, 0x01040028, 0x0001c660,
    0x000000a8, 0x000000a8, 0x00043269, 0x2a058660,
    0x02462405, 0x00000002, 0x00043261, 0x2e054220,
    0x00000000, 0x00000000, 0x00043261, 0x30054220,
    0x00000000, 0x00000000, 0x00042261, 0x32054220,
    0x00000000, 0x00000000, 0x00042261, 0x34054220,
    0x00000000, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa02c1d40, 0x48002a03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x00000000, 0xea0c2c14, 0x003c2e44,
    0x00040040, 0x24058660, 0x06462405, 0x00000800,
    0x00040027, 0x00014060, 0x00000000, 0xffffff48,
    0x80000001, 0x00000000, 0x30000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x80004d31, 0x2b0c0000, 0xe23e000c, 0x00040000,
    0x80002d01, 0x00000000, 0x00000000, 0x00000000,
    0x80033261, 0x2c054220, 0x00000000, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80011961, 0x2c550000, 0x0000005c, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80044e31, 0x00000000, 0x30082c0c, 0x00000000,
    0x80040001, 0x00000000, 0xe0000000, 0x00000000,
    0x80030061, 0x64054010, 0x00000000, 0x76543210,
    0x00040061, 0x49062650, 0x00467905, 0x00000000,
    0x80031a61, 0x64050120, 0x00466405, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00041a65, 0x37058110, 0x01564906, 0x00010001,
    0xe4651a40, 0x00806403, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041a61, 0x38050450,
    0x00683706, 0x00000000, 0xe3641a69, 0x00206403,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00041a70, 0x39058550, 0x25583805, 0x00000000,
    0xe3641a40, 0x08006403, 0x00040a61, 0x62050560,
    0x00463905, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049f31, 0x00020100,
    0xfa086414, 0x04006204, 0x80030061, 0x69054010,
    0x00000000, 0x76543210, 0x80033261, 0x2f054010,
    0x00000000, 0x76543210, 0x80031a61, 0x69050120,
    0x00466905, 0x00000000, 0x80031a61, 0x2f050120,
    0x00462f05, 0x00000000, 0xe46a1a40, 0x00806903,
    0xe3691969, 0x00206903, 0xe3691940, 0x08006903,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049031, 0x65160100, 0xfa006914, 0x04000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x4a062650, 0x00466505, 0x00000000,
    0x00041965, 0x3b058110, 0x01564a06, 0x00010001,
    0x00041961, 0x3e050450, 0x00683b06, 0x00000000,
    0x00041970, 0x3f058550, 0x25583e05, 0x00000000,
    0x80030061, 0x3e054010, 0x00000000, 0x76543210,
    0x00041a61, 0x05050560, 0x00463f05, 0x00000000,
    0x80031a61, 0x3e050120, 0x00463e05, 0x00000000,
    0xe43f1940, 0x00803e03, 0xe33e1969, 0x00203e03,
    0xe33e1940, 0x18003e03, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049131, 0x3a160100,
    0xfa003e14, 0x04000000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x202d2240, 0x0c003a00,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x20301140, 0x14202d00, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x20332241, 0x67003000,
    0xe4301140, 0x00802f03, 0x00041161, 0x2d050a20,
    0x00463305, 0x00000000, 0xe32f1a69, 0x00202f03,
    0xe32f1940, 0x14002f03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049e31, 0x00020100,
    0xfa082f14, 0x04002d04, 0x80030061, 0x41054010,
    0x00000000, 0x76543210, 0x80030061, 0x52054010,
    0x00000000, 0x76543210, 0x80031a61, 0x41050120,
    0x00464105, 0x00000000, 0x80031a61, 0x52050120,
    0x00465205, 0x00000000, 0xe4421a40, 0x00804103,
    0xe4531a40, 0x00805203, 0xe3411a69, 0x00204103,
    0xe3521a69, 0x00205203, 0xe3411a40, 0x1c004103,
    0xe3521a40, 0x00005203, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049231, 0x3f160100,
    0xfa004114, 0x04000000, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x202e3e40, 0x0e003f00,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x20312240, 0x16202e00, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x20342241, 0x6c003100,
    0x00041161, 0x50050a20, 0x00463405, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049331, 0x00020100, 0xfa085214, 0x04005004,
    0x80030061, 0x44054010, 0x00000000, 0x76543210,
    0x80030061, 0x5b054010, 0x00000000, 0x76543210,
    0x80031a61, 0x44050120, 0x00464405, 0x00000000,
    0x80031a61, 0x5b050120, 0x00465b05, 0x00000000,
    0xe4451a40, 0x00804403, 0xe45c1a40, 0x00805b03,
    0xe3441a69, 0x00204403, 0xe35b1a69, 0x00205b03,
    0xe3441a40, 0x20004403, 0xe35b1a40, 0x04005b03,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049431, 0x42160100, 0xfa004414, 0x04000000,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x202f3e40, 0x10004200, 0x20321140, 0x18202f00,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x20351141, 0x71003200, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00041161, 0x59050a20,
    0x00463505, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049631, 0x00020100,
    0xfa085b14, 0x04005904, 0x80000061, 0x4b064210,
    0x00000000, 0x00000000, 0x80001961, 0x30010110,
    0x00004b04, 0x00000000, 0x00040070, 0x00018220,
    0x22460505, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00041761, 0x01050120,
    0x00003000, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041669, 0x40050660,
    0x02462805, 0x00463c05, 0xe0141765, 0x00303c03,
    0xe0161568, 0x00203c03, 0xe0180a65, 0x07704003,
    0x00041a70, 0x00018660, 0x16460105, 0x00000000,
    0x01040028, 0x0001c660, 0x00000d10, 0x00000d10,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x0004004c, 0x1c050220, 0x00460105, 0x00000000,
    0x80030061, 0x09054010, 0x00000000, 0x76543210,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x09050120, 0x00460905, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xe40a0940, 0x00800903, 0xe3091969, 0x00200903,
    0xe3091940, 0x14000903, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049631, 0x07160100,
    0xfa000914, 0x04000000, 0x80033661, 0x09054010,
    0x00000000, 0x76543210, 0x80031961, 0x09050120,
    0x00460905, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xe40a1940, 0x00800903,
    0xe3091969, 0x00200903, 0xe3091940, 0x14000903,
    0x80002601, 0x00000000, 0x00000000, 0x00000000,
    0x80040061, 0x10014110, 0x00000000, 0x00e000e0,
    0x00040069, 0x10018510, 0x01561c06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x00e000e0,
    0xe01a0961, 0x001b0004, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049731, 0x07160100,
    0xfa000914, 0x04000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0xac1c1970, 0x07001a02,
    0x20071965, 0x05001c03, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00041961, 0x09062650,
    0x00460705, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00041965, 0x6a058110,
    0x01560906, 0x00010001, 0x80030061, 0x0a054010,
    0x00000000, 0x76543210, 0x00041a61, 0x6b050450,
    0x00686a06, 0x00000000, 0x80031a61, 0x0a050120,
    0x00460a05, 0x00000000, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040070, 0x6c058550,
    0x25586b05, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xe40b1a40, 0x00800a03,
    0x00041a61, 0x1c050560, 0x20466c05, 0x00000000,
    0xe30a1a69, 0x00200a03, 0x01040062, 0x07058220,
    0x02460c05, 0xff800000, 0xe30a1a40, 0x18000a03,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa31e0961, 0xff810000, 0x601e0061, 0x00100700,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x07058220, 0x02460e05, 0xff800000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80031161, 0x74060220, 0x00441e26, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa3201a61, 0xff810000, 0x60200061, 0x00100700,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049931, 0x08160100, 0xfa000a14, 0x04000000,
    0x80033961, 0x0a054010, 0x00000000, 0x76543210,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80031161, 0x76060220, 0x00442026, 0x00000000,
    0x80031a61, 0x0a050120, 0x00460a05, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xe40b1940, 0x00800a03, 0xe30a1969, 0x00200a03,
    0xe30a1940, 0x1c000a03, 0x80002901, 0x00000000,
    0x00000000, 0x00000000, 0x01041662, 0x6c058220,
    0x02460805, 0x7f800000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049a31, 0x08160100,
    0xfa000a14, 0x04000000, 0x80033a61, 0x0a054010,
    0x00000000, 0x76543210, 0xa36a1a61, 0x7f810000,
    0x606a0061, 0x00106c00, 0x80031961, 0x0a050120,
    0x00460a05, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0xe40b1940, 0x00800a03,
    0xe30a1969, 0x00200a03, 0xe30a1940, 0x20000a03,
    0x80002a01, 0x00000000, 0x00000000, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x6e058220, 0x02460805, 0x7f800000,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x07058220, 0x02461005, 0xff800000,
    0xa36c1a61, 0x7f810000, 0x606c0061, 0x00106e00,
    0xa36e1961, 0xff810000, 0x606e0061, 0x00100700,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049831, 0x08160100, 0xfa000a14, 0x04000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80031261, 0x72060220, 0x00446c26, 0x00000000,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80001601, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x70058220, 0x02460805, 0x7f800000,
    0xa3071961, 0x7f810000, 0x60070061, 0x00107000,
    0x00040070, 0x00018660, 0x16461405, 0x00000001,
    0x80031161, 0x70060220, 0x00446a26, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80031962, 0x09060aa0, 0x5a446a06, 0x00447006,
    0x80030961, 0x6a260220, 0x00440906, 0x00000000,
    0x80031161, 0x70060220, 0x00440726, 0x00000000,
    0x80021a61, 0x24070220, 0x00426a27, 0x00000000,
    0x80020061, 0x26070220, 0x00426a47, 0x00000000,
    0x80031c62, 0x09060aa0, 0x5a446c06, 0x00447206,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x22070aa0, 0x5a422407, 0x00422607,
    0x80030a61, 0x6c260220, 0x00440906, 0x00000000,
    0x80031261, 0x72060220, 0x00446e26, 0x00000000,
    0x80021161, 0x6a470220, 0x00422207, 0x00000000,
    0x80021b61, 0x30070220, 0x00426c27, 0x00000000,
    0x80021761, 0x32070220, 0x00426c47, 0x00000000,
    0x80031d62, 0x09060aa0, 0x4a441e06, 0x00447406,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80021b61, 0x2a070220, 0x00426a27, 0x00000000,
    0x80023e61, 0x2c070220, 0x00426a67, 0x00000000,
    0x80021b62, 0x2e070aa0, 0x5a423007, 0x00423207,
    0x80031261, 0x1e260220, 0x00440906, 0x00000000,
    0x80021a62, 0x28070aa0, 0x5a422a07, 0x00422c07,
    0x80021261, 0x6c470220, 0x00422e07, 0x00000000,
    0x80021a61, 0x48070220, 0x00421e27, 0x00000000,
    0x80020061, 0x4a070220, 0x00421e47, 0x00000000,
    0x80031c62, 0x09060aa0, 0x4a442006, 0x00447606,
    0x80021261, 0x6a670220, 0x00422807, 0x00000000,
    0x80021c61, 0x36070220, 0x00426c27, 0x00000000,
    0x80020061, 0x38070220, 0x00426c67, 0x00000000,
    0x80021c62, 0x46070aa0, 0x4a424807, 0x00424a07,
    0x80031261, 0x20260220, 0x00440906, 0x00000000,
    0x80021c62, 0x6a850aa0, 0x5a006a64, 0x00346a85,
    0x80021c62, 0x6b850aa0, 0x5a006b64, 0x00346b85,
    0x80021a62, 0x34070aa0, 0x5a423607, 0x00423807,
    0x80021461, 0x1e470220, 0x00424607, 0x00000000,
    0x80021a61, 0x54070220, 0x00422027, 0x00000000,
    0x80020061, 0x56070220, 0x00422047, 0x00000000,
    0x80031c62, 0x09060aa0, 0x5a440706, 0x00447006,
    0x80031362, 0x6b050aa0, 0x5a006ae4, 0x00466b05,
    0x80021361, 0x6c670220, 0x00423407, 0x00000000,
    0x80021c61, 0x4e070220, 0x00421e27, 0x00000000,
    0x80023361, 0x50070220, 0x00421e67, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80021c62, 0x52070aa0, 0x4a425407, 0x00425607,
    0x80031361, 0x07260220, 0x00440906, 0x00000000,
    0x80021c62, 0x6c850aa0, 0x5a006c64, 0x00346c85,
    0x80021c62, 0x6d850aa0, 0x5a006d64, 0x00346d85,
    0x80021a62, 0x4c070aa0, 0x4a424e07, 0x00425007,
    0x80021461, 0x20470220, 0x00425207, 0x00000000,
    0x80021a61, 0x3c070220, 0x00420727, 0x00000000,
    0x80023161, 0x3e070220, 0x00420747, 0x00000000,
    0x80031c62, 0x09060aa0, 0x4a446e06, 0x00447206,
    0x80031362, 0x6d050aa0, 0x5a006ce4, 0x00466d05,
    0x80021361, 0x1e670220, 0x00424c07, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80021c61, 0x5a070220, 0x00422027, 0x00000000,
    0x80023661, 0x5c070220, 0x00422067, 0x00000000,
    0x80021c62, 0x3a070aa0, 0x5a423c07, 0x00423e07,
    0x80031361, 0x6e260220, 0x00440906, 0x00000000,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x09050220, 0x02006de4, 0x00006be4,
    0x80021d62, 0x1e850aa0, 0x4a001e64, 0x00341e85,
    0x80021d62, 0x1f850aa0, 0x4a001f64, 0x00341f85,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80021b62, 0x58070aa0, 0x4a425a07, 0x00425c07,
    0x80021461, 0x07470220, 0x00423a07, 0x00000000,
    0x80021b61, 0x60070220, 0x00426e27, 0x00000000,
    0x80023f61, 0x62070220, 0x00426e47, 0x00000000,
    0x80031262, 0x1f050aa0, 0x4a001ee4, 0x00461f05,
    0x80021261, 0x20670220, 0x00425807, 0x00000000,
    0x80021c61, 0x42070220, 0x00420727, 0x00000000,
    0x80023461, 0x44070220, 0x00420767, 0x00000000,
    0x80021c62, 0x5e070aa0, 0x4a426007, 0x00426207,
    0x80021b62, 0x20850aa0, 0x4a002064, 0x00342085,
    0x80021b62, 0x21850aa0, 0x4a002164, 0x00342185,
    0x80021962, 0x40070aa0, 0x5a424207, 0x00424407,
    0x80021461, 0x6e470220, 0x00425e07, 0x00000000,
    0x80031262, 0x21050aa0, 0x4a0020e4, 0x00462105,
    0x80021261, 0x07670220, 0x00424007, 0x00000000,
    0x80021a61, 0x66070220, 0x00426e27, 0x00000000,
    0x80023061, 0x68070220, 0x00426e67, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x6a050220, 0x020021e4, 0x00001fe4,
    0x80021c62, 0x07850aa0, 0x5a000764, 0x00340785,
    0x80021c62, 0x08850aa0, 0x5a000864, 0x00340885,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80021a62, 0x64070aa0, 0x4a426607, 0x00426807,
    0x00040070, 0x00018660, 0x16461405, 0x00000002,
    0x80031262, 0x08050aa0, 0x5a0007e4, 0x00460805,
    0x80021261, 0x6e670220, 0x00426407, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x2f1e0062, 0x09010883, 0x80021a62, 0x6e850aa0,
    0x4a006e64, 0x00346e85, 0x80021a62, 0x6f850aa0,
    0x4a006f64, 0x00346f85, 0x80031162, 0x6f050aa0,
    0x4a006ee4, 0x00466f05, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x2f070062, 0x6a016f83,
    0x00040070, 0x00018660, 0x16461605, 0x00000000,
    0x2f091a62, 0x07201e00, 0x00040070, 0x00018660,
    0x26461805, 0x00000000, 0x01040022, 0x0001c060,
    0x00000060, 0x00000060, 0x60071141, 0x00601a02,
    0x601a1941, 0x00301602, 0x00040952, 0x1e040e68,
    0x0e0e0705, 0x1a051405, 0x00041969, 0x07058660,
    0x02461e05, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x00000000,
    0xea2a0714, 0x01000914, 0x00040025, 0x00004600,
    0x00000000, 0x00000088, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00041164, 0x07050660,
    0x00461c05, 0x00000000, 0x80000061, 0x78064210,
    0x00000000, 0x00000000, 0x80001961, 0x30010110,
    0x00007804, 0x00000000, 0x00041b70, 0x00018220,
    0x22460705, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00041161, 0x08050120,
    0x00003000, 0x00000000, 0x20011965, 0x08000103,
    0x00040027, 0x00014060, 0x00000000, 0xfffff2e0,
    0x80030061, 0x55054010, 0x00000000, 0x76543210,
    0x80000061, 0x4c064210, 0x00000000, 0x00000000,
    0x80031a61, 0x55050120, 0x00465505, 0x00000000,
    0xe4561940, 0x00805503, 0xe3551969, 0x00205503,
    0xe3551940, 0x00005503, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049b31, 0x53160100,
    0xfa005514, 0x04000000, 0x80002b01, 0x00000000,
    0x00000000, 0x00000000, 0xa01a0040, 0x01005303,
    0x80001e61, 0x30010110, 0x00004c04, 0x00000000,
    0x00040070, 0x00018220, 0x22460505, 0x00000000,
    0x00040061, 0x01050120, 0x00003000, 0x00000000,
    0x00041970, 0x00018660, 0x16460105, 0x00000000,
    0x01040028, 0x0001c660, 0x00000c50, 0x00000c50,
    0x0004094c, 0x07050220, 0x00460105, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80041961, 0x10014110, 0x00000000, 0x03400340,
    0x00040069, 0x10018510, 0x01560706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x03400340,
    0xe01c0961, 0x001b0004, 0xac071970, 0x1a001c02,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x20090965, 0x05000703, 0x00041961, 0x07062650,
    0x00460905, 0x00000000, 0x80030061, 0x0a054010,
    0x00000000, 0x76543210, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040065, 0x6e058110,
    0x01560706, 0x00010001, 0x80031a61, 0x0a050120,
    0x00460a05, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x00041a61, 0x6f050450,
    0x00686e06, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xe40b1a40, 0x00800a03,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040070, 0x70058550, 0x25586f05, 0x00000000,
    0xe30a1a69, 0x00200a03, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x1e050560,
    0x20467005, 0x00000000, 0xe30a1a40, 0x18000a03,
    0x01040062, 0x07058220, 0x02460c05, 0xff800000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa3200961, 0xff810000, 0x60200061, 0x00100700,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x07058220, 0x02460e05, 0xff800000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80031161, 0x76060220, 0x00442026, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa3220a61, 0xff810000, 0x60220061, 0x00100700,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049c31, 0x08160100, 0xfa000a14, 0x04000000,
    0x80033c61, 0x0a054010, 0x00000000, 0x76543210,
    0x80031161, 0x78060220, 0x00442226, 0x00000000,
    0x80031a61, 0x0a050120, 0x00460a05, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0xe40b1940, 0x00800a03, 0xe30a1969, 0x00200a03,
    0xe30a1940, 0x1c000a03, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x6e058220,
    0x02460805, 0x7f800000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049d31, 0x08160100,
    0xfa000a14, 0x04000000, 0x80033d61, 0x0a054010,
    0x00000000, 0x76543210, 0xa36c0a61, 0x7f810000,
    0x606c0061, 0x00106e00, 0x80031961, 0x0a050120,
    0x00460a05, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0xe40b1940, 0x00800a03,
    0xe30a1969, 0x00200a03, 0xe30a1940, 0x20000a03,
    0x80002d01, 0x00000000, 0x00000000, 0x00000000,
    0x80001401, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x70058220, 0x02460805, 0x7f800000,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x07058220, 0x02461005, 0xff800000,
    0xa36e1a61, 0x7f810000, 0x606e0061, 0x00107000,
    0xa3701961, 0xff810000, 0x60700061, 0x00100700,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049831, 0x08160100, 0xfa000a14, 0x04000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80031261, 0x74060220, 0x00446e26, 0x00000000,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80001601, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x72058220, 0x02460805, 0x7f800000,
    0xa3071961, 0x7f810000, 0x60070061, 0x00107200,
    0x00040070, 0x00018660, 0x16461405, 0x00000001,
    0x80031161, 0x72060220, 0x00446c26, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80031962, 0x09060aa0, 0x5a446c06, 0x00447206,
    0x80030961, 0x6c260220, 0x00440906, 0x00000000,
    0x80031161, 0x72060220, 0x00440726, 0x00000000,
    0x80021a61, 0x26070220, 0x00426c27, 0x00000000,
    0x80020061, 0x28070220, 0x00426c47, 0x00000000,
    0x80031c62, 0x09060aa0, 0x5a446e06, 0x00447406,
    0x80021962, 0x24070aa0, 0x5a422607, 0x00422807,
    0x80030a61, 0x6e260220, 0x00440906, 0x00000000,
    0x80031261, 0x74060220, 0x00447026, 0x00000000,
    0x80021161, 0x6c470220, 0x00422407, 0x00000000,
    0x80020b61, 0x32070220, 0x00426e27, 0x00000000,
    0x80020061, 0x34070220, 0x00426e47, 0x00000000,
    0x80031d62, 0x09060aa0, 0x4a442006, 0x00447606,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80021b61, 0x2c070220, 0x00426c27, 0x00000000,
    0x80020061, 0x2e070220, 0x00426c67, 0x00000000,
    0x80021b62, 0x30070aa0, 0x5a423207, 0x00423407,
    0x80031261, 0x20260220, 0x00440906, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80021a62, 0x2a070aa0, 0x5a422c07, 0x00422e07,
    0x80021261, 0x6e470220, 0x00423007, 0x00000000,
    0x80021a61, 0x4a070220, 0x00422027, 0x00000000,
    0x80020061, 0x4c070220, 0x00422047, 0x00000000,
    0x80031c62, 0x09060aa0, 0x4a442206, 0x00447806,
    0x80021261, 0x6c670220, 0x00422a07, 0x00000000,
    0x80021c61, 0x38070220, 0x00426e27, 0x00000000,
    0x80020061, 0x3a070220, 0x00426e67, 0x00000000,
    0x80021c62, 0x48070aa0, 0x4a424a07, 0x00424c07,
    0x80031261, 0x22260220, 0x00440906, 0x00000000,
    0x80021c62, 0x6c850aa0, 0x5a006c64, 0x00346c85,
    0x80021c62, 0x6d850aa0, 0x5a006d64, 0x00346d85,
    0x80021a62, 0x36070aa0, 0x5a423807, 0x00423a07,
    0x80021461, 0x20470220, 0x00424807, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80021a61, 0x56070220, 0x00422227, 0x00000000,
    0x80023661, 0x58070220, 0x00422247, 0x00000000,
    0x80031c62, 0x09060aa0, 0x5a440706, 0x00447206,
    0x80031362, 0x6d050aa0, 0x5a006ce4, 0x00466d05,
    0x80021361, 0x6e670220, 0x00423607, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80021c61, 0x50070220, 0x00422027, 0x00000000,
    0x80023361, 0x52070220, 0x00422067, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80021c62, 0x54070aa0, 0x4a425607, 0x00425807,
    0x80031361, 0x07260220, 0x00440906, 0x00000000,
    0x80021c62, 0x6e850aa0, 0x5a006e64, 0x00346e85,
    0x80021c62, 0x6f850aa0, 0x5a006f64, 0x00346f85,
    0x80021a62, 0x4e070aa0, 0x4a425007, 0x00425207,
    0x80021461, 0x22470220, 0x00425407, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80021a61, 0x3e070220, 0x00420727, 0x00000000,
    0x80020061, 0x40070220, 0x00420747, 0x00000000,
    0x80031c62, 0x09060aa0, 0x4a447006, 0x00447406,
    0x80031362, 0x6f050aa0, 0x5a006ee4, 0x00466f05,
    0x80021361, 0x20670220, 0x00424e07, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80021c61, 0x5c070220, 0x00422227, 0x00000000,
    0x80020061, 0x5e070220, 0x00422267, 0x00000000,
    0x80021c62, 0x3c070aa0, 0x5a423e07, 0x00424007,
    0x80031361, 0x70260220, 0x00440906, 0x00000000,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x09050220, 0x02006fe4, 0x00006de4,
    0x80021d62, 0x20850aa0, 0x4a002064, 0x00342085,
    0x80021d62, 0x21850aa0, 0x4a002164, 0x00342185,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80021b62, 0x5a070aa0, 0x4a425c07, 0x00425e07,
    0x80021461, 0x07470220, 0x00423c07, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80021b61, 0x62070220, 0x00427027, 0x00000000,
    0x80023f61, 0x64070220, 0x00427047, 0x00000000,
    0x80031262, 0x21050aa0, 0x4a0020e4, 0x00462105,
    0x80021261, 0x22670220, 0x00425a07, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80021c61, 0x44070220, 0x00420727, 0x00000000,
    0x80020061, 0x46070220, 0x00420767, 0x00000000,
    0x80021c62, 0x60070aa0, 0x4a426207, 0x00426407,
    0x80021b62, 0x22850aa0, 0x4a002264, 0x00342285,
    0x80021b62, 0x23850aa0, 0x4a002364, 0x00342385,
    0x80021962, 0x42070aa0, 0x5a424407, 0x00424607,
    0x80021461, 0x70470220, 0x00426007, 0x00000000,
    0x80031262, 0x23050aa0, 0x4a0022e4, 0x00462305,
    0x80021261, 0x07670220, 0x00424207, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80021a61, 0x68070220, 0x00427027, 0x00000000,
    0x80023061, 0x6a070220, 0x00427067, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x6c050220, 0x020023e4, 0x000021e4,
    0x80021c62, 0x07850aa0, 0x5a000764, 0x00340785,
    0x80021c62, 0x08850aa0, 0x5a000864, 0x00340885,
    0x80021a62, 0x66070aa0, 0x4a426807, 0x00426a07,
    0x00040070, 0x00018660, 0x16461405, 0x00000002,
    0x80031262, 0x08050aa0, 0x5a0007e4, 0x00460805,
    0x80021261, 0x70670220, 0x00426607, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x2f200062, 0x09010883, 0x80021a62, 0x70850aa0,
    0x4a007064, 0x00347085, 0x80021a62, 0x71850aa0,
    0x4a007164, 0x00347185, 0x80031162, 0x71050aa0,
    0x4a0070e4, 0x00467105, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x2f070062, 0x6c017183,
    0x00040070, 0x00018660, 0x16461605, 0x00000000,
    0x2f091a62, 0x07202000, 0x00040070, 0x00018660,
    0x26461805, 0x00000000, 0x01040022, 0x0001c060,
    0x00000060, 0x00000060, 0x60071141, 0x00601c02,
    0x601c0041, 0x00301602, 0x00040952, 0x20040e68,
    0x0e0e0705, 0x1c051405, 0x00041969, 0x07058660,
    0x02462005, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x00000000,
    0xea2a0714, 0x01000914, 0x00040025, 0x00004600,
    0x00000000, 0x00000078, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00041164, 0x07050660,
    0x00461e05, 0x00000000, 0x80000061, 0x7a064210,
    0x00000000, 0x00000000, 0x80001961, 0x30010110,
    0x00007a04, 0x00000000, 0x00041b70, 0x00018220,
    0x22460705, 0x00000000, 0x00040061, 0x07050120,
    0x00003000, 0x00000000, 0x20011965, 0x07000103,
    0x00040027, 0x00014060, 0x00000000, 0xfffff3a0,
    0x80030061, 0x5e054010, 0x00000000, 0x76543210,
    0x80000061, 0x4d064210, 0x00000000, 0x00000000,
    0x80031a61, 0x5e050120, 0x00465e05, 0x00000000,
    0xe45f1940, 0x00805e03, 0xe35e1969, 0x00205e03,
    0xe35e1940, 0x04005e03, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049e31, 0x5c160100,
    0xfa005e14, 0x04000000, 0x80002e01, 0x00000000,
    0x00000000, 0x00000000, 0xa01a1f40, 0x02005c03,
    0x80001e61, 0x30010110, 0x00004d04, 0x00000000,
    0x00040070, 0x00018220, 0x22460505, 0x00000000,
    0x00041f61, 0x01050120, 0x00003000, 0x00000000,
    0x00041970, 0x00018660, 0x16460105, 0x00000000,
    0x01040028, 0x0001c660, 0x00000c20, 0x00000c20,
    0x0004094c, 0x07050220, 0x00460105, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80041961, 0x10014110, 0x00000000, 0x03400340,
    0x00040069, 0x10018510, 0x01560706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x03400340,
    0xe01c0961, 0x001b0004, 0xac071970, 0x1a001c02,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x20090965, 0x05000703, 0x00041961, 0x07062650,
    0x00460905, 0x00000000, 0x80030061, 0x0a054010,
    0x00000000, 0x76543210, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00040065, 0x72058110,
    0x01560706, 0x00010001, 0x80031a61, 0x0a050120,
    0x00460a05, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x73050450,
    0x00687206, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xe40b1a40, 0x00800a03,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040070, 0x74058550, 0x25587305, 0x00000000,
    0xe30a1a69, 0x00200a03, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x1e050560,
    0x20467405, 0x00000000, 0xe30a1a40, 0x18000a03,
    0x01040062, 0x07058220, 0x02460c05, 0xff800000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa3200961, 0xff810000, 0x60200061, 0x00100700,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x07058220, 0x02460e05, 0xff800000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80031161, 0x76060220, 0x00442026, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa3220a61, 0xff810000, 0x60220061, 0x00100700,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049f31, 0x08160100, 0xfa000a14, 0x04000000,
    0x80033f61, 0x0a054010, 0x00000000, 0x76543210,
    0x80031161, 0x78060220, 0x00442226, 0x00000000,
    0x80031a61, 0x0a050120, 0x00460a05, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0xe40b1940, 0x00800a03, 0xe30a1969, 0x00200a03,
    0xe30a1940, 0x1c000a03, 0x80002f01, 0x00000000,
    0x00000000, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x6e058220,
    0x02460805, 0x7f800000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049031, 0x08160100,
    0xfa000a14, 0x04000000, 0x80033061, 0x0a054010,
    0x00000000, 0x76543210, 0xa36c0a61, 0x7f810000,
    0x606c0061, 0x00106e00, 0x80031961, 0x0a050120,
    0x00460a05, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xe40b1940, 0x00800a03,
    0xe30a1969, 0x00200a03, 0xe30a1940, 0x20000a03,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x80001401, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x70058220, 0x02460805, 0x7f800000,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x07058220, 0x02461005, 0xff800000,
    0xa36e1a61, 0x7f810000, 0x606e0061, 0x00107000,
    0xa3701961, 0xff810000, 0x60700061, 0x00100700,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049831, 0x08160100, 0xfa000a14, 0x04000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80031261, 0x74060220, 0x00446e26, 0x00000000,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x72058220, 0x02460805, 0x7f800000,
    0xa3071961, 0x7f810000, 0x60070061, 0x00107200,
    0x00040070, 0x00018660, 0x16461405, 0x00000001,
    0x80031161, 0x72060220, 0x00446c26, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80031962, 0x09060aa0, 0x5a446c06, 0x00447206,
    0x80030961, 0x6c260220, 0x00440906, 0x00000000,
    0x80031161, 0x72060220, 0x00440726, 0x00000000,
    0x80021a61, 0x26070220, 0x00426c27, 0x00000000,
    0x80020061, 0x28070220, 0x00426c47, 0x00000000,
    0x80031c62, 0x09060aa0, 0x5a446e06, 0x00447406,
    0x80021962, 0x24070aa0, 0x5a422607, 0x00422807,
    0x80030a61, 0x6e260220, 0x00440906, 0x00000000,
    0x80031261, 0x74060220, 0x00447026, 0x00000000,
    0x80021161, 0x6c470220, 0x00422407, 0x00000000,
    0x80020b61, 0x32070220, 0x00426e27, 0x00000000,
    0x80020061, 0x34070220, 0x00426e47, 0x00000000,
    0x80031d62, 0x09060aa0, 0x4a442006, 0x00447606,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80021b61, 0x2c070220, 0x00426c27, 0x00000000,
    0x80020061, 0x2e070220, 0x00426c67, 0x00000000,
    0x80021b62, 0x30070aa0, 0x5a423207, 0x00423407,
    0x80031261, 0x20260220, 0x00440906, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80021a62, 0x2a070aa0, 0x5a422c07, 0x00422e07,
    0x80021261, 0x6e470220, 0x00423007, 0x00000000,
    0x80021a61, 0x4a070220, 0x00422027, 0x00000000,
    0x80020061, 0x4c070220, 0x00422047, 0x00000000,
    0x80031c62, 0x09060aa0, 0x4a442206, 0x00447806,
    0x80021261, 0x6c670220, 0x00422a07, 0x00000000,
    0x80021c61, 0x38070220, 0x00426e27, 0x00000000,
    0x80020061, 0x3a070220, 0x00426e67, 0x00000000,
    0x80021c62, 0x48070aa0, 0x4a424a07, 0x00424c07,
    0x80031261, 0x22260220, 0x00440906, 0x00000000,
    0x80021c62, 0x6c850aa0, 0x5a006c64, 0x00346c85,
    0x80021c62, 0x6d850aa0, 0x5a006d64, 0x00346d85,
    0x80021a62, 0x36070aa0, 0x5a423807, 0x00423a07,
    0x80021461, 0x20470220, 0x00424807, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80021a61, 0x56070220, 0x00422227, 0x00000000,
    0x80023661, 0x58070220, 0x00422247, 0x00000000,
    0x80031c62, 0x09060aa0, 0x5a440706, 0x00447206,
    0x80031362, 0x6d050aa0, 0x5a006ce4, 0x00466d05,
    0x80021361, 0x6e670220, 0x00423607, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80021c61, 0x50070220, 0x00422027, 0x00000000,
    0x80023361, 0x52070220, 0x00422067, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80021c62, 0x54070aa0, 0x4a425607, 0x00425807,
    0x80031361, 0x07260220, 0x00440906, 0x00000000,
    0x80021c62, 0x6e850aa0, 0x5a006e64, 0x00346e85,
    0x80021c62, 0x6f850aa0, 0x5a006f64, 0x00346f85,
    0x80021a62, 0x4e070aa0, 0x4a425007, 0x00425207,
    0x80021461, 0x22470220, 0x00425407, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80021a61, 0x3e070220, 0x00420727, 0x00000000,
    0x80020061, 0x40070220, 0x00420747, 0x00000000,
    0x80031c62, 0x09060aa0, 0x4a447006, 0x00447406,
    0x80031362, 0x6f050aa0, 0x5a006ee4, 0x00466f05,
    0x80021361, 0x20670220, 0x00424e07, 0x00000000,
    0x80021c61, 0x5c070220, 0x00422227, 0x00000000,
    0x80023e61, 0x5e070220, 0x00422267, 0x00000000,
    0x80021c62, 0x3c070aa0, 0x5a423e07, 0x00424007,
    0x80031361, 0x70260220, 0x00440906, 0x00000000,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x09050220, 0x02006fe4, 0x00006de4,
    0x80021d62, 0x20850aa0, 0x4a002064, 0x00342085,
    0x80021d62, 0x21850aa0, 0x4a002164, 0x00342185,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80021b62, 0x5a070aa0, 0x4a425c07, 0x00425e07,
    0x80021461, 0x07470220, 0x00423c07, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80021b61, 0x62070220, 0x00427027, 0x00000000,
    0x80023f61, 0x64070220, 0x00427047, 0x00000000,
    0x80031262, 0x21050aa0, 0x4a0020e4, 0x00462105,
    0x80021261, 0x22670220, 0x00425a07, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80021c61, 0x44070220, 0x00420727, 0x00000000,
    0x80020061, 0x46070220, 0x00420767, 0x00000000,
    0x80021c62, 0x60070aa0, 0x4a426207, 0x00426407,
    0x80021b62, 0x22850aa0, 0x4a002264, 0x00342285,
    0x80021b62, 0x23850aa0, 0x4a002364, 0x00342385,
    0x80021962, 0x42070aa0, 0x5a424407, 0x00424607,
    0x80021461, 0x70470220, 0x00426007, 0x00000000,
    0x80031262, 0x23050aa0, 0x4a0022e4, 0x00462305,
    0x80021261, 0x07670220, 0x00424207, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80021a61, 0x68070220, 0x00427027, 0x00000000,
    0x80023061, 0x6a070220, 0x00427067, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x6c050220, 0x020023e4, 0x000021e4,
    0x80021c62, 0x07850aa0, 0x5a000764, 0x00340785,
    0x80021c62, 0x08850aa0, 0x5a000864, 0x00340885,
    0x80021a62, 0x66070aa0, 0x4a426807, 0x00426a07,
    0x00040070, 0x00018660, 0x16461405, 0x00000002,
    0x80031262, 0x08050aa0, 0x5a0007e4, 0x00460805,
    0x80021261, 0x70670220, 0x00426607, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x2f200062, 0x09010883, 0x80021a62, 0x70850aa0,
    0x4a007064, 0x00347085, 0x80021a62, 0x71850aa0,
    0x4a007164, 0x00347185, 0x80031162, 0x71050aa0,
    0x4a0070e4, 0x00467105, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x2f070062, 0x6c017183,
    0x00040070, 0x00018660, 0x16461605, 0x00000000,
    0x2f091a62, 0x07202000, 0x00040070, 0x00018660,
    0x26461805, 0x00000000, 0x01040022, 0x0001c060,
    0x00000060, 0x00000060, 0x60071141, 0x00601c02,
    0x601c0041, 0x00301602, 0x00040952, 0x20040e68,
    0x0e0e0705, 0x1c051405, 0x00041969, 0x07058660,
    0x02462005, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x00000000,
    0xea2a0714, 0x01000914, 0x00040025, 0x00004600,
    0x00000000, 0x00000078, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00041164, 0x07050660,
    0x00461e05, 0x00000000, 0x80000061, 0x7a064210,
    0x00000000, 0x00000000, 0x80001961, 0x30010110,
    0x00007a04, 0x00000000, 0x00041b70, 0x00018220,
    0x22460705, 0x00000000, 0x00040061, 0x07050120,
    0x00003000, 0x00000000, 0x20011965, 0x07000103,
    0x00040027, 0x00014060, 0x00000000, 0xfffff3d0,
    0x80031461, 0x6c054010, 0x00000000, 0x76543210,
    0x80031961, 0x6c050120, 0x00466c05, 0x00000000,
    0xe46d0940, 0x00806c03, 0xe36c1969, 0x00206c03,
    0xe36c1940, 0x08006c03, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049131, 0x6a160100,
    0xfa006c14, 0x04000000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x00010660,
    0x20466a05, 0x00000000, 0x01040022, 0x0001c060,
    0x00000300, 0x00000300, 0x80031161, 0x32054010,
    0x00000000, 0x76543210, 0x80031961, 0x32050120,
    0x00463205, 0x00000000, 0xe4330940, 0x00803203,
    0xe3321969, 0x00203203, 0xe3321940, 0x14003203,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049131, 0x30160100, 0xfa003214, 0x04000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x75058660, 0x02463005, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0xa02f0040, 0x48007503, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xea102f14, 0x01000000, 0x80033661, 0x58054010,
    0x00000000, 0x76543210, 0x80031961, 0x58050120,
    0x00465805, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xe4591940, 0x00805803,
    0xe3581969, 0x00205803, 0xe3581940, 0x00005803,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049631, 0x56160100, 0xfa005814, 0x04000000,
    0x80002601, 0x00000000, 0x00000000, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x76058660, 0x02465605, 0x00000002,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa0301940, 0x4c007603, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xea103014, 0x01000000, 0x80030061, 0x61054010,
    0x00000000, 0x76543210, 0x80031961, 0x61050120,
    0x00466105, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0xe4621940, 0x00806103,
    0xe3611969, 0x00206103, 0xe3611940, 0x04006103,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049f31, 0x5f160100, 0xfa006114, 0x04000000,
    0x80002f01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x77058660, 0x02465f05, 0x00000002,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa0311940, 0x50007703, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xea103114, 0x01000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80004431, 0x780c0000,
    0xe23e000c, 0x00040000, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0x80030061, 0x79054220,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80011961, 0x79550000,
    0x0000005c, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80044531, 0x00000000,
    0x3008790c, 0x00000000, 0x80040001, 0x00000000,
    0xe0000000, 0x00000000, 0x80030061, 0x05054010,
    0x00000000, 0x76543210, 0x80030061, 0x24054010,
    0x00000000, 0x76543210, 0x00040061, 0x27050220,
    0x00460305, 0x00000000, 0x80031161, 0x08054010,
    0x00000000, 0x76543210, 0x80030061, 0x29054010,
    0x00000000, 0x76543210, 0x80031d61, 0x05050120,
    0x00460505, 0x00000000, 0x80031d61, 0x24050120,
    0x00462405, 0x00000000, 0x80031c61, 0x08050120,
    0x00460805, 0x00000000, 0x80031c61, 0x29050120,
    0x00462905, 0x00000000, 0xe4061c40, 0x00800503,
    0xe4251c40, 0x00802403, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xe4090940, 0x00800803,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xe42a1c40, 0x00802903, 0xe3051c69, 0x00200503,
    0xe3241c69, 0x00202403, 0xe3081c69, 0x00200803,
    0xe3291c69, 0x00202903, 0xe3051c40, 0x0c000503,
    0xe3241c40, 0x10002403, 0xe3081c40, 0x0c000803,
    0xe3291c40, 0x10002903, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049631, 0x7e160100,
    0xfa000514, 0x04000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80000b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049731, 0x22160100,
    0xfa002414, 0x04000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049131, 0x06160100,
    0xfa000814, 0x04000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049831, 0x25160100,
    0xfa002914, 0x04000000, 0x80002601, 0x00000000,
    0x00000000, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x00030040, 0x7c058660,
    0x06447e06, 0x00002c58, 0x80102701, 0x00000000,
    0x00000000, 0x00000000, 0x80103b01, 0x00000000,
    0x00000000, 0x00000000, 0x00130040, 0x7d058660,
    0x06442206, 0x00002c58, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x7a050220,
    0x00440626, 0x00000000, 0x80102801, 0x00000000,
    0x00000000, 0x00000000, 0x80103a01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x7b050220,
    0x00442526, 0x00000000, 0x00041b70, 0x7e058220,
    0x52467c05, 0x00002c58, 0x00041a70, 0x00018220,
    0x42462705, 0x00000120, 0x01040028, 0x0001c660,
    0x000001b0, 0x000001b0, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x32058660,
    0x02462705, 0x00000002, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x37140000,
    0xea043214, 0x00040000, 0xae002170, 0x7f803701,
    0x01040022, 0x0001c060, 0x00000120, 0x00000120,
    0xa0013140, 0x32007c02, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x27051970, 0x7c000103,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x33060220, 0x00340105, 0x00000000,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x35060220, 0x00340205, 0x00000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x07042e68, 0x0e2e7e05, 0x05057a05,
    0x00131961, 0x35260220, 0x00340805, 0x00000000,
    0x00031a61, 0x33260220, 0x00340705, 0x00000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x08140000, 0xfb2a3324, 0x01003714,
    0x00040025, 0x00004600, 0x00000000, 0x00000018,
    0xa0270040, 0x20002703, 0x00040027, 0x00014060,
    0x00000000, 0xfffffe40, 0x00041a70, 0x00018220,
    0x42460305, 0x00000030, 0x01040028, 0x0001c660,
    0x00000350, 0x00000350, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00040969, 0x09058660,
    0x02460305, 0x00000002, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0xa0380040, 0x48000903,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x3d140000, 0xea043814, 0x00040000,
    0x00042170, 0x00018660, 0x26463d05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000290, 0x00000290,
    0x80031661, 0x0f054010, 0x00000000, 0x76543210,
    0x80033e61, 0x2c054010, 0x00000000, 0x76543210,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x80031a61, 0x0f050120, 0x00460f05, 0x00000000,
    0x80031a61, 0x2c050120, 0x00462c05, 0x00000000,
    0xe4100a40, 0x00800f03, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0xe42d1a40, 0x00802c03,
    0xe30f1a69, 0x00200f03, 0xe32c1a69, 0x00202c03,
    0xe30f1a40, 0x0c000f03, 0xe32c1a40, 0x10002c03,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049931, 0x0d160100, 0xfa000f14, 0x04000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049e31, 0x2a160100, 0xfa002c14, 0x04000000,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00030040, 0x0b058660, 0x06440d06, 0x000030d8,
    0x80102e01, 0x00000000, 0x00000000, 0x00000000,
    0x00131740, 0x0c058660, 0x06442a06, 0x000030d8,
    0x00041970, 0x0d058220, 0x52460b05, 0x000030d8,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xa00f0040, 0x09000b02, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x27110970, 0x0b000f03,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x39060220, 0x00340f05, 0x00000000,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x80101701, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x3b060220, 0x00341005, 0x00000000,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x0004b152, 0x13042e68, 0x0e2e0d05, 0x11057a05,
    0x00131961, 0x3b260220, 0x00341405, 0x00000000,
    0x00031a61, 0x39260220, 0x00341305, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x14140000, 0xfb183924, 0x01003d14,
    0x00040025, 0x00004600, 0x00000000, 0x00000018,
    0xa0030040, 0x20000303, 0x00040027, 0x00014060,
    0x00000000, 0xfffffca0, 0x80031961, 0x7e050220,
    0x00460005, 0x00000000, 0x80040931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_BFS_BFS_pass1_initial = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 1024,
      .base.total_shared = 1344,
      .base.program_size = 19408,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_BFS_BFS_pass1_initial_relocs,
      .base.uses_atomic_load_store = false,
      .local_size = { 512, 1, 1 },
      .prog_offset = { 0, 0, 0 },
      .prog_mask = 2,
      .prog_spilled = 6,
      .uses_barrier = true,
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
   .args = gfx125_bvh_build_BFS_BFS_pass1_initial_args,
   .code = gfx125_bvh_build_BFS_BFS_pass1_initial_code,
};
const char *gfx125_bvh_build_BFS_BFS_pass1_initial_sha1 = "36d45b4a67c1b27b334d5838f3ddb4ba9ddb2dff";

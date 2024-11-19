#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_BFS_begin_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_BFS_begin_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_BFS_begin_args[] = {
   { 0, 8 },
   { 8, 4 },
   { 12, 4 },
   { 16, 8 },
   { 24, 8 },
   { 32, 8 },
   { 40, 8 },
   { 48, 8 },
   { 56, 8 },
   { 64, 8 },
   { 72, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g33<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g1UD            g33UD           nullUD          0x0240e500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V32, transpose, L1STATE_L3MOCS dst_len = 4, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
and(16)         g33<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 1H compacted };
mov(8)          g39<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g35<1>D         g33<8,8,1>D     0x00000004UD    { align1 1H I@2 };
add(8)          g39.8<1>UW      g39<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g37<1>UD        g39<8,8,1>UW                    { align1 1H };
add(16)         g40<1>D         g37<1,1,0>D     g35<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g23<1>D         g3.4<0,1,0>D    36D             { align1 1H compacted };
cmp.l.f0.0(16)  g25<1>UD        g23<1,1,0>UD    g3.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g29<2>UD        g23<4,4,1>UD                    { align1 1Q };
mov(8)          g31<2>UD        g24<4,4,1>UD                    { align1 2Q };
and.z.f0.0(16)  g22<1>UD        g40<1,1,0>UD    0x000001ffUD    { align1 1H I@5 compacted };
add(16)         g27<1>D         -g25<1,1,0>D    g3.5<0,1,0>D    { align1 1H I@4 compacted };
mov(8)          g29.1<2>UD      g27<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g31.1<2>UD      g28<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g15UD           g29UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(16)         g33<1>UD        g2.4<0,1,0>UD                   { align1 1H };
mov(16)         g35<1>UD        g2.5<0,1,0>UD                   { align1 1H };
mov(16)         g37<1>UD        g2.6<0,1,0>UD                   { align1 1H };
mov(16)         g39<1>UD        g2.7<0,1,0>UD                   { align1 1H };
mov(8)          g29.1<2>D       g3.7<0,1,0>D                    { align1 1Q $1.src };
mov(8)          g31.1<2>D       g3.7<0,1,0>D                    { align1 2Q $1.src };
mov(8)          g29<2>D         g3.6<0,1,0>D                    { align1 1Q I@2 };
mov(8)          g31<2>D         g3.6<0,1,0>D                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g29UD           g33UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $2 };
add(16)         g41<1>D         g3.6<0,1,0>D    16D             { align1 1H compacted };
add(16)         g51<1>D         g3.6<0,1,0>D    32D             { align1 1H compacted };
mov(16)         g5<1>UD         g3<0,1,0>UD                     { align1 1H };
mov(16)         g7<1>UD         g3.1<0,1,0>UD                   { align1 1H };
mov(16)         g9<1>UD         g3.4<0,1,0>UD                   { align1 1H };
mov(16)         g11<1>UD        g3.5<0,1,0>UD                   { align1 1H };
cmp.l.f0.0(16)  g43<1>UD        g41<1,1,0>UD    g3.6<0,1,0>UD   { align1 1H I@6 compacted };
mov(8)          g47<2>UD        g41<4,4,1>UD                    { align1 1Q };
mov(8)          g49<2>UD        g42<4,4,1>UD                    { align1 2Q };
mov(8)          g57<2>UD        g51<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g59<2>UD        g52<4,4,1>UD                    { align1 2Q I@7 };
cmp.l.f0.0(16)  g53<1>UD        g51<1,1,0>UD    g3.6<0,1,0>UD   { align1 1H compacted };
add(16)         g45<1>D         -g43<1,1,0>D    g3.7<0,1,0>D    { align1 1H I@6 compacted };
add(16)         g55<1>D         -g53<1,1,0>D    g3.7<0,1,0>D    { align1 1H I@2 compacted };
mov(8)          g47.1<2>UD      g45<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g49.1<2>UD      g46<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g57.1<2>UD      g55<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g59.1<2>UD      g56<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        nullUD          g47UD           g5UD            0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $3 };
mov(16)         g34<1>UD        g3.2<0,1,0>UD                   { align1 1H $2.src };
mov(16)         g36<1>UD        g3.3<0,1,0>UD                   { align1 1H $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(16)         g38<1>UD        g4<0,1,0>UD                     { align1 1H $2.src };
mov(16)         g40<1>UD        g4.1<0,1,0>UD                   { align1 1H $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g57UD           g34UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $4 };
add(16)         g58<1>D         g3.6<0,1,0>D    48D             { align1 1H $4.src compacted };
mov(16)         g13<1>UD        g4.2<0,1,0>UD                   { align1 1H };
mov(16)         g17<1>UD        g2.2<0,1,0>UD                   { align1 1H };
mov(16)         g19<1>UD        g2.3<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g60<1>UD        g58<1,1,0>UD    g3.6<0,1,0>UD   { align1 1H I@4 compacted };
mov(8)          g64<2>UD        g58<4,4,1>UD                    { align1 1Q };
mov(8)          g66<2>UD        g59<4,4,1>UD                    { align1 2Q };
add(16)         g62<1>D         -g60<1,1,0>D    g3.7<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g64.1<2>UD      g62<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g66.1<2>UD      g63<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g64UD           g13UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $5 };
add(16)         g65<1>D         g2<0,1,0>D      391212D         { align1 1H $5.src };
mov(16)         g35<1>UD        0x00000000UD                    { align1 1H $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g67<1>UD        g65<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@2 compacted };
mov(8)          g71<2>UD        g65<4,4,1>UD                    { align1 1Q };
mov(8)          g73<2>UD        g66<4,4,1>UD                    { align1 2Q };
add(16)         g69<1>D         -g67<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g71.1<2>UD      g69<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g73.1<2>UD      g70<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g71UD           g35UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g40<1>UD        0x00000001UD                    { align1 1H $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g36.1<2>D       g3.1<0,1,0>D                    { align1 1Q $6.src };
mov(8)          g38.1<2>D       g3.1<0,1,0>D                    { align1 2Q $4.src };
mov(8)          g36<2>D         g3<0,1,0>D                      { align1 1Q I@2 };
mov(8)          g38<2>D         g3<0,1,0>D                      { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g36UD           g40UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $7 };
add(16)         g72<1>D         g2<0,1,0>D      11308D          { align1 1H $6.src };
mov(16)         g41<1>UD        0x00000000UD                    { align1 1H $7.src };
mov(16)         g43<1>UD        g15<8,8,1>UD                    { align1 1H $5.src };
mov(16)         g45<1>UD        0x00000000UD                    { align1 1H };
mov(16)         g47<1>UD        0x00000000UD                    { align1 1H $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g74<1>UD        g72<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@5 compacted };
mov(8)          g78<2>UD        g72<4,4,1>UD                    { align1 1Q };
mov(8)          g80<2>UD        g73<4,4,1>UD                    { align1 2Q };
add(16)         g76<1>D         -g74<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g78.1<2>UD      g76<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g80.1<2>UD      g77<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g78UD           g41UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $8 };
add(16)         g79<1>D         g2<0,1,0>D      2094D           { align1 1H $8.src };
mov(16)         g89<1>UD        0x0000UW                        { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
cmp.l.f0.0(16)  g81<1>UD        g79<1,1,0>UD    0x0000082eUD    { align1 1H I@2 compacted };
mov(8)          g85<2>UD        g79<4,4,1>UD                    { align1 1Q };
mov(8)          g87<2>UD        g80<4,4,1>UD                    { align1 2Q };
add(16)         g83<1>D         -g81<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g85.1<2>UD      g83<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g87.1<2>UD      g84<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g85UD           g89UD           0x08000b84                0x00000080
                            ugm MsgDesc: ( store, a64, d16u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $9 };
add(16)         g90<1>D         g2<0,1,0>D      11324D          { align1 1H $9.src };
mov(16)         g14<1>UD        0x00000000UD                    { align1 1H $5.src };
mov(16)         g16<1>UD        0x00000000UD                    { align1 1H $5.src };
mov(16)         g18<1>UD        0x00000000UD                    { align1 1H $5.src };
mov(16)         g20<1>UD        0x00000000UD                    { align1 1H $5.src };
cmp.l.f0.0(16)  g92<1>UD        g90<8,8,1>UD    0x00002c3cUD    { align1 1H I@5 };
mov(8)          g96<2>UD        g90<4,4,1>UD                    { align1 1Q };
mov(8)          g98<2>UD        g91<4,4,1>UD                    { align1 2Q };
add(16)         g94<1>D         -g92<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g96.1<2>UD      g94<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g98.1<2>UD      g95<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g96UD           g14UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $10 };
add(16)         g98<1>D         g3.4<0,1,0>D    16D             { align1 1H $10.src compacted };
add(16)         g112<1>D        g3<0,1,0>D      32D             { align1 1H compacted };
mov(8)          g42.1<2>D       g3.5<0,1,0>D                    { align1 1Q $8.src };
mov(8)          g44.1<2>D       g3.5<0,1,0>D                    { align1 2Q $8.src };
cmp.l.f0.0(16)  g100<1>UD       g98<1,1,0>UD    g3.4<0,1,0>UD   { align1 1H I@4 compacted };
mov(8)          g107<2>UD       g98<4,4,1>UD                    { align1 1Q };
mov(8)          g109<2>UD       g99<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g114<1>UD       g112<1,1,0>UD   g3<0,1,0>UD     { align1 1H I@6 compacted };
mov(8)          g119<2>UD       g112<4,4,1>UD                   { align1 1Q };
mov(8)          g121<2>UD       g113<4,4,1>UD                   { align1 2Q };
mov(8)          g42<2>D         g3.4<0,1,0>D                    { align1 1Q I@7 };
mov(8)          g44<2>D         g3.4<0,1,0>D                    { align1 2Q I@7 };
add(16)         g105<1>D        -g100<1,1,0>D   g3.5<0,1,0>D    { align1 1H I@7 compacted };
add(16)         g116<1>D        -g114<1,1,0>D   g3.1<0,1,0>D    { align1 1H I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g97UD           g42UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $11 };
mov(8)          g107.1<2>UD     g105<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g109.1<2>UD     g106<4,4,1>UD                   { align1 2Q I@3 };
mov(8)          g119.1<2>UD     g116<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g121.1<2>UD     g117<4,4,1>UD                   { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g111UD          g107UD          nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $12 };
mov(16)         g43<1>UD        g97<8,8,1>UD                    { align1 1H $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g45<1>UD        g99<8,8,1>UD                    { align1 1H $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g47<1>UD        g101<8,8,1>UD                   { align1 1H $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g49<1>UD        g111<8,8,1>UD                   { align1 1H $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g119UD          g43UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $12 };
add(16)         g120<1>D        g3<0,1,0>D      48D             { align1 1H $12.src compacted };
mov(16)         g44<1>UD        g113<8,8,1>UD                   { align1 1H $12.dst };
mov(16)         g46<1>UD        g115<8,8,1>UD                   { align1 1H $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
cmp.l.f0.0(16)  g122<1>UD       g120<1,1,0>UD   0x00000030UD    { align1 1H I@3 compacted };
mov(8)          g4<2>UD         g120<4,4,1>UD                   { align1 1Q $3.src };
mov(8)          g6<2>UD         g121<4,4,1>UD                   { align1 2Q $3.src };
add(16)         g124<1>D        -g122<1,1,0>D   g3.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g4.1<2>UD       g124<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g6.1<2>UD       g125<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g4UD            g44UD           0x08001584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 4 flat )  base_offset 0  { align1 1H $0 };
add(16)         g5<1>D          g2<0,1,0>D      16D             { align1 1H $0.src compacted };
mov(16)         g45<1>UD        0x00000000UD                    { align1 1H $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         g47<1>UD        0x00000000UD                    { align1 1H $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g7<1>UD         g5<1,1,0>UD     g2<0,1,0>UD     { align1 1H I@3 compacted };
mov(8)          g24<2>UD        g5<4,4,1>UD                     { align1 1Q };
mov(8)          g26<2>UD        g6<4,4,1>UD                     { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g9<1>D          -g7<1,1,0>D     g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g24.1<2>UD      g9<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g26.1<2>UD      g10<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g24UD           g45UD           0x08001584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 4 flat )  base_offset 0  { align1 1H $12 };
add(16)         g25<1>D         g3.6<0,1,0>D    64D             { align1 1H $12.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
cmp.l.f0.0(16)  g27<1>UD        g25<1,1,0>UD    g3.6<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g31<2>UD        g25<4,4,1>UD                    { align1 1Q $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $4.src };
mov(8)          g33<2>UD        g26<4,4,1>UD                    { align1 2Q $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g29<1>D         -g27<1,1,0>D    g3.7<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g31.1<2>UD      g29<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g33.1<2>UD      g30<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g31UD           g14UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $1 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g32<1>D         g2<0,1,0>D      40D             { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(16)         g15<1>UD        g22<8,8,1>UD                    { align1 1H $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g34<1>UD        g32<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@2 compacted };

LABEL3:
cmp.ge.f0.0(16) null<1>UD       g15<8,8,1>UD    0x00000100UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL2        UIP:  LABEL2              { align1 1H };
cmp.nz.f0.0(16) g36<1>D         g15<1,1,0>D     0D              { align1 1H $7.src compacted };
shl(16)         g38<1>D         g15<8,8,1>D     0x00000002UD    { align1 1H $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         g50<1>D         -g36<8,8,1>D                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g40<1>D         g32<1,1,0>D     g38<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
cmp.l.f0.0(16)  g42<1>UD        g40<1,1,0>UD    g32<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g46<2>UD        g40<4,4,1>UD                    { align1 1Q $12.src };
mov(8)          g48<2>UD        g41<4,4,1>UD                    { align1 2Q $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add3(16)        g44<1>D         -g34<8,8,1>D    g2.1<0,1,0>D    -g42<1,1,1>D { align1 1H I@3 };
mov(8)          g46.1<2>UD      g44<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g48.1<2>UD      g45<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g46UD           g50UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $12 };
add(16)         g15<1>D         g15<1,1,0>D     512D            { align1 1H compacted };

LABEL2:
while(16)       JIP:  LABEL3                                    { align1 1H };
add(16)         g47<1>D         g2<0,1,0>D      11352D          { align1 1H $12.src };
shl(16)         g19<1>D         g22<8,8,1>D     0x00000002UD    { align1 1H $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
cmp.l.f0.0(16)  g49<1>UD        g47<8,8,1>UD    0x00002c58UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g16<1>UD        g19<8,8,1>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g51<1>D         -g49<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@2 compacted };

LABEL5:
cmp.ge.f0.0(16) null<1>UD       g16<8,8,1>UD    0x00000120UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
shl(16)         g53<1>D         g16<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g86<1>UD        0x7f800000UD                    { align1 1H $9.src };
add(16)         g55<1>D         g47<1,1,0>D     g53<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g57<1>UD        g55<1,1,0>UD    g47<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g61<2>UD        g55<4,4,1>UD                    { align1 1Q $13.src };
mov(8)          g63<2>UD        g56<4,4,1>UD                    { align1 2Q $5.src };
add(16)         g59<1>D         -g57<1,1,0>D    g51<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g61.1<2>UD      g59<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g63.1<2>UD      g60<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g61UD           g86UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $13 };
add3(16)        g62<1>D         0x0004UW        g53<8,8,1>D     g47<1,1,1>D { align1 1H $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
cmp.l.f0.0(16)  g64<1>UD        g62<1,1,0>UD    g47<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g68<2>UD        g62<4,4,1>UD                    { align1 1Q $14.src };
mov(8)          g70<2>UD        g63<4,4,1>UD                    { align1 2Q $6.src };
add(16)         g66<1>D         -g64<1,1,0>D    g51<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g68.1<2>UD      g66<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g70.1<2>UD      g67<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g68UD           g86UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $14 };
add3(16)        g69<1>D         0x0008UW        g53<8,8,1>D     g47<1,1,1>D { align1 1H $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
cmp.l.f0.0(16)  g71<1>UD        g69<1,1,0>UD    g47<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g75<2>UD        g69<4,4,1>UD                    { align1 1Q $15.src };
mov(8)          g77<2>UD        g70<4,4,1>UD                    { align1 2Q $8.src };
add(16)         g73<1>D         -g71<1,1,0>D    g51<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g75.1<2>UD      g73<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g77.1<2>UD      g74<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g75UD           g86UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $15 };
add3(16)        g76<1>D         0x000cUW        g53<8,8,1>D     g47<1,1,1>D { align1 1H $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
cmp.l.f0.0(16)  g78<1>UD        g76<1,1,0>UD    g47<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g82<2>UD        g76<4,4,1>UD                    { align1 1Q $9.src };
mov(8)          g84<2>UD        g77<4,4,1>UD                    { align1 2Q $9.src };
add(16)         g80<1>D         -g78<1,1,0>D    g51<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g82.1<2>UD      g80<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g84.1<2>UD      g81<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g82UD           g86UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $9 };
add(16)         g16<1>D         g16<8,8,1>D     2048D           { align1 1H };

LABEL4:
while(16)       JIP:  LABEL5                                    { align1 1H };
add(16)         g83<1>D         g2<0,1,0>D      12504D          { align1 1H $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g17<1>UD        g19<8,8,1>UD                    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
cmp.l.f0.0(16)  g85<1>UD        g83<8,8,1>UD    0x000030d8UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g87<1>D         -g85<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@1 compacted };

LABEL7:
cmp.ge.f0.0(16) null<1>UD       g17<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL6        UIP:  LABEL6              { align1 1H };
shl(16)         g89<1>D         g17<8,8,1>D     0x00000002UD    { align1 1H $9.src };
mov(16)         g122<1>UD       0x00000000UD                    { align1 1H $12.src };
add(16)         g91<1>D         g83<1,1,0>D     g89<1,1,0>D     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g93<1>UD        g91<1,1,0>UD    g83<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g97<2>UD        g91<4,4,1>UD                    { align1 1Q $0.src };
mov(8)          g99<2>UD        g92<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g95<1>D         -g93<1,1,0>D    g87<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g97.1<2>UD      g95<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g99.1<2>UD      g96<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g97UD           g122UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };
add3(16)        g98<1>D         0x0004UW        g89<8,8,1>D     g83<1,1,1>D { align1 1H $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g100<1>UD       g98<1,1,0>UD    g83<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g104<2>UD       g98<4,4,1>UD                    { align1 1Q $11.dst };
mov(8)          g106<2>UD       g99<4,4,1>UD                    { align1 2Q $12.src };
add(16)         g102<1>D        -g100<1,1,0>D   g87<1,1,0>D     { align1 1H @3 $11.dst compacted };
mov(8)          g104.1<2>UD     g102<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g106.1<2>UD     g103<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g104UD          g122UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $11 };
add3(16)        g105<1>D        0x0008UW        g89<8,8,1>D     g83<1,1,1>D { align1 1H $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
cmp.l.f0.0(16)  g107<1>UD       g105<1,1,0>UD   g83<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g111<2>UD       g105<4,4,1>UD                   { align1 1Q $1.src };
mov(8)          g113<2>UD       g106<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g109<1>D        -g107<1,1,0>D   g87<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g111.1<2>UD     g109<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g113.1<2>UD     g110<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g111UD          g122UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
add3(16)        g112<1>D        0x000cUW        g89<8,8,1>D     g83<1,1,1>D { align1 1H $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g114<1>UD       g112<1,1,0>UD   g83<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g118<2>UD       g112<4,4,1>UD                   { align1 1Q $12.dst };
mov(8)          g120<2>UD       g113<4,4,1>UD                   { align1 2Q $12.src };
add(16)         g116<1>D        -g114<1,1,0>D   g87<1,1,0>D     { align1 1H @3 $12.dst compacted };
mov(8)          g118.1<2>UD     g116<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g120.1<2>UD     g117<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g118UD          g122UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $12 };
add(16)         g17<1>D         g17<8,8,1>D     2048D           { align1 1H };

LABEL6:
while(16)       JIP:  LABEL7                                    { align1 1H };
add(16)         g119<1>D        g2<0,1,0>D      12696D          { align1 1H $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
cmp.l.f0.0(16)  g121<1>UD       g119<8,8,1>UD   0x00003198UD    { align1 1H I@1 };
cmp.l.f0.0(16)  null<1>UD       g19<8,8,1>UD    0x00000018UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g123<1>D        -g121<1,1,0>D   g2.1<0,1,0>D    { align1 1H I@2 compacted };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL8              { align1 1H };
shl(16)         g125<1>D        g22<8,8,1>D     0x00000004UD    { align1 1H };
mov(16)         g32<1>UD        0x7f800000UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g1<1>D          g119<1,1,0>D    g125<1,1,0>D    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cmp.l.f0.0(16)  g3<1>UD         g1<1,1,0>UD     g119<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g7<2>UD         g1<4,4,1>UD                     { align1 1Q };
mov(8)          g9<2>UD         g2<4,4,1>UD                     { align1 2Q };
add(16)         g5<1>D          -g3<1,1,0>D     g123<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g7.1<2>UD       g5<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g9.1<2>UD       g6<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g7UD            g32UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $2 };
add3(16)        g8<1>D          0x0004UW        g125<8,8,1>D    g119<1,1,1>D { align1 1H $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g10<1>UD        g8<1,1,0>UD     g119<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g14<2>UD        g8<4,4,1>UD                     { align1 1Q $1.src };
mov(8)          g16<2>UD        g9<4,4,1>UD                     { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g12<1>D         -g10<1,1,0>D    g123<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g14.1<2>UD      g12<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g16.1<2>UD      g13<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g14UD           g32UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
add3(16)        g15<1>D         0x0008UW        g125<8,8,1>D    g119<1,1,1>D { align1 1H $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g17<1>UD        g15<1,1,0>UD    g119<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g21<2>UD        g15<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g23<2>UD        g16<4,4,1>UD                    { align1 2Q $12.src };
add(16)         g19<1>D         -g17<1,1,0>D    g123<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g21.1<2>UD      g19<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g23.1<2>UD      g20<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g21UD           g32UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
add3(16)        g22<1>D         0x000cUW        g125<8,8,1>D    g119<1,1,1>D { align1 1H $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g24<1>UD        g22<1,1,0>UD    g119<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g28<2>UD        g22<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g30<2>UD        g23<4,4,1>UD                    { align1 2Q $1.src };
add(16)         g26<1>D         -g24<1,1,0>D    g123<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g28.1<2>UD      g26<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g30.1<2>UD      g27<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g28UD           g32UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };

LABEL8:
endif(16)       JIP:  LABEL9                                    { align1 1H };

LABEL9:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_BFS_begin_code[] = {
    0x80000065, 0x21058220, 0x02000004, 0xffffffc0,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01240000, 0xfa00210c, 0x00380000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xe0210065, 0x0ff10043, 0x80030061, 0x27054410,
    0x00000000, 0x76543210, 0x00041a69, 0x23058660,
    0x02462105, 0x00000004, 0x64271a40, 0x00802795,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x25050120, 0x00462705, 0x00000000,
    0xa0281940, 0x23002502, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa0170040, 0x0241035b,
    0x27191970, 0x0310170b, 0x00030061, 0x1d060220,
    0x00341705, 0x00000000, 0x00130061, 0x1f060220,
    0x00341805, 0x00000000, 0xec161d65, 0x1ff02803,
    0xa01b1c40, 0x03121932, 0x00031961, 0x1d260220,
    0x00341b05, 0x00000000, 0x00131a61, 0x1f260220,
    0x00341c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x0f140000,
    0xfb001d24, 0x00000000, 0x01040022, 0x0001c060,
    0x00000a88, 0x00000a88, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x21050220,
    0x00000284, 0x00000000, 0x00040061, 0x23050220,
    0x000002a4, 0x00000000, 0x00040061, 0x25050220,
    0x000002c4, 0x00000000, 0x00040061, 0x27050220,
    0x000002e4, 0x00000000, 0x00033161, 0x1d260660,
    0x000003e4, 0x00000000, 0x00133161, 0x1f260660,
    0x000003e4, 0x00000000, 0x00031a61, 0x1d060660,
    0x000003c4, 0x00000000, 0x00131a61, 0x1f060660,
    0x000003c4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xfb081d24, 0x000c2144, 0xa0290040, 0x0101036b,
    0xa0330040, 0x0201036b, 0x00040061, 0x05050220,
    0x00000304, 0x00000000, 0x00040061, 0x07050220,
    0x00000324, 0x00000000, 0x00040061, 0x09050220,
    0x00000384, 0x00000000, 0x00040061, 0x0b050220,
    0x000003a4, 0x00000000, 0x272b1e70, 0x0310294b,
    0x00030061, 0x2f060220, 0x00342905, 0x00000000,
    0x00130061, 0x31060220, 0x00342a05, 0x00000000,
    0x00031f61, 0x39060220, 0x00343305, 0x00000000,
    0x00131f61, 0x3b060220, 0x00343405, 0x00000000,
    0x27350070, 0x0310334b, 0xa02d1e40, 0x03122b52,
    0xa0371a40, 0x03123552, 0x00031a61, 0x2f260220,
    0x00342d05, 0x00000000, 0x00131b61, 0x31260220,
    0x00342e05, 0x00000000, 0x00031b61, 0x39260220,
    0x00343705, 0x00000000, 0x00131c61, 0x3b260220,
    0x00343805, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xfb082f24, 0x000c0544, 0x00043261, 0x22050220,
    0x00000344, 0x00000000, 0x00043261, 0x24050220,
    0x00000364, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00043261, 0x26050220,
    0x00000404, 0x00000000, 0x00043261, 0x28050220,
    0x00000424, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xfb083924, 0x000c2244, 0xa03a3440, 0x0301036b,
    0x00040061, 0x0d050220, 0x00000444, 0x00000000,
    0x00040061, 0x11050220, 0x00000244, 0x00000000,
    0x00040061, 0x13050220, 0x00000264, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x273c1c70, 0x03103a4b, 0x00030061, 0x40060220,
    0x00343a05, 0x00000000, 0x00130061, 0x42060220,
    0x00343b05, 0x00000000, 0xa03e1b40, 0x03123c52,
    0x00031961, 0x40260220, 0x00343e05, 0x00000000,
    0x00131a61, 0x42260220, 0x00343f05, 0x00000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x00000000, 0xfb084024, 0x000c0d44,
    0x00043540, 0x41058660, 0x06000204, 0x0005f82c,
    0x00043461, 0x23054220, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x27431a70, 0x02104103, 0x00030061, 0x47060220,
    0x00344105, 0x00000000, 0x00130061, 0x49060220,
    0x00344205, 0x00000000, 0xa0451b40, 0x02124312,
    0x00031961, 0x47260220, 0x00344505, 0x00000000,
    0x00131a61, 0x49260220, 0x00344605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xfb084724, 0x00002314,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00043461, 0x28054220, 0x00000000, 0x00000001,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00033661, 0x24260660, 0x00000324, 0x00000000,
    0x00133461, 0x26260660, 0x00000324, 0x00000000,
    0x00031a61, 0x24060660, 0x00000304, 0x00000000,
    0x00131a61, 0x26060660, 0x00000304, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x00000000, 0xfb082424, 0x00002814,
    0x00043640, 0x48058660, 0x06000204, 0x00002c2c,
    0x00043761, 0x29054220, 0x00000000, 0x00000000,
    0x00043561, 0x2b050220, 0x00460f05, 0x00000000,
    0x00040061, 0x2d054220, 0x00000000, 0x00000000,
    0x00043361, 0x2f054220, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x274a1d70, 0x02104803, 0x00030061, 0x4e060220,
    0x00344805, 0x00000000, 0x00130061, 0x50060220,
    0x00344905, 0x00000000, 0xa04c1b40, 0x02124a12,
    0x00031961, 0x4e260220, 0x00344c05, 0x00000000,
    0x00131a61, 0x50260220, 0x00344d05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x00000000, 0xfb084e24, 0x000c2944,
    0x00043840, 0x4f058660, 0x06000204, 0x0000082e,
    0x00040061, 0x59054120, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xe7511a70, 0x82e04f03, 0x00030061, 0x55060220,
    0x00344f05, 0x00000000, 0x00130061, 0x57060220,
    0x00345005, 0x00000000, 0xa0531b40, 0x02125112,
    0x00031961, 0x55260220, 0x00345305, 0x00000000,
    0x00131a61, 0x57260220, 0x00345405, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x00000000, 0xf7085524, 0x00025914,
    0x00043940, 0x5a058660, 0x06000204, 0x00002c3c,
    0x00043561, 0x0e054220, 0x00000000, 0x00000000,
    0x00043561, 0x10054220, 0x00000000, 0x00000000,
    0x00043561, 0x12054220, 0x00000000, 0x00000000,
    0x00043561, 0x14054220, 0x00000000, 0x00000000,
    0x00041d70, 0x5c058220, 0x52465a05, 0x00002c3c,
    0x00030061, 0x60060220, 0x00345a05, 0x00000000,
    0x00130061, 0x62060220, 0x00345b05, 0x00000000,
    0xa05e1b40, 0x02125c12, 0x00031961, 0x60260220,
    0x00345e05, 0x00000000, 0x00131a61, 0x62260220,
    0x00345f05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044a31, 0x00000000,
    0xfb086024, 0x000c0e44, 0xa0623a40, 0x0101035b,
    0xa0700040, 0x02010303, 0x00033861, 0x2a260660,
    0x000003a4, 0x00000000, 0x00133861, 0x2c260660,
    0x000003a4, 0x00000000, 0x27641c70, 0x0310620b,
    0x00030061, 0x6b060220, 0x00346205, 0x00000000,
    0x00130061, 0x6d060220, 0x00346305, 0x00000000,
    0x27721e70, 0x03107003, 0x00030061, 0x77060220,
    0x00347005, 0x00000000, 0x00130061, 0x79060220,
    0x00347105, 0x00000000, 0x00031f61, 0x2a060660,
    0x00000384, 0x00000000, 0x00131f61, 0x2c060660,
    0x00000384, 0x00000000, 0xa0691f40, 0x03126432,
    0xa0741e40, 0x03127212, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x61440000,
    0xfb002a24, 0x000c0000, 0x00031a61, 0x6b260220,
    0x00346905, 0x00000000, 0x00131b61, 0x6d260220,
    0x00346a05, 0x00000000, 0x00031b61, 0x77260220,
    0x00347405, 0x00000000, 0x00131c61, 0x79260220,
    0x00347505, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x6f440000,
    0xfb006b24, 0x000c0000, 0x00042b61, 0x2b050220,
    0x00466105, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00042b61, 0x2d050220,
    0x00466305, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00042b61, 0x2f050220,
    0x00466505, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00042c61, 0x31050220,
    0x00466f05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x00000000,
    0xfb087724, 0x000c2b44, 0xa0783c40, 0x03010303,
    0x00042c61, 0x2c050220, 0x00467105, 0x00000000,
    0x00042c61, 0x2e050220, 0x00467305, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0xe77a1b70, 0x03007803, 0x00033361, 0x04060220,
    0x00347805, 0x00000000, 0x00133361, 0x06060220,
    0x00347905, 0x00000000, 0xa07c1b40, 0x03127a12,
    0x00031961, 0x04260220, 0x00347c05, 0x00000000,
    0x00131a61, 0x06260220, 0x00347d05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb080424, 0x00042c24,
    0xa0053040, 0x01010203, 0x00043061, 0x2d054220,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x00043061, 0x2f054220,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x27071b70, 0x02100503,
    0x00030061, 0x18060220, 0x00340505, 0x00000000,
    0x00130061, 0x1a060220, 0x00340605, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xa0091b40, 0x02120712, 0x00031961, 0x18260220,
    0x00340905, 0x00000000, 0x00131a61, 0x1a260220,
    0x00340a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x00000000,
    0xfb081824, 0x00042d24, 0xa0193c40, 0x0401036b,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x271b1970, 0x0310194b, 0x00033261, 0x1f060220,
    0x00341905, 0x00000000, 0x80103401, 0x00000000,
    0x00000000, 0x00000000, 0x00133261, 0x21060220,
    0x00341a05, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa01d1b40, 0x03121b52,
    0x00031961, 0x1f260220, 0x00341d05, 0x00000000,
    0x00131a61, 0x21260220, 0x00341e05, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb081f24, 0x000c0e44,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa0203140, 0x02810203, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00042161, 0x0f050220,
    0x00461605, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x27221a70, 0x02102003,
    0x00041a70, 0x00018220, 0x42460f05, 0x00000100,
    0x01040028, 0x0001c660, 0x00000130, 0x00000130,
    0xae243770, 0x00000f03, 0x00043769, 0x26058660,
    0x02460f05, 0x00000002, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x00041a61, 0x32052660,
    0x00462405, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xa0281a40, 0x26002002,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x272a1970, 0x20002803, 0x00033c61, 0x2e060220,
    0x00342805, 0x00000000, 0x00133c61, 0x30060220,
    0x00342905, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x00041b52, 0x2c042e68,
    0x06262205, 0x2a050224, 0x00031961, 0x2e260220,
    0x00342c05, 0x00000000, 0x00131a61, 0x30260220,
    0x00342d05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x00000000,
    0xfb082e24, 0x00003214, 0xa00f0040, 0x20000f03,
    0x00040027, 0x00014060, 0x00000000, 0xfffffec0,
    0x00043c40, 0x2f058660, 0x06000204, 0x00002c58,
    0x00043169, 0x13058660, 0x02461605, 0x00000002,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x00041a70, 0x31058220, 0x52462f05, 0x00002c58,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00041a61, 0x10050220, 0x00461305, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0xa0331a40, 0x02123112, 0x00041a70, 0x00018220,
    0x42461005, 0x00000120, 0x01040028, 0x0001c660,
    0x000002d8, 0x000002d8, 0x00040069, 0x35058660,
    0x02461005, 0x00000002, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00043961, 0x56054220,
    0x00000000, 0x7f800000, 0xa0371a40, 0x35002f02,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x27391970, 0x2f003703, 0x00033d61, 0x3d060220,
    0x00343705, 0x00000000, 0x00133561, 0x3f060220,
    0x00343805, 0x00000000, 0xa03b1b40, 0x33023902,
    0x00031961, 0x3d260220, 0x00343b05, 0x00000000,
    0x00131a61, 0x3f260220, 0x00343c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044d31, 0x00000000, 0xfb083d24, 0x00005614,
    0x00043d52, 0x3e044160, 0x0e0e0004, 0x2f053505,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x27401970, 0x2f003e03, 0x00033e61, 0x44060220,
    0x00343e05, 0x00000000, 0x00133661, 0x46060220,
    0x00343f05, 0x00000000, 0xa0421b40, 0x33024002,
    0x00031961, 0x44260220, 0x00344205, 0x00000000,
    0x00131a61, 0x46260220, 0x00344305, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x00000000, 0xfb084424, 0x00005614,
    0x00043e52, 0x45044160, 0x0e0e0008, 0x2f053505,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x27471970, 0x2f004503, 0x00033f61, 0x4b060220,
    0x00344505, 0x00000000, 0x00133861, 0x4d060220,
    0x00344605, 0x00000000, 0xa0491b40, 0x33024702,
    0x00031961, 0x4b260220, 0x00344905, 0x00000000,
    0x00131a61, 0x4d260220, 0x00344a05, 0x00000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044f31, 0x00000000, 0xfb084b24, 0x00005614,
    0x00043f52, 0x4c044160, 0x0e0e000c, 0x2f053505,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x274e1970, 0x2f004c03, 0x00033961, 0x52060220,
    0x00344c05, 0x00000000, 0x00133961, 0x54060220,
    0x00344d05, 0x00000000, 0xa0501b40, 0x33024e02,
    0x00031961, 0x52260220, 0x00345005, 0x00000000,
    0x00131a61, 0x54260220, 0x00345105, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x00000000, 0xfb085224, 0x00005614,
    0x00040040, 0x10058660, 0x06461005, 0x00000800,
    0x00040027, 0x00014060, 0x00000000, 0xfffffd18,
    0x00043940, 0x53058660, 0x06000204, 0x000030d8,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00041b61, 0x11050220, 0x00461305, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x00041a70, 0x55058220, 0x52465305, 0x000030d8,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xa0571940, 0x02125512, 0x00041a70, 0x00018220,
    0x42461105, 0x00000030, 0x01040028, 0x0001c660,
    0x000002d8, 0x000002d8, 0x00043969, 0x59058660,
    0x02461105, 0x00000002, 0x00043c61, 0x7a054220,
    0x00000000, 0x00000000, 0xa05b1a40, 0x59005302,
    0x275d1970, 0x53005b03, 0x00033061, 0x61060220,
    0x00345b05, 0x00000000, 0x00130061, 0x63060220,
    0x00345c05, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0xa05f1b40, 0x57025d02,
    0x00031961, 0x61260220, 0x00345f05, 0x00000000,
    0x00131a61, 0x63260220, 0x00346005, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb086124, 0x00007a14,
    0x00043052, 0x62044160, 0x0e0e0004, 0x53055905,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x27641970, 0x53006203, 0x00032b61, 0x68060220,
    0x00346205, 0x00000000, 0x00133c61, 0x6a060220,
    0x00346305, 0x00000000, 0xa066bb40, 0x57026402,
    0x00031961, 0x68260220, 0x00346605, 0x00000000,
    0x00131a61, 0x6a260220, 0x00346705, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x00000000, 0xfb086824, 0x00007a14,
    0x00043b52, 0x69044160, 0x0e0e0008, 0x53055905,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x276b1970, 0x53006903, 0x00033161, 0x6f060220,
    0x00346905, 0x00000000, 0x00130061, 0x71060220,
    0x00346a05, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0xa06d1b40, 0x57026b02,
    0x00031961, 0x6f260220, 0x00346d05, 0x00000000,
    0x00131a61, 0x71260220, 0x00346e05, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb086f24, 0x00007a14,
    0x00043152, 0x70044160, 0x0e0e000c, 0x53055905,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x27721970, 0x53007003, 0x00032c61, 0x76060220,
    0x00347005, 0x00000000, 0x00133c61, 0x78060220,
    0x00347105, 0x00000000, 0xa074bc40, 0x57027202,
    0x00031961, 0x76260220, 0x00347405, 0x00000000,
    0x00131a61, 0x78260220, 0x00347505, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x00000000, 0xfb087624, 0x00007a14,
    0x00040040, 0x11058660, 0x06461105, 0x00000800,
    0x00040027, 0x00014060, 0x00000000, 0xfffffd18,
    0x00043c40, 0x77058660, 0x06000204, 0x00003198,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x00041970, 0x79058220, 0x52467705, 0x00003198,
    0x00040070, 0x00018220, 0x52461305, 0x00000018,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0xa07b1a40, 0x02127912, 0x01040022, 0x0001c060,
    0x000002c8, 0x000002c8, 0x00040069, 0x7d058660,
    0x02461605, 0x00000004, 0x00040061, 0x20054220,
    0x00000000, 0x7f800000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa0011a40, 0x7d007702,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x27031970, 0x77000103, 0x00030061, 0x07060220,
    0x00340105, 0x00000000, 0x00130061, 0x09060220,
    0x00340205, 0x00000000, 0xa0051b40, 0x7b020302,
    0x00031961, 0x07260220, 0x00340505, 0x00000000,
    0x00131a61, 0x09260220, 0x00340605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x00000000, 0xfb080724, 0x00002014,
    0x00043252, 0x08044160, 0x0e0e0004, 0x77057d05,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x270a1970, 0x77000803, 0x00033161, 0x0e060220,
    0x00340805, 0x00000000, 0x00130061, 0x10060220,
    0x00340905, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa00c1b40, 0x7b020a02,
    0x00031961, 0x0e260220, 0x00340c05, 0x00000000,
    0x00131a61, 0x10260220, 0x00340d05, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb080e24, 0x00002014,
    0x00043152, 0x0f044160, 0x0e0e0008, 0x77057d05,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x27111970, 0x77000f03, 0x00033161, 0x15060220,
    0x00340f05, 0x00000000, 0x00133c61, 0x17060220,
    0x00341005, 0x00000000, 0xa0131b40, 0x7b021102,
    0x00031961, 0x15260220, 0x00341305, 0x00000000,
    0x00131a61, 0x17260220, 0x00341405, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb081524, 0x00002014,
    0x00043152, 0x16044160, 0x0e0e000c, 0x77057d05,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x27181970, 0x77001603, 0x00033161, 0x1c060220,
    0x00341605, 0x00000000, 0x00133161, 0x1e060220,
    0x00341705, 0x00000000, 0xa01a1b40, 0x7b021802,
    0x00031961, 0x1c260220, 0x00341a05, 0x00000000,
    0x00131a61, 0x1e260220, 0x00341b05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb081c24, 0x00002014,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_BFS_begin = {
   .prog_data = {
      .base.nr_params = 27,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 4,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 6032,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_BFS_begin_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_BFS_begin_printfs,
      .base.uses_atomic_load_store = false,
      .local_size = { 512, 1, 1 },
      .prog_offset = { 0, 0, 0 },
      .prog_mask = 2,
      .prog_spilled = 0,
      .uses_barrier = false,
      .uses_num_work_groups = false,
      .push.per_thread.dwords = 0,
      .push.per_thread.regs = 0,
      .push.per_thread.size = 0,
      .push.cross_thread.dwords = 27,
      .push.cross_thread.regs = 4,
      .push.cross_thread.size = 128,
   },
   .args_size = 76,
   .arg_count = 11,
   .args = gfx125_bvh_build_BFS_begin_args,
   .code = gfx125_bvh_build_BFS_begin_code,
};
const char *gfx125_bvh_build_BFS_begin_sha1 = "55949d803b8a731c0bb5e89f64f57c6a61c3b6fb";

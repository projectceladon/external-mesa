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

and(1)          g91<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
and(16)         g28<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g91UD           nullUD          0x0240e500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V32, transpose, L1STATE_L3MOCS dst_len = 4, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g15<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g30<1>D         g28<8,8,1>D     0x00000004UD    { align1 1H I@2 };
add(8)          g15.8<1>UW      g15<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g32<1>D         g15<8,8,1>UW                    { align1 1H };
add(16)         g34<1>D         g32<1,1,0>D     g30<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g23<1>D         g3.4<0,1,0>D    36D             { align1 1H compacted };
cmp.l.f0.0(16)  g25<1>UD        g23<1,1,0>UD    g3.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g85<2>UD        g23<4,4,1>UD                    { align1 1Q };
mov(8)          g87<2>UD        g24<4,4,1>UD                    { align1 2Q };
and.z.f0.0(16)  g22<1>UD        g34<1,1,0>UD    0x000001ffUD    { align1 1H I@5 compacted };
add(16)         g27<1>D         -g25<1,1,0>D    g3.5<0,1,0>D    { align1 1H I@4 compacted };
mov(8)          g85.1<2>UD      g27<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g87.1<2>UD      g28<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g15UD           g85UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $0 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(16)         g90<1>D         g2.4<0,1,0>D                    { align1 1H };
mov(16)         g92<1>D         g2.5<0,1,0>D                    { align1 1H };
mov(16)         g94<1>D         g2.6<0,1,0>D                    { align1 1H };
mov(16)         g96<1>D         g2.7<0,1,0>D                    { align1 1H };
mov(8)          g86.1<2>D       g3.7<0,1,0>D                    { align1 1Q $0.src };
mov(8)          g88.1<2>D       g3.7<0,1,0>D                    { align1 2Q $0.src };
mov(8)          g86<2>D         g3.6<0,1,0>D                    { align1 1Q I@2 };
mov(8)          g88<2>D         g3.6<0,1,0>D                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g86UD           g90UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $1 };
add(16)         g35<1>D         g3.6<0,1,0>D    16D             { align1 1H compacted };
add(16)         g40<1>D         g3.6<0,1,0>D    32D             { align1 1H compacted };
mov(16)         g5<1>D          g3<0,1,0>D                      { align1 1H };
mov(16)         g7<1>D          g3.1<0,1,0>D                    { align1 1H };
mov(16)         g9<1>D          g3.4<0,1,0>D                    { align1 1H };
mov(16)         g11<1>D         g3.5<0,1,0>D                    { align1 1H };
cmp.l.f0.0(16)  g37<1>UD        g35<1,1,0>UD    g3.6<0,1,0>UD   { align1 1H I@6 compacted };
mov(8)          g91<2>UD        g35<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g93<2>UD        g36<4,4,1>UD                    { align1 2Q $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g95<2>UD        g40<4,4,1>UD                    { align1 1Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g97<2>UD        g41<4,4,1>UD                    { align1 2Q I@7 };
cmp.l.f0.0(16)  g42<1>UD        g40<1,1,0>UD    g3.6<0,1,0>UD   { align1 1H compacted };
add(16)         g39<1>D         -g37<1,1,0>D    g3.7<0,1,0>D    { align1 1H I@6 compacted };
add(16)         g44<1>D         -g42<1,1,0>D    g3.7<0,1,0>D    { align1 1H I@2 compacted };
mov(8)          g91.1<2>UD      g39<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g93.1<2>UD      g40<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g95.1<2>UD      g44<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g97.1<2>UD      g45<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        nullUD          g91UD           g5UD            0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $2 };
mov(16)         g99<1>D         g3.2<0,1,0>D                    { align1 1H };
mov(16)         g101<1>D        g3.3<0,1,0>D                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(16)         g103<1>D        g4<0,1,0>D                      { align1 1H };
mov(16)         g105<1>D        g4.1<0,1,0>D                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g95UD           g99UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $3 };
add(16)         g45<1>D         g3.6<0,1,0>D    48D             { align1 1H compacted };
mov(16)         g13<1>UD        g4.2<0,1,0>UD                   { align1 1H };
mov(16)         g17<1>UD        g2.2<0,1,0>UD                   { align1 1H };
mov(16)         g19<1>UD        g2.3<0,1,0>UD                   { align1 1H };
cmp.l.f0.0(16)  g47<1>UD        g45<1,1,0>UD    g3.6<0,1,0>UD   { align1 1H I@4 compacted };
mov(8)          g100<2>UD       g45<4,4,1>UD                    { align1 1Q $3.src };
mov(8)          g102<2>UD       g46<4,4,1>UD                    { align1 2Q $3.src };
add(16)         g49<1>D         -g47<1,1,0>D    g3.7<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g100.1<2>UD     g49<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g102.1<2>UD     g50<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g100UD          g13UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $4 };
add(16)         g50<1>D         g2<0,1,0>D      391212D         { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g105<1>D        0D                              { align1 1H $3.src };
cmp.l.f0.0(16)  g52<1>UD        g50<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@2 compacted };
mov(8)          g101<2>UD       g50<4,4,1>UD                    { align1 1Q $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $3.src };
mov(8)          g103<2>UD       g51<4,4,1>UD                    { align1 2Q $4.src };
add(16)         g54<1>D         -g52<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g101.1<2>UD     g54<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g103.1<2>UD     g55<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g101UD          g105UD          0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $5 };
mov(16)         g110<1>D        1D                              { align1 1H };
mov(8)          g106.1<2>D      g3.1<0,1,0>D                    { align1 1Q $5.src };
mov(8)          g108.1<2>D      g3.1<0,1,0>D                    { align1 2Q };
mov(8)          g106<2>D        g3<0,1,0>D                      { align1 1Q I@2 };
mov(8)          g108<2>D        g3<0,1,0>D                      { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g106UD          g110UD          0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };
add(16)         g55<1>D         g2<0,1,0>D      11308D          { align1 1H };
mov(16)         g115<1>UD       0x00000000UD                    { align1 1H };
mov(16)         g117<1>UD       g15<8,8,1>UD                    { align1 1H $4.src };
mov(16)         g119<1>UD       0x00000000UD                    { align1 1H };
mov(16)         g121<1>UD       0x00000000UD                    { align1 1H };
cmp.l.f0.0(16)  g57<1>UD        g55<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@5 compacted };
mov(8)          g111<2>UD       g55<4,4,1>UD                    { align1 1Q $6.src };
mov(8)          g113<2>UD       g56<4,4,1>UD                    { align1 2Q };
add(16)         g59<1>D         -g57<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g111.1<2>UD     g59<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g113.1<2>UD     g60<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g111UD          g115UD          0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $7 };
add(16)         g60<1>D         g2<0,1,0>D      2094D           { align1 1H };
mov(16)         g66<1>UD        0x0000UW                        { align1 1H };
cmp.l.f0.0(16)  g62<1>UD        g60<1,1,0>UD    0x0000082eUD    { align1 1H I@2 compacted };
mov(8)          g116<2>UD       g60<4,4,1>UD                    { align1 1Q $7.src };
mov(8)          g118<2>UD       g61<4,4,1>UD                    { align1 2Q $7.src };
add(16)         g64<1>D         -g62<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g116.1<2>UD     g64<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g118.1<2>UD     g65<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g116UD          g66UD           0x08000b84                0x00000080
                            ugm MsgDesc: ( store, a64, d16u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };
add(16)         g67<1>D         g2<0,1,0>D      11324D          { align1 1H $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g14<1>D         0D                              { align1 1H $4.src };
mov(16)         g16<1>D         0D                              { align1 1H $4.src };
mov(16)         g18<1>D         0D                              { align1 1H $4.src };
mov(16)         g20<1>D         0D                              { align1 1H $4.src };
cmp.l.f0.0(16)  g69<1>UD        g67<8,8,1>UD    0x00002c3cUD    { align1 1H I@5 };
mov(8)          g117<2>UD       g67<4,4,1>UD                    { align1 1Q $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $7.src };
mov(8)          g119<2>UD       g68<4,4,1>UD                    { align1 2Q $8.src };
add(16)         g71<1>D         -g69<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g117.1<2>UD     g71<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g119.1<2>UD     g72<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g117UD          g14UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $7.src };
add(16)         g73<1>D         g3.4<0,1,0>D    16D             { align1 1H compacted };
add(16)         g82<1>D         g3<0,1,0>D      32D             { align1 1H compacted };
mov(8)          g118.1<2>D      g3.5<0,1,0>D                    { align1 1Q $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $7.src };
mov(8)          g120.1<2>D      g3.5<0,1,0>D                    { align1 2Q $9.src };
cmp.l.f0.0(16)  g75<1>UD        g73<1,1,0>UD    g3.4<0,1,0>UD   { align1 1H I@4 compacted };
mov(8)          g122<2>UD       g73<4,4,1>UD                    { align1 1Q $7.src };
mov(8)          g124<2>UD       g74<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g84<1>UD        g82<1,1,0>UD    g3<0,1,0>UD     { align1 1H I@6 compacted };
mov(8)          g4<2>UD         g82<4,4,1>UD                    { align1 1Q $2.src };
mov(8)          g6<2>UD         g83<4,4,1>UD                    { align1 2Q $2.src };
mov(8)          g118<2>D        g3.4<0,1,0>D                    { align1 1Q I@7 };
mov(8)          g120<2>D        g3.4<0,1,0>D                    { align1 2Q I@7 };
add(16)         g80<1>D         -g75<1,1,0>D    g3.5<0,1,0>D    { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g86<1>D         -g84<1,1,0>D    g3.1<0,1,0>D    { align1 1H I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g72UD           g118UD          nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
mov(8)          g122.1<2>UD     g80<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g124.1<2>UD     g81<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g4.1<2>UD       g86<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g6.1<2>UD       g87<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g81UD           g122UD          nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $0 };
mov(16)         g24<1>UD        g72<8,8,1>UD                    { align1 1H $10.dst };
mov(16)         g26<1>UD        g74<8,8,1>UD                    { align1 1H $10.dst };
mov(16)         g28<1>UD        g76<8,8,1>UD                    { align1 1H $10.dst };
mov(16)         g30<1>UD        g81<8,8,1>UD                    { align1 1H $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g4UD            g24UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $0 };
add(16)         g89<1>D         g3<0,1,0>D      48D             { align1 1H $1.src compacted };
mov(16)         g29<1>D         g83<8,8,1>D                     { align1 1H $0.dst };
mov(16)         g31<1>D         g85<8,8,1>D                     { align1 1H $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g91<1>UD        g89<1,1,0>UD    0x00000030UD    { align1 1H I@3 compacted };
mov(8)          g25<2>UD        g89<4,4,1>UD                    { align1 1Q $0.src };
mov(8)          g27<2>UD        g90<4,4,1>UD                    { align1 2Q $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g93<1>D         -g91<1,1,0>D    g3.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g25.1<2>UD      g93<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g27.1<2>UD      g94<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g25UD           g29UD           0x08003586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 4 flat )  base_offset 0  { align1 1H $11 };
add(16)         g94<1>D         g2<0,1,0>D      16D             { align1 1H $3.src compacted };
mov(16)         g34<1>D         0D                              { align1 1H };
mov(16)         g36<1>D         0D                              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g96<1>UD        g94<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@3 compacted };
mov(8)          g30<2>UD        g94<4,4,1>UD                    { align1 1Q $11.src };
mov(8)          g32<2>UD        g95<4,4,1>UD                    { align1 2Q $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g98<1>D         -g96<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g30.1<2>UD      g98<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g32.1<2>UD      g99<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g30UD           g34UD           0x08003586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 4 flat )  base_offset 0  { align1 1H $12 };
add(16)         g99<1>D         g3.6<0,1,0>D    64D             { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g101<1>UD       g99<1,1,0>UD    g3.6<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g35<2>UD        g99<4,4,1>UD                    { align1 1Q $12.src };
mov(8)          g37<2>UD        g100<4,4,1>UD                   { align1 2Q $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g103<1>D        -g101<1,1,0>D   g3.7<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g35.1<2>UD      g103<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g37.1<2>UD      g104<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g35UD           g14UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $0 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g104<1>D        g2<0,1,0>D      40D             { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(16)         g16<1>UD        g22<8,8,1>UD                    { align1 1H $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g106<1>UD       g104<1,1,0>UD   g2<0,1,0>UD     { align1 1H I@2 compacted };

LABEL3:
cmp.ge.f0.0(16) null<1>UD       g16<8,8,1>UD    0x00000100UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL2        UIP:  LABEL2              { align1 1H };
cmp.nz.f0.0(16) g108<1>D        g16<1,1,0>D     0D              { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shl(16)         g110<1>D        g16<8,8,1>D     0x00000002UD    { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g40<1>D         -g108<8,8,1>D                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g112<1>D        g104<1,1,0>D    g110<1,1,0>D    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(16)  g114<1>UD       g112<1,1,0>UD   g104<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g36<2>UD        g112<4,4,1>UD                   { align1 1Q $0.src };
mov(8)          g38<2>UD        g113<4,4,1>UD                   { align1 2Q $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add3(16)        g116<1>D        -g106<8,8,1>D   g2.1<0,1,0>D    -g114<1,1,1>D { align1 1H I@3 };
mov(8)          g36.1<2>UD      g116<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g38.1<2>UD      g117<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g36UD           g40UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };
add(16)         g16<1>D         g16<1,1,0>D     512D            { align1 1H compacted };

LABEL2:
while(16)       JIP:  LABEL3                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g117<1>D        g2<0,1,0>D      11352D          { align1 1H $9.src };
shl(16)         g20<1>D         g22<8,8,1>D     0x00000002UD    { align1 1H $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
cmp.l.f0.0(16)  g119<1>UD       g117<8,8,1>UD   0x00002c58UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g17<1>UD        g20<8,8,1>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g121<1>D        -g119<1,1,0>D   g2.1<0,1,0>D    { align1 1H I@2 compacted };

LABEL5:
cmp.ge.f0.0(16) null<1>UD       g17<8,8,1>UD    0x00000120UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
shl(16)         g123<1>D        g17<8,8,1>D     0x00000002UD    { align1 1H $0.src };
mov(16)         g45<1>D         2139095040D                     { align1 1H $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g125<1>D        g117<1,1,0>D    g123<1,1,0>D    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cmp.l.f0.0(16)  g3<1>UD         g125<1,1,0>UD   g117<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g41<2>UD        g125<4,4,1>UD                   { align1 1Q $0.src };
mov(8)          g43<2>UD        g126<4,4,1>UD                   { align1 2Q $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g5<1>D          -g3<1,1,0>D     g121<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g41.1<2>UD      g5<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g43.1<2>UD      g6<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g41UD           g45UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };
add3(16)        g6<1>D          0x0004UW        g123<8,8,1>D    g117<1,1,1>D { align1 1H $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g8<1>UD         g6<1,1,0>UD     g117<1,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(8)          g47<2>UD        g6<4,4,1>UD                     { align1 1Q $14.src };
mov(8)          g49<2>UD        g7<4,4,1>UD                     { align1 2Q $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g10<1>D         -g8<1,1,0>D     g121<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g47.1<2>UD      g10<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g49.1<2>UD      g11<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g47UD           g45UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $14 };
add3(16)        g11<1>D         0x0008UW        g123<8,8,1>D    g117<1,1,1>D { align1 1H $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g13<1>UD        g11<1,1,0>UD    g117<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g48<2>UD        g11<4,4,1>UD                    { align1 1Q $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $13.src };
mov(8)          g50<2>UD        g12<4,4,1>UD                    { align1 2Q $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g15<1>D         -g13<1,1,0>D    g121<1,1,0>D    { align1 1H $0.dst compacted };
mov(8)          g48.1<2>UD      g15<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g50.1<2>UD      g16<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g48UD           g45UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add3(16)        g24<1>D         0x000cUW        g123<8,8,1>D    g117<1,1,1>D { align1 1H $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
cmp.l.f0.0(16)  g26<1>UD        g24<1,1,0>UD    g117<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g49<2>UD        g24<4,4,1>UD                    { align1 1Q $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $13.src };
mov(8)          g51<2>UD        g25<4,4,1>UD                    { align1 2Q $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(16)         g28<1>D         -g26<1,1,0>D    g121<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g49.1<2>UD      g28<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g51.1<2>UD      g29<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g49UD           g45UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $13 };
add(16)         g17<1>D         g17<8,8,1>D     2048D           { align1 1H };

LABEL4:
while(16)       JIP:  LABEL5                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g29<1>D         g2<0,1,0>D      12504D          { align1 1H $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g18<1>UD        g20<8,8,1>UD                    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
cmp.l.f0.0(16)  g31<1>UD        g29<8,8,1>UD    0x000030d8UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g33<1>D         -g31<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@1 compacted };

LABEL7:
cmp.ge.f0.0(16) null<1>UD       g18<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL6        UIP:  LABEL6              { align1 1H };
shl(16)         g35<1>D         g18<8,8,1>D     0x00000002UD    { align1 1H $0.src };
mov(16)         g58<1>D         0D                              { align1 1H $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g37<1>D         g29<1,1,0>D     g35<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g39<1>UD        g37<1,1,0>UD    g29<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g50<2>UD        g37<4,4,1>UD                    { align1 1Q $13.src };
mov(8)          g52<2>UD        g38<4,4,1>UD                    { align1 2Q $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g41<1>D         -g39<1,1,0>D    g33<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g50.1<2>UD      g41<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g52.1<2>UD      g42<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g50UD           g58UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
add3(16)        g42<1>D         0x0004UW        g35<8,8,1>D     g29<1,1,1>D { align1 1H $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
cmp.l.f0.0(16)  g44<1>UD        g42<1,1,0>UD    g29<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g60<2>UD        g42<4,4,1>UD                    { align1 1Q $2.src };
mov(8)          g62<2>UD        g43<4,4,1>UD                    { align1 2Q $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(16)         g46<1>D         -g44<1,1,0>D    g33<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g60.1<2>UD      g46<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g62.1<2>UD      g47<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g60UD           g58UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $2 };
add3(16)        g47<1>D         0x0008UW        g35<8,8,1>D     g29<1,1,1>D { align1 1H $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g49<1>UD        g47<1,1,0>UD    g29<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g61<2>UD        g47<4,4,1>UD                    { align1 1Q $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
mov(8)          g63<2>UD        g48<4,4,1>UD                    { align1 2Q $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g51<1>D         -g49<1,1,0>D    g33<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g61.1<2>UD      g51<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g63.1<2>UD      g52<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g61UD           g58UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $3 };
add3(16)        g52<1>D         0x000cUW        g35<8,8,1>D     g29<1,1,1>D { align1 1H $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g54<1>UD        g52<1,1,0>UD    g29<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g62<2>UD        g52<4,4,1>UD                    { align1 1Q $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
mov(8)          g64<2>UD        g53<4,4,1>UD                    { align1 2Q $3.src };
add(16)         g56<1>D         -g54<1,1,0>D    g33<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g62.1<2>UD      g56<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g64.1<2>UD      g57<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g62UD           g58UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };
add(16)         g18<1>D         g18<8,8,1>D     2048D           { align1 1H };

LABEL6:
while(16)       JIP:  LABEL7                                    { align1 1H };
add(16)         g57<1>D         g2<0,1,0>D      12696D          { align1 1H $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g59<1>UD        g57<8,8,1>UD    0x00003198UD    { align1 1H I@1 };
cmp.l.f0.0(16)  null<1>UD       g20<8,8,1>UD    0x00000018UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g61<1>D         -g59<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@2 compacted };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL8              { align1 1H };
shl(16)         g63<1>D         g22<8,8,1>D     0x00000004UD    { align1 1H $0.src };
mov(16)         g86<1>D         2139095040D                     { align1 1H $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g65<1>D         g57<1,1,0>D     g63<1,1,0>D     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g67<1>UD        g65<1,1,0>UD    g57<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g71<2>UD        g65<4,4,1>UD                    { align1 1Q };
mov(8)          g73<2>UD        g66<4,4,1>UD                    { align1 2Q };
add(16)         g69<1>D         -g67<1,1,0>D    g61<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g71.1<2>UD      g69<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g73.1<2>UD      g70<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g71UD           g86UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };
add3(16)        g70<1>D         0x0004UW        g63<8,8,1>D     g57<1,1,1>D { align1 1H $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g72<1>UD        g70<1,1,0>UD    g57<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g88<2>UD        g70<4,4,1>UD                    { align1 1Q $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
mov(8)          g90<2>UD        g71<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g74<1>D         -g72<1,1,0>D    g61<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g88.1<2>UD      g74<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g90.1<2>UD      g75<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g88UD           g86UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };
add3(16)        g75<1>D         0x0008UW        g63<8,8,1>D     g57<1,1,1>D { align1 1H };
cmp.l.f0.0(16)  g77<1>UD        g75<1,1,0>UD    g57<1,1,0>UD    { align1 1H @1 $10.dst compacted };
mov(8)          g89<2>UD        g75<4,4,1>UD                    { align1 1Q $0.src };
mov(8)          g91<2>UD        g76<4,4,1>UD                    { align1 2Q $0.src };
add(16)         g79<1>D         -g77<1,1,0>D    g61<1,1,0>D     { align1 1H @3 $10.dst compacted };
mov(8)          g89.1<2>UD      g79<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g91.1<2>UD      g80<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g89UD           g86UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $5 };
add3(16)        g80<1>D         0x000cUW        g63<8,8,1>D     g57<1,1,1>D { align1 1H };
cmp.l.f0.0(16)  g82<1>UD        g80<1,1,0>UD    g57<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g90<2>UD        g80<4,4,1>UD                    { align1 1Q $5.src };
mov(8)          g92<2>UD        g81<4,4,1>UD                    { align1 2Q $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g84<1>D         -g82<1,1,0>D    g61<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g90.1<2>UD      g84<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g92.1<2>UD      g85<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g90UD           g86UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };

LABEL8:
endif(16)       JIP:  LABEL9                                    { align1 1H };

LABEL9:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_BFS_begin_code[] = {
    0x80000065, 0x5b058220, 0x02000004, 0xffffffc0,
    0xe01c0065, 0x0ff10043, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01240000,
    0xfa005b0c, 0x00380000, 0x80030061, 0x0f054410,
    0x00000000, 0x76543210, 0x00041a69, 0x1e058660,
    0x02461c05, 0x00000004, 0x640f1a40, 0x00800f95,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x20050160, 0x00460f05, 0x00000000,
    0xa0221940, 0x1e002002, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa0170040, 0x0241035b,
    0x27191970, 0x0310170b, 0x00030061, 0x55060220,
    0x00341705, 0x00000000, 0x00130061, 0x57060220,
    0x00341805, 0x00000000, 0xec161d65, 0x1ff02203,
    0xa01b1c40, 0x03121932, 0x00031961, 0x55260220,
    0x00341b05, 0x00000000, 0x00131a61, 0x57260220,
    0x00341c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x0f140000,
    0xfb045524, 0x00040000, 0x01040022, 0x0001c060,
    0x00000a68, 0x00000a68, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x5a050660,
    0x00000284, 0x00000000, 0x00040061, 0x5c050660,
    0x000002a4, 0x00000000, 0x00040061, 0x5e050660,
    0x000002c4, 0x00000000, 0x00040061, 0x60050660,
    0x000002e4, 0x00000000, 0x00033061, 0x56260660,
    0x000003e4, 0x00000000, 0x00133061, 0x58260660,
    0x000003e4, 0x00000000, 0x00031a61, 0x56060660,
    0x000003c4, 0x00000000, 0x00131a61, 0x58060660,
    0x000003c4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb0c5624, 0x003c5a44, 0xa0230040, 0x0101036b,
    0xa0280040, 0x0201036b, 0x00040061, 0x05050660,
    0x00000304, 0x00000000, 0x00040061, 0x07050660,
    0x00000324, 0x00000000, 0x00040061, 0x09050660,
    0x00000384, 0x00000000, 0x00040061, 0x0b050660,
    0x000003a4, 0x00000000, 0x27251e70, 0x0310234b,
    0x00033161, 0x5b060220, 0x00342305, 0x00000000,
    0x00133161, 0x5d060220, 0x00342405, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00031f61, 0x5f060220, 0x00342805, 0x00000000,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x00131f61, 0x61060220, 0x00342905, 0x00000000,
    0x272a0070, 0x0310284b, 0xa0271e40, 0x03122552,
    0xa02c1a40, 0x03122a52, 0x00031a61, 0x5b260220,
    0x00342705, 0x00000000, 0x00131b61, 0x5d260220,
    0x00342805, 0x00000000, 0x00031b61, 0x5f260220,
    0x00342c05, 0x00000000, 0x00131c61, 0x61260220,
    0x00342d05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xfb0c5b24, 0x003c0544, 0x00040061, 0x63050660,
    0x00000344, 0x00000000, 0x00040061, 0x65050660,
    0x00000364, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x67050660,
    0x00000404, 0x00000000, 0x00040061, 0x69050660,
    0x00000424, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xfb0c5f24, 0x003c6344, 0xa02d0040, 0x0301036b,
    0x00040061, 0x0d050220, 0x00000444, 0x00000000,
    0x00040061, 0x11050220, 0x00000244, 0x00000000,
    0x00040061, 0x13050220, 0x00000264, 0x00000000,
    0x272f1c70, 0x03102d4b, 0x00033361, 0x64060220,
    0x00342d05, 0x00000000, 0x00133361, 0x66060220,
    0x00342e05, 0x00000000, 0xa0311b40, 0x03122f52,
    0x00031961, 0x64260220, 0x00343105, 0x00000000,
    0x00131a61, 0x66260220, 0x00343205, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x00000000, 0xfb0c6424, 0x003c0d44,
    0x00040040, 0x32058660, 0x06000204, 0x0005f82c,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00043361, 0x69054660, 0x00000000, 0x00000000,
    0x27341a70, 0x02103203, 0x00033461, 0x65060220,
    0x00343205, 0x00000000, 0x80103301, 0x00000000,
    0x00000000, 0x00000000, 0x00133461, 0x67060220,
    0x00343305, 0x00000000, 0xa0361b40, 0x02123412,
    0x00031961, 0x65260220, 0x00343605, 0x00000000,
    0x00131a61, 0x67260220, 0x00343705, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x00000000, 0xfb0c6524, 0x00046914,
    0x00040061, 0x6e054660, 0x00000000, 0x00000001,
    0x00033561, 0x6a260660, 0x00000324, 0x00000000,
    0x00130061, 0x6c260660, 0x00000324, 0x00000000,
    0x00031a61, 0x6a060660, 0x00000304, 0x00000000,
    0x00131a61, 0x6c060660, 0x00000304, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xfb0c6a24, 0x00046e14,
    0x00040040, 0x37058660, 0x06000204, 0x00002c2c,
    0x00040061, 0x73054220, 0x00000000, 0x00000000,
    0x00043461, 0x75050220, 0x00460f05, 0x00000000,
    0x00040061, 0x77054220, 0x00000000, 0x00000000,
    0x00040061, 0x79054220, 0x00000000, 0x00000000,
    0x27391d70, 0x02103703, 0x00033661, 0x6f060220,
    0x00343705, 0x00000000, 0x00130061, 0x71060220,
    0x00343805, 0x00000000, 0xa03b1b40, 0x02123912,
    0x00031961, 0x6f260220, 0x00343b05, 0x00000000,
    0x00131a61, 0x71260220, 0x00343c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x00000000, 0xfb0c6f24, 0x003c7344,
    0x00040040, 0x3c058660, 0x06000204, 0x0000082e,
    0x00040061, 0x42054120, 0x00000000, 0x00000000,
    0xe73e1a70, 0x82e03c03, 0x00033761, 0x74060220,
    0x00343c05, 0x00000000, 0x00133761, 0x76060220,
    0x00343d05, 0x00000000, 0xa0401b40, 0x02123e12,
    0x00031961, 0x74260220, 0x00344005, 0x00000000,
    0x00131a61, 0x76260220, 0x00344105, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x00000000, 0xf7087424, 0x00024214,
    0x00043840, 0x43058660, 0x06000204, 0x00002c3c,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00043461, 0x0e054660, 0x00000000, 0x00000000,
    0x00043461, 0x10054660, 0x00000000, 0x00000000,
    0x00043461, 0x12054660, 0x00000000, 0x00000000,
    0x00043461, 0x14054660, 0x00000000, 0x00000000,
    0x00041d70, 0x45058220, 0x52464305, 0x00002c3c,
    0x00033861, 0x75060220, 0x00344305, 0x00000000,
    0x80103701, 0x00000000, 0x00000000, 0x00000000,
    0x00133861, 0x77060220, 0x00344405, 0x00000000,
    0xa0471b40, 0x02124512, 0x00031961, 0x75260220,
    0x00344705, 0x00000000, 0x00131a61, 0x77260220,
    0x00344805, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x00000000,
    0xfb0c7524, 0x003c0e44, 0x80103701, 0x00000000,
    0x00000000, 0x00000000, 0xa0490040, 0x0101035b,
    0xa0520040, 0x02010303, 0x00033961, 0x76260660,
    0x000003a4, 0x00000000, 0x80103701, 0x00000000,
    0x00000000, 0x00000000, 0x00133961, 0x78260660,
    0x000003a4, 0x00000000, 0x274b1c70, 0x0310490b,
    0x00033761, 0x7a060220, 0x00344905, 0x00000000,
    0x00130061, 0x7c060220, 0x00344a05, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x27541e70, 0x03105203, 0x00033261, 0x04060220,
    0x00345205, 0x00000000, 0x00133261, 0x06060220,
    0x00345305, 0x00000000, 0x00031f61, 0x76060660,
    0x00000384, 0x00000000, 0x00131f61, 0x78060660,
    0x00000384, 0x00000000, 0xa0501f40, 0x03124b32,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa0561e40, 0x03125412, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044a31, 0x48440000,
    0xfb047624, 0x003c0000, 0x00031a61, 0x7a260220,
    0x00345005, 0x00000000, 0x00131b61, 0x7c260220,
    0x00345105, 0x00000000, 0x00031b61, 0x04260220,
    0x00345605, 0x00000000, 0x00131c61, 0x06260220,
    0x00345705, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x51440000,
    0xfb047a24, 0x003c0000, 0x00042a61, 0x18050220,
    0x00464805, 0x00000000, 0x00042a61, 0x1a050220,
    0x00464a05, 0x00000000, 0x00042a61, 0x1c050220,
    0x00464c05, 0x00000000, 0x00042061, 0x1e050220,
    0x00465105, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x00000000,
    0xfb0c0424, 0x003c1844, 0xa0593140, 0x03010303,
    0x00042061, 0x1d050660, 0x00465305, 0x00000000,
    0x00042061, 0x1f050660, 0x00465505, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xe75b1b70, 0x03005903, 0x00033061, 0x19060220,
    0x00345905, 0x00000000, 0x00133061, 0x1b060220,
    0x00345a05, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa05d1b40, 0x03125b12,
    0x00031961, 0x19260220, 0x00345d05, 0x00000000,
    0x00131a61, 0x1b260220, 0x00345e05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x00000000, 0xfb0c1924, 0x000c1d24,
    0xa05e3340, 0x01010203, 0x00040061, 0x22054660,
    0x00000000, 0x00000000, 0x00040061, 0x24054660,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x27601b70, 0x02105e03,
    0x00033b61, 0x1e060220, 0x00345e05, 0x00000000,
    0x00133b61, 0x20060220, 0x00345f05, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xa0621b40, 0x02126012, 0x00031961, 0x1e260220,
    0x00346205, 0x00000000, 0x00131a61, 0x20260220,
    0x00346305, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x00000000,
    0xfb0c1e24, 0x000c2224, 0xa0633440, 0x0401036b,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x27651970, 0x0310634b, 0x00033c61, 0x23060220,
    0x00346305, 0x00000000, 0x00133c61, 0x25060220,
    0x00346405, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa0671b40, 0x03126552,
    0x00031961, 0x23260220, 0x00346705, 0x00000000,
    0x00131a61, 0x25260220, 0x00346805, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb0c2324, 0x003c0e44,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa0683540, 0x02810203, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00042061, 0x10050220,
    0x00461605, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x276a1a70, 0x02106803,
    0x00041a70, 0x00018220, 0x42461005, 0x00000100,
    0x01040028, 0x0001c660, 0x00000120, 0x00000120,
    0xae6c3670, 0x00001003, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00043669, 0x6e058660,
    0x02461005, 0x00000002, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00041a61, 0x28052660,
    0x00466c05, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0xa0701a40, 0x6e006802,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x27721970, 0x68007003, 0x00033061, 0x24060220,
    0x00347005, 0x00000000, 0x00133061, 0x26060220,
    0x00347105, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x00041b52, 0x74042e68,
    0x06266a05, 0x72050224, 0x00031961, 0x24260220,
    0x00347405, 0x00000000, 0x00131a61, 0x26260220,
    0x00347505, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x00000000,
    0xfb0c2424, 0x00042814, 0xa0100040, 0x20001003,
    0x00040027, 0x00014060, 0x00000000, 0xfffffed0,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x00043940, 0x75058660, 0x06000204, 0x00002c58,
    0x00043069, 0x14058660, 0x02461605, 0x00000002,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x00041a70, 0x77058220, 0x52467505, 0x00002c58,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00041a61, 0x11050220, 0x00461405, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa0791a40, 0x02127712, 0x00041a70, 0x00018220,
    0x42461105, 0x00000120, 0x01040028, 0x0001c660,
    0x00000388, 0x00000388, 0x00043069, 0x7b058660,
    0x02461105, 0x00000002, 0x00043d61, 0x2d054660,
    0x00000000, 0x7f800000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xa07d1a40, 0x7b007502,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x27031970, 0x75007d03, 0x00033061, 0x29060220,
    0x00347d05, 0x00000000, 0x00133061, 0x2b060220,
    0x00347e05, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xa0051b40, 0x79020302,
    0x00031961, 0x29260220, 0x00340505, 0x00000000,
    0x00131a61, 0x2b260220, 0x00340605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb0c2924, 0x00042d14,
    0x00043052, 0x06044160, 0x0e0e0004, 0x75057b05,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x27081970, 0x75000603, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x00033e61, 0x2f060220,
    0x00340605, 0x00000000, 0x00133d61, 0x31060220,
    0x00340705, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa00a1b40, 0x79020802,
    0x00031961, 0x2f260220, 0x00340a05, 0x00000000,
    0x00131a61, 0x31260220, 0x00340b05, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x00000000, 0xfb0c2f24, 0x00042d14,
    0x00043252, 0x0b044160, 0x0e0e0008, 0x75057b05,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x270d1970, 0x75000b03, 0x00033e61, 0x30060220,
    0x00340b05, 0x00000000, 0x80103d01, 0x00000000,
    0x00000000, 0x00000000, 0x00133e61, 0x32060220,
    0x00340c05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa00f2040, 0x79020d02,
    0x00031961, 0x30260220, 0x00340f05, 0x00000000,
    0x00131a61, 0x32260220, 0x00341005, 0x00000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044f31, 0x00000000, 0xfb0c3024, 0x00042d14,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x00043052, 0x18044160, 0x0e0e000c, 0x75057b05,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x271a1970, 0x75001803, 0x00033f61, 0x31060220,
    0x00341805, 0x00000000, 0x80103d01, 0x00000000,
    0x00000000, 0x00000000, 0x00133f61, 0x33060220,
    0x00341905, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0xa01c1b40, 0x79021a02,
    0x00031961, 0x31260220, 0x00341c05, 0x00000000,
    0x00131a61, 0x33260220, 0x00341d05, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044d31, 0x00000000, 0xfb0c3124, 0x00042d14,
    0x00040040, 0x11058660, 0x06461105, 0x00000800,
    0x00040027, 0x00014060, 0x00000000, 0xfffffc68,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x00043b40, 0x1d058660, 0x06000204, 0x000030d8,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00041b61, 0x12050220, 0x00461405, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x00041a70, 0x1f058220, 0x52461d05, 0x000030d8,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0xa0211940, 0x02121f12, 0x00041a70, 0x00018220,
    0x42461205, 0x00000030, 0x01040028, 0x0001c660,
    0x00000378, 0x00000378, 0x00043069, 0x23058660,
    0x02461205, 0x00000002, 0x00043061, 0x3a054660,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xa0251a40, 0x23001d02,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x27271970, 0x1d002503, 0x00033d61, 0x32060220,
    0x00342505, 0x00000000, 0x00133d61, 0x34060220,
    0x00342605, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xa0291b40, 0x21022702,
    0x00031961, 0x32260220, 0x00342905, 0x00000000,
    0x00131a61, 0x34260220, 0x00342a05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb0c3224, 0x00043a14,
    0x00043052, 0x2a044160, 0x0e0e0004, 0x1d052305,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x272c1970, 0x1d002a03, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00033261, 0x3c060220,
    0x00342a05, 0x00000000, 0x00133061, 0x3e060220,
    0x00342b05, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0xa02e1b40, 0x21022c02,
    0x00031961, 0x3c260220, 0x00342e05, 0x00000000,
    0x00131a61, 0x3e260220, 0x00342f05, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x00000000, 0xfb0c3c24, 0x00043a14,
    0x00043f52, 0x2f044160, 0x0e0e0008, 0x1d052305,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x27311970, 0x1d002f03, 0x00033261, 0x3d060220,
    0x00342f05, 0x00000000, 0x80103001, 0x00000000,
    0x00000000, 0x00000000, 0x00133261, 0x3f060220,
    0x00343005, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0331b40, 0x21023102,
    0x00031961, 0x3d260220, 0x00343305, 0x00000000,
    0x00131a61, 0x3f260220, 0x00343405, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x00000000, 0xfb0c3d24, 0x00043a14,
    0x00043152, 0x34044160, 0x0e0e000c, 0x1d052305,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x27361970, 0x1d003403, 0x00033361, 0x3e060220,
    0x00343405, 0x00000000, 0x80103001, 0x00000000,
    0x00000000, 0x00000000, 0x00133361, 0x40060220,
    0x00343505, 0x00000000, 0xa0381b40, 0x21023602,
    0x00031961, 0x3e260220, 0x00343805, 0x00000000,
    0x00131a61, 0x40260220, 0x00343905, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb0c3e24, 0x00043a14,
    0x00040040, 0x12058660, 0x06461205, 0x00000800,
    0x00040027, 0x00014060, 0x00000000, 0xfffffc78,
    0x00043040, 0x39058660, 0x06000204, 0x00003198,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00041970, 0x3b058220, 0x52463905, 0x00003198,
    0x00040070, 0x00018220, 0x52461405, 0x00000018,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa03d1a40, 0x02123b12, 0x01040022, 0x0001c060,
    0x000002c8, 0x000002c8, 0x00043069, 0x3f058660,
    0x02461605, 0x00000004, 0x00042061, 0x56054660,
    0x00000000, 0x7f800000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xa0411a40, 0x3f003902,
    0x27431970, 0x39004103, 0x00030061, 0x47060220,
    0x00344105, 0x00000000, 0x00130061, 0x49060220,
    0x00344205, 0x00000000, 0xa0451b40, 0x3d024302,
    0x00031961, 0x47260220, 0x00344505, 0x00000000,
    0x00131a61, 0x49260220, 0x00344605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x00000000, 0xfb0c4724, 0x00045614,
    0x00043452, 0x46044160, 0x0e0e0004, 0x39053f05,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x27481970, 0x39004603, 0x00032061, 0x58060220,
    0x00344605, 0x00000000, 0x80103001, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x5a060220,
    0x00344705, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xa04a1b40, 0x3d024802,
    0x00031961, 0x58260220, 0x00344a05, 0x00000000,
    0x00131a61, 0x5a260220, 0x00344b05, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb0c5824, 0x00045614,
    0x00040052, 0x4b044160, 0x0e0e0008, 0x39053f05,
    0x274d9a70, 0x39004b03, 0x00033061, 0x59060220,
    0x00344b05, 0x00000000, 0x00133061, 0x5b060220,
    0x00344c05, 0x00000000, 0xa04fba40, 0x3d024d02,
    0x00031961, 0x59260220, 0x00344f05, 0x00000000,
    0x00131a61, 0x5b260220, 0x00345005, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x00000000, 0xfb0c5924, 0x00045614,
    0x00040052, 0x50044160, 0x0e0e000c, 0x39053f05,
    0x27521970, 0x39005003, 0x00033561, 0x5a060220,
    0x00345005, 0x00000000, 0x00133561, 0x5c060220,
    0x00345105, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xa0541b40, 0x3d025202,
    0x00031961, 0x5a260220, 0x00345405, 0x00000000,
    0x00131a61, 0x5c260220, 0x00345505, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb0c5a24, 0x00045614,
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
      .base.program_size = 6368,
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
const char *gfx125_bvh_build_BFS_begin_sha1 = "1bec64070fbe6346fd4e1cbdcc9ec6ae4a58d53c";

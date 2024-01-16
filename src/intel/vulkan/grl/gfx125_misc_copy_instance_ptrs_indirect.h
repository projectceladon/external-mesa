#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_misc_copy_instance_ptrs_indirect_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_misc_copy_instance_ptrs_indirect_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g46<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(8)          g65<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(1)          g47<1>UD        g46<0,1,0>UD    0x00000000UD    { align1 WE_all 1N I@2 compacted };
add(8)          g65.8<1>UW      g65<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
mov(16)         g45<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g1UD            g47UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g73<1>D         g65<8,8,1>UW                    { align1 1H };
mov(16)         g66<1>UD        g45<8,8,1>UD                    { align1 1H I@2 };
shl(16)         g75<1>D         g45<8,8,1>D     0x00000004UD    { align1 1H };
add.z.f0.0(16)  null<1>D        g73<8,8,1>D     g75<8,8,1>D     { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g61.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g68.1<2>F       g2.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g63.1<2>F       g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g70.1<2>F       g2.3<0,1,0>F                    { align1 2Q };
mov(8)          g26.1<2>F       g2.5<0,1,0>F                    { align1 1Q };
mov(8)          g28.1<2>F       g2.5<0,1,0>F                    { align1 2Q };
mov(8)          g61<2>F         g2<0,1,0>F                      { align1 1Q F@6 compacted };
mov(8)          g68<2>F         g2<0,1,0>F                      { align1 2Q F@6 compacted };
mov(8)          g63<2>F         g2.2<0,1,0>F                    { align1 1Q F@6 compacted };
mov(8)          g70<2>F         g2.2<0,1,0>F                    { align1 2Q F@6 compacted };
mov(8)          g26<2>F         g2.4<0,1,0>F                    { align1 1Q F@6 compacted };
mov(8)          g28<2>F         g2.4<0,1,0>F                    { align1 2Q F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
send(16)        g1UD            g26UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
shl(16)         g72<1>D         g1<8,8,1>D      0x00000006UD    { align1 1H $1.dst };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
add(8)          g76<1>D         g61<8,4,2>D     156D            { align1 1Q F@6 compacted };
add(8)          g77<1>D         g68<8,4,2>D     156D            { align1 2Q F@5 compacted };
cmp.l.f0.0(16)  g78<1>UD        g76<1,1,0>UD    0x0000009cUD    { align1 1H I@1 compacted };
mov(8)          g27<2>UD        g76<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g29<2>UD        g77<4,4,1>UD                    { align1 2Q $1.src };
add(8)          g80<1>D         -g78<8,8,1>D    g61.1<8,4,2>D   { align1 1Q I@3 };
add(8)          g79<1>D         -g79<8,8,1>D    g68.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g27.1<2>UD      g80<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g29.1<2>UD      g79<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g27UD           g1UD            0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $1 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
shr(16)         g80<1>UD        g72<1,1,0>UD    0x00000008UD    { align1 1H I@3 compacted };
and(16)         g82<1>UD        g72<8,8,1>UD    0xffffff00UD    { align1 1H };
add(16)         g89<1>D         g80<1,1,0>D     2D              { align1 1H I@2 compacted };
add(16)         g84<1>D         g72<1,1,0>D     -g82<1,1,0>D    { align1 1H I@2 compacted };
add(16)         g91<1>D         g45<1,1,0>D     -g89<1,1,0>D    { align1 1H I@2 compacted };
and(16)         g86<1>UD        g84<8,8,1>UD    0xffffffc0UD    { align1 1H I@2 };
mov(16)         g93<1>D         -g91<8,8,1>D                    { align1 1H I@2 };
shr(16)         g88<1>UD        g86<1,1,0>UD    0x00000006UD    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  null<1>UD       g93<8,8,1>UD    g88<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL2              { align1 1H };
shl(16)         g94<1>D         -g91<8,8,1>D    0x00000006UD    { align1 1H };
mov(8)          g112<1>UD       g63.1<8,4,2>UD                  { align1 1Q F@4 };
mov(8)          g113<1>UD       g70.1<8,4,2>UD                  { align1 2Q F@3 };
add(16)         g96<1>D         g82<1,1,0>D     g94<1,1,0>D     { align1 1H I@3 compacted };
shr(16)         g98<1>UD        g96<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
add(8)          g85<1>D         g61<8,4,2>D     g96<1,1,0>D     { align1 1Q F@6 compacted };
add(8)          g119<1>D        g68<8,4,2>D     g97<1,1,0>D     { align1 2Q F@5 compacted };
add(16)         g100<1>D        g3<1,1,0>D      g98<1,1,0>D     { align1 1H @3 $1.dst compacted };
mov(8)          g9<2>UD         g85<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g11<2>UD        g119<4,4,1>UD                   { align1 2Q I@3 };
cmp.l.f0.0(16)  g102<1>UD       g100<1,1,0>UD   g3<1,1,0>UD     { align1 1H I@3 compacted };
shl(16)         g104<1>D        g100<8,8,1>D    0x00000003UD    { align1 1H };
shr(16)         g108<1>UD       g100<1,1,0>UD   0x0000001dUD    { align1 1H compacted };
shl(16)         g106<1>D        -g102<8,8,1>D   0x00000003UD    { align1 1H I@3 };
add(8)          g84<1>D         g63<8,4,2>D     g104<1,1,0>D    { align1 1Q I@3 compacted };
add(8)          g114<1>D        g70<8,4,2>D     g105<1,1,0>D    { align1 2Q I@4 compacted };
or(16)          g110<1>UD       g106<1,1,0>UD   g108<1,1,0>UD   { align1 1H I@3 compacted };
cmp.l.f0.0(8)   g115<1>UD       g84<8,8,1>UD    g63<8,4,2>UD    { align1 1Q I@3 };
mov(8)          g32<2>UD        g84<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g116<1>UD       g114<8,8,1>UD   g70<8,4,2>UD    { align1 2Q I@4 };
mov(8)          g34<2>UD        g114<4,4,1>UD                   { align1 2Q };
cmp.l.f0.0(8)   g86<1>UD        g85<8,8,1>UD    g61<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(8)   g120<1>UD       g119<8,8,1>UD   g68<8,4,2>UD    { align1 2Q };
add3(16)        g117<1>D        g112<8,8,1>D    g110<8,8,1>D    -g115<1,1,1>D { align1 1H I@4 };
add(8)          g87<1>D         -g86<8,8,1>D    g61.1<8,4,2>D   { align1 1Q I@3 };
add(8)          g121<1>D        -g120<8,8,1>D   g68.1<8,4,2>D   { align1 2Q I@3 };
mov(8)          g32.1<2>UD      g117<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g34.1<2>UD      g118<4,4,1>UD                   { align1 2Q I@4 };
mov(8)          g9.1<2>UD       g87<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g11.1<2>UD      g121<4,4,1>UD                   { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g118UD          g32UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
mov(8)          g5<2>UD         g118<4,4,1>UD                   { align1 1Q $2.dst };
mov(8)          g7<2>UD         g119<4,4,1>UD                   { align1 2Q $2.dst };
mov(8)          g5.1<2>UD       g120<4,4,1>UD                   { align1 1Q @2 $2.dst };
mov(8)          g7.1<2>UD       g121<4,4,1>UD                   { align1 2Q @2 $2.dst };
fbl(1)          g46<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
shl(1)          a0<1>UD         g46<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g14<2>D         g[a0 160]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g14.1<2>D       g[a0 164]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g28.1<2>UD      g14.1<0,1,0>UD                  { align1 WE_all 1Q I@1 };
mov(8)          g28<2>UD        g14<0,1,0>UD                    { align1 WE_all 1Q I@1 };
mov(1)          g77<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g33UD    g28UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $1 };
mov(1)          f0<1>UD         g77<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g46<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
mov(1)          g15<2>D         g[a0 288]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g15.1<2>D       g[a0 292]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g29.1<2>UD      g15.1<0,1,0>UD                  { align1 WE_all 1Q I@2 };
mov(8)          g29<2>UD        g15<0,1,0>UD                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g29UD           g33UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $1 };

LABEL2:
endif(16)       JIP:  LABEL3                                    { align1 1H };

LABEL3:
shr(16)         g124<1>UD       g82<1,1,0>UD    0x00000008UD    { align1 1H compacted };
add(16)         g126<1>D        g80<1,1,0>D     3D              { align1 1H compacted };

LABEL5:
cmp.ge.f0.0(16) null<1>UD       g66<8,8,1>UD    g124<8,8,1>UD   { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
shl(16)         g5<1>D          g66<8,8,1>D     0x00000008UD    { align1 1H };
mov(8)          g10<1>UD        g63.1<8,4,2>UD                  { align1 1Q F@4 };
mov(8)          g11<1>UD        g70.1<8,4,2>UD                  { align1 2Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shr(16)         g7<1>UD         g5<1,1,0>UD     0x00000006UD    { align1 1H I@3 compacted };
add(8)          g89<1>D         g61<8,4,2>D     g5<1,1,0>D      { align1 1Q F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N F@5 };
add(8)          g46<1>D         g68<8,4,2>D     g6<1,1,0>D      { align1 2Q compacted };
add(16)         g20<1>D         g3<1,1,0>D      g7<1,1,0>D      { align1 1H @3 $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
mov(8)          g16<2>UD        g89<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@3 };
mov(8)          g18<2>UD        g46<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g22<1>UD        g20<1,1,0>UD    g3<1,1,0>UD     { align1 1H I@3 compacted };
shl(16)         g24<1>D         g20<8,8,1>D     0x00000003UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shr(16)         g28<1>UD        g20<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shl(16)         g26<1>D         -g22<8,8,1>D    0x00000003UD    { align1 1H I@3 };
add(8)          g88<1>D         g63<8,4,2>D     g24<1,1,0>D     { align1 1Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $2.src };
add(8)          g32<1>D         g70<8,4,2>D     g25<1,1,0>D     { align1 2Q I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(16)          g30<1>UD        g26<1,1,0>UD    g28<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(8)   g39<1>UD        g88<8,8,1>UD    g63<8,4,2>UD    { align1 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g33<2>UD        g88<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@4 };
cmp.l.f0.0(8)   g40<1>UD        g32<8,8,1>UD    g70<8,4,2>UD    { align1 2Q };
mov(8)          g35<2>UD        g32<4,4,1>UD                    { align1 2Q $2.src };
cmp.l.f0.0(8)   g90<1>UD        g89<8,8,1>UD    g61<8,4,2>UD    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
cmp.l.f0.0(8)   g47<1>UD        g46<8,8,1>UD    g68<8,4,2>UD    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add3(16)        g41<1>D         g10<8,8,1>D     g30<8,8,1>D     -g39<1,1,1>D { align1 1H };
add(8)          g91<1>D         -g90<8,8,1>D    g61.1<8,4,2>D   { align1 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@3 };
add(8)          g48<1>D         -g47<8,8,1>D    g68.1<8,4,2>D   { align1 2Q };
mov(8)          g33.1<2>UD      g41<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g35.1<2>UD      g42<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g16.1<2>UD      g91<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g18.1<2>UD      g48<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g45UD           g33UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
mov(8)          g12<2>UD        g45<4,4,1>UD                    { align1 1Q $2.dst };
mov(8)          g14<2>UD        g46<4,4,1>UD                    { align1 2Q $2.dst };
mov(8)          g12.1<2>UD      g47<4,4,1>UD                    { align1 1Q @2 $2.dst };
mov(8)          g14.1<2>UD      g48<4,4,1>UD                    { align1 2Q @2 $2.dst };
fbl(1)          g51<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N $3.src compacted };
shl(1)          a0<1>UD         g51<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g20<2>D         g[a0 384]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g20.1<2>D       g[a0 388]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g39.1<2>UD      g20.1<0,1,0>UD                  { align1 WE_all 1Q I@1 };
mov(8)          g39<2>UD        g20<0,1,0>UD                    { align1 WE_all 1Q I@1 };
mov(1)          g60<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g37UD    g39UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $4 };
mov(1)          f0<1>UD         g60<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g51<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g21<2>D         g[a0]<0,1,0>D                   { align1 WE_all 1N A@1 };
mov(1)          g21.1<2>D       g[a0 4]<0,1,0>D                 { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g45.1<2>UD      g21.1<0,1,0>UD                  { align1 WE_all 1Q I@2 };
mov(8)          g45<2>UD        g21<0,1,0>UD                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g45UD           g37UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $5 };
add(16)         g51<1>D         g5<1,1,0>D      64D             { align1 1H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
shr(16)         g53<1>UD        g51<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
add(8)          g95<1>D         g61<8,4,2>D     g51<1,1,0>D     { align1 1Q compacted };
add(8)          g89<1>D         g68<8,4,2>D     g52<1,1,0>D     { align1 2Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g72<1>D         g3<1,1,0>D      g53<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
mov(8)          g21<2>UD        g95<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@3 };
mov(8)          g23<2>UD        g89<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shl(16)         g76<1>D         g72<8,8,1>D     0x00000003UD    { align1 1H };
shr(16)         g80<1>UD        g72<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
add(8)          g94<1>D         g63<8,4,2>D     g76<1,1,0>D     { align1 1Q I@2 compacted };
add(8)          g84<1>D         g70<8,4,2>D     g77<1,1,0>D     { align1 2Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(8)          g39<2>UD        g94<4,4,1>UD                    { align1 1Q };
mov(8)          g41<2>UD        g84<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
cmp.l.f0.0(16)  g74<1>UD        g72<1,1,0>UD    g3<1,1,0>UD     { align1 1H compacted };
cmp.l.f0.0(8)   g85<1>UD        g94<8,8,1>UD    g63<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(8)   g86<1>UD        g84<8,8,1>UD    g70<8,4,2>UD    { align1 2Q };
cmp.l.f0.0(8)   g96<1>UD        g95<8,8,1>UD    g61<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(8)   g90<1>UD        g89<8,8,1>UD    g68<8,4,2>UD    { align1 2Q };
shl(16)         g78<1>D         -g74<8,8,1>D    0x00000003UD    { align1 1H I@5 };
add(8)          g97<1>D         -g96<8,8,1>D    g61.1<8,4,2>D   { align1 1Q I@3 };
add(8)          g91<1>D         -g90<8,8,1>D    g68.1<8,4,2>D   { align1 2Q I@3 };
or(16)          g82<1>UD        g78<1,1,0>UD    g80<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g21.1<2>UD      g97<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g23.1<2>UD      g91<4,4,1>UD                    { align1 2Q I@3 };
add3(16)        g87<1>D         g10<8,8,1>D     g82<8,8,1>D     -g85<1,1,1>D { align1 1H I@3 };
mov(8)          g39.1<2>UD      g87<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g41.1<2>UD      g88<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g88UD           g39UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $11 };
mov(8)          g17<2>UD        g88<4,4,1>UD                    { align1 1Q $11.dst };
mov(8)          g19<2>UD        g89<4,4,1>UD                    { align1 2Q $11.dst };
mov(8)          g17.1<2>UD      g90<4,4,1>UD                    { align1 1Q @2 $11.dst };
mov(8)          g19.1<2>UD      g91<4,4,1>UD                    { align1 2Q @2 $11.dst };
fbl(1)          g92<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
shl(1)          a0<1>UD         g92<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g25<2>D         g[a0 32]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g25.1<2>D       g[a0 36]<0,1,0>D                { align1 WE_all 1N };
mov(8)          g51.1<2>UD      g25.1<0,1,0>UD                  { align1 WE_all 1Q I@1 };
mov(8)          g51<2>UD        g25<0,1,0>UD                    { align1 WE_all 1Q I@1 };
mov(1)          g59<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g43UD    g51UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $12 };
mov(1)          f0<1>UD         g59<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g92<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g26<2>D         g[a0 160]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g26.1<2>D       g[a0 164]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g72.1<2>UD      g26.1<0,1,0>UD                  { align1 WE_all 1Q I@2 };
mov(8)          g72<2>UD        g26<0,1,0>UD                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g72UD           g43UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $6 };
add(16)         g94<1>D         g5<1,1,0>D      128D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shr(16)         g96<1>UD        g94<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
add(8)          g113<1>D        g61<8,4,2>D     g94<1,1,0>D     { align1 1Q compacted };
add(8)          g115<1>D        g68<8,4,2>D     g95<1,1,0>D     { align1 2Q compacted };
add(16)         g98<1>D         g3<1,1,0>D      g96<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
mov(8)          g26<2>UD        g113<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@3 };
mov(8)          g28<2>UD        g115<4,4,1>UD                   { align1 2Q };
shl(16)         g102<1>D        g98<8,8,1>D     0x00000003UD    { align1 1H I@3 };
shr(16)         g106<1>UD       g98<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
add(8)          g110<1>D        g70<8,4,2>D     g103<1,1,0>D    { align1 2Q I@2 compacted };
mov(8)          g47<2>UD        g110<4,4,1>UD                   { align1 2Q I@1 };
cmp.l.f0.0(16)  g100<1>UD       g98<1,1,0>UD    g3<1,1,0>UD     { align1 1H compacted };
cmp.l.f0.0(8)   g112<1>UD       g110<8,8,1>UD   g70<8,4,2>UD    { align1 2Q };
add(8)          g98<1>D         g63<8,4,2>D     g102<1,1,0>D    { align1 1Q I@6 compacted };
cmp.l.f0.0(8)   g116<1>UD       g115<8,8,1>UD   g68<8,4,2>UD    { align1 2Q };
shl(16)         g104<1>D        -g100<8,8,1>D   0x00000003UD    { align1 1H I@4 };
cmp.l.f0.0(8)   g111<1>UD       g98<8,8,1>UD    g63<8,4,2>UD    { align1 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g45<2>UD        g98<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g117<1>UD       g113<8,8,1>UD   g61<8,4,2>UD    { align1 1Q };
or(16)          g108<1>UD       g104<1,1,0>UD   g106<1,1,0>UD   { align1 1H I@4 compacted };
add(8)          g120<1>D        -g117<8,8,1>D   g61.1<8,4,2>D   { align1 1Q I@2 };
add(8)          g117<1>D        -g116<8,8,1>D   g68.1<8,4,2>D   { align1 2Q I@7 };
add3(16)        g113<1>D        g10<8,8,1>D     g108<8,8,1>D    -g111<1,1,1>D { align1 1H I@3 };
mov(8)          g26.1<2>UD      g120<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g28.1<2>UD      g117<4,4,1>UD                   { align1 2Q I@3 };
mov(8)          g45.1<2>UD      g113<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g47.1<2>UD      g114<4,4,1>UD                   { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g114UD          g45UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $13 };
mov(8)          g22<2>UD        g114<4,4,1>UD                   { align1 1Q $13.dst };
mov(8)          g24<2>UD        g115<4,4,1>UD                   { align1 2Q $13.dst };
mov(8)          g22.1<2>UD      g116<4,4,1>UD                   { align1 1Q @2 $13.dst };
mov(8)          g24.1<2>UD      g117<4,4,1>UD                   { align1 2Q @2 $13.dst };
fbl(1)          g118<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
shl(1)          a0<1>UD         g118<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g30<2>D         g[a0 192]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g30.1<2>D       g[a0 196]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g73.1<2>UD      g30.1<0,1,0>UD                  { align1 WE_all 1Q I@1 };
mov(8)          g73<2>UD        g30<0,1,0>UD                    { align1 WE_all 1Q I@1 };
mov(1)          g58<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g49UD    g73UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $7 };
mov(1)          f0<1>UD         g58<0,1,0>UD                    { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
shl(1)          a0<1>UD         g118<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g31<2>D         g[a0 320]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g31.1<2>D       g[a0 324]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g74.1<2>UD      g31.1<0,1,0>UD                  { align1 WE_all 1Q I@2 };
mov(8)          g74<2>UD        g31<0,1,0>UD                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g74UD           g49UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $9 };
add(16)         g120<1>D        g5<1,1,0>D      192D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shr(16)         g122<1>UD       g120<1,1,0>UD   0x00000006UD    { align1 1H I@1 compacted };
add(8)          g9<1>D          g61<8,4,2>D     g120<1,1,0>D    { align1 1Q compacted };
add(8)          g40<1>D         g68<8,4,2>D     g121<1,1,0>D    { align1 2Q $11.src compacted };
add(16)         g5<1>D          g3<1,1,0>D      g122<1,1,0>D    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
mov(8)          g31<2>UD        g9<4,4,1>UD                     { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@3 };
mov(8)          g33<2>UD        g40<4,4,1>UD                    { align1 2Q };
shl(16)         g12<1>D         g5<8,8,1>D      0x00000003UD    { align1 1H I@3 };
shr(16)         g16<1>UD        g5<1,1,0>UD     0x0000001dUD    { align1 1H compacted };
add(8)          g121<1>D        g63<8,4,2>D     g12<1,1,0>D     { align1 1Q I@2 compacted };
add(8)          g20<1>D         g70<8,4,2>D     g13<1,1,0>D     { align1 2Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(8)          g51<2>UD        g121<4,4,1>UD                   { align1 1Q };
mov(8)          g53<2>UD        g20<4,4,1>UD                    { align1 2Q I@2 };
cmp.l.f0.0(16)  g7<1>UD         g5<1,1,0>UD     g3<1,1,0>UD     { align1 1H compacted };
cmp.l.f0.0(8)   g21<1>UD        g121<8,8,1>UD   g63<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(8)   g22<1>UD        g20<8,8,1>UD    g70<8,4,2>UD    { align1 2Q };
cmp.l.f0.0(8)   g12<1>UD        g9<8,8,1>UD     g61<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(8)   g41<1>UD        g40<8,8,1>UD    g68<8,4,2>UD    { align1 2Q $11.src };
shl(16)         g14<1>D         -g7<8,8,1>D     0x00000003UD    { align1 1H I@5 };
add(8)          g13<1>D         -g12<8,8,1>D    g61.1<8,4,2>D   { align1 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $11.src };
add(8)          g42<1>D         -g41<8,8,1>D    g68.1<8,4,2>D   { align1 2Q I@3 };
or(16)          g18<1>UD        g14<1,1,0>UD    g16<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g31.1<2>UD      g13<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g33.1<2>UD      g42<4,4,1>UD                    { align1 2Q I@3 };
add3(16)        g23<1>D         g10<8,8,1>D     g18<8,8,1>D     -g21<1,1,1>D { align1 1H I@3 };
mov(8)          g51.1<2>UD      g23<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g53.1<2>UD      g24<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g39UD           g51UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $3 };
mov(8)          g27<2>UD        g39<4,4,1>UD                    { align1 1Q $3.dst };
mov(8)          g29<2>UD        g40<4,4,1>UD                    { align1 2Q $3.dst };
mov(8)          g27.1<2>UD      g41<4,4,1>UD                    { align1 1Q @2 $3.dst };
mov(8)          g29.1<2>UD      g42<4,4,1>UD                    { align1 2Q @2 $3.dst };
fbl(1)          g25<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
shl(1)          a0<1>UD         g25<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g39<2>D         g[a0 352]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g39.1<2>D       g[a0 356]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g75.1<2>UD      g39.1<0,1,0>UD                  { align1 WE_all 1Q I@1 };
mov(8)          g75<2>UD        g39<0,1,0>UD                    { align1 WE_all 1Q I@1 };
mov(1)          g57<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g55UD    g75UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $10 };
mov(1)          f0<1>UD         g57<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g25<0,1,0>UD    0x00000003UD    { align1 WE_all 1N $13.src };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g45<2>D         g[a0 480]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g45.1<2>D       g[a0 484]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g76.1<2>UD      g45.1<0,1,0>UD                  { align1 WE_all 1Q I@2 };
mov(8)          g76<2>UD        g45<0,1,0>UD                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g76UD           g55UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $8 };
add(16)         g66<1>D         g126<1,1,0>D    g66<1,1,0>D     { align1 1H compacted };

LABEL4:
while(16)       JIP:  LABEL5                                    { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q I@1 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_instance_ptrs_indirect_code[] = {
    0x80000065, 0x2e058220, 0x02000004, 0xffffffc0,
    0x80030061, 0x41054410, 0x00000000, 0x76543210,
    0xe22f1a40, 0x00012e03, 0x64411a40, 0x00804195,
    0x00040061, 0x2d050220, 0x00000024, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa002f0c, 0x00340000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x49050160, 0x00464105, 0x00000000,
    0x00041a61, 0x42050220, 0x00462d05, 0x00000000,
    0x00040069, 0x4b058660, 0x02462d05, 0x00000004,
    0x00041940, 0x00010660, 0x16464905, 0x00464b05,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x213d0061, 0x001102cc, 0x2a440061, 0x001102cc,
    0x00030061, 0x3f260aa0, 0x00000264, 0x00000000,
    0x00130061, 0x46260aa0, 0x00000264, 0x00000000,
    0x00030061, 0x1a260aa0, 0x000002a4, 0x00000000,
    0x00130061, 0x1c260aa0, 0x000002a4, 0x00000000,
    0x213d1661, 0x00110204, 0x2a441661, 0x00110204,
    0x213f1661, 0x00110244, 0x2a461661, 0x00110244,
    0x211a1661, 0x0011025c, 0x2a1c1661, 0x0011025c,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x01240000, 0xfb041a24, 0x000c0000,
    0x00042169, 0x48058660, 0x02460105, 0x00000006,
    0x01040022, 0x0001c060, 0x000000a8, 0x000000a8,
    0xa14c1640, 0x09ce3d03, 0xaa4d1540, 0x09ce4403,
    0xe74e1970, 0x09c04c03, 0x00033161, 0x1b060220,
    0x00344c05, 0x00000000, 0x00133161, 0x1d060220,
    0x00344d05, 0x00000000, 0x00031b40, 0x50052660,
    0x06464e05, 0x00443d26, 0x00131c40, 0x4f052660,
    0x06464f05, 0x00444426, 0x00031a61, 0x1b260220,
    0x00345005, 0x00000000, 0x00131a61, 0x1d260220,
    0x00344f05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb0c1b24, 0x00040114, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0xe0501b68, 0x00804803,
    0x00040065, 0x52058220, 0x02464805, 0xffffff00,
    0xa0591a40, 0x00205003, 0xa0541a40, 0x52204802,
    0xa05b1a40, 0x59202d02, 0x00041a65, 0x56058220,
    0x02465405, 0xffffffc0, 0x00041a61, 0x5d052660,
    0x00465b05, 0x00000000, 0xe0581a68, 0x00605603,
    0x00041970, 0x00010220, 0x52465d05, 0x00465805,
    0x01040022, 0x0001c060, 0x00000370, 0x00000370,
    0x00040069, 0x5e05a660, 0x02465b05, 0x00000006,
    0x00031461, 0x70050220, 0x00443f26, 0x00000000,
    0x00131361, 0x71050220, 0x00444626, 0x00000000,
    0xa0601b40, 0x5e005202, 0xe0621968, 0x00606003,
    0xa1551640, 0x600e3d02, 0xaa771540, 0x610e4402,
    0xa064b140, 0x62000302, 0x00031b61, 0x09060220,
    0x00345505, 0x00000000, 0x00131b61, 0x0b060220,
    0x00347705, 0x00000000, 0x27661b70, 0x03006403,
    0x00040069, 0x68058660, 0x02466405, 0x00000003,
    0xe06c0068, 0x01d06403, 0x00041b69, 0x6a05a660,
    0x02466605, 0x00000003, 0xa1541b40, 0x680e3f02,
    0xaa721c40, 0x690e4602, 0x206e1b66, 0x6c006a03,
    0x00031b70, 0x73050220, 0x52465405, 0x00443f06,
    0x00030061, 0x20060220, 0x00345405, 0x00000000,
    0x00131c70, 0x74050220, 0x52467205, 0x00444606,
    0x00130061, 0x22060220, 0x00347205, 0x00000000,
    0x00030070, 0x56050220, 0x52465505, 0x00443d06,
    0x00130070, 0x78050220, 0x52467705, 0x00444406,
    0x00041c52, 0x75040e68, 0x0e2e7005, 0x73056e05,
    0x00031b40, 0x57052660, 0x06465605, 0x00443d26,
    0x00131b40, 0x79052660, 0x06467805, 0x00444426,
    0x00031b61, 0x20260220, 0x00347505, 0x00000000,
    0x00131c61, 0x22260220, 0x00347605, 0x00000000,
    0x00031c61, 0x09260220, 0x00345705, 0x00000000,
    0x00131c61, 0x0b260220, 0x00347905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x76240000, 0xfb042024, 0x000c0000,
    0x00032261, 0x05060220, 0x00347605, 0x00000000,
    0x00132261, 0x07060220, 0x00347705, 0x00000000,
    0x0003a261, 0x05260220, 0x00347805, 0x00000000,
    0x0013a261, 0x07260220, 0x00347905, 0x00000000,
    0xe22e004c, 0x00114004, 0x80001969, 0x10018220,
    0x02002e04, 0x00000003, 0x80000961, 0x0e060660,
    0x00010280, 0x00000000, 0x80000061, 0x0e260660,
    0x00010290, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80031961, 0x1c260220,
    0x00000e24, 0x00000000, 0x80031961, 0x1c060220,
    0x00000e04, 0x00000000, 0xe24d0061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004131, 0x21140000, 0xfb001c0c, 0x00340000,
    0x80001a61, 0x30010220, 0x00004d04, 0x00000000,
    0x80001e69, 0x10018220, 0x02002e04, 0x00000003,
    0x80000961, 0x0f060660, 0x00010480, 0x00000000,
    0x80000061, 0x0f260660, 0x00010490, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80031a61, 0x1d260220, 0x00000f24, 0x00000000,
    0x80031961, 0x1d060220, 0x00000f04, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004131, 0x00000000, 0xfb081d0c, 0x00342114,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0xe07c0068, 0x00805203, 0xa07e0040, 0x00305003,
    0x00041a70, 0x00010220, 0x42464205, 0x00467c05,
    0x01040028, 0x0001c660, 0x00000f60, 0x00000f60,
    0x00040069, 0x05058660, 0x02464205, 0x00000008,
    0x00031461, 0x0a050220, 0x00443f26, 0x00000000,
    0x00131361, 0x0b050220, 0x00444626, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xe0071b68, 0x00600503, 0xa1591640, 0x050e3d02,
    0x80101501, 0x00000000, 0x00000000, 0x00000000,
    0xaa2e0040, 0x060e4402, 0xa014b140, 0x07000302,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x10060220, 0x00345905, 0x00000000,
    0x80101b01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x12060220, 0x00342e05, 0x00000000,
    0x27161b70, 0x03001403, 0x00040069, 0x18058660,
    0x02461405, 0x00000003, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xe01c0068, 0x01d01403,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00041b69, 0x1a05a660, 0x02461605, 0x00000003,
    0xa1581b40, 0x180e3f02, 0x80103201, 0x00000000,
    0x00000000, 0x00000000, 0xaa201c40, 0x190e4602,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x201e0066, 0x1c001a03, 0x00031b70, 0x27050220,
    0x52465805, 0x00443f06, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x21060220,
    0x00345805, 0x00000000, 0x80101c01, 0x00000000,
    0x00000000, 0x00000000, 0x00130070, 0x28050220,
    0x52462005, 0x00444606, 0x00133261, 0x23060220,
    0x00342005, 0x00000000, 0x00030070, 0x5a050220,
    0x52465905, 0x00443d06, 0x80103001, 0x00000000,
    0x00000000, 0x00000000, 0x00130070, 0x2f050220,
    0x52462e05, 0x00444406, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x29040e68,
    0x0e2e0a05, 0x27051e05, 0x00031b40, 0x5b052660,
    0x06465a05, 0x00443d26, 0x80101b01, 0x00000000,
    0x00000000, 0x00000000, 0x00130040, 0x30052660,
    0x06462f05, 0x00444426, 0x00031b61, 0x21260220,
    0x00342905, 0x00000000, 0x00131c61, 0x23260220,
    0x00342a05, 0x00000000, 0x00031c61, 0x10260220,
    0x00345b05, 0x00000000, 0x00131c61, 0x12260220,
    0x00343005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x2d240000,
    0xfb042124, 0x000c0000, 0x00032261, 0x0c060220,
    0x00342d05, 0x00000000, 0x00132261, 0x0e060220,
    0x00342e05, 0x00000000, 0x0003a261, 0x0c260220,
    0x00342f05, 0x00000000, 0x0013a261, 0x0e260220,
    0x00343005, 0x00000000, 0xe233334c, 0x00114004,
    0x80001969, 0x10018220, 0x02003304, 0x00000003,
    0x80000961, 0x14060660, 0x00010600, 0x00000000,
    0x80000061, 0x14260660, 0x00010610, 0x00000000,
    0x80031961, 0x27260220, 0x00001424, 0x00000000,
    0x80031961, 0x27060220, 0x00001404, 0x00000000,
    0xe23c0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004431, 0x25140000,
    0xfb00270c, 0x00340000, 0x80001a61, 0x30010220,
    0x00003c04, 0x00000000, 0x80001e69, 0x10018220,
    0x02003304, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x15060660,
    0x00010000, 0x00000000, 0x80000061, 0x15260660,
    0x00010010, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x2d260220,
    0x00001524, 0x00000000, 0x80031961, 0x2d060220,
    0x00001504, 0x00000000, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004531, 0x00000000,
    0xfb082d0c, 0x00342514, 0xa0333340, 0x04000503,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xe0351968, 0x00603303, 0xa15f0040, 0x330e3d02,
    0xaa590040, 0x340e4402, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0xa0481b40, 0x35000302,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x15060220, 0x00345f05, 0x00000000,
    0x80101b01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x17060220, 0x00345905, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x4c058660, 0x02464805, 0x00000003,
    0xe0500068, 0x01d04803, 0xa15e1a40, 0x4c0e3f02,
    0xaa541b40, 0x4d0e4602, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x27060220,
    0x00345e05, 0x00000000, 0x00131a61, 0x29060220,
    0x00345405, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x274a0070, 0x03004803,
    0x00030070, 0x55050220, 0x52465e05, 0x00443f06,
    0x00130070, 0x56050220, 0x52465405, 0x00444606,
    0x00030070, 0x60050220, 0x52465f05, 0x00443d06,
    0x00130070, 0x5a050220, 0x52465905, 0x00444406,
    0x00041d69, 0x4e05a660, 0x02464a05, 0x00000003,
    0x00031b40, 0x61052660, 0x06466005, 0x00443d26,
    0x00131b40, 0x5b052660, 0x06465a05, 0x00444426,
    0x20521b66, 0x50004e03, 0x00031b61, 0x15260220,
    0x00346105, 0x00000000, 0x00131b61, 0x17260220,
    0x00345b05, 0x00000000, 0x00041b52, 0x57040e68,
    0x0e2e0a05, 0x55055205, 0x00031961, 0x27260220,
    0x00345705, 0x00000000, 0x00131a61, 0x29260220,
    0x00345805, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x58240000,
    0xfb042724, 0x000c0000, 0x00032b61, 0x11060220,
    0x00345805, 0x00000000, 0x00132b61, 0x13060220,
    0x00345905, 0x00000000, 0x0003ab61, 0x11260220,
    0x00345a05, 0x00000000, 0x0013ab61, 0x13260220,
    0x00345b05, 0x00000000, 0xe25c004c, 0x00114004,
    0x80001969, 0x10018220, 0x02005c04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000200,
    0x80000961, 0x19060660, 0x00010080, 0x00000000,
    0x80000061, 0x19260660, 0x00010090, 0x00000000,
    0x80031961, 0x33260220, 0x00001924, 0x00000000,
    0x80031961, 0x33060220, 0x00001904, 0x00000000,
    0xe23b0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004c31, 0x2b140000,
    0xfb00330c, 0x00340000, 0x80001a61, 0x30010220,
    0x00003b04, 0x00000000, 0x80001e69, 0x10018220,
    0x02005c04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x1a060660,
    0x00010280, 0x00000000, 0x80000061, 0x1a260660,
    0x00010290, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x48260220,
    0x00001a24, 0x00000000, 0x80031961, 0x48060220,
    0x00001a04, 0x00000000, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004631, 0x00000000,
    0xfb08480c, 0x00342b14, 0xa05e0040, 0x08000503,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0xe0601968, 0x00605e03, 0xa1710040, 0x5e0e3d02,
    0xaa730040, 0x5f0e4402, 0xa0621b40, 0x60000302,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x1a060220, 0x00347105, 0x00000000,
    0x80101b01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x1c060220, 0x00347305, 0x00000000,
    0x00041b69, 0x66058660, 0x02466205, 0x00000003,
    0xe06a0068, 0x01d06203, 0xaa6e1a40, 0x670e4602,
    0x00131961, 0x2f060220, 0x00346e05, 0x00000000,
    0x27640070, 0x03006203, 0x00130070, 0x70050220,
    0x52466e05, 0x00444606, 0xa1621e40, 0x660e3f02,
    0x00130070, 0x74050220, 0x52467305, 0x00444406,
    0x00041c69, 0x6805a660, 0x02466405, 0x00000003,
    0x00031b70, 0x6f050220, 0x52466205, 0x00443f06,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x2d060220, 0x00346205, 0x00000000,
    0x00030070, 0x75050220, 0x52467105, 0x00443d06,
    0x206c1c66, 0x6a006803, 0x00031a40, 0x78052660,
    0x06467505, 0x00443d26, 0x00131f40, 0x75052660,
    0x06467405, 0x00444426, 0x00041b52, 0x71040e68,
    0x0e2e0a05, 0x6f056c05, 0x00031b61, 0x1a260220,
    0x00347805, 0x00000000, 0x00131b61, 0x1c260220,
    0x00347505, 0x00000000, 0x00031b61, 0x2d260220,
    0x00347105, 0x00000000, 0x00131c61, 0x2f260220,
    0x00347205, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044d31, 0x72240000,
    0xfb042d24, 0x000c0000, 0x00032d61, 0x16060220,
    0x00347205, 0x00000000, 0x00132d61, 0x18060220,
    0x00347305, 0x00000000, 0x0003ad61, 0x16260220,
    0x00347405, 0x00000000, 0x0013ad61, 0x18260220,
    0x00347505, 0x00000000, 0xe276004c, 0x00114004,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02007604, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000200,
    0x80000961, 0x1e060660, 0x00010300, 0x00000000,
    0x80000061, 0x1e260660, 0x00010310, 0x00000000,
    0x80031961, 0x49260220, 0x00001e24, 0x00000000,
    0x80031961, 0x49060220, 0x00001e04, 0x00000000,
    0xe23a0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004731, 0x31140000,
    0xfb00490c, 0x00340000, 0x80001a61, 0x30010220,
    0x00003a04, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80001e69, 0x10018220,
    0x02007604, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x1f060660,
    0x00010500, 0x00000000, 0x80000061, 0x1f260660,
    0x00010510, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x4a260220,
    0x00001f24, 0x00000000, 0x80031961, 0x4a060220,
    0x00001f04, 0x00000000, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004931, 0x00000000,
    0xfb084a0c, 0x00343114, 0xa0780040, 0x0c000503,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0xe07a1968, 0x00607803, 0xa1090040, 0x780e3d02,
    0xaa283b40, 0x790e4402, 0xa0051b40, 0x7a000302,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x1f060220, 0x00340905, 0x00000000,
    0x80101b01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x21060220, 0x00342805, 0x00000000,
    0x00041b69, 0x0c058660, 0x02460505, 0x00000003,
    0xe0100068, 0x01d00503, 0xa1791a40, 0x0c0e3f02,
    0xaa141b40, 0x0d0e4602, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x33060220,
    0x00347905, 0x00000000, 0x00131a61, 0x35060220,
    0x00341405, 0x00000000, 0x27070070, 0x03000503,
    0x00030070, 0x15050220, 0x52467905, 0x00443f06,
    0x00130070, 0x16050220, 0x52461405, 0x00444606,
    0x00030070, 0x0c050220, 0x52460905, 0x00443d06,
    0x00133b70, 0x29050220, 0x52462805, 0x00444406,
    0x00041d69, 0x0e05a660, 0x02460705, 0x00000003,
    0x00031b40, 0x0d052660, 0x06460c05, 0x00443d26,
    0x80103b01, 0x00000000, 0x00000000, 0x00000000,
    0x00131b40, 0x2a052660, 0x06462905, 0x00444426,
    0x20121b66, 0x10000e03, 0x00031b61, 0x1f260220,
    0x00340d05, 0x00000000, 0x00131b61, 0x21260220,
    0x00342a05, 0x00000000, 0x00041b52, 0x17040e68,
    0x0e2e0a05, 0x15051205, 0x00031961, 0x33260220,
    0x00341705, 0x00000000, 0x00131a61, 0x35260220,
    0x00341805, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x27240000,
    0xfb043324, 0x000c0000, 0x00032361, 0x1b060220,
    0x00342705, 0x00000000, 0x00132361, 0x1d060220,
    0x00342805, 0x00000000, 0x0003a361, 0x1b260220,
    0x00342905, 0x00000000, 0x0013a361, 0x1d260220,
    0x00342a05, 0x00000000, 0xe219004c, 0x00114004,
    0x80001969, 0x10018220, 0x02001904, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000200,
    0x80000961, 0x27060660, 0x00010580, 0x00000000,
    0x80000061, 0x27260660, 0x00010590, 0x00000000,
    0x80031961, 0x4b260220, 0x00002724, 0x00000000,
    0x80031961, 0x4b060220, 0x00002704, 0x00000000,
    0xe2390061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004a31, 0x37140000,
    0xfb004b0c, 0x00340000, 0x80001a61, 0x30010220,
    0x00003904, 0x00000000, 0x80003d69, 0x10018220,
    0x02001904, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x2d060660,
    0x00010780, 0x00000000, 0x80000061, 0x2d260660,
    0x00010790, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x4c260220,
    0x00002d24, 0x00000000, 0x80031961, 0x4c060220,
    0x00002d04, 0x00000000, 0x80002a01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004831, 0x00000000,
    0xfb084c0c, 0x00343714, 0xa0420040, 0x42007e02,
    0x00040027, 0x00014060, 0x00000000, 0xfffff090,
    0x80031961, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_misc_copy_instance_ptrs_indirect = {
   .prog_data = {
      .base.nr_params = 14,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 5584,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_misc_copy_instance_ptrs_indirect_relocs,
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
      .push.cross_thread.dwords = 14,
      .push.cross_thread.regs = 2,
      .push.cross_thread.size = 64,
   },
   .args_size = 24,
   .arg_count = 3,
   .args = gfx125_misc_copy_instance_ptrs_indirect_args,
   .code = gfx125_misc_copy_instance_ptrs_indirect_code,
};
const char *gfx125_misc_copy_instance_ptrs_indirect_sha1 = "c4f06d7c243faddfb00f1bfc5f6fe5dc933f6ce4";

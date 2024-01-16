#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_misc_copy_instances_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_misc_copy_instances_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g107<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g22<1>UD        g0.1<0,1,0>UD                   { align1 1H };
add(1)          g108<1>UD       g107<0,1,0>UD   0x00000000UD    { align1 WE_all 1N I@2 compacted };
mov(16)         g17<1>UD        g22<8,8,1>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g108UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g13.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g27.1<2>F       g2.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g15.1<2>F       g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g29.1<2>F       g2.3<0,1,0>F                    { align1 2Q };
mov(8)          g57.1<2>F       g2.5<0,1,0>F                    { align1 1Q };
mov(8)          g31.1<2>F       g2.5<0,1,0>F                    { align1 2Q };
mov(8)          g13<2>F         g2<0,1,0>F                      { align1 1Q F@6 compacted };
mov(8)          g27<2>F         g2<0,1,0>F                      { align1 2Q F@6 compacted };
mov(8)          g15<2>F         g2.2<0,1,0>F                    { align1 1Q F@6 compacted };
mov(8)          g29<2>F         g2.2<0,1,0>F                    { align1 2Q F@6 compacted };
mov(8)          g57<2>F         g2.4<0,1,0>F                    { align1 1Q F@6 compacted };
mov(8)          g31<2>F         g2.4<0,1,0>F                    { align1 2Q F@6 compacted };
shr(8)          g33<1>UD        g57<8,4,2>UD    0x00000008UD    { align1 1Q F@2 compacted };
and(8)          g35<1>UD        g57<8,4,2>UD    0xffffff00UD    { align1 1Q };
shr(8)          g34<1>UD        g31<8,4,2>UD    0x00000008UD    { align1 2Q F@1 compacted };
and(8)          g36<1>UD        g31<8,4,2>UD    0xffffff00UD    { align1 2Q };
add(8)          g37<1>D         g57<8,4,2>D     -g35<1,1,0>D    { align1 1Q I@3 compacted };
add(16)         g42<1>D         g33<1,1,0>D     2D              { align1 1H I@3 compacted };
add(8)          g38<1>D         g31<8,4,2>D     -g36<1,1,0>D    { align1 2Q I@3 compacted };
add(16)         g44<1>D         g22<1,1,0>D     -g42<1,1,0>D    { align1 1H I@2 compacted };
and(16)         g39<1>UD        g37<8,8,1>UD    0xffffffc0UD    { align1 1H I@2 };
mov(16)         g46<1>D         -g44<8,8,1>D                    { align1 1H I@2 };
shr(16)         g41<1>UD        g39<1,1,0>UD    0x00000006UD    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  null<1>UD       g46<8,8,1>UD    g41<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g47<1>D         -g44<8,8,1>D    0x00000006UD    { align1 1H };
or.z.f0.0(8)    null<1>UD       g15<8,4,2>UD    g15.1<8,4,2>UD  { align1 1Q F@4 };
or.z.f0.0(8)    null<1>UD       g29<8,4,2>UD    g29.1<8,4,2>UD  { align1 2Q F@3 };
add(16)         g49<1>D         g35<1,1,0>D     g47<1,1,0>D     { align1 1H I@3 compacted };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL1              { align1 1H };
shr(16)         g51<1>UD        g49<1,1,0>UD    0x00000006UD    { align1 1H I@2 compacted };
shl(16)         g53<1>D         g51<8,8,1>D     0x00000003UD    { align1 1H I@1 };
mov(8)          g37<2>UD        g53<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g39<2>UD        g54<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g37.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g39.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g54UD           g37UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
mov(8)          g19<2>UD        g54<4,4,1>UD                    { align1 1Q $1.dst };
mov(8)          g21<2>UD        g55<4,4,1>UD                    { align1 2Q $1.dst };
mov(8)          g19.1<2>UD      g56<4,4,1>UD                    { align1 1Q @2 $1.dst };
mov(8)          g21.1<2>UD      g57<4,4,1>UD                    { align1 2Q @2 $1.dst };
else(16)        JIP:  LABEL1          UIP:  LABEL1              { align1 1H };

LABEL2:
add(8)          g58<1>D         g15<8,4,2>D     g49<1,1,0>D     { align1 1Q I@2 compacted };
add(8)          g55<1>D         g29<8,4,2>D     g50<1,1,0>D     { align1 2Q I@3 compacted };
cmp.l.f0.0(8)   g59<1>UD        g58<8,8,1>UD    g15<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g56<1>UD        g55<8,8,1>UD    g29<8,4,2>UD    { align1 2Q I@2 };
mov(8)          g19<2>UD        g58<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g21<2>UD        g55<4,4,1>UD                    { align1 2Q I@7 };
add(8)          g60<1>D         -g59<8,8,1>D    g15.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g57<1>D         -g56<8,8,1>D    g29.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g19.1<2>UD      g60<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g21.1<2>UD      g57<4,4,1>UD                    { align1 2Q I@2 };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
add(8)          g65<1>D         g13<8,4,2>D     g49<1,1,0>D     { align1 1Q F@6 compacted };
add(8)          g58<1>D         g27<8,4,2>D     g50<1,1,0>D     { align1 2Q F@5 compacted };
cmp.l.f0.0(8)   g66<1>UD        g65<8,8,1>UD    g13<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g59<1>UD        g58<8,8,1>UD    g27<8,4,2>UD    { align1 2Q I@2 };
mov(8)          g61<2>UD        g65<4,4,1>UD                    { align1 1Q };
mov(8)          g63<2>UD        g58<4,4,1>UD                    { align1 2Q };
add(8)          g67<1>D         -g66<8,8,1>D    g13.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g60<1>D         -g59<8,8,1>D    g27.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g61.1<2>UD      g67<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g63.1<2>UD      g60<4,4,1>UD                    { align1 2Q I@2 };
fbl(1)          g23<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
shl(1)          a0<1>UD         g23<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g96<2>D         g[a0 96]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g96.1<2>D       g[a0 100]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g38.1<2>UD      g96.1<0,1,0>UD                  { align1 WE_all 1Q I@1 };
mov(8)          g38<2>UD        g96<0,1,0>UD                    { align1 WE_all 1Q I@1 };
mov(1)          g56<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g43UD    g38UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $2 };
mov(1)          f0<1>UD         g56<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g23<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g97<2>D         g[a0 416]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g97.1<2>D       g[a0 420]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g39.1<2>UD      g97.1<0,1,0>UD                  { align1 WE_all 1Q I@2 };
mov(8)          g39<2>UD        g97<0,1,0>UD                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g39UD           g43UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $0 };

LABEL0:
endif(16)       JIP:  LABEL3                                    { align1 1H };

LABEL3:
shr(16)         g64<1>UD        g35<1,1,0>UD    0x00000008UD    { align1 1H compacted };
or(8)           g66<1>UD        g15<8,4,2>UD    g15.1<8,4,2>UD  { align1 1Q F@4 };
or(8)           g67<1>UD        g29<8,4,2>UD    g29.1<8,4,2>UD  { align1 2Q F@3 };
add(16)         g68<1>D         g33<1,1,0>D     3D              { align1 1H compacted };

LABEL13:
cmp.ge.f0.0(16) null<1>UD       g17<8,8,1>UD    g64<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
shl(16)         g70<1>D         g17<8,8,1>D     0x00000008UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g66<8,8,1>D     0D              { align1 1H I@5 };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL5              { align1 1H };
shr(16)         g72<1>UD        g70<1,1,0>UD    0x00000006UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shl(16)         g74<1>D         g72<8,8,1>D     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g44<2>UD        g74<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
mov(8)          g46<2>UD        g75<4,4,1>UD                    { align1 2Q };
mov(8)          g44.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g46.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g75UD           g44UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $0 };
mov(8)          g20<2>UD        g75<4,4,1>UD                    { align1 1Q $0.dst };
mov(8)          g22<2>UD        g76<4,4,1>UD                    { align1 2Q $0.dst };
mov(8)          g20.1<2>UD      g77<4,4,1>UD                    { align1 1Q @2 $0.dst };
mov(8)          g22.1<2>UD      g78<4,4,1>UD                    { align1 2Q @2 $0.dst };
else(16)        JIP:  LABEL5          UIP:  LABEL5              { align1 1H };

LABEL6:
add(8)          g72<1>D         g15<8,4,2>D     g70<1,1,0>D     { align1 1Q I@3 compacted };
add(8)          g76<1>D         g29<8,4,2>D     g71<1,1,0>D     { align1 2Q I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
cmp.l.f0.0(8)   g73<1>UD        g72<8,8,1>UD    g15<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g77<1>UD        g76<8,8,1>UD    g29<8,4,2>UD    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(8)          g20<2>UD        g72<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@7 };
mov(8)          g22<2>UD        g76<4,4,1>UD                    { align1 2Q };
add(8)          g74<1>D         -g73<8,8,1>D    g15.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g78<1>D         -g77<8,8,1>D    g29.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g20.1<2>UD      g74<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g22.1<2>UD      g78<4,4,1>UD                    { align1 2Q I@2 };

LABEL5:
endif(16)       JIP:  LABEL4                                    { align1 1H };
add(8)          g75<1>D         g13<8,4,2>D     g70<1,1,0>D     { align1 1Q F@6 compacted };
add(8)          g79<1>D         g27<8,4,2>D     g71<1,1,0>D     { align1 2Q F@5 compacted };
cmp.l.f0.0(8)   g76<1>UD        g75<8,8,1>UD    g13<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g80<1>UD        g79<8,8,1>UD    g27<8,4,2>UD    { align1 2Q I@2 };
mov(8)          g82<2>UD        g75<4,4,1>UD                    { align1 1Q };
mov(8)          g84<2>UD        g79<4,4,1>UD                    { align1 2Q };
add(8)          g77<1>D         -g76<8,8,1>D    g13.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g81<1>D         -g80<8,8,1>D    g27.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g82.1<2>UD      g77<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g84.1<2>UD      g81<4,4,1>UD                    { align1 2Q I@2 };
fbl(1)          g24<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
shl(1)          a0<1>UD         g24<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g98<2>D         g[a0 128]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g98.1<2>D       g[a0 132]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g45.1<2>UD      g98.1<0,1,0>UD                  { align1 WE_all 1Q I@1 };
mov(8)          g45<2>UD        g98<0,1,0>UD                    { align1 WE_all 1Q I@1 };
mov(1)          g12<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0.any16h) send(1) g1UD     g45UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
mov(1)          f0<1>UD         g12<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g24<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g99<2>D         g[a0 64]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g99.1<2>D       g[a0 68]<0,1,0>D                { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g46.1<2>UD      g99.1<0,1,0>UD                  { align1 WE_all 1Q I@2 };
mov(8)          g46<2>UD        g99<0,1,0>UD                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g46UD           g1UD            0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $0 };
add(16)         g85<1>D         g70<1,1,0>D     64D             { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g66<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
shr(16)         g87<1>UD        g85<1,1,0>UD    0x00000006UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shl(16)         g89<1>D         g87<8,8,1>D     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(8)          g47<2>UD        g89<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
mov(8)          g49<2>UD        g90<4,4,1>UD                    { align1 2Q };
mov(8)          g47.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g49.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g90UD           g47UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $0 };
mov(8)          g21<2>UD        g90<4,4,1>UD                    { align1 1Q $0.dst };
mov(8)          g23<2>UD        g91<4,4,1>UD                    { align1 2Q $0.dst };
mov(8)          g21.1<2>UD      g92<4,4,1>UD                    { align1 1Q @2 $0.dst };
mov(8)          g23.1<2>UD      g93<4,4,1>UD                    { align1 2Q @2 $0.dst };
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
add(8)          g78<1>D         g15<8,4,2>D     g85<1,1,0>D     { align1 1Q I@3 compacted };
add(8)          g91<1>D         g29<8,4,2>D     g86<1,1,0>D     { align1 2Q I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
cmp.l.f0.0(8)   g79<1>UD        g78<8,8,1>UD    g15<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g92<1>UD        g91<8,8,1>UD    g29<8,4,2>UD    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(8)          g21<2>UD        g78<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@7 };
mov(8)          g23<2>UD        g91<4,4,1>UD                    { align1 2Q };
add(8)          g80<1>D         -g79<8,8,1>D    g15.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g93<1>D         -g92<8,8,1>D    g29.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g21.1<2>UD      g80<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g23.1<2>UD      g93<4,4,1>UD                    { align1 2Q I@2 };

LABEL7:
endif(16)       JIP:  LABEL4                                    { align1 1H };
add(8)          g81<1>D         g13<8,4,2>D     g85<1,1,0>D     { align1 1Q compacted };
add(8)          g94<1>D         g27<8,4,2>D     g86<1,1,0>D     { align1 2Q compacted };
cmp.l.f0.0(8)   g82<1>UD        g81<8,8,1>UD    g13<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g95<1>UD        g94<8,8,1>UD    g27<8,4,2>UD    { align1 2Q I@2 };
mov(8)          g97<2>UD        g81<4,4,1>UD                    { align1 1Q };
mov(8)          g99<2>UD        g94<4,4,1>UD                    { align1 2Q };
add(8)          g83<1>D         -g82<8,8,1>D    g13.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g96<1>D         -g95<8,8,1>D    g27.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g97.1<2>UD      g83<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g99.1<2>UD      g96<4,4,1>UD                    { align1 2Q I@2 };
fbl(1)          g25<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
shl(1)          a0<1>UD         g25<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g101<2>D        g[a0 160]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g101.1<2>D      g[a0 164]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g48.1<2>UD      g101.1<0,1,0>UD                 { align1 WE_all 1Q I@1 };
mov(8)          g48<2>UD        g101<0,1,0>UD                   { align1 WE_all 1Q I@1 };
mov(1)          g11<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g3UD     g48UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
mov(1)          f0<1>UD         g11<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g25<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000c00UD    { align1 WE_all 1N A@1 };
mov(1)          g102<2>D        g[a0 32]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g102.1<2>D      g[a0 36]<0,1,0>D                { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g49.1<2>UD      g102.1<0,1,0>UD                 { align1 WE_all 1Q I@2 };
mov(8)          g49<2>UD        g102<0,1,0>UD                   { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g49UD           g3UD            0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $0 };
add(16)         g100<1>D        g70<1,1,0>D     128D            { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g66<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL9              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shr(16)         g102<1>UD       g100<1,1,0>UD   0x00000006UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g104<1>D        g102<8,8,1>D    0x00000003UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(8)          g50<2>UD        g104<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
mov(8)          g52<2>UD        g105<4,4,1>UD                   { align1 2Q };
mov(8)          g50.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g52.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g105UD          g50UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $0 };
mov(8)          g22<2>UD        g105<4,4,1>UD                   { align1 1Q $0.dst };
mov(8)          g24<2>UD        g106<4,4,1>UD                   { align1 2Q $0.dst };
mov(8)          g22.1<2>UD      g107<4,4,1>UD                   { align1 1Q @2 $0.dst };
mov(8)          g24.1<2>UD      g108<4,4,1>UD                   { align1 2Q @2 $0.dst };
else(16)        JIP:  LABEL9          UIP:  LABEL9              { align1 1H };

LABEL10:
add(8)          g84<1>D         g15<8,4,2>D     g100<1,1,0>D    { align1 1Q I@3 compacted };
add(8)          g106<1>D        g29<8,4,2>D     g101<1,1,0>D    { align1 2Q I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
cmp.l.f0.0(8)   g85<1>UD        g84<8,8,1>UD    g15<8,4,2>UD    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
cmp.l.f0.0(8)   g107<1>UD       g106<8,8,1>UD   g29<8,4,2>UD    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(8)          g22<2>UD        g84<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@7 };
mov(8)          g24<2>UD        g106<4,4,1>UD                   { align1 2Q };
add(8)          g86<1>D         -g85<8,8,1>D    g15.1<8,4,2>D   { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@4 };
add(8)          g108<1>D        -g107<8,8,1>D   g29.1<8,4,2>D   { align1 2Q };
mov(8)          g22.1<2>UD      g86<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g24.1<2>UD      g108<4,4,1>UD                   { align1 2Q I@2 };

LABEL9:
endif(16)       JIP:  LABEL4                                    { align1 1H };
add(8)          g87<1>D         g13<8,4,2>D     g100<1,1,0>D    { align1 1Q compacted };
add(8)          g109<1>D        g27<8,4,2>D     g101<1,1,0>D    { align1 2Q compacted };
cmp.l.f0.0(8)   g88<1>UD        g87<8,8,1>UD    g13<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g110<1>UD       g109<8,8,1>UD   g27<8,4,2>UD    { align1 2Q I@2 };
mov(8)          g112<2>UD       g87<4,4,1>UD                    { align1 1Q };
mov(8)          g114<2>UD       g109<4,4,1>UD                   { align1 2Q };
add(8)          g89<1>D         -g88<8,8,1>D    g13.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g111<1>D        -g110<8,8,1>D   g27.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g112.1<2>UD     g89<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g114.1<2>UD     g111<4,4,1>UD                   { align1 2Q I@2 };
fbl(1)          g31<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
shl(1)          a0<1>UD         g31<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g103<2>D        g[a0 192]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g103.1<2>D      g[a0 196]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g51.1<2>UD      g103.1<0,1,0>UD                 { align1 WE_all 1Q I@1 };
mov(8)          g51<2>UD        g103<0,1,0>UD                   { align1 WE_all 1Q I@1 };
mov(1)          g10<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g5UD     g51UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
mov(1)          f0<1>UD         g10<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g31<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000e00UD    { align1 WE_all 1N A@1 };
mov(1)          g104<2>D        g[a0]<0,1,0>D                   { align1 WE_all 1N A@1 };
mov(1)          g104.1<2>D      g[a0 4]<0,1,0>D                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g52.1<2>UD      g104.1<0,1,0>UD                 { align1 WE_all 1Q I@2 };
mov(8)          g52<2>UD        g104<0,1,0>UD                   { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g52UD           g5UD            0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $0 };
add(16)         g115<1>D        g70<1,1,0>D     192D            { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g66<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
shr(16)         g117<1>UD       g115<1,1,0>UD   0x00000006UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shl(16)         g119<1>D        g117<8,8,1>D    0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(8)          g53<2>UD        g119<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
mov(8)          g55<2>UD        g120<4,4,1>UD                   { align1 2Q };
mov(8)          g53.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g55.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g120UD          g53UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $0 };
mov(8)          g23<2>UD        g120<4,4,1>UD                   { align1 1Q $0.dst };
mov(8)          g25<2>UD        g121<4,4,1>UD                   { align1 2Q $0.dst };
mov(8)          g23.1<2>UD      g122<4,4,1>UD                   { align1 1Q @2 $0.dst };
mov(8)          g25.1<2>UD      g123<4,4,1>UD                   { align1 2Q @2 $0.dst };
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
add(8)          g90<1>D         g15<8,4,2>D     g115<1,1,0>D    { align1 1Q I@3 compacted };
add(8)          g121<1>D        g29<8,4,2>D     g116<1,1,0>D    { align1 2Q I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
cmp.l.f0.0(8)   g91<1>UD        g90<8,8,1>UD    g15<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g122<1>UD       g121<8,8,1>UD   g29<8,4,2>UD    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(8)          g23<2>UD        g90<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@7 };
mov(8)          g25<2>UD        g121<4,4,1>UD                   { align1 2Q };
add(8)          g92<1>D         -g91<8,8,1>D    g15.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g123<1>D        -g122<8,8,1>D   g29.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g23.1<2>UD      g92<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g25.1<2>UD      g123<4,4,1>UD                   { align1 2Q I@2 };

LABEL11:
endif(16)       JIP:  LABEL4                                    { align1 1H };
add(8)          g93<1>D         g13<8,4,2>D     g115<1,1,0>D    { align1 1Q compacted };
add(8)          g124<1>D        g27<8,4,2>D     g116<1,1,0>D    { align1 2Q compacted };
cmp.l.f0.0(8)   g94<1>UD        g93<8,8,1>UD    g13<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g125<1>UD       g124<8,8,1>UD   g27<8,4,2>UD    { align1 2Q I@2 };
mov(8)          g19<2>UD        g93<4,4,1>UD                    { align1 1Q };
mov(8)          g21<2>UD        g124<4,4,1>UD                   { align1 2Q };
add(8)          g95<1>D         -g94<8,8,1>D    g13.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g126<1>D        -g125<8,8,1>D   g27.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g19.1<2>UD      g95<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g21.1<2>UD      g126<4,4,1>UD                   { align1 2Q I@2 };
fbl(1)          g32<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
shl(1)          a0<1>UD         g32<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g105<2>D        g[a0 224]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g105.1<2>D      g[a0 228]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g54.1<2>UD      g105.1<0,1,0>UD                 { align1 WE_all 1Q I@1 };
mov(8)          g54<2>UD        g105<0,1,0>UD                   { align1 WE_all 1Q I@1 };
mov(1)          g9<1>UD         f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g7UD     g54UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
mov(1)          f0<1>UD         g9<0,1,0>UD                     { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g32<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g106<2>D        g[a0 96]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g106.1<2>D      g[a0 100]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g55.1<2>UD      g106.1<0,1,0>UD                 { align1 WE_all 1Q I@2 };
mov(8)          g55<2>UD        g106<0,1,0>UD                   { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g55UD           g7UD            0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $0 };
add(16)         g17<1>D         g68<1,1,0>D     g17<1,1,0>D     { align1 1H compacted };

LABEL4:
while(16)       JIP:  LABEL13                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_instances_code[] = {
    0x80000065, 0x6b058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x16050220, 0x00000024, 0x00000000,
    0xe26c1a40, 0x00016b03, 0x00041a61, 0x11050220,
    0x00461605, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa006c0c, 0x00340000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x210d0061, 0x001102cc,
    0x2a1b0061, 0x001102cc, 0x00030061, 0x0f260aa0,
    0x00000264, 0x00000000, 0x00130061, 0x1d260aa0,
    0x00000264, 0x00000000, 0x00030061, 0x39260aa0,
    0x000002a4, 0x00000000, 0x00130061, 0x1f260aa0,
    0x000002a4, 0x00000000, 0x210d1661, 0x00110204,
    0x2a1b1661, 0x00110204, 0x210f1661, 0x00110244,
    0x2a1d1661, 0x00110244, 0x21391661, 0x0011025c,
    0x2a1f1661, 0x0011025c, 0xe1211268, 0x008e3903,
    0x00030065, 0x23058220, 0x02443906, 0xffffff00,
    0xea221168, 0x008e1f03, 0x00130065, 0x24058220,
    0x02441f06, 0xffffff00, 0xa1251b40, 0x232e3902,
    0xa02a1b40, 0x00202103, 0xaa261b40, 0x242e1f02,
    0xa02c1a40, 0x2a201602, 0x00041a65, 0x27058220,
    0x02462505, 0xffffffc0, 0x00041a61, 0x2e052660,
    0x00462c05, 0x00000000, 0xe0291a68, 0x00602703,
    0x00041970, 0x00010220, 0x52462e05, 0x00462905,
    0x01040022, 0x0001c060, 0x000003d0, 0x000003d0,
    0x00040069, 0x2f05a660, 0x02462c05, 0x00000006,
    0x00031466, 0x00010220, 0x12440f06, 0x00440f26,
    0x00131366, 0x00010220, 0x12441d06, 0x00441d26,
    0xa0311b40, 0x2f002302, 0x01040022, 0x0001c060,
    0x00000168, 0x000000d8, 0xe0331a68, 0x00603103,
    0x00041969, 0x35058660, 0x02463305, 0x00000003,
    0x00031961, 0x25060220, 0x00343505, 0x00000000,
    0x00131a61, 0x27060220, 0x00343605, 0x00000000,
    0x00031a61, 0x25264220, 0x00000000, 0x00000000,
    0x00131a61, 0x27264220, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x36240000, 0xfb042524, 0x000c0000,
    0x00032161, 0x13060220, 0x00343605, 0x00000000,
    0x00132161, 0x15060220, 0x00343705, 0x00000000,
    0x0003a161, 0x13260220, 0x00343805, 0x00000000,
    0x0013a161, 0x15260220, 0x00343905, 0x00000000,
    0x00040024, 0x0001c060, 0x000000a0, 0x000000a0,
    0xa13a1a40, 0x310e0f02, 0xaa371b40, 0x320e1d02,
    0x00031a70, 0x3b050220, 0x52463a05, 0x00440f06,
    0x00131a70, 0x38050220, 0x52463705, 0x00441d06,
    0x00031f61, 0x13060220, 0x00343a05, 0x00000000,
    0x00131f61, 0x15060220, 0x00343705, 0x00000000,
    0x00031c40, 0x3c052660, 0x06463b05, 0x00440f26,
    0x00131c40, 0x39052660, 0x06463805, 0x00441d26,
    0x00031a61, 0x13260220, 0x00343c05, 0x00000000,
    0x00131a61, 0x15260220, 0x00343905, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000220,
    0xa1411640, 0x310e0d02, 0xaa3a1540, 0x320e1b02,
    0x00031a70, 0x42050220, 0x52464105, 0x00440d06,
    0x00131a70, 0x3b050220, 0x52463a05, 0x00441b06,
    0x00030061, 0x3d060220, 0x00344105, 0x00000000,
    0x00130061, 0x3f060220, 0x00343a05, 0x00000000,
    0x00031c40, 0x43052660, 0x06464205, 0x00440d26,
    0x00131c40, 0x3c052660, 0x06463b05, 0x00441b26,
    0x00031a61, 0x3d260220, 0x00344305, 0x00000000,
    0x00131a61, 0x3f260220, 0x00343c05, 0x00000000,
    0xe217004c, 0x00114004, 0x80001969, 0x10018220,
    0x02001704, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x60060660,
    0x00010180, 0x00000000, 0x80000061, 0x60260660,
    0x00010190, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80031961, 0x26260220,
    0x00006024, 0x00000000, 0x80031961, 0x26060220,
    0x00006004, 0x00000000, 0xe2380061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004231, 0x2b140000, 0xfb00260c, 0x00340000,
    0x80001a61, 0x30010220, 0x00003804, 0x00000000,
    0x80001e69, 0x10018220, 0x02001704, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000600,
    0x80000961, 0x61060660, 0x00010680, 0x00000000,
    0x80000061, 0x61260660, 0x00010690, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80031a61, 0x27260220, 0x00006124, 0x00000000,
    0x80031961, 0x27060220, 0x00006104, 0x00000000,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004031, 0x00000000, 0xfb08270c, 0x00342b14,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0xe0400068, 0x00802303, 0x00031466, 0x42050220,
    0x02440f06, 0x00440f26, 0x00131366, 0x43050220,
    0x02441d06, 0x00441d26, 0xa0440040, 0x00302103,
    0x00041a70, 0x00010220, 0x42461105, 0x00464005,
    0x01040028, 0x0001c660, 0x000010e0, 0x000010e0,
    0x00040069, 0x46058660, 0x02461105, 0x00000008,
    0x00041d70, 0x00018660, 0x16464205, 0x00000000,
    0x01040022, 0x0001c060, 0x000001d8, 0x00000118,
    0xe0481b68, 0x00604603, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00041969, 0x4a058660,
    0x02464805, 0x00000003, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x2c060220,
    0x00344a05, 0x00000000, 0x80103001, 0x00000000,
    0x00000000, 0x00000000, 0x80101a01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x2e060220,
    0x00344b05, 0x00000000, 0x00031a61, 0x2c264220,
    0x00000000, 0x00000000, 0x00131a61, 0x2e264220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x4b240000,
    0xfb042c24, 0x000c0000, 0x00032061, 0x14060220,
    0x00344b05, 0x00000000, 0x00132061, 0x16060220,
    0x00344c05, 0x00000000, 0x0003a061, 0x14260220,
    0x00344d05, 0x00000000, 0x0013a061, 0x16260220,
    0x00344e05, 0x00000000, 0x00040024, 0x0001c060,
    0x000000d0, 0x000000d0, 0xa1481b40, 0x460e0f02,
    0xaa4c1c40, 0x470e1d02, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00031a70, 0x49050220,
    0x52464805, 0x00440f06, 0x00131a70, 0x4d050220,
    0x52464c05, 0x00441d06, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x14060220,
    0x00344805, 0x00000000, 0x80101f01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x16060220,
    0x00344c05, 0x00000000, 0x00031c40, 0x4a052660,
    0x06464905, 0x00440f26, 0x00131c40, 0x4e052660,
    0x06464d05, 0x00441d26, 0x00031a61, 0x14260220,
    0x00344a05, 0x00000000, 0x00131a61, 0x16260220,
    0x00344e05, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000ed8, 0xa14b1640, 0x460e0d02,
    0xaa4f1540, 0x470e1b02, 0x00031a70, 0x4c050220,
    0x52464b05, 0x00440d06, 0x00131a70, 0x50050220,
    0x52464f05, 0x00441b06, 0x00030061, 0x52060220,
    0x00344b05, 0x00000000, 0x00130061, 0x54060220,
    0x00344f05, 0x00000000, 0x00031c40, 0x4d052660,
    0x06464c05, 0x00440d26, 0x00131c40, 0x51052660,
    0x06465005, 0x00441b26, 0x00031a61, 0x52260220,
    0x00344d05, 0x00000000, 0x00131a61, 0x54260220,
    0x00345105, 0x00000000, 0xe218004c, 0x00114004,
    0x80001969, 0x10018220, 0x02001804, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000200,
    0x80000961, 0x62060660, 0x00010200, 0x00000000,
    0x80000061, 0x62260660, 0x00010210, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x2d260220, 0x00006224, 0x00000000,
    0x80031961, 0x2d060220, 0x00006204, 0x00000000,
    0xe20c0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004031, 0x01140000,
    0xfb002d0c, 0x00340000, 0x80001a61, 0x30010220,
    0x00000c04, 0x00000000, 0x80001e69, 0x10018220,
    0x02001804, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000a00, 0x80000961, 0x63060660,
    0x00010100, 0x00000000, 0x80000061, 0x63260660,
    0x00010110, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x2e260220,
    0x00006324, 0x00000000, 0x80031961, 0x2e060220,
    0x00006304, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004031, 0x00000000,
    0xfb082e0c, 0x00340114, 0xa0550040, 0x04004603,
    0x00040070, 0x00018660, 0x16464205, 0x00000000,
    0x01040022, 0x0001c060, 0x000001f8, 0x00000138,
    0xe0571b68, 0x00605503, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00041969, 0x59058660,
    0x02465705, 0x00000003, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x2f060220,
    0x00345905, 0x00000000, 0x80103001, 0x00000000,
    0x00000000, 0x00000000, 0x80101a01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x31060220,
    0x00345a05, 0x00000000, 0x00031a61, 0x2f264220,
    0x00000000, 0x00000000, 0x00131a61, 0x31264220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x5a240000,
    0xfb042f24, 0x000c0000, 0x00032061, 0x15060220,
    0x00345a05, 0x00000000, 0x00132061, 0x17060220,
    0x00345b05, 0x00000000, 0x0003a061, 0x15260220,
    0x00345c05, 0x00000000, 0x0013a061, 0x17260220,
    0x00345d05, 0x00000000, 0x00040024, 0x0001c060,
    0x000000d0, 0x000000d0, 0xa14e1b40, 0x550e0f02,
    0xaa5b1c40, 0x560e1d02, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00031a70, 0x4f050220,
    0x52464e05, 0x00440f06, 0x00131a70, 0x5c050220,
    0x52465b05, 0x00441d06, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x15060220,
    0x00344e05, 0x00000000, 0x80101f01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x17060220,
    0x00345b05, 0x00000000, 0x00031c40, 0x50052660,
    0x06464f05, 0x00440f26, 0x00131c40, 0x5d052660,
    0x06465c05, 0x00441d26, 0x00031a61, 0x15260220,
    0x00345005, 0x00000000, 0x00131a61, 0x17260220,
    0x00345d05, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000ab8, 0xa1510040, 0x550e0d02,
    0xaa5e0040, 0x560e1b02, 0x00031a70, 0x52050220,
    0x52465105, 0x00440d06, 0x00131a70, 0x5f050220,
    0x52465e05, 0x00441b06, 0x00030061, 0x61060220,
    0x00345105, 0x00000000, 0x00130061, 0x63060220,
    0x00345e05, 0x00000000, 0x00031c40, 0x53052660,
    0x06465205, 0x00440d26, 0x00131c40, 0x60052660,
    0x06465f05, 0x00441b26, 0x00031a61, 0x61260220,
    0x00345305, 0x00000000, 0x00131a61, 0x63260220,
    0x00346005, 0x00000000, 0xe219004c, 0x00114004,
    0x80001969, 0x10018220, 0x02001904, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000200,
    0x80000961, 0x65060660, 0x00010280, 0x00000000,
    0x80000061, 0x65260660, 0x00010290, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x30260220, 0x00006524, 0x00000000,
    0x80031961, 0x30060220, 0x00006504, 0x00000000,
    0xe20b0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004031, 0x03140000,
    0xfb00300c, 0x00340000, 0x80001a61, 0x30010220,
    0x00000b04, 0x00000000, 0x80001e69, 0x10018220,
    0x02001904, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000c00, 0x80000961, 0x66060660,
    0x00010080, 0x00000000, 0x80000061, 0x66260660,
    0x00010090, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x31260220,
    0x00006624, 0x00000000, 0x80031961, 0x31060220,
    0x00006604, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004031, 0x00000000,
    0xfb08310c, 0x00340314, 0xa0640040, 0x08004603,
    0x00040070, 0x00018660, 0x16464205, 0x00000000,
    0x01040022, 0x0001c060, 0x00000258, 0x00000168,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xe0660068, 0x00606403, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x68058660,
    0x02466605, 0x00000003, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x32060220,
    0x00346805, 0x00000000, 0x80103001, 0x00000000,
    0x00000000, 0x00000000, 0x80101a01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x34060220,
    0x00346905, 0x00000000, 0x00031a61, 0x32264220,
    0x00000000, 0x00000000, 0x00131a61, 0x34264220,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x69240000,
    0xfb043224, 0x000c0000, 0x00032061, 0x16060220,
    0x00346905, 0x00000000, 0x00132061, 0x18060220,
    0x00346a05, 0x00000000, 0x0003a061, 0x16260220,
    0x00346b05, 0x00000000, 0x0013a061, 0x18260220,
    0x00346c05, 0x00000000, 0x00040024, 0x0001c060,
    0x00000100, 0x00000100, 0xa1541b40, 0x640e0f02,
    0xaa6a1c40, 0x650e1d02, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00031a70, 0x55050220,
    0x52465405, 0x00440f06, 0x80101a01, 0x00000000,
    0x00000000, 0x00000000, 0x00130070, 0x6b050220,
    0x52466a05, 0x00441d06, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x16060220,
    0x00345405, 0x00000000, 0x80101f01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x18060220,
    0x00346a05, 0x00000000, 0x00031c40, 0x56052660,
    0x06465505, 0x00440f26, 0x80103001, 0x00000000,
    0x00000000, 0x00000000, 0x80101c01, 0x00000000,
    0x00000000, 0x00000000, 0x00130040, 0x6c052660,
    0x06466b05, 0x00441d26, 0x00031a61, 0x16260220,
    0x00345605, 0x00000000, 0x00131a61, 0x18260220,
    0x00346c05, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000638, 0xa1570040, 0x640e0d02,
    0xaa6d0040, 0x650e1b02, 0x00031a70, 0x58050220,
    0x52465705, 0x00440d06, 0x00131a70, 0x6e050220,
    0x52466d05, 0x00441b06, 0x00030061, 0x70060220,
    0x00345705, 0x00000000, 0x00130061, 0x72060220,
    0x00346d05, 0x00000000, 0x00031c40, 0x59052660,
    0x06465805, 0x00440d26, 0x00131c40, 0x6f052660,
    0x06466e05, 0x00441b26, 0x00031a61, 0x70260220,
    0x00345905, 0x00000000, 0x00131a61, 0x72260220,
    0x00346f05, 0x00000000, 0xe21f004c, 0x00114004,
    0x80001969, 0x10018220, 0x02001f04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000200,
    0x80000961, 0x67060660, 0x00010300, 0x00000000,
    0x80000061, 0x67260660, 0x00010310, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x33260220, 0x00006724, 0x00000000,
    0x80031961, 0x33060220, 0x00006704, 0x00000000,
    0xe20a0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004031, 0x05140000,
    0xfb00330c, 0x00340000, 0x80001a61, 0x30010220,
    0x00000a04, 0x00000000, 0x80001e69, 0x10018220,
    0x02001f04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000e00, 0x80000961, 0x68060660,
    0x00010000, 0x00000000, 0x80000061, 0x68260660,
    0x00010010, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x34260220,
    0x00006824, 0x00000000, 0x80031961, 0x34060220,
    0x00006804, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004031, 0x00000000,
    0xfb08340c, 0x00340514, 0xa0730040, 0x0c004603,
    0x00040070, 0x00018660, 0x16464205, 0x00000000,
    0x01040022, 0x0001c060, 0x000001f8, 0x00000138,
    0xe0751b68, 0x00607303, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00041969, 0x77058660,
    0x02467505, 0x00000003, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x35060220,
    0x00347705, 0x00000000, 0x80103001, 0x00000000,
    0x00000000, 0x00000000, 0x80101a01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x37060220,
    0x00347805, 0x00000000, 0x00031a61, 0x35264220,
    0x00000000, 0x00000000, 0x00131a61, 0x37264220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x78240000,
    0xfb043524, 0x000c0000, 0x00032061, 0x17060220,
    0x00347805, 0x00000000, 0x00132061, 0x19060220,
    0x00347905, 0x00000000, 0x0003a061, 0x17260220,
    0x00347a05, 0x00000000, 0x0013a061, 0x19260220,
    0x00347b05, 0x00000000, 0x00040024, 0x0001c060,
    0x000000d0, 0x000000d0, 0xa15a1b40, 0x730e0f02,
    0xaa791c40, 0x740e1d02, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00031a70, 0x5b050220,
    0x52465a05, 0x00440f06, 0x00131a70, 0x7a050220,
    0x52467905, 0x00441d06, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x17060220,
    0x00345a05, 0x00000000, 0x80101f01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x19060220,
    0x00347905, 0x00000000, 0x00031c40, 0x5c052660,
    0x06465b05, 0x00440f26, 0x00131c40, 0x7b052660,
    0x06467a05, 0x00441d26, 0x00031a61, 0x17260220,
    0x00345c05, 0x00000000, 0x00131a61, 0x19260220,
    0x00347b05, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000218, 0xa15d0040, 0x730e0d02,
    0xaa7c0040, 0x740e1b02, 0x00031a70, 0x5e050220,
    0x52465d05, 0x00440d06, 0x00131a70, 0x7d050220,
    0x52467c05, 0x00441b06, 0x00030061, 0x13060220,
    0x00345d05, 0x00000000, 0x00130061, 0x15060220,
    0x00347c05, 0x00000000, 0x00031c40, 0x5f052660,
    0x06465e05, 0x00440d26, 0x00131c40, 0x7e052660,
    0x06467d05, 0x00441b26, 0x00031a61, 0x13260220,
    0x00345f05, 0x00000000, 0x00131a61, 0x15260220,
    0x00347e05, 0x00000000, 0xe220004c, 0x00114004,
    0x80001969, 0x10018220, 0x02002004, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000200,
    0x80000961, 0x69060660, 0x00010380, 0x00000000,
    0x80000061, 0x69260660, 0x00010390, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x36260220, 0x00006924, 0x00000000,
    0x80031961, 0x36060220, 0x00006904, 0x00000000,
    0xe2090061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004031, 0x07140000,
    0xfb00360c, 0x00340000, 0x80001a61, 0x30010220,
    0x00000904, 0x00000000, 0x80001e69, 0x10018220,
    0x02002004, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x6a060660,
    0x00010180, 0x00000000, 0x80000061, 0x6a260660,
    0x00010190, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x37260220,
    0x00006a24, 0x00000000, 0x80031961, 0x37060220,
    0x00006a04, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004031, 0x00000000,
    0xfb08370c, 0x00340714, 0xa0110040, 0x11004402,
    0x00040027, 0x00014060, 0x00000000, 0xffffef10,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_misc_copy_instances = {
   .prog_data = {
      .base.nr_params = 14,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 5792,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_misc_copy_instances_relocs,
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
   .args = gfx125_misc_copy_instances_args,
   .code = gfx125_misc_copy_instances_code,
};
const char *gfx125_misc_copy_instances_sha1 = "75672acdd0049f0ac9a36da34a3f5c1a502f438a";

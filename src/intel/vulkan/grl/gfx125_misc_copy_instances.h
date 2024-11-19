#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_misc_copy_instances_relocs[] = {
};
static const u_printf_info gfx125_misc_copy_instances_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_misc_copy_instances_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g108<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g42<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g108UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(16)         g30<1>UD        g42<8,8,1>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
shr(16)         g13<1>UD        g2.4<0,1,0>UD   0x00000008UD    { align1 1H compacted };
and(16)         g15<1>UD        g2.4<0,1,0>UD   0xffffff00UD    { align1 1H };
add3(16)        g23<1>D         65534W          -g13<8,8,1>D    g42<1,1,1>D { align1 1H I@2 };
add(16)         g17<1>D         g2.4<0,1,0>D    -g15<1,1,0>D    { align1 1H I@2 compacted };
mov(16)         g25<1>D         -g23<8,8,1>D                    { align1 1H I@2 };
and(16)         g19<1>UD        g17<8,8,1>UD    0xffffffc0UD    { align1 1H I@2 };
shr(16)         g21<1>UD        g19<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g25<8,8,1>UD    g21<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g26<1>D         -g23<8,8,1>D    0x00000006UD    { align1 1H };
or.z.f0.0(16)   null<1>UD       g2.2<0,1,0>UD   g2.3<0,1,0>UD   { align1 1H };
add(16)         g28<1>D         g15<1,1,0>D     g26<1,1,0>D     { align1 1H I@2 compacted };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL1              { align1 1H };
shr(16)         g11<1>UD        g28<1,1,0>UD    0x00000006UD    { align1 1H I@2 compacted };
shl(16)         g32<1>D         g11<8,8,1>D     0x00000003UD    { align1 1H I@1 };
mov(8)          g43<2>UD        g32<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g45<2>UD        g33<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g43.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g45.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g33UD           g43UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(8)          g3<2>UD         g33<4,4,1>UD                    { align1 1Q $1.dst };
mov(8)          g5<2>UD         g34<4,4,1>UD                    { align1 2Q $1.dst };
mov(8)          g3.1<2>UD       g35<4,4,1>UD                    { align1 1Q @2 $1.dst };
mov(8)          g5.1<2>UD       g36<4,4,1>UD                    { align1 2Q @2 $1.dst };
else(16)        JIP:  LABEL1          UIP:  LABEL1              { align1 1H };

LABEL2:
add(16)         g34<1>D         g2.2<0,1,0>D    g28<1,1,0>D     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g36<1>UD        g34<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g3<2>UD         g34<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g5<2>UD         g35<4,4,1>UD                    { align1 2Q I@5 };
add(16)         g38<1>D         -g36<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g3.1<2>UD       g38<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g5.1<2>UD       g39<4,4,1>UD                    { align1 2Q I@2 };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
add(16)         g39<1>D         g2<0,1,0>D      g28<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g41<1>UD        g39<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g45<2>UD        g39<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g47<2>UD        g40<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g43<1>D         -g41<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g45.1<2>UD      g43<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g47.1<2>UD      g44<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g100<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g100<1>UD       g100<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g49<1>UD        g100<0,1,0>UD                   { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g49<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g51<2>D         g[a0 96]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g51.1<2>D       g[a0 100]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g55.1<2>D       g51.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g55<2>D         g51<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g99<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g60UD    g55UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $2 };
mov(1)          f0<1>UD         g99<0,1,0>UD                    { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
shl(1)          a0<1>UD         g49<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000400UD    { align1 WE_all 1N A@1 };
mov(1)          g52<2>D         g[a0 416]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g52.1<2>D       g[a0 420]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g56.1<2>D       g52.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g56<2>D         g52<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g56UD           g60UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $3 };

LABEL0:
endif(16)       JIP:  LABEL3                                    { align1 1H };

LABEL3:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shr(16)         g53<1>UD        g15<1,1,0>UD    0x00000008UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
or(16)          g55<1>UD        g2.2<0,1,0>UD   g2.3<0,1,0>UD   { align1 1H };

LABEL13:
cmp.ge.f0.0(16) null<1>UD       g30<8,8,1>UD    g53<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
shl(16)         g57<1>D         g30<8,8,1>D     0x00000008UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g55<8,8,1>D     0D              { align1 1H I@4 };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL5              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
shr(16)         g59<1>UD        g57<1,1,0>UD    0x00000006UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
shl(16)         g61<1>D         g59<8,8,1>D     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g66<2>UD        g61<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
mov(8)          g68<2>UD        g62<4,4,1>UD                    { align1 2Q };
mov(8)          g66.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g68.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g62UD           g66UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
mov(8)          g4<2>UD         g62<4,4,1>UD                    { align1 1Q $4.dst };
mov(8)          g6<2>UD         g63<4,4,1>UD                    { align1 2Q $4.dst };
mov(8)          g4.1<2>UD       g64<4,4,1>UD                    { align1 1Q @2 $4.dst };
mov(8)          g6.1<2>UD       g65<4,4,1>UD                    { align1 2Q @2 $4.dst };
else(16)        JIP:  LABEL5          UIP:  LABEL5              { align1 1H };

LABEL6:
add(16)         g63<1>D         g2.2<0,1,0>D    g57<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g65<1>UD        g63<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
mov(8)          g4<2>UD         g63<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@5 };
mov(8)          g6<2>UD         g64<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g67<1>D         -g65<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g4.1<2>UD       g67<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g6.1<2>UD       g68<4,4,1>UD                    { align1 2Q I@2 };

LABEL5:
endif(16)       JIP:  LABEL4                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g68<1>D         g2<0,1,0>D      g57<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g70<1>UD        g68<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g74<2>UD        g68<4,4,1>UD                    { align1 1Q };
mov(8)          g76<2>UD        g69<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g72<1>D         -g70<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g74.1<2>UD      g72<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g76.1<2>UD      g73<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g101<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g101<1>UD       g101<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g78<1>UD        g101<0,1,0>UD                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
shl(1)          a0<1>UD         g78<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g80<2>D         g[a0 128]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g80.1<2>D       g[a0 132]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g67.1<2>D       g80.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g67<2>D         g80<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g98<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g72UD    g67UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $4 };
mov(1)          f0<1>UD         g98<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g78<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g81<2>D         g[a0 320]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g81.1<2>D       g[a0 324]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g68.1<2>D       g81.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g68<2>D         g81<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g68UD           g72UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g82<1>D         g57<1,1,0>D     64D             { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g55<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shr(16)         g84<1>UD        g82<1,1,0>UD    0x00000006UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
shl(16)         g86<1>D         g84<8,8,1>D     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g73<2>UD        g86<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g75<2>UD        g87<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g73.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g75.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g87UD           g73UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
mov(8)          g5<2>UD         g87<4,4,1>UD                    { align1 1Q $4.dst };
mov(8)          g7<2>UD         g88<4,4,1>UD                    { align1 2Q $4.dst };
mov(8)          g5.1<2>UD       g89<4,4,1>UD                    { align1 1Q @2 $4.dst };
mov(8)          g7.1<2>UD       g90<4,4,1>UD                    { align1 2Q @2 $4.dst };
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g88<1>D         g2.2<0,1,0>D    g82<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g90<1>UD        g88<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
mov(8)          g5<2>UD         g88<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@5 };
mov(8)          g7<2>UD         g89<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g92<1>D         -g90<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g5.1<2>UD       g92<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g7.1<2>UD       g93<4,4,1>UD                    { align1 2Q I@2 };

LABEL7:
endif(16)       JIP:  LABEL4                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g93<1>D         g2<0,1,0>D      g82<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g95<1>UD        g93<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g99<2>UD        g93<4,4,1>UD                    { align1 1Q };
mov(8)          g101<2>UD       g94<4,4,1>UD                    { align1 2Q };
add(16)         g97<1>D         -g95<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g99.1<2>UD      g97<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g101.1<2>UD     g98<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g105<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g105<1>UD       g105<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g103<1>UD       g105<0,1,0>UD                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shl(1)          a0<1>UD         g103<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g105<2>D        g[a0 160]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g105.1<2>D      g[a0 164]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g74.1<2>D       g105.1<0,1,0>D                  { align1 WE_all 1Q I@1 };
mov(8)          g74<2>D         g105<0,1,0>D                    { align1 WE_all 1Q I@1 };
mov(1)          g97<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g79UD    g74UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $5 };
mov(1)          f0<1>UD         g97<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g103<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000c00UD    { align1 WE_all 1N A@1 };
mov(1)          g106<2>D        g[a0 96]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g106.1<2>D      g[a0 100]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g75.1<2>D       g106.1<0,1,0>D                  { align1 WE_all 1Q I@2 };
mov(8)          g75<2>D         g106<0,1,0>D                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g75UD           g79UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g107<1>D        g57<1,1,0>D     128D            { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g55<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL9              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shr(16)         g109<1>UD       g107<1,1,0>UD   0x00000006UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shl(16)         g111<1>D        g109<8,8,1>D    0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g80<2>UD        g111<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g82<2>UD        g112<4,4,1>UD                   { align1 2Q I@2 };
mov(8)          g80.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g82.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g112UD          g80UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
mov(8)          g6<2>UD         g112<4,4,1>UD                   { align1 1Q $6.dst };
mov(8)          g8<2>UD         g113<4,4,1>UD                   { align1 2Q $6.dst };
mov(8)          g6.1<2>UD       g114<4,4,1>UD                   { align1 1Q @2 $6.dst };
mov(8)          g8.1<2>UD       g115<4,4,1>UD                   { align1 2Q @2 $6.dst };
else(16)        JIP:  LABEL9          UIP:  LABEL9              { align1 1H };

LABEL10:
add(16)         g113<1>D        g2.2<0,1,0>D    g107<1,1,0>D    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g115<1>UD       g113<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
mov(8)          g6<2>UD         g113<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@5 };
mov(8)          g8<2>UD         g114<4,4,1>UD                   { align1 2Q };
add(16)         g117<1>D        -g115<1,1,0>D   g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g6.1<2>UD       g117<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g8.1<2>UD       g118<4,4,1>UD                   { align1 2Q I@2 };

LABEL9:
endif(16)       JIP:  LABEL4                                    { align1 1H };
add(16)         g118<1>D        g2<0,1,0>D      g107<1,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g120<1>UD       g118<1,1,0>UD   g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g124<2>UD       g118<4,4,1>UD                   { align1 1Q };
mov(8)          g126<2>UD       g119<4,4,1>UD                   { align1 2Q };
add(16)         g122<1>D        -g120<1,1,0>D   g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g124.1<2>UD     g122<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g126.1<2>UD     g123<4,4,1>UD                   { align1 2Q I@2 };
mov(1)          g106<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g106<1>UD       g106<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g3<1>UD         g106<0,1,0>UD                   { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g3<0,1,0>UD     0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g15<2>D         g[a0 192]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g15.1<2>D       g[a0 196]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g81.1<2>D       g15.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g81<2>D         g15<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g96<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g86UD    g81UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $7 };
mov(1)          f0<1>UD         g96<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g3<0,1,0>UD     0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000e00UD    { align1 WE_all 1N A@1 };
mov(1)          g16<2>D         g[a0 384]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g16.1<2>D       g[a0 388]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g82.1<2>D       g16.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g82<2>D         g16<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g82UD           g86UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g17<1>D         g57<1,1,0>D     192D            { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g55<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shr(16)         g19<1>UD        g17<1,1,0>UD    0x00000006UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
shl(16)         g21<1>D         g19<8,8,1>D     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g87<2>UD        g21<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g89<2>UD        g22<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g87.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g89.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g22UD           g87UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
mov(8)          g7<2>UD         g22<4,4,1>UD                    { align1 1Q $8.dst };
mov(8)          g9<2>UD         g23<4,4,1>UD                    { align1 2Q $8.dst };
mov(8)          g7.1<2>UD       g24<4,4,1>UD                    { align1 1Q @2 $8.dst };
mov(8)          g9.1<2>UD       g25<4,4,1>UD                    { align1 2Q @2 $8.dst };
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
add(16)         g23<1>D         g2.2<0,1,0>D    g17<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g25<1>UD        g23<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
mov(8)          g7<2>UD         g23<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@5 };
mov(8)          g9<2>UD         g24<4,4,1>UD                    { align1 2Q };
add(16)         g27<1>D         -g25<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g7.1<2>UD       g27<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g9.1<2>UD       g28<4,4,1>UD                    { align1 2Q I@2 };

LABEL11:
endif(16)       JIP:  LABEL4                                    { align1 1H };
add(16)         g28<1>D         g2<0,1,0>D      g17<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g11<1>UD        g28<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g34<2>UD        g28<4,4,1>UD                    { align1 1Q };
mov(8)          g36<2>UD        g29<4,4,1>UD                    { align1 2Q };
add(16)         g32<1>D         -g11<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g34.1<2>UD      g32<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g36.1<2>UD      g33<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g107<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g107<1>UD       g107<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g38<1>UD        g107<0,1,0>UD                   { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g38<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g40<2>D         g[a0 224]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g40.1<2>D       g[a0 228]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g88.1<2>D       g40.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g88<2>D         g40<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g95<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g93UD    g88UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $9 };
mov(1)          f0<1>UD         g95<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g38<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000400UD    { align1 WE_all 1N A@1 };
mov(1)          g41<2>D         g[a0 64]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g41.1<2>D       g[a0 68]<0,1,0>D                { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g89.1<2>D       g41.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g89<2>D         g41<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g89UD           g93UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $10 };
add3(16)        g30<1>D         0x0003UW        g13<8,8,1>D     g30<1,1,1>D { align1 1H };

LABEL4:
while(16)       JIP:  LABEL13                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_instances_code[] = {
    0x80000065, 0x6c058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x2a050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa006c0c, 0x00340000,
    0x00041961, 0x1e050220, 0x00462a05, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xe00d0068, 0x0081025b, 0x00040065, 0x0f058220,
    0x02000284, 0xffffff00, 0x00041a52, 0x17044560,
    0x0e8efffe, 0x2a050d05, 0xa0111a40, 0x0f21025a,
    0x00041a61, 0x19052660, 0x00461705, 0x00000000,
    0x00041a65, 0x13058220, 0x02461105, 0xffffffc0,
    0xe0151968, 0x00601303, 0x00041970, 0x00010220,
    0x52461905, 0x00461505, 0x01040022, 0x0001c060,
    0x00000350, 0x00000350, 0x00040069, 0x1a05a660,
    0x02461705, 0x00000006, 0x00040066, 0x00010220,
    0x12000244, 0x00000264, 0xa01c1a40, 0x1a000f02,
    0x01040022, 0x0001c060, 0x00000130, 0x000000d8,
    0xe00b1a68, 0x00601c03, 0x00041969, 0x20058660,
    0x02460b05, 0x00000003, 0x00031961, 0x2b060220,
    0x00342005, 0x00000000, 0x00131a61, 0x2d060220,
    0x00342105, 0x00000000, 0x00031a61, 0x2b264220,
    0x00000000, 0x00000000, 0x00131a61, 0x2d264220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x21240000,
    0xfb042b24, 0x000c0000, 0x00032161, 0x03060220,
    0x00342105, 0x00000000, 0x00132161, 0x05060220,
    0x00342205, 0x00000000, 0x0003a161, 0x03260220,
    0x00342305, 0x00000000, 0x0013a161, 0x05260220,
    0x00342405, 0x00000000, 0x00040024, 0x0001c060,
    0x00000068, 0x00000068, 0xa0221a40, 0x1c010242,
    0x27241970, 0x0210222b, 0x00031d61, 0x03060220,
    0x00342205, 0x00000000, 0x00131d61, 0x05060220,
    0x00342305, 0x00000000, 0xa0261b40, 0x0212241a,
    0x00031961, 0x03260220, 0x00342605, 0x00000000,
    0x00131a61, 0x05260220, 0x00342705, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000001e8,
    0xa0270040, 0x1c010202, 0x27291970, 0x02102703,
    0x00033161, 0x2d060220, 0x00342705, 0x00000000,
    0x00130061, 0x2f060220, 0x00342805, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa02b1b40, 0x02122912, 0x00031961, 0x2d260220,
    0x00342b05, 0x00000000, 0x00131a61, 0x2f260220,
    0x00342c05, 0x00000000, 0xe2640961, 0x00114004,
    0x80000965, 0x64058220, 0x02006404, 0xffffffff,
    0x8000194c, 0x31050220, 0x00006404, 0x00000000,
    0x80001969, 0x10018220, 0x02003104, 0x00000003,
    0x80000961, 0x33060660, 0x00010180, 0x00000000,
    0x80000061, 0x33260660, 0x00010190, 0x00000000,
    0x80031961, 0x37260660, 0x00003324, 0x00000000,
    0x80031961, 0x37060660, 0x00003304, 0x00000000,
    0xe2630061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004231, 0x3c140000,
    0xfb00370c, 0x00340000, 0x80001a61, 0x30010220,
    0x00006304, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80001e69, 0x10018220,
    0x02003104, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000400, 0x80000961, 0x34060660,
    0x00010680, 0x00000000, 0x80000061, 0x34260660,
    0x00010690, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x38260660,
    0x00003424, 0x00000000, 0x80031961, 0x38060660,
    0x00003404, 0x00000000, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004331, 0x00000000,
    0xfb08380c, 0x00343c14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0xe0350068, 0x00800f03,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0x00040066, 0x37050220, 0x02000244, 0x00000264,
    0x00041a70, 0x00010220, 0x42461e05, 0x00463505,
    0x01040028, 0x0001c660, 0x00001048, 0x00001048,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x39058660, 0x02461e05, 0x00000008,
    0x00041c70, 0x00018660, 0x16463705, 0x00000000,
    0x01040022, 0x0001c060, 0x000001e0, 0x00000138,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xe03b1b68, 0x00603903, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00041969, 0x3d058660,
    0x02463b05, 0x00000003, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x42060220,
    0x00343d05, 0x00000000, 0x80103401, 0x00000000,
    0x00000000, 0x00000000, 0x80101a01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x44060220,
    0x00343e05, 0x00000000, 0x00031a61, 0x42264220,
    0x00000000, 0x00000000, 0x00131a61, 0x44264220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x3e240000,
    0xfb044224, 0x000c0000, 0x00032461, 0x04060220,
    0x00343e05, 0x00000000, 0x00132461, 0x06060220,
    0x00343f05, 0x00000000, 0x0003a461, 0x04260220,
    0x00344005, 0x00000000, 0x0013a461, 0x06260220,
    0x00344105, 0x00000000, 0x00040024, 0x0001c060,
    0x000000b8, 0x000000b8, 0xa03f1b40, 0x39010242,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x27411970, 0x02103f2b, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x04060220,
    0x00343f05, 0x00000000, 0x80101d01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x06060220,
    0x00344005, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xa0431b40, 0x0212411a,
    0x00031961, 0x04260220, 0x00344305, 0x00000000,
    0x00131a61, 0x06260220, 0x00344405, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000e28,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa0440040, 0x39010202, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x27461970, 0x02104403,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x4a060220, 0x00344405, 0x00000000,
    0x00130061, 0x4c060220, 0x00344505, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa0481b40, 0x02124612, 0x00031961, 0x4a260220,
    0x00344805, 0x00000000, 0x00131a61, 0x4c260220,
    0x00344905, 0x00000000, 0xe2650961, 0x00114004,
    0x80000965, 0x65058220, 0x02006504, 0xffffffff,
    0x8000194c, 0x4e050220, 0x00006504, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02004e04, 0x00000003,
    0x80000961, 0x50060660, 0x00010200, 0x00000000,
    0x80000061, 0x50260660, 0x00010210, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x43260660, 0x00005024, 0x00000000,
    0x80031961, 0x43060660, 0x00005004, 0x00000000,
    0xe2620061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004431, 0x48140000,
    0xfb00430c, 0x00340000, 0x80001a61, 0x30010220,
    0x00006204, 0x00000000, 0x80001e69, 0x10018220,
    0x02004e04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000800, 0x80000961, 0x51060660,
    0x00010500, 0x00000000, 0x80000061, 0x51260660,
    0x00010510, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x44260660,
    0x00005124, 0x00000000, 0x80031961, 0x44060660,
    0x00005104, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004431, 0x00000000,
    0xfb08440c, 0x00344814, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0520040, 0x04003903,
    0x00040070, 0x00018660, 0x16463705, 0x00000000,
    0x01040022, 0x0001c060, 0x00000200, 0x00000138,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xe0540068, 0x00605203, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00041969, 0x56058660,
    0x02465405, 0x00000003, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x49060220,
    0x00345605, 0x00000000, 0x00131a61, 0x4b060220,
    0x00345705, 0x00000000, 0x00031a61, 0x49264220,
    0x00000000, 0x00000000, 0x00131a61, 0x4b264220,
    0x00000000, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x57240000,
    0xfb044924, 0x000c0000, 0x00032461, 0x05060220,
    0x00345705, 0x00000000, 0x00132461, 0x07060220,
    0x00345805, 0x00000000, 0x0003a461, 0x05260220,
    0x00345905, 0x00000000, 0x0013a461, 0x07260220,
    0x00345a05, 0x00000000, 0x00040024, 0x0001c060,
    0x000000d8, 0x000000d8, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0xa0581b40, 0x52010242,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x275a0070, 0x0210582b, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x05060220,
    0x00345805, 0x00000000, 0x80101d01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x07060220,
    0x00345905, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0xa05c1b40, 0x02125a1a,
    0x00031961, 0x05260220, 0x00345c05, 0x00000000,
    0x00131a61, 0x07260220, 0x00345d05, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000009a8,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0xa05d0040, 0x52010202, 0x275f1970, 0x02105d03,
    0x00030061, 0x63060220, 0x00345d05, 0x00000000,
    0x00130061, 0x65060220, 0x00345e05, 0x00000000,
    0xa0611b40, 0x02125f12, 0x00031961, 0x63260220,
    0x00346105, 0x00000000, 0x00131a61, 0x65260220,
    0x00346205, 0x00000000, 0xe2690961, 0x00114004,
    0x80000965, 0x69058220, 0x02006904, 0xffffffff,
    0x8000194c, 0x67050220, 0x00006904, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02006704, 0x00000003,
    0x80000961, 0x69060660, 0x00010280, 0x00000000,
    0x80000061, 0x69260660, 0x00010290, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x4a260660, 0x00006924, 0x00000000,
    0x80031961, 0x4a060660, 0x00006904, 0x00000000,
    0xe2610061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004531, 0x4f140000,
    0xfb004a0c, 0x00340000, 0x80001a61, 0x30010220,
    0x00006104, 0x00000000, 0x80001e69, 0x10018220,
    0x02006704, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000c00, 0x80000961, 0x6a060660,
    0x00010180, 0x00000000, 0x80000061, 0x6a260660,
    0x00010190, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x4b260660,
    0x00006a24, 0x00000000, 0x80031961, 0x4b060660,
    0x00006a04, 0x00000000, 0x80002501, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004631, 0x00000000,
    0xfb084b0c, 0x00344f14, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa06b0040, 0x08003903,
    0x00040070, 0x00018660, 0x16463705, 0x00000000,
    0x01040022, 0x0001c060, 0x00000190, 0x00000108,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xe06d0068, 0x00606b03, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00041969, 0x6f058660,
    0x02466d05, 0x00000003, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x50060220,
    0x00346f05, 0x00000000, 0x00131a61, 0x52060220,
    0x00347005, 0x00000000, 0x00031a61, 0x50264220,
    0x00000000, 0x00000000, 0x00131a61, 0x52264220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x70240000,
    0xfb045024, 0x000c0000, 0x00032661, 0x06060220,
    0x00347005, 0x00000000, 0x00132661, 0x08060220,
    0x00347105, 0x00000000, 0x0003a661, 0x06260220,
    0x00347205, 0x00000000, 0x0013a661, 0x08260220,
    0x00347305, 0x00000000, 0x00040024, 0x0001c060,
    0x00000098, 0x00000098, 0xa0711b40, 0x6b010242,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x27731970, 0x0210712b, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x06060220,
    0x00347105, 0x00000000, 0x80101d01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x08060220,
    0x00347205, 0x00000000, 0xa0751b40, 0x0212731a,
    0x00031961, 0x06260220, 0x00347505, 0x00000000,
    0x00131a61, 0x08260220, 0x00347605, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000005c8,
    0xa0760040, 0x6b010202, 0x27781970, 0x02107603,
    0x00030061, 0x7c060220, 0x00347605, 0x00000000,
    0x00130061, 0x7e060220, 0x00347705, 0x00000000,
    0xa07a1b40, 0x02127812, 0x00031961, 0x7c260220,
    0x00347a05, 0x00000000, 0x00131a61, 0x7e260220,
    0x00347b05, 0x00000000, 0xe26a0961, 0x00114004,
    0x80000965, 0x6a058220, 0x02006a04, 0xffffffff,
    0x8000194c, 0x03050220, 0x00006a04, 0x00000000,
    0x80001969, 0x10018220, 0x02000304, 0x00000003,
    0x80000961, 0x0f060660, 0x00010300, 0x00000000,
    0x80000061, 0x0f260660, 0x00010310, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x51260660, 0x00000f24, 0x00000000,
    0x80031961, 0x51060660, 0x00000f04, 0x00000000,
    0xe2600061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004731, 0x56140000,
    0xfb00510c, 0x00340000, 0x80001a61, 0x30010220,
    0x00006004, 0x00000000, 0x80001e69, 0x10018220,
    0x02000304, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000e00, 0x80000961, 0x10060660,
    0x00010600, 0x00000000, 0x80000061, 0x10260660,
    0x00010610, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x52260660,
    0x00001024, 0x00000000, 0x80031961, 0x52060660,
    0x00001004, 0x00000000, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004831, 0x00000000,
    0xfb08520c, 0x00345614, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0110040, 0x0c003903,
    0x00040070, 0x00018660, 0x16463705, 0x00000000,
    0x01040022, 0x0001c060, 0x00000190, 0x00000108,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xe0130068, 0x00601103, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00041969, 0x15058660,
    0x02461305, 0x00000003, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x57060220,
    0x00341505, 0x00000000, 0x00131a61, 0x59060220,
    0x00341605, 0x00000000, 0x00031a61, 0x57264220,
    0x00000000, 0x00000000, 0x00131a61, 0x59264220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x16240000,
    0xfb045724, 0x000c0000, 0x00032861, 0x07060220,
    0x00341605, 0x00000000, 0x00132861, 0x09060220,
    0x00341705, 0x00000000, 0x0003a861, 0x07260220,
    0x00341805, 0x00000000, 0x0013a861, 0x09260220,
    0x00341905, 0x00000000, 0x00040024, 0x0001c060,
    0x00000098, 0x00000098, 0xa0171b40, 0x11010242,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x27191970, 0x0210172b, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x07060220,
    0x00341705, 0x00000000, 0x80101d01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x09060220,
    0x00341805, 0x00000000, 0xa01b1b40, 0x0212191a,
    0x00031961, 0x07260220, 0x00341b05, 0x00000000,
    0x00131a61, 0x09260220, 0x00341c05, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000208,
    0xa01c0040, 0x11010202, 0x270b1970, 0x02101c03,
    0x00030061, 0x22060220, 0x00341c05, 0x00000000,
    0x00130061, 0x24060220, 0x00341d05, 0x00000000,
    0xa0201b40, 0x02120b12, 0x00031961, 0x22260220,
    0x00342005, 0x00000000, 0x00131a61, 0x24260220,
    0x00342105, 0x00000000, 0xe26b0961, 0x00114004,
    0x80000965, 0x6b058220, 0x02006b04, 0xffffffff,
    0x8000194c, 0x26050220, 0x00006b04, 0x00000000,
    0x80001969, 0x10018220, 0x02002604, 0x00000003,
    0x80000961, 0x28060660, 0x00010380, 0x00000000,
    0x80000061, 0x28260660, 0x00010390, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x58260660, 0x00002824, 0x00000000,
    0x80031961, 0x58060660, 0x00002804, 0x00000000,
    0xe25f0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004931, 0x5d140000,
    0xfb00580c, 0x00340000, 0x80001a61, 0x30010220,
    0x00005f04, 0x00000000, 0x80001e69, 0x10018220,
    0x02002604, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000400, 0x80000961, 0x29060660,
    0x00010100, 0x00000000, 0x80000061, 0x29260660,
    0x00010110, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x59260660,
    0x00002924, 0x00000000, 0x80031961, 0x59060660,
    0x00002904, 0x00000000, 0x80002901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004a31, 0x00000000,
    0xfb08590c, 0x00345d14, 0x00040052, 0x1e044160,
    0x0e0e0003, 0x1e050d05, 0x00040027, 0x00014060,
    0x00000000, 0xffffefa8, 0x80030061, 0x7e050220,
    0x00460005, 0x00000000, 0x80040931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_misc_copy_instances = {
   .prog_data = {
      .base.nr_params = 14,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 5376,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_misc_copy_instances_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_misc_copy_instances_printfs,
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
const char *gfx125_misc_copy_instances_sha1 = "ca2590180eb23029c5622fe6a1658322f51680f8";

#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_misc_copy_instances_base_ptr_relocs[] = {
};
static const u_printf_info gfx125_misc_copy_instances_base_ptr_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_misc_copy_instances_base_ptr_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g17<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g72<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g17UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(16)         g11<1>UD        g72<8,8,1>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g13<1>D         g2<0,1,0>D      152D            { align1 1H compacted };
shr(16)         g26<1>UD        g2.4<0,1,0>UD   0x00000008UD    { align1 1H compacted };
and(16)         g28<1>UD        g2.4<0,1,0>UD   0xffffff00UD    { align1 1H };
cmp.l.f0.0(16)  g15<1>UD        g13<1,1,0>UD    0x00000098UD    { align1 1H I@3 compacted };
mov(8)          g74<2>UD        g13<4,4,1>UD                    { align1 1Q };
mov(8)          g76<2>UD        g14<4,4,1>UD                    { align1 2Q };
add3(16)        g36<1>D         65534W          -g26<8,8,1>D    g72<1,1,1>D { align1 1H I@5 };
add(16)         g30<1>D         g2.4<0,1,0>D    -g28<1,1,0>D    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g17<1>D         -g15<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@5 compacted };
mov(16)         g38<1>D         -g36<8,8,1>D                    { align1 1H I@3 };
and(16)         g32<1>UD        g30<8,8,1>UD    0xffffffc0UD    { align1 1H I@3 };
mov(8)          g74.1<2>UD      g17<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g76.1<2>UD      g18<4,4,1>UD                    { align1 2Q I@4 };
shr(16)         g34<1>UD        g32<1,1,0>UD    0x00000006UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g18UD           g74UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
add(16)         g20<1>D         g2<0,1,0>D      g18<1,1,0>D     { align1 1H $1.dst compacted };
cmp.l.f0.0(16)  g22<1>UD        g20<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g38<8,8,1>UD    g34<8,8,1>UD    { align1 1H I@3 };
add(16)         g24<1>D         -g22<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@2 compacted };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g39<1>D         -g36<8,8,1>D    0x00000006UD    { align1 1H };
or.z.f0.0(16)   null<1>UD       g2.2<0,1,0>UD   g2.3<0,1,0>UD   { align1 1H };
add(16)         g41<1>D         g28<1,1,0>D     g39<1,1,0>D     { align1 1H I@2 compacted };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL1              { align1 1H };
shr(16)         g43<1>UD        g41<1,1,0>UD    0x00000006UD    { align1 1H I@2 compacted };
shl(16)         g45<1>D         g43<8,8,1>D     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g75<2>UD        g45<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g77<2>UD        g46<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g75.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g77.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g46UD           g75UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(8)          g3<2>UD         g46<4,4,1>UD                    { align1 1Q $1.dst };
mov(8)          g5<2>UD         g47<4,4,1>UD                    { align1 2Q $1.dst };
mov(8)          g3.1<2>UD       g48<4,4,1>UD                    { align1 1Q @2 $1.dst };
mov(8)          g5.1<2>UD       g49<4,4,1>UD                    { align1 2Q @2 $1.dst };
else(16)        JIP:  LABEL1          UIP:  LABEL1              { align1 1H };

LABEL2:
add(16)         g47<1>D         g2.2<0,1,0>D    g41<1,1,0>D     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g49<1>UD        g47<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g3<2>UD         g47<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g5<2>UD         g48<4,4,1>UD                    { align1 2Q I@5 };
add(16)         g51<1>D         -g49<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g3.1<2>UD       g51<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g5.1<2>UD       g52<4,4,1>UD                    { align1 2Q I@2 };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
add(16)         g52<1>D         g20<1,1,0>D     g41<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g54<1>UD        g52<1,1,0>UD    g20<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g58<2>UD        g52<4,4,1>UD                    { align1 1Q };
mov(8)          g60<2>UD        g53<4,4,1>UD                    { align1 2Q };
add(16)         g56<1>D         -g54<1,1,0>D    g24<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g58.1<2>UD      g56<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g60.1<2>UD      g57<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g10<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g10<1>UD        g10<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g62<1>UD        g10<0,1,0>UD                    { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g62<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g64<2>D         g[a0 96]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g64.1<2>D       g[a0 100]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g76.1<2>D       g64.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g76<2>D         g64<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g9<1>UD         f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g81UD    g76UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
mov(1)          f0<1>UD         g9<0,1,0>UD                     { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g62<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g65<2>D         g[a0 320]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g65.1<2>D       g[a0 324]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g77.1<2>D       g65.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g77<2>D         g65<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g77UD           g81UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $1 };

LABEL0:
endif(16)       JIP:  LABEL3                                    { align1 1H };

LABEL3:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shr(16)         g66<1>UD        g28<1,1,0>UD    0x00000008UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
or(16)          g68<1>UD        g2.2<0,1,0>UD   g2.3<0,1,0>UD   { align1 1H };

LABEL13:
cmp.ge.f0.0(16) null<1>UD       g11<8,8,1>UD    g66<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
shl(16)         g70<1>D         g11<8,8,1>D     0x00000008UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g68<8,8,1>D     0D              { align1 1H I@4 };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL5              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shr(16)         g72<1>UD        g70<1,1,0>UD    0x00000006UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g74<1>D         g72<8,8,1>D     0x00000003UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g82<2>UD        g74<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
mov(8)          g84<2>UD        g75<4,4,1>UD                    { align1 2Q };
mov(8)          g82.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g84.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g75UD           g82UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(8)          g4<2>UD         g75<4,4,1>UD                    { align1 1Q $1.dst };
mov(8)          g6<2>UD         g76<4,4,1>UD                    { align1 2Q $1.dst };
mov(8)          g4.1<2>UD       g77<4,4,1>UD                    { align1 1Q @2 $1.dst };
mov(8)          g6.1<2>UD       g78<4,4,1>UD                    { align1 2Q @2 $1.dst };
else(16)        JIP:  LABEL5          UIP:  LABEL5              { align1 1H };

LABEL6:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g76<1>D         g2.2<0,1,0>D    g70<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g78<1>UD        g76<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
mov(8)          g4<2>UD         g76<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@5 };
mov(8)          g6<2>UD         g77<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g80<1>D         -g78<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g4.1<2>UD       g80<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g6.1<2>UD       g81<4,4,1>UD                    { align1 2Q I@2 };

LABEL5:
endif(16)       JIP:  LABEL4                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g81<1>D         g20<1,1,0>D     g70<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g83<1>UD        g81<1,1,0>UD    g20<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g87<2>UD        g81<4,4,1>UD                    { align1 1Q };
mov(8)          g89<2>UD        g82<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g85<1>D         -g83<1,1,0>D    g24<1,1,0>D     { align1 1H compacted };
mov(8)          g87.1<2>UD      g85<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g89.1<2>UD      g86<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g13<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g13<1>UD        g13<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g91<1>UD        g13<0,1,0>UD                    { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g91<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g93<2>D         g[a0 128]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g93.1<2>D       g[a0 132]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g83.1<2>D       g93.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g83<2>D         g93<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g8<1>UD         f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g98UD    g83UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
mov(1)          f0<1>UD         g8<0,1,0>UD                     { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g91<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g94<2>D         g[a0 224]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g94.1<2>D       g[a0 228]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g84.1<2>D       g94.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g84<2>D         g94<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g84UD           g98UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g95<1>D         g70<1,1,0>D     64D             { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g68<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shr(16)         g97<1>UD        g95<1,1,0>UD    0x00000006UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shl(16)         g99<1>D         g97<8,8,1>D     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g104<2>UD       g99<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
mov(8)          g106<2>UD       g100<4,4,1>UD                   { align1 2Q };
mov(8)          g104.1<2>UD     0x00000000UD                    { align1 1Q I@2 };
mov(8)          g106.1<2>UD     0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g100UD          g104UD          nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mov(8)          g5<2>UD         g100<4,4,1>UD                   { align1 1Q $2.dst };
mov(8)          g7<2>UD         g101<4,4,1>UD                   { align1 2Q $2.dst };
mov(8)          g5.1<2>UD       g102<4,4,1>UD                   { align1 1Q @2 $2.dst };
mov(8)          g7.1<2>UD       g103<4,4,1>UD                   { align1 2Q @2 $2.dst };
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
add(16)         g101<1>D        g2.2<0,1,0>D    g95<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g103<1>UD       g101<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
mov(8)          g5<2>UD         g101<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@5 };
mov(8)          g7<2>UD         g102<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g105<1>D        -g103<1,1,0>D   g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g5.1<2>UD       g105<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g7.1<2>UD       g106<4,4,1>UD                   { align1 2Q I@2 };

LABEL7:
endif(16)       JIP:  LABEL4                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g106<1>D        g20<1,1,0>D     g95<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g108<1>UD       g106<1,1,0>UD   g20<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g112<2>UD       g106<4,4,1>UD                   { align1 1Q };
mov(8)          g114<2>UD       g107<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g110<1>D        -g108<1,1,0>D   g24<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g112.1<2>UD     g110<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g114.1<2>UD     g111<4,4,1>UD                   { align1 2Q I@2 };
mov(1)          g14<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g14<1>UD        g14<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g116<1>UD       g14<0,1,0>UD                    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shl(1)          a0<1>UD         g116<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g118<2>D        g[a0 160]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g118.1<2>D      g[a0 164]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g105.1<2>D      g118.1<0,1,0>D                  { align1 WE_all 1Q I@1 };
mov(8)          g105<2>D        g118<0,1,0>D                    { align1 WE_all 1Q I@1 };
mov(1)          g3<1>UD         f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g110UD   g105UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $2 };
mov(1)          f0<1>UD         g3<0,1,0>UD                     { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g116<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000e00UD    { align1 WE_all 1N A@1 };
mov(1)          g119<2>D        g[a0]<0,1,0>D                   { align1 WE_all 1N A@1 };
mov(1)          g119.1<2>D      g[a0 4]<0,1,0>D                 { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g106.1<2>D      g119.1<0,1,0>D                  { align1 WE_all 1Q I@2 };
mov(8)          g106<2>D        g119<0,1,0>D                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g106UD          g110UD          0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g120<1>D        g70<1,1,0>D     128D            { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g68<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL9              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shr(16)         g122<1>UD       g120<1,1,0>UD   0x00000006UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shl(16)         g124<1>D        g122<8,8,1>D    0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g111<2>UD       g124<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g113<2>UD       g125<4,4,1>UD                   { align1 2Q I@2 };
mov(8)          g111.1<2>UD     0x00000000UD                    { align1 1Q I@2 };
mov(8)          g113.1<2>UD     0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g13UD           g111UD          nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mov(8)          g6<2>UD         g13<4,4,1>UD                    { align1 1Q $2.dst };
mov(8)          g8<2>UD         g14<4,4,1>UD                    { align1 2Q $2.dst };
mov(8)          g6.1<2>UD       g15<4,4,1>UD                    { align1 1Q @2 $2.dst };
mov(8)          g8.1<2>UD       g16<4,4,1>UD                    { align1 2Q @2 $2.dst };
else(16)        JIP:  LABEL9          UIP:  LABEL9              { align1 1H };

LABEL10:
add(16)         g14<1>D         g2.2<0,1,0>D    g120<1,1,0>D    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g16<1>UD        g14<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
mov(8)          g6<2>UD         g14<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@5 };
mov(8)          g8<2>UD         g15<4,4,1>UD                    { align1 2Q };
add(16)         g18<1>D         -g16<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g6.1<2>UD       g18<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g8.1<2>UD       g19<4,4,1>UD                    { align1 2Q I@2 };

LABEL9:
endif(16)       JIP:  LABEL4                                    { align1 1H };
add(16)         g22<1>D         g20<1,1,0>D     g120<1,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g28<1>UD        g22<1,1,0>UD    g20<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g32<2>UD        g22<4,4,1>UD                    { align1 1Q };
mov(8)          g34<2>UD        g23<4,4,1>UD                    { align1 2Q };
add(16)         g30<1>D         -g28<1,1,0>D    g24<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g32.1<2>UD      g30<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g34.1<2>UD      g31<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g15<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g15<1>UD        g15<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g36<1>UD        g15<0,1,0>UD                    { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g36<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g38<2>D         g[a0 192]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g38.1<2>D       g[a0 196]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g112.1<2>D      g38.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g112<2>D        g38<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g127<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g117UD   g112UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $3 };
mov(1)          f0<1>UD         g127<0,1,0>UD                   { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g36<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000400UD    { align1 WE_all 1N A@1 };
mov(1)          g39<2>D         g[a0]<0,1,0>D                   { align1 WE_all 1N A@1 };
mov(1)          g39.1<2>D       g[a0 4]<0,1,0>D                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g113.1<2>D      g39.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g113<2>D        g39<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g113UD          g117UD          0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g40<1>D         g70<1,1,0>D     192D            { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g68<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shr(16)         g42<1>UD        g40<1,1,0>UD    0x00000006UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
shl(16)         g44<1>D         g42<8,8,1>D     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g118<2>UD       g44<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g120<2>UD       g45<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g118.1<2>UD     0x00000000UD                    { align1 1Q I@2 };
mov(8)          g120.1<2>UD     0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g45UD           g118UD          nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
mov(8)          g7<2>UD         g45<4,4,1>UD                    { align1 1Q $4.dst };
mov(8)          g9<2>UD         g46<4,4,1>UD                    { align1 2Q $4.dst };
mov(8)          g7.1<2>UD       g47<4,4,1>UD                    { align1 1Q @2 $4.dst };
mov(8)          g9.1<2>UD       g48<4,4,1>UD                    { align1 2Q @2 $4.dst };
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
add(16)         g46<1>D         g2.2<0,1,0>D    g40<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g48<1>UD        g46<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
mov(8)          g7<2>UD         g46<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@5 };
mov(8)          g9<2>UD         g47<4,4,1>UD                    { align1 2Q };
add(16)         g50<1>D         -g48<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g7.1<2>UD       g50<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g9.1<2>UD       g51<4,4,1>UD                    { align1 2Q I@2 };

LABEL11:
endif(16)       JIP:  LABEL4                                    { align1 1H };
add(16)         g51<1>D         g20<1,1,0>D     g40<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g53<1>UD        g51<1,1,0>UD    g20<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g57<2>UD        g51<4,4,1>UD                    { align1 1Q };
mov(8)          g59<2>UD        g52<4,4,1>UD                    { align1 2Q };
add(16)         g55<1>D         -g53<1,1,0>D    g24<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g57.1<2>UD      g55<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g59.1<2>UD      g56<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g16<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g16<1>UD        g16<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g61<1>UD        g16<0,1,0>UD                    { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g61<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g70<2>D         g[a0 224]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g70.1<2>D       g[a0 228]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g119.1<2>D      g70.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g119<2>D        g70<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g126<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g124UD   g119UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $5 };
mov(1)          f0<1>UD         g126<0,1,0>UD                   { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shl(1)          a0<1>UD         g61<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g71<2>D         g[a0 288]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g71.1<2>D       g[a0 292]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g120.1<2>D      g71.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g120<2>D        g71<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g120UD          g124UD          0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $6 };
add3(16)        g11<1>D         0x0003UW        g26<8,8,1>D     g11<1,1,1>D { align1 1H };

LABEL4:
while(16)       JIP:  LABEL13                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_instances_base_ptr_code[] = {
    0x80000065, 0x11058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x48050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00110c, 0x00340000,
    0x00041961, 0x0b050220, 0x00464805, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa00d0040, 0x09810203, 0xe01a0068, 0x0081025b,
    0x00040065, 0x1c058220, 0x02000284, 0xffffff00,
    0xe70f1b70, 0x09800d03, 0x00030061, 0x4a060220,
    0x00340d05, 0x00000000, 0x00130061, 0x4c060220,
    0x00340e05, 0x00000000, 0x00041d52, 0x24044560,
    0x0e8efffe, 0x48051a05, 0xa01e1d40, 0x1c21025a,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa0111d40, 0x02120f12, 0x00041b61, 0x26052660,
    0x00462405, 0x00000000, 0x00041b65, 0x20058220,
    0x02461e05, 0xffffffc0, 0x00031b61, 0x4a260220,
    0x00341105, 0x00000000, 0x00131c61, 0x4c260220,
    0x00341205, 0x00000000, 0xe0221b68, 0x00602003,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x12140000, 0xfb044a24, 0x00040000,
    0xa0142140, 0x12010202, 0x27161970, 0x02101403,
    0x00041b70, 0x00010220, 0x52462605, 0x00462205,
    0xa0181a40, 0x02121612, 0x01040022, 0x0001c060,
    0x00000370, 0x00000370, 0x00040069, 0x2705a660,
    0x02462405, 0x00000006, 0x00040066, 0x00010220,
    0x12000244, 0x00000264, 0xa0291a40, 0x27001c02,
    0x01040022, 0x0001c060, 0x00000150, 0x000000f8,
    0xe02b1a68, 0x00602903, 0x00041969, 0x2d058660,
    0x02462b05, 0x00000003, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x4b060220,
    0x00342d05, 0x00000000, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00131a61, 0x4d060220,
    0x00342e05, 0x00000000, 0x00031a61, 0x4b264220,
    0x00000000, 0x00000000, 0x00131a61, 0x4d264220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x2e240000,
    0xfb044b24, 0x000c0000, 0x00032161, 0x03060220,
    0x00342e05, 0x00000000, 0x00132161, 0x05060220,
    0x00342f05, 0x00000000, 0x0003a161, 0x03260220,
    0x00343005, 0x00000000, 0x0013a161, 0x05260220,
    0x00343105, 0x00000000, 0x00040024, 0x0001c060,
    0x00000068, 0x00000068, 0xa02f1a40, 0x29010242,
    0x27311970, 0x02102f2b, 0x00031d61, 0x03060220,
    0x00342f05, 0x00000000, 0x00131d61, 0x05060220,
    0x00343005, 0x00000000, 0xa0331b40, 0x0212311a,
    0x00031961, 0x03260220, 0x00343305, 0x00000000,
    0x00131a61, 0x05260220, 0x00343405, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000001e8,
    0xa0340040, 0x29001402, 0x27361970, 0x14003403,
    0x00030061, 0x3a060220, 0x00343405, 0x00000000,
    0x00130061, 0x3c060220, 0x00343505, 0x00000000,
    0xa0381b40, 0x18023602, 0x00031961, 0x3a260220,
    0x00343805, 0x00000000, 0x00131a61, 0x3c260220,
    0x00343905, 0x00000000, 0xe20a0961, 0x00114004,
    0x80000965, 0x0a058220, 0x02000a04, 0xffffffff,
    0x8000194c, 0x3e050220, 0x00000a04, 0x00000000,
    0x80001969, 0x10018220, 0x02003e04, 0x00000003,
    0x80000961, 0x40060660, 0x00010180, 0x00000000,
    0x80000061, 0x40260660, 0x00010190, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x4c260660, 0x00004024, 0x00000000,
    0x80031961, 0x4c060660, 0x00004004, 0x00000000,
    0xe2090061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004131, 0x51140000,
    0xfb004c0c, 0x00340000, 0x80001a61, 0x30010220,
    0x00000904, 0x00000000, 0x80001e69, 0x10018220,
    0x02003e04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000600, 0x80000961, 0x41060660,
    0x00010500, 0x00000000, 0x80000061, 0x41260660,
    0x00010510, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x4d260660,
    0x00004124, 0x00000000, 0x80031961, 0x4d060660,
    0x00004104, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004131, 0x00000000,
    0xfb084d0c, 0x00345114, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0xe0420068, 0x00801c03,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0x00040066, 0x44050220, 0x02000244, 0x00000264,
    0x00041a70, 0x00010220, 0x42460b05, 0x00464205,
    0x01040028, 0x0001c660, 0x00001058, 0x00001058,
    0x00040069, 0x46058660, 0x02460b05, 0x00000008,
    0x00041c70, 0x00018660, 0x16464405, 0x00000000,
    0x01040022, 0x0001c060, 0x00000210, 0x00000158,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xe0480068, 0x00604603, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x4a058660,
    0x02464805, 0x00000003, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x52060220,
    0x00344a05, 0x00000000, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x80101a01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x54060220,
    0x00344b05, 0x00000000, 0x00031a61, 0x52264220,
    0x00000000, 0x00000000, 0x00131a61, 0x54264220,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x4b240000,
    0xfb045224, 0x000c0000, 0x00032161, 0x04060220,
    0x00344b05, 0x00000000, 0x00132161, 0x06060220,
    0x00344c05, 0x00000000, 0x0003a161, 0x04260220,
    0x00344d05, 0x00000000, 0x0013a161, 0x06260220,
    0x00344e05, 0x00000000, 0x00040024, 0x0001c060,
    0x000000c8, 0x000000c8, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa04c1b40, 0x46010242,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x274e0070, 0x02104c2b, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x04060220,
    0x00344c05, 0x00000000, 0x80101d01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x06060220,
    0x00344d05, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0501b40, 0x02124e1a,
    0x00031961, 0x04260220, 0x00345005, 0x00000000,
    0x00131a61, 0x06260220, 0x00345105, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000e18,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa0510040, 0x46001402, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x27531970, 0x14005103,
    0x00030061, 0x57060220, 0x00345105, 0x00000000,
    0x00130061, 0x59060220, 0x00345205, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa0550040, 0x18025302, 0x00031961, 0x57260220,
    0x00345505, 0x00000000, 0x00131a61, 0x59260220,
    0x00345605, 0x00000000, 0xe20d0961, 0x00114004,
    0x80000965, 0x0d058220, 0x02000d04, 0xffffffff,
    0x8000194c, 0x5b050220, 0x00000d04, 0x00000000,
    0x80001969, 0x10018220, 0x02005b04, 0x00000003,
    0x80000961, 0x5d060660, 0x00010200, 0x00000000,
    0x80000061, 0x5d260660, 0x00010210, 0x00000000,
    0x80031961, 0x53260660, 0x00005d24, 0x00000000,
    0x80031961, 0x53060660, 0x00005d04, 0x00000000,
    0xe2080061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004131, 0x62140000,
    0xfb00530c, 0x00340000, 0x80001a61, 0x30010220,
    0x00000804, 0x00000000, 0x80001e69, 0x10018220,
    0x02005b04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000a00, 0x80000961, 0x5e060660,
    0x00010380, 0x00000000, 0x80000061, 0x5e260660,
    0x00010390, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x54260660,
    0x00005e24, 0x00000000, 0x80031961, 0x54060660,
    0x00005e04, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004131, 0x00000000,
    0xfb08540c, 0x00346214, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa05f0040, 0x04004603,
    0x00040070, 0x00018660, 0x16464405, 0x00000000,
    0x01040022, 0x0001c060, 0x000001f0, 0x00000148,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xe0610068, 0x00605f03, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00041969, 0x63058660,
    0x02466105, 0x00000003, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x68060220,
    0x00346305, 0x00000000, 0x80103201, 0x00000000,
    0x00000000, 0x00000000, 0x80101a01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x6a060220,
    0x00346405, 0x00000000, 0x00031a61, 0x68264220,
    0x00000000, 0x00000000, 0x00131a61, 0x6a264220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x64240000,
    0xfb046824, 0x000c0000, 0x00032261, 0x05060220,
    0x00346405, 0x00000000, 0x00132261, 0x07060220,
    0x00346505, 0x00000000, 0x0003a261, 0x05260220,
    0x00346605, 0x00000000, 0x0013a261, 0x07260220,
    0x00346705, 0x00000000, 0x00040024, 0x0001c060,
    0x000000b8, 0x000000b8, 0xa0651b40, 0x5f010242,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x27671970, 0x0210652b, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x05060220,
    0x00346505, 0x00000000, 0x80101d01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x07060220,
    0x00346605, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa0691b40, 0x0212671a,
    0x00031961, 0x05260220, 0x00346905, 0x00000000,
    0x00131a61, 0x07260220, 0x00346a05, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000a08,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa06a0040, 0x5f001402, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x276c1970, 0x14006a03,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x70060220, 0x00346a05, 0x00000000,
    0x00130061, 0x72060220, 0x00346b05, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa06e1b40, 0x18026c02, 0x00031961, 0x70260220,
    0x00346e05, 0x00000000, 0x00131a61, 0x72260220,
    0x00346f05, 0x00000000, 0xe20e0961, 0x00114004,
    0x80000965, 0x0e058220, 0x02000e04, 0xffffffff,
    0x8000194c, 0x74050220, 0x00000e04, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02007404, 0x00000003,
    0x80000961, 0x76060660, 0x00010280, 0x00000000,
    0x80000061, 0x76260660, 0x00010290, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x69260660, 0x00007624, 0x00000000,
    0x80031961, 0x69060660, 0x00007604, 0x00000000,
    0xe2030061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004231, 0x6e140000,
    0xfb00690c, 0x00340000, 0x80001a61, 0x30010220,
    0x00000304, 0x00000000, 0x80001e69, 0x10018220,
    0x02007404, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000e00, 0x80000961, 0x77060660,
    0x00010000, 0x00000000, 0x80000061, 0x77260660,
    0x00010010, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x6a260660,
    0x00007724, 0x00000000, 0x80031961, 0x6a060660,
    0x00007704, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004231, 0x00000000,
    0xfb086a0c, 0x00346e14, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0780040, 0x08004603,
    0x00040070, 0x00018660, 0x16464405, 0x00000000,
    0x01040022, 0x0001c060, 0x000001a0, 0x00000118,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xe07a0068, 0x00607803, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00041969, 0x7c058660,
    0x02467a05, 0x00000003, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x6f060220,
    0x00347c05, 0x00000000, 0x00131a61, 0x71060220,
    0x00347d05, 0x00000000, 0x00031a61, 0x6f264220,
    0x00000000, 0x00000000, 0x00131a61, 0x71264220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x0d240000,
    0xfb046f24, 0x000c0000, 0x00032261, 0x06060220,
    0x00340d05, 0x00000000, 0x00132261, 0x08060220,
    0x00340e05, 0x00000000, 0x0003a261, 0x06260220,
    0x00340f05, 0x00000000, 0x0013a261, 0x08260220,
    0x00341005, 0x00000000, 0x00040024, 0x0001c060,
    0x00000098, 0x00000098, 0xa00e1b40, 0x78010242,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x27101970, 0x02100e2b, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x06060220,
    0x00340e05, 0x00000000, 0x80101d01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x08060220,
    0x00340f05, 0x00000000, 0xa0121b40, 0x0212101a,
    0x00031961, 0x06260220, 0x00341205, 0x00000000,
    0x00131a61, 0x08260220, 0x00341305, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000005e8,
    0xa0160040, 0x78001402, 0x271c1970, 0x14001603,
    0x00030061, 0x20060220, 0x00341605, 0x00000000,
    0x00130061, 0x22060220, 0x00341705, 0x00000000,
    0xa01e1b40, 0x18021c02, 0x00031961, 0x20260220,
    0x00341e05, 0x00000000, 0x00131a61, 0x22260220,
    0x00341f05, 0x00000000, 0xe20f0961, 0x00114004,
    0x80000965, 0x0f058220, 0x02000f04, 0xffffffff,
    0x8000194c, 0x24050220, 0x00000f04, 0x00000000,
    0x80001969, 0x10018220, 0x02002404, 0x00000003,
    0x80000961, 0x26060660, 0x00010300, 0x00000000,
    0x80000061, 0x26260660, 0x00010310, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x70260660, 0x00002624, 0x00000000,
    0x80031961, 0x70060660, 0x00002604, 0x00000000,
    0xe27f0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004331, 0x75140000,
    0xfb00700c, 0x00340000, 0x80001a61, 0x30010220,
    0x00007f04, 0x00000000, 0x80001e69, 0x10018220,
    0x02002404, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000400, 0x80000961, 0x27060660,
    0x00010000, 0x00000000, 0x80000061, 0x27260660,
    0x00010010, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x71260660,
    0x00002724, 0x00000000, 0x80031961, 0x71060660,
    0x00002704, 0x00000000, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004431, 0x00000000,
    0xfb08710c, 0x00347514, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0280040, 0x0c004603,
    0x00040070, 0x00018660, 0x16464405, 0x00000000,
    0x01040022, 0x0001c060, 0x00000190, 0x00000108,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xe02a0068, 0x00602803, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00041969, 0x2c058660,
    0x02462a05, 0x00000003, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x76060220,
    0x00342c05, 0x00000000, 0x00131a61, 0x78060220,
    0x00342d05, 0x00000000, 0x00031a61, 0x76264220,
    0x00000000, 0x00000000, 0x00131a61, 0x78264220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x2d240000,
    0xfb047624, 0x000c0000, 0x00032461, 0x07060220,
    0x00342d05, 0x00000000, 0x00132461, 0x09060220,
    0x00342e05, 0x00000000, 0x0003a461, 0x07260220,
    0x00342f05, 0x00000000, 0x0013a461, 0x09260220,
    0x00343005, 0x00000000, 0x00040024, 0x0001c060,
    0x00000098, 0x00000098, 0xa02e1b40, 0x28010242,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x27301970, 0x02102e2b, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x07060220,
    0x00342e05, 0x00000000, 0x80101d01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x09060220,
    0x00342f05, 0x00000000, 0xa0321b40, 0x0212301a,
    0x00031961, 0x07260220, 0x00343205, 0x00000000,
    0x00131a61, 0x09260220, 0x00343305, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000228,
    0xa0330040, 0x28001402, 0x27351970, 0x14003303,
    0x00030061, 0x39060220, 0x00343305, 0x00000000,
    0x00130061, 0x3b060220, 0x00343405, 0x00000000,
    0xa0371b40, 0x18023502, 0x00031961, 0x39260220,
    0x00343705, 0x00000000, 0x00131a61, 0x3b260220,
    0x00343805, 0x00000000, 0xe2100961, 0x00114004,
    0x80000965, 0x10058220, 0x02001004, 0xffffffff,
    0x8000194c, 0x3d050220, 0x00001004, 0x00000000,
    0x80001969, 0x10018220, 0x02003d04, 0x00000003,
    0x80000961, 0x46060660, 0x00010380, 0x00000000,
    0x80000061, 0x46260660, 0x00010390, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x77260660, 0x00004624, 0x00000000,
    0x80031961, 0x77060660, 0x00004604, 0x00000000,
    0xe27e0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004531, 0x7c140000,
    0xfb00770c, 0x00340000, 0x80001a61, 0x30010220,
    0x00007e04, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001e69, 0x10018220,
    0x02003d04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000600, 0x80000961, 0x47060660,
    0x00010480, 0x00000000, 0x80000061, 0x47260660,
    0x00010490, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x78260660,
    0x00004724, 0x00000000, 0x80031961, 0x78060660,
    0x00004704, 0x00000000, 0x80002501, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004631, 0x00000000,
    0xfb08780c, 0x00347c14, 0x00040052, 0x0b044160,
    0x0e0e0003, 0x0b051a05, 0x00040027, 0x00014060,
    0x00000000, 0xffffef98, 0x80030061, 0x7e050220,
    0x00460005, 0x00000000, 0x80040931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_misc_copy_instances_base_ptr = {
   .prog_data = {
      .base.nr_params = 14,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 5568,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_misc_copy_instances_base_ptr_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_misc_copy_instances_base_ptr_printfs,
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
   .args = gfx125_misc_copy_instances_base_ptr_args,
   .code = gfx125_misc_copy_instances_base_ptr_code,
};
const char *gfx125_misc_copy_instances_base_ptr_sha1 = "3e9211cd5bd825918363a9023a0b46c891d42824";

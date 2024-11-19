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

and(1)          g125<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g86<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g125UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(16)         g82<1>UD        g86<8,8,1>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
shr(16)         g13<1>UD        g2.4<0,1,0>UD   0x00000008UD    { align1 1H compacted };
and(16)         g15<1>UD        g2.4<0,1,0>UD   0xffffff00UD    { align1 1H };
add3(16)        g23<1>D         65534W          -g13<8,8,1>D    g86<1,1,1>D { align1 1H I@2 };
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
shr(16)         g30<1>UD        g28<1,1,0>UD    0x00000006UD    { align1 1H I@2 compacted };
shl(16)         g32<1>D         g30<8,8,1>D     0x00000003UD    { align1 1H I@1 };
mov(8)          g34<2>UD        g32<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g36<2>UD        g33<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g34.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g36.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g38UD           g34UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(8)          g3<2>UD         g38<4,4,1>UD                    { align1 1Q $1.dst };
mov(8)          g5<2>UD         g39<4,4,1>UD                    { align1 2Q $1.dst };
mov(8)          g3.1<2>UD       g40<4,4,1>UD                    { align1 1Q @2 $1.dst };
mov(8)          g5.1<2>UD       g41<4,4,1>UD                    { align1 2Q @2 $1.dst };
else(16)        JIP:  LABEL1          UIP:  LABEL1              { align1 1H };

LABEL2:
add(16)         g39<1>D         g2.2<0,1,0>D    g28<1,1,0>D     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g41<1>UD        g39<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g3<2>UD         g39<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g5<2>UD         g40<4,4,1>UD                    { align1 2Q I@5 };
add(16)         g43<1>D         -g41<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g3.1<2>UD       g43<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g5.1<2>UD       g44<4,4,1>UD                    { align1 2Q I@2 };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
add(16)         g44<1>D         g2<0,1,0>D      g28<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g46<1>UD        g44<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g50<2>UD        g44<4,4,1>UD                    { align1 1Q };
mov(8)          g52<2>UD        g45<4,4,1>UD                    { align1 2Q };
add(16)         g48<1>D         -g46<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g50.1<2>UD      g48<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g52.1<2>UD      g49<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g113<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g113<1>UD       g113<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g56<1>UD        g113<0,1,0>UD                   { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g56<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g58<2>D         g[a0 96]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g58.1<2>D       g[a0 100]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g87.1<2>D       g58.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g87<2>D         g58<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g112<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g54UD    g87UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $2 };
mov(1)          f0<1>UD         g112<0,1,0>UD                   { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g56<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g59<2>D         g[a0 64]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g59.1<2>D       g[a0 68]<0,1,0>D                { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g88.1<2>D       g59.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g88<2>D         g59<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g88UD           g54UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $3 };

LABEL0:
endif(16)       JIP:  LABEL3                                    { align1 1H };

LABEL3:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shr(16)         g60<1>UD        g15<1,1,0>UD    0x00000008UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
or(16)          g62<1>UD        g2.2<0,1,0>UD   g2.3<0,1,0>UD   { align1 1H };

LABEL13:
cmp.ge.f0.0(16) null<1>UD       g82<8,8,1>UD    g60<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
shl(16)         g64<1>D         g82<8,8,1>D     0x00000008UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g62<8,8,1>D     0D              { align1 1H I@4 };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL5              { align1 1H };
shr(16)         g66<1>UD        g64<1,1,0>UD    0x00000006UD    { align1 1H I@3 compacted };
shl(16)         g68<1>D         g66<8,8,1>D     0x00000003UD    { align1 1H I@1 };
mov(8)          g70<2>UD        g68<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g72<2>UD        g69<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g70.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g72.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g74UD           g70UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
mov(8)          g4<2>UD         g74<4,4,1>UD                    { align1 1Q $4.dst };
mov(8)          g6<2>UD         g75<4,4,1>UD                    { align1 2Q $4.dst };
mov(8)          g4.1<2>UD       g76<4,4,1>UD                    { align1 1Q @2 $4.dst };
mov(8)          g6.1<2>UD       g77<4,4,1>UD                    { align1 2Q @2 $4.dst };
else(16)        JIP:  LABEL5          UIP:  LABEL5              { align1 1H };

LABEL6:
add(16)         g75<1>D         g2.2<0,1,0>D    g64<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g77<1>UD        g75<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
mov(8)          g4<2>UD         g75<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@5 };
mov(8)          g6<2>UD         g76<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g79<1>D         -g77<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g4.1<2>UD       g79<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g6.1<2>UD       g80<4,4,1>UD                    { align1 2Q I@2 };

LABEL5:
endif(16)       JIP:  LABEL4                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g80<1>D         g2<0,1,0>D      g64<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g11<1>UD        g80<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g86<2>UD        g80<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $3.src };
mov(8)          g88<2>UD        g81<4,4,1>UD                    { align1 2Q };
add(16)         g84<1>D         -g11<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g86.1<2>UD      g84<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g88.1<2>UD      g85<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g114<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g114<1>UD       g114<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g92<1>UD        g114<0,1,0>UD                   { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g92<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g94<2>D         g[a0 128]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g94.1<2>D       g[a0 132]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g98.1<2>D       g94.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g98<2>D         g94<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g111<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g90UD    g98UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $7 };
mov(1)          f0<1>UD         g111<0,1,0>UD                   { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shl(1)          a0<1>UD         g92<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g95<2>D         g[a0 192]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g95.1<2>D       g[a0 196]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g99.1<2>D       g95.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g99<2>D         g95<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g99UD           g90UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g96<1>D         g64<1,1,0>D     64D             { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g62<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shr(16)         g98<1>UD        g96<1,1,0>UD    0x00000006UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g100<1>D        g98<8,8,1>D     0x00000003UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g102<2>UD       g100<4,4,1>UD                   { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $5.src };
mov(8)          g104<2>UD       g101<4,4,1>UD                   { align1 2Q I@2 };
mov(8)          g102.1<2>UD     0x00000000UD                    { align1 1Q I@2 };
mov(8)          g104.1<2>UD     0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g106UD          g102UD          nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mov(8)          g5<2>UD         g106<4,4,1>UD                   { align1 1Q $5.dst };
mov(8)          g7<2>UD         g107<4,4,1>UD                   { align1 2Q $5.dst };
mov(8)          g5.1<2>UD       g108<4,4,1>UD                   { align1 1Q @2 $5.dst };
mov(8)          g7.1<2>UD       g109<4,4,1>UD                   { align1 2Q @2 $5.dst };
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
add(16)         g107<1>D        g2.2<0,1,0>D    g96<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g109<1>UD       g107<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
mov(8)          g5<2>UD         g107<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@5 };
mov(8)          g7<2>UD         g108<4,4,1>UD                   { align1 2Q };
add(16)         g111<1>D        -g109<1,1,0>D   g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g5.1<2>UD       g111<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g7.1<2>UD       g112<4,4,1>UD                   { align1 2Q I@2 };

LABEL7:
endif(16)       JIP:  LABEL4                                    { align1 1H };
add(16)         g112<1>D        g2<0,1,0>D      g96<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g114<1>UD       g112<1,1,0>UD   g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g118<2>UD       g112<4,4,1>UD                   { align1 1Q };
mov(8)          g120<2>UD       g113<4,4,1>UD                   { align1 2Q };
add(16)         g116<1>D        -g114<1,1,0>D   g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g118.1<2>UD     g116<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g120.1<2>UD     g117<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(1)          g122<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g122<1>UD       g122<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g124<1>UD       g122<0,1,0>UD                   { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g124<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g15<2>D         g[a0 160]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g15.1<2>D       g[a0 164]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g100.1<2>D      g15.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g100<2>D        g15<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g110<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g122UD   g100UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $8 };
mov(1)          f0<1>UD         g110<0,1,0>UD                   { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g124<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000e00UD    { align1 WE_all 1N A@1 };
mov(1)          g16<2>D         g[a0 192]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g16.1<2>D       g[a0 196]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g101.1<2>D      g16.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g101<2>D        g16<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g101UD          g122UD          0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g17<1>D         g64<1,1,0>D     128D            { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g62<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL9              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shr(16)         g19<1>UD        g17<1,1,0>UD    0x00000006UD    { align1 1H compacted };
shl(16)         g21<1>D         g19<8,8,1>D     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(8)          g23<2>UD        g21<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $10.src };
mov(8)          g25<2>UD        g22<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g23.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g25.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g27UD           g23UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
mov(8)          g6<2>UD         g27<4,4,1>UD                    { align1 1Q $10.dst };
mov(8)          g8<2>UD         g28<4,4,1>UD                    { align1 2Q $10.dst };
mov(8)          g6.1<2>UD       g29<4,4,1>UD                    { align1 1Q @2 $10.dst };
mov(8)          g8.1<2>UD       g30<4,4,1>UD                    { align1 2Q @2 $10.dst };
else(16)        JIP:  LABEL9          UIP:  LABEL9              { align1 1H };

LABEL10:
add(16)         g28<1>D         g2.2<0,1,0>D    g17<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g30<1>UD        g28<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
mov(8)          g6<2>UD         g28<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@5 };
mov(8)          g8<2>UD         g29<4,4,1>UD                    { align1 2Q };
add(16)         g32<1>D         -g30<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g6.1<2>UD       g32<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g8.1<2>UD       g33<4,4,1>UD                    { align1 2Q I@2 };

LABEL9:
endif(16)       JIP:  LABEL4                                    { align1 1H };
add(16)         g33<1>D         g2<0,1,0>D      g17<1,1,0>D     { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g35<1>UD        g33<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g39<2>UD        g33<4,4,1>UD                    { align1 1Q };
mov(8)          g41<2>UD        g34<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g37<1>D         -g35<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g39.1<2>UD      g37<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g41.1<2>UD      g38<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(1)          g123<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g123<1>UD       g123<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g45<1>UD        g123<0,1,0>UD                   { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g45<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g47<2>D         g[a0 192]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g47.1<2>D       g[a0 196]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g102.1<2>D      g47.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g102<2>D        g47<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g109<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g43UD    g102UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $5 };
mov(1)          f0<1>UD         g109<0,1,0>UD                   { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g45<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000400UD    { align1 WE_all 1N A@1 };
mov(1)          g48<2>D         g[a0 224]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g48.1<2>D       g[a0 228]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g103.1<2>D      g48.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g103<2>D        g48<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g103UD          g43UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g49<1>D         g64<1,1,0>D     192D            { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g62<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shr(16)         g51<1>UD        g49<1,1,0>UD    0x00000006UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
shl(16)         g53<1>D         g51<8,8,1>D     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g55<2>UD        g53<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $3.src };
mov(8)          g57<2>UD        g54<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g55.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g57.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g64UD           g55UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov(8)          g7<2>UD         g64<4,4,1>UD                    { align1 1Q $3.dst };
mov(8)          g9<2>UD         g65<4,4,1>UD                    { align1 2Q $3.dst };
mov(8)          g7.1<2>UD       g66<4,4,1>UD                    { align1 1Q @2 $3.dst };
mov(8)          g9.1<2>UD       g67<4,4,1>UD                    { align1 2Q @2 $3.dst };
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
add(16)         g65<1>D         g2.2<0,1,0>D    g49<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g67<1>UD        g65<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
mov(8)          g7<2>UD         g65<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@5 };
mov(8)          g9<2>UD         g66<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g69<1>D         -g67<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g7.1<2>UD       g69<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g9.1<2>UD       g70<4,4,1>UD                    { align1 2Q I@2 };

LABEL11:
endif(16)       JIP:  LABEL4                                    { align1 1H };
add(16)         g70<1>D         g2<0,1,0>D      g49<1,1,0>D     { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g72<1>UD        g70<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g76<2>UD        g70<4,4,1>UD                    { align1 1Q };
mov(8)          g78<2>UD        g71<4,4,1>UD                    { align1 2Q };
add(16)         g74<1>D         -g72<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g76.1<2>UD      g74<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g78.1<2>UD      g75<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g124<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g124<1>UD       g124<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g11<1>UD        g124<0,1,0>UD                   { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g11<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g84<2>D         g[a0 224]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g84.1<2>D       g[a0 228]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g104.1<2>D      g84.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g104<2>D        g84<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g108<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g80UD    g104UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $5 };
mov(1)          f0<1>UD         g108<0,1,0>UD                   { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g11<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g85<2>D         g[a0 384]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g85.1<2>D       g[a0 388]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g105.1<2>D      g85.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g105<2>D        g85<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g105UD          g80UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $5 };
add3(16)        g82<1>D         0x0003UW        g13<8,8,1>D     g82<1,1,1>D { align1 1H };

LABEL4:
while(16)       JIP:  LABEL13                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_instances_code[] = {
    0x80000065, 0x7d058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x56050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa007d0c, 0x00340000,
    0x00041961, 0x52050220, 0x00465605, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xe00d0068, 0x0081025b, 0x00040065, 0x0f058220,
    0x02000284, 0xffffff00, 0x00041a52, 0x17044560,
    0x0e8efffe, 0x56050d05, 0xa0111a40, 0x0f21025a,
    0x00041a61, 0x19052660, 0x00461705, 0x00000000,
    0x00041a65, 0x13058220, 0x02461105, 0xffffffc0,
    0xe0151968, 0x00601303, 0x00041970, 0x00010220,
    0x52461905, 0x00461505, 0x01040022, 0x0001c060,
    0x00000330, 0x00000330, 0x00040069, 0x1a05a660,
    0x02461705, 0x00000006, 0x00040066, 0x00010220,
    0x12000244, 0x00000264, 0xa01c1a40, 0x1a000f02,
    0x01040022, 0x0001c060, 0x00000130, 0x000000d8,
    0xe01e1a68, 0x00601c03, 0x00041969, 0x20058660,
    0x02461e05, 0x00000003, 0x00031961, 0x22060220,
    0x00342005, 0x00000000, 0x00131a61, 0x24060220,
    0x00342105, 0x00000000, 0x00031a61, 0x22264220,
    0x00000000, 0x00000000, 0x00131a61, 0x24264220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x26240000,
    0xfb002224, 0x00040000, 0x00032161, 0x03060220,
    0x00342605, 0x00000000, 0x00132161, 0x05060220,
    0x00342705, 0x00000000, 0x0003a161, 0x03260220,
    0x00342805, 0x00000000, 0x0013a161, 0x05260220,
    0x00342905, 0x00000000, 0x00040024, 0x0001c060,
    0x00000068, 0x00000068, 0xa0271a40, 0x1c010242,
    0x27291970, 0x0210272b, 0x00031d61, 0x03060220,
    0x00342705, 0x00000000, 0x00131d61, 0x05060220,
    0x00342805, 0x00000000, 0xa02b1b40, 0x0212291a,
    0x00031961, 0x03260220, 0x00342b05, 0x00000000,
    0x00131a61, 0x05260220, 0x00342c05, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000001c8,
    0xa02c0040, 0x1c010202, 0x272e1970, 0x02102c03,
    0x00030061, 0x32060220, 0x00342c05, 0x00000000,
    0x00130061, 0x34060220, 0x00342d05, 0x00000000,
    0xa0301b40, 0x02122e12, 0x00031961, 0x32260220,
    0x00343005, 0x00000000, 0x00131a61, 0x34260220,
    0x00343105, 0x00000000, 0xe2710961, 0x00114004,
    0x80000965, 0x71058220, 0x02007104, 0xffffffff,
    0x8000194c, 0x38050220, 0x00007104, 0x00000000,
    0x80001969, 0x10018220, 0x02003804, 0x00000003,
    0x80000961, 0x3a060660, 0x00010180, 0x00000000,
    0x80000061, 0x3a260660, 0x00010190, 0x00000000,
    0x80031961, 0x57260660, 0x00003a24, 0x00000000,
    0x80031961, 0x57060660, 0x00003a04, 0x00000000,
    0xe2700061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004231, 0x36140000,
    0xfb00570c, 0x00340000, 0x80001a61, 0x30010220,
    0x00007004, 0x00000000, 0x80001e69, 0x10018220,
    0x02003804, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000600, 0x80000961, 0x3b060660,
    0x00010100, 0x00000000, 0x80000061, 0x3b260660,
    0x00010110, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x58260660,
    0x00003b24, 0x00000000, 0x80031961, 0x58060660,
    0x00003b04, 0x00000000, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004331, 0x00000000,
    0xfb08580c, 0x00343614, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0xe03c0068, 0x00800f03,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0x00040066, 0x3e050220, 0x02000244, 0x00000264,
    0x00041a70, 0x00010220, 0x42465205, 0x00463c05,
    0x01040028, 0x0001c660, 0x00000fa8, 0x00000fa8,
    0x00040069, 0x40058660, 0x02465205, 0x00000008,
    0x00041c70, 0x00018660, 0x16463e05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000170, 0x000000d8,
    0xe0421b68, 0x00604003, 0x00041969, 0x44058660,
    0x02464205, 0x00000003, 0x00031961, 0x46060220,
    0x00344405, 0x00000000, 0x00131a61, 0x48060220,
    0x00344505, 0x00000000, 0x00031a61, 0x46264220,
    0x00000000, 0x00000000, 0x00131a61, 0x48264220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x4a240000,
    0xfb004624, 0x00040000, 0x00032461, 0x04060220,
    0x00344a05, 0x00000000, 0x00132461, 0x06060220,
    0x00344b05, 0x00000000, 0x0003a461, 0x04260220,
    0x00344c05, 0x00000000, 0x0013a461, 0x06260220,
    0x00344d05, 0x00000000, 0x00040024, 0x0001c060,
    0x000000a8, 0x000000a8, 0xa04b1b40, 0x40010242,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x274d1970, 0x02104b2b, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x04060220,
    0x00344b05, 0x00000000, 0x80101d01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x06060220,
    0x00344c05, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa04f1b40, 0x02124d1a,
    0x00031961, 0x04260220, 0x00344f05, 0x00000000,
    0x00131a61, 0x06260220, 0x00345005, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000e08,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xa0500040, 0x40010202, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x270b1970, 0x02105003,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x56060220, 0x00345005, 0x00000000,
    0x80103301, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x58060220, 0x00345105, 0x00000000,
    0xa0541b40, 0x02120b12, 0x00031961, 0x56260220,
    0x00345405, 0x00000000, 0x00131a61, 0x58260220,
    0x00345505, 0x00000000, 0xe2720961, 0x00114004,
    0x80000965, 0x72058220, 0x02007204, 0xffffffff,
    0x8000194c, 0x5c050220, 0x00007204, 0x00000000,
    0x80001969, 0x10018220, 0x02005c04, 0x00000003,
    0x80000961, 0x5e060660, 0x00010200, 0x00000000,
    0x80000061, 0x5e260660, 0x00010210, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x62260660, 0x00005e24, 0x00000000,
    0x80031961, 0x62060660, 0x00005e04, 0x00000000,
    0xe26f0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004731, 0x5a140000,
    0xfb00620c, 0x00340000, 0x80001a61, 0x30010220,
    0x00006f04, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80001e69, 0x10018220,
    0x02005c04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000a00, 0x80000961, 0x5f060660,
    0x00010300, 0x00000000, 0x80000061, 0x5f260660,
    0x00010310, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x63260660,
    0x00005f24, 0x00000000, 0x80031961, 0x63060660,
    0x00005f04, 0x00000000, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004631, 0x00000000,
    0xfb08630c, 0x00345a14, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0600040, 0x04004003,
    0x00040070, 0x00018660, 0x16463e05, 0x00000000,
    0x01040022, 0x0001c060, 0x000001d0, 0x00000148,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xe0620068, 0x00606003, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x64058660,
    0x02466205, 0x00000003, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x66060220,
    0x00346405, 0x00000000, 0x80103501, 0x00000000,
    0x00000000, 0x00000000, 0x00131a61, 0x68060220,
    0x00346505, 0x00000000, 0x00031a61, 0x66264220,
    0x00000000, 0x00000000, 0x00131a61, 0x68264220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x6a240000,
    0xfb006624, 0x00040000, 0x00032561, 0x05060220,
    0x00346a05, 0x00000000, 0x00132561, 0x07060220,
    0x00346b05, 0x00000000, 0x0003a561, 0x05260220,
    0x00346c05, 0x00000000, 0x0013a561, 0x07260220,
    0x00346d05, 0x00000000, 0x00040024, 0x0001c060,
    0x00000098, 0x00000098, 0xa06b1b40, 0x60010242,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x276d1970, 0x02106b2b, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x05060220,
    0x00346b05, 0x00000000, 0x80101d01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x07060220,
    0x00346c05, 0x00000000, 0xa06f1b40, 0x02126d1a,
    0x00031961, 0x05260220, 0x00346f05, 0x00000000,
    0x00131a61, 0x07260220, 0x00347005, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000009a8,
    0xa0700040, 0x60010202, 0x27721970, 0x02107003,
    0x00030061, 0x76060220, 0x00347005, 0x00000000,
    0x00130061, 0x78060220, 0x00347105, 0x00000000,
    0xa0741b40, 0x02127212, 0x00031961, 0x76260220,
    0x00347405, 0x00000000, 0x00131a61, 0x78260220,
    0x00347505, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0xe27a0961, 0x00114004,
    0x80000965, 0x7a058220, 0x02007a04, 0xffffffff,
    0x8000194c, 0x7c050220, 0x00007a04, 0x00000000,
    0x80001969, 0x10018220, 0x02007c04, 0x00000003,
    0x80000961, 0x0f060660, 0x00010280, 0x00000000,
    0x80000061, 0x0f260660, 0x00010290, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x64260660, 0x00000f24, 0x00000000,
    0x80031961, 0x64060660, 0x00000f04, 0x00000000,
    0xe26e0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004831, 0x7a140000,
    0xfb00640c, 0x00340000, 0x80001a61, 0x30010220,
    0x00006e04, 0x00000000, 0x80001e69, 0x10018220,
    0x02007c04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000e00, 0x80000961, 0x10060660,
    0x00010300, 0x00000000, 0x80000061, 0x10260660,
    0x00010310, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x65260660,
    0x00001024, 0x00000000, 0x80031961, 0x65060660,
    0x00001004, 0x00000000, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004931, 0x00000000,
    0xfb08650c, 0x00347a14, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0110040, 0x08004003,
    0x00040070, 0x00018660, 0x16463e05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000190, 0x00000108,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xe0130068, 0x00601103, 0x00041969, 0x15058660,
    0x02461305, 0x00000003, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x17060220,
    0x00341505, 0x00000000, 0x80103a01, 0x00000000,
    0x00000000, 0x00000000, 0x00131a61, 0x19060220,
    0x00341605, 0x00000000, 0x00031a61, 0x17264220,
    0x00000000, 0x00000000, 0x00131a61, 0x19264220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044a31, 0x1b240000,
    0xfb001724, 0x00040000, 0x00032a61, 0x06060220,
    0x00341b05, 0x00000000, 0x00132a61, 0x08060220,
    0x00341c05, 0x00000000, 0x0003aa61, 0x06260220,
    0x00341d05, 0x00000000, 0x0013aa61, 0x08260220,
    0x00341e05, 0x00000000, 0x00040024, 0x0001c060,
    0x00000098, 0x00000098, 0xa01c1b40, 0x11010242,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x271e1970, 0x02101c2b, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x06060220,
    0x00341c05, 0x00000000, 0x80101d01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x08060220,
    0x00341d05, 0x00000000, 0xa0201b40, 0x02121e1a,
    0x00031961, 0x06260220, 0x00342005, 0x00000000,
    0x00131a61, 0x08260220, 0x00342105, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000005e8,
    0xa0213140, 0x11010202, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x27231970, 0x02102103,
    0x00030061, 0x27060220, 0x00342105, 0x00000000,
    0x00130061, 0x29060220, 0x00342205, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa0251b40, 0x02122312, 0x00031961, 0x27260220,
    0x00342505, 0x00000000, 0x00131a61, 0x29260220,
    0x00342605, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0xe27b0961, 0x00114004,
    0x80000965, 0x7b058220, 0x02007b04, 0xffffffff,
    0x8000194c, 0x2d050220, 0x00007b04, 0x00000000,
    0x80001969, 0x10018220, 0x02002d04, 0x00000003,
    0x80000961, 0x2f060660, 0x00010300, 0x00000000,
    0x80000061, 0x2f260660, 0x00010310, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x66260660, 0x00002f24, 0x00000000,
    0x80031961, 0x66060660, 0x00002f04, 0x00000000,
    0xe26d0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004531, 0x2b140000,
    0xfb00660c, 0x00340000, 0x80001a61, 0x30010220,
    0x00006d04, 0x00000000, 0x80001e69, 0x10018220,
    0x02002d04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000400, 0x80000961, 0x30060660,
    0x00010380, 0x00000000, 0x80000061, 0x30260660,
    0x00010390, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x67260660,
    0x00003024, 0x00000000, 0x80031961, 0x67060660,
    0x00003004, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004531, 0x00000000,
    0xfb08670c, 0x00342b14, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0310040, 0x0c004003,
    0x00040070, 0x00018660, 0x16463e05, 0x00000000,
    0x01040022, 0x0001c060, 0x000001c0, 0x00000128,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xe0330068, 0x00603103, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00041969, 0x35058660,
    0x02463305, 0x00000003, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x37060220,
    0x00343505, 0x00000000, 0x80103301, 0x00000000,
    0x00000000, 0x00000000, 0x00131a61, 0x39060220,
    0x00343605, 0x00000000, 0x00031a61, 0x37264220,
    0x00000000, 0x00000000, 0x00131a61, 0x39264220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x40240000,
    0xfb003724, 0x00040000, 0x00032361, 0x07060220,
    0x00344005, 0x00000000, 0x00132361, 0x09060220,
    0x00344105, 0x00000000, 0x0003a361, 0x07260220,
    0x00344205, 0x00000000, 0x0013a361, 0x09260220,
    0x00344305, 0x00000000, 0x00040024, 0x0001c060,
    0x000000a8, 0x000000a8, 0xa0411b40, 0x31010242,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x27431970, 0x0210412b, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x07060220,
    0x00344105, 0x00000000, 0x80101d01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x09060220,
    0x00344205, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xa0451b40, 0x0212431a,
    0x00031961, 0x07260220, 0x00344505, 0x00000000,
    0x00131a61, 0x09260220, 0x00344605, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000001e8,
    0xa0463440, 0x31010202, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x27481970, 0x02104603,
    0x00030061, 0x4c060220, 0x00344605, 0x00000000,
    0x00130061, 0x4e060220, 0x00344705, 0x00000000,
    0xa04a1b40, 0x02124812, 0x00031961, 0x4c260220,
    0x00344a05, 0x00000000, 0x00131a61, 0x4e260220,
    0x00344b05, 0x00000000, 0xe27c0961, 0x00114004,
    0x80000965, 0x7c058220, 0x02007c04, 0xffffffff,
    0x8000194c, 0x0b050220, 0x00007c04, 0x00000000,
    0x80001969, 0x10018220, 0x02000b04, 0x00000003,
    0x80000961, 0x54060660, 0x00010380, 0x00000000,
    0x80000061, 0x54260660, 0x00010390, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x68260660, 0x00005424, 0x00000000,
    0x80031961, 0x68060660, 0x00005404, 0x00000000,
    0xe26c0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004531, 0x50140000,
    0xfb00680c, 0x00340000, 0x80001a61, 0x30010220,
    0x00006c04, 0x00000000, 0x80001e69, 0x10018220,
    0x02000b04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000800, 0x80000961, 0x55060660,
    0x00010600, 0x00000000, 0x80000061, 0x55260660,
    0x00010610, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x69260660,
    0x00005524, 0x00000000, 0x80031961, 0x69060660,
    0x00005504, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004531, 0x00000000,
    0xfb08690c, 0x00345014, 0x00040052, 0x52044160,
    0x0e0e0003, 0x52050d05, 0x00040027, 0x00014060,
    0x00000000, 0xfffff048, 0x80030061, 0x7e050220,
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
      .base.program_size = 5168,
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
const char *gfx125_misc_copy_instances_sha1 = "911aadb4be33ce6a551a2c9b6df101179a2aa4cc";

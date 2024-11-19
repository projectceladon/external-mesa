#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_misc_copy_instances_indirect_relocs[] = {
};
static const u_printf_info gfx125_misc_copy_instances_indirect_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_misc_copy_instances_indirect_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g67<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g33<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g67UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g20<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g21<1>D         g33<8,8,1>D     0x00000004UD    { align1 1H I@2 };
add(8)          g20.8<1>UW      g20<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g18<1>UD        g20<8,8,1>UW                    { align1 1H };
add.z.f0.0(16)  null<1>D        g18<8,8,1>D     g21<8,8,1>D     { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g35.1<2>D       g2.5<0,1,0>D                    { align1 1Q };
mov(8)          g37.1<2>D       g2.5<0,1,0>D                    { align1 2Q };
mov(8)          g35<2>D         g2.4<0,1,0>D                    { align1 1Q I@2 };
mov(8)          g37<2>D         g2.4<0,1,0>D                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g13UD           g35UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
shl(16)         g17<1>D         g13<8,8,1>D     0x00000006UD    { align1 1H $1.dst };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
add(16)         g22<1>D         g2<0,1,0>D      156D            { align1 1H compacted };
cmp.l.f0.0(16)  g24<1>UD        g22<1,1,0>UD    0x0000009cUD    { align1 1H I@1 compacted };
mov(8)          g28<2>UD        g22<4,4,1>UD                    { align1 1Q };
mov(8)          g30<2>UD        g23<4,4,1>UD                    { align1 2Q };
add(16)         g26<1>D         -g24<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g28.1<2>UD      g26<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g30.1<2>UD      g27<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g28UD           g13UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $2 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
shr(16)         g29<1>UD        g17<1,1,0>UD    0x00000008UD    { align1 1H I@3 compacted };
mov(16)         g79<1>UD        g33<8,8,1>UD                    { align1 1H };
and(16)         g31<1>UD        g17<8,8,1>UD    0xffffff00UD    { align1 1H $2.src };
add3(16)        g39<1>D         65534W          -g29<8,8,1>D    g33<1,1,1>D { align1 1H I@3 };
add(16)         g33<1>D         g17<1,1,0>D     -g31<1,1,0>D    { align1 1H I@2 compacted };
mov(16)         g41<1>D         -g39<8,8,1>D                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
and(16)         g35<1>UD        g33<8,8,1>UD    0xffffffc0UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shr(16)         g37<1>UD        g35<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g41<8,8,1>UD    g37<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL2              { align1 1H };
shl(16)         g42<1>D         -g39<8,8,1>D    0x00000006UD    { align1 1H };
add(16)         g46<1>D         g2.2<0,1,0>D    g15<1,1,0>D     { align1 1H $1.dst compacted };
add(16)         g44<1>D         g31<1,1,0>D     g42<1,1,0>D     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g48<1>UD        g46<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@2 compacted };
add(16)         g50<1>D         -g48<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@1 compacted };
or.z.f0.0(16)   null<1>UD       g46<8,8,1>UD    g50<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL4          UIP:  LABEL3              { align1 1H };
shr(16)         g51<1>UD        g44<1,1,0>UD    0x00000006UD    { align1 1H I@5 compacted };
shl(16)         g53<1>D         g51<8,8,1>D     0x00000003UD    { align1 1H I@1 };
mov(8)          g55<2>UD        g53<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g57<2>UD        g54<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g55.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g57.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g59UD           g55UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov(8)          g3<2>UD         g59<4,4,1>UD                    { align1 1Q $3.dst };
mov(8)          g5<2>UD         g60<4,4,1>UD                    { align1 2Q $3.dst };
mov(8)          g3.1<2>UD       g61<4,4,1>UD                    { align1 1Q @2 $3.dst };
mov(8)          g5.1<2>UD       g62<4,4,1>UD                    { align1 2Q @2 $3.dst };
else(16)        JIP:  LABEL3          UIP:  LABEL3              { align1 1H };

LABEL4:
add(16)         g60<1>D         g15<1,1,0>D     g44<1,1,0>D     { align1 1H I@5 compacted };
cmp.l.f0.0(16)  g62<1>UD        g60<1,1,0>UD    g15<1,1,0>UD    { align1 1H I@1 compacted };
add(16)         g64<1>D         g2.2<0,1,0>D    g60<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g66<1>UD        g64<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g3<2>UD         g64<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g5<2>UD         g65<4,4,1>UD                    { align1 2Q I@7 };
add3(16)        g68<1>D         g2.3<0,1,0>D    -g62<8,8,1>D    -g66<1,1,1>D { align1 1H I@3 };
mov(8)          g3.1<2>UD       g68<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g5.1<2>UD       g69<4,4,1>UD                    { align1 2Q I@2 };

LABEL3:
endif(16)       JIP:  LABEL2                                    { align1 1H };
add(16)         g69<1>D         g2<0,1,0>D      g44<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g71<1>UD        g69<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g75<2>UD        g69<4,4,1>UD                    { align1 1Q };
mov(8)          g77<2>UD        g70<4,4,1>UD                    { align1 2Q };
add(16)         g73<1>D         -g71<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g75.1<2>UD      g73<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g77.1<2>UD      g74<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g62<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g62<1>UD        g62<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g81<1>UD        g62<0,1,0>UD                    { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g81<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g83<2>D         g[a0 96]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g83.1<2>D       g[a0 100]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g36.1<2>D       g83.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g36<2>D         g83<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g61<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g11UD    g36UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $4 };
mov(1)          f0<1>UD         g61<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g81<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g84<2>D         g[a0 352]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g84.1<2>D       g[a0 356]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g37.1<2>D       g84.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g37<2>D         g84<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g37UD           g11UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $5 };

LABEL2:
endif(16)       JIP:  LABEL5                                    { align1 1H };

LABEL5:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shr(16)         g85<1>UD        g31<1,1,0>UD    0x00000008UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
add(16)         g87<1>D         g2.2<0,1,0>D    g15<1,1,0>D     { align1 1H $1.dst compacted };
cmp.l.f0.0(16)  g89<1>UD        g87<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
add(16)         g91<1>D         -g89<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@1 compacted };
or(16)          g93<1>UD        g87<1,1,0>UD    g91<1,1,0>UD    { align1 1H I@1 compacted };

LABEL15:
cmp.ge.f0.0(16) null<1>UD       g79<8,8,1>UD    g85<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL6        UIP:  LABEL6              { align1 1H };
shl(16)         g95<1>D         g79<8,8,1>D     0x00000008UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g93<8,8,1>D     0D              { align1 1H I@4 };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
shr(16)         g97<1>UD        g95<1,1,0>UD    0x00000006UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shl(16)         g99<1>D         g97<8,8,1>D     0x00000003UD    { align1 1H I@1 };
mov(8)          g101<2>UD       g99<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
mov(8)          g103<2>UD       g100<4,4,1>UD                   { align1 2Q $6.src };
mov(8)          g101.1<2>UD     0x00000000UD                    { align1 1Q I@2 };
mov(8)          g103.1<2>UD     0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g105UD          g101UD          nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
mov(8)          g4<2>UD         g105<4,4,1>UD                   { align1 1Q $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $7.src };
mov(8)          g6<2>UD         g106<4,4,1>UD                   { align1 2Q $6.dst };
mov(8)          g4.1<2>UD       g107<4,4,1>UD                   { align1 1Q @2 $6.dst };
mov(8)          g6.1<2>UD       g108<4,4,1>UD                   { align1 2Q @2 $6.dst };
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g106<1>D        g15<1,1,0>D     g95<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
cmp.l.f0.0(16)  g108<1>UD       g106<1,1,0>UD   g15<1,1,0>UD    { align1 1H I@1 compacted };
add(16)         g110<1>D        g2.2<0,1,0>D    g106<1,1,0>D    { align1 1H $8.src compacted };
cmp.l.f0.0(16)  g112<1>UD       g110<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(8)          g4<2>UD         g110<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@7 };
mov(8)          g6<2>UD         g111<4,4,1>UD                   { align1 2Q };
add3(16)        g114<1>D        g2.3<0,1,0>D    -g108<8,8,1>D   -g112<1,1,1>D { align1 1H I@3 };
mov(8)          g4.1<2>UD       g114<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g6.1<2>UD       g115<4,4,1>UD                   { align1 2Q I@2 };

LABEL7:
endif(16)       JIP:  LABEL6                                    { align1 1H };
add(16)         g115<1>D        g2<0,1,0>D      g95<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g117<1>UD       g115<1,1,0>UD   g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g121<2>UD       g115<4,4,1>UD                   { align1 1Q };
mov(8)          g123<2>UD       g116<4,4,1>UD                   { align1 2Q };
add(16)         g119<1>D        -g117<1,1,0>D   g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g121.1<2>UD     g119<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g123.1<2>UD     g120<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(1)          g63<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g63<1>UD        g63<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
fbl(1)          g8<1>UD         g63<0,1,0>UD                    { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g8<0,1,0>UD     0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g17<2>D         g[a0 128]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g17.1<2>D       g[a0 132]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(8)          g38.1<2>D       g17.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g38<2>D         g17<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g60<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g125UD   g38UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $10 };
mov(1)          f0<1>UD         g60<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g8<0,1,0>UD     0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000e00UD    { align1 WE_all 1N A@1 };
mov(1)          g18<2>D         g[a0 288]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g18.1<2>D       g[a0 292]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(8)          g39.1<2>D       g18.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g39<2>D         g18<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g39UD           g125UD          0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g19<1>D         g95<1,1,0>D     64D             { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g93<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL9              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shr(16)         g21<1>UD        g19<1,1,0>UD    0x00000006UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g23<1>D         g21<8,8,1>D     0x00000003UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g25<2>UD        g23<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $2.src };
mov(8)          g27<2>UD        g24<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g25.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g27.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g31UD           g25UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mov(8)          g5<2>UD         g31<4,4,1>UD                    { align1 1Q $2.dst };
mov(8)          g7<2>UD         g32<4,4,1>UD                    { align1 2Q $2.dst };
mov(8)          g5.1<2>UD       g33<4,4,1>UD                    { align1 1Q @2 $2.dst };
mov(8)          g7.1<2>UD       g34<4,4,1>UD                    { align1 2Q @2 $2.dst };
else(16)        JIP:  LABEL9          UIP:  LABEL9              { align1 1H };

LABEL10:
add(16)         g32<1>D         g15<1,1,0>D     g19<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g34<1>UD        g32<1,1,0>UD    g15<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g36<1>D         g2.2<0,1,0>D    g32<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
cmp.l.f0.0(16)  g38<1>UD        g36<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(8)          g5<2>UD         g36<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@7 };
mov(8)          g7<2>UD         g37<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add3(16)        g40<1>D         g2.3<0,1,0>D    -g34<8,8,1>D    -g38<1,1,1>D { align1 1H };
mov(8)          g5.1<2>UD       g40<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g7.1<2>UD       g41<4,4,1>UD                    { align1 2Q I@2 };

LABEL9:
endif(16)       JIP:  LABEL6                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(16)         g41<1>D         g2<0,1,0>D      g19<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g43<1>UD        g41<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g47<2>UD        g41<4,4,1>UD                    { align1 1Q };
mov(8)          g49<2>UD        g42<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g45<1>D         -g43<1,1,0>D    g2.1<0,1,0>D    { align1 1H compacted };
mov(8)          g47.1<2>UD      g45<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g49.1<2>UD      g46<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(1)          g64<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g64<1>UD        g64<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g53<1>UD        g64<0,1,0>UD                    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
shl(1)          a0<1>UD         g53<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g55<2>D         g[a0 160]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g55.1<2>D       g[a0 164]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g40.1<2>D       g55.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g40<2>D         g55<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g59<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g51UD    g40UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $12 };
mov(1)          f0<1>UD         g59<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g53<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000400UD    { align1 WE_all 1N A@1 };
mov(1)          g56<2>D         g[a0 480]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g56.1<2>D       g[a0 484]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g41.1<2>D       g56.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g41<2>D         g56<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g41UD           g51UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g57<1>D         g95<1,1,0>D     128D            { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g93<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shr(16)         g59<1>UD        g57<1,1,0>UD    0x00000006UD    { align1 1H compacted };
shl(16)         g61<1>D         g59<8,8,1>D     0x00000003UD    { align1 1H I@1 };
mov(8)          g63<2>UD        g61<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g65<2>UD        g62<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g63.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g65.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g67UD           g63UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
mov(8)          g6<2>UD         g67<4,4,1>UD                    { align1 1Q $9.dst };
mov(8)          g8<2>UD         g68<4,4,1>UD                    { align1 2Q $9.dst };
mov(8)          g6.1<2>UD       g69<4,4,1>UD                    { align1 1Q @2 $9.dst };
mov(8)          g8.1<2>UD       g70<4,4,1>UD                    { align1 2Q @2 $9.dst };
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
add(16)         g68<1>D         g15<1,1,0>D     g57<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g70<1>UD        g68<1,1,0>UD    g15<1,1,0>UD    { align1 1H I@1 compacted };
add(16)         g72<1>D         g2.2<0,1,0>D    g68<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g74<1>UD        g72<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(8)          g6<2>UD         g72<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@7 };
mov(8)          g8<2>UD         g73<4,4,1>UD                    { align1 2Q };
add3(16)        g76<1>D         g2.3<0,1,0>D    -g70<8,8,1>D    -g74<1,1,1>D { align1 1H I@3 };
mov(8)          g6.1<2>UD       g76<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g8.1<2>UD       g77<4,4,1>UD                    { align1 2Q I@2 };

LABEL11:
endif(16)       JIP:  LABEL6                                    { align1 1H };
add(16)         g77<1>D         g2<0,1,0>D      g57<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g11<1>UD        g77<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g87<2>UD        g77<4,4,1>UD                    { align1 1Q };
mov(8)          g89<2>UD        g78<4,4,1>UD                    { align1 2Q };
add(16)         g81<1>D         -g11<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g87.1<2>UD      g81<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g89.1<2>UD      g82<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(1)          g65<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g65<1>UD        g65<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g97<1>UD        g65<0,1,0>UD                    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shl(1)          a0<1>UD         g97<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g99<2>D         g[a0 192]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g99.1<2>D       g[a0 196]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g42.1<2>D       g99.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g42<2>D         g99<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g49<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g91UD    g42UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $14 };
mov(1)          f0<1>UD         g49<0,1,0>UD                    { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shl(1)          a0<1>UD         g97<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g100<2>D        g[a0 224]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g100.1<2>D      g[a0 228]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g43.1<2>D       g100.1<0,1,0>D                  { align1 WE_all 1Q I@2 };
mov(8)          g43<2>D         g100<0,1,0>D                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g43UD           g91UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g101<1>D        g95<1,1,0>D     192D            { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g93<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL14         UIP:  LABEL13             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shr(16)         g103<1>UD       g101<1,1,0>UD   0x00000006UD    { align1 1H $6.src compacted };
shl(16)         g105<1>D        g103<8,8,1>D    0x00000003UD    { align1 1H I@1 };
mov(8)          g107<2>UD       g105<4,4,1>UD                   { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $8.src };
mov(8)          g109<2>UD       g106<4,4,1>UD                   { align1 2Q I@2 };
mov(8)          g107.1<2>UD     0x00000000UD                    { align1 1Q I@2 };
mov(8)          g109.1<2>UD     0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g111UD          g107UD          nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
mov(8)          g7<2>UD         g111<4,4,1>UD                   { align1 1Q $8.dst };
mov(8)          g9<2>UD         g112<4,4,1>UD                   { align1 2Q $8.dst };
mov(8)          g7.1<2>UD       g113<4,4,1>UD                   { align1 1Q @2 $8.dst };
mov(8)          g9.1<2>UD       g114<4,4,1>UD                   { align1 2Q @2 $8.dst };
else(16)        JIP:  LABEL13         UIP:  LABEL13             { align1 1H };

LABEL14:
add(16)         g112<1>D        g15<1,1,0>D     g101<1,1,0>D    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g114<1>UD       g112<1,1,0>UD   g15<1,1,0>UD    { align1 1H I@1 compacted };
add(16)         g116<1>D        g2.2<0,1,0>D    g112<1,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g118<1>UD       g116<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(8)          g7<2>UD         g116<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@7 };
mov(8)          g9<2>UD         g117<4,4,1>UD                   { align1 2Q };
add3(16)        g120<1>D        g2.3<0,1,0>D    -g114<8,8,1>D   -g118<1,1,1>D { align1 1H I@3 };
mov(8)          g7.1<2>UD       g120<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g9.1<2>UD       g121<4,4,1>UD                   { align1 2Q I@2 };

LABEL13:
endif(16)       JIP:  LABEL6                                    { align1 1H };
add(16)         g121<1>D        g2<0,1,0>D      g101<1,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g123<1>UD       g121<1,1,0>UD   g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g3<2>UD         g121<4,4,1>UD                   { align1 1Q };
mov(8)          g5<2>UD         g122<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(16)         g125<1>D        -g123<1,1,0>D   g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g3.1<2>UD       g125<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g5.1<2>UD       g126<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(1)          g66<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g66<1>UD        g66<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g17<1>UD        g66<0,1,0>UD                    { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g17<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g19<2>D         g[a0 224]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g19.1<2>D       g[a0 228]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g44.1<2>D       g19.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g44<2>D         g19<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g48<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g7UD     g44UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(1)          f0<1>UD         g48<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g17<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
mov(1)          g20<2>D         g[a0 96]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g20.1<2>D       g[a0 100]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g45.1<2>D       g20.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g45<2>D         g20<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g45UD           g7UD            0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $7 };
add3(16)        g79<1>D         0x0003UW        g29<8,8,1>D     g79<1,1,1>D { align1 1H };

LABEL6:
while(16)       JIP:  LABEL15                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_instances_indirect_code[] = {
    0x80000065, 0x43058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x21050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00430c, 0x00340000,
    0x80030061, 0x14054410, 0x00000000, 0x76543210,
    0x00041a69, 0x15058660, 0x02462105, 0x00000004,
    0x64141a40, 0x00801495, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x12050120,
    0x00461405, 0x00000000, 0x00041940, 0x00010660,
    0x16461205, 0x00461505, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x23260660,
    0x000002a4, 0x00000000, 0x00130061, 0x25260660,
    0x000002a4, 0x00000000, 0x00031a61, 0x23060660,
    0x00000284, 0x00000000, 0x00131a61, 0x25060660,
    0x00000284, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x0d240000,
    0xfb002324, 0x00040000, 0x00042169, 0x11058660,
    0x02460d05, 0x00000006, 0x01040022, 0x0001c060,
    0x00000088, 0x00000088, 0xa0160040, 0x09c10203,
    0xe7181970, 0x09c01603, 0x00030061, 0x1c060220,
    0x00341605, 0x00000000, 0x00130061, 0x1e060220,
    0x00341705, 0x00000000, 0xa01a1b40, 0x02121812,
    0x00031961, 0x1c260220, 0x00341a05, 0x00000000,
    0x00131a61, 0x1e260220, 0x00341b05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x00000000, 0xfb081c24, 0x00000d14,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xe01d1b68, 0x00801103, 0x00040061, 0x4f050220,
    0x00462105, 0x00000000, 0x00043265, 0x1f058220,
    0x02461105, 0xffffff00, 0x00041b52, 0x27044560,
    0x0e8efffe, 0x21051d05, 0xa0211a40, 0x1f201102,
    0x00041a61, 0x29052660, 0x00462705, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00041a65, 0x23058220, 0x02462105, 0xffffffc0,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xe0251968, 0x00602303, 0x00041970, 0x00010220,
    0x52462905, 0x00462505, 0x01040022, 0x0001c060,
    0x00000370, 0x00000370, 0x00040069, 0x2a05a660,
    0x02462705, 0x00000006, 0xa02e2140, 0x0f010242,
    0xa02c1a40, 0x2a001f02, 0x27301a70, 0x02102e2b,
    0xa0321940, 0x0212301a, 0x00041966, 0x00010220,
    0x12462e05, 0x00463205, 0x01040022, 0x0001c060,
    0x00000158, 0x000000d8, 0xe0331d68, 0x00602c03,
    0x00041969, 0x35058660, 0x02463305, 0x00000003,
    0x00031961, 0x37060220, 0x00343505, 0x00000000,
    0x00131a61, 0x39060220, 0x00343605, 0x00000000,
    0x00031a61, 0x37264220, 0x00000000, 0x00000000,
    0x00131a61, 0x39264220, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x3b240000, 0xfb003724, 0x00040000,
    0x00032361, 0x03060220, 0x00343b05, 0x00000000,
    0x00132361, 0x05060220, 0x00343c05, 0x00000000,
    0x0003a361, 0x03260220, 0x00343d05, 0x00000000,
    0x0013a361, 0x05260220, 0x00343e05, 0x00000000,
    0x00040024, 0x0001c060, 0x00000090, 0x00000090,
    0xa03c1d40, 0x2c000f02, 0x273e1970, 0x0f003c03,
    0xa0400040, 0x3c010242, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x27421970, 0x0210402b,
    0x00031f61, 0x03060220, 0x00344005, 0x00000000,
    0x00131f61, 0x05060220, 0x00344105, 0x00000000,
    0x00041b52, 0x44040660, 0x0eae0264, 0x42053e05,
    0x00031961, 0x03260220, 0x00344405, 0x00000000,
    0x00131a61, 0x05260220, 0x00344505, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000001c8,
    0xa0450040, 0x2c010202, 0x27471970, 0x02104503,
    0x00030061, 0x4b060220, 0x00344505, 0x00000000,
    0x00130061, 0x4d060220, 0x00344605, 0x00000000,
    0xa0491b40, 0x02124712, 0x00031961, 0x4b260220,
    0x00344905, 0x00000000, 0x00131a61, 0x4d260220,
    0x00344a05, 0x00000000, 0xe23e0961, 0x00114004,
    0x80000965, 0x3e058220, 0x02003e04, 0xffffffff,
    0x8000194c, 0x51050220, 0x00003e04, 0x00000000,
    0x80001969, 0x10018220, 0x02005104, 0x00000003,
    0x80000961, 0x53060660, 0x00010180, 0x00000000,
    0x80000061, 0x53260660, 0x00010190, 0x00000000,
    0x80031961, 0x24260660, 0x00005324, 0x00000000,
    0x80031961, 0x24060660, 0x00005304, 0x00000000,
    0xe23d0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004431, 0x0b140000,
    0xfb00240c, 0x00340000, 0x80001a61, 0x30010220,
    0x00003d04, 0x00000000, 0x80001e69, 0x10018220,
    0x02005104, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000800, 0x80000961, 0x54060660,
    0x00010580, 0x00000000, 0x80000061, 0x54260660,
    0x00010590, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x25260660,
    0x00005424, 0x00000000, 0x80031961, 0x25060660,
    0x00005404, 0x00000000, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004531, 0x00000000,
    0xfb08250c, 0x00340b14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0xe0550068, 0x00801f03,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0xa0572140, 0x0f010242, 0x27591970, 0x0210572b,
    0xa05b1940, 0x0212591a, 0x205d1966, 0x5b005703,
    0x00041a70, 0x00010220, 0x42464f05, 0x00465505,
    0x01040028, 0x0001c660, 0x00001078, 0x00001078,
    0x00040069, 0x5f058660, 0x02464f05, 0x00000008,
    0x00041c70, 0x00018660, 0x16465d05, 0x00000000,
    0x01040022, 0x0001c060, 0x000001f8, 0x00000118,
    0xe0611b68, 0x00605f03, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00041969, 0x63058660,
    0x02466105, 0x00000003, 0x00031961, 0x65060220,
    0x00346305, 0x00000000, 0x80101a01, 0x00000000,
    0x00000000, 0x00000000, 0x00133661, 0x67060220,
    0x00346405, 0x00000000, 0x00031a61, 0x65264220,
    0x00000000, 0x00000000, 0x00131a61, 0x67264220,
    0x00000000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x69240000,
    0xfb006524, 0x00040000, 0x00032661, 0x04060220,
    0x00346905, 0x00000000, 0x80103701, 0x00000000,
    0x00000000, 0x00000000, 0x00132661, 0x06060220,
    0x00346a05, 0x00000000, 0x0003a661, 0x04260220,
    0x00346b05, 0x00000000, 0x0013a661, 0x06260220,
    0x00346c05, 0x00000000, 0x00040024, 0x0001c060,
    0x000000f0, 0x000000f0, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xa06a1b40, 0x5f000f02,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x276c1970, 0x0f006a03, 0xa06e3840, 0x6a010242,
    0x27701970, 0x02106e2b, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x04060220,
    0x00346e05, 0x00000000, 0x80103701, 0x00000000,
    0x00000000, 0x00000000, 0x80101f01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x06060220,
    0x00346f05, 0x00000000, 0x00041b52, 0x72040660,
    0x0eae0264, 0x70056c05, 0x00031961, 0x04260220,
    0x00347205, 0x00000000, 0x00131a61, 0x06260220,
    0x00347305, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000e50, 0xa0730040, 0x5f010202,
    0x27751970, 0x02107303, 0x00030061, 0x79060220,
    0x00347305, 0x00000000, 0x00130061, 0x7b060220,
    0x00347405, 0x00000000, 0xa0771b40, 0x02127512,
    0x00031961, 0x79260220, 0x00347705, 0x00000000,
    0x00131a61, 0x7b260220, 0x00347805, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xe23f0961, 0x00114004, 0x80000965, 0x3f058220,
    0x02003f04, 0xffffffff, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x8000194c, 0x08050220,
    0x00003f04, 0x00000000, 0x80001969, 0x10018220,
    0x02000804, 0x00000003, 0x80000961, 0x11060660,
    0x00010200, 0x00000000, 0x80000061, 0x11260660,
    0x00010210, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80031961, 0x26260660,
    0x00001124, 0x00000000, 0x80031961, 0x26060660,
    0x00001104, 0x00000000, 0xe23c0061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004a31, 0x7d140000, 0xfb00260c, 0x00340000,
    0x80001a61, 0x30010220, 0x00003c04, 0x00000000,
    0x80001e69, 0x10018220, 0x02000804, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000e00,
    0x80000961, 0x12060660, 0x00010480, 0x00000000,
    0x80000061, 0x12260660, 0x00010490, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80031a61, 0x27260660, 0x00001224, 0x00000000,
    0x80031961, 0x27060660, 0x00001204, 0x00000000,
    0x80002a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004b31, 0x00000000, 0xfb08270c, 0x00347d14,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0xa0130040, 0x04005f03, 0x00040070, 0x00018660,
    0x16465d05, 0x00000000, 0x01040022, 0x0001c060,
    0x00000218, 0x00000118, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xe0150068, 0x00601303,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x17058660, 0x02461505, 0x00000003,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00031961, 0x19060220, 0x00341705, 0x00000000,
    0x80103201, 0x00000000, 0x00000000, 0x00000000,
    0x00131a61, 0x1b060220, 0x00341805, 0x00000000,
    0x00031a61, 0x19264220, 0x00000000, 0x00000000,
    0x00131a61, 0x1b264220, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x1f240000, 0xfb001924, 0x00040000,
    0x00032261, 0x05060220, 0x00341f05, 0x00000000,
    0x00132261, 0x07060220, 0x00342005, 0x00000000,
    0x0003a261, 0x05260220, 0x00342105, 0x00000000,
    0x0013a261, 0x07260220, 0x00342205, 0x00000000,
    0x00040024, 0x0001c060, 0x00000110, 0x00000110,
    0xa0201b40, 0x13000f02, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x27221970, 0x0f002003,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xa0240040, 0x20010242, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x27261970, 0x0210242b,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x05060220, 0x00342405, 0x00000000,
    0x80101f01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x07060220, 0x00342505, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x28040660, 0x0eae0264, 0x26052205,
    0x00031961, 0x05260220, 0x00342805, 0x00000000,
    0x00131a61, 0x07260220, 0x00342905, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000009d8,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0xa0290040, 0x13010202, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x272b1970, 0x02102903,
    0x00030061, 0x2f060220, 0x00342905, 0x00000000,
    0x00130061, 0x31060220, 0x00342a05, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa02d0040, 0x02122b12, 0x00031961, 0x2f260220,
    0x00342d05, 0x00000000, 0x00131a61, 0x31260220,
    0x00342e05, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0xe2400961, 0x00114004,
    0x80000965, 0x40058220, 0x02004004, 0xffffffff,
    0x8000194c, 0x35050220, 0x00004004, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02003504, 0x00000003,
    0x80000961, 0x37060660, 0x00010280, 0x00000000,
    0x80000061, 0x37260660, 0x00010290, 0x00000000,
    0x80031961, 0x28260660, 0x00003724, 0x00000000,
    0x80031961, 0x28060660, 0x00003704, 0x00000000,
    0xe23b0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004c31, 0x33140000,
    0xfb00280c, 0x00340000, 0x80001a61, 0x30010220,
    0x00003b04, 0x00000000, 0x80001e69, 0x10018220,
    0x02003504, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000400, 0x80000961, 0x38060660,
    0x00010780, 0x00000000, 0x80000061, 0x38260660,
    0x00010790, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x29260660,
    0x00003824, 0x00000000, 0x80031961, 0x29060660,
    0x00003804, 0x00000000, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004d31, 0x00000000,
    0xfb08290c, 0x00343314, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0390040, 0x08005f03,
    0x00040070, 0x00018660, 0x16465d05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000198, 0x000000f8,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xe03b0068, 0x00603903, 0x00041969, 0x3d058660,
    0x02463b05, 0x00000003, 0x00031961, 0x3f060220,
    0x00343d05, 0x00000000, 0x00131a61, 0x41060220,
    0x00343e05, 0x00000000, 0x00031a61, 0x3f264220,
    0x00000000, 0x00000000, 0x00131a61, 0x41264220,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x43240000,
    0xfb003f24, 0x00040000, 0x00032961, 0x06060220,
    0x00344305, 0x00000000, 0x00132961, 0x08060220,
    0x00344405, 0x00000000, 0x0003a961, 0x06260220,
    0x00344505, 0x00000000, 0x0013a961, 0x08260220,
    0x00344605, 0x00000000, 0x00040024, 0x0001c060,
    0x000000b0, 0x000000b0, 0xa0441b40, 0x39000f02,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x27461970, 0x0f004403, 0xa0480040, 0x44010242,
    0x274a1970, 0x0210482b, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x06060220,
    0x00344805, 0x00000000, 0x80101f01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x08060220,
    0x00344905, 0x00000000, 0x00041b52, 0x4c040660,
    0x0eae0264, 0x4a054605, 0x00031961, 0x06260220,
    0x00344c05, 0x00000000, 0x00131a61, 0x08260220,
    0x00344d05, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x000005c0, 0xa04d0040, 0x39010202,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x270b1970, 0x02104d03, 0x00030061, 0x57060220,
    0x00344d05, 0x00000000, 0x00130061, 0x59060220,
    0x00344e05, 0x00000000, 0xa0511b40, 0x02120b12,
    0x00031961, 0x57260220, 0x00345105, 0x00000000,
    0x00131a61, 0x59260220, 0x00345205, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xe2410961, 0x00114004, 0x80000965, 0x41058220,
    0x02004104, 0xffffffff, 0x8000194c, 0x61050220,
    0x00004104, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001969, 0x10018220,
    0x02006104, 0x00000003, 0x80000961, 0x63060660,
    0x00010300, 0x00000000, 0x80000061, 0x63260660,
    0x00010310, 0x00000000, 0x80031961, 0x2a260660,
    0x00006324, 0x00000000, 0x80031961, 0x2a060660,
    0x00006304, 0x00000000, 0xe2310061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004e31, 0x5b140000, 0xfb002a0c, 0x00340000,
    0x80001a61, 0x30010220, 0x00003104, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001e69, 0x10018220, 0x02006104, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000a00,
    0x80000961, 0x64060660, 0x00010380, 0x00000000,
    0x80000061, 0x64260660, 0x00010390, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80031a61, 0x2b260660, 0x00006424, 0x00000000,
    0x80031961, 0x2b060660, 0x00006404, 0x00000000,
    0x80002e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004f31, 0x00000000, 0xfb082b0c, 0x00345b14,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0xa0650040, 0x0c005f03, 0x00040070, 0x00018660,
    0x16465d05, 0x00000000, 0x01040022, 0x0001c060,
    0x00000198, 0x000000f8, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xe0673668, 0x00606503,
    0x00041969, 0x69058660, 0x02466705, 0x00000003,
    0x00031961, 0x6b060220, 0x00346905, 0x00000000,
    0x80103801, 0x00000000, 0x00000000, 0x00000000,
    0x00131a61, 0x6d060220, 0x00346a05, 0x00000000,
    0x00031a61, 0x6b264220, 0x00000000, 0x00000000,
    0x00131a61, 0x6d264220, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x6f240000, 0xfb006b24, 0x00040000,
    0x00032861, 0x07060220, 0x00346f05, 0x00000000,
    0x00132861, 0x09060220, 0x00347005, 0x00000000,
    0x0003a861, 0x07260220, 0x00347105, 0x00000000,
    0x0013a861, 0x09260220, 0x00347205, 0x00000000,
    0x00040024, 0x0001c060, 0x000000b0, 0x000000b0,
    0xa0701b40, 0x65000f02, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x27721970, 0x0f007003,
    0xa0740040, 0x70010242, 0x27761970, 0x0210742b,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x07060220, 0x00347405, 0x00000000,
    0x80101f01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x09060220, 0x00347505, 0x00000000,
    0x00041b52, 0x78040660, 0x0eae0264, 0x76057205,
    0x00031961, 0x07260220, 0x00347805, 0x00000000,
    0x00131a61, 0x09260220, 0x00347905, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000001e8,
    0xa0790040, 0x65010202, 0x277b1970, 0x02107903,
    0x00030061, 0x03060220, 0x00347905, 0x00000000,
    0x00130061, 0x05060220, 0x00347a05, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0xa07d1b40, 0x02127b12, 0x00031961, 0x03260220,
    0x00347d05, 0x00000000, 0x00131a61, 0x05260220,
    0x00347e05, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0xe2420961, 0x00114004,
    0x80000965, 0x42058220, 0x02004204, 0xffffffff,
    0x8000194c, 0x11050220, 0x00004204, 0x00000000,
    0x80001969, 0x10018220, 0x02001104, 0x00000003,
    0x80000961, 0x13060660, 0x00010380, 0x00000000,
    0x80000061, 0x13260660, 0x00010390, 0x00000000,
    0x80031961, 0x2c260660, 0x00001324, 0x00000000,
    0x80031961, 0x2c060660, 0x00001304, 0x00000000,
    0xe2300061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004031, 0x07140000,
    0xfb002c0c, 0x00340000, 0x80001a61, 0x30010220,
    0x00003004, 0x00000000, 0x80001e69, 0x10018220,
    0x02001104, 0x00000003, 0x80000961, 0x14060660,
    0x00010180, 0x00000000, 0x80000061, 0x14260660,
    0x00010190, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x2d260660,
    0x00001424, 0x00000000, 0x80031961, 0x2d060660,
    0x00001404, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004731, 0x00000000,
    0xfb082d0c, 0x00340714, 0x00040052, 0x4f044160,
    0x0e0e0003, 0x4f051d05, 0x00040027, 0x00014060,
    0x00000000, 0xffffef78, 0x80030061, 0x7e050220,
    0x00460005, 0x00000000, 0x80040931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_misc_copy_instances_indirect = {
   .prog_data = {
      .base.nr_params = 14,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 5856,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_misc_copy_instances_indirect_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_misc_copy_instances_indirect_printfs,
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
   .args = gfx125_misc_copy_instances_indirect_args,
   .code = gfx125_misc_copy_instances_indirect_code,
};
const char *gfx125_misc_copy_instances_indirect_sha1 = "1b5d076627690fdb69a2a32d2062dd7b27ed9a5f";

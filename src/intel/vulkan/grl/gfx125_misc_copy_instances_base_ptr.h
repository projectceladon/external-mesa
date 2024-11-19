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

and(1)          g15<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g104<1>UD       g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g15UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(16)         g100<1>UD       g104<8,8,1>UD                   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g13<1>D         g2<0,1,0>D      152D            { align1 1H compacted };
shr(16)         g31<1>UD        g2.4<0,1,0>UD   0x00000008UD    { align1 1H compacted };
and(16)         g33<1>UD        g2.4<0,1,0>UD   0xffffff00UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g15<1>UD        g13<1,1,0>UD    0x00000098UD    { align1 1H I@3 compacted };
mov(8)          g19<2>UD        g13<4,4,1>UD                    { align1 1Q };
mov(8)          g21<2>UD        g14<4,4,1>UD                    { align1 2Q };
add3(16)        g41<1>D         65534W          -g31<8,8,1>D    g104<1,1,1>D { align1 1H I@5 };
add(16)         g35<1>D         g2.4<0,1,0>D    -g33<1,1,0>D    { align1 1H I@5 compacted };
add(16)         g17<1>D         -g15<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@5 compacted };
mov(16)         g43<1>D         -g41<8,8,1>D                    { align1 1H I@3 };
and(16)         g37<1>UD        g35<8,8,1>UD    0xffffffc0UD    { align1 1H I@3 };
mov(8)          g19.1<2>UD      g17<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g21.1<2>UD      g18<4,4,1>UD                    { align1 2Q I@4 };
shr(16)         g39<1>UD        g37<1,1,0>UD    0x00000006UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g23UD           g19UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
add(16)         g25<1>D         g2<0,1,0>D      g23<1,1,0>D     { align1 1H $1.dst compacted };
cmp.l.f0.0(16)  g27<1>UD        g25<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g43<8,8,1>UD    g39<8,8,1>UD    { align1 1H I@3 };
add(16)         g29<1>D         -g27<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@2 compacted };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g44<1>D         -g41<8,8,1>D    0x00000006UD    { align1 1H };
or.z.f0.0(16)   null<1>UD       g2.2<0,1,0>UD   g2.3<0,1,0>UD   { align1 1H };
add(16)         g46<1>D         g33<1,1,0>D     g44<1,1,0>D     { align1 1H I@2 compacted };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL1              { align1 1H };
shr(16)         g48<1>UD        g46<1,1,0>UD    0x00000006UD    { align1 1H I@2 compacted };
shl(16)         g50<1>D         g48<8,8,1>D     0x00000003UD    { align1 1H I@1 };
mov(8)          g52<2>UD        g50<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g54<2>UD        g51<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g52.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g54.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g56UD           g52UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mov(8)          g3<2>UD         g56<4,4,1>UD                    { align1 1Q $2.dst };
mov(8)          g5<2>UD         g57<4,4,1>UD                    { align1 2Q $2.dst };
mov(8)          g3.1<2>UD       g58<4,4,1>UD                    { align1 1Q @2 $2.dst };
mov(8)          g5.1<2>UD       g59<4,4,1>UD                    { align1 2Q @2 $2.dst };
else(16)        JIP:  LABEL1          UIP:  LABEL1              { align1 1H };

LABEL2:
add(16)         g57<1>D         g2.2<0,1,0>D    g46<1,1,0>D     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g59<1>UD        g57<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g3<2>UD         g57<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g5<2>UD         g58<4,4,1>UD                    { align1 2Q I@5 };
add(16)         g61<1>D         -g59<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g3.1<2>UD       g61<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g5.1<2>UD       g62<4,4,1>UD                    { align1 2Q I@2 };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
add(16)         g62<1>D         g25<1,1,0>D     g46<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g64<1>UD        g62<1,1,0>UD    g25<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g68<2>UD        g62<4,4,1>UD                    { align1 1Q };
mov(8)          g70<2>UD        g63<4,4,1>UD                    { align1 2Q };
add(16)         g66<1>D         -g64<1,1,0>D    g29<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g68.1<2>UD      g66<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g70.1<2>UD      g67<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g8<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g8<1>UD         g8<0,1,0>UD     0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g74<1>UD        g8<0,1,0>UD                     { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g74<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g76<2>D         g[a0 96]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g76.1<2>D       g[a0 100]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g105.1<2>D      g76.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g105<2>D        g76<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g7<1>UD         f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g72UD    g105UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $3 };
mov(1)          f0<1>UD         g7<0,1,0>UD                     { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g74<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g77<2>D         g[a0 128]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g77.1<2>D       g[a0 132]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g106.1<2>D      g77.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g106<2>D        g77<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g106UD          g72UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $4 };

LABEL0:
endif(16)       JIP:  LABEL3                                    { align1 1H };

LABEL3:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shr(16)         g78<1>UD        g33<1,1,0>UD    0x00000008UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
or(16)          g80<1>UD        g2.2<0,1,0>UD   g2.3<0,1,0>UD   { align1 1H };

LABEL13:
cmp.ge.f0.0(16) null<1>UD       g100<8,8,1>UD   g78<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
shl(16)         g82<1>D         g100<8,8,1>D    0x00000008UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g80<8,8,1>D     0D              { align1 1H I@4 };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL5              { align1 1H };
shr(16)         g84<1>UD        g82<1,1,0>UD    0x00000006UD    { align1 1H I@3 compacted };
shl(16)         g86<1>D         g84<8,8,1>D     0x00000003UD    { align1 1H I@1 };
mov(8)          g88<2>UD        g86<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g90<2>UD        g87<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g88.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g90.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g92UD           g88UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mov(8)          g4<2>UD         g92<4,4,1>UD                    { align1 1Q $5.dst };
mov(8)          g6<2>UD         g93<4,4,1>UD                    { align1 2Q $5.dst };
mov(8)          g4.1<2>UD       g94<4,4,1>UD                    { align1 1Q @2 $5.dst };
mov(8)          g6.1<2>UD       g95<4,4,1>UD                    { align1 2Q @2 $5.dst };
else(16)        JIP:  LABEL5          UIP:  LABEL5              { align1 1H };

LABEL6:
add(16)         g93<1>D         g2.2<0,1,0>D    g82<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g95<1>UD        g93<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
mov(8)          g4<2>UD         g93<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@5 };
mov(8)          g6<2>UD         g94<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g97<1>D         -g95<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g4.1<2>UD       g97<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g6.1<2>UD       g98<4,4,1>UD                    { align1 2Q I@2 };

LABEL5:
endif(16)       JIP:  LABEL4                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g98<1>D         g25<1,1,0>D     g82<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g11<1>UD        g98<1,1,0>UD    g25<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g104<2>UD       g98<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $4.src };
mov(8)          g106<2>UD       g99<4,4,1>UD                    { align1 2Q };
add(16)         g102<1>D        -g11<1,1,0>D    g29<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g104.1<2>UD     g102<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g106.1<2>UD     g103<4,4,1>UD                   { align1 2Q I@2 };
mov(1)          g9<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g9<1>UD         g9<0,1,0>UD     0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g110<1>UD       g9<0,1,0>UD                     { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g110<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g112<2>D        g[a0 128]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g112.1<2>D      g[a0 132]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g116.1<2>D      g112.1<0,1,0>D                  { align1 WE_all 1Q I@1 };
mov(8)          g116<2>D        g112<0,1,0>D                    { align1 WE_all 1Q I@1 };
mov(1)          g3<1>UD         f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g108UD   g116UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $8 };
mov(1)          f0<1>UD         g3<0,1,0>UD                     { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
shl(1)          a0<1>UD         g110<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000c00UD    { align1 WE_all 1N A@1 };
mov(1)          g113<2>D        g[a0 256]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g113.1<2>D      g[a0 260]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g117.1<2>D      g113.1<0,1,0>D                  { align1 WE_all 1Q I@2 };
mov(8)          g117<2>D        g113<0,1,0>D                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g117UD          g108UD          0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g114<1>D        g82<1,1,0>D     64D             { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g80<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shr(16)         g116<1>UD       g114<1,1,0>UD   0x00000006UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g118<1>D        g116<8,8,1>D    0x00000003UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g120<2>UD       g118<4,4,1>UD                   { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $6.src };
mov(8)          g122<2>UD       g119<4,4,1>UD                   { align1 2Q I@2 };
mov(8)          g120.1<2>UD     0x00000000UD                    { align1 1Q I@2 };
mov(8)          g122.1<2>UD     0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g124UD          g120UD          nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
mov(8)          g5<2>UD         g124<4,4,1>UD                   { align1 1Q $6.dst };
mov(8)          g7<2>UD         g125<4,4,1>UD                   { align1 2Q $6.dst };
mov(8)          g5.1<2>UD       g126<4,4,1>UD                   { align1 1Q @2 $6.dst };
mov(8)          g7.1<2>UD       g127<4,4,1>UD                   { align1 2Q @2 $6.dst };
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
add(16)         g125<1>D        g2.2<0,1,0>D    g114<1,1,0>D    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g3<1>UD         g125<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
mov(8)          g5<2>UD         g125<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@5 };
mov(8)          g7<2>UD         g126<4,4,1>UD                   { align1 2Q };
add(16)         g9<1>D          -g3<1,1,0>D     g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g5.1<2>UD       g9<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g7.1<2>UD       g10<4,4,1>UD                    { align1 2Q I@2 };

LABEL7:
endif(16)       JIP:  LABEL4                                    { align1 1H };
add(16)         g13<1>D         g25<1,1,0>D     g114<1,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g15<1>UD        g13<1,1,0>UD    g25<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g19<2>UD        g13<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g21<2>UD        g14<4,4,1>UD                    { align1 2Q };
add(16)         g17<1>D         -g15<1,1,0>D    g29<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g19.1<2>UD      g17<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g21.1<2>UD      g18<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g10<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g10<1>UD        g10<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g27<1>UD        g10<0,1,0>UD                    { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g27<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g33<2>D         g[a0 160]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g33.1<2>D       g[a0 164]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(8)          g118.1<2>D      g33.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g118<2>D        g33<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g1<1>UD         f0<0,1,0>UD                     { align1 WE_all 1N $0.dst compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g23UD    g118UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $9 };
mov(1)          f0<1>UD         g1<0,1,0>UD                     { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g27<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g34<2>D         g[a0 96]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g34.1<2>D       g[a0 100]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g119.1<2>D      g34.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g119<2>D        g34<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g119UD          g23UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g35<1>D         g82<1,1,0>D     128D            { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g80<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL9              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shr(16)         g37<1>UD        g35<1,1,0>UD    0x00000006UD    { align1 1H compacted };
shl(16)         g39<1>D         g37<8,8,1>D     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(8)          g41<2>UD        g39<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $11.src };
mov(8)          g43<2>UD        g40<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g41.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g43.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g45UD           g41UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $11 };
mov(8)          g6<2>UD         g45<4,4,1>UD                    { align1 1Q $11.dst };
mov(8)          g8<2>UD         g46<4,4,1>UD                    { align1 2Q $11.dst };
mov(8)          g6.1<2>UD       g47<4,4,1>UD                    { align1 1Q @2 $11.dst };
mov(8)          g8.1<2>UD       g48<4,4,1>UD                    { align1 2Q @2 $11.dst };
else(16)        JIP:  LABEL9          UIP:  LABEL9              { align1 1H };

LABEL10:
add(16)         g46<1>D         g2.2<0,1,0>D    g35<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g48<1>UD        g46<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
mov(8)          g6<2>UD         g46<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@5 };
mov(8)          g8<2>UD         g47<4,4,1>UD                    { align1 2Q };
add(16)         g50<1>D         -g48<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g6.1<2>UD       g50<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g8.1<2>UD       g51<4,4,1>UD                    { align1 2Q I@2 };

LABEL9:
endif(16)       JIP:  LABEL4                                    { align1 1H };
add(16)         g51<1>D         g25<1,1,0>D     g35<1,1,0>D     { align1 1H $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g53<1>UD        g51<1,1,0>UD    g25<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g57<2>UD        g51<4,4,1>UD                    { align1 1Q };
mov(8)          g59<2>UD        g52<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g55<1>D         -g53<1,1,0>D    g29<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g57.1<2>UD      g55<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g59.1<2>UD      g56<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g13<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g13<1>UD        g13<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g63<1>UD        g13<0,1,0>UD                    { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g63<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g65<2>D         g[a0 192]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g65.1<2>D       g[a0 196]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g120.1<2>D      g65.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g120<2>D        g65<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g127<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g61UD    g120UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $6 };
mov(1)          f0<1>UD         g127<0,1,0>UD                   { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g63<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g66<2>D         g[a0 288]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g66.1<2>D       g[a0 292]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g121.1<2>D      g66.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g121<2>D        g66<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g121UD          g61UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g67<1>D         g82<1,1,0>D     192D            { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g80<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shr(16)         g69<1>UD        g67<1,1,0>UD    0x00000006UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
shl(16)         g71<1>D         g69<8,8,1>D     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g73<2>UD        g71<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $4.src };
mov(8)          g75<2>UD        g72<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g73.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g75.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g82UD           g73UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
mov(8)          g7<2>UD         g82<4,4,1>UD                    { align1 1Q $4.dst };
mov(8)          g9<2>UD         g83<4,4,1>UD                    { align1 2Q $4.dst };
mov(8)          g7.1<2>UD       g84<4,4,1>UD                    { align1 1Q @2 $4.dst };
mov(8)          g9.1<2>UD       g85<4,4,1>UD                    { align1 2Q @2 $4.dst };
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
add(16)         g83<1>D         g2.2<0,1,0>D    g67<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g85<1>UD        g83<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
mov(8)          g7<2>UD         g83<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@5 };
mov(8)          g9<2>UD         g84<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g87<1>D         -g85<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g7.1<2>UD       g87<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g9.1<2>UD       g88<4,4,1>UD                    { align1 2Q I@2 };

LABEL11:
endif(16)       JIP:  LABEL4                                    { align1 1H };
add(16)         g88<1>D         g25<1,1,0>D     g67<1,1,0>D     { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g90<1>UD        g88<1,1,0>UD    g25<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g94<2>UD        g88<4,4,1>UD                    { align1 1Q };
mov(8)          g96<2>UD        g89<4,4,1>UD                    { align1 2Q };
add(16)         g92<1>D         -g90<1,1,0>D    g29<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g94.1<2>UD      g92<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g96.1<2>UD      g93<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g14<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g14<1>UD        g14<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g11<1>UD        g14<0,1,0>UD                    { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g11<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g102<2>D        g[a0 224]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g102.1<2>D      g[a0 228]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g122.1<2>D      g102.1<0,1,0>D                  { align1 WE_all 1Q I@1 };
mov(8)          g122<2>D        g102<0,1,0>D                    { align1 WE_all 1Q I@1 };
mov(1)          g126<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g98UD    g122UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $6 };
mov(1)          f0<1>UD         g126<0,1,0>UD                   { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g11<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g103<2>D        g[a0 448]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g103.1<2>D      g[a0 452]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g123.1<2>D      g103.1<0,1,0>D                  { align1 WE_all 1Q I@2 };
mov(8)          g123<2>D        g103<0,1,0>D                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g123UD          g98UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $6 };
add3(16)        g100<1>D        0x0003UW        g31<8,8,1>D     g100<1,1,1>D { align1 1H };

LABEL4:
while(16)       JIP:  LABEL13                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_instances_base_ptr_code[] = {
    0x80000065, 0x0f058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x68050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa000f0c, 0x00340000,
    0x00041961, 0x64050220, 0x00466805, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa00d0040, 0x09810203, 0xe01f0068, 0x0081025b,
    0x00040065, 0x21058220, 0x02000284, 0xffffff00,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xe70f1b70, 0x09800d03, 0x00030061, 0x13060220,
    0x00340d05, 0x00000000, 0x00130061, 0x15060220,
    0x00340e05, 0x00000000, 0x00041d52, 0x29044560,
    0x0e8efffe, 0x68051f05, 0xa0231d40, 0x2121025a,
    0xa0111d40, 0x02120f12, 0x00041b61, 0x2b052660,
    0x00462905, 0x00000000, 0x00041b65, 0x25058220,
    0x02462305, 0xffffffc0, 0x00031b61, 0x13260220,
    0x00341105, 0x00000000, 0x00131c61, 0x15260220,
    0x00341205, 0x00000000, 0xe0271b68, 0x00602503,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x17140000, 0xfb001324, 0x00000000,
    0xa0192140, 0x17010202, 0x271b1970, 0x02101903,
    0x00041b70, 0x00010220, 0x52462b05, 0x00462705,
    0xa01d1a40, 0x02121b12, 0x01040022, 0x0001c060,
    0x00000330, 0x00000330, 0x00040069, 0x2c05a660,
    0x02462905, 0x00000006, 0x00040066, 0x00010220,
    0x12000244, 0x00000264, 0xa02e1a40, 0x2c002102,
    0x01040022, 0x0001c060, 0x00000130, 0x000000d8,
    0xe0301a68, 0x00602e03, 0x00041969, 0x32058660,
    0x02463005, 0x00000003, 0x00031961, 0x34060220,
    0x00343205, 0x00000000, 0x00131a61, 0x36060220,
    0x00343305, 0x00000000, 0x00031a61, 0x34264220,
    0x00000000, 0x00000000, 0x00131a61, 0x36264220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x38240000,
    0xfb003424, 0x00040000, 0x00032261, 0x03060220,
    0x00343805, 0x00000000, 0x00132261, 0x05060220,
    0x00343905, 0x00000000, 0x0003a261, 0x03260220,
    0x00343a05, 0x00000000, 0x0013a261, 0x05260220,
    0x00343b05, 0x00000000, 0x00040024, 0x0001c060,
    0x00000068, 0x00000068, 0xa0391a40, 0x2e010242,
    0x273b1970, 0x0210392b, 0x00031d61, 0x03060220,
    0x00343905, 0x00000000, 0x00131d61, 0x05060220,
    0x00343a05, 0x00000000, 0xa03d1b40, 0x02123b1a,
    0x00031961, 0x03260220, 0x00343d05, 0x00000000,
    0x00131a61, 0x05260220, 0x00343e05, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000001c8,
    0xa03e0040, 0x2e001902, 0x27401970, 0x19003e03,
    0x00030061, 0x44060220, 0x00343e05, 0x00000000,
    0x00130061, 0x46060220, 0x00343f05, 0x00000000,
    0xa0421b40, 0x1d024002, 0x00031961, 0x44260220,
    0x00344205, 0x00000000, 0x00131a61, 0x46260220,
    0x00344305, 0x00000000, 0xe2080961, 0x00114004,
    0x80000965, 0x08058220, 0x02000804, 0xffffffff,
    0x8000194c, 0x4a050220, 0x00000804, 0x00000000,
    0x80001969, 0x10018220, 0x02004a04, 0x00000003,
    0x80000961, 0x4c060660, 0x00010180, 0x00000000,
    0x80000061, 0x4c260660, 0x00010190, 0x00000000,
    0x80031961, 0x69260660, 0x00004c24, 0x00000000,
    0x80031961, 0x69060660, 0x00004c04, 0x00000000,
    0xe2070061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004331, 0x48140000,
    0xfb00690c, 0x00340000, 0x80001a61, 0x30010220,
    0x00000704, 0x00000000, 0x80001e69, 0x10018220,
    0x02004a04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000800, 0x80000961, 0x4d060660,
    0x00010200, 0x00000000, 0x80000061, 0x4d260660,
    0x00010210, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x6a260660,
    0x00004d24, 0x00000000, 0x80031961, 0x6a060660,
    0x00004d04, 0x00000000, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004431, 0x00000000,
    0xfb086a0c, 0x00344814, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0xe04e0068, 0x00802103,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0x00040066, 0x50050220, 0x02000244, 0x00000264,
    0x00041a70, 0x00010220, 0x42466405, 0x00464e05,
    0x01040028, 0x0001c660, 0x00000fc8, 0x00000fc8,
    0x00040069, 0x52058660, 0x02466405, 0x00000008,
    0x00041c70, 0x00018660, 0x16465005, 0x00000000,
    0x01040022, 0x0001c060, 0x00000170, 0x000000d8,
    0xe0541b68, 0x00605203, 0x00041969, 0x56058660,
    0x02465405, 0x00000003, 0x00031961, 0x58060220,
    0x00345605, 0x00000000, 0x00131a61, 0x5a060220,
    0x00345705, 0x00000000, 0x00031a61, 0x58264220,
    0x00000000, 0x00000000, 0x00131a61, 0x5a264220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x5c240000,
    0xfb005824, 0x00040000, 0x00032561, 0x04060220,
    0x00345c05, 0x00000000, 0x00132561, 0x06060220,
    0x00345d05, 0x00000000, 0x0003a561, 0x04260220,
    0x00345e05, 0x00000000, 0x0013a561, 0x06260220,
    0x00345f05, 0x00000000, 0x00040024, 0x0001c060,
    0x000000a8, 0x000000a8, 0xa05d1b40, 0x52010242,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x275f1970, 0x02105d2b, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x04060220,
    0x00345d05, 0x00000000, 0x80101d01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x06060220,
    0x00345e05, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xa0611b40, 0x02125f1a,
    0x00031961, 0x04260220, 0x00346105, 0x00000000,
    0x00131a61, 0x06260220, 0x00346205, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000e28,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa0620040, 0x52001902, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x270b1970, 0x19006203,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x68060220, 0x00346205, 0x00000000,
    0x80103401, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x6a060220, 0x00346305, 0x00000000,
    0xa0661b40, 0x1d020b02, 0x00031961, 0x68260220,
    0x00346605, 0x00000000, 0x00131a61, 0x6a260220,
    0x00346705, 0x00000000, 0xe2090961, 0x00114004,
    0x80000965, 0x09058220, 0x02000904, 0xffffffff,
    0x8000194c, 0x6e050220, 0x00000904, 0x00000000,
    0x80001969, 0x10018220, 0x02006e04, 0x00000003,
    0x80000961, 0x70060660, 0x00010200, 0x00000000,
    0x80000061, 0x70260660, 0x00010210, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x74260660, 0x00007024, 0x00000000,
    0x80031961, 0x74060660, 0x00007004, 0x00000000,
    0xe2030061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004831, 0x6c140000,
    0xfb00740c, 0x00340000, 0x80001a61, 0x30010220,
    0x00000304, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001e69, 0x10018220,
    0x02006e04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000c00, 0x80000961, 0x71060660,
    0x00010400, 0x00000000, 0x80000061, 0x71260660,
    0x00010410, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x75260660,
    0x00007124, 0x00000000, 0x80031961, 0x75060660,
    0x00007104, 0x00000000, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004731, 0x00000000,
    0xfb08750c, 0x00346c14, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0720040, 0x04005203,
    0x00040070, 0x00018660, 0x16465005, 0x00000000,
    0x01040022, 0x0001c060, 0x000001d0, 0x00000148,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xe0740068, 0x00607203, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x76058660,
    0x02467405, 0x00000003, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x78060220,
    0x00347605, 0x00000000, 0x80103601, 0x00000000,
    0x00000000, 0x00000000, 0x00131a61, 0x7a060220,
    0x00347705, 0x00000000, 0x00031a61, 0x78264220,
    0x00000000, 0x00000000, 0x00131a61, 0x7a264220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x7c240000,
    0xfb007824, 0x00040000, 0x00032661, 0x05060220,
    0x00347c05, 0x00000000, 0x00132661, 0x07060220,
    0x00347d05, 0x00000000, 0x0003a661, 0x05260220,
    0x00347e05, 0x00000000, 0x0013a661, 0x07260220,
    0x00347f05, 0x00000000, 0x00040024, 0x0001c060,
    0x00000098, 0x00000098, 0xa07d1b40, 0x72010242,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x27031970, 0x02107d2b, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x05060220,
    0x00347d05, 0x00000000, 0x80101d01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x07060220,
    0x00347e05, 0x00000000, 0xa0091b40, 0x0212031a,
    0x00031961, 0x05260220, 0x00340905, 0x00000000,
    0x00131a61, 0x07260220, 0x00340a05, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000009c8,
    0xa00d0040, 0x72001902, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x270f1970, 0x19000d03,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x13060220, 0x00340d05, 0x00000000,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x15060220, 0x00340e05, 0x00000000,
    0xa0111b40, 0x1d020f02, 0x00031961, 0x13260220,
    0x00341105, 0x00000000, 0x00131a61, 0x15260220,
    0x00341205, 0x00000000, 0xe20a0961, 0x00114004,
    0x80000965, 0x0a058220, 0x02000a04, 0xffffffff,
    0x8000194c, 0x1b050220, 0x00000a04, 0x00000000,
    0x80001969, 0x10018220, 0x02001b04, 0x00000003,
    0x80000961, 0x21060660, 0x00010280, 0x00000000,
    0x80000061, 0x21260660, 0x00010290, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x76260660, 0x00002124, 0x00000000,
    0x80031961, 0x76060660, 0x00002104, 0x00000000,
    0xe2012061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004931, 0x17140000,
    0xfb00760c, 0x00340000, 0x80001a61, 0x30010220,
    0x00000104, 0x00000000, 0x80001e69, 0x10018220,
    0x02001b04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x22060660,
    0x00010180, 0x00000000, 0x80000061, 0x22260660,
    0x00010190, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x77260660,
    0x00002224, 0x00000000, 0x80031961, 0x77060660,
    0x00002204, 0x00000000, 0x80002901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004a31, 0x00000000,
    0xfb08770c, 0x00341714, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0230040, 0x08005203,
    0x00040070, 0x00018660, 0x16465005, 0x00000000,
    0x01040022, 0x0001c060, 0x00000190, 0x00000108,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xe0250068, 0x00602303, 0x00041969, 0x27058660,
    0x02462505, 0x00000003, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x29060220,
    0x00342705, 0x00000000, 0x80103b01, 0x00000000,
    0x00000000, 0x00000000, 0x00131a61, 0x2b060220,
    0x00342805, 0x00000000, 0x00031a61, 0x29264220,
    0x00000000, 0x00000000, 0x00131a61, 0x2b264220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x2d240000,
    0xfb002924, 0x00040000, 0x00032b61, 0x06060220,
    0x00342d05, 0x00000000, 0x00132b61, 0x08060220,
    0x00342e05, 0x00000000, 0x0003ab61, 0x06260220,
    0x00342f05, 0x00000000, 0x0013ab61, 0x08260220,
    0x00343005, 0x00000000, 0x00040024, 0x0001c060,
    0x00000098, 0x00000098, 0xa02e1b40, 0x23010242,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x27301970, 0x02102e2b, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x06060220,
    0x00342e05, 0x00000000, 0x80101d01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x08060220,
    0x00342f05, 0x00000000, 0xa0321b40, 0x0212301a,
    0x00031961, 0x06260220, 0x00343205, 0x00000000,
    0x00131a61, 0x08260220, 0x00343305, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000005d8,
    0xa0333240, 0x23001902, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x27351970, 0x19003303,
    0x00030061, 0x39060220, 0x00343305, 0x00000000,
    0x00130061, 0x3b060220, 0x00343405, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa0371b40, 0x1d023502, 0x00031961, 0x39260220,
    0x00343705, 0x00000000, 0x00131a61, 0x3b260220,
    0x00343805, 0x00000000, 0xe20d0961, 0x00114004,
    0x80000965, 0x0d058220, 0x02000d04, 0xffffffff,
    0x8000194c, 0x3f050220, 0x00000d04, 0x00000000,
    0x80001969, 0x10018220, 0x02003f04, 0x00000003,
    0x80000961, 0x41060660, 0x00010300, 0x00000000,
    0x80000061, 0x41260660, 0x00010310, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x78260660, 0x00004124, 0x00000000,
    0x80031961, 0x78060660, 0x00004104, 0x00000000,
    0xe27f0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004631, 0x3d140000,
    0xfb00780c, 0x00340000, 0x80001a61, 0x30010220,
    0x00007f04, 0x00000000, 0x80001e69, 0x10018220,
    0x02003f04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000600, 0x80000961, 0x42060660,
    0x00010480, 0x00000000, 0x80000061, 0x42260660,
    0x00010490, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x79260660,
    0x00004224, 0x00000000, 0x80031961, 0x79060660,
    0x00004204, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004631, 0x00000000,
    0xfb08790c, 0x00343d14, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0430040, 0x0c005203,
    0x00040070, 0x00018660, 0x16465005, 0x00000000,
    0x01040022, 0x0001c060, 0x000001c0, 0x00000128,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xe0450068, 0x00604303, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00041969, 0x47058660,
    0x02464505, 0x00000003, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x49060220,
    0x00344705, 0x00000000, 0x80103401, 0x00000000,
    0x00000000, 0x00000000, 0x00131a61, 0x4b060220,
    0x00344805, 0x00000000, 0x00031a61, 0x49264220,
    0x00000000, 0x00000000, 0x00131a61, 0x4b264220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x52240000,
    0xfb004924, 0x00040000, 0x00032461, 0x07060220,
    0x00345205, 0x00000000, 0x00132461, 0x09060220,
    0x00345305, 0x00000000, 0x0003a461, 0x07260220,
    0x00345405, 0x00000000, 0x0013a461, 0x09260220,
    0x00345505, 0x00000000, 0x00040024, 0x0001c060,
    0x000000a8, 0x000000a8, 0xa0531b40, 0x43010242,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x27551970, 0x0210532b, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x07060220,
    0x00345305, 0x00000000, 0x80101d01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x09060220,
    0x00345405, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa0571b40, 0x0212551a,
    0x00031961, 0x07260220, 0x00345705, 0x00000000,
    0x00131a61, 0x09260220, 0x00345805, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000001e8,
    0xa0583540, 0x43001902, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x275a1970, 0x19005803,
    0x00030061, 0x5e060220, 0x00345805, 0x00000000,
    0x00130061, 0x60060220, 0x00345905, 0x00000000,
    0xa05c1b40, 0x1d025a02, 0x00031961, 0x5e260220,
    0x00345c05, 0x00000000, 0x00131a61, 0x60260220,
    0x00345d05, 0x00000000, 0xe20e0961, 0x00114004,
    0x80000965, 0x0e058220, 0x02000e04, 0xffffffff,
    0x8000194c, 0x0b050220, 0x00000e04, 0x00000000,
    0x80001969, 0x10018220, 0x02000b04, 0x00000003,
    0x80000961, 0x66060660, 0x00010380, 0x00000000,
    0x80000061, 0x66260660, 0x00010390, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x7a260660, 0x00006624, 0x00000000,
    0x80031961, 0x7a060660, 0x00006604, 0x00000000,
    0xe27e0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004631, 0x62140000,
    0xfb007a0c, 0x00340000, 0x80001a61, 0x30010220,
    0x00007e04, 0x00000000, 0x80001e69, 0x10018220,
    0x02000b04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000a00, 0x80000961, 0x67060660,
    0x00010700, 0x00000000, 0x80000061, 0x67260660,
    0x00010710, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x7b260660,
    0x00006724, 0x00000000, 0x80031961, 0x7b060660,
    0x00006704, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004631, 0x00000000,
    0xfb087b0c, 0x00346214, 0x00040052, 0x64044160,
    0x0e0e0003, 0x64051f05, 0x00040027, 0x00014060,
    0x00000000, 0xfffff028, 0x80030061, 0x7e050220,
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
      .base.program_size = 5360,
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
const char *gfx125_misc_copy_instances_base_ptr_sha1 = "820a6ef31cecbbf1edca8184cc614f54e7f4a09f";

#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_misc_copy_instances_indirect_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_misc_copy_instances_indirect_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g120<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(8)          g25<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(16)         g110<1>UD       g0.1<0,1,0>UD                   { align1 1H };
add(1)          g121<1>UD       g120<0,1,0>UD   0x00000000UD    { align1 WE_all 1N I@3 compacted };
add(8)          g25.8<1>UW      g25<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@3 compacted };
mov(16)         g26<1>UD        g110<8,8,1>UD                   { align1 1H I@3 };
shl(16)         g47<1>D         g110<8,8,1>D    0x00000004UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(1)         g1UD            g121UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
mov(16)         g45<1>D         g25<8,8,1>UW                    { align1 1H };
add.z.f0.0(16)  null<1>D        g45<8,8,1>D     g47<8,8,1>D     { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g21.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g36.1<2>F       g2.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g23.1<2>F       g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g38.1<2>F       g2.3<0,1,0>F                    { align1 2Q };
mov(8)          g116.1<2>F      g2.5<0,1,0>F                    { align1 1Q };
mov(8)          g118.1<2>F      g2.5<0,1,0>F                    { align1 2Q };
mov(8)          g21<2>F         g2<0,1,0>F                      { align1 1Q F@6 compacted };
mov(8)          g36<2>F         g2<0,1,0>F                      { align1 2Q F@6 compacted };
mov(8)          g23<2>F         g2.2<0,1,0>F                    { align1 1Q F@6 compacted };
mov(8)          g38<2>F         g2.2<0,1,0>F                    { align1 2Q F@6 compacted };
mov(8)          g116<2>F        g2.4<0,1,0>F                    { align1 1Q F@6 compacted };
mov(8)          g118<2>F        g2.4<0,1,0>F                    { align1 2Q F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
send(16)        g40UD           g116UD          nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $0 };
shl(16)         g44<1>D         g40<8,8,1>D     0x00000006UD    { align1 1H $0.dst };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
add(8)          g48<1>D         g21<8,4,2>D     156D            { align1 1Q F@6 compacted };
add(8)          g49<1>D         g36<8,4,2>D     156D            { align1 2Q F@5 compacted };
cmp.l.f0.0(16)  g50<1>UD        g48<1,1,0>UD    0x0000009cUD    { align1 1H I@1 compacted };
mov(8)          g117<2>UD       g48<4,4,1>UD                    { align1 1Q $0.src };
mov(8)          g119<2>UD       g49<4,4,1>UD                    { align1 2Q $0.src };
add(8)          g52<1>D         -g50<8,8,1>D    g21.1<8,4,2>D   { align1 1Q I@3 };
add(8)          g51<1>D         -g51<8,8,1>D    g36.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g117.1<2>UD     g52<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g119.1<2>UD     g51<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g117UD          g40UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $0 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
shr(16)         g52<1>UD        g44<1,1,0>UD    0x00000008UD    { align1 1H I@3 compacted };
and(16)         g54<1>UD        g44<8,8,1>UD    0xffffff00UD    { align1 1H };
add(16)         g61<1>D         g52<1,1,0>D     2D              { align1 1H I@2 compacted };
add(16)         g56<1>D         g44<1,1,0>D     -g54<1,1,0>D    { align1 1H I@2 compacted };
add(16)         g63<1>D         g110<1,1,0>D    -g61<1,1,0>D    { align1 1H I@2 compacted };
and(16)         g58<1>UD        g56<8,8,1>UD    0xffffffc0UD    { align1 1H I@2 };
mov(16)         g65<1>D         -g63<8,8,1>D                    { align1 1H I@2 };
shr(16)         g60<1>UD        g58<1,1,0>UD    0x00000006UD    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  null<1>UD       g65<8,8,1>UD    g60<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL2              { align1 1H };
shl(16)         g66<1>D         -g63<8,8,1>D    0x00000006UD    { align1 1H };
mov(8)          g70<1>UD        g23.1<8,4,2>UD                  { align1 1Q F@4 };
mov(8)          g71<1>UD        g38.1<8,4,2>UD                  { align1 2Q F@3 };
add(8)          g72<1>D         g23<8,4,2>D     g42<1,1,0>D     { align1 1Q $0.dst compacted };
add(8)          g73<1>D         g38<8,4,2>D     g43<1,1,0>D     { align1 2Q $0.dst compacted };
add(16)         g68<1>D         g54<1,1,0>D     g66<1,1,0>D     { align1 1H I@5 compacted };
cmp.l.f0.0(8)   g56<1>UD        g72<8,8,1>UD    g23<8,4,2>UD    { align1 1Q I@3 };
cmp.l.f0.0(8)   g74<1>UD        g73<8,8,1>UD    g38<8,4,2>UD    { align1 2Q I@3 };
add(8)          g75<1>D         -g56<8,8,1>D    g23.1<8,4,2>D   { align1 1Q I@2 };
add(8)          g76<1>D         -g74<8,8,1>D    g38.1<8,4,2>D   { align1 2Q I@2 };
or.z.f0.0(16)   null<1>UD       g72<8,8,1>UD    g75<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL4          UIP:  LABEL3              { align1 1H };
shr(16)         g76<1>UD        g68<1,1,0>UD    0x00000006UD    { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shl(16)         g78<1>D         g76<8,8,1>D     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g118<2>UD       g78<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
mov(8)          g120<2>UD       g79<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g118.1<2>UD     0x00000000UD                    { align1 1Q I@2 };
mov(8)          g120.1<2>UD     0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g79UD           g118UD          nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $0 };
mov(8)          g28<2>UD        g79<4,4,1>UD                    { align1 1Q $0.dst };
mov(8)          g30<2>UD        g80<4,4,1>UD                    { align1 2Q $0.dst };
mov(8)          g28.1<2>UD      g81<4,4,1>UD                    { align1 1Q @2 $0.dst };
mov(8)          g30.1<2>UD      g82<4,4,1>UD                    { align1 2Q @2 $0.dst };
else(16)        JIP:  LABEL3          UIP:  LABEL3              { align1 1H };

LABEL4:
add(16)         g80<1>D         g42<1,1,0>D     g68<1,1,0>D     { align1 1H I@7 compacted };
cmp.l.f0.0(16)  g82<1>UD        g80<1,1,0>UD    g42<1,1,0>UD    { align1 1H I@1 compacted };
add(8)          g57<1>D         g23<8,4,2>D     g80<1,1,0>D     { align1 1Q compacted };
add(8)          g84<1>D         g38<8,4,2>D     g81<1,1,0>D     { align1 2Q compacted };
cmp.l.f0.0(8)   g85<1>UD        g57<8,8,1>UD    g23<8,4,2>UD    { align1 1Q I@2 };
mov(8)          g28<2>UD        g57<4,4,1>UD                    { align1 1Q I@7 };
cmp.l.f0.0(8)   g86<1>UD        g84<8,8,1>UD    g38<8,4,2>UD    { align1 2Q I@3 };
mov(8)          g30<2>UD        g84<4,4,1>UD                    { align1 2Q I@7 };
add3(16)        g87<1>D         g70<8,8,1>D     -g82<8,8,1>D    -g85<1,1,1>D { align1 1H I@2 };
mov(8)          g28.1<2>UD      g87<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g30.1<2>UD      g88<4,4,1>UD                    { align1 2Q I@2 };

LABEL3:
endif(16)       JIP:  LABEL2                                    { align1 1H };
add(8)          g58<1>D         g21<8,4,2>D     g68<1,1,0>D     { align1 1Q F@6 compacted };
add(8)          g88<1>D         g36<8,4,2>D     g69<1,1,0>D     { align1 2Q F@5 compacted };
cmp.l.f0.0(8)   g59<1>UD        g58<8,8,1>UD    g21<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g89<1>UD        g88<8,8,1>UD    g36<8,4,2>UD    { align1 2Q I@2 };
mov(8)          g91<2>UD        g58<4,4,1>UD                    { align1 1Q };
mov(8)          g93<2>UD        g88<4,4,1>UD                    { align1 2Q };
add(8)          g60<1>D         -g59<8,8,1>D    g21.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g90<1>D         -g89<8,8,1>D    g36.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g91.1<2>UD      g60<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g93.1<2>UD      g90<4,4,1>UD                    { align1 2Q I@2 };
fbl(1)          g111<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
shl(1)          a0<1>UD         g111<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g86<2>D         g[a0 384]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g86.1<2>D       g[a0 388]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g119.1<2>UD     g86.1<0,1,0>UD                  { align1 WE_all 1Q I@1 };
mov(8)          g119<2>UD       g86<0,1,0>UD                    { align1 WE_all 1Q I@1 };
mov(1)          g51<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g124UD   g119UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
mov(1)          f0<1>UD         g51<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g111<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g87<2>D         g[a0 352]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g87.1<2>D       g[a0 356]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g120.1<2>UD     g87.1<0,1,0>UD                  { align1 WE_all 1Q I@2 };
mov(8)          g120<2>UD       g87<0,1,0>UD                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g120UD          g124UD          0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $0 };

LABEL2:
endif(16)       JIP:  LABEL5                                    { align1 1H };

LABEL5:
shr(16)         g94<1>UD        g54<1,1,0>UD    0x00000008UD    { align1 1H compacted };
mov(8)          g96<1>UD        g23.1<8,4,2>UD                  { align1 1Q F@4 };
mov(8)          g97<1>UD        g38.1<8,4,2>UD                  { align1 2Q F@3 };
add(8)          g98<1>D         g23<8,4,2>D     g42<1,1,0>D     { align1 1Q $0.dst compacted };
add(8)          g99<1>D         g38<8,4,2>D     g43<1,1,0>D     { align1 2Q $0.dst compacted };
add(16)         g105<1>D        g52<1,1,0>D     3D              { align1 1H compacted };
cmp.l.f0.0(8)   g61<1>UD        g98<8,8,1>UD    g23<8,4,2>UD    { align1 1Q I@3 };
cmp.l.f0.0(8)   g100<1>UD       g99<8,8,1>UD    g38<8,4,2>UD    { align1 2Q I@3 };
add(8)          g101<1>D        -g61<8,8,1>D    g23.1<8,4,2>D   { align1 1Q I@2 };
add(8)          g102<1>D        -g100<8,8,1>D   g38.1<8,4,2>D   { align1 2Q I@2 };
or(16)          g103<1>UD       g98<1,1,0>UD    g101<1,1,0>UD   { align1 1H I@1 compacted };

LABEL15:
cmp.ge.f0.0(16) null<1>UD       g26<8,8,1>UD    g94<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL6        UIP:  LABEL6              { align1 1H };
shl(16)         g107<1>D        g26<8,8,1>D     0x00000008UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g103<8,8,1>D    0D              { align1 1H I@4 };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
shr(16)         g109<1>UD       g107<1,1,0>UD   0x00000006UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g111<1>D        g109<8,8,1>D    0x00000003UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g3<2>UD         g111<4,4,1>UD                   { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g5<2>UD         g112<4,4,1>UD                   { align1 2Q I@2 };
mov(8)          g3.1<2>UD       0x00000000UD                    { align1 1Q I@2 };
mov(8)          g5.1<2>UD       0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g112UD          g3UD            nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
mov(8)          g29<2>UD        g112<4,4,1>UD                   { align1 1Q $1.dst };
mov(8)          g31<2>UD        g113<4,4,1>UD                   { align1 2Q $1.dst };
mov(8)          g29.1<2>UD      g114<4,4,1>UD                   { align1 1Q @2 $1.dst };
mov(8)          g31.1<2>UD      g115<4,4,1>UD                   { align1 2Q @2 $1.dst };
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g113<1>D        g42<1,1,0>D     g107<1,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g115<1>UD       g113<1,1,0>UD   g42<1,1,0>UD    { align1 1H I@1 compacted };
add(8)          g62<1>D         g23<8,4,2>D     g113<1,1,0>D    { align1 1Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
add(8)          g117<1>D        g38<8,4,2>D     g114<1,1,0>D    { align1 2Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(8)   g118<1>UD       g62<8,8,1>UD    g23<8,4,2>UD    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(8)          g29<2>UD        g62<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@3 };
cmp.l.f0.0(8)   g119<1>UD       g117<8,8,1>UD   g38<8,4,2>UD    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@7 };
mov(8)          g31<2>UD        g117<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add3(16)        g120<1>D        g96<8,8,1>D     -g115<8,8,1>D   -g118<1,1,1>D { align1 1H };
mov(8)          g29.1<2>UD      g120<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g31.1<2>UD      g121<4,4,1>UD                   { align1 2Q I@2 };

LABEL7:
endif(16)       JIP:  LABEL6                                    { align1 1H };
add(8)          g63<1>D         g21<8,4,2>D     g107<1,1,0>D    { align1 1Q F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N A@3 };
add(8)          g121<1>D        g36<8,4,2>D     g108<1,1,0>D    { align1 2Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(8)   g64<1>UD        g63<8,8,1>UD    g21<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g122<1>UD       g121<8,8,1>UD   g36<8,4,2>UD    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g124<2>UD       g63<4,4,1>UD                    { align1 1Q };
mov(8)          g126<2>UD       g121<4,4,1>UD                   { align1 2Q };
add(8)          g65<1>D         -g64<8,8,1>D    g21.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g123<1>D        -g122<8,8,1>D   g36.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g124.1<2>UD     g65<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g126.1<2>UD     g123<4,4,1>UD                   { align1 2Q I@2 };
fbl(1)          g112<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
shl(1)          a0<1>UD         g112<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g88<2>D         g[a0 416]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g88.1<2>D       g[a0 420]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g9.1<2>UD       g88.1<0,1,0>UD                  { align1 WE_all 1Q I@1 };
mov(8)          g9<2>UD         g88<0,1,0>UD                    { align1 WE_all 1Q I@1 };
mov(1)          g20<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0.any16h) send(1) g1UD     g9UD            nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $3 };
mov(1)          f0<1>UD         g20<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g112<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000e00UD    { align1 WE_all 1N A@1 };
mov(1)          g89<2>D         g[a0 384]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g89.1<2>D       g[a0 388]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g28.1<2>UD      g89.1<0,1,0>UD                  { align1 WE_all 1Q I@2 };
mov(8)          g28<2>UD        g89<0,1,0>UD                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g28UD           g1UD            0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
add(16)         g9<1>D          g107<1,1,0>D    64D             { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g103<8,8,1>D    0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL9              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
shr(16)         g11<1>UD        g9<1,1,0>UD     0x00000006UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g28<1>D         g11<8,8,1>D     0x00000003UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g3<2>UD         g28<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g5<2>UD         g29<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g3.1<2>UD       0x00000000UD                    { align1 1Q I@2 };
mov(8)          g5.1<2>UD       0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g44UD           g3UD            nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
mov(8)          g30<2>UD        g44<4,4,1>UD                    { align1 1Q $1.dst };
mov(8)          g32<2>UD        g45<4,4,1>UD                    { align1 2Q $1.dst };
mov(8)          g30.1<2>UD      g46<4,4,1>UD                    { align1 1Q @2 $1.dst };
mov(8)          g32.1<2>UD      g47<4,4,1>UD                    { align1 2Q @2 $1.dst };
else(16)        JIP:  LABEL9          UIP:  LABEL9              { align1 1H };

LABEL10:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g45<1>D         g42<1,1,0>D     g9<1,1,0>D      { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g47<1>UD        g45<1,1,0>UD    g42<1,1,0>UD    { align1 1H compacted };
add(8)          g66<1>D         g23<8,4,2>D     g45<1,1,0>D     { align1 1Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $8.src };
add(8)          g49<1>D         g38<8,4,2>D     g46<1,1,0>D     { align1 2Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
cmp.l.f0.0(8)   g50<1>UD        g66<8,8,1>UD    g23<8,4,2>UD    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(8)          g30<2>UD        g66<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@3 };
cmp.l.f0.0(8)   g51<1>UD        g49<8,8,1>UD    g38<8,4,2>UD    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@7 };
mov(8)          g32<2>UD        g49<4,4,1>UD                    { align1 2Q };
add3(16)        g52<1>D         g96<8,8,1>D     -g47<8,8,1>D    -g50<1,1,1>D { align1 1H I@2 };
mov(8)          g30.1<2>UD      g52<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g32.1<2>UD      g53<4,4,1>UD                    { align1 2Q I@2 };

LABEL9:
endif(16)       JIP:  LABEL6                                    { align1 1H };
add(8)          g67<1>D         g21<8,4,2>D     g9<1,1,0>D      { align1 1Q compacted };
add(8)          g53<1>D         g36<8,4,2>D     g10<1,1,0>D     { align1 2Q compacted };
cmp.l.f0.0(8)   g68<1>UD        g67<8,8,1>UD    g21<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g54<1>UD        g53<8,8,1>UD    g36<8,4,2>UD    { align1 2Q I@2 };
mov(8)          g56<2>UD        g67<4,4,1>UD                    { align1 1Q };
mov(8)          g58<2>UD        g53<4,4,1>UD                    { align1 2Q };
add(8)          g69<1>D         -g68<8,8,1>D    g21.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g55<1>D         -g54<8,8,1>D    g36.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g56.1<2>UD      g69<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g58.1<2>UD      g55<4,4,1>UD                    { align1 2Q I@2 };
fbl(1)          g113<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
shl(1)          a0<1>UD         g113<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g90<2>D         g[a0 448]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g90.1<2>D       g[a0 452]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g44.1<2>UD      g90.1<0,1,0>UD                  { align1 WE_all 1Q I@1 };
mov(8)          g44<2>UD        g90<0,1,0>UD                    { align1 WE_all 1Q I@1 };
mov(1)          g19<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g7UD     g44UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $4 };
mov(1)          f0<1>UD         g19<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g113<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@7 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g98<2>D         g[a0 256]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g98.1<2>D       g[a0 260]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g45.1<2>UD      g98.1<0,1,0>UD                  { align1 WE_all 1Q I@2 };
mov(8)          g45<2>UD        g98<0,1,0>UD                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g45UD           g7UD            0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $5 };
add(16)         g59<1>D         g107<1,1,0>D    128D            { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g103<8,8,1>D    0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
shr(16)         g61<1>UD        g59<1,1,0>UD    0x00000006UD    { align1 1H I@3 compacted };
shl(16)         g63<1>D         g61<8,8,1>D     0x00000003UD    { align1 1H I@1 };
mov(8)          g9<2>UD         g63<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $2.src };
mov(8)          g11<2>UD        g64<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g9.1<2>UD       0x00000000UD                    { align1 1Q I@2 };
mov(8)          g11.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g64UD           g9UD            nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
mov(8)          g31<2>UD        g64<4,4,1>UD                    { align1 1Q $2.dst };
mov(8)          g33<2>UD        g65<4,4,1>UD                    { align1 2Q $2.dst };
mov(8)          g31.1<2>UD      g66<4,4,1>UD                    { align1 1Q @2 $2.dst };
mov(8)          g33.1<2>UD      g67<4,4,1>UD                    { align1 2Q @2 $2.dst };
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
add(16)         g65<1>D         g42<1,1,0>D     g59<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g67<1>UD        g65<1,1,0>UD    g42<1,1,0>UD    { align1 1H I@1 compacted };
add(8)          g72<1>D         g23<8,4,2>D     g65<1,1,0>D     { align1 1Q compacted };
add(8)          g69<1>D         g38<8,4,2>D     g66<1,1,0>D     { align1 2Q compacted };
cmp.l.f0.0(8)   g70<1>UD        g72<8,8,1>UD    g23<8,4,2>UD    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(8)          g31<2>UD        g72<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g71<1>UD        g69<8,8,1>UD    g38<8,4,2>UD    { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@7 };
mov(8)          g33<2>UD        g69<4,4,1>UD                    { align1 2Q };
add3(16)        g72<1>D         g96<8,8,1>D     -g67<8,8,1>D    -g70<1,1,1>D { align1 1H I@2 };
mov(8)          g31.1<2>UD      g72<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g33.1<2>UD      g73<4,4,1>UD                    { align1 2Q I@2 };

LABEL11:
endif(16)       JIP:  LABEL6                                    { align1 1H };
add(8)          g75<1>D         g21<8,4,2>D     g59<1,1,0>D     { align1 1Q compacted };
add(8)          g73<1>D         g36<8,4,2>D     g60<1,1,0>D     { align1 2Q compacted };
cmp.l.f0.0(8)   g80<1>UD        g75<8,8,1>UD    g21<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g74<1>UD        g73<8,8,1>UD    g36<8,4,2>UD    { align1 2Q I@2 };
mov(8)          g76<2>UD        g75<4,4,1>UD                    { align1 1Q };
mov(8)          g78<2>UD        g73<4,4,1>UD                    { align1 2Q };
add(8)          g81<1>D         -g80<8,8,1>D    g21.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g75<1>D         -g74<8,8,1>D    g36.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g76.1<2>UD      g81<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g78.1<2>UD      g75<4,4,1>UD                    { align1 2Q I@2 };
fbl(1)          g114<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
shl(1)          a0<1>UD         g114<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g99<2>D         g[a0 480]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g99.1<2>D       g[a0 484]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g46.1<2>UD      g99.1<0,1,0>UD                  { align1 WE_all 1Q I@1 };
mov(8)          g46<2>UD        g99<0,1,0>UD                    { align1 WE_all 1Q I@1 };
mov(1)          g18<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g13UD    g46UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $6 };
mov(1)          f0<1>UD         g18<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g114<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@7 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g109<2>D        g[a0 384]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g109.1<2>D      g[a0 388]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g47.1<2>UD      g109.1<0,1,0>UD                 { align1 WE_all 1Q I@2 };
mov(8)          g47<2>UD        g109<0,1,0>UD                   { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g47UD           g13UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $7 };
add(16)         g79<1>D         g107<1,1,0>D    192D            { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g103<8,8,1>D    0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL14         UIP:  LABEL13             { align1 1H };
shr(16)         g81<1>UD        g79<1,1,0>UD    0x00000006UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shl(16)         g83<1>D         g81<8,8,1>D     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(8)          g48<2>UD        g83<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
mov(8)          g50<2>UD        g84<4,4,1>UD                    { align1 2Q };
mov(8)          g48.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g50.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g84UD           g48UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $8 };
mov(8)          g32<2>UD        g84<4,4,1>UD                    { align1 1Q $8.dst };
mov(8)          g34<2>UD        g85<4,4,1>UD                    { align1 2Q $8.dst };
mov(8)          g32.1<2>UD      g86<4,4,1>UD                    { align1 1Q @2 $8.dst };
mov(8)          g34.1<2>UD      g87<4,4,1>UD                    { align1 2Q @2 $8.dst };
else(16)        JIP:  LABEL13         UIP:  LABEL13             { align1 1H };

LABEL14:
add(16)         g85<1>D         g42<1,1,0>D     g79<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g87<1>UD        g85<1,1,0>UD    g42<1,1,0>UD    { align1 1H I@1 compacted };
add(8)          g82<1>D         g23<8,4,2>D     g85<1,1,0>D     { align1 1Q compacted };
add(8)          g89<1>D         g38<8,4,2>D     g86<1,1,0>D     { align1 2Q compacted };
cmp.l.f0.0(8)   g90<1>UD        g82<8,8,1>UD    g23<8,4,2>UD    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(8)          g32<2>UD        g82<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@3 };
cmp.l.f0.0(8)   g91<1>UD        g89<8,8,1>UD    g38<8,4,2>UD    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@7 };
mov(8)          g34<2>UD        g89<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add3(16)        g92<1>D         g96<8,8,1>D     -g87<8,8,1>D    -g90<1,1,1>D { align1 1H };
mov(8)          g32.1<2>UD      g92<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g34.1<2>UD      g93<4,4,1>UD                    { align1 2Q I@2 };

LABEL13:
endif(16)       JIP:  LABEL6                                    { align1 1H };
add(8)          g83<1>D         g21<8,4,2>D     g79<1,1,0>D     { align1 1Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@3 };
add(8)          g93<1>D         g36<8,4,2>D     g80<1,1,0>D     { align1 2Q compacted };
cmp.l.f0.0(8)   g84<1>UD        g83<8,8,1>UD    g21<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g98<1>UD        g93<8,8,1>UD    g36<8,4,2>UD    { align1 2Q I@2 };
mov(8)          g107<2>UD       g83<4,4,1>UD                    { align1 1Q };
mov(8)          g109<2>UD       g93<4,4,1>UD                    { align1 2Q };
add(8)          g85<1>D         -g84<8,8,1>D    g21.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g99<1>D         -g98<8,8,1>D    g36.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g107.1<2>UD     g85<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g109.1<2>UD     g99<4,4,1>UD                    { align1 2Q I@2 };
fbl(1)          g115<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
shl(1)          a0<1>UD         g115<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000400UD    { align1 WE_all 1N A@1 };
mov(1)          g111<2>D        g[a0]<0,1,0>D                   { align1 WE_all 1N A@1 };
mov(1)          g111.1<2>D      g[a0 4]<0,1,0>D                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g49.1<2>UD      g111.1<0,1,0>UD                 { align1 WE_all 1Q I@1 };
mov(8)          g49<2>UD        g111<0,1,0>UD                   { align1 WE_all 1Q I@1 };
mov(1)          g17<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g15UD    g49UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $8 };
mov(1)          f0<1>UD         g17<0,1,0>UD                    { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shl(1)          a0<1>UD         g115<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@7 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000c00UD    { align1 WE_all 1N A@1 };
mov(1)          g117<2>D        g[a0 352]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g117.1<2>D      g[a0 356]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g50.1<2>UD      g117.1<0,1,0>UD                 { align1 WE_all 1Q I@2 };
mov(8)          g50<2>UD        g117<0,1,0>UD                   { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g50UD           g15UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $8 };
add(16)         g26<1>D         g105<1,1,0>D    g26<1,1,0>D     { align1 1H compacted };

LABEL6:
while(16)       JIP:  LABEL15                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_instances_indirect_code[] = {
    0x80000065, 0x78058220, 0x02000004, 0xffffffc0,
    0x80030061, 0x19054410, 0x00000000, 0x76543210,
    0x00040061, 0x6e050220, 0x00000024, 0x00000000,
    0xe2791b40, 0x00017803, 0x64191b40, 0x00801995,
    0x00041b61, 0x1a050220, 0x00466e05, 0x00000000,
    0x00040069, 0x2f058660, 0x02466e05, 0x00000004,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00790c, 0x00340000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x2d050160, 0x00461905, 0x00000000,
    0x00041940, 0x00010660, 0x16462d05, 0x00462f05,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x21150061, 0x001102cc, 0x2a240061, 0x001102cc,
    0x00030061, 0x17260aa0, 0x00000264, 0x00000000,
    0x00130061, 0x26260aa0, 0x00000264, 0x00000000,
    0x00030061, 0x74260aa0, 0x000002a4, 0x00000000,
    0x00130061, 0x76260aa0, 0x000002a4, 0x00000000,
    0x21151661, 0x00110204, 0x2a241661, 0x00110204,
    0x21171661, 0x00110244, 0x2a261661, 0x00110244,
    0x21741661, 0x0011025c, 0x2a761661, 0x0011025c,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x28240000, 0xfb047424, 0x000c0000,
    0x00042069, 0x2c058660, 0x02462805, 0x00000006,
    0x01040022, 0x0001c060, 0x000000a8, 0x000000a8,
    0xa1301640, 0x09ce1503, 0xaa311540, 0x09ce2403,
    0xe7321970, 0x09c03003, 0x00033061, 0x75060220,
    0x00343005, 0x00000000, 0x00133061, 0x77060220,
    0x00343105, 0x00000000, 0x00031b40, 0x34052660,
    0x06463205, 0x00441526, 0x00131c40, 0x33052660,
    0x06463305, 0x00442426, 0x00031a61, 0x75260220,
    0x00343405, 0x00000000, 0x00131a61, 0x77260220,
    0x00343305, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x00000000,
    0xfb0c7524, 0x00042814, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0xe0341b68, 0x00802c03,
    0x00040065, 0x36058220, 0x02462c05, 0xffffff00,
    0xa03d1a40, 0x00203403, 0xa0381a40, 0x36202c02,
    0xa03f1a40, 0x3d206e02, 0x00041a65, 0x3a058220,
    0x02463805, 0xffffffc0, 0x00041a61, 0x41052660,
    0x00463f05, 0x00000000, 0xe03c1a68, 0x00603a03,
    0x00041970, 0x00010220, 0x52464105, 0x00463c05,
    0x01040022, 0x0001c060, 0x00000450, 0x00000450,
    0x00040069, 0x4205a660, 0x02463f05, 0x00000006,
    0x00031461, 0x46050220, 0x00441726, 0x00000000,
    0x00131361, 0x47050220, 0x00442626, 0x00000000,
    0xa1482040, 0x2a0e1702, 0xaa492040, 0x2b0e2602,
    0xa0441d40, 0x42003602, 0x00031b70, 0x38050220,
    0x52464805, 0x00441706, 0x00131b70, 0x4a050220,
    0x52464905, 0x00442606, 0x00031a40, 0x4b052660,
    0x06463805, 0x00441726, 0x00131a40, 0x4c052660,
    0x06464a05, 0x00442626, 0x00041966, 0x00010220,
    0x12464805, 0x00464b05, 0x01040022, 0x0001c060,
    0x00000198, 0x00000108, 0xe04c1f68, 0x00604403,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00041969, 0x4e058660, 0x02464c05, 0x00000003,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00031961, 0x76060220, 0x00344e05, 0x00000000,
    0x80103001, 0x00000000, 0x00000000, 0x00000000,
    0x00131a61, 0x78060220, 0x00344f05, 0x00000000,
    0x00031a61, 0x76264220, 0x00000000, 0x00000000,
    0x00131a61, 0x78264220, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x4f240000, 0xfb047624, 0x000c0000,
    0x00032061, 0x1c060220, 0x00344f05, 0x00000000,
    0x00132061, 0x1e060220, 0x00345005, 0x00000000,
    0x0003a061, 0x1c260220, 0x00345105, 0x00000000,
    0x0013a061, 0x1e260220, 0x00345205, 0x00000000,
    0x00040024, 0x0001c060, 0x000000a0, 0x000000a0,
    0xa0501f40, 0x44002a02, 0x27521970, 0x2a005003,
    0xa1390040, 0x500e1702, 0xaa540040, 0x510e2602,
    0x00031a70, 0x55050220, 0x52463905, 0x00441706,
    0x00031f61, 0x1c060220, 0x00343905, 0x00000000,
    0x00131b70, 0x56050220, 0x52465405, 0x00442606,
    0x00131f61, 0x1e060220, 0x00345405, 0x00000000,
    0x00041a52, 0x57040e68, 0x0eae4605, 0x55055205,
    0x00031961, 0x1c260220, 0x00345705, 0x00000000,
    0x00131a61, 0x1e260220, 0x00345805, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000210,
    0xa13a1640, 0x440e1502, 0xaa581540, 0x450e2402,
    0x00031a70, 0x3b050220, 0x52463a05, 0x00441506,
    0x00131a70, 0x59050220, 0x52465805, 0x00442406,
    0x00030061, 0x5b060220, 0x00343a05, 0x00000000,
    0x00130061, 0x5d060220, 0x00345805, 0x00000000,
    0x00031c40, 0x3c052660, 0x06463b05, 0x00441526,
    0x00131c40, 0x5a052660, 0x06465905, 0x00442426,
    0x00031a61, 0x5b260220, 0x00343c05, 0x00000000,
    0x00131a61, 0x5d260220, 0x00345a05, 0x00000000,
    0xe26f004c, 0x00114004, 0x80001969, 0x10018220,
    0x02006f04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x56060660,
    0x00010600, 0x00000000, 0x80000061, 0x56260660,
    0x00010610, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80031961, 0x77260220,
    0x00005624, 0x00000000, 0x80031961, 0x77060220,
    0x00005604, 0x00000000, 0xe2330061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004031, 0x7c140000, 0xfb00770c, 0x00340000,
    0x80001a61, 0x30010220, 0x00003304, 0x00000000,
    0x80001e69, 0x10018220, 0x02006f04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000a00,
    0x80000961, 0x57060660, 0x00010580, 0x00000000,
    0x80000061, 0x57260660, 0x00010590, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80031a61, 0x78260220, 0x00005724, 0x00000000,
    0x80031961, 0x78060220, 0x00005704, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004031, 0x00000000, 0xfb08780c, 0x00347c14,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0xe05e0068, 0x00803603, 0x00031461, 0x60050220,
    0x00441726, 0x00000000, 0x00131361, 0x61050220,
    0x00442626, 0x00000000, 0xa1622040, 0x2a0e1702,
    0xaa632040, 0x2b0e2602, 0xa0690040, 0x00303403,
    0x00031b70, 0x3d050220, 0x52466205, 0x00441706,
    0x00131b70, 0x64050220, 0x52466305, 0x00442606,
    0x00031a40, 0x65052660, 0x06463d05, 0x00441726,
    0x00131a40, 0x66052660, 0x06466405, 0x00442626,
    0x20671966, 0x65006203, 0x00041a70, 0x00010220,
    0x42461a05, 0x00465e05, 0x01040028, 0x0001c660,
    0x00001230, 0x00001230, 0x00040069, 0x6b058660,
    0x02461a05, 0x00000008, 0x00041c70, 0x00018660,
    0x16466705, 0x00000000, 0x01040022, 0x0001c060,
    0x00000258, 0x00000108, 0xe06d1b68, 0x00606b03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x6f058660, 0x02466d05, 0x00000003,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00031961, 0x03060220, 0x00346f05, 0x00000000,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x00131a61, 0x05060220, 0x00347005, 0x00000000,
    0x00031a61, 0x03264220, 0x00000000, 0x00000000,
    0x00131a61, 0x05264220, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x70240000, 0xfb040324, 0x000c0000,
    0x00032161, 0x1d060220, 0x00347005, 0x00000000,
    0x00132161, 0x1f060220, 0x00347105, 0x00000000,
    0x0003a161, 0x1d260220, 0x00347205, 0x00000000,
    0x0013a161, 0x1f260220, 0x00347305, 0x00000000,
    0x00040024, 0x0001c060, 0x00000160, 0x00000160,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa0710040, 0x6b002a02, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x27731970, 0x2a007103,
    0xa13e0040, 0x710e1702, 0x80103001, 0x00000000,
    0x00000000, 0x00000000, 0xaa750040, 0x720e2602,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00030070, 0x76050220, 0x52463e05, 0x00441706,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x1d060220, 0x00343e05, 0x00000000,
    0x80103001, 0x00000000, 0x00000000, 0x00000000,
    0x80101b01, 0x00000000, 0x00000000, 0x00000000,
    0x00130070, 0x77050220, 0x52467505, 0x00442606,
    0x80101f01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x1f060220, 0x00347505, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x78040e68, 0x0eae6005, 0x76057305,
    0x00031961, 0x1d260220, 0x00347805, 0x00000000,
    0x00131a61, 0x1f260220, 0x00347905, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000fa8,
    0xa13f1640, 0x6b0e1502, 0x80103001, 0x00000000,
    0x00000000, 0x00000000, 0x80100b01, 0x00000000,
    0x00000000, 0x00000000, 0xaa790040, 0x6c0e2402,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00031a70, 0x40050220, 0x52463f05, 0x00441506,
    0x00131a70, 0x7a050220, 0x52467905, 0x00442406,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x7c060220, 0x00343f05, 0x00000000,
    0x00130061, 0x7e060220, 0x00347905, 0x00000000,
    0x00031c40, 0x41052660, 0x06464005, 0x00441526,
    0x00131c40, 0x7b052660, 0x06467a05, 0x00442426,
    0x00031a61, 0x7c260220, 0x00344105, 0x00000000,
    0x00131a61, 0x7e260220, 0x00347b05, 0x00000000,
    0xe270004c, 0x00114004, 0x80001969, 0x10018220,
    0x02007004, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x58060660,
    0x00010680, 0x00000000, 0x80000061, 0x58260660,
    0x00010690, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80031961, 0x09260220,
    0x00005824, 0x00000000, 0x80031961, 0x09060220,
    0x00005804, 0x00000000, 0xe2140061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004331, 0x01140000, 0xfb00090c, 0x00340000,
    0x80001a61, 0x30010220, 0x00001404, 0x00000000,
    0x80001e69, 0x10018220, 0x02007004, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000e00,
    0x80000961, 0x59060660, 0x00010600, 0x00000000,
    0x80000061, 0x59260660, 0x00010610, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80031a61, 0x1c260220, 0x00005924, 0x00000000,
    0x80031961, 0x1c060220, 0x00005904, 0x00000000,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004031, 0x00000000, 0xfb081c0c, 0x00340114,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0xa0090040, 0x04006b03, 0x00040070, 0x00018660,
    0x16466705, 0x00000000, 0x01040022, 0x0001c060,
    0x000002a8, 0x00000168, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xe00b1b68, 0x00600903,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x1c058660, 0x02460b05, 0x00000003,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00031961, 0x03060220, 0x00341c05, 0x00000000,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x00131a61, 0x05060220, 0x00341d05, 0x00000000,
    0x00031a61, 0x03264220, 0x00000000, 0x00000000,
    0x00131a61, 0x05264220, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x2c240000, 0xfb040324, 0x000c0000,
    0x00032161, 0x1e060220, 0x00342c05, 0x00000000,
    0x00132161, 0x20060220, 0x00342d05, 0x00000000,
    0x0003a161, 0x1e260220, 0x00342e05, 0x00000000,
    0x0013a161, 0x20260220, 0x00342f05, 0x00000000,
    0x00040024, 0x0001c060, 0x00000150, 0x00000150,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa02d1b40, 0x09002a02, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x272f0070, 0x2a002d03,
    0xa1420040, 0x2d0e1702, 0x80103801, 0x00000000,
    0x00000000, 0x00000000, 0xaa310040, 0x2e0e2602,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00031a70, 0x32050220, 0x52464205, 0x00441706,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x1e060220, 0x00344205, 0x00000000,
    0x80101b01, 0x00000000, 0x00000000, 0x00000000,
    0x00130070, 0x33050220, 0x52463105, 0x00442606,
    0x80101f01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x20060220, 0x00343105, 0x00000000,
    0x00041a52, 0x34040e68, 0x0eae6005, 0x32052f05,
    0x00031961, 0x1e260220, 0x00343405, 0x00000000,
    0x00131a61, 0x20260220, 0x00343505, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000a68,
    0xa1430040, 0x090e1502, 0xaa350040, 0x0a0e2402,
    0x00031a70, 0x44050220, 0x52464305, 0x00441506,
    0x00131a70, 0x36050220, 0x52463505, 0x00442406,
    0x00030061, 0x38060220, 0x00344305, 0x00000000,
    0x00130061, 0x3a060220, 0x00343505, 0x00000000,
    0x00031c40, 0x45052660, 0x06464405, 0x00441526,
    0x00131c40, 0x37052660, 0x06463605, 0x00442426,
    0x00031a61, 0x38260220, 0x00344505, 0x00000000,
    0x00131a61, 0x3a260220, 0x00343705, 0x00000000,
    0xe271004c, 0x00114004, 0x80001969, 0x10018220,
    0x02007104, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x5a060660,
    0x00010700, 0x00000000, 0x80000061, 0x5a260660,
    0x00010710, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80031961, 0x2c260220,
    0x00005a24, 0x00000000, 0x80031961, 0x2c060220,
    0x00005a04, 0x00000000, 0xe2130061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004431, 0x07140000, 0xfb002c0c, 0x00340000,
    0x80001a61, 0x30010220, 0x00001304, 0x00000000,
    0x80001f69, 0x10018220, 0x02007104, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000600,
    0x80000961, 0x62060660, 0x00010400, 0x00000000,
    0x80000061, 0x62260660, 0x00010410, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80031a61, 0x2d260220, 0x00006224, 0x00000000,
    0x80031961, 0x2d060220, 0x00006204, 0x00000000,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004531, 0x00000000, 0xfb082d0c, 0x00340714,
    0xa03b0040, 0x08006b03, 0x00040070, 0x00018660,
    0x16466705, 0x00000000, 0x01040022, 0x0001c060,
    0x000001a8, 0x000000e8, 0xe03d1b68, 0x00603b03,
    0x00041969, 0x3f058660, 0x02463d05, 0x00000003,
    0x00031961, 0x09060220, 0x00343f05, 0x00000000,
    0x80103201, 0x00000000, 0x00000000, 0x00000000,
    0x00131a61, 0x0b060220, 0x00344005, 0x00000000,
    0x00031a61, 0x09264220, 0x00000000, 0x00000000,
    0x00131a61, 0x0b264220, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x40240000, 0xfb040924, 0x000c0000,
    0x00032261, 0x1f060220, 0x00344005, 0x00000000,
    0x00132261, 0x21060220, 0x00344105, 0x00000000,
    0x0003a261, 0x1f260220, 0x00344205, 0x00000000,
    0x0013a261, 0x21260220, 0x00344305, 0x00000000,
    0x00040024, 0x0001c060, 0x000000d0, 0x000000d0,
    0xa0411b40, 0x3b002a02, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x27431970, 0x2a004103,
    0xa1480040, 0x410e1702, 0xaa450040, 0x420e2602,
    0x00031a70, 0x46050220, 0x52464805, 0x00441706,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x1f060220, 0x00344805, 0x00000000,
    0x00131b70, 0x47050220, 0x52464505, 0x00442606,
    0x80101f01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x21060220, 0x00344505, 0x00000000,
    0x00041a52, 0x48040e68, 0x0eae6005, 0x46054305,
    0x00031961, 0x1f260220, 0x00344805, 0x00000000,
    0x00131a61, 0x21260220, 0x00344905, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000688,
    0xa14b0040, 0x3b0e1502, 0xaa490040, 0x3c0e2402,
    0x00031a70, 0x50050220, 0x52464b05, 0x00441506,
    0x00131a70, 0x4a050220, 0x52464905, 0x00442406,
    0x00030061, 0x4c060220, 0x00344b05, 0x00000000,
    0x00130061, 0x4e060220, 0x00344905, 0x00000000,
    0x00031c40, 0x51052660, 0x06465005, 0x00441526,
    0x00131c40, 0x4b052660, 0x06464a05, 0x00442426,
    0x00031a61, 0x4c260220, 0x00345105, 0x00000000,
    0x00131a61, 0x4e260220, 0x00344b05, 0x00000000,
    0xe272004c, 0x00114004, 0x80001969, 0x10018220,
    0x02007204, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x63060660,
    0x00010780, 0x00000000, 0x80000061, 0x63260660,
    0x00010790, 0x00000000, 0x80031961, 0x2e260220,
    0x00006324, 0x00000000, 0x80031961, 0x2e060220,
    0x00006304, 0x00000000, 0xe2120061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004631, 0x0d140000, 0xfb002e0c, 0x00340000,
    0x80001a61, 0x30010220, 0x00001204, 0x00000000,
    0x80001f69, 0x10018220, 0x02007204, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000800,
    0x80000961, 0x6d060660, 0x00010600, 0x00000000,
    0x80000061, 0x6d260660, 0x00010610, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80031a61, 0x2f260220, 0x00006d24, 0x00000000,
    0x80031961, 0x2f060220, 0x00006d04, 0x00000000,
    0x80002601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004731, 0x00000000, 0xfb082f0c, 0x00340d14,
    0xa04f0040, 0x0c006b03, 0x00040070, 0x00018660,
    0x16466705, 0x00000000, 0x01040022, 0x0001c060,
    0x00000218, 0x00000138, 0xe0511b68, 0x00604f03,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x00041969, 0x53058660, 0x02465105, 0x00000003,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x30060220, 0x00345305, 0x00000000,
    0x80103801, 0x00000000, 0x00000000, 0x00000000,
    0x80101a01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x32060220, 0x00345405, 0x00000000,
    0x00031a61, 0x30264220, 0x00000000, 0x00000000,
    0x00131a61, 0x32264220, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x54240000, 0xfb043024, 0x000c0000,
    0x00032861, 0x20060220, 0x00345405, 0x00000000,
    0x00132861, 0x22060220, 0x00345505, 0x00000000,
    0x0003a861, 0x20260220, 0x00345605, 0x00000000,
    0x0013a861, 0x22260220, 0x00345705, 0x00000000,
    0x00040024, 0x0001c060, 0x000000f0, 0x000000f0,
    0xa0551b40, 0x4f002a02, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x27571970, 0x2a005503,
    0xa1520040, 0x550e1702, 0xaa590040, 0x560e2602,
    0x00031a70, 0x5a050220, 0x52465205, 0x00441706,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x20060220, 0x00345205, 0x00000000,
    0x80101b01, 0x00000000, 0x00000000, 0x00000000,
    0x00130070, 0x5b050220, 0x52465905, 0x00442606,
    0x80101f01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x22060220, 0x00345905, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x5c040e68, 0x0eae6005, 0x5a055705,
    0x00031961, 0x20260220, 0x00345c05, 0x00000000,
    0x00131a61, 0x22260220, 0x00345d05, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000238,
    0xa1530040, 0x4f0e1502, 0x80101b01, 0x00000000,
    0x00000000, 0x00000000, 0xaa5d0040, 0x500e2402,
    0x00031a70, 0x54050220, 0x52465305, 0x00441506,
    0x00131a70, 0x62050220, 0x52465d05, 0x00442406,
    0x00030061, 0x6b060220, 0x00345305, 0x00000000,
    0x00130061, 0x6d060220, 0x00345d05, 0x00000000,
    0x00031c40, 0x55052660, 0x06465405, 0x00441526,
    0x00131c40, 0x63052660, 0x06466205, 0x00442426,
    0x00031a61, 0x6b260220, 0x00345505, 0x00000000,
    0x00131a61, 0x6d260220, 0x00346305, 0x00000000,
    0xe273004c, 0x00114004, 0x80001969, 0x10018220,
    0x02007304, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000400, 0x80000961, 0x6f060660,
    0x00010000, 0x00000000, 0x80000061, 0x6f260660,
    0x00010010, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80031961, 0x31260220,
    0x00006f24, 0x00000000, 0x80031961, 0x31060220,
    0x00006f04, 0x00000000, 0xe2110061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004831, 0x0f140000, 0xfb00310c, 0x00340000,
    0x80001a61, 0x30010220, 0x00001104, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001f69, 0x10018220, 0x02007304, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000c00,
    0x80000961, 0x75060660, 0x00010580, 0x00000000,
    0x80000061, 0x75260660, 0x00010590, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80031a61, 0x32260220, 0x00007524, 0x00000000,
    0x80031961, 0x32060220, 0x00007504, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004831, 0x00000000, 0xfb08320c, 0x00340f14,
    0xa01a0040, 0x1a006902, 0x00040027, 0x00014060,
    0x00000000, 0xffffedc0, 0x80030061, 0x7e050220,
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
      .base.program_size = 6640,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_misc_copy_instances_indirect_relocs,
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
const char *gfx125_misc_copy_instances_indirect_sha1 = "f1ddd4265d8dfc92d18848d1d94827544b3ebb46";

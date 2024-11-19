#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_misc_copy_instances_base_ptr_indirect_relocs[] = {
};
static const u_printf_info gfx125_misc_copy_instances_base_ptr_indirect_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_misc_copy_instances_base_ptr_indirect_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g92<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g110<1>UD       g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g92UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(16)         g93<1>UD        g110<8,8,1>UD                   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g62<1>D         g2<0,1,0>D      152D            { align1 1H compacted };
mov(8)          g116.1<2>D      g2.5<0,1,0>D                    { align1 1Q };
mov(8)          g118.1<2>D      g2.5<0,1,0>D                    { align1 2Q };
cmp.l.f0.0(16)  g64<1>UD        g62<1,1,0>UD    0x00000098UD    { align1 1H I@3 compacted };
mov(8)          g112<2>UD       g62<4,4,1>UD                    { align1 1Q };
mov(8)          g114<2>UD       g63<4,4,1>UD                    { align1 2Q };
mov(8)          g116<2>D        g2.4<0,1,0>D                    { align1 1Q I@5 };
mov(8)          g118<2>D        g2.4<0,1,0>D                    { align1 2Q I@5 };
add(16)         g66<1>D         -g64<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g26UD           g116UD          nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(8)          g112.1<2>UD     g66<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g114.1<2>UD     g67<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g67UD           g112UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
shl(16)         g30<1>D         g26<8,8,1>D     0x00000006UD    { align1 1H $1.dst };
shr(16)         g32<1>UD        g30<1,1,0>UD    0x00000008UD    { align1 1H I@1 compacted };
and(16)         g34<1>UD        g30<8,8,1>UD    0xffffff00UD    { align1 1H };
add(16)         g20<1>D         g2<0,1,0>D      g67<1,1,0>D     { align1 1H $2.dst compacted };
add3(16)        g42<1>D         65534W          -g32<8,8,1>D    g110<1,1,1>D { align1 1H I@3 };
add(16)         g36<1>D         g30<1,1,0>D     -g34<1,1,0>D    { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g22<1>UD        g20<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@3 compacted };
mov(16)         g44<1>D         -g42<8,8,1>D                    { align1 1H I@3 };
and(16)         g38<1>UD        g36<8,8,1>UD    0xffffffc0UD    { align1 1H I@3 };
add(16)         g24<1>D         -g22<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
shr(16)         g40<1>UD        g38<1,1,0>UD    0x00000006UD    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  null<1>UD       g44<8,8,1>UD    g40<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g45<1>D         -g42<8,8,1>D    0x00000006UD    { align1 1H };
add(16)         g49<1>D         g2.2<0,1,0>D    g28<1,1,0>D     { align1 1H $1.dst compacted };
add(16)         g47<1>D         g34<1,1,0>D     g45<1,1,0>D     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g51<1>UD        g49<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@2 compacted };
add(16)         g53<1>D         -g51<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@1 compacted };
or.z.f0.0(16)   null<1>UD       g49<8,8,1>UD    g53<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL1              { align1 1H };
shr(16)         g54<1>UD        g47<1,1,0>UD    0x00000006UD    { align1 1H I@5 compacted };
shl(16)         g56<1>D         g54<8,8,1>D     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g117<2>UD       g56<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g119<2>UD       g57<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g117.1<2>UD     0x00000000UD                    { align1 1Q I@2 };
mov(8)          g119.1<2>UD     0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g57UD           g117UD          nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(8)          g3<2>UD         g57<4,4,1>UD                    { align1 1Q $1.dst };
mov(8)          g5<2>UD         g58<4,4,1>UD                    { align1 2Q $1.dst };
mov(8)          g3.1<2>UD       g59<4,4,1>UD                    { align1 1Q @2 $1.dst };
mov(8)          g5.1<2>UD       g60<4,4,1>UD                    { align1 2Q @2 $1.dst };
else(16)        JIP:  LABEL1          UIP:  LABEL1              { align1 1H };

LABEL2:
add(16)         g58<1>D         g28<1,1,0>D     g47<1,1,0>D     { align1 1H I@5 compacted };
cmp.l.f0.0(16)  g60<1>UD        g58<1,1,0>UD    g28<1,1,0>UD    { align1 1H I@1 compacted };
add(16)         g13<1>D         g2.2<0,1,0>D    g58<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g15<1>UD        g13<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g3<2>UD         g13<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g5<2>UD         g14<4,4,1>UD                    { align1 2Q I@7 };
add3(16)        g17<1>D         g2.3<0,1,0>D    -g60<8,8,1>D    -g15<1,1,1>D { align1 1H I@3 };
mov(8)          g3.1<2>UD       g17<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g5.1<2>UD       g18<4,4,1>UD                    { align1 2Q I@2 };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
add(16)         g18<1>D         g20<1,1,0>D     g47<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g69<1>UD        g18<1,1,0>UD    g20<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g73<2>UD        g18<4,4,1>UD                    { align1 1Q };
mov(8)          g75<2>UD        g19<4,4,1>UD                    { align1 2Q };
add(16)         g71<1>D         -g69<1,1,0>D    g24<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g73.1<2>UD      g71<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g75.1<2>UD      g72<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g85<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g85<1>UD        g85<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g77<1>UD        g85<0,1,0>UD                    { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g77<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g79<2>D         g[a0 96]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g79.1<2>D       g[a0 100]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g118.1<2>D      g79.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g118<2>D        g79<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g84<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g123UD   g118UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
mov(1)          f0<1>UD         g84<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g77<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g80<2>D         g[a0 288]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g80.1<2>D       g[a0 292]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g119.1<2>D      g80.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g119<2>D        g80<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g119UD          g123UD          0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $1 };

LABEL0:
endif(16)       JIP:  LABEL3                                    { align1 1H };

LABEL3:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shr(16)         g81<1>UD        g34<1,1,0>UD    0x00000008UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
add(16)         g83<1>D         g2.2<0,1,0>D    g28<1,1,0>D     { align1 1H $1.dst compacted };
cmp.l.f0.0(16)  g85<1>UD        g83<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
add(16)         g87<1>D         -g85<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@1 compacted };
or(16)          g89<1>UD        g83<1,1,0>UD    g87<1,1,0>UD    { align1 1H I@1 compacted };

LABEL13:
cmp.ge.f0.0(16) null<1>UD       g93<8,8,1>UD    g81<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shl(16)         g91<1>D         g93<8,8,1>D     0x00000008UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g89<8,8,1>D     0D              { align1 1H I@4 };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL5              { align1 1H };
shr(16)         g11<1>UD        g91<1,1,0>UD    0x00000006UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shl(16)         g95<1>D         g11<8,8,1>D     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g124<2>UD       g95<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g126<2>UD       g96<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g124.1<2>UD     0x00000000UD                    { align1 1Q I@2 };
mov(8)          g126.1<2>UD     0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g96UD           g124UD          nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(8)          g4<2>UD         g96<4,4,1>UD                    { align1 1Q $1.dst };
mov(8)          g6<2>UD         g97<4,4,1>UD                    { align1 2Q $1.dst };
mov(8)          g4.1<2>UD       g98<4,4,1>UD                    { align1 1Q @2 $1.dst };
mov(8)          g6.1<2>UD       g99<4,4,1>UD                    { align1 2Q @2 $1.dst };
else(16)        JIP:  LABEL5          UIP:  LABEL5              { align1 1H };

LABEL6:
add(16)         g97<1>D         g28<1,1,0>D     g91<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g99<1>UD        g97<1,1,0>UD    g28<1,1,0>UD    { align1 1H I@1 compacted };
add(16)         g101<1>D        g2.2<0,1,0>D    g97<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g103<1>UD       g101<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(8)          g4<2>UD         g101<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@7 };
mov(8)          g6<2>UD         g102<4,4,1>UD                   { align1 2Q };
add3(16)        g105<1>D        g2.3<0,1,0>D    -g99<8,8,1>D    -g103<1,1,1>D { align1 1H I@3 };
mov(8)          g4.1<2>UD       g105<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g6.1<2>UD       g106<4,4,1>UD                   { align1 2Q I@2 };

LABEL5:
endif(16)       JIP:  LABEL4                                    { align1 1H };
add(16)         g106<1>D        g20<1,1,0>D     g91<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g108<1>UD       g106<1,1,0>UD   g20<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g112<2>UD       g106<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $2.src };
mov(8)          g114<2>UD       g107<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g110<1>D        -g108<1,1,0>D   g24<1,1,0>D     { align1 1H compacted };
mov(8)          g112.1<2>UD     g110<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g114.1<2>UD     g111<4,4,1>UD                   { align1 2Q I@2 };
mov(1)          g86<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g86<1>UD        g86<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
fbl(1)          g116<1>UD       g86<0,1,0>UD                    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shl(1)          a0<1>UD         g116<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g118<2>D        g[a0 128]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g118.1<2>D      g[a0 132]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g62.1<2>D       g118.1<0,1,0>D                  { align1 WE_all 1Q I@1 };
mov(8)          g62<2>D         g118<0,1,0>D                    { align1 WE_all 1Q I@1 };
mov(1)          g83<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g67UD    g62UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $3 };
mov(1)          f0<1>UD         g83<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g116<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000e00UD    { align1 WE_all 1N A@1 };
mov(1)          g119<2>D        g[a0]<0,1,0>D                   { align1 WE_all 1N A@1 };
mov(1)          g119.1<2>D      g[a0 4]<0,1,0>D                 { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g63.1<2>D       g119.1<0,1,0>D                  { align1 WE_all 1Q I@2 };
mov(8)          g63<2>D         g119<0,1,0>D                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g63UD           g67UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g120<1>D        g91<1,1,0>D     64D             { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g89<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shr(16)         g122<1>UD       g120<1,1,0>UD   0x00000006UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shl(16)         g124<1>D        g122<8,8,1>D    0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g34<2>UD        g124<4,4,1>UD                   { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
mov(8)          g36<2>UD        g125<4,4,1>UD                   { align1 2Q };
mov(8)          g34.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g36.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g62UD           g34UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mov(8)          g5<2>UD         g62<4,4,1>UD                    { align1 1Q $5.dst };
mov(8)          g7<2>UD         g63<4,4,1>UD                    { align1 2Q $5.dst };
mov(8)          g5.1<2>UD       g64<4,4,1>UD                    { align1 1Q @2 $5.dst };
mov(8)          g7.1<2>UD       g65<4,4,1>UD                    { align1 2Q @2 $5.dst };
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g63<1>D         g28<1,1,0>D     g120<1,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g65<1>UD        g63<1,1,0>UD    g28<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g67<1>D         g2.2<0,1,0>D    g63<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g22<1>UD        g67<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(8)          g5<2>UD         g67<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@7 };
mov(8)          g7<2>UD         g68<4,4,1>UD                    { align1 2Q };
add3(16)        g30<1>D         g2.3<0,1,0>D    -g65<8,8,1>D    -g22<1,1,1>D { align1 1H I@3 };
mov(8)          g5.1<2>UD       g30<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g7.1<2>UD       g31<4,4,1>UD                    { align1 2Q I@2 };

LABEL7:
endif(16)       JIP:  LABEL4                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g34<1>D         g20<1,1,0>D     g120<1,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g36<1>UD        g34<1,1,0>UD    g20<1,1,0>UD    { align1 1H compacted };
mov(8)          g40<2>UD        g34<4,4,1>UD                    { align1 1Q };
mov(8)          g42<2>UD        g35<4,4,1>UD                    { align1 2Q };
add(16)         g38<1>D         -g36<1,1,0>D    g24<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g40.1<2>UD      g38<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g42.1<2>UD      g39<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g87<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g87<1>UD        g87<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g44<1>UD        g87<0,1,0>UD                    { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g44<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g46<2>D         g[a0 160]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g46.1<2>D       g[a0 164]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g35.1<2>D       g46.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g35<2>D         g46<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g80<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g51UD    g35UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $5 };
mov(1)          f0<1>UD         g80<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g44<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000400UD    { align1 WE_all 1N A@1 };
mov(1)          g47<2>D         g[a0 256]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g47.1<2>D       g[a0 260]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g36.1<2>D       g47.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g36<2>D         g47<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g36UD           g51UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g48<1>D         g91<1,1,0>D     128D            { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g89<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL9              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shr(16)         g50<1>UD        g48<1,1,0>UD    0x00000006UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
shl(16)         g52<1>D         g50<8,8,1>D     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g57<2>UD        g52<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
mov(8)          g59<2>UD        g53<4,4,1>UD                    { align1 2Q };
mov(8)          g57.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g59.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g53UD           g57UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
mov(8)          g6<2>UD         g53<4,4,1>UD                    { align1 1Q $6.dst };
mov(8)          g8<2>UD         g54<4,4,1>UD                    { align1 2Q $6.dst };
mov(8)          g6.1<2>UD       g55<4,4,1>UD                    { align1 1Q @2 $6.dst };
mov(8)          g8.1<2>UD       g56<4,4,1>UD                    { align1 2Q @2 $6.dst };
else(16)        JIP:  LABEL9          UIP:  LABEL9              { align1 1H };

LABEL10:
add(16)         g54<1>D         g28<1,1,0>D     g48<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g56<1>UD        g54<1,1,0>UD    g28<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g58<1>D         g2.2<0,1,0>D    g54<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g60<1>UD        g58<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(8)          g6<2>UD         g58<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@7 };
mov(8)          g8<2>UD         g59<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add3(16)        g13<1>D         g2.3<0,1,0>D    -g56<8,8,1>D    -g60<1,1,1>D { align1 1H I@3 };
mov(8)          g6.1<2>UD       g13<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g8.1<2>UD       g14<4,4,1>UD                    { align1 2Q I@2 };

LABEL9:
endif(16)       JIP:  LABEL4                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g14<1>D         g20<1,1,0>D     g48<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(16)  g16<1>UD        g14<1,1,0>UD    g20<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g69<2>UD        g14<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $7.src };
mov(8)          g71<2>UD        g15<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g18<1>D         -g16<1,1,0>D    g24<1,1,0>D     { align1 1H compacted };
mov(8)          g69.1<2>UD      g18<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g71.1<2>UD      g19<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g88<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g88<1>UD        g88<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g73<1>UD        g88<0,1,0>UD                    { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g73<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g75<2>D         g[a0 192]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g75.1<2>D       g[a0 196]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g58.1<2>D       g75.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g58<2>D         g75<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g79<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g14UD    g58UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $6 };
mov(1)          f0<1>UD         g79<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g73<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g76<2>D         g[a0 160]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g76.1<2>D       g[a0 164]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g59.1<2>D       g76.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g59<2>D         g76<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g59UD           g14UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g77<1>D         g91<1,1,0>D     192D            { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g89<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shr(16)         g79<1>UD        g77<1,1,0>UD    0x00000006UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shl(16)         g83<1>D         g79<8,8,1>D     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g15<2>UD        g83<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g17<2>UD        g84<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g15.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g17.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g84UD           g15UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
mov(8)          g7<2>UD         g84<4,4,1>UD                    { align1 1Q $6.dst };
mov(8)          g9<2>UD         g85<4,4,1>UD                    { align1 2Q $6.dst };
mov(8)          g7.1<2>UD       g86<4,4,1>UD                    { align1 1Q @2 $6.dst };
mov(8)          g9.1<2>UD       g87<4,4,1>UD                    { align1 2Q @2 $6.dst };
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
add(16)         g85<1>D         g28<1,1,0>D     g77<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g87<1>UD        g85<1,1,0>UD    g28<1,1,0>UD    { align1 1H I@1 compacted };
add(16)         g91<1>D         g2.2<0,1,0>D    g85<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g11<1>UD        g91<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(8)          g7<2>UD         g91<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@7 };
mov(8)          g9<2>UD         g92<4,4,1>UD                    { align1 2Q };
add3(16)        g95<1>D         g2.3<0,1,0>D    -g87<8,8,1>D    -g11<1,1,1>D { align1 1H I@3 };
mov(8)          g7.1<2>UD       g95<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g9.1<2>UD       g96<4,4,1>UD                    { align1 2Q I@2 };

LABEL11:
endif(16)       JIP:  LABEL4                                    { align1 1H };
add(16)         g96<1>D         g20<1,1,0>D     g77<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g98<1>UD        g96<1,1,0>UD    g20<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g102<2>UD       g96<4,4,1>UD                    { align1 1Q };
mov(8)          g104<2>UD       g97<4,4,1>UD                    { align1 2Q };
add(16)         g100<1>D        -g98<1,1,0>D    g24<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g102.1<2>UD     g100<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g104.1<2>UD     g101<4,4,1>UD                   { align1 2Q I@2 };
mov(1)          g91<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g91<1>UD        g91<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g106<1>UD       g91<0,1,0>UD                    { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g106<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g108<2>D        g[a0 224]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g108.1<2>D      g[a0 228]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g16.1<2>D       g108.1<0,1,0>D                  { align1 WE_all 1Q I@1 };
mov(8)          g16<2>D         g108<0,1,0>D                    { align1 WE_all 1Q I@1 };
mov(1)          g72<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g70UD    g16UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $8 };
mov(1)          f0<1>UD         g72<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g106<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000c00UD    { align1 WE_all 1N A@1 };
mov(1)          g109<2>D        g[a0 192]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g109.1<2>D      g[a0 196]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g17.1<2>D       g109.1<0,1,0>D                  { align1 WE_all 1Q I@2 };
mov(8)          g17<2>D         g109<0,1,0>D                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g17UD           g70UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $7 };
add3(16)        g93<1>D         0x0003UW        g32<8,8,1>D     g93<1,1,1>D { align1 1H };

LABEL4:
while(16)       JIP:  LABEL13                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q $1.src };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_instances_base_ptr_indirect_code[] = {
    0x80000065, 0x5c058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x6e050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa005c0c, 0x00340000,
    0x00041961, 0x5d050220, 0x00466e05, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa03e0040, 0x09810203, 0x00030061, 0x74260660,
    0x000002a4, 0x00000000, 0x00130061, 0x76260660,
    0x000002a4, 0x00000000, 0xe7401b70, 0x09803e03,
    0x00030061, 0x70060220, 0x00343e05, 0x00000000,
    0x00130061, 0x72060220, 0x00343f05, 0x00000000,
    0x00031d61, 0x74060660, 0x00000284, 0x00000000,
    0x00131d61, 0x76060660, 0x00000284, 0x00000000,
    0xa0421d40, 0x02124012, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x1a240000,
    0xfb047424, 0x000c0000, 0x00031961, 0x70260220,
    0x00344205, 0x00000000, 0x00131a61, 0x72260220,
    0x00344305, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x43140000,
    0xfb047024, 0x00040000, 0x00042169, 0x1e058660,
    0x02461a05, 0x00000006, 0xe0201968, 0x00801e03,
    0x00040065, 0x22058220, 0x02461e05, 0xffffff00,
    0xa0142240, 0x43010202, 0x00041b52, 0x2a044560,
    0x0e8efffe, 0x6e052005, 0xa0241b40, 0x22201e02,
    0x27161b70, 0x02101403, 0x00041b61, 0x2c052660,
    0x00462a05, 0x00000000, 0x00041b65, 0x26058220,
    0x02462405, 0xffffffc0, 0xa0181b40, 0x02121612,
    0xe0281a68, 0x00602603, 0x00041970, 0x00010220,
    0x52462c05, 0x00462805, 0x01040022, 0x0001c060,
    0x000003a0, 0x000003a0, 0x00040069, 0x2d05a660,
    0x02462a05, 0x00000006, 0xa0312140, 0x1c010242,
    0xa02f1a40, 0x2d002202, 0x27331a70, 0x0210312b,
    0xa0351940, 0x0212331a, 0x00041966, 0x00010220,
    0x12463105, 0x00463505, 0x01040022, 0x0001c060,
    0x00000168, 0x000000f8, 0xe0361d68, 0x00602f03,
    0x00041969, 0x38058660, 0x02463605, 0x00000003,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00031961, 0x75060220, 0x00343805, 0x00000000,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x00131a61, 0x77060220, 0x00343905, 0x00000000,
    0x00031a61, 0x75264220, 0x00000000, 0x00000000,
    0x00131a61, 0x77264220, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x39240000, 0xfb047524, 0x000c0000,
    0x00032161, 0x03060220, 0x00343905, 0x00000000,
    0x00132161, 0x05060220, 0x00343a05, 0x00000000,
    0x0003a161, 0x03260220, 0x00343b05, 0x00000000,
    0x0013a161, 0x05260220, 0x00343c05, 0x00000000,
    0x00040024, 0x0001c060, 0x00000080, 0x00000080,
    0xa03a1d40, 0x2f001c02, 0x273c1970, 0x1c003a03,
    0xa00d0040, 0x3a010242, 0x270f1970, 0x02100d2b,
    0x00031f61, 0x03060220, 0x00340d05, 0x00000000,
    0x00131f61, 0x05060220, 0x00340e05, 0x00000000,
    0x00041b52, 0x11040660, 0x0eae0264, 0x0f053c05,
    0x00031961, 0x03260220, 0x00341105, 0x00000000,
    0x00131a61, 0x05260220, 0x00341205, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000001e8,
    0xa0120040, 0x2f001402, 0x27451970, 0x14001203,
    0x00030061, 0x49060220, 0x00341205, 0x00000000,
    0x00130061, 0x4b060220, 0x00341305, 0x00000000,
    0xa0471b40, 0x18024502, 0x00031961, 0x49260220,
    0x00344705, 0x00000000, 0x00131a61, 0x4b260220,
    0x00344805, 0x00000000, 0xe2550961, 0x00114004,
    0x80000965, 0x55058220, 0x02005504, 0xffffffff,
    0x8000194c, 0x4d050220, 0x00005504, 0x00000000,
    0x80001969, 0x10018220, 0x02004d04, 0x00000003,
    0x80000961, 0x4f060660, 0x00010180, 0x00000000,
    0x80000061, 0x4f260660, 0x00010190, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x76260660, 0x00004f24, 0x00000000,
    0x80031961, 0x76060660, 0x00004f04, 0x00000000,
    0xe2540061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004131, 0x7b140000,
    0xfb00760c, 0x00340000, 0x80001a61, 0x30010220,
    0x00005404, 0x00000000, 0x80001e69, 0x10018220,
    0x02004d04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000800, 0x80000961, 0x50060660,
    0x00010480, 0x00000000, 0x80000061, 0x50260660,
    0x00010490, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x77260660,
    0x00005024, 0x00000000, 0x80031961, 0x77060660,
    0x00005004, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004131, 0x00000000,
    0xfb08770c, 0x00347b14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0xe0510068, 0x00802203,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0xa0532140, 0x1c010242, 0x27551970, 0x0210532b,
    0xa0571940, 0x0212551a, 0x20591966, 0x57005303,
    0x00041a70, 0x00010220, 0x42465d05, 0x00465105,
    0x01040028, 0x0001c660, 0x00001108, 0x00001108,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x5b058660, 0x02465d05, 0x00000008,
    0x00041c70, 0x00018660, 0x16465905, 0x00000000,
    0x01040022, 0x0001c060, 0x000001a8, 0x00000108,
    0xe00b1b68, 0x00605b03, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00041969, 0x5f058660,
    0x02460b05, 0x00000003, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x7c060220,
    0x00345f05, 0x00000000, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00131a61, 0x7e060220,
    0x00346005, 0x00000000, 0x00031a61, 0x7c264220,
    0x00000000, 0x00000000, 0x00131a61, 0x7e264220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x60240000,
    0xfb047c24, 0x000c0000, 0x00032161, 0x04060220,
    0x00346005, 0x00000000, 0x00132161, 0x06060220,
    0x00346105, 0x00000000, 0x0003a161, 0x04260220,
    0x00346205, 0x00000000, 0x0013a161, 0x06260220,
    0x00346305, 0x00000000, 0x00040024, 0x0001c060,
    0x000000b0, 0x000000b0, 0xa0611b40, 0x5b001c02,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x27631970, 0x1c006103, 0xa0650040, 0x61010242,
    0x27671970, 0x0210652b, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x04060220,
    0x00346505, 0x00000000, 0x80101f01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x06060220,
    0x00346605, 0x00000000, 0x00041b52, 0x69040660,
    0x0eae0264, 0x67056305, 0x00031961, 0x04260220,
    0x00346905, 0x00000000, 0x00131a61, 0x06260220,
    0x00346a05, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000f20, 0xa06a0040, 0x5b001402,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x276c1970, 0x14006a03, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x70060220,
    0x00346a05, 0x00000000, 0x80103201, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x72060220,
    0x00346b05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa06e0040, 0x18026c02,
    0x00031961, 0x70260220, 0x00346e05, 0x00000000,
    0x00131a61, 0x72260220, 0x00346f05, 0x00000000,
    0xe2560961, 0x00114004, 0x80000965, 0x56058220,
    0x02005604, 0xffffffff, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x8000194c, 0x74050220,
    0x00005604, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001969, 0x10018220,
    0x02007404, 0x00000003, 0x80000961, 0x76060660,
    0x00010200, 0x00000000, 0x80000061, 0x76260660,
    0x00010210, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80031961, 0x3e260660,
    0x00007624, 0x00000000, 0x80031961, 0x3e060660,
    0x00007604, 0x00000000, 0xe2530061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004331, 0x43140000, 0xfb003e0c, 0x00340000,
    0x80001a61, 0x30010220, 0x00005304, 0x00000000,
    0x80001e69, 0x10018220, 0x02007404, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000e00,
    0x80000961, 0x77060660, 0x00010000, 0x00000000,
    0x80000061, 0x77260660, 0x00010010, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80031a61, 0x3f260660, 0x00007724, 0x00000000,
    0x80031961, 0x3f060660, 0x00007704, 0x00000000,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004431, 0x00000000, 0xfb083f0c, 0x00344314,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0xa0780040, 0x04005b03, 0x00040070, 0x00018660,
    0x16465905, 0x00000000, 0x01040022, 0x0001c060,
    0x00000238, 0x00000168, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xe07a0068, 0x00607803,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00041969, 0x7c058660, 0x02467a05, 0x00000003,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00031961, 0x22060220, 0x00347c05, 0x00000000,
    0x80103501, 0x00000000, 0x00000000, 0x00000000,
    0x80101a01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x24060220, 0x00347d05, 0x00000000,
    0x00031a61, 0x22264220, 0x00000000, 0x00000000,
    0x00131a61, 0x24264220, 0x00000000, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x3e240000, 0xfb042224, 0x000c0000,
    0x00032561, 0x05060220, 0x00343e05, 0x00000000,
    0x00132561, 0x07060220, 0x00343f05, 0x00000000,
    0x0003a561, 0x05260220, 0x00344005, 0x00000000,
    0x0013a561, 0x07260220, 0x00344105, 0x00000000,
    0x00040024, 0x0001c060, 0x000000e0, 0x000000e0,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa03f0040, 0x78001c02, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x27411970, 0x1c003f03,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa0430040, 0x3f010242, 0x27161970, 0x0210432b,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x05060220, 0x00344305, 0x00000000,
    0x80101f01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x07060220, 0x00344405, 0x00000000,
    0x00041b52, 0x1e040660, 0x0eae0264, 0x16054105,
    0x00031961, 0x05260220, 0x00341e05, 0x00000000,
    0x00131a61, 0x07260220, 0x00341f05, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000a78,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xa0220040, 0x78001402, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x27240070, 0x14002203,
    0x00030061, 0x28060220, 0x00342205, 0x00000000,
    0x00130061, 0x2a060220, 0x00342305, 0x00000000,
    0xa0261b40, 0x18022402, 0x00031961, 0x28260220,
    0x00342605, 0x00000000, 0x00131a61, 0x2a260220,
    0x00342705, 0x00000000, 0xe2570961, 0x00114004,
    0x80000965, 0x57058220, 0x02005704, 0xffffffff,
    0x8000194c, 0x2c050220, 0x00005704, 0x00000000,
    0x80001969, 0x10018220, 0x02002c04, 0x00000003,
    0x80000961, 0x2e060660, 0x00010280, 0x00000000,
    0x80000061, 0x2e260660, 0x00010290, 0x00000000,
    0x80031961, 0x23260660, 0x00002e24, 0x00000000,
    0x80031961, 0x23060660, 0x00002e04, 0x00000000,
    0xe2500061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004531, 0x33140000,
    0xfb00230c, 0x00340000, 0x80001a61, 0x30010220,
    0x00005004, 0x00000000, 0x80001e69, 0x10018220,
    0x02002c04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000400, 0x80000961, 0x2f060660,
    0x00010400, 0x00000000, 0x80000061, 0x2f260660,
    0x00010410, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x24260660,
    0x00002f24, 0x00000000, 0x80031961, 0x24060660,
    0x00002f04, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004531, 0x00000000,
    0xfb08240c, 0x00343314, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0300040, 0x08005b03,
    0x00040070, 0x00018660, 0x16465905, 0x00000000,
    0x01040022, 0x0001c060, 0x00000238, 0x00000148,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xe0320068, 0x00603003, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00041969, 0x34058660,
    0x02463205, 0x00000003, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x39060220,
    0x00343405, 0x00000000, 0x80103601, 0x00000000,
    0x00000000, 0x00000000, 0x80101a01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x3b060220,
    0x00343505, 0x00000000, 0x00031a61, 0x39264220,
    0x00000000, 0x00000000, 0x00131a61, 0x3b264220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x35240000,
    0xfb043924, 0x000c0000, 0x00032661, 0x06060220,
    0x00343505, 0x00000000, 0x00132661, 0x08060220,
    0x00343605, 0x00000000, 0x0003a661, 0x06260220,
    0x00343705, 0x00000000, 0x0013a661, 0x08260220,
    0x00343805, 0x00000000, 0x00040024, 0x0001c060,
    0x00000100, 0x00000100, 0xa0361b40, 0x30001c02,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x27381970, 0x1c003603, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xa03a0040, 0x36010242,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x273c0070, 0x02103a2b, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x06060220,
    0x00343a05, 0x00000000, 0x80101f01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x08060220,
    0x00343b05, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00041b52, 0x0d040660,
    0x0eae0264, 0x3c053805, 0x00031961, 0x06260220,
    0x00340d05, 0x00000000, 0x00131a61, 0x08260220,
    0x00340e05, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000630, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xa00e0040, 0x30001402,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x27101970, 0x14000e03, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x45060220,
    0x00340e05, 0x00000000, 0x80103701, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x47060220,
    0x00340f05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa0120040, 0x18021002,
    0x00031961, 0x45260220, 0x00341205, 0x00000000,
    0x00131a61, 0x47260220, 0x00341305, 0x00000000,
    0xe2580961, 0x00114004, 0x80000965, 0x58058220,
    0x02005804, 0xffffffff, 0x8000194c, 0x49050220,
    0x00005804, 0x00000000, 0x80001969, 0x10018220,
    0x02004904, 0x00000003, 0x80000961, 0x4b060660,
    0x00010300, 0x00000000, 0x80000061, 0x4b260660,
    0x00010310, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80031961, 0x3a260660,
    0x00004b24, 0x00000000, 0x80031961, 0x3a060660,
    0x00004b04, 0x00000000, 0xe24f0061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004631, 0x0e140000, 0xfb003a0c, 0x00340000,
    0x80001a61, 0x30010220, 0x00004f04, 0x00000000,
    0x80001e69, 0x10018220, 0x02004904, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000800,
    0x80000961, 0x4c060660, 0x00010280, 0x00000000,
    0x80000061, 0x4c260660, 0x00010290, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80031a61, 0x3b260660, 0x00004c24, 0x00000000,
    0x80031961, 0x3b060660, 0x00004c04, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004631, 0x00000000, 0xfb083b0c, 0x00340e14,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0xa04d0040, 0x0c005b03, 0x00040070, 0x00018660,
    0x16465905, 0x00000000, 0x01040022, 0x0001c060,
    0x000001a8, 0x00000108, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xe04f0068, 0x00604d03,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041969, 0x53058660, 0x02464f05, 0x00000003,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00031961, 0x0f060220, 0x00345305, 0x00000000,
    0x00131a61, 0x11060220, 0x00345405, 0x00000000,
    0x00031a61, 0x0f264220, 0x00000000, 0x00000000,
    0x00131a61, 0x11264220, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x54240000, 0xfb040f24, 0x000c0000,
    0x00032661, 0x07060220, 0x00345405, 0x00000000,
    0x00132661, 0x09060220, 0x00345505, 0x00000000,
    0x0003a661, 0x07260220, 0x00345605, 0x00000000,
    0x0013a661, 0x09260220, 0x00345705, 0x00000000,
    0x00040024, 0x0001c060, 0x000000b0, 0x000000b0,
    0xa0551b40, 0x4d001c02, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x27571970, 0x1c005503,
    0xa05b0040, 0x55010242, 0x270b1970, 0x02105b2b,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x07060220, 0x00345b05, 0x00000000,
    0x80101f01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x09060220, 0x00345c05, 0x00000000,
    0x00041b52, 0x5f040660, 0x0eae0264, 0x0b055705,
    0x00031961, 0x07260220, 0x00345f05, 0x00000000,
    0x00131a61, 0x09260220, 0x00346005, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000208,
    0xa0600040, 0x4d001402, 0x27621970, 0x14006003,
    0x00030061, 0x66060220, 0x00346005, 0x00000000,
    0x00130061, 0x68060220, 0x00346105, 0x00000000,
    0xa0641b40, 0x18026202, 0x00031961, 0x66260220,
    0x00346405, 0x00000000, 0x00131a61, 0x68260220,
    0x00346505, 0x00000000, 0xe25b0961, 0x00114004,
    0x80000965, 0x5b058220, 0x02005b04, 0xffffffff,
    0x8000194c, 0x6a050220, 0x00005b04, 0x00000000,
    0x80001969, 0x10018220, 0x02006a04, 0x00000003,
    0x80000961, 0x6c060660, 0x00010380, 0x00000000,
    0x80000061, 0x6c260660, 0x00010390, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x10260660, 0x00006c24, 0x00000000,
    0x80031961, 0x10060660, 0x00006c04, 0x00000000,
    0xe2480061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004831, 0x46140000,
    0xfb00100c, 0x00340000, 0x80001a61, 0x30010220,
    0x00004804, 0x00000000, 0x80001e69, 0x10018220,
    0x02006a04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000c00, 0x80000961, 0x6d060660,
    0x00010300, 0x00000000, 0x80000061, 0x6d260660,
    0x00010310, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x11260660,
    0x00006d24, 0x00000000, 0x80031961, 0x11060660,
    0x00006d04, 0x00000000, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004731, 0x00000000,
    0xfb08110c, 0x00344614, 0x00040052, 0x5d044160,
    0x0e0e0003, 0x5d052005, 0x00040027, 0x00014060,
    0x00000000, 0xffffeee8, 0x80033161, 0x7e050220,
    0x00460005, 0x00000000, 0x80040931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_misc_copy_instances_base_ptr_indirect = {
   .prog_data = {
      .base.nr_params = 14,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 5904,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_misc_copy_instances_base_ptr_indirect_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_misc_copy_instances_base_ptr_indirect_printfs,
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
   .args = gfx125_misc_copy_instances_base_ptr_indirect_args,
   .code = gfx125_misc_copy_instances_base_ptr_indirect_code,
};
const char *gfx125_misc_copy_instances_base_ptr_indirect_sha1 = "849e558ef383a8a883e4ca8fe5ab57aae2c5d990";

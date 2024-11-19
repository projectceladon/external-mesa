#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_misc_copy_instance_ptrs_indirect_relocs[] = {
};
static const u_printf_info gfx125_misc_copy_instance_ptrs_indirect_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_misc_copy_instance_ptrs_indirect_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g89<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g54<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g89UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g99<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g24<1>D         g54<8,8,1>D     0x00000004UD    { align1 1H I@2 };
add(8)          g99.8<1>UW      g99<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g97<1>UD        g99<8,8,1>UW                    { align1 1H };
add.z.f0.0(16)  null<1>D        g97<8,8,1>D     g24<8,8,1>D     { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g56.1<2>D       g2.5<0,1,0>D                    { align1 1Q };
mov(8)          g58.1<2>D       g2.5<0,1,0>D                    { align1 2Q };
mov(8)          g56<2>D         g2.4<0,1,0>D                    { align1 1Q I@2 };
mov(8)          g58<2>D         g2.4<0,1,0>D                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g16UD           g56UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
shl(16)         g96<1>D         g16<8,8,1>D     0x00000006UD    { align1 1H $1.dst };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
add(16)         g25<1>D         g2<0,1,0>D      156D            { align1 1H compacted };
cmp.l.f0.0(16)  g27<1>UD        g25<1,1,0>UD    0x0000009cUD    { align1 1H I@1 compacted };
mov(8)          g31<2>UD        g25<4,4,1>UD                    { align1 1Q };
mov(8)          g33<2>UD        g26<4,4,1>UD                    { align1 2Q };
add(16)         g29<1>D         -g27<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g31.1<2>UD      g29<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g33.1<2>UD      g30<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g31UD           g16UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $2 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
shr(16)         g32<1>UD        g96<1,1,0>UD    0x00000008UD    { align1 1H I@3 compacted };
mov(16)         g108<1>UD       g54<8,8,1>UD                    { align1 1H };
and(16)         g34<1>UD        g96<8,8,1>UD    0xffffff00UD    { align1 1H $2.src };
add3(16)        g42<1>D         65534W          -g32<8,8,1>D    g54<1,1,1>D { align1 1H I@3 };
add(16)         g36<1>D         g96<1,1,0>D     -g34<1,1,0>D    { align1 1H I@2 compacted };
mov(16)         g44<1>D         -g42<8,8,1>D                    { align1 1H I@2 };
and(16)         g38<1>UD        g36<8,8,1>UD    0xffffffc0UD    { align1 1H I@2 };
shr(16)         g40<1>UD        g38<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g44<8,8,1>UD    g40<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL2              { align1 1H };
shl(16)         g45<1>D         -g42<8,8,1>D    0x00000006UD    { align1 1H };
add(16)         g47<1>D         g34<1,1,0>D     g45<1,1,0>D     { align1 1H I@1 compacted };
shr(16)         g49<1>UD        g47<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
add(16)         g81<1>D         g2<0,1,0>D      g47<1,1,0>D     { align1 1H compacted };
add(16)         g51<1>D         g18<1,1,0>D     g49<1,1,0>D     { align1 1H @2 $1.dst compacted };
mov(8)          g3<2>UD         g81<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g5<2>UD         g82<4,4,1>UD                    { align1 2Q I@3 };
cmp.l.f0.0(16)  g53<1>UD        g51<1,1,0>UD    g18<1,1,0>UD    { align1 1H I@3 compacted };
shl(16)         g55<1>D         g51<8,8,1>D     0x00000003UD    { align1 1H $1.src };
shr(16)         g59<1>UD        g51<1,1,0>UD    0x0000001dUD    { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shl(16)         g57<1>D         -g53<8,8,1>D    0x00000003UD    { align1 1H I@3 };
add(16)         g63<1>D         g2.2<0,1,0>D    g55<1,1,0>D     { align1 1H I@3 compacted };
or(16)          g61<1>UD        g57<1,1,0>UD    g59<1,1,0>UD    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g65<1>UD        g63<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g69<2>UD        g63<4,4,1>UD                    { align1 1Q };
mov(8)          g71<2>UD        g64<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g83<1>UD        g81<1,1,0>UD    g2<0,1,0>UD     { align1 1H compacted };
add3(16)        g67<1>D         g2.3<0,1,0>D    g61<8,8,1>D     -g65<1,1,1>D { align1 1H I@4 };
add(16)         g85<1>D         -g83<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@2 compacted };
mov(8)          g69.1<2>UD      g67<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g71.1<2>UD      g68<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g3.1<2>UD       g85<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g5.1<2>UD       g86<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g73UD           g69UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov(8)          g77<2>UD        g73<4,4,1>UD                    { align1 1Q $3.dst };
mov(8)          g79<2>UD        g74<4,4,1>UD                    { align1 2Q $3.dst };
mov(8)          g77.1<2>UD      g75<4,4,1>UD                    { align1 1Q @2 $3.dst };
mov(8)          g79.1<2>UD      g76<4,4,1>UD                    { align1 2Q @2 $3.dst };
mov(1)          g87<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g87<1>UD        g87<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g88<1>UD        g87<0,1,0>UD                    { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g88<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g90<2>D         g[a0 416]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g90.1<2>D       g[a0 420]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g57.1<2>D       g90.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g57<2>D         g90<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g74<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g86UD    g57UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
mov(1)          f0<1>UD         g74<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g88<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
mov(1)          g91<2>D         g[a0 96]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g91.1<2>D       g[a0 100]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g58.1<2>D       g91.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g58<2>D         g91<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g58UD           g86UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $1 };

LABEL2:
endif(16)       JIP:  LABEL3                                    { align1 1H };

LABEL3:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shr(16)         g92<1>UD        g34<1,1,0>UD    0x00000008UD    { align1 1H compacted };

LABEL5:
cmp.ge.f0.0(16) null<1>UD       g108<8,8,1>UD   g92<8,8,1>UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
shl(16)         g94<1>D         g108<8,8,1>D    0x00000008UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
shr(16)         g20<1>UD        g94<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
add(16)         g3<1>D          g2<0,1,0>D      g94<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g22<1>D         g18<1,1,0>D     g20<1,1,0>D     { align1 1H @2 $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g9<2>UD         g3<4,4,1>UD                     { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@3 };
mov(8)          g11<2>UD        g4<4,4,1>UD                     { align1 2Q };
cmp.l.f0.0(16)  g100<1>UD       g22<1,1,0>UD    g18<1,1,0>UD    { align1 1H I@3 compacted };
shl(16)         g102<1>D        g22<8,8,1>D     0x00000003UD    { align1 1H };
shr(16)         g106<1>UD       g22<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
shl(16)         g104<1>D        -g100<8,8,1>D   0x00000003UD    { align1 1H I@3 };
add(16)         g110<1>D        g2.2<0,1,0>D    g102<1,1,0>D    { align1 1H I@3 compacted };
or(16)          g14<1>UD        g104<1,1,0>UD   g106<1,1,0>UD   { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g112<1>UD       g110<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g116<2>UD       g110<4,4,1>UD                   { align1 1Q };
mov(8)          g118<2>UD       g111<4,4,1>UD                   { align1 2Q };
cmp.l.f0.0(16)  g5<1>UD         g3<1,1,0>UD     g2<0,1,0>UD     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add3(16)        g114<1>D        g2.3<0,1,0>D    g14<8,8,1>D     -g112<1,1,1>D { align1 1H I@4 };
add(16)         g7<1>D          -g5<1,1,0>D     g2.1<0,1,0>D    { align1 1H I@2 compacted };
mov(8)          g116.1<2>UD     g114<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g118.1<2>UD     g115<4,4,1>UD                   { align1 2Q I@3 };
mov(8)          g9.1<2>UD       g7<4,4,1>UD                     { align1 1Q I@3 };
mov(8)          g11.1<2>UD      g8<4,4,1>UD                     { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g120UD          g116UD          nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
mov(8)          g124<2>UD       g120<4,4,1>UD                   { align1 1Q $7.dst };
mov(8)          g126<2>UD       g121<4,4,1>UD                   { align1 2Q $7.dst };
mov(8)          g124.1<2>UD     g122<4,4,1>UD                   { align1 1Q @2 $7.dst };
mov(8)          g126.1<2>UD     g123<4,4,1>UD                   { align1 2Q @2 $7.dst };
mov(1)          g88<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g88<1>UD        g88<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g98<1>UD        g88<0,1,0>UD                    { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g98<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000e00UD    { align1 WE_all 1N A@1 };
mov(1)          g24<2>D         g[a0 384]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g24.1<2>D       g[a0 388]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g59.1<2>D       g24.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g59<2>D         g24<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g73<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g96UD    g59UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $8 };
mov(1)          f0<1>UD         g73<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g98<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
mov(1)          g25<2>D         g[a0 288]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g25.1<2>D       g[a0 292]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g60.1<2>D       g25.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g60<2>D         g25<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g60UD           g96UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g26<1>D         g94<1,1,0>D     64D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g28<1>UD        g26<1,1,0>UD    0x00000006UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(16)         g62<1>D         g2<0,1,0>D      g26<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g30<1>D         g18<1,1,0>D     g28<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g4<2>UD         g62<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g6<2>UD         g63<4,4,1>UD                    { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
shl(16)         g36<1>D         g30<8,8,1>D     0x00000003UD    { align1 1H I@3 };
shr(16)         g40<1>UD        g30<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
add(16)         g44<1>D         g2.2<0,1,0>D    g36<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(8)          g50<2>UD        g44<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $11.src };
mov(8)          g52<2>UD        g45<4,4,1>UD                    { align1 2Q I@2 };
cmp.l.f0.0(16)  g34<1>UD        g30<1,1,0>UD    g18<1,1,0>UD    { align1 1H $12.src compacted };
cmp.l.f0.0(16)  g46<1>UD        g44<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g64<1>UD        g62<1,1,0>UD    g2<0,1,0>UD     { align1 1H compacted };
shl(16)         g38<1>D         -g34<8,8,1>D    0x00000003UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g66<1>D         -g64<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@2 compacted };
or(16)          g42<1>UD        g38<1,1,0>UD    g40<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g4.1<2>UD       g66<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g6.1<2>UD       g67<4,4,1>UD                    { align1 2Q I@3 };
add3(16)        g48<1>D         g2.3<0,1,0>D    g42<8,8,1>D     -g46<1,1,1>D { align1 1H I@3 };
mov(8)          g50.1<2>UD      g48<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g52.1<2>UD      g49<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g54UD           g50UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g58<2>UD        g54<4,4,1>UD                    { align1 1Q $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $10.src };
mov(8)          g60<2>UD        g55<4,4,1>UD                    { align1 2Q $13.dst };
mov(8)          g58.1<2>UD      g56<4,4,1>UD                    { align1 1Q @2 $13.dst };
mov(8)          g60.1<2>UD      g57<4,4,1>UD                    { align1 2Q @2 $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
shl(1)          a0<1>UD         g98<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g68<2>D         g[a0 320]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g68.1<2>D       g[a0 324]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g8.1<2>D        g68.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g8<2>D          g68<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g72<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N $3.src compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g67UD    g8UD            nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $14 };
mov(1)          f0<1>UD         g72<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g98<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
mov(1)          g69<2>D         g[a0 128]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g69.1<2>D       g[a0 132]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g61.1<2>D       g69.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g61<2>D         g69<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g61UD           g67UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g70<1>D         g94<1,1,0>D     128D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g72<1>UD        g70<1,1,0>UD    0x00000006UD    { align1 1H compacted };
add(16)         g14<1>D         g2<0,1,0>D      g70<1,1,0>D     { align1 1H compacted };
add(16)         g74<1>D         g18<1,1,0>D     g72<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g5<2>UD         g14<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $14.src };
mov(8)          g7<2>UD         g15<4,4,1>UD                    { align1 2Q I@3 };
shl(16)         g78<1>D         g74<8,8,1>D     0x00000003UD    { align1 1H I@3 };
shr(16)         g82<1>UD        g74<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g86<1>D         g2.2<0,1,0>D    g78<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g20<2>UD        g86<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g22<2>UD        g87<4,4,1>UD                    { align1 2Q I@2 };
cmp.l.f0.0(16)  g76<1>UD        g74<1,1,0>UD    g18<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g88<1>UD        g86<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g110<1>UD       g14<1,1,0>UD    g2<0,1,0>UD     { align1 1H compacted };
shl(16)         g80<1>D         -g76<8,8,1>D    0x00000003UD    { align1 1H I@3 };
add(16)         g112<1>D        -g110<1,1,0>D   g2.1<0,1,0>D    { align1 1H I@2 compacted };
or(16)          g84<1>UD        g80<1,1,0>UD    g82<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g5.1<2>UD       g112<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g7.1<2>UD       g113<4,4,1>UD                   { align1 2Q I@3 };
add3(16)        g90<1>D         g2.3<0,1,0>D    g84<8,8,1>D     -g88<1,1,1>D { align1 1H I@3 };
mov(8)          g20.1<2>UD      g90<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g22.1<2>UD      g91<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g100UD          g20UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mov(8)          g104<2>UD       g100<4,4,1>UD                   { align1 1Q $5.dst };
mov(8)          g106<2>UD       g101<4,4,1>UD                   { align1 2Q $5.dst };
mov(8)          g104.1<2>UD     g102<4,4,1>UD                   { align1 1Q @2 $5.dst };
mov(8)          g106.1<2>UD     g103<4,4,1>UD                   { align1 2Q @2 $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shl(1)          a0<1>UD         g98<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000c00UD    { align1 WE_all 1N A@1 };
mov(1)          g114<2>D        g[a0 256]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g114.1<2>D      g[a0 260]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g9.1<2>D        g114.1<0,1,0>D                  { align1 WE_all 1Q I@1 };
mov(8)          g9<2>D          g114<0,1,0>D                    { align1 WE_all 1Q I@1 };
mov(1)          g65<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g113UD   g9UD            nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $15 };
mov(1)          f0<1>UD         g65<0,1,0>UD                    { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shl(1)          a0<1>UD         g98<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
mov(1)          g115<2>D        g[a0 160]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g115.1<2>D      g[a0 164]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g62.1<2>D       g115.1<0,1,0>D                  { align1 WE_all 1Q I@2 };
mov(8)          g62<2>D         g115<0,1,0>D                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g62UD           g113UD          0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g116<1>D        g94<1,1,0>D     192D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g118<1>UD       g116<1,1,0>UD   0x00000006UD    { align1 1H $7.src compacted };
add(16)         g46<1>D         g2<0,1,0>D      g116<1,1,0>D    { align1 1H compacted };
add(16)         g120<1>D        g18<1,1,0>D     g118<1,1,0>D    { align1 1H I@2 compacted };
mov(8)          g6<2>UD         g46<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $15.src };
mov(8)          g8<2>UD         g47<4,4,1>UD                    { align1 2Q I@3 };
shl(16)         g124<1>D        g120<8,8,1>D    0x00000003UD    { align1 1H I@3 };
shr(16)         g3<1>UD         g120<1,1,0>UD   0x0000001dUD    { align1 1H compacted };
add(16)         g24<1>D         g2.2<0,1,0>D    g124<1,1,0>D    { align1 1H I@2 compacted };
mov(8)          g34<2>UD        g24<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g36<2>UD        g25<4,4,1>UD                    { align1 2Q I@2 };
cmp.l.f0.0(16)  g122<1>UD       g120<1,1,0>UD   g18<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  g26<1>UD        g24<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g48<1>UD        g46<1,1,0>UD    g2<0,1,0>UD     { align1 1H compacted };
shl(16)         g126<1>D        -g122<8,8,1>D   0x00000003UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g50<1>D         -g48<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
or(16)          g96<1>UD        g126<1,1,0>UD   g3<1,1,0>UD     { align1 1H I@2 compacted };
mov(8)          g6.1<2>UD       g50<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g8.1<2>UD       g51<4,4,1>UD                    { align1 2Q I@3 };
add3(16)        g28<1>D         g2.3<0,1,0>D    g96<8,8,1>D     -g26<1,1,1>D { align1 1H I@3 };
mov(8)          g34.1<2>UD      g28<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g36.1<2>UD      g29<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g38UD           g34UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $12 };
mov(8)          g42<2>UD        g38<4,4,1>UD                    { align1 1Q $12.dst };
mov(8)          g44<2>UD        g39<4,4,1>UD                    { align1 2Q $12.dst };
mov(8)          g42.1<2>UD      g40<4,4,1>UD                    { align1 1Q @2 $12.dst };
mov(8)          g44.1<2>UD      g41<4,4,1>UD                    { align1 2Q @2 $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
shl(1)          a0<1>UD         g98<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000400UD    { align1 WE_all 1N A@1 };
mov(1)          g52<2>D         g[a0 320]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g52.1<2>D       g[a0 324]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g10.1<2>D       g52.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g10<2>D         g52<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g64<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g51UD    g10UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $4 };
mov(1)          f0<1>UD         g64<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g98<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
mov(1)          g53<2>D         g[a0 192]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g53.1<2>D       g[a0 196]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g63.1<2>D       g53.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g63<2>D         g53<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g63UD           g51UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $11 };
add3(16)        g108<1>D        0x0003UW        g32<8,8,1>D     g108<1,1,1>D { align1 1H };

LABEL4:
while(16)       JIP:  LABEL5                                    { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_instance_ptrs_indirect_code[] = {
    0x80000065, 0x59058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x36050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00590c, 0x00340000,
    0x80030061, 0x63054410, 0x00000000, 0x76543210,
    0x00041a69, 0x18058660, 0x02463605, 0x00000004,
    0x64631a40, 0x00806395, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x61050120,
    0x00466305, 0x00000000, 0x00041940, 0x00010660,
    0x16466105, 0x00461805, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x38260660,
    0x000002a4, 0x00000000, 0x00130061, 0x3a260660,
    0x000002a4, 0x00000000, 0x00031a61, 0x38060660,
    0x00000284, 0x00000000, 0x00131a61, 0x3a060660,
    0x00000284, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x10240000,
    0xfb003824, 0x00040000, 0x00042169, 0x60058660,
    0x02461005, 0x00000006, 0x01040022, 0x0001c060,
    0x00000088, 0x00000088, 0xa0190040, 0x09c10203,
    0xe71b1970, 0x09c01903, 0x00030061, 0x1f060220,
    0x00341905, 0x00000000, 0x00130061, 0x21060220,
    0x00341a05, 0x00000000, 0xa01d1b40, 0x02121b12,
    0x00031961, 0x1f260220, 0x00341d05, 0x00000000,
    0x00131a61, 0x21260220, 0x00341e05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x00000000, 0xfb081f24, 0x00001014,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xe0201b68, 0x00806003, 0x00040061, 0x6c050220,
    0x00463605, 0x00000000, 0x00043265, 0x22058220,
    0x02466005, 0xffffff00, 0x00041b52, 0x2a044560,
    0x0e8efffe, 0x36052005, 0xa0241a40, 0x22206002,
    0x00041a61, 0x2c052660, 0x00462a05, 0x00000000,
    0x00041a65, 0x26058220, 0x02462405, 0xffffffc0,
    0xe0281968, 0x00602603, 0x00041970, 0x00010220,
    0x52462c05, 0x00462805, 0x01040022, 0x0001c060,
    0x000002e8, 0x000002e8, 0x00040069, 0x2d05a660,
    0x02462a05, 0x00000006, 0xa02f1940, 0x2d002202,
    0xe0311968, 0x00602f03, 0xa0510040, 0x2f010202,
    0xa033a140, 0x31001202, 0x00031a61, 0x03060220,
    0x00345105, 0x00000000, 0x00131b61, 0x05060220,
    0x00345205, 0x00000000, 0x27351b70, 0x12003303,
    0x00043169, 0x37058660, 0x02463305, 0x00000003,
    0xe03b3168, 0x01d03303, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00041b69, 0x3905a660,
    0x02463505, 0x00000003, 0xa03f1b40, 0x37010242,
    0x203d1a66, 0x3b003903, 0x27411a70, 0x02103f2b,
    0x00030061, 0x45060220, 0x00343f05, 0x00000000,
    0x00130061, 0x47060220, 0x00344005, 0x00000000,
    0x27530070, 0x02105103, 0x00041c52, 0x43040660,
    0x0e2e0264, 0x41053d05, 0xa0551a40, 0x02125312,
    0x00031a61, 0x45260220, 0x00344305, 0x00000000,
    0x00131b61, 0x47260220, 0x00344405, 0x00000000,
    0x00031b61, 0x03260220, 0x00345505, 0x00000000,
    0x00131c61, 0x05260220, 0x00345605, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x49240000, 0xfb004524, 0x00040000,
    0x00032361, 0x4d060220, 0x00344905, 0x00000000,
    0x00132361, 0x4f060220, 0x00344a05, 0x00000000,
    0x0003a361, 0x4d260220, 0x00344b05, 0x00000000,
    0x0013a361, 0x4f260220, 0x00344c05, 0x00000000,
    0xe2570961, 0x00114004, 0x80000965, 0x57058220,
    0x02005704, 0xffffffff, 0x8000194c, 0x58050220,
    0x00005704, 0x00000000, 0x80001969, 0x10018220,
    0x02005804, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000800, 0x80000961, 0x5a060660,
    0x00010680, 0x00000000, 0x80000061, 0x5a260660,
    0x00010690, 0x00000000, 0x80031961, 0x39260660,
    0x00005a24, 0x00000000, 0x80031961, 0x39060660,
    0x00005a04, 0x00000000, 0xe24a0061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004131, 0x56140000, 0xfb00390c, 0x00340000,
    0x80001a61, 0x30010220, 0x00004a04, 0x00000000,
    0x80001e69, 0x10018220, 0x02005804, 0x00000003,
    0x80000961, 0x5b060660, 0x00010180, 0x00000000,
    0x80000061, 0x5b260660, 0x00010190, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80031a61, 0x3a260660, 0x00005b24, 0x00000000,
    0x80031961, 0x3a060660, 0x00005b04, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004131, 0x00000000, 0xfb083a0c, 0x00345614,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0xe05c0068, 0x00802203, 0x00041970, 0x00010220,
    0x42466c05, 0x00465c05, 0x01040028, 0x0001c660,
    0x00000db0, 0x00000db0, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x5e058660,
    0x02466c05, 0x00000008, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xe0141968, 0x00605e03,
    0xa0030040, 0x5e010202, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa016a140, 0x14001202,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00031a61, 0x09060220, 0x00340305, 0x00000000,
    0x80101b01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x0b060220, 0x00340405, 0x00000000,
    0x27641b70, 0x12001603, 0x00040069, 0x66058660,
    0x02461605, 0x00000003, 0xe06a0068, 0x01d01603,
    0x00041b69, 0x6805a660, 0x02466405, 0x00000003,
    0xa06e1b40, 0x66010242, 0x200e1a66, 0x6a006803,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x27701a70, 0x02106e2b, 0x00030061, 0x74060220,
    0x00346e05, 0x00000000, 0x00130061, 0x76060220,
    0x00346f05, 0x00000000, 0x27050070, 0x02100303,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041c52, 0x72040660, 0x0e2e0264, 0x70050e05,
    0xa0071a40, 0x02120512, 0x00031a61, 0x74260220,
    0x00347205, 0x00000000, 0x00131b61, 0x76260220,
    0x00347305, 0x00000000, 0x00031b61, 0x09260220,
    0x00340705, 0x00000000, 0x00131c61, 0x0b260220,
    0x00340805, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x78240000,
    0xfb007424, 0x00040000, 0x00032761, 0x7c060220,
    0x00347805, 0x00000000, 0x00132761, 0x7e060220,
    0x00347905, 0x00000000, 0x0003a761, 0x7c260220,
    0x00347a05, 0x00000000, 0x0013a761, 0x7e260220,
    0x00347b05, 0x00000000, 0xe2580961, 0x00114004,
    0x80000965, 0x58058220, 0x02005804, 0xffffffff,
    0x8000194c, 0x62050220, 0x00005804, 0x00000000,
    0x80001969, 0x10018220, 0x02006204, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000e00,
    0x80000961, 0x18060660, 0x00010600, 0x00000000,
    0x80000061, 0x18260660, 0x00010610, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x3b260660, 0x00001824, 0x00000000,
    0x80031961, 0x3b060660, 0x00001804, 0x00000000,
    0xe2490061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004831, 0x60140000,
    0xfb003b0c, 0x00340000, 0x80001a61, 0x30010220,
    0x00004904, 0x00000000, 0x80001e69, 0x10018220,
    0x02006204, 0x00000003, 0x80000961, 0x19060660,
    0x00010480, 0x00000000, 0x80000061, 0x19260660,
    0x00010490, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x3c260660,
    0x00001924, 0x00000000, 0x80031961, 0x3c060660,
    0x00001904, 0x00000000, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004a31, 0x00000000,
    0xfb083c0c, 0x00346014, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa01a0040, 0x04005e03,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe01c0068, 0x00601a03, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0xa03e0040, 0x1a010202,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa01e1a40, 0x1c001202, 0x00031a61, 0x04060220,
    0x00343e05, 0x00000000, 0x00131b61, 0x06060220,
    0x00343f05, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x00041b69, 0x24058660,
    0x02461e05, 0x00000003, 0xe0280068, 0x01d01e03,
    0xa02c1a40, 0x24010242, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x32060220,
    0x00342c05, 0x00000000, 0x80103b01, 0x00000000,
    0x00000000, 0x00000000, 0x00131a61, 0x34060220,
    0x00342d05, 0x00000000, 0x27223c70, 0x12001e03,
    0x272e0070, 0x02102c2b, 0x27400070, 0x02103e03,
    0x00041b69, 0x2605a660, 0x02462205, 0x00000003,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xa0421a40, 0x02124012, 0x202a1a66, 0x28002603,
    0x00031a61, 0x04260220, 0x00344205, 0x00000000,
    0x00131b61, 0x06260220, 0x00344305, 0x00000000,
    0x00041b52, 0x30040660, 0x0e2e0264, 0x2e052a05,
    0x00031961, 0x32260220, 0x00343005, 0x00000000,
    0x00131a61, 0x34260220, 0x00343105, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044d31, 0x36240000, 0xfb003224, 0x00040000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00032d61, 0x3a060220, 0x00343605, 0x00000000,
    0x80103a01, 0x00000000, 0x00000000, 0x00000000,
    0x00132d61, 0x3c060220, 0x00343705, 0x00000000,
    0x0003ad61, 0x3a260220, 0x00343805, 0x00000000,
    0x0013ad61, 0x3c260220, 0x00343905, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02006204, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000600,
    0x80000961, 0x44060660, 0x00010500, 0x00000000,
    0x80000061, 0x44260660, 0x00010510, 0x00000000,
    0x80031961, 0x08260660, 0x00004424, 0x00000000,
    0x80031961, 0x08060660, 0x00004404, 0x00000000,
    0xe2483361, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004e31, 0x43140000,
    0xfb00080c, 0x00340000, 0x80001a61, 0x30010220,
    0x00004804, 0x00000000, 0x80001e69, 0x10018220,
    0x02006204, 0x00000003, 0x80000961, 0x45060660,
    0x00010200, 0x00000000, 0x80000061, 0x45260660,
    0x00010210, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x3d260660,
    0x00004524, 0x00000000, 0x80031961, 0x3d060660,
    0x00004504, 0x00000000, 0x80002e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004931, 0x00000000,
    0xfb083d0c, 0x00344314, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0460040, 0x08005e03,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe0480068, 0x00604603, 0xa00e0040, 0x46010202,
    0xa04a1a40, 0x48001202, 0x00031a61, 0x05060220,
    0x00340e05, 0x00000000, 0x80103e01, 0x00000000,
    0x00000000, 0x00000000, 0x00131b61, 0x07060220,
    0x00340f05, 0x00000000, 0x00041b69, 0x4e058660,
    0x02464a05, 0x00000003, 0xe0520068, 0x01d04a03,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa0561a40, 0x4e010242, 0x00031961, 0x14060220,
    0x00345605, 0x00000000, 0x00131a61, 0x16060220,
    0x00345705, 0x00000000, 0x274c0070, 0x12004a03,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x27580070, 0x0210562b, 0x276e0070, 0x02100e03,
    0x00041b69, 0x5005a660, 0x02464c05, 0x00000003,
    0xa0701a40, 0x02126e12, 0x20541a66, 0x52005003,
    0x00031a61, 0x05260220, 0x00347005, 0x00000000,
    0x00131b61, 0x07260220, 0x00347105, 0x00000000,
    0x00041b52, 0x5a040660, 0x0e2e0264, 0x58055405,
    0x00031961, 0x14260220, 0x00345a05, 0x00000000,
    0x00131a61, 0x16260220, 0x00345b05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x64240000, 0xfb001424, 0x00040000,
    0x00032561, 0x68060220, 0x00346405, 0x00000000,
    0x00132561, 0x6a060220, 0x00346505, 0x00000000,
    0x0003a561, 0x68260220, 0x00346605, 0x00000000,
    0x0013a561, 0x6a260220, 0x00346705, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02006204, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000c00,
    0x80000961, 0x72060660, 0x00010400, 0x00000000,
    0x80000061, 0x72260660, 0x00010410, 0x00000000,
    0x80031961, 0x09260660, 0x00007224, 0x00000000,
    0x80031961, 0x09060660, 0x00007204, 0x00000000,
    0xe2410061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004f31, 0x71140000,
    0xfb00090c, 0x00340000, 0x80001a61, 0x30010220,
    0x00004104, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80001e69, 0x10018220,
    0x02006204, 0x00000003, 0x80000961, 0x73060660,
    0x00010280, 0x00000000, 0x80000061, 0x73260660,
    0x00010290, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x3e260660,
    0x00007324, 0x00000000, 0x80031961, 0x3e060660,
    0x00007304, 0x00000000, 0x80002f01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004631, 0x00000000,
    0xfb083e0c, 0x00347114, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0740040, 0x0c005e03,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe0763768, 0x00607403, 0xa02e0040, 0x74010202,
    0xa0781a40, 0x76001202, 0x00031a61, 0x06060220,
    0x00342e05, 0x00000000, 0x80103f01, 0x00000000,
    0x00000000, 0x00000000, 0x00131b61, 0x08060220,
    0x00342f05, 0x00000000, 0x00041b69, 0x7c058660,
    0x02467805, 0x00000003, 0xe0030068, 0x01d07803,
    0xa0181a40, 0x7c010242, 0x00031961, 0x22060220,
    0x00341805, 0x00000000, 0x00131a61, 0x24060220,
    0x00341905, 0x00000000, 0x277a0070, 0x12007803,
    0x271a0070, 0x0210182b, 0x27300070, 0x02102e03,
    0x00041b69, 0x7e05a660, 0x02467a05, 0x00000003,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0xa0321a40, 0x02123012, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x20601a66, 0x03007e03,
    0x00031a61, 0x06260220, 0x00343205, 0x00000000,
    0x00131b61, 0x08260220, 0x00343305, 0x00000000,
    0x00041b52, 0x1c040660, 0x0e2e0264, 0x1a056005,
    0x00031961, 0x22260220, 0x00341c05, 0x00000000,
    0x00131a61, 0x24260220, 0x00341d05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x26240000, 0xfb002224, 0x00040000,
    0x00032c61, 0x2a060220, 0x00342605, 0x00000000,
    0x00132c61, 0x2c060220, 0x00342705, 0x00000000,
    0x0003ac61, 0x2a260220, 0x00342805, 0x00000000,
    0x0013ac61, 0x2c260220, 0x00342905, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02006204, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000400,
    0x80000961, 0x34060660, 0x00010500, 0x00000000,
    0x80000061, 0x34260660, 0x00010510, 0x00000000,
    0x80031961, 0x0a260660, 0x00003424, 0x00000000,
    0x80031961, 0x0a060660, 0x00003404, 0x00000000,
    0xe2400061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004431, 0x33140000,
    0xfb000a0c, 0x00340000, 0x80001a61, 0x30010220,
    0x00004004, 0x00000000, 0x80001e69, 0x10018220,
    0x02006204, 0x00000003, 0x80000961, 0x35060660,
    0x00010300, 0x00000000, 0x80000061, 0x35260660,
    0x00010310, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x3f260660,
    0x00003524, 0x00000000, 0x80031961, 0x3f060660,
    0x00003504, 0x00000000, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004b31, 0x00000000,
    0xfb083f0c, 0x00343314, 0x00040052, 0x6c044160,
    0x0e0e0003, 0x6c052005, 0x00040027, 0x00014060,
    0x00000000, 0xfffff240, 0x80030061, 0x7e050220,
    0x00460005, 0x00000000, 0x80040931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_misc_copy_instance_ptrs_indirect = {
   .prog_data = {
      .base.nr_params = 14,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 4928,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_misc_copy_instance_ptrs_indirect_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_misc_copy_instance_ptrs_indirect_printfs,
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
const char *gfx125_misc_copy_instance_ptrs_indirect_sha1 = "8d7b9747044e9aef175825607251b760672ad6cc";

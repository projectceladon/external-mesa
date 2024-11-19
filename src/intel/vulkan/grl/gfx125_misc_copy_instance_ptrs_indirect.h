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

and(1)          g8<1>UD         g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g30<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g8UD            nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g42<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g50<1>D         g30<8,8,1>D     0x00000004UD    { align1 1H I@2 };
add(8)          g42.8<1>UW      g42<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g48<1>D         g42<8,8,1>UW                    { align1 1H };
add.z.f0.0(16)  null<1>D        g48<8,8,1>D     g50<8,8,1>D     { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g32.1<2>D       g2.5<0,1,0>D                    { align1 1Q };
mov(8)          g34.1<2>D       g2.5<0,1,0>D                    { align1 2Q };
mov(8)          g32<2>D         g2.4<0,1,0>D                    { align1 1Q I@2 };
mov(8)          g34<2>D         g2.4<0,1,0>D                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g62UD           g32UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
shl(16)         g47<1>D         g62<8,8,1>D     0x00000006UD    { align1 1H $1.dst };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
add(16)         g51<1>D         g2<0,1,0>D      156D            { align1 1H compacted };
cmp.l.f0.0(16)  g53<1>UD        g51<1,1,0>UD    0x0000009cUD    { align1 1H I@1 compacted };
mov(8)          g33<2>UD        g51<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g35<2>UD        g52<4,4,1>UD                    { align1 2Q $1.src };
add(16)         g55<1>D         -g53<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g33.1<2>UD      g55<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g35.1<2>UD      g56<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g33UD           g62UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
shr(16)         g56<1>UD        g47<1,1,0>UD    0x00000008UD    { align1 1H I@3 compacted };
mov(16)         g120<1>UD       g30<8,8,1>UD                    { align1 1H };
and(16)         g58<1>UD        g47<8,8,1>UD    0xffffff00UD    { align1 1H };
add3(16)        g66<1>D         65534W          -g56<8,8,1>D    g30<1,1,1>D { align1 1H I@3 };
add(16)         g60<1>D         g47<1,1,0>D     -g58<1,1,0>D    { align1 1H I@2 compacted };
mov(16)         g68<1>D         -g66<8,8,1>D                    { align1 1H I@2 };
and(16)         g3<1>UD         g60<8,8,1>UD    0xffffffc0UD    { align1 1H I@2 };
shr(16)         g5<1>UD         g3<1,1,0>UD     0x00000006UD    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g68<8,8,1>UD    g5<8,8,1>UD     { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL2              { align1 1H };
shl(16)         g69<1>D         -g66<8,8,1>D    0x00000006UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g71<1>D         g58<1,1,0>D     g69<1,1,0>D     { align1 1H I@1 compacted };
shr(16)         g73<1>UD        g71<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
add(16)         g100<1>D        g2<0,1,0>D      g71<1,1,0>D     { align1 1H compacted };
add(16)         g75<1>D         g64<1,1,0>D     g73<1,1,0>D     { align1 1H @2 $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g7<2>UD         g100<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g9<2>UD         g101<4,4,1>UD                   { align1 2Q I@3 };
cmp.l.f0.0(16)  g77<1>UD        g75<1,1,0>UD    g64<1,1,0>UD    { align1 1H I@3 compacted };
shl(16)         g79<1>D         g75<8,8,1>D     0x00000003UD    { align1 1H };
shr(16)         g83<1>UD        g75<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
shl(16)         g81<1>D         -g77<8,8,1>D    0x00000003UD    { align1 1H I@3 };
add(16)         g87<1>D         g2.2<0,1,0>D    g79<1,1,0>D     { align1 1H I@3 compacted };
or(16)          g85<1>UD        g81<1,1,0>UD    g83<1,1,0>UD    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g12<1>UD        g87<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g25<2>UD        g87<4,4,1>UD                    { align1 1Q };
mov(8)          g27<2>UD        g88<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g102<1>UD       g100<1,1,0>UD   g2<0,1,0>UD     { align1 1H compacted };
add3(16)        g91<1>D         g2.3<0,1,0>D    g85<8,8,1>D     -g12<1,1,1>D { align1 1H I@4 };
add(16)         g104<1>D        -g102<1,1,0>D   g2.1<0,1,0>D    { align1 1H I@2 compacted };
mov(8)          g25.1<2>UD      g91<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g27.1<2>UD      g92<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g7.1<2>UD       g104<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g9.1<2>UD       g105<4,4,1>UD                   { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g92UD           g25UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mov(8)          g96<2>UD        g92<4,4,1>UD                    { align1 1Q $2.dst };
mov(8)          g98<2>UD        g93<4,4,1>UD                    { align1 2Q $2.dst };
mov(8)          g96.1<2>UD      g94<4,4,1>UD                    { align1 1Q @2 $2.dst };
mov(8)          g98.1<2>UD      g95<4,4,1>UD                    { align1 2Q @2 $2.dst };
mov(1)          g113<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g113<1>UD       g113<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g106<1>UD       g113<0,1,0>UD                   { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g106<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000c00UD    { align1 WE_all 1N A@1 };
mov(1)          g108<2>D        g[a0]<0,1,0>D                   { align1 WE_all 1N A@1 };
mov(1)          g108.1<2>D      g[a0 4]<0,1,0>D                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g34.1<2>D       g108.1<0,1,0>D                  { align1 WE_all 1Q I@1 };
mov(8)          g34<2>D         g108<0,1,0>D                    { align1 WE_all 1Q I@1 };
mov(1)          g112<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g39UD    g34UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
mov(1)          f0<1>UD         g112<0,1,0>UD                   { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g106<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
mov(1)          g109<2>D        g[a0 224]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g109.1<2>D      g[a0 228]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g35.1<2>D       g109.1<0,1,0>D                  { align1 WE_all 1Q I@2 };
mov(8)          g35<2>D         g109<0,1,0>D                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g35UD           g39UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $1 };

LABEL2:
endif(16)       JIP:  LABEL3                                    { align1 1H };

LABEL3:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shr(16)         g110<1>UD       g58<1,1,0>UD    0x00000008UD    { align1 1H compacted };

LABEL5:
cmp.ge.f0.0(16) null<1>UD       g120<8,8,1>UD   g110<8,8,1>UD   { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
shl(16)         g112<1>D        g120<8,8,1>D    0x00000008UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shr(16)         g114<1>UD       g112<1,1,0>UD   0x00000006UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g34<1>D         g2<0,1,0>D      g112<1,1,0>D    { align1 1H compacted };
add(16)         g116<1>D        g64<1,1,0>D     g114<1,1,0>D    { align1 1H @2 $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g8<2>UD         g34<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g10<2>UD        g35<4,4,1>UD                    { align1 2Q I@3 };
cmp.l.f0.0(16)  g118<1>UD       g116<1,1,0>UD   g64<1,1,0>UD    { align1 1H I@3 compacted };
shl(16)         g45<1>D         g116<8,8,1>D    0x00000003UD    { align1 1H };
shr(16)         g124<1>UD       g116<1,1,0>UD   0x0000001dUD    { align1 1H compacted };
shl(16)         g122<1>D        -g118<8,8,1>D   0x00000003UD    { align1 1H I@3 };
add(16)         g14<1>D         g2.2<0,1,0>D    g45<1,1,0>D     { align1 1H I@3 compacted };
or(16)          g126<1>UD       g122<1,1,0>UD   g124<1,1,0>UD   { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g16<1>UD        g14<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g26<2>UD        g14<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $2.src };
mov(8)          g28<2>UD        g15<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g36<1>UD        g34<1,1,0>UD    g2<0,1,0>UD     { align1 1H compacted };
add3(16)        g18<1>D         g2.3<0,1,0>D    g126<8,8,1>D    -g16<1,1,1>D { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g38<1>D         -g36<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@2 compacted };
mov(8)          g26.1<2>UD      g18<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g28.1<2>UD      g19<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g8.1<2>UD       g38<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g10.1<2>UD      g39<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g19UD           g26UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov(8)          g30<2>UD        g19<4,4,1>UD                    { align1 1Q $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g32<2>UD        g20<4,4,1>UD                    { align1 2Q $3.dst };
mov(8)          g30.1<2>UD      g21<4,4,1>UD                    { align1 1Q @2 $3.dst };
mov(8)          g32.1<2>UD      g22<4,4,1>UD                    { align1 2Q @2 $3.dst };
mov(1)          g7<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g7<1>UD         g7<0,1,0>UD     0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g89<1>UD        g7<0,1,0>UD                     { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
shl(1)          a0<1>UD         g89<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g39<2>D         g[a0 448]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g39.1<2>D       g[a0 452]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g47.1<2>D       g39.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g47<2>D         g39<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g108<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g52UD    g47UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $5 };
mov(1)          f0<1>UD         g108<0,1,0>UD                   { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g89<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
mov(1)          g40<2>D         g[a0 256]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g40.1<2>D       g[a0 260]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g48.1<2>D       g40.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g48<2>D         g40<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g48UD           g52UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g41<1>D         g112<1,1,0>D    64D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g43<1>UD        g41<1,1,0>UD    0x00000006UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g68<1>D         g2<0,1,0>D      g41<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g47<1>D         g64<1,1,0>D     g43<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g18<2>UD        g68<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g20<2>UD        g69<4,4,1>UD                    { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shl(16)         g51<1>D         g47<8,8,1>D     0x00000003UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
shr(16)         g58<1>UD        g47<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g3<1>D          g2.2<0,1,0>D    g51<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g27<2>UD        g3<4,4,1>UD                     { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $3.src };
mov(8)          g29<2>UD        g4<4,4,1>UD                     { align1 2Q I@2 };
cmp.l.f0.0(16)  g49<1>UD        g47<1,1,0>UD    g64<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  g5<1>UD         g3<1,1,0>UD     g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g70<1>UD        g68<1,1,0>UD    g2<0,1,0>UD     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shl(16)         g53<1>D         -g49<8,8,1>D    0x00000003UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g72<1>D         -g70<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@2 compacted };
or(16)          g60<1>UD        g53<1,1,0>UD    g58<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g18.1<2>UD      g72<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g20.1<2>UD      g73<4,4,1>UD                    { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add3(16)        g66<1>D         g2.3<0,1,0>D    g60<8,8,1>D     -g5<1,1,1>D { align1 1H I@3 };
mov(8)          g27.1<2>UD      g66<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g29.1<2>UD      g67<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g67UD           g27UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
mov(8)          g14<2>UD        g67<4,4,1>UD                    { align1 1Q $10.dst };
mov(8)          g16<2>UD        g68<4,4,1>UD                    { align1 2Q $10.dst };
mov(8)          g14.1<2>UD      g69<4,4,1>UD                    { align1 1Q @2 $10.dst };
mov(8)          g16.1<2>UD      g70<4,4,1>UD                    { align1 2Q @2 $10.dst };
shl(1)          a0<1>UD         g89<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g73<2>D         g[a0 448]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g73.1<2>D       g[a0 452]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g31.1<2>D       g73.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g31<2>D         g73<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g107<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g3UD     g31UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $11 };
mov(1)          f0<1>UD         g107<0,1,0>UD                   { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g89<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g74<2>D         g[a0 64]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g74.1<2>D       g[a0 68]<0,1,0>D                { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g58.1<2>D       g74.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g58<2>D         g74<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g58UD           g3UD            0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g75<1>D         g112<1,1,0>D    128D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g77<1>UD        g75<1,1,0>UD    0x00000006UD    { align1 1H compacted };
add(16)         g97<1>D         g2<0,1,0>D      g75<1,1,0>D     { align1 1H compacted };
add(16)         g79<1>D         g64<1,1,0>D     g77<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g23<2>UD        g97<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $3.src };
mov(8)          g25<2>UD        g98<4,4,1>UD                    { align1 2Q I@3 };
shl(16)         g83<1>D         g79<8,8,1>D     0x00000003UD    { align1 1H I@3 };
shr(16)         g87<1>UD        g79<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
add(16)         g91<1>D         g2.2<0,1,0>D    g83<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(8)          g32<2>UD        g91<4,4,1>UD                    { align1 1Q };
mov(8)          g34<2>UD        g92<4,4,1>UD                    { align1 2Q I@2 };
cmp.l.f0.0(16)  g81<1>UD        g79<1,1,0>UD    g64<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  g93<1>UD        g91<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g99<1>UD        g97<1,1,0>UD    g2<0,1,0>UD     { align1 1H compacted };
shl(16)         g85<1>D         -g81<8,8,1>D    0x00000003UD    { align1 1H I@3 };
add(16)         g101<1>D        -g99<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@2 compacted };
or(16)          g12<1>UD        g85<1,1,0>UD    g87<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g23.1<2>UD      g101<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g25.1<2>UD      g102<4,4,1>UD                   { align1 2Q I@3 };
add3(16)        g95<1>D         g2.3<0,1,0>D    g12<8,8,1>D     -g93<1,1,1>D { align1 1H I@3 };
mov(8)          g32.1<2>UD      g95<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g34.1<2>UD      g96<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g96UD           g32UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(8)          g19<2>UD        g96<4,4,1>UD                    { align1 1Q $1.dst };
mov(8)          g21<2>UD        g97<4,4,1>UD                    { align1 2Q $1.dst };
mov(8)          g19.1<2>UD      g98<4,4,1>UD                    { align1 1Q @2 $1.dst };
mov(8)          g21.1<2>UD      g99<4,4,1>UD                    { align1 2Q @2 $1.dst };
shl(1)          a0<1>UD         g89<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g102<2>D        g[a0 96]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g102.1<2>D      g[a0 100]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g36.1<2>D       g102.1<0,1,0>D                  { align1 WE_all 1Q I@1 };
mov(8)          g36<2>D         g102<0,1,0>D                    { align1 WE_all 1Q I@1 };
mov(1)          g106<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g67UD    g36UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
mov(1)          f0<1>UD         g106<0,1,0>UD                   { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g89<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g103<2>D        g[a0 224]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g103.1<2>D      g[a0 228]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g4.1<2>D        g103.1<0,1,0>D                  { align1 WE_all 1Q I@2 };
mov(8)          g4<2>D          g103<0,1,0>D                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g4UD            g67UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g104<1>D        g112<1,1,0>D    192D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g106<1>UD       g104<1,1,0>UD   0x00000006UD    { align1 1H compacted };
add(16)         g18<1>D         g2<0,1,0>D      g104<1,1,0>D    { align1 1H compacted };
add(16)         g108<1>D        g64<1,1,0>D     g106<1,1,0>D    { align1 1H I@2 compacted };
mov(8)          g24<2>UD        g18<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $10.src };
mov(8)          g26<2>UD        g19<4,4,1>UD                    { align1 2Q I@3 };
shl(16)         g114<1>D        g108<8,8,1>D    0x00000003UD    { align1 1H I@3 };
shr(16)         g118<1>UD       g108<1,1,0>UD   0x0000001dUD    { align1 1H compacted };
add(16)         g122<1>D        g2.2<0,1,0>D    g114<1,1,0>D    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(8)          g37<2>UD        g122<4,4,1>UD                   { align1 1Q };
mov(8)          g39<2>UD        g123<4,4,1>UD                   { align1 2Q I@2 };
cmp.l.f0.0(16)  g112<1>UD       g108<1,1,0>UD   g64<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  g124<1>UD       g122<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g20<1>UD        g18<1,1,0>UD    g2<0,1,0>UD     { align1 1H compacted };
shl(16)         g116<1>D        -g112<8,8,1>D   0x00000003UD    { align1 1H I@3 };
add(16)         g22<1>D         -g20<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@2 compacted };
or(16)          g45<1>UD        g116<1,1,0>UD   g118<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g24.1<2>UD      g22<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g26.1<2>UD      g23<4,4,1>UD                    { align1 2Q I@3 };
add3(16)        g126<1>D        g2.3<0,1,0>D    g45<8,8,1>D     -g124<1,1,1>D { align1 1H I@3 };
mov(8)          g37.1<2>UD      g126<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g39.1<2>UD      g127<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g7UD            g37UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(8)          g14<2>UD        g7<4,4,1>UD                     { align1 1Q $1.dst };
mov(8)          g16<2>UD        g8<4,4,1>UD                     { align1 2Q $1.dst };
mov(8)          g14.1<2>UD      g9<4,4,1>UD                     { align1 1Q @2 $1.dst };
mov(8)          g16.1<2>UD      g10<4,4,1>UD                    { align1 2Q @2 $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
shl(1)          a0<1>UD         g89<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g28<2>D         g[a0 448]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g28.1<2>D       g[a0 452]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g41.1<2>D       g28.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g41<2>D         g28<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g74<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g72UD    g41UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $4 };
mov(1)          f0<1>UD         g74<0,1,0>UD                    { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shl(1)          a0<1>UD         g89<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g29<2>D         g[a0 256]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g29.1<2>D       g[a0 260]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g68.1<2>D       g29.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g68<2>D         g29<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g68UD           g72UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $7 };
add3(16)        g120<1>D        0x0003UW        g56<8,8,1>D     g120<1,1,1>D { align1 1H };

LABEL4:
while(16)       JIP:  LABEL5                                    { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_instance_ptrs_indirect_code[] = {
    0x80000065, 0x08058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x1e050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00080c, 0x00340000,
    0x80030061, 0x2a054410, 0x00000000, 0x76543210,
    0x00041a69, 0x32058660, 0x02461e05, 0x00000004,
    0x642a1a40, 0x00802a95, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x30050160,
    0x00462a05, 0x00000000, 0x00041940, 0x00010660,
    0x16463005, 0x00463205, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x20260660,
    0x000002a4, 0x00000000, 0x00130061, 0x22260660,
    0x000002a4, 0x00000000, 0x00031a61, 0x20060660,
    0x00000284, 0x00000000, 0x00131a61, 0x22060660,
    0x00000284, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x3e240000,
    0xfb042024, 0x000c0000, 0x00042169, 0x2f058660,
    0x02463e05, 0x00000006, 0x01040022, 0x0001c060,
    0x00000088, 0x00000088, 0xa0330040, 0x09c10203,
    0xe7351970, 0x09c03303, 0x00033161, 0x21060220,
    0x00343305, 0x00000000, 0x00133161, 0x23060220,
    0x00343405, 0x00000000, 0xa0371b40, 0x02123512,
    0x00031961, 0x21260220, 0x00343705, 0x00000000,
    0x00131a61, 0x23260220, 0x00343805, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb0c2124, 0x00043e14,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0xe0381b68, 0x00802f03, 0x00040061, 0x78050220,
    0x00461e05, 0x00000000, 0x00040065, 0x3a058220,
    0x02462f05, 0xffffff00, 0x00041b52, 0x42044560,
    0x0e8efffe, 0x1e053805, 0xa03c1a40, 0x3a202f02,
    0x00041a61, 0x44052660, 0x00464205, 0x00000000,
    0x00041a65, 0x03058220, 0x02463c05, 0xffffffc0,
    0xe0051968, 0x00600303, 0x00041970, 0x00010220,
    0x52464405, 0x00460505, 0x01040022, 0x0001c060,
    0x00000328, 0x00000328, 0x00040069, 0x4505a660,
    0x02464205, 0x00000006, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xa0471940, 0x45003a02,
    0xe0491968, 0x00604703, 0xa0640040, 0x47010202,
    0xa04ba140, 0x49004002, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00031a61, 0x07060220,
    0x00346405, 0x00000000, 0x00131b61, 0x09060220,
    0x00346505, 0x00000000, 0x274d1b70, 0x40004b03,
    0x00040069, 0x4f058660, 0x02464b05, 0x00000003,
    0xe0530068, 0x01d04b03, 0x00041b69, 0x5105a660,
    0x02464d05, 0x00000003, 0xa0571b40, 0x4f010242,
    0x20551a66, 0x53005103, 0x270c1a70, 0x0210572b,
    0x00030061, 0x19060220, 0x00345705, 0x00000000,
    0x00130061, 0x1b060220, 0x00345805, 0x00000000,
    0x27660070, 0x02106403, 0x00041c52, 0x5b040660,
    0x0e2e0264, 0x0c055505, 0xa0681a40, 0x02126612,
    0x00031a61, 0x19260220, 0x00345b05, 0x00000000,
    0x00131b61, 0x1b260220, 0x00345c05, 0x00000000,
    0x00031b61, 0x07260220, 0x00346805, 0x00000000,
    0x00131c61, 0x09260220, 0x00346905, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x5c240000, 0xfb041924, 0x000c0000,
    0x00032261, 0x60060220, 0x00345c05, 0x00000000,
    0x00132261, 0x62060220, 0x00345d05, 0x00000000,
    0x0003a261, 0x60260220, 0x00345e05, 0x00000000,
    0x0013a261, 0x62260220, 0x00345f05, 0x00000000,
    0xe2710961, 0x00114004, 0x80000965, 0x71058220,
    0x02007104, 0xffffffff, 0x8000194c, 0x6a050220,
    0x00007104, 0x00000000, 0x80001969, 0x10018220,
    0x02006a04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000c00, 0x80000961, 0x6c060660,
    0x00010000, 0x00000000, 0x80000061, 0x6c260660,
    0x00010010, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80031961, 0x22260660,
    0x00006c24, 0x00000000, 0x80031961, 0x22060660,
    0x00006c04, 0x00000000, 0xe2700061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004131, 0x27140000, 0xfb00220c, 0x00340000,
    0x80001a61, 0x30010220, 0x00007004, 0x00000000,
    0x80001e69, 0x10018220, 0x02006a04, 0x00000003,
    0x80000961, 0x6d060660, 0x00010380, 0x00000000,
    0x80000061, 0x6d260660, 0x00010390, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80031a61, 0x23260660, 0x00006d24, 0x00000000,
    0x80031961, 0x23060660, 0x00006d04, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004131, 0x00000000, 0xfb08230c, 0x00342714,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0xe06e0068, 0x00803a03, 0x00041970, 0x00010220,
    0x42467805, 0x00466e05, 0x01040028, 0x0001c660,
    0x00000db0, 0x00000db0, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x70058660,
    0x02467805, 0x00000008, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xe0721968, 0x00607003,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa0220040, 0x70010202, 0xa074a140, 0x72004002,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00031a61, 0x08060220, 0x00342205, 0x00000000,
    0x00131b61, 0x0a060220, 0x00342305, 0x00000000,
    0x27761b70, 0x40007403, 0x00040069, 0x2d058660,
    0x02467405, 0x00000003, 0xe07c0068, 0x01d07403,
    0x00041b69, 0x7a05a660, 0x02467605, 0x00000003,
    0xa00e1b40, 0x2d010242, 0x207e1a66, 0x7c007a03,
    0x27101a70, 0x02100e2b, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x1a060220,
    0x00340e05, 0x00000000, 0x80103201, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x1c060220,
    0x00340f05, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x27240070, 0x02102203,
    0x00041c52, 0x12040660, 0x0e2e0264, 0x10057e05,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa0261a40, 0x02122412, 0x00031a61, 0x1a260220,
    0x00341205, 0x00000000, 0x00131b61, 0x1c260220,
    0x00341305, 0x00000000, 0x00031b61, 0x08260220,
    0x00342605, 0x00000000, 0x00131c61, 0x0a260220,
    0x00342705, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x13240000,
    0xfb041a24, 0x000c0000, 0x00032361, 0x1e060220,
    0x00341305, 0x00000000, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00132361, 0x20060220,
    0x00341405, 0x00000000, 0x0003a361, 0x1e260220,
    0x00341505, 0x00000000, 0x0013a361, 0x20260220,
    0x00341605, 0x00000000, 0xe2070961, 0x00114004,
    0x80000965, 0x07058220, 0x02000704, 0xffffffff,
    0x8000194c, 0x59050220, 0x00000704, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02005904, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000200,
    0x80000961, 0x27060660, 0x00010700, 0x00000000,
    0x80000061, 0x27260660, 0x00010710, 0x00000000,
    0x80031961, 0x2f260660, 0x00002724, 0x00000000,
    0x80031961, 0x2f060660, 0x00002704, 0x00000000,
    0xe26c0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004531, 0x34140000,
    0xfb002f0c, 0x00340000, 0x80001a61, 0x30010220,
    0x00006c04, 0x00000000, 0x80001e69, 0x10018220,
    0x02005904, 0x00000003, 0x80000961, 0x28060660,
    0x00010400, 0x00000000, 0x80000061, 0x28260660,
    0x00010410, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x30260660,
    0x00002824, 0x00000000, 0x80031961, 0x30060660,
    0x00002804, 0x00000000, 0x80002501, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004631, 0x00000000,
    0xfb08300c, 0x00343414, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0290040, 0x04007003,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe02b0068, 0x00602903, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0xa0440040, 0x29010202,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa02f1a40, 0x2b004002, 0x00031a61, 0x12060220,
    0x00344405, 0x00000000, 0x00131b61, 0x14060220,
    0x00344505, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00041b69, 0x33058660,
    0x02462f05, 0x00000003, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xe03a0068, 0x01d02f03,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xa0031a40, 0x33010242, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x1b060220,
    0x00340305, 0x00000000, 0x80103301, 0x00000000,
    0x00000000, 0x00000000, 0x00131a61, 0x1d060220,
    0x00340405, 0x00000000, 0x27310070, 0x40002f03,
    0x27050070, 0x0210032b, 0x27460070, 0x02104403,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041b69, 0x3505a660, 0x02463105, 0x00000003,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xa0481a40, 0x02124612, 0x203c1a66, 0x3a003503,
    0x00031a61, 0x12260220, 0x00344805, 0x00000000,
    0x00131b61, 0x14260220, 0x00344905, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x00041b52, 0x42040660, 0x0e2e0264, 0x05053c05,
    0x00031961, 0x1b260220, 0x00344205, 0x00000000,
    0x00131a61, 0x1d260220, 0x00344305, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044a31, 0x43240000, 0xfb041b24, 0x000c0000,
    0x00032a61, 0x0e060220, 0x00344305, 0x00000000,
    0x00132a61, 0x10060220, 0x00344405, 0x00000000,
    0x0003aa61, 0x0e260220, 0x00344505, 0x00000000,
    0x0013aa61, 0x10260220, 0x00344605, 0x00000000,
    0x80001969, 0x10018220, 0x02005904, 0x00000003,
    0x80000961, 0x49060660, 0x00010700, 0x00000000,
    0x80000061, 0x49260660, 0x00010710, 0x00000000,
    0x80031961, 0x1f260660, 0x00004924, 0x00000000,
    0x80031961, 0x1f060660, 0x00004904, 0x00000000,
    0xe26b0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004b31, 0x03140000,
    0xfb001f0c, 0x00340000, 0x80001a61, 0x30010220,
    0x00006b04, 0x00000000, 0x80001e69, 0x10018220,
    0x02005904, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x4a060660,
    0x00010100, 0x00000000, 0x80000061, 0x4a260660,
    0x00010110, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x3a260660,
    0x00004a24, 0x00000000, 0x80031961, 0x3a060660,
    0x00004a04, 0x00000000, 0x80002b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004831, 0x00000000,
    0xfb083a0c, 0x00340314, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa04b0040, 0x08007003,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe04d0068, 0x00604b03, 0xa0610040, 0x4b010202,
    0xa04f1a40, 0x4d004002, 0x00031a61, 0x17060220,
    0x00346105, 0x00000000, 0x80103201, 0x00000000,
    0x00000000, 0x00000000, 0x80103301, 0x00000000,
    0x00000000, 0x00000000, 0x00131b61, 0x19060220,
    0x00346205, 0x00000000, 0x00041b69, 0x53058660,
    0x02464f05, 0x00000003, 0xe0570068, 0x01d04f03,
    0xa05b1a40, 0x53010242, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x20060220,
    0x00345b05, 0x00000000, 0x00131a61, 0x22060220,
    0x00345c05, 0x00000000, 0x27510070, 0x40004f03,
    0x275d0070, 0x02105b2b, 0x27630070, 0x02106103,
    0x00041b69, 0x5505a660, 0x02465105, 0x00000003,
    0xa0651a40, 0x02126312, 0x200c1a66, 0x57005503,
    0x00031a61, 0x17260220, 0x00346505, 0x00000000,
    0x00131b61, 0x19260220, 0x00346605, 0x00000000,
    0x00041b52, 0x5f040660, 0x0e2e0264, 0x5d050c05,
    0x00031961, 0x20260220, 0x00345f05, 0x00000000,
    0x00131a61, 0x22260220, 0x00346005, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x60240000, 0xfb042024, 0x000c0000,
    0x00032161, 0x13060220, 0x00346005, 0x00000000,
    0x00132161, 0x15060220, 0x00346105, 0x00000000,
    0x0003a161, 0x13260220, 0x00346205, 0x00000000,
    0x0013a161, 0x15260220, 0x00346305, 0x00000000,
    0x80001969, 0x10018220, 0x02005904, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000200,
    0x80000961, 0x66060660, 0x00010180, 0x00000000,
    0x80000061, 0x66260660, 0x00010190, 0x00000000,
    0x80031961, 0x24260660, 0x00006624, 0x00000000,
    0x80031961, 0x24060660, 0x00006604, 0x00000000,
    0xe26a0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004131, 0x43140000,
    0xfb00240c, 0x00340000, 0x80001a61, 0x30010220,
    0x00006a04, 0x00000000, 0x80001e69, 0x10018220,
    0x02005904, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x67060660,
    0x00010380, 0x00000000, 0x80000061, 0x67260660,
    0x00010390, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x04260660,
    0x00006724, 0x00000000, 0x80031961, 0x04060660,
    0x00006704, 0x00000000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004931, 0x00000000,
    0xfb08040c, 0x00344314, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0680040, 0x0c007003,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe06a0068, 0x00606803, 0xa0120040, 0x68010202,
    0xa06c1a40, 0x6a004002, 0x00031a61, 0x18060220,
    0x00341205, 0x00000000, 0x80103a01, 0x00000000,
    0x00000000, 0x00000000, 0x00131b61, 0x1a060220,
    0x00341305, 0x00000000, 0x00041b69, 0x72058660,
    0x02466c05, 0x00000003, 0xe0760068, 0x01d06c03,
    0xa07a1a40, 0x72010242, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x25060220,
    0x00347a05, 0x00000000, 0x00131a61, 0x27060220,
    0x00347b05, 0x00000000, 0x27700070, 0x40006c03,
    0x277c0070, 0x02107a2b, 0x27140070, 0x02101203,
    0x00041b69, 0x7405a660, 0x02467005, 0x00000003,
    0xa0161a40, 0x02121412, 0x202d1a66, 0x76007403,
    0x00031a61, 0x18260220, 0x00341605, 0x00000000,
    0x00131b61, 0x1a260220, 0x00341705, 0x00000000,
    0x00041b52, 0x7e040660, 0x0e2e0264, 0x7c052d05,
    0x00031961, 0x25260220, 0x00347e05, 0x00000000,
    0x00131a61, 0x27260220, 0x00347f05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x07240000, 0xfb042524, 0x000c0000,
    0x00032161, 0x0e060220, 0x00340705, 0x00000000,
    0x00132161, 0x10060220, 0x00340805, 0x00000000,
    0x0003a161, 0x0e260220, 0x00340905, 0x00000000,
    0x0013a161, 0x10260220, 0x00340a05, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02005904, 0x00000003,
    0x80000961, 0x1c060660, 0x00010700, 0x00000000,
    0x80000061, 0x1c260660, 0x00010710, 0x00000000,
    0x80031961, 0x29260660, 0x00001c24, 0x00000000,
    0x80031961, 0x29060660, 0x00001c04, 0x00000000,
    0xe24a0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004431, 0x48140000,
    0xfb00290c, 0x00340000, 0x80001a61, 0x30010220,
    0x00004a04, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001e69, 0x10018220,
    0x02005904, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x1d060660,
    0x00010400, 0x00000000, 0x80000061, 0x1d260660,
    0x00010410, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x44260660,
    0x00001d24, 0x00000000, 0x80031961, 0x44060660,
    0x00001d04, 0x00000000, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004731, 0x00000000,
    0xfb08440c, 0x00344814, 0x00040052, 0x78044160,
    0x0e0e0003, 0x78053805, 0x00040027, 0x00014060,
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
      .base.program_size = 4976,
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
const char *gfx125_misc_copy_instance_ptrs_indirect_sha1 = "c838eb575b70ec07327e4293fc0ae297da25e34d";

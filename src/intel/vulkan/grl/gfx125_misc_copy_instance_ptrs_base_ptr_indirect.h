#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_misc_copy_instance_ptrs_base_ptr_indirect_relocs[] = {
};
static const u_printf_info gfx125_misc_copy_instance_ptrs_base_ptr_indirect_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_misc_copy_instance_ptrs_base_ptr_indirect_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g120<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g30<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g120UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(16)         g57<1>UD        g30<8,8,1>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g59<1>D         g2<0,1,0>D      152D            { align1 1H compacted };
mov(8)          g36.1<2>D       g2.5<0,1,0>D                    { align1 1Q };
mov(8)          g38.1<2>D       g2.5<0,1,0>D                    { align1 2Q };
cmp.l.f0.0(16)  g61<1>UD        g59<1,1,0>UD    0x00000098UD    { align1 1H I@3 compacted };
mov(8)          g32<2>UD        g59<4,4,1>UD                    { align1 1Q };
mov(8)          g34<2>UD        g60<4,4,1>UD                    { align1 2Q };
mov(8)          g36<2>D         g2.4<0,1,0>D                    { align1 1Q I@5 };
mov(8)          g38<2>D         g2.4<0,1,0>D                    { align1 2Q I@5 };
add(16)         g63<1>D         -g61<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g3UD            g36UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(8)          g32.1<2>UD      g63<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g34.1<2>UD      g64<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g64UD           g32UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
shl(16)         g71<1>D         g3<8,8,1>D      0x00000006UD    { align1 1H $1.dst };
shr(16)         g73<1>UD        g71<1,1,0>UD    0x00000008UD    { align1 1H I@1 compacted };
and(16)         g75<1>UD        g71<8,8,1>UD    0xffffff00UD    { align1 1H };
add(16)         g66<1>D         g2<0,1,0>D      g64<1,1,0>D     { align1 1H $2.dst compacted };
add3(16)        g83<1>D         65534W          -g73<8,8,1>D    g30<1,1,1>D { align1 1H I@3 };
add(16)         g77<1>D         g71<1,1,0>D     -g75<1,1,0>D    { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g68<1>UD        g66<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@3 compacted };
mov(16)         g85<1>D         -g83<8,8,1>D                    { align1 1H I@3 };
and(16)         g79<1>UD        g77<8,8,1>UD    0xffffffc0UD    { align1 1H I@3 };
add(16)         g70<1>D         -g68<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
shr(16)         g81<1>UD        g79<1,1,0>UD    0x00000006UD    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  null<1>UD       g85<8,8,1>UD    g81<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g86<1>D         -g83<8,8,1>D    0x00000006UD    { align1 1H };
add(16)         g88<1>D         g75<1,1,0>D     g86<1,1,0>D     { align1 1H I@1 compacted };
shr(16)         g90<1>UD        g88<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
add(16)         g110<1>D        g66<1,1,0>D     g88<1,1,0>D     { align1 1H compacted };
add(16)         g92<1>D         g5<1,1,0>D      g90<1,1,0>D     { align1 1H @2 $1.dst compacted };
mov(8)          g11<2>UD        g110<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g13<2>UD        g111<4,4,1>UD                   { align1 2Q I@3 };
cmp.l.f0.0(16)  g94<1>UD        g92<1,1,0>UD    g5<1,1,0>UD     { align1 1H I@3 compacted };
shl(16)         g96<1>D         g92<8,8,1>D     0x00000003UD    { align1 1H };
shr(16)         g20<1>UD        g92<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
shl(16)         g98<1>D         -g94<8,8,1>D    0x00000003UD    { align1 1H I@3 };
add(16)         g104<1>D        g2.2<0,1,0>D    g96<1,1,0>D     { align1 1H I@3 compacted };
or(16)          g55<1>UD        g98<1,1,0>UD    g20<1,1,0>UD    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g106<1>UD       g104<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g37<2>UD        g104<4,4,1>UD                   { align1 1Q $1.src };
mov(8)          g39<2>UD        g105<4,4,1>UD                   { align1 2Q $1.src };
cmp.l.f0.0(16)  g112<1>UD       g110<1,1,0>UD   g66<1,1,0>UD    { align1 1H compacted };
add3(16)        g108<1>D        g2.3<0,1,0>D    g55<8,8,1>D     -g106<1,1,1>D { align1 1H I@4 };
add(16)         g114<1>D        -g112<1,1,0>D   g70<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g37.1<2>UD      g108<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g39.1<2>UD      g109<4,4,1>UD                   { align1 2Q I@3 };
mov(8)          g11.1<2>UD      g114<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g13.1<2>UD      g115<4,4,1>UD                   { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g109UD          g37UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(8)          g7<2>UD         g109<4,4,1>UD                   { align1 1Q $1.dst };
mov(8)          g9<2>UD         g110<4,4,1>UD                   { align1 2Q $1.dst };
mov(8)          g7.1<2>UD       g111<4,4,1>UD                   { align1 1Q @2 $1.dst };
mov(8)          g9.1<2>UD       g112<4,4,1>UD                   { align1 2Q @2 $1.dst };
mov(1)          g118<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g118<1>UD       g118<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g116<1>UD       g118<0,1,0>UD                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shl(1)          a0<1>UD         g116<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g118<2>D        g[a0 224]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g118.1<2>D      g[a0 228]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g37.1<2>D       g118.1<0,1,0>D                  { align1 WE_all 1Q I@1 };
mov(8)          g37<2>D         g118<0,1,0>D                    { align1 WE_all 1Q I@1 };
mov(1)          g90<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g42UD    g37UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
mov(1)          f0<1>UD         g90<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g116<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
mov(1)          g119<2>D        g[a0 352]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g119.1<2>D      g[a0 356]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g38.1<2>D       g119.1<0,1,0>D                  { align1 WE_all 1Q I@2 };
mov(8)          g38<2>D         g119<0,1,0>D                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g38UD           g42UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $1 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shr(16)         g120<1>UD       g75<1,1,0>UD    0x00000008UD    { align1 1H compacted };

LABEL3:
cmp.ge.f0.0(16) null<1>UD       g57<8,8,1>UD    g120<8,8,1>UD   { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL2        UIP:  LABEL2              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
shl(16)         g122<1>D        g57<8,8,1>D     0x00000008UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
shr(16)         g124<1>UD       g122<1,1,0>UD   0x00000006UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g34<1>D         g66<1,1,0>D     g122<1,1,0>D    { align1 1H compacted };
add(16)         g126<1>D        g5<1,1,0>D      g124<1,1,0>D    { align1 1H @2 $1.dst compacted };
mov(8)          g16<2>UD        g34<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g18<2>UD        g35<4,4,1>UD                    { align1 2Q I@3 };
cmp.l.f0.0(16)  g7<1>UD         g126<1,1,0>UD   g5<1,1,0>UD     { align1 1H I@3 compacted };
shl(16)         g9<1>D          g126<8,8,1>D    0x00000003UD    { align1 1H };
shr(16)         g24<1>UD        g126<1,1,0>UD   0x0000001dUD    { align1 1H compacted };
shl(16)         g22<1>D         -g7<8,8,1>D     0x00000003UD    { align1 1H I@3 };
add(16)         g28<1>D         g2.2<0,1,0>D    g9<1,1,0>D      { align1 1H I@3 compacted };
or(16)          g26<1>UD        g22<1,1,0>UD    g24<1,1,0>UD    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g30<1>UD        g28<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g38<2>UD        g28<4,4,1>UD                    { align1 1Q };
mov(8)          g40<2>UD        g29<4,4,1>UD                    { align1 2Q $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g36<1>UD        g34<1,1,0>UD    g66<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add3(16)        g32<1>D         g2.3<0,1,0>D    g26<8,8,1>D     -g30<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g42<1>D         -g36<1,1,0>D    g70<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g38.1<2>UD      g32<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g40.1<2>UD      g33<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g16.1<2>UD      g42<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g18.1<2>UD      g43<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g33UD           g38UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov(8)          g12<2>UD        g33<4,4,1>UD                    { align1 1Q $3.dst };
mov(8)          g14<2>UD        g34<4,4,1>UD                    { align1 2Q $3.dst };
mov(8)          g12.1<2>UD      g35<4,4,1>UD                    { align1 1Q @2 $3.dst };
mov(8)          g14.1<2>UD      g36<4,4,1>UD                    { align1 2Q @2 $3.dst };
mov(1)          g119<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g119<1>UD       g119<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
fbl(1)          g100<1>UD       g119<0,1,0>UD                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
shl(1)          a0<1>UD         g100<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g43<2>D         g[a0 384]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g43.1<2>D       g[a0 388]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g47.1<2>D       g43.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g47<2>D         g43<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g89<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g52UD    g47UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $6 };
mov(1)          f0<1>UD         g89<0,1,0>UD                    { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shl(1)          a0<1>UD         g100<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g44<2>D         g[a0]<0,1,0>D                   { align1 WE_all 1N A@1 };
mov(1)          g44.1<2>D       g[a0 4]<0,1,0>D                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g48.1<2>D       g44.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g48<2>D         g44<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g48UD           g52UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g47<1>D         g122<1,1,0>D    64D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g49<1>UD        g47<1,1,0>UD    0x00000006UD    { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g79<1>D         g66<1,1,0>D     g47<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g51<1>D         g5<1,1,0>D      g49<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g26<2>UD        g79<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g28<2>UD        g80<4,4,1>UD                    { align1 2Q I@3 };
shl(16)         g102<1>D        g51<8,8,1>D     0x00000003UD    { align1 1H I@3 };
shr(16)         g61<1>UD        g51<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
add(16)         g68<1>D         g2.2<0,1,0>D    g102<1,1,0>D    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g39<2>UD        g68<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $3.src };
mov(8)          g41<2>UD        g69<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
cmp.l.f0.0(16)  g53<1>UD        g51<1,1,0>UD    g5<1,1,0>UD     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
cmp.l.f0.0(16)  g75<1>UD        g68<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g81<1>UD        g79<1,1,0>UD    g66<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
shl(16)         g59<1>D         -g53<8,8,1>D    0x00000003UD    { align1 1H I@3 };
add(16)         g83<1>D         -g81<1,1,0>D    g70<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
or(16)          g63<1>UD        g59<1,1,0>UD    g61<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g26.1<2>UD      g83<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g28.1<2>UD      g84<4,4,1>UD                    { align1 2Q I@3 };
add3(16)        g77<1>D         g2.3<0,1,0>D    g63<8,8,1>D     -g75<1,1,1>D { align1 1H I@3 };
mov(8)          g39.1<2>UD      g77<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g41.1<2>UD      g78<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g78UD           g39UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(8)          g22<2>UD        g78<4,4,1>UD                    { align1 1Q $1.dst };
mov(8)          g24<2>UD        g79<4,4,1>UD                    { align1 2Q $1.dst };
mov(8)          g22.1<2>UD      g80<4,4,1>UD                    { align1 1Q @2 $1.dst };
mov(8)          g24.1<2>UD      g81<4,4,1>UD                    { align1 2Q @2 $1.dst };
shl(1)          a0<1>UD         g100<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g84<2>D         g[a0 192]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g84.1<2>D       g[a0 196]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g43.1<2>D       g84.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g43<2>D         g84<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g88<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g59UD    g43UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
mov(1)          f0<1>UD         g88<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g100<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g85<2>D         g[a0 320]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g85.1<2>D       g[a0 324]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g53.1<2>D       g85.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g53<2>D         g85<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g53UD           g59UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g86<1>D         g122<1,1,0>D    128D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g88<1>UD        g86<1,1,0>UD    0x00000006UD    { align1 1H compacted };
add(16)         g108<1>D        g66<1,1,0>D     g86<1,1,0>D     { align1 1H compacted };
add(16)         g90<1>D         g5<1,1,0>D      g88<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g31<2>UD        g108<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g33<2>UD        g109<4,4,1>UD                   { align1 2Q I@3 };
shl(16)         g94<1>D         g90<8,8,1>D     0x00000003UD    { align1 1H I@3 };
shr(16)         g98<1>UD        g90<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
add(16)         g55<1>D         g2.2<0,1,0>D    g94<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(8)          g44<2>UD        g55<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
mov(8)          g46<2>UD        g56<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g92<1>UD        g90<1,1,0>UD    g5<1,1,0>UD     { align1 1H compacted };
cmp.l.f0.0(16)  g104<1>UD       g55<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g110<1>UD       g108<1,1,0>UD   g66<1,1,0>UD    { align1 1H compacted };
shl(16)         g96<1>D         -g92<8,8,1>D    0x00000003UD    { align1 1H I@3 };
add(16)         g112<1>D        -g110<1,1,0>D   g70<1,1,0>D     { align1 1H I@2 compacted };
or(16)          g20<1>UD        g96<1,1,0>UD    g98<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g31.1<2>UD      g112<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g33.1<2>UD      g113<4,4,1>UD                   { align1 2Q I@3 };
add3(16)        g106<1>D        g2.3<0,1,0>D    g20<8,8,1>D     -g104<1,1,1>D { align1 1H I@3 };
mov(8)          g44.1<2>UD      g106<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g46.1<2>UD      g107<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g107UD          g44UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
mov(8)          g27<2>UD        g107<4,4,1>UD                   { align1 1Q $4.dst };
mov(8)          g29<2>UD        g108<4,4,1>UD                   { align1 2Q $4.dst };
mov(8)          g27.1<2>UD      g109<4,4,1>UD                   { align1 1Q @2 $4.dst };
mov(8)          g29.1<2>UD      g110<4,4,1>UD                   { align1 2Q @2 $4.dst };
shl(1)          a0<1>UD         g100<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g113<2>D        g[a0 352]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g113.1<2>D      g[a0 356]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g48.1<2>D       g113.1<0,1,0>D                  { align1 WE_all 1Q I@1 };
mov(8)          g48<2>D         g113<0,1,0>D                    { align1 WE_all 1Q I@1 };
mov(1)          g82<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g64UD    g48UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $5 };
mov(1)          f0<1>UD         g82<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g100<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g114<2>D        g[a0 480]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g114.1<2>D      g[a0 484]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(8)          g60.1<2>D       g114.1<0,1,0>D                  { align1 WE_all 1Q I@2 };
mov(8)          g60<2>D         g114<0,1,0>D                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g60UD           g64UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g115<1>D        g122<1,1,0>D    192D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g117<1>UD       g115<1,1,0>UD   0x00000006UD    { align1 1H compacted };
add(16)         g23<1>D         g66<1,1,0>D     g115<1,1,0>D    { align1 1H compacted };
add(16)         g122<1>D        g5<1,1,0>D      g117<1,1,0>D    { align1 1H I@2 compacted };
mov(8)          g36<2>UD        g23<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g38<2>UD        g24<4,4,1>UD                    { align1 2Q I@3 };
shl(16)         g126<1>D        g122<8,8,1>D    0x00000003UD    { align1 1H I@3 };
shr(16)         g9<1>UD         g122<1,1,0>UD   0x0000001dUD    { align1 1H compacted };
add(16)         g13<1>D         g2.2<0,1,0>D    g126<1,1,0>D    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(8)          g49<2>UD        g13<4,4,1>UD                    { align1 1Q };
mov(8)          g51<2>UD        g14<4,4,1>UD                    { align1 2Q I@2 };
cmp.l.f0.0(16)  g124<1>UD       g122<1,1,0>UD   g5<1,1,0>UD     { align1 1H compacted };
cmp.l.f0.0(16)  g15<1>UD        g13<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g25<1>UD        g23<1,1,0>UD    g66<1,1,0>UD    { align1 1H compacted };
shl(16)         g7<1>D          -g124<8,8,1>D   0x00000003UD    { align1 1H I@3 };
add(16)         g27<1>D         -g25<1,1,0>D    g70<1,1,0>D     { align1 1H I@2 compacted };
or(16)          g11<1>UD        g7<1,1,0>UD     g9<1,1,0>UD     { align1 1H I@2 compacted };
mov(8)          g36.1<2>UD      g27<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g38.1<2>UD      g28<4,4,1>UD                    { align1 2Q I@3 };
add3(16)        g17<1>D         g2.3<0,1,0>D    g11<8,8,1>D     -g15<1,1,1>D { align1 1H I@3 };
mov(8)          g49.1<2>UD      g17<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g51.1<2>UD      g18<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g22UD           g49UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
mov(8)          g32<2>UD        g22<4,4,1>UD                    { align1 1Q $7.dst };
mov(8)          g34<2>UD        g23<4,4,1>UD                    { align1 2Q $7.dst };
mov(8)          g32.1<2>UD      g24<4,4,1>UD                    { align1 1Q @2 $7.dst };
mov(8)          g34.1<2>UD      g25<4,4,1>UD                    { align1 2Q @2 $7.dst };
shl(1)          a0<1>UD         g100<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000400UD    { align1 WE_all 1N A@1 };
mov(1)          g28<2>D         g[a0]<0,1,0>D                   { align1 WE_all 1N A@1 };
mov(1)          g28.1<2>D       g[a0 4]<0,1,0>D                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(8)          g53.1<2>D       g28.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g53<2>D         g28<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g81<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g79UD    g53UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $8 };
mov(1)          f0<1>UD         g81<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g100<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000400UD    { align1 WE_all 1N A@1 };
mov(1)          g29<2>D         g[a0 128]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g29.1<2>D       g[a0 132]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g75.1<2>D       g29.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g75<2>D         g29<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g75UD           g79UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $10 };
add3(16)        g57<1>D         0x0003UW        g73<8,8,1>D     g57<1,1,1>D { align1 1H };

LABEL2:
while(16)       JIP:  LABEL3                                    { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_instance_ptrs_base_ptr_indirect_code[] = {
    0x80000065, 0x78058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x1e050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00780c, 0x00340000,
    0x00041961, 0x39050220, 0x00461e05, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa03b0040, 0x09810203, 0x00030061, 0x24260660,
    0x000002a4, 0x00000000, 0x00130061, 0x26260660,
    0x000002a4, 0x00000000, 0xe73d1b70, 0x09803b03,
    0x00030061, 0x20060220, 0x00343b05, 0x00000000,
    0x00130061, 0x22060220, 0x00343c05, 0x00000000,
    0x00031d61, 0x24060660, 0x00000284, 0x00000000,
    0x00131d61, 0x26060660, 0x00000284, 0x00000000,
    0xa03f1d40, 0x02123d12, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x03240000,
    0xfb042424, 0x000c0000, 0x00031961, 0x20260220,
    0x00343f05, 0x00000000, 0x00131a61, 0x22260220,
    0x00344005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x40140000,
    0xfb042024, 0x00040000, 0x00042169, 0x47058660,
    0x02460305, 0x00000006, 0xe0491968, 0x00804703,
    0x00040065, 0x4b058220, 0x02464705, 0xffffff00,
    0xa0422240, 0x40010202, 0x00041b52, 0x53044560,
    0x0e8efffe, 0x1e054905, 0xa04d1b40, 0x4b204702,
    0x27441b70, 0x02104203, 0x00041b61, 0x55052660,
    0x00465305, 0x00000000, 0x00041b65, 0x4f058220,
    0x02464d05, 0xffffffc0, 0xa0461b40, 0x02124412,
    0xe0511a68, 0x00604f03, 0x00041970, 0x00010220,
    0x52465505, 0x00465105, 0x01040022, 0x0001c060,
    0x00000308, 0x00000308, 0x00040069, 0x5605a660,
    0x02465305, 0x00000006, 0xa0581940, 0x56004b02,
    0xe05a1968, 0x00605803, 0xa06e0040, 0x58004202,
    0xa05ca140, 0x5a000502, 0x00031a61, 0x0b060220,
    0x00346e05, 0x00000000, 0x00131b61, 0x0d060220,
    0x00346f05, 0x00000000, 0x275e1b70, 0x05005c03,
    0x00040069, 0x60058660, 0x02465c05, 0x00000003,
    0xe0140068, 0x01d05c03, 0x00041b69, 0x6205a660,
    0x02465e05, 0x00000003, 0xa0681b40, 0x60010242,
    0x20371a66, 0x14006203, 0x276a1a70, 0x0210682b,
    0x00033161, 0x25060220, 0x00346805, 0x00000000,
    0x00133161, 0x27060220, 0x00346905, 0x00000000,
    0x27700070, 0x42006e03, 0x00041c52, 0x6c040660,
    0x0e2e0264, 0x6a053705, 0xa0721a40, 0x46027002,
    0x00031a61, 0x25260220, 0x00346c05, 0x00000000,
    0x00131b61, 0x27260220, 0x00346d05, 0x00000000,
    0x00031b61, 0x0b260220, 0x00347205, 0x00000000,
    0x00131c61, 0x0d260220, 0x00347305, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x6d240000, 0xfb042524, 0x000c0000,
    0x00032161, 0x07060220, 0x00346d05, 0x00000000,
    0x00132161, 0x09060220, 0x00346e05, 0x00000000,
    0x0003a161, 0x07260220, 0x00346f05, 0x00000000,
    0x0013a161, 0x09260220, 0x00347005, 0x00000000,
    0xe2760961, 0x00114004, 0x80000965, 0x76058220,
    0x02007604, 0xffffffff, 0x8000194c, 0x74050220,
    0x00007604, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001969, 0x10018220,
    0x02007404, 0x00000003, 0x80000961, 0x76060660,
    0x00010380, 0x00000000, 0x80000061, 0x76260660,
    0x00010390, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80031961, 0x25260660,
    0x00007624, 0x00000000, 0x80031961, 0x25060660,
    0x00007604, 0x00000000, 0xe25a0061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004131, 0x2a140000, 0xfb00250c, 0x00340000,
    0x80001a61, 0x30010220, 0x00005a04, 0x00000000,
    0x80001e69, 0x10018220, 0x02007404, 0x00000003,
    0x80000961, 0x77060660, 0x00010580, 0x00000000,
    0x80000061, 0x77260660, 0x00010590, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80031a61, 0x26260660, 0x00007724, 0x00000000,
    0x80031961, 0x26060660, 0x00007704, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004131, 0x00000000, 0xfb08260c, 0x00342a14,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0xe0780068, 0x00804b03, 0x00041970, 0x00010220,
    0x42463905, 0x00467805, 0x01040028, 0x0001c660,
    0x00000df0, 0x00000df0, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x7a058660,
    0x02463905, 0x00000008, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001e01, 0x00000000,
    0x00000000, 0x00000000, 0xe07c1968, 0x00607a03,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa0220040, 0x7a004202, 0xa07ea140, 0x7c000502,
    0x00031a61, 0x10060220, 0x00342205, 0x00000000,
    0x00131b61, 0x12060220, 0x00342305, 0x00000000,
    0x27071b70, 0x05007e03, 0x00040069, 0x09058660,
    0x02467e05, 0x00000003, 0xe0180068, 0x01d07e03,
    0x00041b69, 0x1605a660, 0x02460705, 0x00000003,
    0xa01c1b40, 0x09010242, 0x201a1a66, 0x18001603,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x271e0070, 0x02101c2b, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x26060220,
    0x00341c05, 0x00000000, 0x00133161, 0x28060220,
    0x00341d05, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x27240070, 0x42002203,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x20040660, 0x0e2e0264, 0x1e051a05,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa02a1a40, 0x46022402, 0x00031a61, 0x26260220,
    0x00342005, 0x00000000, 0x00131b61, 0x28260220,
    0x00342105, 0x00000000, 0x00031b61, 0x10260220,
    0x00342a05, 0x00000000, 0x00131c61, 0x12260220,
    0x00342b05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x21240000,
    0xfb042624, 0x000c0000, 0x00032361, 0x0c060220,
    0x00342105, 0x00000000, 0x00132361, 0x0e060220,
    0x00342205, 0x00000000, 0x0003a361, 0x0c260220,
    0x00342305, 0x00000000, 0x0013a361, 0x0e260220,
    0x00342405, 0x00000000, 0xe2770961, 0x00114004,
    0x80000965, 0x77058220, 0x02007704, 0xffffffff,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x8000194c, 0x64050220, 0x00007704, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02006404, 0x00000003,
    0x80000961, 0x2b060660, 0x00010600, 0x00000000,
    0x80000061, 0x2b260660, 0x00010610, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x2f260660, 0x00002b24, 0x00000000,
    0x80031961, 0x2f060660, 0x00002b04, 0x00000000,
    0xe2590061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004631, 0x34140000,
    0xfb002f0c, 0x00340000, 0x80001a61, 0x30010220,
    0x00005904, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001e69, 0x10018220,
    0x02006404, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x2c060660,
    0x00010000, 0x00000000, 0x80000061, 0x2c260660,
    0x00010010, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x30260660,
    0x00002c24, 0x00000000, 0x80031961, 0x30060660,
    0x00002c04, 0x00000000, 0x80002601, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004931, 0x00000000,
    0xfb08300c, 0x00343414, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa02f0040, 0x04007a03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe0313768, 0x00602f03, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0xa04f0040, 0x2f004202,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xa0331a40, 0x31000502, 0x00031a61, 0x1a060220,
    0x00344f05, 0x00000000, 0x00131b61, 0x1c060220,
    0x00345005, 0x00000000, 0x00041b69, 0x66058660,
    0x02463305, 0x00000003, 0xe03d0068, 0x01d03303,
    0xa0441a40, 0x66010242, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x27060220,
    0x00344405, 0x00000000, 0x80103301, 0x00000000,
    0x00000000, 0x00000000, 0x00131a61, 0x29060220,
    0x00344505, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x27350070, 0x05003303,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x274b0070, 0x0210442b, 0x27510070, 0x42004f03,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x00041b69, 0x3b05a660, 0x02463505, 0x00000003,
    0xa0531a40, 0x46025102, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x203f1a66, 0x3d003b03,
    0x00031a61, 0x1a260220, 0x00345305, 0x00000000,
    0x00131b61, 0x1c260220, 0x00345405, 0x00000000,
    0x00041b52, 0x4d040660, 0x0e2e0264, 0x4b053f05,
    0x00031961, 0x27260220, 0x00344d05, 0x00000000,
    0x00131a61, 0x29260220, 0x00344e05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x4e240000, 0xfb042724, 0x000c0000,
    0x00032161, 0x16060220, 0x00344e05, 0x00000000,
    0x00132161, 0x18060220, 0x00344f05, 0x00000000,
    0x0003a161, 0x16260220, 0x00345005, 0x00000000,
    0x0013a161, 0x18260220, 0x00345105, 0x00000000,
    0x80001969, 0x10018220, 0x02006404, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000200,
    0x80000961, 0x54060660, 0x00010300, 0x00000000,
    0x80000061, 0x54260660, 0x00010310, 0x00000000,
    0x80031961, 0x2b260660, 0x00005424, 0x00000000,
    0x80031961, 0x2b060660, 0x00005404, 0x00000000,
    0xe2580061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004131, 0x3b140000,
    0xfb002b0c, 0x00340000, 0x80001a61, 0x30010220,
    0x00005804, 0x00000000, 0x80001e69, 0x10018220,
    0x02006404, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x55060660,
    0x00010500, 0x00000000, 0x80000061, 0x55260660,
    0x00010510, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x35260660,
    0x00005524, 0x00000000, 0x80031961, 0x35060660,
    0x00005504, 0x00000000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004b31, 0x00000000,
    0xfb08350c, 0x00343b14, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0560040, 0x08007a03,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe0580068, 0x00605603, 0xa06c0040, 0x56004202,
    0xa05a1a40, 0x58000502, 0x00031a61, 0x1f060220,
    0x00346c05, 0x00000000, 0x00131b61, 0x21060220,
    0x00346d05, 0x00000000, 0x00041b69, 0x5e058660,
    0x02465a05, 0x00000003, 0xe0620068, 0x01d05a03,
    0xa0371a40, 0x5e010242, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x2c060220,
    0x00343705, 0x00000000, 0x80101a01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x2e060220,
    0x00343805, 0x00000000, 0x275c0070, 0x05005a03,
    0x27680070, 0x0210372b, 0x276e0070, 0x42006c03,
    0x00041b69, 0x6005a660, 0x02465c05, 0x00000003,
    0xa0701a40, 0x46026e02, 0x20141a66, 0x62006003,
    0x00031a61, 0x1f260220, 0x00347005, 0x00000000,
    0x00131b61, 0x21260220, 0x00347105, 0x00000000,
    0x00041b52, 0x6a040660, 0x0e2e0264, 0x68051405,
    0x00031961, 0x2c260220, 0x00346a05, 0x00000000,
    0x00131a61, 0x2e260220, 0x00346b05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x6b240000, 0xfb042c24, 0x000c0000,
    0x00032461, 0x1b060220, 0x00346b05, 0x00000000,
    0x00132461, 0x1d060220, 0x00346c05, 0x00000000,
    0x0003a461, 0x1b260220, 0x00346d05, 0x00000000,
    0x0013a461, 0x1d260220, 0x00346e05, 0x00000000,
    0x80001969, 0x10018220, 0x02006404, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000200,
    0x80000961, 0x71060660, 0x00010580, 0x00000000,
    0x80000061, 0x71260660, 0x00010590, 0x00000000,
    0x80031961, 0x30260660, 0x00007124, 0x00000000,
    0x80031961, 0x30060660, 0x00007104, 0x00000000,
    0xe2520061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004531, 0x40140000,
    0xfb00300c, 0x00340000, 0x80001a61, 0x30010220,
    0x00005204, 0x00000000, 0x80001e69, 0x10018220,
    0x02006404, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x72060660,
    0x00010780, 0x00000000, 0x80000061, 0x72260660,
    0x00010790, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x3c260660,
    0x00007224, 0x00000000, 0x80031961, 0x3c060660,
    0x00007204, 0x00000000, 0x80002501, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004c31, 0x00000000,
    0xfb083c0c, 0x00344014, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0730040, 0x0c007a03,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe0750068, 0x00607303, 0xa0170040, 0x73004202,
    0xa07a1a40, 0x75000502, 0x00031a61, 0x24060220,
    0x00341705, 0x00000000, 0x80103301, 0x00000000,
    0x00000000, 0x00000000, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00131b61, 0x26060220,
    0x00341805, 0x00000000, 0x00041b69, 0x7e058660,
    0x02467a05, 0x00000003, 0xe0090068, 0x01d07a03,
    0xa00d1a40, 0x7e010242, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x31060220,
    0x00340d05, 0x00000000, 0x00131a61, 0x33060220,
    0x00340e05, 0x00000000, 0x277c0070, 0x05007a03,
    0x270f0070, 0x02100d2b, 0x27190070, 0x42001703,
    0x00041b69, 0x0705a660, 0x02467c05, 0x00000003,
    0xa01b1a40, 0x46021902, 0x200b1a66, 0x09000703,
    0x00031a61, 0x24260220, 0x00341b05, 0x00000000,
    0x00131b61, 0x26260220, 0x00341c05, 0x00000000,
    0x00041b52, 0x11040660, 0x0e2e0264, 0x0f050b05,
    0x00031961, 0x31260220, 0x00341105, 0x00000000,
    0x00131a61, 0x33260220, 0x00341205, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x16240000, 0xfb043124, 0x000c0000,
    0x00032761, 0x20060220, 0x00341605, 0x00000000,
    0x00132761, 0x22060220, 0x00341705, 0x00000000,
    0x0003a761, 0x20260220, 0x00341805, 0x00000000,
    0x0013a761, 0x22260220, 0x00341905, 0x00000000,
    0x80001969, 0x10018220, 0x02006404, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000400,
    0x80000961, 0x1c060660, 0x00010000, 0x00000000,
    0x80000061, 0x1c260660, 0x00010010, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x35260660, 0x00001c24, 0x00000000,
    0x80031961, 0x35060660, 0x00001c04, 0x00000000,
    0xe2510061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004831, 0x4f140000,
    0xfb00350c, 0x00340000, 0x80001a61, 0x30010220,
    0x00005104, 0x00000000, 0x80001e69, 0x10018220,
    0x02006404, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000400, 0x80000961, 0x1d060660,
    0x00010200, 0x00000000, 0x80000061, 0x1d260660,
    0x00010210, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x4b260660,
    0x00001d24, 0x00000000, 0x80031961, 0x4b060660,
    0x00001d04, 0x00000000, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004a31, 0x00000000,
    0xfb084b0c, 0x00344f14, 0x00040052, 0x39044160,
    0x0e0e0003, 0x39054905, 0x00040027, 0x00014060,
    0x00000000, 0xfffff200, 0x80030061, 0x7e050220,
    0x00460005, 0x00000000, 0x80040931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_misc_copy_instance_ptrs_base_ptr_indirect = {
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
      .base.relocs = gfx125_misc_copy_instance_ptrs_base_ptr_indirect_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_misc_copy_instance_ptrs_base_ptr_indirect_printfs,
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
   .args = gfx125_misc_copy_instance_ptrs_base_ptr_indirect_args,
   .code = gfx125_misc_copy_instance_ptrs_base_ptr_indirect_code,
};
const char *gfx125_misc_copy_instance_ptrs_base_ptr_indirect_sha1 = "6e81d1e80009102f688c418312bb61719f076f4c";

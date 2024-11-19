#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_misc_copy_instance_ptrs_relocs[] = {
};
static const u_printf_info gfx125_misc_copy_instance_ptrs_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_misc_copy_instance_ptrs_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g95<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g63<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g95UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(16)         g20<1>UD        g63<8,8,1>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
shr(16)         g74<1>UD        g2.4<0,1,0>UD   0x00000008UD    { align1 1H compacted };
and(16)         g7<1>UD         g2.4<0,1,0>UD   0xffffff00UD    { align1 1H };
add3(16)        g15<1>D         65534W          -g74<8,8,1>D    g63<1,1,1>D { align1 1H I@2 };
add(16)         g9<1>D          g2.4<0,1,0>D    -g7<1,1,0>D     { align1 1H I@2 compacted };
mov(16)         g17<1>D         -g15<8,8,1>D                    { align1 1H I@2 };
and(16)         g11<1>UD        g9<8,8,1>UD     0xffffffc0UD    { align1 1H I@2 };
shr(16)         g13<1>UD        g11<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g17<8,8,1>UD    g13<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g18<1>D         -g15<8,8,1>D    0x00000006UD    { align1 1H };
add(16)         g3<1>D          g7<1,1,0>D      g18<1,1,0>D     { align1 1H I@1 compacted };
shr(16)         g22<1>UD        g3<1,1,0>UD     0x00000006UD    { align1 1H I@1 compacted };
add(16)         g39<1>D         g2<0,1,0>D      g3<1,1,0>D      { align1 1H compacted };
shl(16)         g24<1>D         g22<8,8,1>D     0x00000003UD    { align1 1H I@2 };
mov(8)          g45<2>UD        g39<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g47<2>UD        g40<4,4,1>UD                    { align1 2Q I@3 };
add(16)         g26<1>D         g2.2<0,1,0>D    g24<1,1,0>D     { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g28<1>UD        g26<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g64<2>UD        g26<4,4,1>UD                    { align1 1Q };
mov(8)          g66<2>UD        g27<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g41<1>UD        g39<1,1,0>UD    g2<0,1,0>UD     { align1 1H compacted };
add(16)         g30<1>D         -g28<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@4 compacted };
add(16)         g43<1>D         -g41<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@2 compacted };
mov(8)          g64.1<2>UD      g30<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g66.1<2>UD      g31<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g45.1<2>UD      g43<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g47.1<2>UD      g44<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g31UD           g64UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(8)          g35<2>UD        g31<4,4,1>UD                    { align1 1Q $1.dst };
mov(8)          g37<2>UD        g32<4,4,1>UD                    { align1 2Q $1.dst };
mov(8)          g35.1<2>UD      g33<4,4,1>UD                    { align1 1Q @2 $1.dst };
mov(8)          g37.1<2>UD      g34<4,4,1>UD                    { align1 2Q @2 $1.dst };
mov(1)          g77<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g77<1>UD        g77<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g49<1>UD        g77<0,1,0>UD                    { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g49<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000400UD    { align1 WE_all 1N A@1 };
mov(1)          g51<2>D         g[a0 96]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g51.1<2>D       g[a0 100]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g65.1<2>D       g51.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g65<2>D         g51<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g76<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g70UD    g65UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $2 };
mov(1)          f0<1>UD         g76<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g49<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000400UD    { align1 WE_all 1N A@1 };
mov(1)          g52<2>D         g[a0 416]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g52.1<2>D       g[a0 420]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g66.1<2>D       g52.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g66<2>D         g52<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g66UD           g70UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $3 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shr(16)         g53<1>UD        g7<1,1,0>UD     0x00000008UD    { align1 1H compacted };

LABEL3:
cmp.ge.f0.0(16) null<1>UD       g20<8,8,1>UD    g53<8,8,1>UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL2        UIP:  LABEL2              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
shl(16)         g55<1>D         g20<8,8,1>D     0x00000008UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
shr(16)         g57<1>UD        g55<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
add(16)         g5<1>D          g2<0,1,0>D      g55<1,1,0>D     { align1 1H compacted };
shl(16)         g59<1>D         g57<8,8,1>D     0x00000003UD    { align1 1H I@2 };
mov(8)          g80<2>UD        g5<4,4,1>UD                     { align1 1Q I@2 };
mov(8)          g82<2>UD        g6<4,4,1>UD                     { align1 2Q I@3 };
add(16)         g61<1>D         g2.2<0,1,0>D    g59<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g63<1>UD        g61<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
mov(8)          g86<2>UD        g61<4,4,1>UD                    { align1 1Q };
mov(8)          g88<2>UD        g62<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g76<1>UD        g5<1,1,0>UD     g2<0,1,0>UD     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g65<1>D         -g63<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
add(16)         g78<1>D         -g76<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@2 compacted };
mov(8)          g86.1<2>UD      g65<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g88.1<2>UD      g66<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g80.1<2>UD      g78<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g82.1<2>UD      g79<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g66UD           g86UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g70<2>UD        g66<4,4,1>UD                    { align1 1Q $4.dst };
mov(8)          g72<2>UD        g67<4,4,1>UD                    { align1 2Q $4.dst };
mov(8)          g70.1<2>UD      g68<4,4,1>UD                    { align1 1Q @2 $4.dst };
mov(8)          g72.1<2>UD      g69<4,4,1>UD                    { align1 2Q @2 $4.dst };
mov(1)          g94<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g94<1>UD        g94<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g84<1>UD        g94<0,1,0>UD                    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
shl(1)          a0<1>UD         g84<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g86<2>D         g[a0 192]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g86.1<2>D       g[a0 196]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g90.1<2>D       g86.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g90<2>D         g86<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g6<1>UD         f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g95UD    g90UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $5 };
mov(1)          f0<1>UD         g6<0,1,0>UD                     { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
shl(1)          a0<1>UD         g84<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g87<2>D         g[a0]<0,1,0>D                   { align1 WE_all 1N A@1 };
mov(1)          g87.1<2>D       g[a0 4]<0,1,0>D                 { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g91.1<2>D       g87.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g91<2>D         g87<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g91UD           g95UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g88<1>D         g55<1,1,0>D     64D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g90<1>UD        g88<1,1,0>UD    0x00000006UD    { align1 1H compacted };
add(16)         g107<1>D        g2<0,1,0>D      g88<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g92<1>D         g90<8,8,1>D     0x00000003UD    { align1 1H };
mov(8)          g113<2>UD       g107<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g115<2>UD       g108<4,4,1>UD                   { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g94<1>D         g2.2<0,1,0>D    g92<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g117<2>UD       g94<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g119<2>UD       g95<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g96<1>UD        g94<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g109<1>UD       g107<1,1,0>UD   g2<0,1,0>UD     { align1 1H compacted };
add(16)         g98<1>D         -g96<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@2 compacted };
add(16)         g111<1>D        -g109<1,1,0>D   g2.1<0,1,0>D    { align1 1H I@2 compacted };
mov(8)          g117.1<2>UD     g98<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g119.1<2>UD     g99<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g113.1<2>UD     g111<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g115.1<2>UD     g112<4,4,1>UD                   { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g99UD           g117UD          nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
mov(8)          g103<2>UD       g99<4,4,1>UD                    { align1 1Q $7.dst };
mov(8)          g105<2>UD       g100<4,4,1>UD                   { align1 2Q $7.dst };
mov(8)          g103.1<2>UD     g101<4,4,1>UD                   { align1 1Q @2 $7.dst };
mov(8)          g105.1<2>UD     g102<4,4,1>UD                   { align1 2Q @2 $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shl(1)          a0<1>UD         g84<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000c00UD    { align1 WE_all 1N A@1 };
mov(1)          g117<2>D        g[a0 224]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g117.1<2>D      g[a0 228]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g121.1<2>D      g117.1<0,1,0>D                  { align1 WE_all 1Q I@1 };
mov(8)          g121<2>D        g117<0,1,0>D                    { align1 WE_all 1Q I@1 };
mov(1)          g5<1>UD         f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g7UD     g121UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $8 };
mov(1)          f0<1>UD         g5<0,1,0>UD                     { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
shl(1)          a0<1>UD         g84<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000e00UD    { align1 WE_all 1N A@1 };
mov(1)          g118<2>D        g[a0 32]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g118.1<2>D      g[a0 36]<0,1,0>D                { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g122.1<2>D      g118.1<0,1,0>D                  { align1 WE_all 1Q I@2 };
mov(8)          g122<2>D        g118<0,1,0>D                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g122UD          g7UD            0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g119<1>D        g55<1,1,0>D     128D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g121<1>UD       g119<1,1,0>UD   0x00000006UD    { align1 1H compacted };
add(16)         g18<1>D         g2<0,1,0>D      g119<1,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g123<1>D        g121<8,8,1>D    0x00000003UD    { align1 1H };
mov(8)          g24<2>UD        g18<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g26<2>UD        g19<4,4,1>UD                    { align1 2Q I@3 };
add(16)         g125<1>D        g2.2<0,1,0>D    g123<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g28<2>UD        g125<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g30<2>UD        g126<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
cmp.l.f0.0(16)  g7<1>UD         g125<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g3<1>UD         g18<1,1,0>UD    g2<0,1,0>UD     { align1 1H compacted };
add(16)         g9<1>D          -g7<1,1,0>D     g2.3<0,1,0>D    { align1 1H I@2 compacted };
add(16)         g22<1>D         -g3<1,1,0>D     g2.1<0,1,0>D    { align1 1H I@2 compacted };
mov(8)          g28.1<2>UD      g9<4,4,1>UD                     { align1 1Q I@2 };
mov(8)          g30.1<2>UD      g10<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g24.1<2>UD      g22<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g26.1<2>UD      g23<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g10UD           g28UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
mov(8)          g14<2>UD        g10<4,4,1>UD                    { align1 1Q $10.dst };
mov(8)          g16<2>UD        g11<4,4,1>UD                    { align1 2Q $10.dst };
mov(8)          g14.1<2>UD      g12<4,4,1>UD                    { align1 1Q @2 $10.dst };
mov(8)          g16.1<2>UD      g13<4,4,1>UD                    { align1 2Q @2 $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
shl(1)          a0<1>UD         g84<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g28<2>D         g[a0 448]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g28.1<2>D       g[a0 452]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g32.1<2>D       g28.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g32<2>D         g28<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g73<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g37UD    g32UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $11 };
mov(1)          f0<1>UD         g73<0,1,0>UD                    { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
shl(1)          a0<1>UD         g84<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g29<2>D         g[a0 256]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g29.1<2>D       g[a0 260]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g33.1<2>D       g29.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g33<2>D         g29<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g33UD           g37UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g30<1>D         g55<1,1,0>D     192D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g32<1>UD        g30<1,1,0>UD    0x00000006UD    { align1 1H compacted };
add(16)         g49<1>D         g2<0,1,0>D      g30<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g34<1>D         g32<8,8,1>D     0x00000003UD    { align1 1H };
mov(8)          g57<2>UD        g49<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g59<2>UD        g50<4,4,1>UD                    { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g36<1>D         g2.2<0,1,0>D    g34<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g61<2>UD        g36<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g63<2>UD        g37<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
cmp.l.f0.0(16)  g38<1>UD        g36<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g51<1>UD        g49<1,1,0>UD    g2<0,1,0>UD     { align1 1H compacted };
add(16)         g40<1>D         -g38<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@2 compacted };
add(16)         g55<1>D         -g51<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@2 compacted };
mov(8)          g61.1<2>UD      g40<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g63.1<2>UD      g41<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g57.1<2>UD      g55<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g59.1<2>UD      g56<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g41UD           g61UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $13 };
mov(8)          g45<2>UD        g41<4,4,1>UD                    { align1 1Q $13.dst };
mov(8)          g47<2>UD        g42<4,4,1>UD                    { align1 2Q $13.dst };
mov(8)          g45.1<2>UD      g43<4,4,1>UD                    { align1 1Q @2 $13.dst };
mov(8)          g47.1<2>UD      g44<4,4,1>UD                    { align1 2Q @2 $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
shl(1)          a0<1>UD         g84<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000400UD    { align1 WE_all 1N A@1 };
mov(1)          g61<2>D         g[a0 416]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g61.1<2>D       g[a0 420]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g65.1<2>D       g61.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g65<2>D         g61<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g72<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g70UD    g65UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $14 };
mov(1)          f0<1>UD         g72<0,1,0>UD                    { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
shl(1)          a0<1>UD         g84<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g62<2>D         g[a0 288]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g62.1<2>D       g[a0 292]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g66.1<2>D       g62.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g66<2>D         g62<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g66UD           g70UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $3 };
add3(16)        g20<1>D         0x0003UW        g74<8,8,1>D     g20<1,1,1>D { align1 1H };

LABEL2:
while(16)       JIP:  LABEL3                                    { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_instance_ptrs_code[] = {
    0x80000065, 0x5f058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x3f050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa005f0c, 0x00340000,
    0x00041961, 0x14050220, 0x00463f05, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xe04a0068, 0x0081025b, 0x00040065, 0x07058220,
    0x02000284, 0xffffff00, 0x00041a52, 0x0f044560,
    0x0e8efffe, 0x3f054a05, 0xa0091a40, 0x0721025a,
    0x00041a61, 0x11052660, 0x00460f05, 0x00000000,
    0x00041a65, 0x0b058220, 0x02460905, 0xffffffc0,
    0xe00d1968, 0x00600b03, 0x00041970, 0x00010220,
    0x52461105, 0x00460d05, 0x01040022, 0x0001c060,
    0x000002f0, 0x000002f0, 0x00040069, 0x1205a660,
    0x02460f05, 0x00000006, 0xa0031940, 0x12000702,
    0xe0161968, 0x00600303, 0xa0270040, 0x03010202,
    0x00041a69, 0x18058660, 0x02461605, 0x00000003,
    0x00031a61, 0x2d060220, 0x00342705, 0x00000000,
    0x00131b61, 0x2f060220, 0x00342805, 0x00000000,
    0xa01a1b40, 0x18010242, 0x271c1970, 0x02101a2b,
    0x00030061, 0x40060220, 0x00341a05, 0x00000000,
    0x00130061, 0x42060220, 0x00341b05, 0x00000000,
    0x27290070, 0x02102703, 0xa01e1c40, 0x02121c1a,
    0xa02b1a40, 0x02122912, 0x00031a61, 0x40260220,
    0x00341e05, 0x00000000, 0x00131b61, 0x42260220,
    0x00341f05, 0x00000000, 0x00031b61, 0x2d260220,
    0x00342b05, 0x00000000, 0x00131c61, 0x2f260220,
    0x00342c05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x1f240000,
    0xfb044024, 0x000c0000, 0x00032161, 0x23060220,
    0x00341f05, 0x00000000, 0x00132161, 0x25060220,
    0x00342005, 0x00000000, 0x0003a161, 0x23260220,
    0x00342105, 0x00000000, 0x0013a161, 0x25260220,
    0x00342205, 0x00000000, 0xe24d0961, 0x00114004,
    0x80000965, 0x4d058220, 0x02004d04, 0xffffffff,
    0x8000194c, 0x31050220, 0x00004d04, 0x00000000,
    0x80001969, 0x10018220, 0x02003104, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000400,
    0x80000961, 0x33060660, 0x00010180, 0x00000000,
    0x80000061, 0x33260660, 0x00010190, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x41260660, 0x00003324, 0x00000000,
    0x80031961, 0x41060660, 0x00003304, 0x00000000,
    0xe24c0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004231, 0x46140000,
    0xfb00410c, 0x00340000, 0x80001a61, 0x30010220,
    0x00004c04, 0x00000000, 0x80001e69, 0x10018220,
    0x02003104, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000400, 0x80000961, 0x34060660,
    0x00010680, 0x00000000, 0x80000061, 0x34260660,
    0x00010690, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x42260660,
    0x00003424, 0x00000000, 0x80031961, 0x42060660,
    0x00003404, 0x00000000, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004331, 0x00000000,
    0xfb08420c, 0x00344614, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0xe0350068, 0x00800703,
    0x00041970, 0x00010220, 0x42461405, 0x00463505,
    0x01040028, 0x0001c660, 0x00000c40, 0x00000c40,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x37058660, 0x02461405, 0x00000008,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xe0391968, 0x00603703, 0xa0050040, 0x37010202,
    0x00041a69, 0x3b058660, 0x02463905, 0x00000003,
    0x00031a61, 0x50060220, 0x00340505, 0x00000000,
    0x00131b61, 0x52060220, 0x00340605, 0x00000000,
    0xa03d1b40, 0x3b010242, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x273f0070, 0x02103d2b,
    0x00030061, 0x56060220, 0x00343d05, 0x00000000,
    0x00130061, 0x58060220, 0x00343e05, 0x00000000,
    0x274c0070, 0x02100503, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0410040, 0x02123f1a,
    0xa04e1a40, 0x02124c12, 0x00031a61, 0x56260220,
    0x00344105, 0x00000000, 0x00131b61, 0x58260220,
    0x00344205, 0x00000000, 0x00031b61, 0x50260220,
    0x00344e05, 0x00000000, 0x00131c61, 0x52260220,
    0x00344f05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x42240000,
    0xfb045624, 0x000c0000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00032461, 0x46060220,
    0x00344205, 0x00000000, 0x00132461, 0x48060220,
    0x00344305, 0x00000000, 0x0003a461, 0x46260220,
    0x00344405, 0x00000000, 0x0013a461, 0x48260220,
    0x00344505, 0x00000000, 0xe25e0961, 0x00114004,
    0x80000965, 0x5e058220, 0x02005e04, 0xffffffff,
    0x8000194c, 0x54050220, 0x00005e04, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02005404, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000800,
    0x80000961, 0x56060660, 0x00010300, 0x00000000,
    0x80000061, 0x56260660, 0x00010310, 0x00000000,
    0x80031961, 0x5a260660, 0x00005624, 0x00000000,
    0x80031961, 0x5a060660, 0x00005604, 0x00000000,
    0xe2060061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004531, 0x5f140000,
    0xfb005a0c, 0x00340000, 0x80001a61, 0x30010220,
    0x00000604, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80001e69, 0x10018220,
    0x02005404, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000a00, 0x80000961, 0x57060660,
    0x00010000, 0x00000000, 0x80000061, 0x57260660,
    0x00010010, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x5b260660,
    0x00005724, 0x00000000, 0x80031961, 0x5b060660,
    0x00005704, 0x00000000, 0x80002501, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004631, 0x00000000,
    0xfb085b0c, 0x00345f14, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0580040, 0x04003703,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe05a0068, 0x00605803, 0xa06b0040, 0x58010202,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x5c058660, 0x02465a05, 0x00000003,
    0x00031a61, 0x71060220, 0x00346b05, 0x00000000,
    0x00131b61, 0x73060220, 0x00346c05, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa05e1b40, 0x5c010242, 0x00031961, 0x75060220,
    0x00345e05, 0x00000000, 0x00131a61, 0x77060220,
    0x00345f05, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x27600070, 0x02105e2b,
    0x276d0070, 0x02106b03, 0xa0621a40, 0x0212601a,
    0xa06f1a40, 0x02126d12, 0x00031a61, 0x75260220,
    0x00346205, 0x00000000, 0x00131b61, 0x77260220,
    0x00346305, 0x00000000, 0x00031b61, 0x71260220,
    0x00346f05, 0x00000000, 0x00131c61, 0x73260220,
    0x00347005, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x63240000,
    0xfb047524, 0x000c0000, 0x00032761, 0x67060220,
    0x00346305, 0x00000000, 0x00132761, 0x69060220,
    0x00346405, 0x00000000, 0x0003a761, 0x67260220,
    0x00346505, 0x00000000, 0x0013a761, 0x69260220,
    0x00346605, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80001969, 0x10018220,
    0x02005404, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000c00, 0x80000961, 0x75060660,
    0x00010380, 0x00000000, 0x80000061, 0x75260660,
    0x00010390, 0x00000000, 0x80031961, 0x79260660,
    0x00007524, 0x00000000, 0x80031961, 0x79060660,
    0x00007504, 0x00000000, 0xe2050061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004831, 0x07140000, 0xfb00790c, 0x00340000,
    0x80001a61, 0x30010220, 0x00000504, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80001e69, 0x10018220, 0x02005404, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000e00,
    0x80000961, 0x76060660, 0x00010080, 0x00000000,
    0x80000061, 0x76260660, 0x00010090, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80031a61, 0x7a260660, 0x00007624, 0x00000000,
    0x80031961, 0x7a060660, 0x00007604, 0x00000000,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004931, 0x00000000, 0xfb087a0c, 0x00340714,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0xa0770040, 0x08003703, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xe0790068, 0x00607703,
    0xa0120040, 0x77010202, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x7b058660,
    0x02467905, 0x00000003, 0x00031a61, 0x18060220,
    0x00341205, 0x00000000, 0x00131b61, 0x1a060220,
    0x00341305, 0x00000000, 0xa07d1b40, 0x7b010242,
    0x00031961, 0x1c060220, 0x00347d05, 0x00000000,
    0x00131a61, 0x1e060220, 0x00347e05, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x27070070, 0x02107d2b, 0x27030070, 0x02101203,
    0xa0091a40, 0x0212071a, 0xa0161a40, 0x02120312,
    0x00031a61, 0x1c260220, 0x00340905, 0x00000000,
    0x00131b61, 0x1e260220, 0x00340a05, 0x00000000,
    0x00031b61, 0x18260220, 0x00341605, 0x00000000,
    0x00131c61, 0x1a260220, 0x00341705, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044a31, 0x0a240000, 0xfb041c24, 0x000c0000,
    0x00032a61, 0x0e060220, 0x00340a05, 0x00000000,
    0x00132a61, 0x10060220, 0x00340b05, 0x00000000,
    0x0003aa61, 0x0e260220, 0x00340c05, 0x00000000,
    0x0013aa61, 0x10260220, 0x00340d05, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02005404, 0x00000003,
    0x80000961, 0x1c060660, 0x00010700, 0x00000000,
    0x80000061, 0x1c260660, 0x00010710, 0x00000000,
    0x80031961, 0x20260660, 0x00001c24, 0x00000000,
    0x80031961, 0x20060660, 0x00001c04, 0x00000000,
    0xe2490061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004b31, 0x25140000,
    0xfb00200c, 0x00340000, 0x80001a61, 0x30010220,
    0x00004904, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001e69, 0x10018220,
    0x02005404, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x1d060660,
    0x00010400, 0x00000000, 0x80000061, 0x1d260660,
    0x00010410, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x21260660,
    0x00001d24, 0x00000000, 0x80031961, 0x21060660,
    0x00001d04, 0x00000000, 0x80002b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004c31, 0x00000000,
    0xfb08210c, 0x00342514, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa01e0040, 0x0c003703,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe0200068, 0x00601e03, 0xa0310040, 0x1e010202,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x22058660, 0x02462005, 0x00000003,
    0x00031a61, 0x39060220, 0x00343105, 0x00000000,
    0x00131b61, 0x3b060220, 0x00343205, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0xa0241b40, 0x22010242, 0x00031961, 0x3d060220,
    0x00342405, 0x00000000, 0x00131a61, 0x3f060220,
    0x00342505, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x27260070, 0x0210242b,
    0x27330070, 0x02103103, 0xa0281a40, 0x0212261a,
    0xa0371a40, 0x02123312, 0x00031a61, 0x3d260220,
    0x00342805, 0x00000000, 0x00131b61, 0x3f260220,
    0x00342905, 0x00000000, 0x00031b61, 0x39260220,
    0x00343705, 0x00000000, 0x00131c61, 0x3b260220,
    0x00343805, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044d31, 0x29240000,
    0xfb043d24, 0x000c0000, 0x00032d61, 0x2d060220,
    0x00342905, 0x00000000, 0x00132d61, 0x2f060220,
    0x00342a05, 0x00000000, 0x0003ad61, 0x2d260220,
    0x00342b05, 0x00000000, 0x0013ad61, 0x2f260220,
    0x00342c05, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001969, 0x10018220,
    0x02005404, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000400, 0x80000961, 0x3d060660,
    0x00010680, 0x00000000, 0x80000061, 0x3d260660,
    0x00010690, 0x00000000, 0x80031961, 0x41260660,
    0x00003d24, 0x00000000, 0x80031961, 0x41060660,
    0x00003d04, 0x00000000, 0xe2480061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004e31, 0x46140000, 0xfb00410c, 0x00340000,
    0x80001a61, 0x30010220, 0x00004804, 0x00000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001e69, 0x10018220, 0x02005404, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000600,
    0x80000961, 0x3e060660, 0x00010480, 0x00000000,
    0x80000061, 0x3e260660, 0x00010490, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80031a61, 0x42260660, 0x00003e24, 0x00000000,
    0x80031961, 0x42060660, 0x00003e04, 0x00000000,
    0x80002e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004331, 0x00000000, 0xfb08420c, 0x00344614,
    0x00040052, 0x14044160, 0x0e0e0003, 0x14054a05,
    0x00040027, 0x00014060, 0x00000000, 0xfffff3b0,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_misc_copy_instance_ptrs = {
   .prog_data = {
      .base.nr_params = 14,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 4192,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_misc_copy_instance_ptrs_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_misc_copy_instance_ptrs_printfs,
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
   .args = gfx125_misc_copy_instance_ptrs_args,
   .code = gfx125_misc_copy_instance_ptrs_code,
};
const char *gfx125_misc_copy_instance_ptrs_sha1 = "cdf711dc8ba01523e77a4542c82fd54eec30ea7b";

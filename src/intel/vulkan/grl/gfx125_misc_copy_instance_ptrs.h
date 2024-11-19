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

and(1)          g12<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g95<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g12UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(16)         g24<1>UD        g95<8,8,1>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
shr(16)         g5<1>UD         g2.4<0,1,0>UD   0x00000008UD    { align1 1H compacted };
and(16)         g7<1>UD         g2.4<0,1,0>UD   0xffffff00UD    { align1 1H };
add3(16)        g15<1>D         65534W          -g5<8,8,1>D     g95<1,1,1>D { align1 1H I@2 };
add(16)         g9<1>D          g2.4<0,1,0>D    -g7<1,1,0>D     { align1 1H I@2 compacted };
mov(16)         g17<1>D         -g15<8,8,1>D                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
and(16)         g11<1>UD        g9<8,8,1>UD     0xffffffc0UD    { align1 1H I@2 };
shr(16)         g13<1>UD        g11<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g17<8,8,1>UD    g13<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g18<1>D         -g15<8,8,1>D    0x00000006UD    { align1 1H };
add(16)         g20<1>D         g7<1,1,0>D      g18<1,1,0>D     { align1 1H I@1 compacted };
shr(16)         g22<1>UD        g20<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
add(16)         g44<1>D         g2<0,1,0>D      g20<1,1,0>D     { align1 1H compacted };
shl(16)         g3<1>D          g22<8,8,1>D     0x00000003UD    { align1 1H I@2 };
mov(8)          g50<2>UD        g44<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g52<2>UD        g45<4,4,1>UD                    { align1 2Q I@3 };
add(16)         g26<1>D         g2.2<0,1,0>D    g3<1,1,0>D      { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g28<1>UD        g26<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g32<2>UD        g26<4,4,1>UD                    { align1 1Q };
mov(8)          g34<2>UD        g27<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g46<1>UD        g44<1,1,0>UD    g2<0,1,0>UD     { align1 1H compacted };
add(16)         g30<1>D         -g28<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@4 compacted };
add(16)         g48<1>D         -g46<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@2 compacted };
mov(8)          g32.1<2>UD      g30<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g34.1<2>UD      g31<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g50.1<2>UD      g48<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g52.1<2>UD      g49<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g36UD           g32UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(8)          g40<2>UD        g36<4,4,1>UD                    { align1 1Q $1.dst };
mov(8)          g42<2>UD        g37<4,4,1>UD                    { align1 2Q $1.dst };
mov(8)          g40.1<2>UD      g38<4,4,1>UD                    { align1 1Q @2 $1.dst };
mov(8)          g42.1<2>UD      g39<4,4,1>UD                    { align1 2Q @2 $1.dst };
mov(1)          g10<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g10<1>UD        g10<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g56<1>UD        g10<0,1,0>UD                    { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g56<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000400UD    { align1 WE_all 1N A@1 };
mov(1)          g58<2>D         g[a0 256]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g58.1<2>D       g[a0 260]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g96.1<2>D       g58.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g96<2>D         g58<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g9<1>UD         f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g54UD    g96UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $2 };
mov(1)          f0<1>UD         g9<0,1,0>UD                     { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g56<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g59<2>D         g[a0 64]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g59.1<2>D       g[a0 68]<0,1,0>D                { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g97.1<2>D       g59.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g97<2>D         g59<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g97UD           g54UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $3 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shr(16)         g60<1>UD        g7<1,1,0>UD     0x00000008UD    { align1 1H compacted };

LABEL3:
cmp.ge.f0.0(16) null<1>UD       g24<8,8,1>UD    g60<8,8,1>UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL2        UIP:  LABEL2              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
shl(16)         g62<1>D         g24<8,8,1>D     0x00000008UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
shr(16)         g64<1>UD        g62<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
add(16)         g86<1>D         g2<0,1,0>D      g62<1,1,0>D     { align1 1H compacted };
shl(16)         g66<1>D         g64<8,8,1>D     0x00000003UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g92<2>UD        g86<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@3 };
mov(8)          g94<2>UD        g87<4,4,1>UD                    { align1 2Q };
add(16)         g68<1>D         g2.2<0,1,0>D    g66<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g70<1>UD        g68<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g74<2>UD        g68<4,4,1>UD                    { align1 1Q };
mov(8)          g76<2>UD        g69<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g88<1>UD        g86<1,1,0>UD    g2<0,1,0>UD     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g72<1>D         -g70<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@4 compacted };
add(16)         g90<1>D         -g88<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@2 compacted };
mov(8)          g74.1<2>UD      g72<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g76.1<2>UD      g73<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g92.1<2>UD      g90<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g94.1<2>UD      g91<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g78UD           g74UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
mov(8)          g82<2>UD        g78<4,4,1>UD                    { align1 1Q $6.dst };
mov(8)          g84<2>UD        g79<4,4,1>UD                    { align1 2Q $6.dst };
mov(8)          g82.1<2>UD      g80<4,4,1>UD                    { align1 1Q @2 $6.dst };
mov(8)          g84.1<2>UD      g81<4,4,1>UD                    { align1 2Q @2 $6.dst };
mov(1)          g11<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g11<1>UD        g11<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g98<1>UD        g11<0,1,0>UD                    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
shl(1)          a0<1>UD         g98<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g100<2>D        g[a0 64]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g100.1<2>D      g[a0 68]<0,1,0>D                { align1 WE_all 1N };
mov(8)          g104.1<2>D      g100.1<0,1,0>D                  { align1 WE_all 1Q I@1 };
mov(8)          g104<2>D        g100<0,1,0>D                    { align1 WE_all 1Q I@1 };
mov(1)          g7<1>UD         f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g96UD    g104UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $8 };
mov(1)          f0<1>UD         g7<0,1,0>UD                     { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
shl(1)          a0<1>UD         g98<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g101<2>D        g[a0 384]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g101.1<2>D      g[a0 388]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g105.1<2>D      g101.1<0,1,0>D                  { align1 WE_all 1Q I@2 };
mov(8)          g105<2>D        g101<0,1,0>D                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g105UD          g96UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g102<1>D        g62<1,1,0>D     64D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g104<1>UD       g102<1,1,0>UD   0x00000006UD    { align1 1H compacted };
add(16)         g126<1>D        g2<0,1,0>D      g102<1,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g106<1>D        g104<8,8,1>D    0x00000003UD    { align1 1H };
mov(8)          g11<2>UD        g126<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g13<2>UD        g127<4,4,1>UD                   { align1 2Q I@3 };
add(16)         g108<1>D        g2.2<0,1,0>D    g106<1,1,0>D    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(8)          g114<2>UD       g108<4,4,1>UD                   { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $10.src };
mov(8)          g116<2>UD       g109<4,4,1>UD                   { align1 2Q I@2 };
cmp.l.f0.0(16)  g110<1>UD       g108<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g7<1>UD         g126<1,1,0>UD   g2<0,1,0>UD     { align1 1H compacted };
add(16)         g112<1>D        -g110<1,1,0>D   g2.3<0,1,0>D    { align1 1H I@2 compacted };
add(16)         g9<1>D          -g7<1,1,0>D     g2.1<0,1,0>D    { align1 1H I@2 compacted };
mov(8)          g114.1<2>UD     g112<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g116.1<2>UD     g113<4,4,1>UD                   { align1 2Q I@3 };
mov(8)          g11.1<2>UD      g9<4,4,1>UD                     { align1 1Q I@3 };
mov(8)          g13.1<2>UD      g10<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g118UD          g114UD          nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
mov(8)          g122<2>UD       g118<4,4,1>UD                   { align1 1Q $10.dst };
mov(8)          g124<2>UD       g119<4,4,1>UD                   { align1 2Q $10.dst };
mov(8)          g122.1<2>UD     g120<4,4,1>UD                   { align1 1Q @2 $10.dst };
mov(8)          g124.1<2>UD     g121<4,4,1>UD                   { align1 2Q @2 $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
shl(1)          a0<1>UD         g98<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000e00UD    { align1 WE_all 1N A@1 };
mov(1)          g16<2>D         g[a0 320]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g16.1<2>D       g[a0 324]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g20.1<2>D       g16.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g20<2>D         g16<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g1<1>UD         f0<0,1,0>UD                     { align1 WE_all 1N $0.dst compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g15UD    g20UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $12 };
mov(1)          f0<1>UD         g1<0,1,0>UD                     { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
shl(1)          a0<1>UD         g98<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
mov(1)          g17<2>D         g[a0 352]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g17.1<2>D       g[a0 356]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g21.1<2>D       g17.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g21<2>D         g17<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g21UD           g15UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g18<1>D         g62<1,1,0>D     128D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g20<1>UD        g18<1,1,0>UD    0x00000006UD    { align1 1H compacted };
add(16)         g42<1>D         g2<0,1,0>D      g18<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g22<1>D         g20<8,8,1>D     0x00000003UD    { align1 1H };
mov(8)          g48<2>UD        g42<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g50<2>UD        g43<4,4,1>UD                    { align1 2Q I@3 };
add(16)         g3<1>D          g2.2<0,1,0>D    g22<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g30<2>UD        g3<4,4,1>UD                     { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g32<2>UD        g4<4,4,1>UD                     { align1 2Q I@2 };
cmp.l.f0.0(16)  g26<1>UD        g3<1,1,0>UD     g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g44<1>UD        g42<1,1,0>UD    g2<0,1,0>UD     { align1 1H compacted };
add(16)         g28<1>D         -g26<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@2 compacted };
add(16)         g46<1>D         -g44<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@2 compacted };
mov(8)          g30.1<2>UD      g28<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g32.1<2>UD      g29<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g48.1<2>UD      g46<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g50.1<2>UD      g47<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g34UD           g30UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(8)          g38<2>UD        g34<4,4,1>UD                    { align1 1Q $1.dst };
mov(8)          g40<2>UD        g35<4,4,1>UD                    { align1 2Q $1.dst };
mov(8)          g38.1<2>UD      g36<4,4,1>UD                    { align1 1Q @2 $1.dst };
mov(8)          g40.1<2>UD      g37<4,4,1>UD                    { align1 2Q @2 $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
shl(1)          a0<1>UD         g98<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000400UD    { align1 WE_all 1N A@1 };
mov(1)          g53<2>D         g[a0 192]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g53.1<2>D       g[a0 196]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g64.1<2>D       g53.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g64<2>D         g53<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g105<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g52UD    g64UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $14 };
mov(1)          f0<1>UD         g105<0,1,0>UD                   { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g98<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g54<2>D         g[a0]<0,1,0>D                   { align1 WE_all 1N A@1 };
mov(1)          g54.1<2>D       g[a0 4]<0,1,0>D                 { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g65.1<2>D       g54.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g65<2>D         g54<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g65UD           g52UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g55<1>D         g62<1,1,0>D     192D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g57<1>UD        g55<1,1,0>UD    0x00000006UD    { align1 1H compacted };
add(16)         g82<1>D         g2<0,1,0>D      g55<1,1,0>D     { align1 1H compacted };
shl(16)         g62<1>D         g57<8,8,1>D     0x00000003UD    { align1 1H I@2 };
mov(8)          g88<2>UD        g82<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g90<2>UD        g83<4,4,1>UD                    { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g64<1>D         g2.2<0,1,0>D    g62<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g70<2>UD        g64<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g72<2>UD        g65<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
cmp.l.f0.0(16)  g66<1>UD        g64<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g84<1>UD        g82<1,1,0>UD    g2<0,1,0>UD     { align1 1H compacted };
add(16)         g68<1>D         -g66<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@2 compacted };
add(16)         g86<1>D         -g84<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@2 compacted };
mov(8)          g70.1<2>UD      g68<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g72.1<2>UD      g69<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g88.1<2>UD      g86<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g90.1<2>UD      g87<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g74UD           g70UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mov(8)          g78<2>UD        g74<4,4,1>UD                    { align1 1Q $5.dst };
mov(8)          g80<2>UD        g75<4,4,1>UD                    { align1 2Q $5.dst };
mov(8)          g78.1<2>UD      g76<4,4,1>UD                    { align1 1Q @2 $5.dst };
mov(8)          g80.1<2>UD      g77<4,4,1>UD                    { align1 2Q @2 $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
shl(1)          a0<1>UD         g98<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g93<2>D         g[a0 448]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g93.1<2>D       g[a0 452]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g100.1<2>D      g93.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g100<2>D        g93<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g104<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g92UD    g100UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $7 };
mov(1)          f0<1>UD         g104<0,1,0>UD                   { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
shl(1)          a0<1>UD         g98<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g94<2>D         g[a0 256]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g94.1<2>D       g[a0 260]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g101.1<2>D      g94.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g101<2>D        g94<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g101UD          g92UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $4 };
add3(16)        g24<1>D         0x0003UW        g5<8,8,1>D      g24<1,1,1>D { align1 1H };

LABEL2:
while(16)       JIP:  LABEL3                                    { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_instance_ptrs_code[] = {
    0x80000065, 0x0c058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x5f050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa000c0c, 0x00340000,
    0x00041961, 0x18050220, 0x00465f05, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xe0050068, 0x0081025b, 0x00040065, 0x07058220,
    0x02000284, 0xffffff00, 0x00041a52, 0x0f044560,
    0x0e8efffe, 0x5f050505, 0xa0091a40, 0x0721025a,
    0x00041a61, 0x11052660, 0x00460f05, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00041a65, 0x0b058220, 0x02460905, 0xffffffc0,
    0xe00d1968, 0x00600b03, 0x00041970, 0x00010220,
    0x52461105, 0x00460d05, 0x01040022, 0x0001c060,
    0x000002c0, 0x000002c0, 0x00040069, 0x1205a660,
    0x02460f05, 0x00000006, 0xa0141940, 0x12000702,
    0xe0161968, 0x00601403, 0xa02c0040, 0x14010202,
    0x00041a69, 0x03058660, 0x02461605, 0x00000003,
    0x00031a61, 0x32060220, 0x00342c05, 0x00000000,
    0x00131b61, 0x34060220, 0x00342d05, 0x00000000,
    0xa01a1b40, 0x03010242, 0x271c1970, 0x02101a2b,
    0x00030061, 0x20060220, 0x00341a05, 0x00000000,
    0x00130061, 0x22060220, 0x00341b05, 0x00000000,
    0x272e0070, 0x02102c03, 0xa01e1c40, 0x02121c1a,
    0xa0301a40, 0x02122e12, 0x00031a61, 0x20260220,
    0x00341e05, 0x00000000, 0x00131b61, 0x22260220,
    0x00341f05, 0x00000000, 0x00031b61, 0x32260220,
    0x00343005, 0x00000000, 0x00131c61, 0x34260220,
    0x00343105, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x24240000,
    0xfb002024, 0x00040000, 0x00032161, 0x28060220,
    0x00342405, 0x00000000, 0x00132161, 0x2a060220,
    0x00342505, 0x00000000, 0x0003a161, 0x28260220,
    0x00342605, 0x00000000, 0x0013a161, 0x2a260220,
    0x00342705, 0x00000000, 0xe20a0961, 0x00114004,
    0x80000965, 0x0a058220, 0x02000a04, 0xffffffff,
    0x8000194c, 0x38050220, 0x00000a04, 0x00000000,
    0x80001969, 0x10018220, 0x02003804, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000400,
    0x80000961, 0x3a060660, 0x00010400, 0x00000000,
    0x80000061, 0x3a260660, 0x00010410, 0x00000000,
    0x80031961, 0x60260660, 0x00003a24, 0x00000000,
    0x80031961, 0x60060660, 0x00003a04, 0x00000000,
    0xe2090061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004231, 0x36140000,
    0xfb00600c, 0x00340000, 0x80001a61, 0x30010220,
    0x00000904, 0x00000000, 0x80001e69, 0x10018220,
    0x02003804, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000600, 0x80000961, 0x3b060660,
    0x00010100, 0x00000000, 0x80000061, 0x3b260660,
    0x00010110, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x61260660,
    0x00003b24, 0x00000000, 0x80031961, 0x61060660,
    0x00003b04, 0x00000000, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004331, 0x00000000,
    0xfb08610c, 0x00343614, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0xe03c0068, 0x00800703,
    0x00041970, 0x00010220, 0x42461805, 0x00463c05,
    0x01040028, 0x0001c660, 0x00000c80, 0x00000c80,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x3e058660, 0x02461805, 0x00000008,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0xe0401968, 0x00603e03, 0xa0560040, 0x3e010202,
    0x00041a69, 0x42058660, 0x02464005, 0x00000003,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00031a61, 0x5c060220, 0x00345605, 0x00000000,
    0x80101b01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x5e060220, 0x00345705, 0x00000000,
    0xa0441b40, 0x42010242, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x27461970, 0x0210442b,
    0x00030061, 0x4a060220, 0x00344405, 0x00000000,
    0x00130061, 0x4c060220, 0x00344505, 0x00000000,
    0x27580070, 0x02105603, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa0481c40, 0x0212461a,
    0xa05a1a40, 0x02125812, 0x00031a61, 0x4a260220,
    0x00344805, 0x00000000, 0x00131b61, 0x4c260220,
    0x00344905, 0x00000000, 0x00031b61, 0x5c260220,
    0x00345a05, 0x00000000, 0x00131c61, 0x5e260220,
    0x00345b05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x4e240000,
    0xfb004a24, 0x00040000, 0x00032661, 0x52060220,
    0x00344e05, 0x00000000, 0x00132661, 0x54060220,
    0x00344f05, 0x00000000, 0x0003a661, 0x52260220,
    0x00345005, 0x00000000, 0x0013a661, 0x54260220,
    0x00345105, 0x00000000, 0xe20b0961, 0x00114004,
    0x80000965, 0x0b058220, 0x02000b04, 0xffffffff,
    0x8000194c, 0x62050220, 0x00000b04, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02006204, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000a00,
    0x80000961, 0x64060660, 0x00010100, 0x00000000,
    0x80000061, 0x64260660, 0x00010110, 0x00000000,
    0x80031961, 0x68260660, 0x00006424, 0x00000000,
    0x80031961, 0x68060660, 0x00006404, 0x00000000,
    0xe2070061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004831, 0x60140000,
    0xfb00680c, 0x00340000, 0x80001a61, 0x30010220,
    0x00000704, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001e69, 0x10018220,
    0x02006204, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000a00, 0x80000961, 0x65060660,
    0x00010600, 0x00000000, 0x80000061, 0x65260660,
    0x00010610, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x69260660,
    0x00006524, 0x00000000, 0x80031961, 0x69060660,
    0x00006504, 0x00000000, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004931, 0x00000000,
    0xfb08690c, 0x00346014, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0660040, 0x04003e03,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe0680068, 0x00606603, 0xa07e0040, 0x66010202,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x6a058660, 0x02466805, 0x00000003,
    0x00031a61, 0x0b060220, 0x00347e05, 0x00000000,
    0x00131b61, 0x0d060220, 0x00347f05, 0x00000000,
    0xa06c1b40, 0x6a010242, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x72060220,
    0x00346c05, 0x00000000, 0x80103a01, 0x00000000,
    0x00000000, 0x00000000, 0x00131a61, 0x74060220,
    0x00346d05, 0x00000000, 0x276e0070, 0x02106c2b,
    0x27070070, 0x02107e03, 0xa0701a40, 0x02126e1a,
    0xa0091a40, 0x02120712, 0x00031a61, 0x72260220,
    0x00347005, 0x00000000, 0x00131b61, 0x74260220,
    0x00347105, 0x00000000, 0x00031b61, 0x0b260220,
    0x00340905, 0x00000000, 0x00131c61, 0x0d260220,
    0x00340a05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044a31, 0x76240000,
    0xfb007224, 0x00040000, 0x00032a61, 0x7a060220,
    0x00347605, 0x00000000, 0x00132a61, 0x7c060220,
    0x00347705, 0x00000000, 0x0003aa61, 0x7a260220,
    0x00347805, 0x00000000, 0x0013aa61, 0x7c260220,
    0x00347905, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001969, 0x10018220,
    0x02006204, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000e00, 0x80000961, 0x10060660,
    0x00010500, 0x00000000, 0x80000061, 0x10260660,
    0x00010510, 0x00000000, 0x80031961, 0x14260660,
    0x00001024, 0x00000000, 0x80031961, 0x14060660,
    0x00001004, 0x00000000, 0xe2012061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004c31, 0x0f140000, 0xfb00140c, 0x00340000,
    0x80001a61, 0x30010220, 0x00000104, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001e69, 0x10018220, 0x02006204, 0x00000003,
    0x80000961, 0x11060660, 0x00010580, 0x00000000,
    0x80000061, 0x11260660, 0x00010590, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80031a61, 0x15260660, 0x00001124, 0x00000000,
    0x80031961, 0x15060660, 0x00001104, 0x00000000,
    0x80002c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004b31, 0x00000000, 0xfb08150c, 0x00340f14,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0xa0120040, 0x08003e03, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xe0140068, 0x00601203,
    0xa02a0040, 0x12010202, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x16058660,
    0x02461405, 0x00000003, 0x00031a61, 0x30060220,
    0x00342a05, 0x00000000, 0x00131b61, 0x32060220,
    0x00342b05, 0x00000000, 0xa0031b40, 0x16010242,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00031961, 0x1e060220, 0x00340305, 0x00000000,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x00131a61, 0x20060220, 0x00340405, 0x00000000,
    0x271a0070, 0x0210032b, 0x272c0070, 0x02102a03,
    0xa01c1a40, 0x02121a1a, 0xa02e1a40, 0x02122c12,
    0x00031a61, 0x1e260220, 0x00341c05, 0x00000000,
    0x00131b61, 0x20260220, 0x00341d05, 0x00000000,
    0x00031b61, 0x30260220, 0x00342e05, 0x00000000,
    0x00131c61, 0x32260220, 0x00342f05, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x22240000, 0xfb001e24, 0x00040000,
    0x00032161, 0x26060220, 0x00342205, 0x00000000,
    0x00132161, 0x28060220, 0x00342305, 0x00000000,
    0x0003a161, 0x26260220, 0x00342405, 0x00000000,
    0x0013a161, 0x28260220, 0x00342505, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02006204, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000400,
    0x80000961, 0x35060660, 0x00010300, 0x00000000,
    0x80000061, 0x35260660, 0x00010310, 0x00000000,
    0x80031961, 0x40260660, 0x00003524, 0x00000000,
    0x80031961, 0x40060660, 0x00003504, 0x00000000,
    0xe2690061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004e31, 0x34140000,
    0xfb00400c, 0x00340000, 0x80001a61, 0x30010220,
    0x00006904, 0x00000000, 0x80001e69, 0x10018220,
    0x02006204, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000600, 0x80000961, 0x36060660,
    0x00010000, 0x00000000, 0x80000061, 0x36260660,
    0x00010010, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x41260660,
    0x00003624, 0x00000000, 0x80031961, 0x41060660,
    0x00003604, 0x00000000, 0x80002e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004d31, 0x00000000,
    0xfb08410c, 0x00343414, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0370040, 0x0c003e03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe0390068, 0x00603703, 0xa0520040, 0x37010202,
    0x00041a69, 0x3e058660, 0x02463905, 0x00000003,
    0x00031a61, 0x58060220, 0x00345205, 0x00000000,
    0x00131b61, 0x5a060220, 0x00345305, 0x00000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0xa0401b40, 0x3e010242, 0x00031961, 0x46060220,
    0x00344005, 0x00000000, 0x00131a61, 0x48060220,
    0x00344105, 0x00000000, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x27420070, 0x0210402b,
    0x27540070, 0x02105203, 0xa0441a40, 0x0212421a,
    0xa0561a40, 0x02125412, 0x00031a61, 0x46260220,
    0x00344405, 0x00000000, 0x00131b61, 0x48260220,
    0x00344505, 0x00000000, 0x00031b61, 0x58260220,
    0x00345605, 0x00000000, 0x00131c61, 0x5a260220,
    0x00345705, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x4a240000,
    0xfb004624, 0x00040000, 0x00032561, 0x4e060220,
    0x00344a05, 0x00000000, 0x00132561, 0x50060220,
    0x00344b05, 0x00000000, 0x0003a561, 0x4e260220,
    0x00344c05, 0x00000000, 0x0013a561, 0x50260220,
    0x00344d05, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001969, 0x10018220,
    0x02006204, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000800, 0x80000961, 0x5d060660,
    0x00010700, 0x00000000, 0x80000061, 0x5d260660,
    0x00010710, 0x00000000, 0x80031961, 0x64260660,
    0x00005d24, 0x00000000, 0x80031961, 0x64060660,
    0x00005d04, 0x00000000, 0xe2680061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004731, 0x5c140000, 0xfb00640c, 0x00340000,
    0x80001a61, 0x30010220, 0x00006804, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80001e69, 0x10018220, 0x02006204, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000a00,
    0x80000961, 0x5e060660, 0x00010400, 0x00000000,
    0x80000061, 0x5e260660, 0x00010410, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80031a61, 0x65260660, 0x00005e24, 0x00000000,
    0x80031961, 0x65060660, 0x00005e04, 0x00000000,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004431, 0x00000000, 0xfb08650c, 0x00345c14,
    0x00040052, 0x18044160, 0x0e0e0003, 0x18050505,
    0x00040027, 0x00014060, 0x00000000, 0xfffff370,
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
      .base.program_size = 4224,
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
const char *gfx125_misc_copy_instance_ptrs_sha1 = "d5bbb43ef21b90b6db6f277fd3132d40eb052131";

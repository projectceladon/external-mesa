#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_misc_copy_instance_ptrs_base_ptr_relocs[] = {
};
static const u_printf_info gfx125_misc_copy_instance_ptrs_base_ptr_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_misc_copy_instance_ptrs_base_ptr_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g30<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g125<1>UD       g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g30UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(16)         g48<1>UD        g125<8,8,1>UD                   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g5<1>D          g2<0,1,0>D      152D            { align1 1H compacted };
shr(16)         g23<1>UD        g2.4<0,1,0>UD   0x00000008UD    { align1 1H compacted };
and(16)         g25<1>UD        g2.4<0,1,0>UD   0xffffff00UD    { align1 1H };
cmp.l.f0.0(16)  g7<1>UD         g5<1,1,0>UD     0x00000098UD    { align1 1H I@3 compacted };
mov(8)          g11<2>UD        g5<4,4,1>UD                     { align1 1Q };
mov(8)          g13<2>UD        g6<4,4,1>UD                     { align1 2Q };
add3(16)        g33<1>D         65534W          -g23<8,8,1>D    g125<1,1,1>D { align1 1H I@5 };
add(16)         g27<1>D         g2.4<0,1,0>D    -g25<1,1,0>D    { align1 1H I@5 compacted };
add(16)         g9<1>D          -g7<1,1,0>D     g2.1<0,1,0>D    { align1 1H I@5 compacted };
mov(16)         g35<1>D         -g33<8,8,1>D                    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
and(16)         g29<1>UD        g27<8,8,1>UD    0xffffffc0UD    { align1 1H I@3 };
mov(8)          g11.1<2>UD      g9<4,4,1>UD                     { align1 1Q I@3 };
mov(8)          g13.1<2>UD      g10<4,4,1>UD                    { align1 2Q I@4 };
shr(16)         g31<1>UD        g29<1,1,0>UD    0x00000006UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g15UD           g11UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
add(16)         g17<1>D         g2<0,1,0>D      g15<1,1,0>D     { align1 1H $1.dst compacted };
cmp.l.f0.0(16)  g19<1>UD        g17<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g35<8,8,1>UD    g31<8,8,1>UD    { align1 1H I@3 };
add(16)         g21<1>D         -g19<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@2 compacted };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g36<1>D         -g33<8,8,1>D    0x00000006UD    { align1 1H };
add(16)         g38<1>D         g25<1,1,0>D     g36<1,1,0>D     { align1 1H I@1 compacted };
shr(16)         g40<1>UD        g38<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
add(16)         g62<1>D         g17<1,1,0>D     g38<1,1,0>D     { align1 1H compacted };
shl(16)         g42<1>D         g40<8,8,1>D     0x00000003UD    { align1 1H I@2 };
mov(8)          g68<2>UD        g62<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g70<2>UD        g63<4,4,1>UD                    { align1 2Q I@3 };
add(16)         g44<1>D         g2.2<0,1,0>D    g42<1,1,0>D     { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g46<1>UD        g44<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g50<2>UD        g44<4,4,1>UD                    { align1 1Q };
mov(8)          g52<2>UD        g45<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g64<1>UD        g62<1,1,0>UD    g17<1,1,0>UD    { align1 1H compacted };
add(16)         g3<1>D          -g46<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@4 compacted };
add(16)         g66<1>D         -g64<1,1,0>D    g21<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g50.1<2>UD      g3<4,4,1>UD                     { align1 1Q I@2 };
mov(8)          g52.1<2>UD      g4<4,4,1>UD                     { align1 2Q I@3 };
mov(8)          g68.1<2>UD      g66<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g70.1<2>UD      g67<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g54UD           g50UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mov(8)          g58<2>UD        g54<4,4,1>UD                    { align1 1Q $2.dst };
mov(8)          g60<2>UD        g55<4,4,1>UD                    { align1 2Q $2.dst };
mov(8)          g58.1<2>UD      g56<4,4,1>UD                    { align1 1Q @2 $2.dst };
mov(8)          g60.1<2>UD      g57<4,4,1>UD                    { align1 2Q @2 $2.dst };
mov(1)          g28<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g28<1>UD        g28<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g74<1>UD        g28<0,1,0>UD                    { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g74<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g76<2>D         g[a0 320]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g76.1<2>D       g[a0 324]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g5.1<2>D        g76.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g5<2>D          g76<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g27<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g72UD    g5UD            nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $3 };
mov(1)          f0<1>UD         g27<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g74<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g77<2>D         g[a0 128]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g77.1<2>D       g[a0 132]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g6.1<2>D        g77.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g6<2>D          g77<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g6UD            g72UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $4 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shr(16)         g78<1>UD        g25<1,1,0>UD    0x00000008UD    { align1 1H compacted };

LABEL3:
cmp.ge.f0.0(16) null<1>UD       g48<8,8,1>UD    g78<8,8,1>UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL2        UIP:  LABEL2              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
shl(16)         g80<1>D         g48<8,8,1>D     0x00000008UD    { align1 1H };
shr(16)         g82<1>UD        g80<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
add(16)         g104<1>D        g17<1,1,0>D     g80<1,1,0>D     { align1 1H compacted };
shl(16)         g84<1>D         g82<8,8,1>D     0x00000003UD    { align1 1H I@2 };
mov(8)          g110<2>UD       g104<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g112<2>UD       g105<4,4,1>UD                   { align1 2Q I@3 };
add(16)         g86<1>D         g2.2<0,1,0>D    g84<1,1,0>D     { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g88<1>UD        g86<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g92<2>UD        g86<4,4,1>UD                    { align1 1Q };
mov(8)          g94<2>UD        g87<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g106<1>UD       g104<1,1,0>UD   g17<1,1,0>UD    { align1 1H compacted };
add(16)         g90<1>D         -g88<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@4 compacted };
add(16)         g108<1>D        -g106<1,1,0>D   g21<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g92.1<2>UD      g90<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g94.1<2>UD      g91<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g110.1<2>UD     g108<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g112.1<2>UD     g109<4,4,1>UD                   { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g96UD           g92UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mov(8)          g100<2>UD       g96<4,4,1>UD                    { align1 1Q $5.dst };
mov(8)          g102<2>UD       g97<4,4,1>UD                    { align1 2Q $5.dst };
mov(8)          g100.1<2>UD     g98<4,4,1>UD                    { align1 1Q @2 $5.dst };
mov(8)          g102.1<2>UD     g99<4,4,1>UD                    { align1 2Q @2 $5.dst };
mov(1)          g29<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g29<1>UD        g29<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g116<1>UD       g29<0,1,0>UD                    { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g116<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000c00UD    { align1 WE_all 1N A@1 };
mov(1)          g118<2>D        g[a0 128]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g118.1<2>D      g[a0 132]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g7.1<2>D        g118.1<0,1,0>D                  { align1 WE_all 1Q I@1 };
mov(8)          g7<2>D          g118<0,1,0>D                    { align1 WE_all 1Q I@1 };
mov(1)          g20<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g114UD   g7UD            nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $7 };
mov(1)          f0<1>UD         g20<0,1,0>UD                    { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
shl(1)          a0<1>UD         g116<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000c00UD    { align1 WE_all 1N A@1 };
mov(1)          g119<2>D        g[a0 448]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g119.1<2>D      g[a0 452]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g8.1<2>D        g119.1<0,1,0>D                  { align1 WE_all 1Q I@2 };
mov(8)          g8<2>D          g119<0,1,0>D                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g8UD            g114UD          0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g120<1>D        g80<1,1,0>D     64D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g122<1>UD       g120<1,1,0>UD   0x00000006UD    { align1 1H compacted };
add(16)         g29<1>D         g17<1,1,0>D     g120<1,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g124<1>D        g122<8,8,1>D    0x00000003UD    { align1 1H };
mov(8)          g35<2>UD        g29<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g37<2>UD        g30<4,4,1>UD                    { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g126<1>D        g2.2<0,1,0>D    g124<1,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(8)          g9<2>UD         g126<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g11<2>UD        g127<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g5<1>UD         g126<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g31<1>UD        g29<1,1,0>UD    g17<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g7<1>D          -g5<1,1,0>D     g2.3<0,1,0>D    { align1 1H I@2 compacted };
add(16)         g33<1>D         -g31<1,1,0>D    g21<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g9.1<2>UD       g7<4,4,1>UD                     { align1 1Q I@2 };
mov(8)          g11.1<2>UD      g8<4,4,1>UD                     { align1 2Q I@3 };
mov(8)          g35.1<2>UD      g33<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g37.1<2>UD      g34<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g13UD           g9UD            nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(8)          g25<2>UD        g13<4,4,1>UD                    { align1 1Q $1.dst };
mov(8)          g27<2>UD        g14<4,4,1>UD                    { align1 2Q $1.dst };
mov(8)          g25.1<2>UD      g15<4,4,1>UD                    { align1 1Q @2 $1.dst };
mov(8)          g27.1<2>UD      g16<4,4,1>UD                    { align1 2Q @2 $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
shl(1)          a0<1>UD         g116<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g40<2>D         g[a0 288]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g40.1<2>D       g[a0 292]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g44.1<2>D       g40.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g44<2>D         g40<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g19<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g39UD    g44UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $10 };
mov(1)          f0<1>UD         g19<0,1,0>UD                    { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
shl(1)          a0<1>UD         g116<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000400UD    { align1 WE_all 1N A@1 };
mov(1)          g41<2>D         g[a0 96]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g41.1<2>D       g[a0 100]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g45.1<2>D       g41.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g45<2>D         g41<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g45UD           g39UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g42<1>D         g80<1,1,0>D     128D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g44<1>UD        g42<1,1,0>UD    0x00000006UD    { align1 1H compacted };
add(16)         g66<1>D         g17<1,1,0>D     g42<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g46<1>D         g44<8,8,1>D     0x00000003UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g72<2>UD        g66<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g74<2>UD        g67<4,4,1>UD                    { align1 2Q I@3 };
add(16)         g3<1>D          g2.2<0,1,0>D    g46<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(8)          g54<2>UD        g3<4,4,1>UD                     { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $11.src };
mov(8)          g56<2>UD        g4<4,4,1>UD                     { align1 2Q I@2 };
cmp.l.f0.0(16)  g50<1>UD        g3<1,1,0>UD     g2.2<0,1,0>UD   { align1 1H $2.src compacted };
cmp.l.f0.0(16)  g68<1>UD        g66<1,1,0>UD    g17<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g52<1>D         -g50<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@2 compacted };
add(16)         g70<1>D         -g68<1,1,0>D    g21<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g54.1<2>UD      g52<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g56.1<2>UD      g53<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g72.1<2>UD      g70<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g74.1<2>UD      g71<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g58UD           g54UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $11 };
mov(8)          g62<2>UD        g58<4,4,1>UD                    { align1 1Q $11.dst };
mov(8)          g64<2>UD        g59<4,4,1>UD                    { align1 2Q $11.dst };
mov(8)          g62.1<2>UD      g60<4,4,1>UD                    { align1 1Q @2 $11.dst };
mov(8)          g64.1<2>UD      g61<4,4,1>UD                    { align1 2Q @2 $11.dst };
shl(1)          a0<1>UD         g116<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g82<2>D         g[a0 448]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g82.1<2>D       g[a0 452]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g86.1<2>D       g82.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g86<2>D         g82<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g10<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N $1.src compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g76UD    g86UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $12 };
mov(1)          f0<1>UD         g10<0,1,0>UD                    { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
shl(1)          a0<1>UD         g116<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g83<2>D         g[a0 256]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g83.1<2>D       g[a0 260]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g87.1<2>D       g83.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g87<2>D         g83<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g87UD           g76UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g84<1>D         g80<1,1,0>D     192D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g86<1>UD        g84<1,1,0>UD    0x00000006UD    { align1 1H compacted };
add(16)         g108<1>D        g17<1,1,0>D     g84<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g88<1>D         g86<8,8,1>D     0x00000003UD    { align1 1H };
mov(8)          g118<2>UD       g108<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g120<2>UD       g109<4,4,1>UD                   { align1 2Q I@3 };
add(16)         g90<1>D         g2.2<0,1,0>D    g88<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g96<2>UD        g90<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g98<2>UD        g91<4,4,1>UD                    { align1 2Q I@2 };
cmp.l.f0.0(16)  g92<1>UD        g90<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H $5.src compacted };
cmp.l.f0.0(16)  g110<1>UD       g108<1,1,0>UD   g17<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g94<1>D         -g92<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@2 compacted };
add(16)         g112<1>D        -g110<1,1,0>D   g21<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g96.1<2>UD      g94<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g98.1<2>UD      g95<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g118.1<2>UD     g112<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g120.1<2>UD     g113<4,4,1>UD                   { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g100UD          g96UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
mov(8)          g104<2>UD       g100<4,4,1>UD                   { align1 1Q $6.dst };
mov(8)          g106<2>UD       g101<4,4,1>UD                   { align1 2Q $6.dst };
mov(8)          g104.1<2>UD     g102<4,4,1>UD                   { align1 1Q @2 $6.dst };
mov(8)          g106.1<2>UD     g103<4,4,1>UD                   { align1 2Q @2 $6.dst };
shl(1)          a0<1>UD         g116<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000c00UD    { align1 WE_all 1N A@1 };
mov(1)          g123<2>D        g[a0 256]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g123.1<2>D      g[a0 260]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g5.1<2>D        g123.1<0,1,0>D                  { align1 WE_all 1Q I@1 };
mov(8)          g5<2>D          g123<0,1,0>D                    { align1 WE_all 1Q I@1 };
mov(1)          g9<1>UD         f0<0,1,0>UD                     { align1 WE_all 1N $1.src compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g122UD   g5UD            nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $3 };
mov(1)          f0<1>UD         g9<0,1,0>UD                     { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g116<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000e00UD    { align1 WE_all 1N A@1 };
mov(1)          g124<2>D        g[a0 192]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g124.1<2>D      g[a0 196]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g6.1<2>D        g124.1<0,1,0>D                  { align1 WE_all 1Q I@2 };
mov(8)          g6<2>D          g124<0,1,0>D                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g6UD            g122UD          0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $4 };
add3(16)        g48<1>D         0x0003UW        g23<8,8,1>D     g48<1,1,1>D { align1 1H };

LABEL2:
while(16)       JIP:  LABEL3                                    { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q I@7 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_instance_ptrs_base_ptr_code[] = {
    0x80000065, 0x1e058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x7d050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa001e0c, 0x00340000,
    0x00041961, 0x30050220, 0x00467d05, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa0050040, 0x09810203, 0xe0170068, 0x0081025b,
    0x00040065, 0x19058220, 0x02000284, 0xffffff00,
    0xe7071b70, 0x09800503, 0x00030061, 0x0b060220,
    0x00340505, 0x00000000, 0x00130061, 0x0d060220,
    0x00340605, 0x00000000, 0x00041d52, 0x21044560,
    0x0e8efffe, 0x7d051705, 0xa01b1d40, 0x1921025a,
    0xa0091d40, 0x02120712, 0x00041b61, 0x23052660,
    0x00462105, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00041b65, 0x1d058220,
    0x02461b05, 0xffffffc0, 0x00031b61, 0x0b260220,
    0x00340905, 0x00000000, 0x00131c61, 0x0d260220,
    0x00340a05, 0x00000000, 0xe01f1b68, 0x00601d03,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x0f140000, 0xfb000b24, 0x00000000,
    0xa0112140, 0x0f010202, 0x27131970, 0x02101103,
    0x00041b70, 0x00010220, 0x52462305, 0x00461f05,
    0xa0151a40, 0x02121312, 0x01040022, 0x0001c060,
    0x000002c0, 0x000002c0, 0x00040069, 0x2405a660,
    0x02462105, 0x00000006, 0xa0261940, 0x24001902,
    0xe0281968, 0x00602603, 0xa03e0040, 0x26001102,
    0x00041a69, 0x2a058660, 0x02462805, 0x00000003,
    0x00031a61, 0x44060220, 0x00343e05, 0x00000000,
    0x00131b61, 0x46060220, 0x00343f05, 0x00000000,
    0xa02c1b40, 0x2a010242, 0x272e1970, 0x02102c2b,
    0x00030061, 0x32060220, 0x00342c05, 0x00000000,
    0x00130061, 0x34060220, 0x00342d05, 0x00000000,
    0x27400070, 0x11003e03, 0xa0031c40, 0x02122e1a,
    0xa0421a40, 0x15024002, 0x00031a61, 0x32260220,
    0x00340305, 0x00000000, 0x00131b61, 0x34260220,
    0x00340405, 0x00000000, 0x00031b61, 0x44260220,
    0x00344205, 0x00000000, 0x00131c61, 0x46260220,
    0x00344305, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x36240000,
    0xfb003224, 0x00040000, 0x00032261, 0x3a060220,
    0x00343605, 0x00000000, 0x00132261, 0x3c060220,
    0x00343705, 0x00000000, 0x0003a261, 0x3a260220,
    0x00343805, 0x00000000, 0x0013a261, 0x3c260220,
    0x00343905, 0x00000000, 0xe21c0961, 0x00114004,
    0x80000965, 0x1c058220, 0x02001c04, 0xffffffff,
    0x8000194c, 0x4a050220, 0x00001c04, 0x00000000,
    0x80001969, 0x10018220, 0x02004a04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000600,
    0x80000961, 0x4c060660, 0x00010500, 0x00000000,
    0x80000061, 0x4c260660, 0x00010510, 0x00000000,
    0x80031961, 0x05260660, 0x00004c24, 0x00000000,
    0x80031961, 0x05060660, 0x00004c04, 0x00000000,
    0xe21b0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004331, 0x48140000,
    0xfb00050c, 0x00340000, 0x80001a61, 0x30010220,
    0x00001b04, 0x00000000, 0x80001e69, 0x10018220,
    0x02004a04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000800, 0x80000961, 0x4d060660,
    0x00010200, 0x00000000, 0x80000061, 0x4d260660,
    0x00010210, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x06260660,
    0x00004d24, 0x00000000, 0x80031961, 0x06060660,
    0x00004d04, 0x00000000, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004431, 0x00000000,
    0xfb08060c, 0x00344814, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0xe04e0068, 0x00801903,
    0x00041970, 0x00010220, 0x42463005, 0x00464e05,
    0x01040028, 0x0001c660, 0x00000c60, 0x00000c60,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x50058660, 0x02463005, 0x00000008,
    0xe0521968, 0x00605003, 0xa0680040, 0x50001102,
    0x00041a69, 0x54058660, 0x02465205, 0x00000003,
    0x00031a61, 0x6e060220, 0x00346805, 0x00000000,
    0x00131b61, 0x70060220, 0x00346905, 0x00000000,
    0xa0561b40, 0x54010242, 0x27581970, 0x0210562b,
    0x00030061, 0x5c060220, 0x00345605, 0x00000000,
    0x00130061, 0x5e060220, 0x00345705, 0x00000000,
    0x276a0070, 0x11006803, 0xa05a1c40, 0x0212581a,
    0xa06c1a40, 0x15026a02, 0x00031a61, 0x5c260220,
    0x00345a05, 0x00000000, 0x00131b61, 0x5e260220,
    0x00345b05, 0x00000000, 0x00031b61, 0x6e260220,
    0x00346c05, 0x00000000, 0x00131c61, 0x70260220,
    0x00346d05, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x60240000,
    0xfb005c24, 0x00040000, 0x00032561, 0x64060220,
    0x00346005, 0x00000000, 0x00132561, 0x66060220,
    0x00346105, 0x00000000, 0x0003a561, 0x64260220,
    0x00346205, 0x00000000, 0x0013a561, 0x66260220,
    0x00346305, 0x00000000, 0xe21d0961, 0x00114004,
    0x80000965, 0x1d058220, 0x02001d04, 0xffffffff,
    0x8000194c, 0x74050220, 0x00001d04, 0x00000000,
    0x80001969, 0x10018220, 0x02007404, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000c00,
    0x80000961, 0x76060660, 0x00010200, 0x00000000,
    0x80000061, 0x76260660, 0x00010210, 0x00000000,
    0x80031961, 0x07260660, 0x00007624, 0x00000000,
    0x80031961, 0x07060660, 0x00007604, 0x00000000,
    0xe2140061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004731, 0x72140000,
    0xfb00070c, 0x00340000, 0x80001a61, 0x30010220,
    0x00001404, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80001e69, 0x10018220,
    0x02007404, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000c00, 0x80000961, 0x77060660,
    0x00010700, 0x00000000, 0x80000061, 0x77260660,
    0x00010710, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x08260660,
    0x00007724, 0x00000000, 0x80031961, 0x08060660,
    0x00007704, 0x00000000, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004831, 0x00000000,
    0xfb08080c, 0x00347214, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0780040, 0x04005003,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe07a0068, 0x00607803, 0xa01d0040, 0x78001102,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x7c058660, 0x02467a05, 0x00000003,
    0x00031a61, 0x23060220, 0x00341d05, 0x00000000,
    0x00131b61, 0x25060220, 0x00341e05, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa07e0040, 0x7c010242, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x09060220,
    0x00347e05, 0x00000000, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00131a61, 0x0b060220,
    0x00347f05, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x27050070, 0x02107e2b,
    0x271f0070, 0x11001d03, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xa0071a40, 0x0212051a,
    0xa0211a40, 0x15021f02, 0x00031a61, 0x09260220,
    0x00340705, 0x00000000, 0x00131b61, 0x0b260220,
    0x00340805, 0x00000000, 0x00031b61, 0x23260220,
    0x00342105, 0x00000000, 0x00131c61, 0x25260220,
    0x00342205, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x0d240000,
    0xfb000924, 0x00040000, 0x00032161, 0x19060220,
    0x00340d05, 0x00000000, 0x00132161, 0x1b060220,
    0x00340e05, 0x00000000, 0x0003a161, 0x19260220,
    0x00340f05, 0x00000000, 0x0013a161, 0x1b260220,
    0x00341005, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001969, 0x10018220,
    0x02007404, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x28060660,
    0x00010480, 0x00000000, 0x80000061, 0x28260660,
    0x00010490, 0x00000000, 0x80031961, 0x2c260660,
    0x00002824, 0x00000000, 0x80031961, 0x2c060660,
    0x00002804, 0x00000000, 0xe2130061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004a31, 0x27140000, 0xfb002c0c, 0x00340000,
    0x80001a61, 0x30010220, 0x00001304, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001e69, 0x10018220, 0x02007404, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000400,
    0x80000961, 0x29060660, 0x00010180, 0x00000000,
    0x80000061, 0x29260660, 0x00010190, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80031a61, 0x2d260660, 0x00002924, 0x00000000,
    0x80031961, 0x2d060660, 0x00002904, 0x00000000,
    0x80002a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004931, 0x00000000, 0xfb082d0c, 0x00342714,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0xa02a0040, 0x08005003, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xe02c0068, 0x00602a03,
    0xa0420040, 0x2a001102, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x2e058660,
    0x02462c05, 0x00000003, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00031a61, 0x48060220,
    0x00344205, 0x00000000, 0x00131b61, 0x4a060220,
    0x00344305, 0x00000000, 0xa0031b40, 0x2e010242,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x00031961, 0x36060220, 0x00340305, 0x00000000,
    0x80103b01, 0x00000000, 0x00000000, 0x00000000,
    0x00131a61, 0x38060220, 0x00340405, 0x00000000,
    0x27323270, 0x0210032b, 0x27440070, 0x11004203,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa0341a40, 0x0212321a, 0xa0461a40, 0x15024402,
    0x00031a61, 0x36260220, 0x00343405, 0x00000000,
    0x00131b61, 0x38260220, 0x00343505, 0x00000000,
    0x00031b61, 0x48260220, 0x00344605, 0x00000000,
    0x00131c61, 0x4a260220, 0x00344705, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x3a240000, 0xfb003624, 0x00040000,
    0x00032b61, 0x3e060220, 0x00343a05, 0x00000000,
    0x00132b61, 0x40060220, 0x00343b05, 0x00000000,
    0x0003ab61, 0x3e260220, 0x00343c05, 0x00000000,
    0x0013ab61, 0x40260220, 0x00343d05, 0x00000000,
    0x80001969, 0x10018220, 0x02007404, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000600,
    0x80000961, 0x52060660, 0x00010700, 0x00000000,
    0x80000061, 0x52260660, 0x00010710, 0x00000000,
    0x80031961, 0x56260660, 0x00005224, 0x00000000,
    0x80031961, 0x56060660, 0x00005204, 0x00000000,
    0xe20a3161, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004c31, 0x4c140000,
    0xfb00560c, 0x00340000, 0x80001a61, 0x30010220,
    0x00000a04, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001e69, 0x10018220,
    0x02007404, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000800, 0x80000961, 0x53060660,
    0x00010400, 0x00000000, 0x80000061, 0x53260660,
    0x00010410, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x57260660,
    0x00005324, 0x00000000, 0x80031961, 0x57060660,
    0x00005304, 0x00000000, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004d31, 0x00000000,
    0xfb08570c, 0x00344c14, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0540040, 0x0c005003,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe0560068, 0x00605403, 0xa06c0040, 0x54001102,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x58058660, 0x02465605, 0x00000003,
    0x00031a61, 0x76060220, 0x00346c05, 0x00000000,
    0x00131b61, 0x78060220, 0x00346d05, 0x00000000,
    0xa05a1b40, 0x58010242, 0x00031961, 0x60060220,
    0x00345a05, 0x00000000, 0x00131a61, 0x62060220,
    0x00345b05, 0x00000000, 0x275c3570, 0x02105a2b,
    0x276e0070, 0x11006c03, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa05e1a40, 0x02125c1a,
    0xa0701a40, 0x15026e02, 0x00031a61, 0x60260220,
    0x00345e05, 0x00000000, 0x00131b61, 0x62260220,
    0x00345f05, 0x00000000, 0x00031b61, 0x76260220,
    0x00347005, 0x00000000, 0x00131c61, 0x78260220,
    0x00347105, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x64240000,
    0xfb006024, 0x00040000, 0x00032661, 0x68060220,
    0x00346405, 0x00000000, 0x00132661, 0x6a060220,
    0x00346505, 0x00000000, 0x0003a661, 0x68260220,
    0x00346605, 0x00000000, 0x0013a661, 0x6a260220,
    0x00346705, 0x00000000, 0x80001969, 0x10018220,
    0x02007404, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000c00, 0x80000961, 0x7b060660,
    0x00010400, 0x00000000, 0x80000061, 0x7b260660,
    0x00010410, 0x00000000, 0x80031961, 0x05260660,
    0x00007b24, 0x00000000, 0x80031961, 0x05060660,
    0x00007b04, 0x00000000, 0xe2093161, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004331, 0x7a140000, 0xfb00050c, 0x00340000,
    0x80001a61, 0x30010220, 0x00000904, 0x00000000,
    0x80001e69, 0x10018220, 0x02007404, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000e00,
    0x80000961, 0x7c060660, 0x00010300, 0x00000000,
    0x80000061, 0x7c260660, 0x00010310, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80031a61, 0x06260660, 0x00007c24, 0x00000000,
    0x80031961, 0x06060660, 0x00007c04, 0x00000000,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004431, 0x00000000, 0xfb08060c, 0x00347a14,
    0x00040052, 0x30044160, 0x0e0e0003, 0x30051705,
    0x00040027, 0x00014060, 0x00000000, 0xfffff390,
    0x80031f61, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_misc_copy_instance_ptrs_base_ptr = {
   .prog_data = {
      .base.nr_params = 14,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 4336,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_misc_copy_instance_ptrs_base_ptr_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_misc_copy_instance_ptrs_base_ptr_printfs,
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
   .args = gfx125_misc_copy_instance_ptrs_base_ptr_args,
   .code = gfx125_misc_copy_instance_ptrs_base_ptr_code,
};
const char *gfx125_misc_copy_instance_ptrs_base_ptr_sha1 = "b7097ec34ffe8d5e1dc15e3765742ae65e1ffaa9";

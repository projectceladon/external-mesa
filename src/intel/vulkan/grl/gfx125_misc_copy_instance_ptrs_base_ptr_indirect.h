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

and(1)          g8<1>UD         g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g98<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g8UD            nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(16)         g44<1>UD        g98<8,8,1>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g46<1>D         g2<0,1,0>D      152D            { align1 1H compacted };
mov(8)          g100.1<2>D      g2.5<0,1,0>D                    { align1 1Q };
mov(8)          g102.1<2>D      g2.5<0,1,0>D                    { align1 2Q };
cmp.l.f0.0(16)  g48<1>UD        g46<1,1,0>UD    0x00000098UD    { align1 1H I@3 compacted };
mov(8)          g52<2>UD        g46<4,4,1>UD                    { align1 1Q };
mov(8)          g54<2>UD        g47<4,4,1>UD                    { align1 2Q };
mov(8)          g100<2>D        g2.4<0,1,0>D                    { align1 1Q I@5 };
mov(8)          g102<2>D        g2.4<0,1,0>D                    { align1 2Q I@5 };
add(16)         g50<1>D         -g48<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g14UD           g100UD          nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(8)          g52.1<2>UD      g50<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g54.1<2>UD      g51<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g56UD           g52UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
shl(16)         g63<1>D         g14<8,8,1>D     0x00000006UD    { align1 1H $1.dst };
shr(16)         g65<1>UD        g63<1,1,0>UD    0x00000008UD    { align1 1H I@1 compacted };
and(16)         g67<1>UD        g63<8,8,1>UD    0xffffff00UD    { align1 1H };
add(16)         g58<1>D         g2<0,1,0>D      g56<1,1,0>D     { align1 1H $2.dst compacted };
add3(16)        g75<1>D         65534W          -g65<8,8,1>D    g98<1,1,1>D { align1 1H I@3 };
add(16)         g69<1>D         g63<1,1,0>D     -g67<1,1,0>D    { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g60<1>UD        g58<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@3 compacted };
mov(16)         g77<1>D         -g75<8,8,1>D                    { align1 1H I@3 };
and(16)         g71<1>UD        g69<8,8,1>UD    0xffffffc0UD    { align1 1H I@3 };
add(16)         g62<1>D         -g60<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
shr(16)         g73<1>UD        g71<1,1,0>UD    0x00000006UD    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  null<1>UD       g77<8,8,1>UD    g73<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g78<1>D         -g75<8,8,1>D    0x00000006UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g80<1>D         g67<1,1,0>D     g78<1,1,0>D     { align1 1H I@1 compacted };
shr(16)         g82<1>UD        g80<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
add(16)         g114<1>D        g58<1,1,0>D     g80<1,1,0>D     { align1 1H compacted };
add(16)         g84<1>D         g16<1,1,0>D     g82<1,1,0>D     { align1 1H @2 $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g7<2>UD         g114<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g9<2>UD         g115<4,4,1>UD                   { align1 2Q I@3 };
cmp.l.f0.0(16)  g86<1>UD        g84<1,1,0>UD    g16<1,1,0>UD    { align1 1H I@3 compacted };
shl(16)         g88<1>D         g84<8,8,1>D     0x00000003UD    { align1 1H };
shr(16)         g92<1>UD        g84<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
shl(16)         g90<1>D         -g86<8,8,1>D    0x00000003UD    { align1 1H I@3 };
add(16)         g96<1>D         g2.2<0,1,0>D    g88<1,1,0>D     { align1 1H I@3 compacted };
or(16)          g94<1>UD        g90<1,1,0>UD    g92<1,1,0>UD    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g98<1>UD        g96<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g102<2>UD       g96<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g104<2>UD       g97<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g116<1>UD       g114<1,1,0>UD   g58<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add3(16)        g100<1>D        g2.3<0,1,0>D    g94<8,8,1>D     -g98<1,1,1>D { align1 1H I@4 };
add(16)         g118<1>D        -g116<1,1,0>D   g62<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g102.1<2>UD     g100<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g104.1<2>UD     g101<4,4,1>UD                   { align1 2Q I@3 };
mov(8)          g7.1<2>UD       g118<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g9.1<2>UD       g119<4,4,1>UD                   { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g106UD          g102UD          nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov(8)          g110<2>UD       g106<4,4,1>UD                   { align1 1Q $3.dst };
mov(8)          g112<2>UD       g107<4,4,1>UD                   { align1 2Q $3.dst };
mov(8)          g110.1<2>UD     g108<4,4,1>UD                   { align1 1Q @2 $3.dst };
mov(8)          g112.1<2>UD     g109<4,4,1>UD                   { align1 2Q @2 $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(1)          g1<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g1<1>UD         g1<0,1,0>UD     0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g121<1>UD       g1<0,1,0>UD                     { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g121<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000c00UD    { align1 WE_all 1N A@1 };
mov(1)          g123<2>D        g[a0 448]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g123.1<2>D      g[a0 452]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g101.1<2>D      g123.1<0,1,0>D                  { align1 WE_all 1Q I@1 };
mov(8)          g101<2>D        g123<0,1,0>D                    { align1 WE_all 1Q I@1 };
mov(1)          g127<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g119UD   g101UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
mov(1)          f0<1>UD         g127<0,1,0>UD                   { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g121<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
mov(1)          g124<2>D        g[a0 224]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g124.1<2>D      g[a0 228]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g102.1<2>D      g124.1<0,1,0>D                  { align1 WE_all 1Q I@2 };
mov(8)          g102<2>D        g124<0,1,0>D                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g102UD          g119UD          0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $1 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shr(16)         g125<1>UD       g67<1,1,0>UD    0x00000008UD    { align1 1H compacted };

LABEL3:
cmp.ge.f0.0(16) null<1>UD       g44<8,8,1>UD    g125<8,8,1>UD   { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL2        UIP:  LABEL2              { align1 1H };
shl(16)         g35<1>D         g44<8,8,1>D     0x00000008UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shr(16)         g37<1>UD        g35<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
add(16)         g79<1>D         g58<1,1,0>D     g35<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g39<1>D         g16<1,1,0>D     g37<1,1,0>D     { align1 1H @2 $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g8<2>UD         g79<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g10<2>UD        g80<4,4,1>UD                    { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g41<1>UD        g39<1,1,0>UD    g16<1,1,0>UD    { align1 1H compacted };
shl(16)         g46<1>D         g39<8,8,1>D     0x00000003UD    { align1 1H };
shr(16)         g50<1>UD        g39<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
shl(16)         g48<1>D         -g41<8,8,1>D    0x00000003UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g54<1>D         g2.2<0,1,0>D    g46<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
or(16)          g52<1>UD        g48<1,1,0>UD    g50<1,1,0>UD    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g56<1>UD        g54<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
mov(8)          g67<2>UD        g54<4,4,1>UD                    { align1 1Q };
mov(8)          g69<2>UD        g55<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g81<1>UD        g79<1,1,0>UD    g58<1,1,0>UD    { align1 1H compacted };
add3(16)        g60<1>D         g2.3<0,1,0>D    g52<8,8,1>D     -g56<1,1,1>D { align1 1H I@4 };
add(16)         g83<1>D         -g81<1,1,0>D    g62<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g67.1<2>UD      g60<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g69.1<2>UD      g61<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g8.1<2>UD       g83<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g10.1<2>UD      g84<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g71UD           g67UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mov(8)          g75<2>UD        g71<4,4,1>UD                    { align1 1Q $5.dst };
mov(8)          g77<2>UD        g72<4,4,1>UD                    { align1 2Q $5.dst };
mov(8)          g75.1<2>UD      g73<4,4,1>UD                    { align1 1Q @2 $5.dst };
mov(8)          g77.1<2>UD      g74<4,4,1>UD                    { align1 2Q @2 $5.dst };
mov(1)          g7<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g7<1>UD         g7<0,1,0>UD     0xffffffffUD    { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
fbl(1)          g12<1>UD        g7<0,1,0>UD                     { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shl(1)          a0<1>UD         g12<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g85<2>D         g[a0 352]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g85.1<2>D       g[a0 356]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g103.1<2>D      g85.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g103<2>D        g85<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g120<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N $1.src compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g84UD    g103UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $7 };
mov(1)          f0<1>UD         g120<0,1,0>UD                   { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g12<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
mov(1)          g86<2>D         g[a0 256]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g86.1<2>D       g[a0 260]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g104.1<2>D      g86.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g104<2>D        g86<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g104UD          g84UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g87<1>D         g35<1,1,0>D     64D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g89<1>UD        g87<1,1,0>UD    0x00000006UD    { align1 1H compacted };
add(16)         g109<1>D        g58<1,1,0>D     g87<1,1,0>D     { align1 1H compacted };
add(16)         g91<1>D         g16<1,1,0>D     g89<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g22<2>UD        g109<4,4,1>UD                   { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $9.src };
mov(8)          g24<2>UD        g110<4,4,1>UD                   { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
shl(16)         g95<1>D         g91<8,8,1>D     0x00000003UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shr(16)         g99<1>UD        g91<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g103<1>D        g2.2<0,1,0>D    g95<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g3<2>UD         g103<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g5<2>UD         g104<4,4,1>UD                   { align1 2Q I@2 };
cmp.l.f0.0(16)  g93<1>UD        g91<1,1,0>UD    g16<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g105<1>UD       g103<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g111<1>UD       g109<1,1,0>UD   g58<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shl(16)         g97<1>D         -g93<8,8,1>D    0x00000003UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g113<1>D        -g111<1,1,0>D   g62<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
or(16)          g101<1>UD       g97<1,1,0>UD    g99<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g22.1<2>UD      g113<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g24.1<2>UD      g114<4,4,1>UD                   { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add3(16)        g107<1>D        g2.3<0,1,0>D    g101<8,8,1>D    -g105<1,1,1>D { align1 1H };
mov(8)          g3.1<2>UD       g107<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g5.1<2>UD       g108<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g108UD          g3UD            nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $11 };
mov(8)          g18<2>UD        g108<4,4,1>UD                   { align1 1Q $11.dst };
mov(8)          g20<2>UD        g109<4,4,1>UD                   { align1 2Q $11.dst };
mov(8)          g18.1<2>UD      g110<4,4,1>UD                   { align1 1Q @2 $11.dst };
mov(8)          g20.1<2>UD      g111<4,4,1>UD                   { align1 2Q @2 $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
shl(1)          a0<1>UD         g12<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g115<2>D        g[a0 64]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g115.1<2>D      g[a0 68]<0,1,0>D                { align1 WE_all 1N };
mov(8)          g37.1<2>D       g115.1<0,1,0>D                  { align1 WE_all 1Q I@1 };
mov(8)          g37<2>D         g115<0,1,0>D                    { align1 WE_all 1Q I@1 };
mov(1)          g119<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N $1.src compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g114UD   g37UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $12 };
mov(1)          f0<1>UD         g119<0,1,0>UD                   { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g12<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g116<2>D        g[a0 192]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g116.1<2>D      g[a0 196]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g105.1<2>D      g116.1<0,1,0>D                  { align1 WE_all 1Q I@2 };
mov(8)          g105<2>D        g116<0,1,0>D                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g105UD          g114UD          0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g117<1>D        g35<1,1,0>D     128D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g119<1>UD       g117<1,1,0>UD   0x00000006UD    { align1 1H compacted };
add(16)         g47<1>D         g58<1,1,0>D     g117<1,1,0>D    { align1 1H compacted };
add(16)         g121<1>D        g16<1,1,0>D     g119<1,1,0>D    { align1 1H I@2 compacted };
mov(8)          g31<2>UD        g47<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g33<2>UD        g48<4,4,1>UD                    { align1 2Q I@3 };
shl(16)         g7<1>D          g121<8,8,1>D    0x00000003UD    { align1 1H I@3 };
shr(16)         g3<1>UD         g121<1,1,0>UD   0x0000001dUD    { align1 1H $11.src compacted };
add(16)         g18<1>D         g2.2<0,1,0>D    g7<1,1,0>D      { align1 1H I@2 compacted };
mov(8)          g23<2>UD        g18<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $9.src };
mov(8)          g25<2>UD        g19<4,4,1>UD                    { align1 2Q I@2 };
cmp.l.f0.0(16)  g123<1>UD       g121<1,1,0>UD   g16<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  g20<1>UD        g18<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g49<1>UD        g47<1,1,0>UD    g58<1,1,0>UD    { align1 1H compacted };
shl(16)         g9<1>D          -g123<8,8,1>D   0x00000003UD    { align1 1H I@3 };
add(16)         g51<1>D         -g49<1,1,0>D    g62<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
or(16)          g5<1>UD         g9<1,1,0>UD     g3<1,1,0>UD     { align1 1H I@2 compacted };
mov(8)          g31.1<2>UD      g51<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g33.1<2>UD      g52<4,4,1>UD                    { align1 2Q I@3 };
add3(16)        g42<1>D         g2.3<0,1,0>D    g5<8,8,1>D      -g20<1,1,1>D { align1 1H I@3 };
mov(8)          g23.1<2>UD      g42<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g25.1<2>UD      g43<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g46UD           g23UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
mov(8)          g27<2>UD        g46<4,4,1>UD                    { align1 1Q $9.dst };
mov(8)          g29<2>UD        g47<4,4,1>UD                    { align1 2Q $9.dst };
mov(8)          g27.1<2>UD      g48<4,4,1>UD                    { align1 1Q @2 $9.dst };
mov(8)          g29.1<2>UD      g49<4,4,1>UD                    { align1 2Q @2 $9.dst };
shl(1)          a0<1>UD         g12<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g53<2>D         g[a0 352]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g53.1<2>D       g[a0 356]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g38.1<2>D       g53.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g38<2>D         g53<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g109<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g52UD    g38UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $13 };
mov(1)          f0<1>UD         g109<0,1,0>UD                   { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g12<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g54<2>D         g[a0 480]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g54.1<2>D       g[a0 484]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g106.1<2>D      g54.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g106<2>D        g54<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g106UD          g52UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g55<1>D         g35<1,1,0>D     192D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
shr(16)         g60<1>UD        g55<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
add(16)         g90<1>D         g58<1,1,0>D     g55<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g67<1>D         g16<1,1,0>D     g60<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(8)          g36<2>UD        g90<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@3 };
mov(8)          g38<2>UD        g91<4,4,1>UD                    { align1 2Q };
shl(16)         g71<1>D         g67<8,8,1>D     0x00000003UD    { align1 1H I@3 };
shr(16)         g75<1>UD        g67<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
add(16)         g79<1>D         g2.2<0,1,0>D    g71<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g85<2>UD        g79<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g87<2>UD        g80<4,4,1>UD                    { align1 2Q I@2 };
cmp.l.f0.0(16)  g69<1>UD        g67<1,1,0>UD    g16<1,1,0>UD    { align1 1H $5.src compacted };
cmp.l.f0.0(16)  g81<1>UD        g79<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g92<1>UD        g90<1,1,0>UD    g58<1,1,0>UD    { align1 1H compacted };
shl(16)         g73<1>D         -g69<8,8,1>D    0x00000003UD    { align1 1H I@3 };
add(16)         g94<1>D         -g92<1,1,0>D    g62<1,1,0>D     { align1 1H I@2 compacted };
or(16)          g77<1>UD        g73<1,1,0>UD    g75<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g36.1<2>UD      g94<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g38.1<2>UD      g95<4,4,1>UD                    { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add3(16)        g83<1>D         g2.3<0,1,0>D    g77<8,8,1>D     -g81<1,1,1>D { align1 1H I@3 };
mov(8)          g85.1<2>UD      g83<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g87.1<2>UD      g84<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g89UD           g85UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
mov(8)          g32<2>UD        g89<4,4,1>UD                    { align1 1Q $6.dst };
mov(8)          g34<2>UD        g90<4,4,1>UD                    { align1 2Q $6.dst };
mov(8)          g32.1<2>UD      g91<4,4,1>UD                    { align1 1Q @2 $6.dst };
mov(8)          g34.1<2>UD      g92<4,4,1>UD                    { align1 2Q @2 $6.dst };
shl(1)          a0<1>UD         g12<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000400UD    { align1 WE_all 1N A@1 };
mov(1)          g96<2>D         g[a0]<0,1,0>D                   { align1 WE_all 1N A@1 };
mov(1)          g96.1<2>D       g[a0 4]<0,1,0>D                 { align1 WE_all 1N };
mov(8)          g40.1<2>D       g96.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g40<2>D         g96<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g108<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g95UD    g40UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $4 };
mov(1)          f0<1>UD         g108<0,1,0>UD                   { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g12<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000400UD    { align1 WE_all 1N A@1 };
mov(1)          g97<2>D         g[a0 128]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g97.1<2>D       g[a0 132]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g107.1<2>D      g97.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g107<2>D        g97<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g107UD          g95UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $10 };
add3(16)        g44<1>D         0x0003UW        g65<8,8,1>D     g44<1,1,1>D { align1 1H };

LABEL2:
while(16)       JIP:  LABEL3                                    { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q I@1 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_instance_ptrs_base_ptr_indirect_code[] = {
    0x80000065, 0x08058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x62050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00080c, 0x00340000,
    0x00041961, 0x2c050220, 0x00466205, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa02e0040, 0x09810203, 0x00030061, 0x64260660,
    0x000002a4, 0x00000000, 0x00130061, 0x66260660,
    0x000002a4, 0x00000000, 0xe7301b70, 0x09802e03,
    0x00030061, 0x34060220, 0x00342e05, 0x00000000,
    0x00130061, 0x36060220, 0x00342f05, 0x00000000,
    0x00031d61, 0x64060660, 0x00000284, 0x00000000,
    0x00131d61, 0x66060660, 0x00000284, 0x00000000,
    0xa0321d40, 0x02123012, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x0e240000,
    0xfb006424, 0x00040000, 0x00031961, 0x34260220,
    0x00343205, 0x00000000, 0x00131a61, 0x36260220,
    0x00343305, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x38140000,
    0xfb003424, 0x00000000, 0x00042169, 0x3f058660,
    0x02460e05, 0x00000006, 0xe0411968, 0x00803f03,
    0x00040065, 0x43058220, 0x02463f05, 0xffffff00,
    0xa03a2240, 0x38010202, 0x00041b52, 0x4b044560,
    0x0e8efffe, 0x62054105, 0xa0451b40, 0x43203f02,
    0x273c1b70, 0x02103a03, 0x00041b61, 0x4d052660,
    0x00464b05, 0x00000000, 0x00041b65, 0x47058220,
    0x02464505, 0xffffffc0, 0xa03e1b40, 0x02123c12,
    0xe0491a68, 0x00604703, 0x00041970, 0x00010220,
    0x52464d05, 0x00464905, 0x01040022, 0x0001c060,
    0x00000348, 0x00000348, 0x00040069, 0x4e05a660,
    0x02464b05, 0x00000006, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xa0501940, 0x4e004302,
    0xe0521968, 0x00605003, 0xa0720040, 0x50003a02,
    0xa054a140, 0x52001002, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00031a61, 0x07060220,
    0x00347205, 0x00000000, 0x00131b61, 0x09060220,
    0x00347305, 0x00000000, 0x27561b70, 0x10005403,
    0x00040069, 0x58058660, 0x02465405, 0x00000003,
    0xe05c0068, 0x01d05403, 0x00041b69, 0x5a05a660,
    0x02465605, 0x00000003, 0xa0601b40, 0x58010242,
    0x205e1a66, 0x5c005a03, 0x27621a70, 0x0210602b,
    0x00033161, 0x66060220, 0x00346005, 0x00000000,
    0x00130061, 0x68060220, 0x00346105, 0x00000000,
    0x27740070, 0x3a007203, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00041c52, 0x64040660,
    0x0e2e0264, 0x62055e05, 0xa0761a40, 0x3e027402,
    0x00031a61, 0x66260220, 0x00346405, 0x00000000,
    0x00131b61, 0x68260220, 0x00346505, 0x00000000,
    0x00031b61, 0x07260220, 0x00347605, 0x00000000,
    0x00131c61, 0x09260220, 0x00347705, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x6a240000, 0xfb006624, 0x00040000,
    0x00032361, 0x6e060220, 0x00346a05, 0x00000000,
    0x00132361, 0x70060220, 0x00346b05, 0x00000000,
    0x0003a361, 0x6e260220, 0x00346c05, 0x00000000,
    0x0013a361, 0x70260220, 0x00346d05, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xe2010961, 0x00114004, 0x80000965, 0x01058220,
    0x02000104, 0xffffffff, 0x8000194c, 0x79050220,
    0x00000104, 0x00000000, 0x80001969, 0x10018220,
    0x02007904, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000c00, 0x80000961, 0x7b060660,
    0x00010700, 0x00000000, 0x80000061, 0x7b260660,
    0x00010710, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80031961, 0x65260660,
    0x00007b24, 0x00000000, 0x80031961, 0x65060660,
    0x00007b04, 0x00000000, 0xe27f0061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004131, 0x77140000, 0xfb00650c, 0x00340000,
    0x80001a61, 0x30010220, 0x00007f04, 0x00000000,
    0x80001e69, 0x10018220, 0x02007904, 0x00000003,
    0x80000961, 0x7c060660, 0x00010380, 0x00000000,
    0x80000061, 0x7c260660, 0x00010390, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80031a61, 0x66260660, 0x00007c24, 0x00000000,
    0x80031961, 0x66060660, 0x00007c04, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004131, 0x00000000, 0xfb08660c, 0x00347714,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0xe07d0068, 0x00804303, 0x00041970, 0x00010220,
    0x42462c05, 0x00467d05, 0x01040028, 0x0001c660,
    0x00000db0, 0x00000db0, 0x00040069, 0x23058660,
    0x02462c05, 0x00000008, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xe0251968, 0x00602303,
    0xa04f0040, 0x23003a02, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xa027a140, 0x25001002,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00031a61, 0x08060220, 0x00344f05, 0x00000000,
    0x00131b61, 0x0a060220, 0x00345005, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x27290070, 0x10002703, 0x00040069, 0x2e058660,
    0x02462705, 0x00000003, 0xe0320068, 0x01d02703,
    0x00041b69, 0x3005a660, 0x02462905, 0x00000003,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa0361b40, 0x2e010242, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x20341a66, 0x32003003,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x27380070, 0x0210362b, 0x00030061, 0x43060220,
    0x00343605, 0x00000000, 0x00130061, 0x45060220,
    0x00343705, 0x00000000, 0x27510070, 0x3a004f03,
    0x00041c52, 0x3c040660, 0x0e2e0264, 0x38053405,
    0xa0531a40, 0x3e025102, 0x00031a61, 0x43260220,
    0x00343c05, 0x00000000, 0x00131b61, 0x45260220,
    0x00343d05, 0x00000000, 0x00031b61, 0x08260220,
    0x00345305, 0x00000000, 0x00131c61, 0x0a260220,
    0x00345405, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x47240000,
    0xfb004324, 0x00040000, 0x00032561, 0x4b060220,
    0x00344705, 0x00000000, 0x00132561, 0x4d060220,
    0x00344805, 0x00000000, 0x0003a561, 0x4b260220,
    0x00344905, 0x00000000, 0x0013a561, 0x4d260220,
    0x00344a05, 0x00000000, 0xe2070961, 0x00114004,
    0x80000965, 0x07058220, 0x02000704, 0xffffffff,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x8000194c, 0x0c050220, 0x00000704, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02000c04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000800,
    0x80000961, 0x55060660, 0x00010580, 0x00000000,
    0x80000061, 0x55260660, 0x00010590, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x67260660, 0x00005524, 0x00000000,
    0x80031961, 0x67060660, 0x00005504, 0x00000000,
    0xe2783161, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004731, 0x54140000,
    0xfb00670c, 0x00340000, 0x80001a61, 0x30010220,
    0x00007804, 0x00000000, 0x80001e69, 0x10018220,
    0x02000c04, 0x00000003, 0x80000961, 0x56060660,
    0x00010400, 0x00000000, 0x80000061, 0x56260660,
    0x00010410, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x68260660,
    0x00005624, 0x00000000, 0x80031961, 0x68060660,
    0x00005604, 0x00000000, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004831, 0x00000000,
    0xfb08680c, 0x00345414, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0570040, 0x04002303,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe0590068, 0x00605703, 0xa06d0040, 0x57003a02,
    0xa05b1a40, 0x59001002, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x00031a61, 0x16060220,
    0x00346d05, 0x00000000, 0x80103901, 0x00000000,
    0x00000000, 0x00000000, 0x00131b61, 0x18060220,
    0x00346e05, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x00041b69, 0x5f058660,
    0x02465b05, 0x00000003, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xe0630068, 0x01d05b03,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xa0671a40, 0x5f010242, 0x00031961, 0x03060220,
    0x00346705, 0x00000000, 0x00131a61, 0x05060220,
    0x00346805, 0x00000000, 0x275d0070, 0x10005b03,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x27690070, 0x0210672b, 0x276f0070, 0x3a006d03,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x6105a660, 0x02465d05, 0x00000003,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xa0711a40, 0x3e026f02, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x20651a66, 0x63006103,
    0x00031a61, 0x16260220, 0x00347105, 0x00000000,
    0x00131b61, 0x18260220, 0x00347205, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x6b040660, 0x0e2e0264, 0x69056505,
    0x00031961, 0x03260220, 0x00346b05, 0x00000000,
    0x00131a61, 0x05260220, 0x00346c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x6c240000, 0xfb000324, 0x00040000,
    0x00032b61, 0x12060220, 0x00346c05, 0x00000000,
    0x00132b61, 0x14060220, 0x00346d05, 0x00000000,
    0x0003ab61, 0x12260220, 0x00346e05, 0x00000000,
    0x0013ab61, 0x14260220, 0x00346f05, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02000c04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000200,
    0x80000961, 0x73060660, 0x00010100, 0x00000000,
    0x80000061, 0x73260660, 0x00010110, 0x00000000,
    0x80031961, 0x25260660, 0x00007324, 0x00000000,
    0x80031961, 0x25060660, 0x00007304, 0x00000000,
    0xe2773161, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004c31, 0x72140000,
    0xfb00250c, 0x00340000, 0x80001a61, 0x30010220,
    0x00007704, 0x00000000, 0x80001e69, 0x10018220,
    0x02000c04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x74060660,
    0x00010300, 0x00000000, 0x80000061, 0x74260660,
    0x00010310, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x69260660,
    0x00007424, 0x00000000, 0x80031961, 0x69060660,
    0x00007404, 0x00000000, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004331, 0x00000000,
    0xfb08690c, 0x00347214, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0750040, 0x08002303,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe0770068, 0x00607503, 0xa02f0040, 0x75003a02,
    0xa0791a40, 0x77001002, 0x00031a61, 0x1f060220,
    0x00342f05, 0x00000000, 0x00131b61, 0x21060220,
    0x00343005, 0x00000000, 0x00041b69, 0x07058660,
    0x02467905, 0x00000003, 0xe0033b68, 0x01d07903,
    0xa0121a40, 0x07010242, 0x00031961, 0x17060220,
    0x00341205, 0x00000000, 0x80103901, 0x00000000,
    0x00000000, 0x00000000, 0x00131a61, 0x19060220,
    0x00341305, 0x00000000, 0x277b0070, 0x10007903,
    0x27140070, 0x0210122b, 0x27310070, 0x3a002f03,
    0x00041b69, 0x0905a660, 0x02467b05, 0x00000003,
    0xa0331a40, 0x3e023102, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x20051a66, 0x03000903,
    0x00031a61, 0x1f260220, 0x00343305, 0x00000000,
    0x00131b61, 0x21260220, 0x00343405, 0x00000000,
    0x00041b52, 0x2a040660, 0x0e2e0264, 0x14050505,
    0x00031961, 0x17260220, 0x00342a05, 0x00000000,
    0x00131a61, 0x19260220, 0x00342b05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x2e240000, 0xfb001724, 0x00040000,
    0x00032961, 0x1b060220, 0x00342e05, 0x00000000,
    0x00132961, 0x1d060220, 0x00342f05, 0x00000000,
    0x0003a961, 0x1b260220, 0x00343005, 0x00000000,
    0x0013a961, 0x1d260220, 0x00343105, 0x00000000,
    0x80001969, 0x10018220, 0x02000c04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000200,
    0x80000961, 0x35060660, 0x00010580, 0x00000000,
    0x80000061, 0x35260660, 0x00010590, 0x00000000,
    0x80031961, 0x26260660, 0x00003524, 0x00000000,
    0x80031961, 0x26060660, 0x00003504, 0x00000000,
    0xe26d0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004d31, 0x34140000,
    0xfb00260c, 0x00340000, 0x80001a61, 0x30010220,
    0x00006d04, 0x00000000, 0x80001e69, 0x10018220,
    0x02000c04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x36060660,
    0x00010780, 0x00000000, 0x80000061, 0x36260660,
    0x00010790, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x6a260660,
    0x00003624, 0x00000000, 0x80031961, 0x6a060660,
    0x00003604, 0x00000000, 0x80002d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004231, 0x00000000,
    0xfb086a0c, 0x00343414, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0370040, 0x0c002303,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0xe03c1968, 0x00603703, 0xa05a0040, 0x37003a02,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xa0431a40, 0x3c001002, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x00031a61, 0x24060220,
    0x00345a05, 0x00000000, 0x80103d01, 0x00000000,
    0x00000000, 0x00000000, 0x80101b01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x26060220,
    0x00345b05, 0x00000000, 0x00041b69, 0x47058660,
    0x02464305, 0x00000003, 0xe04b0068, 0x01d04303,
    0xa04f1a40, 0x47010242, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x55060220,
    0x00344f05, 0x00000000, 0x00131a61, 0x57060220,
    0x00345005, 0x00000000, 0x27453570, 0x10004303,
    0x27510070, 0x02104f2b, 0x275c0070, 0x3a005a03,
    0x00041b69, 0x4905a660, 0x02464505, 0x00000003,
    0xa05e1a40, 0x3e025c02, 0x204d1a66, 0x4b004903,
    0x00031a61, 0x24260220, 0x00345e05, 0x00000000,
    0x00131b61, 0x26260220, 0x00345f05, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00041b52, 0x53040660, 0x0e2e0264, 0x51054d05,
    0x00031961, 0x55260220, 0x00345305, 0x00000000,
    0x00131a61, 0x57260220, 0x00345405, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x59240000, 0xfb005524, 0x00040000,
    0x00032661, 0x20060220, 0x00345905, 0x00000000,
    0x00132661, 0x22060220, 0x00345a05, 0x00000000,
    0x0003a661, 0x20260220, 0x00345b05, 0x00000000,
    0x0013a661, 0x22260220, 0x00345c05, 0x00000000,
    0x80001969, 0x10018220, 0x02000c04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000400,
    0x80000961, 0x60060660, 0x00010000, 0x00000000,
    0x80000061, 0x60260660, 0x00010010, 0x00000000,
    0x80031961, 0x28260660, 0x00006024, 0x00000000,
    0x80031961, 0x28060660, 0x00006004, 0x00000000,
    0xe26c0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004431, 0x5f140000,
    0xfb00280c, 0x00340000, 0x80001a61, 0x30010220,
    0x00006c04, 0x00000000, 0x80001e69, 0x10018220,
    0x02000c04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000400, 0x80000961, 0x61060660,
    0x00010200, 0x00000000, 0x80000061, 0x61260660,
    0x00010210, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x6b260660,
    0x00006124, 0x00000000, 0x80031961, 0x6b060660,
    0x00006104, 0x00000000, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004a31, 0x00000000,
    0xfb086b0c, 0x00345f14, 0x00040052, 0x2c044160,
    0x0e0e0003, 0x2c054105, 0x00040027, 0x00014060,
    0x00000000, 0xfffff240, 0x80031961, 0x7e050220,
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
      .base.program_size = 4912,
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
const char *gfx125_misc_copy_instance_ptrs_base_ptr_indirect_sha1 = "3705b6a8bea44dc7bb669e3528efc101b82a310b";

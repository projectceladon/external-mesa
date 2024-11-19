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

and(1)          g7<1>UD         g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g96<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g7UD            nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(16)         g8<1>UD         g96<8,8,1>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g10<1>D         g2<0,1,0>D      152D            { align1 1H compacted };
shr(16)         g23<1>UD        g2.4<0,1,0>UD   0x00000008UD    { align1 1H compacted };
and(16)         g25<1>UD        g2.4<0,1,0>UD   0xffffff00UD    { align1 1H };
cmp.l.f0.0(16)  g12<1>UD        g10<1,1,0>UD    0x00000098UD    { align1 1H I@3 compacted };
mov(8)          g98<2>UD        g10<4,4,1>UD                    { align1 1Q };
mov(8)          g100<2>UD       g11<4,4,1>UD                    { align1 2Q };
add3(16)        g33<1>D         65534W          -g23<8,8,1>D    g96<1,1,1>D { align1 1H I@5 };
add(16)         g27<1>D         g2.4<0,1,0>D    -g25<1,1,0>D    { align1 1H I@5 compacted };
add(16)         g14<1>D         -g12<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@5 compacted };
mov(16)         g35<1>D         -g33<8,8,1>D                    { align1 1H I@3 };
and(16)         g29<1>UD        g27<8,8,1>UD    0xffffffc0UD    { align1 1H I@3 };
mov(8)          g98.1<2>UD      g14<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g100.1<2>UD     g15<4,4,1>UD                    { align1 2Q I@4 };
shr(16)         g31<1>UD        g29<1,1,0>UD    0x00000006UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g15UD           g98UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
add(16)         g17<1>D         g2<0,1,0>D      g15<1,1,0>D     { align1 1H $1.dst compacted };
cmp.l.f0.0(16)  g19<1>UD        g17<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g35<8,8,1>UD    g31<8,8,1>UD    { align1 1H I@3 };
add(16)         g21<1>D         -g19<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@2 compacted };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g36<1>D         -g33<8,8,1>D    0x00000006UD    { align1 1H };
add(16)         g38<1>D         g25<1,1,0>D     g36<1,1,0>D     { align1 1H I@1 compacted };
shr(16)         g40<1>UD        g38<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
add(16)         g57<1>D         g17<1,1,0>D     g38<1,1,0>D     { align1 1H compacted };
shl(16)         g42<1>D         g40<8,8,1>D     0x00000003UD    { align1 1H I@2 };
mov(8)          g63<2>UD        g57<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g65<2>UD        g58<4,4,1>UD                    { align1 2Q I@3 };
add(16)         g44<1>D         g2.2<0,1,0>D    g42<1,1,0>D     { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g46<1>UD        g44<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g99<2>UD        g44<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g101<2>UD       g45<4,4,1>UD                    { align1 2Q $1.src };
cmp.l.f0.0(16)  g59<1>UD        g57<1,1,0>UD    g17<1,1,0>UD    { align1 1H compacted };
add(16)         g48<1>D         -g46<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@4 compacted };
add(16)         g61<1>D         -g59<1,1,0>D    g21<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g99.1<2>UD      g48<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g101.1<2>UD     g49<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g63.1<2>UD      g61<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g65.1<2>UD      g62<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g49UD           g99UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(8)          g53<2>UD        g49<4,4,1>UD                    { align1 1Q $1.dst };
mov(8)          g55<2>UD        g50<4,4,1>UD                    { align1 2Q $1.dst };
mov(8)          g53.1<2>UD      g51<4,4,1>UD                    { align1 1Q @2 $1.dst };
mov(8)          g55.1<2>UD      g52<4,4,1>UD                    { align1 2Q @2 $1.dst };
mov(1)          g5<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g5<1>UD         g5<0,1,0>UD     0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g67<1>UD        g5<0,1,0>UD                     { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g67<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g69<2>D         g[a0 160]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g69.1<2>D       g[a0 164]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g100.1<2>D      g69.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g100<2>D        g69<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g4<1>UD         f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g105UD   g100UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
mov(1)          f0<1>UD         g4<0,1,0>UD                     { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g67<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g70<2>D         g[a0 480]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g70.1<2>D       g[a0 484]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g101.1<2>D      g70.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g101<2>D        g70<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g101UD          g105UD          0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $1 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shr(16)         g71<1>UD        g25<1,1,0>UD    0x00000008UD    { align1 1H compacted };

LABEL3:
cmp.ge.f0.0(16) null<1>UD       g8<8,8,1>UD     g71<8,8,1>UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL2        UIP:  LABEL2              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
shl(16)         g73<1>D         g8<8,8,1>D      0x00000008UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
shr(16)         g75<1>UD        g73<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
add(16)         g92<1>D         g17<1,1,0>D     g73<1,1,0>D     { align1 1H compacted };
shl(16)         g77<1>D         g75<8,8,1>D     0x00000003UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(8)          g98<2>UD        g92<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@3 };
mov(8)          g100<2>UD       g93<4,4,1>UD                    { align1 2Q };
add(16)         g79<1>D         g2.2<0,1,0>D    g77<1,1,0>D     { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g81<1>UD        g79<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g106<2>UD       g79<4,4,1>UD                    { align1 1Q };
mov(8)          g108<2>UD       g80<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g94<1>UD        g92<1,1,0>UD    g17<1,1,0>UD    { align1 1H compacted };
add(16)         g83<1>D         -g81<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g96<1>D         -g94<1,1,0>D    g21<1,1,0>D     { align1 1H compacted };
mov(8)          g106.1<2>UD     g83<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g108.1<2>UD     g84<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g98.1<2>UD      g96<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g100.1<2>UD     g97<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g84UD           g106UD          nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mov(8)          g88<2>UD        g84<4,4,1>UD                    { align1 1Q $2.dst };
mov(8)          g90<2>UD        g85<4,4,1>UD                    { align1 2Q $2.dst };
mov(8)          g88.1<2>UD      g86<4,4,1>UD                    { align1 1Q @2 $2.dst };
mov(8)          g90.1<2>UD      g87<4,4,1>UD                    { align1 2Q @2 $2.dst };
mov(1)          g6<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g6<1>UD         g6<0,1,0>UD     0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g102<1>UD       g6<0,1,0>UD                     { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
shl(1)          a0<1>UD         g102<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g104<2>D        g[a0 256]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g104.1<2>D      g[a0 260]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g108.1<2>D      g104.1<0,1,0>D                  { align1 WE_all 1Q I@1 };
mov(8)          g108<2>D        g104<0,1,0>D                    { align1 WE_all 1Q I@1 };
mov(1)          g3<1>UD         f0<0,1,0>UD                     { align1 WE_all 1N $3.src compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g113UD   g108UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $4 };
mov(1)          f0<1>UD         g3<0,1,0>UD                     { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
shl(1)          a0<1>UD         g102<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000c00UD    { align1 WE_all 1N A@1 };
mov(1)          g105<2>D        g[a0 64]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g105.1<2>D      g[a0 68]<0,1,0>D                { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g109.1<2>D      g105.1<0,1,0>D                  { align1 WE_all 1Q I@2 };
mov(8)          g109<2>D        g105<0,1,0>D                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g109UD          g113UD          0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g106<1>D        g73<1,1,0>D     64D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g108<1>UD       g106<1,1,0>UD   0x00000006UD    { align1 1H compacted };
add(16)         g125<1>D        g17<1,1,0>D     g106<1,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g110<1>D        g108<8,8,1>D    0x00000003UD    { align1 1H };
mov(8)          g25<2>UD        g125<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g27<2>UD        g126<4,4,1>UD                   { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g112<1>D        g2.2<0,1,0>D    g110<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g29<2>UD        g112<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g31<2>UD        g113<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g114<1>UD       g112<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g10<1>UD        g125<1,1,0>UD   g17<1,1,0>UD    { align1 1H compacted };
add(16)         g116<1>D        -g114<1,1,0>D   g2.3<0,1,0>D    { align1 1H I@2 compacted };
add(16)         g12<1>D         -g10<1,1,0>D    g21<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g29.1<2>UD      g116<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g31.1<2>UD      g117<4,4,1>UD                   { align1 2Q I@3 };
mov(8)          g25.1<2>UD      g12<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g27.1<2>UD      g13<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g117UD          g29UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
mov(8)          g121<2>UD       g117<4,4,1>UD                   { align1 1Q $7.dst };
mov(8)          g123<2>UD       g118<4,4,1>UD                   { align1 2Q $7.dst };
mov(8)          g121.1<2>UD     g119<4,4,1>UD                   { align1 1Q @2 $7.dst };
mov(8)          g123.1<2>UD     g120<4,4,1>UD                   { align1 2Q @2 $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shl(1)          a0<1>UD         g102<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000e00UD    { align1 WE_all 1N A@1 };
mov(1)          g29<2>D         g[a0 288]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g29.1<2>D       g[a0 292]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g3.1<2>D        g29.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g3<2>D          g29<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g127<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g38UD    g3UD            nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $3 };
mov(1)          f0<1>UD         g127<0,1,0>UD                   { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g102<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g30<2>D         g[a0 288]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g30.1<2>D       g[a0 292]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g34.1<2>D       g30.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g34<2>D         g30<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g34UD           g38UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g31<1>D         g73<1,1,0>D     128D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g33<1>UD        g31<1,1,0>UD    0x00000006UD    { align1 1H compacted };
add(16)         g50<1>D         g17<1,1,0>D     g31<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g35<1>D         g33<8,8,1>D     0x00000003UD    { align1 1H };
mov(8)          g56<2>UD        g50<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g58<2>UD        g51<4,4,1>UD                    { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g37<1>D         g2.2<0,1,0>D    g35<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g60<2>UD        g37<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g62<2>UD        g38<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
cmp.l.f0.0(16)  g39<1>UD        g37<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g52<1>UD        g50<1,1,0>UD    g17<1,1,0>UD    { align1 1H compacted };
add(16)         g41<1>D         -g39<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@2 compacted };
add(16)         g54<1>D         -g52<1,1,0>D    g21<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g60.1<2>UD      g41<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g62.1<2>UD      g42<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g56.1<2>UD      g54<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g58.1<2>UD      g55<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g42UD           g60UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
mov(8)          g46<2>UD        g42<4,4,1>UD                    { align1 1Q $9.dst };
mov(8)          g48<2>UD        g43<4,4,1>UD                    { align1 2Q $9.dst };
mov(8)          g46.1<2>UD      g44<4,4,1>UD                    { align1 1Q @2 $9.dst };
mov(8)          g48.1<2>UD      g45<4,4,1>UD                    { align1 2Q @2 $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
shl(1)          a0<1>UD         g102<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000400UD    { align1 WE_all 1N A@1 };
mov(1)          g60<2>D         g[a0 448]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g60.1<2>D       g[a0 452]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g4.1<2>D        g60.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g4<2>D          g60<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g107<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g69UD    g4UD            nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $6 };
mov(1)          f0<1>UD         g107<0,1,0>UD                   { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g102<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g61<2>D         g[a0 256]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g61.1<2>D       g[a0 260]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g65.1<2>D       g61.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g65<2>D         g61<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g65UD           g69UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g62<1>D         g73<1,1,0>D     192D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g64<1>UD        g62<1,1,0>UD    0x00000006UD    { align1 1H compacted };
add(16)         g84<1>D         g17<1,1,0>D     g62<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g66<1>D         g64<8,8,1>D     0x00000003UD    { align1 1H };
mov(8)          g90<2>UD        g84<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g92<2>UD        g85<4,4,1>UD                    { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g68<1>D         g2.2<0,1,0>D    g66<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g94<2>UD        g68<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g96<2>UD        g69<4,4,1>UD                    { align1 2Q I@2 };
cmp.l.f0.0(16)  g73<1>UD        g68<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g86<1>UD        g84<1,1,0>UD    g17<1,1,0>UD    { align1 1H compacted };
add(16)         g75<1>D         -g73<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@2 compacted };
add(16)         g88<1>D         -g86<1,1,0>D    g21<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g94.1<2>UD      g75<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g96.1<2>UD      g76<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g90.1<2>UD      g88<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g92.1<2>UD      g89<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g76UD           g94UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $11 };
mov(8)          g80<2>UD        g76<4,4,1>UD                    { align1 1Q $11.dst };
mov(8)          g82<2>UD        g77<4,4,1>UD                    { align1 2Q $11.dst };
mov(8)          g80.1<2>UD      g78<4,4,1>UD                    { align1 1Q @2 $11.dst };
mov(8)          g82.1<2>UD      g79<4,4,1>UD                    { align1 2Q @2 $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
shl(1)          a0<1>UD         g102<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g94<2>D         g[a0]<0,1,0>D                   { align1 WE_all 1N A@1 };
mov(1)          g94.1<2>D       g[a0 4]<0,1,0>D                 { align1 WE_all 1N };
mov(8)          g98.1<2>D       g94.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g98<2>D         g94<0,1,0>D                     { align1 WE_all 1Q I@1 };
mov(1)          g106<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g104UD   g98UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $12 };
mov(1)          f0<1>UD         g106<0,1,0>UD                   { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
shl(1)          a0<1>UD         g102<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g95<2>D         g[a0 320]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g95.1<2>D       g[a0 324]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g99.1<2>D       g95.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
mov(8)          g99<2>D         g95<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g99UD           g104UD          0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $1 };
add3(16)        g8<1>D          0x0003UW        g23<8,8,1>D     g8<1,1,1>D { align1 1H };

LABEL2:
while(16)       JIP:  LABEL3                                    { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_instance_ptrs_base_ptr_code[] = {
    0x80000065, 0x07058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x60050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00070c, 0x00340000,
    0x00041961, 0x08050220, 0x00466005, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa00a0040, 0x09810203, 0xe0170068, 0x0081025b,
    0x00040065, 0x19058220, 0x02000284, 0xffffff00,
    0xe70c1b70, 0x09800a03, 0x00030061, 0x62060220,
    0x00340a05, 0x00000000, 0x00130061, 0x64060220,
    0x00340b05, 0x00000000, 0x00041d52, 0x21044560,
    0x0e8efffe, 0x60051705, 0xa01b1d40, 0x1921025a,
    0xa00e1d40, 0x02120c12, 0x00041b61, 0x23052660,
    0x00462105, 0x00000000, 0x00041b65, 0x1d058220,
    0x02461b05, 0xffffffc0, 0x00031b61, 0x62260220,
    0x00340e05, 0x00000000, 0x00131c61, 0x64260220,
    0x00340f05, 0x00000000, 0xe01f1b68, 0x00601d03,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x0f140000, 0xfb046224, 0x00040000,
    0xa0112140, 0x0f010202, 0x27131970, 0x02101103,
    0x00041b70, 0x00010220, 0x52462305, 0x00461f05,
    0xa0151a40, 0x02121312, 0x01040022, 0x0001c060,
    0x000002e0, 0x000002e0, 0x00040069, 0x2405a660,
    0x02462105, 0x00000006, 0xa0261940, 0x24001902,
    0xe0281968, 0x00602603, 0xa0390040, 0x26001102,
    0x00041a69, 0x2a058660, 0x02462805, 0x00000003,
    0x00031a61, 0x3f060220, 0x00343905, 0x00000000,
    0x00131b61, 0x41060220, 0x00343a05, 0x00000000,
    0xa02c1b40, 0x2a010242, 0x272e1970, 0x02102c2b,
    0x00033161, 0x63060220, 0x00342c05, 0x00000000,
    0x00133161, 0x65060220, 0x00342d05, 0x00000000,
    0x273b0070, 0x11003903, 0xa0301c40, 0x02122e1a,
    0xa03d1a40, 0x15023b02, 0x00031a61, 0x63260220,
    0x00343005, 0x00000000, 0x00131b61, 0x65260220,
    0x00343105, 0x00000000, 0x00031b61, 0x3f260220,
    0x00343d05, 0x00000000, 0x00131c61, 0x41260220,
    0x00343e05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x31240000,
    0xfb046324, 0x000c0000, 0x00032161, 0x35060220,
    0x00343105, 0x00000000, 0x00132161, 0x37060220,
    0x00343205, 0x00000000, 0x0003a161, 0x35260220,
    0x00343305, 0x00000000, 0x0013a161, 0x37260220,
    0x00343405, 0x00000000, 0xe2050961, 0x00114004,
    0x80000965, 0x05058220, 0x02000504, 0xffffffff,
    0x8000194c, 0x43050220, 0x00000504, 0x00000000,
    0x80001969, 0x10018220, 0x02004304, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000600,
    0x80000961, 0x45060660, 0x00010280, 0x00000000,
    0x80000061, 0x45260660, 0x00010290, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x64260660, 0x00004524, 0x00000000,
    0x80031961, 0x64060660, 0x00004504, 0x00000000,
    0xe2040061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004131, 0x69140000,
    0xfb00640c, 0x00340000, 0x80001a61, 0x30010220,
    0x00000404, 0x00000000, 0x80001e69, 0x10018220,
    0x02004304, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000600, 0x80000961, 0x46060660,
    0x00010780, 0x00000000, 0x80000061, 0x46260660,
    0x00010790, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x65260660,
    0x00004624, 0x00000000, 0x80031961, 0x65060660,
    0x00004604, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004131, 0x00000000,
    0xfb08650c, 0x00346914, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0xe0470068, 0x00801903,
    0x00041970, 0x00010220, 0x42460805, 0x00464705,
    0x01040028, 0x0001c660, 0x00000c80, 0x00000c80,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x49058660, 0x02460805, 0x00000008,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0xe04b1968, 0x00604903, 0xa05c0040, 0x49001102,
    0x00041a69, 0x4d058660, 0x02464b05, 0x00000003,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x62060220, 0x00345c05, 0x00000000,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x80101b01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x64060220, 0x00345d05, 0x00000000,
    0xa04f1b40, 0x4d010242, 0x27511970, 0x02104f2b,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x6a060220, 0x00344f05, 0x00000000,
    0x00130061, 0x6c060220, 0x00345005, 0x00000000,
    0x275e0070, 0x11005c03, 0xa0531c40, 0x0212511a,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0xa0600040, 0x15025e02, 0x00031a61, 0x6a260220,
    0x00345305, 0x00000000, 0x00131b61, 0x6c260220,
    0x00345405, 0x00000000, 0x00031b61, 0x62260220,
    0x00346005, 0x00000000, 0x00131c61, 0x64260220,
    0x00346105, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x54240000,
    0xfb046a24, 0x000c0000, 0x00032261, 0x58060220,
    0x00345405, 0x00000000, 0x00132261, 0x5a060220,
    0x00345505, 0x00000000, 0x0003a261, 0x58260220,
    0x00345605, 0x00000000, 0x0013a261, 0x5a260220,
    0x00345705, 0x00000000, 0xe2060961, 0x00114004,
    0x80000965, 0x06058220, 0x02000604, 0xffffffff,
    0x8000194c, 0x66050220, 0x00000604, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02006604, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000a00,
    0x80000961, 0x68060660, 0x00010400, 0x00000000,
    0x80000061, 0x68260660, 0x00010410, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x6c260660, 0x00006824, 0x00000000,
    0x80031961, 0x6c060660, 0x00006804, 0x00000000,
    0xe2033361, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004431, 0x71140000,
    0xfb006c0c, 0x00340000, 0x80001a61, 0x30010220,
    0x00000304, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80001e69, 0x10018220,
    0x02006604, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000c00, 0x80000961, 0x69060660,
    0x00010100, 0x00000000, 0x80000061, 0x69260660,
    0x00010110, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x6d260660,
    0x00006924, 0x00000000, 0x80031961, 0x6d060660,
    0x00006904, 0x00000000, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004531, 0x00000000,
    0xfb086d0c, 0x00347114, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa06a0040, 0x04004903,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe06c0068, 0x00606a03, 0xa07d0040, 0x6a001102,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x6e058660, 0x02466c05, 0x00000003,
    0x00031a61, 0x19060220, 0x00347d05, 0x00000000,
    0x00131b61, 0x1b060220, 0x00347e05, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xa0701b40, 0x6e010242, 0x00031961, 0x1d060220,
    0x00347005, 0x00000000, 0x00131a61, 0x1f060220,
    0x00347105, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x27720070, 0x0210702b,
    0x270a0070, 0x11007d03, 0xa0741a40, 0x0212721a,
    0xa00c1a40, 0x15020a02, 0x00031a61, 0x1d260220,
    0x00347405, 0x00000000, 0x00131b61, 0x1f260220,
    0x00347505, 0x00000000, 0x00031b61, 0x19260220,
    0x00340c05, 0x00000000, 0x00131c61, 0x1b260220,
    0x00340d05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x75240000,
    0xfb041d24, 0x000c0000, 0x00032761, 0x79060220,
    0x00347505, 0x00000000, 0x00132761, 0x7b060220,
    0x00347605, 0x00000000, 0x0003a761, 0x79260220,
    0x00347705, 0x00000000, 0x0013a761, 0x7b260220,
    0x00347805, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80001969, 0x10018220,
    0x02006604, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000e00, 0x80000961, 0x1d060660,
    0x00010480, 0x00000000, 0x80000061, 0x1d260660,
    0x00010490, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80031961, 0x03260660,
    0x00001d24, 0x00000000, 0x80031961, 0x03060660,
    0x00001d04, 0x00000000, 0xe27f0061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004331, 0x26140000, 0xfb00030c, 0x00340000,
    0x80001a61, 0x30010220, 0x00007f04, 0x00000000,
    0x80001e69, 0x10018220, 0x02006604, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000200,
    0x80000961, 0x1e060660, 0x00010480, 0x00000000,
    0x80000061, 0x1e260660, 0x00010490, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80031a61, 0x22260660, 0x00001e24, 0x00000000,
    0x80031961, 0x22060660, 0x00001e04, 0x00000000,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004831, 0x00000000, 0xfb08220c, 0x00342614,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0xa01f0040, 0x08004903, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xe0210068, 0x00601f03,
    0xa0320040, 0x1f001102, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x23058660,
    0x02462105, 0x00000003, 0x00031a61, 0x38060220,
    0x00343205, 0x00000000, 0x00131b61, 0x3a060220,
    0x00343305, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xa0251b40, 0x23010242,
    0x00031961, 0x3c060220, 0x00342505, 0x00000000,
    0x00131a61, 0x3e060220, 0x00342605, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x27270070, 0x0210252b, 0x27340070, 0x11003203,
    0xa0291a40, 0x0212271a, 0xa0361a40, 0x15023402,
    0x00031a61, 0x3c260220, 0x00342905, 0x00000000,
    0x00131b61, 0x3e260220, 0x00342a05, 0x00000000,
    0x00031b61, 0x38260220, 0x00343605, 0x00000000,
    0x00131c61, 0x3a260220, 0x00343705, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x2a240000, 0xfb043c24, 0x000c0000,
    0x00032961, 0x2e060220, 0x00342a05, 0x00000000,
    0x00132961, 0x30060220, 0x00342b05, 0x00000000,
    0x0003a961, 0x2e260220, 0x00342c05, 0x00000000,
    0x0013a961, 0x30260220, 0x00342d05, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02006604, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000400,
    0x80000961, 0x3c060660, 0x00010700, 0x00000000,
    0x80000061, 0x3c260660, 0x00010710, 0x00000000,
    0x80031961, 0x04260660, 0x00003c24, 0x00000000,
    0x80031961, 0x04060660, 0x00003c04, 0x00000000,
    0xe26b0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004631, 0x45140000,
    0xfb00040c, 0x00340000, 0x80001a61, 0x30010220,
    0x00006b04, 0x00000000, 0x80001e69, 0x10018220,
    0x02006604, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000600, 0x80000961, 0x3d060660,
    0x00010400, 0x00000000, 0x80000061, 0x3d260660,
    0x00010410, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x41260660,
    0x00003d24, 0x00000000, 0x80031961, 0x41060660,
    0x00003d04, 0x00000000, 0x80002601, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004a31, 0x00000000,
    0xfb08410c, 0x00344514, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa03e0040, 0x0c004903,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe0400068, 0x00603e03, 0xa0540040, 0x3e001102,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x42058660, 0x02464005, 0x00000003,
    0x00031a61, 0x5a060220, 0x00345405, 0x00000000,
    0x00131b61, 0x5c060220, 0x00345505, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0xa0441b40, 0x42010242, 0x00031961, 0x5e060220,
    0x00344405, 0x00000000, 0x00131a61, 0x60060220,
    0x00344505, 0x00000000, 0x27490070, 0x0210442b,
    0x27560070, 0x11005403, 0xa04b1a40, 0x0212491a,
    0xa0581a40, 0x15025602, 0x00031a61, 0x5e260220,
    0x00344b05, 0x00000000, 0x00131b61, 0x60260220,
    0x00344c05, 0x00000000, 0x00031b61, 0x5a260220,
    0x00345805, 0x00000000, 0x00131c61, 0x5c260220,
    0x00345905, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x4c240000,
    0xfb045e24, 0x000c0000, 0x00032b61, 0x50060220,
    0x00344c05, 0x00000000, 0x00132b61, 0x52060220,
    0x00344d05, 0x00000000, 0x0003ab61, 0x50260220,
    0x00344e05, 0x00000000, 0x0013ab61, 0x52260220,
    0x00344f05, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001969, 0x10018220,
    0x02006604, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000a00, 0x80000961, 0x5e060660,
    0x00010000, 0x00000000, 0x80000061, 0x5e260660,
    0x00010010, 0x00000000, 0x80031961, 0x62260660,
    0x00005e24, 0x00000000, 0x80031961, 0x62060660,
    0x00005e04, 0x00000000, 0xe26a0061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004c31, 0x68140000, 0xfb00620c, 0x00340000,
    0x80001a61, 0x30010220, 0x00006a04, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001e69, 0x10018220, 0x02006604, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000a00,
    0x80000961, 0x5f060660, 0x00010500, 0x00000000,
    0x80000061, 0x5f260660, 0x00010510, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80031a61, 0x63260660, 0x00005f24, 0x00000000,
    0x80031961, 0x63060660, 0x00005f04, 0x00000000,
    0x80002c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004131, 0x00000000, 0xfb08630c, 0x00346814,
    0x00040052, 0x08044160, 0x0e0e0003, 0x08051705,
    0x00040027, 0x00014060, 0x00000000, 0xfffff370,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_misc_copy_instance_ptrs_base_ptr = {
   .prog_data = {
      .base.nr_params = 14,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 4384,
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
const char *gfx125_misc_copy_instance_ptrs_base_ptr_sha1 = "6287bdb6386443717be6e36518afc700ed11ffd0";

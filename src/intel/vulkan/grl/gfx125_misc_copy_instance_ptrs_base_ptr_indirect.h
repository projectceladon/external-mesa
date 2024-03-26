#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_misc_copy_instance_ptrs_base_ptr_indirect_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_misc_copy_instance_ptrs_base_ptr_indirect_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g71<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g96<1>UD        g0.1<0,1,0>UD                   { align1 1H };
add(1)          g72<1>UD        g71<0,1,0>UD    0x00000000UD    { align1 WE_all 1N I@2 compacted };
mov(16)         g63<1>UD        g96<8,8,1>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g72UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g118.1<2>F      g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g65.1<2>F       g2.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g61.1<2>F       g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g67.1<2>F       g2.3<0,1,0>F                    { align1 2Q };
mov(8)          g102.1<2>F      g2.5<0,1,0>F                    { align1 1Q };
mov(8)          g104.1<2>F      g2.5<0,1,0>F                    { align1 2Q };
mov(8)          g118<2>F        g2<0,1,0>F                      { align1 1Q F@6 compacted };
mov(8)          g65<2>F         g2<0,1,0>F                      { align1 2Q F@6 compacted };
mov(8)          g61<2>F         g2.2<0,1,0>F                    { align1 1Q F@6 compacted };
mov(8)          g67<2>F         g2.2<0,1,0>F                    { align1 2Q F@6 compacted };
mov(8)          g102<2>F        g2.4<0,1,0>F                    { align1 1Q F@6 compacted };
mov(8)          g104<2>F        g2.4<0,1,0>F                    { align1 2Q F@6 compacted };
add(8)          g69<1>D         g118<8,4,2>D    152D            { align1 1Q F@6 compacted };
add(8)          g70<1>D         g65<8,4,2>D     152D            { align1 2Q F@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
send(16)        g1UD            g102UD          nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
mov(8)          g98<2>UD        g69<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g71<1>UD        g69<1,1,0>UD    0x00000098UD    { align1 1H I@2 compacted };
mov(8)          g100<2>UD       g70<4,4,1>UD                    { align1 2Q };
add(8)          g120<1>D        -g71<8,8,1>D    g118.1<8,4,2>D  { align1 1Q I@2 };
add(8)          g72<1>D         -g72<8,8,1>D    g65.1<8,4,2>D   { align1 2Q I@3 };
mov(8)          g98.1<2>UD      g120<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g100.1<2>UD     g72<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g73UD           g98UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
shl(16)         g79<1>D         g1<8,8,1>D      0x00000006UD    { align1 1H $1.dst };
shr(16)         g81<1>UD        g79<1,1,0>UD    0x00000008UD    { align1 1H I@1 compacted };
and(16)         g83<1>UD        g79<8,8,1>UD    0xffffff00UD    { align1 1H };
add(16)         g90<1>D         g81<1,1,0>D     2D              { align1 1H I@2 compacted };
add(16)         g85<1>D         g79<1,1,0>D     -g83<1,1,0>D    { align1 1H I@2 compacted };
add(16)         g92<1>D         g96<1,1,0>D     -g90<1,1,0>D    { align1 1H I@2 compacted };
and(16)         g87<1>UD        g85<8,8,1>UD    0xffffffc0UD    { align1 1H I@2 };
add(8)          g75<1>D         g118<8,4,2>D    g73<1,1,0>D     { align1 1Q $2.dst compacted };
add(8)          g76<1>D         g65<8,4,2>D     g74<1,1,0>D     { align1 2Q $2.dst compacted };
mov(16)         g94<1>D         -g92<8,8,1>D                    { align1 1H I@4 };
shr(16)         g89<1>UD        g87<1,1,0>UD    0x00000006UD    { align1 1H I@4 compacted };
cmp.l.f0.0(8)   g121<1>UD       g75<8,8,1>UD    g118<8,4,2>UD   { align1 1Q I@4 };
cmp.l.f0.0(8)   g77<1>UD        g76<8,8,1>UD    g65<8,4,2>UD    { align1 2Q I@4 };
cmp.l.f0.0(16)  null<1>UD       g94<8,8,1>UD    g89<8,8,1>UD    { align1 1H I@3 };
add(8)          g78<1>D         -g121<8,8,1>D   g118.1<8,4,2>D  { align1 1Q I@3 };
add(8)          g79<1>D         -g77<8,8,1>D    g65.1<8,4,2>D   { align1 2Q I@3 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g95<1>D         -g92<8,8,1>D    0x00000006UD    { align1 1H };
mov(8)          g113<1>UD       g61.1<8,4,2>UD                  { align1 1Q F@4 };
mov(8)          g114<1>UD       g67.1<8,4,2>UD                  { align1 2Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g97<1>D         g83<1,1,0>D     g95<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
shr(16)         g99<1>UD        g97<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
add(16)         g120<1>D        g75<1,1,0>D     g97<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g101<1>D        g3<1,1,0>D      g99<1,1,0>D     { align1 1H $1.dst compacted };
mov(8)          g9<2>UD         g120<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g11<2>UD        g121<4,4,1>UD                   { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g103<1>UD       g101<1,1,0>UD   g3<1,1,0>UD     { align1 1H I@3 compacted };
shl(16)         g105<1>D        g101<8,8,1>D    0x00000003UD    { align1 1H $1.src };
shr(16)         g109<1>UD       g101<1,1,0>UD   0x0000001dUD    { align1 1H compacted };
shl(16)         g107<1>D        -g103<8,8,1>D   0x00000003UD    { align1 1H I@3 };
add(8)          g122<1>D        g61<8,4,2>D     g105<1,1,0>D    { align1 1Q I@3 compacted };
add(8)          g115<1>D        g67<8,4,2>D     g106<1,1,0>D    { align1 2Q I@4 compacted };
or(16)          g111<1>UD       g107<1,1,0>UD   g109<1,1,0>UD   { align1 1H I@3 compacted };
cmp.l.f0.0(8)   g116<1>UD       g122<8,8,1>UD   g61<8,4,2>UD    { align1 1Q I@3 };
mov(8)          g32<2>UD        g122<4,4,1>UD                   { align1 1Q };
cmp.l.f0.0(8)   g117<1>UD       g115<8,8,1>UD   g67<8,4,2>UD    { align1 2Q I@4 };
mov(8)          g34<2>UD        g115<4,4,1>UD                   { align1 2Q };
cmp.l.f0.0(16)  g122<1>UD       g120<1,1,0>UD   g75<1,1,0>UD    { align1 1H compacted };
add3(16)        g118<1>D        g113<8,8,1>D    g111<8,8,1>D    -g116<1,1,1>D { align1 1H I@3 };
add(16)         g124<1>D        -g122<1,1,0>D   g78<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g32.1<2>UD      g118<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g34.1<2>UD      g119<4,4,1>UD                   { align1 2Q I@3 };
mov(8)          g9.1<2>UD       g124<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g11.1<2>UD      g125<4,4,1>UD                   { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g119UD          g32UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $3 };
mov(8)          g5<2>UD         g119<4,4,1>UD                   { align1 1Q $3.dst };
mov(8)          g7<2>UD         g120<4,4,1>UD                   { align1 2Q $3.dst };
mov(8)          g5.1<2>UD       g121<4,4,1>UD                   { align1 1Q @2 $3.dst };
mov(8)          g7.1<2>UD       g122<4,4,1>UD                   { align1 2Q @2 $3.dst };
fbl(1)          g126<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
shl(1)          a0<1>UD         g126<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g13<2>D         g[a0 160]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g13.1<2>D       g[a0 164]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g103.1<2>UD     g13.1<0,1,0>UD                  { align1 WE_all 1Q I@1 };
mov(8)          g103<2>UD       g13<0,1,0>UD                    { align1 WE_all 1Q I@1 };
mov(1)          g117<1>UD       f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g108UD   g103UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $1 };
mov(1)          f0<1>UD         g117<0,1,0>UD                   { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g126<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
mov(1)          g14<2>D         g[a0 288]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g14.1<2>D       g[a0 292]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g104.1<2>UD     g14.1<0,1,0>UD                  { align1 WE_all 1Q I@2 };
mov(8)          g104<2>UD       g14<0,1,0>UD                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g104UD          g108UD          0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $1 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
shr(16)         g5<1>UD         g83<1,1,0>UD    0x00000008UD    { align1 1H compacted };
add(16)         g7<1>D          g81<1,1,0>D     3D              { align1 1H compacted };

LABEL3:
cmp.ge.f0.0(16) null<1>UD       g63<8,8,1>UD    g5<8,8,1>UD     { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL2        UIP:  LABEL2              { align1 1H };
shl(16)         g30<1>D         g63<8,8,1>D     0x00000008UD    { align1 1H };
mov(8)          g10<1>UD        g61.1<8,4,2>UD                  { align1 1Q F@4 };
mov(8)          g11<1>UD        g67.1<8,4,2>UD                  { align1 2Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
shr(16)         g39<1>UD        g30<1,1,0>UD    0x00000006UD    { align1 1H I@3 compacted };
add(16)         g81<1>D         g75<1,1,0>D     g30<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g41<1>D         g3<1,1,0>D      g39<1,1,0>D     { align1 1H @2 $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(8)          g16<2>UD        g81<4,4,1>UD                    { align1 1Q };
mov(8)          g18<2>UD        g82<4,4,1>UD                    { align1 2Q I@3 };
cmp.l.f0.0(16)  g45<1>UD        g41<1,1,0>UD    g3<1,1,0>UD     { align1 1H I@3 compacted };
shl(16)         g47<1>D         g41<8,8,1>D     0x00000003UD    { align1 1H };
shr(16)         g53<1>UD        g41<1,1,0>UD    0x0000001dUD    { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
shl(16)         g51<1>D         -g45<8,8,1>D    0x00000003UD    { align1 1H I@3 };
add(8)          g123<1>D        g61<8,4,2>D     g47<1,1,0>D     { align1 1Q I@3 compacted };
add(8)          g69<1>D         g67<8,4,2>D     g48<1,1,0>D     { align1 2Q I@4 compacted };
or(16)          g65<1>UD        g51<1,1,0>UD    g53<1,1,0>UD    { align1 1H I@3 compacted };
cmp.l.f0.0(8)   g70<1>UD        g123<8,8,1>UD   g61<8,4,2>UD    { align1 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g33<2>UD        g123<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@4 };
cmp.l.f0.0(8)   g71<1>UD        g69<8,8,1>UD    g67<8,4,2>UD    { align1 2Q };
mov(8)          g35<2>UD        g69<4,4,1>UD                    { align1 2Q $3.src };
cmp.l.f0.0(16)  g83<1>UD        g81<1,1,0>UD    g75<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add3(16)        g72<1>D         g10<8,8,1>D     g65<8,8,1>D     -g70<1,1,1>D { align1 1H };
add(16)         g85<1>D         -g83<1,1,0>D    g78<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g33.1<2>UD      g72<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g35.1<2>UD      g73<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g16.1<2>UD      g85<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g18.1<2>UD      g86<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g80UD           g33UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $6 };
mov(8)          g12<2>UD        g80<4,4,1>UD                    { align1 1Q $6.dst };
mov(8)          g14<2>UD        g81<4,4,1>UD                    { align1 2Q $6.dst };
mov(8)          g12.1<2>UD      g82<4,4,1>UD                    { align1 1Q @2 $6.dst };
mov(8)          g14.1<2>UD      g83<4,4,1>UD                    { align1 2Q @2 $6.dst };
fbl(1)          g20<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
shl(1)          a0<1>UD         g20<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g22<2>D         g[a0 384]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g22.1<2>D       g[a0 388]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g109.1<2>UD     g22.1<0,1,0>UD                  { align1 WE_all 1Q I@1 };
mov(8)          g109<2>UD       g22<0,1,0>UD                    { align1 WE_all 1Q I@1 };
mov(1)          g60<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g37UD    g109UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $9 };
mov(1)          f0<1>UD         g60<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g20<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g23<2>D         g[a0]<0,1,0>D                   { align1 WE_all 1N A@1 };
mov(1)          g23.1<2>D       g[a0 4]<0,1,0>D                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g110.1<2>UD     g23.1<0,1,0>UD                  { align1 WE_all 1Q I@2 };
mov(8)          g110<2>UD       g23<0,1,0>UD                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g110UD          g37UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $10 };
add(16)         g88<1>D         g30<1,1,0>D     64D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shr(16)         g90<1>UD        g88<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g109<1>D        g75<1,1,0>D     g88<1,1,0>D     { align1 1H compacted };
add(16)         g92<1>D         g3<1,1,0>D      g90<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g21<2>UD        g109<4,4,1>UD                   { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@3 };
mov(8)          g23<2>UD        g110<4,4,1>UD                   { align1 2Q };
shl(16)         g96<1>D         g92<8,8,1>D     0x00000003UD    { align1 1H I@3 };
shr(16)         g100<1>UD       g92<1,1,0>UD    0x0000001dUD    { align1 1H $2.src compacted };
add(8)          g124<1>D        g61<8,4,2>D     g96<1,1,0>D     { align1 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
add(8)          g104<1>D        g67<8,4,2>D     g97<1,1,0>D     { align1 2Q I@3 compacted };
mov(8)          g39<2>UD        g124<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g41<2>UD        g104<4,4,1>UD                   { align1 2Q I@2 };
cmp.l.f0.0(16)  g94<1>UD        g92<1,1,0>UD    g3<1,1,0>UD     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(8)   g105<1>UD       g124<8,8,1>UD   g61<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(8)   g106<1>UD       g104<8,8,1>UD   g67<8,4,2>UD    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
cmp.l.f0.0(16)  g111<1>UD       g109<1,1,0>UD   g75<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
shl(16)         g98<1>D         -g94<8,8,1>D    0x00000003UD    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g113<1>D        -g111<1,1,0>D   g78<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
or(16)          g102<1>UD       g98<1,1,0>UD    g100<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g21.1<2>UD      g113<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g23.1<2>UD      g114<4,4,1>UD                   { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add3(16)        g107<1>D        g10<8,8,1>D     g102<8,8,1>D    -g105<1,1,1>D { align1 1H I@3 };
mov(8)          g39.1<2>UD      g107<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g41.1<2>UD      g108<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g108UD          g39UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $4 };
mov(8)          g17<2>UD        g108<4,4,1>UD                   { align1 1Q $4.dst };
mov(8)          g19<2>UD        g109<4,4,1>UD                   { align1 2Q $4.dst };
mov(8)          g17.1<2>UD      g110<4,4,1>UD                   { align1 1Q @2 $4.dst };
mov(8)          g19.1<2>UD      g111<4,4,1>UD                   { align1 2Q @2 $4.dst };
fbl(1)          g25<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shl(1)          a0<1>UD         g25<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g32<2>D         g[a0 32]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g32.1<2>D       g[a0 36]<0,1,0>D                { align1 WE_all 1N };
mov(8)          g111.1<2>UD     g32.1<0,1,0>UD                  { align1 WE_all 1Q I@1 };
mov(8)          g111<2>UD       g32<0,1,0>UD                    { align1 WE_all 1Q I@1 };
mov(1)          g59<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g43UD    g111UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $7 };
mov(1)          f0<1>UD         g59<0,1,0>UD                    { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shl(1)          a0<1>UD         g25<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g33<2>D         g[a0 160]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g33.1<2>D       g[a0 164]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g112.1<2>UD     g33.1<0,1,0>UD                  { align1 WE_all 1Q I@2 };
mov(8)          g112<2>UD       g33<0,1,0>UD                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g112UD          g43UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(16)         g116<1>D        g30<1,1,0>D     128D            { align1 1H compacted };
shr(16)         g118<1>UD       g116<1,1,0>UD   0x00000006UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
add(16)         g33<1>D         g75<1,1,0>D     g116<1,1,0>D    { align1 1H compacted };
add(16)         g120<1>D        g3<1,1,0>D      g118<1,1,0>D    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(8)          g26<2>UD        g33<4,4,1>UD                    { align1 1Q };
mov(8)          g28<2>UD        g34<4,4,1>UD                    { align1 2Q I@3 };
shl(16)         g124<1>D        g120<8,8,1>D    0x00000003UD    { align1 1H I@3 };
shr(16)         g12<1>UD        g120<1,1,0>UD   0x0000001dUD    { align1 1H compacted };
add(8)          g9<1>D          g61<8,4,2>D     g124<1,1,0>D    { align1 1Q I@2 compacted };
add(8)          g16<1>D         g67<8,4,2>D     g125<1,1,0>D    { align1 2Q I@3 compacted };
mov(8)          g45<2>UD        g9<4,4,1>UD                     { align1 1Q I@2 };
mov(8)          g47<2>UD        g16<4,4,1>UD                    { align1 2Q I@2 };
cmp.l.f0.0(16)  g122<1>UD       g120<1,1,0>UD   g3<1,1,0>UD     { align1 1H compacted };
cmp.l.f0.0(8)   g17<1>UD        g9<8,8,1>UD     g61<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(8)   g18<1>UD        g16<8,8,1>UD    g67<8,4,2>UD    { align1 2Q };
cmp.l.f0.0(16)  g35<1>UD        g33<1,1,0>UD    g75<1,1,0>UD    { align1 1H compacted };
shl(16)         g126<1>D        -g122<8,8,1>D   0x00000003UD    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g39<1>D         -g35<1,1,0>D    g78<1,1,0>D     { align1 1H I@2 compacted };
or(16)          g14<1>UD        g126<1,1,0>UD   g12<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g26.1<2>UD      g39<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g28.1<2>UD      g40<4,4,1>UD                    { align1 2Q I@3 };
add3(16)        g19<1>D         g10<8,8,1>D     g14<8,8,1>D     -g17<1,1,1>D { align1 1H I@3 };
mov(8)          g45.1<2>UD      g19<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g47.1<2>UD      g20<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g32UD           g45UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $15 };
mov(8)          g22<2>UD        g32<4,4,1>UD                    { align1 1Q $15.dst };
mov(8)          g24<2>UD        g33<4,4,1>UD                    { align1 2Q $15.dst };
mov(8)          g22.1<2>UD      g34<4,4,1>UD                    { align1 1Q @2 $15.dst };
mov(8)          g24.1<2>UD      g35<4,4,1>UD                    { align1 2Q @2 $15.dst };
fbl(1)          g41<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
shl(1)          a0<1>UD         g41<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g45<2>D         g[a0 192]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g45.1<2>D       g[a0 196]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g113.1<2>UD     g45.1<0,1,0>UD                  { align1 WE_all 1Q I@1 };
mov(8)          g113<2>UD       g45<0,1,0>UD                    { align1 WE_all 1Q I@1 };
mov(1)          g58<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g49UD    g113UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $11 };
mov(1)          f0<1>UD         g58<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g41<0,1,0>UD    0x00000003UD    { align1 WE_all 1N };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g51<2>D         g[a0 320]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g51.1<2>D       g[a0 324]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(8)          g114.1<2>UD     g51.1<0,1,0>UD                  { align1 WE_all 1Q I@2 };
mov(8)          g114<2>UD       g51<0,1,0>UD                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g114UD          g49UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
add(16)         g45<1>D         g30<1,1,0>D     192D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g47<1>UD        g45<1,1,0>UD    0x00000006UD    { align1 1H compacted };
add(16)         g89<1>D         g75<1,1,0>D     g45<1,1,0>D     { align1 1H compacted };
add(16)         g65<1>D         g3<1,1,0>D      g47<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g31<2>UD        g89<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g33<2>UD        g90<4,4,1>UD                    { align1 2Q I@3 };
shl(16)         g71<1>D         g65<8,8,1>D     0x00000003UD    { align1 1H I@3 };
shr(16)         g80<1>UD        g65<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
add(8)          g12<1>D         g61<8,4,2>D     g71<1,1,0>D     { align1 1Q I@2 compacted };
add(8)          g84<1>D         g67<8,4,2>D     g72<1,1,0>D     { align1 2Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(8)          g51<2>UD        g12<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
mov(8)          g53<2>UD        g84<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g69<1>UD        g65<1,1,0>UD    g3<1,1,0>UD     { align1 1H compacted };
cmp.l.f0.0(8)   g85<1>UD        g12<8,8,1>UD    g61<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(8)   g86<1>UD        g84<8,8,1>UD    g67<8,4,2>UD    { align1 2Q };
cmp.l.f0.0(16)  g91<1>UD        g89<1,1,0>UD    g75<1,1,0>UD    { align1 1H compacted };
shl(16)         g73<1>D         -g69<8,8,1>D    0x00000003UD    { align1 1H I@4 };
add(16)         g93<1>D         -g91<1,1,0>D    g78<1,1,0>D     { align1 1H I@2 compacted };
or(16)          g82<1>UD        g73<1,1,0>UD    g80<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g31.1<2>UD      g93<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g33.1<2>UD      g94<4,4,1>UD                    { align1 2Q I@3 };
add3(16)        g87<1>D         g10<8,8,1>D     g82<8,8,1>D     -g85<1,1,1>D { align1 1H I@3 };
mov(8)          g51.1<2>UD      g87<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g53.1<2>UD      g88<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g88UD           g51UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $5 };
mov(8)          g27<2>UD        g88<4,4,1>UD                    { align1 1Q $5.dst };
mov(8)          g29<2>UD        g89<4,4,1>UD                    { align1 2Q $5.dst };
mov(8)          g27.1<2>UD      g90<4,4,1>UD                    { align1 1Q @2 $5.dst };
mov(8)          g29.1<2>UD      g91<4,4,1>UD                    { align1 2Q @2 $5.dst };
fbl(1)          g95<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
shl(1)          a0<1>UD         g95<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g69<2>D         g[a0 352]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g69.1<2>D       g[a0 356]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g115.1<2>UD     g69.1<0,1,0>UD                  { align1 WE_all 1Q I@1 };
mov(8)          g115<2>UD       g69<0,1,0>UD                    { align1 WE_all 1Q I@1 };
mov(1)          g57<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g55UD    g115UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $13 };
mov(1)          f0<1>UD         g57<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g95<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g70<2>D         g[a0 480]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g70.1<2>D       g[a0 484]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g116.1<2>UD     g70.1<0,1,0>UD                  { align1 WE_all 1Q I@2 };
mov(8)          g116<2>UD       g70<0,1,0>UD                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g116UD          g55UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $14 };
add(16)         g63<1>D         g7<1,1,0>D      g63<1,1,0>D     { align1 1H compacted };

LABEL2:
while(16)       JIP:  LABEL3                                    { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_instance_ptrs_base_ptr_indirect_code[] = {
    0x80000065, 0x47058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x60050220, 0x00000024, 0x00000000,
    0xe2481a40, 0x00014703, 0x00041a61, 0x3f050220,
    0x00466005, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa00480c, 0x00340000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x21760061, 0x001102cc,
    0x2a410061, 0x001102cc, 0x00030061, 0x3d260aa0,
    0x00000264, 0x00000000, 0x00130061, 0x43260aa0,
    0x00000264, 0x00000000, 0x00030061, 0x66260aa0,
    0x000002a4, 0x00000000, 0x00130061, 0x68260aa0,
    0x000002a4, 0x00000000, 0x21761661, 0x00110204,
    0x2a411661, 0x00110204, 0x213d1661, 0x00110244,
    0x2a431661, 0x00110244, 0x21661661, 0x0011025c,
    0x2a681661, 0x0011025c, 0xa1451640, 0x098e7603,
    0xaa461540, 0x098e4103, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x01240000,
    0xfb046624, 0x000c0000, 0x00031a61, 0x62060220,
    0x00344505, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xe7471a70, 0x09804503,
    0x00130061, 0x64060220, 0x00344605, 0x00000000,
    0x00031a40, 0x78052660, 0x06464705, 0x00447626,
    0x00131b40, 0x48052660, 0x06464805, 0x00444126,
    0x00031a61, 0x62260220, 0x00347805, 0x00000000,
    0x00131a61, 0x64260220, 0x00344805, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x49140000, 0xfb046224, 0x00040000,
    0x00042169, 0x4f058660, 0x02460105, 0x00000006,
    0xe0511968, 0x00804f03, 0x00040065, 0x53058220,
    0x02464f05, 0xffffff00, 0xa05a1a40, 0x00205103,
    0xa0551a40, 0x53204f02, 0xa05c1a40, 0x5a206002,
    0x00041a65, 0x57058220, 0x02465505, 0xffffffc0,
    0xa14b2240, 0x490e7602, 0xaa4c2240, 0x4a0e4102,
    0x00041c61, 0x5e052660, 0x00465c05, 0x00000000,
    0xe0591c68, 0x00605703, 0x00031c70, 0x79050220,
    0x52464b05, 0x00447606, 0x00131c70, 0x4d050220,
    0x52464c05, 0x00444106, 0x00041b70, 0x00010220,
    0x52465e05, 0x00465905, 0x00031b40, 0x4e052660,
    0x06467905, 0x00447626, 0x00131b40, 0x4f052660,
    0x06464d05, 0x00444126, 0x01040022, 0x0001c060,
    0x00000338, 0x00000338, 0x00040069, 0x5f05a660,
    0x02465c05, 0x00000006, 0x00031461, 0x71050220,
    0x00443d26, 0x00000000, 0x00131361, 0x72050220,
    0x00444326, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa0611b40, 0x5f005302,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xe0631968, 0x00606103, 0xa0780040, 0x61004b02,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0xa0652140, 0x63000302, 0x00031a61, 0x09060220,
    0x00347805, 0x00000000, 0x00131b61, 0x0b060220,
    0x00347905, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x27671b70, 0x03006503,
    0x00043169, 0x69058660, 0x02466505, 0x00000003,
    0xe06d0068, 0x01d06503, 0x00041b69, 0x6b05a660,
    0x02466705, 0x00000003, 0xa17a1b40, 0x690e3d02,
    0xaa731c40, 0x6a0e4302, 0x206f1b66, 0x6d006b03,
    0x00031b70, 0x74050220, 0x52467a05, 0x00443d06,
    0x00030061, 0x20060220, 0x00347a05, 0x00000000,
    0x00131c70, 0x75050220, 0x52467305, 0x00444306,
    0x00130061, 0x22060220, 0x00347305, 0x00000000,
    0x277a0070, 0x4b007803, 0x00041b52, 0x76040e68,
    0x0e2e7105, 0x74056f05, 0xa07c1a40, 0x4e027a02,
    0x00031a61, 0x20260220, 0x00347605, 0x00000000,
    0x00131b61, 0x22260220, 0x00347705, 0x00000000,
    0x00031b61, 0x09260220, 0x00347c05, 0x00000000,
    0x00131c61, 0x0b260220, 0x00347d05, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x77240000, 0xfb042024, 0x000c0000,
    0x00032361, 0x05060220, 0x00347705, 0x00000000,
    0x00132361, 0x07060220, 0x00347805, 0x00000000,
    0x0003a361, 0x05260220, 0x00347905, 0x00000000,
    0x0013a361, 0x07260220, 0x00347a05, 0x00000000,
    0xe27e004c, 0x00114004, 0x80001969, 0x10018220,
    0x02007e04, 0x00000003, 0x80000961, 0x0d060660,
    0x00010280, 0x00000000, 0x80000061, 0x0d260660,
    0x00010290, 0x00000000, 0x80031961, 0x67260220,
    0x00000d24, 0x00000000, 0x80031961, 0x67060220,
    0x00000d04, 0x00000000, 0xe2750061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004131, 0x6c140000, 0xfb00670c, 0x00340000,
    0x80001a61, 0x30010220, 0x00007504, 0x00000000,
    0x80001e69, 0x10018220, 0x02007e04, 0x00000003,
    0x80000961, 0x0e060660, 0x00010480, 0x00000000,
    0x80000061, 0x0e260660, 0x00010490, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80031a61, 0x68260220, 0x00000e24, 0x00000000,
    0x80031961, 0x68060220, 0x00000e04, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004131, 0x00000000, 0xfb08680c, 0x00346c14,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0xe0050068, 0x00805303, 0xa0070040, 0x00305103,
    0x00041a70, 0x00010220, 0x42463f05, 0x00460505,
    0x01040028, 0x0001c660, 0x00000e70, 0x00000e70,
    0x00040069, 0x1e058660, 0x02463f05, 0x00000008,
    0x00031461, 0x0a050220, 0x00443d26, 0x00000000,
    0x00131361, 0x0b050220, 0x00444326, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xe0271b68, 0x00601e03, 0xa0510040, 0x1e004b02,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa029a140, 0x27000302, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x10060220,
    0x00345105, 0x00000000, 0x00131b61, 0x12060220,
    0x00345205, 0x00000000, 0x272d1b70, 0x03002903,
    0x00040069, 0x2f058660, 0x02462905, 0x00000003,
    0xe0353568, 0x01d02903, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00041b69, 0x3305a660,
    0x02462d05, 0x00000003, 0xa17b1b40, 0x2f0e3d02,
    0xaa451c40, 0x300e4302, 0x20411b66, 0x35003303,
    0x00031b70, 0x46050220, 0x52467b05, 0x00443d06,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x21060220, 0x00347b05, 0x00000000,
    0x80101c01, 0x00000000, 0x00000000, 0x00000000,
    0x00130070, 0x47050220, 0x52464505, 0x00444306,
    0x00133361, 0x23060220, 0x00344505, 0x00000000,
    0x27530070, 0x4b005103, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x48040e68,
    0x0e2e0a05, 0x46054105, 0xa0551a40, 0x4e025302,
    0x00031a61, 0x21260220, 0x00344805, 0x00000000,
    0x00131b61, 0x23260220, 0x00344905, 0x00000000,
    0x00031b61, 0x10260220, 0x00345505, 0x00000000,
    0x00131c61, 0x12260220, 0x00345605, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x50240000, 0xfb042124, 0x000c0000,
    0x00032661, 0x0c060220, 0x00345005, 0x00000000,
    0x00132661, 0x0e060220, 0x00345105, 0x00000000,
    0x0003a661, 0x0c260220, 0x00345205, 0x00000000,
    0x0013a661, 0x0e260220, 0x00345305, 0x00000000,
    0xe214004c, 0x00114004, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001969, 0x10018220,
    0x02001404, 0x00000003, 0x80000961, 0x16060660,
    0x00010600, 0x00000000, 0x80000061, 0x16260660,
    0x00010610, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80031961, 0x6d260220,
    0x00001624, 0x00000000, 0x80031961, 0x6d060220,
    0x00001604, 0x00000000, 0xe23c0061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004931, 0x25140000, 0xfb006d0c, 0x00340000,
    0x80001a61, 0x30010220, 0x00003c04, 0x00000000,
    0x80001e69, 0x10018220, 0x02001404, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000200,
    0x80000961, 0x17060660, 0x00010000, 0x00000000,
    0x80000061, 0x17260660, 0x00010010, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80031a61, 0x6e260220, 0x00001724, 0x00000000,
    0x80031961, 0x6e060220, 0x00001704, 0x00000000,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004a31, 0x00000000, 0xfb086e0c, 0x00342514,
    0xa0580040, 0x04001e03, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0xe05a1968, 0x00605803,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0xa06d0040, 0x58004b02, 0xa05c1a40, 0x5a000302,
    0x00031a61, 0x15060220, 0x00346d05, 0x00000000,
    0x80101b01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x17060220, 0x00346e05, 0x00000000,
    0x00041b69, 0x60058660, 0x02465c05, 0x00000003,
    0xe0643268, 0x01d05c03, 0xa17c1a40, 0x600e3d02,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0xaa681b40, 0x610e4302, 0x00031a61, 0x27060220,
    0x00347c05, 0x00000000, 0x00131a61, 0x29060220,
    0x00346805, 0x00000000, 0x275e0070, 0x03005c03,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00030070, 0x69050220, 0x52467c05, 0x00443d06,
    0x00130070, 0x6a050220, 0x52466805, 0x00444306,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x276f0070, 0x4b006d03, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041c69, 0x6205a660,
    0x02465e05, 0x00000003, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0711a40, 0x4e026f02,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x20661a66, 0x64006203, 0x00031a61, 0x15260220,
    0x00347105, 0x00000000, 0x00131b61, 0x17260220,
    0x00347205, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00041b52, 0x6b040e68,
    0x0e2e0a05, 0x69056605, 0x00031961, 0x27260220,
    0x00346b05, 0x00000000, 0x00131a61, 0x29260220,
    0x00346c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x6c240000,
    0xfb042724, 0x000c0000, 0x00032461, 0x11060220,
    0x00346c05, 0x00000000, 0x00132461, 0x13060220,
    0x00346d05, 0x00000000, 0x0003a461, 0x11260220,
    0x00346e05, 0x00000000, 0x0013a461, 0x13260220,
    0x00346f05, 0x00000000, 0xe219004c, 0x00114004,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02001904, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000200,
    0x80000961, 0x20060660, 0x00010080, 0x00000000,
    0x80000061, 0x20260660, 0x00010090, 0x00000000,
    0x80031961, 0x6f260220, 0x00002024, 0x00000000,
    0x80031961, 0x6f060220, 0x00002004, 0x00000000,
    0xe23b0061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004731, 0x2b140000,
    0xfb006f0c, 0x00340000, 0x80001a61, 0x30010220,
    0x00003b04, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001e69, 0x10018220,
    0x02001904, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x21060660,
    0x00010280, 0x00000000, 0x80000061, 0x21260660,
    0x00010290, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x70260220,
    0x00002124, 0x00000000, 0x80031961, 0x70060220,
    0x00002104, 0x00000000, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004831, 0x00000000,
    0xfb08700c, 0x00342b14, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0xa0740040, 0x08001e03,
    0xe0761968, 0x00607403, 0x80001e01, 0x00000000,
    0x00000000, 0x00000000, 0xa0210040, 0x74004b02,
    0xa0781a40, 0x76000302, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x1a060220,
    0x00342105, 0x00000000, 0x00131b61, 0x1c060220,
    0x00342205, 0x00000000, 0x00041b69, 0x7c058660,
    0x02467805, 0x00000003, 0xe00c0068, 0x01d07803,
    0xa1091a40, 0x7c0e3d02, 0xaa101b40, 0x7d0e4302,
    0x00031a61, 0x2d060220, 0x00340905, 0x00000000,
    0x00131a61, 0x2f060220, 0x00341005, 0x00000000,
    0x277a0070, 0x03007803, 0x00030070, 0x11050220,
    0x52460905, 0x00443d06, 0x00130070, 0x12050220,
    0x52461005, 0x00444306, 0x27230070, 0x4b002103,
    0x00041c69, 0x7e05a660, 0x02467a05, 0x00000003,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa0271a40, 0x4e022302, 0x200e1a66, 0x0c007e03,
    0x00031a61, 0x1a260220, 0x00342705, 0x00000000,
    0x00131b61, 0x1c260220, 0x00342805, 0x00000000,
    0x00041b52, 0x13040e68, 0x0e2e0a05, 0x11050e05,
    0x00031961, 0x2d260220, 0x00341305, 0x00000000,
    0x00131a61, 0x2f260220, 0x00341405, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044f31, 0x20240000, 0xfb042d24, 0x000c0000,
    0x00032f61, 0x16060220, 0x00342005, 0x00000000,
    0x00132f61, 0x18060220, 0x00342105, 0x00000000,
    0x0003af61, 0x16260220, 0x00342205, 0x00000000,
    0x0013af61, 0x18260220, 0x00342305, 0x00000000,
    0xe229344c, 0x00114004, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x80001969, 0x10018220,
    0x02002904, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x2d060660,
    0x00010300, 0x00000000, 0x80000061, 0x2d260660,
    0x00010310, 0x00000000, 0x80031961, 0x71260220,
    0x00002d24, 0x00000000, 0x80031961, 0x71060220,
    0x00002d04, 0x00000000, 0xe23a0061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004b31, 0x31140000, 0xfb00710c, 0x00340000,
    0x80001a61, 0x30010220, 0x00003a04, 0x00000000,
    0x80000069, 0x10018220, 0x02002904, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000200,
    0x80000961, 0x33060660, 0x00010500, 0x00000000,
    0x80000061, 0x33260660, 0x00010510, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80031a61, 0x72260220, 0x00003324, 0x00000000,
    0x80031961, 0x72060220, 0x00003304, 0x00000000,
    0x80002b01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004c31, 0x00000000, 0xfb08720c, 0x00343114,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0xa02d0040, 0x0c001e03, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xe02f0068, 0x00602d03,
    0xa0590040, 0x2d004b02, 0xa0411a40, 0x2f000302,
    0x00031a61, 0x1f060220, 0x00345905, 0x00000000,
    0x00131b61, 0x21060220, 0x00345a05, 0x00000000,
    0x00041b69, 0x47058660, 0x02464105, 0x00000003,
    0xe0500068, 0x01d04103, 0xa10c1a40, 0x470e3d02,
    0xaa541b40, 0x480e4302, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x33060220,
    0x00340c05, 0x00000000, 0x80101a01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x35060220,
    0x00345405, 0x00000000, 0x27450070, 0x03004103,
    0x00030070, 0x55050220, 0x52460c05, 0x00443d06,
    0x00130070, 0x56050220, 0x52465405, 0x00444306,
    0x275b0070, 0x4b005903, 0x00041c69, 0x4905a660,
    0x02464505, 0x00000003, 0xa05d1a40, 0x4e025b02,
    0x20521a66, 0x50004903, 0x00031a61, 0x1f260220,
    0x00345d05, 0x00000000, 0x00131b61, 0x21260220,
    0x00345e05, 0x00000000, 0x00041b52, 0x57040e68,
    0x0e2e0a05, 0x55055205, 0x00031961, 0x33260220,
    0x00345705, 0x00000000, 0x00131a61, 0x35260220,
    0x00345805, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x58240000,
    0xfb043324, 0x000c0000, 0x00032561, 0x1b060220,
    0x00345805, 0x00000000, 0x00132561, 0x1d060220,
    0x00345905, 0x00000000, 0x0003a561, 0x1b260220,
    0x00345a05, 0x00000000, 0x0013a561, 0x1d260220,
    0x00345b05, 0x00000000, 0xe25f004c, 0x00114004,
    0x80001969, 0x10018220, 0x02005f04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000200,
    0x80000961, 0x45060660, 0x00010580, 0x00000000,
    0x80000061, 0x45260660, 0x00010590, 0x00000000,
    0x80031961, 0x73260220, 0x00004524, 0x00000000,
    0x80031961, 0x73060220, 0x00004504, 0x00000000,
    0xe2390061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004d31, 0x37140000,
    0xfb00730c, 0x00340000, 0x80001a61, 0x30010220,
    0x00003904, 0x00000000, 0x80001e69, 0x10018220,
    0x02005f04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x46060660,
    0x00010780, 0x00000000, 0x80000061, 0x46260660,
    0x00010790, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x74260220,
    0x00004624, 0x00000000, 0x80031961, 0x74060220,
    0x00004604, 0x00000000, 0x80002d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004e31, 0x00000000,
    0xfb08740c, 0x00343714, 0xa03f0040, 0x3f000702,
    0x00040027, 0x00014060, 0x00000000, 0xfffff180,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_misc_copy_instance_ptrs_base_ptr_indirect = {
   .prog_data = {
      .base.nr_params = 14,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 5264,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_misc_copy_instance_ptrs_base_ptr_indirect_relocs,
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
const char *gfx125_misc_copy_instance_ptrs_base_ptr_indirect_sha1 = "4c16e4923ff1c492b0ca93f6cc878367b0dc84fa";

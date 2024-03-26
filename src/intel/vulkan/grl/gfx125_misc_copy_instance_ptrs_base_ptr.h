#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_misc_copy_instance_ptrs_base_ptr_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_misc_copy_instance_ptrs_base_ptr_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g117<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g97<1>UD        g0.1<0,1,0>UD                   { align1 1H };
add(1)          g118<1>UD       g117<0,1,0>UD   0x00000000UD    { align1 WE_all 1N I@2 compacted };
mov(16)         g43<1>UD        g97<8,8,1>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g118UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g82.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g45.1<2>F       g2.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g41.1<2>F       g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g47.1<2>F       g2.3<0,1,0>F                    { align1 2Q };
mov(8)          g84.1<2>F       g2.5<0,1,0>F                    { align1 1Q };
mov(8)          g49.1<2>F       g2.5<0,1,0>F                    { align1 2Q };
mov(8)          g82<2>F         g2<0,1,0>F                      { align1 1Q F@6 compacted };
mov(8)          g45<2>F         g2<0,1,0>F                      { align1 2Q F@6 compacted };
mov(8)          g41<2>F         g2.2<0,1,0>F                    { align1 1Q F@6 compacted };
mov(8)          g47<2>F         g2.2<0,1,0>F                    { align1 2Q F@6 compacted };
mov(8)          g84<2>F         g2.4<0,1,0>F                    { align1 1Q F@6 compacted };
mov(8)          g49<2>F         g2.4<0,1,0>F                    { align1 2Q F@6 compacted };
add(8)          g51<1>D         g82<8,4,2>D     152D            { align1 1Q F@6 compacted };
add(8)          g52<1>D         g45<8,4,2>D     152D            { align1 2Q F@5 compacted };
shr(8)          g62<1>UD        g84<8,4,2>UD    0x00000008UD    { align1 1Q F@2 compacted };
and(8)          g64<1>UD        g84<8,4,2>UD    0xffffff00UD    { align1 1Q };
shr(8)          g63<1>UD        g49<8,4,2>UD    0x00000008UD    { align1 2Q F@1 compacted };
and(8)          g65<1>UD        g49<8,4,2>UD    0xffffff00UD    { align1 2Q };
mov(8)          g57<2>UD        g51<4,4,1>UD                    { align1 1Q I@6 };
cmp.l.f0.0(16)  g53<1>UD        g51<1,1,0>UD    0x00000098UD    { align1 1H I@6 compacted };
mov(8)          g59<2>UD        g52<4,4,1>UD                    { align1 2Q };
add(8)          g66<1>D         g84<8,4,2>D     -g64<1,1,0>D    { align1 1Q I@6 compacted };
add(16)         g71<1>D         g62<1,1,0>D     2D              { align1 1H I@6 compacted };
add(8)          g67<1>D         g49<8,4,2>D     -g65<1,1,0>D    { align1 2Q I@6 compacted };
add(8)          g85<1>D         -g53<8,8,1>D    g82.1<8,4,2>D   { align1 1Q I@5 };
add(8)          g54<1>D         -g54<8,8,1>D    g45.1<8,4,2>D   { align1 2Q I@6 };
add(16)         g73<1>D         g97<1,1,0>D     -g71<1,1,0>D    { align1 1H I@4 compacted };
and(16)         g68<1>UD        g66<8,8,1>UD    0xffffffc0UD    { align1 1H I@4 };
mov(8)          g57.1<2>UD      g85<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g59.1<2>UD      g54<4,4,1>UD                    { align1 2Q I@4 };
mov(16)         g75<1>D         -g73<8,8,1>D                    { align1 1H I@4 };
shr(16)         g70<1>UD        g68<1,1,0>UD    0x00000006UD    { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g55UD           g57UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
add(8)          g57<1>D         g82<8,4,2>D     g55<1,1,0>D     { align1 1Q $1.dst compacted };
add(8)          g58<1>D         g45<8,4,2>D     g56<1,1,0>D     { align1 2Q $1.dst compacted };
cmp.l.f0.0(8)   g86<1>UD        g57<8,8,1>UD    g82<8,4,2>UD    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
cmp.l.f0.0(8)   g59<1>UD        g58<8,8,1>UD    g45<8,4,2>UD    { align1 2Q I@2 };
cmp.l.f0.0(16)  null<1>UD       g75<8,8,1>UD    g70<8,8,1>UD    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(8)          g60<1>D         -g86<8,8,1>D    g82.1<8,4,2>D   { align1 1Q I@3 };
add(8)          g61<1>D         -g59<8,8,1>D    g45.1<8,4,2>D   { align1 2Q I@3 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g76<1>D         -g73<8,8,1>D    0x00000006UD    { align1 1H };
add(16)         g78<1>D         g64<1,1,0>D     g76<1,1,0>D     { align1 1H I@1 compacted };
shr(16)         g80<1>UD        g78<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
add(16)         g94<1>D         g57<1,1,0>D     g78<1,1,0>D     { align1 1H compacted };
shl(16)         g82<1>D         g80<8,8,1>D     0x00000003UD    { align1 1H I@2 };
mov(8)          g100<2>UD       g94<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g102<2>UD       g95<4,4,1>UD                    { align1 2Q I@3 };
add(8)          g87<1>D         g41<8,4,2>D     g82<1,1,0>D     { align1 1Q A@3 compacted };
add(8)          g83<1>D         g47<8,4,2>D     g83<1,1,0>D     { align1 2Q A@3 compacted };
cmp.l.f0.0(8)   g88<1>UD        g87<8,8,1>UD    g41<8,4,2>UD    { align1 1Q I@2 };
mov(8)          g66<2>UD        g87<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g84<1>UD        g83<8,8,1>UD    g47<8,4,2>UD    { align1 2Q I@3 };
mov(8)          g68<2>UD        g83<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g96<1>UD        g94<1,1,0>UD    g57<1,1,0>UD    { align1 1H compacted };
add(8)          g89<1>D         -g88<8,8,1>D    g41.1<8,4,2>D   { align1 1Q I@5 };
add(8)          g85<1>D         -g84<8,8,1>D    g47.1<8,4,2>D   { align1 2Q I@4 };
add(16)         g98<1>D         -g96<1,1,0>D    g60<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g66.1<2>UD      g89<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g68.1<2>UD      g85<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g100.1<2>UD     g98<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g102.1<2>UD     g99<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g86UD           g66UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
mov(8)          g90<2>UD        g86<4,4,1>UD                    { align1 1Q $2.dst };
mov(8)          g92<2>UD        g87<4,4,1>UD                    { align1 2Q $2.dst };
mov(8)          g90.1<2>UD      g88<4,4,1>UD                    { align1 1Q @2 $2.dst };
mov(8)          g92.1<2>UD      g89<4,4,1>UD                    { align1 2Q @2 $2.dst };
fbl(1)          g104<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
shl(1)          a0<1>UD         g104<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g106<2>D        g[a0 320]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g106.1<2>D      g[a0 324]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g67.1<2>UD      g106.1<0,1,0>UD                 { align1 WE_all 1Q I@1 };
mov(8)          g67<2>UD        g106<0,1,0>UD                   { align1 WE_all 1Q I@1 };
mov(1)          g81<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g72UD    g67UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $3 };
mov(1)          f0<1>UD         g81<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g104<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000c00UD    { align1 WE_all 1N A@1 };
mov(1)          g107<2>D        g[a0 128]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g107.1<2>D      g[a0 132]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g68.1<2>UD      g107.1<0,1,0>UD                 { align1 WE_all 1Q I@2 };
mov(8)          g68<2>UD        g107<0,1,0>UD                   { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g68UD           g72UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $4 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
shr(16)         g103<1>UD       g64<1,1,0>UD    0x00000008UD    { align1 1H compacted };
add(16)         g105<1>D        g62<1,1,0>D     3D              { align1 1H compacted };

LABEL3:
cmp.ge.f0.0(16) null<1>UD       g43<8,8,1>UD    g103<8,8,1>UD   { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL2        UIP:  LABEL2              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
shl(16)         g107<1>D        g43<8,8,1>D     0x00000008UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g109<1>UD       g107<1,1,0>UD   0x00000006UD    { align1 1H compacted };
add(16)         g123<1>D        g57<1,1,0>D     g107<1,1,0>D    { align1 1H compacted };
shl(16)         g111<1>D        g109<8,8,1>D    0x00000003UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
mov(8)          g1<2>UD         g123<4,4,1>UD                   { align1 1Q };
mov(8)          g3<2>UD         g124<4,4,1>UD                   { align1 2Q I@3 };
add(8)          g90<1>D         g41<8,4,2>D     g111<1,1,0>D    { align1 1Q A@3 compacted };
add(8)          g112<1>D        g47<8,4,2>D     g112<1,1,0>D    { align1 2Q A@3 compacted };
cmp.l.f0.0(8)   g91<1>UD        g90<8,8,1>UD    g41<8,4,2>UD    { align1 1Q I@2 };
mov(8)          g13<2>UD        g90<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g113<1>UD       g112<8,8,1>UD   g47<8,4,2>UD    { align1 2Q I@3 };
mov(8)          g15<2>UD        g112<4,4,1>UD                   { align1 2Q };
cmp.l.f0.0(16)  g125<1>UD       g123<1,1,0>UD   g57<1,1,0>UD    { align1 1H compacted };
add(8)          g92<1>D         -g91<8,8,1>D    g41.1<8,4,2>D   { align1 1Q I@5 };
add(8)          g114<1>D        -g113<8,8,1>D   g47.1<8,4,2>D   { align1 2Q I@4 };
add(16)         g5<1>D          -g125<1,1,0>D   g60<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g13.1<2>UD      g92<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g15.1<2>UD      g114<4,4,1>UD                   { align1 2Q I@3 };
mov(8)          g1.1<2>UD       g5<4,4,1>UD                     { align1 1Q I@3 };
mov(8)          g3.1<2>UD       g6<4,4,1>UD                     { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g115UD          g13UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $5 };
mov(8)          g119<2>UD       g115<4,4,1>UD                   { align1 1Q $5.dst };
mov(8)          g121<2>UD       g116<4,4,1>UD                   { align1 2Q $5.dst };
mov(8)          g119.1<2>UD     g117<4,4,1>UD                   { align1 1Q @2 $5.dst };
mov(8)          g121.1<2>UD     g118<4,4,1>UD                   { align1 2Q @2 $5.dst };
fbl(1)          g7<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
shl(1)          a0<1>UD         g7<0,1,0>UD     0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000e00UD    { align1 WE_all 1N A@1 };
mov(1)          g109<2>D        g[a0 224]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g109.1<2>D      g[a0 228]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g73.1<2>UD      g109.1<0,1,0>UD                 { align1 WE_all 1Q I@1 };
mov(8)          g73<2>UD        g109<0,1,0>UD                   { align1 WE_all 1Q I@1 };
mov(1)          g40<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g17UD    g73UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $4 };
mov(1)          f0<1>UD         g40<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g7<0,1,0>UD     0x00000003UD    { align1 WE_all 1N I@6 };
mov(1)          g110<2>D        g[a0 32]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g110.1<2>D      g[a0 36]<0,1,0>D                { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g74.1<2>UD      g110.1<0,1,0>UD                 { align1 WE_all 1Q I@2 };
mov(8)          g74<2>UD        g110<0,1,0>UD                   { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g74UD           g17UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $6 };
add(16)         g10<1>D         g107<1,1,0>D    64D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
shr(16)         g12<1>UD        g10<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
add(16)         g32<1>D         g57<1,1,0>D     g10<1,1,0>D     { align1 1H $9.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
shl(16)         g14<1>D         g12<8,8,1>D     0x00000003UD    { align1 1H I@2 };
mov(8)          g6<2>UD         g32<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g8<2>UD         g33<4,4,1>UD                    { align1 2Q I@3 };
add(8)          g93<1>D         g41<8,4,2>D     g14<1,1,0>D     { align1 1Q I@3 compacted };
add(8)          g15<1>D         g47<8,4,2>D     g15<1,1,0>D     { align1 2Q I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g19<2>UD        g93<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $7.src };
mov(8)          g21<2>UD        g15<4,4,1>UD                    { align1 2Q I@2 };
cmp.l.f0.0(8)   g16<1>UD        g15<8,8,1>UD    g47<8,4,2>UD    { align1 2Q $5.src };
cmp.l.f0.0(8)   g94<1>UD        g93<8,8,1>UD    g41<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(16)  g45<1>UD        g32<1,1,0>UD    g57<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $8.src };
add(8)          g25<1>D         -g16<8,8,1>D    g47.1<8,4,2>D   { align1 2Q I@3 };
add(8)          g95<1>D         -g94<8,8,1>D    g41.1<8,4,2>D   { align1 1Q I@3 };
add(16)         g49<1>D         -g45<1,1,0>D    g60<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g21.1<2>UD      g25<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g19.1<2>UD      g95<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g6.1<2>UD       g49<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g8.1<2>UD       g50<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g31UD           g19UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $7 };
mov(8)          g2<2>UD         g31<4,4,1>UD                    { align1 1Q $7.dst };
mov(8)          g4<2>UD         g32<4,4,1>UD                    { align1 2Q $7.dst };
mov(8)          g2.1<2>UD       g33<4,4,1>UD                    { align1 1Q @2 $7.dst };
mov(8)          g4.1<2>UD       g34<4,4,1>UD                    { align1 2Q @2 $7.dst };
fbl(1)          g26<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N $8.src compacted };
shl(1)          a0<1>UD         g26<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g111<2>D        g[a0 64]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g111.1<2>D      g[a0 68]<0,1,0>D                { align1 WE_all 1N };
mov(8)          g75.1<2>UD      g111.1<0,1,0>UD                 { align1 WE_all 1Q I@1 };
mov(8)          g75<2>UD        g111<0,1,0>UD                   { align1 WE_all 1Q I@1 };
mov(1)          g39<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g23UD    g75UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $10 };
mov(1)          f0<1>UD         g39<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g26<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
mov(1)          g112<2>D        g[a0 192]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g112.1<2>D      g[a0 196]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g76.1<2>UD      g112.1<0,1,0>UD                 { align1 WE_all 1Q I@2 };
mov(8)          g76<2>UD        g112<0,1,0>UD                   { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g76UD           g23UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $11 };
add(16)         g52<1>D         g107<1,1,0>D    128D            { align1 1H compacted };
shr(16)         g54<1>UD        g52<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g67<1>D         g57<1,1,0>D     g52<1,1,0>D     { align1 1H compacted };
shl(16)         g62<1>D         g54<8,8,1>D     0x00000003UD    { align1 1H I@2 };
mov(8)          g11<2>UD        g67<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g13<2>UD        g68<4,4,1>UD                    { align1 2Q I@3 };
add(8)          g96<1>D         g41<8,4,2>D     g62<1,1,0>D     { align1 1Q I@3 compacted };
add(8)          g63<1>D         g47<8,4,2>D     g63<1,1,0>D     { align1 2Q I@4 compacted };
mov(8)          g25<2>UD        g96<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $8.src };
mov(8)          g27<2>UD        g63<4,4,1>UD                    { align1 2Q I@2 };
cmp.l.f0.0(8)   g64<1>UD        g63<8,8,1>UD    g47<8,4,2>UD    { align1 2Q };
cmp.l.f0.0(8)   g97<1>UD        g96<8,8,1>UD    g41<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(16)  g69<1>UD        g67<1,1,0>UD    g57<1,1,0>UD    { align1 1H compacted };
add(8)          g65<1>D         -g64<8,8,1>D    g47.1<8,4,2>D   { align1 2Q I@3 };
add(8)          g98<1>D         -g97<8,8,1>D    g41.1<8,4,2>D   { align1 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g71<1>D         -g69<1,1,0>D    g60<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g27.1<2>UD      g65<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g25.1<2>UD      g98<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g11.1<2>UD      g71<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g13.1<2>UD      g72<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g66UD           g25UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $8 };
mov(8)          g7<2>UD         g66<4,4,1>UD                    { align1 1Q $8.dst };
mov(8)          g9<2>UD         g67<4,4,1>UD                    { align1 2Q $8.dst };
mov(8)          g7.1<2>UD       g68<4,4,1>UD                    { align1 1Q @2 $8.dst };
mov(8)          g9.1<2>UD       g69<4,4,1>UD                    { align1 2Q @2 $8.dst };
fbl(1)          g31<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
shl(1)          a0<1>UD         g31<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g113<2>D        g[a0 224]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g113.1<2>D      g[a0 228]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g77.1<2>UD      g113.1<0,1,0>UD                 { align1 WE_all 1Q I@1 };
mov(8)          g77<2>UD        g113<0,1,0>UD                   { align1 WE_all 1Q I@1 };
mov(1)          g38<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g29UD    g77UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $14 };
mov(1)          f0<1>UD         g38<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g31<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
mov(1)          g114<2>D        g[a0 352]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g114.1<2>D      g[a0 356]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(8)          g78.1<2>UD      g114.1<0,1,0>UD                 { align1 WE_all 1Q I@2 };
mov(8)          g78<2>UD        g114<0,1,0>UD                   { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g78UD           g29UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g74<1>D         g107<1,1,0>D    192D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
shr(16)         g76<1>UD        g74<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
add(16)         g90<1>D         g57<1,1,0>D     g74<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g78<1>D         g76<8,8,1>D     0x00000003UD    { align1 1H };
mov(8)          g12<2>UD        g90<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g14<2>UD        g91<4,4,1>UD                    { align1 2Q I@3 };
add(8)          g99<1>D         g41<8,4,2>D     g78<1,1,0>D     { align1 1Q I@3 compacted };
add(8)          g79<1>D         g47<8,4,2>D     g79<1,1,0>D     { align1 2Q I@4 compacted };
mov(8)          g31<2>UD        g99<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g33<2>UD        g79<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $13.src };
cmp.l.f0.0(8)   g80<1>UD        g79<8,8,1>UD    g47<8,4,2>UD    { align1 2Q };
cmp.l.f0.0(8)   g100<1>UD       g99<8,8,1>UD    g41<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(16)  g92<1>UD        g90<1,1,0>UD    g57<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@3 };
add(8)          g81<1>D         -g80<8,8,1>D    g47.1<8,4,2>D   { align1 2Q };
add(8)          g101<1>D        -g100<8,8,1>D   g41.1<8,4,2>D   { align1 1Q I@3 };
add(16)         g94<1>D         -g92<1,1,0>D    g60<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g33.1<2>UD      g81<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g31.1<2>UD      g101<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g12.1<2>UD      g94<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g14.1<2>UD      g95<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g82UD           g31UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $9 };
mov(8)          g86<2>UD        g82<4,4,1>UD                    { align1 1Q $9.dst };
mov(8)          g88<2>UD        g83<4,4,1>UD                    { align1 2Q $9.dst };
mov(8)          g86.1<2>UD      g84<4,4,1>UD                    { align1 1Q @2 $9.dst };
mov(8)          g88.1<2>UD      g85<4,4,1>UD                    { align1 2Q @2 $9.dst };
fbl(1)          g45<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
shl(1)          a0<1>UD         g45<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g115<2>D        g[a0 192]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g115.1<2>D      g[a0 196]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g79.1<2>UD      g115.1<0,1,0>UD                 { align1 WE_all 1Q I@1 };
mov(8)          g79<2>UD        g115<0,1,0>UD                   { align1 WE_all 1Q I@1 };
mov(1)          g37<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g35UD    g79UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $12 };
mov(1)          f0<1>UD         g37<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g45<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
mov(1)          g116<2>D        g[a0 384]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g116.1<2>D      g[a0 388]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g80.1<2>UD      g116.1<0,1,0>UD                 { align1 WE_all 1Q I@2 };
mov(8)          g80<2>UD        g116<0,1,0>UD                   { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g80UD           g35UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $13 };
add(16)         g43<1>D         g105<1,1,0>D    g43<1,1,0>D     { align1 1H compacted };

LABEL2:
while(16)       JIP:  LABEL3                                    { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_instance_ptrs_base_ptr_code[] = {
    0x80000065, 0x75058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x61050220, 0x00000024, 0x00000000,
    0xe2761a40, 0x00017503, 0x00041a61, 0x2b050220,
    0x00466105, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa00760c, 0x00340000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x21520061, 0x001102cc,
    0x2a2d0061, 0x001102cc, 0x00030061, 0x29260aa0,
    0x00000264, 0x00000000, 0x00130061, 0x2f260aa0,
    0x00000264, 0x00000000, 0x00030061, 0x54260aa0,
    0x000002a4, 0x00000000, 0x00130061, 0x31260aa0,
    0x000002a4, 0x00000000, 0x21521661, 0x00110204,
    0x2a2d1661, 0x00110204, 0x21291661, 0x00110244,
    0x2a2f1661, 0x00110244, 0x21541661, 0x0011025c,
    0x2a311661, 0x0011025c, 0xa1331640, 0x098e5203,
    0xaa341540, 0x098e2d03, 0xe13e1268, 0x008e5403,
    0x00030065, 0x40058220, 0x02445406, 0xffffff00,
    0xea3f1168, 0x008e3103, 0x00130065, 0x41058220,
    0x02443106, 0xffffff00, 0x00031e61, 0x39060220,
    0x00343305, 0x00000000, 0xe7351e70, 0x09803303,
    0x00130061, 0x3b060220, 0x00343405, 0x00000000,
    0xa1421e40, 0x402e5402, 0xa0471e40, 0x00203e03,
    0xaa431e40, 0x412e3102, 0x00031d40, 0x55052660,
    0x06463505, 0x00445226, 0x00131e40, 0x36052660,
    0x06463605, 0x00442d26, 0xa0491c40, 0x47206102,
    0x00041c65, 0x44058220, 0x02464205, 0xffffffc0,
    0x00031c61, 0x39260220, 0x00345505, 0x00000000,
    0x00131c61, 0x3b260220, 0x00343605, 0x00000000,
    0x00041c61, 0x4b052660, 0x00464905, 0x00000000,
    0xe0461c68, 0x00604403, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x37140000,
    0xfb043924, 0x00040000, 0xa1392140, 0x370e5202,
    0xaa3a2140, 0x380e2d02, 0x00031a70, 0x56050220,
    0x52463905, 0x00445206, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00131a70, 0x3b050220,
    0x52463a05, 0x00442d06, 0x00041d70, 0x00010220,
    0x52464b05, 0x00464605, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00031b40, 0x3c052660,
    0x06465605, 0x00445226, 0x00131b40, 0x3d052660,
    0x06463b05, 0x00442d26, 0x01040022, 0x0001c060,
    0x00000308, 0x00000308, 0x00040069, 0x4c05a660,
    0x02464905, 0x00000006, 0xa04e1940, 0x4c004002,
    0xe0501968, 0x00604e03, 0xa05e0040, 0x4e003902,
    0x00041a69, 0x52058660, 0x02465005, 0x00000003,
    0x00031a61, 0x64060220, 0x00345e05, 0x00000000,
    0x00131b61, 0x66060220, 0x00345f05, 0x00000000,
    0xa1570b40, 0x520e2902, 0xaa530b40, 0x530e2f02,
    0x00031a70, 0x58050220, 0x52465705, 0x00442906,
    0x00030061, 0x42060220, 0x00345705, 0x00000000,
    0x00131b70, 0x54050220, 0x52465305, 0x00442f06,
    0x00130061, 0x44060220, 0x00345305, 0x00000000,
    0x27600070, 0x39005e03, 0x00031d40, 0x59052660,
    0x06465805, 0x00442926, 0x00131c40, 0x55052660,
    0x06465405, 0x00442f26, 0xa0621b40, 0x3c026002,
    0x00031b61, 0x42260220, 0x00345905, 0x00000000,
    0x00131b61, 0x44260220, 0x00345505, 0x00000000,
    0x00031b61, 0x64260220, 0x00346205, 0x00000000,
    0x00131c61, 0x66260220, 0x00346305, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x56240000, 0xfb044224, 0x000c0000,
    0x00032261, 0x5a060220, 0x00345605, 0x00000000,
    0x00132261, 0x5c060220, 0x00345705, 0x00000000,
    0x0003a261, 0x5a260220, 0x00345805, 0x00000000,
    0x0013a261, 0x5c260220, 0x00345905, 0x00000000,
    0xe268004c, 0x00114004, 0x80001969, 0x10018220,
    0x02006804, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000a00, 0x80000961, 0x6a060660,
    0x00010500, 0x00000000, 0x80000061, 0x6a260660,
    0x00010510, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80031961, 0x43260220,
    0x00006a24, 0x00000000, 0x80031961, 0x43060220,
    0x00006a04, 0x00000000, 0xe2510061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004331, 0x48140000, 0xfb00430c, 0x00340000,
    0x80001a61, 0x30010220, 0x00005104, 0x00000000,
    0x80001e69, 0x10018220, 0x02006804, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000c00,
    0x80000961, 0x6b060660, 0x00010200, 0x00000000,
    0x80000061, 0x6b260660, 0x00010210, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80031a61, 0x44260220, 0x00006b24, 0x00000000,
    0x80031961, 0x44060220, 0x00006b04, 0x00000000,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004431, 0x00000000, 0xfb08440c, 0x00344814,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0xe0670068, 0x00804003, 0xa0690040, 0x00303e03,
    0x00041a70, 0x00010220, 0x42462b05, 0x00466705,
    0x01040028, 0x0001c660, 0x00000cf0, 0x00000cf0,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x6b058660, 0x02462b05, 0x00000008,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe06d0068, 0x00606b03, 0xa07b0040, 0x6b003902,
    0x00041a69, 0x6f058660, 0x02466d05, 0x00000003,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x01060220, 0x00347b05, 0x00000000,
    0x00131b61, 0x03060220, 0x00347c05, 0x00000000,
    0xa15a0b40, 0x6f0e2902, 0xaa700b40, 0x700e2f02,
    0x00031a70, 0x5b050220, 0x52465a05, 0x00442906,
    0x00030061, 0x0d060220, 0x00345a05, 0x00000000,
    0x00131b70, 0x71050220, 0x52467005, 0x00442f06,
    0x00130061, 0x0f060220, 0x00347005, 0x00000000,
    0x277d0070, 0x39007b03, 0x00031d40, 0x5c052660,
    0x06465b05, 0x00442926, 0x00131c40, 0x72052660,
    0x06467105, 0x00442f26, 0xa0051b40, 0x3c027d02,
    0x00031b61, 0x0d260220, 0x00345c05, 0x00000000,
    0x00131b61, 0x0f260220, 0x00347205, 0x00000000,
    0x00031b61, 0x01260220, 0x00340505, 0x00000000,
    0x00131c61, 0x03260220, 0x00340605, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x73240000, 0xfb040d24, 0x000c0000,
    0x00032561, 0x77060220, 0x00347305, 0x00000000,
    0x00132561, 0x79060220, 0x00347405, 0x00000000,
    0x0003a561, 0x77260220, 0x00347505, 0x00000000,
    0x0013a561, 0x79260220, 0x00347605, 0x00000000,
    0xe207004c, 0x00114004, 0x80001969, 0x10018220,
    0x02000704, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000e00, 0x80000961, 0x6d060660,
    0x00010380, 0x00000000, 0x80000061, 0x6d260660,
    0x00010390, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80031961, 0x49260220,
    0x00006d24, 0x00000000, 0x80031961, 0x49060220,
    0x00006d04, 0x00000000, 0xe2280061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004431, 0x11140000, 0xfb00490c, 0x00340000,
    0x80001a61, 0x30010220, 0x00002804, 0x00000000,
    0x80001e69, 0x10018220, 0x02000704, 0x00000003,
    0x80000961, 0x6e060660, 0x00010080, 0x00000000,
    0x80000061, 0x6e260660, 0x00010090, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80031a61, 0x4a260220, 0x00006e24, 0x00000000,
    0x80031961, 0x4a060220, 0x00006e04, 0x00000000,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004631, 0x00000000, 0xfb084a0c, 0x00341114,
    0xa00a0040, 0x04006b03, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xe00c1968, 0x00600a03,
    0xa0203940, 0x0a003902, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00041a69, 0x0e058660,
    0x02460c05, 0x00000003, 0x00031a61, 0x06060220,
    0x00342005, 0x00000000, 0x00131b61, 0x08060220,
    0x00342105, 0x00000000, 0xa15d1b40, 0x0e0e2902,
    0xaa0f1c40, 0x0f0e2f02, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00031a61, 0x13060220,
    0x00345d05, 0x00000000, 0x80103701, 0x00000000,
    0x00000000, 0x00000000, 0x00131a61, 0x15060220,
    0x00340f05, 0x00000000, 0x00133570, 0x10050220,
    0x52460f05, 0x00442f06, 0x00030070, 0x5e050220,
    0x52465d05, 0x00442906, 0x272d0070, 0x39002003,
    0x80103801, 0x00000000, 0x00000000, 0x00000000,
    0x00131b40, 0x19052660, 0x06461005, 0x00442f26,
    0x00031b40, 0x5f052660, 0x06465e05, 0x00442926,
    0xa0311b40, 0x3c022d02, 0x00131b61, 0x15260220,
    0x00341905, 0x00000000, 0x00031b61, 0x13260220,
    0x00345f05, 0x00000000, 0x00031b61, 0x06260220,
    0x00343105, 0x00000000, 0x00131c61, 0x08260220,
    0x00343205, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x1f240000,
    0xfb041324, 0x000c0000, 0x00032761, 0x02060220,
    0x00341f05, 0x00000000, 0x00132761, 0x04060220,
    0x00342005, 0x00000000, 0x0003a761, 0x02260220,
    0x00342105, 0x00000000, 0x0013a761, 0x04260220,
    0x00342205, 0x00000000, 0xe21a384c, 0x00114004,
    0x80001969, 0x10018220, 0x02001a04, 0x00000003,
    0x80000961, 0x6f060660, 0x00010100, 0x00000000,
    0x80000061, 0x6f260660, 0x00010110, 0x00000000,
    0x80031961, 0x4b260220, 0x00006f24, 0x00000000,
    0x80031961, 0x4b060220, 0x00006f04, 0x00000000,
    0xe2270061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004a31, 0x17140000,
    0xfb004b0c, 0x00340000, 0x80001a61, 0x30010220,
    0x00002704, 0x00000000, 0x80001e69, 0x10018220,
    0x02001a04, 0x00000003, 0x80000961, 0x70060660,
    0x00010300, 0x00000000, 0x80000061, 0x70260660,
    0x00010310, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x4c260220,
    0x00007024, 0x00000000, 0x80031961, 0x4c060220,
    0x00007004, 0x00000000, 0x80002a01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004b31, 0x00000000,
    0xfb084c0c, 0x00341714, 0xa0340040, 0x08006b03,
    0xe0361968, 0x00603403, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xa0430040, 0x34003902,
    0x00041a69, 0x3e058660, 0x02463605, 0x00000003,
    0x00031a61, 0x0b060220, 0x00344305, 0x00000000,
    0x00131b61, 0x0d060220, 0x00344405, 0x00000000,
    0xa1601b40, 0x3e0e2902, 0xaa3f1c40, 0x3f0e2f02,
    0x00031a61, 0x19060220, 0x00346005, 0x00000000,
    0x80103801, 0x00000000, 0x00000000, 0x00000000,
    0x00131a61, 0x1b060220, 0x00343f05, 0x00000000,
    0x00130070, 0x40050220, 0x52463f05, 0x00442f06,
    0x00030070, 0x61050220, 0x52466005, 0x00442906,
    0x27450070, 0x39004303, 0x00131b40, 0x41052660,
    0x06464005, 0x00442f26, 0x00031b40, 0x62052660,
    0x06466105, 0x00442926, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xa0471b40, 0x3c024502,
    0x00131b61, 0x1b260220, 0x00344105, 0x00000000,
    0x00031b61, 0x19260220, 0x00346205, 0x00000000,
    0x00031b61, 0x0b260220, 0x00344705, 0x00000000,
    0x00131c61, 0x0d260220, 0x00344805, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x42240000, 0xfb041924, 0x000c0000,
    0x00032861, 0x07060220, 0x00344205, 0x00000000,
    0x00132861, 0x09060220, 0x00344305, 0x00000000,
    0x0003a861, 0x07260220, 0x00344405, 0x00000000,
    0x0013a861, 0x09260220, 0x00344505, 0x00000000,
    0xe21f004c, 0x00114004, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001969, 0x10018220,
    0x02001f04, 0x00000003, 0x80000961, 0x71060660,
    0x00010380, 0x00000000, 0x80000061, 0x71260660,
    0x00010390, 0x00000000, 0x80031961, 0x4d260220,
    0x00007124, 0x00000000, 0x80031961, 0x4d060220,
    0x00007104, 0x00000000, 0xe2260061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004e31, 0x1d140000, 0xfb004d0c, 0x00340000,
    0x80001a61, 0x30010220, 0x00002604, 0x00000000,
    0x80001e69, 0x10018220, 0x02001f04, 0x00000003,
    0x80000961, 0x72060660, 0x00010580, 0x00000000,
    0x80000061, 0x72260660, 0x00010590, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80031a61, 0x4e260220, 0x00007224, 0x00000000,
    0x80031961, 0x4e060220, 0x00007204, 0x00000000,
    0x80002e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004f31, 0x00000000, 0xfb084e0c, 0x00341d14,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0xa04a0040, 0x0c006b03, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0xe04c1968, 0x00604a03,
    0xa05a0040, 0x4a003902, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x4e058660,
    0x02464c05, 0x00000003, 0x00031a61, 0x0c060220,
    0x00345a05, 0x00000000, 0x00131b61, 0x0e060220,
    0x00345b05, 0x00000000, 0xa1631b40, 0x4e0e2902,
    0xaa4f1c40, 0x4f0e2f02, 0x00031a61, 0x1f060220,
    0x00346305, 0x00000000, 0x00131a61, 0x21060220,
    0x00344f05, 0x00000000, 0x80103d01, 0x00000000,
    0x00000000, 0x00000000, 0x00130070, 0x50050220,
    0x52464f05, 0x00442f06, 0x00030070, 0x64050220,
    0x52466305, 0x00442906, 0x275c0070, 0x39005a03,
    0x80101b01, 0x00000000, 0x00000000, 0x00000000,
    0x00130040, 0x51052660, 0x06465005, 0x00442f26,
    0x00031b40, 0x65052660, 0x06466405, 0x00442926,
    0xa05e1b40, 0x3c025c02, 0x00131b61, 0x21260220,
    0x00345105, 0x00000000, 0x00031b61, 0x1f260220,
    0x00346505, 0x00000000, 0x00031b61, 0x0c260220,
    0x00345e05, 0x00000000, 0x00131c61, 0x0e260220,
    0x00345f05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x52240000,
    0xfb041f24, 0x000c0000, 0x00032961, 0x56060220,
    0x00345205, 0x00000000, 0x00132961, 0x58060220,
    0x00345305, 0x00000000, 0x0003a961, 0x56260220,
    0x00345405, 0x00000000, 0x0013a961, 0x58260220,
    0x00345505, 0x00000000, 0xe22d004c, 0x00114004,
    0x80001969, 0x10018220, 0x02002d04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000a00,
    0x80000961, 0x73060660, 0x00010300, 0x00000000,
    0x80000061, 0x73260660, 0x00010310, 0x00000000,
    0x80031961, 0x4f260220, 0x00007324, 0x00000000,
    0x80031961, 0x4f060220, 0x00007304, 0x00000000,
    0xe2250061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004c31, 0x23140000,
    0xfb004f0c, 0x00340000, 0x80001a61, 0x30010220,
    0x00002504, 0x00000000, 0x80001e69, 0x10018220,
    0x02002d04, 0x00000003, 0x80000961, 0x74060660,
    0x00010600, 0x00000000, 0x80000061, 0x74260660,
    0x00010610, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x50260220,
    0x00007424, 0x00000000, 0x80031961, 0x50060220,
    0x00007404, 0x00000000, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004d31, 0x00000000,
    0xfb08500c, 0x00342314, 0xa02b0040, 0x2b006902,
    0x00040027, 0x00014060, 0x00000000, 0xfffff300,
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
      .base.program_size = 4816,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_misc_copy_instance_ptrs_base_ptr_relocs,
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
const char *gfx125_misc_copy_instance_ptrs_base_ptr_sha1 = "c9a6865beef5a47ca76270163f5a26f90f2c8722";

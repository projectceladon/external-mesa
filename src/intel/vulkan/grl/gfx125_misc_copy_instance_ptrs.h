#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_misc_copy_instance_ptrs_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_misc_copy_instance_ptrs_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g105<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g72<1>UD        g0.1<0,1,0>UD                   { align1 1H };
add(1)          g106<1>UD       g105<0,1,0>UD   0x00000000UD    { align1 WE_all 1N I@2 compacted };
mov(16)         g45<1>UD        g72<8,8,1>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g106UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g41.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g47.1<2>F       g2.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g43.1<2>F       g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g49.1<2>F       g2.3<0,1,0>F                    { align1 2Q };
mov(8)          g60.1<2>F       g2.5<0,1,0>F                    { align1 1Q };
mov(8)          g51.1<2>F       g2.5<0,1,0>F                    { align1 2Q };
mov(8)          g41<2>F         g2<0,1,0>F                      { align1 1Q F@6 compacted };
mov(8)          g47<2>F         g2<0,1,0>F                      { align1 2Q F@6 compacted };
mov(8)          g43<2>F         g2.2<0,1,0>F                    { align1 1Q F@6 compacted };
mov(8)          g49<2>F         g2.2<0,1,0>F                    { align1 2Q F@6 compacted };
mov(8)          g60<2>F         g2.4<0,1,0>F                    { align1 1Q F@6 compacted };
mov(8)          g51<2>F         g2.4<0,1,0>F                    { align1 2Q F@6 compacted };
shr(8)          g53<1>UD        g60<8,4,2>UD    0x00000008UD    { align1 1Q F@2 compacted };
and(8)          g55<1>UD        g60<8,4,2>UD    0xffffff00UD    { align1 1Q };
shr(8)          g54<1>UD        g51<8,4,2>UD    0x00000008UD    { align1 2Q F@1 compacted };
and(8)          g56<1>UD        g51<8,4,2>UD    0xffffff00UD    { align1 2Q };
add(8)          g57<1>D         g60<8,4,2>D     -g55<1,1,0>D    { align1 1Q I@3 compacted };
add(16)         g62<1>D         g53<1,1,0>D     2D              { align1 1H I@3 compacted };
add(8)          g58<1>D         g51<8,4,2>D     -g56<1,1,0>D    { align1 2Q I@3 compacted };
add(16)         g64<1>D         g72<1,1,0>D     -g62<1,1,0>D    { align1 1H I@2 compacted };
and(16)         g59<1>UD        g57<8,8,1>UD    0xffffffc0UD    { align1 1H I@2 };
mov(16)         g66<1>D         -g64<8,8,1>D                    { align1 1H I@2 };
shr(16)         g61<1>UD        g59<1,1,0>UD    0x00000006UD    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  null<1>UD       g66<8,8,1>UD    g61<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g67<1>D         -g64<8,8,1>D    0x00000006UD    { align1 1H };
add(16)         g69<1>D         g55<1,1,0>D     g67<1,1,0>D     { align1 1H I@1 compacted };
shr(16)         g71<1>UD        g69<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
add(8)          g64<1>D         g41<8,4,2>D     g69<1,1,0>D     { align1 1Q F@6 compacted };
add(8)          g85<1>D         g47<8,4,2>D     g70<1,1,0>D     { align1 2Q F@5 compacted };
shl(16)         g73<1>D         g71<8,8,1>D     0x00000003UD    { align1 1H I@3 };
mov(8)          g88<2>UD        g64<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g90<2>UD        g85<4,4,1>UD                    { align1 2Q I@3 };
add(8)          g61<1>D         g43<8,4,2>D     g73<1,1,0>D     { align1 1Q A@3 compacted };
add(8)          g74<1>D         g49<8,4,2>D     g74<1,1,0>D     { align1 2Q A@3 compacted };
cmp.l.f0.0(8)   g62<1>UD        g61<8,8,1>UD    g43<8,4,2>UD    { align1 1Q I@2 };
mov(8)          g26<2>UD        g61<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g65<1>UD        g64<8,8,1>UD    g41<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(8)   g75<1>UD        g74<8,8,1>UD    g49<8,4,2>UD    { align1 2Q I@4 };
mov(8)          g28<2>UD        g74<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(8)   g86<1>UD        g85<8,8,1>UD    g47<8,4,2>UD    { align1 2Q };
add(8)          g63<1>D         -g62<8,8,1>D    g43.1<8,4,2>D   { align1 1Q I@6 };
add(8)          g66<1>D         -g65<8,8,1>D    g41.1<8,4,2>D   { align1 1Q I@5 };
add(8)          g76<1>D         -g75<8,8,1>D    g49.1<8,4,2>D   { align1 2Q I@5 };
add(8)          g87<1>D         -g86<8,8,1>D    g47.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g26.1<2>UD      g63<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g88.1<2>UD      g66<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g28.1<2>UD      g76<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g90.1<2>UD      g87<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g77UD           g26UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
mov(8)          g81<2>UD        g77<4,4,1>UD                    { align1 1Q $1.dst };
mov(8)          g83<2>UD        g78<4,4,1>UD                    { align1 2Q $1.dst };
mov(8)          g81.1<2>UD      g79<4,4,1>UD                    { align1 1Q @2 $1.dst };
mov(8)          g83.1<2>UD      g80<4,4,1>UD                    { align1 2Q @2 $1.dst };
fbl(1)          g92<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
shl(1)          a0<1>UD         g92<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g94<2>D         g[a0 32]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g94.1<2>D       g[a0 36]<0,1,0>D                { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g27.1<2>UD      g94.1<0,1,0>UD                  { align1 WE_all 1Q I@1 };
mov(8)          g27<2>UD        g94<0,1,0>UD                    { align1 WE_all 1Q I@1 };
mov(1)          g59<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g32UD    g27UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $1 };
mov(1)          f0<1>UD         g59<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g92<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g95<2>D         g[a0 256]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g95.1<2>D       g[a0 260]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g28.1<2>UD      g95.1<0,1,0>UD                  { align1 WE_all 1Q I@2 };
mov(8)          g28<2>UD        g95<0,1,0>UD                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g28UD           g32UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $1 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
shr(16)         g91<1>UD        g55<1,1,0>UD    0x00000008UD    { align1 1H compacted };
add(16)         g93<1>D         g53<1,1,0>D     3D              { align1 1H compacted };

LABEL3:
cmp.ge.f0.0(16) null<1>UD       g45<8,8,1>UD    g91<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL2        UIP:  LABEL2              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
shl(16)         g95<1>D         g45<8,8,1>D     0x00000008UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g97<1>UD        g95<1,1,0>UD    0x00000006UD    { align1 1H compacted };
add(8)          g70<1>D         g41<8,4,2>D     g95<1,1,0>D     { align1 1Q F@6 compacted };
add(8)          g111<1>D        g47<8,4,2>D     g96<1,1,0>D     { align1 2Q F@5 compacted };
shl(16)         g99<1>D         g97<8,8,1>D     0x00000003UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g1<2>UD         g70<4,4,1>UD                    { align1 1Q A@1 };
mov(8)          g3<2>UD         g111<4,4,1>UD                   { align1 2Q I@3 };
add(8)          g67<1>D         g43<8,4,2>D     g99<1,1,0>D     { align1 1Q A@3 compacted };
add(8)          g100<1>D        g49<8,4,2>D     g100<1,1,0>D    { align1 2Q A@3 compacted };
cmp.l.f0.0(8)   g68<1>UD        g67<8,8,1>UD    g43<8,4,2>UD    { align1 1Q I@2 };
mov(8)          g13<2>UD        g67<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g71<1>UD        g70<8,8,1>UD    g41<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(8)   g101<1>UD       g100<8,8,1>UD   g49<8,4,2>UD    { align1 2Q I@4 };
mov(8)          g15<2>UD        g100<4,4,1>UD                   { align1 2Q };
cmp.l.f0.0(8)   g112<1>UD       g111<8,8,1>UD   g47<8,4,2>UD    { align1 2Q };
add(8)          g69<1>D         -g68<8,8,1>D    g43.1<8,4,2>D   { align1 1Q I@6 };
add(8)          g72<1>D         -g71<8,8,1>D    g41.1<8,4,2>D   { align1 1Q I@5 };
add(8)          g102<1>D        -g101<8,8,1>D   g49.1<8,4,2>D   { align1 2Q I@5 };
add(8)          g113<1>D        -g112<8,8,1>D   g47.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g13.1<2>UD      g69<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g1.1<2>UD       g72<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g15.1<2>UD      g102<4,4,1>UD                   { align1 2Q I@4 };
mov(8)          g3.1<2>UD       g113<4,4,1>UD                   { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g103UD          g13UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
mov(8)          g107<2>UD       g103<4,4,1>UD                   { align1 1Q $2.dst };
mov(8)          g109<2>UD       g104<4,4,1>UD                   { align1 2Q $2.dst };
mov(8)          g107.1<2>UD     g105<4,4,1>UD                   { align1 1Q @2 $2.dst };
mov(8)          g109.1<2>UD     g106<4,4,1>UD                   { align1 2Q @2 $2.dst };
fbl(1)          g114<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
shl(1)          a0<1>UD         g114<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000c00UD    { align1 WE_all 1N A@1 };
mov(1)          g97<2>D         g[a0 352]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g97.1<2>D       g[a0 356]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g51.1<2>UD      g97.1<0,1,0>UD                  { align1 WE_all 1Q I@1 };
mov(8)          g51<2>UD        g97<0,1,0>UD                    { align1 WE_all 1Q I@1 };
mov(1)          g40<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g17UD    g51UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $3 };
mov(1)          f0<1>UD         g40<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g114<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@6 };
mov(1)          g98<2>D         g[a0 32]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g98.1<2>D       g[a0 36]<0,1,0>D                { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g52.1<2>UD      g98.1<0,1,0>UD                  { align1 WE_all 1Q I@2 };
mov(8)          g52<2>UD        g98<0,1,0>UD                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g52UD           g17UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $4 };
add(16)         g116<1>D        g95<1,1,0>D     64D             { align1 1H compacted };
shr(16)         g118<1>UD       g116<1,1,0>UD   0x00000006UD    { align1 1H I@1 compacted };
add(8)          g76<1>D         g41<8,4,2>D     g116<1,1,0>D    { align1 1Q compacted };
add(8)          g125<1>D        g47<8,4,2>D     g117<1,1,0>D    { align1 2Q compacted };
shl(16)         g120<1>D        g118<8,8,1>D    0x00000003UD    { align1 1H I@3 };
mov(8)          g6<2>UD         g76<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g8<2>UD         g125<4,4,1>UD                   { align1 2Q I@3 };
add(8)          g73<1>D         g43<8,4,2>D     g120<1,1,0>D    { align1 1Q I@3 compacted };
add(8)          g121<1>D        g49<8,4,2>D     g121<1,1,0>D    { align1 2Q I@4 compacted };
mov(8)          g19<2>UD        g73<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $5.src };
mov(8)          g21<2>UD        g121<4,4,1>UD                   { align1 2Q I@2 };
cmp.l.f0.0(8)   g122<1>UD       g121<8,8,1>UD   g49<8,4,2>UD    { align1 2Q };
cmp.l.f0.0(8)   g74<1>UD        g73<8,8,1>UD    g43<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(8)   g126<1>UD       g125<8,8,1>UD   g47<8,4,2>UD    { align1 2Q };
cmp.l.f0.0(8)   g77<1>UD        g76<8,8,1>UD    g41<8,4,2>UD    { align1 1Q };
add(8)          g123<1>D        -g122<8,8,1>D   g49.1<8,4,2>D   { align1 2Q I@4 };
add(8)          g75<1>D         -g74<8,8,1>D    g43.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g127<1>D        -g126<8,8,1>D   g47.1<8,4,2>D   { align1 2Q I@4 };
add(8)          g78<1>D         -g77<8,8,1>D    g41.1<8,4,2>D   { align1 1Q I@4 };
mov(8)          g21.1<2>UD      g123<4,4,1>UD                   { align1 2Q I@4 };
mov(8)          g19.1<2>UD      g75<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g8.1<2>UD       g127<4,4,1>UD                   { align1 2Q I@4 };
mov(8)          g6.1<2>UD       g78<4,4,1>UD                    { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g124UD          g19UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $5 };
mov(8)          g2<2>UD         g124<4,4,1>UD                   { align1 1Q $5.dst };
mov(8)          g4<2>UD         g125<4,4,1>UD                   { align1 2Q $5.dst };
mov(8)          g2.1<2>UD       g126<4,4,1>UD                   { align1 1Q @2 $5.dst };
mov(8)          g4.1<2>UD       g127<4,4,1>UD                   { align1 2Q @2 $5.dst };
fbl(1)          g10<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
shl(1)          a0<1>UD         g10<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g99<2>D         g[a0 64]<0,1,0>D                { align1 WE_all 1N A@1 };
mov(1)          g99.1<2>D       g[a0 68]<0,1,0>D                { align1 WE_all 1N };
mov(8)          g53.1<2>UD      g99.1<0,1,0>UD                  { align1 WE_all 1Q I@1 };
mov(8)          g53<2>UD        g99<0,1,0>UD                    { align1 WE_all 1Q I@1 };
mov(1)          g39<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g23UD    g53UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $6 };
mov(1)          f0<1>UD         g39<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g10<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
mov(1)          g100<2>D        g[a0 192]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g100.1<2>D      g[a0 196]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g54.1<2>UD      g100.1<0,1,0>UD                 { align1 WE_all 1Q I@2 };
mov(8)          g54<2>UD        g100<0,1,0>UD                   { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g54UD           g23UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $7 };
add(16)         g2<1>D          g95<1,1,0>D     128D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shr(16)         g4<1>UD         g2<1,1,0>UD     0x00000006UD    { align1 1H I@1 compacted };
add(8)          g82<1>D         g41<8,4,2>D     g2<1,1,0>D      { align1 1Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
add(8)          g32<1>D         g47<8,4,2>D     g3<1,1,0>D      { align1 2Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
shl(16)         g15<1>D         g4<8,8,1>D      0x00000003UD    { align1 1H I@3 };
mov(8)          g11<2>UD        g82<4,4,1>UD                    { align1 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $2.src };
mov(8)          g13<2>UD        g32<4,4,1>UD                    { align1 2Q I@3 };
add(8)          g79<1>D         g43<8,4,2>D     g15<1,1,0>D     { align1 1Q I@3 compacted };
add(8)          g16<1>D         g49<8,4,2>D     g16<1,1,0>D     { align1 2Q I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g25<2>UD        g79<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g27<2>UD        g16<4,4,1>UD                    { align1 2Q I@2 };
cmp.l.f0.0(8)   g19<1>UD        g16<8,8,1>UD    g49<8,4,2>UD    { align1 2Q $5.src };
cmp.l.f0.0(8)   g80<1>UD        g79<8,8,1>UD    g43<8,4,2>UD    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
cmp.l.f0.0(8)   g33<1>UD        g32<8,8,1>UD    g47<8,4,2>UD    { align1 2Q };
cmp.l.f0.0(8)   g83<1>UD        g82<8,8,1>UD    g41<8,4,2>UD    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $5.src };
add(8)          g20<1>D         -g19<8,8,1>D    g49.1<8,4,2>D   { align1 2Q I@4 };
add(8)          g81<1>D         -g80<8,8,1>D    g43.1<8,4,2>D   { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
add(8)          g34<1>D         -g33<8,8,1>D    g47.1<8,4,2>D   { align1 2Q I@4 };
add(8)          g84<1>D         -g83<8,8,1>D    g41.1<8,4,2>D   { align1 1Q I@4 };
mov(8)          g27.1<2>UD      g20<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g25.1<2>UD      g81<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g13.1<2>UD      g34<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g11.1<2>UD      g84<4,4,1>UD                    { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g31UD           g25UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
mov(8)          g7<2>UD         g31<4,4,1>UD                    { align1 1Q $1.dst };
mov(8)          g9<2>UD         g32<4,4,1>UD                    { align1 2Q $1.dst };
mov(8)          g7.1<2>UD       g33<4,4,1>UD                    { align1 1Q @2 $1.dst };
mov(8)          g9.1<2>UD       g34<4,4,1>UD                    { align1 2Q @2 $1.dst };
fbl(1)          g21<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
shl(1)          a0<1>UD         g21<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g101<2>D        g[a0 224]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g101.1<2>D      g[a0 228]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g55.1<2>UD      g101.1<0,1,0>UD                 { align1 WE_all 1Q I@1 };
mov(8)          g55<2>UD        g101<0,1,0>UD                   { align1 WE_all 1Q I@1 };
mov(1)          g38<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g29UD    g55UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $10 };
mov(1)          f0<1>UD         g38<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g21<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
mov(1)          g102<2>D        g[a0 352]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g102.1<2>D      g[a0 356]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g56.1<2>UD      g102.1<0,1,0>UD                 { align1 WE_all 1Q I@2 };
mov(8)          g56<2>UD        g102<0,1,0>UD                   { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g56UD           g29UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g51<1>D         g95<1,1,0>D     192D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shr(16)         g53<1>UD        g51<1,1,0>UD    0x00000006UD    { align1 1H I@1 compacted };
add(8)          g88<1>D         g41<8,4,2>D     g51<1,1,0>D     { align1 1Q compacted };
add(8)          g67<1>D         g47<8,4,2>D     g52<1,1,0>D     { align1 2Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
shl(16)         g55<1>D         g53<8,8,1>D     0x00000003UD    { align1 1H I@3 };
mov(8)          g12<2>UD        g88<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g14<2>UD        g67<4,4,1>UD                    { align1 2Q I@3 };
add(8)          g85<1>D         g43<8,4,2>D     g55<1,1,0>D     { align1 1Q I@3 compacted };
add(8)          g56<1>D         g49<8,4,2>D     g56<1,1,0>D     { align1 2Q I@4 compacted };
mov(8)          g31<2>UD        g85<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g33<2>UD        g56<4,4,1>UD                    { align1 2Q I@2 };
cmp.l.f0.0(8)   g57<1>UD        g56<8,8,1>UD    g49<8,4,2>UD    { align1 2Q };
cmp.l.f0.0(8)   g86<1>UD        g85<8,8,1>UD    g43<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(8)   g68<1>UD        g67<8,8,1>UD    g47<8,4,2>UD    { align1 2Q };
cmp.l.f0.0(8)   g89<1>UD        g88<8,8,1>UD    g41<8,4,2>UD    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $9.src };
add(8)          g58<1>D         -g57<8,8,1>D    g49.1<8,4,2>D   { align1 2Q I@4 };
add(8)          g87<1>D         -g86<8,8,1>D    g43.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g69<1>D         -g68<8,8,1>D    g47.1<8,4,2>D   { align1 2Q I@4 };
add(8)          g90<1>D         -g89<8,8,1>D    g41.1<8,4,2>D   { align1 1Q I@4 };
mov(8)          g33.1<2>UD      g58<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g31.1<2>UD      g87<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g14.1<2>UD      g69<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g12.1<2>UD      g90<4,4,1>UD                    { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g59UD           g31UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
mov(8)          g63<2>UD        g59<4,4,1>UD                    { align1 1Q $1.dst };
mov(8)          g65<2>UD        g60<4,4,1>UD                    { align1 2Q $1.dst };
mov(8)          g63.1<2>UD      g61<4,4,1>UD                    { align1 1Q @2 $1.dst };
mov(8)          g65.1<2>UD      g62<4,4,1>UD                    { align1 2Q @2 $1.dst };
fbl(1)          g25<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N $1.src compacted };
shl(1)          a0<1>UD         g25<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g103<2>D        g[a0 480]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g103.1<2>D      g[a0 484]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g57.1<2>UD      g103.1<0,1,0>UD                 { align1 WE_all 1Q I@1 };
mov(8)          g57<2>UD        g103<0,1,0>UD                   { align1 WE_all 1Q I@1 };
mov(1)          g37<1>UD        f0<0,1,0>UD                     { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0.any16h) send(1) g35UD    g57UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $8 };
mov(1)          f0<1>UD         g37<0,1,0>UD                    { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g25<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@6 };
mov(1)          g104<2>D        g[a0 384]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g104.1<2>D      g[a0 388]<0,1,0>D               { align1 WE_all 1N };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
mov(8)          g58.1<2>UD      g104.1<0,1,0>UD                 { align1 WE_all 1Q I@2 };
mov(8)          g58<2>UD        g104<0,1,0>UD                   { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g58UD           g35UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $9 };
add(16)         g45<1>D         g93<1,1,0>D     g45<1,1,0>D     { align1 1H compacted };

LABEL2:
while(16)       JIP:  LABEL3                                    { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_instance_ptrs_code[] = {
    0x80000065, 0x69058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x48050220, 0x00000024, 0x00000000,
    0xe26a1a40, 0x00016903, 0x00041a61, 0x2d050220,
    0x00464805, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa006a0c, 0x00340000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x21290061, 0x001102cc,
    0x2a2f0061, 0x001102cc, 0x00030061, 0x2b260aa0,
    0x00000264, 0x00000000, 0x00130061, 0x31260aa0,
    0x00000264, 0x00000000, 0x00030061, 0x3c260aa0,
    0x000002a4, 0x00000000, 0x00130061, 0x33260aa0,
    0x000002a4, 0x00000000, 0x21291661, 0x00110204,
    0x2a2f1661, 0x00110204, 0x212b1661, 0x00110244,
    0x2a311661, 0x00110244, 0x213c1661, 0x0011025c,
    0x2a331661, 0x0011025c, 0xe1351268, 0x008e3c03,
    0x00030065, 0x37058220, 0x02443c06, 0xffffff00,
    0xea361168, 0x008e3303, 0x00130065, 0x38058220,
    0x02443306, 0xffffff00, 0xa1391b40, 0x372e3c02,
    0xa03e1b40, 0x00203503, 0xaa3a1b40, 0x382e3302,
    0xa0401a40, 0x3e204802, 0x00041a65, 0x3b058220,
    0x02463905, 0xffffffc0, 0x00041a61, 0x42052660,
    0x00464005, 0x00000000, 0xe03d1a68, 0x00603b03,
    0x00041970, 0x00010220, 0x52464205, 0x00463d05,
    0x01040022, 0x0001c060, 0x00000330, 0x00000330,
    0x00040069, 0x4305a660, 0x02464005, 0x00000006,
    0xa0451940, 0x43003702, 0xe0471968, 0x00604503,
    0xa1401640, 0x450e2902, 0xaa551540, 0x460e2f02,
    0x00041b69, 0x49058660, 0x02464705, 0x00000003,
    0x00031b61, 0x58060220, 0x00344005, 0x00000000,
    0x00131b61, 0x5a060220, 0x00345505, 0x00000000,
    0xa13d0b40, 0x490e2b02, 0xaa4a0b40, 0x4a0e3102,
    0x00031a70, 0x3e050220, 0x52463d05, 0x00442b06,
    0x00030061, 0x1a060220, 0x00343d05, 0x00000000,
    0x00030070, 0x41050220, 0x52464005, 0x00442906,
    0x00131c70, 0x4b050220, 0x52464a05, 0x00443106,
    0x00130061, 0x1c060220, 0x00344a05, 0x00000000,
    0x00130070, 0x56050220, 0x52465505, 0x00442f06,
    0x00031e40, 0x3f052660, 0x06463e05, 0x00442b26,
    0x00031d40, 0x42052660, 0x06464105, 0x00442926,
    0x00131d40, 0x4c052660, 0x06464b05, 0x00443126,
    0x00131c40, 0x57052660, 0x06465605, 0x00442f26,
    0x00031c61, 0x1a260220, 0x00343f05, 0x00000000,
    0x00031c61, 0x58260220, 0x00344205, 0x00000000,
    0x00131c61, 0x1c260220, 0x00344c05, 0x00000000,
    0x00131c61, 0x5a260220, 0x00345705, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x4d240000, 0xfb041a24, 0x000c0000,
    0x00032161, 0x51060220, 0x00344d05, 0x00000000,
    0x00132161, 0x53060220, 0x00344e05, 0x00000000,
    0x0003a161, 0x51260220, 0x00344f05, 0x00000000,
    0x0013a161, 0x53260220, 0x00345005, 0x00000000,
    0xe25c004c, 0x00114004, 0x80001969, 0x10018220,
    0x02005c04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000a00, 0x80000961, 0x5e060660,
    0x00010080, 0x00000000, 0x80000061, 0x5e260660,
    0x00010090, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80031961, 0x1b260220,
    0x00005e24, 0x00000000, 0x80031961, 0x1b060220,
    0x00005e04, 0x00000000, 0xe23b0061, 0x00113004,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8a004131, 0x20140000, 0xfb001b0c, 0x00340000,
    0x80001a61, 0x30010220, 0x00003b04, 0x00000000,
    0x80001e69, 0x10018220, 0x02005c04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000a00,
    0x80000961, 0x5f060660, 0x00010400, 0x00000000,
    0x80000061, 0x5f260660, 0x00010410, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80031a61, 0x1c260220, 0x00005f24, 0x00000000,
    0x80031961, 0x1c060220, 0x00005f04, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004131, 0x00000000, 0xfb081c0c, 0x00342014,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0xe05b0068, 0x00803703, 0xa05d0040, 0x00303503,
    0x00041a70, 0x00010220, 0x42462d05, 0x00465b05,
    0x01040028, 0x0001c660, 0x00000d80, 0x00000d80,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x5f058660, 0x02462d05, 0x00000008,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe0610068, 0x00605f03, 0xa1461640, 0x5f0e2902,
    0xaa6f1540, 0x600e2f02, 0x00041b69, 0x63058660,
    0x02466105, 0x00000003, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00030961, 0x01060220,
    0x00344605, 0x00000000, 0x00131b61, 0x03060220,
    0x00346f05, 0x00000000, 0xa1430b40, 0x630e2b02,
    0xaa640b40, 0x640e3102, 0x00031a70, 0x44050220,
    0x52464305, 0x00442b06, 0x00030061, 0x0d060220,
    0x00344305, 0x00000000, 0x00030070, 0x47050220,
    0x52464605, 0x00442906, 0x00131c70, 0x65050220,
    0x52466405, 0x00443106, 0x00130061, 0x0f060220,
    0x00346405, 0x00000000, 0x00130070, 0x70050220,
    0x52466f05, 0x00442f06, 0x00031e40, 0x45052660,
    0x06464405, 0x00442b26, 0x00031d40, 0x48052660,
    0x06464705, 0x00442926, 0x00131d40, 0x66052660,
    0x06466505, 0x00443126, 0x00131c40, 0x71052660,
    0x06467005, 0x00442f26, 0x00031c61, 0x0d260220,
    0x00344505, 0x00000000, 0x00031c61, 0x01260220,
    0x00344805, 0x00000000, 0x00131c61, 0x0f260220,
    0x00346605, 0x00000000, 0x00131c61, 0x03260220,
    0x00347105, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x67240000,
    0xfb040d24, 0x000c0000, 0x00032261, 0x6b060220,
    0x00346705, 0x00000000, 0x00132261, 0x6d060220,
    0x00346805, 0x00000000, 0x0003a261, 0x6b260220,
    0x00346905, 0x00000000, 0x0013a261, 0x6d260220,
    0x00346a05, 0x00000000, 0xe272004c, 0x00114004,
    0x80001969, 0x10018220, 0x02007204, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000c00,
    0x80000961, 0x61060660, 0x00010580, 0x00000000,
    0x80000061, 0x61260660, 0x00010590, 0x00000000,
    0x80031961, 0x33260220, 0x00006124, 0x00000000,
    0x80031961, 0x33060220, 0x00006104, 0x00000000,
    0xe2280061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004331, 0x11140000,
    0xfb00330c, 0x00340000, 0x80001a61, 0x30010220,
    0x00002804, 0x00000000, 0x80001e69, 0x10018220,
    0x02007204, 0x00000003, 0x80000961, 0x62060660,
    0x00010080, 0x00000000, 0x80000061, 0x62260660,
    0x00010090, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x34260220,
    0x00006224, 0x00000000, 0x80031961, 0x34060220,
    0x00006204, 0x00000000, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004431, 0x00000000,
    0xfb08340c, 0x00341114, 0xa0740040, 0x04005f03,
    0xe0761968, 0x00607403, 0xa14c0040, 0x740e2902,
    0xaa7d0040, 0x750e2f02, 0x00041b69, 0x78058660,
    0x02467605, 0x00000003, 0x00031b61, 0x06060220,
    0x00344c05, 0x00000000, 0x00131b61, 0x08060220,
    0x00347d05, 0x00000000, 0xa1491b40, 0x780e2b02,
    0xaa791c40, 0x790e3102, 0x00031a61, 0x13060220,
    0x00344905, 0x00000000, 0x80103501, 0x00000000,
    0x00000000, 0x00000000, 0x00131a61, 0x15060220,
    0x00347905, 0x00000000, 0x00130070, 0x7a050220,
    0x52467905, 0x00443106, 0x00030070, 0x4a050220,
    0x52464905, 0x00442b06, 0x00130070, 0x7e050220,
    0x52467d05, 0x00442f06, 0x00030070, 0x4d050220,
    0x52464c05, 0x00442906, 0x00131c40, 0x7b052660,
    0x06467a05, 0x00443126, 0x00031c40, 0x4b052660,
    0x06464a05, 0x00442b26, 0x00131c40, 0x7f052660,
    0x06467e05, 0x00442f26, 0x00031c40, 0x4e052660,
    0x06464d05, 0x00442926, 0x00131c61, 0x15260220,
    0x00347b05, 0x00000000, 0x00031c61, 0x13260220,
    0x00344b05, 0x00000000, 0x00131c61, 0x08260220,
    0x00347f05, 0x00000000, 0x00031c61, 0x06260220,
    0x00344e05, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x7c240000,
    0xfb041324, 0x000c0000, 0x00032561, 0x02060220,
    0x00347c05, 0x00000000, 0x00132561, 0x04060220,
    0x00347d05, 0x00000000, 0x0003a561, 0x02260220,
    0x00347e05, 0x00000000, 0x0013a561, 0x04260220,
    0x00347f05, 0x00000000, 0xe20a004c, 0x00114004,
    0x80001969, 0x10018220, 0x02000a04, 0x00000003,
    0x80000961, 0x63060660, 0x00010100, 0x00000000,
    0x80000061, 0x63260660, 0x00010110, 0x00000000,
    0x80031961, 0x35260220, 0x00006324, 0x00000000,
    0x80031961, 0x35060220, 0x00006304, 0x00000000,
    0xe2270061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004631, 0x17140000,
    0xfb00350c, 0x00340000, 0x80001a61, 0x30010220,
    0x00002704, 0x00000000, 0x80001e69, 0x10018220,
    0x02000a04, 0x00000003, 0x80000961, 0x64060660,
    0x00010300, 0x00000000, 0x80000061, 0x64260660,
    0x00010310, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x36260220,
    0x00006424, 0x00000000, 0x80031961, 0x36060220,
    0x00006404, 0x00000000, 0x80002601, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004731, 0x00000000,
    0xfb08360c, 0x00341714, 0xa0020040, 0x08005f03,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xe0041968, 0x00600203, 0xa1520040, 0x020e2902,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0xaa200040, 0x030e2f02, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041b69, 0x0f058660,
    0x02460405, 0x00000003, 0x00031b61, 0x0b060220,
    0x00345205, 0x00000000, 0x80103201, 0x00000000,
    0x00000000, 0x00000000, 0x00131b61, 0x0d060220,
    0x00342005, 0x00000000, 0xa14f1b40, 0x0f0e2b02,
    0xaa101c40, 0x100e3102, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00031a61, 0x19060220,
    0x00344f05, 0x00000000, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00131a61, 0x1b060220,
    0x00341005, 0x00000000, 0x00133570, 0x13050220,
    0x52461005, 0x00443106, 0x00030070, 0x50050220,
    0x52464f05, 0x00442b06, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00130070, 0x21050220,
    0x52462005, 0x00442f06, 0x00030070, 0x53050220,
    0x52465205, 0x00442906, 0x80103501, 0x00000000,
    0x00000000, 0x00000000, 0x00131c40, 0x14052660,
    0x06461305, 0x00443126, 0x00031c40, 0x51052660,
    0x06465005, 0x00442b26, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00131c40, 0x22052660,
    0x06462105, 0x00442f26, 0x00031c40, 0x54052660,
    0x06465305, 0x00442926, 0x00131c61, 0x1b260220,
    0x00341405, 0x00000000, 0x00031c61, 0x19260220,
    0x00345105, 0x00000000, 0x00131c61, 0x0d260220,
    0x00342205, 0x00000000, 0x00031c61, 0x0b260220,
    0x00345405, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x1f240000,
    0xfb041924, 0x000c0000, 0x00032161, 0x07060220,
    0x00341f05, 0x00000000, 0x00132161, 0x09060220,
    0x00342005, 0x00000000, 0x0003a161, 0x07260220,
    0x00342105, 0x00000000, 0x0013a161, 0x09260220,
    0x00342205, 0x00000000, 0xe215354c, 0x00114004,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02001504, 0x00000003,
    0x80000961, 0x65060660, 0x00010380, 0x00000000,
    0x80000061, 0x65260660, 0x00010390, 0x00000000,
    0x80031961, 0x37260220, 0x00006524, 0x00000000,
    0x80031961, 0x37060220, 0x00006504, 0x00000000,
    0xe2260061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004a31, 0x1d140000,
    0xfb00370c, 0x00340000, 0x80001a61, 0x30010220,
    0x00002604, 0x00000000, 0x80001e69, 0x10018220,
    0x02001504, 0x00000003, 0x80000961, 0x66060660,
    0x00010580, 0x00000000, 0x80000061, 0x66260660,
    0x00010590, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x38260220,
    0x00006624, 0x00000000, 0x80031961, 0x38060220,
    0x00006604, 0x00000000, 0x80002a01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004b31, 0x00000000,
    0xfb08380c, 0x00341d14, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xa0330040, 0x0c005f03,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xe0351968, 0x00603303, 0xa1580040, 0x330e2902,
    0xaa430040, 0x340e2f02, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x00041b69, 0x37058660,
    0x02463505, 0x00000003, 0x00031b61, 0x0c060220,
    0x00345805, 0x00000000, 0x00131b61, 0x0e060220,
    0x00344305, 0x00000000, 0xa1551b40, 0x370e2b02,
    0xaa381c40, 0x380e3102, 0x00031a61, 0x1f060220,
    0x00345505, 0x00000000, 0x00131a61, 0x21060220,
    0x00343805, 0x00000000, 0x00130070, 0x39050220,
    0x52463805, 0x00443106, 0x00030070, 0x56050220,
    0x52465505, 0x00442b06, 0x00130070, 0x44050220,
    0x52464305, 0x00442f06, 0x00030070, 0x59050220,
    0x52465805, 0x00442906, 0x80103901, 0x00000000,
    0x00000000, 0x00000000, 0x00131c40, 0x3a052660,
    0x06463905, 0x00443126, 0x00031c40, 0x57052660,
    0x06465605, 0x00442b26, 0x00131c40, 0x45052660,
    0x06464405, 0x00442f26, 0x00031c40, 0x5a052660,
    0x06465905, 0x00442926, 0x00131c61, 0x21260220,
    0x00343a05, 0x00000000, 0x00031c61, 0x1f260220,
    0x00345705, 0x00000000, 0x00131c61, 0x0e260220,
    0x00344505, 0x00000000, 0x00031c61, 0x0c260220,
    0x00345a05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x3b240000,
    0xfb041f24, 0x000c0000, 0x00032161, 0x3f060220,
    0x00343b05, 0x00000000, 0x00132161, 0x41060220,
    0x00343c05, 0x00000000, 0x0003a161, 0x3f260220,
    0x00343d05, 0x00000000, 0x0013a161, 0x41260220,
    0x00343e05, 0x00000000, 0xe219314c, 0x00114004,
    0x80001969, 0x10018220, 0x02001904, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000600,
    0x80000961, 0x67060660, 0x00010780, 0x00000000,
    0x80000061, 0x67260660, 0x00010790, 0x00000000,
    0x80031961, 0x39260220, 0x00006724, 0x00000000,
    0x80031961, 0x39060220, 0x00006704, 0x00000000,
    0xe2250061, 0x00113004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8a004831, 0x23140000,
    0xfb00390c, 0x00340000, 0x80001a61, 0x30010220,
    0x00002504, 0x00000000, 0x80001e69, 0x10018220,
    0x02001904, 0x00000003, 0x80000961, 0x68060660,
    0x00010600, 0x00000000, 0x80000061, 0x68260660,
    0x00010610, 0x00000000, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80031a61, 0x3a260220,
    0x00006824, 0x00000000, 0x80031961, 0x3a060220,
    0x00006804, 0x00000000, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004931, 0x00000000,
    0xfb083a0c, 0x00342314, 0xa02d0040, 0x2d005d02,
    0x00040027, 0x00014060, 0x00000000, 0xfffff270,
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
      .base.program_size = 4736,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_misc_copy_instance_ptrs_relocs,
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
const char *gfx125_misc_copy_instance_ptrs_sha1 = "33aebf478c66b5aa55bf54f762eb747ece7885ec";

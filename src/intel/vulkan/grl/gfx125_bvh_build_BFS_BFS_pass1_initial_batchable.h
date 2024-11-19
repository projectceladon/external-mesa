#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_BFS_BFS_pass1_initial_batchable_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_BFS_BFS_pass1_initial_batchable_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_BFS_BFS_pass1_initial_batchable_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g70<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g31<1>UD        g0.1<0,1,0>UD                   { align1 1H };
mov(16)         g37<1>UD        0x00000000UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g1UD            g70UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g53<1>D         g2<0,1,0>D      1064D           { align1 1H compacted };
add(16)         g65<1>D         g2<0,1,0>D      1068D           { align1 1H compacted };
cmp.l.f0.0(16)  g55<1>UD        g53<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@2 compacted };
mov(8)          g59<2>UD        g53<4,4,1>UD                    { align1 1Q };
mov(8)          g61<2>UD        g54<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g67<1>UD        g65<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@4 compacted };
add(16)         g57<1>D         -g55<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@4 compacted };
mov(8)          g59.1<2>UD      g57<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g61.1<2>UD      g58<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g63UD           g59UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };

LABEL3:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shl(16)         g69<1>D         g37<8,8,1>D     0x00000002UD    { align1 1H I@4 };
add(16)         g71<1>D         g65<1,1,0>D     g69<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g73<1>UD        g71<1,1,0>UD    g65<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g77<2>UD        g71<4,4,1>UD                    { align1 1Q };
mov(8)          g79<2>UD        g72<4,4,1>UD                    { align1 2Q };
add3(16)        g75<1>D         -g67<8,8,1>D    g2.1<0,1,0>D    -g73<1,1,1>D { align1 1H I@3 };
mov(8)          g77.1<2>UD      g75<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g79.1<2>UD      g76<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g69<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g69<1>UD        g69<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
fbl(1)          g81<1>UD        g69<0,1,0>UD                    { align1 WE_all 1N I@2 };
mov(8)          g44<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(1)          a0<1>UD         g81<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@2 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g83<2>D         g[a0 416]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g83.1<2>D       g[a0 420]<0,1,0>D               { align1 WE_all 1N };
add(8)          g44.8<1>UW      g44<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g112.1<2>D      g83.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
add(16)         g43<1>W         g44<16,16,1>UW  -1W             { align1 WE_all 1H I@2 };
mov(8)          g112<2>D        g83<0,1,0>D                     { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) g78UD    g112UD          nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $2 };
mov(16)         g28<1>D         0D                              { align1 WE_all 1H $2.dst };
mov(16)         g28<1>D         g78<8,8,1>D                     { align1 1H };
mov(16)         a0<1>UW         0x0380UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g43<8,8,1>W     0x0002UW        { align1 WE_all 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0380UW        { align1 WE_all 1H A@1 };
mov(16)         g41<1>UD        g[a0]<VxH,1,0>UD                { align1 WE_all 1H A@1 compacted };
mov(1)          g41<1>D         0D                              { align1 WE_all 1N I@1 };
add(8)          g41.1<2>D       g41<8,4,2>D     g41.1<8,4,2>D   { align1 WE_all 1Q I@1 };
add(4)          g41.2<4>D       g41.1<8,2,4>D   g41.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g41.3<4>D       g41.1<8,2,4>D   g41.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g41.4<1>D       g41.3<0,1,0>D   g41.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g42.4<1>D       g42.3<0,1,0>D   g42.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(8)          g42<1>D         g41.7<0,1,0>D   g42<1,1,0>D     { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g39<1>D         g31<1,1,0>D     -g41<1,1,0>D    { align1 1H compacted };
mov(16)         g84<1>D         g41<8,8,1>D                     { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g86<1>UD        g39<1,1,0>UD    g78<1,1,0>UD    { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g86<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov.nz.f0.0(16) g35<1>UD        f0<0,1,0>UW                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
mov(16)         g33<1>UD        0xffffffffUD                    { align1 1H };
break(16)       JIP:  LABEL0          UIP:  LABEL1              { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };
add(16)         g87<1>D         g84<1,1,0>D     g78<1,1,0>D     { align1 1H I@7 compacted };
add(16)         g37<1>D         g37<1,1,0>D     16D             { align1 1H compacted };
add(16)         g31<1>D         g31<1,1,0>D     -g88.7<0,1,0>D  { align1 1H I@2 compacted };
cmp.ge.f0.0(16) null<1>UD       g37<8,8,1>UD    g63<8,8,1>UD    { align1 1H @2 $1.dst };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL2              { align1 1H };
mov(16)         g33<1>UD        0x00000000UD                    { align1 1H I@7 };
break(16)       JIP:  LABEL2          UIP:  LABEL1              { align1 1H };

LABEL2:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
while(16)       JIP:  LABEL3                                    { align1 1H };
mov.nz.f0.0(16) null<1>D        g33<8,8,1>D                     { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL4              { align1 1H };
fbl(16)         g88<1>UD        g35<8,8,1>UD                    { align1 1H I@6 };
cmp.z.f0.0(16)  null<1>D        g35<8,8,1>D     0D              { align1 1H };
(-f0.0) sel(16) g90<1>UD        g88<8,8,1>UD    0x00000020UD    { align1 1H I@2 };
add(16)         g41<1>D         g37<1,1,0>D     g90<1,1,0>D     { align1 1H I@1 compacted };
mov(16)         a0<1>UW         0x04e0UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g90<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x04e0UW        { align1 1H A@1 };
mov(16)         g43<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
else(16)        JIP:  LABEL4          UIP:  LABEL4              { align1 1H };

LABEL5:
mov(16)         g41<1>UD        0x00000000UD                    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
mov(16)         g43<1>UD        0x00000000UD                    { align1 1H };

LABEL4:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
add(16)         g91<1>D         g2<0,1,0>D      2092D           { align1 1H };
shl(16)         g94<1>D         g41<8,8,1>D     0x00000002UD    { align1 1H I@4 };
add(16)         g118<1>D        g2<0,1,0>D      11308D          { align1 1H };
add(16)         g46<1>D         g2.2<0,1,0>D    8D              { align1 1H compacted };
and(16)         g83<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 1H compacted };
shl(16)         g76<1>D         g43<8,8,1>D     0x00000009UD    { align1 1H I@7 };
add(16)         g96<1>D         g91<1,1,0>D     g94<1,1,0>D     { align1 1H I@5 compacted };
cmp.l.f0.0(16)  g93<1>UD        g91<1,1,0>UD    0x0000082cUD    { align1 1H compacted };
mov(8)          g89<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g85<1>D         g83<8,8,1>D     0x00000004UD    { align1 1H I@5 };
cmp.l.f0.0(16)  g98<1>UD        g96<1,1,0>UD    g91<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g102<2>UD       g96<4,4,1>UD                    { align1 1Q };
mov(8)          g104<2>UD       g97<4,4,1>UD                    { align1 2Q };
add(8)          g89.8<1>UW      g89<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@5 compacted };
add3(16)        g100<1>D        -g93<8,8,1>D    g2.1<0,1,0>D    -g98<1,1,1>D { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g87<1>UD        g89<8,8,1>UW                    { align1 1H };
mov(8)          g104.1<2>UD     g101<4,4,1>UD                   { align1 2Q I@2 };
mov(8)          g102.1<2>UD     g100<4,4,1>UD                   { align1 1Q I@3 };
add(16)         g90<1>D         g87<1,1,0>D     g85<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g106UD          g102UD          nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov(16)         g108<1>UD       g106<16,8,2>UW                  { align1 1H $3.dst };
mov(16)         g121<1>UD       g106.1<16,8,2>UW                { align1 1H };
mul(8)          acc0<1>UD       g108<8,8,1>UD   0x0058UW        { align1 1Q I@2 };
asr(16)         g110<1>D        g108<8,8,1>D    0x0000001fUD    { align1 1H I@3 };
mul(16)         g114<1>D        g108<1,1,0>D    88W             { align1 1H compacted };
mul(16)         g123<1>D        g121<1,1,0>D    1484W           { align1 1H I@4 compacted };
cmp.l.f0.0(16)  g120<1>UD       g118<1,1,0>UD   g2<0,1,0>UD     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mach(8)         g112<1>UD       g108<1,1,0>UD   0x00000058UD    { align1 1Q compacted AccWrEnable };
add(16)         g52<1>D         g46<1,1,0>D     g114<1,1,0>D    { align1 1H I@4 compacted };
mul(16)         g115<1>D        g110<1,1,0>D    88W             { align1 1H I@6 compacted };
add(16)         g125<1>D        g118<1,1,0>D    g123<1,1,0>D    { align1 1H I@5 compacted };
mul(8)          acc0<1>UD       g109<8,8,1>UD   0x0058UW        { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g58<2>UD        g52<4,4,1>UD                    { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g60<2>UD        g53<4,4,1>UD                    { align1 2Q I@5 };
cmp.l.f0.0(16)  g3<1>UD         g125<1,1,0>UD   g118<1,1,0>UD   { align1 1H I@4 compacted };
mach(8)         g113<1>UD       g109<8,8,1>UD   0x00000058UD    { align1 2Q AccWrEnable };
cmp.l.f0.0(16)  g48<1>UD        g46<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g54<1>UD        g52<1,1,0>UD    g46<1,1,0>UD    { align1 1H compacted };
and(16)         g52<1>UD        g90<1,1,0>UD    0x000001ffUD    { align1 1H compacted };
add3(16)        g38<1>D         -g120<8,8,1>D   g2.1<0,1,0>D    -g3<1,1,1>D { align1 1H I@5 };
add(16)         g117<1>D        g112<1,1,0>D    g115<1,1,0>D    { align1 1H I@5 compacted };
add(16)         g50<1>D         -g48<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@5 compacted };
add3(16)        g56<1>D         g50<8,8,1>D     g117<8,8,1>D    -g54<1,1,1>D { align1 1H I@1 };
mov(8)          g45<2>UD        g125<4,4,1>UD                   { align1 1Q };
mov(8)          g47<2>UD        g126<4,4,1>UD                   { align1 2Q };
mov(8)          g60.1<2>UD      g57<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g58.1<2>UD      g56<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g45.1<2>UD      g38<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g47.1<2>UD      g39<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g62UD           g58UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g70UD           g45UD           nullUD          0x08602580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V3, L1STATE_L3MOCS dst_len = 6, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
add(16)         g92<1>D         g66<1,1,0>D     32D             { align1 1H $4.dst compacted };
shl(16)         g97<1>D         g74<8,8,1>D     0x00000005UD    { align1 1H $5.dst };
add(16)         g78<1>D         g70<1,1,0>D     g76<1,1,0>D     { align1 1H $5.dst compacted };
cmp.l.f0.0(16)  g94<1>UD        g92<1,1,0>UD    g66<1,1,0>UD    { align1 1H I@3 compacted };
add(16)         g100<1>D        g92<1,1,0>D     g97<1,1,0>D     { align1 1H I@3 compacted };
shr(16)         g98<1>UD        g74<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
add(16)         g80<1>D         g78<1,1,0>D     512D            { align1 1H I@4 compacted };
add(16)         g96<1>D         -g94<1,1,0>D    g68<1,1,0>D     { align1 1H @4 $4.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g102<1>UD       g100<1,1,0>UD   g92<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g106<2>UD       g100<4,4,1>UD                   { align1 1Q };
mov(8)          g108<2>UD       g101<4,4,1>UD                   { align1 2Q };
add(16)         g91<1>D         g78<1,1,0>D     g52<1,1,0>D     { align1 1H compacted };
sel.l(16)       g82<1>UD        g80<1,1,0>UD    g72<1,1,0>UD    { align1 1H @6 $5.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add3(16)        g104<1>D        g96<8,8,1>D     g98<8,8,1>D     -g102<1,1,1>D { align1 1H I@5 };
mov(8)          g108.1<2>UD     g105<4,4,1>UD                   { align1 2Q I@1 };
mov(8)          g106.1<2>UD     g104<4,4,1>UD                   { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g1UD            g106UD          nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
add(16)         g107<1>D        g100<1,1,0>D    16D             { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g109<1>UD       g107<1,1,0>UD   0x00000010UD    { align1 1H I@1 compacted };
mov(8)          g113<2>UD       g107<4,4,1>UD                   { align1 1Q };
mov(8)          g115<2>UD       g108<4,4,1>UD                   { align1 2Q };
add(16)         g111<1>D        -g109<1,1,0>D   g104<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g115.1<2>UD     g112<4,4,1>UD                   { align1 2Q I@1 };
mov(8)          g113.1<2>UD     g111<4,4,1>UD                   { align1 1Q I@2 };
add(16)         g118<1>F        g7<1,1,0>F      -g1<1,1,0>F     { align1 1H $6.dst compacted };
sel.ge(16)      g9<1>F          g118<8,8,1>F    0x704ec3dF  /* 1e-34F */ { align1 1H F@1 };
cmp.l.f0.0(16)  g23<1>F         g9<8,8,1>F      0x77f684dfF  /* 1e+34F */ { align1 1H F@1 };
math inv(16)    g14<1>F         g9<8,8,1>F      null<8,8,1>F    { align1 1H $7 };
cmp.g.f0.0(16)  g25<1>F         g118<8,8,1>F    0x704ec3dF  /* 1e-34F */ { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g117UD          g113UD          nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
mul(16)         g16<1>F         g14<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H $7.dst };
and.nz.f0.0(16) null<1>UD       g23<8,8,1>UD    g25<8,8,1>UD    { align1 1H F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
(+f0.0) sel(16) g9<1>UD         g16<1,1,0>UD    0x00000000UD    { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
add(16)         g121<1>F        g117<1,1,0>F    -g3<1,1,0>F     { align1 1H $8.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
add(16)         g123<1>F        g119<1,1,0>F    -g5<1,1,0>F     { align1 1H $8.dst compacted };
cmp.g.f0.0(16)  g26<1>F         g121<8,8,1>F    0x704ec3dF  /* 1e-34F */ { align1 1H A@2 };
sel.ge(16)      g11<1>F         g121<8,8,1>F    0x704ec3dF  /* 1e-34F */ { align1 1H };
sel.ge(16)      g13<1>F         g123<8,8,1>F    0x704ec3dF  /* 1e-34F */ { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
math inv(16)    g17<1>F         g11<8,8,1>F     null<8,8,1>F    { align1 1H $9 };
cmp.l.f0.0(16)  g28<1>F         g11<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H $9.src };
mul(16)         g19<1>F         g17<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H $9.dst };
and.nz.f0.0(16) null<1>UD       g28<8,8,1>UD    g26<8,8,1>UD    { align1 1H F@2 };
(+f0.0) sel(16) g11<1>UD        g19<1,1,0>UD    0x00000000UD    { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
math inv(16)    g20<1>F         g13<8,8,1>F     null<8,8,1>F    { align1 1H $10 };
cmp.g.f0.0(16)  g29<1>F         g123<8,8,1>F    0x704ec3dF  /* 1e-34F */ { align1 1H I@2 };
cmp.l.f0.0(16)  g31<1>F         g13<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
mul(16)         g22<1>F         g20<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H I@4 };
and.nz.f0.0(16) null<1>UD       g31<8,8,1>UD    g29<8,8,1>UD    { align1 1H F@2 };
(+f0.0) sel(16) g40<1>UD        g22<1,1,0>UD    0x00000000UD    { align1 1H F@1 compacted };
cmp.l.f0.0(16)  g42<1>UD        g91<1,1,0>UD    g82<1,1,0>UD    { align1 1H compacted };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
shl(16)         g44<1>D         g91<8,8,1>D     0x00000005UD    { align1 1H $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g47<1>D         g62<1,1,0>D     g44<1,1,0>D     { align1 1H @1 $4.dst compacted };
shr(16)         g45<1>UD        g91<1,1,0>UD    0x0000001bUD    { align1 1H $5.src compacted };
cmp.l.f0.0(16)  g49<1>UD        g47<1,1,0>UD    g62<1,1,0>UD    { align1 1H I@2 compacted };
add(16)         g60<1>D         g47<1,1,0>D     16D             { align1 1H $4.src compacted };
mov(8)          g56<2>UD        g47<4,4,1>UD                    { align1 1Q };
mov(8)          g58<2>UD        g48<4,4,1>UD                    { align1 2Q $4.src };
add3(16)        g54<1>D         g64<8,8,1>D     g45<8,8,1>D     -g49<1,1,1>D { align1 1H @4 $4.dst };
cmp.l.f0.0(16)  g62<1>UD        g60<1,1,0>UD    g47<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g66<2>UD        g60<4,4,1>UD                    { align1 1Q };
mov(8)          g68<2>UD        g61<4,4,1>UD                    { align1 2Q };
mov(8)          g58.1<2>UD      g55<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g56.1<2>UD      g54<4,4,1>UD                    { align1 1Q I@5 };
add(16)         g64<1>D         -g62<1,1,0>D    g54<1,1,0>D     { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g13UD           g56UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
mov(8)          g66.1<2>UD      g64<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g68.1<2>UD      g65<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g21UD           g66UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };

LABEL7:
endif(16)       JIP:  LABEL8                                    { align1 1H };

LABEL8:
shl(16)         g46<1>D         g52<8,8,1>D     0x00000002UD    { align1 1H $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g44<1>UD        g46<8,8,1>UD                    { align1 1H I@1 };

LABEL10:
cmp.ge.f0.0(16) null<1>UD       g44<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL9        UIP:  LABEL9              { align1 1H };
shl(16)         g67<1>D         g44<8,8,1>D     0x00000002UD    { align1 1H $8.src };
mov(16)         g29<1>UD        0x7f800000UD                    { align1 1H $8.src };
mov(16)         g31<1>UD        0x7f800000UD                    { align1 1H $8.src };
mov(16)         g33<1>UD        0x7f800000UD                    { align1 1H $8.src };
mov(16)         g35<1>UD        0x7f800000UD                    { align1 1H $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g67UD           g29UD           0x04003504                0x00000200
                            slm MsgDesc: ( store, a32, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 8 flat )  base_offset 0  { align1 1H $8 };
add(16)         g44<1>D         g44<8,8,1>D     2048D           { align1 1H };

LABEL9:
while(16)       JIP:  LABEL10                                   { align1 1H };
nop                                                             ;

LABEL12:
cmp.ge.f0.0(16) null<1>UD       g46<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL11       UIP:  LABEL11             { align1 1H };
shl(16)         g68<1>D         g46<8,8,1>D     0x00000002UD    { align1 1H $8.src };
mov(16)         g30<1>UD        0x00000000UD                    { align1 1H $8.src };
mov(16)         g32<1>UD        0x00000000UD                    { align1 1H $8.src };
mov(16)         g34<1>UD        0x00000000UD                    { align1 1H $8.src };
mov(16)         g36<1>UD        0x00000000UD                    { align1 1H $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g70<1>D         g68<1,1,0>D     1152D           { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g70UD           g30UD           0x04003504                0x00000200
                            slm MsgDesc: ( store, a32, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 8 flat )  base_offset 0  { align1 1H $8 };
add(16)         g46<1>D         g46<8,8,1>D     2048D           { align1 1H };

LABEL11:
while(16)       JIP:  LABEL12                                   { align1 1H };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
send(1)         g71UD           g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
mov(8)          g72<1>UD        0x00000000UD                    { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(2)          g72.10<1>UB     g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g72UD           nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $12 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
add(16)         g73<1>F         g13<1,1,0>F     g21<1,1,0>F     { align1 1H $4.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
add(16)         g75<1>F         g15<1,1,0>F     g23<1,1,0>F     { align1 1H $4.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
add(16)         g77<1>F         g17<1,1,0>F     g25<1,1,0>F     { align1 1H $4.dst compacted };
add(16)         g81<1>F         g77<1,1,0>F     -g5<1,1,0>F     { align1 1H A@1 compacted };
add(16)         g78<1>F         g73<1,1,0>F     -g1<1,1,0>F     { align1 1H F@4 compacted };
mul(16)         g89<1>F         g81<1,1,0>F     g40<1,1,0>F     { align1 1H A@2 compacted };
add(16)         g80<1>F         g75<1,1,0>F     -g3<1,1,0>F     { align1 1H F@5 compacted };
mul(16)         g82<1>F         g78<1,1,0>F     g9<1,1,0>F      { align1 1H A@3 compacted };
mov(16)         g95<1>UD        g89<8,8,1>F                     { align1 1H F@3 };
mul(16)         g84<1>F         g80<1,1,0>F     g11<1,1,0>F     { align1 1H F@2 compacted };
mov(16)         g91<1>UD        g82<8,8,1>F                     { align1 1H F@2 };
mov(16)         g93<1>UD        g84<8,8,1>F                     { align1 1H F@1 };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g42<8,8,1>UD    0x00000000UD    { align1 1H };
mov(16)         g47<1>UD        f0<0,1,0>UW                     { align1 1H $5.src };
mov(1)          g118<1>D        1D                              { align1 WE_all 1N };
and(16)         g97<1>UD        g87<1,1,0>UD    0x00000003UD    { align1 1H compacted };
shr(16)         g99<1>UD        g87<1,1,0>UD    0x00000002UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shl(16)         g101<1>D        g118<0,1,0>D    g87<8,8,1>UD    { align1 1H };

LABEL15:
cmp.z.f0.0(16)  null<1>D        g47<8,8,1>D     0D              { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL13       UIP:  LABEL13             { align1 1H };
fbl(16)         g103<1>UD       g47<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         a0<1>UW         0x0b60UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g103<16,8,2>W   0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b60UW        { align1 1H A@1 };
mov(16)         g105<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.z.f0.0(16)  g107<1>D        g105<1,1,0>D    g91<1,1,0>D     { align1 1H I@1 compacted };
and.nz.f0.0(16) null<1>UD       g107<8,8,1>UD   g42<8,8,1>UD    { align1 1H I@1 };
(+f0.0) sel(16) g109<1>UD       g21<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g111<1>UD       g23<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
(+f0.0) sel(16) g113<1>UD       g13<8,8,1>UD    0x7f800000UD    { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
(+f0.0) sel(16) g115<1>UD       g15<8,8,1>UD    0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g56<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g56<1>F         g109<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g58<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@3 compacted };
mov(16)         g58<1>F         g111<1,1,0>F                    { align1 1H compacted };
mov(16)         g45<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g45<1>F         g113<1,1,0>F                    { align1 1H compacted };
mov(16)         g49<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g49<1>F         g115<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g112<1>UD       g25<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g116<1>UD       g17<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(8)          g77<2>UD        g56.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g103<2>UD       g58.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g121<2>UD       g45.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g11<2>UD        g49.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g60<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g60<1>F         g112<1,1,0>F                    { align1 1H compacted };
mov(16)         g54<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@5 compacted };
mov(16)         g54<1>F         g116<1,1,0>F                    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g97<8,8,1>D     1D              { align1 1H };
sel.ge(8)       g75<2>F         g56<8,4,2>F     g77<8,4,2>F     { align1 WE_all 1Q A@5 };
sel.ge(8)       g88<2>F         g58<8,4,2>F     g103<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.l(8)        g119<2>F        g45<8,4,2>F     g121<8,4,2>F    { align1 WE_all 1Q I@3 };
sel.l(8)        g9<2>F          g49<8,4,2>F     g11<8,4,2>F     { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
mov(8)          g64<2>UD        g54.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g56.1<2>UD      g75<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g58.1<2>UD      g88<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g45.1<2>UD      g119<8,4,2>UD                   { align1 WE_all 1Q A@2 };
mov(8)          g49.1<2>UD      g9<8,4,2>UD                     { align1 WE_all 1Q A@1 };
mov(8)          g121<2>UD       g60.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sel.l(8)        g62<2>F         g54<8,4,2>F     g64<8,4,2>F     { align1 WE_all 1Q I@6 };
mov(4)          g82<4>UD        g56.2<8,2,4>UD                  { align1 WE_all 1N I@5 };
mov(4)          g80<4>UD        g56.1<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g113<4>UD       g58.2<8,2,4>UD                  { align1 WE_all 1N A@6 };
mov(4)          g111<4>UD       g58.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g3<4>UD         g45.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g1<4>UD         g45.1<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g33<4>UD        g49.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g31<4>UD        g49.1<8,2,4>UD                  { align1 WE_all 1N $8.src };
sel.ge(8)       g119<2>F        g60<8,4,2>F     g121<8,4,2>F    { align1 WE_all 1Q I@7 };
mov(8)          g54.1<2>UD      g62<8,4,2>UD                    { align1 WE_all 1Q F@2 };
sel.ge(4)       g78<4>F         g80<8,2,4>F     g82<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g109<4>F        g111<8,2,4>F    g113<8,2,4>F    { align1 WE_all 1N I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(4)        g29<4>F         g31<8,2,4>F     g33<8,2,4>F     { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g60.1<2>UD      g119<8,4,2>UD                   { align1 WE_all 1Q A@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g69<4>UD        g54.2<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g67<4>UD        g54.1<8,2,4>UD                  { align1 WE_all 1N $8.src };
mov(4)          g56.2<4>UD      g78<8,2,4>UD                    { align1 WE_all 1N F@3 };
sel.l(4)        g122<4>F        g1<8,2,4>F      g3<8,2,4>F      { align1 WE_all 1N I@7 };
mov(4)          g58.2<4>UD      g109<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g49.2<4>UD      g29<8,2,4>UD                    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(4)        g65<4>F         g67<8,2,4>F     g69<8,2,4>F     { align1 WE_all 1N I@4 };
mov(4)          g87<4>UD        g56.3<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g85<4>UD        g56.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g45.2<4>UD      g122<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g118<4>UD       g58.3<8,2,4>UD                  { align1 WE_all 1N I@5 };
mov(4)          g116<4>UD       g58.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g1<4>UD         g60.1<8,2,4>UD                  { align1 WE_all 1N F@2 };
mov(4)          g3<4>UD         g60.2<8,2,4>UD                  { align1 WE_all 1N F@2 };
mov(4)          g40<4>UD        g49.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g36<4>UD        g49.1<8,2,4>UD                  { align1 WE_all 1N $8.src };
mov(4)          g54.2<4>UD      g65<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g83<4>F         g85<8,2,4>F     g87<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g8<4>UD         g45.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g6<4>UD         g45.1<8,2,4>UD                  { align1 WE_all 1N $8.src };
sel.ge(4)       g114<4>F        g116<8,2,4>F    g118<8,2,4>F    { align1 WE_all 1N I@7 };
sel.ge(4)       g122<4>F        g1<8,2,4>F      g3<8,2,4>F      { align1 WE_all 1N I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(4)        g34<4>F         g36<8,2,4>F     g40<8,2,4>F     { align1 WE_all 1N I@4 };
mov(4)          g74<4>UD        g54.3<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g72<4>UD        g54.1<8,2,4>UD                  { align1 WE_all 1N $12.src };
mov(4)          g56.3<4>UD      g83<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g58.3<4>UD      g114<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g60.2<4>UD      g122<8,2,4>UD                   { align1 WE_all 1N F@2 };
sel.l(4)        g4<4>F          g6<8,2,4>F      g8<8,2,4>F      { align1 WE_all 1N I@6 };
mov(4)          g49.3<4>UD      g34<8,2,4>UD                    { align1 WE_all 1N F@2 };
sel.l(4)        g70<4>F         g72<8,2,4>F     g74<8,2,4>F     { align1 WE_all 1N I@5 };
sel.ge(4)       g56.4<1>F       g56.3<0,1,0>F   g56.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g57.4<1>F       g57.3<0,1,0>F   g57.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g58.4<1>F       g58.3<0,1,0>F   g58.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g59.4<1>F       g59.3<0,1,0>F   g59.4<4,4,1>F   { align1 WE_all 1N I@3 };
mov(4)          g45.3<4>UD      g4<8,2,4>UD                     { align1 WE_all 1N F@6 };
mov(4)          g6<4>UD         g60.1<8,2,4>UD                  { align1 WE_all 1N A@3 };
mov(4)          g8<4>UD         g60.3<8,2,4>UD                  { align1 WE_all 1N F@6 };
sel.l(4)        g49.4<1>F       g49.3<0,1,0>F   g49.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g50.4<1>F       g50.3<0,1,0>F   g50.4<4,4,1>F   { align1 WE_all 1N I@4 };
mov(4)          g54.3<4>UD      g70<8,2,4>UD                    { align1 WE_all 1N F@7 };
sel.ge(8)       g57<1>F         g56.7<0,1,0>F   g57<8,8,1>F     { align1 WE_all 1Q F@5 };
sel.ge(8)       g59<1>F         g58.7<0,1,0>F   g59<8,8,1>F     { align1 WE_all 1Q F@4 };
sel.l(4)        g45.4<1>F       g45.3<0,1,0>F   g45.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g46.4<1>F       g46.3<0,1,0>F   g46.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g4<4>F          g6<8,2,4>F      g8<8,2,4>F      { align1 WE_all 1N I@2 };
sel.l(8)        g50<1>F         g49.7<0,1,0>F   g50<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.l(4)        g54.4<1>F       g54.3<0,1,0>F   g54.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g55.4<1>F       g55.3<0,1,0>F   g55.4<4,4,1>F   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
(+f0.0) sel(16) g119<1>UD       g59.7<0,1,0>UD  g57.7<0,1,0>UD  { align1 1H };
sel.l(8)        g46<1>F         g45.7<0,1,0>F   g46<8,8,1>F     { align1 WE_all 1Q F@5 };
mov(4)          g60.3<4>UD      g4<8,2,4>UD                     { align1 WE_all 1N F@5 };
sel.l(8)        g55<1>F         g54.7<0,1,0>F   g55<8,8,1>F     { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g117<1>UD       g50.7<0,1,0>UD  g46.7<0,1,0>UD  { align1 1H };
sel.ge(4)       g60.4<1>F       g60.3<0,1,0>F   g60.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g61.4<1>F       g61.3<0,1,0>F   g61.4<4,4,1>F   { align1 WE_all 1N I@2 };
cmp.z.f0.0(16)  null<1>D        g97<8,8,1>D     2D              { align1 1H };
sel.ge(8)       g61<1>F         g60.7<0,1,0>F   g61<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
(+f0.0) sel(16) g121<1>UD       g55.7<0,1,0>UD  g117<1,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g123<1>UD       g61.7<0,1,0>UD  g119<1,1,0>UD   { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g99<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g113<1>F        g121<1,1,0>F    -g123<1,1,0>F   { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g101<8,8,1>UD   0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL14         UIP:  LABEL14             { align1 1H };
mul(16)         g1<1>D          g105<1,1,0>D    6W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mul(16)         g3<1>D          g99<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add3(16)        g5<1>D          g1<8,8,1>D      g97<8,8,1>D     g3<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
shl(16)         g7<1>D          g5<8,8,1>D      0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g7UD            g113UD          0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };

LABEL14:
endif(16)       JIP:  LABEL13                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
or(16)          g8<1>D          ~g107<1,1,0>D   ~g42<1,1,0>D    { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g8<8,8,1>UD     0x00000000UD    { align1 1H I@2 };
mov(16)         g9<1>UD         f0<0,1,0>UW                     { align1 1H };
and(16)         g47<1>UD        g47<1,1,0>UD    g9<1,1,0>UD     { align1 1H I@1 compacted };

LABEL13:
while(16)       JIP:  LABEL15                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g10<1>D         g93<1,1,0>D     16D             { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g42<8,8,1>UD    0x00000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@5 };
mov(16)         g48<1>UD        f0<0,1,0>UW                     { align1 1H };

LABEL18:
cmp.z.f0.0(16)  null<1>D        g48<8,8,1>D     0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL16       UIP:  LABEL16             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
fbl(16)         g29<1>UD        g48<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         a0<1>UW         0x0140UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g29<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0140UW        { align1 1H A@1 };
mov(16)         g31<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  g33<1>D         g31<1,1,0>D     g10<1,1,0>D     { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g33<8,8,1>UD    g42<8,8,1>UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
(+f0.0) sel(16) g35<1>UD        g21<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g40<1>UD        g23<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
(+f0.0) sel(16) g45<1>UD        g13<8,8,1>UD    0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
(+f0.0) sel(16) g50<1>UD        g15<8,8,1>UD    0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g54<1>UD        g17<8,8,1>UD    0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g67<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@5 compacted };
mov(16)         g67<1>F         g35<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g69<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g69<1>F         g40<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
mov(16)         g61<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@3 compacted };
mov(16)         g61<1>F         g45<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
mov(16)         g63<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g63<1>F         g50<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g44<1>UD        g25<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g65<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g65<1>F         g54<1,1,0>F                     { align1 1H compacted };
mov(8)          g108<2>UD       g67.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g121<2>UD       g69.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g35<2>UD        g61.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g58<2>UD        g63.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         g71<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@5 compacted };
mov(16)         g71<1>F         g44<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g97<8,8,1>D     1D              { align1 1H };
mov(8)          g83<2>UD        g65.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.ge(8)       g106<2>F        g67<8,4,2>F     g108<8,4,2>F    { align1 WE_all 1Q I@6 };
sel.ge(8)       g119<2>F        g69<8,4,2>F     g121<8,4,2>F    { align1 WE_all 1Q I@5 };
sel.l(8)        g29<2>F         g61<8,4,2>F     g35<8,4,2>F     { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.l(8)        g56<2>F         g63<8,4,2>F     g58<8,4,2>F     { align1 WE_all 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.l(8)        g81<2>F         g65<8,4,2>F     g83<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g67.1<2>UD      g106<8,4,2>UD                   { align1 WE_all 1Q A@5 };
mov(8)          g69.1<2>UD      g119<8,4,2>UD                   { align1 WE_all 1Q A@4 };
mov(8)          g61.1<2>UD      g29<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g63.1<2>UD      g56<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g35<2>UD        g71.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g65.1<2>UD      g81<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g113<4>UD       g67.2<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g111<4>UD       g67.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g3<4>UD         g69.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g1<4>UD         g69.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g44<4>UD        g61.2<8,2,4>UD                  { align1 WE_all 1N A@6 };
mov(4)          g40<4>UD        g61.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g75<4>UD        g63.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g73<4>UD        g63.1<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g29<2>F         g71<8,4,2>F     g35<8,4,2>F     { align1 WE_all 1Q I@7 };
mov(4)          g88<4>UD        g65.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g86<4>UD        g65.1<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g109<4>F        g111<8,2,4>F    g113<8,2,4>F    { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.ge(4)       g122<4>F        g1<8,2,4>F      g3<8,2,4>F      { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.l(4)        g59<4>F         g73<8,2,4>F     g75<8,2,4>F     { align1 WE_all 1N I@3 };
mov(8)          g71.1<2>UD      g29<8,4,2>UD                    { align1 WE_all 1Q F@4 };
sel.l(4)        g84<4>F         g86<8,2,4>F     g88<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g67.2<4>UD      g109<8,2,4>UD                   { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(4)        g36<4>F         g40<8,2,4>F     g44<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g69.2<4>UD      g122<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g63.2<4>UD      g59<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g65.2<4>UD      g84<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g118<4>UD       g67.3<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g116<4>UD       g67.1<8,2,4>UD                  { align1 WE_all 1N $8.src };
mov(4)          g61.2<4>UD      g36<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g8<4>UD         g69.3<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g6<4>UD         g69.1<8,2,4>UD                  { align1 WE_all 1N $8.src };
mov(4)          g40<4>UD        g71.1<8,2,4>UD                  { align1 WE_all 1N A@1 };
mov(4)          g44<4>UD        g71.2<8,2,4>UD                  { align1 WE_all 1N F@1 };
mov(4)          g80<4>UD        g63.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g78<4>UD        g63.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g105<4>UD       g65.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g103<4>UD       g65.1<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.ge(4)       g114<4>F        g116<8,2,4>F    g118<8,2,4>F    { align1 WE_all 1N I@7 };
mov(4)          g54<4>UD        g61.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g50<4>UD        g61.1<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g4<4>F          g6<8,2,4>F      g8<8,2,4>F      { align1 WE_all 1N I@7 };
sel.ge(4)       g36<4>F         g40<8,2,4>F     g44<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g76<4>F         g78<8,2,4>F     g80<8,2,4>F     { align1 WE_all 1N I@5 };
sel.l(4)        g89<4>F         g103<8,2,4>F    g105<8,2,4>F    { align1 WE_all 1N I@3 };
mov(4)          g67.3<4>UD      g114<8,2,4>UD                   { align1 WE_all 1N F@5 };
mov(4)          g69.3<4>UD      g4<8,2,4>UD                     { align1 WE_all 1N F@4 };
mov(4)          g71.2<4>UD      g36<8,2,4>UD                    { align1 WE_all 1N F@3 };
sel.l(4)        g45<4>F         g50<8,2,4>F     g54<8,2,4>F     { align1 WE_all 1N I@4 };
mov(4)          g63.3<4>UD      g76<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g65.3<4>UD      g89<8,2,4>UD                    { align1 WE_all 1N F@2 };
sel.ge(4)       g67.4<1>F       g67.3<0,1,0>F   g67.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g68.4<1>F       g68.3<0,1,0>F   g68.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g69.4<1>F       g69.3<0,1,0>F   g69.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g70.4<1>F       g70.3<0,1,0>F   g70.4<4,4,1>F   { align1 WE_all 1N I@4 };
mov(4)          g61.3<4>UD      g45<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g50<4>UD        g71.1<8,2,4>UD                  { align1 WE_all 1N A@4 };
mov(4)          g54<4>UD        g71.3<8,2,4>UD                  { align1 WE_all 1N F@5 };
sel.l(4)        g63.4<1>F       g63.3<0,1,0>F   g63.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.l(4)        g64.4<1>F       g64.3<0,1,0>F   g64.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.l(4)        g65.4<1>F       g65.3<0,1,0>F   g65.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g66.4<1>F       g66.3<0,1,0>F   g66.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(8)       g68<1>F         g67.7<0,1,0>F   g68<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(8)       g70<1>F         g69.7<0,1,0>F   g70<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.l(4)        g61.4<1>F       g61.3<0,1,0>F   g61.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g62.4<1>F       g62.3<0,1,0>F   g62.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g45<4>F         g50<8,2,4>F     g54<8,2,4>F     { align1 WE_all 1N I@1 };
sel.l(8)        g64<1>F         g63.7<0,1,0>F   g64<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.l(8)        g66<1>F         g65.7<0,1,0>F   g66<8,8,1>F     { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
(+f0.0) sel(16) g57<1>UD        g70.7<0,1,0>UD  g68.7<0,1,0>UD  { align1 1H };
sel.l(8)        g62<1>F         g61.7<0,1,0>F   g62<8,8,1>F     { align1 WE_all 1Q F@4 };
mov(4)          g71.3<4>UD      g45<8,2,4>UD                    { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g55<1>UD        g64.7<0,1,0>UD  g62.7<0,1,0>UD  { align1 1H };
sel.ge(4)       g71.4<1>F       g71.3<0,1,0>F   g71.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g72.4<1>F       g72.3<0,1,0>F   g72.4<4,4,1>F   { align1 WE_all 1N I@2 };
cmp.z.f0.0(16)  null<1>D        g97<8,8,1>D     2D              { align1 1H };
sel.ge(8)       g72<1>F         g71.7<0,1,0>F   g72<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
(+f0.0) sel(16) g59<1>UD        g66.7<0,1,0>UD  g55<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g61<1>UD        g72.7<0,1,0>UD  g57<1,1,0>UD    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g99<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g114<1>F        g59<1,1,0>F     -g61<1,1,0>F    { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g101<8,8,1>UD   0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL17             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mul(16)         g62<1>D         g31<1,1,0>D     6W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@6 };
mul(16)         g64<1>D         g99<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g66<1>D         g62<8,8,1>D     g97<8,8,1>D     g64<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g68<1>D         g66<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g68UD           g114UD          0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };

LABEL17:
endif(16)       JIP:  LABEL16                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
or(16)          g69<1>D         ~g33<1,1,0>D    ~g42<1,1,0>D    { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g69<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
mov(16)         g70<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g48<1>UD        g48<1,1,0>UD    g70<1,1,0>UD    { align1 1H I@1 compacted };

LABEL16:
while(16)       JIP:  LABEL18                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
add(16)         g71<1>D         g95<1,1,0>D     32D             { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g42<8,8,1>UD    0x00000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
mov(16)         g49<1>UD        f0<0,1,0>UW                     { align1 1H };

LABEL21:
cmp.z.f0.0(16)  null<1>D        g49<8,8,1>D     0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL19       UIP:  LABEL19             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
fbl(16)         g73<1>UD        g49<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
mov(16)         a0<1>UW         0x08e0UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x08e0UW        { align1 1H A@1 };
mov(16)         g75<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.z.f0.0(16)  g77<1>D         g75<1,1,0>D     g71<1,1,0>D     { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g77<8,8,1>UD    g42<8,8,1>UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g79<1>UD        g21<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g81<1>UD        g23<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g83<1>UD        g13<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g85<1>UD        g15<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         g107<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g107<1>F        g79<1,1,0>F                     { align1 1H compacted };
mov(16)         g109<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H I@3 compacted };
mov(16)         g109<1>F        g81<1,1,0>F                     { align1 1H compacted };
mov(16)         g73<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g73<1>F         g83<1,1,0>F                     { align1 1H compacted };
mov(16)         g89<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g89<1>F         g85<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g82<1>UD        g25<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g86<1>UD        g17<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(8)          g4<2>UD         g107.1<8,4,2>UD                 { align1 WE_all 1Q F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g34<2>UD        g109.1<8,4,2>UD                 { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g57<2>UD        g73.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g79<2>UD        g89.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g111<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g111<1>F        g82<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g105<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H A@5 compacted };
mov(16)         g105<1>F        g86<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g97<8,8,1>D     1D              { align1 1H };
sel.ge(8)       g2<2>F          g107<8,4,2>F    g4<8,4,2>F      { align1 WE_all 1Q A@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.ge(8)       g32<2>F         g109<8,4,2>F    g34<8,4,2>F     { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.l(8)        g55<2>F         g73<8,4,2>F     g57<8,4,2>F     { align1 WE_all 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(8)        g68<2>F         g89<8,4,2>F     g79<8,4,2>F     { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g115<2>UD       g105.1<8,4,2>UD                 { align1 WE_all 1Q F@5 };
mov(8)          g107.1<2>UD     g2<8,4,2>UD                     { align1 WE_all 1Q A@4 };
mov(8)          g109.1<2>UD     g32<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g73.1<2>UD      g55<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g89.1<2>UD      g68<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(8)          g57<2>UD        g111.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(8)        g113<2>F        g105<8,4,2>F    g115<8,4,2>F    { align1 WE_all 1Q I@6 };
mov(4)          g9<4>UD         g107.2<8,2,4>UD                 { align1 WE_all 1N I@5 };
mov(4)          g7<4>UD         g107.1<8,2,4>UD                 { align1 WE_all 1N $8.src };
mov(4)          g44<4>UD        g109.2<8,2,4>UD                 { align1 WE_all 1N I@6 };
mov(4)          g40<4>UD        g109.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g62<4>UD        g73.2<8,2,4>UD                  { align1 WE_all 1N @7 $4.dst };
mov(4)          g60<4>UD        g73.1<8,2,4>UD                  { align1 WE_all 1N $4.src };
mov(4)          g84<4>UD        g89.2<8,2,4>UD                  { align1 WE_all 1N A@7 };
mov(4)          g82<4>UD        g89.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
sel.ge(8)       g55<2>F         g111<8,4,2>F    g57<8,4,2>F     { align1 WE_all 1Q I@7 };
mov(8)          g105.1<2>UD     g113<8,4,2>UD                   { align1 WE_all 1Q F@2 };
sel.ge(4)       g5<4>F          g7<8,2,4>F      g9<8,2,4>F      { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.ge(4)       g35<4>F         g40<8,2,4>F     g44<8,2,4>F     { align1 WE_all 1N I@6 };
sel.l(4)        g80<4>F         g82<8,2,4>F     g84<8,2,4>F     { align1 WE_all 1N I@2 };
mov(8)          g111.1<2>UD     g55<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(4)          g120<4>UD       g105.2<8,2,4>UD                 { align1 WE_all 1N I@2 };
mov(4)          g118<4>UD       g105.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g107.2<4>UD     g5<8,2,4>UD                     { align1 WE_all 1N F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.l(4)        g58<4>F         g60<8,2,4>F     g62<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g109.2<4>UD     g35<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g89.2<4>UD      g80<8,2,4>UD                    { align1 WE_all 1N F@2 };
sel.l(4)        g116<4>F        g118<8,2,4>F    g120<8,2,4>F    { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g31<4>UD        g107.3<8,2,4>UD                 { align1 WE_all 1N I@3 };
mov(4)          g29<4>UD        g107.1<8,2,4>UD                 { align1 WE_all 1N $8.src };
mov(4)          g73.2<4>UD      g58<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g54<4>UD        g109.3<8,2,4>UD                 { align1 WE_all 1N I@5 };
mov(4)          g47<4>UD        g109.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g60<4>UD        g111.1<8,2,4>UD                 { align1 WE_all 1N F@2 };
mov(4)          g62<4>UD        g111.2<8,2,4>UD                 { align1 WE_all 1N F@2 };
mov(4)          g103<4>UD       g89.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g87<4>UD        g89.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g105.2<4>UD     g116<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.ge(4)       g10<4>F         g29<8,2,4>F     g31<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g67<4>UD        g73.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g65<4>UD        g73.1<8,2,4>UD                  { align1 WE_all 1N $4.dst };
sel.ge(4)       g45<4>F         g47<8,2,4>F     g54<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g58<4>F         g60<8,2,4>F     g62<8,2,4>F     { align1 WE_all 1N I@6 };
sel.l(4)        g85<4>F         g87<8,2,4>F     g103<8,2,4>F    { align1 WE_all 1N I@4 };
mov(4)          g1<4>UD         g105.3<8,2,4>UD                 { align1 WE_all 1N I@3 };
mov(4)          g123<4>UD       g105.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g107.3<4>UD     g10<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g109.3<4>UD     g45<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g111.2<4>UD     g58<8,2,4>UD                    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sel.l(4)        g63<4>F         g65<8,2,4>F     g67<8,2,4>F     { align1 WE_all 1N I@6 };
mov(4)          g89.3<4>UD      g85<8,2,4>UD                    { align1 WE_all 1N F@2 };
sel.l(4)        g121<4>F        g123<8,2,4>F    g1<8,2,4>F      { align1 WE_all 1N I@5 };
sel.ge(4)       g107.4<1>F      g107.3<0,1,0>F  g107.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.ge(4)       g108.4<1>F      g108.3<0,1,0>F  g108.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.ge(4)       g109.4<1>F      g109.3<0,1,0>F  g109.4<4,4,1>F  { align1 WE_all 1N I@3 };
sel.ge(4)       g110.4<1>F      g110.3<0,1,0>F  g110.4<4,4,1>F  { align1 WE_all 1N I@3 };
mov(4)          g73.3<4>UD      g63<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g65<4>UD        g111.1<8,2,4>UD                 { align1 WE_all 1N A@3 };
mov(4)          g67<4>UD        g111.3<8,2,4>UD                 { align1 WE_all 1N F@6 };
sel.l(4)        g89.4<1>F       g89.3<0,1,0>F   g89.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g90.4<1>F       g90.3<0,1,0>F   g90.4<4,4,1>F   { align1 WE_all 1N I@4 };
mov(4)          g105.3<4>UD     g121<8,2,4>UD                   { align1 WE_all 1N F@7 };
sel.ge(8)       g108<1>F        g107.7<0,1,0>F  g108<8,8,1>F    { align1 WE_all 1Q F@5 };
sel.ge(8)       g110<1>F        g109.7<0,1,0>F  g110<8,8,1>F    { align1 WE_all 1Q F@4 };
sel.l(4)        g73.4<1>F       g73.3<0,1,0>F   g73.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g74.4<1>F       g74.3<0,1,0>F   g74.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g63<4>F         g65<8,2,4>F     g67<8,2,4>F     { align1 WE_all 1N I@2 };
sel.l(8)        g90<1>F         g89.7<0,1,0>F   g90<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.l(4)        g105.4<1>F      g105.3<0,1,0>F  g105.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g106.4<1>F      g106.3<0,1,0>F  g106.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g74<1>F         g73.7<0,1,0>F   g74<8,8,1>F     { align1 WE_all 1Q F@5 };
mov(4)          g111.3<4>UD     g63<8,2,4>UD                    { align1 WE_all 1N F@5 };
sel.l(8)        g106<1>F        g105.7<0,1,0>F  g106<8,8,1>F    { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g87<1>UD        g90.7<0,1,0>UD  g74.7<0,1,0>UD  { align1 1H };
sel.ge(4)       g111.4<1>F      g111.3<0,1,0>F  g111.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.ge(4)       g112.4<1>F      g112.3<0,1,0>F  g112.4<4,4,1>F  { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
(+f0.0) sel(16) g89<1>UD        g110.7<0,1,0>UD g108.7<0,1,0>UD { align1 1H };
sel.ge(8)       g112<1>F        g111.7<0,1,0>F  g112<8,8,1>F    { align1 WE_all 1Q F@1 };
cmp.z.f0.0(16)  null<1>D        g97<8,8,1>D     2D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
(+f0.0) sel(16) g103<1>UD       g106.7<0,1,0>UD g87<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g105<1>UD       g112.7<0,1,0>UD g89<1,1,0>UD    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g99<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g115<1>F        g103<1,1,0>F    -g105<1,1,0>F   { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g101<8,8,1>UD   0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL20         UIP:  LABEL20             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mul(16)         g106<1>D        g75<1,1,0>D     6W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mul(16)         g108<1>D        g99<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add3(16)        g110<1>D        g106<8,8,1>D    g97<8,8,1>D     g108<1,1,1>D { align1 1H };
shl(16)         g112<1>D        g110<8,8,1>D    0x00000002UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g112UD          g115UD          0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };

LABEL20:
endif(16)       JIP:  LABEL19                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
or(16)          g113<1>D        ~g77<1,1,0>D    ~g42<1,1,0>D    { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g113<8,8,1>UD   0x00000000UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g114<1>UD       f0<0,1,0>UW                     { align1 1H F@1 };
and(16)         g49<1>UD        g49<1,1,0>UD    g114<1,1,0>UD   { align1 1H I@1 compacted };

LABEL19:
while(16)       JIP:  LABEL21                                   { align1 1H };
mov.nz.f0.0(16) null<1>D        g42<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL22         UIP:  LABEL22             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
shl(16)         g115<1>D        g91<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g117<1>D        g115<1,1,0>D    1152D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g117UD          nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
shl(16)         g118<1>D        g93<8,8,1>D     0x00000002UD    { align1 1H $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g120<1>D        g118<1,1,0>D    1216D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g120UD          nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
shl(16)         g121<1>D        g95<8,8,1>D     0x00000002UD    { align1 1H $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g123<1>D        g121<1,1,0>D    1280D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g123UD          nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $14 };

LABEL22:
endif(16)       JIP:  LABEL23                                   { align1 1H };

LABEL23:
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
send(1)         g124UD          g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
mov(8)          g127<1>UD       0x00000000UD                    { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(2)          g127.10<1>UB    g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g127UD          nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $0 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@6 };
mov(16)         g50<1>UD        g52<8,8,1>UD                    { align1 1H };

LABEL26:
cmp.ge.f0.0(16) null<1>UD       g50<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL24       UIP:  LABEL24             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
shl(16)         g1<1>D          g50<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g116UD          g1UD            nullUD          0x04200500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
cmp.nz.f0.0(16) null<1>F        g116<1,1,0>F    0x7f800000F  /* infF */ { align1 1H $1.dst compacted };
(+f0.0) if(16)  JIP:  LABEL25         UIP:  LABEL25             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
add(16)         g3<1>D          g125<1,1,0>D    44D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.l.f0.0(16)  g5<1>UD         g3<1,1,0>UD     g125<1,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g7<1>D          g3<1,1,0>D      g1<1,1,0>D      { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.l.f0.0(16)  g9<1>UD         g7<1,1,0>UD     g3<1,1,0>UD     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g13<2>UD        g7<4,4,1>UD                     { align1 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $8.src };
mov(8)          g15<2>UD        g8<4,4,1>UD                     { align1 2Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
add3(16)        g11<1>D         -g5<8,8,1>D     g38<8,8,1>D     -g9<1,1,1>D { align1 1H };
mov(8)          g15.1<2>UD      g12<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g13.1<2>UD      g11<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g13UD           g116UD          0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };

LABEL25:
endif(16)       JIP:  LABEL24                                   { align1 1H };
add(16)         g50<1>D         g50<1,1,0>D     512D            { align1 1H compacted };

LABEL24:
while(16)       JIP:  LABEL26                                   { align1 1H };
nop                                                             ;

LABEL29:
cmp.ge.f0.0(16) null<1>UD       g52<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL27       UIP:  LABEL27             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
shl(16)         g14<1>D         g52<8,8,1>D     0x00000002UD    { align1 1H A@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g16<1>D         g14<1,1,0>D     1152D           { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g117UD          g16UD           nullUD          0x04200500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
cmp.nz.f0.0(16) null<1>D        g117<8,8,1>D    0D              { align1 1H $8.dst };
(+f0.0) if(16)  JIP:  LABEL28         UIP:  LABEL28             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g17<1>D         g125<1,1,0>D    1196D           { align1 1H F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
cmp.l.f0.0(16)  g19<1>UD        g17<1,1,0>UD    g125<1,1,0>UD   { align1 1H A@1 compacted };
add(16)         g21<1>D         g17<1,1,0>D     g14<1,1,0>D     { align1 1H F@7 compacted };
cmp.l.f0.0(16)  g23<1>UD        g21<1,1,0>UD    g17<1,1,0>UD    { align1 1H A@1 compacted };
mov(8)          g27<2>UD        g21<4,4,1>UD                    { align1 1Q $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $8.src };
mov(8)          g29<2>UD        g22<4,4,1>UD                    { align1 2Q };
add3(16)        g25<1>D         -g19<8,8,1>D    g38<8,8,1>D     -g23<1,1,1>D { align1 1H A@3 };
mov(8)          g29.1<2>UD      g26<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g27.1<2>UD      g25<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g27UD           g117UD          0x0804058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };

LABEL28:
endif(16)       JIP:  LABEL27                                   { align1 1H };
add(16)         g52<1>D         g52<1,1,0>D     512D            { align1 1H compacted };

LABEL27:
while(16)       JIP:  LABEL29                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_BFS_BFS_pass1_initial_batchable_code[] = {
    0x80000065, 0x46058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x1f050220, 0x00000024, 0x00000000,
    0x00040061, 0x25054220, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00460c, 0x00340000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa0350040, 0x42810203, 0xa0410040, 0x42c10203,
    0x27371a70, 0x02103503, 0x00030061, 0x3b060220,
    0x00343505, 0x00000000, 0x00130061, 0x3d060220,
    0x00343605, 0x00000000, 0x27431c70, 0x02104103,
    0xa0391c40, 0x02123712, 0x00031961, 0x3b260220,
    0x00343905, 0x00000000, 0x00131a61, 0x3d260220,
    0x00343a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x3f140000,
    0xfb003b24, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00041c69, 0x45058660,
    0x02462505, 0x00000002, 0xa0471940, 0x45004102,
    0x27491970, 0x41004703, 0x00030061, 0x4d060220,
    0x00344705, 0x00000000, 0x00130061, 0x4f060220,
    0x00344805, 0x00000000, 0x00041b52, 0x4b042e68,
    0x06264305, 0x49050224, 0x00031961, 0x4d260220,
    0x00344b05, 0x00000000, 0x00131a61, 0x4f260220,
    0x00344c05, 0x00000000, 0xe2450961, 0x00114004,
    0x80000965, 0x45058220, 0x02004504, 0xffffffff,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80001a4c, 0x51050220, 0x00004504, 0x00000000,
    0x80030061, 0x2c054410, 0x00000000, 0x76543210,
    0x80001a69, 0x10018220, 0x02005104, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000800,
    0x80000961, 0x53060660, 0x00010680, 0x00000000,
    0x80000061, 0x53260660, 0x00010690, 0x00000000,
    0x642c1a40, 0x00802c95, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x70260660,
    0x00005324, 0x00000000, 0x80041a40, 0x2b058150,
    0x05582c05, 0xffffffff, 0x80031a61, 0x70060660,
    0x00005304, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004231, 0x4e140000,
    0xfb00700c, 0x00340000, 0x80042261, 0x1c054660,
    0x00000000, 0x00000000, 0x00040061, 0x1c050660,
    0x00464e05, 0x00000000, 0x80041961, 0x10014110,
    0x00000000, 0x03800380, 0x80040069, 0x10018510,
    0x01462b05, 0x00020002, 0x80040940, 0x10018110,
    0x01461001, 0x03800380, 0xe3290961, 0x001b0004,
    0x80001961, 0x29054660, 0x00000000, 0x00000000,
    0x80031940, 0x29260660, 0x06442906, 0x00442926,
    0x80021940, 0x29470660, 0x06422927, 0x00422947,
    0x80021940, 0x29670660, 0x06422927, 0x00422967,
    0x80021940, 0x29850660, 0x06002964, 0x00342985,
    0x80021a40, 0x2a850660, 0x06002a64, 0x00342a85,
    0xa42a1940, 0x2a012982, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0270040, 0x29201f02,
    0x00040061, 0x54050660, 0x00462905, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x27560070, 0x4e002703, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00041a70, 0x00018220,
    0x22465605, 0x00000000, 0x00040061, 0x23050120,
    0x20003000, 0x00000000, 0x01040022, 0x0001c060,
    0x00000030, 0x00000030, 0x00040061, 0x21054220,
    0x00000000, 0xffffffff, 0x00040028, 0x0001c660,
    0x00000088, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000078, 0xa0571f40, 0x4e005402,
    0xa0250040, 0x01002503, 0xa01f1a40, 0x58301f52,
    0x0004a170, 0x00010220, 0x42462505, 0x00463f05,
    0x01040022, 0x0001c060, 0x00000030, 0x00000030,
    0x00041f61, 0x21054220, 0x00000000, 0x00000000,
    0x00040028, 0x0001c660, 0x00000020, 0x00000010,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040027, 0x00014060, 0x00000000, 0xfffffcb8,
    0x00041a61, 0x00010660, 0x20462105, 0x00000000,
    0x01040022, 0x0001c060, 0x000000c0, 0x00000090,
    0x00041e4c, 0x58050220, 0x00462305, 0x00000000,
    0x00040070, 0x00018660, 0x16462305, 0x00000000,
    0x11041a62, 0x5a058220, 0x02465805, 0x00000020,
    0xa0291940, 0x5a002502, 0x80040061, 0x10014110,
    0x00000000, 0x04e004e0, 0x00040069, 0x10018510,
    0x01565a06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x04e004e0, 0xe02b0961, 0x001b0004,
    0x00040024, 0x0001c060, 0x00000040, 0x00000040,
    0x00041b61, 0x29054220, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x2b054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040040, 0x5b058660, 0x06000204, 0x0000082c,
    0x00041c69, 0x5e058660, 0x02462905, 0x00000002,
    0x00040040, 0x76058660, 0x06000204, 0x00002c2c,
    0xa02e0040, 0x00810243, 0xe0530065, 0x0ff10043,
    0x00041f69, 0x4c058660, 0x02462b05, 0x00000009,
    0xa0601d40, 0x5e005b02, 0xe75d0070, 0x82c05b03,
    0x80030061, 0x59054410, 0x00000000, 0x76543210,
    0x00041d69, 0x55058660, 0x02465305, 0x00000004,
    0x27621c70, 0x5b006003, 0x00030061, 0x66060220,
    0x00346005, 0x00000000, 0x00130061, 0x68060220,
    0x00346105, 0x00000000, 0x64591d40, 0x00805995,
    0x00041c52, 0x64042e68, 0x06265d05, 0x62050224,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x57050120, 0x00465905, 0x00000000,
    0x00131a61, 0x68260220, 0x00346505, 0x00000000,
    0x00031b61, 0x66260220, 0x00346405, 0x00000000,
    0xa05a1b40, 0x55005702, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x6a140000,
    0xfb006624, 0x00000000, 0x00042361, 0x6c050120,
    0x00566a06, 0x00000000, 0x00040061, 0x79050120,
    0x00566a16, 0x00000000, 0x00031a41, 0x20018220,
    0x01466c05, 0x00580058, 0x00041b6c, 0x6e058660,
    0x02466c05, 0x0000001f, 0x60720041, 0x05806c02,
    0x607b1c41, 0x5cc07902, 0x27780070, 0x02107603,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xfe700049, 0x05806c03, 0xa0341c40, 0x72002e02,
    0x60731e41, 0x05806e02, 0xa07d1d40, 0x7b007602,
    0x00130041, 0x20018220, 0x01466d05, 0x00580058,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00031c61, 0x3a060220, 0x00343405, 0x00000000,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x00131d61, 0x3c060220, 0x00343505, 0x00000000,
    0x27031c70, 0x76007d03, 0x00130049, 0x71058222,
    0x02466d05, 0x00000058, 0x27300070, 0x02102e2b,
    0x27360070, 0x2e003403, 0xe0340065, 0x1ff05a03,
    0x00041d52, 0x26042e68, 0x06267805, 0x03050224,
    0xa0751d40, 0x73007002, 0xa0321d40, 0x0212301a,
    0x00041952, 0x38040e68, 0x0e2e3205, 0x36057505,
    0x00030061, 0x2d060220, 0x00347d05, 0x00000000,
    0x00130061, 0x2f060220, 0x00347e05, 0x00000000,
    0x00131b61, 0x3c260220, 0x00343905, 0x00000000,
    0x00031c61, 0x3a260220, 0x00343805, 0x00000000,
    0x00031c61, 0x2d260220, 0x00342605, 0x00000000,
    0x00131c61, 0x2f260220, 0x00342705, 0x00000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x3e440000, 0xfb003a24, 0x000c0000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x46340000, 0xfb002d24, 0x00080000,
    0xa05c2440, 0x02004203, 0x00042569, 0x61058660,
    0x02464a05, 0x00000005, 0xa04e2540, 0x4c004602,
    0x275e1b70, 0x42005c03, 0xa0641b40, 0x61005c02,
    0xe0620068, 0x01b04a03, 0xa0501c40, 0x20004e03,
    0xa060c440, 0x44025e02, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x27661c70, 0x5c006403,
    0x00030061, 0x6a060220, 0x00346405, 0x00000000,
    0x00130061, 0x6c060220, 0x00346505, 0x00000000,
    0xa05b0040, 0x34004e02, 0x2752e562, 0x48005003,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00041d52, 0x68040e68, 0x0e2e6005, 0x66056205,
    0x00131961, 0x6c260220, 0x00346905, 0x00000000,
    0x00031a61, 0x6a260220, 0x00346805, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x01440000, 0xfb006a24, 0x000c0000,
    0xa06b3640, 0x01006403, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xe76d1970, 0x01006b03,
    0x00030061, 0x71060220, 0x00346b05, 0x00000000,
    0x00130061, 0x73060220, 0x00346c05, 0x00000000,
    0xa06f1b40, 0x68026d02, 0x00131961, 0x73260220,
    0x00347005, 0x00000000, 0x00031a61, 0x71260220,
    0x00346f05, 0x00000000, 0x20762640, 0x01200700,
    0x00041162, 0x09058aa0, 0x4a467605, 0x0704ec3d,
    0x00041170, 0x17058aa0, 0x5a460905, 0x77f684df,
    0x00044738, 0x0e050aa0, 0x1a460905, 0x00460001,
    0x00040070, 0x19058aa0, 0x3a467605, 0x0704ec3d,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x75240000, 0xfb007124, 0x00040000,
    0x00042741, 0x10058aa0, 0x0a460e05, 0x417d70a4,
    0x00041265, 0x00010220, 0x22461705, 0x00461905,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xef091162, 0x00001003, 0x80002601, 0x00000000,
    0x00000000, 0x00000000, 0x20792840, 0x03207500,
    0x80002601, 0x00000000, 0x00000000, 0x00000000,
    0x207b2840, 0x05207700, 0x00040a70, 0x1a058aa0,
    0x3a467905, 0x0704ec3d, 0x00040062, 0x0b058aa0,
    0x4a467905, 0x0704ec3d, 0x00041362, 0x0d058aa0,
    0x4a467b05, 0x0704ec3d, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044938, 0x11050aa0,
    0x1a460b05, 0x00460001, 0x00043970, 0x1c058aa0,
    0x5a460b05, 0x77f684df, 0x00042941, 0x13058aa0,
    0x0a461105, 0x417d70a4, 0x00041265, 0x00010220,
    0x22461c05, 0x00461a05, 0xef0b1162, 0x00001303,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044a38, 0x14050aa0, 0x1a460d05, 0x00460001,
    0x00041a70, 0x1d058aa0, 0x3a467b05, 0x0704ec3d,
    0x00043a70, 0x1f058aa0, 0x5a460d05, 0x77f684df,
    0x80002a01, 0x00000000, 0x00000000, 0x00000000,
    0x00041c41, 0x16058aa0, 0x0a461405, 0x417d70a4,
    0x00041265, 0x00010220, 0x22461f05, 0x00461d05,
    0xef281162, 0x00001603, 0x272a0070, 0x52005b03,
    0x01040022, 0x0001c060, 0x00000130, 0x00000130,
    0x00043569, 0x2c058660, 0x02465b05, 0x00000005,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xa02f9440, 0x2c003e02, 0xe02d3568, 0x01b05b03,
    0x27311a70, 0x3e002f03, 0xa03c3440, 0x01002f03,
    0x00030061, 0x38060220, 0x00342f05, 0x00000000,
    0x00133461, 0x3a060220, 0x00343005, 0x00000000,
    0x0004c452, 0x36040e68, 0x0e2e4005, 0x31052d05,
    0x273e1c70, 0x2f003c03, 0x00030061, 0x42060220,
    0x00343c05, 0x00000000, 0x00130061, 0x44060220,
    0x00343d05, 0x00000000, 0x00131c61, 0x3a260220,
    0x00343705, 0x00000000, 0x00031d61, 0x38260220,
    0x00343605, 0x00000000, 0xa0401d40, 0x36023e02,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x0d440000, 0xfb003824, 0x000c0000,
    0x00031961, 0x42260220, 0x00344005, 0x00000000,
    0x00131a61, 0x44260220, 0x00344105, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x15440000, 0xfb004224, 0x000c0000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00043569, 0x2e058660, 0x02463405, 0x00000002,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00041961, 0x2c050220, 0x00462e05, 0x00000000,
    0x00041970, 0x00018220, 0x42462c05, 0x00000120,
    0x01040028, 0x0001c660, 0x00000090, 0x00000090,
    0x00043869, 0x43058660, 0x02462c05, 0x00000002,
    0x00043861, 0x1d054220, 0x00000000, 0x7f800000,
    0x00043861, 0x1f054220, 0x00000000, 0x7f800000,
    0x00043861, 0x21054220, 0x00000000, 0x7f800000,
    0x00043861, 0x23054220, 0x00000000, 0x7f800000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x00000000, 0xea084314, 0x000c1d44,
    0x00040040, 0x2c058660, 0x06462c05, 0x00000800,
    0x00040027, 0x00014060, 0x00000000, 0xffffff60,
    0x00000060, 0x00000000, 0x00000000, 0x00000000,
    0x00041a70, 0x00018220, 0x42462e05, 0x00000030,
    0x01040028, 0x0001c660, 0x000000a8, 0x000000a8,
    0x00043869, 0x44058660, 0x02462e05, 0x00000002,
    0x00043861, 0x1e054220, 0x00000000, 0x00000000,
    0x00043861, 0x20054220, 0x00000000, 0x00000000,
    0x00043861, 0x22054220, 0x00000000, 0x00000000,
    0x00043861, 0x24054220, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xa0461d40, 0x48004403, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xea084614, 0x000c1e44, 0x00040040, 0x2e058660,
    0x06462e05, 0x00000800, 0x00040027, 0x00014060,
    0x00000000, 0xffffff48, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80004b31, 0x470c0000,
    0xe23e000c, 0x00000000, 0x80002b01, 0x00000000,
    0x00000000, 0x00000000, 0x80030061, 0x48054220,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80011961, 0x48550000,
    0x0000005c, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80044c31, 0x00000000,
    0x3008480c, 0x00000000, 0x80040001, 0x00000000,
    0xe0000000, 0x00000000, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x20492440, 0x15000d00,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x204b2440, 0x17000f00, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x204d2440, 0x19001100,
    0x20510940, 0x05204d00, 0x204e1440, 0x01204900,
    0x20590a41, 0x28005100, 0x20501540, 0x03204b00,
    0x20520b41, 0x09004e00, 0x00041361, 0x5f050a20,
    0x00465905, 0x00000000, 0x20541241, 0x0b005000,
    0x00041261, 0x5b050a20, 0x00465205, 0x00000000,
    0x00041161, 0x5d050a20, 0x00465405, 0x00000000,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00040070, 0x00018220, 0x22462a05, 0x00000000,
    0x00043561, 0x2f050120, 0x00003000, 0x00000000,
    0x80000061, 0x76054660, 0x00000000, 0x00000001,
    0xe0610065, 0x00305703, 0xe0630068, 0x00205703,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x65050660, 0x02007604, 0x00465705,
    0x00041a70, 0x00018660, 0x16462f05, 0x00000000,
    0x01040028, 0x0001c660, 0x00000968, 0x00000968,
    0x0004004c, 0x67050220, 0x00462f05, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80041961, 0x10014110, 0x00000000, 0x0b600b60,
    0x00040069, 0x10018510, 0x01566706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0b600b60,
    0xe0690961, 0x001b0004, 0xac6b1970, 0x5b006902,
    0x00041965, 0x00010220, 0x22466b05, 0x00462a05,
    0x01040062, 0x6d058220, 0x02461505, 0xff800000,
    0x01040062, 0x6f058220, 0x02461705, 0xff800000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x01041162, 0x71058220, 0x02460d05, 0x7f800000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x73058220, 0x02460f05, 0x7f800000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa3381c61, 0xff810000, 0x60380061, 0x00106d00,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa33a1b61, 0xff810000, 0x603a0061, 0x00106f00,
    0xa32d0a61, 0x7f810000, 0x602d0061, 0x00107100,
    0xa3311961, 0x7f810000, 0x60310061, 0x00107300,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x70058220, 0x02461905, 0xff800000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x74058220, 0x02461105, 0x7f800000,
    0x80031461, 0x4d060220, 0x00443826, 0x00000000,
    0x80031361, 0x67060220, 0x00443a26, 0x00000000,
    0x80031261, 0x79060220, 0x00442d26, 0x00000000,
    0x80031161, 0x0b060220, 0x00443126, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa33c0e61, 0xff810000, 0x603c0061, 0x00107000,
    0xa3360d61, 0x7f810000, 0x60360061, 0x00107400,
    0x00040070, 0x00018660, 0x16466105, 0x00000001,
    0x80030d62, 0x4b060aa0, 0x4a443806, 0x00444d06,
    0x80031c62, 0x58060aa0, 0x4a443a06, 0x00446706,
    0x80031b62, 0x77060aa0, 0x5a442d06, 0x00447906,
    0x80031a62, 0x09060aa0, 0x5a443106, 0x00440b06,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x80031561, 0x40060220, 0x00443626, 0x00000000,
    0x80030c61, 0x38260220, 0x00444b06, 0x00000000,
    0x80030b61, 0x3a260220, 0x00445806, 0x00000000,
    0x80030a61, 0x2d260220, 0x00447706, 0x00000000,
    0x80030961, 0x31260220, 0x00440906, 0x00000000,
    0x80031261, 0x79060220, 0x00443c26, 0x00000000,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x80031e62, 0x3e060aa0, 0x5a443606, 0x00444006,
    0x80021d61, 0x52070220, 0x00423847, 0x00000000,
    0x80020061, 0x50070220, 0x00423827, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80020e61, 0x71070220, 0x00423a47, 0x00000000,
    0x80021761, 0x6f070220, 0x00423a27, 0x00000000,
    0x80021f61, 0x03070220, 0x00422d47, 0x00000000,
    0x80020061, 0x01070220, 0x00422d27, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021f61, 0x21070220, 0x00423147, 0x00000000,
    0x80023861, 0x1f070220, 0x00423127, 0x00000000,
    0x80031f62, 0x77060aa0, 0x4a443c06, 0x00447906,
    0x80031261, 0x36260220, 0x00443e06, 0x00000000,
    0x80021f62, 0x4e070aa0, 0x4a425007, 0x00425207,
    0x80021e62, 0x6d070aa0, 0x4a426f07, 0x00427107,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021a62, 0x1d070aa0, 0x5a421f07, 0x00422107,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80030c61, 0x3c260220, 0x00447706, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021a61, 0x45070220, 0x00423647, 0x00000000,
    0x80023861, 0x43070220, 0x00423627, 0x00000000,
    0x80021361, 0x38470220, 0x00424e07, 0x00000000,
    0x80021f62, 0x7a070aa0, 0x5a420107, 0x00420307,
    0x80021361, 0x3a470220, 0x00426d07, 0x00000000,
    0x80021261, 0x31470220, 0x00421d07, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021c62, 0x41070aa0, 0x5a424307, 0x00424507,
    0x80021b61, 0x57070220, 0x00423867, 0x00000000,
    0x80020061, 0x55070220, 0x00423827, 0x00000000,
    0x80021261, 0x2d470220, 0x00427a07, 0x00000000,
    0x80021d61, 0x76070220, 0x00423a67, 0x00000000,
    0x80020061, 0x74070220, 0x00423a27, 0x00000000,
    0x80021261, 0x01070220, 0x00423c27, 0x00000000,
    0x80021261, 0x03070220, 0x00423c47, 0x00000000,
    0x80021f61, 0x28070220, 0x00423167, 0x00000000,
    0x80023861, 0x24070220, 0x00423127, 0x00000000,
    0x80021161, 0x36470220, 0x00424107, 0x00000000,
    0x80021f62, 0x53070aa0, 0x4a425507, 0x00425707,
    0x80021f61, 0x08070220, 0x00422d67, 0x00000000,
    0x80023861, 0x06070220, 0x00422d27, 0x00000000,
    0x80021f62, 0x72070aa0, 0x4a427407, 0x00427607,
    0x80021e62, 0x7a070aa0, 0x4a420107, 0x00420307,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021c62, 0x22070aa0, 0x5a422407, 0x00422807,
    0x80021b61, 0x4a070220, 0x00423667, 0x00000000,
    0x80023c61, 0x48070220, 0x00423627, 0x00000000,
    0x80021461, 0x38670220, 0x00425307, 0x00000000,
    0x80021361, 0x3a670220, 0x00427207, 0x00000000,
    0x80021261, 0x3c470220, 0x00427a07, 0x00000000,
    0x80021e62, 0x04070aa0, 0x5a420607, 0x00420807,
    0x80021261, 0x31670220, 0x00422207, 0x00000000,
    0x80021d62, 0x46070aa0, 0x5a424807, 0x00424a07,
    0x80021c62, 0x38850aa0, 0x4a003864, 0x00343885,
    0x80021c62, 0x39850aa0, 0x4a003964, 0x00343985,
    0x80021b62, 0x3a850aa0, 0x4a003a64, 0x00343a85,
    0x80021b62, 0x3b850aa0, 0x4a003b64, 0x00343b85,
    0x80021661, 0x2d670220, 0x00420407, 0x00000000,
    0x80020b61, 0x06070220, 0x00423c27, 0x00000000,
    0x80021661, 0x08070220, 0x00423c67, 0x00000000,
    0x80021c62, 0x31850aa0, 0x5a003164, 0x00343185,
    0x80021c62, 0x32850aa0, 0x5a003264, 0x00343285,
    0x80021761, 0x36670220, 0x00424607, 0x00000000,
    0x80031562, 0x39050aa0, 0x4a0038e4, 0x00463905,
    0x80031462, 0x3b050aa0, 0x4a003ae4, 0x00463b05,
    0x80021c62, 0x2d850aa0, 0x5a002d64, 0x00342d85,
    0x80021c62, 0x2e850aa0, 0x5a002e64, 0x00342e85,
    0x80021a62, 0x04070aa0, 0x4a420607, 0x00420807,
    0x80031662, 0x32050aa0, 0x5a0031e4, 0x00463205,
    0x80021962, 0x36850aa0, 0x5a003664, 0x00343685,
    0x80021962, 0x37850aa0, 0x5a003764, 0x00343785,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x77050220, 0x02003be4, 0x000039e4,
    0x80031562, 0x2e050aa0, 0x5a002de4, 0x00462e05,
    0x80021561, 0x3c670220, 0x00420407, 0x00000000,
    0x80031262, 0x37050aa0, 0x5a0036e4, 0x00463705,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x75050220, 0x020032e4, 0x00002ee4,
    0x80021a62, 0x3c850aa0, 0x4a003c64, 0x00343c85,
    0x80021a62, 0x3d850aa0, 0x4a003d64, 0x00343d85,
    0x00040070, 0x00018660, 0x16466105, 0x00000002,
    0x80031162, 0x3d050aa0, 0x4a003ce4, 0x00463d05,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x2f790062, 0x75013783, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x2f7b0062, 0x77013d83,
    0x00040070, 0x00018660, 0x16466305, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x2f710062, 0x7b207900, 0x00040065, 0x00018220,
    0x22466505, 0x00000077, 0x01040022, 0x0001c060,
    0x00000090, 0x00000090, 0x60010041, 0x00606902,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x60030041, 0x00306302, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x05040e68,
    0x0e0e0105, 0x03056105, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x07058660,
    0x02460505, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xea2a0714, 0x01007114, 0x00040025, 0x00004600,
    0x00000000, 0x00000070, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0xa0080066, 0x2a226b02,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00041a70, 0x00018220, 0x22460805, 0x00000000,
    0x00040061, 0x09050120, 0x00003000, 0x00000000,
    0x202f1965, 0x09002f03, 0x00040027, 0x00014060,
    0x00000000, 0xfffff688, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0xa00a0040, 0x01005d03,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00040070, 0x00018220, 0x22462a05, 0x00000000,
    0x80000d01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x30050120, 0x00003000, 0x00000000,
    0x00041970, 0x00018660, 0x16463005, 0x00000000,
    0x01040028, 0x0001c660, 0x00000a38, 0x00000a38,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x0004004c, 0x1d050220, 0x00463005, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80040061, 0x10014110, 0x00000000, 0x01400140,
    0x00040069, 0x10018510, 0x01561d06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x01400140,
    0xe01f0961, 0x001b0004, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xac210070, 0x0a001f02,
    0x00041965, 0x00010220, 0x22462105, 0x00462a05,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x23058220, 0x02461505, 0xff800000,
    0x80001401, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x28058220, 0x02461705, 0xff800000,
    0x80001601, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x2d058220, 0x02460d05, 0x7f800000,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x32058220, 0x02460f05, 0x7f800000,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x36058220, 0x02461105, 0x7f800000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xa3431d61, 0xff810000, 0x60430061, 0x00102300,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xa3451c61, 0xff810000, 0x60450061, 0x00102800,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0xa33d0b61, 0x7f810000, 0x603d0061, 0x00102d00,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0xa33f0a61, 0x7f810000, 0x603f0061, 0x00103200,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x2c058220, 0x02461905, 0xff800000,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xa3410a61, 0x7f810000, 0x60410061, 0x00103600,
    0x80031561, 0x6c060220, 0x00444326, 0x00000000,
    0x80031461, 0x79060220, 0x00444526, 0x00000000,
    0x80031361, 0x23060220, 0x00443d26, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80031261, 0x3a060220, 0x00443f26, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0xa3470d61, 0xff810000, 0x60470061, 0x00102c00,
    0x00040070, 0x00018660, 0x16466105, 0x00000001,
    0x80031261, 0x53060220, 0x00444126, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80031e62, 0x6a060aa0, 0x4a444306, 0x00446c06,
    0x80031d62, 0x77060aa0, 0x4a444506, 0x00447906,
    0x80031c62, 0x1d060aa0, 0x5a443d06, 0x00442306,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80031b62, 0x38060aa0, 0x5a443f06, 0x00443a06,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80031962, 0x51060aa0, 0x5a444106, 0x00445306,
    0x80030d61, 0x43260220, 0x00446a06, 0x00000000,
    0x80030c61, 0x45260220, 0x00447706, 0x00000000,
    0x80030b61, 0x3d260220, 0x00441d06, 0x00000000,
    0x80030a61, 0x3f260220, 0x00443806, 0x00000000,
    0x80031361, 0x23060220, 0x00444726, 0x00000000,
    0x80030961, 0x41260220, 0x00445106, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021e61, 0x71070220, 0x00424347, 0x00000000,
    0x80020061, 0x6f070220, 0x00424327, 0x00000000,
    0x80021f61, 0x03070220, 0x00424547, 0x00000000,
    0x80020061, 0x01070220, 0x00424527, 0x00000000,
    0x80020e61, 0x2c070220, 0x00423d47, 0x00000000,
    0x80021761, 0x28070220, 0x00423d27, 0x00000000,
    0x80021f61, 0x4b070220, 0x00423f47, 0x00000000,
    0x80020061, 0x49070220, 0x00423f27, 0x00000000,
    0x80031f62, 0x1d060aa0, 0x4a444706, 0x00442306,
    0x80021f61, 0x58070220, 0x00424147, 0x00000000,
    0x80020061, 0x56070220, 0x00424127, 0x00000000,
    0x80021f62, 0x6d070aa0, 0x4a426f07, 0x00427107,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021f62, 0x7a070aa0, 0x4a420107, 0x00420307,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80021b62, 0x3b070aa0, 0x5a424907, 0x00424b07,
    0x80031461, 0x47260220, 0x00441d06, 0x00000000,
    0x80021a62, 0x54070aa0, 0x5a425607, 0x00425807,
    0x80021461, 0x43470220, 0x00426d07, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021f62, 0x24070aa0, 0x5a422807, 0x00422c07,
    0x80021461, 0x45470220, 0x00427a07, 0x00000000,
    0x80021361, 0x3f470220, 0x00423b07, 0x00000000,
    0x80021261, 0x41470220, 0x00425407, 0x00000000,
    0x80021c61, 0x76070220, 0x00424367, 0x00000000,
    0x80023861, 0x74070220, 0x00424327, 0x00000000,
    0x80021161, 0x3d470220, 0x00422407, 0x00000000,
    0x80021e61, 0x08070220, 0x00424567, 0x00000000,
    0x80023861, 0x06070220, 0x00424527, 0x00000000,
    0x80020961, 0x28070220, 0x00424727, 0x00000000,
    0x80021161, 0x2c070220, 0x00424747, 0x00000000,
    0x80021f61, 0x50070220, 0x00423f67, 0x00000000,
    0x80020061, 0x4e070220, 0x00423f27, 0x00000000,
    0x80021f61, 0x69070220, 0x00424167, 0x00000000,
    0x80020061, 0x67070220, 0x00424127, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021f62, 0x72070aa0, 0x4a427407, 0x00427607,
    0x80021f61, 0x36070220, 0x00423d67, 0x00000000,
    0x80020061, 0x32070220, 0x00423d27, 0x00000000,
    0x80021f62, 0x04070aa0, 0x4a420607, 0x00420807,
    0x80021f62, 0x24070aa0, 0x4a422807, 0x00422c07,
    0x80021d62, 0x4c070aa0, 0x5a424e07, 0x00425007,
    0x80021b62, 0x59070aa0, 0x5a426707, 0x00426907,
    0x80021561, 0x43670220, 0x00427207, 0x00000000,
    0x80021461, 0x45670220, 0x00420407, 0x00000000,
    0x80021361, 0x47470220, 0x00422407, 0x00000000,
    0x80021c62, 0x2d070aa0, 0x5a423207, 0x00423607,
    0x80021361, 0x3f670220, 0x00424c07, 0x00000000,
    0x80021261, 0x41670220, 0x00425907, 0x00000000,
    0x80021d62, 0x43850aa0, 0x4a004364, 0x00344385,
    0x80021d62, 0x44850aa0, 0x4a004464, 0x00344485,
    0x80021c62, 0x45850aa0, 0x4a004564, 0x00344585,
    0x80021c62, 0x46850aa0, 0x4a004664, 0x00344685,
    0x80021561, 0x3d670220, 0x00422d07, 0x00000000,
    0x80020c61, 0x32070220, 0x00424727, 0x00000000,
    0x80021561, 0x36070220, 0x00424767, 0x00000000,
    0x80021d62, 0x3f850aa0, 0x5a003f64, 0x00343f85,
    0x80021d62, 0x40850aa0, 0x5a004064, 0x00344085,
    0x80021c62, 0x41850aa0, 0x5a004164, 0x00344185,
    0x80021c62, 0x42850aa0, 0x5a004264, 0x00344285,
    0x80031762, 0x44050aa0, 0x4a0043e4, 0x00464405,
    0x80031662, 0x46050aa0, 0x4a0045e4, 0x00464605,
    0x80021b62, 0x3d850aa0, 0x5a003d64, 0x00343d85,
    0x80021b62, 0x3e850aa0, 0x5a003e64, 0x00343e85,
    0x80021962, 0x2d070aa0, 0x4a423207, 0x00423607,
    0x80031762, 0x40050aa0, 0x5a003fe4, 0x00464005,
    0x80031762, 0x42050aa0, 0x5a0041e4, 0x00464205,
    0x80001601, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x39050220, 0x020046e4, 0x000044e4,
    0x80031462, 0x3e050aa0, 0x5a003de4, 0x00463e05,
    0x80021461, 0x47670220, 0x00422d07, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x37050220, 0x020040e4, 0x00003ee4,
    0x80021a62, 0x47850aa0, 0x4a004764, 0x00344785,
    0x80021a62, 0x48850aa0, 0x4a004864, 0x00344885,
    0x00040070, 0x00018660, 0x16466105, 0x00000002,
    0x80031162, 0x48050aa0, 0x4a0047e4, 0x00464805,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x2f3b0062, 0x37014283, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x2f3d0062, 0x39014883,
    0x00040070, 0x00018660, 0x16466305, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x2f720062, 0x3d203b00, 0x00040065, 0x00018220,
    0x22466505, 0x00000077, 0x01040022, 0x0001c060,
    0x000000a0, 0x000000a0, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x603e0041, 0x00601f02,
    0x80000e01, 0x00000000, 0x00000000, 0x00000000,
    0x60400041, 0x00306302, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x42040e68,
    0x0e0e3e05, 0x40056105, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x44058660,
    0x02464205, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xea2a4414, 0x01007214, 0x00040025, 0x00004600,
    0x00000000, 0x00000070, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xa0450066, 0x2a222102,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00041a70, 0x00018220, 0x22464505, 0x00000000,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x46050120, 0x00003000, 0x00000000,
    0x20301965, 0x46003003, 0x00040027, 0x00014060,
    0x00000000, 0xfffff5b8, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0xa0470040, 0x02005f03,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00040070, 0x00018220, 0x22462a05, 0x00000000,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x31050120, 0x00003000, 0x00000000,
    0x00041970, 0x00018660, 0x16463105, 0x00000000,
    0x01040028, 0x0001c660, 0x00000a18, 0x00000a18,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x0004004c, 0x49050220, 0x00463105, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80040061, 0x10014110, 0x00000000, 0x08e008e0,
    0x00040069, 0x10018510, 0x01564906, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x08e008e0,
    0xe04b0961, 0x001b0004, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0xac4d0070, 0x47004b02,
    0x00041965, 0x00010220, 0x22464d05, 0x00462a05,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x4f058220, 0x02461505, 0xff800000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x51058220, 0x02461705, 0xff800000,
    0x01040062, 0x53058220, 0x02460d05, 0x7f800000,
    0x01040062, 0x55058220, 0x02460f05, 0x7f800000,
    0xa36b1c61, 0xff810000, 0x606b0061, 0x00104f00,
    0xa36d1b61, 0xff810000, 0x606d0061, 0x00105100,
    0xa3491a61, 0x7f810000, 0x60490061, 0x00105300,
    0xa3591961, 0x7f810000, 0x60590061, 0x00105500,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x52058220, 0x02461905, 0xff800000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x56058220, 0x02461105, 0x7f800000,
    0x80031461, 0x04060220, 0x00446b26, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80031361, 0x22060220, 0x00446d26, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80031261, 0x39060220, 0x00444926, 0x00000000,
    0x80031161, 0x4f060220, 0x00445926, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xa36f0e61, 0xff810000, 0x606f0061, 0x00105200,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa3690d61, 0x7f810000, 0x60690061, 0x00105600,
    0x00040070, 0x00018660, 0x16466105, 0x00000001,
    0x80030d62, 0x02060aa0, 0x4a446b06, 0x00440406,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80031c62, 0x20060aa0, 0x4a446d06, 0x00442206,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80031b62, 0x37060aa0, 0x5a444906, 0x00443906,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80031a62, 0x44060aa0, 0x5a445906, 0x00444f06,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80031561, 0x73060220, 0x00446926, 0x00000000,
    0x80030c61, 0x6b260220, 0x00440206, 0x00000000,
    0x80030b61, 0x6d260220, 0x00442006, 0x00000000,
    0x80030a61, 0x49260220, 0x00443706, 0x00000000,
    0x80030961, 0x59260220, 0x00444406, 0x00000000,
    0x80031261, 0x39060220, 0x00446f26, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80031e62, 0x71060aa0, 0x5a446906, 0x00447306,
    0x80021d61, 0x09070220, 0x00426b47, 0x00000000,
    0x80023861, 0x07070220, 0x00426b27, 0x00000000,
    0x80021e61, 0x2c070220, 0x00426d47, 0x00000000,
    0x80020061, 0x28070220, 0x00426d27, 0x00000000,
    0x8002f461, 0x3e070220, 0x00424947, 0x00000000,
    0x80023461, 0x3c070220, 0x00424927, 0x00000000,
    0x80020f61, 0x54070220, 0x00425947, 0x00000000,
    0x80021761, 0x52070220, 0x00425927, 0x00000000,
    0x80031f62, 0x37060aa0, 0x4a446f06, 0x00443906,
    0x80031261, 0x69260220, 0x00447106, 0x00000000,
    0x80021f62, 0x05070aa0, 0x4a420707, 0x00420907,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021e62, 0x23070aa0, 0x4a422807, 0x00422c07,
    0x80021a62, 0x50070aa0, 0x5a425207, 0x00425407,
    0x80030c61, 0x6f260220, 0x00443706, 0x00000000,
    0x80021a61, 0x78070220, 0x00426947, 0x00000000,
    0x80020061, 0x76070220, 0x00426927, 0x00000000,
    0x80021361, 0x6b470220, 0x00420507, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80021f62, 0x3a070aa0, 0x5a423c07, 0x00423e07,
    0x80021361, 0x6d470220, 0x00422307, 0x00000000,
    0x80021261, 0x59470220, 0x00425007, 0x00000000,
    0x80021c62, 0x74070aa0, 0x5a427607, 0x00427807,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021b61, 0x1f070220, 0x00426b67, 0x00000000,
    0x80023861, 0x1d070220, 0x00426b27, 0x00000000,
    0x80021261, 0x49470220, 0x00423a07, 0x00000000,
    0x80021d61, 0x36070220, 0x00426d67, 0x00000000,
    0x80020061, 0x2f070220, 0x00426d27, 0x00000000,
    0x80021261, 0x3c070220, 0x00426f27, 0x00000000,
    0x80021261, 0x3e070220, 0x00426f47, 0x00000000,
    0x80021f61, 0x67070220, 0x00425967, 0x00000000,
    0x80020061, 0x57070220, 0x00425927, 0x00000000,
    0x80021161, 0x69470220, 0x00427407, 0x00000000,
    0x80021f62, 0x0a070aa0, 0x4a421d07, 0x00421f07,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021f61, 0x43070220, 0x00424967, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80022461, 0x41070220, 0x00424927, 0x00000000,
    0x80021f62, 0x2d070aa0, 0x4a422f07, 0x00423607,
    0x80021e62, 0x3a070aa0, 0x4a423c07, 0x00423e07,
    0x80021c62, 0x55070aa0, 0x5a425707, 0x00426707,
    0x80021b61, 0x01070220, 0x00426967, 0x00000000,
    0x80020061, 0x7b070220, 0x00426927, 0x00000000,
    0x80021461, 0x6b670220, 0x00420a07, 0x00000000,
    0x80021361, 0x6d670220, 0x00422d07, 0x00000000,
    0x80021261, 0x6f470220, 0x00423a07, 0x00000000,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x80021e62, 0x3f070aa0, 0x5a424107, 0x00424307,
    0x80021261, 0x59670220, 0x00425507, 0x00000000,
    0x80021d62, 0x79070aa0, 0x5a427b07, 0x00420107,
    0x80021c62, 0x6b850aa0, 0x4a006b64, 0x00346b85,
    0x80021c62, 0x6c850aa0, 0x4a006c64, 0x00346c85,
    0x80021b62, 0x6d850aa0, 0x4a006d64, 0x00346d85,
    0x80021b62, 0x6e850aa0, 0x4a006e64, 0x00346e85,
    0x80021661, 0x49670220, 0x00423f07, 0x00000000,
    0x80020b61, 0x41070220, 0x00426f27, 0x00000000,
    0x80021661, 0x43070220, 0x00426f67, 0x00000000,
    0x80021c62, 0x59850aa0, 0x5a005964, 0x00345985,
    0x80021c62, 0x5a850aa0, 0x5a005a64, 0x00345a85,
    0x80021761, 0x69670220, 0x00427907, 0x00000000,
    0x80031562, 0x6c050aa0, 0x4a006be4, 0x00466c05,
    0x80031462, 0x6e050aa0, 0x4a006de4, 0x00466e05,
    0x80021c62, 0x49850aa0, 0x5a004964, 0x00344985,
    0x80021c62, 0x4a850aa0, 0x5a004a64, 0x00344a85,
    0x80021a62, 0x3f070aa0, 0x4a424107, 0x00424307,
    0x80031662, 0x5a050aa0, 0x5a0059e4, 0x00465a05,
    0x80021962, 0x69850aa0, 0x5a006964, 0x00346985,
    0x80021962, 0x6a850aa0, 0x5a006a64, 0x00346a85,
    0x80031562, 0x4a050aa0, 0x5a0049e4, 0x00464a05,
    0x80021561, 0x6f670220, 0x00423f07, 0x00000000,
    0x80031262, 0x6a050aa0, 0x5a0069e4, 0x00466a05,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x57050220, 0x02005ae4, 0x00004ae4,
    0x80021a62, 0x6f850aa0, 0x4a006f64, 0x00346f85,
    0x80021a62, 0x70850aa0, 0x4a007064, 0x00347085,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x59050220, 0x02006ee4, 0x00006ce4,
    0x80031162, 0x70050aa0, 0x4a006fe4, 0x00467005,
    0x00040070, 0x00018660, 0x16466105, 0x00000002,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0x2f670062, 0x57016a83, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x2f690062, 0x59017083,
    0x00040070, 0x00018660, 0x16466305, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x2f730062, 0x69206700, 0x00040065, 0x00018220,
    0x22466505, 0x00000077, 0x01040022, 0x0001c060,
    0x00000090, 0x00000090, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x606a0041, 0x00604b02,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x606c0041, 0x00306302, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x6e040e68,
    0x0e0e6a05, 0x6c056105, 0x00041969, 0x70058660,
    0x02466e05, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xea2a7014, 0x01007314, 0x00040025, 0x00004600,
    0x00000000, 0x00000070, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xa0710066, 0x2a224d02,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00041a70, 0x00018220, 0x22467105, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00041161, 0x72050120, 0x00003000, 0x00000000,
    0x20311965, 0x72003103, 0x00040027, 0x00014060,
    0x00000000, 0xfffff5d8, 0x00040061, 0x00010660,
    0x20462a05, 0x00000000, 0x01040022, 0x0001c060,
    0x00000118, 0x00000118, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x73058660,
    0x02465b05, 0x00000002, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0750040, 0x48007303,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x00000000, 0xea107514, 0x01000000,
    0x00043869, 0x76058660, 0x02465d05, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0xa0780040, 0x4c007603, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044d31, 0x00000000,
    0xea107814, 0x01000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00043d69, 0x79058660,
    0x02465f05, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0xa07b0040, 0x50007903,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x00000000, 0xea107b14, 0x01000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80000001, 0x00000000, 0x30000000, 0x00000000,
    0x80000001, 0x00000000, 0x30000000, 0x00000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x80004f31, 0x7c0c0000, 0xe23e000c, 0x00000000,
    0x80002f01, 0x00000000, 0x00000000, 0x00000000,
    0x80030061, 0x7f054220, 0x00000000, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80011961, 0x7f550000, 0x0000005c, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80044031, 0x00000000, 0x30087f0c, 0x00000000,
    0x80040001, 0x00000000, 0xe0000000, 0x00000000,
    0x80000e01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x32050220, 0x00463405, 0x00000000,
    0x00041970, 0x00018220, 0x42463205, 0x00000120,
    0x01040028, 0x0001c660, 0x000001b0, 0x000001b0,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x01058660, 0x02463205, 0x00000002,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x74140000, 0xea000114, 0x00000000,
    0xae002170, 0x7f807401, 0x01040022, 0x0001c060,
    0x00000120, 0x00000120, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0xa0030040, 0x02c07d03,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x27050070, 0x7d000303, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xa0073140, 0x01000302,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x27090070, 0x03000703, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00031761, 0x0d060220,
    0x00340705, 0x00000000, 0x80103801, 0x00000000,
    0x00000000, 0x00000000, 0x00131761, 0x0f060220,
    0x00340805, 0x00000000, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x0b042e68,
    0x0e2e0505, 0x09052605, 0x00131961, 0x0f260220,
    0x00340c05, 0x00000000, 0x00031a61, 0x0d260220,
    0x00340b05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xfb2a0d24, 0x01007414, 0x00040025, 0x00004600,
    0x00000000, 0x00000018, 0xa0320040, 0x20003203,
    0x00040027, 0x00014060, 0x00000000, 0xfffffe40,
    0x00000060, 0x00000000, 0x00000000, 0x00000000,
    0x00041a70, 0x00018220, 0x42463405, 0x00000030,
    0x01040028, 0x0001c660, 0x00000180, 0x00000180,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00040f69, 0x0e058660, 0x02463405, 0x00000002,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xa0100940, 0x48000e03, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x75140000,
    0xea001014, 0x00000000, 0x00042870, 0x00018660,
    0x26467505, 0x00000000, 0x01040022, 0x0001c060,
    0x000000e0, 0x000000e0, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xa0111740, 0x4ac07d03,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x27130970, 0x7d001103, 0xa0151740, 0x0e001102,
    0x27170970, 0x11001503, 0x00032861, 0x1b060220,
    0x00341505, 0x00000000, 0x80103801, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x1d060220,
    0x00341605, 0x00000000, 0x00040b52, 0x19042e68,
    0x0e2e1305, 0x17052605, 0x00131961, 0x1d260220,
    0x00341a05, 0x00000000, 0x00031a61, 0x1b260220,
    0x00341905, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xfb181b24, 0x01007514, 0x00040025, 0x00004600,
    0x00000000, 0x00000018, 0xa0340040, 0x20003403,
    0x00040027, 0x00014060, 0x00000000, 0xfffffe70,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_BFS_BFS_pass1_initial_batchable = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 1344,
      .base.program_size = 13520,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_BFS_BFS_pass1_initial_batchable_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_BFS_BFS_pass1_initial_batchable_printfs,
      .base.uses_atomic_load_store = false,
      .local_size = { 512, 1, 1 },
      .prog_offset = { 0, 0, 0 },
      .prog_mask = 2,
      .prog_spilled = 0,
      .uses_barrier = true,
      .uses_num_work_groups = false,
      .push.per_thread.dwords = 0,
      .push.per_thread.regs = 0,
      .push.per_thread.size = 0,
      .push.cross_thread.dwords = 12,
      .push.cross_thread.regs = 2,
      .push.cross_thread.size = 64,
   },
   .args_size = 16,
   .arg_count = 2,
   .args = gfx125_bvh_build_BFS_BFS_pass1_initial_batchable_args,
   .code = gfx125_bvh_build_BFS_BFS_pass1_initial_batchable_code,
};
const char *gfx125_bvh_build_BFS_BFS_pass1_initial_batchable_sha1 = "137aba3b7fc325f782839773ec2e3272d3631a73";

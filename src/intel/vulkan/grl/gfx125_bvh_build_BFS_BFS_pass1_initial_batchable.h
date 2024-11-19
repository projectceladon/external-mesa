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

and(1)          g100<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g33<1>UD        g0.1<0,1,0>UD                   { align1 1H };
mov(16)         g39<1>UD        0x00000000UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g1UD            g100UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g32<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g32.8<1>UW      g32<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g55<1>D         g2<0,1,0>D      1064D           { align1 1H compacted };
add(16)         g62<1>D         g2<0,1,0>D      1068D           { align1 1H compacted };
cmp.l.f0.0(16)  g57<1>UD        g55<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@2 compacted };
mov(8)          g3<2>UD         g55<4,4,1>UD                    { align1 1Q };
mov(8)          g5<2>UD         g56<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g64<1>UD        g62<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@4 compacted };
add(16)         g59<1>D         -g57<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@4 compacted };
mov(8)          g3.1<2>UD       g59<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g5.1<2>UD       g60<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g60UD           g3UD            nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };

LABEL3:
shl(16)         g66<1>D         g39<8,8,1>D     0x00000002UD    { align1 1H I@4 };
add(16)         g68<1>D         g62<1,1,0>D     g66<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g70<1>UD        g68<1,1,0>UD    g62<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g74<2>UD        g68<4,4,1>UD                    { align1 1Q };
mov(8)          g76<2>UD        g69<4,4,1>UD                    { align1 2Q };
add3(16)        g72<1>D         -g64<8,8,1>D    g2.1<0,1,0>D    -g70<1,1,1>D { align1 1H I@3 };
mov(8)          g74.1<2>UD      g72<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g76.1<2>UD      g73<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g99<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g99<1>UD        g99<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
add(16)         g85<1>W         g32<16,16,1>UW  -1W             { align1 WE_all 1H };
fbl(1)          g78<1>UD        g99<0,1,0>UD                    { align1 WE_all 1N I@3 };
shl(1)          a0<1>UD         g78<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g80<2>D         g[a0 320]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g80.1<2>D       g[a0 324]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g4.1<2>D        g80.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g4<2>D          g80<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) g75UD    g4UD            nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
mov(16)         g83<1>D         0D                              { align1 WE_all 1H @3 $1.dst };
mov(16)         g83<1>D         g75<8,8,1>D                     { align1 1H };
mov(16)         a0<1>UW         0x0a60UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g85<8,8,1>W     0x0002UW        { align1 WE_all 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a60UW        { align1 WE_all 1H A@1 };
mov(16)         g81<1>UD        g[a0]<VxH,1,0>UD                { align1 WE_all 1H A@1 compacted };
mov(1)          g81<1>D         0D                              { align1 WE_all 1N I@1 };
add(8)          g81.1<2>D       g81<8,4,2>D     g81.1<8,4,2>D   { align1 WE_all 1Q I@1 };
add(4)          g81.2<4>D       g81.1<8,2,4>D   g81.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g81.3<4>D       g81.1<8,2,4>D   g81.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g81.4<1>D       g81.3<0,1,0>D   g81.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g82.4<1>D       g82.3<0,1,0>D   g82.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(8)          g82<1>D         g81.7<0,1,0>D   g82<1,1,0>D     { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g41<1>D         g33<1,1,0>D     -g81<1,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g86<1>UD        g41<1,1,0>UD    g75<1,1,0>UD    { align1 1H I@1 compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g86<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov.nz.f0.0(16) g37<1>UD        f0<0,1,0>UW                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
mov(16)         g35<1>UD        0xffffffffUD                    { align1 1H };
break(16)       JIP:  LABEL0          UIP:  LABEL1              { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };
add(16)         g87<1>D         g81<1,1,0>D     g75<1,1,0>D     { align1 1H compacted };
add(16)         g39<1>D         g39<1,1,0>D     16D             { align1 1H compacted };
add(16)         g33<1>D         g33<1,1,0>D     -g88.7<0,1,0>D  { align1 1H I@2 compacted };
cmp.ge.f0.0(16) null<1>UD       g39<8,8,1>UD    g60<8,8,1>UD    { align1 1H @2 $1.dst };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL2              { align1 1H };
mov(16)         g35<1>UD        0x00000000UD                    { align1 1H I@7 };
break(16)       JIP:  LABEL2          UIP:  LABEL1              { align1 1H };

LABEL2:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
while(16)       JIP:  LABEL3                                    { align1 1H };
mov.nz.f0.0(16) null<1>D        g35<8,8,1>D                     { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL4              { align1 1H };
fbl(16)         g88<1>UD        g37<8,8,1>UD                    { align1 1H I@6 };
cmp.z.f0.0(16)  null<1>D        g37<8,8,1>D     0D              { align1 1H };
(-f0.0) sel(16) g90<1>UD        g88<8,8,1>UD    0x00000020UD    { align1 1H I@2 };
add(16)         g43<1>D         g39<1,1,0>D     g90<1,1,0>D     { align1 1H I@1 compacted };
mov(16)         a0<1>UW         0x0520UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g90<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0520UW        { align1 1H A@1 };
mov(16)         g45<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
else(16)        JIP:  LABEL4          UIP:  LABEL4              { align1 1H };

LABEL5:
mov(16)         g43<1>UD        0x00000000UD                    { align1 1H I@3 };
mov(16)         g45<1>UD        0x00000000UD                    { align1 1H I@3 };

LABEL4:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
add(16)         g91<1>D         g2<0,1,0>D      2092D           { align1 1H };
shl(16)         g94<1>D         g43<8,8,1>D     0x00000002UD    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g113<1>D        g2<0,1,0>D      11308D          { align1 1H };
add(16)         g126<1>D        g2.2<0,1,0>D    8D              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(16)         g39<1>D         g32<8,8,1>UW                    { align1 1H };
add(16)         g96<1>D         g91<1,1,0>D     g94<1,1,0>D     { align1 1H I@4 compacted };
cmp.l.f0.0(16)  g93<1>UD        g91<1,1,0>UD    0x0000082cUD    { align1 1H compacted };
cmp.l.f0.0(16)  g98<1>UD        g96<1,1,0>UD    g91<1,1,0>UD    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g5<2>UD         g96<4,4,1>UD                    { align1 1Q };
mov(8)          g7<2>UD         g97<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add3(16)        g100<1>D        -g93<8,8,1>D    g2.1<0,1,0>D    -g98<1,1,1>D { align1 1H I@3 };
mov(8)          g7.1<2>UD       g101<4,4,1>UD                   { align1 2Q I@1 };
mov(8)          g5.1<2>UD       g100<4,4,1>UD                   { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g101UD          g5UD            nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mov(16)         g103<1>UD       g101<16,8,2>UW                  { align1 1H $2.dst };
mov(16)         g116<1>UD       g101.1<16,8,2>UW                { align1 1H };
mul(8)          acc0<1>UD       g103<8,8,1>UD   0x0058UW        { align1 1Q I@2 };
asr(16)         g105<1>D        g103<8,8,1>D    0x0000001fUD    { align1 1H I@3 };
mul(16)         g109<1>D        g103<1,1,0>D    88W             { align1 1H compacted };
mul(16)         g118<1>D        g116<1,1,0>D    1484W           { align1 1H I@4 compacted };
cmp.l.f0.0(16)  g115<1>UD       g113<1,1,0>UD   g2<0,1,0>UD     { align1 1H compacted };
mach(8)         g107<1>UD       g103<1,1,0>UD   0x00000058UD    { align1 1Q compacted AccWrEnable };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g7<1>D          g126<1,1,0>D    g109<1,1,0>D    { align1 1H I@4 compacted };
mul(16)         g110<1>D        g105<1,1,0>D    88W             { align1 1H I@6 compacted };
add(16)         g120<1>D        g113<1,1,0>D    g118<1,1,0>D    { align1 1H I@5 compacted };
mul(8)          acc0<1>UD       g104<8,8,1>UD   0x0058UW        { align1 2Q };
mov(8)          g22<2>UD        g7<4,4,1>UD                     { align1 1Q I@4 };
mov(8)          g24<2>UD        g8<4,4,1>UD                     { align1 2Q I@5 };
cmp.l.f0.0(16)  g122<1>UD       g120<1,1,0>UD   g113<1,1,0>UD   { align1 1H I@4 compacted };
mov(8)          g28<2>UD        g120<4,4,1>UD                   { align1 1Q };
mov(8)          g30<2>UD        g121<4,4,1>UD                   { align1 2Q };
mach(8)         g108<1>UD       g104<8,8,1>UD   0x00000058UD    { align1 2Q AccWrEnable };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g3<1>UD         g126<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g9<1>UD         g7<1,1,0>UD     g126<1,1,0>UD   { align1 1H compacted };
add3(16)        g124<1>D        -g115<8,8,1>D   g2.1<0,1,0>D    -g122<1,1,1>D { align1 1H I@6 };
add(16)         g112<1>D        g107<1,1,0>D    g110<1,1,0>D    { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g5<1>D          -g3<1,1,0>D     g2.3<0,1,0>D    { align1 1H I@4 compacted };
mov(8)          g30.1<2>UD      g125<4,4,1>UD                   { align1 2Q I@3 };
mov(8)          g28.1<2>UD      g124<4,4,1>UD                   { align1 1Q I@4 };
add3(16)        g11<1>D         g5<8,8,1>D      g112<8,8,1>D    -g9<1,1,1>D { align1 1H I@3 };
mov(8)          g24.1<2>UD      g12<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g22.1<2>UD      g11<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g14UD           g22UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(16)        g22UD           g28UD           nullUD          0x08607582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyz, L1STATE_L3MOCS dst_len = 6, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
shl(16)         g28<1>D         g45<8,8,1>D     0x00000009UD    { align1 1H $4.src };
add(16)         g43<1>D         g18<1,1,0>D     32D             { align1 1H $3.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g30<1>D         g22<1,1,0>D     g28<1,1,0>D     { align1 1H $4.dst compacted };
shl(16)         g50<1>D         g26<8,8,1>D     0x00000005UD    { align1 1H $4.dst };
cmp.l.f0.0(16)  g47<1>UD        g43<1,1,0>UD    g18<1,1,0>UD    { align1 1H I@3 compacted };
add(16)         g53<1>D         g43<1,1,0>D     g50<1,1,0>D     { align1 1H I@2 compacted };
shr(16)         g51<1>UD        g26<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
add(16)         g49<1>D         -g47<1,1,0>D    g20<1,1,0>D     { align1 1H @3 $3.dst compacted };
cmp.l.f0.0(16)  g55<1>UD        g53<1,1,0>UD    g43<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g33<2>UD        g53<4,4,1>UD                    { align1 1Q };
mov(8)          g35<2>UD        g54<4,4,1>UD                    { align1 2Q };
add(16)         g59<1>D         g53<1,1,0>D     16D             { align1 1H $1.dst compacted };
add3(16)        g57<1>D         g49<8,8,1>D     g51<8,8,1>D     -g55<1,1,1>D { align1 1H I@4 };
cmp.l.f0.0(16)  g61<1>UD        g59<1,1,0>UD    0x00000010UD    { align1 1H @2 $1.dst compacted };
mov(8)          g35.1<2>UD      g58<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g33.1<2>UD      g57<4,4,1>UD                    { align1 1Q I@3 };
add(16)         g63<1>D         -g61<1,1,0>D    g57<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g2UD            g33UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
add(16)         g32<1>D         g30<1,1,0>D     512D            { align1 1H $5.src compacted };
mov(8)          g34<2>UD        g59<4,4,1>UD                    { align1 1Q $5.src };
mov(8)          g36<2>UD        g60<4,4,1>UD                    { align1 2Q $5.src };
mov(8)          g34.1<2>UD      g63<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g36.1<2>UD      g64<4,4,1>UD                    { align1 2Q I@2 };
add(16)         g65<1>F         g8<1,1,0>F      -g2<1,1,0>F     { align1 1H $5.dst compacted };
sel.ge(16)      g71<1>F         g65<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
cmp.l.f0.0(16)  g83<1>F         g71<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H };
math inv(16)    g74<1>F         g71<8,8,1>F     null<8,8,1>F    { align1 1H $6 };
cmp.g.f0.0(16)  g85<1>F         g65<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g64UD           g34UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
and(16)         g35<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 1H $7.src compacted };
mul(16)         g76<1>F         g74<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H $6.dst };
and.nz.f0.0(16) null<1>UD       g83<8,8,1>UD    g85<8,8,1>UD    { align1 1H F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shl(16)         g37<1>D         g35<8,8,1>D     0x00000004UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.l(16)       g34<1>UD        g32<1,1,0>UD    g24<1,1,0>UD    { align1 1H @7 $4.dst compacted };
(+f0.0) sel(16) g10<1>UD        g76<1,1,0>UD    0x00000000UD    { align1 1H F@1 compacted };
add(16)         g41<1>D         g39<1,1,0>D     g37<1,1,0>D     { align1 1H I@3 compacted };
and(16)         g54<1>UD        g41<1,1,0>UD    0x000001ffUD    { align1 1H I@1 compacted };
add(16)         g42<1>D         g30<1,1,0>D     g54<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
add(16)         g68<1>F         g64<1,1,0>F     -g4<1,1,0>F     { align1 1H $7.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g70<1>F         g66<1,1,0>F     -g6<1,1,0>F     { align1 1H $7.dst compacted };
cmp.g.f0.0(16)  g86<1>F         g68<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H A@2 };
sel.ge(16)      g72<1>F         g68<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
math inv(16)    g77<1>F         g72<8,8,1>F     null<8,8,1>F    { align1 1H $8 };
cmp.l.f0.0(16)  g88<1>F         g72<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H $8.src };
sel.ge(16)      g73<1>F         g70<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@4 };
mul(16)         g79<1>F         g77<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H $8.dst };
and.nz.f0.0(16) null<1>UD       g88<8,8,1>UD    g86<8,8,1>UD    { align1 1H F@3 };
(+f0.0) sel(16) g12<1>UD        g79<1,1,0>UD    0x00000000UD    { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
math inv(16)    g80<1>F         g73<8,8,1>F     null<8,8,1>F    { align1 1H $9 };
cmp.g.f0.0(16)  g89<1>F         g70<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H I@2 };
cmp.l.f0.0(16)  g91<1>F         g73<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
mul(16)         g82<1>F         g80<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H I@7 };
and.nz.f0.0(16) null<1>UD       g91<8,8,1>UD    g89<8,8,1>UD    { align1 1H F@2 };
(+f0.0) sel(16) g92<1>UD        g82<1,1,0>UD    0x00000000UD    { align1 1H F@1 compacted };
cmp.l.f0.0(16)  g94<1>UD        g42<1,1,0>UD    g34<1,1,0>UD    { align1 1H I@5 compacted };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
shl(16)         g96<1>D         g42<8,8,1>D     0x00000005UD    { align1 1H };
add(16)         g99<1>D         g14<1,1,0>D     g96<1,1,0>D     { align1 1H @1 $3.dst compacted };
shr(16)         g97<1>UD        g42<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
cmp.l.f0.0(16)  g101<1>UD       g99<1,1,0>UD    g14<1,1,0>UD    { align1 1H I@2 compacted };
add(16)         g105<1>D        g99<1,1,0>D     16D             { align1 1H compacted };
mov(8)          g35<2>UD        g99<4,4,1>UD                    { align1 1Q };
mov(8)          g37<2>UD        g100<4,4,1>UD                   { align1 2Q };
add3(16)        g103<1>D        g16<8,8,1>D     g97<8,8,1>D     -g101<1,1,1>D { align1 1H @4 $3.dst };
cmp.l.f0.0(16)  g107<1>UD       g105<1,1,0>UD   g99<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g41<2>UD        g105<4,4,1>UD                   { align1 1Q };
mov(8)          g43<2>UD        g106<4,4,1>UD                   { align1 2Q };
mov(8)          g37.1<2>UD      g104<4,4,1>UD                   { align1 2Q I@4 };
mov(8)          g35.1<2>UD      g103<4,4,1>UD                   { align1 1Q I@5 };
add(16)         g109<1>D        -g107<1,1,0>D   g103<1,1,0>D    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g14UD           g35UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov(8)          g41.1<2>UD      g109<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g43.1<2>UD      g110<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g22UD           g41UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };

LABEL7:
endif(16)       JIP:  LABEL8                                    { align1 1H };

LABEL8:
shl(16)         g48<1>D         g54<8,8,1>D     0x00000002UD    { align1 1H };
mov(16)         g46<1>UD        g48<8,8,1>UD                    { align1 1H I@1 };

LABEL10:
cmp.ge.f0.0(16) null<1>UD       g46<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL9        UIP:  LABEL9              { align1 1H };
shl(16)         g42<1>D         g46<8,8,1>D     0x00000002UD    { align1 1H $3.src };
mov(16)         g30<1>UD        0x7f800000UD                    { align1 1H $3.src };
mov(16)         g32<1>UD        0x7f800000UD                    { align1 1H $3.src };
mov(16)         g34<1>UD        0x7f800000UD                    { align1 1H $3.src };
mov(16)         g36<1>UD        0x7f800000UD                    { align1 1H $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g42UD           g30UD           0x0400f506                0x00000200
                            slm MsgDesc: ( store_cmask, a32, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 8 flat )  base_offset 0  { align1 1H $3 };
add(16)         g46<1>D         g46<8,8,1>D     2048D           { align1 1H };

LABEL9:
while(16)       JIP:  LABEL10                                   { align1 1H };
nop                                                             ;

LABEL12:
cmp.ge.f0.0(16) null<1>UD       g48<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL11       UIP:  LABEL11             { align1 1H };
shl(16)         g110<1>D        g48<8,8,1>D     0x00000002UD    { align1 1H };
mov(16)         g31<1>UD        0x00000000UD                    { align1 1H $3.src };
mov(16)         g33<1>UD        0x00000000UD                    { align1 1H $3.src };
mov(16)         g35<1>UD        0x00000000UD                    { align1 1H $3.src };
mov(16)         g37<1>UD        0x00000000UD                    { align1 1H $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g43<1>D         g110<1,1,0>D    1152D           { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g43UD           g31UD           0x0400f506                0x00000200
                            slm MsgDesc: ( store_cmask, a32, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 8 flat )  base_offset 0  { align1 1H $3 };
add(16)         g48<1>D         g48<8,8,1>D     2048D           { align1 1H };

LABEL11:
while(16)       JIP:  LABEL12                                   { align1 1H };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(1)         g111UD          g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
mov(8)          g112<1>UD       0x00000000UD                    { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(2)          g112.10<1>UB    g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g112UD          nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $11 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
add(16)         g113<1>F        g14<1,1,0>F     g22<1,1,0>F     { align1 1H $3.dst compacted };
add(16)         g115<1>F        g16<1,1,0>F     g24<1,1,0>F     { align1 1H $3.dst compacted };
add(16)         g117<1>F        g18<1,1,0>F     g26<1,1,0>F     { align1 1H $3.dst compacted };
add(16)         g122<1>F        g115<1,1,0>F    -g4<1,1,0>F     { align1 1H F@2 compacted };
add(16)         g126<1>F        g117<1,1,0>F    -g6<1,1,0>F     { align1 1H F@2 compacted };
add(16)         g118<1>F        g113<1,1,0>F    -g2<1,1,0>F     { align1 1H F@5 compacted };
mul(16)         g4<1>F          g122<1,1,0>F    g12<1,1,0>F     { align1 1H F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mul(16)         g30<1>F         g126<1,1,0>F    g92<1,1,0>F     { align1 1H A@3 compacted };
mul(16)         g2<1>F          g118<1,1,0>F    g10<1,1,0>F     { align1 1H F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g34<1>UD        g4<8,8,1>F                      { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g36<1>UD        g30<8,8,1>F                     { align1 1H F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g32<1>UD        g2<8,8,1>F                      { align1 1H F@1 };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g94<8,8,1>UD    0x00000000UD    { align1 1H };
mov(16)         g49<1>UD        f0<0,1,0>UW                     { align1 1H };
mov(1)          g80<1>D         1D                              { align1 WE_all 1N F@7 };
and(16)         g41<1>UD        g39<1,1,0>UD    0x00000003UD    { align1 1H $3.src compacted };
shr(16)         g43<1>UD        g39<1,1,0>UD    0x00000002UD    { align1 1H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shl(16)         g45<1>D         g80<0,1,0>D     g39<8,8,1>UD    { align1 1H };

LABEL15:
cmp.z.f0.0(16)  null<1>D        g49<8,8,1>D     0D              { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL13       UIP:  LABEL13             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
fbl(16)         g47<1>UD        g49<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         a0<1>UW         0x0400UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g47<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0400UW        { align1 1H A@1 };
mov(16)         g51<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.z.f0.0(16)  g56<1>D         g51<1,1,0>D     g32<1,1,0>D     { align1 1H I@1 compacted };
and.nz.f0.0(16) null<1>UD       g56<8,8,1>UD    g94<8,8,1>UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
(+f0.0) sel(16) g58<1>UD        g22<8,8,1>UD    0xff800000UD    { align1 1H F@1 };
(+f0.0) sel(16) g60<1>UD        g24<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g62<1>UD        g14<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g64<1>UD        g16<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         g73<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g73<1>F         g58<1,1,0>F                     { align1 1H compacted };
mov(16)         g75<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@3 compacted };
mov(16)         g75<1>F         g60<1,1,0>F                     { align1 1H compacted };
mov(16)         g67<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g67<1>F         g62<1,1,0>F                     { align1 1H compacted };
mov(16)         g69<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g69<1>F         g64<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g61<1>UD        g26<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g65<1>UD        g18<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(8)          g4<2>UD         g73.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g47<2>UD        g75.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g83<2>UD        g67.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g99<2>UD        g69.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(16)         g77<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g77<1>F         g61<1,1,0>F                     { align1 1H compacted };
mov(16)         g71<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@5 compacted };
mov(16)         g71<1>F         g65<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g41<8,8,1>D     1D              { align1 1H };
sel.ge(8)       g2<2>F          g73<8,4,2>F     g4<8,4,2>F      { align1 WE_all 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.ge(8)       g38<2>F         g75<8,4,2>F     g47<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(8)        g81<2>F         g67<8,4,2>F     g83<8,4,2>F     { align1 WE_all 1Q I@3 };
sel.l(8)        g97<2>F         g69<8,4,2>F     g99<8,4,2>F     { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(8)          g112<2>UD       g71.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g73.1<2>UD      g2<8,4,2>UD                     { align1 WE_all 1Q A@4 };
mov(8)          g75.1<2>UD      g38<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g67.1<2>UD      g81<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g69.1<2>UD      g97<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sel.l(8)        g110<2>F        g71<8,4,2>F     g112<8,4,2>F    { align1 WE_all 1Q I@5 };
mov(4)          g9<4>UD         g73.2<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g7<4>UD         g73.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g62<4>UD        g75.2<8,2,4>UD                  { align1 WE_all 1N A@5 };
mov(4)          g60<4>UD        g75.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g88<4>UD        g67.2<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g86<4>UD        g67.1<8,2,4>UD                  { align1 WE_all 1N };
mov(8)          g82<2>UD        g77.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(4)          g104<4>UD       g69.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g102<4>UD       g69.1<8,2,4>UD                  { align1 WE_all 1N };
mov(8)          g71.1<2>UD      g110<8,4,2>UD                   { align1 WE_all 1Q F@1 };
sel.ge(4)       g5<4>F          g7<8,2,4>F      g9<8,2,4>F      { align1 WE_all 1N I@7 };
sel.ge(4)       g58<4>F         g60<8,2,4>F     g62<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g84<4>F         g86<8,2,4>F     g88<8,2,4>F     { align1 WE_all 1N I@5 };
sel.ge(8)       g80<2>F         g77<8,4,2>F     g82<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(4)        g100<4>F        g102<8,2,4>F    g104<8,2,4>F    { align1 WE_all 1N I@2 };
mov(4)          g117<4>UD       g71.2<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g115<4>UD       g71.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g73.2<4>UD      g5<8,2,4>UD                     { align1 WE_all 1N F@5 };
mov(4)          g75.2<4>UD      g58<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g67.2<4>UD      g84<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(8)          g77.1<2>UD      g80<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(4)          g69.2<4>UD      g100<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.l(4)        g113<4>F        g115<8,2,4>F    g117<8,2,4>F    { align1 WE_all 1N I@6 };
mov(4)          g30<4>UD        g73.3<8,2,4>UD                  { align1 WE_all 1N I@5 };
mov(4)          g12<4>UD        g73.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g65<4>UD        g75.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g96<4>UD        g67.3<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g91<4>UD        g67.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g87<4>UD        g77.2<8,2,4>UD                  { align1 WE_all 1N A@4 };
mov(4)          g85<4>UD        g77.1<8,2,4>UD                  { align1 WE_all 1N F@4 };
mov(4)          g79<4>UD        g75.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g109<4>UD       g69.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g107<4>UD       g69.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g71.2<4>UD      g113<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.ge(4)       g10<4>F         g12<8,2,4>F     g30<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g89<4>F         g91<8,2,4>F     g96<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g83<4>F         g85<8,2,4>F     g87<8,2,4>F     { align1 WE_all 1N I@5 };
sel.ge(4)       g63<4>F         g65<8,2,4>F     g79<8,2,4>F     { align1 WE_all 1N I@4 };
sel.l(4)        g105<4>F        g107<8,2,4>F    g109<8,2,4>F    { align1 WE_all 1N I@2 };
mov(4)          g126<4>UD       g71.3<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g122<4>UD       g71.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g73.3<4>UD      g10<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g67.3<4>UD      g89<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g77.2<4>UD      g83<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g75.3<4>UD      g63<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g69.3<4>UD      g105<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.l(4)        g118<4>F        g122<8,2,4>F    g126<8,2,4>F    { align1 WE_all 1N I@6 };
sel.ge(4)       g73.4<1>F       g73.3<0,1,0>F   g73.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g74.4<1>F       g74.3<0,1,0>F   g74.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.l(4)        g67.4<1>F       g67.3<0,1,0>F   g67.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g68.4<1>F       g68.3<0,1,0>F   g68.4<4,4,1>F   { align1 WE_all 1N I@4 };
mov(4)          g92<4>UD        g77.3<8,2,4>UD                  { align1 WE_all 1N A@3 };
mov(4)          g90<4>UD        g77.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
sel.ge(4)       g75.4<1>F       g75.3<0,1,0>F   g75.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g76.4<1>F       g76.3<0,1,0>F   g76.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g69.4<1>F       g69.3<0,1,0>F   g69.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g70.4<1>F       g70.3<0,1,0>F   g70.4<4,4,1>F   { align1 WE_all 1N I@3 };
mov(4)          g71.3<4>UD      g118<8,2,4>UD                   { align1 WE_all 1N F@7 };
sel.ge(8)       g74<1>F         g73.7<0,1,0>F   g74<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.l(8)        g68<1>F         g67.7<0,1,0>F   g68<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.ge(4)       g88<4>F         g90<8,2,4>F     g92<8,2,4>F     { align1 WE_all 1N I@2 };
sel.ge(8)       g76<1>F         g75.7<0,1,0>F   g76<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.l(8)        g70<1>F         g69.7<0,1,0>F   g70<8,8,1>F     { align1 WE_all 1Q F@5 };
sel.l(4)        g71.4<1>F       g71.3<0,1,0>F   g71.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g72.4<1>F       g72.3<0,1,0>F   g72.4<4,4,1>F   { align1 WE_all 1N I@1 };
mov(4)          g77.3<4>UD      g88<8,2,4>UD                    { align1 WE_all 1N F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g81<1>UD        g76.7<0,1,0>UD  g74.7<0,1,0>UD  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@3 };
(+f0.0) sel(16) g79<1>UD        g70.7<0,1,0>UD  g68.7<0,1,0>UD  { align1 1H };
sel.l(8)        g72<1>F         g71.7<0,1,0>F   g72<8,8,1>F     { align1 WE_all 1Q F@1 };
sel.ge(4)       g77.4<1>F       g77.3<0,1,0>F   g77.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g78.4<1>F       g78.3<0,1,0>F   g78.4<4,4,1>F   { align1 WE_all 1N I@3 };
cmp.z.f0.0(16)  null<1>D        g41<8,8,1>D     2D              { align1 1H };
sel.ge(8)       g78<1>F         g77.7<0,1,0>F   g78<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
(+f0.0) sel(16) g83<1>UD        g72.7<0,1,0>UD  g79<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g85<1>UD        g78.7<0,1,0>UD  g81<1,1,0>UD    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g43<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g58<1>F         g83<1,1,0>F     -g85<1,1,0>F    { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g45<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL14         UIP:  LABEL14             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mul(16)         g86<1>D         g51<1,1,0>D     6W              { align1 1H compacted };
mul(16)         g88<1>D         g43<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add3(16)        g90<1>D         g86<8,8,1>D     g41<8,8,1>D     g88<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g47<1>D         g90<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g47UD           g58UD           0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $12 };

LABEL14:
endif(16)       JIP:  LABEL13                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
or(16)          g91<1>D         ~g56<1,1,0>D    ~g94<1,1,0>D    { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g91<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
mov(16)         g92<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g49<1>UD        g49<1,1,0>UD    g92<1,1,0>UD    { align1 1H I@1 compacted };

LABEL13:
while(16)       JIP:  LABEL15                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
add(16)         g96<1>D         g34<1,1,0>D     16D             { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g94<8,8,1>UD    0x00000000UD    { align1 1H };
mov(16)         g50<1>UD        f0<0,1,0>UW                     { align1 1H I@5 };

LABEL18:
cmp.z.f0.0(16)  null<1>D        g50<8,8,1>D     0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL16       UIP:  LABEL16             { align1 1H };
fbl(16)         g98<1>UD        g50<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         a0<1>UW         0x0c00UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g98<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0c00UW        { align1 1H A@1 };
mov(16)         g100<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  g102<1>D        g100<1,1,0>D    g96<1,1,0>D     { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g102<8,8,1>UD   g94<8,8,1>UD    { align1 1H I@1 };
(+f0.0) sel(16) g104<1>UD       g22<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g106<1>UD       g24<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g108<1>UD       g14<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g110<1>UD       g16<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         g122<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H A@3 compacted };
mov(16)         g122<1>F        g104<1,1,0>F                    { align1 1H compacted };
mov(16)         g126<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H A@3 compacted };
mov(16)         g126<1>F        g106<1,1,0>F                    { align1 1H compacted };
mov(16)         g113<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g113<1>F        g108<1,1,0>F                    { align1 1H compacted };
mov(16)         g115<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H A@1 compacted };
mov(16)         g115<1>F        g110<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g107<1>UD       g26<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g111<1>UD       g18<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(8)          g71<2>UD        g122.1<8,4,2>UD                 { align1 WE_all 1Q F@4 };
mov(8)          g84<2>UD        g126.1<8,4,2>UD                 { align1 WE_all 1Q F@3 };
mov(8)          g104<2>UD       g113.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
mov(8)          g9<2>UD         g115.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
mov(16)         g2<1>F          0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g2<1>F          g107<1,1,0>F                    { align1 1H compacted };
mov(16)         g117<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H A@5 compacted };
mov(16)         g117<1>F        g111<1,1,0>F                    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g41<8,8,1>D     1D              { align1 1H };
sel.ge(8)       g69<2>F         g122<8,4,2>F    g71<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.ge(8)       g82<2>F         g126<8,4,2>F    g84<8,4,2>F     { align1 WE_all 1Q A@4 };
sel.l(8)        g98<2>F         g113<8,4,2>F    g104<8,4,2>F    { align1 WE_all 1Q I@3 };
sel.l(8)        g7<2>F          g115<8,4,2>F    g9<8,4,2>F      { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(8)          g58<2>UD        g117.1<8,4,2>UD                 { align1 WE_all 1Q F@5 };
mov(8)          g122.1<2>UD     g69<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g111<2>UD       g2.1<8,4,2>UD                   { align1 WE_all 1Q F@5 };
mov(8)          g126.1<2>UD     g82<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g113.1<2>UD     g98<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g115.1<2>UD     g7<8,4,2>UD                     { align1 WE_all 1Q A@1 };
sel.l(8)        g56<2>F         g117<8,4,2>F    g58<8,4,2>F     { align1 WE_all 1Q I@6 };
mov(4)          g76<4>UD        g122.2<8,2,4>UD                 { align1 WE_all 1N I@5 };
mov(4)          g74<4>UD        g122.1<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(8)       g104<2>F        g2<8,4,2>F      g111<8,4,2>F    { align1 WE_all 1Q I@6 };
mov(4)          g89<4>UD        g126.2<8,2,4>UD                 { align1 WE_all 1N I@5 };
mov(4)          g87<4>UD        g126.1<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g109<4>UD       g113.2<8,2,4>UD                 { align1 WE_all 1N A@6 };
mov(4)          g107<4>UD       g113.1<8,2,4>UD                 { align1 WE_all 1N F@7 };
mov(4)          g30<4>UD        g115.2<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g12<4>UD        g115.1<8,2,4>UD                 { align1 WE_all 1N };
mov(8)          g117.1<2>UD     g56<8,4,2>UD                    { align1 WE_all 1Q F@2 };
sel.ge(4)       g72<4>F         g74<8,2,4>F     g76<8,2,4>F     { align1 WE_all 1N I@7 };
mov(8)          g2.1<2>UD       g104<8,4,2>UD                   { align1 WE_all 1Q F@2 };
sel.ge(4)       g85<4>F         g87<8,2,4>F     g89<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g10<4>F         g12<8,2,4>F     g30<8,2,4>F     { align1 WE_all 1N I@3 };
mov(4)          g63<4>UD        g117.2<8,2,4>UD                 { align1 WE_all 1N I@2 };
mov(4)          g61<4>UD        g117.1<8,2,4>UD                 { align1 WE_all 1N $12.src };
mov(4)          g122.2<4>UD     g72<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g126.2<4>UD     g85<8,2,4>UD                    { align1 WE_all 1N F@2 };
sel.l(4)        g105<4>F        g107<8,2,4>F    g109<8,2,4>F    { align1 WE_all 1N I@5 };
mov(4)          g115.2<4>UD     g10<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g12<4>UD        g2.2<8,2,4>UD                   { align1 WE_all 1N A@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.l(4)        g59<4>F         g61<8,2,4>F     g63<8,2,4>F     { align1 WE_all 1N I@5 };
mov(4)          g81<4>UD        g122.3<8,2,4>UD                 { align1 WE_all 1N I@4 };
mov(4)          g79<4>UD        g122.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g98<4>UD        g126.3<8,2,4>UD                 { align1 WE_all 1N I@5 };
mov(4)          g92<4>UD        g126.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g113.2<4>UD     g105<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g52<4>UD        g115.3<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g47<4>UD        g115.1<8,2,4>UD                 { align1 WE_all 1N $12.src };
mov(4)          g10<4>UD        g2.1<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g117.2<4>UD     g59<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g77<4>F         g79<8,2,4>F     g81<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g90<4>F         g92<8,2,4>F     g98<8,2,4>F     { align1 WE_all 1N I@6 };
mov(4)          g6<4>UD         g113.3<8,2,4>UD                 { align1 WE_all 1N I@5 };
mov(4)          g4<4>UD         g113.1<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.l(4)        g38<4>F         g47<8,2,4>F     g52<8,2,4>F     { align1 WE_all 1N I@5 };
sel.ge(4)       g8<4>F          g10<8,2,4>F     g12<8,2,4>F     { align1 WE_all 1N I@4 };
mov(4)          g68<4>UD        g117.3<8,2,4>UD                 { align1 WE_all 1N I@3 };
mov(4)          g66<4>UD        g117.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g122.3<4>UD     g77<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g126.3<4>UD     g90<8,2,4>UD                    { align1 WE_all 1N F@3 };
sel.l(4)        g110<4>F        g4<8,2,4>F      g6<8,2,4>F      { align1 WE_all 1N I@5 };
mov(4)          g115.3<4>UD     g38<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g2.2<4>UD       g8<8,2,4>UD                     { align1 WE_all 1N F@2 };
sel.l(4)        g64<4>F         g66<8,2,4>F     g68<8,2,4>F     { align1 WE_all 1N I@5 };
sel.ge(4)       g122.4<1>F      g122.3<0,1,0>F  g122.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.ge(4)       g123.4<1>F      g123.3<0,1,0>F  g123.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.ge(4)       g126.4<1>F      g126.3<0,1,0>F  g126.4<4,4,1>F  { align1 WE_all 1N I@3 };
sel.ge(4)       g127.4<1>F      g127.3<0,1,0>F  g127.4<4,4,1>F  { align1 WE_all 1N I@3 };
mov(4)          g113.3<4>UD     g110<8,2,4>UD                   { align1 WE_all 1N F@6 };
sel.l(4)        g115.4<1>F      g115.3<0,1,0>F  g115.4<4,4,1>F  { align1 WE_all 1N I@3 };
sel.l(4)        g116.4<1>F      g116.3<0,1,0>F  g116.4<4,4,1>F  { align1 WE_all 1N I@3 };
mov(4)          g47<4>UD        g2.3<8,2,4>UD                   { align1 WE_all 1N A@2 };
mov(4)          g38<4>UD        g2.1<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g117.3<4>UD     g64<8,2,4>UD                    { align1 WE_all 1N F@7 };
sel.ge(8)       g123<1>F        g122.7<0,1,0>F  g123<8,8,1>F    { align1 WE_all 1Q F@5 };
sel.ge(8)       g127<1>F        g126.7<0,1,0>F  g127<8,8,1>F    { align1 WE_all 1Q F@4 };
sel.l(4)        g113.4<1>F      g113.3<0,1,0>F  g113.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g114.4<1>F      g114.3<0,1,0>F  g114.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(8)        g116<1>F        g115.7<0,1,0>F  g116<8,8,1>F    { align1 WE_all 1Q F@5 };
sel.ge(4)       g30<4>F         g38<8,2,4>F     g47<8,2,4>F     { align1 WE_all 1N I@2 };
sel.l(4)        g117.4<1>F      g117.3<0,1,0>F  g117.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g118.4<1>F      g118.3<0,1,0>F  g118.4<4,4,1>F  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
(+f0.0) sel(16) g6<1>UD         g127.7<0,1,0>UD g123.7<0,1,0>UD { align1 1H };
sel.l(8)        g114<1>F        g113.7<0,1,0>F  g114<8,8,1>F    { align1 WE_all 1Q F@5 };
mov(4)          g2.3<4>UD       g30<8,2,4>UD                    { align1 WE_all 1N F@4 };
sel.l(8)        g118<1>F        g117.7<0,1,0>F  g118<8,8,1>F    { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g4<1>UD         g116.7<0,1,0>UD g114.7<0,1,0>UD { align1 1H };
sel.ge(4)       g2.4<1>F        g2.3<0,1,0>F    g2.4<4,4,1>F    { align1 WE_all 1N I@2 };
sel.ge(4)       g3.4<1>F        g3.3<0,1,0>F    g3.4<4,4,1>F    { align1 WE_all 1N I@2 };
cmp.z.f0.0(16)  null<1>D        g41<8,8,1>D     2D              { align1 1H };
sel.ge(8)       g3<1>F          g2.7<0,1,0>F    g3<8,8,1>F      { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
(+f0.0) sel(16) g8<1>UD         g118.7<0,1,0>UD g4<1,1,0>UD     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g10<1>UD        g3.7<0,1,0>UD   g6<1,1,0>UD     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g43<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g61<1>F         g8<1,1,0>F      -g10<1,1,0>F    { align1 1H I@2 compacted };
and.nz.f0.0(16) null<1>UD       g45<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL17             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mul(16)         g11<1>D         g100<1,1,0>D    6W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mul(16)         g30<1>D         g43<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add3(16)        g38<1>D         g11<8,8,1>D     g41<8,8,1>D     g30<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g59<1>D         g38<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g59UD           g61UD           0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $12 };

LABEL17:
endif(16)       JIP:  LABEL16                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
or(16)          g39<1>D         ~g102<1,1,0>D   ~g94<1,1,0>D    { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g39<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
mov(16)         g47<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g50<1>UD        g50<1,1,0>UD    g47<1,1,0>UD    { align1 1H I@1 compacted };

LABEL16:
while(16)       JIP:  LABEL18                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
add(16)         g48<1>D         g36<1,1,0>D     32D             { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g94<8,8,1>UD    0x00000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
mov(16)         g51<1>UD        f0<0,1,0>UW                     { align1 1H };

LABEL21:
cmp.z.f0.0(16)  null<1>D        g51<8,8,1>D     0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL19       UIP:  LABEL19             { align1 1H };
fbl(16)         g56<1>UD        g51<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
mov(16)         a0<1>UW         0x0600UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g56<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0600UW        { align1 1H A@1 };
mov(16)         g58<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.z.f0.0(16)  g60<1>D         g58<1,1,0>D     g48<1,1,0>D     { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g60<8,8,1>UD    g94<8,8,1>UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g62<1>UD        g22<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g64<1>UD        g24<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g66<1>UD        g14<8,8,1>UD    0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
(+f0.0) sel(16) g68<1>UD        g16<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         g77<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@2 compacted };
mov(16)         g77<1>F         g62<1,1,0>F                     { align1 1H compacted };
mov(16)         g79<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@3 compacted };
mov(16)         g79<1>F         g64<1,1,0>F                     { align1 1H compacted };
mov(16)         g71<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g71<1>F         g66<1,1,0>F                     { align1 1H compacted };
mov(16)         g73<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g73<1>F         g68<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g65<1>UD        g26<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g69<1>UD        g18<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(8)          g117<2>UD       g77.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g9<2>UD         g79.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g62<2>UD        g71.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g88<2>UD        g73.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(16)         g81<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g81<1>F         g65<1,1,0>F                     { align1 1H compacted };
mov(16)         g75<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@5 compacted };
mov(16)         g75<1>F         g69<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g41<8,8,1>D     1D              { align1 1H };
sel.ge(8)       g115<2>F        g77<8,4,2>F     g117<8,4,2>F    { align1 WE_all 1Q I@5 };
sel.ge(8)       g7<2>F          g79<8,4,2>F     g9<8,4,2>F      { align1 WE_all 1Q A@4 };
sel.l(8)        g56<2>F         g71<8,4,2>F     g62<8,4,2>F     { align1 WE_all 1Q I@3 };
sel.l(8)        g86<2>F         g73<8,4,2>F     g88<8,4,2>F     { align1 WE_all 1Q A@2 };
mov(8)          g104<2>UD       g75.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g77.1<2>UD      g115<8,4,2>UD                   { align1 WE_all 1Q A@4 };
mov(8)          g69<2>UD        g81.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g79.1<2>UD      g7<8,4,2>UD                     { align1 WE_all 1Q A@3 };
mov(8)          g71.1<2>UD      g56<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g73.1<2>UD      g86<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sel.l(8)        g102<2>F        g75<8,4,2>F     g104<8,4,2>F    { align1 WE_all 1Q I@6 };
mov(4)          g126<4>UD       g77.2<8,2,4>UD                  { align1 WE_all 1N I@5 };
mov(4)          g122<4>UD       g77.1<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g63<2>F         g81<8,4,2>F     g69<8,4,2>F     { align1 WE_all 1Q I@6 };
mov(4)          g30<4>UD        g79.2<8,2,4>UD                  { align1 WE_all 1N I@5 };
mov(4)          g12<4>UD        g79.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g67<4>UD        g71.2<8,2,4>UD                  { align1 WE_all 1N A@6 };
mov(4)          g65<4>UD        g71.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g96<4>UD        g73.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g91<4>UD        g73.1<8,2,4>UD                  { align1 WE_all 1N };
mov(8)          g75.1<2>UD      g102<8,4,2>UD                   { align1 WE_all 1Q F@2 };
sel.ge(4)       g118<4>F        g122<8,2,4>F    g126<8,2,4>F    { align1 WE_all 1N I@7 };
mov(8)          g81.1<2>UD      g63<8,4,2>UD                    { align1 WE_all 1Q F@2 };
sel.ge(4)       g10<4>F         g12<8,2,4>F     g30<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g89<4>F         g91<8,2,4>F     g96<8,2,4>F     { align1 WE_all 1N I@3 };
mov(4)          g109<4>UD       g75.2<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g107<4>UD       g75.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g77.2<4>UD      g118<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g79.2<4>UD      g10<8,2,4>UD                    { align1 WE_all 1N F@2 };
sel.l(4)        g63<4>F         g65<8,2,4>F     g67<8,2,4>F     { align1 WE_all 1N I@5 };
mov(4)          g73.2<4>UD      g89<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g91<4>UD        g81.2<8,2,4>UD                  { align1 WE_all 1N A@2 };
sel.l(4)        g105<4>F        g107<8,2,4>F    g109<8,2,4>F    { align1 WE_all 1N I@5 };
mov(4)          g6<4>UD         g77.3<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g4<4>UD         g77.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g56<4>UD        g79.1<8,2,4>UD                  { align1 WE_all 1N I@5 };
mov(4)          g71.2<4>UD      g63<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g101<4>UD       g73.3<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g99<4>UD        g73.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g89<4>UD        g81.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g75.2<4>UD      g105<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.ge(4)       g2<4>F          g4<8,2,4>F      g6<8,2,4>F      { align1 WE_all 1N I@7 };
mov(4)          g85<4>UD        g71.3<8,2,4>UD                  { align1 WE_all 1N I@5 };
mov(4)          g83<4>UD        g71.1<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g97<4>F         g99<8,2,4>F     g101<8,2,4>F    { align1 WE_all 1N I@5 };
mov(4)          g62<4>UD        g79.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g87<4>F         g89<8,2,4>F     g91<8,2,4>F     { align1 WE_all 1N I@5 };
mov(4)          g114<4>UD       g75.3<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g112<4>UD       g75.1<8,2,4>UD                  { align1 WE_all 1N $11.src };
mov(4)          g77.3<4>UD      g2<8,2,4>UD                     { align1 WE_all 1N F@3 };
sel.l(4)        g68<4>F         g83<8,2,4>F     g85<8,2,4>F     { align1 WE_all 1N I@5 };
mov(4)          g73.3<4>UD      g97<8,2,4>UD                    { align1 WE_all 1N F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.ge(4)       g38<4>F         g56<8,2,4>F     g62<8,2,4>F     { align1 WE_all 1N I@5 };
mov(4)          g81.2<4>UD      g87<8,2,4>UD                    { align1 WE_all 1N F@3 };
sel.l(4)        g110<4>F        g112<8,2,4>F    g114<8,2,4>F    { align1 WE_all 1N I@4 };
sel.ge(4)       g77.4<1>F       g77.3<0,1,0>F   g77.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g78.4<1>F       g78.3<0,1,0>F   g78.4<4,4,1>F   { align1 WE_all 1N I@3 };
mov(4)          g71.3<4>UD      g68<8,2,4>UD                    { align1 WE_all 1N F@5 };
sel.l(4)        g73.4<1>F       g73.3<0,1,0>F   g73.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g74.4<1>F       g74.3<0,1,0>F   g74.4<4,4,1>F   { align1 WE_all 1N I@3 };
mov(4)          g79.3<4>UD      g38<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g98<4>UD        g81.3<8,2,4>UD                  { align1 WE_all 1N A@3 };
mov(4)          g96<4>UD        g81.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g75.3<4>UD      g110<8,2,4>UD                   { align1 WE_all 1N F@5 };
sel.ge(8)       g78<1>F         g77.7<0,1,0>F   g78<8,8,1>F     { align1 WE_all 1Q F@3 };
sel.l(4)        g71.4<1>F       g71.3<0,1,0>F   g71.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.l(4)        g72.4<1>F       g72.3<0,1,0>F   g72.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.l(8)        g74<1>F         g73.7<0,1,0>F   g74<8,8,1>F     { align1 WE_all 1Q F@4 };
sel.ge(4)       g79.4<1>F       g79.3<0,1,0>F   g79.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g80.4<1>F       g80.3<0,1,0>F   g80.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g92<4>F         g96<8,2,4>F     g98<8,2,4>F     { align1 WE_all 1N I@2 };
sel.l(4)        g75.4<1>F       g75.3<0,1,0>F   g75.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g76.4<1>F       g76.3<0,1,0>F   g76.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(8)        g72<1>F         g71.7<0,1,0>F   g72<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(8)       g80<1>F         g79.7<0,1,0>F   g80<8,8,1>F     { align1 WE_all 1Q F@5 };
mov(4)          g81.3<4>UD      g92<8,2,4>UD                    { align1 WE_all 1N F@5 };
sel.l(8)        g76<1>F         g75.7<0,1,0>F   g76<8,8,1>F     { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@3 };
(+f0.0) sel(16) g83<1>UD        g74.7<0,1,0>UD  g72.7<0,1,0>UD  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g85<1>UD        g80.7<0,1,0>UD  g78.7<0,1,0>UD  { align1 1H };
sel.ge(4)       g81.4<1>F       g81.3<0,1,0>F   g81.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g82.4<1>F       g82.3<0,1,0>F   g82.4<4,4,1>F   { align1 WE_all 1N I@3 };
cmp.z.f0.0(16)  null<1>D        g41<8,8,1>D     2D              { align1 1H };
sel.ge(8)       g82<1>F         g81.7<0,1,0>F   g82<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
(+f0.0) sel(16) g87<1>UD        g76.7<0,1,0>UD  g83<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g89<1>UD        g82.7<0,1,0>UD  g85<1,1,0>UD    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g43<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g64<1>F         g87<1,1,0>F     -g89<1,1,0>F    { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g45<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL20         UIP:  LABEL20             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mul(16)         g90<1>D         g58<1,1,0>D     6W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mul(16)         g92<1>D         g43<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add3(16)        g96<1>D         g90<8,8,1>D     g41<8,8,1>D     g92<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g62<1>D         g96<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g62UD           g64UD           0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $12 };

LABEL20:
endif(16)       JIP:  LABEL19                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
or(16)          g97<1>D         ~g60<1,1,0>D    ~g94<1,1,0>D    { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g97<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
mov(16)         g98<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g51<1>UD        g51<1,1,0>UD    g98<1,1,0>UD    { align1 1H I@1 compacted };

LABEL19:
while(16)       JIP:  LABEL21                                   { align1 1H };
mov.nz.f0.0(16) null<1>D        g94<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL22         UIP:  LABEL22             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@6 };
shl(16)         g99<1>D         g32<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g65<1>D         g99<1,1,0>D     1152D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g65UD           nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $12 };
shl(16)         g100<1>D        g34<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g66<1>D         g100<1,1,0>D    1216D           { align1 1H $12.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g66UD           nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $13 };
shl(16)         g101<1>D        g36<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g67<1>D         g101<1,1,0>D    1280D           { align1 1H $13.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g67UD           nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $14 };

LABEL22:
endif(16)       JIP:  LABEL23                                   { align1 1H };

LABEL23:
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g102UD          g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
mov(8)          g103<1>UD       0x00000000UD                    { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(2)          g103.10<1>UB    g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g103UD          nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $0 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
mov(16)         g52<1>UD        g54<8,8,1>UD                    { align1 1H };

LABEL26:
cmp.ge.f0.0(16) null<1>UD       g52<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL24       UIP:  LABEL24             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
shl(16)         g68<1>D         g52<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g73UD           g68UD           nullUD          0x04201502                0x00000000
                            slm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $14 };
cmp.nz.f0.0(16) null<1>F        g73<1,1,0>F     0x7f800000F  /* infF */ { align1 1H $14.dst compacted };
(+f0.0) if(16)  JIP:  LABEL25         UIP:  LABEL25             { align1 1H };
add(16)         g104<1>D        g120<1,1,0>D    44D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g106<1>UD       g104<1,1,0>UD   g120<1,1,0>UD   { align1 1H compacted };
add(16)         g108<1>D        g104<1,1,0>D    g68<1,1,0>D     { align1 1H $14.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g110<1>UD       g108<1,1,0>UD   g104<1,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
mov(8)          g69<2>UD        g108<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N F@6 };
mov(8)          g71<2>UD        g109<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
add3(16)        g112<1>D        -g106<8,8,1>D   g124<8,8,1>D    -g110<1,1,1>D { align1 1H };
mov(8)          g71.1<2>UD      g113<4,4,1>UD                   { align1 2Q I@1 };
mov(8)          g69.1<2>UD      g112<4,4,1>UD                   { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g69UD           g73UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $14 };

LABEL25:
endif(16)       JIP:  LABEL24                                   { align1 1H };
add(16)         g52<1>D         g52<1,1,0>D     512D            { align1 1H compacted };

LABEL24:
while(16)       JIP:  LABEL26                                   { align1 1H };
nop                                                             ;

LABEL29:
cmp.ge.f0.0(16) null<1>UD       g54<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL27       UIP:  LABEL27             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
shl(16)         g113<1>D        g54<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g74<1>D         g113<1,1,0>D    1152D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g79UD           g74UD           nullUD          0x04201502                0x00000000
                            slm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $14 };
cmp.nz.f0.0(16) null<1>D        g79<8,8,1>D     0D              { align1 1H $14.dst };
(+f0.0) if(16)  JIP:  LABEL28         UIP:  LABEL28             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
add(16)         g115<1>D        g120<1,1,0>D    1196D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.l.f0.0(16)  g117<1>UD       g115<1,1,0>UD   g120<1,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@3 };
add(16)         g122<1>D        g115<1,1,0>D    g113<1,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.l.f0.0(16)  g126<1>UD       g122<1,1,0>UD   g115<1,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
mov(8)          g75<2>UD        g122<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N F@2 };
mov(8)          g77<2>UD        g123<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
add3(16)        g2<1>D          -g117<8,8,1>D   g124<8,8,1>D    -g126<1,1,1>D { align1 1H };
mov(8)          g77.1<2>UD      g3<4,4,1>UD                     { align1 2Q I@1 };
mov(8)          g75.1<2>UD      g2<4,4,1>UD                     { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g75UD           g79UD           0x0804058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $14 };

LABEL28:
endif(16)       JIP:  LABEL27                                   { align1 1H };
add(16)         g54<1>D         g54<1,1,0>D     512D            { align1 1H compacted };

LABEL27:
while(16)       JIP:  LABEL29                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q A@2 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_BFS_BFS_pass1_initial_batchable_code[] = {
    0x80000065, 0x64058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x21050220, 0x00000024, 0x00000000,
    0x00040061, 0x27054220, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00640c, 0x00340000,
    0x80030061, 0x20054410, 0x00000000, 0x76543210,
    0x64201940, 0x00802095, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa0370040, 0x42810203,
    0xa03e0040, 0x42c10203, 0x27391a70, 0x02103703,
    0x00030061, 0x03060220, 0x00343705, 0x00000000,
    0x00130061, 0x05060220, 0x00343805, 0x00000000,
    0x27401c70, 0x02103e03, 0xa03b1c40, 0x02123912,
    0x00031961, 0x03260220, 0x00343b05, 0x00000000,
    0x00131a61, 0x05260220, 0x00343c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x3c140000, 0xfb040324, 0x00040000,
    0x00041c69, 0x42058660, 0x02462705, 0x00000002,
    0xa0441940, 0x42003e02, 0x27461970, 0x3e004403,
    0x00030061, 0x4a060220, 0x00344405, 0x00000000,
    0x00130061, 0x4c060220, 0x00344505, 0x00000000,
    0x00041b52, 0x48042e68, 0x06264005, 0x46050224,
    0x00031961, 0x4a260220, 0x00344805, 0x00000000,
    0x00131a61, 0x4c260220, 0x00344905, 0x00000000,
    0xe2630961, 0x00114004, 0x80000965, 0x63058220,
    0x02006304, 0xffffffff, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80040040, 0x55058150,
    0x05582005, 0xffffffff, 0x80001b4c, 0x4e050220,
    0x00006304, 0x00000000, 0x80001969, 0x10018220,
    0x02004e04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000800, 0x80000961, 0x50060660,
    0x00010500, 0x00000000, 0x80000061, 0x50260660,
    0x00010510, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80031961, 0x04260660,
    0x00005024, 0x00000000, 0x80031961, 0x04060660,
    0x00005004, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004131, 0x4b140000,
    0xfb00040c, 0x00340000, 0x8004b161, 0x53054660,
    0x00000000, 0x00000000, 0x00040061, 0x53050660,
    0x00464b05, 0x00000000, 0x80041961, 0x10014110,
    0x00000000, 0x0a600a60, 0x80040069, 0x10018510,
    0x01465505, 0x00020002, 0x80040940, 0x10018110,
    0x01461001, 0x0a600a60, 0xe3510961, 0x001b0004,
    0x80001961, 0x51054660, 0x00000000, 0x00000000,
    0x80031940, 0x51260660, 0x06445106, 0x00445126,
    0x80021940, 0x51470660, 0x06425127, 0x00425147,
    0x80021940, 0x51670660, 0x06425127, 0x00425167,
    0x80021940, 0x51850660, 0x06005164, 0x00345185,
    0x80021a40, 0x52850660, 0x06005264, 0x00345285,
    0xa4521940, 0x52015182, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0290040, 0x51202102,
    0x27561970, 0x4b002903, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00041a70, 0x00018220,
    0x22465605, 0x00000000, 0x00040061, 0x25050120,
    0x20003000, 0x00000000, 0x01040022, 0x0001c060,
    0x00000030, 0x00000030, 0x00040061, 0x23054220,
    0x00000000, 0xffffffff, 0x00040028, 0x0001c660,
    0x00000088, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000078, 0xa0570040, 0x4b005102,
    0xa0270040, 0x01002703, 0xa0211a40, 0x58302152,
    0x0004a170, 0x00010220, 0x42462705, 0x00463c05,
    0x01040022, 0x0001c060, 0x00000030, 0x00000030,
    0x00041f61, 0x23054220, 0x00000000, 0x00000000,
    0x00040028, 0x0001c660, 0x00000020, 0x00000010,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040027, 0x00014060, 0x00000000, 0xfffffd00,
    0x00041a61, 0x00010660, 0x20462305, 0x00000000,
    0x01040022, 0x0001c060, 0x000000b0, 0x00000090,
    0x00041e4c, 0x58050220, 0x00462505, 0x00000000,
    0x00040070, 0x00018660, 0x16462505, 0x00000000,
    0x11041a62, 0x5a058220, 0x02465805, 0x00000020,
    0xa02b1940, 0x5a002702, 0x80040061, 0x10014110,
    0x00000000, 0x05200520, 0x00040069, 0x10018510,
    0x01565a06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x05200520, 0xe02d0961, 0x001b0004,
    0x00040024, 0x0001c060, 0x00000030, 0x00000030,
    0x00041b61, 0x2b054220, 0x00000000, 0x00000000,
    0x00041b61, 0x2d054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040040, 0x5b058660, 0x06000204, 0x0000082c,
    0x00041c69, 0x5e058660, 0x02462b05, 0x00000002,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00040040, 0x71058660, 0x06000204, 0x00002c2c,
    0xa07e0040, 0x00810243, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x27050160,
    0x00462005, 0x00000000, 0xa0601c40, 0x5e005b02,
    0xe75d0070, 0x82c05b03, 0x27621a70, 0x5b006003,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x05060220, 0x00346005, 0x00000000,
    0x00130061, 0x07060220, 0x00346105, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00041b52, 0x64042e68, 0x06265d05, 0x62050224,
    0x00131961, 0x07260220, 0x00346505, 0x00000000,
    0x00031a61, 0x05260220, 0x00346405, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x65140000, 0xfb040524, 0x00040000,
    0x00042261, 0x67050120, 0x00566506, 0x00000000,
    0x00040061, 0x74050120, 0x00566516, 0x00000000,
    0x00031a41, 0x20018220, 0x01466705, 0x00580058,
    0x00041b6c, 0x69058660, 0x02466705, 0x0000001f,
    0x606d0041, 0x05806702, 0x60761c41, 0x5cc07402,
    0x27730070, 0x02107103, 0xfe6b0049, 0x05806703,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa0071c40, 0x6d007e02, 0x606e1e41, 0x05806902,
    0xa0781d40, 0x76007102, 0x00130041, 0x20018220,
    0x01466805, 0x00580058, 0x00031c61, 0x16060220,
    0x00340705, 0x00000000, 0x00131d61, 0x18060220,
    0x00340805, 0x00000000, 0x277a1c70, 0x71007803,
    0x00030061, 0x1c060220, 0x00347805, 0x00000000,
    0x00130061, 0x1e060220, 0x00347905, 0x00000000,
    0x00130049, 0x6c058222, 0x02466805, 0x00000058,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x27030070, 0x02107e2b, 0x27090070, 0x7e000703,
    0x00041e52, 0x7c042e68, 0x06267305, 0x7a050224,
    0xa0701c40, 0x6e006b02, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa0051c40, 0x0212031a,
    0x00131b61, 0x1e260220, 0x00347d05, 0x00000000,
    0x00031c61, 0x1c260220, 0x00347c05, 0x00000000,
    0x00041b52, 0x0b040e68, 0x0e2e0505, 0x09057005,
    0x00131961, 0x18260220, 0x00340c05, 0x00000000,
    0x00031a61, 0x16260220, 0x00340b05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x0e440000, 0xfb041624, 0x003c0000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x16340000, 0xfb041c24, 0x001c0000,
    0x00043469, 0x1c058660, 0x02462d05, 0x00000009,
    0xa02b2340, 0x02001203, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xa01e2440, 0x1c001602,
    0x00042469, 0x32058660, 0x02461a05, 0x00000005,
    0x272f1b70, 0x12002b03, 0xa0351a40, 0x32002b02,
    0xe0330068, 0x01b01a03, 0xa031b340, 0x14022f02,
    0x27371b70, 0x2b003503, 0x00030061, 0x21060220,
    0x00343505, 0x00000000, 0x00130061, 0x23060220,
    0x00343605, 0x00000000, 0xa03b2140, 0x01003503,
    0x00041c52, 0x39040e68, 0x0e2e3105, 0x37053305,
    0xe73da170, 0x01003b03, 0x00131a61, 0x23260220,
    0x00343a05, 0x00000000, 0x00031b61, 0x21260220,
    0x00343905, 0x00000000, 0xa03f1b40, 0x39023d02,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x02440000, 0xfb042124, 0x003c0000,
    0xa0203540, 0x20001e03, 0x00033561, 0x22060220,
    0x00343b05, 0x00000000, 0x00133561, 0x24060220,
    0x00343c05, 0x00000000, 0x00031a61, 0x22260220,
    0x00343f05, 0x00000000, 0x00131a61, 0x24260220,
    0x00344005, 0x00000000, 0x20412540, 0x02200800,
    0x00041162, 0x47058aa0, 0x4a464105, 0x0704ec3d,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00040070, 0x53058aa0, 0x5a464705, 0x77f684df,
    0x00044638, 0x4a050aa0, 0x1a464705, 0x00460001,
    0x00040070, 0x55058aa0, 0x3a464105, 0x0704ec3d,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x40240000, 0xfb042224, 0x000c0000,
    0xe0233765, 0x0ff10043, 0x00042641, 0x4c058aa0,
    0x0a464a05, 0x417d70a4, 0x00041265, 0x00010220,
    0x22465305, 0x00465505, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00041a69, 0x25058660,
    0x02462305, 0x00000004, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x2722f462, 0x18002003,
    0xef0a1162, 0x00004c03, 0xa0291b40, 0x25002702,
    0xe0361965, 0x1ff02903, 0xa02a1940, 0x36001e02,
    0x80002501, 0x00000000, 0x00000000, 0x00000000,
    0x20442740, 0x04204000, 0x80002501, 0x00000000,
    0x00000000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x20462740, 0x06204200,
    0x00040a70, 0x56058aa0, 0x3a464405, 0x0704ec3d,
    0x00043662, 0x48058aa0, 0x4a464405, 0x0704ec3d,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044838, 0x4d050aa0, 0x1a464805, 0x00460001,
    0x00043870, 0x58058aa0, 0x5a464805, 0x77f684df,
    0x00041462, 0x49058aa0, 0x4a464605, 0x0704ec3d,
    0x00042841, 0x4f058aa0, 0x0a464d05, 0x417d70a4,
    0x00041365, 0x00010220, 0x22465805, 0x00465605,
    0xef0c1162, 0x00004f03, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044938, 0x50050aa0,
    0x1a464905, 0x00460001, 0x00041a70, 0x59058aa0,
    0x3a464605, 0x0704ec3d, 0x00043970, 0x5b058aa0,
    0x5a464905, 0x77f684df, 0x80002901, 0x00000000,
    0x00000000, 0x00000000, 0x00041f41, 0x52058aa0,
    0x0a465005, 0x417d70a4, 0x00041265, 0x00010220,
    0x22465b05, 0x00465905, 0xef5c1162, 0x00005203,
    0x275e1d70, 0x22002a03, 0x01040022, 0x0001c060,
    0x00000120, 0x00000120, 0x00040069, 0x60058660,
    0x02462a05, 0x00000005, 0xa0639340, 0x60000e02,
    0xe0610068, 0x01b02a03, 0x27651a70, 0x0e006303,
    0xa0690040, 0x01006303, 0x00030061, 0x23060220,
    0x00346305, 0x00000000, 0x00130061, 0x25060220,
    0x00346405, 0x00000000, 0x0004c352, 0x67040e68,
    0x0e2e1005, 0x65056105, 0x276b1c70, 0x63006903,
    0x00030061, 0x29060220, 0x00346905, 0x00000000,
    0x00130061, 0x2b060220, 0x00346a05, 0x00000000,
    0x00131c61, 0x25260220, 0x00346805, 0x00000000,
    0x00031d61, 0x23260220, 0x00346705, 0x00000000,
    0xa06d1d40, 0x67026b02, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x0e440000,
    0xfb042324, 0x003c0000, 0x00031961, 0x29260220,
    0x00346d05, 0x00000000, 0x00131a61, 0x2b260220,
    0x00346e05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x16440000,
    0xfb042924, 0x003c0000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040069, 0x30058660,
    0x02463605, 0x00000002, 0x00041961, 0x2e050220,
    0x00463005, 0x00000000, 0x00041970, 0x00018220,
    0x42462e05, 0x00000120, 0x01040028, 0x0001c660,
    0x00000090, 0x00000090, 0x00043369, 0x2a058660,
    0x02462e05, 0x00000002, 0x00043361, 0x1e054220,
    0x00000000, 0x7f800000, 0x00043361, 0x20054220,
    0x00000000, 0x7f800000, 0x00043361, 0x22054220,
    0x00000000, 0x7f800000, 0x00043361, 0x24054220,
    0x00000000, 0x7f800000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xea0c2a14, 0x003c1e44, 0x00040040, 0x2e058660,
    0x06462e05, 0x00000800, 0x00040027, 0x00014060,
    0x00000000, 0xffffff60, 0x00000060, 0x00000000,
    0x00000000, 0x00000000, 0x00041a70, 0x00018220,
    0x42463005, 0x00000030, 0x01040028, 0x0001c660,
    0x000000a8, 0x000000a8, 0x00040069, 0x6e058660,
    0x02463005, 0x00000002, 0x00043361, 0x1f054220,
    0x00000000, 0x00000000, 0x00043361, 0x21054220,
    0x00000000, 0x00000000, 0x00043361, 0x23054220,
    0x00000000, 0x00000000, 0x00043361, 0x25054220,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa02b1d40, 0x48006e03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x00000000, 0xea0c2b14, 0x003c1f44,
    0x00040040, 0x30058660, 0x06463005, 0x00000800,
    0x00040027, 0x00014060, 0x00000000, 0xffffff48,
    0x80000001, 0x00000000, 0x30000000, 0x00000000,
    0x80000001, 0x00000000, 0x30000000, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x80004a31, 0x6f0c0000, 0xe23e000c, 0x00000000,
    0x80002a01, 0x00000000, 0x00000000, 0x00000000,
    0x80030061, 0x70054220, 0x00000000, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80011961, 0x70550000, 0x0000005c, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80044b31, 0x00000000, 0x3008700c, 0x00000000,
    0x80040001, 0x00000000, 0xe0000000, 0x00000000,
    0x20712340, 0x16000e00, 0x20732340, 0x18001000,
    0x20752340, 0x1a001200, 0x207a1240, 0x04207300,
    0x207e1240, 0x06207500, 0x20761540, 0x02207100,
    0x20041341, 0x0c007a00, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x201e0b41, 0x5c007e00,
    0x20021341, 0x0a007600, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00041361, 0x22050a20,
    0x00460405, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00041261, 0x24050a20,
    0x00461e05, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00041161, 0x20050a20,
    0x00460205, 0x00000000, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00040070, 0x00018220,
    0x22465e05, 0x00000000, 0x00040061, 0x31050120,
    0x00003000, 0x00000000, 0x80001761, 0x50054660,
    0x00000000, 0x00000001, 0xe0293365, 0x00302703,
    0xe02b3368, 0x00202703, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x2d050660,
    0x02005004, 0x00462705, 0x00041a70, 0x00018660,
    0x16463105, 0x00000000, 0x01040028, 0x0001c660,
    0x000008a8, 0x000008a8, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x0004004c, 0x2f050220,
    0x00463105, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80041961, 0x10014110,
    0x00000000, 0x04000400, 0x00040069, 0x10018510,
    0x01562f06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x04000400, 0xe0330961, 0x001b0004,
    0xac381970, 0x20003302, 0x00041965, 0x00010220,
    0x22463805, 0x00465e05, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x01041162, 0x3a058220,
    0x02461605, 0xff800000, 0x01040062, 0x3c058220,
    0x02461805, 0xff800000, 0x01040062, 0x3e058220,
    0x02460e05, 0x7f800000, 0x01040062, 0x40058220,
    0x02461005, 0x7f800000, 0xa3491c61, 0xff810000,
    0x60490061, 0x00103a00, 0xa34b0b61, 0xff810000,
    0x604b0061, 0x00103c00, 0xa3431a61, 0x7f810000,
    0x60430061, 0x00103e00, 0xa3451961, 0x7f810000,
    0x60450061, 0x00104000, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x3d058220,
    0x02461a05, 0xff800000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x41058220,
    0x02461205, 0x7f800000, 0x80031461, 0x04060220,
    0x00444926, 0x00000000, 0x80031361, 0x2f060220,
    0x00444b26, 0x00000000, 0x80031261, 0x53060220,
    0x00444326, 0x00000000, 0x80031161, 0x63060220,
    0x00444526, 0x00000000, 0xa34d0e61, 0xff810000,
    0x604d0061, 0x00103d00, 0xa3470d61, 0x7f810000,
    0x60470061, 0x00104100, 0x00040070, 0x00018660,
    0x16462905, 0x00000001, 0x80031d62, 0x02060aa0,
    0x4a444906, 0x00440406, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80031c62, 0x26060aa0,
    0x4a444b06, 0x00442f06, 0x80031b62, 0x51060aa0,
    0x5a444306, 0x00445306, 0x80031a62, 0x61060aa0,
    0x5a444506, 0x00446306, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80031561, 0x70060220,
    0x00444726, 0x00000000, 0x80030c61, 0x49260220,
    0x00440206, 0x00000000, 0x80030b61, 0x4b260220,
    0x00442606, 0x00000000, 0x80030a61, 0x43260220,
    0x00445106, 0x00000000, 0x80030961, 0x45260220,
    0x00446106, 0x00000000, 0x80031d62, 0x6e060aa0,
    0x5a444706, 0x00447006, 0x80021c61, 0x09070220,
    0x00424947, 0x00000000, 0x80020061, 0x07070220,
    0x00424927, 0x00000000, 0x80020d61, 0x3e070220,
    0x00424b47, 0x00000000, 0x80021761, 0x3c070220,
    0x00424b27, 0x00000000, 0x80021e61, 0x58070220,
    0x00424347, 0x00000000, 0x80020061, 0x56070220,
    0x00424327, 0x00000000, 0x80031361, 0x52060220,
    0x00444d26, 0x00000000, 0x80021f61, 0x68070220,
    0x00424547, 0x00000000, 0x80020061, 0x66070220,
    0x00424527, 0x00000000, 0x80031161, 0x47260220,
    0x00446e06, 0x00000000, 0x80021f62, 0x05070aa0,
    0x4a420707, 0x00420907, 0x80021f62, 0x3a070aa0,
    0x4a423c07, 0x00423e07, 0x80021d62, 0x54070aa0,
    0x5a425607, 0x00425807, 0x80031c62, 0x50060aa0,
    0x4a444d06, 0x00445206, 0x80021a62, 0x64070aa0,
    0x5a426607, 0x00426807, 0x80021961, 0x75070220,
    0x00424747, 0x00000000, 0x80020061, 0x73070220,
    0x00424727, 0x00000000, 0x80021561, 0x49470220,
    0x00420507, 0x00000000, 0x80021461, 0x4b470220,
    0x00423a07, 0x00000000, 0x80021361, 0x43470220,
    0x00425407, 0x00000000, 0x80030a61, 0x4d260220,
    0x00445006, 0x00000000, 0x80021161, 0x45470220,
    0x00426407, 0x00000000, 0x80021e62, 0x71070aa0,
    0x5a427307, 0x00427507, 0x80021d61, 0x1e070220,
    0x00424967, 0x00000000, 0x80020061, 0x0c070220,
    0x00424927, 0x00000000, 0x80021e61, 0x41070220,
    0x00424b27, 0x00000000, 0x80021e61, 0x60070220,
    0x00424367, 0x00000000, 0x80020061, 0x5b070220,
    0x00424327, 0x00000000, 0x80020c61, 0x57070220,
    0x00424d47, 0x00000000, 0x80021461, 0x55070220,
    0x00424d27, 0x00000000, 0x80020061, 0x4f070220,
    0x00424b67, 0x00000000, 0x80021f61, 0x6d070220,
    0x00424567, 0x00000000, 0x80020061, 0x6b070220,
    0x00424527, 0x00000000, 0x80021161, 0x47470220,
    0x00427107, 0x00000000, 0x80021f62, 0x0a070aa0,
    0x4a420c07, 0x00421e07, 0x80021f62, 0x59070aa0,
    0x5a425b07, 0x00426007, 0x80021d62, 0x53070aa0,
    0x4a425507, 0x00425707, 0x80021c62, 0x3f070aa0,
    0x4a424107, 0x00424f07, 0x80021a62, 0x69070aa0,
    0x5a426b07, 0x00426d07, 0x80021961, 0x7e070220,
    0x00424767, 0x00000000, 0x80020061, 0x7a070220,
    0x00424727, 0x00000000, 0x80021561, 0x49670220,
    0x00420a07, 0x00000000, 0x80021461, 0x43670220,
    0x00425907, 0x00000000, 0x80021361, 0x4d470220,
    0x00425307, 0x00000000, 0x80021261, 0x4b670220,
    0x00423f07, 0x00000000, 0x80021161, 0x45670220,
    0x00426907, 0x00000000, 0x80021e62, 0x76070aa0,
    0x5a427a07, 0x00427e07, 0x80021d62, 0x49850aa0,
    0x4a004964, 0x00344985, 0x80021d62, 0x4a850aa0,
    0x4a004a64, 0x00344a85, 0x80021c62, 0x43850aa0,
    0x5a004364, 0x00344385, 0x80021c62, 0x44850aa0,
    0x5a004464, 0x00344485, 0x80020b61, 0x5c070220,
    0x00424d67, 0x00000000, 0x80021761, 0x5a070220,
    0x00424d27, 0x00000000, 0x80021c62, 0x4b850aa0,
    0x4a004b64, 0x00344b85, 0x80021c62, 0x4c850aa0,
    0x4a004c64, 0x00344c85, 0x80021b62, 0x45850aa0,
    0x5a004564, 0x00344585, 0x80021b62, 0x46850aa0,
    0x5a004664, 0x00344685, 0x80021761, 0x47670220,
    0x00427607, 0x00000000, 0x80031762, 0x4a050aa0,
    0x4a0049e4, 0x00464a05, 0x80031662, 0x44050aa0,
    0x5a0043e4, 0x00464405, 0x80021a62, 0x58070aa0,
    0x4a425a07, 0x00425c07, 0x80031662, 0x4c050aa0,
    0x4a004be4, 0x00464c05, 0x80031562, 0x46050aa0,
    0x5a0045e4, 0x00464605, 0x80021962, 0x47850aa0,
    0x5a004764, 0x00344785, 0x80021962, 0x48850aa0,
    0x5a004864, 0x00344885, 0x80021561, 0x4d670220,
    0x00425807, 0x00000000, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x51050220,
    0x02004ce4, 0x00004ae4, 0x80001301, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x4f050220,
    0x020046e4, 0x000044e4, 0x80031162, 0x48050aa0,
    0x5a0047e4, 0x00464805, 0x80021b62, 0x4d850aa0,
    0x4a004d64, 0x00344d85, 0x80021b62, 0x4e850aa0,
    0x4a004e64, 0x00344e85, 0x00040070, 0x00018660,
    0x16462905, 0x00000002, 0x80031162, 0x4e050aa0,
    0x4a004de4, 0x00464e05, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x2f530062, 0x4f014883,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x2f550062, 0x51014e83, 0x00040070, 0x00018660,
    0x16462b05, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x2f3a0062, 0x55205300,
    0x00040065, 0x00018220, 0x22462d05, 0x00000077,
    0x01040022, 0x0001c060, 0x00000090, 0x00000090,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x60560041, 0x00603302, 0x60580041, 0x00302b02,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x5a040e68, 0x0e0e5605, 0x58052905,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x2f058660, 0x02465a05, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x00000000, 0xea2a2f14, 0x01003a14,
    0x00040025, 0x00004600, 0x00000000, 0x00000070,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0xa05b0066, 0x5e223802, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00041a70, 0x00018220,
    0x22465b05, 0x00000000, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x5c050120,
    0x00003000, 0x00000000, 0x20311965, 0x5c003103,
    0x00040027, 0x00014060, 0x00000000, 0xfffff748,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0xa0600040, 0x01002203, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00040070, 0x00018220,
    0x22465e05, 0x00000000, 0x00041d61, 0x32050120,
    0x00003000, 0x00000000, 0x00041970, 0x00018660,
    0x16463205, 0x00000000, 0x01040028, 0x0001c660,
    0x000008f8, 0x000008f8, 0x0004004c, 0x62050220,
    0x00463205, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80041961, 0x10014110,
    0x00000000, 0x0c000c00, 0x00040069, 0x10018510,
    0x01566206, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0c000c00, 0xe0640961, 0x001b0004,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xac660070, 0x60006402, 0x00041965, 0x00010220,
    0x22466605, 0x00465e05, 0x01040062, 0x68058220,
    0x02461605, 0xff800000, 0x01040062, 0x6a058220,
    0x02461805, 0xff800000, 0x01040062, 0x6c058220,
    0x02460e05, 0x7f800000, 0x01040062, 0x6e058220,
    0x02461005, 0x7f800000, 0xa37a0b61, 0xff810000,
    0x607a0061, 0x00106800, 0xa37e0b61, 0xff810000,
    0x607e0061, 0x00106a00, 0xa3710a61, 0x7f810000,
    0x60710061, 0x00106c00, 0xa3730961, 0x7f810000,
    0x60730061, 0x00106e00, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x6b058220,
    0x02461a05, 0xff800000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x6f058220,
    0x02461205, 0x7f800000, 0x80031461, 0x47060220,
    0x00447a26, 0x00000000, 0x80031361, 0x54060220,
    0x00447e26, 0x00000000, 0x80031261, 0x68060220,
    0x00447126, 0x00000000, 0x80031161, 0x09060220,
    0x00447326, 0x00000000, 0xa3020e61, 0xff810000,
    0x60020061, 0x00106b00, 0xa3750d61, 0x7f810000,
    0x60750061, 0x00106f00, 0x00040070, 0x00018660,
    0x16462905, 0x00000001, 0x80031d62, 0x45060aa0,
    0x4a447a06, 0x00444706, 0x80030c62, 0x52060aa0,
    0x4a447e06, 0x00445406, 0x80031b62, 0x62060aa0,
    0x5a447106, 0x00446806, 0x80031a62, 0x07060aa0,
    0x5a447306, 0x00440906, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80031561, 0x3a060220,
    0x00447526, 0x00000000, 0x80030c61, 0x7a260220,
    0x00444506, 0x00000000, 0x80031561, 0x6f060220,
    0x00440226, 0x00000000, 0x80030b61, 0x7e260220,
    0x00445206, 0x00000000, 0x80030a61, 0x71260220,
    0x00446206, 0x00000000, 0x80030961, 0x73260220,
    0x00440706, 0x00000000, 0x80031e62, 0x38060aa0,
    0x5a447506, 0x00443a06, 0x80021d61, 0x4c070220,
    0x00427a47, 0x00000000, 0x80020061, 0x4a070220,
    0x00427a27, 0x00000000, 0x80031e62, 0x68060aa0,
    0x4a440206, 0x00446f06, 0x80021d61, 0x59070220,
    0x00427e47, 0x00000000, 0x80020061, 0x57070220,
    0x00427e27, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80020e61, 0x6d070220,
    0x00427147, 0x00000000, 0x80021761, 0x6b070220,
    0x00427127, 0x00000000, 0x80021f61, 0x1e070220,
    0x00427347, 0x00000000, 0x80020061, 0x0c070220,
    0x00427327, 0x00000000, 0x80031261, 0x75260220,
    0x00443806, 0x00000000, 0x80021f62, 0x48070aa0,
    0x4a424a07, 0x00424c07, 0x80031261, 0x02260220,
    0x00446806, 0x00000000, 0x80021f62, 0x55070aa0,
    0x4a425707, 0x00425907, 0x80021b62, 0x0a070aa0,
    0x5a420c07, 0x00421e07, 0x80021a61, 0x3f070220,
    0x00427547, 0x00000000, 0x80023c61, 0x3d070220,
    0x00427527, 0x00000000, 0x80021361, 0x7a470220,
    0x00424807, 0x00000000, 0x80021261, 0x7e470220,
    0x00425507, 0x00000000, 0x80021d62, 0x69070aa0,
    0x5a426b07, 0x00426d07, 0x80021261, 0x73470220,
    0x00420a07, 0x00000000, 0x80020a61, 0x0c070220,
    0x00420247, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80021d62, 0x3b070aa0,
    0x5a423d07, 0x00423f07, 0x80021c61, 0x51070220,
    0x00427a67, 0x00000000, 0x80020061, 0x4f070220,
    0x00427a27, 0x00000000, 0x80021d61, 0x62070220,
    0x00427e67, 0x00000000, 0x80020061, 0x5c070220,
    0x00427e27, 0x00000000, 0x80021261, 0x71470220,
    0x00426907, 0x00000000, 0x80021f61, 0x34070220,
    0x00427367, 0x00000000, 0x80023c61, 0x2f070220,
    0x00427327, 0x00000000, 0x80020061, 0x0a070220,
    0x00420227, 0x00000000, 0x80021161, 0x75470220,
    0x00423b07, 0x00000000, 0x80021f62, 0x4d070aa0,
    0x4a424f07, 0x00425107, 0x80021e62, 0x5a070aa0,
    0x4a425c07, 0x00426207, 0x80021d61, 0x06070220,
    0x00427167, 0x00000000, 0x80020061, 0x04070220,
    0x00427127, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80021d62, 0x26070aa0,
    0x5a422f07, 0x00423407, 0x80021c62, 0x08070aa0,
    0x4a420a07, 0x00420c07, 0x80021b61, 0x44070220,
    0x00427567, 0x00000000, 0x80020061, 0x42070220,
    0x00427527, 0x00000000, 0x80021461, 0x7a670220,
    0x00424d07, 0x00000000, 0x80021361, 0x7e670220,
    0x00425a07, 0x00000000, 0x80021d62, 0x6e070aa0,
    0x5a420407, 0x00420607, 0x80021361, 0x73670220,
    0x00422607, 0x00000000, 0x80021261, 0x02470220,
    0x00420807, 0x00000000, 0x80021d62, 0x40070aa0,
    0x5a424207, 0x00424407, 0x80021c62, 0x7a850aa0,
    0x4a007a64, 0x00347a85, 0x80021c62, 0x7b850aa0,
    0x4a007b64, 0x00347b85, 0x80021b62, 0x7e850aa0,
    0x4a007e64, 0x00347e85, 0x80021b62, 0x7f850aa0,
    0x4a007f64, 0x00347f85, 0x80021661, 0x71670220,
    0x00426e07, 0x00000000, 0x80021b62, 0x73850aa0,
    0x5a007364, 0x00347385, 0x80021b62, 0x74850aa0,
    0x5a007464, 0x00347485, 0x80020a61, 0x2f070220,
    0x00420267, 0x00000000, 0x80020061, 0x26070220,
    0x00420227, 0x00000000, 0x80021761, 0x75670220,
    0x00424007, 0x00000000, 0x80031562, 0x7b050aa0,
    0x4a007ae4, 0x00467b05, 0x80031462, 0x7f050aa0,
    0x4a007ee4, 0x00467f05, 0x80021c62, 0x71850aa0,
    0x5a007164, 0x00347185, 0x80021c62, 0x72850aa0,
    0x5a007264, 0x00347285, 0x80031562, 0x74050aa0,
    0x5a0073e4, 0x00467405, 0x80021a62, 0x1e070aa0,
    0x4a422607, 0x00422f07, 0x80021962, 0x75850aa0,
    0x5a007564, 0x00347585, 0x80021962, 0x76850aa0,
    0x5a007664, 0x00347685, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x06050220,
    0x02007fe4, 0x00007be4, 0x80031562, 0x72050aa0,
    0x5a0071e4, 0x00467205, 0x80021461, 0x02670220,
    0x00421e07, 0x00000000, 0x80031262, 0x76050aa0,
    0x5a0075e4, 0x00467605, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x04050220,
    0x020074e4, 0x000072e4, 0x80021a62, 0x02850aa0,
    0x4a000264, 0x00340285, 0x80021a62, 0x03850aa0,
    0x4a000364, 0x00340385, 0x00040070, 0x00018660,
    0x16462905, 0x00000002, 0x80031162, 0x03050aa0,
    0x4a0002e4, 0x00460305, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x2f080062, 0x04017683,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x2f0a0062, 0x06010383, 0x00040070, 0x00018660,
    0x16462b05, 0x00000000, 0x2f3d1a62, 0x0a200800,
    0x00040065, 0x00018220, 0x22462d05, 0x00000077,
    0x01040022, 0x0001c060, 0x000000a0, 0x000000a0,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x600b0041, 0x00606402, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x601e0041, 0x00302b02,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x26040e68, 0x0e0e0b05, 0x1e052905,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x3b058660, 0x02462605, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x00000000, 0xea2a3b14, 0x01003d14,
    0x00040025, 0x00004600, 0x00000000, 0x00000070,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0xa0270066, 0x5e226602, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00041a70, 0x00018220,
    0x22462705, 0x00000000, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x2f050120,
    0x00003000, 0x00000000, 0x20321965, 0x2f003203,
    0x00040027, 0x00014060, 0x00000000, 0xfffff6f8,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0xa0300040, 0x02002403, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00040070, 0x00018220,
    0x22465e05, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x33050120,
    0x00003000, 0x00000000, 0x00041970, 0x00018660,
    0x16463305, 0x00000000, 0x01040028, 0x0001c660,
    0x00000928, 0x00000928, 0x0004004c, 0x38050220,
    0x00463305, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80040061, 0x10014110,
    0x00000000, 0x06000600, 0x00040069, 0x10018510,
    0x01563806, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x06000600, 0xe03a0961, 0x001b0004,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0xac3c0070, 0x30003a02, 0x00041965, 0x00010220,
    0x22463c05, 0x00465e05, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x3e058220,
    0x02461605, 0xff800000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x40058220,
    0x02461805, 0xff800000, 0x01040062, 0x42058220,
    0x02460e05, 0x7f800000, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x44058220,
    0x02461005, 0x7f800000, 0xa34d0a61, 0xff810000,
    0x604d0061, 0x00103e00, 0xa34f0b61, 0xff810000,
    0x604f0061, 0x00104000, 0xa3470a61, 0x7f810000,
    0x60470061, 0x00104200, 0xa3491961, 0x7f810000,
    0x60490061, 0x00104400, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x41058220,
    0x02461a05, 0xff800000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x45058220,
    0x02461205, 0x7f800000, 0x80031461, 0x75060220,
    0x00444d26, 0x00000000, 0x80031361, 0x09060220,
    0x00444f26, 0x00000000, 0x80031261, 0x3e060220,
    0x00444726, 0x00000000, 0x80031161, 0x58060220,
    0x00444926, 0x00000000, 0xa3510e61, 0xff810000,
    0x60510061, 0x00104100, 0xa34b0d61, 0x7f810000,
    0x604b0061, 0x00104500, 0x00040070, 0x00018660,
    0x16462905, 0x00000001, 0x80031d62, 0x73060aa0,
    0x4a444d06, 0x00447506, 0x80030c62, 0x07060aa0,
    0x4a444f06, 0x00440906, 0x80031b62, 0x38060aa0,
    0x5a444706, 0x00443e06, 0x80030a62, 0x56060aa0,
    0x5a444906, 0x00445806, 0x80031561, 0x68060220,
    0x00444b26, 0x00000000, 0x80030c61, 0x4d260220,
    0x00447306, 0x00000000, 0x80031561, 0x45060220,
    0x00445126, 0x00000000, 0x80030b61, 0x4f260220,
    0x00440706, 0x00000000, 0x80030a61, 0x47260220,
    0x00443806, 0x00000000, 0x80030961, 0x49260220,
    0x00445606, 0x00000000, 0x80031e62, 0x66060aa0,
    0x5a444b06, 0x00446806, 0x80021d61, 0x7e070220,
    0x00424d47, 0x00000000, 0x80020061, 0x7a070220,
    0x00424d27, 0x00000000, 0x80031e62, 0x3f060aa0,
    0x4a445106, 0x00444506, 0x80021d61, 0x1e070220,
    0x00424f47, 0x00000000, 0x80020061, 0x0c070220,
    0x00424f27, 0x00000000, 0x80020e61, 0x43070220,
    0x00424747, 0x00000000, 0x80021761, 0x41070220,
    0x00424727, 0x00000000, 0x80021f61, 0x60070220,
    0x00424947, 0x00000000, 0x80020061, 0x5b070220,
    0x00424927, 0x00000000, 0x80031261, 0x4b260220,
    0x00446606, 0x00000000, 0x80021f62, 0x76070aa0,
    0x4a427a07, 0x00427e07, 0x80031261, 0x51260220,
    0x00443f06, 0x00000000, 0x80021f62, 0x0a070aa0,
    0x4a420c07, 0x00421e07, 0x80021b62, 0x59070aa0,
    0x5a425b07, 0x00426007, 0x80021a61, 0x6d070220,
    0x00424b47, 0x00000000, 0x80020061, 0x6b070220,
    0x00424b27, 0x00000000, 0x80021361, 0x4d470220,
    0x00427607, 0x00000000, 0x80021261, 0x4f470220,
    0x00420a07, 0x00000000, 0x80021d62, 0x3f070aa0,
    0x5a424107, 0x00424307, 0x80021261, 0x49470220,
    0x00425907, 0x00000000, 0x80020a61, 0x5b070220,
    0x00425147, 0x00000000, 0x80021d62, 0x69070aa0,
    0x5a426b07, 0x00426d07, 0x80021c61, 0x06070220,
    0x00424d67, 0x00000000, 0x80020061, 0x04070220,
    0x00424d27, 0x00000000, 0x80021d61, 0x38070220,
    0x00424f27, 0x00000000, 0x80021261, 0x47470220,
    0x00423f07, 0x00000000, 0x80021e61, 0x65070220,
    0x00424967, 0x00000000, 0x80020061, 0x63070220,
    0x00424927, 0x00000000, 0x80020061, 0x59070220,
    0x00425127, 0x00000000, 0x80021161, 0x4b470220,
    0x00426907, 0x00000000, 0x80021f62, 0x02070aa0,
    0x4a420407, 0x00420607, 0x80021d61, 0x55070220,
    0x00424767, 0x00000000, 0x80020061, 0x53070220,
    0x00424727, 0x00000000, 0x80021d62, 0x61070aa0,
    0x5a426307, 0x00426507, 0x80020061, 0x3e070220,
    0x00424f67, 0x00000000, 0x80021d62, 0x57070aa0,
    0x4a425907, 0x00425b07, 0x80021c61, 0x72070220,
    0x00424b67, 0x00000000, 0x80023b61, 0x70070220,
    0x00424b27, 0x00000000, 0x80021361, 0x4d670220,
    0x00420207, 0x00000000, 0x80021d62, 0x44070aa0,
    0x5a425307, 0x00425507, 0x80021361, 0x49670220,
    0x00426107, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80021d62, 0x26070aa0,
    0x4a423807, 0x00423e07, 0x80021361, 0x51470220,
    0x00425707, 0x00000000, 0x80021c62, 0x6e070aa0,
    0x5a427007, 0x00427207, 0x80021b62, 0x4d850aa0,
    0x4a004d64, 0x00344d85, 0x80021b62, 0x4e850aa0,
    0x4a004e64, 0x00344e85, 0x80021561, 0x47670220,
    0x00424407, 0x00000000, 0x80021b62, 0x49850aa0,
    0x5a004964, 0x00344985, 0x80021b62, 0x4a850aa0,
    0x5a004a64, 0x00344a85, 0x80021661, 0x4f670220,
    0x00422607, 0x00000000, 0x80020b61, 0x62070220,
    0x00425167, 0x00000000, 0x80020061, 0x60070220,
    0x00425127, 0x00000000, 0x80021561, 0x4b670220,
    0x00426e07, 0x00000000, 0x80031362, 0x4e050aa0,
    0x4a004de4, 0x00464e05, 0x80021d62, 0x47850aa0,
    0x5a004764, 0x00344785, 0x80021d62, 0x48850aa0,
    0x5a004864, 0x00344885, 0x80031462, 0x4a050aa0,
    0x5a0049e4, 0x00464a05, 0x80021c62, 0x4f850aa0,
    0x4a004f64, 0x00344f85, 0x80021c62, 0x50850aa0,
    0x4a005064, 0x00345085, 0x80021a62, 0x5c070aa0,
    0x4a426007, 0x00426207, 0x80021962, 0x4b850aa0,
    0x5a004b64, 0x00344b85, 0x80021962, 0x4c850aa0,
    0x5a004c64, 0x00344c85, 0x80031762, 0x48050aa0,
    0x5a0047e4, 0x00464805, 0x80031562, 0x50050aa0,
    0x4a004fe4, 0x00465005, 0x80021561, 0x51670220,
    0x00425c07, 0x00000000, 0x80031362, 0x4c050aa0,
    0x5a004be4, 0x00464c05, 0x80001301, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x53050220,
    0x02004ae4, 0x000048e4, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x55050220,
    0x020050e4, 0x00004ee4, 0x80021b62, 0x51850aa0,
    0x4a005164, 0x00345185, 0x80021b62, 0x52850aa0,
    0x4a005264, 0x00345285, 0x00040070, 0x00018660,
    0x16462905, 0x00000002, 0x80031162, 0x52050aa0,
    0x4a0051e4, 0x00465205, 0x80000b01, 0x00000000,
    0x00000000, 0x00000000, 0x2f570062, 0x53014c83,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x2f590062, 0x55015283, 0x00040070, 0x00018660,
    0x16462b05, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x2f400062, 0x59205700,
    0x00040065, 0x00018220, 0x22462d05, 0x00000077,
    0x01040022, 0x0001c060, 0x000000a0, 0x000000a0,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x605a0041, 0x00603a02, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x605c0041, 0x00302b02,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x60040e68, 0x0e0e5a05, 0x5c052905,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x3e058660, 0x02466005, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x00000000, 0xea2a3e14, 0x01004014,
    0x00040025, 0x00004600, 0x00000000, 0x00000070,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0xa0610066, 0x5e223c02, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00041a70, 0x00018220,
    0x22466105, 0x00000000, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x62050120,
    0x00003000, 0x00000000, 0x20331965, 0x62003303,
    0x00040027, 0x00014060, 0x00000000, 0xfffff6c8,
    0x00040061, 0x00010660, 0x20465e05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000108, 0x00000108,
    0x80000e01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x63058660, 0x02462005, 0x00000002,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0xa0410040, 0x48006303, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x00000000,
    0xea104114, 0x01000000, 0x00040069, 0x64058660,
    0x02462205, 0x00000002, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0423c40, 0x4c006403,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044d31, 0x00000000, 0xea104214, 0x01000000,
    0x00040069, 0x65058660, 0x02462405, 0x00000002,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xa0433d40, 0x50006503, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044e31, 0x00000000,
    0xea104314, 0x01000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80004f31, 0x660c0000,
    0xe23e000c, 0x00000000, 0x80002f01, 0x00000000,
    0x00000000, 0x00000000, 0x80030061, 0x67054220,
    0x00000000, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x80011961, 0x67550000,
    0x0000005c, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80044031, 0x00000000,
    0x3008670c, 0x00000000, 0x80040001, 0x00000000,
    0xe0000000, 0x00000000, 0x80001e01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x34050220,
    0x00463605, 0x00000000, 0x00041970, 0x00018220,
    0x42463405, 0x00000120, 0x01040028, 0x0001c660,
    0x000001d0, 0x000001d0, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x44058660,
    0x02463405, 0x00000002, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044e31, 0x49140000,
    0xea044414, 0x00040000, 0xae002e70, 0x7f804901,
    0x01040022, 0x0001c060, 0x00000140, 0x00000140,
    0xa0680040, 0x02c07803, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x276a0070, 0x78006803,
    0xa06c3e40, 0x44006802, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x276e0070, 0x68006c03,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x45060220, 0x00346c05, 0x00000000,
    0x80103e01, 0x00000000, 0x00000000, 0x00000000,
    0x80101601, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x47060220, 0x00346d05, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x70042e68, 0x0e2e6a05, 0x6e057c05,
    0x00131961, 0x47260220, 0x00347105, 0x00000000,
    0x00031a61, 0x45260220, 0x00347005, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x00000000, 0xfb2a4524, 0x01004914,
    0x00040025, 0x00004600, 0x00000000, 0x00000018,
    0xa0340040, 0x20003403, 0x00040027, 0x00014060,
    0x00000000, 0xfffffe20, 0x00000060, 0x00000000,
    0x00000000, 0x00000000, 0x00041a70, 0x00018220,
    0x42463605, 0x00000030, 0x01040028, 0x0001c660,
    0x00000200, 0x00000200, 0x80000c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x71058660,
    0x02463605, 0x00000002, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0xa04a0040, 0x48007103,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x4f140000, 0xea044a14, 0x00040000,
    0x00042e70, 0x00018660, 0x26464f05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000150, 0x00000150,
    0x80001601, 0x00000000, 0x00000000, 0x00000000,
    0xa0730040, 0x4ac07803, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x27750070, 0x78007303,
    0x80001301, 0x00000000, 0x00000000, 0x00000000,
    0xa07a0040, 0x71007302, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x277e0070, 0x73007a03,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x4b060220, 0x00347a05, 0x00000000,
    0x80103e01, 0x00000000, 0x00000000, 0x00000000,
    0x80101201, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x4d060220, 0x00347b05, 0x00000000,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x02042e68, 0x0e2e7505, 0x7e057c05,
    0x00131961, 0x4d260220, 0x00340305, 0x00000000,
    0x00031a61, 0x4b260220, 0x00340205, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x00000000, 0xfb184b24, 0x01004f14,
    0x00040025, 0x00004600, 0x00000000, 0x00000018,
    0xa0360040, 0x20003603, 0x00040027, 0x00014060,
    0x00000000, 0xfffffdf0, 0x80030a61, 0x7e050220,
    0x00460005, 0x00000000, 0x80040931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_BFS_BFS_pass1_initial_batchable = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 1344,
      .base.program_size = 12816,
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
const char *gfx125_bvh_build_BFS_BFS_pass1_initial_batchable_sha1 = "2356907bc535783010838cb0f8a9877e280f4412";

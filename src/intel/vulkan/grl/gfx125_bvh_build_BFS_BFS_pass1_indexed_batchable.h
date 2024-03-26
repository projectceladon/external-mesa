#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_BFS_BFS_pass1_indexed_batchable_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_BFS_BFS_pass1_indexed_batchable_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g31<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g58<1>UD        g0.1<0,1,0>UD                   { align1 1H };
mov(16)         g84<1>D         1D                              { align1 1H };
mov(16)         g60<1>UD        0x00000000UD                    { align1 1H };
mov(8)          g57<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(1)          g32<1>UD        g31<0,1,0>UD    0x00000000UD    { align1 WE_all 1N I@5 compacted };
mov(8)          g73.1<2>F       0x0F             /* 0F */       { align1 2Q };
add(8)          g57.8<1>UW      g57<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g32UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g73<2>F         0x0F             /* 0F */       { align1 2Q F@1 };
mov(8)          g62.1<2>UD      g73.1<8,4,2>UD                  { align1 2Q F@1 };
mov(8)          g62<2>UD        g73<8,4,2>UD                    { align1 2Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g53.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g75.1<2>F       g2.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g55.1<2>F       g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g77.1<2>F       g2.3<0,1,0>F                    { align1 2Q };
mov(8)          g53<2>F         g2<0,1,0>F                      { align1 1Q F@4 compacted };
mov(8)          g75<2>F         g2<0,1,0>F                      { align1 2Q F@4 compacted };
mov(8)          g55<2>F         g2.2<0,1,0>F                    { align1 1Q F@4 compacted };
mov(8)          g77<2>F         g2.2<0,1,0>F                    { align1 2Q F@4 compacted };
add(8)          g124<1>D        g53<8,4,2>D     1064D           { align1 1Q F@4 compacted };
add(8)          g88<1>D         g53<8,4,2>D     1068D           { align1 1Q compacted };
mov(8)          g79<1>UD        g53.1<8,4,2>UD                  { align1 1Q };
add(8)          g81<1>D         g75<8,4,2>D     1064D           { align1 2Q F@3 compacted };
add(8)          g89<1>D         g75<8,4,2>D     1068D           { align1 2Q compacted };
mov(8)          g80<1>UD        g75.1<8,4,2>UD                  { align1 2Q };
cmp.l.f0.0(8)   g125<1>UD       g124<8,8,1>UD   g53<8,4,2>UD    { align1 1Q I@6 };
mov(8)          g67<2>UD        g124<4,4,1>UD                   { align1 1Q };
cmp.l.f0.0(8)   g90<1>UD        g88<8,8,1>UD    g53<8,4,2>UD    { align1 1Q I@7 };
cmp.l.f0.0(8)   g82<1>UD        g81<8,8,1>UD    g75<8,4,2>UD    { align1 2Q I@6 };
mov(8)          g69<2>UD        g81<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(8)   g91<1>UD        g89<8,8,1>UD    g75<8,4,2>UD    { align1 2Q I@7 };
add(8)          g126<1>D        -g125<8,8,1>D   g53.1<8,4,2>D   { align1 1Q I@6 };
mov(8)          g123.1<2>F      0x0F             /* 0F */       { align1 1Q I@6 };
add(8)          g83<1>D         -g82<8,8,1>D    g75.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g67.1<2>UD      g126<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g123<2>F        0x0F             /* 0F */       { align1 1Q F@1 };
mov(8)          g69.1<2>UD      g83<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g121.1<2>UD     g123.1<8,4,2>UD                 { align1 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g86UD           g67UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
mov(8)          g121<2>UD       g123<8,4,2>UD                   { align1 1Q I@1 };

LABEL3:
shl(8)          g92<1>D         g121<8,4,2>D    0x00000002UD    { align1 1Q I@1 };
shl(8)          g93<1>D         g62<8,4,2>D     0x00000002UD    { align1 2Q I@3 };
add(16)         g94<1>D         g88<1,1,0>D     g92<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g96<1>UD        g94<1,1,0>UD    g88<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g100<2>UD       g94<4,4,1>UD                    { align1 1Q };
mov(8)          g102<2>UD       g95<4,4,1>UD                    { align1 2Q };
add3(16)        g98<1>D         -g90<8,8,1>D    g79<8,8,1>D     -g96<1,1,1>D { align1 1H I@3 };
mov(8)          g102.1<2>UD     g99<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g100.1<2>UD     g98<4,4,1>UD                    { align1 1Q I@2 };
fbl(1)          g106<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
add(16)         g112<1>W        g57<16,16,1>UW  -1W             { align1 WE_all 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
shl(1)          a0<1>UD         g106<0,1,0>UD   0x00000003UD    { align1 WE_all 1N A@3 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000c00UD    { align1 WE_all 1N A@1 };
mov(1)          g1<2>D          g[a0 128]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g1.1<2>D        g[a0 132]<0,1,0>D               { align1 WE_all 1N };
mov(1)          g5<2>UW         0x00000000UD                    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g68.1<2>UD      g1.1<0,1,0>UD                   { align1 WE_all 1Q I@2 };
mov(8)          g68<2>UD        g1<0,1,0>UD                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) g104UD   g68UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $1 };
mov(16)         g108<1>D        0D                              { align1 WE_all 1H $1.dst };
mov(16)         g108<1>D        g104<8,8,1>D                    { align1 1H };
mov(16)         a0<1>UW         0x0d80UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g112<8,8,1>W    0x0002UW        { align1 WE_all 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0d80UW        { align1 WE_all 1H A@1 };
mov(16)         g110<1>UD       g[a0]<VxH,1,0>UD                { align1 WE_all 1H A@1 compacted };
mov(1)          g110<1>D        0D                              { align1 WE_all 1N I@1 };
add(8)          g110.1<2>D      g110<8,4,2>D    g110.1<8,4,2>D  { align1 WE_all 1Q I@1 };
add(4)          g110.2<4>D      g110.1<8,2,4>D  g110.2<8,2,4>D  { align1 WE_all 1N I@1 };
add(4)          g110.3<4>D      g110.1<8,2,4>D  g110.3<8,2,4>D  { align1 WE_all 1N I@1 };
add(4)          g110.4<1>D      g110.3<0,1,0>D  g110.4<4,4,1>D  { align1 WE_all 1N I@1 };
add(4)          g111.4<1>D      g111.3<0,1,0>D  g111.4<4,4,1>D  { align1 WE_all 1N I@2 };
add(8)          g111<1>D        g110.7<0,1,0>D  g111<1,1,0>D    { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g113<1>D        g58<1,1,0>D     -g110<1,1,0>D   { align1 1H compacted };
cmp.l.f0.0(16)  g115<1>UD       g113<1,1,0>UD   g104<1,1,0>UD   { align1 1H I@1 compacted };
mov(1)          f0<1>UW         g5<0,1,0>UW                     { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g115<8,8,1>UD   0x00000000UD    { align1 1H I@2 };
mov.nz.f0.0(16) g117<1>UD       f0<0,1,0>UW                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
mov(16)         g64<1>UD        0xffffffffUD                    { align1 1H };
break(16)       JIP:  LABEL0          UIP:  LABEL1              { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };
add(16)         g119<1>D        g110<1,1,0>D    g104<1,1,0>D    { align1 1H compacted };
add(16)         g60<1>D         g60<1,1,0>D     16D             { align1 1H compacted };
add(16)         g58<1>D         g58<1,1,0>D     -g120.7<0,1,0>D { align1 1H I@2 compacted };
cmp.ge.f0.0(16) null<1>UD       g60<8,8,1>UD    g86<8,8,1>UD    { align1 1H @2 $1.dst };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL2              { align1 1H };
mov(16)         g64<1>UD        0x00000000UD                    { align1 1H I@7 };
break(16)       JIP:  LABEL2          UIP:  LABEL1              { align1 1H };

LABEL2:
endif(16)       JIP:  LABEL1                                    { align1 1H };
mov(8)          g121<2>UD       g60<4,4,1>UD                    { align1 1Q };
mov(8)          g62<2>UD        g61<4,4,1>UD                    { align1 2Q };
mov(8)          g121.1<2>UD     0x00000000UD                    { align1 1Q I@2 };
mov(8)          g62.1<2>UD      0x00000000UD                    { align1 2Q I@2 };

LABEL1:
while(16)       JIP:  LABEL3                                    { align1 1H };
mov.nz.f0.0(16) null<1>D        g64<8,8,1>D                     { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL4              { align1 1H };
fbl(16)         g120<1>UD       g117<8,8,1>UD                   { align1 1H I@3 };
cmp.z.f0.0(16)  null<1>D        g117<8,8,1>D    0D              { align1 1H };
(-f0.0) sel(16) g122<1>UD       g120<8,8,1>UD   0x00000020UD    { align1 1H I@2 };
add(16)         g65<1>D         g60<1,1,0>D     g122<1,1,0>D    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         a0<1>UW         0x0e20UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g122<16,8,2>W   0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0e20UW        { align1 1H A@1 };
mov(16)         g67<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
else(16)        JIP:  LABEL4          UIP:  LABEL4              { align1 1H };

LABEL5:
mov(16)         g65<1>UD        0x00000000UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
mov(16)         g67<1>UD        0x00000000UD                    { align1 1H };

LABEL4:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
add(8)          g123<1>D        g53<8,4,2>D     2092D           { align1 1Q };
add(8)          g124<1>D        g75<8,4,2>D     2092D           { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
shl(16)         g1<1>D          g65<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(8)          g27<1>D         g53<8,4,2>D     11308D          { align1 1Q };
add(8)          g28<1>D         g75<8,4,2>D     11308D          { align1 2Q };
mov(8)          g86<1>UW        0x76543210UV                    { align1 WE_all 1Q $1.dst };
cmp.l.f0.0(16)  g125<1>UD       g123<1,1,0>UD   0x0000082cUD    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
add(16)         g3<1>D          g123<1,1,0>D    g1<1,1,0>D      { align1 1H compacted };
mov(8)          g86<1>UD        g86<8,8,1>UW                    { align1 WE_all 1Q I@3 };
cmp.l.f0.0(16)  g5<1>UD         g3<1,1,0>UD     g123<1,1,0>UD   { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g69<2>UD        g3<4,4,1>UD                     { align1 1Q };
mov(8)          g71<2>UD        g4<4,4,1>UD                     { align1 2Q };
add(8)          g87<1>UD        g86<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q @4 $1.dst compacted };
add3(16)        g7<1>D          -g125<8,8,1>D   g79<8,8,1>D     -g5<1,1,1>D { align1 1H I@4 };
shl(16)         g86<1>UD        g86<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
mov(8)          g71.1<2>UD      g8<4,4,1>UD                     { align1 2Q I@2 };
mov(8)          g69.1<2>UD      g7<4,4,1>UD                     { align1 1Q I@3 };
add(16)         g86<1>UD        g86<1,1,0>UD    0x00000100UD    { align1 WE_all 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g8UD            g69UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
mov(16)         g10<1>UD        g8<16,8,2>UW                    { align1 1H $2.dst };
mov(16)         g30<1>UD        g8.1<16,8,2>UW                  { align1 1H };
mul(16)         g15<1>D         g10<1,1,0>D     88W             { align1 1H I@2 compacted };
mul(8)          acc0<1>UD       g10<8,8,1>UD    0x0058UW        { align1 1Q };
asr(16)         g12<1>D         g10<8,8,1>D     0x0000001fUD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mul(16)         g32<1>D         g30<1,1,0>D     1484W           { align1 1H I@4 compacted };
add(8)          g22<1>D         g55<8,4,2>D     g15<1,1,0>D     { align1 1Q A@4 compacted };
add(8)          g23<1>D         g77<8,4,2>D     g16<1,1,0>D     { align1 2Q A@3 compacted };
mach(8)         g14<1>UD        g10<1,1,0>UD    0x00000058UD    { align1 1Q compacted AccWrEnable };
mul(16)         g16<1>D         g12<1,1,0>D     88W             { align1 1H I@5 compacted };
add(16)         g81<1>D         g27<1,1,0>D     g32<1,1,0>D     { align1 1H I@5 compacted };
cmp.l.f0.0(8)   g24<1>UD        g22<8,8,1>UD    g55<8,4,2>UD    { align1 1Q I@5 };
cmp.l.f0.0(8)   g29<1>UD        g27<8,8,1>UD    g53<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(8)   g25<1>UD        g23<8,8,1>UD    g77<8,4,2>UD    { align1 2Q I@6 };
add(16)         g47<1>D         g22<1,1,0>D     52D             { align1 1H compacted };
add(16)         g39<1>D         g22<1,1,0>D     16D             { align1 1H compacted };
mul(8)          acc0<1>UD       g11<8,8,1>UD    0x0058UW        { align1 2Q };
cmp.l.f0.0(8)   g30<1>UD        g28<8,8,1>UD    g75<8,4,2>UD    { align1 2Q };
mach(8)         g15<1>UD        g11<8,8,1>UD    0x00000058UD    { align1 2Q AccWrEnable };
add(16)         g18<1>D         g14<1,1,0>D     g16<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g86UD           g81UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $3 };
mov(8)          g89<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g64<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g89<1>UD        g89<8,8,1>UW                    { align1 WE_all 1Q I@2 };
mov(8)          g64<1>UD        g64<8,8,1>UW                    { align1 WE_all 1Q I@2 };
add(8)          g90<1>UD        g89<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
add(8)          g65<1>UD        g64<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
shl(16)         g89<1>UD        g89<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
shl(16)         g64<1>UD        g64<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
add(16)         g89<1>UD        g89<1,1,0>UD    0x00000100UD    { align1 WE_all 1H I@2 compacted };
add(16)         g64<1>UD        g64<1,1,0>UD    0x000000c0UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g87UD           g89UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
cmp.l.f0.0(16)  g33<1>UD        g87<1,1,0>UD    g27<1,1,0>UD    { align1 1H compacted };
add3(16)        g62<1>D         -g29<8,8,1>D    g79<8,8,1>D     -g33<1,1,1>D { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g64UD           g62UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $5 };
mov(8)          g91<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g66<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g93<1>UW        0x76543210UV                    { align1 WE_all 2Q };
mov(8)          g74<1>UW        0x76543210UV                    { align1 WE_all 2Q };
mov(8)          g20<1>UD        g55.1<8,4,2>UD                  { align1 1Q };
mov(8)          g21<1>UD        g77.1<8,4,2>UD                  { align1 2Q };
mov(8)          g114<1>UW       0x76543210UV                    { align1 WE_all 1Q };
and(16)         g76<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 1H compacted };
mov(8)          g91<1>UD        g91<8,8,1>UW                    { align1 WE_all 1Q I@7 };
mov(8)          g66<1>UD        g66<8,8,1>UW                    { align1 WE_all 1Q I@7 };
mov(8)          g93<1>UD        g93<8,8,1>UW                    { align1 WE_all 2Q I@7 };
mov(8)          g74<1>UD        g74<8,8,1>UW                    { align1 WE_all 2Q I@7 };
add3(16)        g26<1>D         g20<8,8,1>D     g18<8,8,1>D     -g24<1,1,1>D { align1 1H I@7 };
mov(8)          g114<1>UD       g114<8,8,1>UW                   { align1 WE_all 1Q I@7 };
shl(16)         g78<1>D         g76<8,8,1>D     0x00000004UD    { align1 1H I@7 };
shl(8)          g91<1>UD        g91<1,1,0>UD    0x00000002UD    { align1 WE_all 1Q I@7 compacted };
shl(8)          g66<1>UD        g66<1,1,0>UD    0x00000002UD    { align1 WE_all 1Q I@7 compacted };
shl(8)          g93<1>UD        g93<8,8,1>UD    0x00000002UD    { align1 WE_all 2Q I@7 };
shl(8)          g74<1>UD        g74<8,8,1>UD    0x00000002UD    { align1 WE_all 2Q I@7 };
add(8)          g115<1>UD       g114<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@6 compacted };
add(8)          g91<1>UD        g91<1,1,0>UD    0x00000100UD    { align1 WE_all 1Q I@5 compacted };
add(8)          g66<1>UD        g66<1,1,0>UD    0x000000c0UD    { align1 WE_all 1Q I@5 compacted };
add(8)          g93<1>UD        g93<8,8,1>UD    0x00000120UD    { align1 WE_all 2Q I@5 };
add(8)          g74<1>UD        g74<8,8,1>UD    0x000000e0UD    { align1 WE_all 2Q I@5 };
shl(16)         g114<1>UD       g114<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(8)         g90UD           g91UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1Q @1 $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(8)         g65UD           g66UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1Q @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@3 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 3N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 3N };
send(8)         g92UD           g93UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 2Q @1 $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 3N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 3N };
send(8)         g69UD           g74UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 2Q @1 $9 };
add(16)         g114<1>UD       g114<1,1,0>UD   0x00000180UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
mov(8)          g70<2>UD        g90<4,4,1>UD                    { align1 1Q $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $8.dst };
mov(8)          g72<2>UD        g92<4,4,1>UD                    { align1 2Q $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
mov(8)          g70.1<2>UD      g65<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $9.dst };
mov(8)          g72.1<2>UD      g69<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g31UD           g70UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g71<2>UD        g47<4,4,1>UD                    { align1 1Q $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $9.src };
mov(8)          g73<2>UD        g48<4,4,1>UD                    { align1 2Q $10.src };
and(16)         g41<1>UD        g37<1,1,0>UD    0x00000001UD    { align1 1H $10.dst compacted };
cmp.nz.f0.0(16) g43<1>D         g41<1,1,0>D     0D              { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g49<1>UD        g47<1,1,0>UD    g22<1,1,0>UD    { align1 1H compacted };
mov(16)         g41<1>D         g57<8,8,1>UW                    { align1 1H };
mov(16)         g6<2>W          -g43<8,8,1>D                    { align1 1H I@3 };
add(16)         g51<1>D         -g49<1,1,0>D    g26<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g80<1>D         g41<1,1,0>D     g78<1,1,0>D     { align1 1H I@3 compacted };
and(16)         g45<1>UW        g6<16,8,2>UW    0x0001UW        { align1 1H I@3 };
mov(8)          g73.1<2>UD      g52<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g71.1<2>UD      g51<4,4,1>UD                    { align1 1Q I@4 };
and(16)         g112<1>UD       g80<1,1,0>UD    0x000001ffUD    { align1 1H I@4 compacted };
mov(16)         g46<1>W         g45<32,16,2>B                   { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g52UD           g71UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $11 };
cmp.nz.f0.0(16) g60<1>W         g46<16,16,1>W   0W              { align1 1H I@1 };
mov(16)         g58<1>D         g60<8,8,1>W                     { align1 1H I@1 };
mov(16)         g7<2>W          -g58<8,8,1>D                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
and(16)         g62<1>UW        g7<16,8,2>UW    0x0001UW        { align1 1H I@1 };
mov.nz.f0.0(16) null<1>W        g62<32,16,2>B                   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
(+f0.0) sel(16) g63<1>UD        g52<1,1,0>UD    0x00000000UD    { align1 1H $11.dst compacted };
cmp.l.f0.0(16)  g72<1>UD        g39<1,1,0>UD    g22<1,1,0>UD    { align1 1H $11.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(16)         g74<1>D         -g72<1,1,0>D    g26<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g114UD          g112UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shl(16)         g65<1>D         g67<8,8,1>D     0x00000009UD    { align1 1H };
mov(8)          g117<1>UW       0x76543210UV                    { align1 WE_all 1Q };
add(16)         g67<1>D         g31<1,1,0>D     g65<1,1,0>D     { align1 1H @2 $10.dst compacted };
mov(8)          g117<1>UD       g117<8,8,1>UW                   { align1 WE_all 1Q I@2 };
mov(8)          g76<2>UD        g22<4,4,1>UD                    { align1 1Q };
mov(8)          g78<2>UD        g23<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g69<1>D         g67<1,1,0>D     512D            { align1 1H I@4 compacted };
add(8)          g118<1>UD       g117<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@4 compacted };
mov(8)          g76.1<2>UD      g26<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g78.1<2>UD      g27<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.l(16)       g71<1>UD        g69<1,1,0>UD    g33<1,1,0>UD    { align1 1H @4 $10.dst compacted };
shl(16)         g117<1>UD       g117<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g53UD           g76UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $12 };
add(16)         g117<1>UD       g117<1,1,0>UD   0x00000180UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g115UD          g117UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
add(16)         g81<1>D         g67<1,1,0>D     g115<1,1,0>D    { align1 1H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g86<1>UD        g81<1,1,0>UD    g67<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g88<1>UD        g81<1,1,0>UD    g71<1,1,0>UD    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
and(16)         g90<1>UD        ~g86<8,8,1>D    g88<8,8,1>UD    { align1 1H I@1 };
mov(16)         g8<2>W          -g90<8,8,1>D                    { align1 1H I@1 };
and(16)         g92<1>UW        g8<16,8,2>UW    0x0001UW        { align1 1H I@1 };
mov(8)          g88<2>UD        g39<4,4,1>UD                    { align1 1Q };
mov(8)          g90<2>UD        g40<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g93<1>W         g92<32,16,2>B                   { align1 1H I@3 };
mov(8)          g88.1<2>UD      g74<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g90.1<2>UD      g75<4,4,1>UD                    { align1 2Q I@3 };
cmp.nz.f0.0(16) g96<1>W         g93<16,16,1>W   0W              { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g75UD           g88UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $14 };
mov.nz.f0.0(16) g94<1>D         g96<8,8,1>W                     { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
add(16)         g97<1>D         g63<1,1,0>D     g81<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g99<1>UD        g97<1,1,0>UD    g63<1,1,0>UD    { align1 1H I@1 compacted };
shr(16)         g106<1>UD       g97<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
add(16)         g101<1>D        -g99<1,1,0>D    -g86<1,1,0>D    { align1 1H I@2 compacted };
shl(16)         g104<1>D        g101<8,8,1>D    0x00000002UD    { align1 1H I@1 };
shl(16)         g102<1>D        g97<8,8,1>D     0x00000002UD    { align1 1H };
or(16)          g108<1>UD       g104<1,1,0>UD   g106<1,1,0>UD   { align1 1H I@2 compacted };
add(16)         g110<1>D        g53<1,1,0>D     g102<1,1,0>D    { align1 1H @2 $12.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
cmp.l.f0.0(16)  g112<1>UD       g110<1,1,0>UD   g53<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g89<2>UD        g110<4,4,1>UD                   { align1 1Q $14.src };
mov(8)          g91<2>UD        g111<4,4,1>UD                   { align1 2Q $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add3(16)        g114<1>D        g55<8,8,1>D     g108<8,8,1>D    -g112<1,1,1>D { align1 1H $12.dst };
mov(8)          g91.1<2>UD      g115<4,4,1>UD                   { align1 2Q I@1 };
mov(8)          g89.1<2>UD      g114<4,4,1>UD                   { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g68UD           g89UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $14 };
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
mov(16)         g68<1>UD        0x00000000UD                    { align1 1H $14.dst };

LABEL7:
endif(16)       JIP:  LABEL9                                    { align1 1H };

LABEL9:
add(16)         g115<1>D        g75<1,1,0>D     32D             { align1 1H $14.dst compacted };
shl(16)         g121<1>D        g35<8,8,1>D     0x00000005UD    { align1 1H $10.dst };
shr(16)         g123<1>UD       g35<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
cmp.l.f0.0(16)  g117<1>UD       g115<1,1,0>UD   g75<1,1,0>UD    { align1 1H I@3 compacted };
add(16)         g125<1>D        g115<1,1,0>D    g121<1,1,0>D    { align1 1H I@3 compacted };
add(16)         g119<1>D        -g117<1,1,0>D   g77<1,1,0>D     { align1 1H @2 $14.dst compacted };
cmp.l.f0.0(16)  g1<1>UD         g125<1,1,0>UD   g115<1,1,0>UD   { align1 1H I@2 compacted };
add(16)         g5<1>D          g125<1,1,0>D    16D             { align1 1H compacted };
mov(8)          g90<2>UD        g125<4,4,1>UD                   { align1 1Q $14.src };
mov(8)          g92<2>UD        g126<4,4,1>UD                   { align1 2Q $14.src };
add3(16)        g3<1>D          g119<8,8,1>D    g123<8,8,1>D    -g1<1,1,1>D { align1 1H I@4 };
cmp.l.f0.0(16)  g7<1>UD         g5<1,1,0>UD     0x00000010UD    { align1 1H I@4 compacted };
mov(8)          g96<2>UD        g5<4,4,1>UD                     { align1 1Q };
mov(8)          g98<2>UD        g6<4,4,1>UD                     { align1 2Q };
mov(8)          g92.1<2>UD      g4<4,4,1>UD                     { align1 2Q I@4 };
mov(8)          g90.1<2>UD      g3<4,4,1>UD                     { align1 1Q I@5 };
add(16)         g9<1>D          -g7<1,1,0>D     g3<1,1,0>D      { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g43UD           g90UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $15 };
mov(8)          g98.1<2>UD      g10<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g96.1<2>UD      g9<4,4,1>UD                     { align1 1Q I@2 };
add(16)         g11<1>F         g49<1,1,0>F     -g43<1,1,0>F    { align1 1H $15.dst compacted };
sel.ge(16)      g17<1>F         g11<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@1 };
cmp.l.f0.0(16)  g30<1>F         g17<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H F@1 };
math inv(16)    g21<1>F         g17<8,8,1>F     null<8,8,1>F    { align1 1H $0 };
cmp.g.f0.0(16)  g32<1>F         g11<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g10UD           g96UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $12 };
mul(16)         g23<1>F         g21<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H $0.dst };
and.nz.f0.0(16) null<1>UD       g30<8,8,1>UD    g32<8,8,1>UD    { align1 1H F@2 };
(+f0.0) sel(16) g33<1>UD        g23<1,1,0>UD    0x00000000UD    { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
add(16)         g14<1>F         g10<1,1,0>F     -g45<1,1,0>F    { align1 1H $12.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g16<1>F         g12<1,1,0>F     -g47<1,1,0>F    { align1 1H $12.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sel.ge(16)      g18<1>F         g14<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@2 };
cmp.g.f0.0(16)  g35<1>F         g14<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
sel.ge(16)      g20<1>F         g16<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@3 };
mov(16)         g9<2>W          -g94<8,8,1>D                    { align1 1H F@5 };
cmp.l.f0.0(16)  g37<1>F         g18<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
math inv(16)    g24<1>F         g18<8,8,1>F     null<8,8,1>F    { align1 1H $12 };
math inv(16)    g27<1>F         g20<8,8,1>F     null<8,8,1>F    { align1 1H @2 $1 };
and(16)         g64<1>UW        g9<16,8,2>UW    0x0001UW        { align1 1H I@1 };
and.nz.f0.0(16) null<1>UD       g37<8,8,1>UD    g35<8,8,1>UD    { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mul(16)         g29<1>F         g27<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H I@5 };
mov(16)         g65<1>W         g64<32,16,2>B                   { align1 1H I@2 };
mul(16)         g26<1>F         g24<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H $12.dst };
(+f0.0) sel(16) g38<1>UD        g26<1,1,0>UD    0x00000000UD    { align1 1H F@1 compacted };
cmp.g.f0.0(16)  g51<1>F         g16<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
cmp.l.f0.0(16)  g61<1>F         g20<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H $1.src };
and.nz.f0.0(16) null<1>UD       g61<8,8,1>UD    g51<8,8,1>UD    { align1 1H F@1 };
(+f0.0) sel(16) g62<1>UD        g29<1,1,0>UD    0x00000000UD    { align1 1H F@4 compacted };
cmp.nz.f0.0(16) g70<1>W         g65<16,16,1>W   0W              { align1 1H I@4 };
mov.nz.f0.0(16) g66<1>D         g70<8,8,1>W                     { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL10             { align1 1H };
shl(16)         g71<1>D         g68<8,8,1>D     0x00000005UD    { align1 1H $14.dst };
add(16)         g74<1>D         g57<1,1,0>D     g71<1,1,0>D     { align1 1H @1 $12.dst compacted };
shr(16)         g72<1>UD        g68<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
cmp.l.f0.0(16)  g76<1>UD        g74<1,1,0>UD    g57<1,1,0>UD    { align1 1H I@2 compacted };
add(16)         g80<1>D         g74<1,1,0>D     16D             { align1 1H compacted };
mov(8)          g97<2>UD        g74<4,4,1>UD                    { align1 1Q $12.src };
mov(8)          g99<2>UD        g75<4,4,1>UD                    { align1 2Q $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add3(16)        g78<1>D         g59<8,8,1>D     g72<8,8,1>D     -g76<1,1,1>D { align1 1H $12.dst };
cmp.l.f0.0(16)  g82<1>UD        g80<1,1,0>UD    g74<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g99.1<2>UD      g79<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g97.1<2>UD      g78<4,4,1>UD                    { align1 1Q I@3 };
add(16)         g86<1>D         -g82<1,1,0>D    g78<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g3UD            g97UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $12 };
mov(8)          g98<2>UD        g80<4,4,1>UD                    { align1 1Q $12.src };
mov(8)          g100<2>UD       g81<4,4,1>UD                    { align1 2Q $12.src };
mov(8)          g98.1<2>UD      g86<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g100.1<2>UD     g87<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g11UD           g98UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $12 };

LABEL10:
endif(16)       JIP:  LABEL11                                   { align1 1H };

LABEL11:
mov(8)          g120<1>UW       0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g120<1>UD       g120<8,8,1>UW                   { align1 WE_all 1Q I@1 };
add(8)          g121<1>UD       g120<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g120<1>UD       g120<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g120<1>UD       g120<1,1,0>UD   0x00000180UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g118UD          g120UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
shl(16)         g69<1>D         g118<8,8,1>D    0x00000002UD    { align1 1H $14.dst };
mov(16)         g71<1>UD        g69<8,8,1>UD                    { align1 1H I@1 };

LABEL13:
cmp.ge.f0.0(16) null<1>UD       g71<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL12       UIP:  LABEL12             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
shl(16)         g99<1>D         g71<8,8,1>D     0x00000002UD    { align1 1H };
mov(16)         g51<1>UD        0x7f800000UD                    { align1 1H $12.src };
mov(16)         g53<1>UD        0x7f800000UD                    { align1 1H $12.dst };
mov(16)         g55<1>UD        0x7f800000UD                    { align1 1H $12.dst };
mov(16)         g57<1>UD        0x7f800000UD                    { align1 1H $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g99UD           g51UD           0x0400f506                0x00000200
                            slm MsgDesc: ( store_cmask, a32, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 8 flat ) base_offset 0  { align1 1H $12 };
add(16)         g71<1>D         g71<8,8,1>D     2048D           { align1 1H };

LABEL12:
while(16)       JIP:  LABEL13                                   { align1 1H };

LABEL15:
cmp.ge.f0.0(16) null<1>UD       g69<8,8,1>UD    0x00000030UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL14       UIP:  LABEL14             { align1 1H };
shl(16)         g87<1>D         g69<8,8,1>D     0x00000002UD    { align1 1H $14.src };
mov(16)         g52<1>UD        0x00000000UD                    { align1 1H $12.dst };
mov(16)         g54<1>UD        0x00000000UD                    { align1 1H $12.dst };
mov(16)         g56<1>UD        0x00000000UD                    { align1 1H $12.dst };
mov(16)         g58<1>UD        0x00000000UD                    { align1 1H $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g100<1>D        g87<1,1,0>D     1152D           { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g100UD          g52UD           0x0400f506                0x00000200
                            slm MsgDesc: ( store_cmask, a32, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 8 flat ) base_offset 0  { align1 1H $12 };
add(16)         g69<1>D         g69<8,8,1>D     2048D           { align1 1H };

LABEL14:
while(16)       JIP:  LABEL15                                   { align1 1H };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(1)         g88UD           g0UD            nullUD          0x0210111f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, evict, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
mov(8)          g89<1>UD        0x00000000UD                    { align1 WE_all 1Q $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(2)          g89.10<1>UB     g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g89UD           nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $4 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(8)          g55<1>UW        0x76543210UV                    { align1 WE_all 1Q $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         g19<2>W         -g66<8,8,1>D                    { align1 1H F@1 };
mov(8)          g55<1>UD        g55<8,8,1>UW                    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
and(16)         g100<1>UW       g19<16,8,2>UW   0x0001UW        { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(8)          g56<1>UD        g55<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q $12.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         g101<1>W        g100<32,16,2>B                  { align1 1H I@2 };
shl(16)         g55<1>UD        g55<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
cmp.nz.f0.0(16) g102<1>W        g101<16,16,1>W  0W              { align1 1H I@2 };
add(16)         g55<1>UD        g55<1,1,0>UD    0x00000080UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g53<1>D         g102<8,8,1>W                    { align1 1H $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g55UD           g53UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $12 };
mov(8)          g58<1>UW        0x76543210UV                    { align1 WE_all 1Q $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g90<1>F         g3<1,1,0>F      g11<1,1,0>F     { align1 1H $12.dst compacted };
mov(8)          g108<1>UW       0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g58<1>UD        g58<8,8,1>UW                    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g93<1>F         g90<1,1,0>F     -g43<1,1,0>F    { align1 1H F@1 compacted };
mov(8)          g108<1>UD       g108<8,8,1>UW                   { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(8)          g59<1>UD        g58<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q $12.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mul(16)         g96<1>F         g93<1,1,0>F     g33<1,1,0>F     { align1 1H F@1 compacted };
add(8)          g109<1>UD       g108<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@2 compacted };
shl(16)         g58<1>UD        g58<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
shl(16)         g108<1>UD       g108<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@2 compacted };
add(16)         g58<1>UD        g58<1,1,0>UD    0x00000080UD    { align1 WE_all 1H I@2 compacted };
add(16)         g108<1>UD       g108<1,1,0>UD   0x00000140UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g56UD           g58UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
mov(16)         g20<2>W         -g56<8,8,1>D                    { align1 1H F@4 };
and(16)         g104<1>UW       g20<16,8,2>UW   0x0001UW        { align1 1H I@1 };
mov(16)         g105<1>W        g104<32,16,2>B                  { align1 1H I@1 };
cmp.nz.f0.0(16) g106<1>W        g105<16,16,1>W  0W              { align1 1H I@1 };
mov(16)         g19<1>D         g106<8,8,1>W                    { align1 1H I@1 };
mov(16)         g106<1>UD       g96<8,8,1>F                     { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g108UD          g106UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g91<1>F         g5<1,1,0>F      g13<1,1,0>F     { align1 1H $12.dst compacted };
mov(8)          g35<1>UW        0x76543210UV                    { align1 WE_all 1Q };
add(16)         g94<1>F         g91<1,1,0>F     -g45<1,1,0>F    { align1 1H F@1 compacted };
mov(8)          g35<1>UD        g35<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mul(16)         g97<1>F         g94<1,1,0>F     g38<1,1,0>F     { align1 1H A@1 compacted };
add(8)          g36<1>UD        g35<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
mov(16)         g33<1>UD        g97<8,8,1>F                     { align1 1H F@1 };
shl(16)         g35<1>UD        g35<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
add(16)         g35<1>UD        g35<1,1,0>UD    0x00000000UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g35UD           g33UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $6 };
add(16)         g92<1>F         g7<1,1,0>F      g15<1,1,0>F     { align1 1H $12.dst compacted };
mov(8)          g46<1>UW        0x76543210UV                    { align1 WE_all 1Q F@3 };
add(16)         g95<1>F         g92<1,1,0>F     -g47<1,1,0>F    { align1 1H A@1 compacted };
mov(8)          g46<1>UD        g46<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mul(16)         g98<1>F         g95<1,1,0>F     g62<1,1,0>F     { align1 1H A@1 compacted };
add(8)          g47<1>UD        g46<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@1 compacted };
mov(16)         g44<1>UD        g98<8,8,1>F                     { align1 1H F@1 };
shl(16)         g46<1>UD        g46<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
add(16)         g46<1>UD        g46<1,1,0>UD    0x00000040UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g46UD           g44UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $7 };
mov(1)          g21<2>UW        0x00000000UD                    { align1 WE_all 1N };
mov(1)          f0<1>UW         g21<0,1,0>UW                    { align1 WE_all 1N I@1 };
cmp.nz.f0.0(16) null<1>UD       g19<8,8,1>UD    0x00000000UD    { align1 1H };
mov(16)         g1<1>UD         f0<0,1,0>UW                     { align1 1H };
shl(16)         g107<1>D        g84<8,8,1>D     g41<8,8,1>UD    { align1 1H $12.src };
and(16)         g21<1>UD        g41<1,1,0>UD    0x00000003UD    { align1 1H compacted };
shr(16)         g23<1>UD        g41<1,1,0>UD    0x00000002UD    { align1 1H compacted };
and(16)         g25<1>UD        g107<1,1,0>UD   0x00000077UD    { align1 1H I@3 compacted };

LABEL18:
cmp.z.f0.0(16)  null<1>D        g1<8,8,1>D      0D              { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL16       UIP:  LABEL16             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
fbl(16)         g33<1>UD        g1<8,8,1>UD                     { align1 1H F@1 };
mov(8)          g31<1>UW        0x76543210UV                    { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g31<1>UD        g31<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(8)          g32<1>UD        g31<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@1 compacted };
shl(16)         g31<1>UD        g31<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g31<1>UD        g31<1,1,0>UD    0x00000140UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g29UD           g31UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $9 };
mov(8)          g31<1>UW        0x76543210UV                    { align1 WE_all 1Q $9.src };
mov(8)          g31<1>UD        g31<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(8)          g32<1>UD        g31<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g31<1>UD        g31<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g31<1>UD        g31<1,1,0>UD    0x00000140UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
mov(16)         a0<1>UW         0x03a0UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g33<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x03a0UW        { align1 1H A@1 };
mov(16)         g27<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g29UD           g31UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
cmp.z.f0.0(16)  g33<1>D         g27<1,1,0>D     g29<1,1,0>D     { align1 1H I@1 compacted };
and(16)         g29<1>UD        g33<1,1,0>UD    g19<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(16)         g31<2>W         -g29<8,8,1>D                    { align1 1H I@1 };
and(16)         g126<1>UW       g31<16,8,2>UW   0x0001UW        { align1 1H I@1 };
mov(16)         g127<1>W        g126<32,16,2>B                  { align1 1H I@1 };
cmp.nz.f0.0(16) g31<1>W         g127<16,16,1>W  0W              { align1 1H I@1 };
mov.nz.f0.0(16) g29<1>D         g31<8,8,1>W                     { align1 1H I@1 };
(+f0.0) sel(16) g31<1>UD        g11<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g33<1>UD        g3<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
(+f0.0) sel(16) g35<1>UD        g5<8,8,1>UD     0x7f800000UD    { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
(+f0.0) sel(16) g43<1>UD        g7<8,8,1>UD     0x7f800000UD    { align1 1H F@7 };
mov(16)         g37<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g37<1>F         g31<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g31<1>UD        g13<8,8,1>UD    0xff800000UD    { align1 1H };
mov(8)          g85<2>UD        g37.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(16)         g39<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@2 compacted };
mov(16)         g39<1>F         g31<1,1,0>F                     { align1 1H compacted };
mov(16)         g31<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@5 compacted };
mov(16)         g31<1>F         g33<1,1,0>F                     { align1 1H compacted };
mov(16)         g33<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@4 compacted };
mov(16)         g33<1>F         g35<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g35<1>UD        g15<8,8,1>UD    0xff800000UD    { align1 1H };
mov(8)          g99<2>UD        g39.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g45<2>UD        g31.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
mov(8)          g59<2>UD        g33.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(16)         g41<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g41<1>F         g35<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g21<8,8,1>D     1D              { align1 1H };
mov(16)         g35<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@7 compacted };
mov(16)         g35<1>F         g43<1,1,0>F                     { align1 1H compacted };
sel.l(8)        g43<2>F         g31<8,4,2>F     g45<8,4,2>F     { align1 WE_all 1Q I@3 };
mov(8)          g31.1<2>UD      g43<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(8)          g45<2>UD        g35.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(4)          g49<4>UD        g31.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g51<4>UD        g31.2<8,2,4>UD                  { align1 WE_all 1N $12.src };
sel.l(8)        g43<2>F         g33<8,4,2>F     g59<8,4,2>F     { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.l(4)        g47<4>F         g49<8,2,4>F     g51<8,2,4>F     { align1 WE_all 1N A@1 };
mov(8)          g33.1<2>UD      g43<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g59<2>UD        g41.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(4)          g31.2<4>UD      g47<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g63<4>UD        g33.1<8,2,4>UD                  { align1 WE_all 1N A@3 };
mov(4)          g65<4>UD        g33.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g43<2>F         g37<8,4,2>F     g85<8,4,2>F     { align1 WE_all 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g55<4>UD        g31.1<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g57<4>UD        g31.3<8,2,4>UD                  { align1 WE_all 1N $5.src };
sel.l(4)        g61<4>F         g63<8,2,4>F     g65<8,2,4>F     { align1 WE_all 1N I@3 };
mov(8)          g37.1<2>UD      g43<8,4,2>UD                    { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.l(4)        g53<4>F         g55<8,2,4>F     g57<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g33.2<4>UD      g61<8,2,4>UD                    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g89<4>UD        g37.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g91<4>UD        g37.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g43<2>F         g39<8,4,2>F     g99<8,4,2>F     { align1 WE_all 1Q I@4 };
mov(4)          g31.3<4>UD      g53<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g69<4>UD        g33.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g71<4>UD        g33.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g87<4>F         g89<8,2,4>F     g91<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g39.1<2>UD      g43<8,4,2>UD                    { align1 WE_all 1Q F@2 };
sel.l(4)        g31.4<1>F       g31.3<0,1,0>F   g31.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g32.4<1>F       g32.3<0,1,0>F   g32.4<4,4,1>F   { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
sel.l(4)        g67<4>F         g69<8,2,4>F     g71<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g37.2<4>UD      g87<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g103<4>UD       g39.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g105<4>UD       g39.2<8,2,4>UD                  { align1 WE_all 1N $12.src };
sel.l(8)        g43<2>F         g35<8,4,2>F     g45<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(8)        g32<1>F         g31.7<0,1,0>F   g32<8,8,1>F     { align1 WE_all 1Q F@3 };
mov(4)          g33.3<4>UD      g67<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g95<4>UD        g37.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g97<4>UD        g37.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g101<4>F        g103<8,2,4>F    g105<8,2,4>F    { align1 WE_all 1N I@4 };
mov(8)          g35.1<2>UD      g43<8,4,2>UD                    { align1 WE_all 1Q F@3 };
sel.l(4)        g33.4<1>F       g33.3<0,1,0>F   g33.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g34.4<1>F       g34.3<0,1,0>F   g34.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g93<4>F         g95<8,2,4>F     g97<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g39.2<4>UD      g101<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g75<4>UD        g35.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g77<4>UD        g35.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g43<2>F         g41<8,4,2>F     g59<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(8)        g34<1>F         g33.7<0,1,0>F   g34<8,8,1>F     { align1 WE_all 1Q F@3 };
mov(4)          g37.3<4>UD      g93<8,2,4>UD                    { align1 WE_all 1N F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g109<4>UD       g39.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g111<4>UD       g39.3<8,2,4>UD                  { align1 WE_all 1N $12.src };
sel.l(4)        g73<4>F         g75<8,2,4>F     g77<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g41.1<2>UD      g43<8,4,2>UD                    { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g43<1>UD        g34.7<0,1,0>UD  g32.7<0,1,0>UD  { align1 1H };
sel.ge(4)       g37.4<1>F       g37.3<0,1,0>F   g37.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g38.4<1>F       g38.3<0,1,0>F   g38.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g107<4>F        g109<8,2,4>F    g111<8,2,4>F    { align1 WE_all 1N I@3 };
mov(4)          g35.2<4>UD      g73<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g115<4>UD       g41.1<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g117<4>UD       g41.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g38<1>F         g37.7<0,1,0>F   g38<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g39.3<4>UD      g107<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g81<4>UD        g35.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g83<4>UD        g35.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.ge(4)       g113<4>F        g115<8,2,4>F    g117<8,2,4>F    { align1 WE_all 1N I@4 };
sel.ge(4)       g39.4<1>F       g39.3<0,1,0>F   g39.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g40.4<1>F       g40.3<0,1,0>F   g40.4<4,4,1>F   { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.l(4)        g79<4>F         g81<8,2,4>F     g83<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g41.2<4>UD      g113<8,2,4>UD                   { align1 WE_all 1N F@4 };
sel.ge(8)       g40<1>F         g39.7<0,1,0>F   g40<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g35.3<4>UD      g79<8,2,4>UD                    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(4)          g121<4>UD       g41.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g123<4>UD       g41.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g31<1>UD        g40.7<0,1,0>UD  g38.7<0,1,0>UD  { align1 1H };
sel.l(4)        g35.4<1>F       g35.3<0,1,0>F   g35.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g36.4<1>F       g36.3<0,1,0>F   g36.4<4,4,1>F   { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.ge(4)       g119<4>F        g121<8,2,4>F    g123<8,2,4>F    { align1 WE_all 1N I@2 };
cmp.z.f0.0(16)  null<1>D        g21<8,8,1>D     2D              { align1 1H };
sel.l(8)        g36<1>F         g35.7<0,1,0>F   g36<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g41.3<4>UD      g119<8,2,4>UD                   { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g33<1>UD        g36.7<0,1,0>UD  g43<1,1,0>UD    { align1 1H compacted };
sel.ge(4)       g41.4<1>F       g41.3<0,1,0>F   g41.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g42.4<1>F       g42.3<0,1,0>F   g42.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(8)       g42<1>F         g41.7<0,1,0>F   g42<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g35<1>UD        g42.7<0,1,0>UD  g31<1,1,0>UD    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g23<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g31<1>F         g33<1,1,0>F     -g35<1,1,0>F    { align1 1H I@2 compacted };
cmp.nz.f0.0(16) null<1>D        g25<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL17             { align1 1H };
mul(16)         g33<1>D         g27<1,1,0>D     6W              { align1 1H F@1 compacted };
mul(16)         g27<1>D         g23<1,1,0>D     3W              { align1 1H I@1 compacted };
add3(16)        g35<1>D         g33<8,8,1>D     g21<8,8,1>D     g27<1,1,1>D { align1 1H A@1 };
shl(16)         g27<1>D         g35<8,8,1>D     0x00000002UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g27UD           g31UD           0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat ) base_offset 0  { align1 1H $8 };

LABEL17:
endif(16)       JIP:  LABEL16                                   { align1 1H };
not(16)         g27<1>D         g29<8,8,1>D                     { align1 1H $8.src };
mov(1)          g125<2>UW       0x00000000UD                    { align1 WE_all 1N };
mov(1)          f0<1>UW         g125<0,1,0>UW                   { align1 WE_all 1N I@1 };
cmp.nz.f0.0(16) null<1>UD       g27<8,8,1>UD    0x00000000UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g30<1>UD        f0<0,1,0>UW                     { align1 1H F@1 };
and(16)         g1<1>UD         g1<1,1,0>UD     g30<1,1,0>UD    { align1 1H I@1 compacted };

LABEL16:
while(16)       JIP:  LABEL18                                   { align1 1H };
mov(8)          g38<1>UW        0x76543210UV                    { align1 WE_all 1Q F@4 };
mov(1)          g29<2>UW        0x00000000UD                    { align1 WE_all 1N };
mov(8)          g38<1>UD        g38<8,8,1>UW                    { align1 WE_all 1Q I@2 };
add(8)          g39<1>UD        g38<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@1 compacted };
shl(16)         g38<1>UD        g38<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g38<1>UD        g38<1,1,0>UD    0x00000000UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g36UD           g38UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
add(16)         g27<1>D         g36<1,1,0>D     16D             { align1 1H compacted };
mov(1)          f0<1>UW         g29<0,1,0>UW                    { align1 WE_all 1N I@6 };
cmp.nz.f0.0(16) null<1>UD       g19<8,8,1>UD    0x00000000UD    { align1 1H };
mov(16)         g1<1>UD         f0<0,1,0>UW                     { align1 1H };

LABEL21:
cmp.z.f0.0(16)  null<1>D        g1<8,8,1>D      0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL19       UIP:  LABEL19             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
fbl(16)         g31<1>UD        g1<8,8,1>UD                     { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         a0<1>UW         0x0360UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g31<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0360UW        { align1 1H A@1 };
mov(16)         g29<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.z.f0.0(16)  g31<1>D         g29<1,1,0>D     g27<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
and(16)         g33<1>UD        g31<1,1,0>UD    g19<1,1,0>UD    { align1 1H A@1 compacted };
mov(16)         g31<2>W         -g33<8,8,1>D                    { align1 1H I@1 };
and(16)         g33<1>UW        g31<16,8,2>UW   0x0001UW        { align1 1H I@1 };
mov(16)         g34<1>W         g33<32,16,2>B                   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.nz.f0.0(16) g35<1>W         g34<16,16,1>W   0W              { align1 1H A@1 };
mov.nz.f0.0(16) g31<1>D         g35<8,8,1>W                     { align1 1H I@1 };
(+f0.0) sel(16) g33<1>UD        g11<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g35<1>UD        g3<8,8,1>UD     0x7f800000UD    { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g37<1>UD        g5<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
(+f0.0) sel(16) g45<1>UD        g7<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g39<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g39<1>F         g33<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g33<1>UD        g13<8,8,1>UD    0xff800000UD    { align1 1H };
mov(8)          g87<2>UD        g39.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(16)         g41<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@2 compacted };
mov(16)         g41<1>F         g33<1,1,0>F                     { align1 1H compacted };
mov(16)         g33<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@5 compacted };
mov(16)         g33<1>F         g35<1,1,0>F                     { align1 1H compacted };
mov(16)         g35<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@4 compacted };
mov(16)         g35<1>F         g37<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g37<1>UD        g15<8,8,1>UD    0xff800000UD    { align1 1H };
mov(8)          g101<2>UD       g41.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g47<2>UD        g33.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g61<2>UD        g35.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g43<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g43<1>F         g37<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g21<8,8,1>D     1D              { align1 1H };
mov(16)         g37<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@7 compacted };
mov(16)         g37<1>F         g45<1,1,0>F                     { align1 1H compacted };
sel.l(8)        g45<2>F         g33<8,4,2>F     g47<8,4,2>F     { align1 WE_all 1Q I@3 };
mov(8)          g33.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(8)          g47<2>UD        g37.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g51<4>UD        g33.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g53<4>UD        g33.2<8,2,4>UD                  { align1 WE_all 1N $12.src };
sel.l(8)        g45<2>F         g35<8,4,2>F     g61<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(4)        g49<4>F         g51<8,2,4>F     g53<8,2,4>F     { align1 WE_all 1N I@1 };
mov(8)          g35.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g61<2>UD        g43.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(4)          g33.2<4>UD      g49<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g65<4>UD        g35.1<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g67<4>UD        g35.2<8,2,4>UD                  { align1 WE_all 1N $14.dst };
sel.ge(8)       g45<2>F         g39<8,4,2>F     g87<8,4,2>F     { align1 WE_all 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g57<4>UD        g33.1<8,2,4>UD                  { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g59<4>UD        g33.3<8,2,4>UD                  { align1 WE_all 1N $12.dst };
sel.l(4)        g63<4>F         g65<8,2,4>F     g67<8,2,4>F     { align1 WE_all 1N I@3 };
mov(8)          g39.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.l(4)        g55<4>F         g57<8,2,4>F     g59<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g35.2<4>UD      g63<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g91<4>UD        g39.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g93<4>UD        g39.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g45<2>F         g41<8,4,2>F     g101<8,4,2>F    { align1 WE_all 1Q I@4 };
mov(4)          g33.3<4>UD      g55<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g71<4>UD        g35.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g73<4>UD        g35.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.ge(4)       g89<4>F         g91<8,2,4>F     g93<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g41.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q F@2 };
sel.l(4)        g33.4<1>F       g33.3<0,1,0>F   g33.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g34.4<1>F       g34.3<0,1,0>F   g34.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g69<4>F         g71<8,2,4>F     g73<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g39.2<4>UD      g89<8,2,4>UD                    { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g105<4>UD       g41.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g107<4>UD       g41.2<8,2,4>UD                  { align1 WE_all 1N };
sel.l(8)        g45<2>F         g37<8,4,2>F     g47<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(8)        g34<1>F         g33.7<0,1,0>F   g34<8,8,1>F     { align1 WE_all 1Q F@3 };
mov(4)          g35.3<4>UD      g69<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g97<4>UD        g39.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g99<4>UD        g39.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g103<4>F        g105<8,2,4>F    g107<8,2,4>F    { align1 WE_all 1N I@4 };
mov(8)          g37.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q F@3 };
sel.l(4)        g35.4<1>F       g35.3<0,1,0>F   g35.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g36.4<1>F       g36.3<0,1,0>F   g36.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g95<4>F         g97<8,2,4>F     g99<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g41.2<4>UD      g103<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g77<4>UD        g37.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g79<4>UD        g37.2<8,2,4>UD                  { align1 WE_all 1N $12.src };
sel.ge(8)       g45<2>F         g43<8,4,2>F     g61<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(8)        g36<1>F         g35.7<0,1,0>F   g36<8,8,1>F     { align1 WE_all 1Q F@3 };
mov(4)          g39.3<4>UD      g95<8,2,4>UD                    { align1 WE_all 1N F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g111<4>UD       g41.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g113<4>UD       g41.3<8,2,4>UD                  { align1 WE_all 1N $12.src };
sel.l(4)        g75<4>F         g77<8,2,4>F     g79<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g43.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g45<1>UD        g36.7<0,1,0>UD  g34.7<0,1,0>UD  { align1 1H };
sel.ge(4)       g39.4<1>F       g39.3<0,1,0>F   g39.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g40.4<1>F       g40.3<0,1,0>F   g40.4<4,4,1>F   { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.ge(4)       g109<4>F        g111<8,2,4>F    g113<8,2,4>F    { align1 WE_all 1N I@3 };
mov(4)          g37.2<4>UD      g75<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g117<4>UD       g43.1<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g119<4>UD       g43.2<8,2,4>UD                  { align1 WE_all 1N $2.src };
sel.ge(8)       g40<1>F         g39.7<0,1,0>F   g40<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g41.3<4>UD      g109<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g83<4>UD        g37.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g85<4>UD        g37.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g115<4>F        g117<8,2,4>F    g119<8,2,4>F    { align1 WE_all 1N I@4 };
sel.ge(4)       g41.4<1>F       g41.3<0,1,0>F   g41.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g42.4<1>F       g42.3<0,1,0>F   g42.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g81<4>F         g83<8,2,4>F     g85<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g43.2<4>UD      g115<8,2,4>UD                   { align1 WE_all 1N F@4 };
sel.ge(8)       g42<1>F         g41.7<0,1,0>F   g42<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g37.3<4>UD      g81<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g123<4>UD       g43.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g125<4>UD       g43.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g33<1>UD        g42.7<0,1,0>UD  g40.7<0,1,0>UD  { align1 1H };
sel.l(4)        g37.4<1>F       g37.3<0,1,0>F   g37.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g38.4<1>F       g38.3<0,1,0>F   g38.4<4,4,1>F   { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.ge(4)       g121<4>F        g123<8,2,4>F    g125<8,2,4>F    { align1 WE_all 1N I@2 };
cmp.z.f0.0(16)  null<1>D        g21<8,8,1>D     2D              { align1 1H };
sel.l(8)        g38<1>F         g37.7<0,1,0>F   g38<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g43.3<4>UD      g121<8,2,4>UD                   { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g35<1>UD        g38.7<0,1,0>UD  g45<1,1,0>UD    { align1 1H compacted };
sel.ge(4)       g43.4<1>F       g43.3<0,1,0>F   g43.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g44.4<1>F       g44.3<0,1,0>F   g44.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(8)       g44<1>F         g43.7<0,1,0>F   g44<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g37<1>UD        g44.7<0,1,0>UD  g33<1,1,0>UD    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g23<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g33<1>F         g35<1,1,0>F     -g37<1,1,0>F    { align1 1H I@2 compacted };
cmp.nz.f0.0(16) null<1>D        g25<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL20         UIP:  LABEL20             { align1 1H };
mul(16)         g35<1>D         g29<1,1,0>D     6W              { align1 1H F@1 compacted };
mul(16)         g29<1>D         g23<1,1,0>D     3W              { align1 1H compacted };
add3(16)        g37<1>D         g35<8,8,1>D     g21<8,8,1>D     g29<1,1,1>D { align1 1H A@1 };
shl(16)         g29<1>D         g37<8,8,1>D     0x00000002UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g29UD           g33UD           0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat ) base_offset 0  { align1 1H $6 };

LABEL20:
endif(16)       JIP:  LABEL19                                   { align1 1H };
not(16)         g29<1>D         g31<8,8,1>D                     { align1 1H $6.src };
mov(1)          g127<2>UW       0x00000000UD                    { align1 WE_all 1N };
mov(1)          f0<1>UW         g127<0,1,0>UW                   { align1 WE_all 1N I@1 };
cmp.nz.f0.0(16) null<1>UD       g29<8,8,1>UD    0x00000000UD    { align1 1H I@3 };
mov(16)         g29<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g1<1>UD         g1<1,1,0>UD     g29<1,1,0>UD    { align1 1H I@1 compacted };

LABEL19:
while(16)       JIP:  LABEL21                                   { align1 1H };
mov(8)          g49<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(1)          g30<2>UW        0x00000000UD                    { align1 WE_all 1N };
mov(8)          g49<1>UD        g49<8,8,1>UW                    { align1 WE_all 1Q I@2 };
add(8)          g50<1>UD        g49<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g49<1>UD        g49<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g49<1>UD        g49<1,1,0>UD    0x00000040UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g47UD           g49UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
add(16)         g27<1>D         g47<1,1,0>D     32D             { align1 1H I@7 compacted };
mov(1)          f0<1>UW         g30<0,1,0>UW                    { align1 WE_all 1N I@6 };
cmp.nz.f0.0(16) null<1>UD       g19<8,8,1>UD    0x00000000UD    { align1 1H };
mov(16)         g1<1>UD         f0<0,1,0>UW                     { align1 1H I@7 };

LABEL24:
cmp.z.f0.0(16)  null<1>D        g1<8,8,1>D      0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL22       UIP:  LABEL22             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
fbl(16)         g31<1>UD        g1<8,8,1>UD                     { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         a0<1>UW         0x0360UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g31<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0360UW        { align1 1H A@1 };
mov(16)         g29<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.z.f0.0(16)  g31<1>D         g29<1,1,0>D     g27<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
and(16)         g33<1>UD        g31<1,1,0>UD    g19<1,1,0>UD    { align1 1H A@1 compacted };
mov(16)         g31<2>W         -g33<8,8,1>D                    { align1 1H I@1 };
and(16)         g37<1>UW        g31<16,8,2>UW   0x0001UW        { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
mov(16)         g38<1>W         g37<32,16,2>B                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.nz.f0.0(16) g39<1>W         g38<16,16,1>W   0W              { align1 1H };
mov.nz.f0.0(16) g31<1>D         g39<8,8,1>W                     { align1 1H I@1 };
(+f0.0) sel(16) g33<1>UD        g11<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
(+f0.0) sel(16) g35<1>UD        g3<8,8,1>UD     0x7f800000UD    { align1 1H F@1 };
(+f0.0) sel(16) g37<1>UD        g5<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
(+f0.0) sel(16) g45<1>UD        g7<8,8,1>UD     0x7f800000UD    { align1 1H };
mov(16)         g39<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g39<1>F         g33<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g33<1>UD        g13<8,8,1>UD    0xff800000UD    { align1 1H };
mov(8)          g87<2>UD        g39.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(16)         g41<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@2 compacted };
mov(16)         g41<1>F         g33<1,1,0>F                     { align1 1H compacted };
mov(16)         g33<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@5 compacted };
mov(16)         g33<1>F         g35<1,1,0>F                     { align1 1H compacted };
mov(16)         g35<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@4 compacted };
mov(16)         g35<1>F         g37<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g37<1>UD        g15<8,8,1>UD    0xff800000UD    { align1 1H };
mov(8)          g101<2>UD       g41.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g47<2>UD        g33.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g61<2>UD        g35.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g43<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g43<1>F         g37<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g21<8,8,1>D     1D              { align1 1H };
mov(16)         g37<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@7 compacted };
mov(16)         g37<1>F         g45<1,1,0>F                     { align1 1H compacted };
sel.l(8)        g45<2>F         g33<8,4,2>F     g47<8,4,2>F     { align1 WE_all 1Q I@3 };
mov(8)          g33.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(8)          g47<2>UD        g37.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g51<4>UD        g33.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g53<4>UD        g33.2<8,2,4>UD                  { align1 WE_all 1N $12.src };
sel.l(8)        g45<2>F         g35<8,4,2>F     g61<8,4,2>F     { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.l(4)        g49<4>F         g51<8,2,4>F     g53<8,2,4>F     { align1 WE_all 1N I@1 };
mov(8)          g35.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g61<2>UD        g43.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(4)          g33.2<4>UD      g49<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g65<4>UD        g35.1<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g67<4>UD        g35.2<8,2,4>UD                  { align1 WE_all 1N $14.dst };
sel.ge(8)       g45<2>F         g39<8,4,2>F     g87<8,4,2>F     { align1 WE_all 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g57<4>UD        g33.1<8,2,4>UD                  { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g59<4>UD        g33.3<8,2,4>UD                  { align1 WE_all 1N $12.dst };
sel.l(4)        g63<4>F         g65<8,2,4>F     g67<8,2,4>F     { align1 WE_all 1N I@3 };
mov(8)          g39.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.l(4)        g55<4>F         g57<8,2,4>F     g59<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g35.2<4>UD      g63<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g91<4>UD        g39.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g93<4>UD        g39.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g45<2>F         g41<8,4,2>F     g101<8,4,2>F    { align1 WE_all 1Q I@4 };
mov(4)          g33.3<4>UD      g55<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g71<4>UD        g35.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g73<4>UD        g35.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.ge(4)       g89<4>F         g91<8,2,4>F     g93<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g41.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q F@2 };
sel.l(4)        g33.4<1>F       g33.3<0,1,0>F   g33.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g34.4<1>F       g34.3<0,1,0>F   g34.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g69<4>F         g71<8,2,4>F     g73<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g39.2<4>UD      g89<8,2,4>UD                    { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g105<4>UD       g41.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g107<4>UD       g41.2<8,2,4>UD                  { align1 WE_all 1N };
sel.l(8)        g45<2>F         g37<8,4,2>F     g47<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(8)        g34<1>F         g33.7<0,1,0>F   g34<8,8,1>F     { align1 WE_all 1Q F@3 };
mov(4)          g35.3<4>UD      g69<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g97<4>UD        g39.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g99<4>UD        g39.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g103<4>F        g105<8,2,4>F    g107<8,2,4>F    { align1 WE_all 1N I@4 };
mov(8)          g37.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q F@3 };
sel.l(4)        g35.4<1>F       g35.3<0,1,0>F   g35.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g36.4<1>F       g36.3<0,1,0>F   g36.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g95<4>F         g97<8,2,4>F     g99<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g41.2<4>UD      g103<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g77<4>UD        g37.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g79<4>UD        g37.2<8,2,4>UD                  { align1 WE_all 1N $12.src };
sel.ge(8)       g45<2>F         g43<8,4,2>F     g61<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(8)        g36<1>F         g35.7<0,1,0>F   g36<8,8,1>F     { align1 WE_all 1Q F@3 };
mov(4)          g39.3<4>UD      g95<8,2,4>UD                    { align1 WE_all 1N F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g111<4>UD       g41.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g113<4>UD       g41.3<8,2,4>UD                  { align1 WE_all 1N $12.src };
sel.l(4)        g75<4>F         g77<8,2,4>F     g79<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g43.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g45<1>UD        g36.7<0,1,0>UD  g34.7<0,1,0>UD  { align1 1H };
sel.ge(4)       g39.4<1>F       g39.3<0,1,0>F   g39.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g40.4<1>F       g40.3<0,1,0>F   g40.4<4,4,1>F   { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.ge(4)       g109<4>F        g111<8,2,4>F    g113<8,2,4>F    { align1 WE_all 1N I@3 };
mov(4)          g37.2<4>UD      g75<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g117<4>UD       g43.1<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g119<4>UD       g43.2<8,2,4>UD                  { align1 WE_all 1N $2.src };
sel.ge(8)       g40<1>F         g39.7<0,1,0>F   g40<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g41.3<4>UD      g109<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g83<4>UD        g37.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g85<4>UD        g37.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g115<4>F        g117<8,2,4>F    g119<8,2,4>F    { align1 WE_all 1N I@4 };
sel.ge(4)       g41.4<1>F       g41.3<0,1,0>F   g41.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g42.4<1>F       g42.3<0,1,0>F   g42.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g81<4>F         g83<8,2,4>F     g85<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g43.2<4>UD      g115<8,2,4>UD                   { align1 WE_all 1N F@4 };
sel.ge(8)       g42<1>F         g41.7<0,1,0>F   g42<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g37.3<4>UD      g81<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g123<4>UD       g43.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g125<4>UD       g43.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g33<1>UD        g42.7<0,1,0>UD  g40.7<0,1,0>UD  { align1 1H };
sel.l(4)        g37.4<1>F       g37.3<0,1,0>F   g37.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g38.4<1>F       g38.3<0,1,0>F   g38.4<4,4,1>F   { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.ge(4)       g121<4>F        g123<8,2,4>F    g125<8,2,4>F    { align1 WE_all 1N I@2 };
cmp.z.f0.0(16)  null<1>D        g21<8,8,1>D     2D              { align1 1H };
sel.l(8)        g38<1>F         g37.7<0,1,0>F   g38<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g43.3<4>UD      g121<8,2,4>UD                   { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g35<1>UD        g38.7<0,1,0>UD  g45<1,1,0>UD    { align1 1H compacted };
sel.ge(4)       g43.4<1>F       g43.3<0,1,0>F   g43.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g44.4<1>F       g44.3<0,1,0>F   g44.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(8)       g44<1>F         g43.7<0,1,0>F   g44<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g37<1>UD        g44.7<0,1,0>UD  g33<1,1,0>UD    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g23<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g33<1>F         g35<1,1,0>F     -g37<1,1,0>F    { align1 1H I@2 compacted };
cmp.nz.f0.0(16) null<1>D        g25<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL23         UIP:  LABEL23             { align1 1H };
mul(16)         g35<1>D         g29<1,1,0>D     6W              { align1 1H F@1 compacted };
mul(16)         g29<1>D         g23<1,1,0>D     3W              { align1 1H compacted };
add3(16)        g37<1>D         g35<8,8,1>D     g21<8,8,1>D     g29<1,1,1>D { align1 1H A@1 };
shl(16)         g29<1>D         g37<8,8,1>D     0x00000002UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g29UD           g33UD           0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat ) base_offset 0  { align1 1H $6 };

LABEL23:
endif(16)       JIP:  LABEL22                                   { align1 1H };
not(16)         g29<1>D         g31<8,8,1>D                     { align1 1H $6.src };
mov(1)          g127<2>UW       0x00000000UD                    { align1 WE_all 1N };
mov(1)          f0<1>UW         g127<0,1,0>UW                   { align1 WE_all 1N I@1 };
cmp.nz.f0.0(16) null<1>UD       g29<8,8,1>UD    0x00000000UD    { align1 1H I@3 };
mov(16)         g29<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g1<1>UD         g1<1,1,0>UD     g29<1,1,0>UD    { align1 1H I@1 compacted };

LABEL22:
while(16)       JIP:  LABEL24                                   { align1 1H };
mov(8)          g61<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g61<1>UD        g61<8,8,1>UW                    { align1 WE_all 1Q I@1 };
add(8)          g62<1>UD        g61<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@1 compacted };
shl(16)         g61<1>UD        g61<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g61<1>UD        g61<1,1,0>UD    0x00000080UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g59UD           g61UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
mov.nz.f0.0(16) null<1>D        g59<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL25         UIP:  LABEL25             { align1 1H };
mov(8)          g111<1>UW       0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g111<1>UD       g111<8,8,1>UW                   { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(8)          g112<1>UD       g111<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g111<1>UD       g111<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g111<1>UD       g111<1,1,0>UD   0x00000140UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $12.src };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $12.src };
send(16)        g109UD          g111UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
shl(16)         g40<1>D         g109<8,8,1>D    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g101<1>D        g40<1,1,0>D     1152D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g101UD          nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1H $14 };
mov(8)          g43<1>UW        0x76543210UV                    { align1 WE_all 1Q F@2 };
mov(8)          g43<1>UD        g43<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(8)          g44<1>UD        g43<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g43<1>UD        g43<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g43<1>UD        g43<1,1,0>UD    0x00000000UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g39UD           g43UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
shl(16)         g41<1>D         g39<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g102<1>D        g41<1,1,0>D     1216D           { align1 1H $14.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g102UD          nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1H $15 };
mov(8)          g52<1>UW        0x76543210UV                    { align1 WE_all 1Q $12.src };
mov(8)          g52<1>UD        g52<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(8)          g53<1>UD        g52<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g52<1>UD        g52<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g52<1>UD        g52<1,1,0>UD    0x00000040UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $12.src };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $12.src };
send(16)        g50UD           g52UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shl(16)         g42<1>D         g50<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g103<1>D        g42<1,1,0>D     1280D           { align1 1H $15.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g103UD          nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1H $12 };

LABEL25:
endif(16)       JIP:  LABEL26                                   { align1 1H };

LABEL26:
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
send(1)         g43UD           g0UD            nullUD          0x0210111f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, evict, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g44<1>UD        0x00000000UD                    { align1 WE_all 1Q $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(2)          g44.10<1>UB     g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g44UD           nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $1 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
mov(8)          g123<1>UW       0x76543210UV                    { align1 WE_all 1Q F@6 };
mov(8)          g123<1>UD       g123<8,8,1>UW                   { align1 WE_all 1Q I@1 };
add(8)          g124<1>UD       g123<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q A@1 compacted };
shl(16)         g123<1>UD       g123<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g123<1>UD       g123<1,1,0>UD   0x00000180UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $2.src };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $2.src };
send(16)        g121UD          g123UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
mov(16)         g72<1>UD        g121<8,8,1>UD                   { align1 1H };

LABEL29:
cmp.ge.f0.0(16) null<1>UD       g72<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL27       UIP:  LABEL27             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
shl(16)         g104<1>D        g72<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g109UD          g104UD          nullUD          0x04201502                0x00000000
                            slm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1H $12 };
cmp.nz.f0.0(16) null<1>F        g109<1,1,0>F    0x7f800000F  /* infF */ { align1 1H $12.dst compacted };
(+f0.0) if(16)  JIP:  LABEL28         UIP:  LABEL28             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g96<1>UW        0x76543210UV                    { align1 WE_all 1Q F@2 };
mov(8)          g99<1>UW        0x76543210UV                    { align1 WE_all 1Q $4.src };
mov(8)          g77<1>UW        0x76543210UV                    { align1 WE_all 1Q $5.src };
mov(8)          g96<1>UD        g96<8,8,1>UW                    { align1 WE_all 1Q I@3 };
mov(8)          g99<1>UD        g99<8,8,1>UW                    { align1 WE_all 1Q I@3 };
mov(8)          g77<1>UD        g77<8,8,1>UW                    { align1 WE_all 1Q I@3 };
add(8)          g97<1>UD        g96<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(8)          g100<1>UD       g99<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(8)          g78<1>UD        g77<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@3 compacted };
shl(16)         g96<1>UD        g96<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@3 compacted };
shl(16)         g99<1>UD        g99<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@3 compacted };
shl(16)         g77<1>UD        g77<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@3 compacted };
add(16)         g96<1>UD        g96<1,1,0>UD    0x00000100UD    { align1 WE_all 1H I@3 compacted };
add(16)         g99<1>UD        g99<1,1,0>UD    0x00000100UD    { align1 WE_all 1H I@3 compacted };
add(16)         g77<1>UD        g77<1,1,0>UD    0x000000c0UD    { align1 WE_all 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g94UD           g96UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g97UD           g99UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g75UD           g77UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g45<1>D         g94<1,1,0>D     44D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.l.f0.0(16)  g47<1>UD        g45<1,1,0>UD    g97<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g49<1>D         g45<1,1,0>D     g104<1,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g51<1>UD        g49<1,1,0>UD    g45<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(8)          g105<2>UD       g49<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $12.src };
mov(8)          g107<2>UD       g50<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add3(16)        g53<1>D         -g47<8,8,1>D    g75<8,8,1>D     -g51<1,1,1>D { align1 1H };
mov(8)          g107.1<2>UD     g54<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g105.1<2>UD     g53<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g54UD           g105UD          g109UD          0x08240595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $12 };

LABEL28:
endif(16)       JIP:  LABEL27                                   { align1 1H };
add(16)         g72<1>D         g72<1,1,0>D     512D            { align1 1H compacted };

LABEL27:
while(16)       JIP:  LABEL29                                   { align1 1H };

LABEL32:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g126<1>UW       0x76543210UV                    { align1 WE_all 1Q F@6 };
mov(8)          g126<1>UD       g126<8,8,1>UW                   { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(8)          g127<1>UD       g126<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g126<1>UD       g126<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g126<1>UD       g126<1,1,0>UD   0x00000180UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g124UD          g126UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
cmp.ge.f0.0(16) null<1>UD       g124<8,8,1>UD   0x00000030UD    { align1 1H };
(+f0.0) break(16) JIP:  LABEL30       UIP:  LABEL30             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g4<1>UW         0x76543210UV                    { align1 WE_all 1Q F@7 };
mov(8)          g4<1>UD         g4<8,8,1>UW                     { align1 WE_all 1Q I@1 };
add(8)          g5<1>UD         g4<1,1,0>UD     0x00000008UD    { align1 WE_all 1Q A@1 compacted };
shl(16)         g4<1>UD         g4<1,1,0>UD     0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g4<1>UD         g4<1,1,0>UD     0x00000180UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g2UD            g4UD            nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
shl(16)         g55<1>D         g2<8,8,1>D      0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g110<1>D        g55<1,1,0>D     1152D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g115UD          g110UD          nullUD          0x04201502                0x00000000
                            slm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1H $12 };
cmp.nz.f0.0(16) null<1>D        g115<8,8,1>D    0D              { align1 1H $12.dst };
(+f0.0) if(16)  JIP:  LABEL31         UIP:  LABEL31             { align1 1H };
mov(8)          g102<1>UW       0x76543210UV                    { align1 WE_all 1Q $15.src };
mov(8)          g105<1>UW       0x76543210UV                    { align1 WE_all 1Q $12.src };
mov(8)          g80<1>UW        0x76543210UV                    { align1 WE_all 1Q $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(8)          g102<1>UD       g102<8,8,1>UW                   { align1 WE_all 1Q I@3 };
mov(8)          g105<1>UD       g105<8,8,1>UW                   { align1 WE_all 1Q I@3 };
mov(8)          g80<1>UD        g80<8,8,1>UW                    { align1 WE_all 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(8)          g103<1>UD       g102<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(8)          g106<1>UD       g105<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(8)          g81<1>UD        g80<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@3 compacted };
shl(16)         g102<1>UD       g102<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@3 compacted };
shl(16)         g105<1>UD       g105<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@3 compacted };
shl(16)         g80<1>UD        g80<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@3 compacted };
add(16)         g102<1>UD       g102<1,1,0>UD   0x00000100UD    { align1 WE_all 1H I@3 compacted };
add(16)         g105<1>UD       g105<1,1,0>UD   0x00000100UD    { align1 WE_all 1H I@3 compacted };
add(16)         g80<1>UD        g80<1,1,0>UD    0x000000c0UD    { align1 WE_all 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g100UD          g102UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $12.src };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $12.src };
send(16)        g103UD          g105UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g78UD           g80UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g57<1>D         g100<1,1,0>D    1196D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
cmp.l.f0.0(16)  g59<1>UD        g57<1,1,0>UD    g103<1,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
add(16)         g61<1>D         g57<1,1,0>D     g55<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.l.f0.0(16)  g63<1>UD        g61<1,1,0>UD    g57<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(8)          g111<2>UD       g61<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $12.src };
mov(8)          g113<2>UD       g62<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add3(16)        g65<1>D         -g59<8,8,1>D    g78<8,8,1>D     -g63<1,1,1>D { align1 1H };
mov(8)          g113.1<2>UD     g66<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g111.1<2>UD     g65<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g66UD           g111UD          g115UD          0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $12 };

LABEL31:
endif(16)       JIP:  LABEL30                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g7<1>UW         0x76543210UV                    { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(8)          g11<1>UW        0x76543210UV                    { align1 WE_all 1Q F@7 };
mov(8)          g7<1>UD         g7<8,8,1>UW                     { align1 WE_all 1Q I@2 };
mov(8)          g11<1>UD        g11<8,8,1>UW                    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(8)          g8<1>UD         g7<1,1,0>UD     0x00000008UD    { align1 WE_all 1Q A@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(8)          g12<1>UD        g11<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@2 compacted };
shl(16)         g7<1>UD         g7<1,1,0>UD     0x00000002UD    { align1 WE_all 1H I@2 compacted };
shl(16)         g11<1>UD        g11<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
add(16)         g7<1>UD         g7<1,1,0>UD     0x00000180UD    { align1 WE_all 1H I@2 compacted };
add(16)         g11<1>UD        g11<1,1,0>UD    0x00000180UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g5UD            g7UD            nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
add(16)         g9<1>D          g5<1,1,0>D      512D            { align1 1H $12.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g11UD           g9UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $12 };

LABEL30:
while(16)       JIP:  LABEL32                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q F@6 };
mov(16)         acc0<1>F        0x0F             /* 0F */       { align1 WE_all 1H I@1 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_BFS_BFS_pass1_indexed_batchable_code[] = {
    0x80000065, 0x1f058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x3a050220, 0x00000024, 0x00000000,
    0x00040061, 0x54054660, 0x00000000, 0x00000001,
    0x00040061, 0x3c054220, 0x00000000, 0x00000000,
    0x80030061, 0x39054410, 0x00000000, 0x76543210,
    0xe2201d40, 0x00011f03, 0x00130061, 0x49264aa0,
    0x00000000, 0x00000000, 0x64391a40, 0x00803995,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00200c, 0x00340000,
    0x00131161, 0x49064aa0, 0x00000000, 0x00000000,
    0x00131161, 0x3e260220, 0x00444926, 0x00000000,
    0x00131961, 0x3e060220, 0x00444906, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x21350061, 0x001102cc, 0x2a4b0061, 0x001102cc,
    0x00030061, 0x37260aa0, 0x00000264, 0x00000000,
    0x00130061, 0x4d260aa0, 0x00000264, 0x00000000,
    0x21351461, 0x00110204, 0x2a4b1461, 0x00110204,
    0x21371461, 0x00110244, 0x2a4d1461, 0x00110244,
    0xa17c1440, 0x428e3503, 0xa1580040, 0x42ce3503,
    0x00030061, 0x4f050220, 0x00443526, 0x00000000,
    0xaa511340, 0x428e4b03, 0xaa590040, 0x42ce4b03,
    0x00130061, 0x50050220, 0x00444b26, 0x00000000,
    0x00031e70, 0x7d050220, 0x52467c05, 0x00443506,
    0x00030061, 0x43060220, 0x00347c05, 0x00000000,
    0x00031f70, 0x5a050220, 0x52465805, 0x00443506,
    0x00131e70, 0x52050220, 0x52465105, 0x00444b06,
    0x00130061, 0x45060220, 0x00345105, 0x00000000,
    0x00131f70, 0x5b050220, 0x52465905, 0x00444b06,
    0x00031e40, 0x7e052660, 0x06467d05, 0x00443526,
    0x00031e61, 0x7b264aa0, 0x00000000, 0x00000000,
    0x00131c40, 0x53052660, 0x06465205, 0x00444b26,
    0x00031a61, 0x43260220, 0x00347e05, 0x00000000,
    0x00031161, 0x7b064aa0, 0x00000000, 0x00000000,
    0x00131a61, 0x45260220, 0x00345305, 0x00000000,
    0x00031161, 0x79260220, 0x00447b26, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x56140000, 0xfb044324, 0x00040000,
    0x00031961, 0x79060220, 0x00447b06, 0x00000000,
    0x00031969, 0x5c058660, 0x02447906, 0x00000002,
    0x00131b69, 0x5d058660, 0x02443e06, 0x00000002,
    0xa05e1940, 0x5c005802, 0x27601970, 0x58005e03,
    0x00030061, 0x64060220, 0x00345e05, 0x00000000,
    0x00130061, 0x66060220, 0x00345f05, 0x00000000,
    0x00041b52, 0x62042e68, 0x0e2e5a05, 0x60054f05,
    0x00131961, 0x66260220, 0x00346305, 0x00000000,
    0x00031a61, 0x64260220, 0x00346205, 0x00000000,
    0xe26a004c, 0x00114004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80040040, 0x70058150,
    0x05583905, 0xffffffff, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80000b69, 0x10018220,
    0x02006a04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000c00, 0x80000961, 0x01060660,
    0x00010200, 0x00000000, 0x80000061, 0x01260660,
    0x00010210, 0x00000000, 0x80000061, 0x05064210,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x44260220,
    0x00000124, 0x00000000, 0x80031961, 0x44060220,
    0x00000104, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004131, 0x68140000,
    0xfb00440c, 0x00340000, 0x80042161, 0x6c054660,
    0x00000000, 0x00000000, 0x00040061, 0x6c050660,
    0x00466805, 0x00000000, 0x80041961, 0x10014110,
    0x00000000, 0x0d800d80, 0x80040069, 0x10018510,
    0x01467005, 0x00020002, 0x80040940, 0x10018110,
    0x01461001, 0x0d800d80, 0xe36e0961, 0x001b0004,
    0x80001961, 0x6e054660, 0x00000000, 0x00000000,
    0x80031940, 0x6e260660, 0x06446e06, 0x00446e26,
    0x80021940, 0x6e470660, 0x06426e27, 0x00426e47,
    0x80021940, 0x6e670660, 0x06426e27, 0x00426e67,
    0x80021940, 0x6e850660, 0x06006e64, 0x00346e85,
    0x80021a40, 0x6f850660, 0x06006f64, 0x00346f85,
    0xa46f1940, 0x6f016e82, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0710040, 0x6e203a02,
    0x27731970, 0x68007103, 0x80000061, 0x30010110,
    0x00000504, 0x00000000, 0x00041a70, 0x00018220,
    0x22467305, 0x00000000, 0x00040061, 0x75050120,
    0x20003000, 0x00000000, 0x01040022, 0x0001c060,
    0x00000030, 0x00000030, 0x00040061, 0x40054220,
    0x00000000, 0xffffffff, 0x00040028, 0x0001c660,
    0x000000c8, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x000000b8, 0xa0770040, 0x68006e02,
    0xa03c0040, 0x01003c03, 0xa03a1a40, 0x78303a52,
    0x0004a170, 0x00010220, 0x42463c05, 0x00465605,
    0x01040022, 0x0001c060, 0x00000030, 0x00000030,
    0x00041f61, 0x40054220, 0x00000000, 0x00000000,
    0x00040028, 0x0001c660, 0x00000060, 0x00000010,
    0x00040025, 0x00004600, 0x00000000, 0x00000050,
    0x00030061, 0x79060220, 0x00343c05, 0x00000000,
    0x00130061, 0x3e060220, 0x00343d05, 0x00000000,
    0x00031a61, 0x79264220, 0x00000000, 0x00000000,
    0x00131a61, 0x3e264220, 0x00000000, 0x00000000,
    0x00040027, 0x00014060, 0x00000000, 0xfffffcb0,
    0x00041a61, 0x00010660, 0x20464005, 0x00000000,
    0x01040022, 0x0001c060, 0x000000e0, 0x000000a0,
    0x00041b4c, 0x78050220, 0x00467505, 0x00000000,
    0x00040070, 0x00018660, 0x16467505, 0x00000000,
    0x11041a62, 0x7a058220, 0x02467805, 0x00000020,
    0xa0411940, 0x7a003c02, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80040061, 0x10014110,
    0x00000000, 0x0e200e20, 0x00040069, 0x10018510,
    0x01567a06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0e200e20, 0xe0430961, 0x001b0004,
    0x00040024, 0x0001c060, 0x00000050, 0x00000050,
    0x00041a61, 0x41054220, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x43054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00030040, 0x7b058660, 0x06443506, 0x0000082c,
    0x00130040, 0x7c058660, 0x06444b06, 0x0000082c,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x01058660, 0x02464105, 0x00000002,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00030040, 0x1b058660, 0x06443506, 0x00002c2c,
    0x00130040, 0x1c058660, 0x06444b06, 0x00002c2c,
    0x80032161, 0x56054010, 0x00000000, 0x76543210,
    0xe77d1d70, 0x82c07b03, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0xa0030040, 0x01007b02,
    0x80031b61, 0x56050120, 0x00465605, 0x00000000,
    0x27051a70, 0x7b000303, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x45060220,
    0x00340305, 0x00000000, 0x00130061, 0x47060220,
    0x00340405, 0x00000000, 0xe457c140, 0x00805603,
    0x00041c52, 0x07042e68, 0x0e2e7d05, 0x05054f05,
    0xe3561a69, 0x00205603, 0x00131a61, 0x47260220,
    0x00340805, 0x00000000, 0x00031b61, 0x45260220,
    0x00340705, 0x00000000, 0xe3561b40, 0x10005603,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x08140000, 0xfb044524, 0x00040000,
    0x00042261, 0x0a050120, 0x00560806, 0x00000000,
    0x00040061, 0x1e050120, 0x00560816, 0x00000000,
    0x600f1a41, 0x05800a02, 0x00030041, 0x20018220,
    0x01460a05, 0x00580058, 0x0004006c, 0x0c058660,
    0x02460a05, 0x0000001f, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x60201c41, 0x5cc01e02,
    0xa1160c40, 0x0f0e3702, 0xaa170b40, 0x100e4d02,
    0xfe0e0049, 0x05800a03, 0x60101d41, 0x05800c02,
    0xa0511d40, 0x20001b02, 0x00031d70, 0x18050220,
    0x52461605, 0x00443706, 0x00030070, 0x1d050220,
    0x52461b05, 0x00443506, 0x00131e70, 0x19050220,
    0x52461705, 0x00444d06, 0xa02f0040, 0x03401603,
    0xa0270040, 0x01001603, 0x00130041, 0x20018220,
    0x01460b05, 0x00580058, 0x00130070, 0x1e050220,
    0x52461c05, 0x00444b06, 0x00130049, 0x0f058222,
    0x02460b05, 0x00000058, 0xa0121940, 0x10000e02,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049331, 0x00020100, 0xfa085614, 0x04005104,
    0x80030061, 0x59054010, 0x00000000, 0x76543210,
    0x80030061, 0x40054010, 0x00000000, 0x76543210,
    0x80031a61, 0x59050120, 0x00465905, 0x00000000,
    0x80031a61, 0x40050120, 0x00464005, 0x00000000,
    0xe45a1a40, 0x00805903, 0xe4411a40, 0x00804003,
    0xe3591a69, 0x00205903, 0xe3401a69, 0x00204003,
    0xe3591a40, 0x10005903, 0xe3401a40, 0x0c004003,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049431, 0x57160100, 0xfa005914, 0x04000000,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x27210070, 0x1b005703, 0x00041952, 0x3e042e68,
    0x0e2e1d05, 0x21054f05, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049531, 0x00020100,
    0xfa084014, 0x04003e04, 0x80030061, 0x5b054010,
    0x00000000, 0x76543210, 0x80030061, 0x42054010,
    0x00000000, 0x76543210, 0x80130061, 0x5d054010,
    0x00000000, 0x76543210, 0x80130061, 0x4a054010,
    0x00000000, 0x76543210, 0x00030061, 0x14050220,
    0x00443726, 0x00000000, 0x00130061, 0x15050220,
    0x00444d26, 0x00000000, 0x80030061, 0x72054010,
    0x00000000, 0x76543210, 0xe04c0065, 0x0ff10043,
    0x80031f61, 0x5b050120, 0x00465b05, 0x00000000,
    0x80031f61, 0x42050120, 0x00464205, 0x00000000,
    0x80131f61, 0x5d050120, 0x00465d05, 0x00000000,
    0x80131f61, 0x4a050120, 0x00464a05, 0x00000000,
    0x00041f52, 0x1a040e68, 0x0e2e1405, 0x18051205,
    0x80031f61, 0x72050120, 0x00467205, 0x00000000,
    0x00041f69, 0x4e058660, 0x02464c05, 0x00000004,
    0xe45b1f69, 0x00205b03, 0xe4421f69, 0x00204203,
    0x80131f69, 0x5d058220, 0x02465d05, 0x00000002,
    0x80131f69, 0x4a058220, 0x02464a05, 0x00000002,
    0xe4731e40, 0x00807203, 0xe45b1d40, 0x10005b03,
    0xe4421d40, 0x0c004203, 0x80131d40, 0x5d058220,
    0x02465d05, 0x00000120, 0x80131d40, 0x4a058220,
    0x02464a05, 0x000000e0, 0xe3721d69, 0x00207203,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80039631, 0x5a0e0100, 0xfa005b0c, 0x04000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80039731, 0x410e0100, 0xfa00420c, 0x04000000,
    0x80101b01, 0x00000000, 0x00000000, 0x00000000,
    0x80100065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80100066, 0x10218220, 0x02001020, 0x0000000f,
    0x80139831, 0x5c0e0100, 0xfa005d0c, 0x04000000,
    0x80103201, 0x00000000, 0x00000000, 0x00000000,
    0x80101a01, 0x00000000, 0x00000000, 0x00000000,
    0x80100065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80100066, 0x10218220, 0x02001020, 0x0000000f,
    0x80139931, 0x450e0100, 0xfa004a0c, 0x04000000,
    0xe3721940, 0x18007203, 0x80002601, 0x00000000,
    0x00000000, 0x00000000, 0x00033261, 0x46060220,
    0x00345a05, 0x00000000, 0x80102801, 0x00000000,
    0x00000000, 0x00000000, 0x00133261, 0x48060220,
    0x00345c05, 0x00000000, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x00031a61, 0x46260220,
    0x00344105, 0x00000000, 0x80102901, 0x00000000,
    0x00000000, 0x00000000, 0x00131a61, 0x48260220,
    0x00344505, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044a31, 0x1f440000,
    0xfb044624, 0x003c0000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x00033a61, 0x47060220,
    0x00342f05, 0x00000000, 0x80103901, 0x00000000,
    0x00000000, 0x00000000, 0x00133a61, 0x49060220,
    0x00343005, 0x00000000, 0xe0292a65, 0x00102503,
    0xae2b1970, 0x00002903, 0x27310070, 0x16002f03,
    0x00040061, 0x29050160, 0x00463905, 0x00000000,
    0x00041b61, 0x06062650, 0x00462b05, 0x00000000,
    0xa0331b40, 0x1a023102, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa0501b40, 0x4e002902,
    0x00041b65, 0x2d058110, 0x01560606, 0x00010001,
    0x00131b61, 0x49260220, 0x00343405, 0x00000000,
    0x00031c61, 0x47260220, 0x00343305, 0x00000000,
    0xe0701c65, 0x1ff05003, 0x00041c61, 0x2e050450,
    0x00682d06, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x34140000,
    0xfb044724, 0x00040000, 0x00041970, 0x3c058550,
    0x25582e05, 0x00000000, 0x00041961, 0x3a050560,
    0x00463c05, 0x00000000, 0x00041961, 0x07062650,
    0x00463a05, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00041965, 0x3e058110,
    0x01560706, 0x00010001, 0x00041961, 0x00010450,
    0x20683e06, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xef3f2b62, 0x00003403,
    0x27483b70, 0x16002703, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0xa04a1940, 0x1a024802,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049c31, 0x00020100, 0xfa087214, 0x04007004,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x41058660, 0x02464305, 0x00000009,
    0x80030061, 0x75054010, 0x00000000, 0x76543210,
    0xa043aa40, 0x41001f02, 0x80031a61, 0x75050120,
    0x00467505, 0x00000000, 0x00030061, 0x4c060220,
    0x00341605, 0x00000000, 0x00130061, 0x4e060220,
    0x00341705, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0xa0451c40, 0x20004303,
    0xe4761c40, 0x00807503, 0x00031c61, 0x4c260220,
    0x00341a05, 0x00000000, 0x00131c61, 0x4e260220,
    0x00341b05, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x2747ca62, 0x21004503,
    0xe3751c69, 0x00207503, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x35440000,
    0xfb044c24, 0x003c0000, 0xe3751940, 0x18007503,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049d31, 0x73160100, 0xfa007514, 0x04000000,
    0x80002d01, 0x00000000, 0x00000000, 0x00000000,
    0xa0513340, 0x73004302, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x27561970, 0x43005103,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x27581d70, 0x47005103, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00041965, 0x5a052620,
    0x02465605, 0x00465805, 0x00041961, 0x08062650,
    0x00465a05, 0x00000000, 0x00041965, 0x5c058110,
    0x01560806, 0x00010001, 0x00030061, 0x58060220,
    0x00342705, 0x00000000, 0x00130061, 0x5a060220,
    0x00342805, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00041b61, 0x5d050450,
    0x00685c06, 0x00000000, 0x00031b61, 0x58260220,
    0x00344a05, 0x00000000, 0x00131b61, 0x5a260220,
    0x00344b05, 0x00000000, 0x00041b70, 0x60058550,
    0x25585d05, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044e31, 0x4b240000,
    0xfb045824, 0x000c0000, 0x00041961, 0x5e050560,
    0x20466005, 0x00000000, 0x01040022, 0x0001c060,
    0x00000118, 0x00000108, 0xa0610040, 0x51003f02,
    0x27631970, 0x3f006103, 0xe06a0068, 0x01e06103,
    0xa0651a40, 0x56226302, 0x00041969, 0x68058660,
    0x02466505, 0x00000002, 0x00040069, 0x66058660,
    0x02466105, 0x00000002, 0x206c1a66, 0x6a006803,
    0xa06eac40, 0x66003502, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x27701970, 0x35006e03,
    0x00033e61, 0x59060220, 0x00346e05, 0x00000000,
    0x00133e61, 0x5b060220, 0x00346f05, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00042c52, 0x72040e68, 0x0e2e3705, 0x70056c05,
    0x00131961, 0x5b260220, 0x00347305, 0x00000000,
    0x00031a61, 0x59260220, 0x00347205, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x44140000, 0xfb045924, 0x00040000,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00042e61, 0x44054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0xa0732e40, 0x02004b03, 0x00042a69, 0x79058660,
    0x02462305, 0x00000005, 0xe07b0068, 0x01b02303,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x27751b70, 0x4b007303, 0xa07d1b40, 0x79007302,
    0xa077ae40, 0x4d027502, 0x27011a70, 0x73007d03,
    0xa0050040, 0x01007d03, 0x00033e61, 0x5a060220,
    0x00347d05, 0x00000000, 0x00133e61, 0x5c060220,
    0x00347e05, 0x00000000, 0x00041c52, 0x03040e68,
    0x0e2e7705, 0x01057b05, 0xe7071c70, 0x01000503,
    0x00030061, 0x60060220, 0x00340505, 0x00000000,
    0x00130061, 0x62060220, 0x00340605, 0x00000000,
    0x00131c61, 0x5c260220, 0x00340405, 0x00000000,
    0x00031d61, 0x5a260220, 0x00340305, 0x00000000,
    0xa0091d40, 0x03020702, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044f31, 0x2b440000,
    0xfb045a24, 0x003c0000, 0x00131961, 0x62260220,
    0x00340a05, 0x00000000, 0x00031a61, 0x60260220,
    0x00340905, 0x00000000, 0x200b2f40, 0x2b203100,
    0x00041162, 0x11058aa0, 0x4a460b05, 0x0704ec3d,
    0x00041170, 0x1e058aa0, 0x5a461105, 0x77f684df,
    0x00044038, 0x15050aa0, 0x1a461105, 0x00460001,
    0x00040070, 0x20058aa0, 0x3a460b05, 0x0704ec3d,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x0a240000, 0xfb046024, 0x000c0000,
    0x00042041, 0x17058aa0, 0x0a461505, 0x417d70a4,
    0x00041265, 0x00010220, 0x22461e05, 0x00462005,
    0xef211162, 0x00001703, 0x80002f01, 0x00000000,
    0x00000000, 0x00000000, 0x200e2c40, 0x2d200a00,
    0x80002f01, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x20102c40, 0x2f200c00, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00041262, 0x12058aa0,
    0x4a460e05, 0x0704ec3d, 0x00040070, 0x23058aa0,
    0x3a460e05, 0x0704ec3d, 0x00041362, 0x14058aa0,
    0x4a461005, 0x0704ec3d, 0x00041561, 0x09062650,
    0x00465e05, 0x00000000, 0x00041370, 0x25058aa0,
    0x5a461205, 0x77f684df, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044c38, 0x18050aa0,
    0x1a461205, 0x00460001, 0x0004a138, 0x1b050aa0,
    0x1a461405, 0x00460001, 0x00041965, 0x40058110,
    0x01560906, 0x00010001, 0x00041165, 0x00010220,
    0x22462505, 0x00462305, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x00041d41, 0x1d058aa0,
    0x0a461b05, 0x417d70a4, 0x00041a61, 0x41050450,
    0x00684006, 0x00000000, 0x00042c41, 0x1a058aa0,
    0x0a461805, 0x417d70a4, 0xef261162, 0x00001a03,
    0x00040070, 0x33058aa0, 0x3a461005, 0x0704ec3d,
    0x00043170, 0x3d058aa0, 0x5a461405, 0x77f684df,
    0x00041165, 0x00010220, 0x22463d05, 0x00463305,
    0xef3e1462, 0x00001d03, 0x00041c70, 0x46058550,
    0x25584105, 0x00000000, 0x00041961, 0x42050560,
    0x20464605, 0x00000000, 0x01040022, 0x0001c060,
    0x00000130, 0x00000130, 0x00042e69, 0x47058660,
    0x02464405, 0x00000005, 0xa04a9c40, 0x47003902,
    0xe0480068, 0x01b04403, 0x274c1a70, 0x39004a03,
    0xa0500040, 0x01004a03, 0x00033c61, 0x61060220,
    0x00344a05, 0x00000000, 0x00133c61, 0x63060220,
    0x00344b05, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00042c52, 0x4e040e68,
    0x0e2e3b05, 0x4c054805, 0x27521c70, 0x4a005003,
    0x00131a61, 0x63260220, 0x00344f05, 0x00000000,
    0x00031b61, 0x61260220, 0x00344e05, 0x00000000,
    0xa0561b40, 0x4e025202, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x03440000,
    0xfb046124, 0x003c0000, 0x00033c61, 0x62060220,
    0x00345005, 0x00000000, 0x00133c61, 0x64060220,
    0x00345105, 0x00000000, 0x00031a61, 0x62260220,
    0x00345605, 0x00000000, 0x00131a61, 0x64260220,
    0x00345705, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x0b440000,
    0xfb046224, 0x003c0000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80030061, 0x78054010,
    0x00000000, 0x76543210, 0x80031961, 0x78050120,
    0x00467805, 0x00000000, 0xe4791940, 0x00807803,
    0xe3781969, 0x00207803, 0xe3781940, 0x18007803,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049231, 0x76160100, 0xfa007814, 0x04000000,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x00042e69, 0x45058660, 0x02467605, 0x00000002,
    0x00041961, 0x47050220, 0x00464505, 0x00000000,
    0x00041970, 0x00018220, 0x42464705, 0x00000120,
    0x01040028, 0x0001c660, 0x000000a0, 0x000000a0,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x63058660, 0x02464705, 0x00000002,
    0x00043c61, 0x33054220, 0x00000000, 0x7f800000,
    0x00042c61, 0x35054220, 0x00000000, 0x7f800000,
    0x00042c61, 0x37054220, 0x00000000, 0x7f800000,
    0x00042c61, 0x39054220, 0x00000000, 0x7f800000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x00000000, 0xea0c6314, 0x003c3344,
    0x00040040, 0x47058660, 0x06464705, 0x00000800,
    0x00040027, 0x00014060, 0x00000000, 0xffffff50,
    0x00041970, 0x00018220, 0x42464505, 0x00000030,
    0x01040028, 0x0001c660, 0x000000a8, 0x000000a8,
    0x00043e69, 0x57058660, 0x02464505, 0x00000002,
    0x00042c61, 0x34054220, 0x00000000, 0x00000000,
    0x00042c61, 0x36054220, 0x00000000, 0x00000000,
    0x00042c61, 0x38054220, 0x00000000, 0x00000000,
    0x00042c61, 0x3a054220, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0xa0641d40, 0x48005703, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x00000000,
    0xea0c6414, 0x003c3444, 0x00040040, 0x45058660,
    0x06464505, 0x00000800, 0x00040027, 0x00014060,
    0x00000000, 0xffffff48, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80004331, 0x580c0000,
    0xe23e000c, 0x00040000, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0x80033e61, 0x59054220,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80011961, 0x59550000,
    0x0000005c, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80044431, 0x00000000,
    0x3008590c, 0x00000000, 0x80040001, 0x00000000,
    0xe0000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80032c61, 0x37054010,
    0x00000000, 0x76543210, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x00041161, 0x13062650,
    0x00464205, 0x00000000, 0x80031a61, 0x37050120,
    0x00463705, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x00041a65, 0x64058110,
    0x01561306, 0x00010001, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xe4382c40, 0x00803703,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x00041a61, 0x65050450, 0x00686406, 0x00000000,
    0xe3371a69, 0x00203703, 0x00041a70, 0x66058550,
    0x25586505, 0x00000000, 0xe3371a40, 0x08003703,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00042c61, 0x35050560, 0x00466605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049c31, 0x00020100, 0xfa083714, 0x04003504,
    0x80032c61, 0x3a054010, 0x00000000, 0x76543210,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x205a2c40, 0x0b000300, 0x80030061, 0x6c054010,
    0x00000000, 0x76543210, 0x80031a61, 0x3a050120,
    0x00463a05, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x205d1140, 0x2b205a00,
    0x80031a61, 0x6c050120, 0x00466c05, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0xe43b2c40, 0x00803a03, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x20601141, 0x21005d00,
    0xe46d1a40, 0x00806c03, 0xe33a1a69, 0x00203a03,
    0xe36c1a69, 0x00206c03, 0xe33a1a40, 0x08003a03,
    0xe36c1a40, 0x14006c03, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049531, 0x38160100,
    0xfa003a14, 0x04000000, 0x80002501, 0x00000000,
    0x00000000, 0x00000000, 0x00041461, 0x14062650,
    0x00463805, 0x00000000, 0x00041965, 0x68058110,
    0x01561406, 0x00010001, 0x00041961, 0x69050450,
    0x00686806, 0x00000000, 0x00041970, 0x6a058550,
    0x25586905, 0x00000000, 0x00041961, 0x13050560,
    0x00466a05, 0x00000000, 0x00041161, 0x6a050a20,
    0x00466005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049c31, 0x00020100,
    0xfa086c14, 0x04006a04, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x205b2c40, 0x0d000500,
    0x80030061, 0x23054010, 0x00000000, 0x76543210,
    0x205e1140, 0x2d205b00, 0x80031961, 0x23050120,
    0x00462305, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x20610941, 0x26005e00,
    0xe4241940, 0x00802303, 0x00041161, 0x21050a20,
    0x00466105, 0x00000000, 0xe3231a69, 0x00202303,
    0xe3231940, 0x00002303, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049631, 0x00020100,
    0xfa082314, 0x04002104, 0x205c2c40, 0x0f000700,
    0x80031361, 0x2e054010, 0x00000000, 0x76543210,
    0x205f0940, 0x2f205c00, 0x80031961, 0x2e050120,
    0x00462e05, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x20620941, 0x3e005f00,
    0xe42f0940, 0x00802e03, 0x00041161, 0x2c050a20,
    0x00466205, 0x00000000, 0xe32e1a69, 0x00202e03,
    0xe32e1940, 0x04002e03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049731, 0x00020100,
    0xfa082e14, 0x04002c04, 0x80000061, 0x15064210,
    0x00000000, 0x00000000, 0x80001961, 0x30010110,
    0x00001504, 0x00000000, 0x00040070, 0x00018220,
    0x22461305, 0x00000000, 0x00040061, 0x01050120,
    0x00003000, 0x00000000, 0x00043c69, 0x6b050660,
    0x02465405, 0x00462905, 0xe0150065, 0x00302903,
    0xe0170068, 0x00202903, 0xe0191b65, 0x07706b03,
    0x00041a70, 0x00018660, 0x16460105, 0x00000000,
    0x01040028, 0x0001c660, 0x00000af8, 0x00000af8,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x0004114c, 0x21050220, 0x00460105, 0x00000000,
    0x80030061, 0x1f054010, 0x00000000, 0x76543210,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x1f050120, 0x00461f05, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xe4200940, 0x00801f03, 0xe31f1969, 0x00201f03,
    0xe31f1940, 0x14001f03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049931, 0x1d160100,
    0xfa001f14, 0x04000000, 0x80033961, 0x1f054010,
    0x00000000, 0x76543210, 0x80031961, 0x1f050120,
    0x00461f05, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0xe4201940, 0x00801f03,
    0xe31f1969, 0x00201f03, 0xe31f1940, 0x14001f03,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x80040061, 0x10014110, 0x00000000, 0x03a003a0,
    0x00040069, 0x10018510, 0x01562106, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x03a003a0,
    0xe01b0961, 0x001b0004, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049a31, 0x1d160100,
    0xfa001f14, 0x04000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80002a01, 0x00000000,
    0x00000000, 0x00000000, 0xac211970, 0x1d001b02,
    0x201d1965, 0x13002103, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x00041961, 0x1f062650,
    0x00461d05, 0x00000000, 0x00041965, 0x7e058110,
    0x01561f06, 0x00010001, 0x00041961, 0x7f050450,
    0x00687e06, 0x00000000, 0x00041970, 0x1f058550,
    0x25587f05, 0x00000000, 0x00041961, 0x1d050560,
    0x20461f05, 0x00000000, 0x01040062, 0x1f058220,
    0x02460b05, 0xff800000, 0x01040062, 0x21058220,
    0x02460305, 0x7f800000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x01041162, 0x23058220,
    0x02460505, 0x7f800000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x01041762, 0x2b058220,
    0x02460705, 0x7f800000, 0xa3250c61, 0xff810000,
    0x60250061, 0x00101f00, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x1f058220,
    0x02460d05, 0xff800000, 0x80031161, 0x55060220,
    0x00442526, 0x00000000, 0xa3271a61, 0xff810000,
    0x60270061, 0x00101f00, 0xa31f1d61, 0x7f810000,
    0x601f0061, 0x00102100, 0xa3211c61, 0x7f810000,
    0x60210061, 0x00102300, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x23058220,
    0x02460f05, 0xff800000, 0x80031361, 0x63060220,
    0x00442726, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80031261, 0x2d060220,
    0x00441f26, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x3b060220,
    0x00442126, 0x00000000, 0xa3290c61, 0xff810000,
    0x60290061, 0x00102300, 0x00040070, 0x00018660,
    0x16461505, 0x00000001, 0xa3231f61, 0x7f810000,
    0x60230061, 0x00102b00, 0x80031b62, 0x2b060aa0,
    0x5a441f06, 0x00442d06, 0x80030961, 0x1f260220,
    0x00442b06, 0x00000000, 0x80031161, 0x2d060220,
    0x00442326, 0x00000000, 0x80021a61, 0x31070220,
    0x00421f27, 0x00000000, 0x80023c61, 0x33070220,
    0x00421f47, 0x00000000, 0x80031c62, 0x2b060aa0,
    0x5a442106, 0x00443b06, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80020962, 0x2f070aa0,
    0x5a423107, 0x00423307, 0x80030a61, 0x21260220,
    0x00442b06, 0x00000000, 0x80031261, 0x3b060220,
    0x00442926, 0x00000000, 0x80021161, 0x1f470220,
    0x00422f07, 0x00000000, 0x80020b61, 0x3f070220,
    0x00422127, 0x00000000, 0x80020061, 0x41070220,
    0x00422147, 0x00000000, 0x80031d62, 0x2b060aa0,
    0x4a442506, 0x00445506, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80021b61, 0x37070220,
    0x00421f27, 0x00000000, 0x80023561, 0x39070220,
    0x00421f67, 0x00000000, 0x80021b62, 0x3d070aa0,
    0x5a423f07, 0x00424107, 0x80031261, 0x25260220,
    0x00442b06, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80021a62, 0x35070aa0,
    0x5a423707, 0x00423907, 0x80021261, 0x21470220,
    0x00423d07, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80021a61, 0x59070220,
    0x00422527, 0x00000000, 0x80020061, 0x5b070220,
    0x00422547, 0x00000000, 0x80031c62, 0x2b060aa0,
    0x4a442706, 0x00446306, 0x80021261, 0x1f670220,
    0x00423507, 0x00000000, 0x80021c61, 0x45070220,
    0x00422127, 0x00000000, 0x80020061, 0x47070220,
    0x00422167, 0x00000000, 0x80021c62, 0x57070aa0,
    0x4a425907, 0x00425b07, 0x80031261, 0x27260220,
    0x00442b06, 0x00000000, 0x80021c62, 0x1f850aa0,
    0x5a001f64, 0x00341f85, 0x80021c62, 0x20850aa0,
    0x5a002064, 0x00342085, 0x80002e01, 0x00000000,
    0x00000000, 0x00000000, 0x80021a62, 0x43070aa0,
    0x5a424507, 0x00424707, 0x80021461, 0x25470220,
    0x00425707, 0x00000000, 0x80021a61, 0x67070220,
    0x00422727, 0x00000000, 0x80023c61, 0x69070220,
    0x00422747, 0x00000000, 0x80031c62, 0x2b060aa0,
    0x5a442306, 0x00442d06, 0x80031362, 0x20050aa0,
    0x5a001fe4, 0x00462005, 0x80021361, 0x21670220,
    0x00424307, 0x00000000, 0x80021c61, 0x5f070220,
    0x00422527, 0x00000000, 0x80020061, 0x61070220,
    0x00422567, 0x00000000, 0x80021c62, 0x65070aa0,
    0x4a426707, 0x00426907, 0x80031361, 0x23260220,
    0x00442b06, 0x00000000, 0x80021c62, 0x21850aa0,
    0x5a002164, 0x00342185, 0x80021c62, 0x22850aa0,
    0x5a002264, 0x00342285, 0x80021a62, 0x5d070aa0,
    0x4a425f07, 0x00426107, 0x80021461, 0x27470220,
    0x00426507, 0x00000000, 0x80021a61, 0x4b070220,
    0x00422327, 0x00000000, 0x80020061, 0x4d070220,
    0x00422347, 0x00000000, 0x80031c62, 0x2b060aa0,
    0x4a442906, 0x00443b06, 0x80031362, 0x22050aa0,
    0x5a0021e4, 0x00462205, 0x80021361, 0x25670220,
    0x00425d07, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80021c61, 0x6d070220,
    0x00422727, 0x00000000, 0x80023c61, 0x6f070220,
    0x00422767, 0x00000000, 0x80021c62, 0x49070aa0,
    0x5a424b07, 0x00424d07, 0x80031361, 0x29260220,
    0x00442b06, 0x00000000, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x2b050220,
    0x020022e4, 0x000020e4, 0x80021d62, 0x25850aa0,
    0x4a002564, 0x00342585, 0x80021d62, 0x26850aa0,
    0x4a002664, 0x00342685, 0x80021b62, 0x6b070aa0,
    0x4a426d07, 0x00426f07, 0x80021461, 0x23470220,
    0x00424907, 0x00000000, 0x80021b61, 0x73070220,
    0x00422927, 0x00000000, 0x80020061, 0x75070220,
    0x00422947, 0x00000000, 0x80031262, 0x26050aa0,
    0x4a0025e4, 0x00462605, 0x80021261, 0x27670220,
    0x00426b07, 0x00000000, 0x80021c61, 0x51070220,
    0x00422327, 0x00000000, 0x80020061, 0x53070220,
    0x00422367, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80021c62, 0x71070aa0,
    0x4a427307, 0x00427507, 0x80021b62, 0x27850aa0,
    0x4a002764, 0x00342785, 0x80021b62, 0x28850aa0,
    0x4a002864, 0x00342885, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x4f070aa0,
    0x5a425107, 0x00425307, 0x80021461, 0x29470220,
    0x00427107, 0x00000000, 0x80031262, 0x28050aa0,
    0x4a0027e4, 0x00462805, 0x80021261, 0x23670220,
    0x00424f07, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80021a61, 0x79070220,
    0x00422927, 0x00000000, 0x80020061, 0x7b070220,
    0x00422967, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x1f050220,
    0x020028e4, 0x000026e4, 0x80021c62, 0x23850aa0,
    0x5a002364, 0x00342385, 0x80021c62, 0x24850aa0,
    0x5a002464, 0x00342485, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80021a62, 0x77070aa0,
    0x4a427907, 0x00427b07, 0x00040070, 0x00018660,
    0x16461505, 0x00000002, 0x80031262, 0x24050aa0,
    0x5a0023e4, 0x00462405, 0x80021261, 0x29670220,
    0x00427707, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x2f210062, 0x2b012483,
    0x80021a62, 0x29850aa0, 0x4a002964, 0x00342985,
    0x80021a62, 0x2a850aa0, 0x4a002a64, 0x00342a85,
    0x80031162, 0x2a050aa0, 0x4a0029e4, 0x00462a05,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x2f230062, 0x1f012a83, 0x00040070, 0x00018660,
    0x16461705, 0x00000000, 0x2f1f1a62, 0x23202100,
    0x00040070, 0x00018660, 0x26461905, 0x00000000,
    0x01040022, 0x0001c060, 0x00000060, 0x00000060,
    0x60211141, 0x00601b02, 0x601b1941, 0x00301702,
    0x00040952, 0x23040e68, 0x0e0e2105, 0x1b051505,
    0x00041969, 0x1b058660, 0x02462305, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x00000000, 0xea2a1b14, 0x01001f14,
    0x00040025, 0x00004600, 0x00000000, 0x00000078,
    0x00043864, 0x1b050660, 0x00461d05, 0x00000000,
    0x80000061, 0x7d064210, 0x00000000, 0x00000000,
    0x80001961, 0x30010110, 0x00007d04, 0x00000000,
    0x00041b70, 0x00018220, 0x22461b05, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00041161, 0x1e050120, 0x00003000, 0x00000000,
    0x20011965, 0x1e000103, 0x00040027, 0x00014060,
    0x00000000, 0xfffff4f8, 0x80031461, 0x26054010,
    0x00000000, 0x76543210, 0x80000061, 0x1d064210,
    0x00000000, 0x00000000, 0x80031a61, 0x26050120,
    0x00462605, 0x00000000, 0xe4270940, 0x00802603,
    0xe3261969, 0x00202603, 0xe3261940, 0x00002603,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049b31, 0x24160100, 0xfa002614, 0x04000000,
    0x80002b01, 0x00000000, 0x00000000, 0x00000000,
    0xa01b0040, 0x01002403, 0x80001e61, 0x30010110,
    0x00001d04, 0x00000000, 0x00040070, 0x00018220,
    0x22461305, 0x00000000, 0x00040061, 0x01050120,
    0x00003000, 0x00000000, 0x00041970, 0x00018660,
    0x16460105, 0x00000000, 0x01040028, 0x0001c660,
    0x000009b8, 0x000009b8, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x0004094c, 0x1f050220,
    0x00460105, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80041961, 0x10014110,
    0x00000000, 0x03600360, 0x00040069, 0x10018510,
    0x01561f06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x03600360, 0xe01d0961, 0x001b0004,
    0xac1f1970, 0x1b001d02, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x20210965, 0x13001f03,
    0x00041961, 0x1f062650, 0x00462105, 0x00000000,
    0x00041965, 0x21058110, 0x01561f06, 0x00010001,
    0x00041961, 0x22050450, 0x00682106, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00040970, 0x23058550, 0x25582205, 0x00000000,
    0x00041961, 0x1f050560, 0x20462305, 0x00000000,
    0x01040062, 0x21058220, 0x02460b05, 0xff800000,
    0x01041162, 0x23058220, 0x02460305, 0x7f800000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x25058220, 0x02460505, 0x7f800000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x2d058220, 0x02460705, 0x7f800000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0xa3271c61, 0xff810000, 0x60270061, 0x00102100,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x21058220, 0x02460d05, 0xff800000,
    0x80031161, 0x57060220, 0x00442726, 0x00000000,
    0xa3290a61, 0xff810000, 0x60290061, 0x00102100,
    0xa3211d61, 0x7f810000, 0x60210061, 0x00102300,
    0xa3231c61, 0x7f810000, 0x60230061, 0x00102500,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x25058220, 0x02460f05, 0xff800000,
    0x80031361, 0x65060220, 0x00442926, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80031261, 0x2f060220, 0x00442126, 0x00000000,
    0x80031161, 0x3d060220, 0x00442326, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xa32b0c61, 0xff810000, 0x602b0061, 0x00102500,
    0x00040070, 0x00018660, 0x16461505, 0x00000001,
    0xa3251f61, 0x7f810000, 0x60250061, 0x00102d00,
    0x80031b62, 0x2d060aa0, 0x5a442106, 0x00442f06,
    0x80030961, 0x21260220, 0x00442d06, 0x00000000,
    0x80031161, 0x2f060220, 0x00442526, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80021a61, 0x33070220, 0x00422127, 0x00000000,
    0x80023c61, 0x35070220, 0x00422147, 0x00000000,
    0x80031c62, 0x2d060aa0, 0x5a442306, 0x00443d06,
    0x80021962, 0x31070aa0, 0x5a423307, 0x00423507,
    0x80030a61, 0x23260220, 0x00442d06, 0x00000000,
    0x80031261, 0x3d060220, 0x00442b26, 0x00000000,
    0x80021161, 0x21470220, 0x00423107, 0x00000000,
    0x80021b61, 0x41070220, 0x00422327, 0x00000000,
    0x80022e61, 0x43070220, 0x00422347, 0x00000000,
    0x80031d62, 0x2d060aa0, 0x4a442706, 0x00445706,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80021b61, 0x39070220, 0x00422127, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80022c61, 0x3b070220, 0x00422167, 0x00000000,
    0x80021b62, 0x3f070aa0, 0x5a424107, 0x00424307,
    0x80031261, 0x27260220, 0x00442d06, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80021a62, 0x37070aa0, 0x5a423907, 0x00423b07,
    0x80021261, 0x23470220, 0x00423f07, 0x00000000,
    0x80021a61, 0x5b070220, 0x00422727, 0x00000000,
    0x80020061, 0x5d070220, 0x00422747, 0x00000000,
    0x80031c62, 0x2d060aa0, 0x4a442906, 0x00446506,
    0x80021261, 0x21670220, 0x00423707, 0x00000000,
    0x80021c61, 0x47070220, 0x00422327, 0x00000000,
    0x80020061, 0x49070220, 0x00422367, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80021c62, 0x59070aa0, 0x4a425b07, 0x00425d07,
    0x80031261, 0x29260220, 0x00442d06, 0x00000000,
    0x80021c62, 0x21850aa0, 0x5a002164, 0x00342185,
    0x80021c62, 0x22850aa0, 0x5a002264, 0x00342285,
    0x80021a62, 0x45070aa0, 0x5a424707, 0x00424907,
    0x80021461, 0x27470220, 0x00425907, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80021a61, 0x69070220, 0x00422927, 0x00000000,
    0x80020061, 0x6b070220, 0x00422947, 0x00000000,
    0x80031c62, 0x2d060aa0, 0x5a442506, 0x00442f06,
    0x80031362, 0x22050aa0, 0x5a0021e4, 0x00462205,
    0x80021361, 0x23670220, 0x00424507, 0x00000000,
    0x80021c61, 0x61070220, 0x00422727, 0x00000000,
    0x80020061, 0x63070220, 0x00422767, 0x00000000,
    0x80021c62, 0x67070aa0, 0x4a426907, 0x00426b07,
    0x80031361, 0x25260220, 0x00442d06, 0x00000000,
    0x80021c62, 0x23850aa0, 0x5a002364, 0x00342385,
    0x80021c62, 0x24850aa0, 0x5a002464, 0x00342485,
    0x80021a62, 0x5f070aa0, 0x4a426107, 0x00426307,
    0x80021461, 0x29470220, 0x00426707, 0x00000000,
    0x80021a61, 0x4d070220, 0x00422527, 0x00000000,
    0x80023c61, 0x4f070220, 0x00422547, 0x00000000,
    0x80031c62, 0x2d060aa0, 0x4a442b06, 0x00443d06,
    0x80031362, 0x24050aa0, 0x5a0023e4, 0x00462405,
    0x80021361, 0x27670220, 0x00425f07, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80021c61, 0x6f070220, 0x00422927, 0x00000000,
    0x80023c61, 0x71070220, 0x00422967, 0x00000000,
    0x80021c62, 0x4b070aa0, 0x5a424d07, 0x00424f07,
    0x80031361, 0x2b260220, 0x00442d06, 0x00000000,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x2d050220, 0x020024e4, 0x000022e4,
    0x80021d62, 0x27850aa0, 0x4a002764, 0x00342785,
    0x80021d62, 0x28850aa0, 0x4a002864, 0x00342885,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80021b62, 0x6d070aa0, 0x4a426f07, 0x00427107,
    0x80021461, 0x25470220, 0x00424b07, 0x00000000,
    0x80021b61, 0x75070220, 0x00422b27, 0x00000000,
    0x80023261, 0x77070220, 0x00422b47, 0x00000000,
    0x80031262, 0x28050aa0, 0x4a0027e4, 0x00462805,
    0x80021261, 0x29670220, 0x00426d07, 0x00000000,
    0x80021c61, 0x53070220, 0x00422527, 0x00000000,
    0x80020061, 0x55070220, 0x00422567, 0x00000000,
    0x80021c62, 0x73070aa0, 0x4a427507, 0x00427707,
    0x80021b62, 0x29850aa0, 0x4a002964, 0x00342985,
    0x80021b62, 0x2a850aa0, 0x4a002a64, 0x00342a85,
    0x80021962, 0x51070aa0, 0x5a425307, 0x00425507,
    0x80021461, 0x2b470220, 0x00427307, 0x00000000,
    0x80031262, 0x2a050aa0, 0x4a0029e4, 0x00462a05,
    0x80021261, 0x25670220, 0x00425107, 0x00000000,
    0x80021a61, 0x7b070220, 0x00422b27, 0x00000000,
    0x80020061, 0x7d070220, 0x00422b67, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x21050220, 0x02002ae4, 0x000028e4,
    0x80021c62, 0x25850aa0, 0x5a002564, 0x00342585,
    0x80021c62, 0x26850aa0, 0x5a002664, 0x00342685,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80021a62, 0x79070aa0, 0x4a427b07, 0x00427d07,
    0x00040070, 0x00018660, 0x16461505, 0x00000002,
    0x80031262, 0x26050aa0, 0x5a0025e4, 0x00462605,
    0x80021261, 0x2b670220, 0x00427907, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x2f230062, 0x2d012683, 0x80021a62, 0x2b850aa0,
    0x4a002b64, 0x00342b85, 0x80021a62, 0x2c850aa0,
    0x4a002c64, 0x00342c85, 0x80031162, 0x2c050aa0,
    0x4a002be4, 0x00462c05, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x2f250062, 0x21012c83,
    0x00040070, 0x00018660, 0x16461705, 0x00000000,
    0x2f211a62, 0x25202300, 0x00040070, 0x00018660,
    0x26461905, 0x00000000, 0x01040022, 0x0001c060,
    0x00000060, 0x00000060, 0x60231141, 0x00601d02,
    0x601d0041, 0x00301702, 0x00040952, 0x25040e68,
    0x0e0e2305, 0x1d051505, 0x00041969, 0x1d058660,
    0x02462505, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xea2a1d14, 0x01002114, 0x00040025, 0x00004600,
    0x00000000, 0x00000068, 0x00043664, 0x1d050660,
    0x00461f05, 0x00000000, 0x80000061, 0x7f064210,
    0x00000000, 0x00000000, 0x80001961, 0x30010110,
    0x00007f04, 0x00000000, 0x00041b70, 0x00018220,
    0x22461d05, 0x00000000, 0x00040061, 0x1d050120,
    0x00003000, 0x00000000, 0x20011965, 0x1d000103,
    0x00040027, 0x00014060, 0x00000000, 0xfffff638,
    0x80030061, 0x31054010, 0x00000000, 0x76543210,
    0x80000061, 0x1e064210, 0x00000000, 0x00000000,
    0x80031a61, 0x31050120, 0x00463105, 0x00000000,
    0xe4321940, 0x00803103, 0xe3311969, 0x00203103,
    0xe3311940, 0x04003103, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049c31, 0x2f160100,
    0xfa003114, 0x04000000, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0xa01b1f40, 0x02002f03,
    0x80001e61, 0x30010110, 0x00001e04, 0x00000000,
    0x00040070, 0x00018220, 0x22461305, 0x00000000,
    0x00041f61, 0x01050120, 0x00003000, 0x00000000,
    0x00041970, 0x00018660, 0x16460105, 0x00000000,
    0x01040028, 0x0001c660, 0x000009b8, 0x000009b8,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x0004094c, 0x1f050220, 0x00460105, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80041961, 0x10014110, 0x00000000, 0x03600360,
    0x00040069, 0x10018510, 0x01561f06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x03600360,
    0xe01d0961, 0x001b0004, 0xac1f1970, 0x1b001d02,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x20210965, 0x13001f03, 0x00041961, 0x1f062650,
    0x00462105, 0x00000000, 0x00040965, 0x25058110,
    0x01561f06, 0x00010001, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x26050450,
    0x00682506, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00040070, 0x27058550,
    0x25582605, 0x00000000, 0x00041961, 0x1f050560,
    0x20462705, 0x00000000, 0x01040062, 0x21058220,
    0x02460b05, 0xff800000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x01041162, 0x23058220,
    0x02460305, 0x7f800000, 0x01040062, 0x25058220,
    0x02460505, 0x7f800000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x2d058220,
    0x02460705, 0x7f800000, 0xa3271c61, 0xff810000,
    0x60270061, 0x00102100, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x21058220,
    0x02460d05, 0xff800000, 0x80031161, 0x57060220,
    0x00442726, 0x00000000, 0xa3290a61, 0xff810000,
    0x60290061, 0x00102100, 0xa3211d61, 0x7f810000,
    0x60210061, 0x00102300, 0xa3231c61, 0x7f810000,
    0x60230061, 0x00102500, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x25058220,
    0x02460f05, 0xff800000, 0x80031361, 0x65060220,
    0x00442926, 0x00000000, 0x80031261, 0x2f060220,
    0x00442126, 0x00000000, 0x80031161, 0x3d060220,
    0x00442326, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0xa32b0c61, 0xff810000,
    0x602b0061, 0x00102500, 0x00040070, 0x00018660,
    0x16461505, 0x00000001, 0xa3251f61, 0x7f810000,
    0x60250061, 0x00102d00, 0x80031b62, 0x2d060aa0,
    0x5a442106, 0x00442f06, 0x80030961, 0x21260220,
    0x00442d06, 0x00000000, 0x80031161, 0x2f060220,
    0x00442526, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80021a61, 0x33070220,
    0x00422127, 0x00000000, 0x80023c61, 0x35070220,
    0x00422147, 0x00000000, 0x80031c62, 0x2d060aa0,
    0x5a442306, 0x00443d06, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x31070aa0,
    0x5a423307, 0x00423507, 0x80030a61, 0x23260220,
    0x00442d06, 0x00000000, 0x80031261, 0x3d060220,
    0x00442b26, 0x00000000, 0x80021161, 0x21470220,
    0x00423107, 0x00000000, 0x80021b61, 0x41070220,
    0x00422327, 0x00000000, 0x80022e61, 0x43070220,
    0x00422347, 0x00000000, 0x80031d62, 0x2d060aa0,
    0x4a442706, 0x00445706, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80021b61, 0x39070220,
    0x00422127, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80022c61, 0x3b070220,
    0x00422167, 0x00000000, 0x80021b62, 0x3f070aa0,
    0x5a424107, 0x00424307, 0x80031261, 0x27260220,
    0x00442d06, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80021a62, 0x37070aa0,
    0x5a423907, 0x00423b07, 0x80021261, 0x23470220,
    0x00423f07, 0x00000000, 0x80021a61, 0x5b070220,
    0x00422727, 0x00000000, 0x80020061, 0x5d070220,
    0x00422747, 0x00000000, 0x80031c62, 0x2d060aa0,
    0x4a442906, 0x00446506, 0x80021261, 0x21670220,
    0x00423707, 0x00000000, 0x80021c61, 0x47070220,
    0x00422327, 0x00000000, 0x80020061, 0x49070220,
    0x00422367, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80021c62, 0x59070aa0,
    0x4a425b07, 0x00425d07, 0x80031261, 0x29260220,
    0x00442d06, 0x00000000, 0x80021c62, 0x21850aa0,
    0x5a002164, 0x00342185, 0x80021c62, 0x22850aa0,
    0x5a002264, 0x00342285, 0x80021a62, 0x45070aa0,
    0x5a424707, 0x00424907, 0x80021461, 0x27470220,
    0x00425907, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80021a61, 0x69070220,
    0x00422927, 0x00000000, 0x80020061, 0x6b070220,
    0x00422947, 0x00000000, 0x80031c62, 0x2d060aa0,
    0x5a442506, 0x00442f06, 0x80031362, 0x22050aa0,
    0x5a0021e4, 0x00462205, 0x80021361, 0x23670220,
    0x00424507, 0x00000000, 0x80021c61, 0x61070220,
    0x00422727, 0x00000000, 0x80020061, 0x63070220,
    0x00422767, 0x00000000, 0x80021c62, 0x67070aa0,
    0x4a426907, 0x00426b07, 0x80031361, 0x25260220,
    0x00442d06, 0x00000000, 0x80021c62, 0x23850aa0,
    0x5a002364, 0x00342385, 0x80021c62, 0x24850aa0,
    0x5a002464, 0x00342485, 0x80021a62, 0x5f070aa0,
    0x4a426107, 0x00426307, 0x80021461, 0x29470220,
    0x00426707, 0x00000000, 0x80021a61, 0x4d070220,
    0x00422527, 0x00000000, 0x80023c61, 0x4f070220,
    0x00422547, 0x00000000, 0x80031c62, 0x2d060aa0,
    0x4a442b06, 0x00443d06, 0x80031362, 0x24050aa0,
    0x5a0023e4, 0x00462405, 0x80021361, 0x27670220,
    0x00425f07, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80021c61, 0x6f070220,
    0x00422927, 0x00000000, 0x80023c61, 0x71070220,
    0x00422967, 0x00000000, 0x80021c62, 0x4b070aa0,
    0x5a424d07, 0x00424f07, 0x80031361, 0x2b260220,
    0x00442d06, 0x00000000, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x2d050220,
    0x020024e4, 0x000022e4, 0x80021d62, 0x27850aa0,
    0x4a002764, 0x00342785, 0x80021d62, 0x28850aa0,
    0x4a002864, 0x00342885, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80021b62, 0x6d070aa0,
    0x4a426f07, 0x00427107, 0x80021461, 0x25470220,
    0x00424b07, 0x00000000, 0x80021b61, 0x75070220,
    0x00422b27, 0x00000000, 0x80023261, 0x77070220,
    0x00422b47, 0x00000000, 0x80031262, 0x28050aa0,
    0x4a0027e4, 0x00462805, 0x80021261, 0x29670220,
    0x00426d07, 0x00000000, 0x80021c61, 0x53070220,
    0x00422527, 0x00000000, 0x80020061, 0x55070220,
    0x00422567, 0x00000000, 0x80021c62, 0x73070aa0,
    0x4a427507, 0x00427707, 0x80021b62, 0x29850aa0,
    0x4a002964, 0x00342985, 0x80021b62, 0x2a850aa0,
    0x4a002a64, 0x00342a85, 0x80021962, 0x51070aa0,
    0x5a425307, 0x00425507, 0x80021461, 0x2b470220,
    0x00427307, 0x00000000, 0x80031262, 0x2a050aa0,
    0x4a0029e4, 0x00462a05, 0x80021261, 0x25670220,
    0x00425107, 0x00000000, 0x80021a61, 0x7b070220,
    0x00422b27, 0x00000000, 0x80020061, 0x7d070220,
    0x00422b67, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x21050220,
    0x02002ae4, 0x000028e4, 0x80021c62, 0x25850aa0,
    0x5a002564, 0x00342585, 0x80021c62, 0x26850aa0,
    0x5a002664, 0x00342685, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80021a62, 0x79070aa0,
    0x4a427b07, 0x00427d07, 0x00040070, 0x00018660,
    0x16461505, 0x00000002, 0x80031262, 0x26050aa0,
    0x5a0025e4, 0x00462605, 0x80021261, 0x2b670220,
    0x00427907, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x2f230062, 0x2d012683,
    0x80021a62, 0x2b850aa0, 0x4a002b64, 0x00342b85,
    0x80021a62, 0x2c850aa0, 0x4a002c64, 0x00342c85,
    0x80031162, 0x2c050aa0, 0x4a002be4, 0x00462c05,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x2f250062, 0x21012c83, 0x00040070, 0x00018660,
    0x16461705, 0x00000000, 0x2f211a62, 0x25202300,
    0x00040070, 0x00018660, 0x26461905, 0x00000000,
    0x01040022, 0x0001c060, 0x00000060, 0x00000060,
    0x60231141, 0x00601d02, 0x601d0041, 0x00301702,
    0x00040952, 0x25040e68, 0x0e0e2305, 0x1d051505,
    0x00041969, 0x1d058660, 0x02462505, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xea2a1d14, 0x01002114,
    0x00040025, 0x00004600, 0x00000000, 0x00000068,
    0x00043664, 0x1d050660, 0x00461f05, 0x00000000,
    0x80000061, 0x7f064210, 0x00000000, 0x00000000,
    0x80001961, 0x30010110, 0x00007f04, 0x00000000,
    0x00041b70, 0x00018220, 0x22461d05, 0x00000000,
    0x00040061, 0x1d050120, 0x00003000, 0x00000000,
    0x20011965, 0x1d000103, 0x00040027, 0x00014060,
    0x00000000, 0xfffff638, 0x80030061, 0x3d054010,
    0x00000000, 0x76543210, 0x80031961, 0x3d050120,
    0x00463d05, 0x00000000, 0xe43e0940, 0x00803d03,
    0xe33d1969, 0x00203d03, 0xe33d1940, 0x08003d03,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80002c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049d31, 0x3b160100, 0xfa003d14, 0x04000000,
    0x80002d01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x00010660, 0x20463b05, 0x00000000,
    0x01040022, 0x0001c060, 0x000002e0, 0x000002e0,
    0x80030061, 0x6f054010, 0x00000000, 0x76543210,
    0x80031961, 0x6f050120, 0x00466f05, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0xe4701940, 0x00806f03, 0xe36f1969, 0x00206f03,
    0xe36f1940, 0x14006f03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80003c65, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80003c66, 0x10218220,
    0x02001020, 0x0000000f, 0x80049c31, 0x6d160100,
    0xfa006f14, 0x04000000, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x28058660,
    0x02466d05, 0x00000002, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0650040, 0x48002803,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x00000000, 0xea106514, 0x01000000,
    0x80031261, 0x2b054010, 0x00000000, 0x76543210,
    0x80031961, 0x2b050120, 0x00462b05, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xe42c1940, 0x00802b03, 0xe32b1969, 0x00202b03,
    0xe32b1940, 0x00002b03, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049731, 0x27160100,
    0xfa002b14, 0x04000000, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x29058660,
    0x02462705, 0x00000002, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0663e40, 0x4c002903,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044f31, 0x00000000, 0xea106614, 0x01000000,
    0x80033c61, 0x34054010, 0x00000000, 0x76543210,
    0x80031961, 0x34050120, 0x00463405, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0xe4351940, 0x00803403, 0xe3341969, 0x00203403,
    0xe3341940, 0x04003403, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80003c65, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80003c66, 0x10218220,
    0x02001020, 0x0000000f, 0x80049c31, 0x32160100,
    0xfa003414, 0x04000000, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x2a058660,
    0x02463205, 0x00000002, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0673f40, 0x50002a03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x00000000, 0xea106714, 0x01000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80000001, 0x00000000, 0x30000000, 0x00000000,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x2b0c0000, 0xe23e000c, 0x00040000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x80033761, 0x2c054220, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80011961, 0x2c550000, 0x0000005c, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80044131, 0x00000000, 0x30082c0c, 0x00000000,
    0x80040001, 0x00000000, 0xe0000000, 0x00000000,
    0x80031661, 0x7b054010, 0x00000000, 0x76543210,
    0x80031961, 0x7b050120, 0x00467b05, 0x00000000,
    0xe47c0940, 0x00807b03, 0xe37b1969, 0x00207b03,
    0xe37b1940, 0x18007b03, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80003265, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80003266, 0x10218220,
    0x02001020, 0x0000000f, 0x80049231, 0x79160100,
    0xfa007b14, 0x04000000, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x48050220,
    0x00467905, 0x00000000, 0x00041970, 0x00018220,
    0x42464805, 0x00000120, 0x01040028, 0x0001c660,
    0x000003c8, 0x000003c8, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x68058660,
    0x02464805, 0x00000002, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x6d140000,
    0xea046814, 0x00040000, 0xae002c70, 0x7f806d01,
    0x01040022, 0x0001c060, 0x00000348, 0x00000348,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80031261, 0x60054010, 0x00000000, 0x76543210,
    0x80033461, 0x63054010, 0x00000000, 0x76543210,
    0x80033561, 0x4d054010, 0x00000000, 0x76543210,
    0x80031b61, 0x60050120, 0x00466005, 0x00000000,
    0x80031b61, 0x63050120, 0x00466305, 0x00000000,
    0x80031b61, 0x4d050120, 0x00464d05, 0x00000000,
    0xe4611b40, 0x00806003, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xe4641b40, 0x00806303,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xe44e1b40, 0x00804d03, 0xe3601b69, 0x00206003,
    0xe3631b69, 0x00206303, 0xe34d1b69, 0x00204d03,
    0xe3601b40, 0x10006003, 0xe3631b40, 0x10006303,
    0xe34d1b40, 0x0c004d03, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049331, 0x5e160100,
    0xfa006014, 0x04000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049431, 0x61160100,
    0xfa006314, 0x04000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049531, 0x4b160100,
    0xfa004d14, 0x04000000, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0xa02d0040, 0x02c05e03,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x272f0070, 0x61002d03, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0310040, 0x68002d02,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x27330070, 0x2d003103, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x69060220,
    0x00343105, 0x00000000, 0x80103c01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x6b060220,
    0x00343205, 0x00000000, 0x80002501, 0x00000000,
    0x00000000, 0x00000000, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x35042e68,
    0x0e2e2f05, 0x33054b05, 0x00131961, 0x6b260220,
    0x00343605, 0x00000000, 0x00031a61, 0x69260220,
    0x00343505, 0x00000000, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x36140000,
    0xfb2a6924, 0x01006d14, 0x00040025, 0x00004600,
    0x00000000, 0x00000018, 0xa0480040, 0x20004803,
    0x00040027, 0x00014060, 0x00000000, 0xfffffc28,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80031661, 0x7e054010, 0x00000000, 0x76543210,
    0x80031961, 0x7e050120, 0x00467e05, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xe47f1940, 0x00807e03, 0xe37e1969, 0x00207e03,
    0xe37e1940, 0x18007e03, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049631, 0x7c160100,
    0xfa007e14, 0x04000000, 0x80002601, 0x00000000,
    0x00000000, 0x00000000, 0x00040070, 0x00018220,
    0x42467c05, 0x00000030, 0x01040028, 0x0001c660,
    0x000005f0, 0x000005f0, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80031761, 0x04054010,
    0x00000000, 0x76543210, 0x80031961, 0x04050120,
    0x00460405, 0x00000000, 0xe4050940, 0x00800403,
    0xe3041969, 0x00200403, 0xe3041940, 0x18000403,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049731, 0x02160100, 0xfa000414, 0x04000000,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x80002c01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x37058660, 0x02460205, 0x00000002,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0xa06e0040, 0x48003703, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x73140000,
    0xea046e14, 0x00040000, 0x00042c70, 0x00018660,
    0x26467305, 0x00000000, 0x01040022, 0x0001c060,
    0x00000358, 0x00000358, 0x80033f61, 0x66054010,
    0x00000000, 0x76543210, 0x80033c61, 0x69054010,
    0x00000000, 0x76543210, 0x80033861, 0x50054010,
    0x00000000, 0x76543210, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80031b61, 0x66050120,
    0x00466605, 0x00000000, 0x80031b61, 0x69050120,
    0x00466905, 0x00000000, 0x80031b61, 0x50050120,
    0x00465005, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0xe4671b40, 0x00806603,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0xe46a1b40, 0x00806903, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xe4510b40, 0x00805003,
    0xe3661b69, 0x00206603, 0xe3691b69, 0x00206903,
    0xe3501b69, 0x00205003, 0xe3661b40, 0x10006603,
    0xe3691b40, 0x10006903, 0xe3501b40, 0x0c005003,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049f31, 0x64160100, 0xfa006614, 0x04000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80003c65, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80003c66, 0x10218220, 0x02001020, 0x0000000f,
    0x80049c31, 0x67160100, 0xfa006914, 0x04000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049831, 0x4e160100, 0xfa005014, 0x04000000,
    0x80002f01, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xa0390040, 0x4ac06403, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x273b1970, 0x67003903,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0xa03d0040, 0x37003902, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x273f0070, 0x39003d03,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x6f060220, 0x00343d05, 0x00000000,
    0x80103c01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x71060220, 0x00343e05, 0x00000000,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80002c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x41042e68, 0x0e2e3b05, 0x3f054e05,
    0x00131961, 0x71260220, 0x00344205, 0x00000000,
    0x00031a61, 0x6f260220, 0x00344105, 0x00000000,
    0x80002c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x42140000, 0xfb186f24, 0x01007314,
    0x00040025, 0x00004600, 0x00000000, 0x00000168,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80031361, 0x07054010, 0x00000000, 0x76543210,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80031761, 0x0b054010, 0x00000000, 0x76543210,
    0x80031a61, 0x07050120, 0x00460705, 0x00000000,
    0x80031a61, 0x0b050120, 0x00460b05, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xe4080a40, 0x00800703, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0xe40c0a40, 0x00800b03,
    0xe3071a69, 0x00200703, 0xe30b1a69, 0x00200b03,
    0xe3071a40, 0x18000703, 0xe30b1a40, 0x18000b03,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049931, 0x05160100, 0xfa000714, 0x04000000,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0xa0092c40, 0x20000503, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049c31, 0x00020100,
    0xfa080b14, 0x04000904, 0x00040027, 0x00014060,
    0x00000000, 0xfffff948, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80031661, 0x7e050220,
    0x00460005, 0x00000000, 0x80041961, 0x20014aa0,
    0x00000000, 0x00000000, 0x80040931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_BFS_BFS_pass1_indexed_batchable = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 1024,
      .base.total_shared = 1344,
      .base.program_size = 20400,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_BFS_BFS_pass1_indexed_batchable_relocs,
      .base.uses_atomic_load_store = false,
      .local_size = { 512, 1, 1 },
      .prog_offset = { 0, 0, 0 },
      .prog_mask = 2,
      .prog_spilled = 6,
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
   .args = gfx125_bvh_build_BFS_BFS_pass1_indexed_batchable_args,
   .code = gfx125_bvh_build_BFS_BFS_pass1_indexed_batchable_code,
};
const char *gfx125_bvh_build_BFS_BFS_pass1_indexed_batchable_sha1 = "3cc2fa4570954291c7a5b5a11e215e505d55e8cb";

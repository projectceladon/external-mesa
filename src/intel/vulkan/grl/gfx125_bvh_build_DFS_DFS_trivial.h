#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_DFS_DFS_trivial_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_DFS_DFS_trivial_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
   { 24, 8 },
   { 32, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g110<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(8)          g116<1>UW       0x76543210V                     { align1 WE_all 1Q };
mov(16)         g51<1>D         1D                              { align1 1H };
add(1)          g111<1>UD       g110<0,1,0>UD   0x00000000UD    { align1 WE_all 1N I@3 compacted };
add(1)          g112<1>UD       g110<0,1,0>UD   0x00000040UD    { align1 WE_all 1N compacted };
add(8)          g116.8<1>UW     g116<1,1,0>UW   0x0008UW        { align1 WE_all 1Q I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g1UD            g111UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g3UD            g112UD          nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g69<1>D         g116<8,8,1>UW                   { align1 1H };
and(16)         g13<1>UD        g69<1,1,0>UD    0x0000000fUD    { align1 1H I@1 compacted };
mov(16)         g108<2>UW       g13<8,8,1>UD                    { align1 1H I@1 };
mov(16)         g41<1>UD        g13<16,8,2>UW                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g126.1<2>F      g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g4.1<2>F        g2.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g43.1<2>F       g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g63.1<2>F       g2.3<0,1,0>F                    { align1 2Q };
mov(8)          g45.1<2>F       g2.5<0,1,0>F                    { align1 1Q };
mov(8)          g65.1<2>F       g2.5<0,1,0>F                    { align1 2Q };
mov(8)          g47.1<2>F       g2.7<0,1,0>F                    { align1 1Q };
mov(8)          g67.1<2>F       g2.7<0,1,0>F                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
and(16)         g11<1>UD        g3<0,1,0>UD     0x00000001UD    { align1 1H compacted };
mov(8)          g126<2>F        g2<0,1,0>F                      { align1 1Q F@7 compacted };
mov(8)          g4<2>F          g2<0,1,0>F                      { align1 2Q F@7 compacted };
mov(8)          g43<2>F         g2.2<0,1,0>F                    { align1 1Q F@7 compacted };
mov(8)          g63<2>F         g2.2<0,1,0>F                    { align1 2Q F@7 compacted };
mov(8)          g45<2>F         g2.4<0,1,0>F                    { align1 1Q F@7 compacted };
mov(8)          g65<2>F         g2.4<0,1,0>F                    { align1 2Q F@7 compacted };
mov(8)          g47<2>F         g2.6<0,1,0>F                    { align1 1Q F@7 compacted };
mov(8)          g67<2>F         g2.6<0,1,0>F                    { align1 2Q F@7 compacted };
add(8)          g6<1>D          g126<8,4,2>D    36D             { align1 1Q F@7 compacted };
add(8)          g7<1>D          g4<8,4,2>D      36D             { align1 2Q F@7 compacted };
mov(8)          g121<2>UD       g6<4,4,1>UD                     { align1 1Q I@2 };
cmp.l.f0.0(16)  g8<1>UD         g6<1,1,0>UD     0x00000024UD    { align1 1H I@2 compacted };
mov(8)          g123<2>UD       g7<4,4,1>UD                     { align1 2Q };
cmp.nz.f0.0(16) g73<1>D         g11<1,1,0>D     0D              { align1 1H I@6 compacted };
add(8)          g127<1>D        -g8<8,8,1>D     g126.1<8,4,2>D  { align1 1Q I@3 };
add(8)          g9<1>D          -g9<8,8,1>D     g4.1<8,4,2>D    { align1 2Q I@4 };
mov(8)          g121.1<2>UD     g127<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g123.1<2>UD     g9<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g9UD            g121UD          nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
mov(16)         g106<2>UW       g11<8,8,1>UD                    { align1 1H $2.dst };
mov(16)         g71<1>UD        g9<16,8,2>UW                    { align1 1H $2.dst };
cmp.l.f0.0(16)  null<1>D        g41<8,8,1>D     g71<8,8,1>D     { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
shl(16)         g15<1>D         g41<8,8,1>D     0x00000005UD    { align1 1H };
shr(16)         g17<1>UD        g41<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
mov(8)          g19<1>UD        g45.1<8,4,2>UD                  { align1 1Q F@4 };
mov(8)          g20<1>UD        g65.1<8,4,2>UD                  { align1 2Q F@3 };
add(8)          g21<1>D         g45<8,4,2>D     g15<1,1,0>D     { align1 1Q I@4 compacted };
add(8)          g22<1>D         g65<8,4,2>D     g16<1,1,0>D     { align1 2Q I@5 compacted };
cmp.l.f0.0(8)   g23<1>UD        g21<8,8,1>UD    g45<8,4,2>UD    { align1 1Q I@2 };
mov(8)          g98<2>UD        g21<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g24<1>UD        g22<8,8,1>UD    g65<8,4,2>UD    { align1 2Q I@3 };
mov(8)          g100<2>UD       g22<4,4,1>UD                    { align1 2Q };
add(16)         g27<1>D         g21<1,1,0>D     16D             { align1 1H compacted };
add3(16)        g25<1>D         g19<8,8,1>D     g17<8,8,1>D     -g23<1,1,1>D { align1 1H I@3 };
cmp.l.f0.0(16)  g29<1>UD        g27<1,1,0>UD    g21<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g102<2>UD       g27<4,4,1>UD                    { align1 1Q };
mov(8)          g104<2>UD       g28<4,4,1>UD                    { align1 2Q };
mov(8)          g98.1<2>UD      g25<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g100.1<2>UD     g26<4,4,1>UD                    { align1 2Q I@5 };
add(16)         g33<1>D         -g29<1,1,0>D    g25<1,1,0>D     { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g25UD           g98UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $3 };
mov(8)          g102.1<2>UD     g33<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g104.1<2>UD     g34<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g33UD           g102UD          nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $4 };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g31<1>UD        0x00000000UD                    { align1 1H $3.dst };
mov(16)         g29<1>UD        0x7f800000UD                    { align1 1H $3.dst };
mov(16)         g27<1>UD        0x7f800000UD                    { align1 1H $3.dst };
mov(16)         g25<1>UD        0x7f800000UD                    { align1 1H $3.dst };
mov(16)         g39<1>UD        0x80000000UD                    { align1 1H $4.dst };
mov(16)         g37<1>UD        0xff800000UD                    { align1 1H $4.dst };
mov(16)         g35<1>UD        0xff800000UD                    { align1 1H $4.dst };
mov(16)         g33<1>UD        0xff800000UD                    { align1 1H $4.dst };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
cmp.z.f0.0(16)  g49<1>W         g108<16,8,2>W   0W              { align1 1H };
mov.nz.f0.0(16) g75<1>D         g49<8,8,1>W                     { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(8)          g1<1>D          g43<8,4,2>D     12D             { align1 1Q F@6 compacted };
add(8)          g50<1>D         g63<8,4,2>D     12D             { align1 2Q F@5 compacted };
cmp.l.f0.0(8)   g2<1>UD         g1<8,8,1>UD     g43<8,4,2>UD    { align1 1Q A@1 };
cmp.l.f0.0(8)   g53<1>UD        g50<8,8,1>UD    g63<8,4,2>UD    { align1 2Q I@2 };
mov(8)          g122<2>UD       g1<4,4,1>UD                     { align1 1Q $2.src };
mov(8)          g124<2>UD       g50<4,4,1>UD                    { align1 2Q $2.src };
add(8)          g3<1>D          -g2<8,8,1>D     g43.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g54<1>D         -g53<8,8,1>D    g63.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g122.1<2>UD     g3<4,4,1>UD                     { align1 1Q I@2 };
mov(8)          g124.1<2>UD     g54<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g55UD           g122UD          nullUD          0x08240588                0x00000000
                            ugm MsgDesc: ( atomic_inc, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
shl(16)         g49<1>D         g55<8,8,1>D     0x00000006UD    { align1 1H $2.dst };

LABEL3:
endif(16)       JIP:  LABEL4                                    { align1 1H };

LABEL4:
mov(8)          g56<1>UD        g43<8,4,2>UD                    { align1 1Q A@6 };
mov(8)          g57<1>UD        g63<8,4,2>UD                    { align1 2Q A@5 };
add(8)          g77<1>D         g43<8,4,2>D     g49<0,1,0>D     { align1 1Q I@4 compacted };
add(8)          g78<1>D         g63<8,4,2>D     g49<0,1,0>D     { align1 2Q compacted };
add(8)          g5<1>D          g43<8,4,2>D     16D             { align1 1Q compacted };
add(8)          g59<1>D         g63<8,4,2>D     16D             { align1 2Q compacted };
add(16)         g88<1>D         g69<1,1,0>D     4D              { align1 1H compacted };
add(16)         g98<1>D         g69<1,1,0>D     -12D            { align1 1H $3.src compacted };
add(16)         g100<1>D        g69<1,1,0>D     2D              { align1 1H $3.src compacted };
add(16)         g102<1>D        g69<1,1,0>D     -14D            { align1 1H $4.src compacted };
add(16)         g94<1>D         g69<1,1,0>D     1D              { align1 1H compacted };
add(16)         g96<1>D         g69<1,1,0>D     -15D            { align1 1H compacted };
cmp.l.f0.0(8)   g4<1>UD         g77<8,8,1>UD    g43<8,4,2>UD    { align1 1Q I@7 };
cmp.l.f0.0(8)   g58<1>UD        g78<8,8,1>UD    g63<8,4,2>UD    { align1 2Q I@7 };
mov(8)          g13<2>UD        g77<4,4,1>UD                    { align1 1Q };
mov(8)          g15<2>UD        g78<4,4,1>UD                    { align1 2Q };
mov(8)          g90<2>UD        g5<4,4,1>UD                     { align1 1Q };
mov(8)          g92<2>UD        g59<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(8)   g6<1>UD         g5<8,8,1>UD     g43<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(8)   g60<1>UD        g59<8,8,1>UD    g63<8,4,2>UD    { align1 2Q };
cmp.l.f0.0(16)  null<1>D        g88<8,8,1>D     16D             { align1 1H };
add(8)          g79<1>D         -g4<8,8,1>D     g43.1<8,4,2>D   { align1 1Q I@7 };
add(8)          g80<1>D         -g58<8,8,1>D    g63.1<8,4,2>D   { align1 2Q I@7 };
add(8)          g7<1>D          -g6<8,8,1>D     g43.1<8,4,2>D   { align1 1Q I@5 };
add(8)          g61<1>D         -g60<8,8,1>D    g63.1<8,4,2>D   { align1 2Q I@5 };
(+f0.0) sel(16) g23<1>UD        g88<1,1,0>UD    g98<1,1,0>UD    { align1 1H compacted };
mov(8)          g13.1<2>UD      g79<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g15.1<2>UD      g80<4,4,1>UD                    { align1 2Q I@5 };
mov(8)          g90.1<2>UD      g7<4,4,1>UD                     { align1 1Q I@5 };
mov(8)          g92.1<2>UD      g61<4,4,1>UD                    { align1 2Q I@5 };
cmp.l.f0.0(16)  null<1>D        g100<8,8,1>D    16D             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g81UD           g90UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $5 };
(+f0.0) sel(16) g85<1>UD        g100<1,1,0>UD   g102<1,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  null<1>D        g94<8,8,1>D     16D             { align1 1H };
(+f0.0) sel(16) g17<1>UD        g94<1,1,0>UD    g96<1,1,0>UD    { align1 1H compacted };
cmp.z.f0.0(16)  g103<1>W        g106<16,8,2>W   1W              { align1 1H };
mov.nz.f0.0(16) g53<1>D         g103<8,8,1>W                    { align1 1H I@1 };
shl(16)         g83<1>D         g81<8,8,1>D     0x00000006UD    { align1 1H $5.dst };
add3(16)        g87<1>D         g56<8,8,1>D     g83<8,8,1>D     -g77<1,1,1>D { align1 1H I@1 };
asr(16)         g7<1>D          g87<8,8,1>D     0x00000006UD    { align1 1H I@1 };
(-f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL5              { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g69<8,8,1>UD    g71<8,8,1>UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
(+f0.0) sel(16) g91<1>UD        g33<8,8,1>UD    0xff800000UD    { align1 1H $4.dst };
(+f0.0) sel(16) g57<1>UD        g35<8,8,1>UD    0xff800000UD    { align1 1H $4.dst };
(+f0.0) sel(16) g59<1>UD        g37<8,8,1>UD    0xff800000UD    { align1 1H $4.dst };
(+f0.0) sel(16) g81<1>UD        g25<8,8,1>UD    0x7f800000UD    { align1 1H $3.dst };
(+f0.0) sel(16) g83<1>UD        g27<8,8,1>UD    0x7f800000UD    { align1 1H $3.dst };
(+f0.0) sel(16) g19<1>UD        g29<8,8,1>UD    0x7f800000UD    { align1 1H $3.dst };
mov(16)         a0<1>UW         0x0b60UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g23<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b60UW        { align1 1H A@1 };
mov(16)         g95<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         a0<1>UW         0x0720UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g23<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0720UW        { align1 1H A@1 };
mov(16)         g93<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         a0<1>UW         0x0760UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g23<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0760UW        { align1 1H A@1 };
mov(16)         g89<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0a20UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g23<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a20UW        { align1 1H A@1 };
mov(16)         g87<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0a60UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g23<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a60UW        { align1 1H A@1 };
mov(16)         g21<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0260UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g23<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0260UW        { align1 1H A@1 };
mov(16)         g61<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g69<8,8,1>UD    0x00000006UD    { align1 1H };
sel.ge(16)      g55<1>F         g91<1,1,0>F     g95<1,1,0>F     { align1 1H I@7 compacted };
sel.ge(16)      g91<1>F         g57<1,1,0>F     g93<1,1,0>F     { align1 1H A@1 compacted };
sel.ge(16)      g57<1>F         g59<1,1,0>F     g89<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g59<1>F         g81<1,1,0>F     g87<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g87<1>F         g83<1,1,0>F     g21<1,1,0>F     { align1 1H I@3 compacted };
mov(16)         a0<1>UW         0x06e0UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g85<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x06e0UW        { align1 1H A@1 };
mov(16)         g83<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g21<1>F         g19<1,1,0>F     g61<1,1,0>F     { align1 1H I@3 compacted };
mov(16)         a0<1>UW         0x0b60UW                        { align1 WE_all 1H F@5 };
shl(16)         a0<1>UW         g85<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b60UW        { align1 1H A@1 };
mov(16)         g95<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0720UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g85<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0720UW        { align1 1H A@1 };
mov(16)         g93<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0760UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g85<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0760UW        { align1 1H A@1 };
mov(16)         g89<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0ae0UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g85<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ae0UW        { align1 1H A@1 };
mov(16)         g19<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g81<1>F         g55<1,1,0>F     g83<1,1,0>F     { align1 1H A@3 compacted };
mov(16)         a0<1>UW         0x02a0UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g85<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x02a0UW        { align1 1H A@1 };
mov(16)         g61<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g83<1>F         g91<1,1,0>F     g95<1,1,0>F     { align1 1H I@5 compacted };
sel.ge(16)      g55<1>F         g57<1,1,0>F     g93<1,1,0>F     { align1 1H A@2 compacted };
sel.l(16)       g57<1>F         g59<1,1,0>F     g89<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0a20UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g17<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a20UW        { align1 1H A@1 };
mov(16)         g95<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g59<1>F         g87<1,1,0>F     g19<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0a60UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g17<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a60UW        { align1 1H A@1 };
mov(16)         g93<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g19<1>F         g21<1,1,0>F     g61<1,1,0>F     { align1 1H I@3 compacted };
mov(16)         a0<1>UW         0x06e0UW                        { align1 WE_all 1H A@4 };
shl(16)         a0<1>UW         g17<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x06e0UW        { align1 1H A@1 };
mov(16)         g91<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0720UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g17<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0720UW        { align1 1H A@1 };
mov(16)         g89<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g61<1>F         g81<1,1,0>F     g95<1,1,0>F     { align1 1H I@4 compacted };
mov(16)         a0<1>UW         0x0760UW                        { align1 WE_all 1H A@2 };
shl(16)         a0<1>UW         g17<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0760UW        { align1 1H A@1 };
mov(16)         g21<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g81<1>F         g83<1,1,0>F     g93<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0260UW                        { align1 WE_all 1H A@3 };
shl(16)         a0<1>UW         g17<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0260UW        { align1 1H A@1 };
mov(16)         g87<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g83<1>F         g55<1,1,0>F     g91<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g55<1>F         g57<1,1,0>F     g89<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g57<1>F         g59<1,1,0>F     g21<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g59<1>F         g19<1,1,0>F     g87<1,1,0>F     { align1 1H A@1 compacted };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
sel.ge(16)      g87<1>F         (abs)g55<0,1,0>F (abs)g61<0,1,0>F { align1 1H F@1 compacted };
sel.ge(16)      g89<1>F         (abs)g57<0,1,0>F (abs)g81<0,1,0>F { align1 1H F@3 compacted };
sel.ge(16)      g91<1>F         (abs)g59<0,1,0>F (abs)g83<0,1,0>F { align1 1H F@3 compacted };
add(16)         g95<1>D         g77<1,1,0>D     16D             { align1 1H F@7 compacted };
mov(16)         g99<2>B         -1W                             { align1 1H };
sel.ge(16)      g93<1>F         g89<1,1,0>F     g91<1,1,0>F     { align1 1H F@1 compacted };
mov(16)         g97<4>UB        g11<8,8,1>UD                    { align1 1H };
mov(8)          g19<2>UD        g95<4,4,1>UD                    { align1 1Q A@3 };
mov(8)          g21<2>UD        g96<4,4,1>UD                    { align1 2Q A@4 };
sel.ge(16)      g9<1>F          g87<1,1,0>F     g93<1,1,0>F     { align1 1H F@1 compacted };
mov(16)         g11<1>UD        g97<32,8,4>UB                   { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mul(16)         g105<1>F        g9<1,1,0>F      0x34000000F  /* 1.19209e-07F */ { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
add(16)         g1<1>F          g55<0,1,0>F     -g105<1,1,0>F   { align1 1H compacted };
add(16)         g3<1>F          g57<0,1,0>F     -g105<1,1,0>F   { align1 1H compacted };
add(16)         g5<1>F          g59<0,1,0>F     -g105<1,1,0>F   { align1 1H compacted };
add(16)         g107<1>F        g61<0,1,0>F     g105<1,1,0>F    { align1 1H compacted };
add(16)         g109<1>F        g81<0,1,0>F     g105<1,1,0>F    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g111<1>F        g83<0,1,0>F     g105<1,1,0>F    { align1 1H compacted };
add(16)         g113<1>F        g107<1,1,0>F    -g1<1,1,0>F     { align1 1H F@3 compacted };
add(16)         g115<1>F        g109<1,1,0>F    -g3<1,1,0>F     { align1 1H F@3 compacted };
add(16)         g117<1>F        g111<1,1,0>F    -g5<1,1,0>F     { align1 1H F@3 compacted };
mul(16)         g97<1>F         g113<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H A@1 };
mul(16)         g89<1>F         g115<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H F@3 };
mul(16)         g59<1>F         g117<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H F@3 };
and(16)         g55<1>UD        g97<8,8,1>UD    0x007fffffUD    { align1 1H F@3 };
and(16)         g83<1>UD        g97<8,8,1>UD    0x80000000UD    { align1 1H F@7 };
and(16)         g61<1>UD        g97<8,8,1>UD    0x7f800000UD    { align1 1H F@7 };
and(16)         g57<1>UD        g89<8,8,1>UD    0x007fffffUD    { align1 1H F@2 };
and(16)         g87<1>UD        g89<8,8,1>UD    0x80000000UD    { align1 1H };
and(16)         g81<1>UD        g89<8,8,1>UD    0x7f800000UD    { align1 1H F@7 };
and(16)         g91<1>UD        g59<8,8,1>UD    0x007fffffUD    { align1 1H F@1 };
and(16)         g9<1>UD         g59<8,8,1>UD    0x7f800000UD    { align1 1H };
and(16)         g89<1>UD        g59<8,8,1>UD    0x80000000UD    { align1 1H };
add(16)         g59<1>D         g55<8,8,1>D     1056964608D     { align1 1H I@7 };
asr(16)         g55<1>D         g61<8,8,1>D     0x00000017UD    { align1 1H I@7 };
add(16)         g61<1>D         g57<8,8,1>D     1056964608D     { align1 1H I@7 };
asr(16)         g57<1>D         g81<8,8,1>D     0x00000017UD    { align1 1H I@7 };
add(16)         g81<1>D         g91<8,8,1>D     1056964608D     { align1 1H I@7 };
cmp.z.f0.0(16)  null<1>F        g59<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@5 compacted };
asr(16)         g91<1>D         g9<8,8,1>D      0x00000017UD    { align1 1H I@7 };
add(16)         g9<1>D          g55<1,1,0>D     -126D           { align1 1H I@5 compacted };
add(16)         g55<1>D         g57<1,1,0>D     -126D           { align1 1H I@4 compacted };
add(16)         g57<1>D         g91<1,1,0>D     -126D           { align1 1H I@3 compacted };
(-f0.0) sel(16) g91<1>UD        g59<8,8,1>UD    0x3f000000UD    { align1 1H };
and(16)         g59<1>UD        g91<8,8,1>UD    0x7fffffffUD    { align1 1H A@1 };
cmp.z.f0.0(16)  null<1>F        g61<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@7 compacted };
or(16)          g91<1>UD        g59<1,1,0>UD    g83<1,1,0>UD    { align1 1H I@1 compacted };
(-f0.0) sel(16) g59<1>UD        g61<8,8,1>UD    0x3f000000UD    { align1 1H };
and(16)         g61<1>UD        g59<8,8,1>UD    0x7fffffffUD    { align1 1H A@1 };
cmp.z.f0.0(16)  null<1>F        g81<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@7 compacted };
or(16)          g59<1>UD        g61<1,1,0>UD    g87<1,1,0>UD    { align1 1H I@1 compacted };
(-f0.0) sel(16) g61<1>UD        g81<8,8,1>UD    0x3f000000UD    { align1 1H };
and(16)         g81<1>UD        g61<8,8,1>UD    0x7fffffffUD    { align1 1H A@1 };
cmp.g.f0.0(16)  g61<1>F         g91<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@1 };
or(16)          g87<1>UD        g81<1,1,0>UD    g89<1,1,0>UD    { align1 1H I@1 compacted };
cmp.g.f0.0(16)  g81<1>F         g59<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@1 };
add(16)         g83<1>D         g9<1,1,0>D      -g61<1,1,0>D    { align1 1H F@2 compacted };
cmp.g.f0.0(16)  g118<1>F        g87<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@2 };
cmp.l.f0.0(16)  g120<1>UD       g95<1,1,0>UD    g77<1,1,0>UD    { align1 1H $2.src compacted };
add(16)         g61<1>D         g55<1,1,0>D     -g81<1,1,0>D    { align1 1H F@2 compacted };
add(16)         g81<1>D         g57<1,1,0>D     -g118<1,1,0>D   { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g122<1>D        -g120<1,1,0>D   g79<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g19.1<2>UD      g122<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g21.1<2>UD      g123<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g19UD           g11UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $6 };
send(16)        nullUD          g13UD           g1UD            0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $0 };
add(16)         g124<1>D        g77<1,1,0>D     18D             { align1 1H $2.src compacted };
mov(16)         g55<4>UB        g83<8,8,1>UD                    { align1 1H I@7 };
cmp.l.f0.0(16)  g126<1>UD       g124<1,1,0>UD   g77<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g9<2>UD         g124<4,4,1>UD                   { align1 1Q };
mov(8)          g11<2>UD        g125<4,4,1>UD                   { align1 2Q $6.src };
mov(16)         g57<4>UB        g61<8,8,1>UD                    { align1 1H I@7 };
mov(16)         g59<4>UB        g81<8,8,1>UD                    { align1 1H A@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g21<4>UB        g55<32,8,4>UB                   { align1 1H I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g19<1>D         -g126<1,1,0>D   g79<1,1,0>D     { align1 1H I@6 compacted };
mov(16)         g21.1<4>UB      g57<32,8,4>UB                   { align1 1H I@2 };
mov(8)          g9.1<2>UD       g19<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g11.1<2>UD      g20<4,4,1>UD                    { align1 2Q I@3 };
mov(16)         g21.2<4>UB      g59<32,8,4>UB                   { align1 1H I@3 };
mov(16)         g21.3<4>UB      g99<16,8,2>UB                   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g9UD            g21UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $7 };
cmp.l.f0.0(16)  null<1>UD       g69<8,8,1>UD    g71<8,8,1>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL9          UIP:  LABEL8              { align1 1H };
sel.ge(16)      g11<1>F         (abs)g25<1,1,0>F (abs)g33<1,1,0>F { align1 1H $7.src compacted };
sel.ge(16)      g57<1>F         (abs)g27<1,1,0>F (abs)g35<1,1,0>F { align1 1H I@7 compacted };
sel.ge(16)      g59<1>F         (abs)g29<1,1,0>F (abs)g37<1,1,0>F { align1 1H I@4 compacted };
shl(16)         g55<1>D         -g83<8,8,1>D    0x00000017UD    { align1 1H };
shl(16)         g21<1>D         -g61<8,8,1>D    0x00000017UD    { align1 1H $7.src };
shl(16)         g9<1>D          -g81<8,8,1>D    0x00000017UD    { align1 1H $7.src };
sel.ge(16)      g19<1>F         g57<1,1,0>F     g59<1,1,0>F     { align1 1H A@1 compacted };
add(16)         g61<1>D         g55<8,8,1>D     1132462080D     { align1 1H I@3 };
add(16)         g81<1>D         g21<8,8,1>D     1132462080D     { align1 1H I@3 };
add(16)         g83<1>D         g9<8,8,1>D      1132462080D     { align1 1H I@3 };
sel.ge(16)      g21<1>F         g11<1,1,0>F     g19<1,1,0>F     { align1 1H A@1 compacted };
mul(16)         g9<1>F          g21<1,1,0>F     0x34000000F  /* 1.19209e-07F */ { align1 1H A@1 compacted };
add(16)         g11<1>F         g25<1,1,0>F     -g9<1,1,0>F     { align1 1H F@1 compacted };
add(16)         g19<1>F         g27<1,1,0>F     -g9<1,1,0>F     { align1 1H compacted };
add(16)         g21<1>F         g29<1,1,0>F     -g9<1,1,0>F     { align1 1H compacted };
add(16)         g55<1>F         g33<1,1,0>F     g9<1,1,0>F      { align1 1H I@3 compacted };
add(16)         g57<1>F         g35<1,1,0>F     g9<1,1,0>F      { align1 1H compacted };
add(16)         g59<1>F         g37<1,1,0>F     g9<1,1,0>F      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g9<1>F          g11<1,1,0>F     -g1<1,1,0>F     { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g11<1>F         g19<1,1,0>F     -g3<1,1,0>F     { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g19<1>F         g21<1,1,0>F     -g5<1,1,0>F     { align1 1H F@6 compacted };
add(16)         g21<1>F         g55<1,1,0>F     -g1<1,1,0>F     { align1 1H F@6 compacted };
add(16)         g55<1>F         g57<1,1,0>F     -g3<1,1,0>F     { align1 1H F@6 compacted };
add(16)         g57<1>F         g59<1,1,0>F     -g5<1,1,0>F     { align1 1H F@6 compacted };
mul(16)         g59<1>F         g9<8,8,1>F      0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g9<1>F          g11<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g11<1>F         g19<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g19<1>F         g21<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g21<1>F         g55<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g55<1>F         g57<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g57<1>F         g59<1,1,0>F     g61<1,1,0>F     { align1 1H A@3 compacted };
mul(16)         g59<1>F         g9<1,1,0>F      g81<1,1,0>F     { align1 1H A@2 compacted };
mul(16)         g9<1>F          g11<1,1,0>F     g83<1,1,0>F     { align1 1H A@1 compacted };
mul(16)         g11<1>F         g19<1,1,0>F     g61<1,1,0>F     { align1 1H F@6 compacted };
mul(16)         g19<1>F         g21<1,1,0>F     g81<1,1,0>F     { align1 1H F@6 compacted };
mul(16)         g21<1>F         g55<1,1,0>F     g83<1,1,0>F     { align1 1H F@6 compacted };
rndd(16)        g55<1>F         g57<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g57<1>F         g59<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g59<1>F         g9<1,1,0>F                      { align1 1H F@6 compacted };
rndd(16)        g9<1>F          -g11<1,1,0>F                    { align1 1H F@6 compacted };
rndd(16)        g11<1>F         -g19<1,1,0>F                    { align1 1H F@6 compacted };
rndd(16)        g19<1>F         -g21<1,1,0>F                    { align1 1H F@6 compacted };
sel.ge(16)      g21<1>F         g55<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g55<1>F         g57<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g57<1>F         g59<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g59<1>F         -g9<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g9<1>F          -g11<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g11<1>F         -g19<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.l(16)       g19<1>F         g21<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g21<1>F         g55<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g55<1>F         g57<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g57<1>F         g59<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g61<1>F         g11<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@5 };
sel.l(16)       g59<1>F         g9<8,8,1>F      0x437f0000F  /* 255F */ { align1 1H F@7 };
mov(16)         g87<4>UB        g19<8,8,1>F                     { align1 1H F@6 };
mov(16)         g89<4>UB        g21<8,8,1>F                     { align1 1H F@5 };
mov(16)         g91<4>UB        g55<8,8,1>F                     { align1 1H F@4 };
mov(16)         g93<4>UB        g57<8,8,1>F                     { align1 1H F@3 };
mov(16)         g97<4>UB        g61<8,8,1>F                     { align1 1H F@2 };
mov(16)         g95<4>UB        g59<8,8,1>F                     { align1 1H F@1 };
mov(16)         g120<1>UW       g87<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g121<1>UW       g89<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g122<1>UW       g91<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g117<1>UW       g93<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g119<1>UW       g97<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g118<1>UW       g95<32,8,4>UB                   { align1 1H I@6 };
else(16)        JIP:  LABEL8          UIP:  LABEL8              { align1 1H };

LABEL9:
mov(16)         g122<1>UW       0x0080UW                        { align1 1H I@5 };
mov(16)         g121<1>UW       0x0080UW                        { align1 1H I@7 };
mov(16)         g120<1>UW       0x0080UW                        { align1 1H I@7 };
mov(16)         g119<1>UW       0x0000UW                        { align1 1H I@6 };
mov(16)         g118<1>UW       0x0000UW                        { align1 1H I@6 };
mov(16)         g117<1>UW       0x0000UW                        { align1 1H A@7 };

LABEL8:
endif(16)       JIP:  LABEL7                                    { align1 1H };
add(16)         g19<1>D         g77<1,1,0>D     g69<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g91<2>UB        g122<16,16,1>UW                 { align1 1H A@3 };
mov(16)         g92<2>UB        g121<16,16,1>UW                 { align1 1H A@3 };
mov(16)         g93<2>UB        g120<16,16,1>UW                 { align1 1H I@7 };
mov(16)         g109<2>UB       g119<16,16,1>UW                 { align1 1H I@7 };
mov(16)         g110<2>UB       g118<16,16,1>UW                 { align1 1H I@7 };
mov(16)         g111<2>UB       g117<16,16,1>UW                 { align1 1H A@7 };
cmp.l.f0.0(16)  g55<1>UD        g19<1,1,0>UD    g77<1,1,0>UD    { align1 1H I@7 compacted };
add(16)         g57<1>D         g19<1,1,0>D     28D             { align1 1H compacted };
mov(16)         g81<1>UD        g93<16,8,2>UB                   { align1 1H I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g21<1>D         -g55<1,1,0>D    g79<1,1,0>D     { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g59<1>UD        g57<1,1,0>UD    g19<1,1,0>UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g9<2>UD         g57<4,4,1>UD                    { align1 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $7.src };
mov(8)          g11<2>UD        g58<4,4,1>UD                    { align1 2Q F@2 };
add(16)         g61<1>D         -g59<1,1,0>D    g21<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g9.1<2>UD       g61<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g11.1<2>UD      g62<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g9UD            g81UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $8 };
add(16)         g81<1>D         g19<1,1,0>D     40D             { align1 1H $8.src compacted };
mov(16)         g89<1>UD        g92<16,8,2>UB                   { align1 1H };
cmp.l.f0.0(16)  g83<1>UD        g81<1,1,0>UD    g19<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g9<2>UD         g81<4,4,1>UD                    { align1 1Q $8.src };
mov(8)          g11<2>UD        g82<4,4,1>UD                    { align1 2Q $8.src };
add(16)         g87<1>D         -g83<1,1,0>D    g21<1,1,0>D     { align1 1H A@1 compacted };
mov(8)          g9.1<2>UD       g87<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g11.1<2>UD      g88<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g9UD            g89UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $9 };
add(16)         g88<1>D         g19<1,1,0>D     52D             { align1 1H $9.src compacted };
mov(16)         g94<1>UD        g91<16,8,2>UB                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
cmp.l.f0.0(16)  g90<1>UD        g88<1,1,0>UD    g19<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g9<2>UD         g88<4,4,1>UD                    { align1 1Q $9.src };
mov(8)          g11<2>UD        g89<4,4,1>UD                    { align1 2Q $9.src };
add(16)         g92<1>D         -g90<1,1,0>D    g21<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g9.1<2>UD       g92<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g11.1<2>UD      g93<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g9UD            g94UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $10 };
add(16)         g93<1>D         g19<1,1,0>D     34D             { align1 1H $10.src compacted };
mov(16)         g99<1>UD        g111<16,8,2>UB                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
cmp.l.f0.0(16)  g95<1>UD        g93<1,1,0>UD    g19<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g9<2>UD         g93<4,4,1>UD                    { align1 1Q $10.src };
mov(8)          g11<2>UD        g94<4,4,1>UD                    { align1 2Q $10.src };
add(16)         g97<1>D         -g95<1,1,0>D    g21<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g9.1<2>UD       g97<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g11.1<2>UD      g98<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g9UD            g99UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $11 };
add(16)         g98<1>D         g19<1,1,0>D     46D             { align1 1H $11.src compacted };
mov(16)         g104<1>UD       g110<16,8,2>UB                  { align1 1H $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
cmp.l.f0.0(16)  g100<1>UD       g98<1,1,0>UD    g19<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g9<2>UD         g98<4,4,1>UD                    { align1 1Q $11.src };
mov(8)          g11<2>UD        g99<4,4,1>UD                    { align1 2Q $11.src };
add(16)         g102<1>D        -g100<1,1,0>D   g21<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g9.1<2>UD       g102<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g11.1<2>UD      g103<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g9UD            g104UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $12 };
add(16)         g103<1>D        g19<1,1,0>D     58D             { align1 1H $12.src compacted };
mov(16)         g110<1>UD       g109<16,8,2>UB                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
cmp.l.f0.0(16)  g105<1>UD       g103<1,1,0>UD   g19<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g9<2>UD         g103<4,4,1>UD                   { align1 1Q $12.src };
mov(8)          g11<2>UD        g104<4,4,1>UD                   { align1 2Q $12.src };
add(16)         g107<1>D        -g105<1,1,0>D   g21<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g9.1<2>UD       g107<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g11.1<2>UD      g108<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g9UD            g110UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $13 };
cmp.nz.f0.0(16) null<1>D        g53<8,8,1>D     0D              { align1 1H };
add(16)         g110<1>D        g19<1,1,0>D     22D             { align1 1H $13.src compacted };
(-f0.0) sel(16) g108<1>UD       g51<8,8,1>UD    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(8)          g9<2>UD         g110<4,4,1>UD                   { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $13.src };
mov(8)          g11<2>UD        g111<4,4,1>UD                   { align1 2Q I@3 };
mov(16)         g94<4>UB        g108<8,8,1>UD                   { align1 1H I@3 };
cmp.l.f0.0(16)  g112<1>UD       g110<1,1,0>UD   g19<1,1,0>UD    { align1 1H F@7 compacted };
mov(16)         g116<1>UD       g94<32,8,4>UB                   { align1 1H A@2 };
add(16)         g114<1>D        -g112<1,1,0>D   g21<1,1,0>D     { align1 1H A@2 compacted };
mov(8)          g9.1<2>UD       g114<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g11.1<2>UD      g115<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g9UD            g116UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $14 };

LABEL7:
endif(16)       JIP:  LABEL10                                   { align1 1H };

LABEL10:
else(16)        JIP:  LABEL5          UIP:  LABEL5              { align1 1H };

LABEL6:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         g115<1>UD       g31.3<32,8,4>UB                 { align1 1H A@3 };
cmp.l.f0.0(16)  null<1>D        g41<8,8,1>D     g71<8,8,1>D     { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
(+f0.0) sel(16) g117<1>UD       g115<1,1,0>UD   0x00000000UD    { align1 1H I@2 compacted };
mov(16)         g119<1>UD       g117<32,8,4>UB                  { align1 1H I@1 };
cmp.z.f0.0(16)  g87<1>D         g117<1,1,0>D    0D              { align1 1H A@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g69<8,8,1>UD    g71<8,8,1>UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         a0<1>UW         0x0ee0UW                        { align1 WE_all 1H I@3 };
shl(16)         a0<1>UW         g23<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ee0UW        { align1 1H A@1 };
mov(16)         g121<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
or(16)          g123<1>UD       g117<1,1,0>UD   g121<1,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g125<1>UD       g123<32,8,4>UB                  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         a0<1>UW         0x0fa0UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g85<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0fa0UW        { align1 1H A@1 };
mov(16)         g9<1>UD         g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
or(16)          g11<1>UD        g125<1,1,0>UD   g9<1,1,0>UD     { align1 1H A@1 compacted };
mov(16)         g19<1>UD        g11<32,8,4>UB                   { align1 1H A@1 };
mov(16)         a0<1>UW         0x0260UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g17<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0260UW        { align1 1H A@1 };
mov(16)         g21<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
or(16)          g51<1>UD        g11<1,1,0>UD    g21<1,1,0>UD    { align1 1H I@1 compacted };
mov(16)         g107<4>UB       g51<0,1,0>UD                    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
mov(16)         g56<1>UD        g51<0,1,0>UB                    { align1 1H F@2 };
mov(16)         g95<2>W         -g87<8,8,1>D                    { align1 1H F@6 };
cmp.z.f0.0(16)  g58<1>D         g56<1,1,0>D     0D              { align1 1H A@1 compacted };
and(16)         g54<1>UW        g95<16,8,2>UW   0x0001UW        { align1 1H I@2 };
mov(16)         g55<1>W         g54<32,16,2>B                   { align1 1H A@1 };
cmp.nz.f0.0(16) null<1>W        g55<16,16,1>W   0W              { align1 1H I@1 };
(+f0.0) sel(16) g60<1>UD        g58<8,8,1>UD    0xffffffffUD    { align1 1H A@1 };
cmp.nz.f0.0(16) null<1>D        g60<8,8,1>D     0D              { align1 1H I@1 };
(+f0.0) sel(16) g51<1>UD        g33<8,8,1>UD    0xff800000UD    { align1 1H $4.dst };
(+f0.0) sel(16) g53<1>UD        g35<8,8,1>UD    0xff800000UD    { align1 1H $4.dst };
(+f0.0) sel(16) g55<1>UD        g37<8,8,1>UD    0xff800000UD    { align1 1H $4.dst };
(+f0.0) sel(16) g57<1>UD        g25<8,8,1>UD    0x7f800000UD    { align1 1H $3.dst };
(+f0.0) sel(16) g59<1>UD        g27<8,8,1>UD    0x7f800000UD    { align1 1H $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
(+f0.0) sel(16) g61<1>UD        g29<8,8,1>UD    0x7f800000UD    { align1 1H F@6 };
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
mov(16)         g61<1>UD        0x7f800000UD                    { align1 1H A@2 };
mov(16)         g59<1>UD        0x7f800000UD                    { align1 1H A@1 };
mov(16)         g57<1>UD        0x7f800000UD                    { align1 1H A@2 };
mov(16)         g55<1>UD        0xff800000UD                    { align1 1H A@3 };
mov(16)         g53<1>UD        0xff800000UD                    { align1 1H I@7 };
mov(16)         g51<1>UD        0xff800000UD                    { align1 1H I@7 };

LABEL11:
endif(16)       JIP:  LABEL5                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         a0<1>UW         0x0720UW                        { align1 WE_all 1H A@3 };
shl(16)         a0<1>UW         g23<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0720UW        { align1 1H A@1 };
mov(16)         g89<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0760UW                        { align1 WE_all 1H A@5 };
shl(16)         a0<1>UW         g23<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0760UW        { align1 1H A@1 };
mov(16)         g81<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x07a0UW                        { align1 WE_all 1H A@2 };
shl(16)         a0<1>UW         g23<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x07a0UW        { align1 1H A@1 };
mov(16)         g21<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0660UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g23<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0660UW        { align1 1H A@1 };
mov(16)         g9<1>UD         g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x06a0UW                        { align1 WE_all 1H A@2 };
shl(16)         a0<1>UW         g23<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x06a0UW        { align1 1H A@1 };
mov(16)         g11<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x06e0UW                        { align1 WE_all 1H A@4 };
shl(16)         a0<1>UW         g23<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x06e0UW        { align1 1H A@1 };
mov(16)         g83<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g91<2>W         -g87<8,8,1>D                    { align1 1H F@3 };
sel.l(16)       g87<1>F         g57<1,1,0>F     g89<1,1,0>F     { align1 1H I@1 compacted };
sel.l(16)       g89<1>F         g59<1,1,0>F     g81<1,1,0>F     { align1 1H I@6 compacted };
sel.l(16)       g81<1>F         g61<1,1,0>F     g21<1,1,0>F     { align1 1H I@5 compacted };
sel.ge(16)      g21<1>F         g51<1,1,0>F     g9<1,1,0>F      { align1 1H I@4 compacted };
and(16)         g99<1>UW        g91<16,8,2>UW   0x0001UW        { align1 1H I@1 };
sel.ge(16)      g9<1>F          g53<1,1,0>F     g11<1,1,0>F     { align1 1H I@4 compacted };
mov(16)         a0<1>UW         0x0ae0UW                        { align1 WE_all 1H F@5 };
shl(16)         a0<1>UW         g85<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ae0UW        { align1 1H A@1 };
mov(16)         g97<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0b20UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g85<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b20UW        { align1 1H A@1 };
mov(16)         g95<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g11<1>F         g55<1,1,0>F     g83<1,1,0>F     { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         a0<1>UW         0x0a20UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g85<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a20UW        { align1 1H A@1 };
mov(16)         g93<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x02a0UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g85<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x02a0UW        { align1 1H A@1 };
mov(16)         g91<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         g100<1>W        g99<32,16,2>B                   { align1 1H I@5 };
mov(16)         a0<1>UW         0x0120UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g85<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0120UW        { align1 1H A@1 };
mov(16)         g83<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0160UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g85<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0160UW        { align1 1H A@1 };
mov(16)         g23<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g85<1>F         g87<1,1,0>F     g97<1,1,0>F     { align1 1H I@1 compacted };
sel.l(16)       g87<1>F         g89<1,1,0>F     g95<1,1,0>F     { align1 1H A@1 compacted };
cmp.nz.f0.0(16) g101<1>W        g100<16,16,1>W  0W              { align1 1H I@3 };
sel.l(16)       g89<1>F         g81<1,1,0>F     g93<1,1,0>F     { align1 1H A@1 compacted };
sel.ge(16)      g81<1>F         g21<1,1,0>F     g91<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0aa0UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g17<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0aa0UW        { align1 1H A@1 };
mov(16)         g97<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g21<1>F         g9<1,1,0>F      g83<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0ae0UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g17<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ae0UW        { align1 1H A@1 };
mov(16)         g95<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g9<1>F          g11<1,1,0>F     g23<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0b20UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g17<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b20UW        { align1 1H A@1 };
mov(16)         g93<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0a20UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g17<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a20UW        { align1 1H A@1 };
mov(16)         g91<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g83<1>F         g85<1,1,0>F     g97<1,1,0>F     { align1 1H I@4 compacted };
mov(16)         a0<1>UW         0x02a0UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g17<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x02a0UW        { align1 1H A@1 };
mov(16)         g23<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g85<1>F         g87<1,1,0>F     g95<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0120UW                        { align1 WE_all 1H A@3 };
shl(16)         a0<1>UW         g17<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0120UW        { align1 1H A@1 };
mov(16)         g11<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g87<1>F         g89<1,1,0>F     g93<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         g17<1>D         g101<8,8,1>W                    { align1 1H I@7 };
sel.ge(16)      g89<1>F         g81<1,1,0>F     g91<1,1,0>F     { align1 1H A@1 compacted };
sel.ge(16)      g91<1>F         g21<1,1,0>F     g23<1,1,0>F     { align1 1H I@3 compacted };
sel.ge(16)      g93<1>F         g9<1,1,0>F      g11<1,1,0>F     { align1 1H I@2 compacted };
mov(16)         g19<2>W         -g17<8,8,1>D                    { align1 1H I@1 };
and(16)         g103<1>UW       g19<16,8,2>UW   0x0001UW        { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g104<1>W        g103<32,16,2>B                  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.nz.f0.0(16) g105<1>W        g104<16,16,1>W  0W              { align1 1H I@1 };
cmp.l.f0.0(16)  null<1>UD       g69<8,8,1>UD    0x00000006UD    { align1 1H };
mov(16)         g81<1>D         g105<8,8,1>W                    { align1 1H A@2 };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL13             { align1 1H };
sel.ge(16)      g19<1>F         (abs)g83<0,1,0>F (abs)g89<0,1,0>F { align1 1H A@3 compacted };
sel.ge(16)      g17<1>F         (abs)g85<0,1,0>F (abs)g91<0,1,0>F { align1 1H A@3 compacted };
sel.ge(16)      g23<1>F         (abs)g87<0,1,0>F (abs)g93<0,1,0>F { align1 1H F@3 compacted };
add(16)         g103<1>D        g77<1,1,0>D     16D             { align1 1H compacted };
mov(16)         g96<2>B         1W                              { align1 1H F@7 };
sel.ge(16)      g21<1>F         g17<1,1,0>F     g23<1,1,0>F     { align1 1H F@1 compacted };
mov(8)          g9<2>UD         g103<4,4,1>UD                   { align1 1Q A@2 };
mov(8)          g11<2>UD        g104<4,4,1>UD                   { align1 2Q A@3 };
mov(16)         g105<1>UD       g96<16,8,2>UB                   { align1 1H I@3 };
sel.ge(16)      g17<1>F         g19<1,1,0>F     g21<1,1,0>F     { align1 1H F@1 compacted };
mul(16)         g95<1>F         g17<1,1,0>F     0x34000000F  /* 1.19209e-07F */ { align1 1H A@1 compacted };
add(16)         g17<1>F         g83<0,1,0>F     -g95<1,1,0>F    { align1 1H F@1 compacted };
add(16)         g19<1>F         g85<0,1,0>F     -g95<1,1,0>F    { align1 1H compacted };
add(16)         g21<1>F         g87<0,1,0>F     -g95<1,1,0>F    { align1 1H compacted };
add(16)         g83<1>F         g89<0,1,0>F     g95<1,1,0>F     { align1 1H compacted };
add(16)         g85<1>F         g91<0,1,0>F     g95<1,1,0>F     { align1 1H compacted };
add(16)         g87<1>F         g93<0,1,0>F     g95<1,1,0>F     { align1 1H compacted };
add(16)         g89<1>F         g83<1,1,0>F     -g17<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g83<1>F         g85<1,1,0>F     -g19<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g85<1>F         g87<1,1,0>F     -g21<1,1,0>F    { align1 1H F@3 compacted };
mul(16)         g87<1>F         g89<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
mul(16)         g89<1>F         g83<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
mul(16)         g83<1>F         g85<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
and(16)         g85<1>UD        g87<8,8,1>UD    0x007fffffUD    { align1 1H F@1 };
and(16)         g91<1>UD        g87<8,8,1>UD    0x80000000UD    { align1 1H F@7 };
and(16)         g97<1>UD        g87<8,8,1>UD    0x7f800000UD    { align1 1H };
and(16)         g93<1>UD        g89<8,8,1>UD    0x80000000UD    { align1 1H F@2 };
and(16)         g99<1>UD        g89<8,8,1>UD    0x7f800000UD    { align1 1H };
and(16)         g95<1>UD        g83<8,8,1>UD    0x80000000UD    { align1 1H F@1 };
and(16)         g101<1>UD       g83<8,8,1>UD    0x7f800000UD    { align1 1H };
and(16)         g87<1>UD        g89<8,8,1>UD    0x007fffffUD    { align1 1H };
and(16)         g89<1>UD        g83<8,8,1>UD    0x007fffffUD    { align1 1H };
add(16)         g83<1>D         g85<8,8,1>D     1056964608D     { align1 1H I@7 };
asr(16)         g85<1>D         g97<8,8,1>D     0x00000017UD    { align1 1H I@7 };
add(16)         g97<1>D         g87<8,8,1>D     1056964608D     { align1 1H I@4 };
asr(16)         g87<1>D         g99<8,8,1>D     0x00000017UD    { align1 1H I@7 };
add(16)         g99<1>D         g89<8,8,1>D     1056964608D     { align1 1H I@5 };
cmp.z.f0.0(16)  null<1>F        g83<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@5 compacted };
asr(16)         g89<1>D         g101<8,8,1>D    0x00000017UD    { align1 1H I@7 };
add(16)         g101<1>D        g85<1,1,0>D     -126D           { align1 1H I@5 compacted };
add(16)         g85<1>D         g87<1,1,0>D     -126D           { align1 1H I@4 compacted };
add(16)         g87<1>D         g89<1,1,0>D     -126D           { align1 1H I@3 compacted };
(-f0.0) sel(16) g89<1>UD        g83<8,8,1>UD    0x3f000000UD    { align1 1H };
and(16)         g83<1>UD        g89<8,8,1>UD    0x7fffffffUD    { align1 1H A@1 };
cmp.z.f0.0(16)  null<1>F        g97<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@7 compacted };
or(16)          g89<1>UD        g83<1,1,0>UD    g91<1,1,0>UD    { align1 1H I@1 compacted };
(-f0.0) sel(16) g83<1>UD        g97<8,8,1>UD    0x3f000000UD    { align1 1H };
and(16)         g91<1>UD        g83<8,8,1>UD    0x7fffffffUD    { align1 1H I@1 };
cmp.z.f0.0(16)  null<1>F        g99<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@7 compacted };
or(16)          g83<1>UD        g91<1,1,0>UD    g93<1,1,0>UD    { align1 1H I@1 compacted };
(-f0.0) sel(16) g91<1>UD        g99<8,8,1>UD    0x3f000000UD    { align1 1H };
and(16)         g93<1>UD        g91<8,8,1>UD    0x7fffffffUD    { align1 1H I@1 };
cmp.g.f0.0(16)  g91<1>F         g89<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@1 };
or(16)          g89<1>UD        g93<1,1,0>UD    g95<1,1,0>UD    { align1 1H A@1 compacted };
cmp.g.f0.0(16)  g93<1>F         g83<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@1 };
add(16)         g83<1>D         g101<1,1,0>D    -g91<1,1,0>D    { align1 1H F@1 compacted };
cmp.g.f0.0(16)  g91<1>F         g89<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@1 };
add(16)         g89<1>D         g85<1,1,0>D     -g93<1,1,0>D    { align1 1H F@1 compacted };
cmp.l.f0.0(16)  g93<1>UD        g103<1,1,0>UD   g77<1,1,0>UD    { align1 1H compacted };
add(16)         g85<1>D         g87<1,1,0>D     -g91<1,1,0>D    { align1 1H F@1 compacted };
add(16)         g87<1>D         -g93<1,1,0>D    g79<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g9.1<2>UD       g87<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g11.1<2>UD      g88<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g9UD            g105UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $15 };
mov(16)         g23<1>D         g7<8,8,1>D                      { align1 1H $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g13UD           g17UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $0 };
add(16)         g109<1>D        g77<1,1,0>D     18D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g97<4>UB        g83<8,8,1>UD                    { align1 1H A@5 };
cmp.l.f0.0(16)  g116<1>UD       g109<1,1,0>UD   g77<1,1,0>UD    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g1<2>UD         g109<4,4,1>UD                   { align1 1Q };
mov(8)          g3<2>UD         g110<4,4,1>UD                   { align1 2Q $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g112<4>UB       g89<8,8,1>UD                    { align1 1H };
mov(16)         g114<4>UB       g85<8,8,1>UD                    { align1 1H };
mov(16)         g120<4>UB       g97<32,8,4>UB                   { align1 1H I@6 };
add(16)         g118<1>D        -g116<1,1,0>D   g79<1,1,0>D     { align1 1H I@6 compacted };
mov(16)         g120.1<4>UB     g112<32,8,4>UB                  { align1 1H I@2 };
mov(8)          g1.1<2>UD       g118<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g3.1<2>UD       g119<4,4,1>UD                   { align1 2Q I@3 };
mov(16)         g120.2<4>UB     g114<32,8,4>UB                  { align1 1H I@3 };
mov(16)         g120.3<4>UB     g107<32,8,4>UB                  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g1UD            g120UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $1 };
cmp.l.f0.0(16)  null<1>UD       g69<8,8,1>UD    g71<8,8,1>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL15         UIP:  LABEL14             { align1 1H };
sel.ge(16)      g1<1>F          (abs)g57<1,1,0>F (abs)g51<1,1,0>F { align1 1H $1.src compacted };
sel.ge(16)      g3<1>F          (abs)g59<1,1,0>F (abs)g53<1,1,0>F { align1 1H $1.src compacted };
sel.ge(16)      g5<1>F          (abs)g61<1,1,0>F (abs)g55<1,1,0>F { align1 1H $0.src compacted };
shl(16)         g9<1>D          -g83<8,8,1>D    0x00000017UD    { align1 1H $15.src };
shl(16)         g11<1>D         -g89<8,8,1>D    0x00000017UD    { align1 1H $15.src };
shl(16)         g13<1>D         -g85<8,8,1>D    0x00000017UD    { align1 1H $0.src };
sel.ge(16)      g7<1>F          g3<1,1,0>F      g5<1,1,0>F      { align1 1H F@1 compacted };
mov(16)         g93<2>W         -g81<8,8,1>D                    { align1 1H };
add(16)         g3<1>D          g9<8,8,1>D      1132462080D     { align1 1H A@1 };
add(16)         g5<1>D          g11<8,8,1>D     1132462080D     { align1 1H A@1 };
add(16)         g9<1>D          g13<8,8,1>D     1132462080D     { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.ge(16)      g121<1>F        g1<1,1,0>F      g7<1,1,0>F      { align1 1H F@1 compacted };
and(16)         g81<1>UW        g93<16,8,2>UW   0x0001UW        { align1 1H I@4 };
mul(16)         g123<1>F        g121<1,1,0>F    0x34000000F  /* 1.19209e-07F */ { align1 1H F@1 compacted };
mov.nz.f0.0(16) null<1>W        g81<32,16,2>B                   { align1 1H I@1 };
add(16)         g125<1>F        g57<1,1,0>F     -g123<1,1,0>F   { align1 1H F@1 compacted };
add(16)         g1<1>F          g59<1,1,0>F     -g123<1,1,0>F   { align1 1H compacted };
add(16)         g7<1>F          g61<1,1,0>F     -g123<1,1,0>F   { align1 1H compacted };
add(16)         g11<1>F         g51<1,1,0>F     g123<1,1,0>F    { align1 1H I@4 compacted };
add(16)         g13<1>F         g53<1,1,0>F     g123<1,1,0>F    { align1 1H I@3 compacted };
add(16)         g51<1>F         g55<1,1,0>F     g123<1,1,0>F    { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g53<1>F         g125<1,1,0>F    -g17<1,1,0>F    { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g55<1>F         g1<1,1,0>F      -g19<1,1,0>F    { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g57<1>F         g7<1,1,0>F      -g21<1,1,0>F    { align1 1H F@6 compacted };
add(16)         g116<1>F        g11<1,1,0>F     -g17<1,1,0>F    { align1 1H F@6 compacted };
add(16)         g118<1>F        g13<1,1,0>F     -g19<1,1,0>F    { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g120<1>F        g51<1,1,0>F     -g21<1,1,0>F    { align1 1H F@6 compacted };
mul(16)         g59<1>F         g53<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g61<1>F         g55<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g81<1>F         g57<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H A@1 };
mul(16)         g122<1>F        g116<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g124<1>F        g118<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g126<1>F        g120<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g93<1>F         g59<1,1,0>F     g3<1,1,0>F      { align1 1H A@2 compacted };
mul(16)         g95<1>F         g61<1,1,0>F     g5<1,1,0>F      { align1 1H A@4 compacted };
mul(16)         g97<1>F         g81<1,1,0>F     g9<1,1,0>F      { align1 1H A@3 compacted };
mul(16)         g1<1>F          g122<1,1,0>F    g3<1,1,0>F      { align1 1H F@6 compacted };
mul(16)         g3<1>F          g124<1,1,0>F    g5<1,1,0>F      { align1 1H F@6 compacted };
rndd(16)        g99<1>F         g93<1,1,0>F                     { align1 1H F@5 compacted };
mul(16)         g5<1>F          g126<1,1,0>F    g9<1,1,0>F      { align1 1H F@7 compacted };
rndd(16)        g101<1>F        g95<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g103<1>F        g97<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g7<1>F          -g1<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g9<1>F          -g3<1,1,0>F                     { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sel.ge(16)      g105<1>F        g99<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
rndd(16)        g11<1>F         -g5<1,1,0>F                     { align1 1H F@6 compacted };
sel.ge(16)      g107<1>F        g101<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g109<1>F        g103<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g13<1>F         -g7<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g17<1>F         -g9<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
sel.l(16)       g111<1>F        g105<8,8,1>F    0x437f0000F  /* 255F */ { align1 1H };
sel.ge(16)      g19<1>F         -g11<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.l(16)       g113<1>F        g107<8,8,1>F    0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g115<1>F        g109<8,8,1>F    0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g21<1>F         g13<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sel.l(16)       g23<1>F         g17<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g15<4>UB        g111<8,8,1>F                    { align1 1H F@6 };
sel.l(16)       g51<1>F         g19<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@5 };
mov(16)         g83<4>UB        g113<8,8,1>F                    { align1 1H F@5 };
mov(16)         g85<4>UB        g115<8,8,1>F                    { align1 1H F@4 };
mov(16)         g87<4>UB        g21<8,8,1>F                     { align1 1H F@3 };
mov(16)         g89<4>UB        g23<8,8,1>F                     { align1 1H F@2 };
mov(16)         g93<1>UW        g15<32,8,4>UB                   { align1 1H I@5 };
mov(16)         g91<4>UB        g51<8,8,1>F                     { align1 1H F@1 };
mov(16)         g94<1>UW        g83<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g95<1>UW        g85<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g82<1>UW        g87<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g83<1>UW        g89<32,8,4>UB                   { align1 1H I@6 };
(-f0.0) sel(16) g126<1>UW       g93<16,16,1>UW  0x0000UW        { align1 1H I@6 };
mov(16)         g84<1>UW        g91<32,8,4>UB                   { align1 1H I@6 };
(-f0.0) sel(16) g127<1>UW       g94<16,16,1>UW  0x0000UW        { align1 1H I@6 };
(-f0.0) sel(16) g1<1>UW         g95<16,16,1>UW  0x0000UW        { align1 1H I@6 };
(-f0.0) sel(16) g123<1>UW       g82<16,16,1>UW  0x0000UW        { align1 1H I@6 };
(-f0.0) sel(16) g124<1>UW       g83<16,16,1>UW  0x0000UW        { align1 1H I@6 };
(-f0.0) sel(16) g125<1>UW       g84<16,16,1>UW  0x0000UW        { align1 1H I@5 };
else(16)        JIP:  LABEL14         UIP:  LABEL14             { align1 1H };

LABEL15:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g1<1>UW         0x0080UW                        { align1 1H I@5 };
mov(16)         g127<1>UW       0x0080UW                        { align1 1H I@7 };
mov(16)         g126<1>UW       0x0080UW                        { align1 1H I@7 };
mov(16)         g125<1>UW       0x0000UW                        { align1 1H I@5 };
mov(16)         g124<1>UW       0x0000UW                        { align1 1H I@7 };
mov(16)         g123<1>UW       0x0000UW                        { align1 1H I@7 };

LABEL14:
endif(16)       JIP:  LABEL13                                   { align1 1H };
add(16)         g107<1>D        g77<1,1,0>D     g69<1,1,0>D     { align1 1H A@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g98<2>UB        g1<16,16,1>UW                   { align1 1H I@7 };
mov(16)         g99<2>UB        g127<16,16,1>UW                 { align1 1H A@4 };
mov(16)         g100<2>UB       g126<16,16,1>UW                 { align1 1H A@4 };
mov(16)         g115<2>UB       g125<16,16,1>UW                 { align1 1H I@7 };
mov(16)         g101<2>UB       g124<16,16,1>UW                 { align1 1H I@7 };
mov(16)         g102<2>UB       g123<16,16,1>UW                 { align1 1H I@7 };
cmp.l.f0.0(16)  g109<1>UD       g107<1,1,0>UD   g77<1,1,0>UD    { align1 1H A@4 compacted };
add(16)         g113<1>D        g107<1,1,0>D    28D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g121<1>UD       g100<16,8,2>UB                  { align1 1H I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g111<1>D        -g109<1,1,0>D   g79<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g116<1>UD       g113<1,1,0>UD   g107<1,1,0>UD   { align1 1H I@3 compacted };
mov(8)          g103<2>UD       g113<4,4,1>UD                   { align1 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $15.src };
mov(8)          g105<2>UD       g114<4,4,1>UD                   { align1 2Q F@7 };
add(16)         g118<1>D        -g116<1,1,0>D   g111<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g103.1<2>UD     g118<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g105.1<2>UD     g119<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g103UD          g121UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $4 };
add(16)         g119<1>D        g107<1,1,0>D    40D             { align1 1H $1.src compacted };
mov(16)         g5<1>UD         g99<16,8,2>UB                   { align1 1H $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g121<1>UD       g119<1,1,0>UD   g107<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g1<2>UD         g119<4,4,1>UD                   { align1 1Q $1.src };
mov(8)          g3<2>UD         g120<4,4,1>UD                   { align1 2Q $1.src };
add(16)         g123<1>D        -g121<1,1,0>D   g111<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g1.1<2>UD       g123<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g3.1<2>UD       g124<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g1UD            g5UD            0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $2 };
add(16)         g124<1>D        g107<1,1,0>D    52D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g10<1>UD        g98<16,8,2>UB                   { align1 1H F@6 };
cmp.l.f0.0(16)  g126<1>UD       g124<1,1,0>UD   g107<1,1,0>UD   { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g6<2>UD         g124<4,4,1>UD                   { align1 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $15.src };
mov(8)          g8<2>UD         g125<4,4,1>UD                   { align1 2Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g1<1>D          -g126<1,1,0>D   g111<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g6.1<2>UD       g1<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g8.1<2>UD       g2<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g6UD            g10UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $3 };
add(16)         g2<1>D          g107<1,1,0>D    34D             { align1 1H $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g15<1>UD        g102<16,8,2>UB                  { align1 1H $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g4<1>UD         g2<1,1,0>UD     g107<1,1,0>UD   { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(8)          g11<2>UD        g2<4,4,1>UD                     { align1 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
mov(8)          g13<2>UD        g3<4,4,1>UD                     { align1 2Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g6<1>D          -g4<1,1,0>D     g111<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g11.1<2>UD      g6<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g13.1<2>UD      g7<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g11UD           g15UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $4 };
add(16)         g7<1>D          g107<1,1,0>D    46D             { align1 1H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g20<1>UD        g101<16,8,2>UB                  { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g9<1>UD         g7<1,1,0>UD     g107<1,1,0>UD   { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g16<2>UD        g7<4,4,1>UD                     { align1 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
mov(8)          g18<2>UD        g8<4,4,1>UD                     { align1 2Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g11<1>D         -g9<1,1,0>D     g111<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g16.1<2>UD      g11<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g18.1<2>UD      g12<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g16UD           g20UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $5 };
add(16)         g12<1>D         g107<1,1,0>D    58D             { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g51<1>UD        g115<16,8,2>UB                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g14<1>UD        g12<1,1,0>UD    g107<1,1,0>UD   { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g21<2>UD        g12<4,4,1>UD                    { align1 1Q F@7 };
mov(8)          g23<2>UD        g13<4,4,1>UD                    { align1 2Q $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g16<1>D         -g14<1,1,0>D    g111<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g21.1<2>UD      g16<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g23.1<2>UD      g17<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g21UD           g51UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $6 };
add(16)         g18<1>D         g107<1,1,0>D    22D             { align1 1H $5.src compacted };
mov(16)         g103<2>B        2W                              { align1 1H $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g20<1>UD        g18<1,1,0>UD    g107<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g52<2>UD        g18<4,4,1>UD                    { align1 1Q $6.src };
mov(8)          g54<2>UD        g19<4,4,1>UD                    { align1 2Q };
mov(16)         g56<1>UD        g103<16,8,2>UB                  { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g22<1>D         -g20<1,1,0>D    g111<1,1,0>D    { align1 1H I@4 compacted };
mov(8)          g52.1<2>UD      g22<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g54.1<2>UD      g23<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g52UD           g56UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $7 };

LABEL13:
endif(16)       JIP:  LABEL5                                    { align1 1H };

LABEL5:
endif(16)       JIP:  LABEL16                                   { align1 1H };

LABEL16:
cmp.l.f0.0(16)  null<1>D        g41<8,8,1>D     g71<8,8,1>D     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL17             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
asr(16)         g23<1>D         g71<8,8,1>D     0x0000001fUD    { align1 1H A@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shl(16)         g51<1>D         g41<8,8,1>D     0x00000005UD    { align1 1H $6.src };
shr(16)         g53<1>UD        g41<1,1,0>UD    0x0000001bUD    { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g55<1>UD        g45.1<8,4,2>UD                  { align1 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $7.src };
mov(8)          g56<1>UD        g65.1<8,4,2>UD                  { align1 2Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(8)          g57<1>D         g45<8,4,2>D     g51<1,1,0>D     { align1 1Q A@2 compacted };
add(8)          g58<1>D         g65<8,4,2>D     g52<1,1,0>D     { align1 2Q A@2 compacted };
cmp.l.f0.0(8)   g59<1>UD        g57<8,8,1>UD    g45<8,4,2>UD    { align1 1Q A@1 };
mov(8)          g77<2>UD        g57<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g60<1>UD        g58<8,8,1>UD    g65<8,4,2>UD    { align1 2Q A@1 };
mov(8)          g79<2>UD        g58<4,4,1>UD                    { align1 2Q };
add3(16)        g61<1>D         g55<8,8,1>D     g53<8,8,1>D     -g59<1,1,1>D { align1 1H A@2 };
mov(8)          g77.1<2>UD      g61<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g79.1<2>UD      g62<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g77UD           g25UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $3 };
add(16)         g65<1>D         g57<1,1,0>D     16D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g69<1>UD        g65<1,1,0>UD    g57<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g79<2>UD        g65<4,4,1>UD                    { align1 1Q $3.src };
mov(8)          g81<2>UD        g66<4,4,1>UD                    { align1 2Q F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g77<1>D         -g69<1,1,0>D    g61<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g79.1<2>UD      g77<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g81.1<2>UD      g78<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g79UD           g33UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $4 };
shl(16)         g78<1>D         g41<8,8,1>D     0x00000002UD    { align1 1H $4.src };
shr(16)         g80<1>UD        g41<1,1,0>UD    0x0000001eUD    { align1 1H $4.src compacted };
mov(8)          g82<1>UD        g47.1<8,4,2>UD                  { align1 1Q $4.src };
mov(8)          g83<1>UD        g67.1<8,4,2>UD                  { align1 2Q F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(8)          g12<1>D         g47<8,4,2>D     g78<1,1,0>D     { align1 1Q A@1 compacted };
add(8)          g84<1>D         g67<8,4,2>D     g79<1,1,0>D     { align1 2Q A@4 compacted };
cmp.l.f0.0(8)   g85<1>UD        g12<8,8,1>UD    g47<8,4,2>UD    { align1 1Q A@2 };
mov(8)          g89<2>UD        g12<4,4,1>UD                    { align1 1Q F@3 };
cmp.l.f0.0(8)   g86<1>UD        g84<8,8,1>UD    g67<8,4,2>UD    { align1 2Q A@3 };
mov(8)          g91<2>UD        g84<4,4,1>UD                    { align1 2Q F@2 };
add3(16)        g87<1>D         g82<8,8,1>D     g80<8,8,1>D     -g85<1,1,1>D { align1 1H A@1 };
mov(8)          g89.1<2>UD      g87<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g91.1<2>UD      g88<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g89UD           g41UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
shr(16)         g109<1>UD       g49<0,1,0>UD    0x00000006UD    { align1 1H compacted };
add(16)         g88<1>D         g71<1,1,0>D     g41<1,1,0>D     { align1 1H $8.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
cmp.l.f0.0(16)  g90<1>UD        g88<1,1,0>UD    g71<1,1,0>UD    { align1 1H I@1 compacted };
shl(16)         g94<1>D         g88<8,8,1>D     0x00000002UD    { align1 1H F@1 };
shr(16)         g97<1>UD        g88<1,1,0>UD    0x0000001eUD    { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g92<1>D         -g90<1,1,0>D    g23<1,1,0>D     { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(8)          g13<1>D         g47<8,4,2>D     g94<1,1,0>D     { align1 1Q A@3 compacted };
add(8)          g100<1>D        g67<8,4,2>D     g95<1,1,0>D     { align1 2Q A@4 compacted };
shl(16)         g95<1>D         g92<8,8,1>D     0x00000002UD    { align1 1H A@3 };
cmp.l.f0.0(8)   g101<1>UD       g13<8,8,1>UD    g47<8,4,2>UD    { align1 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g105<2>UD       g13<4,4,1>UD                    { align1 1Q F@7 };
cmp.l.f0.0(8)   g102<1>UD       g100<8,8,1>UD   g67<8,4,2>UD    { align1 2Q I@4 };
mov(8)          g107<2>UD       g100<4,4,1>UD                   { align1 2Q F@5 };
or(16)          g99<1>UD        g95<1,1,0>UD    g97<1,1,0>UD    { align1 1H A@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add3(16)        g103<1>D        g82<8,8,1>D     g99<8,8,1>D     -g101<1,1,1>D { align1 1H A@1 };
mov(8)          g105.1<2>UD     g103<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g107.1<2>UD     g104<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g105UD          g109UD          0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $9 };
mov(16)         g106<2>W        -g73<8,8,1>D                    { align1 1H $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
and(16)         g105<1>UW       g106<16,8,2>UW  0x0001UW        { align1 1H I@1 };
mov(16)         g106<1>W        g105<32,16,2>B                  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
cmp.nz.f0.0(16) g109<1>W        g106<16,16,1>W  0W              { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g107<1>D        g109<8,8,1>W                    { align1 1H I@1 };
and.nz.f0.0(16) null<1>UD       g107<8,8,1>UD   g75<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL18         UIP:  LABEL18             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
shl(16)         g110<1>D        g71<8,8,1>D     0x00000003UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(8)          g14<1>D         g43<8,4,2>D     40D             { align1 1Q F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N F@7 };
add(8)          g112<1>D        g63<8,4,2>D     40D             { align1 2Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
or(16)          g125<1>UD       g110<8,8,1>UD   0xffffffc0UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(8)   g15<1>UD        g14<8,8,1>UD    g43<8,4,2>UD    { align1 1Q I@3 };
cmp.l.f0.0(8)   g113<1>UD       g112<8,8,1>UD   g63<8,4,2>UD    { align1 2Q A@3 };
mov(8)          g117<2>UD       g14<4,4,1>UD                    { align1 1Q $14.src };
mov(8)          g119<2>UD       g112<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(8)          g16<1>D         -g15<8,8,1>D    g43.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g114<1>D        -g113<8,8,1>D   g63.1<8,4,2>D   { align1 2Q A@4 };
mov(8)          g117.1<2>UD     g16<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g119.1<2>UD     g114<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g115UD          g117UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $10 };
shl(16)         g117<1>D        g115<8,8,1>D    0x00000006UD    { align1 1H $10.dst };
add(8)          g17<1>D         g43<8,4,2>D     g117<1,1,0>D    { align1 1Q A@1 compacted };
add(8)          g118<1>D        g63<8,4,2>D     g118<1,1,0>D    { align1 2Q I@2 compacted };
cmp.l.f0.0(8)   g18<1>UD        g17<8,8,1>UD    g43<8,4,2>UD    { align1 1Q A@2 };
mov(8)          g121<2>UD       g17<4,4,1>UD                    { align1 1Q $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $10.src };
cmp.l.f0.0(8)   g119<1>UD       g118<8,8,1>UD   g63<8,4,2>UD    { align1 2Q I@3 };
mov(8)          g123<2>UD       g118<4,4,1>UD                   { align1 2Q $2.src };
add(8)          g19<1>D         -g18<8,8,1>D    g43.1<8,4,2>D   { align1 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $10.src };
add(8)          g120<1>D        -g119<8,8,1>D   g63.1<8,4,2>D   { align1 2Q I@3 };
mov(8)          g121.1<2>UD     g19<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g123.1<2>UD     g120<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g121UD          g125UD          0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $2 };

LABEL18:
endif(16)       JIP:  LABEL17                                   { align1 1H };

LABEL17:
endif(16)       JIP:  LABEL19                                   { align1 1H };

LABEL19:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q $2.src };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_DFS_DFS_trivial_code[] = {
    0x80000065, 0x6e058220, 0x02000004, 0xffffffc0,
    0x80030061, 0x74054410, 0x00000000, 0x76543210,
    0x00040061, 0x33054660, 0x00000000, 0x00000001,
    0xe26f1b40, 0x00016e03, 0xe2700040, 0x04016e03,
    0x64741c40, 0x00807495, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa006f0c, 0x00340000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa00700c, 0x00300000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x45050160,
    0x00467405, 0x00000000, 0xe00d1965, 0x00f04503,
    0x00041961, 0x6c060210, 0x00460d05, 0x00000000,
    0x00040061, 0x29050120, 0x00560d06, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x217e0061, 0x001102cc, 0x2a040061, 0x001102cc,
    0x00030061, 0x2b260aa0, 0x00000264, 0x00000000,
    0x00130061, 0x3f260aa0, 0x00000264, 0x00000000,
    0x00030061, 0x2d260aa0, 0x000002a4, 0x00000000,
    0x00130061, 0x41260aa0, 0x000002a4, 0x00000000,
    0x00030061, 0x2f260aa0, 0x000002e4, 0x00000000,
    0x00130061, 0x43260aa0, 0x000002e4, 0x00000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0xe00b0065, 0x00110303, 0x217e1761, 0x00110204,
    0x2a041761, 0x00110204, 0x212b1761, 0x00110244,
    0x2a3f1761, 0x00110244, 0x212d1761, 0x0011025c,
    0x2a411761, 0x0011025c, 0x212f1761, 0x0011026c,
    0x2a431761, 0x0011026c, 0xa1061740, 0x024e7e03,
    0xaa071740, 0x024e0403, 0x00031a61, 0x79060220,
    0x00340605, 0x00000000, 0xe7081a70, 0x02400603,
    0x00130061, 0x7b060220, 0x00340705, 0x00000000,
    0xae491e70, 0x00000b03, 0x00031b40, 0x7f052660,
    0x06460805, 0x00447e26, 0x00131c40, 0x09052660,
    0x06460905, 0x00440426, 0x00031a61, 0x79260220,
    0x00347f05, 0x00000000, 0x00131a61, 0x7b260220,
    0x00340905, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x09240000,
    0xfb047924, 0x000c0000, 0x00042261, 0x6a060210,
    0x00460b05, 0x00000000, 0x00042261, 0x47050120,
    0x00560906, 0x00000000, 0x00041970, 0x00010660,
    0x56462905, 0x00464705, 0x01040022, 0x0001c060,
    0x000001f0, 0x00000170, 0x00040069, 0x0f058660,
    0x02462905, 0x00000005, 0xe0110068, 0x01b02903,
    0x00031461, 0x13050220, 0x00442d26, 0x00000000,
    0x00131361, 0x14050220, 0x00444126, 0x00000000,
    0xa1151c40, 0x0f0e2d02, 0xaa161d40, 0x100e4102,
    0x00031a70, 0x17050220, 0x52461505, 0x00442d06,
    0x00030061, 0x62060220, 0x00341505, 0x00000000,
    0x00131b70, 0x18050220, 0x52461605, 0x00444106,
    0x00130061, 0x64060220, 0x00341605, 0x00000000,
    0xa01b0040, 0x01001503, 0x00041b52, 0x19040e68,
    0x0e2e1305, 0x17051105, 0x271d1a70, 0x15001b03,
    0x00030061, 0x66060220, 0x00341b05, 0x00000000,
    0x00130061, 0x68060220, 0x00341c05, 0x00000000,
    0x00031c61, 0x62260220, 0x00341905, 0x00000000,
    0x00131d61, 0x64260220, 0x00341a05, 0x00000000,
    0xa0211d40, 0x19021d02, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x19440000,
    0xfb046224, 0x003c0000, 0x00031961, 0x66260220,
    0x00342105, 0x00000000, 0x00131a61, 0x68260220,
    0x00342205, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x21440000,
    0xfb046624, 0x003c0000, 0x00040024, 0x0001c060,
    0x00000090, 0x00000090, 0x00042361, 0x1f054220,
    0x00000000, 0x00000000, 0x00042361, 0x1d054220,
    0x00000000, 0x7f800000, 0x00042361, 0x1b054220,
    0x00000000, 0x7f800000, 0x00042361, 0x19054220,
    0x00000000, 0x7f800000, 0x00042461, 0x27054220,
    0x00000000, 0x80000000, 0x00042461, 0x25054220,
    0x00000000, 0xff800000, 0x00042461, 0x23054220,
    0x00000000, 0xff800000, 0x00042461, 0x21054220,
    0x00000000, 0xff800000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040070, 0x31058550,
    0x15566c06, 0x00000000, 0x00041961, 0x4b050560,
    0x20463105, 0x00000000, 0x01040022, 0x0001c060,
    0x000000e0, 0x000000e0, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa1011640, 0x00ce2b03,
    0xaa321540, 0x00ce3f03, 0x00030970, 0x02050220,
    0x52460105, 0x00442b06, 0x00131a70, 0x35050220,
    0x52463205, 0x00443f06, 0x00033261, 0x7a060220,
    0x00340105, 0x00000000, 0x00133261, 0x7c060220,
    0x00343205, 0x00000000, 0x00031c40, 0x03052660,
    0x06460205, 0x00442b26, 0x00131c40, 0x36052660,
    0x06463505, 0x00443f26, 0x00031a61, 0x7a260220,
    0x00340305, 0x00000000, 0x00131a61, 0x7c260220,
    0x00343605, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x37140000,
    0xfb107a24, 0x01000000, 0x00042269, 0x31058660,
    0x02463705, 0x00000006, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00030e61, 0x38050220,
    0x00442b06, 0x00000000, 0x00130d61, 0x39050220,
    0x00443f06, 0x00000000, 0xa14d1c40, 0x311e2b02,
    0xaa4e0040, 0x311e3f02, 0xa1050040, 0x010e2b03,
    0xaa3b0040, 0x010e3f03, 0xa0580040, 0x00404503,
    0xa0623340, 0xff404503, 0xa0643340, 0x00204503,
    0xa0663440, 0xff204503, 0xa05e0040, 0x00104503,
    0xa0600040, 0xff104503, 0x00031f70, 0x04050220,
    0x52464d05, 0x00442b06, 0x00131f70, 0x3a050220,
    0x52464e05, 0x00443f06, 0x00030061, 0x0d060220,
    0x00344d05, 0x00000000, 0x00130061, 0x0f060220,
    0x00344e05, 0x00000000, 0x00030061, 0x5a060220,
    0x00340505, 0x00000000, 0x00130061, 0x5c060220,
    0x00343b05, 0x00000000, 0x00030070, 0x06050220,
    0x52460505, 0x00442b06, 0x00130070, 0x3c050220,
    0x52463b05, 0x00443f06, 0x00040070, 0x00018660,
    0x56465805, 0x00000010, 0x00031f40, 0x4f052660,
    0x06460405, 0x00442b26, 0x00131f40, 0x50052660,
    0x06463a05, 0x00443f26, 0x00031d40, 0x07052660,
    0x06460605, 0x00442b26, 0x00131d40, 0x3d052660,
    0x06463c05, 0x00443f26, 0x2f170062, 0x62005803,
    0x00031d61, 0x0d260220, 0x00344f05, 0x00000000,
    0x00131d61, 0x0f260220, 0x00345005, 0x00000000,
    0x00031d61, 0x5a260220, 0x00340705, 0x00000000,
    0x00131d61, 0x5c260220, 0x00343d05, 0x00000000,
    0x00040070, 0x00018660, 0x56466405, 0x00000010,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x51140000, 0xfb045a24, 0x00040000,
    0x2f550062, 0x66006403, 0x00040070, 0x00018660,
    0x56465e05, 0x00000010, 0x2f110062, 0x60005e03,
    0x00040070, 0x67058550, 0x15566a06, 0x00010001,
    0x00041961, 0x35050560, 0x20466705, 0x00000000,
    0x00042569, 0x53058660, 0x02465105, 0x00000006,
    0x00041952, 0x57040e68, 0x0e2e3805, 0x4d055305,
    0x0004196c, 0x07058660, 0x02465705, 0x00000006,
    0x11040022, 0x0001c060, 0x00002bb8, 0x000012e8,
    0x00040070, 0x00010220, 0x52464505, 0x00464705,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x01042462, 0x5b058220, 0x02462105, 0xff800000,
    0x01042462, 0x39058220, 0x02462305, 0xff800000,
    0x01042462, 0x3b058220, 0x02462505, 0xff800000,
    0x01042362, 0x51058220, 0x02461905, 0x7f800000,
    0x01042362, 0x53058220, 0x02461b05, 0x7f800000,
    0x01042362, 0x13058220, 0x02461d05, 0x7f800000,
    0x80041e61, 0x10014110, 0x00000000, 0x0b600b60,
    0x00040069, 0x10018510, 0x01561706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0b600b60,
    0xe05f0961, 0x001b0004, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80041e61, 0x10014110,
    0x00000000, 0x07200720, 0x00040069, 0x10018510,
    0x01561706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x07200720, 0xe05d0961, 0x001b0004,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80041e61, 0x10014110, 0x00000000, 0x07600760,
    0x00040069, 0x10018510, 0x01561706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x07600760,
    0xe0590961, 0x001b0004, 0x80041e61, 0x10014110,
    0x00000000, 0x0a200a20, 0x00040069, 0x10018510,
    0x01561706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0a200a20, 0xe0570961, 0x001b0004,
    0x80041e61, 0x10014110, 0x00000000, 0x0a600a60,
    0x00040069, 0x10018510, 0x01561706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0a600a60,
    0xe0150961, 0x001b0004, 0x80041e61, 0x10014110,
    0x00000000, 0x02600260, 0x00040069, 0x10018510,
    0x01561706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x02600260, 0xe03d0961, 0x001b0004,
    0x00040070, 0x00018220, 0x52464505, 0x00000006,
    0x25371f62, 0x5f005b00, 0x255b0962, 0x5d003900,
    0x25390962, 0x59003b00, 0x273b0962, 0x57005100,
    0x27571b62, 0x15005300, 0x80040961, 0x10014110,
    0x00000000, 0x06e006e0, 0x00040069, 0x10018510,
    0x01565506, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x06e006e0, 0xe0530961, 0x001b0004,
    0x27151b62, 0x3d001300, 0x80041561, 0x10014110,
    0x00000000, 0x0b600b60, 0x00040069, 0x10018510,
    0x01565506, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0b600b60, 0xe05f0961, 0x001b0004,
    0x80041461, 0x10014110, 0x00000000, 0x07200720,
    0x00040069, 0x10018510, 0x01565506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x07200720,
    0xe05d0961, 0x001b0004, 0x80041361, 0x10014110,
    0x00000000, 0x07600760, 0x00040069, 0x10018510,
    0x01565506, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x07600760, 0xe0590961, 0x001b0004,
    0x80040961, 0x10014110, 0x00000000, 0x0ae00ae0,
    0x00040069, 0x10018510, 0x01565506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0ae00ae0,
    0xe0130961, 0x001b0004, 0x25510b62, 0x53003700,
    0x80041261, 0x10014110, 0x00000000, 0x02a002a0,
    0x00040069, 0x10018510, 0x01565506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x02a002a0,
    0xe03d0961, 0x001b0004, 0x25531d62, 0x5f005b00,
    0x25370a62, 0x5d003900, 0x27390962, 0x59003b00,
    0x80041361, 0x10014110, 0x00000000, 0x0a200a20,
    0x00040069, 0x10018510, 0x01561106, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0a200a20,
    0xe05f0961, 0x001b0004, 0x273b0962, 0x13005700,
    0x80041361, 0x10014110, 0x00000000, 0x0a600a60,
    0x00040069, 0x10018510, 0x01561106, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0a600a60,
    0xe05d0961, 0x001b0004, 0x27131b62, 0x3d001500,
    0x80040c61, 0x10014110, 0x00000000, 0x06e006e0,
    0x00040069, 0x10018510, 0x01561106, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x06e006e0,
    0xe05b0961, 0x001b0004, 0x80041361, 0x10014110,
    0x00000000, 0x07200720, 0x00040069, 0x10018510,
    0x01561106, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x07200720, 0xe0590961, 0x001b0004,
    0x253d1c62, 0x5f005100, 0x80040a61, 0x10014110,
    0x00000000, 0x07600760, 0x00040069, 0x10018510,
    0x01561106, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x07600760, 0xe0150961, 0x001b0004,
    0x25510962, 0x5d005300, 0x80040b61, 0x10014110,
    0x00000000, 0x02600260, 0x00040069, 0x10018510,
    0x01561106, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x02600260, 0xe0570961, 0x001b0004,
    0x25530962, 0x5b003700, 0x27370962, 0x59003900,
    0x27390962, 0x15003b00, 0x273b0962, 0x57001300,
    0x01040022, 0x0001c060, 0x00000d88, 0x00000d88,
    0x25571162, 0x3daa3700, 0x25591362, 0x51aa3900,
    0x255b1362, 0x53aa3b00, 0xa05f1740, 0x01004d03,
    0x00040061, 0x63064540, 0x00000000, 0xffffffff,
    0x255d1162, 0x5b005900, 0x00040061, 0x61070200,
    0x00460b05, 0x00000000, 0x00030b61, 0x13060220,
    0x00345f05, 0x00000000, 0x00130c61, 0x15060220,
    0x00346005, 0x00000000, 0x25091162, 0x5d005700,
    0x00041b61, 0x0b050020, 0x00666107, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xe0691141, 0x34000900, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x20010040, 0x69213700,
    0x20030040, 0x69213900, 0x20050040, 0x69213b00,
    0x206b0040, 0x69013d00, 0x206d0040, 0x69015100,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x206f0040, 0x69015300, 0x20711340, 0x01206b00,
    0x20731340, 0x03206d00, 0x20751340, 0x05206f00,
    0x00040941, 0x61058aa0, 0x0a467105, 0x3f800001,
    0x00041341, 0x59058aa0, 0x0a467305, 0x3f800001,
    0x00041341, 0x3b058aa0, 0x0a467505, 0x3f800001,
    0x00041365, 0x37058220, 0x02466105, 0x007fffff,
    0x00041765, 0x53058220, 0x02466105, 0x80000000,
    0x00041765, 0x3d058220, 0x02466105, 0x7f800000,
    0x00041265, 0x39058220, 0x02465905, 0x007fffff,
    0x00040065, 0x57058220, 0x02465905, 0x80000000,
    0x00041765, 0x51058220, 0x02465905, 0x7f800000,
    0x00041165, 0x5b058220, 0x02463b05, 0x007fffff,
    0x00040065, 0x09058220, 0x02463b05, 0x7f800000,
    0x00040065, 0x59058220, 0x02463b05, 0x80000000,
    0x00041f40, 0x3b058660, 0x06463705, 0x3f000000,
    0x00041f6c, 0x37058660, 0x02463d05, 0x00000017,
    0x00041f40, 0x3d058660, 0x06463905, 0x3f000000,
    0x00041f6c, 0x39058660, 0x02465105, 0x00000017,
    0x00041f40, 0x51058660, 0x06465b05, 0x3f000000,
    0xac001d70, 0x3f803b01, 0x00041f6c, 0x5b058660,
    0x02460905, 0x00000017, 0xa0091d40, 0xf8203703,
    0xa0371c40, 0xf8203903, 0xa0391b40, 0xf8205b03,
    0x11040062, 0x5b058220, 0x02463b05, 0x3f000000,
    0x00040965, 0x3b058220, 0x02465b05, 0x7fffffff,
    0xac001f70, 0x3f803d01, 0x205b1966, 0x53003b03,
    0x11040062, 0x3b058220, 0x02463d05, 0x3f000000,
    0x00040965, 0x3d058220, 0x02463b05, 0x7fffffff,
    0xac001f70, 0x3f805101, 0x203b1966, 0x57003d03,
    0x11040062, 0x3d058220, 0x02465105, 0x3f000000,
    0x00040965, 0x51058220, 0x02463d05, 0x7fffffff,
    0x00041970, 0x3d058aa0, 0x3a465b05, 0x3f7f0000,
    0x20571966, 0x59005103, 0x00041970, 0x51058aa0,
    0x3a463b05, 0x3f7f0000, 0xa0531240, 0x3d200902,
    0x00041a70, 0x76058aa0, 0x3a465705, 0x3f7f0000,
    0x27783270, 0x4d005f03, 0xa03d1240, 0x51203702,
    0xa0511140, 0x76203902, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa07a1b40, 0x4f027802,
    0x00031961, 0x13260220, 0x00347a05, 0x00000000,
    0x00131a61, 0x15260220, 0x00347b05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xf3081324, 0x00020b14,
    0x00044031, 0x00000000, 0xfb0c0d24, 0x003c0144,
    0xa07c3240, 0x01204d03, 0x00041f61, 0x37070200,
    0x00465305, 0x00000000, 0x277e1a70, 0x4d007c03,
    0x00030061, 0x09060220, 0x00347c05, 0x00000000,
    0x00133661, 0x0b060220, 0x00347d05, 0x00000000,
    0x00041f61, 0x39070200, 0x00463d05, 0x00000000,
    0x00040a61, 0x3b070200, 0x00465105, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041e61, 0x15070000, 0x00663707, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa0131e40, 0x4f027e02, 0x00041a61, 0x150f0000,
    0x00663907, 0x00000000, 0x00031a61, 0x09260220,
    0x00341305, 0x00000000, 0x00131b61, 0x0b260220,
    0x00341405, 0x00000000, 0x00041b61, 0x15170000,
    0x00663b07, 0x00000000, 0x00041961, 0x151f0000,
    0x00566306, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x00000000,
    0xfb080924, 0x00001514, 0x00040070, 0x00010220,
    0x52464505, 0x00464705, 0x01040022, 0x0001c060,
    0x000003b0, 0x00000350, 0x250b3762, 0x21431900,
    0x25391f62, 0x23431b00, 0x253b1c62, 0x25431d00,
    0x00040069, 0x3705a660, 0x02465305, 0x00000017,
    0x00043769, 0x1505a660, 0x02463d05, 0x00000017,
    0x00043769, 0x0905a660, 0x02465105, 0x00000017,
    0x25130962, 0x3b003900, 0x00041b40, 0x3d058660,
    0x06463705, 0x43800000, 0x00041b40, 0x51058660,
    0x06461505, 0x43800000, 0x00041b40, 0x53058660,
    0x06460905, 0x43800000, 0x25150962, 0x13000b00,
    0xe0090941, 0x34001500, 0x200b1140, 0x09201900,
    0x20130040, 0x09201b00, 0x20150040, 0x09201d00,
    0x20371b40, 0x09002100, 0x20390040, 0x09002300,
    0x203b0040, 0x09002500, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x20091640, 0x01200b00,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x200b1640, 0x03201300, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x20131640, 0x05201500,
    0x20151640, 0x01203700, 0x20371640, 0x03203900,
    0x20391640, 0x05203b00, 0x00041641, 0x3b058aa0,
    0x0a460905, 0x3f7ffffe, 0x00041641, 0x09058aa0,
    0x0a460b05, 0x3f7ffffe, 0x00041641, 0x0b058aa0,
    0x0a461305, 0x3f7ffffe, 0x00041641, 0x13058aa0,
    0x0a461505, 0x3f800001, 0x00041641, 0x15058aa0,
    0x0a463705, 0x3f800001, 0x00041641, 0x37058aa0,
    0x0a463905, 0x3f800001, 0x20390b41, 0x3d003b00,
    0x203b0a41, 0x51000900, 0x20090941, 0x53000b00,
    0x200b1641, 0x3d001300, 0x20131641, 0x51001500,
    0x20151641, 0x53003700, 0x60371645, 0x00103900,
    0x60391645, 0x00103b00, 0x603b1645, 0x00100900,
    0x60091645, 0x00120b00, 0x600b1645, 0x00121300,
    0x60131645, 0x00121500, 0xe5151662, 0x00003700,
    0xe5371662, 0x00003900, 0xe5391662, 0x00003b00,
    0xe53b1662, 0x00020900, 0xe5091662, 0x00020b00,
    0xe50b1662, 0x00021300, 0x00041662, 0x13058aa0,
    0x5a461505, 0x437f0000, 0x00041662, 0x15058aa0,
    0x5a463705, 0x437f0000, 0x00041662, 0x37058aa0,
    0x5a463905, 0x437f0000, 0x00041662, 0x39058aa0,
    0x5a463b05, 0x437f0000, 0x00041562, 0x3d058aa0,
    0x5a460b05, 0x437f0000, 0x00041762, 0x3b058aa0,
    0x5a460905, 0x437f0000, 0x00041661, 0x57070a00,
    0x00461305, 0x00000000, 0x00041561, 0x59070a00,
    0x00461505, 0x00000000, 0x00041461, 0x5b070a00,
    0x00463705, 0x00000000, 0x00041361, 0x5d070a00,
    0x00463905, 0x00000000, 0x00041261, 0x61070a00,
    0x00463d05, 0x00000000, 0x00041161, 0x5f070a00,
    0x00463b05, 0x00000000, 0x00041e61, 0x78050010,
    0x00665707, 0x00000000, 0x00041e61, 0x79050010,
    0x00665907, 0x00000000, 0x00041e61, 0x7a050010,
    0x00665b07, 0x00000000, 0x00041e61, 0x75050010,
    0x00665d07, 0x00000000, 0x00041e61, 0x77050010,
    0x00666107, 0x00000000, 0x00041e61, 0x76050010,
    0x00665f07, 0x00000000, 0x00040024, 0x0001c060,
    0x00000070, 0x00000070, 0x00041d61, 0x7a054110,
    0x00000000, 0x00800080, 0x00041f61, 0x79054110,
    0x00000000, 0x00800080, 0x00041f61, 0x78054110,
    0x00000000, 0x00800080, 0x00041e61, 0x77054110,
    0x00000000, 0x00000000, 0x00041e61, 0x76054110,
    0x00000000, 0x00000000, 0x00040f61, 0x75054110,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000510, 0xa0130040, 0x45004d02,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00040b61, 0x5b060100, 0x00587a05, 0x00000000,
    0x00040b61, 0x5c060100, 0x00587905, 0x00000000,
    0x00041f61, 0x5d060100, 0x00587805, 0x00000000,
    0x00041f61, 0x6d060100, 0x00587705, 0x00000000,
    0x00041f61, 0x6e060100, 0x00587605, 0x00000000,
    0x00040f61, 0x6f060100, 0x00587505, 0x00000000,
    0x27371f70, 0x4d001303, 0xa0390040, 0x01c01303,
    0x00041e61, 0x51050020, 0x00565d06, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xa0151b40, 0x4f023702, 0x273b1b70, 0x13003903,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00031161, 0x09060220, 0x00343905, 0x00000000,
    0x80103701, 0x00000000, 0x00000000, 0x00000000,
    0x00131261, 0x0b060220, 0x00343a05, 0x00000000,
    0xa03d1b40, 0x15023b02, 0x00031961, 0x09260220,
    0x00343d05, 0x00000000, 0x00131a61, 0x0b260220,
    0x00343e05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xf3080924, 0x00025114, 0xa0513840, 0x02801303,
    0x00040061, 0x59050020, 0x00565c06, 0x00000000,
    0x27531a70, 0x13005103, 0x00033861, 0x09060220,
    0x00345105, 0x00000000, 0x00133861, 0x0b060220,
    0x00345205, 0x00000000, 0xa0570940, 0x15025302,
    0x00031961, 0x09260220, 0x00345705, 0x00000000,
    0x00131a61, 0x0b260220, 0x00345805, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x00000000, 0xf3080924, 0x00025914,
    0xa0583940, 0x03401303, 0x00040061, 0x5e050020,
    0x00565b06, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x275a1a70, 0x13005803,
    0x00033961, 0x09060220, 0x00345805, 0x00000000,
    0x00133961, 0x0b060220, 0x00345905, 0x00000000,
    0xa05c1b40, 0x15025a02, 0x00031961, 0x09260220,
    0x00345c05, 0x00000000, 0x00131a61, 0x0b260220,
    0x00345d05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044a31, 0x00000000,
    0xf3080924, 0x00025e14, 0xa05d3a40, 0x02201303,
    0x00040061, 0x63050020, 0x00566f06, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x275f1a70, 0x13005d03, 0x00033a61, 0x09060220,
    0x00345d05, 0x00000000, 0x00133a61, 0x0b060220,
    0x00345e05, 0x00000000, 0xa0611b40, 0x15025f02,
    0x00031961, 0x09260220, 0x00346105, 0x00000000,
    0x00131a61, 0x0b260220, 0x00346205, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x00000000, 0xf3080924, 0x00026314,
    0xa0623b40, 0x02e01303, 0x00043461, 0x68050020,
    0x00566e06, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x27641a70, 0x13006203,
    0x00033b61, 0x09060220, 0x00346205, 0x00000000,
    0x00133b61, 0x0b060220, 0x00346305, 0x00000000,
    0xa0661b40, 0x15026402, 0x00031961, 0x09260220,
    0x00346605, 0x00000000, 0x00131a61, 0x0b260220,
    0x00346705, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x00000000,
    0xf3080924, 0x00026814, 0xa0673c40, 0x03a01303,
    0x00040061, 0x6e050020, 0x00566d06, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x27691a70, 0x13006703, 0x00033c61, 0x09060220,
    0x00346705, 0x00000000, 0x00133c61, 0x0b060220,
    0x00346805, 0x00000000, 0xa06b1b40, 0x15026902,
    0x00031961, 0x09260220, 0x00346b05, 0x00000000,
    0x00131a61, 0x0b260220, 0x00346c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044d31, 0x00000000, 0xf3080924, 0x00026e14,
    0x00040070, 0x00018660, 0x26463505, 0x00000000,
    0xa06e3d40, 0x01601303, 0x11040062, 0x6c058220,
    0x02463305, 0x00000002, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x00031a61, 0x09060220,
    0x00346e05, 0x00000000, 0x80103d01, 0x00000000,
    0x00000000, 0x00000000, 0x00131b61, 0x0b060220,
    0x00346f05, 0x00000000, 0x00041b61, 0x5e070200,
    0x00466c05, 0x00000000, 0x27701770, 0x13006e03,
    0x00040a61, 0x74050020, 0x00665e07, 0x00000000,
    0xa0720a40, 0x15027002, 0x00031961, 0x09260220,
    0x00347205, 0x00000000, 0x00131a61, 0x0b260220,
    0x00347305, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044e31, 0x00000000,
    0xf3080924, 0x00027414, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040024, 0x0001c060,
    0x000018e0, 0x000018e0, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x00040b61, 0x73050020,
    0x00661f1f, 0x00000000, 0x00040070, 0x00010660,
    0x56462905, 0x00464705, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0xef751a62, 0x00007303,
    0x00041961, 0x77050020, 0x00667507, 0x00000000,
    0xac570970, 0x00007503, 0x00040070, 0x00010220,
    0x52464505, 0x00464705, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80041b61, 0x10014110,
    0x00000000, 0x0ee00ee0, 0x00040069, 0x10018510,
    0x01561706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0ee00ee0, 0xe0790961, 0x001b0004,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x207b1966, 0x79007503, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041961, 0x7d050020,
    0x00667b07, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80040961, 0x10014110,
    0x00000000, 0x0fa00fa0, 0x00040069, 0x10018510,
    0x01565506, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0fa00fa0, 0xe0090961, 0x001b0004,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x200b0966, 0x09007d03, 0x00040961, 0x13050020,
    0x00660b07, 0x00000000, 0x80040961, 0x10014110,
    0x00000000, 0x02600260, 0x00040069, 0x10018510,
    0x01561106, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x02600260, 0xe0150961, 0x001b0004,
    0x20331966, 0x15000b03, 0x00041961, 0x6b070200,
    0x00003304, 0x00000000, 0x01040022, 0x0001c060,
    0x00000168, 0x00000108, 0x00041261, 0x38050020,
    0x00003304, 0x00000000, 0x00041661, 0x5f062650,
    0x00465705, 0x00000000, 0xac3a0970, 0x00003803,
    0x00041a65, 0x36058110, 0x01565f06, 0x00010001,
    0x00040961, 0x37050450, 0x00683606, 0x00000000,
    0x00041970, 0x00018550, 0x25583705, 0x00000000,
    0x01040962, 0x3c058220, 0x02463a05, 0xffffffff,
    0x00041970, 0x00018660, 0x26463c05, 0x00000000,
    0x01042462, 0x33058220, 0x02462105, 0xff800000,
    0x01042462, 0x35058220, 0x02462305, 0xff800000,
    0x01042462, 0x37058220, 0x02462505, 0xff800000,
    0x01042362, 0x39058220, 0x02461905, 0x7f800000,
    0x01042362, 0x3b058220, 0x02461b05, 0x7f800000,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x01041662, 0x3d058220, 0x02461d05, 0x7f800000,
    0x00040024, 0x0001c060, 0x00000070, 0x00000070,
    0x00040a61, 0x3d054220, 0x00000000, 0x7f800000,
    0x00040961, 0x3b054220, 0x00000000, 0x7f800000,
    0x00040a61, 0x39054220, 0x00000000, 0x7f800000,
    0x00040b61, 0x37054220, 0x00000000, 0xff800000,
    0x00041f61, 0x35054220, 0x00000000, 0xff800000,
    0x00041f61, 0x33054220, 0x00000000, 0xff800000,
    0x00040025, 0x00004600, 0x00000000, 0x000015a8,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80040b61, 0x10014110, 0x00000000, 0x07200720,
    0x00040069, 0x10018510, 0x01561706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x07200720,
    0xe0590961, 0x001b0004, 0x80040d61, 0x10014110,
    0x00000000, 0x07600760, 0x00040069, 0x10018510,
    0x01561706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x07600760, 0xe0510961, 0x001b0004,
    0x80040a61, 0x10014110, 0x00000000, 0x07a007a0,
    0x00040069, 0x10018510, 0x01561706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x07a007a0,
    0xe0150961, 0x001b0004, 0x80040961, 0x10014110,
    0x00000000, 0x06600660, 0x00040069, 0x10018510,
    0x01561706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x06600660, 0xe0090961, 0x001b0004,
    0x80040a61, 0x10014110, 0x00000000, 0x06a006a0,
    0x00040069, 0x10018510, 0x01561706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x06a006a0,
    0xe00b0961, 0x001b0004, 0x80040c61, 0x10014110,
    0x00000000, 0x06e006e0, 0x00040069, 0x10018510,
    0x01561706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x06e006e0, 0xe0530961, 0x001b0004,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00041361, 0x5b062650, 0x00465705, 0x00000000,
    0x27571962, 0x59003900, 0x27591e62, 0x51003b00,
    0x27511d62, 0x15003d00, 0x25151c62, 0x09003300,
    0x00041965, 0x63058110, 0x01565b06, 0x00010001,
    0x25091c62, 0x0b003500, 0x80041561, 0x10014110,
    0x00000000, 0x0ae00ae0, 0x00040069, 0x10018510,
    0x01565506, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0ae00ae0, 0xe0610961, 0x001b0004,
    0x80041461, 0x10014110, 0x00000000, 0x0b200b20,
    0x00040069, 0x10018510, 0x01565506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0b200b20,
    0xe05f0961, 0x001b0004, 0x250b1d62, 0x53003700,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80041461, 0x10014110, 0x00000000, 0x0a200a20,
    0x00040069, 0x10018510, 0x01565506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0a200a20,
    0xe05d0961, 0x001b0004, 0x80041361, 0x10014110,
    0x00000000, 0x02a002a0, 0x00040069, 0x10018510,
    0x01565506, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x02a002a0, 0xe05b0961, 0x001b0004,
    0x00041d61, 0x64050450, 0x00686306, 0x00000000,
    0x80041161, 0x10014110, 0x00000000, 0x01200120,
    0x00040069, 0x10018510, 0x01565506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x01200120,
    0xe0530961, 0x001b0004, 0x80041161, 0x10014110,
    0x00000000, 0x01600160, 0x00040069, 0x10018510,
    0x01565506, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x01600160, 0xe0170961, 0x001b0004,
    0x27551962, 0x61005700, 0x27570962, 0x5f005900,
    0x00041b70, 0x65058550, 0x25586405, 0x00000000,
    0x27590962, 0x5d005100, 0x25510962, 0x5b001500,
    0x80041461, 0x10014110, 0x00000000, 0x0aa00aa0,
    0x00040069, 0x10018510, 0x01561106, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0aa00aa0,
    0xe0610961, 0x001b0004, 0x25150962, 0x53000900,
    0x80041461, 0x10014110, 0x00000000, 0x0ae00ae0,
    0x00040069, 0x10018510, 0x01561106, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0ae00ae0,
    0xe05f0961, 0x001b0004, 0x25090962, 0x17000b00,
    0x80041461, 0x10014110, 0x00000000, 0x0b200b20,
    0x00040069, 0x10018510, 0x01561106, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0b200b20,
    0xe05d0961, 0x001b0004, 0x80041361, 0x10014110,
    0x00000000, 0x0a200a20, 0x00040069, 0x10018510,
    0x01561106, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0a200a20, 0xe05b0961, 0x001b0004,
    0x27531c62, 0x61005500, 0x80041261, 0x10014110,
    0x00000000, 0x02a002a0, 0x00040069, 0x10018510,
    0x01561106, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x02a002a0, 0xe0170961, 0x001b0004,
    0x27550962, 0x5f005700, 0x80040b61, 0x10014110,
    0x00000000, 0x01200120, 0x00040069, 0x10018510,
    0x01561106, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x01200120, 0xe00b0961, 0x001b0004,
    0x27570962, 0x5d005900, 0x00041f61, 0x11050560,
    0x00466505, 0x00000000, 0x25590962, 0x5b005100,
    0x255b1b62, 0x17001500, 0x255d1a62, 0x0b000900,
    0x00041961, 0x13062650, 0x00461105, 0x00000000,
    0x00041965, 0x67058110, 0x01561306, 0x00010001,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00041961, 0x68050450, 0x00686706, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00041970, 0x69058550, 0x25586805, 0x00000000,
    0x00040070, 0x00018220, 0x52464505, 0x00000006,
    0x00040a61, 0x51050560, 0x00466905, 0x00000000,
    0x01040022, 0x0001c060, 0x00000ff8, 0x00000ff8,
    0x25130b62, 0x59aa5300, 0x25110b62, 0x5baa5500,
    0x25171362, 0x5daa5700, 0xa0670040, 0x01004d03,
    0x00041761, 0x60064540, 0x00000000, 0x00010001,
    0x25151162, 0x17001100, 0x00030a61, 0x09060220,
    0x00346705, 0x00000000, 0x00130b61, 0x0b060220,
    0x00346805, 0x00000000, 0x00041b61, 0x69050020,
    0x00566006, 0x00000000, 0x25111162, 0x15001300,
    0xe05f0941, 0x34001100, 0x20111140, 0x5f215300,
    0x20130040, 0x5f215500, 0x20150040, 0x5f215700,
    0x20530040, 0x5f015900, 0x20550040, 0x5f015b00,
    0x20570040, 0x5f015d00, 0x20591340, 0x11205300,
    0x20531340, 0x13205500, 0x20551340, 0x15205700,
    0x00041341, 0x57058aa0, 0x0a465905, 0x3f800001,
    0x00041341, 0x59058aa0, 0x0a465305, 0x3f800001,
    0x00041341, 0x53058aa0, 0x0a465505, 0x3f800001,
    0x00041165, 0x55058220, 0x02465705, 0x007fffff,
    0x00041765, 0x5b058220, 0x02465705, 0x80000000,
    0x00040065, 0x61058220, 0x02465705, 0x7f800000,
    0x00041265, 0x5d058220, 0x02465905, 0x80000000,
    0x00040065, 0x63058220, 0x02465905, 0x7f800000,
    0x00041165, 0x5f058220, 0x02465305, 0x80000000,
    0x00040065, 0x65058220, 0x02465305, 0x7f800000,
    0x00040065, 0x57058220, 0x02465905, 0x007fffff,
    0x00040065, 0x59058220, 0x02465305, 0x007fffff,
    0x00041f40, 0x53058660, 0x06465505, 0x3f000000,
    0x00041f6c, 0x55058660, 0x02466105, 0x00000017,
    0x00041c40, 0x61058660, 0x06465705, 0x3f000000,
    0x00041f6c, 0x57058660, 0x02466305, 0x00000017,
    0x00041d40, 0x63058660, 0x06465905, 0x3f000000,
    0xac001d70, 0x3f805301, 0x00041f6c, 0x59058660,
    0x02466505, 0x00000017, 0xa0651d40, 0xf8205503,
    0xa0551c40, 0xf8205703, 0xa0571b40, 0xf8205903,
    0x11040062, 0x59058220, 0x02465305, 0x3f000000,
    0x00040965, 0x53058220, 0x02465905, 0x7fffffff,
    0xac001f70, 0x3f806101, 0x20591966, 0x5b005303,
    0x11040062, 0x53058220, 0x02466105, 0x3f000000,
    0x00041965, 0x5b058220, 0x02465305, 0x7fffffff,
    0xac001f70, 0x3f806301, 0x20531966, 0x5d005b03,
    0x11040062, 0x5b058220, 0x02466305, 0x3f000000,
    0x00041965, 0x5d058220, 0x02465b05, 0x7fffffff,
    0x00041970, 0x5b058aa0, 0x3a465905, 0x3f7f0000,
    0x20590966, 0x5f005d03, 0x00041970, 0x5d058aa0,
    0x3a465305, 0x3f7f0000, 0xa0531140, 0x5b206502,
    0x00041970, 0x5b058aa0, 0x3a465905, 0x3f7f0000,
    0xa0591140, 0x5d205502, 0x275d0070, 0x4d006703,
    0xa0551140, 0x5b205702, 0xa0571a40, 0x4f025d02,
    0x00031961, 0x09260220, 0x00345705, 0x00000000,
    0x00131a61, 0x0b260220, 0x00345805, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044f31, 0x00000000, 0xf3080924, 0x00026914,
    0x00043061, 0x17050660, 0x00460705, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb0c0d24, 0x003c1144,
    0xa06d0040, 0x01204d03, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00040d61, 0x61070200,
    0x00465305, 0x00000000, 0x27741a70, 0x4d006d03,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x01060220, 0x00346d05, 0x00000000,
    0x00133061, 0x03060220, 0x00346e05, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x70070200, 0x00465905, 0x00000000,
    0x00040061, 0x72070200, 0x00465505, 0x00000000,
    0x00041e61, 0x78070000, 0x00666107, 0x00000000,
    0xa0761e40, 0x4f027402, 0x00041a61, 0x780f0000,
    0x00667007, 0x00000000, 0x00031a61, 0x01260220,
    0x00347605, 0x00000000, 0x00131b61, 0x03260220,
    0x00347705, 0x00000000, 0x00041b61, 0x78170000,
    0x00667207, 0x00000000, 0x00041961, 0x781f0000,
    0x00666b07, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb080124, 0x00007814, 0x00040070, 0x00010220,
    0x52464505, 0x00464705, 0x01040022, 0x0001c060,
    0x000004c0, 0x00000450, 0x25013162, 0x33433900,
    0x25033162, 0x35433b00, 0x25053062, 0x37433d00,
    0x00043f69, 0x0905a660, 0x02465305, 0x00000017,
    0x00043f69, 0x0b05a660, 0x02465905, 0x00000017,
    0x00043069, 0x0d05a660, 0x02465505, 0x00000017,
    0x25071162, 0x05000300, 0x00040061, 0x5d062650,
    0x00465105, 0x00000000, 0x00040940, 0x03058660,
    0x06460905, 0x43800000, 0x00040940, 0x05058660,
    0x06460b05, 0x43800000, 0x00041c40, 0x09058660,
    0x06460d05, 0x43800000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x25791162, 0x07000100,
    0x00041c65, 0x51058110, 0x01565d06, 0x00010001,
    0xe07b1141, 0x34007900, 0x00041961, 0x00010450,
    0x20685106, 0x00000000, 0x207d1140, 0x7b203900,
    0x20010040, 0x7b203b00, 0x20070040, 0x7b203d00,
    0x200b1c40, 0x7b003300, 0x200d1b40, 0x7b003500,
    0x20331240, 0x7b003700, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x20351240, 0x11207d00,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x20371240, 0x13200100, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x20391640, 0x15200700,
    0x20741640, 0x11200b00, 0x20761640, 0x13200d00,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x20781640, 0x15203300, 0x00041641, 0x3b058aa0,
    0x0a463505, 0x3f7ffffe, 0x00041641, 0x3d058aa0,
    0x0a463705, 0x3f7ffffe, 0x00040941, 0x51058aa0,
    0x0a463905, 0x3f7ffffe, 0x00041641, 0x7a058aa0,
    0x0a467405, 0x3f800001, 0x00041641, 0x7c058aa0,
    0x0a467605, 0x3f800001, 0x00041641, 0x7e058aa0,
    0x0a467805, 0x3f800001, 0x205d0a41, 0x03003b00,
    0x205f0c41, 0x05003d00, 0x20610b41, 0x09005100,
    0x20011641, 0x03007a00, 0x20031641, 0x05007c00,
    0x60631545, 0x00105d00, 0x20051741, 0x09007e00,
    0x60651645, 0x00105f00, 0x60671645, 0x00106100,
    0x60071645, 0x00120100, 0x60091645, 0x00120300,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0xe5691662, 0x00006300, 0x600b1645, 0x00120500,
    0xe56b1662, 0x00006500, 0xe56d1662, 0x00006700,
    0xe50d1662, 0x00020700, 0xe5111662, 0x00020900,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001601, 0x00000000, 0x00000000, 0x00000000,
    0x00040062, 0x6f058aa0, 0x5a466905, 0x437f0000,
    0xe5131662, 0x00020b00, 0x00041662, 0x71058aa0,
    0x5a466b05, 0x437f0000, 0x00041662, 0x73058aa0,
    0x5a466d05, 0x437f0000, 0x00041662, 0x15058aa0,
    0x5a460d05, 0x437f0000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00041662, 0x17058aa0,
    0x5a461105, 0x437f0000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00041661, 0x0f070a00,
    0x00466f05, 0x00000000, 0x00041562, 0x33058aa0,
    0x5a461305, 0x437f0000, 0x00041561, 0x53070a00,
    0x00467105, 0x00000000, 0x00041461, 0x55070a00,
    0x00467305, 0x00000000, 0x00041361, 0x57070a00,
    0x00461505, 0x00000000, 0x00041261, 0x59070a00,
    0x00461705, 0x00000000, 0x00041d61, 0x5d050010,
    0x00660f07, 0x00000000, 0x00041161, 0x5b070a00,
    0x00463305, 0x00000000, 0x00041e61, 0x5e050010,
    0x00665307, 0x00000000, 0x00041e61, 0x5f050010,
    0x00665507, 0x00000000, 0x00041e61, 0x52050010,
    0x00665707, 0x00000000, 0x00041e61, 0x53050010,
    0x00665907, 0x00000000, 0x11041e62, 0x7e058110,
    0x01585d05, 0x00000000, 0x00041e61, 0x54050010,
    0x00665b07, 0x00000000, 0x11041e62, 0x7f058110,
    0x01585e05, 0x00000000, 0x11041e62, 0x01058110,
    0x01585f05, 0x00000000, 0x11041e62, 0x7b058110,
    0x01585205, 0x00000000, 0x11041e62, 0x7c058110,
    0x01585305, 0x00000000, 0x11041d62, 0x7d058110,
    0x01585405, 0x00000000, 0x00040024, 0x0001c060,
    0x00000080, 0x00000080, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00041d61, 0x01054110,
    0x00000000, 0x00800080, 0x00041f61, 0x7f054110,
    0x00000000, 0x00800080, 0x00041f61, 0x7e054110,
    0x00000000, 0x00800080, 0x00041d61, 0x7d054110,
    0x00000000, 0x00000000, 0x00041f61, 0x7c054110,
    0x00000000, 0x00000000, 0x00041f61, 0x7b054110,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x000006a0, 0xa06b0d40, 0x45004d02,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x00041f61, 0x62060100, 0x00580105, 0x00000000,
    0x00040c61, 0x63060100, 0x00587f05, 0x00000000,
    0x00040c61, 0x64060100, 0x00587e05, 0x00000000,
    0x00041f61, 0x73060100, 0x00587d05, 0x00000000,
    0x00041f61, 0x65060100, 0x00587c05, 0x00000000,
    0x00041f61, 0x66060100, 0x00587b05, 0x00000000,
    0x276d0c70, 0x4d006b03, 0xa0710040, 0x01c06b03,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00041e61, 0x79050020, 0x00566406, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa06f0040, 0x4f026d02, 0x27741b70, 0x6b007103,
    0x00031761, 0x67060220, 0x00347105, 0x00000000,
    0x80103f01, 0x00000000, 0x00000000, 0x00000000,
    0x00131761, 0x69060220, 0x00347205, 0x00000000,
    0xa0761b40, 0x6f027402, 0x00031961, 0x67260220,
    0x00347605, 0x00000000, 0x00131a61, 0x69260220,
    0x00347705, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xf3086724, 0x00027914, 0xa0773140, 0x02806b03,
    0x00043061, 0x05050020, 0x00566306, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x27791a70, 0x6b007703, 0x00033161, 0x01060220,
    0x00347705, 0x00000000, 0x00133161, 0x03060220,
    0x00347805, 0x00000000, 0xa07b1b40, 0x6f027902,
    0x00031961, 0x01260220, 0x00347b05, 0x00000000,
    0x00131a61, 0x03260220, 0x00347c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x00000000, 0xf3080124, 0x00020514,
    0xa07c0040, 0x03406b03, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x00041661, 0x0a050020,
    0x00566206, 0x00000000, 0x277e1a70, 0x6b007c03,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00031761, 0x06060220, 0x00347c05, 0x00000000,
    0x80103f01, 0x00000000, 0x00000000, 0x00000000,
    0x00131761, 0x08060220, 0x00347d05, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa0011b40, 0x6f027e02, 0x00031961, 0x06260220,
    0x00340105, 0x00000000, 0x00131a61, 0x08260220,
    0x00340205, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xf3080624, 0x00020a14, 0xa0023240, 0x02206b03,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00043061, 0x0f050020, 0x00566606, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x27041a70, 0x6b000203, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x00031661, 0x0b060220,
    0x00340205, 0x00000000, 0x80103001, 0x00000000,
    0x00000000, 0x00000000, 0x00131361, 0x0d060220,
    0x00340305, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa0061b40, 0x6f020402,
    0x00031961, 0x0b260220, 0x00340605, 0x00000000,
    0x00131a61, 0x0d260220, 0x00340705, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x00000000, 0xf3080b24, 0x00020f14,
    0xa0073340, 0x02e06b03, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00041161, 0x14050020,
    0x00566506, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x27091a70, 0x6b000703,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00031261, 0x10060220, 0x00340705, 0x00000000,
    0x80103001, 0x00000000, 0x00000000, 0x00000000,
    0x00131161, 0x12060220, 0x00340805, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa00b1b40, 0x6f020902, 0x00031961, 0x10260220,
    0x00340b05, 0x00000000, 0x00131a61, 0x12260220,
    0x00340c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x00000000,
    0xf3081024, 0x00021414, 0xa00c3440, 0x03a06b03,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x33050020, 0x00567306, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x270e1a70, 0x6b000c03, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00031761, 0x15060220,
    0x00340c05, 0x00000000, 0x00133061, 0x17060220,
    0x00340d05, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa0101b40, 0x6f020e02,
    0x00031961, 0x15260220, 0x00341005, 0x00000000,
    0x00131a61, 0x17260220, 0x00341105, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xf3081524, 0x00023314,
    0xa0123540, 0x01606b03, 0x00043461, 0x67064540,
    0x00000000, 0x00020002, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x27141a70, 0x6b001203,
    0x00033661, 0x34060220, 0x00341205, 0x00000000,
    0x00130061, 0x36060220, 0x00341305, 0x00000000,
    0x00041c61, 0x38050020, 0x00566706, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa0161c40, 0x6f021402, 0x00031961, 0x34260220,
    0x00341605, 0x00000000, 0x00131a61, 0x36260220,
    0x00341705, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x00000000,
    0xf3083424, 0x00023814, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040070, 0x00010660,
    0x56462905, 0x00464705, 0x01040022, 0x0001c060,
    0x00000728, 0x00000728, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00040a6c, 0x17058660,
    0x02464705, 0x0000001f, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00043669, 0x33058660,
    0x02462905, 0x00000005, 0xe0353768, 0x01b02903,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00031361, 0x37050220, 0x00442d26, 0x00000000,
    0x80103701, 0x00000000, 0x00000000, 0x00000000,
    0x00131361, 0x38050220, 0x00444126, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xa1390a40, 0x330e2d02, 0xaa3a0a40, 0x340e4102,
    0x00030970, 0x3b050220, 0x52463905, 0x00442d06,
    0x00030061, 0x4d060220, 0x00343905, 0x00000000,
    0x00130970, 0x3c050220, 0x52463a05, 0x00444106,
    0x00130061, 0x4f060220, 0x00343a05, 0x00000000,
    0x00040a52, 0x3d040e68, 0x0e2e3705, 0x3b053505,
    0x00031961, 0x4d260220, 0x00343d05, 0x00000000,
    0x00131a61, 0x4f260220, 0x00343e05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x00000000, 0xfb0c4d24, 0x003c1944,
    0xa0410040, 0x01003903, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x27451970, 0x39004103,
    0x00033361, 0x4f060220, 0x00344105, 0x00000000,
    0x00131561, 0x51060220, 0x00344205, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xa04d1b40, 0x3d024502, 0x00031961, 0x4f260220,
    0x00344d05, 0x00000000, 0x00131a61, 0x51260220,
    0x00344e05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xfb0c4f24, 0x003c2144, 0x00043469, 0x4e058660,
    0x02462905, 0x00000002, 0xe0503468, 0x01e02903,
    0x00033461, 0x52050220, 0x00442f26, 0x00000000,
    0x00131461, 0x53050220, 0x00444326, 0x00000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0xa10c0940, 0x4e0e2f02, 0xaa540c40, 0x4f0e4302,
    0x00030a70, 0x55050220, 0x52460c05, 0x00442f06,
    0x00031361, 0x59060220, 0x00340c05, 0x00000000,
    0x00130b70, 0x56050220, 0x52465405, 0x00444306,
    0x00131261, 0x5b060220, 0x00345405, 0x00000000,
    0x00040952, 0x57040e68, 0x0e2e5205, 0x55055005,
    0x00031961, 0x59260220, 0x00345705, 0x00000000,
    0x00131a61, 0x5b260220, 0x00345805, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x00000000, 0xfb0c5924, 0x00042914,
    0x80001401, 0x00000000, 0x00000000, 0x00000000,
    0xe06d0068, 0x00613103, 0xa0583840, 0x29004702,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x275a1970, 0x47005803, 0x00041169, 0x5e058660,
    0x02465805, 0x00000002, 0xe0611668, 0x01e05803,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xa05c0940, 0x17025a02, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xa10d0b40, 0x5e0e2f02,
    0xaa640c40, 0x5f0e4302, 0x00040b69, 0x5f058660,
    0x02465c05, 0x00000002, 0x00031b70, 0x65050220,
    0x52460d05, 0x00442f06, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00031761, 0x69060220,
    0x00340d05, 0x00000000, 0x00131c70, 0x66050220,
    0x52466405, 0x00444306, 0x00131561, 0x6b060220,
    0x00346405, 0x00000000, 0x20630c66, 0x61005f03,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00040952, 0x67040e68, 0x0e2e5205, 0x65056305,
    0x00031961, 0x69260220, 0x00346705, 0x00000000,
    0x00131a61, 0x6b260220, 0x00346805, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x00000000, 0xfb0c6924, 0x00046d14,
    0x00043961, 0x6a062650, 0x00464905, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x00041965, 0x69058110, 0x01566a06, 0x00010001,
    0x00041961, 0x6a050450, 0x00686906, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x00041970, 0x6d058550, 0x25586a05, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x00041961, 0x6b050560, 0x00466d05, 0x00000000,
    0x00041965, 0x00010220, 0x22466b05, 0x00464b05,
    0x01040022, 0x0001c060, 0x00000260, 0x00000260,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001401, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x6e058660, 0x02464705, 0x00000003,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa10e1340, 0x028e2b03, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x80101701, 0x00000000,
    0x00000000, 0x00000000, 0xaa700040, 0x028e3f03,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00041b66, 0x7d058220, 0x02466e05, 0xffffffc0,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00031b70, 0x0f050220, 0x52460e05, 0x00442b06,
    0x00130b70, 0x71050220, 0x52467005, 0x00443f06,
    0x00033e61, 0x75060220, 0x00340e05, 0x00000000,
    0x00130061, 0x77060220, 0x00347005, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00031c40, 0x10052660, 0x06460f05, 0x00442b26,
    0x00130c40, 0x72052660, 0x06467105, 0x00443f26,
    0x00031a61, 0x75260220, 0x00341005, 0x00000000,
    0x00131a61, 0x77260220, 0x00347205, 0x00000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044a31, 0x73140000, 0xfb047524, 0x00040000,
    0x00042a69, 0x75058660, 0x02467305, 0x00000006,
    0xa1110940, 0x750e2b02, 0xaa761a40, 0x760e3f02,
    0x00030a70, 0x12050220, 0x52461105, 0x00442b06,
    0x00033261, 0x79060220, 0x00341105, 0x00000000,
    0x80103a01, 0x00000000, 0x00000000, 0x00000000,
    0x00131b70, 0x77050220, 0x52467605, 0x00443f06,
    0x00133261, 0x7b060220, 0x00347605, 0x00000000,
    0x00030940, 0x13052660, 0x06461205, 0x00442b26,
    0x80103a01, 0x00000000, 0x00000000, 0x00000000,
    0x00131b40, 0x78052660, 0x06467705, 0x00443f26,
    0x00031a61, 0x79260220, 0x00341305, 0x00000000,
    0x00131a61, 0x7b260220, 0x00347805, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x00000000, 0xfb0c7924, 0x00047d14,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80033261, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_DFS_DFS_trivial = {
   .prog_data = {
      .base.nr_params = 17,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 3,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 15072,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_DFS_DFS_trivial_relocs,
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
      .push.cross_thread.dwords = 17,
      .push.cross_thread.regs = 3,
      .push.cross_thread.size = 96,
   },
   .args_size = 36,
   .arg_count = 5,
   .args = gfx125_bvh_build_DFS_DFS_trivial_args,
   .code = gfx125_bvh_build_DFS_DFS_trivial_code,
};
const char *gfx125_bvh_build_DFS_DFS_trivial_sha1 = "1d7a33871e0f9c654b90fdaa668bbb47b8f11f9f";

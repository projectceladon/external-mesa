#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_DFS_DFS_trivial_batchable_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_DFS_DFS_trivial_batchable_args[] = {
   { 0, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g35<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(8)          g81<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(16)         g17<1>D         1D                              { align1 1H };
mov(16)         g124<1>UD       g0.1<0,1,0>UD                   { align1 1H };
add(1)          g36<1>UD        g35<0,1,0>UD    0x00000000UD    { align1 WE_all 1N I@4 compacted };
add(8)          g81.8<1>UW      g81<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@4 compacted };
mul(8)          acc0<1>UD       g124<8,8,1>UD   0x0058UW        { align1 1Q I@3 };
mul(16)         g112<1>D        g124<1,1,0>D    88W             { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(1)         g1UD            g36UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
mov(16)         g67<1>D         g81<8,8,1>UW                    { align1 1H };
mach(8)         g110<1>UD       g124<1,1,0>UD   0x00000058UD    { align1 1Q compacted AccWrEnable };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
and(16)         g35<1>UD        g67<1,1,0>UD    0x0000000fUD    { align1 1H I@2 compacted };
mul(8)          acc0<1>UD       g125<8,8,1>UD   0x0058UW        { align1 2Q };
mov(16)         g60<2>UW        g35<8,8,1>UD                    { align1 1H I@2 };
mov(16)         g105<1>UD       g35<16,8,2>UW                   { align1 1H };
mach(8)         g111<1>UD       g125<8,8,1>UD   0x00000058UD    { align1 2Q AccWrEnable };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g37.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g108.1<2>F      g2.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g37<2>F         g2<0,1,0>F                      { align1 1Q F@2 compacted };
mov(8)          g108<2>F        g2<0,1,0>F                      { align1 2Q F@2 compacted };
mov(8)          g114<1>UD       g37.1<8,4,2>UD                  { align1 1Q F@2 };
add(8)          g116<1>D        g37<8,4,2>D     g112<1,1,0>D    { align1 1Q I@7 compacted };
mov(8)          g115<1>UD       g108.1<8,4,2>UD                 { align1 2Q F@1 };
add(8)          g117<1>D        g108<8,4,2>D    g113<1,1,0>D    { align1 2Q compacted };
cmp.l.f0.0(8)   g118<1>UD       g116<8,8,1>UD   g37<8,4,2>UD    { align1 1Q I@3 };
mov(8)          g27<2>UD        g116<4,4,1>UD                   { align1 1Q };
cmp.l.f0.0(8)   g119<1>UD       g117<8,8,1>UD   g108<8,4,2>UD   { align1 2Q I@3 };
mov(8)          g29<2>UD        g117<4,4,1>UD                   { align1 2Q };
add(16)         g121<1>D        g116<1,1,0>D    32D             { align1 1H compacted };
add(16)         g126<1>D        g116<1,1,0>D    60D             { align1 1H compacted };
add(16)         g11<1>D         g116<1,1,0>D    48D             { align1 1H compacted };
cmp.l.f0.0(16)  g123<1>UD       g121<1,1,0>UD   g116<1,1,0>UD   { align1 1H I@3 compacted };
mov(8)          g19<2>UD        g121<4,4,1>UD                   { align1 1Q };
mov(8)          g21<2>UD        g122<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cmp.l.f0.0(16)  g1<1>UD         g126<1,1,0>UD   g116<1,1,0>UD   { align1 1H A@1 compacted };
mov(8)          g23<2>UD        g126<4,4,1>UD                   { align1 1Q };
mov(8)          g25<2>UD        g127<4,4,1>UD                   { align1 2Q };
add3(16)        g120<1>D        g114<8,8,1>D    g110<8,8,1>D    -g118<1,1,1>D { align1 1H };
mov(8)          g31<2>UD        g11<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g33<2>UD        g12<4,4,1>UD                    { align1 2Q I@7 };
cmp.l.f0.0(16)  g13<1>UD        g11<1,1,0>UD    g116<1,1,0>UD   { align1 1H compacted };
mov(8)          g27.1<2>UD      g120<4,4,1>UD                   { align1 1Q I@4 };
mov(8)          g29.1<2>UD      g121<4,4,1>UD                   { align1 2Q I@5 };
add(16)         g125<1>D        -g123<1,1,0>D   g120<1,1,0>D    { align1 1H compacted };
add(16)         g9<1>D          -g1<1,1,0>D     g120<1,1,0>D    { align1 1H I@7 compacted };
add(16)         g15<1>D         -g13<1,1,0>D    g120<1,1,0>D    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g1UD            g27UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
mov(8)          g19.1<2>UD      g125<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g21.1<2>UD      g126<4,4,1>UD                   { align1 2Q I@4 };
mov(8)          g23.1<2>UD      g9<4,4,1>UD                     { align1 1Q I@4 };
mov(8)          g25.1<2>UD      g10<4,4,1>UD                    { align1 2Q I@5 };
mov(8)          g31.1<2>UD      g15<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g33.1<2>UD      g16<4,4,1>UD                    { align1 2Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g63UD           g19UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g51UD           g23UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g19UD           g31UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
mov(16)         g58<2>UW        g51<8,8,1>UD                    { align1 1H $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
and(16)         g23<1>UD        g19<1,1,0>UD    0x00000001UD    { align1 1H $1.dst compacted };
mov(16)         g69<1>UD        g21<16,8,2>UW                   { align1 1H $1.dst };
cmp.nz.f0.0(16) g71<1>D         g23<1,1,0>D     0D              { align1 1H I@2 compacted };
cmp.l.f0.0(16)  null<1>D        g105<8,8,1>D    g69<8,8,1>D     { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
shl(16)         g37<1>D         g105<8,8,1>D    0x00000005UD    { align1 1H };
shr(16)         g39<1>UD        g105<1,1,0>UD   0x0000001bUD    { align1 1H compacted };
add(16)         g41<1>D         g5<1,1,0>D      g37<1,1,0>D     { align1 1H @2 $1.dst compacted };
cmp.l.f0.0(16)  g43<1>UD        g41<1,1,0>UD    g5<1,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g9<2>UD         g41<4,4,1>UD                    { align1 1Q };
mov(8)          g11<2>UD        g42<4,4,1>UD                    { align1 2Q };
add(16)         g47<1>D         g41<1,1,0>D     16D             { align1 1H compacted };
add3(16)        g45<1>D         g7<8,8,1>D      g39<8,8,1>D     -g43<1,1,1>D { align1 1H @4 $1.dst };
cmp.l.f0.0(16)  g49<1>UD        g47<1,1,0>UD    g41<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g53<2>UD        g47<4,4,1>UD                    { align1 1Q };
mov(8)          g55<2>UD        g48<4,4,1>UD                    { align1 2Q };
mov(8)          g9.1<2>UD       g45<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g11.1<2>UD      g46<4,4,1>UD                    { align1 2Q I@5 };
add(16)         g73<1>D         -g49<1,1,0>D    g45<1,1,0>D     { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g33UD           g9UD            nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
mov(8)          g53.1<2>UD      g73<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g55.1<2>UD      g74<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g41UD           g53UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g39<1>UD        0x00000000UD                    { align1 1H $1.dst };
mov(16)         g37<1>UD        0x7f800000UD                    { align1 1H $1.dst };
mov(16)         g35<1>UD        0x7f800000UD                    { align1 1H $1.dst };
mov(16)         g33<1>UD        0x7f800000UD                    { align1 1H $1.dst };
mov(16)         g47<1>UD        0x80000000UD                    { align1 1H $1.dst };
mov(16)         g45<1>UD        0xff800000UD                    { align1 1H $1.dst };
mov(16)         g43<1>UD        0xff800000UD                    { align1 1H $1.dst };
mov(16)         g41<1>UD        0xff800000UD                    { align1 1H $1.dst };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
cmp.z.f0.0(16)  g75<1>W         g60<16,8,2>W    0W              { align1 1H };
mov.nz.f0.0(16) g73<1>D         g75<8,8,1>W                     { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
add(16)         g76<1>D         g63<1,1,0>D     12D             { align1 1H $2.dst compacted };
cmp.l.f0.0(16)  g78<1>UD        g76<1,1,0>UD    g63<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g10<2>UD        g76<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g12<2>UD        g77<4,4,1>UD                    { align1 2Q $1.src };
add(16)         g80<1>D         -g78<1,1,0>D    g65<1,1,0>D     { align1 1H @3 $2.dst compacted };
mov(8)          g10.1<2>UD      g80<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g12.1<2>UD      g81<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g81UD           g10UD           nullUD          0x08240588                0x00000000
                            ugm MsgDesc: ( atomic_inc, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
shl(16)         g49<1>D         g81<8,8,1>D     0x00000006UD    { align1 1H $1.dst };

LABEL3:
endif(16)       JIP:  LABEL4                                    { align1 1H };

LABEL4:
add(16)         g75<1>D         g63<1,1,0>D     g49<0,1,0>D     { align1 1H @2 $2.dst compacted };
add(16)         g84<1>D         g63<1,1,0>D     16D             { align1 1H compacted };
add(16)         g94<1>D         g67<1,1,0>D     4D              { align1 1H compacted };
add(16)         g96<1>D         g67<1,1,0>D     -12D            { align1 1H compacted };
add(16)         g98<1>D         g67<1,1,0>D     2D              { align1 1H compacted };
add(16)         g100<1>D        g67<1,1,0>D     -14D            { align1 1H compacted };
add(16)         g102<1>D        g67<1,1,0>D     1D              { align1 1H compacted };
add(16)         g107<1>D        g67<1,1,0>D     -15D            { align1 1H compacted };
cmp.l.f0.0(16)  g82<1>UD        g75<1,1,0>UD    g63<1,1,0>UD    { align1 1H I@7 compacted };
mov(8)          g21<2>UD        g75<4,4,1>UD                    { align1 1Q };
mov(8)          g23<2>UD        g76<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g54<2>UD        g84<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g56<2>UD        g85<4,4,1>UD                    { align1 2Q $1.src };
cmp.l.f0.0(16)  g86<1>UD        g84<1,1,0>UD    g63<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  null<1>D        g94<8,8,1>D     16D             { align1 1H };
add(16)         g77<1>D         -g82<1,1,0>D    g65<1,1,0>D     { align1 1H @7 $2.dst compacted };
add(16)         g88<1>D         -g86<1,1,0>D    g65<1,1,0>D     { align1 1H I@3 compacted };
(+f0.0) sel(16) g19<1>UD        g94<1,1,0>UD    g96<1,1,0>UD    { align1 1H compacted };
mov(8)          g21.1<2>UD      g77<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g23.1<2>UD      g78<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g54.1<2>UD      g88<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g56.1<2>UD      g89<4,4,1>UD                    { align1 2Q I@5 };
cmp.l.f0.0(16)  null<1>D        g98<8,8,1>D     16D             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g89UD           g54UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $4 };
(+f0.0) sel(16) g83<1>UD        g98<1,1,0>UD    g100<1,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  null<1>D        g102<8,8,1>D    16D             { align1 1H };
(+f0.0) sel(16) g27<1>UD        g102<1,1,0>UD   g107<1,1,0>UD   { align1 1H $1.src compacted };
cmp.z.f0.0(16)  g108<1>W        g58<16,8,2>W    1W              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov.nz.f0.0(16) g25<1>D         g108<8,8,1>W                    { align1 1H I@1 };
shl(16)         g91<1>D         g89<8,8,1>D     0x00000006UD    { align1 1H $4.dst };
add3(16)        g93<1>D         g63<8,8,1>D     g91<8,8,1>D     -g75<1,1,1>D { align1 1H I@1 };
asr(16)         g15<1>D         g93<8,8,1>D     0x00000006UD    { align1 1H I@1 };
(-f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL5              { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g67<8,8,1>UD    g69<8,8,1>UD    { align1 1H };
(+f0.0) sel(16) g109<1>UD       g41<8,8,1>UD    0xff800000UD    { align1 1H $1.dst };
(+f0.0) sel(16) g120<1>UD       g43<8,8,1>UD    0xff800000UD    { align1 1H $1.dst };
(+f0.0) sel(16) g112<1>UD       g45<8,8,1>UD    0xff800000UD    { align1 1H $1.dst };
(+f0.0) sel(16) g114<1>UD       g33<8,8,1>UD    0x7f800000UD    { align1 1H $1.dst };
(+f0.0) sel(16) g116<1>UD       g35<8,8,1>UD    0x7f800000UD    { align1 1H $1.dst };
(+f0.0) sel(16) g118<1>UD       g37<8,8,1>UD    0x7f800000UD    { align1 1H $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         a0<1>UW         0x0da0UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g19<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0da0UW        { align1 1H A@1 };
mov(16)         g53<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         a0<1>UW         0x0f00UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g19<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0f00UW        { align1 1H A@1 };
mov(16)         g29<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         a0<1>UW         0x0e00UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g19<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0e00UW        { align1 1H A@1 };
mov(16)         g31<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0e40UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g19<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0e40UW        { align1 1H A@1 };
mov(16)         g122<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0e80UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g19<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0e80UW        { align1 1H A@1 };
mov(16)         g124<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0ec0UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g19<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ec0UW        { align1 1H A@1 };
mov(16)         g126<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g67<8,8,1>UD    0x00000006UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.ge(16)      g56<1>F         g109<1,1,0>F    g53<1,1,0>F     { align1 1H I@7 compacted };
sel.ge(16)      g58<1>F         g120<1,1,0>F    g29<1,1,0>F     { align1 1H I@6 compacted };
sel.ge(16)      g60<1>F         g112<1,1,0>F    g31<1,1,0>F     { align1 1H I@5 compacted };
sel.l(16)       g120<1>F        g114<1,1,0>F    g122<1,1,0>F    { align1 1H A@2 compacted };
sel.l(16)       g122<1>F        g116<1,1,0>F    g124<1,1,0>F    { align1 1H I@3 compacted };
mov(16)         a0<1>UW         0x0700UW                        { align1 WE_all 1H F@5 };
shl(16)         a0<1>UW         g83<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0700UW        { align1 1H A@1 };
mov(16)         g81<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g124<1>F        g118<1,1,0>F    g126<1,1,0>F    { align1 1H I@3 compacted };
mov(16)         a0<1>UW         0x0740UW                        { align1 WE_all 1H F@5 };
shl(16)         a0<1>UW         g83<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0740UW        { align1 1H A@1 };
mov(16)         g53<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0780UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g83<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0780UW        { align1 1H A@1 };
mov(16)         g79<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0f00UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g83<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0f00UW        { align1 1H A@1 };
mov(16)         g126<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0f40UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g83<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0f40UW        { align1 1H A@1 };
mov(16)         g29<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g113<1>F        g56<1,1,0>F     g81<1,1,0>F     { align1 1H A@3 compacted };
mov(16)         a0<1>UW         0x0f80UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g83<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0f80UW        { align1 1H A@1 };
mov(16)         g31<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g115<1>F        g58<1,1,0>F     g53<1,1,0>F     { align1 1H A@3 compacted };
sel.ge(16)      g117<1>F        g60<1,1,0>F     g79<1,1,0>F     { align1 1H A@3 compacted };
sel.l(16)       g101<1>F        g120<1,1,0>F    g126<1,1,0>F    { align1 1H I@3 compacted };
sel.l(16)       g103<1>F        g122<1,1,0>F    g29<1,1,0>F     { align1 1H I@2 compacted };
mov(16)         a0<1>UW         0x0e20UW                        { align1 WE_all 1H F@5 };
shl(16)         a0<1>UW         g27<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0e20UW        { align1 1H A@1 };
mov(16)         g85<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g107<1>F        g124<1,1,0>F    g31<1,1,0>F     { align1 1H I@2 compacted };
mov(16)         a0<1>UW         0x0e60UW                        { align1 WE_all 1H A@5 };
shl(16)         a0<1>UW         g27<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0e60UW        { align1 1H A@1 };
mov(16)         g57<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0ea0UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g27<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ea0UW        { align1 1H A@1 };
mov(16)         g81<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         a0<1>UW         0x0ca0UW                        { align1 WE_all 1H A@3 };
shl(16)         a0<1>UW         g27<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ca0UW        { align1 1H A@1 };
mov(16)         g55<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0ce0UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g27<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ce0UW        { align1 1H A@1 };
mov(16)         g109<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g59<1>F         g113<1,1,0>F    g85<1,1,0>F     { align1 1H A@4 compacted };
mov(16)         a0<1>UW         0x0d60UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g27<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0d60UW        { align1 1H A@1 };
mov(16)         g111<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g61<1>F         g115<1,1,0>F    g57<1,1,0>F     { align1 1H A@5 compacted };
sel.ge(16)      g79<1>F         g117<1,1,0>F    g81<1,1,0>F     { align1 1H I@4 compacted };
sel.l(16)       g53<1>F         g101<1,1,0>F    g55<1,1,0>F     { align1 1H I@3 compacted };
sel.l(16)       g55<1>F         g103<1,1,0>F    g109<1,1,0>F    { align1 1H I@2 compacted };
sel.l(16)       g57<1>F         g107<1,1,0>F    g111<1,1,0>F    { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
sel.ge(16)      g81<1>F         (abs)g53<0,1,0>F (abs)g59<0,1,0>F { align1 1H F@3 compacted };
sel.ge(16)      g85<1>F         (abs)g55<0,1,0>F (abs)g61<0,1,0>F { align1 1H F@3 compacted };
sel.ge(16)      g87<1>F         (abs)g57<0,1,0>F (abs)g79<0,1,0>F { align1 1H F@3 compacted };
add(16)         g91<1>D         g75<1,1,0>D     16D             { align1 1H compacted };
mov(16)         g95<2>B         -1W                             { align1 1H };
sel.ge(16)      g89<1>F         g85<1,1,0>F     g87<1,1,0>F     { align1 1H F@1 compacted };
mov(16)         g93<4>UB        g51<8,8,1>UD                    { align1 1H };
mov(8)          g29<2>UD        g91<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g31<2>UD        g92<4,4,1>UD                    { align1 2Q I@4 };
sel.ge(16)      g51<1>F         g81<1,1,0>F     g89<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         g81<1>UD        g93<32,8,4>UB                   { align1 1H A@1 };
mul(16)         g87<1>F         g51<1,1,0>F     0x34000000F  /* 1.19209e-07F */ { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g9<1>F          g53<0,1,0>F     -g87<1,1,0>F    { align1 1H F@1 compacted };
add(16)         g11<1>F         g55<0,1,0>F     -g87<1,1,0>F    { align1 1H $1.src compacted };
add(16)         g13<1>F         g57<0,1,0>F     -g87<1,1,0>F    { align1 1H $1.src compacted };
add(16)         g89<1>F         g59<0,1,0>F     g87<1,1,0>F     { align1 1H compacted };
add(16)         g93<1>F         g61<0,1,0>F     g87<1,1,0>F     { align1 1H I@1 compacted };
add(16)         g96<1>F         g79<0,1,0>F     g87<1,1,0>F     { align1 1H compacted };
add(16)         g98<1>F         g89<1,1,0>F     -g9<1,1,0>F     { align1 1H F@3 compacted };
add(16)         g100<1>F        g93<1,1,0>F     -g11<1,1,0>F    { align1 1H A@3 compacted };
add(16)         g102<1>F        g96<1,1,0>F     -g13<1,1,0>F    { align1 1H A@3 compacted };
mul(16)         g107<1>F        g98<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H A@3 };
mul(16)         g87<1>F         g100<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H F@3 };
mul(16)         g51<1>F         g102<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H F@3 };
and(16)         g55<1>UD        g107<8,8,1>UD   0x007fffffUD    { align1 1H F@3 };
and(16)         g79<1>UD        g107<8,8,1>UD   0x80000000UD    { align1 1H F@7 };
and(16)         g59<1>UD        g107<8,8,1>UD   0x7f800000UD    { align1 1H F@7 };
and(16)         g57<1>UD        g87<8,8,1>UD    0x007fffffUD    { align1 1H F@2 };
and(16)         g85<1>UD        g87<8,8,1>UD    0x80000000UD    { align1 1H };
and(16)         g61<1>UD        g87<8,8,1>UD    0x7f800000UD    { align1 1H F@7 };
and(16)         g89<1>UD        g51<8,8,1>UD    0x007fffffUD    { align1 1H F@1 };
and(16)         g53<1>UD        g51<8,8,1>UD    0x7f800000UD    { align1 1H };
and(16)         g87<1>UD        g51<8,8,1>UD    0x80000000UD    { align1 1H };
add(16)         g51<1>D         g55<8,8,1>D     1056964608D     { align1 1H I@7 };
asr(16)         g55<1>D         g59<8,8,1>D     0x00000017UD    { align1 1H I@7 };
add(16)         g59<1>D         g57<8,8,1>D     1056964608D     { align1 1H I@7 };
asr(16)         g57<1>D         g61<8,8,1>D     0x00000017UD    { align1 1H I@7 };
add(16)         g61<1>D         g89<8,8,1>D     1056964608D     { align1 1H I@7 };
cmp.z.f0.0(16)  null<1>F        g51<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@5 compacted };
asr(16)         g89<1>D         g53<8,8,1>D     0x00000017UD    { align1 1H I@7 };
add(16)         g53<1>D         g55<1,1,0>D     -126D           { align1 1H I@5 compacted };
add(16)         g55<1>D         g57<1,1,0>D     -126D           { align1 1H I@4 compacted };
add(16)         g57<1>D         g89<1,1,0>D     -126D           { align1 1H I@3 compacted };
(-f0.0) sel(16) g89<1>UD        g51<8,8,1>UD    0x3f000000UD    { align1 1H };
and(16)         g51<1>UD        g89<8,8,1>UD    0x7fffffffUD    { align1 1H A@1 };
cmp.z.f0.0(16)  null<1>F        g59<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@7 compacted };
or(16)          g89<1>UD        g51<1,1,0>UD    g79<1,1,0>UD    { align1 1H I@1 compacted };
(-f0.0) sel(16) g93<1>UD        g59<8,8,1>UD    0x3f000000UD    { align1 1H F@7 };
and(16)         g96<1>UD        g93<8,8,1>UD    0x7fffffffUD    { align1 1H A@1 };
cmp.z.f0.0(16)  null<1>F        g61<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@7 compacted };
or(16)          g98<1>UD        g96<1,1,0>UD    g85<1,1,0>UD    { align1 1H A@1 compacted };
(-f0.0) sel(16) g108<1>UD       g61<8,8,1>UD    0x3f000000UD    { align1 1H };
and(16)         g110<1>UD       g108<8,8,1>UD   0x7fffffffUD    { align1 1H I@1 };
cmp.g.f0.0(16)  g100<1>F        g89<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@6 };
cmp.g.f0.0(16)  g114<1>F        g98<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@3 };
or(16)          g112<1>UD       g110<1,1,0>UD   g87<1,1,0>UD    { align1 1H I@1 compacted };
add(16)         g51<1>D         g53<1,1,0>D     -g100<1,1,0>D   { align1 1H F@2 compacted };
add(16)         g61<1>D         g55<1,1,0>D     -g114<1,1,0>D   { align1 1H A@1 compacted };
cmp.g.f0.0(16)  g116<1>F        g112<8,8,1>F    0x3f7f0000F  /* 0.996094F */ { align1 1H I@3 };
cmp.l.f0.0(16)  g118<1>UD       g91<1,1,0>UD    g75<1,1,0>UD    { align1 1H compacted };
add(16)         g79<1>D         g57<1,1,0>D     -g116<1,1,0>D   { align1 1H F@1 compacted };
add(16)         g120<1>D        -g118<1,1,0>D   g77<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g29.1<2>UD      g120<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g31.1<2>UD      g121<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g29UD           g81UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $5 };
send(16)        nullUD          g21UD           g9UD            0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $1 };
add(16)         g122<1>D        g75<1,1,0>D     18D             { align1 1H compacted };
mov(16)         g55<4>UB        g51<8,8,1>UD                    { align1 1H I@7 };
cmp.l.f0.0(16)  g124<1>UD       g122<1,1,0>UD   g75<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g29<2>UD        g122<4,4,1>UD                   { align1 1Q $5.src };
mov(8)          g31<2>UD        g123<4,4,1>UD                   { align1 2Q $5.src };
mov(16)         g57<4>UB        g61<8,8,1>UD                    { align1 1H };
mov(16)         g59<4>UB        g79<8,8,1>UD                    { align1 1H A@5 };
mov(16)         g53<4>UB        g55<32,8,4>UB                   { align1 1H I@6 };
add(16)         g126<1>D        -g124<1,1,0>D   g77<1,1,0>D     { align1 1H I@6 compacted };
mov(16)         g53.1<4>UB      g57<32,8,4>UB                   { align1 1H I@2 };
mov(8)          g29.1<2>UD      g126<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g31.1<2>UD      g127<4,4,1>UD                   { align1 2Q I@3 };
mov(16)         g53.2<4>UB      g59<32,8,4>UB                   { align1 1H I@3 };
mov(16)         g53.3<4>UB      g95<16,8,2>UB                   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g29UD           g53UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $1 };
cmp.l.f0.0(16)  null<1>UD       g67<8,8,1>UD    g69<8,8,1>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL9          UIP:  LABEL8              { align1 1H };
sel.ge(16)      g53<1>F         (abs)g33<1,1,0>F (abs)g41<1,1,0>F { align1 1H $1.src compacted };
sel.ge(16)      g55<1>F         (abs)g35<1,1,0>F (abs)g43<1,1,0>F { align1 1H I@7 compacted };
sel.ge(16)      g57<1>F         (abs)g37<1,1,0>F (abs)g45<1,1,0>F { align1 1H I@7 compacted };
shl(16)         g59<1>D         -g51<8,8,1>D    0x00000017UD    { align1 1H };
shl(16)         g31<1>D         -g61<8,8,1>D    0x00000017UD    { align1 1H $1.src };
shl(16)         g51<1>D         -g79<8,8,1>D    0x00000017UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.ge(16)      g29<1>F         g55<1,1,0>F     g57<1,1,0>F     { align1 1H F@1 compacted };
add(16)         g61<1>D         g59<8,8,1>D     1132462080D     { align1 1H I@3 };
add(16)         g79<1>D         g31<8,8,1>D     1132462080D     { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g81<1>D         g51<8,8,1>D     1132462080D     { align1 1H I@3 };
sel.ge(16)      g31<1>F         g53<1,1,0>F     g29<1,1,0>F     { align1 1H A@1 compacted };
mul(16)         g29<1>F         g31<1,1,0>F     0x34000000F  /* 1.19209e-07F */ { align1 1H F@1 compacted };
add(16)         g31<1>F         g33<1,1,0>F     -g29<1,1,0>F    { align1 1H F@1 compacted };
add(16)         g51<1>F         g35<1,1,0>F     -g29<1,1,0>F    { align1 1H I@1 compacted };
add(16)         g53<1>F         g37<1,1,0>F     -g29<1,1,0>F    { align1 1H compacted };
add(16)         g55<1>F         g41<1,1,0>F     g29<1,1,0>F     { align1 1H compacted };
add(16)         g57<1>F         g43<1,1,0>F     g29<1,1,0>F     { align1 1H compacted };
add(16)         g59<1>F         g45<1,1,0>F     g29<1,1,0>F     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g29<1>F         g31<1,1,0>F     -g9<1,1,0>F     { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g31<1>F         g51<1,1,0>F     -g11<1,1,0>F    { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g51<1>F         g53<1,1,0>F     -g13<1,1,0>F    { align1 1H F@6 compacted };
add(16)         g53<1>F         g55<1,1,0>F     -g9<1,1,0>F     { align1 1H F@6 compacted };
add(16)         g55<1>F         g57<1,1,0>F     -g11<1,1,0>F    { align1 1H F@6 compacted };
add(16)         g57<1>F         g59<1,1,0>F     -g13<1,1,0>F    { align1 1H F@6 compacted };
mul(16)         g59<1>F         g29<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g29<1>F         g31<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g31<1>F         g51<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g51<1>F         g53<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g53<1>F         g55<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g55<1>F         g57<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g57<1>F         g59<1,1,0>F     g61<1,1,0>F     { align1 1H A@3 compacted };
mul(16)         g59<1>F         g29<1,1,0>F     g79<1,1,0>F     { align1 1H A@2 compacted };
mul(16)         g29<1>F         g31<1,1,0>F     g81<1,1,0>F     { align1 1H A@1 compacted };
mul(16)         g31<1>F         g51<1,1,0>F     g61<1,1,0>F     { align1 1H F@6 compacted };
mul(16)         g118<1>F        g55<1,1,0>F     g81<1,1,0>F     { align1 1H F@5 compacted };
mul(16)         g51<1>F         g53<1,1,0>F     g79<1,1,0>F     { align1 1H F@7 compacted };
rndd(16)        g97<1>F         g57<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g99<1>F         g59<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g101<1>F        g29<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g103<1>F        -g31<1,1,0>F                    { align1 1H F@6 compacted };
rndd(16)        g109<1>F        -g118<1,1,0>F                   { align1 1H F@6 compacted };
rndd(16)        g107<1>F        -g51<1,1,0>F                    { align1 1H F@6 compacted };
sel.ge(16)      g111<1>F        g97<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g113<1>F        g99<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g115<1>F        g101<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g117<1>F        -g103<1,1,0>F   0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g121<1>F        -g109<1,1,0>F   0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g119<1>F        -g107<1,1,0>F   0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.l(16)       g51<1>F         g111<8,8,1>F    0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g53<1>F         g113<8,8,1>F    0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g55<1>F         g115<8,8,1>F    0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g57<1>F         g117<8,8,1>F    0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g61<1>F         g121<8,8,1>F    0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g59<1>F         g119<8,8,1>F    0x437f0000F  /* 255F */ { align1 1H F@6 };
mov(16)         g85<4>UB        g51<8,8,1>F                     { align1 1H F@6 };
mov(16)         g87<4>UB        g53<8,8,1>F                     { align1 1H F@5 };
mov(16)         g89<4>UB        g55<8,8,1>F                     { align1 1H F@4 };
mov(16)         g91<4>UB        g57<8,8,1>F                     { align1 1H F@3 };
mov(16)         g95<4>UB        g61<8,8,1>F                     { align1 1H F@2 };
mov(16)         g93<4>UB        g59<8,8,1>F                     { align1 1H F@1 };
mov(16)         g97<1>UW        g85<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g98<1>UW        g87<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g99<1>UW        g89<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g82<1>UW        g91<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g86<1>UW        g95<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g85<1>UW        g93<32,8,4>UB                   { align1 1H I@6 };
else(16)        JIP:  LABEL8          UIP:  LABEL8              { align1 1H };

LABEL9:
mov(16)         g99<1>UW        0x0080UW                        { align1 1H A@2 };
mov(16)         g98<1>UW        0x0080UW                        { align1 1H A@2 };
mov(16)         g97<1>UW        0x0080UW                        { align1 1H I@7 };
mov(16)         g86<1>UW        0x0000UW                        { align1 1H I@6 };
mov(16)         g85<1>UW        0x0000UW                        { align1 1H I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g82<1>UW        0x0000UW                        { align1 1H I@7 };

LABEL8:
endif(16)       JIP:  LABEL7                                    { align1 1H };
add(16)         g122<1>D        g75<1,1,0>D     g67<1,1,0>D     { align1 1H F@2 compacted };
mov(16)         g60<2>UB        g99<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g92<2>UB        g98<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g93<2>UB        g97<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g61<2>UB        g86<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g62<2>UB        g85<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g79<2>UB        g82<16,16,1>UW                  { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g80<1>UD        g122<1,1,0>UD   g75<1,1,0>UD    { align1 1H I@7 compacted };
add(16)         g85<1>D         g122<1,1,0>D    28D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g54<1>UD        g93<16,8,2>UB                   { align1 1H I@6 };
add(16)         g124<1>D        -g80<1,1,0>D    g77<1,1,0>D     { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g87<1>UD        g85<1,1,0>UD    g122<1,1,0>UD   { align1 1H I@3 compacted };
mov(8)          g29<2>UD        g85<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g31<2>UD        g86<4,4,1>UD                    { align1 2Q $1.src };
add(16)         g89<1>D         -g87<1,1,0>D    g124<1,1,0>D    { align1 1H A@3 compacted };
mov(8)          g29.1<2>UD      g89<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g31.1<2>UD      g90<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g29UD           g54UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $4 };
add(16)         g90<1>D         g122<1,1,0>D    40D             { align1 1H compacted };
mov(16)         g55<1>UD        g92<16,8,2>UB                   { align1 1H $4.src };
cmp.l.f0.0(16)  g92<1>UD        g90<1,1,0>UD    g122<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g29<2>UD        g90<4,4,1>UD                    { align1 1Q $4.src };
mov(8)          g31<2>UD        g91<4,4,1>UD                    { align1 2Q $4.src };
add(16)         g94<1>D         -g92<1,1,0>D    g124<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g29.1<2>UD      g94<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g31.1<2>UD      g95<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g29UD           g55UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $4 };
add(16)         g95<1>D         g122<1,1,0>D    52D             { align1 1H compacted };
mov(16)         g56<1>UD        g60<16,8,2>UB                   { align1 1H $4.src };
cmp.l.f0.0(16)  g97<1>UD        g95<1,1,0>UD    g122<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g29<2>UD        g95<4,4,1>UD                    { align1 1Q $4.src };
mov(8)          g31<2>UD        g96<4,4,1>UD                    { align1 2Q $4.src };
add(16)         g99<1>D         -g97<1,1,0>D    g124<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g29.1<2>UD      g99<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g31.1<2>UD      g100<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g29UD           g56UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $4 };
add(16)         g100<1>D        g122<1,1,0>D    34D             { align1 1H F@7 compacted };
mov(16)         g57<1>UD        g79<16,8,2>UB                   { align1 1H $4.src };
cmp.l.f0.0(16)  g102<1>UD       g100<1,1,0>UD   g122<1,1,0>UD   { align1 1H A@2 compacted };
mov(8)          g29<2>UD        g100<4,4,1>UD                   { align1 1Q $4.src };
mov(8)          g31<2>UD        g101<4,4,1>UD                   { align1 2Q $4.src };
add(16)         g107<1>D        -g102<1,1,0>D   g124<1,1,0>D    { align1 1H A@3 compacted };
mov(8)          g29.1<2>UD      g107<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g31.1<2>UD      g108<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g29UD           g57UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $4 };
add(16)         g108<1>D        g122<1,1,0>D    46D             { align1 1H F@7 compacted };
mov(16)         g58<1>UD        g62<16,8,2>UB                   { align1 1H $4.src };
cmp.l.f0.0(16)  g110<1>UD       g108<1,1,0>UD   g122<1,1,0>UD   { align1 1H A@2 compacted };
mov(8)          g29<2>UD        g108<4,4,1>UD                   { align1 1Q $4.src };
mov(8)          g31<2>UD        g109<4,4,1>UD                   { align1 2Q $4.src };
add(16)         g112<1>D        -g110<1,1,0>D   g124<1,1,0>D    { align1 1H A@1 compacted };
mov(8)          g29.1<2>UD      g112<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g31.1<2>UD      g113<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g29UD           g58UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $4 };
add(16)         g113<1>D        g122<1,1,0>D    58D             { align1 1H F@5 compacted };
mov(16)         g59<1>UD        g61<16,8,2>UB                   { align1 1H $4.src };
cmp.l.f0.0(16)  g115<1>UD       g113<1,1,0>UD   g122<1,1,0>UD   { align1 1H A@2 compacted };
mov(8)          g29<2>UD        g113<4,4,1>UD                   { align1 1Q $4.src };
mov(8)          g31<2>UD        g114<4,4,1>UD                   { align1 2Q $4.src };
add(16)         g117<1>D        -g115<1,1,0>D   g124<1,1,0>D    { align1 1H A@3 compacted };
mov(8)          g29.1<2>UD      g117<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g31.1<2>UD      g118<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g29UD           g59UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $1 };
cmp.nz.f0.0(16) null<1>D        g25<8,8,1>D     0D              { align1 1H };
add(16)         g120<1>D        g122<1,1,0>D    22D             { align1 1H F@1 compacted };
(-f0.0) sel(16) g118<1>UD       g17<8,8,1>UD    0x00000002UD    { align1 1H F@1 };
mov(8)          g111<2>UD       g120<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g113<2>UD       g121<4,4,1>UD                   { align1 2Q I@3 };
mov(16)         g94<4>UB        g118<8,8,1>UD                   { align1 1H I@3 };
cmp.l.f0.0(16)  g126<1>UD       g120<1,1,0>UD   g122<1,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g60<1>UD        g94<32,8,4>UB                   { align1 1H I@2 };
add(16)         g17<1>D         -g126<1,1,0>D   g124<1,1,0>D    { align1 1H I@2 compacted };
mov(8)          g111.1<2>UD     g17<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g113.1<2>UD     g18<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g111UD          g60UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $6 };

LABEL7:
endif(16)       JIP:  LABEL10                                   { align1 1H };

LABEL10:
else(16)        JIP:  LABEL5          UIP:  LABEL5              { align1 1H };

LABEL6:
mov(16)         g25<1>UD        g39.3<32,8,4>UB                 { align1 1H @5 $1.dst };
cmp.l.f0.0(16)  null<1>D        g105<8,8,1>D    g69<8,8,1>D     { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
(+f0.0) sel(16) g29<1>UD        g25<1,1,0>UD    0x00000000UD    { align1 1H A@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g31<1>UD        g29<32,8,4>UB                   { align1 1H A@1 };
cmp.z.f0.0(16)  g125<1>D        g29<1,1,0>D     0D              { align1 1H A@7 compacted };
cmp.l.f0.0(16)  null<1>UD       g67<8,8,1>UD    g69<8,8,1>UD    { align1 1H };
mov(16)         a0<1>UW         0x03e0UW                        { align1 WE_all 1H I@3 };
shl(16)         a0<1>UW         g19<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x03e0UW        { align1 1H A@1 };
mov(16)         g51<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
or(16)          g53<1>UD        g29<1,1,0>UD    g51<1,1,0>UD    { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g55<1>UD        g53<32,8,4>UB                   { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         a0<1>UW         0x06e0UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g83<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x06e0UW        { align1 1H A@1 };
mov(16)         g57<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
or(16)          g59<1>UD        g55<1,1,0>UD    g57<1,1,0>UD    { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g61<1>UD        g59<32,8,4>UB                   { align1 1H A@1 };
mov(16)         a0<1>UW         0x07a0UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g27<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x07a0UW        { align1 1H A@1 };
mov(16)         g79<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
or(16)          g81<1>UD        g59<1,1,0>UD    g79<1,1,0>UD    { align1 1H A@1 compacted };
mov(16)         g107<4>UB       g81<0,1,0>UD                    { align1 1H A@1 };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
mov(16)         g87<1>UD        g81<0,1,0>UB                    { align1 1H };
mov(16)         g95<2>W         -g125<8,8,1>D                   { align1 1H };
cmp.z.f0.0(16)  g89<1>D         g87<1,1,0>D     0D              { align1 1H A@2 compacted };
and(16)         g85<1>UW        g95<16,8,2>UW   0x0001UW        { align1 1H A@2 };
mov(16)         g86<1>W         g85<32,16,2>B                   { align1 1H A@1 };
cmp.nz.f0.0(16) null<1>W        g86<16,16,1>W   0W              { align1 1H I@1 };
(+f0.0) sel(16) g91<1>UD        g89<8,8,1>UD    0xffffffffUD    { align1 1H I@4 };
cmp.nz.f0.0(16) null<1>D        g91<8,8,1>D     0D              { align1 1H I@1 };
(+f0.0) sel(16) g51<1>UD        g41<8,8,1>UD    0xff800000UD    { align1 1H $1.dst };
(+f0.0) sel(16) g53<1>UD        g43<8,8,1>UD    0xff800000UD    { align1 1H $1.dst };
(+f0.0) sel(16) g55<1>UD        g45<8,8,1>UD    0xff800000UD    { align1 1H $1.dst };
(+f0.0) sel(16) g57<1>UD        g33<8,8,1>UD    0x7f800000UD    { align1 1H $1.dst };
(+f0.0) sel(16) g59<1>UD        g35<8,8,1>UD    0x7f800000UD    { align1 1H $1.dst };
(+f0.0) sel(16) g61<1>UD        g37<8,8,1>UD    0x7f800000UD    { align1 1H $1.dst };
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
mov(16)         g61<1>UD        0x7f800000UD                    { align1 1H I@2 };
mov(16)         g59<1>UD        0x7f800000UD                    { align1 1H I@4 };
mov(16)         g57<1>UD        0x7f800000UD                    { align1 1H I@6 };
mov(16)         g55<1>UD        0xff800000UD                    { align1 1H I@7 };
mov(16)         g53<1>UD        0xff800000UD                    { align1 1H I@7 };
mov(16)         g51<1>UD        0xff800000UD                    { align1 1H };

LABEL11:
endif(16)       JIP:  LABEL5                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         a0<1>UW         0x0720UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g19<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0720UW        { align1 1H A@1 };
mov(16)         g110<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0760UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g19<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0760UW        { align1 1H A@1 };
mov(16)         g119<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x07a0UW                        { align1 WE_all 1H A@3 };
shl(16)         a0<1>UW         g19<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x07a0UW        { align1 1H A@1 };
mov(16)         g100<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0660UW                        { align1 WE_all 1H I@5 };
shl(16)         a0<1>UW         g19<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0660UW        { align1 1H A@1 };
mov(16)         g98<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x06a0UW                        { align1 WE_all 1H I@7 };
shl(16)         a0<1>UW         g19<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x06a0UW        { align1 1H A@1 };
mov(16)         g96<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x06e0UW                        { align1 WE_all 1H I@7 };
shl(16)         a0<1>UW         g19<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x06e0UW        { align1 1H A@1 };
mov(16)         g92<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         g94<2>W         -g125<8,8,1>D                   { align1 1H };
sel.l(16)       g85<1>F         g57<1,1,0>F     g110<1,1,0>F    { align1 1H A@6 compacted };
sel.l(16)       g87<1>F         g59<1,1,0>F     g119<1,1,0>F    { align1 1H I@6 compacted };
sel.l(16)       g31<1>F         g61<1,1,0>F     g100<1,1,0>F    { align1 1H A@5 compacted };
sel.ge(16)      g79<1>F         g51<1,1,0>F     g98<1,1,0>F     { align1 1H I@4 compacted };
sel.ge(16)      g81<1>F         g53<1,1,0>F     g96<1,1,0>F     { align1 1H A@3 compacted };
sel.ge(16)      g19<1>F         g55<1,1,0>F     g92<1,1,0>F     { align1 1H I@2 compacted };
and(16)         g97<1>UW        g94<16,8,2>UW   0x0001UW        { align1 1H A@1 };
mov(16)         a0<1>UW         0x03e0UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g83<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x03e0UW        { align1 1H A@1 };
mov(16)         g91<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0ae0UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g83<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ae0UW        { align1 1H A@1 };
mov(16)         g93<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0aa0UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g83<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0aa0UW        { align1 1H A@1 };
mov(16)         g95<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x09e0UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g83<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x09e0UW        { align1 1H A@1 };
mov(16)         g89<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0a20UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g83<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a20UW        { align1 1H A@1 };
mov(16)         g17<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0260UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g83<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0260UW        { align1 1H A@1 };
mov(16)         g25<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         g98<1>W         g97<32,16,2>B                   { align1 1H A@3 };
sel.l(16)       g83<1>F         g85<1,1,0>F     g95<1,1,0>F     { align1 1H I@2 compacted };
sel.l(16)       g85<1>F         g87<1,1,0>F     g93<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g87<1>F         g31<1,1,0>F     g91<1,1,0>F     { align1 1H A@1 compacted };
sel.ge(16)      g31<1>F         g79<1,1,0>F     g89<1,1,0>F     { align1 1H A@1 compacted };
cmp.nz.f0.0(16) g99<1>W         g98<16,16,1>W   0W              { align1 1H A@1 };
sel.ge(16)      g79<1>F         g81<1,1,0>F     g17<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0a60UW                        { align1 WE_all 1H F@5 };
shl(16)         a0<1>UW         g27<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a60UW        { align1 1H A@1 };
mov(16)         g95<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0aa0UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g27<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0aa0UW        { align1 1H A@1 };
mov(16)         g93<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g17<1>F         g19<1,1,0>F     g25<1,1,0>F     { align1 1H I@5 compacted };
mov(16)         a0<1>UW         0x0ae0UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g27<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ae0UW        { align1 1H A@1 };
mov(16)         g91<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x03e0UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g27<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x03e0UW        { align1 1H A@1 };
mov(16)         g89<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x09e0UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g27<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x09e0UW        { align1 1H A@1 };
mov(16)         g19<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g81<1>F         g83<1,1,0>F     g95<1,1,0>F     { align1 1H A@2 compacted };
mov(16)         a0<1>UW         0x0220UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g27<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0220UW        { align1 1H A@1 };
mov(16)         g25<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g83<1>F         g85<1,1,0>F     g93<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         g27<1>D         g99<8,8,1>W                     { align1 1H I@7 };
sel.l(16)       g85<1>F         g87<1,1,0>F     g91<1,1,0>F     { align1 1H A@1 compacted };
sel.ge(16)      g87<1>F         g31<1,1,0>F     g89<1,1,0>F     { align1 1H A@1 compacted };
sel.ge(16)      g91<1>F         g17<1,1,0>F     g25<1,1,0>F     { align1 1H I@2 compacted };
sel.ge(16)      g89<1>F         g79<1,1,0>F     g19<1,1,0>F     { align1 1H I@3 compacted };
mov(16)         g29<2>W         -g27<8,8,1>D                    { align1 1H I@1 };
and(16)         g101<1>UW       g29<16,8,2>UW   0x0001UW        { align1 1H I@1 };
mov(16)         g102<1>W        g101<32,16,2>B                  { align1 1H I@1 };
cmp.nz.f0.0(16) g103<1>W        g102<16,16,1>W  0W              { align1 1H I@1 };
cmp.l.f0.0(16)  null<1>UD       g67<8,8,1>UD    0x00000006UD    { align1 1H };
mov(16)         g79<1>D         g103<8,8,1>W                    { align1 1H A@1 };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL13             { align1 1H };
sel.ge(16)      g27<1>F         (abs)g81<0,1,0>F (abs)g87<0,1,0>F { align1 1H A@3 compacted };
sel.ge(16)      g25<1>F         (abs)g83<0,1,0>F (abs)g89<0,1,0>F { align1 1H F@2 compacted };
sel.ge(16)      g31<1>F         (abs)g85<0,1,0>F (abs)g91<0,1,0>F { align1 1H F@4 compacted };
add(16)         g101<1>D        g75<1,1,0>D     16D             { align1 1H I@4 compacted };
mov(16)         g96<2>B         1W                              { align1 1H F@7 };
sel.ge(16)      g29<1>F         g25<1,1,0>F     g31<1,1,0>F     { align1 1H A@1 compacted };
mov(8)          g17<2>UD        g101<4,4,1>UD                   { align1 1Q A@2 };
mov(8)          g19<2>UD        g102<4,4,1>UD                   { align1 2Q A@3 };
mov(16)         g103<1>UD       g96<16,8,2>UB                   { align1 1H I@3 };
sel.ge(16)      g25<1>F         g27<1,1,0>F     g29<1,1,0>F     { align1 1H F@1 compacted };
mul(16)         g93<1>F         g25<1,1,0>F     0x34000000F  /* 1.19209e-07F */ { align1 1H F@1 compacted };
add(16)         g25<1>F         g81<0,1,0>F     -g93<1,1,0>F    { align1 1H F@1 compacted };
add(16)         g27<1>F         g83<0,1,0>F     -g93<1,1,0>F    { align1 1H compacted };
add(16)         g29<1>F         g85<0,1,0>F     -g93<1,1,0>F    { align1 1H compacted };
add(16)         g81<1>F         g87<0,1,0>F     g93<1,1,0>F     { align1 1H compacted };
add(16)         g83<1>F         g89<0,1,0>F     g93<1,1,0>F     { align1 1H compacted };
add(16)         g85<1>F         g91<0,1,0>F     g93<1,1,0>F     { align1 1H compacted };
add(16)         g87<1>F         g81<1,1,0>F     -g25<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g81<1>F         g83<1,1,0>F     -g27<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g83<1>F         g85<1,1,0>F     -g29<1,1,0>F    { align1 1H F@3 compacted };
mul(16)         g85<1>F         g87<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
mul(16)         g87<1>F         g81<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
mul(16)         g81<1>F         g83<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
and(16)         g83<1>UD        g85<8,8,1>UD    0x007fffffUD    { align1 1H F@1 };
and(16)         g89<1>UD        g85<8,8,1>UD    0x80000000UD    { align1 1H F@7 };
and(16)         g95<1>UD        g85<8,8,1>UD    0x7f800000UD    { align1 1H };
and(16)         g91<1>UD        g87<8,8,1>UD    0x80000000UD    { align1 1H F@2 };
and(16)         g97<1>UD        g87<8,8,1>UD    0x7f800000UD    { align1 1H };
and(16)         g93<1>UD        g81<8,8,1>UD    0x80000000UD    { align1 1H F@1 };
and(16)         g99<1>UD        g81<8,8,1>UD    0x7f800000UD    { align1 1H };
and(16)         g85<1>UD        g87<8,8,1>UD    0x007fffffUD    { align1 1H };
and(16)         g87<1>UD        g81<8,8,1>UD    0x007fffffUD    { align1 1H };
add(16)         g81<1>D         g83<8,8,1>D     1056964608D     { align1 1H I@7 };
asr(16)         g83<1>D         g95<8,8,1>D     0x00000017UD    { align1 1H I@7 };
add(16)         g95<1>D         g85<8,8,1>D     1056964608D     { align1 1H I@4 };
asr(16)         g85<1>D         g97<8,8,1>D     0x00000017UD    { align1 1H I@7 };
add(16)         g97<1>D         g87<8,8,1>D     1056964608D     { align1 1H I@5 };
cmp.z.f0.0(16)  null<1>F        g81<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@5 compacted };
asr(16)         g87<1>D         g99<8,8,1>D     0x00000017UD    { align1 1H I@7 };
add(16)         g99<1>D         g83<1,1,0>D     -126D           { align1 1H I@5 compacted };
add(16)         g83<1>D         g85<1,1,0>D     -126D           { align1 1H I@4 compacted };
add(16)         g85<1>D         g87<1,1,0>D     -126D           { align1 1H I@3 compacted };
(-f0.0) sel(16) g87<1>UD        g81<8,8,1>UD    0x3f000000UD    { align1 1H };
and(16)         g81<1>UD        g87<8,8,1>UD    0x7fffffffUD    { align1 1H A@1 };
cmp.z.f0.0(16)  null<1>F        g95<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@7 compacted };
or(16)          g87<1>UD        g81<1,1,0>UD    g89<1,1,0>UD    { align1 1H I@1 compacted };
(-f0.0) sel(16) g81<1>UD        g95<8,8,1>UD    0x3f000000UD    { align1 1H };
and(16)         g89<1>UD        g81<8,8,1>UD    0x7fffffffUD    { align1 1H I@1 };
cmp.z.f0.0(16)  null<1>F        g97<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@7 compacted };
or(16)          g81<1>UD        g89<1,1,0>UD    g91<1,1,0>UD    { align1 1H I@1 compacted };
(-f0.0) sel(16) g89<1>UD        g97<8,8,1>UD    0x3f000000UD    { align1 1H };
and(16)         g91<1>UD        g89<8,8,1>UD    0x7fffffffUD    { align1 1H I@1 };
cmp.g.f0.0(16)  g89<1>F         g87<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@1 };
or(16)          g87<1>UD        g91<1,1,0>UD    g93<1,1,0>UD    { align1 1H A@1 compacted };
cmp.g.f0.0(16)  g91<1>F         g81<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@1 };
add(16)         g81<1>D         g99<1,1,0>D     -g89<1,1,0>D    { align1 1H F@1 compacted };
cmp.g.f0.0(16)  g89<1>F         g87<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@1 };
add(16)         g87<1>D         g83<1,1,0>D     -g91<1,1,0>D    { align1 1H F@1 compacted };
cmp.l.f0.0(16)  g91<1>UD        g101<1,1,0>UD   g75<1,1,0>UD    { align1 1H compacted };
add(16)         g83<1>D         g85<1,1,0>D     -g89<1,1,0>D    { align1 1H F@1 compacted };
add(16)         g109<1>D        -g91<1,1,0>D    g77<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g17.1<2>UD      g109<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g19.1<2>UD      g110<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g17UD           g103UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $7 };
mov(16)         g31<1>D         g15<8,8,1>D                     { align1 1H $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g21UD           g25UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $1 };
add(16)         g112<1>D        g75<1,1,0>D     18D             { align1 1H $6.src compacted };
mov(16)         g97<4>UB        g81<8,8,1>UD                    { align1 1H A@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g114<1>UD       g112<1,1,0>UD   g75<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g9<2>UD         g112<4,4,1>UD                   { align1 1Q $1.src };
mov(8)          g11<2>UD        g113<4,4,1>UD                   { align1 2Q $1.src };
mov(16)         g99<4>UB        g87<8,8,1>UD                    { align1 1H };
mov(16)         g101<4>UB       g83<8,8,1>UD                    { align1 1H };
mov(16)         g85<4>UB        g97<32,8,4>UB                   { align1 1H I@6 };
add(16)         g116<1>D        -g114<1,1,0>D   g77<1,1,0>D     { align1 1H I@6 compacted };
mov(16)         g85.1<4>UB      g99<32,8,4>UB                   { align1 1H I@2 };
mov(8)          g9.1<2>UD       g116<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g11.1<2>UD      g117<4,4,1>UD                   { align1 2Q I@3 };
mov(16)         g85.2<4>UB      g101<32,8,4>UB                  { align1 1H I@3 };
mov(16)         g85.3<4>UB      g107<32,8,4>UB                  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g9UD            g85UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $8 };
cmp.l.f0.0(16)  null<1>UD       g67<8,8,1>UD    g69<8,8,1>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL15         UIP:  LABEL14             { align1 1H };
sel.ge(16)      g9<1>F          (abs)g57<1,1,0>F (abs)g51<1,1,0>F { align1 1H $8.src compacted };
sel.ge(16)      g11<1>F         (abs)g59<1,1,0>F (abs)g53<1,1,0>F { align1 1H $8.src compacted };
sel.ge(16)      g13<1>F         (abs)g61<1,1,0>F (abs)g55<1,1,0>F { align1 1H $1.src compacted };
shl(16)         g17<1>D         -g81<8,8,1>D    0x00000017UD    { align1 1H $7.src };
shl(16)         g19<1>D         -g87<8,8,1>D    0x00000017UD    { align1 1H $7.src };
shl(16)         g21<1>D         -g83<8,8,1>D    0x00000017UD    { align1 1H $1.src };
sel.ge(16)      g15<1>F         g11<1,1,0>F     g13<1,1,0>F     { align1 1H F@1 compacted };
add(16)         g126<1>D        g17<8,8,1>D     1132462080D     { align1 1H I@3 };
mov(16)         g91<2>W         -g79<8,8,1>D                    { align1 1H };
add(16)         g11<1>D         g19<8,8,1>D     1132462080D     { align1 1H A@1 };
add(16)         g13<1>D         g21<8,8,1>D     1132462080D     { align1 1H A@1 };
sel.ge(16)      g119<1>F        g9<1,1,0>F      g15<1,1,0>F     { align1 1H F@1 compacted };
and(16)         g79<1>UW        g91<16,8,2>UW   0x0001UW        { align1 1H I@3 };
mul(16)         g121<1>F        g119<1,1,0>F    0x34000000F  /* 1.19209e-07F */ { align1 1H F@1 compacted };
mov.nz.f0.0(16) null<1>W        g79<32,16,2>B                   { align1 1H I@1 };
add(16)         g123<1>F        g57<1,1,0>F     -g121<1,1,0>F   { align1 1H F@1 compacted };
add(16)         g9<1>F          g59<1,1,0>F     -g121<1,1,0>F   { align1 1H compacted };
add(16)         g15<1>F         g61<1,1,0>F     -g121<1,1,0>F   { align1 1H compacted };
add(16)         g17<1>F         g51<1,1,0>F     g121<1,1,0>F    { align1 1H I@6 compacted };
add(16)         g19<1>F         g53<1,1,0>F     g121<1,1,0>F    { align1 1H I@4 compacted };
add(16)         g21<1>F         g55<1,1,0>F     g121<1,1,0>F    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g51<1>F         g123<1,1,0>F    -g25<1,1,0>F    { align1 1H F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g53<1>F         g9<1,1,0>F      -g27<1,1,0>F    { align1 1H F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g55<1>F         g15<1,1,0>F     -g29<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g114<1>F        g17<1,1,0>F     -g25<1,1,0>F    { align1 1H F@6 compacted };
add(16)         g116<1>F        g19<1,1,0>F     -g27<1,1,0>F    { align1 1H F@6 compacted };
add(16)         g118<1>F        g21<1,1,0>F     -g29<1,1,0>F    { align1 1H F@6 compacted };
mul(16)         g57<1>F         g51<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g59<1>F         g53<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g61<1>F         g55<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g120<1>F        g114<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g122<1>F        g116<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g124<1>F        g118<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g79<1>F         g57<1,1,0>F     g126<1,1,0>F    { align1 1H A@1 compacted };
mul(16)         g91<1>F         g59<1,1,0>F     g11<1,1,0>F     { align1 1H A@2 compacted };
mul(16)         g93<1>F         g61<1,1,0>F     g13<1,1,0>F     { align1 1H A@3 compacted };
mul(16)         g9<1>F          g120<1,1,0>F    g126<1,1,0>F    { align1 1H F@6 compacted };
mul(16)         g15<1>F         g122<1,1,0>F    g11<1,1,0>F     { align1 1H F@6 compacted };
mul(16)         g17<1>F         g124<1,1,0>F    g13<1,1,0>F     { align1 1H F@6 compacted };
rndd(16)        g95<1>F         g79<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g97<1>F         g91<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g99<1>F         g93<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g19<1>F         -g9<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g21<1>F         -g15<1,1,0>F                    { align1 1H F@6 compacted };
rndd(16)        g25<1>F         -g17<1,1,0>F                    { align1 1H F@6 compacted };
sel.ge(16)      g101<1>F        g95<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.ge(16)      g103<1>F        g97<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g107<1>F        g99<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g27<1>F         -g19<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g29<1>F         -g21<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.ge(16)      g31<1>F         -g25<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.l(16)       g109<1>F        g101<8,8,1>F    0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g111<1>F        g103<8,8,1>F    0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g113<1>F        g107<8,8,1>F    0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g51<1>F         g27<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g53<1>F         g29<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g55<1>F         g31<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g23<4>UB        g109<8,8,1>F                    { align1 1H F@6 };
mov(16)         g81<4>UB        g111<8,8,1>F                    { align1 1H F@5 };
mov(16)         g83<4>UB        g113<8,8,1>F                    { align1 1H F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g85<4>UB        g51<8,8,1>F                     { align1 1H F@3 };
mov(16)         g87<4>UB        g53<8,8,1>F                     { align1 1H F@2 };
mov(16)         g89<4>UB        g55<8,8,1>F                     { align1 1H F@1 };
mov(16)         g91<1>UW        g23<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g92<1>UW        g81<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g93<1>UW        g83<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g80<1>UW        g85<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g81<1>UW        g87<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g82<1>UW        g89<32,8,4>UB                   { align1 1H I@6 };
(-f0.0) sel(16) g103<1>UW       g91<16,16,1>UW  0x0000UW        { align1 1H A@5 };
(-f0.0) sel(16) g104<1>UW       g92<16,16,1>UW  0x0000UW        { align1 1H A@5 };
(-f0.0) sel(16) g107<1>UW       g93<16,16,1>UW  0x0000UW        { align1 1H A@4 };
(-f0.0) sel(16) g100<1>UW       g80<16,16,1>UW  0x0000UW        { align1 1H A@6 };
(-f0.0) sel(16) g101<1>UW       g81<16,16,1>UW  0x0000UW        { align1 1H A@6 };
(-f0.0) sel(16) g102<1>UW       g82<16,16,1>UW  0x0000UW        { align1 1H A@6 };
else(16)        JIP:  LABEL14         UIP:  LABEL14             { align1 1H };

LABEL15:
mov(16)         g107<1>UW       0x0080UW                        { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g104<1>UW       0x0080UW                        { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g103<1>UW       0x0080UW                        { align1 1H I@7 };
mov(16)         g102<1>UW       0x0000UW                        { align1 1H I@5 };
mov(16)         g101<1>UW       0x0000UW                        { align1 1H I@7 };
mov(16)         g100<1>UW       0x0000UW                        { align1 1H I@7 };

LABEL14:
endif(16)       JIP:  LABEL13                                   { align1 1H };
add(16)         g108<1>D        g75<1,1,0>D     g67<1,1,0>D     { align1 1H A@4 compacted };
mov(16)         g126<2>UB       g107<16,16,1>UW                 { align1 1H I@7 };
mov(16)         g127<2>UB       g104<16,16,1>UW                 { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g9<2>UB         g103<16,16,1>UW                 { align1 1H I@7 };
mov(16)         g80<2>UB        g102<16,16,1>UW                 { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g17<2>UB        g101<16,16,1>UW                 { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g18<2>UB        g100<16,16,1>UW                 { align1 1H I@7 };
cmp.l.f0.0(16)  g110<1>UD       g108<1,1,0>UD   g75<1,1,0>UD    { align1 1H I@7 compacted };
add(16)         g114<1>D        g108<1,1,0>D    28D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g86<1>UD        g9<16,8,2>UB                    { align1 1H I@6 };
add(16)         g112<1>D        -g110<1,1,0>D   g77<1,1,0>D     { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g116<1>UD       g114<1,1,0>UD   g108<1,1,0>UD   { align1 1H I@3 compacted };
mov(8)          g55<2>UD        g114<4,4,1>UD                   { align1 1Q };
mov(8)          g57<2>UD        g115<4,4,1>UD                   { align1 2Q };
add(16)         g118<1>D        -g116<1,1,0>D   g112<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g55.1<2>UD      g118<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g57.1<2>UD      g119<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g55UD           g86UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $4 };
add(16)         g119<1>D        g108<1,1,0>D    40D             { align1 1H compacted };
mov(16)         g91<1>UD        g127<16,8,2>UB                  { align1 1H };
cmp.l.f0.0(16)  g121<1>UD       g119<1,1,0>UD   g108<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g87<2>UD        g119<4,4,1>UD                   { align1 1Q $4.src };
mov(8)          g89<2>UD        g120<4,4,1>UD                   { align1 2Q };
add(16)         g123<1>D        -g121<1,1,0>D   g112<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g87.1<2>UD      g123<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g89.1<2>UD      g124<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g87UD           g91UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $9 };
add(16)         g124<1>D        g108<1,1,0>D    52D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g96<1>UD        g126<16,8,2>UB                  { align1 1H F@5 };
cmp.l.f0.0(16)  g126<1>UD       g124<1,1,0>UD   g108<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g92<2>UD        g124<4,4,1>UD                   { align1 1Q $9.src };
mov(8)          g94<2>UD        g125<4,4,1>UD                   { align1 2Q F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g9<1>D          -g126<1,1,0>D   g112<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g92.1<2>UD      g9<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g94.1<2>UD      g10<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g92UD           g96UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $10 };
add(16)         g10<1>D         g108<1,1,0>D    34D             { align1 1H $8.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(16)         g101<1>UD       g18<16,8,2>UB                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g12<1>UD        g10<1,1,0>UD    g108<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g97<2>UD        g10<4,4,1>UD                    { align1 1Q $10.src };
mov(8)          g99<2>UD        g11<4,4,1>UD                    { align1 2Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g14<1>D         -g12<1,1,0>D    g112<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g97.1<2>UD      g14<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g99.1<2>UD      g15<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g97UD           g101UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $11 };
add(16)         g15<1>D         g108<1,1,0>D    46D             { align1 1H compacted };
mov(16)         g118<1>UD       g17<16,8,2>UB                   { align1 1H };
cmp.l.f0.0(16)  g17<1>UD        g15<1,1,0>UD    g108<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g114<2>UD       g15<4,4,1>UD                    { align1 1Q };
mov(8)          g116<2>UD       g16<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g19<1>D         -g17<1,1,0>D    g112<1,1,0>D    { align1 1H A@3 compacted };
mov(8)          g114.1<2>UD     g19<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g116.1<2>UD     g20<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g114UD          g118UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g20<1>D         g108<1,1,0>D    58D             { align1 1H F@7 compacted };
mov(16)         g123<1>UD       g80<16,8,2>UB                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g22<1>UD        g20<1,1,0>UD    g108<1,1,0>UD   { align1 1H A@2 compacted };
mov(8)          g119<2>UD       g20<4,4,1>UD                    { align1 1Q $6.src };
mov(8)          g121<2>UD       g21<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g24<1>D         -g22<1,1,0>D    g112<1,1,0>D    { align1 1H A@3 compacted };
mov(8)          g119.1<2>UD     g24<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g121.1<2>UD     g25<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g119UD          g123UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g26<1>D         g108<1,1,0>D    22D             { align1 1H F@3 compacted };
mov(16)         g19<2>B         2W                              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g28<1>UD        g26<1,1,0>UD    g108<1,1,0>UD   { align1 1H A@2 compacted };
mov(8)          g124<2>UD       g26<4,4,1>UD                    { align1 1Q $12.src };
mov(8)          g126<2>UD       g27<4,4,1>UD                    { align1 2Q };
mov(16)         g9<1>UD         g19<16,8,2>UB                   { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g30<1>D         -g28<1,1,0>D    g112<1,1,0>D    { align1 1H A@1 compacted };
mov(8)          g124.1<2>UD     g30<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g126.1<2>UD     g31<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g124UD          g9UD            0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $1 };

LABEL13:
endif(16)       JIP:  LABEL5                                    { align1 1H };

LABEL5:
endif(16)       JIP:  LABEL16                                   { align1 1H };

LABEL16:
cmp.l.f0.0(16)  null<1>D        g105<8,8,1>D    g69<8,8,1>D     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL17             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
asr(16)         g31<1>D         g69<8,8,1>D     0x0000001fUD    { align1 1H A@1 };
shl(16)         g51<1>D         g105<8,8,1>D    0x00000005UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
shr(16)         g53<1>UD        g105<1,1,0>UD   0x0000001bUD    { align1 1H F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g55<1>D         g5<1,1,0>D      g51<1,1,0>D     { align1 1H A@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g57<1>UD        g55<1,1,0>UD    g5<1,1,0>UD     { align1 1H A@1 compacted };
mov(8)          g10<2>UD        g55<4,4,1>UD                    { align1 1Q $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g12<2>UD        g56<4,4,1>UD                    { align1 2Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add3(16)        g59<1>D         g7<8,8,1>D      g53<8,8,1>D     -g57<1,1,1>D { align1 1H A@3 };
mov(8)          g10.1<2>UD      g59<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g12.1<2>UD      g60<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g10UD           g33UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g61<1>D         g55<1,1,0>D     16D             { align1 1H F@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g67<1>UD        g61<1,1,0>UD    g55<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g11<2>UD        g61<4,4,1>UD                    { align1 1Q $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g13<2>UD        g62<4,4,1>UD                    { align1 2Q F@7 };
add(16)         g75<1>D         -g67<1,1,0>D    g59<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g11.1<2>UD      g75<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g13.1<2>UD      g76<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g11UD           g41UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $1 };
shl(16)         g76<1>D         g105<8,8,1>D    0x00000002UD    { align1 1H };
shr(16)         g78<1>UD        g105<1,1,0>UD   0x0000001eUD    { align1 1H F@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
add(16)         g80<1>D         g1<1,1,0>D      g76<1,1,0>D     { align1 1H A@2 compacted };
cmp.l.f0.0(16)  g82<1>UD        g80<1,1,0>UD    g1<1,1,0>UD     { align1 1H A@1 compacted };
mov(8)          g12<2>UD        g80<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g14<2>UD        g81<4,4,1>UD                    { align1 2Q $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add3(16)        g84<1>D         g3<8,8,1>D      g78<8,8,1>D     -g82<1,1,1>D { align1 1H A@3 };
mov(8)          g12.1<2>UD      g84<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g14.1<2>UD      g85<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g12UD           g105UD          0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $1 };
shr(16)         g17<1>UD        g49<0,1,0>UD    0x00000006UD    { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g85<1>D         g69<1,1,0>D     g105<1,1,0>D    { align1 1H F@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
cmp.l.f0.0(16)  g87<1>UD        g85<1,1,0>UD    g69<1,1,0>UD    { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
shl(16)         g91<1>D         g85<8,8,1>D     0x00000002UD    { align1 1H F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
shr(16)         g94<1>UD        g85<1,1,0>UD    0x0000001eUD    { align1 1H F@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g89<1>D         -g87<1,1,0>D    g31<1,1,0>D     { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(16)         g97<1>D         g1<1,1,0>D      g91<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
shl(16)         g92<1>D         g89<8,8,1>D     0x00000002UD    { align1 1H A@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
cmp.l.f0.0(16)  g99<1>UD        g97<1,1,0>UD    g1<1,1,0>UD     { align1 1H A@2 compacted };
mov(8)          g13<2>UD        g97<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g15<2>UD        g98<4,4,1>UD                    { align1 2Q $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
or(16)          g96<1>UD        g92<1,1,0>UD    g94<1,1,0>UD    { align1 1H A@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add3(16)        g101<1>D        g3<8,8,1>D      g96<8,8,1>D     -g99<1,1,1>D { align1 1H A@1 };
mov(8)          g13.1<2>UD      g101<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g15.1<2>UD      g102<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g13UD           g17UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g20<2>W         -g71<8,8,1>D                    { align1 1H F@1 };
and(16)         g103<1>UW       g20<16,8,2>UW   0x0001UW        { align1 1H A@1 };
mov(16)         g104<1>W        g103<32,16,2>B                  { align1 1H A@1 };
cmp.nz.f0.0(16) g107<1>W        g104<16,16,1>W  0W              { align1 1H A@1 };
mov(16)         g105<1>D        g107<8,8,1>W                    { align1 1H I@1 };
and.nz.f0.0(16) null<1>UD       g105<8,8,1>UD   g73<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL18         UIP:  LABEL18             { align1 1H };
shl(16)         g108<1>D        g69<8,8,1>D     0x00000003UD    { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g110<1>D        g63<1,1,0>D     40D             { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
or(16)          g26<1>UD        g108<8,8,1>UD   0xffffffc0UD    { align1 1H A@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g112<1>UD       g110<1,1,0>UD   g63<1,1,0>UD    { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g18<2>UD        g110<4,4,1>UD                   { align1 1Q F@1 };
mov(8)          g20<2>UD        g111<4,4,1>UD                   { align1 2Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g114<1>D        -g112<1,1,0>D   g65<1,1,0>D     { align1 1H A@3 compacted };
mov(8)          g18.1<2>UD      g114<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g20.1<2>UD      g115<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g115UD          g18UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shl(16)         g117<1>D        g115<8,8,1>D    0x00000006UD    { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g119<1>D        g63<1,1,0>D     g117<1,1,0>D    { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
cmp.l.f0.0(16)  g121<1>UD       g119<1,1,0>UD   g63<1,1,0>UD    { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g22<2>UD        g119<4,4,1>UD                   { align1 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g24<2>UD        g120<4,4,1>UD                   { align1 2Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g123<1>D        -g121<1,1,0>D   g65<1,1,0>D     { align1 1H A@3 compacted };
mov(8)          g22.1<2>UD      g123<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g24.1<2>UD      g124<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g22UD           g26UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $1 };

LABEL18:
endif(16)       JIP:  LABEL17                                   { align1 1H };

LABEL17:
endif(16)       JIP:  LABEL19                                   { align1 1H };

LABEL19:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q A@7 };
mov(16)         acc0<1>F        0x0F             /* 0F */       { align1 WE_all 1H I@1 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_DFS_DFS_trivial_batchable_code[] = {
    0x80000065, 0x23058220, 0x02000004, 0xffffffc0,
    0x80030061, 0x51054410, 0x00000000, 0x76543210,
    0x00040061, 0x11054660, 0x00000000, 0x00000001,
    0x00040061, 0x7c050220, 0x00000024, 0x00000000,
    0xe2241c40, 0x00012303, 0x64511c40, 0x00805195,
    0x00031b41, 0x20018220, 0x01467c05, 0x00580058,
    0x60701c41, 0x05807c02, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa00240c, 0x00340000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x43050160,
    0x00465105, 0x00000000, 0xfe6e0049, 0x05807c03,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xe0231a65, 0x00f04303, 0x00130041, 0x20018220,
    0x01467d05, 0x00580058, 0x00041a61, 0x3c060210,
    0x00462305, 0x00000000, 0x00040061, 0x69050120,
    0x00562306, 0x00000000, 0x00130049, 0x6f058222,
    0x02467d05, 0x00000058, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x21250061, 0x001102cc,
    0x2a6c0061, 0x001102cc, 0x21251261, 0x00110204,
    0x2a6c1261, 0x00110204, 0x00031261, 0x72050220,
    0x00442526, 0x00000000, 0xa1741f40, 0x700e2502,
    0x00131161, 0x73050220, 0x00446c26, 0x00000000,
    0xaa750040, 0x710e6c02, 0x00031b70, 0x76050220,
    0x52467405, 0x00442506, 0x00030061, 0x1b060220,
    0x00347405, 0x00000000, 0x00131b70, 0x77050220,
    0x52467505, 0x00446c06, 0x00130061, 0x1d060220,
    0x00347505, 0x00000000, 0xa0790040, 0x02007403,
    0xa07e0040, 0x03c07403, 0xa00b0040, 0x03007403,
    0x277b1b70, 0x74007903, 0x00030061, 0x13060220,
    0x00347905, 0x00000000, 0x00130061, 0x15060220,
    0x00347a05, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x27010970, 0x74007e03,
    0x00030061, 0x17060220, 0x00347e05, 0x00000000,
    0x00130061, 0x19060220, 0x00347f05, 0x00000000,
    0x00040052, 0x78040e68, 0x0e2e7205, 0x76056e05,
    0x00031f61, 0x1f060220, 0x00340b05, 0x00000000,
    0x00131f61, 0x21060220, 0x00340c05, 0x00000000,
    0x270d0070, 0x74000b03, 0x00031c61, 0x1b260220,
    0x00347805, 0x00000000, 0x00131d61, 0x1d260220,
    0x00347905, 0x00000000, 0xa07d0040, 0x78027b02,
    0xa0091f40, 0x78020102, 0xa00f1d40, 0x78020d02,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x01440000, 0xfb041b24, 0x003c0000,
    0x00031b61, 0x13260220, 0x00347d05, 0x00000000,
    0x00131c61, 0x15260220, 0x00347e05, 0x00000000,
    0x00031c61, 0x17260220, 0x00340905, 0x00000000,
    0x00131d61, 0x19260220, 0x00340a05, 0x00000000,
    0x00031d61, 0x1f260220, 0x00340f05, 0x00000000,
    0x00131e61, 0x21260220, 0x00341005, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x3f240000, 0xfb041324, 0x000c0000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x33140000, 0xfb041724, 0x00040000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x13240000, 0xfb041f24, 0x000c0000,
    0x00042361, 0x3a060210, 0x00463305, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xe0172165, 0x00101303, 0x00042161, 0x45050120,
    0x00561506, 0x00000000, 0xae471a70, 0x00001703,
    0x00041a70, 0x00010660, 0x56466905, 0x00464505,
    0x01040022, 0x0001c060, 0x000001b0, 0x00000130,
    0x00040069, 0x25058660, 0x02466905, 0x00000005,
    0xe0270068, 0x01b06903, 0xa029a140, 0x25000502,
    0x272b1970, 0x05002903, 0x00030061, 0x09060220,
    0x00342905, 0x00000000, 0x00130061, 0x0b060220,
    0x00342a05, 0x00000000, 0xa02f0040, 0x01002903,
    0x0004c152, 0x2d040e68, 0x0e2e0705, 0x2b052705,
    0x27311a70, 0x29002f03, 0x00030061, 0x35060220,
    0x00342f05, 0x00000000, 0x00130061, 0x37060220,
    0x00343005, 0x00000000, 0x00031c61, 0x09260220,
    0x00342d05, 0x00000000, 0x00131d61, 0x0b260220,
    0x00342e05, 0x00000000, 0xa0491d40, 0x2d023102,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x21440000, 0xfb040924, 0x003c0000,
    0x00031961, 0x35260220, 0x00344905, 0x00000000,
    0x00131a61, 0x37260220, 0x00344a05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x29440000, 0xfb043524, 0x003c0000,
    0x00040024, 0x0001c060, 0x00000090, 0x00000090,
    0x00042161, 0x27054220, 0x00000000, 0x00000000,
    0x00042161, 0x25054220, 0x00000000, 0x7f800000,
    0x00042161, 0x23054220, 0x00000000, 0x7f800000,
    0x00042161, 0x21054220, 0x00000000, 0x7f800000,
    0x00042161, 0x2f054220, 0x00000000, 0x80000000,
    0x00042161, 0x2d054220, 0x00000000, 0xff800000,
    0x00042161, 0x2b054220, 0x00000000, 0xff800000,
    0x00042161, 0x29054220, 0x00000000, 0xff800000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040070, 0x4b058550, 0x15563c06, 0x00000000,
    0x00041961, 0x49050560, 0x20464b05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000098, 0x00000098,
    0xa04c2240, 0x00c03f03, 0x274e1970, 0x3f004c03,
    0x00033161, 0x0a060220, 0x00344c05, 0x00000000,
    0x00133161, 0x0c060220, 0x00344d05, 0x00000000,
    0xa050b240, 0x41024e02, 0x00031961, 0x0a260220,
    0x00345005, 0x00000000, 0x00131a61, 0x0c260220,
    0x00345105, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x51140000,
    0xfb100a24, 0x01000000, 0x00042169, 0x31058660,
    0x02465105, 0x00000006, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0xa04ba240, 0x31103f02,
    0xa0540040, 0x01003f03, 0xa05e0040, 0x00404303,
    0xa0600040, 0xff404303, 0xa0620040, 0x00204303,
    0xa0640040, 0xff204303, 0xa0660040, 0x00104303,
    0xa06b0040, 0xff104303, 0x27521f70, 0x3f004b03,
    0x00030061, 0x15060220, 0x00344b05, 0x00000000,
    0x00130061, 0x17060220, 0x00344c05, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00031f61, 0x36060220, 0x00345405, 0x00000000,
    0x00133161, 0x38060220, 0x00345505, 0x00000000,
    0x27560070, 0x3f005403, 0x00040070, 0x00018660,
    0x56465e05, 0x00000010, 0xa04df240, 0x41025202,
    0xa0581b40, 0x41025602, 0x2f130062, 0x60005e03,
    0x00031b61, 0x15260220, 0x00344d05, 0x00000000,
    0x00131c61, 0x17260220, 0x00344e05, 0x00000000,
    0x00031c61, 0x36260220, 0x00345805, 0x00000000,
    0x00131d61, 0x38260220, 0x00345905, 0x00000000,
    0x00040070, 0x00018660, 0x56466205, 0x00000010,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x59140000, 0xfb043624, 0x00040000,
    0x2f530062, 0x64006203, 0x00040070, 0x00018660,
    0x56466605, 0x00000010, 0x2f1b3162, 0x6b006603,
    0x00040070, 0x6c058550, 0x15563a06, 0x00010001,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00041961, 0x19050560, 0x20466c05, 0x00000000,
    0x00042469, 0x5b058660, 0x02465905, 0x00000006,
    0x00041952, 0x5d040e68, 0x0e2e3f05, 0x4b055b05,
    0x0004196c, 0x0f058660, 0x02465d05, 0x00000006,
    0x11040022, 0x0001c060, 0x00002958, 0x00001268,
    0x00040070, 0x00010220, 0x52464305, 0x00464505,
    0x01042162, 0x6d058220, 0x02462905, 0xff800000,
    0x01042162, 0x78058220, 0x02462b05, 0xff800000,
    0x01042162, 0x70058220, 0x02462d05, 0xff800000,
    0x01042162, 0x72058220, 0x02462105, 0x7f800000,
    0x01042162, 0x74058220, 0x02462305, 0x7f800000,
    0x01042162, 0x76058220, 0x02462505, 0x7f800000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80041e61, 0x10014110, 0x00000000, 0x0da00da0,
    0x00040069, 0x10018510, 0x01561306, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0da00da0,
    0xe0350961, 0x001b0004, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80041e61, 0x10014110,
    0x00000000, 0x0f000f00, 0x00040069, 0x10018510,
    0x01561306, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0f000f00, 0xe01d0961, 0x001b0004,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80041e61, 0x10014110, 0x00000000, 0x0e000e00,
    0x00040069, 0x10018510, 0x01561306, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0e000e00,
    0xe01f0961, 0x001b0004, 0x80041e61, 0x10014110,
    0x00000000, 0x0e400e40, 0x00040069, 0x10018510,
    0x01561306, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0e400e40, 0xe07a0961, 0x001b0004,
    0x80041e61, 0x10014110, 0x00000000, 0x0e800e80,
    0x00040069, 0x10018510, 0x01561306, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0e800e80,
    0xe07c0961, 0x001b0004, 0x80041e61, 0x10014110,
    0x00000000, 0x0ec00ec0, 0x00040069, 0x10018510,
    0x01561306, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0ec00ec0, 0xe07e0961, 0x001b0004,
    0x00040070, 0x00018220, 0x52464305, 0x00000006,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x25381f62, 0x35006d00, 0x253a1e62, 0x1d007800,
    0x253c1d62, 0x1f007000, 0x27780a62, 0x7a007200,
    0x277a1b62, 0x7c007400, 0x80041561, 0x10014110,
    0x00000000, 0x07000700, 0x00040069, 0x10018510,
    0x01565306, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x07000700, 0xe0510961, 0x001b0004,
    0x277c1b62, 0x7e007600, 0x80041561, 0x10014110,
    0x00000000, 0x07400740, 0x00040069, 0x10018510,
    0x01565306, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x07400740, 0xe0350961, 0x001b0004,
    0x80041461, 0x10014110, 0x00000000, 0x07800780,
    0x00040069, 0x10018510, 0x01565306, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x07800780,
    0xe04f0961, 0x001b0004, 0x80041161, 0x10014110,
    0x00000000, 0x0f000f00, 0x00040069, 0x10018510,
    0x01565306, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0f000f00, 0xe07e0961, 0x001b0004,
    0x80041261, 0x10014110, 0x00000000, 0x0f400f40,
    0x00040069, 0x10018510, 0x01565306, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0f400f40,
    0xe01d0961, 0x001b0004, 0x25710b62, 0x51003800,
    0x80041261, 0x10014110, 0x00000000, 0x0f800f80,
    0x00040069, 0x10018510, 0x01565306, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0f800f80,
    0xe01f0961, 0x001b0004, 0x25730b62, 0x35003a00,
    0x25750b62, 0x4f003c00, 0x27651b62, 0x7e007800,
    0x27671a62, 0x1d007a00, 0x80041561, 0x10014110,
    0x00000000, 0x0e200e20, 0x00040069, 0x10018510,
    0x01561b06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0e200e20, 0xe0550961, 0x001b0004,
    0x276b1a62, 0x1f007c00, 0x80040d61, 0x10014110,
    0x00000000, 0x0e600e60, 0x00040069, 0x10018510,
    0x01561b06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0e600e60, 0xe0390961, 0x001b0004,
    0x80041461, 0x10014110, 0x00000000, 0x0ea00ea0,
    0x00040069, 0x10018510, 0x01561b06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0ea00ea0,
    0xe0510961, 0x001b0004, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80040b61, 0x10014110,
    0x00000000, 0x0ca00ca0, 0x00040069, 0x10018510,
    0x01561b06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0ca00ca0, 0xe0370961, 0x001b0004,
    0x80041261, 0x10014110, 0x00000000, 0x0ce00ce0,
    0x00040069, 0x10018510, 0x01561b06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0ce00ce0,
    0xe06d0961, 0x001b0004, 0x253b0c62, 0x55007100,
    0x80041261, 0x10014110, 0x00000000, 0x0d600d60,
    0x00040069, 0x10018510, 0x01561b06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0d600d60,
    0xe06f0961, 0x001b0004, 0x253d0d62, 0x39007300,
    0x254f1c62, 0x51007500, 0x27351b62, 0x37006500,
    0x27371a62, 0x6d006700, 0x27391962, 0x6f006b00,
    0x01040022, 0x0001c060, 0x00000cd8, 0x00000cd8,
    0x25511362, 0x3baa3500, 0x25551362, 0x3daa3700,
    0x25571362, 0x4faa3900, 0xa05b0040, 0x01004b03,
    0x00040061, 0x5f064540, 0x00000000, 0xffffffff,
    0x25591162, 0x57005500, 0x00040061, 0x5d070200,
    0x00463305, 0x00000000, 0x00031b61, 0x1d060220,
    0x00345b05, 0x00000000, 0x00131c61, 0x1f060220,
    0x00345c05, 0x00000000, 0x25330962, 0x59005100,
    0x00040961, 0x51050020, 0x00665d07, 0x00000000,
    0xe0571141, 0x34003300, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x20091140, 0x57213500,
    0x200b3140, 0x57213700, 0x200d3140, 0x57213900,
    0x20590040, 0x57013b00, 0x205d1940, 0x57013d00,
    0x20600040, 0x57014f00, 0x20621340, 0x09205900,
    0x20640b40, 0x0b205d00, 0x20660b40, 0x0d206000,
    0x00040b41, 0x6b058aa0, 0x0a466205, 0x3f800001,
    0x00041341, 0x57058aa0, 0x0a466405, 0x3f800001,
    0x00041341, 0x33058aa0, 0x0a466605, 0x3f800001,
    0x00041365, 0x37058220, 0x02466b05, 0x007fffff,
    0x00041765, 0x4f058220, 0x02466b05, 0x80000000,
    0x00041765, 0x3b058220, 0x02466b05, 0x7f800000,
    0x00041265, 0x39058220, 0x02465705, 0x007fffff,
    0x00040065, 0x55058220, 0x02465705, 0x80000000,
    0x00041765, 0x3d058220, 0x02465705, 0x7f800000,
    0x00041165, 0x59058220, 0x02463305, 0x007fffff,
    0x00040065, 0x35058220, 0x02463305, 0x7f800000,
    0x00040065, 0x57058220, 0x02463305, 0x80000000,
    0x00041f40, 0x33058660, 0x06463705, 0x3f000000,
    0x00041f6c, 0x37058660, 0x02463b05, 0x00000017,
    0x00041f40, 0x3b058660, 0x06463905, 0x3f000000,
    0x00041f6c, 0x39058660, 0x02463d05, 0x00000017,
    0x00041f40, 0x3d058660, 0x06465905, 0x3f000000,
    0xac001d70, 0x3f803301, 0x00041f6c, 0x59058660,
    0x02463505, 0x00000017, 0xa0351d40, 0xf8203703,
    0xa0371c40, 0xf8203903, 0xa0391b40, 0xf8205903,
    0x11040062, 0x59058220, 0x02463305, 0x3f000000,
    0x00040965, 0x33058220, 0x02465905, 0x7fffffff,
    0xac001f70, 0x3f803b01, 0x20591966, 0x4f003303,
    0x11041762, 0x5d058220, 0x02463b05, 0x3f000000,
    0x00040965, 0x60058220, 0x02465d05, 0x7fffffff,
    0xac001f70, 0x3f803d01, 0x20620966, 0x55006003,
    0x11040062, 0x6c058220, 0x02463d05, 0x3f000000,
    0x00041965, 0x6e058220, 0x02466c05, 0x7fffffff,
    0x00041e70, 0x64058aa0, 0x3a465905, 0x3f7f0000,
    0x00041b70, 0x72058aa0, 0x3a466205, 0x3f7f0000,
    0x20701966, 0x57006e03, 0xa0331240, 0x64203502,
    0xa03d0940, 0x72203702, 0x00041b70, 0x74058aa0,
    0x3a467005, 0x3f7f0000, 0x27760070, 0x4b005b03,
    0xa04f1140, 0x74203902, 0xa0781a40, 0x4d027602,
    0x00031961, 0x1d260220, 0x00347805, 0x00000000,
    0x00131a61, 0x1f260220, 0x00347905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x00000000, 0xf3081d24, 0x00025114,
    0x00044131, 0x00000000, 0xfb0c1524, 0x003c0944,
    0xa07a0040, 0x01204b03, 0x00041f61, 0x37070200,
    0x00463305, 0x00000000, 0x277c1a70, 0x4b007a03,
    0x00033561, 0x1d060220, 0x00347a05, 0x00000000,
    0x00133561, 0x1f060220, 0x00347b05, 0x00000000,
    0x00040061, 0x39070200, 0x00463d05, 0x00000000,
    0x00040d61, 0x3b070200, 0x00464f05, 0x00000000,
    0x00041e61, 0x35070000, 0x00663707, 0x00000000,
    0xa07e1e40, 0x4d027c02, 0x00041a61, 0x350f0000,
    0x00663907, 0x00000000, 0x00031a61, 0x1d260220,
    0x00347e05, 0x00000000, 0x00131b61, 0x1f260220,
    0x00347f05, 0x00000000, 0x00041b61, 0x35170000,
    0x00663b07, 0x00000000, 0x00041961, 0x351f0000,
    0x00565f06, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb081d24, 0x00003514, 0x00040070, 0x00010220,
    0x52464305, 0x00464505, 0x01040022, 0x0001c060,
    0x000003e0, 0x00000370, 0x25353162, 0x29432100,
    0x25371f62, 0x2b432300, 0x25391f62, 0x2d432500,
    0x00040069, 0x3b05a660, 0x02463305, 0x00000017,
    0x00043169, 0x1f05a660, 0x02463d05, 0x00000017,
    0x00040069, 0x3305a660, 0x02464f05, 0x00000017,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x251d1162, 0x39003700, 0x00041b40, 0x3d058660,
    0x06463b05, 0x43800000, 0x00041b40, 0x4f058660,
    0x06461f05, 0x43800000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00041b40, 0x51058660,
    0x06463305, 0x43800000, 0x251f0962, 0x1d003500,
    0xe01d1141, 0x34001f00, 0x201f1140, 0x1d202100,
    0x20331940, 0x1d202300, 0x20350040, 0x1d202500,
    0x20370040, 0x1d002900, 0x20390040, 0x1d002b00,
    0x203b1b40, 0x1d002d00, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x201d1640, 0x09201f00,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x201f1640, 0x0b203300, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x20331640, 0x0d203500,
    0x20351640, 0x09203700, 0x20371640, 0x0b203900,
    0x20391640, 0x0d203b00, 0x00041641, 0x3b058aa0,
    0x0a461d05, 0x3f7ffffe, 0x00041641, 0x1d058aa0,
    0x0a461f05, 0x3f7ffffe, 0x00041641, 0x1f058aa0,
    0x0a463305, 0x3f7ffffe, 0x00041641, 0x33058aa0,
    0x0a463505, 0x3f800001, 0x00041641, 0x35058aa0,
    0x0a463705, 0x3f800001, 0x00041641, 0x37058aa0,
    0x0a463905, 0x3f800001, 0x20390b41, 0x3d003b00,
    0x203b0a41, 0x4f001d00, 0x201d0941, 0x51001f00,
    0x201f1641, 0x3d003300, 0x20761541, 0x51003700,
    0x20331741, 0x4f003500, 0x60611645, 0x00103900,
    0x60631645, 0x00103b00, 0x60651645, 0x00101d00,
    0x60671645, 0x00121f00, 0x606d1645, 0x00127600,
    0x606b1645, 0x00123300, 0xe56f1662, 0x00006100,
    0xe5711662, 0x00006300, 0xe5731662, 0x00006500,
    0xe5751662, 0x00026700, 0xe5791662, 0x00026d00,
    0xe5771662, 0x00026b00, 0x00041662, 0x33058aa0,
    0x5a466f05, 0x437f0000, 0x00041662, 0x35058aa0,
    0x5a467105, 0x437f0000, 0x00041662, 0x37058aa0,
    0x5a467305, 0x437f0000, 0x00041662, 0x39058aa0,
    0x5a467505, 0x437f0000, 0x00041662, 0x3d058aa0,
    0x5a467905, 0x437f0000, 0x00041662, 0x3b058aa0,
    0x5a467705, 0x437f0000, 0x00041661, 0x55070a00,
    0x00463305, 0x00000000, 0x00041561, 0x57070a00,
    0x00463505, 0x00000000, 0x00041461, 0x59070a00,
    0x00463705, 0x00000000, 0x00041361, 0x5b070a00,
    0x00463905, 0x00000000, 0x00041261, 0x5f070a00,
    0x00463d05, 0x00000000, 0x00041161, 0x5d070a00,
    0x00463b05, 0x00000000, 0x00041e61, 0x61050010,
    0x00665507, 0x00000000, 0x00041e61, 0x62050010,
    0x00665707, 0x00000000, 0x00041e61, 0x63050010,
    0x00665907, 0x00000000, 0x00041e61, 0x52050010,
    0x00665b07, 0x00000000, 0x00041e61, 0x56050010,
    0x00665f07, 0x00000000, 0x00041e61, 0x55050010,
    0x00665d07, 0x00000000, 0x00040024, 0x0001c060,
    0x00000080, 0x00000080, 0x00040a61, 0x63054110,
    0x00000000, 0x00800080, 0x00040a61, 0x62054110,
    0x00000000, 0x00800080, 0x00041f61, 0x61054110,
    0x00000000, 0x00800080, 0x00041e61, 0x56054110,
    0x00000000, 0x00000000, 0x00041e61, 0x55054110,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00041f61, 0x52054110,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x000004a0, 0xa07a1240, 0x43004b02,
    0x00041f61, 0x3c060100, 0x00586305, 0x00000000,
    0x00041f61, 0x5c060100, 0x00586205, 0x00000000,
    0x00041f61, 0x5d060100, 0x00586105, 0x00000000,
    0x00041f61, 0x3d060100, 0x00585605, 0x00000000,
    0x00041f61, 0x3e060100, 0x00585505, 0x00000000,
    0x00041f61, 0x4f060100, 0x00585205, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x27501f70, 0x4b007a03, 0xa0550040, 0x01c07a03,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00041e61, 0x36050020, 0x00565d06, 0x00000000,
    0xa07c1b40, 0x4d025002, 0x27571b70, 0x7a005503,
    0x00033161, 0x1d060220, 0x00345505, 0x00000000,
    0x00133161, 0x1f060220, 0x00345605, 0x00000000,
    0xa0590b40, 0x7c025702, 0x00031961, 0x1d260220,
    0x00345905, 0x00000000, 0x00131a61, 0x1f260220,
    0x00345a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xf3081d24, 0x00023614, 0xa05a0040, 0x02807a03,
    0x00043461, 0x37050020, 0x00565c06, 0x00000000,
    0x275c1a70, 0x7a005a03, 0x00033461, 0x1d060220,
    0x00345a05, 0x00000000, 0x00133461, 0x1f060220,
    0x00345b05, 0x00000000, 0xa05e1b40, 0x7c025c02,
    0x00031961, 0x1d260220, 0x00345e05, 0x00000000,
    0x00131a61, 0x1f260220, 0x00345f05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x00000000, 0xf3081d24, 0x00023714,
    0xa05f0040, 0x03407a03, 0x00043461, 0x38050020,
    0x00563c06, 0x00000000, 0x27611a70, 0x7a005f03,
    0x00033461, 0x1d060220, 0x00345f05, 0x00000000,
    0x00133461, 0x1f060220, 0x00346005, 0x00000000,
    0xa0631b40, 0x7c026102, 0x00031961, 0x1d260220,
    0x00346305, 0x00000000, 0x00131a61, 0x1f260220,
    0x00346405, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xf3081d24, 0x00023814, 0xa0641740, 0x02207a03,
    0x00043461, 0x39050020, 0x00564f06, 0x00000000,
    0x27660a70, 0x7a006403, 0x00033461, 0x1d060220,
    0x00346405, 0x00000000, 0x00133461, 0x1f060220,
    0x00346505, 0x00000000, 0xa06b0b40, 0x7c026602,
    0x00031961, 0x1d260220, 0x00346b05, 0x00000000,
    0x00131a61, 0x1f260220, 0x00346c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x00000000, 0xf3081d24, 0x00023914,
    0xa06c1740, 0x02e07a03, 0x00043461, 0x3a050020,
    0x00563e06, 0x00000000, 0x276e0a70, 0x7a006c03,
    0x00033461, 0x1d060220, 0x00346c05, 0x00000000,
    0x00133461, 0x1f060220, 0x00346d05, 0x00000000,
    0xa0700940, 0x7c026e02, 0x00031961, 0x1d260220,
    0x00347005, 0x00000000, 0x00131a61, 0x1f260220,
    0x00347105, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xf3081d24, 0x00023a14, 0xa0711540, 0x03a07a03,
    0x00043461, 0x3b050020, 0x00563d06, 0x00000000,
    0x27730a70, 0x7a007103, 0x00033461, 0x1d060220,
    0x00347105, 0x00000000, 0x00133461, 0x1f060220,
    0x00347205, 0x00000000, 0xa0750b40, 0x7c027302,
    0x00031961, 0x1d260220, 0x00347505, 0x00000000,
    0x00131a61, 0x1f260220, 0x00347605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xf3081d24, 0x00023b14,
    0x00040070, 0x00018660, 0x26461905, 0x00000000,
    0xa0781140, 0x01607a03, 0x11041162, 0x76058220,
    0x02461105, 0x00000002, 0x00031a61, 0x6f060220,
    0x00347805, 0x00000000, 0x00131b61, 0x71060220,
    0x00347905, 0x00000000, 0x00041b61, 0x5e070200,
    0x00467605, 0x00000000, 0x277e0070, 0x7a007803,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00041a61, 0x3c050020, 0x00665e07, 0x00000000,
    0xa0111a40, 0x7c027e02, 0x00031961, 0x6f260220,
    0x00341105, 0x00000000, 0x00131a61, 0x71260220,
    0x00341205, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xf3086f24, 0x00023c14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040024, 0x0001c060,
    0x00001700, 0x00001700, 0x0004d161, 0x19050020,
    0x0066271f, 0x00000000, 0x00040070, 0x00010660,
    0x56466905, 0x00464505, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xef1d0a62, 0x00001903,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00040961, 0x1f050020, 0x00661d07, 0x00000000,
    0xac7d0f70, 0x00001d03, 0x00040070, 0x00010220,
    0x52464305, 0x00464505, 0x80041b61, 0x10014110,
    0x00000000, 0x03e003e0, 0x00040069, 0x10018510,
    0x01561306, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x03e003e0, 0xe0330961, 0x001b0004,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x20350966, 0x33001d03, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00040961, 0x37050020,
    0x00663507, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80040961, 0x10014110,
    0x00000000, 0x06e006e0, 0x00040069, 0x10018510,
    0x01565306, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x06e006e0, 0xe0390961, 0x001b0004,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x203b0966, 0x39003703, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00040961, 0x3d050020,
    0x00663b07, 0x00000000, 0x80040961, 0x10014110,
    0x00000000, 0x07a007a0, 0x00040069, 0x10018510,
    0x01561b06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x07a007a0, 0xe04f0961, 0x001b0004,
    0x20510966, 0x4f003b03, 0x00040961, 0x6b070200,
    0x00005104, 0x00000000, 0x01040022, 0x0001c060,
    0x00000158, 0x000000f8, 0x00040061, 0x57050020,
    0x00005104, 0x00000000, 0x00040061, 0x5f062650,
    0x00467d05, 0x00000000, 0xac590a70, 0x00005703,
    0x00040a65, 0x55058110, 0x01565f06, 0x00010001,
    0x00040961, 0x56050450, 0x00685506, 0x00000000,
    0x00041970, 0x00018550, 0x25585605, 0x00000000,
    0x01041c62, 0x5b058220, 0x02465905, 0xffffffff,
    0x00041970, 0x00018660, 0x26465b05, 0x00000000,
    0x01042162, 0x33058220, 0x02462905, 0xff800000,
    0x01042162, 0x35058220, 0x02462b05, 0xff800000,
    0x01042162, 0x37058220, 0x02462d05, 0xff800000,
    0x01042162, 0x39058220, 0x02462105, 0x7f800000,
    0x01042162, 0x3b058220, 0x02462305, 0x7f800000,
    0x01042162, 0x3d058220, 0x02462505, 0x7f800000,
    0x00040024, 0x0001c060, 0x00000070, 0x00000070,
    0x00041a61, 0x3d054220, 0x00000000, 0x7f800000,
    0x00041c61, 0x3b054220, 0x00000000, 0x7f800000,
    0x00041e61, 0x39054220, 0x00000000, 0x7f800000,
    0x00041f61, 0x37054220, 0x00000000, 0xff800000,
    0x00041f61, 0x35054220, 0x00000000, 0xff800000,
    0x00040061, 0x33054220, 0x00000000, 0xff800000,
    0x00040025, 0x00004600, 0x00000000, 0x000013c8,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80040961, 0x10014110, 0x00000000, 0x07200720,
    0x00040069, 0x10018510, 0x01561306, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x07200720,
    0xe06e0961, 0x001b0004, 0x80040961, 0x10014110,
    0x00000000, 0x07600760, 0x00040069, 0x10018510,
    0x01561306, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x07600760, 0xe0770961, 0x001b0004,
    0x80040b61, 0x10014110, 0x00000000, 0x07a007a0,
    0x00040069, 0x10018510, 0x01561306, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x07a007a0,
    0xe0640961, 0x001b0004, 0x80041d61, 0x10014110,
    0x00000000, 0x06600660, 0x00040069, 0x10018510,
    0x01561306, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x06600660, 0xe0620961, 0x001b0004,
    0x80041f61, 0x10014110, 0x00000000, 0x06a006a0,
    0x00040069, 0x10018510, 0x01561306, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x06a006a0,
    0xe0600961, 0x001b0004, 0x80041f61, 0x10014110,
    0x00000000, 0x06e006e0, 0x00040069, 0x10018510,
    0x01561306, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x06e006e0, 0xe05c0961, 0x001b0004,
    0x00040061, 0x5e062650, 0x00467d05, 0x00000000,
    0x27550e62, 0x6e003900, 0x27571e62, 0x77003b00,
    0x271f0d62, 0x64003d00, 0x254f1c62, 0x62003300,
    0x25510b62, 0x60003500, 0x25131a62, 0x5c003700,
    0x00040965, 0x61058110, 0x01565e06, 0x00010001,
    0x80041161, 0x10014110, 0x00000000, 0x03e003e0,
    0x00040069, 0x10018510, 0x01565306, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x03e003e0,
    0xe05b0961, 0x001b0004, 0x80041161, 0x10014110,
    0x00000000, 0x0ae00ae0, 0x00040069, 0x10018510,
    0x01565306, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0ae00ae0, 0xe05d0961, 0x001b0004,
    0x80041261, 0x10014110, 0x00000000, 0x0aa00aa0,
    0x00040069, 0x10018510, 0x01565306, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0aa00aa0,
    0xe05f0961, 0x001b0004, 0x80041361, 0x10014110,
    0x00000000, 0x09e009e0, 0x00040069, 0x10018510,
    0x01565306, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x09e009e0, 0xe0590961, 0x001b0004,
    0x80041261, 0x10014110, 0x00000000, 0x0a200a20,
    0x00040069, 0x10018510, 0x01565306, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0a200a20,
    0xe0110961, 0x001b0004, 0x80041161, 0x10014110,
    0x00000000, 0x02600260, 0x00040069, 0x10018510,
    0x01565306, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x02600260, 0xe0190961, 0x001b0004,
    0x00040b61, 0x62050450, 0x00686106, 0x00000000,
    0x27531a62, 0x5f005500, 0x27550962, 0x5d005700,
    0x27570962, 0x5b001f00, 0x251f0962, 0x59004f00,
    0x00040970, 0x63058550, 0x25586205, 0x00000000,
    0x254f0962, 0x11005100, 0x80041561, 0x10014110,
    0x00000000, 0x0a600a60, 0x00040069, 0x10018510,
    0x01561b06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0a600a60, 0xe05f0961, 0x001b0004,
    0x80041461, 0x10014110, 0x00000000, 0x0aa00aa0,
    0x00040069, 0x10018510, 0x01561b06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0aa00aa0,
    0xe05d0961, 0x001b0004, 0x25111d62, 0x19001300,
    0x80041461, 0x10014110, 0x00000000, 0x0ae00ae0,
    0x00040069, 0x10018510, 0x01561b06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0ae00ae0,
    0xe05b0961, 0x001b0004, 0x80041361, 0x10014110,
    0x00000000, 0x03e003e0, 0x00040069, 0x10018510,
    0x01561b06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x03e003e0, 0xe0590961, 0x001b0004,
    0x80040961, 0x10014110, 0x00000000, 0x09e009e0,
    0x00040069, 0x10018510, 0x01561b06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x09e009e0,
    0xe0130961, 0x001b0004, 0x27510a62, 0x5f005300,
    0x80041261, 0x10014110, 0x00000000, 0x02200220,
    0x00040069, 0x10018510, 0x01561b06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x02200220,
    0xe0190961, 0x001b0004, 0x27530962, 0x5d005500,
    0x00041f61, 0x1b050560, 0x00466305, 0x00000000,
    0x27550962, 0x5b005700, 0x25570962, 0x59001f00,
    0x255b1a62, 0x19001100, 0x25591b62, 0x13004f00,
    0x00041961, 0x1d062650, 0x00461b05, 0x00000000,
    0x00041965, 0x65058110, 0x01561d06, 0x00010001,
    0x00041961, 0x66050450, 0x00686506, 0x00000000,
    0x00041970, 0x67058550, 0x25586605, 0x00000000,
    0x00040070, 0x00018220, 0x52464305, 0x00000006,
    0x00040961, 0x4f050560, 0x00466705, 0x00000000,
    0x01040022, 0x0001c060, 0x00000e68, 0x00000e68,
    0x251b0b62, 0x57aa5100, 0x25191262, 0x59aa5300,
    0x251f1462, 0x5baa5500, 0xa0651c40, 0x01004b03,
    0x00041761, 0x60064540, 0x00000000, 0x00010001,
    0x251d0962, 0x1f001900, 0x00030a61, 0x11060220,
    0x00346505, 0x00000000, 0x00130b61, 0x13060220,
    0x00346605, 0x00000000, 0x00041b61, 0x67050020,
    0x00566006, 0x00000000, 0x25191162, 0x1d001b00,
    0xe05d1141, 0x34001900, 0x20191140, 0x5d215100,
    0x201b0040, 0x5d215300, 0x201d0040, 0x5d215500,
    0x20510040, 0x5d015700, 0x20530040, 0x5d015900,
    0x20550040, 0x5d015b00, 0x20571340, 0x19205100,
    0x20511340, 0x1b205300, 0x20531340, 0x1d205500,
    0x00041341, 0x55058aa0, 0x0a465705, 0x3f800001,
    0x00041341, 0x57058aa0, 0x0a465105, 0x3f800001,
    0x00041341, 0x51058aa0, 0x0a465305, 0x3f800001,
    0x00041165, 0x53058220, 0x02465505, 0x007fffff,
    0x00041765, 0x59058220, 0x02465505, 0x80000000,
    0x00040065, 0x5f058220, 0x02465505, 0x7f800000,
    0x00041265, 0x5b058220, 0x02465705, 0x80000000,
    0x00040065, 0x61058220, 0x02465705, 0x7f800000,
    0x00041165, 0x5d058220, 0x02465105, 0x80000000,
    0x00040065, 0x63058220, 0x02465105, 0x7f800000,
    0x00040065, 0x55058220, 0x02465705, 0x007fffff,
    0x00040065, 0x57058220, 0x02465105, 0x007fffff,
    0x00041f40, 0x51058660, 0x06465305, 0x3f000000,
    0x00041f6c, 0x53058660, 0x02465f05, 0x00000017,
    0x00041c40, 0x5f058660, 0x06465505, 0x3f000000,
    0x00041f6c, 0x55058660, 0x02466105, 0x00000017,
    0x00041d40, 0x61058660, 0x06465705, 0x3f000000,
    0xac001d70, 0x3f805101, 0x00041f6c, 0x57058660,
    0x02466305, 0x00000017, 0xa0631d40, 0xf8205303,
    0xa0531c40, 0xf8205503, 0xa0551b40, 0xf8205703,
    0x11040062, 0x57058220, 0x02465105, 0x3f000000,
    0x00040965, 0x51058220, 0x02465705, 0x7fffffff,
    0xac001f70, 0x3f805f01, 0x20571966, 0x59005103,
    0x11040062, 0x51058220, 0x02465f05, 0x3f000000,
    0x00041965, 0x59058220, 0x02465105, 0x7fffffff,
    0xac001f70, 0x3f806101, 0x20511966, 0x5b005903,
    0x11040062, 0x59058220, 0x02466105, 0x3f000000,
    0x00041965, 0x5b058220, 0x02465905, 0x7fffffff,
    0x00041970, 0x59058aa0, 0x3a465705, 0x3f7f0000,
    0x20570966, 0x5d005b03, 0x00041970, 0x5b058aa0,
    0x3a465105, 0x3f7f0000, 0xa0511140, 0x59206302,
    0x00041970, 0x59058aa0, 0x3a465705, 0x3f7f0000,
    0xa0571140, 0x5b205302, 0x275b0070, 0x4b006503,
    0xa0531140, 0x59205502, 0xa06d1a40, 0x4d025b02,
    0x00031961, 0x11260220, 0x00346d05, 0x00000000,
    0x00131a61, 0x13260220, 0x00346e05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x00000000, 0xf3081124, 0x00026714,
    0x00043161, 0x1f050660, 0x00460f05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb0c1524, 0x003c1944,
    0xa0703640, 0x01204b03, 0x00040c61, 0x61070200,
    0x00465105, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x27721a70, 0x4b007003,
    0x00033161, 0x09060220, 0x00347005, 0x00000000,
    0x00133161, 0x0b060220, 0x00347105, 0x00000000,
    0x00040061, 0x63070200, 0x00465705, 0x00000000,
    0x00040061, 0x65070200, 0x00465305, 0x00000000,
    0x00041e61, 0x55070000, 0x00666107, 0x00000000,
    0xa0741e40, 0x4d027202, 0x00041a61, 0x550f0000,
    0x00666307, 0x00000000, 0x00031a61, 0x09260220,
    0x00347405, 0x00000000, 0x00131b61, 0x0b260220,
    0x00347505, 0x00000000, 0x00041b61, 0x55170000,
    0x00666507, 0x00000000, 0x00041961, 0x551f0000,
    0x00666b07, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xfb080924, 0x00005514, 0x00040070, 0x00010220,
    0x52464305, 0x00464505, 0x01040022, 0x0001c060,
    0x000004a0, 0x00000420, 0x25093862, 0x33433900,
    0x250b3862, 0x35433b00, 0x250d3162, 0x37433d00,
    0x00043769, 0x1105a660, 0x02465105, 0x00000017,
    0x00043769, 0x1305a660, 0x02465705, 0x00000017,
    0x00043169, 0x1505a660, 0x02465305, 0x00000017,
    0x250f1162, 0x0d000b00, 0x00041b40, 0x7e058660,
    0x06461105, 0x43800000, 0x00040061, 0x5b062650,
    0x00464f05, 0x00000000, 0x00040940, 0x0b058660,
    0x06461305, 0x43800000, 0x00040940, 0x0d058660,
    0x06461505, 0x43800000, 0x25771162, 0x0f000900,
    0x00041b65, 0x4f058110, 0x01565b06, 0x00010001,
    0xe0791141, 0x34007700, 0x00041961, 0x00010450,
    0x20684f06, 0x00000000, 0x207b1140, 0x79203900,
    0x20090040, 0x79203b00, 0x200f0040, 0x79203d00,
    0x20111e40, 0x79003300, 0x20131c40, 0x79003500,
    0x20151b40, 0x79003700, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x20331340, 0x19207b00,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x20351340, 0x1b200900, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x20371340, 0x1d200f00,
    0x20721640, 0x19201100, 0x20741640, 0x1b201300,
    0x20761640, 0x1d201500, 0x00041641, 0x39058aa0,
    0x0a463305, 0x3f7ffffe, 0x00041641, 0x3b058aa0,
    0x0a463505, 0x3f7ffffe, 0x00041641, 0x3d058aa0,
    0x0a463705, 0x3f7ffffe, 0x00041641, 0x78058aa0,
    0x0a467205, 0x3f800001, 0x00041641, 0x7a058aa0,
    0x0a467405, 0x3f800001, 0x00041641, 0x7c058aa0,
    0x0a467605, 0x3f800001, 0x204f0941, 0x7e003900,
    0x205b0a41, 0x0b003b00, 0x205d0b41, 0x0d003d00,
    0x20091641, 0x7e007800, 0x200f1641, 0x0b007a00,
    0x20111641, 0x0d007c00, 0x605f1645, 0x00104f00,
    0x60611645, 0x00105b00, 0x60631645, 0x00105d00,
    0x60131645, 0x00120900, 0x60151645, 0x00120f00,
    0x60191645, 0x00121100, 0xe5651662, 0x00005f00,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xe5671662, 0x00006100, 0xe56b1662, 0x00006300,
    0xe51b1662, 0x00021300, 0xe51d1662, 0x00021500,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xe51f1662, 0x00021900, 0x00041662, 0x6d058aa0,
    0x5a466505, 0x437f0000, 0x00041662, 0x6f058aa0,
    0x5a466705, 0x437f0000, 0x00041662, 0x71058aa0,
    0x5a466b05, 0x437f0000, 0x00041662, 0x33058aa0,
    0x5a461b05, 0x437f0000, 0x00041662, 0x35058aa0,
    0x5a461d05, 0x437f0000, 0x00041662, 0x37058aa0,
    0x5a461f05, 0x437f0000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00041661, 0x17070a00,
    0x00466d05, 0x00000000, 0x00041561, 0x51070a00,
    0x00466f05, 0x00000000, 0x00041461, 0x53070a00,
    0x00467105, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00041361, 0x55070a00,
    0x00463305, 0x00000000, 0x00041261, 0x57070a00,
    0x00463505, 0x00000000, 0x00041161, 0x59070a00,
    0x00463705, 0x00000000, 0x00041e61, 0x5b050010,
    0x00661707, 0x00000000, 0x00041e61, 0x5c050010,
    0x00665107, 0x00000000, 0x00041e61, 0x5d050010,
    0x00665307, 0x00000000, 0x00041e61, 0x50050010,
    0x00665507, 0x00000000, 0x00041e61, 0x51050010,
    0x00665707, 0x00000000, 0x00041e61, 0x52050010,
    0x00665907, 0x00000000, 0x11040d62, 0x67058110,
    0x01585b05, 0x00000000, 0x11040d62, 0x68058110,
    0x01585c05, 0x00000000, 0x11040c62, 0x6b058110,
    0x01585d05, 0x00000000, 0x11040e62, 0x64058110,
    0x01585005, 0x00000000, 0x11040e62, 0x65058110,
    0x01585105, 0x00000000, 0x11040e62, 0x66058110,
    0x01585205, 0x00000000, 0x00040024, 0x0001c060,
    0x00000090, 0x00000090, 0x00041b61, 0x6b054110,
    0x00000000, 0x00800080, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00041f61, 0x68054110,
    0x00000000, 0x00800080, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00041f61, 0x67054110,
    0x00000000, 0x00800080, 0x00041d61, 0x66054110,
    0x00000000, 0x00000000, 0x00041f61, 0x65054110,
    0x00000000, 0x00000000, 0x00041f61, 0x64054110,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000560, 0xa06c0c40, 0x43004b02,
    0x00041f61, 0x7e060100, 0x00586b05, 0x00000000,
    0x00041f61, 0x7f060100, 0x00586805, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00041f61, 0x09060100, 0x00586705, 0x00000000,
    0x00041f61, 0x50060100, 0x00586605, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00041f61, 0x11060100, 0x00586505, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00041f61, 0x12060100, 0x00586405, 0x00000000,
    0x276e1f70, 0x4b006c03, 0xa0720040, 0x01c06c03,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00041e61, 0x56050020, 0x00560906, 0x00000000,
    0xa0701b40, 0x4d026e02, 0x27741b70, 0x6c007203,
    0x00030061, 0x37060220, 0x00347205, 0x00000000,
    0x00130061, 0x39060220, 0x00347305, 0x00000000,
    0xa0761b40, 0x70027402, 0x00031961, 0x37260220,
    0x00347605, 0x00000000, 0x00131a61, 0x39260220,
    0x00347705, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xf3083724, 0x00025614, 0xa0770040, 0x02806c03,
    0x00040061, 0x5b050020, 0x00567f06, 0x00000000,
    0x27791a70, 0x6c007703, 0x00033461, 0x57060220,
    0x00347705, 0x00000000, 0x00130061, 0x59060220,
    0x00347805, 0x00000000, 0xa07b1b40, 0x70027902,
    0x00031961, 0x57260220, 0x00347b05, 0x00000000,
    0x00131a61, 0x59260220, 0x00347c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x00000000, 0xf3085724, 0x00025b14,
    0xa07c0040, 0x03406c03, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x00041561, 0x60050020,
    0x00567e06, 0x00000000, 0x277e1a70, 0x6c007c03,
    0x00033961, 0x5c060220, 0x00347c05, 0x00000000,
    0x00131561, 0x5e060220, 0x00347d05, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xa0091b40, 0x70027e02, 0x00031961, 0x5c260220,
    0x00340905, 0x00000000, 0x00131a61, 0x5e260220,
    0x00340a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044a31, 0x00000000,
    0xf3085c24, 0x00026014, 0xa00a3840, 0x02206c03,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x65050020, 0x00561206, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x270c1a70, 0x6c000a03, 0x00033a61, 0x61060220,
    0x00340a05, 0x00000000, 0x00131761, 0x63060220,
    0x00340b05, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa00e1b40, 0x70020c02,
    0x00031961, 0x61260220, 0x00340e05, 0x00000000,
    0x00131a61, 0x63260220, 0x00340f05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x00000000, 0xf3086124, 0x00026514,
    0xa00f0040, 0x02e06c03, 0x00040061, 0x76050020,
    0x00561106, 0x00000000, 0x27111a70, 0x6c000f03,
    0x00030061, 0x72060220, 0x00340f05, 0x00000000,
    0x00130061, 0x74060220, 0x00341005, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xa0130b40, 0x70021102, 0x00031961, 0x72260220,
    0x00341305, 0x00000000, 0x00131a61, 0x74260220,
    0x00341405, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xf3087224, 0x00027614, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0141740, 0x03a06c03,
    0x00040061, 0x7b050020, 0x00565006, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x27160a70, 0x6c001403, 0x00033661, 0x77060220,
    0x00341405, 0x00000000, 0x00130061, 0x79060220,
    0x00341505, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0180b40, 0x70021602,
    0x00031961, 0x77260220, 0x00341805, 0x00000000,
    0x00131a61, 0x79260220, 0x00341905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x00000000, 0xf3087724, 0x00027b14,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa01a1340, 0x01606c03, 0x00040061, 0x13064540,
    0x00000000, 0x00020002, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x271c0a70, 0x6c001a03,
    0x00033c61, 0x7c060220, 0x00341a05, 0x00000000,
    0x00130061, 0x7e060220, 0x00341b05, 0x00000000,
    0x00041c61, 0x09050020, 0x00561306, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa01e0940, 0x70021c02, 0x00031961, 0x7c260220,
    0x00341e05, 0x00000000, 0x00131a61, 0x7e260220,
    0x00341f05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xf3087c24, 0x00020914, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040070, 0x00010660,
    0x56466905, 0x00464505, 0x01040022, 0x0001c060,
    0x00000708, 0x00000708, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x0004096c, 0x1f058660,
    0x02464505, 0x0000001f, 0x00040069, 0x33058660,
    0x02466905, 0x00000005, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xe0351368, 0x01b06903,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa0370a40, 0x33000502, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x27390970, 0x05003703,
    0x00033161, 0x0a060220, 0x00343705, 0x00000000,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x00131761, 0x0c060220, 0x00343805, 0x00000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00040b52, 0x3b040e68, 0x0e2e0705, 0x39053505,
    0x00031961, 0x0a260220, 0x00343b05, 0x00000000,
    0x00131a61, 0x0c260220, 0x00343c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb0c0a24, 0x003c2144,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa03d1540, 0x01003703, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x27431970, 0x37003d03,
    0x00033161, 0x0b060220, 0x00343d05, 0x00000000,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x00131761, 0x0d060220, 0x00343e05, 0x00000000,
    0xa04b1b40, 0x3b024302, 0x00031961, 0x0b260220,
    0x00344b05, 0x00000000, 0x00131a61, 0x0d260220,
    0x00344c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb0c0b24, 0x003c2944, 0x00040069, 0x4c058660,
    0x02466905, 0x00000002, 0xe04e1468, 0x01e06903,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0xa0500a40, 0x4c000102, 0x27520970, 0x01005003,
    0x00033161, 0x0c060220, 0x00345005, 0x00000000,
    0x00133161, 0x0e060220, 0x00345105, 0x00000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00040b52, 0x54040e68, 0x0e2e0305, 0x52054e05,
    0x00031961, 0x0c260220, 0x00345405, 0x00000000,
    0x00131a61, 0x0e260220, 0x00345505, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb0c0c24, 0x00046914,
    0xe0111268, 0x00613103, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xa0551440, 0x69004502,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x27570970, 0x45005503, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x00041269, 0x5b058660,
    0x02465505, 0x00000002, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0xe05e1568, 0x01e05503,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xa0590940, 0x1f025702, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0xa0611b40, 0x5b000102,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040a69, 0x5c058660, 0x02465905, 0x00000002,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x27630a70, 0x01006103, 0x00033161, 0x0d060220,
    0x00346105, 0x00000000, 0x00133161, 0x0f060220,
    0x00346205, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x20600c66, 0x5e005c03,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040952, 0x65040e68, 0x0e2e0305, 0x63056005,
    0x00031961, 0x0d260220, 0x00346505, 0x00000000,
    0x00131a61, 0x0f260220, 0x00346605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb0c0d24, 0x00041114,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00041161, 0x14062650, 0x00464705, 0x00000000,
    0x00040965, 0x67058110, 0x01561406, 0x00010001,
    0x00040961, 0x68050450, 0x00686706, 0x00000000,
    0x00040970, 0x6b058550, 0x25586805, 0x00000000,
    0x00041961, 0x69050560, 0x00466b05, 0x00000000,
    0x00041965, 0x00010220, 0x22466905, 0x00464905,
    0x01040022, 0x0001c060, 0x00000220, 0x00000220,
    0x00041169, 0x6c058660, 0x02464505, 0x00000003,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa06e1140, 0x02803f03, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00040a66, 0x1a058220,
    0x02466c05, 0xffffffc0, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x27700970, 0x3f006e03,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00031161, 0x12060220, 0x00346e05, 0x00000000,
    0x00131161, 0x14060220, 0x00346f05, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa0720b40, 0x41027002, 0x00031961, 0x12260220,
    0x00347205, 0x00000000, 0x00131a61, 0x14260220,
    0x00347305, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x73140000,
    0xfb041224, 0x00040000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00041369, 0x75058660,
    0x02467305, 0x00000006, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0770940, 0x75003f02,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x27790970, 0x3f007703, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00031761, 0x16060220,
    0x00347705, 0x00000000, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00131261, 0x18060220,
    0x00347805, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa07b0b40, 0x41027902,
    0x00031961, 0x16260220, 0x00347b05, 0x00000000,
    0x00131a61, 0x18260220, 0x00347c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb0c1624, 0x00041a14,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80030f61, 0x7e050220, 0x00460005, 0x00000000,
    0x80041961, 0x20014aa0, 0x00000000, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_DFS_DFS_trivial_batchable = {
   .prog_data = {
      .base.nr_params = 10,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 14560,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_DFS_DFS_trivial_batchable_relocs,
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
      .push.cross_thread.dwords = 10,
      .push.cross_thread.regs = 2,
      .push.cross_thread.size = 64,
   },
   .args_size = 8,
   .arg_count = 1,
   .args = gfx125_bvh_build_DFS_DFS_trivial_batchable_args,
   .code = gfx125_bvh_build_DFS_DFS_trivial_batchable_code,
};
const char *gfx125_bvh_build_DFS_DFS_trivial_batchable_sha1 = "2b8bd962eb79fb471cc79509427e628010ffb7c1";

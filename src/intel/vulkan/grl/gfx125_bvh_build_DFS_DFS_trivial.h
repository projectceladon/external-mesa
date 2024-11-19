#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_DFS_DFS_trivial_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_DFS_DFS_trivial_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_DFS_DFS_trivial_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
   { 24, 8 },
   { 32, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g111<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g1UD            g111UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
add(1)          g112<1>UD       g111<0,1,0>UD   0x00000040UD    { align1 WE_all 1N $0.src compacted };
mov(8)          g104<1>UW       0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g3UD            g112UD          nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
add(8)          g104.8<1>UW     g104<1,1,0>UW   0x0008UW        { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g55<1>UD        g104<8,8,1>UW                   { align1 1H };
and(16)         g105<1>UD       g55<1,1,0>UD    0x0000000fUD    { align1 1H I@1 compacted };
mov(16)         g113<2>UW       g105<8,8,1>UD                   { align1 1H I@1 };
mov(16)         g57<1>UD        g105<16,8,2>UW                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g87<1>D         g2<0,1,0>D      36D             { align1 1H compacted };
cmp.l.f0.0(16)  g91<1>UD        g87<1,1,0>UD    0x00000024UD    { align1 1H I@1 compacted };
mov(8)          g95<2>UD        g87<4,4,1>UD                    { align1 1Q };
mov(8)          g97<2>UD        g88<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
and(16)         g99<1>UD        g3<0,1,0>UD     0x00000001UD    { align1 1H compacted };
add(16)         g93<1>D         -g91<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@4 compacted };
cmp.nz.f0.0(16) g61<1>D         g99<1,1,0>D     0D              { align1 1H I@2 compacted };
mov(8)          g95.1<2>UD      g93<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g97.1<2>UD      g94<4,4,1>UD                    { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g51UD           g95UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mov(16)         g89<2>UW        g53<8,8,1>UD                    { align1 1H $2.dst };
mov(16)         g59<1>UD        g51<16,8,2>UW                   { align1 1H $2.dst };
cmp.l.f0.0(16)  null<1>D        g57<8,8,1>D     g59<8,8,1>D     { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
shl(16)         g106<1>D        g57<8,8,1>D     0x00000005UD    { align1 1H };
shr(16)         g108<1>UD       g57<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
add(16)         g110<1>D        g2.4<0,1,0>D    g106<1,1,0>D    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g115<1>UD       g110<1,1,0>UD   g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g119<2>UD       g110<4,4,1>UD                   { align1 1Q };
mov(8)          g121<2>UD       g111<4,4,1>UD                   { align1 2Q };
add(16)         g123<1>D        g110<1,1,0>D    16D             { align1 1H compacted };
add3(16)        g117<1>D        g2.5<0,1,0>D    g108<8,8,1>D    -g115<1,1,1>D { align1 1H I@4 };
cmp.l.f0.0(16)  g125<1>UD       g123<1,1,0>UD   g110<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g99<2>UD        g123<4,4,1>UD                   { align1 1Q };
mov(8)          g101<2>UD       g124<4,4,1>UD                   { align1 2Q };
mov(8)          g119.1<2>UD     g117<4,4,1>UD                   { align1 1Q I@4 };
mov(8)          g121.1<2>UD     g118<4,4,1>UD                   { align1 2Q I@5 };
add(16)         g3<1>D          -g125<1,1,0>D   g117<1,1,0>D    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g91UD           g119UD          nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov(8)          g99.1<2>UD      g3<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g101.1<2>UD     g4<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g3UD            g99UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(16)         g45<1>UD        g91<8,8,1>UD                    { align1 1H $3.dst };
mov(16)         g47<1>UD        g93<8,8,1>UD                    { align1 1H $3.dst };
mov(16)         g49<1>UD        g95<8,8,1>UD                    { align1 1H $3.dst };
mov(16)         g19<1>UD        g97<8,8,1>UD                    { align1 1H $3.dst };
mov(16)         g21<1>UD        g3<8,8,1>UD                     { align1 1H $1.dst };
mov(16)         g23<1>UD        g5<8,8,1>UD                     { align1 1H $1.dst };
mov(16)         g25<1>UD        g7<8,8,1>UD                     { align1 1H $1.dst };
mov(16)         g41<1>UD        g9<8,8,1>UD                     { align1 1H $1.dst };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g19<1>UD        0x00000000UD                    { align1 1H I@6 };
mov(16)         g49<1>UD        0x7f800000UD                    { align1 1H I@7 };
mov(16)         g47<1>UD        0x7f800000UD                    { align1 1H I@7 };
mov(16)         g45<1>UD        0x7f800000UD                    { align1 1H };
mov(16)         g41<1>UD        0x80000000UD                    { align1 1H I@6 };
mov(16)         g25<1>UD        0xff800000UD                    { align1 1H I@7 };
mov(16)         g23<1>UD        0xff800000UD                    { align1 1H I@7 };
mov(16)         g21<1>UD        0xff800000UD                    { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
mov(16)         g27<1>UD        g45<8,8,1>UD                    { align1 1H I@6 };
mov(16)         g29<1>UD        g47<8,8,1>UD                    { align1 1H I@7 };
mov(16)         g31<1>UD        g49<8,8,1>UD                    { align1 1H I@7 };
mov(16)         g33<1>UD        g19<8,8,1>UD                    { align1 1H I@7 };
mov(16)         g35<1>UD        g21<8,8,1>UD                    { align1 1H I@6 };
mov(16)         g37<1>UD        g23<8,8,1>UD                    { align1 1H I@7 };
mov(16)         g39<1>UD        g25<8,8,1>UD                    { align1 1H I@7 };
cmp.z.f0.0(16)  g4<1>W          g113<16,8,2>W   0W              { align1 1H };
mov(1)          g1<1>D          1D                              { align1 WE_all 1N $0.dst };
mov.nz.f0.0(16) g63<1>D         g4<8,8,1>W                      { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
add(16)         g5<1>D          g2.2<0,1,0>D    12D             { align1 1H compacted };
cmp.l.f0.0(16)  g7<1>UD         g5<1,1,0>UD     g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g100<2>UD       g5<4,4,1>UD                     { align1 1Q $1.src };
mov(8)          g102<2>UD       g6<4,4,1>UD                     { align1 2Q $1.src };
add(16)         g9<1>D          -g7<1,1,0>D     g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g100.1<2>UD     g9<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g102.1<2>UD     g10<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g105<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g105<1>UD       g105<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
mov(1)          g106<1>UD       sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g106<1>UD       g106<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
and(1)          g106<1>UD       g105<0,1,0>UD   g106<0,1,0>UD   { align1 WE_all 1N I@1 compacted };
mov(1)          g11<1>UD        g106<0,1,0>UD                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cbit(16)        g13<1>UD        g11<0,1,0>UD                    { align1 1H };
mov(1)          g107<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g107<1>UD       g107<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g15<1>UD        g107<0,1,0>UD                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  null<1>D        g55<8,8,1>D     g15<0,1,0>D     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL4          UIP:  LABEL4              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g6UD            g100UD          g13UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };

LABEL4:
endif(16)       JIP:  LABEL3                                    { align1 1H };
mov(1)          g108<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g108<1>UD       g108<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g16<1>UD        g108<0,1,0>UD                   { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g16<0,1,0>UD    0x00000002UD    { align1 WE_all 1N @1 $1.dst };
mov(1)          g65<1>UD        g[a0 192]<0,1,0>UD              { align1 WE_all 1N A@1 };
mov(1)          g109<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g109<1>UD       g109<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
mov(16)         g67<1>UD        g104<8,8,1>UW                   { align1 1H };
mov(1)          g110<1>UD       sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g110<1>UD       g110<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g69<1>D         -g1<0,1,0>D     g67<8,8,1>UD    { align1 1H };
and(1)          g110<1>UD       g109<0,1,0>UD   g110<0,1,0>UD   { align1 WE_all 1N I@2 compacted };
mov(1)          g43<1>UD        g110<0,1,0>UD                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(16)         g71<1>UD        g43<0,1,0>UD    ~g69<8,8,1>D    { align1 1H };
cbit(16)        g73<1>UD        g71<8,8,1>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g75<1>D         g65<0,1,0>D     g73<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g65<1>D         g75<8,8,1>D     0x00000006UD    { align1 1H };

LABEL3:
endif(16)       JIP:  LABEL5                                    { align1 1H };

LABEL5:
add(16)         g43<1>D         g2.2<0,1,0>D    g65<0,1,0>D     { align1 1H I@2 compacted };
add(16)         g78<1>D         g2.2<0,1,0>D    16D             { align1 1H compacted };
add(16)         g91<1>D         g55<1,1,0>D     4D              { align1 1H compacted };
add(16)         g93<1>D         g55<1,1,0>D     -12D            { align1 1H compacted };
add(16)         g95<1>D         g55<1,1,0>D     2D              { align1 1H $2.src compacted };
add(16)         g97<1>D         g55<1,1,0>D     -14D            { align1 1H $2.src compacted };
add(16)         g101<1>D        g55<1,1,0>D     1D              { align1 1H $1.src compacted };
add(16)         g103<1>D        g55<1,1,0>D     -15D            { align1 1H $1.src compacted };
mov(1)          g1.1<1>D        2147483647D                     { align1 WE_all 1N };
cmp.l.f0.0(16)  g76<1>UD        g43<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@7 compacted };
mov(8)          g3<2>UD         g43<4,4,1>UD                    { align1 1Q };
mov(8)          g5<2>UD         g44<4,4,1>UD                    { align1 2Q };
mov(8)          g7<2>UD         g78<4,4,1>UD                    { align1 1Q };
mov(8)          g9<2>UD         g79<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g80<1>UD        g78<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  null<1>D        g91<8,8,1>D     16D             { align1 1H };
add(16)         g67<1>D         -g76<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@7 compacted };
add(16)         g82<1>D         -g80<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
(+f0.0) sel(16) g69<1>UD        g91<1,1,0>UD    g93<1,1,0>UD    { align1 1H compacted };
mov(8)          g3.1<2>UD       g67<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g5.1<2>UD       g68<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g7.1<2>UD       g82<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g9.1<2>UD       g83<4,4,1>UD                    { align1 2Q I@5 };
cmp.l.f0.0(16)  null<1>D        g95<8,8,1>D     16D             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g83UD           g7UD            nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
(+f0.0) sel(16) g71<1>UD        g95<1,1,0>UD    g97<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  null<1>D        g101<8,8,1>D    16D             { align1 1H };
(+f0.0) sel(16) g73<1>UD        g101<1,1,0>UD   g103<1,1,0>UD   { align1 1H compacted };
cmp.z.f0.0(16)  g98<1>W         g89<16,8,2>W    1W              { align1 1H };
mov.nz.f0.0(16) g75<1>D         g98<8,8,1>W                     { align1 1H I@1 };
shl(16)         g85<1>D         g83<8,8,1>D     0x00000006UD    { align1 1H $1.dst };
add3(16)        g87<1>D         g2.2<0,1,0>D    g85<8,8,1>D     -g43<1,1,1>D { align1 1H I@1 };
asr(16)         g17<1>D         g87<8,8,1>D     0x00000006UD    { align1 1H I@1 };
(-f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL6              { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g55<8,8,1>UD    g59<8,8,1>UD    { align1 1H };
(+f0.0) sel(16) g77<1>UD        g21<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g79<1>UD        g23<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g9<1>UD         g25<8,8,1>UD    0xff800000UD    { align1 1H $1.src };
(+f0.0) sel(16) g81<1>UD        g45<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g83<1>UD        g47<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g85<1>UD        g49<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         a0<1>UW         0x09a0UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x09a0UW        { align1 1H A@1 };
mov(16)         g97<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x09e0UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x09e0UW        { align1 1H A@1 };
mov(16)         g95<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0120UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0120UW        { align1 1H A@1 };
mov(16)         g93<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0a20UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a20UW        { align1 1H A@1 };
mov(16)         g91<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0a60UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a60UW        { align1 1H A@1 };
mov(16)         g89<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         a0<1>UW         0x0aa0UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0aa0UW        { align1 1H A@1 };
mov(16)         g7<1>UD         g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g55<8,8,1>UD    0x00000006UD    { align1 1H };
sel.ge(16)      g87<1>F         g77<1,1,0>F     g97<1,1,0>F     { align1 1H I@7 compacted };
sel.ge(16)      g77<1>F         g79<1,1,0>F     g95<1,1,0>F     { align1 1H A@1 compacted };
sel.ge(16)      g79<1>F         g9<1,1,0>F      g93<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g9<1>F          g81<1,1,0>F     g91<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g81<1>F         g83<1,1,0>F     g89<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0ae0UW                        { align1 WE_all 1H F@5 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ae0UW        { align1 1H A@1 };
mov(16)         g97<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g83<1>F         g85<1,1,0>F     g7<1,1,0>F      { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x09a0UW                        { align1 WE_all 1H F@5 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x09a0UW        { align1 1H A@1 };
mov(16)         g95<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x09e0UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x09e0UW        { align1 1H A@1 };
mov(16)         g93<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0120UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0120UW        { align1 1H A@1 };
mov(16)         g91<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0a20UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a20UW        { align1 1H A@1 };
mov(16)         g89<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g85<1>F         g87<1,1,0>F     g97<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0a60UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a60UW        { align1 1H A@1 };
mov(16)         g7<1>UD         g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g87<1>F         g77<1,1,0>F     g95<1,1,0>F     { align1 1H A@1 compacted };
sel.ge(16)      g77<1>F         g79<1,1,0>F     g93<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g79<1>F         g9<1,1,0>F      g91<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0aa0UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0aa0UW        { align1 1H A@1 };
mov(16)         g97<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g9<1>F          g81<1,1,0>F     g89<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0ae0UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ae0UW        { align1 1H A@1 };
mov(16)         g95<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g89<1>F         g83<1,1,0>F     g7<1,1,0>F      { align1 1H I@3 compacted };
mov(16)         a0<1>UW         0x09a0UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x09a0UW        { align1 1H A@1 };
mov(16)         g93<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x09e0UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x09e0UW        { align1 1H A@1 };
mov(16)         g91<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g83<1>F         g85<1,1,0>F     g97<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0120UW                        { align1 WE_all 1H A@3 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0120UW        { align1 1H A@1 };
mov(16)         g81<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g85<1>F         g87<1,1,0>F     g95<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0b20UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b20UW        { align1 1H A@1 };
mov(16)         g7<1>UD         g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g87<1>F         g77<1,1,0>F     g93<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g77<1>F         g79<1,1,0>F     g91<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g79<1>F         g9<1,1,0>F      g81<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g81<1>F         g89<1,1,0>F     g7<1,1,0>F      { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL8              { align1 1H };
sel.ge(16)      g89<1>F         (abs)g77<0,1,0>F (abs)g83<0,1,0>F { align1 1H A@1 compacted };
sel.ge(16)      g91<1>F         (abs)g79<0,1,0>F (abs)g85<0,1,0>F { align1 1H F@3 compacted };
sel.ge(16)      g93<1>F         (abs)g81<0,1,0>F (abs)g87<0,1,0>F { align1 1H F@3 compacted };
add(16)         g97<1>D         g43<1,1,0>D     16D             { align1 1H F@7 compacted };
mov(16)         g101<2>B        -1W                             { align1 1H };
sel.ge(16)      g95<1>F         g91<1,1,0>F     g93<1,1,0>F     { align1 1H F@1 compacted };
mov(16)         g99<4>UB        g53<8,8,1>UD                    { align1 1H $1.src };
mov(8)          g7<2>UD         g97<4,4,1>UD                    { align1 1Q A@3 };
mov(8)          g9<2>UD         g98<4,4,1>UD                    { align1 2Q A@4 };
sel.ge(16)      g51<1>F         g89<1,1,0>F     g95<1,1,0>F     { align1 1H F@1 compacted };
mov(16)         g53<1>UD        g99<32,8,4>UB                   { align1 1H I@3 };
mul(16)         g89<1>F         g51<1,1,0>F     0x34000000F  /* 1.19209e-07F */ { align1 1H F@1 compacted };
add(16)         g11<1>F         g77<0,1,0>F     -g89<1,1,0>F    { align1 1H F@1 compacted };
add(16)         g13<1>F         g79<0,1,0>F     -g89<1,1,0>F    { align1 1H $1.src compacted };
add(16)         g15<1>F         g81<0,1,0>F     -g89<1,1,0>F    { align1 1H compacted };
add(16)         g99<1>F         g83<0,1,0>F     g89<1,1,0>F     { align1 1H I@1 compacted };
add(16)         g102<1>F        g85<0,1,0>F     g89<1,1,0>F     { align1 1H compacted };
add(16)         g104<1>F        g87<0,1,0>F     g89<1,1,0>F     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@3 };
add(16)         g106<1>F        g99<1,1,0>F     -g11<1,1,0>F    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@3 };
add(16)         g108<1>F        g102<1,1,0>F    -g13<1,1,0>F    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@3 };
add(16)         g110<1>F        g104<1,1,0>F    -g15<1,1,0>F    { align1 1H compacted };
mul(16)         g81<1>F         g106<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H F@3 };
mul(16)         g83<1>F         g108<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H F@3 };
mul(16)         g85<1>F         g110<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H F@3 };
and(16)         g51<1>UD        g81<8,8,1>UD    0x007fffffUD    { align1 1H F@3 };
and(16)         g89<1>UD        g81<8,8,1>UD    0x7f800000UD    { align1 1H F@7 };
and(16)         g77<1>UD        g83<8,8,1>UD    0x007fffffUD    { align1 1H F@2 };
and(16)         g91<1>UD        g83<8,8,1>UD    0x7f800000UD    { align1 1H };
and(16)         g79<1>UD        g85<8,8,1>UD    0x007fffffUD    { align1 1H F@1 };
and(16)         g93<1>UD        g85<8,8,1>UD    0x7f800000UD    { align1 1H };
add(16)         g87<1>D         g51<8,8,1>D     1056964608D     { align1 1H A@6 };
asr(16)         g51<1>D         g89<8,8,1>D     0x00000017UD    { align1 1H I@6 };
add(16)         g89<1>D         g77<8,8,1>D     1056964608D     { align1 1H I@6 };
asr(16)         g77<1>D         g91<8,8,1>D     0x00000017UD    { align1 1H I@6 };
add(16)         g91<1>D         g79<8,8,1>D     1056964608D     { align1 1H I@6 };
cmp.z.f0.0(16)  null<1>F        g87<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@5 compacted };
asr(16)         g79<1>D         g93<8,8,1>D     0x00000017UD    { align1 1H I@6 };
(-f0.0) sel(16) g93<1>UD        g87<8,8,1>UD    0x3f000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
bfi2(16)        g87<1>UD        g1.1<0,1,0>UD   g93<8,8,1>UD    g81<1,1,1>UD { align1 1H };
cmp.z.f0.0(16)  null<1>F        g89<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@6 compacted };
(-f0.0) sel(16) g81<1>UD        g89<8,8,1>UD    0x3f000000UD    { align1 1H };
bfi2(16)        g89<1>UD        g1.1<0,1,0>UD   g81<8,8,1>UD    g83<1,1,1>UD { align1 1H A@1 };
cmp.z.f0.0(16)  null<1>F        g91<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@6 compacted };
(-f0.0) sel(16) g81<1>UD        g91<8,8,1>UD    0x3f000000UD    { align1 1H };
bfi2(16)        g83<1>UD        g1.1<0,1,0>UD   g81<8,8,1>UD    g85<1,1,1>UD { align1 1H I@1 };
cmp.g.f0.0(16)  g81<1>F         g87<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@1 };
cmp.g.f0.0(16)  g87<1>F         g89<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@3 };
add3(16)        g85<1>D         65410W          g51<8,8,1>D     -g81<1,1,1>D { align1 1H F@2 };
add3(16)        g51<1>D         65410W          g77<8,8,1>D     -g87<1,1,1>D { align1 1H A@1 };
cmp.g.f0.0(16)  g81<1>F         g83<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g111<1>UD       g97<1,1,0>UD    g43<1,1,0>UD    { align1 1H F@7 compacted };
add3(16)        g83<1>D         65410W          g79<8,8,1>D     -g81<1,1,1>D { align1 1H A@1 };
add(16)         g113<1>D        -g111<1,1,0>D   g67<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g7.1<2>UD       g113<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g9.1<2>UD       g114<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g7UD            g53UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };
send(16)        nullUD          g3UD            g11UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $1 };
add(16)         g118<1>D        g43<1,1,0>D     18D             { align1 1H $3.src compacted };
mov(16)         g77<4>UB        g85<8,8,1>UD                    { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g120<1>UD       g118<1,1,0>UD   g43<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g7<2>UD         g118<4,4,1>UD                   { align1 1Q $4.src };
mov(8)          g9<2>UD         g119<4,4,1>UD                   { align1 2Q $4.src };
mov(16)         g114<4>UB       g51<8,8,1>UD                    { align1 1H };
mov(16)         g116<4>UB       g83<8,8,1>UD                    { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g53<4>UB        g77<32,8,4>UB                   { align1 1H I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g122<1>D        -g120<1,1,0>D   g67<1,1,0>D     { align1 1H I@6 compacted };
mov(16)         g53.1<4>UB      g114<32,8,4>UB                  { align1 1H I@2 };
mov(8)          g7.1<2>UD       g122<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g9.1<2>UD       g123<4,4,1>UD                   { align1 2Q I@3 };
mov(16)         g53.2<4>UB      g116<32,8,4>UB                  { align1 1H I@3 };
mov(16)         g53.3<4>UB      g101<16,8,2>UB                  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g7UD            g53UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $5 };
cmp.l.f0.0(16)  null<1>UD       g55<8,8,1>UD    g59<8,8,1>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL9              { align1 1H };
sel.ge(16)      g7<1>F          (abs)g45<1,1,0>F (abs)g21<1,1,0>F { align1 1H $5.src compacted };
sel.ge(16)      g79<1>F         (abs)g47<1,1,0>F (abs)g23<1,1,0>F { align1 1H compacted };
sel.ge(16)      g81<1>F         (abs)g49<1,1,0>F (abs)g25<1,1,0>F { align1 1H compacted };
shl(16)         g77<1>D         -g85<8,8,1>D    0x00000017UD    { align1 1H };
shl(16)         g53<1>D         -g51<8,8,1>D    0x00000017UD    { align1 1H $5.src };
shl(16)         g51<1>D         -g83<8,8,1>D    0x00000017UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.ge(16)      g9<1>F          g79<1,1,0>F     g81<1,1,0>F     { align1 1H F@1 compacted };
add(16)         g85<1>D         g53<8,8,1>D     1132462080D     { align1 1H I@2 };
add(16)         g83<1>D         g77<8,8,1>D     1132462080D     { align1 1H I@4 };
add(16)         g87<1>D         g51<8,8,1>D     1132462080D     { align1 1H I@3 };
sel.ge(16)      g51<1>F         g7<1,1,0>F      g9<1,1,0>F      { align1 1H A@1 compacted };
mul(16)         g7<1>F          g51<1,1,0>F     0x34000000F  /* 1.19209e-07F */ { align1 1H F@1 compacted };
add(16)         g9<1>F          g45<1,1,0>F     -g7<1,1,0>F     { align1 1H F@1 compacted };
add(16)         g51<1>F         g47<1,1,0>F     -g7<1,1,0>F     { align1 1H compacted };
add(16)         g53<1>F         g49<1,1,0>F     -g7<1,1,0>F     { align1 1H I@3 compacted };
add(16)         g77<1>F         g21<1,1,0>F     g7<1,1,0>F      { align1 1H I@2 compacted };
add(16)         g79<1>F         g23<1,1,0>F     g7<1,1,0>F      { align1 1H compacted };
add(16)         g81<1>F         g25<1,1,0>F     g7<1,1,0>F      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g7<1>F          g9<1,1,0>F      -g11<1,1,0>F    { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g9<1>F          g51<1,1,0>F     -g13<1,1,0>F    { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g51<1>F         g53<1,1,0>F     -g15<1,1,0>F    { align1 1H F@6 compacted };
add(16)         g53<1>F         g77<1,1,0>F     -g11<1,1,0>F    { align1 1H F@6 compacted };
add(16)         g77<1>F         g79<1,1,0>F     -g13<1,1,0>F    { align1 1H F@6 compacted };
add(16)         g79<1>F         g81<1,1,0>F     -g15<1,1,0>F    { align1 1H F@6 compacted };
mul(16)         g81<1>F         g7<8,8,1>F      0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g7<1>F          g9<8,8,1>F      0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g9<1>F          g51<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g51<1>F         g53<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g53<1>F         g77<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g77<1>F         g79<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g79<1>F         g81<1,1,0>F     g83<1,1,0>F     { align1 1H A@2 compacted };
mul(16)         g81<1>F         g7<1,1,0>F      g85<1,1,0>F     { align1 1H A@3 compacted };
mul(16)         g7<1>F          g9<1,1,0>F      g87<1,1,0>F     { align1 1H A@1 compacted };
mul(16)         g9<1>F          g51<1,1,0>F     g83<1,1,0>F     { align1 1H F@6 compacted };
mul(16)         g51<1>F         g53<1,1,0>F     g85<1,1,0>F     { align1 1H F@6 compacted };
mul(16)         g53<1>F         g77<1,1,0>F     g87<1,1,0>F     { align1 1H F@6 compacted };
rndd(16)        g77<1>F         g79<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g79<1>F         g81<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g81<1>F         g7<1,1,0>F                      { align1 1H F@6 compacted };
rndd(16)        g7<1>F          -g9<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g9<1>F          -g51<1,1,0>F                    { align1 1H F@6 compacted };
rndd(16)        g51<1>F         -g53<1,1,0>F                    { align1 1H F@6 compacted };
sel.ge(16)      g53<1>F         g77<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g77<1>F         g79<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g79<1>F         g81<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g81<1>F         -g7<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g7<1>F          -g9<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g9<1>F          -g51<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.l(16)       g51<1>F         g53<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g53<1>F         g77<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g77<1>F         g79<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g79<1>F         g81<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g81<1>F         g7<8,8,1>F      0x437f0000F  /* 255F */ { align1 1H F@6 };
mov(16)         g89<4>UB        g51<8,8,1>F                     { align1 1H F@5 };
sel.l(16)       g7<1>F          g9<8,8,1>F      0x437f0000F  /* 255F */ { align1 1H F@6 };
mov(16)         g91<4>UB        g53<8,8,1>F                     { align1 1H F@5 };
mov(16)         g93<4>UB        g77<8,8,1>F                     { align1 1H F@4 };
mov(16)         g95<4>UB        g79<8,8,1>F                     { align1 1H F@3 };
mov(16)         g97<4>UB        g81<8,8,1>F                     { align1 1H F@2 };
mov(16)         g77<1>UW        g89<32,8,4>UB                   { align1 1H I@5 };
mov(16)         g99<4>UB        g7<8,8,1>F                      { align1 1H F@1 };
mov(16)         g54<1>UW        g91<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g53<1>UW        g93<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g80<1>UW        g95<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g79<1>UW        g97<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g78<1>UW        g99<32,8,4>UB                   { align1 1H I@5 };
else(16)        JIP:  LABEL9          UIP:  LABEL9              { align1 1H };

LABEL10:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g53<1>UW        0x0080UW                        { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g54<1>UW        0x0080UW                        { align1 1H I@7 };
mov(16)         g77<1>UW        0x0080UW                        { align1 1H I@7 };
mov(16)         g78<1>UW        0x0000UW                        { align1 1H I@5 };
mov(16)         g79<1>UW        0x0000UW                        { align1 1H I@7 };
mov(16)         g80<1>UW        0x0000UW                        { align1 1H I@7 };

LABEL9:
endif(16)       JIP:  LABEL8                                    { align1 1H };
add(16)         g51<1>D         g43<1,1,0>D     g55<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g88<2>UB        g53<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g89<2>UB        g54<16,16,1>UW                  { align1 1H A@2 };
mov(16)         g90<2>UB        g77<16,16,1>UW                  { align1 1H A@2 };
mov(16)         g117<2>UB       g78<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g118<2>UB       g79<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g119<2>UB       g80<16,16,1>UW                  { align1 1H I@7 };
cmp.l.f0.0(16)  g123<1>UD       g51<1,1,0>UD    g43<1,1,0>UD    { align1 1H I@7 compacted };
add(16)         g125<1>D        g51<1,1,0>D     28D             { align1 1H compacted };
mov(16)         g81<1>UD        g90<16,8,2>UB                   { align1 1H I@6 };
add(16)         g53<1>D         -g123<1,1,0>D   g67<1,1,0>D     { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g77<1>UD        g125<1,1,0>UD   g51<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g7<2>UD         g125<4,4,1>UD                   { align1 1Q $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $5.src };
mov(8)          g9<2>UD         g126<4,4,1>UD                   { align1 2Q F@1 };
add(16)         g79<1>D         -g77<1,1,0>D    g53<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g7.1<2>UD       g79<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g9.1<2>UD       g80<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g7UD            g81UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };
add(16)         g80<1>D         g51<1,1,0>D     40D             { align1 1H $6.src compacted };
mov(16)         g86<1>UD        g89<16,8,2>UB                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g82<1>UD        g80<1,1,0>UD    g51<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g7<2>UD         g80<4,4,1>UD                    { align1 1Q $6.src };
mov(8)          g9<2>UD         g81<4,4,1>UD                    { align1 2Q $6.src };
add(16)         g84<1>D         -g82<1,1,0>D    g53<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g7.1<2>UD       g84<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g9.1<2>UD       g85<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g7UD            g86UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $7 };
add(16)         g85<1>D         g51<1,1,0>D     52D             { align1 1H $7.src compacted };
mov(16)         g91<1>UD        g88<16,8,2>UB                   { align1 1H F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(16)  g87<1>UD        g85<1,1,0>UD    g51<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g7<2>UD         g85<4,4,1>UD                    { align1 1Q $7.src };
mov(8)          g9<2>UD         g86<4,4,1>UD                    { align1 2Q $7.src };
add(16)         g89<1>D         -g87<1,1,0>D    g53<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g7.1<2>UD       g89<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g9.1<2>UD       g90<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g7UD            g91UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };
add(16)         g90<1>D         g51<1,1,0>D     34D             { align1 1H $8.src compacted };
mov(16)         g96<1>UD        g119<16,8,2>UB                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
cmp.l.f0.0(16)  g92<1>UD        g90<1,1,0>UD    g51<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g7<2>UD         g90<4,4,1>UD                    { align1 1Q $8.src };
mov(8)          g9<2>UD         g91<4,4,1>UD                    { align1 2Q $8.src };
add(16)         g94<1>D         -g92<1,1,0>D    g53<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g7.1<2>UD       g94<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g9.1<2>UD       g95<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g7UD            g96UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $9 };
add(16)         g95<1>D         g51<1,1,0>D     46D             { align1 1H $9.src compacted };
mov(16)         g101<1>UD       g118<16,8,2>UB                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
cmp.l.f0.0(16)  g97<1>UD        g95<1,1,0>UD    g51<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g7<2>UD         g95<4,4,1>UD                    { align1 1Q $9.src };
mov(8)          g9<2>UD         g96<4,4,1>UD                    { align1 2Q $9.src };
add(16)         g99<1>D         -g97<1,1,0>D    g53<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g7.1<2>UD       g99<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g9.1<2>UD       g100<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g7UD            g101UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $10 };
add(16)         g100<1>D        g51<1,1,0>D     58D             { align1 1H $10.src compacted };
mov(16)         g106<1>UD       g117<16,8,2>UB                  { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
cmp.l.f0.0(16)  g102<1>UD       g100<1,1,0>UD   g51<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g7<2>UD         g100<4,4,1>UD                   { align1 1Q $10.src };
mov(8)          g9<2>UD         g101<4,4,1>UD                   { align1 2Q $10.src };
add(16)         g104<1>D        -g102<1,1,0>D   g53<1,1,0>D     { align1 1H A@3 compacted };
mov(8)          g7.1<2>UD       g104<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g9.1<2>UD       g105<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g7UD            g106UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $11 };
cmp.nz.f0.0(16) null<1>D        g75<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(16)         g107<1>D        g51<1,1,0>D     22D             { align1 1H F@7 compacted };
(-f0.0) sel(16) g105<1>UD       g1<0,1,0>UD     0x00000002UD    { align1 1H $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(8)          g7<2>UD         g107<4,4,1>UD                   { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $11.src };
mov(8)          g9<2>UD         g108<4,4,1>UD                   { align1 2Q I@3 };
mov(16)         g91<4>UB        g105<8,8,1>UD                   { align1 1H I@3 };
cmp.l.f0.0(16)  g109<1>UD       g107<1,1,0>UD   g51<1,1,0>UD    { align1 1H F@7 compacted };
mov(16)         g107<1>UD       g91<32,8,4>UB                   { align1 1H I@2 };
add(16)         g111<1>D        -g109<1,1,0>D   g53<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g7.1<2>UD       g111<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g9.1<2>UD       g112<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g7UD            g107UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };

LABEL8:
endif(16)       JIP:  LABEL11                                   { align1 1H };

LABEL11:
else(16)        JIP:  LABEL6          UIP:  LABEL6              { align1 1H };

LABEL7:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g112<1>UD       g19.3<32,8,4>UB                 { align1 1H };
cmp.l.f0.0(16)  null<1>D        g57<8,8,1>D     g59<8,8,1>D     { align1 1H };
(+f0.0) sel(16) g81<1>UD        g112<1,1,0>UD   0x00000000UD    { align1 1H A@1 compacted };
mov(16)         g113<1>UD       g81<32,8,4>UB                   { align1 1H I@1 };
cmp.l.f0.0(16)  null<1>UD       g55<8,8,1>UD    g59<8,8,1>UD    { align1 1H };
mov(16)         a0<1>UW         0x0e20UW                        { align1 WE_all 1H I@2 };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0e20UW        { align1 1H A@1 };
mov(16)         g115<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
or(16)          g117<1>UD       g81<1,1,0>UD    g115<1,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g119<1>UD       g117<32,8,4>UB                  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         a0<1>UW         0x0ee0UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ee0UW        { align1 1H A@1 };
mov(16)         g121<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
or(16)          g123<1>UD       g119<1,1,0>UD   g121<1,1,0>UD   { align1 1H I@1 compacted };
mov(16)         g125<1>UD       g123<32,8,4>UB                  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         a0<1>UW         0x0fa0UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0fa0UW        { align1 1H A@1 };
mov(16)         g7<1>UD         g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
or(16)          g9<1>UD         g123<1,1,0>UD   g7<1,1,0>UD     { align1 1H A@1 compacted };
mov(16)         g51<4>UB        g9<0,1,0>UD                     { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL12             { align1 1H };
mov(16)         g19<1>UD        g9<0,1,0>UB                     { align1 1H };
cmp.z.f0.0(16)  g53<1>D         g19<1,1,0>D     0D              { align1 1H I@1 compacted };
cmp.z.f0.0(16)  null<1>D        g81<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g75<1>UD        g53<8,8,1>UD    0xffffffffUD    { align1 1H I@2 };
cmp.nz.f0.0(16) null<1>D        g75<8,8,1>D     0D              { align1 1H I@1 };
(+f0.0) sel(16) g75<1>UD        g21<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g77<1>UD        g23<8,8,1>UD    0xff800000UD    { align1 1H F@3 };
(+f0.0) sel(16) g79<1>UD        g25<8,8,1>UD    0xff800000UD    { align1 1H F@2 };
(+f0.0) sel(16) g53<1>UD        g45<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g45<1>UD        g47<8,8,1>UD    0x7f800000UD    { align1 1H I@1 };
(+f0.0) sel(16) g47<1>UD        g49<8,8,1>UD    0x7f800000UD    { align1 1H I@1 };
else(16)        JIP:  LABEL12         UIP:  LABEL12             { align1 1H };

LABEL13:
mov(16)         g47<1>UD        0x7f800000UD                    { align1 1H I@2 };
mov(16)         g45<1>UD        0x7f800000UD                    { align1 1H I@4 };
mov(16)         g53<1>UD        0x7f800000UD                    { align1 1H I@6 };
mov(16)         g79<1>UD        0xff800000UD                    { align1 1H A@2 };
mov(16)         g77<1>UD        0xff800000UD                    { align1 1H A@3 };
mov(16)         g75<1>UD        0xff800000UD                    { align1 1H };

LABEL12:
endif(16)       JIP:  LABEL6                                    { align1 1H };
mov(16)         a0<1>UW         0x06a0UW                        { align1 WE_all 1H A@5 };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x06a0UW        { align1 1H A@1 };
mov(16)         g83<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x05a0UW                        { align1 WE_all 1H A@5 };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x05a0UW        { align1 1H A@1 };
mov(16)         g85<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x05e0UW                        { align1 WE_all 1H A@4 };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x05e0UW        { align1 1H A@1 };
mov(16)         g87<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0960UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0960UW        { align1 1H A@1 };
mov(16)         g90<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x09a0UW                        { align1 WE_all 1H A@3 };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x09a0UW        { align1 1H A@1 };
mov(16)         g92<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@7 };
mov(16)         a0<1>UW         0x09e0UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x09e0UW        { align1 1H A@1 };
mov(16)         g105<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g55<8,8,1>UD    0x00000006UD    { align1 1H };
sel.l(16)       g95<1>F         g53<1,1,0>F     g83<1,1,0>F     { align1 1H A@5 compacted };
sel.l(16)       g97<1>F         g45<1,1,0>F     g85<1,1,0>F     { align1 1H A@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.l(16)       g99<1>F         g47<1,1,0>F     g87<1,1,0>F     { align1 1H I@5 compacted };
sel.ge(16)      g83<1>F         g75<1,1,0>F     g90<1,1,0>F     { align1 1H I@4 compacted };
sel.ge(16)      g85<1>F         g77<1,1,0>F     g92<1,1,0>F     { align1 1H I@3 compacted };
sel.ge(16)      g87<1>F         g79<1,1,0>F     g105<1,1,0>F    { align1 1H I@2 compacted };
mov(16)         a0<1>UW         0x0be0UW                        { align1 WE_all 1H F@6 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0be0UW        { align1 1H A@1 };
mov(16)         g101<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0c20UW                        { align1 WE_all 1H F@5 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0c20UW        { align1 1H A@1 };
mov(16)         g103<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0c60UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0c60UW        { align1 1H A@1 };
mov(16)         g105<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0a60UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a60UW        { align1 1H A@1 };
mov(16)         g89<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0aa0UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0aa0UW        { align1 1H A@1 };
mov(16)         g91<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0ae0UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ae0UW        { align1 1H A@1 };
mov(16)         g93<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
sel.l(16)       g107<1>F        g95<1,1,0>F     g101<1,1,0>F    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
sel.l(16)       g109<1>F        g97<1,1,0>F     g103<1,1,0>F    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
sel.l(16)       g111<1>F        g99<1,1,0>F     g105<1,1,0>F    { align1 1H compacted };
sel.ge(16)      g119<1>F        g83<1,1,0>F     g89<1,1,0>F     { align1 1H I@3 compacted };
sel.ge(16)      g121<1>F        g85<1,1,0>F     g91<1,1,0>F     { align1 1H I@2 compacted };
sel.ge(16)      g123<1>F        g87<1,1,0>F     g93<1,1,0>F     { align1 1H I@1 compacted };
mov(16)         a0<1>UW         0x0d60UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0d60UW        { align1 1H A@1 };
mov(16)         g89<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0da0UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0da0UW        { align1 1H A@1 };
mov(16)         g104<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0de0UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0de0UW        { align1 1H A@1 };
mov(16)         g87<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0ee0UW                        { align1 WE_all 1H A@2 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ee0UW        { align1 1H A@1 };
mov(16)         g85<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0f20UW                        { align1 WE_all 1H A@2 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0f20UW        { align1 1H A@1 };
mov(16)         g83<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0f60UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0f60UW        { align1 1H A@1 };
mov(16)         g71<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g113<1>F        g107<1,1,0>F    g89<1,1,0>F     { align1 1H I@6 compacted };
sel.l(16)       g115<1>F        g109<1,1,0>F    g104<1,1,0>F    { align1 1H I@5 compacted };
sel.l(16)       g117<1>F        g111<1,1,0>F    g87<1,1,0>F     { align1 1H I@4 compacted };
sel.ge(16)      g125<1>F        g119<1,1,0>F    g85<1,1,0>F     { align1 1H I@3 compacted };
sel.ge(16)      g49<1>F         g121<1,1,0>F    g83<1,1,0>F     { align1 1H I@2 compacted };
sel.ge(16)      g69<1>F         g123<1,1,0>F    g71<1,1,0>F     { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL14         UIP:  LABEL14             { align1 1H };
sel.ge(16)      g93<1>F         (abs)g113<0,1,0>F (abs)g125<0,1,0>F { align1 1H F@3 compacted };
sel.ge(16)      g97<1>F         (abs)g115<0,1,0>F (abs)g49<0,1,0>F { align1 1H F@3 compacted };
sel.ge(16)      g99<1>F         (abs)g117<0,1,0>F (abs)g69<0,1,0>F { align1 1H F@3 compacted };
add(16)         g95<1>D         g43<1,1,0>D     16D             { align1 1H compacted };
sel.ge(16)      g101<1>F        g97<1,1,0>F     g99<1,1,0>F     { align1 1H F@1 compacted };
mov(16)         g92<2>B         1W                              { align1 1H };
mov(8)          g7<2>UD         g95<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g9<2>UD         g96<4,4,1>UD                    { align1 2Q I@3 };
sel.ge(16)      g103<1>F        g93<1,1,0>F     g101<1,1,0>F    { align1 1H F@1 compacted };
mov(16)         g97<1>UD        g92<16,8,2>UB                   { align1 1H A@2 };
mul(16)         g106<1>F        g103<1,1,0>F    0x34000000F  /* 1.19209e-07F */ { align1 1H F@1 compacted };
add(16)         g19<1>F         g113<0,1,0>F    -g106<1,1,0>F   { align1 1H F@1 compacted };
add(16)         g21<1>F         g115<0,1,0>F    -g106<1,1,0>F   { align1 1H compacted };
add(16)         g23<1>F         g117<0,1,0>F    -g106<1,1,0>F   { align1 1H compacted };
add(16)         g104<1>F        g125<0,1,0>F    g106<1,1,0>F    { align1 1H compacted };
add(16)         g108<1>F        g49<0,1,0>F     g106<1,1,0>F    { align1 1H compacted };
add(16)         g110<1>F        g69<0,1,0>F     g106<1,1,0>F    { align1 1H I@7 compacted };
add(16)         g112<1>F        g104<1,1,0>F    -g19<1,1,0>F    { align1 1H A@3 compacted };
add(16)         g114<1>F        g108<1,1,0>F    -g21<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g116<1>F        g110<1,1,0>F    -g23<1,1,0>F    { align1 1H F@3 compacted };
mul(16)         g49<1>F         g112<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H F@3 };
mul(16)         g69<1>F         g114<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H F@3 };
mul(16)         g71<1>F         g116<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H F@3 };
and(16)         g73<1>UD        g49<8,8,1>UD    0x007fffffUD    { align1 1H F@3 };
and(16)         g89<1>UD        g49<8,8,1>UD    0x7f800000UD    { align1 1H };
and(16)         g83<1>UD        g69<8,8,1>UD    0x007fffffUD    { align1 1H F@2 };
and(16)         g91<1>UD        g69<8,8,1>UD    0x7f800000UD    { align1 1H };
and(16)         g85<1>UD        g71<8,8,1>UD    0x007fffffUD    { align1 1H F@1 };
and(16)         g93<1>UD        g71<8,8,1>UD    0x7f800000UD    { align1 1H };
add(16)         g87<1>D         g73<8,8,1>D     1056964608D     { align1 1H I@6 };
asr(16)         g73<1>D         g89<8,8,1>D     0x00000017UD    { align1 1H I@6 };
add(16)         g89<1>D         g83<8,8,1>D     1056964608D     { align1 1H I@6 };
asr(16)         g83<1>D         g91<8,8,1>D     0x00000017UD    { align1 1H I@6 };
add(16)         g91<1>D         g85<8,8,1>D     1056964608D     { align1 1H I@6 };
cmp.z.f0.0(16)  null<1>F        g87<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@5 compacted };
asr(16)         g85<1>D         g93<8,8,1>D     0x00000017UD    { align1 1H I@6 };
(-f0.0) sel(16) g93<1>UD        g87<8,8,1>UD    0x3f000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
bfi2(16)        g87<1>UD        g1.1<0,1,0>UD   g93<8,8,1>UD    g49<1,1,1>UD { align1 1H };
cmp.z.f0.0(16)  null<1>F        g89<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@6 compacted };
(-f0.0) sel(16) g49<1>UD        g89<8,8,1>UD    0x3f000000UD    { align1 1H };
bfi2(16)        g89<1>UD        g1.1<0,1,0>UD   g49<8,8,1>UD    g69<1,1,1>UD { align1 1H A@1 };
cmp.z.f0.0(16)  null<1>F        g91<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@6 compacted };
(-f0.0) sel(16) g49<1>UD        g91<8,8,1>UD    0x3f000000UD    { align1 1H };
bfi2(16)        g69<1>UD        g1.1<0,1,0>UD   g49<8,8,1>UD    g71<1,1,1>UD { align1 1H I@1 };
cmp.g.f0.0(16)  g117<1>F        g87<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@5 };
cmp.g.f0.0(16)  g119<1>F        g89<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@3 };
cmp.g.f0.0(16)  g121<1>F        g69<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@1 };
cmp.l.f0.0(16)  g49<1>UD        g95<1,1,0>UD    g43<1,1,0>UD    { align1 1H compacted };
add3(16)        g107<1>D        65410W          g73<8,8,1>D     -g117<1,1,1>D { align1 1H F@3 };
add3(16)        g123<1>D        65410W          g83<8,8,1>D     -g119<1,1,1>D { align1 1H F@2 };
add3(16)        g125<1>D        65410W          g85<8,8,1>D     -g121<1,1,1>D { align1 1H A@1 };
add(16)         g69<1>D         -g49<1,1,0>D    g67<1,1,0>D     { align1 1H A@1 compacted };
mov(8)          g7.1<2>UD       g69<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g9.1<2>UD       g70<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g7UD            g97UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $12 };
mov(16)         g25<1>UD        g17<8,8,1>UD                    { align1 1H $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g3UD            g19UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $13 };
add(16)         g70<1>D         g43<1,1,0>D     18D             { align1 1H compacted };
mov(16)         g93<4>UB        g107<8,8,1>UD                   { align1 1H I@7 };
cmp.l.f0.0(16)  g72<1>UD        g70<1,1,0>UD    g43<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g88<2>UD        g70<4,4,1>UD                    { align1 1Q F@2 };
mov(8)          g90<2>UD        g71<4,4,1>UD                    { align1 2Q F@2 };
mov(16)         g95<4>UB        g123<8,8,1>UD                   { align1 1H };
mov(16)         g97<4>UB        g125<8,8,1>UD                   { align1 1H $12.src };
mov(16)         g109<4>UB       g93<32,8,4>UB                   { align1 1H A@6 };
add(16)         g83<1>D         -g72<1,1,0>D    g67<1,1,0>D     { align1 1H I@6 compacted };
mov(16)         g109.1<4>UB     g95<32,8,4>UB                   { align1 1H I@2 };
mov(8)          g88.1<2>UD      g83<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g90.1<2>UD      g84<4,4,1>UD                    { align1 2Q I@3 };
mov(16)         g109.2<4>UB     g97<32,8,4>UB                   { align1 1H I@3 };
mov(16)         g109.3<4>UB     g51<32,8,4>UB                   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g88UD           g109UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $14 };
cmp.l.f0.0(16)  null<1>UD       g55<8,8,1>UD    g59<8,8,1>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL16         UIP:  LABEL15             { align1 1H };
sel.ge(16)      g84<1>F         (abs)g53<1,1,0>F (abs)g75<1,1,0>F { align1 1H I@5 compacted };
sel.ge(16)      g86<1>F         (abs)g45<1,1,0>F (abs)g77<1,1,0>F { align1 1H compacted };
sel.ge(16)      g88<1>F         (abs)g47<1,1,0>F (abs)g79<1,1,0>F { align1 1H $14.src compacted };
shl(16)         g12<1>D         -g107<8,8,1>D   0x00000017UD    { align1 1H $1.src };
shl(16)         g14<1>D         -g123<8,8,1>D   0x00000017UD    { align1 1H $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shl(16)         g16<1>D         -g125<8,8,1>D   0x00000017UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g81<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sel.ge(16)      g90<1>F         g86<1,1,0>F     g88<1,1,0>F     { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(16)         g108<1>D        g12<8,8,1>D     1132462080D     { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(16)         g110<1>D        g14<8,8,1>D     1132462080D     { align1 1H I@4 };
add(16)         g112<1>D        g16<8,8,1>D     1132462080D     { align1 1H I@4 };
sel.ge(16)      g92<1>F         g84<1,1,0>F     g90<1,1,0>F     { align1 1H F@1 compacted };
mul(16)         g94<1>F         g92<1,1,0>F     0x34000000F  /* 1.19209e-07F */ { align1 1H F@1 compacted };
add(16)         g96<1>F         g53<1,1,0>F     -g94<1,1,0>F    { align1 1H F@1 compacted };
add(16)         g98<1>F         g45<1,1,0>F     -g94<1,1,0>F    { align1 1H compacted };
add(16)         g100<1>F        g47<1,1,0>F     -g94<1,1,0>F    { align1 1H compacted };
add(16)         g102<1>F        g75<1,1,0>F     g94<1,1,0>F     { align1 1H compacted };
add(16)         g104<1>F        g77<1,1,0>F     g94<1,1,0>F     { align1 1H compacted };
add(16)         g106<1>F        g79<1,1,0>F     g94<1,1,0>F     { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g114<1>F        g96<1,1,0>F     -g19<1,1,0>F    { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g116<1>F        g98<1,1,0>F     -g21<1,1,0>F    { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g118<1>F        g100<1,1,0>F    -g23<1,1,0>F    { align1 1H F@6 compacted };
add(16)         g72<1>F         g102<1,1,0>F    -g19<1,1,0>F    { align1 1H F@6 compacted };
add(16)         g74<1>F         g104<1,1,0>F    -g21<1,1,0>F    { align1 1H F@6 compacted };
add(16)         g76<1>F         g106<1,1,0>F    -g23<1,1,0>F    { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mul(16)         g7<1>F          g114<8,8,1>F    0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mul(16)         g9<1>F          g116<8,8,1>F    0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mul(16)         g11<1>F         g118<8,8,1>F    0x3f7ffffeF  /* 1F */ { align1 1H A@3 };
mul(16)         g78<1>F         g72<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g80<1>F         g74<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H A@4 };
mul(16)         g82<1>F         g76<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H A@4 };
mul(16)         g17<1>F         g7<1,1,0>F      g108<1,1,0>F    { align1 1H A@1 compacted };
mul(16)         g19<1>F         g9<1,1,0>F      g110<1,1,0>F    { align1 1H A@2 compacted };
mul(16)         g21<1>F         g11<1,1,0>F     g112<1,1,0>F    { align1 1H A@1 compacted };
mul(16)         g84<1>F         g78<1,1,0>F     g108<1,1,0>F    { align1 1H F@6 compacted };
mul(16)         g86<1>F         g80<1,1,0>F     g110<1,1,0>F    { align1 1H F@6 compacted };
mul(16)         g88<1>F         g82<1,1,0>F     g112<1,1,0>F    { align1 1H F@6 compacted };
rndd(16)        g23<1>F         g17<1,1,0>F                     { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
rndd(16)        g25<1>F         g19<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g45<1>F         g21<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g90<1>F         -g84<1,1,0>F                    { align1 1H F@6 compacted };
rndd(16)        g92<1>F         -g86<1,1,0>F                    { align1 1H F@6 compacted };
rndd(16)        g94<1>F         -g88<1,1,0>F                    { align1 1H F@6 compacted };
sel.ge(16)      g47<1>F         g23<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g49<1>F         g25<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g51<1>F         g45<1,1,0>F     0x0F  /* 0F */  { align1 1H A@6 compacted };
sel.ge(16)      g96<1>F         -g90<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g98<1>F         -g92<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g100<1>F        -g94<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.l(16)       g53<1>F         g47<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g69<1>F         g49<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g71<1>F         g51<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g102<1>F        g96<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g104<1>F        g98<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g106<1>F        g100<8,8,1>F    0x437f0000F  /* 255F */ { align1 1H F@6 };
mov(16)         g120<4>UB       g53<8,8,1>F                     { align1 1H F@6 };
mov(16)         g122<4>UB       g69<8,8,1>F                     { align1 1H A@5 };
mov(16)         g124<4>UB       g71<8,8,1>F                     { align1 1H A@4 };
mov(16)         g126<4>UB       g102<8,8,1>F                    { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g3<4>UB         g104<8,8,1>F                    { align1 1H F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g5<4>UB         g106<8,8,1>F                    { align1 1H F@1 };
mov(16)         g110<1>UW       g120<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g111<1>UW       g122<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g112<1>UW       g124<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g107<1>UW       g126<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g108<1>UW       g3<32,8,4>UB                    { align1 1H I@6 };
mov(16)         g109<1>UW       g5<32,8,4>UB                    { align1 1H I@6 };
(-f0.0) sel(16) g83<1>UW        g110<16,16,1>UW 0x0000UW        { align1 1H I@6 };
(-f0.0) sel(16) g82<1>UW        g111<16,16,1>UW 0x0000UW        { align1 1H I@6 };
(-f0.0) sel(16) g81<1>UW        g112<16,16,1>UW 0x0000UW        { align1 1H I@6 };
(-f0.0) sel(16) g86<1>UW        g107<16,16,1>UW 0x0000UW        { align1 1H I@6 };
(-f0.0) sel(16) g85<1>UW        g108<16,16,1>UW 0x0000UW        { align1 1H I@6 };
(-f0.0) sel(16) g84<1>UW        g109<16,16,1>UW 0x0000UW        { align1 1H I@6 };
else(16)        JIP:  LABEL15         UIP:  LABEL15             { align1 1H };

LABEL16:
mov(16)         g81<1>UW        0x0080UW                        { align1 1H I@5 };
mov(16)         g82<1>UW        0x0080UW                        { align1 1H I@7 };
mov(16)         g83<1>UW        0x0080UW                        { align1 1H I@7 };
mov(16)         g84<1>UW        0x0000UW                        { align1 1H I@5 };
mov(16)         g85<1>UW        0x0000UW                        { align1 1H I@7 };
mov(16)         g86<1>UW        0x0000UW                        { align1 1H I@7 };

LABEL15:
endif(16)       JIP:  LABEL14                                   { align1 1H };
add(16)         g113<1>D        g43<1,1,0>D     g55<1,1,0>D     { align1 1H F@7 compacted };
mov(16)         g98<2>UB        g81<16,16,1>UW                  { align1 1H A@2 };
mov(16)         g99<2>UB        g82<16,16,1>UW                  { align1 1H A@2 };
mov(16)         g100<2>UB       g83<16,16,1>UW                  { align1 1H A@1 };
mov(16)         g101<2>UB       g84<16,16,1>UW                  { align1 1H A@1 };
mov(16)         g102<2>UB       g85<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g103<2>UB       g86<16,16,1>UW                  { align1 1H I@7 };
cmp.l.f0.0(16)  g115<1>UD       g113<1,1,0>UD   g43<1,1,0>UD    { align1 1H A@7 compacted };
add(16)         g119<1>D        g113<1,1,0>D    28D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         g110<1>UD       g100<16,8,2>UB                  { align1 1H A@6 };
add(16)         g117<1>D        -g115<1,1,0>D   g67<1,1,0>D     { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g121<1>UD       g119<1,1,0>UD   g113<1,1,0>UD   { align1 1H I@3 compacted };
mov(8)          g3<2>UD         g119<4,4,1>UD                   { align1 1Q $13.src };
mov(8)          g5<2>UD         g120<4,4,1>UD                   { align1 2Q $13.src };
add(16)         g123<1>D        -g121<1,1,0>D   g117<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g3.1<2>UD       g123<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g5.1<2>UD       g124<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g3UD            g110UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
add(16)         g4<1>D          g113<1,1,0>D    40D             { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g111<1>UD       g99<16,8,2>UB                   { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
cmp.l.f0.0(16)  g6<1>UD         g4<1,1,0>UD     g113<1,1,0>UD   { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g10<2>UD        g4<4,4,1>UD                     { align1 1Q $12.src };
mov(8)          g12<2>UD        g5<4,4,1>UD                     { align1 2Q $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g8<1>D          -g6<1,1,0>D     g117<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g10.1<2>UD      g8<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g12.1<2>UD      g9<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g10UD           g111UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
add(16)         g11<1>D         g113<1,1,0>D    52D             { align1 1H $1.src compacted };
mov(16)         g115<1>UD       g98<16,8,2>UB                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g13<1>UD        g11<1,1,0>UD    g113<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g17<2>UD        g11<4,4,1>UD                    { align1 1Q };
mov(8)          g19<2>UD        g12<4,4,1>UD                    { align1 2Q $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g15<1>D         -g13<1,1,0>D    g117<1,1,0>D    { align1 1H compacted };
mov(8)          g17.1<2>UD      g15<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g19.1<2>UD      g16<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g17UD           g115UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
add(16)         g18<1>D         g113<1,1,0>D    34D             { align1 1H $1.src compacted };
mov(16)         g119<1>UD       g103<16,8,2>UB                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
cmp.l.f0.0(16)  g20<1>UD        g18<1,1,0>UD    g113<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g45<2>UD        g18<4,4,1>UD                    { align1 1Q F@7 };
mov(8)          g47<2>UD        g19<4,4,1>UD                    { align1 2Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g22<1>D         -g20<1,1,0>D    g117<1,1,0>D    { align1 1H A@3 compacted };
mov(8)          g45.1<2>UD      g22<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g47.1<2>UD      g23<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g45UD           g119UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $3 };
add(16)         g46<1>D         g113<1,1,0>D    46D             { align1 1H $3.src compacted };
mov(16)         g120<1>UD       g102<16,8,2>UB                  { align1 1H $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g48<1>UD        g46<1,1,0>UD    g113<1,1,0>UD   { align1 1H A@2 compacted };
mov(8)          g52<2>UD        g46<4,4,1>UD                    { align1 1Q F@4 };
mov(8)          g54<2>UD        g47<4,4,1>UD                    { align1 2Q };
add(16)         g50<1>D         -g48<1,1,0>D    g117<1,1,0>D    { align1 1H A@3 compacted };
mov(8)          g52.1<2>UD      g50<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g54.1<2>UD      g51<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g52UD           g120UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $3 };
add(16)         g53<1>D         g113<1,1,0>D    58D             { align1 1H $3.src compacted };
mov(16)         g121<1>UD       g101<16,8,2>UB                  { align1 1H $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g55<1>UD        g53<1,1,0>UD    g113<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g67<2>UD        g53<4,4,1>UD                    { align1 1Q };
mov(8)          g69<2>UD        g54<4,4,1>UD                    { align1 2Q };
add(16)         g43<1>D         -g55<1,1,0>D    g117<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g67.1<2>UD      g43<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g69.1<2>UD      g44<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g67UD           g121UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $3 };
add(16)         g68<1>D         g113<1,1,0>D    22D             { align1 1H $3.src compacted };
mov(16)         g104<2>B        2W                              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g70<1>UD        g68<1,1,0>UD    g113<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g74<2>UD        g68<4,4,1>UD                    { align1 1Q };
mov(8)          g76<2>UD        g69<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g122<1>UD       g104<16,8,2>UB                  { align1 1H I@4 };
add(16)         g72<1>D         -g70<1,1,0>D    g117<1,1,0>D    { align1 1H I@4 compacted };
mov(8)          g74.1<2>UD      g72<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g76.1<2>UD      g73<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g74UD           g122UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $3 };

LABEL14:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
endif(16)       JIP:  LABEL17                                   { align1 1H };

LABEL17:
cmp.l.f0.0(16)  null<1>D        g57<8,8,1>D     g59<8,8,1>D     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL18         UIP:  LABEL18             { align1 1H };
asr(16)         g75<1>D         g59<8,8,1>D     0x0000001fUD    { align1 1H $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
shl(16)         g77<1>D         g57<8,8,1>D     0x00000005UD    { align1 1H F@3 };
shr(16)         g79<1>UD        g57<1,1,0>UD    0x0000001bUD    { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(16)         g81<1>D         g2.4<0,1,0>D    g77<1,1,0>D     { align1 1H A@1 compacted };
cmp.l.f0.0(16)  g83<1>UD        g81<1,1,0>UD    g2.4<0,1,0>UD   { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(8)          g87<2>UD        g81<4,4,1>UD                    { align1 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $14.src };
mov(8)          g89<2>UD        g82<4,4,1>UD                    { align1 2Q F@1 };
add3(16)        g85<1>D         g2.5<0,1,0>D    g79<8,8,1>D     -g83<1,1,1>D { align1 1H A@3 };
mov(8)          g87.1<2>UD      g85<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g89.1<2>UD      g86<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g87UD           g27UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $13 };
add(16)         g88<1>D         g81<1,1,0>D     16D             { align1 1H $13.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
cmp.l.f0.0(16)  g90<1>UD        g88<1,1,0>UD    g81<1,1,0>UD    { align1 1H A@1 compacted };
mov(8)          g94<2>UD        g88<4,4,1>UD                    { align1 1Q F@4 };
mov(8)          g96<2>UD        g89<4,4,1>UD                    { align1 2Q F@3 };
add(16)         g92<1>D         -g90<1,1,0>D    g85<1,1,0>D     { align1 1H A@3 compacted };
mov(8)          g94.1<2>UD      g92<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g96.1<2>UD      g93<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g94UD           g35UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $15 };
shl(16)         g95<1>D         g57<8,8,1>D     0x00000002UD    { align1 1H $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
shr(16)         g97<1>UD        g57<1,1,0>UD    0x0000001eUD    { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g99<1>D         g2.6<0,1,0>D    g95<1,1,0>D     { align1 1H A@1 compacted };
cmp.l.f0.0(16)  g101<1>UD       g99<1,1,0>UD    g2.6<0,1,0>UD   { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
mov(8)          g105<2>UD       g99<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N F@6 };
mov(8)          g107<2>UD       g100<4,4,1>UD                   { align1 2Q };
add3(16)        g103<1>D        g2.7<0,1,0>D    g97<8,8,1>D     -g101<1,1,1>D { align1 1H A@3 };
mov(8)          g105.1<2>UD     g103<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g107.1<2>UD     g104<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g105UD          g57UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };
shr(16)         g3<1>UD         g65<0,1,0>UD    0x00000006UD    { align1 1H $1.src compacted };
add(16)         g106<1>D        g59<1,1,0>D     g57<1,1,0>D     { align1 1H $0.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.l.f0.0(16)  g108<1>UD       g106<1,1,0>UD   g59<1,1,0>UD    { align1 1H $0.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
shl(16)         g112<1>D        g106<8,8,1>D    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shr(16)         g115<1>UD       g106<1,1,0>UD   0x0000001eUD    { align1 1H F@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
add(16)         g110<1>D        -g108<1,1,0>D   g75<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g118<1>D        g2.6<0,1,0>D    g112<1,1,0>D    { align1 1H A@3 compacted };
shl(16)         g113<1>D        g110<8,8,1>D    0x00000002UD    { align1 1H A@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g120<1>UD       g118<1,1,0>UD   g2.6<0,1,0>UD   { align1 1H A@2 compacted };
mov(8)          g124<2>UD       g118<4,4,1>UD                   { align1 1Q F@1 };
mov(8)          g126<2>UD       g119<4,4,1>UD                   { align1 2Q F@3 };
or(16)          g117<1>UD       g113<1,1,0>UD   g115<1,1,0>UD   { align1 1H A@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add3(16)        g122<1>D        g2.7<0,1,0>D    g117<8,8,1>D    -g120<1,1,1>D { align1 1H A@1 };
mov(8)          g124.1<2>UD     g122<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g126.1<2>UD     g123<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g124UD          g3UD            0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
and.nz.f0.0(16) null<1>UD       g61<8,8,1>UD    g63<8,8,1>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL19         UIP:  LABEL19             { align1 1H };
shl(16)         g125<1>D        g59<8,8,1>D     0x00000003UD    { align1 1H $1.src };
add(16)         g3<1>D          g2.2<0,1,0>D    40D             { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
or(16)          g27<1>UD        g125<8,8,1>UD   0xffffffc0UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g5<1>UD         g3<1,1,0>UD     g2.2<0,1,0>UD   { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g9<2>UD         g3<4,4,1>UD                     { align1 1Q F@1 };
mov(8)          g11<2>UD        g4<4,4,1>UD                     { align1 2Q $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g7<1>D          -g5<1,1,0>D     g2.3<0,1,0>D    { align1 1H A@1 compacted };
mov(8)          g9.1<2>UD       g7<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g11.1<2>UD      g8<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g13UD           g9UD            nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
shl(16)         g15<1>D         g13<8,8,1>D     0x00000006UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g17<1>D         g2.2<0,1,0>D    g15<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g19<1>UD        g17<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(8)          g23<2>UD        g17<4,4,1>UD                    { align1 1Q F@7 };
mov(8)          g25<2>UD        g18<4,4,1>UD                    { align1 2Q $13.src };
add(16)         g21<1>D         -g19<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g23.1<2>UD      g21<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g25.1<2>UD      g22<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g23UD           g27UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $13 };

LABEL19:
endif(16)       JIP:  LABEL18                                   { align1 1H };

LABEL18:
endif(16)       JIP:  LABEL20                                   { align1 1H };

LABEL20:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q F@3 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_DFS_DFS_trivial_code[] = {
    0x80000065, 0x6f058220, 0x02000004, 0xffffffc0,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa006f0c, 0x00340000,
    0xe2703040, 0x04016f03, 0x80030061, 0x68054410,
    0x00000000, 0x76543210, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa00700c, 0x00300000, 0x64681940, 0x00806895,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x37050120, 0x00466805, 0x00000000,
    0xe0691965, 0x00f03703, 0x00041961, 0x71060210,
    0x00466905, 0x00000000, 0x00040061, 0x39050120,
    0x00566906, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa0570040, 0x02410203,
    0xe75b1970, 0x02405703, 0x00030061, 0x5f060220,
    0x00345705, 0x00000000, 0x00130061, 0x61060220,
    0x00345805, 0x00000000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0xe0630065, 0x00110303,
    0xa05d1c40, 0x02125b12, 0xae3d1a70, 0x00006303,
    0x00031a61, 0x5f260220, 0x00345d05, 0x00000000,
    0x00131b61, 0x61260220, 0x00345e05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x33240000, 0xfb005f24, 0x00040000,
    0x00042261, 0x59060210, 0x00463505, 0x00000000,
    0x00042261, 0x3b050120, 0x00563306, 0x00000000,
    0x00041970, 0x00010660, 0x56463905, 0x00463b05,
    0x01040022, 0x0001c060, 0x00000240, 0x000001c0,
    0x00040069, 0x6a058660, 0x02463905, 0x00000005,
    0xe06c0068, 0x01b03903, 0xa06e1a40, 0x6a01025a,
    0x27731970, 0x02106e0b, 0x00030061, 0x77060220,
    0x00346e05, 0x00000000, 0x00130061, 0x79060220,
    0x00346f05, 0x00000000, 0xa07b0040, 0x01006e03,
    0x00041c52, 0x75040660, 0x0e2e02a4, 0x73056c05,
    0x277d1a70, 0x6e007b03, 0x00030061, 0x63060220,
    0x00347b05, 0x00000000, 0x00130061, 0x65060220,
    0x00347c05, 0x00000000, 0x00031c61, 0x77260220,
    0x00347505, 0x00000000, 0x00131d61, 0x79260220,
    0x00347605, 0x00000000, 0xa0031d40, 0x75027d02,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x5b440000, 0xfb007724, 0x000c0000,
    0x00031961, 0x63260220, 0x00340305, 0x00000000,
    0x00131a61, 0x65260220, 0x00340405, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x03440000, 0xfb006324, 0x000c0000,
    0x00042361, 0x2d050220, 0x00465b05, 0x00000000,
    0x00042361, 0x2f050220, 0x00465d05, 0x00000000,
    0x00042361, 0x31050220, 0x00465f05, 0x00000000,
    0x00042361, 0x13050220, 0x00466105, 0x00000000,
    0x00042161, 0x15050220, 0x00460305, 0x00000000,
    0x00042161, 0x17050220, 0x00460505, 0x00000000,
    0x00042161, 0x19050220, 0x00460705, 0x00000000,
    0x00042161, 0x29050220, 0x00460905, 0x00000000,
    0x00040024, 0x0001c060, 0x00000090, 0x00000090,
    0x00041e61, 0x13054220, 0x00000000, 0x00000000,
    0x00041f61, 0x31054220, 0x00000000, 0x7f800000,
    0x00041f61, 0x2f054220, 0x00000000, 0x7f800000,
    0x00040061, 0x2d054220, 0x00000000, 0x7f800000,
    0x00041e61, 0x29054220, 0x00000000, 0x80000000,
    0x00041f61, 0x19054220, 0x00000000, 0xff800000,
    0x00041f61, 0x17054220, 0x00000000, 0xff800000,
    0x00040061, 0x15054220, 0x00000000, 0xff800000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00041e61, 0x1b050220, 0x00462d05, 0x00000000,
    0x00041f61, 0x1d050220, 0x00462f05, 0x00000000,
    0x00041f61, 0x1f050220, 0x00463105, 0x00000000,
    0x00041f61, 0x21050220, 0x00461305, 0x00000000,
    0x00041e61, 0x23050220, 0x00461505, 0x00000000,
    0x00041f61, 0x25050220, 0x00461705, 0x00000000,
    0x00041f61, 0x27050220, 0x00461905, 0x00000000,
    0x00040070, 0x04058550, 0x15567106, 0x00000000,
    0x80002061, 0x01054660, 0x00000000, 0x00000001,
    0x00041a61, 0x3f050560, 0x20460405, 0x00000000,
    0x01040022, 0x0001c060, 0x00000280, 0x00000280,
    0xa0050040, 0x00c10243, 0x27071970, 0x0210052b,
    0x00033161, 0x64060220, 0x00340505, 0x00000000,
    0x00133161, 0x66060220, 0x00340605, 0x00000000,
    0xa0091b40, 0x0212071a, 0x00031961, 0x64260220,
    0x00340905, 0x00000000, 0x00131a61, 0x66260220,
    0x00340a05, 0x00000000, 0xe2690961, 0x00114004,
    0x80000965, 0x69058220, 0x02006904, 0xffffffff,
    0xe26a0961, 0x00117044, 0x80000965, 0x6a058220,
    0x02006a04, 0xffffffff, 0x226a1965, 0x6a116903,
    0x80001961, 0x0b050220, 0x00006a04, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0004004d, 0x0d050220, 0x00000b04, 0x00000000,
    0xe26b0961, 0x00114004, 0x80000965, 0x6b058220,
    0x02006b04, 0xffffffff, 0x8000194c, 0x0f050220,
    0x00006b04, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040070, 0x00010660,
    0x16463705, 0x00000f04, 0x01040022, 0x0001c060,
    0x00000030, 0x00000030, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x06140000,
    0xfb186424, 0x01000d14, 0x00040025, 0x00004600,
    0x00000000, 0x00000138, 0xe26c0961, 0x00114004,
    0x80000965, 0x6c058220, 0x02006c04, 0xffffffff,
    0x8000194c, 0x10050220, 0x00006c04, 0x00000000,
    0x80009169, 0x10018220, 0x02001004, 0x00000002,
    0x80000961, 0x41050220, 0x00010300, 0x00000000,
    0xe26d0961, 0x00114004, 0x80000965, 0x6d058220,
    0x02006d04, 0xffffffff, 0x00040061, 0x43050120,
    0x00466805, 0x00000000, 0xe26e0961, 0x00117044,
    0x80000965, 0x6e058220, 0x02006e04, 0xffffffff,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x45052660, 0x02000104, 0x00464305,
    0x226e1a65, 0x6e116d03, 0x80001961, 0x2b050220,
    0x00006e04, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040065, 0x47050220,
    0x06002b04, 0x02464505, 0x0004194d, 0x49050220,
    0x00464705, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa04b0040, 0x49014102,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x41058660, 0x02464b05, 0x00000006,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0xa02b1a40, 0x41110242, 0xa04e0040, 0x01010243,
    0xa05b0040, 0x00403703, 0xa05d0040, 0xff403703,
    0xa05f3240, 0x00203703, 0xa0613240, 0xff203703,
    0xa0653140, 0x00103703, 0xa0673140, 0xff103703,
    0x80000061, 0x01254660, 0x00000000, 0x7fffffff,
    0x274c1f70, 0x02102b2b, 0x00030061, 0x03060220,
    0x00342b05, 0x00000000, 0x00130061, 0x05060220,
    0x00342c05, 0x00000000, 0x00030061, 0x07060220,
    0x00344e05, 0x00000000, 0x00130061, 0x09060220,
    0x00344f05, 0x00000000, 0x27500070, 0x02104e2b,
    0x00040070, 0x00018660, 0x56465b05, 0x00000010,
    0xa0431f40, 0x02124c1a, 0xa0521b40, 0x0212501a,
    0x2f450062, 0x5d005b03, 0x00031b61, 0x03260220,
    0x00344305, 0x00000000, 0x00131c61, 0x05260220,
    0x00344405, 0x00000000, 0x00031c61, 0x07260220,
    0x00345205, 0x00000000, 0x00131d61, 0x09260220,
    0x00345305, 0x00000000, 0x00040070, 0x00018660,
    0x56465f05, 0x00000010, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x53140000,
    0xfb000724, 0x00000000, 0x2f470062, 0x61005f03,
    0x00040070, 0x00018660, 0x56466505, 0x00000010,
    0x2f490062, 0x67006503, 0x00040070, 0x62058550,
    0x15565906, 0x00010001, 0x00041961, 0x4b050560,
    0x20466205, 0x00000000, 0x00042169, 0x55058660,
    0x02465305, 0x00000006, 0x00041952, 0x57040660,
    0x0e2e0244, 0x2b055505, 0x0004196c, 0x11058660,
    0x02465705, 0x00000006, 0x11040022, 0x0001c060,
    0x000028c0, 0x000012b0, 0x00040070, 0x00010220,
    0x52463705, 0x00463b05, 0x01040062, 0x4d058220,
    0x02461505, 0xff800000, 0x01040062, 0x4f058220,
    0x02461705, 0xff800000, 0x01043162, 0x09058220,
    0x02461905, 0xff800000, 0x01040062, 0x51058220,
    0x02462d05, 0x7f800000, 0x01040062, 0x53058220,
    0x02462f05, 0x7f800000, 0x01040062, 0x55058220,
    0x02463105, 0x7f800000, 0x80041e61, 0x10014110,
    0x00000000, 0x09a009a0, 0x00040069, 0x10018510,
    0x01564506, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x09a009a0, 0xe0610961, 0x001b0004,
    0x80041e61, 0x10014110, 0x00000000, 0x09e009e0,
    0x00040069, 0x10018510, 0x01564506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x09e009e0,
    0xe05f0961, 0x001b0004, 0x80041e61, 0x10014110,
    0x00000000, 0x01200120, 0x00040069, 0x10018510,
    0x01564506, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x01200120, 0xe05d0961, 0x001b0004,
    0x80041e61, 0x10014110, 0x00000000, 0x0a200a20,
    0x00040069, 0x10018510, 0x01564506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0a200a20,
    0xe05b0961, 0x001b0004, 0x80041e61, 0x10014110,
    0x00000000, 0x0a600a60, 0x00040069, 0x10018510,
    0x01564506, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0a600a60, 0xe0590961, 0x001b0004,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80041e61, 0x10014110, 0x00000000, 0x0aa00aa0,
    0x00040069, 0x10018510, 0x01564506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0aa00aa0,
    0xe0070961, 0x001b0004, 0x00040070, 0x00018220,
    0x52463705, 0x00000006, 0x25571f62, 0x61004d00,
    0x254d0962, 0x5f004f00, 0x254f0962, 0x5d000900,
    0x27090962, 0x5b005100, 0x27510962, 0x59005300,
    0x80041561, 0x10014110, 0x00000000, 0x0ae00ae0,
    0x00040069, 0x10018510, 0x01564706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0ae00ae0,
    0xe0610961, 0x001b0004, 0x27530962, 0x07005500,
    0x80041561, 0x10014110, 0x00000000, 0x09a009a0,
    0x00040069, 0x10018510, 0x01564706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x09a009a0,
    0xe05f0961, 0x001b0004, 0x80041461, 0x10014110,
    0x00000000, 0x09e009e0, 0x00040069, 0x10018510,
    0x01564706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x09e009e0, 0xe05d0961, 0x001b0004,
    0x80041361, 0x10014110, 0x00000000, 0x01200120,
    0x00040069, 0x10018510, 0x01564706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x01200120,
    0xe05b0961, 0x001b0004, 0x80041261, 0x10014110,
    0x00000000, 0x0a200a20, 0x00040069, 0x10018510,
    0x01564706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0a200a20, 0xe0590961, 0x001b0004,
    0x25550962, 0x61005700, 0x80041261, 0x10014110,
    0x00000000, 0x0a600a60, 0x00040069, 0x10018510,
    0x01564706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0a600a60, 0xe0070961, 0x001b0004,
    0x25570962, 0x5f004d00, 0x254d0962, 0x5d004f00,
    0x274f0962, 0x5b000900, 0x80041461, 0x10014110,
    0x00000000, 0x0aa00aa0, 0x00040069, 0x10018510,
    0x01564906, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0aa00aa0, 0xe0610961, 0x001b0004,
    0x27090962, 0x59005100, 0x80041461, 0x10014110,
    0x00000000, 0x0ae00ae0, 0x00040069, 0x10018510,
    0x01564906, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0ae00ae0, 0xe05f0961, 0x001b0004,
    0x27591b62, 0x07005300, 0x80041461, 0x10014110,
    0x00000000, 0x09a009a0, 0x00040069, 0x10018510,
    0x01564906, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x09a009a0, 0xe05d0961, 0x001b0004,
    0x80041361, 0x10014110, 0x00000000, 0x09e009e0,
    0x00040069, 0x10018510, 0x01564906, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x09e009e0,
    0xe05b0961, 0x001b0004, 0x25530962, 0x61005500,
    0x80040b61, 0x10014110, 0x00000000, 0x01200120,
    0x00040069, 0x10018510, 0x01564906, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x01200120,
    0xe0510961, 0x001b0004, 0x25550962, 0x5f005700,
    0x80041361, 0x10014110, 0x00000000, 0x0b200b20,
    0x00040069, 0x10018510, 0x01564906, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0b200b20,
    0xe0070961, 0x001b0004, 0x25570962, 0x5d004d00,
    0x274d0962, 0x5b004f00, 0x274f0962, 0x51000900,
    0x27511962, 0x07005900, 0x01040022, 0x0001c060,
    0x00000d70, 0x00000d70, 0x25590962, 0x53aa4d00,
    0x255b1362, 0x55aa4f00, 0x255d1362, 0x57aa5100,
    0xa0611740, 0x01002b03, 0x00040061, 0x65064540,
    0x00000000, 0xffffffff, 0x255f1162, 0x5d005b00,
    0x00043161, 0x63070200, 0x00463505, 0x00000000,
    0x00030b61, 0x07060220, 0x00346105, 0x00000000,
    0x00130c61, 0x09060220, 0x00346205, 0x00000000,
    0x25331162, 0x5f005900, 0x00041b61, 0x35050020,
    0x00666307, 0x00000000, 0xe0591141, 0x34003300,
    0x200b1140, 0x59214d00, 0x200d3140, 0x59214f00,
    0x200f0040, 0x59215100, 0x20631940, 0x59015300,
    0x20660040, 0x59015500, 0x20680040, 0x59015700,
    0x80001301, 0x00000000, 0x00000000, 0x00000000,
    0x206a0040, 0x0b206300, 0x80001301, 0x00000000,
    0x00000000, 0x00000000, 0x206c0040, 0x0d206600,
    0x80001301, 0x00000000, 0x00000000, 0x00000000,
    0x206e0040, 0x0f206800, 0x00041341, 0x51058aa0,
    0x0a466a05, 0x3f800001, 0x00041341, 0x53058aa0,
    0x0a466c05, 0x3f800001, 0x00041341, 0x55058aa0,
    0x0a466e05, 0x3f800001, 0x00041365, 0x33058220,
    0x02465105, 0x007fffff, 0x00041765, 0x59058220,
    0x02465105, 0x7f800000, 0x00041265, 0x4d058220,
    0x02465305, 0x007fffff, 0x00040065, 0x5b058220,
    0x02465305, 0x7f800000, 0x00041165, 0x4f058220,
    0x02465505, 0x007fffff, 0x00040065, 0x5d058220,
    0x02465505, 0x7f800000, 0x00040e40, 0x57058660,
    0x06463305, 0x3f000000, 0x00041e6c, 0x33058660,
    0x02465905, 0x00000017, 0x00041e40, 0x59058660,
    0x06464d05, 0x3f000000, 0x00041e6c, 0x4d058660,
    0x02465b05, 0x00000017, 0x00041e40, 0x5b058660,
    0x06464f05, 0x3f000000, 0xac001d70, 0x3f805701,
    0x00041e6c, 0x4f058660, 0x02465d05, 0x00000017,
    0x11040062, 0x5d058220, 0x02465705, 0x3f000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x0004007a, 0x57040220, 0x0a0a0124, 0x51055d05,
    0xac001e70, 0x3f805901, 0x11040062, 0x51058220,
    0x02465905, 0x3f000000, 0x0004097a, 0x59040220,
    0x0a0a0124, 0x53055105, 0xac001e70, 0x3f805b01,
    0x11040062, 0x51058220, 0x02465b05, 0x3f000000,
    0x0004197a, 0x53040220, 0x0a0a0124, 0x55055105,
    0x00041970, 0x51058aa0, 0x3a465705, 0x3f7f0000,
    0x00041b70, 0x57058aa0, 0x3a465905, 0x3f7f0000,
    0x00041252, 0x55044560, 0x0e2eff82, 0x51053305,
    0x00040952, 0x33044560, 0x0e2eff82, 0x57054d05,
    0x00041a70, 0x51058aa0, 0x3a465305, 0x3f7f0000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x276f1770, 0x2b006103, 0x00040952, 0x53044560,
    0x0e2eff82, 0x51054f05, 0xa0711a40, 0x43026f02,
    0x00031961, 0x07260220, 0x00347105, 0x00000000,
    0x00131a61, 0x09260220, 0x00347205, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x00000000, 0xf3080724, 0x00023514,
    0x00044131, 0x00000000, 0xfb080324, 0x000c0b44,
    0xa0763340, 0x01202b03, 0x00041f61, 0x4d070200,
    0x00465505, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x27781a70, 0x2b007603,
    0x00033461, 0x07060220, 0x00347605, 0x00000000,
    0x00133461, 0x09060220, 0x00347705, 0x00000000,
    0x00040061, 0x72070200, 0x00463305, 0x00000000,
    0x00041f61, 0x74070200, 0x00465305, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00041e61, 0x35070000, 0x00664d07, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xa07a1e40, 0x43027802, 0x00041a61, 0x350f0000,
    0x00667207, 0x00000000, 0x00031a61, 0x07260220,
    0x00347a05, 0x00000000, 0x00131b61, 0x09260220,
    0x00347b05, 0x00000000, 0x00041b61, 0x35170000,
    0x00667407, 0x00000000, 0x00041961, 0x351f0000,
    0x00566506, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x00000000,
    0xfb080724, 0x00003514, 0x00040070, 0x00010220,
    0x52463705, 0x00463b05, 0x01040022, 0x0001c060,
    0x000003e0, 0x00000360, 0x25073562, 0x15432d00,
    0x254f0062, 0x17432f00, 0x25510062, 0x19433100,
    0x00040069, 0x4d05a660, 0x02465505, 0x00000017,
    0x00043569, 0x3505a660, 0x02463305, 0x00000017,
    0x00040069, 0x3305a660, 0x02465305, 0x00000017,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x25091162, 0x51004f00, 0x00041a40, 0x55058660,
    0x06463505, 0x43800000, 0x00041c40, 0x53058660,
    0x06464d05, 0x43800000, 0x00041b40, 0x57058660,
    0x06463305, 0x43800000, 0x25330962, 0x09000700,
    0xe0071141, 0x34003300, 0x20091140, 0x07202d00,
    0x20330040, 0x07202f00, 0x20351b40, 0x07203100,
    0x204d1a40, 0x07001500, 0x204f0040, 0x07001700,
    0x20510040, 0x07001900, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x20071640, 0x0b200900,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x20091640, 0x0d203300, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x20331640, 0x0f203500,
    0x20351640, 0x0b204d00, 0x204d1640, 0x0d204f00,
    0x204f1640, 0x0f205100, 0x00041641, 0x51058aa0,
    0x0a460705, 0x3f7ffffe, 0x00041641, 0x07058aa0,
    0x0a460905, 0x3f7ffffe, 0x00041641, 0x09058aa0,
    0x0a463305, 0x3f7ffffe, 0x00041641, 0x33058aa0,
    0x0a463505, 0x3f800001, 0x00041641, 0x35058aa0,
    0x0a464d05, 0x3f800001, 0x00041641, 0x4d058aa0,
    0x0a464f05, 0x3f800001, 0x204f0a41, 0x53005100,
    0x20510b41, 0x55000700, 0x20070941, 0x57000900,
    0x20091641, 0x53003300, 0x20331641, 0x55003500,
    0x20351641, 0x57004d00, 0x604d1645, 0x00104f00,
    0x604f1645, 0x00105100, 0x60511645, 0x00100700,
    0x60071645, 0x00120900, 0x60091645, 0x00123300,
    0x60331645, 0x00123500, 0xe5351662, 0x00004d00,
    0xe54d1662, 0x00004f00, 0xe54f1662, 0x00005100,
    0xe5511662, 0x00020700, 0xe5071662, 0x00020900,
    0xe5091662, 0x00023300, 0x00041662, 0x33058aa0,
    0x5a463505, 0x437f0000, 0x00041662, 0x35058aa0,
    0x5a464d05, 0x437f0000, 0x00041662, 0x4d058aa0,
    0x5a464f05, 0x437f0000, 0x00041662, 0x4f058aa0,
    0x5a465105, 0x437f0000, 0x00041662, 0x51058aa0,
    0x5a460705, 0x437f0000, 0x00041561, 0x59070a00,
    0x00463305, 0x00000000, 0x00041662, 0x07058aa0,
    0x5a460905, 0x437f0000, 0x00041561, 0x5b070a00,
    0x00463505, 0x00000000, 0x00041461, 0x5d070a00,
    0x00464d05, 0x00000000, 0x00041361, 0x5f070a00,
    0x00464f05, 0x00000000, 0x00041261, 0x61070a00,
    0x00465105, 0x00000000, 0x00041d61, 0x4d050010,
    0x00665907, 0x00000000, 0x00041161, 0x63070a00,
    0x00460705, 0x00000000, 0x00041e61, 0x36050010,
    0x00665b07, 0x00000000, 0x00041e61, 0x35050010,
    0x00665d07, 0x00000000, 0x00041e61, 0x50050010,
    0x00665f07, 0x00000000, 0x00041e61, 0x4f050010,
    0x00666107, 0x00000000, 0x00041d61, 0x4e050010,
    0x00666307, 0x00000000, 0x00040024, 0x0001c060,
    0x00000090, 0x00000090, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00041d61, 0x35054110,
    0x00000000, 0x00800080, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00041f61, 0x36054110,
    0x00000000, 0x00800080, 0x00041f61, 0x4d054110,
    0x00000000, 0x00800080, 0x00041d61, 0x4e054110,
    0x00000000, 0x00000000, 0x00041f61, 0x4f054110,
    0x00000000, 0x00000000, 0x00041f61, 0x50054110,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000510, 0xa0330040, 0x37002b02,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00041f61, 0x58060100, 0x00583505, 0x00000000,
    0x00040a61, 0x59060100, 0x00583605, 0x00000000,
    0x00040a61, 0x5a060100, 0x00584d05, 0x00000000,
    0x00041f61, 0x75060100, 0x00584e05, 0x00000000,
    0x00041f61, 0x76060100, 0x00584f05, 0x00000000,
    0x00041f61, 0x77060100, 0x00585005, 0x00000000,
    0x277b1f70, 0x2b003303, 0xa07d0040, 0x01c03303,
    0x00041e61, 0x51050020, 0x00565a06, 0x00000000,
    0xa0351b40, 0x43027b02, 0x274d1b70, 0x33007d03,
    0x00033561, 0x07060220, 0x00347d05, 0x00000000,
    0x80103501, 0x00000000, 0x00000000, 0x00000000,
    0x00131161, 0x09060220, 0x00347e05, 0x00000000,
    0xa04f1b40, 0x35024d02, 0x00031961, 0x07260220,
    0x00344f05, 0x00000000, 0x00131a61, 0x09260220,
    0x00345005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xf3080724, 0x00025114, 0xa0503640, 0x02803303,
    0x00040061, 0x56050020, 0x00565906, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x27521a70, 0x33005003, 0x00033661, 0x07060220,
    0x00345005, 0x00000000, 0x00133661, 0x09060220,
    0x00345105, 0x00000000, 0xa0541b40, 0x35025202,
    0x00031961, 0x07260220, 0x00345405, 0x00000000,
    0x00131a61, 0x09260220, 0x00345505, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x00000000, 0xf3080724, 0x00025614,
    0xa0553740, 0x03403303, 0x00041461, 0x5b050020,
    0x00565806, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x27571a70, 0x33005503,
    0x00033761, 0x07060220, 0x00345505, 0x00000000,
    0x00133761, 0x09060220, 0x00345605, 0x00000000,
    0xa0591b40, 0x35025702, 0x00031961, 0x07260220,
    0x00345905, 0x00000000, 0x00131a61, 0x09260220,
    0x00345a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xf3080724, 0x00025b14, 0xa05a3840, 0x02203303,
    0x00040061, 0x60050020, 0x00567706, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x275c1a70, 0x33005a03, 0x00033861, 0x07060220,
    0x00345a05, 0x00000000, 0x00133861, 0x09060220,
    0x00345b05, 0x00000000, 0xa05e1b40, 0x35025c02,
    0x00031961, 0x07260220, 0x00345e05, 0x00000000,
    0x00131a61, 0x09260220, 0x00345f05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x00000000, 0xf3080724, 0x00026014,
    0xa05f3940, 0x02e03303, 0x00040061, 0x65050020,
    0x00567606, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x27611a70, 0x33005f03,
    0x00033961, 0x07060220, 0x00345f05, 0x00000000,
    0x00133961, 0x09060220, 0x00346005, 0x00000000,
    0xa0631b40, 0x35026102, 0x00031961, 0x07260220,
    0x00346305, 0x00000000, 0x00131a61, 0x09260220,
    0x00346405, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044a31, 0x00000000,
    0xf3080724, 0x00026514, 0xa0643a40, 0x03a03303,
    0x00041761, 0x6a050020, 0x00567506, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x27661a70, 0x33006403, 0x00033a61, 0x07060220,
    0x00346405, 0x00000000, 0x00133a61, 0x09060220,
    0x00346505, 0x00000000, 0xa0680b40, 0x35026602,
    0x00031961, 0x07260220, 0x00346805, 0x00000000,
    0x00131a61, 0x09260220, 0x00346905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x00000000, 0xf3080724, 0x00026a14,
    0x00040070, 0x00018660, 0x26464b05, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0xa06b1740, 0x01603303, 0x11043b62, 0x69058220,
    0x02000104, 0x00000002, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x00031a61, 0x07060220,
    0x00346b05, 0x00000000, 0x80103b01, 0x00000000,
    0x00000000, 0x00000000, 0x00131b61, 0x09060220,
    0x00346c05, 0x00000000, 0x00041b61, 0x5b070200,
    0x00466905, 0x00000000, 0x276d1770, 0x33006b03,
    0x00041a61, 0x6b050020, 0x00665b07, 0x00000000,
    0xa06f1a40, 0x35026d02, 0x00031961, 0x07260220,
    0x00346f05, 0x00000000, 0x00131a61, 0x09260220,
    0x00347005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xf3080724, 0x00026b14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040024, 0x0001c060,
    0x00001620, 0x00001620, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x70050020,
    0x0066131f, 0x00000000, 0x00040070, 0x00010660,
    0x56463905, 0x00463b05, 0xef510962, 0x00007003,
    0x00041961, 0x71050020, 0x00665107, 0x00000000,
    0x00040070, 0x00010220, 0x52463705, 0x00463b05,
    0x80041a61, 0x10014110, 0x00000000, 0x0e200e20,
    0x00040069, 0x10018510, 0x01564506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0e200e20,
    0xe0730961, 0x001b0004, 0x20751966, 0x73005103,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00041961, 0x77050020, 0x00667507, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80041961, 0x10014110, 0x00000000, 0x0ee00ee0,
    0x00040069, 0x10018510, 0x01564706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0ee00ee0,
    0xe0790961, 0x001b0004, 0x207b1966, 0x79007703,
    0x00041961, 0x7d050020, 0x00667b07, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80040961, 0x10014110, 0x00000000, 0x0fa00fa0,
    0x00040069, 0x10018510, 0x01564906, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0fa00fa0,
    0xe0070961, 0x001b0004, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x20090966, 0x07007b03,
    0x00041961, 0x33070200, 0x00000904, 0x00000000,
    0x01040022, 0x0001c060, 0x00000128, 0x000000c8,
    0x00040061, 0x13050020, 0x00000904, 0x00000000,
    0xac351970, 0x00001303, 0x00040070, 0x00018660,
    0x16465105, 0x00000000, 0x01041a62, 0x4b058220,
    0x02463505, 0xffffffff, 0x00041970, 0x00018660,
    0x26464b05, 0x00000000, 0x01040062, 0x4b058220,
    0x02461505, 0xff800000, 0x01041362, 0x4d058220,
    0x02461705, 0xff800000, 0x01041262, 0x4f058220,
    0x02461905, 0xff800000, 0x01040062, 0x35058220,
    0x02462d05, 0x7f800000, 0x01041962, 0x2d058220,
    0x02462f05, 0x7f800000, 0x01041962, 0x2f058220,
    0x02463105, 0x7f800000, 0x00040024, 0x0001c060,
    0x00000070, 0x00000070, 0x00041a61, 0x2f054220,
    0x00000000, 0x7f800000, 0x00041c61, 0x2d054220,
    0x00000000, 0x7f800000, 0x00041e61, 0x35054220,
    0x00000000, 0x7f800000, 0x00040a61, 0x4f054220,
    0x00000000, 0xff800000, 0x00040b61, 0x4d054220,
    0x00000000, 0xff800000, 0x00040061, 0x4b054220,
    0x00000000, 0xff800000, 0x00040025, 0x00004600,
    0x00000000, 0x00001360, 0x80040d61, 0x10014110,
    0x00000000, 0x06a006a0, 0x00040069, 0x10018510,
    0x01564506, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x06a006a0, 0xe0530961, 0x001b0004,
    0x80040d61, 0x10014110, 0x00000000, 0x05a005a0,
    0x00040069, 0x10018510, 0x01564506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x05a005a0,
    0xe0550961, 0x001b0004, 0x80040c61, 0x10014110,
    0x00000000, 0x05e005e0, 0x00040069, 0x10018510,
    0x01564506, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x05e005e0, 0xe0570961, 0x001b0004,
    0x80040961, 0x10014110, 0x00000000, 0x09600960,
    0x00040069, 0x10018510, 0x01564506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x09600960,
    0xe05a0961, 0x001b0004, 0x80040b61, 0x10014110,
    0x00000000, 0x09a009a0, 0x00040069, 0x10018510,
    0x01564506, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x09a009a0, 0xe05c0961, 0x001b0004,
    0x80000f01, 0x00000000, 0x00000000, 0x00000000,
    0x80040061, 0x10014110, 0x00000000, 0x09e009e0,
    0x00040069, 0x10018510, 0x01564506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x09e009e0,
    0xe0690961, 0x001b0004, 0x00040070, 0x00018220,
    0x52463705, 0x00000006, 0x275f0d62, 0x53003500,
    0x27610e62, 0x55002d00, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x27631d62, 0x57002f00,
    0x25531c62, 0x5a004b00, 0x25551b62, 0x5c004d00,
    0x25571a62, 0x69004f00, 0x80041661, 0x10014110,
    0x00000000, 0x0be00be0, 0x00040069, 0x10018510,
    0x01564706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0be00be0, 0xe0650961, 0x001b0004,
    0x80041561, 0x10014110, 0x00000000, 0x0c200c20,
    0x00040069, 0x10018510, 0x01564706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0c200c20,
    0xe0670961, 0x001b0004, 0x80041161, 0x10014110,
    0x00000000, 0x0c600c60, 0x00040069, 0x10018510,
    0x01564706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0c600c60, 0xe0690961, 0x001b0004,
    0x80041361, 0x10014110, 0x00000000, 0x0a600a60,
    0x00040069, 0x10018510, 0x01564706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0a600a60,
    0xe0590961, 0x001b0004, 0x80041261, 0x10014110,
    0x00000000, 0x0aa00aa0, 0x00040069, 0x10018510,
    0x01564706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0aa00aa0, 0xe05b0961, 0x001b0004,
    0x80041161, 0x10014110, 0x00000000, 0x0ae00ae0,
    0x00040069, 0x10018510, 0x01564706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0ae00ae0,
    0xe05d0961, 0x001b0004, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001e01, 0x00000000,
    0x00000000, 0x00000000, 0x276b0062, 0x65005f00,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x276d0062, 0x67006100, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x276f0062, 0x69006300,
    0x25771b62, 0x59005300, 0x25791a62, 0x5b005500,
    0x257b1962, 0x5d005700, 0x80041361, 0x10014110,
    0x00000000, 0x0d600d60, 0x00040069, 0x10018510,
    0x01564906, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0d600d60, 0xe0590961, 0x001b0004,
    0x80041461, 0x10014110, 0x00000000, 0x0da00da0,
    0x00040069, 0x10018510, 0x01564906, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0da00da0,
    0xe0680961, 0x001b0004, 0x80040961, 0x10014110,
    0x00000000, 0x0de00de0, 0x00040069, 0x10018510,
    0x01564906, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0de00de0, 0xe0570961, 0x001b0004,
    0x80040a61, 0x10014110, 0x00000000, 0x0ee00ee0,
    0x00040069, 0x10018510, 0x01564906, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0ee00ee0,
    0xe0550961, 0x001b0004, 0x80040a61, 0x10014110,
    0x00000000, 0x0f200f20, 0x00040069, 0x10018510,
    0x01564906, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0f200f20, 0xe0530961, 0x001b0004,
    0x80041161, 0x10014110, 0x00000000, 0x0f600f60,
    0x00040069, 0x10018510, 0x01564906, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0f600f60,
    0xe0470961, 0x001b0004, 0x27711e62, 0x59006b00,
    0x27731d62, 0x68006d00, 0x27751c62, 0x57006f00,
    0x257d1b62, 0x55007700, 0x25311a62, 0x53007900,
    0x25451962, 0x47007b00, 0x01040022, 0x0001c060,
    0x00000e50, 0x00000e50, 0x255d1362, 0x7daa7100,
    0x25611362, 0x31aa7300, 0x25631362, 0x45aa7500,
    0xa05f0040, 0x01002b03, 0x25651162, 0x63006100,
    0x00040061, 0x5c064540, 0x00000000, 0x00010001,
    0x00031a61, 0x07060220, 0x00345f05, 0x00000000,
    0x00131b61, 0x09060220, 0x00346005, 0x00000000,
    0x25671162, 0x65005d00, 0x00040a61, 0x61050020,
    0x00565c06, 0x00000000, 0xe06a1141, 0x34006700,
    0x20131140, 0x6a217100, 0x20150040, 0x6a217300,
    0x20170040, 0x6a217500, 0x20680040, 0x6a017d00,
    0x206c0040, 0x6a013100, 0x206e1f40, 0x6a014500,
    0x20700b40, 0x13206800, 0x20721340, 0x15206c00,
    0x20741340, 0x17206e00, 0x00041341, 0x31058aa0,
    0x0a467005, 0x3f800001, 0x00041341, 0x45058aa0,
    0x0a467205, 0x3f800001, 0x00041341, 0x47058aa0,
    0x0a467405, 0x3f800001, 0x00041365, 0x49058220,
    0x02463105, 0x007fffff, 0x00040065, 0x59058220,
    0x02463105, 0x7f800000, 0x00041265, 0x53058220,
    0x02464505, 0x007fffff, 0x00040065, 0x5b058220,
    0x02464505, 0x7f800000, 0x00041165, 0x55058220,
    0x02464705, 0x007fffff, 0x00040065, 0x5d058220,
    0x02464705, 0x7f800000, 0x00041e40, 0x57058660,
    0x06464905, 0x3f000000, 0x00041e6c, 0x49058660,
    0x02465905, 0x00000017, 0x00041e40, 0x59058660,
    0x06465305, 0x3f000000, 0x00041e6c, 0x53058660,
    0x02465b05, 0x00000017, 0x00041e40, 0x5b058660,
    0x06465505, 0x3f000000, 0xac001d70, 0x3f805701,
    0x00041e6c, 0x55058660, 0x02465d05, 0x00000017,
    0x11040062, 0x5d058220, 0x02465705, 0x3f000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x0004007a, 0x57040220, 0x0a0a0124, 0x31055d05,
    0xac001e70, 0x3f805901, 0x11040062, 0x31058220,
    0x02465905, 0x3f000000, 0x0004097a, 0x59040220,
    0x0a0a0124, 0x45053105, 0xac001e70, 0x3f805b01,
    0x11040062, 0x31058220, 0x02465b05, 0x3f000000,
    0x0004197a, 0x45040220, 0x0a0a0124, 0x47053105,
    0x00041d70, 0x75058aa0, 0x3a465705, 0x3f7f0000,
    0x00041b70, 0x77058aa0, 0x3a465905, 0x3f7f0000,
    0x00041970, 0x79058aa0, 0x3a464505, 0x3f7f0000,
    0x27310070, 0x2b005f03, 0x00041352, 0x6b044560,
    0x0e2eff82, 0x75054905, 0x00041252, 0x7b044560,
    0x0e2eff82, 0x77055305, 0x00040952, 0x7d044560,
    0x0e2eff82, 0x79055505, 0xa0450940, 0x43023102,
    0x00031961, 0x07260220, 0x00344505, 0x00000000,
    0x00131a61, 0x09260220, 0x00344605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x00000000, 0xf3080724, 0x00026114,
    0x00043161, 0x19050220, 0x00461105, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044d31, 0x00000000, 0xfb080324, 0x000c1344,
    0xa0460040, 0x01202b03, 0x00041f61, 0x5d070200,
    0x00466b05, 0x00000000, 0x27481a70, 0x2b004603,
    0x00031261, 0x58060220, 0x00344605, 0x00000000,
    0x00131261, 0x5a060220, 0x00344705, 0x00000000,
    0x00040061, 0x5f070200, 0x00467b05, 0x00000000,
    0x00043c61, 0x61070200, 0x00467d05, 0x00000000,
    0x00040e61, 0x6d070000, 0x00665d07, 0x00000000,
    0xa0531e40, 0x43024802, 0x00041a61, 0x6d0f0000,
    0x00665f07, 0x00000000, 0x00031a61, 0x58260220,
    0x00345305, 0x00000000, 0x00131b61, 0x5a260220,
    0x00345405, 0x00000000, 0x00041b61, 0x6d170000,
    0x00666107, 0x00000000, 0x00041961, 0x6d1f0000,
    0x00663307, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044e31, 0x00000000,
    0xfb085824, 0x00006d14, 0x00040070, 0x00010220,
    0x52463705, 0x00463b05, 0x01040022, 0x0001c060,
    0x000004c0, 0x00000460, 0x25541d62, 0x4b433500,
    0x25560062, 0x4d432d00, 0x25583e62, 0x4f432f00,
    0x00043169, 0x0c05a660, 0x02466b05, 0x00000017,
    0x00043169, 0x0e05a660, 0x02467b05, 0x00000017,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x1005a660, 0x02467d05, 0x00000017,
    0x00040070, 0x00018660, 0x16465105, 0x00000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x255a1162, 0x58005600, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x00041c40, 0x6c058660,
    0x06460c05, 0x43800000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x00041c40, 0x6e058660,
    0x06460e05, 0x43800000, 0x00041c40, 0x70058660,
    0x06461005, 0x43800000, 0x255c1162, 0x5a005400,
    0xe05e1141, 0x34005c00, 0x20601140, 0x5e203500,
    0x20620040, 0x5e202d00, 0x20640040, 0x5e202f00,
    0x20660040, 0x5e004b00, 0x20680040, 0x5e004d00,
    0x206a1f40, 0x5e004f00, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x20721640, 0x13206000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x20741640, 0x15206200, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x20761640, 0x17206400,
    0x20481640, 0x13206600, 0x204a1640, 0x15206800,
    0x204c1640, 0x17206a00, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x00041641, 0x07058aa0,
    0x0a467205, 0x3f7ffffe, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x00041641, 0x09058aa0,
    0x0a467405, 0x3f7ffffe, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00040b41, 0x0b058aa0,
    0x0a467605, 0x3f7ffffe, 0x00041641, 0x4e058aa0,
    0x0a464805, 0x3f800001, 0x00040c41, 0x50058aa0,
    0x0a464a05, 0x3f800001, 0x00040c41, 0x52058aa0,
    0x0a464c05, 0x3f800001, 0x20110941, 0x6c000700,
    0x20130a41, 0x6e000900, 0x20150941, 0x70000b00,
    0x20541641, 0x6c004e00, 0x20561641, 0x6e005000,
    0x20581641, 0x70005200, 0x60171645, 0x00101100,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x60191645, 0x00101300, 0x602d1645, 0x00101500,
    0x605a1645, 0x00125400, 0x605c1645, 0x00125600,
    0x605e1645, 0x00125800, 0xe52f1662, 0x00001700,
    0xe5311662, 0x00001900, 0xe5330e62, 0x00002d00,
    0xe5601662, 0x00025a00, 0xe5621662, 0x00025c00,
    0xe5641662, 0x00025e00, 0x00041662, 0x35058aa0,
    0x5a462f05, 0x437f0000, 0x00041662, 0x45058aa0,
    0x5a463105, 0x437f0000, 0x00041662, 0x47058aa0,
    0x5a463305, 0x437f0000, 0x00041662, 0x66058aa0,
    0x5a466005, 0x437f0000, 0x00041662, 0x68058aa0,
    0x5a466205, 0x437f0000, 0x00041662, 0x6a058aa0,
    0x5a466405, 0x437f0000, 0x00041661, 0x78070a00,
    0x00463505, 0x00000000, 0x00040d61, 0x7a070a00,
    0x00464505, 0x00000000, 0x00040c61, 0x7c070a00,
    0x00464705, 0x00000000, 0x00041361, 0x7e070a00,
    0x00466605, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x00041261, 0x03070a00,
    0x00466805, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x00041161, 0x05070a00,
    0x00466a05, 0x00000000, 0x00041e61, 0x6e050010,
    0x00667807, 0x00000000, 0x00041e61, 0x6f050010,
    0x00667a07, 0x00000000, 0x00041e61, 0x70050010,
    0x00667c07, 0x00000000, 0x00041e61, 0x6b050010,
    0x00667e07, 0x00000000, 0x00041e61, 0x6c050010,
    0x00660307, 0x00000000, 0x00041e61, 0x6d050010,
    0x00660507, 0x00000000, 0x11041e62, 0x53058110,
    0x01586e05, 0x00000000, 0x11041e62, 0x52058110,
    0x01586f05, 0x00000000, 0x11041e62, 0x51058110,
    0x01587005, 0x00000000, 0x11041e62, 0x56058110,
    0x01586b05, 0x00000000, 0x11041e62, 0x55058110,
    0x01586c05, 0x00000000, 0x11041e62, 0x54058110,
    0x01586d05, 0x00000000, 0x00040024, 0x0001c060,
    0x00000070, 0x00000070, 0x00041d61, 0x51054110,
    0x00000000, 0x00800080, 0x00041f61, 0x52054110,
    0x00000000, 0x00800080, 0x00041f61, 0x53054110,
    0x00000000, 0x00800080, 0x00041d61, 0x54054110,
    0x00000000, 0x00000000, 0x00041f61, 0x55054110,
    0x00000000, 0x00000000, 0x00041f61, 0x56054110,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000560, 0xa0711740, 0x37002b02,
    0x00040a61, 0x62060100, 0x00585105, 0x00000000,
    0x00040a61, 0x63060100, 0x00585205, 0x00000000,
    0x00040961, 0x64060100, 0x00585305, 0x00000000,
    0x00040961, 0x65060100, 0x00585405, 0x00000000,
    0x00041f61, 0x66060100, 0x00585505, 0x00000000,
    0x00041f61, 0x67060100, 0x00585605, 0x00000000,
    0x27730f70, 0x2b007103, 0xa0770040, 0x01c07103,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x00040e61, 0x6e050020, 0x00566406, 0x00000000,
    0xa0751b40, 0x43027302, 0x27791b70, 0x71007703,
    0x00033d61, 0x03060220, 0x00347705, 0x00000000,
    0x00133d61, 0x05060220, 0x00347805, 0x00000000,
    0xa07b1b40, 0x75027902, 0x00031961, 0x03260220,
    0x00347b05, 0x00000000, 0x00131a61, 0x05260220,
    0x00347c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xf3080324, 0x00026e14, 0xa0043140, 0x02807103,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00041761, 0x6f050020, 0x00566306, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x27061a70, 0x71000403, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00033c61, 0x0a060220,
    0x00340405, 0x00000000, 0x00133161, 0x0c060220,
    0x00340505, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0081b40, 0x75020602,
    0x00031961, 0x0a260220, 0x00340805, 0x00000000,
    0x00131a61, 0x0c260220, 0x00340905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xf3080a24, 0x00026f14,
    0xa00b3140, 0x03407103, 0x00040061, 0x73050020,
    0x00566206, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x270d1a70, 0x71000b03,
    0x00030061, 0x11060220, 0x00340b05, 0x00000000,
    0x00133d61, 0x13060220, 0x00340c05, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa00f0040, 0x75020d02, 0x00031961, 0x11260220,
    0x00340f05, 0x00000000, 0x00131a61, 0x13260220,
    0x00341005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xf3081124, 0x00027314, 0xa0123140, 0x02207103,
    0x00040061, 0x77050020, 0x00566706, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x27141a70, 0x71001203, 0x00031761, 0x2d060220,
    0x00341205, 0x00000000, 0x00131661, 0x2f060220,
    0x00341305, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0xa0160b40, 0x75021402,
    0x00031961, 0x2d260220, 0x00341605, 0x00000000,
    0x00131a61, 0x2f260220, 0x00341705, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x00000000, 0xf3082d24, 0x00027714,
    0xa02e3340, 0x02e07103, 0x00043361, 0x78050020,
    0x00566606, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x27300a70, 0x71002e03,
    0x00031461, 0x34060220, 0x00342e05, 0x00000000,
    0x00130061, 0x36060220, 0x00342f05, 0x00000000,
    0xa0320b40, 0x75023002, 0x00031961, 0x34260220,
    0x00343205, 0x00000000, 0x00131a61, 0x36260220,
    0x00343305, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xf3083424, 0x00027814, 0xa0353340, 0x03a07103,
    0x00043361, 0x79050020, 0x00566506, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x27371a70, 0x71003503, 0x00030061, 0x43060220,
    0x00343505, 0x00000000, 0x00130061, 0x45060220,
    0x00343605, 0x00000000, 0xa02b1b40, 0x75023702,
    0x00031961, 0x43260220, 0x00342b05, 0x00000000,
    0x00131a61, 0x45260220, 0x00342c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x00000000, 0xf3084324, 0x00027914,
    0xa0443340, 0x01607103, 0x00040061, 0x68064540,
    0x00000000, 0x00020002, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x27461a70, 0x71004403,
    0x00030061, 0x4a060220, 0x00344405, 0x00000000,
    0x00130061, 0x4c060220, 0x00344505, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00041c61, 0x7a050020, 0x00566806, 0x00000000,
    0xa0481c40, 0x75024602, 0x00031961, 0x4a260220,
    0x00344805, 0x00000000, 0x00131a61, 0x4c260220,
    0x00344905, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xf3084a24, 0x00027a14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040070, 0x00010660,
    0x56463905, 0x00463b05, 0x01040022, 0x0001c060,
    0x000005f8, 0x000005f8, 0x0004336c, 0x4b058660,
    0x02463b05, 0x0000001f, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00041369, 0x4d058660,
    0x02463905, 0x00000005, 0xe04f1268, 0x01b03903,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0xa0510940, 0x4d01025a, 0x27530970, 0x0210510b,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x00031361, 0x57060220, 0x00345105, 0x00000000,
    0x80103e01, 0x00000000, 0x00000000, 0x00000000,
    0x00131161, 0x59060220, 0x00345205, 0x00000000,
    0x00040b52, 0x55040660, 0x0e2e02a4, 0x53054f05,
    0x00031961, 0x57260220, 0x00345505, 0x00000000,
    0x00131a61, 0x59260220, 0x00345605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044d31, 0x00000000, 0xfb085724, 0x000c1b44,
    0xa0583d40, 0x01005103, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x275a0970, 0x51005803,
    0x00031461, 0x5e060220, 0x00345805, 0x00000000,
    0x00131361, 0x60060220, 0x00345905, 0x00000000,
    0xa05c0b40, 0x55025a02, 0x00031961, 0x5e260220,
    0x00345c05, 0x00000000, 0x00131a61, 0x60260220,
    0x00345d05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044f31, 0x00000000,
    0xfb085e24, 0x000c2344, 0x00043f69, 0x5f058660,
    0x02463905, 0x00000002, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0xe0611268, 0x01e03903,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa0630940, 0x5f01026a, 0x27650970, 0x0210634b,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x69060220, 0x00346305, 0x00000000,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x80101601, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x6b060220, 0x00346405, 0x00000000,
    0x00040b52, 0x67040660, 0x0e2e02e4, 0x65056105,
    0x00031961, 0x69260220, 0x00346705, 0x00000000,
    0x00131a61, 0x6b260220, 0x00346805, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb086924, 0x00003914,
    0xe0033168, 0x00614103, 0xa06a3040, 0x39003b02,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x276c3070, 0x3b006a03, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x70058660,
    0x02466a05, 0x00000002, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xe0731568, 0x01e06a03,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0xa06e0040, 0x4b026c02, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa0760b40, 0x7001026a,
    0x00040a69, 0x71058660, 0x02466e05, 0x00000002,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x27780a70, 0x0210764b, 0x00031161, 0x7c060220,
    0x00347605, 0x00000000, 0x00131361, 0x7e060220,
    0x00347705, 0x00000000, 0x20750c66, 0x73007103,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00040952, 0x7a040660, 0x0e2e02e4, 0x78057505,
    0x00031961, 0x7c260220, 0x00347a05, 0x00000000,
    0x00131a61, 0x7e260220, 0x00347b05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb087c24, 0x00000314,
    0x00040065, 0x00010220, 0x22463d05, 0x00463f05,
    0x01040022, 0x0001c060, 0x000001d0, 0x000001d0,
    0x00043169, 0x7d058660, 0x02463b05, 0x00000003,
    0xa0033140, 0x02810243, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x00041a66, 0x1b058220,
    0x02467d05, 0xffffffc0, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x27051a70, 0x0210032b,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00031161, 0x09060220, 0x00340305, 0x00000000,
    0x00133161, 0x0b060220, 0x00340405, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa0070940, 0x0212051a, 0x00031961, 0x09260220,
    0x00340705, 0x00000000, 0x00131a61, 0x0b260220,
    0x00340805, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x0d140000,
    0xfb000924, 0x00000000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x0f058660,
    0x02460d05, 0x00000006, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0111940, 0x0f010242,
    0x27131970, 0x0210112b, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x00031761, 0x17060220,
    0x00341105, 0x00000000, 0x00133d61, 0x19060220,
    0x00341205, 0x00000000, 0xa0151b40, 0x0212131a,
    0x00031961, 0x17260220, 0x00341505, 0x00000000,
    0x00131a61, 0x19260220, 0x00341605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044d31, 0x00000000, 0xfb081724, 0x00001b14,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80031361, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_DFS_DFS_trivial = {
   .prog_data = {
      .base.nr_params = 17,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 3,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 14288,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_DFS_DFS_trivial_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_DFS_DFS_trivial_printfs,
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
const char *gfx125_bvh_build_DFS_DFS_trivial_sha1 = "a6a68aa0ce418bdcbda8db68208618cefea3c3f0";

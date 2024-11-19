#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_DFS_DFS_trivial_batchable_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_DFS_DFS_trivial_batchable_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_DFS_DFS_trivial_batchable_args[] = {
   { 0, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g7<1>UD         g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g88<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g7UD            nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g11<1>UW        0x76543210V                     { align1 WE_all 1Q };
mul(8)          acc0<1>UD       g88<8,8,1>UD    0x0058UW        { align1 1Q I@2 };
mul(16)         g111<1>D        g88<1,1,0>D     88W             { align1 1H I@3 compacted };
add(8)          g11.8<1>UW      g11<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@3 compacted };
mach(8)         g109<1>UD       g88<1,1,0>UD    0x00000058UD    { align1 1Q compacted AccWrEnable };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g45<1>UD        g11<8,8,1>UW                    { align1 1H };
mul(8)          acc0<1>UD       g89<8,8,1>UD    0x0058UW        { align1 2Q };
and(16)         g56<1>UD        g45<1,1,0>UD    0x0000000fUD    { align1 1H I@2 compacted };
mach(8)         g110<1>UD       g89<8,8,1>UD    0x00000058UD    { align1 2Q AccWrEnable };
mov(16)         g92<2>UW        g56<8,8,1>UD                    { align1 1H I@2 };
mov(16)         g47<1>UD        g56<16,8,2>UW                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g113<1>D        g2<0,1,0>D      g111<1,1,0>D    { align1 1H I@7 compacted };
cmp.l.f0.0(16)  g115<1>UD       g113<1,1,0>UD   g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g3<2>UD         g113<4,4,1>UD                   { align1 1Q };
mov(8)          g5<2>UD         g114<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g7<1>D          g113<1,1,0>D    32D             { align1 1H compacted };
add(16)         g20<1>D         g113<1,1,0>D    60D             { align1 1H compacted };
add(16)         g25<1>D         g113<1,1,0>D    48D             { align1 1H compacted };
add3(16)        g117<1>D        g2.1<0,1,0>D    g109<8,8,1>D    -g115<1,1,1>D { align1 1H I@6 };
cmp.l.f0.0(16)  g12<1>UD        g7<1,1,0>UD     g113<1,1,0>UD   { align1 1H I@4 compacted };
mov(8)          g16<2>UD        g7<4,4,1>UD                     { align1 1Q };
mov(8)          g18<2>UD        g8<4,4,1>UD                     { align1 2Q };
cmp.l.f0.0(16)  g22<1>UD        g20<1,1,0>UD    g113<1,1,0>UD   { align1 1H I@6 compacted };
mov(8)          g120<2>UD       g20<4,4,1>UD                    { align1 1Q };
mov(8)          g122<2>UD       g21<4,4,1>UD                    { align1 2Q };
mov(8)          g124<2>UD       g25<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g126<2>UD       g26<4,4,1>UD                    { align1 2Q I@7 };
cmp.l.f0.0(16)  g27<1>UD        g25<1,1,0>UD    g113<1,1,0>UD   { align1 1H compacted };
mov(8)          g3.1<2>UD       g117<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g5.1<2>UD       g118<4,4,1>UD                   { align1 2Q };
add(16)         g14<1>D         -g12<1,1,0>D    g117<1,1,0>D    { align1 1H compacted };
add(16)         g24<1>D         -g22<1,1,0>D    g117<1,1,0>D    { align1 1H I@7 compacted };
add(16)         g29<1>D         -g27<1,1,0>D    g117<1,1,0>D    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(16)        g37UD           g3UD            nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(8)          g16.1<2>UD      g14<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g18.1<2>UD      g15<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g120.1<2>UD     g24<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g122.1<2>UD     g25<4,4,1>UD                    { align1 2Q I@5 };
mov(8)          g124.1<2>UD     g29<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g126.1<2>UD     g30<4,4,1>UD                    { align1 2Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g33UD           g16UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g84UD           g120UD          nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g51UD           g124UD          nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(16)         g9<2>UW         g84<8,8,1>UD                    { align1 1H $1.dst };
and(16)         g55<1>UD        g51<1,1,0>UD    0x00000001UD    { align1 1H $1.dst compacted };
mov(16)         g49<1>UD        g53<16,8,2>UW                   { align1 1H $1.dst };
cmp.nz.f0.0(16) g51<1>D         g55<1,1,0>D     0D              { align1 1H I@2 compacted };
cmp.l.f0.0(16)  null<1>D        g47<8,8,1>D     g49<8,8,1>D     { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
shl(16)         g57<1>D         g47<8,8,1>D     0x00000005UD    { align1 1H };
shr(16)         g59<1>UD        g47<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
add(16)         g61<1>D         g41<1,1,0>D     g57<1,1,0>D     { align1 1H @2 $1.dst compacted };
cmp.l.f0.0(16)  g63<1>UD        g61<1,1,0>UD    g41<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g67<2>UD        g61<4,4,1>UD                    { align1 1Q };
mov(8)          g69<2>UD        g62<4,4,1>UD                    { align1 2Q };
add(16)         g71<1>D         g61<1,1,0>D     16D             { align1 1H compacted };
add3(16)        g65<1>D         g43<8,8,1>D     g59<8,8,1>D     -g63<1,1,1>D { align1 1H @4 $1.dst };
cmp.l.f0.0(16)  g73<1>UD        g71<1,1,0>UD    g61<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g23<2>UD        g71<4,4,1>UD                    { align1 1Q };
mov(8)          g25<2>UD        g72<4,4,1>UD                    { align1 2Q };
mov(8)          g67.1<2>UD      g65<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g69.1<2>UD      g66<4,4,1>UD                    { align1 2Q I@5 };
add(16)         g75<1>D         -g73<1,1,0>D    g65<1,1,0>D     { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g15UD           g67UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov(8)          g23.1<2>UD      g75<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g25.1<2>UD      g76<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g1UD            g23UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
mov(16)         g69<1>UD        g15<8,8,1>UD                    { align1 1H $3.dst };
mov(16)         g71<1>UD        g17<8,8,1>UD                    { align1 1H $3.dst };
mov(16)         g73<1>UD        g19<8,8,1>UD                    { align1 1H $3.dst };
mov(16)         g13<1>UD        g21<8,8,1>UD                    { align1 1H $3.dst };
mov(16)         g15<1>UD        g1<8,8,1>UD                     { align1 1H $4.dst };
mov(16)         g65<1>UD        g3<8,8,1>UD                     { align1 1H $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g67<1>UD        g5<8,8,1>UD                     { align1 1H $4.dst };
mov(16)         g31<1>UD        g7<8,8,1>UD                     { align1 1H $4.dst };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g13<1>UD        0x00000000UD                    { align1 1H I@6 };
mov(16)         g73<1>UD        0x7f800000UD                    { align1 1H I@7 };
mov(16)         g71<1>UD        0x7f800000UD                    { align1 1H I@7 };
mov(16)         g69<1>UD        0x7f800000UD                    { align1 1H };
mov(16)         g31<1>UD        0x80000000UD                    { align1 1H I@6 };
mov(16)         g67<1>UD        0xff800000UD                    { align1 1H I@7 };
mov(16)         g65<1>UD        0xff800000UD                    { align1 1H I@7 };
mov(16)         g15<1>UD        0xff800000UD                    { align1 1H $2.src };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g17<1>UD        g69<8,8,1>UD                    { align1 1H I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g19<1>UD        g71<8,8,1>UD                    { align1 1H I@7 };
mov(16)         g21<1>UD        g73<8,8,1>UD                    { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g23<1>UD        g13<8,8,1>UD                    { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g25<1>UD        g15<8,8,1>UD                    { align1 1H I@6 };
mov(16)         g27<1>UD        g65<8,8,1>UD                    { align1 1H I@7 };
mov(16)         g29<1>UD        g67<8,8,1>UD                    { align1 1H I@7 };
cmp.z.f0.0(16)  g76<1>W         g92<16,8,2>W    0W              { align1 1H };
mov(1)          g83<1>D         1D                              { align1 WE_all 1N };
mov.nz.f0.0(16) g53<1>D         g76<8,8,1>W                     { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
add(16)         g77<1>D         g33<1,1,0>D     12D             { align1 1H $2.dst compacted };
cmp.l.f0.0(16)  g79<1>UD        g77<1,1,0>UD    g33<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g55<2>UD        g77<4,4,1>UD                    { align1 1Q };
mov(8)          g57<2>UD        g78<4,4,1>UD                    { align1 2Q };
add(16)         g81<1>D         -g79<1,1,0>D    g35<1,1,0>D     { align1 1H @3 $2.dst compacted };
mov(8)          g55.1<2>UD      g81<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g57.1<2>UD      g82<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g119<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g119<1>UD       g119<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(1)          g120<1>UD       sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g120<1>UD       g120<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
and(1)          g120<1>UD       g119<0,1,0>UD   g120<0,1,0>UD   { align1 WE_all 1N I@1 compacted };
mov(1)          g86<1>UD        g120<0,1,0>UD                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cbit(16)        g88<1>UD        g86<0,1,0>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(1)          g121<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g121<1>UD       g121<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g90<1>UD        g121<0,1,0>UD                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  null<1>D        g45<8,8,1>D     g90<0,1,0>D     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL4          UIP:  LABEL4              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g95UD           g55UD           g88UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $5 };

LABEL4:
endif(16)       JIP:  LABEL3                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(1)          g122<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g122<1>UD       g122<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g91<1>UD        g122<0,1,0>UD                   { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g91<0,1,0>UD    0x00000002UD    { align1 WE_all 1N @1 $5.dst };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g93<1>UD        g[a0 480]<0,1,0>UD              { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(1)          g123<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g123<1>UD       g123<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
mov(16)         g99<1>UD        g11<8,8,1>UW                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(1)          g124<1>UD       sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g124<1>UD       g124<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g101<1>D        -g83<0,1,0>D    g99<8,8,1>UD    { align1 1H };
and(1)          g124<1>UD       g123<0,1,0>UD   g124<0,1,0>UD   { align1 WE_all 1N I@2 compacted };
mov(1)          g97<1>UD        g124<0,1,0>UD                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(16)         g103<1>UD       g97<0,1,0>UD    ~g101<8,8,1>D   { align1 1H };
cbit(16)        g105<1>UD       g103<8,8,1>UD                   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g107<1>D        g93<0,1,0>D     g105<1,1,0>D    { align1 1H compacted };
shl(16)         g63<1>D         g107<8,8,1>D    0x00000006UD    { align1 1H I@1 };

LABEL3:
endif(16)       JIP:  LABEL5                                    { align1 1H };

LABEL5:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g55<1>D         g33<1,1,0>D     g63<0,1,0>D     { align1 1H @2 $2.dst compacted };
add(16)         g110<1>D        g33<1,1,0>D     16D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g77<1>D         g45<1,1,0>D     4D              { align1 1H compacted };
add(16)         g79<1>D         g45<1,1,0>D     -12D            { align1 1H compacted };
add(16)         g81<1>D         g45<1,1,0>D     2D              { align1 1H compacted };
add(16)         g86<1>D         g45<1,1,0>D     -14D            { align1 1H compacted };
add(16)         g88<1>D         g45<1,1,0>D     1D              { align1 1H $5.src compacted };
add(16)         g90<1>D         g45<1,1,0>D     -15D            { align1 1H compacted };
mov(1)          g83.1<1>D       2147483647D                     { align1 WE_all 1N };
cmp.l.f0.0(16)  g108<1>UD       g55<1,1,0>UD    g33<1,1,0>UD    { align1 1H I@7 compacted };
mov(8)          g59<2>UD        g55<4,4,1>UD                    { align1 1Q };
mov(8)          g61<2>UD        g56<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g1<2>UD         g110<4,4,1>UD                   { align1 1Q };
mov(8)          g3<2>UD         g111<4,4,1>UD                   { align1 2Q $1.src };
cmp.l.f0.0(16)  g112<1>UD       g110<1,1,0>UD   g33<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  null<1>D        g77<8,8,1>D     16D             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g57<1>D         -g108<1,1,0>D   g35<1,1,0>D     { align1 1H @7 $2.dst compacted };
add(16)         g114<1>D        -g112<1,1,0>D   g35<1,1,0>D     { align1 1H I@3 compacted };
(+f0.0) sel(16) g75<1>UD        g77<1,1,0>UD    g79<1,1,0>UD    { align1 1H compacted };
mov(8)          g59.1<2>UD      g57<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g61.1<2>UD      g58<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g1.1<2>UD       g114<4,4,1>UD                   { align1 1Q I@4 };
mov(8)          g3.1<2>UD       g115<4,4,1>UD                   { align1 2Q I@5 };
cmp.l.f0.0(16)  null<1>D        g81<8,8,1>D     16D             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g115UD          g1UD            nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
(+f0.0) sel(16) g77<1>UD        g81<1,1,0>UD    g86<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  null<1>D        g88<8,8,1>D     16D             { align1 1H };
(+f0.0) sel(16) g79<1>UD        g88<1,1,0>UD    g90<1,1,0>UD    { align1 1H compacted };
shl(16)         g117<1>D        g115<8,8,1>D    0x00000006UD    { align1 1H $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add3(16)        g119<1>D        g33<8,8,1>D     g117<8,8,1>D    -g55<1,1,1>D { align1 1H I@1 };
asr(16)         g7<1>D          g119<8,8,1>D    0x00000006UD    { align1 1H I@1 };
cmp.z.f0.0(16)  g120<1>W        g9<16,8,2>W     1W              { align1 1H };
mov.nz.f0.0(16) g81<1>D         g120<8,8,1>W                    { align1 1H I@1 };
(-f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL6              { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g45<8,8,1>UD    g49<8,8,1>UD    { align1 1H };
(+f0.0) sel(16) g86<1>UD        g15<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g88<1>UD        g65<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g90<1>UD        g67<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g9<1>UD         g69<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g11<1>UD        g71<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g92<1>UD        g73<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         a0<1>UW         0x0ac0UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g75<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ac0UW        { align1 1H A@1 };
mov(16)         g106<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0b00UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g75<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b00UW        { align1 1H A@1 };
mov(16)         g104<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0b40UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g75<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b40UW        { align1 1H A@1 };
mov(16)         g102<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0120UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g75<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0120UW        { align1 1H A@1 };
mov(16)         g100<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0160UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g75<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0160UW        { align1 1H A@1 };
mov(16)         g98<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
mov(16)         a0<1>UW         0x0b80UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g75<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b80UW        { align1 1H A@1 };
mov(16)         g94<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g45<8,8,1>UD    0x00000006UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
sel.ge(16)      g96<1>F         g86<1,1,0>F     g106<1,1,0>F    { align1 1H compacted };
sel.ge(16)      g86<1>F         g88<1,1,0>F     g104<1,1,0>F    { align1 1H A@1 compacted };
sel.ge(16)      g88<1>F         g90<1,1,0>F     g102<1,1,0>F    { align1 1H A@1 compacted };
sel.l(16)       g90<1>F         g9<1,1,0>F      g100<1,1,0>F    { align1 1H A@1 compacted };
sel.l(16)       g9<1>F          g11<1,1,0>F     g98<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0c00UW                        { align1 WE_all 1H F@5 };
shl(16)         a0<1>UW         g77<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0c00UW        { align1 1H A@1 };
mov(16)         g106<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g11<1>F         g92<1,1,0>F     g94<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0ac0UW                        { align1 WE_all 1H F@5 };
shl(16)         a0<1>UW         g77<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ac0UW        { align1 1H A@1 };
mov(16)         g104<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0b00UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g77<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b00UW        { align1 1H A@1 };
mov(16)         g102<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0b40UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g77<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b40UW        { align1 1H A@1 };
mov(16)         g100<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0120UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g77<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0120UW        { align1 1H A@1 };
mov(16)         g98<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g94<1>F         g96<1,1,0>F     g106<1,1,0>F    { align1 1H I@5 compacted };
mov(16)         a0<1>UW         0x0160UW                        { align1 WE_all 1H A@2 };
shl(16)         a0<1>UW         g77<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0160UW        { align1 1H A@1 };
mov(16)         g92<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g96<1>F         g86<1,1,0>F     g104<1,1,0>F    { align1 1H A@1 compacted };
sel.ge(16)      g86<1>F         g88<1,1,0>F     g102<1,1,0>F    { align1 1H A@1 compacted };
sel.l(16)       g88<1>F         g90<1,1,0>F     g100<1,1,0>F    { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0bc0UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g79<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0bc0UW        { align1 1H A@1 };
mov(16)         g106<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g90<1>F         g9<1,1,0>F      g98<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0c00UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g79<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0c00UW        { align1 1H A@1 };
mov(16)         g104<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g9<1>F          g11<1,1,0>F     g92<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0ac0UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g79<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ac0UW        { align1 1H A@1 };
mov(16)         g102<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0b00UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g79<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b00UW        { align1 1H A@1 };
mov(16)         g100<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g92<1>F         g94<1,1,0>F     g106<1,1,0>F    { align1 1H I@4 compacted };
mov(16)         a0<1>UW         0x0b40UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g79<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b40UW        { align1 1H A@1 };
mov(16)         g98<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g94<1>F         g96<1,1,0>F     g104<1,1,0>F    { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0120UW                        { align1 WE_all 1H A@3 };
shl(16)         a0<1>UW         g79<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0120UW        { align1 1H A@1 };
mov(16)         g11<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g96<1>F         g86<1,1,0>F     g102<1,1,0>F    { align1 1H A@1 compacted };
sel.l(16)       g86<1>F         g88<1,1,0>F     g100<1,1,0>F    { align1 1H A@1 compacted };
sel.l(16)       g88<1>F         g90<1,1,0>F     g98<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g90<1>F         g9<1,1,0>F      g11<1,1,0>F     { align1 1H A@1 compacted };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL8              { align1 1H };
sel.ge(16)      g98<1>F         (abs)g86<0,1,0>F (abs)g92<0,1,0>F { align1 1H F@2 compacted };
sel.ge(16)      g100<1>F        (abs)g88<0,1,0>F (abs)g94<0,1,0>F { align1 1H F@3 compacted };
sel.ge(16)      g102<1>F        (abs)g90<0,1,0>F (abs)g96<0,1,0>F { align1 1H F@3 compacted };
add(16)         g106<1>D        g55<1,1,0>D     16D             { align1 1H F@7 compacted };
mov(16)         g110<2>B        -1W                             { align1 1H };
sel.ge(16)      g104<1>F        g100<1,1,0>F    g102<1,1,0>F    { align1 1H F@1 compacted };
mov(16)         g108<4>UB       g84<8,8,1>UD                    { align1 1H };
mov(8)          g9<2>UD         g106<4,4,1>UD                   { align1 1Q A@3 };
mov(8)          g11<2>UD        g107<4,4,1>UD                   { align1 2Q A@4 };
sel.ge(16)      g84<1>F         g98<1,1,0>F     g104<1,1,0>F    { align1 1H A@1 compacted };
mov(16)         g98<1>UD        g108<32,8,4>UB                  { align1 1H A@1 };
mul(16)         g100<1>F        g84<1,1,0>F     0x34000000F  /* 1.19209e-07F */ { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g1<1>F          g86<0,1,0>F     -g100<1,1,0>F   { align1 1H F@1 compacted };
add(16)         g3<1>F          g88<0,1,0>F     -g100<1,1,0>F   { align1 1H $1.src compacted };
add(16)         g5<1>F          g90<0,1,0>F     -g100<1,1,0>F   { align1 1H $1.src compacted };
add(16)         g84<1>F         g92<0,1,0>F     g100<1,1,0>F    { align1 1H compacted };
add(16)         g86<1>F         g94<0,1,0>F     g100<1,1,0>F    { align1 1H compacted };
add(16)         g88<1>F         g96<0,1,0>F     g100<1,1,0>F    { align1 1H compacted };
add(16)         g90<1>F         g84<1,1,0>F     -g1<1,1,0>F     { align1 1H F@3 compacted };
add(16)         g84<1>F         g86<1,1,0>F     -g3<1,1,0>F     { align1 1H F@3 compacted };
add(16)         g96<1>F         g88<1,1,0>F     -g5<1,1,0>F     { align1 1H F@3 compacted };
mul(16)         g86<1>F         g90<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
mul(16)         g92<1>F         g84<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
mul(16)         g94<1>F         g96<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
and(16)         g84<1>UD        g86<8,8,1>UD    0x007fffffUD    { align1 1H F@2 };
and(16)         g100<1>UD       g86<8,8,1>UD    0x7f800000UD    { align1 1H F@7 };
and(16)         g90<1>UD        g92<8,8,1>UD    0x007fffffUD    { align1 1H F@2 };
and(16)         g102<1>UD       g92<8,8,1>UD    0x7f800000UD    { align1 1H };
and(16)         g88<1>UD        g94<8,8,1>UD    0x007fffffUD    { align1 1H F@1 };
and(16)         g104<1>UD       g94<8,8,1>UD    0x7f800000UD    { align1 1H };
add(16)         g96<1>D         g84<8,8,1>D     1056964608D     { align1 1H A@1 };
asr(16)         g84<1>D         g100<8,8,1>D    0x00000017UD    { align1 1H I@6 };
add(16)         g100<1>D        g90<8,8,1>D     1056964608D     { align1 1H I@6 };
asr(16)         g90<1>D         g102<8,8,1>D    0x00000017UD    { align1 1H I@6 };
add(16)         g102<1>D        g88<8,8,1>D     1056964608D     { align1 1H I@6 };
cmp.z.f0.0(16)  null<1>F        g96<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@5 compacted };
asr(16)         g88<1>D         g104<8,8,1>D    0x00000017UD    { align1 1H I@6 };
(-f0.0) sel(16) g104<1>UD       g96<8,8,1>UD    0x3f000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
bfi2(16)        g96<1>UD        g83.1<0,1,0>UD  g104<8,8,1>UD   g86<1,1,1>UD { align1 1H };
cmp.z.f0.0(16)  null<1>F        g100<1,1,0>F    0x3f800000F  /* 1F */ { align1 1H I@6 compacted };
(-f0.0) sel(16) g86<1>UD        g100<8,8,1>UD   0x3f000000UD    { align1 1H };
bfi2(16)        g100<1>UD       g83.1<0,1,0>UD  g86<8,8,1>UD    g92<1,1,1>UD { align1 1H A@1 };
cmp.z.f0.0(16)  null<1>F        g102<1,1,0>F    0x3f800000F  /* 1F */ { align1 1H I@6 compacted };
(-f0.0) sel(16) g86<1>UD        g102<8,8,1>UD   0x3f000000UD    { align1 1H };
bfi2(16)        g92<1>UD        g83.1<0,1,0>UD  g86<8,8,1>UD    g94<1,1,1>UD { align1 1H I@1 };
cmp.g.f0.0(16)  g94<1>F         g96<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@1 };
cmp.g.f0.0(16)  g96<1>F         g100<8,8,1>F    0x3f7f0000F  /* 0.996094F */ { align1 1H I@3 };
cmp.g.f0.0(16)  g100<1>F        g92<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@1 };
add3(16)        g86<1>D         65410W          g84<8,8,1>D     -g94<1,1,1>D { align1 1H F@3 };
add3(16)        g84<1>D         65410W          g90<8,8,1>D     -g96<1,1,1>D { align1 1H A@2 };
cmp.l.f0.0(16)  g90<1>UD        g106<1,1,0>UD   g55<1,1,0>UD    { align1 1H compacted };
add3(16)        g94<1>D         65410W          g88<8,8,1>D     -g100<1,1,1>D { align1 1H A@1 };
add(16)         g88<1>D         -g90<1,1,0>D    g57<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g9.1<2>UD       g88<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g11.1<2>UD      g89<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g9UD            g98UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };
send(16)        nullUD          g59UD           g1UD            0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $1 };
add(16)         g88<1>D         g55<1,1,0>D     18D             { align1 1H compacted };
mov(16)         g96<4>UB        g86<8,8,1>UD                    { align1 1H I@7 };
cmp.l.f0.0(16)  g90<1>UD        g88<1,1,0>UD    g55<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g9<2>UD         g88<4,4,1>UD                    { align1 1Q $6.src };
mov(8)          g11<2>UD        g89<4,4,1>UD                    { align1 2Q $6.src };
mov(16)         g98<4>UB        g84<8,8,1>UD                    { align1 1H $6.src };
mov(16)         g100<4>UB       g94<8,8,1>UD                    { align1 1H I@7 };
mov(16)         g92<4>UB        g96<32,8,4>UB                   { align1 1H A@1 };
add(16)         g88<1>D         -g90<1,1,0>D    g57<1,1,0>D     { align1 1H I@6 compacted };
mov(16)         g92.1<4>UB      g98<32,8,4>UB                   { align1 1H I@2 };
mov(8)          g9.1<2>UD       g88<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g11.1<2>UD      g89<4,4,1>UD                    { align1 2Q I@3 };
mov(16)         g92.2<4>UB      g100<32,8,4>UB                  { align1 1H I@3 };
mov(16)         g92.3<4>UB      g110<16,8,2>UB                  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g9UD            g92UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $7 };
cmp.l.f0.0(16)  null<1>UD       g45<8,8,1>UD    g49<8,8,1>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL9              { align1 1H };
sel.ge(16)      g9<1>F          (abs)g69<1,1,0>F (abs)g15<1,1,0>F { align1 1H $7.src compacted };
sel.ge(16)      g90<1>F         (abs)g71<1,1,0>F (abs)g65<1,1,0>F { align1 1H I@7 compacted };
sel.ge(16)      g92<1>F         (abs)g73<1,1,0>F (abs)g67<1,1,0>F { align1 1H $7.src compacted };
shl(16)         g88<1>D         -g86<8,8,1>D    0x00000017UD    { align1 1H };
shl(16)         g86<1>D         -g84<8,8,1>D    0x00000017UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.ge(16)      g11<1>F         g90<1,1,0>F     g92<1,1,0>F     { align1 1H F@1 compacted };
shl(16)         g84<1>D         -g94<8,8,1>D    0x00000017UD    { align1 1H };
add(16)         g94<1>D         g88<8,8,1>D     1132462080D     { align1 1H I@3 };
add(16)         g96<1>D         g86<8,8,1>D     1132462080D     { align1 1H I@3 };
add(16)         g98<1>D         g84<8,8,1>D     1132462080D     { align1 1H I@3 };
sel.ge(16)      g84<1>F         g9<1,1,0>F      g11<1,1,0>F     { align1 1H A@1 compacted };
mul(16)         g9<1>F          g84<1,1,0>F     0x34000000F  /* 1.19209e-07F */ { align1 1H F@1 compacted };
add(16)         g11<1>F         g69<1,1,0>F     -g9<1,1,0>F     { align1 1H F@1 compacted };
add(16)         g84<1>F         g71<1,1,0>F     -g9<1,1,0>F     { align1 1H compacted };
add(16)         g86<1>F         g73<1,1,0>F     -g9<1,1,0>F     { align1 1H I@2 compacted };
add(16)         g88<1>F         g15<1,1,0>F     g9<1,1,0>F      { align1 1H I@3 compacted };
add(16)         g90<1>F         g65<1,1,0>F     g9<1,1,0>F      { align1 1H compacted };
add(16)         g92<1>F         g67<1,1,0>F     g9<1,1,0>F      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g9<1>F          g11<1,1,0>F     -g1<1,1,0>F     { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g11<1>F         g84<1,1,0>F     -g3<1,1,0>F     { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g84<1>F         g86<1,1,0>F     -g5<1,1,0>F     { align1 1H F@6 compacted };
add(16)         g86<1>F         g88<1,1,0>F     -g1<1,1,0>F     { align1 1H F@6 compacted };
add(16)         g88<1>F         g90<1,1,0>F     -g3<1,1,0>F     { align1 1H F@6 compacted };
add(16)         g90<1>F         g92<1,1,0>F     -g5<1,1,0>F     { align1 1H F@6 compacted };
mul(16)         g92<1>F         g9<8,8,1>F      0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g9<1>F          g11<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g11<1>F         g84<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g84<1>F         g86<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g86<1>F         g88<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g88<1>F         g90<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g90<1>F         g92<1,1,0>F     g94<1,1,0>F     { align1 1H A@3 compacted };
mul(16)         g92<1>F         g9<1,1,0>F      g96<1,1,0>F     { align1 1H A@2 compacted };
mul(16)         g9<1>F          g11<1,1,0>F     g98<1,1,0>F     { align1 1H A@1 compacted };
mul(16)         g11<1>F         g84<1,1,0>F     g94<1,1,0>F     { align1 1H F@6 compacted };
mul(16)         g84<1>F         g86<1,1,0>F     g96<1,1,0>F     { align1 1H F@6 compacted };
mul(16)         g86<1>F         g88<1,1,0>F     g98<1,1,0>F     { align1 1H F@6 compacted };
rndd(16)        g88<1>F         g90<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g90<1>F         g92<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g92<1>F         g9<1,1,0>F                      { align1 1H F@6 compacted };
rndd(16)        g9<1>F          -g11<1,1,0>F                    { align1 1H F@6 compacted };
rndd(16)        g11<1>F         -g84<1,1,0>F                    { align1 1H F@6 compacted };
rndd(16)        g84<1>F         -g86<1,1,0>F                    { align1 1H F@6 compacted };
sel.ge(16)      g86<1>F         g88<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g88<1>F         g90<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g90<1>F         g92<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g92<1>F         -g9<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g9<1>F          -g11<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g11<1>F         -g84<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.l(16)       g84<1>F         g86<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g86<1>F         g88<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g88<1>F         g90<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g90<1>F         g92<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g92<1>F         g9<8,8,1>F      0x437f0000F  /* 255F */ { align1 1H F@6 };
mov(16)         g100<4>UB       g84<8,8,1>F                     { align1 1H A@5 };
sel.l(16)       g9<1>F          g11<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
mov(16)         g102<4>UB       g86<8,8,1>F                     { align1 1H F@5 };
mov(16)         g104<4>UB       g88<8,8,1>F                     { align1 1H F@4 };
mov(16)         g106<4>UB       g90<8,8,1>F                     { align1 1H F@3 };
mov(16)         g108<4>UB       g92<8,8,1>F                     { align1 1H F@2 };
mov(16)         g99<1>UW        g100<32,8,4>UB                  { align1 1H I@5 };
mov(16)         g110<4>UB       g9<8,8,1>F                      { align1 1H F@1 };
mov(16)         g98<1>UW        g102<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g97<1>UW        g104<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g102<1>UW       g106<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g101<1>UW       g108<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g100<1>UW       g110<32,8,4>UB                  { align1 1H I@5 };
else(16)        JIP:  LABEL9          UIP:  LABEL9              { align1 1H };

LABEL10:
mov(16)         g97<1>UW        0x0080UW                        { align1 1H I@5 };
mov(16)         g98<1>UW        0x0080UW                        { align1 1H I@7 };
mov(16)         g99<1>UW        0x0080UW                        { align1 1H I@7 };
mov(16)         g100<1>UW       0x0000UW                        { align1 1H I@5 };
mov(16)         g101<1>UW       0x0000UW                        { align1 1H I@7 };
mov(16)         g102<1>UW       0x0000UW                        { align1 1H A@4 };

LABEL9:
endif(16)       JIP:  LABEL8                                    { align1 1H };
add(16)         g84<1>D         g55<1,1,0>D     g45<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g127<2>UB       g97<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g103<2>UB       g98<16,16,1>UW                  { align1 1H A@4 };
mov(16)         g104<2>UB       g99<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g90<2>UB        g100<16,16,1>UW                 { align1 1H I@7 };
mov(16)         g95<2>UB        g101<16,16,1>UW                 { align1 1H I@7 };
mov(16)         g96<2>UB        g102<16,16,1>UW                 { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(16)  g91<1>UD        g84<1,1,0>UD    g55<1,1,0>UD    { align1 1H I@7 compacted };
add(16)         g93<1>D         g84<1,1,0>D     28D             { align1 1H $7.src compacted };
mov(16)         g88<1>UD        g104<16,8,2>UB                  { align1 1H I@6 };
add(16)         g86<1>D         -g91<1,1,0>D    g57<1,1,0>D     { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g91<1>UD        g93<1,1,0>UD    g84<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g9<2>UD         g93<4,4,1>UD                    { align1 1Q $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $7.src };
mov(8)          g11<2>UD        g94<4,4,1>UD                    { align1 2Q F@1 };
add(16)         g93<1>D         -g91<1,1,0>D    g86<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g9.1<2>UD       g93<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g11.1<2>UD      g94<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g9UD            g88UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };
add(16)         g91<1>D         g84<1,1,0>D     40D             { align1 1H compacted };
mov(16)         g88<1>UD        g103<16,8,2>UB                  { align1 1H $8.src };
cmp.l.f0.0(16)  g93<1>UD        g91<1,1,0>UD    g84<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g9<2>UD         g91<4,4,1>UD                    { align1 1Q $8.src };
mov(8)          g11<2>UD        g92<4,4,1>UD                    { align1 2Q $8.src };
add(16)         g91<1>D         -g93<1,1,0>D    g86<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g9.1<2>UD       g91<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g11.1<2>UD      g92<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g9UD            g88UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $9 };
add(16)         g88<1>D         g84<1,1,0>D     52D             { align1 1H $9.src compacted };
mov(16)         g93<1>UD        g127<16,8,2>UB                  { align1 1H };
cmp.l.f0.0(16)  g91<1>UD        g88<1,1,0>UD    g84<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g9<2>UD         g88<4,4,1>UD                    { align1 1Q $9.src };
mov(8)          g11<2>UD        g89<4,4,1>UD                    { align1 2Q $9.src };
add(16)         g88<1>D         -g91<1,1,0>D    g86<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g9.1<2>UD       g88<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g11.1<2>UD      g89<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g9UD            g93UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $10 };
add(16)         g88<1>D         g84<1,1,0>D     34D             { align1 1H compacted };
mov(16)         g91<1>UD        g96<16,8,2>UB                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
cmp.l.f0.0(16)  g93<1>UD        g88<1,1,0>UD    g84<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g9<2>UD         g88<4,4,1>UD                    { align1 1Q $10.src };
mov(8)          g11<2>UD        g89<4,4,1>UD                    { align1 2Q $10.src };
add(16)         g88<1>D         -g93<1,1,0>D    g86<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g9.1<2>UD       g88<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g11.1<2>UD      g89<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g9UD            g91UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g121<1>D        g84<1,1,0>D     46D             { align1 1H compacted };
mov(16)         g88<1>UD        g95<16,8,2>UB                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g123<1>UD       g121<1,1,0>UD   g84<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g9<2>UD         g121<4,4,1>UD                   { align1 1Q $11.src };
mov(8)          g11<2>UD        g122<4,4,1>UD                   { align1 2Q $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g125<1>D        -g123<1,1,0>D   g86<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g9.1<2>UD       g125<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g11.1<2>UD      g126<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g9UD            g88UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $12 };
add(16)         g126<1>D        g84<1,1,0>D     58D             { align1 1H compacted };
mov(16)         g91<1>UD        g90<16,8,2>UB                   { align1 1H $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
cmp.l.f0.0(16)  g88<1>UD        g126<1,1,0>UD   g84<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g9<2>UD         g126<4,4,1>UD                   { align1 1Q $12.src };
mov(8)          g11<2>UD        g127<4,4,1>UD                   { align1 2Q $12.src };
add(16)         g93<1>D         -g88<1,1,0>D    g86<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g9.1<2>UD       g93<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g11.1<2>UD      g94<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g9UD            g91UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $13 };
cmp.nz.f0.0(16) null<1>D        g81<8,8,1>D     0D              { align1 1H };
add(16)         g97<1>D         g84<1,1,0>D     22D             { align1 1H compacted };
(-f0.0) sel(16) g95<1>UD        g83<0,1,0>UD    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(8)          g9<2>UD         g97<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $13.src };
mov(8)          g11<2>UD        g98<4,4,1>UD                    { align1 2Q I@3 };
mov(16)         g93<4>UB        g95<8,8,1>UD                    { align1 1H I@3 };
cmp.l.f0.0(16)  g99<1>UD        g97<1,1,0>UD    g84<1,1,0>UD    { align1 1H compacted };
mov(16)         g89<1>UD        g93<32,8,4>UB                   { align1 1H I@2 };
add(16)         g101<1>D        -g99<1,1,0>D    g86<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g9.1<2>UD       g101<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g11.1<2>UD      g102<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g9UD            g89UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };

LABEL8:
endif(16)       JIP:  LABEL11                                   { align1 1H };

LABEL11:
else(16)        JIP:  LABEL6          UIP:  LABEL6              { align1 1H };

LABEL7:
mov(16)         g102<1>UD       g13.3<32,8,4>UB                 { align1 1H A@3 };
cmp.l.f0.0(16)  null<1>D        g47<8,8,1>D     g49<8,8,1>D     { align1 1H };
(+f0.0) sel(16) g81<1>UD        g102<1,1,0>UD   0x00000000UD    { align1 1H I@2 compacted };
mov(16)         g103<1>UD       g81<32,8,4>UB                   { align1 1H A@1 };
cmp.l.f0.0(16)  null<1>UD       g45<8,8,1>UD    g49<8,8,1>UD    { align1 1H };
mov(16)         a0<1>UW         0x0ce0UW                        { align1 WE_all 1H A@2 };
shl(16)         a0<1>UW         g75<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ce0UW        { align1 1H A@1 };
mov(16)         g105<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
or(16)          g107<1>UD       g81<1,1,0>UD    g105<1,1,0>UD   { align1 1H A@1 compacted };
mov(16)         g109<1>UD       g107<32,8,4>UB                  { align1 1H I@1 };
mov(16)         a0<1>UW         0x0da0UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g77<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0da0UW        { align1 1H A@1 };
mov(16)         g111<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
or(16)          g113<1>UD       g109<1,1,0>UD   g111<1,1,0>UD   { align1 1H I@1 compacted };
mov(16)         g115<1>UD       g113<32,8,4>UB                  { align1 1H I@1 };
mov(16)         a0<1>UW         0x0e60UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g79<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0e60UW        { align1 1H A@1 };
mov(16)         g117<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
or(16)          g119<1>UD       g113<1,1,0>UD   g117<1,1,0>UD   { align1 1H I@1 compacted };
mov(16)         g84<4>UB        g119<0,1,0>UD                   { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL12             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g121<1>UD       g119<0,1,0>UB                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.z.f0.0(16)  g123<1>D        g121<1,1,0>D    0D              { align1 1H I@1 compacted };
cmp.z.f0.0(16)  null<1>D        g81<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
(+f0.0) sel(16) g125<1>UD       g123<8,8,1>UD   0xffffffffUD    { align1 1H I@2 };
cmp.nz.f0.0(16) null<1>D        g125<8,8,1>D    0D              { align1 1H I@1 };
(+f0.0) sel(16) g86<1>UD        g15<8,8,1>UD    0xff800000UD    { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
(+f0.0) sel(16) g88<1>UD        g65<8,8,1>UD    0xff800000UD    { align1 1H F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
(+f0.0) sel(16) g90<1>UD        g67<8,8,1>UD    0xff800000UD    { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
(+f0.0) sel(16) g92<1>UD        g69<8,8,1>UD    0x7f800000UD    { align1 1H F@6 };
(+f0.0) sel(16) g69<1>UD        g71<8,8,1>UD    0x7f800000UD    { align1 1H I@1 };
(+f0.0) sel(16) g71<1>UD        g73<8,8,1>UD    0x7f800000UD    { align1 1H I@1 };
else(16)        JIP:  LABEL12         UIP:  LABEL12             { align1 1H };

LABEL13:
mov(16)         g71<1>UD        0x7f800000UD                    { align1 1H I@2 };
mov(16)         g69<1>UD        0x7f800000UD                    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g92<1>UD        0x7f800000UD                    { align1 1H A@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g90<1>UD        0xff800000UD                    { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g88<1>UD        0xff800000UD                    { align1 1H A@2 };
mov(16)         g86<1>UD        0xff800000UD                    { align1 1H F@3 };

LABEL12:
endif(16)       JIP:  LABEL6                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         a0<1>UW         0x0b80UW                        { align1 WE_all 1H I@5 };
shl(16)         a0<1>UW         g75<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b80UW        { align1 1H A@1 };
mov(16)         g126<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x08a0UW                        { align1 WE_all 1H A@2 };
shl(16)         a0<1>UW         g75<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x08a0UW        { align1 1H A@1 };
mov(16)         g98<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
mov(16)         a0<1>UW         0x08e0UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g75<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x08e0UW        { align1 1H A@1 };
mov(16)         g96<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@5 };
mov(16)         a0<1>UW         0x0ac0UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g75<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ac0UW        { align1 1H A@1 };
mov(16)         g94<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0b00UW                        { align1 WE_all 1H I@7 };
shl(16)         a0<1>UW         g75<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b00UW        { align1 1H A@1 };
mov(16)         g67<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0b40UW                        { align1 WE_all 1H I@7 };
shl(16)         a0<1>UW         g75<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b40UW        { align1 1H A@1 };
mov(16)         g65<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g45<8,8,1>UD    0x00000006UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.l(16)       g9<1>F          g92<1,1,0>F     g126<1,1,0>F    { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.l(16)       g11<1>F         g69<1,1,0>F     g98<1,1,0>F     { align1 1H A@2 compacted };
sel.l(16)       g13<1>F         g71<1,1,0>F     g96<1,1,0>F     { align1 1H I@5 compacted };
sel.ge(16)      g73<1>F         g86<1,1,0>F     g94<1,1,0>F     { align1 1H I@4 compacted };
sel.ge(16)      g75<1>F         g88<1,1,0>F     g67<1,1,0>F     { align1 1H I@2 compacted };
sel.ge(16)      g94<1>F         g90<1,1,0>F     g65<1,1,0>F     { align1 1H I@2 compacted };
mov(16)         a0<1>UW         0x0120UW                        { align1 WE_all 1H F@6 };
shl(16)         a0<1>UW         g77<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0120UW        { align1 1H A@1 };
mov(16)         g15<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0160UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g77<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0160UW        { align1 1H A@1 };
mov(16)         g65<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x01a0UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g77<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x01a0UW        { align1 1H A@1 };
mov(16)         g67<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0920UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g77<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0920UW        { align1 1H A@1 };
mov(16)         g96<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0960UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g77<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0960UW        { align1 1H A@1 };
mov(16)         g98<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0bc0UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g77<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0bc0UW        { align1 1H A@1 };
mov(16)         g100<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g77<1>F         g9<1,1,0>F      g15<1,1,0>F     { align1 1H I@1 compacted };
sel.l(16)       g9<1>F          g11<1,1,0>F     g65<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g11<1>F         g13<1,1,0>F     g67<1,1,0>F     { align1 1H A@1 compacted };
sel.ge(16)      g15<1>F         g75<1,1,0>F     g98<1,1,0>F     { align1 1H I@2 compacted };
sel.ge(16)      g13<1>F         g73<1,1,0>F     g96<1,1,0>F     { align1 1H A@2 compacted };
sel.ge(16)      g65<1>F         g94<1,1,0>F     g100<1,1,0>F    { align1 1H I@1 compacted };
mov(16)         a0<1>UW         0x09a0UW                        { align1 WE_all 1H A@2 };
shl(16)         a0<1>UW         g79<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x09a0UW        { align1 1H A@1 };
mov(16)         g75<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0120UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g79<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0120UW        { align1 1H A@1 };
mov(16)         g100<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0160UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g79<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0160UW        { align1 1H A@1 };
mov(16)         g98<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x01e0UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g79<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x01e0UW        { align1 1H A@1 };
mov(16)         g96<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x01a0UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g79<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x01a0UW        { align1 1H A@1 };
mov(16)         g94<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0820UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g79<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0820UW        { align1 1H A@1 };
mov(16)         g67<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g73<1>F         g77<1,1,0>F     g75<1,1,0>F     { align1 1H A@2 compacted };
sel.l(16)       g77<1>F         g11<1,1,0>F     g98<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g75<1>F         g9<1,1,0>F      g100<1,1,0>F    { align1 1H I@5 compacted };
sel.ge(16)      g79<1>F         g13<1,1,0>F     g94<1,1,0>F     { align1 1H I@1 compacted };
sel.ge(16)      g94<1>F         g15<1,1,0>F     g96<1,1,0>F     { align1 1H I@3 compacted };
sel.ge(16)      g96<1>F         g65<1,1,0>F     g67<1,1,0>F     { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL14         UIP:  LABEL14             { align1 1H };
sel.ge(16)      g11<1>F         (abs)g73<0,1,0>F (abs)g79<0,1,0>F { align1 1H A@3 compacted };
sel.ge(16)      g9<1>F          (abs)g75<0,1,0>F (abs)g94<0,1,0>F { align1 1H A@3 compacted };
sel.ge(16)      g15<1>F         (abs)g77<0,1,0>F (abs)g96<0,1,0>F { align1 1H A@3 compacted };
add(16)         g106<1>D        g55<1,1,0>D     16D             { align1 1H compacted };
sel.ge(16)      g13<1>F         g9<1,1,0>F      g15<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         g105<2>B        1W                              { align1 1H };
mov(8)          g65<2>UD        g106<4,4,1>UD                   { align1 1Q A@2 };
mov(8)          g67<2>UD        g107<4,4,1>UD                   { align1 2Q A@3 };
sel.ge(16)      g9<1>F          g11<1,1,0>F     g13<1,1,0>F     { align1 1H F@1 compacted };
mov(16)         g108<1>UD       g105<16,8,2>UB                  { align1 1H I@3 };
mul(16)         g98<1>F         g9<1,1,0>F      0x34000000F  /* 1.19209e-07F */ { align1 1H F@1 compacted };
add(16)         g9<1>F          g73<0,1,0>F     -g98<1,1,0>F    { align1 1H F@1 compacted };
add(16)         g11<1>F         g75<0,1,0>F     -g98<1,1,0>F    { align1 1H compacted };
add(16)         g13<1>F         g77<0,1,0>F     -g98<1,1,0>F    { align1 1H compacted };
add(16)         g73<1>F         g79<0,1,0>F     g98<1,1,0>F     { align1 1H compacted };
add(16)         g75<1>F         g94<0,1,0>F     g98<1,1,0>F     { align1 1H compacted };
add(16)         g77<1>F         g96<0,1,0>F     g98<1,1,0>F     { align1 1H compacted };
add(16)         g79<1>F         g73<1,1,0>F     -g9<1,1,0>F     { align1 1H F@3 compacted };
add(16)         g94<1>F         g75<1,1,0>F     -g11<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g96<1>F         g77<1,1,0>F     -g13<1,1,0>F    { align1 1H F@3 compacted };
mul(16)         g73<1>F         g79<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
mul(16)         g75<1>F         g94<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
mul(16)         g77<1>F         g96<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
and(16)         g79<1>UD        g73<8,8,1>UD    0x007fffffUD    { align1 1H F@3 };
and(16)         g100<1>UD       g73<8,8,1>UD    0x7f800000UD    { align1 1H };
and(16)         g94<1>UD        g75<8,8,1>UD    0x007fffffUD    { align1 1H F@2 };
and(16)         g102<1>UD       g75<8,8,1>UD    0x7f800000UD    { align1 1H };
and(16)         g96<1>UD        g77<8,8,1>UD    0x007fffffUD    { align1 1H F@1 };
and(16)         g104<1>UD       g77<8,8,1>UD    0x7f800000UD    { align1 1H };
add(16)         g98<1>D         g79<8,8,1>D     1056964608D     { align1 1H A@6 };
asr(16)         g79<1>D         g100<8,8,1>D    0x00000017UD    { align1 1H I@6 };
add(16)         g100<1>D        g94<8,8,1>D     1056964608D     { align1 1H I@6 };
asr(16)         g94<1>D         g102<8,8,1>D    0x00000017UD    { align1 1H I@6 };
add(16)         g102<1>D        g96<8,8,1>D     1056964608D     { align1 1H I@6 };
cmp.z.f0.0(16)  null<1>F        g98<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@5 compacted };
asr(16)         g96<1>D         g104<8,8,1>D    0x00000017UD    { align1 1H I@6 };
(-f0.0) sel(16) g104<1>UD       g98<8,8,1>UD    0x3f000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
bfi2(16)        g98<1>UD        g83.1<0,1,0>UD  g104<8,8,1>UD   g73<1,1,1>UD { align1 1H };
cmp.z.f0.0(16)  null<1>F        g100<1,1,0>F    0x3f800000F  /* 1F */ { align1 1H I@6 compacted };
(-f0.0) sel(16) g73<1>UD        g100<8,8,1>UD   0x3f000000UD    { align1 1H };
bfi2(16)        g100<1>UD       g83.1<0,1,0>UD  g73<8,8,1>UD    g75<1,1,1>UD { align1 1H A@1 };
cmp.z.f0.0(16)  null<1>F        g102<1,1,0>F    0x3f800000F  /* 1F */ { align1 1H I@6 compacted };
(-f0.0) sel(16) g73<1>UD        g102<8,8,1>UD   0x3f000000UD    { align1 1H };
bfi2(16)        g75<1>UD        g83.1<0,1,0>UD  g73<8,8,1>UD    g77<1,1,1>UD { align1 1H I@1 };
cmp.g.f0.0(16)  g73<1>F         g98<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@1 };
cmp.g.f0.0(16)  g98<1>F         g100<8,8,1>F    0x3f7f0000F  /* 0.996094F */ { align1 1H I@3 };
add3(16)        g77<1>D         65410W          g79<8,8,1>D     -g73<1,1,1>D { align1 1H F@2 };
cmp.g.f0.0(16)  g79<1>F         g75<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@1 };
add3(16)        g73<1>D         65410W          g94<8,8,1>D     -g98<1,1,1>D { align1 1H A@2 };
cmp.l.f0.0(16)  g94<1>UD        g106<1,1,0>UD   g55<1,1,0>UD    { align1 1H compacted };
add3(16)        g75<1>D         65410W          g96<8,8,1>D     -g79<1,1,1>D { align1 1H A@1 };
add(16)         g79<1>D         -g94<1,1,0>D    g57<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g65.1<2>UD      g79<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g67.1<2>UD      g80<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g65UD           g108UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
mov(16)         g15<1>UD        g7<8,8,1>UD                     { align1 1H $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g59UD           g9UD            0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $1 };
add(16)         g94<1>D         g55<1,1,0>D     18D             { align1 1H compacted };
mov(16)         g106<4>UB       g77<8,8,1>UD                    { align1 1H I@7 };
cmp.l.f0.0(16)  g96<1>UD        g94<1,1,0>UD    g55<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g1<2>UD         g94<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g3<2>UD         g95<4,4,1>UD                    { align1 2Q $1.src };
mov(16)         g108<4>UB       g73<8,8,1>UD                    { align1 1H $1.src };
mov(16)         g110<4>UB       g75<8,8,1>UD                    { align1 1H };
mov(16)         g100<4>UB       g106<32,8,4>UB                  { align1 1H A@2 };
add(16)         g98<1>D         -g96<1,1,0>D    g57<1,1,0>D     { align1 1H I@6 compacted };
mov(16)         g100.1<4>UB     g108<32,8,4>UB                  { align1 1H I@2 };
mov(8)          g1.1<2>UD       g98<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g3.1<2>UD       g99<4,4,1>UD                    { align1 2Q I@3 };
mov(16)         g100.2<4>UB     g110<32,8,4>UB                  { align1 1H I@3 };
mov(16)         g100.3<4>UB     g84<32,8,4>UB                   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g1UD            g100UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
cmp.l.f0.0(16)  null<1>UD       g45<8,8,1>UD    g49<8,8,1>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL16         UIP:  LABEL15             { align1 1H };
sel.ge(16)      g97<1>F         (abs)g92<1,1,0>F (abs)g86<1,1,0>F { align1 1H I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.ge(16)      g99<1>F         (abs)g69<1,1,0>F (abs)g88<1,1,0>F { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.ge(16)      g101<1>F        (abs)g71<1,1,0>F (abs)g90<1,1,0>F { align1 1H F@6 compacted };
shl(16)         g103<1>D        -g77<8,8,1>D    0x00000017UD    { align1 1H F@7 };
shl(16)         g105<1>D        -g73<8,8,1>D    0x00000017UD    { align1 1H I@7 };
shl(16)         g107<1>D        -g75<8,8,1>D    0x00000017UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g81<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
sel.ge(16)      g121<1>F        g99<1,1,0>F     g101<1,1,0>F    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g123<1>D        g103<8,8,1>D    1132462080D     { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g125<1>D        g105<8,8,1>D    1132462080D     { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g1<1>D          g107<8,8,1>D    1132462080D     { align1 1H I@4 };
sel.ge(16)      g99<1>F         g97<1,1,0>F     g121<1,1,0>F    { align1 1H F@1 compacted };
mul(16)         g101<1>F        g99<1,1,0>F     0x34000000F  /* 1.19209e-07F */ { align1 1H F@1 compacted };
add(16)         g103<1>F        g92<1,1,0>F     -g101<1,1,0>F   { align1 1H A@1 compacted };
add(16)         g105<1>F        g69<1,1,0>F     -g101<1,1,0>F   { align1 1H I@2 compacted };
add(16)         g107<1>F        g71<1,1,0>F     -g101<1,1,0>F   { align1 1H I@1 compacted };
add(16)         g121<1>F        g86<1,1,0>F     g101<1,1,0>F    { align1 1H compacted };
add(16)         g3<1>F          g88<1,1,0>F     g101<1,1,0>F    { align1 1H $1.src compacted };
add(16)         g5<1>F          g90<1,1,0>F     g101<1,1,0>F    { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g7<1>F          g103<1,1,0>F    -g9<1,1,0>F     { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g59<1>F         g105<1,1,0>F    -g11<1,1,0>F    { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g61<1>F         g107<1,1,0>F    -g13<1,1,0>F    { align1 1H F@6 compacted };
add(16)         g94<1>F         g121<1,1,0>F    -g9<1,1,0>F     { align1 1H F@6 compacted };
add(16)         g96<1>F         g3<1,1,0>F      -g11<1,1,0>F    { align1 1H F@6 compacted };
add(16)         g98<1>F         g5<1,1,0>F      -g13<1,1,0>F    { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mul(16)         g65<1>F         g7<8,8,1>F      0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mul(16)         g67<1>F         g59<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g69<1>F         g61<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g100<1>F        g94<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g102<1>F        g96<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g104<1>F        g98<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g71<1>F         g65<1,1,0>F     g123<1,1,0>F    { align1 1H A@3 compacted };
mul(16)         g73<1>F         g67<1,1,0>F     g125<1,1,0>F    { align1 1H A@2 compacted };
mul(16)         g75<1>F         g69<1,1,0>F     g1<1,1,0>F      { align1 1H A@1 compacted };
mul(16)         g106<1>F        g100<1,1,0>F    g123<1,1,0>F    { align1 1H F@6 compacted };
mul(16)         g121<1>F        g102<1,1,0>F    g125<1,1,0>F    { align1 1H F@6 compacted };
mul(16)         g123<1>F        g104<1,1,0>F    g1<1,1,0>F      { align1 1H F@6 compacted };
rndd(16)        g77<1>F         g71<1,1,0>F                     { align1 1H A@6 compacted };
rndd(16)        g79<1>F         g73<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g81<1>F         g75<1,1,0>F                     { align1 1H A@4 compacted };
rndd(16)        g125<1>F        -g106<1,1,0>F                   { align1 1H F@6 compacted };
rndd(16)        g1<1>F          -g121<1,1,0>F                   { align1 1H F@6 compacted };
rndd(16)        g3<1>F          -g123<1,1,0>F                   { align1 1H F@6 compacted };
sel.ge(16)      g83<1>F         g77<1,1,0>F     0x0F  /* 0F */  { align1 1H A@6 compacted };
sel.ge(16)      g85<1>F         g79<1,1,0>F     0x0F  /* 0F */  { align1 1H A@6 compacted };
sel.ge(16)      g87<1>F         g81<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g5<1>F          -g125<1,1,0>F   0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g7<1>F          -g1<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g9<1>F          -g3<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.l(16)       g89<1>F         g83<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g91<1>F         g85<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g93<1>F         g87<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g11<1>F         g5<8,8,1>F      0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g13<1>F         g7<8,8,1>F      0x437f0000F  /* 255F */ { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.l(16)       g15<1>F         g9<8,8,1>F      0x437f0000F  /* 255F */ { align1 1H F@6 };
mov(16)         g109<4>UB       g89<8,8,1>F                     { align1 1H F@6 };
mov(16)         g111<4>UB       g91<8,8,1>F                     { align1 1H F@5 };
mov(16)         g113<4>UB       g93<8,8,1>F                     { align1 1H F@4 };
mov(16)         g115<4>UB       g11<8,8,1>F                     { align1 1H F@3 };
mov(16)         g117<4>UB       g13<8,8,1>F                     { align1 1H F@2 };
mov(16)         g119<4>UB       g15<8,8,1>F                     { align1 1H F@1 };
mov(16)         g61<1>UW        g109<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g62<1>UW        g111<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g65<1>UW        g113<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g16<1>UW        g115<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g59<1>UW        g117<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g60<1>UW        g119<32,8,4>UB                  { align1 1H I@6 };
(-f0.0) sel(16) g105<1>UW       g61<16,16,1>UW  0x0000UW        { align1 1H I@6 };
(-f0.0) sel(16) g104<1>UW       g62<16,16,1>UW  0x0000UW        { align1 1H I@6 };
(-f0.0) sel(16) g103<1>UW       g65<16,16,1>UW  0x0000UW        { align1 1H I@6 };
(-f0.0) sel(16) g108<1>UW       g16<16,16,1>UW  0x0000UW        { align1 1H I@6 };
(-f0.0) sel(16) g107<1>UW       g59<16,16,1>UW  0x0000UW        { align1 1H I@6 };
(-f0.0) sel(16) g106<1>UW       g60<16,16,1>UW  0x0000UW        { align1 1H I@6 };
else(16)        JIP:  LABEL15         UIP:  LABEL15             { align1 1H };

LABEL16:
mov(16)         g103<1>UW       0x0080UW                        { align1 1H A@4 };
mov(16)         g104<1>UW       0x0080UW                        { align1 1H I@7 };
mov(16)         g105<1>UW       0x0080UW                        { align1 1H I@7 };
mov(16)         g106<1>UW       0x0000UW                        { align1 1H I@5 };
mov(16)         g107<1>UW       0x0000UW                        { align1 1H I@7 };
mov(16)         g108<1>UW       0x0000UW                        { align1 1H I@7 };

LABEL15:
endif(16)       JIP:  LABEL14                                   { align1 1H };
add(16)         g66<1>D         g55<1,1,0>D     g45<1,1,0>D     { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g111<2>UB       g103<16,16,1>UW                 { align1 1H I@7 };
mov(16)         g112<2>UB       g104<16,16,1>UW                 { align1 1H I@7 };
mov(16)         g113<2>UB       g105<16,16,1>UW                 { align1 1H I@7 };
mov(16)         g94<2>UB        g106<16,16,1>UW                 { align1 1H I@7 };
mov(16)         g114<2>UB       g107<16,16,1>UW                 { align1 1H I@7 };
mov(16)         g115<2>UB       g108<16,16,1>UW                 { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g68<1>UD        g66<1,1,0>UD    g55<1,1,0>UD    { align1 1H I@7 compacted };
add(16)         g72<1>D         g66<1,1,0>D     28D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g101<1>UD       g113<16,8,2>UB                  { align1 1H A@4 };
add(16)         g70<1>D         -g68<1,1,0>D    g57<1,1,0>D     { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g74<1>UD        g72<1,1,0>UD    g66<1,1,0>UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g2<2>UD         g72<4,4,1>UD                    { align1 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g4<2>UD         g73<4,4,1>UD                    { align1 2Q F@3 };
add(16)         g76<1>D         -g74<1,1,0>D    g70<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g2.1<2>UD       g76<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g4.1<2>UD       g77<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g2UD            g101UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
add(16)         g77<1>D         g66<1,1,0>D     40D             { align1 1H compacted };
mov(16)         g102<1>UD       g112<16,8,2>UB                  { align1 1H $1.src };
cmp.l.f0.0(16)  g79<1>UD        g77<1,1,0>UD    g66<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g83<2>UD        g77<4,4,1>UD                    { align1 1Q F@6 };
mov(8)          g85<2>UD        g78<4,4,1>UD                    { align1 2Q F@5 };
add(16)         g81<1>D         -g79<1,1,0>D    g70<1,1,0>D     { align1 1H A@3 compacted };
mov(8)          g83.1<2>UD      g81<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g85.1<2>UD      g82<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g83UD           g102UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $14 };
add(16)         g84<1>D         g66<1,1,0>D     52D             { align1 1H $14.src compacted };
mov(16)         g103<1>UD       g111<16,8,2>UB                  { align1 1H $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
cmp.l.f0.0(16)  g86<1>UD        g84<1,1,0>UD    g66<1,1,0>UD    { align1 1H A@2 compacted };
mov(8)          g90<2>UD        g84<4,4,1>UD                    { align1 1Q };
mov(8)          g92<2>UD        g85<4,4,1>UD                    { align1 2Q };
add(16)         g88<1>D         -g86<1,1,0>D    g70<1,1,0>D     { align1 1H A@3 compacted };
mov(8)          g90.1<2>UD      g88<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g92.1<2>UD      g89<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g90UD           g103UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
add(16)         g91<1>D         g66<1,1,0>D     34D             { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         g104<1>UD       g115<16,8,2>UB                  { align1 1H $1.src };
cmp.l.f0.0(16)  g95<1>UD        g91<1,1,0>UD    g66<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g99<2>UD        g91<4,4,1>UD                    { align1 1Q $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $14.src };
mov(8)          g101<2>UD       g92<4,4,1>UD                    { align1 2Q $1.src };
add(16)         g97<1>D         -g95<1,1,0>D    g70<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g99.1<2>UD      g97<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g101.1<2>UD     g98<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g99UD           g104UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $15 };
add(16)         g100<1>D        g66<1,1,0>D     46D             { align1 1H $15.src compacted };
mov(16)         g110<1>UD       g114<16,8,2>UB                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g102<1>UD       g100<1,1,0>UD   g66<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g106<2>UD       g100<4,4,1>UD                   { align1 1Q };
mov(8)          g108<2>UD       g101<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g104<1>D        -g102<1,1,0>D   g70<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g106.1<2>UD     g104<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g108.1<2>UD     g105<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g106UD          g110UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };
add(16)         g107<1>D        g66<1,1,0>D     58D             { align1 1H $0.src compacted };
mov(16)         g117<1>UD       g94<16,8,2>UB                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g109<1>UD       g107<1,1,0>UD   g66<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g113<2>UD       g107<4,4,1>UD                   { align1 1Q };
mov(8)          g115<2>UD       g108<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g111<1>D        -g109<1,1,0>D   g70<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g113.1<2>UD     g111<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g115.1<2>UD     g112<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g113UD          g117UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
add(16)         g114<1>D        g66<1,1,0>D     22D             { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g118<2>B        2W                              { align1 1H $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g116<1>UD       g114<1,1,0>UD   g66<1,1,0>UD    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g120<2>UD       g114<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g122<2>UD       g115<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
mov(16)         g124<1>UD       g118<16,8,2>UB                  { align1 1H };
add(16)         g118<1>D        -g116<1,1,0>D   g70<1,1,0>D     { align1 1H I@4 compacted };
mov(8)          g120.1<2>UD     g118<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g122.1<2>UD     g119<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g120UD          g124UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };

LABEL14:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
endif(16)       JIP:  LABEL17                                   { align1 1H };

LABEL17:
cmp.l.f0.0(16)  null<1>D        g47<8,8,1>D     g49<8,8,1>D     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL18         UIP:  LABEL18             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
asr(16)         g121<1>D        g49<8,8,1>D     0x0000001fUD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shl(16)         g123<1>D        g47<8,8,1>D     0x00000005UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shr(16)         g125<1>UD       g47<1,1,0>UD    0x0000001bUD    { align1 1H F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
add(16)         g1<1>D          g41<1,1,0>D     g123<1,1,0>D    { align1 1H A@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g3<1>UD         g1<1,1,0>UD     g41<1,1,0>UD    { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g7<2>UD         g1<4,4,1>UD                     { align1 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g9<2>UD         g2<4,4,1>UD                     { align1 2Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
add3(16)        g5<1>D          g43<8,8,1>D     g125<8,8,1>D    -g3<1,1,1>D { align1 1H A@3 };
mov(8)          g7.1<2>UD       g5<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g9.1<2>UD       g6<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g7UD            g17UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $1 };
add(16)         g8<1>D          g1<1,1,0>D      16D             { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g10<1>UD        g8<1,1,0>UD     g1<1,1,0>UD     { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g14<2>UD        g8<4,4,1>UD                     { align1 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g16<2>UD        g9<4,4,1>UD                     { align1 2Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g12<1>D         -g10<1,1,0>D    g5<1,1,0>D      { align1 1H A@1 compacted };
mov(8)          g14.1<2>UD      g12<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g16.1<2>UD      g13<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g14UD           g25UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $1 };
shl(16)         g15<1>D         g47<8,8,1>D     0x00000002UD    { align1 1H $1.src };
shr(16)         g17<1>UD        g47<1,1,0>UD    0x0000001eUD    { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g19<1>D         g37<1,1,0>D     g15<1,1,0>D     { align1 1H $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g21<1>UD        g19<1,1,0>UD    g37<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g25<2>UD        g19<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g27<2>UD        g20<4,4,1>UD                    { align1 2Q $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add3(16)        g23<1>D         g39<8,8,1>D     g17<8,8,1>D     -g21<1,1,1>D { align1 1H $1.dst };
mov(8)          g25.1<2>UD      g23<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g27.1<2>UD      g24<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g25UD           g47UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $2 };
shr(16)         g125<1>UD       g63<0,1,0>UD    0x00000006UD    { align1 1H compacted };
add(16)         g26<1>D         g49<1,1,0>D     g47<1,1,0>D     { align1 1H $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g28<1>UD        g26<1,1,0>UD    g49<1,1,0>UD    { align1 1H I@1 compacted };
shl(16)         g45<1>D         g26<8,8,1>D     0x00000002UD    { align1 1H };
shr(16)         g55<1>UD        g26<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g30<1>D         -g28<1,1,0>D    g121<1,1,0>D    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g58<1>D         g37<1,1,0>D     g45<1,1,0>D     { align1 1H I@3 compacted };
shl(16)         g46<1>D         g30<8,8,1>D     0x00000002UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g60<1>UD        g58<1,1,0>UD    g37<1,1,0>UD    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g64<2>UD        g58<4,4,1>UD                    { align1 1Q F@1 };
mov(8)          g66<2>UD        g59<4,4,1>UD                    { align1 2Q F@1 };
or(16)          g57<1>UD        g46<1,1,0>UD    g55<1,1,0>UD    { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add3(16)        g62<1>D         g39<8,8,1>D     g57<8,8,1>D     -g60<1,1,1>D { align1 1H I@1 };
mov(8)          g64.1<2>UD      g62<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g66.1<2>UD      g63<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g64UD           g125UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
and.nz.f0.0(16) null<1>UD       g51<8,8,1>UD    g53<8,8,1>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL19         UIP:  LABEL19             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shl(16)         g65<1>D         g49<8,8,1>D     0x00000003UD    { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g67<1>D         g33<1,1,0>D     40D             { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
or(16)          g126<1>UD       g65<8,8,1>UD    0xffffffc0UD    { align1 1H A@2 };
cmp.l.f0.0(16)  g69<1>UD        g67<1,1,0>UD    g33<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g73<2>UD        g67<4,4,1>UD                    { align1 1Q F@6 };
mov(8)          g75<2>UD        g68<4,4,1>UD                    { align1 2Q F@4 };
add(16)         g71<1>D         -g69<1,1,0>D    g35<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g73.1<2>UD      g71<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g75.1<2>UD      g72<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g77UD           g73UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
shl(16)         g79<1>D         g77<8,8,1>D     0x00000006UD    { align1 1H F@3 };
add(16)         g81<1>D         g33<1,1,0>D     g79<1,1,0>D     { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.l.f0.0(16)  g83<1>UD        g81<1,1,0>UD    g33<1,1,0>UD    { align1 1H compacted };
mov(8)          g87<2>UD        g81<4,4,1>UD                    { align1 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g89<2>UD        g82<4,4,1>UD                    { align1 2Q F@1 };
add(16)         g85<1>D         -g83<1,1,0>D    g35<1,1,0>D     { align1 1H A@3 compacted };
mov(8)          g87.1<2>UD      g85<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g89.1<2>UD      g86<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g87UD           g126UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };

LABEL19:
endif(16)       JIP:  LABEL18                                   { align1 1H };

LABEL18:
endif(16)       JIP:  LABEL20                                   { align1 1H };

LABEL20:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q F@7 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_DFS_DFS_trivial_batchable_code[] = {
    0x80000065, 0x07058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x58050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00070c, 0x00340000,
    0x80030061, 0x0b054410, 0x00000000, 0x76543210,
    0x00031a41, 0x20018220, 0x01465805, 0x00580058,
    0x606f1b41, 0x05805802, 0x640b1b40, 0x00800b95,
    0xfe6d0049, 0x05805803, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x2d050120,
    0x00460b05, 0x00000000, 0x00130041, 0x20018220,
    0x01465905, 0x00580058, 0xe0381a65, 0x00f02d03,
    0x00130049, 0x6e058222, 0x02465905, 0x00000058,
    0x00041a61, 0x5c060210, 0x00463805, 0x00000000,
    0x00040061, 0x2f050120, 0x00563806, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa0711f40, 0x6f010202, 0x27731970, 0x02107103,
    0x00030061, 0x03060220, 0x00347105, 0x00000000,
    0x00130061, 0x05060220, 0x00347205, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa0070040, 0x02007103, 0xa0140040, 0x03c07103,
    0xa0190040, 0x03007103, 0x00041e52, 0x75040660,
    0x0e2e0224, 0x73056d05, 0x270c1c70, 0x71000703,
    0x00030061, 0x10060220, 0x00340705, 0x00000000,
    0x00130061, 0x12060220, 0x00340805, 0x00000000,
    0x27161e70, 0x71001403, 0x00030061, 0x78060220,
    0x00341405, 0x00000000, 0x00130061, 0x7a060220,
    0x00341505, 0x00000000, 0x00031f61, 0x7c060220,
    0x00341905, 0x00000000, 0x00131f61, 0x7e060220,
    0x00341a05, 0x00000000, 0x271b0070, 0x71001903,
    0x00031f61, 0x03260220, 0x00347505, 0x00000000,
    0x00130061, 0x05260220, 0x00347605, 0x00000000,
    0xa00e0040, 0x75020c02, 0xa0181f40, 0x75021602,
    0xa01d1d40, 0x75021b02, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x25440000,
    0xfb000324, 0x000c0000, 0x00031b61, 0x10260220,
    0x00340e05, 0x00000000, 0x00131c61, 0x12260220,
    0x00340f05, 0x00000000, 0x00031c61, 0x78260220,
    0x00341805, 0x00000000, 0x00131d61, 0x7a260220,
    0x00341905, 0x00000000, 0x00031d61, 0x7c260220,
    0x00341d05, 0x00000000, 0x00131e61, 0x7e260220,
    0x00341e05, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x21240000,
    0xfb001024, 0x00040000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x54140000,
    0xfb007824, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x33240000,
    0xfb007c24, 0x00040000, 0x00042161, 0x09060210,
    0x00465405, 0x00000000, 0xe0372165, 0x00103303,
    0x00042161, 0x31050120, 0x00563506, 0x00000000,
    0xae331a70, 0x00003703, 0x00041a70, 0x00010660,
    0x56462f05, 0x00463105, 0x01040022, 0x0001c060,
    0x00000270, 0x000001f0, 0x00040069, 0x39058660,
    0x02462f05, 0x00000005, 0xe03b0068, 0x01b02f03,
    0xa03da140, 0x39002902, 0x273f1970, 0x29003d03,
    0x00030061, 0x43060220, 0x00343d05, 0x00000000,
    0x00130061, 0x45060220, 0x00343e05, 0x00000000,
    0xa0470040, 0x01003d03, 0x0004c152, 0x41040e68,
    0x0e2e2b05, 0x3f053b05, 0x27491a70, 0x3d004703,
    0x00030061, 0x17060220, 0x00344705, 0x00000000,
    0x00130061, 0x19060220, 0x00344805, 0x00000000,
    0x00031c61, 0x43260220, 0x00344105, 0x00000000,
    0x00131d61, 0x45260220, 0x00344205, 0x00000000,
    0xa04b1d40, 0x41024902, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x0f440000,
    0xfb004324, 0x000c0000, 0x00031961, 0x17260220,
    0x00344b05, 0x00000000, 0x00131a61, 0x19260220,
    0x00344c05, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x01440000,
    0xfb001724, 0x000c0000, 0x00042361, 0x45050220,
    0x00460f05, 0x00000000, 0x00042361, 0x47050220,
    0x00461105, 0x00000000, 0x00042361, 0x49050220,
    0x00461305, 0x00000000, 0x00042361, 0x0d050220,
    0x00461505, 0x00000000, 0x00042461, 0x0f050220,
    0x00460105, 0x00000000, 0x00042461, 0x41050220,
    0x00460305, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00042461, 0x43050220,
    0x00460505, 0x00000000, 0x00042461, 0x1f050220,
    0x00460705, 0x00000000, 0x00040024, 0x0001c060,
    0x00000090, 0x00000090, 0x00041e61, 0x0d054220,
    0x00000000, 0x00000000, 0x00041f61, 0x49054220,
    0x00000000, 0x7f800000, 0x00041f61, 0x47054220,
    0x00000000, 0x7f800000, 0x00040061, 0x45054220,
    0x00000000, 0x7f800000, 0x00041e61, 0x1f054220,
    0x00000000, 0x80000000, 0x00041f61, 0x43054220,
    0x00000000, 0xff800000, 0x00041f61, 0x41054220,
    0x00000000, 0xff800000, 0x00043261, 0x0f054220,
    0x00000000, 0xff800000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041e61, 0x11050220,
    0x00464505, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041f61, 0x13050220,
    0x00464705, 0x00000000, 0x00041f61, 0x15050220,
    0x00464905, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00041f61, 0x17050220,
    0x00460d05, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00041e61, 0x19050220,
    0x00460f05, 0x00000000, 0x00041f61, 0x1b050220,
    0x00464105, 0x00000000, 0x00041f61, 0x1d050220,
    0x00464305, 0x00000000, 0x00040070, 0x4c058550,
    0x15565c06, 0x00000000, 0x80000061, 0x53054660,
    0x00000000, 0x00000001, 0x00041a61, 0x35050560,
    0x20464c05, 0x00000000, 0x01040022, 0x0001c060,
    0x000002d0, 0x000002d0, 0xa04d2240, 0x00c02103,
    0x274f1970, 0x21004d03, 0x00030061, 0x37060220,
    0x00344d05, 0x00000000, 0x00130061, 0x39060220,
    0x00344e05, 0x00000000, 0xa051b240, 0x23024f02,
    0x00031961, 0x37260220, 0x00345105, 0x00000000,
    0x00131a61, 0x39260220, 0x00345205, 0x00000000,
    0xe2770961, 0x00114004, 0x80000965, 0x77058220,
    0x02007704, 0xffffffff, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xe2780961, 0x00117044,
    0x80000965, 0x78058220, 0x02007804, 0xffffffff,
    0x22781965, 0x78117703, 0x80001961, 0x56050220,
    0x00007804, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0004004d, 0x58050220,
    0x00005604, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xe2790961, 0x00114004,
    0x80000965, 0x79058220, 0x02007904, 0xffffffff,
    0x8000194c, 0x5a050220, 0x00007904, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040070, 0x00010660, 0x16462d05, 0x00005a04,
    0x01040022, 0x0001c060, 0x00000030, 0x00000030,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x5f140000, 0xfb183724, 0x01005814,
    0x00040025, 0x00004600, 0x00000000, 0x00000168,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xe27a0961, 0x00114004, 0x80000965, 0x7a058220,
    0x02007a04, 0xffffffff, 0x8000194c, 0x5b050220,
    0x00007a04, 0x00000000, 0x80009569, 0x10018220,
    0x02005b04, 0x00000002, 0x80000940, 0x10018220,
    0x02001000, 0x00000a00, 0x80000961, 0x5d050220,
    0x00010780, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xe27b0961, 0x00114004,
    0x80000965, 0x7b058220, 0x02007b04, 0xffffffff,
    0x00040061, 0x63050120, 0x00460b05, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xe27c0961, 0x00117044, 0x80000965, 0x7c058220,
    0x02007c04, 0xffffffff, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x65052660,
    0x02005304, 0x00466305, 0x227c1a65, 0x7c117b03,
    0x80001961, 0x61050220, 0x00007c04, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040065, 0x67050220, 0x06006104, 0x02466505,
    0x0004194d, 0x69050220, 0x00466705, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xa06b0040, 0x69015d02, 0x00041969, 0x3f058660,
    0x02466b05, 0x00000006, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa037a240, 0x3f102102,
    0xa06e0040, 0x01002103, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa04d0040, 0x00402d03,
    0xa04f0040, 0xff402d03, 0xa0510040, 0x00202d03,
    0xa0560040, 0xff202d03, 0xa0583540, 0x00102d03,
    0xa05a0040, 0xff102d03, 0x80000061, 0x53254660,
    0x00000000, 0x7fffffff, 0x276c1f70, 0x21003703,
    0x00030061, 0x3b060220, 0x00343705, 0x00000000,
    0x00130061, 0x3d060220, 0x00343805, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x01060220, 0x00346e05, 0x00000000,
    0x00133161, 0x03060220, 0x00346f05, 0x00000000,
    0x27700070, 0x21006e03, 0x00040070, 0x00018660,
    0x56464d05, 0x00000010, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa039f240, 0x23026c02,
    0xa0721b40, 0x23027002, 0x2f4b0062, 0x4f004d03,
    0x00031b61, 0x3b260220, 0x00343905, 0x00000000,
    0x00131c61, 0x3d260220, 0x00343a05, 0x00000000,
    0x00031c61, 0x01260220, 0x00347205, 0x00000000,
    0x00131d61, 0x03260220, 0x00347305, 0x00000000,
    0x00040070, 0x00018660, 0x56465105, 0x00000010,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x73140000, 0xfb000124, 0x00000000,
    0x2f4d0062, 0x56005103, 0x00040070, 0x00018660,
    0x56465805, 0x00000010, 0x2f4f0062, 0x5a005803,
    0x00042169, 0x75058660, 0x02467305, 0x00000006,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00041952, 0x77040e68, 0x0e2e2105, 0x37057505,
    0x0004196c, 0x07058660, 0x02467705, 0x00000006,
    0x00040070, 0x78058550, 0x15560906, 0x00010001,
    0x00041961, 0x51050560, 0x20467805, 0x00000000,
    0x11040022, 0x0001c060, 0x000028c0, 0x00001250,
    0x00040070, 0x00010220, 0x52462d05, 0x00463105,
    0x01040062, 0x56058220, 0x02460f05, 0xff800000,
    0x01040062, 0x58058220, 0x02464105, 0xff800000,
    0x01040062, 0x5a058220, 0x02464305, 0xff800000,
    0x01040062, 0x09058220, 0x02464505, 0x7f800000,
    0x01040062, 0x0b058220, 0x02464705, 0x7f800000,
    0x01040062, 0x5c058220, 0x02464905, 0x7f800000,
    0x80041e61, 0x10014110, 0x00000000, 0x0ac00ac0,
    0x00040069, 0x10018510, 0x01564b06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0ac00ac0,
    0xe06a0961, 0x001b0004, 0x80041e61, 0x10014110,
    0x00000000, 0x0b000b00, 0x00040069, 0x10018510,
    0x01564b06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0b000b00, 0xe0680961, 0x001b0004,
    0x80041e61, 0x10014110, 0x00000000, 0x0b400b40,
    0x00040069, 0x10018510, 0x01564b06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0b400b40,
    0xe0660961, 0x001b0004, 0x80041e61, 0x10014110,
    0x00000000, 0x01200120, 0x00040069, 0x10018510,
    0x01564b06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x01200120, 0xe0640961, 0x001b0004,
    0x80041e61, 0x10014110, 0x00000000, 0x01600160,
    0x00040069, 0x10018510, 0x01564b06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x01600160,
    0xe0620961, 0x001b0004, 0x80001e01, 0x00000000,
    0x00000000, 0x00000000, 0x80040061, 0x10014110,
    0x00000000, 0x0b800b80, 0x00040069, 0x10018510,
    0x01564b06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0b800b80, 0xe05e0961, 0x001b0004,
    0x00040070, 0x00018220, 0x52462d05, 0x00000006,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x25600062, 0x6a005600, 0x25560962, 0x68005800,
    0x25580962, 0x66005a00, 0x275a0962, 0x64000900,
    0x27090962, 0x62000b00, 0x80041561, 0x10014110,
    0x00000000, 0x0c000c00, 0x00040069, 0x10018510,
    0x01564d06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0c000c00, 0xe06a0961, 0x001b0004,
    0x270b0962, 0x5e005c00, 0x80041561, 0x10014110,
    0x00000000, 0x0ac00ac0, 0x00040069, 0x10018510,
    0x01564d06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0ac00ac0, 0xe0680961, 0x001b0004,
    0x80041461, 0x10014110, 0x00000000, 0x0b000b00,
    0x00040069, 0x10018510, 0x01564d06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0b000b00,
    0xe0660961, 0x001b0004, 0x80041361, 0x10014110,
    0x00000000, 0x0b400b40, 0x00040069, 0x10018510,
    0x01564d06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0b400b40, 0xe0640961, 0x001b0004,
    0x80041261, 0x10014110, 0x00000000, 0x01200120,
    0x00040069, 0x10018510, 0x01564d06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x01200120,
    0xe0620961, 0x001b0004, 0x255e1d62, 0x6a006000,
    0x80040a61, 0x10014110, 0x00000000, 0x01600160,
    0x00040069, 0x10018510, 0x01564d06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x01600160,
    0xe05c0961, 0x001b0004, 0x25600962, 0x68005600,
    0x25560962, 0x66005800, 0x27580962, 0x64005a00,
    0x80041461, 0x10014110, 0x00000000, 0x0bc00bc0,
    0x00040069, 0x10018510, 0x01564f06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0bc00bc0,
    0xe06a0961, 0x001b0004, 0x275a0962, 0x62000900,
    0x80041461, 0x10014110, 0x00000000, 0x0c000c00,
    0x00040069, 0x10018510, 0x01564f06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0c000c00,
    0xe0680961, 0x001b0004, 0x27090962, 0x5c000b00,
    0x80041461, 0x10014110, 0x00000000, 0x0ac00ac0,
    0x00040069, 0x10018510, 0x01564f06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0ac00ac0,
    0xe0660961, 0x001b0004, 0x80041361, 0x10014110,
    0x00000000, 0x0b000b00, 0x00040069, 0x10018510,
    0x01564f06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0b000b00, 0xe0640961, 0x001b0004,
    0x255c1c62, 0x6a005e00, 0x80041361, 0x10014110,
    0x00000000, 0x0b400b40, 0x00040069, 0x10018510,
    0x01564f06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0b400b40, 0xe0620961, 0x001b0004,
    0x255e0962, 0x68006000, 0x80040b61, 0x10014110,
    0x00000000, 0x01200120, 0x00040069, 0x10018510,
    0x01564f06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x01200120, 0xe00b0961, 0x001b0004,
    0x25600962, 0x66005600, 0x27560962, 0x64005800,
    0x27580962, 0x62005a00, 0x275a0962, 0x0b000900,
    0x01040022, 0x0001c060, 0x00000d00, 0x00000d00,
    0x25621262, 0x5caa5600, 0x25641362, 0x5eaa5800,
    0x25661362, 0x60aa5a00, 0xa06a1740, 0x01003703,
    0x00040061, 0x6e064540, 0x00000000, 0xffffffff,
    0x25681162, 0x66006400, 0x00040061, 0x6c070200,
    0x00465405, 0x00000000, 0x00030b61, 0x09060220,
    0x00346a05, 0x00000000, 0x00130c61, 0x0b060220,
    0x00346b05, 0x00000000, 0x25540962, 0x68006200,
    0x00040961, 0x62050020, 0x00666c07, 0x00000000,
    0xe0641141, 0x34005400, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x20011140, 0x64215600,
    0x20033140, 0x64215800, 0x20053140, 0x64215a00,
    0x20540040, 0x64015c00, 0x20560040, 0x64015e00,
    0x20580040, 0x64016000, 0x205a1340, 0x01205400,
    0x20541340, 0x03205600, 0x20601340, 0x05205800,
    0x00041341, 0x56058aa0, 0x0a465a05, 0x3f800001,
    0x00041341, 0x5c058aa0, 0x0a465405, 0x3f800001,
    0x00041341, 0x5e058aa0, 0x0a466005, 0x3f800001,
    0x00041265, 0x54058220, 0x02465605, 0x007fffff,
    0x00041765, 0x64058220, 0x02465605, 0x7f800000,
    0x00041265, 0x5a058220, 0x02465c05, 0x007fffff,
    0x00040065, 0x66058220, 0x02465c05, 0x7f800000,
    0x00041165, 0x58058220, 0x02465e05, 0x007fffff,
    0x00040065, 0x68058220, 0x02465e05, 0x7f800000,
    0x00040940, 0x60058660, 0x06465405, 0x3f000000,
    0x00041e6c, 0x54058660, 0x02466405, 0x00000017,
    0x00041e40, 0x64058660, 0x06465a05, 0x3f000000,
    0x00041e6c, 0x5a058660, 0x02466605, 0x00000017,
    0x00041e40, 0x66058660, 0x06465805, 0x3f000000,
    0xac001d70, 0x3f806001, 0x00041e6c, 0x58058660,
    0x02466805, 0x00000017, 0x11040062, 0x68058220,
    0x02466005, 0x3f000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x0004007a, 0x60040220,
    0x0a0a5324, 0x56056805, 0xac001e70, 0x3f806401,
    0x11040062, 0x56058220, 0x02466405, 0x3f000000,
    0x0004097a, 0x64040220, 0x0a0a5324, 0x5c055605,
    0xac001e70, 0x3f806601, 0x11040062, 0x56058220,
    0x02466605, 0x3f000000, 0x0004197a, 0x5c040220,
    0x0a0a5324, 0x5e055605, 0x00041970, 0x5e058aa0,
    0x3a466005, 0x3f7f0000, 0x00041b70, 0x60058aa0,
    0x3a466405, 0x3f7f0000, 0x00041970, 0x64058aa0,
    0x3a465c05, 0x3f7f0000, 0x00041352, 0x56044560,
    0x0e2eff82, 0x5e055405, 0x00040a52, 0x54044560,
    0x0e2eff82, 0x60055a05, 0x275a0070, 0x37006a03,
    0x00040952, 0x5e044560, 0x0e2eff82, 0x64055805,
    0xa0581a40, 0x39025a02, 0x00031961, 0x09260220,
    0x00345805, 0x00000000, 0x00131a61, 0x0b260220,
    0x00345905, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xf3080924, 0x00026214, 0x00044131, 0x00000000,
    0xfb083b24, 0x000c0144, 0xa0580040, 0x01203703,
    0x00041f61, 0x60070200, 0x00465605, 0x00000000,
    0x275a1a70, 0x37005803, 0x00033661, 0x09060220,
    0x00345805, 0x00000000, 0x00133661, 0x0b060220,
    0x00345905, 0x00000000, 0x00043661, 0x62070200,
    0x00465405, 0x00000000, 0x00041f61, 0x64070200,
    0x00465e05, 0x00000000, 0x00040961, 0x5c070000,
    0x00666007, 0x00000000, 0xa0581e40, 0x39025a02,
    0x00041a61, 0x5c0f0000, 0x00666207, 0x00000000,
    0x00031a61, 0x09260220, 0x00345805, 0x00000000,
    0x00131b61, 0x0b260220, 0x00345905, 0x00000000,
    0x00041b61, 0x5c170000, 0x00666407, 0x00000000,
    0x00041961, 0x5c1f0000, 0x00566e06, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x00000000, 0xfb080924, 0x00005c14,
    0x00040070, 0x00010220, 0x52462d05, 0x00463105,
    0x01040022, 0x0001c060, 0x000003c0, 0x00000360,
    0x25093762, 0x0f434500, 0x255a1f62, 0x41434700,
    0x255c3762, 0x43434900, 0x00040069, 0x5805a660,
    0x02465605, 0x00000017, 0x00040069, 0x5605a660,
    0x02465405, 0x00000017, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x250b1162, 0x5c005a00,
    0x00040069, 0x5405a660, 0x02465e05, 0x00000017,
    0x00041b40, 0x5e058660, 0x06465805, 0x43800000,
    0x00041b40, 0x60058660, 0x06465605, 0x43800000,
    0x00041b40, 0x62058660, 0x06465405, 0x43800000,
    0x25540962, 0x0b000900, 0xe0091141, 0x34005400,
    0x200b1140, 0x09204500, 0x20540040, 0x09204700,
    0x20561a40, 0x09204900, 0x20581b40, 0x09000f00,
    0x205a0040, 0x09004100, 0x205c0040, 0x09004300,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x20091640, 0x01200b00, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x200b1640, 0x03205400,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x20541640, 0x05205600, 0x20561640, 0x01205800,
    0x20581640, 0x03205a00, 0x205a1640, 0x05205c00,
    0x00041641, 0x5c058aa0, 0x0a460905, 0x3f7ffffe,
    0x00041641, 0x09058aa0, 0x0a460b05, 0x3f7ffffe,
    0x00041641, 0x0b058aa0, 0x0a465405, 0x3f7ffffe,
    0x00041641, 0x54058aa0, 0x0a465605, 0x3f800001,
    0x00041641, 0x56058aa0, 0x0a465805, 0x3f800001,
    0x00041641, 0x58058aa0, 0x0a465a05, 0x3f800001,
    0x205a0b41, 0x5e005c00, 0x205c0a41, 0x60000900,
    0x20090941, 0x62000b00, 0x200b1641, 0x5e005400,
    0x20541641, 0x60005600, 0x20561641, 0x62005800,
    0x60581645, 0x00105a00, 0x605a1645, 0x00105c00,
    0x605c1645, 0x00100900, 0x60091645, 0x00120b00,
    0x600b1645, 0x00125400, 0x60541645, 0x00125600,
    0xe5561662, 0x00005800, 0xe5581662, 0x00005a00,
    0xe55a1662, 0x00005c00, 0xe55c1662, 0x00020900,
    0xe5091662, 0x00020b00, 0xe50b1662, 0x00025400,
    0x00041662, 0x54058aa0, 0x5a465605, 0x437f0000,
    0x00041662, 0x56058aa0, 0x5a465805, 0x437f0000,
    0x00041662, 0x58058aa0, 0x5a465a05, 0x437f0000,
    0x00041662, 0x5a058aa0, 0x5a465c05, 0x437f0000,
    0x00041662, 0x5c058aa0, 0x5a460905, 0x437f0000,
    0x00040d61, 0x64070a00, 0x00465405, 0x00000000,
    0x00041662, 0x09058aa0, 0x5a460b05, 0x437f0000,
    0x00041561, 0x66070a00, 0x00465605, 0x00000000,
    0x00041461, 0x68070a00, 0x00465805, 0x00000000,
    0x00041361, 0x6a070a00, 0x00465a05, 0x00000000,
    0x00041261, 0x6c070a00, 0x00465c05, 0x00000000,
    0x00041d61, 0x63050010, 0x00666407, 0x00000000,
    0x00041161, 0x6e070a00, 0x00460905, 0x00000000,
    0x00041e61, 0x62050010, 0x00666607, 0x00000000,
    0x00041e61, 0x61050010, 0x00666807, 0x00000000,
    0x00041e61, 0x66050010, 0x00666a07, 0x00000000,
    0x00041e61, 0x65050010, 0x00666c07, 0x00000000,
    0x00041d61, 0x64050010, 0x00666e07, 0x00000000,
    0x00040024, 0x0001c060, 0x00000070, 0x00000070,
    0x00041d61, 0x61054110, 0x00000000, 0x00800080,
    0x00041f61, 0x62054110, 0x00000000, 0x00800080,
    0x00041f61, 0x63054110, 0x00000000, 0x00800080,
    0x00041d61, 0x64054110, 0x00000000, 0x00000000,
    0x00041f61, 0x65054110, 0x00000000, 0x00000000,
    0x00040c61, 0x66054110, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000520,
    0xa0540040, 0x2d003702, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00041f61, 0x7f060100,
    0x00586105, 0x00000000, 0x00040c61, 0x67060100,
    0x00586205, 0x00000000, 0x00041f61, 0x68060100,
    0x00586305, 0x00000000, 0x00041f61, 0x5a060100,
    0x00586405, 0x00000000, 0x00041f61, 0x5f060100,
    0x00586505, 0x00000000, 0x00041f61, 0x60060100,
    0x00586605, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x275b1f70, 0x37005403,
    0xa05d3740, 0x01c05403, 0x00041e61, 0x58050020,
    0x00566806, 0x00000000, 0xa0561b40, 0x39025b02,
    0x275b1b70, 0x54005d03, 0x00033761, 0x09060220,
    0x00345d05, 0x00000000, 0x80103701, 0x00000000,
    0x00000000, 0x00000000, 0x00131161, 0x0b060220,
    0x00345e05, 0x00000000, 0xa05d1b40, 0x56025b02,
    0x00031961, 0x09260220, 0x00345d05, 0x00000000,
    0x00131a61, 0x0b260220, 0x00345e05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x00000000, 0xf3080924, 0x00025814,
    0xa05b0040, 0x02805403, 0x00043861, 0x58050020,
    0x00566706, 0x00000000, 0x275d1a70, 0x54005b03,
    0x00033861, 0x09060220, 0x00345b05, 0x00000000,
    0x00133861, 0x0b060220, 0x00345c05, 0x00000000,
    0xa05b1b40, 0x56025d02, 0x00031961, 0x09260220,
    0x00345b05, 0x00000000, 0x00131a61, 0x0b260220,
    0x00345c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x00000000,
    0xf3080924, 0x00025814, 0xa0583940, 0x03405403,
    0x00040061, 0x5d050020, 0x00567f06, 0x00000000,
    0x275b1a70, 0x54005803, 0x00033961, 0x09060220,
    0x00345805, 0x00000000, 0x00133961, 0x0b060220,
    0x00345905, 0x00000000, 0xa0581b40, 0x56025b02,
    0x00031961, 0x09260220, 0x00345805, 0x00000000,
    0x00131a61, 0x0b260220, 0x00345905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044a31, 0x00000000, 0xf3080924, 0x00025d14,
    0xa0580040, 0x02205403, 0x00040061, 0x5b050020,
    0x00566006, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x275d1a70, 0x54005803,
    0x00033a61, 0x09060220, 0x00345805, 0x00000000,
    0x00133a61, 0x0b060220, 0x00345905, 0x00000000,
    0xa0581b40, 0x56025d02, 0x00031961, 0x09260220,
    0x00345805, 0x00000000, 0x00131a61, 0x0b260220,
    0x00345905, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x00000000,
    0xf3080924, 0x00025b14, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0790040, 0x02e05403,
    0x00040061, 0x58050020, 0x00565f06, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x277b1a70, 0x54007903, 0x00033b61, 0x09060220,
    0x00347905, 0x00000000, 0x00133b61, 0x0b060220,
    0x00347a05, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa07d1b40, 0x56027b02,
    0x00031961, 0x09260220, 0x00347d05, 0x00000000,
    0x00131a61, 0x0b260220, 0x00347e05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x00000000, 0xf3080924, 0x00025814,
    0xa07e0040, 0x03a05403, 0x00043b61, 0x5b050020,
    0x00565a06, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x27581a70, 0x54007e03,
    0x00033c61, 0x09060220, 0x00347e05, 0x00000000,
    0x00133c61, 0x0b060220, 0x00347f05, 0x00000000,
    0xa05d1b40, 0x56025802, 0x00031961, 0x09260220,
    0x00345d05, 0x00000000, 0x00131a61, 0x0b260220,
    0x00345e05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044d31, 0x00000000,
    0xf3080924, 0x00025b14, 0x00040070, 0x00018660,
    0x26465105, 0x00000000, 0xa0610040, 0x01605403,
    0x11040062, 0x5f058220, 0x02005304, 0x00000002,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x00031a61, 0x09060220, 0x00346105, 0x00000000,
    0x80103d01, 0x00000000, 0x00000000, 0x00000000,
    0x00131b61, 0x0b060220, 0x00346205, 0x00000000,
    0x00041b61, 0x5d070200, 0x00465f05, 0x00000000,
    0x27630070, 0x54006103, 0x00041a61, 0x59050020,
    0x00665d07, 0x00000000, 0xa0651a40, 0x56026302,
    0x00031961, 0x09260220, 0x00346505, 0x00000000,
    0x00131a61, 0x0b260220, 0x00346605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xf3080924, 0x00025914,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040024, 0x0001c060, 0x00001680, 0x00001680,
    0x00040b61, 0x66050020, 0x00660d1f, 0x00000000,
    0x00040070, 0x00010660, 0x56462f05, 0x00463105,
    0xef511a62, 0x00006603, 0x00040961, 0x67050020,
    0x00665107, 0x00000000, 0x00040070, 0x00010220,
    0x52462d05, 0x00463105, 0x80040a61, 0x10014110,
    0x00000000, 0x0ce00ce0, 0x00040069, 0x10018510,
    0x01564b06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0ce00ce0, 0xe0690961, 0x001b0004,
    0x206b0966, 0x69005103, 0x00041961, 0x6d050020,
    0x00666b07, 0x00000000, 0x80041961, 0x10014110,
    0x00000000, 0x0da00da0, 0x00040069, 0x10018510,
    0x01564d06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0da00da0, 0xe06f0961, 0x001b0004,
    0x20711966, 0x6f006d03, 0x00041961, 0x73050020,
    0x00667107, 0x00000000, 0x80041961, 0x10014110,
    0x00000000, 0x0e600e60, 0x00040069, 0x10018510,
    0x01564f06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0e600e60, 0xe0750961, 0x001b0004,
    0x20771966, 0x75007103, 0x00041961, 0x54070200,
    0x00007704, 0x00000000, 0x01040022, 0x0001c060,
    0x000001d8, 0x00000138, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x79050020,
    0x00007704, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xac7b1970, 0x00007903,
    0x00040070, 0x00018660, 0x16465105, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x01041a62, 0x7d058220, 0x02467b05, 0xffffffff,
    0x00041970, 0x00018660, 0x26467d05, 0x00000000,
    0x01041362, 0x56058220, 0x02460f05, 0xff800000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x01041262, 0x58058220, 0x02464105, 0xff800000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x01041162, 0x5a058220, 0x02464305, 0xff800000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x01041662, 0x5c058220, 0x02464505, 0x7f800000,
    0x01041962, 0x45058220, 0x02464705, 0x7f800000,
    0x01041962, 0x47058220, 0x02464905, 0x7f800000,
    0x00040024, 0x0001c060, 0x000000b0, 0x000000b0,
    0x00041a61, 0x47054220, 0x00000000, 0x7f800000,
    0x00041c61, 0x45054220, 0x00000000, 0x7f800000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x00040e61, 0x5c054220, 0x00000000, 0x7f800000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x00040961, 0x5a054220, 0x00000000, 0xff800000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00040a61, 0x58054220, 0x00000000, 0xff800000,
    0x00041361, 0x56054220, 0x00000000, 0xff800000,
    0x00040025, 0x00004600, 0x00000000, 0x00001360,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80041d61, 0x10014110, 0x00000000, 0x0b800b80,
    0x00040069, 0x10018510, 0x01564b06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0b800b80,
    0xe07e0961, 0x001b0004, 0x80040a61, 0x10014110,
    0x00000000, 0x08a008a0, 0x00040069, 0x10018510,
    0x01564b06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x08a008a0, 0xe0620961, 0x001b0004,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x80040061, 0x10014110, 0x00000000, 0x08e008e0,
    0x00040069, 0x10018510, 0x01564b06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x08e008e0,
    0xe0600961, 0x001b0004, 0x80000d01, 0x00000000,
    0x00000000, 0x00000000, 0x80040061, 0x10014110,
    0x00000000, 0x0ac00ac0, 0x00040069, 0x10018510,
    0x01564b06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0ac00ac0, 0xe05e0961, 0x001b0004,
    0x80041f61, 0x10014110, 0x00000000, 0x0b000b00,
    0x00040069, 0x10018510, 0x01564b06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0b000b00,
    0xe0430961, 0x001b0004, 0x80041f61, 0x10014110,
    0x00000000, 0x0b400b40, 0x00040069, 0x10018510,
    0x01564b06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0b400b40, 0xe0410961, 0x001b0004,
    0x00040070, 0x00018220, 0x52462d05, 0x00000006,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x27090962, 0x7e005c00, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x270b0a62, 0x62004500,
    0x270d1d62, 0x60004700, 0x25491c62, 0x5e005600,
    0x254b1a62, 0x43005800, 0x255e1a62, 0x41005a00,
    0x80041661, 0x10014110, 0x00000000, 0x01200120,
    0x00040069, 0x10018510, 0x01564d06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x01200120,
    0xe00f0961, 0x001b0004, 0x80041161, 0x10014110,
    0x00000000, 0x01600160, 0x00040069, 0x10018510,
    0x01564d06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x01600160, 0xe0410961, 0x001b0004,
    0x80041261, 0x10014110, 0x00000000, 0x01a001a0,
    0x00040069, 0x10018510, 0x01564d06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x01a001a0,
    0xe0430961, 0x001b0004, 0x80041361, 0x10014110,
    0x00000000, 0x09200920, 0x00040069, 0x10018510,
    0x01564d06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x09200920, 0xe0600961, 0x001b0004,
    0x80041261, 0x10014110, 0x00000000, 0x09600960,
    0x00040069, 0x10018510, 0x01564d06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x09600960,
    0xe0620961, 0x001b0004, 0x80041161, 0x10014110,
    0x00000000, 0x0bc00bc0, 0x00040069, 0x10018510,
    0x01564d06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0bc00bc0, 0xe0640961, 0x001b0004,
    0x274d1962, 0x0f000900, 0x27090962, 0x41000b00,
    0x270b0962, 0x43000d00, 0x250f1a62, 0x62004b00,
    0x250d0a62, 0x60004900, 0x25411962, 0x64005e00,
    0x80040a61, 0x10014110, 0x00000000, 0x09a009a0,
    0x00040069, 0x10018510, 0x01564f06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x09a009a0,
    0xe04b0961, 0x001b0004, 0x80041161, 0x10014110,
    0x00000000, 0x01200120, 0x00040069, 0x10018510,
    0x01564f06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x01200120, 0xe0640961, 0x001b0004,
    0x80041361, 0x10014110, 0x00000000, 0x01600160,
    0x00040069, 0x10018510, 0x01564f06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x01600160,
    0xe0620961, 0x001b0004, 0x80041261, 0x10014110,
    0x00000000, 0x01e001e0, 0x00040069, 0x10018510,
    0x01564f06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x01e001e0, 0xe0600961, 0x001b0004,
    0x80040961, 0x10014110, 0x00000000, 0x01a001a0,
    0x00040069, 0x10018510, 0x01564f06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x01a001a0,
    0xe05e0961, 0x001b0004, 0x80041161, 0x10014110,
    0x00000000, 0x08200820, 0x00040069, 0x10018510,
    0x01564f06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x08200820, 0xe0430961, 0x001b0004,
    0x27490a62, 0x4b004d00, 0x274d0962, 0x62000b00,
    0x274b1d62, 0x64000900, 0x254f1962, 0x5e000d00,
    0x255e1b62, 0x60000f00, 0x25601962, 0x43004100,
    0x01040022, 0x0001c060, 0x00000e60, 0x00000e60,
    0x250b0b62, 0x4faa4900, 0x25090b62, 0x5eaa4b00,
    0x250f0b62, 0x60aa4d00, 0xa06a0040, 0x01003703,
    0x250d0962, 0x0f000900, 0x00040061, 0x69064540,
    0x00000000, 0x00010001, 0x00030a61, 0x41060220,
    0x00346a05, 0x00000000, 0x00130b61, 0x43060220,
    0x00346b05, 0x00000000, 0x25091162, 0x0d000b00,
    0x00041b61, 0x6c050020, 0x00566906, 0x00000000,
    0xe0621141, 0x34000900, 0x20091140, 0x62214900,
    0x200b0040, 0x62214b00, 0x200d0040, 0x62214d00,
    0x20490040, 0x62014f00, 0x204b0040, 0x62015e00,
    0x204d0040, 0x62016000, 0x204f1340, 0x09204900,
    0x205e1340, 0x0b204b00, 0x20601340, 0x0d204d00,
    0x00041341, 0x49058aa0, 0x0a464f05, 0x3f800001,
    0x00041341, 0x4b058aa0, 0x0a465e05, 0x3f800001,
    0x00041341, 0x4d058aa0, 0x0a466005, 0x3f800001,
    0x00041365, 0x4f058220, 0x02464905, 0x007fffff,
    0x00040065, 0x64058220, 0x02464905, 0x7f800000,
    0x00041265, 0x5e058220, 0x02464b05, 0x007fffff,
    0x00040065, 0x66058220, 0x02464b05, 0x7f800000,
    0x00041165, 0x60058220, 0x02464d05, 0x007fffff,
    0x00040065, 0x68058220, 0x02464d05, 0x7f800000,
    0x00040e40, 0x62058660, 0x06464f05, 0x3f000000,
    0x00041e6c, 0x4f058660, 0x02466405, 0x00000017,
    0x00041e40, 0x64058660, 0x06465e05, 0x3f000000,
    0x00041e6c, 0x5e058660, 0x02466605, 0x00000017,
    0x00041e40, 0x66058660, 0x06466005, 0x3f000000,
    0xac001d70, 0x3f806201, 0x00041e6c, 0x60058660,
    0x02466805, 0x00000017, 0x11040062, 0x68058220,
    0x02466205, 0x3f000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x0004007a, 0x62040220,
    0x0a0a5324, 0x49056805, 0xac001e70, 0x3f806401,
    0x11040062, 0x49058220, 0x02466405, 0x3f000000,
    0x0004097a, 0x64040220, 0x0a0a5324, 0x4b054905,
    0xac001e70, 0x3f806601, 0x11040062, 0x49058220,
    0x02466605, 0x3f000000, 0x0004197a, 0x4b040220,
    0x0a0a5324, 0x4d054905, 0x00041970, 0x49058aa0,
    0x3a466205, 0x3f7f0000, 0x00041b70, 0x62058aa0,
    0x3a466405, 0x3f7f0000, 0x00041252, 0x4d044560,
    0x0e2eff82, 0x49054f05, 0x00041970, 0x4f058aa0,
    0x3a464b05, 0x3f7f0000, 0x00040a52, 0x49044560,
    0x0e2eff82, 0x62055e05, 0x275e0070, 0x37006a03,
    0x00040952, 0x4b044560, 0x0e2eff82, 0x4f056005,
    0xa04f1a40, 0x39025e02, 0x00031961, 0x41260220,
    0x00344f05, 0x00000000, 0x00131a61, 0x43260220,
    0x00345005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xf3084124, 0x00026c14, 0x00043161, 0x0f050220,
    0x00460705, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb083b24, 0x000c0944, 0xa05e0040, 0x01203703,
    0x00041f61, 0x6a070200, 0x00464d05, 0x00000000,
    0x27601a70, 0x37005e03, 0x00033161, 0x01060220,
    0x00345e05, 0x00000000, 0x00133161, 0x03060220,
    0x00345f05, 0x00000000, 0x00043161, 0x6c070200,
    0x00464905, 0x00000000, 0x00040061, 0x6e070200,
    0x00464b05, 0x00000000, 0x00040a61, 0x64070000,
    0x00666a07, 0x00000000, 0xa0621e40, 0x39026002,
    0x00041a61, 0x640f0000, 0x00666c07, 0x00000000,
    0x00031a61, 0x01260220, 0x00346205, 0x00000000,
    0x00131b61, 0x03260220, 0x00346305, 0x00000000,
    0x00041b61, 0x64170000, 0x00666e07, 0x00000000,
    0x00041961, 0x641f0000, 0x00665407, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb080124, 0x00006414,
    0x00040070, 0x00010220, 0x52462d05, 0x00463105,
    0x01040022, 0x0001c060, 0x000004c0, 0x00000460,
    0x25611e62, 0x56435c00, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x25631d62, 0x58434500,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x25651662, 0x5a434700, 0x00041769, 0x6705a660,
    0x02464d05, 0x00000017, 0x00041f69, 0x6905a660,
    0x02464905, 0x00000017, 0x00040069, 0x6b05a660,
    0x02464b05, 0x00000017, 0x00040070, 0x00018660,
    0x16465105, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x25790062, 0x65006300,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00041c40, 0x7b058660, 0x06466705, 0x43800000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00041c40, 0x7d058660, 0x06466905, 0x43800000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00041c40, 0x01058660, 0x06466b05, 0x43800000,
    0x25631162, 0x79006100, 0xe0651141, 0x34006300,
    0x20670940, 0x65205c00, 0x20691a40, 0x65204500,
    0x206b1940, 0x65204700, 0x20790040, 0x65005600,
    0x20033140, 0x65005800, 0x20053140, 0x65005a00,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x20071640, 0x09206700, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x203b1640, 0x0b206900,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x203d1640, 0x0d206b00, 0x205e1640, 0x09207900,
    0x20601640, 0x0b200300, 0x20621640, 0x0d200500,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00041641, 0x41058aa0, 0x0a460705, 0x3f7ffffe,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00041641, 0x43058aa0, 0x0a463b05, 0x3f7ffffe,
    0x00041641, 0x45058aa0, 0x0a463d05, 0x3f7ffffe,
    0x00041641, 0x64058aa0, 0x0a465e05, 0x3f800001,
    0x00041641, 0x66058aa0, 0x0a466005, 0x3f800001,
    0x00041641, 0x68058aa0, 0x0a466205, 0x3f800001,
    0x20470b41, 0x7b004100, 0x20490a41, 0x7d004300,
    0x204b0941, 0x01004500, 0x206a1641, 0x7b006400,
    0x20791641, 0x7d006600, 0x207b1641, 0x01006800,
    0x604d0e45, 0x00104700, 0x604f1645, 0x00104900,
    0x60510c45, 0x00104b00, 0x607d1645, 0x00126a00,
    0x60011645, 0x00127900, 0x60031645, 0x00127b00,
    0xe5530e62, 0x00004d00, 0xe5550e62, 0x00004f00,
    0xe5571662, 0x00005100, 0xe5051662, 0x00027d00,
    0xe5071662, 0x00020100, 0xe5091662, 0x00020300,
    0x00041662, 0x59058aa0, 0x5a465305, 0x437f0000,
    0x00041662, 0x5b058aa0, 0x5a465505, 0x437f0000,
    0x00041662, 0x5d058aa0, 0x5a465705, 0x437f0000,
    0x00041662, 0x0b058aa0, 0x5a460505, 0x437f0000,
    0x00041662, 0x0d058aa0, 0x5a460705, 0x437f0000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00041662, 0x0f058aa0, 0x5a460905, 0x437f0000,
    0x00041661, 0x6d070a00, 0x00465905, 0x00000000,
    0x00041561, 0x6f070a00, 0x00465b05, 0x00000000,
    0x00041461, 0x71070a00, 0x00465d05, 0x00000000,
    0x00041361, 0x73070a00, 0x00460b05, 0x00000000,
    0x00041261, 0x75070a00, 0x00460d05, 0x00000000,
    0x00041161, 0x77070a00, 0x00460f05, 0x00000000,
    0x00041e61, 0x3d050010, 0x00666d07, 0x00000000,
    0x00041e61, 0x3e050010, 0x00666f07, 0x00000000,
    0x00041e61, 0x41050010, 0x00667107, 0x00000000,
    0x00041e61, 0x10050010, 0x00667307, 0x00000000,
    0x00041e61, 0x3b050010, 0x00667507, 0x00000000,
    0x00041e61, 0x3c050010, 0x00667707, 0x00000000,
    0x11041e62, 0x69058110, 0x01583d05, 0x00000000,
    0x11041e62, 0x68058110, 0x01583e05, 0x00000000,
    0x11041e62, 0x67058110, 0x01584105, 0x00000000,
    0x11041e62, 0x6c058110, 0x01581005, 0x00000000,
    0x11041e62, 0x6b058110, 0x01583b05, 0x00000000,
    0x11041e62, 0x6a058110, 0x01583c05, 0x00000000,
    0x00040024, 0x0001c060, 0x00000070, 0x00000070,
    0x00040c61, 0x67054110, 0x00000000, 0x00800080,
    0x00041f61, 0x68054110, 0x00000000, 0x00800080,
    0x00041f61, 0x69054110, 0x00000000, 0x00800080,
    0x00041d61, 0x6a054110, 0x00000000, 0x00000000,
    0x00041f61, 0x6b054110, 0x00000000, 0x00000000,
    0x00041f61, 0x6c054110, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000580,
    0xa0423140, 0x2d003702, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00041f61, 0x6f060100,
    0x00586705, 0x00000000, 0x00041f61, 0x70060100,
    0x00586805, 0x00000000, 0x00041f61, 0x71060100,
    0x00586905, 0x00000000, 0x00041f61, 0x5e060100,
    0x00586a05, 0x00000000, 0x00041f61, 0x72060100,
    0x00586b05, 0x00000000, 0x00041f61, 0x73060100,
    0x00586c05, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x27441f70, 0x37004203,
    0xa0480040, 0x01c04203, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00040c61, 0x65050020,
    0x00567106, 0x00000000, 0xa0461b40, 0x39024402,
    0x274a1b70, 0x42004803, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00031761, 0x02060220,
    0x00344805, 0x00000000, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00131361, 0x04060220,
    0x00344905, 0x00000000, 0xa04c1b40, 0x46024a02,
    0x00031961, 0x02260220, 0x00344c05, 0x00000000,
    0x00131a61, 0x04260220, 0x00344d05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xf3080224, 0x00026514,
    0xa04d0040, 0x02804203, 0x00043161, 0x66050020,
    0x00567006, 0x00000000, 0x274f1a70, 0x42004d03,
    0x00031661, 0x53060220, 0x00344d05, 0x00000000,
    0x00131561, 0x55060220, 0x00344e05, 0x00000000,
    0xa0510b40, 0x46024f02, 0x00031961, 0x53260220,
    0x00345105, 0x00000000, 0x00131a61, 0x55260220,
    0x00345205, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044e31, 0x00000000,
    0xf3085324, 0x00026614, 0xa0543e40, 0x03404203,
    0x00043e61, 0x67050020, 0x00566f06, 0x00000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x27560a70, 0x42005403, 0x00030061, 0x5a060220,
    0x00345405, 0x00000000, 0x00130061, 0x5c060220,
    0x00345505, 0x00000000, 0xa0580b40, 0x46025602,
    0x00031961, 0x5a260220, 0x00345805, 0x00000000,
    0x00131a61, 0x5c260220, 0x00345905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xf3085a24, 0x00026714,
    0xa05b3140, 0x02204203, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x00043161, 0x68050020,
    0x00567306, 0x00000000, 0x275f1a70, 0x42005b03,
    0x00033161, 0x63060220, 0x00345b05, 0x00000000,
    0x80103e01, 0x00000000, 0x00000000, 0x00000000,
    0x00133161, 0x65060220, 0x00345c05, 0x00000000,
    0xa0611b40, 0x46025f02, 0x00031961, 0x63260220,
    0x00346105, 0x00000000, 0x00131a61, 0x65260220,
    0x00346205, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044f31, 0x00000000,
    0xf3086324, 0x00026814, 0xa0643f40, 0x02e04203,
    0x00040061, 0x6e050020, 0x00567206, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x27661a70, 0x42006403, 0x00030061, 0x6a060220,
    0x00346405, 0x00000000, 0x00130061, 0x6c060220,
    0x00346505, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0xa0681b40, 0x46026602,
    0x00031961, 0x6a260220, 0x00346805, 0x00000000,
    0x00131a61, 0x6c260220, 0x00346905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xf3086a24, 0x00026e14,
    0xa06b3040, 0x03a04203, 0x00040061, 0x75050020,
    0x00565e06, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x276d1a70, 0x42006b03,
    0x00030061, 0x71060220, 0x00346b05, 0x00000000,
    0x00130061, 0x73060220, 0x00346c05, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa06f1b40, 0x46026d02, 0x00031961, 0x71260220,
    0x00346f05, 0x00000000, 0x00131a61, 0x73260220,
    0x00347005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xf3087124, 0x00027514, 0xa0723140, 0x01604203,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00043161, 0x76064540, 0x00000000, 0x00020002,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x27741a70, 0x42007203, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x78060220,
    0x00347205, 0x00000000, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x7a060220,
    0x00347305, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80000c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x7c050020,
    0x00567606, 0x00000000, 0xa0761c40, 0x46027402,
    0x00031961, 0x78260220, 0x00347605, 0x00000000,
    0x00131a61, 0x7a260220, 0x00347705, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xf3087824, 0x00027c14,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040070, 0x00010660, 0x56462f05, 0x00463105,
    0x01040022, 0x0001c060, 0x000005f8, 0x000005f8,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x0004006c, 0x79058660, 0x02463105, 0x0000001f,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x7b058660, 0x02462f05, 0x00000005,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xe07d1768, 0x01b02f03, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0xa0010a40, 0x7b002902,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x27030970, 0x29000103, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00031261, 0x07060220,
    0x00340105, 0x00000000, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00131161, 0x09060220,
    0x00340205, 0x00000000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x00040b52, 0x05040e68,
    0x0e2e2b05, 0x03057d05, 0x00031961, 0x07260220,
    0x00340505, 0x00000000, 0x00131a61, 0x09260220,
    0x00340605, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb080724, 0x000c1144, 0xa0083140, 0x01000103,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x270a0970, 0x01000803, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00031261, 0x0e060220,
    0x00340805, 0x00000000, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00131261, 0x10060220,
    0x00340905, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa00c0940, 0x05020a02,
    0x00031961, 0x0e260220, 0x00340c05, 0x00000000,
    0x00131a61, 0x10260220, 0x00340d05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb080e24, 0x000c1944,
    0x00043169, 0x0f058660, 0x02462f05, 0x00000002,
    0xe0113168, 0x01e02f03, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xa0132140, 0x0f002502,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x27151970, 0x25001303, 0x00033161, 0x19060220,
    0x00341305, 0x00000000, 0x00133161, 0x1b060220,
    0x00341405, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00042152, 0x17040e68,
    0x0e2e2705, 0x15051105, 0x00031961, 0x19260220,
    0x00341705, 0x00000000, 0x00131a61, 0x1b260220,
    0x00341805, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xfb081924, 0x00002f14, 0xe07d0068, 0x00613f03,
    0xa01a3240, 0x2f003102, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x271c1970, 0x31001a03,
    0x00040069, 0x2d058660, 0x02461a05, 0x00000002,
    0xe0370068, 0x01e01a03, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa01e1b40, 0x79021c02,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa03a1b40, 0x2d002502, 0x00041a69, 0x2e058660,
    0x02461e05, 0x00000002, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x273c1a70, 0x25003a03,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00031161, 0x40060220, 0x00343a05, 0x00000000,
    0x00131161, 0x42060220, 0x00343b05, 0x00000000,
    0x20391c66, 0x37002e03, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00041952, 0x3e040e68,
    0x0e2e2705, 0x3c053905, 0x00031961, 0x40260220,
    0x00343e05, 0x00000000, 0x00131a61, 0x42260220,
    0x00343f05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb084024, 0x00007d14, 0x00040065, 0x00010220,
    0x22463305, 0x00463505, 0x01040022, 0x0001c060,
    0x000001b0, 0x000001b0, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00041169, 0x41058660,
    0x02463105, 0x00000003, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0431140, 0x02802103,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00040a66, 0x7e058220, 0x02464105, 0xffffffc0,
    0x27451a70, 0x21004303, 0x00031661, 0x49060220,
    0x00344305, 0x00000000, 0x00131461, 0x4b060220,
    0x00344405, 0x00000000, 0xa0471b40, 0x23024502,
    0x00031961, 0x49260220, 0x00344705, 0x00000000,
    0x00131a61, 0x4b260220, 0x00344805, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x4d140000, 0xfb004924, 0x00000000,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x00041369, 0x4f058660, 0x02464d05, 0x00000006,
    0xa0510940, 0x4f002102, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x27530070, 0x21005103,
    0x00031261, 0x57060220, 0x00345105, 0x00000000,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x00131161, 0x59060220, 0x00345205, 0x00000000,
    0xa0550b40, 0x23025302, 0x00031961, 0x57260220,
    0x00345505, 0x00000000, 0x00131a61, 0x59260220,
    0x00345605, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb085724, 0x00007e14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80031761, 0x7e050220,
    0x00460005, 0x00000000, 0x80040931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_DFS_DFS_trivial_batchable = {
   .prog_data = {
      .base.nr_params = 10,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 14976,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_DFS_DFS_trivial_batchable_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_DFS_DFS_trivial_batchable_printfs,
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
const char *gfx125_bvh_build_DFS_DFS_trivial_batchable_sha1 = "70079a06e26ea3d9f986c0dec15f729825a84fbd";

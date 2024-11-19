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

and(1)          g67<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g1UD            g67UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
add(1)          g68<1>UD        g67<0,1,0>UD    0x00000040UD    { align1 WE_all 1N $0.src compacted };
mov(8)          g22<1>UW        0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g3UD            g68UD           nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
add(8)          g22.8<1>UW      g22<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g55<1>D         g22<8,8,1>UW                    { align1 1H };
and(16)         g97<1>UD        g55<1,1,0>UD    0x0000000fUD    { align1 1H I@1 compacted };
mov(16)         g116<2>UW       g97<8,8,1>UD                    { align1 1H I@1 };
mov(16)         g57<1>UD        g97<16,8,2>UW                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g87<1>D         g2<0,1,0>D      36D             { align1 1H compacted };
cmp.l.f0.0(16)  g92<1>UD        g87<1,1,0>UD    0x00000024UD    { align1 1H I@1 compacted };
mov(8)          g63<2>UD        g87<4,4,1>UD                    { align1 1Q };
mov(8)          g65<2>UD        g88<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
and(16)         g95<1>UD        g3<0,1,0>UD     0x00000001UD    { align1 1H compacted };
cmp.nz.f0.0(16) g61<1>D         g95<1,1,0>D     0D              { align1 1H I@1 compacted };
add(16)         g94<1>D         -g92<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@5 compacted };
mov(8)          g63.1<2>UD      g94<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g65.1<2>UD      g95<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g51UD           g63UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mov(16)         g90<2>UW        g53<8,8,1>UD                    { align1 1H $2.dst };
mov(16)         g59<1>UD        g51<16,8,2>UW                   { align1 1H $2.dst };
cmp.l.f0.0(16)  null<1>D        g57<8,8,1>D     g59<8,8,1>D     { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
shl(16)         g98<1>D         g57<8,8,1>D     0x00000005UD    { align1 1H };
shr(16)         g100<1>UD       g57<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
add(16)         g102<1>D        g2.4<0,1,0>D    g98<1,1,0>D     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g104<1>UD       g102<1,1,0>UD   g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g64<2>UD        g102<4,4,1>UD                   { align1 1Q $2.src };
mov(8)          g66<2>UD        g103<4,4,1>UD                   { align1 2Q $2.src };
add(16)         g108<1>D        g102<1,1,0>D    16D             { align1 1H compacted };
add3(16)        g106<1>D        g2.5<0,1,0>D    g100<8,8,1>D    -g104<1,1,1>D { align1 1H I@4 };
cmp.l.f0.0(16)  g110<1>UD       g108<1,1,0>UD   g102<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g112<2>UD       g108<4,4,1>UD                   { align1 1Q };
mov(8)          g114<2>UD       g109<4,4,1>UD                   { align1 2Q };
mov(8)          g64.1<2>UD      g106<4,4,1>UD                   { align1 1Q I@4 };
mov(8)          g66.1<2>UD      g107<4,4,1>UD                   { align1 2Q I@5 };
add(16)         g118<1>D        -g110<1,1,0>D   g106<1,1,0>D    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g92UD           g64UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mov(8)          g112.1<2>UD     g118<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g114.1<2>UD     g119<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g3UD            g112UD          nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov(16)         g45<1>UD        g92<8,8,1>UD                    { align1 1H $2.dst };
mov(16)         g47<1>UD        g94<8,8,1>UD                    { align1 1H $2.dst };
mov(16)         g49<1>UD        g96<8,8,1>UD                    { align1 1H $2.dst };
mov(16)         g35<1>UD        g98<8,8,1>UD                    { align1 1H $2.dst };
mov(16)         g37<1>UD        g3<8,8,1>UD                     { align1 1H $3.dst };
mov(16)         g39<1>UD        g5<8,8,1>UD                     { align1 1H $3.dst };
mov(16)         g41<1>UD        g7<8,8,1>UD                     { align1 1H $3.dst };
mov(16)         g17<1>UD        g9<8,8,1>UD                     { align1 1H $3.dst };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g35<1>UD        0x00000000UD                    { align1 1H I@6 };
mov(16)         g49<1>UD        0x7f800000UD                    { align1 1H I@7 };
mov(16)         g47<1>UD        0x7f800000UD                    { align1 1H I@7 };
mov(16)         g45<1>UD        0x7f800000UD                    { align1 1H };
mov(16)         g17<1>UD        0x80000000UD                    { align1 1H I@6 };
mov(16)         g41<1>UD        0xff800000UD                    { align1 1H I@7 };
mov(16)         g39<1>UD        0xff800000UD                    { align1 1H I@7 };
mov(16)         g37<1>UD        0xff800000UD                    { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
mov(16)         g3<1>UD         g45<8,8,1>UD                    { align1 1H I@6 };
mov(16)         g5<1>UD         g47<8,8,1>UD                    { align1 1H I@7 };
mov(16)         g7<1>UD         g49<8,8,1>UD                    { align1 1H I@7 };
mov(16)         g9<1>UD         g35<8,8,1>UD                    { align1 1H I@7 };
mov(16)         g11<1>UD        g37<8,8,1>UD                    { align1 1H I@6 };
mov(16)         g13<1>UD        g39<8,8,1>UD                    { align1 1H I@7 };
mov(16)         g15<1>UD        g41<8,8,1>UD                    { align1 1H I@7 };
cmp.z.f0.0(16)  g119<1>W        g116<16,8,2>W   0W              { align1 1H };
mov(1)          g101<1>D        1D                              { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov.nz.f0.0(16) g63<1>D         g119<8,8,1>W                    { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
add(16)         g120<1>D        g2.2<0,1,0>D    12D             { align1 1H compacted };
cmp.l.f0.0(16)  g122<1>UD       g120<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g113<2>UD       g120<4,4,1>UD                   { align1 1Q $3.src };
mov(8)          g115<2>UD       g121<4,4,1>UD                   { align1 2Q $3.src };
add(16)         g124<1>D        -g122<1,1,0>D   g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g113.1<2>UD     g124<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g115.1<2>UD     g125<4,4,1>UD                   { align1 2Q I@2 };
mov(1)          g19<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g19<1>UD        g19<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(1)          g20<1>UD        sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g20<1>UD        g20<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
and(1)          g20<1>UD        g19<0,1,0>UD    g20<0,1,0>UD    { align1 WE_all 1N I@1 compacted };
mov(1)          g126<1>UD       g20<0,1,0>UD                    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cbit(16)        g19<1>UD        g126<0,1,0>UD                   { align1 1H };
mov(1)          g21<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g21<1>UD        g21<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(16)         g25<1>D         g22<8,8,1>UW                    { align1 1H };
fbl(1)          g23<1>UD        g21<0,1,0>UD                    { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  null<1>D        g25<8,8,1>D     g23<0,1,0>D     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL4          UIP:  LABEL4              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g23UD           g113UD          g19UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $3 };

LABEL4:
endif(16)       JIP:  LABEL3                                    { align1 1H };
mov(1)          g25<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g25<1>UD        g25<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g26<1>UD        g25<0,1,0>UD                    { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g26<0,1,0>UD    0x00000002UD    { align1 WE_all 1N @1 $3.dst };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g28<1>UD        g[a0 224]<0,1,0>UD              { align1 WE_all 1N A@1 };
mov(1)          g34<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g34<1>UD        g34<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(16)         g32<1>D         g22<8,8,1>UW                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(1)          g65<1>UD        sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g65<1>UD        g65<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g43<1>D         -g101<0,1,0>D   g32<8,8,1>UD    { align1 1H };
and(1)          g65<1>UD        g34<0,1,0>UD    g65<0,1,0>UD    { align1 WE_all 1N I@2 compacted };
mov(1)          g30<1>UD        g65<0,1,0>UD                    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(16)         g65<1>UD        g30<0,1,0>UD    ~g43<8,8,1>D    { align1 1H $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cbit(16)        g67<1>UD        g65<8,8,1>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g69<1>D         g28<0,1,0>D     g67<1,1,0>D     { align1 1H compacted };
shl(16)         g43<1>D         g69<8,8,1>D     0x00000006UD    { align1 1H I@1 };

LABEL3:
endif(16)       JIP:  LABEL5                                    { align1 1H };

LABEL5:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g65<1>D         g2.2<0,1,0>D    g43<0,1,0>D     { align1 1H I@2 compacted };
add(16)         g72<1>D         g2.2<0,1,0>D    16D             { align1 1H compacted };
add(16)         g82<1>D         g55<1,1,0>D     4D              { align1 1H compacted };
add(16)         g84<1>D         g55<1,1,0>D     -12D            { align1 1H compacted };
add(16)         g86<1>D         g55<1,1,0>D     2D              { align1 1H compacted };
add(16)         g88<1>D         g55<1,1,0>D     -14D            { align1 1H compacted };
add(16)         g93<1>D         g55<1,1,0>D     1D              { align1 1H compacted };
add(16)         g95<1>D         g55<1,1,0>D     -15D            { align1 1H compacted };
cmp.l.f0.0(16)  g70<1>UD        g65<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@7 compacted };
mov(8)          g31<2>UD        g65<4,4,1>UD                    { align1 1Q };
mov(8)          g33<2>UD        g66<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g19<2>UD        g72<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g21<2>UD        g73<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g74<1>UD        g72<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  null<1>D        g82<8,8,1>D     16D             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g67<1>D         -g70<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@7 compacted };
add(16)         g76<1>D         -g74<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
(+f0.0) sel(16) g69<1>UD        g82<1,1,0>UD    g84<1,1,0>UD    { align1 1H compacted };
mov(8)          g31.1<2>UD      g67<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g33.1<2>UD      g68<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g19.1<2>UD      g76<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g21.1<2>UD      g77<4,4,1>UD                    { align1 2Q I@5 };
cmp.l.f0.0(16)  null<1>D        g86<8,8,1>D     16D             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g77UD           g19UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
(+f0.0) sel(16) g71<1>UD        g86<1,1,0>UD    g88<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  null<1>D        g93<8,8,1>D     16D             { align1 1H };
(+f0.0) sel(16) g73<1>UD        g93<1,1,0>UD    g95<1,1,0>UD    { align1 1H compacted };
cmp.z.f0.0(16)  g89<1>W         g90<16,8,2>W    1W              { align1 1H };
mov.nz.f0.0(16) g75<1>D         g89<8,8,1>W                     { align1 1H I@1 };
shl(16)         g79<1>D         g77<8,8,1>D     0x00000006UD    { align1 1H $4.dst };
add3(16)        g81<1>D         g2.2<0,1,0>D    g79<8,8,1>D     -g65<1,1,1>D { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
asr(16)         g29<1>D         g81<8,8,1>D     0x00000006UD    { align1 1H };
(-f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL6              { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g55<8,8,1>UD    g59<8,8,1>UD    { align1 1H };
(+f0.0) sel(16) g77<1>UD        g37<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g79<1>UD        g39<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g21<1>UD        g41<8,8,1>UD    0xff800000UD    { align1 1H $4.src };
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
mov(16)         a0<1>UW         0x02a0UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x02a0UW        { align1 1H A@1 };
mov(16)         g93<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0a20UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a20UW        { align1 1H A@1 };
mov(16)         g91<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0a60UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a60UW        { align1 1H A@1 };
mov(16)         g89<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         a0<1>UW         0x0aa0UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0aa0UW        { align1 1H A@1 };
mov(16)         g19<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g55<8,8,1>UD    0x00000006UD    { align1 1H };
sel.ge(16)      g87<1>F         g77<1,1,0>F     g97<1,1,0>F     { align1 1H I@7 compacted };
sel.ge(16)      g77<1>F         g79<1,1,0>F     g95<1,1,0>F     { align1 1H A@1 compacted };
sel.ge(16)      g79<1>F         g21<1,1,0>F     g93<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g21<1>F         g81<1,1,0>F     g91<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g81<1>F         g83<1,1,0>F     g89<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0ae0UW                        { align1 WE_all 1H F@5 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ae0UW        { align1 1H A@1 };
mov(16)         g97<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g83<1>F         g85<1,1,0>F     g19<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x09a0UW                        { align1 WE_all 1H F@5 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x09a0UW        { align1 1H A@1 };
mov(16)         g95<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x09e0UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x09e0UW        { align1 1H A@1 };
mov(16)         g93<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x02a0UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x02a0UW        { align1 1H A@1 };
mov(16)         g91<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0a20UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a20UW        { align1 1H A@1 };
mov(16)         g89<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g85<1>F         g87<1,1,0>F     g97<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0a60UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a60UW        { align1 1H A@1 };
mov(16)         g19<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g87<1>F         g77<1,1,0>F     g95<1,1,0>F     { align1 1H A@1 compacted };
sel.ge(16)      g77<1>F         g79<1,1,0>F     g93<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g79<1>F         g21<1,1,0>F     g91<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0aa0UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0aa0UW        { align1 1H A@1 };
mov(16)         g97<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g21<1>F         g81<1,1,0>F     g89<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0ae0UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ae0UW        { align1 1H A@1 };
mov(16)         g95<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g89<1>F         g83<1,1,0>F     g19<1,1,0>F     { align1 1H I@3 compacted };
mov(16)         a0<1>UW         0x09a0UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x09a0UW        { align1 1H A@1 };
mov(16)         g93<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x09e0UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x09e0UW        { align1 1H A@1 };
mov(16)         g91<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g83<1>F         g85<1,1,0>F     g97<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x02a0UW                        { align1 WE_all 1H A@3 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x02a0UW        { align1 1H A@1 };
mov(16)         g81<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g85<1>F         g87<1,1,0>F     g95<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0b20UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b20UW        { align1 1H A@1 };
mov(16)         g19<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g87<1>F         g77<1,1,0>F     g93<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g77<1>F         g79<1,1,0>F     g91<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g79<1>F         g21<1,1,0>F     g81<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g81<1>F         g89<1,1,0>F     g19<1,1,0>F     { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL8              { align1 1H };
sel.ge(16)      g89<1>F         (abs)g77<0,1,0>F (abs)g83<0,1,0>F { align1 1H A@1 compacted };
sel.ge(16)      g91<1>F         (abs)g79<0,1,0>F (abs)g85<0,1,0>F { align1 1H F@3 compacted };
sel.ge(16)      g93<1>F         (abs)g81<0,1,0>F (abs)g87<0,1,0>F { align1 1H F@3 compacted };
add(16)         g97<1>D         g65<1,1,0>D     16D             { align1 1H F@7 compacted };
mov(16)         g102<2>B        -1W                             { align1 1H };
sel.ge(16)      g95<1>F         g91<1,1,0>F     g93<1,1,0>F     { align1 1H F@1 compacted };
mov(16)         g99<4>UB        g53<8,8,1>UD                    { align1 1H };
mov(8)          g19<2>UD        g97<4,4,1>UD                    { align1 1Q A@3 };
mov(8)          g21<2>UD        g98<4,4,1>UD                    { align1 2Q A@4 };
sel.ge(16)      g51<1>F         g89<1,1,0>F     g95<1,1,0>F     { align1 1H F@1 compacted };
mov(16)         g53<1>UD        g99<32,8,4>UB                   { align1 1H I@3 };
mul(16)         g89<1>F         g51<1,1,0>F     0x34000000F  /* 1.19209e-07F */ { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
add(16)         g23<1>F         g77<0,1,0>F     -g89<1,1,0>F    { align1 1H compacted };
add(16)         g25<1>F         g79<0,1,0>F     -g89<1,1,0>F    { align1 1H compacted };
add(16)         g27<1>F         g81<0,1,0>F     -g89<1,1,0>F    { align1 1H compacted };
add(16)         g51<1>F         g83<0,1,0>F     g89<1,1,0>F     { align1 1H compacted };
add(16)         g77<1>F         g85<0,1,0>F     g89<1,1,0>F     { align1 1H compacted };
add(16)         g79<1>F         g87<0,1,0>F     g89<1,1,0>F     { align1 1H compacted };
add(16)         g81<1>F         g51<1,1,0>F     -g23<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g51<1>F         g77<1,1,0>F     -g25<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g83<1>F         g79<1,1,0>F     -g27<1,1,0>F    { align1 1H F@3 compacted };
mul(16)         g77<1>F         g81<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
mul(16)         g79<1>F         g51<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
mul(16)         g81<1>F         g83<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
and(16)         g83<1>UD        g77<8,8,1>UD    0x7f800000UD    { align1 1H F@1 };
and(16)         g51<1>UD        g77<8,8,1>UD    0x007fffffUD    { align1 1H F@2 };
and(16)         g87<1>UD        g77<8,8,1>UD    0x80000000UD    { align1 1H F@7 };
and(16)         g89<1>UD        g79<8,8,1>UD    0x80000000UD    { align1 1H F@2 };
and(16)         g85<1>UD        g79<8,8,1>UD    0x7f800000UD    { align1 1H F@7 };
and(16)         g91<1>UD        g81<8,8,1>UD    0x80000000UD    { align1 1H F@1 };
and(16)         g93<1>UD        g81<8,8,1>UD    0x7f800000UD    { align1 1H };
and(16)         g77<1>UD        g79<8,8,1>UD    0x007fffffUD    { align1 1H };
and(16)         g79<1>UD        g81<8,8,1>UD    0x007fffffUD    { align1 1H };
add(16)         g81<1>D         g51<8,8,1>D     1056964608D     { align1 1H I@7 };
asr(16)         g51<1>D         g83<8,8,1>D     0x00000017UD    { align1 1H I@7 };
add(16)         g83<1>D         g77<8,8,1>D     1056964608D     { align1 1H I@4 };
asr(16)         g77<1>D         g85<8,8,1>D     0x00000017UD    { align1 1H I@7 };
add(16)         g85<1>D         g79<8,8,1>D     1056964608D     { align1 1H I@5 };
cmp.z.f0.0(16)  null<1>F        g81<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@5 compacted };
asr(16)         g79<1>D         g93<8,8,1>D     0x00000017UD    { align1 1H I@7 };
(-f0.0) sel(16) g93<1>UD        g81<8,8,1>UD    0x3f000000UD    { align1 1H };
and(16)         g81<1>UD        g93<8,8,1>UD    0x7fffffffUD    { align1 1H A@1 };
cmp.z.f0.0(16)  null<1>F        g83<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@6 compacted };
or(16)          g93<1>UD        g81<1,1,0>UD    g87<1,1,0>UD    { align1 1H I@1 compacted };
(-f0.0) sel(16) g81<1>UD        g83<8,8,1>UD    0x3f000000UD    { align1 1H };
and(16)         g83<1>UD        g81<8,8,1>UD    0x7fffffffUD    { align1 1H A@1 };
cmp.z.f0.0(16)  null<1>F        g85<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@7 compacted };
or(16)          g81<1>UD        g83<1,1,0>UD    g89<1,1,0>UD    { align1 1H I@1 compacted };
(-f0.0) sel(16) g83<1>UD        g85<8,8,1>UD    0x3f000000UD    { align1 1H };
and(16)         g85<1>UD        g83<8,8,1>UD    0x7fffffffUD    { align1 1H A@1 };
cmp.g.f0.0(16)  g83<1>F         g93<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@1 };
cmp.g.f0.0(16)  g89<1>F         g81<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@3 };
or(16)          g87<1>UD        g85<1,1,0>UD    g91<1,1,0>UD    { align1 1H I@1 compacted };
add3(16)        g85<1>D         65410W          g51<8,8,1>D     -g83<1,1,1>D { align1 1H F@2 };
add3(16)        g51<1>D         65410W          g77<8,8,1>D     -g89<1,1,1>D { align1 1H F@1 };
cmp.g.f0.0(16)  g81<1>F         g87<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@3 };
cmp.l.f0.0(16)  g90<1>UD        g97<1,1,0>UD    g65<1,1,0>UD    { align1 1H compacted };
add3(16)        g83<1>D         65410W          g79<8,8,1>D     -g81<1,1,1>D { align1 1H F@1 };
add(16)         g92<1>D         -g90<1,1,0>D    g67<1,1,0>D     { align1 1H A@2 compacted };
mov(8)          g19.1<2>UD      g92<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g21.1<2>UD      g93<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g19UD           g53UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $5 };
send(16)        nullUD          g31UD           g23UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $6 };
add(16)         g53<1>D         g65<1,1,0>D     18D             { align1 1H $5.src compacted };
mov(16)         g81<4>UB        g85<8,8,1>UD                    { align1 1H I@7 };
cmp.l.f0.0(16)  g77<1>UD        g53<1,1,0>UD    g65<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g19<2>UD        g53<4,4,1>UD                    { align1 1Q $5.src };
mov(8)          g21<2>UD        g54<4,4,1>UD                    { align1 2Q $5.src };
mov(16)         g87<4>UB        g51<8,8,1>UD                    { align1 1H F@1 };
mov(16)         g89<4>UB        g83<8,8,1>UD                    { align1 1H I@7 };
mov(16)         g79<4>UB        g81<32,8,4>UB                   { align1 1H I@6 };
add(16)         g93<1>D         -g77<1,1,0>D    g67<1,1,0>D     { align1 1H A@3 compacted };
mov(16)         g79.1<4>UB      g87<32,8,4>UB                   { align1 1H I@2 };
mov(8)          g19.1<2>UD      g93<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g21.1<2>UD      g94<4,4,1>UD                    { align1 2Q I@3 };
mov(16)         g79.2<4>UB      g89<32,8,4>UB                   { align1 1H I@3 };
mov(16)         g79.3<4>UB      g102<16,8,2>UB                  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g19UD           g79UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $7 };
cmp.l.f0.0(16)  null<1>UD       g55<8,8,1>UD    g59<8,8,1>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL9              { align1 1H };
sel.ge(16)      g19<1>F         (abs)g45<1,1,0>F (abs)g37<1,1,0>F { align1 1H $7.src compacted };
sel.ge(16)      g79<1>F         (abs)g47<1,1,0>F (abs)g39<1,1,0>F { align1 1H $7.src compacted };
sel.ge(16)      g81<1>F         (abs)g49<1,1,0>F (abs)g41<1,1,0>F { align1 1H I@7 compacted };
shl(16)         g77<1>D         -g85<8,8,1>D    0x00000017UD    { align1 1H };
shl(16)         g53<1>D         -g51<8,8,1>D    0x00000017UD    { align1 1H };
shl(16)         g51<1>D         -g83<8,8,1>D    0x00000017UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.ge(16)      g21<1>F         g79<1,1,0>F     g81<1,1,0>F     { align1 1H F@1 compacted };
add(16)         g85<1>D         g53<8,8,1>D     1132462080D     { align1 1H I@2 };
add(16)         g83<1>D         g77<8,8,1>D     1132462080D     { align1 1H I@4 };
add(16)         g87<1>D         g51<8,8,1>D     1132462080D     { align1 1H I@3 };
sel.ge(16)      g51<1>F         g19<1,1,0>F     g21<1,1,0>F     { align1 1H A@1 compacted };
mul(16)         g19<1>F         g51<1,1,0>F     0x34000000F  /* 1.19209e-07F */ { align1 1H F@1 compacted };
add(16)         g21<1>F         g45<1,1,0>F     -g19<1,1,0>F    { align1 1H F@1 compacted };
add(16)         g51<1>F         g47<1,1,0>F     -g19<1,1,0>F    { align1 1H compacted };
add(16)         g53<1>F         g49<1,1,0>F     -g19<1,1,0>F    { align1 1H I@3 compacted };
add(16)         g77<1>F         g37<1,1,0>F     g19<1,1,0>F     { align1 1H I@2 compacted };
add(16)         g79<1>F         g39<1,1,0>F     g19<1,1,0>F     { align1 1H compacted };
add(16)         g81<1>F         g41<1,1,0>F     g19<1,1,0>F     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g19<1>F         g21<1,1,0>F     -g23<1,1,0>F    { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g21<1>F         g51<1,1,0>F     -g25<1,1,0>F    { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g51<1>F         g53<1,1,0>F     -g27<1,1,0>F    { align1 1H F@6 compacted };
add(16)         g53<1>F         g77<1,1,0>F     -g23<1,1,0>F    { align1 1H F@6 compacted };
add(16)         g77<1>F         g79<1,1,0>F     -g25<1,1,0>F    { align1 1H F@6 compacted };
add(16)         g79<1>F         g81<1,1,0>F     -g27<1,1,0>F    { align1 1H F@6 compacted };
mul(16)         g81<1>F         g19<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g19<1>F         g21<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g21<1>F         g51<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g51<1>F         g53<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g53<1>F         g77<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g77<1>F         g79<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g79<1>F         g81<1,1,0>F     g83<1,1,0>F     { align1 1H A@2 compacted };
mul(16)         g81<1>F         g19<1,1,0>F     g85<1,1,0>F     { align1 1H A@3 compacted };
mul(16)         g19<1>F         g21<1,1,0>F     g87<1,1,0>F     { align1 1H A@1 compacted };
mul(16)         g21<1>F         g51<1,1,0>F     g83<1,1,0>F     { align1 1H F@6 compacted };
mul(16)         g51<1>F         g53<1,1,0>F     g85<1,1,0>F     { align1 1H F@6 compacted };
mul(16)         g53<1>F         g77<1,1,0>F     g87<1,1,0>F     { align1 1H F@6 compacted };
rndd(16)        g77<1>F         g79<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g79<1>F         g81<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g81<1>F         g19<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g19<1>F         -g21<1,1,0>F                    { align1 1H F@6 compacted };
rndd(16)        g21<1>F         -g51<1,1,0>F                    { align1 1H F@6 compacted };
rndd(16)        g51<1>F         -g53<1,1,0>F                    { align1 1H F@6 compacted };
sel.ge(16)      g53<1>F         g77<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g77<1>F         g79<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g79<1>F         g81<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g81<1>F         -g19<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g19<1>F         -g21<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g21<1>F         -g51<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.l(16)       g51<1>F         g53<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g53<1>F         g77<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g77<1>F         g79<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g79<1>F         g81<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g81<1>F         g19<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
mov(16)         g89<4>UB        g51<8,8,1>F                     { align1 1H A@5 };
sel.l(16)       g19<1>F         g21<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
mov(16)         g91<4>UB        g53<8,8,1>F                     { align1 1H F@5 };
mov(16)         g93<4>UB        g77<8,8,1>F                     { align1 1H F@4 };
mov(16)         g95<4>UB        g79<8,8,1>F                     { align1 1H F@3 };
mov(16)         g97<4>UB        g81<8,8,1>F                     { align1 1H F@2 };
mov(16)         g77<1>UW        g89<32,8,4>UB                   { align1 1H I@5 };
mov(16)         g99<4>UB        g19<8,8,1>F                     { align1 1H F@1 };
mov(16)         g54<1>UW        g91<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g53<1>UW        g93<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g80<1>UW        g95<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g79<1>UW        g97<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g78<1>UW        g99<32,8,4>UB                   { align1 1H I@5 };
else(16)        JIP:  LABEL9          UIP:  LABEL9              { align1 1H };

LABEL10:
mov(16)         g53<1>UW        0x0080UW                        { align1 1H I@5 };
mov(16)         g54<1>UW        0x0080UW                        { align1 1H I@7 };
mov(16)         g77<1>UW        0x0080UW                        { align1 1H I@7 };
mov(16)         g78<1>UW        0x0000UW                        { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g79<1>UW        0x0000UW                        { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g80<1>UW        0x0000UW                        { align1 1H I@7 };

LABEL9:
endif(16)       JIP:  LABEL8                                    { align1 1H };
add(16)         g51<1>D         g65<1,1,0>D     g55<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g81<2>UB        g53<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g82<2>UB        g54<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g83<2>UB        g77<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g117<2>UB       g78<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g118<2>UB       g79<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g119<2>UB       g80<16,16,1>UW                  { align1 1H I@7 };
cmp.l.f0.0(16)  g94<1>UD        g51<1,1,0>UD    g65<1,1,0>UD    { align1 1H I@7 compacted };
add(16)         g96<1>D         g51<1,1,0>D     28D             { align1 1H compacted };
mov(16)         g77<1>UD        g83<16,8,2>UB                   { align1 1H I@6 };
add(16)         g53<1>D         -g94<1,1,0>D    g67<1,1,0>D     { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g98<1>UD        g96<1,1,0>UD    g51<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g19<2>UD        g96<4,4,1>UD                    { align1 1Q $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $7.src };
mov(8)          g21<2>UD        g97<4,4,1>UD                    { align1 2Q F@1 };
add(16)         g102<1>D        -g98<1,1,0>D    g53<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g19.1<2>UD      g102<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g21.1<2>UD      g103<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g19UD           g77UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };
add(16)         g103<1>D        g51<1,1,0>D     40D             { align1 1H compacted };
mov(16)         g78<1>UD        g82<16,8,2>UB                   { align1 1H $8.src };
cmp.l.f0.0(16)  g105<1>UD       g103<1,1,0>UD   g51<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g19<2>UD        g103<4,4,1>UD                   { align1 1Q $8.src };
mov(8)          g21<2>UD        g104<4,4,1>UD                   { align1 2Q $8.src };
add(16)         g107<1>D        -g105<1,1,0>D   g53<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g19.1<2>UD      g107<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g21.1<2>UD      g108<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g19UD           g78UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $9 };
add(16)         g108<1>D        g51<1,1,0>D     52D             { align1 1H compacted };
mov(16)         g79<1>UD        g81<16,8,2>UB                   { align1 1H $9.src };
cmp.l.f0.0(16)  g110<1>UD       g108<1,1,0>UD   g51<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g19<2>UD        g108<4,4,1>UD                   { align1 1Q $9.src };
mov(8)          g21<2>UD        g109<4,4,1>UD                   { align1 2Q $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g112<1>D        -g110<1,1,0>D   g53<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g19.1<2>UD      g112<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g21.1<2>UD      g113<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g19UD           g79UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $10 };
add(16)         g113<1>D        g51<1,1,0>D     34D             { align1 1H $3.src compacted };
mov(16)         g80<1>UD        g119<16,8,2>UB                  { align1 1H $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g115<1>UD       g113<1,1,0>UD   g51<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g19<2>UD        g113<4,4,1>UD                   { align1 1Q $10.src };
mov(8)          g21<2>UD        g114<4,4,1>UD                   { align1 2Q $10.src };
add(16)         g119<1>D        -g115<1,1,0>D   g53<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g19.1<2>UD      g119<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g21.1<2>UD      g120<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g19UD           g80UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $11 };
add(16)         g120<1>D        g51<1,1,0>D     46D             { align1 1H compacted };
mov(16)         g81<1>UD        g118<16,8,2>UB                  { align1 1H $11.src };
cmp.l.f0.0(16)  g122<1>UD       g120<1,1,0>UD   g51<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g19<2>UD        g120<4,4,1>UD                   { align1 1Q $11.src };
mov(8)          g21<2>UD        g121<4,4,1>UD                   { align1 2Q $11.src };
add(16)         g124<1>D        -g122<1,1,0>D   g53<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g19.1<2>UD      g124<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g21.1<2>UD      g125<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g19UD           g81UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $12 };
add(16)         g125<1>D        g51<1,1,0>D     58D             { align1 1H compacted };
mov(16)         g82<1>UD        g117<16,8,2>UB                  { align1 1H $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
cmp.l.f0.0(16)  g77<1>UD        g125<1,1,0>UD   g51<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g19<2>UD        g125<4,4,1>UD                   { align1 1Q $12.src };
mov(8)          g21<2>UD        g126<4,4,1>UD                   { align1 2Q $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(16)         g79<1>D         -g77<1,1,0>D    g53<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g19.1<2>UD      g79<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g21.1<2>UD      g80<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g19UD           g82UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $13 };
cmp.nz.f0.0(16) null<1>D        g75<8,8,1>D     0D              { align1 1H };
add(16)         g82<1>D         g51<1,1,0>D     22D             { align1 1H $13.src compacted };
(-f0.0) sel(16) g80<1>UD        g101<0,1,0>UD   0x00000002UD    { align1 1H $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(8)          g19<2>UD        g82<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $13.src };
mov(8)          g21<2>UD        g83<4,4,1>UD                    { align1 2Q I@3 };
mov(16)         g86<4>UB        g80<8,8,1>UD                    { align1 1H I@3 };
cmp.l.f0.0(16)  g84<1>UD        g82<1,1,0>UD    g51<1,1,0>UD    { align1 1H compacted };
mov(16)         g88<1>UD        g86<32,8,4>UB                   { align1 1H I@2 };
add(16)         g86<1>D         -g84<1,1,0>D    g53<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g19.1<2>UD      g86<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g21.1<2>UD      g87<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g19UD           g88UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };

LABEL8:
endif(16)       JIP:  LABEL11                                   { align1 1H };

LABEL11:
else(16)        JIP:  LABEL6          UIP:  LABEL6              { align1 1H };

LABEL7:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g87<1>UD        g35.3<32,8,4>UB                 { align1 1H A@3 };
cmp.l.f0.0(16)  null<1>D        g57<8,8,1>D     g59<8,8,1>D     { align1 1H };
(+f0.0) sel(16) g81<1>UD        g87<1,1,0>UD    0x00000000UD    { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g88<1>UD        g81<32,8,4>UB                   { align1 1H A@1 };
cmp.l.f0.0(16)  null<1>UD       g55<8,8,1>UD    g59<8,8,1>UD    { align1 1H };
mov(16)         a0<1>UW         0x0b00UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b00UW        { align1 1H A@1 };
mov(16)         g90<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
or(16)          g92<1>UD        g81<1,1,0>UD    g90<1,1,0>UD    { align1 1H A@1 compacted };
mov(16)         g94<1>UD        g92<32,8,4>UB                   { align1 1H A@1 };
mov(16)         a0<1>UW         0x0bc0UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0bc0UW        { align1 1H A@1 };
mov(16)         g96<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
or(16)          g98<1>UD        g94<1,1,0>UD    g96<1,1,0>UD    { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g100<1>UD       g98<32,8,4>UB                   { align1 1H };
mov(16)         a0<1>UW         0x0c80UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0c80UW        { align1 1H A@1 };
mov(16)         g102<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
or(16)          g104<1>UD       g98<1,1,0>UD    g102<1,1,0>UD   { align1 1H I@1 compacted };
mov(16)         g51<4>UB        g104<0,1,0>UD                   { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL12             { align1 1H };
mov(16)         g106<1>UD       g104<0,1,0>UB                   { align1 1H };
cmp.z.f0.0(16)  g108<1>D        g106<1,1,0>D    0D              { align1 1H I@1 compacted };
cmp.z.f0.0(16)  null<1>D        g81<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g110<1>UD       g108<8,8,1>UD   0xffffffffUD    { align1 1H I@2 };
cmp.nz.f0.0(16) null<1>D        g110<8,8,1>D    0D              { align1 1H I@1 };
(+f0.0) sel(16) g75<1>UD        g37<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g77<1>UD        g39<8,8,1>UD    0xff800000UD    { align1 1H F@3 };
(+f0.0) sel(16) g79<1>UD        g41<8,8,1>UD    0xff800000UD    { align1 1H F@2 };
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
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         a0<1>UW         0x06a0UW                        { align1 WE_all 1H I@5 };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x06a0UW        { align1 1H A@1 };
mov(16)         g111<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         a0<1>UW         0x05a0UW                        { align1 WE_all 1H I@5 };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x05a0UW        { align1 1H A@1 };
mov(16)         g113<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         a0<1>UW         0x05e0UW                        { align1 WE_all 1H I@5 };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x05e0UW        { align1 1H A@1 };
mov(16)         g115<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0960UW                        { align1 WE_all 1H I@5 };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0960UW        { align1 1H A@1 };
mov(16)         g119<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x09a0UW                        { align1 WE_all 1H I@7 };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x09a0UW        { align1 1H A@1 };
mov(16)         g121<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x09e0UW                        { align1 WE_all 1H I@7 };
shl(16)         a0<1>UW         g69<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x09e0UW        { align1 1H A@1 };
mov(16)         g104<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g55<8,8,1>UD    0x00000006UD    { align1 1H };
sel.l(16)       g98<1>F         g53<1,1,0>F     g111<1,1,0>F    { align1 1H A@6 compacted };
sel.l(16)       g100<1>F        g45<1,1,0>F     g113<1,1,0>F    { align1 1H I@6 compacted };
sel.l(16)       g102<1>F        g47<1,1,0>F     g115<1,1,0>F    { align1 1H I@5 compacted };
sel.ge(16)      g86<1>F         g75<1,1,0>F     g119<1,1,0>F    { align1 1H A@4 compacted };
sel.ge(16)      g88<1>F         g77<1,1,0>F     g121<1,1,0>F    { align1 1H A@3 compacted };
sel.ge(16)      g90<1>F         g79<1,1,0>F     g104<1,1,0>F    { align1 1H A@2 compacted };
mov(16)         a0<1>UW         0x0c80UW                        { align1 WE_all 1H F@5 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0c80UW        { align1 1H A@1 };
mov(16)         g106<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0c40UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0c40UW        { align1 1H A@1 };
mov(16)         g104<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0cc0UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0cc0UW        { align1 1H A@1 };
mov(16)         g108<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0ac0UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ac0UW        { align1 1H A@1 };
mov(16)         g92<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0b00UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b00UW        { align1 1H A@1 };
mov(16)         g94<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0b40UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g71<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b40UW        { align1 1H A@1 };
mov(16)         g96<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g112<1>F        g100<1,1,0>F    g106<1,1,0>F    { align1 1H I@6 compacted };
sel.l(16)       g110<1>F        g98<1,1,0>F     g104<1,1,0>F    { align1 1H I@5 compacted };
sel.l(16)       g114<1>F        g102<1,1,0>F    g108<1,1,0>F    { align1 1H I@4 compacted };
sel.ge(16)      g122<1>F        g86<1,1,0>F     g92<1,1,0>F     { align1 1H I@3 compacted };
sel.ge(16)      g124<1>F        g88<1,1,0>F     g94<1,1,0>F     { align1 1H I@2 compacted };
sel.ge(16)      g126<1>F        g90<1,1,0>F     g96<1,1,0>F     { align1 1H I@1 compacted };
mov(16)         a0<1>UW         0x0dc0UW                        { align1 WE_all 1H F@5 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0dc0UW        { align1 1H A@1 };
mov(16)         g118<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0e00UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0e00UW        { align1 1H A@1 };
mov(16)         g96<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0e40UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0e40UW        { align1 1H A@1 };
mov(16)         g89<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0f40UW                        { align1 WE_all 1H A@2 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0f40UW        { align1 1H A@1 };
mov(16)         g87<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0f80UW                        { align1 WE_all 1H A@2 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0f80UW        { align1 1H A@1 };
mov(16)         g85<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0fc0UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g73<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0fc0UW        { align1 1H A@1 };
mov(16)         g83<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g116<1>F        g110<1,1,0>F    g118<1,1,0>F    { align1 1H I@6 compacted };
sel.l(16)       g120<1>F        g114<1,1,0>F    g89<1,1,0>F     { align1 1H I@4 compacted };
sel.l(16)       g118<1>F        g112<1,1,0>F    g96<1,1,0>F     { align1 1H I@5 compacted };
sel.ge(16)      g49<1>F         g122<1,1,0>F    g87<1,1,0>F     { align1 1H I@3 compacted };
sel.ge(16)      g69<1>F         g124<1,1,0>F    g85<1,1,0>F     { align1 1H I@2 compacted };
sel.ge(16)      g71<1>F         g126<1,1,0>F    g83<1,1,0>F     { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL14         UIP:  LABEL14             { align1 1H };
sel.ge(16)      g122<1>F        (abs)g116<0,1,0>F (abs)g49<0,1,0>F { align1 1H A@3 compacted };
sel.ge(16)      g124<1>F        (abs)g118<0,1,0>F (abs)g69<0,1,0>F { align1 1H A@3 compacted };
sel.ge(16)      g126<1>F        (abs)g120<0,1,0>F (abs)g71<0,1,0>F { align1 1H A@2 compacted };
add(16)         g95<1>D         g65<1,1,0>D     16D             { align1 1H F@7 compacted };
sel.ge(16)      g35<1>F         g124<1,1,0>F    g126<1,1,0>F    { align1 1H F@1 compacted };
mov(16)         g87<2>B         1W                              { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g19<2>UD        g95<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $4.src };
mov(8)          g21<2>UD        g96<4,4,1>UD                    { align1 2Q I@3 };
sel.ge(16)      g37<1>F         g122<1,1,0>F    g35<1,1,0>F     { align1 1H F@1 compacted };
mov(16)         g97<1>UD        g87<16,8,2>UB                   { align1 1H A@3 };
mul(16)         g105<1>F        g37<1,1,0>F     0x34000000F  /* 1.19209e-07F */ { align1 1H F@1 compacted };
add(16)         g35<1>F         g116<0,1,0>F    -g105<1,1,0>F   { align1 1H F@1 compacted };
add(16)         g37<1>F         g118<0,1,0>F    -g105<1,1,0>F   { align1 1H compacted };
add(16)         g39<1>F         g120<0,1,0>F    -g105<1,1,0>F   { align1 1H compacted };
add(16)         g73<1>F         g49<0,1,0>F     g105<1,1,0>F    { align1 1H I@7 compacted };
add(16)         g83<1>F         g69<0,1,0>F     g105<1,1,0>F    { align1 1H compacted };
add(16)         g85<1>F         g71<0,1,0>F     g105<1,1,0>F    { align1 1H compacted };
add(16)         g87<1>F         g73<1,1,0>F     -g35<1,1,0>F    { align1 1H A@1 compacted };
add(16)         g89<1>F         g83<1,1,0>F     -g37<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g91<1>F         g85<1,1,0>F     -g39<1,1,0>F    { align1 1H F@3 compacted };
mul(16)         g106<1>F        g87<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
mul(16)         g73<1>F         g89<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
mul(16)         g49<1>F         g91<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
and(16)         g89<1>UD        g106<8,8,1>UD   0x7f800000UD    { align1 1H F@2 };
and(16)         g69<1>UD        g106<8,8,1>UD   0x007fffffUD    { align1 1H F@7 };
and(16)         g83<1>UD        g106<8,8,1>UD   0x80000000UD    { align1 1H F@5 };
and(16)         g91<1>UD        g73<8,8,1>UD    0x7f800000UD    { align1 1H F@1 };
and(16)         g71<1>UD        g73<8,8,1>UD    0x007fffffUD    { align1 1H F@7 };
and(16)         g85<1>UD        g73<8,8,1>UD    0x80000000UD    { align1 1H F@4 };
and(16)         g87<1>UD        g49<8,8,1>UD    0x80000000UD    { align1 1H F@1 };
and(16)         g93<1>UD        g49<8,8,1>UD    0x7f800000UD    { align1 1H };
and(16)         g73<1>UD        g49<8,8,1>UD    0x007fffffUD    { align1 1H };
add(16)         g49<1>D         g69<8,8,1>D     1056964608D     { align1 1H I@7 };
asr(16)         g69<1>D         g89<8,8,1>D     0x00000017UD    { align1 1H I@7 };
add(16)         g89<1>D         g71<8,8,1>D     1056964608D     { align1 1H I@7 };
asr(16)         g71<1>D         g91<8,8,1>D     0x00000017UD    { align1 1H I@7 };
add(16)         g91<1>D         g73<8,8,1>D     1056964608D     { align1 1H I@5 };
cmp.z.f0.0(16)  null<1>F        g49<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@5 compacted };
asr(16)         g73<1>D         g93<8,8,1>D     0x00000017UD    { align1 1H I@7 };
(-f0.0) sel(16) g93<1>UD        g49<8,8,1>UD    0x3f000000UD    { align1 1H };
and(16)         g49<1>UD        g93<8,8,1>UD    0x7fffffffUD    { align1 1H A@1 };
cmp.z.f0.0(16)  null<1>F        g89<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@6 compacted };
or(16)          g93<1>UD        g49<1,1,0>UD    g83<1,1,0>UD    { align1 1H I@1 compacted };
(-f0.0) sel(16) g49<1>UD        g89<8,8,1>UD    0x3f000000UD    { align1 1H };
and(16)         g83<1>UD        g49<8,8,1>UD    0x7fffffffUD    { align1 1H I@1 };
cmp.z.f0.0(16)  null<1>F        g91<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@7 compacted };
or(16)          g49<1>UD        g83<1,1,0>UD    g85<1,1,0>UD    { align1 1H I@1 compacted };
(-f0.0) sel(16) g83<1>UD        g91<8,8,1>UD    0x3f000000UD    { align1 1H };
and(16)         g85<1>UD        g83<8,8,1>UD    0x7fffffffUD    { align1 1H I@1 };
cmp.g.f0.0(16)  g83<1>F         g93<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@1 };
or(16)          g89<1>UD        g85<1,1,0>UD    g87<1,1,0>UD    { align1 1H A@1 compacted };
cmp.g.f0.0(16)  g85<1>F         g49<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@1 };
add3(16)        g49<1>D         65410W          g69<8,8,1>D     -g83<1,1,1>D { align1 1H F@1 };
cmp.g.f0.0(16)  g92<1>F         g89<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H A@2 };
cmp.l.f0.0(16)  g103<1>UD       g95<1,1,0>UD    g65<1,1,0>UD    { align1 1H compacted };
add3(16)        g99<1>D         65410W          g71<8,8,1>D     -g85<1,1,1>D { align1 1H F@2 };
add3(16)        g101<1>D        65410W          g73<8,8,1>D     -g92<1,1,1>D { align1 1H F@1 };
add(16)         g105<1>D        -g103<1,1,0>D   g67<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g19.1<2>UD      g105<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g21.1<2>UD      g106<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g19UD           g97UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $14 };
mov(16)         g41<1>UD        g29<8,8,1>UD                    { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g31UD           g35UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $6 };
add(16)         g106<1>D        g65<1,1,0>D     18D             { align1 1H compacted };
mov(16)         g91<4>UB        g49<8,8,1>UD                    { align1 1H A@4 };
cmp.l.f0.0(16)  g108<1>UD       g106<1,1,0>UD   g65<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g19<2>UD        g106<4,4,1>UD                   { align1 1Q $14.src };
mov(8)          g21<2>UD        g107<4,4,1>UD                   { align1 2Q $14.src };
mov(16)         g93<4>UB        g99<8,8,1>UD                    { align1 1H F@3 };
mov(16)         g95<4>UB        g101<8,8,1>UD                   { align1 1H };
mov(16)         g89<4>UB        g91<32,8,4>UB                   { align1 1H A@1 };
add(16)         g110<1>D        -g108<1,1,0>D   g67<1,1,0>D     { align1 1H I@6 compacted };
mov(16)         g89.1<4>UB      g93<32,8,4>UB                   { align1 1H I@2 };
mov(8)          g19.1<2>UD      g110<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g21.1<2>UD      g111<4,4,1>UD                   { align1 2Q I@3 };
mov(16)         g89.2<4>UB      g95<32,8,4>UB                   { align1 1H I@3 };
mov(16)         g89.3<4>UB      g51<32,8,4>UB                   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g19UD           g89UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };
cmp.l.f0.0(16)  null<1>UD       g55<8,8,1>UD    g59<8,8,1>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL16         UIP:  LABEL15             { align1 1H };
sel.ge(16)      g113<1>F        (abs)g53<1,1,0>F (abs)g75<1,1,0>F { align1 1H compacted };
sel.ge(16)      g115<1>F        (abs)g45<1,1,0>F (abs)g77<1,1,0>F { align1 1H compacted };
sel.ge(16)      g117<1>F        (abs)g47<1,1,0>F (abs)g79<1,1,0>F { align1 1H compacted };
shl(16)         g83<1>D         -g49<8,8,1>D    0x00000017UD    { align1 1H };
shl(16)         g85<1>D         -g99<8,8,1>D    0x00000017UD    { align1 1H };
shl(16)         g87<1>D         -g101<8,8,1>D   0x00000017UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g81<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
sel.ge(16)      g23<1>F         g115<1,1,0>F    g117<1,1,0>F    { align1 1H compacted };
add(16)         g107<1>D        g83<8,8,1>D     1132462080D     { align1 1H I@4 };
add(16)         g109<1>D        g85<8,8,1>D     1132462080D     { align1 1H I@4 };
add(16)         g111<1>D        g87<8,8,1>D     1132462080D     { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
sel.ge(16)      g25<1>F         g113<1,1,0>F    g23<1,1,0>F     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mul(16)         g27<1>F         g25<1,1,0>F     0x34000000F  /* 1.19209e-07F */ { align1 1H F@1 compacted };
add(16)         g29<1>F         g53<1,1,0>F     -g27<1,1,0>F    { align1 1H F@1 compacted };
add(16)         g31<1>F         g45<1,1,0>F     -g27<1,1,0>F    { align1 1H $6.src compacted };
add(16)         g33<1>F         g47<1,1,0>F     -g27<1,1,0>F    { align1 1H $6.src compacted };
add(16)         g49<1>F         g79<1,1,0>F     g27<1,1,0>F     { align1 1H I@7 compacted };
add(16)         g45<1>F         g75<1,1,0>F     g27<1,1,0>F     { align1 1H F@3 compacted };
add(16)         g47<1>F         g77<1,1,0>F     g27<1,1,0>F     { align1 1H F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g51<1>F         g29<1,1,0>F     -g35<1,1,0>F    { align1 1H A@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g53<1>F         g31<1,1,0>F     -g37<1,1,0>F    { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g69<1>F         g33<1,1,0>F     -g39<1,1,0>F    { align1 1H F@6 compacted };
add(16)         g117<1>F        g49<1,1,0>F     -g39<1,1,0>F    { align1 1H F@6 compacted };
add(16)         g113<1>F        g45<1,1,0>F     -g35<1,1,0>F    { align1 1H F@6 compacted };
add(16)         g115<1>F        g47<1,1,0>F     -g37<1,1,0>F    { align1 1H F@6 compacted };
mul(16)         g71<1>F         g51<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g73<1>F         g53<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g75<1>F         g69<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g27<1>F         g117<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g23<1>F         g113<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g25<1>F         g115<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mul(16)         g88<1>F         g71<1,1,0>F     g107<1,1,0>F    { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mul(16)         g90<1>F         g73<1,1,0>F     g109<1,1,0>F    { align1 1H A@2 compacted };
mul(16)         g92<1>F         g75<1,1,0>F     g111<1,1,0>F    { align1 1H A@1 compacted };
mul(16)         g33<1>F         g27<1,1,0>F     g111<1,1,0>F    { align1 1H F@6 compacted };
mul(16)         g29<1>F         g23<1,1,0>F     g107<1,1,0>F    { align1 1H F@6 compacted };
mul(16)         g31<1>F         g25<1,1,0>F     g109<1,1,0>F    { align1 1H F@6 compacted };
rndd(16)        g94<1>F         g88<1,1,0>F                     { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
rndd(16)        g96<1>F         g90<1,1,0>F                     { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
rndd(16)        g98<1>F         g92<1,1,0>F                     { align1 1H A@6 compacted };
rndd(16)        g39<1>F         -g33<1,1,0>F                    { align1 1H F@6 compacted };
rndd(16)        g35<1>F         -g29<1,1,0>F                    { align1 1H F@6 compacted };
rndd(16)        g37<1>F         -g31<1,1,0>F                    { align1 1H F@6 compacted };
sel.ge(16)      g100<1>F        g94<1,1,0>F     0x0F  /* 0F */  { align1 1H A@5 compacted };
sel.ge(16)      g102<1>F        g96<1,1,0>F     0x0F  /* 0F */  { align1 1H A@5 compacted };
sel.ge(16)      g104<1>F        g98<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g47<1>F         -g39<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.ge(16)      g41<1>F         -g35<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g45<1>F         -g37<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.l(16)       g106<1>F        g100<8,8,1>F    0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g108<1>F        g102<8,8,1>F    0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g110<1>F        g104<8,8,1>F    0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g53<1>F         g47<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g49<1>F         g41<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g51<1>F         g45<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
mov(16)         g120<4>UB       g106<8,8,1>F                    { align1 1H F@6 };
mov(16)         g122<4>UB       g108<8,8,1>F                    { align1 1H F@5 };
mov(16)         g124<4>UB       g110<8,8,1>F                    { align1 1H F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g21<4>UB        g53<8,8,1>F                     { align1 1H F@3 };
mov(16)         g126<4>UB       g49<8,8,1>F                     { align1 1H F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g19<4>UB        g51<8,8,1>F                     { align1 1H F@1 };
mov(16)         g71<1>UW        g120<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g72<1>UW        g122<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g73<1>UW        g124<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g70<1>UW        g21<32,8,4>UB                   { align1 1H I@6 };
mov(16)         g54<1>UW        g126<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g69<1>UW        g19<32,8,4>UB                   { align1 1H I@6 };
(-f0.0) sel(16) g83<1>UW        g71<16,16,1>UW  0x0000UW        { align1 1H I@6 };
(-f0.0) sel(16) g82<1>UW        g72<16,16,1>UW  0x0000UW        { align1 1H I@6 };
(-f0.0) sel(16) g81<1>UW        g73<16,16,1>UW  0x0000UW        { align1 1H I@6 };
(-f0.0) sel(16) g84<1>UW        g70<16,16,1>UW  0x0000UW        { align1 1H I@6 };
(-f0.0) sel(16) g86<1>UW        g54<16,16,1>UW  0x0000UW        { align1 1H I@6 };
(-f0.0) sel(16) g85<1>UW        g69<16,16,1>UW  0x0000UW        { align1 1H I@6 };
else(16)        JIP:  LABEL15         UIP:  LABEL15             { align1 1H };

LABEL16:
mov(16)         g81<1>UW        0x0080UW                        { align1 1H I@5 };
mov(16)         g82<1>UW        0x0080UW                        { align1 1H I@7 };
mov(16)         g83<1>UW        0x0080UW                        { align1 1H I@7 };
mov(16)         g84<1>UW        0x0000UW                        { align1 1H I@7 };
mov(16)         g85<1>UW        0x0000UW                        { align1 1H I@6 };
mov(16)         g86<1>UW        0x0000UW                        { align1 1H I@7 };

LABEL15:
endif(16)       JIP:  LABEL14                                   { align1 1H };
add(16)         g74<1>D         g65<1,1,0>D     g55<1,1,0>D     { align1 1H compacted };
mov(16)         g106<2>UB       g81<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g107<2>UB       g82<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g108<2>UB       g83<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g121<2>UB       g84<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g122<2>UB       g85<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g123<2>UB       g86<16,16,1>UW                  { align1 1H I@7 };
add(16)         g80<1>D         g74<1,1,0>D     28D             { align1 1H I@7 compacted };
cmp.l.f0.0(16)  g76<1>UD        g74<1,1,0>UD    g65<1,1,0>UD    { align1 1H compacted };
mov(16)         g94<1>UD        g108<16,8,2>UB                  { align1 1H I@6 };
cmp.l.f0.0(16)  g82<1>UD        g80<1,1,0>UD    g74<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g90<2>UD        g80<4,4,1>UD                    { align1 1Q $4.src };
mov(8)          g92<2>UD        g81<4,4,1>UD                    { align1 2Q };
add(16)         g78<1>D         -g76<1,1,0>D    g67<1,1,0>D     { align1 1H I@5 compacted };
add(16)         g84<1>D         -g82<1,1,0>D    g78<1,1,0>D     { align1 1H I@1 compacted };
mov(8)          g90.1<2>UD      g84<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g92.1<2>UD      g85<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g90UD           g94UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $15 };
add(16)         g85<1>D         g74<1,1,0>D     40D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         g99<1>UD        g107<16,8,2>UB                  { align1 1H F@6 };
cmp.l.f0.0(16)  g87<1>UD        g85<1,1,0>UD    g74<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g95<2>UD        g85<4,4,1>UD                    { align1 1Q $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $14.src };
mov(8)          g97<2>UD        g86<4,4,1>UD                    { align1 2Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g89<1>D         -g87<1,1,0>D    g78<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g95.1<2>UD      g89<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g97.1<2>UD      g90<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g95UD           g99UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };
add(16)         g90<1>D         g74<1,1,0>D     52D             { align1 1H $15.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g104<1>UD       g106<16,8,2>UB                  { align1 1H F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
cmp.l.f0.0(16)  g92<1>UD        g90<1,1,0>UD    g74<1,1,0>UD    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g100<2>UD       g90<4,4,1>UD                    { align1 1Q F@6 };
mov(8)          g102<2>UD       g91<4,4,1>UD                    { align1 2Q F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g94<1>D         -g92<1,1,0>D    g78<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g100.1<2>UD     g94<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g102.1<2>UD     g95<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g100UD          g104UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
add(16)         g95<1>D         g74<1,1,0>D     34D             { align1 1H $0.src compacted };
mov(16)         g109<1>UD       g123<16,8,2>UB                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g97<1>UD        g95<1,1,0>UD    g74<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g105<2>UD       g95<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g107<2>UD       g96<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g99<1>D         -g97<1,1,0>D    g78<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g105.1<2>UD     g99<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g107.1<2>UD     g100<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g105UD          g109UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $2 };
add(16)         g100<1>D        g74<1,1,0>D     46D             { align1 1H $1.src compacted };
mov(16)         g114<1>UD       g122<16,8,2>UB                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g102<1>UD       g100<1,1,0>UD   g74<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g110<2>UD       g100<4,4,1>UD                   { align1 1Q $2.src };
mov(8)          g112<2>UD       g101<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g104<1>D        -g102<1,1,0>D   g78<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g110.1<2>UD     g104<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g112.1<2>UD     g105<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g110UD          g114UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $3 };
add(16)         g105<1>D        g74<1,1,0>D     58D             { align1 1H $2.src compacted };
mov(16)         g119<1>UD       g121<16,8,2>UB                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g107<1>UD       g105<1,1,0>UD   g74<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g115<2>UD       g105<4,4,1>UD                   { align1 1Q $3.src };
mov(8)          g117<2>UD       g106<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g109<1>D        -g107<1,1,0>D   g78<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g115.1<2>UD     g109<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g117.1<2>UD     g110<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g115UD          g119UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $3 };
add(16)         g110<1>D        g74<1,1,0>D     22D             { align1 1H $3.src compacted };
mov(16)         g126<2>B        2W                              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g112<1>UD       g110<1,1,0>UD   g74<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g120<2>UD       g110<4,4,1>UD                   { align1 1Q $3.src };
mov(8)          g122<2>UD       g111<4,4,1>UD                   { align1 2Q };
mov(16)         g124<1>UD       g126<16,8,2>UB                  { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g114<1>D        -g112<1,1,0>D   g78<1,1,0>D     { align1 1H I@4 compacted };
mov(8)          g120.1<2>UD     g114<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g122.1<2>UD     g115<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g120UD          g124UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };

LABEL14:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
endif(16)       JIP:  LABEL17                                   { align1 1H };

LABEL17:
cmp.l.f0.0(16)  null<1>D        g57<8,8,1>D     g59<8,8,1>D     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL18         UIP:  LABEL18             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
asr(16)         g115<1>D        g59<8,8,1>D     0x0000001fUD    { align1 1H A@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
shl(16)         g117<1>D        g57<8,8,1>D     0x00000005UD    { align1 1H F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
shr(16)         g119<1>UD       g57<1,1,0>UD    0x0000001bUD    { align1 1H F@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g121<1>D        g2.4<0,1,0>D    g117<1,1,0>D    { align1 1H A@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g123<1>UD       g121<1,1,0>UD   g2.4<0,1,0>UD   { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g19<2>UD        g121<4,4,1>UD                   { align1 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $4.src };
mov(8)          g21<2>UD        g122<4,4,1>UD                   { align1 2Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add3(16)        g125<1>D        g2.5<0,1,0>D    g119<8,8,1>D    -g123<1,1,1>D { align1 1H A@1 };
mov(8)          g19.1<2>UD      g125<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g21.1<2>UD      g126<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g19UD           g3UD            0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $5 };
add(16)         g3<1>D          g121<1,1,0>D    16D             { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g5<1>UD         g3<1,1,0>UD     g121<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g20<2>UD        g3<4,4,1>UD                     { align1 1Q $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $6.src };
mov(8)          g22<2>UD        g4<4,4,1>UD                     { align1 2Q $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g7<1>D          -g5<1,1,0>D     g125<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g20.1<2>UD      g7<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g22.1<2>UD      g8<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g20UD           g11UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $6 };
shl(16)         g8<1>D          g57<8,8,1>D     0x00000002UD    { align1 1H $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shr(16)         g10<1>UD        g57<1,1,0>UD    0x0000001eUD    { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g12<1>D         g2.6<0,1,0>D    g8<1,1,0>D      { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g14<1>UD        g12<1,1,0>UD    g2.6<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g21<2>UD        g12<4,4,1>UD                    { align1 1Q $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $6.src };
mov(8)          g23<2>UD        g13<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add3(16)        g16<1>D         g2.7<0,1,0>D    g10<8,8,1>D     -g14<1,1,1>D { align1 1H I@3 };
mov(8)          g21.1<2>UD      g16<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g23.1<2>UD      g17<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g21UD           g57UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shr(16)         g39<1>UD        g43<0,1,0>UD    0x00000006UD    { align1 1H F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g17<1>D         g59<1,1,0>D     g57<1,1,0>D     { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g19<1>UD        g17<1,1,0>UD    g59<1,1,0>UD    { align1 1H I@1 compacted };
shl(16)         g23<1>D         g17<8,8,1>D     0x00000002UD    { align1 1H $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
shr(16)         g26<1>UD        g17<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g21<1>D         -g19<1,1,0>D    g115<1,1,0>D    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g29<1>D         g2.6<0,1,0>D    g23<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g24<1>D         g21<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g31<1>UD        g29<1,1,0>UD    g2.6<0,1,0>UD   { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g35<2>UD        g29<4,4,1>UD                    { align1 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $6.src };
mov(8)          g37<2>UD        g30<4,4,1>UD                    { align1 2Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
or(16)          g28<1>UD        g24<1,1,0>UD    g26<1,1,0>UD    { align1 1H A@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add3(16)        g33<1>D         g2.7<0,1,0>D    g28<8,8,1>D     -g31<1,1,1>D { align1 1H I@1 };
mov(8)          g35.1<2>UD      g33<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g37.1<2>UD      g34<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g35UD           g39UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };
and.nz.f0.0(16) null<1>UD       g61<8,8,1>UD    g63<8,8,1>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL19         UIP:  LABEL19             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shl(16)         g34<1>D         g59<8,8,1>D     0x00000003UD    { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g36<1>D         g2.2<0,1,0>D    40D             { align1 1H F@7 compacted };
or(16)          g55<1>UD        g34<8,8,1>UD    0xffffffc0UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g38<1>UD        g36<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H A@2 compacted };
mov(8)          g43<2>UD        g36<4,4,1>UD                    { align1 1Q };
mov(8)          g45<2>UD        g37<4,4,1>UD                    { align1 2Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g40<1>D         -g38<1,1,0>D    g2.3<0,1,0>D    { align1 1H A@2 compacted };
mov(8)          g43.1<2>UD      g40<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g45.1<2>UD      g41<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g41UD           g43UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
shl(16)         g43<1>D         g41<8,8,1>D     0x00000006UD    { align1 1H $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g45<1>D         g2.2<0,1,0>D    g43<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g47<1>UD        g45<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H A@1 compacted };
mov(8)          g51<2>UD        g45<4,4,1>UD                    { align1 1Q };
mov(8)          g53<2>UD        g46<4,4,1>UD                    { align1 2Q };
add(16)         g49<1>D         -g47<1,1,0>D    g2.3<0,1,0>D    { align1 1H A@3 compacted };
mov(8)          g51.1<2>UD      g49<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g53.1<2>UD      g50<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g51UD           g55UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $9 };

LABEL19:
endif(16)       JIP:  LABEL18                                   { align1 1H };

LABEL18:
endif(16)       JIP:  LABEL20                                   { align1 1H };

LABEL20:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q A@1 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_DFS_DFS_trivial_code[] = {
    0x80000065, 0x43058220, 0x02000004, 0xffffffc0,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00430c, 0x00340000,
    0xe2443040, 0x04014303, 0x80030061, 0x16054410,
    0x00000000, 0x76543210, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa00440c, 0x00300000, 0x64161940, 0x00801695,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x37050160, 0x00461605, 0x00000000,
    0xe0611965, 0x00f03703, 0x00041961, 0x74060210,
    0x00466105, 0x00000000, 0x00040061, 0x39050120,
    0x00566106, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa0570040, 0x02410203,
    0xe75c1970, 0x02405703, 0x00030061, 0x3f060220,
    0x00345705, 0x00000000, 0x00130061, 0x41060220,
    0x00345805, 0x00000000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0xe05f0065, 0x00110303,
    0xae3d1970, 0x00005f03, 0xa05e1d40, 0x02125c12,
    0x00031961, 0x3f260220, 0x00345e05, 0x00000000,
    0x00131a61, 0x41260220, 0x00345f05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x33240000, 0xfb043f24, 0x000c0000,
    0x00042261, 0x5a060210, 0x00463505, 0x00000000,
    0x00042261, 0x3b050120, 0x00563306, 0x00000000,
    0x00041970, 0x00010660, 0x56463905, 0x00463b05,
    0x01040022, 0x0001c060, 0x00000230, 0x000001b0,
    0x00040069, 0x62058660, 0x02463905, 0x00000005,
    0xe0640068, 0x01b03903, 0xa0661a40, 0x6201025a,
    0x27681970, 0x0210660b, 0x00033261, 0x40060220,
    0x00346605, 0x00000000, 0x00133261, 0x42060220,
    0x00346705, 0x00000000, 0xa06c0040, 0x01006603,
    0x00041c52, 0x6a040660, 0x0e2e02a4, 0x68056405,
    0x276e1a70, 0x66006c03, 0x00030061, 0x70060220,
    0x00346c05, 0x00000000, 0x00130061, 0x72060220,
    0x00346d05, 0x00000000, 0x00031c61, 0x40260220,
    0x00346a05, 0x00000000, 0x00131d61, 0x42260220,
    0x00346b05, 0x00000000, 0xa0761d40, 0x6a026e02,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x5c440000, 0xfb044024, 0x003c0000,
    0x00031961, 0x70260220, 0x00347605, 0x00000000,
    0x00131a61, 0x72260220, 0x00347705, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x03440000, 0xfb047024, 0x003c0000,
    0x00042261, 0x2d050220, 0x00465c05, 0x00000000,
    0x00042261, 0x2f050220, 0x00465e05, 0x00000000,
    0x00042261, 0x31050220, 0x00466005, 0x00000000,
    0x00042261, 0x23050220, 0x00466205, 0x00000000,
    0x00042361, 0x25050220, 0x00460305, 0x00000000,
    0x00042361, 0x27050220, 0x00460505, 0x00000000,
    0x00042361, 0x29050220, 0x00460705, 0x00000000,
    0x00042361, 0x11050220, 0x00460905, 0x00000000,
    0x00040024, 0x0001c060, 0x00000090, 0x00000090,
    0x00041e61, 0x23054220, 0x00000000, 0x00000000,
    0x00041f61, 0x31054220, 0x00000000, 0x7f800000,
    0x00041f61, 0x2f054220, 0x00000000, 0x7f800000,
    0x00040061, 0x2d054220, 0x00000000, 0x7f800000,
    0x00041e61, 0x11054220, 0x00000000, 0x80000000,
    0x00041f61, 0x29054220, 0x00000000, 0xff800000,
    0x00041f61, 0x27054220, 0x00000000, 0xff800000,
    0x00040061, 0x25054220, 0x00000000, 0xff800000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00041e61, 0x03050220, 0x00462d05, 0x00000000,
    0x00041f61, 0x05050220, 0x00462f05, 0x00000000,
    0x00041f61, 0x07050220, 0x00463105, 0x00000000,
    0x00041f61, 0x09050220, 0x00462305, 0x00000000,
    0x00041e61, 0x0b050220, 0x00462505, 0x00000000,
    0x00041f61, 0x0d050220, 0x00462705, 0x00000000,
    0x00041f61, 0x0f050220, 0x00462905, 0x00000000,
    0x00040070, 0x77058550, 0x15567406, 0x00000000,
    0x80000061, 0x65054660, 0x00000000, 0x00000001,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00041a61, 0x3f050560, 0x20467705, 0x00000000,
    0x01040022, 0x0001c060, 0x000002c0, 0x000002c0,
    0xa0780040, 0x00c10243, 0x277a1970, 0x0210782b,
    0x00033361, 0x71060220, 0x00347805, 0x00000000,
    0x00133361, 0x73060220, 0x00347905, 0x00000000,
    0xa07c1b40, 0x02127a1a, 0x00031961, 0x71260220,
    0x00347c05, 0x00000000, 0x00131a61, 0x73260220,
    0x00347d05, 0x00000000, 0xe2130961, 0x00114004,
    0x80000965, 0x13058220, 0x02001304, 0xffffffff,
    0xe2140961, 0x00117044, 0x80000965, 0x14058220,
    0x02001404, 0xffffffff, 0x22141965, 0x14111303,
    0x80001961, 0x7e050220, 0x00001404, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0004004d, 0x13050220, 0x00007e04, 0x00000000,
    0xe2150961, 0x00114004, 0x80000965, 0x15058220,
    0x02001504, 0xffffffff, 0x00040061, 0x19050160,
    0x00461605, 0x00000000, 0x80001a4c, 0x17050220,
    0x00001504, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040070, 0x00010660,
    0x16461905, 0x00001704, 0x01040022, 0x0001c060,
    0x00000030, 0x00000030, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x17140000,
    0xfb187124, 0x01001314, 0x00040025, 0x00004600,
    0x00000000, 0x00000168, 0xe2190961, 0x00114004,
    0x80000965, 0x19058220, 0x02001904, 0xffffffff,
    0x8000194c, 0x1a050220, 0x00001904, 0x00000000,
    0x80009369, 0x10018220, 0x02001a04, 0x00000002,
    0x80000940, 0x10018220, 0x02001000, 0x00000200,
    0x80000961, 0x1c050220, 0x00010380, 0x00000000,
    0xe2220961, 0x00114004, 0x80000965, 0x22058220,
    0x02002204, 0xffffffff, 0x00040061, 0x20050160,
    0x00461605, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xe2410961, 0x00117044,
    0x80000965, 0x41058220, 0x02004104, 0xffffffff,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x2b052660, 0x02006504, 0x00462005,
    0x22411a65, 0x41112203, 0x80001961, 0x1e050220,
    0x00004104, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00043265, 0x41050220,
    0x06001e04, 0x02462b05, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x0004194d, 0x43050220,
    0x00464105, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0450040, 0x43011c02,
    0x00041969, 0x2b058660, 0x02464505, 0x00000006,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa0411a40, 0x2b110242, 0xa0480040, 0x01010243,
    0xa0520040, 0x00403703, 0xa0540040, 0xff403703,
    0xa0560040, 0x00203703, 0xa0580040, 0xff203703,
    0xa05d0040, 0x00103703, 0xa05f0040, 0xff103703,
    0x27461f70, 0x0210412b, 0x00030061, 0x1f060220,
    0x00344105, 0x00000000, 0x00130061, 0x21060220,
    0x00344205, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00031f61, 0x13060220,
    0x00344805, 0x00000000, 0x00130061, 0x15060220,
    0x00344905, 0x00000000, 0x274a0070, 0x0210482b,
    0x00040070, 0x00018660, 0x56465205, 0x00000010,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa0431f40, 0x0212461a, 0xa04c1b40, 0x02124a1a,
    0x2f450062, 0x54005203, 0x00031b61, 0x1f260220,
    0x00344305, 0x00000000, 0x00131c61, 0x21260220,
    0x00344405, 0x00000000, 0x00031c61, 0x13260220,
    0x00344c05, 0x00000000, 0x00131d61, 0x15260220,
    0x00344d05, 0x00000000, 0x00040070, 0x00018660,
    0x56465605, 0x00000010, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x4d140000,
    0xfb041324, 0x00040000, 0x2f470062, 0x58005603,
    0x00040070, 0x00018660, 0x56465d05, 0x00000010,
    0x2f490062, 0x5f005d03, 0x00040070, 0x59058550,
    0x15565a06, 0x00010001, 0x00041961, 0x4b050560,
    0x20465905, 0x00000000, 0x00042469, 0x4f058660,
    0x02464d05, 0x00000006, 0x00041952, 0x51040660,
    0x0e2e0244, 0x41054f05, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0004006c, 0x1d058660,
    0x02465105, 0x00000006, 0x11040022, 0x0001c060,
    0x000028f0, 0x00001288, 0x00040070, 0x00010220,
    0x52463705, 0x00463b05, 0x01040062, 0x4d058220,
    0x02462505, 0xff800000, 0x01040062, 0x4f058220,
    0x02462705, 0xff800000, 0x01043462, 0x15058220,
    0x02462905, 0xff800000, 0x01040062, 0x51058220,
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
    0x00000000, 0x02a002a0, 0x00040069, 0x10018510,
    0x01564506, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x02a002a0, 0xe05d0961, 0x001b0004,
    0x80041e61, 0x10014110, 0x00000000, 0x0a200a20,
    0x00040069, 0x10018510, 0x01564506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0a200a20,
    0xe05b0961, 0x001b0004, 0x80041e61, 0x10014110,
    0x00000000, 0x0a600a60, 0x00040069, 0x10018510,
    0x01564506, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0a600a60, 0xe0590961, 0x001b0004,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80041e61, 0x10014110, 0x00000000, 0x0aa00aa0,
    0x00040069, 0x10018510, 0x01564506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0aa00aa0,
    0xe0130961, 0x001b0004, 0x00040070, 0x00018220,
    0x52463705, 0x00000006, 0x25571f62, 0x61004d00,
    0x254d0962, 0x5f004f00, 0x254f0962, 0x5d001500,
    0x27150962, 0x5b005100, 0x27510962, 0x59005300,
    0x80041561, 0x10014110, 0x00000000, 0x0ae00ae0,
    0x00040069, 0x10018510, 0x01564706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0ae00ae0,
    0xe0610961, 0x001b0004, 0x27530962, 0x13005500,
    0x80041561, 0x10014110, 0x00000000, 0x09a009a0,
    0x00040069, 0x10018510, 0x01564706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x09a009a0,
    0xe05f0961, 0x001b0004, 0x80041461, 0x10014110,
    0x00000000, 0x09e009e0, 0x00040069, 0x10018510,
    0x01564706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x09e009e0, 0xe05d0961, 0x001b0004,
    0x80041361, 0x10014110, 0x00000000, 0x02a002a0,
    0x00040069, 0x10018510, 0x01564706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x02a002a0,
    0xe05b0961, 0x001b0004, 0x80041261, 0x10014110,
    0x00000000, 0x0a200a20, 0x00040069, 0x10018510,
    0x01564706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0a200a20, 0xe0590961, 0x001b0004,
    0x25550962, 0x61005700, 0x80041261, 0x10014110,
    0x00000000, 0x0a600a60, 0x00040069, 0x10018510,
    0x01564706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0a600a60, 0xe0130961, 0x001b0004,
    0x25570962, 0x5f004d00, 0x254d0962, 0x5d004f00,
    0x274f0962, 0x5b001500, 0x80041461, 0x10014110,
    0x00000000, 0x0aa00aa0, 0x00040069, 0x10018510,
    0x01564906, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0aa00aa0, 0xe0610961, 0x001b0004,
    0x27150962, 0x59005100, 0x80041461, 0x10014110,
    0x00000000, 0x0ae00ae0, 0x00040069, 0x10018510,
    0x01564906, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0ae00ae0, 0xe05f0961, 0x001b0004,
    0x27591b62, 0x13005300, 0x80041461, 0x10014110,
    0x00000000, 0x09a009a0, 0x00040069, 0x10018510,
    0x01564906, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x09a009a0, 0xe05d0961, 0x001b0004,
    0x80041361, 0x10014110, 0x00000000, 0x09e009e0,
    0x00040069, 0x10018510, 0x01564906, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x09e009e0,
    0xe05b0961, 0x001b0004, 0x25530962, 0x61005500,
    0x80040b61, 0x10014110, 0x00000000, 0x02a002a0,
    0x00040069, 0x10018510, 0x01564906, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x02a002a0,
    0xe0510961, 0x001b0004, 0x25550962, 0x5f005700,
    0x80041361, 0x10014110, 0x00000000, 0x0b200b20,
    0x00040069, 0x10018510, 0x01564906, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0b200b20,
    0xe0130961, 0x001b0004, 0x25570962, 0x5d004d00,
    0x274d0962, 0x5b004f00, 0x274f0962, 0x51001500,
    0x27511962, 0x13005900, 0x01040022, 0x0001c060,
    0x00000d48, 0x00000d48, 0x25590962, 0x53aa4d00,
    0x255b1362, 0x55aa4f00, 0x255d1362, 0x57aa5100,
    0xa0611740, 0x01004103, 0x00040061, 0x66064540,
    0x00000000, 0xffffffff, 0x255f1162, 0x5d005b00,
    0x00040061, 0x63070200, 0x00463505, 0x00000000,
    0x00030b61, 0x13060220, 0x00346105, 0x00000000,
    0x00130c61, 0x15060220, 0x00346205, 0x00000000,
    0x25331162, 0x5f005900, 0x00041b61, 0x35050020,
    0x00666307, 0x00000000, 0xe0591141, 0x34003300,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x20170040, 0x59214d00, 0x20190040, 0x59214f00,
    0x201b0040, 0x59215100, 0x20330040, 0x59015300,
    0x204d0040, 0x59015500, 0x204f0040, 0x59015700,
    0x20511340, 0x17203300, 0x20331340, 0x19204d00,
    0x20531340, 0x1b204f00, 0x00041341, 0x4d058aa0,
    0x0a465105, 0x3f800001, 0x00041341, 0x4f058aa0,
    0x0a463305, 0x3f800001, 0x00041341, 0x51058aa0,
    0x0a465305, 0x3f800001, 0x00041165, 0x53058220,
    0x02464d05, 0x7f800000, 0x00041265, 0x33058220,
    0x02464d05, 0x007fffff, 0x00041765, 0x57058220,
    0x02464d05, 0x80000000, 0x00041265, 0x59058220,
    0x02464f05, 0x80000000, 0x00041765, 0x55058220,
    0x02464f05, 0x7f800000, 0x00041165, 0x5b058220,
    0x02465105, 0x80000000, 0x00040065, 0x5d058220,
    0x02465105, 0x7f800000, 0x00040065, 0x4d058220,
    0x02464f05, 0x007fffff, 0x00040065, 0x4f058220,
    0x02465105, 0x007fffff, 0x00041f40, 0x51058660,
    0x06463305, 0x3f000000, 0x00041f6c, 0x33058660,
    0x02465305, 0x00000017, 0x00041c40, 0x53058660,
    0x06464d05, 0x3f000000, 0x00041f6c, 0x4d058660,
    0x02465505, 0x00000017, 0x00041d40, 0x55058660,
    0x06464f05, 0x3f000000, 0xac001d70, 0x3f805101,
    0x00041f6c, 0x4f058660, 0x02465d05, 0x00000017,
    0x11040062, 0x5d058220, 0x02465105, 0x3f000000,
    0x00040965, 0x51058220, 0x02465d05, 0x7fffffff,
    0xac001e70, 0x3f805301, 0x205d1966, 0x57005103,
    0x11040062, 0x51058220, 0x02465305, 0x3f000000,
    0x00040965, 0x53058220, 0x02465105, 0x7fffffff,
    0xac001f70, 0x3f805501, 0x20511966, 0x59005303,
    0x11040062, 0x53058220, 0x02465505, 0x3f000000,
    0x00040965, 0x55058220, 0x02465305, 0x7fffffff,
    0x00041970, 0x53058aa0, 0x3a465d05, 0x3f7f0000,
    0x00041b70, 0x59058aa0, 0x3a465105, 0x3f7f0000,
    0x20571966, 0x5b005503, 0x00041252, 0x55044560,
    0x0e2eff82, 0x53053305, 0x00041152, 0x33044560,
    0x0e2eff82, 0x59054d05, 0x00041b70, 0x51058aa0,
    0x3a465705, 0x3f7f0000, 0x275a0070, 0x41006103,
    0x00041152, 0x53044560, 0x0e2eff82, 0x51054f05,
    0xa05c0a40, 0x43025a02, 0x00031961, 0x13260220,
    0x00345c05, 0x00000000, 0x00131a61, 0x15260220,
    0x00345d05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x00000000,
    0xf3081324, 0x00023514, 0x00044631, 0x00000000,
    0xfb0c1f24, 0x003c1744, 0xa0353540, 0x01204103,
    0x00041f61, 0x51070200, 0x00465505, 0x00000000,
    0x274d1a70, 0x41003503, 0x00033561, 0x13060220,
    0x00343505, 0x00000000, 0x00133561, 0x15060220,
    0x00343605, 0x00000000, 0x00041161, 0x57070200,
    0x00463305, 0x00000000, 0x00041f61, 0x59070200,
    0x00465305, 0x00000000, 0x00041e61, 0x4f070000,
    0x00665107, 0x00000000, 0xa05d0b40, 0x43024d02,
    0x00041a61, 0x4f0f0000, 0x00665707, 0x00000000,
    0x00031a61, 0x13260220, 0x00345d05, 0x00000000,
    0x00131b61, 0x15260220, 0x00345e05, 0x00000000,
    0x00041b61, 0x4f170000, 0x00665907, 0x00000000,
    0x00041961, 0x4f1f0000, 0x00566606, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x00000000, 0xfb081324, 0x00004f14,
    0x00040070, 0x00010220, 0x52463705, 0x00463b05,
    0x01040022, 0x0001c060, 0x000003e0, 0x00000360,
    0x25133762, 0x25432d00, 0x254f3762, 0x27432f00,
    0x25511f62, 0x29433100, 0x00040069, 0x4d05a660,
    0x02465505, 0x00000017, 0x00040069, 0x3505a660,
    0x02463305, 0x00000017, 0x00040069, 0x3305a660,
    0x02465305, 0x00000017, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x25151162, 0x51004f00,
    0x00041a40, 0x55058660, 0x06463505, 0x43800000,
    0x00041c40, 0x53058660, 0x06464d05, 0x43800000,
    0x00041b40, 0x57058660, 0x06463305, 0x43800000,
    0x25330962, 0x15001300, 0xe0131141, 0x34003300,
    0x20151140, 0x13202d00, 0x20330040, 0x13202f00,
    0x20351b40, 0x13203100, 0x204d1a40, 0x13002500,
    0x204f0040, 0x13002700, 0x20510040, 0x13002900,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x20131640, 0x17201500, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x20151640, 0x19203300,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x20331640, 0x1b203500, 0x20351640, 0x17204d00,
    0x204d1640, 0x19204f00, 0x204f1640, 0x1b205100,
    0x00041641, 0x51058aa0, 0x0a461305, 0x3f7ffffe,
    0x00041641, 0x13058aa0, 0x0a461505, 0x3f7ffffe,
    0x00041641, 0x15058aa0, 0x0a463305, 0x3f7ffffe,
    0x00041641, 0x33058aa0, 0x0a463505, 0x3f800001,
    0x00041641, 0x35058aa0, 0x0a464d05, 0x3f800001,
    0x00041641, 0x4d058aa0, 0x0a464f05, 0x3f800001,
    0x204f0a41, 0x53005100, 0x20510b41, 0x55001300,
    0x20130941, 0x57001500, 0x20151641, 0x53003300,
    0x20331641, 0x55003500, 0x20351641, 0x57004d00,
    0x604d1645, 0x00104f00, 0x604f1645, 0x00105100,
    0x60511645, 0x00101300, 0x60131645, 0x00121500,
    0x60151645, 0x00123300, 0x60331645, 0x00123500,
    0xe5351662, 0x00004d00, 0xe54d1662, 0x00004f00,
    0xe54f1662, 0x00005100, 0xe5511662, 0x00021300,
    0xe5131662, 0x00021500, 0xe5151662, 0x00023300,
    0x00041662, 0x33058aa0, 0x5a463505, 0x437f0000,
    0x00041662, 0x35058aa0, 0x5a464d05, 0x437f0000,
    0x00041662, 0x4d058aa0, 0x5a464f05, 0x437f0000,
    0x00041662, 0x4f058aa0, 0x5a465105, 0x437f0000,
    0x00041662, 0x51058aa0, 0x5a461305, 0x437f0000,
    0x00040d61, 0x59070a00, 0x00463305, 0x00000000,
    0x00041662, 0x13058aa0, 0x5a461505, 0x437f0000,
    0x00041561, 0x5b070a00, 0x00463505, 0x00000000,
    0x00041461, 0x5d070a00, 0x00464d05, 0x00000000,
    0x00041361, 0x5f070a00, 0x00464f05, 0x00000000,
    0x00041261, 0x61070a00, 0x00465105, 0x00000000,
    0x00041d61, 0x4d050010, 0x00665907, 0x00000000,
    0x00041161, 0x63070a00, 0x00461305, 0x00000000,
    0x00041e61, 0x36050010, 0x00665b07, 0x00000000,
    0x00041e61, 0x35050010, 0x00665d07, 0x00000000,
    0x00041e61, 0x50050010, 0x00665f07, 0x00000000,
    0x00041e61, 0x4f050010, 0x00666107, 0x00000000,
    0x00041d61, 0x4e050010, 0x00666307, 0x00000000,
    0x00040024, 0x0001c060, 0x00000090, 0x00000090,
    0x00041d61, 0x35054110, 0x00000000, 0x00800080,
    0x00041f61, 0x36054110, 0x00000000, 0x00800080,
    0x00041f61, 0x4d054110, 0x00000000, 0x00800080,
    0x00041d61, 0x4e054110, 0x00000000, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00041f61, 0x4f054110, 0x00000000, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00041f61, 0x50054110, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000510,
    0xa0330040, 0x37004102, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00041f61, 0x51060100,
    0x00583505, 0x00000000, 0x00041f61, 0x52060100,
    0x00583605, 0x00000000, 0x00041f61, 0x53060100,
    0x00584d05, 0x00000000, 0x00041f61, 0x75060100,
    0x00584e05, 0x00000000, 0x00041f61, 0x76060100,
    0x00584f05, 0x00000000, 0x00041f61, 0x77060100,
    0x00585005, 0x00000000, 0x275e1f70, 0x41003303,
    0xa0600040, 0x01c03303, 0x00041e61, 0x4d050020,
    0x00565306, 0x00000000, 0xa0351b40, 0x43025e02,
    0x27621b70, 0x33006003, 0x00033761, 0x13060220,
    0x00346005, 0x00000000, 0x80103701, 0x00000000,
    0x00000000, 0x00000000, 0x00131161, 0x15060220,
    0x00346105, 0x00000000, 0xa0661b40, 0x35026202,
    0x00031961, 0x13260220, 0x00346605, 0x00000000,
    0x00131a61, 0x15260220, 0x00346705, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x00000000, 0xf3081324, 0x00024d14,
    0xa0670040, 0x02803303, 0x00043861, 0x4e050020,
    0x00565206, 0x00000000, 0x27691a70, 0x33006703,
    0x00033861, 0x13060220, 0x00346705, 0x00000000,
    0x00133861, 0x15060220, 0x00346805, 0x00000000,
    0xa06b1b40, 0x35026902, 0x00031961, 0x13260220,
    0x00346b05, 0x00000000, 0x00131a61, 0x15260220,
    0x00346c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x00000000,
    0xf3081324, 0x00024e14, 0xa06c0040, 0x03403303,
    0x00043961, 0x4f050020, 0x00565106, 0x00000000,
    0x276e1a70, 0x33006c03, 0x00033961, 0x13060220,
    0x00346c05, 0x00000000, 0x00133961, 0x15060220,
    0x00346d05, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa0701b40, 0x35026e02,
    0x00031961, 0x13260220, 0x00347005, 0x00000000,
    0x00131a61, 0x15260220, 0x00347105, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044a31, 0x00000000, 0xf3081324, 0x00024f14,
    0xa0713340, 0x02203303, 0x00043a61, 0x50050020,
    0x00567706, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x27731a70, 0x33007103,
    0x00033a61, 0x13060220, 0x00347105, 0x00000000,
    0x00133a61, 0x15060220, 0x00347205, 0x00000000,
    0xa0771b40, 0x35027302, 0x00031961, 0x13260220,
    0x00347705, 0x00000000, 0x00131a61, 0x15260220,
    0x00347805, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x00000000,
    0xf3081324, 0x00025014, 0xa0780040, 0x02e03303,
    0x00043b61, 0x51050020, 0x00567606, 0x00000000,
    0x277a1a70, 0x33007803, 0x00033b61, 0x13060220,
    0x00347805, 0x00000000, 0x00133b61, 0x15060220,
    0x00347905, 0x00000000, 0xa07c1b40, 0x35027a02,
    0x00031961, 0x13260220, 0x00347c05, 0x00000000,
    0x00131a61, 0x15260220, 0x00347d05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x00000000, 0xf3081324, 0x00025114,
    0xa07d0040, 0x03a03303, 0x00043c61, 0x52050020,
    0x00567506, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x274d1a70, 0x33007d03,
    0x00033c61, 0x13060220, 0x00347d05, 0x00000000,
    0x00133c61, 0x15060220, 0x00347e05, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0xa04f1b40, 0x35024d02, 0x00031961, 0x13260220,
    0x00344f05, 0x00000000, 0x00131a61, 0x15260220,
    0x00345005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044d31, 0x00000000,
    0xf3081324, 0x00025214, 0x00040070, 0x00018660,
    0x26464b05, 0x00000000, 0xa0523d40, 0x01603303,
    0x11043c62, 0x50058220, 0x02006504, 0x00000002,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x00031a61, 0x13060220, 0x00345205, 0x00000000,
    0x80103d01, 0x00000000, 0x00000000, 0x00000000,
    0x00131b61, 0x15060220, 0x00345305, 0x00000000,
    0x00041b61, 0x56070200, 0x00465005, 0x00000000,
    0x27540070, 0x33005203, 0x00041a61, 0x58050020,
    0x00665607, 0x00000000, 0xa0561a40, 0x35025402,
    0x00031961, 0x13260220, 0x00345605, 0x00000000,
    0x00131a61, 0x15260220, 0x00345705, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x00000000, 0xf3081324, 0x00025814,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040024, 0x0001c060, 0x00001678, 0x00001678,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00040b61, 0x57050020, 0x0066231f, 0x00000000,
    0x00040070, 0x00010660, 0x56463905, 0x00463b05,
    0xef510962, 0x00005703, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00040961, 0x58050020,
    0x00665107, 0x00000000, 0x00040070, 0x00010220,
    0x52463705, 0x00463b05, 0x80040961, 0x10014110,
    0x00000000, 0x0b000b00, 0x00040069, 0x10018510,
    0x01564506, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0b000b00, 0xe05a0961, 0x001b0004,
    0x205c0966, 0x5a005103, 0x00040961, 0x5e050020,
    0x00665c07, 0x00000000, 0x80040961, 0x10014110,
    0x00000000, 0x0bc00bc0, 0x00040069, 0x10018510,
    0x01564706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0bc00bc0, 0xe0600961, 0x001b0004,
    0x20620966, 0x60005e03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x64050020,
    0x00666207, 0x00000000, 0x80041961, 0x10014110,
    0x00000000, 0x0c800c80, 0x00040069, 0x10018510,
    0x01564906, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0c800c80, 0xe0660961, 0x001b0004,
    0x20681966, 0x66006203, 0x00041961, 0x33070200,
    0x00006804, 0x00000000, 0x01040022, 0x0001c060,
    0x00000128, 0x000000c8, 0x00040061, 0x6a050020,
    0x00006804, 0x00000000, 0xac6c1970, 0x00006a03,
    0x00040070, 0x00018660, 0x16465105, 0x00000000,
    0x01041a62, 0x6e058220, 0x02466c05, 0xffffffff,
    0x00041970, 0x00018660, 0x26466e05, 0x00000000,
    0x01040062, 0x4b058220, 0x02462505, 0xff800000,
    0x01041362, 0x4d058220, 0x02462705, 0xff800000,
    0x01041262, 0x4f058220, 0x02462905, 0xff800000,
    0x01040062, 0x35058220, 0x02462d05, 0x7f800000,
    0x01041962, 0x2d058220, 0x02462f05, 0x7f800000,
    0x01041962, 0x2f058220, 0x02463105, 0x7f800000,
    0x00040024, 0x0001c060, 0x00000070, 0x00000070,
    0x00041a61, 0x2f054220, 0x00000000, 0x7f800000,
    0x00041c61, 0x2d054220, 0x00000000, 0x7f800000,
    0x00041e61, 0x35054220, 0x00000000, 0x7f800000,
    0x00040a61, 0x4f054220, 0x00000000, 0xff800000,
    0x00040b61, 0x4d054220, 0x00000000, 0xff800000,
    0x00040061, 0x4b054220, 0x00000000, 0xff800000,
    0x00040025, 0x00004600, 0x00000000, 0x000013d8,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80041d61, 0x10014110, 0x00000000, 0x06a006a0,
    0x00040069, 0x10018510, 0x01564506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x06a006a0,
    0xe06f0961, 0x001b0004, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80041d61, 0x10014110,
    0x00000000, 0x05a005a0, 0x00040069, 0x10018510,
    0x01564506, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x05a005a0, 0xe0710961, 0x001b0004,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80041d61, 0x10014110, 0x00000000, 0x05e005e0,
    0x00040069, 0x10018510, 0x01564506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x05e005e0,
    0xe0730961, 0x001b0004, 0x80041d61, 0x10014110,
    0x00000000, 0x09600960, 0x00040069, 0x10018510,
    0x01564506, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x09600960, 0xe0770961, 0x001b0004,
    0x80041f61, 0x10014110, 0x00000000, 0x09a009a0,
    0x00040069, 0x10018510, 0x01564506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x09a009a0,
    0xe0790961, 0x001b0004, 0x80041f61, 0x10014110,
    0x00000000, 0x09e009e0, 0x00040069, 0x10018510,
    0x01564506, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x09e009e0, 0xe0680961, 0x001b0004,
    0x00040070, 0x00018220, 0x52463705, 0x00000006,
    0x27620e62, 0x6f003500, 0x27641e62, 0x71002d00,
    0x27661d62, 0x73002f00, 0x25560c62, 0x77004b00,
    0x25580b62, 0x79004d00, 0x255a0a62, 0x68004f00,
    0x80041561, 0x10014110, 0x00000000, 0x0c800c80,
    0x00040069, 0x10018510, 0x01564706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0c800c80,
    0xe06a0961, 0x001b0004, 0x80041161, 0x10014110,
    0x00000000, 0x0c400c40, 0x00040069, 0x10018510,
    0x01564706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0c400c40, 0xe0680961, 0x001b0004,
    0x80041461, 0x10014110, 0x00000000, 0x0cc00cc0,
    0x00040069, 0x10018510, 0x01564706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0cc00cc0,
    0xe06c0961, 0x001b0004, 0x80041361, 0x10014110,
    0x00000000, 0x0ac00ac0, 0x00040069, 0x10018510,
    0x01564706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0ac00ac0, 0xe05c0961, 0x001b0004,
    0x80041261, 0x10014110, 0x00000000, 0x0b000b00,
    0x00040069, 0x10018510, 0x01564706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0b000b00,
    0xe05e0961, 0x001b0004, 0x80041161, 0x10014110,
    0x00000000, 0x0b400b40, 0x00040069, 0x10018510,
    0x01564706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0b400b40, 0xe0600961, 0x001b0004,
    0x27701e62, 0x6a006400, 0x276e1d62, 0x68006200,
    0x27721c62, 0x6c006600, 0x257a1b62, 0x5c005600,
    0x257c1a62, 0x5e005800, 0x257e1962, 0x60005a00,
    0x80041561, 0x10014110, 0x00000000, 0x0dc00dc0,
    0x00040069, 0x10018510, 0x01564906, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0dc00dc0,
    0xe0760961, 0x001b0004, 0x80041161, 0x10014110,
    0x00000000, 0x0e000e00, 0x00040069, 0x10018510,
    0x01564906, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0e000e00, 0xe0600961, 0x001b0004,
    0x80040961, 0x10014110, 0x00000000, 0x0e400e40,
    0x00040069, 0x10018510, 0x01564906, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0e400e40,
    0xe0590961, 0x001b0004, 0x80040a61, 0x10014110,
    0x00000000, 0x0f400f40, 0x00040069, 0x10018510,
    0x01564906, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0f400f40, 0xe0570961, 0x001b0004,
    0x80040a61, 0x10014110, 0x00000000, 0x0f800f80,
    0x00040069, 0x10018510, 0x01564906, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0f800f80,
    0xe0550961, 0x001b0004, 0x80041161, 0x10014110,
    0x00000000, 0x0fc00fc0, 0x00040069, 0x10018510,
    0x01564906, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0fc00fc0, 0xe0530961, 0x001b0004,
    0x27741e62, 0x76006e00, 0x27781c62, 0x59007200,
    0x27761d62, 0x60007000, 0x25311b62, 0x57007a00,
    0x25451a62, 0x55007c00, 0x25471962, 0x53007e00,
    0x01040022, 0x0001c060, 0x00000ef8, 0x00000ef8,
    0x257a0b62, 0x31aa7400, 0x257c0b62, 0x45aa7600,
    0x257e0a62, 0x47aa7800, 0xa05f1740, 0x01004103,
    0x25231162, 0x7e007c00, 0x00041761, 0x57064540,
    0x00000000, 0x00010001, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00031a61, 0x13060220,
    0x00345f05, 0x00000000, 0x80103401, 0x00000000,
    0x00000000, 0x00000000, 0x00131b61, 0x15060220,
    0x00346005, 0x00000000, 0x25251162, 0x23007a00,
    0x00040b61, 0x61050020, 0x00565706, 0x00000000,
    0xe0691141, 0x34002500, 0x20231140, 0x69217400,
    0x20250040, 0x69217600, 0x20270040, 0x69217800,
    0x20491f40, 0x69013100, 0x20530040, 0x69014500,
    0x20550040, 0x69014700, 0x20570940, 0x23204900,
    0x20591340, 0x25205300, 0x205b1340, 0x27205500,
    0x00041341, 0x6a058aa0, 0x0a465705, 0x3f800001,
    0x00041341, 0x49058aa0, 0x0a465905, 0x3f800001,
    0x00041341, 0x31058aa0, 0x0a465b05, 0x3f800001,
    0x00041265, 0x59058220, 0x02466a05, 0x7f800000,
    0x00041765, 0x45058220, 0x02466a05, 0x007fffff,
    0x00041565, 0x53058220, 0x02466a05, 0x80000000,
    0x00041165, 0x5b058220, 0x02464905, 0x7f800000,
    0x00041765, 0x47058220, 0x02464905, 0x007fffff,
    0x00041465, 0x55058220, 0x02464905, 0x80000000,
    0x00041165, 0x57058220, 0x02463105, 0x80000000,
    0x00040065, 0x5d058220, 0x02463105, 0x7f800000,
    0x00040065, 0x49058220, 0x02463105, 0x007fffff,
    0x00041f40, 0x31058660, 0x06464505, 0x3f000000,
    0x00041f6c, 0x45058660, 0x02465905, 0x00000017,
    0x00041f40, 0x59058660, 0x06464705, 0x3f000000,
    0x00041f6c, 0x47058660, 0x02465b05, 0x00000017,
    0x00041d40, 0x5b058660, 0x06464905, 0x3f000000,
    0xac001d70, 0x3f803101, 0x00041f6c, 0x49058660,
    0x02465d05, 0x00000017, 0x11040062, 0x5d058220,
    0x02463105, 0x3f000000, 0x00040965, 0x31058220,
    0x02465d05, 0x7fffffff, 0xac001e70, 0x3f805901,
    0x205d1966, 0x53003103, 0x11040062, 0x31058220,
    0x02465905, 0x3f000000, 0x00041965, 0x53058220,
    0x02463105, 0x7fffffff, 0xac001f70, 0x3f805b01,
    0x20311966, 0x55005303, 0x11040062, 0x53058220,
    0x02465b05, 0x3f000000, 0x00041965, 0x55058220,
    0x02465305, 0x7fffffff, 0x00041970, 0x53058aa0,
    0x3a465d05, 0x3f7f0000, 0x20590966, 0x57005503,
    0x00041970, 0x55058aa0, 0x3a463105, 0x3f7f0000,
    0x00041152, 0x31044560, 0x0e2eff82, 0x53054505,
    0x00040a70, 0x5c058aa0, 0x3a465905, 0x3f7f0000,
    0x27670070, 0x41005f03, 0x00041252, 0x63044560,
    0x0e2eff82, 0x55054705, 0x00041152, 0x65044560,
    0x0e2eff82, 0x5c054905, 0xa0691b40, 0x43026702,
    0x00031961, 0x13260220, 0x00346905, 0x00000000,
    0x00131a61, 0x15260220, 0x00346a05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x00000000, 0xf3081324, 0x00026114,
    0x00043661, 0x29050220, 0x00461d05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xfb0c1f24, 0x003c2344,
    0xa06a0040, 0x01204103, 0x00040c61, 0x5b070200,
    0x00463105, 0x00000000, 0x276c1a70, 0x41006a03,
    0x00033e61, 0x13060220, 0x00346a05, 0x00000000,
    0x00133e61, 0x15060220, 0x00346b05, 0x00000000,
    0x00041361, 0x5d070200, 0x00466305, 0x00000000,
    0x00040061, 0x5f070200, 0x00466505, 0x00000000,
    0x00040961, 0x59070000, 0x00665b07, 0x00000000,
    0xa06e1e40, 0x43026c02, 0x00041a61, 0x590f0000,
    0x00665d07, 0x00000000, 0x00031a61, 0x13260220,
    0x00346e05, 0x00000000, 0x00131b61, 0x15260220,
    0x00346f05, 0x00000000, 0x00041b61, 0x59170000,
    0x00665f07, 0x00000000, 0x00041961, 0x591f0000,
    0x00663307, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xfb081324, 0x00005914, 0x00040070, 0x00010220,
    0x52463705, 0x00463b05, 0x01040022, 0x0001c060,
    0x000004e0, 0x00000480, 0x25710062, 0x4b433500,
    0x25730062, 0x4d432d00, 0x25750062, 0x4f432f00,
    0x00040069, 0x5305a660, 0x02463105, 0x00000017,
    0x00040069, 0x5505a660, 0x02466305, 0x00000017,
    0x00040069, 0x5705a660, 0x02466505, 0x00000017,
    0x00040070, 0x00018660, 0x16465105, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x25170062, 0x75007300, 0x00041c40, 0x6b058660,
    0x06465305, 0x43800000, 0x00041c40, 0x6d058660,
    0x06465505, 0x43800000, 0x00041c40, 0x6f058660,
    0x06465705, 0x43800000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x25190062, 0x17007100,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xe01b1141, 0x34001900, 0x201d1140, 0x1b203500,
    0x201f3640, 0x1b202d00, 0x20213640, 0x1b202f00,
    0x20311f40, 0x1b004f00, 0x202d1340, 0x1b004b00,
    0x202f1340, 0x1b004d00, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x20330e40, 0x23201d00,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x20351640, 0x25201f00, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x20451640, 0x27202100,
    0x20751640, 0x27203100, 0x20711640, 0x23202d00,
    0x20731640, 0x25202f00, 0x00041641, 0x47058aa0,
    0x0a463305, 0x3f7ffffe, 0x00041641, 0x49058aa0,
    0x0a463505, 0x3f7ffffe, 0x00041641, 0x4b058aa0,
    0x0a464505, 0x3f7ffffe, 0x00041641, 0x1b058aa0,
    0x0a467505, 0x3f800001, 0x00041641, 0x17058aa0,
    0x0a467105, 0x3f800001, 0x00041641, 0x19058aa0,
    0x0a467305, 0x3f800001, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x20580941, 0x6b004700,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x205a0a41, 0x6d004900, 0x205c0941, 0x6f004b00,
    0x20211641, 0x6f001b00, 0x201d1641, 0x6b001700,
    0x201f1641, 0x6d001900, 0x605e1645, 0x00105800,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x60601645, 0x00105a00, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x60620e45, 0x00105c00,
    0x60271645, 0x00122100, 0x60231645, 0x00121d00,
    0x60251645, 0x00121f00, 0xe5640d62, 0x00005e00,
    0xe5660d62, 0x00006000, 0xe5681662, 0x00006200,
    0xe52f1662, 0x00022700, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xe5291662, 0x00022300,
    0xe52d1662, 0x00022500, 0x00041662, 0x6a058aa0,
    0x5a466405, 0x437f0000, 0x00041662, 0x6c058aa0,
    0x5a466605, 0x437f0000, 0x00041662, 0x6e058aa0,
    0x5a466805, 0x437f0000, 0x00041662, 0x35058aa0,
    0x5a462f05, 0x437f0000, 0x00041662, 0x31058aa0,
    0x5a462905, 0x437f0000, 0x00041662, 0x33058aa0,
    0x5a462d05, 0x437f0000, 0x00041661, 0x78070a00,
    0x00466a05, 0x00000000, 0x00041561, 0x7a070a00,
    0x00466c05, 0x00000000, 0x00041461, 0x7c070a00,
    0x00466e05, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00041361, 0x15070a00,
    0x00463505, 0x00000000, 0x00041261, 0x7e070a00,
    0x00463105, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00041161, 0x13070a00,
    0x00463305, 0x00000000, 0x00041e61, 0x47050010,
    0x00667807, 0x00000000, 0x00041e61, 0x48050010,
    0x00667a07, 0x00000000, 0x00041e61, 0x49050010,
    0x00667c07, 0x00000000, 0x00041e61, 0x46050010,
    0x00661507, 0x00000000, 0x00041e61, 0x36050010,
    0x00667e07, 0x00000000, 0x00041e61, 0x45050010,
    0x00661307, 0x00000000, 0x11041e62, 0x53058110,
    0x01584705, 0x00000000, 0x11041e62, 0x52058110,
    0x01584805, 0x00000000, 0x11041e62, 0x51058110,
    0x01584905, 0x00000000, 0x11041e62, 0x54058110,
    0x01584605, 0x00000000, 0x11041e62, 0x56058110,
    0x01583605, 0x00000000, 0x11041e62, 0x55058110,
    0x01584505, 0x00000000, 0x00040024, 0x0001c060,
    0x00000070, 0x00000070, 0x00041d61, 0x51054110,
    0x00000000, 0x00800080, 0x00041f61, 0x52054110,
    0x00000000, 0x00800080, 0x00041f61, 0x53054110,
    0x00000000, 0x00800080, 0x00041f61, 0x54054110,
    0x00000000, 0x00000000, 0x00041e61, 0x55054110,
    0x00000000, 0x00000000, 0x00041f61, 0x56054110,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x000005a0, 0xa04a0040, 0x37004102,
    0x00041f61, 0x6a060100, 0x00585105, 0x00000000,
    0x00041f61, 0x6b060100, 0x00585205, 0x00000000,
    0x00041f61, 0x6c060100, 0x00585305, 0x00000000,
    0x00041f61, 0x79060100, 0x00585405, 0x00000000,
    0x00041f61, 0x7a060100, 0x00585505, 0x00000000,
    0x00041f61, 0x7b060100, 0x00585605, 0x00000000,
    0xa0501f40, 0x01c04a03, 0x274c0070, 0x41004a03,
    0x00041e61, 0x5e050020, 0x00566c06, 0x00000000,
    0x27521b70, 0x4a005003, 0x00033461, 0x5a060220,
    0x00345005, 0x00000000, 0x00130061, 0x5c060220,
    0x00345105, 0x00000000, 0xa04e1d40, 0x43024c02,
    0xa0541940, 0x4e025202, 0x00031961, 0x5a260220,
    0x00345405, 0x00000000, 0x00131a61, 0x5c260220,
    0x00345505, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044f31, 0x00000000,
    0xf3085a24, 0x00025e14, 0xa0550040, 0x02804a03,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x00041661, 0x63050020, 0x00566b06, 0x00000000,
    0x27571a70, 0x4a005503, 0x00033f61, 0x5f060220,
    0x00345505, 0x00000000, 0x80103e01, 0x00000000,
    0x00000000, 0x00000000, 0x00131761, 0x61060220,
    0x00345605, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0xa0591b40, 0x4e025702,
    0x00031961, 0x5f260220, 0x00345905, 0x00000000,
    0x00131a61, 0x61260220, 0x00345a05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xf3085f24, 0x00026314,
    0xa05a3f40, 0x03404a03, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00041461, 0x68050020,
    0x00566a06, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x275c1a70, 0x4a005a03,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00031661, 0x64060220, 0x00345a05, 0x00000000,
    0x00131561, 0x66060220, 0x00345b05, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa05e1b40, 0x4e025c02, 0x00031961, 0x64260220,
    0x00345e05, 0x00000000, 0x00131a61, 0x66260220,
    0x00345f05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xf3086424, 0x00026814, 0xa05f3040, 0x02204a03,
    0x00040061, 0x6d050020, 0x00567b06, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x27611a70, 0x4a005f03, 0x00033161, 0x69060220,
    0x00345f05, 0x00000000, 0x00130061, 0x6b060220,
    0x00346005, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0631b40, 0x4e026102,
    0x00031961, 0x69260220, 0x00346305, 0x00000000,
    0x00131a61, 0x6b260220, 0x00346405, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x00000000, 0xf3086924, 0x00026d14,
    0xa0643140, 0x02e04a03, 0x00040061, 0x72050020,
    0x00567a06, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x27661a70, 0x4a006403,
    0x00033261, 0x6e060220, 0x00346405, 0x00000000,
    0x00130061, 0x70060220, 0x00346505, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa0681b40, 0x4e026602, 0x00031961, 0x6e260220,
    0x00346805, 0x00000000, 0x00131a61, 0x70260220,
    0x00346905, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xf3086e24, 0x00027214, 0xa0693240, 0x03a04a03,
    0x00040061, 0x77050020, 0x00567906, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x276b1a70, 0x4a006903, 0x00033361, 0x73060220,
    0x00346905, 0x00000000, 0x00130061, 0x75060220,
    0x00346a05, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa06d1b40, 0x4e026b02,
    0x00031961, 0x73260220, 0x00346d05, 0x00000000,
    0x00131a61, 0x75260220, 0x00346e05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x00000000, 0xf3087324, 0x00027714,
    0xa06e3340, 0x01604a03, 0x00040061, 0x7e064540,
    0x00000000, 0x00020002, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x27701a70, 0x4a006e03,
    0x00033361, 0x78060220, 0x00346e05, 0x00000000,
    0x00130061, 0x7a060220, 0x00346f05, 0x00000000,
    0x00041c61, 0x7c050020, 0x00567e06, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xa0721c40, 0x4e027002, 0x00031961, 0x78260220,
    0x00347205, 0x00000000, 0x00131a61, 0x7a260220,
    0x00347305, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xf3087824, 0x00027c14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040070, 0x00010660,
    0x56463905, 0x00463b05, 0x01040022, 0x0001c060,
    0x00000688, 0x00000688, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00040d6c, 0x73058660,
    0x02463b05, 0x0000001f, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00041469, 0x75058660,
    0x02463905, 0x00000005, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xe0771468, 0x01b03903,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa0790a40, 0x7501025a, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x277b0970, 0x0210790b,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00031161, 0x13060220, 0x00347905, 0x00000000,
    0x80103401, 0x00000000, 0x00000000, 0x00000000,
    0x00131161, 0x15060220, 0x00347a05, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00040952, 0x7d040660, 0x0e2e02a4, 0x7b057705,
    0x00031961, 0x13260220, 0x00347d05, 0x00000000,
    0x00131a61, 0x15260220, 0x00347e05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x00000000, 0xfb0c1324, 0x003c0344,
    0xa0033540, 0x01007903, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x27051970, 0x79000303,
    0x00033561, 0x14060220, 0x00340305, 0x00000000,
    0x80103601, 0x00000000, 0x00000000, 0x00000000,
    0x00133561, 0x16060220, 0x00340405, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xa0071b40, 0x7d020502, 0x00031961, 0x14260220,
    0x00340705, 0x00000000, 0x00131a61, 0x16260220,
    0x00340805, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xfb0c1424, 0x003c0b44, 0x00043569, 0x08058660,
    0x02463905, 0x00000002, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xe00a3568, 0x01e03903,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa00c1a40, 0x0801026a, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x270e1970, 0x02100c4b,
    0x00033661, 0x15060220, 0x00340c05, 0x00000000,
    0x80103601, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x17060220, 0x00340d05, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041b52, 0x10040660, 0x0e2e02e4, 0x0e050a05,
    0x00031961, 0x15260220, 0x00341005, 0x00000000,
    0x00131a61, 0x17260220, 0x00341105, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x00000000, 0xfb0c1524, 0x00043914,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xe0271768, 0x00612b03, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xa0113740, 0x39003b02,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x27131970, 0x3b001103, 0x00043769, 0x17058660,
    0x02461105, 0x00000002, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0xe01a0068, 0x01e01103,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xa0151b40, 0x73021302, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xa01d1b40, 0x1701026a,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x18058660, 0x02461505, 0x00000002,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x271f1a70, 0x02101d4b, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00031761, 0x23060220,
    0x00341d05, 0x00000000, 0x80103601, 0x00000000,
    0x00000000, 0x00000000, 0x00131761, 0x25060220,
    0x00341e05, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x201c0c66, 0x1a001803,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041952, 0x21040660, 0x0e2e02e4, 0x1f051c05,
    0x00031961, 0x23260220, 0x00342105, 0x00000000,
    0x00131a61, 0x25260220, 0x00342205, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xfb0c2324, 0x00042714,
    0x00040065, 0x00010220, 0x22463d05, 0x00463f05,
    0x01040022, 0x0001c060, 0x00000190, 0x00000190,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041769, 0x22058660, 0x02463b05, 0x00000003,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa0241740, 0x02810243, 0x00041a66, 0x37058220,
    0x02462205, 0xffffffc0, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x27260a70, 0x0210242b,
    0x00030061, 0x2b060220, 0x00342405, 0x00000000,
    0x00131161, 0x2d060220, 0x00342505, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa0280a40, 0x0212261a, 0x00031961, 0x2b260220,
    0x00342805, 0x00000000, 0x00131a61, 0x2d260220,
    0x00342905, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x29140000,
    0xfb042b24, 0x00040000, 0x00042869, 0x2b058660,
    0x02462905, 0x00000006, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xa02d1940, 0x2b010242,
    0x272f0970, 0x02102d2b, 0x00030061, 0x33060220,
    0x00342d05, 0x00000000, 0x00130061, 0x35060220,
    0x00342e05, 0x00000000, 0xa0310b40, 0x02122f1a,
    0x00031961, 0x33260220, 0x00343105, 0x00000000,
    0x00131a61, 0x35260220, 0x00343205, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x00000000, 0xfb0c3324, 0x00043714,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80030961, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_DFS_DFS_trivial = {
   .prog_data = {
      .base.nr_params = 17,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 3,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 14592,
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
const char *gfx125_bvh_build_DFS_DFS_trivial_sha1 = "e118815c3713a95251274b08ef55042ab3132c34";

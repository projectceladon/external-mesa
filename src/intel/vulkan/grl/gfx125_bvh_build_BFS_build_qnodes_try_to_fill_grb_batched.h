#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g104<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g63<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g104UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g21<1>D         g2.2<0,1,0>D    36D             { align1 1H compacted };
cmp.l.f0.0(16)  g23<1>UD        g21<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g27<2>UD        g21<4,4,1>UD                    { align1 1Q };
mov(8)          g29<2>UD        g22<4,4,1>UD                    { align1 2Q };
add(16)         g25<1>D         -g23<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g27.1<2>UD      g25<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g29.1<2>UD      g26<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g31UD           g27UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
add(16)         g15<1>D         g31<1,1,0>D     g63<1,1,0>D     { align1 1H @7 $1.dst compacted };
mul(8)          acc0<1>UD       g15<8,8,1>UD    0x0058UW        { align1 1Q I@1 };
mul(16)         g70<1>D         g15<1,1,0>D     88W             { align1 1H I@2 compacted };
mach(8)         g32<1>UD        g15<1,1,0>UD    0x00000058UD    { align1 1Q compacted AccWrEnable };
add(16)         g36<1>D         g2<0,1,0>D      g70<1,1,0>D     { align1 1H I@2 compacted };
mul(8)          acc0<1>UD       g16<8,8,1>UD    0x0058UW        { align1 2Q };
cmp.l.f0.0(16)  g75<1>UD        g36<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@2 compacted };
add(16)         g41<1>D         g36<1,1,0>D     40D             { align1 1H compacted };
add(16)         g52<1>D         g36<1,1,0>D     64D             { align1 1H compacted };
add(16)         g63<1>D         g36<1,1,0>D     72D             { align1 1H compacted };
mach(8)         g33<1>UD        g16<8,8,1>UD    0x00000058UD    { align1 2Q AccWrEnable };
cmp.l.f0.0(16)  g43<1>UD        g41<1,1,0>UD    g36<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g47<2>UD        g41<4,4,1>UD                    { align1 1Q };
mov(8)          g49<2>UD        g42<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g54<1>UD        g52<1,1,0>UD    g36<1,1,0>UD    { align1 1H I@6 compacted };
mov(8)          g58<2>UD        g52<4,4,1>UD                    { align1 1Q };
mov(8)          g60<2>UD        g53<4,4,1>UD                    { align1 2Q };
mov(8)          g3<2>UD         g63<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g5<2>UD         g64<4,4,1>UD                    { align1 2Q I@7 };
add3(16)        g40<1>D         g2.1<0,1,0>D    g32<8,8,1>D     -g75<1,1,1>D { align1 1H I@7 };
cmp.l.f0.0(16)  g65<1>UD        g63<1,1,0>UD    g36<1,1,0>UD    { align1 1H compacted };
add(16)         g45<1>D         -g43<1,1,0>D    g40<1,1,0>D     { align1 1H I@2 compacted };
add(16)         g56<1>D         -g54<1,1,0>D    g40<1,1,0>D     { align1 1H I@7 compacted };
add(16)         g17<1>D         -g65<1,1,0>D    g40<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g47.1<2>UD      g45<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g49.1<2>UD      g46<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g58.1<2>UD      g56<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g60.1<2>UD      g57<4,4,1>UD                    { align1 2Q I@5 };
mov(8)          g3.1<2>UD       g17<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g5.1<2>UD       g18<4,4,1>UD                    { align1 2Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g51UD           g47UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g62UD           g58UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g18UD           g3UD            nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
add.nz.f0.0(16) g34<1>D         g62<1,1,0>D     -g18<1,1,0>D    { align1 1H $3.dst compacted };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
mov(8)          g74<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g74.8<1>UW      g74<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g72<1>UD        g74<8,8,1>UW                    { align1 1H };
and.z.f0.0(16)  g20<1>UD        g72<1,1,0>UD    0x0000000fUD    { align1 1H I@1 compacted };
mov(16)         g38<1>UD        g20<8,8,1>UD                    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL1              { align1 1H };
add(16)         g77<1>D         g2.2<0,1,0>D    4D              { align1 1H compacted };
cmp.l.f0.0(16)  g79<1>UD        g77<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g83<2>UD        g77<4,4,1>UD                    { align1 1Q };
mov(8)          g85<2>UD        g78<4,4,1>UD                    { align1 2Q };
add(16)         g81<1>D         -g79<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g83.1<2>UD      g81<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g85.1<2>UD      g82<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g89<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g89<1>UD        g89<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(1)          g90<1>UD        sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g90<1>UD        g90<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
and(1)          g90<1>UD        g89<0,1,0>UD    g90<0,1,0>UD    { align1 WE_all 1N I@1 compacted };
mov(1)          g87<1>UD        g90<0,1,0>UD                    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cbit(16)        g89<1>UD        g87<0,1,0>UD                    { align1 1H };
mul(16)         g64<1>D         g89<8,8,1>D     g34<16,8,2>UW   { align1 1H I@1 };
mul(16)         g77<1>D         g89<8,8,1>D     g34.1<16,8,2>UW { align1 1H };
add(16)         g64.1<2>UW      g64.1<16,8,2>UW g77<16,8,2>UW   { align1 1H I@1 };
mov(1)          g93<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g93<1>UD        g93<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g91<1>UD        g93<0,1,0>UD                    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  null<1>D        g72<8,8,1>D     g91<0,1,0>D     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL2              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g67UD           g83UD           g64UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };

LABEL2:
endif(16)       JIP:  LABEL1                                    { align1 1H };
mov(1)          g94<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g94<1>UD        g94<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g92<1>UD        g94<0,1,0>UD                    { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g92<0,1,0>UD    0x00000002UD    { align1 WE_all 1N @1 $4.dst };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g94<1>UD        g[a0 96]<0,1,0>UD               { align1 WE_all 1N A@1 };
mov(1)          g102<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g102<1>UD       g102<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
mov(16)         g98<1>UD        g74<8,8,1>UW                    { align1 1H };
mov(1)          g66<1>D         1D                              { align1 WE_all 1N };
mov(1)          g103<1>UD       sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g103<1>UD       g103<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g100<1>D        -g66<0,1,0>D    g98<8,8,1>UD    { align1 1H };
and(1)          g103<1>UD       g102<0,1,0>UD   g103<0,1,0>UD   { align1 WE_all 1N I@2 compacted };
mov(1)          g96<1>UD        g103<0,1,0>UD                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(16)         g102<1>UD       g96<0,1,0>UD    ~g100<8,8,1>D   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cbit(16)        g104<1>UD       g102<8,8,1>UD                   { align1 1H I@1 };
mul(16)         g106<1>D        g104<8,8,1>D    g34<16,8,2>UW   { align1 1H I@1 };
mul(16)         g78<1>D         g104<8,8,1>D    g34.1<16,8,2>UW { align1 1H };
add(16)         g106.1<2>UW     g106.1<16,8,2>UW g78<16,8,2>UW  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g68<1>D         g94<0,1,0>D     g106<1,1,0>D    { align1 1H compacted };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
add(16)         g107<1>D        g2.2<0,1,0>D    28D             { align1 1H compacted };
add(16)         g119<1>D        g68<0,1,0>D     g34<1,1,0>D     { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g109<1>UD       g107<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g113<2>UD       g107<4,4,1>UD                   { align1 1Q };
mov(8)          g115<2>UD       g108<4,4,1>UD                   { align1 2Q };
add(16)         g111<1>D        -g109<1,1,0>D   g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g113.1<2>UD     g111<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g115.1<2>UD     g112<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g117UD          g113UD          nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
add(16)         g121<1>D        g117<1,1,0>D    -g68<0,1,0>D    { align1 1H $5.dst compacted };
cmp.ge.f0.0(16) null<1>UD       g119<8,8,1>UD   g117<8,8,1>UD   { align1 1H I@7 };
(+f0.0) sel(16) g123<1>UD       g121<1,1,0>UD   g34<1,1,0>UD    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  null<1>UD       g68<0,1,0>UD    g117<8,8,1>UD   { align1 1H };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
add(16)         g125<1>D        g2.2<0,1,0>D    40D             { align1 1H compacted };
add(16)         g26<1>D         g2.2<0,1,0>D    44D             { align1 1H $1.src compacted };
cmp.l.f0.0(16)  g7<1>UD         g125<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g22<2>UD        g125<4,4,1>UD                   { align1 1Q };
mov(8)          g24<2>UD        g126<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g28<1>UD        g26<1,1,0>UD    0x0000002cUD    { align1 1H I@4 compacted };
add(16)         g9<1>D          -g7<1,1,0>D     g2.3<0,1,0>D    { align1 1H I@4 compacted };
mov(8)          g22.1<2>UD      g9<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g24.1<2>UD      g10<4,4,1>UD                    { align1 2Q I@2 };

LABEL5:
cmp.ge.f0.0(16) null<1>UD       g20<8,8,1>UD    g123<8,8,1>UD   { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
add(16)         g30<1>D         g18<1,1,0>D     g20<1,1,0>D     { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(16)        g46UD           g22UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
shl(16)         g32<1>D         g30<8,8,1>D     0x00000003UD    { align1 1H I@1 };
shr(16)         g70<1>UD        g30<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
add(16)         g36<1>D         g51<1,1,0>D     g32<1,1,0>D     { align1 1H @2 $2.dst compacted };
cmp.l.f0.0(16)  g75<1>UD        g36<1,1,0>UD    g51<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g42<2>UD        g36<4,4,1>UD                    { align1 1Q $6.src };
mov(8)          g44<2>UD        g37<4,4,1>UD                    { align1 2Q $6.src };
add3(16)        g40<1>D         g53<8,8,1>D     g70<8,8,1>D     -g75<1,1,1>D { align1 1H @3 $2.dst };
mov(8)          g42.1<2>UD      g40<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g44.1<2>UD      g41<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g11UD           g42UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
cmp.nz.f0.0(16) null<1>D        g46<8,8,1>D     0D              { align1 1H $7.dst };
(-f0.0) sel(16) g47<1>UD        g117<8,8,1>UD   0x00000000UD    { align1 1H $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add3(16)        g49<1>D         g47<8,8,1>D     g68.0<0,1,0>D   g20<1,1,1>D { align1 1H I@1 };
shl(16)         g55<1>D         g49<8,8,1>D     0x00000004UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g57<1>D         g26<1,1,0>D     g55<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g59<1>UD        g57<1,1,0>UD    g26<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g7<2>UD         g57<4,4,1>UD                    { align1 1Q $8.src };
mov(8)          g9<2>UD         g58<4,4,1>UD                    { align1 2Q $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add3(16)        g61<1>D         -g28<8,8,1>D    g2.3<0,1,0>D    -g59<1,1,1>D { align1 1H I@3 };
mov(8)          g7.1<2>UD       g61<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g9.1<2>UD       g62<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g7UD            g11UD           0x08002584                0x00000180
                            ugm MsgDesc: ( store, a64, d32, V3, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 6 flat )  base_offset 0  { align1 1H $8 };
add(16)         g20<1>D         g20<1,1,0>D     16D             { align1 1H compacted };

LABEL4:
while(16)       JIP:  LABEL5                                    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g38<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL6              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
send(16)        g62UD           g3UD            nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g65<1>D         g62<1,1,0>D     g123<1,1,0>D    { align1 1H @4 $9.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g3UD            g65UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };

LABEL6:
endif(16)       JIP:  LABEL3                                    { align1 1H };

LABEL3:
endif(16)       JIP:  LABEL0                                    { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL7                                    { align1 1H };

LABEL7:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_code[] = {
    0x80000065, 0x68058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x3f050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00680c, 0x00340000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa0150040, 0x02410243, 0x27171970, 0x0210152b,
    0x00030061, 0x1b060220, 0x00341505, 0x00000000,
    0x00130061, 0x1d060220, 0x00341605, 0x00000000,
    0xa0191b40, 0x0212171a, 0x00031961, 0x1b260220,
    0x00341905, 0x00000000, 0x00131a61, 0x1d260220,
    0x00341a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x1f140000,
    0xfb001b24, 0x00000000, 0xa00ff140, 0x3f001f02,
    0x00031941, 0x20018220, 0x01460f05, 0x00580058,
    0x60461a41, 0x05800f02, 0xfe200049, 0x05800f03,
    0xa0241a40, 0x46010202, 0x00130041, 0x20018220,
    0x01461005, 0x00580058, 0x274b1a70, 0x02102403,
    0xa0290040, 0x02802403, 0xa0340040, 0x04002403,
    0xa03f0040, 0x04802403, 0x00130049, 0x21058222,
    0x02461005, 0x00000058, 0x272b1c70, 0x24002903,
    0x00030061, 0x2f060220, 0x00342905, 0x00000000,
    0x00130061, 0x31060220, 0x00342a05, 0x00000000,
    0x27361e70, 0x24003403, 0x00030061, 0x3a060220,
    0x00343405, 0x00000000, 0x00130061, 0x3c060220,
    0x00343505, 0x00000000, 0x00031f61, 0x03060220,
    0x00343f05, 0x00000000, 0x00131f61, 0x05060220,
    0x00344005, 0x00000000, 0x00041f52, 0x28040660,
    0x0e2e0224, 0x4b052005, 0x27410070, 0x24003f03,
    0xa02d1a40, 0x28022b02, 0xa0381f40, 0x28023602,
    0xa0111b40, 0x28024102, 0x00031b61, 0x2f260220,
    0x00342d05, 0x00000000, 0x00131c61, 0x31260220,
    0x00342e05, 0x00000000, 0x00031c61, 0x3a260220,
    0x00343805, 0x00000000, 0x00131d61, 0x3c260220,
    0x00343905, 0x00000000, 0x00031d61, 0x03260220,
    0x00341105, 0x00000000, 0x00131e61, 0x05260220,
    0x00341205, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x33240000,
    0xfb002f24, 0x00040000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x3e140000,
    0xfb003a24, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x12140000,
    0xfb000324, 0x00000000, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0xae222340, 0x12203e02,
    0x01040022, 0x0001c060, 0x00000778, 0x00000778,
    0x80030061, 0x4a054410, 0x00000000, 0x76543210,
    0x644a1940, 0x00804a95, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x48050120,
    0x00464a05, 0x00000000, 0xec141965, 0x00f04803,
    0x00041961, 0x26050220, 0x00461405, 0x00000000,
    0x01040022, 0x0001c060, 0x000002f0, 0x000002f0,
    0xa04d0040, 0x00410243, 0x274f1970, 0x02104d2b,
    0x00030061, 0x53060220, 0x00344d05, 0x00000000,
    0x00130061, 0x55060220, 0x00344e05, 0x00000000,
    0xa0511b40, 0x02124f1a, 0x00031961, 0x53260220,
    0x00345105, 0x00000000, 0x00131a61, 0x55260220,
    0x00345205, 0x00000000, 0xe2590961, 0x00114004,
    0x80000965, 0x59058220, 0x02005904, 0xffffffff,
    0xe25a0961, 0x00117044, 0x80000965, 0x5a058220,
    0x02005a04, 0xffffffff, 0x225a1965, 0x5a115903,
    0x80001961, 0x57050220, 0x00005a04, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0004004d, 0x59050220, 0x00005704, 0x00000000,
    0x00041941, 0x40050660, 0x01465905, 0x00562206,
    0x00040041, 0x4d050660, 0x01465905, 0x00562216,
    0x00041940, 0x40160110, 0x01564016, 0x00564d06,
    0xe25d0961, 0x00114004, 0x80000965, 0x5d058220,
    0x02005d04, 0xffffffff, 0x8000194c, 0x5b050220,
    0x00005d04, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040070, 0x00010660,
    0x16464805, 0x00005b04, 0x01040022, 0x0001c060,
    0x00000030, 0x00000030, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x43140000,
    0xfb185324, 0x01004014, 0x00040025, 0x00004600,
    0x00000000, 0x00000178, 0xe25e0961, 0x00114004,
    0x80000965, 0x5e058220, 0x02005e04, 0xffffffff,
    0x8000194c, 0x5c050220, 0x00005e04, 0x00000000,
    0x80009469, 0x10018220, 0x02005c04, 0x00000002,
    0x80000940, 0x10018220, 0x02001000, 0x00000800,
    0x80000961, 0x5e050220, 0x00010180, 0x00000000,
    0xe2660961, 0x00114004, 0x80000965, 0x66058220,
    0x02006604, 0xffffffff, 0x00040061, 0x62050120,
    0x00464a05, 0x00000000, 0x80000061, 0x42054660,
    0x00000000, 0x00000001, 0xe2670961, 0x00117044,
    0x80000965, 0x67058220, 0x02006704, 0xffffffff,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x64052660, 0x02004204, 0x00466205,
    0x22671a65, 0x67116603, 0x80001961, 0x60050220,
    0x00006704, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040065, 0x66050220,
    0x06006004, 0x02466405, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x0004194d, 0x68050220,
    0x00466605, 0x00000000, 0x00041941, 0x6a050660,
    0x01466805, 0x00562206, 0x00040041, 0x4e050660,
    0x01466805, 0x00562216, 0x00041940, 0x6a160110,
    0x01566a16, 0x00564e06, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0440040, 0x6a015e02,
    0x00040025, 0x00004600, 0x00000000, 0x00000428,
    0xa06b0040, 0x01c10243, 0xa0771b40, 0x22014402,
    0x276d1a70, 0x02106b2b, 0x00030061, 0x71060220,
    0x00346b05, 0x00000000, 0x00130061, 0x73060220,
    0x00346c05, 0x00000000, 0xa06f1b40, 0x02126d1a,
    0x00031961, 0x71260220, 0x00346f05, 0x00000000,
    0x00131a61, 0x73260220, 0x00347005, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x75140000, 0xfb007124, 0x00000000,
    0xa0792540, 0x44307502, 0x00041f70, 0x00010220,
    0x42467705, 0x00467505, 0x2f7b1a62, 0x22007903,
    0x00040070, 0x00010220, 0x52004404, 0x00467505,
    0x01040022, 0x0001c060, 0x00000358, 0x00000358,
    0xa07d0040, 0x02810243, 0xa01a3140, 0x02c10243,
    0x27071a70, 0x02107d2b, 0x00030061, 0x16060220,
    0x00347d05, 0x00000000, 0x00130061, 0x18060220,
    0x00347e05, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xe71c1c70, 0x02c01a03,
    0xa0091c40, 0x0212071a, 0x00031961, 0x16260220,
    0x00340905, 0x00000000, 0x00131a61, 0x18260220,
    0x00340a05, 0x00000000, 0x00041a70, 0x00010220,
    0x42461405, 0x00467b05, 0x01040028, 0x0001c660,
    0x00000208, 0x00000208, 0xa01e3140, 0x14001202,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x2e140000, 0xfb001624, 0x00000000,
    0x00041969, 0x20058660, 0x02461e05, 0x00000003,
    0xe0460068, 0x01d01e03, 0xa024a240, 0x20003302,
    0x274b1970, 0x33002403, 0x00033661, 0x2a060220,
    0x00342405, 0x00000000, 0x00133661, 0x2c060220,
    0x00342505, 0x00000000, 0x0004b252, 0x28040e68,
    0x0e2e3505, 0x4b054605, 0x00031961, 0x2a260220,
    0x00342805, 0x00000000, 0x00131a61, 0x2c260220,
    0x00342905, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x0b240000,
    0xfb002a24, 0x00040000, 0x00042770, 0x00018660,
    0x26462e05, 0x00000000, 0x11043262, 0x2f058220,
    0x02467505, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041952, 0x31040e68,
    0x06062f05, 0x14054404, 0x00041969, 0x37058660,
    0x02463105, 0x00000004, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa0391940, 0x37001a02,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x273b1970, 0x1a003903, 0x00033861, 0x07060220,
    0x00343905, 0x00000000, 0x00133861, 0x09060220,
    0x00343a05, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00041b52, 0x3d042e68,
    0x06261c05, 0x3b050264, 0x00031961, 0x07260220,
    0x00343d05, 0x00000000, 0x00131a61, 0x09260220,
    0x00343e05, 0x00000000, 0x80002601, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xfb080724, 0x00080b34, 0xa0140040, 0x01001403,
    0x00040027, 0x00014060, 0x00000000, 0xfffffde8,
    0x00040070, 0x00018660, 0x16462605, 0x00000000,
    0x01040022, 0x0001c060, 0x00000088, 0x00000088,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x3e140000, 0xfb000324, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa041c940, 0x7b003e02, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xfb080324, 0x00004114, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80030061, 0x7e050220,
    0x00460005, 0x00000000, 0x80040931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 2656,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_printfs,
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
      .push.cross_thread.dwords = 12,
      .push.cross_thread.regs = 2,
      .push.cross_thread.size = 64,
   },
   .args_size = 16,
   .arg_count = 2,
   .args = gfx125_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_args,
   .code = gfx125_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_code,
};
const char *gfx125_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_sha1 = "c4782e137378279412a998ec5d8a95b972a21c90";

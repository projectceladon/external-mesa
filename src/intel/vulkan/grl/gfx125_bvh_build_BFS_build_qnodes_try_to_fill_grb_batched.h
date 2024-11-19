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

and(1)          g99<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g52<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g99UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g30<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g30.8<1>UW      g30<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g35<1>D         g2.2<0,1,0>D    36D             { align1 1H compacted };
cmp.l.f0.0(16)  g37<1>UD        g35<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g54<2>UD        g35<4,4,1>UD                    { align1 1Q };
mov(8)          g56<2>UD        g36<4,4,1>UD                    { align1 2Q };
add(16)         g39<1>D         -g37<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g54.1<2>UD      g39<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g56.1<2>UD      g40<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g40UD           g54UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
add(16)         g24<1>D         g40<1,1,0>D     g52<1,1,0>D     { align1 1H @7 $1.dst compacted };
mul(8)          acc0<1>UD       g24<8,8,1>UD    0x0058UW        { align1 1Q I@1 };
mul(16)         g43<1>D         g24<1,1,0>D     88W             { align1 1H I@2 compacted };
mach(8)         g41<1>UD        g24<1,1,0>UD    0x00000058UD    { align1 1Q compacted AccWrEnable };
add(16)         g45<1>D         g2<0,1,0>D      g43<1,1,0>D     { align1 1H I@2 compacted };
mul(8)          acc0<1>UD       g25<8,8,1>UD    0x0058UW        { align1 2Q };
cmp.l.f0.0(16)  g47<1>UD        g45<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@2 compacted };
add(16)         g50<1>D         g45<1,1,0>D     40D             { align1 1H compacted };
add(16)         g56<1>D         g45<1,1,0>D     64D             { align1 1H $1.src compacted };
add(16)         g62<1>D         g45<1,1,0>D     72D             { align1 1H compacted };
mach(8)         g42<1>UD        g25<8,8,1>UD    0x00000058UD    { align1 2Q AccWrEnable };
cmp.l.f0.0(16)  g52<1>UD        g50<1,1,0>UD    g45<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g3<2>UD         g50<4,4,1>UD                    { align1 1Q };
mov(8)          g5<2>UD         g51<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g58<1>UD        g56<1,1,0>UD    g45<1,1,0>UD    { align1 1H I@6 compacted };
mov(8)          g7<2>UD         g56<4,4,1>UD                    { align1 1Q };
mov(8)          g9<2>UD         g57<4,4,1>UD                    { align1 2Q };
mov(8)          g26<2>UD        g62<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g28<2>UD        g63<4,4,1>UD                    { align1 2Q I@7 };
add3(16)        g49<1>D         g2.1<0,1,0>D    g41<8,8,1>D     -g47<1,1,1>D { align1 1H I@7 };
cmp.l.f0.0(16)  g64<1>UD        g62<1,1,0>UD    g45<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g54<1>D         -g52<1,1,0>D    g49<1,1,0>D     { align1 1H I@2 compacted };
add(16)         g60<1>D         -g58<1,1,0>D    g49<1,1,0>D     { align1 1H I@7 compacted };
add(16)         g66<1>D         -g64<1,1,0>D    g49<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g3.1<2>UD       g54<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g5.1<2>UD       g55<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g7.1<2>UD       g60<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g9.1<2>UD       g61<4,4,1>UD                    { align1 2Q I@5 };
mov(8)          g26.1<2>UD      g66<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g28.1<2>UD      g67<4,4,1>UD                    { align1 2Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g55UD           g3UD            nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g61UD           g7UD            nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g67UD           g26UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
add.nz.f0.0(16) g69<1>D         g61<1,1,0>D     -g67<1,1,0>D    { align1 1H $3.dst compacted };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
mov(16)         g71<1>D         g30<8,8,1>UW                    { align1 1H };
and.z.f0.0(16)  g34<1>UD        g71<1,1,0>UD    0x0000000fUD    { align1 1H I@1 compacted };
mov(16)         g72<1>UD        g34<8,8,1>UD                    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL1              { align1 1H };
add(16)         g74<1>D         g2.2<0,1,0>D    4D              { align1 1H compacted };
cmp.l.f0.0(16)  g76<1>UD        g74<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g59<2>UD        g74<4,4,1>UD                    { align1 1Q };
mov(8)          g61<2>UD        g75<4,4,1>UD                    { align1 2Q };
add(16)         g78<1>D         -g76<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g59.1<2>UD      g78<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g61.1<2>UD      g79<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g82<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g82<1>UD        g82<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(1)          g83<1>UD        sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g83<1>UD        g83<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
and(1)          g83<1>UD        g82<0,1,0>UD    g83<0,1,0>UD    { align1 WE_all 1N I@1 compacted };
mov(1)          g80<1>UD        g83<0,1,0>UD                    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cbit(16)        g82<1>UD        g80<0,1,0>UD                    { align1 1H };
mul(16)         g63<1>D         g82<8,8,1>D     g69<16,8,2>UW   { align1 1H I@1 };
mul(16)         g77<1>D         g82<8,8,1>D     g69.1<16,8,2>UW { align1 1H };
add(16)         g63.1<2>UW      g63.1<16,8,2>UW g77<16,8,2>UW   { align1 1H I@1 };
mov(1)          g88<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g88<1>UD        g88<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(16)         g86<1>D         g30<8,8,1>UW                    { align1 1H };
fbl(1)          g84<1>UD        g88<0,1,0>UD                    { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  null<1>D        g86<8,8,1>D     g84<0,1,0>D     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL2              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
send(16)        g31UD           g59UD           g63UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $5 };

LABEL2:
endif(16)       JIP:  LABEL1                                    { align1 1H };
mov(1)          g89<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g89<1>UD        g89<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g87<1>UD        g89<0,1,0>UD                    { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g87<0,1,0>UD    0x00000002UD    { align1 WE_all 1N @1 $5.dst };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g89<1>UD        g[a0 480]<0,1,0>UD              { align1 WE_all 1N A@1 };
mov(1)          g97<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g97<1>UD        g97<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(16)         g93<1>D         g30<8,8,1>UW                    { align1 1H };
mov(1)          g76<1>D         1D                              { align1 WE_all 1N };
mov(1)          g98<1>UD        sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g98<1>UD        g98<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g95<1>D         -g76<0,1,0>D    g93<8,8,1>UD    { align1 1H };
and(1)          g98<1>UD        g97<0,1,0>UD    g98<0,1,0>UD    { align1 WE_all 1N I@2 compacted };
mov(1)          g91<1>UD        g98<0,1,0>UD                    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(16)         g97<1>UD        g91<0,1,0>UD    ~g95<8,8,1>D    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cbit(16)        g99<1>UD        g97<8,8,1>UD                    { align1 1H I@1 };
mul(16)         g101<1>D        g99<8,8,1>D     g69<16,8,2>UW   { align1 1H I@1 };
mul(16)         g78<1>D         g99<8,8,1>D     g69.1<16,8,2>UW { align1 1H };
add(16)         g101.1<2>UW     g101.1<16,8,2>UW g78<16,8,2>UW  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g32<1>D         g89<0,1,0>D     g101<1,1,0>D    { align1 1H compacted };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
add(16)         g102<1>D        g2.2<0,1,0>D    28D             { align1 1H compacted };
add(16)         g109<1>D        g32<0,1,0>D     g69<1,1,0>D     { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g104<1>UD       g102<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g74<2>UD        g102<4,4,1>UD                   { align1 1Q };
mov(8)          g76<2>UD        g103<4,4,1>UD                   { align1 2Q };
add(16)         g106<1>D        -g104<1,1,0>D   g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g74.1<2>UD      g106<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g76.1<2>UD      g107<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g107UD          g74UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
add(16)         g111<1>D        g107<1,1,0>D    -g32<0,1,0>D    { align1 1H $4.dst compacted };
cmp.ge.f0.0(16) null<1>UD       g109<8,8,1>UD   g107<8,8,1>UD   { align1 1H I@7 };
(+f0.0) sel(16) g113<1>UD       g111<1,1,0>UD   g69<1,1,0>UD    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  null<1>UD       g32<0,1,0>UD    g107<8,8,1>UD   { align1 1H };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
add(16)         g115<1>D        g2.2<0,1,0>D    40D             { align1 1H compacted };
add(16)         g121<1>D        g2.2<0,1,0>D    44D             { align1 1H compacted };
cmp.l.f0.0(16)  g117<1>UD       g115<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g12<2>UD        g115<4,4,1>UD                   { align1 1Q };
mov(8)          g14<2>UD        g116<4,4,1>UD                   { align1 2Q };
cmp.l.f0.0(16)  g123<1>UD       g121<1,1,0>UD   0x0000002cUD    { align1 1H I@4 compacted };
add(16)         g119<1>D        -g117<1,1,0>D   g2.3<0,1,0>D    { align1 1H I@4 compacted };
mov(8)          g12.1<2>UD      g119<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g14.1<2>UD      g120<4,4,1>UD                   { align1 2Q I@2 };

LABEL5:
cmp.ge.f0.0(16) null<1>UD       g34<8,8,1>UD    g113<8,8,1>UD   { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
add(16)         g125<1>D        g67<1,1,0>D     g34<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(16)        g39UD           g12UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
shl(16)         g3<1>D          g125<8,8,1>D    0x00000003UD    { align1 1H I@1 };
shr(16)         g5<1>UD         g125<1,1,0>UD   0x0000001dUD    { align1 1H $2.src compacted };
add(16)         g30<1>D         g55<1,1,0>D     g3<1,1,0>D      { align1 1H @2 $2.dst compacted };
cmp.l.f0.0(16)  g36<1>UD        g30<1,1,0>UD    g55<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g8<2>UD         g30<4,4,1>UD                    { align1 1Q $3.src };
mov(8)          g10<2>UD        g31<4,4,1>UD                    { align1 2Q $3.src };
cmp.nz.f0.0(16) null<1>D        g39<8,8,1>D     0D              { align1 1H $6.dst };
add3(16)        g38<1>D         g57<8,8,1>D     g5<8,8,1>D      -g36<1,1,1>D { align1 1H @4 $2.dst };
(-f0.0) sel(16) g40<1>UD        g107<8,8,1>UD   0x00000000UD    { align1 1H };
mov(8)          g8.1<2>UD       g38<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g10.1<2>UD      g39<4,4,1>UD                    { align1 2Q I@3 };
add3(16)        g42<1>D         g40<8,8,1>D     g32.0<0,1,0>D   g34<1,1,1>D { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g20UD           g8UD            nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
shl(16)         g44<1>D         g42<8,8,1>D     0x00000004UD    { align1 1H I@1 };
add(16)         g46<1>D         g121<1,1,0>D    g44<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g48<1>UD        g46<1,1,0>UD    g121<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g16<2>UD        g46<4,4,1>UD                    { align1 1Q $7.src };
mov(8)          g18<2>UD        g47<4,4,1>UD                    { align1 2Q $7.src };
add3(16)        g50<1>D         -g123<8,8,1>D   g2.3<0,1,0>D    -g48<1,1,1>D { align1 1H I@3 };
mov(8)          g16.1<2>UD      g50<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g18.1<2>UD      g51<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g16UD           g20UD           0x08007586                0x00000180
                            ugm MsgDesc: ( store_cmask, a64, d32, xyz, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 6 flat )  base_offset 0  { align1 1H $7 };
add(16)         g34<1>D         g34<1,1,0>D     16D             { align1 1H compacted };

LABEL4:
while(16)       JIP:  LABEL5                                    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g72<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL6              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
send(16)        g51UD           g26UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g75<1>D         g51<1,1,0>D     g113<1,1,0>D    { align1 1H @4 $8.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g26UD           g75UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };

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
    0x80000065, 0x63058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x34050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00630c, 0x00340000,
    0x80030061, 0x1e054410, 0x00000000, 0x76543210,
    0x641e1940, 0x00801e95, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa0230040, 0x02410243,
    0x27251970, 0x0210232b, 0x00030061, 0x36060220,
    0x00342305, 0x00000000, 0x00130061, 0x38060220,
    0x00342405, 0x00000000, 0xa0271b40, 0x0212251a,
    0x00031961, 0x36260220, 0x00342705, 0x00000000,
    0x00131a61, 0x38260220, 0x00342805, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x28140000, 0xfb043624, 0x00040000,
    0xa018f140, 0x34002802, 0x00031941, 0x20018220,
    0x01461805, 0x00580058, 0x602b1a41, 0x05801802,
    0xfe290049, 0x05801803, 0xa02d1a40, 0x2b010202,
    0x00130041, 0x20018220, 0x01461905, 0x00580058,
    0x272f1a70, 0x02102d03, 0xa0320040, 0x02802d03,
    0xa0383140, 0x04002d03, 0xa03e0040, 0x04802d03,
    0x00130049, 0x2a058222, 0x02461905, 0x00000058,
    0x27341c70, 0x2d003203, 0x00030061, 0x03060220,
    0x00343205, 0x00000000, 0x00130061, 0x05060220,
    0x00343305, 0x00000000, 0x273a1e70, 0x2d003803,
    0x00030061, 0x07060220, 0x00343805, 0x00000000,
    0x00130061, 0x09060220, 0x00343905, 0x00000000,
    0x00031f61, 0x1a060220, 0x00343e05, 0x00000000,
    0x00131f61, 0x1c060220, 0x00343f05, 0x00000000,
    0x00041f52, 0x31040660, 0x0e2e0224, 0x2f052905,
    0x27400070, 0x2d003e03, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0361a40, 0x31023402,
    0xa03c1f40, 0x31023a02, 0xa0421b40, 0x31024002,
    0x00031b61, 0x03260220, 0x00343605, 0x00000000,
    0x00131c61, 0x05260220, 0x00343705, 0x00000000,
    0x00031c61, 0x07260220, 0x00343c05, 0x00000000,
    0x00131d61, 0x09260220, 0x00343d05, 0x00000000,
    0x00031d61, 0x1a260220, 0x00344205, 0x00000000,
    0x00131e61, 0x1c260220, 0x00344305, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x37240000, 0xfb040324, 0x000c0000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x3d140000, 0xfb040724, 0x00040000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x43140000, 0xfb041a24, 0x00040000,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0xae452340, 0x43203d02, 0x01040022, 0x0001c060,
    0x00000710, 0x00000710, 0x00040061, 0x47050160,
    0x00461e05, 0x00000000, 0xec221965, 0x00f04703,
    0x00041961, 0x48050220, 0x00462205, 0x00000000,
    0x01040022, 0x0001c060, 0x00000300, 0x00000300,
    0xa04a0040, 0x00410243, 0x274c1970, 0x02104a2b,
    0x00030061, 0x3b060220, 0x00344a05, 0x00000000,
    0x00130061, 0x3d060220, 0x00344b05, 0x00000000,
    0xa04e1b40, 0x02124c1a, 0x00031961, 0x3b260220,
    0x00344e05, 0x00000000, 0x00131a61, 0x3d260220,
    0x00344f05, 0x00000000, 0xe2520961, 0x00114004,
    0x80000965, 0x52058220, 0x02005204, 0xffffffff,
    0xe2530961, 0x00117044, 0x80000965, 0x53058220,
    0x02005304, 0xffffffff, 0x22531965, 0x53115203,
    0x80001961, 0x50050220, 0x00005304, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0004004d, 0x52050220, 0x00005004, 0x00000000,
    0x00041941, 0x3f050660, 0x01465205, 0x00564506,
    0x00040041, 0x4d050660, 0x01465205, 0x00564516,
    0x00041940, 0x3f160110, 0x01563f16, 0x00564d06,
    0xe2580961, 0x00114004, 0x80000965, 0x58058220,
    0x02005804, 0xffffffff, 0x00040061, 0x56050160,
    0x00461e05, 0x00000000, 0x80001a4c, 0x54050220,
    0x00005804, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040070, 0x00010660,
    0x16465605, 0x00005404, 0x01040022, 0x0001c060,
    0x00000030, 0x00000030, 0x80001e01, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x1f140000,
    0xfb183b24, 0x01003f14, 0x00040025, 0x00004600,
    0x00000000, 0x00000178, 0xe2590961, 0x00114004,
    0x80000965, 0x59058220, 0x02005904, 0xffffffff,
    0x8000194c, 0x57050220, 0x00005904, 0x00000000,
    0x80009569, 0x10018220, 0x02005704, 0x00000002,
    0x80000940, 0x10018220, 0x02001000, 0x00000200,
    0x80000961, 0x59050220, 0x00010780, 0x00000000,
    0xe2610961, 0x00114004, 0x80000965, 0x61058220,
    0x02006104, 0xffffffff, 0x00040061, 0x5d050160,
    0x00461e05, 0x00000000, 0x80000061, 0x4c054660,
    0x00000000, 0x00000001, 0xe2620961, 0x00117044,
    0x80000965, 0x62058220, 0x02006204, 0xffffffff,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x5f052660, 0x02004c04, 0x00465d05,
    0x22621a65, 0x62116103, 0x80001961, 0x5b050220,
    0x00006204, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040065, 0x61050220,
    0x06005b04, 0x02465f05, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x0004194d, 0x63050220,
    0x00466105, 0x00000000, 0x00041941, 0x65050660,
    0x01466305, 0x00564506, 0x00040041, 0x4e050660,
    0x01466305, 0x00564516, 0x00041940, 0x65160110,
    0x01566516, 0x00564e06, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0200040, 0x65015902,
    0x00040025, 0x00004600, 0x00000000, 0x000003d8,
    0xa0660040, 0x01c10243, 0xa06d1b40, 0x45012002,
    0x27681a70, 0x0210662b, 0x00030061, 0x4a060220,
    0x00346605, 0x00000000, 0x00130061, 0x4c060220,
    0x00346705, 0x00000000, 0xa06a1b40, 0x0212681a,
    0x00031961, 0x4a260220, 0x00346a05, 0x00000000,
    0x00131a61, 0x4c260220, 0x00346b05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x6b140000, 0xfb044a24, 0x00040000,
    0xa06f2440, 0x20306b02, 0x00041f70, 0x00010220,
    0x42466d05, 0x00466b05, 0x2f711a62, 0x45006f03,
    0x00040070, 0x00010220, 0x52002004, 0x00466b05,
    0x01040022, 0x0001c060, 0x00000308, 0x00000308,
    0xa0730040, 0x02810243, 0xa0790040, 0x02c10243,
    0x27751a70, 0x0210732b, 0x00030061, 0x0c060220,
    0x00347305, 0x00000000, 0x00130061, 0x0e060220,
    0x00347405, 0x00000000, 0xe77b1c70, 0x02c07903,
    0xa0771c40, 0x0212751a, 0x00031961, 0x0c260220,
    0x00347705, 0x00000000, 0x00131a61, 0x0e260220,
    0x00347805, 0x00000000, 0x00041a70, 0x00010220,
    0x42462205, 0x00467105, 0x01040028, 0x0001c660,
    0x000001c8, 0x000001c8, 0xa07d0040, 0x22004302,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x27140000, 0xfb040c24, 0x00040000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00041969, 0x03058660, 0x02467d05, 0x00000003,
    0xe0053268, 0x01d07d03, 0xa01ea240, 0x03003702,
    0x27241970, 0x37001e03, 0x00033361, 0x08060220,
    0x00341e05, 0x00000000, 0x00133361, 0x0a060220,
    0x00341f05, 0x00000000, 0x00042670, 0x00018660,
    0x26462705, 0x00000000, 0x0004c252, 0x26040e68,
    0x0e2e3905, 0x24050505, 0x11040062, 0x28058220,
    0x02466b05, 0x00000000, 0x00031a61, 0x08260220,
    0x00342605, 0x00000000, 0x00131b61, 0x0a260220,
    0x00342705, 0x00000000, 0x00041b52, 0x2a040e68,
    0x06062805, 0x22052004, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x14240000,
    0xfb040824, 0x000c0000, 0x00041969, 0x2c058660,
    0x02462a05, 0x00000004, 0xa02e1940, 0x2c007902,
    0x27301970, 0x79002e03, 0x00033761, 0x10060220,
    0x00342e05, 0x00000000, 0x00133761, 0x12060220,
    0x00342f05, 0x00000000, 0x00041b52, 0x32042e68,
    0x06267b05, 0x30050264, 0x00031961, 0x10260220,
    0x00343205, 0x00000000, 0x00131a61, 0x12260220,
    0x00343305, 0x00000000, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x00000000,
    0xfb0c1024, 0x001c1434, 0xa0220040, 0x01002203,
    0x00040027, 0x00014060, 0x00000000, 0xfffffe28,
    0x00040070, 0x00018660, 0x16464805, 0x00000000,
    0x01040022, 0x0001c060, 0x00000088, 0x00000088,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x33140000, 0xfb041a24, 0x00040000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa04bc840, 0x71003302, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xfb0c1a24, 0x00044b14, 0x00040025, 0x00004600,
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
      .base.program_size = 2592,
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
const char *gfx125_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_sha1 = "637a390b820eddc2eb86f441526a92abd384fcd0";

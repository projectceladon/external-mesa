#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g53<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(8)          g30<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(16)         g74<1>UD        g0.1<0,1,0>UD                   { align1 1H };
add(1)          g54<1>UD        g53<0,1,0>UD    0x00000000UD    { align1 WE_all 1N I@3 compacted };
add(8)          g30.8<1>UW      g30<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g54UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g34.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g36.1<2>F       g2.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g38.1<2>F       g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g40.1<2>F       g2.3<0,1,0>F                    { align1 2Q };
mov(8)          g34<2>F         g2<0,1,0>F                      { align1 1Q F@4 compacted };
mov(8)          g36<2>F         g2<0,1,0>F                      { align1 2Q F@4 compacted };
mov(8)          g38<2>F         g2.2<0,1,0>F                    { align1 1Q F@4 compacted };
mov(8)          g40<2>F         g2.2<0,1,0>F                    { align1 2Q F@4 compacted };
mov(8)          g55<1>UD        g34.1<8,4,2>UD                  { align1 1Q F@4 };
mov(8)          g56<1>UD        g36.1<8,4,2>UD                  { align1 2Q F@3 };
mov(8)          g42<1>UD        g38.1<8,4,2>UD                  { align1 1Q F@2 };
add(8)          g44<1>D         g38<8,4,2>D     36D             { align1 1Q compacted };
add(8)          g69<1>D         g38<8,4,2>D     40D             { align1 1Q compacted };
mov(8)          g43<1>UD        g40.1<8,4,2>UD                  { align1 2Q F@1 };
add(8)          g45<1>D         g40<8,4,2>D     36D             { align1 2Q compacted };
add(8)          g70<1>D         g40<8,4,2>D     40D             { align1 2Q compacted };
cmp.l.f0.0(8)   g46<1>UD        g44<8,8,1>UD    g38<8,4,2>UD    { align1 1Q I@5 };
mov(8)          g57<2>UD        g44<4,4,1>UD                    { align1 1Q };
mov(8)          g12<2>UD        g69<4,4,1>UD                    { align1 1Q I@6 };
cmp.l.f0.0(8)   g47<1>UD        g45<8,8,1>UD    g40<8,4,2>UD    { align1 2Q I@5 };
mov(8)          g59<2>UD        g45<4,4,1>UD                    { align1 2Q };
mov(8)          g14<2>UD        g70<4,4,1>UD                    { align1 2Q I@6 };
add(8)          g48<1>D         -g46<8,8,1>D    g38.1<8,4,2>D   { align1 1Q I@6 };
add(8)          g49<1>D         -g47<8,8,1>D    g40.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g57.1<2>UD      g48<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g59.1<2>UD      g49<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g72UD           g57UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
add(16)         g24<1>D         g72<1,1,0>D     g74<1,1,0>D     { align1 1H $1.dst compacted };
mul(8)          acc0<1>UD       g24<8,8,1>UD    0x0058UW        { align1 1Q I@1 };
mul(16)         g75<1>D         g24<1,1,0>D     88W             { align1 1H I@2 compacted };
mach(8)         g73<1>UD        g24<1,1,0>UD    0x00000058UD    { align1 1Q compacted AccWrEnable };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(8)          g57<1>D         g34<8,4,2>D     g75<1,1,0>D     { align1 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
add(8)          g58<1>D         g36<8,4,2>D     g76<1,1,0>D     { align1 2Q I@3 compacted };
mul(8)          acc0<1>UD       g25<8,8,1>UD    0x0058UW        { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(8)   g59<1>UD        g57<8,8,1>UD    g34<8,4,2>UD    { align1 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
cmp.l.f0.0(8)   g60<1>UD        g58<8,8,1>UD    g36<8,4,2>UD    { align1 2Q I@3 };
add(16)         g62<1>D         g57<1,1,0>D     40D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g53<1>D         g57<1,1,0>D     64D             { align1 1H compacted };
add(16)         g82<1>D         g57<1,1,0>D     72D             { align1 1H compacted };
mach(8)         g74<1>UD        g25<8,8,1>UD    0x00000058UD    { align1 2Q AccWrEnable };
cmp.l.f0.0(16)  g64<1>UD        g62<1,1,0>UD    g57<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g3<2>UD         g62<4,4,1>UD                    { align1 1Q };
mov(8)          g5<2>UD         g63<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(8)   g71<1>UD        g69<8,8,1>UD    g38<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(8)   g50<1>UD        g70<8,8,1>UD    g40<8,4,2>UD    { align1 2Q };
mov(8)          g7<2>UD         g53<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g9<2>UD         g54<4,4,1>UD                    { align1 2Q I@7 };
mov(8)          g26<2>UD        g82<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g28<2>UD        g83<4,4,1>UD                    { align1 2Q I@7 };
add3(16)        g61<1>D         g55<8,8,1>D     g73<8,8,1>D     -g59<1,1,1>D { align1 1H I@7 };
cmp.l.f0.0(16)  g77<1>UD        g53<1,1,0>UD    g57<1,1,0>UD    { align1 1H compacted };
add(8)          g51<1>D         -g71<8,8,1>D    g38.1<8,4,2>D   { align1 1Q I@7 };
add(8)          g52<1>D         -g50<8,8,1>D    g40.1<8,4,2>D   { align1 2Q I@7 };
cmp.l.f0.0(16)  g84<1>UD        g82<1,1,0>UD    g57<1,1,0>UD    { align1 1H compacted };
add(16)         g66<1>D         -g64<1,1,0>D    g61<1,1,0>D     { align1 1H I@5 compacted };
add(16)         g79<1>D         -g77<1,1,0>D    g61<1,1,0>D     { align1 1H I@5 compacted };
mov(8)          g12.1<2>UD      g51<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g14.1<2>UD      g52<4,4,1>UD                    { align1 2Q I@5 };
add(16)         g86<1>D         -g84<1,1,0>D    g61<1,1,0>D     { align1 1H I@5 compacted };
mov(8)          g3.1<2>UD       g66<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g5.1<2>UD       g67<4,4,1>UD                    { align1 2Q I@6 };
mov(8)          g7.1<2>UD       g79<4,4,1>UD                    { align1 1Q I@6 };
mov(8)          g9.1<2>UD       g80<4,4,1>UD                    { align1 2Q I@7 };
mov(8)          g26.1<2>UD      g86<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g28.1<2>UD      g87<4,4,1>UD                    { align1 2Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g68UD           g3UD            nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g81UD           g7UD            nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g88UD           g26UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
add.nz.f0.0(16) g63<1>D         g81<1,1,0>D     -g88<1,1,0>D    { align1 1H $3.dst compacted };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
mov(16)         g90<1>D         g30<8,8,1>UW                    { align1 1H };
and(16)         g121<1>UD       g90<1,1,0>UD    0x0000000fUD    { align1 1H I@1 compacted };
cmp.z.f0.0(16)  g91<1>D         g121<1,1,0>D    0D              { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL1              { align1 1H };
add(8)          g93<1>D         g38<8,4,2>D     4D              { align1 1Q compacted };
add(8)          g94<1>D         g40<8,4,2>D     4D              { align1 2Q compacted };
cmp.l.f0.0(8)   g95<1>UD        g93<8,8,1>UD    g38<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g96<1>UD        g94<8,8,1>UD    g40<8,4,2>UD    { align1 2Q I@2 };
mov(8)          g59<2>UD        g93<4,4,1>UD                    { align1 1Q };
mov(8)          g61<2>UD        g94<4,4,1>UD                    { align1 2Q };
add(8)          g97<1>D         -g95<8,8,1>D    g38.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g98<1>D         -g96<8,8,1>D    g40.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g59.1<2>UD      g97<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g61.1<2>UD      g98<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g33UD           g59UD           g63UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $5 };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
add(8)          g99<1>D         g38<8,4,2>D     28D             { align1 1Q compacted };
add(8)          g100<1>D        g40<8,4,2>D     28D             { align1 2Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
add(16)         g107<1>D        g33<0,1,0>D     g63<1,1,0>D     { align1 1H $5.dst compacted };
cmp.l.f0.0(8)   g101<1>UD       g99<8,8,1>UD    g38<8,4,2>UD    { align1 1Q I@3 };
cmp.l.f0.0(8)   g102<1>UD       g100<8,8,1>UD   g40<8,4,2>UD    { align1 2Q I@3 };
mov(8)          g50<2>UD        g99<4,4,1>UD                    { align1 1Q };
mov(8)          g52<2>UD        g100<4,4,1>UD                   { align1 2Q };
add(8)          g103<1>D        -g101<8,8,1>D   g38.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g104<1>D        -g102<8,8,1>D   g40.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g50.1<2>UD      g103<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g52.1<2>UD      g104<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g105UD          g50UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $4 };
add(16)         g109<1>D        g105<1,1,0>D    -g33<0,1,0>D    { align1 1H $4.dst compacted };
cmp.ge.f0.0(16) null<1>UD       g107<8,8,1>UD   g105<8,8,1>UD   { align1 1H I@7 };
(+f0.0) sel(16) g111<1>UD       g109<1,1,0>UD   g63<1,1,0>UD    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  null<1>UD       g33<0,1,0>UD    g105<8,8,1>UD   { align1 1H };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL2              { align1 1H };
add(8)          g113<1>D        g38<8,4,2>D     44D             { align1 1Q compacted };
add(8)          g114<1>D        g40<8,4,2>D     44D             { align1 2Q compacted };
cmp.l.f0.0(16)  g115<1>UD       g113<1,1,0>UD   0x0000002cUD    { align1 1H I@1 compacted };

LABEL4:
cmp.ge.f0.0(16) null<1>UD       g121<8,8,1>UD   g111<8,8,1>UD   { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL3        UIP:  LABEL3              { align1 1H };
add(16)         g117<1>D        g88<1,1,0>D     g121<1,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
send(16)        g3UD            g12UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $6 };
shl(16)         g119<1>D        g117<8,8,1>D    0x00000003UD    { align1 1H I@1 };
shr(16)         g31<1>UD        g117<1,1,0>UD   0x0000001dUD    { align1 1H compacted };
add(16)         g123<1>D        g68<1,1,0>D     g119<1,1,0>D    { align1 1H @2 $2.dst compacted };
cmp.l.f0.0(16)  g125<1>UD       g123<1,1,0>UD   g68<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g8<2>UD         g123<4,4,1>UD                   { align1 1Q $3.src };
mov(8)          g10<2>UD        g124<4,4,1>UD                   { align1 2Q $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add3(16)        g1<1>D          g70<8,8,1>D     g31<8,8,1>D     -g125<1,1,1>D { align1 1H A@1 };
mov(8)          g8.1<2>UD       g1<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g10.1<2>UD      g2<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g20UD           g8UD            nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $8 };
cmp.nz.f0.0(16) null<1>D        g3<8,8,1>D      0D              { align1 1H $6.dst };
(-f0.0) sel(16) g4<1>UD         g105<8,8,1>UD   0x00000000UD    { align1 1H $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add3(16)        g6<1>D          g4<8,8,1>D      g33.0<0,1,0>D   g121<1,1,1>D { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
shl(16)         g8<1>D          g6<8,8,1>D      0x00000004UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g10<1>D         g113<1,1,0>D    g8<1,1,0>D      { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g35<1>UD        g10<1,1,0>UD    g113<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g16<2>UD        g10<4,4,1>UD                    { align1 1Q $7.src };
mov(8)          g18<2>UD        g11<4,4,1>UD                    { align1 2Q $7.src };
add3(16)        g37<1>D         -g115<8,8,1>D   g42<8,8,1>D     -g35<1,1,1>D { align1 1H I@3 };
mov(8)          g16.1<2>UD      g37<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g18.1<2>UD      g38<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g16UD           g20UD           0x08007586                0x00000180
                            ugm MsgDesc: ( store_cmask, a64, d32, xyz, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 6 flat ) base_offset 0  { align1 1H $7 };
add(16)         g121<1>D        g121<1,1,0>D    16D             { align1 1H compacted };

LABEL3:
while(16)       JIP:  LABEL4                                    { align1 1H };
mov.nz.f0.0(16) null<1>D        g91<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL5              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(16)        g40UD           g26UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g52<1>D         g40<1,1,0>D     g111<1,1,0>D    { align1 1H @4 $9.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g26UD           g52UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $4 };

LABEL5:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
endif(16)       JIP:  LABEL0                                    { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
mov(16)         acc0<1>F        0x0F             /* 0F */       { align1 WE_all 1H I@1 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_code[] = {
    0x80000065, 0x35058220, 0x02000004, 0xffffffc0,
    0x80030061, 0x1e054410, 0x00000000, 0x76543210,
    0x00040061, 0x4a050220, 0x00000024, 0x00000000,
    0xe2361b40, 0x00013503, 0x641e1b40, 0x00801e95,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00360c, 0x00340000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x21220061, 0x001102cc, 0x2a240061, 0x001102cc,
    0x00030061, 0x26260aa0, 0x00000264, 0x00000000,
    0x00130061, 0x28260aa0, 0x00000264, 0x00000000,
    0x21221461, 0x00110204, 0x2a241461, 0x00110204,
    0x21261461, 0x00110244, 0x2a281461, 0x00110244,
    0x00031461, 0x37050220, 0x00442226, 0x00000000,
    0x00131361, 0x38050220, 0x00442426, 0x00000000,
    0x00031261, 0x2a050220, 0x00442626, 0x00000000,
    0xa12c0040, 0x024e2603, 0xa1450040, 0x028e2603,
    0x00131161, 0x2b050220, 0x00442826, 0x00000000,
    0xaa2d0040, 0x024e2803, 0xaa460040, 0x028e2803,
    0x00031d70, 0x2e050220, 0x52462c05, 0x00442606,
    0x00030061, 0x39060220, 0x00342c05, 0x00000000,
    0x00031e61, 0x0c060220, 0x00344505, 0x00000000,
    0x00131d70, 0x2f050220, 0x52462d05, 0x00442806,
    0x00130061, 0x3b060220, 0x00342d05, 0x00000000,
    0x00131e61, 0x0e060220, 0x00344605, 0x00000000,
    0x00031e40, 0x30052660, 0x06462e05, 0x00442626,
    0x00131c40, 0x31052660, 0x06462f05, 0x00442826,
    0x00031a61, 0x39260220, 0x00343005, 0x00000000,
    0x00131a61, 0x3b260220, 0x00343105, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x48140000, 0xfb043924, 0x00040000,
    0xa0182140, 0x4a004802, 0x00031941, 0x20018220,
    0x01461805, 0x00580058, 0x604b1a41, 0x05801802,
    0xfe490049, 0x05801803, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa1391a40, 0x4b0e2202,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0xaa3a1b40, 0x4c0e2402, 0x00130041, 0x20018220,
    0x01461905, 0x00580058, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00031b70, 0x3b050220,
    0x52463905, 0x00442206, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00131b70, 0x3c050220,
    0x52463a05, 0x00442406, 0xa03e0040, 0x02803903,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa0350040, 0x04003903, 0xa0520040, 0x04803903,
    0x00130049, 0x4a058222, 0x02461905, 0x00000058,
    0x27401c70, 0x39003e03, 0x00030061, 0x03060220,
    0x00343e05, 0x00000000, 0x00130061, 0x05060220,
    0x00343f05, 0x00000000, 0x00030070, 0x47050220,
    0x52464505, 0x00442606, 0x00130070, 0x32050220,
    0x52464605, 0x00442806, 0x00031f61, 0x07060220,
    0x00343505, 0x00000000, 0x00131f61, 0x09060220,
    0x00343605, 0x00000000, 0x00031f61, 0x1a060220,
    0x00345205, 0x00000000, 0x00131f61, 0x1c060220,
    0x00345305, 0x00000000, 0x00041f52, 0x3d040e68,
    0x0e2e3705, 0x3b054905, 0x274d0070, 0x39003503,
    0x00031f40, 0x33052660, 0x06464705, 0x00442626,
    0x00131f40, 0x34052660, 0x06463205, 0x00442826,
    0x27540070, 0x39005203, 0xa0421d40, 0x3d024002,
    0xa04f1d40, 0x3d024d02, 0x00031d61, 0x0c260220,
    0x00343305, 0x00000000, 0x00131d61, 0x0e260220,
    0x00343405, 0x00000000, 0xa0561d40, 0x3d025402,
    0x00031d61, 0x03260220, 0x00344205, 0x00000000,
    0x00131e61, 0x05260220, 0x00344305, 0x00000000,
    0x00031e61, 0x07260220, 0x00344f05, 0x00000000,
    0x00131f61, 0x09260220, 0x00345005, 0x00000000,
    0x00031d61, 0x1a260220, 0x00345605, 0x00000000,
    0x00131e61, 0x1c260220, 0x00345705, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x44240000, 0xfb040324, 0x000c0000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x51140000, 0xfb040724, 0x00040000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x58140000, 0xfb041a24, 0x00040000,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0xae3f2340, 0x58205102, 0x01040022, 0x0001c060,
    0x00000510, 0x00000510, 0x00040061, 0x5a050160,
    0x00461e05, 0x00000000, 0xe0791965, 0x00f05a03,
    0xac5b1970, 0x00007903, 0x01040022, 0x0001c060,
    0x000000c0, 0x000000c0, 0xa15d0040, 0x004e2603,
    0xaa5e0040, 0x004e2803, 0x00031a70, 0x5f050220,
    0x52465d05, 0x00442606, 0x00131a70, 0x60050220,
    0x52465e05, 0x00442806, 0x00030061, 0x3b060220,
    0x00345d05, 0x00000000, 0x00130061, 0x3d060220,
    0x00345e05, 0x00000000, 0x00031c40, 0x61052660,
    0x06465f05, 0x00442626, 0x00131c40, 0x62052660,
    0x06466005, 0x00442826, 0x00031a61, 0x3b260220,
    0x00346105, 0x00000000, 0x00131a61, 0x3d260220,
    0x00346205, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x21140000,
    0xfb183b24, 0x01003f14, 0x00040025, 0x00004600,
    0x00000000, 0x00000420, 0xa1630040, 0x01ce2603,
    0xaa640040, 0x01ce2803, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0xa06b2540, 0x3f012102,
    0x00031b70, 0x65050220, 0x52466305, 0x00442606,
    0x00131b70, 0x66050220, 0x52466405, 0x00442806,
    0x00030061, 0x32060220, 0x00346305, 0x00000000,
    0x00130061, 0x34060220, 0x00346405, 0x00000000,
    0x00031c40, 0x67052660, 0x06466505, 0x00442626,
    0x00131c40, 0x68052660, 0x06466605, 0x00442826,
    0x00031a61, 0x32260220, 0x00346705, 0x00000000,
    0x00131a61, 0x34260220, 0x00346805, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x69140000, 0xfb043224, 0x00040000,
    0xa06d2440, 0x21306902, 0x00041f70, 0x00010220,
    0x42466b05, 0x00466905, 0x2f6f1a62, 0x3f006d03,
    0x00040070, 0x00010220, 0x52002104, 0x00466905,
    0x01040022, 0x0001c060, 0x00000308, 0x00000308,
    0xa1710040, 0x02ce2603, 0xaa720040, 0x02ce2803,
    0xe7731970, 0x02c07103, 0x00041a70, 0x00010220,
    0x42467905, 0x00466f05, 0x01040028, 0x0001c660,
    0x00000218, 0x00000218, 0xa0750040, 0x79005802,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x03140000, 0xfb040c24, 0x00040000,
    0x00041969, 0x77058660, 0x02467505, 0x00000003,
    0xe01f0068, 0x01d07503, 0xa07ba240, 0x77004402,
    0x277d1970, 0x44007b03, 0x00033361, 0x08060220,
    0x00347b05, 0x00000000, 0x00133361, 0x0a060220,
    0x00347c05, 0x00000000, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00040952, 0x01040e68,
    0x0e2e4605, 0x7d051f05, 0x00031961, 0x08260220,
    0x00340105, 0x00000000, 0x00131a61, 0x0a260220,
    0x00340205, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x14240000,
    0xfb040824, 0x000c0000, 0x00042670, 0x00018660,
    0x26460305, 0x00000000, 0x11043262, 0x04058220,
    0x02466905, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00041952, 0x06040e68,
    0x06060405, 0x79052104, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00041969, 0x08058660,
    0x02460605, 0x00000004, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xa00a1940, 0x08007102,
    0x27231970, 0x71000a03, 0x00033761, 0x10060220,
    0x00340a05, 0x00000000, 0x00133761, 0x12060220,
    0x00340b05, 0x00000000, 0x00041b52, 0x25042e68,
    0x0e2e7305, 0x23052a05, 0x00031961, 0x10260220,
    0x00342505, 0x00000000, 0x00131a61, 0x12260220,
    0x00342605, 0x00000000, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x00000000,
    0xfb0c1024, 0x001c1434, 0xa0790040, 0x01007903,
    0x00040027, 0x00014060, 0x00000000, 0xfffffdd8,
    0x00040061, 0x00010660, 0x20465b05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000088, 0x00000088,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x28140000, 0xfb041a24, 0x00040000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa034c940, 0x6f002802, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xfb0c1a24, 0x00043414, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80030061, 0x7e050220,
    0x00460005, 0x00000000, 0x80041961, 0x20014aa0,
    0x00000000, 0x00000000, 0x80040931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 2544,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_relocs,
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
const char *gfx125_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_sha1 = "c269fbabdb527f1a4fef3469edf4c5f0d306f3ce";

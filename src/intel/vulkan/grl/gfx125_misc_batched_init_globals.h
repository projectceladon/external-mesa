#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_misc_batched_init_globals_relocs[] = {
};
static const u_printf_info gfx125_misc_batched_init_globals_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_misc_batched_init_globals_args[] = {
   { 0, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g125<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(8)          g104<1>UD       g0.1<0,1,0>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g125UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mul(8)          acc0<1>UD       g104<8,8,1>UD   0x0050UW        { align1 1Q I@1 };
mul(8)          g3<1>D          g104<1,1,0>D    80W             { align1 1Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(8)          g5<1>D          g2<0,1,0>D      g3<1,1,0>D      { align1 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mach(8)         g1<1>UD         g104<1,1,0>UD   0x00000050UD    { align1 1Q compacted AccWrEnable };
cmp.l.f0.0(8)   g4<1>UD         g5<1,1,0>UD     g2<0,1,0>UD     { align1 1Q I@2 compacted };
mov(8)          g7<2>UD         g5<4,4,1>UD                     { align1 1Q };
add(8)          g16<1>D         g5<1,1,0>D      16D             { align1 1Q compacted };
add(8)          g21<1>D         g5<1,1,0>D      32D             { align1 1Q compacted };
add(8)          g26<1>D         g5<1,1,0>D      48D             { align1 1Q compacted };
add(8)          g31<1>D         g5<1,1,0>D      64D             { align1 1Q compacted };
add3(8)         g6<1>D          g2.1<0,1,0>D    g1<8,8,1>D      -g4<1,1,1>D { align1 1Q I@6 };
cmp.l.f0.0(8)   g17<1>UD        g16<1,1,0>UD    g5<1,1,0>UD     { align1 1Q I@5 compacted };
mov(8)          g19<2>UD        g16<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g22<1>UD        g21<1,1,0>UD    g5<1,1,0>UD     { align1 1Q I@6 compacted };
mov(8)          g24<2>UD        g21<4,4,1>UD                    { align1 1Q };
mov(8)          g29<2>UD        g26<4,4,1>UD                    { align1 1Q I@7 };
cmp.l.f0.0(8)   g27<1>UD        g26<1,1,0>UD    g5<1,1,0>UD     { align1 1Q compacted };
mov(8)          g34<2>UD        g31<4,4,1>UD                    { align1 1Q I@7 };
cmp.l.f0.0(8)   g32<1>UD        g31<1,1,0>UD    g5<1,1,0>UD     { align1 1Q compacted };
mov(8)          g7.1<2>UD       g6<4,4,1>UD                     { align1 1Q I@7 };
add(8)          g18<1>D         -g17<1,1,0>D    g6<1,1,0>D      { align1 1Q I@7 compacted };
add(8)          g23<1>D         -g22<1,1,0>D    g6<1,1,0>D      { align1 1Q I@7 compacted };
add(8)          g28<1>D         -g27<1,1,0>D    g6<1,1,0>D      { align1 1Q I@6 compacted };
add(8)          g33<1>D         -g32<1,1,0>D    g6<1,1,0>D      { align1 1Q I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(8)         g8UD            g7UD            nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $1 };
mov(8)          g19.1<2>UD      g18<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g24.1<2>UD      g23<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g29.1<2>UD      g28<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g34.1<2>UD      g33<4,4,1>UD                    { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(8)         g20UD           g19UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(8)         g25UD           g24UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g30UD           g29UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $4 };
mov(8)          g12<2>UD        g8<4,4,1>UD                     { align1 1Q $1.dst };
mov(8)          g14<2>UD        g10<4,4,1>UD                    { align1 1Q $1.dst };
add(8)          g36<1>D         g10<1,1,0>D     128D            { align1 1Q compacted };
add(8)          g41<1>D         g10<1,1,0>D     152D            { align1 1Q compacted };
mov(8)          g12.1<2>UD      g9<4,4,1>UD                     { align1 1Q @4 $1.dst };
mov(8)          g14.1<2>UD      g11<4,4,1>UD                    { align1 1Q @4 $1.dst };
mov(8)          g105<1>UD       g23<8,8,1>UD                    { align1 1Q $2.dst };
mov(8)          g106<1>UD       g22<8,8,1>UD                    { align1 1Q $2.dst };
mov(8)          g108<1>UD       g21<8,8,1>UD                    { align1 1Q $2.dst };
mov(8)          g39<2>UD        g36<4,4,1>UD                    { align1 1Q I@7 };
cmp.l.f0.0(8)   g37<1>UD        g36<1,1,0>UD    g10<1,1,0>UD    { align1 1Q compacted };
mov(8)          g107<1>UD       g25<8,8,1>UD                    { align1 1Q $3.dst };
mov(8)          g44<2>UD        g41<4,4,1>UD                    { align1 1Q I@7 };
cmp.l.f0.0(8)   g42<1>UD        g41<1,1,0>UD    0x00000098UD    { align1 1Q compacted };
add(8)          g38<1>D         -g37<1,1,0>D    g11<1,1,0>D     { align1 1Q I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g35UD           g34UD           nullUD          0x04302580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V3, L1STATE_L3MOCS dst_len = 3, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $5 };
add(8)          g43<1>D         -g42<1,1,0>D    g11<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g39.1<2>UD      g38<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g44.1<2>UD      g43<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g44UD           g105UD          0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $6 };
add(8)          g45<1>D         g10<1,1,0>D     168D            { align1 1Q $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g106<1>UD       g31<8,8,1>UD                    { align1 1Q $4.dst };
mov(8)          g107<1>UD       0x00000000UD                    { align1 1Q $6.src };
mov(8)          g108<1>UD       0x00000000UD                    { align1 1Q $6.src };
mov(8)          g109<1>UD       0x00000000UD                    { align1 1Q };
cmp.l.f0.0(8)   g46<1>UD        g45<1,1,0>UD    0x000000a8UD    { align1 1Q I@5 compacted };
mov(8)          g48<2>UD        g45<4,4,1>UD                    { align1 1Q };
add(8)          g47<1>D         -g46<1,1,0>D    g11<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g48.1<2>UD      g47<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g48UD           g106UD          0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $7 };
add(8)          g49<1>D         g10<1,1,0>D     184D            { align1 1Q $7.src compacted };
mov(8)          g107<1>UD       0x00000000UD                    { align1 1Q $7.src };
mov(8)          g108<1>UD       0xaaabbaaaUD                    { align1 1Q $7.src };
cmp.l.f0.0(8)   g50<1>UD        g49<1,1,0>UD    0x000000b8UD    { align1 1Q I@3 compacted };
mov(8)          g52<2>UD        g49<4,4,1>UD                    { align1 1Q };
add(8)          g51<1>D         -g50<1,1,0>D    g11<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g52.1<2>UD      g51<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g52UD           g107UD          0x04001584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1Q $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
shr(8)          g108<1>UD       g26<1,1,0>UD    0x00000006UD    { align1 1Q $3.dst compacted };
add(8)          g53<1>D         g10<1,1,0>D     12D             { align1 1Q $8.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shr(8)          g109<1>UD       g27<1,1,0>UD    0x00000006UD    { align1 1Q $3.dst compacted };
shr(8)          g111<1>UD       g28<1,1,0>UD    0x00000006UD    { align1 1Q $3.dst compacted };
cmp.l.f0.0(8)   g54<1>UD        g53<1,1,0>UD    g10<1,1,0>UD    { align1 1Q I@3 compacted };
mov(8)          g56<2>UD        g53<4,4,1>UD                    { align1 1Q };
mov(8)          g110<1>UD       g109<8,8,1>UD                   { align1 1Q I@4 };
add(8)          g55<1>D         -g54<1,1,0>D    g11<1,1,0>D     { align1 1Q I@3 compacted };
mov(8)          g56.1<2>UD      g55<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g56UD           g108UD          0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $9 };
add(8)          g57<1>D         g10<1,1,0>D     28D             { align1 1Q $9.src compacted };
shr(8)          g115<1>UD       g30<1,1,0>UD    0x00000006UD    { align1 1Q $4.dst compacted };
mov(8)          g112<1>UD       g111<8,8,1>UD                   { align1 1Q $9.src };
mov(8)          g113<1>UD       g109<8,8,1>UD                   { align1 1Q $9.src };
mov(8)          g114<1>UD       g109<8,8,1>UD                   { align1 1Q };
cmp.l.f0.0(8)   g58<1>UD        g57<1,1,0>UD    g10<1,1,0>UD    { align1 1Q I@5 compacted };
mov(8)          g60<2>UD        g57<4,4,1>UD                    { align1 1Q };
add(8)          g59<1>D         -g58<1,1,0>D    g11<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g60.1<2>UD      g59<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g60UD           g112UD          0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $10 };
shr(8)          g115<1>UD       g31<1,1,0>UD    0x00000006UD    { align1 1Q $10.src compacted };
add(8)          g61<1>D         g10<1,1,0>D     44D             { align1 1Q $10.src compacted };
mov(8)          g116<1>UD       0x00000000UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(8)          g113<1>UD       g115<8,8,1>UD                   { align1 1Q I@3 };
mov(8)          g114<1>UD       g115<8,8,1>UD                   { align1 1Q $10.src };
cmp.l.f0.0(8)   g62<1>UD        g61<1,1,0>UD    g10<1,1,0>UD    { align1 1Q I@4 compacted };
mov(8)          g64<2>UD        g61<4,4,1>UD                    { align1 1Q };
add(8)          g63<1>D         -g62<1,1,0>D    g11<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g64.1<2>UD      g63<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g64UD           g113UD          0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $11 };
add(8)          g65<1>D         g10<1,1,0>D     60D             { align1 1Q $11.src compacted };
mov(8)          g114<1>UD       g26<8,8,1>UD                    { align1 1Q $11.src };
mov(8)          g115<1>UD       0x00000000UD                    { align1 1Q $11.src };
cmp.l.f0.0(8)   g66<1>UD        g65<1,1,0>UD    g10<1,1,0>UD    { align1 1Q I@3 compacted };
mov(8)          g68<2>UD        g65<4,4,1>UD                    { align1 1Q };
add(8)          g67<1>D         -g66<1,1,0>D    g11<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g68.1<2>UD      g67<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(8)         nullUD          g14UD           g114UD          0x04001584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1Q $12 };
shr(8)          g118<1>UD       g35<1,1,0>UD    0x00000006UD    { align1 1Q $5.dst compacted };
mov(8)          g115<1>UD       0x00000000UD                    { align1 1Q $12.src };
mov(8)          g116<1>UD       0x00000000UD                    { align1 1Q $11.src };
mov(8)          g117<1>UD       0x00000000UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g68UD           g115UD          0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
shr(8)          g116<1>UD       g36<1,1,0>UD    0x00000006UD    { align1 1Q $5.dst compacted };
add(8)          g69<1>D         g10<1,1,0>D     76D             { align1 1Q $13.src compacted };
shr(8)          g119<1>UD       g37<1,1,0>UD    0x00000006UD    { align1 1Q $5.dst compacted };
mov(8)          g117<1>UD       0x00000000UD                    { align1 1Q $13.src };
mov(8)          g118<1>UD       0x00000000UD                    { align1 1Q $13.src };
cmp.l.f0.0(8)   g70<1>UD        g69<1,1,0>UD    g10<1,1,0>UD    { align1 1Q I@4 compacted };
mov(8)          g72<2>UD        g69<4,4,1>UD                    { align1 1Q };
add(8)          g71<1>D         -g70<1,1,0>D    g11<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g72.1<2>UD      g71<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g72UD           g116UD          0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $14 };
cmp.nz.f0.0(8)  null<1>D        g30<8,8,1>D     g31<8,8,1>D     { align1 1Q };
(+f0.0) if(8)   JIP:  LABEL0          UIP:  LABEL0              { align1 1Q };
and(8)          g73<1>UD        g30<8,8,1>UD    0xffffffc0UD    { align1 1Q $14.src };
mov(8)          g117<1>UD       0xffffffc0UD                    { align1 1Q $14.src };
add(8)          g74<1>D         g10<1,1,0>D     g73<1,1,0>D     { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g75<1>UD        g74<1,1,0>UD    g10<1,1,0>UD    { align1 1Q I@1 compacted };
mov(8)          g77<2>UD        g74<4,4,1>UD                    { align1 1Q };
add(8)          g76<1>D         -g75<1,1,0>D    g11<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g77.1<2>UD      g76<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g77UD           g117UD          0x04000584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1Q $14 };

LABEL0:
endif(8)        JIP:  LABEL1                                    { align1 1Q };

LABEL1:
mov(8)          g118<1>UD       0x7f800000UD                    { align1 1Q $14.src };
mov(8)          g119<1>UD       0x7f800000UD                    { align1 1Q $14.src };
mov(8)          g120<1>UD       0x7f800000UD                    { align1 1Q };
mov(8)          g121<1>UD       0xff800000UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g39UD           g118UD          0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $15 };
add(8)          g78<1>D         g10<1,1,0>D     144D            { align1 1Q $14.src compacted };
mov(8)          g119<1>UD       0xff800000UD                    { align1 1Q $15.src };
mov(8)          g120<1>UD       0xff800000UD                    { align1 1Q $15.src };
cmp.l.f0.0(8)   g79<1>UD        g78<1,1,0>UD    0x00000090UD    { align1 1Q I@3 compacted };
mov(8)          g81<2>UD        g78<4,4,1>UD                    { align1 1Q };
add(8)          g80<1>D         -g79<1,1,0>D    g11<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g81.1<2>UD      g80<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g81UD           g119UD          0x04001584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1Q $0 };
mov(8)          g120<1>UD       0x7f800000UD                    { align1 1Q $0.src };
mov(8)          g121<1>UD       0x7f800000UD                    { align1 1Q $15.src };
mov(8)          g122<1>UD       0x7f800000UD                    { align1 1Q };
mov(8)          g123<1>UD       0x00000000UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g12UD           g120UD          0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $1 };
add(8)          g82<1>D         g8<1,1,0>D      16D             { align1 1Q $0.src compacted };
mov(8)          g121<1>UD       0xff800000UD                    { align1 1Q $1.src };
mov(8)          g122<1>UD       0xff800000UD                    { align1 1Q $1.src };
mov(8)          g123<1>UD       0xff800000UD                    { align1 1Q $1.src };
mov(8)          g124<1>UD       0x80000000UD                    { align1 1Q };
cmp.l.f0.0(8)   g83<1>UD        g82<1,1,0>UD    g8<1,1,0>UD     { align1 1Q I@5 compacted };
mov(8)          g85<2>UD        g82<4,4,1>UD                    { align1 1Q };
add(8)          g84<1>D         -g83<1,1,0>D    g9<1,1,0>D      { align1 1Q I@2 compacted };
mov(8)          g85.1<2>UD      g84<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g85UD           g121UD          0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $2 };
add(8)          g86<1>D         g8<1,1,0>D      32D             { align1 1Q $2.src compacted };
add(8)          g91<1>D         g8<1,1,0>D      72D             { align1 1Q compacted };
add(8)          g96<1>D         g8<1,1,0>D      48D             { align1 1Q compacted };
mov(8)          g122<1>UD       0x00000000UD                    { align1 1Q $2.src };
mov(8)          g123<1>UD       0x00000000UD                    { align1 1Q $2.src };
cmp.l.f0.0(8)   g87<1>UD        g86<1,1,0>UD    g8<1,1,0>UD     { align1 1Q I@5 compacted };
mov(8)          g89<2>UD        g86<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g92<1>UD        g91<1,1,0>UD    g8<1,1,0>UD     { align1 1Q I@6 compacted };
mov(8)          g94<2>UD        g91<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g97<1>UD        g96<1,1,0>UD    g8<1,1,0>UD     { align1 1Q I@7 compacted };
mov(8)          g99<2>UD        g96<4,4,1>UD                    { align1 1Q };
add(8)          g88<1>D         -g87<1,1,0>D    g9<1,1,0>D      { align1 1Q I@6 compacted };
add(8)          g93<1>D         -g92<1,1,0>D    g9<1,1,0>D      { align1 1Q I@5 compacted };
add(8)          g98<1>D         -g97<1,1,0>D    g9<1,1,0>D      { align1 1Q I@4 compacted };
mov(8)          g89.1<2>UD      g88<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g94.1<2>UD      g93<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g99.1<2>UD      g98<4,4,1>UD                    { align1 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g99UD           g122UD          0x04001584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1Q $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(8)         nullUD          g94UD           g122UD          0x04001584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1Q $4 };
add(8)          g100<1>D        g8<1,1,0>D      64D             { align1 1Q $3.src compacted };
mov(8)          g123<1>UD       0x00000000UD                    { align1 1Q $4.src };
cmp.l.f0.0(8)   g101<1>UD       g100<1,1,0>UD   g8<1,1,0>UD     { align1 1Q I@2 compacted };
mov(8)          g103<2>UD       g100<4,4,1>UD                   { align1 1Q };
add(8)          g102<1>D        -g101<1,1,0>D   g9<1,1,0>D      { align1 1Q I@2 compacted };
mov(8)          g103.1<2>UD     g102<4,4,1>UD                   { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g103UD          g123UD          0x04000584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1Q $5 };
mov(8)          g124<1>UD       g27<8,8,1>UD                    { align1 1Q $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g125<1>UD       g20<8,8,1>UD                    { align1 1Q $2.dst };
mov(8)          g126<1>UD       g32<8,8,1>UD                    { align1 1Q $4.dst };
mov(8)          g127<1>UD       g33<8,8,1>UD                    { align1 1Q $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g89UD           g124UD          0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $6 };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q $6.src };
send(8)         nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1Q A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_batched_init_globals_code[] = {
    0x80000065, 0x7d058220, 0x02000004, 0xffffffc0,
    0x00030061, 0x68050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa007d0c, 0x00340000,
    0x00031941, 0x20018220, 0x01466805, 0x00500050,
    0x61030041, 0x05006802, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa1051940, 0x03010202,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xfe010049, 0x05006803, 0x30041a70, 0x02100503,
    0x00030061, 0x07060220, 0x00340505, 0x00000000,
    0xa1100040, 0x01000503, 0xa1150040, 0x02000503,
    0xa11a0040, 0x03000503, 0xa11f0040, 0x04000503,
    0x00031e52, 0x06040660, 0x0e2e0224, 0x04050105,
    0x30111d70, 0x05001003, 0x00030061, 0x13060220,
    0x00341005, 0x00000000, 0x30161e70, 0x05001503,
    0x00030061, 0x18060220, 0x00341505, 0x00000000,
    0x00031f61, 0x1d060220, 0x00341a05, 0x00000000,
    0x301b0070, 0x05001a03, 0x00031f61, 0x22060220,
    0x00341f05, 0x00000000, 0x30200070, 0x05001f03,
    0x00031f61, 0x07260220, 0x00340605, 0x00000000,
    0xa1121f40, 0x06021102, 0xa1171f40, 0x06021602,
    0xa11c1e40, 0x06021b02, 0xa1211d40, 0x06022002,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x00034131, 0x08240000, 0xfb000714, 0x000c0000,
    0x00031c61, 0x13260220, 0x00341205, 0x00000000,
    0x00031c61, 0x18260220, 0x00341705, 0x00000000,
    0x00031c61, 0x1d260220, 0x00341c05, 0x00000000,
    0x00031c61, 0x22260220, 0x00342105, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00034231, 0x14240000, 0xfb001314, 0x000c0000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00034331, 0x19240000, 0xfb001814, 0x000c0000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034431, 0x1e240000, 0xfb001d14, 0x000c0000,
    0x00032161, 0x0c060220, 0x00340805, 0x00000000,
    0x00032161, 0x0e060220, 0x00340a05, 0x00000000,
    0xa1240040, 0x08000a03, 0xa1290040, 0x09800a03,
    0x0003c161, 0x0c260220, 0x00340905, 0x00000000,
    0x0003c161, 0x0e260220, 0x00340b05, 0x00000000,
    0x00032261, 0x69050220, 0x00461705, 0x00000000,
    0x00032261, 0x6a050220, 0x00461605, 0x00000000,
    0x00032261, 0x6c050220, 0x00461505, 0x00000000,
    0x00031f61, 0x27060220, 0x00342405, 0x00000000,
    0x30250070, 0x0a002403, 0x00032361, 0x6b050220,
    0x00461905, 0x00000000, 0x00031f61, 0x2c060220,
    0x00342905, 0x00000000, 0xf02a0070, 0x09802903,
    0xa1261c40, 0x0b022502, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034531, 0x231c0000,
    0xfb002214, 0x00080000, 0xa12b1a40, 0x0b022a02,
    0x00031a61, 0x27260220, 0x00342605, 0x00000000,
    0x00031a61, 0x2c260220, 0x00342b05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034631, 0x00000000, 0xfb082c14, 0x000c6924,
    0xa12d3640, 0x0a800a03, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00032461, 0x6a050220,
    0x00461f05, 0x00000000, 0x00033661, 0x6b054220,
    0x00000000, 0x00000000, 0x00033661, 0x6c054220,
    0x00000000, 0x00000000, 0x00030061, 0x6d054220,
    0x00000000, 0x00000000, 0xf02e1d70, 0x0a802d03,
    0x00030061, 0x30060220, 0x00342d05, 0x00000000,
    0xa12f1a40, 0x0b022e02, 0x00031961, 0x30260220,
    0x00342f05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034731, 0x00000000,
    0xfb083014, 0x000c6a24, 0xa1313740, 0x0b800a03,
    0x00033761, 0x6b054220, 0x00000000, 0x00000000,
    0x00033761, 0x6c054220, 0x00000000, 0xaaabbaaa,
    0xf0321b70, 0x0b803103, 0x00030061, 0x34060220,
    0x00343105, 0x00000000, 0xa1331a40, 0x0b023202,
    0x00031961, 0x34260220, 0x00343305, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034831, 0x00000000, 0xfb083414, 0x00046b14,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xe16c2368, 0x00601a03, 0xa1353840, 0x00c00a03,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xe16d2368, 0x00601b03, 0xe16f2368, 0x00601c03,
    0x30361b70, 0x0a003503, 0x00030061, 0x38060220,
    0x00343505, 0x00000000, 0x00031c61, 0x6e050220,
    0x00466d05, 0x00000000, 0xa1371b40, 0x0b023602,
    0x00031961, 0x38260220, 0x00343705, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034931, 0x00000000, 0xfb083814, 0x000c6c24,
    0xa1393940, 0x01c00a03, 0xe1732468, 0x00601e03,
    0x00033961, 0x70050220, 0x00466f05, 0x00000000,
    0x00033961, 0x71050220, 0x00466d05, 0x00000000,
    0x00030061, 0x72050220, 0x00466d05, 0x00000000,
    0x303a1d70, 0x0a003903, 0x00030061, 0x3c060220,
    0x00343905, 0x00000000, 0xa13b1a40, 0x0b023a02,
    0x00031961, 0x3c260220, 0x00343b05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034a31, 0x00000000, 0xfb083c14, 0x000c7024,
    0xe1733a68, 0x00601f03, 0xa13d3a40, 0x02c00a03,
    0x00030061, 0x74054220, 0x00000000, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x00031b61, 0x71050220, 0x00467305, 0x00000000,
    0x00033a61, 0x72050220, 0x00467305, 0x00000000,
    0x303e1c70, 0x0a003d03, 0x00030061, 0x40060220,
    0x00343d05, 0x00000000, 0xa13f1a40, 0x0b023e02,
    0x00031961, 0x40260220, 0x00343f05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034b31, 0x00000000, 0xfb084014, 0x000c7124,
    0xa1413b40, 0x03c00a03, 0x00033b61, 0x72050220,
    0x00461a05, 0x00000000, 0x00033b61, 0x73054220,
    0x00000000, 0x00000000, 0x30421b70, 0x0a004103,
    0x00030061, 0x44060220, 0x00344105, 0x00000000,
    0xa1431a40, 0x0b024202, 0x00031961, 0x44260220,
    0x00344305, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00034c31, 0x00000000,
    0xfb080e14, 0x00047214, 0xe1762568, 0x00602303,
    0x00033c61, 0x73054220, 0x00000000, 0x00000000,
    0x00033b61, 0x74054220, 0x00000000, 0x00000000,
    0x00030061, 0x75054220, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034d31, 0x00000000, 0xfb084414, 0x000c7324,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0xe1742568, 0x00602403, 0xa1453d40, 0x04c00a03,
    0xe1772568, 0x00602503, 0x00033d61, 0x75054220,
    0x00000000, 0x00000000, 0x00033d61, 0x76054220,
    0x00000000, 0x00000000, 0x30461c70, 0x0a004503,
    0x00030061, 0x48060220, 0x00344505, 0x00000000,
    0xa1471a40, 0x0b024602, 0x00031961, 0x48260220,
    0x00344705, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034e31, 0x00000000,
    0xfb084814, 0x000c7424, 0x00030070, 0x00010660,
    0x26461e05, 0x00461f05, 0x01030022, 0x0001c060,
    0x00000088, 0x00000088, 0x00033e65, 0x49058220,
    0x02461e05, 0xffffffc0, 0x00033e61, 0x75054220,
    0x00000000, 0xffffffc0, 0xa14a1a40, 0x49000a02,
    0x304b1970, 0x0a004a03, 0x00030061, 0x4d060220,
    0x00344a05, 0x00000000, 0xa14c1a40, 0x0b024b02,
    0x00031961, 0x4d260220, 0x00344c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034e31, 0x00000000, 0xfb084d14, 0x0000750c,
    0x00030025, 0x00004600, 0x00000000, 0x00000010,
    0x00033e61, 0x76054220, 0x00000000, 0x7f800000,
    0x00033e61, 0x77054220, 0x00000000, 0x7f800000,
    0x00030061, 0x78054220, 0x00000000, 0x7f800000,
    0x00030061, 0x79054220, 0x00000000, 0xff800000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034f31, 0x00000000, 0xfb082714, 0x000c7624,
    0xa14e3e40, 0x09000a03, 0x00033f61, 0x77054220,
    0x00000000, 0xff800000, 0x00033f61, 0x78054220,
    0x00000000, 0xff800000, 0xf04f1b70, 0x09004e03,
    0x00030061, 0x51060220, 0x00344e05, 0x00000000,
    0xa1501a40, 0x0b024f02, 0x00031961, 0x51260220,
    0x00345005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034031, 0x00000000,
    0xfb085114, 0x00047714, 0x00033061, 0x78054220,
    0x00000000, 0x7f800000, 0x00033f61, 0x79054220,
    0x00000000, 0x7f800000, 0x00030061, 0x7a054220,
    0x00000000, 0x7f800000, 0x00030061, 0x7b054220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034131, 0x00000000,
    0xfb080c14, 0x000c7824, 0xa1523040, 0x01000803,
    0x00033161, 0x79054220, 0x00000000, 0xff800000,
    0x00033161, 0x7a054220, 0x00000000, 0xff800000,
    0x00033161, 0x7b054220, 0x00000000, 0xff800000,
    0x00030061, 0x7c054220, 0x00000000, 0x80000000,
    0x30531d70, 0x08005203, 0x00030061, 0x55060220,
    0x00345205, 0x00000000, 0xa1541a40, 0x09025302,
    0x00031961, 0x55260220, 0x00345405, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034231, 0x00000000, 0xfb085514, 0x000c7924,
    0xa1563240, 0x02000803, 0xa15b0040, 0x04800803,
    0xa1600040, 0x03000803, 0x00033261, 0x7a054220,
    0x00000000, 0x00000000, 0x00033261, 0x7b054220,
    0x00000000, 0x00000000, 0x30571d70, 0x08005603,
    0x00030061, 0x59060220, 0x00345605, 0x00000000,
    0x305c1e70, 0x08005b03, 0x00030061, 0x5e060220,
    0x00345b05, 0x00000000, 0x30611f70, 0x08006003,
    0x00030061, 0x63060220, 0x00346005, 0x00000000,
    0xa1581e40, 0x09025702, 0xa15d1d40, 0x09025c02,
    0xa1621c40, 0x09026102, 0x00031b61, 0x59260220,
    0x00345805, 0x00000000, 0x00031b61, 0x5e260220,
    0x00345d05, 0x00000000, 0x00031b61, 0x63260220,
    0x00346205, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034331, 0x00000000,
    0xfb086314, 0x00047a14, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00034431, 0x00000000,
    0xfb085e14, 0x00047a14, 0xa1643340, 0x04000803,
    0x00033461, 0x7b054220, 0x00000000, 0x00000000,
    0x30651a70, 0x08006403, 0x00030061, 0x67060220,
    0x00346405, 0x00000000, 0xa1661a40, 0x09026502,
    0x00031961, 0x67260220, 0x00346605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034531, 0x00000000, 0xfb086714, 0x00007b0c,
    0x00033261, 0x7c050220, 0x00461b05, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00032261, 0x7d050220, 0x00461405, 0x00000000,
    0x00032461, 0x7e050220, 0x00462005, 0x00000000,
    0x00032461, 0x7f050220, 0x00462105, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034631, 0x00000000, 0xfb085914, 0x000c7c24,
    0x80033661, 0x7e050220, 0x00460005, 0x00000000,
    0x80030931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_misc_batched_init_globals = {
   .prog_data = {
      .base.nr_params = 10,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 3120,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_misc_batched_init_globals_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_misc_batched_init_globals_printfs,
      .base.uses_atomic_load_store = false,
      .local_size = { 1, 1, 1 },
      .prog_offset = { 0, 0, 0 },
      .prog_mask = 1,
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
   .args = gfx125_misc_batched_init_globals_args,
   .code = gfx125_misc_batched_init_globals_code,
};
const char *gfx125_misc_batched_init_globals_sha1 = "cdfa3d07bae33022d1d39cf96446688504777488";

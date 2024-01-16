#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_misc_batched_init_globals_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_misc_batched_init_globals_args[] = {
   { 0, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g65<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(8)          g9<1>D          0D                              { align1 1Q };
mov(8)          g90<1>UD        g0.1<0,1,0>UD                   { align1 1Q };
add(1)          g66<1>UD        g65<0,1,0>UD    0x00000000UD    { align1 WE_all 1N I@3 compacted };
mul(8)          acc0<1>UD       g90<8,8,1>UD    0x0050UW        { align1 1Q I@2 };
mul(8)          g26<1>D         g90<1,1,0>D     80W             { align1 1Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g1UD            g66UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
mach(8)         g25<1>UD        g90<1,1,0>UD    0x00000050UD    { align1 1Q compacted AccWrEnable };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g23.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g23<2>F         g2<0,1,0>F                      { align1 1Q F@1 compacted };
mov(8)          g14<1>UD        g23.1<8,4,2>UD                  { align1 1Q F@1 };
add(8)          g15<1>D         g23<8,4,2>D     g26<1,1,0>D     { align1 1Q I@3 compacted };
cmp.l.f0.0(8)   g16<1>UD        g15<8,8,1>UD    g23<8,4,2>UD    { align1 1Q I@1 };
mov(8)          g91<2>UD        g15<4,4,1>UD                    { align1 1Q };
add(8)          g19<1>D         g15<1,1,0>D     16D             { align1 1Q compacted };
add(8)          g11<1>D         g15<1,1,0>D     32D             { align1 1Q compacted };
add(8)          g28<1>D         g15<1,1,0>D     48D             { align1 1Q compacted };
add(8)          g32<1>D         g15<1,1,0>D     64D             { align1 1Q compacted };
add3(8)         g17<1>D         g14<8,8,1>D     g25<8,8,1>D     -g16<1,1,1>D { align1 1Q I@6 };
cmp.l.f0.0(8)   g20<1>UD        g19<1,1,0>UD    g15<1,1,0>UD    { align1 1Q I@5 compacted };
mov(8)          g93<2>UD        g19<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g12<1>UD        g11<1,1,0>UD    g15<1,1,0>UD    { align1 1Q I@6 compacted };
mov(8)          g95<2>UD        g11<4,4,1>UD                    { align1 1Q };
mov(8)          g97<2>UD        g28<4,4,1>UD                    { align1 1Q I@7 };
cmp.l.f0.0(8)   g29<1>UD        g28<1,1,0>UD    g15<1,1,0>UD    { align1 1Q compacted };
mov(8)          g99<2>UD        g32<4,4,1>UD                    { align1 1Q I@7 };
cmp.l.f0.0(8)   g33<1>UD        g32<1,1,0>UD    g15<1,1,0>UD    { align1 1Q compacted };
mov(8)          g91.1<2>UD      g17<4,4,1>UD                    { align1 1Q I@7 };
add(8)          g22<1>D         -g20<1,1,0>D    g17<1,1,0>D     { align1 1Q I@7 compacted };
add(8)          g13<1>D         -g12<1,1,0>D    g17<1,1,0>D     { align1 1Q I@7 compacted };
add(8)          g30<1>D         -g29<1,1,0>D    g17<1,1,0>D     { align1 1Q I@6 compacted };
add(8)          g34<1>D         -g33<1,1,0>D    g17<1,1,0>D     { align1 1Q I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(8)         g18UD           g91UD           nullUD          0x0440f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $1 };
mov(8)          g93.1<2>UD      g22<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g95.1<2>UD      g13<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g97.1<2>UD      g30<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g99.1<2>UD      g34<4,4,1>UD                    { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(8)         g10UD           g93UD           nullUD          0x0440f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(8)         g27UD           g95UD           nullUD          0x0440f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g31UD           g97UD           nullUD          0x0440f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $4 };
mov(8)          g7<2>UD         g18<4,4,1>UD                    { align1 1Q $1.dst };
mov(8)          g3<2>UD         g20<4,4,1>UD                    { align1 1Q $1.dst };
add(8)          g36<1>D         g20<1,1,0>D     128D            { align1 1Q compacted };
add(8)          g39<1>D         g20<1,1,0>D     152D            { align1 1Q compacted };
mov(8)          g7.1<2>UD       g19<4,4,1>UD                    { align1 1Q @4 $1.dst };
mov(8)          g3.1<2>UD       g21<4,4,1>UD                    { align1 1Q @4 $1.dst };
mov(8)          g103<1>D        g13<8,8,1>D                     { align1 1Q $2.dst };
mov(8)          g104<1>D        g12<8,8,1>D                     { align1 1Q $2.dst };
mov(8)          g106<1>D        g11<8,8,1>D                     { align1 1Q $2.dst };
mov(8)          g5<2>UD         g36<4,4,1>UD                    { align1 1Q I@7 };
cmp.l.f0.0(8)   g37<1>UD        g36<1,1,0>UD    g20<1,1,0>UD    { align1 1Q compacted };
mov(8)          g105<1>D        g27<8,8,1>D                     { align1 1Q $3.dst };
mov(8)          g101<2>UD       g39<4,4,1>UD                    { align1 1Q I@7 };
cmp.l.f0.0(8)   g40<1>UD        g39<1,1,0>UD    0x00000098UD    { align1 1Q compacted };
add(8)          g38<1>D         -g37<1,1,0>D    g21<1,1,0>D     { align1 1Q I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g35UD           g99UD           nullUD          0x04307582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyz, L1STATE_L3MOCS dst_len = 3, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $5 };
add(8)          g41<1>D         -g40<1,1,0>D    g21<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g5.1<2>UD       g38<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g101.1<2>UD     g41<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g101UD          g103UD          0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat ) base_offset 0  { align1 1Q $6 };
add(8)          g42<1>D         g20<1,1,0>D     168D            { align1 1Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g106<1>D        g32<8,8,1>D                     { align1 1Q $4.dst };
mov(8)          g107<1>D        0D                              { align1 1Q };
mov(8)          g108<1>D        0D                              { align1 1Q };
mov(8)          g109<1>D        0D                              { align1 1Q };
cmp.l.f0.0(8)   g43<1>UD        g42<1,1,0>UD    0x000000a8UD    { align1 1Q I@5 compacted };
mov(8)          g104<2>UD       g42<4,4,1>UD                    { align1 1Q $6.src };
add(8)          g44<1>D         -g43<1,1,0>D    g21<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g104.1<2>UD     g44<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g104UD          g106UD          0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat ) base_offset 0  { align1 1Q $7 };
add(8)          g45<1>D         g20<1,1,0>D     184D            { align1 1Q compacted };
mov(8)          g109<1>D        0D                              { align1 1Q $7.src };
mov(8)          g110<1>D        -1431586134D                    { align1 1Q };
cmp.l.f0.0(8)   g46<1>UD        g45<1,1,0>UD    0x000000b8UD    { align1 1Q I@3 compacted };
mov(8)          g107<2>UD       g45<4,4,1>UD                    { align1 1Q $7.src };
add(8)          g47<1>D         -g46<1,1,0>D    g21<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g107.1<2>UD     g47<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g107UD          g109UD          0x04003586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat ) base_offset 0  { align1 1Q $8 };
shr(8)          g112<1>UD       g28<1,1,0>UD    0x00000006UD    { align1 1Q $3.dst compacted };
add(8)          g48<1>D         g20<1,1,0>D     12D             { align1 1Q compacted };
shr(8)          g113<1>UD       g29<1,1,0>UD    0x00000006UD    { align1 1Q $3.dst compacted };
shr(8)          g115<1>UD       g30<1,1,0>UD    0x00000006UD    { align1 1Q $3.dst compacted };
cmp.l.f0.0(8)   g49<1>UD        g48<1,1,0>UD    g20<1,1,0>UD    { align1 1Q I@3 compacted };
mov(8)          g110<2>UD       g48<4,4,1>UD                    { align1 1Q $8.src };
mov(8)          g114<1>D        g113<8,8,1>D                    { align1 1Q I@4 };
add(8)          g50<1>D         -g49<1,1,0>D    g21<1,1,0>D     { align1 1Q I@3 compacted };
mov(8)          g110.1<2>UD     g50<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g110UD          g112UD          0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat ) base_offset 0  { align1 1Q $9 };
add(8)          g52<1>D         g20<1,1,0>D     28D             { align1 1Q compacted };
shr(8)          g121<1>UD       g31<1,1,0>UD    0x00000006UD    { align1 1Q $4.dst compacted };
mov(8)          g118<1>D        g115<8,8,1>D                    { align1 1Q $9.src };
mov(8)          g119<1>D        g113<8,8,1>D                    { align1 1Q $9.src };
mov(8)          g120<1>D        g113<8,8,1>D                    { align1 1Q };
cmp.l.f0.0(8)   g53<1>UD        g52<1,1,0>UD    g20<1,1,0>UD    { align1 1Q I@5 compacted };
mov(8)          g116<2>UD       g52<4,4,1>UD                    { align1 1Q };
add(8)          g54<1>D         -g53<1,1,0>D    g21<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g116.1<2>UD     g54<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g116UD          g118UD          0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat ) base_offset 0  { align1 1Q $10 };
shr(8)          g123<1>UD       g32<1,1,0>UD    0x00000006UD    { align1 1Q compacted };
add(8)          g56<1>D         g20<1,1,0>D     44D             { align1 1Q compacted };
mov(8)          g124<1>D        0D                              { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(8)          g121<1>D        g123<8,8,1>D                    { align1 1Q I@3 };
mov(8)          g122<1>D        g123<8,8,1>D                    { align1 1Q };
cmp.l.f0.0(8)   g57<1>UD        g56<1,1,0>UD    g20<1,1,0>UD    { align1 1Q I@4 compacted };
mov(8)          g119<2>UD       g56<4,4,1>UD                    { align1 1Q $10.src };
add(8)          g58<1>D         -g57<1,1,0>D    g21<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g119.1<2>UD     g58<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g119UD          g121UD          0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat ) base_offset 0  { align1 1Q $11 };
add(8)          g60<1>D         g20<1,1,0>D     60D             { align1 1Q compacted };
mov(8)          g122<1>D        g28<8,8,1>D                     { align1 1Q $11.src };
mov(8)          g123<1>D        0D                              { align1 1Q $11.src };
cmp.l.f0.0(8)   g61<1>UD        g60<1,1,0>UD    g20<1,1,0>UD    { align1 1Q I@3 compacted };
mov(8)          g124<2>UD       g60<4,4,1>UD                    { align1 1Q $11.src };
add(8)          g62<1>D         -g61<1,1,0>D    g21<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g124.1<2>UD     g62<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(8)         nullUD          g3UD            g122UD          0x04003586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat ) base_offset 0  { align1 1Q $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
shr(8)          g4<1>UD         g35<1,1,0>UD    0x00000006UD    { align1 1Q $5.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g1<1>D          0D                              { align1 1Q };
mov(8)          g2<1>D          0D                              { align1 1Q F@1 };
mov(8)          g3<1>D          0D                              { align1 1Q $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g124UD          g1UD            0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat ) base_offset 0  { align1 1Q $13 };
shr(8)          g23<1>UD        g36<1,1,0>UD    0x00000006UD    { align1 1Q $5.dst compacted };
add(8)          g64<1>D         g20<1,1,0>D     76D             { align1 1Q compacted };
shr(8)          g26<1>UD        g37<1,1,0>UD    0x00000006UD    { align1 1Q $5.dst compacted };
mov(8)          g24<1>D         0D                              { align1 1Q };
mov(8)          g25<1>D         0D                              { align1 1Q };
cmp.l.f0.0(8)   g65<1>UD        g64<1,1,0>UD    g20<1,1,0>UD    { align1 1Q I@4 compacted };
mov(8)          g2<2>UD         g64<4,4,1>UD                    { align1 1Q $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(8)          g66<1>D         -g65<1,1,0>D    g21<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g2.1<2>UD       g66<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g2UD            g23UD           0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat ) base_offset 0  { align1 1Q $14 };
cmp.nz.f0.0(8)  null<1>D        g31<8,8,1>D     g32<8,8,1>D     { align1 1Q };
(+f0.0) if(8)   JIP:  LABEL0          UIP:  LABEL0              { align1 1Q };
and(8)          g68<1>UD        g31<8,8,1>UD    0xffffffc0UD    { align1 1Q };
mov(8)          g26<1>D         -64D                            { align1 1Q $14.src };
add(8)          g69<1>D         g20<1,1,0>D     g68<1,1,0>D     { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g70<1>UD        g69<1,1,0>UD    g20<1,1,0>UD    { align1 1Q I@1 compacted };
mov(8)          g24<2>UD        g69<4,4,1>UD                    { align1 1Q $14.src };
add(8)          g71<1>D         -g70<1,1,0>D    g21<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g24.1<2>UD      g71<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g24UD           g26UD           0x04001586                0x00000040
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat ) base_offset 0  { align1 1Q $14 };

LABEL0:
endif(8)        JIP:  LABEL1                                    { align1 1Q };

LABEL1:
mov(8)          g14<1>D         2139095040D                     { align1 1Q };
mov(8)          g15<1>D         2139095040D                     { align1 1Q };
mov(8)          g16<1>D         2139095040D                     { align1 1Q };
mov(8)          g17<1>D         -8388608D                       { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g5UD            g14UD           0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat ) base_offset 0  { align1 1Q $15 };
add(8)          g72<1>D         g20<1,1,0>D     144D            { align1 1Q compacted };
mov(8)          g35<1>D         -8388608D                       { align1 1Q };
mov(8)          g36<1>D         -8388608D                       { align1 1Q };
cmp.l.f0.0(8)   g73<1>UD        g72<1,1,0>UD    0x00000090UD    { align1 1Q I@3 compacted };
mov(8)          g15<2>UD        g72<4,4,1>UD                    { align1 1Q $15.src };
add(8)          g74<1>D         -g73<1,1,0>D    g21<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g15.1<2>UD      g74<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g15UD           g35UD           0x04003586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat ) base_offset 0  { align1 1Q $0 };
mov(8)          g36<1>D         2139095040D                     { align1 1Q $0.src };
mov(8)          g37<1>D         2139095040D                     { align1 1Q };
mov(8)          g38<1>D         2139095040D                     { align1 1Q };
mov(8)          g39<1>D         0D                              { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g7UD            g36UD           0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat ) base_offset 0  { align1 1Q $1 };
add(8)          g75<1>D         g18<1,1,0>D     16D             { align1 1Q compacted };
mov(8)          g39<1>D         -8388608D                       { align1 1Q $1.src };
mov(8)          g40<1>D         -8388608D                       { align1 1Q };
mov(8)          g41<1>D         -8388608D                       { align1 1Q };
mov(8)          g42<1>D         -2147483648D                    { align1 1Q };
cmp.l.f0.0(8)   g76<1>UD        g75<1,1,0>UD    0x00000010UD    { align1 1Q I@5 compacted };
mov(8)          g37<2>UD        g75<4,4,1>UD                    { align1 1Q $1.src };
add(8)          g77<1>D         -g76<1,1,0>D    g19<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g37.1<2>UD      g77<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g37UD           g39UD           0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat ) base_offset 0  { align1 1Q $2 };
add(8)          g78<1>D         g18<1,1,0>D     32D             { align1 1Q compacted };
add(8)          g81<1>D         g18<1,1,0>D     72D             { align1 1Q compacted };
add(8)          g84<1>D         g18<1,1,0>D     48D             { align1 1Q compacted };
mov(8)          g44<1>D         0D                              { align1 1Q };
mov(8)          g45<1>D         0D                              { align1 1Q };
cmp.l.f0.0(8)   g79<1>UD        g78<1,1,0>UD    g18<1,1,0>UD    { align1 1Q I@5 compacted };
mov(8)          g47<2>UD        g78<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g82<1>UD        g81<1,1,0>UD    g18<1,1,0>UD    { align1 1Q I@6 compacted };
mov(8)          g42<2>UD        g81<4,4,1>UD                    { align1 1Q $2.src };
cmp.l.f0.0(8)   g85<1>UD        g84<1,1,0>UD    g18<1,1,0>UD    { align1 1Q I@7 compacted };
mov(8)          g40<2>UD        g84<4,4,1>UD                    { align1 1Q $2.src };
add(8)          g80<1>D         -g79<1,1,0>D    g19<1,1,0>D     { align1 1Q I@6 compacted };
add(8)          g83<1>D         -g82<1,1,0>D    g19<1,1,0>D     { align1 1Q I@5 compacted };
add(8)          g86<1>D         -g85<1,1,0>D    g19<1,1,0>D     { align1 1Q I@4 compacted };
mov(8)          g47.1<2>UD      g80<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g42.1<2>UD      g83<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g40.1<2>UD      g86<4,4,1>UD                    { align1 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g40UD           g44UD           0x04003586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat ) base_offset 0  { align1 1Q $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(8)         nullUD          g42UD           g44UD           0x04003586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat ) base_offset 0  { align1 1Q $4 };
add(8)          g87<1>D         g18<1,1,0>D     64D             { align1 1Q compacted };
cmp.l.f0.0(8)   g88<1>UD        g87<1,1,0>UD    g18<1,1,0>UD    { align1 1Q I@1 compacted };
mov(8)          g45<2>UD        g87<4,4,1>UD                    { align1 1Q $4.src };
add(8)          g89<1>D         -g88<1,1,0>D    g19<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g45.1<2>UD      g89<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g45UD           g9UD            0x04001586                0x00000040
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat ) base_offset 0  { align1 1Q $5 };
mov(8)          g49<1>D         g29<8,8,1>D                     { align1 1Q };
mov(8)          g50<1>D         g10<8,8,1>D                     { align1 1Q $2.dst };
mov(8)          g51<1>D         g33<8,8,1>D                     { align1 1Q $4.dst };
mov(8)          g52<1>D         g34<8,8,1>D                     { align1 1Q $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g47UD           g49UD           0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat ) base_offset 0  { align1 1Q $6 };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
mov(16)         acc0<1>F        0x0F             /* 0F */       { align1 WE_all 1H I@1 };
send(8)         nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1Q A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_batched_init_globals_code[] = {
    0x80000065, 0x41058220, 0x02000004, 0xffffffc0,
    0x00030061, 0x09054660, 0x00000000, 0x00000000,
    0x00030061, 0x5a050220, 0x00000024, 0x00000000,
    0xe2421b40, 0x00014103, 0x00031a41, 0x20018220,
    0x01465a05, 0x00500050, 0x611a0041, 0x05005a02,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00420c, 0x00340000,
    0xfe190049, 0x05005a03, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x21170061, 0x001102cc,
    0x21171161, 0x00110204, 0x00031161, 0x0e050220,
    0x00441726, 0x00000000, 0xa10f1b40, 0x1a0e1702,
    0x00031970, 0x10050220, 0x52460f05, 0x00441706,
    0x00030061, 0x5b060220, 0x00340f05, 0x00000000,
    0xa1130040, 0x01000f03, 0xa10b0040, 0x02000f03,
    0xa11c0040, 0x03000f03, 0xa1200040, 0x04000f03,
    0x00031e52, 0x11040e68, 0x0e2e0e05, 0x10051905,
    0x30141d70, 0x0f001303, 0x00030061, 0x5d060220,
    0x00341305, 0x00000000, 0x300c1e70, 0x0f000b03,
    0x00030061, 0x5f060220, 0x00340b05, 0x00000000,
    0x00031f61, 0x61060220, 0x00341c05, 0x00000000,
    0x301d0070, 0x0f001c03, 0x00031f61, 0x63060220,
    0x00342005, 0x00000000, 0x30210070, 0x0f002003,
    0x00031f61, 0x5b260220, 0x00341105, 0x00000000,
    0xa1161f40, 0x11021402, 0xa10d1f40, 0x11020c02,
    0xa11e1e40, 0x11021d02, 0xa1221d40, 0x11022102,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00034131, 0x12240000, 0xfb045b14, 0x003c0000,
    0x00031c61, 0x5d260220, 0x00341605, 0x00000000,
    0x00031c61, 0x5f260220, 0x00340d05, 0x00000000,
    0x00031c61, 0x61260220, 0x00341e05, 0x00000000,
    0x00031c61, 0x63260220, 0x00342205, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00034231, 0x0a240000, 0xfb045d14, 0x003c0000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00034331, 0x1b240000, 0xfb045f14, 0x003c0000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034431, 0x1f240000, 0xfb046114, 0x003c0000,
    0x00032161, 0x07060220, 0x00341205, 0x00000000,
    0x00032161, 0x03060220, 0x00341405, 0x00000000,
    0xa1240040, 0x08001403, 0xa1270040, 0x09801403,
    0x0003c161, 0x07260220, 0x00341305, 0x00000000,
    0x0003c161, 0x03260220, 0x00341505, 0x00000000,
    0x00032261, 0x67050660, 0x00460d05, 0x00000000,
    0x00032261, 0x68050660, 0x00460c05, 0x00000000,
    0x00032261, 0x6a050660, 0x00460b05, 0x00000000,
    0x00031f61, 0x05060220, 0x00342405, 0x00000000,
    0x30250070, 0x14002403, 0x00032361, 0x69050660,
    0x00461b05, 0x00000000, 0x00031f61, 0x65060220,
    0x00342705, 0x00000000, 0xf0280070, 0x09802703,
    0xa1261c40, 0x15022502, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034531, 0x231c0000,
    0xfb046314, 0x001c0000, 0xa1291a40, 0x15022802,
    0x00031a61, 0x05260220, 0x00342605, 0x00000000,
    0x00031a61, 0x65260220, 0x00342905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034631, 0x00000000, 0xfb0c6514, 0x003c6724,
    0xa12a0040, 0x0a801403, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00032461, 0x6a050660,
    0x00462005, 0x00000000, 0x00030061, 0x6b054660,
    0x00000000, 0x00000000, 0x00030061, 0x6c054660,
    0x00000000, 0x00000000, 0x00030061, 0x6d054660,
    0x00000000, 0x00000000, 0xf02b1d70, 0x0a802a03,
    0x00033661, 0x68060220, 0x00342a05, 0x00000000,
    0xa12c1a40, 0x15022b02, 0x00031961, 0x68260220,
    0x00342c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034731, 0x00000000,
    0xfb0c6814, 0x003c6a24, 0xa12d0040, 0x0b801403,
    0x00033761, 0x6d054660, 0x00000000, 0x00000000,
    0x00030061, 0x6e054660, 0x00000000, 0xaaabbaaa,
    0xf02e1b70, 0x0b802d03, 0x00033761, 0x6b060220,
    0x00342d05, 0x00000000, 0xa12f1a40, 0x15022e02,
    0x00031961, 0x6b260220, 0x00342f05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034831, 0x00000000, 0xfb0c6b14, 0x000c6d14,
    0xe1702368, 0x00601c03, 0xa1300040, 0x00c01403,
    0xe1712368, 0x00601d03, 0xe1732368, 0x00601e03,
    0x30311b70, 0x14003003, 0x00033861, 0x6e060220,
    0x00343005, 0x00000000, 0x00031c61, 0x72050660,
    0x00467105, 0x00000000, 0xa1321b40, 0x15023102,
    0x00031961, 0x6e260220, 0x00343205, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034931, 0x00000000, 0xfb0c6e14, 0x003c7024,
    0xa1340040, 0x01c01403, 0xe1792468, 0x00601f03,
    0x00033961, 0x76050660, 0x00467305, 0x00000000,
    0x00033961, 0x77050660, 0x00467105, 0x00000000,
    0x00030061, 0x78050660, 0x00467105, 0x00000000,
    0x30351d70, 0x14003403, 0x00030061, 0x74060220,
    0x00343405, 0x00000000, 0xa1361a40, 0x15023502,
    0x00031961, 0x74260220, 0x00343605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034a31, 0x00000000, 0xfb0c7414, 0x003c7624,
    0xe17b0068, 0x00602003, 0xa1380040, 0x02c01403,
    0x00030061, 0x7c054660, 0x00000000, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x00031b61, 0x79050660, 0x00467b05, 0x00000000,
    0x00030061, 0x7a050660, 0x00467b05, 0x00000000,
    0x30391c70, 0x14003803, 0x00033a61, 0x77060220,
    0x00343805, 0x00000000, 0xa13a1a40, 0x15023902,
    0x00031961, 0x77260220, 0x00343a05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034b31, 0x00000000, 0xfb0c7714, 0x003c7924,
    0xa13c0040, 0x03c01403, 0x00033b61, 0x7a050660,
    0x00461c05, 0x00000000, 0x00033b61, 0x7b054660,
    0x00000000, 0x00000000, 0x303d1b70, 0x14003c03,
    0x00033b61, 0x7c060220, 0x00343c05, 0x00000000,
    0xa13e1a40, 0x15023d02, 0x00031961, 0x7c260220,
    0x00343e05, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00034c31, 0x00000000,
    0xfb0c0314, 0x000c7a14, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0xe1042568, 0x00602303,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x01054660, 0x00000000, 0x00000000,
    0x00031161, 0x02054660, 0x00000000, 0x00000000,
    0x00033c61, 0x03054660, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034d31, 0x00000000, 0xfb0c7c14, 0x003c0124,
    0xe1172568, 0x00602403, 0xa1400040, 0x04c01403,
    0xe11a2568, 0x00602503, 0x00030061, 0x18054660,
    0x00000000, 0x00000000, 0x00030061, 0x19054660,
    0x00000000, 0x00000000, 0x30411c70, 0x14004003,
    0x00033d61, 0x02060220, 0x00344005, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa1421a40, 0x15024102, 0x00031961, 0x02260220,
    0x00344205, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034e31, 0x00000000,
    0xfb0c0214, 0x003c1724, 0x00030070, 0x00010660,
    0x26461f05, 0x00462005, 0x01030022, 0x0001c060,
    0x00000088, 0x00000088, 0x00030065, 0x44058220,
    0x02461f05, 0xffffffc0, 0x00033e61, 0x1a054660,
    0x00000000, 0xffffffc0, 0xa1451a40, 0x44001402,
    0x30461970, 0x14004503, 0x00033e61, 0x18060220,
    0x00344505, 0x00000000, 0xa1471a40, 0x15024602,
    0x00031961, 0x18260220, 0x00344705, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034e31, 0x00000000, 0xfb0c1814, 0x00041a0c,
    0x00030025, 0x00004600, 0x00000000, 0x00000010,
    0x00030061, 0x0e054660, 0x00000000, 0x7f800000,
    0x00030061, 0x0f054660, 0x00000000, 0x7f800000,
    0x00030061, 0x10054660, 0x00000000, 0x7f800000,
    0x00030061, 0x11054660, 0x00000000, 0xff800000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034f31, 0x00000000, 0xfb0c0514, 0x003c0e24,
    0xa1480040, 0x09001403, 0x00030061, 0x23054660,
    0x00000000, 0xff800000, 0x00030061, 0x24054660,
    0x00000000, 0xff800000, 0xf0491b70, 0x09004803,
    0x00033f61, 0x0f060220, 0x00344805, 0x00000000,
    0xa14a1a40, 0x15024902, 0x00031961, 0x0f260220,
    0x00344a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034031, 0x00000000,
    0xfb0c0f14, 0x000c2314, 0x00033061, 0x24054660,
    0x00000000, 0x7f800000, 0x00030061, 0x25054660,
    0x00000000, 0x7f800000, 0x00030061, 0x26054660,
    0x00000000, 0x7f800000, 0x00030061, 0x27054660,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034131, 0x00000000,
    0xfb0c0714, 0x003c2424, 0xa14b0040, 0x01001203,
    0x00033161, 0x27054660, 0x00000000, 0xff800000,
    0x00030061, 0x28054660, 0x00000000, 0xff800000,
    0x00030061, 0x29054660, 0x00000000, 0xff800000,
    0x00030061, 0x2a054660, 0x00000000, 0x80000000,
    0xf04c1d70, 0x01004b03, 0x00033161, 0x25060220,
    0x00344b05, 0x00000000, 0xa14d1a40, 0x13024c02,
    0x00031961, 0x25260220, 0x00344d05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034231, 0x00000000, 0xfb0c2514, 0x003c2724,
    0xa14e0040, 0x02001203, 0xa1510040, 0x04801203,
    0xa1540040, 0x03001203, 0x00030061, 0x2c054660,
    0x00000000, 0x00000000, 0x00030061, 0x2d054660,
    0x00000000, 0x00000000, 0x304f1d70, 0x12004e03,
    0x00030061, 0x2f060220, 0x00344e05, 0x00000000,
    0x30521e70, 0x12005103, 0x00033261, 0x2a060220,
    0x00345105, 0x00000000, 0x30551f70, 0x12005403,
    0x00033261, 0x28060220, 0x00345405, 0x00000000,
    0xa1501e40, 0x13024f02, 0xa1531d40, 0x13025202,
    0xa1561c40, 0x13025502, 0x00031b61, 0x2f260220,
    0x00345005, 0x00000000, 0x00031b61, 0x2a260220,
    0x00345305, 0x00000000, 0x00031b61, 0x28260220,
    0x00345605, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034331, 0x00000000,
    0xfb0c2814, 0x000c2c14, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00034431, 0x00000000,
    0xfb0c2a14, 0x000c2c14, 0xa1570040, 0x04001203,
    0x30581970, 0x12005703, 0x00033461, 0x2d060220,
    0x00345705, 0x00000000, 0xa1591a40, 0x13025802,
    0x00031961, 0x2d260220, 0x00345905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034531, 0x00000000, 0xfb0c2d14, 0x0004090c,
    0x00030061, 0x31050660, 0x00461d05, 0x00000000,
    0x00032261, 0x32050660, 0x00460a05, 0x00000000,
    0x00032461, 0x33050660, 0x00462105, 0x00000000,
    0x00032461, 0x34050660, 0x00462205, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034631, 0x00000000, 0xfb0c2f14, 0x003c3124,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80041961, 0x20014aa0, 0x00000000, 0x00000000,
    0x80030931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_misc_batched_init_globals = {
   .prog_data = {
      .base.nr_params = 10,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 3152,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_misc_batched_init_globals_relocs,
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
const char *gfx125_misc_batched_init_globals_sha1 = "bf532736b06abe0f7492ce6854ee894d274787f0";

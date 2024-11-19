#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_misc_batched_init_globals_relocs[] = {
};
static const u_printf_info gfx125_misc_batched_init_globals_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_misc_batched_init_globals_args[] = {
   { 0, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g34<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(8)          g81<1>UD        g0.1<0,1,0>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g34UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mul(8)          acc0<1>UD       g81<8,8,1>UD    0x0050UW        { align1 1Q I@1 };
mul(8)          g10<1>D         g81<1,1,0>D     80W             { align1 1Q compacted };
mach(8)         g9<1>UD         g81<1,1,0>UD    0x00000050UD    { align1 1Q compacted AccWrEnable };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(8)          g11<1>D         g2<0,1,0>D      g10<1,1,0>D     { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g12<1>UD        g11<1,1,0>UD    g2<0,1,0>UD     { align1 1Q I@1 compacted };
mov(8)          g82<2>UD        g11<4,4,1>UD                    { align1 1Q };
add(8)          g15<1>D         g11<1,1,0>D     16D             { align1 1Q compacted };
add(8)          g20<1>D         g11<1,1,0>D     32D             { align1 1Q compacted };
add(8)          g24<1>D         g11<1,1,0>D     48D             { align1 1Q compacted };
add(8)          g28<1>D         g11<1,1,0>D     64D             { align1 1Q compacted };
add3(8)         g13<1>D         g2.1<0,1,0>D    g9<8,8,1>D      -g12<1,1,1>D { align1 1Q I@6 };
cmp.l.f0.0(8)   g16<1>UD        g15<1,1,0>UD    g11<1,1,0>UD    { align1 1Q I@5 compacted };
mov(8)          g84<2>UD        g15<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g21<1>UD        g20<1,1,0>UD    g11<1,1,0>UD    { align1 1Q I@6 compacted };
mov(8)          g86<2>UD        g20<4,4,1>UD                    { align1 1Q };
mov(8)          g88<2>UD        g24<4,4,1>UD                    { align1 1Q I@7 };
cmp.l.f0.0(8)   g25<1>UD        g24<1,1,0>UD    g11<1,1,0>UD    { align1 1Q compacted };
mov(8)          g90<2>UD        g28<4,4,1>UD                    { align1 1Q I@7 };
cmp.l.f0.0(8)   g29<1>UD        g28<1,1,0>UD    g11<1,1,0>UD    { align1 1Q compacted };
mov(8)          g82.1<2>UD      g13<4,4,1>UD                    { align1 1Q I@7 };
add(8)          g18<1>D         -g16<1,1,0>D    g13<1,1,0>D     { align1 1Q I@7 compacted };
add(8)          g22<1>D         -g21<1,1,0>D    g13<1,1,0>D     { align1 1Q I@7 compacted };
add(8)          g26<1>D         -g25<1,1,0>D    g13<1,1,0>D     { align1 1Q I@6 compacted };
add(8)          g30<1>D         -g29<1,1,0>D    g13<1,1,0>D     { align1 1Q I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(8)         g14UD           g82UD           nullUD          0x0440f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $1 };
mov(8)          g84.1<2>UD      g18<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g86.1<2>UD      g22<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g88.1<2>UD      g26<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g90.1<2>UD      g30<4,4,1>UD                    { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(8)         g19UD           g84UD           nullUD          0x0440f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(8)         g23UD           g86UD           nullUD          0x0440f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g27UD           g88UD           nullUD          0x0440f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $4 };
mov(8)          g7<2>UD         g14<4,4,1>UD                    { align1 1Q $1.dst };
mov(8)          g3<2>UD         g16<4,4,1>UD                    { align1 1Q $1.dst };
add(8)          g32<1>D         g16<1,1,0>D     128D            { align1 1Q compacted };
add(8)          g35<1>D         g16<1,1,0>D     152D            { align1 1Q compacted };
mov(8)          g7.1<2>UD       g15<4,4,1>UD                    { align1 1Q @4 $1.dst };
mov(8)          g3.1<2>UD       g17<4,4,1>UD                    { align1 1Q @4 $1.dst };
mov(8)          g94<1>UD        g22<8,8,1>UD                    { align1 1Q $2.dst };
mov(8)          g95<1>UD        g21<8,8,1>UD                    { align1 1Q $2.dst };
mov(8)          g97<1>UD        g20<8,8,1>UD                    { align1 1Q $2.dst };
mov(8)          g5<2>UD         g32<4,4,1>UD                    { align1 1Q I@7 };
cmp.l.f0.0(8)   g33<1>UD        g32<1,1,0>UD    g16<1,1,0>UD    { align1 1Q compacted };
mov(8)          g96<1>UD        g23<8,8,1>UD                    { align1 1Q $3.dst };
mov(8)          g92<2>UD        g35<4,4,1>UD                    { align1 1Q I@7 };
cmp.l.f0.0(8)   g36<1>UD        g35<1,1,0>UD    0x00000098UD    { align1 1Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(8)          g34<1>D         -g33<1,1,0>D    g17<1,1,0>D     { align1 1Q I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g31UD           g90UD           nullUD          0x04307582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyz, L1STATE_L3MOCS dst_len = 3, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $5 };
add(8)          g37<1>D         -g36<1,1,0>D    g17<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g5.1<2>UD       g34<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g92.1<2>UD      g37<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g92UD           g94UD           0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $6 };
add(8)          g38<1>D         g16<1,1,0>D     168D            { align1 1Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g97<1>UD        g28<8,8,1>UD                    { align1 1Q $4.dst };
mov(8)          g98<1>UD        0x00000000UD                    { align1 1Q };
mov(8)          g99<1>UD        0x00000000UD                    { align1 1Q };
mov(8)          g100<1>UD       0x00000000UD                    { align1 1Q };
cmp.l.f0.0(8)   g39<1>UD        g38<1,1,0>UD    0x000000a8UD    { align1 1Q I@5 compacted };
mov(8)          g95<2>UD        g38<4,4,1>UD                    { align1 1Q $6.src };
add(8)          g40<1>D         -g39<1,1,0>D    g17<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g95.1<2>UD      g40<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g95UD           g97UD           0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $7 };
add(8)          g41<1>D         g16<1,1,0>D     184D            { align1 1Q compacted };
mov(8)          g100<1>D        0D                              { align1 1Q $7.src };
mov(8)          g101<1>D        -1431586134D                    { align1 1Q };
cmp.l.f0.0(8)   g42<1>UD        g41<1,1,0>UD    0x000000b8UD    { align1 1Q I@3 compacted };
mov(8)          g98<2>UD        g41<4,4,1>UD                    { align1 1Q $7.src };
add(8)          g43<1>D         -g42<1,1,0>D    g17<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g98.1<2>UD      g43<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g98UD           g100UD          0x04003586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1Q $8 };
shr(8)          g103<1>UD       g24<1,1,0>UD    0x00000006UD    { align1 1Q $3.dst compacted };
add(8)          g44<1>D         g16<1,1,0>D     12D             { align1 1Q compacted };
shr(8)          g104<1>UD       g25<1,1,0>UD    0x00000006UD    { align1 1Q $3.dst compacted };
shr(8)          g106<1>UD       g26<1,1,0>UD    0x00000006UD    { align1 1Q $3.dst compacted };
cmp.l.f0.0(8)   g45<1>UD        g44<1,1,0>UD    g16<1,1,0>UD    { align1 1Q I@3 compacted };
mov(8)          g101<2>UD       g44<4,4,1>UD                    { align1 1Q $8.src };
mov(8)          g105<1>UD       g104<8,8,1>UD                   { align1 1Q I@4 };
add(8)          g46<1>D         -g45<1,1,0>D    g17<1,1,0>D     { align1 1Q I@3 compacted };
mov(8)          g101.1<2>UD     g46<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g101UD          g103UD          0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $9 };
add(8)          g47<1>D         g16<1,1,0>D     28D             { align1 1Q compacted };
shr(8)          g112<1>UD       g27<1,1,0>UD    0x00000006UD    { align1 1Q $4.dst compacted };
mov(8)          g109<1>UD       g106<8,8,1>UD                   { align1 1Q $9.src };
mov(8)          g110<1>UD       g104<8,8,1>UD                   { align1 1Q $9.src };
mov(8)          g111<1>UD       g104<8,8,1>UD                   { align1 1Q };
cmp.l.f0.0(8)   g48<1>UD        g47<1,1,0>UD    g16<1,1,0>UD    { align1 1Q I@5 compacted };
mov(8)          g107<2>UD       g47<4,4,1>UD                    { align1 1Q };
add(8)          g49<1>D         -g48<1,1,0>D    g17<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g107.1<2>UD     g49<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g107UD          g109UD          0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $10 };
shr(8)          g114<1>UD       g28<1,1,0>UD    0x00000006UD    { align1 1Q compacted };
add(8)          g50<1>D         g16<1,1,0>D     44D             { align1 1Q compacted };
mov(8)          g115<1>UD       0x00000000UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(8)          g112<1>UD       g114<8,8,1>UD                   { align1 1Q I@3 };
mov(8)          g113<1>UD       g114<8,8,1>UD                   { align1 1Q };
cmp.l.f0.0(8)   g51<1>UD        g50<1,1,0>UD    g16<1,1,0>UD    { align1 1Q I@4 compacted };
mov(8)          g110<2>UD       g50<4,4,1>UD                    { align1 1Q $10.src };
add(8)          g52<1>D         -g51<1,1,0>D    g17<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g110.1<2>UD     g52<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g110UD          g112UD          0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $11 };
add(8)          g53<1>D         g16<1,1,0>D     60D             { align1 1Q compacted };
mov(8)          g113<1>UD       g24<8,8,1>UD                    { align1 1Q $11.src };
mov(8)          g114<1>UD       0x00000000UD                    { align1 1Q $11.src };
cmp.l.f0.0(8)   g54<1>UD        g53<1,1,0>UD    g16<1,1,0>UD    { align1 1Q I@3 compacted };
mov(8)          g115<2>UD       g53<4,4,1>UD                    { align1 1Q $11.src };
add(8)          g55<1>D         -g54<1,1,0>D    g17<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g115.1<2>UD     g55<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(8)         nullUD          g3UD            g113UD          0x04003586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1Q $12 };
shr(8)          g120<1>UD       g31<1,1,0>UD    0x00000006UD    { align1 1Q $5.dst compacted };
mov(8)          g117<1>UD       0x00000000UD                    { align1 1Q };
mov(8)          g118<1>UD       0x00000000UD                    { align1 1Q };
mov(8)          g119<1>UD       0x00000000UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g115UD          g117UD          0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
shr(8)          g120<1>UD       g32<1,1,0>UD    0x00000006UD    { align1 1Q $5.dst compacted };
add(8)          g56<1>D         g16<1,1,0>D     76D             { align1 1Q compacted };
shr(8)          g123<1>UD       g33<1,1,0>UD    0x00000006UD    { align1 1Q $5.dst compacted };
mov(8)          g121<1>UD       0x00000000UD                    { align1 1Q };
mov(8)          g122<1>UD       0x00000000UD                    { align1 1Q };
cmp.l.f0.0(8)   g57<1>UD        g56<1,1,0>UD    g16<1,1,0>UD    { align1 1Q I@4 compacted };
mov(8)          g118<2>UD       g56<4,4,1>UD                    { align1 1Q $13.src };
add(8)          g58<1>D         -g57<1,1,0>D    g17<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g118.1<2>UD     g58<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g118UD          g120UD          0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $14 };
cmp.nz.f0.0(8)  null<1>D        g27<8,8,1>D     g28<8,8,1>D     { align1 1Q };
(+f0.0) if(8)   JIP:  LABEL0          UIP:  LABEL0              { align1 1Q };
and(8)          g59<1>UD        g27<8,8,1>UD    0xffffffc0UD    { align1 1Q };
mov(8)          g123<1>D        -64D                            { align1 1Q $14.src };
add(8)          g60<1>D         g16<1,1,0>D     g59<1,1,0>D     { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g61<1>UD        g60<1,1,0>UD    g16<1,1,0>UD    { align1 1Q I@1 compacted };
mov(8)          g121<2>UD       g60<4,4,1>UD                    { align1 1Q $14.src };
add(8)          g62<1>D         -g61<1,1,0>D    g17<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g121.1<2>UD     g62<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g121UD          g123UD          0x04001586                0x00000040
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1Q $14 };

LABEL0:
endif(8)        JIP:  LABEL1                                    { align1 1Q };

LABEL1:
mov(8)          g124<1>D        2139095040D                     { align1 1Q };
mov(8)          g125<1>D        2139095040D                     { align1 1Q };
mov(8)          g126<1>D        2139095040D                     { align1 1Q };
mov(8)          g127<1>D        -8388608D                       { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g5UD            g124UD          0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $15 };
add(8)          g63<1>D         g16<1,1,0>D     144D            { align1 1Q compacted };
mov(8)          g2<1>D          -8388608D                       { align1 1Q };
mov(8)          g3<1>D          -8388608D                       { align1 1Q $12.src };
cmp.l.f0.0(8)   g64<1>UD        g63<1,1,0>UD    0x00000090UD    { align1 1Q I@3 compacted };
mov(8)          g125<2>UD       g63<4,4,1>UD                    { align1 1Q $15.src };
add(8)          g65<1>D         -g64<1,1,0>D    g17<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g125.1<2>UD     g65<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g125UD          g2UD            0x04003586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1Q $0 };
mov(8)          g3<1>D          2139095040D                     { align1 1Q $0.src };
mov(8)          g4<1>D          2139095040D                     { align1 1Q $12.src };
mov(8)          g5<1>D          2139095040D                     { align1 1Q $15.src };
mov(8)          g6<1>D          0D                              { align1 1Q $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g7UD            g3UD            0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $1 };
add(8)          g66<1>D         g14<1,1,0>D     16D             { align1 1Q compacted };
mov(8)          g6<1>D          -8388608D                       { align1 1Q $1.src };
mov(8)          g7<1>D          -8388608D                       { align1 1Q $1.src };
mov(8)          g8<1>D          -8388608D                       { align1 1Q $1.src };
mov(8)          g9<1>D          -2147483648D                    { align1 1Q };
cmp.l.f0.0(8)   g67<1>UD        g66<1,1,0>UD    g14<1,1,0>UD    { align1 1Q I@5 compacted };
mov(8)          g4<2>UD         g66<4,4,1>UD                    { align1 1Q $1.src };
add(8)          g68<1>D         -g67<1,1,0>D    g15<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g4.1<2>UD       g68<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g4UD            g6UD            0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $2 };
add(8)          g69<1>D         g14<1,1,0>D     32D             { align1 1Q compacted };
add(8)          g72<1>D         g14<1,1,0>D     72D             { align1 1Q compacted };
add(8)          g75<1>D         g14<1,1,0>D     48D             { align1 1Q compacted };
mov(8)          g9<1>D          0D                              { align1 1Q $2.src };
mov(8)          g10<1>D         0D                              { align1 1Q };
cmp.l.f0.0(8)   g70<1>UD        g69<1,1,0>UD    g14<1,1,0>UD    { align1 1Q I@5 compacted };
mov(8)          g31<2>UD        g69<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g73<1>UD        g72<1,1,0>UD    g14<1,1,0>UD    { align1 1Q I@6 compacted };
mov(8)          g11<2>UD        g72<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g76<1>UD        g75<1,1,0>UD    g14<1,1,0>UD    { align1 1Q I@7 compacted };
mov(8)          g7<2>UD         g75<4,4,1>UD                    { align1 1Q $2.src };
add(8)          g71<1>D         -g70<1,1,0>D    g15<1,1,0>D     { align1 1Q I@6 compacted };
add(8)          g74<1>D         -g73<1,1,0>D    g15<1,1,0>D     { align1 1Q I@5 compacted };
add(8)          g77<1>D         -g76<1,1,0>D    g15<1,1,0>D     { align1 1Q I@4 compacted };
mov(8)          g31.1<2>UD      g71<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g11.1<2>UD      g74<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g7.1<2>UD       g77<4,4,1>UD                    { align1 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g7UD            g9UD            0x04003586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1Q $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(8)         nullUD          g11UD           g9UD            0x04003586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1Q $4 };
add(8)          g78<1>D         g14<1,1,0>D     64D             { align1 1Q compacted };
mov(8)          g18<1>D         0D                              { align1 1Q };
cmp.l.f0.0(8)   g79<1>UD        g78<1,1,0>UD    g14<1,1,0>UD    { align1 1Q I@2 compacted };
mov(8)          g12<2>UD        g78<4,4,1>UD                    { align1 1Q $4.src };
add(8)          g80<1>D         -g79<1,1,0>D    g15<1,1,0>D     { align1 1Q I@2 compacted };
mov(8)          g12.1<2>UD      g80<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g12UD           g18UD           0x04001586                0x00000040
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1Q $5 };
mov(8)          g33<1>UD        g25<8,8,1>UD                    { align1 1Q };
mov(8)          g34<1>UD        g19<8,8,1>UD                    { align1 1Q $2.dst };
mov(8)          g35<1>UD        g29<8,8,1>UD                    { align1 1Q $4.dst };
mov(8)          g36<1>UD        g30<8,8,1>UD                    { align1 1Q $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g31UD           g33UD           0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $6 };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q $0.src };
send(8)         nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1Q A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_batched_init_globals_code[] = {
    0x80000065, 0x22058220, 0x02000004, 0xffffffc0,
    0x00030061, 0x51050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00220c, 0x00340000,
    0x00031941, 0x20018220, 0x01465105, 0x00500050,
    0x610a0041, 0x05005102, 0xfe090049, 0x05005103,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa10b1a40, 0x0a010202, 0x300c1970, 0x02100b03,
    0x00030061, 0x52060220, 0x00340b05, 0x00000000,
    0xa10f0040, 0x01000b03, 0xa1140040, 0x02000b03,
    0xa1180040, 0x03000b03, 0xa11c0040, 0x04000b03,
    0x00031e52, 0x0d040660, 0x0e2e0224, 0x0c050905,
    0x30101d70, 0x0b000f03, 0x00030061, 0x54060220,
    0x00340f05, 0x00000000, 0x30151e70, 0x0b001403,
    0x00030061, 0x56060220, 0x00341405, 0x00000000,
    0x00031f61, 0x58060220, 0x00341805, 0x00000000,
    0x30190070, 0x0b001803, 0x00031f61, 0x5a060220,
    0x00341c05, 0x00000000, 0x301d0070, 0x0b001c03,
    0x00031f61, 0x52260220, 0x00340d05, 0x00000000,
    0xa1121f40, 0x0d021002, 0xa1161f40, 0x0d021502,
    0xa11a1e40, 0x0d021902, 0xa11e1d40, 0x0d021d02,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00034131, 0x0e240000, 0xfb045214, 0x003c0000,
    0x00031c61, 0x54260220, 0x00341205, 0x00000000,
    0x00031c61, 0x56260220, 0x00341605, 0x00000000,
    0x00031c61, 0x58260220, 0x00341a05, 0x00000000,
    0x00031c61, 0x5a260220, 0x00341e05, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00034231, 0x13240000, 0xfb045414, 0x003c0000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00034331, 0x17240000, 0xfb045614, 0x003c0000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034431, 0x1b240000, 0xfb045814, 0x003c0000,
    0x00032161, 0x07060220, 0x00340e05, 0x00000000,
    0x00032161, 0x03060220, 0x00341005, 0x00000000,
    0xa1200040, 0x08001003, 0xa1230040, 0x09801003,
    0x0003c161, 0x07260220, 0x00340f05, 0x00000000,
    0x0003c161, 0x03260220, 0x00341105, 0x00000000,
    0x00032261, 0x5e050220, 0x00461605, 0x00000000,
    0x00032261, 0x5f050220, 0x00461505, 0x00000000,
    0x00032261, 0x61050220, 0x00461405, 0x00000000,
    0x00031f61, 0x05060220, 0x00342005, 0x00000000,
    0x30210070, 0x10002003, 0x00032361, 0x60050220,
    0x00461705, 0x00000000, 0x00031f61, 0x5c060220,
    0x00342305, 0x00000000, 0xf0240070, 0x09802303,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa1221c40, 0x11022102, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034531, 0x1f1c0000,
    0xfb045a14, 0x001c0000, 0xa1251a40, 0x11022402,
    0x00031a61, 0x05260220, 0x00342205, 0x00000000,
    0x00031a61, 0x5c260220, 0x00342505, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034631, 0x00000000, 0xfb0c5c14, 0x003c5e24,
    0xa1260040, 0x0a801003, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00032461, 0x61050220,
    0x00461c05, 0x00000000, 0x00030061, 0x62054220,
    0x00000000, 0x00000000, 0x00030061, 0x63054220,
    0x00000000, 0x00000000, 0x00030061, 0x64054220,
    0x00000000, 0x00000000, 0xf0271d70, 0x0a802603,
    0x00033661, 0x5f060220, 0x00342605, 0x00000000,
    0xa1281a40, 0x11022702, 0x00031961, 0x5f260220,
    0x00342805, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034731, 0x00000000,
    0xfb0c5f14, 0x003c6124, 0xa1290040, 0x0b801003,
    0x00033761, 0x64054660, 0x00000000, 0x00000000,
    0x00030061, 0x65054660, 0x00000000, 0xaaabbaaa,
    0xf02a1b70, 0x0b802903, 0x00033761, 0x62060220,
    0x00342905, 0x00000000, 0xa12b1a40, 0x11022a02,
    0x00031961, 0x62260220, 0x00342b05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034831, 0x00000000, 0xfb0c6214, 0x000c6414,
    0xe1672368, 0x00601803, 0xa12c0040, 0x00c01003,
    0xe1682368, 0x00601903, 0xe16a2368, 0x00601a03,
    0x302d1b70, 0x10002c03, 0x00033861, 0x65060220,
    0x00342c05, 0x00000000, 0x00031c61, 0x69050220,
    0x00466805, 0x00000000, 0xa12e1b40, 0x11022d02,
    0x00031961, 0x65260220, 0x00342e05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034931, 0x00000000, 0xfb0c6514, 0x003c6724,
    0xa12f0040, 0x01c01003, 0xe1702468, 0x00601b03,
    0x00033961, 0x6d050220, 0x00466a05, 0x00000000,
    0x00033961, 0x6e050220, 0x00466805, 0x00000000,
    0x00030061, 0x6f050220, 0x00466805, 0x00000000,
    0x30301d70, 0x10002f03, 0x00030061, 0x6b060220,
    0x00342f05, 0x00000000, 0xa1311a40, 0x11023002,
    0x00031961, 0x6b260220, 0x00343105, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034a31, 0x00000000, 0xfb0c6b14, 0x003c6d24,
    0xe1720068, 0x00601c03, 0xa1320040, 0x02c01003,
    0x00030061, 0x73054220, 0x00000000, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x00031b61, 0x70050220, 0x00467205, 0x00000000,
    0x00030061, 0x71050220, 0x00467205, 0x00000000,
    0x30331c70, 0x10003203, 0x00033a61, 0x6e060220,
    0x00343205, 0x00000000, 0xa1341a40, 0x11023302,
    0x00031961, 0x6e260220, 0x00343405, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034b31, 0x00000000, 0xfb0c6e14, 0x003c7024,
    0xa1350040, 0x03c01003, 0x00033b61, 0x71050220,
    0x00461805, 0x00000000, 0x00033b61, 0x72054220,
    0x00000000, 0x00000000, 0x30361b70, 0x10003503,
    0x00033b61, 0x73060220, 0x00343505, 0x00000000,
    0xa1371a40, 0x11023602, 0x00031961, 0x73260220,
    0x00343705, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00034c31, 0x00000000,
    0xfb0c0314, 0x000c7114, 0xe1782568, 0x00601f03,
    0x00030061, 0x75054220, 0x00000000, 0x00000000,
    0x00030061, 0x76054220, 0x00000000, 0x00000000,
    0x00030061, 0x77054220, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034d31, 0x00000000, 0xfb0c7314, 0x003c7524,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0xe1782568, 0x00602003, 0xa1380040, 0x04c01003,
    0xe17b2568, 0x00602103, 0x00030061, 0x79054220,
    0x00000000, 0x00000000, 0x00030061, 0x7a054220,
    0x00000000, 0x00000000, 0x30391c70, 0x10003803,
    0x00033d61, 0x76060220, 0x00343805, 0x00000000,
    0xa13a1a40, 0x11023902, 0x00031961, 0x76260220,
    0x00343a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034e31, 0x00000000,
    0xfb0c7614, 0x003c7824, 0x00030070, 0x00010660,
    0x26461b05, 0x00461c05, 0x01030022, 0x0001c060,
    0x00000088, 0x00000088, 0x00030065, 0x3b058220,
    0x02461b05, 0xffffffc0, 0x00033e61, 0x7b054660,
    0x00000000, 0xffffffc0, 0xa13c1a40, 0x3b001002,
    0x303d1970, 0x10003c03, 0x00033e61, 0x79060220,
    0x00343c05, 0x00000000, 0xa13e1a40, 0x11023d02,
    0x00031961, 0x79260220, 0x00343e05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034e31, 0x00000000, 0xfb0c7914, 0x00047b0c,
    0x00030025, 0x00004600, 0x00000000, 0x00000010,
    0x00030061, 0x7c054660, 0x00000000, 0x7f800000,
    0x00030061, 0x7d054660, 0x00000000, 0x7f800000,
    0x00030061, 0x7e054660, 0x00000000, 0x7f800000,
    0x00030061, 0x7f054660, 0x00000000, 0xff800000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034f31, 0x00000000, 0xfb0c0514, 0x003c7c24,
    0xa13f0040, 0x09001003, 0x00030061, 0x02054660,
    0x00000000, 0xff800000, 0x00033c61, 0x03054660,
    0x00000000, 0xff800000, 0xf0401b70, 0x09003f03,
    0x00033f61, 0x7d060220, 0x00343f05, 0x00000000,
    0xa1411a40, 0x11024002, 0x00031961, 0x7d260220,
    0x00344105, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034031, 0x00000000,
    0xfb0c7d14, 0x000c0214, 0x00033061, 0x03054660,
    0x00000000, 0x7f800000, 0x00033c61, 0x04054660,
    0x00000000, 0x7f800000, 0x00033f61, 0x05054660,
    0x00000000, 0x7f800000, 0x00033f61, 0x06054660,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034131, 0x00000000,
    0xfb0c0714, 0x003c0324, 0xa1420040, 0x01000e03,
    0x00033161, 0x06054660, 0x00000000, 0xff800000,
    0x00033161, 0x07054660, 0x00000000, 0xff800000,
    0x00033161, 0x08054660, 0x00000000, 0xff800000,
    0x00030061, 0x09054660, 0x00000000, 0x80000000,
    0x30431d70, 0x0e004203, 0x00033161, 0x04060220,
    0x00344205, 0x00000000, 0xa1441a40, 0x0f024302,
    0x00031961, 0x04260220, 0x00344405, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034231, 0x00000000, 0xfb0c0414, 0x003c0624,
    0xa1450040, 0x02000e03, 0xa1480040, 0x04800e03,
    0xa14b0040, 0x03000e03, 0x00033261, 0x09054660,
    0x00000000, 0x00000000, 0x00030061, 0x0a054660,
    0x00000000, 0x00000000, 0x30461d70, 0x0e004503,
    0x00030061, 0x1f060220, 0x00344505, 0x00000000,
    0x30491e70, 0x0e004803, 0x00030061, 0x0b060220,
    0x00344805, 0x00000000, 0x304c1f70, 0x0e004b03,
    0x00033261, 0x07060220, 0x00344b05, 0x00000000,
    0xa1471e40, 0x0f024602, 0xa14a1d40, 0x0f024902,
    0xa14d1c40, 0x0f024c02, 0x00031b61, 0x1f260220,
    0x00344705, 0x00000000, 0x00031b61, 0x0b260220,
    0x00344a05, 0x00000000, 0x00031b61, 0x07260220,
    0x00344d05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034331, 0x00000000,
    0xfb0c0714, 0x000c0914, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00034431, 0x00000000,
    0xfb0c0b14, 0x000c0914, 0xa14e0040, 0x04000e03,
    0x00030061, 0x12054660, 0x00000000, 0x00000000,
    0x304f1a70, 0x0e004e03, 0x00033461, 0x0c060220,
    0x00344e05, 0x00000000, 0xa1501a40, 0x0f024f02,
    0x00031961, 0x0c260220, 0x00345005, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034531, 0x00000000, 0xfb0c0c14, 0x0004120c,
    0x00030061, 0x21050220, 0x00461905, 0x00000000,
    0x00032261, 0x22050220, 0x00461305, 0x00000000,
    0x00032461, 0x23050220, 0x00461d05, 0x00000000,
    0x00032461, 0x24050220, 0x00461e05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034631, 0x00000000, 0xfb0c1f14, 0x003c2124,
    0x80033061, 0x7e050220, 0x00460005, 0x00000000,
    0x80030931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_misc_batched_init_globals = {
   .prog_data = {
      .base.nr_params = 10,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 3072,
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
const char *gfx125_misc_batched_init_globals_sha1 = "bf0e4f7ebfe85b41328db3ae96726b62534ce62e";

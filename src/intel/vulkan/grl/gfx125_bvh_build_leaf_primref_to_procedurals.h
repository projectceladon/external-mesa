#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_leaf_primref_to_procedurals_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_leaf_primref_to_procedurals_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_leaf_primref_to_procedurals_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
   { 24, 8 },
   { 32, 8 },
   { 40, 4 },
   { 44, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g41<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g83<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g41UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
add(1)          g42<1>UD        g41<0,1,0>UD    0x00000040UD    { align1 WE_all 1N $0.src compacted };
mov(8)          g61<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g67<1>D         g83<8,8,1>D     0x00000004UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g3UD            g42UD           nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
add(8)          g61.8<1>UW      g61<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
add(16)         g82<1>D         g67<1,1,0>D     16D             { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g75<1>D         g2<0,1,0>D      36D             { align1 1H compacted };
cmp.l.f0.0(16)  g77<1>UD        g75<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g85<2>UD        g75<4,4,1>UD                    { align1 1Q };
mov(8)          g87<2>UD        g76<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
cmp.z.f0.0(16)  null<1>D        g3.2<0,1,0>D    8D              { align1 1H };
add(16)         g79<1>D         -g77<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@4 compacted };
mov(8)          g85.1<2>UD      g79<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g87.1<2>UD      g80<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g80UD           g85UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
sel.l(16)       g4<1>UD         g82<1,1,0>UD    g80<1,1,0>UD    { align1 1H @7 $2.dst compacted };
mul(16)         g86<1>D         g3.2<0,1,0>D    g80.1<16,8,2>UW { align1 1H $2.src };
mul(16)         g83<1>D         g3.2<0,1,0>D    g80<16,8,2>UW   { align1 1H };
add(16)         g83.1<2>UW      g83.1<16,8,2>UW g86<16,8,2>UW   { align1 1H I@1 };
(-f0.0) sel(16) g10<1>UD        g83<8,8,1>UD    0x00000004UD    { align1 1H I@1 };
cmp.nz.f0.0(16) null<1>D        g67<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
add(16)         g84<1>D         g67<1,1,0>D     -1D             { align1 1H $2.src compacted };
mul(16)         g86<1>D         g84<8,8,1>D     g3.4<0,1,0>UW   { align1 1H I@1 };
mul(16)         g88<1>D         g84<8,8,1>D     g3.5<0,1,0>UW   { align1 1H $2.src };
add(16)         g86.1<2>UW      g86.1<16,8,2>UW g88<16,8,2>UW   { align1 1H I@1 };
add(16)         g88<1>D         g86<1,1,0>D     g10<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g90<1>UD        g88<1,1,0>UD    g86<1,1,0>UD    { align1 1H I@1 compacted };
add(16)         g92<1>D         g2.4<0,1,0>D    g88<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g94<1>UD        g92<1,1,0>UD    g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g98<2>UD        g92<4,4,1>UD                    { align1 1Q };
mov(8)          g100<2>UD       g93<4,4,1>UD                    { align1 2Q };
add3(16)        g96<1>D         g2.5<0,1,0>D    -g90<8,8,1>D    -g94<1,1,1>D { align1 1H I@3 };
mov(8)          g98.1<2>UD      g96<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g100.1<2>UD     g97<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g57UD           g98UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g57<1>UD        0xffffffffUD                    { align1 1H $3.dst };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.ge.f0.0(16) g97<1>UD        g67<1,1,0>UD    g80<1,1,0>UD    { align1 1H I@2 compacted };
(-f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
nop                                                             ;
mul(16)         g99<1>D         g67<8,8,1>D     g3.4<0,1,0>UW   { align1 1H $3.src };
mul(16)         g89<1>D         g67<8,8,1>D     g3.5<0,1,0>UW   { align1 1H };
add(16)         g99.1<2>UW      g99.1<16,8,2>UW g89<16,8,2>UW   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g101<1>D        g99<1,1,0>D     g10<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g103<1>UD       g101<1,1,0>UD   g99<1,1,0>UD    { align1 1H I@1 compacted };
add(16)         g105<1>D        g2.4<0,1,0>D    g101<1,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g107<1>UD       g105<1,1,0>UD   g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g112<2>UD       g105<4,4,1>UD                   { align1 1Q $4.src };
mov(8)          g114<2>UD       g106<4,4,1>UD                   { align1 2Q $4.src };
add3(16)        g109<1>D        g2.5<0,1,0>D    -g103<8,8,1>D   -g107<1,1,1>D { align1 1H I@3 };
mov(8)          g112.1<2>UD     g109<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g114.1<2>UD     g110<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g110UD          g112UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
cmp.nz.f0.0(16) g64<1>D         g110<1,1,0>D    g57<1,1,0>D     { align1 1H $4.dst compacted };

LABEL3:
endif(16)       JIP:  LABEL4                                    { align1 1H };
or.nz.f0.0(16)  null<1>UD       g64<8,8,1>UD    g97<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
add(16)         g67<1>D         g67<1,1,0>D     1D              { align1 1H compacted };

LABEL4:
while(16)       JIP:  LABEL2                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g111<1>D        g4<1,1,0>D      -1D             { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mul(16)         g113<1>D        g111<8,8,1>D    g3.4<0,1,0>UW   { align1 1H I@1 };
mul(16)         g90<1>D         g111<8,8,1>D    g3.5<0,1,0>UW   { align1 1H };
add(16)         g113.1<2>UW     g113.1<16,8,2>UW g90<16,8,2>UW  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g115<1>D        g113<1,1,0>D    g10<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g117<1>UD       g115<1,1,0>UD   g113<1,1,0>UD   { align1 1H I@1 compacted };
add(16)         g119<1>D        g2.4<0,1,0>D    g115<1,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g121<1>UD       g119<1,1,0>UD   g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g6<2>UD         g119<4,4,1>UD                   { align1 1Q };
mov(8)          g8<2>UD         g120<4,4,1>UD                   { align1 2Q };
add3(16)        g123<1>D        g2.5<0,1,0>D    -g117<8,8,1>D   -g121<1,1,1>D { align1 1H I@3 };
mov(8)          g6.1<2>UD       g123<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g8.1<2>UD       g124<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g124UD          g6UD            nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };

LABEL7:
cmp.ge.f0.0(16) g126<1>UD       g4<1,1,0>UD     g80<1,1,0>UD    { align1 1H I@2 compacted };
(-f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL5              { align1 1H };
nop                                                             ;
mul(16)         g6<1>D          g4<8,8,1>D      g3.4<0,1,0>UW   { align1 1H $5.src };
mul(16)         g91<1>D         g4<8,8,1>D      g3.5<0,1,0>UW   { align1 1H };
add(16)         g6.1<2>UW       g6.1<16,8,2>UW  g91<16,8,2>UW   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g8<1>D          g6<1,1,0>D      g10<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g27<1>UD        g8<1,1,0>UD     g6<1,1,0>UD     { align1 1H I@1 compacted };
add(16)         g14<1>D         g2.4<0,1,0>D    g8<1,1,0>D      { align1 1H compacted };
cmp.l.f0.0(16)  g16<1>UD        g14<1,1,0>UD    g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g21<2>UD        g14<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g23<2>UD        g15<4,4,1>UD                    { align1 2Q $1.src };
add3(16)        g18<1>D         g2.5<0,1,0>D    -g27<8,8,1>D    -g16<1,1,1>D { align1 1H I@3 };
mov(8)          g21.1<2>UD      g18<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g23.1<2>UD      g19<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g19UD           g21UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
cmp.nz.f0.0(16) g65<1>D         g19<1,1,0>D     g124<1,1,0>D    { align1 1H $1.dst compacted };

LABEL5:
endif(16)       JIP:  LABEL6                                    { align1 1H };
or.nz.f0.0(16)  null<1>UD       g65<8,8,1>UD    g126<8,8,1>UD   { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL6        UIP:  LABEL6              { align1 1H };
add(16)         g4<1>D          g4<1,1,0>D      1D              { align1 1H compacted };

LABEL6:
while(16)       JIP:  LABEL7                                    { align1 1H };
mov(16)         g27<1>D         g61<8,8,1>UW                    { align1 1H };
and(16)         g14<1>UD        g27<1,1,0>UD    0x0000000fUD    { align1 1H I@1 compacted };
mov(16)         g60<2>B         3W                              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g8<1>D          g67<1,1,0>D     g14<1,1,0>D     { align1 1H I@2 compacted };

LABEL21:
add(16)         g20<1>D         g4<1,1,0>D      g14<1,1,0>D     { align1 1H $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g22<1>UD        g20<1,1,0>UD    g4<1,1,0>UD     { align1 1H $1.dst compacted };
cmp.l.f0.0(16)  g29<1>UD        g8<1,1,0>UD     g20<1,1,0>UD    { align1 1H @3 $6.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g24<1>D         -g22<8,8,1>D                    { align1 1H $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(16)         g31<1>UD        ~g22<8,8,1>D    g29<8,8,1>UD    { align1 1H $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.g.f0.0(16)  g33<1>UD        g24<1,1,0>UD    0x00000000UD    { align1 1H $6.dst compacted };
or.nz.f0.0(16)  null<1>UD       g33<8,8,1>UD    g31<8,8,1>UD    { align1 1H I@1 };
(-f0.0) break(16) JIP:  LABEL8        UIP:  LABEL8              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mul(16)         g39<1>D         g8<8,8,1>D      g3.4<0,1,0>UW   { align1 1H $6.src };
mul(16)         g92<1>D         g8<8,8,1>D      g3.5<0,1,0>UW   { align1 1H };
add(16)         g39.1<2>UW      g39.1<16,8,2>UW g92<16,8,2>UW   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g41<1>D         g39<1,1,0>D     g3.3<0,1,0>D    { align1 1H I@1 compacted };
add(16)         g50<1>D         g39<1,1,0>D     g10<1,1,0>D     { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g43<1>UD        g41<1,1,0>UD    g39<1,1,0>UD    { align1 1H I@2 compacted };
add(16)         g45<1>D         g2.4<0,1,0>D    g41<1,1,0>D     { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g54<1>D         g2.4<0,1,0>D    g50<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g47<1>UD        g45<1,1,0>UD    g2.4<0,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g31<2>UD        g45<4,4,1>UD                    { align1 1Q };
mov(8)          g33<2>UD        g46<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g52<1>UD        g50<1,1,0>UD    g39<1,1,0>UD    { align1 1H $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
mov(8)          g35<2>UD        g54<4,4,1>UD                    { align1 1Q $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $6.src };
mov(8)          g37<2>UD        g55<4,4,1>UD                    { align1 2Q I@6 };
cmp.l.f0.0(16)  g57<1>UD        g54<1,1,0>UD    g2.4<0,1,0>UD   { align1 1H $3.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add3(16)        g49<1>D         g2.5<0,1,0>D    -g43<8,8,1>D    -g47<1,1,1>D { align1 1H I@7 };
cmp.l.f0.0(16)  g66<1>UD        g8<1,1,0>UD     g4<1,1,0>UD     { align1 1H compacted };
add3(16)        g64<1>D         g2.5<0,1,0>D    -g52<8,8,1>D    -g57<1,1,1>D { align1 1H I@3 };
mov(8)          g31.1<2>UD      g49<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g33.1<2>UD      g50<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g35.1<2>UD      g64<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g37.1<2>UD      g65<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g74UD           g31UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g16UD           g35UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
cmp.z.f0.0(16)  g68<1>D         g16<1,1,0>D     g16<0,1,0>D     { align1 1H $6.dst compacted };
and.nz.f0.0(16) null<1>UD       g66<8,8,1>UD    g68<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL9              { align1 1H };
mov(1)          g121<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g121<1>UD       g121<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
mov(1)          g122<1>UD       sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g122<1>UD       g122<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
and(1)          g122<1>UD       g121<0,1,0>UD   g122<0,1,0>UD   { align1 WE_all 1N I@1 compacted };
mov(1)          g70<1>UD        g122<0,1,0>UD                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cbit(16)        g68<1>UD        g70<0,1,0>UD                    { align1 1H };
else(16)        JIP:  LABEL9          UIP:  LABEL9              { align1 1H };

LABEL10:
mov(16)         g68<1>UD        0x00000000UD                    { align1 1H I@2 };

LABEL9:
endif(16)       JIP:  LABEL8                                    { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g14<8,8,1>UD    0x00000008UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL11         UIP:  LABEL11             { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g14<8,8,1>UD    g68<0,1,0>UD    { align1 1H I@4 };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL12             { align1 1H };
shl(16)         g71<1>D         g74<8,8,1>D     0x00000005UD    { align1 1H $6.dst };
shr(16)         g76<1>UD        g74<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
add(16)         g78<1>D         g2.2<0,1,0>D    g71<1,1,0>D     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g80<1>UD        g78<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g36<2>UD        g78<4,4,1>UD                    { align1 1Q $6.src };
mov(8)          g38<2>UD        g79<4,4,1>UD                    { align1 2Q $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g84<1>D         g78<1,1,0>D     16D             { align1 1H compacted };
add3(16)        g82<1>D         g2.3<0,1,0>D    g76<8,8,1>D     -g80<1,1,1>D { align1 1H I@4 };
cmp.l.f0.0(16)  g86<1>UD        g84<1,1,0>UD    g78<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g40<2>UD        g84<4,4,1>UD                    { align1 1Q };
mov(8)          g42<2>UD        g85<4,4,1>UD                    { align1 2Q };
mov(8)          g36.1<2>UD      g82<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g38.1<2>UD      g83<4,4,1>UD                    { align1 2Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g88<1>D         -g86<1,1,0>D    g82<1,1,0>D     { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g18UD           g36UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
mov(8)          g40.1<2>UD      g88<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g42.1<2>UD      g89<4,4,1>UD                    { align1 2Q I@2 };
and(16)         g29<1>UD        g24<8,8,1>UD    0x07ffffffUD    { align1 1H $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g19UD           g40UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
shr(16)         g72<1>UD        g25<1,1,0>UD    0x0000001dUD    { align1 1H $1.dst compacted };
else(16)        JIP:  LABEL12         UIP:  LABEL12             { align1 1H };

LABEL13:
mov(16)         g74<1>UD        0xffffffffUD                    { align1 1H $6.dst };
mov(16)         g29<1>UD        0xffffffffUD                    { align1 1H I@4 };
mov(16)         g72<1>UD        0x00000000UD                    { align1 1H I@4 };

LABEL12:
endif(16)       JIP:  LABEL11                                   { align1 1H };
add(16)         g89<1>D         g27<1,1,0>D     15D             { align1 1H compacted };
add(16)         g91<1>D         g27<1,1,0>D     -1D             { align1 1H compacted };
add(16)         g97<1>D         g27<1,1,0>D     1D              { align1 1H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  null<1>D        g89<8,8,1>D     16D             { align1 1H I@3 };
mov(16)         a0<1>UW         0x03a0UW                        { align1 WE_all 1H I@3 };
shl(16)         a0<1>UW         g91<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x03a0UW        { align1 1H A@1 };
mov(16)         g93<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         a0<1>UW         0x03a0UW                        { align1 WE_all 1H I@3 };
shl(16)         a0<1>UW         g97<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x03a0UW        { align1 1H A@1 };
mov(16)         g99<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
(-f0.0) sel(16) g95<1>UD        g93<8,8,1>UD    0xffffffffUD    { align1 1H I@2 };
cmp.l.f0.0(16)  g101<1>D        g97<1,1,0>D     16D             { align1 1H $3.src compacted };
(+f0.0) sel(16) g103<1>UD       g99<8,8,1>UD    0xffffffffUD    { align1 1H I@3 };
cmp.nz.f0.0(16) g105<1>D        g95<1,1,0>D     g29<1,1,0>D     { align1 1H I@3 compacted };
cmp.nz.f0.0(16) null<1>D        g101<8,8,1>D    0D              { align1 1H I@3 };
mov(16)         g107<1>D        -g105<8,8,1>D                   { align1 1H I@2 };
mov(16)         a0<1>UW         0x0d60UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g97<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0d60UW        { align1 1H A@1 };
mov(16)         g109<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
(+f0.0) sel(16) g111<1>UD       g109<1,1,0>UD   0x00000000UD    { align1 1H I@1 compacted };
cmp.nz.f0.0(16) null<1>D        g105<8,8,1>D    0D              { align1 1H };
(+f0.0) sel(16) g113<1>UD       g14<1,1,0>UD    0x00000000UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g85<2>UD        g113<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g115<2>UD       g114<4,4,1>UD                   { align1 2Q I@2 };
mov(8)          g85.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g115.1<2>UD     0x00000000UD                    { align1 2Q I@2 };
mov(8)          g117<2>UD       0x00000000UD                    { align1 WE_all 1Q I@2 };
mov(8)          g117<2>UD       g85<8,4,2>UD                    { align1 1Q };
mov(8)          g119<2>UD       0x00000000UD                    { align1 WE_all 2Q I@2 };
mov(8)          g119<2>UD       g115<8,4,2>UD                   { align1 2Q };
mov(8)          g62<2>UD        g117<8,4,2>UD                   { align1 WE_all 1Q I@2 };
mov(8)          g117.1<2>UD     0x00000000UD                    { align1 WE_all 1Q };
mov(8)          g117.1<2>UD     g85.1<8,4,2>UD                  { align1 1Q };
mov(8)          g12<2>UD        g119<8,4,2>UD                   { align1 WE_all 2Q I@3 };
mov(8)          g119.1<2>UD     0x00000000UD                    { align1 WE_all 2Q };
mov(8)          g119.1<2>UD     g115.1<8,4,2>UD                 { align1 2Q };
mov(8)          g62.1<2>UD      g117.1<8,4,2>UD                 { align1 WE_all 1Q I@3 };
mov(8)          g12.1<2>UD      g119.1<8,4,2>UD                 { align1 WE_all 2Q I@2 };
cmp.g.f0.0(4)   null<1>UD       g62<8,2,4>UD    g62.2<8,2,4>UD  { align1 WE_all 1N I@2 };
(+f0.0) cmp.z.f0.0(4) null<1>UD g62.1<8,2,4>UD  g62.3<8,2,4>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(4) null<1>UD g62.1<8,2,4>UD  g62.3<8,2,4>UD  { align1 WE_all 1N };
(+f0.0) mov(4)  g62.2<4>UD      g62<8,2,4>UD                    { align1 WE_all 1N };
(+f0.0) mov(4)  g62.3<4>UD      g62.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(2)   null<1>UD       g62.2<0,1,0>UD  g62.4<4,2,2>UD  { align1 WE_all 1N I@1 };
(+f0.0) cmp.z.f0.0(2) null<1>UD g62.3<0,1,0>UD  g62.5<4,2,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(2) null<1>UD g62.3<0,1,0>UD  g62.5<4,2,2>UD  { align1 WE_all 1N };
(+f0.0) mov(2)  g62.4<2>UD      g62.2<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(2)  g62.5<2>UD      g62.3<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(2)   null<1>UD       g63.2<0,1,0>UD  g63.4<4,2,2>UD  { align1 WE_all 1N I@6 };
(+f0.0) cmp.z.f0.0(2) null<1>UD g63.3<0,1,0>UD  g63.5<4,2,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(2) null<1>UD g63.3<0,1,0>UD  g63.5<4,2,2>UD  { align1 WE_all 1N };
(+f0.0) mov(2)  g63.4<2>UD      g63.2<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(2)  g63.5<2>UD      g63.3<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(4)   null<1>UD       g62.6<0,1,0>UD  g63<8,4,2>UD    { align1 WE_all 1N I@1 };
(+f0.0) cmp.z.f0.0(4) null<1>UD g62.7<0,1,0>UD  g63.1<8,4,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(4) null<1>UD g62.7<0,1,0>UD  g63.1<8,4,2>UD  { align1 WE_all 1N };
(+f0.0) mov(4)  g63<2>UD        g62.6<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(4)  g63.1<2>UD      g62.7<0,1,0>UD                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(8)          g116<1>D        g14<8,8,1>D     -g62<8,4,2>D    { align1 1Q };
cmp.g.f0.0(4)   null<1>UD       g12<8,2,4>UD    g12.2<8,2,4>UD  { align1 WE_all 1N };
(+f0.0) cmp.z.f0.0(4) null<1>UD g12.1<8,2,4>UD  g12.3<8,2,4>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(4) null<1>UD g12.1<8,2,4>UD  g12.3<8,2,4>UD  { align1 WE_all 1N };
(+f0.0) mov(4)  g12.2<4>UD      g12<8,2,4>UD                    { align1 WE_all 1N };
(+f0.0) mov(4)  g12.3<4>UD      g12.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(2)   null<1>UD       g12.2<0,1,0>UD  g12.4<4,2,2>UD  { align1 WE_all 1N I@1 };
(+f0.0) cmp.z.f0.0(2) null<1>UD g12.3<0,1,0>UD  g12.5<4,2,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(2) null<1>UD g12.3<0,1,0>UD  g12.5<4,2,2>UD  { align1 WE_all 1N };
(+f0.0) mov(2)  g12.4<2>UD      g12.2<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(2)  g12.5<2>UD      g12.3<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(2)   null<1>UD       g13.2<0,1,0>UD  g13.4<4,2,2>UD  { align1 WE_all 1N I@6 };
(+f0.0) cmp.z.f0.0(2) null<1>UD g13.3<0,1,0>UD  g13.5<4,2,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(2) null<1>UD g13.3<0,1,0>UD  g13.5<4,2,2>UD  { align1 WE_all 1N };
(+f0.0) mov(2)  g13.4<2>UD      g13.2<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(2)  g13.5<2>UD      g13.3<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(4)   null<1>UD       g12.6<0,1,0>UD  g13<8,4,2>UD    { align1 WE_all 1N I@1 };
(+f0.0) cmp.z.f0.0(4) null<1>UD g12.7<0,1,0>UD  g13.1<8,4,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(4) null<1>UD g12.7<0,1,0>UD  g13.1<8,4,2>UD  { align1 WE_all 1N };
(+f0.0) mov(4)  g13<2>UD        g12.6<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(4)  g13.1<2>UD      g12.7<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(8)   null<1>UD       g63.6<0,1,0>UD  g12<8,4,2>UD    { align1 WE_all 1Q I@1 };
(+f0.0) cmp.z.f0.0(8) null<1>UD g63.7<0,1,0>UD  g12.1<8,4,2>UD  { align1 WE_all 1Q };
(-f0.0) cmp.g.f0.0(8) null<1>UD g63.7<0,1,0>UD  g12.1<8,4,2>UD  { align1 WE_all 1Q };
(+f0.0) mov(8)  g12<2>UD        g63.6<0,1,0>UD                  { align1 WE_all 1Q };
(+f0.0) mov(8)  g12.1<2>UD      g63.7<0,1,0>UD                  { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@1 };
add(8)          g117<1>D        g15<8,8,1>D     -g12<8,4,2>D    { align1 2Q };
cmp.l.f0.0(16)  null<1>UD       g14<8,8,1>UD    g68<0,1,0>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL14         UIP:  LABEL14             { align1 1H };
mov(16)         g120<1>D        0D                              { align1 WE_all 1H };
mov(16)         g120<1>D        -g105<8,8,1>D                   { align1 1H };
cmp.z.f0.0(16)  null<1>D        g14<8,8,1>D     0D              { align1 1H };
add(8)          g120.1<2>D      g120<8,4,2>D    g120.1<8,4,2>D  { align1 WE_all 1Q I@2 };
add(4)          g120.2<4>D      g120.1<8,2,4>D  g120.2<8,2,4>D  { align1 WE_all 1N I@1 };
add(4)          g120.3<4>D      g120.1<8,2,4>D  g120.3<8,2,4>D  { align1 WE_all 1N I@1 };
add(4)          g120.4<1>D      g120.3<0,1,0>D  g120.4<4,4,1>D  { align1 WE_all 1N I@1 };
add(4)          g121.4<1>D      g121.3<0,1,0>D  g121.4<4,4,1>D  { align1 WE_all 1N I@2 };
add(8)          g121<1>D        g120.7<0,1,0>D  g121<1,1,0>D    { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g118<1>D        g121.7<0,1,0>D                  { align1 1H };
(+f0.0) if(16)  JIP:  LABEL16         UIP:  LABEL15             { align1 1H };
add(16)         g121<1>D        g2.6<0,1,0>D    28D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
cmp.l.f0.0(16)  g123<1>UD       g121<1,1,0>UD   g2.6<0,1,0>UD   { align1 1H @1 $5.dst compacted };
mov(8)          g41<2>UD        g121<4,4,1>UD                   { align1 1Q $1.src };
mov(8)          g43<2>UD        g122<4,4,1>UD                   { align1 2Q $1.src };
add(16)         g125<1>D        -g123<1,1,0>D   g2.7<0,1,0>D    { align1 1H @3 $5.dst compacted };
mov(8)          g41.1<2>UD      g125<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g43.1<2>UD      g126<4,4,1>UD                   { align1 2Q I@2 };
mov(1)          g127<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g127<1>UD       g127<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mov(1)          g20<1>UD        sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g20<1>UD        g20<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
and(1)          g20<1>UD        g127<0,1,0>UD   g20<0,1,0>UD    { align1 WE_all 1N I@1 compacted };
mov(1)          g18<1>UD        g20<0,1,0>UD                    { align1 WE_all 1N @1 $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cbit(16)        g20<1>UD        g18<0,1,0>UD                    { align1 1H $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mul(16)         g31<1>D         g20<8,8,1>D     g118<16,8,2>UW  { align1 1H I@1 };
mul(16)         g93<1>D         g20<8,8,1>D     g118.1<16,8,2>UW { align1 1H };
add(16)         g31.1<2>UW      g31.1<16,8,2>UW g93<16,8,2>UW   { align1 1H I@1 };
mov(1)          g26<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g26<1>UD        g26<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(16)         g24<1>D         g61<8,8,1>UW                    { align1 1H $1.dst };
fbl(1)          g22<1>UD        g26<0,1,0>UD                    { align1 WE_all 1N @2 $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  null<1>D        g24<8,8,1>D     g22<0,1,0>D     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL17             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
send(16)        g6UD            g41UD           g31UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $5 };

LABEL17:
endif(16)       JIP:  LABEL18                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(1)          g31<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g31<1>UD        g31<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g25<1>UD        g31<0,1,0>UD                    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g25<0,1,0>UD    0x00000002UD    { align1 WE_all 1N $5.dst };
mov(1)          g31<1>UD        g[a0 192]<0,1,0>UD              { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(1)          g39<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g39<1>UD        g39<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(16)         g35<1>D         g61<8,8,1>UW                    { align1 1H $6.src };
mov(1)          g59<1>D         1D                              { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(1)          g40<1>UD        sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g40<1>UD        g40<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g37<1>D         -g59<0,1,0>D    g35<8,8,1>UD    { align1 1H $6.src };
and(1)          g40<1>UD        g39<0,1,0>UD    g40<0,1,0>UD    { align1 WE_all 1N I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(1)          g33<1>UD        g40<0,1,0>UD                    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(16)         g39<1>UD        g33<0,1,0>UD    ~g37<8,8,1>D    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cbit(16)        g41<1>UD        g39<8,8,1>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mul(16)         g43<1>D         g41<8,8,1>D     g118<16,8,2>UW  { align1 1H I@1 };
mul(16)         g94<1>D         g41<8,8,1>D     g118.1<16,8,2>UW { align1 1H };
add(16)         g43.1<2>UW      g43.1<16,8,2>UW g94<16,8,2>UW   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g70<1>D         g31<0,1,0>D     g43<1,1,0>D     { align1 1H compacted };

LABEL18:
else(16)        JIP:  LABEL15         UIP:  LABEL15             { align1 1H };

LABEL16:
mov(16)         g70<1>UD        0x00000000UD                    { align1 1H I@2 };

LABEL15:
endif(16)       JIP:  LABEL14                                   { align1 1H };
mov(16)         g44<1>D         0D                              { align1 WE_all 1H };
mov(16)         g44<1>D         -g105<8,8,1>D                   { align1 1H };
cmp.nz.f0.0(16) null<1>D        g103<8,8,1>D    g29<8,8,1>D     { align1 1H };
add(8)          g44.1<2>D       g44<8,4,2>D     g44.1<8,4,2>D   { align1 WE_all 1Q I@2 };
add(4)          g44.2<4>D       g44.1<8,2,4>D   g44.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g44.3<4>D       g44.1<8,2,4>D   g44.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g44.4<1>D       g44.3<0,1,0>D   g44.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g45.4<1>D       g45.3<0,1,0>D   g45.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(8)          g45<1>D         g44.7<0,1,0>D   g45<1,1,0>D     { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g52<1>D         65535W          g70.0<0,1,0>D   g44<1,1,1>D { align1 1H };
(+f0.0) if(16)  JIP:  LABEL19         UIP:  LABEL19             { align1 1H };
and(16)         g54<1>UD        g29<8,8,1>UD    0x00ffffffUD    { align1 1H };
shl(16)         g57<1>D         g52<8,8,1>D     0x00000006UD    { align1 1H I@3 };
shr(16)         g64<1>UD        g52<1,1,0>UD    0x0000001aUD    { align1 1H compacted };
shl(16)         g76<1>D         g72<8,8,1>D     0x0000001eUD    { align1 1H };
add(16)         g78<1>D         g116<1,1,0>D    1D              { align1 1H compacted };
or(16)          g46<1>UD        g54<8,8,1>UD    0xff000000UD    { align1 1H I@5 };
add(16)         g66<1>D         g2.6<0,1,0>D    g57<1,1,0>D     { align1 1H I@5 compacted };
or(16)          g48<1>UD        g29<1,1,0>UD    g76<1,1,0>UD    { align1 1H I@4 compacted };
or(16)          g50<1>UD        g78<8,8,1>UD    0xfffffff0UD    { align1 1H I@4 };
cmp.l.f0.0(16)  g70<1>UD        g66<1,1,0>UD    g2.6<0,1,0>UD   { align1 1H I@3 compacted };
mov(8)          g42<2>UD        g66<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g44<2>UD        g67<4,4,1>UD                    { align1 2Q };
add3(16)        g72<1>D         g2.7<0,1,0>D    g64<8,8,1>D     -g70<1,1,1>D { align1 1H I@3 };
mov(8)          g42.1<2>UD      g72<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g44.1<2>UD      g73<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g42UD           g46UD           0x08007586                0x00000180
                            ugm MsgDesc: ( store_cmask, a64, d32, xyz, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 6 flat )  base_offset 0  { align1 1H $1 };

LABEL19:
endif(16)       JIP:  LABEL14                                   { align1 1H };
shl(16)         g79<1>D         g74<8,8,1>D     0x00000005UD    { align1 1H };
shr(16)         g81<1>UD        g74<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
add(16)         g83<1>D         g2.2<0,1,0>D    16D             { align1 1H $2.src compacted };
shl(16)         g94<1>D         g52<8,8,1>D     0x00000006UD    { align1 1H I@6 };
shr(16)         g96<1>UD        g52<1,1,0>UD    0x0000001aUD    { align1 1H compacted };
shl(16)         g104<1>D        g116<8,8,1>D    0x00000002UD    { align1 1H };
cmp.l.f0.0(16)  g85<1>UD        g83<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@4 compacted };
add(16)         g89<1>D         g83<1,1,0>D     g79<1,1,0>D     { align1 1H I@7 compacted };
add(16)         g98<1>D         g2.6<0,1,0>D    g94<1,1,0>D     { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g87<1>D         -g85<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g91<1>UD        g89<1,1,0>UD    g83<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g47<2>UD        g89<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g49<2>UD        g90<4,4,1>UD                    { align1 2Q $1.src };
cmp.l.f0.0(16)  g100<1>UD       g98<1,1,0>UD    g2.6<0,1,0>UD   { align1 1H I@5 compacted };
add(16)         g106<1>D        g98<1,1,0>D     12D             { align1 1H compacted };
add3(16)        g93<1>D         g87<8,8,1>D     g81<8,8,1>D     -g91<1,1,1>D { align1 1H I@5 };
add3(16)        g102<1>D        g2.7<0,1,0>D    g96<8,8,1>D     -g100<1,1,1>D { align1 1H I@3 };
add(16)         g113<1>D        g106<1,1,0>D    g104<1,1,0>D    { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g108<1>UD       g106<1,1,0>UD   g98<1,1,0>UD    { align1 1H compacted };
mov(8)          g47.1<2>UD      g93<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g49.1<2>UD      g94<4,4,1>UD                    { align1 2Q I@5 };
cmp.l.f0.0(16)  g115<1>UD       g113<1,1,0>UD   g106<1,1,0>UD   { align1 1H I@4 compacted };
mov(8)          g51<2>UD        g113<4,4,1>UD                   { align1 1Q $1.src };
mov(8)          g53<2>UD        g114<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(16)        g30UD           g47UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
add3(16)        g117<1>D        -g108<8,8,1>D   g102<8,8,1>D    -g115<1,1,1>D { align1 1H I@3 };
mov(8)          g51.1<2>UD      g117<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g53.1<2>UD      g118<4,4,1>UD                   { align1 2Q I@2 };
and(16)         g38<1>UD        g36<8,8,1>UD    0x1fffffffUD    { align1 1H $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g51UD           g38UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };
cmp.z.f0.0(16)  null<1>D        g14<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL20         UIP:  LABEL20             { align1 1H };
shl(16)         g118<1>D        g16<8,8,1>D     0x00000006UD    { align1 1H };
shr(16)         g120<1>UD       g16<1,1,0>UD    0x0000001aUD    { align1 1H compacted };
add(16)         g122<1>D        g2.6<0,1,0>D    g118<1,1,0>D    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g124<1>UD       g122<1,1,0>UD   g2.6<0,1,0>UD   { align1 1H @1 $5.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
add(16)         g18<1>D         g98<1,1,0>D     -g122<1,1,0>D   { align1 1H $6.dst compacted };
add(16)         g41<1>D         g122<1,1,0>D    12D             { align1 1H $1.src compacted };
cmp.l.f0.0(16)  g20<1>UD        g98<1,1,0>UD    g122<1,1,0>UD   { align1 1H $1.dst compacted };
add3(16)        g126<1>D        g2.7<0,1,0>D    g120<8,8,1>D    -g124<1,1,1>D { align1 1H I@4 };
cmp.g.f0.0(16)  g24<1>UD        g18<1,1,0>UD    0x00000000UD    { align1 1H @4 $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g52<2>UD        g41<4,4,1>UD                    { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $6.src };
mov(8)          g54<2>UD        g42<4,4,1>UD                    { align1 2Q I@5 };
add3(16)        g22<1>D         g102<8,8,1>D    -g126<8,8,1>D   g20<1,1,1>D { align1 1H @4 $1.dst };
add(16)         g29<1>D         -g22<1,1,0>D    g24<1,1,0>D     { align1 1H @1 $6.dst compacted };
cmp.l.f0.0(16)  null<1>D        g22<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g31<1>UD        g29<1,1,0>UD    g22<1,1,0>UD    { align1 1H @2 $6.dst compacted };
(+f0.0) sel(16) g33<1>D         -g18<1,1,0>D    g18<1,1,0>D     { align1 1H $6.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shl(16)         g37<1>D         g31<8,8,1>D     0x0000001aUD    { align1 1H I@2 };
shr(16)         g35<1>UD        g33<1,1,0>UD    0x00000006UD    { align1 1H @2 $6.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
or(16)          g39<1>UD        g35<1,1,0>UD    g37<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
(+f0.0) sel(16) g47<1>D         -g39<1,1,0>D    g39<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g43<1>UD        g41<1,1,0>UD    g122<1,1,0>UD   { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g45<1>D         -g43<1,1,0>D    g126<1,1,0>D    { align1 1H I@1 compacted };
mov(8)          g52.1<2>UD      g45<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g54.1<2>UD      g46<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g52UD           g47UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $7 };
add(16)         g46<1>D         g122<1,1,0>D    16D             { align1 1H $7.src compacted };
mov(16)         g57<1>UD        g60<16,8,2>UB                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g48<1>UD        g46<1,1,0>UD    g122<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g52<2>UD        g46<4,4,1>UD                    { align1 1Q $7.src };
mov(8)          g54<2>UD        g47<4,4,1>UD                    { align1 2Q $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g50<1>D         -g48<1,1,0>D    g126<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g52.1<2>UD      g50<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g54.1<2>UD      g51<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g52UD           g57UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };

LABEL20:
endif(16)       JIP:  LABEL14                                   { align1 1H };
or(16)          g51<1>UD        g111<1,1,0>UD   g104<1,1,0>UD   { align1 1H $6.src compacted };
shl(16)         g57<1>D         g16<8,8,1>D     0x00000006UD    { align1 1H $6.src };
shr(16)         g64<1>UD        g16<1,1,0>UD    0x0000001aUD    { align1 1H compacted };
add(16)         g66<1>D         g2.6<0,1,0>D    22D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g120<4>UB       g51<8,8,1>UD                    { align1 1H I@4 };
cmp.l.f0.0(16)  g70<1>UD        g66<1,1,0>UD    g2.6<0,1,0>UD   { align1 1H I@2 compacted };
add(16)         g72<1>D         g66<1,1,0>D     g57<1,1,0>D     { align1 1H I@5 compacted };
mov(16)         g84<1>UD        g120<32,8,4>UB                  { align1 1H I@3 };
add3(16)        g76<1>D         -g70<8,8,1>D    g2.7<0,1,0>D    g64<1,1,1>D { align1 1H I@3 };
cmp.l.f0.0(16)  g74<1>UD        g72<1,1,0>UD    g66<1,1,0>UD    { align1 1H I@3 compacted };
add(16)         g78<1>D         g72<1,1,0>D     g14<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g80<1>UD        g78<1,1,0>UD    g72<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g53<2>UD        g78<4,4,1>UD                    { align1 1Q $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $2.src };
mov(8)          g55<2>UD        g79<4,4,1>UD                    { align1 2Q $6.src };
add3(16)        g82<1>D         -g74<8,8,1>D    g76<8,8,1>D     -g80<1,1,1>D { align1 1H I@3 };
mov(8)          g53.1<2>UD      g82<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g55.1<2>UD      g83<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g53UD           g84UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $2 };

LABEL14:
endif(16)       JIP:  LABEL11                                   { align1 1H };

LABEL11:
endif(16)       JIP:  LABEL8                                    { align1 1H };
add(16)         g8<1>D          g8<1,1,0>D      g68<0,1,0>D     { align1 1H I@4 compacted };

LABEL8:
while(16)       JIP:  LABEL21                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_leaf_primref_to_procedurals_code[] = {
    0x80000065, 0x29058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x53050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00290c, 0x00340000,
    0xe22a3040, 0x04012903, 0x80030061, 0x3d054410,
    0x00000000, 0x76543210, 0x00041b69, 0x43058660,
    0x02465305, 0x00000004, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa002a0c, 0x00300000, 0x643d1a40, 0x00803d95,
    0xa0521a40, 0x01004303, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa04b0040, 0x02410203,
    0x274d1970, 0x02104b03, 0x00030061, 0x55060220,
    0x00344b05, 0x00000000, 0x00130061, 0x57060220,
    0x00344c05, 0x00000000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x00040070, 0x00018660,
    0x16000344, 0x00000008, 0xa04f1c40, 0x02124d12,
    0x00031961, 0x55260220, 0x00344f05, 0x00000000,
    0x00131a61, 0x57260220, 0x00345005, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x50140000, 0xfb045524, 0x00040000,
    0x2704f262, 0x50005203, 0x00043241, 0x56050660,
    0x01000344, 0x00565016, 0x00040041, 0x53050660,
    0x01000344, 0x00565006, 0x00041940, 0x53160110,
    0x01565316, 0x00565606, 0x11041962, 0x0a058220,
    0x02465305, 0x00000004, 0x00040070, 0x00018660,
    0x26464305, 0x00000000, 0x01040022, 0x0001c060,
    0x000000f8, 0x000000e8, 0xa0543240, 0xfff04303,
    0x00041941, 0x56050660, 0x01465405, 0x00000344,
    0x00043241, 0x58050660, 0x01465405, 0x00000354,
    0x00041940, 0x56160110, 0x01565616, 0x00565806,
    0xa0581940, 0x0a005602, 0x275a1970, 0x56005803,
    0xa05c0040, 0x5801025a, 0x275e1970, 0x02105c0b,
    0x00030061, 0x62060220, 0x00345c05, 0x00000000,
    0x00130061, 0x64060220, 0x00345d05, 0x00000000,
    0x00041b52, 0x60040660, 0x0eae02a4, 0x5e055a05,
    0x00031961, 0x62260220, 0x00346005, 0x00000000,
    0x00131a61, 0x64260220, 0x00346105, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x39140000, 0xfb046224, 0x00040000,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00042361, 0x39054220, 0x00000000, 0xffffffff,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x25611a70, 0x50004303, 0x11040022, 0x0001c060,
    0x00000108, 0x00000108, 0x00000060, 0x00000000,
    0x00000000, 0x00000000, 0x00043341, 0x63050660,
    0x01464305, 0x00000344, 0x00040041, 0x59050660,
    0x01464305, 0x00000354, 0x00041940, 0x63160110,
    0x01566316, 0x00565906, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa0651940, 0x0a006302,
    0x27671970, 0x63006503, 0xa0690040, 0x6501025a,
    0x276b1970, 0x0210690b, 0x00033461, 0x70060220,
    0x00346905, 0x00000000, 0x00133461, 0x72060220,
    0x00346a05, 0x00000000, 0x00041b52, 0x6d040660,
    0x0eae02a4, 0x6b056705, 0x00031961, 0x70260220,
    0x00346d05, 0x00000000, 0x00131a61, 0x72260220,
    0x00346e05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x6e140000,
    0xfb047024, 0x00040000, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0xae402470, 0x39006e02,
    0x00040025, 0x00004600, 0x00000000, 0x00000038,
    0x00041a66, 0x00010220, 0x22464005, 0x00466105,
    0x01040028, 0x0001c660, 0x00000018, 0x00000018,
    0xa0430040, 0x00104303, 0x00040027, 0x00014060,
    0x00000000, 0xfffffea8, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xa06f1f40, 0xfff00403,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00041941, 0x71050660, 0x01466f05, 0x00000344,
    0x00040041, 0x5a050660, 0x01466f05, 0x00000354,
    0x00041940, 0x71160110, 0x01567116, 0x00565a06,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa0731940, 0x0a007102, 0x27751970, 0x71007303,
    0xa0770040, 0x7301025a, 0x27791970, 0x0210770b,
    0x00030061, 0x06060220, 0x00347705, 0x00000000,
    0x00130061, 0x08060220, 0x00347805, 0x00000000,
    0x00041b52, 0x7b040660, 0x0eae02a4, 0x79057505,
    0x00031961, 0x06260220, 0x00347b05, 0x00000000,
    0x00131a61, 0x08260220, 0x00347c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x7c140000, 0xfb040624, 0x00040000,
    0x257e1a70, 0x50000403, 0x11040022, 0x0001c060,
    0x00000108, 0x00000108, 0x00000060, 0x00000000,
    0x00000000, 0x00000000, 0x00043541, 0x06050660,
    0x01460405, 0x00000344, 0x00040041, 0x5b050660,
    0x01460405, 0x00000354, 0x00041940, 0x06160110,
    0x01560616, 0x00565b06, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa0081940, 0x0a000602,
    0x271b1970, 0x06000803, 0xa00e0040, 0x0801025a,
    0x27101970, 0x02100e0b, 0x00033161, 0x15060220,
    0x00340e05, 0x00000000, 0x00133161, 0x17060220,
    0x00340f05, 0x00000000, 0x00041b52, 0x12040660,
    0x0eae02a4, 0x10051b05, 0x00031961, 0x15260220,
    0x00341205, 0x00000000, 0x00131a61, 0x17260220,
    0x00341305, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x13140000,
    0xfb041524, 0x00040000, 0x80002501, 0x00000000,
    0x00000000, 0x00000000, 0xae412170, 0x7c001302,
    0x00040025, 0x00004600, 0x00000000, 0x00000038,
    0x00041a66, 0x00010220, 0x22464105, 0x00467e05,
    0x01040028, 0x0001c660, 0x00000018, 0x00000018,
    0xa0040040, 0x00100403, 0x00040027, 0x00014060,
    0x00000000, 0xfffffeb8, 0x00040061, 0x1b050160,
    0x00463d05, 0x00000000, 0xe00e1965, 0x00f01b03,
    0x00040061, 0x3c064540, 0x00000000, 0x00030003,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xa0081a40, 0x0e004302, 0xa0142140, 0x0e000402,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x27162170, 0x04001403, 0x271db670, 0x14000803,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00042161, 0x18052660, 0x00461605, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00042665, 0x1f052620, 0x02461605, 0x00461d05,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0xeb212670, 0x00001803, 0x00041966, 0x00010220,
    0x22462105, 0x00461f05, 0x11040028, 0x0001c660,
    0x000015e8, 0x000015e8, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00043641, 0x27050660,
    0x01460805, 0x00000344, 0x00040041, 0x5c050660,
    0x01460805, 0x00000354, 0x00041940, 0x27160110,
    0x01562716, 0x00565c06, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0291940, 0x0310271a,
    0xa0323640, 0x0a002702, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x272b1a70, 0x27002903,
    0xa02d3140, 0x2901025a, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa0361b40, 0x3201025a,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x272f1a70, 0x02102d0b, 0x00030061, 0x1f060220,
    0x00342d05, 0x00000000, 0x00130061, 0x21060220,
    0x00342e05, 0x00000000, 0x27343270, 0x27003203,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x00032661, 0x23060220, 0x00343605, 0x00000000,
    0x80103601, 0x00000000, 0x00000000, 0x00000000,
    0x00131e61, 0x25060220, 0x00343705, 0x00000000,
    0x27392370, 0x0210360b, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00041f52, 0x31040660,
    0x0eae02a4, 0x2f052b05, 0x27420070, 0x04000803,
    0x00041b52, 0x40040660, 0x0eae02a4, 0x39053405,
    0x00031b61, 0x1f260220, 0x00343105, 0x00000000,
    0x00131c61, 0x21260220, 0x00343205, 0x00000000,
    0x00031b61, 0x23260220, 0x00344005, 0x00000000,
    0x00131c61, 0x25260220, 0x00344105, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x4a140000, 0xfb041f24, 0x00040000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x10140000, 0xfb042324, 0x00040000,
    0xac442670, 0x10101002, 0x00041965, 0x00010220,
    0x22464205, 0x00464405, 0x01040022, 0x0001c060,
    0x00000098, 0x00000088, 0xe2790961, 0x00114004,
    0x80000965, 0x79058220, 0x02007904, 0xffffffff,
    0xe27a0961, 0x00117044, 0x80000965, 0x7a058220,
    0x02007a04, 0xffffffff, 0x227a1965, 0x7a117903,
    0x80001961, 0x46050220, 0x00007a04, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0004004d, 0x44050220, 0x00004604, 0x00000000,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00041a61, 0x44054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00001350,
    0x00040070, 0x00018220, 0x52460e05, 0x00000008,
    0x01040022, 0x0001c060, 0x00001318, 0x00001318,
    0x00041c70, 0x00010220, 0x52460e05, 0x00004404,
    0x01040022, 0x0001c060, 0x000001b8, 0x00000188,
    0x00042669, 0x47058660, 0x02464a05, 0x00000005,
    0xe04c0068, 0x01b04a03, 0xa04e1a40, 0x47010242,
    0x27501970, 0x02104e2b, 0x00033661, 0x24060220,
    0x00344e05, 0x00000000, 0x00133661, 0x26060220,
    0x00344f05, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa0540040, 0x01004e03,
    0x00041c52, 0x52040660, 0x0e2e0264, 0x50054c05,
    0x27561a70, 0x4e005403, 0x00030061, 0x28060220,
    0x00345405, 0x00000000, 0x00130061, 0x2a060220,
    0x00345505, 0x00000000, 0x00031c61, 0x24260220,
    0x00345205, 0x00000000, 0x00131d61, 0x26260220,
    0x00345305, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa0581d40, 0x52025602,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x12440000, 0xfb042424, 0x003c0000,
    0x00031961, 0x28260220, 0x00345805, 0x00000000,
    0x00131a61, 0x2a260220, 0x00345905, 0x00000000,
    0x00042665, 0x1d058220, 0x02461805, 0x07ffffff,
    0x80002601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x13440000, 0xfb042824, 0x003c0000,
    0xe0482168, 0x01d01903, 0x00040024, 0x0001c060,
    0x00000040, 0x00000040, 0x00042661, 0x4a054220,
    0x00000000, 0xffffffff, 0x00041c61, 0x1d054220,
    0x00000000, 0xffffffff, 0x00041c61, 0x48054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00001140, 0xa0590040, 0x00f01b03,
    0xa05b0040, 0xfff01b03, 0xa0613340, 0x00101b03,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00041b70, 0x00018660, 0x56465905, 0x00000010,
    0x80041b61, 0x10014110, 0x00000000, 0x03a003a0,
    0x00040069, 0x10018510, 0x01565b06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x03a003a0,
    0xe05d0961, 0x001b0004, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80041b61, 0x10014110,
    0x00000000, 0x03a003a0, 0x00040069, 0x10018510,
    0x01566106, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x03a003a0, 0xe0630961, 0x001b0004,
    0x11041a62, 0x5f058220, 0x02465d05, 0xffffffff,
    0xa7653370, 0x01006103, 0x01041b62, 0x67058220,
    0x02466305, 0xffffffff, 0xae691b70, 0x1d005f02,
    0x00041b70, 0x00018660, 0x26466505, 0x00000000,
    0x00041a61, 0x6b052660, 0x00466905, 0x00000000,
    0x80041961, 0x10014110, 0x00000000, 0x0d600d60,
    0x00040069, 0x10018510, 0x01566106, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0d600d60,
    0xe06d0961, 0x001b0004, 0xef6f1962, 0x00006d03,
    0x00040070, 0x00018660, 0x26466905, 0x00000000,
    0xef710062, 0x00000e03, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00031961, 0x55060220,
    0x00347105, 0x00000000, 0x00131a61, 0x73060220,
    0x00347205, 0x00000000, 0x00031a61, 0x55264220,
    0x00000000, 0x00000000, 0x00131a61, 0x73264220,
    0x00000000, 0x00000000, 0x80031a61, 0x75064220,
    0x00000000, 0x00000000, 0x00030061, 0x75060220,
    0x00445506, 0x00000000, 0x80131a61, 0x77064220,
    0x00000000, 0x00000000, 0x00130061, 0x77060220,
    0x00447306, 0x00000000, 0x80031a61, 0x3e060220,
    0x00447506, 0x00000000, 0x80030061, 0x75264220,
    0x00000000, 0x00000000, 0x00030061, 0x75260220,
    0x00445526, 0x00000000, 0x80131b61, 0x0c060220,
    0x00447706, 0x00000000, 0x80130061, 0x77264220,
    0x00000000, 0x00000000, 0x00130061, 0x77260220,
    0x00447326, 0x00000000, 0x80031b61, 0x3e260220,
    0x00447526, 0x00000000, 0x80131a61, 0x0c260220,
    0x00447726, 0x00000000, 0x80021a70, 0x00010220,
    0x32423e07, 0x00423e47, 0x81020070, 0x00010220,
    0x12423e27, 0x00423e67, 0x91020070, 0x00010220,
    0x32423e27, 0x00423e67, 0x81020061, 0x3e470220,
    0x00423e07, 0x00000000, 0x81021961, 0x3e670220,
    0x00423e27, 0x00000000, 0x80011970, 0x00010220,
    0x32003e44, 0x00323e86, 0x81010070, 0x00010220,
    0x12003e64, 0x00323ea6, 0x91010070, 0x00010220,
    0x32003e64, 0x00323ea6, 0x81010061, 0x3e860220,
    0x00003e44, 0x00000000, 0x81011961, 0x3ea60220,
    0x00003e64, 0x00000000, 0x80011e70, 0x00010220,
    0x32003f44, 0x00323f86, 0x81010070, 0x00010220,
    0x12003f64, 0x00323fa6, 0x91010070, 0x00010220,
    0x32003f64, 0x00323fa6, 0x81010061, 0x3f860220,
    0x00003f44, 0x00000000, 0x81011961, 0x3fa60220,
    0x00003f64, 0x00000000, 0x80021970, 0x00010220,
    0x32003ec4, 0x00443f06, 0x81020070, 0x00010220,
    0x12003ee4, 0x00443f26, 0x91020070, 0x00010220,
    0x32003ee4, 0x00443f26, 0x81020061, 0x3f060220,
    0x00003ec4, 0x00000000, 0x81021961, 0x3f260220,
    0x00003ee4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00030040, 0x74050660,
    0x06460e05, 0x02443e06, 0x80020070, 0x00010220,
    0x32420c07, 0x00420c47, 0x81020070, 0x00010220,
    0x12420c27, 0x00420c67, 0x91020070, 0x00010220,
    0x32420c27, 0x00420c67, 0x81020061, 0x0c470220,
    0x00420c07, 0x00000000, 0x81021961, 0x0c670220,
    0x00420c27, 0x00000000, 0x80011970, 0x00010220,
    0x32000c44, 0x00320c86, 0x81010070, 0x00010220,
    0x12000c64, 0x00320ca6, 0x91010070, 0x00010220,
    0x32000c64, 0x00320ca6, 0x81010061, 0x0c860220,
    0x00000c44, 0x00000000, 0x81011961, 0x0ca60220,
    0x00000c64, 0x00000000, 0x80011e70, 0x00010220,
    0x32000d44, 0x00320d86, 0x81010070, 0x00010220,
    0x12000d64, 0x00320da6, 0x91010070, 0x00010220,
    0x32000d64, 0x00320da6, 0x81010061, 0x0d860220,
    0x00000d44, 0x00000000, 0x81011961, 0x0da60220,
    0x00000d64, 0x00000000, 0x80021970, 0x00010220,
    0x32000cc4, 0x00440d06, 0x81020070, 0x00010220,
    0x12000ce4, 0x00440d26, 0x91020070, 0x00010220,
    0x32000ce4, 0x00440d26, 0x81020061, 0x0d060220,
    0x00000cc4, 0x00000000, 0x81021961, 0x0d260220,
    0x00000ce4, 0x00000000, 0x80031970, 0x00010220,
    0x32003fc4, 0x00440c06, 0x81030070, 0x00010220,
    0x12003fe4, 0x00440c26, 0x91030070, 0x00010220,
    0x32003fe4, 0x00440c26, 0x81030061, 0x0c060220,
    0x00003fc4, 0x00000000, 0x81031961, 0x0c260220,
    0x00003fe4, 0x00000000, 0x80101901, 0x00000000,
    0x00000000, 0x00000000, 0x00130040, 0x75050660,
    0x06460f05, 0x02440c06, 0x00040070, 0x00010220,
    0x52460e05, 0x00004404, 0x01040022, 0x0001c060,
    0x00000b90, 0x00000b90, 0x80040061, 0x78054660,
    0x00000000, 0x00000000, 0x00040061, 0x78052660,
    0x00466905, 0x00000000, 0x00040070, 0x00018660,
    0x16460e05, 0x00000000, 0x80031a40, 0x78260660,
    0x06447806, 0x00447826, 0x80021940, 0x78470660,
    0x06427827, 0x00427847, 0x80021940, 0x78670660,
    0x06427827, 0x00427867, 0x80021940, 0x78850660,
    0x06007864, 0x00347885, 0x80021a40, 0x79850660,
    0x06007964, 0x00347985, 0xa4791940, 0x79017882,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x76050660, 0x000079e4, 0x00000000,
    0x01040022, 0x0001c060, 0x000003c0, 0x000003b0,
    0xa0790040, 0x01c1026b, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x277b9570, 0x0210794b,
    0x00033161, 0x29060220, 0x00347905, 0x00000000,
    0x00133161, 0x2b060220, 0x00347a05, 0x00000000,
    0xa07db540, 0x02127b52, 0x00031961, 0x29260220,
    0x00347d05, 0x00000000, 0x00131a61, 0x2b260220,
    0x00347e05, 0x00000000, 0xe27f0961, 0x00114004,
    0x80000965, 0x7f058220, 0x02007f04, 0xffffffff,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0xe2140961, 0x00117044, 0x80000965, 0x14058220,
    0x02001404, 0xffffffff, 0x22141965, 0x14117f03,
    0x80009661, 0x12050220, 0x00001404, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0004214d, 0x14050220, 0x00001204, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041941, 0x1f050660, 0x01461405, 0x00567606,
    0x00040041, 0x5d050660, 0x01461405, 0x00567616,
    0x00041940, 0x1f160110, 0x01561f16, 0x00565d06,
    0xe21a0961, 0x00114004, 0x80000965, 0x1a058220,
    0x02001a04, 0xffffffff, 0x00042161, 0x18050160,
    0x00463d05, 0x00000000, 0x8000a14c, 0x16050220,
    0x00001a04, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040070, 0x00010660,
    0x16461805, 0x00001604, 0x01040022, 0x0001c060,
    0x00000040, 0x00000040, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80001e01, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x06140000,
    0xfb182924, 0x01001f14, 0x00040025, 0x00004600,
    0x00000000, 0x000001d8, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xe21f0961, 0x00114004,
    0x80000965, 0x1f058220, 0x02001f04, 0xffffffff,
    0x8000194c, 0x19050220, 0x00001f04, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80002569, 0x10018220, 0x02001904, 0x00000002,
    0x80000961, 0x1f050220, 0x00010300, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xe2270961, 0x00114004, 0x80000965, 0x27058220,
    0x02002704, 0xffffffff, 0x00043661, 0x23050160,
    0x00463d05, 0x00000000, 0x80000061, 0x3b054660,
    0x00000000, 0x00000001, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xe2280961, 0x00117044,
    0x80000965, 0x28058220, 0x02002804, 0xffffffff,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00043669, 0x25052660, 0x02003b04, 0x00462305,
    0x22281a65, 0x28112703, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001961, 0x21050220,
    0x00002804, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040065, 0x27050220,
    0x06002104, 0x02462505, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x0004194d, 0x29050220,
    0x00462705, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00041941, 0x2b050660,
    0x01462905, 0x00567606, 0x00040041, 0x5e050660,
    0x01462905, 0x00567616, 0x00041940, 0x2b160110,
    0x01562b16, 0x00565e06, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0460040, 0x2b011f02,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00041a61, 0x46054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000718,
    0x80040061, 0x2c054660, 0x00000000, 0x00000000,
    0x00040061, 0x2c052660, 0x00466905, 0x00000000,
    0x00040070, 0x00010660, 0x26466705, 0x00461d05,
    0x80031a40, 0x2c260660, 0x06442c06, 0x00442c26,
    0x80021940, 0x2c470660, 0x06422c27, 0x00422c47,
    0x80021940, 0x2c670660, 0x06422c27, 0x00422c67,
    0x80021940, 0x2c850660, 0x06002c64, 0x00342c85,
    0x80021a40, 0x2d850660, 0x06002d64, 0x00342d85,
    0xa42d1940, 0x2d012c82, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x34044560,
    0x0606ffff, 0x2c054604, 0x01040022, 0x0001c060,
    0x000000f8, 0x000000f8, 0x00040065, 0x36058220,
    0x02461d05, 0x00ffffff, 0x00041b69, 0x39058660,
    0x02463405, 0x00000006, 0xe0400068, 0x01a03403,
    0x00040069, 0x4c058660, 0x02464805, 0x0000001e,
    0xa04e0040, 0x00107403, 0x00041d66, 0x2e058220,
    0x02463605, 0xff000000, 0xa0421d40, 0x3901026a,
    0x20301c66, 0x4c001d03, 0x00041c66, 0x32058220,
    0x02464e05, 0xfffffff0, 0x27461b70, 0x0210424b,
    0x00033161, 0x2a060220, 0x00344205, 0x00000000,
    0x00130061, 0x2c060220, 0x00344305, 0x00000000,
    0x00041b52, 0x48040660, 0x0e2e02e4, 0x46054005,
    0x00031961, 0x2a260220, 0x00344805, 0x00000000,
    0x00131a61, 0x2c260220, 0x00344905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb0c2a24, 0x001c2e34,
    0x00040025, 0x00004600, 0x00000000, 0x00000568,
    0x00040069, 0x4f058660, 0x02464a05, 0x00000005,
    0xe0510068, 0x01b04a03, 0xa0533240, 0x01010243,
    0x00041e69, 0x5e058660, 0x02463405, 0x00000006,
    0xe0600068, 0x01a03403, 0x00040069, 0x68058660,
    0x02467405, 0x00000002, 0x27551c70, 0x0210532b,
    0xa0591f40, 0x4f005302, 0xa0621d40, 0x5e01026a,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa0571b40, 0x0212551a, 0x275b1b70, 0x53005903,
    0x00033161, 0x2f060220, 0x00345905, 0x00000000,
    0x00133161, 0x31060220, 0x00345a05, 0x00000000,
    0x27641d70, 0x0210624b, 0xa06a0040, 0x00c06203,
    0x00041d52, 0x5d040e68, 0x0e2e5705, 0x5b055105,
    0x00041b52, 0x66040660, 0x0e2e02e4, 0x64056005,
    0xa0711b40, 0x68006a02, 0x276c0070, 0x62006a03,
    0x00031c61, 0x2f260220, 0x00345d05, 0x00000000,
    0x00131d61, 0x31260220, 0x00345e05, 0x00000000,
    0x27731c70, 0x6a007103, 0x00033161, 0x33060220,
    0x00347105, 0x00000000, 0x00130061, 0x35060220,
    0x00347205, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x1e440000,
    0xfb042f24, 0x003c0000, 0x00041b52, 0x75042e68,
    0x0e2e6c05, 0x73056605, 0x00031961, 0x33260220,
    0x00347505, 0x00000000, 0x00131a61, 0x35260220,
    0x00347605, 0x00000000, 0x00042665, 0x26058220,
    0x02462405, 0x1fffffff, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xfb0c3324, 0x00042614, 0x00040070, 0x00018660,
    0x16460e05, 0x00000000, 0x01040022, 0x0001c060,
    0x00000270, 0x00000270, 0x00040069, 0x76058660,
    0x02461005, 0x00000006, 0xe0780068, 0x01a01003,
    0xa07a1a40, 0x7601026a, 0x277c9570, 0x02107a4b,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0xa0122640, 0x7a206202, 0xa0293140, 0x00c07a03,
    0x27142170, 0x7a006203, 0x00041c52, 0x7e040660,
    0x0e2e02e4, 0x7c057805, 0xeb18c170, 0x00001203,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00031c61, 0x34060220, 0x00342905, 0x00000000,
    0x80103601, 0x00000000, 0x00000000, 0x00000000,
    0x00131d61, 0x36060220, 0x00342a05, 0x00000000,
    0x0004c152, 0x16040e68, 0x0e8e6605, 0x14057e05,
    0xa01d9640, 0x18021602, 0x00040070, 0x00018660,
    0x56461605, 0x00000000, 0x2f1fa662, 0x16001d03,
    0xaf212662, 0x12021202, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00041a69, 0x25058660,
    0x02461f05, 0x0000001a, 0xe023a668, 0x00602103,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x20271966, 0x25002303, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xaf2f1962, 0x27022702,
    0x272b3170, 0x7a002903, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa02d1940, 0x7e022b02,
    0x00031961, 0x34260220, 0x00342d05, 0x00000000,
    0x00131a61, 0x36260220, 0x00342e05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x00000000, 0xfb0c3424, 0x00042f14,
    0xa02e3740, 0x01007a03, 0x00040061, 0x39050020,
    0x00563c06, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x27301a70, 0x7a002e03,
    0x00033761, 0x34060220, 0x00342e05, 0x00000000,
    0x00133761, 0x36060220, 0x00342f05, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa0321b40, 0x7e023002, 0x00031961, 0x34260220,
    0x00343205, 0x00000000, 0x00131a61, 0x36260220,
    0x00343305, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xf3083424, 0x00023914, 0x00040025, 0x00004600,
    0x00000000, 0x00000120, 0x20333666, 0x68006f03,
    0x00043669, 0x39058660, 0x02461005, 0x00000006,
    0xe0400068, 0x01a01003, 0xa0420040, 0x0161026b,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00041c61, 0x78070200, 0x00463305, 0x00000000,
    0x27461a70, 0x0210424b, 0xa0481d40, 0x39004202,
    0x00041b61, 0x54050020, 0x00667807, 0x00000000,
    0x00041b52, 0x4c042e68, 0x06064605, 0x400502e4,
    0x274a1b70, 0x42004803, 0xa04e0040, 0x0e004802,
    0x27501970, 0x48004e03, 0x00033661, 0x35060220,
    0x00344e05, 0x00000000, 0x80103201, 0x00000000,
    0x00000000, 0x00000000, 0x00133661, 0x37060220,
    0x00344f05, 0x00000000, 0x00041b52, 0x52042e68,
    0x0e2e4a05, 0x50054c05, 0x00031961, 0x35260220,
    0x00345205, 0x00000000, 0x00131a61, 0x37260220,
    0x00345305, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xf3083524, 0x00025414, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000018, 0xa0081c40, 0x44100802,
    0x00040027, 0x00014060, 0x00000000, 0xffffe988,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_leaf_primref_to_procedurals = {
   .prog_data = {
      .base.nr_params = 20,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 3,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 7488,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_leaf_primref_to_procedurals_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_leaf_primref_to_procedurals_printfs,
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
      .push.cross_thread.dwords = 20,
      .push.cross_thread.regs = 3,
      .push.cross_thread.size = 96,
   },
   .args_size = 48,
   .arg_count = 7,
   .args = gfx125_bvh_build_leaf_primref_to_procedurals_args,
   .code = gfx125_bvh_build_leaf_primref_to_procedurals_code,
};
const char *gfx125_bvh_build_leaf_primref_to_procedurals_sha1 = "d910a517a9f411a18f7f3a4921195d4eb9297c37";

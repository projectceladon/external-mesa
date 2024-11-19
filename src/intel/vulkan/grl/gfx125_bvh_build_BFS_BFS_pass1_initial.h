#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_BFS_BFS_pass1_initial_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_BFS_BFS_pass1_initial_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_BFS_BFS_pass1_initial_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g125<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
and(16)         g70<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g125UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g125<1>UD       g0.1<0,1,0>UD                   { align1 1H };
mov(8)          g31<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g72<1>D         g70<8,8,1>D     0x00000004UD    { align1 1H I@3 };
shl(16)         g65<1>D         g125<8,8,1>D    0x00000009UD    { align1 1H I@3 };
add(8)          g31.8<1>UW      g31<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@3 compacted };
add(16)         g67<1>D         g65<1,1,0>D     512D            { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g74<1>D         g31<8,8,1>UW                    { align1 1H };
add(16)         g76<1>D         g74<1,1,0>D     g72<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g46<1>D         g2.2<0,1,0>D    52D             { align1 1H compacted };
add(16)         g52<1>D         g2.2<0,1,0>D    8D              { align1 1H compacted };
cmp.l.f0.0(16)  g48<1>UD        g46<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g54<1>UD        g52<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g14<2>UD        g52<4,4,1>UD                    { align1 1Q };
mov(8)          g16<2>UD        g53<4,4,1>UD                    { align1 2Q };
add(16)         g50<1>D         -g48<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@4 compacted };
add(16)         g56<1>D         -g54<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@4 compacted };
mov(8)          g14.1<2>UD      g56<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g16.1<2>UD      g57<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g57UD           g14UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
add(16)         g78<1>D         g61<1,1,0>D     32D             { align1 1H $1.dst compacted };
cmp.l.f0.0(16)  g80<1>UD        g78<1,1,0>UD    g61<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g15<2>UD        g78<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g17<2>UD        g79<4,4,1>UD                    { align1 2Q $1.src };
add(16)         g82<1>D         -g80<1,1,0>D    g63<1,1,0>D     { align1 1H @3 $1.dst compacted };
mov(8)          g15.1<2>UD      g82<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g17.1<2>UD      g83<4,4,1>UD                    { align1 2Q I@2 };
add(16)         g83<1>D         g61<1,1,0>D     48D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g3UD            g15UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
cmp.l.f0.0(16)  g85<1>UD        g83<1,1,0>UD    0x00000030UD    { align1 1H I@1 compacted };
mov(8)          g16<2>UD        g83<4,4,1>UD                    { align1 1Q $2.src };
mov(8)          g18<2>UD        g84<4,4,1>UD                    { align1 2Q $2.src };
add(16)         g87<1>D         -g85<1,1,0>D    g63<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g16.1<2>UD      g87<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g18.1<2>UD      g88<4,4,1>UD                    { align1 2Q I@2 };
add(16)         g89<1>F         g9<1,1,0>F      -g3<1,1,0>F     { align1 1H $2.dst compacted };
sel.ge(16)      g95<1>F         g89<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@1 };
cmp.l.f0.0(16)  g107<1>F        g95<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H F@1 };
math inv(16)    g98<1>F         g95<8,8,1>F     null<8,8,1>F    { align1 1H $3 };
cmp.g.f0.0(16)  g109<1>F        g89<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g88UD           g16UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mul(16)         g100<1>F        g98<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H $3.dst };
and.nz.f0.0(16) null<1>UD       g107<8,8,1>UD   g109<8,8,1>UD   { align1 1H F@2 };
mov(8)          g13<2>UD        g46<4,4,1>UD                    { align1 1Q $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $4.src };
mov(8)          g15<2>UD        g47<4,4,1>UD                    { align1 2Q $2.src };
and(16)         g45<1>UD        g76<1,1,0>UD    0x000001ffUD    { align1 1H compacted };
(+f0.0) sel(16) g11<1>UD        g100<1,1,0>UD   0x00000000UD    { align1 1H F@1 compacted };
mov(8)          g13.1<2>UD      g50<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g15.1<2>UD      g51<4,4,1>UD                    { align1 2Q I@4 };
add(16)         g77<1>D         g65<1,1,0>D     g45<1,1,0>D     { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g51UD           g13UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
add(16)         g92<1>F         g88<1,1,0>F     -g5<1,1,0>F     { align1 1H $4.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g94<1>F         g90<1,1,0>F     -g7<1,1,0>F     { align1 1H $4.dst compacted };
cmp.g.f0.0(16)  g110<1>F        g92<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H A@2 };
sel.ge(16)      g96<1>F         g92<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
math inv(16)    g101<1>F        g96<8,8,1>F     null<8,8,1>F    { align1 1H $5 };
cmp.l.f0.0(16)  g112<1>F        g96<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H $5.src };
sel.ge(16)      g97<1>F         g94<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@4 };
sel.l(16)       g69<1>UD        g67<1,1,0>UD    g51<1,1,0>UD    { align1 1H $4.dst compacted };
mul(16)         g103<1>F        g101<8,8,1>F    0x417d70a4F  /* 15.84F */ { align1 1H $5.dst };
and.nz.f0.0(16) null<1>UD       g112<8,8,1>UD   g110<8,8,1>UD   { align1 1H F@3 };
(+f0.0) sel(16) g113<1>UD       g103<1,1,0>UD   0x00000000UD    { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
math inv(16)    g104<1>F        g97<8,8,1>F     null<8,8,1>F    { align1 1H $6 };
cmp.g.f0.0(16)  g115<1>F        g94<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
cmp.l.f0.0(16)  g117<1>F        g97<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H $6.src };
mul(16)         g106<1>F        g104<8,8,1>F    0x417d70a4F  /* 15.84F */ { align1 1H $6.dst };
and.nz.f0.0(16) null<1>UD       g117<8,8,1>UD   g115<8,8,1>UD   { align1 1H F@2 };
(+f0.0) sel(16) g118<1>UD       g106<1,1,0>UD   0x00000000UD    { align1 1H F@1 compacted };
cmp.l.f0.0(16)  g120<1>UD       g77<1,1,0>UD    g69<1,1,0>UD    { align1 1H I@5 compacted };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g122<1>D        g77<8,8,1>D     0x00000005UD    { align1 1H };
add(16)         g125<1>D        g57<1,1,0>D     g122<1,1,0>D    { align1 1H @1 $1.dst compacted };
shr(16)         g123<1>UD       g77<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g13<1>UD        g125<1,1,0>UD   g57<1,1,0>UD    { align1 1H I@2 compacted };
add(16)         g17<1>D         g125<1,1,0>D    16D             { align1 1H $4.src compacted };
mov(8)          g23<2>UD        g125<4,4,1>UD                   { align1 1Q };
mov(8)          g25<2>UD        g126<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add3(16)        g15<1>D         g59<8,8,1>D     g123<8,8,1>D    -g13<1,1,1>D { align1 1H @4 $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g19<1>UD        g17<1,1,0>UD    g125<1,1,0>UD   { align1 1H I@4 compacted };
mov(8)          g29<2>UD        g17<4,4,1>UD                    { align1 1Q };
mov(8)          g31<2>UD        g18<4,4,1>UD                    { align1 2Q };
mov(8)          g25.1<2>UD      g16<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g23.1<2>UD      g15<4,4,1>UD                    { align1 1Q I@5 };
add(16)         g21<1>D         -g19<1,1,0>D    g15<1,1,0>D     { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g13UD           g23UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
mov(8)          g29.1<2>UD      g21<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g31.1<2>UD      g22<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g21UD           g29UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
shl(16)         g39<1>D         g45<8,8,1>D     0x00000002UD    { align1 1H };
mov(16)         g37<1>UD        g39<8,8,1>UD                    { align1 1H I@1 };

LABEL3:
cmp.ge.f0.0(16) null<1>UD       g37<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL2        UIP:  LABEL2              { align1 1H };
shl(16)         g41<1>D         g37<8,8,1>D     0x00000002UD    { align1 1H $7.src };
mov(16)         g29<1>UD        0x7f800000UD                    { align1 1H $7.src };
mov(16)         g31<1>UD        0x7f800000UD                    { align1 1H $7.src };
mov(16)         g33<1>UD        0x7f800000UD                    { align1 1H $7.src };
mov(16)         g35<1>UD        0x7f800000UD                    { align1 1H $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g41UD           g29UD           0x0400f506                0x00000200
                            slm MsgDesc: ( store_cmask, a32, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 8 flat )  base_offset 0  { align1 1H $7 };
add(16)         g37<1>D         g37<8,8,1>D     2048D           { align1 1H };

LABEL2:
while(16)       JIP:  LABEL3                                    { align1 1H };
nop                                                             ;

LABEL5:
cmp.ge.f0.0(16) null<1>UD       g39<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
shl(16)         g29<1>D         g39<8,8,1>D     0x00000002UD    { align1 1H $7.src };
mov(16)         g32<1>UD        0x00000000UD                    { align1 1H $7.src };
mov(16)         g34<1>UD        0x00000000UD                    { align1 1H $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g36<1>UD        0x00000000UD                    { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g42<1>D         g29<1,1,0>D     1152D           { align1 1H I@4 compacted };
mov(16)         g30<1>UD        0x00000000UD                    { align1 1H $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g42UD           g30UD           0x0400f506                0x00000200
                            slm MsgDesc: ( store_cmask, a32, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 8 flat )  base_offset 0  { align1 1H $7 };
add(16)         g39<1>D         g39<8,8,1>D     2048D           { align1 1H };

LABEL4:
while(16)       JIP:  LABEL5                                    { align1 1H };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
send(1)         g30UD           g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
mov(8)          g31<1>UD        0x00000000UD                    { align1 WE_all 1Q $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(2)          g31.10<1>UB     g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g31UD           nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $9 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
add(16)         g32<1>F         g13<1,1,0>F     g21<1,1,0>F     { align1 1H $4.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
add(16)         g34<1>F         g15<1,1,0>F     g23<1,1,0>F     { align1 1H $4.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
add(16)         g36<1>F         g17<1,1,0>F     g25<1,1,0>F     { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g40<1>F         g36<1,1,0>F     -g7<1,1,0>F     { align1 1H A@1 compacted };
add(16)         g37<1>F         g32<1,1,0>F     -g3<1,1,0>F     { align1 1H A@4 compacted };
mul(16)         g47<1>F         g40<1,1,0>F     g118<1,1,0>F    { align1 1H A@2 compacted };
add(16)         g39<1>F         g34<1,1,0>F     -g5<1,1,0>F     { align1 1H A@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mul(16)         g41<1>F         g37<1,1,0>F     g11<1,1,0>F     { align1 1H F@3 compacted };
mov(16)         g53<1>UD        g47<8,8,1>F                     { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mul(16)         g43<1>F         g39<1,1,0>F     g113<1,1,0>F    { align1 1H F@2 compacted };
mov(16)         g49<1>UD        g41<8,8,1>F                     { align1 1H F@2 };
mov(16)         g51<1>UD        g43<8,8,1>F                     { align1 1H F@1 };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g120<8,8,1>UD   0x00000000UD    { align1 1H };
mov(16)         g40<1>UD        f0<0,1,0>UW                     { align1 1H F@1 };
mov(1)          g83<1>D         1D                              { align1 WE_all 1N };
and(16)         g55<1>UD        g74<1,1,0>UD    0x00000003UD    { align1 1H compacted };
shr(16)         g57<1>UD        g74<1,1,0>UD    0x00000002UD    { align1 1H $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shl(16)         g59<1>D         g83<0,1,0>D     g74<8,8,1>UD    { align1 1H $1.dst };

LABEL8:
cmp.z.f0.0(16)  null<1>D        g40<8,8,1>D     0D              { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL6        UIP:  LABEL6              { align1 1H };
fbl(16)         g61<1>UD        g40<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         a0<1>UW         0x0620UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g61<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0620UW        { align1 1H A@1 };
mov(16)         g63<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.z.f0.0(16)  g65<1>D         g63<1,1,0>D     g49<1,1,0>D     { align1 1H I@1 compacted };
and.nz.f0.0(16) null<1>UD       g65<8,8,1>UD    g120<8,8,1>UD   { align1 1H I@1 };
(+f0.0) sel(16) g67<1>UD        g21<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g69<1>UD        g23<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g71<1>UD        g13<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g73<1>UD        g15<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         g82<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g82<1>F         g67<1,1,0>F                     { align1 1H compacted };
mov(16)         g84<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@3 compacted };
mov(16)         g84<1>F         g69<1,1,0>F                     { align1 1H compacted };
mov(16)         g76<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g76<1>F         g71<1,1,0>F                     { align1 1H compacted };
mov(16)         g78<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g78<1>F         g73<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g70<1>UD        g25<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g74<1>UD        g17<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(8)          g6<2>UD         g82.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g36<2>UD        g84.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g88<2>UD        g76.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g101<2>UD       g78.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(16)         g80<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@5 compacted };
mov(16)         g80<1>F         g74<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g55<8,8,1>D     1D              { align1 1H };
sel.ge(8)       g4<2>F          g82<8,4,2>F     g6<8,4,2>F      { align1 WE_all 1Q A@5 };
sel.ge(8)       g34<2>F         g84<8,4,2>F     g36<8,4,2>F     { align1 WE_all 1Q A@4 };
sel.l(8)        g86<2>F         g76<8,4,2>F     g88<8,4,2>F     { align1 WE_all 1Q A@3 };
sel.l(8)        g99<2>F         g78<8,4,2>F     g101<8,4,2>F    { align1 WE_all 1Q I@2 };
mov(8)          g114<2>UD       g80.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g82.1<2>UD      g4<8,4,2>UD                     { align1 WE_all 1Q A@4 };
mov(8)          g84.1<2>UD      g34<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g76.1<2>UD      g86<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g78.1<2>UD      g99<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(16)         g86<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@2 compacted };
mov(16)         g86<1>F         g70<1,1,0>F                     { align1 1H compacted };
sel.l(8)        g112<2>F        g80<8,4,2>F     g114<8,4,2>F    { align1 WE_all 1Q I@5 };
mov(4)          g11<4>UD        g82.2<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g9<4>UD         g82.1<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(4)          g47<4>UD        g84.2<8,2,4>UD                  { align1 WE_all 1N I@5 };
mov(4)          g42<4>UD        g84.1<8,2,4>UD                  { align1 WE_all 1N $10.src };
mov(4)          g93<4>UD        g76.2<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g91<4>UD        g76.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g106<4>UD       g78.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g104<4>UD       g78.1<8,2,4>UD                  { align1 WE_all 1N };
mov(8)          g72<2>UD        g86.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g80.1<2>UD      g112<8,4,2>UD                   { align1 WE_all 1Q F@1 };
sel.ge(4)       g7<4>F          g9<8,2,4>F      g11<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g37<4>F         g42<8,2,4>F     g47<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g89<4>F         g91<8,2,4>F     g93<8,2,4>F     { align1 WE_all 1N I@5 };
sel.l(4)        g102<4>F        g104<8,2,4>F    g106<8,2,4>F    { align1 WE_all 1N I@3 };
sel.ge(8)       g70<2>F         g86<8,4,2>F     g72<8,4,2>F     { align1 WE_all 1Q I@2 };
mov(4)          g122<4>UD       g80.2<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g117<4>UD       g80.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g82.2<4>UD      g7<8,2,4>UD                     { align1 WE_all 1N F@5 };
mov(4)          g84.2<4>UD      g37<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g76.2<4>UD      g89<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g78.2<4>UD      g102<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(8)          g86.1<2>UD      g70<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sel.l(4)        g115<4>F        g117<8,2,4>F    g122<8,2,4>F    { align1 WE_all 1N I@6 };
mov(4)          g33<4>UD        g82.3<8,2,4>UD                  { align1 WE_all 1N I@5 };
mov(4)          g31<4>UD        g82.1<8,2,4>UD                  { align1 WE_all 1N $9.src };
mov(4)          g67<4>UD        g84.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g98<4>UD        g76.3<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g96<4>UD        g76.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g111<4>UD       g78.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g109<4>UD       g78.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g90<4>UD        g86.2<8,2,4>UD                  { align1 WE_all 1N A@4 };
mov(4)          g88<4>UD        g86.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g80.2<4>UD      g115<8,2,4>UD                   { align1 WE_all 1N F@1 };
mov(4)          g69<4>UD        g84.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.ge(4)       g29<4>F         g31<8,2,4>F     g33<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g94<4>F         g96<8,2,4>F     g98<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g107<4>F        g109<8,2,4>F    g111<8,2,4>F    { align1 WE_all 1N I@5 };
sel.ge(4)       g73<4>F         g88<8,2,4>F     g90<8,2,4>F     { align1 WE_all 1N I@3 };
mov(4)          g3<4>UD         g80.3<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g125<4>UD       g80.1<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g61<4>F         g67<8,2,4>F     g69<8,2,4>F     { align1 WE_all 1N I@3 };
mov(4)          g82.3<4>UD      g29<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g76.3<4>UD      g94<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g78.3<4>UD      g107<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g86.2<4>UD      g73<8,2,4>UD                    { align1 WE_all 1N F@2 };
sel.l(4)        g123<4>F        g125<8,2,4>F    g3<8,2,4>F      { align1 WE_all 1N I@5 };
mov(4)          g84.3<4>UD      g61<8,2,4>UD                    { align1 WE_all 1N F@2 };
sel.ge(4)       g82.4<1>F       g82.3<0,1,0>F   g82.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g83.4<1>F       g83.3<0,1,0>F   g83.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.l(4)        g76.4<1>F       g76.3<0,1,0>F   g76.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g77.4<1>F       g77.3<0,1,0>F   g77.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g78.4<1>F       g78.3<0,1,0>F   g78.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g79.4<1>F       g79.3<0,1,0>F   g79.4<4,4,1>F   { align1 WE_all 1N I@3 };
mov(4)          g95<4>UD        g86.3<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g93<4>UD        g86.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g80.3<4>UD      g123<8,2,4>UD                   { align1 WE_all 1N F@7 };
sel.ge(4)       g84.4<1>F       g84.3<0,1,0>F   g84.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g85.4<1>F       g85.3<0,1,0>F   g85.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(8)       g83<1>F         g82.7<0,1,0>F   g83<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.l(8)        g77<1>F         g76.7<0,1,0>F   g77<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.l(8)        g79<1>F         g78.7<0,1,0>F   g79<8,8,1>F     { align1 WE_all 1Q F@5 };
sel.ge(4)       g91<4>F         g93<8,2,4>F     g95<8,2,4>F     { align1 WE_all 1N I@2 };
sel.l(4)        g80.4<1>F       g80.3<0,1,0>F   g80.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g81.4<1>F       g81.3<0,1,0>F   g81.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g85<1>F         g84.7<0,1,0>F   g85<8,8,1>F     { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g88<1>UD        g79.7<0,1,0>UD  g77.7<0,1,0>UD  { align1 1H };
mov(4)          g86.3<4>UD      g91<8,2,4>UD                    { align1 WE_all 1N F@4 };
sel.l(8)        g81<1>F         g80.7<0,1,0>F   g81<8,8,1>F     { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g90<1>UD        g85.7<0,1,0>UD  g83.7<0,1,0>UD  { align1 1H };
sel.ge(4)       g86.4<1>F       g86.3<0,1,0>F   g86.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g87.4<1>F       g87.3<0,1,0>F   g87.4<4,4,1>F   { align1 WE_all 1N I@2 };
cmp.z.f0.0(16)  null<1>D        g55<8,8,1>D     2D              { align1 1H };
sel.ge(8)       g87<1>F         g86.7<0,1,0>F   g87<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g92<1>UD        g81.7<0,1,0>UD  g88<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g94<1>UD        g87.7<0,1,0>UD  g90<1,1,0>UD    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g57<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g47<1>F         g92<1,1,0>F     -g94<1,1,0>F    { align1 1H I@2 compacted };
and.nz.f0.0(16) null<1>UD       g59<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mul(16)         g95<1>D         g63<1,1,0>D     6W              { align1 1H compacted };
mul(16)         g97<1>D         g57<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g99<1>D         g95<8,8,1>D     g55<8,8,1>D     g97<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g43<1>D         g99<8,8,1>D     0x00000002UD    { align1 1H $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g43UD           g47UD           0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $10 };

LABEL7:
endif(16)       JIP:  LABEL6                                    { align1 1H };
or(16)          g100<1>D        ~g65<1,1,0>D    ~g120<1,1,0>D   { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g100<8,8,1>UD   0x00000000UD    { align1 1H I@2 };
mov(16)         g101<1>UD       f0<0,1,0>UW                     { align1 1H };
and(16)         g40<1>UD        g40<1,1,0>UD    g101<1,1,0>UD   { align1 1H I@1 compacted };

LABEL6:
while(16)       JIP:  LABEL8                                    { align1 1H };
add(16)         g102<1>D        g51<1,1,0>D     16D             { align1 1H I@4 compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g120<8,8,1>UD   0x00000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
mov(16)         g41<1>UD        f0<0,1,0>UW                     { align1 1H };

LABEL11:
cmp.z.f0.0(16)  null<1>D        g41<8,8,1>D     0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL9        UIP:  LABEL9              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
fbl(16)         g104<1>UD       g41<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         a0<1>UW         0x0cc0UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g104<16,8,2>W   0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0cc0UW        { align1 1H A@1 };
mov(16)         g106<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  g108<1>D        g106<1,1,0>D    g102<1,1,0>D    { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g108<8,8,1>UD   g120<8,8,1>UD   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
(+f0.0) sel(16) g110<1>UD       g21<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g112<1>UD       g23<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g114<1>UD       g13<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g116<1>UD       g15<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         g3<1>F          0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g3<1>F          g110<1,1,0>F                    { align1 1H compacted };
mov(16)         g5<1>F          0xff800000F      /* -infF */    { align1 WE_all 1H A@3 compacted };
mov(16)         g5<1>F          g112<1,1,0>F                    { align1 1H compacted };
mov(16)         g122<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g122<1>F        g114<1,1,0>F                    { align1 1H compacted };
mov(16)         g124<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g124<1>F        g116<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g113<1>UD       g25<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g117<1>UD       g17<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(8)          g68<2>UD        g3.1<8,4,2>UD                   { align1 WE_all 1Q F@4 };
mov(8)          g81<2>UD        g5.1<8,4,2>UD                   { align1 WE_all 1Q F@3 };
mov(8)          g98<2>UD        g122.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
mov(8)          g7<2>UD         g124.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
cmp.z.f0.0(16)  null<1>D        g55<8,8,1>D     1D              { align1 1H };
sel.ge(8)       g66<2>F         g3<8,4,2>F      g68<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.ge(8)       g79<2>F         g5<8,4,2>F      g81<8,4,2>F     { align1 WE_all 1Q A@4 };
sel.l(8)        g96<2>F         g122<8,4,2>F    g98<8,4,2>F     { align1 WE_all 1Q I@3 };
sel.l(8)        g126<2>F        g124<8,4,2>F    g7<8,4,2>F      { align1 WE_all 1Q A@2 };
mov(16)         g7<1>F          0xff800000F      /* -infF */    { align1 WE_all 1H I@7 compacted };
mov(16)         g7<1>F          g113<1,1,0>F                    { align1 1H compacted };
mov(8)          g3.1<2>UD       g66<8,4,2>UD                    { align1 WE_all 1Q A@5 };
mov(8)          g5.1<2>UD       g79<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g122.1<2>UD     g96<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g124.1<2>UD     g126<8,4,2>UD                   { align1 WE_all 1Q A@2 };
mov(16)         g126<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g126<1>F        g117<1,1,0>F                    { align1 1H compacted };
mov(8)          g94<2>UD        g7.1<8,4,2>UD                   { align1 WE_all 1Q F@2 };
mov(4)          g73<4>UD        g3.2<8,2,4>UD                   { align1 WE_all 1N I@5 };
mov(4)          g71<4>UD        g3.1<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g86<4>UD        g5.2<8,2,4>UD                   { align1 WE_all 1N I@6 };
mov(4)          g84<4>UD        g5.1<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g110<4>UD       g122.2<8,2,4>UD                 { align1 WE_all 1N A@7 };
mov(4)          g104<4>UD       g122.1<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(4)          g29<4>UD        g124.2<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g11<4>UD        g124.1<8,2,4>UD                 { align1 WE_all 1N };
mov(8)          g37<2>UD        g126.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.ge(8)       g92<2>F         g7<8,4,2>F      g94<8,4,2>F     { align1 WE_all 1Q I@7 };
sel.ge(4)       g69<4>F         g71<8,2,4>F     g73<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g82<4>F         g84<8,2,4>F     g86<8,2,4>F     { align1 WE_all 1N I@6 };
sel.l(4)        g99<4>F         g104<8,2,4>F    g110<8,2,4>F    { align1 WE_all 1N I@4 };
sel.l(4)        g9<4>F          g11<8,2,4>F     g29<8,2,4>F     { align1 WE_all 1N I@2 };
sel.l(8)        g35<2>F         g126<8,4,2>F    g37<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g7.1<2>UD       g92<8,4,2>UD                    { align1 WE_all 1Q A@6 };
mov(4)          g3.2<4>UD       g69<8,2,4>UD                    { align1 WE_all 1N F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(4)          g5.2<4>UD       g82<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g122.2<4>UD     g99<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g124.2<4>UD     g9<8,2,4>UD                     { align1 WE_all 1N F@2 };
mov(8)          g126.1<2>UD     g35<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g97<4>UD        g7.1<8,2,4>UD                   { align1 WE_all 1N A@6 };
mov(4)          g78<4>UD        g3.3<8,2,4>UD                   { align1 WE_all 1N I@6 };
mov(4)          g76<4>UD        g3.1<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g91<4>UD        g5.3<8,2,4>UD                   { align1 WE_all 1N I@7 };
mov(4)          g89<4>UD        g5.1<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g115<4>UD       g122.3<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g113<4>UD       g122.1<8,2,4>UD                 { align1 WE_all 1N F@7 };
mov(4)          g32<4>UD        g124.1<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g99<4>UD        g7.2<8,2,4>UD                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(4)          g47<4>UD        g126.2<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g43<4>UD        g126.1<8,2,4>UD                 { align1 WE_all 1N $10.src };
sel.ge(4)       g74<4>F         g76<8,2,4>F     g78<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g34<4>UD        g124.3<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g87<4>F         g89<8,2,4>F     g91<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g111<4>F        g113<8,2,4>F    g115<8,2,4>F    { align1 WE_all 1N I@6 };
sel.ge(4)       g95<4>F         g97<8,2,4>F     g99<8,2,4>F     { align1 WE_all 1N I@4 };
sel.l(4)        g38<4>F         g43<8,2,4>F     g47<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g3.3<4>UD       g74<8,2,4>UD                    { align1 WE_all 1N F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.l(4)        g30<4>F         g32<8,2,4>F     g34<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g5.3<4>UD       g87<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g122.3<4>UD     g111<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g7.2<4>UD       g95<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g126.2<4>UD     g38<8,2,4>UD                    { align1 WE_all 1N F@2 };
sel.ge(4)       g3.4<1>F        g3.3<0,1,0>F    g3.4<4,4,1>F    { align1 WE_all 1N I@5 };
sel.ge(4)       g4.4<1>F        g4.3<0,1,0>F    g4.4<4,4,1>F    { align1 WE_all 1N I@5 };
mov(4)          g124.3<4>UD     g30<8,2,4>UD                    { align1 WE_all 1N F@3 };
sel.ge(4)       g5.4<1>F        g5.3<0,1,0>F    g5.4<4,4,1>F    { align1 WE_all 1N I@5 };
sel.ge(4)       g6.4<1>F        g6.3<0,1,0>F    g6.4<4,4,1>F    { align1 WE_all 1N I@5 };
sel.l(4)        g122.4<1>F      g122.3<0,1,0>F  g122.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g123.4<1>F      g123.3<0,1,0>F  g123.4<4,4,1>F  { align1 WE_all 1N I@4 };
mov(4)          g110<4>UD       g7.3<8,2,4>UD                   { align1 WE_all 1N I@3 };
mov(4)          g104<4>UD       g7.1<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g65<4>UD        g126.3<8,2,4>UD                 { align1 WE_all 1N I@4 };
mov(4)          g63<4>UD        g126.1<8,2,4>UD                 { align1 WE_all 1N $11.src };
sel.ge(8)       g4<1>F          g3.7<0,1,0>F    g4<8,8,1>F      { align1 WE_all 1Q F@5 };
sel.l(4)        g124.4<1>F      g124.3<0,1,0>F  g124.4<4,4,1>F  { align1 WE_all 1N I@5 };
sel.l(4)        g125.4<1>F      g125.3<0,1,0>F  g125.4<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(8)       g6<1>F          g5.7<0,1,0>F    g6<8,8,1>F      { align1 WE_all 1Q F@6 };
sel.l(8)        g123<1>F        g122.7<0,1,0>F  g123<8,8,1>F    { align1 WE_all 1Q F@5 };
sel.ge(4)       g100<4>F        g104<8,2,4>F    g110<8,2,4>F    { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.l(4)        g61<4>F         g63<8,2,4>F     g65<8,2,4>F     { align1 WE_all 1N I@1 };
sel.l(8)        g125<1>F        g124.7<0,1,0>F  g125<8,8,1>F    { align1 WE_all 1Q F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g11<1>UD        g6.7<0,1,0>UD   g4.7<0,1,0>UD   { align1 1H };
mov(4)          g7.3<4>UD       g100<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g126.3<4>UD     g61<8,2,4>UD                    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g9<1>UD         g125.7<0,1,0>UD g123.7<0,1,0>UD { align1 1H };
sel.ge(4)       g7.4<1>F        g7.3<0,1,0>F    g7.4<4,4,1>F    { align1 WE_all 1N I@3 };
sel.ge(4)       g8.4<1>F        g8.3<0,1,0>F    g8.4<4,4,1>F    { align1 WE_all 1N I@3 };
sel.l(4)        g126.4<1>F      g126.3<0,1,0>F  g126.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.l(4)        g127.4<1>F      g127.3<0,1,0>F  g127.4<4,4,1>F  { align1 WE_all 1N I@2 };
cmp.z.f0.0(16)  null<1>D        g55<8,8,1>D     2D              { align1 1H };
sel.ge(8)       g8<1>F          g7.7<0,1,0>F    g8<8,8,1>F      { align1 WE_all 1Q F@3 };
sel.l(8)        g127<1>F        g126.7<0,1,0>F  g127<8,8,1>F    { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
(+f0.0) sel(16) g31<1>UD        g8.7<0,1,0>UD   g11<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g29<1>UD        g127.7<0,1,0>UD g9<1,1,0>UD     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g57<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g63<1>F         g29<1,1,0>F     -g31<1,1,0>F    { align1 1H I@2 compacted };
and.nz.f0.0(16) null<1>UD       g59<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL10             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mul(16)         g32<1>D         g106<1,1,0>D    6W              { align1 1H compacted };
mul(16)         g34<1>D         g57<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g36<1>D         g32<8,8,1>D     g55<8,8,1>D     g34<1,1,1>D { align1 1H };
shl(16)         g61<1>D         g36<8,8,1>D     0x00000002UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g61UD           g63UD           0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $11 };

LABEL10:
endif(16)       JIP:  LABEL9                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(16)          g37<1>D         ~g108<1,1,0>D   ~g120<1,1,0>D   { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g37<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g38<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g41<1>UD        g41<1,1,0>UD    g38<1,1,0>UD    { align1 1H I@1 compacted };

LABEL9:
while(16)       JIP:  LABEL11                                   { align1 1H };
add(16)         g39<1>D         g53<1,1,0>D     32D             { align1 1H A@1 compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g120<8,8,1>UD   0x00000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
mov(16)         g42<1>UD        f0<0,1,0>UW                     { align1 1H };

LABEL14:
cmp.z.f0.0(16)  null<1>D        g42<8,8,1>D     0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL12       UIP:  LABEL12             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
fbl(16)         g47<1>UD        g42<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         a0<1>UW         0x04e0UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g47<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x04e0UW        { align1 1H A@1 };
mov(16)         g61<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
cmp.z.f0.0(16)  g63<1>D         g61<1,1,0>D     g39<1,1,0>D     { align1 1H A@1 compacted };
and.nz.f0.0(16) null<1>UD       g63<8,8,1>UD    g120<8,8,1>UD   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
(+f0.0) sel(16) g65<1>UD        g21<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g67<1>UD        g23<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g69<1>UD        g13<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g71<1>UD        g15<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         g80<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g80<1>F         g65<1,1,0>F                     { align1 1H compacted };
mov(16)         g82<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@3 compacted };
mov(16)         g82<1>F         g67<1,1,0>F                     { align1 1H compacted };
mov(16)         g74<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g74<1>F         g69<1,1,0>F                     { align1 1H compacted };
mov(16)         g76<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g76<1>F         g71<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g68<1>UD        g25<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g72<1>UD        g17<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(8)          g78<2>UD        g80.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g98<2>UD        g82.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g113<2>UD       g74.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g5<2>UD         g76.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(16)         g84<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g84<1>F         g68<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g55<8,8,1>D     1D              { align1 1H };
sel.ge(8)       g70<2>F         g80<8,4,2>F     g78<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.ge(8)       g96<2>F         g82<8,4,2>F     g98<8,4,2>F     { align1 WE_all 1Q I@4 };
mov(16)         g78<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@6 compacted };
mov(16)         g78<1>F         g72<1,1,0>F                     { align1 1H compacted };
sel.l(8)        g111<2>F        g74<8,4,2>F     g113<8,4,2>F    { align1 WE_all 1Q I@3 };
sel.l(8)        g3<2>F          g76<8,4,2>F     g5<8,4,2>F      { align1 WE_all 1Q I@2 };
mov(8)          g80.1<2>UD      g70<8,4,2>UD                    { align1 WE_all 1Q A@5 };
mov(8)          g82.1<2>UD      g96<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g34<2>UD        g78.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g74.1<2>UD      g111<8,4,2>UD                   { align1 WE_all 1Q A@2 };
mov(8)          g76.1<2>UD      g3<8,4,2>UD                     { align1 WE_all 1Q A@1 };
mov(4)          g90<4>UD        g80.2<8,2,4>UD                  { align1 WE_all 1N I@5 };
mov(4)          g88<4>UD        g80.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g103<4>UD       g82.2<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g101<4>UD       g82.1<8,2,4>UD                  { align1 WE_all 1N };
sel.l(8)        g32<2>F         g78<8,4,2>F     g34<8,4,2>F     { align1 WE_all 1Q I@7 };
mov(4)          g118<4>UD       g74.2<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g116<4>UD       g74.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g10<4>UD        g76.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g8<4>UD         g76.1<8,2,4>UD                  { align1 WE_all 1N };
mov(8)          g111<2>UD       g84.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
sel.ge(4)       g86<4>F         g88<8,2,4>F     g90<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g99<4>F         g101<8,2,4>F    g103<8,2,4>F    { align1 WE_all 1N I@6 };
mov(8)          g78.1<2>UD      g32<8,4,2>UD                    { align1 WE_all 1Q F@3 };
sel.l(4)        g114<4>F        g116<8,2,4>F    g118<8,2,4>F    { align1 WE_all 1N I@5 };
sel.l(4)        g6<4>F          g8<8,2,4>F      g10<8,2,4>F     { align1 WE_all 1N I@3 };
sel.ge(8)       g109<2>F        g84<8,4,2>F     g111<8,4,2>F    { align1 WE_all 1Q I@2 };
mov(4)          g80.2<4>UD      g86<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g82.2<4>UD      g99<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g47<4>UD        g78.2<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g37<4>UD        g78.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g74.2<4>UD      g114<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g76.2<4>UD      g6<8,2,4>UD                     { align1 WE_all 1N F@2 };
mov(8)          g84.1<2>UD      g109<8,4,2>UD                   { align1 WE_all 1Q A@1 };
mov(4)          g95<4>UD        g80.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g93<4>UD        g80.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g106<4>UD       g82.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
sel.l(4)        g35<4>F         g37<8,2,4>F     g47<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g126<4>UD       g74.3<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g124<4>UD       g74.1<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(4)          g31<4>UD        g76.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g29<4>UD        g76.1<8,2,4>UD                  { align1 WE_all 1N $7.src };
mov(4)          g116<4>UD       g84.2<8,2,4>UD                  { align1 WE_all 1N A@4 };
mov(4)          g114<4>UD       g84.1<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g91<4>F         g93<8,2,4>F     g95<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g108<4>UD       g82.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g78.2<4>UD      g35<8,2,4>UD                    { align1 WE_all 1N F@2 };
sel.l(4)        g122<4>F        g124<8,2,4>F    g126<8,2,4>F    { align1 WE_all 1N I@7 };
sel.l(4)        g11<4>F         g29<8,2,4>F     g31<8,2,4>F     { align1 WE_all 1N I@5 };
sel.ge(4)       g112<4>F        g114<8,2,4>F    g116<8,2,4>F    { align1 WE_all 1N I@3 };
mov(4)          g80.3<4>UD      g91<8,2,4>UD                    { align1 WE_all 1N F@4 };
sel.ge(4)       g104<4>F        g106<8,2,4>F    g108<8,2,4>F    { align1 WE_all 1N I@3 };
mov(4)          g69<4>UD        g78.3<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g67<4>UD        g78.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g74.3<4>UD      g122<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g76.3<4>UD      g11<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g84.2<4>UD      g112<8,2,4>UD                   { align1 WE_all 1N F@2 };
sel.ge(4)       g80.4<1>F       g80.3<0,1,0>F   g80.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.ge(4)       g81.4<1>F       g81.3<0,1,0>F   g81.4<4,4,1>F   { align1 WE_all 1N I@6 };
mov(4)          g82.3<4>UD      g104<8,2,4>UD                   { align1 WE_all 1N F@3 };
sel.l(4)        g65<4>F         g67<8,2,4>F     g69<8,2,4>F     { align1 WE_all 1N I@5 };
sel.l(4)        g74.4<1>F       g74.3<0,1,0>F   g74.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g75.4<1>F       g75.3<0,1,0>F   g75.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g76.4<1>F       g76.3<0,1,0>F   g76.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g77.4<1>F       g77.3<0,1,0>F   g77.4<4,4,1>F   { align1 WE_all 1N I@3 };
mov(4)          g124<4>UD       g84.3<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g122<4>UD       g84.1<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g81<1>F         g80.7<0,1,0>F   g81<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.ge(4)       g82.4<1>F       g82.3<0,1,0>F   g82.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g83.4<1>F       g83.3<0,1,0>F   g83.4<4,4,1>F   { align1 WE_all 1N I@3 };
mov(4)          g78.3<4>UD      g65<8,2,4>UD                    { align1 WE_all 1N F@7 };
sel.l(8)        g75<1>F         g74.7<0,1,0>F   g75<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.l(8)        g77<1>F         g76.7<0,1,0>F   g77<8,8,1>F     { align1 WE_all 1Q F@5 };
sel.ge(4)       g117<4>F        g122<8,2,4>F    g124<8,2,4>F    { align1 WE_all 1N I@2 };
sel.ge(8)       g83<1>F         g82.7<0,1,0>F   g83<8,8,1>F     { align1 WE_all 1Q F@4 };
sel.l(4)        g78.4<1>F       g78.3<0,1,0>F   g78.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g79.4<1>F       g79.3<0,1,0>F   g79.4<4,4,1>F   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g86<1>UD        g77.7<0,1,0>UD  g75.7<0,1,0>UD  { align1 1H };
mov(4)          g84.3<4>UD      g117<8,2,4>UD                   { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@3 };
(+f0.0) sel(16) g88<1>UD        g83.7<0,1,0>UD  g81.7<0,1,0>UD  { align1 1H };
sel.l(8)        g79<1>F         g78.7<0,1,0>F   g79<8,8,1>F     { align1 WE_all 1Q F@1 };
sel.ge(4)       g84.4<1>F       g84.3<0,1,0>F   g84.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g85.4<1>F       g85.3<0,1,0>F   g85.4<4,4,1>F   { align1 WE_all 1N I@2 };
cmp.z.f0.0(16)  null<1>D        g55<8,8,1>D     2D              { align1 1H };
sel.ge(8)       g85<1>F         g84.7<0,1,0>F   g85<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g90<1>UD        g79.7<0,1,0>UD  g86<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g92<1>UD        g85.7<0,1,0>UD  g88<1,1,0>UD    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g57<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g67<1>F         g90<1,1,0>F     -g92<1,1,0>F    { align1 1H I@2 compacted };
and.nz.f0.0(16) null<1>UD       g59<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL13             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mul(16)         g93<1>D         g61<1,1,0>D     6W              { align1 1H compacted };
mul(16)         g95<1>D         g57<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g97<1>D         g93<8,8,1>D     g55<8,8,1>D     g95<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g65<1>D         g97<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g65UD           g67UD           0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $12 };

LABEL13:
endif(16)       JIP:  LABEL12                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(16)          g98<1>D         ~g63<1,1,0>D    ~g120<1,1,0>D   { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g98<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g99<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g42<1>UD        g42<1,1,0>UD    g99<1,1,0>UD    { align1 1H I@1 compacted };

LABEL12:
while(16)       JIP:  LABEL14                                   { align1 1H };
mov.nz.f0.0(16) null<1>D        g120<8,8,1>D                    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL15         UIP:  LABEL15             { align1 1H };
shl(16)         g100<1>D        g49<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g68<1>D         g100<1,1,0>D    1152D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g68UD           nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $12 };
shl(16)         g101<1>D        g51<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g69<1>D         g101<1,1,0>D    1216D           { align1 1H $12.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g69UD           nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $13 };
shl(16)         g102<1>D        g53<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g70<1>D         g102<1,1,0>D    1280D           { align1 1H $13.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g70UD           nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $14 };

LABEL15:
endif(16)       JIP:  LABEL16                                   { align1 1H };

LABEL16:
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g103UD          g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
mov(8)          g104<1>UD       0x00000000UD                    { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(2)          g104.10<1>UB    g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g104UD          nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $0 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
add(16)         g105<1>D        g2<0,1,0>D      11352D          { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(16)         g43<1>UD        g45<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g107<1>UD       g105<8,8,1>UD   0x00002c58UD    { align1 1H };

LABEL19:
cmp.ge.f0.0(16) null<1>UD       g43<8,8,1>UD    0x00000120UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL17       UIP:  LABEL17             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
shl(16)         g71<1>D         g43<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g76UD           g71UD           nullUD          0x04201502                0x00000000
                            slm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $14 };
cmp.nz.f0.0(16) null<1>F        g76<1,1,0>F     0x7f800000F  /* infF */ { align1 1H $14.dst compacted };
(+f0.0) if(16)  JIP:  LABEL18         UIP:  LABEL18             { align1 1H };
add(16)         g109<1>D        g105<1,1,0>D    g71<1,1,0>D     { align1 1H $14.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g111<1>UD       g109<1,1,0>UD   g105<1,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(8)          g72<2>UD        g109<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $14.src };
mov(8)          g74<2>UD        g110<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
add3(16)        g113<1>D        -g107<8,8,1>D   g2.1<0,1,0>D    -g111<1,1,1>D { align1 1H };
mov(8)          g72.1<2>UD      g113<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g74.1<2>UD      g114<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g72UD           g76UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $14 };

LABEL18:
endif(16)       JIP:  LABEL17                                   { align1 1H };
add(16)         g43<1>D         g43<1,1,0>D     512D            { align1 1H compacted };

LABEL17:
while(16)       JIP:  LABEL19                                   { align1 1H };
nop                                                             ;

LABEL22:
cmp.ge.f0.0(16) null<1>UD       g45<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL20       UIP:  LABEL20             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
shl(16)         g114<1>D        g45<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g77<1>D         g114<1,1,0>D    1152D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g82UD           g77UD           nullUD          0x04201502                0x00000000
                            slm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $14 };
cmp.nz.f0.0(16) null<1>D        g82<8,8,1>D     0D              { align1 1H $14.dst };
(+f0.0) if(16)  JIP:  LABEL21         UIP:  LABEL21             { align1 1H };
add(16)         g116<1>D        g2<0,1,0>D      12504D          { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.l.f0.0(16)  g118<1>UD       g116<8,8,1>UD   0x000030d8UD    { align1 1H };
add(16)         g120<1>D        g116<1,1,0>D    g114<1,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.l.f0.0(16)  g122<1>UD       g120<1,1,0>UD   g116<1,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
mov(8)          g78<2>UD        g120<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N F@5 };
mov(8)          g80<2>UD        g121<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
add3(16)        g124<1>D        -g118<8,8,1>D   g2.1<0,1,0>D    -g122<1,1,1>D { align1 1H };
mov(8)          g80.1<2>UD      g125<4,4,1>UD                   { align1 2Q I@1 };
mov(8)          g78.1<2>UD      g124<4,4,1>UD                   { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g78UD           g82UD           0x0804058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $14 };

LABEL21:
endif(16)       JIP:  LABEL20                                   { align1 1H };
add(16)         g45<1>D         g45<1,1,0>D     512D            { align1 1H compacted };

LABEL20:
while(16)       JIP:  LABEL22                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q F@2 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_BFS_BFS_pass1_initial_code[] = {
    0x80000065, 0x7d058220, 0x02000004, 0xffffffc0,
    0xe0460065, 0x0ff10043, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa007d0c, 0x00340000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x7d050220,
    0x00000024, 0x00000000, 0x80030061, 0x1f054410,
    0x00000000, 0x76543210, 0x00041b69, 0x48058660,
    0x02464605, 0x00000004, 0x00041b69, 0x41058660,
    0x02467d05, 0x00000009, 0x641f1b40, 0x00801f95,
    0xa0431a40, 0x20004103, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x4a050160,
    0x00461f05, 0x00000000, 0xa04c1940, 0x48004a02,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa02e0040, 0x03410243, 0xa0340040, 0x00810243,
    0x27301a70, 0x02102e2b, 0x27361a70, 0x0210342b,
    0x00030061, 0x0e060220, 0x00343405, 0x00000000,
    0x00130061, 0x10060220, 0x00343505, 0x00000000,
    0xa0321c40, 0x0212301a, 0xa0381c40, 0x0212361a,
    0x00031961, 0x0e260220, 0x00343805, 0x00000000,
    0x00131a61, 0x10260220, 0x00343905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x39440000, 0xfb040e24, 0x003c0000,
    0xa04e2140, 0x02003d03, 0x27501970, 0x3d004e03,
    0x00033161, 0x0f060220, 0x00344e05, 0x00000000,
    0x00133161, 0x11060220, 0x00344f05, 0x00000000,
    0xa052b140, 0x3f025002, 0x00031961, 0x0f260220,
    0x00345205, 0x00000000, 0x00131a61, 0x11260220,
    0x00345305, 0x00000000, 0xa0530040, 0x03003d03,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x03440000, 0xfb040f24, 0x003c0000,
    0xe7551970, 0x03005303, 0x00033261, 0x10060220,
    0x00345305, 0x00000000, 0x00133261, 0x12060220,
    0x00345405, 0x00000000, 0xa0571b40, 0x3f025502,
    0x00031961, 0x10260220, 0x00345705, 0x00000000,
    0x00131a61, 0x12260220, 0x00345805, 0x00000000,
    0x20592240, 0x03200900, 0x00041162, 0x5f058aa0,
    0x4a465905, 0x0704ec3d, 0x00041170, 0x6b058aa0,
    0x5a465f05, 0x77f684df, 0x00044338, 0x62050aa0,
    0x1a465f05, 0x00460001, 0x00040070, 0x6d058aa0,
    0x3a465905, 0x0704ec3d, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x58240000,
    0xfb041024, 0x000c0000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00042341, 0x64058aa0,
    0x0a466205, 0x417d70a4, 0x00041265, 0x00010220,
    0x22466b05, 0x00466d05, 0x00033161, 0x0d060220,
    0x00342e05, 0x00000000, 0x80103401, 0x00000000,
    0x00000000, 0x00000000, 0x00133261, 0x0f060220,
    0x00342f05, 0x00000000, 0xe02d0065, 0x1ff04c03,
    0xef0b1162, 0x00006403, 0x00031c61, 0x0d260220,
    0x00343205, 0x00000000, 0x00131c61, 0x0f260220,
    0x00343305, 0x00000000, 0xa04d1c40, 0x2d004102,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x33140000, 0xfb040d24, 0x00040000,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x205c2440, 0x05205800, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x205e2440, 0x07205a00,
    0x00040a70, 0x6e058aa0, 0x3a465c05, 0x0704ec3d,
    0x00043362, 0x60058aa0, 0x4a465c05, 0x0704ec3d,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044538, 0x65050aa0, 0x1a466005, 0x00460001,
    0x00043570, 0x70058aa0, 0x5a466005, 0x77f684df,
    0x00041462, 0x61058aa0, 0x4a465e05, 0x0704ec3d,
    0x27452462, 0x33004303, 0x00042541, 0x67058aa0,
    0x0a466505, 0x417d70a4, 0x00041365, 0x00010220,
    0x22467005, 0x00466e05, 0xef711162, 0x00006703,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044638, 0x68050aa0, 0x1a466105, 0x00460001,
    0x00040070, 0x73058aa0, 0x3a465e05, 0x0704ec3d,
    0x00043670, 0x75058aa0, 0x5a466105, 0x77f684df,
    0x00042641, 0x6a058aa0, 0x0a466805, 0x417d70a4,
    0x00041265, 0x00010220, 0x22467505, 0x00467305,
    0xef761162, 0x00006a03, 0x27781d70, 0x45004d03,
    0x01040022, 0x0001c060, 0x00000160, 0x00000160,
    0x00040069, 0x7a058660, 0x02464d05, 0x00000005,
    0xa07d9140, 0x7a003902, 0xe07b0068, 0x01b04d03,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x270d1a70, 0x39007d03, 0xa0113440, 0x01007d03,
    0x00030061, 0x17060220, 0x00347d05, 0x00000000,
    0x00130061, 0x19060220, 0x00347e05, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x0004c152, 0x0f040e68, 0x0e2e3b05, 0x0d057b05,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x27131c70, 0x7d001103, 0x00030061, 0x1d060220,
    0x00341105, 0x00000000, 0x00130061, 0x1f060220,
    0x00341205, 0x00000000, 0x00131c61, 0x19260220,
    0x00341005, 0x00000000, 0x00031d61, 0x17260220,
    0x00340f05, 0x00000000, 0xa0151d40, 0x0f021302,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x0d440000, 0xfb041724, 0x003c0000,
    0x00031961, 0x1d260220, 0x00341505, 0x00000000,
    0x00131a61, 0x1f260220, 0x00341605, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x15440000, 0xfb041d24, 0x003c0000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040069, 0x27058660, 0x02462d05, 0x00000002,
    0x00041961, 0x25050220, 0x00462705, 0x00000000,
    0x00041970, 0x00018220, 0x42462505, 0x00000120,
    0x01040028, 0x0001c660, 0x00000090, 0x00000090,
    0x00043769, 0x29058660, 0x02462505, 0x00000002,
    0x00043761, 0x1d054220, 0x00000000, 0x7f800000,
    0x00043761, 0x1f054220, 0x00000000, 0x7f800000,
    0x00043761, 0x21054220, 0x00000000, 0x7f800000,
    0x00043761, 0x23054220, 0x00000000, 0x7f800000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x00000000, 0xea0c2914, 0x003c1d44,
    0x00040040, 0x25058660, 0x06462505, 0x00000800,
    0x00040027, 0x00014060, 0x00000000, 0xffffff60,
    0x00000060, 0x00000000, 0x00000000, 0x00000000,
    0x00041a70, 0x00018220, 0x42462705, 0x00000030,
    0x01040028, 0x0001c660, 0x000000b8, 0x000000b8,
    0x00043769, 0x1d058660, 0x02462705, 0x00000002,
    0x00043761, 0x20054220, 0x00000000, 0x00000000,
    0x00043761, 0x22054220, 0x00000000, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00041f61, 0x24054220, 0x00000000, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xa02a1c40, 0x48001d03, 0x00043761, 0x1e054220,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x00000000,
    0xea0c2a14, 0x003c1e44, 0x00040040, 0x27058660,
    0x06462705, 0x00000800, 0x00040027, 0x00014060,
    0x00000000, 0xffffff38, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80004831, 0x1e0c0000,
    0xe23e000c, 0x00000000, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x80033761, 0x1f054220,
    0x00000000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80011961, 0x1f550000,
    0x0000005c, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80044931, 0x00000000,
    0x30081f0c, 0x00000000, 0x80040001, 0x00000000,
    0xe0000000, 0x00000000, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x20202440, 0x15000d00,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x20222440, 0x17000f00, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x20241c40, 0x19001100,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x20280940, 0x07202400, 0x20250c40, 0x03202000,
    0x202f0a41, 0x76002800, 0x20270c40, 0x05202200,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x20291341, 0x0b002500, 0x00041361, 0x35050a20,
    0x00462f05, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x202b1241, 0x71002700,
    0x00041261, 0x31050a20, 0x00462905, 0x00000000,
    0x00041161, 0x33050a20, 0x00462b05, 0x00000000,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00040070, 0x00018220, 0x22467805, 0x00000000,
    0x00041161, 0x28050120, 0x00003000, 0x00000000,
    0x80000061, 0x53054660, 0x00000000, 0x00000001,
    0xe0370065, 0x00304a03, 0xe0392168, 0x00204a03,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00042169, 0x3b050660, 0x02005304, 0x00464a05,
    0x00041a70, 0x00018660, 0x16462805, 0x00000000,
    0x01040028, 0x0001c660, 0x00000868, 0x00000868,
    0x0004004c, 0x3d050220, 0x00462805, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80041961, 0x10014110, 0x00000000, 0x06200620,
    0x00040069, 0x10018510, 0x01563d06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x06200620,
    0xe03f0961, 0x001b0004, 0xac411970, 0x31003f02,
    0x00041965, 0x00010220, 0x22464105, 0x00467805,
    0x01040062, 0x43058220, 0x02461505, 0xff800000,
    0x01040062, 0x45058220, 0x02461705, 0xff800000,
    0x01040062, 0x47058220, 0x02460d05, 0x7f800000,
    0x01040062, 0x49058220, 0x02460f05, 0x7f800000,
    0xa3521c61, 0xff810000, 0x60520061, 0x00104300,
    0xa3540b61, 0xff810000, 0x60540061, 0x00104500,
    0xa34c1a61, 0x7f810000, 0x604c0061, 0x00104700,
    0xa34e1961, 0x7f810000, 0x604e0061, 0x00104900,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x46058220, 0x02461905, 0xff800000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x4a058220, 0x02461105, 0x7f800000,
    0x80031461, 0x06060220, 0x00445226, 0x00000000,
    0x80031361, 0x24060220, 0x00445426, 0x00000000,
    0x80031261, 0x58060220, 0x00444c26, 0x00000000,
    0x80031161, 0x65060220, 0x00444e26, 0x00000000,
    0xa3500d61, 0x7f810000, 0x60500061, 0x00104a00,
    0x00040070, 0x00018660, 0x16463705, 0x00000001,
    0x80030d62, 0x04060aa0, 0x4a445206, 0x00440606,
    0x80030c62, 0x22060aa0, 0x4a445406, 0x00442406,
    0x80030b62, 0x56060aa0, 0x5a444c06, 0x00445806,
    0x80031a62, 0x63060aa0, 0x5a444e06, 0x00446506,
    0x80031561, 0x72060220, 0x00445026, 0x00000000,
    0x80030c61, 0x52260220, 0x00440406, 0x00000000,
    0x80030b61, 0x54260220, 0x00442206, 0x00000000,
    0x80030a61, 0x4c260220, 0x00445606, 0x00000000,
    0x80030961, 0x4e260220, 0x00446306, 0x00000000,
    0xa3561a61, 0xff810000, 0x60560061, 0x00104600,
    0x80031d62, 0x70060aa0, 0x5a445006, 0x00447206,
    0x80021c61, 0x0b070220, 0x00425247, 0x00000000,
    0x80020061, 0x09070220, 0x00425227, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80021d61, 0x2f070220, 0x00425447, 0x00000000,
    0x80023a61, 0x2a070220, 0x00425427, 0x00000000,
    0x80021e61, 0x5d070220, 0x00424c47, 0x00000000,
    0x80020061, 0x5b070220, 0x00424c27, 0x00000000,
    0x80021f61, 0x6a070220, 0x00424e47, 0x00000000,
    0x80020061, 0x68070220, 0x00424e27, 0x00000000,
    0x80031261, 0x48060220, 0x00445626, 0x00000000,
    0x80031161, 0x50260220, 0x00447006, 0x00000000,
    0x80021f62, 0x07070aa0, 0x4a420907, 0x00420b07,
    0x80021f62, 0x25070aa0, 0x4a422a07, 0x00422f07,
    0x80021d62, 0x59070aa0, 0x5a425b07, 0x00425d07,
    0x80021b62, 0x66070aa0, 0x5a426807, 0x00426a07,
    0x80031a62, 0x46060aa0, 0x4a445606, 0x00444806,
    0x80021961, 0x7a070220, 0x00425047, 0x00000000,
    0x80020061, 0x75070220, 0x00425027, 0x00000000,
    0x80021561, 0x52470220, 0x00420707, 0x00000000,
    0x80021461, 0x54470220, 0x00422507, 0x00000000,
    0x80021361, 0x4c470220, 0x00425907, 0x00000000,
    0x80021261, 0x4e470220, 0x00426607, 0x00000000,
    0x80030961, 0x56260220, 0x00444606, 0x00000000,
    0x80021e62, 0x73070aa0, 0x5a427507, 0x00427a07,
    0x80021d61, 0x21070220, 0x00425267, 0x00000000,
    0x80023961, 0x1f070220, 0x00425227, 0x00000000,
    0x80021e61, 0x43070220, 0x00425427, 0x00000000,
    0x80021e61, 0x62070220, 0x00424c67, 0x00000000,
    0x80020061, 0x60070220, 0x00424c27, 0x00000000,
    0x80021f61, 0x6f070220, 0x00424e67, 0x00000000,
    0x80020061, 0x6d070220, 0x00424e27, 0x00000000,
    0x80020c61, 0x5a070220, 0x00425647, 0x00000000,
    0x80021761, 0x58070220, 0x00425627, 0x00000000,
    0x80021161, 0x50470220, 0x00427307, 0x00000000,
    0x80020061, 0x45070220, 0x00425467, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80021f62, 0x1d070aa0, 0x4a421f07, 0x00422107,
    0x80021f62, 0x5e070aa0, 0x5a426007, 0x00426207,
    0x80021d62, 0x6b070aa0, 0x5a426d07, 0x00426f07,
    0x80021b62, 0x49070aa0, 0x4a425807, 0x00425a07,
    0x80021a61, 0x03070220, 0x00425067, 0x00000000,
    0x80020061, 0x7d070220, 0x00425027, 0x00000000,
    0x80021b62, 0x3d070aa0, 0x4a424307, 0x00424507,
    0x80021561, 0x52670220, 0x00421d07, 0x00000000,
    0x80021461, 0x4c670220, 0x00425e07, 0x00000000,
    0x80021361, 0x4e670220, 0x00426b07, 0x00000000,
    0x80021261, 0x56470220, 0x00424907, 0x00000000,
    0x80021d62, 0x7b070aa0, 0x5a427d07, 0x00420307,
    0x80021261, 0x54670220, 0x00423d07, 0x00000000,
    0x80021d62, 0x52850aa0, 0x4a005264, 0x00345285,
    0x80021d62, 0x53850aa0, 0x4a005364, 0x00345385,
    0x80021c62, 0x4c850aa0, 0x5a004c64, 0x00344c85,
    0x80021c62, 0x4d850aa0, 0x5a004d64, 0x00344d85,
    0x80021b62, 0x4e850aa0, 0x5a004e64, 0x00344e85,
    0x80021b62, 0x4f850aa0, 0x5a004f64, 0x00344f85,
    0x80021a61, 0x5f070220, 0x00425667, 0x00000000,
    0x80020061, 0x5d070220, 0x00425627, 0x00000000,
    0x80021761, 0x50670220, 0x00427b07, 0x00000000,
    0x80021c62, 0x54850aa0, 0x4a005464, 0x00345485,
    0x80021c62, 0x55850aa0, 0x4a005564, 0x00345585,
    0x80031762, 0x53050aa0, 0x4a0052e4, 0x00465305,
    0x80031662, 0x4d050aa0, 0x5a004ce4, 0x00464d05,
    0x80031562, 0x4f050aa0, 0x5a004ee4, 0x00464f05,
    0x80021a62, 0x5b070aa0, 0x4a425d07, 0x00425f07,
    0x80021962, 0x50850aa0, 0x5a005064, 0x00345085,
    0x80021962, 0x51850aa0, 0x5a005164, 0x00345185,
    0x80031762, 0x55050aa0, 0x4a0054e4, 0x00465505,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x58050220, 0x02004fe4, 0x00004de4,
    0x80021461, 0x56670220, 0x00425b07, 0x00000000,
    0x80031262, 0x51050aa0, 0x5a0050e4, 0x00465105,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x5a050220, 0x020055e4, 0x000053e4,
    0x80021a62, 0x56850aa0, 0x4a005664, 0x00345685,
    0x80021a62, 0x57850aa0, 0x4a005764, 0x00345785,
    0x00040070, 0x00018660, 0x16463705, 0x00000002,
    0x80031162, 0x57050aa0, 0x4a0056e4, 0x00465705,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x2f5c0062, 0x58015183, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x2f5e0062, 0x5a015783,
    0x00040070, 0x00018660, 0x16463905, 0x00000000,
    0x2f2f1a62, 0x5e205c00, 0x00040065, 0x00018220,
    0x22463b05, 0x00000077, 0x01040022, 0x0001c060,
    0x00000090, 0x00000090, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x605f0041, 0x00603f02,
    0x60610041, 0x00303902, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x63040e68,
    0x0e0e5f05, 0x61053705, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00043a69, 0x2b058660,
    0x02466305, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044a31, 0x00000000,
    0xea2a2b14, 0x01002f14, 0x00040025, 0x00004600,
    0x00000000, 0x00000050, 0xa0640066, 0x78224102,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00041a70, 0x00018220, 0x22466405, 0x00000000,
    0x00040061, 0x65050120, 0x00003000, 0x00000000,
    0x20281965, 0x65002803, 0x00040027, 0x00014060,
    0x00000000, 0xfffff788, 0xa0661c40, 0x01003303,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00040070, 0x00018220, 0x22467805, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x29050120, 0x00003000, 0x00000000,
    0x00041970, 0x00018660, 0x16462905, 0x00000000,
    0x01040028, 0x0001c660, 0x00000908, 0x00000908,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x0004004c, 0x68050220, 0x00462905, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80040061, 0x10014110, 0x00000000, 0x0cc00cc0,
    0x00040069, 0x10018510, 0x01566806, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0cc00cc0,
    0xe06a0961, 0x001b0004, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xac6c0070, 0x66006a02,
    0x00041965, 0x00010220, 0x22466c05, 0x00467805,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x6e058220, 0x02461505, 0xff800000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x70058220, 0x02461705, 0xff800000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x72058220, 0x02460d05, 0x7f800000,
    0x01040062, 0x74058220, 0x02460f05, 0x7f800000,
    0xa3030c61, 0xff810000, 0x60030061, 0x00106e00,
    0xa3050b61, 0xff810000, 0x60050061, 0x00107000,
    0xa37a1a61, 0x7f810000, 0x607a0061, 0x00107200,
    0xa37c1961, 0x7f810000, 0x607c0061, 0x00107400,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x71058220, 0x02461905, 0xff800000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x75058220, 0x02461105, 0x7f800000,
    0x80031461, 0x44060220, 0x00440326, 0x00000000,
    0x80031361, 0x51060220, 0x00440526, 0x00000000,
    0x80031261, 0x62060220, 0x00447a26, 0x00000000,
    0x80031161, 0x07060220, 0x00447c26, 0x00000000,
    0x00040070, 0x00018660, 0x16463705, 0x00000001,
    0x80031d62, 0x42060aa0, 0x4a440306, 0x00444406,
    0x80030c62, 0x4f060aa0, 0x4a440506, 0x00445106,
    0x80031b62, 0x60060aa0, 0x5a447a06, 0x00446206,
    0x80030a62, 0x7e060aa0, 0x5a447c06, 0x00440706,
    0xa3071f61, 0xff810000, 0x60070061, 0x00107100,
    0x80030d61, 0x03260220, 0x00444206, 0x00000000,
    0x80030c61, 0x05260220, 0x00444f06, 0x00000000,
    0x80030b61, 0x7a260220, 0x00446006, 0x00000000,
    0x80030a61, 0x7c260220, 0x00447e06, 0x00000000,
    0xa37e1961, 0x7f810000, 0x607e0061, 0x00107500,
    0x80031261, 0x5e060220, 0x00440726, 0x00000000,
    0x80021d61, 0x49070220, 0x00420347, 0x00000000,
    0x80020061, 0x47070220, 0x00420327, 0x00000000,
    0x80021e61, 0x56070220, 0x00420547, 0x00000000,
    0x80020061, 0x54070220, 0x00420527, 0x00000000,
    0x80020f61, 0x6e070220, 0x00427a47, 0x00000000,
    0x80020061, 0x68070220, 0x00427a27, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80021f61, 0x1d070220, 0x00427c47, 0x00000000,
    0x80020061, 0x0b070220, 0x00427c27, 0x00000000,
    0x80031161, 0x25060220, 0x00447e26, 0x00000000,
    0x80031f62, 0x5c060aa0, 0x4a440706, 0x00445e06,
    0x80021f62, 0x45070aa0, 0x4a424707, 0x00424907,
    0x80021e62, 0x52070aa0, 0x4a425407, 0x00425607,
    0x80021c62, 0x63070aa0, 0x5a426807, 0x00426e07,
    0x80021a62, 0x09070aa0, 0x5a420b07, 0x00421d07,
    0x80031962, 0x23060aa0, 0x5a447e06, 0x00442506,
    0x80030e61, 0x07260220, 0x00445c06, 0x00000000,
    0x80021561, 0x03470220, 0x00424507, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80021461, 0x05470220, 0x00425207, 0x00000000,
    0x80021361, 0x7a470220, 0x00426307, 0x00000000,
    0x80021261, 0x7c470220, 0x00420907, 0x00000000,
    0x80030961, 0x7e260220, 0x00442306, 0x00000000,
    0x80020e61, 0x61070220, 0x00420727, 0x00000000,
    0x80021e61, 0x4e070220, 0x00420367, 0x00000000,
    0x80020061, 0x4c070220, 0x00420327, 0x00000000,
    0x80021f61, 0x5b070220, 0x00420567, 0x00000000,
    0x80020061, 0x59070220, 0x00420527, 0x00000000,
    0x80021f61, 0x73070220, 0x00427a67, 0x00000000,
    0x80021761, 0x71070220, 0x00427a27, 0x00000000,
    0x80021f61, 0x20070220, 0x00427c27, 0x00000000,
    0x80020061, 0x63070220, 0x00420747, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80021f61, 0x2f070220, 0x00427e47, 0x00000000,
    0x80023a61, 0x2b070220, 0x00427e27, 0x00000000,
    0x80021f62, 0x4a070aa0, 0x4a424c07, 0x00424e07,
    0x80020061, 0x22070220, 0x00427c67, 0x00000000,
    0x80021f62, 0x57070aa0, 0x4a425907, 0x00425b07,
    0x80021e62, 0x6f070aa0, 0x5a427107, 0x00427307,
    0x80021c62, 0x5f070aa0, 0x4a426107, 0x00426307,
    0x80021a62, 0x26070aa0, 0x5a422b07, 0x00422f07,
    0x80021561, 0x03670220, 0x00424a07, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80021a62, 0x1e070aa0, 0x5a422007, 0x00422207,
    0x80021561, 0x05670220, 0x00425707, 0x00000000,
    0x80021461, 0x7a670220, 0x00426f07, 0x00000000,
    0x80021361, 0x07470220, 0x00425f07, 0x00000000,
    0x80021261, 0x7e470220, 0x00422607, 0x00000000,
    0x80021d62, 0x03850aa0, 0x4a000364, 0x00340385,
    0x80021d62, 0x04850aa0, 0x4a000464, 0x00340485,
    0x80021361, 0x7c670220, 0x00421e07, 0x00000000,
    0x80021d62, 0x05850aa0, 0x4a000564, 0x00340585,
    0x80021d62, 0x06850aa0, 0x4a000664, 0x00340685,
    0x80021c62, 0x7a850aa0, 0x5a007a64, 0x00347a85,
    0x80021c62, 0x7b850aa0, 0x5a007b64, 0x00347b85,
    0x80021b61, 0x6e070220, 0x00420767, 0x00000000,
    0x80020061, 0x68070220, 0x00420727, 0x00000000,
    0x80021c61, 0x41070220, 0x00427e67, 0x00000000,
    0x80023b61, 0x3f070220, 0x00427e27, 0x00000000,
    0x80031562, 0x04050aa0, 0x4a0003e4, 0x00460405,
    0x80021d62, 0x7c850aa0, 0x5a007c64, 0x00347c85,
    0x80021d62, 0x7d850aa0, 0x5a007d64, 0x00347d85,
    0x80031662, 0x06050aa0, 0x4a0005e4, 0x00460605,
    0x80031562, 0x7b050aa0, 0x5a007ae4, 0x00467b05,
    0x80021b62, 0x64070aa0, 0x4a426807, 0x00426e07,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x3d070aa0, 0x5a423f07, 0x00424107,
    0x80031562, 0x7d050aa0, 0x5a007ce4, 0x00467d05,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x0b050220, 0x020006e4, 0x000004e4,
    0x80021361, 0x07670220, 0x00426407, 0x00000000,
    0x80021261, 0x7e670220, 0x00423d07, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x09050220, 0x02007de4, 0x00007be4,
    0x80021b62, 0x07850aa0, 0x4a000764, 0x00340785,
    0x80021b62, 0x08850aa0, 0x4a000864, 0x00340885,
    0x80021a62, 0x7e850aa0, 0x5a007e64, 0x00347e85,
    0x80021a62, 0x7f850aa0, 0x5a007f64, 0x00347f85,
    0x00040070, 0x00018660, 0x16463705, 0x00000002,
    0x80031362, 0x08050aa0, 0x4a0007e4, 0x00460805,
    0x80031262, 0x7f050aa0, 0x5a007ee4, 0x00467f05,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x2f1f0062, 0x0b010883, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x2f1d0062, 0x09017f83,
    0x00040070, 0x00018660, 0x16463905, 0x00000000,
    0x2f3f1a62, 0x1f201d00, 0x00040065, 0x00018220,
    0x22463b05, 0x00000077, 0x01040022, 0x0001c060,
    0x00000080, 0x00000080, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x60200041, 0x00606a02,
    0x60220041, 0x00303902, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x24040e68,
    0x0e0e2005, 0x22053705, 0x00041969, 0x3d058660,
    0x02462405, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x00000000,
    0xea2a3d14, 0x01003f14, 0x00040025, 0x00004600,
    0x00000000, 0x00000060, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xa0250066, 0x78226c02,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00041a70, 0x00018220, 0x22462505, 0x00000000,
    0x00040061, 0x26050120, 0x00003000, 0x00000000,
    0x20291965, 0x26002903, 0x00040027, 0x00014060,
    0x00000000, 0xfffff6e8, 0xa0270940, 0x02003503,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00040070, 0x00018220, 0x22467805, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x2a050120, 0x00003000, 0x00000000,
    0x00041970, 0x00018660, 0x16462a05, 0x00000000,
    0x01040028, 0x0001c660, 0x000008d8, 0x000008d8,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x0004004c, 0x2f050220, 0x00462a05, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80041961, 0x10014110, 0x00000000, 0x04e004e0,
    0x00040069, 0x10018510, 0x01562f06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x04e004e0,
    0xe03d0961, 0x001b0004, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0xac3f0970, 0x27003d02,
    0x00041965, 0x00010220, 0x22463f05, 0x00467805,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x41058220, 0x02461505, 0xff800000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x43058220, 0x02461705, 0xff800000,
    0x01040062, 0x45058220, 0x02460d05, 0x7f800000,
    0x01040062, 0x47058220, 0x02460f05, 0x7f800000,
    0xa3500c61, 0xff810000, 0x60500061, 0x00104100,
    0xa3520b61, 0xff810000, 0x60520061, 0x00104300,
    0xa34a1a61, 0x7f810000, 0x604a0061, 0x00104500,
    0xa34c1961, 0x7f810000, 0x604c0061, 0x00104700,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x44058220, 0x02461905, 0xff800000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x48058220, 0x02461105, 0x7f800000,
    0x80031461, 0x4e060220, 0x00445026, 0x00000000,
    0x80031361, 0x62060220, 0x00445226, 0x00000000,
    0x80031261, 0x71060220, 0x00444a26, 0x00000000,
    0x80031161, 0x05060220, 0x00444c26, 0x00000000,
    0xa3540e61, 0xff810000, 0x60540061, 0x00104400,
    0x00040070, 0x00018660, 0x16463705, 0x00000001,
    0x80031d62, 0x46060aa0, 0x4a445006, 0x00444e06,
    0x80031c62, 0x60060aa0, 0x4a445206, 0x00446206,
    0xa34e1e61, 0x7f810000, 0x604e0061, 0x00104800,
    0x80031b62, 0x6f060aa0, 0x5a444a06, 0x00447106,
    0x80031a62, 0x03060aa0, 0x5a444c06, 0x00440506,
    0x80030d61, 0x50260220, 0x00444606, 0x00000000,
    0x80030c61, 0x52260220, 0x00446006, 0x00000000,
    0x80031361, 0x22060220, 0x00444e26, 0x00000000,
    0x80030a61, 0x4a260220, 0x00446f06, 0x00000000,
    0x80030961, 0x4c260220, 0x00440306, 0x00000000,
    0x80021d61, 0x5a070220, 0x00425047, 0x00000000,
    0x80020061, 0x58070220, 0x00425027, 0x00000000,
    0x80021e61, 0x67070220, 0x00425247, 0x00000000,
    0x80020061, 0x65070220, 0x00425227, 0x00000000,
    0x80031f62, 0x20060aa0, 0x5a444e06, 0x00442206,
    0x80021e61, 0x76070220, 0x00424a47, 0x00000000,
    0x80020061, 0x74070220, 0x00424a27, 0x00000000,
    0x80021f61, 0x0a070220, 0x00424c47, 0x00000000,
    0x80020061, 0x08070220, 0x00424c27, 0x00000000,
    0x80031761, 0x6f060220, 0x00445426, 0x00000000,
    0x80021f62, 0x56070aa0, 0x4a425807, 0x00425a07,
    0x80021e62, 0x63070aa0, 0x4a426507, 0x00426707,
    0x80031361, 0x4e260220, 0x00442006, 0x00000000,
    0x80021d62, 0x72070aa0, 0x5a427407, 0x00427607,
    0x80021b62, 0x06070aa0, 0x5a420807, 0x00420a07,
    0x80031a62, 0x6d060aa0, 0x4a445406, 0x00446f06,
    0x80021561, 0x50470220, 0x00425607, 0x00000000,
    0x80021461, 0x52470220, 0x00426307, 0x00000000,
    0x80021b61, 0x2f070220, 0x00424e47, 0x00000000,
    0x80020061, 0x25070220, 0x00424e27, 0x00000000,
    0x80021361, 0x4a470220, 0x00427207, 0x00000000,
    0x80021261, 0x4c470220, 0x00420607, 0x00000000,
    0x80030961, 0x54260220, 0x00446d06, 0x00000000,
    0x80021f61, 0x5f070220, 0x00425067, 0x00000000,
    0x80020061, 0x5d070220, 0x00425027, 0x00000000,
    0x80021f61, 0x6a070220, 0x00425227, 0x00000000,
    0x80021f62, 0x23070aa0, 0x5a422507, 0x00422f07,
    0x80021e61, 0x7e070220, 0x00424a67, 0x00000000,
    0x80020061, 0x7c070220, 0x00424a27, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80021f61, 0x1f070220, 0x00424c67, 0x00000000,
    0x80023761, 0x1d070220, 0x00424c27, 0x00000000,
    0x80020c61, 0x74070220, 0x00425447, 0x00000000,
    0x80020061, 0x72070220, 0x00425427, 0x00000000,
    0x80021f62, 0x5b070aa0, 0x4a425d07, 0x00425f07,
    0x80020061, 0x6c070220, 0x00425267, 0x00000000,
    0x80021261, 0x4e470220, 0x00422307, 0x00000000,
    0x80021f62, 0x7a070aa0, 0x5a427c07, 0x00427e07,
    0x80021d62, 0x0b070aa0, 0x5a421d07, 0x00421f07,
    0x80021b62, 0x70070aa0, 0x4a427207, 0x00427407,
    0x80021461, 0x50670220, 0x00425b07, 0x00000000,
    0x80021b62, 0x68070aa0, 0x4a426a07, 0x00426c07,
    0x80021a61, 0x45070220, 0x00424e67, 0x00000000,
    0x80020061, 0x43070220, 0x00424e27, 0x00000000,
    0x80021461, 0x4a670220, 0x00427a07, 0x00000000,
    0x80021361, 0x4c670220, 0x00420b07, 0x00000000,
    0x80021261, 0x54470220, 0x00427007, 0x00000000,
    0x80021e62, 0x50850aa0, 0x4a005064, 0x00345085,
    0x80021e62, 0x51850aa0, 0x4a005164, 0x00345185,
    0x80021361, 0x52670220, 0x00426807, 0x00000000,
    0x80021d62, 0x41070aa0, 0x5a424307, 0x00424507,
    0x80021c62, 0x4a850aa0, 0x5a004a64, 0x00344a85,
    0x80021c62, 0x4b850aa0, 0x5a004b64, 0x00344b85,
    0x80021b62, 0x4c850aa0, 0x5a004c64, 0x00344c85,
    0x80021b62, 0x4d850aa0, 0x5a004d64, 0x00344d85,
    0x80021a61, 0x7c070220, 0x00425467, 0x00000000,
    0x80020061, 0x7a070220, 0x00425427, 0x00000000,
    0x80031662, 0x51050aa0, 0x4a0050e4, 0x00465105,
    0x80021b62, 0x52850aa0, 0x4a005264, 0x00345285,
    0x80021b62, 0x53850aa0, 0x4a005364, 0x00345385,
    0x80021761, 0x4e670220, 0x00424107, 0x00000000,
    0x80031662, 0x4b050aa0, 0x5a004ae4, 0x00464b05,
    0x80031562, 0x4d050aa0, 0x5a004ce4, 0x00464d05,
    0x80021a62, 0x75070aa0, 0x4a427a07, 0x00427c07,
    0x80031462, 0x53050aa0, 0x4a0052e4, 0x00465305,
    0x80021962, 0x4e850aa0, 0x5a004e64, 0x00344e85,
    0x80021962, 0x4f850aa0, 0x5a004f64, 0x00344f85,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x56050220, 0x02004de4, 0x00004be4,
    0x80021461, 0x54670220, 0x00427507, 0x00000000,
    0x80001301, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x58050220, 0x020053e4, 0x000051e4,
    0x80031162, 0x4f050aa0, 0x5a004ee4, 0x00464f05,
    0x80021a62, 0x54850aa0, 0x4a005464, 0x00345485,
    0x80021a62, 0x55850aa0, 0x4a005564, 0x00345585,
    0x00040070, 0x00018660, 0x16463705, 0x00000002,
    0x80031162, 0x55050aa0, 0x4a0054e4, 0x00465505,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x2f5a0062, 0x56014f83, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x2f5c0062, 0x58015583,
    0x00040070, 0x00018660, 0x16463905, 0x00000000,
    0x2f431a62, 0x5c205a00, 0x00040065, 0x00018220,
    0x22463b05, 0x00000077, 0x01040022, 0x0001c060,
    0x00000090, 0x00000090, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x605d0041, 0x00603d02,
    0x605f0041, 0x00303902, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x61040e68,
    0x0e0e5d05, 0x5f053705, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x41058660,
    0x02466105, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x00000000,
    0xea2a4114, 0x01004314, 0x00040025, 0x00004600,
    0x00000000, 0x00000060, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xa0620066, 0x78223f02,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00041a70, 0x00018220, 0x22466205, 0x00000000,
    0x00040061, 0x63050120, 0x00003000, 0x00000000,
    0x202a1965, 0x63002a03, 0x00040027, 0x00014060,
    0x00000000, 0xfffff718, 0x00040061, 0x00010660,
    0x20467805, 0x00000000, 0x01040022, 0x0001c060,
    0x000000f8, 0x000000f8, 0x00040069, 0x64058660,
    0x02463105, 0x00000002, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0xa0440040, 0x48006403,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x00000000, 0xea104414, 0x01000000,
    0x00040069, 0x65058660, 0x02463305, 0x00000002,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xa0453c40, 0x4c006503, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044d31, 0x00000000,
    0xea104514, 0x01000000, 0x00040069, 0x66058660,
    0x02463505, 0x00000002, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0463d40, 0x50006603,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x00000000, 0xea104614, 0x01000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80000001, 0x00000000, 0x30000000, 0x00000000,
    0x80000001, 0x00000000, 0x30000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004f31, 0x670c0000, 0xe23e000c, 0x00000000,
    0x80002f01, 0x00000000, 0x00000000, 0x00000000,
    0x80031761, 0x68054220, 0x00000000, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80011961, 0x68550000, 0x0000005c, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80044031, 0x00000000, 0x3008680c, 0x00000000,
    0x80040001, 0x00000000, 0xe0000000, 0x00000000,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x00040040, 0x69058660, 0x06000204, 0x00002c58,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x2b050220, 0x00462d05, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040070, 0x6b058220, 0x52466905, 0x00002c58,
    0x00041a70, 0x00018220, 0x42462b05, 0x00000120,
    0x01040028, 0x0001c660, 0x00000180, 0x00000180,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x47058660, 0x02462b05, 0x00000002,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x4c140000, 0xea044714, 0x00040000,
    0xae002e70, 0x7f804c01, 0x01040022, 0x0001c060,
    0x00000100, 0x00000100, 0xa06d3e40, 0x47006902,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x276f0070, 0x69006d03, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x48060220,
    0x00346d05, 0x00000000, 0x80103e01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x4a060220,
    0x00346e05, 0x00000000, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x71042e68,
    0x06266b05, 0x6f050224, 0x00031961, 0x48260220,
    0x00347105, 0x00000000, 0x00131a61, 0x4a260220,
    0x00347205, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044e31, 0x00000000,
    0xfb2a4824, 0x01004c14, 0x00040025, 0x00004600,
    0x00000000, 0x00000018, 0xa02b0040, 0x20002b03,
    0x00040027, 0x00014060, 0x00000000, 0xfffffe70,
    0x00000060, 0x00000000, 0x00000000, 0x00000000,
    0x00041a70, 0x00018220, 0x42462d05, 0x00000030,
    0x01040028, 0x0001c660, 0x000001f0, 0x000001f0,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x72058660, 0x02462d05, 0x00000002,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0xa04d0040, 0x48007203, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044e31, 0x52140000,
    0xea044d14, 0x00040000, 0x00042e70, 0x00018660,
    0x26465205, 0x00000000, 0x01040022, 0x0001c060,
    0x00000140, 0x00000140, 0x00040040, 0x74058660,
    0x06000204, 0x000030d8, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001501, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00040070, 0x76058220,
    0x52467405, 0x000030d8, 0xa0780040, 0x72007402,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x277a0070, 0x74007803, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001501, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x4e060220,
    0x00347805, 0x00000000, 0x80103e01, 0x00000000,
    0x00000000, 0x00000000, 0x80101501, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x50060220,
    0x00347905, 0x00000000, 0x80000b01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x7c042e68,
    0x06267605, 0x7a050224, 0x00131961, 0x50260220,
    0x00347d05, 0x00000000, 0x00031a61, 0x4e260220,
    0x00347c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044e31, 0x00000000,
    0xfb184e24, 0x01005214, 0x00040025, 0x00004600,
    0x00000000, 0x00000018, 0xa02d0040, 0x20002d03,
    0x00040027, 0x00014060, 0x00000000, 0xfffffe00,
    0x80031261, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_BFS_BFS_pass1_initial = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 1344,
      .base.program_size = 11056,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_BFS_BFS_pass1_initial_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_BFS_BFS_pass1_initial_printfs,
      .base.uses_atomic_load_store = false,
      .local_size = { 512, 1, 1 },
      .prog_offset = { 0, 0, 0 },
      .prog_mask = 2,
      .prog_spilled = 0,
      .uses_barrier = true,
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
   .args = gfx125_bvh_build_BFS_BFS_pass1_initial_args,
   .code = gfx125_bvh_build_BFS_BFS_pass1_initial_code,
};
const char *gfx125_bvh_build_BFS_BFS_pass1_initial_sha1 = "a0e740850a28b647992f8b9e161c84453ace97de";

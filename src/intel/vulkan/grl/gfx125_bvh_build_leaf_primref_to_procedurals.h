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

and(1)          g112<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g36<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g112UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
add(1)          g113<1>UD       g112<0,1,0>UD   0x00000040UD    { align1 WE_all 1N $0.src compacted };
shl(16)         g69<1>D         g36<8,8,1>D     0x00000004UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g3UD            g113UD          nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
add(16)         g94<1>D         g69<1,1,0>D     16D             { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g82<1>D         g2<0,1,0>D      36D             { align1 1H compacted };
cmp.l.f0.0(16)  g84<1>UD        g82<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g88<2>UD        g82<4,4,1>UD                    { align1 1Q };
mov(8)          g90<2>UD        g83<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
cmp.z.f0.0(16)  null<1>D        g3.2<0,1,0>D    8D              { align1 1H };
add(16)         g86<1>D         -g84<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@4 compacted };
mov(8)          g88.1<2>UD      g86<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g90.1<2>UD      g87<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g92UD           g88UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
sel.l(16)       g71<1>UD        g94<1,1,0>UD    g92<1,1,0>UD    { align1 1H @7 $2.dst compacted };
mul(16)         g86<1>D         g3.2<0,1,0>D    g92.1<16,8,2>UW { align1 1H };
mul(16)         g95<1>D         g3.2<0,1,0>D    g92<16,8,2>UW   { align1 1H };
add(16)         g95.1<2>UW      g95.1<16,8,2>UW g86<16,8,2>UW   { align1 1H I@1 };
(-f0.0) sel(16) g77<1>UD        g95<8,8,1>UD    0x00000004UD    { align1 1H I@1 };
cmp.nz.f0.0(16) null<1>D        g69<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
add(16)         g96<1>D         g69<1,1,0>D     -1D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mul(16)         g98<1>D         g96<8,8,1>D     g3.4<0,1,0>UW   { align1 1H I@1 };
mul(16)         g87<1>D         g96<8,8,1>D     g3.5<0,1,0>UW   { align1 1H $2.src };
add(16)         g98.1<2>UW      g98.1<16,8,2>UW g87<16,8,2>UW   { align1 1H I@1 };
add(16)         g100<1>D        g98<1,1,0>D     g77<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g102<1>UD       g100<1,1,0>UD   g98<1,1,0>UD    { align1 1H I@1 compacted };
add(16)         g104<1>D        g2.4<0,1,0>D    g100<1,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g106<1>UD       g104<1,1,0>UD   g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g110<2>UD       g104<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g112<2>UD       g105<4,4,1>UD                   { align1 2Q };
add3(16)        g108<1>D        g2.5<0,1,0>D    -g102<8,8,1>D   -g106<1,1,1>D { align1 1H I@3 };
mov(8)          g110.1<2>UD     g108<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g112.1<2>UD     g109<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g64UD           g110UD          nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g64<1>UD        0xffffffffUD                    { align1 1H $1.dst };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.ge.f0.0(16) g111<1>UD       g69<1,1,0>UD    g92<1,1,0>UD    { align1 1H I@2 compacted };
(+f0.0) if(16)  JIP:  LABEL4          UIP:  LABEL3              { align1 1H };
else(16)        JIP:  LABEL3          UIP:  LABEL3              { align1 1H };

LABEL4:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mul(16)         g113<1>D        g69<8,8,1>D     g3.4<0,1,0>UW   { align1 1H };
mul(16)         g88<1>D         g69<8,8,1>D     g3.5<0,1,0>UW   { align1 1H $2.src };
add(16)         g113.1<2>UW     g113.1<16,8,2>UW g88<16,8,2>UW  { align1 1H I@1 };
add(16)         g115<1>D        g113<1,1,0>D    g77<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g117<1>UD       g115<1,1,0>UD   g113<1,1,0>UD   { align1 1H I@1 compacted };
add(16)         g119<1>D        g2.4<0,1,0>D    g115<1,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g121<1>UD       g119<1,1,0>UD   g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g6<2>UD         g119<4,4,1>UD                   { align1 1Q $3.src };
mov(8)          g8<2>UD         g120<4,4,1>UD                   { align1 2Q $3.src };
add3(16)        g123<1>D        g2.5<0,1,0>D    -g117<8,8,1>D   -g121<1,1,1>D { align1 1H I@3 };
mov(8)          g6.1<2>UD       g123<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g8.1<2>UD       g124<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g10UD           g6UD            nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
cmp.nz.f0.0(16) g66<1>D         g10<1,1,0>D     g64<1,1,0>D     { align1 1H $3.dst compacted };

LABEL3:
endif(16)       JIP:  LABEL5                                    { align1 1H };
or.nz.f0.0(16)  null<1>UD       g66<8,8,1>UD    g111<8,8,1>UD   { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL5        UIP:  LABEL5              { align1 1H };
add(16)         g69<1>D         g69<1,1,0>D     1D              { align1 1H compacted };

LABEL5:
while(16)       JIP:  LABEL2                                    { align1 1H };
add(16)         g11<1>D         g71<1,1,0>D     -1D             { align1 1H I@7 compacted };
mul(16)         g13<1>D         g11<8,8,1>D     g3.4<0,1,0>UW   { align1 1H I@1 };
mul(16)         g89<1>D         g11<8,8,1>D     g3.5<0,1,0>UW   { align1 1H $2.src };
add(16)         g13.1<2>UW      g13.1<16,8,2>UW g89<16,8,2>UW   { align1 1H I@1 };
add(16)         g15<1>D         g13<1,1,0>D     g77<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g17<1>UD        g15<1,1,0>UD    g13<1,1,0>UD    { align1 1H I@1 compacted };
add(16)         g19<1>D         g2.4<0,1,0>D    g15<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g21<1>UD        g19<1,1,0>UD    g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g25<2>UD        g19<4,4,1>UD                    { align1 1Q };
mov(8)          g27<2>UD        g20<4,4,1>UD                    { align1 2Q };
add3(16)        g23<1>D         g2.5<0,1,0>D    -g17<8,8,1>D    -g21<1,1,1>D { align1 1H I@3 };
mov(8)          g25.1<2>UD      g23<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g27.1<2>UD      g24<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g29UD           g25UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };

LABEL9:
cmp.ge.f0.0(16) g31<1>UD        g71<1,1,0>UD    g92<1,1,0>UD    { align1 1H I@2 compacted };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL6              { align1 1H };
else(16)        JIP:  LABEL6          UIP:  LABEL6              { align1 1H };

LABEL7:
mul(16)         g33<1>D         g71<8,8,1>D     g3.4<0,1,0>UW   { align1 1H };
mul(16)         g90<1>D         g71<8,8,1>D     g3.5<0,1,0>UW   { align1 1H $2.src };
add(16)         g33.1<2>UW      g33.1<16,8,2>UW g90<16,8,2>UW   { align1 1H I@1 };
add(16)         g35<1>D         g33<1,1,0>D     g77<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g37<1>UD        g35<1,1,0>UD    g33<1,1,0>UD    { align1 1H I@1 compacted };
add(16)         g39<1>D         g2.4<0,1,0>D    g35<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g41<1>UD        g39<1,1,0>UD    g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g45<2>UD        g39<4,4,1>UD                    { align1 1Q $5.src };
mov(8)          g47<2>UD        g40<4,4,1>UD                    { align1 2Q $5.src };
add3(16)        g43<1>D         g2.5<0,1,0>D    -g37<8,8,1>D    -g41<1,1,1>D { align1 1H I@3 };
mov(8)          g45.1<2>UD      g43<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g47.1<2>UD      g44<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g49UD           g45UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
cmp.nz.f0.0(16) g67<1>D         g49<1,1,0>D     g29<1,1,0>D     { align1 1H $5.dst compacted };

LABEL6:
endif(16)       JIP:  LABEL8                                    { align1 1H };
or.nz.f0.0(16)  null<1>UD       g67<8,8,1>UD    g31<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL8        UIP:  LABEL8              { align1 1H };
add(16)         g71<1>D         g71<1,1,0>D     1D              { align1 1H compacted };

LABEL8:
while(16)       JIP:  LABEL9                                    { align1 1H };
mov(8)          g66<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(16)         g63<2>B         3W                              { align1 1H };
add(8)          g66.8<1>UW      g66<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g64<1>UD        g66<8,8,1>UW                    { align1 1H $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
and(16)         g6<1>UD         g64<1,1,0>UD    0x0000000fUD    { align1 1H I@1 compacted };
add(16)         g81<1>D         g69<1,1,0>D     g6<1,1,0>D      { align1 1H I@1 compacted };

LABEL23:
add(16)         g67<1>D         g71<1,1,0>D     g6<1,1,0>D      { align1 1H I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g69<1>UD        g67<1,1,0>UD    g71<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g4<1>UD         g81<1,1,0>UD    g67<1,1,0>UD    { align1 1H I@3 compacted };
mov(16)         g73<1>D         -g69<8,8,1>D                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
and(16)         g83<1>UD        ~g69<8,8,1>D    g4<8,8,1>UD     { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.g.f0.0(16)  g85<1>UD        g73<1,1,0>UD    0x00000000UD    { align1 1H I@2 compacted };
or.nz.f0.0(16)  null<1>UD       g85<8,8,1>UD    g83<8,8,1>UD    { align1 1H I@1 };
(-f0.0) break(16) JIP:  LABEL10       UIP:  LABEL10             { align1 1H };
mul(16)         g86<1>D         g81<8,8,1>D     g3.4<0,1,0>UW   { align1 1H };
mul(16)         g91<1>D         g81<8,8,1>D     g3.5<0,1,0>UW   { align1 1H $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g86.1<2>UW      g86.1<16,8,2>UW g91<16,8,2>UW   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g88<1>D         g86<1,1,0>D     g3.3<0,1,0>D    { align1 1H I@1 compacted };
add(16)         g103<1>D        g86<1,1,0>D     g77<1,1,0>D     { align1 1H $7.dst compacted };
cmp.l.f0.0(16)  g90<1>UD        g88<1,1,0>UD    g86<1,1,0>UD    { align1 1H I@2 compacted };
add(16)         g92<1>D         g2.4<0,1,0>D    g88<1,1,0>D     { align1 1H compacted };
add(16)         g107<1>D        g2.4<0,1,0>D    g103<1,1,0>D    { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g94<1>UD        g92<1,1,0>UD    g2.4<0,1,0>UD   { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g98<2>UD        g92<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $7.src };
mov(8)          g100<2>UD       g93<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g105<1>UD       g103<1,1,0>UD   g86<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g8<2>UD         g107<4,4,1>UD                   { align1 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $3.src };
mov(8)          g10<2>UD        g108<4,4,1>UD                   { align1 2Q I@6 };
cmp.l.f0.0(16)  g109<1>UD       g107<1,1,0>UD   g2.4<0,1,0>UD   { align1 1H $1.src compacted };
add3(16)        g96<1>D         g2.5<0,1,0>D    -g90<8,8,1>D    -g94<1,1,1>D { align1 1H I@7 };
cmp.l.f0.0(16)  g114<1>UD       g81<1,1,0>UD    g71<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add3(16)        g111<1>D        g2.5<0,1,0>D    -g105<8,8,1>D   -g109<1,1,1>D { align1 1H I@3 };
mov(8)          g98.1<2>UD      g96<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g100.1<2>UD     g97<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g8.1<2>UD       g111<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g10.1<2>UD      g112<4,4,1>UD                   { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g102UD          g98UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g112UD          g8UD            nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
cmp.z.f0.0(16)  g116<1>D        g112<1,1,0>D    g112<0,1,0>D    { align1 1H $3.dst compacted };
and.nz.f0.0(16) null<1>UD       g114<8,8,1>UD   g116<8,8,1>UD   { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(1)          g98<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g98<1>UD        g98<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(1)          g99<1>UD        sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g99<1>UD        g99<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
and(1)          g99<1>UD        g98<0,1,0>UD    g99<0,1,0>UD    { align1 WE_all 1N I@1 compacted };
mov(1)          g117<1>UD       g99<0,1,0>UD                    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cbit(16)        g73<1>UD        g117<0,1,0>UD                   { align1 1H };
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
mov(16)         g73<1>UD        0x00000000UD                    { align1 1H I@2 };

LABEL11:
endif(16)       JIP:  LABEL10                                   { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g6<8,8,1>UD     0x00000008UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL13             { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g6<8,8,1>UD     g73<0,1,0>UD    { align1 1H I@4 };
(+f0.0) if(16)  JIP:  LABEL15         UIP:  LABEL14             { align1 1H };
shl(16)         g118<1>D        g102<8,8,1>D    0x00000005UD    { align1 1H $7.dst };
shr(16)         g120<1>UD       g102<1,1,0>UD   0x0000001bUD    { align1 1H compacted };
add(16)         g122<1>D        g2.2<0,1,0>D    g118<1,1,0>D    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g124<1>UD       g122<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g9<2>UD         g122<4,4,1>UD                   { align1 1Q $3.src };
mov(8)          g11<2>UD        g123<4,4,1>UD                   { align1 2Q $3.src };
add(16)         g13<1>D         g122<1,1,0>D    16D             { align1 1H $3.dst compacted };
add3(16)        g126<1>D        g2.3<0,1,0>D    g120<8,8,1>D    -g124<1,1,1>D { align1 1H I@4 };
cmp.l.f0.0(16)  g15<1>UD        g13<1,1,0>UD    g122<1,1,0>UD   { align1 1H @2 $3.dst compacted };
mov(8)          g21<2>UD        g13<4,4,1>UD                    { align1 1Q $4.src };
mov(8)          g23<2>UD        g14<4,4,1>UD                    { align1 2Q $4.src };
mov(8)          g9.1<2>UD       g126<4,4,1>UD                   { align1 1Q I@4 };
mov(8)          g11.1<2>UD      g127<4,4,1>UD                   { align1 2Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
add(16)         g25<1>D         -g15<1,1,0>D    g126<1,1,0>D    { align1 1H $4.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g13UD           g9UD            nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov(8)          g21.1<2>UD      g25<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g23.1<2>UD      g26<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g25UD           g21UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
and(16)         g35<1>UD        g19<8,8,1>UD    0x07ffffffUD    { align1 1H $3.dst };
shr(16)         g79<1>UD        g31<1,1,0>UD    0x0000001dUD    { align1 1H $4.dst compacted };
else(16)        JIP:  LABEL14         UIP:  LABEL14             { align1 1H };

LABEL15:
mov(16)         g35<1>UD        0xffffffffUD                    { align1 1H I@3 };

LABEL14:
endif(16)       JIP:  LABEL13                                   { align1 1H };
add(16)         g26<1>D         g64<1,1,0>D     15D             { align1 1H $4.dst compacted };
add(16)         g28<1>D         g64<1,1,0>D     -1D             { align1 1H $4.dst compacted };
add(16)         g39<1>D         g64<1,1,0>D     1D              { align1 1H $5.src compacted };
cmp.l.f0.0(16)  null<1>D        g26<8,8,1>D     16D             { align1 1H I@3 };
mov(16)         a0<1>UW         0x0460UW                        { align1 WE_all 1H @3 $4.dst };
shl(16)         a0<1>UW         g28<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0460UW        { align1 1H A@1 };
mov(16)         g30<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         a0<1>UW         0x0460UW                        { align1 WE_all 1H I@3 };
shl(16)         a0<1>UW         g39<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0460UW        { align1 1H A@1 };
mov(16)         g41<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
(-f0.0) sel(16) g37<1>UD        g30<8,8,1>UD    0xffffffffUD    { align1 1H I@2 };
cmp.l.f0.0(16)  g43<1>D         g39<1,1,0>D     16D             { align1 1H $5.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0) sel(16) g45<1>UD        g41<8,8,1>UD    0xffffffffUD    { align1 1H $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.nz.f0.0(16) g47<1>D         g37<1,1,0>D     g35<1,1,0>D     { align1 1H $5.dst compacted };
cmp.nz.f0.0(16) null<1>D        g43<8,8,1>D     0D              { align1 1H I@3 };
mov(16)         g49<1>D         -g47<8,8,1>D                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         a0<1>UW         0x0620UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g39<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0620UW        { align1 1H A@1 };
mov(16)         g51<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
(+f0.0) sel(16) g67<1>UD        g51<1,1,0>UD    0x00000000UD    { align1 1H I@1 compacted };
cmp.nz.f0.0(16) null<1>D        g47<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g69<1>UD        g6<1,1,0>UD     0x00000000UD    { align1 1H compacted };
mov(8)          g85<2>UD        g69<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g4<2>UD         g70<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g85.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g4.1<2>UD       0x00000000UD                    { align1 2Q I@2 };
mov(8)          g94<2>UD        0x00000000UD                    { align1 WE_all 1Q I@2 };
mov(8)          g94<2>UD        g85<8,4,2>UD                    { align1 1Q };
mov(8)          g96<2>UD        0x00000000UD                    { align1 WE_all 2Q I@2 };
mov(8)          g96<2>UD        g4<8,4,2>UD                     { align1 2Q };
mov(8)          g60<2>UD        g94<8,4,2>UD                    { align1 WE_all 1Q I@2 };
mov(8)          g94.1<2>UD      0x00000000UD                    { align1 WE_all 1Q };
mov(8)          g94.1<2>UD      g85.1<8,4,2>UD                  { align1 1Q };
mov(8)          g33<2>UD        g96<8,4,2>UD                    { align1 WE_all 2Q I@3 };
mov(8)          g96.1<2>UD      0x00000000UD                    { align1 WE_all 2Q };
mov(8)          g96.1<2>UD      g4.1<8,4,2>UD                   { align1 2Q };
mov(8)          g60.1<2>UD      g94.1<8,4,2>UD                  { align1 WE_all 1Q I@3 };
mov(8)          g33.1<2>UD      g96.1<8,4,2>UD                  { align1 WE_all 2Q I@2 };
cmp.g.f0.0(4)   null<1>UD       g60<8,2,4>UD    g60.2<8,2,4>UD  { align1 WE_all 1N I@2 };
(+f0.0) cmp.z.f0.0(4) null<1>UD g60.1<8,2,4>UD  g60.3<8,2,4>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(4) null<1>UD g60.1<8,2,4>UD  g60.3<8,2,4>UD  { align1 WE_all 1N };
(+f0.0) mov(4)  g60.2<4>UD      g60<8,2,4>UD                    { align1 WE_all 1N };
(+f0.0) mov(4)  g60.3<4>UD      g60.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(2)   null<1>UD       g60.2<0,1,0>UD  g60.4<4,2,2>UD  { align1 WE_all 1N I@1 };
(+f0.0) cmp.z.f0.0(2) null<1>UD g60.3<0,1,0>UD  g60.5<4,2,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(2) null<1>UD g60.3<0,1,0>UD  g60.5<4,2,2>UD  { align1 WE_all 1N };
(+f0.0) mov(2)  g60.4<2>UD      g60.2<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(2)  g60.5<2>UD      g60.3<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(2)   null<1>UD       g61.2<0,1,0>UD  g61.4<4,2,2>UD  { align1 WE_all 1N I@6 };
(+f0.0) cmp.z.f0.0(2) null<1>UD g61.3<0,1,0>UD  g61.5<4,2,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(2) null<1>UD g61.3<0,1,0>UD  g61.5<4,2,2>UD  { align1 WE_all 1N };
(+f0.0) mov(2)  g61.4<2>UD      g61.2<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(2)  g61.5<2>UD      g61.3<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(4)   null<1>UD       g60.6<0,1,0>UD  g61<8,4,2>UD    { align1 WE_all 1N I@1 };
(+f0.0) cmp.z.f0.0(4) null<1>UD g60.7<0,1,0>UD  g61.1<8,4,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(4) null<1>UD g60.7<0,1,0>UD  g61.1<8,4,2>UD  { align1 WE_all 1N };
(+f0.0) mov(4)  g61<2>UD        g60.6<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(4)  g61.1<2>UD      g60.7<0,1,0>UD                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(8)          g83<1>D         g6<8,8,1>D      -g60<8,4,2>D    { align1 1Q };
cmp.g.f0.0(4)   null<1>UD       g33<8,2,4>UD    g33.2<8,2,4>UD  { align1 WE_all 1N };
(+f0.0) cmp.z.f0.0(4) null<1>UD g33.1<8,2,4>UD  g33.3<8,2,4>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(4) null<1>UD g33.1<8,2,4>UD  g33.3<8,2,4>UD  { align1 WE_all 1N };
(+f0.0) mov(4)  g33.2<4>UD      g33<8,2,4>UD                    { align1 WE_all 1N };
(+f0.0) mov(4)  g33.3<4>UD      g33.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(2)   null<1>UD       g33.2<0,1,0>UD  g33.4<4,2,2>UD  { align1 WE_all 1N I@1 };
(+f0.0) cmp.z.f0.0(2) null<1>UD g33.3<0,1,0>UD  g33.5<4,2,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(2) null<1>UD g33.3<0,1,0>UD  g33.5<4,2,2>UD  { align1 WE_all 1N };
(+f0.0) mov(2)  g33.4<2>UD      g33.2<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(2)  g33.5<2>UD      g33.3<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(2)   null<1>UD       g34.2<0,1,0>UD  g34.4<4,2,2>UD  { align1 WE_all 1N I@6 };
(+f0.0) cmp.z.f0.0(2) null<1>UD g34.3<0,1,0>UD  g34.5<4,2,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(2) null<1>UD g34.3<0,1,0>UD  g34.5<4,2,2>UD  { align1 WE_all 1N };
(+f0.0) mov(2)  g34.4<2>UD      g34.2<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(2)  g34.5<2>UD      g34.3<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(4)   null<1>UD       g33.6<0,1,0>UD  g34<8,4,2>UD    { align1 WE_all 1N I@1 };
(+f0.0) cmp.z.f0.0(4) null<1>UD g33.7<0,1,0>UD  g34.1<8,4,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(4) null<1>UD g33.7<0,1,0>UD  g34.1<8,4,2>UD  { align1 WE_all 1N };
(+f0.0) mov(4)  g34<2>UD        g33.6<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(4)  g34.1<2>UD      g33.7<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(8)   null<1>UD       g61.6<0,1,0>UD  g33<8,4,2>UD    { align1 WE_all 1Q I@1 };
(+f0.0) cmp.z.f0.0(8) null<1>UD g61.7<0,1,0>UD  g33.1<8,4,2>UD  { align1 WE_all 1Q };
(-f0.0) cmp.g.f0.0(8) null<1>UD g61.7<0,1,0>UD  g33.1<8,4,2>UD  { align1 WE_all 1Q };
(+f0.0) mov(8)  g33<2>UD        g61.6<0,1,0>UD                  { align1 WE_all 1Q };
(+f0.0) mov(8)  g33.1<2>UD      g61.7<0,1,0>UD                  { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@1 };
add(8)          g84<1>D         g7<8,8,1>D      -g33<8,4,2>D    { align1 2Q };
cmp.l.f0.0(16)  null<1>UD       g6<8,8,1>UD     g73<0,1,0>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL16         UIP:  LABEL16             { align1 1H };
mov(16)         g37<1>D         0D                              { align1 WE_all 1H };
mov(16)         g37<1>D         -g47<8,8,1>D                    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g6<8,8,1>D      0D              { align1 1H };
add(8)          g37.1<2>D       g37<8,4,2>D     g37.1<8,4,2>D   { align1 WE_all 1Q I@2 };
add(4)          g37.2<4>D       g37.1<8,2,4>D   g37.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g37.3<4>D       g37.1<8,2,4>D   g37.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g37.4<1>D       g37.3<0,1,0>D   g37.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g38.4<1>D       g38.3<0,1,0>D   g38.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(8)          g38<1>D         g37.7<0,1,0>D   g38<1,1,0>D     { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g85<1>D         g38.7<0,1,0>D                   { align1 1H };
(+f0.0) if(16)  JIP:  LABEL18         UIP:  LABEL17             { align1 1H };
add(16)         g87<1>D         g2.6<0,1,0>D    28D             { align1 1H compacted };
cmp.l.f0.0(16)  g89<1>UD        g87<1,1,0>UD    g2.6<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g37<2>UD        g87<4,4,1>UD                    { align1 1Q };
mov(8)          g39<2>UD        g88<4,4,1>UD                    { align1 2Q };
add(16)         g91<1>D         -g89<1,1,0>D    g2.7<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g37.1<2>UD      g91<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g39.1<2>UD      g92<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(1)          g100<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g100<1>UD       g100<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(1)          g101<1>UD       sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g101<1>UD       g101<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
and(1)          g101<1>UD       g100<0,1,0>UD   g101<0,1,0>UD   { align1 WE_all 1N I@1 compacted };
mov(1)          g93<1>UD        g101<0,1,0>UD                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cbit(16)        g95<1>UD        g93<0,1,0>UD                    { align1 1H };
mul(16)         g41<1>D         g95<8,8,1>D     g85<16,8,2>UW   { align1 1H I@1 };
mul(16)         g92<1>D         g95<8,8,1>D     g85.1<16,8,2>UW { align1 1H };
add(16)         g41.1<2>UW      g41.1<16,8,2>UW g92<16,8,2>UW   { align1 1H I@1 };
mov(1)          g104<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g104<1>UD       g104<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g97<1>UD        g104<0,1,0>UD                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  null<1>D        g64<8,8,1>D     g97<0,1,0>D     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL19         UIP:  LABEL19             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g75UD           g37UD           g41UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };

LABEL19:
endif(16)       JIP:  LABEL20                                   { align1 1H };
mov(1)          g106<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g106<1>UD       g106<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
fbl(1)          g98<1>UD        g106<0,1,0>UD                   { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g98<0,1,0>UD    0x00000002UD    { align1 WE_all 1N @1 $6.dst };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g100<1>UD       g[a0 352]<0,1,0>UD              { align1 WE_all 1N A@1 };
mov(1)          g110<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g110<1>UD       g110<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
mov(16)         g106<1>UD       g66<8,8,1>UW                    { align1 1H };
mov(1)          g62<1>D         1D                              { align1 WE_all 1N };
mov(1)          g111<1>UD       sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g111<1>UD       g111<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g108<1>D        -g62<0,1,0>D    g106<8,8,1>UD   { align1 1H };
and(1)          g111<1>UD       g110<0,1,0>UD   g111<0,1,0>UD   { align1 WE_all 1N I@2 compacted };
mov(1)          g104<1>UD       g111<0,1,0>UD                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(16)         g110<1>UD       g104<0,1,0>UD   ~g108<8,8,1>D   { align1 1H };
cbit(16)        g114<1>UD       g110<8,8,1>UD                   { align1 1H I@1 };
mul(16)         g116<1>D        g114<8,8,1>D    g85<16,8,2>UW   { align1 1H I@1 };
mul(16)         g93<1>D         g114<8,8,1>D    g85.1<16,8,2>UW { align1 1H };
add(16)         g116.1<2>UW     g116.1<16,8,2>UW g93<16,8,2>UW  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g4<1>D          g100<0,1,0>D    g116<1,1,0>D    { align1 1H compacted };

LABEL20:
else(16)        JIP:  LABEL17         UIP:  LABEL17             { align1 1H };

LABEL18:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g4<1>UD         0x00000000UD                    { align1 1H };

LABEL17:
endif(16)       JIP:  LABEL16                                   { align1 1H };
mov(16)         g117<1>D        0D                              { align1 WE_all 1H };
mov(16)         g117<1>D        -g47<8,8,1>D                    { align1 1H };
cmp.nz.f0.0(16) null<1>D        g45<8,8,1>D     g35<8,8,1>D     { align1 1H };
add(8)          g117.1<2>D      g117<8,4,2>D    g117.1<8,4,2>D  { align1 WE_all 1Q I@2 };
add(4)          g117.2<4>D      g117.1<8,2,4>D  g117.2<8,2,4>D  { align1 WE_all 1N I@1 };
add(4)          g117.3<4>D      g117.1<8,2,4>D  g117.3<8,2,4>D  { align1 WE_all 1N I@1 };
add(4)          g117.4<1>D      g117.3<0,1,0>D  g117.4<4,4,1>D  { align1 WE_all 1N I@1 };
add(4)          g118.4<1>D      g118.3<0,1,0>D  g118.4<4,4,1>D  { align1 WE_all 1N I@2 };
add(8)          g118<1>D        g117.7<0,1,0>D  g118<1,1,0>D    { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g119<1>D        65535W          g4.0<0,1,0>D    g117<1,1,1>D { align1 1H };
(+f0.0) if(16)  JIP:  LABEL21         UIP:  LABEL21             { align1 1H };
and(16)         g121<1>UD       g35<8,8,1>UD    0x00ffffffUD    { align1 1H };
shl(16)         g123<1>D        g119<8,8,1>D    0x00000006UD    { align1 1H I@3 };
shr(16)         g125<1>UD       g119<1,1,0>UD   0x0000001aUD    { align1 1H compacted };
shl(16)         g13<1>D         g79<8,8,1>D     0x0000001eUD    { align1 1H $3.dst };
add(16)         g15<1>D         g83<1,1,0>D     1D              { align1 1H $3.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
or(16)          g54<1>UD        g121<8,8,1>UD   0xff000000UD    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g8<1>D          g2.6<0,1,0>D    g123<1,1,0>D    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
or(16)          g56<1>UD        g35<1,1,0>UD    g13<1,1,0>UD    { align1 1H I@4 compacted };
or(16)          g58<1>UD        g15<8,8,1>UD    0xfffffff0UD    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g10<1>UD        g8<1,1,0>UD     g2.6<0,1,0>UD   { align1 1H I@3 compacted };
mov(8)          g38<2>UD        g8<4,4,1>UD                     { align1 1Q $6.src };
mov(8)          g40<2>UD        g9<4,4,1>UD                     { align1 2Q $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add3(16)        g12<1>D         g2.7<0,1,0>D    g125<8,8,1>D    -g10<1,1,1>D { align1 1H I@3 };
mov(8)          g38.1<2>UD      g12<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g40.1<2>UD      g13<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g38UD           g54UD           0x08002584                0x00000180
                            ugm MsgDesc: ( store, a64, d32, V3, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 6 flat )  base_offset 0  { align1 1H $6 };

LABEL21:
endif(16)       JIP:  LABEL16                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
shl(16)         g16<1>D         g102<8,8,1>D    0x00000005UD    { align1 1H $7.dst };
shr(16)         g18<1>UD        g102<1,1,0>UD   0x0000001bUD    { align1 1H $3.dst compacted };
add(16)         g20<1>D         g2.2<0,1,0>D    16D             { align1 1H $4.src compacted };
shl(16)         g31<1>D         g119<8,8,1>D    0x00000006UD    { align1 1H I@6 };
shr(16)         g35<1>UD        g119<1,1,0>UD   0x0000001aUD    { align1 1H compacted };
shl(16)         g58<1>D         g83<8,8,1>D     0x00000002UD    { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g22<1>UD        g20<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@4 compacted };
add(16)         g26<1>D         g20<1,1,0>D     g16<1,1,0>D     { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
add(16)         g37<1>D         g2.6<0,1,0>D    g31<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g24<1>D         -g22<1,1,0>D    g2.3<0,1,0>D    { align1 1H $4.dst compacted };
cmp.l.f0.0(16)  g28<1>UD        g26<1,1,0>UD    g20<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g39<2>UD        g26<4,4,1>UD                    { align1 1Q $6.src };
mov(8)          g41<2>UD        g27<4,4,1>UD                    { align1 2Q $6.src };
cmp.l.f0.0(16)  g43<1>UD        g37<1,1,0>UD    g2.6<0,1,0>UD   { align1 1H I@5 compacted };
add(16)         g69<1>D         g37<1,1,0>D     12D             { align1 1H compacted };
add3(16)        g30<1>D         g24<8,8,1>D     g18<8,8,1>D     -g28<1,1,1>D { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add3(16)        g56<1>D         g2.7<0,1,0>D    g35<8,8,1>D     -g43<1,1,1>D { align1 1H I@3 };
add(16)         g83<1>D         g69<1,1,0>D     g58<1,1,0>D     { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g4<1>UD         g69<1,1,0>UD    g37<1,1,0>UD    { align1 1H compacted };
mov(8)          g39.1<2>UD      g30<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g41.1<2>UD      g31<4,4,1>UD                    { align1 2Q I@5 };
cmp.l.f0.0(16)  g85<1>UD        g83<1,1,0>UD    g69<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g51<2>UD        g83<4,4,1>UD                    { align1 1Q };
mov(8)          g53<2>UD        g84<4,4,1>UD                    { align1 2Q $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(16)        g43UD           g39UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
add3(16)        g87<1>D         -g4<8,8,1>D     g56<8,8,1>D     -g85<1,1,1>D { align1 1H I@3 };
mov(8)          g51.1<2>UD      g87<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g53.1<2>UD      g88<4,4,1>UD                    { align1 2Q I@2 };
and(16)         g69<1>UD        g49<8,8,1>UD    0x1fffffffUD    { align1 1H $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g51UD           g69UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };
cmp.z.f0.0(16)  null<1>D        g6<8,8,1>D      0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL22         UIP:  LABEL22             { align1 1H };
shl(16)         g88<1>D         g112<8,8,1>D    0x00000006UD    { align1 1H };
shr(16)         g90<1>UD        g112<1,1,0>UD   0x0000001aUD    { align1 1H compacted };
add(16)         g92<1>D         g2.6<0,1,0>D    g88<1,1,0>D     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g94<1>UD        g92<1,1,0>UD    g2.6<0,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g98<1>D         g37<1,1,0>D     -g92<1,1,0>D    { align1 1H compacted };
add(16)         g120<1>D        g92<1,1,0>D     12D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(16)  g100<1>UD       g37<1,1,0>UD    g92<1,1,0>UD    { align1 1H compacted };
add3(16)        g96<1>D         g2.7<0,1,0>D    g90<8,8,1>D     -g94<1,1,1>D { align1 1H I@4 };
cmp.g.f0.0(16)  g104<1>UD       g98<1,1,0>UD    0x00000000UD    { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g52<2>UD        g120<4,4,1>UD                   { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $6.src };
mov(8)          g54<2>UD        g121<4,4,1>UD                   { align1 2Q I@5 };
add3(16)        g102<1>D        g56<8,8,1>D     -g96<8,8,1>D    g100<1,1,1>D { align1 1H I@4 };
add(16)         g106<1>D        -g102<1,1,0>D   g104<1,1,0>D    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  null<1>D        g102<8,8,1>D    0D              { align1 1H };
(+f0.0) sel(16) g108<1>UD       g106<1,1,0>UD   g102<1,1,0>UD   { align1 1H I@2 compacted };
(+f0.0) sel(16) g110<1>D        -g98<1,1,0>D    g98<1,1,0>D     { align1 1H compacted };
shl(16)         g116<1>D        g108<8,8,1>D    0x0000001aUD    { align1 1H I@2 };
shr(16)         g114<1>UD       g110<1,1,0>UD   0x00000006UD    { align1 1H I@2 compacted };
or(16)          g118<1>UD       g114<1,1,0>UD   g116<1,1,0>UD   { align1 1H I@1 compacted };
(+f0.0) sel(16) g4<1>D          -g118<1,1,0>D   g118<1,1,0>D    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g122<1>UD       g120<1,1,0>UD   g92<1,1,0>UD    { align1 1H compacted };
add(16)         g124<1>D        -g122<1,1,0>D   g96<1,1,0>D     { align1 1H I@1 compacted };
mov(8)          g52.1<2>UD      g124<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g54.1<2>UD      g125<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g52UD           g4UD            0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };
add(16)         g125<1>D        g92<1,1,0>D     16D             { align1 1H compacted };
mov(16)         g83<1>UD        g63<16,8,2>UB                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g8<1>UD         g125<1,1,0>UD   g92<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g12<2>UD        g125<4,4,1>UD                   { align1 1Q $3.dst };
mov(8)          g14<2>UD        g126<4,4,1>UD                   { align1 2Q $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g10<1>D         -g8<1,1,0>D     g96<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g12.1<2>UD      g10<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g14.1<2>UD      g11<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g12UD           g83UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $3 };

LABEL22:
endif(16)       JIP:  LABEL16                                   { align1 1H };
or(16)          g13<1>UD        g67<1,1,0>UD    g58<1,1,0>UD    { align1 1H $3.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shl(16)         g15<1>D         g112<8,8,1>D    0x00000006UD    { align1 1H $3.dst };
shr(16)         g17<1>UD        g112<1,1,0>UD   0x0000001aUD    { align1 1H compacted };
add(16)         g19<1>D         g2.6<0,1,0>D    22D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g97<4>UB        g13<8,8,1>UD                    { align1 1H I@4 };
cmp.l.f0.0(16)  g21<1>UD        g19<1,1,0>UD    g2.6<0,1,0>UD   { align1 1H I@2 compacted };
add(16)         g23<1>D         g19<1,1,0>D     g15<1,1,0>D     { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g84<1>UD        g97<32,8,4>UB                   { align1 1H I@3 };
add3(16)        g27<1>D         -g21<8,8,1>D    g2.7<0,1,0>D    g17<1,1,1>D { align1 1H I@3 };
cmp.l.f0.0(16)  g25<1>UD        g23<1,1,0>UD    g19<1,1,0>UD    { align1 1H I@3 compacted };
add(16)         g29<1>D         g23<1,1,0>D     g6<1,1,0>D      { align1 1H compacted };
cmp.l.f0.0(16)  g31<1>UD        g29<1,1,0>UD    g23<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g53<2>UD        g29<4,4,1>UD                    { align1 1Q $6.src };
mov(8)          g55<2>UD        g30<4,4,1>UD                    { align1 2Q $6.src };
add3(16)        g35<1>D         -g25<8,8,1>D    g27<8,8,1>D     -g31<1,1,1>D { align1 1H I@3 };
mov(8)          g53.1<2>UD      g35<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g55.1<2>UD      g36<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g53UD           g84UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };

LABEL16:
endif(16)       JIP:  LABEL13                                   { align1 1H };

LABEL13:
endif(16)       JIP:  LABEL10                                   { align1 1H };
add(16)         g81<1>D         g81<1,1,0>D     g73<0,1,0>D     { align1 1H I@4 compacted };

LABEL10:
while(16)       JIP:  LABEL23                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_leaf_primref_to_procedurals_code[] = {
    0x80000065, 0x70058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x24050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00700c, 0x00340000,
    0xe2713040, 0x04017003, 0x00041a69, 0x45058660,
    0x02462405, 0x00000004, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa00710c, 0x00300000, 0xa05e1940, 0x01004503,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa0520040, 0x02410203, 0x27541970, 0x02105203,
    0x00030061, 0x58060220, 0x00345205, 0x00000000,
    0x00130061, 0x5a060220, 0x00345305, 0x00000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x00040070, 0x00018660, 0x16000344, 0x00000008,
    0xa0561c40, 0x02125412, 0x00031961, 0x58260220,
    0x00345605, 0x00000000, 0x00131a61, 0x5a260220,
    0x00345705, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x5c140000,
    0xfb005824, 0x00000000, 0x2747f262, 0x5c005e03,
    0x00040041, 0x56050660, 0x01000344, 0x00565c16,
    0x00040041, 0x5f050660, 0x01000344, 0x00565c06,
    0x00041940, 0x5f160110, 0x01565f16, 0x00565606,
    0x11041962, 0x4d058220, 0x02465f05, 0x00000004,
    0x00040070, 0x00018660, 0x26464505, 0x00000000,
    0x01040022, 0x0001c060, 0x00000118, 0x00000108,
    0xa0600040, 0xfff04503, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00041941, 0x62050660,
    0x01466005, 0x00000344, 0x00043241, 0x57050660,
    0x01466005, 0x00000354, 0x00041940, 0x62160110,
    0x01566216, 0x00565706, 0xa0641940, 0x4d006202,
    0x27661970, 0x62006403, 0xa0680040, 0x6401025a,
    0x276a1970, 0x0210680b, 0x00030061, 0x6e060220,
    0x00346805, 0x00000000, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x70060220,
    0x00346905, 0x00000000, 0x00041b52, 0x6c040660,
    0x0eae02a4, 0x6a056605, 0x00031961, 0x6e260220,
    0x00346c05, 0x00000000, 0x00131a61, 0x70260220,
    0x00346d05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x40140000,
    0xfb006e24, 0x00000000, 0x00040024, 0x0001c060,
    0x00000020, 0x00000020, 0x00042161, 0x40054220,
    0x00000000, 0xffffffff, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x256f1a70, 0x5c004503,
    0x01040022, 0x0001c060, 0x00000108, 0x00000020,
    0x00040024, 0x0001c060, 0x000000f8, 0x000000f8,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00040041, 0x71050660, 0x01464505, 0x00000344,
    0x00043241, 0x58050660, 0x01464505, 0x00000354,
    0x00041940, 0x71160110, 0x01567116, 0x00565806,
    0xa0731940, 0x4d007102, 0x27751970, 0x71007303,
    0xa0770040, 0x7301025a, 0x27791970, 0x0210770b,
    0x00033361, 0x06060220, 0x00347705, 0x00000000,
    0x00133361, 0x08060220, 0x00347805, 0x00000000,
    0x00041b52, 0x7b040660, 0x0eae02a4, 0x79057505,
    0x00031961, 0x06260220, 0x00347b05, 0x00000000,
    0x00131a61, 0x08260220, 0x00347c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x0a140000, 0xfb000624, 0x00000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0xae422370, 0x40000a02, 0x00040025, 0x00004600,
    0x00000000, 0x00000038, 0x00041a66, 0x00010220,
    0x22464205, 0x00466f05, 0x01040028, 0x0001c660,
    0x00000018, 0x00000018, 0xa0450040, 0x00104503,
    0x00040027, 0x00014060, 0x00000000, 0xfffffea8,
    0xa00b1f40, 0xfff04703, 0x00041941, 0x0d050660,
    0x01460b05, 0x00000344, 0x00043241, 0x59050660,
    0x01460b05, 0x00000354, 0x00041940, 0x0d160110,
    0x01560d16, 0x00565906, 0xa00f1940, 0x4d000d02,
    0x27111970, 0x0d000f03, 0xa0130040, 0x0f01025a,
    0x27151970, 0x0210130b, 0x00030061, 0x19060220,
    0x00341305, 0x00000000, 0x00130061, 0x1b060220,
    0x00341405, 0x00000000, 0x00041b52, 0x17040660,
    0x0eae02a4, 0x15051105, 0x00031961, 0x19260220,
    0x00341705, 0x00000000, 0x00131a61, 0x1b260220,
    0x00341805, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x1d140000,
    0xfb001924, 0x00000000, 0x251f1a70, 0x5c004703,
    0x01040022, 0x0001c060, 0x000000f8, 0x00000020,
    0x00040024, 0x0001c060, 0x000000e8, 0x000000e8,
    0x00040041, 0x21050660, 0x01464705, 0x00000344,
    0x00043241, 0x5a050660, 0x01464705, 0x00000354,
    0x00041940, 0x21160110, 0x01562116, 0x00565a06,
    0xa0231940, 0x4d002102, 0x27251970, 0x21002303,
    0xa0270040, 0x2301025a, 0x27291970, 0x0210270b,
    0x00033561, 0x2d060220, 0x00342705, 0x00000000,
    0x00133561, 0x2f060220, 0x00342805, 0x00000000,
    0x00041b52, 0x2b040660, 0x0eae02a4, 0x29052505,
    0x00031961, 0x2d260220, 0x00342b05, 0x00000000,
    0x00131a61, 0x2f260220, 0x00342c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x31140000, 0xfb002d24, 0x00000000,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0xae432570, 0x1d003102, 0x00040025, 0x00004600,
    0x00000000, 0x00000038, 0x00041a66, 0x00010220,
    0x22464305, 0x00461f05, 0x01040028, 0x0001c660,
    0x00000018, 0x00000018, 0xa0470040, 0x00104703,
    0x00040027, 0x00014060, 0x00000000, 0xfffffec8,
    0x80030061, 0x42054410, 0x00000000, 0x76543210,
    0x00040061, 0x3f064540, 0x00000000, 0x00030003,
    0x64421a40, 0x00804295, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00042161, 0x40050120,
    0x00464205, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xe0061965, 0x00f04003,
    0xa0511940, 0x06004502, 0xa0431e40, 0x06004702,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x27451970, 0x47004303, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x27041b70, 0x43005103,
    0x00041a61, 0x49052660, 0x00464505, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041a65, 0x53052620, 0x02464505, 0x00460405,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xeb551a70, 0x00004903, 0x00041966, 0x00010220,
    0x22465505, 0x00465305, 0x11040028, 0x0001c660,
    0x00001598, 0x00001598, 0x00040041, 0x56050660,
    0x01465105, 0x00000344, 0x00043241, 0x5b050660,
    0x01465105, 0x00000354, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00041940, 0x56160110,
    0x01565616, 0x00565b06, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa0581940, 0x0310561a,
    0xa0672740, 0x4d005602, 0x275a1a70, 0x56005803,
    0xa05c0040, 0x5801025a, 0xa06b1b40, 0x6701025a,
    0x275e1a70, 0x02105c0b, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x62060220,
    0x00345c05, 0x00000000, 0x80103701, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x64060220,
    0x00345d05, 0x00000000, 0x27690070, 0x56006703,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00031d61, 0x08060220, 0x00346b05, 0x00000000,
    0x80103301, 0x00000000, 0x00000000, 0x00000000,
    0x00131e61, 0x0a060220, 0x00346c05, 0x00000000,
    0x276d3170, 0x02106b0b, 0x00041f52, 0x60040660,
    0x0eae02a4, 0x5e055a05, 0x27720070, 0x47005103,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00041b52, 0x6f040660, 0x0eae02a4, 0x6d056905,
    0x00031b61, 0x62260220, 0x00346005, 0x00000000,
    0x00131c61, 0x64260220, 0x00346105, 0x00000000,
    0x00031b61, 0x08260220, 0x00346f05, 0x00000000,
    0x00131c61, 0x0a260220, 0x00347005, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x66140000, 0xfb006224, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x70140000, 0xfb000824, 0x00000000,
    0xac742370, 0x70107002, 0x00041965, 0x00010220,
    0x22467205, 0x00467405, 0x01040022, 0x0001c060,
    0x000000b8, 0x000000a8, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0xe2620961, 0x00114004,
    0x80000965, 0x62058220, 0x02006204, 0xffffffff,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xe2630961, 0x00117044, 0x80000965, 0x63058220,
    0x02006304, 0xffffffff, 0x22631965, 0x63116203,
    0x80001961, 0x75050220, 0x00006304, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0004004d, 0x49050220, 0x00007504, 0x00000000,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00041a61, 0x49054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000012e0,
    0x00040070, 0x00018220, 0x52460605, 0x00000008,
    0x01040022, 0x0001c060, 0x000012a8, 0x000012a8,
    0x00041c70, 0x00010220, 0x52460605, 0x00004904,
    0x01040022, 0x0001c060, 0x00000168, 0x00000158,
    0x00042769, 0x76058660, 0x02466605, 0x00000005,
    0xe0780068, 0x01b06603, 0xa07a1a40, 0x76010242,
    0x277c1970, 0x02107a2b, 0x00033361, 0x09060220,
    0x00347a05, 0x00000000, 0x00133361, 0x0b060220,
    0x00347b05, 0x00000000, 0xa00d2340, 0x01007a03,
    0x00041c52, 0x7e040660, 0x0e2e0264, 0x7c057805,
    0x270fa370, 0x7a000d03, 0x00033461, 0x15060220,
    0x00340d05, 0x00000000, 0x00133461, 0x17060220,
    0x00340e05, 0x00000000, 0x00031c61, 0x09260220,
    0x00347e05, 0x00000000, 0x00131d61, 0x0b260220,
    0x00347f05, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0xa0192440, 0x7e020f02,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x0d440000, 0xfb000924, 0x000c0000,
    0x00031961, 0x15260220, 0x00341905, 0x00000000,
    0x00131a61, 0x17260220, 0x00341a05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x19440000, 0xfb001524, 0x000c0000,
    0x00042365, 0x23058220, 0x02461305, 0x07ffffff,
    0xe04f2468, 0x01d01f03, 0x00040024, 0x0001c060,
    0x00000020, 0x00000020, 0x00041b61, 0x23054220,
    0x00000000, 0xffffffff, 0x00040025, 0x00004600,
    0x00000000, 0x00001120, 0xa01a2440, 0x00f04003,
    0xa01c2440, 0xfff04003, 0xa0273540, 0x00104003,
    0x00041b70, 0x00018660, 0x56461a05, 0x00000010,
    0x8004b461, 0x10014110, 0x00000000, 0x04600460,
    0x00040069, 0x10018510, 0x01561c06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x04600460,
    0xe01e0961, 0x001b0004, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80041b61, 0x10014110,
    0x00000000, 0x04600460, 0x00040069, 0x10018510,
    0x01562706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x04600460, 0xe0290961, 0x001b0004,
    0x11041a62, 0x25058220, 0x02461e05, 0xffffffff,
    0xa72b2570, 0x01002703, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x01042562, 0x2d058220,
    0x02462905, 0xffffffff, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xae2f2570, 0x23002502,
    0x00041b70, 0x00018660, 0x26462b05, 0x00000000,
    0x00041a61, 0x31052660, 0x00462f05, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80041961, 0x10014110, 0x00000000, 0x06200620,
    0x00040069, 0x10018510, 0x01562706, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x06200620,
    0xe0330961, 0x001b0004, 0xef431962, 0x00003303,
    0x00040070, 0x00018660, 0x26462f05, 0x00000000,
    0xef450062, 0x00000603, 0x00031961, 0x55060220,
    0x00344505, 0x00000000, 0x00131a61, 0x04060220,
    0x00344605, 0x00000000, 0x00031a61, 0x55264220,
    0x00000000, 0x00000000, 0x00131a61, 0x04264220,
    0x00000000, 0x00000000, 0x80031a61, 0x5e064220,
    0x00000000, 0x00000000, 0x00030061, 0x5e060220,
    0x00445506, 0x00000000, 0x80131a61, 0x60064220,
    0x00000000, 0x00000000, 0x00130061, 0x60060220,
    0x00440406, 0x00000000, 0x80031a61, 0x3c060220,
    0x00445e06, 0x00000000, 0x80030061, 0x5e264220,
    0x00000000, 0x00000000, 0x00030061, 0x5e260220,
    0x00445526, 0x00000000, 0x80131b61, 0x21060220,
    0x00446006, 0x00000000, 0x80130061, 0x60264220,
    0x00000000, 0x00000000, 0x00130061, 0x60260220,
    0x00440426, 0x00000000, 0x80031b61, 0x3c260220,
    0x00445e26, 0x00000000, 0x80131a61, 0x21260220,
    0x00446026, 0x00000000, 0x80021a70, 0x00010220,
    0x32423c07, 0x00423c47, 0x81020070, 0x00010220,
    0x12423c27, 0x00423c67, 0x91020070, 0x00010220,
    0x32423c27, 0x00423c67, 0x81020061, 0x3c470220,
    0x00423c07, 0x00000000, 0x81021961, 0x3c670220,
    0x00423c27, 0x00000000, 0x80011970, 0x00010220,
    0x32003c44, 0x00323c86, 0x81010070, 0x00010220,
    0x12003c64, 0x00323ca6, 0x91010070, 0x00010220,
    0x32003c64, 0x00323ca6, 0x81010061, 0x3c860220,
    0x00003c44, 0x00000000, 0x81011961, 0x3ca60220,
    0x00003c64, 0x00000000, 0x80011e70, 0x00010220,
    0x32003d44, 0x00323d86, 0x81010070, 0x00010220,
    0x12003d64, 0x00323da6, 0x91010070, 0x00010220,
    0x32003d64, 0x00323da6, 0x81010061, 0x3d860220,
    0x00003d44, 0x00000000, 0x81011961, 0x3da60220,
    0x00003d64, 0x00000000, 0x80021970, 0x00010220,
    0x32003cc4, 0x00443d06, 0x81020070, 0x00010220,
    0x12003ce4, 0x00443d26, 0x91020070, 0x00010220,
    0x32003ce4, 0x00443d26, 0x81020061, 0x3d060220,
    0x00003cc4, 0x00000000, 0x81021961, 0x3d260220,
    0x00003ce4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00030040, 0x53050660,
    0x06460605, 0x02443c06, 0x80020070, 0x00010220,
    0x32422107, 0x00422147, 0x81020070, 0x00010220,
    0x12422127, 0x00422167, 0x91020070, 0x00010220,
    0x32422127, 0x00422167, 0x81020061, 0x21470220,
    0x00422107, 0x00000000, 0x81021961, 0x21670220,
    0x00422127, 0x00000000, 0x80011970, 0x00010220,
    0x32002144, 0x00322186, 0x81010070, 0x00010220,
    0x12002164, 0x003221a6, 0x91010070, 0x00010220,
    0x32002164, 0x003221a6, 0x81010061, 0x21860220,
    0x00002144, 0x00000000, 0x81011961, 0x21a60220,
    0x00002164, 0x00000000, 0x80011e70, 0x00010220,
    0x32002244, 0x00322286, 0x81010070, 0x00010220,
    0x12002264, 0x003222a6, 0x91010070, 0x00010220,
    0x32002264, 0x003222a6, 0x81010061, 0x22860220,
    0x00002244, 0x00000000, 0x81011961, 0x22a60220,
    0x00002264, 0x00000000, 0x80021970, 0x00010220,
    0x320021c4, 0x00442206, 0x81020070, 0x00010220,
    0x120021e4, 0x00442226, 0x91020070, 0x00010220,
    0x320021e4, 0x00442226, 0x81020061, 0x22060220,
    0x000021c4, 0x00000000, 0x81021961, 0x22260220,
    0x000021e4, 0x00000000, 0x80031970, 0x00010220,
    0x32003dc4, 0x00442106, 0x81030070, 0x00010220,
    0x12003de4, 0x00442126, 0x91030070, 0x00010220,
    0x32003de4, 0x00442126, 0x81030061, 0x21060220,
    0x00003dc4, 0x00000000, 0x81031961, 0x21260220,
    0x00003de4, 0x00000000, 0x80101901, 0x00000000,
    0x00000000, 0x00000000, 0x00130040, 0x54050660,
    0x06460705, 0x02442106, 0x00040070, 0x00010220,
    0x52460605, 0x00004904, 0x01040022, 0x0001c060,
    0x00000b60, 0x00000b60, 0x80040061, 0x25054660,
    0x00000000, 0x00000000, 0x00040061, 0x25052660,
    0x00462f05, 0x00000000, 0x00040070, 0x00018660,
    0x16460605, 0x00000000, 0x80031a40, 0x25260660,
    0x06442506, 0x00442526, 0x80021940, 0x25470660,
    0x06422527, 0x00422547, 0x80021940, 0x25670660,
    0x06422527, 0x00422567, 0x80021940, 0x25850660,
    0x06002564, 0x00342585, 0x80021a40, 0x26850660,
    0x06002664, 0x00342685, 0xa4261940, 0x26012582,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x55050660, 0x000026e4, 0x00000000,
    0x01040022, 0x0001c060, 0x00000340, 0x00000320,
    0xa0570040, 0x01c1026b, 0x27591970, 0x0210574b,
    0x00030061, 0x25060220, 0x00345705, 0x00000000,
    0x00130061, 0x27060220, 0x00345805, 0x00000000,
    0xa05b1b40, 0x02125952, 0x00031961, 0x25260220,
    0x00345b05, 0x00000000, 0x00131a61, 0x27260220,
    0x00345c05, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0xe2640961, 0x00114004,
    0x80000965, 0x64058220, 0x02006404, 0xffffffff,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xe2650961, 0x00117044, 0x80000965, 0x65058220,
    0x02006504, 0xffffffff, 0x22651965, 0x65116403,
    0x80001961, 0x5d050220, 0x00006504, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0004004d, 0x5f050220, 0x00005d04, 0x00000000,
    0x00041941, 0x29050660, 0x01465f05, 0x00565506,
    0x00040041, 0x5c050660, 0x01465f05, 0x00565516,
    0x00041940, 0x29160110, 0x01562916, 0x00565c06,
    0xe2680961, 0x00114004, 0x80000965, 0x68058220,
    0x02006804, 0xffffffff, 0x8000194c, 0x61050220,
    0x00006804, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040070, 0x00010660,
    0x16464005, 0x00006104, 0x01040022, 0x0001c060,
    0x00000030, 0x00000030, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x4b140000,
    0xfb182524, 0x01002914, 0x00040025, 0x00004600,
    0x00000000, 0x00000178, 0xe26a0961, 0x00114004,
    0x80000965, 0x6a058220, 0x02006a04, 0xffffffff,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x8000194c, 0x62050220, 0x00006a04, 0x00000000,
    0x80009669, 0x10018220, 0x02006204, 0x00000002,
    0x80000940, 0x10018220, 0x02001000, 0x00000800,
    0x80000961, 0x64050220, 0x00010580, 0x00000000,
    0xe26e0961, 0x00114004, 0x80000965, 0x6e058220,
    0x02006e04, 0xffffffff, 0x00040061, 0x6a050120,
    0x00464205, 0x00000000, 0x80000061, 0x3e054660,
    0x00000000, 0x00000001, 0xe26f0961, 0x00117044,
    0x80000965, 0x6f058220, 0x02006f04, 0xffffffff,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x6c052660, 0x02003e04, 0x00466a05,
    0x226f1a65, 0x6f116e03, 0x80001961, 0x68050220,
    0x00006f04, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040065, 0x6e050220,
    0x06006804, 0x02466c05, 0x0004194d, 0x72050220,
    0x00466e05, 0x00000000, 0x00041941, 0x74050660,
    0x01467205, 0x00565506, 0x00040041, 0x5d050660,
    0x01467205, 0x00565516, 0x00041940, 0x74160110,
    0x01567416, 0x00565d06, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0040040, 0x74016402,
    0x00040024, 0x0001c060, 0x00000030, 0x00000030,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x04054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000768,
    0x80040061, 0x75054660, 0x00000000, 0x00000000,
    0x00040061, 0x75052660, 0x00462f05, 0x00000000,
    0x00040070, 0x00010660, 0x26462d05, 0x00462305,
    0x80031a40, 0x75260660, 0x06447506, 0x00447526,
    0x80021940, 0x75470660, 0x06427527, 0x00427547,
    0x80021940, 0x75670660, 0x06427527, 0x00427567,
    0x80021940, 0x75850660, 0x06007564, 0x00347585,
    0x80021a40, 0x76850660, 0x06007664, 0x00347685,
    0xa4761940, 0x76017582, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x77044560,
    0x0606ffff, 0x75050404, 0x01040022, 0x0001c060,
    0x00000148, 0x00000148, 0x00040065, 0x79058220,
    0x02462305, 0x00ffffff, 0x00041b69, 0x7b058660,
    0x02467705, 0x00000006, 0xe07d0068, 0x01a07703,
    0x00042369, 0x0d058660, 0x02464f05, 0x0000001e,
    0xa00f2340, 0x00105303, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00041d66, 0x36058220,
    0x02467905, 0xff000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa0081d40, 0x7b01026a,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x20381c66, 0x0d002303, 0x00041c66, 0x3a058220,
    0x02460f05, 0xfffffff0, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x270a1b70, 0x0210084b,
    0x00033661, 0x26060220, 0x00340805, 0x00000000,
    0x00133661, 0x28060220, 0x00340905, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00041b52, 0x0c040660, 0x0e2e02e4, 0x0a057d05,
    0x00031961, 0x26260220, 0x00340c05, 0x00000000,
    0x00131a61, 0x28260220, 0x00340d05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xfb082624, 0x00083634,
    0x00040025, 0x00004600, 0x00000000, 0x00000568,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x00042769, 0x10058660, 0x02466605, 0x00000005,
    0xe0122368, 0x01b06603, 0xa0143440, 0x01010243,
    0x00041e69, 0x1f058660, 0x02467705, 0x00000006,
    0xe0230068, 0x01a07703, 0x00043669, 0x3a058660,
    0x02465305, 0x00000002, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x27161c70, 0x0210142b,
    0xa01a1f40, 0x10001402, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0xa0250040, 0x1f01026a,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa0182440, 0x0212161a, 0x271c1b70, 0x14001a03,
    0x00033661, 0x27060220, 0x00341a05, 0x00000000,
    0x00133661, 0x29060220, 0x00341b05, 0x00000000,
    0x272b1d70, 0x0210254b, 0xa0450040, 0x00c02503,
    0x00041d52, 0x1e040e68, 0x0e2e1805, 0x1c051205,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041b52, 0x38040660, 0x0e2e02e4, 0x2b052305,
    0xa0531b40, 0x3a004502, 0x27040070, 0x25004503,
    0x00031c61, 0x27260220, 0x00341e05, 0x00000000,
    0x00131d61, 0x29260220, 0x00341f05, 0x00000000,
    0x27551c70, 0x45005303, 0x00030061, 0x33060220,
    0x00345305, 0x00000000, 0x00133661, 0x35060220,
    0x00345405, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x2b440000,
    0xfb002724, 0x000c0000, 0x00041b52, 0x57042e68,
    0x0e2e0405, 0x55053805, 0x00031961, 0x33260220,
    0x00345705, 0x00000000, 0x00131a61, 0x35260220,
    0x00345805, 0x00000000, 0x00042565, 0x45058220,
    0x02463105, 0x1fffffff, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xfb083324, 0x00004514, 0x00040070, 0x00018660,
    0x16460605, 0x00000000, 0x01040022, 0x0001c060,
    0x00000220, 0x00000220, 0x00040069, 0x58058660,
    0x02467005, 0x00000006, 0xe05a0068, 0x01a07003,
    0xa05c1a40, 0x5801026a, 0x275e1970, 0x02105c4b,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xa0620040, 0x5c202502, 0xa0780040, 0x00c05c03,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x27640070, 0x5c002503, 0x00041c52, 0x60040660,
    0x0e2e02e4, 0x5e055a05, 0xeb681c70, 0x00006203,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00031c61, 0x34060220, 0x00347805, 0x00000000,
    0x80103601, 0x00000000, 0x00000000, 0x00000000,
    0x00131d61, 0x36060220, 0x00347905, 0x00000000,
    0x00041c52, 0x66040e68, 0x0e8e3805, 0x64056005,
    0xa06a1940, 0x68026602, 0x00040070, 0x00018660,
    0x56466605, 0x00000000, 0x2f6c1a62, 0x66006a03,
    0xaf6e0062, 0x62026202, 0x00041a69, 0x74058660,
    0x02466c05, 0x0000001a, 0xe0721a68, 0x00606e03,
    0x20761966, 0x74007203, 0xaf041962, 0x76027602,
    0x277a0070, 0x5c007803, 0xa07c1940, 0x60027a02,
    0x00031961, 0x34260220, 0x00347c05, 0x00000000,
    0x00131a61, 0x36260220, 0x00347d05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xfb083424, 0x00000414,
    0xa07d0040, 0x01005c03, 0x00040061, 0x53050020,
    0x00563f06, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x27081a70, 0x5c007d03,
    0x00032361, 0x0c060220, 0x00347d05, 0x00000000,
    0x00132361, 0x0e060220, 0x00347e05, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xa00a1b40, 0x60020802, 0x00031961, 0x0c260220,
    0x00340a05, 0x00000000, 0x00131a61, 0x0e260220,
    0x00340b05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xf3080c24, 0x00025314, 0x00040025, 0x00004600,
    0x00000000, 0x00000130, 0x200d2366, 0x3a004303,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00042369, 0x0f058660, 0x02467005, 0x00000006,
    0xe0110068, 0x01a07003, 0xa0130040, 0x0161026b,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00041c61, 0x61070200, 0x00460d05, 0x00000000,
    0x27151a70, 0x0210134b, 0xa0171d40, 0x0f001302,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00041b61, 0x54050020, 0x00666107, 0x00000000,
    0x00041b52, 0x1b042e68, 0x06061505, 0x110502e4,
    0x27191b70, 0x13001703, 0xa01d0040, 0x06001702,
    0x271f1970, 0x17001d03, 0x00033661, 0x35060220,
    0x00341d05, 0x00000000, 0x00133661, 0x37060220,
    0x00341e05, 0x00000000, 0x00041b52, 0x23042e68,
    0x0e2e1905, 0x1f051b05, 0x00031961, 0x35260220,
    0x00342305, 0x00000000, 0x00131a61, 0x37260220,
    0x00342405, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xf3083524, 0x00025414, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000018, 0xa0511c40, 0x49105102,
    0x00040027, 0x00014060, 0x00000000, 0xffffe9c8,
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
      .base.program_size = 7408,
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
const char *gfx125_bvh_build_leaf_primref_to_procedurals_sha1 = "fc5571c3b2ab5cf92518f334c88c011cf3bc6166";

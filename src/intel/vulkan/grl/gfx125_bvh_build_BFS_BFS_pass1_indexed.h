#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_BFS_BFS_pass1_indexed_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_BFS_BFS_pass1_indexed_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_BFS_BFS_pass1_indexed_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g4<1>UD         g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g32<1>UD        g0.1<0,1,0>UD                   { align1 1H };
mov(16)         g38<1>UD        0x00000000UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g1UD            g4UD            nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g31<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g31.8<1>UW      g31<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g55<1>D         g2<0,1,0>D      1064D           { align1 1H compacted };
cmp.l.f0.0(16)  g57<1>UD        g55<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g62<2>UD        g55<4,4,1>UD                    { align1 1Q };
mov(8)          g64<2>UD        g56<4,4,1>UD                    { align1 2Q };
add(16)         g59<1>D         -g57<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g62.1<2>UD      g59<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g64.1<2>UD      g60<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g60UD           g62UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
add(16)         g62<1>D         g2<0,1,0>D      1068D           { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g64<1>UD        g62<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };

LABEL3:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g66<1>D         g38<8,8,1>D     0x00000002UD    { align1 1H };
add(16)         g68<1>D         g62<1,1,0>D     g66<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g70<1>UD        g68<1,1,0>UD    g62<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g74<2>UD        g68<4,4,1>UD                    { align1 1Q };
mov(8)          g76<2>UD        g69<4,4,1>UD                    { align1 2Q };
add3(16)        g72<1>D         -g64<8,8,1>D    g2.1<0,1,0>D    -g70<1,1,1>D { align1 1H I@3 };
mov(8)          g74.1<2>UD      g72<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g76.1<2>UD      g73<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g3<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g3<1>UD         g3<0,1,0>UD     0xffffffffUD    { align1 WE_all 1N A@1 };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
add(16)         g85<1>W         g31<16,16,1>UW  -1W             { align1 WE_all 1H };
fbl(1)          g78<1>UD        g3<0,1,0>UD                     { align1 WE_all 1N I@3 };
shl(1)          a0<1>UD         g78<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g80<2>D         g[a0 320]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g80.1<2>D       g[a0 324]<0,1,0>D               { align1 WE_all 1N };
mov(8)          g66.1<2>D       g80.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g66<2>D         g80<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) g75UD    g66UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $2 };
mov(16)         g83<1>D         0D                              { align1 WE_all 1H @3 $2.dst };
mov(16)         g83<1>D         g75<8,8,1>D                     { align1 1H };
mov(16)         a0<1>UW         0x0a60UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g85<8,8,1>W     0x0002UW        { align1 WE_all 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a60UW        { align1 WE_all 1H A@1 };
mov(16)         g81<1>UD        g[a0]<VxH,1,0>UD                { align1 WE_all 1H A@1 compacted };
mov(1)          g81<1>D         0D                              { align1 WE_all 1N I@1 };
add(8)          g81.1<2>D       g81<8,4,2>D     g81.1<8,4,2>D   { align1 WE_all 1Q I@1 };
add(4)          g81.2<4>D       g81.1<8,2,4>D   g81.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g81.3<4>D       g81.1<8,2,4>D   g81.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g81.4<1>D       g81.3<0,1,0>D   g81.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g82.4<1>D       g82.3<0,1,0>D   g82.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(8)          g82<1>D         g81.7<0,1,0>D   g82<1,1,0>D     { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g40<1>D         g32<1,1,0>D     -g81<1,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g86<1>UD        g40<1,1,0>UD    g75<1,1,0>UD    { align1 1H I@1 compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g86<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov.nz.f0.0(16) g36<1>UD        f0<0,1,0>UW                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
mov(16)         g34<1>UD        0xffffffffUD                    { align1 1H };
break(16)       JIP:  LABEL0          UIP:  LABEL1              { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };
add(16)         g87<1>D         g81<1,1,0>D     g75<1,1,0>D     { align1 1H compacted };
add(16)         g38<1>D         g38<1,1,0>D     16D             { align1 1H compacted };
add(16)         g32<1>D         g32<1,1,0>D     -g88.7<0,1,0>D  { align1 1H I@2 compacted };
cmp.ge.f0.0(16) null<1>UD       g38<8,8,1>UD    g60<8,8,1>UD    { align1 1H @2 $1.dst };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL2              { align1 1H };
mov(16)         g34<1>UD        0x00000000UD                    { align1 1H I@7 };
break(16)       JIP:  LABEL2          UIP:  LABEL1              { align1 1H };

LABEL2:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
while(16)       JIP:  LABEL3                                    { align1 1H };
mov.nz.f0.0(16) null<1>D        g34<8,8,1>D                     { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL4              { align1 1H };
fbl(16)         g88<1>UD        g36<8,8,1>UD                    { align1 1H I@6 };
cmp.z.f0.0(16)  null<1>D        g36<8,8,1>D     0D              { align1 1H };
(-f0.0) sel(16) g90<1>UD        g88<8,8,1>UD    0x00000020UD    { align1 1H I@2 };
add(16)         g42<1>D         g38<1,1,0>D     g90<1,1,0>D     { align1 1H I@1 compacted };
mov(16)         a0<1>UW         0x0500UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g90<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0500UW        { align1 1H A@1 };
mov(16)         g44<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
else(16)        JIP:  LABEL4          UIP:  LABEL4              { align1 1H };

LABEL5:
mov(16)         g42<1>UD        0x00000000UD                    { align1 1H I@3 };
mov(16)         g44<1>UD        0x00000000UD                    { align1 1H I@3 };

LABEL4:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
shl(16)         g91<1>D         g42<8,8,1>D     0x00000002UD    { align1 1H I@3 };
add(16)         g93<1>D         g2<0,1,0>D      2094D           { align1 1H };
add(16)         g125<1>D        g2.2<0,1,0>D    52D             { align1 1H compacted };
and(16)         g35<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 1H I@7 compacted };
shl(16)         g22<1>D         g44<8,8,1>D     0x00000009UD    { align1 1H I@6 };
add(16)         g29<1>D         g2.2<0,1,0>D    16D             { align1 1H compacted };
cmp.l.f0.0(16)  g95<1>UD        g93<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@5 compacted };
add(16)         g97<1>D         g93<1,1,0>D     g91<1,1,0>D     { align1 1H I@7 compacted };
mov(8)          g72<2>UD        g125<4,4,1>UD                   { align1 1Q I@6 };
mov(8)          g74<2>UD        g126<4,4,1>UD                   { align1 2Q I@7 };
shl(16)         g37<1>D         g35<8,8,1>D     0x00000004UD    { align1 1H I@7 };
mov(8)          g77<2>UD        g29<4,4,1>UD                    { align1 1Q I@6 };
mov(8)          g79<2>UD        g30<4,4,1>UD                    { align1 2Q I@7 };
cmp.l.f0.0(16)  g99<1>UD        g97<1,1,0>UD    g93<1,1,0>UD    { align1 1H I@6 compacted };
mov(8)          g67<2>UD        g97<4,4,1>UD                    { align1 1Q };
mov(8)          g69<2>UD        g98<4,4,1>UD                    { align1 2Q };
add3(16)        g101<1>D        -g95<8,8,1>D    g2.1<0,1,0>D    -g99<1,1,1>D { align1 1H I@3 };
mov(8)          g69.1<2>UD      g102<4,4,1>UD                   { align1 2Q I@1 };
mov(8)          g67.1<2>UD      g101<4,4,1>UD                   { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g102UD          g67UD           nullUD          0x08200b80                0x00000000
                            ugm MsgDesc: ( load, a64, d16u32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov(16)         g106<1>UD       g102<16,8,2>UW                  { align1 1H $3.dst };
add(16)         g103<1>D        g2<0,1,0>D      11308D          { align1 1H };
mul(16)         g108<1>D        g106<1,1,0>D    1484W           { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g105<1>UD       g103<1,1,0>UD   g2<0,1,0>UD     { align1 1H I@2 compacted };
add(16)         g110<1>D        g103<1,1,0>D    g108<1,1,0>D    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g112<1>UD       g110<1,1,0>UD   g103<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g68<2>UD        g110<4,4,1>UD                   { align1 1Q $3.src };
mov(8)          g70<2>UD        g111<4,4,1>UD                   { align1 2Q $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g3<1>UD         g125<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H compacted };
add3(16)        g114<1>D        -g105<8,8,1>D   g2.1<0,1,0>D    -g112<1,1,1>D { align1 1H I@4 };
add(16)         g5<1>D          -g3<1,1,0>D     g2.3<0,1,0>D    { align1 1H I@2 compacted };
mov(16)         g3<1>D          g31<8,8,1>UW                    { align1 1H };
mov(8)          g70.1<2>UD      g115<4,4,1>UD                   { align1 2Q I@3 };
mov(8)          g68.1<2>UD      g114<4,4,1>UD                   { align1 1Q I@4 };
mov(8)          g72.1<2>UD      g5<4,4,1>UD                     { align1 1Q I@4 };
mov(8)          g74.1<2>UD      g6<4,4,1>UD                     { align1 2Q I@5 };
add(16)         g39<1>D         g3<1,1,0>D      g37<1,1,0>D     { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(16)        g116UD          g68UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g6UD            g72UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
and(16)         g54<1>UD        g39<1,1,0>UD    0x000001ffUD    { align1 1H I@1 compacted };
mov(8)          g73.1<2>D       g2.3<0,1,0>D                    { align1 1Q $5.src };
mov(8)          g75.1<2>D       g2.3<0,1,0>D                    { align1 2Q $5.src };
mov(8)          g73<2>D         g2.2<0,1,0>D                    { align1 1Q I@2 };
mov(8)          g75<2>D         g2.2<0,1,0>D                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g13UD           g73UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
and(16)         g124<1>UD       g122<1,1,0>UD   0x00000001UD    { align1 1H $4.dst compacted };
add(16)         g24<1>D         g116<1,1,0>D    g22<1,1,0>D     { align1 1H $4.dst compacted };
cmp.nz.f0.0(16) null<1>D        g124<8,8,1>D    0D              { align1 1H I@2 };
add(16)         g40<1>D         g24<1,1,0>D     g54<1,1,0>D     { align1 1H I@2 compacted };
add(16)         g26<1>D         g24<1,1,0>D     512D            { align1 1H compacted };
(+f0.0) sel(16) g21<1>UD        g6<1,1,0>UD     0x00000000UD    { align1 1H $5.dst compacted };
cmp.l.f0.0(16)  g31<1>UD        g29<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g42<1>UD        g40<1,1,0>UD    g24<1,1,0>UD    { align1 1H I@4 compacted };
sel.l(16)       g28<1>UD        g26<1,1,0>UD    g118<1,1,0>UD   { align1 1H @4 $4.dst compacted };
add(16)         g33<1>D         -g31<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g44<1>UD        g40<1,1,0>UD    g28<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g77.1<2>UD      g33<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g79.1<2>UD      g34<4,4,1>UD                    { align1 2Q I@3 };
and.nz.f0.0(16) g56<1>UD        ~g42<8,8,1>D    g44<8,8,1>UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g34UD           g77UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
add(16)         g58<1>D         g21<1,1,0>D     g40<1,1,0>D     { align1 1H I@7 compacted };
cmp.l.f0.0(16)  g60<1>UD        g58<1,1,0>UD    g21<1,1,0>UD    { align1 1H @1 $1.dst compacted };
shl(16)         g64<1>D         g58<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
shr(16)         g67<1>UD        g58<1,1,0>UD    0x0000001eUD    { align1 1H $3.src compacted };
add(16)         g62<1>D         -g60<1,1,0>D    -g42<1,1,0>D    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g71<1>D         g13<1,1,0>D     g64<1,1,0>D     { align1 1H @3 $6.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
shl(16)         g65<1>D         g62<8,8,1>D     0x00000002UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g73<1>UD        g71<1,1,0>UD    g13<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g78<2>UD        g71<4,4,1>UD                    { align1 1Q $7.src };
mov(8)          g80<2>UD        g72<4,4,1>UD                    { align1 2Q $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
or(16)          g69<1>UD        g65<1,1,0>UD    g67<1,1,0>UD    { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g75<1>D         g15<8,8,1>D     g69<8,8,1>D     -g73<1,1,1>D { align1 1H $6.dst };
mov(8)          g80.1<2>UD      g76<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g78.1<2>UD      g75<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g45UD           g78UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
mov(16)         g45<1>UD        0x00000000UD                    { align1 1H $7.dst };

LABEL7:
endif(16)       JIP:  LABEL9                                    { align1 1H };

LABEL9:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g76<1>D         g34<1,1,0>D     32D             { align1 1H $7.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shl(16)         g81<1>D         g120<8,8,1>D    0x00000005UD    { align1 1H $4.dst };
shr(16)         g83<1>UD        g120<1,1,0>UD   0x0000001bUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(16)  g78<1>UD        g76<1,1,0>UD    g34<1,1,0>UD    { align1 1H I@3 compacted };
add(16)         g85<1>D         g76<1,1,0>D     g81<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g80<1>D         -g78<1,1,0>D    g36<1,1,0>D     { align1 1H $7.dst compacted };
cmp.l.f0.0(16)  g87<1>UD        g85<1,1,0>UD    g76<1,1,0>UD    { align1 1H I@2 compacted };
add(16)         g91<1>D         g85<1,1,0>D     16D             { align1 1H compacted };
add3(16)        g89<1>D         g80<8,8,1>D     g83<8,8,1>D     -g87<1,1,1>D { align1 1H I@2 };
cmp.l.f0.0(16)  g93<1>UD        g91<1,1,0>UD    0x00000010UD    { align1 1H I@2 compacted };
add(16)         g95<1>D         -g93<1,1,0>D    g89<1,1,0>D     { align1 1H I@1 compacted };
mov(8)          g79<2>UD        g85<4,4,1>UD                    { align1 1Q };
mov(8)          g81<2>UD        g86<4,4,1>UD                    { align1 2Q };
mov(8)          g79.1<2>UD      g89<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g81.1<2>UD      g90<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g5UD            g79UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
mov(8)          g80<2>UD        g91<4,4,1>UD                    { align1 1Q $8.src };
mov(8)          g82<2>UD        g92<4,4,1>UD                    { align1 2Q $8.src };
mov(8)          g80.1<2>UD      g95<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g82.1<2>UD      g96<4,4,1>UD                    { align1 2Q I@2 };
add(16)         g97<1>F         g11<1,1,0>F     -g5<1,1,0>F     { align1 1H $8.dst compacted };
sel.ge(16)      g103<1>F        g97<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@1 };
cmp.l.f0.0(16)  g120<1>F        g103<8,8,1>F    0x77f684dfF  /* 1e+34F */ { align1 1H F@1 };
math inv(16)    g106<1>F        g103<8,8,1>F    null<8,8,1>F    { align1 1H $9 };
cmp.g.f0.0(16)  g122<1>F        g97<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g96UD           g80UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
mul(16)         g108<1>F        g106<8,8,1>F    0x417d70a4F  /* 15.84F */ { align1 1H $9.dst };
and.nz.f0.0(16) null<1>UD       g120<8,8,1>UD   g122<8,8,1>UD   { align1 1H F@2 };
(+f0.0) sel(16) g123<1>UD       g108<1,1,0>UD   0x00000000UD    { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
add(16)         g100<1>F        g96<1,1,0>F     -g7<1,1,0>F     { align1 1H $6.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g102<1>F        g98<1,1,0>F     -g9<1,1,0>F     { align1 1H $6.dst compacted };
cmp.g.f0.0(16)  g125<1>F        g100<8,8,1>F    0x704ec3dF  /* 1e-34F */ { align1 1H F@2 };
sel.ge(16)      g104<1>F        g100<8,8,1>F    0x704ec3dF  /* 1e-34F */ { align1 1H $9.src };
math inv(16)    g112<1>F        g104<8,8,1>F    null<8,8,1>F    { align1 1H @1 $10 };
cmp.l.f0.0(16)  g21<1>F         g104<8,8,1>F    0x77f684dfF  /* 1e+34F */ { align1 1H $10.src };
sel.ge(16)      g105<1>F        g102<8,8,1>F    0x704ec3dF  /* 1e-34F */ { align1 1H F@4 };
mul(16)         g116<1>F        g112<8,8,1>F    0x417d70a4F  /* 15.84F */ { align1 1H $10.dst };
and.nz.f0.0(16) null<1>UD       g21<8,8,1>UD    g125<8,8,1>UD   { align1 1H F@3 };
(+f0.0) sel(16) g38<1>UD        g116<1,1,0>UD   0x00000000UD    { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
math inv(16)    g117<1>F        g105<8,8,1>F    null<8,8,1>F    { align1 1H $11 };
cmp.g.f0.0(16)  g40<1>F         g102<8,8,1>F    0x704ec3dF  /* 1e-34F */ { align1 1H };
cmp.l.f0.0(16)  g42<1>F         g105<8,8,1>F    0x77f684dfF  /* 1e+34F */ { align1 1H $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
mul(16)         g119<1>F        g117<8,8,1>F    0x417d70a4F  /* 15.84F */ { align1 1H I@4 };
and.nz.f0.0(16) null<1>UD       g42<8,8,1>UD    g40<8,8,1>UD    { align1 1H F@2 };
(+f0.0) sel(16) g43<1>UD        g119<1,1,0>UD   0x00000000UD    { align1 1H F@1 compacted };
mov.nz.f0.0(16) null<1>D        g56<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL10             { align1 1H };
shl(16)         g47<1>D         g45<8,8,1>D     0x00000005UD    { align1 1H $7.dst };
add(16)         g50<1>D         g17<1,1,0>D     g47<1,1,0>D     { align1 1H @1 $6.dst compacted };
shr(16)         g48<1>UD        g45<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
cmp.l.f0.0(16)  g52<1>UD        g50<1,1,0>UD    g17<1,1,0>UD    { align1 1H I@2 compacted };
add(16)         g60<1>D         g50<1,1,0>D     16D             { align1 1H $1.dst compacted };
mov(8)          g81<2>UD        g50<4,4,1>UD                    { align1 1Q $6.src };
mov(8)          g83<2>UD        g51<4,4,1>UD                    { align1 2Q $6.src };
add3(16)        g58<1>D         g19<8,8,1>D     g48<8,8,1>D     -g52<1,1,1>D { align1 1H @4 $6.dst };
cmp.l.f0.0(16)  g62<1>UD        g60<1,1,0>UD    g50<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g85<2>UD        g60<4,4,1>UD                    { align1 1Q };
mov(8)          g87<2>UD        g61<4,4,1>UD                    { align1 2Q };
mov(8)          g83.1<2>UD      g59<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g81.1<2>UD      g58<4,4,1>UD                    { align1 1Q I@5 };
add(16)         g64<1>D         -g62<1,1,0>D    g58<1,1,0>D     { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g13UD           g81UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
mov(8)          g85.1<2>UD      g64<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g87.1<2>UD      g65<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g21UD           g85UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $12 };

LABEL10:
endif(16)       JIP:  LABEL11                                   { align1 1H };

LABEL11:
shl(16)         g48<1>D         g54<8,8,1>D     0x00000002UD    { align1 1H };
mov(16)         g46<1>UD        g48<8,8,1>UD                    { align1 1H @1 $7.dst };

LABEL13:
cmp.ge.f0.0(16) null<1>UD       g46<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL12       UIP:  LABEL12             { align1 1H };
shl(16)         g86<1>D         g46<8,8,1>D     0x00000002UD    { align1 1H $12.src };
mov(16)         g29<1>UD        0x7f800000UD                    { align1 1H $12.src };
mov(16)         g31<1>UD        0x7f800000UD                    { align1 1H $12.src };
mov(16)         g33<1>UD        0x7f800000UD                    { align1 1H $12.src };
mov(16)         g35<1>UD        0x7f800000UD                    { align1 1H $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g86UD           g29UD           0x0400f506                0x00000200
                            slm MsgDesc: ( store_cmask, a32, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 8 flat )  base_offset 0  { align1 1H $12 };
add(16)         g46<1>D         g46<8,8,1>D     2048D           { align1 1H };

LABEL12:
while(16)       JIP:  LABEL13                                   { align1 1H };
nop                                                             ;

LABEL15:
cmp.ge.f0.0(16) null<1>UD       g48<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL14       UIP:  LABEL14             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
shl(16)         g65<1>D         g48<8,8,1>D     0x00000002UD    { align1 1H I@5 };
mov(16)         g30<1>UD        0x00000000UD                    { align1 1H $12.src };
mov(16)         g32<1>UD        0x00000000UD                    { align1 1H $12.src };
mov(16)         g34<1>UD        0x00000000UD                    { align1 1H $12.src };
mov(16)         g36<1>UD        0x00000000UD                    { align1 1H $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g87<1>D         g65<1,1,0>D     1152D           { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g87UD           g30UD           0x0400f506                0x00000200
                            slm MsgDesc: ( store_cmask, a32, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 8 flat )  base_offset 0  { align1 1H $12 };
add(16)         g48<1>D         g48<8,8,1>D     2048D           { align1 1H };

LABEL14:
while(16)       JIP:  LABEL15                                   { align1 1H };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(1)         g66UD           g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
mov(8)          g67<1>UD        0x00000000UD                    { align1 WE_all 1Q $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(2)          g67.10<1>UB     g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g67UD           nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $14 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g68<1>F         g13<1,1,0>F     g21<1,1,0>F     { align1 1H $6.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g70<1>F         g15<1,1,0>F     g23<1,1,0>F     { align1 1H $6.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g72<1>F         g17<1,1,0>F     g25<1,1,0>F     { align1 1H $6.dst compacted };
add(16)         g76<1>F         g72<1,1,0>F     -g9<1,1,0>F     { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g73<1>F         g68<1,1,0>F     -g5<1,1,0>F     { align1 1H F@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mul(16)         g81<1>F         g76<1,1,0>F     g43<1,1,0>F     { align1 1H A@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g75<1>F         g70<1,1,0>F     -g7<1,1,0>F     { align1 1H F@5 compacted };
mul(16)         g77<1>F         g73<1,1,0>F     g123<1,1,0>F    { align1 1H F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         g87<1>UD        g81<8,8,1>F                     { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mul(16)         g79<1>F         g75<1,1,0>F     g38<1,1,0>F     { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g83<1>UD        g77<8,8,1>F                     { align1 1H F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         g85<1>UD        g79<8,8,1>F                     { align1 1H F@1 };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g56<8,8,1>UD    0x00000000UD    { align1 1H };
mov(16)         g49<1>UD        f0<0,1,0>UW                     { align1 1H };
mov(1)          g5<1>D          1D                              { align1 WE_all 1N F@5 };
and(16)         g89<1>UD        g3<1,1,0>UD     0x00000003UD    { align1 1H compacted };
shr(16)         g91<1>UD        g3<1,1,0>UD     0x00000002UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shl(16)         g93<1>D         g5<0,1,0>D      g3<8,8,1>UD     { align1 1H };

LABEL18:
cmp.z.f0.0(16)  null<1>D        g49<8,8,1>D     0D              { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL16       UIP:  LABEL16             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
fbl(16)         g95<1>UD        g49<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         a0<1>UW         0x0a60UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g95<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a60UW        { align1 1H A@1 };
mov(16)         g97<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.z.f0.0(16)  g99<1>D         g97<1,1,0>D     g83<1,1,0>D     { align1 1H I@1 compacted };
and.nz.f0.0(16) null<1>UD       g99<8,8,1>UD    g56<8,8,1>UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
(+f0.0) sel(16) g101<1>UD       g21<8,8,1>UD    0xff800000UD    { align1 1H F@1 };
(+f0.0) sel(16) g103<1>UD       g23<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g105<1>UD       g13<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g107<1>UD       g15<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         g120<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g120<1>F        g101<1,1,0>F                    { align1 1H compacted };
mov(16)         g122<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H A@3 compacted };
mov(16)         g122<1>F        g103<1,1,0>F                    { align1 1H compacted };
mov(16)         g112<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g112<1>F        g105<1,1,0>F                    { align1 1H compacted };
mov(16)         g116<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g116<1>F        g107<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g104<1>UD       g25<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g108<1>UD       g17<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(8)          g71<2>UD        g120.1<8,4,2>UD                 { align1 WE_all 1Q F@4 };
mov(8)          g101<2>UD       g122.1<8,4,2>UD                 { align1 WE_all 1Q F@3 };
mov(8)          g8<2>UD         g112.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(8)          g37<2>UD        g116.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
mov(16)         g124<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H I@6 compacted };
mov(16)         g124<1>F        g104<1,1,0>F                    { align1 1H compacted };
mov(16)         g118<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H A@5 compacted };
mov(16)         g118<1>F        g108<1,1,0>F                    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g89<8,8,1>D     1D              { align1 1H };
sel.ge(8)       g69<2>F         g120<8,4,2>F    g71<8,4,2>F     { align1 WE_all 1Q A@5 };
sel.ge(8)       g95<2>F         g122<8,4,2>F    g101<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.l(8)        g6<2>F          g112<8,4,2>F    g8<8,4,2>F      { align1 WE_all 1Q A@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.l(8)        g35<2>F         g116<8,4,2>F    g37<8,4,2>F     { align1 WE_all 1Q I@2 };
mov(8)          g58<2>UD        g118.1<8,4,2>UD                 { align1 WE_all 1Q F@5 };
mov(8)          g120.1<2>UD     g69<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g122.1<2>UD     g95<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g112.1<2>UD     g6<8,4,2>UD                     { align1 WE_all 1Q A@2 };
mov(8)          g116.1<2>UD     g35<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sel.l(8)        g51<2>F         g118<8,4,2>F    g58<8,4,2>F     { align1 WE_all 1Q I@5 };
mov(4)          g76<4>UD        g120.2<8,2,4>UD                 { align1 WE_all 1N I@4 };
mov(4)          g74<4>UD        g120.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g106<4>UD       g122.2<8,2,4>UD                 { align1 WE_all 1N A@5 };
mov(4)          g104<4>UD       g122.1<8,2,4>UD                 { align1 WE_all 1N F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g29<4>UD        g112.2<8,2,4>UD                 { align1 WE_all 1N I@6 };
mov(4)          g11<4>UD        g112.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g42<4>UD        g116.2<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g40<4>UD        g116.1<8,2,4>UD                 { align1 WE_all 1N };
mov(8)          g5<2>UD         g124.1<8,4,2>UD                 { align1 WE_all 1Q F@7 };
mov(8)          g118.1<2>UD     g51<8,4,2>UD                    { align1 WE_all 1Q F@1 };
sel.ge(4)       g72<4>F         g74<8,2,4>F     g76<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g102<4>F        g104<8,2,4>F    g106<8,2,4>F    { align1 WE_all 1N I@7 };
sel.l(4)        g9<4>F          g11<8,2,4>F     g29<8,2,4>F     { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.l(4)        g38<4>F         g40<8,2,4>F     g42<8,2,4>F     { align1 WE_all 1N I@3 };
sel.ge(8)       g3<2>F          g124<8,4,2>F    g5<8,4,2>F      { align1 WE_all 1Q I@2 };
mov(4)          g63<4>UD        g118.2<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g61<4>UD        g118.1<8,2,4>UD                 { align1 WE_all 1N $1.dst };
mov(4)          g120.2<4>UD     g72<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g122.2<4>UD     g102<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g112.2<4>UD     g9<8,2,4>UD                     { align1 WE_all 1N F@3 };
mov(4)          g116.2<4>UD     g38<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(8)          g124.1<2>UD     g3<8,4,2>UD                     { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sel.l(4)        g59<4>F         g61<8,2,4>F     g63<8,2,4>F     { align1 WE_all 1N I@6 };
mov(4)          g81<4>UD        g120.3<8,2,4>UD                 { align1 WE_all 1N I@5 };
mov(4)          g79<4>UD        g120.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g126<4>UD       g122.1<8,2,4>UD                 { align1 WE_all 1N I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g34<4>UD        g112.3<8,2,4>UD                 { align1 WE_all 1N I@6 };
mov(4)          g32<4>UD        g112.1<8,2,4>UD                 { align1 WE_all 1N $12.src };
mov(4)          g47<4>UD        g116.3<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g45<4>UD        g116.1<8,2,4>UD                 { align1 WE_all 1N $7.dst };
mov(4)          g10<4>UD        g124.2<8,2,4>UD                 { align1 WE_all 1N A@4 };
mov(4)          g8<4>UD         g124.1<8,2,4>UD                 { align1 WE_all 1N F@7 };
mov(4)          g118.2<4>UD     g59<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g2<4>UD         g122.3<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g77<4>F         g79<8,2,4>F     g81<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.l(4)        g30<4>F         g32<8,2,4>F     g34<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g43<4>F         g45<8,2,4>F     g47<8,2,4>F     { align1 WE_all 1N I@5 };
sel.ge(4)       g6<4>F          g8<8,2,4>F      g10<8,2,4>F     { align1 WE_all 1N I@3 };
mov(4)          g68<4>UD        g118.3<8,2,4>UD                 { align1 WE_all 1N I@2 };
mov(4)          g66<4>UD        g118.1<8,2,4>UD                 { align1 WE_all 1N $14.src };
sel.ge(4)       g107<4>F        g126<8,2,4>F    g2<8,2,4>F      { align1 WE_all 1N I@3 };
mov(4)          g120.3<4>UD     g77<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g112.3<4>UD     g30<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g116.3<4>UD     g43<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g124.2<4>UD     g6<8,2,4>UD                     { align1 WE_all 1N F@2 };
sel.l(4)        g64<4>F         g66<8,2,4>F     g68<8,2,4>F     { align1 WE_all 1N I@5 };
mov(4)          g122.3<4>UD     g107<8,2,4>UD                   { align1 WE_all 1N F@2 };
sel.ge(4)       g120.4<1>F      g120.3<0,1,0>F  g120.4<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g121.4<1>F      g121.3<0,1,0>F  g121.4<4,4,1>F  { align1 WE_all 1N I@5 };
sel.l(4)        g112.4<1>F      g112.3<0,1,0>F  g112.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g113.4<1>F      g113.3<0,1,0>F  g113.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g116.4<1>F      g116.3<0,1,0>F  g116.4<4,4,1>F  { align1 WE_all 1N I@3 };
sel.l(4)        g117.4<1>F      g117.3<0,1,0>F  g117.4<4,4,1>F  { align1 WE_all 1N I@3 };
mov(4)          g31<4>UD        g124.3<8,2,4>UD                 { align1 WE_all 1N I@2 };
mov(4)          g29<4>UD        g124.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g118.3<4>UD     g64<8,2,4>UD                    { align1 WE_all 1N F@7 };
sel.ge(4)       g122.4<1>F      g122.3<0,1,0>F  g122.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.ge(4)       g123.4<1>F      g123.3<0,1,0>F  g123.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.ge(8)       g121<1>F        g120.7<0,1,0>F  g121<8,8,1>F    { align1 WE_all 1Q F@7 };
sel.l(8)        g113<1>F        g112.7<0,1,0>F  g113<8,8,1>F    { align1 WE_all 1Q F@6 };
sel.l(8)        g117<1>F        g116.7<0,1,0>F  g117<8,8,1>F    { align1 WE_all 1Q F@5 };
sel.ge(4)       g11<4>F         g29<8,2,4>F     g31<8,2,4>F     { align1 WE_all 1N I@2 };
sel.l(4)        g118.4<1>F      g118.3<0,1,0>F  g118.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g119.4<1>F      g119.3<0,1,0>F  g119.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g123<1>F        g122.7<0,1,0>F  g123<8,8,1>F    { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g126<1>UD       g117.7<0,1,0>UD g113.7<0,1,0>UD { align1 1H };
mov(4)          g124.3<4>UD     g11<8,2,4>UD                    { align1 WE_all 1N F@4 };
sel.l(8)        g119<1>F        g118.7<0,1,0>F  g119<8,8,1>F    { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g2<1>UD         g123.7<0,1,0>UD g121.7<0,1,0>UD { align1 1H };
sel.ge(4)       g124.4<1>F      g124.3<0,1,0>F  g124.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.ge(4)       g125.4<1>F      g125.3<0,1,0>F  g125.4<4,4,1>F  { align1 WE_all 1N I@2 };
cmp.z.f0.0(16)  null<1>D        g89<8,8,1>D     2D              { align1 1H };
sel.ge(8)       g125<1>F        g124.7<0,1,0>F  g125<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g4<1>UD         g119.7<0,1,0>UD g126<1,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g6<1>UD         g125.7<0,1,0>UD g2<1,1,0>UD     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g91<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g101<1>F        g4<1,1,0>F      -g6<1,1,0>F     { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g93<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL17             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mul(16)         g7<1>D          g97<1,1,0>D     6W              { align1 1H compacted };
mul(16)         g9<1>D          g91<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g11<1>D         g7<8,8,1>D      g89<8,8,1>D     g9<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g95<1>D         g11<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g95UD           g101UD          0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $15 };

LABEL17:
endif(16)       JIP:  LABEL16                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
or(16)          g29<1>D         ~g99<1,1,0>D    ~g56<1,1,0>D    { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g29<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
mov(16)         g30<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g49<1>UD        g49<1,1,0>UD    g30<1,1,0>UD    { align1 1H I@1 compacted };

LABEL16:
while(16)       JIP:  LABEL18                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
add(16)         g31<1>D         g85<1,1,0>D     16D             { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g56<8,8,1>UD    0x00000000UD    { align1 1H };
mov(16)         g50<1>UD        f0<0,1,0>UW                     { align1 1H I@5 };

LABEL21:
cmp.z.f0.0(16)  null<1>D        g50<8,8,1>D     0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL19       UIP:  LABEL19             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
fbl(16)         g33<1>UD        g50<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         a0<1>UW         0x03e0UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g33<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x03e0UW        { align1 1H A@1 };
mov(16)         g35<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.z.f0.0(16)  g37<1>D         g35<1,1,0>D     g31<1,1,0>D     { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g37<8,8,1>UD    g56<8,8,1>UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g39<1>UD        g21<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g41<1>UD        g23<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g43<1>UD        g13<8,8,1>UD    0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
(+f0.0) sel(16) g45<1>UD        g15<8,8,1>UD    0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mov(16)         g60<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g60<1>F         g39<1,1,0>F                     { align1 1H compacted };
mov(16)         g62<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@3 compacted };
mov(16)         g62<1>F         g41<1,1,0>F                     { align1 1H compacted };
mov(16)         g48<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g48<1>F         g43<1,1,0>F                     { align1 1H compacted };
mov(16)         g52<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g52<1>F         g45<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g42<1>UD        g25<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g46<1>UD        g17<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(8)          g112<2>UD       g60.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g2<2>UD         g62.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g39<2>UD        g48.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g71<2>UD        g52.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(16)         g64<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g64<1>F         g42<1,1,0>F                     { align1 1H compacted };
mov(16)         g58<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@5 compacted };
mov(16)         g58<1>F         g46<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g89<8,8,1>D     1D              { align1 1H };
sel.ge(8)       g108<2>F        g60<8,4,2>F     g112<8,4,2>F    { align1 WE_all 1Q I@5 };
sel.ge(8)       g126<2>F        g62<8,4,2>F     g2<8,4,2>F      { align1 WE_all 1Q I@4 };
sel.l(8)        g33<2>F         g48<8,4,2>F     g39<8,4,2>F     { align1 WE_all 1Q I@3 };
sel.l(8)        g69<2>F         g52<8,4,2>F     g71<8,4,2>F     { align1 WE_all 1Q A@2 };
mov(8)          g97<2>UD        g58.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g60.1<2>UD      g108<8,4,2>UD                   { align1 WE_all 1Q A@4 };
mov(8)          g62.1<2>UD      g126<8,4,2>UD                   { align1 WE_all 1Q A@3 };
mov(8)          g48.1<2>UD      g33<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g52.1<2>UD      g69<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(8)          g39<2>UD        g64.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sel.l(8)        g95<2>F         g58<8,4,2>F     g97<8,4,2>F     { align1 WE_all 1Q I@6 };
mov(4)          g120<4>UD       g60.2<8,2,4>UD                  { align1 WE_all 1N I@5 };
mov(4)          g118<4>UD       g60.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g7<4>UD         g62.2<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g5<4>UD         g62.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g44<4>UD        g48.2<8,2,4>UD                  { align1 WE_all 1N A@7 };
mov(4)          g42<4>UD        g48.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g76<4>UD        g52.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g74<4>UD        g52.1<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g33<2>F         g64<8,4,2>F     g39<8,4,2>F     { align1 WE_all 1Q I@7 };
mov(8)          g58.1<2>UD      g95<8,4,2>UD                    { align1 WE_all 1Q F@2 };
sel.ge(4)       g116<4>F        g118<8,2,4>F    g120<8,2,4>F    { align1 WE_all 1N I@7 };
sel.ge(4)       g3<4>F          g5<8,2,4>F      g7<8,2,4>F      { align1 WE_all 1N I@6 };
sel.l(4)        g72<4>F         g74<8,2,4>F     g76<8,2,4>F     { align1 WE_all 1N I@2 };
mov(8)          g64.1<2>UD      g33<8,4,2>UD                    { align1 WE_all 1Q A@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(4)          g102<4>UD       g58.2<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g100<4>UD       g58.1<8,2,4>UD                  { align1 WE_all 1N $15.src };
mov(4)          g60.2<4>UD      g116<8,2,4>UD                   { align1 WE_all 1N F@3 };
sel.l(4)        g40<4>F         g42<8,2,4>F     g44<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g62.2<4>UD      g3<8,2,4>UD                     { align1 WE_all 1N F@3 };
mov(4)          g52.2<4>UD      g72<8,2,4>UD                    { align1 WE_all 1N F@2 };
sel.l(4)        g98<4>F         g100<8,2,4>F    g102<8,2,4>F    { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(4)          g125<4>UD       g60.3<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g123<4>UD       g60.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g48.2<4>UD      g40<8,2,4>UD                    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g29<4>UD        g62.3<8,2,4>UD                  { align1 WE_all 1N I@5 };
mov(4)          g10<4>UD        g62.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g42<4>UD        g64.1<8,2,4>UD                  { align1 WE_all 1N F@2 };
mov(4)          g44<4>UD        g64.2<8,2,4>UD                  { align1 WE_all 1N F@2 };
mov(4)          g81<4>UD        g52.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g79<4>UD        g52.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g58.2<4>UD      g98<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g121<4>F        g123<8,2,4>F    g125<8,2,4>F    { align1 WE_all 1N I@7 };
mov(4)          g68<4>UD        g48.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g66<4>UD        g48.1<8,2,4>UD                  { align1 WE_all 1N $14.src };
sel.ge(4)       g8<4>F          g10<8,2,4>F     g29<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g40<4>F         g42<8,2,4>F     g44<8,2,4>F     { align1 WE_all 1N I@6 };
sel.l(4)        g77<4>F         g79<8,2,4>F     g81<8,2,4>F     { align1 WE_all 1N I@4 };
mov(4)          g107<4>UD       g58.3<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g105<4>UD       g58.1<8,2,4>UD                  { align1 WE_all 1N $15.src };
mov(4)          g60.3<4>UD      g121<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g62.3<4>UD      g8<8,2,4>UD                     { align1 WE_all 1N F@3 };
mov(4)          g64.2<4>UD      g40<8,2,4>UD                    { align1 WE_all 1N F@2 };
sel.l(4)        g45<4>F         g66<8,2,4>F     g68<8,2,4>F     { align1 WE_all 1N I@6 };
mov(4)          g52.3<4>UD      g77<8,2,4>UD                    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sel.l(4)        g103<4>F        g105<8,2,4>F    g107<8,2,4>F    { align1 WE_all 1N I@5 };
sel.ge(4)       g60.4<1>F       g60.3<0,1,0>F   g60.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g61.4<1>F       g61.3<0,1,0>F   g61.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g62.4<1>F       g62.3<0,1,0>F   g62.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g63.4<1>F       g63.3<0,1,0>F   g63.4<4,4,1>F   { align1 WE_all 1N I@3 };
mov(4)          g48.3<4>UD      g45<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g66<4>UD        g64.1<8,2,4>UD                  { align1 WE_all 1N A@3 };
mov(4)          g68<4>UD        g64.3<8,2,4>UD                  { align1 WE_all 1N F@6 };
sel.l(4)        g52.4<1>F       g52.3<0,1,0>F   g52.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g53.4<1>F       g53.3<0,1,0>F   g53.4<4,4,1>F   { align1 WE_all 1N I@4 };
mov(4)          g58.3<4>UD      g103<8,2,4>UD                   { align1 WE_all 1N F@7 };
sel.ge(8)       g61<1>F         g60.7<0,1,0>F   g61<8,8,1>F     { align1 WE_all 1Q F@5 };
sel.ge(8)       g63<1>F         g62.7<0,1,0>F   g63<8,8,1>F     { align1 WE_all 1Q F@4 };
sel.l(4)        g48.4<1>F       g48.3<0,1,0>F   g48.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g49.4<1>F       g49.3<0,1,0>F   g49.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g45<4>F         g66<8,2,4>F     g68<8,2,4>F     { align1 WE_all 1N I@2 };
sel.l(8)        g53<1>F         g52.7<0,1,0>F   g53<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.l(4)        g58.4<1>F       g58.3<0,1,0>F   g58.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g59.4<1>F       g59.3<0,1,0>F   g59.4<4,4,1>F   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g68<1>UD        g63.7<0,1,0>UD  g61.7<0,1,0>UD  { align1 1H };
sel.l(8)        g49<1>F         g48.7<0,1,0>F   g49<8,8,1>F     { align1 WE_all 1Q F@5 };
mov(4)          g64.3<4>UD      g45<8,2,4>UD                    { align1 WE_all 1N F@5 };
sel.l(8)        g59<1>F         g58.7<0,1,0>F   g59<8,8,1>F     { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g66<1>UD        g53.7<0,1,0>UD  g49.7<0,1,0>UD  { align1 1H };
sel.ge(4)       g64.4<1>F       g64.3<0,1,0>F   g64.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g65.4<1>F       g65.3<0,1,0>F   g65.4<4,4,1>F   { align1 WE_all 1N I@2 };
cmp.z.f0.0(16)  null<1>D        g89<8,8,1>D     2D              { align1 1H };
sel.ge(8)       g65<1>F         g64.7<0,1,0>F   g65<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
(+f0.0) sel(16) g70<1>UD        g59.7<0,1,0>UD  g66<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g72<1>UD        g65.7<0,1,0>UD  g68<1,1,0>UD    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g91<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g104<1>F        g70<1,1,0>F     -g72<1,1,0>F    { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g93<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL20         UIP:  LABEL20             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mul(16)         g73<1>D         g35<1,1,0>D     6W              { align1 1H compacted };
mul(16)         g75<1>D         g91<1,1,0>D     3W              { align1 1H compacted };
add3(16)        g77<1>D         g73<8,8,1>D     g89<8,8,1>D     g75<1,1,1>D { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g102<1>D        g77<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g102UD          g104UD          0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $15 };

LABEL20:
endif(16)       JIP:  LABEL19                                   { align1 1H };
or(16)          g78<1>D         ~g37<1,1,0>D    ~g56<1,1,0>D    { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g78<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g79<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g50<1>UD        g50<1,1,0>UD    g79<1,1,0>UD    { align1 1H I@1 compacted };

LABEL19:
while(16)       JIP:  LABEL21                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g80<1>D         g87<1,1,0>D     32D             { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g56<8,8,1>UD    0x00000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
mov(16)         g51<1>UD        f0<0,1,0>UW                     { align1 1H };

LABEL24:
cmp.z.f0.0(16)  null<1>D        g51<8,8,1>D     0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL22       UIP:  LABEL22             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
fbl(16)         g95<1>UD        g51<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         a0<1>UW         0x0a00UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g95<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a00UW        { align1 1H A@1 };
mov(16)         g97<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  g99<1>D         g97<1,1,0>D     g80<1,1,0>D     { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g99<8,8,1>UD    g56<8,8,1>UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g101<1>UD       g21<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g103<1>UD       g23<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g105<1>UD       g13<8,8,1>UD    0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g107<1>UD       g15<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         g120<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g120<1>F        g101<1,1,0>F                    { align1 1H compacted };
mov(16)         g122<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H A@3 compacted };
mov(16)         g122<1>F        g103<1,1,0>F                    { align1 1H compacted };
mov(16)         g112<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g112<1>F        g105<1,1,0>F                    { align1 1H compacted };
mov(16)         g116<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g116<1>F        g107<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g104<1>UD       g25<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g108<1>UD       g17<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(8)          g39<2>UD        g120.1<8,4,2>UD                 { align1 WE_all 1Q F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mov(8)          g60<2>UD        g122.1<8,4,2>UD                 { align1 WE_all 1Q F@3 };
mov(8)          g71<2>UD        g112.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
mov(16)         g124<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H I@5 compacted };
mov(16)         g124<1>F        g104<1,1,0>F                    { align1 1H compacted };
mov(8)          g106<2>UD       g116.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
mov(16)         g118<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H A@5 compacted };
mov(16)         g118<1>F        g108<1,1,0>F                    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g89<8,8,1>D     1D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.ge(8)       g37<2>F         g120<8,4,2>F    g39<8,4,2>F     { align1 WE_all 1Q A@5 };
sel.ge(8)       g58<2>F         g122<8,4,2>F    g60<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(8)        g69<2>F         g112<8,4,2>F    g71<8,4,2>F     { align1 WE_all 1Q A@3 };
mov(8)          g78<2>UD        g124.1<8,4,2>UD                 { align1 WE_all 1Q F@5 };
sel.l(8)        g102<2>F        g116<8,4,2>F    g106<8,4,2>F    { align1 WE_all 1Q I@3 };
mov(8)          g10<2>UD        g118.1<8,4,2>UD                 { align1 WE_all 1Q F@5 };
mov(8)          g120.1<2>UD     g37<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g122.1<2>UD     g58<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g112.1<2>UD     g69<8,4,2>UD                    { align1 WE_all 1Q A@2 };
sel.ge(8)       g71<2>F         g124<8,4,2>F    g78<8,4,2>F     { align1 WE_all 1Q I@5 };
mov(8)          g116.1<2>UD     g102<8,4,2>UD                   { align1 WE_all 1Q A@2 };
sel.l(8)        g8<2>F          g118<8,4,2>F    g10<8,4,2>F     { align1 WE_all 1Q I@5 };
mov(4)          g44<4>UD        g120.2<8,2,4>UD                 { align1 WE_all 1N @4 $7.dst };
mov(4)          g42<4>UD        g120.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g65<4>UD        g122.2<8,2,4>UD                 { align1 WE_all 1N I@5 };
mov(4)          g63<4>UD        g122.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g76<4>UD        g112.2<8,2,4>UD                 { align1 WE_all 1N I@6 };
mov(4)          g74<4>UD        g112.1<8,2,4>UD                 { align1 WE_all 1N };
mov(8)          g124.1<2>UD     g71<8,4,2>UD                    { align1 WE_all 1Q F@2 };
mov(4)          g2<4>UD         g116.2<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g126<4>UD       g116.1<8,2,4>UD                 { align1 WE_all 1N };
mov(8)          g118.1<2>UD     g8<8,4,2>UD                     { align1 WE_all 1Q F@1 };
sel.ge(4)       g40<4>F         g42<8,2,4>F     g44<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g61<4>F         g63<8,2,4>F     g65<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g105<4>UD       g124.1<8,2,4>UD                 { align1 WE_all 1N A@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sel.l(4)        g107<4>F        g126<8,2,4>F    g2<8,2,4>F      { align1 WE_all 1N I@3 };
mov(4)          g31<4>UD        g118.2<8,2,4>UD                 { align1 WE_all 1N I@2 };
mov(4)          g29<4>UD        g118.1<8,2,4>UD                 { align1 WE_all 1N $12.src };
sel.l(4)        g72<4>F         g74<8,2,4>F     g76<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g120.2<4>UD     g40<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g122.2<4>UD     g61<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g116.2<4>UD     g107<8,2,4>UD                   { align1 WE_all 1N F@2 };
sel.l(4)        g11<4>F         g29<8,2,4>F     g31<8,2,4>F     { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g112.2<4>UD     g72<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g49<4>UD        g120.3<8,2,4>UD                 { align1 WE_all 1N I@4 };
mov(4)          g47<4>UD        g120.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g70<4>UD        g122.3<8,2,4>UD                 { align1 WE_all 1N I@5 };
mov(4)          g68<4>UD        g122.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g7<4>UD         g116.3<8,2,4>UD                 { align1 WE_all 1N I@6 };
mov(4)          g5<4>UD         g116.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g107<4>UD       g124.2<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g118.2<4>UD     g11<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g101<4>UD       g112.3<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g95<4>UD        g112.1<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g45<4>F         g47<8,2,4>F     g49<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sel.ge(4)       g66<4>F         g68<8,2,4>F     g70<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g3<4>F          g5<8,2,4>F      g7<8,2,4>F      { align1 WE_all 1N I@5 };
sel.ge(4)       g103<4>F        g105<8,2,4>F    g107<8,2,4>F    { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g36<4>UD        g118.3<8,2,4>UD                 { align1 WE_all 1N I@3 };
mov(4)          g34<4>UD        g118.1<8,2,4>UD                 { align1 WE_all 1N $12.src };
sel.l(4)        g77<4>F         g95<8,2,4>F     g101<8,2,4>F    { align1 WE_all 1N I@3 };
mov(4)          g120.3<4>UD     g45<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g122.3<4>UD     g66<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g116.3<4>UD     g3<8,2,4>UD                     { align1 WE_all 1N F@3 };
mov(4)          g124.2<4>UD     g103<8,2,4>UD                   { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.l(4)        g32<4>F         g34<8,2,4>F     g36<8,2,4>F     { align1 WE_all 1N I@5 };
mov(4)          g112.3<4>UD     g77<8,2,4>UD                    { align1 WE_all 1N F@2 };
sel.ge(4)       g120.4<1>F      g120.3<0,1,0>F  g120.4<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g121.4<1>F      g121.3<0,1,0>F  g121.4<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g122.4<1>F      g122.3<0,1,0>F  g122.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.ge(4)       g123.4<1>F      g123.3<0,1,0>F  g123.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g116.4<1>F      g116.3<0,1,0>F  g116.4<4,4,1>F  { align1 WE_all 1N I@3 };
sel.l(4)        g117.4<1>F      g117.3<0,1,0>F  g117.4<4,4,1>F  { align1 WE_all 1N I@3 };
mov(4)          g2<4>UD         g124.3<8,2,4>UD                 { align1 WE_all 1N I@2 };
mov(4)          g126<4>UD       g124.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g118.3<4>UD     g32<8,2,4>UD                    { align1 WE_all 1N F@7 };
sel.l(4)        g112.4<1>F      g112.3<0,1,0>F  g112.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g113.4<1>F      g113.3<0,1,0>F  g113.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.ge(8)       g121<1>F        g120.7<0,1,0>F  g121<8,8,1>F    { align1 WE_all 1Q F@7 };
sel.ge(8)       g123<1>F        g122.7<0,1,0>F  g123<8,8,1>F    { align1 WE_all 1Q F@6 };
sel.l(8)        g117<1>F        g116.7<0,1,0>F  g117<8,8,1>F    { align1 WE_all 1Q F@5 };
sel.ge(4)       g108<4>F        g126<8,2,4>F    g2<8,2,4>F      { align1 WE_all 1N I@2 };
sel.l(4)        g118.4<1>F      g118.3<0,1,0>F  g118.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g119.4<1>F      g119.3<0,1,0>F  g119.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g113<1>F        g112.7<0,1,0>F  g113<8,8,1>F    { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g2<1>UD         g123.7<0,1,0>UD g121.7<0,1,0>UD { align1 1H };
mov(4)          g124.3<4>UD     g108<8,2,4>UD                   { align1 WE_all 1N F@4 };
sel.l(8)        g119<1>F        g118.7<0,1,0>F  g119<8,8,1>F    { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g126<1>UD       g117.7<0,1,0>UD g113.7<0,1,0>UD { align1 1H };
sel.ge(4)       g124.4<1>F      g124.3<0,1,0>F  g124.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.ge(4)       g125.4<1>F      g125.3<0,1,0>F  g125.4<4,4,1>F  { align1 WE_all 1N I@2 };
cmp.z.f0.0(16)  null<1>D        g89<8,8,1>D     2D              { align1 1H };
sel.ge(8)       g125<1>F        g124.7<0,1,0>F  g125<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
(+f0.0) sel(16) g4<1>UD         g119.7<0,1,0>UD g126<1,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g6<1>UD         g125.7<0,1,0>UD g2<1,1,0>UD     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g91<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g107<1>F        g4<1,1,0>F      -g6<1,1,0>F     { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g93<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL23         UIP:  LABEL23             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mul(16)         g7<1>D          g97<1,1,0>D     6W              { align1 1H compacted };
mul(16)         g9<1>D          g91<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g11<1>D         g7<8,8,1>D      g89<8,8,1>D     g9<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g105<1>D        g11<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g105UD          g107UD          0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $15 };

LABEL23:
endif(16)       JIP:  LABEL22                                   { align1 1H };
or(16)          g29<1>D         ~g99<1,1,0>D    ~g56<1,1,0>D    { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g29<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g30<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g51<1>UD        g51<1,1,0>UD    g30<1,1,0>UD    { align1 1H I@1 compacted };

LABEL22:
while(16)       JIP:  LABEL24                                   { align1 1H };
mov.nz.f0.0(16) null<1>D        g56<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL25         UIP:  LABEL25             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
shl(16)         g31<1>D         g83<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g108<1>D        g31<1,1,0>D     1152D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g108UD          nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
shl(16)         g32<1>D         g85<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g112<1>D        g32<1,1,0>D     1216D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g112UD          nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
shl(16)         g33<1>D         g87<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g116<1>D        g33<1,1,0>D     1280D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g116UD          nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };

LABEL25:
endif(16)       JIP:  LABEL26                                   { align1 1H };

LABEL26:
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g34UD           g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
mov(8)          g35<1>UD        0x00000000UD                    { align1 WE_all 1Q $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(2)          g35.10<1>UB     g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g35UD           nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $3 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
mov(16)         g52<1>UD        g54<8,8,1>UD                    { align1 1H I@6 };

LABEL29:
cmp.ge.f0.0(16) null<1>UD       g52<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL27       UIP:  LABEL27             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
shl(16)         g117<1>D        g52<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g122UD          g117UD          nullUD          0x04201502                0x00000000
                            slm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
cmp.nz.f0.0(16) null<1>F        g122<1,1,0>F    0x7f800000F  /* infF */ { align1 1H $1.dst compacted };
(+f0.0) if(16)  JIP:  LABEL28         UIP:  LABEL28             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g36<1>D         g110<1,1,0>D    44D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.l.f0.0(16)  g38<1>UD        g36<1,1,0>UD    g110<1,1,0>UD   { align1 1H compacted };
add(16)         g40<1>D         g36<1,1,0>D     g117<1,1,0>D    { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.l.f0.0(16)  g42<1>UD        g40<1,1,0>UD    g36<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
mov(8)          g118<2>UD       g40<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g120<2>UD       g41<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
add3(16)        g44<1>D         -g38<8,8,1>D    g114<8,8,1>D    -g42<1,1,1>D { align1 1H };
mov(8)          g120.1<2>UD     g45<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g118.1<2>UD     g44<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g118UD          g122UD          0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };

LABEL28:
endif(16)       JIP:  LABEL27                                   { align1 1H };
add(16)         g52<1>D         g52<1,1,0>D     512D            { align1 1H compacted };

LABEL27:
while(16)       JIP:  LABEL29                                   { align1 1H };
nop                                                             ;

LABEL32:
cmp.ge.f0.0(16) null<1>UD       g54<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL30       UIP:  LABEL30             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
shl(16)         g45<1>D         g54<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g123<1>D        g45<1,1,0>D     1152D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g2UD            g123UD          nullUD          0x04201502                0x00000000
                            slm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
cmp.nz.f0.0(16) null<1>D        g2<8,8,1>D      0D              { align1 1H $1.dst };
(+f0.0) if(16)  JIP:  LABEL31         UIP:  LABEL31             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
add(16)         g47<1>D         g110<1,1,0>D    1196D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g49<1>UD        g47<1,1,0>UD    g110<1,1,0>UD   { align1 1H compacted };
add(16)         g51<1>D         g47<1,1,0>D     g45<1,1,0>D     { align1 1H I@7 compacted };
cmp.l.f0.0(16)  g56<1>UD        g51<1,1,0>UD    g47<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
mov(8)          g124<2>UD       g51<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g126<2>UD       g52<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
add3(16)        g58<1>D         -g49<8,8,1>D    g114<8,8,1>D    -g56<1,1,1>D { align1 1H };
mov(8)          g126.1<2>UD     g59<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g124.1<2>UD     g58<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g124UD          g2UD            0x0804058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };

LABEL31:
endif(16)       JIP:  LABEL30                                   { align1 1H };
add(16)         g54<1>D         g54<1,1,0>D     512D            { align1 1H compacted };

LABEL30:
while(16)       JIP:  LABEL32                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q $1.src };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_BFS_BFS_pass1_indexed_code[] = {
    0x80000065, 0x04058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x20050220, 0x00000024, 0x00000000,
    0x00040061, 0x26054220, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00040c, 0x00340000,
    0x80030061, 0x1f054410, 0x00000000, 0x76543210,
    0x641f1940, 0x00801f95, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa0370040, 0x42810203,
    0x27391970, 0x02103703, 0x00030061, 0x3e060220,
    0x00343705, 0x00000000, 0x00130061, 0x40060220,
    0x00343805, 0x00000000, 0xa03b1b40, 0x02123912,
    0x00031961, 0x3e260220, 0x00343b05, 0x00000000,
    0x00131a61, 0x40260220, 0x00343c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x3c140000, 0xfb043e24, 0x00040000,
    0xa03e3140, 0x42c10203, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x27401970, 0x02103e03,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x42058660, 0x02462605, 0x00000002,
    0xa0441940, 0x42003e02, 0x27461970, 0x3e004403,
    0x00030061, 0x4a060220, 0x00344405, 0x00000000,
    0x00130061, 0x4c060220, 0x00344505, 0x00000000,
    0x00041b52, 0x48042e68, 0x06264005, 0x46050224,
    0x00031961, 0x4a260220, 0x00344805, 0x00000000,
    0x00131a61, 0x4c260220, 0x00344905, 0x00000000,
    0xe2030961, 0x00114004, 0x80000965, 0x03058220,
    0x02000304, 0xffffffff, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80040040, 0x55058150,
    0x05581f05, 0xffffffff, 0x80001b4c, 0x4e050220,
    0x00000304, 0x00000000, 0x80001969, 0x10018220,
    0x02004e04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000800, 0x80000961, 0x50060660,
    0x00010500, 0x00000000, 0x80000061, 0x50260660,
    0x00010510, 0x00000000, 0x80031961, 0x42260660,
    0x00005024, 0x00000000, 0x80031961, 0x42060660,
    0x00005004, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004231, 0x4b140000,
    0xfb00420c, 0x00340000, 0x8004b261, 0x53054660,
    0x00000000, 0x00000000, 0x00040061, 0x53050660,
    0x00464b05, 0x00000000, 0x80041961, 0x10014110,
    0x00000000, 0x0a600a60, 0x80040069, 0x10018510,
    0x01465505, 0x00020002, 0x80040940, 0x10018110,
    0x01461001, 0x0a600a60, 0xe3510961, 0x001b0004,
    0x80001961, 0x51054660, 0x00000000, 0x00000000,
    0x80031940, 0x51260660, 0x06445106, 0x00445126,
    0x80021940, 0x51470660, 0x06425127, 0x00425147,
    0x80021940, 0x51670660, 0x06425127, 0x00425167,
    0x80021940, 0x51850660, 0x06005164, 0x00345185,
    0x80021a40, 0x52850660, 0x06005264, 0x00345285,
    0xa4521940, 0x52015182, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0280040, 0x51202002,
    0x27561970, 0x4b002803, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00041a70, 0x00018220,
    0x22465605, 0x00000000, 0x00040061, 0x24050120,
    0x20003000, 0x00000000, 0x01040022, 0x0001c060,
    0x00000030, 0x00000030, 0x00040061, 0x22054220,
    0x00000000, 0xffffffff, 0x00040028, 0x0001c660,
    0x00000088, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000078, 0xa0570040, 0x4b005102,
    0xa0260040, 0x01002603, 0xa0201a40, 0x58302052,
    0x0004a170, 0x00010220, 0x42462605, 0x00463c05,
    0x01040022, 0x0001c060, 0x00000030, 0x00000030,
    0x00041f61, 0x22054220, 0x00000000, 0x00000000,
    0x00040028, 0x0001c660, 0x00000020, 0x00000010,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040027, 0x00014060, 0x00000000, 0xfffffcf0,
    0x00041a61, 0x00010660, 0x20462205, 0x00000000,
    0x01040022, 0x0001c060, 0x000000b0, 0x00000090,
    0x00041e4c, 0x58050220, 0x00462405, 0x00000000,
    0x00040070, 0x00018660, 0x16462405, 0x00000000,
    0x11041a62, 0x5a058220, 0x02465805, 0x00000020,
    0xa02a1940, 0x5a002602, 0x80040061, 0x10014110,
    0x00000000, 0x05000500, 0x00040069, 0x10018510,
    0x01565a06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x05000500, 0xe02c0961, 0x001b0004,
    0x00040024, 0x0001c060, 0x00000030, 0x00000030,
    0x00041b61, 0x2a054220, 0x00000000, 0x00000000,
    0x00041b61, 0x2c054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00041b69, 0x5b058660, 0x02462a05, 0x00000002,
    0x00040040, 0x5d058660, 0x06000204, 0x0000082e,
    0xa07d0040, 0x03410243, 0xe0231f65, 0x0ff10043,
    0x00041e69, 0x16058660, 0x02462c05, 0x00000009,
    0xa01d0040, 0x01010243, 0x275f1d70, 0x02105d03,
    0xa0611f40, 0x5b005d02, 0x00031e61, 0x48060220,
    0x00347d05, 0x00000000, 0x00131f61, 0x4a060220,
    0x00347e05, 0x00000000, 0x00041f69, 0x25058660,
    0x02462305, 0x00000004, 0x00031e61, 0x4d060220,
    0x00341d05, 0x00000000, 0x00131f61, 0x4f060220,
    0x00341e05, 0x00000000, 0x27631e70, 0x5d006103,
    0x00030061, 0x43060220, 0x00346105, 0x00000000,
    0x00130061, 0x45060220, 0x00346205, 0x00000000,
    0x00041b52, 0x65042e68, 0x06265f05, 0x63050224,
    0x00131961, 0x45260220, 0x00346605, 0x00000000,
    0x00031a61, 0x43260220, 0x00346505, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x66140000, 0xf7004324, 0x00020000,
    0x00042361, 0x6a050120, 0x00566606, 0x00000000,
    0x00040040, 0x67058660, 0x06000204, 0x00002c2c,
    0x606c1a41, 0x5cc06a02, 0x27691a70, 0x02106703,
    0xa06e1a40, 0x6c006702, 0x27701970, 0x67006e03,
    0x00033361, 0x44060220, 0x00346e05, 0x00000000,
    0x00133361, 0x46060220, 0x00346f05, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x27030070, 0x02107d2b, 0x00041c52, 0x72042e68,
    0x06266905, 0x70050224, 0xa0051a40, 0x0212031a,
    0x00040061, 0x03050160, 0x00461f05, 0x00000000,
    0x00131b61, 0x46260220, 0x00347305, 0x00000000,
    0x00031c61, 0x44260220, 0x00347205, 0x00000000,
    0x00031c61, 0x48260220, 0x00340505, 0x00000000,
    0x00131d61, 0x4a260220, 0x00340605, 0x00000000,
    0xa0271d40, 0x25000302, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x74440000,
    0xfb044424, 0x003c0000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x06140000,
    0xfb044824, 0x00040000, 0xe0361965, 0x1ff02703,
    0x00033561, 0x49260660, 0x00000264, 0x00000000,
    0x00133561, 0x4b260660, 0x00000264, 0x00000000,
    0x00031a61, 0x49060660, 0x00000244, 0x00000000,
    0x00131a61, 0x4b060660, 0x00000244, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x0d440000, 0xfb044924, 0x003c0000,
    0xe07c2465, 0x00107a03, 0xa0182440, 0x16007402,
    0x00041a70, 0x00018660, 0x26467c05, 0x00000000,
    0xa0281a40, 0x36001802, 0xa01a0040, 0x20001803,
    0xef152562, 0x00000603, 0x271f0070, 0x02101d2b,
    0x272a1c70, 0x18002803, 0x271cc462, 0x76001a03,
    0xa0211b40, 0x02121f1a, 0x272c1a70, 0x1c002803,
    0x00031a61, 0x4d260220, 0x00342105, 0x00000000,
    0x00131b61, 0x4f260220, 0x00342205, 0x00000000,
    0x00041b65, 0x38052620, 0x22462a05, 0x00462c05,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x22240000, 0xfb044d24, 0x000c0000,
    0x01040022, 0x0001c060, 0x00000168, 0x00000158,
    0xa03a1f40, 0x28001502, 0x273c9170, 0x15003a03,
    0x00040069, 0x40058660, 0x02463a05, 0x00000002,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xe0433368, 0x01e03a03, 0xa03e1b40, 0x2a223c02,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xa047b640, 0x40000d02, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041a69, 0x41058660,
    0x02463e05, 0x00000002, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x27491a70, 0x0d004703,
    0x00033761, 0x4e060220, 0x00344705, 0x00000000,
    0x00133761, 0x50060220, 0x00344805, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x20451c66, 0x43004103, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00042652, 0x4b040e68,
    0x0e2e0f05, 0x49054505, 0x00131961, 0x50260220,
    0x00344c05, 0x00000000, 0x00031a61, 0x4e260220,
    0x00344b05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x2d140000,
    0xfb044e24, 0x00040000, 0x00040024, 0x0001c060,
    0x00000020, 0x00000020, 0x00042761, 0x2d054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xa04c2740, 0x02002203,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00042469, 0x51058660, 0x02467805, 0x00000005,
    0xe0530068, 0x01b07803, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x274e1b70, 0x22004c03,
    0xa0551b40, 0x51004c02, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xa0502740, 0x24024e02,
    0x27571a70, 0x4c005503, 0xa05b0040, 0x01005503,
    0x00041a52, 0x59040e68, 0x0e2e5005, 0x57055305,
    0xe75d1a70, 0x01005b03, 0xa05f1940, 0x59025d02,
    0x00030061, 0x4f060220, 0x00345505, 0x00000000,
    0x00130061, 0x51060220, 0x00345605, 0x00000000,
    0x00031a61, 0x4f260220, 0x00345905, 0x00000000,
    0x00131a61, 0x51260220, 0x00345a05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x05440000, 0xfb044f24, 0x003c0000,
    0x00033861, 0x50060220, 0x00345b05, 0x00000000,
    0x00133861, 0x52060220, 0x00345c05, 0x00000000,
    0x00031a61, 0x50260220, 0x00345f05, 0x00000000,
    0x00131a61, 0x52260220, 0x00346005, 0x00000000,
    0x20612840, 0x05200b00, 0x00041162, 0x67058aa0,
    0x4a466105, 0x0704ec3d, 0x00041170, 0x78058aa0,
    0x5a466705, 0x77f684df, 0x00044938, 0x6a050aa0,
    0x1a466705, 0x00460001, 0x00040070, 0x7a058aa0,
    0x3a466105, 0x0704ec3d, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x60240000,
    0xfb045024, 0x000c0000, 0x00042941, 0x6c058aa0,
    0x0a466a05, 0x417d70a4, 0x00041265, 0x00010220,
    0x22467805, 0x00467a05, 0xef7b1162, 0x00006c03,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x20642640, 0x07206000, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x20662640, 0x09206200,
    0x00041270, 0x7d058aa0, 0x3a466405, 0x0704ec3d,
    0x00043962, 0x68058aa0, 0x4a466405, 0x0704ec3d,
    0x00049a38, 0x70050aa0, 0x1a466805, 0x00460001,
    0x00043a70, 0x15058aa0, 0x5a466805, 0x77f684df,
    0x00041462, 0x69058aa0, 0x4a466605, 0x0704ec3d,
    0x00042a41, 0x74058aa0, 0x0a467005, 0x417d70a4,
    0x00041365, 0x00010220, 0x22461505, 0x00467d05,
    0xef261162, 0x00007403, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044b38, 0x75050aa0,
    0x1a466905, 0x00460001, 0x00040070, 0x28058aa0,
    0x3a466605, 0x0704ec3d, 0x00043b70, 0x2a058aa0,
    0x5a466905, 0x77f684df, 0x80002b01, 0x00000000,
    0x00000000, 0x00000000, 0x00041c41, 0x77058aa0,
    0x0a467505, 0x417d70a4, 0x00041265, 0x00010220,
    0x22462a05, 0x00462805, 0xef2b1162, 0x00007703,
    0x00040061, 0x00010660, 0x20463805, 0x00000000,
    0x01040022, 0x0001c060, 0x00000120, 0x00000120,
    0x00042769, 0x2f058660, 0x02462d05, 0x00000005,
    0xa0329640, 0x2f001102, 0xe0300068, 0x01b02d03,
    0x27341a70, 0x11003203, 0xa03c2140, 0x01003203,
    0x00033661, 0x51060220, 0x00343205, 0x00000000,
    0x00133661, 0x53060220, 0x00343305, 0x00000000,
    0x0004c652, 0x3a040e68, 0x0e2e1305, 0x34053005,
    0x273e1c70, 0x32003c03, 0x00030061, 0x55060220,
    0x00343c05, 0x00000000, 0x00130061, 0x57060220,
    0x00343d05, 0x00000000, 0x00131c61, 0x53260220,
    0x00343b05, 0x00000000, 0x00031d61, 0x51260220,
    0x00343a05, 0x00000000, 0xa0401d40, 0x3a023e02,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x0d440000, 0xfb045124, 0x003c0000,
    0x00031961, 0x55260220, 0x00344005, 0x00000000,
    0x00131a61, 0x57260220, 0x00344105, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x15440000, 0xfb045524, 0x003c0000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040069, 0x30058660, 0x02463605, 0x00000002,
    0x00049761, 0x2e050220, 0x00463005, 0x00000000,
    0x00041970, 0x00018220, 0x42462e05, 0x00000120,
    0x01040028, 0x0001c660, 0x00000090, 0x00000090,
    0x00043c69, 0x56058660, 0x02462e05, 0x00000002,
    0x00043c61, 0x1d054220, 0x00000000, 0x7f800000,
    0x00043c61, 0x1f054220, 0x00000000, 0x7f800000,
    0x00043c61, 0x21054220, 0x00000000, 0x7f800000,
    0x00043c61, 0x23054220, 0x00000000, 0x7f800000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x00000000, 0xea0c5614, 0x003c1d44,
    0x00040040, 0x2e058660, 0x06462e05, 0x00000800,
    0x00040027, 0x00014060, 0x00000000, 0xffffff60,
    0x00000060, 0x00000000, 0x00000000, 0x00000000,
    0x00041a70, 0x00018220, 0x42463005, 0x00000030,
    0x01040028, 0x0001c660, 0x000000b8, 0x000000b8,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00041d69, 0x41058660, 0x02463005, 0x00000002,
    0x00043c61, 0x1e054220, 0x00000000, 0x00000000,
    0x00043c61, 0x20054220, 0x00000000, 0x00000000,
    0x00043c61, 0x22054220, 0x00000000, 0x00000000,
    0x00043c61, 0x24054220, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0xa0571d40, 0x48004103, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x00000000,
    0xea0c5714, 0x003c1e44, 0x00040040, 0x30058660,
    0x06463005, 0x00000800, 0x00040027, 0x00014060,
    0x00000000, 0xffffff38, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80004d31, 0x420c0000,
    0xe23e000c, 0x00000000, 0x80002d01, 0x00000000,
    0x00000000, 0x00000000, 0x80033361, 0x43054220,
    0x00000000, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80011961, 0x43550000,
    0x0000005c, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80044e31, 0x00000000,
    0x3008430c, 0x00000000, 0x80040001, 0x00000000,
    0xe0000000, 0x00000000, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x20442640, 0x15000d00,
    0x80002c01, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x20462640, 0x17000f00, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x20482640, 0x19001100,
    0x204c1140, 0x09204800, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x20491440, 0x05204400,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x20510a41, 0x2b004c00, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x204b1540, 0x07204600,
    0x204d1341, 0x7b004900, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x00041361, 0x57050a20,
    0x00465105, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x204f1241, 0x26004b00,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041261, 0x53050a20, 0x00464d05, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x00041161, 0x55050a20, 0x00464f05, 0x00000000,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00040070, 0x00018220, 0x22463805, 0x00000000,
    0x00040061, 0x31050120, 0x00003000, 0x00000000,
    0x80001561, 0x05054660, 0x00000000, 0x00000001,
    0xe0590065, 0x00300303, 0xe05b0068, 0x00200303,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x5d050660, 0x02000504, 0x00460305,
    0x00041a70, 0x00018660, 0x16463105, 0x00000000,
    0x01040028, 0x0001c660, 0x00000918, 0x00000918,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x0004004c, 0x5f050220, 0x00463105, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80041961, 0x10014110, 0x00000000, 0x0a600a60,
    0x00040069, 0x10018510, 0x01565f06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0a600a60,
    0xe0610961, 0x001b0004, 0xac631970, 0x53006102,
    0x00041965, 0x00010220, 0x22466305, 0x00463805,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x01041162, 0x65058220, 0x02461505, 0xff800000,
    0x01040062, 0x67058220, 0x02461705, 0xff800000,
    0x01040062, 0x69058220, 0x02460d05, 0x7f800000,
    0x01040062, 0x6b058220, 0x02460f05, 0x7f800000,
    0xa3781c61, 0xff810000, 0x60780061, 0x00106500,
    0xa37a0b61, 0xff810000, 0x607a0061, 0x00106700,
    0xa3701a61, 0x7f810000, 0x60700061, 0x00106900,
    0xa3741961, 0x7f810000, 0x60740061, 0x00106b00,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x68058220, 0x02461905, 0xff800000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x6c058220, 0x02461105, 0x7f800000,
    0x80031461, 0x47060220, 0x00447826, 0x00000000,
    0x80031361, 0x65060220, 0x00447a26, 0x00000000,
    0x80031261, 0x08060220, 0x00447026, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80031161, 0x25060220, 0x00447426, 0x00000000,
    0xa37c1e61, 0xff810000, 0x607c0061, 0x00106800,
    0xa3760d61, 0x7f810000, 0x60760061, 0x00106c00,
    0x00040070, 0x00018660, 0x16465905, 0x00000001,
    0x80030d62, 0x45060aa0, 0x4a447806, 0x00444706,
    0x80031c62, 0x5f060aa0, 0x4a447a06, 0x00446506,
    0x80030b62, 0x06060aa0, 0x5a447006, 0x00440806,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80031a62, 0x23060aa0, 0x5a447406, 0x00442506,
    0x80031561, 0x3a060220, 0x00447626, 0x00000000,
    0x80030c61, 0x78260220, 0x00444506, 0x00000000,
    0x80030b61, 0x7a260220, 0x00445f06, 0x00000000,
    0x80030a61, 0x70260220, 0x00440606, 0x00000000,
    0x80030961, 0x74260220, 0x00442306, 0x00000000,
    0x80031d62, 0x33060aa0, 0x5a447606, 0x00443a06,
    0x80021c61, 0x4c070220, 0x00427847, 0x00000000,
    0x80020061, 0x4a070220, 0x00427827, 0x00000000,
    0x80020d61, 0x6a070220, 0x00427a47, 0x00000000,
    0x80021761, 0x68070220, 0x00427a27, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80021e61, 0x1d070220, 0x00427047, 0x00000000,
    0x80020061, 0x0b070220, 0x00427027, 0x00000000,
    0x80021f61, 0x2a070220, 0x00427447, 0x00000000,
    0x80020061, 0x28070220, 0x00427427, 0x00000000,
    0x80031761, 0x05060220, 0x00447c26, 0x00000000,
    0x80031161, 0x76260220, 0x00443306, 0x00000000,
    0x80021f62, 0x48070aa0, 0x4a424a07, 0x00424c07,
    0x80021f62, 0x66070aa0, 0x4a426807, 0x00426a07,
    0x80021d62, 0x09070aa0, 0x5a420b07, 0x00421d07,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80021b62, 0x26070aa0, 0x5a422807, 0x00422a07,
    0x80031a62, 0x03060aa0, 0x4a447c06, 0x00440506,
    0x80021961, 0x3f070220, 0x00427647, 0x00000000,
    0x80022161, 0x3d070220, 0x00427627, 0x00000000,
    0x80021561, 0x78470220, 0x00424807, 0x00000000,
    0x80021461, 0x7a470220, 0x00426607, 0x00000000,
    0x80021361, 0x70470220, 0x00420907, 0x00000000,
    0x80021261, 0x74470220, 0x00422607, 0x00000000,
    0x80030961, 0x7c260220, 0x00440306, 0x00000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x80021e62, 0x3b070aa0, 0x5a423d07, 0x00423f07,
    0x80021d61, 0x51070220, 0x00427867, 0x00000000,
    0x80020061, 0x4f070220, 0x00427827, 0x00000000,
    0x80021e61, 0x7e070220, 0x00427a27, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80021e61, 0x22070220, 0x00427067, 0x00000000,
    0x80023c61, 0x20070220, 0x00427027, 0x00000000,
    0x80021f61, 0x2f070220, 0x00427467, 0x00000000,
    0x80022761, 0x2d070220, 0x00427427, 0x00000000,
    0x80020c61, 0x0a070220, 0x00427c47, 0x00000000,
    0x80021761, 0x08070220, 0x00427c27, 0x00000000,
    0x80021161, 0x76470220, 0x00423b07, 0x00000000,
    0x80020061, 0x02070220, 0x00427a67, 0x00000000,
    0x80021f62, 0x4d070aa0, 0x4a424f07, 0x00425107,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80021f62, 0x1e070aa0, 0x5a422007, 0x00422207,
    0x80021d62, 0x2b070aa0, 0x5a422d07, 0x00422f07,
    0x80021b62, 0x06070aa0, 0x4a420807, 0x00420a07,
    0x80021a61, 0x44070220, 0x00427667, 0x00000000,
    0x80023e61, 0x42070220, 0x00427627, 0x00000000,
    0x80021b62, 0x6b070aa0, 0x4a427e07, 0x00420207,
    0x80021561, 0x78670220, 0x00424d07, 0x00000000,
    0x80021461, 0x70670220, 0x00421e07, 0x00000000,
    0x80021361, 0x74670220, 0x00422b07, 0x00000000,
    0x80021261, 0x7c470220, 0x00420607, 0x00000000,
    0x80021d62, 0x40070aa0, 0x5a424207, 0x00424407,
    0x80021261, 0x7a670220, 0x00426b07, 0x00000000,
    0x80021d62, 0x78850aa0, 0x4a007864, 0x00347885,
    0x80021d62, 0x79850aa0, 0x4a007964, 0x00347985,
    0x80021c62, 0x70850aa0, 0x5a007064, 0x00347085,
    0x80021c62, 0x71850aa0, 0x5a007164, 0x00347185,
    0x80021b62, 0x74850aa0, 0x5a007464, 0x00347485,
    0x80021b62, 0x75850aa0, 0x5a007564, 0x00347585,
    0x80021a61, 0x1f070220, 0x00427c67, 0x00000000,
    0x80020061, 0x1d070220, 0x00427c27, 0x00000000,
    0x80021761, 0x76670220, 0x00424007, 0x00000000,
    0x80021c62, 0x7a850aa0, 0x4a007a64, 0x00347a85,
    0x80021c62, 0x7b850aa0, 0x4a007b64, 0x00347b85,
    0x80031762, 0x79050aa0, 0x4a0078e4, 0x00467905,
    0x80031662, 0x71050aa0, 0x5a0070e4, 0x00467105,
    0x80031562, 0x75050aa0, 0x5a0074e4, 0x00467505,
    0x80021a62, 0x0b070aa0, 0x4a421d07, 0x00421f07,
    0x80021962, 0x76850aa0, 0x5a007664, 0x00347685,
    0x80021962, 0x77850aa0, 0x5a007764, 0x00347785,
    0x80031762, 0x7b050aa0, 0x4a007ae4, 0x00467b05,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x7e050220, 0x020075e4, 0x000071e4,
    0x80021461, 0x7c670220, 0x00420b07, 0x00000000,
    0x80031262, 0x77050aa0, 0x5a0076e4, 0x00467705,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x02050220, 0x02007be4, 0x000079e4,
    0x80021a62, 0x7c850aa0, 0x4a007c64, 0x00347c85,
    0x80021a62, 0x7d850aa0, 0x4a007d64, 0x00347d85,
    0x00040070, 0x00018660, 0x16465905, 0x00000002,
    0x80031162, 0x7d050aa0, 0x4a007ce4, 0x00467d05,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x2f040062, 0x7e017783, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x2f060062, 0x02017d83,
    0x00040070, 0x00018660, 0x16465b05, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x2f650062, 0x06200400, 0x00040065, 0x00018220,
    0x22465d05, 0x00000077, 0x01040022, 0x0001c060,
    0x00000090, 0x00000090, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x60070041, 0x00606102,
    0x60090041, 0x00305b02, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x0b040e68,
    0x0e0e0705, 0x09055905, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x5f058660,
    0x02460b05, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044f31, 0x00000000,
    0xea2a5f14, 0x01006514, 0x00040025, 0x00004600,
    0x00000000, 0x00000070, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0xa01d0066, 0x38226302,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00041a70, 0x00018220, 0x22461d05, 0x00000000,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x1e050120, 0x00003000, 0x00000000,
    0x20311965, 0x1e003103, 0x00040027, 0x00014060,
    0x00000000, 0xfffff6d8, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000c01, 0x00000000,
    0x00000000, 0x00000000, 0xa01f0040, 0x01005503,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00040070, 0x00018220, 0x22463805, 0x00000000,
    0x00041d61, 0x32050120, 0x00003000, 0x00000000,
    0x00041970, 0x00018660, 0x16463205, 0x00000000,
    0x01040028, 0x0001c660, 0x00000948, 0x00000948,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x0004004c, 0x21050220, 0x00463205, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80040061, 0x10014110, 0x00000000, 0x03e003e0,
    0x00040069, 0x10018510, 0x01562106, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x03e003e0,
    0xe0230961, 0x001b0004, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0xac250070, 0x1f002302,
    0x00041965, 0x00010220, 0x22462505, 0x00463805,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x27058220, 0x02461505, 0xff800000,
    0x01040062, 0x29058220, 0x02461705, 0xff800000,
    0x80001401, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x2b058220, 0x02460d05, 0x7f800000,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x2d058220, 0x02460f05, 0x7f800000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0xa33c1c61, 0xff810000, 0x603c0061, 0x00102700,
    0xa33e1b61, 0xff810000, 0x603e0061, 0x00102900,
    0xa3300a61, 0x7f810000, 0x60300061, 0x00102b00,
    0xa3341961, 0x7f810000, 0x60340061, 0x00102d00,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x2a058220, 0x02461905, 0xff800000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x2e058220, 0x02461105, 0x7f800000,
    0x80031461, 0x70060220, 0x00443c26, 0x00000000,
    0x80031361, 0x02060220, 0x00443e26, 0x00000000,
    0x80031261, 0x27060220, 0x00443026, 0x00000000,
    0x80031161, 0x47060220, 0x00443426, 0x00000000,
    0xa3400e61, 0xff810000, 0x60400061, 0x00102a00,
    0xa33a0d61, 0x7f810000, 0x603a0061, 0x00102e00,
    0x00040070, 0x00018660, 0x16465905, 0x00000001,
    0x80031d62, 0x6c060aa0, 0x4a443c06, 0x00447006,
    0x80031c62, 0x7e060aa0, 0x4a443e06, 0x00440206,
    0x80031b62, 0x21060aa0, 0x5a443006, 0x00442706,
    0x80030a62, 0x45060aa0, 0x5a443406, 0x00444706,
    0x80031561, 0x61060220, 0x00443a26, 0x00000000,
    0x80030c61, 0x3c260220, 0x00446c06, 0x00000000,
    0x80030b61, 0x3e260220, 0x00447e06, 0x00000000,
    0x80030a61, 0x30260220, 0x00442106, 0x00000000,
    0x80030961, 0x34260220, 0x00444506, 0x00000000,
    0x80031261, 0x27060220, 0x00444026, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80031e62, 0x5f060aa0, 0x5a443a06, 0x00446106,
    0x80021d61, 0x78070220, 0x00423c47, 0x00000000,
    0x80020061, 0x76070220, 0x00423c27, 0x00000000,
    0x80021e61, 0x07070220, 0x00423e47, 0x00000000,
    0x80020061, 0x05070220, 0x00423e27, 0x00000000,
    0x80020f61, 0x2c070220, 0x00423047, 0x00000000,
    0x80021761, 0x2a070220, 0x00423027, 0x00000000,
    0x80021f61, 0x4c070220, 0x00423447, 0x00000000,
    0x80020061, 0x4a070220, 0x00423427, 0x00000000,
    0x80031f62, 0x21060aa0, 0x4a444006, 0x00442706,
    0x80031261, 0x3a260220, 0x00445f06, 0x00000000,
    0x80021f62, 0x74070aa0, 0x4a427607, 0x00427807,
    0x80021e62, 0x03070aa0, 0x4a420507, 0x00420707,
    0x80021a62, 0x48070aa0, 0x5a424a07, 0x00424c07,
    0x80030c61, 0x40260220, 0x00442106, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80021a61, 0x66070220, 0x00423a47, 0x00000000,
    0x80023f61, 0x64070220, 0x00423a27, 0x00000000,
    0x80021361, 0x3c470220, 0x00427407, 0x00000000,
    0x80021f62, 0x28070aa0, 0x5a422a07, 0x00422c07,
    0x80021361, 0x3e470220, 0x00420307, 0x00000000,
    0x80021261, 0x34470220, 0x00424807, 0x00000000,
    0x80021c62, 0x62070aa0, 0x5a426407, 0x00426607,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80021b61, 0x7d070220, 0x00423c67, 0x00000000,
    0x80020061, 0x7b070220, 0x00423c27, 0x00000000,
    0x80021261, 0x30470220, 0x00422807, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80021d61, 0x1d070220, 0x00423e67, 0x00000000,
    0x80020061, 0x0a070220, 0x00423e27, 0x00000000,
    0x80021261, 0x2a070220, 0x00424027, 0x00000000,
    0x80021261, 0x2c070220, 0x00424047, 0x00000000,
    0x80021f61, 0x51070220, 0x00423467, 0x00000000,
    0x80020061, 0x4f070220, 0x00423427, 0x00000000,
    0x80021161, 0x3a470220, 0x00426207, 0x00000000,
    0x80021f62, 0x79070aa0, 0x4a427b07, 0x00427d07,
    0x80021f61, 0x44070220, 0x00423067, 0x00000000,
    0x80023e61, 0x42070220, 0x00423027, 0x00000000,
    0x80021f62, 0x08070aa0, 0x4a420a07, 0x00421d07,
    0x80021e62, 0x28070aa0, 0x4a422a07, 0x00422c07,
    0x80021c62, 0x4d070aa0, 0x5a424f07, 0x00425107,
    0x80021b61, 0x6b070220, 0x00423a67, 0x00000000,
    0x80023f61, 0x69070220, 0x00423a27, 0x00000000,
    0x80021461, 0x3c670220, 0x00427907, 0x00000000,
    0x80021361, 0x3e670220, 0x00420807, 0x00000000,
    0x80021261, 0x40470220, 0x00422807, 0x00000000,
    0x80021e62, 0x2d070aa0, 0x5a424207, 0x00424407,
    0x80021261, 0x34670220, 0x00424d07, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80021d62, 0x67070aa0, 0x5a426907, 0x00426b07,
    0x80021c62, 0x3c850aa0, 0x4a003c64, 0x00343c85,
    0x80021c62, 0x3d850aa0, 0x4a003d64, 0x00343d85,
    0x80021b62, 0x3e850aa0, 0x4a003e64, 0x00343e85,
    0x80021b62, 0x3f850aa0, 0x4a003f64, 0x00343f85,
    0x80021661, 0x30670220, 0x00422d07, 0x00000000,
    0x80020b61, 0x42070220, 0x00424027, 0x00000000,
    0x80021661, 0x44070220, 0x00424067, 0x00000000,
    0x80021c62, 0x34850aa0, 0x5a003464, 0x00343485,
    0x80021c62, 0x35850aa0, 0x5a003564, 0x00343585,
    0x80021761, 0x3a670220, 0x00426707, 0x00000000,
    0x80031562, 0x3d050aa0, 0x4a003ce4, 0x00463d05,
    0x80031462, 0x3f050aa0, 0x4a003ee4, 0x00463f05,
    0x80021c62, 0x30850aa0, 0x5a003064, 0x00343085,
    0x80021c62, 0x31850aa0, 0x5a003164, 0x00343185,
    0x80021a62, 0x2d070aa0, 0x4a424207, 0x00424407,
    0x80031662, 0x35050aa0, 0x5a0034e4, 0x00463505,
    0x80021962, 0x3a850aa0, 0x5a003a64, 0x00343a85,
    0x80021962, 0x3b850aa0, 0x5a003b64, 0x00343b85,
    0x80001401, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x44050220, 0x02003fe4, 0x00003de4,
    0x80031562, 0x31050aa0, 0x5a0030e4, 0x00463105,
    0x80021561, 0x40670220, 0x00422d07, 0x00000000,
    0x80031262, 0x3b050aa0, 0x5a003ae4, 0x00463b05,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x42050220, 0x020035e4, 0x000031e4,
    0x80021a62, 0x40850aa0, 0x4a004064, 0x00344085,
    0x80021a62, 0x41850aa0, 0x4a004164, 0x00344185,
    0x00040070, 0x00018660, 0x16465905, 0x00000002,
    0x80031162, 0x41050aa0, 0x4a0040e4, 0x00464105,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x2f460062, 0x42013b83, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x2f480062, 0x44014183,
    0x00040070, 0x00018660, 0x16465b05, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x2f680062, 0x48204600, 0x00040065, 0x00018220,
    0x22465d05, 0x00000077, 0x01040022, 0x0001c060,
    0x00000080, 0x00000080, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x60490041, 0x00602302,
    0x604b0041, 0x00305b02, 0x00041952, 0x4d040e68,
    0x0e0e4905, 0x4b055905, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x66058660,
    0x02464d05, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044f31, 0x00000000,
    0xea2a6614, 0x01006814, 0x00040025, 0x00004600,
    0x00000000, 0x00000050, 0xa04e0066, 0x38222502,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00041a70, 0x00018220, 0x22464e05, 0x00000000,
    0x00040061, 0x4f050120, 0x00003000, 0x00000000,
    0x20321965, 0x4f003203, 0x00040027, 0x00014060,
    0x00000000, 0xfffff6a8, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0500040, 0x02005703,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00040070, 0x00018220, 0x22463805, 0x00000000,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x33050120, 0x00003000, 0x00000000,
    0x00041970, 0x00018660, 0x16463305, 0x00000000,
    0x01040028, 0x0001c660, 0x00000978, 0x00000978,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x0004004c, 0x5f050220, 0x00463305, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80040061, 0x10014110, 0x00000000, 0x0a000a00,
    0x00040069, 0x10018510, 0x01565f06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0a000a00,
    0xe0610961, 0x001b0004, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xac630070, 0x50006102,
    0x00041965, 0x00010220, 0x22466305, 0x00463805,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x65058220, 0x02461505, 0xff800000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x67058220, 0x02461705, 0xff800000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x69058220, 0x02460d05, 0x7f800000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x6b058220, 0x02460f05, 0x7f800000,
    0xa3781c61, 0xff810000, 0x60780061, 0x00106500,
    0xa37a0b61, 0xff810000, 0x607a0061, 0x00106700,
    0xa3700a61, 0x7f810000, 0x60700061, 0x00106900,
    0xa3741961, 0x7f810000, 0x60740061, 0x00106b00,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x68058220, 0x02461905, 0xff800000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x6c058220, 0x02461105, 0x7f800000,
    0x80031461, 0x27060220, 0x00447826, 0x00000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x80031361, 0x3c060220, 0x00447a26, 0x00000000,
    0x80031261, 0x47060220, 0x00447026, 0x00000000,
    0xa37c1d61, 0xff810000, 0x607c0061, 0x00106800,
    0x80031261, 0x6a060220, 0x00447426, 0x00000000,
    0xa3760d61, 0x7f810000, 0x60760061, 0x00106c00,
    0x00040070, 0x00018660, 0x16465905, 0x00000001,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80030d62, 0x25060aa0, 0x4a447806, 0x00442706,
    0x80031c62, 0x3a060aa0, 0x4a447a06, 0x00443c06,
    0x80030b62, 0x45060aa0, 0x5a447006, 0x00444706,
    0x80031561, 0x4e060220, 0x00447c26, 0x00000000,
    0x80031b62, 0x66060aa0, 0x5a447406, 0x00446a06,
    0x80031561, 0x0a060220, 0x00447626, 0x00000000,
    0x80030c61, 0x78260220, 0x00442506, 0x00000000,
    0x80030b61, 0x7a260220, 0x00443a06, 0x00000000,
    0x80030a61, 0x70260220, 0x00444506, 0x00000000,
    0x80031d62, 0x47060aa0, 0x4a447c06, 0x00444e06,
    0x80030a61, 0x74260220, 0x00446606, 0x00000000,
    0x80031d62, 0x08060aa0, 0x5a447606, 0x00440a06,
    0x8002c761, 0x2c070220, 0x00427847, 0x00000000,
    0x80020061, 0x2a070220, 0x00427827, 0x00000000,
    0x80021d61, 0x41070220, 0x00427a47, 0x00000000,
    0x80020061, 0x3f070220, 0x00427a27, 0x00000000,
    0x80021e61, 0x4c070220, 0x00427047, 0x00000000,
    0x80020061, 0x4a070220, 0x00427027, 0x00000000,
    0x80031261, 0x7c260220, 0x00444706, 0x00000000,
    0x80021f61, 0x02070220, 0x00427447, 0x00000000,
    0x80020061, 0x7e070220, 0x00427427, 0x00000000,
    0x80031161, 0x76260220, 0x00440806, 0x00000000,
    0x80021f62, 0x28070aa0, 0x4a422a07, 0x00422c07,
    0x80021f62, 0x3d070aa0, 0x4a423f07, 0x00424107,
    0x80020c61, 0x69070220, 0x00427c27, 0x00000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80021b62, 0x6b070aa0, 0x5a427e07, 0x00420207,
    0x80021a61, 0x1f070220, 0x00427647, 0x00000000,
    0x80023c61, 0x1d070220, 0x00427627, 0x00000000,
    0x80021f62, 0x48070aa0, 0x5a424a07, 0x00424c07,
    0x80021461, 0x78470220, 0x00422807, 0x00000000,
    0x80021361, 0x7a470220, 0x00423d07, 0x00000000,
    0x80021261, 0x74470220, 0x00426b07, 0x00000000,
    0x80021c62, 0x0b070aa0, 0x5a421d07, 0x00421f07,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80021261, 0x70470220, 0x00424807, 0x00000000,
    0x80021c61, 0x31070220, 0x00427867, 0x00000000,
    0x80020061, 0x2f070220, 0x00427827, 0x00000000,
    0x80021d61, 0x46070220, 0x00427a67, 0x00000000,
    0x80020061, 0x44070220, 0x00427a27, 0x00000000,
    0x80021e61, 0x07070220, 0x00427467, 0x00000000,
    0x80020061, 0x05070220, 0x00427427, 0x00000000,
    0x80020061, 0x6b070220, 0x00427c47, 0x00000000,
    0x80021161, 0x76470220, 0x00420b07, 0x00000000,
    0x80021f61, 0x65070220, 0x00427067, 0x00000000,
    0x80020061, 0x5f070220, 0x00427027, 0x00000000,
    0x80021f62, 0x2d070aa0, 0x4a422f07, 0x00423107,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80021f62, 0x42070aa0, 0x4a424407, 0x00424607,
    0x80021d62, 0x03070aa0, 0x5a420507, 0x00420707,
    0x80021c62, 0x67070aa0, 0x4a426907, 0x00426b07,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80021b61, 0x24070220, 0x00427667, 0x00000000,
    0x80023c61, 0x22070220, 0x00427627, 0x00000000,
    0x80021b62, 0x4d070aa0, 0x5a425f07, 0x00426507,
    0x80021561, 0x78670220, 0x00422d07, 0x00000000,
    0x80021461, 0x7a670220, 0x00424207, 0x00000000,
    0x80021361, 0x74670220, 0x00420307, 0x00000000,
    0x80021261, 0x7c470220, 0x00426707, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80021d62, 0x20070aa0, 0x5a422207, 0x00422407,
    0x80021261, 0x70670220, 0x00424d07, 0x00000000,
    0x80021d62, 0x78850aa0, 0x4a007864, 0x00347885,
    0x80021d62, 0x79850aa0, 0x4a007964, 0x00347985,
    0x80021c62, 0x7a850aa0, 0x4a007a64, 0x00347a85,
    0x80021c62, 0x7b850aa0, 0x4a007b64, 0x00347b85,
    0x80021b62, 0x74850aa0, 0x5a007464, 0x00347485,
    0x80021b62, 0x75850aa0, 0x5a007564, 0x00347585,
    0x80021a61, 0x02070220, 0x00427c67, 0x00000000,
    0x80020061, 0x7e070220, 0x00427c27, 0x00000000,
    0x80021761, 0x76670220, 0x00422007, 0x00000000,
    0x80021c62, 0x70850aa0, 0x5a007064, 0x00347085,
    0x80021c62, 0x71850aa0, 0x5a007164, 0x00347185,
    0x80031762, 0x79050aa0, 0x4a0078e4, 0x00467905,
    0x80031662, 0x7b050aa0, 0x4a007ae4, 0x00467b05,
    0x80031562, 0x75050aa0, 0x5a0074e4, 0x00467505,
    0x80021a62, 0x6c070aa0, 0x4a427e07, 0x00420207,
    0x80021962, 0x76850aa0, 0x5a007664, 0x00347685,
    0x80021962, 0x77850aa0, 0x5a007764, 0x00347785,
    0x80031762, 0x71050aa0, 0x5a0070e4, 0x00467105,
    0x80001401, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x02050220, 0x02007be4, 0x000079e4,
    0x80021461, 0x7c670220, 0x00426c07, 0x00000000,
    0x80031262, 0x77050aa0, 0x5a0076e4, 0x00467705,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x7e050220, 0x020075e4, 0x000071e4,
    0x80021a62, 0x7c850aa0, 0x4a007c64, 0x00347c85,
    0x80021a62, 0x7d850aa0, 0x4a007d64, 0x00347d85,
    0x00040070, 0x00018660, 0x16465905, 0x00000002,
    0x80031162, 0x7d050aa0, 0x4a007ce4, 0x00467d05,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x2f040062, 0x7e017783, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x2f060062, 0x02017d83,
    0x00040070, 0x00018660, 0x16465b05, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x2f6b0062, 0x06200400, 0x00040065, 0x00018220,
    0x22465d05, 0x00000077, 0x01040022, 0x0001c060,
    0x00000090, 0x00000090, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x60070041, 0x00606102,
    0x60090041, 0x00305b02, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x0b040e68,
    0x0e0e0705, 0x09055905, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x69058660,
    0x02460b05, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044f31, 0x00000000,
    0xea2a6914, 0x01006b14, 0x00040025, 0x00004600,
    0x00000000, 0x00000050, 0xa01d0066, 0x38226302,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00041a70, 0x00018220, 0x22461d05, 0x00000000,
    0x00040061, 0x1e050120, 0x00003000, 0x00000000,
    0x20331965, 0x1e003303, 0x00040027, 0x00014060,
    0x00000000, 0xfffff678, 0x00040061, 0x00010660,
    0x20463805, 0x00000000, 0x01040022, 0x0001c060,
    0x00000128, 0x00000128, 0x80001e01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x1f058660,
    0x02465305, 0x00000002, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0xa06c0040, 0x48001f03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044f31, 0x00000000, 0xea106c14, 0x01000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x20058660, 0x02465505, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0xa0700040, 0x4c002003, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x00000000,
    0xea107014, 0x01000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x21058660,
    0x02465705, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0xa0740040, 0x50002103,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xea107414, 0x01000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80000001, 0x00000000, 0x30000000, 0x00000000,
    0x80000001, 0x00000000, 0x30000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004231, 0x220c0000, 0xe23e000c, 0x00000000,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x80033c61, 0x23054220, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80011961, 0x23550000, 0x0000005c, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80044331, 0x00000000, 0x3008230c, 0x00000000,
    0x80040001, 0x00000000, 0xe0000000, 0x00000000,
    0x00041e61, 0x34050220, 0x00463605, 0x00000000,
    0x00041970, 0x00018220, 0x42463405, 0x00000120,
    0x01040028, 0x0001c660, 0x000001d0, 0x000001d0,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x75058660, 0x02463405, 0x00000002,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x7a140000, 0xea047514, 0x00040000,
    0xae002170, 0x7f807a01, 0x01040022, 0x0001c060,
    0x00000140, 0x00000140, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0240040, 0x02c06e03,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x27260070, 0x6e002403, 0xa0283140, 0x75002402,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x272a0070, 0x24002803, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x76060220,
    0x00342805, 0x00000000, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x78060220,
    0x00342905, 0x00000000, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x80000b01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x2c042e68,
    0x0e2e2605, 0x2a057205, 0x00131961, 0x78260220,
    0x00342d05, 0x00000000, 0x00031a61, 0x76260220,
    0x00342c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb2a7624, 0x01007a14, 0x00040025, 0x00004600,
    0x00000000, 0x00000018, 0xa0340040, 0x20003403,
    0x00040027, 0x00014060, 0x00000000, 0xfffffe20,
    0x00000060, 0x00000000, 0x00000000, 0x00000000,
    0x00041a70, 0x00018220, 0x42463605, 0x00000030,
    0x01040028, 0x0001c660, 0x000001e0, 0x000001e0,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x2d058660, 0x02463605, 0x00000002,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0xa07b0040, 0x48002d03, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x02140000,
    0xea047b14, 0x00040000, 0x00042170, 0x00018660,
    0x26460205, 0x00000000, 0x01040022, 0x0001c060,
    0x00000120, 0x00000120, 0x80001601, 0x00000000,
    0x00000000, 0x00000000, 0xa02f0040, 0x4ac06e03,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x27310070, 0x6e002f03, 0xa0331f40, 0x2d002f02,
    0x27381970, 0x2f003303, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x7c060220,
    0x00343305, 0x00000000, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x7e060220,
    0x00343405, 0x00000000, 0x80000b01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x3a042e68,
    0x0e2e3105, 0x38057205, 0x00131961, 0x7e260220,
    0x00343b05, 0x00000000, 0x00031a61, 0x7c260220,
    0x00343a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb187c24, 0x01000214, 0x00040025, 0x00004600,
    0x00000000, 0x00000018, 0xa0360040, 0x20003603,
    0x00040027, 0x00014060, 0x00000000, 0xfffffe10,
    0x80033161, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_BFS_BFS_pass1_indexed = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 1344,
      .base.program_size = 13696,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_BFS_BFS_pass1_indexed_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_BFS_BFS_pass1_indexed_printfs,
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
   .args = gfx125_bvh_build_BFS_BFS_pass1_indexed_args,
   .code = gfx125_bvh_build_BFS_BFS_pass1_indexed_code,
};
const char *gfx125_bvh_build_BFS_BFS_pass1_indexed_sha1 = "b6bd4e5bd9e8931087c3d35fb2baa5a222ee0731";

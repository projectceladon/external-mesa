#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_BFS_begin_batchable_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_BFS_begin_batchable_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_BFS_begin_batchable_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g26<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
and(16)         g33<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g26UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g54<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g37<1>D         g33<8,8,1>D     0x00000004UD    { align1 1H I@2 };
add(8)          g54.8<1>UW      g54<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g52<1>UD        g54<8,8,1>UW                    { align1 1H };
add(16)         g55<1>D         g52<1,1,0>D     g37<1,1,0>D     { align1 1H I@1 compacted };
mov(16)         g57<1>UD        g55<32,8,4>UB                   { align1 1H I@1 };
mov(16)         g59<1>UW        g55<32,8,4>UB                   { align1 1H };
mov(16)         g60<1>UD        g57<16,8,2>UW                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g35<1>D         g2<0,1,0>D      32D             { align1 1H compacted };
cmp.l.f0.0(16)  g50<1>UD        g35<1,1,0>UD    0x00000020UD    { align1 1H I@1 compacted };
mov(8)          g41<2>UD        g35<4,4,1>UD                    { align1 1Q };
mov(8)          g43<2>UD        g36<4,4,1>UD                    { align1 2Q };
add(16)         g39<1>D         -g50<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g41.1<2>UD      g39<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g43.1<2>UD      g40<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g45UD           g41UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(16)         g24<2>UW        g45<8,8,1>UD                    { align1 1H $1.dst };
sel.l(16)       g49<1>UW        g24<16,8,2>UW   0x0100UW        { align1 1H I@1 };
mov(16)         g21<1>UD        g49<8,8,1>UW                    { align1 1H I@1 };
cmp.l.f0.0(16)  null<1>D        g60<8,8,1>D     g21<8,8,1>D     { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
add(16)         g62<1>D         g57<1,1,0>D     g47<1,1,0>D     { align1 1H $1.dst compacted };
add(16)         g67<1>D         g2.2<0,1,0>D    52D             { align1 1H compacted };
add(16)         g83<1>D         g2<0,1,0>D      11308D          { align1 1H };
mul(16)         g86<1>D         g60<1,1,0>D     1484W           { align1 1H compacted };
mov(16)         g7<1>UD         0x00000000UD                    { align1 1H };
mov(16)         g11<1>UD        0x00000000UD                    { align1 1H };
mov(16)         g13<1>UD        0x00000000UD                    { align1 1H };
mov(16)         g104<1>UD       g62<16,8,2>UW                   { align1 1H I@7 };
mov(16)         g23<2>UW        g62<8,8,1>UD                    { align1 1H };
cmp.l.f0.0(16)  g69<1>UD        g67<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@7 compacted };
add(16)         g88<1>D         g83<1,1,0>D     g86<1,1,0>D     { align1 1H I@7 compacted };
mul(8)          acc0<1>UD       g104<8,8,1>UD   0x0058UW        { align1 1Q I@4 };
mul(16)         g65<1>D         g104<1,1,0>D    88W             { align1 1H I@5 compacted };
add(16)         g71<1>D         -g69<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@4 compacted };
mov(8)          g3<2>UD         g88<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g5<2>UD         g89<4,4,1>UD                    { align1 2Q I@5 };
mach(8)         g63<1>UD        g104<1,1,0>UD   0x00000058UD    { align1 1Q compacted AccWrEnable };
add(16)         g73<1>D         g67<1,1,0>D     g65<1,1,0>D     { align1 1H I@5 compacted };
mul(8)          acc0<1>UD       g105<8,8,1>UD   0x0058UW        { align1 2Q };
cmp.l.f0.0(16)  g75<1>UD        g73<1,1,0>UD    g67<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g79<2>UD        g73<4,4,1>UD                    { align1 1Q };
mov(8)          g81<2>UD        g74<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g85<1>UD        g83<1,1,0>UD    g2<0,1,0>UD     { align1 1H compacted };
mach(8)         g64<1>UD        g105<8,8,1>UD   0x00000058UD    { align1 2Q AccWrEnable };
cmp.l.f0.0(16)  g90<1>UD        g88<1,1,0>UD    g83<1,1,0>UD    { align1 1H compacted };
add3(16)        g77<1>D         g71<8,8,1>D     g63<8,8,1>D     -g75<1,1,1>D { align1 1H I@2 };
add3(16)        g92<1>D         -g85<8,8,1>D    g2.1<0,1,0>D    -g90<1,1,1>D { align1 1H I@2 };
mov(8)          g79.1<2>UD      g77<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g81.1<2>UD      g78<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g3.1<2>UD       g92<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g5.1<2>UD       g93<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g9UD            g79UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g3UD            g7UD            0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $3 };
add(16)         g94<1>D         g88<1,1,0>D     28D             { align1 1H compacted };
cmp.l.f0.0(16)  g96<1>UD        g94<1,1,0>UD    g88<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g100<2>UD       g94<4,4,1>UD                    { align1 1Q };
mov(8)          g102<2>UD       g95<4,4,1>UD                    { align1 2Q };
add(16)         g98<1>D         -g96<1,1,0>D    g92<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g100.1<2>UD     g98<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g102.1<2>UD     g99<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g100UD          g104UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };
shl(16)         g101<1>D        g60<8,8,1>D     0x00000002UD    { align1 1H $4.src };
mov(16)         g119<1>UD       0x00000000UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g103<1>D        g2<0,1,0>D      g101<1,1,0>D    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g105<1>UD       g103<1,1,0>UD   g2<0,1,0>UD     { align1 1H I@1 compacted };
add(16)         g109<1>D        g103<1,1,0>D    40D             { align1 1H compacted };
add(16)         g107<1>D        -g105<1,1,0>D   g2.1<0,1,0>D    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g111<1>UD       g109<1,1,0>UD   g103<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g115<2>UD       g109<4,4,1>UD                   { align1 1Q };
mov(8)          g117<2>UD       g110<4,4,1>UD                   { align1 2Q };
add(16)         g113<1>D        -g111<1,1,0>D   g107<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g115.1<2>UD     g113<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g117.1<2>UD     g114<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g115UD          g119UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $5 };
add(16)         g116<1>D        g88<1,1,0>D     16D             { align1 1H $5.src compacted };
mov(16)         g15<1>UD        0x00000000UD                    { align1 1H };
mov(16)         g17<1>UD        0x00000000UD                    { align1 1H };
mov(16)         g19<1>UD        0x00000000UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g118<1>UD       g116<1,1,0>UD   g88<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g122<2>UD       g116<4,4,1>UD                   { align1 1Q };
mov(8)          g124<2>UD       g117<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g120<1>D        -g118<1,1,0>D   g92<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g122.1<2>UD     g120<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g124.1<2>UD     g121<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g122UD          g15UD           0x08002584                0x00000180
                            ugm MsgDesc: ( store, a64, d32, V3, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 6 flat )  base_offset 0  { align1 1H $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g123<1>D        g9<1,1,0>D      511D            { align1 1H $3.src compacted };
add(16)         g125<1>D        g103<1,1,0>D    1068D           { align1 1H $6.src compacted };
shr(16)         g120<1>UD       g123<1,1,0>UD   0x00000009UD    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g3<1>UD         g125<1,1,0>UD   g103<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g7<2>UD         g125<4,4,1>UD                   { align1 1Q $3.src };
mov(8)          g9<2>UD         g126<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g5<1>D          -g3<1,1,0>D     g107<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g7.1<2>UD       g5<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g9.1<2>UD       g6<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g7UD            g120UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
add(16)         g8<1>D          g2<0,1,0>D      2092D           { align1 1H $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g10<1>UD        g8<1,1,0>UD     0x0000082cUD    { align1 1H I@1 compacted };
add(16)         g12<1>D         g8<1,1,0>D      g101<1,1,0>D    { align1 1H $3.src compacted };
mov(16)         g122<2>UW       g23<16,8,2>UW                   { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g14<1>UD        g12<1,1,0>UD    g8<1,1,0>UD     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g25<2>UD        g12<4,4,1>UD                    { align1 1Q };
mov(8)          g27<2>UD        g13<4,4,1>UD                    { align1 2Q };
mov(16)         g122.1<2>UW     g59<8,8,1>UW                    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add3(16)        g16<1>D         -g10<8,8,1>D    g2.1<0,1,0>D    -g14<1,1,1>D { align1 1H I@4 };
mov(8)          g25.1<2>UD      g16<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g27.1<2>UD      g17<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g25UD           g122UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g120<1>UD       0x00000000UD                    { align1 1H $1.src };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g76<1>D         0D                              { align1 WE_all 1H I@2 };
mov(16)         g76<1>D         g120<8,8,1>D                    { align1 1H };
cmp.z.f0.0(16)  null<1>W        g59<16,16,1>W   0W              { align1 1H I@7 };
add(8)          g76.1<2>D       g76<8,4,2>D     g76.1<8,4,2>D   { align1 WE_all 1Q I@2 };
add(4)          g76.2<4>D       g76.1<8,2,4>D   g76.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g76.3<4>D       g76.1<8,2,4>D   g76.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g76.4<1>D       g76.3<0,1,0>D   g76.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g77.4<1>D       g77.3<0,1,0>D   g77.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(8)          g77<1>D         g76.7<0,1,0>D   g77<1,1,0>D     { align1 WE_all 1Q I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g26<1>UD        g47<16,8,2>UW                   { align1 1H $1.dst };
mov(16)         g28<1>UD        g45<16,8,2>UW                   { align1 1H $0.src };
add(16)         g30<1>D         g2<0,1,0>D      24D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
mov(16)         g3<1>UD         g77.7<0,1,0>UD                  { align1 1H };
add(16)         g9<1>D          g26<1,1,0>D     g21<1,1,0>D     { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g7<1>D          g28<1,1,0>D     -g21<1,1,0>D    { align1 1H I@4 compacted };
cmp.l.f0.0(16)  g35<1>UD        g30<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@4 compacted };
mov(8)          g39<2>UD        g30<4,4,1>UD                    { align1 1Q };
mov(8)          g41<2>UD        g31<4,4,1>UD                    { align1 2Q $1.src };
cmp.l.f0.0(16)  g43<1>D         g21<1,1,0>D     g28<1,1,0>D     { align1 1H $1.src compacted };
add(16)         g50<1>D         -g35<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@4 compacted };
mov(16)         g5<1>D          -g43<8,8,1>D                    { align1 1H I@2 };
mov(8)          g39.1<2>UD      g50<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g41.1<2>UD      g51<4,4,1>UD                    { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g39UD           g3UD            0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $1 };
add(16)         g44<1>D         g2<0,1,0>D      1064D           { align1 1H compacted };
cmp.l.f0.0(16)  g46<1>UD        g44<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g54<2>UD        g44<4,4,1>UD                    { align1 1Q };
mov(8)          g56<2>UD        g45<4,4,1>UD                    { align1 2Q };
add(16)         g48<1>D         -g46<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g54.1<2>UD      g48<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g56.1<2>UD      g49<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g54UD           g21UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $7 };

LABEL3:
endif(16)       JIP:  LABEL4                                    { align1 1H };

LABEL4:
add(16)         g55<1>D         g2<0,1,0>D      11308D          { align1 1H $7.src };
shl(16)         g29<1>D         g52<8,8,1>D     0x00000002UD    { align1 1H };
mov(16)         g27<1>UD        g33<8,8,1>UD                    { align1 1H $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(16)  g57<1>UD        g55<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@3 compacted };
add(16)         g59<1>D         -g57<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@1 compacted };

LABEL10:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.ge.f0.0(16) null<1>UD       g27<8,8,1>UD    g21<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL5        UIP:  LABEL5              { align1 1H };
mul(16)         g61<1>D         g27<1,1,0>D     1484W           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g24<1>UD        g29<8,8,1>UD                    { align1 1H I@6 };
add(16)         g63<1>D         g55<1,1,0>D     g61<1,1,0>D     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g65<1>UD        g63<1,1,0>UD    g55<1,1,0>UD    { align1 1H I@1 compacted };
add(16)         g69<1>D         g63<1,1,0>D     44D             { align1 1H compacted };
add(16)         g75<1>D         g63<1,1,0>D     1196D           { align1 1H compacted };
add(16)         g67<1>D         -g65<1,1,0>D    g59<1,1,0>D     { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g71<1>UD        g69<1,1,0>UD    g63<1,1,0>UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g77<1>UD        g75<1,1,0>UD    0x000004acUD    { align1 1H compacted };
add(16)         g73<1>D         -g71<1,1,0>D    g67<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g79<1>D         -g77<1,1,0>D    g67<1,1,0>D     { align1 1H I@2 compacted };

LABEL7:
cmp.ge.f0.0(16) null<1>UD       g24<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL6        UIP:  LABEL6              { align1 1H };
shl(16)         g81<1>D         g24<8,8,1>D     0x00000002UD    { align1 1H $2.src };
mov(16)         g4<1>UD         0x00000000UD                    { align1 1H $1.src };
add(16)         g83<1>D         g75<1,1,0>D     g81<1,1,0>D     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g85<1>UD        g83<1,1,0>UD    g75<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g89<2>UD        g83<4,4,1>UD                    { align1 1Q $8.src };
mov(8)          g91<2>UD        g84<4,4,1>UD                    { align1 2Q };
add(16)         g87<1>D         -g85<1,1,0>D    g79<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g89.1<2>UD      g87<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g91.1<2>UD      g88<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g89UD           g4UD            0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };
add3(16)        g90<1>D         0x0004UW        g81<8,8,1>D     g75<1,1,1>D { align1 1H $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
cmp.l.f0.0(16)  g92<1>UD        g90<1,1,0>UD    g75<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g96<2>UD        g90<4,4,1>UD                    { align1 1Q $9.src };
mov(8)          g98<2>UD        g91<4,4,1>UD                    { align1 2Q };
add(16)         g94<1>D         -g92<1,1,0>D    g79<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g96.1<2>UD      g94<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g98.1<2>UD      g95<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g96UD           g4UD            0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $9 };
add3(16)        g97<1>D         0x0008UW        g81<8,8,1>D     g75<1,1,1>D { align1 1H $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g99<1>UD        g97<1,1,0>UD    g75<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g103<2>UD       g97<4,4,1>UD                    { align1 1Q $10.src };
mov(8)          g105<2>UD       g98<4,4,1>UD                    { align1 2Q };
add(16)         g101<1>D        -g99<1,1,0>D    g79<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g103.1<2>UD     g101<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g105.1<2>UD     g102<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g103UD          g4UD            0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $10 };
add3(16)        g104<1>D        0x000cUW        g81<8,8,1>D     g75<1,1,1>D { align1 1H $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
cmp.l.f0.0(16)  g106<1>UD       g104<1,1,0>UD   g75<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g110<2>UD       g104<4,4,1>UD                   { align1 1Q $1.src };
mov(8)          g112<2>UD       g105<4,4,1>UD                   { align1 2Q $1.src };
add(16)         g108<1>D        -g106<1,1,0>D   g79<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g110.1<2>UD     g108<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g112.1<2>UD     g109<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g110UD          g4UD            0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
add(16)         g24<1>D         g24<1,1,0>D     64D             { align1 1H compacted };

LABEL6:
while(16)       JIP:  LABEL7                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g25<1>UD        g29<8,8,1>UD                    { align1 1H };

LABEL9:
cmp.ge.f0.0(16) null<1>UD       g25<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL8        UIP:  LABEL8              { align1 1H };
shl(16)         g111<1>D        g25<8,8,1>D     0x00000002UD    { align1 1H $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g19<1>UD        0x7f800000UD                    { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g113<1>D        g69<1,1,0>D     g111<1,1,0>D    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g115<1>UD       g113<1,1,0>UD   g69<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g119<2>UD       g113<4,4,1>UD                   { align1 1Q $11.src };
mov(8)          g121<2>UD       g114<4,4,1>UD                   { align1 2Q $0.src };
add(16)         g117<1>D        -g115<1,1,0>D   g73<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g119.1<2>UD     g117<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g121.1<2>UD     g118<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g119UD          g19UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $11 };
add3(16)        g120<1>D        0x0004UW        g111<8,8,1>D    g69<1,1,1>D { align1 1H $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g122<1>UD       g120<1,1,0>UD   g69<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g1<2>UD         g120<4,4,1>UD                   { align1 1Q };
mov(8)          g3<2>UD         g121<4,4,1>UD                   { align1 2Q $1.src };
add(16)         g124<1>D        -g122<1,1,0>D   g73<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g1.1<2>UD       g124<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g3.1<2>UD       g125<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g1UD            g19UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };
add3(16)        g2<1>D          0x0008UW        g111<8,8,1>D    g69<1,1,1>D { align1 1H $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g4<1>UD         g2<1,1,0>UD     g69<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g8<2>UD         g2<4,4,1>UD                     { align1 1Q $1.src };
mov(8)          g10<2>UD        g3<4,4,1>UD                     { align1 2Q $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g6<1>D          -g4<1,1,0>D     g73<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g8.1<2>UD       g6<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g10.1<2>UD      g7<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g8UD            g19UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
add3(16)        g9<1>D          0x000cUW        g111<8,8,1>D    g69<1,1,1>D { align1 1H $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g11<1>UD        g9<1,1,0>UD     g69<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g15<2>UD        g9<4,4,1>UD                     { align1 1Q $6.src };
mov(8)          g17<2>UD        g10<4,4,1>UD                    { align1 2Q $6.src };
add(16)         g13<1>D         -g11<1,1,0>D    g73<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g15.1<2>UD      g13<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g17.1<2>UD      g14<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g15UD           g19UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };
add(16)         g25<1>D         g25<1,1,0>D     64D             { align1 1H compacted };

LABEL8:
while(16)       JIP:  LABEL9                                    { align1 1H };
add(16)         g27<1>D         g27<1,1,0>D     16D             { align1 1H compacted };

LABEL5:
while(16)       JIP:  LABEL10                                   { align1 1H };
nop                                                             ;

LABEL14:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.ge.f0.0(16) null<1>UD       g33<8,8,1>UD    g21<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL11       UIP:  LABEL11             { align1 1H };
mul(16)         g16<1>D         g33<1,1,0>D     1484W           { align1 1H $6.src compacted };
mov(16)         g31<1>UD        g29<8,8,1>UD                    { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g18<1>D         g55<1,1,0>D     g16<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
cmp.l.f0.0(16)  g23<1>UD        g18<1,1,0>UD    g55<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
add(16)         g25<1>D         g18<1,1,0>D     1388D           { align1 1H compacted };
cmp.l.f0.0(16)  g27<1>UD        g25<1,1,0>UD    g18<1,1,0>UD    { align1 1H I@1 compacted };
add3(16)        g35<1>D         -g23<8,8,1>D    g59<8,8,1>D     -g27<1,1,1>D { align1 1H I@1 };

LABEL13:
cmp.ge.f0.0(16) null<1>UD       g31<8,8,1>UD    0x00000018UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL12       UIP:  LABEL12             { align1 1H };
shl(16)         g50<1>D         g31<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g23<1>UD        0x7f800000UD                    { align1 1H $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g39<1>D         g25<1,1,0>D     g50<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g41<1>UD        g39<1,1,0>UD    g25<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g45<2>UD        g39<4,4,1>UD                    { align1 1Q $13.src };
mov(8)          g47<2>UD        g40<4,4,1>UD                    { align1 2Q $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g43<1>D         -g41<1,1,0>D    g35<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g45.1<2>UD      g43<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g47.1<2>UD      g44<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g45UD           g23UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $13 };
add3(16)        g46<1>D         0x0004UW        g50<8,8,1>D     g25<1,1,1>D { align1 1H $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
cmp.l.f0.0(16)  g48<1>UD        g46<1,1,0>UD    g25<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g61<2>UD        g46<4,4,1>UD                    { align1 1Q $14.src };
mov(8)          g63<2>UD        g47<4,4,1>UD                    { align1 2Q };
add(16)         g37<1>D         -g48<1,1,0>D    g35<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g61.1<2>UD      g37<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g63.1<2>UD      g38<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g61UD           g23UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $14 };
add3(16)        g62<1>D         0x0008UW        g50<8,8,1>D     g25<1,1,1>D { align1 1H $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
cmp.l.f0.0(16)  g64<1>UD        g62<1,1,0>UD    g25<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g68<2>UD        g62<4,4,1>UD                    { align1 1Q $15.src };
mov(8)          g70<2>UD        g63<4,4,1>UD                    { align1 2Q };
add(16)         g66<1>D         -g64<1,1,0>D    g35<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g68.1<2>UD      g66<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g70.1<2>UD      g67<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g68UD           g23UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $15 };
add3(16)        g69<1>D         0x000cUW        g50<8,8,1>D     g25<1,1,1>D { align1 1H $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
cmp.l.f0.0(16)  g71<1>UD        g69<1,1,0>UD    g25<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(8)          g75<2>UD        g69<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $12.src };
mov(8)          g77<2>UD        g70<4,4,1>UD                    { align1 2Q };
add(16)         g73<1>D         -g71<1,1,0>D    g35<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g75.1<2>UD      g73<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g77.1<2>UD      g74<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g75UD           g23UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $12 };
add(16)         g31<1>D         g31<1,1,0>D     64D             { align1 1H compacted };

LABEL12:
while(16)       JIP:  LABEL13                                   { align1 1H };
add(16)         g33<1>D         g33<1,1,0>D     16D             { align1 1H compacted };

LABEL11:
while(16)       JIP:  LABEL14                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_BFS_begin_batchable_code[] = {
    0x80000065, 0x1a058220, 0x02000004, 0xffffffc0,
    0xe0210065, 0x0ff10043, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa001a0c, 0x00340000, 0x80030061, 0x36054410,
    0x00000000, 0x76543210, 0x00041a69, 0x25058660,
    0x02462105, 0x00000004, 0x64361a40, 0x00803695,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x34050120, 0x00463605, 0x00000000,
    0xa0371940, 0x25003402, 0x00041961, 0x39050020,
    0x00663707, 0x00000000, 0x00040061, 0x3b050010,
    0x00663707, 0x00000000, 0x00041a61, 0x3c050120,
    0x00563906, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa0230040, 0x02010203,
    0xe7321970, 0x02002303, 0x00030061, 0x29060220,
    0x00342305, 0x00000000, 0x00130061, 0x2b060220,
    0x00342405, 0x00000000, 0xa0271b40, 0x02123212,
    0x00031961, 0x29260220, 0x00342705, 0x00000000,
    0x00131a61, 0x2b260220, 0x00342805, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x2d240000, 0xfb002924, 0x00040000,
    0x00042161, 0x18060210, 0x00462d05, 0x00000000,
    0x00041962, 0x31058110, 0x51561806, 0x01000100,
    0x00041961, 0x15050120, 0x00463105, 0x00000000,
    0x00041970, 0x00010660, 0x56463c05, 0x00461505,
    0x01040022, 0x0001c060, 0x00000600, 0x000005f0,
    0xa03e2140, 0x2f003902, 0xa0430040, 0x03410243,
    0x00040040, 0x53058660, 0x06000204, 0x00002c2c,
    0x60560041, 0x5cc03c02, 0x00040061, 0x07054220,
    0x00000000, 0x00000000, 0x00040061, 0x0b054220,
    0x00000000, 0x00000000, 0x00040061, 0x0d054220,
    0x00000000, 0x00000000, 0x00041f61, 0x68050120,
    0x00563e06, 0x00000000, 0x00040061, 0x17060210,
    0x00463e05, 0x00000000, 0x27451f70, 0x0210432b,
    0xa0581f40, 0x56005302, 0x00031c41, 0x20018220,
    0x01466805, 0x00580058, 0x60411d41, 0x05806802,
    0xa0471c40, 0x0212451a, 0x00031c61, 0x03060220,
    0x00345805, 0x00000000, 0x00131d61, 0x05060220,
    0x00345905, 0x00000000, 0xfe3f0049, 0x05806803,
    0xa0491d40, 0x41004302, 0x00130041, 0x20018220,
    0x01466905, 0x00580058, 0x274b1a70, 0x43004903,
    0x00030061, 0x4f060220, 0x00344905, 0x00000000,
    0x00130061, 0x51060220, 0x00344a05, 0x00000000,
    0x27550070, 0x02105303, 0x00130049, 0x40058222,
    0x02466905, 0x00000058, 0x275a0070, 0x53005803,
    0x00041a52, 0x4d040e68, 0x0e2e4705, 0x4b053f05,
    0x00041a52, 0x5c042e68, 0x06265505, 0x5a050224,
    0x00031a61, 0x4f260220, 0x00344d05, 0x00000000,
    0x00131b61, 0x51260220, 0x00344e05, 0x00000000,
    0x00031b61, 0x03260220, 0x00345c05, 0x00000000,
    0x00131c61, 0x05260220, 0x00345d05, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x09140000, 0xfb004f24, 0x00000000,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x00000000, 0xfb080324, 0x000c0744,
    0xa05e0040, 0x01c05803, 0x27601970, 0x58005e03,
    0x00030061, 0x64060220, 0x00345e05, 0x00000000,
    0x00130061, 0x66060220, 0x00345f05, 0x00000000,
    0xa0621b40, 0x5c026002, 0x00031961, 0x64260220,
    0x00346205, 0x00000000, 0x00131a61, 0x66260220,
    0x00346305, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xfb086424, 0x00006814, 0x00043469, 0x65058660,
    0x02463c05, 0x00000002, 0x00040061, 0x77054220,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xa0671a40, 0x65010202,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x27691970, 0x02106703, 0xa06d0040, 0x02806703,
    0xa06b1a40, 0x02126912, 0x276f1a70, 0x67006d03,
    0x00030061, 0x73060220, 0x00346d05, 0x00000000,
    0x00130061, 0x75060220, 0x00346e05, 0x00000000,
    0xa0711b40, 0x6b026f02, 0x00031961, 0x73260220,
    0x00347105, 0x00000000, 0x00131a61, 0x75260220,
    0x00347205, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x00000000,
    0xfb087324, 0x00007714, 0xa0743540, 0x01005803,
    0x00040061, 0x0f054220, 0x00000000, 0x00000000,
    0x00040061, 0x11054220, 0x00000000, 0x00000000,
    0x00040061, 0x13054220, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x27761c70, 0x58007403, 0x00030061, 0x7a060220,
    0x00347405, 0x00000000, 0x00130061, 0x7c060220,
    0x00347505, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa0781b40, 0x5c027602,
    0x00031961, 0x7a260220, 0x00347805, 0x00000000,
    0x00131a61, 0x7c260220, 0x00347905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xfb087a24, 0x00080f34,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa07b3340, 0x1ff00903, 0xa07d3640, 0x42c06703,
    0xe0781a68, 0x00907b03, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x27031a70, 0x67007d03,
    0x00033361, 0x07060220, 0x00347d05, 0x00000000,
    0x00130061, 0x09060220, 0x00347e05, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xa0051b40, 0x6b020302, 0x00031961, 0x07260220,
    0x00340505, 0x00000000, 0x00131a61, 0x09260220,
    0x00340605, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb080724, 0x00007814, 0x00043140, 0x08058660,
    0x06000204, 0x0000082c, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xe70a1970, 0x82c00803,
    0xa00c3340, 0x65000802, 0x00043661, 0x7a060110,
    0x00561706, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x270e1a70, 0x08000c03,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x19060220, 0x00340c05, 0x00000000,
    0x00130061, 0x1b060220, 0x00340d05, 0x00000000,
    0x00041c61, 0x7a160110, 0x00463b05, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041c52, 0x10042e68, 0x06260a05, 0x0e050224,
    0x00031961, 0x19260220, 0x00341005, 0x00000000,
    0x00131a61, 0x1b260220, 0x00341105, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb081924, 0x00007a14,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00043161, 0x78054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80041a61, 0x4c054660, 0x00000000, 0x00000000,
    0x00040061, 0x4c050660, 0x00467805, 0x00000000,
    0x00041f70, 0x00018550, 0x15583b05, 0x00000000,
    0x80031a40, 0x4c260660, 0x06444c06, 0x00444c26,
    0x80021940, 0x4c470660, 0x06424c27, 0x00424c47,
    0x80021940, 0x4c670660, 0x06424c27, 0x00424c67,
    0x80021940, 0x4c850660, 0x06004c64, 0x00344c85,
    0x80021a40, 0x4d850660, 0x06004d64, 0x00344d85,
    0xa44d1940, 0x4d014c82, 0x01040022, 0x0001c060,
    0x00000188, 0x00000188, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00042161, 0x1a050120,
    0x00562f06, 0x00000000, 0x00043061, 0x1c050120,
    0x00562d06, 0x00000000, 0xa01e0040, 0x01810203,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x03050220, 0x00004de4, 0x00000000,
    0xa0091c40, 0x15001a02, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0071c40, 0x15201c02,
    0x27231c70, 0x02101e03, 0x00030061, 0x27060220,
    0x00341e05, 0x00000000, 0x00133161, 0x29060220,
    0x00341f05, 0x00000000, 0xa72b3170, 0x1c001502,
    0xa0321c40, 0x02122312, 0x00041a61, 0x05052660,
    0x00462b05, 0x00000000, 0x00031a61, 0x27260220,
    0x00343205, 0x00000000, 0x00131b61, 0x29260220,
    0x00343305, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb082724, 0x000c0344, 0xa02c0040, 0x42810203,
    0x272e1970, 0x02102c03, 0x00030061, 0x36060220,
    0x00342c05, 0x00000000, 0x00130061, 0x38060220,
    0x00342d05, 0x00000000, 0xa0301b40, 0x02122e12,
    0x00031961, 0x36260220, 0x00343005, 0x00000000,
    0x00131a61, 0x38260220, 0x00343105, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x00000000, 0xfb083624, 0x00001514,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00043740, 0x37058660, 0x06000204, 0x00002c2c,
    0x00040069, 0x1d058660, 0x02463405, 0x00000002,
    0x00043061, 0x1b050220, 0x00462105, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x27391b70, 0x02103703, 0xa03b1940, 0x02123912,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00041a70, 0x00010220, 0x42461b05, 0x00461505,
    0x01040028, 0x0001c660, 0x000006c8, 0x000006c8,
    0x603d0041, 0x5cc01b02, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00041e61, 0x18050220,
    0x00461d05, 0x00000000, 0xa03f1a40, 0x3d003702,
    0x27411970, 0x37003f03, 0xa0450040, 0x02c03f03,
    0xa04b0040, 0x4ac03f03, 0xa0431b40, 0x3b024102,
    0x27471b70, 0x3f004503, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xe74d0070, 0x4ac04b03,
    0xa0491a40, 0x43024702, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa04f1a40, 0x43024d02,
    0x00041a70, 0x00018220, 0x42461805, 0x00000030,
    0x01040028, 0x0001c660, 0x000002a0, 0x000002a0,
    0x00043269, 0x51058660, 0x02461805, 0x00000002,
    0x00043161, 0x04054220, 0x00000000, 0x00000000,
    0xa0531a40, 0x51004b02, 0x27551970, 0x4b005303,
    0x00033861, 0x59060220, 0x00345305, 0x00000000,
    0x00130061, 0x5b060220, 0x00345405, 0x00000000,
    0xa0571b40, 0x4f025502, 0x00031961, 0x59260220,
    0x00345705, 0x00000000, 0x00131a61, 0x5b260220,
    0x00345805, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xfb085924, 0x00000414, 0x00043852, 0x5a044160,
    0x0e0e0004, 0x4b055105, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x275c1970, 0x4b005a03,
    0x00033961, 0x60060220, 0x00345a05, 0x00000000,
    0x00130061, 0x62060220, 0x00345b05, 0x00000000,
    0xa05e1b40, 0x4f025c02, 0x00031961, 0x60260220,
    0x00345e05, 0x00000000, 0x00131a61, 0x62260220,
    0x00345f05, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x00000000,
    0xfb086024, 0x00000414, 0x00043952, 0x61044160,
    0x0e0e0008, 0x4b055105, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x27631970, 0x4b006103,
    0x00033a61, 0x67060220, 0x00346105, 0x00000000,
    0x00130061, 0x69060220, 0x00346205, 0x00000000,
    0xa0651b40, 0x4f026302, 0x00031961, 0x67260220,
    0x00346505, 0x00000000, 0x00131a61, 0x69260220,
    0x00346605, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044a31, 0x00000000,
    0xfb086724, 0x00000414, 0x00043a52, 0x68044160,
    0x0e0e000c, 0x4b055105, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x276a1970, 0x4b006803,
    0x00033161, 0x6e060220, 0x00346805, 0x00000000,
    0x00133161, 0x70060220, 0x00346905, 0x00000000,
    0xa06c1b40, 0x4f026a02, 0x00031961, 0x6e260220,
    0x00346c05, 0x00000000, 0x00131a61, 0x70260220,
    0x00346d05, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb086e24, 0x00000414, 0xa0180040, 0x04001803,
    0x00040027, 0x00014060, 0x00000000, 0xfffffd50,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x19050220, 0x00461d05, 0x00000000,
    0x00041970, 0x00018220, 0x42461905, 0x00000120,
    0x01040028, 0x0001c660, 0x00000310, 0x00000310,
    0x00043169, 0x6f058660, 0x02461905, 0x00000002,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00043661, 0x13054220, 0x00000000, 0x7f800000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa0711a40, 0x6f004502, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x27731970, 0x45007103,
    0x00033b61, 0x77060220, 0x00347105, 0x00000000,
    0x00133061, 0x79060220, 0x00347205, 0x00000000,
    0xa0751b40, 0x49027302, 0x00031961, 0x77260220,
    0x00347505, 0x00000000, 0x00131a61, 0x79260220,
    0x00347605, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x00000000,
    0xfb087724, 0x00001314, 0x00043b52, 0x78044160,
    0x0e0e0004, 0x45056f05, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x277a1970, 0x45007803,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x01060220, 0x00347805, 0x00000000,
    0x00133161, 0x03060220, 0x00347905, 0x00000000,
    0xa07c1b40, 0x49027a02, 0x00031961, 0x01260220,
    0x00347c05, 0x00000000, 0x00131a61, 0x03260220,
    0x00347d05, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x00000000,
    0xfb080124, 0x00001314, 0x00043052, 0x02044160,
    0x0e0e0008, 0x45056f05, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x27041970, 0x45000203,
    0x00033161, 0x08060220, 0x00340205, 0x00000000,
    0x00133161, 0x0a060220, 0x00340305, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa0061b40, 0x49020402, 0x00031961, 0x08260220,
    0x00340605, 0x00000000, 0x00131a61, 0x0a260220,
    0x00340705, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb080824, 0x00001314, 0x00043152, 0x09044160,
    0x0e0e000c, 0x45056f05, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x270b1970, 0x45000903,
    0x00033661, 0x0f060220, 0x00340905, 0x00000000,
    0x00133661, 0x11060220, 0x00340a05, 0x00000000,
    0xa00d1b40, 0x49020b02, 0x00031961, 0x0f260220,
    0x00340d05, 0x00000000, 0x00131a61, 0x11260220,
    0x00340e05, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xfb080f24, 0x00001314, 0xa0190040, 0x04001903,
    0x00040027, 0x00014060, 0x00000000, 0xfffffce0,
    0xa01b0040, 0x01001b03, 0x00040027, 0x00014060,
    0x00000000, 0xfffff918, 0x00000060, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00041a70, 0x00010220,
    0x42462105, 0x00461505, 0x01040028, 0x0001c660,
    0x000003c0, 0x000003c0, 0x60103641, 0x5cc02102,
    0x00041f61, 0x1f050220, 0x00461d05, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa0121a40, 0x10003702, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x27171970, 0x37001203,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0xa0190040, 0x56c01203, 0x271b1970, 0x12001903,
    0x00041952, 0x23042e68, 0x0e2e1705, 0x1b053b05,
    0x00041a70, 0x00018220, 0x42461f05, 0x00000018,
    0x01040028, 0x0001c660, 0x00000300, 0x00000300,
    0x00040069, 0x32058660, 0x02461f05, 0x00000002,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x00043c61, 0x17054220, 0x00000000, 0x7f800000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa0271a40, 0x32001902, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x27291970, 0x19002703,
    0x00033d61, 0x2d060220, 0x00342705, 0x00000000,
    0x00132161, 0x2f060220, 0x00342805, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa02b1b40, 0x23022902, 0x00031961, 0x2d260220,
    0x00342b05, 0x00000000, 0x00131a61, 0x2f260220,
    0x00342c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044d31, 0x00000000,
    0xfb082d24, 0x00001714, 0x00043d52, 0x2e044160,
    0x0e0e0004, 0x19053205, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x27301970, 0x19002e03,
    0x00033e61, 0x3d060220, 0x00342e05, 0x00000000,
    0x00130061, 0x3f060220, 0x00342f05, 0x00000000,
    0xa0251b40, 0x23023002, 0x00031961, 0x3d260220,
    0x00342505, 0x00000000, 0x00131a61, 0x3f260220,
    0x00342605, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044e31, 0x00000000,
    0xfb083d24, 0x00001714, 0x00043e52, 0x3e044160,
    0x0e0e0008, 0x19053205, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x27401970, 0x19003e03,
    0x00033f61, 0x44060220, 0x00343e05, 0x00000000,
    0x00130061, 0x46060220, 0x00343f05, 0x00000000,
    0xa0421b40, 0x23024002, 0x00031961, 0x44260220,
    0x00344205, 0x00000000, 0x00131a61, 0x46260220,
    0x00344305, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044f31, 0x00000000,
    0xfb084424, 0x00001714, 0x00043f52, 0x45044160,
    0x0e0e000c, 0x19053205, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x27471970, 0x19004503,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x4b060220, 0x00344505, 0x00000000,
    0x80103c01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x4d060220, 0x00344605, 0x00000000,
    0xa0491b40, 0x23024702, 0x00031961, 0x4b260220,
    0x00344905, 0x00000000, 0x00131a61, 0x4d260220,
    0x00344a05, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x00000000,
    0xfb084b24, 0x00001714, 0xa01f0040, 0x04001f03,
    0x00040027, 0x00014060, 0x00000000, 0xfffffcf0,
    0xa0210040, 0x01002103, 0x00040027, 0x00014060,
    0x00000000, 0xfffffc20, 0x80030061, 0x7e050220,
    0x00460005, 0x00000000, 0x80040931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_BFS_begin_batchable = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 5424,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_BFS_begin_batchable_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_BFS_begin_batchable_printfs,
      .base.uses_atomic_load_store = false,
      .local_size = { 256, 1, 1 },
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
   .args = gfx125_bvh_build_BFS_begin_batchable_args,
   .code = gfx125_bvh_build_BFS_begin_batchable_code,
};
const char *gfx125_bvh_build_BFS_begin_batchable_sha1 = "27c9df2343b838325d2b1bd530ff0dd70b5d68a1";

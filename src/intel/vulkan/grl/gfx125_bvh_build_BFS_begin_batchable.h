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

and(1)          g21<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
and(16)         g117<1>UD       g0.2<0,1,0>UD   0x000000ffUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g21UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g42<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g53<1>D         g117<8,8,1>D    0x00000004UD    { align1 1H I@2 };
add(8)          g42.8<1>UW      g42<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g28<1>D         g42<8,8,1>UW                    { align1 1H };
add(16)         g57<1>D         g28<1,1,0>D     g53<1,1,0>D     { align1 1H I@1 compacted };
mov(16)         g59<1>UD        g57<32,8,4>UB                   { align1 1H I@1 };
mov(16)         g61<1>UW        g57<32,8,4>UB                   { align1 1H };
mov(16)         g62<1>UD        g59<16,8,2>UW                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g43<1>D         g2<0,1,0>D      32D             { align1 1H compacted };
cmp.l.f0.0(16)  g45<1>UD        g43<1,1,0>UD    0x00000020UD    { align1 1H I@1 compacted };
mov(8)          g13<2>UD        g43<4,4,1>UD                    { align1 1Q };
mov(8)          g15<2>UD        g44<4,4,1>UD                    { align1 2Q };
add(16)         g47<1>D         -g45<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g13.1<2>UD      g47<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g15.1<2>UD      g48<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g48UD           g13UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $0 };
mov(16)         g19<2>UW        g48<8,8,1>UD                    { align1 1H $0.dst };
sel.l(16)       g52<1>UW        g19<16,8,2>UW   0x0100UW        { align1 1H I@1 };
mov(16)         g55<1>UD        g52<8,8,1>UW                    { align1 1H I@1 };
cmp.l.f0.0(16)  null<1>D        g62<8,8,1>D     g55<8,8,1>D     { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
add(16)         g64<1>D         g59<1,1,0>D     g50<1,1,0>D     { align1 1H $0.dst compacted };
add(16)         g69<1>D         g2.2<0,1,0>D    52D             { align1 1H compacted };
add(16)         g81<1>D         g2<0,1,0>D      11308D          { align1 1H };
mul(16)         g84<1>D         g62<1,1,0>D     1484W           { align1 1H compacted };
mov(16)         g11<1>UD        0x00000000UD                    { align1 1H };
mov(16)         g15<1>UD        0x00000000UD                    { align1 1H $0.src };
mov(16)         g17<1>UD        0x00000000UD                    { align1 1H };
mov(16)         g23<1>UD        g64<16,8,2>UW                   { align1 1H I@7 };
mov(16)         g41<2>UW        g64<8,8,1>UD                    { align1 1H };
cmp.l.f0.0(16)  g71<1>UD        g69<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@7 compacted };
add(16)         g86<1>D         g81<1,1,0>D     g84<1,1,0>D     { align1 1H I@7 compacted };
mul(8)          acc0<1>UD       g23<8,8,1>UD    0x0058UW        { align1 1Q I@4 };
mul(16)         g67<1>D         g23<1,1,0>D     88W             { align1 1H I@5 compacted };
add(16)         g73<1>D         -g71<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@4 compacted };
mov(8)          g7<2>UD         g86<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g9<2>UD         g87<4,4,1>UD                    { align1 2Q I@5 };
mach(8)         g65<1>UD        g23<1,1,0>UD    0x00000058UD    { align1 1Q compacted AccWrEnable };
add(16)         g75<1>D         g69<1,1,0>D     g67<1,1,0>D     { align1 1H I@5 compacted };
mul(8)          acc0<1>UD       g24<8,8,1>UD    0x0058UW        { align1 2Q };
cmp.l.f0.0(16)  g77<1>UD        g75<1,1,0>UD    g69<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g3<2>UD         g75<4,4,1>UD                    { align1 1Q };
mov(8)          g5<2>UD         g76<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g83<1>UD        g81<1,1,0>UD    g2<0,1,0>UD     { align1 1H compacted };
mach(8)         g66<1>UD        g24<8,8,1>UD    0x00000058UD    { align1 2Q AccWrEnable };
cmp.l.f0.0(16)  g88<1>UD        g86<1,1,0>UD    g81<1,1,0>UD    { align1 1H compacted };
add3(16)        g79<1>D         g73<8,8,1>D     g65<8,8,1>D     -g77<1,1,1>D { align1 1H I@2 };
add3(16)        g90<1>D         -g83<8,8,1>D    g2.1<0,1,0>D    -g88<1,1,1>D { align1 1H I@2 };
mov(8)          g3.1<2>UD       g79<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g5.1<2>UD       g80<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g7.1<2>UD       g90<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g9.1<2>UD       g91<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g13UD           g3UD            nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g7UD            g11UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $0 };
add(16)         g92<1>D         g86<1,1,0>D     28D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g94<1>UD        g92<1,1,0>UD    g86<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g19<2>UD        g92<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
mov(8)          g21<2>UD        g93<4,4,1>UD                    { align1 2Q };
add(16)         g96<1>D         -g94<1,1,0>D    g90<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g19.1<2>UD      g96<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g21.1<2>UD      g97<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g19UD           g23UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $2 };
shl(16)         g97<1>D         g62<8,8,1>D     0x00000002UD    { align1 1H };
mov(16)         g32<1>D         0D                              { align1 1H };
add(16)         g99<1>D         g2<0,1,0>D      g97<1,1,0>D     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g101<1>UD       g99<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
add(16)         g105<1>D        g99<1,1,0>D     40D             { align1 1H compacted };
add(16)         g103<1>D        -g101<1,1,0>D   g2.1<0,1,0>D    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g107<1>UD       g105<1,1,0>UD   g99<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g24<2>UD        g105<4,4,1>UD                   { align1 1Q $2.src };
mov(8)          g26<2>UD        g106<4,4,1>UD                   { align1 2Q };
add(16)         g109<1>D        -g107<1,1,0>D   g103<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g24.1<2>UD      g109<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g26.1<2>UD      g110<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g24UD           g32UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $3 };
add(16)         g110<1>D        g86<1,1,0>D     16D             { align1 1H compacted };
mov(16)         g19<1>D         0D                              { align1 1H $2.src };
mov(16)         g21<1>D         0D                              { align1 1H $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g23<1>D         0D                              { align1 1H $2.src };
cmp.l.f0.0(16)  g112<1>UD       g110<1,1,0>UD   g86<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g33<2>UD        g110<4,4,1>UD                   { align1 1Q $3.src };
mov(8)          g35<2>UD        g111<4,4,1>UD                   { align1 2Q };
add(16)         g114<1>D        -g112<1,1,0>D   g90<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g33.1<2>UD      g114<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g35.1<2>UD      g115<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g33UD           g19UD           0x08007586                0x00000180
                            ugm MsgDesc: ( store_cmask, a64, d32, xyz, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 6 flat )  base_offset 0  { align1 1H $0 };
add(16)         g115<1>D        g13<1,1,0>D     511D            { align1 1H $0.src compacted };
add(16)         g30<1>D         g99<1,1,0>D     1068D           { align1 1H compacted };
shr(16)         g38<1>UD        g115<1,1,0>UD   0x00000009UD    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g119<1>UD       g30<1,1,0>UD    g99<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g34<2>UD        g30<4,4,1>UD                    { align1 1Q $0.src };
mov(8)          g36<2>UD        g31<4,4,1>UD                    { align1 2Q $0.src };
add(16)         g121<1>D        -g119<1,1,0>D   g103<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g34.1<2>UD      g121<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g36.1<2>UD      g122<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g34UD           g38UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };
add(16)         g122<1>D        g2<0,1,0>D      2092D           { align1 1H };
cmp.l.f0.0(16)  g124<1>UD       g122<1,1,0>UD   0x0000082cUD    { align1 1H I@1 compacted };
add(16)         g126<1>D        g122<1,1,0>D    g97<1,1,0>D     { align1 1H compacted };
mov(16)         g52<2>UW        g41<16,8,2>UW                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g3<1>UD         g126<1,1,0>UD   g122<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g43<2>UD        g126<4,4,1>UD                   { align1 1Q };
mov(8)          g45<2>UD        g127<4,4,1>UD                   { align1 2Q };
mov(16)         g52.1<2>UW      g61<8,8,1>UW                    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add3(16)        g5<1>D          -g124<8,8,1>D   g2.1<0,1,0>D    -g3<1,1,1>D { align1 1H I@4 };
mov(8)          g43.1<2>UD      g5<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g45.1<2>UD      g6<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g43UD           g52UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $5 };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g38<1>UD        0x00000000UD                    { align1 1H $4.src };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g6<1>D          0D                              { align1 WE_all 1H I@2 };
mov(16)         g6<1>D          g38<8,8,1>D                     { align1 1H };
cmp.z.f0.0(16)  null<1>W        g61<16,16,1>W   0W              { align1 1H I@7 };
add(8)          g6.1<2>D        g6<8,4,2>D      g6.1<8,4,2>D    { align1 WE_all 1Q I@2 };
add(4)          g6.2<4>D        g6.1<8,2,4>D    g6.2<8,2,4>D    { align1 WE_all 1N I@1 };
add(4)          g6.3<4>D        g6.1<8,2,4>D    g6.3<8,2,4>D    { align1 WE_all 1N I@1 };
add(4)          g6.4<1>D        g6.3<0,1,0>D    g6.4<4,4,1>D    { align1 WE_all 1N I@1 };
add(4)          g7.4<1>D        g7.3<0,1,0>D    g7.4<4,4,1>D    { align1 WE_all 1N I@2 };
add(8)          g7<1>D          g6.7<0,1,0>D    g7<1,1,0>D      { align1 WE_all 1Q I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
mov(16)         g8<1>UD         g50<16,8,2>UW                   { align1 1H $0.dst };
mov(16)         g10<1>UD        g48<16,8,2>UW                   { align1 1H $0.src };
add(16)         g12<1>D         g2<0,1,0>D      24D             { align1 1H $0.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
mov(16)         g20<1>UD        g7.7<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g26<1>D         g8<1,1,0>D      g55<1,1,0>D     { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g24<1>D         g10<1,1,0>D     -g55<1,1,0>D    { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g14<1>UD        g12<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@4 compacted };
mov(8)          g57<2>UD        g12<4,4,1>UD                    { align1 1Q };
mov(8)          g59<2>UD        g13<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g18<1>D         g55<1,1,0>D     g10<1,1,0>D     { align1 1H $0.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g16<1>D         -g14<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g22<1>D         -g18<8,8,1>D                    { align1 1H I@2 };
mov(8)          g57.1<2>UD      g16<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g59.1<2>UD      g17<4,4,1>UD                    { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g57UD           g20UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $3 };
add(16)         g19<1>D         g2<0,1,0>D      1064D           { align1 1H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g21<1>UD        g19<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g58<2>UD        g19<4,4,1>UD                    { align1 1Q $3.src };
mov(8)          g60<2>UD        g20<4,4,1>UD                    { align1 2Q $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g23<1>D         -g21<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g58.1<2>UD      g23<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g60.1<2>UD      g24<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g58UD           g55UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };

LABEL3:
endif(16)       JIP:  LABEL4                                    { align1 1H };

LABEL4:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g24<1>D         g2<0,1,0>D      11308D          { align1 1H $0.src };
shl(16)         g37<1>D         g28<8,8,1>D     0x00000002UD    { align1 1H $4.src };
mov(16)         g35<1>UD        g117<8,8,1>UD                   { align1 1H $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g26<1>UD        g24<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@3 compacted };
add(16)         g41<1>D         -g26<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@1 compacted };

LABEL10:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.ge.f0.0(16) null<1>UD       g35<8,8,1>UD    g55<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL5        UIP:  LABEL5              { align1 1H };
mul(16)         g39<1>D         g35<1,1,0>D     1484W           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g32<1>UD        g37<8,8,1>UD                    { align1 1H I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g43<1>D         g24<1,1,0>D     g39<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g45<1>UD        g43<1,1,0>UD    g24<1,1,0>UD    { align1 1H I@1 compacted };
add(16)         g49<1>D         g43<1,1,0>D     44D             { align1 1H $0.dst compacted };
add(16)         g28<1>D         g43<1,1,0>D     1196D           { align1 1H compacted };
add(16)         g47<1>D         -g45<1,1,0>D    g41<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g51<1>UD        g49<1,1,0>UD    g43<1,1,0>UD    { align1 1H @3 $0.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g57<1>UD        g28<1,1,0>UD    0x000004acUD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g53<1>D         -g51<1,1,0>D    g47<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g59<1>D         -g57<1,1,0>D    g47<1,1,0>D     { align1 1H I@2 compacted };

LABEL7:
cmp.ge.f0.0(16) null<1>UD       g32<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL6        UIP:  LABEL6              { align1 1H };
shl(16)         g61<1>D         g32<8,8,1>D     0x00000002UD    { align1 1H $6.src };
mov(16)         g84<1>D         0D                              { align1 1H $7.src };
add(16)         g63<1>D         g28<1,1,0>D     g61<1,1,0>D     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g65<1>UD        g63<1,1,0>UD    g28<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g69<2>UD        g63<4,4,1>UD                    { align1 1Q };
mov(8)          g71<2>UD        g64<4,4,1>UD                    { align1 2Q };
add(16)         g67<1>D         -g65<1,1,0>D    g59<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g69.1<2>UD      g67<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g71.1<2>UD      g68<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g69UD           g84UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };
add3(16)        g68<1>D         0x0004UW        g61<8,8,1>D     g28<1,1,1>D { align1 1H $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
cmp.l.f0.0(16)  g70<1>UD        g68<1,1,0>UD    g28<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(8)          g86<2>UD        g68<4,4,1>UD                    { align1 1Q $9.src };
mov(8)          g88<2>UD        g69<4,4,1>UD                    { align1 2Q $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g72<1>D         -g70<1,1,0>D    g59<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g86.1<2>UD      g72<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g88.1<2>UD      g73<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g86UD           g84UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $9 };
add3(16)        g73<1>D         0x0008UW        g61<8,8,1>D     g28<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(16)  g75<1>UD        g73<1,1,0>UD    g28<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g87<2>UD        g73<4,4,1>UD                    { align1 1Q $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $7.src };
mov(8)          g89<2>UD        g74<4,4,1>UD                    { align1 2Q $9.src };
add(16)         g77<1>D         -g75<1,1,0>D    g59<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g87.1<2>UD      g77<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g89.1<2>UD      g78<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g87UD           g84UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $10 };
add3(16)        g78<1>D         0x000cUW        g61<8,8,1>D     g28<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(16)  g80<1>UD        g78<1,1,0>UD    g28<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g88<2>UD        g78<4,4,1>UD                    { align1 1Q $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $7.src };
mov(8)          g90<2>UD        g79<4,4,1>UD                    { align1 2Q $10.src };
add(16)         g82<1>D         -g80<1,1,0>D    g59<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g88.1<2>UD      g82<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g90.1<2>UD      g83<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g88UD           g84UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $7 };
add(16)         g32<1>D         g32<1,1,0>D     64D             { align1 1H compacted };

LABEL6:
while(16)       JIP:  LABEL7                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g33<1>UD        g37<8,8,1>UD                    { align1 1H I@2 };

LABEL9:
cmp.ge.f0.0(16) null<1>UD       g33<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL8        UIP:  LABEL8              { align1 1H };
shl(16)         g83<1>D         g33<8,8,1>D     0x00000002UD    { align1 1H $7.src };
mov(16)         g106<1>D        2139095040D                     { align1 1H $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g85<1>D         g49<1,1,0>D     g83<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(16)  g87<1>UD        g85<1,1,0>UD    g49<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g91<2>UD        g85<4,4,1>UD                    { align1 1Q $7.src };
mov(8)          g93<2>UD        g86<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g89<1>D         -g87<1,1,0>D    g53<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g91.1<2>UD      g89<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g93.1<2>UD      g90<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g91UD           g106UD          0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $12 };
add3(16)        g90<1>D         0x0004UW        g83<8,8,1>D     g49<1,1,1>D { align1 1H $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
cmp.l.f0.0(16)  g92<1>UD        g90<1,1,0>UD    g49<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(8)          g108<2>UD       g90<4,4,1>UD                    { align1 1Q $13.src };
mov(8)          g110<2>UD       g91<4,4,1>UD                    { align1 2Q $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g94<1>D         -g92<1,1,0>D    g53<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g108.1<2>UD     g94<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g110.1<2>UD     g95<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g108UD          g106UD          0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $13 };
add3(16)        g95<1>D         0x0008UW        g83<8,8,1>D     g49<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
cmp.l.f0.0(16)  g97<1>UD        g95<1,1,0>UD    g49<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g109<2>UD       g95<4,4,1>UD                    { align1 1Q $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $11.src };
mov(8)          g111<2>UD       g96<4,4,1>UD                    { align1 2Q $13.src };
add(16)         g99<1>D         -g97<1,1,0>D    g53<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g109.1<2>UD     g99<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g111.1<2>UD     g100<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g109UD          g106UD          0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $14 };
add3(16)        g100<1>D        0x000cUW        g83<8,8,1>D     g49<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
cmp.l.f0.0(16)  g102<1>UD       g100<1,1,0>UD   g49<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g110<2>UD       g100<4,4,1>UD                   { align1 1Q $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $11.src };
mov(8)          g112<2>UD       g101<4,4,1>UD                   { align1 2Q $14.src };
add(16)         g104<1>D        -g102<1,1,0>D   g53<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g110.1<2>UD     g104<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g112.1<2>UD     g105<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g110UD          g106UD          0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $11 };
add(16)         g33<1>D         g33<1,1,0>D     64D             { align1 1H compacted };

LABEL8:
while(16)       JIP:  LABEL9                                    { align1 1H };
add(16)         g35<1>D         g35<1,1,0>D     16D             { align1 1H compacted };

LABEL5:
while(16)       JIP:  LABEL10                                   { align1 1H };
nop                                                             ;

LABEL14:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.ge.f0.0(16) null<1>UD       g117<8,8,1>UD   g55<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL11       UIP:  LABEL11             { align1 1H };
mul(16)         g105<1>D        g117<1,1,0>D    1484W           { align1 1H $11.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(16)         g39<1>UD        g37<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g107<1>D        g24<1,1,0>D     g105<1,1,0>D    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
cmp.l.f0.0(16)  g109<1>UD       g107<1,1,0>UD   g24<1,1,0>UD    { align1 1H I@1 compacted };
add(16)         g111<1>D        g107<1,1,0>D    1388D           { align1 1H $11.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
cmp.l.f0.0(16)  g113<1>UD       g111<1,1,0>UD   g107<1,1,0>UD   { align1 1H I@1 compacted };
add3(16)        g115<1>D        -g109<8,8,1>D   g41<8,8,1>D     -g113<1,1,1>D { align1 1H I@1 };

LABEL13:
cmp.ge.f0.0(16) null<1>UD       g39<8,8,1>UD    0x00000018UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL12       UIP:  LABEL12             { align1 1H };
shl(16)         g30<1>D         g39<8,8,1>D     0x00000002UD    { align1 1H };
mov(16)         g14<1>D         2139095040D                     { align1 1H $0.src };
add(16)         g119<1>D        g111<1,1,0>D    g30<1,1,0>D     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g121<1>UD       g119<1,1,0>UD   g111<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g2<2>UD         g119<4,4,1>UD                   { align1 1Q };
mov(8)          g4<2>UD         g120<4,4,1>UD                   { align1 2Q };
add(16)         g123<1>D        -g121<1,1,0>D   g115<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g2.1<2>UD       g123<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g4.1<2>UD       g124<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g2UD            g14UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $15 };
add3(16)        g124<1>D        0x0004UW        g30<8,8,1>D     g111<1,1,1>D { align1 1H };
cmp.l.f0.0(16)  g126<1>UD       g124<1,1,0>UD   g111<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g16<2>UD        g124<4,4,1>UD                   { align1 1Q $0.src };
mov(8)          g18<2>UD        g125<4,4,1>UD                   { align1 2Q $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g2<1>D          -g126<1,1,0>D   g115<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g16.1<2>UD      g2<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g18.1<2>UD      g3<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g16UD           g14UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };
add3(16)        g3<1>D          0x0008UW        g30<8,8,1>D     g111<1,1,1>D { align1 1H $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
cmp.l.f0.0(16)  g5<1>UD         g3<1,1,0>UD     g111<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g17<2>UD        g3<4,4,1>UD                     { align1 1Q $0.src };
mov(8)          g19<2>UD        g4<4,4,1>UD                     { align1 2Q $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g7<1>D          -g5<1,1,0>D     g115<1,1,0>D    { align1 1H $0.src compacted };
mov(8)          g17.1<2>UD      g7<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g19.1<2>UD      g8<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g17UD           g14UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };
add3(16)        g8<1>D          0x000cUW        g30<8,8,1>D     g111<1,1,1>D { align1 1H $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g10<1>UD        g8<1,1,0>UD     g111<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g18<2>UD        g8<4,4,1>UD                     { align1 1Q $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
mov(8)          g20<2>UD        g9<4,4,1>UD                     { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g12<1>D         -g10<1,1,0>D    g115<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g18.1<2>UD      g12<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g20.1<2>UD      g13<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g18UD           g14UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };
add(16)         g39<1>D         g39<1,1,0>D     64D             { align1 1H compacted };

LABEL12:
while(16)       JIP:  LABEL13                                   { align1 1H };
add(16)         g117<1>D        g117<1,1,0>D    16D             { align1 1H compacted };

LABEL11:
while(16)       JIP:  LABEL14                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_BFS_begin_batchable_code[] = {
    0x80000065, 0x15058220, 0x02000004, 0xffffffc0,
    0xe0750065, 0x0ff10043, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa00150c, 0x00340000, 0x80030061, 0x2a054410,
    0x00000000, 0x76543210, 0x00041a69, 0x35058660,
    0x02467505, 0x00000004, 0x642a1a40, 0x00802a95,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x1c050160, 0x00462a05, 0x00000000,
    0xa0391940, 0x35001c02, 0x00041961, 0x3b050020,
    0x00663907, 0x00000000, 0x00040061, 0x3d050010,
    0x00663907, 0x00000000, 0x00041a61, 0x3e050120,
    0x00563b06, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa02b0040, 0x02010203,
    0xe72d1970, 0x02002b03, 0x00030061, 0x0d060220,
    0x00342b05, 0x00000000, 0x00130061, 0x0f060220,
    0x00342c05, 0x00000000, 0xa02f1b40, 0x02122d12,
    0x00031961, 0x0d260220, 0x00342f05, 0x00000000,
    0x00131a61, 0x0f260220, 0x00343005, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x30240000, 0xfb040d24, 0x000c0000,
    0x00042061, 0x13060210, 0x00463005, 0x00000000,
    0x00041962, 0x34058110, 0x51561306, 0x01000100,
    0x00041961, 0x37050120, 0x00463405, 0x00000000,
    0x00041970, 0x00010660, 0x56463e05, 0x00463705,
    0x01040022, 0x0001c060, 0x00000580, 0x00000570,
    0xa0402040, 0x32003b02, 0xa0450040, 0x03410243,
    0x00040040, 0x51058660, 0x06000204, 0x00002c2c,
    0x60540041, 0x5cc03e02, 0x00040061, 0x0b054220,
    0x00000000, 0x00000000, 0x00043061, 0x0f054220,
    0x00000000, 0x00000000, 0x00040061, 0x11054220,
    0x00000000, 0x00000000, 0x00041f61, 0x17050120,
    0x00564006, 0x00000000, 0x00040061, 0x29060210,
    0x00464005, 0x00000000, 0x27471f70, 0x0210452b,
    0xa0561f40, 0x54005102, 0x00031c41, 0x20018220,
    0x01461705, 0x00580058, 0x60431d41, 0x05801702,
    0xa0491c40, 0x0212471a, 0x00031c61, 0x07060220,
    0x00345605, 0x00000000, 0x00131d61, 0x09060220,
    0x00345705, 0x00000000, 0xfe410049, 0x05801703,
    0xa04b1d40, 0x43004502, 0x00130041, 0x20018220,
    0x01461805, 0x00580058, 0x274d1a70, 0x45004b03,
    0x00030061, 0x03060220, 0x00344b05, 0x00000000,
    0x00130061, 0x05060220, 0x00344c05, 0x00000000,
    0x27530070, 0x02105103, 0x00130049, 0x42058222,
    0x02461805, 0x00000058, 0x27580070, 0x51005603,
    0x00041a52, 0x4f040e68, 0x0e2e4905, 0x4d054105,
    0x00041a52, 0x5a042e68, 0x06265305, 0x58050224,
    0x00031a61, 0x03260220, 0x00344f05, 0x00000000,
    0x00131b61, 0x05260220, 0x00345005, 0x00000000,
    0x00031b61, 0x07260220, 0x00345a05, 0x00000000,
    0x00131c61, 0x09260220, 0x00345b05, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x0d140000, 0xfb040324, 0x00040000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb0c0724, 0x003c0b44,
    0xa05c0040, 0x01c05603, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x275e1970, 0x56005c03,
    0x00030061, 0x13060220, 0x00345c05, 0x00000000,
    0x80103001, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x15060220, 0x00345d05, 0x00000000,
    0xa0601b40, 0x5a025e02, 0x00031961, 0x13260220,
    0x00346005, 0x00000000, 0x00131a61, 0x15260220,
    0x00346105, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xfb0c1324, 0x00041714, 0x00040069, 0x61058660,
    0x02463e05, 0x00000002, 0x00040061, 0x20054660,
    0x00000000, 0x00000000, 0xa0631a40, 0x61010202,
    0x27651970, 0x02106303, 0xa0690040, 0x02806303,
    0xa0671a40, 0x02126512, 0x276b1a70, 0x63006903,
    0x00033261, 0x18060220, 0x00346905, 0x00000000,
    0x00130061, 0x1a060220, 0x00346a05, 0x00000000,
    0xa06d1b40, 0x67026b02, 0x00031961, 0x18260220,
    0x00346d05, 0x00000000, 0x00131a61, 0x1a260220,
    0x00346e05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xfb0c1824, 0x00042014, 0xa06e0040, 0x01005603,
    0x00043261, 0x13054660, 0x00000000, 0x00000000,
    0x00043261, 0x15054660, 0x00000000, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00043261, 0x17054660, 0x00000000, 0x00000000,
    0x27701c70, 0x56006e03, 0x00033361, 0x21060220,
    0x00346e05, 0x00000000, 0x00130061, 0x23060220,
    0x00346f05, 0x00000000, 0xa0721b40, 0x5a027002,
    0x00031961, 0x21260220, 0x00347205, 0x00000000,
    0x00131a61, 0x23260220, 0x00347305, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb0c2124, 0x001c1334,
    0xa0733040, 0x1ff00d03, 0xa01e0040, 0x42c06303,
    0xe0261a68, 0x00907303, 0x27771a70, 0x63001e03,
    0x00033061, 0x22060220, 0x00341e05, 0x00000000,
    0x00133061, 0x24060220, 0x00341f05, 0x00000000,
    0xa0791b40, 0x67027702, 0x00031961, 0x22260220,
    0x00347905, 0x00000000, 0x00131a61, 0x24260220,
    0x00347a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xfb0c2224, 0x00042614, 0x00040040, 0x7a058660,
    0x06000204, 0x0000082c, 0xe77c1970, 0x82c07a03,
    0xa07e0040, 0x61007a02, 0x00040061, 0x34060110,
    0x00562906, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x27031a70, 0x7a007e03,
    0x00030061, 0x2b060220, 0x00347e05, 0x00000000,
    0x00130061, 0x2d060220, 0x00347f05, 0x00000000,
    0x00041c61, 0x34160110, 0x00463d05, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00041c52, 0x05042e68, 0x06267c05, 0x03050224,
    0x00031961, 0x2b260220, 0x00340505, 0x00000000,
    0x00131a61, 0x2d260220, 0x00340605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x00000000, 0xfb0c2b24, 0x00043414,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00043461, 0x26054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80041a61, 0x06054660, 0x00000000, 0x00000000,
    0x00040061, 0x06050660, 0x00462605, 0x00000000,
    0x00041f70, 0x00018550, 0x15583d05, 0x00000000,
    0x80031a40, 0x06260660, 0x06440606, 0x00440626,
    0x80021940, 0x06470660, 0x06420627, 0x00420647,
    0x80021940, 0x06670660, 0x06420627, 0x00420667,
    0x80021940, 0x06850660, 0x06000664, 0x00340685,
    0x80021a40, 0x07850660, 0x06000764, 0x00340785,
    0xa4071940, 0x07010682, 0x01040022, 0x0001c060,
    0x000001f8, 0x000001f8, 0x00042061, 0x08050120,
    0x00563206, 0x00000000, 0x00043061, 0x0a050120,
    0x00563006, 0x00000000, 0xa00c3040, 0x01810203,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x14050220, 0x000007e4, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xa01a1c40, 0x37000802, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa0181c40, 0x37200a02,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x270e1c70, 0x02100c03, 0x00030061, 0x39060220,
    0x00340c05, 0x00000000, 0x00130061, 0x3b060220,
    0x00340d05, 0x00000000, 0xa7123070, 0x0a003702,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa0101c40, 0x02120e12, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00041a61, 0x16052660,
    0x00461205, 0x00000000, 0x00031a61, 0x39260220,
    0x00341005, 0x00000000, 0x00131b61, 0x3b260220,
    0x00341105, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xfb0c3924, 0x003c1444, 0xa0133340, 0x42810203,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x27151970, 0x02101303, 0x00033361, 0x3a060220,
    0x00341305, 0x00000000, 0x00133361, 0x3c060220,
    0x00341405, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa0171b40, 0x02121512,
    0x00031961, 0x3a260220, 0x00341705, 0x00000000,
    0x00131a61, 0x3c260220, 0x00341805, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xfb0c3a24, 0x00043714,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00043040, 0x18058660, 0x06000204, 0x00002c2c,
    0x00043469, 0x25058660, 0x02461c05, 0x00000002,
    0x00043461, 0x23050220, 0x00467505, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x271a1b70, 0x02101803, 0xa0291940, 0x02121a12,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041a70, 0x00010220, 0x42462305, 0x00463705,
    0x01040028, 0x0001c660, 0x00000798, 0x00000798,
    0x60270041, 0x5cc02302, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00041e61, 0x20050220,
    0x00462505, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa02b1a40, 0x27001802,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x272d1970, 0x18002b03, 0xa0312040, 0x02c02b03,
    0xa01c0040, 0x4ac02b03, 0xa02f1b40, 0x29022d02,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x2733b070, 0x2b003103, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xe7391b70, 0x4ac01c03,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xa0351a40, 0x2f023302, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xa03b1a40, 0x2f023902,
    0x00041a70, 0x00018220, 0x42462005, 0x00000030,
    0x01040028, 0x0001c660, 0x000002f0, 0x000002f0,
    0x00043669, 0x3d058660, 0x02462005, 0x00000002,
    0x00043761, 0x54054660, 0x00000000, 0x00000000,
    0xa03f1a40, 0x3d001c02, 0x27411970, 0x1c003f03,
    0x00030061, 0x45060220, 0x00343f05, 0x00000000,
    0x00130061, 0x47060220, 0x00344005, 0x00000000,
    0xa0431b40, 0x3b024102, 0x00031961, 0x45260220,
    0x00344305, 0x00000000, 0x00131a61, 0x47260220,
    0x00344405, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xfb0c4524, 0x00045414, 0x00043852, 0x44044160,
    0x0e0e0004, 0x1c053d05, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x27461970, 0x1c004403,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x00033961, 0x56060220, 0x00344405, 0x00000000,
    0x00133761, 0x58060220, 0x00344505, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xa0481b40, 0x3b024602, 0x00031961, 0x56260220,
    0x00344805, 0x00000000, 0x00131a61, 0x58260220,
    0x00344905, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x00000000,
    0xfb0c5624, 0x00045414, 0x00040052, 0x49044160,
    0x0e0e0008, 0x1c053d05, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x274b1970, 0x1c004903,
    0x00033961, 0x57060220, 0x00344905, 0x00000000,
    0x80103701, 0x00000000, 0x00000000, 0x00000000,
    0x00133961, 0x59060220, 0x00344a05, 0x00000000,
    0xa04d1b40, 0x3b024b02, 0x00031961, 0x57260220,
    0x00344d05, 0x00000000, 0x00131a61, 0x59260220,
    0x00344e05, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044a31, 0x00000000,
    0xfb0c5724, 0x00045414, 0x00040052, 0x4e044160,
    0x0e0e000c, 0x1c053d05, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x27501970, 0x1c004e03,
    0x00033a61, 0x58060220, 0x00344e05, 0x00000000,
    0x80103701, 0x00000000, 0x00000000, 0x00000000,
    0x00133a61, 0x5a060220, 0x00344f05, 0x00000000,
    0xa0521b40, 0x3b025002, 0x00031961, 0x58260220,
    0x00345205, 0x00000000, 0x00131a61, 0x5a260220,
    0x00345305, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x00000000,
    0xfb0c5824, 0x00045414, 0xa0200040, 0x04002003,
    0x00040027, 0x00014060, 0x00000000, 0xfffffd00,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00041a61, 0x21050220, 0x00462505, 0x00000000,
    0x00041970, 0x00018220, 0x42462105, 0x00000120,
    0x01040028, 0x0001c660, 0x00000340, 0x00000340,
    0x00043769, 0x53058660, 0x02462105, 0x00000002,
    0x00043b61, 0x6a054660, 0x00000000, 0x7f800000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xa0551a40, 0x53003102, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x27571970, 0x31005503,
    0x00033761, 0x5b060220, 0x00345505, 0x00000000,
    0x00130061, 0x5d060220, 0x00345605, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xa0591b40, 0x35025702, 0x00031961, 0x5b260220,
    0x00345905, 0x00000000, 0x00131a61, 0x5d260220,
    0x00345a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x00000000,
    0xfb0c5b24, 0x00046a14, 0x00043c52, 0x5a044160,
    0x0e0e0004, 0x31055305, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x275c1970, 0x31005a03,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x00033d61, 0x6c060220, 0x00345a05, 0x00000000,
    0x00133b61, 0x6e060220, 0x00345b05, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0xa05e1b40, 0x35025c02, 0x00031961, 0x6c260220,
    0x00345e05, 0x00000000, 0x00131a61, 0x6e260220,
    0x00345f05, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044d31, 0x00000000,
    0xfb0c6c24, 0x00046a14, 0x00040052, 0x5f044160,
    0x0e0e0008, 0x31055305, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x27611970, 0x31005f03,
    0x00033d61, 0x6d060220, 0x00345f05, 0x00000000,
    0x80103b01, 0x00000000, 0x00000000, 0x00000000,
    0x00133d61, 0x6f060220, 0x00346005, 0x00000000,
    0xa0631b40, 0x35026102, 0x00031961, 0x6d260220,
    0x00346305, 0x00000000, 0x00131a61, 0x6f260220,
    0x00346405, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044e31, 0x00000000,
    0xfb0c6d24, 0x00046a14, 0x00040052, 0x64044160,
    0x0e0e000c, 0x31055305, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x27661970, 0x31006403,
    0x00033e61, 0x6e060220, 0x00346405, 0x00000000,
    0x80103b01, 0x00000000, 0x00000000, 0x00000000,
    0x00133e61, 0x70060220, 0x00346505, 0x00000000,
    0xa0681b40, 0x35026602, 0x00031961, 0x6e260220,
    0x00346805, 0x00000000, 0x00131a61, 0x70260220,
    0x00346905, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x00000000,
    0xfb0c6e24, 0x00046a14, 0xa0210040, 0x04002103,
    0x00040027, 0x00014060, 0x00000000, 0xfffffcb0,
    0xa0230040, 0x01002303, 0x00040027, 0x00014060,
    0x00000000, 0xfffff848, 0x00000060, 0x00000000,
    0x00000000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00041a70, 0x00010220,
    0x42467505, 0x00463705, 0x01040028, 0x0001c660,
    0x00000390, 0x00000390, 0x60693b41, 0x5cc07502,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x27050220, 0x00462505, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0xa06b1a40, 0x69001802, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x276d1970, 0x18006b03,
    0xa06f3b40, 0x56c06b03, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x27711970, 0x6b006f03,
    0x00041952, 0x73042e68, 0x0e2e6d05, 0x71052905,
    0x00041a70, 0x00018220, 0x42462705, 0x00000018,
    0x01040028, 0x0001c660, 0x000002b0, 0x000002b0,
    0x00040069, 0x1e058660, 0x02462705, 0x00000002,
    0x00043061, 0x0e054660, 0x00000000, 0x7f800000,
    0xa0771a40, 0x1e006f02, 0x27791970, 0x6f007703,
    0x00030061, 0x02060220, 0x00347705, 0x00000000,
    0x00130061, 0x04060220, 0x00347805, 0x00000000,
    0xa07b1b40, 0x73027902, 0x00031961, 0x02260220,
    0x00347b05, 0x00000000, 0x00131a61, 0x04260220,
    0x00347c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044f31, 0x00000000,
    0xfb0c0224, 0x00040e14, 0x00040052, 0x7c044160,
    0x0e0e0004, 0x6f051e05, 0x277e1970, 0x6f007c03,
    0x00033061, 0x10060220, 0x00347c05, 0x00000000,
    0x00133061, 0x12060220, 0x00347d05, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0xa0021b40, 0x73027e02, 0x00031961, 0x10260220,
    0x00340205, 0x00000000, 0x00131a61, 0x12260220,
    0x00340305, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x00000000,
    0xfb0c1024, 0x00040e14, 0x00043f52, 0x03044160,
    0x0e0e0008, 0x6f051e05, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x27051970, 0x6f000303,
    0x00033061, 0x11060220, 0x00340305, 0x00000000,
    0x00133061, 0x13060220, 0x00340405, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa0073040, 0x73020502, 0x00031961, 0x11260220,
    0x00340705, 0x00000000, 0x00131a61, 0x13260220,
    0x00340805, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x00000000,
    0xfb0c1124, 0x00040e14, 0x00043052, 0x08044160,
    0x0e0e000c, 0x6f051e05, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x270a1970, 0x6f000803,
    0x00033061, 0x12060220, 0x00340805, 0x00000000,
    0x80103001, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x14060220, 0x00340905, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa00c1b40, 0x73020a02, 0x00031961, 0x12260220,
    0x00340c05, 0x00000000, 0x00131a61, 0x14260220,
    0x00340d05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x00000000,
    0xfb0c1224, 0x00040e14, 0xa0270040, 0x04002703,
    0x00040027, 0x00014060, 0x00000000, 0xfffffd40,
    0xa0750040, 0x01007503, 0x00040027, 0x00014060,
    0x00000000, 0xfffffc50, 0x80030061, 0x7e050220,
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
      .base.program_size = 5600,
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
const char *gfx125_bvh_build_BFS_begin_batchable_sha1 = "23b5a4925e72120564c4286d16470221f7443939";

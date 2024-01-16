#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_BFS_begin_batchable_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_BFS_begin_batchable_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g103<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(8)          g31<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(16)         g41<1>D         0D                              { align1 1H };
and(16)         g32<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 1H compacted };
add(1)          g104<1>UD       g103<0,1,0>UD   0x00000000UD    { align1 WE_all 1N I@4 compacted };
add(8)          g31.8<1>UW      g31<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@4 compacted };
shl(16)         g58<1>D         g32<8,8,1>D     0x00000004UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g1UD            g104UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g60<1>D         g31<8,8,1>UW                    { align1 1H };
add(16)         g62<1>D         g60<1,1,0>D     g58<1,1,0>D     { align1 1H I@1 compacted };
mov(16)         g64<1>UD        g62<32,8,4>UB                   { align1 1H I@1 };
mov(16)         g66<1>UW        g62<32,8,4>UB                   { align1 1H };
mov(16)         g67<1>UD        g64<16,8,2>UW                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g28.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g43.1<2>F       g2.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g78.1<2>F       g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g45.1<2>F       g2.3<0,1,0>F                    { align1 2Q };
mov(8)          g28<2>F         g2<0,1,0>F                      { align1 1Q F@4 compacted };
mov(8)          g43<2>F         g2<0,1,0>F                      { align1 2Q F@4 compacted };
mov(8)          g78<2>F         g2.2<0,1,0>F                    { align1 1Q F@4 compacted };
mov(8)          g45<2>F         g2.2<0,1,0>F                    { align1 2Q F@4 compacted };
mov(8)          g47<1>UD        g28.1<8,4,2>UD                  { align1 1Q F@4 };
add(8)          g49<1>D         g28<8,4,2>D     32D             { align1 1Q compacted };
mov(8)          g48<1>UD        g43.1<8,4,2>UD                  { align1 2Q F@3 };
add(8)          g50<1>D         g43<8,4,2>D     32D             { align1 2Q compacted };
mov(8)          g69<2>UD        g49<4,4,1>UD                    { align1 1Q I@3 };
cmp.l.f0.0(16)  g51<1>UD        g49<1,1,0>UD    0x00000020UD    { align1 1H I@2 compacted };
mov(8)          g71<2>UD        g50<4,4,1>UD                    { align1 2Q };
add(8)          g80<1>D         -g51<8,8,1>D    g28.1<8,4,2>D   { align1 1Q I@2 };
add(8)          g52<1>D         -g52<8,8,1>D    g43.1<8,4,2>D   { align1 2Q I@3 };
mov(8)          g69.1<2>UD      g80<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g71.1<2>UD      g52<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g53UD           g69UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
mov(16)         g101<2>UW       g53<8,8,1>UD                    { align1 1H $1.dst };
sel.l(16)       g57<1>UW        g101<16,8,2>UW  0x0100UW        { align1 1H I@1 };
mov(16)         g26<1>UD        g57<8,8,1>UW                    { align1 1H I@1 };
cmp.l.f0.0(16)  null<1>D        g67<8,8,1>D     g26<8,8,1>D     { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
add(16)         g69<1>D         g64<1,1,0>D     g55<1,1,0>D     { align1 1H $1.dst compacted };
add(8)          g75<1>D         g78<8,4,2>D     52D             { align1 1Q F@2 compacted };
add(8)          g76<1>D         g45<8,4,2>D     52D             { align1 2Q F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(8)          g86<1>D         g28<8,4,2>D     11308D          { align1 1Q };
add(8)          g87<1>D         g43<8,4,2>D     11308D          { align1 2Q };
mul(16)         g89<1>D         g67<1,1,0>D     1484W           { align1 1H compacted };
mov(16)         g9<1>D          0D                              { align1 1H };
mov(16)         g13<1>D         0D                              { align1 1H };
mov(16)         g15<1>D         0D                              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g103<1>UD       g69<16,8,2>UW                   { align1 1H I@7 };
mov(16)         g30<2>UW        g69<8,8,1>UD                    { align1 1H };
cmp.l.f0.0(8)   g81<1>UD        g75<8,8,1>UD    g78<8,4,2>UD    { align1 1Q I@7 };
cmp.l.f0.0(8)   g77<1>UD        g76<8,8,1>UD    g45<8,4,2>UD    { align1 2Q I@7 };
add(16)         g91<1>D         g86<1,1,0>D     g89<1,1,0>D     { align1 1H I@7 compacted };
mul(8)          acc0<1>UD       g103<8,8,1>UD   0x0058UW        { align1 1Q I@5 };
mul(16)         g73<1>D         g103<1,1,0>D    88W             { align1 1H I@6 compacted };
add(8)          g78<1>D         -g81<8,8,1>D    g78.1<8,4,2>D   { align1 1Q I@5 };
add(8)          g79<1>D         -g77<8,8,1>D    g45.1<8,4,2>D   { align1 2Q I@5 };
mov(8)          g5<2>UD         g91<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g7<2>UD         g92<4,4,1>UD                    { align1 2Q I@6 };
mach(8)         g71<1>UD        g103<1,1,0>UD   0x00000058UD    { align1 1Q $1.src compacted AccWrEnable };
add(16)         g80<1>D         g75<1,1,0>D     g73<1,1,0>D     { align1 1H I@6 compacted };
mul(8)          acc0<1>UD       g104<8,8,1>UD   0x0058UW        { align1 2Q };
cmp.l.f0.0(16)  g82<1>UD        g80<1,1,0>UD    g75<1,1,0>UD    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g1<2>UD         g80<4,4,1>UD                    { align1 1Q F@1 };
mov(8)          g3<2>UD         g81<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(8)   g88<1>UD        g86<8,8,1>UD    g28<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(8)   g89<1>UD        g87<8,8,1>UD    g43<8,4,2>UD    { align1 2Q };
mach(8)         g72<1>UD        g104<8,8,1>UD   0x00000058UD    { align1 2Q $1.src AccWrEnable };
cmp.l.f0.0(16)  g93<1>UD        g91<1,1,0>UD    g86<1,1,0>UD    { align1 1H compacted };
add3(16)        g84<1>D         g78<8,8,1>D     g71<8,8,1>D     -g82<1,1,1>D { align1 1H I@2 };
add3(16)        g95<1>D         -g88<8,8,1>D    g47<8,8,1>D     -g93<1,1,1>D { align1 1H I@2 };
mov(8)          g1.1<2>UD       g84<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g3.1<2>UD       g85<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g5.1<2>UD       g95<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g7.1<2>UD       g96<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g11UD           g1UD            nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g5UD            g9UD            0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $3 };
add(16)         g97<1>D         g91<1,1,0>D     28D             { align1 1H compacted };
cmp.l.f0.0(16)  g99<1>UD        g97<1,1,0>UD    g91<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g70<2>UD        g97<4,4,1>UD                    { align1 1Q };
mov(8)          g72<2>UD        g98<4,4,1>UD                    { align1 2Q };
add(16)         g101<1>D        -g99<1,1,0>D    g95<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g70.1<2>UD      g101<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g72.1<2>UD      g102<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g70UD           g103UD          0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $1 };
shl(16)         g102<1>D        g67<8,8,1>D     0x00000002UD    { align1 1H $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(8)          g104<1>D        g28<8,4,2>D     g102<1,1,0>D    { align1 1Q I@1 compacted };
add(8)          g105<1>D        g43<8,4,2>D     g103<1,1,0>D    { align1 2Q I@2 compacted };
cmp.l.f0.0(8)   g88<1>UD        g104<8,8,1>UD   g28<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g106<1>UD       g105<8,8,1>UD   g43<8,4,2>UD    { align1 2Q I@2 };
add(16)         g109<1>D        g104<1,1,0>D    40D             { align1 1H compacted };
add(8)          g107<1>D        -g88<8,8,1>D    g28.1<8,4,2>D   { align1 1Q I@3 };
add(8)          g108<1>D        -g106<8,8,1>D   g43.1<8,4,2>D   { align1 2Q I@3 };
cmp.l.f0.0(16)  g111<1>UD       g109<1,1,0>UD   g104<1,1,0>UD   { align1 1H I@3 compacted };
mov(8)          g115<2>UD       g109<4,4,1>UD                   { align1 1Q };
mov(8)          g117<2>UD       g110<4,4,1>UD                   { align1 2Q };
add(16)         g113<1>D        -g111<1,1,0>D   g107<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g115.1<2>UD     g113<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g117.1<2>UD     g114<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g115UD          g41UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $1 };
add(16)         g114<1>D        g91<1,1,0>D     16D             { align1 1H $1.src compacted };
mov(16)         g17<1>D         0D                              { align1 1H };
mov(16)         g19<1>D         0D                              { align1 1H };
mov(16)         g21<1>D         0D                              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g116<1>UD       g114<1,1,0>UD   g91<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g120<2>UD       g114<4,4,1>UD                   { align1 1Q };
mov(8)          g122<2>UD       g115<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g118<1>D        -g116<1,1,0>D   g95<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g120.1<2>UD     g118<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g122.1<2>UD     g119<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g120UD          g17UD           0x08007586                0x00000180
                            ugm MsgDesc: ( store_cmask, a64, d32, xyz, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 6 flat ) base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g119<1>D        g11<1,1,0>D     511D            { align1 1H $3.src compacted };
add(16)         g121<1>D        g104<1,1,0>D    1068D           { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
shr(16)         g10<1>UD        g119<1,1,0>UD   0x00000009UD    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g123<1>UD       g121<1,1,0>UD   g104<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g1<2>UD         g121<4,4,1>UD                   { align1 1Q $2.src };
mov(8)          g3<2>UD         g122<4,4,1>UD                   { align1 2Q $2.src };
add(16)         g125<1>D        -g123<1,1,0>D   g107<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g1.1<2>UD       g125<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g3.1<2>UD       g126<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g1UD            g10UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $5 };
add(8)          g126<1>D        g28<8,4,2>D     2092D           { align1 1Q };
add(8)          g127<1>D        g43<8,4,2>D     2092D           { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g1<1>UD         g126<1,1,0>UD   0x0000082cUD    { align1 1H I@1 compacted };
add(16)         g3<1>D          g126<1,1,0>D    g102<1,1,0>D    { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g16<2>UW        g30<16,8,2>UW                   { align1 1H $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g5<1>UD         g3<1,1,0>UD     g126<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g12<2>UD        g3<4,4,1>UD                     { align1 1Q $3.src };
mov(8)          g14<2>UD        g4<4,4,1>UD                     { align1 2Q $3.src };
mov(16)         g16.1<2>UW      g66<8,8,1>UW                    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add3(16)        g7<1>D          -g1<8,8,1>D     g47<8,8,1>D     -g5<1,1,1>D { align1 1H I@4 };
mov(8)          g12.1<2>UD      g7<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g14.1<2>UD      g8<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g12UD           g16UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $6 };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g10<1>UD        0x00000000UD                    { align1 1H $5.src };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g8<1>D          0D                              { align1 WE_all 1H I@2 };
mov(16)         g8<1>D          g10<8,8,1>D                     { align1 1H };
cmp.z.f0.0(16)  null<1>W        g66<16,16,1>W   0W              { align1 1H I@7 };
add(8)          g8.1<2>D        g8<8,4,2>D      g8.1<8,4,2>D    { align1 WE_all 1Q I@2 };
add(4)          g8.2<4>D        g8.1<8,2,4>D    g8.2<8,2,4>D    { align1 WE_all 1N I@1 };
add(4)          g8.3<4>D        g8.1<8,2,4>D    g8.3<8,2,4>D    { align1 WE_all 1N I@1 };
add(4)          g8.4<1>D        g8.3<0,1,0>D    g8.4<4,4,1>D    { align1 WE_all 1N I@1 };
add(4)          g9.4<1>D        g9.3<0,1,0>D    g9.4<4,4,1>D    { align1 WE_all 1N I@2 };
add(8)          g9<1>D          g8.7<0,1,0>D    g9<1,1,0>D      { align1 WE_all 1Q I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
mov(16)         g10<1>UD        g55<16,8,2>UW                   { align1 1H $1.dst };
mov(16)         g12<1>UD        g53<16,8,2>UW                   { align1 1H $6.src };
add(8)          g89<1>D         g28<8,4,2>D     24D             { align1 1Q compacted };
add(8)          g14<1>D         g43<8,4,2>D     24D             { align1 2Q $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
mov(16)         g18<1>D         g9.7<0,1,0>D                    { align1 1H $4.src };
add(16)         g24<1>D         g10<1,1,0>D     g26<1,1,0>D     { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g22<1>D         g12<1,1,0>D     -g26<1,1,0>D    { align1 1H I@5 compacted };
cmp.l.f0.0(8)   g90<1>UD        g89<8,8,1>UD    g28<8,4,2>UD    { align1 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $6.src };
cmp.l.f0.0(8)   g15<1>UD        g14<8,8,1>UD    g43<8,4,2>UD    { align1 2Q I@5 };
mov(8)          g34<2>UD        g89<4,4,1>UD                    { align1 1Q };
mov(8)          g36<2>UD        g14<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g30<1>D         g26<1,1,0>D     g12<1,1,0>D     { align1 1H compacted };
add(8)          g91<1>D         -g90<8,8,1>D    g28.1<8,4,2>D   { align1 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $6.src };
add(8)          g16<1>D         -g15<8,8,1>D    g43.1<8,4,2>D   { align1 2Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g20<1>D         -g30<8,8,1>D                    { align1 1H I@3 };
mov(8)          g34.1<2>UD      g91<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g36.1<2>UD      g16<4,4,1>UD                    { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g34UD           g18UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $4 };
add(8)          g97<1>D         g28<8,4,2>D     1064D           { align1 1Q compacted };
add(8)          g34<1>D         g43<8,4,2>D     1064D           { align1 2Q $4.src compacted };
cmp.l.f0.0(8)   g98<1>UD        g97<8,8,1>UD    g28<8,4,2>UD    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $4.src };
cmp.l.f0.0(8)   g35<1>UD        g34<8,8,1>UD    g43<8,4,2>UD    { align1 2Q I@2 };
mov(8)          g37<2>UD        g97<4,4,1>UD                    { align1 1Q $4.src };
mov(8)          g39<2>UD        g34<4,4,1>UD                    { align1 2Q };
add(8)          g99<1>D         -g98<8,8,1>D    g28.1<8,4,2>D   { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $4.src };
add(8)          g36<1>D         -g35<8,8,1>D    g43.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g37.1<2>UD      g99<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g39.1<2>UD      g36<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g37UD           g26UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $7 };

LABEL3:
endif(16)       JIP:  LABEL4                                    { align1 1H };

LABEL4:
add(8)          g45<1>D         g28<8,4,2>D     11308D          { align1 1Q F@1 };
add(8)          g46<1>D         g43<8,4,2>D     11308D          { align1 2Q F@1 };
mov(16)         g50<1>D         2139095040D                     { align1 1H };
shl(16)         g34<1>D         g60<8,8,1>D     0x00000002UD    { align1 1H };
mov(16)         g36<1>UD        g32<8,8,1>UD                    { align1 1H $7.src };
cmp.l.f0.0(8)   g100<1>UD       g45<8,8,1>UD    g28<8,4,2>UD    { align1 1Q I@5 };
cmp.l.f0.0(8)   g47<1>UD        g46<8,8,1>UD    g43<8,4,2>UD    { align1 2Q I@5 };
add(8)          g48<1>D         -g100<8,8,1>D   g28.1<8,4,2>D   { align1 1Q I@2 };
add(8)          g49<1>D         -g47<8,8,1>D    g43.1<8,4,2>D   { align1 2Q I@2 };

LABEL10:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.ge.f0.0(16) null<1>UD       g36<8,8,1>UD    g26<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL5        UIP:  LABEL5              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mul(16)         g52<1>D         g36<1,1,0>D     1484W           { align1 1H $8.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g38<1>UD        g34<8,8,1>UD                    { align1 1H I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g54<1>D         g45<1,1,0>D     g52<1,1,0>D     { align1 1H $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g56<1>UD        g54<1,1,0>UD    g45<1,1,0>UD    { align1 1H $1.dst compacted };
add(16)         g60<1>D         g54<1,1,0>D     44D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g66<1>D         g54<1,1,0>D     1196D           { align1 1H $11.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g58<1>D         -g56<1,1,0>D    g48<1,1,0>D     { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g62<1>UD        g60<1,1,0>UD    g54<1,1,0>UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g68<1>UD        g66<1,1,0>UD    0x000004acUD    { align1 1H I@3 compacted };
add(16)         g64<1>D         -g62<1,1,0>D    g58<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g70<1>D         -g68<1,1,0>D    g58<1,1,0>D     { align1 1H I@2 compacted };

LABEL7:
cmp.ge.f0.0(16) null<1>UD       g38<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL6        UIP:  LABEL6              { align1 1H };
shl(16)         g72<1>D         g38<8,8,1>D     0x00000002UD    { align1 1H $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g74<1>D         g66<1,1,0>D     g72<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g76<1>UD        g74<1,1,0>UD    g66<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g52<2>UD        g74<4,4,1>UD                    { align1 1Q $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g54<2>UD        g75<4,4,1>UD                    { align1 2Q $10.src };
add(16)         g78<1>D         -g76<1,1,0>D    g70<1,1,0>D     { align1 1H A@2 compacted };
mov(8)          g52.1<2>UD      g78<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g54.1<2>UD      g79<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g52UD           g41UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $8 };
add(16)         g79<1>D         g72<1,1,0>D     4D              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g81<1>D         g66<1,1,0>D     g79<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g83<1>UD        g81<1,1,0>UD    g66<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g53<2>UD        g81<4,4,1>UD                    { align1 1Q $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g55<2>UD        g82<4,4,1>UD                    { align1 2Q $8.src };
add(16)         g85<1>D         -g83<1,1,0>D    g70<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g53.1<2>UD      g85<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g55.1<2>UD      g86<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g53UD           g41UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $9 };
add(16)         g86<1>D         g72<1,1,0>D     8D              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g88<1>D         g66<1,1,0>D     g86<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g90<1>UD        g88<1,1,0>UD    g66<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g54<2>UD        g88<4,4,1>UD                    { align1 1Q $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g56<2>UD        g89<4,4,1>UD                    { align1 2Q $9.src };
add(16)         g92<1>D         -g90<1,1,0>D    g70<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g54.1<2>UD      g92<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g56.1<2>UD      g93<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g54UD           g41UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $10 };
add(16)         g93<1>D         g72<1,1,0>D     12D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g95<1>D         g66<1,1,0>D     g93<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g97<1>UD        g95<1,1,0>UD    g66<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g55<2>UD        g95<4,4,1>UD                    { align1 1Q $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g57<2>UD        g96<4,4,1>UD                    { align1 2Q $10.src };
add(16)         g99<1>D         -g97<1,1,0>D    g70<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g55.1<2>UD      g99<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g57.1<2>UD      g100<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g55UD           g41UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $1 };
add(16)         g38<1>D         g38<1,1,0>D     64D             { align1 1H compacted };

LABEL6:
while(16)       JIP:  LABEL7                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g39<1>UD        g34<8,8,1>UD                    { align1 1H I@2 };

LABEL9:
cmp.ge.f0.0(16) null<1>UD       g39<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL8        UIP:  LABEL8              { align1 1H };
shl(16)         g100<1>D        g39<8,8,1>D     0x00000002UD    { align1 1H };
add(16)         g102<1>D        g60<1,1,0>D     g100<1,1,0>D    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g104<1>UD       g102<1,1,0>UD   g60<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g56<2>UD        g102<4,4,1>UD                   { align1 1Q $1.src };
mov(8)          g58<2>UD        g103<4,4,1>UD                   { align1 2Q $1.src };
add(16)         g106<1>D        -g104<1,1,0>D   g64<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g56.1<2>UD      g106<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g58.1<2>UD      g107<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g56UD           g50UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $1 };
add(16)         g107<1>D        g100<1,1,0>D    4D              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g109<1>D        g60<1,1,0>D     g107<1,1,0>D    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g111<1>UD       g109<1,1,0>UD   g60<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(8)          g66<2>UD        g109<4,4,1>UD                   { align1 1Q $11.src };
mov(8)          g68<2>UD        g110<4,4,1>UD                   { align1 2Q $1.src };
add(16)         g113<1>D        -g111<1,1,0>D   g64<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g66.1<2>UD      g113<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g68.1<2>UD      g114<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g66UD           g50UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $11 };
add(16)         g114<1>D        g100<1,1,0>D    8D              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g116<1>D        g60<1,1,0>D     g114<1,1,0>D    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g118<1>UD       g116<1,1,0>UD   g60<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g67<2>UD        g116<4,4,1>UD                   { align1 1Q $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g69<2>UD        g117<4,4,1>UD                   { align1 2Q $11.src };
add(16)         g120<1>D        -g118<1,1,0>D   g64<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g67.1<2>UD      g120<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g69.1<2>UD      g121<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g67UD           g50UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $12 };
add(16)         g121<1>D        g100<1,1,0>D    12D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g123<1>D        g60<1,1,0>D     g121<1,1,0>D    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g125<1>UD       g123<1,1,0>UD   g60<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g68<2>UD        g123<4,4,1>UD                   { align1 1Q $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g70<2>UD        g124<4,4,1>UD                   { align1 2Q $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g1<1>D          -g125<1,1,0>D   g64<1,1,0>D     { align1 1H A@1 compacted };
mov(8)          g68.1<2>UD      g1<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g70.1<2>UD      g2<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g68UD           g50UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $1 };
add(16)         g39<1>D         g39<1,1,0>D     64D             { align1 1H compacted };

LABEL8:
while(16)       JIP:  LABEL9                                    { align1 1H };
add(16)         g36<1>D         g36<1,1,0>D     16D             { align1 1H compacted };

LABEL5:
while(16)       JIP:  LABEL10                                   { align1 1H };

LABEL14:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.ge.f0.0(16) null<1>UD       g32<8,8,1>UD    g26<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL11       UIP:  LABEL11             { align1 1H };
mul(16)         g2<1>D          g32<1,1,0>D     1484W           { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g40<1>UD        g34<8,8,1>UD                    { align1 1H I@7 };
add(16)         g4<1>D          g45<1,1,0>D     g2<1,1,0>D      { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g6<1>UD         g4<1,1,0>UD     g45<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
add(16)         g8<1>D          g4<1,1,0>D      1388D           { align1 1H compacted };
cmp.l.f0.0(16)  g10<1>UD        g8<1,1,0>UD     g4<1,1,0>UD     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add3(16)        g12<1>D         -g6<8,8,1>D     g48<8,8,1>D     -g10<1,1,1>D { align1 1H I@1 };

LABEL13:
cmp.ge.f0.0(16) null<1>UD       g40<8,8,1>UD    0x00000018UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL12       UIP:  LABEL12             { align1 1H };
shl(16)         g14<1>D         g40<8,8,1>D     0x00000002UD    { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g16<1>D         g8<1,1,0>D      g14<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g18<1>UD        g16<1,1,0>UD    g8<1,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g69<2>UD        g16<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g71<2>UD        g17<4,4,1>UD                    { align1 2Q $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g20<1>D         -g18<1,1,0>D    g12<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g69.1<2>UD      g20<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g71.1<2>UD      g21<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g69UD           g50UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $1 };
add(16)         g21<1>D         g14<1,1,0>D     4D              { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g23<1>D         g8<1,1,0>D      g21<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g28<1>UD        g23<1,1,0>UD    g8<1,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g70<2>UD        g23<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g72<2>UD        g24<4,4,1>UD                    { align1 2Q $1.src };
add(16)         g30<1>D         -g28<1,1,0>D    g12<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g70.1<2>UD      g30<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g72.1<2>UD      g31<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g70UD           g50UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $1 };
add(16)         g36<1>D         g14<1,1,0>D     8D              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g38<1>D         g8<1,1,0>D      g36<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g42<1>UD        g38<1,1,0>UD    g8<1,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g71<2>UD        g38<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g73<2>UD        g39<4,4,1>UD                    { align1 2Q $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g52<1>D         -g42<1,1,0>D    g12<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g71.1<2>UD      g52<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g73.1<2>UD      g53<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g71UD           g50UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $1 };
add(16)         g53<1>D         g14<1,1,0>D     12D             { align1 1H $10.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g55<1>D         g8<1,1,0>D      g53<1,1,0>D     { align1 1H $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g57<1>UD        g55<1,1,0>UD    g8<1,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g72<2>UD        g55<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g74<2>UD        g56<4,4,1>UD                    { align1 2Q $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g59<1>D         -g57<1,1,0>D    g12<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g72.1<2>UD      g59<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g74.1<2>UD      g60<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g72UD           g50UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $1 };
add(16)         g40<1>D         g40<1,1,0>D     64D             { align1 1H compacted };

LABEL12:
while(16)       JIP:  LABEL13                                   { align1 1H };
add(16)         g32<1>D         g32<1,1,0>D     16D             { align1 1H compacted };

LABEL11:
while(16)       JIP:  LABEL14                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
mov(16)         acc0<1>F        0x0F             /* 0F */       { align1 WE_all 1H I@1 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_BFS_begin_batchable_code[] = {
    0x80000065, 0x67058220, 0x02000004, 0xffffffc0,
    0x80030061, 0x1f054410, 0x00000000, 0x76543210,
    0x00040061, 0x29054660, 0x00000000, 0x00000000,
    0xe0200065, 0x0ff10043, 0xe2681c40, 0x00016703,
    0x641f1c40, 0x00801f95, 0x00041b69, 0x3a058660,
    0x02462005, 0x00000004, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa00680c, 0x00340000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x3c050160,
    0x00461f05, 0x00000000, 0xa03e1940, 0x3a003c02,
    0x00041961, 0x40050020, 0x00663e07, 0x00000000,
    0x00040061, 0x42050010, 0x00663e07, 0x00000000,
    0x00041a61, 0x43050120, 0x00564006, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x211c0061, 0x001102cc, 0x2a2b0061, 0x001102cc,
    0x00030061, 0x4e260aa0, 0x00000264, 0x00000000,
    0x00130061, 0x2d260aa0, 0x00000264, 0x00000000,
    0x211c1461, 0x00110204, 0x2a2b1461, 0x00110204,
    0x214e1461, 0x00110244, 0x2a2d1461, 0x00110244,
    0x00031461, 0x2f050220, 0x00441c26, 0x00000000,
    0xa1310040, 0x020e1c03, 0x00131361, 0x30050220,
    0x00442b26, 0x00000000, 0xaa320040, 0x020e2b03,
    0x00031b61, 0x45060220, 0x00343105, 0x00000000,
    0xe7331a70, 0x02003103, 0x00130061, 0x47060220,
    0x00343205, 0x00000000, 0x00031a40, 0x50052660,
    0x06463305, 0x00441c26, 0x00131b40, 0x34052660,
    0x06463405, 0x00442b26, 0x00031a61, 0x45260220,
    0x00345005, 0x00000000, 0x00131a61, 0x47260220,
    0x00343405, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x35240000,
    0xfb044524, 0x000c0000, 0x00042161, 0x65060210,
    0x00463505, 0x00000000, 0x00041962, 0x39058110,
    0x51566506, 0x01000100, 0x00041961, 0x1a050120,
    0x00463905, 0x00000000, 0x00041970, 0x00010660,
    0x56464305, 0x00461a05, 0x01040022, 0x0001c060,
    0x00000698, 0x00000688, 0xa0452140, 0x37004002,
    0xa14b1240, 0x034e4e03, 0xaa4c1140, 0x034e2d03,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x00030040, 0x56058660, 0x06441c06, 0x00002c2c,
    0x00130040, 0x57058660, 0x06442b06, 0x00002c2c,
    0x60590041, 0x5cc04302, 0x00040061, 0x09054660,
    0x00000000, 0x00000000, 0x00040061, 0x0d054660,
    0x00000000, 0x00000000, 0x00040061, 0x0f054660,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00041f61, 0x67050120,
    0x00564506, 0x00000000, 0x00040061, 0x1e060210,
    0x00464505, 0x00000000, 0x00031f70, 0x51050220,
    0x52464b05, 0x00444e06, 0x00131f70, 0x4d050220,
    0x52464c05, 0x00442d06, 0xa05b1f40, 0x59005602,
    0x00031d41, 0x20018220, 0x01466705, 0x00580058,
    0x60491e41, 0x05806702, 0x00031d40, 0x4e052660,
    0x06465105, 0x00444e26, 0x00131d40, 0x4f052660,
    0x06464d05, 0x00442d26, 0x00031d61, 0x05060220,
    0x00345b05, 0x00000000, 0x00131e61, 0x07060220,
    0x00345c05, 0x00000000, 0xfe473149, 0x05806703,
    0xa0501e40, 0x49004b02, 0x00130041, 0x20018220,
    0x01466805, 0x00580058, 0x27521a70, 0x4b005003,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x00031161, 0x01060220, 0x00345005, 0x00000000,
    0x00130061, 0x03060220, 0x00345105, 0x00000000,
    0x00030070, 0x58050220, 0x52465605, 0x00441c06,
    0x00130070, 0x59050220, 0x52465705, 0x00442b06,
    0x00133149, 0x48058222, 0x02466805, 0x00000058,
    0x275d0070, 0x56005b03, 0x00041a52, 0x54040e68,
    0x0e2e4e05, 0x52054705, 0x00041a52, 0x5f042e68,
    0x0e2e5805, 0x5d052f05, 0x00031a61, 0x01260220,
    0x00345405, 0x00000000, 0x00131b61, 0x03260220,
    0x00345505, 0x00000000, 0x00031b61, 0x05260220,
    0x00345f05, 0x00000000, 0x00131c61, 0x07260220,
    0x00346005, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x0b140000,
    0xfb040124, 0x00040000, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xfb0c0524, 0x003c0944, 0xa0610040, 0x01c05b03,
    0x27631970, 0x5b006103, 0x00030061, 0x46060220,
    0x00346105, 0x00000000, 0x00130061, 0x48060220,
    0x00346205, 0x00000000, 0xa0651b40, 0x5f026302,
    0x00031961, 0x46260220, 0x00346505, 0x00000000,
    0x00131a61, 0x48260220, 0x00346605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb0c4624, 0x00046714,
    0x00043169, 0x66058660, 0x02464305, 0x00000002,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa1681940, 0x660e1c02, 0xaa691a40, 0x670e2b02,
    0x00031a70, 0x58050220, 0x52466805, 0x00441c06,
    0x00131a70, 0x6a050220, 0x52466905, 0x00442b06,
    0xa06d0040, 0x02806803, 0x00031b40, 0x6b052660,
    0x06465805, 0x00441c26, 0x00131b40, 0x6c052660,
    0x06466a05, 0x00442b26, 0x276f1b70, 0x68006d03,
    0x00030061, 0x73060220, 0x00346d05, 0x00000000,
    0x00130061, 0x75060220, 0x00346e05, 0x00000000,
    0xa0711b40, 0x6b026f02, 0x00031961, 0x73260220,
    0x00347105, 0x00000000, 0x00131a61, 0x75260220,
    0x00347205, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb0c7324, 0x00042914, 0xa0723140, 0x01005b03,
    0x00040061, 0x11054660, 0x00000000, 0x00000000,
    0x00040061, 0x13054660, 0x00000000, 0x00000000,
    0x00040061, 0x15054660, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x27741c70, 0x5b007203, 0x00030061, 0x78060220,
    0x00347205, 0x00000000, 0x00130061, 0x7a060220,
    0x00347305, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0761b40, 0x5f027402,
    0x00031961, 0x78260220, 0x00347605, 0x00000000,
    0x00131a61, 0x7a260220, 0x00347705, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x00000000, 0xfb0c7824, 0x001c1134,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa0773340, 0x1ff00b03, 0xa0793440, 0x42c06803,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xe00a1a68, 0x00907703, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x277b1a70, 0x68007903,
    0x00033261, 0x01060220, 0x00347905, 0x00000000,
    0x00133261, 0x03060220, 0x00347a05, 0x00000000,
    0xa07d1b40, 0x6b027b02, 0x00031961, 0x01260220,
    0x00347d05, 0x00000000, 0x00131a61, 0x03260220,
    0x00347e05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x00000000,
    0xfb0c0124, 0x00040a14, 0x00030040, 0x7e058660,
    0x06441c06, 0x0000082c, 0x00130040, 0x7f058660,
    0x06442b06, 0x0000082c, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xe7011970, 0x82c07e03,
    0xa0033540, 0x66007e02, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00043361, 0x10060110,
    0x00561e06, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x27051a70, 0x7e000303,
    0x00033361, 0x0c060220, 0x00340305, 0x00000000,
    0x00133361, 0x0e060220, 0x00340405, 0x00000000,
    0x00041c61, 0x10160110, 0x00464205, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00041c52, 0x07042e68, 0x0e2e0105, 0x05052f05,
    0x00031961, 0x0c260220, 0x00340705, 0x00000000,
    0x00131a61, 0x0e260220, 0x00340805, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xfb0c0c24, 0x00041014,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00043561, 0x0a054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80041a61, 0x08054660, 0x00000000, 0x00000000,
    0x00040061, 0x08050660, 0x00460a05, 0x00000000,
    0x00041f70, 0x00018550, 0x15584205, 0x00000000,
    0x80031a40, 0x08260660, 0x06440806, 0x00440826,
    0x80021940, 0x08470660, 0x06420827, 0x00420847,
    0x80021940, 0x08670660, 0x06420827, 0x00420867,
    0x80021940, 0x08850660, 0x06000864, 0x00340885,
    0x80021a40, 0x09850660, 0x06000964, 0x00340985,
    0xa4091940, 0x09010882, 0x01040022, 0x0001c060,
    0x00000238, 0x00000238, 0x00042161, 0x0a050120,
    0x00563706, 0x00000000, 0x00043661, 0x0c050120,
    0x00563506, 0x00000000, 0xa1590040, 0x018e1c03,
    0xaa0e3640, 0x018e2b03, 0x80001e01, 0x00000000,
    0x00000000, 0x00000000, 0x00043461, 0x12050660,
    0x000009e4, 0x00000000, 0xa0181d40, 0x1a000a02,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa0161d40, 0x1a200c02, 0x00031d70, 0x5a050220,
    0x52465905, 0x00441c06, 0x80103601, 0x00000000,
    0x00000000, 0x00000000, 0x00131d70, 0x0f050220,
    0x52460e05, 0x00442b06, 0x00030061, 0x22060220,
    0x00345905, 0x00000000, 0x00130061, 0x24060220,
    0x00340e05, 0x00000000, 0xa71e0070, 0x0c001a02,
    0x00031d40, 0x5b052660, 0x06465a05, 0x00441c26,
    0x80103601, 0x00000000, 0x00000000, 0x00000000,
    0x00131d40, 0x10052660, 0x06460f05, 0x00442b26,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00041b61, 0x14052660, 0x00461e05, 0x00000000,
    0x00031b61, 0x22260220, 0x00345b05, 0x00000000,
    0x00131b61, 0x24260220, 0x00341005, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x00000000, 0xfb0c2224, 0x003c1244,
    0xa1610040, 0x428e1c03, 0xaa223440, 0x428e2b03,
    0x00031a70, 0x62050220, 0x52466105, 0x00441c06,
    0x80103401, 0x00000000, 0x00000000, 0x00000000,
    0x00131a70, 0x23050220, 0x52462205, 0x00442b06,
    0x00033461, 0x25060220, 0x00346105, 0x00000000,
    0x00130061, 0x27060220, 0x00342205, 0x00000000,
    0x00031c40, 0x63052660, 0x06466205, 0x00441c26,
    0x80103401, 0x00000000, 0x00000000, 0x00000000,
    0x00131c40, 0x24052660, 0x06462305, 0x00442b26,
    0x00031a61, 0x25260220, 0x00346305, 0x00000000,
    0x00131a61, 0x27260220, 0x00342405, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x00000000, 0xfb0c2524, 0x00041a14,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00031140, 0x2d058660, 0x06441c06, 0x00002c2c,
    0x00131140, 0x2e058660, 0x06442b06, 0x00002c2c,
    0x00040061, 0x32054660, 0x00000000, 0x7f800000,
    0x00040069, 0x22058660, 0x02463c05, 0x00000002,
    0x00043761, 0x24050220, 0x00462005, 0x00000000,
    0x00031d70, 0x64050220, 0x52462d05, 0x00441c06,
    0x00131d70, 0x2f050220, 0x52462e05, 0x00442b06,
    0x00031a40, 0x30052660, 0x06466405, 0x00441c26,
    0x00131a40, 0x31052660, 0x06462f05, 0x00442b26,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00041a70, 0x00010220, 0x42462405, 0x00461a05,
    0x01040028, 0x0001c660, 0x00000758, 0x00000758,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x60343841, 0x5cc02402, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00041e61, 0x26050220,
    0x00462205, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xa0362140, 0x34002d02,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x27382170, 0x2d003603, 0xa03c0040, 0x02c03603,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0xa0423b40, 0x4ac03603, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa03a1b40, 0x30023802,
    0x273e1b70, 0x36003c03, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xe7441b70, 0x4ac04203,
    0xa0401a40, 0x3a023e02, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0461a40, 0x3a024402,
    0x00041a70, 0x00018220, 0x42462605, 0x00000030,
    0x01040028, 0x0001c660, 0x00000310, 0x00000310,
    0x00043169, 0x48058660, 0x02462605, 0x00000002,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa04a1940, 0x48004202, 0x274c1970, 0x42004a03,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x00033861, 0x34060220, 0x00344a05, 0x00000000,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x00133a61, 0x36060220, 0x00344b05, 0x00000000,
    0xa04e0a40, 0x46024c02, 0x00031961, 0x34260220,
    0x00344e05, 0x00000000, 0x00131a61, 0x36260220,
    0x00344f05, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xfb0c3424, 0x00042914, 0xa04f0040, 0x00404803,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa0511940, 0x4f004202, 0x27531970, 0x42005103,
    0x00033861, 0x35060220, 0x00345105, 0x00000000,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x00133861, 0x37060220, 0x00345205, 0x00000000,
    0xa0551b40, 0x46025302, 0x00031961, 0x35260220,
    0x00345505, 0x00000000, 0x00131a61, 0x37260220,
    0x00345605, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x00000000,
    0xfb0c3524, 0x00042914, 0xa0560040, 0x00804803,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa0581940, 0x56004202, 0x275a1970, 0x42005803,
    0x00033961, 0x36060220, 0x00345805, 0x00000000,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x00133961, 0x38060220, 0x00345905, 0x00000000,
    0xa05c1b40, 0x46025a02, 0x00031961, 0x36260220,
    0x00345c05, 0x00000000, 0x00131a61, 0x38260220,
    0x00345d05, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044a31, 0x00000000,
    0xfb0c3624, 0x00042914, 0xa05d0040, 0x00c04803,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa05f1940, 0x5d004202, 0x27611970, 0x42005f03,
    0x00033a61, 0x37060220, 0x00345f05, 0x00000000,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x00133a61, 0x39060220, 0x00346005, 0x00000000,
    0xa0631b40, 0x46026102, 0x00031961, 0x37260220,
    0x00346305, 0x00000000, 0x00131a61, 0x39260220,
    0x00346405, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb0c3724, 0x00042914, 0xa0260040, 0x04002603,
    0x00040027, 0x00014060, 0x00000000, 0xfffffce0,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00041a61, 0x27050220, 0x00462205, 0x00000000,
    0x00041970, 0x00018220, 0x42462705, 0x00000120,
    0x01040028, 0x0001c660, 0x000002e0, 0x000002e0,
    0x00040069, 0x64058660, 0x02462705, 0x00000002,
    0xa0661940, 0x64003c02, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x27681970, 0x3c006603,
    0x00033161, 0x38060220, 0x00346605, 0x00000000,
    0x00133161, 0x3a060220, 0x00346705, 0x00000000,
    0xa06a1b40, 0x40026802, 0x00031961, 0x38260220,
    0x00346a05, 0x00000000, 0x00131a61, 0x3a260220,
    0x00346b05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb0c3824, 0x00043214, 0xa06b0040, 0x00406403,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa06d1940, 0x6b003c02, 0x276f1970, 0x3c006d03,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x00033b61, 0x42060220, 0x00346d05, 0x00000000,
    0x00133161, 0x44060220, 0x00346e05, 0x00000000,
    0xa0711b40, 0x40026f02, 0x00031961, 0x42260220,
    0x00347105, 0x00000000, 0x00131a61, 0x44260220,
    0x00347205, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x00000000,
    0xfb0c4224, 0x00043214, 0xa0720040, 0x00806403,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa0741940, 0x72003c02, 0x27761970, 0x3c007403,
    0x00033b61, 0x43060220, 0x00347405, 0x00000000,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x00133b61, 0x45060220, 0x00347505, 0x00000000,
    0xa0781b40, 0x40027602, 0x00031961, 0x43260220,
    0x00347805, 0x00000000, 0x00131a61, 0x45260220,
    0x00347905, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x00000000,
    0xfb0c4324, 0x00043214, 0xa0790040, 0x00c06403,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa07b1940, 0x79003c02, 0x277d1970, 0x3c007b03,
    0x00033c61, 0x44060220, 0x00347b05, 0x00000000,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x00133c61, 0x46060220, 0x00347c05, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa0010940, 0x40027d02, 0x00031961, 0x44260220,
    0x00340105, 0x00000000, 0x00131a61, 0x46260220,
    0x00340205, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb0c4424, 0x00043214, 0xa0270040, 0x04002703,
    0x00040027, 0x00014060, 0x00000000, 0xfffffd10,
    0xa0240040, 0x01002403, 0x00040027, 0x00014060,
    0x00000000, 0xfffff888, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00041a70, 0x00010220,
    0x42462005, 0x00461a05, 0x01040028, 0x0001c660,
    0x00000390, 0x00000390, 0x60020941, 0x5cc02002,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00041f61, 0x28050220, 0x00462205, 0x00000000,
    0xa0041a40, 0x02002d02, 0x27061970, 0x2d000403,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0xa0080040, 0x56c00403, 0x270a1970, 0x04000803,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041952, 0x0c042e68, 0x0e2e0605, 0x0a053005,
    0x00041a70, 0x00018220, 0x42462805, 0x00000018,
    0x01040028, 0x0001c660, 0x000002d0, 0x000002d0,
    0x00043669, 0x0e058660, 0x02462805, 0x00000002,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa0101940, 0x0e000802, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x27121970, 0x08001003,
    0x00033161, 0x45060220, 0x00341005, 0x00000000,
    0x00133161, 0x47060220, 0x00341105, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa0141b40, 0x0c021202, 0x00031961, 0x45260220,
    0x00341405, 0x00000000, 0x00131a61, 0x47260220,
    0x00341505, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb0c4524, 0x00043214, 0xa0153440, 0x00400e03,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa0171940, 0x15000802, 0x271c1970, 0x08001703,
    0x00033161, 0x46060220, 0x00341705, 0x00000000,
    0x00133161, 0x48060220, 0x00341805, 0x00000000,
    0xa01e1b40, 0x0c021c02, 0x00031961, 0x46260220,
    0x00341e05, 0x00000000, 0x00131a61, 0x48260220,
    0x00341f05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb0c4624, 0x00043214, 0xa0240040, 0x00800e03,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xa0261940, 0x24000802, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x272a1970, 0x08002603,
    0x00033161, 0x47060220, 0x00342605, 0x00000000,
    0x00133161, 0x49060220, 0x00342705, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xa0341b40, 0x0c022a02, 0x00031961, 0x47260220,
    0x00343405, 0x00000000, 0x00131a61, 0x49260220,
    0x00343505, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb0c4724, 0x00043214, 0xa0353a40, 0x00c00e03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xa0372140, 0x35000802, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x27391970, 0x08003703,
    0x00033161, 0x48060220, 0x00343705, 0x00000000,
    0x00133161, 0x4a060220, 0x00343805, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa03b1b40, 0x0c023902, 0x00031961, 0x48260220,
    0x00343b05, 0x00000000, 0x00131a61, 0x4a260220,
    0x00343c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb0c4824, 0x00043214, 0xa0280040, 0x04002803,
    0x00040027, 0x00014060, 0x00000000, 0xfffffd20,
    0xa0200040, 0x01002003, 0x00040027, 0x00014060,
    0x00000000, 0xfffffc50, 0x80030061, 0x7e050220,
    0x00460005, 0x00000000, 0x80041961, 0x20014aa0,
    0x00000000, 0x00000000, 0x80040931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_BFS_begin_batchable = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 6096,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_BFS_begin_batchable_relocs,
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
const char *gfx125_bvh_build_BFS_begin_batchable_sha1 = "2e8cc4950251c98864bfb1dd148eff960e0dac93";

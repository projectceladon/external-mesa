#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_BFS_begin_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_BFS_begin_args[] = {
   { 0, 8 },
   { 8, 4 },
   { 12, 4 },
   { 16, 8 },
   { 24, 8 },
   { 32, 8 },
   { 40, 8 },
   { 48, 8 },
   { 56, 8 },
   { 64, 8 },
   { 72, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g111<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(8)          g88<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(16)         g13<1>D         0D                              { align1 1H };
and(16)         g107<1>UD       g0.2<0,1,0>UD   0x000000ffUD    { align1 1H compacted };
add(1)          g112<1>UD       g111<0,1,0>UD   0x00000000UD    { align1 WE_all 1N I@4 compacted };
add(8)          g88.8<1>UW      g88<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@4 compacted };
shl(16)         g109<1>D        g107<8,8,1>D    0x00000004UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g1UD            g112UD          nullUD          0x0240e500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V32, transpose, L1STATE_L3MOCS dst_len = 4, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g111<1>D        g88<8,8,1>UW                    { align1 1H };
add(16)         g113<1>D        g111<1,1,0>D    g109<1,1,0>D    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g82.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g15.1<2>F       g2.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g66.1<2>F       g2.5<0,1,0>F                    { align1 1Q };
mov(8)          g96.1<2>F       g2.5<0,1,0>F                    { align1 2Q };
mov(8)          g68.1<2>F       g2.7<0,1,0>F                    { align1 1Q };
mov(8)          g98.1<2>F       g2.7<0,1,0>F                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g50.1<2>F       g3.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g52.1<2>F       g3.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g84.1<2>F       g3.3<0,1,0>F                    { align1 1Q };
mov(8)          g100.1<2>F      g3.3<0,1,0>F                    { align1 2Q };
mov(8)          g62.1<2>F       g3.5<0,1,0>F                    { align1 1Q };
mov(8)          g64.1<2>F       g3.5<0,1,0>F                    { align1 2Q };
mov(8)          g21.1<2>F       g3.7<0,1,0>F                    { align1 1Q };
mov(8)          g23.1<2>F       g3.7<0,1,0>F                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g86.1<2>F       g4.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g102.1<2>F      g4.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g82<2>F         g2<0,1,0>F                      { align1 1Q compacted };
mov(8)          g15<2>F         g2<0,1,0>F                      { align1 2Q compacted };
mov(8)          g66<2>F         g2.4<0,1,0>F                    { align1 1Q compacted };
mov(8)          g96<2>F         g2.4<0,1,0>F                    { align1 2Q compacted };
mov(8)          g68<2>F         g2.6<0,1,0>F                    { align1 1Q compacted };
mov(8)          g98<2>F         g2.6<0,1,0>F                    { align1 2Q compacted };
mov(8)          g50<2>F         g3<0,1,0>F                      { align1 1Q compacted };
mov(8)          g52<2>F         g3<0,1,0>F                      { align1 2Q compacted };
mov(8)          g84<2>F         g3.2<0,1,0>F                    { align1 1Q compacted };
mov(8)          g100<2>F        g3.2<0,1,0>F                    { align1 2Q compacted };
mov(8)          g62<2>F         g3.4<0,1,0>F                    { align1 1Q compacted };
mov(8)          g64<2>F         g3.4<0,1,0>F                    { align1 2Q compacted };
mov(8)          g21<2>F         g3.6<0,1,0>F                    { align1 1Q compacted };
mov(8)          g23<2>F         g3.6<0,1,0>F                    { align1 2Q compacted };
mov(8)          g86<2>F         g4<0,1,0>F                      { align1 1Q compacted };
mov(8)          g102<2>F        g4<0,1,0>F                      { align1 2Q compacted };
add(8)          g70<1>D         g62<8,4,2>D     36D             { align1 1Q F@6 compacted };
add(8)          g104<1>D        g64<8,4,2>D     36D             { align1 2Q F@5 compacted };
cmp.l.f0.0(8)   g71<1>UD        g70<8,8,1>UD    g62<8,4,2>UD    { align1 1Q I@2 };
mov(8)          g17<2>UD        g70<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g105<1>UD       g104<8,8,1>UD   g64<8,4,2>UD    { align1 2Q I@3 };
mov(8)          g19<2>UD        g104<4,4,1>UD                   { align1 2Q };
and.z.f0.0(16)  g89<1>UD        g113<1,1,0>UD   0x000001ffUD    { align1 1H I@7 compacted };
add(8)          g72<1>D         -g71<8,8,1>D    g62.1<8,4,2>D   { align1 1Q I@5 };
add(8)          g106<1>D        -g105<8,8,1>D   g64.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g17.1<2>UD      g72<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g19.1<2>UD      g106<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g7UD            g17UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
mov(8)          g25<1>UD        g66<8,4,2>UD                    { align1 1Q };
mov(8)          g26<1>UD        g96<8,4,2>UD                    { align1 2Q };
mov(8)          g27<1>UD        g66.1<8,4,2>UD                  { align1 1Q };
mov(8)          g28<1>UD        g96.1<8,4,2>UD                  { align1 2Q };
mov(8)          g29<1>UD        g68<8,4,2>UD                    { align1 1Q };
mov(8)          g30<1>UD        g98<8,4,2>UD                    { align1 2Q };
mov(8)          g31<1>UD        g68.1<8,4,2>UD                  { align1 1Q };
mov(8)          g32<1>UD        g98.1<8,4,2>UD                  { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g21UD           g25UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $2 };
add(8)          g73<1>D         g21<8,4,2>D     16D             { align1 1Q $2.src compacted };
add(8)          g114<1>D        g23<8,4,2>D     16D             { align1 2Q $2.src compacted };
add(8)          g76<1>D         g21<8,4,2>D     32D             { align1 1Q compacted };
add(8)          g117<1>D        g23<8,4,2>D     32D             { align1 2Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g30<1>UD        g50<8,4,2>UD                    { align1 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $2.src };
mov(8)          g31<1>UD        g52<8,4,2>UD                    { align1 2Q F@7 };
mov(8)          g32<1>UD        g50.1<8,4,2>UD                  { align1 1Q $2.src };
mov(8)          g33<1>UD        g52.1<8,4,2>UD                  { align1 2Q };
mov(8)          g34<1>UD        g62<8,4,2>UD                    { align1 1Q };
mov(8)          g35<1>UD        g64<8,4,2>UD                    { align1 2Q };
mov(8)          g36<1>UD        g62.1<8,4,2>UD                  { align1 1Q };
mov(8)          g37<1>UD        g64.1<8,4,2>UD                  { align1 2Q };
cmp.l.f0.0(8)   g74<1>UD        g73<8,8,1>UD    g21<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(8)   g115<1>UD       g114<8,8,1>UD   g23<8,4,2>UD    { align1 2Q };
mov(8)          g26<2>UD        g73<4,4,1>UD                    { align1 1Q $2.src };
mov(8)          g28<2>UD        g114<4,4,1>UD                   { align1 2Q $2.src };
mov(8)          g38<2>UD        g76<4,4,1>UD                    { align1 1Q };
mov(8)          g40<2>UD        g117<4,4,1>UD                   { align1 2Q };
cmp.l.f0.0(8)   g77<1>UD        g76<8,8,1>UD    g21<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(8)   g118<1>UD       g117<8,8,1>UD   g23<8,4,2>UD    { align1 2Q };
add(8)          g75<1>D         -g74<8,8,1>D    g21.1<8,4,2>D   { align1 1Q I@7 };
add(8)          g116<1>D        -g115<8,8,1>D   g23.1<8,4,2>D   { align1 2Q I@7 };
add(8)          g78<1>D         -g77<8,8,1>D    g21.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g119<1>D        -g118<8,8,1>D   g23.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g26.1<2>UD      g75<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g28.1<2>UD      g116<4,4,1>UD                   { align1 2Q I@4 };
mov(8)          g38.1<2>UD      g78<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g40.1<2>UD      g119<4,4,1>UD                   { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        nullUD          g26UD           g30UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $3 };
mov(8)          g42<1>UD        g84<8,4,2>UD                    { align1 1Q F@7 };
mov(8)          g43<1>UD        g100<8,4,2>UD                   { align1 2Q F@7 };
mov(8)          g44<1>UD        g84.1<8,4,2>UD                  { align1 1Q };
mov(8)          g45<1>UD        g100.1<8,4,2>UD                 { align1 2Q };
mov(8)          g46<1>UD        g86<8,4,2>UD                    { align1 1Q F@2 };
mov(8)          g47<1>UD        g102<8,4,2>UD                   { align1 2Q F@1 };
mov(8)          g48<1>UD        g86.1<8,4,2>UD                  { align1 1Q };
mov(8)          g49<1>UD        g102.1<8,4,2>UD                 { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g38UD           g42UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $4 };
add(8)          g79<1>D         g21<8,4,2>D     48D             { align1 1Q compacted };
add(8)          g120<1>D        g23<8,4,2>D     48D             { align1 2Q compacted };
mov(16)         g5<1>D          g4.2<0,1,0>D                    { align1 1H };
mov(16)         g9<1>D          g2.2<0,1,0>D                    { align1 1H };
mov(16)         g11<1>D         g2.3<0,1,0>D                    { align1 1H };
cmp.l.f0.0(8)   g80<1>UD        g79<8,8,1>UD    g21<8,4,2>UD    { align1 1Q I@5 };
cmp.l.f0.0(8)   g121<1>UD       g120<8,8,1>UD   g23<8,4,2>UD    { align1 2Q I@5 };
mov(8)          g66<2>UD        g79<4,4,1>UD                    { align1 1Q };
mov(8)          g68<2>UD        g120<4,4,1>UD                   { align1 2Q };
add(8)          g81<1>D         -g80<8,8,1>D    g21.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g122<1>D        -g121<8,8,1>D   g23.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g66.1<2>UD      g81<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g68.1<2>UD      g122<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g66UD           g5UD            0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $5 };
add(8)          g88<1>D         g82<8,4,2>D     391212D         { align1 1Q };
add(8)          g124<1>D        g15<8,4,2>D     391212D         { align1 2Q };
cmp.l.f0.0(8)   g91<1>UD        g88<8,8,1>UD    g82<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g125<1>UD       g124<8,8,1>UD   g15<8,4,2>UD    { align1 2Q I@2 };
mov(8)          g67<2>UD        g88<4,4,1>UD                    { align1 1Q $5.src };
mov(8)          g69<2>UD        g124<4,4,1>UD                   { align1 2Q $5.src };
add(8)          g92<1>D         -g91<8,8,1>D    g82.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g126<1>D        -g125<8,8,1>D   g15.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g67.1<2>UD      g92<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g69.1<2>UD      g126<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g67UD           g13UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $6 };
mov(16)         g68<1>D         1D                              { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g50UD           g68UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $7 };
add(8)          g93<1>D         g82<8,4,2>D     11308D          { align1 1Q };
add(8)          g127<1>D        g15<8,4,2>D     11308D          { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g54<1>D         0D                              { align1 1H };
mov(16)         g56<1>D         g7<8,8,1>D                      { align1 1H $5.src };
mov(16)         g58<1>D         0D                              { align1 1H };
mov(16)         g60<1>D         0D                              { align1 1H };
cmp.l.f0.0(8)   g94<1>UD        g93<8,8,1>UD    g82<8,4,2>UD    { align1 1Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.dst };
cmp.l.f0.0(8)   g1<1>UD         g127<8,8,1>UD   g15<8,4,2>UD    { align1 2Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g69<2>UD        g93<4,4,1>UD                    { align1 1Q $7.src };
mov(8)          g71<2>UD        g127<4,4,1>UD                   { align1 2Q };
add(8)          g95<1>D         -g94<8,8,1>D    g82.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g2<1>D          -g1<8,8,1>D     g15.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g69.1<2>UD      g95<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g71.1<2>UD      g2<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g69UD           g54UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $8 };
add(8)          g3<1>D          g82<8,4,2>D     2094D           { align1 1Q F@3 };
add(8)          g4<1>D          g15<8,4,2>D     2094D           { align1 2Q F@1 };
mov(16)         g74<1>UD        0x0000UW                        { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g5<1>UD         g3<1,1,0>UD     0x0000082eUD    { align1 1H I@2 compacted };
mov(8)          g70<2>UD        g3<4,4,1>UD                     { align1 1Q $8.src };
mov(8)          g72<2>UD        g4<4,4,1>UD                     { align1 2Q $8.src };
add(8)          g96<1>D         -g5<8,8,1>D     g82.1<8,4,2>D   { align1 1Q I@3 };
add(8)          g6<1>D          -g6<8,8,1>D     g15.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g70.1<2>UD      g96<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g72.1<2>UD      g6<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g70UD           g74UD           0x08000b84                0x00000080
                            ugm MsgDesc: ( store, a64, d16u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $9 };
add(8)          g7<1>D          g82<8,4,2>D     11324D          { align1 1Q };
add(8)          g8<1>D          g15<8,4,2>D     11324D          { align1 2Q };
mov(16)         g74<1>D         0D                              { align1 1H $9.src };
mov(16)         g76<1>D         0D                              { align1 1H };
mov(16)         g78<1>D         0D                              { align1 1H };
mov(16)         g80<1>D         0D                              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g9<1>UD         g7<8,8,1>UD     0x00002c3cUD    { align1 1H I@5 };
mov(8)          g84<2>UD        g7<4,4,1>UD                     { align1 1Q };
mov(8)          g86<2>UD        g8<4,4,1>UD                     { align1 2Q };
add(8)          g97<1>D         -g9<8,8,1>D     g82.1<8,4,2>D   { align1 1Q I@3 };
add(8)          g10<1>D         -g10<8,8,1>D    g15.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g84.1<2>UD      g97<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g86.1<2>UD      g10<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g84UD           g74UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
send(16)        g25UD           g62UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(8)          g33<1>D         g62<8,4,2>D     16D             { align1 1Q $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $3.src };
add(8)          g34<1>D         g64<8,4,2>D     16D             { align1 2Q $6.src compacted };
add(8)          g99<1>D         g50<8,4,2>D     32D             { align1 1Q $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $4.src };
add(8)          g38<1>D         g52<8,4,2>D     32D             { align1 2Q $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g35<1>UD        g33<1,1,0>UD    0x00000010UD    { align1 1H I@3 compacted };
mov(8)          g85<2>UD        g33<4,4,1>UD                    { align1 1Q $10.src };
mov(8)          g87<2>UD        g34<4,4,1>UD                    { align1 2Q $10.src };
cmp.l.f0.0(8)   g100<1>UD       g99<8,8,1>UD    g50<8,4,2>UD    { align1 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $4.src };
cmp.l.f0.0(8)   g39<1>UD        g38<8,8,1>UD    g52<8,4,2>UD    { align1 2Q I@5 };
mov(8)          g91<2>UD        g99<4,4,1>UD                    { align1 1Q };
mov(8)          g93<2>UD        g38<4,4,1>UD                    { align1 2Q };
add(8)          g98<1>D         -g35<8,8,1>D    g62.1<8,4,2>D   { align1 1Q I@7 };
add(8)          g36<1>D         -g36<8,8,1>D    g64.1<8,4,2>D   { align1 2Q I@7 };
add(8)          g101<1>D        -g100<8,8,1>D   g50.1<8,4,2>D   { align1 1Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $4.src };
add(8)          g40<1>D         -g39<8,8,1>D    g52.1<8,4,2>D   { align1 2Q I@6 };
mov(8)          g85.1<2>UD      g98<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g87.1<2>UD      g36<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g91.1<2>UD      g101<4,4,1>UD                   { align1 1Q I@4 };
mov(8)          g93.1<2>UD      g40<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g37UD           g85UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g66<1>D         g25<8,8,1>D                     { align1 1H $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g68<1>D         g27<8,8,1>D                     { align1 1H $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g70<1>D         g29<8,8,1>D                     { align1 1H $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g72<1>D         g37<8,8,1>D                     { align1 1H $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g91UD           g66UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $12 };
add(8)          g45<1>D         g50<8,4,2>D     48D             { align1 1Q $4.src compacted };
add(8)          g46<1>D         g52<8,4,2>D     48D             { align1 2Q $4.src compacted };
mov(16)         g96<1>D         g39<8,8,1>D                     { align1 1H $11.dst };
mov(16)         g98<1>D         g41<8,8,1>D                     { align1 1H $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g47<1>UD        g45<1,1,0>UD    0x00000030UD    { align1 1H I@3 compacted };
mov(8)          g92<2>UD        g45<4,4,1>UD                    { align1 1Q $12.src };
mov(8)          g94<2>UD        g46<4,4,1>UD                    { align1 2Q $12.src };
add(8)          g102<1>D        -g47<8,8,1>D    g50.1<8,4,2>D   { align1 1Q I@3 };
add(8)          g48<1>D         -g48<8,8,1>D    g52.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g92.1<2>UD      g102<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g94.1<2>UD      g48<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g92UD           g96UD           0x08003586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 4 flat ) base_offset 0  { align1 1H $13 };
add(8)          g105<1>D        g82<8,4,2>D     16D             { align1 1Q compacted };
add(8)          g49<1>D         g15<8,4,2>D     16D             { align1 2Q $4.src compacted };
mov(16)         g101<1>D        0D                              { align1 1H };
mov(16)         g103<1>D        0D                              { align1 1H };
cmp.l.f0.0(8)   g106<1>UD       g105<8,8,1>UD   g82<8,4,2>UD    { align1 1Q I@4 };
cmp.l.f0.0(8)   g50<1>UD        g49<8,8,1>UD    g15<8,4,2>UD    { align1 2Q I@4 };
mov(8)          g97<2>UD        g105<4,4,1>UD                   { align1 1Q $13.src };
mov(8)          g99<2>UD        g49<4,4,1>UD                    { align1 2Q $13.src };
add(8)          g107<1>D        -g106<8,8,1>D   g82.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g51<1>D         -g50<8,8,1>D    g15.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g97.1<2>UD      g107<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g99.1<2>UD      g51<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g97UD           g101UD          0x08003586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 4 flat ) base_offset 0  { align1 1H $14 };
add(8)          g108<1>D        g21<8,4,2>D     64D             { align1 1Q compacted };
add(8)          g52<1>D         g23<8,4,2>D     64D             { align1 2Q compacted };
cmp.l.f0.0(8)   g109<1>UD       g108<8,8,1>UD   g21<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g53<1>UD        g52<8,8,1>UD    g23<8,4,2>UD    { align1 2Q I@2 };
mov(8)          g102<2>UD       g108<4,4,1>UD                   { align1 1Q $14.src };
mov(8)          g104<2>UD       g52<4,4,1>UD                    { align1 2Q $14.src };
add(8)          g110<1>D        -g109<8,8,1>D   g21.1<8,4,2>D   { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $8.src };
add(8)          g54<1>D         -g53<8,8,1>D    g23.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g102.1<2>UD     g110<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g104.1<2>UD     g54<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g102UD          g74UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $15 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
mov(8)          g55<1>UD        g82.1<8,4,2>UD                  { align1 1Q $8.src };
mov(8)          g56<1>UD        g15.1<8,4,2>UD                  { align1 2Q $8.src };
add(8)          g57<1>D         g82<8,4,2>D     40D             { align1 1Q $8.src compacted };
add(8)          g58<1>D         g15<8,4,2>D     40D             { align1 2Q $8.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g91<1>UD        g89<8,8,1>UD                    { align1 1H $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
cmp.l.f0.0(8)   g59<1>UD        g57<8,8,1>UD    g82<8,4,2>UD    { align1 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $8.src };
cmp.l.f0.0(8)   g60<1>UD        g58<8,8,1>UD    g15<8,4,2>UD    { align1 2Q I@3 };

LABEL3:
cmp.ge.f0.0(16) null<1>UD       g91<8,8,1>UD    0x00000100UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL2        UIP:  LABEL2              { align1 1H };
cmp.nz.f0.0(16) g61<1>D         g91<1,1,0>D     0D              { align1 1H $8.src compacted };
shl(16)         g63<1>D         g91<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g107<1>D        -g61<8,8,1>D                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g65<1>D         g57<1,1,0>D     g63<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
cmp.l.f0.0(16)  g67<1>UD        g65<1,1,0>UD    g57<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(8)          g103<2>UD       g65<4,4,1>UD                    { align1 1Q F@1 };
mov(8)          g105<2>UD       g66<4,4,1>UD                    { align1 2Q $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add3(16)        g69<1>D         -g59<8,8,1>D    g55<8,8,1>D     -g67<1,1,1>D { align1 1H I@3 };
mov(8)          g103.1<2>UD     g69<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g105.1<2>UD     g70<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g103UD          g107UD          0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $15 };
add(16)         g91<1>D         g91<1,1,0>D     512D            { align1 1H compacted };

LABEL2:
while(16)       JIP:  LABEL3                                    { align1 1H };
add(8)          g70<1>D         g82<8,4,2>D     11352D          { align1 1Q $12.src };
add(8)          g71<1>D         g15<8,4,2>D     11352D          { align1 2Q $12.src };
mov(16)         g76<1>D         2139095040D                     { align1 1H $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
shl(16)         g92<1>D         g89<8,8,1>D     0x00000002UD    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
cmp.l.f0.0(16)  g72<1>UD        g70<8,8,1>UD    0x00002c58UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g94<1>UD        g92<8,8,1>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(8)          g74<1>D         -g72<8,8,1>D    g82.1<8,4,2>D   { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $15.src };
add(8)          g75<1>D         -g73<8,8,1>D    g15.1<8,4,2>D   { align1 2Q I@3 };

LABEL5:
cmp.ge.f0.0(16) null<1>UD       g94<8,8,1>UD    0x00000120UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
shl(16)         g78<1>D         g94<8,8,1>D     0x00000002UD    { align1 1H $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g80<1>D         g70<1,1,0>D     g78<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
cmp.l.f0.0(16)  g84<1>UD        g80<1,1,0>UD    g70<1,1,0>UD    { align1 1H A@1 compacted };
mov(8)          g108<2>UD       g80<4,4,1>UD                    { align1 1Q $15.src };
mov(8)          g110<2>UD       g81<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(16)         g86<1>D         -g84<1,1,0>D    g74<1,1,0>D     { align1 1H A@2 compacted };
mov(8)          g108.1<2>UD     g86<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g110.1<2>UD     g87<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g108UD          g76UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $1 };
add(16)         g87<1>D         g78<1,1,0>D     4D              { align1 1H $11.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(16)         g96<1>D         g70<1,1,0>D     g87<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
cmp.l.f0.0(16)  g98<1>UD        g96<1,1,0>UD    g70<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g109<2>UD       g96<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g111<2>UD       g97<4,4,1>UD                    { align1 2Q $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(16)         g100<1>D        -g98<1,1,0>D    g74<1,1,0>D     { align1 1H A@3 compacted };
mov(8)          g109.1<2>UD     g100<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g111.1<2>UD     g101<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g109UD          g76UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g101<1>D        g78<1,1,0>D     8D              { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g103<1>D        g70<1,1,0>D     g101<1,1,0>D    { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
cmp.l.f0.0(16)  g105<1>UD       g103<1,1,0>UD   g70<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g110<2>UD       g103<4,4,1>UD                   { align1 1Q $2.src };
mov(8)          g112<2>UD       g104<4,4,1>UD                   { align1 2Q $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g107<1>D        -g105<1,1,0>D   g74<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g110.1<2>UD     g107<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g112.1<2>UD     g108<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g110UD          g76UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $3 };
add(16)         g108<1>D        g78<1,1,0>D     12D             { align1 1H $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g110<1>D        g70<1,1,0>D     g108<1,1,0>D    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g112<1>UD       g110<1,1,0>UD   g70<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g116<2>UD       g110<4,4,1>UD                   { align1 1Q $0.src };
mov(8)          g118<2>UD       g111<4,4,1>UD                   { align1 2Q $0.src };
add(16)         g114<1>D        -g112<1,1,0>D   g74<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g116.1<2>UD     g114<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g118.1<2>UD     g115<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g116UD          g76UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $0 };
add(16)         g94<1>D         g94<8,8,1>D     2048D           { align1 1H };

LABEL4:
while(16)       JIP:  LABEL5                                    { align1 1H };
add(8)          g115<1>D        g82<8,4,2>D     12504D          { align1 1Q };
add(8)          g116<1>D        g15<8,4,2>D     12504D          { align1 2Q $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g95<1>UD        g92<8,8,1>UD                    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g117<1>UD       g115<8,8,1>UD   0x000030d8UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(8)          g119<1>D        -g117<8,8,1>D   g82.1<8,4,2>D   { align1 1Q I@1 };
add(8)          g120<1>D        -g118<8,8,1>D   g15.1<8,4,2>D   { align1 2Q I@2 };

LABEL7:
cmp.ge.f0.0(16) null<1>UD       g95<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL6        UIP:  LABEL6              { align1 1H };
shl(16)         g121<1>D        g95<8,8,1>D     0x00000002UD    { align1 1H };
add(16)         g123<1>D        g115<1,1,0>D    g121<1,1,0>D    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g125<1>UD       g123<1,1,0>UD   g115<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g3<2>UD         g123<4,4,1>UD                   { align1 1Q F@1 };
mov(8)          g5<2>UD         g124<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g1<1>D          -g125<1,1,0>D   g119<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g3.1<2>UD       g1<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g5.1<2>UD       g2<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g3UD            g13UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $4 };
add(16)         g2<1>D          g121<1,1,0>D    4D              { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g4<1>D          g115<1,1,0>D    g2<1,1,0>D      { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g6<1>UD         g4<1,1,0>UD     g115<1,1,0>UD   { align1 1H @1 $1.dst compacted };
mov(8)          g17<2>UD        g4<4,4,1>UD                     { align1 1Q $1.src };
mov(8)          g19<2>UD        g5<4,4,1>UD                     { align1 2Q $1.src };
add(16)         g8<1>D          -g6<1,1,0>D     g119<1,1,0>D    { align1 1H @3 $1.dst compacted };
mov(8)          g17.1<2>UD      g8<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g19.1<2>UD      g9<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g17UD           g13UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $5 };
add(16)         g9<1>D          g121<1,1,0>D    8D              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g11<1>D         g115<1,1,0>D    g9<1,1,0>D      { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g17<1>UD        g11<1,1,0>UD    g115<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g21<2>UD        g11<4,4,1>UD                    { align1 1Q F@4 };
mov(8)          g23<2>UD        g12<4,4,1>UD                    { align1 2Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g19<1>D         -g17<1,1,0>D    g119<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g21.1<2>UD      g19<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g23.1<2>UD      g20<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g21UD           g13UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $6 };
add(16)         g20<1>D         g121<1,1,0>D    12D             { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g22<1>D         g115<1,1,0>D    g20<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g24<1>UD        g22<1,1,0>UD    g115<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g28<2>UD        g22<4,4,1>UD                    { align1 1Q $6.src };
mov(8)          g30<2>UD        g23<4,4,1>UD                    { align1 2Q $6.dst };
add(16)         g26<1>D         -g24<1,1,0>D    g119<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g28.1<2>UD      g26<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g30.1<2>UD      g27<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g28UD           g13UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $6 };
add(16)         g95<1>D         g95<8,8,1>D     2048D           { align1 1H };

LABEL6:
while(16)       JIP:  LABEL7                                    { align1 1H };
add(8)          g27<1>D         g82<8,4,2>D     12696D          { align1 1Q };
add(8)          g28<1>D         g15<8,4,2>D     12696D          { align1 2Q $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g29<1>UD        g27<8,8,1>UD    0x00003198UD    { align1 1H I@1 };
cmp.l.f0.0(16)  null<1>UD       g92<8,8,1>UD    0x00000018UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(8)          g31<1>D         -g29<8,8,1>D    g82.1<8,4,2>D   { align1 1Q $6.dst };
add(8)          g32<1>D         -g30<8,8,1>D    g15.1<8,4,2>D   { align1 2Q @3 $6.dst };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL8              { align1 1H };
shl(16)         g33<1>D         g89<8,8,1>D     0x00000004UD    { align1 1H };
add(16)         g35<1>D         g27<1,1,0>D     g33<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g37<1>UD        g35<1,1,0>UD    g27<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g41<2>UD        g35<4,4,1>UD                    { align1 1Q };
mov(8)          g43<2>UD        g36<4,4,1>UD                    { align1 2Q $11.dst };
add(16)         g39<1>D         -g37<1,1,0>D    g31<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g41.1<2>UD      g39<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g43.1<2>UD      g40<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g41UD           g76UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $7 };
add(16)         g40<1>D         g33<1,1,0>D     4D              { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g42<1>D         g27<1,1,0>D     g40<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(16)  g44<1>UD        g42<1,1,0>UD    g27<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g48<2>UD        g42<4,4,1>UD                    { align1 1Q };
mov(8)          g50<2>UD        g43<4,4,1>UD                    { align1 2Q F@7 };
add(16)         g46<1>D         -g44<1,1,0>D    g31<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g48.1<2>UD      g46<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g50.1<2>UD      g47<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g48UD           g76UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $8 };
add(16)         g47<1>D         g33<1,1,0>D     8D              { align1 1H $8.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g49<1>D         g27<1,1,0>D     g47<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
cmp.l.f0.0(16)  g51<1>UD        g49<1,1,0>UD    g27<1,1,0>UD    { align1 1H A@1 compacted };
mov(8)          g55<2>UD        g49<4,4,1>UD                    { align1 1Q };
mov(8)          g57<2>UD        g50<4,4,1>UD                    { align1 2Q };
add(16)         g53<1>D         -g51<1,1,0>D    g31<1,1,0>D     { align1 1H A@3 compacted };
mov(8)          g55.1<2>UD      g53<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g57.1<2>UD      g54<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g55UD           g76UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $9 };
add(16)         g54<1>D         g33<1,1,0>D     12D             { align1 1H $9.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g56<1>D         g27<1,1,0>D     g54<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
cmp.l.f0.0(16)  g58<1>UD        g56<1,1,0>UD    g27<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g62<2>UD        g56<4,4,1>UD                    { align1 1Q };
mov(8)          g64<2>UD        g57<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g60<1>D         -g58<1,1,0>D    g31<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g62.1<2>UD      g60<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g64.1<2>UD      g61<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g62UD           g76UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $0 };

LABEL8:
endif(16)       JIP:  LABEL9                                    { align1 1H };

LABEL9:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_BFS_begin_code[] = {
    0x80000065, 0x6f058220, 0x02000004, 0xffffffc0,
    0x80030061, 0x58054410, 0x00000000, 0x76543210,
    0x00040061, 0x0d054660, 0x00000000, 0x00000000,
    0xe06b0065, 0x0ff10043, 0xe2701c40, 0x00016f03,
    0x64581c40, 0x00805895, 0x00041b69, 0x6d058660,
    0x02466b05, 0x00000004, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01240000,
    0xfa00700c, 0x00380000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x6f050160,
    0x00465805, 0x00000000, 0xa0711940, 0x6d006f02,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x21520061, 0x001102cc, 0x2a0f0061, 0x001102cc,
    0x00030061, 0x42260aa0, 0x000002a4, 0x00000000,
    0x00130061, 0x60260aa0, 0x000002a4, 0x00000000,
    0x00030061, 0x44260aa0, 0x000002e4, 0x00000000,
    0x00130061, 0x62260aa0, 0x000002e4, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x21320061, 0x001103cc, 0x2a340061, 0x001103cc,
    0x00030061, 0x54260aa0, 0x00000364, 0x00000000,
    0x00130061, 0x64260aa0, 0x00000364, 0x00000000,
    0x00030061, 0x3e260aa0, 0x000003a4, 0x00000000,
    0x00130061, 0x40260aa0, 0x000003a4, 0x00000000,
    0x00030061, 0x15260aa0, 0x000003e4, 0x00000000,
    0x00130061, 0x17260aa0, 0x000003e4, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x21560061, 0x001104cc, 0x2a660061, 0x001104cc,
    0x21520061, 0x00110204, 0x2a0f0061, 0x00110204,
    0x21420061, 0x0011025c, 0x2a600061, 0x0011025c,
    0x21440061, 0x0011026c, 0x2a620061, 0x0011026c,
    0x21320061, 0x00110304, 0x2a340061, 0x00110304,
    0x21540061, 0x00110344, 0x2a640061, 0x00110344,
    0x213e0061, 0x0011035c, 0x2a400061, 0x0011035c,
    0x21150061, 0x0011036c, 0x2a170061, 0x0011036c,
    0x21560061, 0x00110404, 0x2a660061, 0x00110404,
    0xa1461640, 0x024e3e03, 0xaa681540, 0x024e4003,
    0x00031a70, 0x47050220, 0x52464605, 0x00443e06,
    0x00030061, 0x11060220, 0x00344605, 0x00000000,
    0x00131b70, 0x69050220, 0x52466805, 0x00444006,
    0x00130061, 0x13060220, 0x00346805, 0x00000000,
    0xec591f65, 0x1ff07103, 0x00031d40, 0x48052660,
    0x06464705, 0x00443e26, 0x00131c40, 0x6a052660,
    0x06466905, 0x00444026, 0x00031a61, 0x11260220,
    0x00344805, 0x00000000, 0x00131a61, 0x13260220,
    0x00346a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x07140000,
    0xfb041124, 0x00040000, 0x01040022, 0x0001c060,
    0x00000cf8, 0x00000cf8, 0x00030061, 0x19050220,
    0x00444206, 0x00000000, 0x00130061, 0x1a050220,
    0x00446006, 0x00000000, 0x00030061, 0x1b050220,
    0x00444226, 0x00000000, 0x00130061, 0x1c050220,
    0x00446026, 0x00000000, 0x00030061, 0x1d050220,
    0x00444406, 0x00000000, 0x00130061, 0x1e050220,
    0x00446206, 0x00000000, 0x00030061, 0x1f050220,
    0x00444426, 0x00000000, 0x00130061, 0x20050220,
    0x00446226, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xfb0c1524, 0x003c1944, 0xa1493240, 0x010e1503,
    0xaa723240, 0x010e1703, 0xa14c0040, 0x020e1503,
    0xaa750040, 0x020e1703, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00031761, 0x1e050220,
    0x00443206, 0x00000000, 0x80103201, 0x00000000,
    0x00000000, 0x00000000, 0x00131761, 0x1f050220,
    0x00443406, 0x00000000, 0x00033261, 0x20050220,
    0x00443226, 0x00000000, 0x00130061, 0x21050220,
    0x00443426, 0x00000000, 0x00030061, 0x22050220,
    0x00443e06, 0x00000000, 0x00130061, 0x23050220,
    0x00444006, 0x00000000, 0x00030061, 0x24050220,
    0x00443e26, 0x00000000, 0x00130061, 0x25050220,
    0x00444026, 0x00000000, 0x00030070, 0x4a050220,
    0x52464905, 0x00441506, 0x00130070, 0x73050220,
    0x52467205, 0x00441706, 0x00033261, 0x1a060220,
    0x00344905, 0x00000000, 0x00133261, 0x1c060220,
    0x00347205, 0x00000000, 0x00030061, 0x26060220,
    0x00344c05, 0x00000000, 0x00130061, 0x28060220,
    0x00347505, 0x00000000, 0x00030070, 0x4d050220,
    0x52464c05, 0x00441506, 0x00130070, 0x76050220,
    0x52467505, 0x00441706, 0x00031f40, 0x4b052660,
    0x06464a05, 0x00441526, 0x00131f40, 0x74052660,
    0x06467305, 0x00441726, 0x00031c40, 0x4e052660,
    0x06464d05, 0x00441526, 0x00131c40, 0x77052660,
    0x06467605, 0x00441726, 0x00031c61, 0x1a260220,
    0x00344b05, 0x00000000, 0x00131c61, 0x1c260220,
    0x00347405, 0x00000000, 0x00031c61, 0x26260220,
    0x00344e05, 0x00000000, 0x00131c61, 0x28260220,
    0x00347705, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xfb0c1a24, 0x003c1e44, 0x00031761, 0x2a050220,
    0x00445406, 0x00000000, 0x00131761, 0x2b050220,
    0x00446406, 0x00000000, 0x00030061, 0x2c050220,
    0x00445426, 0x00000000, 0x00130061, 0x2d050220,
    0x00446426, 0x00000000, 0x00031261, 0x2e050220,
    0x00445606, 0x00000000, 0x00131161, 0x2f050220,
    0x00446606, 0x00000000, 0x00030061, 0x30050220,
    0x00445626, 0x00000000, 0x00130061, 0x31050220,
    0x00446626, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xfb0c2624, 0x003c2a44, 0xa14f0040, 0x030e1503,
    0xaa780040, 0x030e1703, 0x00040061, 0x05050660,
    0x00000444, 0x00000000, 0x00040061, 0x09050660,
    0x00000244, 0x00000000, 0x00040061, 0x0b050660,
    0x00000264, 0x00000000, 0x00031d70, 0x50050220,
    0x52464f05, 0x00441506, 0x00131d70, 0x79050220,
    0x52467805, 0x00441706, 0x00030061, 0x42060220,
    0x00344f05, 0x00000000, 0x00130061, 0x44060220,
    0x00347805, 0x00000000, 0x00031c40, 0x51052660,
    0x06465005, 0x00441526, 0x00131c40, 0x7a052660,
    0x06467905, 0x00441726, 0x00031a61, 0x42260220,
    0x00345105, 0x00000000, 0x00131a61, 0x44260220,
    0x00347a05, 0x00000000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x00000000,
    0xfb0c4224, 0x003c0544, 0x00030040, 0x58058660,
    0x06445206, 0x0005f82c, 0x00130040, 0x7c058660,
    0x06440f06, 0x0005f82c, 0x00031a70, 0x5b050220,
    0x52465805, 0x00445206, 0x00131a70, 0x7d050220,
    0x52467c05, 0x00440f06, 0x00033561, 0x43060220,
    0x00345805, 0x00000000, 0x00133561, 0x45060220,
    0x00347c05, 0x00000000, 0x00031c40, 0x5c052660,
    0x06465b05, 0x00445226, 0x00131c40, 0x7e052660,
    0x06467d05, 0x00440f26, 0x00031a61, 0x43260220,
    0x00345c05, 0x00000000, 0x00131a61, 0x45260220,
    0x00347e05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xfb0c4324, 0x00040d14, 0x00043661, 0x44054660,
    0x00000000, 0x00000001, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x00000000,
    0xfb0c3224, 0x00044414, 0x00030040, 0x5d058660,
    0x06445206, 0x00002c2c, 0x00130040, 0x7f058660,
    0x06440f06, 0x00002c2c, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x36054660,
    0x00000000, 0x00000000, 0x00043561, 0x38050660,
    0x00460705, 0x00000000, 0x00040061, 0x3a054660,
    0x00000000, 0x00000000, 0x00040061, 0x3c054660,
    0x00000000, 0x00000000, 0x00031e70, 0x5e050220,
    0x52465d05, 0x00445206, 0x80102001, 0x00000000,
    0x00000000, 0x00000000, 0x00131e70, 0x01050220,
    0x52467f05, 0x00440f06, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00033761, 0x45060220,
    0x00345d05, 0x00000000, 0x00130061, 0x47060220,
    0x00347f05, 0x00000000, 0x00031c40, 0x5f052660,
    0x06465e05, 0x00445226, 0x00131c40, 0x02052660,
    0x06460105, 0x00440f26, 0x00031a61, 0x45260220,
    0x00345f05, 0x00000000, 0x00131a61, 0x47260220,
    0x00340205, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xfb0c4524, 0x003c3644, 0x00031340, 0x03058660,
    0x06445206, 0x0000082e, 0x00131140, 0x04058660,
    0x06440f06, 0x0000082e, 0x00040061, 0x4a054120,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xe7051a70, 0x82e00303,
    0x00033861, 0x46060220, 0x00340305, 0x00000000,
    0x00133861, 0x48060220, 0x00340405, 0x00000000,
    0x00031b40, 0x60052660, 0x06460505, 0x00445226,
    0x00131c40, 0x06052660, 0x06460605, 0x00440f26,
    0x00031a61, 0x46260220, 0x00346005, 0x00000000,
    0x00131a61, 0x48260220, 0x00340605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x00000000, 0xf7084624, 0x00024a14,
    0x00030040, 0x07058660, 0x06445206, 0x00002c3c,
    0x00130040, 0x08058660, 0x06440f06, 0x00002c3c,
    0x00043961, 0x4a054660, 0x00000000, 0x00000000,
    0x00040061, 0x4c054660, 0x00000000, 0x00000000,
    0x00040061, 0x4e054660, 0x00000000, 0x00000000,
    0x00040061, 0x50054660, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00041d70, 0x09058220, 0x52460705, 0x00002c3c,
    0x00030061, 0x54060220, 0x00340705, 0x00000000,
    0x00130061, 0x56060220, 0x00340805, 0x00000000,
    0x00031b40, 0x61052660, 0x06460905, 0x00445226,
    0x00131c40, 0x0a052660, 0x06460a05, 0x00440f26,
    0x00031a61, 0x54260220, 0x00346105, 0x00000000,
    0x00131a61, 0x56260220, 0x00340a05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044a31, 0x00000000, 0xfb0c5424, 0x003c4a44,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x19440000, 0xfb043e24, 0x003c0000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xa1213640, 0x010e3e03, 0x80103301, 0x00000000,
    0x00000000, 0x00000000, 0xaa223640, 0x010e4003,
    0xa1633740, 0x020e3203, 0x80103401, 0x00000000,
    0x00000000, 0x00000000, 0xaa263740, 0x020e3403,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xe7231b70, 0x01002103, 0x00033a61, 0x55060220,
    0x00342105, 0x00000000, 0x00133a61, 0x57060220,
    0x00342205, 0x00000000, 0x00031d70, 0x64050220,
    0x52466305, 0x00443206, 0x80103401, 0x00000000,
    0x00000000, 0x00000000, 0x00131d70, 0x27050220,
    0x52462605, 0x00443406, 0x00030061, 0x5b060220,
    0x00346305, 0x00000000, 0x00130061, 0x5d060220,
    0x00342605, 0x00000000, 0x00031f40, 0x62052660,
    0x06462305, 0x00443e26, 0x00131f40, 0x24052660,
    0x06462405, 0x00444026, 0x00031e40, 0x65052660,
    0x06466405, 0x00443226, 0x80103401, 0x00000000,
    0x00000000, 0x00000000, 0x00131e40, 0x28052660,
    0x06462705, 0x00443426, 0x00031c61, 0x55260220,
    0x00346205, 0x00000000, 0x00131c61, 0x57260220,
    0x00342405, 0x00000000, 0x00031c61, 0x5b260220,
    0x00346505, 0x00000000, 0x00131c61, 0x5d260220,
    0x00342805, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x25440000,
    0xfb045524, 0x003c0000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00042661, 0x42050660,
    0x00461905, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00042661, 0x44050660,
    0x00461b05, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x00042661, 0x46050660,
    0x00461d05, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x00042b61, 0x48050660,
    0x00462505, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x00000000,
    0xfb0c5b24, 0x003c4244, 0xa12d3440, 0x030e3203,
    0xaa2e3440, 0x030e3403, 0x00042b61, 0x60050660,
    0x00462705, 0x00000000, 0x00042b61, 0x62050660,
    0x00462905, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xe72f1b70, 0x03002d03,
    0x00033c61, 0x5c060220, 0x00342d05, 0x00000000,
    0x00133c61, 0x5e060220, 0x00342e05, 0x00000000,
    0x00031b40, 0x66052660, 0x06462f05, 0x00443226,
    0x00131c40, 0x30052660, 0x06463005, 0x00443426,
    0x00031a61, 0x5c260220, 0x00346605, 0x00000000,
    0x00131a61, 0x5e260220, 0x00343005, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044d31, 0x00000000, 0xfb0c5c24, 0x000c6024,
    0xa1690040, 0x010e5203, 0xaa313440, 0x010e0f03,
    0x00040061, 0x65054660, 0x00000000, 0x00000000,
    0x00040061, 0x67054660, 0x00000000, 0x00000000,
    0x00031c70, 0x6a050220, 0x52466905, 0x00445206,
    0x00131c70, 0x32050220, 0x52463105, 0x00440f06,
    0x00033d61, 0x61060220, 0x00346905, 0x00000000,
    0x00133d61, 0x63060220, 0x00343105, 0x00000000,
    0x00031c40, 0x6b052660, 0x06466a05, 0x00445226,
    0x00131c40, 0x33052660, 0x06463205, 0x00440f26,
    0x00031a61, 0x61260220, 0x00346b05, 0x00000000,
    0x00131a61, 0x63260220, 0x00343305, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x00000000, 0xfb0c6124, 0x000c6524,
    0xa16c0040, 0x040e1503, 0xaa340040, 0x040e1703,
    0x00031a70, 0x6d050220, 0x52466c05, 0x00441506,
    0x00131a70, 0x35050220, 0x52463405, 0x00441706,
    0x00033e61, 0x66060220, 0x00346c05, 0x00000000,
    0x00133e61, 0x68060220, 0x00343405, 0x00000000,
    0x00031c40, 0x6e052660, 0x06466d05, 0x00441526,
    0x80103801, 0x00000000, 0x00000000, 0x00000000,
    0x00131c40, 0x36052660, 0x06463505, 0x00441726,
    0x00031a61, 0x66260220, 0x00346e05, 0x00000000,
    0x00131a61, 0x68260220, 0x00343605, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044f31, 0x00000000, 0xfb0c6624, 0x003c4a44,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00033861, 0x37050220, 0x00445226, 0x00000000,
    0x00133861, 0x38050220, 0x00440f26, 0x00000000,
    0xa1393840, 0x028e5203, 0xaa3a3840, 0x028e0f03,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x00043c61, 0x5b050220, 0x00465905, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00031b70, 0x3b050220, 0x52463905, 0x00445206,
    0x80103801, 0x00000000, 0x00000000, 0x00000000,
    0x00131b70, 0x3c050220, 0x52463a05, 0x00440f06,
    0x00041a70, 0x00018220, 0x42465b05, 0x00000100,
    0x01040028, 0x0001c660, 0x00000120, 0x00000120,
    0xae3d3870, 0x00005b03, 0x00040069, 0x3f058660,
    0x02465b05, 0x00000002, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x00041a61, 0x6b052660,
    0x00463d05, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0411a40, 0x3f003902,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x27431970, 0x39004103, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x00031161, 0x67060220,
    0x00344105, 0x00000000, 0x00133f61, 0x69060220,
    0x00344205, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x00041b52, 0x45042e68,
    0x0e2e3b05, 0x43053705, 0x00031961, 0x67260220,
    0x00344505, 0x00000000, 0x00131a61, 0x69260220,
    0x00344605, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044f31, 0x00000000,
    0xfb0c6724, 0x00046b14, 0xa05b0040, 0x20005b03,
    0x00040027, 0x00014060, 0x00000000, 0xfffffed0,
    0x00033c40, 0x46058660, 0x06445206, 0x00002c58,
    0x00133c40, 0x47058660, 0x06440f06, 0x00002c58,
    0x00043f61, 0x4c054660, 0x00000000, 0x7f800000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x00041d69, 0x5c058660, 0x02465905, 0x00000002,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x00041b70, 0x48058220, 0x52464605, 0x00002c58,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x00041a61, 0x5e050220, 0x00465c05, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x00031a40, 0x4a052660, 0x06464805, 0x00445226,
    0x80103f01, 0x00000000, 0x00000000, 0x00000000,
    0x00131b40, 0x4b052660, 0x06464905, 0x00440f26,
    0x00041a70, 0x00018220, 0x42465e05, 0x00000120,
    0x01040028, 0x0001c660, 0x00000358, 0x00000358,
    0x00043f69, 0x4e058660, 0x02465e05, 0x00000002,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0xa0501940, 0x4e004602, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x27540970, 0x46005003,
    0x00033f61, 0x6c060220, 0x00345005, 0x00000000,
    0x00130061, 0x6e060220, 0x00345105, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0xa0560a40, 0x4a025402, 0x00031961, 0x6c260220,
    0x00345605, 0x00000000, 0x00131a61, 0x6e260220,
    0x00345705, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb0c6c24, 0x00044c14, 0xa0573b40, 0x00404e03,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0xa0601940, 0x57004602, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x27621970, 0x46006003,
    0x00033161, 0x6d060220, 0x00346005, 0x00000000,
    0x00133161, 0x6f060220, 0x00346105, 0x00000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0xa0640b40, 0x4a026202, 0x00031961, 0x6d260220,
    0x00346405, 0x00000000, 0x00131a61, 0x6f260220,
    0x00346505, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xfb0c6d24, 0x00044c14, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0xa0651140, 0x00804e03,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0xa0670940, 0x65004602, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x27691970, 0x46006703,
    0x00033261, 0x6e060220, 0x00346705, 0x00000000,
    0x00133261, 0x70060220, 0x00346805, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa06b1b40, 0x4a026902, 0x00031961, 0x6e260220,
    0x00346b05, 0x00000000, 0x00131a61, 0x70260220,
    0x00346c05, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xfb0c6e24, 0x00044c14, 0xa06c3240, 0x00c04e03,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xa06e1940, 0x6c004602, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x27701970, 0x46006e03,
    0x00033061, 0x74060220, 0x00346e05, 0x00000000,
    0x00133061, 0x76060220, 0x00346f05, 0x00000000,
    0xa0721b40, 0x4a027002, 0x00031961, 0x74260220,
    0x00347205, 0x00000000, 0x00131a61, 0x76260220,
    0x00347305, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x00000000,
    0xfb0c7424, 0x00044c14, 0x00040040, 0x5e058660,
    0x06465e05, 0x00000800, 0x00040027, 0x00014060,
    0x00000000, 0xfffffc98, 0x00030040, 0x73058660,
    0x06445206, 0x000030d8, 0x00133040, 0x74058660,
    0x06440f06, 0x000030d8, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x00041c61, 0x5f050220,
    0x00465c05, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00041a70, 0x75058220,
    0x52467305, 0x000030d8, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00031940, 0x77052660,
    0x06467505, 0x00445226, 0x00131a40, 0x78052660,
    0x06467605, 0x00440f26, 0x00041a70, 0x00018220,
    0x42465f05, 0x00000030, 0x01040028, 0x0001c660,
    0x000002d8, 0x000002d8, 0x00040069, 0x79058660,
    0x02465f05, 0x00000002, 0xa07b1940, 0x79007302,
    0x277d1970, 0x73007b03, 0x00031161, 0x03060220,
    0x00347b05, 0x00000000, 0x00130061, 0x05060220,
    0x00347c05, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa0011b40, 0x77027d02,
    0x00031961, 0x03260220, 0x00340105, 0x00000000,
    0x00131a61, 0x05260220, 0x00340205, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x00000000, 0xfb0c0324, 0x00040d14,
    0xa0023440, 0x00407903, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xa0041940, 0x02007302,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x27069170, 0x73000403, 0x00033161, 0x11060220,
    0x00340405, 0x00000000, 0x00133161, 0x13060220,
    0x00340505, 0x00000000, 0xa008b140, 0x77020602,
    0x00031961, 0x11260220, 0x00340805, 0x00000000,
    0x00131a61, 0x13260220, 0x00340905, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x00000000, 0xfb0c1124, 0x00040d14,
    0xa0090040, 0x00807903, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa00b1940, 0x09007302,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x27111970, 0x73000b03, 0x00031461, 0x15060220,
    0x00340b05, 0x00000000, 0x00131361, 0x17060220,
    0x00340c05, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa0131b40, 0x77021102,
    0x00031961, 0x15260220, 0x00341305, 0x00000000,
    0x00131a61, 0x17260220, 0x00341405, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xfb0c1524, 0x00040d14,
    0xa0143640, 0x00c07903, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xa0161940, 0x14007302,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x27181970, 0x73001603, 0x00033661, 0x1c060220,
    0x00341605, 0x00000000, 0x00132661, 0x1e060220,
    0x00341705, 0x00000000, 0xa01a1b40, 0x77021802,
    0x00031961, 0x1c260220, 0x00341a05, 0x00000000,
    0x00131a61, 0x1e260220, 0x00341b05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xfb0c1c24, 0x00040d14,
    0x00040040, 0x5f058660, 0x06465f05, 0x00000800,
    0x00040027, 0x00014060, 0x00000000, 0xfffffd18,
    0x00030040, 0x1b058660, 0x06445206, 0x00003198,
    0x00133640, 0x1c058660, 0x06440f06, 0x00003198,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041970, 0x1d058220, 0x52461b05, 0x00003198,
    0x00040070, 0x00018220, 0x52465c05, 0x00000018,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00032640, 0x1f052660, 0x06461d05, 0x00445226,
    0x0013b640, 0x20052660, 0x06461e05, 0x00440f26,
    0x01040022, 0x0001c060, 0x000002c8, 0x000002c8,
    0x00040069, 0x21058660, 0x02465905, 0x00000004,
    0xa0231940, 0x21001b02, 0x27251970, 0x1b002303,
    0x00030061, 0x29060220, 0x00342305, 0x00000000,
    0x00132b61, 0x2b060220, 0x00342405, 0x00000000,
    0xa0271b40, 0x1f022502, 0x00031961, 0x29260220,
    0x00342705, 0x00000000, 0x00131a61, 0x2b260220,
    0x00342805, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x00000000,
    0xfb0c2924, 0x00044c14, 0xa0283740, 0x00402103,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xa02a1940, 0x28001b02, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x272c1970, 0x1b002a03,
    0x00030061, 0x30060220, 0x00342a05, 0x00000000,
    0x00131761, 0x32060220, 0x00342b05, 0x00000000,
    0xa02e1b40, 0x1f022c02, 0x00031961, 0x30260220,
    0x00342e05, 0x00000000, 0x00131a61, 0x32260220,
    0x00342f05, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xfb0c3024, 0x00044c14, 0xa02f3840, 0x00802103,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xa0311940, 0x2f001b02, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x27330970, 0x1b003103,
    0x00030061, 0x37060220, 0x00343105, 0x00000000,
    0x00130061, 0x39060220, 0x00343205, 0x00000000,
    0xa0350b40, 0x1f023302, 0x00031961, 0x37260220,
    0x00343505, 0x00000000, 0x00131a61, 0x39260220,
    0x00343605, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x00000000,
    0xfb0c3724, 0x00044c14, 0xa0363940, 0x00c02103,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xa0381940, 0x36001b02, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x273a1970, 0x1b003803,
    0x00030061, 0x3e060220, 0x00343805, 0x00000000,
    0x00130061, 0x40060220, 0x00343905, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xa03c1b40, 0x1f023a02, 0x00031961, 0x3e260220,
    0x00343c05, 0x00000000, 0x00131a61, 0x40260220,
    0x00343d05, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x00000000,
    0xfb0c3e24, 0x00044c14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80030061, 0x7e050220,
    0x00460005, 0x00000000, 0x80040931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_BFS_begin = {
   .prog_data = {
      .base.nr_params = 27,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 4,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 7440,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_BFS_begin_relocs,
      .base.uses_atomic_load_store = false,
      .local_size = { 512, 1, 1 },
      .prog_offset = { 0, 0, 0 },
      .prog_mask = 2,
      .prog_spilled = 0,
      .uses_barrier = false,
      .uses_num_work_groups = false,
      .push.per_thread.dwords = 0,
      .push.per_thread.regs = 0,
      .push.per_thread.size = 0,
      .push.cross_thread.dwords = 27,
      .push.cross_thread.regs = 4,
      .push.cross_thread.size = 128,
   },
   .args_size = 76,
   .arg_count = 11,
   .args = gfx125_bvh_build_BFS_begin_args,
   .code = gfx125_bvh_build_BFS_begin_code,
};
const char *gfx125_bvh_build_BFS_begin_sha1 = "35c4776ff1f7ea27313506e3db38ec32276f3a0c";

#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_DFS_DFS_trivial_batchable_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_DFS_DFS_trivial_batchable_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_DFS_DFS_trivial_batchable_args[] = {
   { 0, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g8<1>UD         g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g56<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g8UD            nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g123<1>UW       0x76543210V                     { align1 WE_all 1Q };
mul(8)          acc0<1>UD       g56<8,8,1>UD    0x0058UW        { align1 1Q I@2 };
mul(16)         g97<1>D         g56<1,1,0>D     88W             { align1 1H I@3 compacted };
add(8)          g123.8<1>UW     g123<1,1,0>UW   0x0008UW        { align1 WE_all 1Q I@3 compacted };
mach(8)         g95<1>UD        g56<1,1,0>UD    0x00000058UD    { align1 1Q compacted AccWrEnable };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g50<1>D         g123<8,8,1>UW                   { align1 1H };
mul(8)          acc0<1>UD       g57<8,8,1>UD    0x0058UW        { align1 2Q };
and(16)         g24<1>UD        g50<1,1,0>UD    0x0000000fUD    { align1 1H I@2 compacted };
mach(8)         g96<1>UD        g57<8,8,1>UD    0x00000058UD    { align1 2Q AccWrEnable };
mov(16)         g119<2>UW       g24<8,8,1>UD                    { align1 1H I@2 };
mov(16)         g52<1>UD        g24<16,8,2>UW                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g99<1>D         g2<0,1,0>D      g97<1,1,0>D     { align1 1H I@7 compacted };
cmp.l.f0.0(16)  g121<1>UD       g99<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g110<2>UD       g99<4,4,1>UD                    { align1 1Q };
mov(8)          g112<2>UD       g100<4,4,1>UD                   { align1 2Q };
add(16)         g125<1>D        g99<1,1,0>D     32D             { align1 1H compacted };
add(16)         g6<1>D          g99<1,1,0>D     60D             { align1 1H compacted };
add(16)         g11<1>D         g99<1,1,0>D     48D             { align1 1H compacted };
cmp.l.f0.0(16)  g3<1>UD         g125<1,1,0>UD   g99<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g102<2>UD       g125<4,4,1>UD                   { align1 1Q };
mov(8)          g104<2>UD       g126<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g8<1>UD         g6<1,1,0>UD     g99<1,1,0>UD    { align1 1H I@5 compacted };
mov(8)          g106<2>UD       g6<4,4,1>UD                     { align1 1Q };
mov(8)          g108<2>UD       g7<4,4,1>UD                     { align1 2Q };
add3(16)        g124<1>D        g2.1<0,1,0>D    g95<8,8,1>D     -g121<1,1,1>D { align1 1H };
mov(8)          g114<2>UD       g11<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g116<2>UD       g12<4,4,1>UD                    { align1 2Q I@7 };
cmp.l.f0.0(16)  g16<1>UD        g11<1,1,0>UD    g99<1,1,0>UD    { align1 1H compacted };
add(16)         g10<1>D         -g8<1,1,0>D     g124<1,1,0>D    { align1 1H I@4 compacted };
mov(8)          g110.1<2>UD     g124<4,4,1>UD                   { align1 1Q };
mov(8)          g112.1<2>UD     g125<4,4,1>UD                   { align1 2Q };
add(16)         g5<1>D          -g3<1,1,0>D     g124<1,1,0>D    { align1 1H compacted };
add(16)         g18<1>D         -g16<1,1,0>D    g124<1,1,0>D    { align1 1H I@5 compacted };
mov(8)          g106.1<2>UD     g10<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g108.1<2>UD     g11<4,4,1>UD                    { align1 2Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g42UD           g110UD          nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(8)          g102.1<2>UD     g5<4,4,1>UD                     { align1 1Q I@4 };
mov(8)          g104.1<2>UD     g6<4,4,1>UD                     { align1 2Q I@5 };
mov(8)          g114.1<2>UD     g18<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g116.1<2>UD     g19<4,4,1>UD                    { align1 2Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g84UD           g106UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g38UD           g102UD          nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g19UD           g114UD          nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
mov(16)         g14<2>UW        g84<8,8,1>UD                    { align1 1H $2.dst };
and(16)         g23<1>UD        g19<1,1,0>UD    0x00000001UD    { align1 1H $4.dst compacted };
mov(16)         g54<1>UD        g21<16,8,2>UW                   { align1 1H $4.dst };
cmp.nz.f0.0(16) g56<1>D         g23<1,1,0>D     0D              { align1 1H I@2 compacted };
cmp.l.f0.0(16)  null<1>D        g52<8,8,1>D     g54<8,8,1>D     { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
shl(16)         g25<1>D         g52<8,8,1>D     0x00000005UD    { align1 1H };
shr(16)         g27<1>UD        g52<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
add(16)         g29<1>D         g46<1,1,0>D     g25<1,1,0>D     { align1 1H @2 $1.dst compacted };
cmp.l.f0.0(16)  g31<1>UD        g29<1,1,0>UD    g46<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g62<2>UD        g29<4,4,1>UD                    { align1 1Q };
mov(8)          g64<2>UD        g30<4,4,1>UD                    { align1 2Q };
add(16)         g35<1>D         g29<1,1,0>D     16D             { align1 1H compacted };
add3(16)        g33<1>D         g48<8,8,1>D     g27<8,8,1>D     -g31<1,1,1>D { align1 1H @4 $1.dst };
cmp.l.f0.0(16)  g58<1>UD        g35<1,1,0>UD    g29<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g115<2>UD       g35<4,4,1>UD                    { align1 1Q $4.src };
mov(8)          g117<2>UD       g36<4,4,1>UD                    { align1 2Q $4.src };
mov(8)          g62.1<2>UD      g33<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g64.1<2>UD      g34<4,4,1>UD                    { align1 2Q I@5 };
add(16)         g60<1>D         -g58<1,1,0>D    g33<1,1,0>D     { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g2UD            g62UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mov(8)          g115.1<2>UD     g60<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g117.1<2>UD     g61<4,4,1>UD                    { align1 2Q I@2 };
mov(16)         g64<1>UD        g2<8,8,1>UD                     { align1 1H $5.dst };
mov(16)         g66<1>UD        g4<8,8,1>UD                     { align1 1H $5.dst };
mov(16)         g68<1>UD        g6<8,8,1>UD                     { align1 1H $5.dst };
mov(16)         g18<1>UD        g8<8,8,1>UD                     { align1 1H $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g2UD            g115UD          nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
mov(16)         g20<1>UD        g2<8,8,1>UD                     { align1 1H $4.dst };
mov(16)         g60<1>UD        g4<8,8,1>UD                     { align1 1H $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g62<1>UD        g6<8,8,1>UD                     { align1 1H $4.dst };
mov(16)         g36<1>UD        g8<8,8,1>UD                     { align1 1H $4.dst };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g18<1>UD        0x00000000UD                    { align1 1H I@5 };
mov(16)         g68<1>UD        0x7f800000UD                    { align1 1H I@7 };
mov(16)         g66<1>UD        0x7f800000UD                    { align1 1H I@7 };
mov(16)         g64<1>UD        0x7f800000UD                    { align1 1H };
mov(16)         g36<1>UD        0x80000000UD                    { align1 1H I@6 };
mov(16)         g62<1>UD        0xff800000UD                    { align1 1H I@7 };
mov(16)         g60<1>UD        0xff800000UD                    { align1 1H I@7 };
mov(16)         g20<1>UD        0xff800000UD                    { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
mov(16)         g22<1>UD        g64<8,8,1>UD                    { align1 1H I@6 };
mov(16)         g24<1>UD        g66<8,8,1>UD                    { align1 1H I@7 };
mov(16)         g26<1>UD        g68<8,8,1>UD                    { align1 1H I@7 };
mov(16)         g28<1>UD        g18<8,8,1>UD                    { align1 1H I@7 };
mov(16)         g30<1>UD        g20<8,8,1>UD                    { align1 1H I@6 };
mov(16)         g32<1>UD        g60<8,8,1>UD                    { align1 1H I@7 };
mov(16)         g34<1>UD        g62<8,8,1>UD                    { align1 1H I@7 };
cmp.z.f0.0(16)  g72<1>W         g119<16,8,2>W   0W              { align1 1H };
mov(1)          g112<1>D        1D                              { align1 WE_all 1N $1.src };
mov.nz.f0.0(16) g70<1>D         g72<8,8,1>W                     { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
add(16)         g73<1>D         g38<1,1,0>D     12D             { align1 1H $3.dst compacted };
cmp.l.f0.0(16)  g75<1>UD        g73<1,1,0>UD    g38<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g116<2>UD       g73<4,4,1>UD                    { align1 1Q $4.src };
mov(8)          g118<2>UD       g74<4,4,1>UD                    { align1 2Q $4.src };
add(16)         g77<1>D         -g75<1,1,0>D    g40<1,1,0>D     { align1 1H @3 $3.dst compacted };
mov(8)          g116.1<2>UD     g77<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g118.1<2>UD     g78<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g2<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g2<1>UD         g2<0,1,0>UD     0xffffffffUD    { align1 WE_all 1N A@1 };
mov(1)          g3<1>UD         sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g3<1>UD         g3<0,1,0>UD     0xffffffffUD    { align1 WE_all 1N A@1 };
and(1)          g3<1>UD         g2<0,1,0>UD     g3<0,1,0>UD     { align1 WE_all 1N I@1 compacted };
mov(1)          g79<1>UD        g3<0,1,0>UD                     { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cbit(16)        g81<1>UD        g79<0,1,0>UD                    { align1 1H };
mov(1)          g4<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g4<1>UD         g4<0,1,0>UD     0xffffffffUD    { align1 WE_all 1N A@1 };
mov(16)         g88<1>D         g123<8,8,1>UW                   { align1 1H };
fbl(1)          g86<1>UD        g4<0,1,0>UD                     { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  null<1>D        g88<8,8,1>D     g86<0,1,0>D     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL4          UIP:  LABEL4              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
send(16)        g124UD          g116UD          g81UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };

LABEL4:
endif(16)       JIP:  LABEL3                                    { align1 1H };
mov(1)          g5<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g5<1>UD         g5<0,1,0>UD     0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g89<1>UD        g5<0,1,0>UD                     { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g89<0,1,0>UD    0x00000002UD    { align1 WE_all 1N @1 $4.dst };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000e00UD    { align1 WE_all 1N A@1 };
mov(1)          g91<1>UD        g[a0 384]<0,1,0>UD              { align1 WE_all 1N A@1 };
mov(1)          g6<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g6<1>UD         g6<0,1,0>UD     0xffffffffUD    { align1 WE_all 1N A@1 };
mov(16)         g95<1>D         g123<8,8,1>UW                   { align1 1H };
mov(1)          g7<1>UD         sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g7<1>UD         g7<0,1,0>UD     0xffffffffUD    { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g97<1>D         -g112<0,1,0>D   g95<8,8,1>UD    { align1 1H };
and(1)          g7<1>UD         g6<0,1,0>UD     g7<0,1,0>UD     { align1 WE_all 1N I@2 compacted };
mov(1)          g93<1>UD        g7<0,1,0>UD                     { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(16)         g99<1>UD        g93<0,1,0>UD    ~g97<8,8,1>D    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cbit(16)        g101<1>UD       g99<8,8,1>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g103<1>D        g91<0,1,0>D     g101<1,1,0>D    { align1 1H $3.src compacted };
shl(16)         g58<1>D         g103<8,8,1>D    0x00000006UD    { align1 1H I@1 };

LABEL3:
endif(16)       JIP:  LABEL5                                    { align1 1H };

LABEL5:
add(16)         g72<1>D         g38<1,1,0>D     g58<0,1,0>D     { align1 1H @2 $3.dst compacted };
add(16)         g106<1>D        g38<1,1,0>D     16D             { align1 1H $2.src compacted };
add(16)         g126<1>D        g50<1,1,0>D     4D              { align1 1H compacted };
add(16)         g6<1>D          g50<1,1,0>D     -12D            { align1 1H compacted };
add(16)         g8<1>D          g50<1,1,0>D     2D              { align1 1H compacted };
add(16)         g16<1>D         g50<1,1,0>D     -14D            { align1 1H compacted };
add(16)         g82<1>D         g50<1,1,0>D     1D              { align1 1H $4.src compacted };
add(16)         g86<1>D         g50<1,1,0>D     -15D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g104<1>UD       g72<1,1,0>UD    g38<1,1,0>UD    { align1 1H I@7 compacted };
mov(8)          g10<2>UD        g72<4,4,1>UD                    { align1 1Q };
mov(8)          g12<2>UD        g73<4,4,1>UD                    { align1 2Q };
mov(8)          g2<2>UD         g106<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g4<2>UD         g107<4,4,1>UD                   { align1 2Q };
cmp.l.f0.0(16)  g108<1>UD       g106<1,1,0>UD   g38<1,1,0>UD    { align1 1H $2.src compacted };
cmp.l.f0.0(16)  null<1>D        g126<8,8,1>D    16D             { align1 1H };
add(16)         g74<1>D         -g104<1,1,0>D   g40<1,1,0>D     { align1 1H @7 $3.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g110<1>D        -g108<1,1,0>D   g40<1,1,0>D     { align1 1H I@3 compacted };
(+f0.0) sel(16) g76<1>UD        g126<1,1,0>UD   g6<1,1,0>UD     { align1 1H compacted };
mov(8)          g10.1<2>UD      g74<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g12.1<2>UD      g75<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g2.1<2>UD       g110<4,4,1>UD                   { align1 1Q I@4 };
mov(8)          g4.1<2>UD       g111<4,4,1>UD                   { align1 2Q I@5 };
cmp.l.f0.0(16)  null<1>D        g8<8,8,1>D      16D             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g113UD          g2UD            nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
(+f0.0) sel(16) g78<1>UD        g8<1,1,0>UD     g16<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  null<1>D        g82<8,8,1>D     16D             { align1 1H };
(+f0.0) sel(16) g80<1>UD        g82<1,1,0>UD    g86<1,1,0>UD    { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
shl(16)         g115<1>D        g113<8,8,1>D    0x00000006UD    { align1 1H $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add3(16)        g117<1>D        g38<8,8,1>D     g115<8,8,1>D    -g72<1,1,1>D { align1 1H I@1 };
asr(16)         g8<1>D          g117<8,8,1>D    0x00000006UD    { align1 1H I@1 };
cmp.z.f0.0(16)  g118<1>W        g14<16,8,2>W    1W              { align1 1H };
mov.nz.f0.0(16) g82<1>D         g118<8,8,1>W                    { align1 1H I@1 };
(-f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL6              { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g50<8,8,1>UD    g54<8,8,1>UD    { align1 1H };
(+f0.0) sel(16) g86<1>UD        g20<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g88<1>UD        g60<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g90<1>UD        g62<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g14<1>UD        g64<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g16<1>UD        g66<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g92<1>UD        g68<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         a0<1>UW         0x0ac0UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g76<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ac0UW        { align1 1H A@1 };
mov(16)         g106<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0b00UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g76<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b00UW        { align1 1H A@1 };
mov(16)         g104<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         a0<1>UW         0x0b40UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g76<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b40UW        { align1 1H A@1 };
mov(16)         g102<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x01c0UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g76<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x01c0UW        { align1 1H A@1 };
mov(16)         g100<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0200UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g76<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0200UW        { align1 1H A@1 };
mov(16)         g98<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0b80UW                        { align1 WE_all 1H I@6 };
shl(16)         a0<1>UW         g76<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b80UW        { align1 1H A@1 };
mov(16)         g94<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g50<8,8,1>UD    0x00000006UD    { align1 1H };
sel.ge(16)      g96<1>F         g86<1,1,0>F     g106<1,1,0>F    { align1 1H I@7 compacted };
sel.ge(16)      g86<1>F         g88<1,1,0>F     g104<1,1,0>F    { align1 1H A@1 compacted };
sel.ge(16)      g88<1>F         g90<1,1,0>F     g102<1,1,0>F    { align1 1H A@1 compacted };
sel.l(16)       g90<1>F         g14<1,1,0>F     g100<1,1,0>F    { align1 1H A@1 compacted };
sel.l(16)       g14<1>F         g16<1,1,0>F     g98<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0c00UW                        { align1 WE_all 1H F@5 };
shl(16)         a0<1>UW         g78<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0c00UW        { align1 1H A@1 };
mov(16)         g106<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g16<1>F         g92<1,1,0>F     g94<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0ac0UW                        { align1 WE_all 1H F@5 };
shl(16)         a0<1>UW         g78<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ac0UW        { align1 1H A@1 };
mov(16)         g104<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0b00UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g78<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b00UW        { align1 1H A@1 };
mov(16)         g102<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0b40UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g78<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b40UW        { align1 1H A@1 };
mov(16)         g100<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x01c0UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g78<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x01c0UW        { align1 1H A@1 };
mov(16)         g98<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g94<1>F         g96<1,1,0>F     g106<1,1,0>F    { align1 1H I@5 compacted };
mov(16)         a0<1>UW         0x0200UW                        { align1 WE_all 1H A@2 };
shl(16)         a0<1>UW         g78<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0200UW        { align1 1H A@1 };
mov(16)         g92<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g96<1>F         g86<1,1,0>F     g104<1,1,0>F    { align1 1H A@1 compacted };
sel.ge(16)      g86<1>F         g88<1,1,0>F     g102<1,1,0>F    { align1 1H A@1 compacted };
sel.l(16)       g88<1>F         g90<1,1,0>F     g100<1,1,0>F    { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0bc0UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g80<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0bc0UW        { align1 1H A@1 };
mov(16)         g106<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g90<1>F         g14<1,1,0>F     g98<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0c00UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g80<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0c00UW        { align1 1H A@1 };
mov(16)         g104<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g14<1>F         g16<1,1,0>F     g92<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0ac0UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g80<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ac0UW        { align1 1H A@1 };
mov(16)         g102<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0b00UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g80<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b00UW        { align1 1H A@1 };
mov(16)         g100<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g92<1>F         g94<1,1,0>F     g106<1,1,0>F    { align1 1H I@4 compacted };
mov(16)         a0<1>UW         0x0b40UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g80<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b40UW        { align1 1H A@1 };
mov(16)         g98<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g94<1>F         g96<1,1,0>F     g104<1,1,0>F    { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x01c0UW                        { align1 WE_all 1H A@3 };
shl(16)         a0<1>UW         g80<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x01c0UW        { align1 1H A@1 };
mov(16)         g16<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.ge(16)      g96<1>F         g86<1,1,0>F     g102<1,1,0>F    { align1 1H A@1 compacted };
sel.l(16)       g86<1>F         g88<1,1,0>F     g100<1,1,0>F    { align1 1H A@1 compacted };
sel.l(16)       g88<1>F         g90<1,1,0>F     g98<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g90<1>F         g14<1,1,0>F     g16<1,1,0>F     { align1 1H A@1 compacted };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL8              { align1 1H };
sel.ge(16)      g98<1>F         (abs)g86<0,1,0>F (abs)g92<0,1,0>F { align1 1H F@2 compacted };
sel.ge(16)      g100<1>F        (abs)g88<0,1,0>F (abs)g94<0,1,0>F { align1 1H F@3 compacted };
sel.ge(16)      g102<1>F        (abs)g90<0,1,0>F (abs)g96<0,1,0>F { align1 1H F@3 compacted };
add(16)         g106<1>D        g72<1,1,0>D     16D             { align1 1H F@7 compacted };
mov(16)         g110<2>B        -1W                             { align1 1H };
sel.ge(16)      g104<1>F        g100<1,1,0>F    g102<1,1,0>F    { align1 1H F@1 compacted };
mov(16)         g108<4>UB       g84<8,8,1>UD                    { align1 1H };
mov(8)          g14<2>UD        g106<4,4,1>UD                   { align1 1Q A@3 };
mov(8)          g16<2>UD        g107<4,4,1>UD                   { align1 2Q A@4 };
sel.ge(16)      g84<1>F         g98<1,1,0>F     g104<1,1,0>F    { align1 1H A@1 compacted };
mov(16)         g98<1>UD        g108<32,8,4>UB                  { align1 1H A@1 };
mul(16)         g100<1>F        g84<1,1,0>F     0x34000000F  /* 1.19209e-07F */ { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g2<1>F          g86<0,1,0>F     -g100<1,1,0>F   { align1 1H F@1 compacted };
add(16)         g4<1>F          g88<0,1,0>F     -g100<1,1,0>F   { align1 1H $6.src compacted };
add(16)         g6<1>F          g90<0,1,0>F     -g100<1,1,0>F   { align1 1H compacted };
add(16)         g84<1>F         g92<0,1,0>F     g100<1,1,0>F    { align1 1H compacted };
add(16)         g86<1>F         g94<0,1,0>F     g100<1,1,0>F    { align1 1H compacted };
add(16)         g88<1>F         g96<0,1,0>F     g100<1,1,0>F    { align1 1H compacted };
add(16)         g92<1>F         g84<1,1,0>F     -g2<1,1,0>F     { align1 1H F@3 compacted };
add(16)         g84<1>F         g86<1,1,0>F     -g4<1,1,0>F     { align1 1H F@3 compacted };
add(16)         g94<1>F         g88<1,1,0>F     -g6<1,1,0>F     { align1 1H F@3 compacted };
mul(16)         g90<1>F         g92<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
mul(16)         g88<1>F         g84<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
mul(16)         g86<1>F         g94<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
and(16)         g84<1>UD        g90<8,8,1>UD    0x007fffffUD    { align1 1H F@2 };
and(16)         g96<1>UD        g90<8,8,1>UD    0x80000000UD    { align1 1H F@7 };
and(16)         g92<1>UD        g90<8,8,1>UD    0x7f800000UD    { align1 1H F@3 };
and(16)         g94<1>UD        g88<8,8,1>UD    0x7f800000UD    { align1 1H F@1 };
and(16)         g100<1>UD       g88<8,8,1>UD    0x80000000UD    { align1 1H F@7 };
and(16)         g102<1>UD       g86<8,8,1>UD    0x80000000UD    { align1 1H F@1 };
and(16)         g104<1>UD       g86<8,8,1>UD    0x7f800000UD    { align1 1H };
and(16)         g90<1>UD        g88<8,8,1>UD    0x007fffffUD    { align1 1H };
and(16)         g88<1>UD        g86<8,8,1>UD    0x007fffffUD    { align1 1H };
add(16)         g86<1>D         g84<8,8,1>D     1056964608D     { align1 1H I@7 };
asr(16)         g84<1>D         g92<8,8,1>D     0x00000017UD    { align1 1H I@7 };
add(16)         g92<1>D         g90<8,8,1>D     1056964608D     { align1 1H I@4 };
asr(16)         g90<1>D         g94<8,8,1>D     0x00000017UD    { align1 1H I@7 };
add(16)         g94<1>D         g88<8,8,1>D     1056964608D     { align1 1H I@5 };
cmp.z.f0.0(16)  null<1>F        g86<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@5 compacted };
asr(16)         g88<1>D         g104<8,8,1>D    0x00000017UD    { align1 1H I@7 };
(-f0.0) sel(16) g104<1>UD       g86<8,8,1>UD    0x3f000000UD    { align1 1H };
and(16)         g86<1>UD        g104<8,8,1>UD   0x7fffffffUD    { align1 1H A@1 };
cmp.z.f0.0(16)  null<1>F        g92<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@6 compacted };
or(16)          g104<1>UD       g86<1,1,0>UD    g96<1,1,0>UD    { align1 1H I@1 compacted };
(-f0.0) sel(16) g86<1>UD        g92<8,8,1>UD    0x3f000000UD    { align1 1H };
and(16)         g92<1>UD        g86<8,8,1>UD    0x7fffffffUD    { align1 1H A@1 };
cmp.z.f0.0(16)  null<1>F        g94<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@7 compacted };
or(16)          g86<1>UD        g92<1,1,0>UD    g100<1,1,0>UD   { align1 1H I@1 compacted };
(-f0.0) sel(16) g92<1>UD        g94<8,8,1>UD    0x3f000000UD    { align1 1H };
and(16)         g94<1>UD        g92<8,8,1>UD    0x7fffffffUD    { align1 1H A@1 };
cmp.g.f0.0(16)  g92<1>F         g104<8,8,1>F    0x3f7f0000F  /* 0.996094F */ { align1 1H I@1 };
or(16)          g96<1>UD        g94<1,1,0>UD    g102<1,1,0>UD   { align1 1H I@1 compacted };
cmp.g.f0.0(16)  g94<1>F         g86<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@1 };
add3(16)        g86<1>D         65410W          g84<8,8,1>D     -g92<1,1,1>D { align1 1H F@1 };
cmp.g.f0.0(16)  g92<1>F         g96<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@1 };
add3(16)        g84<1>D         65410W          g90<8,8,1>D     -g94<1,1,1>D { align1 1H F@2 };
cmp.l.f0.0(16)  g90<1>UD        g106<1,1,0>UD   g72<1,1,0>UD    { align1 1H compacted };
add3(16)        g94<1>D         65410W          g88<8,8,1>D     -g92<1,1,1>D { align1 1H F@1 };
add(16)         g88<1>D         -g90<1,1,0>D    g74<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g14.1<2>UD      g88<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g16.1<2>UD      g89<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g14UD           g98UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $7 };
send(16)        nullUD          g10UD           g2UD            0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $6 };
add(16)         g88<1>D         g72<1,1,0>D     18D             { align1 1H compacted };
mov(16)         g96<4>UB        g86<8,8,1>UD                    { align1 1H A@1 };
cmp.l.f0.0(16)  g90<1>UD        g88<1,1,0>UD    g72<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g14<2>UD        g88<4,4,1>UD                    { align1 1Q $7.src };
mov(8)          g16<2>UD        g89<4,4,1>UD                    { align1 2Q $7.src };
mov(16)         g98<4>UB        g84<8,8,1>UD                    { align1 1H $7.src };
mov(16)         g100<4>UB       g94<8,8,1>UD                    { align1 1H I@7 };
mov(16)         g92<4>UB        g96<32,8,4>UB                   { align1 1H I@6 };
add(16)         g88<1>D         -g90<1,1,0>D    g74<1,1,0>D     { align1 1H I@6 compacted };
mov(16)         g92.1<4>UB      g98<32,8,4>UB                   { align1 1H I@2 };
mov(8)          g14.1<2>UD      g88<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g16.1<2>UD      g89<4,4,1>UD                    { align1 2Q I@3 };
mov(16)         g92.2<4>UB      g100<32,8,4>UB                  { align1 1H I@3 };
mov(16)         g92.3<4>UB      g110<16,8,2>UB                  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g14UD           g92UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };
cmp.l.f0.0(16)  null<1>UD       g50<8,8,1>UD    g54<8,8,1>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL9              { align1 1H };
sel.ge(16)      g14<1>F         (abs)g64<1,1,0>F (abs)g20<1,1,0>F { align1 1H $8.src compacted };
sel.ge(16)      g90<1>F         (abs)g66<1,1,0>F (abs)g60<1,1,0>F { align1 1H I@7 compacted };
sel.ge(16)      g92<1>F         (abs)g68<1,1,0>F (abs)g62<1,1,0>F { align1 1H $8.src compacted };
shl(16)         g88<1>D         -g86<8,8,1>D    0x00000017UD    { align1 1H };
shl(16)         g86<1>D         -g84<8,8,1>D    0x00000017UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.ge(16)      g16<1>F         g90<1,1,0>F     g92<1,1,0>F     { align1 1H F@1 compacted };
shl(16)         g84<1>D         -g94<8,8,1>D    0x00000017UD    { align1 1H };
add(16)         g94<1>D         g88<8,8,1>D     1132462080D     { align1 1H I@3 };
add(16)         g96<1>D         g86<8,8,1>D     1132462080D     { align1 1H I@3 };
add(16)         g98<1>D         g84<8,8,1>D     1132462080D     { align1 1H I@3 };
sel.ge(16)      g84<1>F         g14<1,1,0>F     g16<1,1,0>F     { align1 1H A@1 compacted };
mul(16)         g14<1>F         g84<1,1,0>F     0x34000000F  /* 1.19209e-07F */ { align1 1H F@1 compacted };
add(16)         g16<1>F         g64<1,1,0>F     -g14<1,1,0>F    { align1 1H F@1 compacted };
add(16)         g84<1>F         g66<1,1,0>F     -g14<1,1,0>F    { align1 1H compacted };
add(16)         g86<1>F         g68<1,1,0>F     -g14<1,1,0>F    { align1 1H I@2 compacted };
add(16)         g88<1>F         g20<1,1,0>F     g14<1,1,0>F     { align1 1H I@3 compacted };
add(16)         g90<1>F         g60<1,1,0>F     g14<1,1,0>F     { align1 1H compacted };
add(16)         g92<1>F         g62<1,1,0>F     g14<1,1,0>F     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g14<1>F         g16<1,1,0>F     -g2<1,1,0>F     { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g16<1>F         g84<1,1,0>F     -g4<1,1,0>F     { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g84<1>F         g86<1,1,0>F     -g6<1,1,0>F     { align1 1H F@6 compacted };
add(16)         g86<1>F         g88<1,1,0>F     -g2<1,1,0>F     { align1 1H F@6 compacted };
add(16)         g88<1>F         g90<1,1,0>F     -g4<1,1,0>F     { align1 1H F@6 compacted };
add(16)         g90<1>F         g92<1,1,0>F     -g6<1,1,0>F     { align1 1H F@6 compacted };
mul(16)         g92<1>F         g14<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g14<1>F         g16<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g16<1>F         g84<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g84<1>F         g86<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g86<1>F         g88<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g88<1>F         g90<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g90<1>F         g92<1,1,0>F     g94<1,1,0>F     { align1 1H A@3 compacted };
mul(16)         g92<1>F         g14<1,1,0>F     g96<1,1,0>F     { align1 1H A@2 compacted };
mul(16)         g14<1>F         g16<1,1,0>F     g98<1,1,0>F     { align1 1H A@1 compacted };
mul(16)         g16<1>F         g84<1,1,0>F     g94<1,1,0>F     { align1 1H F@6 compacted };
mul(16)         g84<1>F         g86<1,1,0>F     g96<1,1,0>F     { align1 1H F@6 compacted };
mul(16)         g86<1>F         g88<1,1,0>F     g98<1,1,0>F     { align1 1H F@6 compacted };
rndd(16)        g88<1>F         g90<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g90<1>F         g92<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g92<1>F         g14<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g14<1>F         -g16<1,1,0>F                    { align1 1H F@6 compacted };
rndd(16)        g16<1>F         -g84<1,1,0>F                    { align1 1H F@6 compacted };
rndd(16)        g84<1>F         -g86<1,1,0>F                    { align1 1H F@6 compacted };
sel.ge(16)      g86<1>F         g88<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g88<1>F         g90<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g90<1>F         g92<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g92<1>F         -g14<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g14<1>F         -g16<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g16<1>F         -g84<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.l(16)       g84<1>F         g86<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g86<1>F         g88<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g88<1>F         g90<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g90<1>F         g92<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g92<1>F         g14<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
mov(16)         g100<4>UB       g84<8,8,1>F                     { align1 1H A@5 };
sel.l(16)       g14<1>F         g16<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
mov(16)         g102<4>UB       g86<8,8,1>F                     { align1 1H F@5 };
mov(16)         g104<4>UB       g88<8,8,1>F                     { align1 1H F@4 };
mov(16)         g106<4>UB       g90<8,8,1>F                     { align1 1H F@3 };
mov(16)         g108<4>UB       g92<8,8,1>F                     { align1 1H F@2 };
mov(16)         g127<1>UW       g100<32,8,4>UB                  { align1 1H I@5 };
mov(16)         g110<4>UB       g14<8,8,1>F                     { align1 1H F@1 };
mov(16)         g126<1>UW       g102<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g125<1>UW       g104<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g88<1>UW        g106<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g87<1>UW        g108<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g86<1>UW        g110<32,8,4>UB                  { align1 1H I@5 };
else(16)        JIP:  LABEL9          UIP:  LABEL9              { align1 1H };

LABEL10:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
mov(16)         g125<1>UW       0x0080UW                        { align1 1H };
mov(16)         g126<1>UW       0x0080UW                        { align1 1H I@7 };
mov(16)         g127<1>UW       0x0080UW                        { align1 1H I@7 };
mov(16)         g86<1>UW        0x0000UW                        { align1 1H I@5 };
mov(16)         g87<1>UW        0x0000UW                        { align1 1H I@7 };
mov(16)         g88<1>UW        0x0000UW                        { align1 1H I@7 };

LABEL9:
endif(16)       JIP:  LABEL8                                    { align1 1H };
add(16)         g84<1>D         g72<1,1,0>D     g50<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g120<2>UB       g125<16,16,1>UW                 { align1 1H I@7 };
mov(16)         g97<2>UB        g126<16,16,1>UW                 { align1 1H I@7 };
mov(16)         g98<2>UB        g127<16,16,1>UW                 { align1 1H I@7 };
mov(16)         g94<2>UB        g86<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g95<2>UB        g87<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g96<2>UB        g88<16,16,1>UW                  { align1 1H I@7 };
cmp.l.f0.0(16)  g90<1>UD        g84<1,1,0>UD    g72<1,1,0>UD    { align1 1H I@7 compacted };
add(16)         g92<1>D         g84<1,1,0>D     28D             { align1 1H $8.src compacted };
mov(16)         g88<1>UD        g98<16,8,2>UB                   { align1 1H I@6 };
add(16)         g86<1>D         -g90<1,1,0>D    g74<1,1,0>D     { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g90<1>UD        g92<1,1,0>UD    g84<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g14<2>UD        g92<4,4,1>UD                    { align1 1Q $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $8.src };
mov(8)          g16<2>UD        g93<4,4,1>UD                    { align1 2Q F@1 };
add(16)         g92<1>D         -g90<1,1,0>D    g86<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g14.1<2>UD      g92<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g16.1<2>UD      g93<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g14UD           g88UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $9 };
add(16)         g90<1>D         g84<1,1,0>D     40D             { align1 1H compacted };
mov(16)         g88<1>UD        g97<16,8,2>UB                   { align1 1H $9.src };
cmp.l.f0.0(16)  g92<1>UD        g90<1,1,0>UD    g84<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g14<2>UD        g90<4,4,1>UD                    { align1 1Q $9.src };
mov(8)          g16<2>UD        g91<4,4,1>UD                    { align1 2Q $9.src };
add(16)         g90<1>D         -g92<1,1,0>D    g86<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g14.1<2>UD      g90<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g16.1<2>UD      g91<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g14UD           g88UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $10 };
add(16)         g88<1>D         g84<1,1,0>D     52D             { align1 1H $10.src compacted };
mov(16)         g92<1>UD        g120<16,8,2>UB                  { align1 1H };
cmp.l.f0.0(16)  g90<1>UD        g88<1,1,0>UD    g84<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g14<2>UD        g88<4,4,1>UD                    { align1 1Q $10.src };
mov(8)          g16<2>UD        g89<4,4,1>UD                    { align1 2Q $10.src };
add(16)         g88<1>D         -g90<1,1,0>D    g86<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g14.1<2>UD      g88<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g16.1<2>UD      g89<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g14UD           g92UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $11 };
add(16)         g88<1>D         g84<1,1,0>D     34D             { align1 1H compacted };
mov(16)         g90<1>UD        g96<16,8,2>UB                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
cmp.l.f0.0(16)  g92<1>UD        g88<1,1,0>UD    g84<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g14<2>UD        g88<4,4,1>UD                    { align1 1Q $11.src };
mov(8)          g16<2>UD        g89<4,4,1>UD                    { align1 2Q $11.src };
add(16)         g88<1>D         -g92<1,1,0>D    g86<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g14.1<2>UD      g88<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g16.1<2>UD      g89<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g14UD           g90UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $12 };
add(16)         g88<1>D         g84<1,1,0>D     46D             { align1 1H compacted };
mov(16)         g90<1>UD        g95<16,8,2>UB                   { align1 1H $12.src };
cmp.l.f0.0(16)  g92<1>UD        g88<1,1,0>UD    g84<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g14<2>UD        g88<4,4,1>UD                    { align1 1Q $12.src };
mov(8)          g16<2>UD        g89<4,4,1>UD                    { align1 2Q $12.src };
add(16)         g88<1>D         -g92<1,1,0>D    g86<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g14.1<2>UD      g88<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g16.1<2>UD      g89<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g14UD           g90UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $13 };
add(16)         g119<1>D        g84<1,1,0>D     58D             { align1 1H $4.src compacted };
mov(16)         g117<1>UD       g94<16,8,2>UB                   { align1 1H };
cmp.l.f0.0(16)  g121<1>UD       g119<1,1,0>UD   g84<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g14<2>UD        g119<4,4,1>UD                   { align1 1Q $13.src };
mov(8)          g16<2>UD        g120<4,4,1>UD                   { align1 2Q $13.src };
add(16)         g123<1>D        -g121<1,1,0>D   g86<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g14.1<2>UD      g123<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g16.1<2>UD      g124<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g14UD           g117UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $14 };
cmp.nz.f0.0(16) null<1>D        g82<8,8,1>D     0D              { align1 1H };
add(16)         g126<1>D        g84<1,1,0>D     22D             { align1 1H compacted };
(-f0.0) sel(16) g124<1>UD       g112<0,1,0>UD   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(8)          g14<2>UD        g126<4,4,1>UD                   { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $14.src };
mov(8)          g16<2>UD        g127<4,4,1>UD                   { align1 2Q I@3 };
mov(16)         g121<4>UB       g124<8,8,1>UD                   { align1 1H I@3 };
cmp.l.f0.0(16)  g82<1>UD        g126<1,1,0>UD   g84<1,1,0>UD    { align1 1H compacted };
mov(16)         g88<1>UD        g121<32,8,4>UB                  { align1 1H I@2 };
add(16)         g84<1>D         -g82<1,1,0>D    g86<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g14.1<2>UD      g84<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g16.1<2>UD      g85<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g14UD           g88UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };

LABEL8:
endif(16)       JIP:  LABEL11                                   { align1 1H };

LABEL11:
else(16)        JIP:  LABEL6          UIP:  LABEL6              { align1 1H };

LABEL7:
mov(16)         g86<1>UD        g18.3<32,8,4>UB                 { align1 1H A@3 };
cmp.l.f0.0(16)  null<1>D        g52<8,8,1>D     g54<8,8,1>D     { align1 1H };
(+f0.0) sel(16) g82<1>UD        g86<1,1,0>UD    0x00000000UD    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g87<1>UD        g82<32,8,4>UB                   { align1 1H A@1 };
cmp.l.f0.0(16)  null<1>UD       g50<8,8,1>UD    g54<8,8,1>UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
mov(16)         a0<1>UW         0x0ae0UW                        { align1 WE_all 1H $13.src };
shl(16)         a0<1>UW         g76<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ae0UW        { align1 1H A@1 };
mov(16)         g89<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
or(16)          g91<1>UD        g82<1,1,0>UD    g89<1,1,0>UD    { align1 1H $13.src compacted };
mov(16)         g93<1>UD        g91<32,8,4>UB                   { align1 1H A@1 };
mov(16)         a0<1>UW         0x0ba0UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g78<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ba0UW        { align1 1H A@1 };
mov(16)         g95<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
or(16)          g97<1>UD        g93<1,1,0>UD    g95<1,1,0>UD    { align1 1H A@1 compacted };
mov(16)         g99<1>UD        g97<32,8,4>UB                   { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         a0<1>UW         0x0c60UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g80<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0c60UW        { align1 1H A@1 };
mov(16)         g101<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
or(16)          g103<1>UD       g97<1,1,0>UD    g101<1,1,0>UD   { align1 1H A@1 compacted };
mov(16)         g84<4>UB        g103<0,1,0>UD                   { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL12             { align1 1H };
mov(16)         g105<1>UD       g103<0,1,0>UB                   { align1 1H F@3 };
cmp.z.f0.0(16)  g107<1>D        g105<1,1,0>D    0D              { align1 1H A@1 compacted };
cmp.z.f0.0(16)  null<1>D        g82<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g109<1>UD       g107<8,8,1>UD   0xffffffffUD    { align1 1H I@2 };
cmp.nz.f0.0(16) null<1>D        g109<8,8,1>D    0D              { align1 1H I@1 };
(+f0.0) sel(16) g86<1>UD        g20<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g88<1>UD        g60<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g90<1>UD        g62<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g92<1>UD        g64<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g64<1>UD        g66<8,8,1>UD    0x7f800000UD    { align1 1H I@1 };
(+f0.0) sel(16) g66<1>UD        g68<8,8,1>UD    0x7f800000UD    { align1 1H I@1 };
else(16)        JIP:  LABEL12         UIP:  LABEL12             { align1 1H };

LABEL13:
mov(16)         g66<1>UD        0x7f800000UD                    { align1 1H I@2 };
mov(16)         g64<1>UD        0x7f800000UD                    { align1 1H I@4 };
mov(16)         g92<1>UD        0x7f800000UD                    { align1 1H I@6 };
mov(16)         g90<1>UD        0xff800000UD                    { align1 1H I@7 };
mov(16)         g88<1>UD        0xff800000UD                    { align1 1H I@7 };
mov(16)         g86<1>UD        0xff800000UD                    { align1 1H };

LABEL12:
endif(16)       JIP:  LABEL6                                    { align1 1H };
mov(16)         a0<1>UW         0x0b80UW                        { align1 WE_all 1H I@5 };
shl(16)         a0<1>UW         g76<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b80UW        { align1 1H A@1 };
mov(16)         g110<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0800UW                        { align1 WE_all 1H I@5 };
shl(16)         a0<1>UW         g76<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0800UW        { align1 1H A@1 };
mov(16)         g94<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0840UW                        { align1 WE_all 1H A@4 };
shl(16)         a0<1>UW         g76<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0840UW        { align1 1H A@1 };
mov(16)         g102<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0ac0UW                        { align1 WE_all 1H A@3 };
shl(16)         a0<1>UW         g76<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ac0UW        { align1 1H A@1 };
mov(16)         g100<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0b00UW                        { align1 WE_all 1H A@2 };
shl(16)         a0<1>UW         g76<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b00UW        { align1 1H A@1 };
mov(16)         g98<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0b40UW                        { align1 WE_all 1H I@7 };
shl(16)         a0<1>UW         g76<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b40UW        { align1 1H A@1 };
mov(16)         g96<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g50<8,8,1>UD    0x00000006UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.l(16)       g14<1>F         g92<1,1,0>F     g110<1,1,0>F    { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.l(16)       g16<1>F         g64<1,1,0>F     g94<1,1,0>F     { align1 1H A@2 compacted };
sel.l(16)       g18<1>F         g66<1,1,0>F     g102<1,1,0>F    { align1 1H I@5 compacted };
sel.ge(16)      g68<1>F         g86<1,1,0>F     g100<1,1,0>F    { align1 1H I@4 compacted };
sel.ge(16)      g76<1>F         g88<1,1,0>F     g98<1,1,0>F     { align1 1H I@2 compacted };
sel.ge(16)      g94<1>F         g90<1,1,0>F     g96<1,1,0>F     { align1 1H I@2 compacted };
mov(16)         a0<1>UW         0x01c0UW                        { align1 WE_all 1H F@6 };
shl(16)         a0<1>UW         g78<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x01c0UW        { align1 1H A@1 };
mov(16)         g20<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0200UW                        { align1 WE_all 1H F@5 };
shl(16)         a0<1>UW         g78<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0200UW        { align1 1H A@1 };
mov(16)         g60<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0240UW                        { align1 WE_all 1H F@4 };
shl(16)         a0<1>UW         g78<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0240UW        { align1 1H A@1 };
mov(16)         g62<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0880UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g78<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0880UW        { align1 1H A@1 };
mov(16)         g96<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0980UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g78<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0980UW        { align1 1H A@1 };
mov(16)         g98<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0bc0UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g78<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0bc0UW        { align1 1H A@1 };
mov(16)         g100<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g78<1>F         g14<1,1,0>F     g20<1,1,0>F     { align1 1H I@1 compacted };
sel.l(16)       g14<1>F         g16<1,1,0>F     g60<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g16<1>F         g18<1,1,0>F     g62<1,1,0>F     { align1 1H A@1 compacted };
sel.ge(16)      g20<1>F         g76<1,1,0>F     g98<1,1,0>F     { align1 1H I@2 compacted };
sel.ge(16)      g18<1>F         g68<1,1,0>F     g96<1,1,0>F     { align1 1H A@2 compacted };
sel.ge(16)      g60<1>F         g94<1,1,0>F     g100<1,1,0>F    { align1 1H I@1 compacted };
mov(16)         a0<1>UW         0x09c0UW                        { align1 WE_all 1H A@2 };
shl(16)         a0<1>UW         g80<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x09c0UW        { align1 1H A@1 };
mov(16)         g76<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x01c0UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g80<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x01c0UW        { align1 1H A@1 };
mov(16)         g100<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0200UW                        { align1 WE_all 1H F@3 };
shl(16)         a0<1>UW         g80<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0200UW        { align1 1H A@1 };
mov(16)         g98<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0280UW                        { align1 WE_all 1H F@2 };
shl(16)         a0<1>UW         g80<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0280UW        { align1 1H A@1 };
mov(16)         g96<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0240UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g80<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0240UW        { align1 1H A@1 };
mov(16)         g94<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x0780UW                        { align1 WE_all 1H F@1 };
shl(16)         a0<1>UW         g80<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0780UW        { align1 1H A@1 };
mov(16)         g62<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sel.l(16)       g68<1>F         g78<1,1,0>F     g76<1,1,0>F     { align1 1H A@2 compacted };
sel.l(16)       g78<1>F         g16<1,1,0>F     g98<1,1,0>F     { align1 1H A@1 compacted };
sel.l(16)       g76<1>F         g14<1,1,0>F     g100<1,1,0>F    { align1 1H I@5 compacted };
sel.ge(16)      g80<1>F         g18<1,1,0>F     g94<1,1,0>F     { align1 1H I@1 compacted };
sel.ge(16)      g94<1>F         g20<1,1,0>F     g96<1,1,0>F     { align1 1H I@3 compacted };
sel.ge(16)      g96<1>F         g60<1,1,0>F     g62<1,1,0>F     { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL14         UIP:  LABEL14             { align1 1H };
sel.ge(16)      g16<1>F         (abs)g68<0,1,0>F (abs)g80<0,1,0>F { align1 1H A@3 compacted };
sel.ge(16)      g14<1>F         (abs)g76<0,1,0>F (abs)g94<0,1,0>F { align1 1H A@3 compacted };
sel.ge(16)      g20<1>F         (abs)g78<0,1,0>F (abs)g96<0,1,0>F { align1 1H A@3 compacted };
add(16)         g106<1>D        g72<1,1,0>D     16D             { align1 1H compacted };
sel.ge(16)      g18<1>F         g14<1,1,0>F     g20<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         g99<2>B         1W                              { align1 1H F@7 };
mov(8)          g60<2>UD        g106<4,4,1>UD                   { align1 1Q A@2 };
mov(8)          g62<2>UD        g107<4,4,1>UD                   { align1 2Q A@3 };
sel.ge(16)      g14<1>F         g16<1,1,0>F     g18<1,1,0>F     { align1 1H F@1 compacted };
mov(16)         g108<1>UD       g99<16,8,2>UB                   { align1 1H I@3 };
mul(16)         g98<1>F         g14<1,1,0>F     0x34000000F  /* 1.19209e-07F */ { align1 1H A@1 compacted };
add(16)         g14<1>F         g68<0,1,0>F     -g98<1,1,0>F    { align1 1H F@1 compacted };
add(16)         g16<1>F         g76<0,1,0>F     -g98<1,1,0>F    { align1 1H compacted };
add(16)         g18<1>F         g78<0,1,0>F     -g98<1,1,0>F    { align1 1H compacted };
add(16)         g68<1>F         g80<0,1,0>F     g98<1,1,0>F     { align1 1H compacted };
add(16)         g76<1>F         g94<0,1,0>F     g98<1,1,0>F     { align1 1H compacted };
add(16)         g78<1>F         g96<0,1,0>F     g98<1,1,0>F     { align1 1H compacted };
add(16)         g80<1>F         g68<1,1,0>F     -g14<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g68<1>F         g76<1,1,0>F     -g16<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g76<1>F         g78<1,1,0>F     -g18<1,1,0>F    { align1 1H F@3 compacted };
mul(16)         g78<1>F         g80<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
mul(16)         g80<1>F         g68<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
mul(16)         g68<1>F         g76<8,8,1>F     0x3f800001F  /* 1F */ { align1 1H F@3 };
and(16)         g76<1>UD        g78<8,8,1>UD    0x007fffffUD    { align1 1H F@1 };
and(16)         g94<1>UD        g78<8,8,1>UD    0x80000000UD    { align1 1H F@7 };
and(16)         g100<1>UD       g78<8,8,1>UD    0x7f800000UD    { align1 1H };
and(16)         g96<1>UD        g80<8,8,1>UD    0x80000000UD    { align1 1H F@2 };
and(16)         g102<1>UD       g80<8,8,1>UD    0x7f800000UD    { align1 1H };
and(16)         g98<1>UD        g68<8,8,1>UD    0x80000000UD    { align1 1H F@1 };
and(16)         g104<1>UD       g68<8,8,1>UD    0x7f800000UD    { align1 1H };
and(16)         g78<1>UD        g80<8,8,1>UD    0x007fffffUD    { align1 1H };
and(16)         g80<1>UD        g68<8,8,1>UD    0x007fffffUD    { align1 1H };
add(16)         g68<1>D         g76<8,8,1>D     1056964608D     { align1 1H I@7 };
asr(16)         g76<1>D         g100<8,8,1>D    0x00000017UD    { align1 1H I@7 };
add(16)         g100<1>D        g78<8,8,1>D     1056964608D     { align1 1H I@4 };
asr(16)         g78<1>D         g102<8,8,1>D    0x00000017UD    { align1 1H I@7 };
add(16)         g102<1>D        g80<8,8,1>D     1056964608D     { align1 1H I@5 };
cmp.z.f0.0(16)  null<1>F        g68<1,1,0>F     0x3f800000F  /* 1F */ { align1 1H I@5 compacted };
asr(16)         g80<1>D         g104<8,8,1>D    0x00000017UD    { align1 1H I@7 };
(-f0.0) sel(16) g104<1>UD       g68<8,8,1>UD    0x3f000000UD    { align1 1H };
and(16)         g68<1>UD        g104<8,8,1>UD   0x7fffffffUD    { align1 1H A@1 };
cmp.z.f0.0(16)  null<1>F        g100<1,1,0>F    0x3f800000F  /* 1F */ { align1 1H I@6 compacted };
or(16)          g104<1>UD       g68<1,1,0>UD    g94<1,1,0>UD    { align1 1H I@1 compacted };
(-f0.0) sel(16) g68<1>UD        g100<8,8,1>UD   0x3f000000UD    { align1 1H };
and(16)         g94<1>UD        g68<8,8,1>UD    0x7fffffffUD    { align1 1H I@1 };
cmp.z.f0.0(16)  null<1>F        g102<1,1,0>F    0x3f800000F  /* 1F */ { align1 1H I@7 compacted };
or(16)          g68<1>UD        g94<1,1,0>UD    g96<1,1,0>UD    { align1 1H I@1 compacted };
(-f0.0) sel(16) g94<1>UD        g102<8,8,1>UD   0x3f000000UD    { align1 1H };
and(16)         g96<1>UD        g94<8,8,1>UD    0x7fffffffUD    { align1 1H I@1 };
cmp.g.f0.0(16)  g94<1>F         g104<8,8,1>F    0x3f7f0000F  /* 0.996094F */ { align1 1H I@1 };
or(16)          g100<1>UD       g96<1,1,0>UD    g98<1,1,0>UD    { align1 1H A@1 compacted };
cmp.g.f0.0(16)  g96<1>F         g68<8,8,1>F     0x3f7f0000F  /* 0.996094F */ { align1 1H I@1 };
add3(16)        g68<1>D         65410W          g76<8,8,1>D     -g94<1,1,1>D { align1 1H F@1 };
cmp.g.f0.0(16)  g94<1>F         g100<8,8,1>F    0x3f7f0000F  /* 0.996094F */ { align1 1H I@1 };
add3(16)        g76<1>D         65410W          g78<8,8,1>D     -g96<1,1,1>D { align1 1H F@2 };
cmp.l.f0.0(16)  g96<1>UD        g106<1,1,0>UD   g72<1,1,0>UD    { align1 1H compacted };
add3(16)        g78<1>D         65410W          g80<8,8,1>D     -g94<1,1,1>D { align1 1H F@1 };
add(16)         g94<1>D         -g96<1,1,0>D    g74<1,1,0>D     { align1 1H I@2 compacted };
mov(8)          g60.1<2>UD      g94<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g62.1<2>UD      g95<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g60UD           g108UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $15 };
mov(16)         g20<1>UD        g8<8,8,1>UD                     { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g10UD           g14UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $6 };
add(16)         g111<1>D        g72<1,1,0>D     18D             { align1 1H compacted };
mov(16)         g100<4>UB       g68<8,8,1>UD                    { align1 1H A@1 };
cmp.l.f0.0(16)  g113<1>UD       g111<1,1,0>UD   g72<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g2<2>UD         g111<4,4,1>UD                   { align1 1Q $6.src };
mov(8)          g4<2>UD         g112<4,4,1>UD                   { align1 2Q $6.src };
mov(16)         g102<4>UB       g76<8,8,1>UD                    { align1 1H F@4 };
mov(16)         g104<4>UB       g78<8,8,1>UD                    { align1 1H F@3 };
mov(16)         g94<4>UB        g100<32,8,4>UB                  { align1 1H I@6 };
add(16)         g115<1>D        -g113<1,1,0>D   g74<1,1,0>D     { align1 1H I@6 compacted };
mov(16)         g94.1<4>UB      g102<32,8,4>UB                  { align1 1H I@2 };
mov(8)          g2.1<2>UD       g115<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g4.1<2>UD       g116<4,4,1>UD                   { align1 2Q I@3 };
mov(16)         g94.2<4>UB      g104<32,8,4>UB                  { align1 1H I@3 };
mov(16)         g94.3<4>UB      g84<32,8,4>UB                   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g2UD            g94UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };
cmp.l.f0.0(16)  null<1>UD       g50<8,8,1>UD    g54<8,8,1>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL16         UIP:  LABEL15             { align1 1H };
sel.ge(16)      g103<1>F        (abs)g92<1,1,0>F (abs)g86<1,1,0>F { align1 1H I@4 compacted };
sel.ge(16)      g105<1>F        (abs)g64<1,1,0>F (abs)g88<1,1,0>F { align1 1H I@4 compacted };
sel.ge(16)      g107<1>F        (abs)g66<1,1,0>F (abs)g90<1,1,0>F { align1 1H $15.src compacted };
shl(16)         g109<1>D        -g68<8,8,1>D    0x00000017UD    { align1 1H $15.src };
shl(16)         g111<1>D        -g76<8,8,1>D    0x00000017UD    { align1 1H };
shl(16)         g113<1>D        -g78<8,8,1>D    0x00000017UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g82<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.ge(16)      g95<1>F         g105<1,1,0>F    g107<1,1,0>F    { align1 1H F@1 compacted };
add(16)         g97<1>D         g109<8,8,1>D    1132462080D     { align1 1H I@4 };
add(16)         g99<1>D         g111<8,8,1>D    1132462080D     { align1 1H I@4 };
add(16)         g101<1>D        g113<8,8,1>D    1132462080D     { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.ge(16)      g2<1>F          g103<1,1,0>F    g95<1,1,0>F     { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mul(16)         g4<1>F          g2<1,1,0>F      0x34000000F  /* 1.19209e-07F */ { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g6<1>F          g92<1,1,0>F     -g4<1,1,0>F     { align1 1H F@1 compacted };
add(16)         g8<1>F          g64<1,1,0>F     -g4<1,1,0>F     { align1 1H compacted };
add(16)         g10<1>F         g66<1,1,0>F     -g4<1,1,0>F     { align1 1H $6.src compacted };
add(16)         g12<1>F         g86<1,1,0>F     g4<1,1,0>F      { align1 1H $6.src compacted };
add(16)         g60<1>F         g88<1,1,0>F     g4<1,1,0>F      { align1 1H $15.src compacted };
add(16)         g62<1>F         g90<1,1,0>F     g4<1,1,0>F      { align1 1H $15.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g64<1>F         g6<1,1,0>F      -g14<1,1,0>F    { align1 1H F@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g66<1>F         g8<1,1,0>F      -g16<1,1,0>F    { align1 1H F@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g68<1>F         g10<1,1,0>F     -g18<1,1,0>F    { align1 1H A@6 compacted };
add(16)         g105<1>F        g12<1,1,0>F     -g14<1,1,0>F    { align1 1H F@6 compacted };
add(16)         g107<1>F        g60<1,1,0>F     -g16<1,1,0>F    { align1 1H F@6 compacted };
add(16)         g109<1>F        g62<1,1,0>F     -g18<1,1,0>F    { align1 1H A@3 compacted };
mul(16)         g76<1>F         g64<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H A@6 };
mul(16)         g78<1>F         g66<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H A@5 };
mul(16)         g80<1>F         g68<8,8,1>F     0x3f7ffffeF  /* 1F */ { align1 1H F@6 };
mul(16)         g111<1>F        g105<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H A@2 };
mul(16)         g113<1>F        g107<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H A@1 };
mul(16)         g2<1>F          g109<8,8,1>F    0x3f800001F  /* 1F */ { align1 1H F@6 };
mul(16)         g82<1>F         g76<1,1,0>F     g97<1,1,0>F     { align1 1H A@3 compacted };
mul(16)         g84<1>F         g78<1,1,0>F     g99<1,1,0>F     { align1 1H A@2 compacted };
mul(16)         g86<1>F         g80<1,1,0>F     g101<1,1,0>F    { align1 1H A@1 compacted };
mul(16)         g4<1>F          g111<1,1,0>F    g97<1,1,0>F     { align1 1H F@6 compacted };
mul(16)         g6<1>F          g113<1,1,0>F    g99<1,1,0>F     { align1 1H F@6 compacted };
mul(16)         g8<1>F          g2<1,1,0>F      g101<1,1,0>F    { align1 1H F@6 compacted };
rndd(16)        g88<1>F         g82<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g90<1>F         g84<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g92<1>F         g86<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g10<1>F         -g4<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g12<1>F         -g6<1,1,0>F                     { align1 1H F@6 compacted };
rndd(16)        g14<1>F         -g8<1,1,0>F                     { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.ge(16)      g94<1>F         g88<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g96<1>F         g90<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g98<1>F         g92<1,1,0>F     0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g16<1>F         -g10<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.ge(16)      g18<1>F         -g12<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.ge(16)      g20<1>F         -g14<1,1,0>F    0x0F  /* 0F */  { align1 1H F@6 compacted };
sel.l(16)       g100<1>F        g94<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g102<1>F        g96<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g104<1>F        g98<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g60<1>F         g16<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g62<1>F         g18<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
sel.l(16)       g64<1>F         g20<8,8,1>F     0x437f0000F  /* 255F */ { align1 1H F@6 };
mov(16)         g115<4>UB       g100<8,8,1>F                    { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         g117<4>UB       g102<8,8,1>F                    { align1 1H F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g119<4>UB       g104<8,8,1>F                    { align1 1H F@4 };
mov(16)         g121<4>UB       g60<8,8,1>F                     { align1 1H F@3 };
mov(16)         g123<4>UB       g62<8,8,1>F                     { align1 1H F@2 };
mov(16)         g125<4>UB       g64<8,8,1>F                     { align1 1H F@1 };
mov(16)         g68<1>UW        g115<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g69<1>UW        g117<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g76<1>UW        g119<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g65<1>UW        g121<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g66<1>UW        g123<32,8,4>UB                  { align1 1H I@6 };
mov(16)         g67<1>UW        g125<32,8,4>UB                  { align1 1H I@6 };
(-f0.0) sel(16) g91<1>UW        g68<16,16,1>UW  0x0000UW        { align1 1H I@6 };
(-f0.0) sel(16) g90<1>UW        g69<16,16,1>UW  0x0000UW        { align1 1H I@6 };
(-f0.0) sel(16) g89<1>UW        g76<16,16,1>UW  0x0000UW        { align1 1H I@6 };
(-f0.0) sel(16) g94<1>UW        g65<16,16,1>UW  0x0000UW        { align1 1H A@6 };
(-f0.0) sel(16) g93<1>UW        g66<16,16,1>UW  0x0000UW        { align1 1H A@6 };
(-f0.0) sel(16) g92<1>UW        g67<16,16,1>UW  0x0000UW        { align1 1H A@6 };
else(16)        JIP:  LABEL15         UIP:  LABEL15             { align1 1H };

LABEL16:
mov(16)         g89<1>UW        0x0080UW                        { align1 1H I@5 };
mov(16)         g90<1>UW        0x0080UW                        { align1 1H I@7 };
mov(16)         g91<1>UW        0x0080UW                        { align1 1H I@7 };
mov(16)         g92<1>UW        0x0000UW                        { align1 1H I@5 };
mov(16)         g93<1>UW        0x0000UW                        { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g94<1>UW        0x0000UW                        { align1 1H I@7 };

LABEL15:
endif(16)       JIP:  LABEL14                                   { align1 1H };
add(16)         g77<1>D         g72<1,1,0>D     g50<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g107<2>UB       g89<16,16,1>UW                  { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g108<2>UB       g90<16,16,1>UW                  { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g109<2>UB       g91<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g122<2>UB       g92<16,16,1>UW                  { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         g117<2>UB       g93<16,16,1>UW                  { align1 1H I@7 };
mov(16)         g123<2>UB       g94<16,16,1>UW                  { align1 1H I@7 };
cmp.l.f0.0(16)  g79<1>UD        g77<1,1,0>UD    g72<1,1,0>UD    { align1 1H I@7 compacted };
add(16)         g83<1>D         g77<1,1,0>D     28D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g95<1>UD        g109<16,8,2>UB                  { align1 1H A@5 };
add(16)         g81<1>D         -g79<1,1,0>D    g74<1,1,0>D     { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g85<1>UD        g83<1,1,0>UD    g77<1,1,0>UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g118<2>UD       g83<4,4,1>UD                    { align1 1Q $14.src };
mov(8)          g120<2>UD       g84<4,4,1>UD                    { align1 2Q };
add(16)         g87<1>D         -g85<1,1,0>D    g81<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g118.1<2>UD     g87<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g120.1<2>UD     g88<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g118UD          g95UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };
add(16)         g88<1>D         g77<1,1,0>D     40D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g100<1>UD       g108<16,8,2>UB                  { align1 1H };
cmp.l.f0.0(16)  g90<1>UD        g88<1,1,0>UD    g77<1,1,0>UD    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g96<2>UD        g88<4,4,1>UD                    { align1 1Q F@5 };
mov(8)          g98<2>UD        g89<4,4,1>UD                    { align1 2Q F@4 };
add(16)         g92<1>D         -g90<1,1,0>D    g81<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g96.1<2>UD      g92<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g98.1<2>UD      g93<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g96UD           g100UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
add(16)         g93<1>D         g77<1,1,0>D     52D             { align1 1H compacted };
mov(16)         g105<1>UD       g107<16,8,2>UB                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g95<1>UD        g93<1,1,0>UD    g77<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g101<2>UD       g93<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g103<2>UD       g94<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g97<1>D         -g95<1,1,0>D    g81<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g101.1<2>UD     g97<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g103.1<2>UD     g98<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g101UD          g105UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $2 };
add(16)         g98<1>D         g77<1,1,0>D     34D             { align1 1H $1.src compacted };
mov(16)         g110<1>UD       g123<16,8,2>UB                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g100<1>UD       g98<1,1,0>UD    g77<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g106<2>UD       g98<4,4,1>UD                    { align1 1Q $2.src };
mov(8)          g108<2>UD       g99<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g102<1>D        -g100<1,1,0>D   g81<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g106.1<2>UD     g102<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g108.1<2>UD     g103<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g106UD          g110UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $3 };
add(16)         g103<1>D        g77<1,1,0>D     46D             { align1 1H $2.src compacted };
mov(16)         g115<1>UD       g117<16,8,2>UB                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g105<1>UD       g103<1,1,0>UD   g77<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g111<2>UD       g103<4,4,1>UD                   { align1 1Q $3.src };
mov(8)          g113<2>UD       g104<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g107<1>D        -g105<1,1,0>D   g81<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g111.1<2>UD     g107<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g113.1<2>UD     g108<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g111UD          g115UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };
add(16)         g108<1>D        g77<1,1,0>D     58D             { align1 1H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g120<1>UD       g122<16,8,2>UB                  { align1 1H $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g110<1>UD       g108<1,1,0>UD   g77<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g116<2>UD       g108<4,4,1>UD                   { align1 1Q $4.src };
mov(8)          g118<2>UD       g109<4,4,1>UD                   { align1 2Q $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g112<1>D        -g110<1,1,0>D   g81<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g116.1<2>UD     g112<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g118.1<2>UD     g113<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g116UD          g120UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };
add(16)         g113<1>D        g77<1,1,0>D     22D             { align1 1H $4.src compacted };
mov(16)         g127<2>B        2W                              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g115<1>UD       g113<1,1,0>UD   g77<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g121<2>UD       g113<4,4,1>UD                   { align1 1Q $4.src };
mov(8)          g123<2>UD       g114<4,4,1>UD                   { align1 2Q };
mov(16)         g125<1>UD       g127<16,8,2>UB                  { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g117<1>D        -g115<1,1,0>D   g81<1,1,0>D     { align1 1H I@4 compacted };
mov(8)          g121.1<2>UD     g117<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g123.1<2>UD     g118<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g121UD          g125UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $5 };

LABEL14:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
endif(16)       JIP:  LABEL17                                   { align1 1H };

LABEL17:
cmp.l.f0.0(16)  null<1>D        g52<8,8,1>D     g54<8,8,1>D     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL18         UIP:  LABEL18             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
asr(16)         g118<1>D        g54<8,8,1>D     0x0000001fUD    { align1 1H $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
shl(16)         g120<1>D        g52<8,8,1>D     0x00000005UD    { align1 1H $4.src };
shr(16)         g122<1>UD       g52<1,1,0>UD    0x0000001bUD    { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g124<1>D        g46<1,1,0>D     g120<1,1,0>D    { align1 1H @2 $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g126<1>UD       g124<1,1,0>UD   g46<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g4<2>UD         g124<4,4,1>UD                   { align1 1Q $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $6.src };
mov(8)          g6<2>UD         g125<4,4,1>UD                   { align1 2Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add3(16)        g2<1>D          g48<8,8,1>D     g122<8,8,1>D    -g126<1,1,1>D { align1 1H @3 $1.dst };
mov(8)          g4.1<2>UD       g2<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g6.1<2>UD       g3<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g4UD            g22UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $6 };
add(16)         g4<1>D          g124<1,1,0>D    16D             { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g6<1>UD         g4<1,1,0>UD     g124<1,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g10<2>UD        g4<4,4,1>UD                     { align1 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $6.src };
mov(8)          g12<2>UD        g5<4,4,1>UD                     { align1 2Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g8<1>D          -g6<1,1,0>D     g2<1,1,0>D      { align1 1H I@3 compacted };
mov(8)          g10.1<2>UD      g8<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g12.1<2>UD      g9<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g10UD           g30UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $7 };
shl(16)         g9<1>D          g52<8,8,1>D     0x00000002UD    { align1 1H $7.src };
shr(16)         g11<1>UD        g52<1,1,0>UD    0x0000001eUD    { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g13<1>D         g42<1,1,0>D     g9<1,1,0>D      { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g15<1>UD        g13<1,1,0>UD    g42<1,1,0>UD    { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g19<2>UD        g13<4,4,1>UD                    { align1 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $6.src };
mov(8)          g21<2>UD        g14<4,4,1>UD                    { align1 2Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add3(16)        g17<1>D         g44<8,8,1>D     g11<8,8,1>D     -g15<1,1,1>D { align1 1H A@1 };
mov(8)          g19.1<2>UD      g17<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g21.1<2>UD      g18<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g19UD           g52UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
shr(16)         g60<1>UD        g58<0,1,0>UD    0x00000006UD    { align1 1H F@1 compacted };
add(16)         g18<1>D         g54<1,1,0>D     g52<1,1,0>D     { align1 1H $8.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
cmp.l.f0.0(16)  g20<1>UD        g18<1,1,0>UD    g54<1,1,0>UD    { align1 1H I@1 compacted };
shl(16)         g24<1>D         g18<8,8,1>D     0x00000002UD    { align1 1H $6.src };
shr(16)         g27<1>UD        g18<1,1,0>UD    0x0000001eUD    { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g22<1>D         -g20<1,1,0>D    g118<1,1,0>D    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g30<1>D         g42<1,1,0>D     g24<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shl(16)         g25<1>D         g22<8,8,1>D     0x00000002UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(16)  g32<1>UD        g30<1,1,0>UD    g42<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g50<2>UD        g30<4,4,1>UD                    { align1 1Q };
mov(8)          g52<2>UD        g31<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
or(16)          g29<1>UD        g25<1,1,0>UD    g27<1,1,0>UD    { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add3(16)        g34<1>D         g44<8,8,1>D     g29<8,8,1>D     -g32<1,1,1>D { align1 1H I@1 };
mov(8)          g50.1<2>UD      g34<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g52.1<2>UD      g35<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g50UD           g60UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $15 };
and.nz.f0.0(16) null<1>UD       g56<8,8,1>UD    g70<8,8,1>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL19         UIP:  LABEL19             { align1 1H };
shl(16)         g35<1>D         g54<8,8,1>D     0x00000003UD    { align1 1H $7.src };
add(16)         g42<1>D         g38<1,1,0>D     40D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
or(16)          g69<1>UD        g35<8,8,1>UD    0xffffffc0UD    { align1 1H A@2 };
cmp.l.f0.0(16)  g44<1>UD        g42<1,1,0>UD    g38<1,1,0>UD    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(8)          g61<2>UD        g42<4,4,1>UD                    { align1 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $15.src };
mov(8)          g63<2>UD        g43<4,4,1>UD                    { align1 2Q F@1 };
add(16)         g46<1>D         -g44<1,1,0>D    g40<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g61.1<2>UD      g46<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g63.1<2>UD      g47<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g47UD           g61UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $15 };
shl(16)         g49<1>D         g47<8,8,1>D     0x00000006UD    { align1 1H $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g51<1>D         g38<1,1,0>D     g49<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
cmp.l.f0.0(16)  g53<1>UD        g51<1,1,0>UD    g38<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g65<2>UD        g51<4,4,1>UD                    { align1 1Q };
mov(8)          g67<2>UD        g52<4,4,1>UD                    { align1 2Q F@6 };
add(16)         g55<1>D         -g53<1,1,0>D    g40<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g65.1<2>UD      g55<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g67.1<2>UD      g56<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g65UD           g69UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $9 };

LABEL19:
endif(16)       JIP:  LABEL18                                   { align1 1H };

LABEL18:
endif(16)       JIP:  LABEL20                                   { align1 1H };

LABEL20:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q $5.src };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_DFS_DFS_trivial_batchable_code[] = {
    0x80000065, 0x08058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x38050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00080c, 0x00340000,
    0x80030061, 0x7b054410, 0x00000000, 0x76543210,
    0x00031a41, 0x20018220, 0x01463805, 0x00580058,
    0x60611b41, 0x05803802, 0x647b1b40, 0x00807b95,
    0xfe5f0049, 0x05803803, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x32050160,
    0x00467b05, 0x00000000, 0x00130041, 0x20018220,
    0x01463905, 0x00580058, 0xe0181a65, 0x00f03203,
    0x00130049, 0x60058222, 0x02463905, 0x00000058,
    0x00041a61, 0x77060210, 0x00461805, 0x00000000,
    0x00040061, 0x34050120, 0x00561806, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa0631f40, 0x61010202, 0x27791970, 0x02106303,
    0x00030061, 0x6e060220, 0x00346305, 0x00000000,
    0x00130061, 0x70060220, 0x00346405, 0x00000000,
    0xa07d0040, 0x02006303, 0xa0060040, 0x03c06303,
    0xa00b0040, 0x03006303, 0x27031b70, 0x63007d03,
    0x00030061, 0x66060220, 0x00347d05, 0x00000000,
    0x00130061, 0x68060220, 0x00347e05, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x27081d70, 0x63000603, 0x00030061, 0x6a060220,
    0x00340605, 0x00000000, 0x00130061, 0x6c060220,
    0x00340705, 0x00000000, 0x00040052, 0x7c040660,
    0x0e2e0224, 0x79055f05, 0x00031f61, 0x72060220,
    0x00340b05, 0x00000000, 0x00131f61, 0x74060220,
    0x00340c05, 0x00000000, 0x27100070, 0x63000b03,
    0xa00a1c40, 0x7c020802, 0x00030061, 0x6e260220,
    0x00347c05, 0x00000000, 0x00130061, 0x70260220,
    0x00347d05, 0x00000000, 0xa0050040, 0x7c020302,
    0xa0121d40, 0x7c021002, 0x00031d61, 0x6a260220,
    0x00340a05, 0x00000000, 0x00131e61, 0x6c260220,
    0x00340b05, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x2a440000,
    0xfb046e24, 0x003c0000, 0x00031c61, 0x66260220,
    0x00340505, 0x00000000, 0x00131d61, 0x68260220,
    0x00340605, 0x00000000, 0x00031d61, 0x72260220,
    0x00341205, 0x00000000, 0x00131e61, 0x74260220,
    0x00341305, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x54140000,
    0xfb046a24, 0x00040000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x26240000,
    0xfb046624, 0x000c0000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x13240000,
    0xfb047224, 0x000c0000, 0x00042261, 0x0e060210,
    0x00465405, 0x00000000, 0xe0172465, 0x00101303,
    0x00042461, 0x36050120, 0x00561506, 0x00000000,
    0xae381a70, 0x00001703, 0x00041a70, 0x00010660,
    0x56463405, 0x00463605, 0x01040022, 0x0001c060,
    0x00000240, 0x000001c0, 0x00040069, 0x19058660,
    0x02463405, 0x00000005, 0xe01b0068, 0x01b03403,
    0xa01da140, 0x19002e02, 0x271f1970, 0x2e001d03,
    0x00030061, 0x3e060220, 0x00341d05, 0x00000000,
    0x00130061, 0x40060220, 0x00341e05, 0x00000000,
    0xa0230040, 0x01001d03, 0x0004c152, 0x21040e68,
    0x0e2e3005, 0x1f051b05, 0x273a1a70, 0x1d002303,
    0x00033461, 0x73060220, 0x00342305, 0x00000000,
    0x00133461, 0x75060220, 0x00342405, 0x00000000,
    0x00031c61, 0x3e260220, 0x00342105, 0x00000000,
    0x00131d61, 0x40260220, 0x00342205, 0x00000000,
    0xa03c1d40, 0x21023a02, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x02440000,
    0xfb043e24, 0x003c0000, 0x00031961, 0x73260220,
    0x00343c05, 0x00000000, 0x00131a61, 0x75260220,
    0x00343d05, 0x00000000, 0x00042561, 0x40050220,
    0x00460205, 0x00000000, 0x00042561, 0x42050220,
    0x00460405, 0x00000000, 0x00042561, 0x44050220,
    0x00460605, 0x00000000, 0x00042561, 0x12050220,
    0x00460805, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x02440000,
    0xfb047324, 0x003c0000, 0x00042461, 0x14050220,
    0x00460205, 0x00000000, 0x00042461, 0x3c050220,
    0x00460405, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00042461, 0x3e050220,
    0x00460605, 0x00000000, 0x00042461, 0x24050220,
    0x00460805, 0x00000000, 0x00040024, 0x0001c060,
    0x00000090, 0x00000090, 0x00041d61, 0x12054220,
    0x00000000, 0x00000000, 0x00041f61, 0x44054220,
    0x00000000, 0x7f800000, 0x00041f61, 0x42054220,
    0x00000000, 0x7f800000, 0x00040061, 0x40054220,
    0x00000000, 0x7f800000, 0x00041e61, 0x24054220,
    0x00000000, 0x80000000, 0x00041f61, 0x3e054220,
    0x00000000, 0xff800000, 0x00041f61, 0x3c054220,
    0x00000000, 0xff800000, 0x00040061, 0x14054220,
    0x00000000, 0xff800000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00041e61, 0x16050220,
    0x00464005, 0x00000000, 0x00041f61, 0x18050220,
    0x00464205, 0x00000000, 0x00041f61, 0x1a050220,
    0x00464405, 0x00000000, 0x00041f61, 0x1c050220,
    0x00461205, 0x00000000, 0x00041e61, 0x1e050220,
    0x00461405, 0x00000000, 0x00041f61, 0x20050220,
    0x00463c05, 0x00000000, 0x00041f61, 0x22050220,
    0x00463e05, 0x00000000, 0x00040070, 0x48058550,
    0x15567706, 0x00000000, 0x80003161, 0x70054660,
    0x00000000, 0x00000001, 0x00041a61, 0x46050560,
    0x20464805, 0x00000000, 0x01040022, 0x0001c060,
    0x000002a0, 0x000002a0, 0xa0492340, 0x00c02603,
    0x274b1970, 0x26004903, 0x00033461, 0x74060220,
    0x00344905, 0x00000000, 0x00133461, 0x76060220,
    0x00344a05, 0x00000000, 0xa04db340, 0x28024b02,
    0x00031961, 0x74260220, 0x00344d05, 0x00000000,
    0x00131a61, 0x76260220, 0x00344e05, 0x00000000,
    0xe2020961, 0x00114004, 0x80000965, 0x02058220,
    0x02000204, 0xffffffff, 0xe2030961, 0x00117044,
    0x80000965, 0x03058220, 0x02000304, 0xffffffff,
    0x22031965, 0x03110203, 0x80001961, 0x4f050220,
    0x00000304, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0004004d, 0x51050220,
    0x00004f04, 0x00000000, 0xe2040961, 0x00114004,
    0x80000965, 0x04058220, 0x02000404, 0xffffffff,
    0x00040061, 0x58050160, 0x00467b05, 0x00000000,
    0x80001a4c, 0x56050220, 0x00000404, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040070, 0x00010660, 0x16465805, 0x00005604,
    0x01040022, 0x0001c060, 0x00000030, 0x00000030,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x7c140000, 0xfb187424, 0x01005114,
    0x00040025, 0x00004600, 0x00000000, 0x00000148,
    0xe2050961, 0x00114004, 0x80000965, 0x05058220,
    0x02000504, 0xffffffff, 0x8000194c, 0x59050220,
    0x00000504, 0x00000000, 0x80009469, 0x10018220,
    0x02005904, 0x00000002, 0x80000940, 0x10018220,
    0x02001000, 0x00000e00, 0x80000961, 0x5b050220,
    0x00010600, 0x00000000, 0xe2060961, 0x00114004,
    0x80000965, 0x06058220, 0x02000604, 0xffffffff,
    0x00040061, 0x5f050160, 0x00467b05, 0x00000000,
    0xe2070961, 0x00117044, 0x80000965, 0x07058220,
    0x02000704, 0xffffffff, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x61052660,
    0x02007004, 0x00465f05, 0x22071a65, 0x07110603,
    0x80001961, 0x5d050220, 0x00000704, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040065, 0x63050220, 0x06005d04, 0x02466105,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x0004194d, 0x65050220, 0x00466305, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xa0673340, 0x65015b02, 0x00041969, 0x3a058660,
    0x02466705, 0x00000006, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0xa048a340, 0x3a102602,
    0xa06a3240, 0x01002603, 0xa07e0040, 0x00403203,
    0xa0060040, 0xff403203, 0xa0080040, 0x00203203,
    0xa0100040, 0xff203203, 0xa0523440, 0x00103203,
    0xa0560040, 0xff103203, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x27681f70, 0x26004803,
    0x00030061, 0x0a060220, 0x00344805, 0x00000000,
    0x00130061, 0x0c060220, 0x00344905, 0x00000000,
    0x00031f61, 0x02060220, 0x00346a05, 0x00000000,
    0x00130061, 0x04060220, 0x00346b05, 0x00000000,
    0x276c3270, 0x26006a03, 0x00040070, 0x00018660,
    0x56467e05, 0x00000010, 0xa04af340, 0x28026802,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa06e1b40, 0x28026c02, 0x2f4c0062, 0x06007e03,
    0x00031b61, 0x0a260220, 0x00344a05, 0x00000000,
    0x00131c61, 0x0c260220, 0x00344b05, 0x00000000,
    0x00031c61, 0x02260220, 0x00346e05, 0x00000000,
    0x00131d61, 0x04260220, 0x00346f05, 0x00000000,
    0x00040070, 0x00018660, 0x56460805, 0x00000010,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x71140000, 0xfb040224, 0x00040000,
    0x2f4e0062, 0x10000803, 0x00040070, 0x00018660,
    0x56465205, 0x00000010, 0x2f503462, 0x56005203,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00042669, 0x73058660, 0x02467105, 0x00000006,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00041952, 0x75040e68, 0x0e2e2605, 0x48057305,
    0x0004196c, 0x08058660, 0x02467505, 0x00000006,
    0x00040070, 0x76058550, 0x15560e06, 0x00010001,
    0x00041961, 0x52050560, 0x20467605, 0x00000000,
    0x11040022, 0x0001c060, 0x00002880, 0x00001228,
    0x00040070, 0x00010220, 0x52463205, 0x00463605,
    0x01040062, 0x56058220, 0x02461405, 0xff800000,
    0x01040062, 0x58058220, 0x02463c05, 0xff800000,
    0x01040062, 0x5a058220, 0x02463e05, 0xff800000,
    0x01040062, 0x0e058220, 0x02464005, 0x7f800000,
    0x01040062, 0x10058220, 0x02464205, 0x7f800000,
    0x01040062, 0x5c058220, 0x02464405, 0x7f800000,
    0x80041e61, 0x10014110, 0x00000000, 0x0ac00ac0,
    0x00040069, 0x10018510, 0x01564c06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0ac00ac0,
    0xe06a0961, 0x001b0004, 0x80041e61, 0x10014110,
    0x00000000, 0x0b000b00, 0x00040069, 0x10018510,
    0x01564c06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0b000b00, 0xe0680961, 0x001b0004,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80041e61, 0x10014110, 0x00000000, 0x0b400b40,
    0x00040069, 0x10018510, 0x01564c06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0b400b40,
    0xe0660961, 0x001b0004, 0x80041e61, 0x10014110,
    0x00000000, 0x01c001c0, 0x00040069, 0x10018510,
    0x01564c06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x01c001c0, 0xe0640961, 0x001b0004,
    0x80041e61, 0x10014110, 0x00000000, 0x02000200,
    0x00040069, 0x10018510, 0x01564c06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x02000200,
    0xe0620961, 0x001b0004, 0x80041e61, 0x10014110,
    0x00000000, 0x0b800b80, 0x00040069, 0x10018510,
    0x01564c06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0b800b80, 0xe05e0961, 0x001b0004,
    0x00040070, 0x00018220, 0x52463205, 0x00000006,
    0x25601f62, 0x6a005600, 0x25560962, 0x68005800,
    0x25580962, 0x66005a00, 0x275a0962, 0x64000e00,
    0x270e0962, 0x62001000, 0x80041561, 0x10014110,
    0x00000000, 0x0c000c00, 0x00040069, 0x10018510,
    0x01564e06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0c000c00, 0xe06a0961, 0x001b0004,
    0x27100962, 0x5e005c00, 0x80041561, 0x10014110,
    0x00000000, 0x0ac00ac0, 0x00040069, 0x10018510,
    0x01564e06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0ac00ac0, 0xe0680961, 0x001b0004,
    0x80041461, 0x10014110, 0x00000000, 0x0b000b00,
    0x00040069, 0x10018510, 0x01564e06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0b000b00,
    0xe0660961, 0x001b0004, 0x80041361, 0x10014110,
    0x00000000, 0x0b400b40, 0x00040069, 0x10018510,
    0x01564e06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0b400b40, 0xe0640961, 0x001b0004,
    0x80041261, 0x10014110, 0x00000000, 0x01c001c0,
    0x00040069, 0x10018510, 0x01564e06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x01c001c0,
    0xe0620961, 0x001b0004, 0x255e1d62, 0x6a006000,
    0x80040a61, 0x10014110, 0x00000000, 0x02000200,
    0x00040069, 0x10018510, 0x01564e06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x02000200,
    0xe05c0961, 0x001b0004, 0x25600962, 0x68005600,
    0x25560962, 0x66005800, 0x27580962, 0x64005a00,
    0x80041461, 0x10014110, 0x00000000, 0x0bc00bc0,
    0x00040069, 0x10018510, 0x01565006, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0bc00bc0,
    0xe06a0961, 0x001b0004, 0x275a0962, 0x62000e00,
    0x80041461, 0x10014110, 0x00000000, 0x0c000c00,
    0x00040069, 0x10018510, 0x01565006, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0c000c00,
    0xe0680961, 0x001b0004, 0x270e0962, 0x5c001000,
    0x80041461, 0x10014110, 0x00000000, 0x0ac00ac0,
    0x00040069, 0x10018510, 0x01565006, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0ac00ac0,
    0xe0660961, 0x001b0004, 0x80041361, 0x10014110,
    0x00000000, 0x0b000b00, 0x00040069, 0x10018510,
    0x01565006, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0b000b00, 0xe0640961, 0x001b0004,
    0x255c1c62, 0x6a005e00, 0x80041361, 0x10014110,
    0x00000000, 0x0b400b40, 0x00040069, 0x10018510,
    0x01565006, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0b400b40, 0xe0620961, 0x001b0004,
    0x255e0962, 0x68006000, 0x80040b61, 0x10014110,
    0x00000000, 0x01c001c0, 0x00040069, 0x10018510,
    0x01565006, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x01c001c0, 0xe0100961, 0x001b0004,
    0x25600962, 0x66005600, 0x27560962, 0x64005800,
    0x27580962, 0x62005a00, 0x275a0962, 0x10000e00,
    0x01040022, 0x0001c060, 0x00000ce8, 0x00000ce8,
    0x25621262, 0x5caa5600, 0x25641362, 0x5eaa5800,
    0x25661362, 0x60aa5a00, 0xa06a1740, 0x01004803,
    0x00040061, 0x6e064540, 0x00000000, 0xffffffff,
    0x25681162, 0x66006400, 0x00040061, 0x6c070200,
    0x00465405, 0x00000000, 0x00030b61, 0x0e060220,
    0x00346a05, 0x00000000, 0x00130c61, 0x10060220,
    0x00346b05, 0x00000000, 0x25540962, 0x68006200,
    0x00040961, 0x62050020, 0x00666c07, 0x00000000,
    0xe0641141, 0x34005400, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x20021140, 0x64215600,
    0x20043640, 0x64215800, 0x20060040, 0x64215a00,
    0x20540040, 0x64015c00, 0x20560040, 0x64015e00,
    0x20580040, 0x64016000, 0x205c1340, 0x02205400,
    0x20541340, 0x04205600, 0x205e1340, 0x06205800,
    0x00041341, 0x5a058aa0, 0x0a465c05, 0x3f800001,
    0x00041341, 0x58058aa0, 0x0a465405, 0x3f800001,
    0x00041341, 0x56058aa0, 0x0a465e05, 0x3f800001,
    0x00041265, 0x54058220, 0x02465a05, 0x007fffff,
    0x00041765, 0x60058220, 0x02465a05, 0x80000000,
    0x00041365, 0x5c058220, 0x02465a05, 0x7f800000,
    0x00041165, 0x5e058220, 0x02465805, 0x7f800000,
    0x00041765, 0x64058220, 0x02465805, 0x80000000,
    0x00041165, 0x66058220, 0x02465605, 0x80000000,
    0x00040065, 0x68058220, 0x02465605, 0x7f800000,
    0x00040065, 0x5a058220, 0x02465805, 0x007fffff,
    0x00040065, 0x58058220, 0x02465605, 0x007fffff,
    0x00041f40, 0x56058660, 0x06465405, 0x3f000000,
    0x00041f6c, 0x54058660, 0x02465c05, 0x00000017,
    0x00041c40, 0x5c058660, 0x06465a05, 0x3f000000,
    0x00041f6c, 0x5a058660, 0x02465e05, 0x00000017,
    0x00041d40, 0x5e058660, 0x06465805, 0x3f000000,
    0xac001d70, 0x3f805601, 0x00041f6c, 0x58058660,
    0x02466805, 0x00000017, 0x11040062, 0x68058220,
    0x02465605, 0x3f000000, 0x00040965, 0x56058220,
    0x02466805, 0x7fffffff, 0xac001e70, 0x3f805c01,
    0x20681966, 0x60005603, 0x11040062, 0x56058220,
    0x02465c05, 0x3f000000, 0x00040965, 0x5c058220,
    0x02465605, 0x7fffffff, 0xac001f70, 0x3f805e01,
    0x20561966, 0x64005c03, 0x11040062, 0x5c058220,
    0x02465e05, 0x3f000000, 0x00040965, 0x5e058220,
    0x02465c05, 0x7fffffff, 0x00041970, 0x5c058aa0,
    0x3a466805, 0x3f7f0000, 0x20601966, 0x66005e03,
    0x00041970, 0x5e058aa0, 0x3a465605, 0x3f7f0000,
    0x00041152, 0x56044560, 0x0e2eff82, 0x5c055405,
    0x00041970, 0x5c058aa0, 0x3a466005, 0x3f7f0000,
    0x00041252, 0x54044560, 0x0e2eff82, 0x5e055a05,
    0x275a0070, 0x48006a03, 0x00041152, 0x5e044560,
    0x0e2eff82, 0x5c055805, 0xa0581a40, 0x4a025a02,
    0x00031961, 0x0e260220, 0x00345805, 0x00000000,
    0x00131a61, 0x10260220, 0x00345905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x00000000, 0xf3080e24, 0x00026214,
    0x00044631, 0x00000000, 0xfb0c0a24, 0x003c0244,
    0xa0580040, 0x01204803, 0x00040961, 0x60070200,
    0x00465605, 0x00000000, 0x275a1a70, 0x48005803,
    0x00033761, 0x0e060220, 0x00345805, 0x00000000,
    0x00133761, 0x10060220, 0x00345905, 0x00000000,
    0x00043761, 0x62070200, 0x00465405, 0x00000000,
    0x00041f61, 0x64070200, 0x00465e05, 0x00000000,
    0x00041e61, 0x5c070000, 0x00666007, 0x00000000,
    0xa0581e40, 0x4a025a02, 0x00041a61, 0x5c0f0000,
    0x00666207, 0x00000000, 0x00031a61, 0x0e260220,
    0x00345805, 0x00000000, 0x00131b61, 0x10260220,
    0x00345905, 0x00000000, 0x00041b61, 0x5c170000,
    0x00666407, 0x00000000, 0x00041961, 0x5c1f0000,
    0x00566e06, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xfb080e24, 0x00005c14, 0x00040070, 0x00010220,
    0x52463205, 0x00463605, 0x01040022, 0x0001c060,
    0x000003d0, 0x00000360, 0x250e3862, 0x14434000,
    0x255a1f62, 0x3c434200, 0x255c3862, 0x3e434400,
    0x00040069, 0x5805a660, 0x02465605, 0x00000017,
    0x00040069, 0x5605a660, 0x02465405, 0x00000017,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x25101162, 0x5c005a00, 0x00040069, 0x5405a660,
    0x02465e05, 0x00000017, 0x00041b40, 0x5e058660,
    0x06465805, 0x43800000, 0x00041b40, 0x60058660,
    0x06465605, 0x43800000, 0x00041b40, 0x62058660,
    0x06465405, 0x43800000, 0x25540962, 0x10000e00,
    0xe00e1141, 0x34005400, 0x20101140, 0x0e204000,
    0x20540040, 0x0e204200, 0x20561a40, 0x0e204400,
    0x20581b40, 0x0e001400, 0x205a0040, 0x0e003c00,
    0x205c0040, 0x0e003e00, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x200e1640, 0x02201000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x20101640, 0x04205400, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x20541640, 0x06205600,
    0x20561640, 0x02205800, 0x20581640, 0x04205a00,
    0x205a1640, 0x06205c00, 0x00041641, 0x5c058aa0,
    0x0a460e05, 0x3f7ffffe, 0x00041641, 0x0e058aa0,
    0x0a461005, 0x3f7ffffe, 0x00041641, 0x10058aa0,
    0x0a465405, 0x3f7ffffe, 0x00041641, 0x54058aa0,
    0x0a465605, 0x3f800001, 0x00041641, 0x56058aa0,
    0x0a465805, 0x3f800001, 0x00041641, 0x58058aa0,
    0x0a465a05, 0x3f800001, 0x205a0b41, 0x5e005c00,
    0x205c0a41, 0x60000e00, 0x200e0941, 0x62001000,
    0x20101641, 0x5e005400, 0x20541641, 0x60005600,
    0x20561641, 0x62005800, 0x60581645, 0x00105a00,
    0x605a1645, 0x00105c00, 0x605c1645, 0x00100e00,
    0x600e1645, 0x00121000, 0x60101645, 0x00125400,
    0x60541645, 0x00125600, 0xe5561662, 0x00005800,
    0xe5581662, 0x00005a00, 0xe55a1662, 0x00005c00,
    0xe55c1662, 0x00020e00, 0xe50e1662, 0x00021000,
    0xe5101662, 0x00025400, 0x00041662, 0x54058aa0,
    0x5a465605, 0x437f0000, 0x00041662, 0x56058aa0,
    0x5a465805, 0x437f0000, 0x00041662, 0x58058aa0,
    0x5a465a05, 0x437f0000, 0x00041662, 0x5a058aa0,
    0x5a465c05, 0x437f0000, 0x00041662, 0x5c058aa0,
    0x5a460e05, 0x437f0000, 0x00040d61, 0x64070a00,
    0x00465405, 0x00000000, 0x00041662, 0x0e058aa0,
    0x5a461005, 0x437f0000, 0x00041561, 0x66070a00,
    0x00465605, 0x00000000, 0x00041461, 0x68070a00,
    0x00465805, 0x00000000, 0x00041361, 0x6a070a00,
    0x00465a05, 0x00000000, 0x00041261, 0x6c070a00,
    0x00465c05, 0x00000000, 0x00041d61, 0x7f050010,
    0x00666407, 0x00000000, 0x00041161, 0x6e070a00,
    0x00460e05, 0x00000000, 0x00041e61, 0x7e050010,
    0x00666607, 0x00000000, 0x00041e61, 0x7d050010,
    0x00666807, 0x00000000, 0x00041e61, 0x58050010,
    0x00666a07, 0x00000000, 0x00041e61, 0x57050010,
    0x00666c07, 0x00000000, 0x00041d61, 0x56050010,
    0x00666e07, 0x00000000, 0x00040024, 0x0001c060,
    0x00000080, 0x00000080, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x7d054110,
    0x00000000, 0x00800080, 0x00041f61, 0x7e054110,
    0x00000000, 0x00800080, 0x00041f61, 0x7f054110,
    0x00000000, 0x00800080, 0x00041d61, 0x56054110,
    0x00000000, 0x00000000, 0x00041f61, 0x57054110,
    0x00000000, 0x00000000, 0x00041f61, 0x58054110,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x000004c0, 0xa0540040, 0x32004802,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00041f61, 0x78060100, 0x00587d05, 0x00000000,
    0x00041f61, 0x61060100, 0x00587e05, 0x00000000,
    0x00041f61, 0x62060100, 0x00587f05, 0x00000000,
    0x00041f61, 0x5e060100, 0x00585605, 0x00000000,
    0x00041f61, 0x5f060100, 0x00585705, 0x00000000,
    0x00041f61, 0x60060100, 0x00585805, 0x00000000,
    0x275a1f70, 0x48005403, 0xa05c3840, 0x01c05403,
    0x00041e61, 0x58050020, 0x00566206, 0x00000000,
    0xa0561b40, 0x4a025a02, 0x275a1b70, 0x54005c03,
    0x00033861, 0x0e060220, 0x00345c05, 0x00000000,
    0x80103801, 0x00000000, 0x00000000, 0x00000000,
    0x00131161, 0x10060220, 0x00345d05, 0x00000000,
    0xa05c1b40, 0x56025a02, 0x00031961, 0x0e260220,
    0x00345c05, 0x00000000, 0x00131a61, 0x10260220,
    0x00345d05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x00000000,
    0xf3080e24, 0x00025814, 0xa05a0040, 0x02805403,
    0x00043961, 0x58050020, 0x00566106, 0x00000000,
    0x275c1a70, 0x54005a03, 0x00033961, 0x0e060220,
    0x00345a05, 0x00000000, 0x00133961, 0x10060220,
    0x00345b05, 0x00000000, 0xa05a1b40, 0x56025c02,
    0x00031961, 0x0e260220, 0x00345a05, 0x00000000,
    0x00131a61, 0x10260220, 0x00345b05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044a31, 0x00000000, 0xf3080e24, 0x00025814,
    0xa0583a40, 0x03405403, 0x00040061, 0x5c050020,
    0x00567806, 0x00000000, 0x275a1a70, 0x54005803,
    0x00033a61, 0x0e060220, 0x00345805, 0x00000000,
    0x00133a61, 0x10060220, 0x00345905, 0x00000000,
    0xa0581b40, 0x56025a02, 0x00031961, 0x0e260220,
    0x00345805, 0x00000000, 0x00131a61, 0x10260220,
    0x00345905, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x00000000,
    0xf3080e24, 0x00025c14, 0xa0580040, 0x02205403,
    0x00040061, 0x5a050020, 0x00566006, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x275c1a70, 0x54005803, 0x00033b61, 0x0e060220,
    0x00345805, 0x00000000, 0x00133b61, 0x10060220,
    0x00345905, 0x00000000, 0xa0581b40, 0x56025c02,
    0x00031961, 0x0e260220, 0x00345805, 0x00000000,
    0x00131a61, 0x10260220, 0x00345905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x00000000, 0xf3080e24, 0x00025a14,
    0xa0580040, 0x02e05403, 0x00043c61, 0x5a050020,
    0x00565f06, 0x00000000, 0x275c1a70, 0x54005803,
    0x00033c61, 0x0e060220, 0x00345805, 0x00000000,
    0x00133c61, 0x10060220, 0x00345905, 0x00000000,
    0xa0581b40, 0x56025c02, 0x00031961, 0x0e260220,
    0x00345805, 0x00000000, 0x00131a61, 0x10260220,
    0x00345905, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044d31, 0x00000000,
    0xf3080e24, 0x00025a14, 0xa0773440, 0x03a05403,
    0x00040061, 0x75050020, 0x00565e06, 0x00000000,
    0x27791a70, 0x54007703, 0x00033d61, 0x0e060220,
    0x00347705, 0x00000000, 0x00133d61, 0x10060220,
    0x00347805, 0x00000000, 0xa07b1b40, 0x56027902,
    0x00031961, 0x0e260220, 0x00347b05, 0x00000000,
    0x00131a61, 0x10260220, 0x00347c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x00000000, 0xf3080e24, 0x00027514,
    0x00040070, 0x00018660, 0x26465205, 0x00000000,
    0xa07e0040, 0x01605403, 0x11040062, 0x7c058220,
    0x02007004, 0x00000002, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x00031a61, 0x0e060220,
    0x00347e05, 0x00000000, 0x80103e01, 0x00000000,
    0x00000000, 0x00000000, 0x00131b61, 0x10060220,
    0x00347f05, 0x00000000, 0x00041b61, 0x79070200,
    0x00467c05, 0x00000000, 0x27520070, 0x54007e03,
    0x00041a61, 0x58050020, 0x00667907, 0x00000000,
    0xa0541a40, 0x56025202, 0x00031961, 0x0e260220,
    0x00345405, 0x00000000, 0x00131a61, 0x10260220,
    0x00345505, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xf3080e24, 0x00025814, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040024, 0x0001c060,
    0x00001668, 0x00001668, 0x00040b61, 0x56050020,
    0x0066121f, 0x00000000, 0x00040070, 0x00010660,
    0x56463405, 0x00463605, 0xef521a62, 0x00005603,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00040961, 0x57050020, 0x00665207, 0x00000000,
    0x00040070, 0x00010220, 0x52463205, 0x00463605,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80043d61, 0x10014110, 0x00000000, 0x0ae00ae0,
    0x00040069, 0x10018510, 0x01564c06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0ae00ae0,
    0xe0590961, 0x001b0004, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x205b3d66, 0x59005203,
    0x00040961, 0x5d050020, 0x00665b07, 0x00000000,
    0x80040961, 0x10014110, 0x00000000, 0x0ba00ba0,
    0x00040069, 0x10018510, 0x01564e06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0ba00ba0,
    0xe05f0961, 0x001b0004, 0x20610966, 0x5f005d03,
    0x00040961, 0x63050020, 0x00666107, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80040961, 0x10014110, 0x00000000, 0x0c600c60,
    0x00040069, 0x10018510, 0x01565006, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0c600c60,
    0xe0650961, 0x001b0004, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x20670966, 0x65006103,
    0x00041961, 0x54070200, 0x00006704, 0x00000000,
    0x01040022, 0x0001c060, 0x00000128, 0x000000c8,
    0x00041361, 0x69050020, 0x00006704, 0x00000000,
    0xac6b0970, 0x00006903, 0x00040070, 0x00018660,
    0x16465205, 0x00000000, 0x01041a62, 0x6d058220,
    0x02466b05, 0xffffffff, 0x00041970, 0x00018660,
    0x26466d05, 0x00000000, 0x01040062, 0x56058220,
    0x02461405, 0xff800000, 0x01040062, 0x58058220,
    0x02463c05, 0xff800000, 0x01040062, 0x5a058220,
    0x02463e05, 0xff800000, 0x01040062, 0x5c058220,
    0x02464005, 0x7f800000, 0x01041962, 0x40058220,
    0x02464205, 0x7f800000, 0x01041962, 0x42058220,
    0x02464405, 0x7f800000, 0x00040024, 0x0001c060,
    0x00000070, 0x00000070, 0x00041a61, 0x42054220,
    0x00000000, 0x7f800000, 0x00041c61, 0x40054220,
    0x00000000, 0x7f800000, 0x00041e61, 0x5c054220,
    0x00000000, 0x7f800000, 0x00041f61, 0x5a054220,
    0x00000000, 0xff800000, 0x00041f61, 0x58054220,
    0x00000000, 0xff800000, 0x00040061, 0x56054220,
    0x00000000, 0xff800000, 0x00040025, 0x00004600,
    0x00000000, 0x00001398, 0x80041d61, 0x10014110,
    0x00000000, 0x0b800b80, 0x00040069, 0x10018510,
    0x01564c06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0b800b80, 0xe06e0961, 0x001b0004,
    0x80041d61, 0x10014110, 0x00000000, 0x08000800,
    0x00040069, 0x10018510, 0x01564c06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x08000800,
    0xe05e0961, 0x001b0004, 0x80040c61, 0x10014110,
    0x00000000, 0x08400840, 0x00040069, 0x10018510,
    0x01564c06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x08400840, 0xe0660961, 0x001b0004,
    0x80040b61, 0x10014110, 0x00000000, 0x0ac00ac0,
    0x00040069, 0x10018510, 0x01564c06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0ac00ac0,
    0xe0640961, 0x001b0004, 0x80040a61, 0x10014110,
    0x00000000, 0x0b000b00, 0x00040069, 0x10018510,
    0x01564c06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0b000b00, 0xe0620961, 0x001b0004,
    0x80041f61, 0x10014110, 0x00000000, 0x0b400b40,
    0x00040069, 0x10018510, 0x01564c06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0b400b40,
    0xe0600961, 0x001b0004, 0x00040070, 0x00018220,
    0x52463205, 0x00000006, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x270e0962, 0x6e005c00,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x27100a62, 0x5e004000, 0x27121d62, 0x66004200,
    0x25441c62, 0x64005600, 0x254c1a62, 0x62005800,
    0x255e1a62, 0x60005a00, 0x80041661, 0x10014110,
    0x00000000, 0x01c001c0, 0x00040069, 0x10018510,
    0x01564e06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x01c001c0, 0xe0140961, 0x001b0004,
    0x80041561, 0x10014110, 0x00000000, 0x02000200,
    0x00040069, 0x10018510, 0x01564e06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x02000200,
    0xe03c0961, 0x001b0004, 0x80041461, 0x10014110,
    0x00000000, 0x02400240, 0x00040069, 0x10018510,
    0x01564e06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x02400240, 0xe03e0961, 0x001b0004,
    0x80041161, 0x10014110, 0x00000000, 0x08800880,
    0x00040069, 0x10018510, 0x01564e06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x08800880,
    0xe0600961, 0x001b0004, 0x80041261, 0x10014110,
    0x00000000, 0x09800980, 0x00040069, 0x10018510,
    0x01564e06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x09800980, 0xe0620961, 0x001b0004,
    0x80041161, 0x10014110, 0x00000000, 0x0bc00bc0,
    0x00040069, 0x10018510, 0x01564e06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0bc00bc0,
    0xe0640961, 0x001b0004, 0x274e1962, 0x14000e00,
    0x270e0962, 0x3c001000, 0x27100962, 0x3e001200,
    0x25141a62, 0x62004c00, 0x25120a62, 0x60004400,
    0x253c1962, 0x64005e00, 0x80040a61, 0x10014110,
    0x00000000, 0x09c009c0, 0x00040069, 0x10018510,
    0x01565006, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x09c009c0, 0xe04c0961, 0x001b0004,
    0x80041161, 0x10014110, 0x00000000, 0x01c001c0,
    0x00040069, 0x10018510, 0x01565006, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x01c001c0,
    0xe0640961, 0x001b0004, 0x80041361, 0x10014110,
    0x00000000, 0x02000200, 0x00040069, 0x10018510,
    0x01565006, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x02000200, 0xe0620961, 0x001b0004,
    0x80041261, 0x10014110, 0x00000000, 0x02800280,
    0x00040069, 0x10018510, 0x01565006, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x02800280,
    0xe0600961, 0x001b0004, 0x80040961, 0x10014110,
    0x00000000, 0x02400240, 0x00040069, 0x10018510,
    0x01565006, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x02400240, 0xe05e0961, 0x001b0004,
    0x80041161, 0x10014110, 0x00000000, 0x07800780,
    0x00040069, 0x10018510, 0x01565006, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x07800780,
    0xe03e0961, 0x001b0004, 0x27440a62, 0x4c004e00,
    0x274e0962, 0x62001000, 0x274c1d62, 0x64000e00,
    0x25501962, 0x5e001200, 0x255e1b62, 0x60001400,
    0x25601962, 0x3e003c00, 0x01040022, 0x0001c060,
    0x00000ec8, 0x00000ec8, 0x25100b62, 0x50aa4400,
    0x250e0b62, 0x5eaa4c00, 0x25140b62, 0x60aa4e00,
    0xa06a0040, 0x01004803, 0x25120962, 0x14000e00,
    0x00041761, 0x63064540, 0x00000000, 0x00010001,
    0x00030a61, 0x3c060220, 0x00346a05, 0x00000000,
    0x00130b61, 0x3e060220, 0x00346b05, 0x00000000,
    0x250e1162, 0x12001000, 0x00041b61, 0x6c050020,
    0x00566306, 0x00000000, 0xe0620941, 0x34000e00,
    0x200e1140, 0x62214400, 0x20100040, 0x62214c00,
    0x20120040, 0x62214e00, 0x20440040, 0x62015000,
    0x204c0040, 0x62015e00, 0x204e0040, 0x62016000,
    0x20501340, 0x0e204400, 0x20441340, 0x10204c00,
    0x204c1340, 0x12204e00, 0x00041341, 0x4e058aa0,
    0x0a465005, 0x3f800001, 0x00041341, 0x50058aa0,
    0x0a464405, 0x3f800001, 0x00041341, 0x44058aa0,
    0x0a464c05, 0x3f800001, 0x00041165, 0x4c058220,
    0x02464e05, 0x007fffff, 0x00041765, 0x5e058220,
    0x02464e05, 0x80000000, 0x00040065, 0x64058220,
    0x02464e05, 0x7f800000, 0x00041265, 0x60058220,
    0x02465005, 0x80000000, 0x00040065, 0x66058220,
    0x02465005, 0x7f800000, 0x00041165, 0x62058220,
    0x02464405, 0x80000000, 0x00040065, 0x68058220,
    0x02464405, 0x7f800000, 0x00040065, 0x4e058220,
    0x02465005, 0x007fffff, 0x00040065, 0x50058220,
    0x02464405, 0x007fffff, 0x00041f40, 0x44058660,
    0x06464c05, 0x3f000000, 0x00041f6c, 0x4c058660,
    0x02466405, 0x00000017, 0x00041c40, 0x64058660,
    0x06464e05, 0x3f000000, 0x00041f6c, 0x4e058660,
    0x02466605, 0x00000017, 0x00041d40, 0x66058660,
    0x06465005, 0x3f000000, 0xac001d70, 0x3f804401,
    0x00041f6c, 0x50058660, 0x02466805, 0x00000017,
    0x11040062, 0x68058220, 0x02464405, 0x3f000000,
    0x00040965, 0x44058220, 0x02466805, 0x7fffffff,
    0xac001e70, 0x3f806401, 0x20681966, 0x5e004403,
    0x11040062, 0x44058220, 0x02466405, 0x3f000000,
    0x00041965, 0x5e058220, 0x02464405, 0x7fffffff,
    0xac001f70, 0x3f806601, 0x20441966, 0x60005e03,
    0x11040062, 0x5e058220, 0x02466605, 0x3f000000,
    0x00041965, 0x60058220, 0x02465e05, 0x7fffffff,
    0x00041970, 0x5e058aa0, 0x3a466805, 0x3f7f0000,
    0x20640966, 0x62006003, 0x00041970, 0x60058aa0,
    0x3a464405, 0x3f7f0000, 0x00041152, 0x44044560,
    0x0e2eff82, 0x5e054c05, 0x00041970, 0x5e058aa0,
    0x3a466405, 0x3f7f0000, 0x00041252, 0x4c044560,
    0x0e2eff82, 0x60054e05, 0x27600070, 0x48006a03,
    0x00041152, 0x4e044560, 0x0e2eff82, 0x5e055005,
    0xa05e1a40, 0x4a026002, 0x00031961, 0x3c260220,
    0x00345e05, 0x00000000, 0x00131a61, 0x3e260220,
    0x00345f05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044f31, 0x00000000,
    0xf3083c24, 0x00026c14, 0x00043661, 0x14050220,
    0x00460805, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xfb0c0a24, 0x003c0e44, 0xa06f0040, 0x01204803,
    0x00040961, 0x64070200, 0x00464405, 0x00000000,
    0x27711a70, 0x48006f03, 0x00033661, 0x02060220,
    0x00346f05, 0x00000000, 0x00133661, 0x04060220,
    0x00347005, 0x00000000, 0x00041461, 0x66070200,
    0x00464c05, 0x00000000, 0x00041361, 0x68070200,
    0x00464e05, 0x00000000, 0x00041e61, 0x5e070000,
    0x00666407, 0x00000000, 0xa0731e40, 0x4a027102,
    0x00041a61, 0x5e0f0000, 0x00666607, 0x00000000,
    0x00031a61, 0x02260220, 0x00347305, 0x00000000,
    0x00131b61, 0x04260220, 0x00347405, 0x00000000,
    0x00041b61, 0x5e170000, 0x00666807, 0x00000000,
    0x00041961, 0x5e1f0000, 0x00665407, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xfb080224, 0x00005e14,
    0x00040070, 0x00010220, 0x52463205, 0x00463605,
    0x01040022, 0x0001c060, 0x000004b0, 0x00000440,
    0x25671c62, 0x56435c00, 0x25691c62, 0x58434000,
    0x256b3f62, 0x5a434200, 0x00043f69, 0x6d05a660,
    0x02464405, 0x00000017, 0x00040069, 0x6f05a660,
    0x02464c05, 0x00000017, 0x00040069, 0x7105a660,
    0x02464e05, 0x00000017, 0x00040070, 0x00018660,
    0x16465205, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x255f1162, 0x6b006900,
    0x00041c40, 0x61058660, 0x06466d05, 0x43800000,
    0x00041c40, 0x63058660, 0x06466f05, 0x43800000,
    0x00041c40, 0x65058660, 0x06467105, 0x43800000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x25021162, 0x5f006700, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xe0041141, 0x34000200,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x20061140, 0x04205c00, 0x20080040, 0x04204000,
    0x200a3640, 0x04204200, 0x200c3640, 0x04005600,
    0x203c3f40, 0x04005800, 0x203e3f40, 0x04005a00,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x20401540, 0x0e200600, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x20421540, 0x10200800,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x20440e40, 0x12200a00, 0x20691640, 0x0e200c00,
    0x206b1640, 0x10203c00, 0x206d0b40, 0x12203e00,
    0x00040e41, 0x4c058aa0, 0x0a464005, 0x3f7ffffe,
    0x00040d41, 0x4e058aa0, 0x0a464205, 0x3f7ffffe,
    0x00041641, 0x50058aa0, 0x0a464405, 0x3f7ffffe,
    0x00040a41, 0x6f058aa0, 0x0a466905, 0x3f800001,
    0x00040941, 0x71058aa0, 0x0a466b05, 0x3f800001,
    0x00041641, 0x02058aa0, 0x0a466d05, 0x3f800001,
    0x20520b41, 0x61004c00, 0x20540a41, 0x63004e00,
    0x20560941, 0x65005000, 0x20041641, 0x61006f00,
    0x20061641, 0x63007100, 0x20081641, 0x65000200,
    0x60581645, 0x00105200, 0x605a1645, 0x00105400,
    0x605c1645, 0x00105600, 0x600a1645, 0x00120400,
    0x600c1645, 0x00120600, 0x600e1645, 0x00120800,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xe55e1662, 0x00005800, 0xe5601662, 0x00005a00,
    0xe5621662, 0x00005c00, 0xe5101662, 0x00020a00,
    0xe5121662, 0x00020c00, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xe5141662, 0x00020e00,
    0x00041662, 0x64058aa0, 0x5a465e05, 0x437f0000,
    0x00041662, 0x66058aa0, 0x5a466005, 0x437f0000,
    0x00041662, 0x68058aa0, 0x5a466205, 0x437f0000,
    0x00041662, 0x3c058aa0, 0x5a461005, 0x437f0000,
    0x00041662, 0x3e058aa0, 0x5a461205, 0x437f0000,
    0x00041662, 0x40058aa0, 0x5a461405, 0x437f0000,
    0x00041661, 0x73070a00, 0x00466405, 0x00000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x00041561, 0x75070a00, 0x00466605, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00041461, 0x77070a00, 0x00466805, 0x00000000,
    0x00041361, 0x79070a00, 0x00463c05, 0x00000000,
    0x00041261, 0x7b070a00, 0x00463e05, 0x00000000,
    0x00041161, 0x7d070a00, 0x00464005, 0x00000000,
    0x00041e61, 0x44050010, 0x00667307, 0x00000000,
    0x00041e61, 0x45050010, 0x00667507, 0x00000000,
    0x00041e61, 0x4c050010, 0x00667707, 0x00000000,
    0x00041e61, 0x41050010, 0x00667907, 0x00000000,
    0x00041e61, 0x42050010, 0x00667b07, 0x00000000,
    0x00041e61, 0x43050010, 0x00667d07, 0x00000000,
    0x11041e62, 0x5b058110, 0x01584405, 0x00000000,
    0x11041e62, 0x5a058110, 0x01584505, 0x00000000,
    0x11041e62, 0x59058110, 0x01584c05, 0x00000000,
    0x11040e62, 0x5e058110, 0x01584105, 0x00000000,
    0x11040e62, 0x5d058110, 0x01584205, 0x00000000,
    0x11040e62, 0x5c058110, 0x01584305, 0x00000000,
    0x00040024, 0x0001c060, 0x00000080, 0x00000080,
    0x00041d61, 0x59054110, 0x00000000, 0x00800080,
    0x00041f61, 0x5a054110, 0x00000000, 0x00800080,
    0x00041f61, 0x5b054110, 0x00000000, 0x00800080,
    0x00041d61, 0x5c054110, 0x00000000, 0x00000000,
    0x00041f61, 0x5d054110, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041f61, 0x5e054110, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000005c0,
    0xa04d0040, 0x32004802, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00041f61, 0x6b060100,
    0x00585905, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x00041f61, 0x6c060100,
    0x00585a05, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x00041f61, 0x6d060100,
    0x00585b05, 0x00000000, 0x00041f61, 0x7a060100,
    0x00585c05, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x00041f61, 0x75060100,
    0x00585d05, 0x00000000, 0x00041f61, 0x7b060100,
    0x00585e05, 0x00000000, 0x274f1f70, 0x48004d03,
    0xa0530040, 0x01c04d03, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00040d61, 0x5f050020,
    0x00566d06, 0x00000000, 0xa0511b40, 0x4a024f02,
    0x27551b70, 0x4d005303, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00033e61, 0x76060220,
    0x00345305, 0x00000000, 0x00130061, 0x78060220,
    0x00345405, 0x00000000, 0xa0571b40, 0x51025502,
    0x00031961, 0x76260220, 0x00345705, 0x00000000,
    0x00131a61, 0x78260220, 0x00345805, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xf3087624, 0x00025f14,
    0xa0580040, 0x02804d03, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x64050020,
    0x00566c06, 0x00000000, 0x275a1a70, 0x4d005803,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00031561, 0x60060220, 0x00345805, 0x00000000,
    0x00131461, 0x62060220, 0x00345905, 0x00000000,
    0xa05c1b40, 0x51025a02, 0x00031961, 0x60260220,
    0x00345c05, 0x00000000, 0x00131a61, 0x62260220,
    0x00345d05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xf3086024, 0x00026414, 0xa05d0040, 0x03404d03,
    0x00040061, 0x69050020, 0x00566b06, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x275f1a70, 0x4d005d03, 0x00033161, 0x65060220,
    0x00345d05, 0x00000000, 0x00130061, 0x67060220,
    0x00345e05, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0611b40, 0x51025f02,
    0x00031961, 0x65260220, 0x00346105, 0x00000000,
    0x00131a61, 0x67260220, 0x00346205, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x00000000, 0xf3086524, 0x00026914,
    0xa0623140, 0x02204d03, 0x00040061, 0x6e050020,
    0x00567b06, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x27641a70, 0x4d006203,
    0x00033261, 0x6a060220, 0x00346205, 0x00000000,
    0x00130061, 0x6c060220, 0x00346305, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa0661b40, 0x51026402, 0x00031961, 0x6a260220,
    0x00346605, 0x00000000, 0x00131a61, 0x6c260220,
    0x00346705, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xf3086a24, 0x00026e14, 0xa0673240, 0x02e04d03,
    0x00040061, 0x73050020, 0x00567506, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x27691a70, 0x4d006703, 0x00033361, 0x6f060220,
    0x00346705, 0x00000000, 0x00130061, 0x71060220,
    0x00346805, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa06b1b40, 0x51026902,
    0x00031961, 0x6f260220, 0x00346b05, 0x00000000,
    0x00131a61, 0x71260220, 0x00346c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x00000000, 0xf3086f24, 0x00027314,
    0xa06c3340, 0x03a04d03, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00043061, 0x78050020,
    0x00567a06, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x276e1a70, 0x4d006c03,
    0x00033461, 0x74060220, 0x00346c05, 0x00000000,
    0x00133061, 0x76060220, 0x00346d05, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa0701b40, 0x51026e02, 0x00031961, 0x74260220,
    0x00347005, 0x00000000, 0x00131a61, 0x76260220,
    0x00347105, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xf3087424, 0x00027814, 0xa0713440, 0x01604d03,
    0x00040061, 0x7f064540, 0x00000000, 0x00020002,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x27731a70, 0x4d007103, 0x00033461, 0x79060220,
    0x00347105, 0x00000000, 0x00130061, 0x7b060220,
    0x00347205, 0x00000000, 0x00041c61, 0x7d050020,
    0x00567f06, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xa0751c40, 0x51027302,
    0x00031961, 0x79260220, 0x00347505, 0x00000000,
    0x00131a61, 0x7b260220, 0x00347605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x00000000, 0xf3087924, 0x00027d14,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040070, 0x00010660, 0x56463405, 0x00463605,
    0x01040022, 0x0001c060, 0x00000618, 0x00000618,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00043e6c, 0x76058660, 0x02463605, 0x0000001f,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00043469, 0x78058660, 0x02463405, 0x00000005,
    0xe07a3568, 0x01b03403, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa07ca140, 0x78002e02,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x277e1970, 0x2e007c03, 0x00033661, 0x04060220,
    0x00347c05, 0x00000000, 0x80103601, 0x00000000,
    0x00000000, 0x00000000, 0x00131761, 0x06060220,
    0x00347d05, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x0004b152, 0x02040e68,
    0x0e2e3005, 0x7e057a05, 0x00031961, 0x04260220,
    0x00340205, 0x00000000, 0x00131a61, 0x06260220,
    0x00340305, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xfb0c0424, 0x003c1644, 0xa0043640, 0x01007c03,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x27061970, 0x7c000403, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00031761, 0x0a060220,
    0x00340405, 0x00000000, 0x80103601, 0x00000000,
    0x00000000, 0x00000000, 0x00131761, 0x0c060220,
    0x00340505, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xa0081b40, 0x02020602,
    0x00031961, 0x0a260220, 0x00340805, 0x00000000,
    0x00131a61, 0x0c260220, 0x00340905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x00000000, 0xfb0c0a24, 0x003c1e44,
    0x00043769, 0x09058660, 0x02463405, 0x00000002,
    0xe00b3768, 0x01e03403, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xa00d0940, 0x09002a02,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x270f0970, 0x2a000d03, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00031161, 0x13060220,
    0x00340d05, 0x00000000, 0x80103601, 0x00000000,
    0x00000000, 0x00000000, 0x00131161, 0x15060220,
    0x00340e05, 0x00000000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00040952, 0x11040e68,
    0x0e2e2c05, 0x0f050b05, 0x00031961, 0x13260220,
    0x00341105, 0x00000000, 0x00131a61, 0x15260220,
    0x00341205, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xfb0c1324, 0x00043414, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0xe03c1168, 0x00613a03,
    0xa0123840, 0x34003602, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x27141970, 0x36001203,
    0x00043669, 0x18058660, 0x02461205, 0x00000002,
    0xe01b3668, 0x01e01203, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xa0161b40, 0x76021402,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xa01e1b40, 0x18002a02, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00041a69, 0x19058660,
    0x02461605, 0x00000002, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x27201a70, 0x2a001e03,
    0x00030061, 0x32060220, 0x00341e05, 0x00000000,
    0x00130061, 0x34060220, 0x00341f05, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x201d1c66, 0x1b001903, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00041952, 0x22040e68,
    0x0e2e2c05, 0x20051d05, 0x00031961, 0x32260220,
    0x00342205, 0x00000000, 0x00131a61, 0x34260220,
    0x00342305, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044f31, 0x00000000,
    0xfb0c3224, 0x00043c14, 0x00040065, 0x00010220,
    0x22463805, 0x00464605, 0x01040022, 0x0001c060,
    0x00000180, 0x00000180, 0x00043769, 0x23058660,
    0x02463605, 0x00000003, 0xa02a0040, 0x02802603,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x00040a66, 0x45058220, 0x02462305, 0xffffffc0,
    0x272c1a70, 0x26002a03, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x00031161, 0x3d060220,
    0x00342a05, 0x00000000, 0x80103f01, 0x00000000,
    0x00000000, 0x00000000, 0x00131161, 0x3f060220,
    0x00342b05, 0x00000000, 0xa02e1b40, 0x28022c02,
    0x00031961, 0x3d260220, 0x00342e05, 0x00000000,
    0x00131a61, 0x3f260220, 0x00342f05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044f31, 0x2f140000, 0xfb043d24, 0x00040000,
    0x00042f69, 0x31058660, 0x02462f05, 0x00000006,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0xa0331940, 0x31002602, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x27351970, 0x26003303,
    0x00030061, 0x41060220, 0x00343305, 0x00000000,
    0x00131661, 0x43060220, 0x00343405, 0x00000000,
    0xa0371b40, 0x28023502, 0x00031961, 0x41260220,
    0x00343705, 0x00000000, 0x00131a61, 0x43260220,
    0x00343805, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x00000000,
    0xfb0c4124, 0x00044514, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80033561, 0x7e050220,
    0x00460005, 0x00000000, 0x80040931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_DFS_DFS_trivial_batchable = {
   .prog_data = {
      .base.nr_params = 10,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 14768,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_DFS_DFS_trivial_batchable_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_DFS_DFS_trivial_batchable_printfs,
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
      .push.cross_thread.dwords = 10,
      .push.cross_thread.regs = 2,
      .push.cross_thread.size = 64,
   },
   .args_size = 8,
   .arg_count = 1,
   .args = gfx125_bvh_build_DFS_DFS_trivial_batchable_args,
   .code = gfx125_bvh_build_DFS_DFS_trivial_batchable_code,
};
const char *gfx125_bvh_build_DFS_DFS_trivial_batchable_sha1 = "7c5eec2b4e649a02eefee0f9c9be27e995ab95a0";

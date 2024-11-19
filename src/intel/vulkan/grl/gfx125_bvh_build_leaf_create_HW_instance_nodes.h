#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_leaf_create_HW_instance_nodes_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_leaf_create_HW_instance_nodes_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_leaf_create_HW_instance_nodes_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
   { 24, 8 },
   { 32, 8 },
   { 40, 4 },
   { 44, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g25<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g18<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g25UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
add(1)          g26<1>UD        g25<0,1,0>UD    0x00000040UD    { align1 WE_all 1N $0.src compacted };
mov(8)          g98<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g94<1>D         g18<8,8,1>D     0x00000004UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g3UD            g26UD           nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
add(8)          g98.8<1>UW      g98<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g96<1>UD        g98<8,8,1>UW                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g100<1>D        g2<0,1,0>D      36D             { align1 1H compacted };
cmp.l.f0.0(16)  g102<1>UD       g100<1,1,0>UD   g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g106<2>UD       g100<4,4,1>UD                   { align1 1Q };
mov(8)          g108<2>UD       g101<4,4,1>UD                   { align1 2Q };
add(16)         g99<1>D         g94<1,1,0>D     g96<1,1,0>D     { align1 1H I@5 compacted };
add(16)         g104<1>D        -g102<1,1,0>D   g2.1<0,1,0>D    { align1 1H I@4 compacted };
mov(8)          g106.1<2>UD     g104<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g108.1<2>UD     g105<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g110UD          g106UD          nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
cmp.l.f0.0(16)  null<1>UD       g99<8,8,1>UD    g110<8,8,1>UD   { align1 1H @4 $2.dst };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
cmp.z.f0.0(16)  null<1>D        g99<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL1              { align1 1H };
add(16)         g112<1>D        g2.6<0,1,0>D    36D             { align1 1H compacted };
cmp.l.f0.0(16)  g114<1>UD       g112<1,1,0>UD   g2.6<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g118<2>UD       g112<4,4,1>UD                   { align1 1Q };
mov(8)          g120<2>UD       g113<4,4,1>UD                   { align1 2Q };
add(16)         g116<1>D        -g114<1,1,0>D   g2.7<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g118.1<2>UD     g116<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g120.1<2>UD     g117<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g122UD          g118UD          nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
add3(16)        g19<1>D         g110<8,8,1>D    g110<8,8,1>D    g122<1,1,1>D { align1 1H $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g118UD          g19UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mul(16)         g123<1>D        g99<8,8,1>D     g3.4<0,1,0>UW   { align1 1H };
mul(16)         g24<1>D         g99<8,8,1>D     g3.5<0,1,0>UW   { align1 1H };
add(16)         g56<1>D         g2.6<0,1,0>D    16D             { align1 1H compacted };
shl(16)         g58<1>D         g99<8,8,1>D     0x00000007UD    { align1 1H };
shr(16)         g60<1>UD        g99<1,1,0>UD    0x00000019UD    { align1 1H compacted };
add(16)         g123.1<2>UW     g123.1<16,8,2>UW g24<16,8,2>UW  { align1 1H I@4 };
mov(8)          g40<2>UD        g56<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g42<2>UD        g57<4,4,1>UD                    { align1 2Q I@5 };
add(16)         g125<1>D        g123<1,1,0>D    g3.3<0,1,0>D    { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g4<1>UD         g125<1,1,0>UD   g123<1,1,0>UD   { align1 1H I@1 compacted };
add(16)         g6<1>D          g2.2<0,1,0>D    g125<1,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g8<1>UD         g6<1,1,0>UD     g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g44<2>UD        g6<4,4,1>UD                     { align1 1Q };
mov(8)          g46<2>UD        g7<4,4,1>UD                     { align1 2Q };
add3(16)        g10<1>D         g2.3<0,1,0>D    -g4<8,8,1>D     -g8<1,1,1>D { align1 1H I@3 };
mov(8)          g44.1<2>UD      g10<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g46.1<2>UD      g11<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g24UD           g44UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shl(16)         g26<1>D         g24<8,8,1>D     0x00000005UD    { align1 1H $5.dst };
shr(16)         g28<1>UD        g24<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
add(16)         g30<1>D         g2.4<0,1,0>D    g26<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g44<1>UD        g30<1,1,0>UD    g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g48<2>UD        g30<4,4,1>UD                    { align1 1Q };
mov(8)          g50<2>UD        g31<4,4,1>UD                    { align1 2Q };
add(16)         g62<1>D         g30<1,1,0>D     16D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add3(16)        g46<1>D         g2.5<0,1,0>D    g28<8,8,1>D     -g44<1,1,1>D { align1 1H I@4 };
cmp.l.f0.0(16)  g64<1>UD        g62<1,1,0>UD    g30<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g52<2>UD        g62<4,4,1>UD                    { align1 1Q };
mov(8)          g54<2>UD        g63<4,4,1>UD                    { align1 2Q };
mov(8)          g48.1<2>UD      g46<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g50.1<2>UD      g47<4,4,1>UD                    { align1 2Q I@5 };
add(16)         g66<1>D         -g64<1,1,0>D    g46<1,1,0>D     { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g24UD           g48UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
mov(8)          g52.1<2>UD      g66<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g54.1<2>UD      g67<4,4,1>UD                    { align1 2Q I@2 };
and(16)         g10<1>UD        g30<8,8,1>UD    0x00ffffffUD    { align1 1H $6.dst };
mov(16)         g82<1>UD        g30.3<32,8,4>UB                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g24UD           g52UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
shl(16)         g72<1>D         g10<8,8,1>D     0x00000006UD    { align1 1H I@2 };
shr(16)         g74<1>UD        g10<1,1,0>UD    0x0000001aUD    { align1 1H compacted };
add(16)         g84<1>D         g3<0,1,0>D      g72<1,1,0>D     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g90<1>UD        g84<1,1,0>UD    g3<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g36<2>UD        g84<4,4,1>UD                    { align1 1Q };
mov(8)          g38<2>UD        g85<4,4,1>UD                    { align1 2Q };
add(16)         g62<1>D         g84<1,1,0>D     16D             { align1 1H compacted };
add(16)         g64<1>D         g84<1,1,0>D     32D             { align1 1H compacted };
add(16)         g66<1>D         g84<1,1,0>D     56D             { align1 1H compacted };
add(16)         g88<1>D         g84<1,1,0>D     48D             { align1 1H compacted };
cmp.l.f0.0(16)  g92<1>UD        g56<1,1,0>UD    g2.6<0,1,0>UD   { align1 1H compacted };
add3(16)        g86<1>D         g3.1<0,1,0>D    g74<8,8,1>D     -g90<1,1,1>D { align1 1H I@7 };
mov(8)          g32<2>UD        g62<4,4,1>UD                    { align1 1Q I@6 };
mov(8)          g34<2>UD        g63<4,4,1>UD                    { align1 2Q I@7 };
mov(8)          g12<2>UD        g64<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g14<2>UD        g65<4,4,1>UD                    { align1 2Q I@7 };
mov(8)          g16<2>UD        g66<4,4,1>UD                    { align1 1Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $4.src };
mov(8)          g18<2>UD        g67<4,4,1>UD                    { align1 2Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g20<2>UD        g88<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g22<2>UD        g89<4,4,1>UD                    { align1 2Q I@7 };
add(16)         g94<1>D         -g92<1,1,0>D    g2.7<0,1,0>D    { align1 1H I@7 compacted };
mov(8)          g36.1<2>UD      g86<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g38.1<2>UD      g87<4,4,1>UD                    { align1 2Q };
mov(8)          g40.1<2>UD      g94<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g42.1<2>UD      g95<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g44UD           g36UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g95UD           g40UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
and(16)         g80<1>UD        g30<8,8,1>UD    0x7fffffffUD    { align1 1H $7.dst };
shl(16)         g97<1>D         g95<8,8,1>D     0x00000006UD    { align1 1H $9.dst };
shr(16)         g99<1>UD        g95<1,1,0>UD    0x0000001aUD    { align1 1H compacted };
add(16)         g101<1>D        g2.6<0,1,0>D    g97<1,1,0>D     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g103<1>UD       g101<1,1,0>UD   g2.6<0,1,0>UD   { align1 1H I@1 compacted };
add(16)         g72<1>D         g101<1,1,0>D    g58<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add3(16)        g105<1>D        g2.7<0,1,0>D    g99<8,8,1>D     -g103<1,1,1>D { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g107<1>UD       g72<1,1,0>UD    g101<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g68<2>UD        g72<4,4,1>UD                    { align1 1Q };
mov(8)          g70<2>UD        g73<4,4,1>UD                    { align1 2Q };
add(16)         g123<1>D        g72<1,1,0>D     64D             { align1 1H compacted };
cmp.l.f0.0(16)  g109<1>UD       g62<1,1,0>UD    g84<1,1,0>UD    { align1 1H $2.src compacted };
cmp.l.f0.0(16)  g113<1>UD       g64<1,1,0>UD    g84<1,1,0>UD    { align1 1H compacted };
add3(16)        g74<1>D         g105<8,8,1>D    g60<8,8,1>D     -g107<1,1,1>D { align1 1H I@6 };
cmp.l.f0.0(16)  g117<1>UD       g66<1,1,0>UD    g84<1,1,0>UD    { align1 1H $4.src compacted };
mov(8)          g76<2>UD        g123<4,4,1>UD                   { align1 1Q I@5 };
mov(8)          g78<2>UD        g124<4,4,1>UD                   { align1 2Q I@6 };
cmp.l.f0.0(16)  g121<1>UD       g88<1,1,0>UD    g84<1,1,0>UD    { align1 1H $4.src compacted };
add(16)         g111<1>D        -g109<1,1,0>D   g86<1,1,0>D     { align1 1H I@7 compacted };
add(16)         g115<1>D        -g113<1,1,0>D   g86<1,1,0>D     { align1 1H I@7 compacted };
cmp.l.f0.0(16)  g125<1>UD       g123<1,1,0>UD   g72<1,1,0>UD    { align1 1H compacted };
mov(8)          g68.1<2>UD      g74<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g70.1<2>UD      g75<4,4,1>UD                    { align1 2Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g119<1>D        -g117<1,1,0>D   g86<1,1,0>D     { align1 1H I@7 compacted };
add(16)         g123<1>D        -g121<1,1,0>D   g86<1,1,0>D     { align1 1H I@7 compacted };
mov(8)          g32.1<2>UD      g111<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g34.1<2>UD      g112<4,4,1>UD                   { align1 2Q I@7 };
mov(8)          g12.1<2>UD      g115<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g14.1<2>UD      g116<4,4,1>UD                   { align1 2Q I@7 };
mov(8)          g16.1<2>UD      g119<4,4,1>UD                   { align1 1Q I@6 };
mov(8)          g18.1<2>UD      g120<4,4,1>UD                   { align1 2Q I@7 };
mov(8)          g20.1<2>UD      g123<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g22.1<2>UD      g124<4,4,1>UD                   { align1 2Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
send(16)        g52UD           g32UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g60UD           g12UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $11 };
add(16)         g14<1>D         -g125<1,1,0>D   g74<1,1,0>D     { align1 1H $11.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(16)        g4UD            g16UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g124UD          g20UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $13 };
mov(8)          g76.1<2>UD      g14<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g78.1<2>UD      g15<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mul(16)         g12<1>F         -g54<1,1,0>F    g48<1,1,0>F     { align1 1H $10.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
mul(16)         g28<1>F         -g56<1,1,0>F    g44<1,1,0>F     { align1 1H $10.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mul(16)         g42<1>F         -g52<1,1,0>F    g46<1,1,0>F     { align1 1H $10.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
mul(16)         g126<1>F        -g62<1,1,0>F    g56<1,1,0>F     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mul(16)         g1<1>F          -g46<1,1,0>F    g64<1,1,0>F     { align1 1H $11.dst compacted };
mul(16)         g24<1>F         -g64<1,1,0>F    g52<1,1,0>F     { align1 1H $7.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
mul(16)         g26<1>F         -g48<1,1,0>F    g60<1,1,0>F     { align1 1H $11.dst compacted };
mul(16)         g38<1>F         -g60<1,1,0>F    g54<1,1,0>F     { align1 1H $8.src compacted };
mul(16)         g40<1>F         -g44<1,1,0>F    g62<1,1,0>F     { align1 1H $9.src compacted };
and(16)         g8<1>UD         g124<8,8,1>UD   0x00ffffffUD    { align1 1H $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mad(16)         g17<1>F         g12<8,8,1>F     g56<8,8,1>F     g46<1,1,1>F { align1 1H F@7 };
mad(16)         g89<1>F         g28<8,8,1>F     g52<8,8,1>F     g48<1,1,1>F { align1 1H F@7 };
mad(16)         g91<1>F         g42<8,8,1>F     g54<8,8,1>F     g44<1,1,1>F { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mad(16)         g15<1>F         g1<8,8,1>F      g48<8,8,1>F     g62<1,1,1>F { align1 1H A@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mad(16)         g36<1>F         g26<8,8,1>F     g44<8,8,1>F     g64<1,1,1>F { align1 1H F@7 };
mad(16)         g13<1>F         g126<8,8,1>F    g64<8,8,1>F     g54<1,1,1>F { align1 1H I@3 };
mad(16)         g93<1>F         g38<8,8,1>F     g62<8,8,1>F     g52<1,1,1>F { align1 1H F@7 };
mad(16)         g95<1>F         g40<8,8,1>F     g46<8,8,1>F     g60<1,1,1>F { align1 1H F@7 };
mad(16)         g29<1>F         g24<8,8,1>F     g60<8,8,1>F     g56<1,1,1>F { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mul(16)         g19<1>F         g60<1,1,0>F     g17<1,1,0>F     { align1 1H F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mad(16)         g21<1>F         g19<8,8,1>F     g15<8,8,1>F     g52<1,1,1>F { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mad(16)         g23<1>F         g21<8,8,1>F     g13<8,8,1>F     g44<1,1,1>F { align1 1H F@1 };
math inv(16)    g97<1>F         g23<8,8,1>F     null<8,8,1>F    { align1 1H @1 $14 };
mul(16)         g20<1>F         g13<1,1,0>F     g97<1,1,0>F     { align1 1H $14.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mul(16)         g22<1>F         g29<1,1,0>F     g97<1,1,0>F     { align1 1H F@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mul(16)         g24<1>F         g93<1,1,0>F     g97<1,1,0>F     { align1 1H F@7 compacted };
mul(16)         g26<1>F         g15<1,1,0>F     g97<1,1,0>F     { align1 1H compacted };
mul(16)         g32<1>F         g17<1,1,0>F     g97<1,1,0>F     { align1 1H $10.src compacted };
mul(16)         g34<1>F         g89<1,1,0>F     g97<1,1,0>F     { align1 1H $10.src compacted };
mul(16)         g28<1>F         g36<1,1,0>F     g97<1,1,0>F     { align1 1H compacted };
mul(16)         g30<1>F         g95<1,1,0>F     g97<1,1,0>F     { align1 1H compacted };
mul(16)         g36<1>F         g91<1,1,0>F     g97<1,1,0>F     { align1 1H compacted };
mul(16)         g98<1>F         -g26<1,1,0>F    g58<1,1,0>F     { align1 1H @6 $10.dst compacted };
mul(16)         g100<1>F        -g28<1,1,0>F    g58<1,1,0>F     { align1 1H F@4 compacted };
mul(16)         g102<1>F        -g30<1,1,0>F    g58<1,1,0>F     { align1 1H F@4 compacted };
mad(16)         g104<1>F        g98<8,8,1>F     g50<8,8,1>F     -g20<1,1,1>F { align1 1H @3 $8.dst };
mad(16)         g106<1>F        g100<8,8,1>F    g50<8,8,1>F     -g22<1,1,1>F { align1 1H F@3 };
mad(16)         g108<1>F        g102<8,8,1>F    g50<8,8,1>F     -g24<1,1,1>F { align1 1H F@3 };
mad(16)         g14<1>F         g104<8,8,1>F    g66<8,8,1>F     -g32<1,1,1>F { align1 1H @3 $11.dst };
mad(16)         g16<1>F         g106<8,8,1>F    g66<8,8,1>F     -g34<1,1,1>F { align1 1H F@3 };
mad(16)         g18<1>F         g108<8,8,1>F    g66<8,8,1>F     -g36<1,1,1>F { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g76UD           g4UD            0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $15 };
mov(16)         g1<1>UD         g44<8,8,1>UD                    { align1 1H };
mov(16)         g3<1>UD         g52<8,8,1>UD                    { align1 1H $15.src };
mov(16)         g5<1>UD         g60<8,8,1>UD                    { align1 1H $15.src };
mov(16)         g7<1>UD         g46<8,8,1>UD                    { align1 1H $15.src };
add(16)         g88<1>D         g72<1,1,0>D     80D             { align1 1H compacted };
cmp.l.f0.0(16)  g90<1>UD        g88<1,1,0>UD    g72<1,1,0>UD    { align1 1H A@1 compacted };
mov(8)          g76<2>UD        g88<4,4,1>UD                    { align1 1Q $15.src };
mov(8)          g78<2>UD        g89<4,4,1>UD                    { align1 2Q $15.src };
add(16)         g92<1>D         -g90<1,1,0>D    g74<1,1,0>D     { align1 1H A@3 compacted };
mov(8)          g76.1<2>UD      g92<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g78.1<2>UD      g93<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g76UD           g1UD            0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $0 };
mov(16)         g1<1>UD         g54<8,8,1>UD                    { align1 1H $0.src };
mov(16)         g3<1>UD         g62<8,8,1>UD                    { align1 1H $0.src };
mov(16)         g5<1>UD         g48<8,8,1>UD                    { align1 1H $0.src };
mov(16)         g7<1>UD         g56<8,8,1>UD                    { align1 1H $0.src };
add(16)         g93<1>D         g72<1,1,0>D     96D             { align1 1H compacted };
cmp.l.f0.0(16)  g95<1>UD        g93<1,1,0>UD    g72<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g76<2>UD        g93<4,4,1>UD                    { align1 1Q $0.src };
mov(8)          g78<2>UD        g94<4,4,1>UD                    { align1 2Q $0.src };
add(16)         g97<1>D         -g95<1,1,0>D    g74<1,1,0>D     { align1 1H A@3 compacted };
mov(8)          g76.1<2>UD      g97<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g78.1<2>UD      g98<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g76UD           g1UD            0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $1 };
mov(16)         g12<1>UD        g64<8,8,1>UD                    { align1 1H };
add(16)         g98<1>D         g72<1,1,0>D     112D            { align1 1H F@6 compacted };
cmp.l.f0.0(16)  g100<1>UD       g98<1,1,0>UD    g72<1,1,0>UD    { align1 1H A@1 compacted };
mov(8)          g92<2>UD        g98<4,4,1>UD                    { align1 1Q };
mov(8)          g94<2>UD        g99<4,4,1>UD                    { align1 2Q };
add(16)         g102<1>D        -g100<1,1,0>D   g74<1,1,0>D     { align1 1H A@3 compacted };
mov(8)          g92.1<2>UD      g102<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g94.1<2>UD      g103<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g92UD           g12UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $2 };
add(16)         g103<1>D        g84<1,1,0>D     52D             { align1 1H F@3 compacted };
shl(16)         g110<1>D        g82<8,8,1>D     0x00000018UD    { align1 1H };
cmp.l.f0.0(16)  g105<1>UD       g103<1,1,0>UD   g84<1,1,0>UD    { align1 1H A@2 compacted };
mov(8)          g93<2>UD        g103<4,4,1>UD                   { align1 1Q $2.src };
mov(8)          g95<2>UD        g104<4,4,1>UD                   { align1 2Q $2.src };
add(16)         g107<1>D        -g105<1,1,0>D   g86<1,1,0>D     { align1 1H A@1 compacted };
mov(8)          g93.1<2>UD      g107<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g95.1<2>UD      g108<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g9UD            g93UD           nullUD          0x08602580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V3, L1STATE_L3MOCS dst_len = 6, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
and(16)         g108<1>UD       g9<8,8,1>UD     0x00ffffffUD    { align1 1H F@1 };
add(16)         g112<1>D        g11<1,1,0>D     g80<1,1,0>D     { align1 1H $3.dst compacted };
mov(16)         g119<1>UD       g9.3<32,8,4>UB                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
or(16)          g1<1>UD         g108<1,1,0>UD   g110<1,1,0>UD   { align1 1H I@3 compacted };
or(16)          g3<1>UD         g108<8,8,1>UD   0x20000000UD    { align1 1H $1.src };
cmp.l.f0.0(16)  g114<1>UD       g112<1,1,0>UD   g11<1,1,0>UD    { align1 1H I@4 compacted };
shl(16)         g122<1>D        g119<8,8,1>D    0x00000010UD    { align1 1H I@4 };
cmp.z.f0.0(16)  null<1>D        g80<8,8,1>D     0D              { align1 1H };
add(16)         g116<1>D        -g114<1,1,0>D   g13<1,1,0>D     { align1 1H @3 $3.dst compacted };
(-f0.0) sel(16) g5<1>UD         g112<8,8,1>UD   0x00000000UD    { align1 1H $1.src };
(-f0.0) sel(16) g118<1>UD       g116<8,8,1>UD   0x00000000UD    { align1 1H I@2 };
mov(16)         g120<1>UD       g118<16,8,2>UW                  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
or(16)          g7<1>UD         g120<1,1,0>UD   g122<1,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g68UD           g1UD            0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $4 };
add(16)         g123<1>D        g72<1,1,0>D     16D             { align1 1H compacted };
cmp.l.f0.0(16)  g125<1>UD       g123<1,1,0>UD   g72<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g3<2>UD         g123<4,4,1>UD                   { align1 1Q $4.src };
mov(8)          g5<2>UD         g124<4,4,1>UD                   { align1 2Q $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g1<1>D          -g125<1,1,0>D   g74<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g3.1<2>UD       g1<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g5.1<2>UD       g2<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g3UD            g20UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $1 };
add(16)         g4<1>D          g72<1,1,0>D     32D             { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g6<1>UD         g4<1,1,0>UD     g72<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g10<2>UD        g4<4,4,1>UD                     { align1 1Q };
mov(8)          g12<2>UD        g5<4,4,1>UD                     { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g8<1>D          -g6<1,1,0>D     g74<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g10.1<2>UD      g8<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g12.1<2>UD      g9<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g10UD           g28UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $5 };
mov(16)         g38<1>UD        g50<8,8,1>UD                    { align1 1H };
mov(16)         g40<1>UD        g58<8,8,1>UD                    { align1 1H };
mov(16)         g42<1>UD        g66<8,8,1>UD                    { align1 1H };
add(16)         g11<1>D         g72<1,1,0>D     48D             { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g13<1>UD        g11<1,1,0>UD    g72<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g17<2>UD        g11<4,4,1>UD                    { align1 1Q $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g19<2>UD        g12<4,4,1>UD                    { align1 2Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g15<1>D         -g13<1,1,0>D    g74<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g17.1<2>UD      g15<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g19.1<2>UD      g16<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g17UD           g36UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $6 };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_leaf_create_HW_instance_nodes_code[] = {
    0x80000065, 0x19058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x12050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00190c, 0x00340000,
    0xe21a3040, 0x04011903, 0x80030061, 0x62054410,
    0x00000000, 0x76543210, 0x00041b69, 0x5e058660,
    0x02461205, 0x00000004, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa001a0c, 0x00300000, 0x64621a40, 0x00806295,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x60050120, 0x00466205, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa0640040, 0x02410203, 0x27661970, 0x02106403,
    0x00030061, 0x6a060220, 0x00346405, 0x00000000,
    0x00130061, 0x6c060220, 0x00346505, 0x00000000,
    0xa0631d40, 0x60005e02, 0xa0681c40, 0x02126612,
    0x00031961, 0x6a260220, 0x00346805, 0x00000000,
    0x00131a61, 0x6c260220, 0x00346905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x6e140000, 0xfb006a24, 0x00000000,
    0x0004c270, 0x00010220, 0x52466305, 0x00466e05,
    0x01040022, 0x0001c060, 0x000010b0, 0x000010b0,
    0x00040070, 0x00018660, 0x16466305, 0x00000000,
    0x01040022, 0x0001c060, 0x000000c8, 0x000000c8,
    0xa0700040, 0x0241026b, 0x27721970, 0x0210704b,
    0x00030061, 0x76060220, 0x00347005, 0x00000000,
    0x00130061, 0x78060220, 0x00347105, 0x00000000,
    0xa0741b40, 0x02127252, 0x00031961, 0x76260220,
    0x00347405, 0x00000000, 0x00131a61, 0x78260220,
    0x00347505, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x7a140000,
    0xfb007624, 0x00000000, 0x00042352, 0x13040e68,
    0x0e0e6e05, 0x7a056e05, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xfb087624, 0x00001314, 0x00040025, 0x00004600,
    0x00000000, 0x00000fc8, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x00040041, 0x7b050660,
    0x01466305, 0x00000344, 0x00040041, 0x18050660,
    0x01466305, 0x00000354, 0xa0380040, 0x0101026b,
    0x00040069, 0x3a058660, 0x02466305, 0x00000007,
    0xe03c0068, 0x01906303, 0x00041c40, 0x7b160110,
    0x01567b16, 0x00561806, 0x00031c61, 0x28060220,
    0x00343805, 0x00000000, 0x00131d61, 0x2a060220,
    0x00343905, 0x00000000, 0xa07d1b40, 0x03107b1a,
    0x27041970, 0x7b007d03, 0xa0060040, 0x7d010242,
    0x27081970, 0x0210062b, 0x00030061, 0x2c060220,
    0x00340605, 0x00000000, 0x00130061, 0x2e060220,
    0x00340705, 0x00000000, 0x00041b52, 0x0a040660,
    0x0eae0264, 0x08050405, 0x00031961, 0x2c260220,
    0x00340a05, 0x00000000, 0x00131a61, 0x2e260220,
    0x00340b05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x18140000,
    0xfb002c24, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00042569, 0x1a058660,
    0x02461805, 0x00000005, 0xe01c0068, 0x01b01803,
    0xa01e1a40, 0x1a01025a, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x272c1970, 0x02101e0b,
    0x00030061, 0x30060220, 0x00341e05, 0x00000000,
    0x00130061, 0x32060220, 0x00341f05, 0x00000000,
    0xa03e0040, 0x01001e03, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00041c52, 0x2e040660,
    0x0e2e02a4, 0x2c051c05, 0x27401a70, 0x1e003e03,
    0x00030061, 0x34060220, 0x00343e05, 0x00000000,
    0x00130061, 0x36060220, 0x00343f05, 0x00000000,
    0x00031c61, 0x30260220, 0x00342e05, 0x00000000,
    0x00131d61, 0x32260220, 0x00342f05, 0x00000000,
    0xa0421d40, 0x2e024002, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x18440000,
    0xfb003024, 0x000c0000, 0x00031961, 0x34260220,
    0x00344205, 0x00000000, 0x00131a61, 0x36260220,
    0x00344305, 0x00000000, 0x00042665, 0x0a058220,
    0x02461e05, 0x00ffffff, 0x00040061, 0x52050020,
    0x00661e1f, 0x00000000, 0x80002601, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x18440000,
    0xfb003424, 0x000c0000, 0x00041a69, 0x48058660,
    0x02460a05, 0x00000006, 0xe04a0068, 0x01a00a03,
    0xa0541a40, 0x48010302, 0x275a1970, 0x03105403,
    0x00030061, 0x24060220, 0x00345405, 0x00000000,
    0x00130061, 0x26060220, 0x00345505, 0x00000000,
    0xa03e0040, 0x01005403, 0xa0400040, 0x02005403,
    0xa0420040, 0x03805403, 0xa0580040, 0x03005403,
    0x275c0070, 0x0210384b, 0x00041f52, 0x56040660,
    0x0e2e0324, 0x5a054a05, 0x00031e61, 0x20060220,
    0x00343e05, 0x00000000, 0x00131f61, 0x22060220,
    0x00343f05, 0x00000000, 0x00031f61, 0x0c060220,
    0x00344005, 0x00000000, 0x00131f61, 0x0e060220,
    0x00344105, 0x00000000, 0x00031f61, 0x10060220,
    0x00344205, 0x00000000, 0x80103401, 0x00000000,
    0x00000000, 0x00000000, 0x00131f61, 0x12060220,
    0x00344305, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00031f61, 0x14060220,
    0x00345805, 0x00000000, 0x00131f61, 0x16060220,
    0x00345905, 0x00000000, 0xa05e1f40, 0x02125c52,
    0x00031f61, 0x24260220, 0x00345605, 0x00000000,
    0x00130061, 0x26260220, 0x00345705, 0x00000000,
    0x00031b61, 0x28260220, 0x00345e05, 0x00000000,
    0x00131c61, 0x2a260220, 0x00345f05, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x2c440000, 0xfb002424, 0x000c0000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x5f140000, 0xfb002824, 0x00000000,
    0x00042765, 0x50058220, 0x02461e05, 0x7fffffff,
    0x00042969, 0x61058660, 0x02465f05, 0x00000006,
    0xe0630068, 0x01a05f03, 0xa0651a40, 0x6101026a,
    0x27671970, 0x0210654b, 0xa0480040, 0x3a006502,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00041a52, 0x69040660, 0x0e2e02e4, 0x67056305,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x276b1a70, 0x65004803, 0x00030061, 0x44060220,
    0x00344805, 0x00000000, 0x00130061, 0x46060220,
    0x00344905, 0x00000000, 0xa07b0040, 0x04004803,
    0x276d3270, 0x54003e03, 0x27710070, 0x54004003,
    0x00041e52, 0x4a040e68, 0x0e2e6905, 0x6b053c05,
    0x27753470, 0x54004203, 0x00031d61, 0x4c060220,
    0x00347b05, 0x00000000, 0x00131e61, 0x4e060220,
    0x00347c05, 0x00000000, 0x27793470, 0x54005803,
    0xa06f1f40, 0x56026d02, 0xa0731f40, 0x56027102,
    0x277d0070, 0x48007b03, 0x00031f61, 0x44260220,
    0x00344a05, 0x00000000, 0x00131f61, 0x46260220,
    0x00344b05, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xa0771f40, 0x56027502,
    0xa07b1f40, 0x56027902, 0x00031f61, 0x20260220,
    0x00346f05, 0x00000000, 0x00131f61, 0x22260220,
    0x00347005, 0x00000000, 0x00031f61, 0x0c260220,
    0x00347305, 0x00000000, 0x00131f61, 0x0e260220,
    0x00347405, 0x00000000, 0x00031e61, 0x10260220,
    0x00347705, 0x00000000, 0x00131f61, 0x12260220,
    0x00347805, 0x00000000, 0x00031f61, 0x14260220,
    0x00347b05, 0x00000000, 0x00131f61, 0x16260220,
    0x00347c05, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00044a31, 0x34440000,
    0xfb002024, 0x000c0000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x3c440000,
    0xfb000c24, 0x000c0000, 0xa00e3b40, 0x4a027d02,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x04240000, 0xfb001024, 0x00040000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044d31, 0x7c140000, 0xfb001424, 0x00000000,
    0x00031961, 0x4c260220, 0x00340e05, 0x00000000,
    0x00131a61, 0x4e260220, 0x00340f05, 0x00000000,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x200c2a41, 0x30023600, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x201c2a41, 0x2c023800,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x202a2a41, 0x2e023400, 0x80002b01, 0x00000000,
    0x00000000, 0x00000000, 0x207e1b41, 0x38023e00,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x20012b41, 0x40022e00, 0x20182741, 0x34024000,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x201a2b41, 0x3c023000, 0x20263841, 0x36023c00,
    0x20283941, 0x3e022c00, 0x00042d65, 0x08058220,
    0x02467c05, 0x00ffffff, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x0004175b, 0x11040aa8,
    0x0a0a0c05, 0x2e053805, 0x0004175b, 0x59040aa8,
    0x0a0a1c05, 0x30053405, 0x0004175b, 0x5b040aa8,
    0x0a0a2a05, 0x2c053605, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040a5b, 0x0f040aa8,
    0x0a0a0105, 0x3e053005, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x0004175b, 0x24040aa8,
    0x0a0a1a05, 0x40052c05, 0x00041b5b, 0x0d040aa8,
    0x0a0a7e05, 0x36054005, 0x0004175b, 0x5d040aa8,
    0x0a0a2605, 0x34053e05, 0x0004175b, 0x5f040aa8,
    0x0a0a2805, 0x3c052e05, 0x0004005b, 0x1d040aa8,
    0x0a0a1805, 0x38053c05, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x20131741, 0x11003c00,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x0004115b, 0x15040aa8, 0x0a0a1305, 0x34050f05,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x0004115b, 0x17040aa8, 0x0a0a1505, 0x2c050d05,
    0x00049e38, 0x61050aa0, 0x1a461705, 0x00460001,
    0x20142e41, 0x61000d00, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x20161541, 0x61001d00,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x20181741, 0x61005d00, 0x201a0041, 0x61000f00,
    0x20203a41, 0x61001100, 0x20223a41, 0x61005900,
    0x201c0041, 0x61002400, 0x201e0041, 0x61005f00,
    0x20240041, 0x61005b00, 0x2062ea41, 0x3a021a00,
    0x20641441, 0x3a021c00, 0x20661441, 0x3a021e00,
    0x0004b85b, 0x68040aa8, 0x0a2a6205, 0x14053205,
    0x0004135b, 0x6a040aa8, 0x0a2a6405, 0x16053205,
    0x0004135b, 0x6c040aa8, 0x0a2a6605, 0x18053205,
    0x0004bb5b, 0x0e040aa8, 0x0a2a6805, 0x20054205,
    0x0004135b, 0x10040aa8, 0x0a2a6a05, 0x22054205,
    0x0004135b, 0x12040aa8, 0x0a2a6c05, 0x24054205,
    0x80002c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044f31, 0x00000000, 0xfb084c24, 0x000c0444,
    0x00040061, 0x01050220, 0x00462c05, 0x00000000,
    0x00043f61, 0x03050220, 0x00463405, 0x00000000,
    0x00043f61, 0x05050220, 0x00463c05, 0x00000000,
    0x00043f61, 0x07050220, 0x00462e05, 0x00000000,
    0xa0580040, 0x05004803, 0x275a0970, 0x48005803,
    0x00033f61, 0x4c060220, 0x00345805, 0x00000000,
    0x00133f61, 0x4e060220, 0x00345905, 0x00000000,
    0xa05c0b40, 0x4a025a02, 0x00031961, 0x4c260220,
    0x00345c05, 0x00000000, 0x00131a61, 0x4e260220,
    0x00345d05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x00000000,
    0xfb084c24, 0x000c0144, 0x00043061, 0x01050220,
    0x00463605, 0x00000000, 0x00043061, 0x03050220,
    0x00463e05, 0x00000000, 0x00043061, 0x05050220,
    0x00463005, 0x00000000, 0x00043061, 0x07050220,
    0x00463805, 0x00000000, 0xa05d0040, 0x06004803,
    0x275f1970, 0x48005d03, 0x00033061, 0x4c060220,
    0x00345d05, 0x00000000, 0x00133061, 0x4e060220,
    0x00345e05, 0x00000000, 0xa0610b40, 0x4a025f02,
    0x00031961, 0x4c260220, 0x00346105, 0x00000000,
    0x00131a61, 0x4e260220, 0x00346205, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb084c24, 0x000c0144,
    0x00040061, 0x0c050220, 0x00464005, 0x00000000,
    0xa0621640, 0x07004803, 0x27640970, 0x48006203,
    0x00030061, 0x5c060220, 0x00346205, 0x00000000,
    0x00130061, 0x5e060220, 0x00346305, 0x00000000,
    0xa0660b40, 0x4a026402, 0x00031961, 0x5c260220,
    0x00346605, 0x00000000, 0x00131a61, 0x5e260220,
    0x00346705, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xfb085c24, 0x000c0c44, 0xa0671340, 0x03405403,
    0x00040069, 0x6e058660, 0x02465205, 0x00000018,
    0x27690a70, 0x54006703, 0x00033261, 0x5d060220,
    0x00346705, 0x00000000, 0x00133261, 0x5f060220,
    0x00346805, 0x00000000, 0xa06b0940, 0x56026902,
    0x00031961, 0x5d260220, 0x00346b05, 0x00000000,
    0x00131a61, 0x5f260220, 0x00346c05, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x09340000, 0xfb005d24, 0x00080000,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x00041165, 0x6c058220, 0x02460905, 0x00ffffff,
    0xa0702340, 0x50000b02, 0x00040061, 0x77050020,
    0x0066091f, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x20011b66, 0x6e006c03,
    0x00043166, 0x03058220, 0x02466c05, 0x20000000,
    0x27721c70, 0x0b007003, 0x00041c69, 0x7a058660,
    0x02467705, 0x00000010, 0x00040070, 0x00018660,
    0x16465005, 0x00000000, 0xa074b340, 0x0d027202,
    0x11043162, 0x05058220, 0x02467005, 0x00000000,
    0x11041a62, 0x76058220, 0x02467405, 0x00000000,
    0x00041961, 0x78050120, 0x00567606, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x20071966, 0x7a007803, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xfb084424, 0x000c0144, 0xa07b0040, 0x01004803,
    0x277d1970, 0x48007b03, 0x00033461, 0x03060220,
    0x00347b05, 0x00000000, 0x00133461, 0x05060220,
    0x00347c05, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xa0011b40, 0x4a027d02,
    0x00031961, 0x03260220, 0x00340105, 0x00000000,
    0x00131a61, 0x05260220, 0x00340205, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb080324, 0x000c1444,
    0xa0043140, 0x02004803, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x27061970, 0x48000403,
    0x00030061, 0x0a060220, 0x00340405, 0x00000000,
    0x00130061, 0x0c060220, 0x00340505, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa0081b40, 0x4a020602, 0x00031961, 0x0a260220,
    0x00340805, 0x00000000, 0x00131a61, 0x0c260220,
    0x00340905, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x00000000,
    0xfb080a24, 0x000c1c44, 0x00040061, 0x26050220,
    0x00463205, 0x00000000, 0x00040061, 0x28050220,
    0x00463a05, 0x00000000, 0x00040061, 0x2a050220,
    0x00464205, 0x00000000, 0xa00b3540, 0x03004803,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x270d1970, 0x48000b03, 0x00033261, 0x11060220,
    0x00340b05, 0x00000000, 0x80103201, 0x00000000,
    0x00000000, 0x00000000, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00131661, 0x13060220,
    0x00340c05, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa00f1b40, 0x4a020d02,
    0x00031961, 0x11260220, 0x00340f05, 0x00000000,
    0x00131a61, 0x13260220, 0x00341005, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xfb081124, 0x000c2444,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_leaf_create_HW_instance_nodes = {
   .prog_data = {
      .base.nr_params = 20,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 3,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 4656,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_leaf_create_HW_instance_nodes_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_leaf_create_HW_instance_nodes_printfs,
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
   .args = gfx125_bvh_build_leaf_create_HW_instance_nodes_args,
   .code = gfx125_bvh_build_leaf_create_HW_instance_nodes_code,
};
const char *gfx125_bvh_build_leaf_create_HW_instance_nodes_sha1 = "3f67a9fa4fe78297b7a32cf16ee2bfa4b660335f";

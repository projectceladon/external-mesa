#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_leaf_create_HW_instance_nodes_pointers_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_leaf_create_HW_instance_nodes_pointers_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_leaf_create_HW_instance_nodes_pointers_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
   { 24, 8 },
   { 32, 8 },
   { 40, 4 },
   { 44, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g39<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g18<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g39UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
add(1)          g40<1>UD        g39<0,1,0>UD    0x00000040UD    { align1 WE_all 1N $0.src compacted };
mov(8)          g95<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g91<1>D         g18<8,8,1>D     0x00000004UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g3UD            g40UD           nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
add(8)          g95.8<1>UW      g95<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g93<1>UD        g95<8,8,1>UW                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g97<1>D         g2<0,1,0>D      36D             { align1 1H compacted };
cmp.l.f0.0(16)  g99<1>UD        g97<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g103<2>UD       g97<4,4,1>UD                    { align1 1Q };
mov(8)          g105<2>UD       g98<4,4,1>UD                    { align1 2Q };
add(16)         g96<1>D         g91<1,1,0>D     g93<1,1,0>D     { align1 1H I@5 compacted };
add(16)         g101<1>D        -g99<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@4 compacted };
mov(8)          g103.1<2>UD     g101<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g105.1<2>UD     g102<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g107UD          g103UD          nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
cmp.l.f0.0(16)  null<1>UD       g96<8,8,1>UD    g107<8,8,1>UD   { align1 1H @4 $2.dst };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
cmp.z.f0.0(16)  null<1>D        g96<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL1              { align1 1H };
add(16)         g109<1>D        g2.6<0,1,0>D    36D             { align1 1H compacted };
cmp.l.f0.0(16)  g111<1>UD       g109<1,1,0>UD   g2.6<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g115<2>UD       g109<4,4,1>UD                   { align1 1Q };
mov(8)          g117<2>UD       g110<4,4,1>UD                   { align1 2Q };
add(16)         g113<1>D        -g111<1,1,0>D   g2.7<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g115.1<2>UD     g113<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g117.1<2>UD     g114<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g119UD          g115UD          nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
add3(16)        g19<1>D         g107<8,8,1>D    g107<8,8,1>D    g119<1,1,1>D { align1 1H $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g115UD          g19UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mul(16)         g125<1>D        g96<8,8,1>D     g3.4<0,1,0>UW   { align1 1H };
mul(16)         g38<1>D         g96<8,8,1>D     g3.5<0,1,0>UW   { align1 1H };
add(16)         g32<1>D         g2.6<0,1,0>D    16D             { align1 1H compacted };
shl(16)         g34<1>D         g96<8,8,1>D     0x00000007UD    { align1 1H };
shr(16)         g36<1>UD        g96<1,1,0>UD    0x00000019UD    { align1 1H compacted };
add(16)         g125.1<2>UW     g125.1<16,8,2>UW g38<16,8,2>UW  { align1 1H I@4 };
mov(8)          g16<2>UD        g32<4,4,1>UD                    { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $4.src };
mov(8)          g18<2>UD        g33<4,4,1>UD                    { align1 2Q I@5 };
add(16)         g4<1>D          g125<1,1,0>D    g3.3<0,1,0>D    { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g6<1>UD         g4<1,1,0>UD     g125<1,1,0>UD   { align1 1H I@1 compacted };
add(16)         g8<1>D          g2.2<0,1,0>D    g4<1,1,0>D      { align1 1H compacted };
cmp.l.f0.0(16)  g10<1>UD        g8<1,1,0>UD     g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g24<2>UD        g8<4,4,1>UD                     { align1 1Q };
mov(8)          g26<2>UD        g9<4,4,1>UD                     { align1 2Q };
add3(16)        g38<1>D         g2.3<0,1,0>D    -g6<8,8,1>D     -g10<1,1,1>D { align1 1H I@3 };
mov(8)          g24.1<2>UD      g38<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g26.1<2>UD      g39<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g39UD           g24UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
shl(16)         g41<1>D         g39<8,8,1>D     0x00000005UD    { align1 1H $5.dst };
shr(16)         g43<1>UD        g39<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
add(16)         g45<1>D         g2.4<0,1,0>D    g41<1,1,0>D     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g47<1>UD        g45<1,1,0>UD    g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g28<2>UD        g45<4,4,1>UD                    { align1 1Q };
mov(8)          g30<2>UD        g46<4,4,1>UD                    { align1 2Q };
add(16)         g51<1>D         g45<1,1,0>D     16D             { align1 1H compacted };
add3(16)        g49<1>D         g2.5<0,1,0>D    g43<8,8,1>D     -g47<1,1,1>D { align1 1H I@4 };
cmp.l.f0.0(16)  g53<1>UD        g51<1,1,0>UD    g45<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g20<2>UD        g51<4,4,1>UD                    { align1 1Q $4.src };
mov(8)          g22<2>UD        g52<4,4,1>UD                    { align1 2Q };
mov(8)          g28.1<2>UD      g49<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g30.1<2>UD      g50<4,4,1>UD                    { align1 2Q I@5 };
add(16)         g55<1>D         -g53<1,1,0>D    g49<1,1,0>D     { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g113UD          g28UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
mov(8)          g20.1<2>UD      g55<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g22.1<2>UD      g56<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g101UD          g20UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
and(16)         g10<1>UD        g119<8,8,1>UD   0x00ffffffUD    { align1 1H $6.dst };
mov(16)         g86<1>UD        g119.3<32,8,4>UB                { align1 1H };
shl(16)         g56<1>D         g10<8,8,1>D     0x00000003UD    { align1 1H I@2 };
shr(16)         g58<1>UD        g10<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
and(16)         g80<1>UD        g107<8,8,1>UD   0x7fffffffUD    { align1 1H $7.dst };
add(16)         g60<1>D         g3<0,1,0>D      g56<1,1,0>D     { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g62<1>UD        g60<1,1,0>UD    g3<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g121<2>UD       g60<4,4,1>UD                    { align1 1Q };
mov(8)          g123<2>UD       g61<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g66<1>UD        g32<1,1,0>UD    g2.6<0,1,0>UD   { align1 1H compacted };
add3(16)        g64<1>D         g3.1<0,1,0>D    g58<8,8,1>D     -g62<1,1,1>D { align1 1H I@4 };
add(16)         g72<1>D         -g66<1,1,0>D    g2.7<0,1,0>D    { align1 1H I@2 compacted };
mov(8)          g121.1<2>UD     g64<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g123.1<2>UD     g65<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g16.1<2>UD      g72<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g18.1<2>UD      g73<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g72UD           g121UD          nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g82UD           g16UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g16<1>D         g72<1,1,0>D     48D             { align1 1H $8.dst compacted };
mov(8)          g12<2>UD        g72<4,4,1>UD                    { align1 1Q };
mov(8)          g14<2>UD        g73<4,4,1>UD                    { align1 2Q };
add(16)         g115<1>D        g72<1,1,0>D     16D             { align1 1H $6.dst compacted };
add(16)         g120<1>D        g72<1,1,0>D     32D             { align1 1H $8.src compacted };
add(16)         g125<1>D        g72<1,1,0>D     56D             { align1 1H compacted };
shl(16)         g84<1>D         g82<8,8,1>D     0x00000006UD    { align1 1H $9.dst };
shr(16)         g101<1>UD       g82<1,1,0>UD    0x0000001aUD    { align1 1H $7.dst compacted };
mov(8)          g97<2>UD        g16<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g99<2>UD        g17<4,4,1>UD                    { align1 2Q I@7 };
mov(8)          g12.1<2>UD      g74<4,4,1>UD                    { align1 1Q @7 $8.dst };
mov(8)          g14.1<2>UD      g75<4,4,1>UD                    { align1 2Q @7 $8.dst };
mov(8)          g109<2>UD       g115<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g111<2>UD       g116<4,4,1>UD                   { align1 2Q I@7 };
mov(8)          g89<2>UD        g120<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g91<2>UD        g121<4,4,1>UD                   { align1 2Q };
mov(8)          g93<2>UD        g125<4,4,1>UD                   { align1 1Q };
mov(8)          g95<2>UD        g126<4,4,1>UD                   { align1 2Q };
add(16)         g103<1>D        g2.6<0,1,0>D    g84<1,1,0>D     { align1 1H $7.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
send(16)        g44UD           g12UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
cmp.l.f0.0(16)  g105<1>UD       g103<1,1,0>UD   g2.6<0,1,0>UD   { align1 1H @1 $7.dst compacted };
add(16)         g82<1>D         g103<1,1,0>D    g34<1,1,0>D     { align1 1H compacted };
add3(16)        g107<1>D        g2.7<0,1,0>D    g101<8,8,1>D    -g105<1,1,1>D { align1 1H I@2 };
cmp.l.f0.0(16)  g113<1>UD       g82<1,1,0>UD    g103<1,1,0>UD   { align1 1H @2 $6.dst compacted };
mov(8)          g68<2>UD        g82<4,4,1>UD                    { align1 1Q };
mov(8)          g70<2>UD        g83<4,4,1>UD                    { align1 2Q };
add(16)         g14<1>D         g82<1,1,0>D     64D             { align1 1H $10.src compacted };
cmp.l.f0.0(16)  g117<1>UD       g115<1,1,0>UD   g72<1,1,0>UD    { align1 1H $6.dst compacted };
cmp.l.f0.0(16)  g122<1>UD       g120<1,1,0>UD   g72<1,1,0>UD    { align1 1H $8.src compacted };
add3(16)        g84<1>D         g107<8,8,1>D    g36<8,8,1>D     -g113<1,1,1>D { align1 1H I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cmp.l.f0.0(16)  g1<1>UD         g125<1,1,0>UD   g72<1,1,0>UD    { align1 1H compacted };
mov(8)          g76<2>UD        g14<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g78<2>UD        g15<4,4,1>UD                    { align1 2Q I@6 };
cmp.l.f0.0(16)  g18<1>UD        g16<1,1,0>UD    g72<1,1,0>UD    { align1 1H $9.src compacted };
add(16)         g119<1>D        -g117<1,1,0>D   g74<1,1,0>D     { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g124<1>D        -g122<1,1,0>D   g74<1,1,0>D     { align1 1H I@7 compacted };
cmp.l.f0.0(16)  g16<1>UD        g14<1,1,0>UD    g82<1,1,0>UD    { align1 1H compacted };
mov(8)          g68.1<2>UD      g84<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g70.1<2>UD      g85<4,4,1>UD                    { align1 2Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g12<1>D         -g1<1,1,0>D     g74<1,1,0>D     { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g20<1>D         -g18<1,1,0>D    g74<1,1,0>D     { align1 1H I@7 compacted };
mov(8)          g109.1<2>UD     g119<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g111.1<2>UD     g120<4,4,1>UD                   { align1 2Q I@7 };
mov(8)          g89.1<2>UD      g124<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g91.1<2>UD      g125<4,4,1>UD                   { align1 2Q I@7 };
add(16)         g18<1>D         -g16<1,1,0>D    g84<1,1,0>D     { align1 1H I@7 compacted };
mov(8)          g93.1<2>UD      g12<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g95.1<2>UD      g13<4,4,1>UD                    { align1 2Q I@7 };
mov(8)          g97.1<2>UD      g20<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g99.1<2>UD      g21<4,4,1>UD                    { align1 2Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
send(16)        g52UD           g109UD          nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
send(16)        g60UD           g89UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $12 };
mov(8)          g76.1<2>UD      g18<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g78.1<2>UD      g19<4,4,1>UD                    { align1 2Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g4UD            g93UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g21UD           g97UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mul(16)         g27<1>F         -g54<1,1,0>F    g48<1,1,0>F     { align1 1H $11.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
mul(16)         g101<1>F        -g56<1,1,0>F    g44<1,1,0>F     { align1 1H $11.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
mul(16)         g110<1>F        -g52<1,1,0>F    g46<1,1,0>F     { align1 1H $11.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mul(16)         g93<1>F         -g64<1,1,0>F    g52<1,1,0>F     { align1 1H $12.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mul(16)         g95<1>F         -g48<1,1,0>F    g60<1,1,0>F     { align1 1H $12.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mul(16)         g23<1>F         -g62<1,1,0>F    g56<1,1,0>F     { align1 1H $12.dst compacted };
mul(16)         g25<1>F         -g46<1,1,0>F    g64<1,1,0>F     { align1 1H $5.src compacted };
mul(16)         g106<1>F        -g60<1,1,0>F    g54<1,1,0>F     { align1 1H compacted };
mul(16)         g108<1>F        -g44<1,1,0>F    g62<1,1,0>F     { align1 1H $11.src compacted };
and(16)         g8<1>UD         g21<8,8,1>UD    0x00ffffffUD    { align1 1H $14.dst };
mad(16)         g39<1>F         g27<8,8,1>F     g56<8,8,1>F     g46<1,1,1>F { align1 1H F@7 };
mad(16)         g37<1>F         g101<8,8,1>F    g52<8,8,1>F     g48<1,1,1>F { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mad(16)         g88<1>F         g110<8,8,1>F    g54<8,8,1>F     g44<1,1,1>F { align1 1H F@7 };
mad(16)         g104<1>F        g95<8,8,1>F     g44<8,8,1>F     g64<1,1,1>F { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mad(16)         g30<1>F         g25<8,8,1>F     g48<8,8,1>F     g62<1,1,1>F { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mad(16)         g28<1>F         g23<8,8,1>F     g64<8,8,1>F     g54<1,1,1>F { align1 1H F@7 };
mad(16)         g113<1>F        g108<8,8,1>F    g46<8,8,1>F     g60<1,1,1>F { align1 1H F@7 };
mad(16)         g102<1>F        g93<8,8,1>F     g60<8,8,1>F     g56<1,1,1>F { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mad(16)         g111<1>F        g106<8,8,1>F    g62<8,8,1>F     g52<1,1,1>F { align1 1H F@7 };
mul(16)         g41<1>F         g60<1,1,0>F     g39<1,1,0>F     { align1 1H F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mad(16)         g90<1>F         g41<8,8,1>F     g30<8,8,1>F     g52<1,1,1>F { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mad(16)         g92<1>F         g90<8,8,1>F     g28<8,8,1>F     g44<1,1,1>F { align1 1H F@1 };
math inv(16)    g115<1>F        g92<8,8,1>F     null<8,8,1>F    { align1 1H @1 $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
mul(16)         g20<1>F         g28<1,1,0>F     g115<1,1,0>F    { align1 1H I@1 compacted };
mul(16)         g22<1>F         g102<1,1,0>F    g115<1,1,0>F    { align1 1H A@1 compacted };
mul(16)         g24<1>F         g111<1,1,0>F    g115<1,1,0>F    { align1 1H F@6 compacted };
mul(16)         g26<1>F         g30<1,1,0>F     g115<1,1,0>F    { align1 1H compacted };
mul(16)         g32<1>F         g39<1,1,0>F     g115<1,1,0>F    { align1 1H compacted };
mul(16)         g34<1>F         g37<1,1,0>F     g115<1,1,0>F    { align1 1H compacted };
mul(16)         g28<1>F         g104<1,1,0>F    g115<1,1,0>F    { align1 1H compacted };
mul(16)         g30<1>F         g113<1,1,0>F    g115<1,1,0>F    { align1 1H compacted };
mul(16)         g36<1>F         g88<1,1,0>F     g115<1,1,0>F    { align1 1H compacted };
mul(16)         g116<1>F        -g26<1,1,0>F    g58<1,1,0>F     { align1 1H @6 $11.dst compacted };
mul(16)         g118<1>F        -g28<1,1,0>F    g58<1,1,0>F     { align1 1H F@4 compacted };
mul(16)         g120<1>F        -g30<1,1,0>F    g58<1,1,0>F     { align1 1H F@4 compacted };
mad(16)         g122<1>F        g116<8,8,1>F    g50<8,8,1>F     -g20<1,1,1>F { align1 1H @3 $10.dst };
mad(16)         g124<1>F        g118<8,8,1>F    g50<8,8,1>F     -g22<1,1,1>F { align1 1H A@3 };
mad(16)         g126<1>F        g120<8,8,1>F    g50<8,8,1>F     -g24<1,1,1>F { align1 1H F@3 };
mad(16)         g14<1>F         g122<8,8,1>F    g66<8,8,1>F     -g32<1,1,1>F { align1 1H @3 $12.dst };
mad(16)         g16<1>F         g124<8,8,1>F    g66<8,8,1>F     -g34<1,1,1>F { align1 1H A@3 };
mad(16)         g18<1>F         g126<8,8,1>F    g66<8,8,1>F     -g36<1,1,1>F { align1 1H A@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g76UD           g4UD            0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $0 };
mov(16)         g1<1>UD         g44<8,8,1>UD                    { align1 1H };
mov(16)         g3<1>UD         g52<8,8,1>UD                    { align1 1H $0.src };
mov(16)         g5<1>UD         g60<8,8,1>UD                    { align1 1H $0.src };
mov(16)         g7<1>UD         g46<8,8,1>UD                    { align1 1H $0.src };
add(16)         g88<1>D         g82<1,1,0>D     80D             { align1 1H F@7 compacted };
cmp.l.f0.0(16)  g90<1>UD        g88<1,1,0>UD    g82<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g76<2>UD        g88<4,4,1>UD                    { align1 1Q $0.src };
mov(8)          g78<2>UD        g89<4,4,1>UD                    { align1 2Q $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g92<1>D         -g90<1,1,0>D    g84<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g76.1<2>UD      g92<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g78.1<2>UD      g93<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g76UD           g1UD            0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $1 };
mov(16)         g1<1>UD         g54<8,8,1>UD                    { align1 1H $1.src };
mov(16)         g3<1>UD         g62<8,8,1>UD                    { align1 1H $1.src };
mov(16)         g5<1>UD         g48<8,8,1>UD                    { align1 1H $1.src };
mov(16)         g7<1>UD         g56<8,8,1>UD                    { align1 1H $1.src };
add(16)         g93<1>D         g82<1,1,0>D     96D             { align1 1H compacted };
cmp.l.f0.0(16)  g95<1>UD        g93<1,1,0>UD    g82<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g88<2>UD        g93<4,4,1>UD                    { align1 1Q };
mov(8)          g90<2>UD        g94<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(16)         g97<1>D         -g95<1,1,0>D    g84<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g88.1<2>UD      g97<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g90.1<2>UD      g98<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g88UD           g1UD            0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $2 };
mov(16)         g12<1>UD        g64<8,8,1>UD                    { align1 1H };
add(16)         g98<1>D         g82<1,1,0>D     112D            { align1 1H $14.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
cmp.l.f0.0(16)  g100<1>UD       g98<1,1,0>UD    g82<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g89<2>UD        g98<4,4,1>UD                    { align1 1Q $2.src };
mov(8)          g91<2>UD        g99<4,4,1>UD                    { align1 2Q $2.src };
add(16)         g102<1>D        -g100<1,1,0>D   g84<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g89.1<2>UD      g102<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g91.1<2>UD      g103<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g89UD           g12UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $3 };
add(16)         g103<1>D        g72<1,1,0>D     52D             { align1 1H compacted };
shl(16)         g110<1>D        g86<8,8,1>D     0x00000018UD    { align1 1H };
cmp.l.f0.0(16)  g105<1>UD       g103<1,1,0>UD   g72<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g90<2>UD        g103<4,4,1>UD                   { align1 1Q $3.src };
mov(8)          g92<2>UD        g104<4,4,1>UD                   { align1 2Q $3.src };
add(16)         g107<1>D        -g105<1,1,0>D   g74<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g90.1<2>UD      g107<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g92.1<2>UD      g108<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g9UD            g90UD           nullUD          0x08602580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V3, L1STATE_L3MOCS dst_len = 6, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
and(16)         g108<1>UD       g9<8,8,1>UD     0x00ffffffUD    { align1 1H $4.dst };
add(16)         g112<1>D        g11<1,1,0>D     g80<1,1,0>D     { align1 1H $4.dst compacted };
mov(16)         g119<1>UD       g9.3<32,8,4>UB                  { align1 1H F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
or(16)          g1<1>UD         g108<1,1,0>UD   g110<1,1,0>UD   { align1 1H I@3 compacted };
or(16)          g3<1>UD         g108<8,8,1>UD   0x20000000UD    { align1 1H $2.src };
cmp.l.f0.0(16)  g114<1>UD       g112<1,1,0>UD   g11<1,1,0>UD    { align1 1H A@4 compacted };
shl(16)         g122<1>D        g119<8,8,1>D    0x00000010UD    { align1 1H A@3 };
cmp.z.f0.0(16)  null<1>D        g80<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
add(16)         g116<1>D        -g114<1,1,0>D   g13<1,1,0>D     { align1 1H A@3 compacted };
(-f0.0) sel(16) g5<1>UD         g112<8,8,1>UD   0x00000000UD    { align1 1H $2.src };
(-f0.0) sel(16) g118<1>UD       g116<8,8,1>UD   0x00000000UD    { align1 1H A@2 };
mov(16)         g120<1>UD       g118<16,8,2>UW                  { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
or(16)          g7<1>UD         g120<1,1,0>UD   g122<1,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g68UD           g1UD            0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $5 };
add(16)         g123<1>D        g82<1,1,0>D     16D             { align1 1H F@2 compacted };
cmp.l.f0.0(16)  g125<1>UD       g123<1,1,0>UD   g82<1,1,0>UD    { align1 1H A@1 compacted };
mov(8)          g3<2>UD         g123<4,4,1>UD                   { align1 1Q $5.src };
mov(8)          g5<2>UD         g124<4,4,1>UD                   { align1 2Q $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g1<1>D          -g125<1,1,0>D   g84<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g3.1<2>UD       g1<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g5.1<2>UD       g2<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g3UD            g20UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $1 };
add(16)         g4<1>D          g82<1,1,0>D     32D             { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g6<1>UD         g4<1,1,0>UD     g82<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g10<2>UD        g4<4,4,1>UD                     { align1 1Q };
mov(8)          g12<2>UD        g5<4,4,1>UD                     { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g8<1>D          -g6<1,1,0>D     g84<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g10.1<2>UD      g8<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g12.1<2>UD      g9<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g10UD           g28UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $6 };
mov(16)         g38<1>UD        g50<8,8,1>UD                    { align1 1H };
mov(16)         g40<1>UD        g58<8,8,1>UD                    { align1 1H };
mov(16)         g42<1>UD        g66<8,8,1>UD                    { align1 1H };
add(16)         g11<1>D         g82<1,1,0>D     48D             { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g13<1>UD        g11<1,1,0>UD    g82<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g17<2>UD        g11<4,4,1>UD                    { align1 1Q $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g19<2>UD        g12<4,4,1>UD                    { align1 2Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g15<1>D         -g13<1,1,0>D    g84<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g17.1<2>UD      g15<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g19.1<2>UD      g16<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g17UD           g36UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $1 };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_leaf_create_HW_instance_nodes_pointers_code[] = {
    0x80000065, 0x27058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x12050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00270c, 0x00340000,
    0xe2283040, 0x04012703, 0x80030061, 0x5f054410,
    0x00000000, 0x76543210, 0x00041b69, 0x5b058660,
    0x02461205, 0x00000004, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa00280c, 0x00300000, 0x645f1a40, 0x00805f95,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x5d050120, 0x00465f05, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa0610040, 0x02410203, 0x27631970, 0x02106103,
    0x00030061, 0x67060220, 0x00346105, 0x00000000,
    0x00130061, 0x69060220, 0x00346205, 0x00000000,
    0xa0601d40, 0x5d005b02, 0xa0651c40, 0x02126312,
    0x00031961, 0x67260220, 0x00346505, 0x00000000,
    0x00131a61, 0x69260220, 0x00346605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x6b140000, 0xfb006724, 0x00000000,
    0x0004c270, 0x00010220, 0x52466005, 0x00466b05,
    0x01040022, 0x0001c060, 0x00001110, 0x00001110,
    0x00040070, 0x00018660, 0x16466005, 0x00000000,
    0x01040022, 0x0001c060, 0x000000c8, 0x000000c8,
    0xa06d0040, 0x0241026b, 0x276f1970, 0x02106d4b,
    0x00030061, 0x73060220, 0x00346d05, 0x00000000,
    0x00130061, 0x75060220, 0x00346e05, 0x00000000,
    0xa0711b40, 0x02126f52, 0x00031961, 0x73260220,
    0x00347105, 0x00000000, 0x00131a61, 0x75260220,
    0x00347205, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x77140000,
    0xfb007324, 0x00000000, 0x00042352, 0x13040e68,
    0x0e0e6b05, 0x77056b05, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xfb087324, 0x00001314, 0x00040025, 0x00004600,
    0x00000000, 0x00001028, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x00040041, 0x7d050660,
    0x01466005, 0x00000344, 0x00040041, 0x26050660,
    0x01466005, 0x00000354, 0xa0200040, 0x0101026b,
    0x00040069, 0x22058660, 0x02466005, 0x00000007,
    0xe0240068, 0x01906003, 0x00041c40, 0x7d160110,
    0x01567d16, 0x00562606, 0x00031c61, 0x10060220,
    0x00342005, 0x00000000, 0x80103401, 0x00000000,
    0x00000000, 0x00000000, 0x00131d61, 0x12060220,
    0x00342105, 0x00000000, 0xa0041b40, 0x03107d1a,
    0x27061970, 0x7d000403, 0xa0080040, 0x04010242,
    0x270a1970, 0x0210082b, 0x00030061, 0x18060220,
    0x00340805, 0x00000000, 0x00130061, 0x1a060220,
    0x00340905, 0x00000000, 0x00041b52, 0x26040660,
    0x0eae0264, 0x0a050605, 0x00031961, 0x18260220,
    0x00342605, 0x00000000, 0x00131a61, 0x1a260220,
    0x00342705, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x27140000,
    0xfb001824, 0x00000000, 0x00042569, 0x29058660,
    0x02462705, 0x00000005, 0xe02b0068, 0x01b02703,
    0xa02d1a40, 0x2901025a, 0x272f1970, 0x02102d0b,
    0x00030061, 0x1c060220, 0x00342d05, 0x00000000,
    0x00130061, 0x1e060220, 0x00342e05, 0x00000000,
    0xa0330040, 0x01002d03, 0x00041c52, 0x31040660,
    0x0e2e02a4, 0x2f052b05, 0x27351a70, 0x2d003303,
    0x00033461, 0x14060220, 0x00343305, 0x00000000,
    0x00130061, 0x16060220, 0x00343405, 0x00000000,
    0x00031c61, 0x1c260220, 0x00343105, 0x00000000,
    0x00131d61, 0x1e260220, 0x00343205, 0x00000000,
    0xa0371d40, 0x31023502, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x71440000,
    0xfb001c24, 0x000c0000, 0x00031961, 0x14260220,
    0x00343705, 0x00000000, 0x00131a61, 0x16260220,
    0x00343805, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x65440000,
    0xfb001424, 0x000c0000, 0x00042665, 0x0a058220,
    0x02467705, 0x00ffffff, 0x00040061, 0x56050020,
    0x0066771f, 0x00000000, 0x00041a69, 0x38058660,
    0x02460a05, 0x00000003, 0xe03a0068, 0x01d00a03,
    0x00042765, 0x50058220, 0x02466b05, 0x7fffffff,
    0xa03c1b40, 0x38010302, 0x273e1970, 0x03103c03,
    0x00030061, 0x79060220, 0x00343c05, 0x00000000,
    0x00130061, 0x7b060220, 0x00343d05, 0x00000000,
    0x27420070, 0x0210204b, 0x00041c52, 0x40040660,
    0x0e2e0324, 0x3e053a05, 0xa0481a40, 0x02124252,
    0x00031a61, 0x79260220, 0x00344005, 0x00000000,
    0x00131b61, 0x7b260220, 0x00344105, 0x00000000,
    0x00031b61, 0x10260220, 0x00344805, 0x00000000,
    0x00131c61, 0x12260220, 0x00344905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x48240000, 0xfb007924, 0x00040000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x52140000, 0xfb001024, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xa0102840, 0x03004803, 0x00030061, 0x0c060220,
    0x00344805, 0x00000000, 0x00130061, 0x0e060220,
    0x00344905, 0x00000000, 0xa0732640, 0x01004803,
    0xa0783840, 0x02004803, 0xa07d0040, 0x03804803,
    0x00042969, 0x54058660, 0x02465205, 0x00000006,
    0xe0652768, 0x01a05203, 0x00031f61, 0x61060220,
    0x00341005, 0x00000000, 0x00131f61, 0x63060220,
    0x00341105, 0x00000000, 0x0003f861, 0x0c260220,
    0x00344a05, 0x00000000, 0x0013f861, 0x0e260220,
    0x00344b05, 0x00000000, 0x00031f61, 0x6d060220,
    0x00347305, 0x00000000, 0x00131f61, 0x6f060220,
    0x00347405, 0x00000000, 0x00031f61, 0x59060220,
    0x00347805, 0x00000000, 0x00130061, 0x5b060220,
    0x00347905, 0x00000000, 0x00030061, 0x5d060220,
    0x00347d05, 0x00000000, 0x00130061, 0x5f060220,
    0x00347e05, 0x00000000, 0xa0672740, 0x5401026a,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00044a31, 0x2c440000, 0xfb000c24, 0x000c0000,
    0x27699770, 0x0210674b, 0xa0520040, 0x22006702,
    0x00041a52, 0x6b040660, 0x0e2e02e4, 0x69056505,
    0x2771a670, 0x67005203, 0x00030061, 0x44060220,
    0x00345205, 0x00000000, 0x00130061, 0x46060220,
    0x00345305, 0x00000000, 0xa00e3a40, 0x04005203,
    0x27752670, 0x48007303, 0x277a3870, 0x48007803,
    0x00041e52, 0x54040e68, 0x0e2e6b05, 0x71052405,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x27010070, 0x48007d03, 0x00031d61, 0x4c060220,
    0x00340e05, 0x00000000, 0x00131e61, 0x4e060220,
    0x00340f05, 0x00000000, 0x27123970, 0x48001003,
    0xa0771f40, 0x4a027502, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xa07c1f40, 0x4a027a02,
    0x27100070, 0x52000e03, 0x00031f61, 0x44260220,
    0x00345405, 0x00000000, 0x00131f61, 0x46260220,
    0x00345505, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0xa00c1f40, 0x4a020102,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xa0141f40, 0x4a021202, 0x00031f61, 0x6d260220,
    0x00347705, 0x00000000, 0x00131f61, 0x6f260220,
    0x00347805, 0x00000000, 0x00031f61, 0x59260220,
    0x00347c05, 0x00000000, 0x00131f61, 0x5b260220,
    0x00347d05, 0x00000000, 0xa0121f40, 0x54021002,
    0x00031f61, 0x5d260220, 0x00340c05, 0x00000000,
    0x00131f61, 0x5f260220, 0x00340d05, 0x00000000,
    0x00031f61, 0x61260220, 0x00341405, 0x00000000,
    0x00131f61, 0x63260220, 0x00341505, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x34440000, 0xfb006d24, 0x000c0000,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x3c440000, 0xfb005924, 0x000c0000,
    0x00031d61, 0x4c260220, 0x00341205, 0x00000000,
    0x00131e61, 0x4e260220, 0x00341305, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x00044d31, 0x04240000, 0xfb005d24, 0x00040000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x15140000, 0xfb006124, 0x00000000,
    0x80002a01, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x201b2b41, 0x30023600, 0x80002a01, 0x00000000,
    0x00000000, 0x00000000, 0x20652b41, 0x2c023800,
    0x80002a01, 0x00000000, 0x00000000, 0x00000000,
    0x206e2b41, 0x2e023400, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x205d2c41, 0x34024000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x205f2c41, 0x3c023000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x20172c41, 0x38023e00,
    0x20193541, 0x40022e00, 0x206a0041, 0x36023c00,
    0x206c3b41, 0x3e022c00, 0x00042e65, 0x08058220,
    0x02461505, 0x00ffffff, 0x0004175b, 0x27040aa8,
    0x0a0a1b05, 0x2e053805, 0x0004175b, 0x25040aa8,
    0x0a0a6505, 0x30053405, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x0004175b, 0x58040aa8,
    0x0a0a6e05, 0x2c053605, 0x0004175b, 0x68040aa8,
    0x0a0a5f05, 0x40052c05, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x0004175b, 0x1e040aa8,
    0x0a0a1905, 0x3e053005, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x0004175b, 0x1c040aa8,
    0x0a0a1705, 0x36054005, 0x0004175b, 0x71040aa8,
    0x0a0a6c05, 0x3c052e05, 0x0004005b, 0x66040aa8,
    0x0a0a5d05, 0x38053c05, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x0004175b, 0x6f040aa8,
    0x0a0a6a05, 0x34053e05, 0x20291741, 0x27003c00,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x0004115b, 0x5a040aa8, 0x0a0a2905, 0x34051e05,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x0004115b, 0x5c040aa8, 0x0a0a5a05, 0x2c051c05,
    0x00049f38, 0x73050aa0, 0x1a465c05, 0x00460001,
    0x80002f01, 0x00000000, 0x00000000, 0x00000000,
    0x20141941, 0x73001c00, 0x20160941, 0x73006600,
    0x20181641, 0x73006f00, 0x201a0041, 0x73001e00,
    0x20200041, 0x73002700, 0x20220041, 0x73002500,
    0x201c0041, 0x73006800, 0x201e0041, 0x73007100,
    0x20240041, 0x73005800, 0x2074eb41, 0x3a021a00,
    0x20761441, 0x3a021c00, 0x20781441, 0x3a021e00,
    0x0004ba5b, 0x7a040aa8, 0x0a2a7405, 0x14053205,
    0x00040b5b, 0x7c040aa8, 0x0a2a7605, 0x16053205,
    0x0004135b, 0x7e040aa8, 0x0a2a7805, 0x18053205,
    0x0004bc5b, 0x0e040aa8, 0x0a2a7a05, 0x20054205,
    0x00040b5b, 0x10040aa8, 0x0a2a7c05, 0x22054205,
    0x00040a5b, 0x12040aa8, 0x0a2a7e05, 0x24054205,
    0x80002d01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb084c24, 0x000c0444,
    0x00040061, 0x01050220, 0x00462c05, 0x00000000,
    0x00043061, 0x03050220, 0x00463405, 0x00000000,
    0x00043061, 0x05050220, 0x00463c05, 0x00000000,
    0x00043061, 0x07050220, 0x00462e05, 0x00000000,
    0xa0581740, 0x05005203, 0x275a1970, 0x52005803,
    0x00033061, 0x4c060220, 0x00345805, 0x00000000,
    0x00133061, 0x4e060220, 0x00345905, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0xa05c1b40, 0x54025a02, 0x00031961, 0x4c260220,
    0x00345c05, 0x00000000, 0x00131a61, 0x4e260220,
    0x00345d05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb084c24, 0x000c0144, 0x00043161, 0x01050220,
    0x00463605, 0x00000000, 0x00043161, 0x03050220,
    0x00463e05, 0x00000000, 0x00043161, 0x05050220,
    0x00463005, 0x00000000, 0x00043161, 0x07050220,
    0x00463805, 0x00000000, 0xa05d0040, 0x06005203,
    0x275f1970, 0x52005d03, 0x00030061, 0x58060220,
    0x00345d05, 0x00000000, 0x00130061, 0x5a060220,
    0x00345e05, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0xa0611b40, 0x54025f02,
    0x00031961, 0x58260220, 0x00346105, 0x00000000,
    0x00131a61, 0x5a260220, 0x00346205, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x00000000, 0xfb085824, 0x000c0144,
    0x00040061, 0x0c050220, 0x00464005, 0x00000000,
    0xa0623e40, 0x07005203, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x27641970, 0x52006203,
    0x00033261, 0x59060220, 0x00346205, 0x00000000,
    0x00133261, 0x5b060220, 0x00346305, 0x00000000,
    0xa0661b40, 0x54026402, 0x00031961, 0x59260220,
    0x00346605, 0x00000000, 0x00131a61, 0x5b260220,
    0x00346705, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xfb085924, 0x000c0c44, 0xa0670040, 0x03404803,
    0x00040069, 0x6e058660, 0x02465605, 0x00000018,
    0x27691a70, 0x48006703, 0x00033361, 0x5a060220,
    0x00346705, 0x00000000, 0x00133361, 0x5c060220,
    0x00346805, 0x00000000, 0xa06b1b40, 0x4a026902,
    0x00031961, 0x5a260220, 0x00346b05, 0x00000000,
    0x00131a61, 0x5c260220, 0x00346c05, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x09340000, 0xfb005a24, 0x00080000,
    0x00042465, 0x6c058220, 0x02460905, 0x00ffffff,
    0xa0702440, 0x50000b02, 0x00041461, 0x77050020,
    0x0066091f, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x20011b66, 0x6e006c03,
    0x00043266, 0x03058220, 0x02466c05, 0x20000000,
    0x27720c70, 0x0b007003, 0x00040b69, 0x7a058660,
    0x02467705, 0x00000010, 0x00040070, 0x00018660,
    0x16465005, 0x00000000, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0xa0740b40, 0x0d027202,
    0x11043262, 0x05058220, 0x02467005, 0x00000000,
    0x11040a62, 0x76058220, 0x02467405, 0x00000000,
    0x00040961, 0x78050120, 0x00567606, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x20071966, 0x7a007803, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x00000000,
    0xfb084424, 0x000c0144, 0xa07b1240, 0x01005203,
    0x277d0970, 0x52007b03, 0x00033561, 0x03060220,
    0x00347b05, 0x00000000, 0x00133561, 0x05060220,
    0x00347c05, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa0011b40, 0x54027d02,
    0x00031961, 0x03260220, 0x00340105, 0x00000000,
    0x00131a61, 0x05260220, 0x00340205, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb080324, 0x000c1444,
    0xa0043140, 0x02005203, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x27061970, 0x52000403,
    0x00030061, 0x0a060220, 0x00340405, 0x00000000,
    0x00130061, 0x0c060220, 0x00340505, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xa0081b40, 0x54020602, 0x00031961, 0x0a260220,
    0x00340805, 0x00000000, 0x00131a61, 0x0c260220,
    0x00340905, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xfb080a24, 0x000c1c44, 0x00040061, 0x26050220,
    0x00463205, 0x00000000, 0x00040061, 0x28050220,
    0x00463a05, 0x00000000, 0x00040061, 0x2a050220,
    0x00464205, 0x00000000, 0xa00b3640, 0x03005203,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x270d1970, 0x52000b03, 0x00033361, 0x11060220,
    0x00340b05, 0x00000000, 0x80103301, 0x00000000,
    0x00000000, 0x00000000, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00131661, 0x13060220,
    0x00340c05, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa00f1b40, 0x54020d02,
    0x00031961, 0x11260220, 0x00340f05, 0x00000000,
    0x00131a61, 0x13260220, 0x00341005, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb081124, 0x000c2444,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_leaf_create_HW_instance_nodes_pointers = {
   .prog_data = {
      .base.nr_params = 20,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 3,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 4752,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_leaf_create_HW_instance_nodes_pointers_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_leaf_create_HW_instance_nodes_pointers_printfs,
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
   .args = gfx125_bvh_build_leaf_create_HW_instance_nodes_pointers_args,
   .code = gfx125_bvh_build_leaf_create_HW_instance_nodes_pointers_code,
};
const char *gfx125_bvh_build_leaf_create_HW_instance_nodes_pointers_sha1 = "500fb8bf4c4ea5e9822b9f012c61df6af63ab1fb";

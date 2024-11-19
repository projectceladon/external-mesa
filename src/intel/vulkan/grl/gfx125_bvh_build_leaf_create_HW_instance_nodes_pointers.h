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

and(1)          g80<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g42<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g80UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
add(1)          g81<1>UD        g80<0,1,0>UD    0x00000040UD    { align1 WE_all 1N $0.src compacted };
mov(8)          g100<1>UW       0x76543210V                     { align1 WE_all 1Q };
shl(16)         g101<1>D        g42<8,8,1>D     0x00000004UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g3UD            g81UD           nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
add(8)          g100.8<1>UW     g100<1,1,0>UW   0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g103<1>D        g100<8,8,1>UW                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g106<1>D        g2<0,1,0>D      36D             { align1 1H compacted };
cmp.l.f0.0(16)  g108<1>UD       g106<1,1,0>UD   g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g44<2>UD        g106<4,4,1>UD                   { align1 1Q };
mov(8)          g46<2>UD        g107<4,4,1>UD                   { align1 2Q };
add(16)         g105<1>D        g101<1,1,0>D    g103<1,1,0>D    { align1 1H I@5 compacted };
add(16)         g110<1>D        -g108<1,1,0>D   g2.1<0,1,0>D    { align1 1H I@4 compacted };
mov(8)          g44.1<2>UD      g110<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g46.1<2>UD      g111<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g111UD          g44UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
cmp.l.f0.0(16)  null<1>UD       g105<8,8,1>UD   g111<8,8,1>UD   { align1 1H @4 $2.dst };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
cmp.z.f0.0(16)  null<1>D        g105<8,8,1>D    0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL1              { align1 1H };
add(16)         g113<1>D        g2.6<0,1,0>D    36D             { align1 1H compacted };
cmp.l.f0.0(16)  g115<1>UD       g113<1,1,0>UD   g2.6<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g45<2>UD        g113<4,4,1>UD                   { align1 1Q $2.src };
mov(8)          g47<2>UD        g114<4,4,1>UD                   { align1 2Q $2.src };
add(16)         g117<1>D        -g115<1,1,0>D   g2.7<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g45.1<2>UD      g117<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g47.1<2>UD      g118<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g118UD          g45UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
add3(16)        g49<1>D         g111<8,8,1>D    g111<8,8,1>D    g118<1,1,1>D { align1 1H $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g45UD           g49UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $2 };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mul(16)         g119<1>D        g105<8,8,1>D    g3.4<0,1,0>UW   { align1 1H };
mul(16)         g79<1>D         g105<8,8,1>D    g3.5<0,1,0>UW   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g81<1>D         g2.6<0,1,0>D    16D             { align1 1H compacted };
shl(16)         g83<1>D         g105<8,8,1>D    0x00000007UD    { align1 1H };
shr(16)         g87<1>UD        g105<1,1,0>UD   0x00000019UD    { align1 1H compacted };
add(16)         g119.1<2>UW     g119.1<16,8,2>UW g79<16,8,2>UW  { align1 1H I@4 };
mov(8)          g63<2>UD        g81<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g65<2>UD        g82<4,4,1>UD                    { align1 2Q I@5 };
add(16)         g121<1>D        g119<1,1,0>D    g3.3<0,1,0>D    { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g123<1>UD       g121<1,1,0>UD   g119<1,1,0>UD   { align1 1H I@1 compacted };
add(16)         g125<1>D        g2.2<0,1,0>D    g121<1,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g4<1>UD         g125<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g93<2>UD        g125<4,4,1>UD                   { align1 1Q };
mov(8)          g95<2>UD        g126<4,4,1>UD                   { align1 2Q };
add3(16)        g6<1>D          g2.3<0,1,0>D    -g123<8,8,1>D   -g4<1,1,1>D { align1 1H I@3 };
mov(8)          g93.1<2>UD      g6<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g95.1<2>UD      g7<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g7UD            g93UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
shl(16)         g9<1>D          g7<8,8,1>D      0x00000005UD    { align1 1H $4.dst };
shr(16)         g11<1>UD        g7<1,1,0>UD     0x0000001bUD    { align1 1H compacted };
add(16)         g13<1>D         g2.4<0,1,0>D    g9<1,1,0>D      { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g15<1>UD        g13<1,1,0>UD    g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g97<2>UD        g13<4,4,1>UD                    { align1 1Q };
mov(8)          g99<2>UD        g14<4,4,1>UD                    { align1 2Q };
add(16)         g71<1>D         g13<1,1,0>D     16D             { align1 1H compacted };
add3(16)        g17<1>D         g2.5<0,1,0>D    g11<8,8,1>D     -g15<1,1,1>D { align1 1H I@4 };
cmp.l.f0.0(16)  g73<1>UD        g71<1,1,0>UD    g13<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g23<2>UD        g71<4,4,1>UD                    { align1 1Q };
mov(8)          g25<2>UD        g72<4,4,1>UD                    { align1 2Q };
mov(8)          g97.1<2>UD      g17<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g99.1<2>UD      g18<4,4,1>UD                    { align1 2Q I@5 };
add(16)         g27<1>D         -g73<1,1,0>D    g17<1,1,0>D     { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g47UD           g97UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mov(8)          g23.1<2>UD      g27<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g25.1<2>UD      g28<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g4UD            g23UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
and(16)         g33<1>UD        g53<8,8,1>UD    0x00ffffffUD    { align1 1H $5.dst };
mov(16)         g85<1>UD        g53.3<32,8,4>UB                 { align1 1H };
shl(16)         g47<1>D         g33<8,8,1>D     0x00000003UD    { align1 1H @2 $5.dst };
shr(16)         g49<1>UD        g33<1,1,0>UD    0x0000001dUD    { align1 1H $5.dst compacted };
and(16)         g79<1>UD        g10<8,8,1>UD    0x7fffffffUD    { align1 1H $6.dst };
add(16)         g51<1>D         g3<0,1,0>D      g47<1,1,0>D     { align1 1H @3 $5.dst compacted };
cmp.l.f0.0(16)  g53<1>UD        g51<1,1,0>UD    g3<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g59<2>UD        g51<4,4,1>UD                    { align1 1Q };
mov(8)          g61<2>UD        g52<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g25<1>UD        g81<1,1,0>UD    g2.6<0,1,0>UD   { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add3(16)        g23<1>D         g3.1<0,1,0>D    g49<8,8,1>D     -g53<1,1,1>D { align1 1H I@4 };
add(16)         g81<1>D         -g25<1,1,0>D    g2.7<0,1,0>D    { align1 1H I@2 compacted };
mov(8)          g59.1<2>UD      g23<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g61.1<2>UD      g24<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g63.1<2>UD      g81<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g65.1<2>UD      g82<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g23UD           g59UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g91UD           g63UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
mov(8)          g55<2>UD        g23<4,4,1>UD                    { align1 1Q $7.dst };
mov(8)          g57<2>UD        g24<4,4,1>UD                    { align1 2Q $7.dst };
add(16)         g105<1>D        g23<1,1,0>D     16D             { align1 1H compacted };
add(16)         g110<1>D        g23<1,1,0>D     32D             { align1 1H compacted };
add(16)         g115<1>D        g23<1,1,0>D     56D             { align1 1H compacted };
add(16)         g89<1>D         g23<1,1,0>D     48D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
shl(16)         g93<1>D         g91<8,8,1>D     0x00000006UD    { align1 1H $8.dst };
shr(16)         g95<1>UD        g91<1,1,0>UD    0x0000001aUD    { align1 1H $4.src compacted };
mov(8)          g55.1<2>UD      g25<4,4,1>UD                    { align1 1Q @7 $7.dst };
mov(8)          g57.1<2>UD      g26<4,4,1>UD                    { align1 2Q @7 $7.dst };
mov(8)          g67<2>UD        g105<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g69<2>UD        g106<4,4,1>UD                   { align1 2Q I@7 };
mov(8)          g35<2>UD        g110<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g37<2>UD        g111<4,4,1>UD                   { align1 2Q I@7 };
mov(8)          g39<2>UD        g115<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g41<2>UD        g116<4,4,1>UD                   { align1 2Q };
mov(8)          g43<2>UD        g89<4,4,1>UD                    { align1 1Q $2.src };
mov(8)          g45<2>UD        g90<4,4,1>UD                    { align1 2Q $2.src };
add(16)         g97<1>D         g2.6<0,1,0>D    g93<1,1,0>D     { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
send(16)        g3UD            g55UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g99<1>UD        g97<1,1,0>UD    g2.6<0,1,0>UD   { align1 1H I@1 compacted };
add(16)         g81<1>D         g97<1,1,0>D     g83<1,1,0>D     { align1 1H compacted };
add3(16)        g101<1>D        g2.7<0,1,0>D    g95<8,8,1>D     -g99<1,1,1>D { align1 1H I@2 };
cmp.l.f0.0(16)  g103<1>UD       g81<1,1,0>UD    g97<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g19<2>UD        g81<4,4,1>UD                    { align1 1Q };
mov(8)          g21<2>UD        g82<4,4,1>UD                    { align1 2Q };
add(16)         g123<1>D        g81<1,1,0>D     64D             { align1 1H compacted };
cmp.l.f0.0(16)  g107<1>UD       g105<1,1,0>UD   g23<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  g112<1>UD       g110<1,1,0>UD   g23<1,1,0>UD    { align1 1H compacted };
add3(16)        g83<1>D         g101<8,8,1>D    g87<8,8,1>D     -g103<1,1,1>D { align1 1H I@6 };
cmp.l.f0.0(16)  g117<1>UD       g115<1,1,0>UD   g23<1,1,0>UD    { align1 1H compacted };
mov(8)          g75<2>UD        g123<4,4,1>UD                   { align1 1Q I@5 };
mov(8)          g77<2>UD        g124<4,4,1>UD                   { align1 2Q I@6 };
cmp.l.f0.0(16)  g121<1>UD       g89<1,1,0>UD    g23<1,1,0>UD    { align1 1H compacted };
add(16)         g109<1>D        -g107<1,1,0>D   g25<1,1,0>D     { align1 1H I@7 compacted };
add(16)         g114<1>D        -g112<1,1,0>D   g25<1,1,0>D     { align1 1H I@7 compacted };
cmp.l.f0.0(16)  g125<1>UD       g123<1,1,0>UD   g81<1,1,0>UD    { align1 1H compacted };
mov(8)          g19.1<2>UD      g83<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g21.1<2>UD      g84<4,4,1>UD                    { align1 2Q I@7 };
add(16)         g119<1>D        -g117<1,1,0>D   g25<1,1,0>D     { align1 1H I@7 compacted };
add(16)         g123<1>D        -g121<1,1,0>D   g25<1,1,0>D     { align1 1H I@7 compacted };
mov(8)          g67.1<2>UD      g109<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g69.1<2>UD      g110<4,4,1>UD                   { align1 2Q I@7 };
mov(8)          g35.1<2>UD      g114<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g37.1<2>UD      g115<4,4,1>UD                   { align1 2Q I@7 };
add(16)         g47<1>D         -g125<1,1,0>D   g83<1,1,0>D     { align1 1H I@7 compacted };
mov(8)          g39.1<2>UD      g119<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g41.1<2>UD      g120<4,4,1>UD                   { align1 2Q I@7 };
mov(8)          g43.1<2>UD      g123<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g45.1<2>UD      g124<4,4,1>UD                   { align1 2Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
send(16)        g11UD           g67UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
send(16)        g67UD           g35UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $11 };
mov(8)          g75.1<2>UD      g47<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g77.1<2>UD      g48<4,4,1>UD                    { align1 2Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g27UD           g39UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g124UD          g43UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mul(16)         g37<1>F         -g13<1,1,0>F    g7<1,1,0>F      { align1 1H $10.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
mul(16)         g96<1>F         -g15<1,1,0>F    g3<1,1,0>F      { align1 1H $10.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
mul(16)         g105<1>F        -g11<1,1,0>F    g5<1,1,0>F      { align1 1H $10.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
mul(16)         g126<1>F        -g69<1,1,0>F    g15<1,1,0>F     { align1 1H I@7 compacted };
mul(16)         g35<1>F         -g5<1,1,0>F     g71<1,1,0>F     { align1 1H $11.dst compacted };
mul(16)         g87<1>F         -g71<1,1,0>F    g11<1,1,0>F     { align1 1H compacted };
mul(16)         g94<1>F         -g7<1,1,0>F     g67<1,1,0>F     { align1 1H $11.dst compacted };
mul(16)         g101<1>F        -g67<1,1,0>F    g13<1,1,0>F     { align1 1H compacted };
mul(16)         g103<1>F        -g3<1,1,0>F     g69<1,1,0>F     { align1 1H compacted };
and(16)         g31<1>UD        g124<8,8,1>UD   0x00ffffffUD    { align1 1H $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mad(16)         g59<1>F         g37<8,8,1>F     g15<8,8,1>F     g5<1,1,1>F { align1 1H F@7 };
mad(16)         g90<1>F         g96<8,8,1>F     g11<8,8,1>F     g7<1,1,1>F { align1 1H F@7 };
mad(16)         g92<1>F         g105<8,8,1>F    g13<8,8,1>F     g3<1,1,1>F { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mad(16)         g40<1>F         g35<8,8,1>F     g7<8,8,1>F      g69<1,1,1>F { align1 1H F@7 };
mad(16)         g99<1>F         g94<8,8,1>F     g3<8,8,1>F      g71<1,1,1>F { align1 1H F@7 };
mad(16)         g38<1>F         g126<8,8,1>F    g71<8,8,1>F     g13<1,1,1>F { align1 1H $12.src };
mad(16)         g108<1>F        g103<8,8,1>F    g5<8,8,1>F      g67<1,1,1>F { align1 1H F@7 };
mad(16)         g97<1>F         g87<8,8,1>F     g67<8,8,1>F     g15<1,1,1>F { align1 1H };
mad(16)         g106<1>F        g101<8,8,1>F    g69<8,8,1>F     g11<1,1,1>F { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mul(16)         g61<1>F         g67<1,1,0>F     g59<1,1,0>F     { align1 1H F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mad(16)         g63<1>F         g61<8,8,1>F     g40<8,8,1>F     g11<1,1,1>F { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mad(16)         g65<1>F         g63<8,8,1>F     g38<8,8,1>F     g3<1,1,1>F { align1 1H F@1 };
math inv(16)    g110<1>F        g65<8,8,1>F     null<8,8,1>F    { align1 1H @1 $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mul(16)         g43<1>F         g38<1,1,0>F     g110<1,1,0>F    { align1 1H $14.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mul(16)         g45<1>F         g97<1,1,0>F     g110<1,1,0>F    { align1 1H F@6 compacted };
mul(16)         g47<1>F         g106<1,1,0>F    g110<1,1,0>F    { align1 1H A@2 compacted };
mul(16)         g49<1>F         g40<1,1,0>F     g110<1,1,0>F    { align1 1H compacted };
mul(16)         g51<1>F         g99<1,1,0>F     g110<1,1,0>F    { align1 1H compacted };
mul(16)         g53<1>F         g108<1,1,0>F    g110<1,1,0>F    { align1 1H compacted };
mul(16)         g55<1>F         g59<1,1,0>F     g110<1,1,0>F    { align1 1H $9.src compacted };
mul(16)         g57<1>F         g90<1,1,0>F     g110<1,1,0>F    { align1 1H $9.src compacted };
mul(16)         g59<1>F         g92<1,1,0>F     g110<1,1,0>F    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
mul(16)         g113<1>F        -g51<1,1,0>F    g17<1,1,0>F     { align1 1H A@5 compacted };
mul(16)         g111<1>F        -g49<1,1,0>F    g17<1,1,0>F     { align1 1H F@7 compacted };
mul(16)         g115<1>F        -g53<1,1,0>F    g17<1,1,0>F     { align1 1H A@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
mad(16)         g119<1>F        g113<8,8,1>F    g9<8,8,1>F      -g45<1,1,1>F { align1 1H A@3 };
mad(16)         g117<1>F        g111<8,8,1>F    g9<8,8,1>F      -g43<1,1,1>F { align1 1H F@3 };
mad(16)         g121<1>F        g115<8,8,1>F    g9<8,8,1>F      -g47<1,1,1>F { align1 1H F@3 };
mad(16)         g39<1>F         g119<8,8,1>F    g73<8,8,1>F     -g57<1,1,1>F { align1 1H @3 $11.dst };
mad(16)         g37<1>F         g117<8,8,1>F    g73<8,8,1>F     -g55<1,1,1>F { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mad(16)         g41<1>F         g121<8,8,1>F    g73<8,8,1>F     -g59<1,1,1>F { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g75UD           g27UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $15 };
mov(16)         g27<1>UD        g3<8,8,1>UD                     { align1 1H $15.src };
mov(16)         g29<1>UD        g11<8,8,1>UD                    { align1 1H $15.src };
mov(16)         g31<1>UD        g67<8,8,1>UD                    { align1 1H $15.src };
mov(16)         g33<1>UD        g5<8,8,1>UD                     { align1 1H $15.src };
add(16)         g87<1>D         g81<1,1,0>D     80D             { align1 1H compacted };
cmp.l.f0.0(16)  g89<1>UD        g87<1,1,0>UD    g81<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g75<2>UD        g87<4,4,1>UD                    { align1 1Q $15.src };
mov(8)          g77<2>UD        g88<4,4,1>UD                    { align1 2Q $15.src };
add(16)         g91<1>D         -g89<1,1,0>D    g83<1,1,0>D     { align1 1H A@3 compacted };
mov(8)          g75.1<2>UD      g91<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g77.1<2>UD      g92<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g75UD           g27UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $0 };
mov(16)         g27<1>UD        g13<8,8,1>UD                    { align1 1H $0.src };
mov(16)         g29<1>UD        g69<8,8,1>UD                    { align1 1H $0.src };
mov(16)         g31<1>UD        g7<8,8,1>UD                     { align1 1H $0.src };
mov(16)         g33<1>UD        g15<8,8,1>UD                    { align1 1H $0.src };
add(16)         g92<1>D         g81<1,1,0>D     96D             { align1 1H F@7 compacted };
cmp.l.f0.0(16)  g94<1>UD        g92<1,1,0>UD    g81<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g75<2>UD        g92<4,4,1>UD                    { align1 1Q $0.src };
mov(8)          g77<2>UD        g93<4,4,1>UD                    { align1 2Q $0.src };
add(16)         g96<1>D         -g94<1,1,0>D    g83<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g75.1<2>UD      g96<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g77.1<2>UD      g97<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g75UD           g27UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $1 };
mov(16)         g35<1>UD        g71<8,8,1>UD                    { align1 1H };
add(16)         g102<1>D        g81<1,1,0>D     112D            { align1 1H compacted };
cmp.l.f0.0(16)  g104<1>UD       g102<1,1,0>UD   g81<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g98<2>UD        g102<4,4,1>UD                   { align1 1Q };
mov(8)          g100<2>UD       g103<4,4,1>UD                   { align1 2Q };
add(16)         g106<1>D        -g104<1,1,0>D   g83<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g98.1<2>UD      g106<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g100.1<2>UD     g107<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g98UD           g35UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $2 };
add(16)         g107<1>D        g23<1,1,0>D     52D             { align1 1H compacted };
shl(16)         g114<1>D        g85<8,8,1>D     0x00000018UD    { align1 1H F@4 };
cmp.l.f0.0(16)  g109<1>UD       g107<1,1,0>UD   g23<1,1,0>UD    { align1 1H A@2 compacted };
mov(8)          g99<2>UD        g107<4,4,1>UD                   { align1 1Q $2.src };
mov(8)          g101<2>UD       g108<4,4,1>UD                   { align1 2Q $2.src };
add(16)         g111<1>D        -g109<1,1,0>D   g25<1,1,0>D     { align1 1H A@3 compacted };
mov(8)          g99.1<2>UD      g111<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g101.1<2>UD     g112<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g35UD           g99UD           nullUD          0x08607582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyz, L1STATE_L3MOCS dst_len = 6, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
and(16)         g112<1>UD       g35<8,8,1>UD    0x00ffffffUD    { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
add(16)         g116<1>D        g37<1,1,0>D     g79<1,1,0>D     { align1 1H F@2 compacted };
mov(16)         g123<1>UD       g35.3<32,8,4>UB                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
or(16)          g27<1>UD        g112<1,1,0>UD   g114<1,1,0>UD   { align1 1H I@3 compacted };
or(16)          g29<1>UD        g112<8,8,1>UD   0x20000000UD    { align1 1H $1.src };
cmp.l.f0.0(16)  g118<1>UD       g116<1,1,0>UD   g37<1,1,0>UD    { align1 1H A@2 compacted };
shl(16)         g126<1>D        g123<8,8,1>D    0x00000010UD    { align1 1H I@4 };
cmp.z.f0.0(16)  null<1>D        g79<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
add(16)         g120<1>D        -g118<1,1,0>D   g39<1,1,0>D     { align1 1H A@1 compacted };
(-f0.0) sel(16) g31<1>UD        g116<8,8,1>UD   0x00000000UD    { align1 1H $1.src };
(-f0.0) sel(16) g122<1>UD       g120<8,8,1>UD   0x00000000UD    { align1 1H A@1 };
mov(16)         g124<1>UD       g122<16,8,2>UW                  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
or(16)          g33<1>UD        g124<1,1,0>UD   g126<1,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g19UD           g27UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $4 };
add(16)         g27<1>D         g81<1,1,0>D     16D             { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g29<1>UD        g27<1,1,0>UD    g81<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g19<2>UD        g27<4,4,1>UD                    { align1 1Q $4.src };
mov(8)          g21<2>UD        g28<4,4,1>UD                    { align1 2Q $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g31<1>D         -g29<1,1,0>D    g83<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g19.1<2>UD      g31<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g21.1<2>UD      g32<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g19UD           g43UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $2 };
add(16)         g32<1>D         g81<1,1,0>D     32D             { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g34<1>UD        g32<1,1,0>UD    g81<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g20<2>UD        g32<4,4,1>UD                    { align1 1Q $2.src };
mov(8)          g22<2>UD        g33<4,4,1>UD                    { align1 2Q $2.src };
add(16)         g36<1>D         -g34<1,1,0>D    g83<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g20.1<2>UD      g36<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g22.1<2>UD      g37<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g20UD           g51UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $5 };
mov(16)         g61<1>UD        g9<8,8,1>UD                     { align1 1H };
mov(16)         g63<1>UD        g17<8,8,1>UD                    { align1 1H };
mov(16)         g65<1>UD        g73<8,8,1>UD                    { align1 1H $14.src };
add(16)         g37<1>D         g81<1,1,0>D     48D             { align1 1H compacted };
cmp.l.f0.0(16)  g39<1>UD        g37<1,1,0>UD    g81<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g21<2>UD        g37<4,4,1>UD                    { align1 1Q $5.src };
mov(8)          g23<2>UD        g38<4,4,1>UD                    { align1 2Q $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g41<1>D         -g39<1,1,0>D    g83<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g21.1<2>UD      g41<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g23.1<2>UD      g42<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g21UD           g59UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $6 };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_leaf_create_HW_instance_nodes_pointers_code[] = {
    0x80000065, 0x50058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x2a050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00500c, 0x00340000,
    0xe2513040, 0x04015003, 0x80030061, 0x64054410,
    0x00000000, 0x76543210, 0x00041b69, 0x65058660,
    0x02462a05, 0x00000004, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa00510c, 0x00300000, 0x64641a40, 0x00806495,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x67050160, 0x00466405, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa06a0040, 0x02410203, 0x276c1970, 0x02106a03,
    0x00030061, 0x2c060220, 0x00346a05, 0x00000000,
    0x00130061, 0x2e060220, 0x00346b05, 0x00000000,
    0xa0691d40, 0x67006502, 0xa06e1c40, 0x02126c12,
    0x00031961, 0x2c260220, 0x00346e05, 0x00000000,
    0x00131a61, 0x2e260220, 0x00346f05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x6f140000, 0xfb042c24, 0x00040000,
    0x0004c270, 0x00010220, 0x52466905, 0x00466f05,
    0x01040022, 0x0001c060, 0x00001050, 0x00001050,
    0x00040070, 0x00018660, 0x16466905, 0x00000000,
    0x01040022, 0x0001c060, 0x000000c8, 0x000000c8,
    0xa0710040, 0x0241026b, 0x27731970, 0x0210714b,
    0x00033261, 0x2d060220, 0x00347105, 0x00000000,
    0x00133261, 0x2f060220, 0x00347205, 0x00000000,
    0xa0751b40, 0x02127352, 0x00031961, 0x2d260220,
    0x00347505, 0x00000000, 0x00131a61, 0x2f260220,
    0x00347605, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x76140000,
    0xfb042d24, 0x00040000, 0x00042352, 0x31040e68,
    0x0e0e6f05, 0x76056f05, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xfb0c2d24, 0x00043114, 0x00040025, 0x00004600,
    0x00000000, 0x00000f68, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x00040041, 0x77050660,
    0x01466905, 0x00000344, 0x00040041, 0x4f050660,
    0x01466905, 0x00000354, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0510040, 0x0101026b,
    0x00040069, 0x53058660, 0x02466905, 0x00000007,
    0xe0570068, 0x01906903, 0x00041c40, 0x77160110,
    0x01567716, 0x00564f06, 0x00031c61, 0x3f060220,
    0x00345105, 0x00000000, 0x00131d61, 0x41060220,
    0x00345205, 0x00000000, 0xa0791b40, 0x0310771a,
    0x277b1970, 0x77007903, 0xa07d0040, 0x79010242,
    0x27041970, 0x02107d2b, 0x00030061, 0x5d060220,
    0x00347d05, 0x00000000, 0x00130061, 0x5f060220,
    0x00347e05, 0x00000000, 0x00041b52, 0x06040660,
    0x0eae0264, 0x04057b05, 0x00031961, 0x5d260220,
    0x00340605, 0x00000000, 0x00131a61, 0x5f260220,
    0x00340705, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x07140000,
    0xfb045d24, 0x00040000, 0x00042469, 0x09058660,
    0x02460705, 0x00000005, 0xe00b0068, 0x01b00703,
    0xa00d1a40, 0x0901025a, 0x270f1970, 0x02100d0b,
    0x00030061, 0x61060220, 0x00340d05, 0x00000000,
    0x00130061, 0x63060220, 0x00340e05, 0x00000000,
    0xa0470040, 0x01000d03, 0x00041c52, 0x11040660,
    0x0e2e02a4, 0x0f050b05, 0x27491a70, 0x0d004703,
    0x00030061, 0x17060220, 0x00344705, 0x00000000,
    0x00130061, 0x19060220, 0x00344805, 0x00000000,
    0x00031c61, 0x61260220, 0x00341105, 0x00000000,
    0x00131d61, 0x63260220, 0x00341205, 0x00000000,
    0xa01b1d40, 0x11024902, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x2f440000,
    0xfb046124, 0x003c0000, 0x00031961, 0x17260220,
    0x00341b05, 0x00000000, 0x00131a61, 0x19260220,
    0x00341c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x04440000,
    0xfb041724, 0x003c0000, 0x00042565, 0x21058220,
    0x02463505, 0x00ffffff, 0x00040061, 0x55050020,
    0x0066351f, 0x00000000, 0x0004a569, 0x2f058660,
    0x02462105, 0x00000003, 0xe0312568, 0x01d02103,
    0x00042665, 0x4f058220, 0x02460a05, 0x7fffffff,
    0xa033b540, 0x2f010302, 0x27351970, 0x03103303,
    0x00030061, 0x3b060220, 0x00343305, 0x00000000,
    0x00130061, 0x3d060220, 0x00343405, 0x00000000,
    0x27193670, 0x0210514b, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00041c52, 0x17040660,
    0x0e2e0324, 0x35053105, 0xa0511a40, 0x02121952,
    0x00031a61, 0x3b260220, 0x00341705, 0x00000000,
    0x00131b61, 0x3d260220, 0x00341805, 0x00000000,
    0x00031b61, 0x3f260220, 0x00345105, 0x00000000,
    0x00131c61, 0x41260220, 0x00345205, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x17240000, 0xfb043b24, 0x000c0000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x5b140000, 0xfb043f24, 0x00040000,
    0x00032761, 0x37060220, 0x00341705, 0x00000000,
    0x00132761, 0x39060220, 0x00341805, 0x00000000,
    0xa0690040, 0x01001703, 0xa06e0040, 0x02001703,
    0xa0730040, 0x03801703, 0xa0590040, 0x03001703,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00042869, 0x5d058660, 0x02465b05, 0x00000006,
    0xe05f3468, 0x01a05b03, 0x0003f761, 0x37260220,
    0x00341905, 0x00000000, 0x0013f761, 0x39260220,
    0x00341a05, 0x00000000, 0x00031f61, 0x43060220,
    0x00346905, 0x00000000, 0x00131f61, 0x45060220,
    0x00346a05, 0x00000000, 0x00031f61, 0x23060220,
    0x00346e05, 0x00000000, 0x00131f61, 0x25060220,
    0x00346f05, 0x00000000, 0x00031f61, 0x27060220,
    0x00347305, 0x00000000, 0x00130061, 0x29060220,
    0x00347405, 0x00000000, 0x00033261, 0x2b060220,
    0x00345905, 0x00000000, 0x00133261, 0x2d060220,
    0x00345a05, 0x00000000, 0xa0613540, 0x5d01026a,
    0x80002601, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x03440000, 0xfb043724, 0x003c0000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x27631970, 0x0210614b, 0xa0510040, 0x53006102,
    0x00041a52, 0x65040660, 0x0e2e02e4, 0x63055f05,
    0x27671a70, 0x61005103, 0x00030061, 0x13060220,
    0x00345105, 0x00000000, 0x00130061, 0x15060220,
    0x00345205, 0x00000000, 0xa07b0040, 0x04005103,
    0x276b0070, 0x17006903, 0x27700070, 0x17006e03,
    0x00041e52, 0x53040e68, 0x0e2e6505, 0x67055705,
    0x27750070, 0x17007303, 0x00031d61, 0x4b060220,
    0x00347b05, 0x00000000, 0x00131e61, 0x4d060220,
    0x00347c05, 0x00000000, 0x27790070, 0x17005903,
    0xa06d1f40, 0x19026b02, 0xa0721f40, 0x19027002,
    0x277d0070, 0x51007b03, 0x00031f61, 0x13260220,
    0x00345305, 0x00000000, 0x00131f61, 0x15260220,
    0x00345405, 0x00000000, 0xa0771f40, 0x19027502,
    0xa07b1f40, 0x19027902, 0x00031f61, 0x43260220,
    0x00346d05, 0x00000000, 0x00131f61, 0x45260220,
    0x00346e05, 0x00000000, 0x00031f61, 0x23260220,
    0x00347205, 0x00000000, 0x00131f61, 0x25260220,
    0x00347305, 0x00000000, 0xa02f1f40, 0x53027d02,
    0x00031f61, 0x27260220, 0x00347705, 0x00000000,
    0x00131f61, 0x29260220, 0x00347805, 0x00000000,
    0x00031f61, 0x2b260220, 0x00347b05, 0x00000000,
    0x00131f61, 0x2d260220, 0x00347c05, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00044a31, 0x0b440000, 0xfb044324, 0x003c0000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x43440000, 0xfb042324, 0x003c0000,
    0x00031d61, 0x4b260220, 0x00342f05, 0x00000000,
    0x00131e61, 0x4d260220, 0x00343005, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x1b240000, 0xfb042724, 0x000c0000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044d31, 0x7c140000, 0xfb042b24, 0x00040000,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x20252a41, 0x07020d00, 0x80002901, 0x00000000,
    0x00000000, 0x00000000, 0x20602a41, 0x03020f00,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x20692a41, 0x05020b00, 0x80002b01, 0x00000000,
    0x00000000, 0x00000000, 0x207e1f41, 0x0f024500,
    0x20232b41, 0x47020500, 0x20570041, 0x0b024700,
    0x205e2b41, 0x43020700, 0x20650041, 0x0d024300,
    0x20670041, 0x45020300, 0x00042d65, 0x1f058220,
    0x02467c05, 0x00ffffff, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x0004175b, 0x3b040aa8,
    0x0a0a2505, 0x05050f05, 0x0004175b, 0x5a040aa8,
    0x0a0a6005, 0x07050b05, 0x0004175b, 0x5c040aa8,
    0x0a0a6905, 0x03050d05, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x0004175b, 0x28040aa8,
    0x0a0a2305, 0x45050705, 0x0004175b, 0x63040aa8,
    0x0a0a5e05, 0x47050305, 0x00043c5b, 0x26040aa8,
    0x0a0a7e05, 0x0d054705, 0x0004175b, 0x6c040aa8,
    0x0a0a6705, 0x43050505, 0x0004005b, 0x61040aa8,
    0x0a0a5705, 0x0f054305, 0x0004175b, 0x6a040aa8,
    0x0a0a6505, 0x0b054505, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x203d1741, 0x3b004300,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x0004115b, 0x3f040aa8, 0x0a0a3d05, 0x0b052805,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x0004115b, 0x41040aa8, 0x0a0a3f05, 0x03052605,
    0x00049e38, 0x6e050aa0, 0x1a464105, 0x00460001,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x202b2e41, 0x6e002600, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x202d1641, 0x6e006100,
    0x202f0a41, 0x6e006a00, 0x20310041, 0x6e002800,
    0x20330041, 0x6e006300, 0x20350041, 0x6e006c00,
    0x20373941, 0x6e003b00, 0x20393941, 0x6e005a00,
    0x203b0041, 0x6e005c00, 0x80002a01, 0x00000000,
    0x00000000, 0x00000000, 0x20710d41, 0x11023300,
    0x206f1741, 0x11023100, 0x20730e41, 0x11023500,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x00040b5b, 0x77040aa8, 0x0a2a7105, 0x2d050905,
    0x0004135b, 0x75040aa8, 0x0a2a6f05, 0x2b050905,
    0x0004135b, 0x79040aa8, 0x0a2a7305, 0x2f050905,
    0x0004bb5b, 0x27040aa8, 0x0a2a7705, 0x39054905,
    0x0004135b, 0x25040aa8, 0x0a2a7505, 0x37054905,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x0004135b, 0x29040aa8, 0x0a2a7905, 0x3b054905,
    0x80002c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044f31, 0x00000000, 0xfb0c4b24, 0x003c1b44,
    0x00043f61, 0x1b050220, 0x00460305, 0x00000000,
    0x00043f61, 0x1d050220, 0x00460b05, 0x00000000,
    0x00043f61, 0x1f050220, 0x00464305, 0x00000000,
    0x00043f61, 0x21050220, 0x00460505, 0x00000000,
    0xa0570040, 0x05005103, 0x27591970, 0x51005703,
    0x00033f61, 0x4b060220, 0x00345705, 0x00000000,
    0x00133f61, 0x4d060220, 0x00345805, 0x00000000,
    0xa05b0b40, 0x53025902, 0x00031961, 0x4b260220,
    0x00345b05, 0x00000000, 0x00131a61, 0x4d260220,
    0x00345c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x00000000,
    0xfb0c4b24, 0x003c1b44, 0x00043061, 0x1b050220,
    0x00460d05, 0x00000000, 0x00043061, 0x1d050220,
    0x00464505, 0x00000000, 0x00043061, 0x1f050220,
    0x00460705, 0x00000000, 0x00043061, 0x21050220,
    0x00460f05, 0x00000000, 0xa05c1740, 0x06005103,
    0x275e1970, 0x51005c03, 0x00033061, 0x4b060220,
    0x00345c05, 0x00000000, 0x00133061, 0x4d060220,
    0x00345d05, 0x00000000, 0xa0601b40, 0x53025e02,
    0x00031961, 0x4b260220, 0x00346005, 0x00000000,
    0x00131a61, 0x4d260220, 0x00346105, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb0c4b24, 0x003c1b44,
    0x00040061, 0x23050220, 0x00464705, 0x00000000,
    0xa0660040, 0x07005103, 0x27681970, 0x51006603,
    0x00030061, 0x62060220, 0x00346605, 0x00000000,
    0x00130061, 0x64060220, 0x00346705, 0x00000000,
    0xa06a1b40, 0x53026802, 0x00031961, 0x62260220,
    0x00346a05, 0x00000000, 0x00131a61, 0x64260220,
    0x00346b05, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xfb0c6224, 0x003c2344, 0xa06b0040, 0x03401703,
    0x00041469, 0x72058660, 0x02465505, 0x00000018,
    0x276d0a70, 0x17006b03, 0x00033261, 0x63060220,
    0x00346b05, 0x00000000, 0x00133261, 0x65060220,
    0x00346c05, 0x00000000, 0xa06f0b40, 0x19026d02,
    0x00031961, 0x63260220, 0x00346f05, 0x00000000,
    0x00131a61, 0x65260220, 0x00347005, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x23340000, 0xfb046324, 0x001c0000,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x00041665, 0x70058220, 0x02462305, 0x00ffffff,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0xa0741240, 0x4f002502, 0x00040061, 0x7b050020,
    0x0066231f, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x201b1b66, 0x72007003,
    0x00043166, 0x1d058220, 0x02467005, 0x20000000,
    0x27760a70, 0x25007403, 0x00041c69, 0x7e058660,
    0x02467b05, 0x00000010, 0x00040070, 0x00018660,
    0x16464f05, 0x00000000, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0xa0780940, 0x27027602,
    0x11043162, 0x1f058220, 0x02467405, 0x00000000,
    0x11040962, 0x7a058220, 0x02467805, 0x00000000,
    0x00041961, 0x7c050120, 0x00567a06, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x20211966, 0x7e007c03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xfb0c1324, 0x003c1b44, 0xa01b3440, 0x01005103,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x271d1970, 0x51001b03, 0x00033461, 0x13060220,
    0x00341b05, 0x00000000, 0x00133461, 0x15060220,
    0x00341c05, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xa01f1b40, 0x53021d02,
    0x00031961, 0x13260220, 0x00341f05, 0x00000000,
    0x00131a61, 0x15260220, 0x00342005, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x00000000, 0xfb0c1324, 0x003c2b44,
    0xa0203440, 0x02005103, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x27221970, 0x51002003,
    0x00033261, 0x14060220, 0x00342005, 0x00000000,
    0x00133261, 0x16060220, 0x00342105, 0x00000000,
    0xa0241b40, 0x53022202, 0x00031961, 0x14260220,
    0x00342405, 0x00000000, 0x00131a61, 0x16260220,
    0x00342505, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x00000000,
    0xfb0c1424, 0x003c3344, 0x00040061, 0x3d050220,
    0x00460905, 0x00000000, 0x00040061, 0x3f050220,
    0x00461105, 0x00000000, 0x00043e61, 0x41050220,
    0x00464905, 0x00000000, 0xa0250040, 0x03005103,
    0x27271970, 0x51002503, 0x00033561, 0x15060220,
    0x00342505, 0x00000000, 0x00133561, 0x17060220,
    0x00342605, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa0291b40, 0x53022702,
    0x00031961, 0x15260220, 0x00342905, 0x00000000,
    0x00131a61, 0x17260220, 0x00342a05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xfb0c1524, 0x003c3b44,
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
      .base.program_size = 4560,
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
const char *gfx125_bvh_build_leaf_create_HW_instance_nodes_pointers_sha1 = "f393fba759ce5fece8bf1daba3e9a2ccee6870f6";

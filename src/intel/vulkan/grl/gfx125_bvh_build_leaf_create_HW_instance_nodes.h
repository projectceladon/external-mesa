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

and(1)          g76<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g37<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g76UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
add(1)          g77<1>UD        g76<0,1,0>UD    0x00000040UD    { align1 WE_all 1N $0.src compacted };
mov(8)          g95<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g96<1>D         g37<8,8,1>D     0x00000004UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g3UD            g77UD           nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
add(8)          g95.8<1>UW      g95<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g98<1>D         g95<8,8,1>UW                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g101<1>D        g2<0,1,0>D      36D             { align1 1H compacted };
cmp.l.f0.0(16)  g103<1>UD       g101<1,1,0>UD   g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g39<2>UD        g101<4,4,1>UD                   { align1 1Q };
mov(8)          g41<2>UD        g102<4,4,1>UD                   { align1 2Q };
add(16)         g100<1>D        g96<1,1,0>D     g98<1,1,0>D     { align1 1H I@5 compacted };
add(16)         g105<1>D        -g103<1,1,0>D   g2.1<0,1,0>D    { align1 1H I@4 compacted };
mov(8)          g39.1<2>UD      g105<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g41.1<2>UD      g106<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g106UD          g39UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
cmp.l.f0.0(16)  null<1>UD       g100<8,8,1>UD   g106<8,8,1>UD   { align1 1H @4 $2.dst };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
cmp.z.f0.0(16)  null<1>D        g100<8,8,1>D    0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL1              { align1 1H };
add(16)         g108<1>D        g2.6<0,1,0>D    36D             { align1 1H compacted };
cmp.l.f0.0(16)  g110<1>UD       g108<1,1,0>UD   g2.6<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g40<2>UD        g108<4,4,1>UD                   { align1 1Q $2.src };
mov(8)          g42<2>UD        g109<4,4,1>UD                   { align1 2Q $2.src };
add(16)         g112<1>D        -g110<1,1,0>D   g2.7<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g40.1<2>UD      g112<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g42.1<2>UD      g113<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g113UD          g40UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
add3(16)        g44<1>D         g106<8,8,1>D    g106<8,8,1>D    g113<1,1,1>D { align1 1H $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g40UD           g44UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $2 };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mul(16)         g114<1>D        g100<8,8,1>D    g3.4<0,1,0>UW   { align1 1H };
mul(16)         g75<1>D         g100<8,8,1>D    g3.5<0,1,0>UW   { align1 1H };
add(16)         g51<1>D         g2.6<0,1,0>D    16D             { align1 1H compacted };
shl(16)         g53<1>D         g100<8,8,1>D    0x00000007UD    { align1 1H };
shr(16)         g55<1>UD        g100<1,1,0>UD   0x00000019UD    { align1 1H compacted };
add(16)         g114.1<2>UW     g114.1<16,8,2>UW g75<16,8,2>UW  { align1 1H I@4 };
mov(8)          g12<2>UD        g51<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g14<2>UD        g52<4,4,1>UD                    { align1 2Q I@5 };
add(16)         g116<1>D        g114<1,1,0>D    g3.3<0,1,0>D    { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g118<1>UD       g116<1,1,0>UD   g114<1,1,0>UD   { align1 1H I@1 compacted };
add(16)         g120<1>D        g2.2<0,1,0>D    g116<1,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g122<1>UD       g120<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g88<2>UD        g120<4,4,1>UD                   { align1 1Q };
mov(8)          g90<2>UD        g121<4,4,1>UD                   { align1 2Q };
add3(16)        g124<1>D        g2.3<0,1,0>D    -g118<8,8,1>D   -g122<1,1,1>D { align1 1H I@3 };
mov(8)          g88.1<2>UD      g124<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g90.1<2>UD      g125<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g125UD          g88UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
shl(16)         g4<1>D          g125<8,8,1>D    0x00000005UD    { align1 1H $4.dst };
shr(16)         g6<1>UD         g125<1,1,0>UD   0x0000001bUD    { align1 1H compacted };
add(16)         g8<1>D          g2.4<0,1,0>D    g4<1,1,0>D      { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g10<1>UD        g8<1,1,0>UD     g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g92<2>UD        g8<4,4,1>UD                     { align1 1Q };
mov(8)          g94<2>UD        g9<4,4,1>UD                     { align1 2Q };
add(16)         g27<1>D         g8<1,1,0>D      16D             { align1 1H compacted };
add3(16)        g16<1>D         g2.5<0,1,0>D    g6<8,8,1>D      -g10<1,1,1>D { align1 1H I@4 };
cmp.l.f0.0(16)  g29<1>UD        g27<1,1,0>UD    g8<1,1,0>UD     { align1 1H I@2 compacted };
mov(8)          g47<2>UD        g27<4,4,1>UD                    { align1 1Q };
mov(8)          g49<2>UD        g28<4,4,1>UD                    { align1 2Q };
mov(8)          g92.1<2>UD      g16<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g94.1<2>UD      g17<4,4,1>UD                    { align1 2Q I@5 };
add(16)         g31<1>D         -g29<1,1,0>D    g16<1,1,0>D     { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g4UD            g92UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mov(8)          g47.1<2>UD      g31<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g49.1<2>UD      g32<4,4,1>UD                    { align1 2Q I@2 };
and(16)         g33<1>UD        g10<8,8,1>UD    0x00ffffffUD    { align1 1H $5.dst };
mov(16)         g81<1>UD        g10.3<32,8,4>UB                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g4UD            g47UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shl(16)         g47<1>D         g33<8,8,1>D     0x00000006UD    { align1 1H I@2 };
shr(16)         g49<1>UD        g33<1,1,0>UD    0x0000001aUD    { align1 1H $6.src compacted };
add(16)         g83<1>D         g3<0,1,0>D      g47<1,1,0>D     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g65<1>UD        g83<1,1,0>UD    g3<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g71<2>UD        g83<4,4,1>UD                    { align1 1Q };
mov(8)          g73<2>UD        g84<4,4,1>UD                    { align1 2Q };
add(16)         g57<1>D         g83<1,1,0>D     16D             { align1 1H compacted };
add(16)         g59<1>D         g83<1,1,0>D     32D             { align1 1H compacted };
add(16)         g61<1>D         g83<1,1,0>D     56D             { align1 1H compacted };
add(16)         g63<1>D         g83<1,1,0>D     48D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g77<1>UD        g51<1,1,0>UD    g2.6<0,1,0>UD   { align1 1H compacted };
add3(16)        g85<1>D         g3.1<0,1,0>D    g49<8,8,1>D     -g65<1,1,1>D { align1 1H I@7 };
mov(8)          g67<2>UD        g57<4,4,1>UD                    { align1 1Q I@6 };
mov(8)          g69<2>UD        g58<4,4,1>UD                    { align1 2Q I@7 };
mov(8)          g35<2>UD        g59<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g37<2>UD        g60<4,4,1>UD                    { align1 2Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g39<2>UD        g61<4,4,1>UD                    { align1 1Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $2.src };
mov(8)          g41<2>UD        g62<4,4,1>UD                    { align1 2Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g43<2>UD        g63<4,4,1>UD                    { align1 1Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $2.src };
mov(8)          g45<2>UD        g64<4,4,1>UD                    { align1 2Q I@7 };
add(16)         g79<1>D         -g77<1,1,0>D    g2.7<0,1,0>D    { align1 1H I@7 compacted };
mov(8)          g71.1<2>UD      g85<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g73.1<2>UD      g86<4,4,1>UD                    { align1 2Q };
mov(8)          g12.1<2>UD      g79<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g14.1<2>UD      g80<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g87UD           g12UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
and(16)         g75<1>UD        g10<8,8,1>UD    0x7fffffffUD    { align1 1H $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g3UD            g71UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
shl(16)         g89<1>D         g87<8,8,1>D     0x00000006UD    { align1 1H $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
shr(16)         g91<1>UD        g87<1,1,0>UD    0x0000001aUD    { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g93<1>D         g2.6<0,1,0>D    g89<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g95<1>UD        g93<1,1,0>UD    g2.6<0,1,0>UD   { align1 1H I@1 compacted };
add(16)         g77<1>D         g93<1,1,0>D     g53<1,1,0>D     { align1 1H compacted };
add3(16)        g97<1>D         g2.7<0,1,0>D    g91<8,8,1>D     -g95<1,1,1>D { align1 1H I@2 };
cmp.l.f0.0(16)  g99<1>UD        g77<1,1,0>UD    g93<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g19<2>UD        g77<4,4,1>UD                    { align1 1Q };
mov(8)          g21<2>UD        g78<4,4,1>UD                    { align1 2Q };
add(16)         g115<1>D        g77<1,1,0>D     64D             { align1 1H compacted };
cmp.l.f0.0(16)  g101<1>UD       g57<1,1,0>UD    g83<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  g105<1>UD       g59<1,1,0>UD    g83<1,1,0>UD    { align1 1H compacted };
add3(16)        g79<1>D         g97<8,8,1>D     g55<8,8,1>D     -g99<1,1,1>D { align1 1H I@6 };
cmp.l.f0.0(16)  g109<1>UD       g61<1,1,0>UD    g83<1,1,0>UD    { align1 1H compacted };
mov(8)          g23<2>UD        g115<4,4,1>UD                   { align1 1Q I@5 };
mov(8)          g25<2>UD        g116<4,4,1>UD                   { align1 2Q I@6 };
cmp.l.f0.0(16)  g113<1>UD       g63<1,1,0>UD    g83<1,1,0>UD    { align1 1H compacted };
add(16)         g103<1>D        -g101<1,1,0>D   g85<1,1,0>D     { align1 1H I@7 compacted };
add(16)         g107<1>D        -g105<1,1,0>D   g85<1,1,0>D     { align1 1H I@7 compacted };
cmp.l.f0.0(16)  g117<1>UD       g115<1,1,0>UD   g77<1,1,0>UD    { align1 1H compacted };
mov(8)          g19.1<2>UD      g79<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g21.1<2>UD      g80<4,4,1>UD                    { align1 2Q I@7 };
add(16)         g111<1>D        -g109<1,1,0>D   g85<1,1,0>D     { align1 1H I@7 compacted };
add(16)         g115<1>D        -g113<1,1,0>D   g85<1,1,0>D     { align1 1H I@7 compacted };
mov(8)          g67.1<2>UD      g103<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g69.1<2>UD      g104<4,4,1>UD                   { align1 2Q I@7 };
mov(8)          g35.1<2>UD      g107<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g37.1<2>UD      g108<4,4,1>UD                   { align1 2Q I@7 };
add(16)         g124<1>D        -g117<1,1,0>D   g79<1,1,0>D     { align1 1H I@7 compacted };
mov(8)          g39.1<2>UD      g111<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g41.1<2>UD      g112<4,4,1>UD                   { align1 2Q I@7 };
mov(8)          g43.1<2>UD      g115<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g45.1<2>UD      g116<4,4,1>UD                   { align1 2Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
send(16)        g11UD           g67UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
send(16)        g67UD           g35UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
mov(8)          g23.1<2>UD      g124<4,4,1>UD                   { align1 1Q I@5 };
mov(8)          g25.1<2>UD      g125<4,4,1>UD                   { align1 2Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g27UD           g39UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g116UD          g43UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
mul(16)         g122<1>F        -g13<1,1,0>F    g7<1,1,0>F      { align1 1H $9.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
mul(16)         g51<1>F         -g15<1,1,0>F    g3<1,1,0>F      { align1 1H $9.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
mul(16)         g91<1>F         -g11<1,1,0>F    g5<1,1,0>F      { align1 1H $9.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
mul(16)         g118<1>F        -g69<1,1,0>F    g15<1,1,0>F     { align1 1H I@7 compacted };
mul(16)         g120<1>F        -g5<1,1,0>F     g71<1,1,0>F     { align1 1H $10.dst compacted };
mul(16)         g47<1>F         -g71<1,1,0>F    g11<1,1,0>F     { align1 1H compacted };
mul(16)         g49<1>F         -g7<1,1,0>F     g67<1,1,0>F     { align1 1H $10.dst compacted };
mul(16)         g61<1>F         -g67<1,1,0>F    g13<1,1,0>F     { align1 1H compacted };
mul(16)         g89<1>F         -g3<1,1,0>F     g69<1,1,0>F     { align1 1H compacted };
and(16)         g31<1>UD        g116<8,8,1>UD   0x00ffffffUD    { align1 1H $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mad(16)         g35<1>F         g122<8,8,1>F    g15<8,8,1>F     g5<1,1,1>F { align1 1H F@7 };
mad(16)         g64<1>F         g51<8,8,1>F     g11<8,8,1>F     g7<1,1,1>F { align1 1H F@7 };
mad(16)         g87<1>F         g91<8,8,1>F     g13<8,8,1>F     g3<1,1,1>F { align1 1H F@7 };
mad(16)         g125<1>F        g120<8,8,1>F    g7<8,8,1>F      g69<1,1,1>F { align1 1H A@2 };
mad(16)         g59<1>F         g49<8,8,1>F     g3<8,8,1>F      g71<1,1,1>F { align1 1H F@7 };
mad(16)         g123<1>F        g118<8,8,1>F    g71<8,8,1>F     g13<1,1,1>F { align1 1H I@3 };
mad(16)         g94<1>F         g89<8,8,1>F     g5<8,8,1>F      g67<1,1,1>F { align1 1H F@7 };
mad(16)         g52<1>F         g47<8,8,1>F     g67<8,8,1>F     g15<1,1,1>F { align1 1H };
mad(16)         g92<1>F         g61<8,8,1>F     g69<8,8,1>F     g11<1,1,1>F { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mul(16)         g37<1>F         g67<1,1,0>F     g35<1,1,0>F     { align1 1H F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mad(16)         g39<1>F         g37<8,8,1>F     g125<8,8,1>F    g11<1,1,1>F { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mad(16)         g41<1>F         g39<8,8,1>F     g123<8,8,1>F    g3<1,1,1>F { align1 1H F@1 };
math inv(16)    g96<1>F         g41<8,8,1>F     null<8,8,1>F    { align1 1H @1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mul(16)         g43<1>F         g123<1,1,0>F    g96<1,1,0>F     { align1 1H $13.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mul(16)         g45<1>F         g52<1,1,0>F     g96<1,1,0>F     { align1 1H F@6 compacted };
mul(16)         g47<1>F         g92<1,1,0>F     g96<1,1,0>F     { align1 1H F@6 compacted };
mul(16)         g49<1>F         g125<1,1,0>F    g96<1,1,0>F     { align1 1H compacted };
mul(16)         g55<1>F         g35<1,1,0>F     g96<1,1,0>F     { align1 1H compacted };
mul(16)         g57<1>F         g64<1,1,0>F     g96<1,1,0>F     { align1 1H compacted };
mul(16)         g51<1>F         g59<1,1,0>F     g96<1,1,0>F     { align1 1H compacted };
mul(16)         g53<1>F         g94<1,1,0>F     g96<1,1,0>F     { align1 1H compacted };
mul(16)         g59<1>F         g87<1,1,0>F     g96<1,1,0>F     { align1 1H compacted };
mul(16)         g97<1>F         -g49<1,1,0>F    g17<1,1,0>F     { align1 1H @6 $9.dst compacted };
mul(16)         g99<1>F         -g51<1,1,0>F    g17<1,1,0>F     { align1 1H F@4 compacted };
mul(16)         g101<1>F        -g53<1,1,0>F    g17<1,1,0>F     { align1 1H F@4 compacted };
mad(16)         g103<1>F        g97<8,8,1>F     g9<8,8,1>F      -g43<1,1,1>F { align1 1H @3 $8.dst };
mad(16)         g105<1>F        g99<8,8,1>F     g9<8,8,1>F      -g45<1,1,1>F { align1 1H F@3 };
mad(16)         g107<1>F        g101<8,8,1>F    g9<8,8,1>F      -g47<1,1,1>F { align1 1H A@3 };
mad(16)         g37<1>F         g103<8,8,1>F    g73<8,8,1>F     -g55<1,1,1>F { align1 1H @3 $10.dst };
mad(16)         g39<1>F         g105<8,8,1>F    g73<8,8,1>F     -g57<1,1,1>F { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mad(16)         g41<1>F         g107<8,8,1>F    g73<8,8,1>F     -g59<1,1,1>F { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g23UD           g27UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $14 };
mov(16)         g27<1>UD        g3<8,8,1>UD                     { align1 1H $14.src };
mov(16)         g29<1>UD        g11<8,8,1>UD                    { align1 1H $14.src };
mov(16)         g31<1>UD        g67<8,8,1>UD                    { align1 1H $14.src };
mov(16)         g33<1>UD        g5<8,8,1>UD                     { align1 1H $14.src };
add(16)         g125<1>D        g77<1,1,0>D     80D             { align1 1H compacted };
cmp.l.f0.0(16)  g87<1>UD        g125<1,1,0>UD   g77<1,1,0>UD    { align1 1H A@1 compacted };
mov(8)          g23<2>UD        g125<4,4,1>UD                   { align1 1Q $14.src };
mov(8)          g25<2>UD        g126<4,4,1>UD                   { align1 2Q $14.src };
add(16)         g89<1>D         -g87<1,1,0>D    g79<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g23.1<2>UD      g89<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g25.1<2>UD      g90<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g23UD           g27UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $15 };
mov(16)         g27<1>UD        g13<8,8,1>UD                    { align1 1H $15.src };
mov(16)         g29<1>UD        g69<8,8,1>UD                    { align1 1H $15.src };
mov(16)         g31<1>UD        g7<8,8,1>UD                     { align1 1H $15.src };
mov(16)         g33<1>UD        g15<8,8,1>UD                    { align1 1H $15.src };
add(16)         g90<1>D         g77<1,1,0>D     96D             { align1 1H compacted };
cmp.l.f0.0(16)  g92<1>UD        g90<1,1,0>UD    g77<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g23<2>UD        g90<4,4,1>UD                    { align1 1Q $15.src };
mov(8)          g25<2>UD        g91<4,4,1>UD                    { align1 2Q $15.src };
add(16)         g94<1>D         -g92<1,1,0>D    g79<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g23.1<2>UD      g94<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g25.1<2>UD      g95<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g23UD           g27UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $0 };
mov(16)         g35<1>UD        g71<8,8,1>UD                    { align1 1H };
add(16)         g97<1>D         g77<1,1,0>D     112D            { align1 1H F@6 compacted };
cmp.l.f0.0(16)  g99<1>UD        g97<1,1,0>UD    g77<1,1,0>UD    { align1 1H A@1 compacted };
mov(8)          g93<2>UD        g97<4,4,1>UD                    { align1 1Q };
mov(8)          g95<2>UD        g98<4,4,1>UD                    { align1 2Q F@7 };
add(16)         g101<1>D        -g99<1,1,0>D    g79<1,1,0>D     { align1 1H A@3 compacted };
mov(8)          g93.1<2>UD      g101<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g95.1<2>UD      g102<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g93UD           g35UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $2 };
add(16)         g102<1>D        g83<1,1,0>D     52D             { align1 1H F@3 compacted };
shl(16)         g109<1>D        g81<8,8,1>D     0x00000018UD    { align1 1H };
cmp.l.f0.0(16)  g104<1>UD       g102<1,1,0>UD   g83<1,1,0>UD    { align1 1H A@2 compacted };
mov(8)          g94<2>UD        g102<4,4,1>UD                   { align1 1Q $2.src };
mov(8)          g96<2>UD        g103<4,4,1>UD                   { align1 2Q $2.src };
add(16)         g106<1>D        -g104<1,1,0>D   g85<1,1,0>D     { align1 1H A@1 compacted };
mov(8)          g94.1<2>UD      g106<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g96.1<2>UD      g107<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g35UD           g94UD           nullUD          0x08607582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyz, L1STATE_L3MOCS dst_len = 6, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
and(16)         g107<1>UD       g35<8,8,1>UD    0x00ffffffUD    { align1 1H F@1 };
add(16)         g111<1>D        g37<1,1,0>D     g75<1,1,0>D     { align1 1H $1.dst compacted };
mov(16)         g118<1>UD       g35.3<32,8,4>UB                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
or(16)          g27<1>UD        g107<1,1,0>UD   g109<1,1,0>UD   { align1 1H I@3 compacted };
or(16)          g29<1>UD        g107<8,8,1>UD   0x20000000UD    { align1 1H $0.src };
cmp.l.f0.0(16)  g113<1>UD       g111<1,1,0>UD   g37<1,1,0>UD    { align1 1H I@4 compacted };
shl(16)         g121<1>D        g118<8,8,1>D    0x00000010UD    { align1 1H I@4 };
cmp.z.f0.0(16)  null<1>D        g75<8,8,1>D     0D              { align1 1H };
add(16)         g115<1>D        -g113<1,1,0>D   g39<1,1,0>D     { align1 1H @3 $1.dst compacted };
(-f0.0) sel(16) g31<1>UD        g111<8,8,1>UD   0x00000000UD    { align1 1H $0.src };
(-f0.0) sel(16) g117<1>UD       g115<8,8,1>UD   0x00000000UD    { align1 1H I@2 };
mov(16)         g119<1>UD       g117<16,8,2>UW                  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
or(16)          g33<1>UD        g119<1,1,0>UD   g121<1,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g19UD           g27UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $2 };
add(16)         g122<1>D        g77<1,1,0>D     16D             { align1 1H compacted };
cmp.l.f0.0(16)  g124<1>UD       g122<1,1,0>UD   g77<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g19<2>UD        g122<4,4,1>UD                   { align1 1Q $2.src };
mov(8)          g21<2>UD        g123<4,4,1>UD                   { align1 2Q $2.src };
add(16)         g126<1>D        -g124<1,1,0>D   g79<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g19.1<2>UD      g126<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g21.1<2>UD      g127<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g19UD           g43UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $3 };
add(16)         g27<1>D         g77<1,1,0>D     32D             { align1 1H $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g29<1>UD        g27<1,1,0>UD    g77<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g20<2>UD        g27<4,4,1>UD                    { align1 1Q $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
mov(8)          g22<2>UD        g28<4,4,1>UD                    { align1 2Q $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g31<1>D         -g29<1,1,0>D    g79<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g20.1<2>UD      g31<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g22.1<2>UD      g32<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g20UD           g51UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $4 };
mov(16)         g61<1>UD        g9<8,8,1>UD                     { align1 1H };
mov(16)         g63<1>UD        g17<8,8,1>UD                    { align1 1H };
mov(16)         g65<1>UD        g73<8,8,1>UD                    { align1 1H };
add(16)         g32<1>D         g77<1,1,0>D     48D             { align1 1H $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g34<1>UD        g32<1,1,0>UD    g77<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g21<2>UD        g32<4,4,1>UD                    { align1 1Q $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
mov(8)          g23<2>UD        g33<4,4,1>UD                    { align1 2Q $4.src };
add(16)         g36<1>D         -g34<1,1,0>D    g79<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g21.1<2>UD      g36<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g23.1<2>UD      g37<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g21UD           g59UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $5 };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_leaf_create_HW_instance_nodes_code[] = {
    0x80000065, 0x4c058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x25050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa004c0c, 0x00340000,
    0xe24d3040, 0x04014c03, 0x80030061, 0x5f054410,
    0x00000000, 0x76543210, 0x00041b69, 0x60058660,
    0x02462505, 0x00000004, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa004d0c, 0x00300000, 0x645f1a40, 0x00805f95,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x62050160, 0x00465f05, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa0650040, 0x02410203, 0x27671970, 0x02106503,
    0x00030061, 0x27060220, 0x00346505, 0x00000000,
    0x00130061, 0x29060220, 0x00346605, 0x00000000,
    0xa0641d40, 0x62006002, 0xa0691c40, 0x02126712,
    0x00031961, 0x27260220, 0x00346905, 0x00000000,
    0x00131a61, 0x29260220, 0x00346a05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x6a140000, 0xfb042724, 0x00040000,
    0x0004c270, 0x00010220, 0x52466405, 0x00466a05,
    0x01040022, 0x0001c060, 0x00001050, 0x00001050,
    0x00040070, 0x00018660, 0x16466405, 0x00000000,
    0x01040022, 0x0001c060, 0x000000c8, 0x000000c8,
    0xa06c0040, 0x0241026b, 0x276e1970, 0x02106c4b,
    0x00033261, 0x28060220, 0x00346c05, 0x00000000,
    0x00133261, 0x2a060220, 0x00346d05, 0x00000000,
    0xa0701b40, 0x02126e52, 0x00031961, 0x28260220,
    0x00347005, 0x00000000, 0x00131a61, 0x2a260220,
    0x00347105, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x71140000,
    0xfb042824, 0x00040000, 0x00042352, 0x2c040e68,
    0x0e0e6a05, 0x71056a05, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xfb0c2824, 0x00042c14, 0x00040025, 0x00004600,
    0x00000000, 0x00000f68, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x00040041, 0x72050660,
    0x01466405, 0x00000344, 0x00040041, 0x4b050660,
    0x01466405, 0x00000354, 0xa0330040, 0x0101026b,
    0x00040069, 0x35058660, 0x02466405, 0x00000007,
    0xe0370068, 0x01906403, 0x00041c40, 0x72160110,
    0x01567216, 0x00564b06, 0x00031c61, 0x0c060220,
    0x00343305, 0x00000000, 0x00131d61, 0x0e060220,
    0x00343405, 0x00000000, 0xa0741b40, 0x0310721a,
    0x27761970, 0x72007403, 0xa0780040, 0x74010242,
    0x277a1970, 0x0210782b, 0x00030061, 0x58060220,
    0x00347805, 0x00000000, 0x00130061, 0x5a060220,
    0x00347905, 0x00000000, 0x00041b52, 0x7c040660,
    0x0eae0264, 0x7a057605, 0x00031961, 0x58260220,
    0x00347c05, 0x00000000, 0x00131a61, 0x5a260220,
    0x00347d05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x7d140000,
    0xfb045824, 0x00040000, 0x00042469, 0x04058660,
    0x02467d05, 0x00000005, 0xe0060068, 0x01b07d03,
    0xa0081a40, 0x0401025a, 0x270a1970, 0x0210080b,
    0x00030061, 0x5c060220, 0x00340805, 0x00000000,
    0x00130061, 0x5e060220, 0x00340905, 0x00000000,
    0xa01b0040, 0x01000803, 0x00041c52, 0x10040660,
    0x0e2e02a4, 0x0a050605, 0x271d1a70, 0x08001b03,
    0x00030061, 0x2f060220, 0x00341b05, 0x00000000,
    0x00130061, 0x31060220, 0x00341c05, 0x00000000,
    0x00031c61, 0x5c260220, 0x00341005, 0x00000000,
    0x00131d61, 0x5e260220, 0x00341105, 0x00000000,
    0xa01f1d40, 0x10021d02, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x04440000,
    0xfb045c24, 0x003c0000, 0x00031961, 0x2f260220,
    0x00341f05, 0x00000000, 0x00131a61, 0x31260220,
    0x00342005, 0x00000000, 0x00042565, 0x21058220,
    0x02460a05, 0x00ffffff, 0x00040061, 0x51050020,
    0x00660a1f, 0x00000000, 0x80002501, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x04440000,
    0xfb042f24, 0x003c0000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00041a69, 0x2f058660,
    0x02462105, 0x00000006, 0xe0313668, 0x01a02103,
    0xa0531a40, 0x2f010302, 0x27411970, 0x03105303,
    0x00030061, 0x47060220, 0x00345305, 0x00000000,
    0x00130061, 0x49060220, 0x00345405, 0x00000000,
    0xa0390040, 0x01005303, 0xa03b0040, 0x02005303,
    0xa03d0040, 0x03805303, 0xa03f0040, 0x03005303,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x274d0070, 0x0210334b, 0x00041f52, 0x55040660,
    0x0e2e0324, 0x41053105, 0x00031e61, 0x43060220,
    0x00343905, 0x00000000, 0x00131f61, 0x45060220,
    0x00343a05, 0x00000000, 0x00031f61, 0x23060220,
    0x00343b05, 0x00000000, 0x00131f61, 0x25060220,
    0x00343c05, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00031f61, 0x27060220,
    0x00343d05, 0x00000000, 0x80103201, 0x00000000,
    0x00000000, 0x00000000, 0x00131f61, 0x29060220,
    0x00343e05, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00031f61, 0x2b060220,
    0x00343f05, 0x00000000, 0x80103201, 0x00000000,
    0x00000000, 0x00000000, 0x00131f61, 0x2d060220,
    0x00344005, 0x00000000, 0xa04f1f40, 0x02124d52,
    0x00031f61, 0x47260220, 0x00345505, 0x00000000,
    0x00130061, 0x49260220, 0x00345605, 0x00000000,
    0x00031b61, 0x0c260220, 0x00344f05, 0x00000000,
    0x00131c61, 0x0e260220, 0x00345005, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x57140000, 0xfb040c24, 0x00040000,
    0x00042665, 0x4b058220, 0x02460a05, 0x7fffffff,
    0x80002601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x03440000, 0xfb044724, 0x003c0000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00042769, 0x59058660, 0x02465705, 0x00000006,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xe05b3468, 0x01a05703, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa05d1a40, 0x5901026a,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x275f1970, 0x02105d4b, 0xa04d0040, 0x35005d02,
    0x00041a52, 0x61040660, 0x0e2e02e4, 0x5f055b05,
    0x27631a70, 0x5d004d03, 0x00030061, 0x13060220,
    0x00344d05, 0x00000000, 0x00130061, 0x15060220,
    0x00344e05, 0x00000000, 0xa0730040, 0x04004d03,
    0x27650070, 0x53003903, 0x27690070, 0x53003b03,
    0x00041e52, 0x4f040e68, 0x0e2e6105, 0x63053705,
    0x276d0070, 0x53003d03, 0x00031d61, 0x17060220,
    0x00347305, 0x00000000, 0x00131e61, 0x19060220,
    0x00347405, 0x00000000, 0x27710070, 0x53003f03,
    0xa0671f40, 0x55026502, 0xa06b1f40, 0x55026902,
    0x27750070, 0x4d007303, 0x00031f61, 0x13260220,
    0x00344f05, 0x00000000, 0x00131f61, 0x15260220,
    0x00345005, 0x00000000, 0xa06f1f40, 0x55026d02,
    0xa0731f40, 0x55027102, 0x00031f61, 0x43260220,
    0x00346705, 0x00000000, 0x00131f61, 0x45260220,
    0x00346805, 0x00000000, 0x00031f61, 0x23260220,
    0x00346b05, 0x00000000, 0x00131f61, 0x25260220,
    0x00346c05, 0x00000000, 0xa07c1f40, 0x4f027502,
    0x00031f61, 0x27260220, 0x00346f05, 0x00000000,
    0x00131f61, 0x29260220, 0x00347005, 0x00000000,
    0x00031f61, 0x2b260220, 0x00347305, 0x00000000,
    0x00131f61, 0x2d260220, 0x00347405, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x0b440000, 0xfb044324, 0x003c0000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0x00044a31, 0x43440000, 0xfb042324, 0x003c0000,
    0x00031d61, 0x17260220, 0x00347c05, 0x00000000,
    0x00131e61, 0x19260220, 0x00347d05, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x1b240000, 0xfb042724, 0x000c0000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x74140000, 0xfb042b24, 0x00040000,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x207a2941, 0x07020d00, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x20332941, 0x03020f00,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x205b2941, 0x05020b00, 0x80002a01, 0x00000000,
    0x00000000, 0x00000000, 0x20761f41, 0x0f024500,
    0x20782a41, 0x47020500, 0x202f0041, 0x0b024700,
    0x20312a41, 0x43020700, 0x203d0041, 0x0d024300,
    0x20590041, 0x45020300, 0x00042c65, 0x1f058220,
    0x02467405, 0x00ffffff, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x0004175b, 0x23040aa8,
    0x0a0a7a05, 0x05050f05, 0x0004175b, 0x40040aa8,
    0x0a0a3305, 0x07050b05, 0x0004175b, 0x57040aa8,
    0x0a0a5b05, 0x03050d05, 0x00040a5b, 0x7d040aa8,
    0x0a0a7805, 0x45050705, 0x0004175b, 0x3b040aa8,
    0x0a0a3105, 0x47050305, 0x00041b5b, 0x7b040aa8,
    0x0a0a7605, 0x0d054705, 0x0004175b, 0x5e040aa8,
    0x0a0a5905, 0x43050505, 0x0004005b, 0x34040aa8,
    0x0a0a2f05, 0x0f054305, 0x0004175b, 0x5c040aa8,
    0x0a0a3d05, 0x0b054505, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x20251741, 0x23004300,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x0004115b, 0x27040aa8, 0x0a0a2505, 0x0b057d05,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x0004115b, 0x29040aa8, 0x0a0a2705, 0x03057b05,
    0x00049d38, 0x60050aa0, 0x1a462905, 0x00460001,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x202b2d41, 0x60007b00, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x202d1641, 0x60003400,
    0x202f1641, 0x60005c00, 0x20310041, 0x60007d00,
    0x20370041, 0x60002300, 0x20390041, 0x60004000,
    0x20330041, 0x60003b00, 0x20350041, 0x60005e00,
    0x203b0041, 0x60005700, 0x2061e941, 0x11023100,
    0x20631441, 0x11023300, 0x20651441, 0x11023500,
    0x0004b85b, 0x67040aa8, 0x0a2a6105, 0x2b050905,
    0x0004135b, 0x69040aa8, 0x0a2a6305, 0x2d050905,
    0x00040b5b, 0x6b040aa8, 0x0a2a6505, 0x2f050905,
    0x0004ba5b, 0x25040aa8, 0x0a2a6705, 0x37054905,
    0x0004135b, 0x27040aa8, 0x0a2a6905, 0x39054905,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x0004135b, 0x29040aa8, 0x0a2a6b05, 0x3b054905,
    0x80002b01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x00000000, 0xfb0c1724, 0x003c1b44,
    0x00043e61, 0x1b050220, 0x00460305, 0x00000000,
    0x00043e61, 0x1d050220, 0x00460b05, 0x00000000,
    0x00043e61, 0x1f050220, 0x00464305, 0x00000000,
    0x00043e61, 0x21050220, 0x00460505, 0x00000000,
    0xa07d0040, 0x05004d03, 0x27570970, 0x4d007d03,
    0x00033e61, 0x17060220, 0x00347d05, 0x00000000,
    0x00133e61, 0x19060220, 0x00347e05, 0x00000000,
    0xa0591b40, 0x4f025702, 0x00031961, 0x17260220,
    0x00345905, 0x00000000, 0x00131a61, 0x19260220,
    0x00345a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044f31, 0x00000000,
    0xfb0c1724, 0x003c1b44, 0x00043f61, 0x1b050220,
    0x00460d05, 0x00000000, 0x00043f61, 0x1d050220,
    0x00464505, 0x00000000, 0x00043f61, 0x1f050220,
    0x00460705, 0x00000000, 0x00043f61, 0x21050220,
    0x00460f05, 0x00000000, 0xa05a0040, 0x06004d03,
    0x275c1970, 0x4d005a03, 0x00033f61, 0x17060220,
    0x00345a05, 0x00000000, 0x00133f61, 0x19060220,
    0x00345b05, 0x00000000, 0xa05e1b40, 0x4f025c02,
    0x00031961, 0x17260220, 0x00345e05, 0x00000000,
    0x00131a61, 0x19260220, 0x00345f05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb0c1724, 0x003c1b44,
    0x00040061, 0x23050220, 0x00464705, 0x00000000,
    0xa0611640, 0x07004d03, 0x27630970, 0x4d006103,
    0x00030061, 0x5d060220, 0x00346105, 0x00000000,
    0x00131761, 0x5f060220, 0x00346205, 0x00000000,
    0xa0650b40, 0x4f026302, 0x00031961, 0x5d260220,
    0x00346505, 0x00000000, 0x00131a61, 0x5f260220,
    0x00346605, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xfb0c5d24, 0x003c2344, 0xa0661340, 0x03405303,
    0x00040069, 0x6d058660, 0x02465105, 0x00000018,
    0x27680a70, 0x53006603, 0x00033261, 0x5e060220,
    0x00346605, 0x00000000, 0x00133261, 0x60060220,
    0x00346705, 0x00000000, 0xa06a0940, 0x55026802,
    0x00031961, 0x5e260220, 0x00346a05, 0x00000000,
    0x00131a61, 0x60260220, 0x00346b05, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x23340000, 0xfb045e24, 0x001c0000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x00041165, 0x6b058220, 0x02462305, 0x00ffffff,
    0xa06f2140, 0x4b002502, 0x00040061, 0x76050020,
    0x0066231f, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x201b1b66, 0x6d006b03,
    0x00043066, 0x1d058220, 0x02466b05, 0x20000000,
    0x27711c70, 0x25006f03, 0x00041c69, 0x79058660,
    0x02467605, 0x00000010, 0x00040070, 0x00018660,
    0x16464b05, 0x00000000, 0xa073b140, 0x27027102,
    0x11043062, 0x1f058220, 0x02466f05, 0x00000000,
    0x11041a62, 0x75058220, 0x02467305, 0x00000000,
    0x00041961, 0x77050120, 0x00567506, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x20211966, 0x79007703, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xfb0c1324, 0x003c1b44, 0xa07a0040, 0x01004d03,
    0x277c1970, 0x4d007a03, 0x00033261, 0x13060220,
    0x00347a05, 0x00000000, 0x00133261, 0x15060220,
    0x00347b05, 0x00000000, 0xa07e1b40, 0x4f027c02,
    0x00031961, 0x13260220, 0x00347e05, 0x00000000,
    0x00131a61, 0x15260220, 0x00347f05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x00000000, 0xfb0c1324, 0x003c2b44,
    0xa01b3240, 0x02004d03, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x271d1970, 0x4d001b03,
    0x00033361, 0x14060220, 0x00341b05, 0x00000000,
    0x80103001, 0x00000000, 0x00000000, 0x00000000,
    0x00133361, 0x16060220, 0x00341c05, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa01f1b40, 0x4f021d02, 0x00031961, 0x14260220,
    0x00341f05, 0x00000000, 0x00131a61, 0x16260220,
    0x00342005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xfb0c1424, 0x003c3344, 0x00040061, 0x3d050220,
    0x00460905, 0x00000000, 0x00040061, 0x3f050220,
    0x00461105, 0x00000000, 0x00040061, 0x41050220,
    0x00464905, 0x00000000, 0xa0203240, 0x03004d03,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x27221970, 0x4d002003, 0x00033461, 0x15060220,
    0x00342005, 0x00000000, 0x80103001, 0x00000000,
    0x00000000, 0x00000000, 0x00133461, 0x17060220,
    0x00342105, 0x00000000, 0xa0241b40, 0x4f022202,
    0x00031961, 0x15260220, 0x00342405, 0x00000000,
    0x00131a61, 0x17260220, 0x00342505, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x00000000, 0xfb0c1524, 0x003c3b44,
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
      .base.program_size = 4560,
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
const char *gfx125_bvh_build_leaf_create_HW_instance_nodes_sha1 = "ab75d09e0627a9906ba4e28b121ac78292a6fb9f";

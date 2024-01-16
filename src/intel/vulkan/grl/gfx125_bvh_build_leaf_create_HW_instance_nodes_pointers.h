#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_leaf_create_HW_instance_nodes_pointers_relocs[] = {
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

and(1)          g13<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(8)          g4<1>UW         0x76543210V                     { align1 WE_all 1Q };
mov(16)         g123<1>UD       g0.1<0,1,0>UD                   { align1 1H };
add(1)          g14<1>UD        g13<0,1,0>UD    0x00000000UD    { align1 WE_all 1N I@3 compacted };
add(1)          g15<1>UD        g13<0,1,0>UD    0x00000040UD    { align1 WE_all 1N compacted };
add(8)          g4.8<1>UW       g4<1,1,0>UW     0x0008UW        { align1 WE_all 1Q I@4 compacted };
shl(16)         g34<1>D         g123<8,8,1>D    0x00000004UD    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(1)         g1UD            g14UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g3UD            g15UD           nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g36<1>D         g4<8,8,1>UW                     { align1 1H };
add(16)         g38<1>D         g34<1,1,0>D     g36<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g67.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g5.1<2>F        g2.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g98.1<2>F       g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g7.1<2>F        g2.3<0,1,0>F                    { align1 2Q };
mov(8)          g100.1<2>F      g2.5<0,1,0>F                    { align1 1Q };
mov(8)          g32.1<2>F       g2.5<0,1,0>F                    { align1 2Q };
mov(8)          g119.1<2>F      g2.7<0,1,0>F                    { align1 1Q };
mov(8)          g121.1<2>F      g2.7<0,1,0>F                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g23.1<2>F       g3.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g25.1<2>F       g3.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g67<2>F         g2<0,1,0>F                      { align1 1Q F@7 compacted };
mov(8)          g5<2>F          g2<0,1,0>F                      { align1 2Q F@7 compacted };
mov(8)          g98<2>F         g2.2<0,1,0>F                    { align1 1Q F@7 compacted };
mov(8)          g7<2>F          g2.2<0,1,0>F                    { align1 2Q F@7 compacted };
mov(8)          g100<2>F        g2.4<0,1,0>F                    { align1 1Q F@7 compacted };
mov(8)          g32<2>F         g2.4<0,1,0>F                    { align1 2Q F@7 compacted };
mov(8)          g119<2>F        g2.6<0,1,0>F                    { align1 1Q F@7 compacted };
mov(8)          g121<2>F        g2.6<0,1,0>F                    { align1 2Q F@7 compacted };
mov(8)          g23<2>F         g3<0,1,0>F                      { align1 1Q F@7 compacted };
mov(8)          g25<2>F         g3<0,1,0>F                      { align1 2Q F@7 compacted };
add(8)          g69<1>D         g67<8,4,2>D     36D             { align1 1Q F@7 compacted };
add(8)          g40<1>D         g5<8,4,2>D      36D             { align1 2Q F@7 compacted };
cmp.l.f0.0(8)   g70<1>UD        g69<8,8,1>UD    g67<8,4,2>UD    { align1 1Q I@2 };
mov(8)          g9<2>UD         g69<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g41<1>UD        g40<8,8,1>UD    g5<8,4,2>UD     { align1 2Q I@3 };
mov(8)          g11<2>UD        g40<4,4,1>UD                    { align1 2Q };
add(8)          g71<1>D         -g70<8,8,1>D    g67.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g42<1>D         -g41<8,8,1>D    g5.1<8,4,2>D    { align1 2Q I@3 };
mov(8)          g9.1<2>UD       g71<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g11.1<2>UD      g42<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g43UD           g9UD            nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $0 };
cmp.l.f0.0(16)  null<1>UD       g38<8,8,1>UD    g43<8,8,1>UD    { align1 1H $0.dst };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
cmp.z.f0.0(16)  null<1>D        g38<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL1              { align1 1H };
shl(16)         g45<1>D         g43<8,8,1>D     0x00000001UD    { align1 1H };
add(8)          g72<1>D         g119<8,4,2>D    36D             { align1 1Q F@4 compacted };
add(8)          g47<1>D         g121<8,4,2>D    36D             { align1 2Q F@3 compacted };
cmp.l.f0.0(8)   g73<1>UD        g72<8,8,1>UD    g119<8,4,2>UD   { align1 1Q I@2 };
cmp.l.f0.0(8)   g48<1>UD        g47<8,8,1>UD    g121<8,4,2>UD   { align1 2Q I@2 };
mov(8)          g10<2>UD        g72<4,4,1>UD                    { align1 1Q $0.src };
mov(8)          g12<2>UD        g47<4,4,1>UD                    { align1 2Q $0.src };
add(8)          g74<1>D         -g73<8,8,1>D    g119.1<8,4,2>D  { align1 1Q I@4 };
add(8)          g49<1>D         -g48<8,8,1>D    g121.1<8,4,2>D  { align1 2Q I@4 };
mov(8)          g10.1<2>UD      g74<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g12.1<2>UD      g49<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g50UD           g10UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g14<1>D         g50<1,1,0>D     g45<1,1,0>D     { align1 1H $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g10UD           g14UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $0 };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
mul(16)         g51<1>D         g38<8,8,1>D     g3.4<0,1,0>UW   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mul(16)         g1<1>D          g38<8,8,1>D     g3.5<0,1,0>UW   { align1 1H F@3 };
mov(8)          g57<1>UD        g98.1<8,4,2>UD                  { align1 1Q F@7 };
mov(8)          g58<1>UD        g7.1<8,4,2>UD                   { align1 2Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g27<1>UD        g100.1<8,4,2>UD                 { align1 1Q F@6 };
mov(8)          g28<1>UD        g32.1<8,4,2>UD                  { align1 2Q F@5 };
mov(8)          g29<1>UD        g23.1<8,4,2>UD                  { align1 1Q F@2 };
mov(8)          g30<1>UD        g25.1<8,4,2>UD                  { align1 2Q F@1 };
mov(8)          g123<1>UD       g119.1<8,4,2>UD                 { align1 1Q F@4 };
mov(8)          g124<1>UD       g121.1<8,4,2>UD                 { align1 2Q F@3 };
add(8)          g127<1>D        g119<8,4,2>D    16D             { align1 1Q compacted };
add(8)          g31<1>D         g121<8,4,2>D    16D             { align1 2Q compacted };
shl(16)         g125<1>D        g38<8,8,1>D     0x00000007UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shr(16)         g13<1>UD        g38<1,1,0>UD    0x00000019UD    { align1 1H compacted };
add(16)         g51.1<2>UW      g51.1<16,8,2>UW g1<16,8,2>UW    { align1 1H };
mov(8)          g115<2>UD       g127<4,4,1>UD                   { align1 1Q I@5 };
mov(8)          g117<2>UD       g31<4,4,1>UD                    { align1 2Q I@5 };
add(16)         g53<1>D         g51<1,1,0>D     g3.3<0,1,0>D    { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g55<1>UD        g53<1,1,0>UD    g51<1,1,0>UD    { align1 1H I@1 compacted };
add(8)          g75<1>D         g98<8,4,2>D     g53<1,1,0>D     { align1 1Q compacted };
add(8)          g59<1>D         g7<8,4,2>D      g54<1,1,0>D     { align1 2Q compacted };
cmp.l.f0.0(8)   g60<1>UD        g75<8,8,1>UD    g98<8,4,2>UD    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g15<2>UD        g75<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g61<1>UD        g59<8,8,1>UD    g7<8,4,2>UD     { align1 2Q I@3 };
mov(8)          g17<2>UD        g59<4,4,1>UD                    { align1 2Q };
add3(16)        g62<1>D         g57<8,8,1>D     -g55<8,8,1>D    -g60<1,1,1>D { align1 1H I@2 };
mov(8)          g15.1<2>UD      g62<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g17.1<2>UD      g63<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g63UD           g15UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
shl(16)         g69<1>D         g63<8,8,1>D     0x00000005UD    { align1 1H $2.dst };
shr(16)         g71<1>UD        g63<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
add(8)          g73<1>D         g100<8,4,2>D    g69<1,1,0>D     { align1 1Q I@2 compacted };
add(8)          g74<1>D         g32<8,4,2>D     g70<1,1,0>D     { align1 2Q I@3 compacted };
cmp.l.f0.0(8)   g75<1>UD        g73<8,8,1>UD    g100<8,4,2>UD   { align1 1Q I@2 };
mov(8)          g19<2>UD        g73<4,4,1>UD                    { align1 1Q };
add(16)         g100<1>D        g73<1,1,0>D     16D             { align1 1H I@3 compacted };
cmp.l.f0.0(8)   g76<1>UD        g74<8,8,1>UD    g32<8,4,2>UD    { align1 2Q };
mov(8)          g21<2>UD        g74<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g102<1>UD       g100<1,1,0>UD   g73<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g107<2>UD       g100<4,4,1>UD                   { align1 1Q };
mov(8)          g109<2>UD       g101<4,4,1>UD                   { align1 2Q };
add3(16)        g98<1>D         g27<8,8,1>D     g71<8,8,1>D     -g75<1,1,1>D { align1 1H I@5 };
mov(8)          g19.1<2>UD      g98<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g21.1<2>UD      g99<4,4,1>UD                    { align1 2Q I@2 };
add(16)         g1<1>D          -g102<1,1,0>D   g98<1,1,0>D     { align1 1H I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g98UD           g19UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $3 };
mov(8)          g107.1<2>UD     g1<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g109.1<2>UD     g2<4,4,1>UD                     { align1 2Q I@2 };
and(16)         g7<1>UD         g104<8,8,1>UD   0x00ffffffUD    { align1 1H $3.dst };
mov(16)         g71<1>UD        g104.3<32,8,4>UB                { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g99UD           g107UD          nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
shl(16)         g15<1>D         g7<8,8,1>D      0x00000003UD    { align1 1H I@2 };
shr(16)         g17<1>UD        g7<1,1,0>UD     0x0000001dUD    { align1 1H $2.src compacted };
add(8)          g76<1>D         g23<8,4,2>D     g15<1,1,0>D     { align1 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $3.src };
add(8)          g19<1>D         g25<8,4,2>D     g16<1,1,0>D     { align1 2Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(8)   g20<1>UD        g76<8,8,1>UD    g23<8,4,2>UD    { align1 1Q I@2 };
mov(8)          g111<2>UD       g76<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g77<1>UD        g127<8,8,1>UD   g119<8,4,2>UD   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $3.src };
cmp.l.f0.0(8)   g21<1>UD        g19<8,8,1>UD    g25<8,4,2>UD    { align1 2Q I@4 };
mov(8)          g113<2>UD       g19<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(8)   g24<1>UD        g31<8,8,1>UD    g121<8,4,2>UD   { align1 2Q };
add(8)          g98<1>D         -g77<8,8,1>D    g119.1<8,4,2>D  { align1 1Q @4 $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add3(16)        g22<1>D         g29<8,8,1>D     g17<8,8,1>D     -g20<1,1,1>D { align1 1H I@4 };
add(8)          g25<1>D         -g24<8,8,1>D    g121.1<8,4,2>D  { align1 2Q I@3 };
mov(8)          g115.1<2>UD     g98<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g111.1<2>UD     g22<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g113.1<2>UD     g23<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g117.1<2>UD     g25<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g37UD           g111UD          nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g26UD           g115UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $6 };
and(16)         g69<1>UD        g105<8,8,1>UD   0x7fffffffUD    { align1 1H $4.dst };
mov(8)          g78<2>UD        g37<4,4,1>UD                    { align1 1Q $5.dst };
mov(8)          g80<2>UD        g38<4,4,1>UD                    { align1 2Q $5.dst };
add(16)         g55<1>D         g37<1,1,0>D     16D             { align1 1H compacted };
add(16)         g60<1>D         g37<1,1,0>D     32D             { align1 1H compacted };
add(16)         g98<1>D         g37<1,1,0>D     56D             { align1 1H $4.dst compacted };
add(16)         g32<1>D         g37<1,1,0>D     48D             { align1 1H compacted };
shl(16)         g28<1>D         g26<8,8,1>D     0x00000006UD    { align1 1H $6.dst };
shr(16)         g30<1>UD        g26<1,1,0>UD    0x0000001aUD    { align1 1H compacted };
mov(8)          g78.1<2>UD      g39<4,4,1>UD                    { align1 1Q @7 $5.dst };
mov(8)          g80.1<2>UD      g40<4,4,1>UD                    { align1 2Q @7 $5.dst };
mov(8)          g82<2>UD        g55<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g84<2>UD        g56<4,4,1>UD                    { align1 2Q I@7 };
mov(8)          g86<2>UD        g60<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g88<2>UD        g61<4,4,1>UD                    { align1 2Q I@7 };
mov(8)          g90<2>UD        g98<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g92<2>UD        g99<4,4,1>UD                    { align1 2Q };
mov(8)          g94<2>UD        g32<4,4,1>UD                    { align1 1Q };
mov(8)          g96<2>UD        g33<4,4,1>UD                    { align1 2Q };
add(8)          g34<1>D         g119<8,4,2>D    g28<1,1,0>D     { align1 1Q compacted };
add(8)          g35<1>D         g121<8,4,2>D    g29<1,1,0>D     { align1 2Q compacted };
send(16)        g41UD           g78UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $7 };
cmp.l.f0.0(8)   g49<1>UD        g34<8,8,1>UD    g119<8,4,2>UD   { align1 1Q I@2 };
cmp.l.f0.0(8)   g50<1>UD        g35<8,8,1>UD    g121<8,4,2>UD   { align1 2Q I@2 };
add(16)         g73<1>D         g34<1,1,0>D     g125<1,1,0>D    { align1 1H compacted };
add3(16)        g51<1>D         g123<8,8,1>D    g30<8,8,1>D     -g49<1,1,1>D { align1 1H I@2 };
cmp.l.f0.0(16)  g53<1>UD        g73<1,1,0>UD    g34<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g9<2>UD         g73<4,4,1>UD                    { align1 1Q $0.src };
mov(8)          g11<2>UD        g74<4,4,1>UD                    { align1 2Q $0.src };
add(16)         g106<1>D        g73<1,1,0>D     64D             { align1 1H $4.src compacted };
cmp.l.f0.0(16)  g57<1>UD        g55<1,1,0>UD    0x00000010UD    { align1 1H compacted };
cmp.l.f0.0(16)  g62<1>UD        g60<1,1,0>UD    0x00000020UD    { align1 1H compacted };
add3(16)        g75<1>D         g51<8,8,1>D     g13<8,8,1>D     -g53<1,1,1>D { align1 1H I@6 };
cmp.l.f0.0(16)  g100<1>UD       g98<1,1,0>UD    g37<1,1,0>UD    { align1 1H $4.dst compacted };
mov(8)          g65<2>UD        g106<4,4,1>UD                   { align1 1Q I@5 };
mov(8)          g67<2>UD        g107<4,4,1>UD                   { align1 2Q I@6 };
cmp.l.f0.0(16)  g104<1>UD       g32<1,1,0>UD    g37<1,1,0>UD    { align1 1H $4.dst compacted };
add(16)         g59<1>D         -g57<1,1,0>D    g39<1,1,0>D     { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g77<1>D         -g62<1,1,0>D    g39<1,1,0>D     { align1 1H I@7 compacted };
cmp.l.f0.0(16)  g108<1>UD       g106<1,1,0>UD   g73<1,1,0>UD    { align1 1H $4.src compacted };
mov(8)          g9.1<2>UD       g75<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g11.1<2>UD      g76<4,4,1>UD                    { align1 2Q I@7 };
add(16)         g102<1>D        -g100<1,1,0>D   g39<1,1,0>D     { align1 1H @7 $4.dst compacted };
add(16)         g106<1>D        -g104<1,1,0>D   g39<1,1,0>D     { align1 1H I@7 compacted };
mov(8)          g82.1<2>UD      g59<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g84.1<2>UD      g60<4,4,1>UD                    { align1 2Q I@7 };
mov(8)          g86.1<2>UD      g77<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g88.1<2>UD      g78<4,4,1>UD                    { align1 2Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g115<1>D        -g108<1,1,0>D   g75<1,1,0>D     { align1 1H I@7 compacted };
mov(8)          g90.1<2>UD      g102<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g92.1<2>UD      g103<4,4,1>UD                   { align1 2Q I@7 };
mov(8)          g94.1<2>UD      g106<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g96.1<2>UD      g107<4,4,1>UD                   { align1 2Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
send(16)        g49UD           g82UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
send(16)        g57UD           g86UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $9 };
mov(8)          g65.1<2>UD      g115<4,4,1>UD                   { align1 1Q I@5 };
mov(8)          g67.1<2>UD      g116<4,4,1>UD                   { align1 2Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g1UD            g90UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g107UD          g94UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mul(16)         g113<1>F        -g51<1,1,0>F    g45<1,1,0>F     { align1 1H $8.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
mul(16)         g15<1>F         -g53<1,1,0>F    g41<1,1,0>F     { align1 1H $8.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
mul(16)         g79<1>F         -g49<1,1,0>F    g43<1,1,0>F     { align1 1H $8.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mul(16)         g109<1>F        -g59<1,1,0>F    g53<1,1,0>F     { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mul(16)         g111<1>F        -g43<1,1,0>F    g61<1,1,0>F     { align1 1H $9.dst compacted };
mul(16)         g125<1>F        -g61<1,1,0>F    g49<1,1,0>F     { align1 1H compacted };
mul(16)         g13<1>F         -g45<1,1,0>F    g57<1,1,0>F     { align1 1H $9.dst compacted };
mul(16)         g31<1>F         -g57<1,1,0>F    g51<1,1,0>F     { align1 1H compacted };
mul(16)         g35<1>F         -g41<1,1,0>F    g59<1,1,0>F     { align1 1H compacted };
and(16)         g5<1>UD         g107<8,8,1>UD   0x00ffffffUD    { align1 1H $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mad(16)         g118<1>F        g113<8,8,1>F    g53<8,8,1>F     g43<1,1,1>F { align1 1H F@7 };
mad(16)         g33<1>F         g15<8,8,1>F     g49<8,8,1>F     g45<1,1,1>F { align1 1H F@7 };
mad(16)         g77<1>F         g79<8,8,1>F     g51<8,8,1>F     g41<1,1,1>F { align1 1H A@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mad(16)         g116<1>F        g111<8,8,1>F    g45<8,8,1>F     g59<1,1,1>F { align1 1H A@2 };
mad(16)         g21<1>F         g125<8,8,1>F    g57<8,8,1>F     g53<1,1,1>F { align1 1H F@7 };
mad(16)         g29<1>F         g13<8,8,1>F     g41<8,8,1>F     g61<1,1,1>F { align1 1H F@7 };
mad(16)         g114<1>F        g109<8,8,1>F    g61<8,8,1>F     g51<1,1,1>F { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mad(16)         g82<1>F         g35<8,8,1>F     g43<8,8,1>F     g57<1,1,1>F { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mad(16)         g80<1>F         g31<8,8,1>F     g59<8,8,1>F     g49<1,1,1>F { align1 1H F@7 };
mul(16)         g120<1>F        g57<1,1,0>F     g118<1,1,0>F    { align1 1H F@7 compacted };
mad(16)         g122<1>F        g120<8,8,1>F    g116<8,8,1>F    g49<1,1,1>F { align1 1H F@1 };
mad(16)         g124<1>F        g122<8,8,1>F    g114<8,8,1>F    g41<1,1,1>F { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
math inv(16)    g84<1>F         g124<8,8,1>F    null<8,8,1>F    { align1 1H @1 $12 };
mul(16)         g13<1>F         g114<1,1,0>F    g84<1,1,0>F     { align1 1H $12.dst compacted };
mul(16)         g15<1>F         g21<1,1,0>F     g84<1,1,0>F     { align1 1H F@7 compacted };
mul(16)         g17<1>F         g80<1,1,0>F     g84<1,1,0>F     { align1 1H F@6 compacted };
mul(16)         g19<1>F         g116<1,1,0>F    g84<1,1,0>F     { align1 1H compacted };
mul(16)         g23<1>F         g82<1,1,0>F     g84<1,1,0>F     { align1 1H F@7 compacted };
mul(16)         g25<1>F         g118<1,1,0>F    g84<1,1,0>F     { align1 1H compacted };
mul(16)         g27<1>F         g33<1,1,0>F     g84<1,1,0>F     { align1 1H compacted };
mul(16)         g21<1>F         g29<1,1,0>F     g84<1,1,0>F     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mul(16)         g91<1>F         g13<1,1,0>F     g47<1,1,0>F     { align1 1H @7 $7.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mul(16)         g93<1>F         g15<1,1,0>F     g47<1,1,0>F     { align1 1H F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mul(16)         g95<1>F         g17<1,1,0>F     g47<1,1,0>F     { align1 1H F@7 compacted };
mul(16)         g29<1>F         g77<1,1,0>F     g84<1,1,0>F     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mul(16)         g89<1>F         g23<1,1,0>F     g55<1,1,0>F     { align1 1H @7 $8.dst compacted };
mul(16)         g79<1>F         g25<1,1,0>F     g63<1,1,0>F     { align1 1H @7 $9.dst compacted };
mul(16)         g81<1>F         g27<1,1,0>F     g63<1,1,0>F     { align1 1H F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mul(16)         g87<1>F         g21<1,1,0>F     g55<1,1,0>F     { align1 1H F@7 compacted };
mul(16)         g85<1>F         g19<1,1,0>F     g55<1,1,0>F     { align1 1H $9.src compacted };
mul(16)         g83<1>F         g29<1,1,0>F     g63<1,1,0>F     { align1 1H F@6 compacted };
add(16)         g101<1>F        g95<1,1,0>F     g89<1,1,0>F     { align1 1H A@6 compacted };
add(16)         g99<1>F         g93<1,1,0>F     g87<1,1,0>F     { align1 1H F@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(16)         g97<1>F         g91<1,1,0>F     g85<1,1,0>F     { align1 1H F@4 compacted };
add(16)         g77<1>F         g79<1,1,0>F     g97<1,1,0>F     { align1 1H F@1 compacted };
add(16)         g79<1>F         g81<1,1,0>F     g99<1,1,0>F     { align1 1H F@3 compacted };
add(16)         g81<1>F         g83<1,1,0>F     g101<1,1,0>F    { align1 1H F@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g65UD           g1UD            0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $13 };
add(16)         g116<1>D        g73<1,1,0>D     80D             { align1 1H compacted };
mov(16)         g1<1>D          g41<8,8,1>D                     { align1 1H $13.src };
mov(16)         g3<1>D          g49<8,8,1>D                     { align1 1H $13.src };
mov(16)         g5<1>D          g57<8,8,1>D                     { align1 1H $13.src };
mov(16)         g7<1>D          g43<8,8,1>D                     { align1 1H $13.src };
cmp.l.f0.0(16)  g118<1>UD       g116<1,1,0>UD   g73<1,1,0>UD    { align1 1H I@5 compacted };
mov(8)          g65<2>UD        g116<4,4,1>UD                   { align1 1Q $13.src };
mov(8)          g67<2>UD        g117<4,4,1>UD                   { align1 2Q $13.src };
add(16)         g120<1>D        -g118<1,1,0>D   g75<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g65.1<2>UD      g120<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g67.1<2>UD      g121<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g65UD           g1UD            0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $14 };
add(16)         g121<1>D        g73<1,1,0>D     96D             { align1 1H compacted };
mov(16)         g1<1>D          g51<8,8,1>D                     { align1 1H $14.src };
mov(16)         g3<1>D          g59<8,8,1>D                     { align1 1H $14.src };
mov(16)         g5<1>D          g45<8,8,1>D                     { align1 1H $14.src };
mov(16)         g7<1>D          g53<8,8,1>D                     { align1 1H $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
cmp.l.f0.0(16)  g123<1>UD       g121<1,1,0>UD   g73<1,1,0>UD    { align1 1H I@5 compacted };
mov(8)          g65<2>UD        g121<4,4,1>UD                   { align1 1Q $14.src };
mov(8)          g67<2>UD        g122<4,4,1>UD                   { align1 2Q $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g125<1>D        -g123<1,1,0>D   g75<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g65.1<2>UD      g125<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g67.1<2>UD      g126<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g65UD           g1UD            0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $15 };
add(16)         g126<1>D        g73<1,1,0>D     112D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g3<1>F          -g77<1,1,0>F                    { align1 1H F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g5<1>F          -g79<1,1,0>F                    { align1 1H F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g7<1>F          -g81<1,1,0>F                    { align1 1H F@3 compacted };
mov(16)         g1<1>D          g61<8,8,1>D                     { align1 1H $15.src };
cmp.l.f0.0(16)  g77<1>UD        g126<1,1,0>UD   g73<1,1,0>UD    { align1 1H A@2 compacted };
mov(8)          g65<2>UD        g126<4,4,1>UD                   { align1 1Q $15.src };
mov(8)          g67<2>UD        g127<4,4,1>UD                   { align1 2Q $15.src };
add(16)         g79<1>D         -g77<1,1,0>D    g75<1,1,0>D     { align1 1H A@2 compacted };
mov(8)          g65.1<2>UD      g79<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g67.1<2>UD      g80<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g65UD           g1UD            0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $0 };
add(16)         g81<1>D         g37<1,1,0>D     52D             { align1 1H F@1 compacted };
shl(16)         g93<1>D         g71<8,8,1>D     0x00000018UD    { align1 1H F@7 };
cmp.l.f0.0(16)  g88<1>UD        g81<1,1,0>UD    g37<1,1,0>UD    { align1 1H A@2 compacted };
mov(8)          g84<2>UD        g81<4,4,1>UD                    { align1 1Q F@4 };
mov(8)          g86<2>UD        g82<4,4,1>UD                    { align1 2Q F@7 };
add(16)         g90<1>D         -g88<1,1,0>D    g39<1,1,0>D     { align1 1H A@3 compacted };
mov(8)          g84.1<2>UD      g90<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g86.1<2>UD      g91<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g77UD           g84UD           nullUD          0x08607582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyz, L1STATE_L3MOCS dst_len = 6, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
and(16)         g91<1>UD        g77<8,8,1>UD    0x00ffffffUD    { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
add(16)         g95<1>D         g79<1,1,0>D     g69<1,1,0>D     { align1 1H F@7 compacted };
mov(16)         g102<1>UD       g77.3<32,8,4>UB                 { align1 1H F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
or(16)          g1<1>UD         g91<1,1,0>UD    g93<1,1,0>UD    { align1 1H I@3 compacted };
or(16)          g3<1>UD         g91<8,8,1>UD    0x20000000UD    { align1 1H $0.src };
cmp.l.f0.0(16)  g97<1>UD        g95<1,1,0>UD    g79<1,1,0>UD    { align1 1H A@4 compacted };
shl(16)         g105<1>D        g102<8,8,1>D    0x00000010UD    { align1 1H I@4 };
cmp.z.f0.0(16)  null<1>D        g69<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
add(16)         g99<1>D         -g97<1,1,0>D    g81<1,1,0>D     { align1 1H A@3 compacted };
(-f0.0) sel(16) g5<1>UD         g95<8,8,1>UD    0x00000000UD    { align1 1H $0.src };
(-f0.0) sel(16) g101<1>UD       g99<8,8,1>UD    0x00000000UD    { align1 1H A@2 };
mov(16)         g103<1>UD       g101<16,8,2>UW                  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
or(16)          g7<1>UD         g103<1,1,0>UD   g105<1,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g9UD            g1UD            0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $0 };
add(16)         g106<1>D        g73<1,1,0>D     16D             { align1 1H compacted };
cmp.l.f0.0(16)  g108<1>UD       g106<1,1,0>UD   g73<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g37<2>UD        g106<4,4,1>UD                   { align1 1Q };
mov(8)          g39<2>UD        g107<4,4,1>UD                   { align1 2Q };
add(16)         g110<1>D        -g108<1,1,0>D   g75<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g37.1<2>UD      g110<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g39.1<2>UD      g111<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g37UD           g13UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $0 };
add(16)         g111<1>D        g73<1,1,0>D     32D             { align1 1H compacted };
cmp.l.f0.0(16)  g113<1>UD       g111<1,1,0>UD   g73<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g65<2>UD        g111<4,4,1>UD                   { align1 1Q $0.src };
mov(8)          g67<2>UD        g112<4,4,1>UD                   { align1 2Q $0.src };
add(16)         g115<1>D        -g113<1,1,0>D   g75<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g65.1<2>UD      g115<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g67.1<2>UD      g116<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g65UD           g21UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $2 };
add(16)         g116<1>D        g73<1,1,0>D     48D             { align1 1H compacted };
mov(16)         g31<1>D         g47<8,8,1>D                     { align1 1H };
mov(16)         g33<1>D         g55<8,8,1>D                     { align1 1H };
mov(16)         g35<1>D         g63<8,8,1>D                     { align1 1H };
cmp.l.f0.0(16)  g118<1>UD       g116<1,1,0>UD   g73<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g66<2>UD        g116<4,4,1>UD                   { align1 1Q $2.src };
mov(8)          g68<2>UD        g117<4,4,1>UD                   { align1 2Q $2.src };
add(16)         g120<1>D        -g118<1,1,0>D   g75<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g66.1<2>UD      g120<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g68.1<2>UD      g121<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g66UD           g29UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $3 };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_leaf_create_HW_instance_nodes_pointers_code[] = {
    0x80000065, 0x0d058220, 0x02000004, 0xffffffc0,
    0x80030061, 0x04054410, 0x00000000, 0x76543210,
    0x00040061, 0x7b050220, 0x00000024, 0x00000000,
    0xe20e1b40, 0x00010d03, 0xe20f0040, 0x04010d03,
    0x64041c40, 0x00800495, 0x00041c69, 0x22058660,
    0x02467b05, 0x00000004, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa000e0c, 0x00340000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x030c0000,
    0xfa000f0c, 0x00300000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x24050160,
    0x00460405, 0x00000000, 0xa0261940, 0x24002202,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x21430061, 0x001102cc, 0x2a050061, 0x001102cc,
    0x00030061, 0x62260aa0, 0x00000264, 0x00000000,
    0x00130061, 0x07260aa0, 0x00000264, 0x00000000,
    0x00030061, 0x64260aa0, 0x000002a4, 0x00000000,
    0x00130061, 0x20260aa0, 0x000002a4, 0x00000000,
    0x00030061, 0x77260aa0, 0x000002e4, 0x00000000,
    0x00130061, 0x79260aa0, 0x000002e4, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x21170061, 0x001103cc, 0x2a190061, 0x001103cc,
    0x21431761, 0x00110204, 0x2a051761, 0x00110204,
    0x21621761, 0x00110244, 0x2a071761, 0x00110244,
    0x21641761, 0x0011025c, 0x2a201761, 0x0011025c,
    0x21771761, 0x0011026c, 0x2a791761, 0x0011026c,
    0x21171761, 0x00110304, 0x2a191761, 0x00110304,
    0xa1451740, 0x024e4303, 0xaa281740, 0x024e0503,
    0x00031a70, 0x46050220, 0x52464505, 0x00444306,
    0x00030061, 0x09060220, 0x00344505, 0x00000000,
    0x00131b70, 0x29050220, 0x52462805, 0x00440506,
    0x00130061, 0x0b060220, 0x00342805, 0x00000000,
    0x00031c40, 0x47052660, 0x06464605, 0x00444326,
    0x00131b40, 0x2a052660, 0x06462905, 0x00440526,
    0x00031a61, 0x09260220, 0x00344705, 0x00000000,
    0x00131a61, 0x0b260220, 0x00342a05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x2b140000, 0xfb040924, 0x00040000,
    0x00042070, 0x00010220, 0x52462605, 0x00462b05,
    0x01040022, 0x0001c060, 0x00001270, 0x00001270,
    0x00040070, 0x00018660, 0x16462605, 0x00000000,
    0x01040022, 0x0001c060, 0x00000118, 0x00000118,
    0x00040069, 0x2d058660, 0x02462b05, 0x00000001,
    0xa1481440, 0x024e7703, 0xaa2f1340, 0x024e7903,
    0x00031a70, 0x49050220, 0x52464805, 0x00447706,
    0x00131a70, 0x30050220, 0x52462f05, 0x00447906,
    0x00033061, 0x0a060220, 0x00344805, 0x00000000,
    0x00133061, 0x0c060220, 0x00342f05, 0x00000000,
    0x00031c40, 0x4a052660, 0x06464905, 0x00447726,
    0x00131c40, 0x31052660, 0x06463005, 0x00447926,
    0x00031a61, 0x0a260220, 0x00344a05, 0x00000000,
    0x00131a61, 0x0c260220, 0x00343105, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x32140000, 0xfb040a24, 0x00040000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa00e2140, 0x2d003202, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x00000000,
    0xfb0c0a24, 0x00040e14, 0x00040025, 0x00004600,
    0x00000000, 0x00001138, 0x00040041, 0x33050660,
    0x01462605, 0x00000344, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00041341, 0x01050660,
    0x01462605, 0x00000354, 0x00031761, 0x39050220,
    0x00446226, 0x00000000, 0x00131761, 0x3a050220,
    0x00440726, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00031661, 0x1b050220,
    0x00446426, 0x00000000, 0x00131561, 0x1c050220,
    0x00442026, 0x00000000, 0x00031261, 0x1d050220,
    0x00441726, 0x00000000, 0x00131161, 0x1e050220,
    0x00441926, 0x00000000, 0x00031461, 0x7b050220,
    0x00447726, 0x00000000, 0x00131361, 0x7c050220,
    0x00447926, 0x00000000, 0xa17f0040, 0x010e7703,
    0xaa1f0040, 0x010e7903, 0x00040069, 0x7d058660,
    0x02462605, 0x00000007, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xe00d0068, 0x01902603,
    0x00040040, 0x33160110, 0x01563316, 0x00560106,
    0x00031d61, 0x73060220, 0x00347f05, 0x00000000,
    0x00131d61, 0x75060220, 0x00341f05, 0x00000000,
    0xa0351b40, 0x0310331a, 0x27371970, 0x33003503,
    0xa14b0040, 0x350e6202, 0xaa3b0040, 0x360e0702,
    0x00031a70, 0x3c050220, 0x52464b05, 0x00446206,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x0f060220, 0x00344b05, 0x00000000,
    0x00131b70, 0x3d050220, 0x52463b05, 0x00440706,
    0x00130061, 0x11060220, 0x00343b05, 0x00000000,
    0x00041a52, 0x3e040e68, 0x0eae3905, 0x3c053705,
    0x00031961, 0x0f260220, 0x00343e05, 0x00000000,
    0x00131a61, 0x11260220, 0x00343f05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x3f140000, 0xfb040f24, 0x00040000,
    0x00042269, 0x45058660, 0x02463f05, 0x00000005,
    0xe0470068, 0x01b03f03, 0xa1491a40, 0x450e6402,
    0xaa4a1b40, 0x460e2002, 0x00031a70, 0x4b050220,
    0x52464905, 0x00446406, 0x00030061, 0x13060220,
    0x00344905, 0x00000000, 0xa0641b40, 0x01004903,
    0x00130070, 0x4c050220, 0x52464a05, 0x00442006,
    0x00130061, 0x15060220, 0x00344a05, 0x00000000,
    0x27661b70, 0x49006403, 0x00030061, 0x6b060220,
    0x00346405, 0x00000000, 0x00130061, 0x6d060220,
    0x00346505, 0x00000000, 0x00041d52, 0x62040e68,
    0x0e2e1b05, 0x4b054705, 0x00031961, 0x13260220,
    0x00346205, 0x00000000, 0x00131a61, 0x15260220,
    0x00346305, 0x00000000, 0xa0011e40, 0x62026602,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x62440000, 0xfb041324, 0x003c0000,
    0x00031961, 0x6b260220, 0x00340105, 0x00000000,
    0x00131a61, 0x6d260220, 0x00340205, 0x00000000,
    0x00042365, 0x07058220, 0x02466805, 0x00ffffff,
    0x00040061, 0x47050020, 0x0066681f, 0x00000000,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x63440000, 0xfb046b24, 0x003c0000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00041a69, 0x0f058660, 0x02460705, 0x00000003,
    0xe0113268, 0x01d00703, 0xa14c1a40, 0x0f0e1702,
    0x80103301, 0x00000000, 0x00000000, 0x00000000,
    0xaa131b40, 0x100e1902, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00031a70, 0x14050220,
    0x52464c05, 0x00441706, 0x00030061, 0x6f060220,
    0x00344c05, 0x00000000, 0x00030070, 0x4d050220,
    0x52467f05, 0x00447706, 0x80103301, 0x00000000,
    0x00000000, 0x00000000, 0x00131c70, 0x15050220,
    0x52461305, 0x00441906, 0x00130061, 0x71060220,
    0x00341305, 0x00000000, 0x00130070, 0x18050220,
    0x52461f05, 0x00447906, 0x0003c340, 0x62052660,
    0x06464d05, 0x00447726, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00041c52, 0x16040e68,
    0x0e2e1d05, 0x14051105, 0x00131b40, 0x19052660,
    0x06461805, 0x00447926, 0x00031b61, 0x73260220,
    0x00346205, 0x00000000, 0x00031b61, 0x6f260220,
    0x00341605, 0x00000000, 0x00131c61, 0x71260220,
    0x00341705, 0x00000000, 0x00131c61, 0x75260220,
    0x00341905, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x25240000,
    0xfb046f24, 0x000c0000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x1a140000,
    0xfb047324, 0x00040000, 0x00042465, 0x45058220,
    0x02466905, 0x7fffffff, 0x00032561, 0x4e060220,
    0x00342505, 0x00000000, 0x00132561, 0x50060220,
    0x00342605, 0x00000000, 0xa0370040, 0x01002503,
    0xa03c0040, 0x02002503, 0xa0622440, 0x03802503,
    0xa0200040, 0x03002503, 0x00042669, 0x1c058660,
    0x02461a05, 0x00000006, 0xe01e0068, 0x01a01a03,
    0x0003f561, 0x4e260220, 0x00342705, 0x00000000,
    0x0013f561, 0x50260220, 0x00342805, 0x00000000,
    0x00031f61, 0x52060220, 0x00343705, 0x00000000,
    0x00131f61, 0x54060220, 0x00343805, 0x00000000,
    0x00031f61, 0x56060220, 0x00343c05, 0x00000000,
    0x00131f61, 0x58060220, 0x00343d05, 0x00000000,
    0x00031f61, 0x5a060220, 0x00346205, 0x00000000,
    0x00130061, 0x5c060220, 0x00346305, 0x00000000,
    0x00030061, 0x5e060220, 0x00342005, 0x00000000,
    0x00130061, 0x60060220, 0x00342105, 0x00000000,
    0xa1220040, 0x1c0e7702, 0xaa230040, 0x1d0e7902,
    0x00044731, 0x29440000, 0xfb044e24, 0x003c0000,
    0x00031a70, 0x31050220, 0x52462205, 0x00447706,
    0x00131a70, 0x32050220, 0x52462305, 0x00447906,
    0xa0490040, 0x7d002202, 0x00041a52, 0x33040e68,
    0x0e2e7b05, 0x31051e05, 0x27351a70, 0x22004903,
    0x00033061, 0x09060220, 0x00344905, 0x00000000,
    0x00133061, 0x0b060220, 0x00344a05, 0x00000000,
    0xa06a3440, 0x04004903, 0xe7390070, 0x01003703,
    0xe73e0070, 0x02003c03, 0x00041e52, 0x4b040e68,
    0x0e2e3305, 0x35050d05, 0x27642470, 0x25006203,
    0x00031d61, 0x41060220, 0x00346a05, 0x00000000,
    0x00131e61, 0x43060220, 0x00346b05, 0x00000000,
    0x27682470, 0x25002003, 0xa03b1f40, 0x27023902,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xa04d1f40, 0x27023e02, 0x276c3470, 0x49006a03,
    0x00031f61, 0x09260220, 0x00344b05, 0x00000000,
    0x00131f61, 0x0b260220, 0x00344c05, 0x00000000,
    0xa066f440, 0x27026402, 0xa06a1f40, 0x27026802,
    0x00031f61, 0x52260220, 0x00343b05, 0x00000000,
    0x00131f61, 0x54260220, 0x00343c05, 0x00000000,
    0x00031f61, 0x56260220, 0x00344d05, 0x00000000,
    0x00131f61, 0x58260220, 0x00344e05, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa0731f40, 0x4b026c02, 0x00031f61, 0x5a260220,
    0x00346605, 0x00000000, 0x00131f61, 0x5c260220,
    0x00346705, 0x00000000, 0x00031f61, 0x5e260220,
    0x00346a05, 0x00000000, 0x00131f61, 0x60260220,
    0x00346b05, 0x00000000, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x31440000,
    0xfb045224, 0x003c0000, 0x80001e01, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x39440000,
    0xfb045624, 0x003c0000, 0x00031d61, 0x41260220,
    0x00347305, 0x00000000, 0x00131e61, 0x43260220,
    0x00347405, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044a31, 0x01240000,
    0xfb045a24, 0x000c0000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x6b140000,
    0xfb045e24, 0x00040000, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x20712841, 0x2d023300,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x200f2841, 0x29023500, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x204f2841, 0x2b023100,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x206d1f41, 0x35023b00, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x206f2941, 0x3d022b00,
    0x207d0041, 0x31023d00, 0x200d2941, 0x39022d00,
    0x201f0041, 0x33023900, 0x20230041, 0x3b022900,
    0x00042b65, 0x05058220, 0x02466b05, 0x00ffffff,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x0004175b, 0x76040aa8, 0x0a0a7105, 0x2b053505,
    0x0004175b, 0x21040aa8, 0x0a0a0f05, 0x2d053105,
    0x00040f5b, 0x4d040aa8, 0x0a0a4f05, 0x29053305,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00040a5b, 0x74040aa8, 0x0a0a6f05, 0x3b052d05,
    0x0004175b, 0x15040aa8, 0x0a0a7d05, 0x35053905,
    0x0004175b, 0x1d040aa8, 0x0a0a0d05, 0x3d052905,
    0x00041b5b, 0x72040aa8, 0x0a0a6d05, 0x33053d05,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x0004175b, 0x52040aa8, 0x0a0a2305, 0x39052b05,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x0004175b, 0x50040aa8, 0x0a0a1f05, 0x31053b05,
    0x20781741, 0x76003900, 0x0004115b, 0x7a040aa8,
    0x0a0a7805, 0x31057405, 0x0004115b, 0x7c040aa8,
    0x0a0a7a05, 0x29057205, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00049c38, 0x54050aa0,
    0x1a467c05, 0x00460001, 0x200d2c41, 0x54007200,
    0x200f1741, 0x54001500, 0x20111641, 0x54005000,
    0x20130041, 0x54007400, 0x20171741, 0x54005200,
    0x20190041, 0x54007600, 0x201b0041, 0x54002100,
    0x20150041, 0x54001d00, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x205bf741, 0x2f000d00,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x205d1741, 0x2f000f00, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x205f1741, 0x2f001100,
    0x201d0041, 0x54004d00, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x2059f841, 0x37001700,
    0x204ff941, 0x3f001900, 0x20511741, 0x3f001b00,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x20571741, 0x37001500, 0x20553941, 0x37001300,
    0x20531641, 0x3f001d00, 0x20650e40, 0x59005f00,
    0x20631440, 0x57005d00, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x20611440, 0x55005b00,
    0x204d1140, 0x61004f00, 0x204f1340, 0x63005100,
    0x20511540, 0x65005300, 0x80002a01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044d31, 0x00000000,
    0xfb0c4124, 0x003c0144, 0xa0740040, 0x05004903,
    0x00043d61, 0x01050660, 0x00462905, 0x00000000,
    0x00043d61, 0x03050660, 0x00463105, 0x00000000,
    0x00043d61, 0x05050660, 0x00463905, 0x00000000,
    0x00043d61, 0x07050660, 0x00462b05, 0x00000000,
    0x27761d70, 0x49007403, 0x00033d61, 0x41060220,
    0x00347405, 0x00000000, 0x00133d61, 0x43060220,
    0x00347505, 0x00000000, 0xa0781b40, 0x4b027602,
    0x00031961, 0x41260220, 0x00347805, 0x00000000,
    0x00131a61, 0x43260220, 0x00347905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x00000000, 0xfb0c4124, 0x003c0144,
    0xa0790040, 0x06004903, 0x00043e61, 0x01050660,
    0x00463305, 0x00000000, 0x00043e61, 0x03050660,
    0x00463b05, 0x00000000, 0x00043e61, 0x05050660,
    0x00462d05, 0x00000000, 0x00043e61, 0x07050660,
    0x00463505, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x277b1d70, 0x49007903,
    0x00033e61, 0x41060220, 0x00347905, 0x00000000,
    0x00133e61, 0x43060220, 0x00347a05, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0xa07d1b40, 0x4b027b02, 0x00031961, 0x41260220,
    0x00347d05, 0x00000000, 0x00131a61, 0x43260220,
    0x00347e05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044f31, 0x00000000,
    0xfb0c4124, 0x003c0144, 0xa07e0040, 0x07004903,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x60031361, 0x00124d00, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x60051361, 0x00124f00,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x60071361, 0x00125100, 0x00043f61, 0x01050660,
    0x00463d05, 0x00000000, 0x274d0a70, 0x49007e03,
    0x00033f61, 0x41060220, 0x00347e05, 0x00000000,
    0x00133f61, 0x43060220, 0x00347f05, 0x00000000,
    0xa04f0a40, 0x4b024d02, 0x00031961, 0x41260220,
    0x00344f05, 0x00000000, 0x00131a61, 0x43260220,
    0x00345005, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x00000000,
    0xfb0c4124, 0x003c0144, 0xa0511140, 0x03402503,
    0x00041769, 0x5d058660, 0x02464705, 0x00000018,
    0x27580a70, 0x25005103, 0x00031461, 0x54060220,
    0x00345105, 0x00000000, 0x00131761, 0x56060220,
    0x00345205, 0x00000000, 0xa05a0b40, 0x27025802,
    0x00031961, 0x54260220, 0x00345a05, 0x00000000,
    0x00131a61, 0x56260220, 0x00345b05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x4d340000, 0xfb045424, 0x001c0000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x00041765, 0x5b058220, 0x02464d05, 0x00ffffff,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0xa05f1740, 0x45004f02, 0x00041461, 0x66050020,
    0x00664d1f, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x20011b66, 0x5d005b03,
    0x00043066, 0x03058220, 0x02465b05, 0x20000000,
    0x27610c70, 0x4f005f03, 0x00041c69, 0x69058660,
    0x02466605, 0x00000010, 0x00040070, 0x00018660,
    0x16464505, 0x00000000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0xa0630b40, 0x51026102,
    0x11043062, 0x05058220, 0x02465f05, 0x00000000,
    0x11040a62, 0x65058220, 0x02466305, 0x00000000,
    0x00041961, 0x67050120, 0x00566506, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x20071966, 0x69006703, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x00000000,
    0xfb0c0924, 0x003c0144, 0xa06a0040, 0x01004903,
    0x276c1970, 0x49006a03, 0x00030061, 0x25060220,
    0x00346a05, 0x00000000, 0x00130061, 0x27060220,
    0x00346b05, 0x00000000, 0xa06e1b40, 0x4b026c02,
    0x00031961, 0x25260220, 0x00346e05, 0x00000000,
    0x00131a61, 0x27260220, 0x00346f05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb0c2524, 0x003c0d44,
    0xa06f0040, 0x02004903, 0x27711970, 0x49006f03,
    0x00033061, 0x41060220, 0x00346f05, 0x00000000,
    0x00133061, 0x43060220, 0x00347005, 0x00000000,
    0xa0731b40, 0x4b027102, 0x00031961, 0x41260220,
    0x00347305, 0x00000000, 0x00131a61, 0x43260220,
    0x00347405, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xfb0c4124, 0x003c1544, 0xa0740040, 0x03004903,
    0x00040061, 0x1f050660, 0x00462f05, 0x00000000,
    0x00040061, 0x21050660, 0x00463705, 0x00000000,
    0x00040061, 0x23050660, 0x00463f05, 0x00000000,
    0x27761c70, 0x49007403, 0x00033261, 0x42060220,
    0x00347405, 0x00000000, 0x00133261, 0x44060220,
    0x00347505, 0x00000000, 0xa0781b40, 0x4b027602,
    0x00031961, 0x42260220, 0x00347805, 0x00000000,
    0x00131a61, 0x44260220, 0x00347905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x00000000, 0xfb0c4224, 0x003c1d44,
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
      .base.program_size = 5392,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_leaf_create_HW_instance_nodes_pointers_relocs,
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
const char *gfx125_bvh_build_leaf_create_HW_instance_nodes_pointers_sha1 = "45944f6450d09db493fd9d6cd3c5b2bfcd0ab418";

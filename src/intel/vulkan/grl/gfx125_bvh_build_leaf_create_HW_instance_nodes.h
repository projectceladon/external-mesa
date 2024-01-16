#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_leaf_create_HW_instance_nodes_relocs[] = {
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

and(1)          g46<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(8)          g32<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(16)         g119<1>UD       g0.1<0,1,0>UD                   { align1 1H };
add(1)          g47<1>UD        g46<0,1,0>UD    0x00000000UD    { align1 WE_all 1N I@3 compacted };
add(1)          g48<1>UD        g46<0,1,0>UD    0x00000040UD    { align1 WE_all 1N compacted };
add(8)          g32.8<1>UW      g32<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@4 compacted };
shl(16)         g39<1>D         g119<8,8,1>D    0x00000004UD    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(1)         g1UD            g47UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g3UD            g48UD           nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g41<1>D         g32<8,8,1>UW                    { align1 1H };
add(16)         g43<1>D         g39<1,1,0>D     g41<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g4.1<2>F        g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g33.1<2>F       g2.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g94.1<2>F       g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g35.1<2>F       g2.3<0,1,0>F                    { align1 2Q };
mov(8)          g96.1<2>F       g2.5<0,1,0>F                    { align1 1Q };
mov(8)          g37.1<2>F       g2.5<0,1,0>F                    { align1 2Q };
mov(8)          g16.1<2>F       g2.7<0,1,0>F                    { align1 1Q };
mov(8)          g20.1<2>F       g2.7<0,1,0>F                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mov(8)          g18.1<2>F       g3.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g22.1<2>F       g3.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g4<2>F          g2<0,1,0>F                      { align1 1Q F@7 compacted };
mov(8)          g33<2>F         g2<0,1,0>F                      { align1 2Q F@7 compacted };
mov(8)          g94<2>F         g2.2<0,1,0>F                    { align1 1Q F@7 compacted };
mov(8)          g35<2>F         g2.2<0,1,0>F                    { align1 2Q F@7 compacted };
mov(8)          g96<2>F         g2.4<0,1,0>F                    { align1 1Q F@7 compacted };
mov(8)          g37<2>F         g2.4<0,1,0>F                    { align1 2Q F@7 compacted };
mov(8)          g16<2>F         g2.6<0,1,0>F                    { align1 1Q F@7 compacted };
mov(8)          g20<2>F         g2.6<0,1,0>F                    { align1 2Q F@7 compacted };
mov(8)          g18<2>F         g3<0,1,0>F                      { align1 1Q F@7 compacted };
mov(8)          g22<2>F         g3<0,1,0>F                      { align1 2Q F@7 compacted };
add(8)          g6<1>D          g4<8,4,2>D      36D             { align1 1Q F@7 compacted };
add(8)          g45<1>D         g33<8,4,2>D     36D             { align1 2Q F@7 compacted };
cmp.l.f0.0(8)   g7<1>UD         g6<8,8,1>UD     g4<8,4,2>UD     { align1 1Q I@2 };
mov(8)          g121<2>UD       g6<4,4,1>UD                     { align1 1Q };
cmp.l.f0.0(8)   g46<1>UD        g45<8,8,1>UD    g33<8,4,2>UD    { align1 2Q I@3 };
mov(8)          g123<2>UD       g45<4,4,1>UD                    { align1 2Q };
add(8)          g8<1>D          -g7<8,8,1>D     g4.1<8,4,2>D    { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
add(8)          g47<1>D         -g46<8,8,1>D    g33.1<8,4,2>D   { align1 2Q I@3 };
mov(8)          g121.1<2>UD     g8<4,4,1>UD                     { align1 1Q I@2 };
mov(8)          g123.1<2>UD     g47<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g48UD           g121UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
cmp.l.f0.0(16)  null<1>UD       g43<8,8,1>UD    g48<8,8,1>UD    { align1 1H $2.dst };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
cmp.z.f0.0(16)  null<1>D        g43<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL1              { align1 1H };
shl(16)         g50<1>D         g48<8,8,1>D     0x00000001UD    { align1 1H };
add(8)          g9<1>D          g16<8,4,2>D     36D             { align1 1Q F@4 compacted };
add(8)          g52<1>D         g20<8,4,2>D     36D             { align1 2Q F@3 compacted };
cmp.l.f0.0(8)   g10<1>UD        g9<8,8,1>UD     g16<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g53<1>UD        g52<8,8,1>UD    g20<8,4,2>UD    { align1 2Q I@2 };
mov(8)          g122<2>UD       g9<4,4,1>UD                     { align1 1Q $2.src };
mov(8)          g124<2>UD       g52<4,4,1>UD                    { align1 2Q $2.src };
add(8)          g11<1>D         -g10<8,8,1>D    g16.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g54<1>D         -g53<8,8,1>D    g20.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g122.1<2>UD     g11<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g124.1<2>UD     g54<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g55UD           g122UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $3 };
add(16)         g126<1>D        g55<1,1,0>D     g50<1,1,0>D     { align1 1H $3.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g122UD          g126UD          0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $2 };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
mul(16)         g60<1>D         g43<8,8,1>D     g3.4<0,1,0>UW   { align1 1H };
mul(16)         g45<1>D         g43<8,8,1>D     g3.5<0,1,0>UW   { align1 1H };
mov(8)          g66<1>UD        g94.1<8,4,2>UD                  { align1 1Q F@7 };
mov(8)          g67<1>UD        g35.1<8,4,2>UD                  { align1 2Q F@7 };
mov(8)          g24<1>UD        g96.1<8,4,2>UD                  { align1 1Q F@6 };
mov(8)          g25<1>UD        g37.1<8,4,2>UD                  { align1 2Q F@5 };
mov(8)          g26<1>UD        g18.1<8,4,2>UD                  { align1 1Q F@2 };
mov(8)          g27<1>UD        g22.1<8,4,2>UD                  { align1 2Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g122<1>UD       g16.1<8,4,2>UD                  { align1 1Q F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $2.src };
mov(8)          g123<1>UD       g20.1<8,4,2>UD                  { align1 2Q F@3 };
add(8)          g31<1>D         g16<8,4,2>D     16D             { align1 1Q compacted };
add(8)          g28<1>D         g20<8,4,2>D     16D             { align1 2Q compacted };
shl(16)         g124<1>D        g43<8,8,1>D     0x00000007UD    { align1 1H $2.src };
shr(16)         g126<1>UD       g43<1,1,0>UD    0x00000019UD    { align1 1H $2.src compacted };
add(16)         g60.1<2>UW      g60.1<16,8,2>UW g45<16,8,2>UW   { align1 1H };
mov(8)          g102<2>UD       g31<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g104<2>UD       g28<4,4,1>UD                    { align1 2Q I@5 };
add(16)         g62<1>D         g60<1,1,0>D     g3.3<0,1,0>D    { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g64<1>UD        g62<1,1,0>UD    g60<1,1,0>UD    { align1 1H I@1 compacted };
add(8)          g29<1>D         g94<8,4,2>D     g62<1,1,0>D     { align1 1Q compacted };
add(8)          g68<1>D         g35<8,4,2>D     g63<1,1,0>D     { align1 2Q compacted };
cmp.l.f0.0(8)   g69<1>UD        g29<8,8,1>UD    g94<8,4,2>UD    { align1 1Q I@2 };
mov(8)          g8<2>UD         g29<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g70<1>UD        g68<8,8,1>UD    g35<8,4,2>UD    { align1 2Q I@3 };
mov(8)          g10<2>UD        g68<4,4,1>UD                    { align1 2Q };
add3(16)        g71<1>D         g66<8,8,1>D     -g64<8,8,1>D    -g69<1,1,1>D { align1 1H I@2 };
mov(8)          g8.1<2>UD       g71<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g10.1<2>UD      g72<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g72UD           g8UD            nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $4 };
shl(16)         g74<1>D         g72<8,8,1>D     0x00000005UD    { align1 1H $4.dst };
shr(16)         g76<1>UD        g72<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
add(8)          g94<1>D         g96<8,4,2>D     g74<1,1,0>D     { align1 1Q I@2 compacted };
add(8)          g95<1>D         g37<8,4,2>D     g75<1,1,0>D     { align1 2Q I@3 compacted };
cmp.l.f0.0(8)   g96<1>UD        g94<8,8,1>UD    g96<8,4,2>UD    { align1 1Q I@2 };
mov(8)          g12<2>UD        g94<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g97<1>UD        g95<8,8,1>UD    g37<8,4,2>UD    { align1 2Q I@3 };
mov(8)          g14<2>UD        g95<4,4,1>UD                    { align1 2Q };
add(16)         g100<1>D        g94<1,1,0>D     16D             { align1 1H compacted };
add3(16)        g98<1>D         g24<8,8,1>D     g76<8,8,1>D     -g96<1,1,1>D { align1 1H I@3 };
cmp.l.f0.0(16)  g110<1>UD       g100<1,1,0>UD   g94<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g118<2>UD       g100<4,4,1>UD                   { align1 1Q };
mov(8)          g120<2>UD       g101<4,4,1>UD                   { align1 2Q $2.src };
mov(8)          g12.1<2>UD      g98<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g14.1<2>UD      g99<4,4,1>UD                    { align1 2Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g1<1>D          -g110<1,1,0>D   g98<1,1,0>D     { align1 1H A@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g110UD          g12UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $5 };
mov(8)          g118.1<2>UD     g1<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g120.1<2>UD     g2<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g94UD           g118UD          nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $6 };
and(16)         g66<1>UD        g116<8,8,1>UD   0x00ffffffUD    { align1 1H $5.dst };
mov(16)         g68<1>UD        g116.3<32,8,4>UB                { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
shl(16)         g8<1>D          g66<8,8,1>D     0x00000006UD    { align1 1H I@2 };
shr(16)         g10<1>UD        g66<1,1,0>UD    0x0000001aUD    { align1 1H $4.src compacted };
and(16)         g1<1>UD         g100<8,8,1>UD   0x7fffffffUD    { align1 1H $6.dst };
add(8)          g70<1>D         g18<8,4,2>D     g8<1,1,0>D      { align1 1Q I@3 compacted };
add(8)          g71<1>D         g22<8,4,2>D     g9<1,1,0>D      { align1 2Q I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(8)   g12<1>UD        g70<8,8,1>UD    g18<8,4,2>UD    { align1 1Q I@2 };
mov(8)          g106<2>UD       g70<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g31<1>UD        g31<8,8,1>UD    g16<8,4,2>UD    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $5.src };
cmp.l.f0.0(8)   g13<1>UD        g71<8,8,1>UD    g22<8,4,2>UD    { align1 2Q I@4 };
mov(8)          g108<2>UD       g71<4,4,1>UD                    { align1 2Q };
add(16)         g29<1>D         g70<1,1,0>D     16D             { align1 1H compacted };
add(16)         g40<1>D         g70<1,1,0>D     32D             { align1 1H compacted };
add(16)         g42<1>D         g70<1,1,0>D     56D             { align1 1H compacted };
add(16)         g44<1>D         g70<1,1,0>D     48D             { align1 1H compacted };
cmp.l.f0.0(8)   g14<1>UD        g28<8,8,1>UD    g20<8,4,2>UD    { align1 2Q $5.src };
add(8)          g32<1>D         -g31<8,8,1>D    g16.1<8,4,2>D   { align1 1Q I@7 };
add3(16)        g72<1>D         g26<8,8,1>D     g10<8,8,1>D     -g12<1,1,1>D { align1 1H I@7 };
mov(8)          g78<2>UD        g29<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g80<2>UD        g30<4,4,1>UD                    { align1 2Q I@7 };
mov(8)          g82<2>UD        g40<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g84<2>UD        g41<4,4,1>UD                    { align1 2Q I@7 };
mov(8)          g86<2>UD        g42<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g88<2>UD        g43<4,4,1>UD                    { align1 2Q I@7 };
mov(8)          g90<2>UD        g44<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g92<2>UD        g45<4,4,1>UD                    { align1 2Q };
add(8)          g15<1>D         -g14<8,8,1>D    g20.1<8,4,2>D   { align1 2Q $5.src };
mov(8)          g102.1<2>UD     g32<4,4,1>UD                    { align1 1Q };
mov(8)          g106.1<2>UD     g72<4,4,1>UD                    { align1 1Q };
mov(8)          g108.1<2>UD     g73<4,4,1>UD                    { align1 2Q };
mov(8)          g104.1<2>UD     g15<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g32UD           g106UD          nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g18UD           g102UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $8 };
shl(16)         g22<1>D         g18<8,8,1>D     0x00000006UD    { align1 1H $8.dst };
shr(16)         g24<1>UD        g18<1,1,0>UD    0x0000001aUD    { align1 1H compacted };
add(8)          g26<1>D         g16<8,4,2>D     g22<1,1,0>D     { align1 1Q I@2 compacted };
add(8)          g27<1>D         g20<8,4,2>D     g23<1,1,0>D     { align1 2Q I@3 compacted };
cmp.l.f0.0(8)   g46<1>UD        g26<8,8,1>UD    g16<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g47<1>UD        g27<8,8,1>UD    g20<8,4,2>UD    { align1 2Q I@2 };
add(16)         g74<1>D         g26<1,1,0>D     g124<1,1,0>D    { align1 1H compacted };
add3(16)        g48<1>D         g122<8,8,1>D    g24<8,8,1>D     -g46<1,1,1>D { align1 1H I@2 };
cmp.l.f0.0(16)  g50<1>UD        g74<1,1,0>UD    g26<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g4<2>UD         g74<4,4,1>UD                    { align1 1Q };
mov(8)          g6<2>UD         g75<4,4,1>UD                    { align1 2Q };
add(16)         g104<1>D        g74<1,1,0>D     64D             { align1 1H $8.src compacted };
cmp.l.f0.0(16)  g52<1>UD        g29<1,1,0>UD    0x00000010UD    { align1 1H compacted };
cmp.l.f0.0(16)  g94<1>UD        g40<1,1,0>UD    0x00000020UD    { align1 1H $6.dst compacted };
add3(16)        g76<1>D         g48<8,8,1>D     g126<8,8,1>D    -g50<1,1,1>D { align1 1H I@6 };
cmp.l.f0.0(16)  g98<1>UD        g42<1,1,0>UD    g70<1,1,0>UD    { align1 1H $6.dst compacted };
mov(8)          g56<2>UD        g104<4,4,1>UD                   { align1 1Q I@5 };
mov(8)          g58<2>UD        g105<4,4,1>UD                   { align1 2Q I@6 };
cmp.l.f0.0(16)  g102<1>UD       g44<1,1,0>UD    g70<1,1,0>UD    { align1 1H $8.src compacted };
add(16)         g54<1>D         -g52<1,1,0>D    g72<1,1,0>D     { align1 1H I@7 compacted };
add(16)         g96<1>D         -g94<1,1,0>D    g72<1,1,0>D     { align1 1H @7 $6.dst compacted };
cmp.l.f0.0(16)  g106<1>UD       g104<1,1,0>UD   g74<1,1,0>UD    { align1 1H $7.src compacted };
mov(8)          g4.1<2>UD       g76<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g6.1<2>UD       g77<4,4,1>UD                    { align1 2Q I@7 };
add(16)         g100<1>D        -g98<1,1,0>D    g72<1,1,0>D     { align1 1H I@7 compacted };
add(16)         g104<1>D        -g102<1,1,0>D   g72<1,1,0>D     { align1 1H I@7 compacted };
mov(8)          g78.1<2>UD      g54<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g80.1<2>UD      g55<4,4,1>UD                    { align1 2Q I@7 };
mov(8)          g82.1<2>UD      g96<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g84.1<2>UD      g97<4,4,1>UD                    { align1 2Q I@7 };
add(16)         g113<1>D        -g106<1,1,0>D   g76<1,1,0>D     { align1 1H @7 $5.dst compacted };
mov(8)          g86.1<2>UD      g100<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g88.1<2>UD      g101<4,4,1>UD                   { align1 2Q I@7 };
mov(8)          g90.1<2>UD      g104<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g92.1<2>UD      g105<4,4,1>UD                   { align1 2Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
send(16)        g40UD           g78UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
send(16)        g48UD           g82UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $10 };
mov(8)          g56.1<2>UD      g113<4,4,1>UD                   { align1 1Q I@5 };
mov(8)          g58.1<2>UD      g114<4,4,1>UD                   { align1 2Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g60UD           g86UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g105UD          g90UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
mul(16)         g111<1>F        -g42<1,1,0>F    g36<1,1,0>F     { align1 1H $9.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
mul(16)         g8<1>F          -g44<1,1,0>F    g32<1,1,0>F     { align1 1H $9.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
mul(16)         g30<1>F         -g40<1,1,0>F    g34<1,1,0>F     { align1 1H $9.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mul(16)         g107<1>F        -g50<1,1,0>F    g44<1,1,0>F     { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
mul(16)         g109<1>F        -g34<1,1,0>F    g52<1,1,0>F     { align1 1H $10.dst compacted };
mul(16)         g123<1>F        -g52<1,1,0>F    g40<1,1,0>F     { align1 1H compacted };
mul(16)         g125<1>F        -g36<1,1,0>F    g48<1,1,0>F     { align1 1H $10.dst compacted };
mul(16)         g26<1>F         -g48<1,1,0>F    g42<1,1,0>F     { align1 1H compacted };
mul(16)         g28<1>F         -g32<1,1,0>F    g50<1,1,0>F     { align1 1H compacted };
and(16)         g64<1>UD        g105<8,8,1>UD   0x00ffffffUD    { align1 1H $12.dst };
mad(16)         g116<1>F        g111<8,8,1>F    g44<8,8,1>F     g34<1,1,1>F { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mad(16)         g78<1>F         g8<8,8,1>F      g40<8,8,1>F     g36<1,1,1>F { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mad(16)         g80<1>F         g30<8,8,1>F     g42<8,8,1>F     g32<1,1,1>F { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
mad(16)         g114<1>F        g109<8,8,1>F    g36<8,8,1>F     g50<1,1,1>F { align1 1H A@2 };
mad(16)         g16<1>F         g123<8,8,1>F    g48<8,8,1>F     g44<1,1,1>F { align1 1H F@7 };
mad(16)         g24<1>F         g125<8,8,1>F    g32<8,8,1>F     g52<1,1,1>F { align1 1H F@7 };
mad(16)         g112<1>F        g107<8,8,1>F    g52<8,8,1>F     g42<1,1,1>F { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mad(16)         g82<1>F         g26<8,8,1>F     g50<8,8,1>F     g40<1,1,1>F { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mad(16)         g84<1>F         g28<8,8,1>F     g34<8,8,1>F     g48<1,1,1>F { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mul(16)         g118<1>F        g48<1,1,0>F     g116<1,1,0>F    { align1 1H F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mad(16)         g120<1>F        g118<8,8,1>F    g114<8,8,1>F    g40<1,1,1>F { align1 1H F@1 };
mad(16)         g122<1>F        g120<8,8,1>F    g112<8,8,1>F    g32<1,1,1>F { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
math inv(16)    g86<1>F         g122<8,8,1>F    null<8,8,1>F    { align1 1H @1 $13 };
mul(16)         g8<1>F          g112<1,1,0>F    g86<1,1,0>F     { align1 1H $13.dst compacted };
mul(16)         g10<1>F         g16<1,1,0>F     g86<1,1,0>F     { align1 1H F@7 compacted };
mul(16)         g12<1>F         g82<1,1,0>F     g86<1,1,0>F     { align1 1H F@7 compacted };
mul(16)         g14<1>F         g114<1,1,0>F    g86<1,1,0>F     { align1 1H compacted };
mul(16)         g18<1>F         g84<1,1,0>F     g86<1,1,0>F     { align1 1H F@7 compacted };
mul(16)         g20<1>F         g116<1,1,0>F    g86<1,1,0>F     { align1 1H compacted };
mul(16)         g22<1>F         g78<1,1,0>F     g86<1,1,0>F     { align1 1H compacted };
mul(16)         g16<1>F         g24<1,1,0>F     g86<1,1,0>F     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mul(16)         g93<1>F         g8<1,1,0>F      g38<1,1,0>F     { align1 1H @7 $7.dst compacted };
mul(16)         g95<1>F         g10<1,1,0>F     g38<1,1,0>F     { align1 1H A@7 compacted };
mul(16)         g97<1>F         g12<1,1,0>F     g38<1,1,0>F     { align1 1H A@7 compacted };
mul(16)         g24<1>F         g80<1,1,0>F     g86<1,1,0>F     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mul(16)         g91<1>F         g18<1,1,0>F     g46<1,1,0>F     { align1 1H @7 $9.dst compacted };
mul(16)         g83<1>F         g22<1,1,0>F     g54<1,1,0>F     { align1 1H @7 $10.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mul(16)         g89<1>F         g16<1,1,0>F     g46<1,1,0>F     { align1 1H F@7 compacted };
mul(16)         g81<1>F         g20<1,1,0>F     g54<1,1,0>F     { align1 1H F@7 compacted };
mul(16)         g87<1>F         g14<1,1,0>F     g46<1,1,0>F     { align1 1H $11.src compacted };
mul(16)         g85<1>F         g24<1,1,0>F     g54<1,1,0>F     { align1 1H F@6 compacted };
add(16)         g103<1>F        g97<1,1,0>F     g91<1,1,0>F     { align1 1H A@5 compacted };
add(16)         g101<1>F        g95<1,1,0>F     g89<1,1,0>F     { align1 1H A@5 compacted };
add(16)         g99<1>F         g93<1,1,0>F     g87<1,1,0>F     { align1 1H A@4 compacted };
add(16)         g78<1>F         g81<1,1,0>F     g99<1,1,0>F     { align1 1H F@1 compacted };
add(16)         g80<1>F         g83<1,1,0>F     g101<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g82<1>F         g85<1,1,0>F     g103<1,1,0>F    { align1 1H F@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g56UD           g60UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $14 };
add(16)         g114<1>D        g74<1,1,0>D     80D             { align1 1H compacted };
mov(16)         g56<1>D         g32<8,8,1>D                     { align1 1H $14.src };
mov(16)         g58<1>D         g40<8,8,1>D                     { align1 1H $14.src };
mov(16)         g60<1>D         g48<8,8,1>D                     { align1 1H $14.src };
mov(16)         g62<1>D         g34<8,8,1>D                     { align1 1H $14.src };
cmp.l.f0.0(16)  g116<1>UD       g114<1,1,0>UD   g74<1,1,0>UD    { align1 1H I@5 compacted };
mov(8)          g64<2>UD        g114<4,4,1>UD                   { align1 1Q $14.src };
mov(8)          g66<2>UD        g115<4,4,1>UD                   { align1 2Q $14.src };
add(16)         g118<1>D        -g116<1,1,0>D   g76<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g64.1<2>UD      g118<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g66.1<2>UD      g119<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g64UD           g56UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $15 };
add(16)         g119<1>D        g74<1,1,0>D     96D             { align1 1H compacted };
mov(16)         g56<1>D         g42<8,8,1>D                     { align1 1H $15.src };
mov(16)         g58<1>D         g50<8,8,1>D                     { align1 1H $15.src };
mov(16)         g60<1>D         g36<8,8,1>D                     { align1 1H $15.src };
mov(16)         g62<1>D         g44<8,8,1>D                     { align1 1H $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
cmp.l.f0.0(16)  g121<1>UD       g119<1,1,0>UD   g74<1,1,0>UD    { align1 1H I@5 compacted };
mov(8)          g64<2>UD        g119<4,4,1>UD                   { align1 1Q $15.src };
mov(8)          g66<2>UD        g120<4,4,1>UD                   { align1 2Q $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g123<1>D        -g121<1,1,0>D   g76<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g64.1<2>UD      g123<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g66.1<2>UD      g124<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g64UD           g56UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $0 };
add(16)         g124<1>D        g74<1,1,0>D     112D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g58<1>F         -g78<1,1,0>F                    { align1 1H F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g60<1>F         -g80<1,1,0>F                    { align1 1H F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g62<1>F         -g82<1,1,0>F                    { align1 1H F@3 compacted };
mov(16)         g56<1>D         g52<8,8,1>D                     { align1 1H $0.src };
cmp.l.f0.0(16)  g126<1>UD       g124<1,1,0>UD   g74<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g64<2>UD        g124<4,4,1>UD                   { align1 1Q $0.src };
mov(8)          g66<2>UD        g125<4,4,1>UD                   { align1 2Q $0.src };
add(16)         g78<1>D         -g126<1,1,0>D   g76<1,1,0>D     { align1 1H A@3 compacted };
mov(8)          g64.1<2>UD      g78<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g66.1<2>UD      g79<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g64UD           g56UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $1 };
add(16)         g80<1>D         g70<1,1,0>D     52D             { align1 1H F@2 compacted };
shl(16)         g90<1>D         g68<8,8,1>D     0x00000018UD    { align1 1H F@7 };
cmp.l.f0.0(16)  g82<1>UD        g80<1,1,0>UD    g70<1,1,0>UD    { align1 1H A@1 compacted };
mov(8)          g86<2>UD        g80<4,4,1>UD                    { align1 1Q F@4 };
mov(8)          g88<2>UD        g81<4,4,1>UD                    { align1 2Q F@7 };
add(16)         g84<1>D         -g82<1,1,0>D    g72<1,1,0>D     { align1 1H A@3 compacted };
mov(8)          g86.1<2>UD      g84<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g88.1<2>UD      g85<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g65UD           g86UD           nullUD          0x08607582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyz, L1STATE_L3MOCS dst_len = 6, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
and(16)         g85<1>UD        g65<8,8,1>UD    0x00ffffffUD    { align1 1H $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
add(16)         g92<1>D         g67<1,1,0>D     g1<1,1,0>D      { align1 1H F@7 compacted };
mov(16)         g99<1>UD        g65.3<32,8,4>UB                 { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
or(16)          g56<1>UD        g85<1,1,0>UD    g90<1,1,0>UD    { align1 1H I@3 compacted };
or(16)          g58<1>UD        g85<8,8,1>UD    0x20000000UD    { align1 1H $1.src };
cmp.l.f0.0(16)  g94<1>UD        g92<1,1,0>UD    g67<1,1,0>UD    { align1 1H A@4 compacted };
shl(16)         g102<1>D        g99<8,8,1>D     0x00000010UD    { align1 1H A@4 };
cmp.z.f0.0(16)  null<1>D        g1<8,8,1>D      0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
add(16)         g96<1>D         -g94<1,1,0>D    g69<1,1,0>D     { align1 1H A@3 compacted };
(-f0.0) sel(16) g60<1>UD        g92<8,8,1>UD    0x00000000UD    { align1 1H $1.src };
(-f0.0) sel(16) g98<1>UD        g96<8,8,1>UD    0x00000000UD    { align1 1H A@2 };
mov(16)         g100<1>UD       g98<16,8,2>UW                   { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
or(16)          g62<1>UD        g100<1,1,0>UD   g102<1,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g4UD            g56UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $3 };
add(16)         g103<1>D        g74<1,1,0>D     16D             { align1 1H F@4 compacted };
cmp.l.f0.0(16)  g105<1>UD       g103<1,1,0>UD   g74<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g1<2>UD         g103<4,4,1>UD                   { align1 1Q };
mov(8)          g3<2>UD         g104<4,4,1>UD                   { align1 2Q $3.src };
add(16)         g107<1>D        -g105<1,1,0>D   g76<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g1.1<2>UD       g107<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g3.1<2>UD       g108<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g1UD            g8UD            0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $0 };
add(16)         g108<1>D        g74<1,1,0>D     32D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g110<1>UD       g108<1,1,0>UD   g74<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g2<2>UD         g108<4,4,1>UD                   { align1 1Q $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $3.src };
mov(8)          g4<2>UD         g109<4,4,1>UD                   { align1 2Q $0.src };
add(16)         g112<1>D        -g110<1,1,0>D   g76<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g2.1<2>UD       g112<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g4.1<2>UD       g113<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g2UD            g16UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $4 };
add(16)         g113<1>D        g74<1,1,0>D     48D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g26<1>D         g38<8,8,1>D                     { align1 1H };
mov(16)         g28<1>D         g46<8,8,1>D                     { align1 1H };
mov(16)         g30<1>D         g54<8,8,1>D                     { align1 1H };
cmp.l.f0.0(16)  g115<1>UD       g113<1,1,0>UD   g74<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g3<2>UD         g113<4,4,1>UD                   { align1 1Q $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $3.src };
mov(8)          g5<2>UD         g114<4,4,1>UD                   { align1 2Q $4.src };
add(16)         g117<1>D        -g115<1,1,0>D   g76<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g3.1<2>UD       g117<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g5.1<2>UD       g118<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g3UD            g24UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $5 };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_leaf_create_HW_instance_nodes_code[] = {
    0x80000065, 0x2e058220, 0x02000004, 0xffffffc0,
    0x80030061, 0x20054410, 0x00000000, 0x76543210,
    0x00040061, 0x77050220, 0x00000024, 0x00000000,
    0xe22f1b40, 0x00012e03, 0xe2300040, 0x04012e03,
    0x64201c40, 0x00802095, 0x00041c69, 0x27058660,
    0x02467705, 0x00000004, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa002f0c, 0x00340000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa00300c, 0x00300000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x29050160,
    0x00462005, 0x00000000, 0xa02b1940, 0x29002702,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x21040061, 0x001102cc, 0x2a210061, 0x001102cc,
    0x00030061, 0x5e260aa0, 0x00000264, 0x00000000,
    0x00130061, 0x23260aa0, 0x00000264, 0x00000000,
    0x00030061, 0x60260aa0, 0x000002a4, 0x00000000,
    0x00130061, 0x25260aa0, 0x000002a4, 0x00000000,
    0x00030061, 0x10260aa0, 0x000002e4, 0x00000000,
    0x00130061, 0x14260aa0, 0x000002e4, 0x00000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x21120061, 0x001103cc, 0x2a160061, 0x001103cc,
    0x21041761, 0x00110204, 0x2a211761, 0x00110204,
    0x215e1761, 0x00110244, 0x2a231761, 0x00110244,
    0x21601761, 0x0011025c, 0x2a251761, 0x0011025c,
    0x21101761, 0x0011026c, 0x2a141761, 0x0011026c,
    0x21121761, 0x00110304, 0x2a161761, 0x00110304,
    0xa1061740, 0x024e0403, 0xaa2d1740, 0x024e2103,
    0x00031a70, 0x07050220, 0x52460605, 0x00440406,
    0x00030061, 0x79060220, 0x00340605, 0x00000000,
    0x00131b70, 0x2e050220, 0x52462d05, 0x00442106,
    0x00130061, 0x7b060220, 0x00342d05, 0x00000000,
    0x00031c40, 0x08052660, 0x06460705, 0x00440426,
    0x80103001, 0x00000000, 0x00000000, 0x00000000,
    0x00131b40, 0x2f052660, 0x06462e05, 0x00442126,
    0x00031a61, 0x79260220, 0x00340805, 0x00000000,
    0x00131a61, 0x7b260220, 0x00342f05, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x30140000, 0xfb047924, 0x00040000,
    0x00042270, 0x00010220, 0x52462b05, 0x00463005,
    0x01040022, 0x0001c060, 0x000011f0, 0x000011f0,
    0x00040070, 0x00018660, 0x16462b05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000108, 0x00000108,
    0x00040069, 0x32058660, 0x02463005, 0x00000001,
    0xa1091440, 0x024e1003, 0xaa341340, 0x024e1403,
    0x00031a70, 0x0a050220, 0x52460905, 0x00441006,
    0x00131a70, 0x35050220, 0x52463405, 0x00441406,
    0x00033261, 0x7a060220, 0x00340905, 0x00000000,
    0x00133261, 0x7c060220, 0x00343405, 0x00000000,
    0x00031c40, 0x0b052660, 0x06460a05, 0x00441026,
    0x00131c40, 0x36052660, 0x06463505, 0x00441426,
    0x00031a61, 0x7a260220, 0x00340b05, 0x00000000,
    0x00131a61, 0x7c260220, 0x00343605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x37140000, 0xfb047a24, 0x00040000,
    0xa07e2340, 0x32003702, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xfb0c7a24, 0x00047e14, 0x00040025, 0x00004600,
    0x00000000, 0x000010c8, 0x00040041, 0x3c050660,
    0x01462b05, 0x00000344, 0x00040041, 0x2d050660,
    0x01462b05, 0x00000354, 0x00031761, 0x42050220,
    0x00445e26, 0x00000000, 0x00131761, 0x43050220,
    0x00442326, 0x00000000, 0x00031661, 0x18050220,
    0x00446026, 0x00000000, 0x00131561, 0x19050220,
    0x00442526, 0x00000000, 0x00031261, 0x1a050220,
    0x00441226, 0x00000000, 0x00131161, 0x1b050220,
    0x00441626, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00031461, 0x7a050220,
    0x00441026, 0x00000000, 0x80103201, 0x00000000,
    0x00000000, 0x00000000, 0x00131361, 0x7b050220,
    0x00441426, 0x00000000, 0xa11f0040, 0x010e1003,
    0xaa1c0040, 0x010e1403, 0x00043269, 0x7c058660,
    0x02462b05, 0x00000007, 0xe07e3268, 0x01902b03,
    0x00040040, 0x3c160110, 0x01563c16, 0x00562d06,
    0x00031d61, 0x66060220, 0x00341f05, 0x00000000,
    0x00131d61, 0x68060220, 0x00341c05, 0x00000000,
    0xa03e1b40, 0x03103c1a, 0x27401970, 0x3c003e03,
    0xa11d0040, 0x3e0e5e02, 0xaa440040, 0x3f0e2302,
    0x00031a70, 0x45050220, 0x52461d05, 0x00445e06,
    0x00030061, 0x08060220, 0x00341d05, 0x00000000,
    0x00131b70, 0x46050220, 0x52464405, 0x00442306,
    0x00130061, 0x0a060220, 0x00344405, 0x00000000,
    0x00041a52, 0x47040e68, 0x0eae4205, 0x45054005,
    0x00031961, 0x08260220, 0x00344705, 0x00000000,
    0x00131a61, 0x0a260220, 0x00344805, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x48140000, 0xfb040824, 0x00040000,
    0x00042469, 0x4a058660, 0x02464805, 0x00000005,
    0xe04c0068, 0x01b04803, 0xa15e1a40, 0x4a0e6002,
    0xaa5f1b40, 0x4b0e2502, 0x00031a70, 0x60050220,
    0x52465e05, 0x00446006, 0x00030061, 0x0c060220,
    0x00345e05, 0x00000000, 0x00131b70, 0x61050220,
    0x52465f05, 0x00442506, 0x00130061, 0x0e060220,
    0x00345f05, 0x00000000, 0xa0640040, 0x01005e03,
    0x00041b52, 0x62040e68, 0x0e2e1805, 0x60054c05,
    0x276e1a70, 0x5e006403, 0x00030061, 0x76060220,
    0x00346405, 0x00000000, 0x00133261, 0x78060220,
    0x00346505, 0x00000000, 0x00031c61, 0x0c260220,
    0x00346205, 0x00000000, 0x00131d61, 0x0e260220,
    0x00346305, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa0010b40, 0x62026e02,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x6e440000, 0xfb040c24, 0x003c0000,
    0x00031961, 0x76260220, 0x00340105, 0x00000000,
    0x00131a61, 0x78260220, 0x00340205, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x5e440000, 0xfb047624, 0x003c0000,
    0x00042565, 0x42058220, 0x02467405, 0x00ffffff,
    0x00040061, 0x44050020, 0x0066741f, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00041a69, 0x08058660, 0x02464205, 0x00000006,
    0xe00a3468, 0x01a04203, 0x00042665, 0x01058220,
    0x02466405, 0x7fffffff, 0xa1461b40, 0x080e1202,
    0xaa471c40, 0x090e1602, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00031a70, 0x0c050220,
    0x52464605, 0x00441206, 0x00030061, 0x6a060220,
    0x00344605, 0x00000000, 0x00030070, 0x1f050220,
    0x52461f05, 0x00441006, 0x80103501, 0x00000000,
    0x00000000, 0x00000000, 0x00131c70, 0x0d050220,
    0x52464705, 0x00441606, 0x00130061, 0x6c060220,
    0x00344705, 0x00000000, 0xa01d0040, 0x01004603,
    0xa0280040, 0x02004603, 0xa02a0040, 0x03804603,
    0xa02c0040, 0x03004603, 0x00133570, 0x0e050220,
    0x52461c05, 0x00441406, 0x00031f40, 0x20052660,
    0x06461f05, 0x00441026, 0x00041f52, 0x48040e68,
    0x0e2e1a05, 0x0c050a05, 0x00031f61, 0x4e060220,
    0x00341d05, 0x00000000, 0x00131f61, 0x50060220,
    0x00341e05, 0x00000000, 0x00031f61, 0x52060220,
    0x00342805, 0x00000000, 0x00131f61, 0x54060220,
    0x00342905, 0x00000000, 0x00031f61, 0x56060220,
    0x00342a05, 0x00000000, 0x00131f61, 0x58060220,
    0x00342b05, 0x00000000, 0x00031f61, 0x5a060220,
    0x00342c05, 0x00000000, 0x00130061, 0x5c060220,
    0x00342d05, 0x00000000, 0x00133540, 0x0f052660,
    0x06460e05, 0x00441426, 0x00030061, 0x66260220,
    0x00342005, 0x00000000, 0x00030061, 0x6a260220,
    0x00344805, 0x00000000, 0x00130061, 0x6c260220,
    0x00344905, 0x00000000, 0x00131c61, 0x68260220,
    0x00340f05, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x20440000,
    0xfb046a24, 0x003c0000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x12140000,
    0xfb046624, 0x00040000, 0x00042869, 0x16058660,
    0x02461205, 0x00000006, 0xe0180068, 0x01a01203,
    0xa11a1a40, 0x160e1002, 0xaa1b1b40, 0x170e1402,
    0x00031a70, 0x2e050220, 0x52461a05, 0x00441006,
    0x00131a70, 0x2f050220, 0x52461b05, 0x00441406,
    0xa04a0040, 0x7c001a02, 0x00041a52, 0x30040e68,
    0x0e2e7a05, 0x2e051805, 0x27321a70, 0x1a004a03,
    0x00030061, 0x04060220, 0x00344a05, 0x00000000,
    0x00130061, 0x06060220, 0x00344b05, 0x00000000,
    0xa0683840, 0x04004a03, 0xe7340070, 0x01001d03,
    0xe75e2670, 0x02002803, 0x00041e52, 0x4c040e68,
    0x0e2e3005, 0x32057e05, 0x27622670, 0x46002a03,
    0x00031d61, 0x38060220, 0x00346805, 0x00000000,
    0x00131e61, 0x3a060220, 0x00346905, 0x00000000,
    0x27663870, 0x46002c03, 0xa0361f40, 0x48023402,
    0xa060f640, 0x48025e02, 0x276a3770, 0x4a006803,
    0x00031f61, 0x04260220, 0x00344c05, 0x00000000,
    0x00131f61, 0x06260220, 0x00344d05, 0x00000000,
    0xa0641f40, 0x48026202, 0xa0681f40, 0x48026602,
    0x00031f61, 0x4e260220, 0x00343605, 0x00000000,
    0x00131f61, 0x50260220, 0x00343705, 0x00000000,
    0x00031f61, 0x52260220, 0x00346005, 0x00000000,
    0x00131f61, 0x54260220, 0x00346105, 0x00000000,
    0xa071f540, 0x4c026a02, 0x00031f61, 0x56260220,
    0x00346405, 0x00000000, 0x00131f61, 0x58260220,
    0x00346505, 0x00000000, 0x00031f61, 0x5a260220,
    0x00346805, 0x00000000, 0x00131f61, 0x5c260220,
    0x00346905, 0x00000000, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x28440000,
    0xfb044e24, 0x003c0000, 0x80001e01, 0x00000000,
    0x00000000, 0x00000000, 0x00044a31, 0x30440000,
    0xfb045224, 0x003c0000, 0x00031d61, 0x38260220,
    0x00347105, 0x00000000, 0x00131e61, 0x3a260220,
    0x00347205, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x3c240000,
    0xfb045624, 0x000c0000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x69140000,
    0xfb045a24, 0x00040000, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x80002501, 0x00000000,
    0x00000000, 0x00000000, 0x206f2941, 0x24022a00,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x20082941, 0x20022c00, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x201e2941, 0x22022800,
    0x80002a01, 0x00000000, 0x00000000, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x206b1f41, 0x2c023200, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80002501, 0x00000000,
    0x00000000, 0x00000000, 0x206d2a41, 0x34022200,
    0x207b0041, 0x28023400, 0x207d2a41, 0x30022400,
    0x201a0041, 0x2a023000, 0x201c0041, 0x32022000,
    0x00042c65, 0x40058220, 0x02466905, 0x00ffffff,
    0x0004175b, 0x74040aa8, 0x0a0a6f05, 0x22052c05,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x0004175b, 0x4e040aa8, 0x0a0a0805, 0x24052805,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x0004175b, 0x50040aa8, 0x0a0a1e05, 0x20052a05,
    0x80002501, 0x00000000, 0x00000000, 0x00000000,
    0x00040a5b, 0x72040aa8, 0x0a0a6d05, 0x32052405,
    0x0004175b, 0x10040aa8, 0x0a0a7b05, 0x2c053005,
    0x0004175b, 0x18040aa8, 0x0a0a7d05, 0x34052005,
    0x00041b5b, 0x70040aa8, 0x0a0a6b05, 0x2a053405,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x0004175b, 0x52040aa8, 0x0a0a1a05, 0x28053205,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x0004175b, 0x54040aa8, 0x0a0a1c05, 0x30052205,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x20761741, 0x74003000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x0004115b, 0x78040aa8,
    0x0a0a7605, 0x28057205, 0x0004115b, 0x7a040aa8,
    0x0a0a7805, 0x20057005, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x00049d38, 0x56050aa0,
    0x1a467a05, 0x00460001, 0x20082d41, 0x56007000,
    0x200a1741, 0x56001000, 0x200c1741, 0x56005200,
    0x200e0041, 0x56007200, 0x20121741, 0x56005400,
    0x20140041, 0x56007400, 0x20160041, 0x56004e00,
    0x20100041, 0x56001800, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x205df741, 0x26000800,
    0x205f0f41, 0x26000a00, 0x20610f41, 0x26000c00,
    0x20180041, 0x56005000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x205bf941, 0x2e001200,
    0x2053fa41, 0x36001600, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x20591741, 0x2e001000,
    0x20511741, 0x36001400, 0x20573b41, 0x2e000e00,
    0x20551641, 0x36001800, 0x20670d40, 0x5b006100,
    0x20650d40, 0x59005f00, 0x20630c40, 0x57005d00,
    0x204e1140, 0x63005100, 0x20501340, 0x65005300,
    0x20521540, 0x67005500, 0x80002b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044e31, 0x00000000,
    0xfb0c3824, 0x003c3c44, 0xa0720040, 0x05004a03,
    0x00043e61, 0x38050660, 0x00462005, 0x00000000,
    0x00043e61, 0x3a050660, 0x00462805, 0x00000000,
    0x00043e61, 0x3c050660, 0x00463005, 0x00000000,
    0x00043e61, 0x3e050660, 0x00462205, 0x00000000,
    0x27741d70, 0x4a007203, 0x00033e61, 0x40060220,
    0x00347205, 0x00000000, 0x00133e61, 0x42060220,
    0x00347305, 0x00000000, 0xa0761b40, 0x4c027402,
    0x00031961, 0x40260220, 0x00347605, 0x00000000,
    0x00131a61, 0x42260220, 0x00347705, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044f31, 0x00000000, 0xfb0c4024, 0x003c3844,
    0xa0770040, 0x06004a03, 0x00043f61, 0x38050660,
    0x00462a05, 0x00000000, 0x00043f61, 0x3a050660,
    0x00463205, 0x00000000, 0x00043f61, 0x3c050660,
    0x00462405, 0x00000000, 0x00043f61, 0x3e050660,
    0x00462c05, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x27791d70, 0x4a007703,
    0x00033f61, 0x40060220, 0x00347705, 0x00000000,
    0x00133f61, 0x42060220, 0x00347805, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0xa07b1b40, 0x4c027902, 0x00031961, 0x40260220,
    0x00347b05, 0x00000000, 0x00131a61, 0x42260220,
    0x00347c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x00000000,
    0xfb0c4024, 0x003c3844, 0xa07c0040, 0x07004a03,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x603a1361, 0x00124e00, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x603c1361, 0x00125000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x603e1361, 0x00125200, 0x00043061, 0x38050660,
    0x00463405, 0x00000000, 0x277e1a70, 0x4a007c03,
    0x00033061, 0x40060220, 0x00347c05, 0x00000000,
    0x00133061, 0x42060220, 0x00347d05, 0x00000000,
    0xa04e0b40, 0x4c027e02, 0x00031961, 0x40260220,
    0x00344e05, 0x00000000, 0x00131a61, 0x42260220,
    0x00344f05, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb0c4024, 0x003c3844, 0xa0501240, 0x03404603,
    0x00041769, 0x5a058660, 0x02464405, 0x00000018,
    0x27520970, 0x46005003, 0x00031461, 0x56060220,
    0x00345005, 0x00000000, 0x00131761, 0x58060220,
    0x00345105, 0x00000000, 0xa0540b40, 0x48025202,
    0x00031961, 0x56260220, 0x00345405, 0x00000000,
    0x00131a61, 0x58260220, 0x00345505, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x41340000, 0xfb045624, 0x001c0000,
    0x00042265, 0x55058220, 0x02464105, 0x00ffffff,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0xa05c1740, 0x01004302, 0x00041661, 0x63050020,
    0x0066411f, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x20381b66, 0x5a005503,
    0x00043166, 0x3a058220, 0x02465505, 0x20000000,
    0x275e0c70, 0x43005c03, 0x00040c69, 0x66058660,
    0x02466305, 0x00000010, 0x00040070, 0x00018660,
    0x16460105, 0x00000000, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0xa0600b40, 0x45025e02,
    0x11043162, 0x3c058220, 0x02465c05, 0x00000000,
    0x11040a62, 0x62058220, 0x02466005, 0x00000000,
    0x00040961, 0x64050120, 0x00566206, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x203e1966, 0x66006403, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xfb0c0424, 0x003c3844, 0xa0671440, 0x01004a03,
    0x27691970, 0x4a006703, 0x00030061, 0x01060220,
    0x00346705, 0x00000000, 0x00133361, 0x03060220,
    0x00346805, 0x00000000, 0xa06b1b40, 0x4c026902,
    0x00031961, 0x01260220, 0x00346b05, 0x00000000,
    0x00131a61, 0x03260220, 0x00346c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb0c0124, 0x003c0844,
    0xa06c0040, 0x02004a03, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x276e1970, 0x4a006c03,
    0x00033061, 0x02060220, 0x00346c05, 0x00000000,
    0x80103301, 0x00000000, 0x00000000, 0x00000000,
    0x00133061, 0x04060220, 0x00346d05, 0x00000000,
    0xa0701b40, 0x4c026e02, 0x00031961, 0x02260220,
    0x00347005, 0x00000000, 0x00131a61, 0x04260220,
    0x00347105, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xfb0c0224, 0x003c1044, 0xa0710040, 0x03004a03,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x1a050660, 0x00462605, 0x00000000,
    0x00040061, 0x1c050660, 0x00462e05, 0x00000000,
    0x00040061, 0x1e050660, 0x00463605, 0x00000000,
    0x27731c70, 0x4a007103, 0x00033461, 0x03060220,
    0x00347105, 0x00000000, 0x80103301, 0x00000000,
    0x00000000, 0x00000000, 0x00133461, 0x05060220,
    0x00347205, 0x00000000, 0xa0751b40, 0x4c027302,
    0x00031961, 0x03260220, 0x00347505, 0x00000000,
    0x00131a61, 0x05260220, 0x00347605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x00000000, 0xfb0c0324, 0x003c1844,
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
      .base.program_size = 5296,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_leaf_create_HW_instance_nodes_relocs,
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
const char *gfx125_bvh_build_leaf_create_HW_instance_nodes_sha1 = "c1f240026e514e145ab8f7a1b37b07b68dffb0f7";

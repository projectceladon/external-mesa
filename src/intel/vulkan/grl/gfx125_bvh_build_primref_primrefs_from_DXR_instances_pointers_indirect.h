#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_indirect_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_indirect_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
   { 24, 8 },
   { 32, 8 },
   { 40, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g6<1>UD         g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(8)          g78<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(16)         g26<1>UD        g0.1<0,1,0>UD                   { align1 1H };
add(1)          g7<1>UD         g6<0,1,0>UD     0x00000000UD    { align1 WE_all 1N I@3 compacted };
add(1)          g8<1>UD         g6<0,1,0>UD     0x00000040UD    { align1 WE_all 1N compacted };
add(8)          g78.8<1>UW      g78<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@4 compacted };
shl(16)         g111<1>D        g26<8,8,1>D     0x00000004UD    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(1)         g1UD            g7UD            nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g3UD            g8UD            nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g59<1>D         g78<8,8,1>UW                    { align1 1H };
and(16)         g109<1>UD       g59<1,1,0>UD    0x0000000fUD    { align1 1H I@1 compacted };
add(16)         g61<1>D         g109<1,1,0>D    g111<1,1,0>D    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.dst };
mov(8)          g108.1<2>F      g2.5<0,1,0>F                    { align1 2Q I@1 };
mov(8)          g57.1<2>F       g2.7<0,1,0>F                    { align1 2Q };
mov(8)          g51.1<2>F       g2.7<0,1,0>F                    { align1 1Q };
mov(8)          g42.1<2>F       g2.5<0,1,0>F                    { align1 1Q };
mov(8)          g55.1<2>F       g2.3<0,1,0>F                    { align1 2Q };
mov(8)          g49.1<2>F       g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g45.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g47.1<2>F       g2.1<0,1,0>F                    { align1 2Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mov(8)          g28.1<2>F       g3.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g30.1<2>F       g3.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g108<2>F        g2.4<0,1,0>F                    { align1 2Q F@7 compacted };
mov(8)          g57<2>F         g2.6<0,1,0>F                    { align1 2Q F@7 compacted };
mov(8)          g51<2>F         g2.6<0,1,0>F                    { align1 1Q F@7 compacted };
mov(8)          g42<2>F         g2.4<0,1,0>F                    { align1 1Q F@7 compacted };
mov(8)          g55<2>F         g2.2<0,1,0>F                    { align1 2Q F@7 compacted };
mov(8)          g49<2>F         g2.2<0,1,0>F                    { align1 1Q F@7 compacted };
mov(8)          g45<2>F         g2<0,1,0>F                      { align1 1Q F@7 compacted };
mov(8)          g47<2>F         g2<0,1,0>F                      { align1 2Q F@7 compacted };
mov(8)          g28<2>F         g3<0,1,0>F                      { align1 1Q F@7 compacted };
mov(8)          g30<2>F         g3<0,1,0>F                      { align1 2Q F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g112UD          g28UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
cmp.l.f0.0(16)  null<1>UD       g61<8,8,1>UD    g112<8,8,1>UD   { align1 1H @1 $2.dst };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
add(8)          g44<1>D         g28<8,4,2>D     4D              { align1 1Q $2.src compacted };
add(8)          g113<1>D        g30<8,4,2>D     4D              { align1 2Q $2.src compacted };
shl(16)         g122<1>D        g61<8,8,1>D     0x00000003UD    { align1 1H };
cmp.l.f0.0(8)   g53<1>UD        g44<8,8,1>UD    g28<8,4,2>UD    { align1 1Q I@3 };
cmp.l.f0.0(8)   g114<1>UD       g113<8,8,1>UD   g30<8,4,2>UD    { align1 2Q I@3 };
mov(8)          g32<2>UD        g44<4,4,1>UD                    { align1 1Q };
mov(8)          g34<2>UD        g113<4,4,1>UD                   { align1 2Q };
add(8)          g54<1>D         -g53<8,8,1>D    g28.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g115<1>D        -g114<8,8,1>D   g30.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g32.1<2>UD      g54<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g34.1<2>UD      g115<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g116UD          g32UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
add(8)          g118<1>D        g42<8,4,2>D     g116<1,1,0>D    { align1 1Q F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $3.dst };
add(8)          g119<1>D        g108<8,4,2>D    g117<1,1,0>D    { align1 2Q F@7 compacted };
cmp.l.f0.0(8)   g63<1>UD        g118<8,8,1>UD   g42<8,4,2>UD    { align1 1Q I@2 };
add(16)         g125<1>D        g118<1,1,0>D    g122<1,1,0>D    { align1 1H I@2 compacted };
cmp.l.f0.0(8)   g120<1>UD       g119<8,8,1>UD   g108<8,4,2>UD   { align1 2Q };
shr(16)         g123<1>UD       g61<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
add(8)          g121<1>D        -g63<8,8,1>D    g42.1<8,4,2>D   { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cmp.l.f0.0(16)  g1<1>UD         g125<1,1,0>UD   g118<1,1,0>UD   { align1 1H A@3 compacted };
mov(8)          g33<2>UD        g125<4,4,1>UD                   { align1 1Q $3.src };
mov(8)          g35<2>UD        g126<4,4,1>UD                   { align1 2Q $3.src };
add(8)          g122<1>D        -g120<8,8,1>D   g108.1<8,4,2>D  { align1 2Q I@6 };
add3(16)        g4<1>D          g121<8,8,1>D    g123<8,8,1>D    -g1<1,1,1>D { align1 1H I@1 };
mov(8)          g35.1<2>UD      g5<4,4,1>UD                     { align1 2Q I@1 };
mov(8)          g33.1<2>UD      g4<4,4,1>UD                     { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g63UD           g33UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $4 };
mov(8)          g28<2>UD        g63<4,4,1>UD                    { align1 1Q $4.dst };
mov(8)          g30<2>UD        g64<4,4,1>UD                    { align1 2Q $4.dst };
or.nz.f0.0(16)  null<1>UD       g63<8,8,1>UD    g65<8,8,1>UD    { align1 1H $4.dst };
mov(8)          g28.1<2>UD      g65<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g30.1<2>UD      g66<4,4,1>UD                    { align1 2Q I@3 };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL1              { align1 1H };
add(16)         g5<1>D          g63<1,1,0>D     48D             { align1 1H compacted };
add(16)         g11<1>D         g63<1,1,0>D     56D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g7<1>UD         g5<1,1,0>UD     g63<1,1,0>UD    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g13<1>UD        g11<1,1,0>UD    g63<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g34<2>UD        g5<4,4,1>UD                     { align1 1Q $4.src };
mov(8)          g36<2>UD        g6<4,4,1>UD                     { align1 2Q $4.src };
mov(8)          g38<2>UD        g11<4,4,1>UD                    { align1 1Q };
mov(8)          g40<2>UD        g12<4,4,1>UD                    { align1 2Q };
add(16)         g9<1>D          -g7<1,1,0>D     g65<1,1,0>D     { align1 1H I@6 compacted };
add(16)         g15<1>D         -g13<1,1,0>D    g65<1,1,0>D     { align1 1H I@6 compacted };
mov(8)          g34.1<2>UD      g9<4,4,1>UD                     { align1 1Q I@2 };
mov(8)          g36.1<2>UD      g10<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g38.1<2>UD      g15<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g40.1<2>UD      g16<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g10UD           g34UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g16UD           g38UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $5 };
mov(16)         g53<1>UD        g10.3<32,8,4>UB                 { align1 1H $4.dst };
or.nz.f0.0(16)  null<1>UD       g16<8,8,1>UD    g18<8,8,1>UD    { align1 1H $5.dst };
(+f0.0) if(16)  JIP:  LABEL4          UIP:  LABEL3              { align1 1H };
add(16)         g20<1>D         g16<1,1,0>D     128D            { align1 1H compacted };
add(16)         g26<1>D         g16<1,1,0>D     140D            { align1 1H compacted };
cmp.l.f0.0(16)  g22<1>UD        g20<1,1,0>UD    g16<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g39<2>UD        g20<4,4,1>UD                    { align1 1Q $5.src };
mov(8)          g41<2>UD        g21<4,4,1>UD                    { align1 2Q $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g32<1>UD        g26<1,1,0>UD    0x0000008cUD    { align1 1H I@4 compacted };
mov(8)          g100<2>UD       g26<4,4,1>UD                    { align1 1Q };
mov(8)          g102<2>UD       g27<4,4,1>UD                    { align1 2Q };
add(16)         g24<1>D         -g22<1,1,0>D    g18<1,1,0>D     { align1 1H I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g34<1>D         -g32<1,1,0>D    g18<1,1,0>D     { align1 1H I@4 compacted };
mov(8)          g39.1<2>UD      g24<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g41.1<2>UD      g25<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g100.1<2>UD     g34<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g102.1<2>UD     g35<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g36UD           g39UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $5 };
cmp.l.f0.0(16)  null<1>F        (abs)g36<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $5.dst compacted };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL5              { align1 1H };
add(16)         g38<1>D         g16<1,1,0>D     132D            { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g40<1>UD        g38<1,1,0>UD    0x00000084UD    { align1 1H I@1 compacted };
mov(8)          g67<2>UD        g38<4,4,1>UD                    { align1 1Q };
mov(8)          g69<2>UD        g39<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g42<1>D         -g40<1,1,0>D    g18<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g67.1<2>UD      g42<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g69.1<2>UD      g43<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g43UD           g67UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $6 };
cmp.l.f0.0(16)  null<1>F        (abs)g43<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $6.dst compacted };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
add(16)         g67<1>D         g16<1,1,0>D     136D            { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g69<1>UD        g67<1,1,0>UD    0x00000088UD    { align1 1H I@1 compacted };
mov(8)          g74<2>UD        g67<4,4,1>UD                    { align1 1Q };
mov(8)          g76<2>UD        g68<4,4,1>UD                    { align1 2Q };
add(16)         g71<1>D         -g69<1,1,0>D    g18<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g74.1<2>UD      g71<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g76.1<2>UD      g72<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g72UD           g74UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $7 };
cmp.l.f0.0(16)  g79<1>F         (abs)g72<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $7.dst compacted };
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
mov(16)         g79<1>UD        0x00000000UD                    { align1 1H F@1 };

LABEL7:
endif(16)       JIP:  LABEL9                                    { align1 1H };

LABEL9:
else(16)        JIP:  LABEL5          UIP:  LABEL5              { align1 1H };

LABEL6:
mov(16)         g79<1>UD        0x00000000UD                    { align1 1H A@1 };

LABEL5:
endif(16)       JIP:  LABEL10                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(16)        g83UD           g100UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $8 };
cmp.l.f0.0(16)  null<1>F        (abs)g83<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $8.dst compacted };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
add(16)         g85<1>D         g16<1,1,0>D     144D            { align1 1H compacted };
cmp.l.f0.0(16)  g87<1>UD        g85<1,1,0>UD    0x00000090UD    { align1 1H I@1 compacted };
mov(8)          g92<2>UD        g85<4,4,1>UD                    { align1 1Q };
mov(8)          g94<2>UD        g86<4,4,1>UD                    { align1 2Q };
add(16)         g89<1>D         -g87<1,1,0>D    g18<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g92.1<2>UD      g89<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g94.1<2>UD      g90<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g90UD           g92UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $9 };
cmp.l.f0.0(16)  null<1>F        (abs)g90<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $9.dst compacted };
(+f0.0) if(16)  JIP:  LABEL14         UIP:  LABEL13             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g91<1>D         g16<1,1,0>D     148D            { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
cmp.l.f0.0(16)  g93<1>UD        g91<1,1,0>UD    0x00000094UD    { align1 1H I@1 compacted };
mov(8)          g98<2>UD        g91<4,4,1>UD                    { align1 1Q };
mov(8)          g100<2>UD       g92<4,4,1>UD                    { align1 2Q $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g95<1>D         -g93<1,1,0>D    g18<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g98.1<2>UD      g95<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g100.1<2>UD     g96<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g96UD           g98UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $8 };
cmp.l.f0.0(16)  g81<1>F         (abs)g96<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $8.dst compacted };
else(16)        JIP:  LABEL13         UIP:  LABEL13             { align1 1H };

LABEL14:
mov(16)         g81<1>UD        0x00000000UD                    { align1 1H F@1 };

LABEL13:
endif(16)       JIP:  LABEL15                                   { align1 1H };

LABEL15:
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
mov(16)         g81<1>UD        0x00000000UD                    { align1 1H A@1 };

LABEL11:
endif(16)       JIP:  LABEL10                                   { align1 1H };
cmp.nz.f0.0(16) g103<1>D        g53<1,1,0>D     0D              { align1 1H $8.src compacted };
mov(16)         g85<2>W         -g81<8,8,1>D                    { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
and(16)         g101<1>UW       g85<16,8,2>UW   0x0001UW        { align1 1H I@1 };
mov(16)         g81<2>W         -g79<8,8,1>D                    { align1 1H A@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g102<1>W        g101<32,16,2>B                  { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
and(16)         g98<1>UW        g81<16,8,2>UW   0x0001UW        { align1 1H I@2 };
cmp.nz.f0.0(16) g107<1>W        g102<16,16,1>W  0W              { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g99<1>W         g98<32,16,2>B                   { align1 1H I@2 };
mov(16)         g105<1>D        g107<8,8,1>W                    { align1 1H I@2 };
cmp.nz.f0.0(16) g112<1>W        g99<16,16,1>W   0W              { align1 1H I@2 };
and(16)         g108<1>UD       g103<1,1,0>UD   g105<1,1,0>UD   { align1 1H I@2 compacted };
mov(16)         g110<1>D        g112<8,8,1>W                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
and.nz.f0.0(16) g67<1>UD        g108<1,1,0>UD   g110<1,1,0>UD   { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL16             { align1 1H };
add(16)         g113<1>D        g16<1,1,0>D     132D            { align1 1H compacted };
add(16)         g118<1>D        g16<1,1,0>D     144D            { align1 1H compacted };
add(16)         g70<1>D         g63<1,1,0>D     32D             { align1 1H $6.src compacted };
send(16)        g4UD            g28UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $10 };
cmp.l.f0.0(16)  g115<1>UD       g113<1,1,0>UD   0x00000084UD    { align1 1H I@3 compacted };
mov(8)          g102<2>UD       g118<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g104<2>UD       g119<4,4,1>UD                   { align1 2Q I@4 };
cmp.l.f0.0(16)  g120<1>UD       g118<1,1,0>UD   0x00000090UD    { align1 1H compacted };
mov(8)          g109<2>UD       g70<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g111<2>UD       g71<4,4,1>UD                    { align1 2Q I@6 };
add(16)         g117<1>D        -g115<1,1,0>D   g18<1,1,0>D     { align1 1H I@6 compacted };
add(16)         g115<1>D        g63<1,1,0>D     16D             { align1 1H compacted };
add(16)         g122<1>D        -g120<1,1,0>D   g18<1,1,0>D     { align1 1H I@5 compacted };
cmp.l.f0.0(16)  g119<1>UD       g115<1,1,0>UD   0x00000010UD    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g79<1>UD        g70<1,1,0>UD    0x00000020UD    { align1 1H compacted };
mov(8)          g102.1<2>UD     g122<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g104.1<2>UD     g123<4,4,1>UD                   { align1 2Q I@4 };
add(16)         g123<1>F        g83<1,1,0>F     g36<1,1,0>F     { align1 1H I@1 compacted };
add(16)         g121<1>D        -g119<1,1,0>D   g65<1,1,0>D     { align1 1H I@4 compacted };
add(16)         g81<1>D         -g79<1,1,0>D    g65<1,1,0>D     { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
send(16)        g73UD           g102UD          nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $11 };
mul(16)         g1<1>F          g123<1,1,0>F    0x3f000000F  /* 0.5F */ { align1 1H F@1 compacted };
mov(8)          g109.1<2>UD     g81<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g111.1<2>UD     g82<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g101<2>UD       g113<4,4,1>UD                   { align1 1Q $11.src };
mov(8)          g103<2>UD       g114<4,4,1>UD                   { align1 2Q $11.src };
mov(8)          g105<2>UD       g115<4,4,1>UD                   { align1 1Q $11.src };
mov(8)          g107<2>UD       g116<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g20UD           g109UD          nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $12 };
mov(8)          g101.1<2>UD     g117<4,4,1>UD                   { align1 1Q I@4 };
mov(8)          g103.1<2>UD     g118<4,4,1>UD                   { align1 2Q I@4 };
mov(8)          g105.1<2>UD     g121<4,4,1>UD                   { align1 1Q I@4 };
mov(8)          g107.1<2>UD     g122<4,4,1>UD                   { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
send(16)        g69UD           g101UD          nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g12UD           g105UD          nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $14 };
mul(16)         g96<1>F         g1<1,1,0>F      g4<1,1,0>F      { align1 1H @1 $10.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.ge(16)      g38<1>F         g73<1,1,0>F     g75<1,1,0>F     { align1 1H $11.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.ge(16)      g40<1>F         g83<1,1,0>F     g38<1,1,0>F     { align1 1H F@1 compacted };
mul(16)         g90<1>F         g1<1,1,0>F      g20<1,1,0>F     { align1 1H @6 $12.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mul(16)         g42<1>F         g40<1,1,0>F     0x34000000F  /* 1.19209e-07F */ { align1 1H F@2 compacted };
add(16)         g79<1>F         g83<1,1,0>F     g42<1,1,0>F     { align1 1H F@1 compacted };
add(16)         g81<1>F         g73<1,1,0>F     g42<1,1,0>F     { align1 1H I@7 compacted };
add(16)         g125<1>F        g73<1,1,0>F     g69<1,1,0>F     { align1 1H $13.dst compacted };
add(16)         g84<1>F         g79<1,1,0>F     -g36<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g86<1>F         g81<1,1,0>F     -g69<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g82<1>F         g75<1,1,0>F     g42<1,1,0>F     { align1 1H compacted };
mul(16)         g32<1>F         g125<1,1,0>F    0x3f000000F  /* 0.5F */ { align1 1H F@4 compacted };
mov(16)         g43<1>UD        0x000000c0UD                    { align1 1H F@2 };
mul(16)         g124<1>F        g1<1,1,0>F      g12<1,1,0>F     { align1 1H $14.dst compacted };
add(16)         g126<1>F        g75<1,1,0>F     g71<1,1,0>F     { align1 1H $13.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mul(16)         g92<1>F         g86<1,1,0>F     0x3f000000F  /* 0.5F */ { align1 1H F@5 compacted };
add(16)         g88<1>F         g82<1,1,0>F     -g71<1,1,0>F    { align1 1H F@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mul(16)         g94<1>F         g32<1,1,0>F     g6<1,1,0>F      { align1 1H @5 $10.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
mul(16)         g122<1>F        g32<1,1,0>F     g14<1,1,0>F     { align1 1H I@2 compacted };
mul(16)         g82<1>F         g32<1,1,0>F     g22<1,1,0>F     { align1 1H $12.dst compacted };
mul(16)         g34<1>F         g126<1,1,0>F    0x3f000000F  /* 0.5F */ { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mul(16)         g101<1>F        g92<1,1,0>F     (abs)g6<1,1,0>F { align1 1H F@6 compacted };
mul(16)         g111<1>F        g92<1,1,0>F     (abs)g14<1,1,0>F { align1 1H $12.src compacted };
mul(16)         g117<1>F        g92<1,1,0>F     (abs)g22<1,1,0>F { align1 1H I@4 compacted };
add(16)         g98<1>F         g96<1,1,0>F     g94<1,1,0>F     { align1 1H F@7 compacted };
add(16)         g126<1>F        g124<1,1,0>F    g122<1,1,0>F    { align1 1H F@7 compacted };
mul(16)         g1<1>F          g34<1,1,0>F     g16<1,1,0>F     { align1 1H @6 $14.dst compacted };
mul(16)         g96<1>F         g34<1,1,0>F     g24<1,1,0>F     { align1 1H $12.dst compacted };
add(16)         g94<1>F         g90<1,1,0>F     g82<1,1,0>F     { align1 1H F@7 compacted };
mul(16)         g90<1>F         g84<1,1,0>F     0x3f000000F  /* 0.5F */ { align1 1H compacted };
mov(16)         g82<1>UD        0x00000001UD                    { align1 1H F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g28<1>F         g1<1,1,0>F      g126<1,1,0>F    { align1 1H F@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mul(16)         g103<1>F        g90<1,1,0>F     (abs)g4<1,1,0>F { align1 1H F@2 compacted };
mul(16)         g113<1>F        g90<1,1,0>F     (abs)g12<1,1,0>F { align1 1H I@7 compacted };
mul(16)         g119<1>F        g90<1,1,0>F     (abs)g20<1,1,0>F { align1 1H compacted };
add(16)         g69<1>F         g28<1,1,0>F     g18<1,1,0>F     { align1 1H @4 $14.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(16)         g106<1>F        g103<1,1,0>F    g101<1,1,0>F    { align1 1H F@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mul(16)         g100<1>F        g34<1,1,0>F     g8<1,1,0>F      { align1 1H $10.dst compacted };
add(16)         g74<1>F         g113<1,1,0>F    g111<1,1,0>F    { align1 1H F@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g76<1>F         g119<1,1,0>F    g117<1,1,0>F    { align1 1H F@5 compacted };
add(16)         g102<1>F        g100<1,1,0>F    g98<1,1,0>F     { align1 1H F@3 compacted };
add(16)         g98<1>F         g96<1,1,0>F     g94<1,1,0>F     { align1 1H compacted };
mul(16)         g93<1>F         g88<1,1,0>F     0x3f000000F  /* 0.5F */ { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(16)         g104<1>F        g102<1,1,0>F    g10<1,1,0>F     { align1 1H @3 $10.dst compacted };
add(16)         g100<1>F        g98<1,1,0>F     g26<1,1,0>F     { align1 1H @3 $12.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mul(16)         g108<1>F        g93<1,1,0>F     (abs)g8<1,1,0>F { align1 1H F@3 compacted };
mul(16)         g114<1>F        g93<1,1,0>F     (abs)g16<1,1,0>F { align1 1H I@7 compacted };
mul(16)         g120<1>F        g93<1,1,0>F     (abs)g24<1,1,0>F { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g110<1>F        g108<1,1,0>F    g106<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g116<1>F        g114<1,1,0>F    g74<1,1,0>F     { align1 1H A@3 compacted };
add(16)         g122<1>F        g120<1,1,0>F    g76<1,1,0>F     { align1 1H F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g29<1>F         g104<1,1,0>F    -g110<1,1,0>F   { align1 1H F@3 compacted };
add(16)         g37<1>F         g104<1,1,0>F    g110<1,1,0>F    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g31<1>F         g69<1,1,0>F     -g116<1,1,0>F   { align1 1H F@4 compacted };
add(16)         g39<1>F         g69<1,1,0>F     g116<1,1,0>F    { align1 1H compacted };
add(16)         g33<1>F         g100<1,1,0>F    -g122<1,1,0>F   { align1 1H F@5 compacted };
add(16)         g41<1>F         g100<1,1,0>F    g122<1,1,0>F    { align1 1H compacted };
else(16)        JIP:  LABEL16         UIP:  LABEL16             { align1 1H };

LABEL17:
mov(16)         g82<1>UD        0x00000000UD                    { align1 1H A@1 };
mov(16)         g43<1>UD        0x00000000UD                    { align1 1H A@2 };

LABEL16:
endif(16)       JIP:  LABEL10                                   { align1 1H };
cmp.nz.f0.0(16) g123<1>D        g3.2<0,1,0>D    0D              { align1 1H F@1 compacted };
and.nz.f0.0(16) null<1>UD       g123<8,8,1>UD   ~g67<8,8,1>D    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL18         UIP:  LABEL18             { align1 1H };
add(16)         g124<1>D        g63<1,1,0>D     12D             { align1 1H I@2 compacted };
add(16)         g2<1>D          g63<1,1,0>D     28D             { align1 1H A@3 compacted };
add(16)         g7<1>D          g63<1,1,0>D     44D             { align1 1H compacted };
mov(16)         g82<1>UD        0x00000001UD                    { align1 1H I@7 };
mov(16)         g53<1>UD        0x00000000UD                    { align1 1H };
cmp.l.f0.0(16)  g126<1>UD       g124<1,1,0>UD   0x0000000cUD    { align1 1H I@5 compacted };
mov(8)          g110<2>UD       g124<4,4,1>UD                   { align1 1Q F@5 };
mov(8)          g112<2>UD       g125<4,4,1>UD                   { align1 2Q };
mov(8)          g114<2>UD       g2<4,4,1>UD                     { align1 1Q A@7 };
mov(8)          g116<2>UD       g3<4,4,1>UD                     { align1 2Q A@3 };
cmp.l.f0.0(16)  g4<1>UD         g2<1,1,0>UD     0x0000001cUD    { align1 1H compacted };
mov(8)          g118<2>UD       g7<4,4,1>UD                     { align1 1Q I@7 };
mov(8)          g120<2>UD       g8<4,4,1>UD                     { align1 2Q A@7 };
cmp.l.f0.0(16)  g9<1>UD         g7<1,1,0>UD     0x0000002cUD    { align1 1H compacted };
add(16)         g1<1>D          -g126<1,1,0>D   g65<1,1,0>D     { align1 1H I@7 compacted };
add(16)         g6<1>D          -g4<1,1,0>D     g65<1,1,0>D     { align1 1H I@5 compacted };
add(16)         g11<1>D         -g9<1,1,0>D     g65<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g110.1<2>UD     g1<4,4,1>UD                     { align1 1Q I@3 };
mov(8)          g112.1<2>UD     g2<4,4,1>UD                     { align1 2Q I@4 };
mov(8)          g114.1<2>UD     g6<4,4,1>UD                     { align1 1Q I@4 };
mov(8)          g116.1<2>UD     g7<4,4,1>UD                     { align1 2Q I@5 };
mov(8)          g118.1<2>UD     g11<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g120.1<2>UD     g12<4,4,1>UD                    { align1 2Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
send(16)        g37UD           g110UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
send(16)        g39UD           g114UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g41UD           g118UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
mov(16)         g29<1>UD        g37<8,8,1>UD                    { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(16)         g31<1>UD        g39<8,8,1>UD                    { align1 1H F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mov(16)         g33<1>UD        g41<8,8,1>UD                    { align1 1H F@2 };

LABEL18:
endif(16)       JIP:  LABEL10                                   { align1 1H };

LABEL10:
else(16)        JIP:  LABEL3          UIP:  LABEL3              { align1 1H };

LABEL4:
mov(16)         g82<1>UD        0x00000000UD                    { align1 1H I@7 };
mov(16)         g43<1>UD        0x00000000UD                    { align1 1H I@7 };

LABEL3:
endif(16)       JIP:  LABEL19                                   { align1 1H };

LABEL19:
else(16)        JIP:  LABEL1          UIP:  LABEL1              { align1 1H };

LABEL2:
mov(16)         g82<1>UD        0x00000000UD                    { align1 1H I@4 };
mov(16)         g43<1>UD        0x00000000UD                    { align1 1H I@4 };
mov(16)         g53<1>UD        0x00000000UD                    { align1 1H I@7 };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
mov(16)         g12<1>D         0D                              { align1 WE_all 1H I@4 };
mov(16)         g12<1>D         g82<8,8,1>D                     { align1 1H };
cmp.z.f0.0(16)  null<1>D        g59<8,8,1>D     0D              { align1 1H };
add(8)          g12.1<2>D       g12<8,4,2>D     g12.1<8,4,2>D   { align1 WE_all 1Q I@2 };
add(4)          g12.2<4>D       g12.1<8,2,4>D   g12.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g12.3<4>D       g12.1<8,2,4>D   g12.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g12.4<1>D       g12.3<0,1,0>D   g12.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g13.4<1>D       g13.3<0,1,0>D   g13.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(8)          g13<1>D         g12.7<0,1,0>D   g13<1,1,0>D     { align1 WE_all 1Q I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL21         UIP:  LABEL20             { align1 1H };
add(8)          g64<1>D         g45<8,4,2>D     36D             { align1 1Q F@4 compacted };
add(8)          g14<1>D         g47<8,4,2>D     36D             { align1 2Q F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
mov(16)         g103<1>D        g13.7<0,1,0>D                   { align1 1H };
cmp.l.f0.0(8)   g65<1>UD        g64<8,8,1>UD    g45<8,4,2>UD    { align1 1Q I@3 };
cmp.l.f0.0(8)   g15<1>UD        g14<8,8,1>UD    g47<8,4,2>UD    { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g99<2>UD        g64<4,4,1>UD                    { align1 1Q F@1 };
mov(8)          g101<2>UD       g14<4,4,1>UD                    { align1 2Q F@1 };
add(8)          g66<1>D         -g65<8,8,1>D    g45.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g16<1>D         -g15<8,8,1>D    g47.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g99.1<2>UD      g66<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g101.1<2>UD     g16<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g84UD           g99UD           g103UD          0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $8 };
else(16)        JIP:  LABEL20         UIP:  LABEL20             { align1 1H };

LABEL21:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
mov(16)         g84<1>UD        0x00000000UD                    { align1 1H F@1 };

LABEL20:
endif(16)       JIP:  LABEL0                                    { align1 1H };
mov(16)         g17<1>D         0D                              { align1 WE_all 1H };
mov(16)         g17<1>D         g82<8,8,1>D                     { align1 1H };
cmp.z.f0.0(16)  null<1>D        g82<8,8,1>D     0D              { align1 1H };
add(16)         g21<1>W         g78<16,16,1>UW  -1W             { align1 WE_all 1H };
mov(16)         a0<1>UW         0x0220UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g21<8,8,1>W     0x0002UW        { align1 WE_all 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0220UW        { align1 WE_all 1H A@1 };
mov(16)         g19<1>UD        g[a0]<VxH,1,0>UD                { align1 WE_all 1H A@1 compacted };
mov(1)          g19<1>D         0D                              { align1 WE_all 1N I@1 };
add(8)          g19.1<2>D       g19<8,4,2>D     g19.1<8,4,2>D   { align1 WE_all 1Q I@1 };
add(4)          g19.2<4>D       g19.1<8,2,4>D   g19.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g19.3<4>D       g19.1<8,2,4>D   g19.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g19.4<1>D       g19.3<0,1,0>D   g19.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g20.4<1>D       g20.3<0,1,0>D   g20.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(8)          g20<1>D         g19.7<0,1,0>D   g20<1,1,0>D     { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g22<1>D         g84<0,1,0>D     g19<1,1,0>D     { align1 1H compacted };
(+f0.0) if(16)  JIP:  LABEL23         UIP:  LABEL22             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g33<1>UD        0x7f800000UD                    { align1 1H F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g31<1>UD        0x7f800000UD                    { align1 1H F@4 };
mov(16)         g29<1>UD        0x7f800000UD                    { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g41<1>UD        0xff800000UD                    { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g39<1>UD        0xff800000UD                    { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g37<1>UD        0xff800000UD                    { align1 1H F@2 };
mov(16)         g107<1>UD       0x7f800000UD                    { align1 1H F@7 };
mov(16)         g105<1>UD       0x7f800000UD                    { align1 1H F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g103<1>UD       0x7f800000UD                    { align1 1H F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g101<1>UD       0xff800000UD                    { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g99<1>UD        0xff800000UD                    { align1 1H F@1 };
mov(16)         g97<1>UD        0xff800000UD                    { align1 1H F@1 };
else(16)        JIP:  LABEL22         UIP:  LABEL22             { align1 1H };

LABEL23:
shl(16)         g24<1>D         g22<8,8,1>D     0x00000005UD    { align1 1H A@2 };
mov(8)          g27<1>UD        g51.1<8,4,2>UD                  { align1 1Q F@7 };
mov(8)          g28<1>UD        g57.1<8,4,2>UD                  { align1 2Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(8)          g63<1>D         g51<8,4,2>D     g24<1,1,0>D     { align1 1Q I@3 compacted };
add(8)          g64<1>D         g57<8,4,2>D     g25<1,1,0>D     { align1 2Q I@4 compacted };
shr(16)         g25<1>UD        g22<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
shl(16)         g23<1>D         g53<8,8,1>D     0x00000018UD    { align1 1H };
cmp.l.f0.0(8)   g65<1>UD        g63<8,8,1>UD    g51<8,4,2>UD    { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(8)          g109<2>UD       g63<4,4,1>UD                    { align1 1Q F@5 };
cmp.l.f0.0(8)   g66<1>UD        g64<8,8,1>UD    g57<8,4,2>UD    { align1 2Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $15.src };
mov(8)          g111<2>UD       g64<4,4,1>UD                    { align1 2Q F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
or(16)          g35<1>UD        g61<1,1,0>UD    g23<1,1,0>UD    { align1 1H A@2 compacted };
add3(16)        g67<1>D         g27<8,8,1>D     g25<8,8,1>D     -g65<1,1,1>D { align1 1H I@3 };
mov(8)          g111.1<2>UD     g68<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g109.1<2>UD     g67<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g109UD          g29UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g69<1>D         g63<1,1,0>D     16D             { align1 1H F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
cmp.l.f0.0(16)  g71<1>UD        g69<1,1,0>UD    g63<1,1,0>UD    { align1 1H A@1 compacted };
mov(8)          g110<2>UD       g69<4,4,1>UD                    { align1 1Q $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $15.src };
mov(8)          g112<2>UD       g70<4,4,1>UD                    { align1 2Q $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g73<1>D         -g71<1,1,0>D    g67<1,1,0>D     { align1 1H A@2 compacted };
mov(8)          g112.1<2>UD     g74<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g110.1<2>UD     g73<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g110UD          g37UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g97<1>F         g29<1,1,0>F     g37<1,1,0>F     { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g99<1>F         g31<1,1,0>F     g39<1,1,0>F     { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g101<1>F        g33<1,1,0>F     g41<1,1,0>F     { align1 1H F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g103<1>UD       g97<8,8,1>UD                    { align1 1H F@3 };
mov(16)         g105<1>UD       g99<8,8,1>UD                    { align1 1H F@2 };
mov(16)         g107<1>UD       g101<8,8,1>UD                   { align1 1H F@1 };

LABEL22:
endif(16)       JIP:  LABEL0                                    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g59<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g77<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H F@3 compacted };
mov(16)         g77<1>F         g29<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g79<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H F@3 compacted };
mov(16)         g79<1>F         g31<1,1,0>F                     { align1 1H compacted };
mov(16)         g81<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H F@3 compacted };
mov(16)         g81<1>F         g33<1,1,0>F                     { align1 1H compacted };
mov(16)         g83<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g83<1>F         g37<1,1,0>F                     { align1 1H compacted };
mov(16)         g85<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H @6 $8.dst compacted };
mov(16)         g85<1>F         g39<1,1,0>F                     { align1 1H compacted };
mov(16)         g87<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H F@6 compacted };
mov(16)         g87<1>F         g41<1,1,0>F                     { align1 1H compacted };
mov(16)         g89<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@5 compacted };
mov(16)         g89<1>F         g103<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g91<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@4 compacted };
mov(16)         g91<1>F         g105<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g93<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@3 compacted };
mov(16)         g93<1>F         g107<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g95<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g95<1>F         g97<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(8)          g109<2>UD       g77.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
mov(8)          g122<2>UD       g79.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
mov(8)          g27<2>UD        g81.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
mov(8)          g51<2>UD        g83.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
mov(8)          g67<2>UD        g87.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(16)         g97<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@7 compacted };
mov(16)         g97<1>F         g99<1,1,0>F                     { align1 1H compacted };
mov(8)          g72<2>UD        g89.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(8)          g111<2>UD       g93.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g116<2>UD       g95.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g60<2>UD        g85.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.l(8)        g120<2>F        g79<8,4,2>F     g122<8,4,2>F    { align1 WE_all 1Q I@7 };
mov(16)         g99<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g99<1>F         g101<1,1,0>F                    { align1 1H compacted };
sel.l(8)        g25<2>F         g81<8,4,2>F     g27<8,4,2>F     { align1 WE_all 1Q I@7 };
mov(8)          g103<2>UD       g91.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
sel.ge(8)       g37<2>F         g83<8,4,2>F     g51<8,4,2>F     { align1 WE_all 1Q I@7 };
sel.ge(8)       g65<2>F         g87<8,4,2>F     g67<8,4,2>F     { align1 WE_all 1Q I@6 };
mov(8)          g124<2>UD       g97.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.l(8)        g70<2>F         g89<8,4,2>F     g72<8,4,2>F     { align1 WE_all 1Q I@6 };
sel.l(8)        g106<2>F        g93<8,4,2>F     g111<8,4,2>F    { align1 WE_all 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sel.ge(8)       g114<2>F        g95<8,4,2>F     g116<8,4,2>F    { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.ge(8)       g58<2>F         g85<8,4,2>F     g60<8,4,2>F     { align1 WE_all 1Q I@3 };
mov(8)          g79.1<2>UD      g120<8,4,2>UD                   { align1 WE_all 1Q A@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g3<2>UD         g99.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(8)          g81.1<2>UD      g25<8,4,2>UD                    { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.l(8)        g75<2>F         g91<8,4,2>F     g103<8,4,2>F    { align1 WE_all 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g83.1<2>UD      g37<8,4,2>UD                    { align1 WE_all 1Q F@7 };
mov(8)          g87.1<2>UD      g65<8,4,2>UD                    { align1 WE_all 1Q F@6 };
sel.l(8)        g101<2>F        g77<8,4,2>F     g109<8,4,2>F    { align1 WE_all 1Q };
mov(8)          g89.1<2>UD      g70<8,4,2>UD                    { align1 WE_all 1Q F@6 };
mov(8)          g93.1<2>UD      g106<8,4,2>UD                   { align1 WE_all 1Q F@5 };
mov(8)          g95.1<2>UD      g114<8,4,2>UD                   { align1 WE_all 1Q F@4 };
mov(8)          g85.1<2>UD      g58<8,4,2>UD                    { align1 WE_all 1Q F@3 };
mov(4)          g9<4>UD         g79.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
sel.ge(8)       g1<2>F          g99<8,4,2>F     g3<8,4,2>F      { align1 WE_all 1Q I@7 };
mov(8)          g91.1<2>UD      g75<8,4,2>UD                    { align1 WE_all 1Q F@3 };
mov(4)          g13<4>UD        g87.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g11<4>UD        g87.1<8,2,4>UD                  { align1 WE_all 1N };
mov(8)          g77.1<2>UD      g101<8,4,2>UD                   { align1 WE_all 1Q F@2 };
sel.ge(8)       g119<2>F        g97<8,4,2>F     g124<8,4,2>F    { align1 WE_all 1Q $1.src };
mov(4)          g121<4>UD       g81.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g19<4>UD        g89.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g17<4>UD        g89.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g31<4>UD        g93.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g29<4>UD        g93.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g35<4>UD        g95.1<8,2,4>UD                  { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(4)          g7<4>UD         g85.2<8,2,4>UD                  { align1 WE_all 1N $0.src };
mov(4)          g5<4>UD         g85.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g37<4>UD        g95.2<8,2,4>UD                  { align1 WE_all 1N };
mov(8)          g99.1<2>UD      g1<8,4,2>UD                     { align1 WE_all 1Q F@2 };
mov(4)          g25<4>UD        g91.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g23<4>UD        g91.1<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g68<4>F         g11<8,2,4>F     g13<8,2,4>F     { align1 WE_all 1N $6.src };
mov(4)          g114<4>UD       g77.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(4)          g112<4>UD       g77.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(8)          g97.1<2>UD      g119<8,4,2>UD                   { align1 WE_all 1Q F@2 };
sel.l(4)        g73<4>F         g17<8,2,4>F     g19<8,2,4>F     { align1 WE_all 1N $7.src };
mov(4)          g3<4>UD         g79.1<8,2,4>UD                  { align1 WE_all 1N F@4 };
sel.ge(4)       g61<4>F         g5<8,2,4>F      g7<8,2,4>F      { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.ge(4)       g117<4>F        g35<8,2,4>F     g37<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g59<4>UD        g99.2<8,2,4>UD                  { align1 WE_all 1N A@7 };
mov(4)          g57<4>UD        g99.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g125<4>UD       g83.1<8,2,4>UD                  { align1 WE_all 1N F@5 };
sel.l(4)        g104<4>F        g23<8,2,4>F     g25<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g87.2<4>UD      g68<8,2,4>UD                    { align1 WE_all 1N F@5 };
sel.l(4)        g110<4>F        g112<8,2,4>F    g114<8,2,4>F    { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(4)          g43<4>UD        g97.2<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g41<4>UD        g97.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g89.2<4>UD      g73<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g1<4>UD         g83.2<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g123<4>F        g3<8,2,4>F      g9<8,2,4>F      { align1 WE_all 1N I@7 };
mov(4)          g85.2<4>UD      g61<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g95.2<4>UD      g117<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g119<4>UD       g81.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g91.2<4>UD      g104<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g16<4>UD        g87.3<8,2,4>UD                  { align1 WE_all 1N A@6 };
mov(4)          g14<4>UD        g87.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g77.2<4>UD      g110<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g20<4>UD        g89.1<8,2,4>UD                  { align1 WE_all 1N A@6 };
sel.ge(4)       g52<4>F         g125<8,2,4>F    g1<8,2,4>F      { align1 WE_all 1N I@7 };
mov(4)          g79.2<4>UD      g123<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g38<4>UD        g95.1<8,2,4>UD                  { align1 WE_all 1N A@5 };
mov(4)          g22<4>UD        g89.3<8,2,4>UD                  { align1 WE_all 1N F@4 };
sel.l(4)        g112<4>F        g29<8,2,4>F     g31<8,2,4>F     { align1 WE_all 1N };
sel.l(4)        g33<4>F         g119<8,2,4>F    g121<8,2,4>F    { align1 WE_all 1N I@7 };
mov(4)          g26<4>UD        g91.1<8,2,4>UD                  { align1 WE_all 1N A@6 };
sel.ge(4)       g69<4>F         g14<8,2,4>F     g16<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g4<4>F          g57<8,2,4>F     g59<8,2,4>F     { align1 WE_all 1N };
mov(4)          g8<4>UD         g85.1<8,2,4>UD                  { align1 WE_all 1N F@6 };
mov(4)          g10<4>UD        g85.3<8,2,4>UD                  { align1 WE_all 1N F@6 };
mov(4)          g117<4>UD       g77.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g83.2<4>UD      g52<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g24<4>UD        g79.3<8,2,4>UD                  { align1 WE_all 1N A@7 };
mov(4)          g18<4>UD        g79.1<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g74<4>F         g20<8,2,4>F     g22<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g93.2<4>UD      g112<8,2,4>UD                   { align1 WE_all 1N F@5 };
mov(4)          g81.2<4>UD      g33<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g87.3<4>UD      g69<8,2,4>UD                    { align1 WE_all 1N F@3 };
sel.ge(4)       g125<4>F        g41<8,2,4>F     g43<8,2,4>F     { align1 WE_all 1N };
mov(4)          g99.2<4>UD      g4<8,2,4>UD                     { align1 WE_all 1N F@3 };
sel.ge(4)       g64<4>F         g8<8,2,4>F      g10<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g28<4>UD        g91.3<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g119<4>UD       g77.3<8,2,4>UD                  { align1 WE_all 1N F@6 };
mov(4)          g2<4>UD         g83.1<8,2,4>UD                  { align1 WE_all 1N A@7 };
sel.l(4)        g12<4>F         g18<8,2,4>F     g24<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g89.3<4>UD      g74<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g122<4>UD       g81.1<8,2,4>UD                  { align1 WE_all 1N A@7 };
sel.ge(4)       g87.4<1>F       g87.3<0,1,0>F   g87.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.ge(4)       g88.4<1>F       g88.3<0,1,0>F   g88.4<4,4,1>F   { align1 WE_all 1N I@7 };
mov(4)          g97.2<4>UD      g125<8,2,4>UD                   { align1 WE_all 1N F@5 };
mov(4)          g62<4>UD        g99.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g60<4>UD        g99.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g85.3<4>UD      g64<8,2,4>UD                    { align1 WE_all 1N F@4 };
sel.l(4)        g105<4>F        g26<8,2,4>F     g28<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g115<4>F        g117<8,2,4>F    g119<8,2,4>F    { align1 WE_all 1N I@7 };
mov(4)          g32<4>UD        g93.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g34<4>UD        g93.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g40<4>UD        g95.3<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g79.3<4>UD      g12<8,2,4>UD                    { align1 WE_all 1N F@5 };
sel.l(4)        g89.4<1>F       g89.3<0,1,0>F   g89.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.l(4)        g90.4<1>F       g90.3<0,1,0>F   g90.4<4,4,1>F   { align1 WE_all 1N I@7 };
mov(4)          g4<4>UD         g83.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g88<1>F         g87.7<0,1,0>F   g88<8,8,1>F     { align1 WE_all 1Q F@5 };
mov(4)          g53<4>UD        g97.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g51<4>UD        g97.1<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g85.4<1>F       g85.3<0,1,0>F   g85.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.ge(4)       g86.4<1>F       g86.3<0,1,0>F   g86.4<4,4,1>F   { align1 WE_all 1N I@7 };
mov(4)          g91.3<4>UD      g105<8,2,4>UD                   { align1 WE_all 1N F@7 };
mov(4)          g77.3<4>UD      g115<8,2,4>UD                   { align1 WE_all 1N F@6 };
sel.l(4)        g113<4>F        g32<8,2,4>F     g34<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g124<4>UD       g81.3<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g79.4<1>F       g79.3<0,1,0>F   g79.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.l(4)        g80.4<1>F       g80.3<0,1,0>F   g80.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.l(8)        g90<1>F         g89.7<0,1,0>F   g90<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(4)       g57<4>F         g2<8,2,4>F      g4<8,2,4>F      { align1 WE_all 1N I@6 };
sel.ge(4)       g118<4>F        g38<8,2,4>F     g40<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g126<4>F        g51<8,2,4>F     g53<8,2,4>F     { align1 WE_all 1N I@4 };
sel.ge(8)       g86<1>F         g85.7<0,1,0>F   g86<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.l(4)        g91.4<1>F       g91.3<0,1,0>F   g91.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g92.4<1>F       g92.3<0,1,0>F   g92.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g77.4<1>F       g77.3<0,1,0>F   g77.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g78.4<1>F       g78.3<0,1,0>F   g78.4<4,4,1>F   { align1 WE_all 1N I@2 };
mov(4)          g93.3<4>UD      g113<8,2,4>UD                   { align1 WE_all 1N };
sel.l(4)        g36<4>F         g122<8,2,4>F    g124<8,2,4>F    { align1 WE_all 1N I@2 };
sel.l(8)        g80<1>F         g79.7<0,1,0>F   g80<8,8,1>F     { align1 WE_all 1Q };
mov(4)          g83.3<4>UD      g57<8,2,4>UD                    { align1 WE_all 1N F@7 };
mov(4)          g95.3<4>UD      g118<8,2,4>UD                   { align1 WE_all 1N F@7 };
mov(4)          g97.3<4>UD      g126<8,2,4>UD                   { align1 WE_all 1N F@7 };
sel.ge(4)       g5<4>F          g60<8,2,4>F     g62<8,2,4>F     { align1 WE_all 1N };
sel.l(8)        g92<1>F         g91.7<0,1,0>F   g92<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.l(8)        g78<1>F         g77.7<0,1,0>F   g78<8,8,1>F     { align1 WE_all 1Q F@5 };
sel.l(4)        g93.4<1>F       g93.3<0,1,0>F   g93.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g94.4<1>F       g94.3<0,1,0>F   g94.4<4,4,1>F   { align1 WE_all 1N I@4 };
mov(4)          g81.3<4>UD      g36<8,2,4>UD                    { align1 WE_all 1N F@7 };
sel.ge(4)       g83.4<1>F       g83.3<0,1,0>F   g83.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g84.4<1>F       g84.3<0,1,0>F   g84.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g95.4<1>F       g95.3<0,1,0>F   g95.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g96.4<1>F       g96.3<0,1,0>F   g96.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g97.4<1>F       g97.3<0,1,0>F   g97.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g98.4<1>F       g98.3<0,1,0>F   g98.4<4,4,1>F   { align1 WE_all 1N I@2 };
mov(4)          g99.3<4>UD      g5<8,2,4>UD                     { align1 WE_all 1N };
sel.l(8)        g94<1>F         g93.7<0,1,0>F   g94<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.l(4)        g81.4<1>F       g81.3<0,1,0>F   g81.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g82.4<1>F       g82.3<0,1,0>F   g82.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(8)       g84<1>F         g83.7<0,1,0>F   g84<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(8)       g96<1>F         g95.7<0,1,0>F   g96<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(8)       g98<1>F         g97.7<0,1,0>F   g98<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.ge(4)       g99.4<1>F       g99.3<0,1,0>F   g99.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g100.4<1>F      g100.3<0,1,0>F  g100.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g82<1>F         g81.7<0,1,0>F   g82<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.ge(8)       g100<1>F        g99.7<0,1,0>F   g100<8,8,1>F    { align1 WE_all 1Q F@2 };
(+f0.0) if(16)  JIP:  LABEL24         UIP:  LABEL24             { align1 1H };
add(8)          g67<1>D         g49<8,4,2>D     128D            { align1 1Q compacted };
add(8)          g74<1>D         g55<8,4,2>D     128D            { align1 2Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(16)         g115<1>D        g78.7<0,1,0>D                   { align1 1H };
cmp.l.f0.0(8)   g68<1>UD        g67<8,8,1>UD    g49<8,4,2>UD    { align1 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@3 };
cmp.l.f0.0(8)   g75<1>UD        g74<8,8,1>UD    g55<8,4,2>UD    { align1 2Q };
mov(8)          g111<2>UD       g67<4,4,1>UD                    { align1 1Q };
mov(8)          g113<2>UD       g74<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(8)          g69<1>D         -g68<8,8,1>D    g49.1<8,4,2>D   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@4 };
add(8)          g76<1>D         -g75<8,8,1>D    g55.1<8,4,2>D   { align1 2Q };
mov(8)          g111.1<2>UD     g69<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g113.1<2>UD     g76<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g77UD           g111UD          g115UD          0x08240595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $2 };
add(8)          g101<1>D        g49<8,4,2>D     132D            { align1 1Q compacted };
add(8)          g102<1>D        g55<8,4,2>D     132D            { align1 2Q compacted };
mov(16)         g120<1>D        g80.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g103<1>UD       g101<1,1,0>UD   0x00000084UD    { align1 1H compacted };
mov(8)          g116<2>UD       g101<4,4,1>UD                   { align1 1Q $2.src };
mov(8)          g118<2>UD       g102<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(8)          g70<1>D         -g103<8,8,1>D   g49.1<8,4,2>D   { align1 1Q };
add(8)          g104<1>D        -g104<8,8,1>D   g55.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g116.1<2>UD     g70<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g118.1<2>UD     g104<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g105UD          g116UD          g120UD          0x08240595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $3 };
add(8)          g107<1>D        g55<8,4,2>D     136D            { align1 2Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
mov(16)         g125<1>D        g82.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
mov(8)          g123<2>UD       g107<4,4,1>UD                   { align1 2Q };
add(8)          g106<1>D        g49<8,4,2>D     136D            { align1 1Q $3.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g108<1>UD       g106<1,1,0>UD   0x00000088UD    { align1 1H compacted };
mov(8)          g121<2>UD       g106<4,4,1>UD                   { align1 1Q $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(8)          g71<1>D         -g108<8,8,1>D   g49.1<8,4,2>D   { align1 1Q };
add(8)          g109<1>D        -g109<8,8,1>D   g55.1<8,4,2>D   { align1 2Q I@3 };
mov(8)          g121.1<2>UD     g71<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g123.1<2>UD     g109<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g110UD          g121UD          g125UD          0x08240595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $4 };
add(8)          g112<1>D        g55<8,4,2>D     140D            { align1 2Q $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
mov(16)         g5<1>D          g84.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
mov(8)          g3<2>UD         g112<4,4,1>UD                   { align1 2Q };
add(8)          g111<1>D        g49<8,4,2>D     140D            { align1 1Q $4.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g113<1>UD       g111<1,1,0>UD   0x0000008cUD    { align1 1H I@1 compacted };
mov(8)          g1<2>UD         g111<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(8)          g72<1>D         -g113<8,8,1>D   g49.1<8,4,2>D   { align1 1Q };
add(8)          g114<1>D        -g114<8,8,1>D   g55.1<8,4,2>D   { align1 2Q I@3 };
mov(8)          g1.1<2>UD       g72<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g3.1<2>UD       g114<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g115UD          g1UD            g5UD            0x08240596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $5 };
add(8)          g117<1>D        g55<8,4,2>D     144D            { align1 2Q $3.src compacted };
mov(16)         g10<1>D         g86.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
mov(8)          g8<2>UD         g117<4,4,1>UD                   { align1 2Q };
add(8)          g116<1>D        g49<8,4,2>D     144D            { align1 1Q $5.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g118<1>UD       g116<1,1,0>UD   0x00000090UD    { align1 1H I@1 compacted };
mov(8)          g6<2>UD         g116<4,4,1>UD                   { align1 1Q $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(8)          g73<1>D         -g118<8,8,1>D   g49.1<8,4,2>D   { align1 1Q };
add(8)          g119<1>D        -g119<8,8,1>D   g55.1<8,4,2>D   { align1 2Q I@3 };
mov(8)          g6.1<2>UD       g73<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g8.1<2>UD       g119<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g120UD          g6UD            g10UD           0x08240596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $6 };
add(8)          g122<1>D        g55<8,4,2>D     148D            { align1 2Q $4.src compacted };
mov(16)         g15<1>D         g88.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
mov(8)          g13<2>UD        g122<4,4,1>UD                   { align1 2Q };
add(8)          g121<1>D        g49<8,4,2>D     148D            { align1 1Q $6.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g123<1>UD       g121<1,1,0>UD   0x00000094UD    { align1 1H I@1 compacted };
mov(8)          g11<2>UD        g121<4,4,1>UD                   { align1 1Q $6.src };
add(8)          g74<1>D         -g123<8,8,1>D   g49.1<8,4,2>D   { align1 1Q I@2 };
add(8)          g124<1>D        -g124<8,8,1>D   g55.1<8,4,2>D   { align1 2Q I@3 };
mov(8)          g11.1<2>UD      g74<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g13.1<2>UD      g124<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g125UD          g11UD           g15UD           0x08240596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $7 };
mov(16)         g16<1>D         g90.7<0,1,0>D                   { align1 1H $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g126UD          g45UD           g16UD           0x08240595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(8)          g1<1>D          g45<8,4,2>D     4D              { align1 1Q $8.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $5.src };
add(8)          g2<1>D          g47<8,4,2>D     4D              { align1 2Q $8.src compacted };
mov(16)         g21<1>D         g92.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g3<1>UD         g1<1,1,0>UD     0x00000004UD    { align1 1H I@2 compacted };
mov(8)          g17<2>UD        g1<4,4,1>UD                     { align1 1Q $8.src };
mov(8)          g19<2>UD        g2<4,4,1>UD                     { align1 2Q };
add(8)          g75<1>D         -g3<8,8,1>D     g45.1<8,4,2>D   { align1 1Q I@3 };
add(8)          g4<1>D          -g4<8,8,1>D     g47.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g17.1<2>UD      g75<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g19.1<2>UD      g4<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g5UD            g17UD           g21UD           0x08240595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $9 };
add(8)          g7<1>D          g47<8,4,2>D     8D              { align1 2Q $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
mov(16)         g26<1>D         g94.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
mov(8)          g24<2>UD        g7<4,4,1>UD                     { align1 2Q };
add(8)          g6<1>D          g45<8,4,2>D     8D              { align1 1Q $9.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g8<1>UD         g6<1,1,0>UD     0x00000008UD    { align1 1H I@1 compacted };
mov(8)          g22<2>UD        g6<4,4,1>UD                     { align1 1Q $9.src };
add(8)          g76<1>D         -g8<8,8,1>D     g45.1<8,4,2>D   { align1 1Q I@2 };
add(8)          g9<1>D          -g9<8,8,1>D     g47.1<8,4,2>D   { align1 2Q I@3 };
mov(8)          g22.1<2>UD      g76<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g24.1<2>UD      g9<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g10UD           g22UD           g26UD           0x08240595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $10 };
add(8)          g12<1>D         g47<8,4,2>D     16D             { align1 2Q $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
mov(16)         g31<1>D         g96.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
mov(8)          g29<2>UD        g12<4,4,1>UD                    { align1 2Q };
add(8)          g11<1>D         g45<8,4,2>D     16D             { align1 1Q $10.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(16)  g13<1>UD        g11<1,1,0>UD    0x00000010UD    { align1 1H I@1 compacted };
mov(8)          g27<2>UD        g11<4,4,1>UD                    { align1 1Q $10.src };
add(8)          g77<1>D         -g13<8,8,1>D    g45.1<8,4,2>D   { align1 1Q @2 $2.dst };
add(8)          g14<1>D         -g14<8,8,1>D    g47.1<8,4,2>D   { align1 2Q I@3 };
mov(8)          g27.1<2>UD      g77<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g29.1<2>UD      g14<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g15UD           g27UD           g31UD           0x08240596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $2 };
add(8)          g17<1>D         g47<8,4,2>D     20D             { align1 2Q $9.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
mov(16)         g36<1>D         g98.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
mov(8)          g34<2>UD        g17<4,4,1>UD                    { align1 2Q };
add(8)          g16<1>D         g45<8,4,2>D     20D             { align1 1Q $2.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
cmp.l.f0.0(16)  g18<1>UD        g16<1,1,0>UD    0x00000014UD    { align1 1H I@1 compacted };
mov(8)          g32<2>UD        g16<4,4,1>UD                    { align1 1Q $2.src };
add(8)          g78<1>D         -g18<8,8,1>D    g45.1<8,4,2>D   { align1 1Q @2 $2.dst };
add(8)          g19<1>D         -g19<8,8,1>D    g47.1<8,4,2>D   { align1 2Q I@3 };
mov(8)          g32.1<2>UD      g78<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g34.1<2>UD      g19<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g20UD           g32UD           g36UD           0x08240596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $11 };
add(8)          g22<1>D         g47<8,4,2>D     24D             { align1 2Q $10.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g41<1>D         g100.7<0,1,0>D                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
mov(8)          g39<2>UD        g22<4,4,1>UD                    { align1 2Q };
add(8)          g21<1>D         g45<8,4,2>D     24D             { align1 1Q $11.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
cmp.l.f0.0(16)  g23<1>UD        g21<1,1,0>UD    0x00000018UD    { align1 1H I@1 compacted };
mov(8)          g37<2>UD        g21<4,4,1>UD                    { align1 1Q $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(8)          g79<1>D         -g23<8,8,1>D    g45.1<8,4,2>D   { align1 1Q };
add(8)          g24<1>D         -g24<8,8,1>D    g47.1<8,4,2>D   { align1 2Q I@3 };
mov(8)          g37.1<2>UD      g79<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g39.1<2>UD      g24<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g25UD           g37UD           g41UD           0x08240596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $12 };

LABEL24:
endif(16)       JIP:  LABEL0                                    { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL25                                   { align1 1H };

LABEL25:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q @6 $8.dst };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_indirect_code[] = {
    0x80000065, 0x06058220, 0x02000004, 0xffffffc0,
    0x80030061, 0x4e054410, 0x00000000, 0x76543210,
    0x00040061, 0x1a050220, 0x00000024, 0x00000000,
    0xe2071b40, 0x00010603, 0xe2080040, 0x04010603,
    0x644e1c40, 0x00804e95, 0x00041c69, 0x6f058660,
    0x02461a05, 0x00000004, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa00070c, 0x00340000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa00080c, 0x00300000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x3b050160,
    0x00464e05, 0x00000000, 0xe06d1965, 0x00f03b03,
    0xa03d1940, 0x6f006d02, 0x80102001, 0x00000000,
    0x00000000, 0x00000000, 0x00131961, 0x6c260aa0,
    0x000002a4, 0x00000000, 0x00130061, 0x39260aa0,
    0x000002e4, 0x00000000, 0x00030061, 0x33260aa0,
    0x000002e4, 0x00000000, 0x00030061, 0x2a260aa0,
    0x000002a4, 0x00000000, 0x00130061, 0x37260aa0,
    0x00000264, 0x00000000, 0x00030061, 0x31260aa0,
    0x00000264, 0x00000000, 0x212d0061, 0x001102cc,
    0x2a2f0061, 0x001102cc, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x211c0061, 0x001103cc,
    0x2a1e0061, 0x001103cc, 0x2a6c1761, 0x0011025c,
    0x2a391761, 0x0011026c, 0x21331761, 0x0011026c,
    0x212a1761, 0x0011025c, 0x2a371761, 0x00110244,
    0x21311761, 0x00110244, 0x212d1761, 0x00110204,
    0x2a2f1761, 0x00110204, 0x211c1761, 0x00110304,
    0x2a1e1761, 0x00110304, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x70140000,
    0xfb041c24, 0x00040000, 0x00049270, 0x00010220,
    0x52463d05, 0x00467005, 0x01040022, 0x0001c060,
    0x00003038, 0x00003038, 0xa12c3240, 0x004e1c03,
    0xaa713240, 0x004e1e03, 0x00040069, 0x7a058660,
    0x02463d05, 0x00000003, 0x00031b70, 0x35050220,
    0x52462c05, 0x00441c06, 0x00131b70, 0x72050220,
    0x52467105, 0x00441e06, 0x00030061, 0x20060220,
    0x00342c05, 0x00000000, 0x00130061, 0x22060220,
    0x00347105, 0x00000000, 0x00031c40, 0x36052660,
    0x06463505, 0x00441c26, 0x00131c40, 0x73052660,
    0x06467205, 0x00441e26, 0x00031a61, 0x20260220,
    0x00343605, 0x00000000, 0x00131a61, 0x22260220,
    0x00347305, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x74140000,
    0xfb042024, 0x00040000, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0xa1761740, 0x740e2a02,
    0x80102301, 0x00000000, 0x00000000, 0x00000000,
    0xaa771740, 0x750e6c02, 0x00031a70, 0x3f050220,
    0x52467605, 0x00442a06, 0xa07d1a40, 0x7a007602,
    0x00130070, 0x78050220, 0x52467705, 0x00446c06,
    0xe07b0068, 0x01d03d03, 0x00031c40, 0x79052660,
    0x06463f05, 0x00442a26, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x27010b70, 0x76007d03,
    0x00033361, 0x21060220, 0x00347d05, 0x00000000,
    0x00133361, 0x23060220, 0x00347e05, 0x00000000,
    0x00131e40, 0x7a052660, 0x06467805, 0x00446c26,
    0x00041952, 0x04040e68, 0x0e2e7905, 0x01057b05,
    0x00131961, 0x23260220, 0x00340505, 0x00000000,
    0x00031a61, 0x21260220, 0x00340405, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x3f240000, 0xfb042124, 0x000c0000,
    0x00032461, 0x1c060220, 0x00343f05, 0x00000000,
    0x00132461, 0x1e060220, 0x00344005, 0x00000000,
    0x00042466, 0x00010220, 0x22463f05, 0x00464105,
    0x00031b61, 0x1c260220, 0x00344105, 0x00000000,
    0x00131b61, 0x1e260220, 0x00344205, 0x00000000,
    0x01040022, 0x0001c060, 0x00000f30, 0x00000f00,
    0xa0050040, 0x03003f03, 0xa00b0040, 0x03803f03,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x27071a70, 0x3f000503, 0x270d1a70, 0x3f000b03,
    0x00033461, 0x22060220, 0x00340505, 0x00000000,
    0x00133461, 0x24060220, 0x00340605, 0x00000000,
    0x00030061, 0x26060220, 0x00340b05, 0x00000000,
    0x00130061, 0x28060220, 0x00340c05, 0x00000000,
    0xa0091e40, 0x41020702, 0xa00f1e40, 0x41020d02,
    0x00031a61, 0x22260220, 0x00340905, 0x00000000,
    0x00131b61, 0x24260220, 0x00340a05, 0x00000000,
    0x00031b61, 0x26260220, 0x00340f05, 0x00000000,
    0x00131c61, 0x28260220, 0x00341005, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x0a140000, 0xfb042224, 0x00040000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x10240000, 0xfb042624, 0x000c0000,
    0x00042461, 0x35050020, 0x00660a1f, 0x00000000,
    0x00042566, 0x00010220, 0x22461005, 0x00461205,
    0x01040022, 0x0001c060, 0x00000da0, 0x00000d80,
    0xa0140040, 0x08001003, 0xa01a0040, 0x08c01003,
    0x27161a70, 0x10001403, 0x00033561, 0x27060220,
    0x00341405, 0x00000000, 0x00133561, 0x29060220,
    0x00341505, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xe7201c70, 0x08c01a03,
    0x00030061, 0x64060220, 0x00341a05, 0x00000000,
    0x00130061, 0x66060220, 0x00341b05, 0x00000000,
    0xa0181e40, 0x12021602, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xa0221c40, 0x12022002,
    0x00031a61, 0x27260220, 0x00341805, 0x00000000,
    0x00131b61, 0x29260220, 0x00341905, 0x00000000,
    0x00031b61, 0x64260220, 0x00342205, 0x00000000,
    0x00131c61, 0x66260220, 0x00342305, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x24140000, 0xfb042724, 0x00040000,
    0xa7002570, 0x7f832401, 0x01040022, 0x0001c060,
    0x000001a0, 0x00000190, 0xa0263540, 0x08401003,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xe7281970, 0x08402603, 0x00030061, 0x43060220,
    0x00342605, 0x00000000, 0x00130061, 0x45060220,
    0x00342705, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa02a1b40, 0x12022802,
    0x00031961, 0x43260220, 0x00342a05, 0x00000000,
    0x00131a61, 0x45260220, 0x00342b05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x2b140000, 0xfb044324, 0x00040000,
    0xa7002670, 0x7f832b01, 0x01040022, 0x0001c060,
    0x000000c0, 0x000000b0, 0xa0433640, 0x08801003,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xe7451970, 0x08804303, 0x00030061, 0x4a060220,
    0x00344305, 0x00000000, 0x00130061, 0x4c060220,
    0x00344405, 0x00000000, 0xa0471b40, 0x12024502,
    0x00031961, 0x4a260220, 0x00344705, 0x00000000,
    0x00131a61, 0x4c260220, 0x00344805, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x48140000, 0xfb044a24, 0x00040000,
    0xe74f2770, 0x7f834800, 0x00040024, 0x0001c060,
    0x00000020, 0x00000020, 0x00041161, 0x4f054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040024, 0x0001c060,
    0x00000020, 0x00000020, 0x00040961, 0x4f054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000aa8, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x53140000,
    0xfb046424, 0x00040000, 0xa7002870, 0x7f835301,
    0x01040022, 0x0001c060, 0x000001a0, 0x00000190,
    0xa0550040, 0x09001003, 0xe7571970, 0x09005503,
    0x00030061, 0x5c060220, 0x00345505, 0x00000000,
    0x00130061, 0x5e060220, 0x00345605, 0x00000000,
    0xa0591b40, 0x12025702, 0x00031961, 0x5c260220,
    0x00345905, 0x00000000, 0x00131a61, 0x5e260220,
    0x00345a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x5a140000,
    0xfb045c24, 0x00040000, 0xa7002970, 0x7f835a01,
    0x01040022, 0x0001c060, 0x000000e0, 0x000000d0,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xa05b1140, 0x09401003, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0xe75d1970, 0x09405b03,
    0x00030061, 0x62060220, 0x00345b05, 0x00000000,
    0x00133861, 0x64060220, 0x00345c05, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xa05f1b40, 0x12025d02, 0x00031961, 0x62260220,
    0x00345f05, 0x00000000, 0x00131a61, 0x64260220,
    0x00346005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x60140000,
    0xfb046224, 0x00040000, 0xe7512870, 0x7f836000,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00041161, 0x51054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00040961, 0x51054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000008d0,
    0xae673870, 0x00003503, 0x00040961, 0x55062650,
    0x00465105, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00041965, 0x65058110,
    0x01565506, 0x00010001, 0x00040a61, 0x51062650,
    0x00464f05, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00041a61, 0x66050450,
    0x00686506, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00041a65, 0x62058110,
    0x01565106, 0x00010001, 0x00041a70, 0x6b058550,
    0x25586605, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00041a61, 0x63050450,
    0x00686206, 0x00000000, 0x00041a61, 0x69050560,
    0x00466b05, 0x00000000, 0x00041a70, 0x70058550,
    0x25586305, 0x00000000, 0x206c1a65, 0x69006703,
    0x00041a61, 0x6e050560, 0x00467005, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x2e431965, 0x6e006c03, 0x01040022, 0x0001c060,
    0x00000558, 0x00000538, 0xa0710040, 0x08401003,
    0xa0760040, 0x09001003, 0xa0463640, 0x02003f03,
    0x00044a31, 0x04440000, 0xfb041c24, 0x003c0000,
    0xe7731b70, 0x08407103, 0x00031b61, 0x66060220,
    0x00347605, 0x00000000, 0x00131c61, 0x68060220,
    0x00347705, 0x00000000, 0xe7780070, 0x09007603,
    0x00031d61, 0x6d060220, 0x00344605, 0x00000000,
    0x00131e61, 0x6f060220, 0x00344705, 0x00000000,
    0xa0751e40, 0x12027302, 0xa0730040, 0x01003f03,
    0xa07a1d40, 0x12027802, 0xe7771a70, 0x01007303,
    0xe74f0070, 0x02004603, 0x00031b61, 0x66260220,
    0x00347a05, 0x00000000, 0x00131c61, 0x68260220,
    0x00347b05, 0x00000000, 0x207b1940, 0x24005300,
    0xa0791c40, 0x41027702, 0xa0511c40, 0x41024f02,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x49240000, 0xfb046624, 0x000c0000,
    0xe0011141, 0x3f007b00, 0x00031961, 0x6d260220,
    0x00345105, 0x00000000, 0x00131a61, 0x6f260220,
    0x00345205, 0x00000000, 0x00033b61, 0x65060220,
    0x00347105, 0x00000000, 0x00133b61, 0x67060220,
    0x00347205, 0x00000000, 0x00033b61, 0x69060220,
    0x00347305, 0x00000000, 0x00130061, 0x6b060220,
    0x00347405, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x14440000,
    0xfb046d24, 0x003c0000, 0x00031c61, 0x65260220,
    0x00347505, 0x00000000, 0x00131c61, 0x67260220,
    0x00347605, 0x00000000, 0x00031c61, 0x69260220,
    0x00347905, 0x00000000, 0x00131c61, 0x6b260220,
    0x00347a05, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80000b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044d31, 0x45240000,
    0xfb046524, 0x000c0000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044e31, 0x0c440000,
    0xfb046924, 0x003c0000, 0x20609a41, 0x04000100,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x25262b62, 0x4b004900, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x25281162, 0x26005300,
    0x205aec41, 0x14000100, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xe02a1241, 0x34002800,
    0x204f1140, 0x2a005300, 0x20511f40, 0x2a004900,
    0x207d2d40, 0x45004900, 0x20541340, 0x24204f00,
    0x20561340, 0x45205100, 0x20520040, 0x2a004b00,
    0xe0201441, 0x3f007d00, 0x00041261, 0x2b054220,
    0x00000000, 0x000000c0, 0x207c2e41, 0x0c000100,
    0x207e2d40, 0x47004b00, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0xe05c1541, 0x3f005600,
    0x20581540, 0x47205200, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x205eda41, 0x06002000,
    0x80002e01, 0x00000000, 0x00000000, 0x00000000,
    0x207a1a41, 0x0e002000, 0x20522c41, 0x16002000,
    0xe0221641, 0x3f007e00, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x20651641, 0x06405c00,
    0x206f3c41, 0x0e405c00, 0x20751c41, 0x16405c00,
    0x20621740, 0x5e006000, 0x207e1740, 0x7a007c00,
    0x2001ee41, 0x10002200, 0x20602c41, 0x18002200,
    0x205e1740, 0x52005a00, 0xe05a0041, 0x3f005400,
    0x00041261, 0x52054220, 0x00000000, 0x00000001,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x201c1440, 0x7e000100, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x20671241, 0x04405a00,
    0x20711f41, 0x0c405a00, 0x20770041, 0x14405a00,
    0x2045ce40, 0x12001c00, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x206a1440, 0x65006700,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x20642a41, 0x08002200, 0x204a1540, 0x6f007100,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x204c1540, 0x75007700, 0x20661340, 0x62006400,
    0x20620040, 0x5e006000, 0xe05d0041, 0x3f005800,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x2068ba40, 0x0a006600, 0x2064bc40, 0x1a006200,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x206c1341, 0x08405d00, 0x20721f41, 0x10405d00,
    0x20781c41, 0x18405d00, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x206e1340, 0x6a006c00,
    0x20740b40, 0x4a007200, 0x207a1340, 0x4c007800,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x201d1340, 0x6e206800, 0x20250040, 0x6e006800,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x201f1440, 0x74204500, 0x20270040, 0x74004500,
    0x20211540, 0x7a206400, 0x20290040, 0x7a006400,
    0x00040024, 0x0001c060, 0x00000030, 0x00000030,
    0x00040961, 0x52054220, 0x00000000, 0x00000000,
    0x00040a61, 0x2b054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000260,
    0xae7b1170, 0x00010343, 0x00041965, 0x00010220,
    0x26467b05, 0x02464305, 0x01040022, 0x0001c060,
    0x00000228, 0x00000228, 0xa07c1a40, 0x00c03f03,
    0xa0020b40, 0x01c03f03, 0xa0070040, 0x02c03f03,
    0x00041f61, 0x52054220, 0x00000000, 0x00000001,
    0x00040061, 0x35054220, 0x00000000, 0x00000000,
    0xe77e1d70, 0x00c07c03, 0x00031561, 0x6e060220,
    0x00347c05, 0x00000000, 0x00130061, 0x70060220,
    0x00347d05, 0x00000000, 0x00030f61, 0x72060220,
    0x00340205, 0x00000000, 0x00130b61, 0x74060220,
    0x00340305, 0x00000000, 0xe7040070, 0x01c00203,
    0x00031f61, 0x76060220, 0x00340705, 0x00000000,
    0x00130f61, 0x78060220, 0x00340805, 0x00000000,
    0xe7090070, 0x02c00703, 0xa0011f40, 0x41027e02,
    0xa0061d40, 0x41020402, 0xa00b1b40, 0x41020902,
    0x00031b61, 0x6e260220, 0x00340105, 0x00000000,
    0x00131c61, 0x70260220, 0x00340205, 0x00000000,
    0x00031c61, 0x72260220, 0x00340605, 0x00000000,
    0x00131d61, 0x74260220, 0x00340705, 0x00000000,
    0x00031d61, 0x76260220, 0x00340b05, 0x00000000,
    0x00131e61, 0x78260220, 0x00340c05, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044f31, 0x25140000, 0xfb046e24, 0x00040000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x27140000, 0xfb047224, 0x00040000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x29140000, 0xfb047624, 0x00040000,
    0x80002f01, 0x00000000, 0x00000000, 0x00000000,
    0x00041661, 0x1d050220, 0x00462505, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x00041461, 0x1f050220, 0x00462705, 0x00000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x00041261, 0x21050220, 0x00462905, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040024, 0x0001c060, 0x00000030, 0x00000030,
    0x00041f61, 0x52054220, 0x00000000, 0x00000000,
    0x00041f61, 0x2b054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040024, 0x0001c060, 0x00000040, 0x00000040,
    0x00041c61, 0x52054220, 0x00000000, 0x00000000,
    0x00041c61, 0x2b054220, 0x00000000, 0x00000000,
    0x00041f61, 0x35054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00001ee0,
    0x80041c61, 0x0c054660, 0x00000000, 0x00000000,
    0x00040061, 0x0c050660, 0x00465205, 0x00000000,
    0x00040070, 0x00018660, 0x16463b05, 0x00000000,
    0x80031a40, 0x0c260660, 0x06440c06, 0x00440c26,
    0x80021940, 0x0c470660, 0x06420c27, 0x00420c47,
    0x80021940, 0x0c670660, 0x06420c27, 0x00420c67,
    0x80021940, 0x0c850660, 0x06000c64, 0x00340c85,
    0x80021a40, 0x0d850660, 0x06000d64, 0x00340d85,
    0xa40d1940, 0x0d010c82, 0x01040022, 0x0001c060,
    0x00000130, 0x00000110, 0xa1401440, 0x024e2d03,
    0xaa0e1340, 0x024e2f03, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80000c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x67050660,
    0x00000de4, 0x00000000, 0x00031b70, 0x41050220,
    0x52464005, 0x00442d06, 0x00131b70, 0x0f050220,
    0x52460e05, 0x00442f06, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00031161, 0x63060220,
    0x00344005, 0x00000000, 0x00131161, 0x65060220,
    0x00340e05, 0x00000000, 0x00031c40, 0x42052660,
    0x06464105, 0x00442d26, 0x00131c40, 0x10052660,
    0x06460f05, 0x00442f26, 0x00031a61, 0x63260220,
    0x00344205, 0x00000000, 0x00131a61, 0x65260220,
    0x00341005, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x54140000,
    0xfb186324, 0x01006714, 0x00040024, 0x0001c060,
    0x00000030, 0x00000030, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x00041161, 0x54054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00001d18, 0x80040061, 0x11054660,
    0x00000000, 0x00000000, 0x00040061, 0x11050660,
    0x00465205, 0x00000000, 0x00040070, 0x00018660,
    0x16465205, 0x00000000, 0x80040040, 0x15058150,
    0x05584e05, 0xffffffff, 0x80041961, 0x10014110,
    0x00000000, 0x02200220, 0x80040069, 0x10018510,
    0x01461505, 0x00020002, 0x80040940, 0x10018110,
    0x01461001, 0x02200220, 0xe3130961, 0x001b0004,
    0x80001961, 0x13054660, 0x00000000, 0x00000000,
    0x80031940, 0x13260660, 0x06441306, 0x00441326,
    0x80021940, 0x13470660, 0x06421327, 0x00421347,
    0x80021940, 0x13670660, 0x06421327, 0x00421367,
    0x80021940, 0x13850660, 0x06001364, 0x00341385,
    0x80021a40, 0x14850660, 0x06001464, 0x00341485,
    0xa4141940, 0x14011382, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0160040, 0x13015402,
    0x01040022, 0x0001c060, 0x00000460, 0x00000170,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00041261, 0x21054220, 0x00000000, 0x7f800000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00041461, 0x1f054220, 0x00000000, 0x7f800000,
    0x00041661, 0x1d054220, 0x00000000, 0x7f800000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00041161, 0x29054220, 0x00000000, 0xff800000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00041361, 0x27054220, 0x00000000, 0xff800000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00041261, 0x25054220, 0x00000000, 0xff800000,
    0x00041761, 0x6b054220, 0x00000000, 0x7f800000,
    0x00041561, 0x69054220, 0x00000000, 0x7f800000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00041561, 0x67054220, 0x00000000, 0x7f800000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00041161, 0x65054220, 0x00000000, 0xff800000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00041161, 0x63054220, 0x00000000, 0xff800000,
    0x00041161, 0x61054220, 0x00000000, 0xff800000,
    0x00040024, 0x0001c060, 0x00000300, 0x00000300,
    0x00040a69, 0x18058660, 0x02461605, 0x00000005,
    0x00031761, 0x1b050220, 0x00443326, 0x00000000,
    0x00131761, 0x1c050220, 0x00443926, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0xa13f1b40, 0x180e3302, 0xaa401c40, 0x190e3902,
    0xe0190068, 0x01b01603, 0x00040069, 0x17058660,
    0x02463505, 0x00000018, 0x00031c70, 0x41050220,
    0x52463f05, 0x00443306, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x00031561, 0x6d060220,
    0x00343f05, 0x00000000, 0x00131d70, 0x42050220,
    0x52464005, 0x00443906, 0x80103f01, 0x00000000,
    0x00000000, 0x00000000, 0x00131561, 0x6f060220,
    0x00344005, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x20230a66, 0x17003d03,
    0x00041b52, 0x43040e68, 0x0e2e1b05, 0x41051905,
    0x00131961, 0x6f260220, 0x00344405, 0x00000000,
    0x00031a61, 0x6d260220, 0x00344305, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x00000000, 0xfb0c6d24, 0x003c1d44,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa0451340, 0x01003f03, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x27470970, 0x3f004503,
    0x00033461, 0x6e060220, 0x00344505, 0x00000000,
    0x80103f01, 0x00000000, 0x00000000, 0x00000000,
    0x00133461, 0x70060220, 0x00344605, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xa0490a40, 0x43024702, 0x00131961, 0x70260220,
    0x00344a05, 0x00000000, 0x00031a61, 0x6e260220,
    0x00344905, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044f31, 0x00000000,
    0xfb0c6e24, 0x003c2544, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x20611140, 0x25001d00,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x20631240, 0x27001f00, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x20651340, 0x29002100,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00041361, 0x67050220, 0x00466105, 0x00000000,
    0x00041261, 0x69050220, 0x00466305, 0x00000000,
    0x00041161, 0x6b050220, 0x00466505, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000017a0,
    0x00040070, 0x00018660, 0x16463b05, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xa34d1361, 0x7f810000, 0x604d0061, 0x00101d00,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0xa34f1361, 0x7f810000, 0x604f0061, 0x00101f00,
    0xa3511361, 0x7f810000, 0x60510061, 0x00102100,
    0xa3530e61, 0xff810000, 0x60530061, 0x00102500,
    0xa355e861, 0xff810000, 0x60550061, 0x00102700,
    0xa3571661, 0xff810000, 0x60570061, 0x00102900,
    0xa3591d61, 0x7f810000, 0x60590061, 0x00106700,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xa35b0c61, 0x7f810000, 0x605b0061, 0x00106900,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xa35d1b61, 0x7f810000, 0x605d0061, 0x00106b00,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xa35f1c61, 0xff810000, 0x605f0061, 0x00106100,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80031761, 0x6d060220, 0x00444d26, 0x00000000,
    0x80031761, 0x7a060220, 0x00444f26, 0x00000000,
    0x80031761, 0x1b060220, 0x00445126, 0x00000000,
    0x80031761, 0x33060220, 0x00445326, 0x00000000,
    0x80031561, 0x43060220, 0x00445726, 0x00000000,
    0xa3611f61, 0xff810000, 0x60610061, 0x00106300,
    0x80031561, 0x48060220, 0x00445926, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80031361, 0x6f060220, 0x00445d26, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80031261, 0x74060220, 0x00445f26, 0x00000000,
    0x80031761, 0x3c060220, 0x00445526, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80031f62, 0x78060aa0, 0x5a444f06, 0x00447a06,
    0xa3630061, 0xff810000, 0x60630061, 0x00106500,
    0x80031f62, 0x19060aa0, 0x5a445106, 0x00441b06,
    0x80031761, 0x67060220, 0x00445b26, 0x00000000,
    0x80031f62, 0x25060aa0, 0x4a445306, 0x00443306,
    0x80031e62, 0x41060aa0, 0x4a445706, 0x00444306,
    0x80031661, 0x7c060220, 0x00446126, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80031e62, 0x46060aa0, 0x5a445906, 0x00444806,
    0x80031d62, 0x6a060aa0, 0x5a445d06, 0x00446f06,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80031c62, 0x72060aa0, 0x4a445f06, 0x00447406,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80031b62, 0x3a060aa0, 0x4a445506, 0x00443c06,
    0x80030f61, 0x4f260220, 0x00447806, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80031761, 0x03060220, 0x00446326, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80031761, 0x51260220, 0x00441906, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80031d62, 0x4b060aa0, 0x5a445b06, 0x00446706,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80031761, 0x53260220, 0x00442506, 0x00000000,
    0x80031661, 0x57260220, 0x00444106, 0x00000000,
    0x80030062, 0x65060aa0, 0x5a444d06, 0x00446d06,
    0x80031661, 0x59260220, 0x00444606, 0x00000000,
    0x80031561, 0x5d260220, 0x00446a06, 0x00000000,
    0x80031461, 0x5f260220, 0x00447206, 0x00000000,
    0x80031361, 0x55260220, 0x00443a06, 0x00000000,
    0x80021f61, 0x09070220, 0x00424f47, 0x00000000,
    0x80031f62, 0x01060aa0, 0x4a446306, 0x00440306,
    0x80031361, 0x5b260220, 0x00444b06, 0x00000000,
    0x80021f61, 0x0d070220, 0x00425747, 0x00000000,
    0x80020061, 0x0b070220, 0x00425727, 0x00000000,
    0x80031261, 0x4d260220, 0x00446506, 0x00000000,
    0x80033162, 0x77060aa0, 0x4a446106, 0x00447c06,
    0x80020061, 0x79070220, 0x00425147, 0x00000000,
    0x80021f61, 0x13070220, 0x00425947, 0x00000000,
    0x80020061, 0x11070220, 0x00425927, 0x00000000,
    0x80020061, 0x1f070220, 0x00425d47, 0x00000000,
    0x80020061, 0x1d070220, 0x00425d27, 0x00000000,
    0x80023461, 0x23070220, 0x00425f27, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80023061, 0x07070220, 0x00425547, 0x00000000,
    0x80020061, 0x05070220, 0x00425527, 0x00000000,
    0x80020061, 0x25070220, 0x00425f47, 0x00000000,
    0x80031261, 0x63260220, 0x00440106, 0x00000000,
    0x80020061, 0x19070220, 0x00425b47, 0x00000000,
    0x80020061, 0x17070220, 0x00425b27, 0x00000000,
    0x80023662, 0x44070aa0, 0x4a420b07, 0x00420d07,
    0x80020061, 0x72070220, 0x00424d47, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80021761, 0x70070220, 0x00424d27, 0x00000000,
    0x80031261, 0x61260220, 0x00447706, 0x00000000,
    0x80023762, 0x49070aa0, 0x5a421107, 0x00421307,
    0x80021461, 0x03070220, 0x00424f27, 0x00000000,
    0x80021f62, 0x3d070aa0, 0x4a420507, 0x00420707,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80021f62, 0x75070aa0, 0x4a422307, 0x00422507,
    0x80020f61, 0x3b070220, 0x00426347, 0x00000000,
    0x80020061, 0x39070220, 0x00426327, 0x00000000,
    0x80021561, 0x7d070220, 0x00425327, 0x00000000,
    0x80021f62, 0x68070aa0, 0x5a421707, 0x00421907,
    0x80021561, 0x57470220, 0x00424407, 0x00000000,
    0x80021f62, 0x6e070aa0, 0x5a427007, 0x00427207,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80021e61, 0x2b070220, 0x00426147, 0x00000000,
    0x80020061, 0x29070220, 0x00426127, 0x00000000,
    0x80021561, 0x59470220, 0x00424907, 0x00000000,
    0x80020061, 0x01070220, 0x00425347, 0x00000000,
    0x80021f62, 0x7b070aa0, 0x5a420307, 0x00420907,
    0x80021561, 0x55470220, 0x00423d07, 0x00000000,
    0x80021461, 0x5f470220, 0x00427507, 0x00000000,
    0x80020061, 0x77070220, 0x00425127, 0x00000000,
    0x80021361, 0x5b470220, 0x00426807, 0x00000000,
    0x80020e61, 0x10070220, 0x00425767, 0x00000000,
    0x80021761, 0x0e070220, 0x00425727, 0x00000000,
    0x80021261, 0x4d470220, 0x00426e07, 0x00000000,
    0x80020e61, 0x14070220, 0x00425927, 0x00000000,
    0x80021f62, 0x34070aa0, 0x4a427d07, 0x00420107,
    0x80021261, 0x4f470220, 0x00427b07, 0x00000000,
    0x80020d61, 0x26070220, 0x00425f27, 0x00000000,
    0x80021461, 0x16070220, 0x00425967, 0x00000000,
    0x80020062, 0x70070aa0, 0x5a421d07, 0x00421f07,
    0x80021f62, 0x21070aa0, 0x5a427707, 0x00427907,
    0x80020e61, 0x1a070220, 0x00425b27, 0x00000000,
    0x80021f62, 0x45070aa0, 0x4a420e07, 0x00421007,
    0x80020062, 0x04070aa0, 0x4a423907, 0x00423b07,
    0x80021661, 0x08070220, 0x00425527, 0x00000000,
    0x80021661, 0x0a070220, 0x00425567, 0x00000000,
    0x80021f61, 0x75070220, 0x00424d27, 0x00000000,
    0x80021561, 0x53470220, 0x00423407, 0x00000000,
    0x80020f61, 0x18070220, 0x00424f67, 0x00000000,
    0x80020061, 0x12070220, 0x00424f27, 0x00000000,
    0x80021f62, 0x4a070aa0, 0x5a421407, 0x00421607,
    0x80021561, 0x5d470220, 0x00427007, 0x00000000,
    0x80021461, 0x51470220, 0x00422107, 0x00000000,
    0x80021361, 0x57670220, 0x00424507, 0x00000000,
    0x80020062, 0x7d070aa0, 0x4a422907, 0x00422b07,
    0x80021361, 0x63470220, 0x00420407, 0x00000000,
    0x80021f62, 0x40070aa0, 0x4a420807, 0x00420a07,
    0x80021761, 0x1c070220, 0x00425b67, 0x00000000,
    0x80021661, 0x77070220, 0x00424d67, 0x00000000,
    0x80020f61, 0x02070220, 0x00425327, 0x00000000,
    0x80021f62, 0x0c070aa0, 0x5a421207, 0x00421807,
    0x80021461, 0x59670220, 0x00424a07, 0x00000000,
    0x80020f61, 0x7a070220, 0x00425127, 0x00000000,
    0x80021f62, 0x57850aa0, 0x4a005764, 0x00345785,
    0x80021f62, 0x58850aa0, 0x4a005864, 0x00345885,
    0x80021561, 0x61470220, 0x00427d07, 0x00000000,
    0x80021f61, 0x3e070220, 0x00426367, 0x00000000,
    0x80021761, 0x3c070220, 0x00426327, 0x00000000,
    0x80021461, 0x55670220, 0x00424007, 0x00000000,
    0x80021f62, 0x69070aa0, 0x5a421a07, 0x00421c07,
    0x80021f62, 0x73070aa0, 0x5a427507, 0x00427707,
    0x80020061, 0x20070220, 0x00425d27, 0x00000000,
    0x80020061, 0x22070220, 0x00425d67, 0x00000000,
    0x80021761, 0x28070220, 0x00425f67, 0x00000000,
    0x80021561, 0x4f670220, 0x00420c07, 0x00000000,
    0x80021f62, 0x59850aa0, 0x5a005964, 0x00345985,
    0x80021f62, 0x5a850aa0, 0x5a005a64, 0x00345a85,
    0x80020061, 0x04070220, 0x00425367, 0x00000000,
    0x80031562, 0x58050aa0, 0x4a0057e4, 0x00465805,
    0x80021f61, 0x35070220, 0x00426167, 0x00000000,
    0x80020061, 0x33070220, 0x00426127, 0x00000000,
    0x80021f62, 0x55850aa0, 0x4a005564, 0x00345585,
    0x80021f62, 0x56850aa0, 0x4a005664, 0x00345685,
    0x80021761, 0x5b670220, 0x00426907, 0x00000000,
    0x80021661, 0x4d670220, 0x00427307, 0x00000000,
    0x80021f62, 0x71070aa0, 0x5a422007, 0x00422207,
    0x80020061, 0x7c070220, 0x00425167, 0x00000000,
    0x80021f62, 0x4f850aa0, 0x5a004f64, 0x00344f85,
    0x80021f62, 0x50850aa0, 0x5a005064, 0x00345085,
    0x80031762, 0x5a050aa0, 0x5a0059e4, 0x00465a05,
    0x80021e62, 0x39070aa0, 0x4a420207, 0x00420407,
    0x80021f62, 0x76070aa0, 0x4a422607, 0x00422807,
    0x80021c62, 0x7e070aa0, 0x4a423307, 0x00423507,
    0x80031762, 0x56050aa0, 0x4a0055e4, 0x00465605,
    0x80021b62, 0x5b850aa0, 0x5a005b64, 0x00345b85,
    0x80021b62, 0x5c850aa0, 0x5a005c64, 0x00345c85,
    0x80021a62, 0x4d850aa0, 0x5a004d64, 0x00344d85,
    0x80021a62, 0x4e850aa0, 0x5a004e64, 0x00344e85,
    0x80020061, 0x5d670220, 0x00427107, 0x00000000,
    0x80021a62, 0x24070aa0, 0x5a427a07, 0x00427c07,
    0x80030062, 0x50050aa0, 0x5a004fe4, 0x00465005,
    0x80021761, 0x53670220, 0x00423907, 0x00000000,
    0x80021761, 0x5f670220, 0x00427607, 0x00000000,
    0x80021761, 0x61670220, 0x00427e07, 0x00000000,
    0x80020062, 0x05070aa0, 0x4a423c07, 0x00423e07,
    0x80031662, 0x5c050aa0, 0x5a005be4, 0x00465c05,
    0x80031562, 0x4e050aa0, 0x5a004de4, 0x00464e05,
    0x80021c62, 0x5d850aa0, 0x5a005d64, 0x00345d85,
    0x80021c62, 0x5e850aa0, 0x5a005e64, 0x00345e85,
    0x80021761, 0x51670220, 0x00422407, 0x00000000,
    0x80021c62, 0x53850aa0, 0x4a005364, 0x00345385,
    0x80021c62, 0x54850aa0, 0x4a005464, 0x00345485,
    0x80021b62, 0x5f850aa0, 0x4a005f64, 0x00345f85,
    0x80021b62, 0x60850aa0, 0x4a006064, 0x00346085,
    0x80021a62, 0x61850aa0, 0x4a006164, 0x00346185,
    0x80021a62, 0x62850aa0, 0x4a006264, 0x00346285,
    0x80020061, 0x63670220, 0x00420507, 0x00000000,
    0x80031762, 0x5e050aa0, 0x5a005de4, 0x00465e05,
    0x80021a62, 0x51850aa0, 0x5a005164, 0x00345185,
    0x80021a62, 0x52850aa0, 0x5a005264, 0x00345285,
    0x80031762, 0x54050aa0, 0x4a0053e4, 0x00465405,
    0x80031762, 0x60050aa0, 0x4a005fe4, 0x00466005,
    0x80031662, 0x62050aa0, 0x4a0061e4, 0x00466205,
    0x80021962, 0x63850aa0, 0x4a006364, 0x00346385,
    0x80021962, 0x64850aa0, 0x4a006464, 0x00346485,
    0x80031662, 0x52050aa0, 0x5a0051e4, 0x00465205,
    0x80031262, 0x64050aa0, 0x4a0063e4, 0x00466405,
    0x01040022, 0x0001c060, 0x00000ab0, 0x00000ab0,
    0xa1430040, 0x080e3103, 0xaa4a0040, 0x080e3703,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x73050660, 0x00004ee4, 0x00000000,
    0x00031b70, 0x44050220, 0x52464305, 0x00443106,
    0x80101b01, 0x00000000, 0x00000000, 0x00000000,
    0x00130070, 0x4b050220, 0x52464a05, 0x00443706,
    0x00030061, 0x6f060220, 0x00344305, 0x00000000,
    0x00130061, 0x71060220, 0x00344a05, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00030040, 0x45052660, 0x06464405, 0x00443126,
    0x80101c01, 0x00000000, 0x00000000, 0x00000000,
    0x00130040, 0x4c052660, 0x06464b05, 0x00443726,
    0x00031a61, 0x6f260220, 0x00344505, 0x00000000,
    0x00131a61, 0x71260220, 0x00344c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x4d140000, 0xfb2a6f24, 0x01007314,
    0xa1650040, 0x084e3103, 0xaa660040, 0x084e3703,
    0x00040061, 0x78050660, 0x000050e4, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0xe7670070, 0x08406503, 0x00033261, 0x74060220,
    0x00346505, 0x00000000, 0x00130061, 0x76060220,
    0x00346605, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00030040, 0x46052660,
    0x06466705, 0x00443126, 0x00131c40, 0x68052660,
    0x06466805, 0x00443726, 0x00031a61, 0x74260220,
    0x00344605, 0x00000000, 0x00131a61, 0x76260220,
    0x00346805, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x69140000,
    0xfb2a7424, 0x01007814, 0xaa6b0040, 0x088e3703,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x7d050660, 0x000052e4, 0x00000000,
    0x80101a01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x7b060220, 0x00346b05, 0x00000000,
    0xa16a2340, 0x088e3103, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xe76c0070, 0x08806a03,
    0x00033361, 0x79060220, 0x00346a05, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00030040, 0x47052660, 0x06466c05, 0x00443126,
    0x00131b40, 0x6d052660, 0x06466d05, 0x00443726,
    0x00031a61, 0x79260220, 0x00344705, 0x00000000,
    0x00131a61, 0x7b260220, 0x00346d05, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x6e140000, 0xfb2a7924, 0x01007d14,
    0xaa703240, 0x08ce3703, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x05050660,
    0x000054e4, 0x00000000, 0x80101a01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x03060220,
    0x00347005, 0x00000000, 0xa16f2440, 0x08ce3103,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xe7711970, 0x08c06f03, 0x00030061, 0x01060220,
    0x00346f05, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00030040, 0x48052660,
    0x06467105, 0x00443126, 0x00131b40, 0x72052660,
    0x06467205, 0x00443726, 0x00031a61, 0x01260220,
    0x00344805, 0x00000000, 0x00131a61, 0x03260220,
    0x00347205, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x73140000,
    0xfb2c0124, 0x01000514, 0xaa753340, 0x090e3703,
    0x00040061, 0x0a050660, 0x000056e4, 0x00000000,
    0x80101a01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x08060220, 0x00347505, 0x00000000,
    0xa1742540, 0x090e3103, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xe7761970, 0x09007403,
    0x00033561, 0x06060220, 0x00347405, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00030040, 0x49052660, 0x06467605, 0x00443126,
    0x00131b40, 0x77052660, 0x06467705, 0x00443726,
    0x00031a61, 0x06260220, 0x00344905, 0x00000000,
    0x00131a61, 0x08260220, 0x00347705, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x78140000, 0xfb2c0624, 0x01000a14,
    0xaa7a3440, 0x094e3703, 0x00040061, 0x0f050660,
    0x000058e4, 0x00000000, 0x80101a01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x0d060220,
    0x00347a05, 0x00000000, 0xa1792640, 0x094e3103,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xe77b1970, 0x09407903, 0x00033661, 0x0b060220,
    0x00347905, 0x00000000, 0x00031a40, 0x4a052660,
    0x06467b05, 0x00443126, 0x00131b40, 0x7c052660,
    0x06467c05, 0x00443726, 0x00031a61, 0x0b260220,
    0x00344a05, 0x00000000, 0x00131a61, 0x0d260220,
    0x00347c05, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x7d140000,
    0xfb2c0b24, 0x01000f14, 0x00043761, 0x10050660,
    0x00005ae4, 0x00000000, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x7e140000,
    0xfb2a2d24, 0x01001014, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa1013840, 0x004e2d03,
    0x80103501, 0x00000000, 0x00000000, 0x00000000,
    0xaa023840, 0x004e2f03, 0x00040061, 0x15050660,
    0x00005ce4, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xe7031a70, 0x00400103,
    0x00033861, 0x11060220, 0x00340105, 0x00000000,
    0x00130061, 0x13060220, 0x00340205, 0x00000000,
    0x00031b40, 0x4b052660, 0x06460305, 0x00442d26,
    0x00131c40, 0x04052660, 0x06460405, 0x00442f26,
    0x00031a61, 0x11260220, 0x00344b05, 0x00000000,
    0x00131a61, 0x13260220, 0x00340405, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x05140000, 0xfb2a1124, 0x01001514,
    0xaa073640, 0x008e2f03, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x1a050660,
    0x00005ee4, 0x00000000, 0x80101a01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x18060220,
    0x00340705, 0x00000000, 0xa1062940, 0x008e2d03,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xe7081970, 0x00800603, 0x00033961, 0x16060220,
    0x00340605, 0x00000000, 0x00031a40, 0x4c052660,
    0x06460805, 0x00442d26, 0x00131b40, 0x09052660,
    0x06460905, 0x00442f26, 0x00031a61, 0x16260220,
    0x00344c05, 0x00000000, 0x00131a61, 0x18260220,
    0x00340905, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044a31, 0x0a140000,
    0xfb2a1624, 0x01001a14, 0xaa0c3740, 0x010e2f03,
    0x80001601, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x1f050660, 0x000060e4, 0x00000000,
    0x80101a01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x1d060220, 0x00340c05, 0x00000000,
    0xa10b2a40, 0x010e2d03, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0xe70d1970, 0x01000b03,
    0x00033a61, 0x1b060220, 0x00340b05, 0x00000000,
    0x0003a240, 0x4d052660, 0x06460d05, 0x00442d26,
    0x00131b40, 0x0e052660, 0x06460e05, 0x00442f26,
    0x00031a61, 0x1b260220, 0x00344d05, 0x00000000,
    0x00131a61, 0x1d260220, 0x00340e05, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x0f140000, 0xfb2c1b24, 0x01001f14,
    0xaa113940, 0x014e2f03, 0x80001501, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x24050660,
    0x000062e4, 0x00000000, 0x80101a01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x22060220,
    0x00341105, 0x00000000, 0xa1102240, 0x014e2d03,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xe7121970, 0x01401003, 0x00033261, 0x20060220,
    0x00341005, 0x00000000, 0x0003a240, 0x4e052660,
    0x06461205, 0x00442d26, 0x00131b40, 0x13052660,
    0x06461305, 0x00442f26, 0x00031a61, 0x20260220,
    0x00344e05, 0x00000000, 0x00131a61, 0x22260220,
    0x00341305, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x14140000,
    0xfb2c2024, 0x01002414, 0xaa163a40, 0x018e2f03,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x29050660, 0x000064e4, 0x00000000,
    0x80101a01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x27060220, 0x00341605, 0x00000000,
    0xa1152b40, 0x018e2d03, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0xe7171970, 0x01801503,
    0x00033b61, 0x25060220, 0x00341505, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00030040, 0x4f052660, 0x06461705, 0x00442d26,
    0x00131b40, 0x18052660, 0x06461805, 0x00442f26,
    0x00031a61, 0x25260220, 0x00344f05, 0x00000000,
    0x00131a61, 0x27260220, 0x00341805, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x19140000, 0xfb2c2524, 0x01002914,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x8003e861, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_indirect = {
   .prog_data = {
      .base.nr_params = 19,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 3,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 12880,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_indirect_relocs,
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
      .push.cross_thread.dwords = 19,
      .push.cross_thread.regs = 3,
      .push.cross_thread.size = 96,
   },
   .args_size = 44,
   .arg_count = 6,
   .args = gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_indirect_args,
   .code = gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_indirect_code,
};
const char *gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_indirect_sha1 = "065ecfe8ed0cadd7c525ea976afd62c5d9392357";

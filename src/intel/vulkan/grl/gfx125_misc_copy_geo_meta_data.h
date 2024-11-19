#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_misc_copy_geo_meta_data_relocs[] = {
};
static const u_printf_info gfx125_misc_copy_geo_meta_data_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_misc_copy_geo_meta_data_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g118<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g110<1>UD       g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g118UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g13<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(16)         g22<1>UD        g110<8,8,1>UD                   { align1 1H I@2 };
add(8)          g13.8<1>UW      g13<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g11<1>UD        g13<8,8,1>UW                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
shr(16)         g119<1>UD       g2.4<0,1,0>UD   0x00000006UD    { align1 1H compacted };
and(16)         g14<1>UD        g2.4<0,1,0>UD   0xffffffc0UD    { align1 1H };
shl(16)         g20<1>D         g2.5<0,1,0>D    0x0000001dUD    { align1 1H };
add(16)         g26<1>D         g110<1,1,0>D    -g119<1,1,0>D   { align1 1H I@3 compacted };
add(16)         g16<1>D         g2.4<0,1,0>D    -g14<1,1,0>D    { align1 1H I@3 compacted };
shr(16)         g24<1>UD        g14<1,1,0>UD    0x00000006UD    { align1 1H compacted };
shr(16)         g35<1>UD        g16<1,1,0>UD    0x00000003UD    { align1 1H I@2 compacted };
or(16)          g7<1>UD         g35<1,1,0>UD    g20<1,1,0>UD    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g28<1>UD        g11<1,1,0>UD    g7<1,1,0>UD     { align1 1H I@1 compacted };
cmp.z.f0.0(16)  g30<1>D         -g26<1,1,0>D    g24<1,1,0>D     { align1 1H I@4 compacted };
and.nz.f0.0(16) null<1>UD       g28<8,8,1>UD    g30<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shr(16)         g31<1>UD        g14<1,1,0>UD    0x00000003UD    { align1 1H compacted };
add(16)         g33<1>D         g11<1,1,0>D     g31<1,1,0>D     { align1 1H I@1 compacted };
mul(8)          acc0<1>UD       g33<8,8,1>UD    0x0038UW        { align1 1Q I@1 };
mul(16)         g37<1>D         g33<1,1,0>D     56W             { align1 1H I@2 compacted };
mach(8)         g18<1>UD        g33<1,1,0>UD    0x00000038UD    { align1 1Q compacted AccWrEnable };
add(16)         g39<1>D         g2.2<0,1,0>D    g37<1,1,0>D     { align1 1H I@2 compacted };
mul(8)          acc0<1>UD       g34<8,8,1>UD    0x0038UW        { align1 2Q };
cmp.l.f0.0(16)  g41<1>UD        g39<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@2 compacted };
add(16)         g44<1>D         g39<1,1,0>D     48D             { align1 1H compacted };
mach(8)         g19<1>UD        g34<8,8,1>UD    0x00000038UD    { align1 2Q AccWrEnable };
cmp.l.f0.0(16)  g46<1>UD        g44<1,1,0>UD    g39<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g50<2>UD        g44<4,4,1>UD                    { align1 1Q };
mov(8)          g52<2>UD        g45<4,4,1>UD                    { align1 2Q };
add3(16)        g43<1>D         g2.3<0,1,0>D    g18<8,8,1>D     -g41<1,1,1>D { align1 1H I@4 };
add(16)         g48<1>D         -g46<1,1,0>D    g43<1,1,0>D     { align1 1H I@1 compacted };
mov(8)          g50.1<2>UD      g48<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g52.1<2>UD      g49<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g54UD           g50UD           nullUD          0x08200980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(16)         g56<1>UD        g54<32,8,4>UB                   { align1 1H $1.dst };
cmp.z.f0.0(16)  null<1>D        g56<8,8,1>D     1D              { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL1              { align1 1H };
add(16)         g58<1>D         g39<1,1,0>D     16D             { align1 1H compacted };
cmp.l.f0.0(16)  g60<1>UD        g58<1,1,0>UD    g39<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g64<2>UD        g58<4,4,1>UD                    { align1 1Q };
mov(8)          g66<2>UD        g59<4,4,1>UD                    { align1 2Q };
add(16)         g62<1>D         -g60<1,1,0>D    g43<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g64.1<2>UD      g62<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g66.1<2>UD      g63<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g3UD            g64UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
else(16)        JIP:  LABEL1          UIP:  LABEL1              { align1 1H };

LABEL2:
add(16)         g65<1>D         g39<1,1,0>D     40D             { align1 1H $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g67<1>UD        g65<1,1,0>UD    g39<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g71<2>UD        g65<4,4,1>UD                    { align1 1Q };
mov(8)          g73<2>UD        g66<4,4,1>UD                    { align1 2Q };
add(16)         g69<1>D         -g67<1,1,0>D    g43<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g71.1<2>UD      g69<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g73.1<2>UD      g70<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g75UD           g71UD           nullUD          0x08200980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov.nz.f0.0(16) null<1>UD       g75<32,8,4>UB                   { align1 1H $3.dst };
(+f0.0) if(16)  JIP:  LABEL4          UIP:  LABEL3              { align1 1H };
add(16)         g76<1>D         g39<1,1,0>D     32D             { align1 1H compacted };
cmp.l.f0.0(16)  g78<1>UD        g76<1,1,0>UD    g39<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g82<2>UD        g76<4,4,1>UD                    { align1 1Q };
mov(8)          g84<2>UD        g77<4,4,1>UD                    { align1 2Q };
add(16)         g80<1>D         -g78<1,1,0>D    g43<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g82.1<2>UD      g80<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g84.1<2>UD      g81<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g86UD           g82UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
mul(8)          acc0<1>UD       g86<8,8,1>UD    0xaaabUW        { align1 1Q $4.dst };
mach(8)         g88<1>UD        g86<8,8,1>UD    0xaaaaaaabUD    { align1 1Q AccWrEnable };
mul(8)          acc0<1>UD       g87<8,8,1>UD    0xaaabUW        { align1 2Q $4.dst };
mach(8)         g89<1>UD        g87<8,8,1>UD    0xaaaaaaabUD    { align1 2Q AccWrEnable };
shr(16)         g3<1>UD         g88<1,1,0>UD    0x00000001UD    { align1 1H @1 $2.dst compacted };
else(16)        JIP:  LABEL3          UIP:  LABEL3              { align1 1H };

LABEL4:
add(16)         g89<1>D         g39<1,1,0>D     36D             { align1 1H compacted };
cmp.l.f0.0(16)  g91<1>UD        g89<1,1,0>UD    g39<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g95<2>UD        g89<4,4,1>UD                    { align1 1Q };
mov(8)          g97<2>UD        g90<4,4,1>UD                    { align1 2Q };
add(16)         g93<1>D         -g91<1,1,0>D    g43<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g95.1<2>UD      g93<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g97.1<2>UD      g94<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g99UD           g95UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mul(8)          acc0<1>UD       g99<8,8,1>UD    0xaaabUW        { align1 1Q $5.dst };
mach(8)         g101<1>UD       g99<8,8,1>UD    0xaaaaaaabUD    { align1 1Q AccWrEnable };
mul(8)          acc0<1>UD       g100<8,8,1>UD   0xaaabUW        { align1 2Q $5.dst };
mach(8)         g102<1>UD       g100<8,8,1>UD   0xaaaaaaabUD    { align1 2Q AccWrEnable };
shr(16)         g3<1>UD         g101<1,1,0>UD   0x00000001UD    { align1 1H @1 $2.dst compacted };

LABEL3:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
add(16)         g102<1>D        g39<1,1,0>D     49D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shl(16)         g117<1>D        g33<8,8,1>D     0x00000003UD    { align1 1H };
shr(16)         g9<1>UD         g33<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
cmp.l.f0.0(16)  g104<1>UD       g102<1,1,0>UD   g39<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g108<2>UD       g102<4,4,1>UD                   { align1 1Q };
mov(8)          g110<2>UD       g103<4,4,1>UD                   { align1 2Q };
add(16)         g121<1>D        g2<0,1,0>D      g117<1,1,0>D    { align1 1H I@5 compacted };
add(16)         g106<1>D        -g104<1,1,0>D   g43<1,1,0>D     { align1 1H I@4 compacted };
cmp.l.f0.0(16)  g123<1>UD       g121<1,1,0>UD   g2<0,1,0>UD     { align1 1H I@2 compacted };
mov(8)          g13<2>UD        g121<4,4,1>UD                   { align1 1Q };
mov(8)          g15<2>UD        g122<4,4,1>UD                   { align1 2Q };
mov(8)          g108.1<2>UD     g106<4,4,1>UD                   { align1 1Q I@4 };
mov(8)          g110.1<2>UD     g107<4,4,1>UD                   { align1 2Q I@5 };
add3(16)        g125<1>D        g2.1<0,1,0>D    g9<8,8,1>D      -g123<1,1,1>D { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g112UD          g108UD          nullUD          0x08200980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
mov(8)          g13.1<2>UD      g125<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g15.1<2>UD      g126<4,4,1>UD                   { align1 2Q I@2 };
mov(16)         g114<1>UD       g112<32,8,4>UB                  { align1 1H $6.dst };
shl(16)         g116<1>D        g114<8,8,1>D    0x00000010UD    { align1 1H I@1 };
or(16)          g5<1>UD         g56<1,1,0>UD    g116<1,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g13UD           g3UD            0x08001584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 4 flat )  base_offset 0  { align1 1H $1 };

LABEL0:
endif(16)       JIP:  LABEL5                                    { align1 1H };

LABEL5:
shr(16)         g14<1>UD        g11<1,1,0>UD    0x00000001UD    { align1 1H $1.src compacted };

LABEL14:
cmp.ge.f0.0(16) null<1>UD       g22<8,8,1>UD    g24<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL6        UIP:  LABEL6              { align1 1H };
shl(16)         g16<1>D         g22<8,8,1>D     0x00000006UD    { align1 1H $1.src };
shr(16)         g35<1>UD        g16<1,1,0>UD    0x00000003UD    { align1 1H I@1 compacted };
add(16)         g20<1>D         g35<1,1,0>D     g14<1,1,0>D     { align1 1H I@1 compacted };
mul(8)          acc0<1>UD       g20<8,8,1>UD    0x0038UW        { align1 1Q I@1 };
mul(16)         g26<1>D         g20<1,1,0>D     56W             { align1 1H I@2 compacted };
mach(8)         g7<1>UD         g20<1,1,0>UD    0x00000038UD    { align1 1Q compacted AccWrEnable };
add(16)         g28<1>D         g2.2<0,1,0>D    g26<1,1,0>D     { align1 1H I@2 compacted };
mul(8)          acc0<1>UD       g21<8,8,1>UD    0x0038UW        { align1 2Q };
cmp.l.f0.0(16)  g30<1>UD        g28<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@2 compacted };
add(16)         g33<1>D         g28<1,1,0>D     48D             { align1 1H compacted };
mach(8)         g8<1>UD         g21<8,8,1>UD    0x00000038UD    { align1 2Q AccWrEnable };
cmp.l.f0.0(16)  g18<1>UD        g33<1,1,0>UD    g28<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g39<2>UD        g33<4,4,1>UD                    { align1 1Q $7.src };
mov(8)          g41<2>UD        g34<4,4,1>UD                    { align1 2Q $7.src };
and.z.f0.0(16)  null<1>UD       g11<8,8,1>UD    0x00000001UD    { align1 1H };
add3(16)        g32<1>D         g2.3<0,1,0>D    g7<8,8,1>D      -g30<1,1,1>D { align1 1H I@5 };
add(16)         g37<1>D         -g18<1,1,0>D    g32<1,1,0>D     { align1 1H I@1 compacted };
mov(8)          g39.1<2>UD      g37<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g41.1<2>UD      g38<4,4,1>UD                    { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g43UD           g39UD           nullUD          0x08200980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
mov(16)         g45<1>UD        g43<32,8,4>UB                   { align1 1H $7.dst };
cmp.z.f0.0(16)  null<1>D        g45<8,8,1>D     1D              { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL9              { align1 1H };
add(16)         g46<1>D         g28<1,1,0>D     16D             { align1 1H compacted };
cmp.l.f0.0(16)  g48<1>UD        g46<1,1,0>UD    g28<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g52<2>UD        g46<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g54<2>UD        g47<4,4,1>UD                    { align1 2Q $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g50<1>D         -g48<1,1,0>D    g32<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g52.1<2>UD      g50<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g54.1<2>UD      g51<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g4UD            g52UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
else(16)        JIP:  LABEL9          UIP:  LABEL9              { align1 1H };

LABEL10:
add(16)         g53<1>D         g28<1,1,0>D     40D             { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g55<1>UD        g53<1,1,0>UD    g28<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g59<2>UD        g53<4,4,1>UD                    { align1 1Q $8.src };
mov(8)          g61<2>UD        g54<4,4,1>UD                    { align1 2Q $8.src };
add(16)         g57<1>D         -g55<1,1,0>D    g32<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g59.1<2>UD      g57<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g61.1<2>UD      g58<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g63UD           g59UD           nullUD          0x08200980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
mov.nz.f0.0(16) null<1>UD       g63<32,8,4>UB                   { align1 1H $8.dst };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
add(16)         g64<1>D         g28<1,1,0>D     32D             { align1 1H $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g66<1>UD        g64<1,1,0>UD    g28<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g70<2>UD        g64<4,4,1>UD                    { align1 1Q $3.src };
mov(8)          g72<2>UD        g65<4,4,1>UD                    { align1 2Q $3.src };
add(16)         g68<1>D         -g66<1,1,0>D    g32<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g70.1<2>UD      g68<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g72.1<2>UD      g69<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g74UD           g70UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mul(8)          acc0<1>UD       g74<8,8,1>UD    0xaaabUW        { align1 1Q $3.dst };
mach(8)         g76<1>UD        g74<8,8,1>UD    0xaaaaaaabUD    { align1 1Q AccWrEnable };
mul(8)          acc0<1>UD       g75<8,8,1>UD    0xaaabUW        { align1 2Q $3.dst };
mach(8)         g77<1>UD        g75<8,8,1>UD    0xaaaaaaabUD    { align1 2Q AccWrEnable };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
shr(16)         g4<1>UD         g76<1,1,0>UD    0x00000001UD    { align1 1H I@1 compacted };
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
add(16)         g77<1>D         g28<1,1,0>D     36D             { align1 1H compacted };
cmp.l.f0.0(16)  g79<1>UD        g77<1,1,0>UD    g28<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g83<2>UD        g77<4,4,1>UD                    { align1 1Q $4.src };
mov(8)          g85<2>UD        g78<4,4,1>UD                    { align1 2Q $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g81<1>D         -g79<1,1,0>D    g32<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g83.1<2>UD      g81<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g85.1<2>UD      g82<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g87UD           g83UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
mul(8)          acc0<1>UD       g87<8,8,1>UD    0xaaabUW        { align1 1Q $4.dst };
mach(8)         g89<1>UD        g87<8,8,1>UD    0xaaaaaaabUD    { align1 1Q AccWrEnable };
mul(8)          acc0<1>UD       g88<8,8,1>UD    0xaaabUW        { align1 2Q $4.dst };
mach(8)         g90<1>UD        g88<8,8,1>UD    0xaaaaaaabUD    { align1 2Q AccWrEnable };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g4<1>UD         g89<1,1,0>UD    0x00000001UD    { align1 1H compacted };

LABEL11:
endif(16)       JIP:  LABEL9                                    { align1 1H };

LABEL9:
endif(16)       JIP:  LABEL13                                   { align1 1H };

LABEL13:
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g91UD           g39UD           nullUD          0x08200b80                0x00000000
                            ugm MsgDesc: ( load, a64, d16u32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
mov(16)         g114<2>UB       g91<16,8,2>UW                   { align1 1H $7.dst };
mov(16)         g90<1>UW        g91<16,8,2>UW                   { align1 1H };
mov(16)         g92<1>UD        g114<16,8,2>UB                  { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g94<1>UD        g90.1<16,8,2>UB                 { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
shl(16)         g96<1>D         g94<8,8,1>D     0x00000010UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(16)          g4<1>UD         g92<1,1,0>UD    g96<1,1,0>UD    { align1 1H compacted };

LABEL7:
endif(16)       JIP:  LABEL6                                    { align1 1H };
add(16)         g97<1>D         g2<0,1,0>D      g16<1,1,0>D     { align1 1H $5.src compacted };
cmp.l.f0.0(16)  g99<1>UD        g97<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g103<2>UD       g97<4,4,1>UD                    { align1 1Q };
mov(8)          g105<2>UD       g98<4,4,1>UD                    { align1 2Q };
add(16)         g101<1>D        -g99<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g103.1<2>UD     g101<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g105.1<2>UD     g102<4,4,1>UD                   { align1 2Q I@2 };
mov(1)          g117<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g117<1>UD       g117<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
fbl(1)          g107<1>UD       g117<0,1,0>UD                   { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shl(1)          a0<1>UD         g107<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000c00UD    { align1 WE_all 1N A@1 };
mov(1)          g109<2>D        g[a0 224]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g109.1<2>D      g[a0 228]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g113.1<2>D      g109.1<0,1,0>D                  { align1 WE_all 1Q I@1 };
mov(8)          g113<2>D        g109<0,1,0>D                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g113UD          g4UD            0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $1 };
add3(16)        g22<1>D         0x0001UW        g119<8,8,1>D    g22<1,1,1>D { align1 1H };

LABEL6:
while(16)       JIP:  LABEL14                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_geo_meta_data_code[] = {
    0x80000065, 0x76058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x6e050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00760c, 0x00340000,
    0x80030061, 0x0d054410, 0x00000000, 0x76543210,
    0x00041a61, 0x16050220, 0x00466e05, 0x00000000,
    0x640d1a40, 0x00800d95, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x0b050120,
    0x00460d05, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xe0770068, 0x0061025b,
    0x00040065, 0x0e058220, 0x02000284, 0xffffffc0,
    0x00040069, 0x14058660, 0x020002a4, 0x0000001d,
    0xa01a1b40, 0x77206e02, 0xa0101b40, 0x0e21025a,
    0xe0180068, 0x00600e03, 0xe0231a68, 0x00301003,
    0x20071966, 0x14002303, 0x271c1970, 0x07000b03,
    0xac1e1c70, 0x18021a02, 0x00041965, 0x00010220,
    0x22461c05, 0x00461e05, 0x01040022, 0x0001c060,
    0x00000560, 0x00000560, 0xe01f0068, 0x00300e03,
    0xa0211940, 0x1f000b02, 0x00031941, 0x20018220,
    0x01462105, 0x00380038, 0x60251a41, 0x03802102,
    0xfe120049, 0x03802103, 0xa0271a40, 0x25010242,
    0x00130041, 0x20018220, 0x01462205, 0x00380038,
    0x27291a70, 0x0210272b, 0xa02c0040, 0x03002703,
    0x00130049, 0x13058222, 0x02462205, 0x00000038,
    0x272e1a70, 0x27002c03, 0x00030061, 0x32060220,
    0x00342c05, 0x00000000, 0x00130061, 0x34060220,
    0x00342d05, 0x00000000, 0x00041c52, 0x2b040660,
    0x0e2e0264, 0x29051205, 0xa0301940, 0x2b022e02,
    0x00031961, 0x32260220, 0x00343005, 0x00000000,
    0x00131a61, 0x34260220, 0x00343105, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x36140000, 0xf3003224, 0x00020000,
    0x00042161, 0x38050020, 0x00663607, 0x00000000,
    0x00041970, 0x00018660, 0x16463805, 0x00000001,
    0x01040022, 0x0001c060, 0x000002e0, 0x00000098,
    0xa03a0040, 0x01002703, 0x273c1970, 0x27003a03,
    0x00030061, 0x40060220, 0x00343a05, 0x00000000,
    0x00130061, 0x42060220, 0x00343b05, 0x00000000,
    0xa03e1b40, 0x2b023c02, 0x00031961, 0x40260220,
    0x00343e05, 0x00000000, 0x00131a61, 0x42260220,
    0x00343f05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x03140000,
    0xfb004024, 0x00000000, 0x00040024, 0x0001c060,
    0x00000258, 0x00000258, 0xa0413240, 0x02802703,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x27431970, 0x27004103, 0x00030061, 0x47060220,
    0x00344105, 0x00000000, 0x00130061, 0x49060220,
    0x00344205, 0x00000000, 0xa0451b40, 0x2b024302,
    0x00031961, 0x47260220, 0x00344505, 0x00000000,
    0x00131a61, 0x49260220, 0x00344605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x4b140000, 0xf3004724, 0x00020000,
    0x00042361, 0x00010020, 0x20664b07, 0x00000000,
    0x01040022, 0x0001c060, 0x000001a0, 0x000000e0,
    0xa04c0040, 0x02002703, 0x274e1970, 0x27004c03,
    0x00030061, 0x52060220, 0x00344c05, 0x00000000,
    0x00130061, 0x54060220, 0x00344d05, 0x00000000,
    0xa0501b40, 0x2b024e02, 0x00031961, 0x52260220,
    0x00345005, 0x00000000, 0x00131a61, 0x54260220,
    0x00345105, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x56140000,
    0xfb005224, 0x00000000, 0x00032441, 0x20018220,
    0x01465605, 0xaaabaaab, 0x00030049, 0x58058222,
    0x02465605, 0xaaaaaaab, 0x00132441, 0x20018220,
    0x01465705, 0xaaabaaab, 0x00130049, 0x59058222,
    0x02465705, 0xaaaaaaab, 0xe0039268, 0x00105803,
    0x00040024, 0x0001c060, 0x000000d0, 0x000000d0,
    0xa0590040, 0x02402703, 0x275b1970, 0x27005903,
    0x00030061, 0x5f060220, 0x00345905, 0x00000000,
    0x00130061, 0x61060220, 0x00345a05, 0x00000000,
    0xa05d1b40, 0x2b025b02, 0x00031961, 0x5f260220,
    0x00345d05, 0x00000000, 0x00131a61, 0x61260220,
    0x00345e05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x63140000,
    0xfb005f24, 0x00000000, 0x00032541, 0x20018220,
    0x01466305, 0xaaabaaab, 0x00030049, 0x65058222,
    0x02466305, 0xaaaaaaab, 0x00132541, 0x20018220,
    0x01466405, 0xaaabaaab, 0x00130049, 0x66058222,
    0x02466405, 0xaaaaaaab, 0xe0039268, 0x00106503,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040025, 0x00004600, 0x00000000, 0x00000168,
    0xa0660040, 0x03102703, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x75058660,
    0x02462105, 0x00000003, 0xe0090068, 0x01d02103,
    0x27681b70, 0x27006603, 0x00030061, 0x6c060220,
    0x00346605, 0x00000000, 0x00130061, 0x6e060220,
    0x00346705, 0x00000000, 0xa0791d40, 0x75010202,
    0xa06a1c40, 0x2b026802, 0x277b1a70, 0x02107903,
    0x00030061, 0x0d060220, 0x00347905, 0x00000000,
    0x00130061, 0x0f060220, 0x00347a05, 0x00000000,
    0x00031c61, 0x6c260220, 0x00346a05, 0x00000000,
    0x00131d61, 0x6e260220, 0x00346b05, 0x00000000,
    0x00041d52, 0x7d040660, 0x0e2e0224, 0x7b050905,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x70140000, 0xf3006c24, 0x00020000,
    0x00031961, 0x0d260220, 0x00347d05, 0x00000000,
    0x00131a61, 0x0f260220, 0x00347e05, 0x00000000,
    0x00042661, 0x72050020, 0x00667007, 0x00000000,
    0x00041969, 0x74058660, 0x02467205, 0x00000010,
    0x20051966, 0x74003803, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb080d24, 0x00040324, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0xe00e3168, 0x00100b03,
    0x00041a70, 0x00010220, 0x42461605, 0x00461805,
    0x01040028, 0x0001c660, 0x000006d0, 0x000006d0,
    0x00043169, 0x10058660, 0x02461605, 0x00000006,
    0xe0231968, 0x00301003, 0xa0141940, 0x0e002302,
    0x00031941, 0x20018220, 0x01461405, 0x00380038,
    0x601a1a41, 0x03801402, 0xfe070049, 0x03801403,
    0xa01c1a40, 0x1a010242, 0x00130041, 0x20018220,
    0x01461505, 0x00380038, 0x271e1a70, 0x02101c2b,
    0xa0210040, 0x03001c03, 0x00130049, 0x08058222,
    0x02461505, 0x00000038, 0x27121a70, 0x1c002103,
    0x00033761, 0x27060220, 0x00342105, 0x00000000,
    0x00133761, 0x29060220, 0x00342205, 0x00000000,
    0x00040065, 0x00018220, 0x12460b05, 0x00000001,
    0x00041d52, 0x20040660, 0x0e2e0264, 0x1e050705,
    0xa0251940, 0x20021202, 0x00031961, 0x27260220,
    0x00342505, 0x00000000, 0x00131a61, 0x29260220,
    0x00342605, 0x00000000, 0x01040022, 0x0001c060,
    0x00000488, 0x000003d0, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x2b140000,
    0xf3002724, 0x00020000, 0x00042761, 0x2d050020,
    0x00662b07, 0x00000000, 0x00041970, 0x00018660,
    0x16462d05, 0x00000001, 0x01040022, 0x0001c060,
    0x00000360, 0x000000b8, 0xa02e0040, 0x01001c03,
    0x27301970, 0x1c002e03, 0x00033161, 0x34060220,
    0x00342e05, 0x00000000, 0x00133161, 0x36060220,
    0x00342f05, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0321b40, 0x20023002,
    0x00031961, 0x34260220, 0x00343205, 0x00000000,
    0x00131a61, 0x36260220, 0x00343305, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x04140000, 0xfb003424, 0x00000000,
    0x00040024, 0x0001c060, 0x000002b8, 0x000002b8,
    0xa0353140, 0x02801c03, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x27371970, 0x1c003503,
    0x00033861, 0x3b060220, 0x00343505, 0x00000000,
    0x00133861, 0x3d060220, 0x00343605, 0x00000000,
    0xa0391b40, 0x20023702, 0x00031961, 0x3b260220,
    0x00343905, 0x00000000, 0x00131a61, 0x3d260220,
    0x00343a05, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x3f140000,
    0xf3003b24, 0x00020000, 0x00042861, 0x00010020,
    0x20663f07, 0x00000000, 0x01040022, 0x0001c060,
    0x000001f0, 0x00000100, 0xa0403240, 0x02001c03,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x27421970, 0x1c004003, 0x00033361, 0x46060220,
    0x00344005, 0x00000000, 0x00133361, 0x48060220,
    0x00344105, 0x00000000, 0xa0441b40, 0x20024202,
    0x00031961, 0x46260220, 0x00344405, 0x00000000,
    0x00131a61, 0x48260220, 0x00344505, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x4a140000, 0xfb004624, 0x00000000,
    0x00032341, 0x20018220, 0x01464a05, 0xaaabaaab,
    0x00030049, 0x4c058222, 0x02464a05, 0xaaaaaaab,
    0x00132341, 0x20018220, 0x01464b05, 0xaaabaaab,
    0x00130049, 0x4d058222, 0x02464b05, 0xaaaaaaab,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0xe0041968, 0x00104c03, 0x00040024, 0x0001c060,
    0x00000100, 0x00000100, 0xa04d0040, 0x02401c03,
    0x274f1970, 0x1c004d03, 0x00033461, 0x53060220,
    0x00344d05, 0x00000000, 0x00133461, 0x55060220,
    0x00344e05, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xa0511b40, 0x20024f02,
    0x00031961, 0x53260220, 0x00345105, 0x00000000,
    0x00131a61, 0x55260220, 0x00345205, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x57140000, 0xfb005324, 0x00000000,
    0x00032441, 0x20018220, 0x01465705, 0xaaabaaab,
    0x00030049, 0x59058222, 0x02465705, 0xaaaaaaab,
    0x00132441, 0x20018220, 0x01465805, 0xaaabaaab,
    0x00130049, 0x5a058222, 0x02465805, 0xaaaaaaab,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe0040068, 0x00105903, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040024, 0x0001c060,
    0x000000c8, 0x000000c8, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x5b140000,
    0xf7002724, 0x00020000, 0x00042761, 0x72060100,
    0x00565b06, 0x00000000, 0x00040061, 0x5a050110,
    0x00565b06, 0x00000000, 0x00041a61, 0x5c050020,
    0x00567206, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00041a61, 0x5e050020,
    0x00565a0e, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00041969, 0x60058660,
    0x02465e05, 0x00000010, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x20040066, 0x60005c03,
    0x00040025, 0x00004600, 0x00000000, 0x00000150,
    0xa0613540, 0x10010202, 0x27631970, 0x02106103,
    0x00030061, 0x67060220, 0x00346105, 0x00000000,
    0x00130061, 0x69060220, 0x00346205, 0x00000000,
    0xa0651b40, 0x02126312, 0x00031961, 0x67260220,
    0x00346505, 0x00000000, 0x00131a61, 0x69260220,
    0x00346605, 0x00000000, 0xe2750961, 0x00114004,
    0x80000965, 0x75058220, 0x02007504, 0xffffffff,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80001a4c, 0x6b050220, 0x00007504, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02006b04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000c00,
    0x80000961, 0x6d060660, 0x00010380, 0x00000000,
    0x80000061, 0x6d260660, 0x00010390, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x71260660, 0x00006d24, 0x00000000,
    0x80031961, 0x71060660, 0x00006d04, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004131, 0x00000000, 0xfb08710c, 0x00340414,
    0x00040052, 0x16044160, 0x0e0e0001, 0x16057705,
    0x00040027, 0x00014060, 0x00000000, 0xfffff920,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_misc_copy_geo_meta_data = {
   .prog_data = {
      .base.nr_params = 14,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 3472,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_misc_copy_geo_meta_data_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_misc_copy_geo_meta_data_printfs,
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
      .push.cross_thread.dwords = 14,
      .push.cross_thread.regs = 2,
      .push.cross_thread.size = 64,
   },
   .args_size = 24,
   .arg_count = 3,
   .args = gfx125_misc_copy_geo_meta_data_args,
   .code = gfx125_misc_copy_geo_meta_data_code,
};
const char *gfx125_misc_copy_geo_meta_data_sha1 = "7e4cdff718744234fa2c58c7526a845d1feea47e";

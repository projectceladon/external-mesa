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

and(1)          g125<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g62<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g125UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g116<1>UW       0x76543210V                     { align1 WE_all 1Q };
mov(16)         g94<1>UD        g62<8,8,1>UD                    { align1 1H I@2 };
add(8)          g116.8<1>UW     g116<1,1,0>UW   0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g14<1>D         g116<8,8,1>UW                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
shr(16)         g12<1>UD        g2.4<0,1,0>UD   0x00000006UD    { align1 1H compacted };
and(16)         g16<1>UD        g2.4<0,1,0>UD   0xffffffc0UD    { align1 1H };
shl(16)         g22<1>D         g2.5<0,1,0>D    0x0000001dUD    { align1 1H };
add(16)         g28<1>D         g62<1,1,0>D     -g12<1,1,0>D    { align1 1H I@3 compacted };
add(16)         g18<1>D         g2.4<0,1,0>D    -g16<1,1,0>D    { align1 1H I@3 compacted };
shr(16)         g26<1>UD        g16<1,1,0>UD    0x00000006UD    { align1 1H compacted };
shr(16)         g20<1>UD        g18<1,1,0>UD    0x00000003UD    { align1 1H I@2 compacted };
or(16)          g24<1>UD        g20<1,1,0>UD    g22<1,1,0>UD    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g30<1>UD        g14<1,1,0>UD    g24<1,1,0>UD    { align1 1H I@1 compacted };
cmp.z.f0.0(16)  g32<1>D         -g28<1,1,0>D    g26<1,1,0>D     { align1 1H I@4 compacted };
and.nz.f0.0(16) null<1>UD       g30<8,8,1>UD    g32<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shr(16)         g33<1>UD        g16<1,1,0>UD    0x00000003UD    { align1 1H compacted };
add(16)         g35<1>D         g14<1,1,0>D     g33<1,1,0>D     { align1 1H I@1 compacted };
mul(8)          acc0<1>UD       g35<8,8,1>UD    0x0038UW        { align1 1Q I@1 };
mul(16)         g39<1>D         g35<1,1,0>D     56W             { align1 1H I@2 compacted };
mach(8)         g37<1>UD        g35<1,1,0>UD    0x00000038UD    { align1 1Q compacted AccWrEnable };
add(16)         g41<1>D         g2.2<0,1,0>D    g39<1,1,0>D     { align1 1H I@2 compacted };
mul(8)          acc0<1>UD       g36<8,8,1>UD    0x0038UW        { align1 2Q };
cmp.l.f0.0(16)  g48<1>UD        g41<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@2 compacted };
add(16)         g51<1>D         g41<1,1,0>D     48D             { align1 1H compacted };
mach(8)         g38<1>UD        g36<8,8,1>UD    0x00000038UD    { align1 2Q AccWrEnable };
cmp.l.f0.0(16)  g43<1>UD        g51<1,1,0>UD    g41<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g63<2>UD        g51<4,4,1>UD                    { align1 1Q };
mov(8)          g65<2>UD        g52<4,4,1>UD                    { align1 2Q };
add3(16)        g50<1>D         g2.3<0,1,0>D    g37<8,8,1>D     -g48<1,1,1>D { align1 1H I@4 };
add(16)         g45<1>D         -g43<1,1,0>D    g50<1,1,0>D     { align1 1H I@1 compacted };
mov(8)          g63.1<2>UD      g45<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g65.1<2>UD      g46<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g46UD           g63UD           nullUD          0x08200980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(16)         g53<1>UD        g46<32,8,4>UB                   { align1 1H $1.dst };
cmp.z.f0.0(16)  null<1>D        g53<8,8,1>D     1D              { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL1              { align1 1H };
add(16)         g55<1>D         g41<1,1,0>D     16D             { align1 1H compacted };
cmp.l.f0.0(16)  g57<1>UD        g55<1,1,0>UD    g41<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g64<2>UD        g55<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g66<2>UD        g56<4,4,1>UD                    { align1 2Q $1.src };
add(16)         g59<1>D         -g57<1,1,0>D    g50<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g64.1<2>UD      g59<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g66.1<2>UD      g60<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g3UD            g64UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
else(16)        JIP:  LABEL1          UIP:  LABEL1              { align1 1H };

LABEL2:
add(16)         g60<1>D         g41<1,1,0>D     40D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g62<1>UD        g60<1,1,0>UD    g41<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g67<2>UD        g60<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g69<2>UD        g61<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g64<1>D         -g62<1,1,0>D    g50<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g67.1<2>UD      g64<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g69.1<2>UD      g65<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g65UD           g67UD           nullUD          0x08200980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov.nz.f0.0(16) null<1>UD       g65<32,8,4>UB                   { align1 1H $1.dst };
(+f0.0) if(16)  JIP:  LABEL4          UIP:  LABEL3              { align1 1H };
add(16)         g66<1>D         g41<1,1,0>D     32D             { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g68<1>UD        g66<1,1,0>UD    g41<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g73<2>UD        g66<4,4,1>UD                    { align1 1Q };
mov(8)          g75<2>UD        g67<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g70<1>D         -g68<1,1,0>D    g50<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g73.1<2>UD      g70<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g75.1<2>UD      g71<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g71UD           g73UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mul(8)          acc0<1>UD       g71<8,8,1>UD    0xaaabUW        { align1 1Q $2.dst };
mach(8)         g73<1>UD        g71<8,8,1>UD    0xaaaaaaabUD    { align1 1Q $2.src AccWrEnable };
mul(8)          acc0<1>UD       g72<8,8,1>UD    0xaaabUW        { align1 2Q $2.dst };
mach(8)         g74<1>UD        g72<8,8,1>UD    0xaaaaaaabUD    { align1 2Q $2.src AccWrEnable };
shr(16)         g3<1>UD         g73<1,1,0>UD    0x00000001UD    { align1 1H @1 $1.dst compacted };
else(16)        JIP:  LABEL3          UIP:  LABEL3              { align1 1H };

LABEL4:
add(16)         g74<1>D         g41<1,1,0>D     36D             { align1 1H $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g76<1>UD        g74<1,1,0>UD    g41<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g81<2>UD        g74<4,4,1>UD                    { align1 1Q };
mov(8)          g83<2>UD        g75<4,4,1>UD                    { align1 2Q };
add(16)         g78<1>D         -g76<1,1,0>D    g50<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g81.1<2>UD      g78<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g83.1<2>UD      g79<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g79UD           g81UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mul(8)          acc0<1>UD       g79<8,8,1>UD    0xaaabUW        { align1 1Q $3.dst };
mach(8)         g81<1>UD        g79<8,8,1>UD    0xaaaaaaabUD    { align1 1Q $3.src AccWrEnable };
mul(8)          acc0<1>UD       g80<8,8,1>UD    0xaaabUW        { align1 2Q $3.dst };
mach(8)         g82<1>UD        g80<8,8,1>UD    0xaaaaaaabUD    { align1 2Q $3.src AccWrEnable };
shr(16)         g3<1>UD         g81<1,1,0>UD    0x00000001UD    { align1 1H @1 $1.dst compacted };

LABEL3:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
add(16)         g82<1>D         g41<1,1,0>D     49D             { align1 1H $3.src compacted };
shl(16)         g92<1>D         g35<8,8,1>D     0x00000003UD    { align1 1H };
shr(16)         g10<1>UD        g35<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g84<1>UD        g82<1,1,0>UD    g41<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g102<2>UD       g82<4,4,1>UD                    { align1 1Q };
mov(8)          g104<2>UD       g83<4,4,1>UD                    { align1 2Q };
add(16)         g96<1>D         g2<0,1,0>D      g92<1,1,0>D     { align1 1H I@5 compacted };
add(16)         g86<1>D         -g84<1,1,0>D    g50<1,1,0>D     { align1 1H I@4 compacted };
cmp.l.f0.0(16)  g98<1>UD        g96<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@2 compacted };
mov(8)          g106<2>UD       g96<4,4,1>UD                    { align1 1Q };
mov(8)          g108<2>UD       g97<4,4,1>UD                    { align1 2Q };
mov(8)          g102.1<2>UD     g86<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g104.1<2>UD     g87<4,4,1>UD                    { align1 2Q I@5 };
add3(16)        g100<1>D        g2.1<0,1,0>D    g10<8,8,1>D     -g98<1,1,1>D { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g87UD           g102UD          nullUD          0x08200980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
mov(8)          g106.1<2>UD     g100<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g108.1<2>UD     g101<4,4,1>UD                   { align1 2Q I@2 };
mov(16)         g89<1>UD        g87<32,8,4>UB                   { align1 1H $4.dst };
shl(16)         g91<1>D         g89<8,8,1>D     0x00000010UD    { align1 1H I@1 };
or(16)          g5<1>UD         g53<1,1,0>UD    g91<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g106UD          g3UD            0x08003586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 4 flat )  base_offset 0  { align1 1H $5 };

LABEL0:
endif(16)       JIP:  LABEL5                                    { align1 1H };

LABEL5:
shr(16)         g101<1>UD       g14<1,1,0>UD    0x00000001UD    { align1 1H $4.src compacted };

LABEL14:
cmp.ge.f0.0(16) null<1>UD       g94<8,8,1>UD    g26<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL6        UIP:  LABEL6              { align1 1H };
shl(16)         g103<1>D        g94<8,8,1>D     0x00000006UD    { align1 1H $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
shr(16)         g105<1>UD       g103<1,1,0>UD   0x00000003UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g107<1>D        g105<1,1,0>D    g101<1,1,0>D    { align1 1H I@1 compacted };
mul(8)          acc0<1>UD       g107<8,8,1>UD   0x0038UW        { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mul(16)         g111<1>D        g107<1,1,0>D    56W             { align1 1H I@2 compacted };
mach(8)         g109<1>UD       g107<1,1,0>UD   0x00000038UD    { align1 1Q $5.src compacted AccWrEnable };
add(16)         g113<1>D        g2.2<0,1,0>D    g111<1,1,0>D    { align1 1H I@2 compacted };
mul(8)          acc0<1>UD       g108<8,8,1>UD   0x0038UW        { align1 2Q };
cmp.l.f0.0(16)  g8<1>UD         g113<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H I@2 compacted };
add(16)         g118<1>D        g113<1,1,0>D    48D             { align1 1H $6.src compacted };
mach(8)         g110<1>UD       g108<8,8,1>UD   0x00000038UD    { align1 2Q $5.src AccWrEnable };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g120<1>UD       g118<1,1,0>UD   g113<1,1,0>UD   { align1 1H compacted };
mov(8)          g4<2>UD         g118<4,4,1>UD                   { align1 1Q $5.src };
mov(8)          g6<2>UD         g119<4,4,1>UD                   { align1 2Q $5.src };
and.z.f0.0(16)  null<1>UD       g14<8,8,1>UD    0x00000001UD    { align1 1H };
add3(16)        g117<1>D        g2.3<0,1,0>D    g109<8,8,1>D    -g8<1,1,1>D { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g122<1>D        -g120<1,1,0>D   g117<1,1,0>D    { align1 1H I@1 compacted };
mov(8)          g4.1<2>UD       g122<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g6.1<2>UD       g123<4,4,1>UD                   { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g123UD          g4UD            nullUD          0x08200980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g125<1>UD       g123<32,8,4>UB                  { align1 1H $5.dst };
cmp.z.f0.0(16)  null<1>D        g125<8,8,1>D    1D              { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL9              { align1 1H };
add(16)         g126<1>D        g113<1,1,0>D    16D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g115<1>UD       g126<1,1,0>UD   g113<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g107<2>UD       g126<4,4,1>UD                   { align1 1Q };
mov(8)          g109<2>UD       g127<4,4,1>UD                   { align1 2Q };
add(16)         g16<1>D         -g115<1,1,0>D   g117<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g107.1<2>UD     g16<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g109.1<2>UD     g17<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g115UD          g107UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
else(16)        JIP:  LABEL9          UIP:  LABEL9              { align1 1H };

LABEL10:
add(16)         g17<1>D         g113<1,1,0>D    40D             { align1 1H compacted };
cmp.l.f0.0(16)  g19<1>UD        g17<1,1,0>UD    g113<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g108<2>UD       g17<4,4,1>UD                    { align1 1Q $5.src };
mov(8)          g110<2>UD       g18<4,4,1>UD                    { align1 2Q $5.src };
add(16)         g21<1>D         -g19<1,1,0>D    g117<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g108.1<2>UD     g21<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g110.1<2>UD     g22<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g22UD           g108UD          nullUD          0x08200980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mov.nz.f0.0(16) null<1>UD       g22<32,8,4>UB                   { align1 1H $5.dst };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
add(16)         g23<1>D         g113<1,1,0>D    32D             { align1 1H compacted };
cmp.l.f0.0(16)  g28<1>UD        g23<1,1,0>UD    g113<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g109<2>UD       g23<4,4,1>UD                    { align1 1Q $5.src };
mov(8)          g111<2>UD       g24<4,4,1>UD                    { align1 2Q $5.src };
add(16)         g30<1>D         -g28<1,1,0>D    g117<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g109.1<2>UD     g30<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g111.1<2>UD     g31<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g31UD           g109UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mul(8)          acc0<1>UD       g31<8,8,1>UD    0xaaabUW        { align1 1Q $5.dst };
mach(8)         g33<1>UD        g31<8,8,1>UD    0xaaaaaaabUD    { align1 1Q AccWrEnable };
mul(8)          acc0<1>UD       g32<8,8,1>UD    0xaaabUW        { align1 2Q $5.dst };
mach(8)         g34<1>UD        g32<8,8,1>UD    0xaaaaaaabUD    { align1 2Q AccWrEnable };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
shr(16)         g115<1>UD       g33<1,1,0>UD    0x00000001UD    { align1 1H I@1 compacted };
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
add(16)         g34<1>D         g113<1,1,0>D    36D             { align1 1H compacted };
cmp.l.f0.0(16)  g36<1>UD        g34<1,1,0>UD    g113<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g119<2>UD       g34<4,4,1>UD                    { align1 1Q };
mov(8)          g121<2>UD       g35<4,4,1>UD                    { align1 2Q };
add(16)         g38<1>D         -g36<1,1,0>D    g117<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g119.1<2>UD     g38<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g121.1<2>UD     g39<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g39UD           g119UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
mul(8)          acc0<1>UD       g39<8,8,1>UD    0xaaabUW        { align1 1Q $6.dst };
mach(8)         g41<1>UD        g39<8,8,1>UD    0xaaaaaaabUD    { align1 1Q AccWrEnable };
mul(8)          acc0<1>UD       g40<8,8,1>UD    0xaaabUW        { align1 2Q $6.dst };
mach(8)         g42<1>UD        g40<8,8,1>UD    0xaaaaaaabUD    { align1 2Q AccWrEnable };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g115<1>UD       g41<1,1,0>UD    0x00000001UD    { align1 1H compacted };

LABEL11:
endif(16)       JIP:  LABEL9                                    { align1 1H };

LABEL9:
endif(16)       JIP:  LABEL13                                   { align1 1H };

LABEL13:
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g48UD           g4UD            nullUD          0x08200b80                0x00000000
                            ugm MsgDesc: ( load, a64, d16u32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mov(16)         g123<2>UB       g48<16,8,2>UW                   { align1 1H $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g121<2>HF       g48<16,8,2>HF                   { align1 1H I@4 };
mov(16)         g49<1>UD        g123<16,8,2>UB                  { align1 1H A@1 };
mov(16)         g42<1>UW        g121<16,8,2>UW                  { align1 1H F@1 };
mov(16)         g51<1>UD        g42.1<16,8,2>UB                 { align1 1H I@1 };
shl(16)         g43<1>D         g51<8,8,1>D     0x00000010UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(16)          g115<1>UD       g49<1,1,0>UD    g43<1,1,0>UD    { align1 1H compacted };

LABEL7:
endif(16)       JIP:  LABEL6                                    { align1 1H };
add(16)         g44<1>D         g2<0,1,0>D      g103<1,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g46<1>UD        g44<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g55<2>UD        g44<4,4,1>UD                    { align1 1Q };
mov(8)          g57<2>UD        g45<4,4,1>UD                    { align1 2Q };
add(16)         g53<1>D         -g46<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g55.1<2>UD      g53<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g57.1<2>UD      g54<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g124<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g124<1>UD       g124<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
fbl(1)          g59<1>UD        g124<0,1,0>UD                   { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shl(1)          a0<1>UD         g59<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g61<2>D         g[a0 224]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g61.1<2>D       g[a0 228]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g120.1<2>D      g61.1<0,1,0>D                   { align1 WE_all 1Q I@1 };
mov(8)          g120<2>D        g61<0,1,0>D                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g120UD          g115UD          0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat )  base_offset 0  { align1 WE_all 1N $5 };
add3(16)        g94<1>D         0x0001UW        g12<8,8,1>D     g94<1,1,1>D { align1 1H };

LABEL6:
while(16)       JIP:  LABEL14                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_geo_meta_data_code[] = {
    0x80000065, 0x7d058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x3e050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa007d0c, 0x00340000,
    0x80030061, 0x74054410, 0x00000000, 0x76543210,
    0x00041a61, 0x5e050220, 0x00463e05, 0x00000000,
    0x64741a40, 0x00807495, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x0e050160,
    0x00467405, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xe00c0068, 0x0061025b,
    0x00040065, 0x10058220, 0x02000284, 0xffffffc0,
    0x00040069, 0x16058660, 0x020002a4, 0x0000001d,
    0xa01c1b40, 0x0c203e02, 0xa0121b40, 0x1021025a,
    0xe01a0068, 0x00601003, 0xe0141a68, 0x00301203,
    0x20181966, 0x16001403, 0x271e1970, 0x18000e03,
    0xac201c70, 0x1a021c02, 0x00041965, 0x00010220,
    0x22461e05, 0x00462005, 0x01040022, 0x0001c060,
    0x000005a0, 0x000005a0, 0xe0210068, 0x00301003,
    0xa0231940, 0x21000e02, 0x00031941, 0x20018220,
    0x01462305, 0x00380038, 0x60271a41, 0x03802302,
    0xfe250049, 0x03802303, 0xa0291a40, 0x27010242,
    0x00130041, 0x20018220, 0x01462405, 0x00380038,
    0x27301a70, 0x0210292b, 0xa0330040, 0x03002903,
    0x00130049, 0x26058222, 0x02462405, 0x00000038,
    0x272b1a70, 0x29003303, 0x00030061, 0x3f060220,
    0x00343305, 0x00000000, 0x00130061, 0x41060220,
    0x00343405, 0x00000000, 0x00041c52, 0x32040660,
    0x0e2e0264, 0x30052505, 0xa02d1940, 0x32022b02,
    0x00031961, 0x3f260220, 0x00342d05, 0x00000000,
    0x00131a61, 0x41260220, 0x00342e05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x2e140000, 0xf3003f24, 0x00020000,
    0x00042161, 0x35050020, 0x00662e07, 0x00000000,
    0x00041970, 0x00018660, 0x16463505, 0x00000001,
    0x01040022, 0x0001c060, 0x00000320, 0x00000098,
    0xa0370040, 0x01002903, 0x27391970, 0x29003703,
    0x00033161, 0x40060220, 0x00343705, 0x00000000,
    0x00133161, 0x42060220, 0x00343805, 0x00000000,
    0xa03b1b40, 0x32023902, 0x00031961, 0x40260220,
    0x00343b05, 0x00000000, 0x00131a61, 0x42260220,
    0x00343c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x03140000,
    0xfb044024, 0x00040000, 0x00040024, 0x0001c060,
    0x00000298, 0x00000298, 0xa03c0040, 0x02802903,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x273e1970, 0x29003c03, 0x00033161, 0x43060220,
    0x00343c05, 0x00000000, 0x00130061, 0x45060220,
    0x00343d05, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0401b40, 0x32023e02,
    0x00031961, 0x43260220, 0x00344005, 0x00000000,
    0x00131a61, 0x45260220, 0x00344105, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x41140000, 0xf3004324, 0x00020000,
    0x00042161, 0x00010020, 0x20664107, 0x00000000,
    0x01040022, 0x0001c060, 0x000001d0, 0x00000100,
    0xa0423140, 0x02002903, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x27441970, 0x29004203,
    0x00030061, 0x49060220, 0x00344205, 0x00000000,
    0x00130061, 0x4b060220, 0x00344305, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa0461b40, 0x32024402, 0x00031961, 0x49260220,
    0x00344605, 0x00000000, 0x00131a61, 0x4b260220,
    0x00344705, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x47140000,
    0xfb044924, 0x00040000, 0x00032241, 0x20018220,
    0x01464705, 0xaaabaaab, 0x00033249, 0x49058222,
    0x02464705, 0xaaaaaaab, 0x00132241, 0x20018220,
    0x01464805, 0xaaabaaab, 0x00133249, 0x4a058222,
    0x02464805, 0xaaaaaaab, 0xe0039168, 0x00104903,
    0x00040024, 0x0001c060, 0x000000e0, 0x000000e0,
    0xa04a3240, 0x02402903, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x274c1970, 0x29004a03,
    0x00030061, 0x51060220, 0x00344a05, 0x00000000,
    0x00130061, 0x53060220, 0x00344b05, 0x00000000,
    0xa04e1b40, 0x32024c02, 0x00031961, 0x51260220,
    0x00344e05, 0x00000000, 0x00131a61, 0x53260220,
    0x00344f05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x4f140000,
    0xfb045124, 0x00040000, 0x00032341, 0x20018220,
    0x01464f05, 0xaaabaaab, 0x00033349, 0x51058222,
    0x02464f05, 0xaaaaaaab, 0x00132341, 0x20018220,
    0x01465005, 0xaaabaaab, 0x00133349, 0x52058222,
    0x02465005, 0xaaaaaaab, 0xe0039168, 0x00105103,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040025, 0x00004600, 0x00000000, 0x00000168,
    0xa0523340, 0x03102903, 0x00040069, 0x5c058660,
    0x02462305, 0x00000003, 0xe00a0068, 0x01d02303,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x27541b70, 0x29005203, 0x00030061, 0x66060220,
    0x00345205, 0x00000000, 0x00130061, 0x68060220,
    0x00345305, 0x00000000, 0xa0601d40, 0x5c010202,
    0xa0561c40, 0x32025402, 0x27621a70, 0x02106003,
    0x00030061, 0x6a060220, 0x00346005, 0x00000000,
    0x00130061, 0x6c060220, 0x00346105, 0x00000000,
    0x00031c61, 0x66260220, 0x00345605, 0x00000000,
    0x00131d61, 0x68260220, 0x00345705, 0x00000000,
    0x00041d52, 0x64040660, 0x0e2e0224, 0x62050a05,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x57140000, 0xf3006624, 0x00020000,
    0x00031961, 0x6a260220, 0x00346405, 0x00000000,
    0x00131a61, 0x6c260220, 0x00346505, 0x00000000,
    0x00042461, 0x59050020, 0x00665707, 0x00000000,
    0x00041969, 0x5b058660, 0x02465905, 0x00000010,
    0x20051966, 0x5b003503, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x00000000,
    0xfb0c6a24, 0x000c0324, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0xe0653468, 0x00100e03,
    0x00041a70, 0x00010220, 0x42465e05, 0x00461a05,
    0x01040028, 0x0001c660, 0x00000700, 0x00000700,
    0x00043469, 0x67058660, 0x02465e05, 0x00000006,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xe0691968, 0x00306703, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa06b1940, 0x65006902,
    0x00031941, 0x20018220, 0x01466b05, 0x00380038,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x606f1a41, 0x03806b02, 0xfe6d3549, 0x03806b03,
    0xa0711a40, 0x6f010242, 0x00130041, 0x20018220,
    0x01466c05, 0x00380038, 0x27081a70, 0x0210712b,
    0xa0763640, 0x03007103, 0x00133549, 0x6e058222,
    0x02466c05, 0x00000038, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x27780070, 0x71007603,
    0x00033561, 0x04060220, 0x00347605, 0x00000000,
    0x00133561, 0x06060220, 0x00347705, 0x00000000,
    0x00040065, 0x00018220, 0x12460e05, 0x00000001,
    0x00041d52, 0x75040660, 0x0e2e0264, 0x08056d05,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa07a1940, 0x75027802, 0x00031961, 0x04260220,
    0x00347a05, 0x00000000, 0x00131a61, 0x06260220,
    0x00347b05, 0x00000000, 0x01040022, 0x0001c060,
    0x00000448, 0x00000390, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x7b140000,
    0xf3000424, 0x00020000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00042561, 0x7d050020,
    0x00667b07, 0x00000000, 0x00041970, 0x00018660,
    0x16467d05, 0x00000001, 0x01040022, 0x0001c060,
    0x00000310, 0x000000a8, 0xa07e0040, 0x01007103,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x27731970, 0x71007e03, 0x00030061, 0x6b060220,
    0x00347e05, 0x00000000, 0x00130061, 0x6d060220,
    0x00347f05, 0x00000000, 0xa0101b40, 0x75027302,
    0x00031961, 0x6b260220, 0x00341005, 0x00000000,
    0x00131a61, 0x6d260220, 0x00341105, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x73140000, 0xfb046b24, 0x00040000,
    0x00040024, 0x0001c060, 0x00000278, 0x00000278,
    0xa0110040, 0x02807103, 0x27131970, 0x71001103,
    0x00033561, 0x6c060220, 0x00341105, 0x00000000,
    0x00133561, 0x6e060220, 0x00341205, 0x00000000,
    0xa0151b40, 0x75021302, 0x00031961, 0x6c260220,
    0x00341505, 0x00000000, 0x00131a61, 0x6e260220,
    0x00341605, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x16140000,
    0xf3006c24, 0x00020000, 0x00042561, 0x00010020,
    0x20661607, 0x00000000, 0x01040022, 0x0001c060,
    0x000001d0, 0x000000f0, 0xa0170040, 0x02007103,
    0x271c1970, 0x71001703, 0x00033561, 0x6d060220,
    0x00341705, 0x00000000, 0x00133561, 0x6f060220,
    0x00341805, 0x00000000, 0xa01e1b40, 0x75021c02,
    0x00031961, 0x6d260220, 0x00341e05, 0x00000000,
    0x00131a61, 0x6f260220, 0x00341f05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x1f140000, 0xfb046d24, 0x00040000,
    0x00032541, 0x20018220, 0x01461f05, 0xaaabaaab,
    0x00030049, 0x21058222, 0x02461f05, 0xaaaaaaab,
    0x00132541, 0x20018220, 0x01462005, 0xaaabaaab,
    0x00130049, 0x22058222, 0x02462005, 0xaaaaaaab,
    0x80002501, 0x00000000, 0x00000000, 0x00000000,
    0xe0731968, 0x00102103, 0x00040024, 0x0001c060,
    0x000000f0, 0x000000f0, 0xa0220040, 0x02407103,
    0x27241970, 0x71002203, 0x00030061, 0x77060220,
    0x00342205, 0x00000000, 0x00130061, 0x79060220,
    0x00342305, 0x00000000, 0xa0261b40, 0x75022402,
    0x00031961, 0x77260220, 0x00342605, 0x00000000,
    0x00131a61, 0x79260220, 0x00342705, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x27140000, 0xfb047724, 0x00040000,
    0x00032641, 0x20018220, 0x01462705, 0xaaabaaab,
    0x00030049, 0x29058222, 0x02462705, 0xaaaaaaab,
    0x00132641, 0x20018220, 0x01462805, 0xaaabaaab,
    0x00130049, 0x2a058222, 0x02462805, 0xaaaaaaab,
    0x80002501, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe0730068, 0x00102903, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040024, 0x0001c060,
    0x000000c8, 0x000000c8, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x30140000,
    0xf7000424, 0x00020000, 0x00042561, 0x7b060100,
    0x00563006, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00041c61, 0x79060990,
    0x00563006, 0x00000000, 0x00040961, 0x31050020,
    0x00567b06, 0x00000000, 0x00041161, 0x2a050110,
    0x00567906, 0x00000000, 0x00041961, 0x33050020,
    0x00562a0e, 0x00000000, 0x00041969, 0x2b058660,
    0x02463305, 0x00000010, 0x80002501, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x20730066, 0x2b003103,
    0x00040025, 0x00004600, 0x00000000, 0x00000150,
    0xa02c0040, 0x67010202, 0x272e1970, 0x02102c03,
    0x00030061, 0x37060220, 0x00342c05, 0x00000000,
    0x00130061, 0x39060220, 0x00342d05, 0x00000000,
    0xa0351b40, 0x02122e12, 0x00031961, 0x37260220,
    0x00343505, 0x00000000, 0x00131a61, 0x39260220,
    0x00343605, 0x00000000, 0xe27c0961, 0x00114004,
    0x80000965, 0x7c058220, 0x02007c04, 0xffffffff,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80001a4c, 0x3b050220, 0x00007c04, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02003b04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000600,
    0x80000961, 0x3d060660, 0x00010380, 0x00000000,
    0x80000061, 0x3d260660, 0x00010390, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x78260660, 0x00003d24, 0x00000000,
    0x80031961, 0x78060660, 0x00003d04, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8a004531, 0x00000000, 0xfb08780c, 0x00347314,
    0x00040052, 0x5e044160, 0x0e0e0001, 0x5e050c05,
    0x00040027, 0x00014060, 0x00000000, 0xfffff8f0,
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
      .base.program_size = 3584,
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
const char *gfx125_misc_copy_geo_meta_data_sha1 = "0efc4214dbbb0439ab1bcc8e197edc50486e2271";

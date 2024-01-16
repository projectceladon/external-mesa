#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_misc_copy_geo_meta_data_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_misc_copy_geo_meta_data_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g40<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(8)          g20<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(16)         g107<1>UD       g0.1<0,1,0>UD                   { align1 1H };
add(1)          g41<1>UD        g40<0,1,0>UD    0x00000000UD    { align1 WE_all 1N I@3 compacted };
add(8)          g20.8<1>UW      g20<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@3 compacted };
mov(16)         g21<1>UD        g107<8,8,1>UD                   { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g1UD            g41UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g31<1>D         g20<8,8,1>UW                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g45.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g23.1<2>F       g2.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g35.1<2>F       g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g25.1<2>F       g2.3<0,1,0>F                    { align1 2Q };
mov(8)          g118.1<2>F      g2.5<0,1,0>F                    { align1 1Q };
mov(8)          g27.1<2>F       g2.5<0,1,0>F                    { align1 2Q };
mov(8)          g45<2>F         g2<0,1,0>F                      { align1 1Q F@6 compacted };
mov(8)          g23<2>F         g2<0,1,0>F                      { align1 2Q F@6 compacted };
mov(8)          g35<2>F         g2.2<0,1,0>F                    { align1 1Q F@6 compacted };
mov(8)          g25<2>F         g2.2<0,1,0>F                    { align1 2Q F@6 compacted };
mov(8)          g118<2>F        g2.4<0,1,0>F                    { align1 1Q F@6 compacted };
mov(8)          g27<2>F         g2.4<0,1,0>F                    { align1 2Q F@6 compacted };
shr(8)          g29<1>UD        g118<8,4,2>UD   0x00000006UD    { align1 1Q F@2 compacted };
and(8)          g33<1>UD        g118<8,4,2>UD   0xffffffc0UD    { align1 1Q };
mov(8)          g37<1>UD        g118.1<8,4,2>UD                 { align1 1Q };
shr(8)          g30<1>UD        g27<8,4,2>UD    0x00000006UD    { align1 2Q F@1 compacted };
and(8)          g34<1>UD        g27<8,4,2>UD    0xffffffc0UD    { align1 2Q };
mov(8)          g38<1>UD        g27.1<8,4,2>UD                  { align1 2Q };
add(8)          g39<1>D         g118<8,4,2>D    -g33<1,1,0>D    { align1 1Q I@5 compacted };
add(16)         g53<1>D         g107<1,1,0>D    -g29<1,1,0>D    { align1 1H I@4 compacted };
cmp.g.f0.0(16)  g18<1>UD        g33<1,1,0>UD    0x00000000UD    { align1 1H I@4 compacted };
add(8)          g40<1>D         g27<8,4,2>D     -g34<1,1,0>D    { align1 2Q compacted };
shr(16)         g51<1>UD        g33<1,1,0>UD    0x00000006UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(8)   g41<1>UD        g39<8,8,1>UD    g118<8,4,2>UD   { align1 1Q I@5 };
cmp.l.f0.0(8)   g42<1>UD        g40<8,8,1>UD    g27<8,4,2>UD    { align1 2Q I@3 };
shr(16)         g16<1>UD        g39<1,1,0>UD    0x00000003UD    { align1 1H compacted };
add3(16)        g43<1>D         g37<8,8,1>D     g18<8,8,1>D     -g41<1,1,1>D { align1 1H I@2 };
shl(16)         g47<1>D         g43<8,8,1>D     0x0000001dUD    { align1 1H I@1 };
or(16)          g49<1>UD        g16<1,1,0>UD    g47<1,1,0>UD    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g55<1>UD        g31<1,1,0>UD    g49<1,1,0>UD    { align1 1H I@1 compacted };
cmp.z.f0.0(16)  g57<1>D         -g53<1,1,0>D    g51<1,1,0>D     { align1 1H I@7 compacted };
and.nz.f0.0(16) null<1>UD       g55<8,8,1>UD    g57<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shr(16)         g58<1>UD        g33<1,1,0>UD    0x00000003UD    { align1 1H compacted };
mov(8)          g66<1>UD        g35.1<8,4,2>UD                  { align1 1Q F@4 };
mov(8)          g67<1>UD        g25.1<8,4,2>UD                  { align1 2Q F@3 };
add(16)         g60<1>D         g31<1,1,0>D     g58<1,1,0>D     { align1 1H I@3 compacted };
mul(8)          acc0<1>UD       g60<8,8,1>UD    0x0038UW        { align1 1Q I@1 };
mul(16)         g64<1>D         g60<1,1,0>D     56W             { align1 1H I@2 compacted };
mach(8)         g62<1>UD        g60<1,1,0>UD    0x00000038UD    { align1 1Q compacted AccWrEnable };
add(8)          g68<1>D         g35<8,4,2>D     g64<1,1,0>D     { align1 1Q I@2 compacted };
add(8)          g69<1>D         g25<8,4,2>D     g65<1,1,0>D     { align1 2Q I@3 compacted };
mul(8)          acc0<1>UD       g61<8,8,1>UD    0x0038UW        { align1 2Q };
cmp.l.f0.0(8)   g70<1>UD        g68<8,8,1>UD    g35<8,4,2>UD    { align1 1Q I@3 };
cmp.l.f0.0(8)   g71<1>UD        g69<8,8,1>UD    g25<8,4,2>UD    { align1 2Q I@3 };
add(16)         g73<1>D         g68<1,1,0>D     48D             { align1 1H compacted };
mach(8)         g63<1>UD        g61<8,8,1>UD    0x00000038UD    { align1 2Q AccWrEnable };
cmp.l.f0.0(16)  g75<1>UD        g73<1,1,0>UD    g68<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g108<2>UD       g73<4,4,1>UD                    { align1 1Q };
mov(8)          g110<2>UD       g74<4,4,1>UD                    { align1 2Q };
add3(16)        g72<1>D         g66<8,8,1>D     g62<8,8,1>D     -g70<1,1,1>D { align1 1H I@4 };
add(16)         g77<1>D         -g75<1,1,0>D    g72<1,1,0>D     { align1 1H I@1 compacted };
mov(8)          g108.1<2>UD     g77<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g110.1<2>UD     g78<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g78UD           g108UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
mov(16)         g80<1>UD        g78<32,8,4>UB                   { align1 1H $1.dst };
cmp.z.f0.0(16)  null<1>D        g80<8,8,1>D     1D              { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL1              { align1 1H };
add(16)         g82<1>D         g68<1,1,0>D     16D             { align1 1H compacted };
cmp.l.f0.0(16)  g84<1>UD        g82<1,1,0>UD    0x00000010UD    { align1 1H I@1 compacted };
mov(8)          g109<2>UD       g82<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g111<2>UD       g83<4,4,1>UD                    { align1 2Q $1.src };
add(16)         g86<1>D         -g84<1,1,0>D    g72<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g109.1<2>UD     g86<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g111.1<2>UD     g87<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g9UD            g109UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
else(16)        JIP:  LABEL1          UIP:  LABEL1              { align1 1H };

LABEL2:
add(16)         g87<1>D         g68<1,1,0>D     40D             { align1 1H compacted };
cmp.l.f0.0(16)  g89<1>UD        g87<1,1,0>UD    0x00000028UD    { align1 1H I@1 compacted };
mov(8)          g110<2>UD       g87<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g112<2>UD       g88<4,4,1>UD                    { align1 2Q $1.src };
add(16)         g91<1>D         -g89<1,1,0>D    g72<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g110.1<2>UD     g91<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g112.1<2>UD     g92<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g92UD           g110UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
mov.nz.f0.0(16) null<1>UD       g92<32,8,4>UB                   { align1 1H $1.dst };
(+f0.0) if(16)  JIP:  LABEL4          UIP:  LABEL3              { align1 1H };
add(16)         g93<1>D         g68<1,1,0>D     32D             { align1 1H compacted };
cmp.l.f0.0(16)  g95<1>UD        g93<1,1,0>UD    0x00000020UD    { align1 1H I@1 compacted };
mov(8)          g111<2>UD       g93<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g113<2>UD       g94<4,4,1>UD                    { align1 2Q $1.src };
add(16)         g97<1>D         -g95<1,1,0>D    g72<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g111.1<2>UD     g97<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g113.1<2>UD     g98<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g98UD           g111UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
mul(8)          acc0<1>UD       g98<8,8,1>UD    0xaaabUW        { align1 1Q $1.dst };
mach(8)         g100<1>UD       g98<8,8,1>UD    0xaaaaaaabUD    { align1 1Q AccWrEnable };
mul(8)          acc0<1>UD       g99<8,8,1>UD    0xaaabUW        { align1 2Q $1.dst };
mach(8)         g101<1>UD       g99<8,8,1>UD    0xaaaaaaabUD    { align1 2Q AccWrEnable };
shr(16)         g9<1>UD         g100<1,1,0>UD   0x00000001UD    { align1 1H @1 $1.dst compacted };
else(16)        JIP:  LABEL3          UIP:  LABEL3              { align1 1H };

LABEL4:
add(16)         g101<1>D        g68<1,1,0>D     36D             { align1 1H compacted };
cmp.l.f0.0(16)  g103<1>UD       g101<1,1,0>UD   0x00000024UD    { align1 1H I@1 compacted };
mov(8)          g112<2>UD       g101<4,4,1>UD                   { align1 1Q $1.src };
mov(8)          g114<2>UD       g102<4,4,1>UD                   { align1 2Q $1.src };
add(16)         g105<1>D        -g103<1,1,0>D   g72<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g112.1<2>UD     g105<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g114.1<2>UD     g106<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g106UD          g112UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
mul(8)          acc0<1>UD       g106<8,8,1>UD   0xaaabUW        { align1 1Q $1.dst };
mach(8)         g108<1>UD       g106<8,8,1>UD   0xaaaaaaabUD    { align1 1Q $1.src AccWrEnable };
mul(8)          acc0<1>UD       g107<8,8,1>UD   0xaaabUW        { align1 2Q $1.dst };
mach(8)         g109<1>UD       g107<8,8,1>UD   0xaaaaaaabUD    { align1 2Q $1.src AccWrEnable };
shr(16)         g9<1>UD         g108<1,1,0>UD   0x00000001UD    { align1 1H @1 $1.dst compacted };

LABEL3:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
add(16)         g109<1>D        g68<1,1,0>D     49D             { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
shl(16)         g119<1>D        g60<8,8,1>D     0x00000003UD    { align1 1H };
shr(16)         g121<1>UD       g60<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
mov(8)          g123<1>UD       g45.1<8,4,2>UD                  { align1 1Q F@6 };
mov(8)          g124<1>UD       g23.1<8,4,2>UD                  { align1 2Q F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g111<1>UD       g109<1,1,0>UD   g68<1,1,0>UD    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g1<2>UD         g109<4,4,1>UD                   { align1 1Q F@1 };
mov(8)          g3<2>UD         g110<4,4,1>UD                   { align1 2Q };
add(8)          g13<1>D         g45<8,4,2>D     g119<1,1,0>D    { align1 1Q I@7 compacted };
add(8)          g125<1>D        g23<8,4,2>D     g120<1,1,0>D    { align1 2Q I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g113<1>D        -g111<1,1,0>D   g72<1,1,0>D     { align1 1H I@5 compacted };
cmp.l.f0.0(8)   g126<1>UD       g13<8,8,1>UD    g45<8,4,2>UD    { align1 1Q I@3 };
mov(8)          g5<2>UD         g13<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g127<1>UD       g125<8,8,1>UD   g23<8,4,2>UD    { align1 2Q I@4 };
mov(8)          g7<2>UD         g125<4,4,1>UD                   { align1 2Q };
mov(8)          g1.1<2>UD       g113<4,4,1>UD                   { align1 1Q I@5 };
mov(8)          g3.1<2>UD       g114<4,4,1>UD                   { align1 2Q I@6 };
add3(16)        g13<1>D         g123<8,8,1>D    g121<8,8,1>D    -g126<1,1,1>D { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g114UD          g1UD            nullUD          0x08200980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $0 };
mov(8)          g5.1<2>UD       g13<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g7.1<2>UD       g14<4,4,1>UD                    { align1 2Q I@2 };
mov(16)         g116<1>UD       g114<32,8,4>UB                  { align1 1H $0.dst };
shl(16)         g118<1>D        g116<8,8,1>D    0x00000010UD    { align1 1H I@1 };
or(16)          g11<1>UD        g80<1,1,0>UD    g118<1,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g5UD            g9UD            0x08003586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 4 flat ) base_offset 0  { align1 1H $2 };

LABEL0:
endif(16)       JIP:  LABEL5                                    { align1 1H };

LABEL5:
shr(16)         g27<1>UD        g31<1,1,0>UD    0x00000001UD    { align1 1H compacted };
and(16)         g33<1>UD        g31<1,1,0>UD    0x00000001UD    { align1 1H compacted };
add(16)         g18<1>D         g29<1,1,0>D     1D              { align1 1H compacted };
mov(8)          g37<1>UD        g35.1<8,4,2>UD                  { align1 1Q F@4 };
mov(8)          g38<1>UD        g25.1<8,4,2>UD                  { align1 2Q F@3 };

LABEL14:
cmp.ge.f0.0(16) null<1>UD       g21<8,8,1>UD    g51<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL6        UIP:  LABEL6              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
shl(16)         g39<1>D         g21<8,8,1>D     0x00000006UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g41<1>UD        g39<1,1,0>UD    0x00000003UD    { align1 1H compacted };
add(16)         g43<1>D         g41<1,1,0>D     g27<1,1,0>D     { align1 1H I@1 compacted };
mul(8)          acc0<1>UD       g43<8,8,1>UD    0x0038UW        { align1 1Q I@1 };
mul(16)         g47<1>D         g43<1,1,0>D     56W             { align1 1H I@2 compacted };
mach(8)         g16<1>UD        g43<1,1,0>UD    0x00000038UD    { align1 1Q compacted AccWrEnable };
add(8)          g49<1>D         g35<8,4,2>D     g47<1,1,0>D     { align1 1Q I@2 compacted };
add(8)          g50<1>D         g25<8,4,2>D     g48<1,1,0>D     { align1 2Q I@3 compacted };
mul(8)          acc0<1>UD       g44<8,8,1>UD    0x0038UW        { align1 2Q };
cmp.l.f0.0(8)   g53<1>UD        g49<8,8,1>UD    g35<8,4,2>UD    { align1 1Q I@3 };
cmp.l.f0.0(8)   g54<1>UD        g50<8,8,1>UD    g25<8,4,2>UD    { align1 2Q I@3 };
add(16)         g56<1>D         g49<1,1,0>D     48D             { align1 1H compacted };
mach(8)         g17<1>UD        g44<8,8,1>UD    0x00000038UD    { align1 2Q AccWrEnable };
cmp.l.f0.0(16)  g58<1>UD        g56<1,1,0>UD    g49<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g10<2>UD        g56<4,4,1>UD                    { align1 1Q $2.src };
mov(8)          g12<2>UD        g57<4,4,1>UD                    { align1 2Q $2.src };
cmp.z.f0.0(16)  null<1>D        g33<8,8,1>D     0D              { align1 1H };
add3(16)        g55<1>D         g37<8,8,1>D     g16<8,8,1>D     -g53<1,1,1>D { align1 1H I@5 };
add(16)         g60<1>D         -g58<1,1,0>D    g55<1,1,0>D     { align1 1H I@1 compacted };
mov(8)          g10.1<2>UD      g60<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g12.1<2>UD      g61<4,4,1>UD                    { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g61UD           g10UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
mov(16)         g63<1>UD        g61<32,8,4>UB                   { align1 1H $2.dst };
cmp.z.f0.0(16)  null<1>D        g63<8,8,1>D     1D              { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL9              { align1 1H };
add(16)         g64<1>D         g49<1,1,0>D     16D             { align1 1H compacted };
cmp.l.f0.0(16)  g66<1>UD        g64<1,1,0>UD    0x00000010UD    { align1 1H I@1 compacted };
mov(8)          g113<2>UD       g64<4,4,1>UD                    { align1 1Q $3.src };
mov(8)          g115<2>UD       g65<4,4,1>UD                    { align1 2Q $3.src };
add(16)         g68<1>D         -g66<1,1,0>D    g55<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g113.1<2>UD     g68<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g115.1<2>UD     g69<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g14UD           g113UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $3 };
else(16)        JIP:  LABEL9          UIP:  LABEL9              { align1 1H };

LABEL10:
add(16)         g69<1>D         g49<1,1,0>D     40D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g71<1>UD        g69<1,1,0>UD    0x00000028UD    { align1 1H I@1 compacted };
mov(8)          g114<2>UD       g69<4,4,1>UD                    { align1 1Q $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $3.src };
mov(8)          g116<2>UD       g70<4,4,1>UD                    { align1 2Q };
add(16)         g73<1>D         -g71<1,1,0>D    g55<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g114.1<2>UD     g73<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g116.1<2>UD     g74<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g74UD           g114UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $3 };
mov.nz.f0.0(16) null<1>UD       g74<32,8,4>UB                   { align1 1H $3.dst };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
add(16)         g75<1>D         g49<1,1,0>D     32D             { align1 1H compacted };
cmp.l.f0.0(16)  g77<1>UD        g75<1,1,0>UD    0x00000020UD    { align1 1H I@1 compacted };
mov(8)          g115<2>UD       g75<4,4,1>UD                    { align1 1Q $3.src };
mov(8)          g117<2>UD       g76<4,4,1>UD                    { align1 2Q $3.src };
add(16)         g79<1>D         -g77<1,1,0>D    g55<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g115.1<2>UD     g79<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g117.1<2>UD     g80<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g80UD           g115UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $3 };
mul(8)          acc0<1>UD       g80<8,8,1>UD    0xaaabUW        { align1 1Q $3.dst };
mach(8)         g82<1>UD        g80<8,8,1>UD    0xaaaaaaabUD    { align1 1Q AccWrEnable };
mul(8)          acc0<1>UD       g81<8,8,1>UD    0xaaabUW        { align1 2Q $3.dst };
mach(8)         g83<1>UD        g81<8,8,1>UD    0xaaaaaaabUD    { align1 2Q AccWrEnable };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
shr(16)         g14<1>UD        g82<1,1,0>UD    0x00000001UD    { align1 1H I@1 compacted };
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
add(16)         g83<1>D         g49<1,1,0>D     36D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g85<1>UD        g83<1,1,0>UD    0x00000024UD    { align1 1H I@1 compacted };
mov(8)          g116<2>UD       g83<4,4,1>UD                    { align1 1Q $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $3.src };
mov(8)          g118<2>UD       g84<4,4,1>UD                    { align1 2Q };
add(16)         g87<1>D         -g85<1,1,0>D    g55<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g116.1<2>UD     g87<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g118.1<2>UD     g88<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g88UD           g116UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $3 };
mul(8)          acc0<1>UD       g88<8,8,1>UD    0xaaabUW        { align1 1Q $3.dst };
mach(8)         g90<1>UD        g88<8,8,1>UD    0xaaaaaaabUD    { align1 1Q AccWrEnable };
mul(8)          acc0<1>UD       g89<8,8,1>UD    0xaaabUW        { align1 2Q $3.dst };
mach(8)         g91<1>UD        g89<8,8,1>UD    0xaaaaaaabUD    { align1 2Q AccWrEnable };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g14<1>UD        g90<1,1,0>UD    0x00000001UD    { align1 1H compacted };

LABEL11:
endif(16)       JIP:  LABEL9                                    { align1 1H };

LABEL9:
endif(16)       JIP:  LABEL13                                   { align1 1H };

LABEL13:
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g91UD           g10UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
mov(16)         g93<1>UD        g91<32,8,4>UB                   { align1 1H $2.dst };
mov(16)         g95<1>UD        g91.1<32,8,4>UB                 { align1 1H };
shl(16)         g97<1>D         g95<8,8,1>D     0x00000010UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(16)          g14<1>UD        g93<1,1,0>UD    g97<1,1,0>UD    { align1 1H compacted };

LABEL7:
endif(16)       JIP:  LABEL6                                    { align1 1H };
add(8)          g20<1>D         g45<8,4,2>D     g39<1,1,0>D     { align1 1Q F@6 compacted };
add(8)          g98<1>D         g23<8,4,2>D     g40<1,1,0>D     { align1 2Q F@5 compacted };
cmp.l.f0.0(8)   g29<1>UD        g20<8,8,1>UD    g45<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g99<1>UD        g98<8,8,1>UD    g23<8,4,2>UD    { align1 2Q I@2 };
mov(8)          g101<2>UD       g20<4,4,1>UD                    { align1 1Q };
mov(8)          g103<2>UD       g98<4,4,1>UD                    { align1 2Q };
add(8)          g30<1>D         -g29<8,8,1>D    g45.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g100<1>D        -g99<8,8,1>D    g23.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g101.1<2>UD     g30<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g103.1<2>UD     g100<4,4,1>UD                   { align1 2Q I@2 };
fbl(1)          g105<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
shl(1)          a0<1>UD         g105<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@2 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000c00UD    { align1 WE_all 1N A@1 };
mov(1)          g39<2>D         g[a0 160]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g39.1<2>D       g[a0 164]<0,1,0>D               { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g117.1<2>UD     g39.1<0,1,0>UD                  { align1 WE_all 1Q I@1 };
mov(8)          g117<2>UD       g39<0,1,0>UD                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) nullUD   g117UD          g14UD           0x0200d584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 2 flat ) base_offset 0  { align1 WE_all 1N $3 };
add(16)         g21<1>D         g18<1,1,0>D     g21<1,1,0>D     { align1 1H compacted };

LABEL6:
while(16)       JIP:  LABEL14                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
mov(16)         acc0<1>F        0x0F             /* 0F */       { align1 WE_all 1H I@1 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_misc_copy_geo_meta_data_code[] = {
    0x80000065, 0x28058220, 0x02000004, 0xffffffc0,
    0x80030061, 0x14054410, 0x00000000, 0x76543210,
    0x00040061, 0x6b050220, 0x00000024, 0x00000000,
    0xe2291b40, 0x00012803, 0x64141b40, 0x00801495,
    0x00041b61, 0x15050220, 0x00466b05, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00290c, 0x00340000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x1f050160, 0x00461405, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x212d0061, 0x001102cc, 0x2a170061, 0x001102cc,
    0x00030061, 0x23260aa0, 0x00000264, 0x00000000,
    0x00130061, 0x19260aa0, 0x00000264, 0x00000000,
    0x00030061, 0x76260aa0, 0x000002a4, 0x00000000,
    0x00130061, 0x1b260aa0, 0x000002a4, 0x00000000,
    0x212d1661, 0x00110204, 0x2a171661, 0x00110204,
    0x21231661, 0x00110244, 0x2a191661, 0x00110244,
    0x21761661, 0x0011025c, 0x2a1b1661, 0x0011025c,
    0xe11d1268, 0x006e7603, 0x00030065, 0x21058220,
    0x02447606, 0xffffffc0, 0x00030061, 0x25050220,
    0x00447626, 0x00000000, 0xea1e1168, 0x006e1b03,
    0x00130065, 0x22058220, 0x02441b06, 0xffffffc0,
    0x00130061, 0x26050220, 0x00441b26, 0x00000000,
    0xa1271d40, 0x212e7602, 0xa0351c40, 0x1d206b02,
    0xeb121c70, 0x00002103, 0xaa280040, 0x222e1b02,
    0xe0330068, 0x00602103, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00031d70, 0x29050220,
    0x52462705, 0x00447606, 0x00131b70, 0x2a050220,
    0x52462805, 0x00441b06, 0xe0100068, 0x00302703,
    0x00041a52, 0x2b040e68, 0x0e2e2505, 0x29051205,
    0x00041969, 0x2f058660, 0x02462b05, 0x0000001d,
    0x20311966, 0x2f001003, 0x27371970, 0x31001f03,
    0xac391f70, 0x33023502, 0x00041965, 0x00010220,
    0x22463705, 0x00463905, 0x01040022, 0x0001c060,
    0x00000610, 0x00000610, 0xe03a0068, 0x00302103,
    0x00031461, 0x42050220, 0x00442326, 0x00000000,
    0x00131361, 0x43050220, 0x00441926, 0x00000000,
    0xa03c1b40, 0x3a001f02, 0x00031941, 0x20018220,
    0x01463c05, 0x00380038, 0x60401a41, 0x03803c02,
    0xfe3e0049, 0x03803c03, 0xa1441a40, 0x400e2302,
    0xaa451b40, 0x410e1902, 0x00130041, 0x20018220,
    0x01463d05, 0x00380038, 0x00031b70, 0x46050220,
    0x52464405, 0x00442306, 0x00131b70, 0x47050220,
    0x52464505, 0x00441906, 0xa0490040, 0x03004403,
    0x00130049, 0x3f058222, 0x02463d05, 0x00000038,
    0x274b1a70, 0x44004903, 0x00030061, 0x6c060220,
    0x00344905, 0x00000000, 0x00130061, 0x6e060220,
    0x00344a05, 0x00000000, 0x00041c52, 0x48040e68,
    0x0e2e4205, 0x46053e05, 0xa04d1940, 0x48024b02,
    0x00031961, 0x6c260220, 0x00344d05, 0x00000000,
    0x00131a61, 0x6e260220, 0x00344e05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x4e140000, 0xfb046c24, 0x00040000,
    0x00042161, 0x50050020, 0x00664e07, 0x00000000,
    0x00041970, 0x00018660, 0x16465005, 0x00000001,
    0x01040022, 0x0001c060, 0x000002d0, 0x00000098,
    0xa0520040, 0x01004403, 0xe7541970, 0x01005203,
    0x00033161, 0x6d060220, 0x00345205, 0x00000000,
    0x00133161, 0x6f060220, 0x00345305, 0x00000000,
    0xa0561b40, 0x48025402, 0x00031961, 0x6d260220,
    0x00345605, 0x00000000, 0x00131a61, 0x6f260220,
    0x00345705, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x09140000,
    0xfb046d24, 0x00040000, 0x00040024, 0x0001c060,
    0x00000248, 0x00000248, 0xa0570040, 0x02804403,
    0xe7591970, 0x02805703, 0x00033161, 0x6e060220,
    0x00345705, 0x00000000, 0x00133161, 0x70060220,
    0x00345805, 0x00000000, 0xa05b1b40, 0x48025902,
    0x00031961, 0x6e260220, 0x00345b05, 0x00000000,
    0x00131a61, 0x70260220, 0x00345c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x5c140000, 0xfb046e24, 0x00040000,
    0x00042161, 0x00010020, 0x20665c07, 0x00000000,
    0x01040022, 0x0001c060, 0x000001a0, 0x000000e0,
    0xa05d0040, 0x02004403, 0xe75f1970, 0x02005d03,
    0x00033161, 0x6f060220, 0x00345d05, 0x00000000,
    0x00133161, 0x71060220, 0x00345e05, 0x00000000,
    0xa0611b40, 0x48025f02, 0x00031961, 0x6f260220,
    0x00346105, 0x00000000, 0x00131a61, 0x71260220,
    0x00346205, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x62140000,
    0xfb046f24, 0x00040000, 0x00032141, 0x20018220,
    0x01466205, 0xaaabaaab, 0x00030049, 0x64058222,
    0x02466205, 0xaaaaaaab, 0x00132141, 0x20018220,
    0x01466305, 0xaaabaaab, 0x00130049, 0x65058222,
    0x02466305, 0xaaaaaaab, 0xe0099168, 0x00106403,
    0x00040024, 0x0001c060, 0x000000d0, 0x000000d0,
    0xa0650040, 0x02404403, 0xe7671970, 0x02406503,
    0x00033161, 0x70060220, 0x00346505, 0x00000000,
    0x00133161, 0x72060220, 0x00346605, 0x00000000,
    0xa0691b40, 0x48026702, 0x00031961, 0x70260220,
    0x00346905, 0x00000000, 0x00131a61, 0x72260220,
    0x00346a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x6a140000,
    0xfb047024, 0x00040000, 0x00032141, 0x20018220,
    0x01466a05, 0xaaabaaab, 0x00033149, 0x6c058222,
    0x02466a05, 0xaaaaaaab, 0x00132141, 0x20018220,
    0x01466b05, 0xaaabaaab, 0x00133149, 0x6d058222,
    0x02466b05, 0xaaaaaaab, 0xe0099168, 0x00106c03,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040025, 0x00004600, 0x00000000, 0x000001e8,
    0xa06d3140, 0x03104403, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x77058660,
    0x02463c05, 0x00000003, 0xe0790068, 0x01d03c03,
    0x00031661, 0x7b050220, 0x00442d26, 0x00000000,
    0x00131561, 0x7c050220, 0x00441726, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x276f1d70, 0x44006d03, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00031161, 0x01060220,
    0x00346d05, 0x00000000, 0x00130061, 0x03060220,
    0x00346e05, 0x00000000, 0xa10d1f40, 0x770e2d02,
    0xaa7d1f40, 0x780e1702, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0711d40, 0x48026f02,
    0x00031b70, 0x7e050220, 0x52460d05, 0x00442d06,
    0x00030061, 0x05060220, 0x00340d05, 0x00000000,
    0x00131c70, 0x7f050220, 0x52467d05, 0x00441706,
    0x00130061, 0x07060220, 0x00347d05, 0x00000000,
    0x00031d61, 0x01260220, 0x00347105, 0x00000000,
    0x00131e61, 0x03260220, 0x00347205, 0x00000000,
    0x00041c52, 0x0d040e68, 0x0e2e7b05, 0x7e057905,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x72140000, 0xf3000124, 0x00020000,
    0x00031961, 0x05260220, 0x00340d05, 0x00000000,
    0x00131a61, 0x07260220, 0x00340e05, 0x00000000,
    0x00042061, 0x74050020, 0x00667207, 0x00000000,
    0x00041969, 0x76058660, 0x02467405, 0x00000010,
    0x200b1966, 0x76005003, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xfb0c0524, 0x000c0924, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0xe01b0068, 0x00101f03,
    0xe0210065, 0x00101f03, 0xa0120040, 0x00101d03,
    0x00031461, 0x25050220, 0x00442326, 0x00000000,
    0x00131361, 0x26050220, 0x00441926, 0x00000000,
    0x00041a70, 0x00010220, 0x42461505, 0x00463305,
    0x01040028, 0x0001c660, 0x000006c0, 0x000006c0,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x27058660, 0x02461505, 0x00000006,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe0290068, 0x00302703, 0xa02b1940, 0x1b002902,
    0x00031941, 0x20018220, 0x01462b05, 0x00380038,
    0x602f1a41, 0x03802b02, 0xfe100049, 0x03802b03,
    0xa1311a40, 0x2f0e2302, 0xaa321b40, 0x300e1902,
    0x00130041, 0x20018220, 0x01462c05, 0x00380038,
    0x00031b70, 0x35050220, 0x52463105, 0x00442306,
    0x00131b70, 0x36050220, 0x52463205, 0x00441906,
    0xa0380040, 0x03003103, 0x00130049, 0x11058222,
    0x02462c05, 0x00000038, 0x273a1a70, 0x31003803,
    0x00033261, 0x0a060220, 0x00343805, 0x00000000,
    0x00133261, 0x0c060220, 0x00343905, 0x00000000,
    0x00040070, 0x00018660, 0x16462105, 0x00000000,
    0x00041d52, 0x37040e68, 0x0e2e2505, 0x35051005,
    0xa03c1940, 0x37023a02, 0x00031961, 0x0a260220,
    0x00343c05, 0x00000000, 0x00131a61, 0x0c260220,
    0x00343d05, 0x00000000, 0x01040022, 0x0001c060,
    0x00000438, 0x000003c0, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x3d140000,
    0xfb040a24, 0x00040000, 0x00042261, 0x3f050020,
    0x00663d07, 0x00000000, 0x00041970, 0x00018660,
    0x16463f05, 0x00000001, 0x01040022, 0x0001c060,
    0x00000350, 0x000000a8, 0xa0400040, 0x01003103,
    0xe7421970, 0x01004003, 0x00033361, 0x71060220,
    0x00344005, 0x00000000, 0x00133361, 0x73060220,
    0x00344105, 0x00000000, 0xa0441b40, 0x37024202,
    0x00031961, 0x71260220, 0x00344405, 0x00000000,
    0x00131a61, 0x73260220, 0x00344505, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x0e140000, 0xfb047124, 0x00040000,
    0x00040024, 0x0001c060, 0x000002b8, 0x000002b8,
    0xa0450040, 0x02803103, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xe7471970, 0x02804503,
    0x00033361, 0x72060220, 0x00344505, 0x00000000,
    0x80103301, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x74060220, 0x00344605, 0x00000000,
    0xa0491b40, 0x37024702, 0x00031961, 0x72260220,
    0x00344905, 0x00000000, 0x00131a61, 0x74260220,
    0x00344a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x4a140000,
    0xfb047224, 0x00040000, 0x00042361, 0x00010020,
    0x20664a07, 0x00000000, 0x01040022, 0x0001c060,
    0x000001f0, 0x000000f0, 0xa04b0040, 0x02003103,
    0xe74d1970, 0x02004b03, 0x00033361, 0x73060220,
    0x00344b05, 0x00000000, 0x00133361, 0x75060220,
    0x00344c05, 0x00000000, 0xa04f1b40, 0x37024d02,
    0x00031961, 0x73260220, 0x00344f05, 0x00000000,
    0x00131a61, 0x75260220, 0x00345005, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x50140000, 0xfb047324, 0x00040000,
    0x00032341, 0x20018220, 0x01465005, 0xaaabaaab,
    0x00030049, 0x52058222, 0x02465005, 0xaaaaaaab,
    0x00132341, 0x20018220, 0x01465105, 0xaaabaaab,
    0x00130049, 0x53058222, 0x02465105, 0xaaaaaaab,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0xe00e1968, 0x00105203, 0x00040024, 0x0001c060,
    0x00000110, 0x00000110, 0xa0530040, 0x02403103,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xe7551970, 0x02405303, 0x00033361, 0x74060220,
    0x00345305, 0x00000000, 0x80103301, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x76060220,
    0x00345405, 0x00000000, 0xa0571b40, 0x37025502,
    0x00031961, 0x74260220, 0x00345705, 0x00000000,
    0x00131a61, 0x76260220, 0x00345805, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x58140000, 0xfb047424, 0x00040000,
    0x00032341, 0x20018220, 0x01465805, 0xaaabaaab,
    0x00030049, 0x5a058222, 0x02465805, 0xaaaaaaab,
    0x00132341, 0x20018220, 0x01465905, 0xaaabaaab,
    0x00130049, 0x5b058222, 0x02465905, 0xaaaaaaab,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe00e0068, 0x00105a03, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040024, 0x0001c060,
    0x00000088, 0x00000088, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x5b140000,
    0xfb040a24, 0x00040000, 0x00042261, 0x5d050020,
    0x00665b07, 0x00000000, 0x00040061, 0x5f050020,
    0x00665b0f, 0x00000000, 0x00041969, 0x61058660,
    0x02465f05, 0x00000010, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x200e0066, 0x61005d03,
    0x00040025, 0x00004600, 0x00000000, 0x00000150,
    0xa1141640, 0x270e2d02, 0xaa621540, 0x280e1702,
    0x00031a70, 0x1d050220, 0x52461405, 0x00442d06,
    0x00131a70, 0x63050220, 0x52466205, 0x00441706,
    0x00030061, 0x65060220, 0x00341405, 0x00000000,
    0x00130061, 0x67060220, 0x00346205, 0x00000000,
    0x00031c40, 0x1e052660, 0x06461d05, 0x00442d26,
    0x00131c40, 0x64052660, 0x06466305, 0x00441726,
    0x00031a61, 0x65260220, 0x00341e05, 0x00000000,
    0x00131a61, 0x67260220, 0x00346405, 0x00000000,
    0xe269004c, 0x00114004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80001a69, 0x10018220,
    0x02006904, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000c00, 0x80000961, 0x27060660,
    0x00010280, 0x00000000, 0x80000061, 0x27260660,
    0x00010290, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80031961, 0x75260220,
    0x00002724, 0x00000000, 0x80031961, 0x75060220,
    0x00002704, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004331, 0x00000000,
    0xfb08750c, 0x00340e14, 0xa0150040, 0x15001202,
    0x00040027, 0x00014060, 0x00000000, 0xfffff930,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80041961, 0x20014aa0, 0x00000000, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_misc_copy_geo_meta_data = {
   .prog_data = {
      .base.nr_params = 14,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 3968,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_misc_copy_geo_meta_data_relocs,
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
const char *gfx125_misc_copy_geo_meta_data_sha1 = "15f62bd40c9eaa1ac99e63325e792bbc3ebdd17a";

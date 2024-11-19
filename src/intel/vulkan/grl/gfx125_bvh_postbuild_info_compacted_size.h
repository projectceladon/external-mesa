#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_postbuild_info_compacted_size_relocs[] = {
};
static const u_printf_info gfx125_bvh_postbuild_info_compacted_size_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_postbuild_info_compacted_size_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g126<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g1UD            g126UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(8)          g106<1>D        g2<0,1,0>D      32D             { align1 1Q compacted };
add(8)          g16<1>D         g2<0,1,0>D      16D             { align1 1Q compacted };
cmp.l.f0.0(8)   g31<1>UD        g106<1,1,0>UD   0x00000020UD    { align1 1Q I@2 compacted };
mov(8)          g109<2>UD       g106<4,4,1>UD                   { align1 1Q };
cmp.l.f0.0(8)   g17<1>UD        g16<1,1,0>UD    0x00000010UD    { align1 1Q I@3 compacted };
mov(8)          g111<2>UD       g16<4,4,1>UD                    { align1 1Q };
add(8)          g7<1>D          -g31<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@4 compacted };
add(8)          g18<1>D         -g17<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@3 compacted };
mov(8)          g109.1<2>UD     g7<4,4,1>UD                     { align1 1Q I@2 };
mov(8)          g111.1<2>UD     g18<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(8)         g8UD            g109UD          nullUD          0x0440f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g19UD           g111UD          nullUD          0x0440f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $2 };
add(8)          g12<1>D         g9<1,1,0>D      -g8<1,1,0>D     { align1 1Q $1.dst compacted };
add(8)          g23<1>D         g22<1,1,0>D     -g21<1,1,0>D    { align1 1Q $2.dst compacted };
add(8)          g29<1>D         g20<1,1,0>D     -g19<1,1,0>D    { align1 1Q $2.dst compacted };
shr(8)          g13<1>UD        g12<1,1,0>UD    0x00000001UD    { align1 1Q I@3 compacted };
shr(8)          g15<1>UD        g12<1,1,0>UD    0x0000001aUD    { align1 1Q compacted };
shl(8)          g24<1>D         g23<8,8,1>D     0x00000006UD    { align1 1Q I@4 };
shr(8)          g4<1>UD         g23<1,1,0>UD    0x0000001aUD    { align1 1Q compacted };
shl(8)          g30<1>D         g29<8,8,1>D     0x00000006UD    { align1 1Q I@5 };
shr(8)          g6<1>UD         g29<1,1,0>UD    0x0000001aUD    { align1 1Q compacted };
shl(8)          g14<1>D         g13<8,8,1>D     0x00000007UD    { align1 1Q I@6 };
add(8)          g26<1>D         g14<1,1,0>D     g24<1,1,0>D     { align1 1Q I@1 compacted };
cmp.l.f0.0(8)   g27<1>UD        g26<1,1,0>UD    g14<1,1,0>UD    { align1 1Q I@1 compacted };
add(8)          g32<1>D         g26<1,1,0>D     g30<1,1,0>D     { align1 1Q I@5 compacted };
add3(8)         g28<1>D         g15<8,8,1>D     g4<8,8,1>D      -g27<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g33<1>UD        g32<1,1,0>UD    g26<1,1,0>UD    { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   null<1>UD       g10<8,8,1>UD    g11<8,8,1>UD    { align1 1Q $1.dst };
add3(8)         g34<1>D         g28<8,8,1>D     g6<8,8,1>D      -g33<1,1,1>D { align1 1Q I@2 };
(+f0.0) if(8)   JIP:  LABEL1          UIP:  LABEL0              { align1 1Q };
add(8)          g35<1>D         g2<0,1,0>D      64D             { align1 1Q compacted };
add(8)          g46<1>D         g2<0,1,0>D      88D             { align1 1Q compacted };
cmp.l.f0.0(8)   g36<1>UD        g35<1,1,0>UD    g2<0,1,0>UD     { align1 1Q I@2 compacted };
mov(8)          g112<2>UD       g35<4,4,1>UD                    { align1 1Q $2.src };
cmp.l.f0.0(8)   g47<1>UD        g46<1,1,0>UD    g2<0,1,0>UD     { align1 1Q I@3 compacted };
mov(8)          g114<2>UD       g46<4,4,1>UD                    { align1 1Q };
add(8)          g37<1>D         -g36<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@4 compacted };
add(8)          g48<1>D         -g47<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@3 compacted };
mov(8)          g112.1<2>UD     g37<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g114.1<2>UD     g48<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(8)         g38UD           g112UD          nullUD          0x04203582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g49UD           g114UD          nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $3 };
mul(8)          g40<1>D         g38<1,1,0>D     12W             { align1 1Q $2.dst compacted };
shl(8)          g43<1>D         g39<8,8,1>D     0x00000003UD    { align1 1Q $2.dst };
cmp.l.f0.0(8)   null<1>UD       g10<8,8,1>UD    g49<8,8,1>UD    { align1 1Q $3.dst };
add(8)          g41<1>D         g40<1,1,0>D     63D             { align1 1Q I@3 compacted };
add(8)          g44<1>D         g43<1,1,0>D     63D             { align1 1Q I@3 compacted };
and(8)          g42<1>UD        g41<8,8,1>UD    0xffffffc0UD    { align1 1Q I@2 };
and(8)          g45<1>UD        g44<8,8,1>UD    0xffffffc0UD    { align1 1Q I@2 };
(+f0.0) if(8)   JIP:  LABEL3          UIP:  LABEL2              { align1 1Q };
add(8)          g50<1>D         g29<1,1,0>D     255D            { align1 1Q compacted };
add(8)          g52<1>D         g2<0,1,0>D      80D             { align1 1Q compacted };
shl(8)          g62<1>D         g29<8,8,1>D     0x00000005UD    { align1 1Q };
and(8)          g51<1>UD        g50<8,8,1>UD    0xffffff00UD    { align1 1Q I@3 };
cmp.l.f0.0(8)   g53<1>UD        g52<1,1,0>UD    g2<0,1,0>UD     { align1 1Q I@3 compacted };
mov(8)          g115<2>UD       g52<4,4,1>UD                    { align1 1Q $3.src };
add(8)          g63<1>D         g62<1,1,0>D     63D             { align1 1Q I@4 compacted };
add(8)          g54<1>D         -g53<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@3 compacted };
and(8)          g64<1>UD        g63<8,8,1>UD    0xffffffc0UD    { align1 1Q I@2 };
mov(8)          g115.1<2>UD     g54<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g55UD           g115UD          nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $3 };
add(8)          g56<1>D         g55<1,1,0>D     255D            { align1 1Q $3.dst compacted };
and(8)          g57<1>UD        g56<8,8,1>UD    0xffffff00UD    { align1 1Q I@1 };
add(8)          g58<1>D         g51<1,1,0>D     g57<1,1,0>D     { align1 1Q I@1 compacted };
mul(8)          g59<1>D         g58<1,1,0>D     12W             { align1 1Q I@1 compacted };
add(8)          g60<1>D         g59<1,1,0>D     63D             { align1 1Q I@1 compacted };
and(8)          g61<1>UD        g60<8,8,1>UD    0xffffffc0UD    { align1 1Q I@1 };
add(8)          g84<1>D         g61<1,1,0>D     g64<1,1,0>D     { align1 1Q I@1 compacted };
else(8)         JIP:  LABEL2          UIP:  LABEL2              { align1 1Q };

LABEL3:
mov(8)          g84<1>UD        0x00000000UD                    { align1 1Q I@2 };

LABEL2:
endif(8)        JIP:  LABEL4                                    { align1 1Q };
add(8)          g65<1>D         g2<0,1,0>D      12D             { align1 1Q compacted };
cmp.l.f0.0(8)   g66<1>UD        g65<1,1,0>UD    g2<0,1,0>UD     { align1 1Q I@1 compacted };
mov(8)          g116<2>UD       g65<4,4,1>UD                    { align1 1Q $3.src };
add(8)          g67<1>D         -g66<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@2 compacted };
mov(8)          g116.1<2>UD     g67<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g68UD           g116UD          nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $4 };
shl(8)          g69<1>D         g68<8,8,1>D     0x00000002UD    { align1 1Q $4.dst };
add(8)          g70<1>D         g69<1,1,0>D     51D             { align1 1Q I@1 compacted };
and(8)          g71<1>UD        g70<8,8,1>UD    0xffffffc0UD    { align1 1Q I@1 };
add(8)          g72<1>D         g71<1,1,0>D     g42<1,1,0>D     { align1 1Q I@1 compacted };
add3(8)         g25<1>D         g72<8,8,1>D     g45<8,8,1>D     g84<1,1,1>D { align1 1Q I@1 };

LABEL4:
else(8)         JIP:  LABEL0          UIP:  LABEL0              { align1 1Q };

LABEL1:
mov(8)          g25<1>UD        0x00000000UD                    { align1 1Q I@2 };

LABEL0:
endif(8)        JIP:  LABEL5                                    { align1 1Q };

LABEL5:
add(8)          g73<1>D         g32<1,1,0>D     g25<1,1,0>D     { align1 1Q I@2 compacted };
add(8)          g75<1>D         g2<0,1,0>D      12D             { align1 1Q compacted };
add(8)          g85<1>D         g2<0,1,0>D      156D            { align1 1Q compacted };
add(8)          g94<1>D         g2<0,1,0>D      164D            { align1 1Q compacted };
cmp.l.f0.0(8)   g74<1>UD        g73<1,1,0>UD    g32<1,1,0>UD    { align1 1Q I@4 compacted };
cmp.l.f0.0(8)   g76<1>UD        g75<1,1,0>UD    g2<0,1,0>UD     { align1 1Q I@4 compacted };
mov(8)          g117<2>UD       g75<4,4,1>UD                    { align1 1Q $4.src };
mov(8)          g119<2>UD       g85<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g121<2>UD       g94<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g123.1<2>D      g2.3<0,1,0>D                    { align1 1Q };
add(8)          g77<1>D         -g76<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@5 compacted };
mov(8)          g123<2>D        g2.2<0,1,0>D                    { align1 1Q I@2 };
mov(8)          g117.1<2>UD     g77<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g78UD           g117UD          nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $5 };
add(8)          g79<1>D         g78<1,1,0>D     -3D             { align1 1Q $5.dst compacted };
shl(8)          g80<1>D         g78<8,8,1>D     0x00000006UD    { align1 1Q };
shr(8)          g81<1>UD        g79<1,1,0>UD    0x0000001aUD    { align1 1Q I@2 compacted };
add3(8)         g82<1>D         65344W          g80<8,8,1>D     g73<1,1,1>D { align1 1Q I@2 };
add3(8)         g3<1>D          -g74<8,8,1>D    g34<8,8,1>D     g81<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g83<1>UD        g82<1,1,0>UD    g73<1,1,0>UD    { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g86<1>UD        g85<1,1,0>UD    0x0000009cUD    { align1 1Q compacted };
add(8)          g87<1>D         -g86<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@1 compacted };
mov(8)          g119.1<2>UD     g87<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g88UD           g119UD          nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $6 };
shl(8)          g89<1>D         g88<8,8,1>D     0x00000006UD    { align1 1Q $6.dst };
shr(8)          g90<1>UD        g88<1,1,0>UD    0x0000001aUD    { align1 1Q compacted };
add(8)          g91<1>D         g82<1,1,0>D     g89<1,1,0>D     { align1 1Q I@2 compacted };
add3(8)         g93<1>D         -g83<8,8,1>D    g3<8,8,1>D      g90<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g92<1>UD        g91<1,1,0>UD    g82<1,1,0>UD    { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g95<1>UD        g94<1,1,0>UD    0x000000a4UD    { align1 1Q compacted };
add(8)          g96<1>D         -g95<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@1 compacted };
mov(8)          g121.1<2>UD     g96<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g97UD           g121UD          nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $7 };
shl(8)          g98<1>D         g97<8,8,1>D     0x00000003UD    { align1 1Q $7.dst };
shr(8)          g99<1>UD        g97<1,1,0>UD    0x0000001dUD    { align1 1Q compacted };
add(8)          g100<1>D        g98<1,1,0>D     63D             { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g101<1>UD       g100<1,1,0>UD   g98<1,1,0>UD    { align1 1Q I@1 compacted };
and(8)          g103<1>UD       g100<8,8,1>UD   0xffffffc0UD    { align1 1Q };
add(8)          g102<1>D        -g101<1,1,0>D   g99<1,1,0>D     { align1 1Q I@2 compacted };
add(8)          g104<1>D        g91<1,1,0>D     g103<1,1,0>D    { align1 1Q I@2 compacted };
add3(8)         g5<1>D          -g92<8,8,1>D    g93<8,8,1>D     g102<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g105<1>UD       g104<1,1,0>UD   g91<1,1,0>UD    { align1 1Q I@2 compacted };
add(8)          g107<1>D        g104<1,1,0>D    255D            { align1 1Q compacted };
cmp.l.f0.0(8)   g108<1>UD       g107<1,1,0>UD   0x000000ffUD    { align1 1Q I@1 compacted };
and(8)          g125<1>UD       g107<8,8,1>UD   0xffffffc0UD    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add3(8)         g126<1>D        -g105<8,8,1>D   g5<8,8,1>D      -g108<1,1,1>D { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g123UD          g125UD          0x04003586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1Q $8 };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q $8.src };
send(8)         nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1Q A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_postbuild_info_compacted_size_code[] = {
    0x80000065, 0x7e058220, 0x02000004, 0xffffffc0,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa007e0c, 0x00340000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa16a0040, 0x02010203, 0xa1100040, 0x01010203,
    0xf01f1a70, 0x02006a03, 0x00030061, 0x6d060220,
    0x00346a05, 0x00000000, 0xf0111b70, 0x01001003,
    0x00030061, 0x6f060220, 0x00341005, 0x00000000,
    0xa1071c40, 0x02121f12, 0xa1121b40, 0x02121112,
    0x00031a61, 0x6d260220, 0x00340705, 0x00000000,
    0x00031a61, 0x6f260220, 0x00341205, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00034131, 0x08240000, 0xfb046d14, 0x003c0000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034231, 0x13240000, 0xfb046f14, 0x003c0000,
    0xa10c2140, 0x08200902, 0xa1172240, 0x15201602,
    0xa11d2240, 0x13201402, 0xe10d1b68, 0x00100c03,
    0xe10f0068, 0x01a00c03, 0x00031c69, 0x18058660,
    0x02461705, 0x00000006, 0xe1040068, 0x01a01703,
    0x00031d69, 0x1e058660, 0x02461d05, 0x00000006,
    0xe1060068, 0x01a01d03, 0x00031e69, 0x0e058660,
    0x02460d05, 0x00000007, 0xa11a1940, 0x18000e02,
    0x301b1970, 0x0e001a03, 0xa1201d40, 0x1e001a02,
    0x00031a52, 0x1c040e68, 0x0e2e0f05, 0x1b050405,
    0x30211a70, 0x1a002003, 0x00032170, 0x00010220,
    0x52460a05, 0x00460b05, 0x00031a52, 0x22040e68,
    0x0e2e1c05, 0x21050605, 0x01030022, 0x0001c060,
    0x000002f0, 0x000002e0, 0xa1230040, 0x04010203,
    0xa12e0040, 0x05810203, 0x30241a70, 0x02102303,
    0x00033261, 0x70060220, 0x00342305, 0x00000000,
    0x302f1b70, 0x02102e03, 0x00030061, 0x72060220,
    0x00342e05, 0x00000000, 0xa1251c40, 0x02122412,
    0xa1301b40, 0x02122f12, 0x00031a61, 0x70260220,
    0x00342505, 0x00000000, 0x00031a61, 0x72260220,
    0x00343005, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00034231, 0x26140000,
    0xfb047014, 0x000c0000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034331, 0x310c0000,
    0xfb047214, 0x00040000, 0x61282241, 0x00c02602,
    0x00032269, 0x2b058660, 0x02462705, 0x00000003,
    0x00032370, 0x00010220, 0x52460a05, 0x00463105,
    0xa1291b40, 0x03f02803, 0xa12c1b40, 0x03f02b03,
    0x00031a65, 0x2a058220, 0x02462905, 0xffffffc0,
    0x00031a65, 0x2d058220, 0x02462c05, 0xffffffc0,
    0x01030022, 0x0001c060, 0x00000110, 0x00000100,
    0xa1320040, 0x0ff01d03, 0xa1340040, 0x05010203,
    0x00030069, 0x3e058660, 0x02461d05, 0x00000005,
    0x00031b65, 0x33058220, 0x02463205, 0xffffff00,
    0x30351b70, 0x02103403, 0x00033361, 0x73060220,
    0x00343405, 0x00000000, 0xa13f1c40, 0x03f03e03,
    0xa1361b40, 0x02123512, 0x00031a65, 0x40058220,
    0x02463f05, 0xffffffc0, 0x00031a61, 0x73260220,
    0x00343605, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034331, 0x370c0000,
    0xfb047314, 0x00040000, 0xa1382340, 0x0ff03703,
    0x00031965, 0x39058220, 0x02463805, 0xffffff00,
    0xa13a1940, 0x39003302, 0x613b1941, 0x00c03a02,
    0xa13c1940, 0x03f03b03, 0x00031965, 0x3d058220,
    0x02463c05, 0xffffffc0, 0xa1541940, 0x40003d02,
    0x00030024, 0x0001c060, 0x00000020, 0x00000020,
    0x00031a61, 0x54054220, 0x00000000, 0x00000000,
    0x00030025, 0x00004600, 0x00000000, 0x000000a8,
    0xa1410040, 0x00c10203, 0x30421970, 0x02104103,
    0x00033361, 0x74060220, 0x00344105, 0x00000000,
    0xa1431a40, 0x02124212, 0x00031961, 0x74260220,
    0x00344305, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034431, 0x440c0000,
    0xfb047414, 0x00040000, 0x00032469, 0x45058660,
    0x02464405, 0x00000002, 0xa1461940, 0x03304503,
    0x00031965, 0x47058220, 0x02464605, 0xffffffc0,
    0xa1481940, 0x2a004702, 0x00031952, 0x19040e68,
    0x0e0e4805, 0x54052d05, 0x00030024, 0x0001c060,
    0x00000020, 0x00000020, 0x00031a61, 0x19054220,
    0x00000000, 0x00000000, 0x00030025, 0x00004600,
    0x00000000, 0x00000010, 0xa1491a40, 0x19002002,
    0xa14b0040, 0x00c10203, 0xa1550040, 0x09c10203,
    0xa15e0040, 0x0a410203, 0x304a1c70, 0x20004903,
    0x304c1c70, 0x02104b03, 0x00033461, 0x75060220,
    0x00344b05, 0x00000000, 0x00031d61, 0x77060220,
    0x00345505, 0x00000000, 0x00031d61, 0x79060220,
    0x00345e05, 0x00000000, 0x00030061, 0x7b260660,
    0x00000264, 0x00000000, 0xa14d1d40, 0x02124c12,
    0x00031a61, 0x7b060660, 0x00000244, 0x00000000,
    0x00031a61, 0x75260220, 0x00344d05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034531, 0x4e0c0000, 0xfb047514, 0x00040000,
    0xa14f2540, 0xffd04e03, 0x00030069, 0x50058660,
    0x02464e05, 0x00000006, 0xe1511a68, 0x01a04f03,
    0x00031a52, 0x52044560, 0x0e0eff40, 0x49055005,
    0x00031a52, 0x03042e68, 0x0e0e4a05, 0x51052205,
    0x30531a70, 0x49005203, 0xf0560070, 0x09c05503,
    0xa1571940, 0x02125612, 0x00031961, 0x77260220,
    0x00345705, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034631, 0x580c0000,
    0xfb047714, 0x00040000, 0x00032669, 0x59058660,
    0x02465805, 0x00000006, 0xe15a0068, 0x01a05803,
    0xa15b1a40, 0x59005202, 0x00031a52, 0x5d042e68,
    0x0e0e5305, 0x5a050305, 0x305c1a70, 0x52005b03,
    0xf05f0070, 0x0a405e03, 0xa1601940, 0x02125f12,
    0x00031961, 0x79260220, 0x00346005, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034731, 0x610c0000, 0xfb047914, 0x00040000,
    0x00032769, 0x62058660, 0x02466105, 0x00000003,
    0xe1630068, 0x01d06103, 0xa1641a40, 0x03f06203,
    0x30651970, 0x62006403, 0x00030065, 0x67058220,
    0x02466405, 0xffffffc0, 0xa1661a40, 0x63026502,
    0xa1681a40, 0x67005b02, 0x00031a52, 0x05042e68,
    0x0e0e5c05, 0x66055d05, 0x30691a70, 0x5b006803,
    0xa16b0040, 0x0ff06803, 0xf06c1970, 0x0ff06b03,
    0x00030065, 0x7d058220, 0x02466b05, 0xffffffc0,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00031a52, 0x7e042e68, 0x0e2e6905, 0x6c050505,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034831, 0x00000000, 0xfb0c7b14, 0x000c7d14,
    0x80033861, 0x7e050220, 0x00460005, 0x00000000,
    0x80030931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_postbuild_info_compacted_size = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 1856,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_postbuild_info_compacted_size_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_postbuild_info_compacted_size_printfs,
      .base.uses_atomic_load_store = false,
      .local_size = { 1, 1, 1 },
      .prog_offset = { 0, 0, 0 },
      .prog_mask = 1,
      .prog_spilled = 0,
      .uses_barrier = false,
      .uses_num_work_groups = false,
      .push.per_thread.dwords = 0,
      .push.per_thread.regs = 0,
      .push.per_thread.size = 0,
      .push.cross_thread.dwords = 12,
      .push.cross_thread.regs = 2,
      .push.cross_thread.size = 64,
   },
   .args_size = 16,
   .arg_count = 2,
   .args = gfx125_bvh_postbuild_info_compacted_size_args,
   .code = gfx125_bvh_postbuild_info_compacted_size_code,
};
const char *gfx125_bvh_postbuild_info_compacted_size_sha1 = "a23889f9fabf177b28b154d48066fc258eb45895";

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

and(1)          g120<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g1UD            g120UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(8)          g47<1>D         g2<0,1,0>D      32D             { align1 1Q compacted };
add(8)          g16<1>D         g2<0,1,0>D      16D             { align1 1Q compacted };
cmp.l.f0.0(8)   g32<1>UD        g47<1,1,0>UD    0x00000020UD    { align1 1Q I@2 compacted };
mov(8)          g7<2>UD         g47<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g17<1>UD        g16<1,1,0>UD    0x00000010UD    { align1 1Q I@3 compacted };
mov(8)          g19<2>UD        g16<4,4,1>UD                    { align1 1Q };
add(8)          g78<1>D         -g32<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@4 compacted };
add(8)          g18<1>D         -g17<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@3 compacted };
mov(8)          g7.1<2>UD       g78<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g19.1<2>UD      g18<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(8)         g8UD            g7UD            nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g20UD           g19UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $2 };
add(8)          g100<1>D        g9<1,1,0>D      -g8<1,1,0>D     { align1 1Q $1.dst compacted };
add(8)          g24<1>D         g23<1,1,0>D     -g22<1,1,0>D    { align1 1Q $2.dst compacted };
add(8)          g30<1>D         g21<1,1,0>D     -g20<1,1,0>D    { align1 1Q $2.dst compacted };
shr(8)          g114<1>UD       g100<1,1,0>UD   0x00000001UD    { align1 1Q I@3 compacted };
shr(8)          g15<1>UD        g100<1,1,0>UD   0x0000001aUD    { align1 1Q compacted };
shl(8)          g25<1>D         g24<8,8,1>D     0x00000006UD    { align1 1Q I@4 };
shr(8)          g3<1>UD         g24<1,1,0>UD    0x0000001aUD    { align1 1Q compacted };
shl(8)          g31<1>D         g30<8,8,1>D     0x00000006UD    { align1 1Q I@5 };
shr(8)          g5<1>UD         g30<1,1,0>UD    0x0000001aUD    { align1 1Q compacted };
shl(8)          g14<1>D         g114<8,8,1>D    0x00000007UD    { align1 1Q I@6 };
add(8)          g27<1>D         g14<1,1,0>D     g25<1,1,0>D     { align1 1Q I@1 compacted };
cmp.l.f0.0(8)   g28<1>UD        g27<1,1,0>UD    g14<1,1,0>UD    { align1 1Q I@1 compacted };
add(8)          g33<1>D         g27<1,1,0>D     g31<1,1,0>D     { align1 1Q I@5 compacted };
add3(8)         g29<1>D         g15<8,8,1>D     g3<8,8,1>D      -g28<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g34<1>UD        g33<1,1,0>UD    g27<1,1,0>UD    { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   null<1>UD       g10<8,8,1>UD    g11<8,8,1>UD    { align1 1Q $1.dst };
add3(8)         g35<1>D         g29<8,8,1>D     g5<8,8,1>D      -g34<1,1,1>D { align1 1Q I@2 };
(+f0.0) if(8)   JIP:  LABEL1          UIP:  LABEL0              { align1 1Q };
add(8)          g36<1>D         g2<0,1,0>D      64D             { align1 1Q compacted };
add(8)          g48<1>D         g2<0,1,0>D      88D             { align1 1Q compacted };
cmp.l.f0.0(8)   g37<1>UD        g36<1,1,0>UD    g2<0,1,0>UD     { align1 1Q I@2 compacted };
mov(8)          g39<2>UD        g36<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g49<1>UD        g48<1,1,0>UD    g2<0,1,0>UD     { align1 1Q I@3 compacted };
mov(8)          g51<2>UD        g48<4,4,1>UD                    { align1 1Q };
add(8)          g38<1>D         -g37<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@4 compacted };
add(8)          g50<1>D         -g49<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@3 compacted };
mov(8)          g39.1<2>UD      g38<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g51.1<2>UD      g50<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(8)         g40UD           g39UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g52UD           g51UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $4 };
mul(8)          g42<1>D         g40<1,1,0>D     12W             { align1 1Q $3.dst compacted };
shl(8)          g45<1>D         g41<8,8,1>D     0x00000003UD    { align1 1Q $3.dst };
cmp.l.f0.0(8)   null<1>UD       g10<8,8,1>UD    g52<8,8,1>UD    { align1 1Q $4.dst };
add(8)          g43<1>D         g42<1,1,0>D     63D             { align1 1Q I@3 compacted };
add(8)          g46<1>D         g45<1,1,0>D     63D             { align1 1Q I@3 compacted };
and(8)          g44<1>UD        g43<8,8,1>UD    0xffffffc0UD    { align1 1Q I@2 };
and(8)          g4<1>UD         g46<8,8,1>UD    0xffffffc0UD    { align1 1Q I@2 };
(+f0.0) if(8)   JIP:  LABEL3          UIP:  LABEL2              { align1 1Q };
add(8)          g53<1>D         g30<1,1,0>D     255D            { align1 1Q compacted };
add(8)          g55<1>D         g2<0,1,0>D      80D             { align1 1Q compacted };
shl(8)          g66<1>D         g30<8,8,1>D     0x00000005UD    { align1 1Q };
and(8)          g54<1>UD        g53<8,8,1>UD    0xffffff00UD    { align1 1Q I@3 };
cmp.l.f0.0(8)   g56<1>UD        g55<1,1,0>UD    g2<0,1,0>UD     { align1 1Q I@3 compacted };
mov(8)          g58<2>UD        g55<4,4,1>UD                    { align1 1Q };
add(8)          g67<1>D         g66<1,1,0>D     63D             { align1 1Q I@4 compacted };
add(8)          g57<1>D         -g56<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@3 compacted };
and(8)          g68<1>UD        g67<8,8,1>UD    0xffffffc0UD    { align1 1Q I@2 };
mov(8)          g58.1<2>UD      g57<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g59UD           g58UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $5 };
add(8)          g60<1>D         g59<1,1,0>D     255D            { align1 1Q $5.dst compacted };
and(8)          g61<1>UD        g60<8,8,1>UD    0xffffff00UD    { align1 1Q I@1 };
add(8)          g62<1>D         g54<1,1,0>D     g61<1,1,0>D     { align1 1Q I@1 compacted };
mul(8)          g63<1>D         g62<1,1,0>D     12W             { align1 1Q I@1 compacted };
add(8)          g64<1>D         g63<1,1,0>D     63D             { align1 1Q I@1 compacted };
and(8)          g65<1>UD        g64<8,8,1>UD    0xffffffc0UD    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(8)          g1<1>D          g65<1,1,0>D     g68<1,1,0>D     { align1 1Q I@1 compacted };
else(8)         JIP:  LABEL2          UIP:  LABEL2              { align1 1Q };

LABEL3:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(8)          g1<1>UD         0x00000000UD                    { align1 1Q };

LABEL2:
endif(8)        JIP:  LABEL4                                    { align1 1Q };
add(8)          g69<1>D         g2<0,1,0>D      12D             { align1 1Q compacted };
cmp.l.f0.0(8)   g70<1>UD        g69<1,1,0>UD    g2<0,1,0>UD     { align1 1Q I@1 compacted };
mov(8)          g72<2>UD        g69<4,4,1>UD                    { align1 1Q };
add(8)          g71<1>D         -g70<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@2 compacted };
mov(8)          g72.1<2>UD      g71<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g73UD           g72UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $6 };
shl(8)          g74<1>D         g73<8,8,1>D     0x00000002UD    { align1 1Q $6.dst };
add(8)          g75<1>D         g74<1,1,0>D     51D             { align1 1Q I@1 compacted };
and(8)          g76<1>UD        g75<8,8,1>UD    0xffffffc0UD    { align1 1Q I@1 };
add(8)          g77<1>D         g76<1,1,0>D     g44<1,1,0>D     { align1 1Q I@1 compacted };
add3(8)         g26<1>D         g77<8,8,1>D     g4<8,8,1>D      g1<1,1,1>D { align1 1Q I@1 };

LABEL4:
else(8)         JIP:  LABEL0          UIP:  LABEL0              { align1 1Q };

LABEL1:
mov(8)          g26<1>UD        0x00000000UD                    { align1 1Q I@2 };

LABEL0:
endif(8)        JIP:  LABEL5                                    { align1 1Q };

LABEL5:
add(8)          g6<1>D          g33<1,1,0>D     g26<1,1,0>D     { align1 1Q I@2 compacted };
add(8)          g80<1>D         g2<0,1,0>D      12D             { align1 1Q compacted };
add(8)          g91<1>D         g2<0,1,0>D      156D            { align1 1Q compacted };
add(8)          g101<1>D        g2<0,1,0>D      164D            { align1 1Q compacted };
cmp.l.f0.0(8)   g79<1>UD        g6<1,1,0>UD     g33<1,1,0>UD    { align1 1Q I@4 compacted };
cmp.l.f0.0(8)   g81<1>UD        g80<1,1,0>UD    g2<0,1,0>UD     { align1 1Q I@4 compacted };
mov(8)          g83<2>UD        g80<4,4,1>UD                    { align1 1Q };
mov(8)          g94<2>UD        g91<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g104<2>UD       g101<4,4,1>UD                   { align1 1Q I@5 };
mov(8)          g117.1<2>D      g2.3<0,1,0>D                    { align1 1Q };
add(8)          g82<1>D         -g81<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@5 compacted };
mov(8)          g117<2>D        g2.2<0,1,0>D                    { align1 1Q I@2 };
mov(8)          g83.1<2>UD      g82<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g84UD           g83UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $7 };
add(8)          g85<1>D         g84<1,1,0>D     -3D             { align1 1Q $7.dst compacted };
shl(8)          g86<1>D         g84<8,8,1>D     0x00000006UD    { align1 1Q };
shr(8)          g87<1>UD        g85<1,1,0>UD    0x0000001aUD    { align1 1Q I@2 compacted };
add3(8)         g88<1>D         65344W          g86<8,8,1>D     g6<1,1,1>D { align1 1Q I@2 };
add3(8)         g90<1>D         -g79<8,8,1>D    g35<8,8,1>D     g87<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g89<1>UD        g88<1,1,0>UD    g6<1,1,0>UD     { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g92<1>UD        g91<1,1,0>UD    0x0000009cUD    { align1 1Q compacted };
add(8)          g93<1>D         -g92<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@1 compacted };
mov(8)          g94.1<2>UD      g93<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g95UD           g94UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $8 };
shl(8)          g96<1>D         g95<8,8,1>D     0x00000006UD    { align1 1Q $8.dst };
shr(8)          g97<1>UD        g95<1,1,0>UD    0x0000001aUD    { align1 1Q compacted };
add(8)          g98<1>D         g88<1,1,0>D     g96<1,1,0>D     { align1 1Q I@2 compacted };
add3(8)         g12<1>D         -g89<8,8,1>D    g90<8,8,1>D     g97<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g99<1>UD        g98<1,1,0>UD    g88<1,1,0>UD    { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g102<1>UD       g101<1,1,0>UD   0x000000a4UD    { align1 1Q compacted };
add(8)          g103<1>D        -g102<1,1,0>D   g2.1<0,1,0>D    { align1 1Q I@1 compacted };
mov(8)          g104.1<2>UD     g103<4,4,1>UD                   { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g105UD          g104UD          nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $9 };
shl(8)          g106<1>D        g105<8,8,1>D    0x00000003UD    { align1 1Q $9.dst };
shr(8)          g107<1>UD       g105<1,1,0>UD   0x0000001dUD    { align1 1Q compacted };
add(8)          g108<1>D        g106<1,1,0>D    63D             { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g109<1>UD       g108<1,1,0>UD   g106<1,1,0>UD   { align1 1Q I@1 compacted };
and(8)          g111<1>UD       g108<8,8,1>UD   0xffffffc0UD    { align1 1Q };
add(8)          g110<1>D        -g109<1,1,0>D   g107<1,1,0>D    { align1 1Q I@2 compacted };
add(8)          g112<1>D        g98<1,1,0>D     g111<1,1,0>D    { align1 1Q I@2 compacted };
add3(8)         g13<1>D         -g99<8,8,1>D    g12<8,8,1>D     g110<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g113<1>UD       g112<1,1,0>UD   g98<1,1,0>UD    { align1 1Q I@2 compacted };
add(8)          g115<1>D        g112<1,1,0>D    255D            { align1 1Q compacted };
cmp.l.f0.0(8)   g116<1>UD       g115<1,1,0>UD   0x000000ffUD    { align1 1Q I@1 compacted };
and(8)          g119<1>UD       g115<8,8,1>UD   0xffffffc0UD    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add3(8)         g120<1>D        -g113<8,8,1>D   g13<8,8,1>D     -g116<1,1,1>D { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g117UD          g119UD          0x04001584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1Q $10 };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(8)         nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1Q A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_postbuild_info_compacted_size_code[] = {
    0x80000065, 0x78058220, 0x02000004, 0xffffffc0,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00780c, 0x00340000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa12f0040, 0x02010203, 0xa1100040, 0x01010203,
    0xf0201a70, 0x02002f03, 0x00030061, 0x07060220,
    0x00342f05, 0x00000000, 0xf0111b70, 0x01001003,
    0x00030061, 0x13060220, 0x00341005, 0x00000000,
    0xa14e1c40, 0x02122012, 0xa1121b40, 0x02121112,
    0x00031a61, 0x07260220, 0x00344e05, 0x00000000,
    0x00031a61, 0x13260220, 0x00341205, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00034131, 0x08240000, 0xfb000714, 0x000c0000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034231, 0x14240000, 0xfb001314, 0x000c0000,
    0xa1642140, 0x08200902, 0xa1182240, 0x16201702,
    0xa11e2240, 0x14201502, 0xe1721b68, 0x00106403,
    0xe10f0068, 0x01a06403, 0x00031c69, 0x19058660,
    0x02461805, 0x00000006, 0xe1030068, 0x01a01803,
    0x00031d69, 0x1f058660, 0x02461e05, 0x00000006,
    0xe1050068, 0x01a01e03, 0x00031e69, 0x0e058660,
    0x02467205, 0x00000007, 0xa11b1940, 0x19000e02,
    0x301c1970, 0x0e001b03, 0xa1211d40, 0x1f001b02,
    0x00031a52, 0x1d040e68, 0x0e2e0f05, 0x1c050305,
    0x30221a70, 0x1b002103, 0x00032170, 0x00010220,
    0x52460a05, 0x00460b05, 0x00031a52, 0x23040e68,
    0x0e2e1d05, 0x22050505, 0x01030022, 0x0001c060,
    0x00000320, 0x00000310, 0xa1240040, 0x04010203,
    0xa1300040, 0x05810203, 0x30251a70, 0x02102403,
    0x00030061, 0x27060220, 0x00342405, 0x00000000,
    0x30311b70, 0x02103003, 0x00030061, 0x33060220,
    0x00343005, 0x00000000, 0xa1261c40, 0x02122512,
    0xa1321b40, 0x02123112, 0x00031a61, 0x27260220,
    0x00342605, 0x00000000, 0x00031a61, 0x33260220,
    0x00343205, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00034331, 0x28140000,
    0xfb002714, 0x00040000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034431, 0x340c0000,
    0xfb003314, 0x00000000, 0x612a2341, 0x00c02802,
    0x00032369, 0x2d058660, 0x02462905, 0x00000003,
    0x00032470, 0x00010220, 0x52460a05, 0x00463405,
    0xa12b1b40, 0x03f02a03, 0xa12e1b40, 0x03f02d03,
    0x00031a65, 0x2c058220, 0x02462b05, 0xffffffc0,
    0x00031a65, 0x04058220, 0x02462e05, 0xffffffc0,
    0x01030022, 0x0001c060, 0x00000140, 0x00000110,
    0xa1350040, 0x0ff01e03, 0xa1370040, 0x05010203,
    0x00030069, 0x42058660, 0x02461e05, 0x00000005,
    0x00031b65, 0x36058220, 0x02463505, 0xffffff00,
    0x30381b70, 0x02103703, 0x00030061, 0x3a060220,
    0x00343705, 0x00000000, 0xa1431c40, 0x03f04203,
    0xa1391b40, 0x02123812, 0x00031a65, 0x44058220,
    0x02464305, 0xffffffc0, 0x00031a61, 0x3a260220,
    0x00343905, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034531, 0x3b0c0000,
    0xfb003a14, 0x00000000, 0xa13c2540, 0x0ff03b03,
    0x00031965, 0x3d058220, 0x02463c05, 0xffffff00,
    0xa13e1940, 0x3d003602, 0x613f1941, 0x00c03e02,
    0xa1401940, 0x03f03f03, 0x00031965, 0x41058220,
    0x02464005, 0xffffffc0, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa1011940, 0x44004102,
    0x00030024, 0x0001c060, 0x00000040, 0x00000040,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x01054220, 0x00000000, 0x00000000,
    0x00030025, 0x00004600, 0x00000000, 0x000000a8,
    0xa1450040, 0x00c10203, 0x30461970, 0x02104503,
    0x00030061, 0x48060220, 0x00344505, 0x00000000,
    0xa1471a40, 0x02124612, 0x00031961, 0x48260220,
    0x00344705, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034631, 0x490c0000,
    0xfb004814, 0x00000000, 0x00032669, 0x4a058660,
    0x02464905, 0x00000002, 0xa14b1940, 0x03304a03,
    0x00031965, 0x4c058220, 0x02464b05, 0xffffffc0,
    0xa14d1940, 0x2c004c02, 0x00031952, 0x1a040e68,
    0x0e0e4d05, 0x01050405, 0x00030024, 0x0001c060,
    0x00000020, 0x00000020, 0x00031a61, 0x1a054220,
    0x00000000, 0x00000000, 0x00030025, 0x00004600,
    0x00000000, 0x00000010, 0xa1061a40, 0x1a002102,
    0xa1500040, 0x00c10203, 0xa15b0040, 0x09c10203,
    0xa1650040, 0x0a410203, 0x304f1c70, 0x21000603,
    0x30511c70, 0x02105003, 0x00030061, 0x53060220,
    0x00345005, 0x00000000, 0x00031d61, 0x5e060220,
    0x00345b05, 0x00000000, 0x00031d61, 0x68060220,
    0x00346505, 0x00000000, 0x00030061, 0x75260660,
    0x00000264, 0x00000000, 0xa1521d40, 0x02125112,
    0x00031a61, 0x75060660, 0x00000244, 0x00000000,
    0x00031a61, 0x53260220, 0x00345205, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034731, 0x540c0000, 0xfb005314, 0x00000000,
    0xa1552740, 0xffd05403, 0x00030069, 0x56058660,
    0x02465405, 0x00000006, 0xe1571a68, 0x01a05503,
    0x00031a52, 0x58044560, 0x0e0eff40, 0x06055605,
    0x00031a52, 0x5a042e68, 0x0e0e4f05, 0x57052305,
    0x30591a70, 0x06005803, 0xf05c0070, 0x09c05b03,
    0xa15d1940, 0x02125c12, 0x00031961, 0x5e260220,
    0x00345d05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034831, 0x5f0c0000,
    0xfb005e14, 0x00000000, 0x00032869, 0x60058660,
    0x02465f05, 0x00000006, 0xe1610068, 0x01a05f03,
    0xa1621a40, 0x60005802, 0x00031a52, 0x0c042e68,
    0x0e0e5905, 0x61055a05, 0x30631a70, 0x58006203,
    0xf0660070, 0x0a406503, 0xa1671940, 0x02126612,
    0x00031961, 0x68260220, 0x00346705, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034931, 0x690c0000, 0xfb006814, 0x00000000,
    0x00032969, 0x6a058660, 0x02466905, 0x00000003,
    0xe16b0068, 0x01d06903, 0xa16c1a40, 0x03f06a03,
    0x306d1970, 0x6a006c03, 0x00030065, 0x6f058220,
    0x02466c05, 0xffffffc0, 0xa16e1a40, 0x6b026d02,
    0xa1701a40, 0x6f006202, 0x00031a52, 0x0d042e68,
    0x0e0e6305, 0x6e050c05, 0x30711a70, 0x62007003,
    0xa1730040, 0x0ff07003, 0xf0741970, 0x0ff07303,
    0x00030065, 0x77058220, 0x02467305, 0xffffffc0,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00031a52, 0x78042e68, 0x0e2e7105, 0x74050d05,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034a31, 0x00000000, 0xfb087514, 0x00047714,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80030931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_postbuild_info_compacted_size = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 1904,
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
const char *gfx125_bvh_postbuild_info_compacted_size_sha1 = "10a8c9567a7926eb8e2ebcabd79f4c69e7fc8e3f";

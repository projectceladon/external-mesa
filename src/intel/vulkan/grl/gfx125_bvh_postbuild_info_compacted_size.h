#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_postbuild_info_compacted_size_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_postbuild_info_compacted_size_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g39<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
add(1)          g9<1>UD         g39<0,1,0>UD    0x00000000UD    { align1 WE_all 1N I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g1UD            g9UD            nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g7.1<2>F        g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g3.1<2>F        g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g7<2>F          g2<0,1,0>F                      { align1 1Q F@2 compacted };
mov(8)          g3<2>F          g2.2<0,1,0>F                    { align1 1Q F@2 compacted };
add(8)          g40<1>D         g7<8,4,2>D      32D             { align1 1Q F@2 compacted };
add(8)          g24<1>D         g7<8,4,2>D      16D             { align1 1Q compacted };
cmp.l.f0.0(8)   g109<1>UD       g40<1,1,0>UD    0x00000020UD    { align1 1Q I@2 compacted };
mov(8)          g48<2>UD        g40<4,4,1>UD                    { align1 1Q };
mov(8)          g27<2>UD        g24<4,4,1>UD                    { align1 1Q I@3 };
add(8)          g123<1>D        -g109<8,8,1>D   g7.1<8,4,2>D    { align1 1Q I@3 };
mov(8)          g48.1<2>UD      g123<4,4,1>UD                   { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g13UD           g48UD           nullUD          0x0440f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $1 };
add(8)          g17<1>D         g14<1,1,0>D     -g13<1,1,0>D    { align1 1Q $1.dst compacted };
shr(8)          g18<1>UD        g17<1,1,0>UD    0x00000001UD    { align1 1Q I@1 compacted };
shr(8)          g20<1>UD        g17<1,1,0>UD    0x0000001aUD    { align1 1Q compacted };
shl(8)          g19<1>D         g18<8,8,1>D     0x00000007UD    { align1 1Q I@2 };
add(8)          g21<1>D         g19<1,1,0>D     192D            { align1 1Q I@1 compacted };
cmp.l.f0.0(8)   g22<1>UD        g21<1,1,0>UD    0x000000c0UD    { align1 1Q I@1 compacted };
cmp.l.f0.0(8)   g25<1>UD        g24<1,1,0>UD    0x00000010UD    { align1 1Q compacted };
add(8)          g23<1>D         -g22<1,1,0>D    g20<1,1,0>D     { align1 1Q I@2 compacted };
add(8)          g26<1>D         -g25<8,8,1>D    g7.1<8,4,2>D    { align1 1Q I@2 };
mov(8)          g27.1<2>UD      g26<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g28UD           g27UD           nullUD          0x0440f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $2 };
add(8)          g32<1>D         g31<1,1,0>D     -g30<1,1,0>D    { align1 1Q $2.dst compacted };
add(8)          g38<1>D         g29<1,1,0>D     -g28<1,1,0>D    { align1 1Q $2.dst compacted };
shl(8)          g33<1>D         g32<8,8,1>D     0x00000006UD    { align1 1Q I@2 };
shr(8)          g34<1>UD        g32<1,1,0>UD    0x0000001aUD    { align1 1Q compacted };
shl(8)          g39<1>D         g38<8,8,1>D     0x00000006UD    { align1 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shr(8)          g9<1>UD         g38<1,1,0>UD    0x0000001aUD    { align1 1Q compacted };
add(8)          g35<1>D         g21<1,1,0>D     g33<1,1,0>D     { align1 1Q I@4 compacted };
cmp.l.f0.0(8)   g36<1>UD        g35<1,1,0>UD    g21<1,1,0>UD    { align1 1Q I@1 compacted };
add(8)          g41<1>D         g35<1,1,0>D     g39<1,1,0>D     { align1 1Q I@4 compacted };
add3(8)         g37<1>D         g23<8,8,1>D     g34<8,8,1>D     -g36<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g42<1>UD        g41<1,1,0>UD    g35<1,1,0>UD    { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   null<1>UD       g15<8,8,1>UD    g16<8,8,1>UD    { align1 1Q $1.dst };
add3(8)         g43<1>D         g37<8,8,1>D     g9<8,8,1>D      -g42<1,1,1>D { align1 1Q I@2 };
(+f0.0) if(8)   JIP:  LABEL1          UIP:  LABEL0              { align1 1Q };
add(8)          g44<1>D         g7<8,4,2>D      64D             { align1 1Q compacted };
add(8)          g56<1>D         g7<8,4,2>D      88D             { align1 1Q compacted };
cmp.l.f0.0(8)   g45<1>UD        g44<8,8,1>UD    g7<8,4,2>UD     { align1 1Q I@2 };
mov(8)          g28<2>UD        g44<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g57<1>UD        g56<8,8,1>UD    g7<8,4,2>UD     { align1 1Q I@3 };
mov(8)          g30<2>UD        g56<4,4,1>UD                    { align1 1Q };
add(8)          g46<1>D         -g45<8,8,1>D    g7.1<8,4,2>D    { align1 1Q I@4 };
add(8)          g58<1>D         -g57<8,8,1>D    g7.1<8,4,2>D    { align1 1Q I@3 };
mov(8)          g28.1<2>UD      g46<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g30.1<2>UD      g58<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(8)         g5UD            g28UD           nullUD          0x04203582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g60UD           g30UD           nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $4 };
mul(8)          g50<1>D         g5<1,1,0>D      12W             { align1 1Q $3.dst compacted };
shl(8)          g53<1>D         g6<8,8,1>D      0x00000003UD    { align1 1Q $3.dst };
cmp.l.f0.0(8)   null<1>UD       g15<8,8,1>UD    g60<8,8,1>UD    { align1 1Q $4.dst };
add(8)          g51<1>D         g50<1,1,0>D     63D             { align1 1Q I@3 compacted };
add(8)          g54<1>D         g53<1,1,0>D     63D             { align1 1Q I@3 compacted };
and(8)          g52<1>UD        g51<8,8,1>UD    0xffffffc0UD    { align1 1Q I@2 };
and(8)          g55<1>UD        g54<8,8,1>UD    0xffffffc0UD    { align1 1Q I@2 };
(+f0.0) if(8)   JIP:  LABEL3          UIP:  LABEL2              { align1 1Q };
add(8)          g61<1>D         g38<1,1,0>D     255D            { align1 1Q compacted };
add(8)          g63<1>D         g7<8,4,2>D      80D             { align1 1Q compacted };
shl(8)          g74<1>D         g38<8,8,1>D     0x00000005UD    { align1 1Q };
and(8)          g62<1>UD        g61<8,8,1>UD    0xffffff00UD    { align1 1Q I@3 };
cmp.l.f0.0(8)   g64<1>UD        g63<8,8,1>UD    g7<8,4,2>UD     { align1 1Q I@3 };
mov(8)          g31<2>UD        g63<4,4,1>UD                    { align1 1Q $4.src };
add(8)          g75<1>D         g74<1,1,0>D     63D             { align1 1Q I@4 compacted };
add(8)          g65<1>D         -g64<8,8,1>D    g7.1<8,4,2>D    { align1 1Q I@3 };
and(8)          g76<1>UD        g75<8,8,1>UD    0xffffffc0UD    { align1 1Q I@2 };
mov(8)          g31.1<2>UD      g65<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g67UD           g31UD           nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $4 };
add(8)          g68<1>D         g67<1,1,0>D     255D            { align1 1Q $4.dst compacted };
and(8)          g69<1>UD        g68<8,8,1>UD    0xffffff00UD    { align1 1Q I@1 };
add(8)          g70<1>D         g62<1,1,0>D     g69<1,1,0>D     { align1 1Q I@1 compacted };
mul(8)          g71<1>D         g70<1,1,0>D     12W             { align1 1Q I@1 compacted };
add(8)          g72<1>D         g71<1,1,0>D     63D             { align1 1Q I@1 compacted };
and(8)          g73<1>UD        g72<8,8,1>UD    0xffffffc0UD    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(8)          g48<1>D         g73<1,1,0>D     g76<1,1,0>D     { align1 1Q I@1 compacted };
else(8)         JIP:  LABEL2          UIP:  LABEL2              { align1 1Q };

LABEL3:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g48<1>UD        0x00000000UD                    { align1 1Q I@2 };

LABEL2:
endif(8)        JIP:  LABEL4                                    { align1 1Q };
add(8)          g77<1>D         g7<8,4,2>D      12D             { align1 1Q compacted };
cmp.l.f0.0(8)   g78<1>UD        g77<8,8,1>UD    g7<8,4,2>UD     { align1 1Q I@1 };
mov(8)          g32<2>UD        g77<4,4,1>UD                    { align1 1Q $4.src };
add(8)          g79<1>D         -g78<8,8,1>D    g7.1<8,4,2>D    { align1 1Q I@2 };
mov(8)          g32.1<2>UD      g79<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g81UD           g32UD           nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $5 };
shl(8)          g82<1>D         g81<8,8,1>D     0x00000002UD    { align1 1Q $5.dst };
add(8)          g83<1>D         g82<1,1,0>D     51D             { align1 1Q I@1 compacted };
and(8)          g84<1>UD        g83<8,8,1>UD    0xffffffc0UD    { align1 1Q I@1 };
add(8)          g85<1>D         g84<1,1,0>D     g52<1,1,0>D     { align1 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add3(8)         g49<1>D         g85<8,8,1>D     g55<8,8,1>D     g48<1,1,1>D { align1 1Q I@1 };

LABEL4:
else(8)         JIP:  LABEL0          UIP:  LABEL0              { align1 1Q };

LABEL1:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g49<1>UD        0x00000000UD                    { align1 1Q I@2 };

LABEL0:
endif(8)        JIP:  LABEL5                                    { align1 1Q };

LABEL5:
add(8)          g86<1>D         g41<1,1,0>D     g49<1,1,0>D     { align1 1Q I@2 compacted };
add(8)          g88<1>D         g7<8,4,2>D      12D             { align1 1Q compacted };
add(8)          g100<1>D        g7<8,4,2>D      156D            { align1 1Q compacted };
add(8)          g110<1>D        g7<8,4,2>D      164D            { align1 1Q compacted };
cmp.l.f0.0(8)   g87<1>UD        g86<1,1,0>UD    g41<1,1,0>UD    { align1 1Q I@4 compacted };
cmp.l.f0.0(8)   g89<1>UD        g88<8,8,1>UD    g7<8,4,2>UD     { align1 1Q I@4 };
mov(8)          g33<2>UD        g88<4,4,1>UD                    { align1 1Q $5.src };
mov(8)          g35<2>UD        g100<4,4,1>UD                   { align1 1Q I@5 };
mov(8)          g37<2>UD        g110<4,4,1>UD                   { align1 1Q I@5 };
add(8)          g90<1>D         -g89<8,8,1>D    g7.1<8,4,2>D    { align1 1Q I@4 };
mov(8)          g33.1<2>UD      g90<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g92UD           g33UD           nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $6 };
add(8)          g93<1>D         g92<1,1,0>D     -3D             { align1 1Q $6.dst compacted };
shl(8)          g94<1>D         g92<8,8,1>D     0x00000006UD    { align1 1Q };
shr(8)          g96<1>UD        g93<1,1,0>UD    0x0000001aUD    { align1 1Q I@2 compacted };
add(8)          g95<1>D         g94<1,1,0>D     -192D           { align1 1Q I@2 compacted };
add3(8)         g99<1>D         -g87<8,8,1>D    g43<8,8,1>D     g96<1,1,1>D { align1 1Q I@2 };
add(8)          g97<1>D         g86<1,1,0>D     g95<1,1,0>D     { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g98<1>UD        g97<1,1,0>UD    g86<1,1,0>UD    { align1 1Q I@1 compacted };
cmp.l.f0.0(8)   g101<1>UD       g100<1,1,0>UD   0x0000009cUD    { align1 1Q compacted };
add(8)          g102<1>D        -g101<8,8,1>D   g7.1<8,4,2>D    { align1 1Q I@1 };
mov(8)          g35.1<2>UD      g102<4,4,1>UD                   { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g104UD          g35UD           nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $7 };
shl(8)          g105<1>D        g104<8,8,1>D    0x00000006UD    { align1 1Q $7.dst };
shr(8)          g106<1>UD       g104<1,1,0>UD   0x0000001aUD    { align1 1Q compacted };
add(8)          g107<1>D        g97<1,1,0>D     g105<1,1,0>D    { align1 1Q I@2 compacted };
add3(8)         g10<1>D         -g98<8,8,1>D    g99<8,8,1>D     g106<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g108<1>UD       g107<1,1,0>UD   g97<1,1,0>UD    { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g111<1>UD       g110<1,1,0>UD   0x000000a4UD    { align1 1Q compacted };
add(8)          g112<1>D        -g111<8,8,1>D   g7.1<8,4,2>D    { align1 1Q I@1 };
mov(8)          g37.1<2>UD      g112<4,4,1>UD                   { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g114UD          g37UD           nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $8 };
shl(8)          g115<1>D        g114<8,8,1>D    0x00000003UD    { align1 1Q $8.dst };
shr(8)          g116<1>UD       g114<1,1,0>UD   0x0000001dUD    { align1 1Q compacted };
add(8)          g117<1>D        g115<1,1,0>D    63D             { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g118<1>UD       g117<1,1,0>UD   g115<1,1,0>UD   { align1 1Q I@1 compacted };
and(8)          g120<1>UD       g117<8,8,1>UD   0xffffffc0UD    { align1 1Q };
add(8)          g119<1>D        -g118<1,1,0>D   g116<1,1,0>D    { align1 1Q I@2 compacted };
add(8)          g121<1>D        g107<1,1,0>D    g120<1,1,0>D    { align1 1Q I@2 compacted };
add3(8)         g11<1>D         -g108<8,8,1>D   g10<8,8,1>D     g119<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g122<1>UD       g121<1,1,0>UD   g107<1,1,0>UD   { align1 1Q I@2 compacted };
add(8)          g124<1>D        g121<1,1,0>D    63D             { align1 1Q compacted };
cmp.l.f0.0(8)   g125<1>UD       g124<1,1,0>UD   g121<1,1,0>UD   { align1 1Q I@1 compacted };
and(8)          g38<1>UD        g124<8,8,1>UD   0xffffffc0UD    { align1 1Q $8.src };
add3(8)         g39<1>D         -g122<8,8,1>D   g11<8,8,1>D     -g125<1,1,1>D { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(8)         nullUD          g3UD            g38UD           0x04003586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat ) base_offset 0  { align1 1Q $9 };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(8)         nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1Q A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_postbuild_info_compacted_size_code[] = {
    0x80000065, 0x27058220, 0x02000004, 0xffffffc0,
    0xe2091940, 0x00012703, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa00090c, 0x00340000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x21070061, 0x001102cc,
    0x00030061, 0x03260aa0, 0x00000264, 0x00000000,
    0x21071261, 0x00110204, 0x21031261, 0x00110244,
    0xa1281240, 0x020e0703, 0xa1180040, 0x010e0703,
    0xf06d1a70, 0x02002803, 0x00030061, 0x30060220,
    0x00342805, 0x00000000, 0x00031b61, 0x1b060220,
    0x00341805, 0x00000000, 0x00031b40, 0x7b052660,
    0x06466d05, 0x00440726, 0x00031961, 0x30260220,
    0x00347b05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034131, 0x0d240000,
    0xfb043014, 0x003c0000, 0xa1112140, 0x0d200e02,
    0xe1121968, 0x00101103, 0xe1140068, 0x01a01103,
    0x00031a69, 0x13058660, 0x02461205, 0x00000007,
    0xa1151940, 0x0c001303, 0xf0161970, 0x0c001503,
    0xf0190070, 0x01001803, 0xa1171a40, 0x14021602,
    0x00031a40, 0x1a052660, 0x06461905, 0x00440726,
    0x00031961, 0x1b260220, 0x00341a05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034231, 0x1c240000, 0xfb041b14, 0x003c0000,
    0xa1202240, 0x1e201f02, 0xa1262240, 0x1c201d02,
    0x00031a69, 0x21058660, 0x02462005, 0x00000006,
    0xe1220068, 0x01a02003, 0x00031b69, 0x27058660,
    0x02462605, 0x00000006, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xe1090068, 0x01a02603,
    0xa1231c40, 0x21001502, 0x30241970, 0x15002303,
    0xa1291c40, 0x27002302, 0x00031a52, 0x25040e68,
    0x0e2e1705, 0x24052205, 0x302a1a70, 0x23002903,
    0x00032170, 0x00010220, 0x52460f05, 0x00461005,
    0x00031a52, 0x2b040e68, 0x0e2e2505, 0x2a050905,
    0x01030022, 0x0001c060, 0x00000370, 0x00000350,
    0xa12c0040, 0x040e0703, 0xa1380040, 0x058e0703,
    0x00031a70, 0x2d050220, 0x52462c05, 0x00440706,
    0x00030061, 0x1c060220, 0x00342c05, 0x00000000,
    0x00031b70, 0x39050220, 0x52463805, 0x00440706,
    0x00030061, 0x1e060220, 0x00343805, 0x00000000,
    0x00031c40, 0x2e052660, 0x06462d05, 0x00440726,
    0x00031b40, 0x3a052660, 0x06463905, 0x00440726,
    0x00031a61, 0x1c260220, 0x00342e05, 0x00000000,
    0x00031a61, 0x1e260220, 0x00343a05, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00034331, 0x05140000, 0xfb041c14, 0x000c0000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034431, 0x3c0c0000, 0xfb041e14, 0x00040000,
    0x61322341, 0x00c00502, 0x00032369, 0x35058660,
    0x02460605, 0x00000003, 0x00032470, 0x00010220,
    0x52460f05, 0x00463c05, 0xa1331b40, 0x03f03203,
    0xa1361b40, 0x03f03503, 0x00031a65, 0x34058220,
    0x02463305, 0xffffffc0, 0x00031a65, 0x37058220,
    0x02463605, 0xffffffc0, 0x01030022, 0x0001c060,
    0x00000140, 0x00000120, 0xa13d0040, 0x0ff02603,
    0xa13f0040, 0x050e0703, 0x00030069, 0x4a058660,
    0x02462605, 0x00000005, 0x00031b65, 0x3e058220,
    0x02463d05, 0xffffff00, 0x00031b70, 0x40050220,
    0x52463f05, 0x00440706, 0x00033461, 0x1f060220,
    0x00343f05, 0x00000000, 0xa14b1c40, 0x03f04a03,
    0x00031b40, 0x41052660, 0x06464005, 0x00440726,
    0x00031a65, 0x4c058220, 0x02464b05, 0xffffffc0,
    0x00031a61, 0x1f260220, 0x00344105, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034431, 0x430c0000, 0xfb041f14, 0x00040000,
    0xa1442440, 0x0ff04303, 0x00031965, 0x45058220,
    0x02464405, 0xffffff00, 0xa1461940, 0x45003e02,
    0x61471941, 0x00c04602, 0xa1481940, 0x03f04703,
    0x00031965, 0x49058220, 0x02464805, 0xffffffc0,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa1301940, 0x4c004902, 0x00030024, 0x0001c060,
    0x00000030, 0x00000030, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00031a61, 0x30054220,
    0x00000000, 0x00000000, 0x00030025, 0x00004600,
    0x00000000, 0x000000c8, 0xa14d0040, 0x00ce0703,
    0x00031970, 0x4e050220, 0x52464d05, 0x00440706,
    0x00033461, 0x20060220, 0x00344d05, 0x00000000,
    0x00031a40, 0x4f052660, 0x06464e05, 0x00440726,
    0x00031961, 0x20260220, 0x00344f05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034531, 0x510c0000, 0xfb042014, 0x00040000,
    0x00032569, 0x52058660, 0x02465105, 0x00000002,
    0xa1531940, 0x03305203, 0x00031965, 0x54058220,
    0x02465305, 0xffffffc0, 0xa1551940, 0x34005402,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00031952, 0x31040e68, 0x0e0e5505, 0x30053705,
    0x00030024, 0x0001c060, 0x00000030, 0x00000030,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00031a61, 0x31054220, 0x00000000, 0x00000000,
    0x00030025, 0x00004600, 0x00000000, 0x00000010,
    0xa1561a40, 0x31002902, 0xa1580040, 0x00ce0703,
    0xa1640040, 0x09ce0703, 0xa16e0040, 0x0a4e0703,
    0x30571c70, 0x29005603, 0x00031c70, 0x59050220,
    0x52465805, 0x00440706, 0x00033561, 0x21060220,
    0x00345805, 0x00000000, 0x00031d61, 0x23060220,
    0x00346405, 0x00000000, 0x00031d61, 0x25060220,
    0x00346e05, 0x00000000, 0x00031c40, 0x5a052660,
    0x06465905, 0x00440726, 0x00031961, 0x21260220,
    0x00345a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034631, 0x5c0c0000,
    0xfb042114, 0x00040000, 0xa15d2640, 0xffd05c03,
    0x00030069, 0x5e058660, 0x02465c05, 0x00000006,
    0xe1601a68, 0x01a05d03, 0xa15f1a40, 0xf4005e03,
    0x00031a52, 0x63042e68, 0x0e0e5705, 0x60052b05,
    0xa1611a40, 0x5f005602, 0x30621970, 0x56006103,
    0xf0650070, 0x09c06403, 0x00031940, 0x66052660,
    0x06466505, 0x00440726, 0x00031961, 0x23260220,
    0x00346605, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034731, 0x680c0000,
    0xfb042314, 0x00040000, 0x00032769, 0x69058660,
    0x02466805, 0x00000006, 0xe16a0068, 0x01a06803,
    0xa16b1a40, 0x69006102, 0x00031a52, 0x0a042e68,
    0x0e0e6205, 0x6a056305, 0x306c1a70, 0x61006b03,
    0xf06f0070, 0x0a406e03, 0x00031940, 0x70052660,
    0x06466f05, 0x00440726, 0x00031961, 0x25260220,
    0x00347005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034831, 0x720c0000,
    0xfb042514, 0x00040000, 0x00032869, 0x73058660,
    0x02467205, 0x00000003, 0xe1740068, 0x01d07203,
    0xa1751a40, 0x03f07303, 0x30761970, 0x73007503,
    0x00030065, 0x78058220, 0x02467505, 0xffffffc0,
    0xa1771a40, 0x74027602, 0xa1791a40, 0x78006b02,
    0x00031a52, 0x0b042e68, 0x0e0e6c05, 0x77050a05,
    0x307a1a70, 0x6b007903, 0xa17c0040, 0x03f07903,
    0x307d1970, 0x79007c03, 0x00033865, 0x26058220,
    0x02467c05, 0xffffffc0, 0x00031a52, 0x27042e68,
    0x0e2e7a05, 0x7d050b05, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00034931, 0x00000000,
    0xfb0c0314, 0x000c2614, 0x80030061, 0x7e050220,
    0x00460005, 0x00000000, 0x80030931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_postbuild_info_compacted_size = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 2080,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_postbuild_info_compacted_size_relocs,
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
const char *gfx125_bvh_postbuild_info_compacted_size_sha1 = "3789498e2f071ca2254447c6cadabecfba2ad3c8";

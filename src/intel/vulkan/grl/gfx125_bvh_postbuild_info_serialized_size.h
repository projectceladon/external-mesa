#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_postbuild_info_serialized_size_relocs[] = {
};
static const u_printf_info gfx125_bvh_postbuild_info_serialized_size_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_postbuild_info_serialized_size_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g8<1>UD         g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g1UD            g8UD            nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(8)          g89<1>D         g2<0,1,0>D      156D            { align1 1Q compacted };
add(8)          g106<1>D        g2<0,1,0>D      32D             { align1 1Q compacted };
add(8)          g27<1>D         g2<0,1,0>D      16D             { align1 1Q compacted };
cmp.l.f0.0(8)   g37<1>UD        g89<1,1,0>UD    0x0000009cUD    { align1 1Q I@3 compacted };
mov(8)          g12<2>UD        g89<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g120<1>UD       g106<1,1,0>UD   0x00000020UD    { align1 1Q I@4 compacted };
mov(8)          g18<2>UD        g106<4,4,1>UD                   { align1 1Q };
mov(8)          g30<2>UD        g27<4,4,1>UD                    { align1 1Q I@5 };
cmp.l.f0.0(8)   g28<1>UD        g27<1,1,0>UD    0x00000010UD    { align1 1Q compacted };
add(8)          g101<1>D        -g37<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@6 compacted };
add(8)          g17<1>D         -g120<1,1,0>D   g2.1<0,1,0>D    { align1 1Q I@5 compacted };
add(8)          g29<1>D         -g28<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@3 compacted };
mov(8)          g12.1<2>UD      g101<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g18.1<2>UD      g17<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g30.1<2>UD      g29<4,4,1>UD                    { align1 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(8)         g5UD            g12UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(8)         g19UD           g18UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g31UD           g30UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $3 };
shl(8)          g13<1>D         g5<8,8,1>D      0x00000003UD    { align1 1Q $1.dst };
shr(8)          g43<1>UD        g5<1,1,0>UD     0x0000001dUD    { align1 1Q compacted };
add(8)          g23<1>D         g20<1,1,0>D     -g19<1,1,0>D    { align1 1Q $2.dst compacted };
add(8)          g35<1>D         g34<1,1,0>D     -g33<1,1,0>D    { align1 1Q $3.dst compacted };
add(8)          g41<1>D         g32<1,1,0>D     -g31<1,1,0>D    { align1 1Q $3.dst compacted };
shr(8)          g24<1>UD        g23<1,1,0>UD    0x00000001UD    { align1 1Q I@3 compacted };
shr(8)          g26<1>UD        g23<1,1,0>UD    0x0000001aUD    { align1 1Q compacted };
shl(8)          g36<1>D         g35<8,8,1>D     0x00000006UD    { align1 1Q I@4 };
shr(8)          g10<1>UD        g35<1,1,0>UD    0x0000001aUD    { align1 1Q compacted };
shl(8)          g42<1>D         g41<8,8,1>D     0x00000006UD    { align1 1Q I@5 };
shr(8)          g14<1>UD        g41<1,1,0>UD    0x0000001aUD    { align1 1Q compacted };
shl(8)          g25<1>D         g24<8,8,1>D     0x00000007UD    { align1 1Q I@6 };
add(8)          g38<1>D         g25<1,1,0>D     g36<1,1,0>D     { align1 1Q I@1 compacted };
cmp.l.f0.0(8)   g39<1>UD        g38<1,1,0>UD    g25<1,1,0>UD    { align1 1Q I@1 compacted };
add(8)          g44<1>D         g38<1,1,0>D     g42<1,1,0>D     { align1 1Q I@5 compacted };
add3(8)         g40<1>D         g26<8,8,1>D     g10<8,8,1>D     -g39<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g45<1>UD        g44<1,1,0>UD    g38<1,1,0>UD    { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   null<1>UD       g21<8,8,1>UD    g22<8,8,1>UD    { align1 1Q $2.dst };
add3(8)         g46<1>D         g40<8,8,1>D     g14<8,8,1>D     -g45<1,1,1>D { align1 1Q I@2 };
(+f0.0) if(8)   JIP:  LABEL1          UIP:  LABEL0              { align1 1Q };
add(8)          g47<1>D         g2<0,1,0>D      64D             { align1 1Q compacted };
add(8)          g59<1>D         g2<0,1,0>D      88D             { align1 1Q compacted };
cmp.l.f0.0(8)   g48<1>UD        g47<1,1,0>UD    g2<0,1,0>UD     { align1 1Q I@2 compacted };
mov(8)          g50<2>UD        g47<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g60<1>UD        g59<1,1,0>UD    g2<0,1,0>UD     { align1 1Q I@3 compacted };
mov(8)          g62<2>UD        g59<4,4,1>UD                    { align1 1Q };
add(8)          g49<1>D         -g48<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@4 compacted };
add(8)          g61<1>D         -g60<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@3 compacted };
mov(8)          g50.1<2>UD      g49<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g62.1<2>UD      g61<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(8)         g51UD           g50UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g63UD           g62UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $5 };
mul(8)          g53<1>D         g51<1,1,0>D     12W             { align1 1Q $4.dst compacted };
shl(8)          g56<1>D         g52<8,8,1>D     0x00000003UD    { align1 1Q $4.dst };
cmp.l.f0.0(8)   null<1>UD       g21<8,8,1>UD    g63<8,8,1>UD    { align1 1Q $5.dst };
add(8)          g54<1>D         g53<1,1,0>D     63D             { align1 1Q I@3 compacted };
add(8)          g57<1>D         g56<1,1,0>D     63D             { align1 1Q I@3 compacted };
and(8)          g55<1>UD        g54<8,8,1>UD    0xffffffc0UD    { align1 1Q I@2 };
and(8)          g58<1>UD        g57<8,8,1>UD    0xffffffc0UD    { align1 1Q I@2 };
(+f0.0) if(8)   JIP:  LABEL3          UIP:  LABEL2              { align1 1Q };
add(8)          g64<1>D         g41<1,1,0>D     255D            { align1 1Q compacted };
add(8)          g66<1>D         g2<0,1,0>D      80D             { align1 1Q compacted };
shl(8)          g77<1>D         g41<8,8,1>D     0x00000005UD    { align1 1Q };
and(8)          g65<1>UD        g64<8,8,1>UD    0xffffff00UD    { align1 1Q I@3 };
cmp.l.f0.0(8)   g67<1>UD        g66<1,1,0>UD    g2<0,1,0>UD     { align1 1Q I@3 compacted };
mov(8)          g69<2>UD        g66<4,4,1>UD                    { align1 1Q };
add(8)          g78<1>D         g77<1,1,0>D     63D             { align1 1Q I@4 compacted };
add(8)          g68<1>D         -g67<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@3 compacted };
and(8)          g79<1>UD        g78<8,8,1>UD    0xffffffc0UD    { align1 1Q I@2 };
mov(8)          g69.1<2>UD      g68<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g70UD           g69UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $6 };
add(8)          g71<1>D         g70<1,1,0>D     255D            { align1 1Q $6.dst compacted };
and(8)          g72<1>UD        g71<8,8,1>UD    0xffffff00UD    { align1 1Q I@1 };
add(8)          g73<1>D         g65<1,1,0>D     g72<1,1,0>D     { align1 1Q I@1 compacted };
mul(8)          g74<1>D         g73<1,1,0>D     12W             { align1 1Q I@1 compacted };
add(8)          g75<1>D         g74<1,1,0>D     63D             { align1 1Q I@1 compacted };
and(8)          g76<1>UD        g75<8,8,1>UD    0xffffffc0UD    { align1 1Q I@1 };
add(8)          g7<1>D          g76<1,1,0>D     g79<1,1,0>D     { align1 1Q I@1 compacted };
else(8)         JIP:  LABEL2          UIP:  LABEL2              { align1 1Q };

LABEL3:
mov(8)          g7<1>UD         0x00000000UD                    { align1 1Q I@2 };

LABEL2:
endif(8)        JIP:  LABEL4                                    { align1 1Q };
add(8)          g80<1>D         g2<0,1,0>D      12D             { align1 1Q compacted };
cmp.l.f0.0(8)   g81<1>UD        g80<1,1,0>UD    g2<0,1,0>UD     { align1 1Q I@1 compacted };
mov(8)          g83<2>UD        g80<4,4,1>UD                    { align1 1Q };
add(8)          g82<1>D         -g81<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@2 compacted };
mov(8)          g83.1<2>UD      g82<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g84UD           g83UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $7 };
shl(8)          g85<1>D         g84<8,8,1>D     0x00000002UD    { align1 1Q $7.dst };
add(8)          g86<1>D         g85<1,1,0>D     51D             { align1 1Q I@1 compacted };
and(8)          g87<1>UD        g86<8,8,1>UD    0xffffffc0UD    { align1 1Q I@1 };
add(8)          g88<1>D         g87<1,1,0>D     g55<1,1,0>D     { align1 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add3(8)         g8<1>D          g88<8,8,1>D     g58<8,8,1>D     g7<1,1,1>D { align1 1Q I@1 };

LABEL4:
else(8)         JIP:  LABEL0          UIP:  LABEL0              { align1 1Q };

LABEL1:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(8)          g8<1>UD         0x00000000UD                    { align1 1Q };

LABEL0:
endif(8)        JIP:  LABEL5                                    { align1 1Q };

LABEL5:
add(8)          g9<1>D          g44<1,1,0>D     g8<1,1,0>D      { align1 1Q I@2 compacted };
add(8)          g91<1>D         g2<0,1,0>D      12D             { align1 1Q compacted };
shl(8)          g102<1>D        g5<8,8,1>D      0x00000006UD    { align1 1Q };
shr(8)          g103<1>UD       g5<1,1,0>UD     0x0000001aUD    { align1 1Q compacted };
add(8)          g107<1>D        g2<0,1,0>D      164D            { align1 1Q compacted };
add(8)          g125<1>D        g13<1,1,0>D     56D             { align1 1Q compacted };
mov(8)          g6<1>UD         0x00000000UD                    { align1 1Q };
cmp.l.f0.0(8)   g90<1>UD        g9<1,1,0>UD     g44<1,1,0>UD    { align1 1Q I@7 compacted };
mov(8)          g94<2>UD        g91<4,4,1>UD                    { align1 1Q I@7 };
cmp.l.f0.0(8)   g92<1>UD        g91<1,1,0>UD    g2<0,1,0>UD     { align1 1Q compacted };
mov(8)          g110<2>UD       g107<4,4,1>UD                   { align1 1Q I@6 };
mov(8)          g7.1<2>D        g2.3<0,1,0>D                    { align1 1Q };
add(8)          g93<1>D         -g92<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@3 compacted };
mov(8)          g7<2>D          g2.2<0,1,0>D                    { align1 1Q I@2 };
mov(8)          g94.1<2>UD      g93<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g95UD           g94UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $8 };
add(8)          g96<1>D         g95<1,1,0>D     -3D             { align1 1Q $8.dst compacted };
shl(8)          g97<1>D         g95<8,8,1>D     0x00000006UD    { align1 1Q };
shr(8)          g98<1>UD        g96<1,1,0>UD    0x0000001aUD    { align1 1Q I@2 compacted };
add3(8)         g99<1>D         65344W          g97<8,8,1>D     g9<1,1,1>D { align1 1Q I@2 };
add3(8)         g11<1>D         -g90<8,8,1>D    g46<8,8,1>D     g98<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g100<1>UD       g99<1,1,0>UD    g9<1,1,0>UD     { align1 1Q I@2 compacted };
add(8)          g104<1>D        g99<1,1,0>D     g102<1,1,0>D    { align1 1Q compacted };
add3(8)         g15<1>D         -g100<8,8,1>D   g11<8,8,1>D     g103<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g105<1>UD       g104<1,1,0>UD   g99<1,1,0>UD    { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g108<1>UD       g107<1,1,0>UD   0x000000a4UD    { align1 1Q compacted };
add(8)          g109<1>D        -g108<1,1,0>D   g2.1<0,1,0>D    { align1 1Q I@1 compacted };
mov(8)          g110.1<2>UD     g109<4,4,1>UD                   { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g111UD          g110UD          nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $9 };
shl(8)          g112<1>D        g111<8,8,1>D    0x00000003UD    { align1 1Q $9.dst };
shr(8)          g113<1>UD       g111<1,1,0>UD   0x0000001dUD    { align1 1Q compacted };
add(8)          g114<1>D        g112<1,1,0>D    63D             { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g115<1>UD       g114<1,1,0>UD   g112<1,1,0>UD   { align1 1Q I@1 compacted };
and(8)          g117<1>UD       g114<8,8,1>UD   0xffffffc0UD    { align1 1Q };
add(8)          g116<1>D        -g115<1,1,0>D   g113<1,1,0>D    { align1 1Q I@2 compacted };
add(8)          g118<1>D        g104<1,1,0>D    g117<1,1,0>D    { align1 1Q I@2 compacted };
add3(8)         g16<1>D         -g105<8,8,1>D   g15<8,8,1>D     g116<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g119<1>UD       g118<1,1,0>UD   g104<1,1,0>UD   { align1 1Q I@2 compacted };
add(8)          g121<1>D        g118<1,1,0>D    255D            { align1 1Q compacted };
cmp.l.f0.0(8)   g122<1>UD       g121<1,1,0>UD   0x000000ffUD    { align1 1Q I@1 compacted };
and(8)          g124<1>UD       g121<8,8,1>UD   0xffffffc0UD    { align1 1Q };
cmp.l.f0.0(8)   g126<1>UD       g125<1,1,0>UD   g13<1,1,0>UD    { align1 1Q compacted };
add3(8)         g123<1>D        -g119<8,8,1>D   g16<8,8,1>D     -g122<1,1,1>D { align1 1Q I@3 };
add(8)          g3<1>D          g125<1,1,0>D    g124<1,1,0>D    { align1 1Q I@3 compacted };
add(8)          g127<1>D        -g126<1,1,0>D   g43<1,1,0>D     { align1 1Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cmp.l.f0.0(8)   g1<1>UD         g3<1,1,0>UD     g125<1,1,0>UD   { align1 1Q I@2 compacted };
add3(8)         g4<1>D          g127<8,8,1>D    g123<8,8,1>D    -g1<1,1,1>D { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g7UD            g3UD            0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $10 };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(8)         nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1Q A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_postbuild_info_serialized_size_code[] = {
    0x80000065, 0x08058220, 0x02000004, 0xffffffc0,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00080c, 0x00340000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa1590040, 0x09c10203, 0xa16a0040, 0x02010203,
    0xa11b0040, 0x01010203, 0xf0251b70, 0x09c05903,
    0x00030061, 0x0c060220, 0x00345905, 0x00000000,
    0xf0781c70, 0x02006a03, 0x00030061, 0x12060220,
    0x00346a05, 0x00000000, 0x00031d61, 0x1e060220,
    0x00341b05, 0x00000000, 0xf01c0070, 0x01001b03,
    0xa1651e40, 0x02122512, 0xa1111d40, 0x02127812,
    0xa11d1b40, 0x02121c12, 0x00031b61, 0x0c260220,
    0x00346505, 0x00000000, 0x00031b61, 0x12260220,
    0x00341105, 0x00000000, 0x00031b61, 0x1e260220,
    0x00341d05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00034131, 0x050c0000,
    0xfb000c14, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00034231, 0x13240000,
    0xfb001214, 0x000c0000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034331, 0x1f240000,
    0xfb001e14, 0x000c0000, 0x00032169, 0x0d058660,
    0x02460505, 0x00000003, 0xe12b0068, 0x01d00503,
    0xa1172240, 0x13201402, 0xa1232340, 0x21202202,
    0xa1292340, 0x1f202002, 0xe1181b68, 0x00101703,
    0xe11a0068, 0x01a01703, 0x00031c69, 0x24058660,
    0x02462305, 0x00000006, 0xe10a0068, 0x01a02303,
    0x00031d69, 0x2a058660, 0x02462905, 0x00000006,
    0xe10e0068, 0x01a02903, 0x00031e69, 0x19058660,
    0x02461805, 0x00000007, 0xa1261940, 0x24001902,
    0x30271970, 0x19002603, 0xa12c1d40, 0x2a002602,
    0x00031a52, 0x28040e68, 0x0e2e1a05, 0x27050a05,
    0x302d1a70, 0x26002c03, 0x00032270, 0x00010220,
    0x52461505, 0x00461605, 0x00031a52, 0x2e040e68,
    0x0e2e2805, 0x2d050e05, 0x01030022, 0x0001c060,
    0x00000320, 0x000002f0, 0xa12f0040, 0x04010203,
    0xa13b0040, 0x05810203, 0x30301a70, 0x02102f03,
    0x00030061, 0x32060220, 0x00342f05, 0x00000000,
    0x303c1b70, 0x02103b03, 0x00030061, 0x3e060220,
    0x00343b05, 0x00000000, 0xa1311c40, 0x02123012,
    0xa13d1b40, 0x02123c12, 0x00031a61, 0x32260220,
    0x00343105, 0x00000000, 0x00031a61, 0x3e260220,
    0x00343d05, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00034431, 0x33140000,
    0xfb003214, 0x00040000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034531, 0x3f0c0000,
    0xfb003e14, 0x00000000, 0x61352441, 0x00c03302,
    0x00032469, 0x38058660, 0x02463405, 0x00000003,
    0x00032570, 0x00010220, 0x52461505, 0x00463f05,
    0xa1361b40, 0x03f03503, 0xa1391b40, 0x03f03803,
    0x00031a65, 0x37058220, 0x02463605, 0xffffffc0,
    0x00031a65, 0x3a058220, 0x02463905, 0xffffffc0,
    0x01030022, 0x0001c060, 0x00000110, 0x00000100,
    0xa1400040, 0x0ff02903, 0xa1420040, 0x05010203,
    0x00030069, 0x4d058660, 0x02462905, 0x00000005,
    0x00031b65, 0x41058220, 0x02464005, 0xffffff00,
    0x30431b70, 0x02104203, 0x00030061, 0x45060220,
    0x00344205, 0x00000000, 0xa14e1c40, 0x03f04d03,
    0xa1441b40, 0x02124312, 0x00031a65, 0x4f058220,
    0x02464e05, 0xffffffc0, 0x00031a61, 0x45260220,
    0x00344405, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034631, 0x460c0000,
    0xfb004514, 0x00000000, 0xa1472640, 0x0ff04603,
    0x00031965, 0x48058220, 0x02464705, 0xffffff00,
    0xa1491940, 0x48004102, 0x614a1941, 0x00c04902,
    0xa14b1940, 0x03f04a03, 0x00031965, 0x4c058220,
    0x02464b05, 0xffffffc0, 0xa1071940, 0x4f004c02,
    0x00030024, 0x0001c060, 0x00000020, 0x00000020,
    0x00031a61, 0x07054220, 0x00000000, 0x00000000,
    0x00030025, 0x00004600, 0x00000000, 0x000000b8,
    0xa1500040, 0x00c10203, 0x30511970, 0x02105003,
    0x00030061, 0x53060220, 0x00345005, 0x00000000,
    0xa1521a40, 0x02125112, 0x00031961, 0x53260220,
    0x00345205, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034731, 0x540c0000,
    0xfb005314, 0x00000000, 0x00032769, 0x55058660,
    0x02465405, 0x00000002, 0xa1561940, 0x03305503,
    0x00031965, 0x57058220, 0x02465605, 0xffffffc0,
    0xa1581940, 0x37005702, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00031952, 0x08040e68,
    0x0e0e5805, 0x07053a05, 0x00030024, 0x0001c060,
    0x00000040, 0x00000040, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x08054220,
    0x00000000, 0x00000000, 0x00030025, 0x00004600,
    0x00000000, 0x00000010, 0xa1091a40, 0x08002c02,
    0xa15b0040, 0x00c10203, 0x00030069, 0x66058660,
    0x02460505, 0x00000006, 0xe1670068, 0x01a00503,
    0xa16b0040, 0x0a410203, 0xa17d0040, 0x03800d03,
    0x00030061, 0x06054220, 0x00000000, 0x00000000,
    0x305a1f70, 0x2c000903, 0x00031f61, 0x5e060220,
    0x00345b05, 0x00000000, 0x305c0070, 0x02105b03,
    0x00031e61, 0x6e060220, 0x00346b05, 0x00000000,
    0x00030061, 0x07260660, 0x00000264, 0x00000000,
    0xa15d1b40, 0x02125c12, 0x00031a61, 0x07060660,
    0x00000244, 0x00000000, 0x00031a61, 0x5e260220,
    0x00345d05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034831, 0x5f0c0000,
    0xfb005e14, 0x00000000, 0xa1602840, 0xffd05f03,
    0x00030069, 0x61058660, 0x02465f05, 0x00000006,
    0xe1621a68, 0x01a06003, 0x00031a52, 0x63044560,
    0x0e0eff40, 0x09056105, 0x00031a52, 0x0b042e68,
    0x0e0e5a05, 0x62052e05, 0x30641a70, 0x09006303,
    0xa1680040, 0x66006302, 0x00031a52, 0x0f042e68,
    0x0e0e6405, 0x67050b05, 0x30691a70, 0x63006803,
    0xf06c0070, 0x0a406b03, 0xa16d1940, 0x02126c12,
    0x00031961, 0x6e260220, 0x00346d05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034931, 0x6f0c0000, 0xfb006e14, 0x00000000,
    0x00032969, 0x70058660, 0x02466f05, 0x00000003,
    0xe1710068, 0x01d06f03, 0xa1721a40, 0x03f07003,
    0x30731970, 0x70007203, 0x00030065, 0x75058220,
    0x02467205, 0xffffffc0, 0xa1741a40, 0x71027302,
    0xa1761a40, 0x75006802, 0x00031a52, 0x10042e68,
    0x0e0e6905, 0x74050f05, 0x30771a70, 0x68007603,
    0xa1790040, 0x0ff07603, 0xf07a1970, 0x0ff07903,
    0x00030065, 0x7c058220, 0x02467905, 0xffffffc0,
    0x307e0070, 0x0d007d03, 0x00031b52, 0x7b042e68,
    0x0e2e7705, 0x7a051005, 0xa1031b40, 0x7c007d02,
    0xa17f1b40, 0x2b027e02, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x30011a70, 0x7d000303,
    0x00031952, 0x04040e68, 0x0e2e7f05, 0x01057b05,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034a31, 0x00000000, 0xfb080714, 0x000c0324,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80030931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_postbuild_info_serialized_size = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 2000,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_postbuild_info_serialized_size_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_postbuild_info_serialized_size_printfs,
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
   .args = gfx125_bvh_postbuild_info_serialized_size_args,
   .code = gfx125_bvh_postbuild_info_serialized_size_code,
};
const char *gfx125_bvh_postbuild_info_serialized_size_sha1 = "a4ddfb4bf549ccc7986fd905939ec18fc4053de3";

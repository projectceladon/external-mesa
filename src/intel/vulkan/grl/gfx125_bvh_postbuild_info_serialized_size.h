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

and(1)          g17<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g1UD            g17UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(8)          g9<1>D          g2<0,1,0>D      156D            { align1 1Q compacted };
add(8)          g14<1>D         g2<0,1,0>D      32D             { align1 1Q compacted };
add(8)          g25<1>D         g2<0,1,0>D      16D             { align1 1Q compacted };
cmp.l.f0.0(8)   g10<1>UD        g9<1,1,0>UD     0x0000009cUD    { align1 1Q I@3 compacted };
mov(8)          g120<2>UD       g9<4,4,1>UD                     { align1 1Q };
cmp.l.f0.0(8)   g15<1>UD        g14<1,1,0>UD    0x00000020UD    { align1 1Q I@4 compacted };
mov(8)          g122<2>UD       g14<4,4,1>UD                    { align1 1Q };
mov(8)          g124<2>UD       g25<4,4,1>UD                    { align1 1Q I@5 };
cmp.l.f0.0(8)   g26<1>UD        g25<1,1,0>UD    0x00000010UD    { align1 1Q compacted };
add(8)          g11<1>D         -g10<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@6 compacted };
add(8)          g16<1>D         -g15<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@5 compacted };
add(8)          g27<1>D         -g26<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@3 compacted };
mov(8)          g120.1<2>UD     g11<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g122.1<2>UD     g16<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g124.1<2>UD     g27<4,4,1>UD                    { align1 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(8)         g5UD            g120UD          nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(8)         g17UD           g122UD          nullUD          0x0440f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g28UD           g124UD          nullUD          0x0440f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $3 };
shl(8)          g93<1>D         g5<8,8,1>D      0x00000003UD    { align1 1Q $1.dst };
shr(8)          g34<1>UD        g5<1,1,0>UD     0x0000001dUD    { align1 1Q compacted };
add(8)          g40<1>D         g18<1,1,0>D     -g17<1,1,0>D    { align1 1Q $2.dst compacted };
add(8)          g32<1>D         g31<1,1,0>D     -g30<1,1,0>D    { align1 1Q $3.dst compacted };
add(8)          g38<1>D         g29<1,1,0>D     -g28<1,1,0>D    { align1 1Q $3.dst compacted };
shr(8)          g111<1>UD       g40<1,1,0>UD    0x00000001UD    { align1 1Q I@3 compacted };
shr(8)          g24<1>UD        g40<1,1,0>UD    0x0000001aUD    { align1 1Q compacted };
shl(8)          g33<1>D         g32<8,8,1>D     0x00000006UD    { align1 1Q I@4 };
shr(8)          g13<1>UD        g32<1,1,0>UD    0x0000001aUD    { align1 1Q compacted };
shl(8)          g39<1>D         g38<8,8,1>D     0x00000006UD    { align1 1Q I@5 };
shr(8)          g21<1>UD        g38<1,1,0>UD    0x0000001aUD    { align1 1Q compacted };
shl(8)          g23<1>D         g111<8,8,1>D    0x00000007UD    { align1 1Q I@6 };
add(8)          g35<1>D         g23<1,1,0>D     g33<1,1,0>D     { align1 1Q I@1 compacted };
cmp.l.f0.0(8)   g36<1>UD        g35<1,1,0>UD    g23<1,1,0>UD    { align1 1Q I@1 compacted };
add(8)          g41<1>D         g35<1,1,0>D     g39<1,1,0>D     { align1 1Q I@5 compacted };
add3(8)         g37<1>D         g24<8,8,1>D     g13<8,8,1>D     -g36<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g42<1>UD        g41<1,1,0>UD    g35<1,1,0>UD    { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   null<1>UD       g19<8,8,1>UD    g20<8,8,1>UD    { align1 1Q $2.dst };
add3(8)         g43<1>D         g37<8,8,1>D     g21<8,8,1>D     -g42<1,1,1>D { align1 1Q I@2 };
(+f0.0) if(8)   JIP:  LABEL1          UIP:  LABEL0              { align1 1Q };
add(8)          g44<1>D         g2<0,1,0>D      64D             { align1 1Q compacted };
add(8)          g55<1>D         g2<0,1,0>D      88D             { align1 1Q compacted };
cmp.l.f0.0(8)   g45<1>UD        g44<1,1,0>UD    g2<0,1,0>UD     { align1 1Q I@2 compacted };
mov(8)          g125<2>UD       g44<4,4,1>UD                    { align1 1Q $3.src };
cmp.l.f0.0(8)   g56<1>UD        g55<1,1,0>UD    g2<0,1,0>UD     { align1 1Q I@3 compacted };
mov(8)          g7<2>UD         g55<4,4,1>UD                    { align1 1Q };
add(8)          g46<1>D         -g45<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@4 compacted };
add(8)          g57<1>D         -g56<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@3 compacted };
mov(8)          g125.1<2>UD     g46<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g7.1<2>UD       g57<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(8)         g47UD           g125UD          nullUD          0x04203582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g58UD           g7UD            nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $4 };
mul(8)          g49<1>D         g47<1,1,0>D     12W             { align1 1Q $3.dst compacted };
shl(8)          g52<1>D         g48<8,8,1>D     0x00000003UD    { align1 1Q $3.dst };
cmp.l.f0.0(8)   null<1>UD       g19<8,8,1>UD    g58<8,8,1>UD    { align1 1Q $4.dst };
add(8)          g50<1>D         g49<1,1,0>D     63D             { align1 1Q I@3 compacted };
add(8)          g53<1>D         g52<1,1,0>D     63D             { align1 1Q I@3 compacted };
and(8)          g51<1>UD        g50<8,8,1>UD    0xffffffc0UD    { align1 1Q I@2 };
and(8)          g54<1>UD        g53<8,8,1>UD    0xffffffc0UD    { align1 1Q I@2 };
(+f0.0) if(8)   JIP:  LABEL3          UIP:  LABEL2              { align1 1Q };
add(8)          g59<1>D         g38<1,1,0>D     255D            { align1 1Q compacted };
add(8)          g61<1>D         g2<0,1,0>D      80D             { align1 1Q compacted };
shl(8)          g71<1>D         g38<8,8,1>D     0x00000005UD    { align1 1Q };
and(8)          g60<1>UD        g59<8,8,1>UD    0xffffff00UD    { align1 1Q I@3 };
cmp.l.f0.0(8)   g62<1>UD        g61<1,1,0>UD    g2<0,1,0>UD     { align1 1Q I@3 compacted };
mov(8)          g8<2>UD         g61<4,4,1>UD                    { align1 1Q $4.src };
add(8)          g72<1>D         g71<1,1,0>D     63D             { align1 1Q I@4 compacted };
add(8)          g63<1>D         -g62<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@3 compacted };
and(8)          g73<1>UD        g72<8,8,1>UD    0xffffffc0UD    { align1 1Q I@2 };
mov(8)          g8.1<2>UD       g63<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g64UD           g8UD            nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $4 };
add(8)          g65<1>D         g64<1,1,0>D     255D            { align1 1Q $4.dst compacted };
and(8)          g66<1>UD        g65<8,8,1>UD    0xffffff00UD    { align1 1Q I@1 };
add(8)          g67<1>D         g60<1,1,0>D     g66<1,1,0>D     { align1 1Q I@1 compacted };
mul(8)          g68<1>D         g67<1,1,0>D     12W             { align1 1Q I@1 compacted };
add(8)          g69<1>D         g68<1,1,0>D     63D             { align1 1Q I@1 compacted };
and(8)          g70<1>UD        g69<8,8,1>UD    0xffffffc0UD    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(8)          g7<1>D          g70<1,1,0>D     g73<1,1,0>D     { align1 1Q I@1 compacted };
else(8)         JIP:  LABEL2          UIP:  LABEL2              { align1 1Q };

LABEL3:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g7<1>UD         0x00000000UD                    { align1 1Q I@2 };

LABEL2:
endif(8)        JIP:  LABEL4                                    { align1 1Q };
add(8)          g74<1>D         g2<0,1,0>D      12D             { align1 1Q compacted };
cmp.l.f0.0(8)   g75<1>UD        g74<1,1,0>UD    g2<0,1,0>UD     { align1 1Q I@1 compacted };
mov(8)          g9<2>UD         g74<4,4,1>UD                    { align1 1Q $4.src };
add(8)          g76<1>D         -g75<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@2 compacted };
mov(8)          g9.1<2>UD       g76<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g77UD           g9UD            nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $5 };
shl(8)          g78<1>D         g77<8,8,1>D     0x00000002UD    { align1 1Q $5.dst };
add(8)          g79<1>D         g78<1,1,0>D     51D             { align1 1Q I@1 compacted };
and(8)          g80<1>UD        g79<8,8,1>UD    0xffffffc0UD    { align1 1Q I@1 };
add(8)          g81<1>D         g80<1,1,0>D     g51<1,1,0>D     { align1 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add3(8)         g8<1>D          g81<8,8,1>D     g54<8,8,1>D     g7<1,1,1>D { align1 1Q I@1 };

LABEL4:
else(8)         JIP:  LABEL0          UIP:  LABEL0              { align1 1Q };

LABEL1:
mov(8)          g8<1>UD         0x00000000UD                    { align1 1Q I@2 };

LABEL0:
endif(8)        JIP:  LABEL5                                    { align1 1Q };

LABEL5:
add(8)          g82<1>D         g41<1,1,0>D     g8<1,1,0>D      { align1 1Q I@2 compacted };
add(8)          g84<1>D         g2<0,1,0>D      12D             { align1 1Q compacted };
shl(8)          g94<1>D         g5<8,8,1>D      0x00000006UD    { align1 1Q };
shr(8)          g95<1>UD        g5<1,1,0>UD     0x0000001aUD    { align1 1Q compacted };
add(8)          g99<1>D         g2<0,1,0>D      164D            { align1 1Q compacted };
add(8)          g116<1>D        g93<1,1,0>D     56D             { align1 1Q compacted };
mov(8)          g6<1>UD         0x00000000UD                    { align1 1Q };
cmp.l.f0.0(8)   g83<1>UD        g82<1,1,0>UD    g41<1,1,0>UD    { align1 1Q I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g10<2>UD        g84<4,4,1>UD                    { align1 1Q I@7 };
cmp.l.f0.0(8)   g85<1>UD        g84<1,1,0>UD    g2<0,1,0>UD     { align1 1Q compacted };
mov(8)          g14<2>UD        g99<4,4,1>UD                    { align1 1Q I@6 };
mov(8)          g16.1<2>D       g2.3<0,1,0>D                    { align1 1Q };
add(8)          g86<1>D         -g85<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@3 compacted };
mov(8)          g16<2>D         g2.2<0,1,0>D                    { align1 1Q I@2 };
mov(8)          g10.1<2>UD      g86<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g87UD           g10UD           nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $6 };
add(8)          g88<1>D         g87<1,1,0>D     -3D             { align1 1Q $6.dst compacted };
shl(8)          g89<1>D         g87<8,8,1>D     0x00000006UD    { align1 1Q };
shr(8)          g90<1>UD        g88<1,1,0>UD    0x0000001aUD    { align1 1Q I@2 compacted };
add3(8)         g91<1>D         65344W          g89<8,8,1>D     g82<1,1,1>D { align1 1Q I@2 };
add3(8)         g12<1>D         -g83<8,8,1>D    g43<8,8,1>D     g90<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g92<1>UD        g91<1,1,0>UD    g82<1,1,0>UD    { align1 1Q I@2 compacted };
add(8)          g96<1>D         g91<1,1,0>D     g94<1,1,0>D     { align1 1Q compacted };
add3(8)         g98<1>D         -g92<8,8,1>D    g12<8,8,1>D     g95<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g97<1>UD        g96<1,1,0>UD    g91<1,1,0>UD    { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g100<1>UD       g99<1,1,0>UD    0x000000a4UD    { align1 1Q compacted };
add(8)          g101<1>D        -g100<1,1,0>D   g2.1<0,1,0>D    { align1 1Q I@1 compacted };
mov(8)          g14.1<2>UD      g101<4,4,1>UD                   { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g102UD          g14UD           nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $7 };
shl(8)          g103<1>D        g102<8,8,1>D    0x00000003UD    { align1 1Q $7.dst };
shr(8)          g104<1>UD       g102<1,1,0>UD   0x0000001dUD    { align1 1Q compacted };
add(8)          g105<1>D        g103<1,1,0>D    63D             { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g106<1>UD       g105<1,1,0>UD   g103<1,1,0>UD   { align1 1Q I@1 compacted };
and(8)          g108<1>UD       g105<8,8,1>UD   0xffffffc0UD    { align1 1Q };
add(8)          g107<1>D        -g106<1,1,0>D   g104<1,1,0>D    { align1 1Q I@2 compacted };
add(8)          g109<1>D        g96<1,1,0>D     g108<1,1,0>D    { align1 1Q I@2 compacted };
add3(8)         g22<1>D         -g97<8,8,1>D    g98<8,8,1>D     g107<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g110<1>UD       g109<1,1,0>UD   g96<1,1,0>UD    { align1 1Q I@2 compacted };
add(8)          g112<1>D        g109<1,1,0>D    255D            { align1 1Q compacted };
cmp.l.f0.0(8)   g113<1>UD       g112<1,1,0>UD   0x000000ffUD    { align1 1Q I@1 compacted };
and(8)          g115<1>UD       g112<8,8,1>UD   0xffffffc0UD    { align1 1Q };
cmp.l.f0.0(8)   g117<1>UD       g116<1,1,0>UD   g93<1,1,0>UD    { align1 1Q compacted };
add3(8)         g114<1>D        -g110<8,8,1>D   g22<8,8,1>D     -g113<1,1,1>D { align1 1Q I@3 };
add(8)          g3<1>D          g116<1,1,0>D    g115<1,1,0>D    { align1 1Q I@3 compacted };
add(8)          g118<1>D        -g117<1,1,0>D   g34<1,1,0>D     { align1 1Q I@3 compacted };
cmp.l.f0.0(8)   g119<1>UD       g3<1,1,0>UD     g116<1,1,0>UD   { align1 1Q I@2 compacted };
add3(8)         g4<1>D          g118<8,8,1>D    g114<8,8,1>D    -g119<1,1,1>D { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g16UD           g3UD            0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1Q $8 };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q $3.src };
send(8)         nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1Q A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_postbuild_info_serialized_size_code[] = {
    0x80000065, 0x11058220, 0x02000004, 0xffffffc0,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00110c, 0x00340000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa1090040, 0x09c10203, 0xa10e0040, 0x02010203,
    0xa1190040, 0x01010203, 0xf00a1b70, 0x09c00903,
    0x00030061, 0x78060220, 0x00340905, 0x00000000,
    0xf00f1c70, 0x02000e03, 0x00030061, 0x7a060220,
    0x00340e05, 0x00000000, 0x00031d61, 0x7c060220,
    0x00341905, 0x00000000, 0xf01a0070, 0x01001903,
    0xa10b1e40, 0x02120a12, 0xa1101d40, 0x02120f12,
    0xa11b1b40, 0x02121a12, 0x00031b61, 0x78260220,
    0x00340b05, 0x00000000, 0x00031b61, 0x7a260220,
    0x00341005, 0x00000000, 0x00031b61, 0x7c260220,
    0x00341b05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00034131, 0x050c0000,
    0xfb047814, 0x00040000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00034231, 0x11240000,
    0xfb047a14, 0x003c0000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034331, 0x1c240000,
    0xfb047c14, 0x003c0000, 0x00032169, 0x5d058660,
    0x02460505, 0x00000003, 0xe1220068, 0x01d00503,
    0xa1282240, 0x11201202, 0xa1202340, 0x1e201f02,
    0xa1262340, 0x1c201d02, 0xe16f1b68, 0x00102803,
    0xe1180068, 0x01a02803, 0x00031c69, 0x21058660,
    0x02462005, 0x00000006, 0xe10d0068, 0x01a02003,
    0x00031d69, 0x27058660, 0x02462605, 0x00000006,
    0xe1150068, 0x01a02603, 0x00031e69, 0x17058660,
    0x02466f05, 0x00000007, 0xa1231940, 0x21001702,
    0x30241970, 0x17002303, 0xa1291d40, 0x27002302,
    0x00031a52, 0x25040e68, 0x0e2e1805, 0x24050d05,
    0x302a1a70, 0x23002903, 0x00032270, 0x00010220,
    0x52461305, 0x00461405, 0x00031a52, 0x2b040e68,
    0x0e2e2505, 0x2a051505, 0x01030022, 0x0001c060,
    0x00000320, 0x00000310, 0xa12c0040, 0x04010203,
    0xa1370040, 0x05810203, 0x302d1a70, 0x02102c03,
    0x00033361, 0x7d060220, 0x00342c05, 0x00000000,
    0x30381b70, 0x02103703, 0x00030061, 0x07060220,
    0x00343705, 0x00000000, 0xa12e1c40, 0x02122d12,
    0xa1391b40, 0x02123812, 0x00031a61, 0x7d260220,
    0x00342e05, 0x00000000, 0x00031a61, 0x07260220,
    0x00343905, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00034331, 0x2f140000,
    0xfb047d14, 0x000c0000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034431, 0x3a0c0000,
    0xfb040714, 0x00040000, 0x61312341, 0x00c02f02,
    0x00032369, 0x34058660, 0x02463005, 0x00000003,
    0x00032470, 0x00010220, 0x52461305, 0x00463a05,
    0xa1321b40, 0x03f03103, 0xa1351b40, 0x03f03403,
    0x00031a65, 0x33058220, 0x02463205, 0xffffffc0,
    0x00031a65, 0x36058220, 0x02463505, 0xffffffc0,
    0x01030022, 0x0001c060, 0x00000130, 0x00000110,
    0xa13b0040, 0x0ff02603, 0xa13d0040, 0x05010203,
    0x00030069, 0x47058660, 0x02462605, 0x00000005,
    0x00031b65, 0x3c058220, 0x02463b05, 0xffffff00,
    0x303e1b70, 0x02103d03, 0x00033461, 0x08060220,
    0x00343d05, 0x00000000, 0xa1481c40, 0x03f04703,
    0xa13f1b40, 0x02123e12, 0x00031a65, 0x49058220,
    0x02464805, 0xffffffc0, 0x00031a61, 0x08260220,
    0x00343f05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034431, 0x400c0000,
    0xfb040814, 0x00040000, 0xa1412440, 0x0ff04003,
    0x00031965, 0x42058220, 0x02464105, 0xffffff00,
    0xa1431940, 0x42003c02, 0x61441941, 0x00c04302,
    0xa1451940, 0x03f04403, 0x00031965, 0x46058220,
    0x02464505, 0xffffffc0, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xa1071940, 0x49004602,
    0x00030024, 0x0001c060, 0x00000030, 0x00000030,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00031a61, 0x07054220, 0x00000000, 0x00000000,
    0x00030025, 0x00004600, 0x00000000, 0x000000b8,
    0xa14a0040, 0x00c10203, 0x304b1970, 0x02104a03,
    0x00033461, 0x09060220, 0x00344a05, 0x00000000,
    0xa14c1a40, 0x02124b12, 0x00031961, 0x09260220,
    0x00344c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034531, 0x4d0c0000,
    0xfb040914, 0x00040000, 0x00032569, 0x4e058660,
    0x02464d05, 0x00000002, 0xa14f1940, 0x03304e03,
    0x00031965, 0x50058220, 0x02464f05, 0xffffffc0,
    0xa1511940, 0x33005002, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00031952, 0x08040e68,
    0x0e0e5105, 0x07053605, 0x00030024, 0x0001c060,
    0x00000020, 0x00000020, 0x00031a61, 0x08054220,
    0x00000000, 0x00000000, 0x00030025, 0x00004600,
    0x00000000, 0x00000010, 0xa1521a40, 0x08002902,
    0xa1540040, 0x00c10203, 0x00030069, 0x5e058660,
    0x02460505, 0x00000006, 0xe15f0068, 0x01a00503,
    0xa1630040, 0x0a410203, 0xa1740040, 0x03805d03,
    0x00030061, 0x06054220, 0x00000000, 0x00000000,
    0x30531f70, 0x29005203, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00031f61, 0x0a060220,
    0x00345405, 0x00000000, 0x30550070, 0x02105403,
    0x00031e61, 0x0e060220, 0x00346305, 0x00000000,
    0x00030061, 0x10260660, 0x00000264, 0x00000000,
    0xa1561b40, 0x02125512, 0x00031a61, 0x10060660,
    0x00000244, 0x00000000, 0x00031a61, 0x0a260220,
    0x00345605, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034631, 0x570c0000,
    0xfb040a14, 0x00040000, 0xa1582640, 0xffd05703,
    0x00030069, 0x59058660, 0x02465705, 0x00000006,
    0xe15a1a68, 0x01a05803, 0x00031a52, 0x5b044560,
    0x0e0eff40, 0x52055905, 0x00031a52, 0x0c042e68,
    0x0e0e5305, 0x5a052b05, 0x305c1a70, 0x52005b03,
    0xa1600040, 0x5e005b02, 0x00031a52, 0x62042e68,
    0x0e0e5c05, 0x5f050c05, 0x30611a70, 0x5b006003,
    0xf0640070, 0x0a406303, 0xa1651940, 0x02126412,
    0x00031961, 0x0e260220, 0x00346505, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034731, 0x660c0000, 0xfb040e14, 0x00040000,
    0x00032769, 0x67058660, 0x02466605, 0x00000003,
    0xe1680068, 0x01d06603, 0xa1691a40, 0x03f06703,
    0x306a1970, 0x67006903, 0x00030065, 0x6c058220,
    0x02466905, 0xffffffc0, 0xa16b1a40, 0x68026a02,
    0xa16d1a40, 0x6c006002, 0x00031a52, 0x16042e68,
    0x0e0e6105, 0x6b056205, 0x306e1a70, 0x60006d03,
    0xa1700040, 0x0ff06d03, 0xf0711970, 0x0ff07003,
    0x00030065, 0x73058220, 0x02467005, 0xffffffc0,
    0x30750070, 0x5d007403, 0x00031b52, 0x72042e68,
    0x0e2e6e05, 0x71051605, 0xa1031b40, 0x73007402,
    0xa1761b40, 0x22027502, 0x30771a70, 0x74000303,
    0x00031952, 0x04040e68, 0x0e2e7605, 0x77057205,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034831, 0x00000000, 0xfb0c1014, 0x003c0324,
    0x80033361, 0x7e050220, 0x00460005, 0x00000000,
    0x80030931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_postbuild_info_serialized_size = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 2016,
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
const char *gfx125_bvh_postbuild_info_serialized_size_sha1 = "b9258e1b32f94fa304baf3a7296c87567907ad4b";

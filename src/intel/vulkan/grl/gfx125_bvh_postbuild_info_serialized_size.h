#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_postbuild_info_serialized_size_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_postbuild_info_serialized_size_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g13<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
add(1)          g51<1>UD        g13<0,1,0>UD    0x00000000UD    { align1 WE_all 1N I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g1UD            g51UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g11.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g46.1<2>F       g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g11<2>F         g2<0,1,0>F                      { align1 1Q F@2 compacted };
mov(8)          g46<2>F         g2.2<0,1,0>F                    { align1 1Q F@2 compacted };
add(8)          g50<1>D         g11<8,4,2>D     156D            { align1 1Q F@2 compacted };
add(8)          g21<1>D         g11<8,4,2>D     32D             { align1 1Q compacted };
add(8)          g35<1>D         g11<8,4,2>D     16D             { align1 1Q compacted };
cmp.l.f0.0(8)   g104<1>UD       g50<1,1,0>UD    0x0000009cUD    { align1 1Q I@3 compacted };
mov(8)          g5<2>UD         g50<4,4,1>UD                    { align1 1Q };
mov(8)          g9<2>UD         g21<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g38<2>UD        g35<4,4,1>UD                    { align1 1Q I@4 };
add(8)          g122<1>D        -g104<8,8,1>D   g11.1<8,4,2>D   { align1 1Q I@4 };
mov(8)          g5.1<2>UD       g122<4,4,1>UD                   { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g7UD            g5UD            nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $1 };
shl(8)          g125<1>D        g7<8,8,1>D      0x00000003UD    { align1 1Q $1.dst };
shr(8)          g17<1>UD        g7<1,1,0>UD     0x0000001dUD    { align1 1Q compacted };
add(8)          g18<1>D         g125<1,1,0>D    56D             { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g19<1>UD        g18<1,1,0>UD    0x00000038UD    { align1 1Q I@1 compacted };
cmp.l.f0.0(8)   g22<1>UD        g21<1,1,0>UD    0x00000020UD    { align1 1Q compacted };
add(8)          g20<1>D         -g19<1,1,0>D    g17<1,1,0>D     { align1 1Q I@2 compacted };
add(8)          g23<1>D         -g22<8,8,1>D    g11.1<8,4,2>D   { align1 1Q I@2 };
mov(8)          g9.1<2>UD       g23<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g24UD           g9UD            nullUD          0x0440f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $2 };
add(8)          g28<1>D         g25<1,1,0>D     -g24<1,1,0>D    { align1 1Q $2.dst compacted };
shr(8)          g29<1>UD        g28<1,1,0>UD    0x00000001UD    { align1 1Q I@1 compacted };
shr(8)          g31<1>UD        g28<1,1,0>UD    0x0000001aUD    { align1 1Q compacted };
shl(8)          g30<1>D         g29<8,8,1>D     0x00000007UD    { align1 1Q I@2 };
add(8)          g32<1>D         g30<1,1,0>D     192D            { align1 1Q I@1 compacted };
cmp.l.f0.0(8)   g33<1>UD        g32<1,1,0>UD    0x000000c0UD    { align1 1Q I@1 compacted };
cmp.l.f0.0(8)   g36<1>UD        g35<1,1,0>UD    0x00000010UD    { align1 1Q compacted };
add(8)          g34<1>D         -g33<1,1,0>D    g31<1,1,0>D     { align1 1Q I@2 compacted };
add(8)          g37<1>D         -g36<8,8,1>D    g11.1<8,4,2>D   { align1 1Q I@2 };
mov(8)          g38.1<2>UD      g37<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g38UD           g38UD           nullUD          0x0440f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $3 };
add(8)          g42<1>D         g41<1,1,0>D     -g40<1,1,0>D    { align1 1Q $3.dst compacted };
add(8)          g48<1>D         g39<1,1,0>D     -g38<1,1,0>D    { align1 1Q $3.dst compacted };
shl(8)          g43<1>D         g42<8,8,1>D     0x00000006UD    { align1 1Q I@2 };
shr(8)          g44<1>UD        g42<1,1,0>UD    0x0000001aUD    { align1 1Q compacted };
shl(8)          g49<1>D         g48<8,8,1>D     0x00000006UD    { align1 1Q I@3 };
shr(8)          g13<1>UD        g48<1,1,0>UD    0x0000001aUD    { align1 1Q compacted };
add(8)          g45<1>D         g32<1,1,0>D     g43<1,1,0>D     { align1 1Q I@4 compacted };
cmp.l.f0.0(8)   g3<1>UD         g45<1,1,0>UD    g32<1,1,0>UD    { align1 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(8)          g51<1>D         g45<1,1,0>D     g49<1,1,0>D     { align1 1Q I@4 compacted };
add3(8)         g4<1>D          g34<8,8,1>D     g44<8,8,1>D     -g3<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g52<1>UD        g51<1,1,0>UD    g45<1,1,0>UD    { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   null<1>UD       g26<8,8,1>UD    g27<8,8,1>UD    { align1 1Q $2.dst };
add3(8)         g53<1>D         g4<8,8,1>D      g13<8,8,1>D     -g52<1,1,1>D { align1 1Q I@2 };
(+f0.0) if(8)   JIP:  LABEL1          UIP:  LABEL0              { align1 1Q };
add(8)          g54<1>D         g11<8,4,2>D     64D             { align1 1Q compacted };
add(8)          g65<1>D         g11<8,4,2>D     88D             { align1 1Q compacted };
cmp.l.f0.0(8)   g55<1>UD        g54<8,8,1>UD    g11<8,4,2>UD    { align1 1Q I@2 };
mov(8)          g39<2>UD        g54<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g66<1>UD        g65<8,8,1>UD    g11<8,4,2>UD    { align1 1Q I@3 };
mov(8)          g41<2>UD        g65<4,4,1>UD                    { align1 1Q };
add(8)          g56<1>D         -g55<8,8,1>D    g11.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g67<1>D         -g66<8,8,1>D    g11.1<8,4,2>D   { align1 1Q I@3 };
mov(8)          g39.1<2>UD      g56<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g41.1<2>UD      g67<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(8)         g57UD           g39UD           nullUD          0x04203582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g68UD           g41UD           nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $5 };
mul(8)          g59<1>D         g57<1,1,0>D     12W             { align1 1Q $4.dst compacted };
shl(8)          g62<1>D         g58<8,8,1>D     0x00000003UD    { align1 1Q $4.dst };
cmp.l.f0.0(8)   null<1>UD       g26<8,8,1>UD    g68<8,8,1>UD    { align1 1Q $5.dst };
add(8)          g60<1>D         g59<1,1,0>D     63D             { align1 1Q I@3 compacted };
add(8)          g63<1>D         g62<1,1,0>D     63D             { align1 1Q I@3 compacted };
and(8)          g61<1>UD        g60<8,8,1>UD    0xffffffc0UD    { align1 1Q I@2 };
and(8)          g64<1>UD        g63<8,8,1>UD    0xffffffc0UD    { align1 1Q I@2 };
(+f0.0) if(8)   JIP:  LABEL3          UIP:  LABEL2              { align1 1Q };
add(8)          g69<1>D         g48<1,1,0>D     255D            { align1 1Q compacted };
add(8)          g71<1>D         g11<8,4,2>D     80D             { align1 1Q compacted };
shl(8)          g81<1>D         g48<8,8,1>D     0x00000005UD    { align1 1Q };
and(8)          g70<1>UD        g69<8,8,1>UD    0xffffff00UD    { align1 1Q I@3 };
cmp.l.f0.0(8)   g72<1>UD        g71<8,8,1>UD    g11<8,4,2>UD    { align1 1Q I@3 };
mov(8)          g42<2>UD        g71<4,4,1>UD                    { align1 1Q $5.src };
add(8)          g82<1>D         g81<1,1,0>D     63D             { align1 1Q I@4 compacted };
add(8)          g73<1>D         -g72<8,8,1>D    g11.1<8,4,2>D   { align1 1Q I@3 };
and(8)          g83<1>UD        g82<8,8,1>UD    0xffffffc0UD    { align1 1Q I@2 };
mov(8)          g42.1<2>UD      g73<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g74UD           g42UD           nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $5 };
add(8)          g75<1>D         g74<1,1,0>D     255D            { align1 1Q $5.dst compacted };
and(8)          g76<1>UD        g75<8,8,1>UD    0xffffff00UD    { align1 1Q I@1 };
add(8)          g77<1>D         g70<1,1,0>D     g76<1,1,0>D     { align1 1Q I@1 compacted };
mul(8)          g78<1>D         g77<1,1,0>D     12W             { align1 1Q I@1 compacted };
add(8)          g79<1>D         g78<1,1,0>D     63D             { align1 1Q I@1 compacted };
and(8)          g80<1>UD        g79<8,8,1>UD    0xffffffc0UD    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(8)          g9<1>D          g80<1,1,0>D     g83<1,1,0>D     { align1 1Q I@1 compacted };
else(8)         JIP:  LABEL2          UIP:  LABEL2              { align1 1Q };

LABEL3:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g9<1>UD         0x00000000UD                    { align1 1Q I@2 };

LABEL2:
endif(8)        JIP:  LABEL4                                    { align1 1Q };
add(8)          g84<1>D         g11<8,4,2>D     12D             { align1 1Q compacted };
cmp.l.f0.0(8)   g85<1>UD        g84<8,8,1>UD    g11<8,4,2>UD    { align1 1Q I@1 };
mov(8)          g43<2>UD        g84<4,4,1>UD                    { align1 1Q $5.src };
add(8)          g86<1>D         -g85<8,8,1>D    g11.1<8,4,2>D   { align1 1Q I@2 };
mov(8)          g43.1<2>UD      g86<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g87UD           g43UD           nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $6 };
shl(8)          g88<1>D         g87<8,8,1>D     0x00000002UD    { align1 1Q $6.dst };
add(8)          g89<1>D         g88<1,1,0>D     51D             { align1 1Q I@1 compacted };
and(8)          g90<1>UD        g89<8,8,1>UD    0xffffffc0UD    { align1 1Q I@1 };
add(8)          g91<1>D         g90<1,1,0>D     g61<1,1,0>D     { align1 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add3(8)         g10<1>D         g91<8,8,1>D     g64<8,8,1>D     g9<1,1,1>D { align1 1Q I@1 };

LABEL4:
else(8)         JIP:  LABEL0          UIP:  LABEL0              { align1 1Q };

LABEL1:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g10<1>UD        0x00000000UD                    { align1 1Q I@2 };

LABEL0:
endif(8)        JIP:  LABEL5                                    { align1 1Q };

LABEL5:
add(8)          g92<1>D         g51<1,1,0>D     g10<1,1,0>D     { align1 1Q I@2 compacted };
add(8)          g94<1>D         g11<8,4,2>D     12D             { align1 1Q compacted };
shl(8)          g105<1>D        g7<8,8,1>D      0x00000006UD    { align1 1Q };
shr(8)          g106<1>UD       g7<1,1,0>UD     0x0000001aUD    { align1 1Q compacted };
add(8)          g110<1>D        g11<8,4,2>D     164D            { align1 1Q compacted };
mov(8)          g8<1>D          0D                              { align1 1Q };
cmp.l.f0.0(8)   g93<1>UD        g92<1,1,0>UD    g51<1,1,0>UD    { align1 1Q I@6 compacted };
cmp.l.f0.0(8)   g95<1>UD        g94<8,8,1>UD    g11<8,4,2>UD    { align1 1Q I@6 };
mov(8)          g44<2>UD        g94<4,4,1>UD                    { align1 1Q $6.src };
mov(8)          g3<2>UD         g110<4,4,1>UD                   { align1 1Q I@5 };
add(8)          g96<1>D         -g95<8,8,1>D    g11.1<8,4,2>D   { align1 1Q I@3 };
mov(8)          g44.1<2>UD      g96<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g97UD           g44UD           nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $7 };
add(8)          g98<1>D         g97<1,1,0>D     -3D             { align1 1Q $7.dst compacted };
shl(8)          g99<1>D         g97<8,8,1>D     0x00000006UD    { align1 1Q };
shr(8)          g101<1>UD       g98<1,1,0>UD    0x0000001aUD    { align1 1Q I@2 compacted };
add(8)          g100<1>D        g99<1,1,0>D     -192D           { align1 1Q I@2 compacted };
add3(8)         g14<1>D         -g93<8,8,1>D    g53<8,8,1>D     g101<1,1,1>D { align1 1Q I@2 };
add(8)          g102<1>D        g92<1,1,0>D     g100<1,1,0>D    { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g103<1>UD       g102<1,1,0>UD   g92<1,1,0>UD    { align1 1Q I@1 compacted };
add(8)          g107<1>D        g102<1,1,0>D    g105<1,1,0>D    { align1 1Q compacted };
add3(8)         g109<1>D        -g103<8,8,1>D   g14<8,8,1>D     g106<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g108<1>UD       g107<1,1,0>UD   g102<1,1,0>UD   { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g111<1>UD       g110<1,1,0>UD   0x000000a4UD    { align1 1Q compacted };
add(8)          g112<1>D        -g111<8,8,1>D   g11.1<8,4,2>D   { align1 1Q I@1 };
mov(8)          g3.1<2>UD       g112<4,4,1>UD                   { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g113UD          g3UD            nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $8 };
shl(8)          g114<1>D        g113<8,8,1>D    0x00000003UD    { align1 1Q $8.dst };
shr(8)          g115<1>UD       g113<1,1,0>UD   0x0000001dUD    { align1 1Q compacted };
add(8)          g116<1>D        g114<1,1,0>D    63D             { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g117<1>UD       g116<1,1,0>UD   g114<1,1,0>UD   { align1 1Q I@1 compacted };
and(8)          g119<1>UD       g116<8,8,1>UD   0xffffffc0UD    { align1 1Q };
add(8)          g118<1>D        -g117<1,1,0>D   g115<1,1,0>D    { align1 1Q I@2 compacted };
add(8)          g120<1>D        g107<1,1,0>D    g119<1,1,0>D    { align1 1Q I@2 compacted };
add3(8)         g15<1>D         -g108<8,8,1>D   g109<8,8,1>D    g118<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g121<1>UD       g120<1,1,0>UD   g107<1,1,0>UD   { align1 1Q I@2 compacted };
add(8)          g123<1>D        g120<1,1,0>D    63D             { align1 1Q compacted };
cmp.l.f0.0(8)   g124<1>UD       g123<1,1,0>UD   g120<1,1,0>UD   { align1 1Q I@1 compacted };
and(8)          g126<1>UD       g123<8,8,1>UD   0xffffffc0UD    { align1 1Q };
add3(8)         g16<1>D         -g121<8,8,1>D   g15<8,8,1>D     -g124<1,1,1>D { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(8)          g5<1>D          g18<1,1,0>D     g126<1,1,0>D    { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g127<1>UD       g5<1,1,0>UD     g18<1,1,0>UD    { align1 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add3(8)         g6<1>D          g20<8,8,1>D     g16<8,8,1>D     -g127<1,1,1>D { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(8)         nullUD          g46UD           g5UD            0x0400f586                0x00000100
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat ) base_offset 0  { align1 1Q $9 };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(8)         nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1Q A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_postbuild_info_serialized_size_code[] = {
    0x80000065, 0x0d058220, 0x02000004, 0xffffffc0,
    0xe2331940, 0x00010d03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa00330c, 0x00340000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x210b0061, 0x001102cc,
    0x00030061, 0x2e260aa0, 0x00000264, 0x00000000,
    0x210b1261, 0x00110204, 0x212e1261, 0x00110244,
    0xa1321240, 0x09ce0b03, 0xa1150040, 0x020e0b03,
    0xa1230040, 0x010e0b03, 0xf0681b70, 0x09c03203,
    0x00030061, 0x05060220, 0x00343205, 0x00000000,
    0x00031c61, 0x09060220, 0x00341505, 0x00000000,
    0x00031c61, 0x26060220, 0x00342305, 0x00000000,
    0x00031c40, 0x7a052660, 0x06466805, 0x00440b26,
    0x00031961, 0x05260220, 0x00347a05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034131, 0x070c0000, 0xfb040514, 0x00040000,
    0x00032169, 0x7d058660, 0x02460705, 0x00000003,
    0xe1110068, 0x01d00703, 0xa1121a40, 0x03807d03,
    0xf0131970, 0x03801203, 0xf0160070, 0x02001503,
    0xa1141a40, 0x11021302, 0x00031a40, 0x17052660,
    0x06461605, 0x00440b26, 0x00031961, 0x09260220,
    0x00341705, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034231, 0x18240000,
    0xfb040914, 0x003c0000, 0xa11c2240, 0x18201902,
    0xe11d1968, 0x00101c03, 0xe11f0068, 0x01a01c03,
    0x00031a69, 0x1e058660, 0x02461d05, 0x00000007,
    0xa1201940, 0x0c001e03, 0xf0211970, 0x0c002003,
    0xf0240070, 0x01002303, 0xa1221a40, 0x1f022102,
    0x00031a40, 0x25052660, 0x06462405, 0x00440b26,
    0x00031961, 0x26260220, 0x00342505, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034331, 0x26240000, 0xfb042614, 0x003c0000,
    0xa12a2340, 0x28202902, 0xa1302340, 0x26202702,
    0x00031a69, 0x2b058660, 0x02462a05, 0x00000006,
    0xe12c0068, 0x01a02a03, 0x00031b69, 0x31058660,
    0x02463005, 0x00000006, 0xe10d0068, 0x01a03003,
    0xa12d1c40, 0x2b002002, 0x30031970, 0x20002d03,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa1331c40, 0x31002d02, 0x00031a52, 0x04040e68,
    0x0e2e2205, 0x03052c05, 0x30341a70, 0x2d003303,
    0x00032270, 0x00010220, 0x52461a05, 0x00461b05,
    0x00031a52, 0x35040e68, 0x0e2e0405, 0x34050d05,
    0x01030022, 0x0001c060, 0x00000370, 0x00000350,
    0xa1360040, 0x040e0b03, 0xa1410040, 0x058e0b03,
    0x00031a70, 0x37050220, 0x52463605, 0x00440b06,
    0x00030061, 0x27060220, 0x00343605, 0x00000000,
    0x00031b70, 0x42050220, 0x52464105, 0x00440b06,
    0x00030061, 0x29060220, 0x00344105, 0x00000000,
    0x00031c40, 0x38052660, 0x06463705, 0x00440b26,
    0x00031b40, 0x43052660, 0x06464205, 0x00440b26,
    0x00031a61, 0x27260220, 0x00343805, 0x00000000,
    0x00031a61, 0x29260220, 0x00344305, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00034431, 0x39140000, 0xfb042714, 0x000c0000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034531, 0x440c0000, 0xfb042914, 0x00040000,
    0x613b2441, 0x00c03902, 0x00032469, 0x3e058660,
    0x02463a05, 0x00000003, 0x00032570, 0x00010220,
    0x52461a05, 0x00464405, 0xa13c1b40, 0x03f03b03,
    0xa13f1b40, 0x03f03e03, 0x00031a65, 0x3d058220,
    0x02463c05, 0xffffffc0, 0x00031a65, 0x40058220,
    0x02463f05, 0xffffffc0, 0x01030022, 0x0001c060,
    0x00000140, 0x00000120, 0xa1450040, 0x0ff03003,
    0xa1470040, 0x050e0b03, 0x00030069, 0x51058660,
    0x02463005, 0x00000005, 0x00031b65, 0x46058220,
    0x02464505, 0xffffff00, 0x00031b70, 0x48050220,
    0x52464705, 0x00440b06, 0x00033561, 0x2a060220,
    0x00344705, 0x00000000, 0xa1521c40, 0x03f05103,
    0x00031b40, 0x49052660, 0x06464805, 0x00440b26,
    0x00031a65, 0x53058220, 0x02465205, 0xffffffc0,
    0x00031a61, 0x2a260220, 0x00344905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034531, 0x4a0c0000, 0xfb042a14, 0x00040000,
    0xa14b2540, 0x0ff04a03, 0x00031965, 0x4c058220,
    0x02464b05, 0xffffff00, 0xa14d1940, 0x4c004602,
    0x614e1941, 0x00c04d02, 0xa14f1940, 0x03f04e03,
    0x00031965, 0x50058220, 0x02464f05, 0xffffffc0,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa1091940, 0x53005002, 0x00030024, 0x0001c060,
    0x00000030, 0x00000030, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00031a61, 0x09054220,
    0x00000000, 0x00000000, 0x00030025, 0x00004600,
    0x00000000, 0x000000c8, 0xa1540040, 0x00ce0b03,
    0x00031970, 0x55050220, 0x52465405, 0x00440b06,
    0x00033561, 0x2b060220, 0x00345405, 0x00000000,
    0x00031a40, 0x56052660, 0x06465505, 0x00440b26,
    0x00031961, 0x2b260220, 0x00345605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034631, 0x570c0000, 0xfb042b14, 0x00040000,
    0x00032669, 0x58058660, 0x02465705, 0x00000002,
    0xa1591940, 0x03305803, 0x00031965, 0x5a058220,
    0x02465905, 0xffffffc0, 0xa15b1940, 0x3d005a02,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00031952, 0x0a040e68, 0x0e0e5b05, 0x09054005,
    0x00030024, 0x0001c060, 0x00000030, 0x00000030,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00031a61, 0x0a054220, 0x00000000, 0x00000000,
    0x00030025, 0x00004600, 0x00000000, 0x00000010,
    0xa15c1a40, 0x0a003302, 0xa15e0040, 0x00ce0b03,
    0x00030069, 0x69058660, 0x02460705, 0x00000006,
    0xe16a0068, 0x01a00703, 0xa16e0040, 0x0a4e0b03,
    0x00030061, 0x08054660, 0x00000000, 0x00000000,
    0x305d1e70, 0x33005c03, 0x00031e70, 0x5f050220,
    0x52465e05, 0x00440b06, 0x00033661, 0x2c060220,
    0x00345e05, 0x00000000, 0x00031d61, 0x03060220,
    0x00346e05, 0x00000000, 0x00031b40, 0x60052660,
    0x06465f05, 0x00440b26, 0x00031961, 0x2c260220,
    0x00346005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034731, 0x610c0000,
    0xfb042c14, 0x00040000, 0xa1622740, 0xffd06103,
    0x00030069, 0x63058660, 0x02466105, 0x00000006,
    0xe1651a68, 0x01a06203, 0xa1641a40, 0xf4006303,
    0x00031a52, 0x0e042e68, 0x0e0e5d05, 0x65053505,
    0xa1661a40, 0x64005c02, 0x30671970, 0x5c006603,
    0xa16b0040, 0x69006602, 0x00031a52, 0x6d042e68,
    0x0e0e6705, 0x6a050e05, 0x306c1a70, 0x66006b03,
    0xf06f0070, 0x0a406e03, 0x00031940, 0x70052660,
    0x06466f05, 0x00440b26, 0x00031961, 0x03260220,
    0x00347005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034831, 0x710c0000,
    0xfb040314, 0x00040000, 0x00032869, 0x72058660,
    0x02467105, 0x00000003, 0xe1730068, 0x01d07103,
    0xa1741a40, 0x03f07203, 0x30751970, 0x72007403,
    0x00030065, 0x77058220, 0x02467405, 0xffffffc0,
    0xa1761a40, 0x73027502, 0xa1781a40, 0x77006b02,
    0x00031a52, 0x0f042e68, 0x0e0e6c05, 0x76056d05,
    0x30791a70, 0x6b007803, 0xa17b0040, 0x03f07803,
    0x307c1970, 0x78007b03, 0x00030065, 0x7e058220,
    0x02467b05, 0xffffffc0, 0x00031a52, 0x10042e68,
    0x0e2e7905, 0x7c050f05, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa1051a40, 0x7e001202,
    0x307f1970, 0x12000503, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00031952, 0x06040e68,
    0x0e2e1405, 0x7f051005, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00034931, 0x00000000,
    0xfb0c2e14, 0x003c0524, 0x80030061, 0x7e050220,
    0x00460005, 0x00000000, 0x80030931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_postbuild_info_serialized_size = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 2208,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_postbuild_info_serialized_size_relocs,
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
const char *gfx125_bvh_postbuild_info_serialized_size_sha1 = "c7ef2a056d23058c2e559f04926787f4ef39e571";

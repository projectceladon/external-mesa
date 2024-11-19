#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_copy_clone_indirect_relocs[] = {
};
static const u_printf_info gfx125_bvh_copy_clone_indirect_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_copy_clone_indirect_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g72<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g67<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g72UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g34<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g30<1>D         g67<8,8,1>D     0x00000004UD    { align1 1H I@2 };
add(8)          g34.8<1>UW      g34<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g32<1>UD        g34<8,8,1>UW                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g11.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g13.1<2>F       g2.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g7.1<2>F        g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g9.1<2>F        g2.3<0,1,0>F                    { align1 2Q };
add(16)         g15<1>D         g2.2<0,1,0>D    168D            { align1 1H compacted };
and(16)         g36<1>UD        g2<0,1,0>UD     0x0000003fUD    { align1 1H compacted };
mov(8)          g11<2>F         g2<0,1,0>F                      { align1 1Q F@4 compacted };
mov(8)          g13<2>F         g2<0,1,0>F                      { align1 2Q F@4 compacted };
mov(8)          g7<2>F          g2.2<0,1,0>F                    { align1 1Q F@4 compacted };
mov(8)          g9<2>F          g2.2<0,1,0>F                    { align1 2Q F@4 compacted };
cmp.l.f0.0(16)  g17<1>UD        g15<1,1,0>UD    0x000000a8UD    { align1 1H I@2 compacted };
mov(8)          g21<2>UD        g15<4,4,1>UD                    { align1 1Q };
mov(8)          g23<2>UD        g16<4,4,1>UD                    { align1 2Q };
add(16)         g38<1>D         -g36<1,1,0>D    64D             { align1 1H I@4 compacted };
and(16)         g35<1>UD        g32<1,1,0>UD    0x0000000fUD    { align1 1H I@7 compacted };
add(8)          g19<1>D         -g17<8,8,1>D    g7.1<8,4,2>D    { align1 1Q A@2 };
add(8)          g20<1>D         -g18<8,8,1>D    g9.1<8,4,2>D    { align1 2Q A@1 };
and(16)         g40<1>UD        g38<1,1,0>UD    0x0000003fUD    { align1 1H I@4 compacted };
add(16)         g44<1>D         g30<1,1,0>D     g35<1,1,0>D     { align1 1H I@4 compacted };
mov(8)          g21.1<2>UD      g19<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g23.1<2>UD      g20<4,4,1>UD                    { align1 2Q I@4 };
add(16)         g46<1>D         g2<0,1,0>D      g40<1,1,0>D     { align1 1H I@4 compacted };
add(16)         g52<1>D         g2.2<0,1,0>D    g40<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g25UD           g21UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $0 };
cmp.l.f0.0(16)  g48<1>UD        g46<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g54<1>UD        g52<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@2 compacted };
add(8)          g50<1>D         -g48<8,8,1>D    g11.1<8,4,2>D   { align1 1Q A@2 };
add(8)          g51<1>D         -g49<8,8,1>D    g13.1<8,4,2>D   { align1 2Q A@3 };
add(8)          g56<1>D         -g54<8,8,1>D    g7.1<8,4,2>D    { align1 1Q I@3 };
add(8)          g57<1>D         -g55<8,8,1>D    g9.1<8,4,2>D    { align1 2Q I@4 };
cmp.l.f0.0(16)  null<1>UD       g40<8,8,1>UD    g25<8,8,1>UD    { align1 1H $0.dst };
shr(16)         g29<1>UD        g25<1,1,0>UD    0x00000008UD    { align1 1H compacted };
add(16)         g42<1>D         g25<1,1,0>D     -g40<1,1,0>D    { align1 1H compacted };
shr(16)         g5<1>UD         g42<1,1,0>UD    0x00000002UD    { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g58<1>D         g29<8,8,1>D     0x00000004UD    { align1 1H I@4 };
mov(16)         g3<1>UD         g44<8,8,1>UD                    { align1 1H };

LABEL2:
cmp.ge.f0.0(16) null<1>UD       g3<8,8,1>UD     g5<8,8,1>UD     { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL1        UIP:  LABEL1              { align1 1H };
shl(16)         g60<1>D         g3<8,8,1>D      0x00000002UD    { align1 1H };
shr(16)         g62<1>UD        g3<1,1,0>UD     0x0000001eUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g64<1>D         g52<1,1,0>D     g60<1,1,0>D     { align1 1H I@2 compacted };
add(16)         g74<1>D         g46<1,1,0>D     g60<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g66<1>UD        g64<1,1,0>UD    g52<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g70<2>UD        g64<4,4,1>UD                    { align1 1Q $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
mov(8)          g72<2>UD        g65<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g76<1>UD        g74<1,1,0>UD    g46<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g80<2>UD        g74<4,4,1>UD                    { align1 1Q $0.src };
mov(8)          g82<2>UD        g75<4,4,1>UD                    { align1 2Q $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add3(16)        g68<1>D         g56<8,8,1>D     g62<8,8,1>D     -g66<1,1,1>D { align1 1H I@6 };
add3(16)        g78<1>D         g50<8,8,1>D     g62<8,8,1>D     -g76<1,1,1>D { align1 1H I@4 };
mov(8)          g70.1<2>UD      g68<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g72.1<2>UD      g69<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g80.1<2>UD      g78<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g82.1<2>UD      g79<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g68UD           g70UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g80UD           g68UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };
add3(16)        g3<1>D          0x0040UW        g58<8,8,1>D     g3<1,1,1>D { align1 1H };

LABEL1:
while(16)       JIP:  LABEL2                                    { align1 1H };
and(16)         g81<1>UD        g42<8,8,1>UD    0xfffffffcUD    { align1 1H $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g83<1>D         g42<1,1,0>D     -g81<1,1,0>D    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g44<8,8,1>UD    g83<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
add(16)         g84<1>D         g46<1,1,0>D     g81<1,1,0>D     { align1 1H compacted };
add(16)         g88<1>D         g52<1,1,0>D     g81<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g86<1>UD        g84<1,1,0>UD    g46<1,1,0>UD    { align1 1H I@2 compacted };
add(16)         g103<1>D        g84<1,1,0>D     g44<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g90<1>UD        g88<1,1,0>UD    g52<1,1,0>UD    { align1 1H I@3 compacted };
add(16)         g92<1>D         g88<1,1,0>D     g44<1,1,0>D     { align1 1H compacted };
mov(8)          g109<2>UD       g103<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g111<2>UD       g104<4,4,1>UD                   { align1 2Q I@4 };
mov(8)          g98<2>UD        g92<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g100<2>UD       g93<4,4,1>UD                    { align1 2Q I@4 };
cmp.l.f0.0(16)  g94<1>UD        g92<1,1,0>UD    g88<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  g105<1>UD       g103<1,1,0>UD   g84<1,1,0>UD    { align1 1H compacted };
add3(16)        g96<1>D         -g90<8,8,1>D    g56<8,8,1>D     -g94<1,1,1>D { align1 1H I@2 };
add3(16)        g107<1>D        -g86<8,8,1>D    g50<8,8,1>D     -g105<1,1,1>D { align1 1H I@2 };
mov(8)          g98.1<2>UD      g96<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g100.1<2>UD     g97<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g109.1<2>UD     g107<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g111.1<2>UD     g108<4,4,1>UD                   { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g102UD          g98UD           nullUD          0x08200980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g69<1>UD        g102<32,8,4>UB                  { align1 1H $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g109UD          g69UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };

LABEL3:
endif(16)       JIP:  LABEL0                                    { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL4                                    { align1 1H };

LABEL4:
and(16)         g110<1>UD       g2<0,1,0>UD     0x00000003UD    { align1 1H $0.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g112<1>D        -g110<1,1,0>D   4D              { align1 1H I@1 compacted };
and.nz.f0.0(16) g114<1>UD       g112<1,1,0>UD   0x00000003UD    { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL5              { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g44<8,8,1>UD    g114<8,8,1>UD   { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL6              { align1 1H };
add(16)         g116<1>D        g2.2<0,1,0>D    g44<1,1,0>D     { align1 1H compacted };
add(16)         g3<1>D          g2<0,1,0>D      g44<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g118<1>UD       g116<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g122<2>UD       g116<4,4,1>UD                   { align1 1Q };
mov(8)          g124<2>UD       g117<4,4,1>UD                   { align1 2Q };
cmp.l.f0.0(16)  g15<1>UD        g3<1,1,0>UD     g2<0,1,0>UD     { align1 1H I@4 compacted };
mov(8)          g19<2>UD        g3<4,4,1>UD                     { align1 1Q };
mov(8)          g21<2>UD        g4<4,4,1>UD                     { align1 2Q $0.src };
add(8)          g120<1>D        -g118<8,8,1>D   g7.1<8,4,2>D    { align1 1Q I@6 };
add(8)          g121<1>D        -g119<8,8,1>D   g9.1<8,4,2>D    { align1 2Q I@7 };
add(8)          g17<1>D         -g15<8,8,1>D    g11.1<8,4,2>D   { align1 1Q I@5 };
add(8)          g18<1>D         -g16<8,8,1>D    g13.1<8,4,2>D   { align1 2Q I@6 };
mov(8)          g122.1<2>UD     g120<4,4,1>UD                   { align1 1Q I@4 };
mov(8)          g124.1<2>UD     g121<4,4,1>UD                   { align1 2Q I@4 };
mov(8)          g19.1<2>UD      g17<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g21.1<2>UD      g18<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g126UD          g122UD          nullUD          0x08200980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g70<1>UD        g126<32,8,4>UB                  { align1 1H $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g19UD           g70UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };

LABEL6:
endif(16)       JIP:  LABEL5                                    { align1 1H };
add(16)         g20<1>D         g2<0,1,0>D      g114<1,1,0>D    { align1 1H $0.src compacted };
add(16)         g26<1>D         g2.2<0,1,0>D    g114<1,1,0>D    { align1 1H $0.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g22<1>UD        g20<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g28<1>UD        g26<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H @2 $0.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(8)          g24<1>D         -g22<8,8,1>D    g11.1<8,4,2>D   { align1 1Q I@2 };
add(8)          g25<1>D         -g23<8,8,1>D    g13.1<8,4,2>D   { align1 2Q I@3 };
add(8)          g30<1>D         -g28<8,8,1>D    g7.1<8,4,2>D    { align1 1Q I@3 };
add(8)          g31<1>D         -g29<8,8,1>D    g9.1<8,4,2>D    { align1 2Q I@4 };
mov(8)          g11<2>UD        g20<4,4,1>UD                    { align1 1Q };
mov(8)          g13<2>UD        g21<4,4,1>UD                    { align1 2Q };
mov(8)          g7<2>UD         g26<4,4,1>UD                    { align1 1Q };
mov(8)          g9<2>UD         g27<4,4,1>UD                    { align1 2Q };
mov(8)          g11.1<2>UD      g24<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g13.1<2>UD      g25<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g7.1<2>UD       g30<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g9.1<2>UD       g31<4,4,1>UD                    { align1 2Q I@4 };

LABEL5:
endif(16)       JIP:  LABEL7                                    { align1 1H };

LABEL7:
and(8)          g31<1>UD        g11<8,4,2>UD    0x0000003fUD    { align1 1Q I@5 compacted };
and(8)          g32<1>UD        g13<8,4,2>UD    0x0000003fUD    { align1 2Q I@5 compacted };
add(16)         g33<1>D         -g31<1,1,0>D    64D             { align1 1H I@1 compacted };
and(16)         g35<1>UD        g33<1,1,0>UD    0x0000003fUD    { align1 1H I@1 compacted };
shr(16)         g37<1>UD        g35<1,1,0>UD    0x00000002UD    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g39<1>UD        g44<1,1,0>UD    g37<1,1,0>UD    { align1 1H I@1 compacted };
cmp.nz.f0.0(16) g41<1>D         g35<1,1,0>D     0D              { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g39<8,8,1>UD    g41<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL8              { align1 1H };
shl(16)         g42<1>D         g44<8,8,1>D     0x00000002UD    { align1 1H };
shr(16)         g5<1>UD         g44<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
mov(8)          g46<1>UD        g7.1<8,4,2>UD                   { align1 1Q };
mov(8)          g47<1>UD        g9.1<8,4,2>UD                   { align1 2Q };
mov(8)          g58<1>UD        g11.1<8,4,2>UD                  { align1 1Q };
mov(8)          g59<1>UD        g13.1<8,4,2>UD                  { align1 2Q };
add(8)          g48<1>D         g7<8,4,2>D      g42<1,1,0>D     { align1 1Q I@6 compacted };
add(8)          g49<1>D         g9<8,4,2>D      g43<1,1,0>D     { align1 2Q I@7 compacted };
add(8)          g60<1>D         g11<8,4,2>D     g42<1,1,0>D     { align1 1Q compacted };
add(8)          g61<1>D         g13<8,4,2>D     g43<1,1,0>D     { align1 2Q compacted };
cmp.l.f0.0(8)   g50<1>UD        g48<8,8,1>UD    g7<8,4,2>UD     { align1 1Q I@4 };
mov(8)          g54<2>UD        g48<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g51<1>UD        g49<8,8,1>UD    g9<8,4,2>UD     { align1 2Q I@5 };
mov(8)          g56<2>UD        g49<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(8)   g62<1>UD        g60<8,8,1>UD    g11<8,4,2>UD    { align1 1Q I@6 };
mov(8)          g66<2>UD        g60<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g63<1>UD        g61<8,8,1>UD    g13<8,4,2>UD    { align1 2Q I@7 };
mov(8)          g68<2>UD        g61<4,4,1>UD                    { align1 2Q $0.src };
add3(16)        g52<1>D         g46<8,8,1>D     g5<8,8,1>D      -g50<1,1,1>D { align1 1H I@6 };
add3(16)        g64<1>D         g58<8,8,1>D     g5<8,8,1>D      -g62<1,1,1>D { align1 1H I@3 };
mov(8)          g54.1<2>UD      g52<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g56.1<2>UD      g53<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g66.1<2>UD      g64<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g68.1<2>UD      g65<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g71UD           g54UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g66UD           g71UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };

LABEL8:
endif(16)       JIP:  LABEL9                                    { align1 1H };

LABEL9:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_copy_clone_indirect_code[] = {
    0x80000065, 0x48058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x43050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00480c, 0x00340000,
    0x80030061, 0x22054410, 0x00000000, 0x76543210,
    0x00041a69, 0x1e058660, 0x02464305, 0x00000004,
    0x64221a40, 0x00802295, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x20050120,
    0x00462205, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x210b0061, 0x001102cc,
    0x2a0d0061, 0x001102cc, 0x00030061, 0x07260aa0,
    0x00000264, 0x00000000, 0x00130061, 0x09260aa0,
    0x00000264, 0x00000000, 0xa00f0040, 0x0a810243,
    0xe0240065, 0x03f10203, 0x210b1461, 0x00110204,
    0x2a0d1461, 0x00110204, 0x21071461, 0x00110244,
    0x2a091461, 0x00110244, 0xe7111a70, 0x0a800f03,
    0x00030061, 0x15060220, 0x00340f05, 0x00000000,
    0x00130061, 0x17060220, 0x00341005, 0x00000000,
    0xa0261c40, 0x04022403, 0xe0231f65, 0x00f02003,
    0x00030a40, 0x13052660, 0x06461105, 0x00440726,
    0x00130940, 0x14052660, 0x06461205, 0x00440926,
    0xe0281c65, 0x03f02603, 0xa02c1c40, 0x23001e02,
    0x00031c61, 0x15260220, 0x00341305, 0x00000000,
    0x00131c61, 0x17260220, 0x00341405, 0x00000000,
    0xa02e1c40, 0x28010202, 0xa0340040, 0x28010242,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x19240000, 0xfb001524, 0x00040000,
    0x27301a70, 0x02102e03, 0x27361a70, 0x0210342b,
    0x00030a40, 0x32052660, 0x06463005, 0x00440b26,
    0x00130b40, 0x33052660, 0x06463105, 0x00440d26,
    0x00031b40, 0x38052660, 0x06463605, 0x00440726,
    0x00131c40, 0x39052660, 0x06463705, 0x00440926,
    0x00042070, 0x00010220, 0x52462805, 0x00461905,
    0xe01d0068, 0x00801903, 0xa02a0040, 0x28201902,
    0xe0051968, 0x00202a03, 0x01040022, 0x0001c060,
    0x00000350, 0x00000350, 0x00041c69, 0x3a058660,
    0x02461d05, 0x00000004, 0x00040061, 0x03050220,
    0x00462c05, 0x00000000, 0x00041970, 0x00010220,
    0x42460305, 0x00460505, 0x01040028, 0x0001c660,
    0x00000168, 0x00000168, 0x00040069, 0x3c058660,
    0x02460305, 0x00000002, 0xe03e0068, 0x01e00303,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa0401a40, 0x3c003402, 0xa04a0040, 0x3c002e02,
    0x27421a70, 0x34004003, 0x00033061, 0x46060220,
    0x00344005, 0x00000000, 0x80103001, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x48060220,
    0x00344105, 0x00000000, 0x274c1c70, 0x2e004a03,
    0x00033061, 0x50060220, 0x00344a05, 0x00000000,
    0x00133061, 0x52060220, 0x00344b05, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00041e52, 0x44040e68, 0x0e2e3805, 0x42053e05,
    0x00041c52, 0x4e040e68, 0x0e2e3205, 0x4c053e05,
    0x00031a61, 0x46260220, 0x00344405, 0x00000000,
    0x00131b61, 0x48260220, 0x00344505, 0x00000000,
    0x00031b61, 0x50260220, 0x00344e05, 0x00000000,
    0x00131c61, 0x52260220, 0x00344f05, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x44140000, 0xfb004624, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb085024, 0x00004414,
    0x00040052, 0x03044160, 0x0e0e0040, 0x03053a05,
    0x00040027, 0x00014060, 0x00000000, 0xfffffe88,
    0x00043065, 0x51058220, 0x02462a05, 0xfffffffc,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa0531940, 0x51202a02, 0x00041970, 0x00010220,
    0x52462c05, 0x00465305, 0x01040022, 0x0001c060,
    0x00000150, 0x00000150, 0xa0540040, 0x51002e02,
    0xa0580040, 0x51003402, 0x27561a70, 0x2e005403,
    0xa0670040, 0x2c005402, 0x275a1b70, 0x34005803,
    0xa05c0040, 0x2c005802, 0x00031b61, 0x6d060220,
    0x00346705, 0x00000000, 0x00131c61, 0x6f060220,
    0x00346805, 0x00000000, 0x00031b61, 0x62060220,
    0x00345c05, 0x00000000, 0x00131c61, 0x64060220,
    0x00345d05, 0x00000000, 0x275e0070, 0x58005c03,
    0x27690070, 0x54006703, 0x00041a52, 0x60042e68,
    0x0e2e5a05, 0x5e053805, 0x00041a52, 0x6b042e68,
    0x0e2e5605, 0x69053205, 0x00031a61, 0x62260220,
    0x00346005, 0x00000000, 0x00131b61, 0x64260220,
    0x00346105, 0x00000000, 0x00031b61, 0x6d260220,
    0x00346b05, 0x00000000, 0x00131c61, 0x6f260220,
    0x00346c05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x66140000,
    0xf3006224, 0x00020000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00042161, 0x45050020,
    0x00666607, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x00000000,
    0xf3086d24, 0x00024514, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0xe06e3065, 0x00310203,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa0701940, 0x00426e03, 0xee721965, 0x00307003,
    0x01040022, 0x0001c060, 0x00000280, 0x00000280,
    0x00041a70, 0x00010220, 0x52462c05, 0x00467205,
    0x01040022, 0x0001c060, 0x00000150, 0x00000150,
    0xa0740040, 0x2c010242, 0xa0030040, 0x2c010202,
    0x27761a70, 0x0210742b, 0x00030061, 0x7a060220,
    0x00347405, 0x00000000, 0x00130061, 0x7c060220,
    0x00347505, 0x00000000, 0x270f1c70, 0x02100303,
    0x00030061, 0x13060220, 0x00340305, 0x00000000,
    0x00133061, 0x15060220, 0x00340405, 0x00000000,
    0x00031e40, 0x78052660, 0x06467605, 0x00440726,
    0x00131f40, 0x79052660, 0x06467705, 0x00440926,
    0x00031d40, 0x11052660, 0x06460f05, 0x00440b26,
    0x00131e40, 0x12052660, 0x06461005, 0x00440d26,
    0x00031c61, 0x7a260220, 0x00347805, 0x00000000,
    0x00131c61, 0x7c260220, 0x00347905, 0x00000000,
    0x00031c61, 0x13260220, 0x00341105, 0x00000000,
    0x00131c61, 0x15260220, 0x00341205, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x7e140000, 0xf3007a24, 0x00020000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00042261, 0x46050020, 0x00667e07, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xf3081324, 0x00024614,
    0x00040025, 0x00004600, 0x00000000, 0x00000110,
    0xa0143040, 0x72010202, 0xa01a2040, 0x72010242,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x27161a70, 0x02101403, 0x271ca070, 0x02101a2b,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00031a40, 0x18052660, 0x06461605, 0x00440b26,
    0x00131b40, 0x19052660, 0x06461705, 0x00440d26,
    0x00031b40, 0x1e052660, 0x06461c05, 0x00440726,
    0x00131c40, 0x1f052660, 0x06461d05, 0x00440926,
    0x00030061, 0x0b060220, 0x00341405, 0x00000000,
    0x00130061, 0x0d060220, 0x00341505, 0x00000000,
    0x00030061, 0x07060220, 0x00341a05, 0x00000000,
    0x00130061, 0x09060220, 0x00341b05, 0x00000000,
    0x00031c61, 0x0b260220, 0x00341805, 0x00000000,
    0x00131c61, 0x0d260220, 0x00341905, 0x00000000,
    0x00031c61, 0x07260220, 0x00341e05, 0x00000000,
    0x00131c61, 0x09260220, 0x00341f05, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0xe11f1d65, 0x03fe0b03, 0xea201d65, 0x03fe0d03,
    0xa0211940, 0x04021f03, 0xe0231965, 0x03f02103,
    0xe0251968, 0x00202303, 0x27271970, 0x25002c03,
    0xae290070, 0x00002303, 0x00041965, 0x00010220,
    0x22462705, 0x00462905, 0x01040022, 0x0001c060,
    0x000001c8, 0x000001c8, 0x00040069, 0x2a058660,
    0x02462c05, 0x00000002, 0xe0050068, 0x01e02c03,
    0x00030061, 0x2e050220, 0x00440726, 0x00000000,
    0x00130061, 0x2f050220, 0x00440926, 0x00000000,
    0x00030061, 0x3a050220, 0x00440b26, 0x00000000,
    0x00130061, 0x3b050220, 0x00440d26, 0x00000000,
    0xa1301e40, 0x2a0e0702, 0xaa311f40, 0x2b0e0902,
    0xa13c0040, 0x2a0e0b02, 0xaa3d0040, 0x2b0e0d02,
    0x00031c70, 0x32050220, 0x52463005, 0x00440706,
    0x00030061, 0x36060220, 0x00343005, 0x00000000,
    0x00131d70, 0x33050220, 0x52463105, 0x00440906,
    0x00130061, 0x38060220, 0x00343105, 0x00000000,
    0x00031e70, 0x3e050220, 0x52463c05, 0x00440b06,
    0x00030061, 0x42060220, 0x00343c05, 0x00000000,
    0x00131f70, 0x3f050220, 0x52463d05, 0x00440d06,
    0x00133061, 0x44060220, 0x00343d05, 0x00000000,
    0x00041e52, 0x34040e68, 0x0e2e2e05, 0x32050505,
    0x00041b52, 0x40040e68, 0x0e2e3a05, 0x3e050505,
    0x00031a61, 0x36260220, 0x00343405, 0x00000000,
    0x00131b61, 0x38260220, 0x00343505, 0x00000000,
    0x00031b61, 0x42260220, 0x00344005, 0x00000000,
    0x00131c61, 0x44260220, 0x00344105, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x47140000, 0xfb003624, 0x00000000,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb084224, 0x00004714,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_copy_clone_indirect = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 2688,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_copy_clone_indirect_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_copy_clone_indirect_printfs,
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
      .push.cross_thread.dwords = 12,
      .push.cross_thread.regs = 2,
      .push.cross_thread.size = 64,
   },
   .args_size = 16,
   .arg_count = 2,
   .args = gfx125_bvh_copy_clone_indirect_args,
   .code = gfx125_bvh_copy_clone_indirect_code,
};
const char *gfx125_bvh_copy_clone_indirect_sha1 = "abf01cd453170747d2cd3a1b7a3b06c8d6934d9c";

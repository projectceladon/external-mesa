#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_primref_primrefs_from_DXR_instances_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_primref_primrefs_from_DXR_instances_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_primref_primrefs_from_DXR_instances_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
   { 24, 4 },
   { 32, 8 },
   { 40, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g81<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g6<1>UD         g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g81UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
add(1)          g82<1>UD        g81<0,1,0>UD    0x00000040UD    { align1 WE_all 1N $0.src compacted };
mov(8)          g127<1>UW       0x76543210V                     { align1 WE_all 1Q };
shl(16)         g101<1>D        g6<8,8,1>D      0x00000004UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g3UD            g82UD           nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
add(8)          g127.8<1>UW     g127<1,1,0>UW   0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g20<1>D         g127<8,8,1>UW                   { align1 1H };
add(16)         g22<1>D         g20<1,1,0>D     g101<1,1,0>D    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cmp.l.f0.0(16)  null<1>UD       g22<8,8,1>UD    g2.6<0,1,0>UD   { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g102<1>D        g22<8,8,1>D     0x00000006UD    { align1 1H };
add(16)         g105<1>D        g2.4<0,1,0>D    g102<1,1,0>D    { align1 1H I@1 compacted };
shr(16)         g103<1>UD       g22<1,1,0>UD    0x0000001aUD    { align1 1H compacted };
cmp.l.f0.0(16)  g107<1>UD       g105<1,1,0>UD   g2.4<0,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g67<2>UD        g105<4,4,1>UD                   { align1 1Q };
mov(8)          g69<2>UD        g106<4,4,1>UD                   { align1 2Q };
add3(16)        g24<1>D         g2.5<0,1,0>D    g103<8,8,1>D    -g107<1,1,1>D { align1 1H I@3 };
mov(8)          g69.1<2>UD      g25<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g67.1<2>UD      g24<4,4,1>UD                    { align1 1Q I@2 };
or.nz.f0.0(16)  null<1>UD       g105<8,8,1>UD   g24<8,8,1>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL1              { align1 1H };
add(16)         g108<1>D        g105<1,1,0>D    48D             { align1 1H compacted };
add(16)         g114<1>D        g105<1,1,0>D    56D             { align1 1H compacted };
cmp.l.f0.0(16)  g110<1>UD       g108<1,1,0>UD   g105<1,1,0>UD   { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g116<1>UD       g114<1,1,0>UD   g105<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g7<2>UD         g108<4,4,1>UD                   { align1 1Q };
mov(8)          g9<2>UD         g109<4,4,1>UD                   { align1 2Q };
mov(8)          g11<2>UD        g114<4,4,1>UD                   { align1 1Q };
mov(8)          g13<2>UD        g115<4,4,1>UD                   { align1 2Q };
add(16)         g112<1>D        -g110<1,1,0>D   g24<1,1,0>D     { align1 1H I@6 compacted };
add(16)         g118<1>D        -g116<1,1,0>D   g24<1,1,0>D     { align1 1H I@6 compacted };
mov(8)          g7.1<2>UD       g112<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g9.1<2>UD       g113<4,4,1>UD                   { align1 2Q I@3 };
mov(8)          g11.1<2>UD      g118<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g13.1<2>UD      g119<4,4,1>UD                   { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g113UD          g7UD            nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g119UD          g11UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mov(16)         g88<1>UD        g113.3<32,8,4>UB                { align1 1H $2.dst };
or.nz.f0.0(16)  null<1>UD       g119<8,8,1>UD   g121<8,8,1>UD   { align1 1H $2.dst };
(+f0.0) if(16)  JIP:  LABEL4          UIP:  LABEL3              { align1 1H };
add(16)         g123<1>D        g119<1,1,0>D    128D            { align1 1H compacted };
add(16)         g6<1>D          g119<1,1,0>D    140D            { align1 1H $2.src compacted };
cmp.l.f0.0(16)  g125<1>UD       g123<1,1,0>UD   g119<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g14<2>UD        g123<4,4,1>UD                   { align1 1Q $2.src };
mov(8)          g16<2>UD        g124<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g8<1>UD         g6<1,1,0>UD     0x0000008cUD    { align1 1H I@4 compacted };
mov(8)          g62<2>UD        g6<4,4,1>UD                     { align1 1Q };
mov(8)          g64<2>UD        g7<4,4,1>UD                     { align1 2Q };
add(16)         g4<1>D          -g125<1,1,0>D   g121<1,1,0>D    { align1 1H I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g10<1>D         -g8<1,1,0>D     g121<1,1,0>D    { align1 1H I@4 compacted };
mov(8)          g14.1<2>UD      g4<4,4,1>UD                     { align1 1Q I@2 };
mov(8)          g16.1<2>UD      g5<4,4,1>UD                     { align1 2Q I@3 };
mov(8)          g62.1<2>UD      g10<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g64.1<2>UD      g11<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g12UD           g14UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
cmp.l.f0.0(16)  null<1>F        (abs)g12<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $2.dst compacted };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL5              { align1 1H };
add(16)         g14<1>D         g119<1,1,0>D    132D            { align1 1H $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g16<1>UD        g14<1,1,0>UD    0x00000084UD    { align1 1H I@1 compacted };
mov(8)          g28<2>UD        g14<4,4,1>UD                    { align1 1Q };
mov(8)          g30<2>UD        g15<4,4,1>UD                    { align1 2Q };
add(16)         g18<1>D         -g16<1,1,0>D    g121<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g28.1<2>UD      g18<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g30.1<2>UD      g19<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g26UD           g28UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
cmp.l.f0.0(16)  null<1>F        (abs)g26<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $3.dst compacted };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g27<1>D         g119<1,1,0>D    136D            { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g29<1>UD        g27<1,1,0>UD    0x00000088UD    { align1 1H I@1 compacted };
mov(8)          g34<2>UD        g27<4,4,1>UD                    { align1 1Q };
mov(8)          g36<2>UD        g28<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g31<1>D         -g29<1,1,0>D    g121<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g34.1<2>UD      g31<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g36.1<2>UD      g32<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g32UD           g34UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
cmp.l.f0.0(16)  g58<1>F         (abs)g32<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $4.dst compacted };
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
mov(16)         g58<1>UD        0x00000000UD                    { align1 1H F@1 };

LABEL7:
endif(16)       JIP:  LABEL9                                    { align1 1H };

LABEL9:
else(16)        JIP:  LABEL5          UIP:  LABEL5              { align1 1H };

LABEL6:
mov(16)         g58<1>UD        0x00000000UD                    { align1 1H A@1 };

LABEL5:
endif(16)       JIP:  LABEL10                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(16)        g34UD           g62UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
cmp.l.f0.0(16)  null<1>F        (abs)g34<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $5.dst compacted };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
add(16)         g36<1>D         g119<1,1,0>D    144D            { align1 1H $4.src compacted };
cmp.l.f0.0(16)  g38<1>UD        g36<1,1,0>UD    0x00000090UD    { align1 1H I@1 compacted };
mov(8)          g43<2>UD        g36<4,4,1>UD                    { align1 1Q };
mov(8)          g45<2>UD        g37<4,4,1>UD                    { align1 2Q };
add(16)         g40<1>D         -g38<1,1,0>D    g121<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g43.1<2>UD      g40<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g45.1<2>UD      g41<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g41UD           g43UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
cmp.l.f0.0(16)  null<1>F        (abs)g41<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $6.dst compacted };
(+f0.0) if(16)  JIP:  LABEL14         UIP:  LABEL13             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g42<1>D         g119<1,1,0>D    148D            { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g44<1>UD        g42<1,1,0>UD    0x00000094UD    { align1 1H I@1 compacted };
mov(8)          g49<2>UD        g42<4,4,1>UD                    { align1 1Q };
mov(8)          g51<2>UD        g43<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g46<1>D         -g44<1,1,0>D    g121<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g49.1<2>UD      g46<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g51.1<2>UD      g47<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g47UD           g49UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
cmp.l.f0.0(16)  g4<1>F          (abs)g47<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $7.dst compacted };
else(16)        JIP:  LABEL13         UIP:  LABEL13             { align1 1H };

LABEL14:
mov(16)         g4<1>UD         0x00000000UD                    { align1 1H F@1 };

LABEL13:
endif(16)       JIP:  LABEL15                                   { align1 1H };

LABEL15:
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
mov(16)         g4<1>UD         0x00000000UD                    { align1 1H A@1 };

LABEL11:
endif(16)       JIP:  LABEL10                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.nz.f0.0(16) g48<1>D         g88<1,1,0>D     0D              { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
and(16)         g50<1>UD        g48<1,1,0>UD    g4<1,1,0>UD     { align1 1H A@1 compacted };
or(16)          g79<1>D         ~g48<1,1,0>D    ~g4<1,1,0>D     { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g50<8,8,1>UD    g58<8,8,1>UD    { align1 1H A@2 };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL16             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g81<1>D         g119<1,1,0>D    132D            { align1 1H compacted };
add(16)         g86<1>D         g119<1,1,0>D    144D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g27<1>D         g105<1,1,0>D    16D             { align1 1H F@2 compacted };
mov(16)         g18<1>UD        0x000000c0UD                    { align1 1H };
cmp.l.f0.0(16)  g83<1>UD        g81<1,1,0>UD    0x00000084UD    { align1 1H I@4 compacted };
mov(8)          g50<2>UD        g86<4,4,1>UD                    { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $7.src };
mov(8)          g52<2>UD        g87<4,4,1>UD                    { align1 2Q I@5 };
mov(8)          g63<2>UD        g81<4,4,1>UD                    { align1 1Q $5.src };
mov(8)          g65<2>UD        g82<4,4,1>UD                    { align1 2Q $5.src };
cmp.l.f0.0(16)  g90<1>UD        g86<1,1,0>UD    0x00000090UD    { align1 1H compacted };
mov(8)          g71<2>UD        g27<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g73<2>UD        g28<4,4,1>UD                    { align1 2Q I@7 };
add(16)         g81<1>D         g105<1,1,0>D    32D             { align1 1H compacted };
cmp.l.f0.0(16)  g36<1>UD        g27<1,1,0>UD    g105<1,1,0>UD   { align1 1H $4.src compacted };
add(16)         g85<1>D         -g83<1,1,0>D    g121<1,1,0>D    { align1 1H I@7 compacted };
add(16)         g92<1>D         -g90<1,1,0>D    g121<1,1,0>D    { align1 1H I@6 compacted };
cmp.l.f0.0(16)  g83<1>UD        g81<1,1,0>UD    g105<1,1,0>UD   { align1 1H I@4 compacted };
mov(8)          g75<2>UD        g81<4,4,1>UD                    { align1 1Q };
mov(8)          g77<2>UD        g82<4,4,1>UD                    { align1 2Q };
add(16)         g38<1>D         -g36<1,1,0>D    g24<1,1,0>D     { align1 1H I@6 compacted };
mov(8)          g65.1<2>UD      g86<4,4,1>UD                    { align1 2Q I@6 };
mov(8)          g63.1<2>UD      g85<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g50.1<2>UD      g92<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g52.1<2>UD      g93<4,4,1>UD                    { align1 2Q I@7 };
add(16)         g85<1>D         -g83<1,1,0>D    g24<1,1,0>D     { align1 1H I@7 compacted };
mov(8)          g71.1<2>UD      g38<4,4,1>UD                    { align1 1Q I@6 };
mov(8)          g73.1<2>UD      g39<4,4,1>UD                    { align1 2Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
send(16)        g26UD           g63UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
send(16)        g30UD           g50UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
mov(8)          g75.1<2>UD      g85<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g77.1<2>UD      g86<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g42UD           g71UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g50UD           g75UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $11 };
sel.ge(16)      g101<1>F        g30<1,1,0>F     g32<1,1,0>F     { align1 1H $9.dst compacted };
add(16)         g94<1>F         g30<1,1,0>F     g26<1,1,0>F     { align1 1H $8.dst compacted };
sel.ge(16)      g103<1>F        g34<1,1,0>F     g101<1,1,0>F    { align1 1H F@2 compacted };
mul(16)         g99<1>F         g94<1,1,0>F     0x3f000000F  /* 0.5F */ { align1 1H F@2 compacted };
add(16)         g93<1>F         g34<1,1,0>F     g12<1,1,0>F     { align1 1H I@6 compacted };
add(16)         g95<1>F         g32<1,1,0>F     g28<1,1,0>F     { align1 1H $8.dst compacted };
mul(16)         g107<1>F        g103<1,1,0>F    0x34000000F  /* 1.19209e-07F */ { align1 1H F@4 compacted };
mul(16)         g60<1>F         g99<1,1,0>F     g44<1,1,0>F     { align1 1H @4 $10.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
mul(16)         g86<1>F         g99<1,1,0>F     g52<1,1,0>F     { align1 1H I@1 compacted };
mul(16)         g97<1>F         g93<1,1,0>F     0x3f000000F  /* 0.5F */ { align1 1H F@5 compacted };
add(16)         g110<1>F        g30<1,1,0>F     g107<1,1,0>F    { align1 1H F@4 compacted };
mad(16)         g90<1>F         g86<8,8,1>F     g50<8,8,1>F     g97<1,1,1>F { align1 1H @2 $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mad(16)         g62<1>F         g60<8,8,1>F     g42<8,8,1>F     g97<1,1,1>F { align1 1H @5 $10.dst };
add(16)         g115<1>F        g110<1,1,0>F    -g26<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g109<1>F        g34<1,1,0>F     g107<1,1,0>F    { align1 1H compacted };
add(16)         g111<1>F        g32<1,1,0>F     g107<1,1,0>F    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
send(16)        g34UD           g67UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $12 };
mul(16)         g119<1>F        g115<1,1,0>F    0x3f000000F  /* 0.5F */ { align1 1H F@3 compacted };
add(16)         g113<1>F        g109<1,1,0>F    -g12<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g116<1>F        g111<1,1,0>F    -g28<1,1,0>F    { align1 1H F@3 compacted };
mul(16)         g110<1>F        g119<1,1,0>F    (abs)g52<1,1,0>F { align1 1H F@3 compacted };
mul(16)         g102<1>F        g119<1,1,0>F    (abs)g44<1,1,0>F { align1 1H compacted };
mul(16)         g121<1>F        g99<1,1,0>F     g36<1,1,0>F     { align1 1H $12.dst compacted };
mul(16)         g100<1>F        g95<1,1,0>F     0x3f000000F  /* 0.5F */ { align1 1H compacted };
mul(16)         g95<1>F         g119<1,1,0>F    (abs)g36<1,1,0>F { align1 1H compacted };
mul(16)         g118<1>F        g113<1,1,0>F    0x3f000000F  /* 0.5F */ { align1 1H F@7 compacted };
mad(16)         g123<1>F        g121<8,8,1>F    g34<8,8,1>F     g97<1,1,1>F { align1 1H @4 $12.dst };
mul(16)         g120<1>F        g116<1,1,0>F    0x3f000000F  /* 0.5F */ { align1 1H F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mad(16)         g64<1>F         g62<8,8,1>F     g46<8,8,1>F     g100<1,1,1>F { align1 1H @5 $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
mad(16)         g92<1>F         g90<8,8,1>F     g54<8,8,1>F     g100<1,1,1>F { align1 1H I@7 };
mov(16)         g61<1>UD        0x00000001UD                    { align1 1H F@2 };
mad(16)         g97<1>F         g95<8,8,1>F     (abs)g34<8,8,1>F g118<1,1,1>F { align1 1H F@5 };
mad(16)         g107<1>F        g102<8,8,1>F    (abs)g42<8,8,1>F g118<1,1,1>F { align1 1H F@7 };
mad(16)         g112<1>F        g110<8,8,1>F    (abs)g50<8,8,1>F g118<1,1,1>F { align1 1H };
mad(16)         g125<1>F        g123<8,8,1>F    g38<8,8,1>F     g100<1,1,1>F { align1 1H @7 $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g66<1>F         g64<1,1,0>F     g48<1,1,0>F     { align1 1H @6 $10.dst compacted };
add(16)         g94<1>F         g92<1,1,0>F     g56<1,1,0>F     { align1 1H @6 $11.dst compacted };
mad(16)         g99<1>F         g97<8,8,1>F     (abs)g38<8,8,1>F g120<1,1,1>F { align1 1H F@6 };
mad(16)         g109<1>F        g107<8,8,1>F    (abs)g46<8,8,1>F g120<1,1,1>F { align1 1H F@6 };
mad(16)         g114<1>F        g112<8,8,1>F    (abs)g54<8,8,1>F g120<1,1,1>F { align1 1H F@6 };
add(16)         g26<1>F         g125<1,1,0>F    g40<1,1,0>F     { align1 1H @6 $12.dst compacted };
add(16)         g6<1>F          g66<1,1,0>F     -g109<1,1,0>F   { align1 1H F@3 compacted };
add(16)         g14<1>F         g66<1,1,0>F     g109<1,1,0>F    { align1 1H $2.src compacted };
add(16)         g4<1>F          g26<1,1,0>F     -g99<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g12<1>F         g26<1,1,0>F     g99<1,1,0>F     { align1 1H compacted };
add(16)         g8<1>F          g94<1,1,0>F     -g114<1,1,0>F   { align1 1H F@6 compacted };
add(16)         g16<1>F         g94<1,1,0>F     g114<1,1,0>F    { align1 1H $2.src compacted };
else(16)        JIP:  LABEL16         UIP:  LABEL16             { align1 1H };

LABEL17:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g61<1>UD        0x00000000UD                    { align1 1H I@2 };
mov(16)         g18<1>UD        0x00000000UD                    { align1 1H };

LABEL16:
endif(16)       JIP:  LABEL10                                   { align1 1H };
cmp.nz.f0.0(16) null<1>D        g58<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g115<1>UD       g79<8,8,1>UD    0xffffffffUD    { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
cmp.nz.f0.0(16) g117<1>D        g3.2<0,1,0>D    0D              { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g117<8,8,1>UD   g115<8,8,1>UD   { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL18         UIP:  LABEL18             { align1 1H };
add(16)         g118<1>D        g105<1,1,0>D    12D             { align1 1H I@2 compacted };
add(16)         g123<1>D        g105<1,1,0>D    28D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g27<1>D         g105<1,1,0>D    44D             { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g61<1>UD        0x00000001UD                    { align1 1H };
mov(16)         g88<1>UD        0x00000000UD                    { align1 1H };
cmp.l.f0.0(16)  g120<1>UD       g118<1,1,0>UD   g105<1,1,0>UD   { align1 1H A@5 compacted };
mov(8)          g76<2>UD        g118<4,4,1>UD                   { align1 1Q $11.src };
mov(8)          g78<2>UD        g119<4,4,1>UD                   { align1 2Q $11.src };
mov(8)          g80<2>UD        g123<4,4,1>UD                   { align1 1Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g82<2>UD        g124<4,4,1>UD                   { align1 2Q I@7 };
cmp.l.f0.0(16)  g125<1>UD       g123<1,1,0>UD   g105<1,1,0>UD   { align1 1H F@7 compacted };
mov(8)          g84<2>UD        g27<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g86<2>UD        g28<4,4,1>UD                    { align1 2Q I@7 };
cmp.l.f0.0(16)  g29<1>UD        g27<1,1,0>UD    g105<1,1,0>UD   { align1 1H $3.src compacted };
add(16)         g122<1>D        -g120<1,1,0>D   g24<1,1,0>D     { align1 1H I@7 compacted };
add(16)         g26<1>D         -g125<1,1,0>D   g24<1,1,0>D     { align1 1H A@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g31<1>D         -g29<1,1,0>D    g24<1,1,0>D     { align1 1H A@2 compacted };
mov(8)          g76.1<2>UD      g122<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g78.1<2>UD      g123<4,4,1>UD                   { align1 2Q I@4 };
mov(8)          g80.1<2>UD      g26<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g82.1<2>UD      g27<4,4,1>UD                    { align1 2Q I@5 };
mov(8)          g84.1<2>UD      g31<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g86.1<2>UD      g32<4,4,1>UD                    { align1 2Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
send(16)        g12UD           g76UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
send(16)        g14UD           g80UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g16UD           g84UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
mov(16)         g4<1>UD         g12<8,8,1>UD                    { align1 1H F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mov(16)         g6<1>UD         g14<8,8,1>UD                    { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
mov(16)         g8<1>UD         g16<8,8,1>UD                    { align1 1H F@2 };

LABEL18:
endif(16)       JIP:  LABEL10                                   { align1 1H };

LABEL10:
else(16)        JIP:  LABEL3          UIP:  LABEL3              { align1 1H };

LABEL4:
mov(16)         g61<1>UD        0x00000000UD                    { align1 1H I@7 };
mov(16)         g18<1>UD        0x00000000UD                    { align1 1H I@7 };

LABEL3:
endif(16)       JIP:  LABEL19                                   { align1 1H };

LABEL19:
else(16)        JIP:  LABEL1          UIP:  LABEL1              { align1 1H };

LABEL2:
mov(16)         g61<1>UD        0x00000000UD                    { align1 1H I@4 };
mov(16)         g18<1>UD        0x00000000UD                    { align1 1H I@4 };
mov(16)         g88<1>UD        0x00000000UD                    { align1 1H I@7 };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
mov(16)         g32<1>D         0D                              { align1 WE_all 1H A@2 };
mov(16)         g32<1>D         g61<8,8,1>D                     { align1 1H };
cmp.z.f0.0(16)  null<1>D        g20<8,8,1>D     0D              { align1 1H };
add(8)          g32.1<2>D       g32<8,4,2>D     g32.1<8,4,2>D   { align1 WE_all 1Q I@2 };
add(4)          g32.2<4>D       g32.1<8,2,4>D   g32.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g32.3<4>D       g32.1<8,2,4>D   g32.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g32.4<1>D       g32.3<0,1,0>D   g32.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g33.4<1>D       g33.3<0,1,0>D   g33.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(8)          g33<1>D         g32.7<0,1,0>D   g33<1,1,0>D     { align1 WE_all 1Q I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL21         UIP:  LABEL20             { align1 1H };
add(16)         g34<1>D         g2<0,1,0>D      36D             { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
mov(16)         g55<1>D         g33.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g36<1>UD        g34<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@2 compacted };
mov(8)          g51<2>UD        g34<4,4,1>UD                    { align1 1Q $7.src };
mov(8)          g53<2>UD        g35<4,4,1>UD                    { align1 2Q F@7 };
add(16)         g38<1>D         -g36<1,1,0>D    g2.1<0,1,0>D    { align1 1H A@3 compacted };
mov(8)          g51.1<2>UD      g38<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g53.1<2>UD      g39<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g59UD           g51UD           g55UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $7 };
else(16)        JIP:  LABEL20         UIP:  LABEL20             { align1 1H };

LABEL21:
mov(16)         g59<1>UD        0x00000000UD                    { align1 1H $7.dst };

LABEL20:
endif(16)       JIP:  LABEL0                                    { align1 1H };
mov(16)         g41<1>D         0D                              { align1 WE_all 1H F@1 };
mov(16)         g41<1>D         g61<8,8,1>D                     { align1 1H };
cmp.z.f0.0(16)  null<1>D        g61<8,8,1>D     0D              { align1 1H };
add(16)         g43<1>W         g127<16,16,1>UW -1W             { align1 WE_all 1H $6.src };
mov(16)         a0<1>UW         0x0520UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g43<8,8,1>W     0x0002UW        { align1 WE_all 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0520UW        { align1 WE_all 1H A@1 };
mov(16)         g39<1>UD        g[a0]<VxH,1,0>UD                { align1 WE_all 1H A@1 compacted };
mov(1)          g39<1>D         0D                              { align1 WE_all 1N I@1 };
add(8)          g39.1<2>D       g39<8,4,2>D     g39.1<8,4,2>D   { align1 WE_all 1Q I@1 };
add(4)          g39.2<4>D       g39.1<8,2,4>D   g39.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g39.3<4>D       g39.1<8,2,4>D   g39.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g39.4<1>D       g39.3<0,1,0>D   g39.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g40.4<1>D       g40.3<0,1,0>D   g40.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(8)          g40<1>D         g39.7<0,1,0>D   g40<1,1,0>D     { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g44<1>D         g59<0,1,0>D     g39<1,1,0>D     { align1 1H $6.src compacted };
(+f0.0) if(16)  JIP:  LABEL23         UIP:  LABEL22             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g8<1>UD         0x7f800000UD                    { align1 1H F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g6<1>UD         0x7f800000UD                    { align1 1H F@6 };
mov(16)         g4<1>UD         0x7f800000UD                    { align1 1H F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g16<1>UD        0xff800000UD                    { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g14<1>UD        0xff800000UD                    { align1 1H F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g12<1>UD        0xff800000UD                    { align1 1H F@2 };
mov(16)         g94<1>UD        0x7f800000UD                    { align1 1H F@1 };
mov(16)         g92<1>UD        0x7f800000UD                    { align1 1H };
mov(16)         g90<1>UD        0x7f800000UD                    { align1 1H };
mov(16)         g100<1>UD       0xff800000UD                    { align1 1H F@3 };
mov(16)         g98<1>UD        0xff800000UD                    { align1 1H F@3 };
mov(16)         g96<1>UD        0xff800000UD                    { align1 1H F@7 };
else(16)        JIP:  LABEL22         UIP:  LABEL22             { align1 1H };

LABEL23:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shl(16)         g46<1>D         g44<8,8,1>D     0x00000005UD    { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
add(16)         g49<1>D         g3<0,1,0>D      g46<1,1,0>D     { align1 1H I@1 compacted };
shr(16)         g47<1>UD        g44<1,1,0>UD    0x0000001bUD    { align1 1H F@1 compacted };
shl(16)         g45<1>D         g88<8,8,1>D     0x00000018UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(16)  g51<1>UD        g49<1,1,0>UD    g3<0,1,0>UD     { align1 1H I@3 compacted };
mov(8)          g56<2>UD        g49<4,4,1>UD                    { align1 1Q $7.src };
mov(8)          g58<2>UD        g50<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
or(16)          g10<1>UD        g22<1,1,0>UD    g45<1,1,0>UD    { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add3(16)        g53<1>D         g3.1<0,1,0>D    g47<8,8,1>D     -g51<1,1,1>D { align1 1H A@4 };
mov(8)          g58.1<2>UD      g54<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g56.1<2>UD      g53<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g56UD           g4UD            0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g55<1>D         g49<1,1,0>D     16D             { align1 1H F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g57<1>UD        g55<1,1,0>UD    g49<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g61<2>UD        g55<4,4,1>UD                    { align1 1Q };
mov(8)          g63<2>UD        g56<4,4,1>UD                    { align1 2Q $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g59<1>D         -g57<1,1,0>D    g53<1,1,0>D     { align1 1H @3 $7.dst compacted };
mov(8)          g63.1<2>UD      g60<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g61.1<2>UD      g59<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g61UD           g12UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g96<1>F         g4<1,1,0>F      g12<1,1,0>F     { align1 1H F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g98<1>F         g6<1,1,0>F      g14<1,1,0>F     { align1 1H F@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g100<1>F        g8<1,1,0>F      g16<1,1,0>F     { align1 1H F@5 compacted };
mov(16)         g90<1>UD        g96<8,8,1>UD                    { align1 1H F@3 };
mov(16)         g92<1>UD        g98<8,8,1>UD                    { align1 1H F@2 };
mov(16)         g94<1>UD        g100<8,8,1>UD                   { align1 1H F@1 };

LABEL22:
endif(16)       JIP:  LABEL0                                    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g20<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g51<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H F@3 compacted };
mov(16)         g51<1>F         g4<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g53<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@3 compacted };
mov(16)         g53<1>F         g6<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g55<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@3 compacted };
mov(16)         g55<1>F         g8<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g57<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g57<1>F         g12<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
mov(16)         g59<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g59<1>F         g14<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g61<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H F@6 compacted };
mov(16)         g61<1>F         g16<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g63<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@5 compacted };
mov(16)         g63<1>F         g90<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g65<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@4 compacted };
mov(16)         g65<1>F         g92<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         g67<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@3 compacted };
mov(16)         g67<1>F         g94<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         g69<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g69<1>F         g96<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(16)         g71<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g71<1>F         g98<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(16)         g73<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@3 compacted };
mov(16)         g73<1>F         g100<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g33<2>UD        g53.1<8,4,2>UD                  { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g46<2>UD        g55.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(8)          g83<2>UD        g57.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
mov(8)          g119<2>UD       g59.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
mov(8)          g22<2>UD        g63.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g27<2>UD        g65.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g35<2>UD        g67.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g40<2>UD        g69.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g48<2>UD        g71.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(8)          g78<2>UD        g73.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(8)          g20<2>UD        g51.1<8,4,2>UD                  { align1 WE_all 1Q };
mov(8)          g13<2>UD        g61.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
sel.l(8)        g31<2>F         g53<8,4,2>F     g33<8,4,2>F     { align1 WE_all 1Q $3.src };
sel.l(8)        g44<2>F         g55<8,4,2>F     g46<8,4,2>F     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.ge(8)       g81<2>F         g57<8,4,2>F     g83<8,4,2>F     { align1 WE_all 1Q I@7 };
sel.ge(8)       g117<2>F        g59<8,4,2>F     g119<8,4,2>F    { align1 WE_all 1Q I@7 };
sel.l(8)        g16<2>F         g63<8,4,2>F     g22<8,4,2>F     { align1 WE_all 1Q I@7 };
sel.l(8)        g25<2>F         g65<8,4,2>F     g27<8,4,2>F     { align1 WE_all 1Q I@7 };
sel.ge(8)       g38<2>F         g69<8,4,2>F     g40<8,4,2>F     { align1 WE_all 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.ge(8)       g76<2>F         g73<8,4,2>F     g78<8,4,2>F     { align1 WE_all 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.l(8)        g18<2>F         g51<8,4,2>F     g20<8,4,2>F     { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.ge(8)       g11<2>F         g61<8,4,2>F     g13<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g53.1<2>UD      g31<8,4,2>UD                    { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g55.1<2>UD      g44<8,4,2>UD                    { align1 WE_all 1Q F@7 };
mov(8)          g57.1<2>UD      g81<8,4,2>UD                    { align1 WE_all 1Q F@7 };
mov(8)          g59.1<2>UD      g117<8,4,2>UD                   { align1 WE_all 1Q F@7 };
mov(8)          g63.1<2>UD      g16<8,4,2>UD                    { align1 WE_all 1Q F@6 };
mov(8)          g65.1<2>UD      g25<8,4,2>UD                    { align1 WE_all 1Q F@5 };
mov(8)          g69.1<2>UD      g38<8,4,2>UD                    { align1 WE_all 1Q F@4 };
mov(8)          g73.1<2>UD      g76<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g51.1<2>UD      g18<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g61.1<2>UD      g11<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g101<4>UD       g57.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g95<4>UD        g57.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g5<4>UD         g59.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g3<4>UD         g59.1<8,2,4>UD                  { align1 WE_all 1N $1.dst };
mov(4)          g93<4>UD        g63.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g91<4>UD        g63.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g99<4>UD        g65.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g97<4>UD        g65.1<8,2,4>UD                  { align1 WE_all 1N };
sel.l(8)        g30<2>F         g67<8,4,2>F     g35<8,4,2>F     { align1 WE_all 1Q $3.src };
mov(4)          g111<4>UD       g69.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g109<4>UD       g69.1<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g43<2>F         g71<8,4,2>F     g48<8,4,2>F     { align1 WE_all 1Q };
mov(4)          g123<4>UD       g73.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g121<4>UD       g73.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g23<4>UD        g51.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g87<4>UD        g61.2<8,2,4>UD                  { align1 WE_all 1N $13.src };
mov(4)          g85<4>UD        g61.1<8,2,4>UD                  { align1 WE_all 1N $13.src };
mov(4)          g25<4>UD        g51.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g38<4>UD        g53.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g89<4>F         g95<8,2,4>F     g101<8,2,4>F    { align1 WE_all 1N };
mov(4)          g75<4>UD        g55.2<8,2,4>UD                  { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.ge(4)       g125<4>F        g3<8,2,4>F      g5<8,2,4>F      { align1 WE_all 1N };
sel.l(4)        g28<4>F         g97<8,2,4>F     g99<8,2,4>F     { align1 WE_all 1N $3.src };
mov(8)          g67.1<2>UD      g30<8,4,2>UD                    { align1 WE_all 1Q F@5 };
sel.ge(4)       g41<4>F         g109<8,2,4>F    g111<8,2,4>F    { align1 WE_all 1N I@7 };
mov(8)          g71.1<2>UD      g43<8,4,2>UD                    { align1 WE_all 1Q F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.ge(4)       g79<4>F         g121<8,2,4>F    g123<8,2,4>F    { align1 WE_all 1N I@7 };
sel.ge(4)       g14<4>F         g85<8,2,4>F     g87<8,2,4>F     { align1 WE_all 1N I@6 };
sel.l(4)        g21<4>F         g23<8,2,4>F     g25<8,2,4>F     { align1 WE_all 1N I@5 };
mov(4)          g57.2<4>UD      g89<8,2,4>UD                    { align1 WE_all 1N F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g36<4>UD        g53.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g59.2<4>UD      g125<8,2,4>UD                   { align1 WE_all 1N F@6 };
mov(4)          g49<4>UD        g55.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g65.2<4>UD      g28<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g105<4>UD       g67.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g103<4>UD       g67.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g69.2<4>UD      g41<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g117<4>UD       g71.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g115<4>UD       g71.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g73.2<4>UD      g79<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g61.2<4>UD      g14<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g51.2<4>UD      g21<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g110<4>UD       g57.1<8,2,4>UD                  { align1 WE_all 1N F@4 };
sel.l(4)        g34<4>F         g36<8,2,4>F     g38<8,2,4>F     { align1 WE_all 1N };
mov(4)          g10<4>UD        g59.3<8,2,4>UD                  { align1 WE_all 1N $2.src };
mov(4)          g8<4>UD         g59.1<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g47<4>F         g49<8,2,4>F     g75<8,2,4>F     { align1 WE_all 1N };
sel.l(4)        g23<4>F         g91<8,2,4>F     g93<8,2,4>F     { align1 WE_all 1N };
mov(4)          g100<4>UD       g65.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g112<4>UD       g69.1<8,2,4>UD                  { align1 WE_all 1N A@7 };
mov(4)          g88<4>UD        g61.1<8,2,4>UD                  { align1 WE_all 1N A@5 };
mov(4)          g30<4>UD        g51.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g124<4>UD       g73.1<8,2,4>UD                  { align1 WE_all 1N A@6 };
mov(4)          g126<4>UD       g73.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g28<4>UD        g51.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g53.2<4>UD      g34<8,2,4>UD                    { align1 WE_all 1N F@3 };
sel.ge(4)       g6<4>F          g8<8,2,4>F      g10<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g55.2<4>UD      g47<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g63.2<4>UD      g23<8,2,4>UD                    { align1 WE_all 1N F@2 };
sel.l(4)        g36<4>F         g103<8,2,4>F    g105<8,2,4>F    { align1 WE_all 1N };
sel.ge(4)       g49<4>F         g115<8,2,4>F    g117<8,2,4>F    { align1 WE_all 1N };
mov(4)          g90<4>UD        g61.3<8,2,4>UD                  { align1 WE_all 1N F@4 };
sel.l(4)        g26<4>F         g28<8,2,4>F     g30<8,2,4>F     { align1 WE_all 1N I@5 };
mov(4)          g43<4>UD        g53.3<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g41<4>UD        g53.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g59.3<4>UD      g6<8,2,4>UD                     { align1 WE_all 1N F@4 };
mov(4)          g80<4>UD        g55.3<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g78<4>UD        g55.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g96<4>UD        g63.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g94<4>UD        g63.1<8,2,4>UD                  { align1 WE_all 1N F@5 };
mov(4)          g67.2<4>UD      g36<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g71.2<4>UD      g49<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g102<4>UD       g65.3<8,2,4>UD                  { align1 WE_all 1N F@3 };
sel.ge(4)       g15<4>F         g88<8,2,4>F     g90<8,2,4>F     { align1 WE_all 1N };
mov(4)          g114<4>UD       g69.3<8,2,4>UD                  { align1 WE_all 1N F@3 };
mov(4)          g116<4>UD       g57.3<8,2,4>UD                  { align1 WE_all 1N F@3 };
mov(4)          g51.3<4>UD      g26<8,2,4>UD                    { align1 WE_all 1N F@2 };
sel.l(4)        g39<4>F         g41<8,2,4>F     g43<8,2,4>F     { align1 WE_all 1N };
sel.ge(4)       g59.4<1>F       g59.3<0,1,0>F   g59.4<4,4,1>F   { align1 WE_all 1N };
sel.ge(4)       g60.4<1>F       g60.3<0,1,0>F   g60.4<4,4,1>F   { align1 WE_all 1N };
sel.l(4)        g76<4>F         g78<8,2,4>F     g80<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g24<4>F         g94<8,2,4>F     g96<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g108<4>UD       g67.3<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g106<4>UD       g67.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g120<4>UD       g71.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g118<4>UD       g71.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
sel.l(4)        g29<4>F         g100<8,2,4>F    g102<8,2,4>F    { align1 WE_all 1N I@7 };
mov(4)          g61.3<4>UD      g15<8,2,4>UD                    { align1 WE_all 1N F@7 };
sel.ge(4)       g104<4>F        g110<8,2,4>F    g116<8,2,4>F    { align1 WE_all 1N I@7 };
sel.l(4)        g51.4<1>F       g51.3<0,1,0>F   g51.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.l(4)        g52.4<1>F       g52.3<0,1,0>F   g52.4<4,4,1>F   { align1 WE_all 1N I@6 };
mov(4)          g53.3<4>UD      g39<8,2,4>UD                    { align1 WE_all 1N F@7 };
sel.ge(8)       g60<1>F         g59.7<0,1,0>F   g60<8,8,1>F     { align1 WE_all 1Q F@7 };
mov(4)          g55.3<4>UD      g76<8,2,4>UD                    { align1 WE_all 1N F@7 };
mov(4)          g63.3<4>UD      g24<8,2,4>UD                    { align1 WE_all 1N F@6 };
sel.l(4)        g37<4>F         g106<8,2,4>F    g108<8,2,4>F    { align1 WE_all 1N I@7 };
sel.ge(4)       g42<4>F         g112<8,2,4>F    g114<8,2,4>F    { align1 WE_all 1N };
mov(4)          g65.3<4>UD      g29<8,2,4>UD                    { align1 WE_all 1N F@7 };
sel.ge(4)       g61.4<1>F       g61.3<0,1,0>F   g61.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g62.4<1>F       g62.3<0,1,0>F   g62.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g80<4>F         g124<8,2,4>F    g126<8,2,4>F    { align1 WE_all 1N };
mov(4)          g57.3<4>UD      g104<8,2,4>UD                   { align1 WE_all 1N F@7 };
sel.l(8)        g52<1>F         g51.7<0,1,0>F   g52<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.l(4)        g53.4<1>F       g53.3<0,1,0>F   g53.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.l(4)        g54.4<1>F       g54.3<0,1,0>F   g54.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.l(4)        g55.4<1>F       g55.3<0,1,0>F   g55.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g56.4<1>F       g56.3<0,1,0>F   g56.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g63.4<1>F       g63.3<0,1,0>F   g63.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g64.4<1>F       g64.3<0,1,0>F   g64.4<4,4,1>F   { align1 WE_all 1N I@3 };
mov(4)          g67.3<4>UD      g37<8,2,4>UD                    { align1 WE_all 1N };
mov(4)          g69.3<4>UD      g42<8,2,4>UD                    { align1 WE_all 1N };
sel.l(4)        g65.4<1>F       g65.3<0,1,0>F   g65.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g66.4<1>F       g66.3<0,1,0>F   g66.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g75<4>F         g118<8,2,4>F    g120<8,2,4>F    { align1 WE_all 1N I@6 };
sel.ge(8)       g62<1>F         g61.7<0,1,0>F   g62<8,8,1>F     { align1 WE_all 1Q };
mov(4)          g73.3<4>UD      g80<8,2,4>UD                    { align1 WE_all 1N };
sel.ge(4)       g57.4<1>F       g57.3<0,1,0>F   g57.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g58.4<1>F       g58.3<0,1,0>F   g58.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(8)        g54<1>F         g53.7<0,1,0>F   g54<8,8,1>F     { align1 WE_all 1Q };
sel.l(8)        g56<1>F         g55.7<0,1,0>F   g56<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.l(8)        g64<1>F         g63.7<0,1,0>F   g64<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.l(4)        g67.4<1>F       g67.3<0,1,0>F   g67.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g68.4<1>F       g68.3<0,1,0>F   g68.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g69.4<1>F       g69.3<0,1,0>F   g69.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g70.4<1>F       g70.3<0,1,0>F   g70.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(8)        g66<1>F         g65.7<0,1,0>F   g66<8,8,1>F     { align1 WE_all 1Q };
mov(4)          g71.3<4>UD      g75<8,2,4>UD                    { align1 WE_all 1N };
sel.ge(4)       g73.4<1>F       g73.3<0,1,0>F   g73.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g74.4<1>F       g74.3<0,1,0>F   g74.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(8)       g58<1>F         g57.7<0,1,0>F   g58<8,8,1>F     { align1 WE_all 1Q };
sel.l(8)        g68<1>F         g67.7<0,1,0>F   g68<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(8)       g70<1>F         g69.7<0,1,0>F   g70<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.ge(4)       g71.4<1>F       g71.3<0,1,0>F   g71.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g72.4<1>F       g72.3<0,1,0>F   g72.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g74<1>F         g73.7<0,1,0>F   g74<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.ge(8)       g72<1>F         g71.7<0,1,0>F   g72<8,8,1>F     { align1 WE_all 1Q F@2 };
(+f0.0) if(16)  JIP:  LABEL24         UIP:  LABEL24             { align1 1H };
add(16)         g75<1>D         g2.2<0,1,0>D    128D            { align1 1H compacted };
mov(16)         g85<1>D         g52.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g77<1>UD        g75<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
mov(8)          g81<2>UD        g75<4,4,1>UD                    { align1 1Q };
mov(8)          g83<2>UD        g76<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g79<1>D         -g77<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
mov(8)          g81.1<2>UD      g79<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g83.1<2>UD      g80<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g81UD           g85UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $14 };
add(16)         g80<1>D         g2.2<0,1,0>D    132D            { align1 1H $14.src compacted };
mov(16)         g90<1>D         g54.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
cmp.l.f0.0(16)  g82<1>UD        g80<1,1,0>UD    0x00000084UD    { align1 1H I@2 compacted };
mov(8)          g86<2>UD        g80<4,4,1>UD                    { align1 1Q $14.src };
mov(8)          g88<2>UD        g81<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(16)         g84<1>D         -g82<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g86.1<2>UD      g84<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g88.1<2>UD      g85<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g86UD           g90UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $15 };
add(16)         g85<1>D         g2.2<0,1,0>D    136D            { align1 1H $15.src compacted };
mov(16)         g95<1>D         g56.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
cmp.l.f0.0(16)  g87<1>UD        g85<1,1,0>UD    0x00000088UD    { align1 1H I@2 compacted };
mov(8)          g91<2>UD        g85<4,4,1>UD                    { align1 1Q $15.src };
mov(8)          g93<2>UD        g86<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g89<1>D         -g87<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g91.1<2>UD      g89<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g93.1<2>UD      g90<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g91UD           g95UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };
add(16)         g90<1>D         g2.2<0,1,0>D    140D            { align1 1H $0.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
mov(16)         g100<1>D        g58.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g92<1>UD        g90<1,1,0>UD    0x0000008cUD    { align1 1H I@2 compacted };
mov(8)          g96<2>UD        g90<4,4,1>UD                    { align1 1Q $0.src };
mov(8)          g98<2>UD        g91<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g94<1>D         -g92<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g96.1<2>UD      g94<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g98.1<2>UD      g95<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g96UD           g100UD          0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
add(16)         g95<1>D         g2.2<0,1,0>D    144D            { align1 1H $1.src compacted };
mov(16)         g105<1>D        g60.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g97<1>UD        g95<1,1,0>UD    0x00000090UD    { align1 1H I@2 compacted };
mov(8)          g101<2>UD       g95<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g103<2>UD       g96<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g99<1>D         -g97<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g101.1<2>UD     g99<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g103.1<2>UD     g100<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g101UD          g105UD          0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $2 };
add(16)         g100<1>D        g2.2<0,1,0>D    148D            { align1 1H $2.src compacted };
mov(16)         g110<1>D        g62.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g102<1>UD       g100<1,1,0>UD   0x00000094UD    { align1 1H I@2 compacted };
mov(8)          g106<2>UD       g100<4,4,1>UD                   { align1 1Q $2.src };
mov(8)          g108<2>UD       g101<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g104<1>D        -g102<1,1,0>D   g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g106.1<2>UD     g104<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g108.1<2>UD     g105<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g106UD          g110UD          0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $3 };
mov(16)         g115<1>D        g64.7<0,1,0>D                   { align1 1H };
mov(8)          g111.1<2>D      g2.1<0,1,0>D                    { align1 1Q $3.src };
mov(8)          g113.1<2>D      g2.1<0,1,0>D                    { align1 2Q };
mov(8)          g111<2>D        g2<0,1,0>D                      { align1 1Q I@2 };
mov(8)          g113<2>D        g2<0,1,0>D                      { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g111UD          g115UD          0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };
add(16)         g105<1>D        g2<0,1,0>D      4D              { align1 1H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
mov(16)         g120<1>D        g66.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g107<1>UD       g105<1,1,0>UD   g2<0,1,0>UD     { align1 1H I@2 compacted };
mov(8)          g116<2>UD       g105<4,4,1>UD                   { align1 1Q $4.src };
mov(8)          g118<2>UD       g106<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g109<1>D        -g107<1,1,0>D   g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g116.1<2>UD     g109<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g118.1<2>UD     g110<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g116UD          g120UD          0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $5 };
add(16)         g110<1>D        g2<0,1,0>D      8D              { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
mov(16)         g125<1>D        g68.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g112<1>UD       g110<1,1,0>UD   g2<0,1,0>UD     { align1 1H I@2 compacted };
mov(8)          g121<2>UD       g110<4,4,1>UD                   { align1 1Q $5.src };
mov(8)          g123<2>UD       g111<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g114<1>D        -g112<1,1,0>D   g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g121.1<2>UD     g114<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g123.1<2>UD     g115<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g121UD          g125UD          0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };
add(16)         g115<1>D        g2<0,1,0>D      16D             { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
mov(16)         g7<1>D          g70.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g117<1>UD       g115<1,1,0>UD   g2<0,1,0>UD     { align1 1H I@2 compacted };
mov(8)          g3<2>UD         g115<4,4,1>UD                   { align1 1Q };
mov(8)          g5<2>UD         g116<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g119<1>D        -g117<1,1,0>D   g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g3.1<2>UD       g119<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g5.1<2>UD       g120<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g3UD            g7UD            0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $7 };
add(16)         g120<1>D        g2<0,1,0>D      20D             { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g12<1>D         g72.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g122<1>UD       g120<1,1,0>UD   0x00000014UD    { align1 1H I@2 compacted };
mov(8)          g8<2>UD         g120<4,4,1>UD                   { align1 1Q $7.src };
mov(8)          g10<2>UD        g121<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g124<1>D        -g122<1,1,0>D   g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g8.1<2>UD       g124<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g10.1<2>UD      g125<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g8UD            g12UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };
add(16)         g125<1>D        g2<0,1,0>D      24D             { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
mov(16)         g17<1>D         g74.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(16)  g3<1>UD         g125<1,1,0>UD   0x00000018UD    { align1 1H I@2 compacted };
mov(8)          g13<2>UD        g125<4,4,1>UD                   { align1 1Q $8.src };
mov(8)          g15<2>UD        g126<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g5<1>D          -g3<1,1,0>D     g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g15.1<2>UD      g6<4,4,1>UD                     { align1 2Q I@1 };
mov(8)          g13.1<2>UD      g5<4,4,1>UD                     { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g13UD           g17UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $9 };

LABEL24:
endif(16)       JIP:  LABEL0                                    { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL25                                   { align1 1H };

LABEL25:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q I@6 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_primref_primrefs_from_DXR_instances_code[] = {
    0x80000065, 0x51058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x06050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00510c, 0x00340000,
    0xe2523040, 0x04015103, 0x80030061, 0x7f054410,
    0x00000000, 0x76543210, 0x00041b69, 0x65058660,
    0x02460605, 0x00000004, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa00520c, 0x00300000, 0x647f1a40, 0x00807f95,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x14050160, 0x00467f05, 0x00000000,
    0xa0161940, 0x65001402, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00041970, 0x00010220,
    0x52461605, 0x000002c4, 0x01040022, 0x0001c060,
    0x00002ab8, 0x00002ab8, 0x00040069, 0x66058660,
    0x02461605, 0x00000006, 0xa0691940, 0x6601025a,
    0xe0670068, 0x01a01603, 0x276b1a70, 0x0210690b,
    0x00030061, 0x43060220, 0x00346905, 0x00000000,
    0x00130061, 0x45060220, 0x00346a05, 0x00000000,
    0x00041b52, 0x18040660, 0x0e2e02a4, 0x6b056705,
    0x00131961, 0x45260220, 0x00341905, 0x00000000,
    0x00031a61, 0x43260220, 0x00341805, 0x00000000,
    0x00040066, 0x00010220, 0x22466905, 0x00461805,
    0x01040022, 0x0001c060, 0x00000e70, 0x00000e40,
    0xa06c0040, 0x03006903, 0xa0720040, 0x03806903,
    0x276e1a70, 0x69006c03, 0x27741a70, 0x69007203,
    0x00030061, 0x07060220, 0x00346c05, 0x00000000,
    0x00130061, 0x09060220, 0x00346d05, 0x00000000,
    0x00030061, 0x0b060220, 0x00347205, 0x00000000,
    0x00130061, 0x0d060220, 0x00347305, 0x00000000,
    0xa0701e40, 0x18026e02, 0xa0761e40, 0x18027402,
    0x00031a61, 0x07260220, 0x00347005, 0x00000000,
    0x00131b61, 0x09260220, 0x00347105, 0x00000000,
    0x00031b61, 0x0b260220, 0x00347605, 0x00000000,
    0x00131c61, 0x0d260220, 0x00347705, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x71140000, 0xfb040724, 0x00040000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x77240000, 0xfb040b24, 0x000c0000,
    0x00042261, 0x58050020, 0x0066711f, 0x00000000,
    0x00042266, 0x00010220, 0x22467705, 0x00467905,
    0x01040022, 0x0001c060, 0x00000d00, 0x00000ce0,
    0xa07b0040, 0x08007703, 0xa0063240, 0x08c07703,
    0x277d1a70, 0x77007b03, 0x00033261, 0x0e060220,
    0x00347b05, 0x00000000, 0x00130061, 0x10060220,
    0x00347c05, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xe7081c70, 0x08c00603,
    0x00030061, 0x3e060220, 0x00340605, 0x00000000,
    0x00130061, 0x40060220, 0x00340705, 0x00000000,
    0xa0041e40, 0x79027d02, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa00a1c40, 0x79020802,
    0x00031a61, 0x0e260220, 0x00340405, 0x00000000,
    0x00131b61, 0x10260220, 0x00340505, 0x00000000,
    0x00031b61, 0x3e260220, 0x00340a05, 0x00000000,
    0x00131c61, 0x40260220, 0x00340b05, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x0c140000, 0xfb040e24, 0x00040000,
    0xa7002270, 0x7f830c01, 0x01040022, 0x0001c060,
    0x000001b0, 0x000001a0, 0xa00e3240, 0x08407703,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xe7101970, 0x08400e03, 0x00030061, 0x1c060220,
    0x00340e05, 0x00000000, 0x00130061, 0x1e060220,
    0x00340f05, 0x00000000, 0xa0121b40, 0x79021002,
    0x00031961, 0x1c260220, 0x00341205, 0x00000000,
    0x00131a61, 0x1e260220, 0x00341305, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x1a140000, 0xfb041c24, 0x00040000,
    0xa7002370, 0x7f831a01, 0x01040022, 0x0001c060,
    0x000000e0, 0x000000d0, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa01b1140, 0x08807703,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xe71d1970, 0x08801b03, 0x00030061, 0x22060220,
    0x00341b05, 0x00000000, 0x00130061, 0x24060220,
    0x00341c05, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa01f1b40, 0x79021d02,
    0x00031961, 0x22260220, 0x00341f05, 0x00000000,
    0x00131a61, 0x24260220, 0x00342005, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x20140000, 0xfb042224, 0x00040000,
    0xe73a2470, 0x7f832000, 0x00040024, 0x0001c060,
    0x00000020, 0x00000020, 0x00041161, 0x3a054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040024, 0x0001c060,
    0x00000020, 0x00000020, 0x00040961, 0x3a054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000a18, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x22140000,
    0xfb043e24, 0x00040000, 0xa7002570, 0x7f832201,
    0x01040022, 0x0001c060, 0x000001a0, 0x00000190,
    0xa0243440, 0x09007703, 0xe7261970, 0x09002403,
    0x00030061, 0x2b060220, 0x00342405, 0x00000000,
    0x00130061, 0x2d060220, 0x00342505, 0x00000000,
    0xa0281b40, 0x79022602, 0x00031961, 0x2b260220,
    0x00342805, 0x00000000, 0x00131a61, 0x2d260220,
    0x00342905, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x29140000,
    0xfb042b24, 0x00040000, 0xa7002670, 0x7f832901,
    0x01040022, 0x0001c060, 0x000000e0, 0x000000d0,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa02a1140, 0x09407703, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xe72c1970, 0x09402a03,
    0x00030061, 0x31060220, 0x00342a05, 0x00000000,
    0x00130061, 0x33060220, 0x00342b05, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa02e1b40, 0x79022c02, 0x00031961, 0x31260220,
    0x00342e05, 0x00000000, 0x00131a61, 0x33260220,
    0x00342f05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x2f140000,
    0xfb043124, 0x00040000, 0xe7042770, 0x7f832f00,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00041161, 0x04054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00040961, 0x04054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000830,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xae301170, 0x00005803, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x20320965, 0x04003003,
    0xa04f0066, 0x04223002, 0x00040a65, 0x00010220,
    0x22463205, 0x00463a05, 0x01040022, 0x0001c060,
    0x00000518, 0x000004e8, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0510040, 0x08407703,
    0xa0560040, 0x09007703, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa01b1240, 0x01006903,
    0x00040061, 0x12054220, 0x00000000, 0x000000c0,
    0xe7531c70, 0x08405103, 0x00031c61, 0x32060220,
    0x00345605, 0x00000000, 0x80103701, 0x00000000,
    0x00000000, 0x00000000, 0x00131d61, 0x34060220,
    0x00345705, 0x00000000, 0x00033561, 0x3f060220,
    0x00345105, 0x00000000, 0x00133561, 0x41060220,
    0x00345205, 0x00000000, 0xe75a0070, 0x09005603,
    0x00031f61, 0x47060220, 0x00341b05, 0x00000000,
    0x00131f61, 0x49060220, 0x00341c05, 0x00000000,
    0xa0510040, 0x02006903, 0x27243470, 0x69001b03,
    0xa0551f40, 0x79025302, 0xa05c1e40, 0x79025a02,
    0x27531c70, 0x69005103, 0x00030061, 0x4b060220,
    0x00345105, 0x00000000, 0x00130061, 0x4d060220,
    0x00345205, 0x00000000, 0xa0261e40, 0x18022402,
    0x00131e61, 0x41260220, 0x00345605, 0x00000000,
    0x00031f61, 0x3f260220, 0x00345505, 0x00000000,
    0x00031f61, 0x32260220, 0x00345c05, 0x00000000,
    0x00131f61, 0x34260220, 0x00345d05, 0x00000000,
    0xa0551f40, 0x18025302, 0x00031e61, 0x47260220,
    0x00342605, 0x00000000, 0x00131f61, 0x49260220,
    0x00342705, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x1a240000,
    0xfb043f24, 0x000c0000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x1e240000,
    0xfb043224, 0x000c0000, 0x00031b61, 0x4b260220,
    0x00345505, 0x00000000, 0x00131c61, 0x4d260220,
    0x00345605, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044a31, 0x2a440000,
    0xfb044724, 0x003c0000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x32440000,
    0xfb044b24, 0x003c0000, 0x25652962, 0x20001e00,
    0x205e2840, 0x1a001e00, 0x25671262, 0x65002200,
    0xe0631241, 0x3f005e00, 0x205d1e40, 0x0c002200,
    0x205f2840, 0x1c002000, 0xe06b1441, 0x34006700,
    0x203cca41, 0x2c006300, 0x80002b01, 0x00000000,
    0x00000000, 0x00000000, 0x20561941, 0x34006300,
    0xe0611541, 0x3f005d00, 0x206e1440, 0x6b001e00,
    0x0004ab5b, 0x5a040aa8, 0x0a0a5605, 0x61053205,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x0004da5b, 0x3e040aa8, 0x0a0a3c05, 0x61052a05,
    0x20731340, 0x1a206e00, 0x206d0040, 0x6b002200,
    0x206f0040, 0x6b002000, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x22440000,
    0xfb044324, 0x003c0000, 0xe0771341, 0x3f007300,
    0x20711340, 0x0c206d00, 0x20741340, 0x1c206f00,
    0x206e1341, 0x34407700, 0x20660041, 0x2c407700,
    0x20792c41, 0x24006300, 0xe0640041, 0x3f005f00,
    0x205f0041, 0x24407700, 0xe0761741, 0x3f007100,
    0x0004cc5b, 0x7b040aa8, 0x0a0a7905, 0x61052205,
    0xe0781741, 0x3f007400, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x0004da5b, 0x40040aa8,
    0x0a0a3e05, 0x64052e05, 0x80002b01, 0x00000000,
    0x00000000, 0x00000000, 0x00041f5b, 0x5c040aa8,
    0x0a0a5a05, 0x64053605, 0x00041261, 0x3d054220,
    0x00000000, 0x00000001, 0x0004155b, 0x61040aa8,
    0x0a4a5f05, 0x76052205, 0x0004175b, 0x6b040aa8,
    0x0a4a6605, 0x76052a05, 0x0004005b, 0x70040aa8,
    0x0a4a6e05, 0x76053205, 0x0004fc5b, 0x7d040aa8,
    0x0a0a7b05, 0x64052605, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x2042ea40, 0x30004000,
    0x205eeb40, 0x38005c00, 0x0004165b, 0x63040aa8,
    0x0a4a6105, 0x78052605, 0x0004165b, 0x6d040aa8,
    0x0a4a6b05, 0x78052e05, 0x0004165b, 0x72040aa8,
    0x0a4a7005, 0x78053605, 0x201aec40, 0x28007d00,
    0x20061340, 0x6d204200, 0x200e3240, 0x6d004200,
    0x20041340, 0x63201a00, 0x200c0040, 0x63001a00,
    0x20081640, 0x72205e00, 0x20103240, 0x72005e00,
    0x00040024, 0x0001c060, 0x00000040, 0x00000040,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00041a61, 0x3d054220, 0x00000000, 0x00000000,
    0x00040061, 0x12054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000002c0,
    0x00040070, 0x00018660, 0x26463a05, 0x00000000,
    0x01040962, 0x73058220, 0x02464f05, 0xffffffff,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0xae750070, 0x00010343, 0x00041965, 0x00010220,
    0x22467505, 0x00467305, 0x01040022, 0x0001c060,
    0x00000258, 0x00000258, 0xa0761a40, 0x00c06903,
    0xa07b0040, 0x01c06903, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa01b1240, 0x02c06903,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x3d054220, 0x00000000, 0x00000001,
    0x00040061, 0x58054220, 0x00000000, 0x00000000,
    0x27780d70, 0x69007603, 0x00033b61, 0x4c060220,
    0x00347605, 0x00000000, 0x00133b61, 0x4e060220,
    0x00347705, 0x00000000, 0x00031f61, 0x50060220,
    0x00347b05, 0x00000000, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00131f61, 0x52060220,
    0x00347c05, 0x00000000, 0x277d1770, 0x69007b03,
    0x00031f61, 0x54060220, 0x00341b05, 0x00000000,
    0x00131f61, 0x56060220, 0x00341c05, 0x00000000,
    0x271d3370, 0x69001b03, 0xa07a1f40, 0x18027802,
    0xa01a0a40, 0x18027d02, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa01f0a40, 0x18021d02,
    0x00031b61, 0x4c260220, 0x00347a05, 0x00000000,
    0x00131c61, 0x4e260220, 0x00347b05, 0x00000000,
    0x00031c61, 0x50260220, 0x00341a05, 0x00000000,
    0x00131d61, 0x52260220, 0x00341b05, 0x00000000,
    0x00031d61, 0x54260220, 0x00341f05, 0x00000000,
    0x00131e61, 0x56260220, 0x00342005, 0x00000000,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x0c140000, 0xfb044c24, 0x00040000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x0e140000, 0xfb045024, 0x00040000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044d31, 0x10140000, 0xfb045424, 0x00040000,
    0x80002b01, 0x00000000, 0x00000000, 0x00000000,
    0x00041461, 0x04050220, 0x00460c05, 0x00000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x00041661, 0x06050220, 0x00460e05, 0x00000000,
    0x80002d01, 0x00000000, 0x00000000, 0x00000000,
    0x00041261, 0x08050220, 0x00461005, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040024, 0x0001c060, 0x00000030, 0x00000030,
    0x00041f61, 0x3d054220, 0x00000000, 0x00000000,
    0x00041f61, 0x12054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040024, 0x0001c060, 0x00000040, 0x00000040,
    0x00041c61, 0x3d054220, 0x00000000, 0x00000000,
    0x00041c61, 0x12054220, 0x00000000, 0x00000000,
    0x00041f61, 0x58054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00001bb0,
    0x80040a61, 0x20054660, 0x00000000, 0x00000000,
    0x00040061, 0x20050660, 0x00463d05, 0x00000000,
    0x00040070, 0x00018660, 0x16461405, 0x00000000,
    0x80031a40, 0x20260660, 0x06442006, 0x00442026,
    0x80021940, 0x20470660, 0x06422027, 0x00422047,
    0x80021940, 0x20670660, 0x06422027, 0x00422067,
    0x80021940, 0x20850660, 0x06002064, 0x00342085,
    0x80021a40, 0x21850660, 0x06002164, 0x00342185,
    0xa4211940, 0x21012082, 0x01040022, 0x0001c060,
    0x000000e8, 0x000000d8, 0xa0221140, 0x02410203,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x37050660, 0x000021e4, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x27241a70, 0x02102203, 0x00033761, 0x33060220,
    0x00342205, 0x00000000, 0x00131761, 0x35060220,
    0x00342305, 0x00000000, 0xa0260b40, 0x02122412,
    0x00031961, 0x33260220, 0x00342605, 0x00000000,
    0x00131a61, 0x35260220, 0x00342705, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x3b140000, 0xfb183324, 0x01003714,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00042761, 0x3b054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00001a30,
    0x80041161, 0x29054660, 0x00000000, 0x00000000,
    0x00040061, 0x29050660, 0x00463d05, 0x00000000,
    0x00040070, 0x00018660, 0x16463d05, 0x00000000,
    0x80043640, 0x2b058150, 0x05587f05, 0xffffffff,
    0x80040961, 0x10014110, 0x00000000, 0x05200520,
    0x80040069, 0x10018510, 0x01462b05, 0x00020002,
    0x80040940, 0x10018110, 0x01461001, 0x05200520,
    0xe3270961, 0x001b0004, 0x80001961, 0x27054660,
    0x00000000, 0x00000000, 0x80031940, 0x27260660,
    0x06442706, 0x00442726, 0x80021940, 0x27470660,
    0x06422727, 0x00422747, 0x80021940, 0x27670660,
    0x06422727, 0x00422767, 0x80021940, 0x27850660,
    0x06002764, 0x00342785, 0x80021a40, 0x28850660,
    0x06002864, 0x00342885, 0xa4281940, 0x28012782,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xa02c3640, 0x27013b02, 0x01040022, 0x0001c060,
    0x000003a0, 0x00000130, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041261, 0x08054220,
    0x00000000, 0x7f800000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041661, 0x06054220,
    0x00000000, 0x7f800000, 0x00041461, 0x04054220,
    0x00000000, 0x7f800000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041161, 0x10054220,
    0x00000000, 0xff800000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041561, 0x0e054220,
    0x00000000, 0xff800000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041261, 0x0c054220,
    0x00000000, 0xff800000, 0x00041161, 0x5e054220,
    0x00000000, 0x7f800000, 0x00040061, 0x5c054220,
    0x00000000, 0x7f800000, 0x00040061, 0x5a054220,
    0x00000000, 0x7f800000, 0x00041361, 0x64054220,
    0x00000000, 0xff800000, 0x00041361, 0x62054220,
    0x00000000, 0xff800000, 0x00041761, 0x60054220,
    0x00000000, 0xff800000, 0x00040024, 0x0001c060,
    0x00000280, 0x00000280, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00040969, 0x2e058660,
    0x02462c05, 0x00000005, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0xa0311940, 0x2e010302,
    0xe02f1168, 0x01b02c03, 0x00040069, 0x2d058660,
    0x02465805, 0x00000018, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x27331b70, 0x03103103,
    0x00033761, 0x38060220, 0x00343105, 0x00000000,
    0x00130061, 0x3a060220, 0x00343205, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x200a1c66, 0x2d001603, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00040c52, 0x35040660,
    0x0e2e0324, 0x33052f05, 0x00131961, 0x3a260220,
    0x00343605, 0x00000000, 0x00031a61, 0x38260220,
    0x00343505, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xfb0c3824, 0x003c0444, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa0371740, 0x01003103,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x27391970, 0x31003703, 0x00030061, 0x3d060220,
    0x00343705, 0x00000000, 0x00133561, 0x3f060220,
    0x00343805, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa03bb740, 0x35023902,
    0x00131961, 0x3f260220, 0x00343c05, 0x00000000,
    0x00031a61, 0x3d260220, 0x00343b05, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x00000000, 0xfb0c3d24, 0x003c0c44,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x20601740, 0x0c000400, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x20621440, 0x0e000600,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x20641540, 0x10000800, 0x00041361, 0x5a050220,
    0x00466005, 0x00000000, 0x00041261, 0x5c050220,
    0x00466205, 0x00000000, 0x00041161, 0x5e050220,
    0x00466405, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00001578, 0x00040070, 0x00018660,
    0x16461405, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0xa3331361, 0x7f810000,
    0x60330061, 0x00100400, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0xa3350b61, 0x7f810000,
    0x60350061, 0x00100600, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0xa3370b61, 0x7f810000,
    0x60370061, 0x00100800, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xa3390e61, 0xff810000,
    0x60390061, 0x00100c00, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0xa33b0e61, 0xff810000,
    0x603b0061, 0x00100e00, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa33d1661, 0xff810000,
    0x603d0061, 0x00101000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa33f1d61, 0x7f810000,
    0x603f0061, 0x00105a00, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa3411c61, 0x7f810000,
    0x60410061, 0x00105c00, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0xa3431b61, 0x7f810000,
    0x60430061, 0x00105e00, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0xa3451c61, 0xff810000,
    0x60450061, 0x00106000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0xa3471c61, 0xff810000,
    0x60470061, 0x00106200, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0xa3491b61, 0xff810000,
    0x60490061, 0x00106400, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80030061, 0x21060220,
    0x00443526, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80031761, 0x2e060220,
    0x00443726, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80031761, 0x53060220,
    0x00443926, 0x00000000, 0x80031761, 0x77060220,
    0x00443b26, 0x00000000, 0x80031661, 0x16060220,
    0x00443f26, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80031561, 0x1b060220,
    0x00444126, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80031461, 0x23060220,
    0x00444326, 0x00000000, 0x80031361, 0x28060220,
    0x00444526, 0x00000000, 0x80031261, 0x30060220,
    0x00444726, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x4e060220,
    0x00444926, 0x00000000, 0x80030061, 0x14060220,
    0x00443326, 0x00000000, 0x80031761, 0x0d060220,
    0x00443d26, 0x00000000, 0x80033362, 0x1f060aa0,
    0x5a443506, 0x00442106, 0x80030062, 0x2c060aa0,
    0x5a443706, 0x00442e06, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80031f62, 0x51060aa0,
    0x4a443906, 0x00445306, 0x80031f62, 0x75060aa0,
    0x4a443b06, 0x00447706, 0x80031f62, 0x10060aa0,
    0x5a443f06, 0x00441606, 0x80031f62, 0x19060aa0,
    0x5a444106, 0x00441b06, 0x80031d62, 0x26060aa0,
    0x4a444506, 0x00442806, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80031b62, 0x4c060aa0,
    0x4a444906, 0x00444e06, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80031a62, 0x12060aa0,
    0x5a443306, 0x00441406, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80031962, 0x0b060aa0,
    0x4a443d06, 0x00440d06, 0x80031761, 0x35260220,
    0x00441f06, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80031761, 0x37260220,
    0x00442c06, 0x00000000, 0x80031761, 0x39260220,
    0x00445106, 0x00000000, 0x80031761, 0x3b260220,
    0x00447506, 0x00000000, 0x80031661, 0x3f260220,
    0x00441006, 0x00000000, 0x80031561, 0x41260220,
    0x00441906, 0x00000000, 0x80031461, 0x45260220,
    0x00442606, 0x00000000, 0x80030b61, 0x49260220,
    0x00444c06, 0x00000000, 0x80030a61, 0x33260220,
    0x00441206, 0x00000000, 0x80030961, 0x3d260220,
    0x00440b06, 0x00000000, 0x80021f61, 0x65070220,
    0x00423947, 0x00000000, 0x80020061, 0x5f070220,
    0x00423927, 0x00000000, 0x80021f61, 0x05070220,
    0x00423b47, 0x00000000, 0x80022161, 0x03070220,
    0x00423b27, 0x00000000, 0x80021f61, 0x5d070220,
    0x00423f47, 0x00000000, 0x80020061, 0x5b070220,
    0x00423f27, 0x00000000, 0x80020061, 0x63070220,
    0x00424147, 0x00000000, 0x80020061, 0x61070220,
    0x00424127, 0x00000000, 0x80033362, 0x1e060aa0,
    0x5a444306, 0x00442306, 0x80020061, 0x6f070220,
    0x00424547, 0x00000000, 0x80020061, 0x6d070220,
    0x00424527, 0x00000000, 0x80030062, 0x2b060aa0,
    0x4a444706, 0x00443006, 0x80020061, 0x7b070220,
    0x00424947, 0x00000000, 0x80020061, 0x79070220,
    0x00424927, 0x00000000, 0x80021761, 0x17070220,
    0x00423327, 0x00000000, 0x80023d61, 0x57070220,
    0x00423d47, 0x00000000, 0x80023d61, 0x55070220,
    0x00423d27, 0x00000000, 0x80020061, 0x19070220,
    0x00423347, 0x00000000, 0x80020061, 0x26070220,
    0x00423547, 0x00000000, 0x80020062, 0x59070aa0,
    0x4a425f07, 0x00426507, 0x80023b61, 0x4b070220,
    0x00423747, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80020062, 0x7d070aa0,
    0x4a420307, 0x00420507, 0x80023362, 0x1c070aa0,
    0x5a426107, 0x00426307, 0x80031561, 0x43260220,
    0x00441e06, 0x00000000, 0x80021f62, 0x29070aa0,
    0x4a426d07, 0x00426f07, 0x80031561, 0x47260220,
    0x00442b06, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80021f62, 0x4f070aa0,
    0x4a427907, 0x00427b07, 0x80021e62, 0x0e070aa0,
    0x4a425507, 0x00425707, 0x80021d62, 0x15070aa0,
    0x5a421707, 0x00421907, 0x80021761, 0x39470220,
    0x00425907, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80021761, 0x24070220,
    0x00423527, 0x00000000, 0x80021661, 0x3b470220,
    0x00427d07, 0x00000000, 0x80021761, 0x31070220,
    0x00423727, 0x00000000, 0x80021561, 0x41470220,
    0x00421c07, 0x00000000, 0x80021f61, 0x69070220,
    0x00424347, 0x00000000, 0x80020061, 0x67070220,
    0x00424327, 0x00000000, 0x80021461, 0x45470220,
    0x00422907, 0x00000000, 0x80021f61, 0x75070220,
    0x00424747, 0x00000000, 0x80020061, 0x73070220,
    0x00424727, 0x00000000, 0x80021361, 0x49470220,
    0x00424f07, 0x00000000, 0x80021261, 0x3d470220,
    0x00420e07, 0x00000000, 0x80021161, 0x33470220,
    0x00421507, 0x00000000, 0x80021461, 0x6e070220,
    0x00423927, 0x00000000, 0x80020062, 0x22070aa0,
    0x5a422407, 0x00422607, 0x80023261, 0x0a070220,
    0x00423b67, 0x00000000, 0x80020061, 0x08070220,
    0x00423b27, 0x00000000, 0x80020062, 0x2f070aa0,
    0x5a423107, 0x00424b07, 0x80020062, 0x17070aa0,
    0x5a425b07, 0x00425d07, 0x80021761, 0x64070220,
    0x00424127, 0x00000000, 0x80020f61, 0x70070220,
    0x00424527, 0x00000000, 0x80020d61, 0x58070220,
    0x00423d27, 0x00000000, 0x80021f61, 0x1e070220,
    0x00423367, 0x00000000, 0x80020e61, 0x7c070220,
    0x00424927, 0x00000000, 0x80020061, 0x7e070220,
    0x00424967, 0x00000000, 0x80020061, 0x1c070220,
    0x00423327, 0x00000000, 0x80021361, 0x35470220,
    0x00422207, 0x00000000, 0x80021f62, 0x06070aa0,
    0x4a420807, 0x00420a07, 0x80021361, 0x37470220,
    0x00422f07, 0x00000000, 0x80021261, 0x3f470220,
    0x00421707, 0x00000000, 0x80020062, 0x24070aa0,
    0x5a426707, 0x00426907, 0x80020062, 0x31070aa0,
    0x4a427307, 0x00427507, 0x80021461, 0x5a070220,
    0x00423d67, 0x00000000, 0x80021d62, 0x1a070aa0,
    0x5a421c07, 0x00421e07, 0x80021c61, 0x2b070220,
    0x00423567, 0x00000000, 0x80020061, 0x29070220,
    0x00423527, 0x00000000, 0x80021461, 0x3b670220,
    0x00420607, 0x00000000, 0x80021e61, 0x50070220,
    0x00423767, 0x00000000, 0x80020061, 0x4e070220,
    0x00423727, 0x00000000, 0x80021f61, 0x60070220,
    0x00423f67, 0x00000000, 0x80021561, 0x5e070220,
    0x00423f27, 0x00000000, 0x80021361, 0x43470220,
    0x00422407, 0x00000000, 0x80021261, 0x47470220,
    0x00423107, 0x00000000, 0x80021361, 0x66070220,
    0x00424167, 0x00000000, 0x80020062, 0x0f070aa0,
    0x4a425807, 0x00425a07, 0x80021361, 0x72070220,
    0x00424567, 0x00000000, 0x80021361, 0x74070220,
    0x00423967, 0x00000000, 0x80021261, 0x33670220,
    0x00421a07, 0x00000000, 0x80020062, 0x27070aa0,
    0x5a422907, 0x00422b07, 0x80020062, 0x3b850aa0,
    0x4a003b64, 0x00343b85, 0x80020062, 0x3c850aa0,
    0x4a003c64, 0x00343c85, 0x80021f62, 0x4c070aa0,
    0x5a424e07, 0x00425007, 0x80021f62, 0x18070aa0,
    0x5a425e07, 0x00426007, 0x80021e61, 0x6c070220,
    0x00424367, 0x00000000, 0x80021761, 0x6a070220,
    0x00424327, 0x00000000, 0x80021f61, 0x78070220,
    0x00424767, 0x00000000, 0x80021761, 0x76070220,
    0x00424727, 0x00000000, 0x80021f62, 0x1d070aa0,
    0x5a426407, 0x00426607, 0x80021761, 0x3d670220,
    0x00420f07, 0x00000000, 0x80021f62, 0x68070aa0,
    0x4a426e07, 0x00427407, 0x80021e62, 0x33850aa0,
    0x5a003364, 0x00343385, 0x80021e62, 0x34850aa0,
    0x5a003464, 0x00343485, 0x80021761, 0x35670220,
    0x00422707, 0x00000000, 0x80031762, 0x3c050aa0,
    0x4a003be4, 0x00463c05, 0x80021761, 0x37670220,
    0x00424c07, 0x00000000, 0x80021661, 0x3f670220,
    0x00421807, 0x00000000, 0x80021f62, 0x25070aa0,
    0x5a426a07, 0x00426c07, 0x80020062, 0x2a070aa0,
    0x4a427007, 0x00427207, 0x80021761, 0x41670220,
    0x00421d07, 0x00000000, 0x80021d62, 0x3d850aa0,
    0x4a003d64, 0x00343d85, 0x80021d62, 0x3e850aa0,
    0x4a003e64, 0x00343e85, 0x80020062, 0x50070aa0,
    0x4a427c07, 0x00427e07, 0x80021761, 0x39670220,
    0x00426807, 0x00000000, 0x80031762, 0x34050aa0,
    0x5a0033e4, 0x00463405, 0x80021d62, 0x35850aa0,
    0x5a003564, 0x00343585, 0x80021d62, 0x36850aa0,
    0x5a003664, 0x00343685, 0x80021c62, 0x37850aa0,
    0x5a003764, 0x00343785, 0x80021c62, 0x38850aa0,
    0x5a003864, 0x00343885, 0x80021b62, 0x3f850aa0,
    0x5a003f64, 0x00343f85, 0x80021b62, 0x40850aa0,
    0x5a004064, 0x00344085, 0x80020061, 0x43670220,
    0x00422507, 0x00000000, 0x80020061, 0x45670220,
    0x00422a07, 0x00000000, 0x80021c62, 0x41850aa0,
    0x5a004164, 0x00344185, 0x80021c62, 0x42850aa0,
    0x5a004264, 0x00344285, 0x80021e62, 0x4b070aa0,
    0x4a427607, 0x00427807, 0x80030062, 0x3e050aa0,
    0x4a003de4, 0x00463e05, 0x80020061, 0x49670220,
    0x00425007, 0x00000000, 0x80021c62, 0x39850aa0,
    0x4a003964, 0x00343985, 0x80021c62, 0x3a850aa0,
    0x4a003a64, 0x00343a85, 0x80030062, 0x36050aa0,
    0x5a0035e4, 0x00463605, 0x80031762, 0x38050aa0,
    0x5a0037e4, 0x00463805, 0x80031762, 0x40050aa0,
    0x5a003fe4, 0x00464005, 0x80021b62, 0x43850aa0,
    0x5a004364, 0x00344385, 0x80021b62, 0x44850aa0,
    0x5a004464, 0x00344485, 0x80021a62, 0x45850aa0,
    0x4a004564, 0x00344585, 0x80021a62, 0x46850aa0,
    0x4a004664, 0x00344685, 0x80030062, 0x42050aa0,
    0x5a0041e4, 0x00464205, 0x80020061, 0x47670220,
    0x00424b07, 0x00000000, 0x80021a62, 0x49850aa0,
    0x4a004964, 0x00344985, 0x80021a62, 0x4a850aa0,
    0x4a004a64, 0x00344a85, 0x80030062, 0x3a050aa0,
    0x4a0039e4, 0x00463a05, 0x80031762, 0x44050aa0,
    0x5a0043e4, 0x00464405, 0x80031662, 0x46050aa0,
    0x4a0045e4, 0x00464605, 0x80021962, 0x47850aa0,
    0x4a004764, 0x00344785, 0x80021962, 0x48850aa0,
    0x4a004864, 0x00344885, 0x80031662, 0x4a050aa0,
    0x4a0049e4, 0x00464a05, 0x80031262, 0x48050aa0,
    0x4a0047e4, 0x00464805, 0x01040022, 0x0001c060,
    0x00000818, 0x00000818, 0xa04b0040, 0x08010243,
    0x00040061, 0x55050660, 0x000034e4, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x274d0070, 0x02104b2b, 0x00030061, 0x51060220,
    0x00344b05, 0x00000000, 0x00130061, 0x53060220,
    0x00344c05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa04f0040, 0x02124d1a,
    0x00031961, 0x51260220, 0x00344f05, 0x00000000,
    0x00131a61, 0x53260220, 0x00345005, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x00000000, 0xfb2a5124, 0x01005514,
    0xa0503e40, 0x08410243, 0x00040061, 0x5a050660,
    0x000036e4, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0xe7521a70, 0x08405003,
    0x00033e61, 0x56060220, 0x00345005, 0x00000000,
    0x00130061, 0x58060220, 0x00345105, 0x00000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0xa0541b40, 0x0212521a, 0x00031961, 0x56260220,
    0x00345405, 0x00000000, 0x00131a61, 0x58260220,
    0x00345505, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044f31, 0x00000000,
    0xfb2a5624, 0x01005a14, 0xa0553f40, 0x08810243,
    0x00040061, 0x5f050660, 0x000038e4, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0xe7571a70, 0x08805503, 0x00033f61, 0x5b060220,
    0x00345505, 0x00000000, 0x00130061, 0x5d060220,
    0x00345605, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0xa0591b40, 0x0212571a,
    0x00031961, 0x5b260220, 0x00345905, 0x00000000,
    0x00131a61, 0x5d260220, 0x00345a05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb2a5b24, 0x01005f14,
    0xa05a3040, 0x08c10243, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x64050660,
    0x00003ae4, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xe75c1a70, 0x08c05a03,
    0x00033061, 0x60060220, 0x00345a05, 0x00000000,
    0x00130061, 0x62060220, 0x00345b05, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa05e1b40, 0x02125c1a, 0x00031961, 0x60260220,
    0x00345e05, 0x00000000, 0x00131a61, 0x62260220,
    0x00345f05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb2c6024, 0x01006414, 0xa05f3140, 0x09010243,
    0x00040061, 0x69050660, 0x00003ce4, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xe7611a70, 0x09005f03, 0x00033161, 0x65060220,
    0x00345f05, 0x00000000, 0x00130061, 0x67060220,
    0x00346005, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0631b40, 0x0212611a,
    0x00031961, 0x65260220, 0x00346305, 0x00000000,
    0x00131a61, 0x67260220, 0x00346405, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x00000000, 0xfb2c6524, 0x01006914,
    0xa0643240, 0x09410243, 0x00040061, 0x6e050660,
    0x00003ee4, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xe7661a70, 0x09406403,
    0x00033261, 0x6a060220, 0x00346405, 0x00000000,
    0x00130061, 0x6c060220, 0x00346505, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa0681b40, 0x0212661a, 0x00031961, 0x6a260220,
    0x00346805, 0x00000000, 0x00131a61, 0x6c260220,
    0x00346905, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xfb2c6a24, 0x01006e14, 0x00040061, 0x73050660,
    0x000040e4, 0x00000000, 0x00033361, 0x6f260660,
    0x00000224, 0x00000000, 0x00130061, 0x71260660,
    0x00000224, 0x00000000, 0x00031a61, 0x6f060660,
    0x00000204, 0x00000000, 0x00131a61, 0x71060660,
    0x00000204, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xfb2a6f24, 0x01007314, 0xa0693340, 0x00410203,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x78050660, 0x000042e4, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x276b1a70, 0x02106903, 0x00033461, 0x74060220,
    0x00346905, 0x00000000, 0x00130061, 0x76060220,
    0x00346a05, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa06d1b40, 0x02126b12,
    0x00031961, 0x74260220, 0x00346d05, 0x00000000,
    0x00131a61, 0x76260220, 0x00346e05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x00000000, 0xfb2a7424, 0x01007814,
    0xa06e3440, 0x00810203, 0x80001601, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x7d050660,
    0x000044e4, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x27701a70, 0x02106e03,
    0x00033561, 0x79060220, 0x00346e05, 0x00000000,
    0x00130061, 0x7b060220, 0x00346f05, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa0721b40, 0x02127012, 0x00031961, 0x79260220,
    0x00347205, 0x00000000, 0x00131a61, 0x7b260220,
    0x00347305, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xfb2a7924, 0x01007d14, 0xa0733540, 0x01010203,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x07050660, 0x000046e4, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x27751a70, 0x02107303, 0x00030061, 0x03060220,
    0x00347305, 0x00000000, 0x00130061, 0x05060220,
    0x00347405, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa0771b40, 0x02127512,
    0x00031961, 0x03260220, 0x00347705, 0x00000000,
    0x00131a61, 0x05260220, 0x00347805, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x00000000, 0xfb2c0324, 0x01000714,
    0xa0783640, 0x01410203, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x0c050660,
    0x000048e4, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xe77a1a70, 0x01407803,
    0x00033761, 0x08060220, 0x00347805, 0x00000000,
    0x00130061, 0x0a060220, 0x00347905, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa07c1b40, 0x02127a12, 0x00031961, 0x08260220,
    0x00347c05, 0x00000000, 0x00131a61, 0x0a260220,
    0x00347d05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xfb2c0824, 0x01000c14, 0xa07d3640, 0x01810203,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x11050660, 0x00004ae4, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xe7031a70, 0x01807d03, 0x00033861, 0x0d060220,
    0x00347d05, 0x00000000, 0x00130061, 0x0f060220,
    0x00347e05, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0xa0051b40, 0x02120312,
    0x00131961, 0x0f260220, 0x00340605, 0x00000000,
    0x00031a61, 0x0d260220, 0x00340505, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x00000000, 0xfb2c0d24, 0x01001114,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80031e61, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_primref_primrefs_from_DXR_instances = {
   .prog_data = {
      .base.nr_params = 19,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 3,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 11200,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_primref_primrefs_from_DXR_instances_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_primref_primrefs_from_DXR_instances_printfs,
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
      .push.cross_thread.dwords = 19,
      .push.cross_thread.regs = 3,
      .push.cross_thread.size = 96,
   },
   .args_size = 44,
   .arg_count = 6,
   .args = gfx125_bvh_build_primref_primrefs_from_DXR_instances_args,
   .code = gfx125_bvh_build_primref_primrefs_from_DXR_instances_code,
};
const char *gfx125_bvh_build_primref_primrefs_from_DXR_instances_sha1 = "237b1bf4a966cbe661253397ef7b963411a08f18";

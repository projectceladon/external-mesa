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

and(1)          g84<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g11<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g84UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
add(1)          g85<1>UD        g84<0,1,0>UD    0x00000040UD    { align1 WE_all 1N $0.src compacted };
mov(8)          g126<1>UW       0x76543210V                     { align1 WE_all 1Q };
shl(16)         g4<1>D          g11<8,8,1>D     0x00000004UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g3UD            g85UD           nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
add(8)          g126.8<1>UW     g126<1,1,0>UW   0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g124<1>UD       g126<8,8,1>UW                   { align1 1H };
add(16)         g36<1>D         g124<1,1,0>D    g4<1,1,0>D      { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cmp.l.f0.0(16)  null<1>UD       g36<8,8,1>UD    g2.6<0,1,0>UD   { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g38<1>D         g36<8,8,1>D     0x00000006UD    { align1 1H };
add(16)         g41<1>D         g2.4<0,1,0>D    g38<1,1,0>D     { align1 1H I@1 compacted };
shr(16)         g39<1>UD        g36<1,1,0>UD    0x0000001aUD    { align1 1H compacted };
cmp.l.f0.0(16)  g43<1>UD        g41<1,1,0>UD    g2.4<0,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g47<2>UD        g41<4,4,1>UD                    { align1 1Q };
mov(8)          g49<2>UD        g42<4,4,1>UD                    { align1 2Q };
add3(16)        g45<1>D         g2.5<0,1,0>D    g39<8,8,1>D     -g43<1,1,1>D { align1 1H I@3 };
mov(8)          g49.1<2>UD      g46<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g47.1<2>UD      g45<4,4,1>UD                    { align1 1Q I@2 };
or.nz.f0.0(16)  null<1>UD       g41<8,8,1>UD    g45<8,8,1>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL1              { align1 1H };
add(16)         g51<1>D         g41<1,1,0>D     48D             { align1 1H compacted };
add(16)         g62<1>D         g41<1,1,0>D     56D             { align1 1H compacted };
cmp.l.f0.0(16)  g53<1>UD        g51<1,1,0>UD    g41<1,1,0>UD    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g64<1>UD        g62<1,1,0>UD    g41<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g57<2>UD        g51<4,4,1>UD                    { align1 1Q };
mov(8)          g59<2>UD        g52<4,4,1>UD                    { align1 2Q };
mov(8)          g68<2>UD        g62<4,4,1>UD                    { align1 1Q };
mov(8)          g70<2>UD        g63<4,4,1>UD                    { align1 2Q };
add(16)         g55<1>D         -g53<1,1,0>D    g45<1,1,0>D     { align1 1H I@6 compacted };
add(16)         g66<1>D         -g64<1,1,0>D    g45<1,1,0>D     { align1 1H I@6 compacted };
mov(8)          g57.1<2>UD      g55<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g59.1<2>UD      g56<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g68.1<2>UD      g66<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g70.1<2>UD      g67<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g61UD           g57UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g72UD           g68UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov(16)         g110<1>UD       g61.3<32,8,4>UB                 { align1 1H $2.dst };
or.nz.f0.0(16)  null<1>UD       g72<8,8,1>UD    g74<8,8,1>UD    { align1 1H $3.dst };
(+f0.0) if(16)  JIP:  LABEL4          UIP:  LABEL3              { align1 1H };
add(16)         g76<1>D         g72<1,1,0>D     128D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g86<1>D         g72<1,1,0>D     140D            { align1 1H compacted };
cmp.l.f0.0(16)  g78<1>UD        g76<1,1,0>UD    g72<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g82<2>UD        g76<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g84<2>UD        g77<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g88<1>UD        g86<1,1,0>UD    0x0000008cUD    { align1 1H I@4 compacted };
mov(8)          g92<2>UD        g86<4,4,1>UD                    { align1 1Q };
mov(8)          g94<2>UD        g87<4,4,1>UD                    { align1 2Q };
add(16)         g80<1>D         -g78<1,1,0>D    g74<1,1,0>D     { align1 1H I@6 compacted };
add(16)         g90<1>D         -g88<1,1,0>D    g74<1,1,0>D     { align1 1H I@4 compacted };
mov(8)          g82.1<2>UD      g80<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g84.1<2>UD      g81<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g92.1<2>UD      g90<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g94.1<2>UD      g91<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g96UD           g82UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
cmp.l.f0.0(16)  null<1>F        (abs)g96<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $1.dst compacted };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL5              { align1 1H };
add(16)         g98<1>D         g72<1,1,0>D     132D            { align1 1H compacted };
cmp.l.f0.0(16)  g100<1>UD       g98<1,1,0>UD    0x00000084UD    { align1 1H I@1 compacted };
mov(8)          g104<2>UD       g98<4,4,1>UD                    { align1 1Q };
mov(8)          g106<2>UD       g99<4,4,1>UD                    { align1 2Q };
add(16)         g102<1>D        -g100<1,1,0>D   g74<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g104.1<2>UD     g102<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g106.1<2>UD     g103<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g108UD          g104UD          nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
cmp.l.f0.0(16)  null<1>F        (abs)g108<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $4.dst compacted };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
add(16)         g112<1>D        g72<1,1,0>D     136D            { align1 1H compacted };
cmp.l.f0.0(16)  g114<1>UD       g112<1,1,0>UD   0x00000088UD    { align1 1H I@1 compacted };
mov(8)          g118<2>UD       g112<4,4,1>UD                   { align1 1Q };
mov(8)          g120<2>UD       g113<4,4,1>UD                   { align1 2Q };
add(16)         g116<1>D        -g114<1,1,0>D   g74<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g118.1<2>UD     g116<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g120.1<2>UD     g117<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g122UD          g118UD          nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g105<1>F        (abs)g122<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $5.dst compacted };
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g105<1>UD       0x00000000UD                    { align1 1H F@1 };

LABEL7:
endif(16)       JIP:  LABEL9                                    { align1 1H };

LABEL9:
else(16)        JIP:  LABEL5          UIP:  LABEL5              { align1 1H };

LABEL6:
mov(16)         g105<1>UD       0x00000000UD                    { align1 1H A@1 };

LABEL5:
endif(16)       JIP:  LABEL10                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(16)        g17UD           g92UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
cmp.l.f0.0(16)  null<1>F        (abs)g17<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $6.dst compacted };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
add(16)         g19<1>D         g72<1,1,0>D     144D            { align1 1H compacted };
cmp.l.f0.0(16)  g21<1>UD        g19<1,1,0>UD    0x00000090UD    { align1 1H I@1 compacted };
mov(8)          g25<2>UD        g19<4,4,1>UD                    { align1 1Q };
mov(8)          g27<2>UD        g20<4,4,1>UD                    { align1 2Q };
add(16)         g23<1>D         -g21<1,1,0>D    g74<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g25.1<2>UD      g23<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g27.1<2>UD      g24<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g29UD           g25UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
cmp.l.f0.0(16)  null<1>F        (abs)g29<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $2.dst compacted };
(+f0.0) if(16)  JIP:  LABEL14         UIP:  LABEL13             { align1 1H };
add(16)         g30<1>D         g72<1,1,0>D     148D            { align1 1H F@1 compacted };
cmp.l.f0.0(16)  g32<1>UD        g30<1,1,0>UD    0x00000094UD    { align1 1H I@1 compacted };
mov(8)          g51<2>UD        g30<4,4,1>UD                    { align1 1Q };
mov(8)          g53<2>UD        g31<4,4,1>UD                    { align1 2Q };
add(16)         g34<1>D         -g32<1,1,0>D    g74<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g51.1<2>UD      g34<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g53.1<2>UD      g35<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g55UD           g51UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g103<1>F        (abs)g55<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $7.dst compacted };
else(16)        JIP:  LABEL13         UIP:  LABEL13             { align1 1H };

LABEL14:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g103<1>UD       0x00000000UD                    { align1 1H F@1 };

LABEL13:
endif(16)       JIP:  LABEL15                                   { align1 1H };

LABEL15:
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g103<1>UD       0x00000000UD                    { align1 1H A@1 };

LABEL11:
endif(16)       JIP:  LABEL10                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.nz.f0.0(16) g56<1>D         g110<1,1,0>D    0D              { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
and(16)         g58<1>UD        g56<1,1,0>UD    g103<1,1,0>UD   { align1 1H A@1 compacted };
or(16)          g68<1>D         ~g56<1,1,0>D    ~g103<1,1,0>D   { align1 1H $3.src compacted };
and.nz.f0.0(16) null<1>UD       g58<8,8,1>UD    g105<8,8,1>UD   { align1 1H A@2 };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL16             { align1 1H };
add(16)         g70<1>D         g72<1,1,0>D     132D            { align1 1H $3.src compacted };
add(16)         g81<1>D         g72<1,1,0>D     144D            { align1 1H $1.src compacted };
add(16)         g19<1>D         g41<1,1,0>D     16D             { align1 1H compacted };
add(16)         g51<1>D         g41<1,1,0>D     32D             { align1 1H $7.src compacted };
mov(16)         g66<1>UD        0x000000c0UD                    { align1 1H };
cmp.l.f0.0(16)  g76<1>UD        g70<1,1,0>UD    0x00000084UD    { align1 1H I@5 compacted };
mov(8)          g87<2>UD        g81<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g89<2>UD        g82<4,4,1>UD                    { align1 2Q I@6 };
cmp.l.f0.0(16)  g83<1>UD        g81<1,1,0>UD    0x00000090UD    { align1 1H $1.src compacted };
mov(8)          g13<2>UD        g19<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g15<2>UD        g20<4,4,1>UD                    { align1 2Q I@7 };
mov(8)          g21<2>UD        g51<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g23<2>UD        g52<4,4,1>UD                    { align1 2Q I@7 };
cmp.l.f0.0(16)  g25<1>UD        g19<1,1,0>UD    g41<1,1,0>UD    { align1 1H $2.src compacted };
add(16)         g78<1>D         -g76<1,1,0>D    g74<1,1,0>D     { align1 1H I@7 compacted };
cmp.l.f0.0(16)  g53<1>UD        g51<1,1,0>UD    g41<1,1,0>UD    { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g85<1>D         -g83<1,1,0>D    g74<1,1,0>D     { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g27<1>D         -g25<1,1,0>D    g45<1,1,0>D     { align1 1H I@4 compacted };
add(16)         g55<1>D         -g53<1,1,0>D    g45<1,1,0>D     { align1 1H A@1 compacted };
mov(8)          g87.1<2>UD      g85<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g89.1<2>UD      g86<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g80<2>UD        g70<4,4,1>UD                    { align1 1Q };
mov(8)          g82<2>UD        g71<4,4,1>UD                    { align1 2Q };
mov(8)          g13.1<2>UD      g27<4,4,1>UD                    { align1 1Q I@6 };
mov(8)          g15.1<2>UD      g28<4,4,1>UD                    { align1 2Q I@7 };
mov(8)          g21.1<2>UD      g55<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g23.1<2>UD      g56<4,4,1>UD                    { align1 2Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
send(16)        g8UD            g87UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
mov(8)          g80.1<2>UD      g78<4,4,1>UD                    { align1 1Q I@6 };
mov(8)          g82.1<2>UD      g79<4,4,1>UD                    { align1 2Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g28UD           g21UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g20UD           g13UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g4UD            g80UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $11 };
sel.ge(16)      g98<1>F         g8<1,1,0>F      g10<1,1,0>F     { align1 1H $8.dst compacted };
sel.ge(16)      g100<1>F        g17<1,1,0>F     g98<1,1,0>F     { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g89<1>F         g8<1,1,0>F      g4<1,1,0>F      { align1 1H $11.dst compacted };
mul(16)         g102<1>F        g100<1,1,0>F    0x34000000F  /* 1.19209e-07F */ { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mul(16)         g94<1>F         g89<1,1,0>F     0x3f000000F  /* 0.5F */ { align1 1H F@2 compacted };
add(16)         g88<1>F         g17<1,1,0>F     g96<1,1,0>F     { align1 1H $8.src compacted };
add(16)         g90<1>F         g10<1,1,0>F     g6<1,1,0>F      { align1 1H $11.dst compacted };
add(16)         g108<1>F        g8<1,1,0>F      g102<1,1,0>F    { align1 1H F@4 compacted };
add(16)         g112<1>F        g10<1,1,0>F     g102<1,1,0>F    { align1 1H compacted };
mul(16)         g38<1>F         g94<1,1,0>F     g22<1,1,0>F     { align1 1H @5 $10.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
mul(16)         g56<1>F         g94<1,1,0>F     g30<1,1,0>F     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mul(16)         g92<1>F         g88<1,1,0>F     0x3f000000F  /* 0.5F */ { align1 1H F@6 compacted };
add(16)         g116<1>F        g108<1,1,0>F    -g4<1,1,0>F     { align1 1H F@5 compacted };
add(16)         g107<1>F        g17<1,1,0>F     g102<1,1,0>F    { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
send(16)        g12UD           g47UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $12 };
mad(16)         g58<1>F         g56<8,8,1>F     g28<8,8,1>F     g92<1,1,1>F { align1 1H @3 $9.dst };
mad(16)         g43<1>F         g38<8,8,1>F     g20<8,8,1>F     g92<1,1,1>F { align1 1H @6 $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mul(16)         g120<1>F        g116<1,1,0>F    0x3f000000F  /* 0.5F */ { align1 1H F@4 compacted };
add(16)         g114<1>F        g107<1,1,0>F    -g96<1,1,0>F    { align1 1H F@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g117<1>F        g112<1,1,0>F    -g6<1,1,0>F     { align1 1H F@7 compacted };
mov(16)         g108<1>UD       0x00000001UD                    { align1 1H F@2 };
mul(16)         g76<1>F         g120<1,1,0>F    (abs)g22<1,1,0>F { align1 1H F@3 compacted };
mul(16)         g81<1>F         g120<1,1,0>F    (abs)g30<1,1,0>F { align1 1H $11.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
mul(16)         g71<1>F         g120<1,1,0>F    (abs)g14<1,1,0>F { align1 1H I@7 compacted };
mul(16)         g122<1>F        g94<1,1,0>F     g14<1,1,0>F     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mul(16)         g119<1>F        g114<1,1,0>F    0x3f000000F  /* 0.5F */ { align1 1H F@6 compacted };
mul(16)         g95<1>F         g90<1,1,0>F     0x3f000000F  /* 0.5F */ { align1 1H compacted };
mad(16)         g4<1>F          g122<8,8,1>F    g12<8,8,1>F     g92<1,1,1>F { align1 1H @3 $12.dst };
mul(16)         g121<1>F        g117<1,1,0>F    0x3f000000F  /* 0.5F */ { align1 1H F@7 compacted };
mad(16)         g73<1>F         g71<8,8,1>F     (abs)g12<8,8,1>F g119<1,1,1>F { align1 1H F@4 };
mad(16)         g78<1>F         g76<8,8,1>F     (abs)g20<8,8,1>F g119<1,1,1>F { align1 1H A@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mad(16)         g83<1>F         g81<8,8,1>F     (abs)g28<8,8,1>F g119<1,1,1>F { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mad(16)         g47<1>F         g43<8,8,1>F     g24<8,8,1>F     g95<1,1,1>F { align1 1H @6 $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mad(16)         g60<1>F         g58<8,8,1>F     g32<8,8,1>F     g95<1,1,1>F { align1 1H $9.dst };
mad(16)         g6<1>F          g4<8,8,1>F      g16<8,8,1>F     g95<1,1,1>F { align1 1H @7 $12.dst };
mad(16)         g75<1>F         g73<8,8,1>F     (abs)g16<8,8,1>F g121<1,1,1>F { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mad(16)         g80<1>F         g78<8,8,1>F     (abs)g24<8,8,1>F g121<1,1,1>F { align1 1H F@6 };
mad(16)         g85<1>F         g83<8,8,1>F     (abs)g32<8,8,1>F g121<1,1,1>F { align1 1H A@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g49<1>F         g47<1,1,0>F     g26<1,1,0>F     { align1 1H @6 $10.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
add(16)         g70<1>F         g60<1,1,0>F     g34<1,1,0>F     { align1 1H A@6 compacted };
add(16)         g8<1>F          g6<1,1,0>F      g18<1,1,0>F     { align1 1H @6 $12.dst compacted };
add(16)         g54<1>F         g49<1,1,0>F     -g80<1,1,0>F    { align1 1H A@3 compacted };
add(16)         g62<1>F         g49<1,1,0>F     g80<1,1,0>F     { align1 1H compacted };
add(16)         g56<1>F         g70<1,1,0>F     -g85<1,1,0>F    { align1 1H F@4 compacted };
add(16)         g64<1>F         g70<1,1,0>F     g85<1,1,0>F     { align1 1H compacted };
add(16)         g52<1>F         g8<1,1,0>F      -g75<1,1,0>F    { align1 1H F@5 compacted };
add(16)         g60<1>F         g8<1,1,0>F      g75<1,1,0>F     { align1 1H compacted };
else(16)        JIP:  LABEL16         UIP:  LABEL16             { align1 1H };

LABEL17:
mov(16)         g108<1>UD       0x00000000UD                    { align1 1H A@2 };
mov(16)         g66<1>UD        0x00000000UD                    { align1 1H };

LABEL16:
endif(16)       JIP:  LABEL10                                   { align1 1H };
cmp.nz.f0.0(16) null<1>D        g105<8,8,1>D    0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
(+f0.0) sel(16) g86<1>UD        g68<8,8,1>UD    0xffffffffUD    { align1 1H A@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
cmp.nz.f0.0(16) g88<1>D         g3.2<0,1,0>D    0D              { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g88<8,8,1>UD    g86<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL18         UIP:  LABEL18             { align1 1H };
add(16)         g89<1>D         g41<1,1,0>D     12D             { align1 1H I@2 compacted };
add(16)         g99<1>D         g41<1,1,0>D     28D             { align1 1H compacted };
add(16)         g116<1>D        g41<1,1,0>D     44D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g108<1>UD       0x00000001UD                    { align1 1H };
mov(16)         g110<1>UD       0x00000000UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g91<1>UD        g89<1,1,0>UD    g41<1,1,0>UD    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g95<2>UD        g89<4,4,1>UD                    { align1 1Q F@2 };
mov(8)          g97<2>UD        g90<4,4,1>UD                    { align1 2Q F@2 };
mov(8)          g112<2>UD       g99<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g114<2>UD       g100<4,4,1>UD                   { align1 2Q I@7 };
cmp.l.f0.0(16)  g101<1>UD       g99<1,1,0>UD    g41<1,1,0>UD    { align1 1H compacted };
mov(8)          g4<2>UD         g116<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g6<2>UD         g117<4,4,1>UD                   { align1 2Q A@7 };
cmp.l.f0.0(16)  g118<1>UD       g116<1,1,0>UD   g41<1,1,0>UD    { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g93<1>D         -g91<1,1,0>D    g45<1,1,0>D     { align1 1H I@7 compacted };
add(16)         g103<1>D        -g101<1,1,0>D   g45<1,1,0>D     { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g120<1>D        -g118<1,1,0>D   g45<1,1,0>D     { align1 1H A@3 compacted };
mov(8)          g95.1<2>UD      g93<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g97.1<2>UD      g94<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g112.1<2>UD     g103<4,4,1>UD                   { align1 1Q I@4 };
mov(8)          g114.1<2>UD     g104<4,4,1>UD                   { align1 2Q I@5 };
mov(8)          g4.1<2>UD       g120<4,4,1>UD                   { align1 1Q I@5 };
mov(8)          g6.1<2>UD       g121<4,4,1>UD                   { align1 2Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g60UD           g95UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
send(16)        g62UD           g112UD          nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g64UD           g4UD            nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g52<1>UD        g60<8,8,1>UD                    { align1 1H F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g54<1>UD        g62<8,8,1>UD                    { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
mov(16)         g56<1>UD        g64<8,8,1>UD                    { align1 1H F@1 };

LABEL18:
endif(16)       JIP:  LABEL10                                   { align1 1H };

LABEL10:
else(16)        JIP:  LABEL3          UIP:  LABEL3              { align1 1H };

LABEL4:
mov(16)         g108<1>UD       0x00000000UD                    { align1 1H I@7 };
mov(16)         g66<1>UD        0x00000000UD                    { align1 1H I@5 };

LABEL3:
endif(16)       JIP:  LABEL19                                   { align1 1H };

LABEL19:
else(16)        JIP:  LABEL1          UIP:  LABEL1              { align1 1H };

LABEL2:
mov(16)         g108<1>UD       0x00000000UD                    { align1 1H I@4 };
mov(16)         g66<1>UD        0x00000000UD                    { align1 1H I@4 };
mov(16)         g110<1>UD       0x00000000UD                    { align1 1H I@7 };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
mov(16)         g12<1>D         0D                              { align1 WE_all 1H I@4 };
mov(16)         g12<1>D         g108<8,8,1>D                    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g124<8,8,1>D    0D              { align1 1H };
add(8)          g12.1<2>D       g12<8,4,2>D     g12.1<8,4,2>D   { align1 WE_all 1Q I@2 };
add(4)          g12.2<4>D       g12.1<8,2,4>D   g12.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g12.3<4>D       g12.1<8,2,4>D   g12.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g12.4<1>D       g12.3<0,1,0>D   g12.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g13.4<1>D       g13.3<0,1,0>D   g13.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(8)          g13<1>D         g12.7<0,1,0>D   g13<1,1,0>D     { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
mov(16)         g5<1>D          g13.7<0,1,0>D                   { align1 1H $14.src };
(+f0.0) if(16)  JIP:  LABEL21         UIP:  LABEL20             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(16)         g7<1>D          g2<0,1,0>D      36D             { align1 1H F@1 compacted };
cmp.l.f0.0(16)  g9<1>UD         g7<1,1,0>UD     g2<0,1,0>UD     { align1 1H A@1 compacted };
mov(8)          g13<2>UD        g7<4,4,1>UD                     { align1 1Q I@4 };
mov(8)          g15<2>UD        g8<4,4,1>UD                     { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g11<1>D         -g9<1,1,0>D     g2.1<0,1,0>D    { align1 1H compacted };
mov(8)          g13.1<2>UD      g11<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g15.1<2>UD      g12<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g106UD          g13UD           g5UD            0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };
else(16)        JIP:  LABEL20         UIP:  LABEL20             { align1 1H };

LABEL21:
mov(16)         g106<1>UD       0x00000000UD                    { align1 1H $4.dst };

LABEL20:
endif(16)       JIP:  LABEL0                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g16<1>D         0D                              { align1 WE_all 1H F@1 };
mov(16)         g16<1>D         g108<8,8,1>D                    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g108<8,8,1>D    0D              { align1 1H };
add(16)         g18<1>W         g126<16,16,1>UW -1W             { align1 WE_all 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         a0<1>UW         0x0200UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g18<8,8,1>W     0x0002UW        { align1 WE_all 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0200UW        { align1 WE_all 1H A@1 };
mov(16)         g14<1>UD        g[a0]<VxH,1,0>UD                { align1 WE_all 1H A@1 compacted };
mov(1)          g14<1>D         0D                              { align1 WE_all 1N I@1 };
add(8)          g14.1<2>D       g14<8,4,2>D     g14.1<8,4,2>D   { align1 WE_all 1Q I@1 };
add(4)          g14.2<4>D       g14.1<8,2,4>D   g14.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g14.3<4>D       g14.1<8,2,4>D   g14.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g14.4<1>D       g14.3<0,1,0>D   g14.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g15.4<1>D       g15.3<0,1,0>D   g15.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(8)          g15<1>D         g14.7<0,1,0>D   g15<1,1,0>D     { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g16<1>D         g106<0,1,0>D    g14<1,1,0>D     { align1 1H compacted };
(+f0.0) if(16)  JIP:  LABEL23         UIP:  LABEL22             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g56<1>UD        0x7f800000UD                    { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g54<1>UD        0x7f800000UD                    { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g52<1>UD        0x7f800000UD                    { align1 1H F@2 };
mov(16)         g64<1>UD        0xff800000UD                    { align1 1H F@3 };
mov(16)         g62<1>UD        0xff800000UD                    { align1 1H F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g60<1>UD        0xff800000UD                    { align1 1H F@1 };
mov(16)         g116<1>UD       0x7f800000UD                    { align1 1H };
mov(16)         g114<1>UD       0x7f800000UD                    { align1 1H $13.src };
mov(16)         g112<1>UD       0x7f800000UD                    { align1 1H $13.src };
mov(16)         g122<1>UD       0xff800000UD                    { align1 1H F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g120<1>UD       0xff800000UD                    { align1 1H F@7 };
mov(16)         g118<1>UD       0xff800000UD                    { align1 1H $5.src };
else(16)        JIP:  LABEL22         UIP:  LABEL22             { align1 1H };

LABEL23:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
shl(16)         g18<1>D         g16<8,8,1>D     0x00000005UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
add(16)         g21<1>D         g3<0,1,0>D      g18<1,1,0>D     { align1 1H I@1 compacted };
shr(16)         g19<1>UD        g16<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
shl(16)         g17<1>D         g110<8,8,1>D    0x00000018UD    { align1 1H };
cmp.l.f0.0(16)  g23<1>UD        g21<1,1,0>UD    g3<0,1,0>UD     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g27<2>UD        g21<4,4,1>UD                    { align1 1Q F@7 };
mov(8)          g29<2>UD        g22<4,4,1>UD                    { align1 2Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
or(16)          g58<1>UD        g36<1,1,0>UD    g17<1,1,0>UD    { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add3(16)        g25<1>D         g3.1<0,1,0>D    g19<8,8,1>D     -g23<1,1,1>D { align1 1H A@4 };
mov(8)          g29.1<2>UD      g26<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g27.1<2>UD      g25<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g27UD           g52UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $2 };
add(16)         g28<1>D         g21<1,1,0>D     16D             { align1 1H $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g30<1>UD        g28<1,1,0>UD    g21<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g34<2>UD        g28<4,4,1>UD                    { align1 1Q F@7 };
mov(8)          g36<2>UD        g29<4,4,1>UD                    { align1 2Q };
add(16)         g32<1>D         -g30<1,1,0>D    g25<1,1,0>D     { align1 1H A@3 compacted };
mov(8)          g36.1<2>UD      g33<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g34.1<2>UD      g32<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g34UD           g60UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g118<1>F        g52<1,1,0>F     g60<1,1,0>F     { align1 1H $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g120<1>F        g54<1,1,0>F     g62<1,1,0>F     { align1 1H $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g122<1>F        g56<1,1,0>F     g64<1,1,0>F     { align1 1H F@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g112<1>UD       g118<8,8,1>UD                   { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g114<1>UD       g120<8,8,1>UD                   { align1 1H F@2 };
mov(16)         g116<1>UD       g122<8,8,1>UD                   { align1 1H F@1 };

LABEL22:
endif(16)       JIP:  LABEL0                                    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g124<8,8,1>D    0D              { align1 1H };
mov(16)         g29<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@1 compacted };
mov(16)         g29<1>F         g52<1,1,0>F                     { align1 1H compacted };
mov(16)         g31<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@3 compacted };
mov(16)         g31<1>F         g54<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g33<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@3 compacted };
mov(16)         g33<1>F         g56<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g35<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g35<1>F         g60<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g37<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H F@6 compacted };
mov(16)         g37<1>F         g62<1,1,0>F                     { align1 1H compacted };
mov(16)         g39<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H F@6 compacted };
mov(16)         g39<1>F         g64<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g41<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@5 compacted };
mov(16)         g41<1>F         g112<1,1,0>F                    { align1 1H compacted };
mov(16)         g43<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@4 compacted };
mov(16)         g43<1>F         g114<1,1,0>F                    { align1 1H compacted };
mov(16)         g45<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@3 compacted };
mov(16)         g45<1>F         g116<1,1,0>F                    { align1 1H compacted };
mov(16)         g47<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g47<1>F         g118<1,1,0>F                    { align1 1H compacted };
mov(16)         g49<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g49<1>F         g120<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g51<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@3 compacted };
mov(16)         g51<1>F         g122<1,1,0>F                    { align1 1H compacted };
mov(8)          g22<2>UD        g29.1<8,4,2>UD                  { align1 WE_all 1Q };
mov(8)          g68<2>UD        g31.1<8,4,2>UD                  { align1 WE_all 1Q $3.src };
mov(8)          g101<2>UD       g33.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g13<2>UD        g37.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g26<2>UD        g39.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(8)          g66<2>UD        g45.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g71<2>UD        g47.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g76<2>UD        g49.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g124<2>UD       g35.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g81<2>UD        g51.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(8)          g56<2>UD        g41.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
sel.l(8)        g20<2>F         g29<8,4,2>F     g22<8,4,2>F     { align1 WE_all 1Q };
mov(8)          g61<2>UD        g43.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
sel.l(8)        g58<2>F         g31<8,4,2>F     g68<8,4,2>F     { align1 WE_all 1Q $2.src };
sel.l(8)        g99<2>F         g33<8,4,2>F     g101<8,4,2>F    { align1 WE_all 1Q I@7 };
sel.ge(8)       g11<2>F         g37<8,4,2>F     g13<8,4,2>F     { align1 WE_all 1Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.ge(8)       g24<2>F         g39<8,4,2>F     g26<8,4,2>F     { align1 WE_all 1Q I@7 };
sel.l(8)        g64<2>F         g45<8,4,2>F     g66<8,4,2>F     { align1 WE_all 1Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.ge(8)       g74<2>F         g49<8,4,2>F     g76<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.ge(8)       g112<2>F        g35<8,4,2>F     g124<8,4,2>F    { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.ge(8)       g79<2>F         g51<8,4,2>F     g81<8,4,2>F     { align1 WE_all 1Q I@3 };
sel.l(8)        g54<2>F         g41<8,4,2>F     g56<8,4,2>F     { align1 WE_all 1Q I@2 };
mov(8)          g29.1<2>UD      g20<8,4,2>UD                    { align1 WE_all 1Q F@7 };
mov(8)          g31.1<2>UD      g58<8,4,2>UD                    { align1 WE_all 1Q F@7 };
mov(8)          g33.1<2>UD      g99<8,4,2>UD                    { align1 WE_all 1Q F@7 };
mov(8)          g37.1<2>UD      g11<8,4,2>UD                    { align1 WE_all 1Q F@7 };
mov(8)          g39.1<2>UD      g24<8,4,2>UD                    { align1 WE_all 1Q F@6 };
mov(8)          g45.1<2>UD      g64<8,4,2>UD                    { align1 WE_all 1Q F@5 };
sel.ge(8)       g69<2>F         g47<8,4,2>F     g71<8,4,2>F     { align1 WE_all 1Q $3.src };
mov(8)          g49.1<2>UD      g74<8,4,2>UD                    { align1 WE_all 1Q F@5 };
mov(8)          g35.1<2>UD      g112<8,4,2>UD                   { align1 WE_all 1Q F@4 };
mov(8)          g51.1<2>UD      g79<8,4,2>UD                    { align1 WE_all 1Q F@3 };
mov(8)          g41.1<2>UD      g54<8,4,2>UD                    { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(4)          g27<4>UD        g29.2<8,2,4>UD                  { align1 WE_all 1N A@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(4)          g83<4>UD        g31.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g77<4>UD        g31.1<8,2,4>UD                  { align1 WE_all 1N F@5 };
mov(4)          g106<4>UD       g33.2<8,2,4>UD                  { align1 WE_all 1N $4.dst };
mov(4)          g104<4>UD       g33.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g18<4>UD        g37.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g16<4>UD        g37.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g81<4>UD        g45.2<8,2,4>UD                  { align1 WE_all 1N F@3 };
mov(8)          g47.1<2>UD      g69<8,4,2>UD                    { align1 WE_all 1Q F@1 };
mov(4)          g93<4>UD        g49.2<8,2,4>UD                  { align1 WE_all 1N $6.src };
mov(4)          g91<4>UD        g49.1<8,2,4>UD                  { align1 WE_all 1N $6.src };
sel.l(8)        g59<2>F         g43<8,4,2>F     g61<8,4,2>F     { align1 WE_all 1Q };
mov(4)          g5<4>UD         g35.2<8,2,4>UD                  { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(4)          g3<4>UD         g35.1<8,2,4>UD                  { align1 WE_all 1N $1.dst };
mov(4)          g99<4>UD        g51.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g97<4>UD        g51.1<8,2,4>UD                  { align1 WE_all 1N $6.src };
mov(4)          g25<4>UD        g29.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g67<4>UD        g41.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g63<4>UD        g39.2<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g71<4>F         g77<8,2,4>F     g83<8,2,4>F     { align1 WE_all 1N };
sel.l(4)        g102<4>F        g104<8,2,4>F    g106<8,2,4>F    { align1 WE_all 1N };
sel.ge(4)       g14<4>F         g16<8,2,4>F     g18<8,2,4>F     { align1 WE_all 1N };
mov(4)          g79<4>UD        g45.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g87<4>UD        g47.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g85<4>UD        g47.1<8,2,4>UD                  { align1 WE_all 1N $1.src };
mov(8)          g43.1<2>UD      g59<8,4,2>UD                    { align1 WE_all 1Q F@4 };
sel.ge(4)       g125<4>F        g3<8,2,4>F      g5<8,2,4>F      { align1 WE_all 1N I@7 };
sel.l(4)        g23<4>F         g25<8,2,4>F     g27<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g31.2<4>UD      g71<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g33.2<4>UD      g102<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g69<4>UD        g41.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g37.2<4>UD      g14<8,2,4>UD                    { align1 WE_all 1N F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(4)          g61<4>UD        g39.1<8,2,4>UD                  { align1 WE_all 1N F@6 };
mov(4)          g75<4>UD        g43.2<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g73<4>UD        g43.1<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g77<4>F         g91<8,2,4>F     g93<8,2,4>F     { align1 WE_all 1N };
mov(4)          g35.2<4>UD      g125<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g29.2<4>UD      g23<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g111<4>UD       g33.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g109<4>UD       g33.1<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g57<4>F         g67<8,2,4>F     g69<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(4)          g21<4>UD        g37.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
sel.ge(4)       g27<4>F         g61<8,2,4>F     g63<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g49.2<4>UD      g77<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g10<4>UD        g35.3<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g8<4>UD         g35.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g55<4>UD        g29.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
sel.l(4)        g107<4>F        g109<8,2,4>F    g111<8,2,4>F    { align1 WE_all 1N I@6 };
mov(4)          g41.2<4>UD      g57<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g92<4>UD        g31.1<8,2,4>UD                  { align1 WE_all 1N F@4 };
mov(4)          g23<4>UD        g37.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g39.2<4>UD      g27<8,2,4>UD                    { align1 WE_all 1N F@2 };
sel.l(4)        g67<4>F         g79<8,2,4>F     g81<8,2,4>F     { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(4)          g94<4>UD        g49.1<8,2,4>UD                  { align1 WE_all 1N A@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sel.ge(4)       g6<4>F          g8<8,2,4>F      g10<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g62<4>F         g73<8,2,4>F     g75<8,2,4>F     { align1 WE_all 1N };
mov(4)          g33.3<4>UD      g107<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g70<4>UD        g41.1<8,2,4>UD                  { align1 WE_all 1N A@6 };
sel.ge(4)       g19<4>F         g21<8,2,4>F     g23<8,2,4>F     { align1 WE_all 1N I@5 };
mov(4)          g64<4>UD        g39.1<8,2,4>UD                  { align1 WE_all 1N A@4 };
mov(4)          g45.2<4>UD      g67<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g57<4>UD        g29.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g35.3<4>UD      g6<8,2,4>UD                     { align1 WE_all 1N F@3 };
sel.ge(4)       g82<4>F         g97<8,2,4>F     g99<8,2,4>F     { align1 WE_all 1N };
mov(4)          g43.2<4>UD      g62<8,2,4>UD                    { align1 WE_all 1N F@3 };
sel.l(4)        g33.4<1>F       g33.3<0,1,0>F   g33.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.l(4)        g34.4<1>F       g34.3<0,1,0>F   g34.4<4,4,1>F   { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(4)          g37.3<4>UD      g19<8,2,4>UD                    { align1 WE_all 1N F@4 };
sel.ge(4)       g72<4>F         g85<8,2,4>F     g87<8,2,4>F     { align1 WE_all 1N };
sel.l(4)        g53<4>F         g55<8,2,4>F     g57<8,2,4>F     { align1 WE_all 1N I@4 };
sel.ge(4)       g35.4<1>F       g35.3<0,1,0>F   g35.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g36.4<1>F       g36.3<0,1,0>F   g36.4<4,4,1>F   { align1 WE_all 1N I@3 };
mov(4)          g51.2<4>UD      g82<8,2,4>UD                    { align1 WE_all 1N F@7 };
mov(4)          g66<4>UD        g39.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g78<4>UD        g43.3<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g76<4>UD        g43.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
sel.l(8)        g34<1>F         g33.7<0,1,0>F   g34<8,8,1>F     { align1 WE_all 1Q F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(4)          g96<4>UD        g49.3<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g98<4>UD        g31.3<8,2,4>UD                  { align1 WE_all 1N F@7 };
sel.ge(4)       g37.4<1>F       g37.3<0,1,0>F   g37.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.ge(4)       g38.4<1>F       g38.3<0,1,0>F   g38.4<4,4,1>F   { align1 WE_all 1N I@7 };
mov(4)          g47.2<4>UD      g72<8,2,4>UD                    { align1 WE_all 1N F@7 };
mov(4)          g29.3<4>UD      g53<8,2,4>UD                    { align1 WE_all 1N F@6 };
sel.ge(8)       g36<1>F         g35.7<0,1,0>F   g36<8,8,1>F     { align1 WE_all 1Q F@4 };
mov(4)          g102<4>UD       g51.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g100<4>UD       g51.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g84<4>UD        g45.3<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g82<4>UD        g45.1<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g86<4>F         g92<8,2,4>F     g98<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(8)       g38<1>F         g37.7<0,1,0>F   g38<8,8,1>F     { align1 WE_all 1Q F@3 };
mov(4)          g90<4>UD        g47.3<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g88<4>UD        g47.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
sel.l(4)        g29.4<1>F       g29.3<0,1,0>F   g29.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.l(4)        g30.4<1>F       g30.3<0,1,0>F   g30.4<4,4,1>F   { align1 WE_all 1N I@7 };
mov(4)          g72<4>UD        g41.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g53<4>F         g64<8,2,4>F     g66<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g68<4>F         g82<8,2,4>F     g84<8,2,4>F     { align1 WE_all 1N I@4 };
mov(4)          g31.3<4>UD      g86<8,2,4>UD                    { align1 WE_all 1N F@6 };
sel.l(8)        g30<1>F         g29.7<0,1,0>F   g30<8,8,1>F     { align1 WE_all 1Q F@3 };
sel.l(4)        g58<4>F         g70<8,2,4>F     g72<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g39.3<4>UD      g53<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g45.3<4>UD      g68<8,2,4>UD                    { align1 WE_all 1N F@3 };
sel.l(4)        g63<4>F         g76<8,2,4>F     g78<8,2,4>F     { align1 WE_all 1N };
sel.l(4)        g31.4<1>F       g31.3<0,1,0>F   g31.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g32.4<1>F       g32.3<0,1,0>F   g32.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g83<4>F         g100<8,2,4>F    g102<8,2,4>F    { align1 WE_all 1N I@7 };
mov(4)          g41.3<4>UD      g58<8,2,4>UD                    { align1 WE_all 1N F@5 };
sel.ge(4)       g73<4>F         g88<8,2,4>F     g90<8,2,4>F     { align1 WE_all 1N I@6 };
sel.ge(4)       g39.4<1>F       g39.3<0,1,0>F   g39.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g40.4<1>F       g40.3<0,1,0>F   g40.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g45.4<1>F       g45.3<0,1,0>F   g45.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g46.4<1>F       g46.3<0,1,0>F   g46.4<4,4,1>F   { align1 WE_all 1N I@2 };
mov(4)          g43.3<4>UD      g63<8,2,4>UD                    { align1 WE_all 1N F@7 };
sel.l(8)        g32<1>F         g31.7<0,1,0>F   g32<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(4)       g78<4>F         g94<8,2,4>F     g96<8,2,4>F     { align1 WE_all 1N };
mov(4)          g51.3<4>UD      g83<8,2,4>UD                    { align1 WE_all 1N F@7 };
sel.l(4)        g41.4<1>F       g41.3<0,1,0>F   g41.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g42.4<1>F       g42.3<0,1,0>F   g42.4<4,4,1>F   { align1 WE_all 1N I@3 };
mov(4)          g47.3<4>UD      g73<8,2,4>UD                    { align1 WE_all 1N F@7 };
sel.ge(8)       g40<1>F         g39.7<0,1,0>F   g40<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.l(8)        g46<1>F         g45.7<0,1,0>F   g46<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.l(4)        g43.4<1>F       g43.3<0,1,0>F   g43.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g44.4<1>F       g44.3<0,1,0>F   g44.4<4,4,1>F   { align1 WE_all 1N I@3 };
mov(4)          g49.3<4>UD      g78<8,2,4>UD                    { align1 WE_all 1N F@7 };
sel.ge(4)       g51.4<1>F       g51.3<0,1,0>F   g51.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g52.4<1>F       g52.3<0,1,0>F   g52.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(8)        g42<1>F         g41.7<0,1,0>F   g42<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(4)       g47.4<1>F       g47.3<0,1,0>F   g47.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g48.4<1>F       g48.3<0,1,0>F   g48.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(8)        g44<1>F         g43.7<0,1,0>F   g44<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.ge(4)       g49.4<1>F       g49.3<0,1,0>F   g49.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g50.4<1>F       g50.3<0,1,0>F   g50.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g52<1>F         g51.7<0,1,0>F   g52<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(8)       g48<1>F         g47.7<0,1,0>F   g48<8,8,1>F     { align1 WE_all 1Q F@5 };
sel.ge(8)       g50<1>F         g49.7<0,1,0>F   g50<8,8,1>F     { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
mov(16)         g57<1>F         g52.7<0,1,0>F                   { align1 1H compacted };
mov(16)         g51<1>F         g46.7<0,1,0>F                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
mov(16)         g53<1>F         g48.7<0,1,0>F                   { align1 1H compacted };
mov(16)         g45<1>F         g40.7<0,1,0>F                   { align1 1H compacted };
mov(16)         g47<1>F         g42.7<0,1,0>F                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
mov(16)         g55<1>F         g50.7<0,1,0>F                   { align1 1H compacted };
mov(16)         g39<1>F         g34.7<0,1,0>F                   { align1 1H compacted };
mov(16)         g41<1>F         g36.7<0,1,0>F                   { align1 1H compacted };
mov(16)         g49<1>F         g44.7<0,1,0>F                   { align1 1H compacted };
mov(16)         g35<1>F         g30.7<0,1,0>F                   { align1 1H compacted };
mov(16)         g43<1>F         g38.7<0,1,0>F                   { align1 1H compacted };
mov(16)         g37<1>F         g32.7<0,1,0>F                   { align1 1H compacted };
(+f0.0) if(16)  JIP:  LABEL24         UIP:  LABEL24             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
add(16)         g59<1>D         g2.2<0,1,0>D    128D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g61<1>UD        g59<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
mov(8)          g65<2>UD        g59<4,4,1>UD                    { align1 1Q };
mov(8)          g67<2>UD        g60<4,4,1>UD                    { align1 2Q };
add(16)         g63<1>D         -g61<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g65.1<2>UD      g63<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g67.1<2>UD      g64<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g65UD           g35UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };
add(16)         g66<1>D         g2.2<0,1,0>D    132D            { align1 1H $0.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g68<1>UD        g66<1,1,0>UD    0x00000084UD    { align1 1H I@1 compacted };
mov(8)          g72<2>UD        g66<4,4,1>UD                    { align1 1Q };
mov(8)          g74<2>UD        g67<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g70<1>D         -g68<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
mov(8)          g72.1<2>UD      g70<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g74.1<2>UD      g71<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g72UD           g37UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
add(16)         g73<1>D         g2.2<0,1,0>D    136D            { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g75<1>UD        g73<1,1,0>UD    0x00000088UD    { align1 1H $1.src compacted };
mov(8)          g79<2>UD        g73<4,4,1>UD                    { align1 1Q };
mov(8)          g81<2>UD        g74<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g77<1>D         -g75<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
mov(8)          g79.1<2>UD      g77<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g81.1<2>UD      g78<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g79UD           g39UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $2 };
add(16)         g80<1>D         g2.2<0,1,0>D    140D            { align1 1H $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g82<1>UD        g80<1,1,0>UD    0x0000008cUD    { align1 1H $2.src compacted };
mov(8)          g86<2>UD        g80<4,4,1>UD                    { align1 1Q };
mov(8)          g88<2>UD        g81<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g84<1>D         -g82<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
mov(8)          g86.1<2>UD      g84<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g88.1<2>UD      g85<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g86UD           g41UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $3 };
add(16)         g87<1>D         g2.2<0,1,0>D    144D            { align1 1H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g89<1>UD        g87<1,1,0>UD    0x00000090UD    { align1 1H $3.src compacted };
mov(8)          g93<2>UD        g87<4,4,1>UD                    { align1 1Q };
mov(8)          g95<2>UD        g88<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g91<1>D         -g89<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
mov(8)          g93.1<2>UD      g91<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g95.1<2>UD      g92<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g93UD           g43UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };
add(16)         g94<1>D         g2.2<0,1,0>D    148D            { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g96<1>UD        g94<1,1,0>UD    0x00000094UD    { align1 1H $4.src compacted };
mov(8)          g100<2>UD       g94<4,4,1>UD                    { align1 1Q };
mov(8)          g102<2>UD       g95<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g98<1>D         -g96<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
mov(8)          g100.1<2>UD     g98<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g102.1<2>UD     g99<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g100UD          g45UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $5 };
mov(8)          g19.1<2>D       g2.1<0,1,0>D                    { align1 1Q };
mov(8)          g21.1<2>D       g2.1<0,1,0>D                    { align1 2Q };
mov(8)          g19<2>D         g2<0,1,0>D                      { align1 1Q I@2 };
mov(8)          g21<2>D         g2<0,1,0>D                      { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g19UD           g47UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };
add(16)         g101<1>D        g2<0,1,0>D      4D              { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g103<1>UD       g101<1,1,0>UD   g2<0,1,0>UD     { align1 1H $5.src compacted };
mov(8)          g107<2>UD       g101<4,4,1>UD                   { align1 1Q };
mov(8)          g109<2>UD       g102<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g105<1>D        -g103<1,1,0>D   g2.1<0,1,0>D    { align1 1H compacted };
mov(8)          g107.1<2>UD     g105<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g109.1<2>UD     g106<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g107UD          g49UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $7 };
add(16)         g108<1>D        g2<0,1,0>D      8D              { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g110<1>UD       g108<1,1,0>UD   g2<0,1,0>UD     { align1 1H $7.src compacted };
mov(8)          g114<2>UD       g108<4,4,1>UD                   { align1 1Q };
mov(8)          g116<2>UD       g109<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g112<1>D        -g110<1,1,0>D   g2.1<0,1,0>D    { align1 1H compacted };
mov(8)          g114.1<2>UD     g112<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g116.1<2>UD     g113<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g114UD          g51UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };
add(16)         g115<1>D        g2<0,1,0>D      16D             { align1 1H $8.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g117<1>UD       g115<1,1,0>UD   g2<0,1,0>UD     { align1 1H $8.src compacted };
mov(8)          g121<2>UD       g115<4,4,1>UD                   { align1 1Q };
mov(8)          g123<2>UD       g116<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g119<1>D        -g117<1,1,0>D   g2.1<0,1,0>D    { align1 1H compacted };
mov(8)          g121.1<2>UD     g119<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g123.1<2>UD     g120<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g121UD          g53UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $9 };
add(16)         g122<1>D        g2<0,1,0>D      20D             { align1 1H $9.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
cmp.l.f0.0(16)  g124<1>UD       g122<1,1,0>UD   0x00000014UD    { align1 1H I@1 compacted };
mov(8)          g3<2>UD         g122<4,4,1>UD                   { align1 1Q };
mov(8)          g5<2>UD         g123<4,4,1>UD                   { align1 2Q };
add(16)         g126<1>D        -g124<1,1,0>D   g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g3.1<2>UD       g126<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g5.1<2>UD       g127<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g3UD            g55UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
add(16)         g4<1>D          g2<0,1,0>D      24D             { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g6<1>UD         g4<1,1,0>UD     0x00000018UD    { align1 1H $1.src compacted };
mov(8)          g10<2>UD        g4<4,4,1>UD                     { align1 1Q };
mov(8)          g12<2>UD        g5<4,4,1>UD                     { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g8<1>D          -g6<1,1,0>D     g2.1<0,1,0>D    { align1 1H compacted };
mov(8)          g12.1<2>UD      g9<4,4,1>UD                     { align1 2Q I@1 };
mov(8)          g10.1<2>UD      g8<4,4,1>UD                     { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g10UD           g57UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $10 };

LABEL24:
endif(16)       JIP:  LABEL0                                    { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL25                                   { align1 1H };

LABEL25:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_primref_primrefs_from_DXR_instances_code[] = {
    0x80000065, 0x54058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x0b050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00540c, 0x00340000,
    0xe2553040, 0x04015403, 0x80030061, 0x7e054410,
    0x00000000, 0x76543210, 0x00041b69, 0x04058660,
    0x02460b05, 0x00000004, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa00550c, 0x00300000, 0x647e1a40, 0x00807e95,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x7c050120, 0x00467e05, 0x00000000,
    0xa0241940, 0x04007c02, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00041970, 0x00010220,
    0x52462405, 0x000002c4, 0x01040022, 0x0001c060,
    0x00002a08, 0x00002a08, 0x00040069, 0x26058660,
    0x02462405, 0x00000006, 0xa0291940, 0x2601025a,
    0xe0270068, 0x01a02403, 0x272b1a70, 0x0210290b,
    0x00030061, 0x2f060220, 0x00342905, 0x00000000,
    0x00130061, 0x31060220, 0x00342a05, 0x00000000,
    0x00041b52, 0x2d040660, 0x0e2e02a4, 0x2b052705,
    0x00131961, 0x31260220, 0x00342e05, 0x00000000,
    0x00031a61, 0x2f260220, 0x00342d05, 0x00000000,
    0x00040066, 0x00010220, 0x22462905, 0x00462d05,
    0x01040022, 0x0001c060, 0x00000ea0, 0x00000e70,
    0xa0330040, 0x03002903, 0xa03e0040, 0x03802903,
    0x27351a70, 0x29003303, 0x27401a70, 0x29003e03,
    0x00030061, 0x39060220, 0x00343305, 0x00000000,
    0x00130061, 0x3b060220, 0x00343405, 0x00000000,
    0x00030061, 0x44060220, 0x00343e05, 0x00000000,
    0x00130061, 0x46060220, 0x00343f05, 0x00000000,
    0xa0371e40, 0x2d023502, 0xa0421e40, 0x2d024002,
    0x00031a61, 0x39260220, 0x00343705, 0x00000000,
    0x00131b61, 0x3b260220, 0x00343805, 0x00000000,
    0x00031b61, 0x44260220, 0x00344205, 0x00000000,
    0x00131c61, 0x46260220, 0x00344305, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x3d140000, 0xfb003924, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x48240000, 0xfb004424, 0x00040000,
    0x00042261, 0x6e050020, 0x00663d1f, 0x00000000,
    0x00042366, 0x00010220, 0x22464805, 0x00464a05,
    0x01040022, 0x0001c060, 0x00000d30, 0x00000d10,
    0xa04c0040, 0x08004803, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0560040, 0x08c04803,
    0x274e1a70, 0x48004c03, 0x00030061, 0x52060220,
    0x00344c05, 0x00000000, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x54060220,
    0x00344d05, 0x00000000, 0xe7581c70, 0x08c05603,
    0x00030061, 0x5c060220, 0x00345605, 0x00000000,
    0x00130061, 0x5e060220, 0x00345705, 0x00000000,
    0xa0501e40, 0x4a024e02, 0xa05a1c40, 0x4a025802,
    0x00031a61, 0x52260220, 0x00345005, 0x00000000,
    0x00131b61, 0x54260220, 0x00345105, 0x00000000,
    0x00031b61, 0x5c260220, 0x00345a05, 0x00000000,
    0x00131c61, 0x5e260220, 0x00345b05, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x60140000, 0xfb005224, 0x00000000,
    0xa7002170, 0x7f836001, 0x01040022, 0x0001c060,
    0x00000190, 0x00000180, 0xa0620040, 0x08404803,
    0xe7641970, 0x08406203, 0x00030061, 0x68060220,
    0x00346205, 0x00000000, 0x00130061, 0x6a060220,
    0x00346305, 0x00000000, 0xa0661b40, 0x4a026402,
    0x00031961, 0x68260220, 0x00346605, 0x00000000,
    0x00131a61, 0x6a260220, 0x00346705, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x6c140000, 0xfb006824, 0x00000000,
    0xa7002470, 0x7f836c01, 0x01040022, 0x0001c060,
    0x000000d0, 0x000000b0, 0xa0700040, 0x08804803,
    0xe7721970, 0x08807003, 0x00030061, 0x76060220,
    0x00347005, 0x00000000, 0x00130061, 0x78060220,
    0x00347105, 0x00000000, 0xa0741b40, 0x4a027202,
    0x00031961, 0x76260220, 0x00347405, 0x00000000,
    0x00131a61, 0x78260220, 0x00347505, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x7a140000, 0xfb007624, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xe7692570, 0x7f837a00, 0x00040024, 0x0001c060,
    0x00000030, 0x00000030, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00041161, 0x69054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040024, 0x0001c060,
    0x00000020, 0x00000020, 0x00040961, 0x69054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000a68, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x11140000,
    0xfb005c24, 0x00000000, 0xa7002670, 0x7f831101,
    0x01040022, 0x0001c060, 0x000001a0, 0x00000180,
    0xa0130040, 0x09004803, 0xe7151970, 0x09001303,
    0x00030061, 0x19060220, 0x00341305, 0x00000000,
    0x00130061, 0x1b060220, 0x00341405, 0x00000000,
    0xa0171b40, 0x4a021502, 0x00031961, 0x19260220,
    0x00341705, 0x00000000, 0x00131a61, 0x1b260220,
    0x00341805, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x1d140000,
    0xfb001924, 0x00000000, 0xa7002270, 0x7f831d01,
    0x01040022, 0x0001c060, 0x000000d0, 0x000000b0,
    0xa01e1140, 0x09404803, 0xe7201970, 0x09401e03,
    0x00030061, 0x33060220, 0x00341e05, 0x00000000,
    0x00130061, 0x35060220, 0x00341f05, 0x00000000,
    0xa0221b40, 0x4a022002, 0x00031961, 0x33260220,
    0x00342205, 0x00000000, 0x00131a61, 0x35260220,
    0x00342305, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x37140000,
    0xfb003324, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xe7672770, 0x7f833700,
    0x00040024, 0x0001c060, 0x00000030, 0x00000030,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00041161, 0x67054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040024, 0x0001c060, 0x00000030, 0x00000030,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00040961, 0x67054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000890,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xae381170, 0x00006e03, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x203a0965, 0x67003803,
    0xa0443366, 0x67223802, 0x00040a65, 0x00010220,
    0x22463a05, 0x00466905, 0x01040022, 0x0001c060,
    0x00000548, 0x00000528, 0xa0463340, 0x08404803,
    0xa0513140, 0x09004803, 0xa0130040, 0x01002903,
    0xa0333740, 0x02002903, 0x00040061, 0x42054220,
    0x00000000, 0x000000c0, 0xe74c1d70, 0x08404603,
    0x00031d61, 0x57060220, 0x00345105, 0x00000000,
    0x00131e61, 0x59060220, 0x00345205, 0x00000000,
    0xe7533170, 0x09005103, 0x00031f61, 0x0d060220,
    0x00341305, 0x00000000, 0x00131f61, 0x0f060220,
    0x00341405, 0x00000000, 0x00031f61, 0x15060220,
    0x00343305, 0x00000000, 0x00131f61, 0x17060220,
    0x00343405, 0x00000000, 0x27193270, 0x29001303,
    0xa04e1f40, 0x4a024c02, 0x27353770, 0x29003303,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa0551f40, 0x4a025302, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa01b1c40, 0x2d021902,
    0xa0370940, 0x2d023502, 0x00031b61, 0x57260220,
    0x00345505, 0x00000000, 0x00131c61, 0x59260220,
    0x00345605, 0x00000000, 0x00030061, 0x50060220,
    0x00344605, 0x00000000, 0x00130061, 0x52060220,
    0x00344705, 0x00000000, 0x00031e61, 0x0d260220,
    0x00341b05, 0x00000000, 0x00131f61, 0x0f260220,
    0x00341c05, 0x00000000, 0x00031f61, 0x15260220,
    0x00343705, 0x00000000, 0x00131f61, 0x17260220,
    0x00343805, 0x00000000, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x08240000,
    0xfb005724, 0x00040000, 0x00031e61, 0x50260220,
    0x00344e05, 0x00000000, 0x00131e61, 0x52260220,
    0x00344f05, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x1c440000,
    0xfb001524, 0x000c0000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00044a31, 0x14440000,
    0xfb000d24, 0x000c0000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x04240000,
    0xfb005024, 0x00040000, 0x25622862, 0x0a000800,
    0x25641162, 0x62001100, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x20592b40, 0x04000800,
    0xe0661241, 0x34006400, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xe05e1241, 0x3f005900,
    0x20583840, 0x60001100, 0x205a2b40, 0x06000a00,
    0x206c1440, 0x66000800, 0x20700040, 0x66000a00,
    0x2026da41, 0x16005e00, 0x80002901, 0x00000000,
    0x00000000, 0x00000000, 0x20381b41, 0x1e005e00,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xe05c1641, 0x3f005800, 0x20741540, 0x04206c00,
    0x206b3440, 0x66001100, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x0c440000,
    0xfb002f24, 0x000c0000, 0x0004b95b, 0x3a040aa8,
    0x0a0a3805, 0x5c051c05, 0x0004ea5b, 0x2b040aa8,
    0x0a0a2605, 0x5c051405, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xe0781441, 0x3f007400,
    0x20721440, 0x60206b00, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x20751740, 0x06207000,
    0x00041261, 0x6c054220, 0x00000000, 0x00000001,
    0x204c1341, 0x16407800, 0x20513b41, 0x1e407800,
    0x80002c01, 0x00000000, 0x00000000, 0x00000000,
    0x20471f41, 0x0e407800, 0x207a0041, 0x0e005e00,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xe0771641, 0x3f007200, 0xe05f0041, 0x3f005a00,
    0x0004bc5b, 0x04040aa8, 0x0a0a7a05, 0x5c050c05,
    0xe0791741, 0x3f007500, 0x0004145b, 0x49040aa8,
    0x0a4a4705, 0x77050c05, 0x00040a5b, 0x4e040aa8,
    0x0a4a4c05, 0x77051405, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x0004175b, 0x53040aa8,
    0x0a4a5105, 0x77051c05, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x0004ea5b, 0x2f040aa8,
    0x0a0a2b05, 0x5f051805, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x0004295b, 0x3c040aa8,
    0x0a0a3a05, 0x5f052005, 0x0004fc5b, 0x06040aa8,
    0x0a0a0405, 0x5f051005, 0x0004165b, 0x4b040aa8,
    0x0a4a4905, 0x79051005, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x0004165b, 0x50040aa8,
    0x0a4a4e05, 0x79051805, 0x00040e5b, 0x55040aa8,
    0x0a4a5305, 0x79052005, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x2031ea40, 0x1a002f00,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x20460e40, 0x22003c00, 0x2008ec40, 0x12000600,
    0x20360b40, 0x50203100, 0x203e0040, 0x50003100,
    0x20381440, 0x55204600, 0x20400040, 0x55004600,
    0x20341540, 0x4b200800, 0x203c0040, 0x4b000800,
    0x00040024, 0x0001c060, 0x00000030, 0x00000030,
    0x00040a61, 0x6c054220, 0x00000000, 0x00000000,
    0x00040061, 0x42054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000002f0,
    0x00040070, 0x00018660, 0x26466905, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x01040b62, 0x56058220, 0x02464405, 0xffffffff,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0xae580070, 0x00010343, 0x00041965, 0x00010220,
    0x22465805, 0x00465605, 0x01040022, 0x0001c060,
    0x00000278, 0x00000278, 0xa0591a40, 0x00c02903,
    0xa0630040, 0x01c02903, 0xa0740040, 0x02c02903,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x6c054220, 0x00000000, 0x00000001,
    0x00040061, 0x6e054220, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x275b1d70, 0x29005903, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00031261, 0x5f060220,
    0x00345905, 0x00000000, 0x00131261, 0x61060220,
    0x00345a05, 0x00000000, 0x00031f61, 0x70060220,
    0x00346305, 0x00000000, 0x00131f61, 0x72060220,
    0x00346405, 0x00000000, 0x27650070, 0x29006303,
    0x00031f61, 0x04060220, 0x00347405, 0x00000000,
    0x00130f61, 0x06060220, 0x00347505, 0x00000000,
    0x27763570, 0x29007403, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xa05d1f40, 0x2d025b02,
    0xa0671d40, 0x2d026502, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa0780b40, 0x2d027602,
    0x00031b61, 0x5f260220, 0x00345d05, 0x00000000,
    0x00131c61, 0x61260220, 0x00345e05, 0x00000000,
    0x00031c61, 0x70260220, 0x00346705, 0x00000000,
    0x00131d61, 0x72260220, 0x00346805, 0x00000000,
    0x00031d61, 0x04260220, 0x00347805, 0x00000000,
    0x00131e61, 0x06260220, 0x00347905, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x3c140000, 0xfb005f24, 0x00000000,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044d31, 0x3e140000, 0xfb007024, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x40140000, 0xfb000424, 0x00000000,
    0x80002601, 0x00000000, 0x00000000, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00041261, 0x34050220, 0x00463c05, 0x00000000,
    0x80002d01, 0x00000000, 0x00000000, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00041161, 0x36050220, 0x00463e05, 0x00000000,
    0x80002e01, 0x00000000, 0x00000000, 0x00000000,
    0x00041161, 0x38050220, 0x00464005, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040024, 0x0001c060, 0x00000030, 0x00000030,
    0x00041f61, 0x6c054220, 0x00000000, 0x00000000,
    0x00041d61, 0x42054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040024, 0x0001c060, 0x00000040, 0x00000040,
    0x00041c61, 0x6c054220, 0x00000000, 0x00000000,
    0x00041c61, 0x42054220, 0x00000000, 0x00000000,
    0x00041f61, 0x6e054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00001ad0,
    0x80041c61, 0x0c054660, 0x00000000, 0x00000000,
    0x00040061, 0x0c050660, 0x00466c05, 0x00000000,
    0x00040070, 0x00018660, 0x16467c05, 0x00000000,
    0x80031a40, 0x0c260660, 0x06440c06, 0x00440c26,
    0x80021940, 0x0c470660, 0x06420c27, 0x00420c47,
    0x80021940, 0x0c670660, 0x06420c27, 0x00420c67,
    0x80021940, 0x0c850660, 0x06000c64, 0x00340c85,
    0x80021a40, 0x0d850660, 0x06000d64, 0x00340d85,
    0xa40d1940, 0x0d010c82, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00043e61, 0x05050660,
    0x00000de4, 0x00000000, 0x01040022, 0x0001c060,
    0x000000c8, 0x000000b8, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0xa0071140, 0x02410203,
    0x27090970, 0x02100703, 0x00031c61, 0x0d060220,
    0x00340705, 0x00000000, 0x00130061, 0x0f060220,
    0x00340805, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa00b0040, 0x02120912,
    0x00031961, 0x0d260220, 0x00340b05, 0x00000000,
    0x00131a61, 0x0f260220, 0x00340c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x6a140000, 0xfb180d24, 0x01000514,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00042461, 0x6a054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00001950,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80041161, 0x10054660, 0x00000000, 0x00000000,
    0x00040061, 0x10050660, 0x00466c05, 0x00000000,
    0x00040070, 0x00018660, 0x16466c05, 0x00000000,
    0x80041140, 0x12058150, 0x05587e05, 0xffffffff,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80041961, 0x10014110, 0x00000000, 0x02000200,
    0x80040069, 0x10018510, 0x01461205, 0x00020002,
    0x80040940, 0x10018110, 0x01461001, 0x02000200,
    0xe30e0961, 0x001b0004, 0x80001961, 0x0e054660,
    0x00000000, 0x00000000, 0x80031940, 0x0e260660,
    0x06440e06, 0x00440e26, 0x80021940, 0x0e470660,
    0x06420e27, 0x00420e47, 0x80021940, 0x0e670660,
    0x06420e27, 0x00420e67, 0x80021940, 0x0e850660,
    0x06000e64, 0x00340e85, 0x80021a40, 0x0f850660,
    0x06000f64, 0x00340f85, 0xa40f1940, 0x0f010e82,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xa0100040, 0x0e016a02, 0x01040022, 0x0001c060,
    0x000003b0, 0x00000130, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041161, 0x38054220,
    0x00000000, 0x7f800000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00041161, 0x36054220,
    0x00000000, 0x7f800000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00041261, 0x34054220,
    0x00000000, 0x7f800000, 0x00041361, 0x40054220,
    0x00000000, 0xff800000, 0x00041561, 0x3e054220,
    0x00000000, 0xff800000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041161, 0x3c054220,
    0x00000000, 0xff800000, 0x00040061, 0x74054220,
    0x00000000, 0x7f800000, 0x00043d61, 0x72054220,
    0x00000000, 0x7f800000, 0x00043d61, 0x70054220,
    0x00000000, 0x7f800000, 0x00041261, 0x7a054220,
    0x00000000, 0xff800000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00041761, 0x78054220,
    0x00000000, 0xff800000, 0x00043561, 0x76054220,
    0x00000000, 0xff800000, 0x00040024, 0x0001c060,
    0x00000290, 0x00000290, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x12058660,
    0x02461005, 0x00000005, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0xa0151940, 0x12010302,
    0xe0130068, 0x01b01003, 0x00040069, 0x11058660,
    0x02466e05, 0x00000018, 0x27171b70, 0x03101503,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00031761, 0x1b060220, 0x00341505, 0x00000000,
    0x00131161, 0x1d060220, 0x00341605, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x203a1c66, 0x11002403, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00040c52, 0x19040660,
    0x0e2e0324, 0x17051305, 0x00131961, 0x1d260220,
    0x00341a05, 0x00000000, 0x00031a61, 0x1b260220,
    0x00341905, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xfb081b24, 0x000c3444, 0xa01c3240, 0x01001503,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x271e1970, 0x15001c03, 0x00031761, 0x22060220,
    0x00341c05, 0x00000000, 0x00130061, 0x24060220,
    0x00341d05, 0x00000000, 0xa0200b40, 0x19021e02,
    0x00131961, 0x24260220, 0x00342105, 0x00000000,
    0x00031a61, 0x22260220, 0x00342005, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044f31, 0x00000000, 0xfb082224, 0x000c3c44,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x20763240, 0x3c003400, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x20783240, 0x3e003600,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x207a1440, 0x40003800, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x00041361, 0x70050220,
    0x00467605, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x00041261, 0x72050220,
    0x00467805, 0x00000000, 0x00041161, 0x74050220,
    0x00467a05, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00001468, 0x00040070, 0x00018660,
    0x16467c05, 0x00000000, 0xa31d0961, 0x7f810000,
    0x601d0061, 0x00103400, 0xa31f0b61, 0x7f810000,
    0x601f0061, 0x00103600, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0xa3210b61, 0x7f810000,
    0x60210061, 0x00103800, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0xa3230e61, 0xff810000,
    0x60230061, 0x00103c00, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0xa3251661, 0xff810000,
    0x60250061, 0x00103e00, 0xa3271661, 0xff810000,
    0x60270061, 0x00104000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa3291d61, 0x7f810000,
    0x60290061, 0x00107000, 0xa32b1c61, 0x7f810000,
    0x602b0061, 0x00107200, 0xa32d1b61, 0x7f810000,
    0x602d0061, 0x00107400, 0xa32f1c61, 0xff810000,
    0x602f0061, 0x00107600, 0xa3311c61, 0xff810000,
    0x60310061, 0x00107800, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0xa3331b61, 0xff810000,
    0x60330061, 0x00107a00, 0x80030061, 0x16060220,
    0x00441d26, 0x00000000, 0x80033361, 0x44060220,
    0x00441f26, 0x00000000, 0x80031761, 0x65060220,
    0x00442126, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80031761, 0x0d060220,
    0x00442526, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80031761, 0x1a060220,
    0x00442726, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x80031461, 0x42060220,
    0x00442d26, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80031361, 0x47060220,
    0x00442f26, 0x00000000, 0x80031261, 0x4c060220,
    0x00443126, 0x00000000, 0x80031761, 0x7c060220,
    0x00442326, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x51060220,
    0x00443326, 0x00000000, 0x80031661, 0x38060220,
    0x00442926, 0x00000000, 0x80030062, 0x14060aa0,
    0x5a441d06, 0x00441606, 0x80031661, 0x3d060220,
    0x00442b26, 0x00000000, 0x80033262, 0x3a060aa0,
    0x5a441f06, 0x00444406, 0x80031f62, 0x63060aa0,
    0x5a442106, 0x00446506, 0x80031f62, 0x0b060aa0,
    0x4a442506, 0x00440d06, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80031f62, 0x18060aa0,
    0x4a442706, 0x00441a06, 0x80031f62, 0x40060aa0,
    0x5a442d06, 0x00444206, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80031d62, 0x4a060aa0,
    0x4a443106, 0x00444c06, 0x80031c62, 0x70060aa0,
    0x4a442306, 0x00447c06, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80031b62, 0x4f060aa0,
    0x4a443306, 0x00445106, 0x80031a62, 0x36060aa0,
    0x5a442906, 0x00443806, 0x80031761, 0x1d260220,
    0x00441406, 0x00000000, 0x80031761, 0x1f260220,
    0x00443a06, 0x00000000, 0x80031761, 0x21260220,
    0x00446306, 0x00000000, 0x80031761, 0x25260220,
    0x00440b06, 0x00000000, 0x80031661, 0x27260220,
    0x00441806, 0x00000000, 0x80031561, 0x2d260220,
    0x00444006, 0x00000000, 0x80033362, 0x45060aa0,
    0x4a442f06, 0x00444706, 0x80031561, 0x31260220,
    0x00444a06, 0x00000000, 0x80031461, 0x23260220,
    0x00447006, 0x00000000, 0x80031361, 0x33260220,
    0x00444f06, 0x00000000, 0x80031261, 0x29260220,
    0x00443606, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80020f61, 0x1b070220,
    0x00421d47, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80021f61, 0x53070220,
    0x00421f47, 0x00000000, 0x80021561, 0x4d070220,
    0x00421f27, 0x00000000, 0x80022461, 0x6a070220,
    0x00422147, 0x00000000, 0x80020061, 0x68070220,
    0x00422127, 0x00000000, 0x80020061, 0x12070220,
    0x00422547, 0x00000000, 0x80020061, 0x10070220,
    0x00422527, 0x00000000, 0x80021361, 0x51070220,
    0x00422d47, 0x00000000, 0x80031161, 0x2f260220,
    0x00444506, 0x00000000, 0x80023661, 0x5d070220,
    0x00423147, 0x00000000, 0x80023661, 0x5b070220,
    0x00423127, 0x00000000, 0x80030062, 0x3b060aa0,
    0x5a442b06, 0x00443d06, 0x80023461, 0x05070220,
    0x00422347, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80022161, 0x03070220,
    0x00422327, 0x00000000, 0x80020061, 0x63070220,
    0x00423347, 0x00000000, 0x80023661, 0x61070220,
    0x00423327, 0x00000000, 0x80021761, 0x19070220,
    0x00421d27, 0x00000000, 0x80021761, 0x43070220,
    0x00422927, 0x00000000, 0x80020061, 0x3f070220,
    0x00422747, 0x00000000, 0x80020062, 0x47070aa0,
    0x5a424d07, 0x00425307, 0x80020062, 0x66070aa0,
    0x5a426807, 0x00426a07, 0x80020062, 0x0e070aa0,
    0x4a421007, 0x00421207, 0x80020061, 0x4f070220,
    0x00422d27, 0x00000000, 0x80020061, 0x57070220,
    0x00422f47, 0x00000000, 0x80023161, 0x55070220,
    0x00422f27, 0x00000000, 0x80031461, 0x2b260220,
    0x00443b06, 0x00000000, 0x80021f62, 0x7d070aa0,
    0x4a420307, 0x00420507, 0x80021f62, 0x17070aa0,
    0x5a421907, 0x00421b07, 0x80021561, 0x1f470220,
    0x00424707, 0x00000000, 0x80021461, 0x21470220,
    0x00426607, 0x00000000, 0x80020061, 0x45070220,
    0x00422947, 0x00000000, 0x80021361, 0x25470220,
    0x00420e07, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80021661, 0x3d070220,
    0x00422727, 0x00000000, 0x80021e61, 0x4b070220,
    0x00422b47, 0x00000000, 0x80020061, 0x49070220,
    0x00422b27, 0x00000000, 0x80020062, 0x4d070aa0,
    0x4a425b07, 0x00425d07, 0x80021361, 0x23470220,
    0x00427d07, 0x00000000, 0x80021261, 0x1d470220,
    0x00421707, 0x00000000, 0x80021f61, 0x6f070220,
    0x00422167, 0x00000000, 0x80020061, 0x6d070220,
    0x00422127, 0x00000000, 0x80021f62, 0x39070aa0,
    0x5a424307, 0x00424507, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80021f61, 0x15070220,
    0x00422527, 0x00000000, 0x80021f62, 0x1b070aa0,
    0x4a423d07, 0x00423f07, 0x80021361, 0x31470220,
    0x00424d07, 0x00000000, 0x80021e61, 0x0a070220,
    0x00422367, 0x00000000, 0x80020061, 0x08070220,
    0x00422327, 0x00000000, 0x80021f61, 0x37070220,
    0x00421d27, 0x00000000, 0x80021e62, 0x6b070aa0,
    0x5a426d07, 0x00426f07, 0x80021361, 0x29470220,
    0x00423907, 0x00000000, 0x80021461, 0x5c070220,
    0x00421f27, 0x00000000, 0x80020061, 0x17070220,
    0x00422567, 0x00000000, 0x80021261, 0x27470220,
    0x00421b07, 0x00000000, 0x80020062, 0x43070aa0,
    0x5a424f07, 0x00425107, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80020d61, 0x5e070220,
    0x00423127, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80021f62, 0x06070aa0,
    0x4a420807, 0x00420a07, 0x80020062, 0x3e070aa0,
    0x5a424907, 0x00424b07, 0x80021461, 0x21670220,
    0x00426b07, 0x00000000, 0x80020e61, 0x46070220,
    0x00422927, 0x00000000, 0x80021d62, 0x13070aa0,
    0x4a421507, 0x00421707, 0x80020c61, 0x40070220,
    0x00422727, 0x00000000, 0x80021461, 0x2d470220,
    0x00424307, 0x00000000, 0x80020061, 0x39070220,
    0x00421d67, 0x00000000, 0x80021361, 0x23670220,
    0x00420607, 0x00000000, 0x80020062, 0x52070aa0,
    0x4a426107, 0x00426307, 0x80021361, 0x2b470220,
    0x00423e07, 0x00000000, 0x80021f62, 0x21850aa0,
    0x5a002164, 0x00342185, 0x80021f62, 0x22850aa0,
    0x5a002264, 0x00342285, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80021461, 0x25670220,
    0x00421307, 0x00000000, 0x80020062, 0x48070aa0,
    0x4a425507, 0x00425707, 0x80021c62, 0x35070aa0,
    0x5a423707, 0x00423907, 0x80021b62, 0x23850aa0,
    0x4a002364, 0x00342385, 0x80021b62, 0x24850aa0,
    0x4a002464, 0x00342485, 0x80021761, 0x33470220,
    0x00425207, 0x00000000, 0x80020061, 0x42070220,
    0x00422767, 0x00000000, 0x80021c61, 0x4e070220,
    0x00422b67, 0x00000000, 0x80021761, 0x4c070220,
    0x00422b27, 0x00000000, 0x80031562, 0x22050aa0,
    0x5a0021e4, 0x00462205, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80021761, 0x60070220,
    0x00423167, 0x00000000, 0x80021761, 0x62070220,
    0x00421f67, 0x00000000, 0x80021f62, 0x25850aa0,
    0x4a002564, 0x00342585, 0x80021f62, 0x26850aa0,
    0x4a002664, 0x00342685, 0x80021761, 0x2f470220,
    0x00424807, 0x00000000, 0x80021661, 0x1d670220,
    0x00423507, 0x00000000, 0x80031462, 0x24050aa0,
    0x4a0023e4, 0x00462405, 0x80021f61, 0x66070220,
    0x00423367, 0x00000000, 0x80020061, 0x64070220,
    0x00423327, 0x00000000, 0x80021761, 0x54070220,
    0x00422d67, 0x00000000, 0x80020061, 0x52070220,
    0x00422d27, 0x00000000, 0x80021f62, 0x56070aa0,
    0x5a425c07, 0x00426207, 0x80031362, 0x26050aa0,
    0x4a0025e4, 0x00462605, 0x80021e61, 0x5a070220,
    0x00422f67, 0x00000000, 0x80021761, 0x58070220,
    0x00422f27, 0x00000000, 0x80021f62, 0x1d850aa0,
    0x5a001d64, 0x00341d85, 0x80021f62, 0x1e850aa0,
    0x5a001e64, 0x00341e85, 0x80020061, 0x48070220,
    0x00422967, 0x00000000, 0x80021f62, 0x35070aa0,
    0x4a424007, 0x00424207, 0x80021c62, 0x44070aa0,
    0x5a425207, 0x00425407, 0x80021661, 0x1f670220,
    0x00425607, 0x00000000, 0x80031362, 0x1e050aa0,
    0x5a001de4, 0x00461e05, 0x80021a62, 0x3a070aa0,
    0x5a424607, 0x00424807, 0x80021461, 0x27670220,
    0x00423507, 0x00000000, 0x80021361, 0x2d670220,
    0x00424407, 0x00000000, 0x80020062, 0x3f070aa0,
    0x5a424c07, 0x00424e07, 0x80021b62, 0x1f850aa0,
    0x5a001f64, 0x00341f85, 0x80021b62, 0x20850aa0,
    0x5a002064, 0x00342085, 0x80021f62, 0x53070aa0,
    0x4a426407, 0x00426607, 0x80021561, 0x29670220,
    0x00423a07, 0x00000000, 0x80021e62, 0x49070aa0,
    0x4a425807, 0x00425a07, 0x80021b62, 0x27850aa0,
    0x4a002764, 0x00342785, 0x80021b62, 0x28850aa0,
    0x4a002864, 0x00342885, 0x80021a62, 0x2d850aa0,
    0x5a002d64, 0x00342d85, 0x80021a62, 0x2e850aa0,
    0x5a002e64, 0x00342e85, 0x80021761, 0x2b670220,
    0x00423f07, 0x00000000, 0x80031762, 0x20050aa0,
    0x5a001fe4, 0x00462005, 0x80020062, 0x4e070aa0,
    0x4a425e07, 0x00426007, 0x80021761, 0x33670220,
    0x00425307, 0x00000000, 0x80021b62, 0x29850aa0,
    0x5a002964, 0x00342985, 0x80021b62, 0x2a850aa0,
    0x5a002a64, 0x00342a85, 0x80021761, 0x2f670220,
    0x00424907, 0x00000000, 0x80031762, 0x28050aa0,
    0x4a0027e4, 0x00462805, 0x80031662, 0x2e050aa0,
    0x5a002de4, 0x00462e05, 0x80021b62, 0x2b850aa0,
    0x5a002b64, 0x00342b85, 0x80021b62, 0x2c850aa0,
    0x5a002c64, 0x00342c85, 0x80021761, 0x31670220,
    0x00424e07, 0x00000000, 0x80021b62, 0x33850aa0,
    0x4a003364, 0x00343385, 0x80021b62, 0x34850aa0,
    0x4a003464, 0x00343485, 0x80031762, 0x2a050aa0,
    0x5a0029e4, 0x00462a05, 0x80021a62, 0x2f850aa0,
    0x4a002f64, 0x00342f85, 0x80021a62, 0x30850aa0,
    0x4a003064, 0x00343085, 0x80031662, 0x2c050aa0,
    0x5a002be4, 0x00462c05, 0x80021962, 0x31850aa0,
    0x4a003164, 0x00343185, 0x80021962, 0x32850aa0,
    0x4a003264, 0x00343285, 0x80031762, 0x34050aa0,
    0x4a0033e4, 0x00463405, 0x80031562, 0x30050aa0,
    0x4a002fe4, 0x00463005, 0x80031362, 0x32050aa0,
    0x4a0031e4, 0x00463205, 0x80000b01, 0x00000000,
    0x00000000, 0x00000000, 0x60390061, 0x00113480,
    0x60330061, 0x00112e80, 0x80000c01, 0x00000000,
    0x00000000, 0x00000000, 0x60350061, 0x00113080,
    0x602d0061, 0x00112880, 0x602f0061, 0x00112a80,
    0x80001601, 0x00000000, 0x00000000, 0x00000000,
    0x60370061, 0x00113280, 0x60270061, 0x00112280,
    0x60290061, 0x00112480, 0x60310061, 0x00112c80,
    0x60230061, 0x00111e80, 0x602b0061, 0x00112680,
    0x60250061, 0x00112080, 0x01040022, 0x0001c060,
    0x000006e8, 0x000006e8, 0x80001e01, 0x00000000,
    0x00000000, 0x00000000, 0xa03b0040, 0x08010243,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x273d0070, 0x02103b2b, 0x00030061, 0x41060220,
    0x00343b05, 0x00000000, 0x00130061, 0x43060220,
    0x00343c05, 0x00000000, 0xa03f1b40, 0x02123d1a,
    0x00031961, 0x41260220, 0x00343f05, 0x00000000,
    0x00131a61, 0x43260220, 0x00344005, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb2a4124, 0x01002314,
    0xa0423040, 0x08410243, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xe7441970, 0x08404203,
    0x00030061, 0x48060220, 0x00344205, 0x00000000,
    0x00130061, 0x4a060220, 0x00344305, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa0460040, 0x0212441a, 0x00031961, 0x48260220,
    0x00344605, 0x00000000, 0x00131a61, 0x4a260220,
    0x00344705, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb2a4824, 0x01002514, 0xa0493140, 0x08810243,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe74b3170, 0x08804903, 0x00030061, 0x4f060220,
    0x00344905, 0x00000000, 0x00130061, 0x51060220,
    0x00344a05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa04d0040, 0x02124b1a,
    0x00031961, 0x4f260220, 0x00344d05, 0x00000000,
    0x00131a61, 0x51260220, 0x00344e05, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x00000000, 0xfb2a4f24, 0x01002714,
    0xa0503240, 0x08c10243, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xe7523270, 0x08c05003,
    0x00030061, 0x56060220, 0x00345005, 0x00000000,
    0x00130061, 0x58060220, 0x00345105, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa0540040, 0x0212521a, 0x00031961, 0x56260220,
    0x00345405, 0x00000000, 0x00131a61, 0x58260220,
    0x00345505, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xfb2c5624, 0x01002914, 0xa0573340, 0x09010243,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe7593370, 0x09005703, 0x00030061, 0x5d060220,
    0x00345705, 0x00000000, 0x00130061, 0x5f060220,
    0x00345805, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa05b0040, 0x0212591a,
    0x00031961, 0x5d260220, 0x00345b05, 0x00000000,
    0x00131a61, 0x5f260220, 0x00345c05, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x00000000, 0xfb2c5d24, 0x01002b14,
    0xa05e3440, 0x09410243, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xe7603470, 0x09405e03,
    0x00030061, 0x64060220, 0x00345e05, 0x00000000,
    0x00130061, 0x66060220, 0x00345f05, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa0620040, 0x0212601a, 0x00031961, 0x64260220,
    0x00346205, 0x00000000, 0x00131a61, 0x66260220,
    0x00346305, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x00000000,
    0xfb2c6424, 0x01002d14, 0x00030061, 0x13260660,
    0x00000224, 0x00000000, 0x00130061, 0x15260660,
    0x00000224, 0x00000000, 0x00031a61, 0x13060660,
    0x00000204, 0x00000000, 0x00131a61, 0x15060660,
    0x00000204, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xfb2a1324, 0x01002f14, 0xa0653540, 0x00410203,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x27673570, 0x02106503, 0x00030061, 0x6b060220,
    0x00346505, 0x00000000, 0x00130061, 0x6d060220,
    0x00346605, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa0690040, 0x02126712,
    0x00031961, 0x6b260220, 0x00346905, 0x00000000,
    0x00131a61, 0x6d260220, 0x00346a05, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x00000000, 0xfb2a6b24, 0x01003114,
    0xa06c3740, 0x00810203, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x276e3770, 0x02106c03,
    0x00030061, 0x72060220, 0x00346c05, 0x00000000,
    0x00130061, 0x74060220, 0x00346d05, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa0700040, 0x02126e12, 0x00031961, 0x72260220,
    0x00347005, 0x00000000, 0x00131a61, 0x74260220,
    0x00347105, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xfb2a7224, 0x01003314, 0xa0733840, 0x01010203,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x27753870, 0x02107303, 0x00030061, 0x79060220,
    0x00347305, 0x00000000, 0x00130061, 0x7b060220,
    0x00347405, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa0770040, 0x02127512,
    0x00031961, 0x79260220, 0x00347705, 0x00000000,
    0x00131a61, 0x7b260220, 0x00347805, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x00000000, 0xfb2c7924, 0x01003514,
    0xa07a3940, 0x01410203, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0xe77c1970, 0x01407a03,
    0x00030061, 0x03060220, 0x00347a05, 0x00000000,
    0x00130061, 0x05060220, 0x00347b05, 0x00000000,
    0xa07e1b40, 0x02127c12, 0x00031961, 0x03260220,
    0x00347e05, 0x00000000, 0x00131a61, 0x05260220,
    0x00347f05, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb2c0324, 0x01003714, 0xa0043140, 0x01810203,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe7063170, 0x01800403, 0x00030061, 0x0a060220,
    0x00340405, 0x00000000, 0x00130061, 0x0c060220,
    0x00340505, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa0080040, 0x02120612,
    0x00131961, 0x0c260220, 0x00340905, 0x00000000,
    0x00031a61, 0x0a260220, 0x00340805, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044a31, 0x00000000, 0xfb2c0a24, 0x01003914,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_primref_primrefs_from_DXR_instances = {
   .prog_data = {
      .base.nr_params = 19,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 3,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 11024,
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
const char *gfx125_bvh_build_primref_primrefs_from_DXR_instances_sha1 = "dc41dfd2576628e46d07abf3674d9fb446b58f02";

#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_indirect_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_indirect_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_indirect_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
   { 24, 8 },
   { 32, 8 },
   { 40, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g127<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g60<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g127UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g42<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g45<1>D         g60<8,8,1>D     0x00000004UD    { align1 1H I@2 };
add(8)          g42.8<1>UW      g42<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g40<1>UD        g42<8,8,1>UW                    { align1 1H };
and(16)         g43<1>UD        g40<1,1,0>UD    0x0000000fUD    { align1 1H I@1 compacted };
add(16)         g47<1>D         g43<1,1,0>D     g45<1,1,0>D     { align1 1H I@1 compacted };
add(1)          g1<1>UD         g127<0,1,0>UD   0x00000040UD    { align1 WE_all 1N $0.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g3UD            g1UD            nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.dst };
mov(8)          g78.1<2>D       g3.1<0,1,0>D                    { align1 2Q };
mov(8)          g76.1<2>D       g3.1<0,1,0>D                    { align1 1Q };
mov(8)          g78<2>D         g3<0,1,0>D                      { align1 2Q I@2 };
mov(8)          g76<2>D         g3<0,1,0>D                      { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g49UD           g76UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
cmp.l.f0.0(16)  null<1>UD       g47<8,8,1>UD    g49<8,8,1>UD    { align1 1H @6 $2.dst };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
add(16)         g50<1>D         g3<0,1,0>D      4D              { align1 1H compacted };
shl(16)         g67<1>D         g47<8,8,1>D     0x00000003UD    { align1 1H };
cmp.l.f0.0(16)  g52<1>UD        g50<1,1,0>UD    g3<0,1,0>UD     { align1 1H I@2 compacted };
mov(8)          g56<2>UD        g50<4,4,1>UD                    { align1 1Q };
mov(8)          g58<2>UD        g51<4,4,1>UD                    { align1 2Q };
add(16)         g54<1>D         -g52<1,1,0>D    g3.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g56.1<2>UD      g54<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g58.1<2>UD      g55<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g60UD           g56UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g62<1>D         g2.4<0,1,0>D    g60<1,1,0>D     { align1 1H $3.dst compacted };
add(16)         g70<1>D         g62<1,1,0>D     g67<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g64<1>UD        g62<1,1,0>UD    g2.4<0,1,0>UD   { align1 1H compacted };
shr(16)         g68<1>UD        g47<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
cmp.l.f0.0(16)  g72<1>UD        g70<1,1,0>UD    g62<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g76<2>UD        g70<4,4,1>UD                    { align1 1Q $2.src };
mov(8)          g78<2>UD        g71<4,4,1>UD                    { align1 2Q $2.src };
add(16)         g66<1>D         -g64<1,1,0>D    g2.5<0,1,0>D    { align1 1H I@5 compacted };
add3(16)        g74<1>D         g66<8,8,1>D     g68<8,8,1>D     -g72<1,1,1>D { align1 1H I@1 };
mov(8)          g78.1<2>UD      g75<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g76.1<2>UD      g74<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g4UD            g76UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
mov(8)          g77<2>UD        g4<4,4,1>UD                     { align1 1Q $4.dst };
mov(8)          g79<2>UD        g5<4,4,1>UD                     { align1 2Q $4.dst };
or.nz.f0.0(16)  null<1>UD       g4<8,8,1>UD     g6<8,8,1>UD     { align1 1H $4.dst };
mov(8)          g77.1<2>UD      g6<4,4,1>UD                     { align1 1Q I@3 };
mov(8)          g79.1<2>UD      g7<4,4,1>UD                     { align1 2Q I@3 };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL1              { align1 1H };
add(16)         g81<1>D         g4<1,1,0>D      48D             { align1 1H compacted };
add(16)         g92<1>D         g4<1,1,0>D      56D             { align1 1H compacted };
cmp.l.f0.0(16)  g83<1>UD        g81<1,1,0>UD    g4<1,1,0>UD     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g94<1>UD        g92<1,1,0>UD    g4<1,1,0>UD     { align1 1H I@2 compacted };
mov(8)          g87<2>UD        g81<4,4,1>UD                    { align1 1Q };
mov(8)          g89<2>UD        g82<4,4,1>UD                    { align1 2Q };
mov(8)          g98<2>UD        g92<4,4,1>UD                    { align1 1Q };
mov(8)          g100<2>UD       g93<4,4,1>UD                    { align1 2Q };
add(16)         g85<1>D         -g83<1,1,0>D    g6<1,1,0>D      { align1 1H I@6 compacted };
add(16)         g96<1>D         -g94<1,1,0>D    g6<1,1,0>D      { align1 1H I@6 compacted };
mov(8)          g87.1<2>UD      g85<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g89.1<2>UD      g86<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g98.1<2>UD      g96<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g100.1<2>UD     g97<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g91UD           g87UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g102UD          g98UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
mov(16)         g114<1>UD       g91.3<32,8,4>UB                 { align1 1H $5.dst };
or.nz.f0.0(16)  null<1>UD       g102<8,8,1>UD   g104<8,8,1>UD   { align1 1H $6.dst };
(+f0.0) if(16)  JIP:  LABEL4          UIP:  LABEL3              { align1 1H };
add(16)         g106<1>D        g102<1,1,0>D    128D            { align1 1H compacted };
add(16)         g120<1>D        g102<1,1,0>D    140D            { align1 1H compacted };
cmp.l.f0.0(16)  g108<1>UD       g106<1,1,0>UD   g102<1,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g116<2>UD       g106<4,4,1>UD                   { align1 1Q };
mov(8)          g118<2>UD       g107<4,4,1>UD                   { align1 2Q };
cmp.l.f0.0(16)  g122<1>UD       g120<1,1,0>UD   0x0000008cUD    { align1 1H I@4 compacted };
mov(8)          g8<2>UD         g120<4,4,1>UD                   { align1 1Q };
mov(8)          g10<2>UD        g121<4,4,1>UD                   { align1 2Q };
add(16)         g110<1>D        -g108<1,1,0>D   g104<1,1,0>D    { align1 1H I@6 compacted };
add(16)         g124<1>D        -g122<1,1,0>D   g104<1,1,0>D    { align1 1H I@4 compacted };
mov(8)          g116.1<2>UD     g110<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g118.1<2>UD     g111<4,4,1>UD                   { align1 2Q I@3 };
mov(8)          g8.1<2>UD       g124<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g10.1<2>UD      g125<4,4,1>UD                   { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g21UD           g116UD          nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
cmp.l.f0.0(16)  null<1>F        (abs)g21<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $7.dst compacted };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL5              { align1 1H };
add(16)         g23<1>D         g102<1,1,0>D    132D            { align1 1H compacted };
cmp.l.f0.0(16)  g25<1>UD        g23<1,1,0>UD    0x00000084UD    { align1 1H I@1 compacted };
mov(8)          g29<2>UD        g23<4,4,1>UD                    { align1 1Q };
mov(8)          g31<2>UD        g24<4,4,1>UD                    { align1 2Q };
add(16)         g27<1>D         -g25<1,1,0>D    g104<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g29.1<2>UD      g27<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g31.1<2>UD      g28<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g33UD           g29UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
cmp.l.f0.0(16)  null<1>F        (abs)g33<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $8.dst compacted };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
add(16)         g34<1>D         g102<1,1,0>D    136D            { align1 1H F@1 compacted };
cmp.l.f0.0(16)  g36<1>UD        g34<1,1,0>UD    0x00000088UD    { align1 1H I@1 compacted };
mov(8)          g43<2>UD        g34<4,4,1>UD                    { align1 1Q };
mov(8)          g45<2>UD        g35<4,4,1>UD                    { align1 2Q };
add(16)         g38<1>D         -g36<1,1,0>D    g104<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g43.1<2>UD      g38<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g45.1<2>UD      g39<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g49UD           g43UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
cmp.l.f0.0(16)  g109<1>F        (abs)g49<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $9.dst compacted };
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
mov(16)         g109<1>UD       0x00000000UD                    { align1 1H F@1 };

LABEL7:
endif(16)       JIP:  LABEL9                                    { align1 1H };

LABEL9:
else(16)        JIP:  LABEL5          UIP:  LABEL5              { align1 1H };

LABEL6:
mov(16)         g109<1>UD       0x00000000UD                    { align1 1H A@1 };

LABEL5:
endif(16)       JIP:  LABEL10                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g50UD           g8UD            nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
cmp.l.f0.0(16)  null<1>F        (abs)g50<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $10.dst compacted };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
add(16)         g52<1>D         g102<1,1,0>D    144D            { align1 1H compacted };
cmp.l.f0.0(16)  g54<1>UD        g52<1,1,0>UD    0x00000090UD    { align1 1H I@1 compacted };
mov(8)          g58<2>UD        g52<4,4,1>UD                    { align1 1Q $3.src };
mov(8)          g60<2>UD        g53<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g56<1>D         -g54<1,1,0>D    g104<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g58.1<2>UD      g56<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g60.1<2>UD      g57<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g62UD           g58UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
cmp.l.f0.0(16)  null<1>F        (abs)g62<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $3.dst compacted };
(+f0.0) if(16)  JIP:  LABEL14         UIP:  LABEL13             { align1 1H };
add(16)         g63<1>D         g102<1,1,0>D    148D            { align1 1H F@1 compacted };
cmp.l.f0.0(16)  g65<1>UD        g63<1,1,0>UD    0x00000094UD    { align1 1H I@1 compacted };
mov(8)          g69<2>UD        g63<4,4,1>UD                    { align1 1Q };
mov(8)          g71<2>UD        g64<4,4,1>UD                    { align1 2Q };
add(16)         g67<1>D         -g65<1,1,0>D    g104<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g69.1<2>UD      g67<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g71.1<2>UD      g68<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g73UD           g69UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $11 };
cmp.l.f0.0(16)  g107<1>F        (abs)g73<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $11.dst compacted };
else(16)        JIP:  LABEL13         UIP:  LABEL13             { align1 1H };

LABEL14:
mov(16)         g107<1>UD       0x00000000UD                    { align1 1H F@1 };

LABEL13:
endif(16)       JIP:  LABEL15                                   { align1 1H };

LABEL15:
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
mov(16)         g107<1>UD       0x00000000UD                    { align1 1H A@1 };

LABEL11:
endif(16)       JIP:  LABEL10                                   { align1 1H };
cmp.nz.f0.0(16) g74<1>D         g114<1,1,0>D    0D              { align1 1H F@1 compacted };
and(16)         g81<1>UD        g74<1,1,0>UD    g107<1,1,0>UD   { align1 1H A@1 compacted };
and.nz.f0.0(16) null<1>UD       g81<8,8,1>UD    g109<8,8,1>UD   { align1 1H A@1 };
or(16)          g82<1>D         ~g74<1,1,0>D    ~g107<1,1,0>D   { align1 1H compacted };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL16             { align1 1H };
add(16)         g84<1>D         g102<1,1,0>D    132D            { align1 1H compacted };
add(16)         g91<1>D         g102<1,1,0>D    144D            { align1 1H compacted };
add(16)         g54<1>D         g4<1,1,0>D      16D             { align1 1H compacted };
add(16)         g73<1>D         g4<1,1,0>D      32D             { align1 1H A@1 compacted };
mov(16)         g70<1>UD        0x000000c0UD                    { align1 1H $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g86<1>UD        g84<1,1,0>UD    0x00000084UD    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g97<2>UD        g91<4,4,1>UD                    { align1 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $6.src };
mov(8)          g99<2>UD        g92<4,4,1>UD                    { align1 2Q I@6 };
cmp.l.f0.0(16)  g93<1>UD        g91<1,1,0>UD    0x00000090UD    { align1 1H compacted };
mov(8)          g17<2>UD        g54<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g19<2>UD        g55<4,4,1>UD                    { align1 2Q I@7 };
mov(8)          g25<2>UD        g73<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g27<2>UD        g74<4,4,1>UD                    { align1 2Q I@7 };
cmp.l.f0.0(16)  g56<1>UD        g54<1,1,0>UD    g4<1,1,0>UD     { align1 1H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g88<1>D         -g86<1,1,0>D    g104<1,1,0>D    { align1 1H I@7 compacted };
cmp.l.f0.0(16)  g75<1>UD        g73<1,1,0>UD    g4<1,1,0>UD     { align1 1H $4.src compacted };
add(16)         g95<1>D         -g93<1,1,0>D    g104<1,1,0>D    { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g58<1>D         -g56<1,1,0>D    g6<1,1,0>D      { align1 1H I@4 compacted };
mov(8)          g97.1<2>UD      g95<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g99.1<2>UD      g96<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g90<2>UD        g84<4,4,1>UD                    { align1 1Q $5.src };
mov(8)          g92<2>UD        g85<4,4,1>UD                    { align1 2Q };
add(16)         g84<1>D         -g75<1,1,0>D    g6<1,1,0>D      { align1 1H I@7 compacted };
mov(8)          g17.1<2>UD      g58<4,4,1>UD                    { align1 1Q I@6 };
mov(8)          g19.1<2>UD      g59<4,4,1>UD                    { align1 2Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
send(16)        g12UD           g97UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $12 };
mov(8)          g90.1<2>UD      g88<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g92.1<2>UD      g89<4,4,1>UD                    { align1 2Q I@5 };
mov(8)          g25.1<2>UD      g84<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g27.1<2>UD      g85<4,4,1>UD                    { align1 2Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g8UD            g90UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g32UD           g25UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g24UD           g17UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $15 };
sel.ge(16)      g106<1>F        g12<1,1,0>F     g14<1,1,0>F     { align1 1H $12.dst compacted };
sel.ge(16)      g111<1>F        g50<1,1,0>F     g106<1,1,0>F    { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g99<1>F         g12<1,1,0>F     g8<1,1,0>F      { align1 1H $13.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mul(16)         g116<1>F        g111<1,1,0>F    0x34000000F  /* 1.19209e-07F */ { align1 1H F@2 compacted };
mul(16)         g104<1>F        g99<1,1,0>F     0x3f000000F  /* 0.5F */ { align1 1H F@2 compacted };
add(16)         g98<1>F         g50<1,1,0>F     g21<1,1,0>F     { align1 1H $12.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g100<1>F        g14<1,1,0>F     g10<1,1,0>F     { align1 1H $13.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g119<1>F        g12<1,1,0>F     g116<1,1,0>F    { align1 1H F@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mul(16)         g59<1>F         g104<1,1,0>F    g26<1,1,0>F     { align1 1H A@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
mul(16)         g85<1>F         g104<1,1,0>F    g34<1,1,0>F     { align1 1H I@1 compacted };
mul(16)         g102<1>F        g98<1,1,0>F     0x3f000000F  /* 0.5F */ { align1 1H F@5 compacted };
add(16)         g124<1>F        g119<1,1,0>F    -g8<1,1,0>F     { align1 1H F@4 compacted };
add(16)         g118<1>F        g50<1,1,0>F     g116<1,1,0>F    { align1 1H $7.src compacted };
add(16)         g120<1>F        g14<1,1,0>F     g116<1,1,0>F    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
mad(16)         g87<1>F         g85<8,8,1>F     g32<8,8,1>F     g102<1,1,1>F { align1 1H A@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mad(16)         g61<1>F         g59<8,8,1>F     g24<8,8,1>F     g102<1,1,1>F { align1 1H @7 $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mul(16)         g43<1>F         g124<1,1,0>F    0x3f000000F  /* 0.5F */ { align1 1H F@5 compacted };
add(16)         g122<1>F        g118<1,1,0>F    -g21<1,1,0>F    { align1 1H F@5 compacted };
add(16)         g125<1>F        g120<1,1,0>F    -g10<1,1,0>F    { align1 1H F@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
send(16)        g16UD           g77UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mul(16)         g97<1>F         g43<1,1,0>F     (abs)g26<1,1,0>F { align1 1H F@3 compacted };
mul(16)         g107<1>F        g43<1,1,0>F     (abs)g34<1,1,0>F { align1 1H compacted };
mul(16)         g8<1>F          g122<1,1,0>F    0x3f000000F  /* 0.5F */ { align1 1H F@4 compacted };
mad(16)         g111<1>F        g107<8,8,1>F    (abs)g32<8,8,1>F g8<1,1,1>F { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mul(16)         g45<1>F         g104<1,1,0>F    g18<1,1,0>F     { align1 1H $0.dst compacted };
mul(16)         g92<1>F         g43<1,1,0>F     (abs)g18<1,1,0>F { align1 1H $13.src compacted };
mul(16)         g105<1>F        g100<1,1,0>F    0x3f000000F  /* 0.5F */ { align1 1H compacted };
mad(16)         g99<1>F         g97<8,8,1>F     (abs)g24<8,8,1>F g8<1,1,1>F { align1 1H F@7 };
mad(16)         g49<1>F         g45<8,8,1>F     g16<8,8,1>F     g102<1,1,1>F { align1 1H @4 $0.dst };
mul(16)         g44<1>F         g125<1,1,0>F    0x3f000000F  /* 0.5F */ { align1 1H F@7 compacted };
mad(16)         g94<1>F         g92<8,8,1>F     (abs)g16<8,8,1>F g8<1,1,1>F { align1 1H F@5 };
mad(16)         g63<1>F         g61<8,8,1>F     g28<8,8,1>F     g105<1,1,1>F { align1 1H @5 $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mad(16)         g89<1>F         g87<8,8,1>F     g36<8,8,1>F     g105<1,1,1>F { align1 1H I@3 };
mad(16)         g101<1>F        g99<8,8,1>F     (abs)g28<8,8,1>F g44<1,1,1>F { align1 1H F@4 };
mad(16)         g116<1>F        g111<8,8,1>F    (abs)g36<8,8,1>F g44<1,1,1>F { align1 1H };
mad(16)         g51<1>F         g49<8,8,1>F     g20<8,8,1>F     g105<1,1,1>F { align1 1H @7 $0.dst };
mad(16)         g96<1>F         g94<8,8,1>F     (abs)g20<8,8,1>F g44<1,1,1>F { align1 1H A@6 };
mov(16)         g112<1>UD       0x00000001UD                    { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(16)         g72<1>F         g63<1,1,0>F     g30<1,1,0>F     { align1 1H @6 $15.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g91<1>F         g89<1,1,0>F     g38<1,1,0>F     { align1 1H @6 $14.dst compacted };
add(16)         g53<1>F         g51<1,1,0>F     g22<1,1,0>F     { align1 1H @4 $0.dst compacted };
add(16)         g58<1>F         g72<1,1,0>F     -g101<1,1,0>F   { align1 1H A@3 compacted };
add(16)         g66<1>F         g72<1,1,0>F     g101<1,1,0>F    { align1 1H compacted };
add(16)         g60<1>F         g91<1,1,0>F     -g116<1,1,0>F   { align1 1H F@4 compacted };
add(16)         g68<1>F         g91<1,1,0>F     g116<1,1,0>F    { align1 1H $11.src compacted };
add(16)         g56<1>F         g53<1,1,0>F     -g96<1,1,0>F    { align1 1H F@5 compacted };
add(16)         g64<1>F         g53<1,1,0>F     g96<1,1,0>F     { align1 1H compacted };
else(16)        JIP:  LABEL16         UIP:  LABEL16             { align1 1H };

LABEL17:
mov(16)         g112<1>UD       0x00000000UD                    { align1 1H I@2 };
mov(16)         g70<1>UD        0x00000000UD                    { align1 1H $11.src };

LABEL16:
endif(16)       JIP:  LABEL10                                   { align1 1H };
cmp.nz.f0.0(16) null<1>D        g109<8,8,1>D    0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
(+f0.0) sel(16) g117<1>UD       g82<8,8,1>UD    0xffffffffUD    { align1 1H A@3 };
cmp.nz.f0.0(16) g119<1>D        g3.2<0,1,0>D    0D              { align1 1H $7.src compacted };
and.nz.f0.0(16) null<1>UD       g119<8,8,1>UD   g117<8,8,1>UD   { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL18         UIP:  LABEL18             { align1 1H };
add(16)         g120<1>D        g4<1,1,0>D      12D             { align1 1H I@2 compacted };
add(16)         g12<1>D         g4<1,1,0>D      28D             { align1 1H compacted };
add(16)         g22<1>D         g4<1,1,0>D      44D             { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g112<1>UD       0x00000001UD                    { align1 1H };
mov(16)         g114<1>UD       0x00000000UD                    { align1 1H };
cmp.l.f0.0(16)  g122<1>UD       g120<1,1,0>UD   g4<1,1,0>UD     { align1 1H I@5 compacted };
mov(8)          g8<2>UD         g120<4,4,1>UD                   { align1 1Q $10.src };
mov(8)          g10<2>UD        g121<4,4,1>UD                   { align1 2Q $10.src };
mov(8)          g18<2>UD        g12<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g20<2>UD        g13<4,4,1>UD                    { align1 2Q A@2 };
cmp.l.f0.0(16)  g14<1>UD        g12<1,1,0>UD    g4<1,1,0>UD     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g28<2>UD        g22<4,4,1>UD                    { align1 1Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $8.src };
mov(8)          g30<2>UD        g23<4,4,1>UD                    { align1 2Q A@7 };
cmp.l.f0.0(16)  g24<1>UD        g22<1,1,0>UD    g4<1,1,0>UD     { align1 1H compacted };
add(16)         g124<1>D        -g122<1,1,0>D   g6<1,1,0>D      { align1 1H I@7 compacted };
add(16)         g16<1>D         -g14<1,1,0>D    g6<1,1,0>D      { align1 1H I@5 compacted };
add(16)         g26<1>D         -g24<1,1,0>D    g6<1,1,0>D      { align1 1H I@3 compacted };
mov(8)          g8.1<2>UD       g124<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g10.1<2>UD      g125<4,4,1>UD                   { align1 2Q I@4 };
mov(8)          g18.1<2>UD      g16<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g20.1<2>UD      g17<4,4,1>UD                    { align1 2Q I@5 };
mov(8)          g28.1<2>UD      g26<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g30.1<2>UD      g27<4,4,1>UD                    { align1 2Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g64UD           g8UD            nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
send(16)        g66UD           g18UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g68UD           g28UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g56<1>UD        g64<8,8,1>UD                    { align1 1H F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g58<1>UD        g66<8,8,1>UD                    { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g60<1>UD        g68<8,8,1>UD                    { align1 1H F@4 };

LABEL18:
endif(16)       JIP:  LABEL10                                   { align1 1H };

LABEL10:
else(16)        JIP:  LABEL3          UIP:  LABEL3              { align1 1H };

LABEL4:
mov(16)         g112<1>UD       0x00000000UD                    { align1 1H I@7 };
mov(16)         g70<1>UD        0x00000000UD                    { align1 1H I@7 };

LABEL3:
endif(16)       JIP:  LABEL19                                   { align1 1H };

LABEL19:
else(16)        JIP:  LABEL1          UIP:  LABEL1              { align1 1H };

LABEL2:
mov(16)         g112<1>UD       0x00000000UD                    { align1 1H I@4 };
mov(16)         g70<1>UD        0x00000000UD                    { align1 1H I@4 };
mov(16)         g114<1>UD       0x00000000UD                    { align1 1H I@7 };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g72<1>D         0D                              { align1 WE_all 1H A@1 };
mov(16)         g72<1>D         g112<8,8,1>D                    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g40<8,8,1>D     0D              { align1 1H };
add(8)          g72.1<2>D       g72<8,4,2>D     g72.1<8,4,2>D   { align1 WE_all 1Q I@2 };
add(4)          g72.2<4>D       g72.1<8,2,4>D   g72.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g72.3<4>D       g72.1<8,2,4>D   g72.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g72.4<1>D       g72.3<0,1,0>D   g72.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g73.4<1>D       g73.3<0,1,0>D   g73.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(8)          g73<1>D         g72.7<0,1,0>D   g73<1,1,0>D     { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
mov(16)         g29<1>D         g73.7<0,1,0>D                   { align1 1H $8.src };
(+f0.0) if(16)  JIP:  LABEL21         UIP:  LABEL20             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g31<1>D         g2<0,1,0>D      36D             { align1 1H F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
cmp.l.f0.0(16)  g33<1>UD        g31<1,1,0>UD    g2<0,1,0>UD     { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g43<2>UD        g31<4,4,1>UD                    { align1 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $9.src };
mov(8)          g45<2>UD        g32<4,4,1>UD                    { align1 2Q F@7 };
add(16)         g35<1>D         -g33<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g43.1<2>UD      g35<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g45.1<2>UD      g36<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g110UD          g43UD           g29UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $9 };
else(16)        JIP:  LABEL20         UIP:  LABEL20             { align1 1H };

LABEL21:
mov(16)         g110<1>UD       0x00000000UD                    { align1 1H $9.dst };

LABEL20:
endif(16)       JIP:  LABEL0                                    { align1 1H };
mov(16)         g73<1>D         0D                              { align1 WE_all 1H A@1 };
mov(16)         g73<1>D         g112<8,8,1>D                    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g112<8,8,1>D    0D              { align1 1H };
add(16)         g75<1>W         g42<16,16,1>UW  -1W             { align1 WE_all 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         a0<1>UW         0x0920UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g75<8,8,1>W     0x0002UW        { align1 WE_all 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0920UW        { align1 WE_all 1H A@1 };
mov(16)         g44<1>UD        g[a0]<VxH,1,0>UD                { align1 WE_all 1H A@1 compacted };
mov(1)          g44<1>D         0D                              { align1 WE_all 1N I@1 };
add(8)          g44.1<2>D       g44<8,4,2>D     g44.1<8,4,2>D   { align1 WE_all 1Q I@1 };
add(4)          g44.2<4>D       g44.1<8,2,4>D   g44.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g44.3<4>D       g44.1<8,2,4>D   g44.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g44.4<1>D       g44.3<0,1,0>D   g44.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g45.4<1>D       g45.3<0,1,0>D   g45.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(8)          g45<1>D         g44.7<0,1,0>D   g45<1,1,0>D     { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g49<1>D         g110<0,1,0>D    g44<1,1,0>D     { align1 1H compacted };
(+f0.0) if(16)  JIP:  LABEL23         UIP:  LABEL22             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g60<1>UD        0x7f800000UD                    { align1 1H F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g58<1>UD        0x7f800000UD                    { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g56<1>UD        0x7f800000UD                    { align1 1H F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g68<1>UD        0xff800000UD                    { align1 1H F@3 };
mov(16)         g66<1>UD        0xff800000UD                    { align1 1H F@5 };
mov(16)         g64<1>UD        0xff800000UD                    { align1 1H F@1 };
mov(16)         g120<1>UD       0x7f800000UD                    { align1 1H };
mov(16)         g118<1>UD       0x7f800000UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g116<1>UD       0x7f800000UD                    { align1 1H F@3 };
mov(16)         g126<1>UD       0xff800000UD                    { align1 1H };
mov(16)         g124<1>UD       0xff800000UD                    { align1 1H };
mov(16)         g122<1>UD       0xff800000UD                    { align1 1H };
else(16)        JIP:  LABEL22         UIP:  LABEL22             { align1 1H };

LABEL23:
shl(16)         g51<1>D         g49<8,8,1>D     0x00000005UD    { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g54<1>D         g2.6<0,1,0>D    g51<1,1,0>D     { align1 1H A@1 compacted };
shr(16)         g52<1>UD        g49<1,1,0>UD    0x0000001bUD    { align1 1H F@1 compacted };
shl(16)         g50<1>D         g114<8,8,1>D    0x00000018UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.l.f0.0(16)  g72<1>UD        g54<1,1,0>UD    g2.6<0,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g76<2>UD        g54<4,4,1>UD                    { align1 1Q $4.src };
mov(8)          g78<2>UD        g55<4,4,1>UD                    { align1 2Q $0.src };
or(16)          g62<1>UD        g47<1,1,0>UD    g50<1,1,0>UD    { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add3(16)        g74<1>D         g2.7<0,1,0>D    g52<8,8,1>D     -g72<1,1,1>D { align1 1H };
mov(8)          g78.1<2>UD      g75<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g76.1<2>UD      g74<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g76UD           g56UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $4 };
add(16)         g77<1>D         g54<1,1,0>D     16D             { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g79<1>UD        g77<1,1,0>UD    g54<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g83<2>UD        g77<4,4,1>UD                    { align1 1Q };
mov(8)          g85<2>UD        g78<4,4,1>UD                    { align1 2Q };
add(16)         g81<1>D         -g79<1,1,0>D    g74<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g85.1<2>UD      g82<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g83.1<2>UD      g81<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g83UD           g64UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g122<1>F        g56<1,1,0>F     g64<1,1,0>F     { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g124<1>F        g58<1,1,0>F     g66<1,1,0>F     { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g126<1>F        g60<1,1,0>F     g68<1,1,0>F     { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g116<1>UD       g122<8,8,1>UD                   { align1 1H F@3 };
mov(16)         g118<1>UD       g124<8,8,1>UD                   { align1 1H F@2 };
mov(16)         g120<1>UD       g126<8,8,1>UD                   { align1 1H F@1 };

LABEL22:
endif(16)       JIP:  LABEL0                                    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g40<8,8,1>D     0D              { align1 1H };
mov(16)         g33<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H F@2 compacted };
mov(16)         g33<1>F         g56<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g35<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H F@3 compacted };
mov(16)         g35<1>F         g58<1,1,0>F                     { align1 1H compacted };
mov(16)         g37<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H F@3 compacted };
mov(16)         g37<1>F         g60<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g43<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H F@4 compacted };
mov(16)         g43<1>F         g68<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g45<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@5 compacted };
mov(16)         g45<1>F         g116<1,1,0>F                    { align1 1H compacted };
mov(16)         g47<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@4 compacted };
mov(16)         g47<1>F         g118<1,1,0>F                    { align1 1H compacted };
mov(16)         g49<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@3 compacted };
mov(16)         g49<1>F         g120<1,1,0>F                    { align1 1H compacted };
mov(16)         g51<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g51<1>F         g122<1,1,0>F                    { align1 1H compacted };
mov(16)         g53<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g53<1>F         g124<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g39<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@1 compacted };
mov(16)         g39<1>F         g64<1,1,0>F                     { align1 1H compacted };
mov(16)         g41<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@1 compacted };
mov(16)         g41<1>F         g66<1,1,0>F                     { align1 1H compacted };
mov(16)         g55<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@3 compacted };
mov(16)         g55<1>F         g126<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g80<2>UD        g33.1<8,4,2>UD                  { align1 WE_all 1Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g111<2>UD       g35.1<8,4,2>UD                  { align1 WE_all 1Q $9.dst };
mov(8)          g3<2>UD         g37.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g75<2>UD        g45.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g87<2>UD        g47.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g99<2>UD        g49.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
mov(8)          g113<2>UD       g51.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g16<2>UD        g39.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g29<2>UD        g41.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sel.l(8)        g78<2>F         g33<8,4,2>F     g80<8,4,2>F     { align1 WE_all 1Q I@7 };
sel.l(8)        g109<2>F        g35<8,4,2>F     g111<8,4,2>F    { align1 WE_all 1Q I@7 };
mov(8)          g118<2>UD       g53.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
sel.l(8)        g73<2>F         g45<8,4,2>F     g75<8,4,2>F     { align1 WE_all 1Q I@7 };
sel.l(8)        g122<2>F        g37<8,4,2>F     g3<8,4,2>F      { align1 WE_all 1Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.l(8)        g85<2>F         g47<8,4,2>F     g87<8,4,2>F     { align1 WE_all 1Q I@6 };
mov(8)          g124<2>UD       g55.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.l(8)        g97<2>F         g49<8,4,2>F     g99<8,4,2>F     { align1 WE_all 1Q I@6 };
mov(8)          g67<2>UD        g43.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
sel.ge(8)       g14<2>F         g39<8,4,2>F     g16<8,4,2>F     { align1 WE_all 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.ge(8)       g27<2>F         g41<8,4,2>F     g29<8,4,2>F     { align1 WE_all 1Q I@4 };
mov(8)          g33.1<2>UD      g78<8,4,2>UD                    { align1 WE_all 1Q F@7 };
mov(8)          g35.1<2>UD      g109<8,4,2>UD                   { align1 WE_all 1Q F@7 };
sel.ge(8)       g116<2>F        g53<8,4,2>F     g118<8,4,2>F    { align1 WE_all 1Q I@5 };
mov(8)          g45.1<2>UD      g73<8,4,2>UD                    { align1 WE_all 1Q F@7 };
mov(8)          g37.1<2>UD      g122<8,4,2>UD                   { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g47.1<2>UD      g85<8,4,2>UD                    { align1 WE_all 1Q F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g49.1<2>UD      g97<8,4,2>UD                    { align1 WE_all 1Q F@4 };
sel.ge(8)       g65<2>F         g43<8,4,2>F     g67<8,4,2>F     { align1 WE_all 1Q I@7 };
mov(8)          g39.1<2>UD      g14<8,4,2>UD                    { align1 WE_all 1Q F@4 };
mov(8)          g41.1<2>UD      g27<8,4,2>UD                    { align1 WE_all 1Q F@3 };
mov(4)          g93<4>UD        g33.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g87<4>UD        g33.1<8,2,4>UD                  { align1 WE_all 1N F@6 };
mov(8)          g53.1<2>UD      g116<8,4,2>UD                   { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(4)          g71<4>UD        g45.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(4)          g8<4>UD         g37.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g6<4>UD         g37.1<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(4)          g77<4>UD        g47.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g79<4>UD        g47.2<8,2,4>UD                  { align1 WE_all 1N F@7 };
sel.ge(8)       g109<2>F        g51<8,4,2>F     g113<8,4,2>F    { align1 WE_all 1Q };
mov(4)          g83<4>UD        g49.1<8,2,4>UD                  { align1 WE_all 1N $2.src };
mov(4)          g73<4>UD        g45.2<8,2,4>UD                  { align1 WE_all 1N };
mov(8)          g43.1<2>UD      g65<8,4,2>UD                    { align1 WE_all 1Q F@2 };
sel.ge(8)       g121<2>F        g55<8,4,2>F     g124<8,4,2>F    { align1 WE_all 1Q };
mov(4)          g21<4>UD        g39.2<8,2,4>UD                  { align1 WE_all 1N $1.src };
mov(4)          g19<4>UD        g39.1<8,2,4>UD                  { align1 WE_all 1N $1.src };
mov(4)          g85<4>UD        g49.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g59<4>UD        g41.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g57<4>UD        g41.1<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g81<4>F         g87<8,2,4>F     g93<8,2,4>F     { align1 WE_all 1N };
mov(4)          g95<4>UD        g53.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g97<4>UD        g53.2<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g4<4>F          g6<8,2,4>F      g8<8,2,4>F      { align1 WE_all 1N };
mov(8)          g51.1<2>UD      g109<8,4,2>UD                   { align1 WE_all 1Q F@4 };
mov(4)          g116<4>UD       g35.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g67<4>UD        g43.2<8,2,4>UD                  { align1 WE_all 1N A@5 };
mov(8)          g55.1<2>UD      g121<8,4,2>UD                   { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.ge(4)       g17<4>F         g19<8,2,4>F     g21<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g105<4>F        g83<8,2,4>F     g85<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.ge(4)       g30<4>F         g57<8,2,4>F     g59<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g33.2<4>UD      g81<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g114<4>UD       g35.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
sel.ge(4)       g119<4>F        g95<8,2,4>F     g97<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g37.2<4>UD      g4<8,2,4>UD                     { align1 WE_all 1N F@5 };
mov(4)          g65<4>UD        g43.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g91<4>UD        g51.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g89<4>UD        g51.1<8,2,4>UD                  { align1 WE_all 1N $5.src };
sel.l(4)        g93<4>F         g77<8,2,4>F     g79<8,2,4>F     { align1 WE_all 1N };
mov(4)          g103<4>UD       g55.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g101<4>UD       g55.1<8,2,4>UD                  { align1 WE_all 1N $6.src };
mov(4)          g39.2<4>UD      g17<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g49.2<4>UD      g105<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g41.2<4>UD      g30<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g108<4>UD       g33.3<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g112<4>F        g114<8,2,4>F    g116<8,2,4>F    { align1 WE_all 1N };
mov(4)          g53.2<4>UD      g119<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g13<4>UD        g37.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g11<4>UD        g37.1<8,2,4>UD                  { align1 WE_all 1N $10.src };
sel.ge(4)       g69<4>F         g65<8,2,4>F     g67<8,2,4>F     { align1 WE_all 1N $2.src };
sel.l(4)        g81<4>F         g71<8,2,4>F     g73<8,2,4>F     { align1 WE_all 1N };
mov(4)          g47.2<4>UD      g93<8,2,4>UD                    { align1 WE_all 1N F@4 };
sel.ge(4)       g125<4>F        g101<8,2,4>F    g103<8,2,4>F    { align1 WE_all 1N I@7 };
mov(4)          g26<4>UD        g39.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g24<4>UD        g39.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g86<4>UD        g49.1<8,2,4>UD                  { align1 WE_all 1N A@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g62<4>UD        g41.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g35.2<4>UD      g112<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g98<4>UD        g53.1<8,2,4>UD                  { align1 WE_all 1N A@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sel.l(4)        g9<4>F          g11<8,2,4>F     g13<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g43.2<4>UD      g69<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g45.2<4>UD      g81<8,2,4>UD                    { align1 WE_all 1N F@3 };
sel.ge(4)       g114<4>F        g89<8,2,4>F     g91<8,2,4>F     { align1 WE_all 1N };
mov(4)          g55.2<4>UD      g125<8,2,4>UD                   { align1 WE_all 1N F@3 };
sel.ge(4)       g22<4>F         g24<8,2,4>F     g26<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g64<4>UD        g41.3<8,2,4>UD                  { align1 WE_all 1N F@6 };
mov(4)          g121<4>UD       g35.3<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g119<4>UD       g35.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g37.3<4>UD      g9<8,2,4>UD                     { align1 WE_all 1N F@3 };
mov(4)          g100<4>UD       g53.3<8,2,4>UD                  { align1 WE_all 1N F@4 };
mov(4)          g102<4>UD       g33.1<8,2,4>UD                  { align1 WE_all 1N F@4 };
mov(4)          g76<4>UD        g45.3<8,2,4>UD                  { align1 WE_all 1N A@7 };
mov(4)          g74<4>UD        g45.1<8,2,4>UD                  { align1 WE_all 1N F@5 };
mov(4)          g51.2<4>UD      g114<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g106<4>UD       g55.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g104<4>UD       g55.1<8,2,4>UD                  { align1 WE_all 1N F@4 };
mov(4)          g39.3<4>UD      g22<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g60<4>F         g62<8,2,4>F     g64<8,2,4>F     { align1 WE_all 1N };
mov(4)          g68<4>UD        g43.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g70<4>UD        g43.3<8,2,4>UD                  { align1 WE_all 1N F@6 };
sel.l(4)        g117<4>F        g119<8,2,4>F    g121<8,2,4>F    { align1 WE_all 1N };
mov(4)          g80<4>UD        g47.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g82<4>UD        g47.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g88<4>UD        g49.3<8,2,4>UD                  { align1 WE_all 1N F@4 };
sel.l(4)        g37.4<1>F       g37.3<0,1,0>F   g37.4<4,4,1>F   { align1 WE_all 1N };
sel.l(4)        g38.4<1>F       g38.3<0,1,0>F   g38.4<4,4,1>F   { align1 WE_all 1N };
sel.l(4)        g96<4>F         g102<8,2,4>F    g108<8,2,4>F    { align1 WE_all 1N };
sel.l(4)        g84<4>F         g74<8,2,4>F     g76<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g94<4>UD        g51.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g92<4>UD        g51.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
sel.ge(4)       g126<4>F        g104<8,2,4>F    g106<8,2,4>F    { align1 WE_all 1N I@7 };
sel.ge(4)       g39.4<1>F       g39.3<0,1,0>F   g39.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.ge(4)       g40.4<1>F       g40.3<0,1,0>F   g40.4<4,4,1>F   { align1 WE_all 1N I@7 };
mov(4)          g41.3<4>UD      g60<8,2,4>UD                    { align1 WE_all 1N F@7 };
sel.ge(4)       g72<4>F         g68<8,2,4>F     g70<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g35.3<4>UD      g117<8,2,4>UD                   { align1 WE_all 1N F@7 };
sel.l(8)        g38<1>F         g37.7<0,1,0>F   g38<8,8,1>F     { align1 WE_all 1Q F@7 };
mov(4)          g33.3<4>UD      g96<8,2,4>UD                    { align1 WE_all 1N F@7 };
mov(4)          g45.3<4>UD      g84<8,2,4>UD                    { align1 WE_all 1N F@6 };
sel.ge(4)       g120<4>F        g98<8,2,4>F     g100<8,2,4>F    { align1 WE_all 1N };
sel.ge(4)       g115<4>F        g92<8,2,4>F     g94<8,2,4>F     { align1 WE_all 1N I@5 };
mov(4)          g55.3<4>UD      g126<8,2,4>UD                   { align1 WE_all 1N F@7 };
sel.ge(8)       g40<1>F         g39.7<0,1,0>F   g40<8,8,1>F     { align1 WE_all 1Q F@5 };
sel.ge(4)       g41.4<1>F       g41.3<0,1,0>F   g41.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g42.4<1>F       g42.3<0,1,0>F   g42.4<4,4,1>F   { align1 WE_all 1N I@5 };
mov(4)          g43.3<4>UD      g72<8,2,4>UD                    { align1 WE_all 1N F@7 };
sel.l(4)        g108<4>F        g86<8,2,4>F     g88<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g35.4<1>F       g35.3<0,1,0>F   g35.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.l(4)        g36.4<1>F       g36.3<0,1,0>F   g36.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.l(4)        g33.4<1>F       g33.3<0,1,0>F   g33.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g34.4<1>F       g34.3<0,1,0>F   g34.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g45.4<1>F       g45.3<0,1,0>F   g45.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g46.4<1>F       g46.3<0,1,0>F   g46.4<4,4,1>F   { align1 WE_all 1N I@3 };
mov(4)          g53.3<4>UD      g120<8,2,4>UD                   { align1 WE_all 1N };
mov(16)         g88<1>F         g38.7<0,1,0>F                   { align1 1H compacted };
mov(4)          g51.3<4>UD      g115<8,2,4>UD                   { align1 WE_all 1N };
sel.ge(4)       g55.4<1>F       g55.3<0,1,0>F   g55.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g56.4<1>F       g56.3<0,1,0>F   g56.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g96<4>F         g80<8,2,4>F     g82<8,2,4>F     { align1 WE_all 1N I@6 };
mov(16)         g90<1>F         g40.7<0,1,0>F                   { align1 1H compacted };
sel.ge(8)       g42<1>F         g41.7<0,1,0>F   g42<8,8,1>F     { align1 WE_all 1Q };
sel.ge(4)       g43.4<1>F       g43.3<0,1,0>F   g43.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g44.4<1>F       g44.3<0,1,0>F   g44.4<4,4,1>F   { align1 WE_all 1N I@3 };
mov(4)          g49.3<4>UD      g108<8,2,4>UD                   { align1 WE_all 1N };
sel.l(8)        g36<1>F         g35.7<0,1,0>F   g36<8,8,1>F     { align1 WE_all 1Q };
sel.l(8)        g34<1>F         g33.7<0,1,0>F   g34<8,8,1>F     { align1 WE_all 1Q };
sel.l(8)        g46<1>F         g45.7<0,1,0>F   g46<8,8,1>F     { align1 WE_all 1Q };
sel.ge(4)       g53.4<1>F       g53.3<0,1,0>F   g53.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g54.4<1>F       g54.3<0,1,0>F   g54.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g51.4<1>F       g51.3<0,1,0>F   g51.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g52.4<1>F       g52.3<0,1,0>F   g52.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(8)       g56<1>F         g55.7<0,1,0>F   g56<8,8,1>F     { align1 WE_all 1Q };
mov(4)          g47.3<4>UD      g96<8,2,4>UD                    { align1 WE_all 1N };
mov(16)         g92<1>F         g42.7<0,1,0>F                   { align1 1H compacted };
sel.ge(8)       g44<1>F         g43.7<0,1,0>F   g44<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.l(4)        g49.4<1>F       g49.3<0,1,0>F   g49.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g50.4<1>F       g50.3<0,1,0>F   g50.4<4,4,1>F   { align1 WE_all 1N I@2 };
mov(16)         g86<1>F         g36.7<0,1,0>F                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(16)         g84<1>F         g34.7<0,1,0>F                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g96<1>F         g46.7<0,1,0>F                   { align1 1H compacted };
sel.ge(8)       g54<1>F         g53.7<0,1,0>F   g54<8,8,1>F     { align1 WE_all 1Q };
sel.ge(8)       g52<1>F         g51.7<0,1,0>F   g52<8,8,1>F     { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
mov(16)         g106<1>F        g56.7<0,1,0>F                   { align1 1H compacted };
sel.l(4)        g47.4<1>F       g47.3<0,1,0>F   g47.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g48.4<1>F       g48.3<0,1,0>F   g48.4<4,4,1>F   { align1 WE_all 1N I@1 };
mov(16)         g94<1>F         g44.7<0,1,0>F                   { align1 1H compacted };
sel.l(8)        g50<1>F         g49.7<0,1,0>F   g50<8,8,1>F     { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
mov(16)         g104<1>F        g54.7<0,1,0>F                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
mov(16)         g102<1>F        g52.7<0,1,0>F                   { align1 1H compacted };
sel.l(8)        g48<1>F         g47.7<0,1,0>F   g48<8,8,1>F     { align1 WE_all 1Q F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
mov(16)         g100<1>F        g50.7<0,1,0>F                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
mov(16)         g98<1>F         g48.7<0,1,0>F                   { align1 1H compacted };
(+f0.0) if(16)  JIP:  LABEL24         UIP:  LABEL24             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g108<1>D        g2.2<0,1,0>D    128D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g110<1>UD       g108<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H compacted };
mov(8)          g114<2>UD       g108<4,4,1>UD                   { align1 1Q };
mov(8)          g116<2>UD       g109<4,4,1>UD                   { align1 2Q };
add(16)         g112<1>D        -g110<1,1,0>D   g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g114.1<2>UD     g112<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g116.1<2>UD     g113<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g114UD          g84UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $3 };
add(16)         g115<1>D        g2.2<0,1,0>D    132D            { align1 1H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g117<1>UD       g115<1,1,0>UD   0x00000084UD    { align1 1H I@1 compacted };
mov(8)          g121<2>UD       g115<4,4,1>UD                   { align1 1Q };
mov(8)          g123<2>UD       g116<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g119<1>D        -g117<1,1,0>D   g2.3<0,1,0>D    { align1 1H compacted };
mov(8)          g121.1<2>UD     g119<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g123.1<2>UD     g120<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g121UD          g86UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };
add(16)         g122<1>D        g2.2<0,1,0>D    136D            { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g124<1>UD       g122<1,1,0>UD   0x00000088UD    { align1 1H I@1 compacted };
mov(8)          g3<2>UD         g122<4,4,1>UD                   { align1 1Q };
mov(8)          g5<2>UD         g123<4,4,1>UD                   { align1 2Q };
add(16)         g126<1>D        -g124<1,1,0>D   g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g3.1<2>UD       g126<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g5.1<2>UD       g127<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g3UD            g88UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $5 };
add(16)         g4<1>D          g2.2<0,1,0>D    140D            { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g6<1>UD         g4<1,1,0>UD     0x0000008cUD    { align1 1H $5.src compacted };
mov(8)          g10<2>UD        g4<4,4,1>UD                     { align1 1Q };
mov(8)          g12<2>UD        g5<4,4,1>UD                     { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g8<1>D          -g6<1,1,0>D     g2.3<0,1,0>D    { align1 1H compacted };
mov(8)          g10.1<2>UD      g8<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g12.1<2>UD      g9<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g10UD           g90UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };
add(16)         g11<1>D         g2.2<0,1,0>D    144D            { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g13<1>UD        g11<1,1,0>UD    0x00000090UD    { align1 1H $6.src compacted };
mov(8)          g17<2>UD        g11<4,4,1>UD                    { align1 1Q };
mov(8)          g19<2>UD        g12<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g15<1>D         -g13<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
mov(8)          g17.1<2>UD      g15<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g19.1<2>UD      g16<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g17UD           g92UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $7 };
add(16)         g18<1>D         g2.2<0,1,0>D    148D            { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g20<1>UD        g18<1,1,0>UD    0x00000094UD    { align1 1H $7.src compacted };
mov(8)          g24<2>UD        g18<4,4,1>UD                    { align1 1Q };
mov(8)          g26<2>UD        g19<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g22<1>D         -g20<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
mov(8)          g24.1<2>UD      g22<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g26.1<2>UD      g23<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g24UD           g94UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };
mov(8)          g77.1<2>D       g2.1<0,1,0>D                    { align1 1Q };
mov(8)          g79.1<2>D       g2.1<0,1,0>D                    { align1 2Q };
mov(8)          g77<2>D         g2<0,1,0>D                      { align1 1Q I@2 };
mov(8)          g79<2>D         g2<0,1,0>D                      { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g77UD           g96UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $2 };
add(16)         g25<1>D         g2<0,1,0>D      4D              { align1 1H $8.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g27<1>UD        g25<1,1,0>UD    g2<0,1,0>UD     { align1 1H $8.src compacted };
mov(8)          g31<2>UD        g25<4,4,1>UD                    { align1 1Q $8.src };
mov(8)          g33<2>UD        g26<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g29<1>D         -g27<1,1,0>D    g2.1<0,1,0>D    { align1 1H compacted };
mov(8)          g31.1<2>UD      g29<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g33.1<2>UD      g30<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g31UD           g98UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $9 };
add(16)         g32<1>D         g2<0,1,0>D      8D              { align1 1H $9.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g34<1>UD        g32<1,1,0>UD    g2<0,1,0>UD     { align1 1H $9.src compacted };
mov(8)          g38<2>UD        g32<4,4,1>UD                    { align1 1Q };
mov(8)          g40<2>UD        g33<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g36<1>D         -g34<1,1,0>D    g2.1<0,1,0>D    { align1 1H compacted };
mov(8)          g38.1<2>UD      g36<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g40.1<2>UD      g37<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g38UD           g100UD          0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $10 };
add(16)         g39<1>D         g2<0,1,0>D      16D             { align1 1H $10.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
cmp.l.f0.0(16)  g41<1>UD        g39<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g45<2>UD        g39<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N F@1 };
mov(8)          g47<2>UD        g40<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
add(16)         g43<1>D         -g41<1,1,0>D    g2.1<0,1,0>D    { align1 1H compacted };
mov(8)          g45.1<2>UD      g43<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g47.1<2>UD      g44<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g45UD           g102UD          0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $11 };
add(16)         g46<1>D         g2<0,1,0>D      20D             { align1 1H $11.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.l.f0.0(16)  g48<1>UD        g46<1,1,0>UD    0x00000014UD    { align1 1H $11.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
mov(8)          g52<2>UD        g46<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N F@5 };
mov(8)          g54<2>UD        g47<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
add(16)         g50<1>D         -g48<1,1,0>D    g2.1<0,1,0>D    { align1 1H compacted };
mov(8)          g52.1<2>UD      g50<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g54.1<2>UD      g51<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g52UD           g104UD          0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $12 };
add(16)         g53<1>D         g2<0,1,0>D      24D             { align1 1H $12.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
cmp.l.f0.0(16)  g55<1>UD        g53<1,1,0>UD    0x00000018UD    { align1 1H A@1 compacted };
mov(8)          g59<2>UD        g53<4,4,1>UD                    { align1 1Q };
mov(8)          g61<2>UD        g54<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g57<1>D         -g55<1,1,0>D    g2.1<0,1,0>D    { align1 1H compacted };
mov(8)          g61.1<2>UD      g58<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g59.1<2>UD      g57<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g59UD           g106UD          0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $13 };

LABEL24:
endif(16)       JIP:  LABEL0                                    { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL25                                   { align1 1H };

LABEL25:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_indirect_code[] = {
    0x80000065, 0x7f058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x3c050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa007f0c, 0x00340000,
    0x80030061, 0x2a054410, 0x00000000, 0x76543210,
    0x00041a69, 0x2d058660, 0x02463c05, 0x00000004,
    0x642a1a40, 0x00802a95, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x28050120,
    0x00462a05, 0x00000000, 0xe02b1965, 0x00f02803,
    0xa02f1940, 0x2d002b02, 0xe2012040, 0x04017f03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80004131, 0x030c0000, 0xfa00010c, 0x00300000,
    0x80102101, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x4e260660, 0x00000324, 0x00000000,
    0x00030061, 0x4c260660, 0x00000324, 0x00000000,
    0x00131a61, 0x4e060660, 0x00000304, 0x00000000,
    0x00031a61, 0x4c060660, 0x00000304, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x31140000, 0xfb004c24, 0x00000000,
    0x0004e270, 0x00010220, 0x52462f05, 0x00463105,
    0x01040022, 0x0001c060, 0x00002b68, 0x00002b68,
    0xa0320040, 0x00410303, 0x00040069, 0x43058660,
    0x02462f05, 0x00000003, 0x27341a70, 0x03103203,
    0x00030061, 0x38060220, 0x00343205, 0x00000000,
    0x00130061, 0x3a060220, 0x00343305, 0x00000000,
    0xa0361b40, 0x03123412, 0x00031961, 0x38260220,
    0x00343605, 0x00000000, 0x00131a61, 0x3a260220,
    0x00343705, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x3c140000,
    0xfb003824, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa03e2340, 0x3c01025a,
    0xa0461940, 0x43003e02, 0x27400070, 0x02103e0b,
    0xe0440068, 0x01d02f03, 0x27481b70, 0x3e004603,
    0x00033261, 0x4c060220, 0x00344605, 0x00000000,
    0x00133261, 0x4e060220, 0x00344705, 0x00000000,
    0xa0421d40, 0x02124032, 0x00041952, 0x4a040e68,
    0x0e2e4205, 0x48054405, 0x00131961, 0x4e260220,
    0x00344b05, 0x00000000, 0x00031a61, 0x4c260220,
    0x00344a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x04240000,
    0xfb004c24, 0x00040000, 0x00032461, 0x4d060220,
    0x00340405, 0x00000000, 0x00132461, 0x4f060220,
    0x00340505, 0x00000000, 0x00042466, 0x00010220,
    0x22460405, 0x00460605, 0x00031b61, 0x4d260220,
    0x00340605, 0x00000000, 0x00131b61, 0x4f260220,
    0x00340705, 0x00000000, 0x01040022, 0x0001c060,
    0x00000e80, 0x00000e50, 0xa0510040, 0x03000403,
    0xa05c0040, 0x03800403, 0x27531a70, 0x04005103,
    0x275e1a70, 0x04005c03, 0x00030061, 0x57060220,
    0x00345105, 0x00000000, 0x00130061, 0x59060220,
    0x00345205, 0x00000000, 0x00030061, 0x62060220,
    0x00345c05, 0x00000000, 0x00130061, 0x64060220,
    0x00345d05, 0x00000000, 0xa0551e40, 0x06025302,
    0xa0601e40, 0x06025e02, 0x00031a61, 0x57260220,
    0x00345505, 0x00000000, 0x00131b61, 0x59260220,
    0x00345605, 0x00000000, 0x00031b61, 0x62260220,
    0x00346005, 0x00000000, 0x00131c61, 0x64260220,
    0x00346105, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x5b140000,
    0xfb005724, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x66240000,
    0xfb006224, 0x00040000, 0x00042561, 0x72050020,
    0x00665b1f, 0x00000000, 0x00042666, 0x00010220,
    0x22466605, 0x00466805, 0x01040022, 0x0001c060,
    0x00000d10, 0x00000cf0, 0xa06a0040, 0x08006603,
    0xa0780040, 0x08c06603, 0x276c1a70, 0x66006a03,
    0x00030061, 0x74060220, 0x00346a05, 0x00000000,
    0x00130061, 0x76060220, 0x00346b05, 0x00000000,
    0xe77a1c70, 0x08c07803, 0x00030061, 0x08060220,
    0x00347805, 0x00000000, 0x00130061, 0x0a060220,
    0x00347905, 0x00000000, 0xa06e1e40, 0x68026c02,
    0xa07c1c40, 0x68027a02, 0x00031a61, 0x74260220,
    0x00346e05, 0x00000000, 0x00131b61, 0x76260220,
    0x00346f05, 0x00000000, 0x00031b61, 0x08260220,
    0x00347c05, 0x00000000, 0x00131c61, 0x0a260220,
    0x00347d05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x15140000,
    0xfb007424, 0x00000000, 0xa7002770, 0x7f831501,
    0x01040022, 0x0001c060, 0x00000170, 0x00000160,
    0xa0170040, 0x08406603, 0xe7191970, 0x08401703,
    0x00030061, 0x1d060220, 0x00341705, 0x00000000,
    0x00130061, 0x1f060220, 0x00341805, 0x00000000,
    0xa01b1b40, 0x68021902, 0x00031961, 0x1d260220,
    0x00341b05, 0x00000000, 0x00131a61, 0x1f260220,
    0x00341c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x21140000,
    0xfb001d24, 0x00000000, 0xa7002870, 0x7f832101,
    0x01040022, 0x0001c060, 0x000000b0, 0x000000a0,
    0xa0221140, 0x08806603, 0xe7241970, 0x08802203,
    0x00030061, 0x2b060220, 0x00342205, 0x00000000,
    0x00130061, 0x2d060220, 0x00342305, 0x00000000,
    0xa0261b40, 0x68022402, 0x00031961, 0x2b260220,
    0x00342605, 0x00000000, 0x00131a61, 0x2d260220,
    0x00342705, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x31140000,
    0xfb002b24, 0x00000000, 0xe76d2970, 0x7f833100,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00041161, 0x6d054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00040961, 0x6d054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000a88,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044a31, 0x32140000, 0xfb000824, 0x00000000,
    0xa7002a70, 0x7f833201, 0x01040022, 0x0001c060,
    0x00000180, 0x00000170, 0xa0340040, 0x09006603,
    0xe7361970, 0x09003403, 0x00033361, 0x3a060220,
    0x00343405, 0x00000000, 0x00130061, 0x3c060220,
    0x00343505, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa0381b40, 0x68023602,
    0x00031961, 0x3a260220, 0x00343805, 0x00000000,
    0x00131a61, 0x3c260220, 0x00343905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x3e140000, 0xfb003a24, 0x00000000,
    0xa7002370, 0x7f833e01, 0x01040022, 0x0001c060,
    0x000000b0, 0x000000a0, 0xa03f1140, 0x09406603,
    0xe7411970, 0x09403f03, 0x00030061, 0x45060220,
    0x00343f05, 0x00000000, 0x00130061, 0x47060220,
    0x00344005, 0x00000000, 0xa0431b40, 0x68024102,
    0x00031961, 0x45260220, 0x00344305, 0x00000000,
    0x00131a61, 0x47260220, 0x00344405, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x49140000, 0xfb004524, 0x00000000,
    0xe76b2b70, 0x7f834900, 0x00040024, 0x0001c060,
    0x00000020, 0x00000020, 0x00041161, 0x6b054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040024, 0x0001c060,
    0x00000020, 0x00000020, 0x00040961, 0x6b054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x000008d0, 0xae4a1170, 0x00007203,
    0x20510965, 0x6b004a03, 0x00040965, 0x00010220,
    0x22465105, 0x00466d05, 0xa0520066, 0x6b224a02,
    0x01040022, 0x0001c060, 0x000005c8, 0x000005a8,
    0xa0540040, 0x08406603, 0xa05b0040, 0x09006603,
    0xa0360040, 0x01000403, 0xa0490940, 0x02000403,
    0x00043b61, 0x46054220, 0x00000000, 0x000000c0,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xe7561d70, 0x08405403, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00031d61, 0x61060220,
    0x00345b05, 0x00000000, 0x80103601, 0x00000000,
    0x00000000, 0x00000000, 0x00131e61, 0x63060220,
    0x00345c05, 0x00000000, 0xe75d0070, 0x09005b03,
    0x00031f61, 0x11060220, 0x00343605, 0x00000000,
    0x00131f61, 0x13060220, 0x00343705, 0x00000000,
    0x00031f61, 0x19060220, 0x00344905, 0x00000000,
    0x00131f61, 0x1b060220, 0x00344a05, 0x00000000,
    0x27383370, 0x04003603, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa0581f40, 0x68025602,
    0x274b3470, 0x04004903, 0xa05f1f40, 0x68025d02,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xa03a1c40, 0x06023802, 0x00031a61, 0x61260220,
    0x00345f05, 0x00000000, 0x00131b61, 0x63260220,
    0x00346005, 0x00000000, 0x00033561, 0x5a060220,
    0x00345405, 0x00000000, 0x00130061, 0x5c060220,
    0x00345505, 0x00000000, 0xa0541f40, 0x06024b02,
    0x00031e61, 0x11260220, 0x00343a05, 0x00000000,
    0x00131f61, 0x13260220, 0x00343b05, 0x00000000,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x0c240000, 0xfb006124, 0x00040000,
    0x00031d61, 0x5a260220, 0x00345805, 0x00000000,
    0x00131d61, 0x5c260220, 0x00345905, 0x00000000,
    0x00031d61, 0x19260220, 0x00345405, 0x00000000,
    0x00131e61, 0x1b260220, 0x00345505, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044d31, 0x08240000, 0xfb005a24, 0x00040000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x20440000, 0xfb001924, 0x000c0000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x00044f31, 0x18440000, 0xfb001124, 0x000c0000,
    0x256a2c62, 0x0e000c00, 0x256f1162, 0x6a003200,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x20632d40, 0x08000c00, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0xe0741241, 0x34006f00,
    0xe0681241, 0x3f006300, 0x20623c40, 0x15003200,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x20642d40, 0x0a000e00, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x20771440, 0x74000c00,
    0x80002f01, 0x00000000, 0x00000000, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x203b0c41, 0x1a006800, 0x80002e01, 0x00000000,
    0x00000000, 0x00000000, 0x20551941, 0x22006800,
    0xe0661541, 0x3f006200, 0x207c1440, 0x08207700,
    0x20763740, 0x74003200, 0x20780040, 0x74000e00,
    0x80002e01, 0x00000000, 0x00000000, 0x00000000,
    0x00040c5b, 0x57040aa8, 0x0a0a5505, 0x66052005,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x0004ff5b, 0x3d040aa8, 0x0a0a3b05, 0x66051805,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xe02b1541, 0x3f007c00, 0x207a1540, 0x15207600,
    0x207d1540, 0x0a207800, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x10440000,
    0xfb004d24, 0x000c0000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x20611341, 0x1a402b00,
    0x206b0041, 0x22402b00, 0xe0081441, 0x3f007a00,
    0x0004115b, 0x6f040aa8, 0x0a4a6b05, 0x08052005,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x202d2041, 0x12006800, 0x205c3d41, 0x12402b00,
    0xe0690041, 0x3f006400, 0x0004175b, 0x63040aa8,
    0x0a4a6105, 0x08051805, 0x0004c05b, 0x31040aa8,
    0x0a0a2d05, 0x66051005, 0xe02c1741, 0x3f007d00,
    0x0004155b, 0x5e040aa8, 0x0a4a5c05, 0x08051005,
    0x0004df5b, 0x3f040aa8, 0x0a0a3d05, 0x69051c05,
    0x80002e01, 0x00000000, 0x00000000, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x00041b5b, 0x59040aa8, 0x0a0a5705, 0x69052405,
    0x0004145b, 0x65040aa8, 0x0a4a6305, 0x2c051c05,
    0x0004005b, 0x74040aa8, 0x0a4a6f05, 0x2c052405,
    0x0004f05b, 0x33040aa8, 0x0a0a3105, 0x69051405,
    0x00040e5b, 0x60040aa8, 0x0a4a5e05, 0x2c051405,
    0x00041361, 0x70054220, 0x00000000, 0x00000001,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x2048ef40, 0x1e003f00, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x205bee40, 0x26005900,
    0x2035c040, 0x16003300, 0x203a0b40, 0x65204800,
    0x20420040, 0x65004800, 0x203c1440, 0x74205b00,
    0x20443b40, 0x74005b00, 0x20381540, 0x60203500,
    0x20400040, 0x60003500, 0x00040024, 0x0001c060,
    0x00000030, 0x00000030, 0x00041a61, 0x70054220,
    0x00000000, 0x00000000, 0x00043b61, 0x46054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x000002d0, 0x00040070, 0x00018660,
    0x26466d05, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x01040b62, 0x75058220,
    0x02465205, 0xffffffff, 0xae773770, 0x00010343,
    0x00041965, 0x00010220, 0x22467705, 0x00467505,
    0x01040022, 0x0001c060, 0x00000268, 0x00000268,
    0xa0781a40, 0x00c00403, 0xa00c0040, 0x01c00403,
    0xa0161240, 0x02c00403, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x70054220,
    0x00000000, 0x00000001, 0x00040061, 0x72054220,
    0x00000000, 0x00000000, 0x277a1d70, 0x04007803,
    0x00033a61, 0x08060220, 0x00347805, 0x00000000,
    0x00133a61, 0x0a060220, 0x00347905, 0x00000000,
    0x00031f61, 0x12060220, 0x00340c05, 0x00000000,
    0x00130a61, 0x14060220, 0x00340d05, 0x00000000,
    0x270e0070, 0x04000c03, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00031f61, 0x1c060220,
    0x00341605, 0x00000000, 0x80103801, 0x00000000,
    0x00000000, 0x00000000, 0x00130f61, 0x1e060220,
    0x00341705, 0x00000000, 0x27180070, 0x04001603,
    0xa07c1f40, 0x06027a02, 0xa0101d40, 0x06020e02,
    0xa01a1b40, 0x06021802, 0x00031b61, 0x08260220,
    0x00347c05, 0x00000000, 0x00131c61, 0x0a260220,
    0x00347d05, 0x00000000, 0x00031c61, 0x12260220,
    0x00341005, 0x00000000, 0x00131d61, 0x14260220,
    0x00341105, 0x00000000, 0x00031d61, 0x1c260220,
    0x00341a05, 0x00000000, 0x00131e61, 0x1e260220,
    0x00341b05, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044a31, 0x40140000,
    0xfb000824, 0x00000000, 0x80000b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x42140000,
    0xfb001224, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x44140000,
    0xfb001c24, 0x00000000, 0x80002a01, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00041261, 0x38050220,
    0x00464005, 0x00000000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00041661, 0x3a050220,
    0x00464205, 0x00000000, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00041461, 0x3c050220,
    0x00464405, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040024, 0x0001c060,
    0x00000030, 0x00000030, 0x00041f61, 0x70054220,
    0x00000000, 0x00000000, 0x00041f61, 0x46054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040024, 0x0001c060,
    0x00000040, 0x00000040, 0x00041c61, 0x70054220,
    0x00000000, 0x00000000, 0x00041c61, 0x46054220,
    0x00000000, 0x00000000, 0x00041f61, 0x72054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00001b50, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80040961, 0x48054660,
    0x00000000, 0x00000000, 0x00040061, 0x48050660,
    0x00467005, 0x00000000, 0x00040070, 0x00018660,
    0x16462805, 0x00000000, 0x80031a40, 0x48260660,
    0x06444806, 0x00444826, 0x80021940, 0x48470660,
    0x06424827, 0x00424847, 0x80021940, 0x48670660,
    0x06424827, 0x00424867, 0x80021940, 0x48850660,
    0x06004864, 0x00344885, 0x80021a40, 0x49850660,
    0x06004964, 0x00344985, 0xa4491940, 0x49014882,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00043861, 0x1d050660, 0x000049e4, 0x00000000,
    0x01040022, 0x0001c060, 0x000000e8, 0x000000d8,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xa01f1740, 0x02410203, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x27210970, 0x02101f03,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x00031761, 0x2b060220, 0x00341f05, 0x00000000,
    0x80103901, 0x00000000, 0x00000000, 0x00000000,
    0x00131761, 0x2d060220, 0x00342005, 0x00000000,
    0xa0231b40, 0x02122112, 0x00031961, 0x2b260220,
    0x00342305, 0x00000000, 0x00131a61, 0x2d260220,
    0x00342405, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x6e140000,
    0xfb182b24, 0x01001d14, 0x00040024, 0x0001c060,
    0x00000020, 0x00000020, 0x00042961, 0x6e054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x000019a0, 0x80040961, 0x49054660,
    0x00000000, 0x00000000, 0x00040061, 0x49050660,
    0x00467005, 0x00000000, 0x00040070, 0x00018660,
    0x16467005, 0x00000000, 0x80040040, 0x4b058150,
    0x05582a05, 0xffffffff, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80040961, 0x10014110,
    0x00000000, 0x09200920, 0x80040069, 0x10018510,
    0x01464b05, 0x00020002, 0x80040940, 0x10018110,
    0x01461001, 0x09200920, 0xe32c0961, 0x001b0004,
    0x80001961, 0x2c054660, 0x00000000, 0x00000000,
    0x80031940, 0x2c260660, 0x06442c06, 0x00442c26,
    0x80021940, 0x2c470660, 0x06422c27, 0x00422c47,
    0x80021940, 0x2c670660, 0x06422c27, 0x00422c67,
    0x80021940, 0x2c850660, 0x06002c64, 0x00342c85,
    0x80021a40, 0x2d850660, 0x06002d64, 0x00342d85,
    0xa42d1940, 0x2d012c82, 0x80002901, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0xa0310040, 0x2c016e02,
    0x01040022, 0x0001c060, 0x00000360, 0x00000130,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00041461, 0x3c054220, 0x00000000, 0x7f800000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00041661, 0x3a054220, 0x00000000, 0x7f800000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00041261, 0x38054220, 0x00000000, 0x7f800000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x00041361, 0x44054220, 0x00000000, 0xff800000,
    0x00041561, 0x42054220, 0x00000000, 0xff800000,
    0x00041161, 0x40054220, 0x00000000, 0xff800000,
    0x00040061, 0x78054220, 0x00000000, 0x7f800000,
    0x00040061, 0x76054220, 0x00000000, 0x7f800000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00041361, 0x74054220, 0x00000000, 0x7f800000,
    0x00040061, 0x7e054220, 0x00000000, 0xff800000,
    0x00040061, 0x7c054220, 0x00000000, 0xff800000,
    0x00040061, 0x7a054220, 0x00000000, 0xff800000,
    0x00040024, 0x0001c060, 0x00000240, 0x00000240,
    0x00040969, 0x33058660, 0x02463105, 0x00000005,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa0360940, 0x3301026a, 0xe0341168, 0x01b03103,
    0x00040069, 0x32058660, 0x02467205, 0x00000018,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x27480070, 0x0210364b, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00033461, 0x4c060220,
    0x00343605, 0x00000000, 0x00133061, 0x4e060220,
    0x00343705, 0x00000000, 0x203e0966, 0x32002f03,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x4a040660, 0x0e2e02e4, 0x48053405,
    0x00131961, 0x4e260220, 0x00344b05, 0x00000000,
    0x00031a61, 0x4c260220, 0x00344a05, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x00000000, 0xfb084c24, 0x000c3844,
    0xa04d3440, 0x01003603, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x274f1970, 0x36004d03,
    0x00030061, 0x53060220, 0x00344d05, 0x00000000,
    0x00130061, 0x55060220, 0x00344e05, 0x00000000,
    0xa0511b40, 0x4a024f02, 0x00131961, 0x55260220,
    0x00345205, 0x00000000, 0x00031a61, 0x53260220,
    0x00345105, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xfb085324, 0x000c4044, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x207a3440, 0x40003800,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x207c3440, 0x42003a00, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x207e3440, 0x44003c00,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00041361, 0x74050220, 0x00467a05, 0x00000000,
    0x00041261, 0x76050220, 0x00467c05, 0x00000000,
    0x00041161, 0x78050220, 0x00467e05, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00001518,
    0x00040070, 0x00018660, 0x16462805, 0x00000000,
    0xa3211261, 0x7f810000, 0x60210061, 0x00103800,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa3231361, 0x7f810000, 0x60230061, 0x00103a00,
    0xa3251361, 0x7f810000, 0x60250061, 0x00103c00,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xa32b1461, 0xff810000, 0x602b0061, 0x00104400,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xa32d1d61, 0x7f810000, 0x602d0061, 0x00107400,
    0xa32f1c61, 0x7f810000, 0x602f0061, 0x00107600,
    0xa3311b61, 0x7f810000, 0x60310061, 0x00107800,
    0xa3330c61, 0xff810000, 0x60330061, 0x00107a00,
    0xa3350c61, 0xff810000, 0x60350061, 0x00107c00,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa3271961, 0xff810000, 0x60270061, 0x00104000,
    0xa3291961, 0xff810000, 0x60290061, 0x00104200,
    0xa3371b61, 0xff810000, 0x60370061, 0x00107e00,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80031f61, 0x50060220, 0x00442126, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80032961, 0x6f060220, 0x00442326, 0x00000000,
    0x80031761, 0x03060220, 0x00442526, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80031761, 0x4b060220, 0x00442d26, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80031761, 0x57060220, 0x00442f26, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80031661, 0x63060220, 0x00443126, 0x00000000,
    0x80031561, 0x71060220, 0x00443326, 0x00000000,
    0x80031361, 0x10060220, 0x00442726, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80031261, 0x1d060220, 0x00442926, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80031f62, 0x4e060aa0, 0x5a442106, 0x00445006,
    0x80031f62, 0x6d060aa0, 0x5a442306, 0x00446f06,
    0x80031661, 0x76060220, 0x00443526, 0x00000000,
    0x80031f62, 0x49060aa0, 0x5a442d06, 0x00444b06,
    0x80031f62, 0x7a060aa0, 0x5a442506, 0x00440306,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80031e62, 0x55060aa0, 0x5a442f06, 0x00445706,
    0x80031661, 0x7c060220, 0x00443726, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80031e62, 0x61060aa0, 0x5a443106, 0x00446306,
    0x80031761, 0x43060220, 0x00442b26, 0x00000000,
    0x80031d62, 0x0e060aa0, 0x4a442706, 0x00441006,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80031c62, 0x1b060aa0, 0x4a442906, 0x00441d06,
    0x80031761, 0x21260220, 0x00444e06, 0x00000000,
    0x80031761, 0x23260220, 0x00446d06, 0x00000000,
    0x80031d62, 0x74060aa0, 0x4a443506, 0x00447606,
    0x80031761, 0x2d260220, 0x00444906, 0x00000000,
    0x80031661, 0x25260220, 0x00447a06, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80031561, 0x2f260220, 0x00445506, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80031461, 0x31260220, 0x00446106, 0x00000000,
    0x80031f62, 0x41060aa0, 0x4a442b06, 0x00444306,
    0x80031461, 0x27260220, 0x00440e06, 0x00000000,
    0x80031361, 0x29260220, 0x00441b06, 0x00000000,
    0x80021f61, 0x5d070220, 0x00422147, 0x00000000,
    0x80021661, 0x57070220, 0x00422127, 0x00000000,
    0x80031261, 0x35260220, 0x00447406, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80021f61, 0x47070220, 0x00422d27, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80021f61, 0x08070220, 0x00422547, 0x00000000,
    0x80020061, 0x06070220, 0x00422527, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80021f61, 0x4d070220, 0x00422f27, 0x00000000,
    0x80021761, 0x4f070220, 0x00422f47, 0x00000000,
    0x80030062, 0x6d060aa0, 0x4a443306, 0x00447106,
    0x80023261, 0x53070220, 0x00423127, 0x00000000,
    0x80020061, 0x49070220, 0x00422d47, 0x00000000,
    0x80031261, 0x2b260220, 0x00444106, 0x00000000,
    0x80030062, 0x79060aa0, 0x4a443706, 0x00447c06,
    0x80023161, 0x15070220, 0x00422747, 0x00000000,
    0x80023161, 0x13070220, 0x00422727, 0x00000000,
    0x80020061, 0x55070220, 0x00423147, 0x00000000,
    0x80020061, 0x3b070220, 0x00422947, 0x00000000,
    0x80020061, 0x39070220, 0x00422927, 0x00000000,
    0x80020062, 0x51070aa0, 0x5a425707, 0x00425d07,
    0x80020061, 0x5f070220, 0x00423527, 0x00000000,
    0x80020061, 0x61070220, 0x00423547, 0x00000000,
    0x80020062, 0x04070aa0, 0x5a420607, 0x00420807,
    0x80031461, 0x33260220, 0x00446d06, 0x00000000,
    0x80020061, 0x74070220, 0x00422347, 0x00000000,
    0x80020d61, 0x43070220, 0x00422b47, 0x00000000,
    0x80031361, 0x37260220, 0x00447906, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80021f62, 0x11070aa0, 0x4a421307, 0x00421507,
    0x80021f62, 0x69070aa0, 0x5a425307, 0x00425507,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021f62, 0x1e070aa0, 0x4a423907, 0x00423b07,
    0x80021561, 0x21470220, 0x00425107, 0x00000000,
    0x80021761, 0x72070220, 0x00422327, 0x00000000,
    0x80021f62, 0x77070aa0, 0x4a425f07, 0x00426107,
    0x80021561, 0x25470220, 0x00420407, 0x00000000,
    0x80020061, 0x41070220, 0x00422b27, 0x00000000,
    0x80021f61, 0x5b070220, 0x00423347, 0x00000000,
    0x80023561, 0x59070220, 0x00423327, 0x00000000,
    0x80020062, 0x5d070aa0, 0x5a424d07, 0x00424f07,
    0x80021f61, 0x67070220, 0x00423747, 0x00000000,
    0x80023661, 0x65070220, 0x00423727, 0x00000000,
    0x80021561, 0x27470220, 0x00421107, 0x00000000,
    0x80021461, 0x31470220, 0x00426907, 0x00000000,
    0x80021361, 0x29470220, 0x00421e07, 0x00000000,
    0x80020061, 0x6c070220, 0x00422167, 0x00000000,
    0x80020062, 0x70070aa0, 0x5a427207, 0x00427407,
    0x80021361, 0x35470220, 0x00427707, 0x00000000,
    0x80020061, 0x0d070220, 0x00422567, 0x00000000,
    0x80023a61, 0x0b070220, 0x00422527, 0x00000000,
    0x80023262, 0x45070aa0, 0x4a424107, 0x00424307,
    0x80020062, 0x51070aa0, 0x5a424707, 0x00424907,
    0x80021461, 0x2f470220, 0x00425d07, 0x00000000,
    0x80021f62, 0x7d070aa0, 0x4a426507, 0x00426707,
    0x80021f61, 0x1a070220, 0x00422767, 0x00000000,
    0x80020061, 0x18070220, 0x00422727, 0x00000000,
    0x80020f61, 0x56070220, 0x00423127, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80021f61, 0x3e070220, 0x00422927, 0x00000000,
    0x80021461, 0x23470220, 0x00427007, 0x00000000,
    0x80020e61, 0x62070220, 0x00423527, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80021f62, 0x09070aa0, 0x5a420b07, 0x00420d07,
    0x80021461, 0x2b470220, 0x00424507, 0x00000000,
    0x80021361, 0x2d470220, 0x00425107, 0x00000000,
    0x80020062, 0x72070aa0, 0x4a425907, 0x00425b07,
    0x80021361, 0x37470220, 0x00427d07, 0x00000000,
    0x80021f62, 0x16070aa0, 0x4a421807, 0x00421a07,
    0x80021661, 0x40070220, 0x00422967, 0x00000000,
    0x80021e61, 0x79070220, 0x00422367, 0x00000000,
    0x80020061, 0x77070220, 0x00422327, 0x00000000,
    0x80021361, 0x25670220, 0x00420907, 0x00000000,
    0x80021461, 0x64070220, 0x00423567, 0x00000000,
    0x80021461, 0x66070220, 0x00422127, 0x00000000,
    0x80020f61, 0x4c070220, 0x00422d67, 0x00000000,
    0x80021561, 0x4a070220, 0x00422d27, 0x00000000,
    0x80021261, 0x33470220, 0x00427207, 0x00000000,
    0x80021f61, 0x6a070220, 0x00423767, 0x00000000,
    0x80021461, 0x68070220, 0x00423727, 0x00000000,
    0x80021161, 0x27670220, 0x00421607, 0x00000000,
    0x80020062, 0x3c070aa0, 0x4a423e07, 0x00424007,
    0x80021761, 0x44070220, 0x00422b27, 0x00000000,
    0x80021661, 0x46070220, 0x00422b67, 0x00000000,
    0x80020062, 0x75070aa0, 0x5a427707, 0x00427907,
    0x80021761, 0x50070220, 0x00422f27, 0x00000000,
    0x80020061, 0x52070220, 0x00422f67, 0x00000000,
    0x80021461, 0x58070220, 0x00423167, 0x00000000,
    0x80020062, 0x25850aa0, 0x5a002564, 0x00342585,
    0x80020062, 0x26850aa0, 0x5a002664, 0x00342685,
    0x80020062, 0x60070aa0, 0x5a426607, 0x00426c07,
    0x80021f62, 0x54070aa0, 0x5a424a07, 0x00424c07,
    0x80021f61, 0x5e070220, 0x00423367, 0x00000000,
    0x80021761, 0x5c070220, 0x00423327, 0x00000000,
    0x80021f62, 0x7e070aa0, 0x4a426807, 0x00426a07,
    0x80021f62, 0x27850aa0, 0x4a002764, 0x00342785,
    0x80021f62, 0x28850aa0, 0x4a002864, 0x00342885,
    0x80021761, 0x29670220, 0x00423c07, 0x00000000,
    0x80021f62, 0x48070aa0, 0x4a424407, 0x00424607,
    0x80021761, 0x23670220, 0x00427507, 0x00000000,
    0x80031762, 0x26050aa0, 0x5a0025e4, 0x00462605,
    0x80021761, 0x21670220, 0x00426007, 0x00000000,
    0x80021661, 0x2d670220, 0x00425407, 0x00000000,
    0x80020062, 0x78070aa0, 0x4a426207, 0x00426407,
    0x80021d62, 0x73070aa0, 0x4a425c07, 0x00425e07,
    0x80021761, 0x37670220, 0x00427e07, 0x00000000,
    0x80031562, 0x28050aa0, 0x4a0027e4, 0x00462805,
    0x80021d62, 0x29850aa0, 0x4a002964, 0x00342985,
    0x80021d62, 0x2a850aa0, 0x4a002a64, 0x00342a85,
    0x80021761, 0x2b670220, 0x00424807, 0x00000000,
    0x80021f62, 0x6c070aa0, 0x5a425607, 0x00425807,
    0x80021d62, 0x23850aa0, 0x5a002364, 0x00342385,
    0x80021d62, 0x24850aa0, 0x5a002464, 0x00342485,
    0x80021c62, 0x21850aa0, 0x5a002164, 0x00342185,
    0x80021c62, 0x22850aa0, 0x5a002264, 0x00342285,
    0x80021b62, 0x2d850aa0, 0x5a002d64, 0x00342d85,
    0x80021b62, 0x2e850aa0, 0x5a002e64, 0x00342e85,
    0x80020061, 0x35670220, 0x00427807, 0x00000000,
    0x60580061, 0x00112680, 0x80020061, 0x33670220,
    0x00427307, 0x00000000, 0x80021c62, 0x37850aa0,
    0x4a003764, 0x00343785, 0x80021c62, 0x38850aa0,
    0x4a003864, 0x00343885, 0x80021e62, 0x60070aa0,
    0x5a425007, 0x00425207, 0x605a0061, 0x00112880,
    0x80030062, 0x2a050aa0, 0x4a0029e4, 0x00462a05,
    0x80021b62, 0x2b850aa0, 0x4a002b64, 0x00342b85,
    0x80021b62, 0x2c850aa0, 0x4a002c64, 0x00342c85,
    0x80020061, 0x31670220, 0x00426c07, 0x00000000,
    0x80030062, 0x24050aa0, 0x5a0023e4, 0x00462405,
    0x80030062, 0x22050aa0, 0x5a0021e4, 0x00462205,
    0x80030062, 0x2e050aa0, 0x5a002de4, 0x00462e05,
    0x80021b62, 0x35850aa0, 0x4a003564, 0x00343585,
    0x80021b62, 0x36850aa0, 0x4a003664, 0x00343685,
    0x80021a62, 0x33850aa0, 0x4a003364, 0x00343385,
    0x80021a62, 0x34850aa0, 0x4a003464, 0x00343485,
    0x80030062, 0x38050aa0, 0x4a0037e4, 0x00463805,
    0x80020061, 0x2f670220, 0x00426007, 0x00000000,
    0x605c0061, 0x00112a80, 0x80031762, 0x2c050aa0,
    0x4a002be4, 0x00462c05, 0x80021a62, 0x31850aa0,
    0x5a003164, 0x00343185, 0x80021a62, 0x32850aa0,
    0x5a003264, 0x00343285, 0x60560061, 0x00112480,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x60540061, 0x00112280, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x60600061, 0x00112e80,
    0x80030062, 0x36050aa0, 0x4a0035e4, 0x00463605,
    0x80031762, 0x34050aa0, 0x4a0033e4, 0x00463405,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x606a0061, 0x00113880, 0x80021962, 0x2f850aa0,
    0x5a002f64, 0x00342f85, 0x80021962, 0x30850aa0,
    0x5a003064, 0x00343085, 0x605e0061, 0x00112c80,
    0x80031762, 0x32050aa0, 0x5a0031e4, 0x00463205,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x60680061, 0x00113680, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0x60660061, 0x00113480,
    0x80031562, 0x30050aa0, 0x5a002fe4, 0x00463005,
    0x80001401, 0x00000000, 0x00000000, 0x00000000,
    0x60640061, 0x00113280, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x60620061, 0x00113080,
    0x01040022, 0x0001c060, 0x00000738, 0x00000738,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa06c0040, 0x08010243, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x276e0070, 0x02106c2b,
    0x00030061, 0x72060220, 0x00346c05, 0x00000000,
    0x00130061, 0x74060220, 0x00346d05, 0x00000000,
    0xa0701b40, 0x02126e1a, 0x00031961, 0x72260220,
    0x00347005, 0x00000000, 0x00131a61, 0x74260220,
    0x00347105, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xfb2a7224, 0x01005414, 0xa0733340, 0x08410243,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xe7751970, 0x08407303, 0x00030061, 0x79060220,
    0x00347305, 0x00000000, 0x00130061, 0x7b060220,
    0x00347405, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa0770040, 0x0212751a,
    0x00031961, 0x79260220, 0x00347705, 0x00000000,
    0x00131a61, 0x7b260220, 0x00347805, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x00000000, 0xfb2a7924, 0x01005614,
    0xa07a3440, 0x08810243, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xe77c1970, 0x08807a03,
    0x00030061, 0x03060220, 0x00347a05, 0x00000000,
    0x00130061, 0x05060220, 0x00347b05, 0x00000000,
    0xa07e1b40, 0x02127c1a, 0x00031961, 0x03260220,
    0x00347e05, 0x00000000, 0x00131a61, 0x05260220,
    0x00347f05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x00000000,
    0xfb2a0324, 0x01005814, 0xa0043540, 0x08c10243,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe7063570, 0x08c00403, 0x00030061, 0x0a060220,
    0x00340405, 0x00000000, 0x00130061, 0x0c060220,
    0x00340505, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa0080040, 0x0212061a,
    0x00031961, 0x0a260220, 0x00340805, 0x00000000,
    0x00131a61, 0x0c260220, 0x00340905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xfb2c0a24, 0x01005a14,
    0xa00b3640, 0x09010243, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xe70d3670, 0x09000b03,
    0x00030061, 0x11060220, 0x00340b05, 0x00000000,
    0x00130061, 0x13060220, 0x00340c05, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa00f0040, 0x02120d1a, 0x00031961, 0x11260220,
    0x00340f05, 0x00000000, 0x00131a61, 0x13260220,
    0x00341005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x00000000,
    0xfb2c1124, 0x01005c14, 0xa0123740, 0x09410243,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xe7143770, 0x09401203, 0x00030061, 0x18060220,
    0x00341205, 0x00000000, 0x00130061, 0x1a060220,
    0x00341305, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa0160040, 0x0212141a,
    0x00031961, 0x18260220, 0x00341605, 0x00000000,
    0x00131a61, 0x1a260220, 0x00341705, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x00000000, 0xfb2c1824, 0x01005e14,
    0x00030061, 0x4d260660, 0x00000224, 0x00000000,
    0x00130061, 0x4f260660, 0x00000224, 0x00000000,
    0x00031a61, 0x4d060660, 0x00000204, 0x00000000,
    0x00131a61, 0x4f060660, 0x00000204, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x00000000, 0xfb2a4d24, 0x01006014,
    0xa0193840, 0x00410203, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x271b3870, 0x02101903,
    0x00033861, 0x1f060220, 0x00341905, 0x00000000,
    0x00130061, 0x21060220, 0x00341a05, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa01d0040, 0x02121b12, 0x00031961, 0x1f260220,
    0x00341d05, 0x00000000, 0x00131a61, 0x21260220,
    0x00341e05, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x00000000,
    0xfb2a1f24, 0x01006214, 0xa0203940, 0x00810203,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x27223970, 0x02102003, 0x00030061, 0x26060220,
    0x00342005, 0x00000000, 0x00130061, 0x28060220,
    0x00342105, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa0240040, 0x02122212,
    0x00031961, 0x26260220, 0x00342405, 0x00000000,
    0x00131a61, 0x28260220, 0x00342505, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044a31, 0x00000000, 0xfb2a2624, 0x01006414,
    0xa0273a40, 0x01010203, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x27291970, 0x02102703,
    0x00030061, 0x2d060220, 0x00342705, 0x00000000,
    0x80101101, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x2f060220, 0x00342805, 0x00000000,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0xa02b0040, 0x02122912, 0x00031961, 0x2d260220,
    0x00342b05, 0x00000000, 0x00131a61, 0x2f260220,
    0x00342c05, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x00000000,
    0xfb2c2d24, 0x01006614, 0xa02e3b40, 0x01410203,
    0x80001401, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0xe7303b70, 0x01402e03, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x34060220,
    0x00342e05, 0x00000000, 0x80101501, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x36060220,
    0x00342f05, 0x00000000, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0xa0320040, 0x02123012,
    0x00031961, 0x34260220, 0x00343205, 0x00000000,
    0x00131a61, 0x36260220, 0x00343305, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x00000000, 0xfb2c3424, 0x01006814,
    0xa0353c40, 0x01810203, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0xe7370970, 0x01803503,
    0x00030061, 0x3b060220, 0x00343505, 0x00000000,
    0x00130061, 0x3d060220, 0x00343605, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa0390040, 0x02123712, 0x00131961, 0x3d260220,
    0x00343a05, 0x00000000, 0x00031a61, 0x3b260220,
    0x00343905, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044d31, 0x00000000,
    0xfb2c3b24, 0x01006a14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80030061, 0x7e050220,
    0x00460005, 0x00000000, 0x80040931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_indirect = {
   .prog_data = {
      .base.nr_params = 19,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 3,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 11488,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_indirect_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_indirect_printfs,
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
   .args = gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_indirect_args,
   .code = gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_indirect_code,
};
const char *gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_indirect_sha1 = "0f25c978efa79152f53c38c7a8c08e75b4833ff8";

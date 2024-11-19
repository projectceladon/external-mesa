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

and(1)          g60<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g64<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g60UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
add(1)          g61<1>UD        g60<0,1,0>UD    0x00000040UD    { align1 WE_all 1N $0.src compacted };
mov(8)          g113<1>UW       0x76543210V                     { align1 WE_all 1Q };
shl(16)         g25<1>D         g64<8,8,1>D     0x00000004UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g3UD            g61UD           nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
add(8)          g113.8<1>UW     g113<1,1,0>UW   0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g12<1>D         g113<8,8,1>UW                   { align1 1H };
and(16)         g23<1>UD        g12<1,1,0>UD    0x0000000fUD    { align1 1H I@1 compacted };
add(16)         g14<1>D         g23<1,1,0>D     g25<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.dst };
mov(8)          g68.1<2>D       g3.1<0,1,0>D                    { align1 2Q };
mov(8)          g66.1<2>D       g3.1<0,1,0>D                    { align1 1Q };
mov(8)          g68<2>D         g3<0,1,0>D                      { align1 2Q I@2 };
mov(8)          g66<2>D         g3<0,1,0>D                      { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g26UD           g66UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
cmp.l.f0.0(16)  null<1>UD       g14<8,8,1>UD    g26<8,8,1>UD    { align1 1H @5 $2.dst };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
add(16)         g27<1>D         g3<0,1,0>D      4D              { align1 1H compacted };
shl(16)         g39<1>D         g14<8,8,1>D     0x00000003UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g29<1>UD        g27<1,1,0>UD    g3<0,1,0>UD     { align1 1H I@2 compacted };
mov(8)          g67<2>UD        g27<4,4,1>UD                    { align1 1Q $2.src };
mov(8)          g69<2>UD        g28<4,4,1>UD                    { align1 2Q $2.src };
add(16)         g31<1>D         -g29<1,1,0>D    g3.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g67.1<2>UD      g31<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g69.1<2>UD      g32<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g32UD           g67UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g34<1>D         g2.4<0,1,0>D    g32<1,1,0>D     { align1 1H $3.dst compacted };
add(16)         g42<1>D         g34<1,1,0>D     g39<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g36<1>UD        g34<1,1,0>UD    g2.4<0,1,0>UD   { align1 1H compacted };
shr(16)         g40<1>UD        g14<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
cmp.l.f0.0(16)  g44<1>UD        g42<1,1,0>UD    g34<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g68<2>UD        g42<4,4,1>UD                    { align1 1Q $3.src };
mov(8)          g70<2>UD        g43<4,4,1>UD                    { align1 2Q $3.src };
add(16)         g38<1>D         -g36<1,1,0>D    g2.5<0,1,0>D    { align1 1H I@5 compacted };
add3(16)        g46<1>D         g38<8,8,1>D     g40<8,8,1>D     -g44<1,1,1>D { align1 1H I@1 };
mov(8)          g70.1<2>UD      g47<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g68.1<2>UD      g46<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g16UD           g68UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g61<2>UD        g16<4,4,1>UD                    { align1 1Q $4.dst };
mov(8)          g63<2>UD        g17<4,4,1>UD                    { align1 2Q $4.dst };
or.nz.f0.0(16)  null<1>UD       g16<8,8,1>UD    g18<8,8,1>UD    { align1 1H $4.dst };
mov(8)          g61.1<2>UD      g18<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g63.1<2>UD      g19<4,4,1>UD                    { align1 2Q I@3 };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL1              { align1 1H };
add(16)         g47<1>D         g16<1,1,0>D     48D             { align1 1H compacted };
add(16)         g53<1>D         g16<1,1,0>D     56D             { align1 1H compacted };
cmp.l.f0.0(16)  g49<1>UD        g47<1,1,0>UD    g16<1,1,0>UD    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g55<1>UD        g53<1,1,0>UD    g16<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g69<2>UD        g47<4,4,1>UD                    { align1 1Q $4.src };
mov(8)          g71<2>UD        g48<4,4,1>UD                    { align1 2Q $4.src };
mov(8)          g73<2>UD        g53<4,4,1>UD                    { align1 1Q };
mov(8)          g75<2>UD        g54<4,4,1>UD                    { align1 2Q };
add(16)         g51<1>D         -g49<1,1,0>D    g18<1,1,0>D     { align1 1H I@6 compacted };
add(16)         g57<1>D         -g55<1,1,0>D    g18<1,1,0>D     { align1 1H I@6 compacted };
mov(8)          g69.1<2>UD      g51<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g71.1<2>UD      g52<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g73.1<2>UD      g57<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g75.1<2>UD      g58<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g52UD           g69UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g65UD           g73UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mov(16)         g121<1>UD       g52.3<32,8,4>UB                 { align1 1H $4.dst };
or.nz.f0.0(16)  null<1>UD       g65<8,8,1>UD    g67<8,8,1>UD    { align1 1H $5.dst };
(+f0.0) if(16)  JIP:  LABEL4          UIP:  LABEL3              { align1 1H };
add(16)         g69<1>D         g65<1,1,0>D     128D            { align1 1H $4.src compacted };
add(16)         g75<1>D         g65<1,1,0>D     140D            { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g71<1>UD        g69<1,1,0>UD    g65<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g83<2>UD        g69<4,4,1>UD                    { align1 1Q };
mov(8)          g85<2>UD        g70<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g77<1>UD        g75<1,1,0>UD    0x0000008cUD    { align1 1H I@4 compacted };
mov(8)          g56<2>UD        g75<4,4,1>UD                    { align1 1Q };
mov(8)          g58<2>UD        g76<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g73<1>D         -g71<1,1,0>D    g67<1,1,0>D     { align1 1H I@6 compacted };
add(16)         g79<1>D         -g77<1,1,0>D    g67<1,1,0>D     { align1 1H I@4 compacted };
mov(8)          g83.1<2>UD      g73<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g85.1<2>UD      g74<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g56.1<2>UD      g79<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g58.1<2>UD      g80<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g81UD           g83UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
cmp.l.f0.0(16)  null<1>F        (abs)g81<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $6.dst compacted };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL5              { align1 1H };
add(16)         g83<1>D         g65<1,1,0>D     132D            { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g85<1>UD        g83<1,1,0>UD    0x00000084UD    { align1 1H I@1 compacted };
mov(8)          g90<2>UD        g83<4,4,1>UD                    { align1 1Q };
mov(8)          g92<2>UD        g84<4,4,1>UD                    { align1 2Q };
add(16)         g87<1>D         -g85<1,1,0>D    g67<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g90.1<2>UD      g87<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g92.1<2>UD      g88<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g88UD           g90UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
cmp.l.f0.0(16)  null<1>F        (abs)g88<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $7.dst compacted };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g89<1>D         g65<1,1,0>D     136D            { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(16)  g91<1>UD        g89<1,1,0>UD    0x00000088UD    { align1 1H I@1 compacted };
mov(8)          g96<2>UD        g89<4,4,1>UD                    { align1 1Q };
mov(8)          g98<2>UD        g90<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g93<1>D         -g91<1,1,0>D    g67<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g96.1<2>UD      g93<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g98.1<2>UD      g94<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g94UD           g96UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
cmp.l.f0.0(16)  g116<1>F        (abs)g94<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $8.dst compacted };
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
mov(16)         g116<1>UD       0x00000000UD                    { align1 1H F@1 };

LABEL7:
endif(16)       JIP:  LABEL9                                    { align1 1H };

LABEL9:
else(16)        JIP:  LABEL5          UIP:  LABEL5              { align1 1H };

LABEL6:
mov(16)         g116<1>UD       0x00000000UD                    { align1 1H A@1 };

LABEL5:
endif(16)       JIP:  LABEL10                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g95UD           g56UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
cmp.l.f0.0(16)  null<1>F        (abs)g95<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $9.dst compacted };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
add(16)         g97<1>D         g65<1,1,0>D     144D            { align1 1H $8.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
cmp.l.f0.0(16)  g99<1>UD        g97<1,1,0>UD    0x00000090UD    { align1 1H I@1 compacted };
mov(8)          g104<2>UD       g97<4,4,1>UD                    { align1 1Q };
mov(8)          g106<2>UD       g98<4,4,1>UD                    { align1 2Q };
add(16)         g101<1>D        -g99<1,1,0>D    g67<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g104.1<2>UD     g101<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g106.1<2>UD     g102<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g102UD          g104UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
cmp.l.f0.0(16)  null<1>F        (abs)g102<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $10.dst compacted };
(+f0.0) if(16)  JIP:  LABEL14         UIP:  LABEL13             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g103<1>D        g65<1,1,0>D     148D            { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
cmp.l.f0.0(16)  g105<1>UD       g103<1,1,0>UD   0x00000094UD    { align1 1H I@1 compacted };
mov(8)          g123<2>UD       g103<4,4,1>UD                   { align1 1Q };
mov(8)          g125<2>UD       g104<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g107<1>D        -g105<1,1,0>D   g67<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g123.1<2>UD     g107<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g125.1<2>UD     g108<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g108UD          g123UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $11 };
cmp.l.f0.0(16)  g114<1>F        (abs)g108<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $11.dst compacted };
else(16)        JIP:  LABEL13         UIP:  LABEL13             { align1 1H };

LABEL14:
mov(16)         g114<1>UD       0x00000000UD                    { align1 1H F@1 };

LABEL13:
endif(16)       JIP:  LABEL15                                   { align1 1H };

LABEL15:
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
mov(16)         g114<1>UD       0x00000000UD                    { align1 1H A@1 };

LABEL11:
endif(16)       JIP:  LABEL10                                   { align1 1H };
cmp.nz.f0.0(16) g109<1>D        g121<1,1,0>D    0D              { align1 1H F@1 compacted };
and(16)         g111<1>UD       g109<1,1,0>UD   g114<1,1,0>UD   { align1 1H A@1 compacted };
or(16)          g123<1>D        ~g109<1,1,0>D   ~g114<1,1,0>D   { align1 1H $11.src compacted };
and.nz.f0.0(16) null<1>UD       g111<8,8,1>UD   g116<8,8,1>UD   { align1 1H A@2 };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL16             { align1 1H };
add(16)         g125<1>D        g65<1,1,0>D     132D            { align1 1H $11.src compacted };
add(16)         g7<1>D          g65<1,1,0>D     144D            { align1 1H compacted };
add(16)         g98<1>D         g16<1,1,0>D     16D             { align1 1H $8.src compacted };
add(16)         g110<1>D        g16<1,1,0>D     32D             { align1 1H compacted };
cmp.l.f0.0(16)  g4<1>UD         g125<1,1,0>UD   0x00000084UD    { align1 1H I@4 compacted };
mov(8)          g28<2>UD        g7<4,4,1>UD                     { align1 1Q I@4 };
mov(8)          g30<2>UD        g8<4,4,1>UD                     { align1 2Q I@5 };
mov(8)          g57<2>UD        g125<4,4,1>UD                   { align1 1Q $9.src };
mov(8)          g59<2>UD        g126<4,4,1>UD                   { align1 2Q $9.src };
cmp.l.f0.0(16)  g9<1>UD         g7<1,1,0>UD     0x00000090UD    { align1 1H compacted };
mov(8)          g69<2>UD        g110<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g71<2>UD        g111<4,4,1>UD                   { align1 2Q I@7 };
cmp.l.f0.0(16)  g100<1>UD       g98<1,1,0>UD    g16<1,1,0>UD    { align1 1H I@7 compacted };
add(16)         g6<1>D          -g4<1,1,0>D     g67<1,1,0>D     { align1 1H I@7 compacted };
cmp.l.f0.0(16)  g114<1>UD       g110<1,1,0>UD   g16<1,1,0>UD    { align1 1H compacted };
add(16)         g20<1>D         -g9<1,1,0>D     g67<1,1,0>D     { align1 1H I@6 compacted };
mov(16)         g10<1>UD        0x000000c0UD                    { align1 1H };
add(16)         g102<1>D        -g100<1,1,0>D   g18<1,1,0>D     { align1 1H A@1 compacted };
mov(8)          g59.1<2>UD      g7<4,4,1>UD                     { align1 2Q I@5 };
mov(8)          g57.1<2>UD      g6<4,4,1>UD                     { align1 1Q I@6 };
add(16)         g118<1>D        -g114<1,1,0>D   g18<1,1,0>D     { align1 1H I@6 compacted };
mov(8)          g28.1<2>UD      g20<4,4,1>UD                    { align1 1Q I@6 };
mov(8)          g30.1<2>UD      g21<4,4,1>UD                    { align1 2Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g20UD           g57UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $12 };
mov(8)          g69.1<2>UD      g118<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g71.1<2>UD      g119<4,4,1>UD                   { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g24UD           g28UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
send(16)        g28UD           g61UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g44UD           g69UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $15 };
sel.ge(16)      g65<1>F         g24<1,1,0>F     g26<1,1,0>F     { align1 1H $13.dst compacted };
add(16)         g53<1>F         g24<1,1,0>F     g20<1,1,0>F     { align1 1H $12.dst compacted };
sel.ge(16)      g73<1>F         g95<1,1,0>F     g65<1,1,0>F     { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mul(16)         g58<1>F         g53<1,1,0>F     0x3f000000F  /* 0.5F */ { align1 1H F@2 compacted };
add(16)         g52<1>F         g95<1,1,0>F     g81<1,1,0>F     { align1 1H compacted };
add(16)         g54<1>F         g26<1,1,0>F     g22<1,1,0>F     { align1 1H $12.dst compacted };
mul(16)         g75<1>F         g73<1,1,0>F     0x34000000F  /* 1.19209e-07F */ { align1 1H F@4 compacted };
mov(8)          g65<2>UD        g98<4,4,1>UD                    { align1 1Q F@5 };
mov(8)          g67<2>UD        g99<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mul(16)         g91<1>F         g58<1,1,0>F     g30<1,1,0>F     { align1 1H @4 $14.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
mul(16)         g119<1>F        g58<1,1,0>F     g46<1,1,0>F     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mul(16)         g56<1>F         g52<1,1,0>F     0x3f000000F  /* 0.5F */ { align1 1H F@5 compacted };
add(16)         g78<1>F         g24<1,1,0>F     g75<1,1,0>F     { align1 1H F@4 compacted };
mov(8)          g65.1<2>UD      g102<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g67.1<2>UD      g103<4,4,1>UD                   { align1 2Q I@2 };
mad(16)         g125<1>F        g119<8,8,1>F    g44<8,8,1>F     g56<1,1,1>F { align1 1H @2 $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mad(16)         g93<1>F         g91<8,8,1>F     g28<8,8,1>F     g56<1,1,1>F { align1 1H @5 $14.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g85<1>F         g78<1,1,0>F     -g20<1,1,0>F    { align1 1H F@3 compacted };
mov(16)         g119<1>UD       0x00000001UD                    { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g36UD           g65UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $0 };
add(16)         g77<1>F         g95<1,1,0>F     g75<1,1,0>F     { align1 1H compacted };
add(16)         g79<1>F         g26<1,1,0>F     g75<1,1,0>F     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mul(16)         g89<1>F         g85<1,1,0>F     0x3f000000F  /* 0.5F */ { align1 1H F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g83<1>F         g77<1,1,0>F     -g81<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g86<1>F         g79<1,1,0>F     -g22<1,1,0>F    { align1 1H F@3 compacted };
mul(16)         g21<1>F         g89<1,1,0>F     (abs)g30<1,1,0>F { align1 1H F@3 compacted };
mul(16)         g61<1>F         g89<1,1,0>F     (abs)g46<1,1,0>F { align1 1H $14.src compacted };
mul(16)         g26<1>F         g89<1,1,0>F     (abs)g38<1,1,0>F { align1 1H $0.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mul(16)         g103<1>F        g58<1,1,0>F     g38<1,1,0>F     { align1 1H I@2 compacted };
mul(16)         g88<1>F         g83<1,1,0>F     0x3f000000F  /* 0.5F */ { align1 1H F@6 compacted };
mul(16)         g90<1>F         g86<1,1,0>F     0x3f000000F  /* 0.5F */ { align1 1H F@6 compacted };
mul(16)         g59<1>F         g54<1,1,0>F     0x3f000000F  /* 0.5F */ { align1 1H $12.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mad(16)         g105<1>F        g103<8,8,1>F    g36<8,8,1>F     g56<1,1,1>F { align1 1H @4 $0.dst };
mad(16)         g23<1>F         g21<8,8,1>F     (abs)g28<8,8,1>F g88<1,1,1>F { align1 1H F@4 };
mad(16)         g52<1>F         g26<8,8,1>F     (abs)g36<8,8,1>F g88<1,1,1>F { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mad(16)         g63<1>F         g61<8,8,1>F     (abs)g44<8,8,1>F g88<1,1,1>F { align1 1H F@7 };
mad(16)         g95<1>F         g93<8,8,1>F     g32<8,8,1>F     g59<1,1,1>F { align1 1H @5 $14.dst };
mad(16)         g4<1>F          g125<8,8,1>F    g48<8,8,1>F     g59<1,1,1>F { align1 1H $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mad(16)         g107<1>F        g105<8,8,1>F    g40<8,8,1>F     g59<1,1,1>F { align1 1H @6 $0.dst };
mad(16)         g25<1>F         g23<8,8,1>F     (abs)g32<8,8,1>F g90<1,1,1>F { align1 1H F@6 };
mad(16)         g54<1>F         g52<8,8,1>F     (abs)g40<8,8,1>F g90<1,1,1>F { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mad(16)         g65<1>F         g63<8,8,1>F     (abs)g48<8,8,1>F g90<1,1,1>F { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g97<1>F         g95<1,1,0>F     g34<1,1,0>F     { align1 1H A@5 compacted };
add(16)         g20<1>F         g4<1,1,0>F      g50<1,1,0>F     { align1 1H @6 $15.dst compacted };
add(16)         g109<1>F        g107<1,1,0>F    g42<1,1,0>F     { align1 1H @6 $0.dst compacted };
add(16)         g4<1>F          g97<1,1,0>F     g25<1,1,0>F     { align1 1H F@3 compacted };
add(16)         g70<1>F         g97<1,1,0>F     -g25<1,1,0>F    { align1 1H $15.src compacted };
add(16)         g74<1>F         g20<1,1,0>F     -g65<1,1,0>F    { align1 1H F@4 compacted };
add(16)         g8<1>F          g20<1,1,0>F     g65<1,1,0>F     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g72<1>F         g109<1,1,0>F    -g54<1,1,0>F    { align1 1H F@5 compacted };
add(16)         g6<1>F          g109<1,1,0>F    g54<1,1,0>F     { align1 1H compacted };
else(16)        JIP:  LABEL16         UIP:  LABEL16             { align1 1H };

LABEL17:
mov(16)         g119<1>UD       0x00000000UD                    { align1 1H I@2 };
mov(16)         g10<1>UD        0x00000000UD                    { align1 1H };

LABEL16:
endif(16)       JIP:  LABEL10                                   { align1 1H };
cmp.nz.f0.0(16) null<1>D        g116<8,8,1>D    0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
(+f0.0) sel(16) g66<1>UD        g123<8,8,1>UD   0xffffffffUD    { align1 1H A@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
cmp.nz.f0.0(16) g68<1>D         g3.2<0,1,0>D    0D              { align1 1H $0.src compacted };
and.nz.f0.0(16) null<1>UD       g68<8,8,1>UD    g66<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL18         UIP:  LABEL18             { align1 1H };
add(16)         g78<1>D         g16<1,1,0>D     12D             { align1 1H compacted };
add(16)         g83<1>D         g16<1,1,0>D     28D             { align1 1H $6.src compacted };
add(16)         g88<1>D         g16<1,1,0>D     44D             { align1 1H F@2 compacted };
mov(16)         g119<1>UD       0x00000001UD                    { align1 1H };
mov(16)         g121<1>UD       0x00000000UD                    { align1 1H };
cmp.l.f0.0(16)  g80<1>UD        g78<1,1,0>UD    g16<1,1,0>UD    { align1 1H A@2 compacted };
mov(8)          g29<2>UD        g78<4,4,1>UD                    { align1 1Q };
mov(8)          g31<2>UD        g79<4,4,1>UD                    { align1 2Q };
mov(8)          g33<2>UD        g83<4,4,1>UD                    { align1 1Q A@7 };
mov(8)          g35<2>UD        g84<4,4,1>UD                    { align1 2Q A@7 };
cmp.l.f0.0(16)  g85<1>UD        g83<1,1,0>UD    g16<1,1,0>UD    { align1 1H $6.src compacted };
mov(8)          g37<2>UD        g88<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g39<2>UD        g89<4,4,1>UD                    { align1 2Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(16)  g90<1>UD        g88<1,1,0>UD    g16<1,1,0>UD    { align1 1H F@7 compacted };
add(16)         g82<1>D         -g80<1,1,0>D    g18<1,1,0>D     { align1 1H A@2 compacted };
add(16)         g87<1>D         -g85<1,1,0>D    g18<1,1,0>D     { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g92<1>D         -g90<1,1,0>D    g18<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g29.1<2>UD      g82<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g31.1<2>UD      g83<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g33.1<2>UD      g87<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g35.1<2>UD      g88<4,4,1>UD                    { align1 2Q I@5 };
mov(8)          g37.1<2>UD      g92<4,4,1>UD                    { align1 1Q I@5 };
mov(8)          g39.1<2>UD      g93<4,4,1>UD                    { align1 2Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@5 };
send(16)        g4UD            g29UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g6UD            g33UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g8UD            g37UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mov(16)         g70<1>UD        g4<8,8,1>UD                     { align1 1H F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
mov(16)         g72<1>UD        g6<8,8,1>UD                     { align1 1H F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
mov(16)         g74<1>UD        g8<8,8,1>UD                     { align1 1H F@4 };

LABEL18:
endif(16)       JIP:  LABEL10                                   { align1 1H };

LABEL10:
else(16)        JIP:  LABEL3          UIP:  LABEL3              { align1 1H };

LABEL4:
mov(16)         g119<1>UD       0x00000000UD                    { align1 1H I@7 };
mov(16)         g10<1>UD        0x00000000UD                    { align1 1H I@7 };

LABEL3:
endif(16)       JIP:  LABEL19                                   { align1 1H };

LABEL19:
else(16)        JIP:  LABEL1          UIP:  LABEL1              { align1 1H };

LABEL2:
mov(16)         g119<1>UD       0x00000000UD                    { align1 1H I@4 };
mov(16)         g10<1>UD        0x00000000UD                    { align1 1H I@4 };
mov(16)         g121<1>UD       0x00000000UD                    { align1 1H I@7 };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g93<1>D         0D                              { align1 WE_all 1H A@2 };
mov(16)         g93<1>D         g119<8,8,1>D                    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g12<8,8,1>D     0D              { align1 1H };
add(8)          g93.1<2>D       g93<8,4,2>D     g93.1<8,4,2>D   { align1 WE_all 1Q I@2 };
add(4)          g93.2<4>D       g93.1<8,2,4>D   g93.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g93.3<4>D       g93.1<8,2,4>D   g93.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g93.4<1>D       g93.3<0,1,0>D   g93.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g94.4<1>D       g94.3<0,1,0>D   g94.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(8)          g94<1>D         g93.7<0,1,0>D   g94<1,1,0>D     { align1 WE_all 1Q I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL21         UIP:  LABEL20             { align1 1H };
add(16)         g95<1>D         g2<0,1,0>D      36D             { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
mov(16)         g42<1>D         g94.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
cmp.l.f0.0(16)  g97<1>UD        g95<1,1,0>UD    g2<0,1,0>UD     { align1 1H A@2 compacted };
mov(8)          g38<2>UD        g95<4,4,1>UD                    { align1 1Q $5.src };
mov(8)          g40<2>UD        g96<4,4,1>UD                    { align1 2Q $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g99<1>D         -g97<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g38.1<2>UD      g99<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g40.1<2>UD      g100<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g117UD          g38UD           g42UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $5 };
else(16)        JIP:  LABEL20         UIP:  LABEL20             { align1 1H };

LABEL21:
mov(16)         g117<1>UD       0x00000000UD                    { align1 1H $5.dst };

LABEL20:
endif(16)       JIP:  LABEL0                                    { align1 1H };
mov(16)         g102<1>D        0D                              { align1 WE_all 1H F@1 };
mov(16)         g102<1>D        g119<8,8,1>D                    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g119<8,8,1>D    0D              { align1 1H };
add(16)         g104<1>W        g113<16,16,1>UW -1W             { align1 WE_all 1H $10.src };
mov(16)         a0<1>UW         0x0cc0UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g104<8,8,1>W    0x0002UW        { align1 WE_all 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0cc0UW        { align1 WE_all 1H A@1 };
mov(16)         g100<1>UD       g[a0]<VxH,1,0>UD                { align1 WE_all 1H A@1 compacted };
mov(1)          g100<1>D        0D                              { align1 WE_all 1N I@1 };
add(8)          g100.1<2>D      g100<8,4,2>D    g100.1<8,4,2>D  { align1 WE_all 1Q I@1 };
add(4)          g100.2<4>D      g100.1<8,2,4>D  g100.2<8,2,4>D  { align1 WE_all 1N I@1 };
add(4)          g100.3<4>D      g100.1<8,2,4>D  g100.3<8,2,4>D  { align1 WE_all 1N I@1 };
add(4)          g100.4<1>D      g100.3<0,1,0>D  g100.4<4,4,1>D  { align1 WE_all 1N I@1 };
add(4)          g101.4<1>D      g101.3<0,1,0>D  g101.4<4,4,1>D  { align1 WE_all 1N I@2 };
add(8)          g101<1>D        g100.7<0,1,0>D  g101<1,1,0>D    { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g105<1>D        g117<0,1,0>D    g100<1,1,0>D    { align1 1H $10.src compacted };
(+f0.0) if(16)  JIP:  LABEL23         UIP:  LABEL22             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g74<1>UD        0x7f800000UD                    { align1 1H F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g72<1>UD        0x7f800000UD                    { align1 1H F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g70<1>UD        0x7f800000UD                    { align1 1H F@5 };
mov(16)         g8<1>UD         0xff800000UD                    { align1 1H F@3 };
mov(16)         g6<1>UD         0xff800000UD                    { align1 1H F@1 };
mov(16)         g4<1>UD         0xff800000UD                    { align1 1H F@6 };
mov(16)         g16<1>UD        0x7f800000UD                    { align1 1H };
mov(16)         g125<1>UD       0x7f800000UD                    { align1 1H $11.src };
mov(16)         g123<1>UD       0x7f800000UD                    { align1 1H };
mov(16)         g22<1>UD        0xff800000UD                    { align1 1H };
mov(16)         g20<1>UD        0xff800000UD                    { align1 1H F@3 };
mov(16)         g18<1>UD        0xff800000UD                    { align1 1H };
else(16)        JIP:  LABEL22         UIP:  LABEL22             { align1 1H };

LABEL23:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
shl(16)         g107<1>D        g105<8,8,1>D    0x00000005UD    { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g110<1>D        g2.6<0,1,0>D    g107<1,1,0>D    { align1 1H A@1 compacted };
shr(16)         g108<1>UD       g105<1,1,0>UD   0x0000001bUD    { align1 1H F@1 compacted };
shl(16)         g106<1>D        g121<8,8,1>D    0x00000018UD    { align1 1H };
cmp.l.f0.0(16)  g112<1>UD       g110<1,1,0>UD   g2.6<0,1,0>UD   { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g43<2>UD        g110<4,4,1>UD                   { align1 1Q F@7 };
mov(8)          g45<2>UD        g111<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
or(16)          g76<1>UD        g14<1,1,0>UD    g106<1,1,0>UD   { align1 1H I@4 compacted };
add3(16)        g114<1>D        g2.7<0,1,0>D    g108<8,8,1>D    -g112<1,1,1>D { align1 1H I@4 };
mov(8)          g45.1<2>UD      g115<4,4,1>UD                   { align1 2Q I@1 };
mov(8)          g43.1<2>UD      g114<4,4,1>UD                   { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g43UD           g70UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $5 };
add(16)         g116<1>D        g110<1,1,0>D    16D             { align1 1H compacted };
cmp.l.f0.0(16)  g118<1>UD       g116<1,1,0>UD   g110<1,1,0>UD   { align1 1H @1 $5.dst compacted };
mov(8)          g44<2>UD        g116<4,4,1>UD                   { align1 1Q $5.src };
mov(8)          g46<2>UD        g117<4,4,1>UD                   { align1 2Q $5.src };
add(16)         g120<1>D        -g118<1,1,0>D   g114<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g46.1<2>UD      g121<4,4,1>UD                   { align1 2Q I@1 };
mov(8)          g44.1<2>UD      g120<4,4,1>UD                   { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g44UD           g4UD            0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g18<1>F         g70<1,1,0>F     g4<1,1,0>F      { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g20<1>F         g72<1,1,0>F     g6<1,1,0>F      { align1 1H F@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g22<1>F         g74<1,1,0>F     g8<1,1,0>F      { align1 1H $5.src compacted };
mov(16)         g123<1>UD       g18<8,8,1>UD                    { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g125<1>UD       g20<8,8,1>UD                    { align1 1H F@2 };
mov(16)         g16<1>UD        g22<8,8,1>UD                    { align1 1H F@1 };

LABEL22:
endif(16)       JIP:  LABEL0                                    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g12<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g45<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H F@3 compacted };
mov(16)         g45<1>F         g70<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g47<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H F@3 compacted };
mov(16)         g47<1>F         g72<1,1,0>F                     { align1 1H compacted };
mov(16)         g49<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H F@3 compacted };
mov(16)         g49<1>F         g74<1,1,0>F                     { align1 1H compacted };
mov(16)         g51<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g51<1>F         g4<1,1,0>F                      { align1 1H compacted };
mov(16)         g53<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H F@5 compacted };
mov(16)         g53<1>F         g6<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g55<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H F@6 compacted };
mov(16)         g55<1>F         g8<1,1,0>F                      { align1 1H compacted };
mov(16)         g121<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@5 compacted };
mov(16)         g121<1>F        g123<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g119<2>UD       g45.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
mov(16)         g3<1>F          0xff800000F      /* -infF */    { align1 WE_all 1H I@5 compacted };
mov(16)         g3<1>F          g18<1,1,0>F                     { align1 1H compacted };
mov(16)         g5<1>F          0xff800000F      /* -infF */    { align1 WE_all 1H I@5 compacted };
mov(16)         g5<1>F          g20<1,1,0>F                     { align1 1H compacted };
mov(8)          g24<2>UD        g47.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
mov(16)         g7<1>F          0xff800000F      /* -infF */    { align1 WE_all 1H I@5 compacted };
mov(16)         g7<1>F          g22<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g37<2>UD        g49.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
mov(16)         g123<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@7 compacted };
mov(16)         g123<1>F        g125<1,1,0>F                    { align1 1H compacted };
mov(8)          g62<2>UD        g51.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
mov(8)          g111<2>UD       g55.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g75<2>UD        g53.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sel.l(8)        g117<2>F        g45<8,4,2>F     g119<8,4,2>F    { align1 WE_all 1Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g31<2>UD        g3.1<8,4,2>UD                   { align1 WE_all 1Q F@5 };
mov(16)         g125<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@7 compacted };
mov(16)         g125<1>F        g16<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g39<2>UD        g5.1<8,4,2>UD                   { align1 WE_all 1Q F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g57<2>UD        g7.1<8,4,2>UD                   { align1 WE_all 1Q F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g9<2>UD         g121.1<8,4,2>UD                 { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.l(8)        g35<2>F         g49<8,4,2>F     g37<8,4,2>F     { align1 WE_all 1Q I@7 };
mov(8)          g14<2>UD        g123.1<8,4,2>UD                 { align1 WE_all 1Q F@4 };
sel.ge(8)       g60<2>F         g51<8,4,2>F     g62<8,4,2>F     { align1 WE_all 1Q I@7 };
sel.ge(8)       g109<2>F        g55<8,4,2>F     g111<8,4,2>F    { align1 WE_all 1Q I@7 };
sel.l(8)        g19<2>F         g47<8,4,2>F     g24<8,4,2>F     { align1 WE_all 1Q I@7 };
sel.ge(8)       g73<2>F         g53<8,4,2>F     g75<8,4,2>F     { align1 WE_all 1Q I@6 };
mov(8)          g45.1<2>UD      g117<8,4,2>UD                   { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.ge(8)       g29<2>F         g3<8,4,2>F      g31<8,4,2>F     { align1 WE_all 1Q I@6 };
mov(8)          g26<2>UD        g125.1<8,4,2>UD                 { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.ge(8)       g42<2>F         g7<8,4,2>F      g57<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.l(8)        g115<2>F        g121<8,4,2>F    g9<8,4,2>F      { align1 WE_all 1Q I@4 };
mov(8)          g49.1<2>UD      g35<8,4,2>UD                    { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.l(8)        g12<2>F         g123<8,4,2>F    g14<8,4,2>F     { align1 WE_all 1Q I@4 };
mov(8)          g51.1<2>UD      g60<8,4,2>UD                    { align1 WE_all 1Q F@7 };
mov(8)          g55.1<2>UD      g109<8,4,2>UD                   { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g47.1<2>UD      g19<8,4,2>UD                    { align1 WE_all 1Q F@6 };
mov(8)          g53.1<2>UD      g73<8,4,2>UD                    { align1 WE_all 1Q F@5 };
mov(8)          g3.1<2>UD       g29<8,4,2>UD                    { align1 WE_all 1Q F@4 };
sel.l(8)        g17<2>F         g125<8,4,2>F    g26<8,4,2>F     { align1 WE_all 1Q I@7 };
mov(8)          g7.1<2>UD       g42<8,4,2>UD                    { align1 WE_all 1Q F@4 };
mov(8)          g121.1<2>UD     g115<8,4,2>UD                   { align1 WE_all 1Q F@3 };
mov(8)          g123.1<2>UD     g12<8,4,2>UD                    { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g67<4>UD        g51.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g65<4>UD        g51.1<8,2,4>UD                  { align1 WE_all 1N $2.src };
mov(4)          g71<4>UD        g55.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g93<4>UD        g53.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g87<4>UD        g53.1<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g34<2>F         g5<8,4,2>F      g39<8,4,2>F     { align1 WE_all 1Q $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g97<4>UD        g3.2<8,2,4>UD                   { align1 WE_all 1N I@7 };
mov(4)          g95<4>UD        g3.1<8,2,4>UD                   { align1 WE_all 1N };
mov(8)          g125.1<2>UD     g17<8,4,2>UD                    { align1 WE_all 1Q F@2 };
mov(4)          g109<4>UD       g7.2<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g107<4>UD       g7.1<8,2,4>UD                   { align1 WE_all 1N $10.src };
mov(4)          g79<4>UD        g121.2<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g77<4>UD        g121.1<8,2,4>UD                 { align1 WE_all 1N $5.src };
mov(4)          g73<4>UD        g55.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g85<4>UD        g123.2<8,2,4>UD                 { align1 WE_all 1N $6.src };
mov(4)          g83<4>UD        g123.1<8,2,4>UD                 { align1 WE_all 1N $6.src };
mov(4)          g29<4>UD        g47.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g63<4>F         g65<8,2,4>F     g67<8,2,4>F     { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g27<4>UD        g47.1<8,2,4>UD                  { align1 WE_all 1N F@3 };
mov(4)          g42<4>UD        g49.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g81<4>F         g87<8,2,4>F     g93<8,2,4>F     { align1 WE_all 1N };
mov(8)          g5.1<2>UD       g34<8,4,2>UD                    { align1 WE_all 1Q F@3 };
mov(4)          g11<4>UD        g45.1<8,2,4>UD                  { align1 WE_all 1N $3.src };
mov(4)          g13<4>UD        g45.2<8,2,4>UD                  { align1 WE_all 1N F@5 };
sel.ge(4)       g32<4>F         g95<8,2,4>F     g97<8,2,4>F     { align1 WE_all 1N $2.src };
mov(4)          g91<4>UD        g125.2<8,2,4>UD                 { align1 WE_all 1N $7.src };
mov(4)          g89<4>UD        g125.1<8,2,4>UD                 { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.ge(4)       g58<4>F         g107<8,2,4>F    g109<8,2,4>F    { align1 WE_all 1N $9.src };
sel.ge(4)       g112<4>F        g71<8,2,4>F     g73<8,2,4>F     { align1 WE_all 1N };
sel.l(4)        g15<4>F         g83<8,2,4>F     g85<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g51.2<4>UD      g63<8,2,4>UD                    { align1 WE_all 1N F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g40<4>UD        g49.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(4)        g25<4>F         g27<8,2,4>F     g29<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g53.2<4>UD      g81<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g103<4>UD       g5.2<8,2,4>UD                   { align1 WE_all 1N I@7 };
mov(4)          g101<4>UD       g5.1<8,2,4>UD                   { align1 WE_all 1N };
sel.l(4)        g9<4>F          g11<8,2,4>F     g13<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g3.2<4>UD       g32<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g7.2<4>UD       g58<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g55.2<4>UD      g112<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g123.2<4>UD     g15<8,2,4>UD                    { align1 WE_all 1N F@3 };
sel.l(4)        g38<4>F         g40<8,2,4>F     g42<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g47.2<4>UD      g25<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g108<4>UD       g53.3<8,2,4>UD                  { align1 WE_all 1N A@6 };
mov(4)          g70<4>UD        g51.1<8,2,4>UD                  { align1 WE_all 1N F@5 };
mov(4)          g72<4>UD        g51.3<8,2,4>UD                  { align1 WE_all 1N F@5 };
mov(4)          g45.2<4>UD      g9<8,2,4>UD                     { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g98<4>UD        g3.1<8,2,4>UD                   { align1 WE_all 1N A@7 };
mov(4)          g110<4>UD       g7.1<8,2,4>UD                   { align1 WE_all 1N A@6 };
mov(4)          g74<4>UD        g55.1<8,2,4>UD                  { align1 WE_all 1N A@5 };
sel.l(4)        g27<4>F         g89<8,2,4>F     g91<8,2,4>F     { align1 WE_all 1N };
mov(4)          g86<4>UD        g123.1<8,2,4>UD                 { align1 WE_all 1N A@5 };
mov(4)          g49.2<4>UD      g38<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g34<4>UD        g47.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g32<4>UD        g47.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g112<4>UD       g7.3<8,2,4>UD                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.ge(4)       g68<4>F         g70<8,2,4>F     g72<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g18<4>UD        g45.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g16<4>UD        g45.1<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g40<4>F         g101<8,2,4>F    g103<8,2,4>F    { align1 WE_all 1N };
mov(4)          g125.2<4>UD     g27<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g59<4>UD        g49.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g57<4>UD        g49.1<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g30<4>F         g32<8,2,4>F     g34<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g10<4>F         g77<8,2,4>F     g79<8,2,4>F     { align1 WE_all 1N };
mov(4)          g51.3<4>UD      g68<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g88<4>UD        g123.3<8,2,4>UD                 { align1 WE_all 1N F@5 };
sel.l(4)        g14<4>F         g16<8,2,4>F     g18<8,2,4>F     { align1 WE_all 1N I@6 };
mov(4)          g5.2<4>UD       g40<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g94<4>UD        g125.3<8,2,4>UD                 { align1 WE_all 1N I@6 };
mov(4)          g92<4>UD        g125.1<8,2,4>UD                 { align1 WE_all 1N F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.l(4)        g43<4>F         g57<8,2,4>F     g59<8,2,4>F     { align1 WE_all 1N I@6 };
mov(4)          g47.3<4>UD      g30<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g100<4>UD       g3.3<8,2,4>UD                   { align1 WE_all 1N F@5 };
mov(4)          g102<4>UD       g53.1<8,2,4>UD                  { align1 WE_all 1N F@5 };
mov(4)          g121.2<4>UD     g10<8,2,4>UD                    { align1 WE_all 1N F@3 };
sel.ge(4)       g51.4<1>F       g51.3<0,1,0>F   g51.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.ge(4)       g52.4<1>F       g52.3<0,1,0>F   g52.4<4,4,1>F   { align1 WE_all 1N I@7 };
mov(4)          g45.3<4>UD      g14<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g106<4>UD       g5.3<8,2,4>UD                   { align1 WE_all 1N I@7 };
mov(4)          g104<4>UD       g5.1<8,2,4>UD                   { align1 WE_all 1N F@7 };
mov(4)          g76<4>UD        g55.3<8,2,4>UD                  { align1 WE_all 1N F@5 };
sel.l(4)        g28<4>F         g92<8,2,4>F     g94<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g49.3<4>UD      g43<8,2,4>UD                    { align1 WE_all 1N F@4 };
sel.l(4)        g47.4<1>F       g47.3<0,1,0>F   g47.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.l(4)        g48.4<1>F       g48.3<0,1,0>F   g48.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.ge(4)       g33<4>F         g98<8,2,4>F     g100<8,2,4>F    { align1 WE_all 1N I@7 };
sel.l(4)        g16<4>F         g86<8,2,4>F     g88<8,2,4>F     { align1 WE_all 1N };
sel.ge(4)       g96<4>F         g102<8,2,4>F    g108<8,2,4>F    { align1 WE_all 1N I@7 };
mov(4)          g82<4>UD        g121.3<8,2,4>UD                 { align1 WE_all 1N I@6 };
mov(4)          g80<4>UD        g121.1<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(8)       g52<1>F         g51.7<0,1,0>F   g52<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(4)       g59<4>F         g110<8,2,4>F    g112<8,2,4>F    { align1 WE_all 1N };
sel.l(4)        g45.4<1>F       g45.3<0,1,0>F   g45.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.l(4)        g46.4<1>F       g46.3<0,1,0>F   g46.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.ge(4)       g41<4>F         g104<8,2,4>F    g106<8,2,4>F    { align1 WE_all 1N I@5 };
sel.ge(4)       g114<4>F        g74<8,2,4>F     g76<8,2,4>F     { align1 WE_all 1N I@4 };
mov(4)          g125.3<4>UD     g28<8,2,4>UD                    { align1 WE_all 1N };
sel.l(4)        g49.4<1>F       g49.3<0,1,0>F   g49.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g50.4<1>F       g50.3<0,1,0>F   g50.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(8)        g48<1>F         g47.7<0,1,0>F   g48<8,8,1>F     { align1 WE_all 1Q };
mov(4)          g3.3<4>UD       g33<8,2,4>UD                    { align1 WE_all 1N };
mov(4)          g123.3<4>UD     g16<8,2,4>UD                    { align1 WE_all 1N };
mov(4)          g53.3<4>UD      g96<8,2,4>UD                    { align1 WE_all 1N F@7 };
sel.l(4)        g11<4>F         g80<8,2,4>F     g82<8,2,4>F     { align1 WE_all 1N I@5 };
mov(4)          g7.3<4>UD       g59<8,2,4>UD                    { align1 WE_all 1N F@7 };
sel.l(8)        g46<1>F         g45.7<0,1,0>F   g46<8,8,1>F     { align1 WE_all 1Q F@7 };
mov(4)          g5.3<4>UD       g41<8,2,4>UD                    { align1 WE_all 1N F@7 };
mov(4)          g55.3<4>UD      g114<8,2,4>UD                   { align1 WE_all 1N F@6 };
sel.l(4)        g125.4<1>F      g125.3<0,1,0>F  g125.4<4,4,1>F  { align1 WE_all 1N I@7 };
sel.l(4)        g126.4<1>F      g126.3<0,1,0>F  g126.4<4,4,1>F  { align1 WE_all 1N I@7 };
sel.l(8)        g50<1>F         g49.7<0,1,0>F   g50<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.ge(4)       g3.4<1>F        g3.3<0,1,0>F    g3.4<4,4,1>F    { align1 WE_all 1N I@6 };
sel.ge(4)       g4.4<1>F        g4.3<0,1,0>F    g4.4<4,4,1>F    { align1 WE_all 1N I@6 };
sel.l(4)        g123.4<1>F      g123.3<0,1,0>F  g123.4<4,4,1>F  { align1 WE_all 1N I@5 };
sel.l(4)        g124.4<1>F      g124.3<0,1,0>F  g124.4<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g53.4<1>F       g53.3<0,1,0>F   g53.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g54.4<1>F       g54.3<0,1,0>F   g54.4<4,4,1>F   { align1 WE_all 1N I@4 };
mov(4)          g121.3<4>UD     g11<8,2,4>UD                    { align1 WE_all 1N };
sel.ge(4)       g7.4<1>F        g7.3<0,1,0>F    g7.4<4,4,1>F    { align1 WE_all 1N I@4 };
sel.ge(4)       g8.4<1>F        g8.3<0,1,0>F    g8.4<4,4,1>F    { align1 WE_all 1N I@4 };
sel.ge(4)       g5.4<1>F        g5.3<0,1,0>F    g5.4<4,4,1>F    { align1 WE_all 1N I@3 };
sel.ge(4)       g6.4<1>F        g6.3<0,1,0>F    g6.4<4,4,1>F    { align1 WE_all 1N I@3 };
sel.ge(4)       g55.4<1>F       g55.3<0,1,0>F   g55.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g56.4<1>F       g56.3<0,1,0>F   g56.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(8)        g126<1>F        g125.7<0,1,0>F  g126<8,8,1>F    { align1 WE_all 1Q };
sel.ge(8)       g4<1>F          g3.7<0,1,0>F    g4<8,8,1>F      { align1 WE_all 1Q };
sel.l(8)        g124<1>F        g123.7<0,1,0>F  g124<8,8,1>F    { align1 WE_all 1Q };
sel.ge(8)       g54<1>F         g53.7<0,1,0>F   g54<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.l(4)        g121.4<1>F      g121.3<0,1,0>F  g121.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g122.4<1>F      g122.3<0,1,0>F  g122.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g8<1>F          g7.7<0,1,0>F    g8<8,8,1>F      { align1 WE_all 1Q };
sel.ge(8)       g6<1>F          g5.7<0,1,0>F    g6<8,8,1>F      { align1 WE_all 1Q F@7 };
sel.ge(8)       g56<1>F         g55.7<0,1,0>F   g56<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.l(8)        g122<1>F        g121.7<0,1,0>F  g122<8,8,1>F    { align1 WE_all 1Q F@4 };
(+f0.0) if(16)  JIP:  LABEL24         UIP:  LABEL24             { align1 1H };
add(16)         g9<1>D          g2.2<0,1,0>D    128D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
mov(16)         g61<1>D         g46.7<0,1,0>D                   { align1 1H };
cmp.l.f0.0(16)  g11<1>UD        g9<1,1,0>UD     g2.2<0,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g57<2>UD        g9<4,4,1>UD                     { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@7 };
mov(8)          g59<2>UD        g10<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g13<1>D         -g11<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
mov(8)          g57.1<2>UD      g13<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g59.1<2>UD      g14<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g57UD           g61UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };
add(16)         g14<1>D         g2.2<0,1,0>D    132D            { align1 1H compacted };
mov(16)         g66<1>D         g48.7<0,1,0>D                   { align1 1H };
cmp.l.f0.0(16)  g16<1>UD        g14<1,1,0>UD    0x00000084UD    { align1 1H I@2 compacted };
mov(8)          g62<2>UD        g14<4,4,1>UD                    { align1 1Q $4.src };
mov(8)          g64<2>UD        g15<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g18<1>D         -g16<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
mov(8)          g62.1<2>UD      g18<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g64.1<2>UD      g19<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g62UD           g66UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $2 };
add(16)         g19<1>D         g2.2<0,1,0>D    136D            { align1 1H compacted };
mov(16)         g71<1>D         g50.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g21<1>UD        g19<1,1,0>UD    0x00000088UD    { align1 1H compacted };
mov(8)          g67<2>UD        g19<4,4,1>UD                    { align1 1Q $2.src };
mov(8)          g69<2>UD        g20<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g23<1>D         -g21<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
mov(8)          g67.1<2>UD      g23<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g69.1<2>UD      g24<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g67UD           g71UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $2 };
add(16)         g24<1>D         g2.2<0,1,0>D    140D            { align1 1H compacted };
mov(16)         g76<1>D         g52.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g26<1>UD        g24<1,1,0>UD    0x0000008cUD    { align1 1H compacted };
mov(8)          g72<2>UD        g24<4,4,1>UD                    { align1 1Q $2.src };
mov(8)          g74<2>UD        g25<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g28<1>D         -g26<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
mov(8)          g72.1<2>UD      g28<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g74.1<2>UD      g29<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g72UD           g76UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $5 };
add(16)         g29<1>D         g2.2<0,1,0>D    144D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
mov(16)         g81<1>D         g54.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g31<1>UD        g29<1,1,0>UD    0x00000090UD    { align1 1H compacted };
mov(8)          g77<2>UD        g29<4,4,1>UD                    { align1 1Q $5.src };
mov(8)          g79<2>UD        g30<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g33<1>D         -g31<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
mov(8)          g77.1<2>UD      g33<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g79.1<2>UD      g34<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g77UD           g81UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };
add(16)         g34<1>D         g2.2<0,1,0>D    148D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
mov(16)         g86<1>D         g56.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g36<1>UD        g34<1,1,0>UD    0x00000094UD    { align1 1H compacted };
mov(8)          g82<2>UD        g34<4,4,1>UD                    { align1 1Q $6.src };
mov(8)          g84<2>UD        g35<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g38<1>D         -g36<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
mov(8)          g82.1<2>UD      g38<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g84.1<2>UD      g39<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g82UD           g86UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g91<1>D         g122.7<0,1,0>D                  { align1 1H };
mov(8)          g87.1<2>D       g2.1<0,1,0>D                    { align1 1Q $7.src };
mov(8)          g89.1<2>D       g2.1<0,1,0>D                    { align1 2Q };
mov(8)          g87<2>D         g2<0,1,0>D                      { align1 1Q I@2 };
mov(8)          g89<2>D         g2<0,1,0>D                      { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g87UD           g91UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };
add(16)         g39<1>D         g2<0,1,0>D      4D              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
mov(16)         g96<1>D         g124.7<0,1,0>D                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g41<1>UD        g39<1,1,0>UD    g2<0,1,0>UD     { align1 1H compacted };
mov(8)          g92<2>UD        g39<4,4,1>UD                    { align1 1Q $8.src };
mov(8)          g94<2>UD        g40<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g43<1>D         -g41<1,1,0>D    g2.1<0,1,0>D    { align1 1H compacted };
mov(8)          g92.1<2>UD      g43<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g94.1<2>UD      g44<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g92UD           g96UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $9 };
add(16)         g44<1>D         g2<0,1,0>D      8D              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
mov(16)         g101<1>D        g126.7<0,1,0>D                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g46<1>UD        g44<1,1,0>UD    g2<0,1,0>UD     { align1 1H compacted };
mov(8)          g97<2>UD        g44<4,4,1>UD                    { align1 1Q $9.src };
mov(8)          g99<2>UD        g45<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g48<1>D         -g46<1,1,0>D    g2.1<0,1,0>D    { align1 1H compacted };
mov(8)          g97.1<2>UD      g48<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g99.1<2>UD      g49<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g97UD           g101UD          0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $10 };
add(16)         g49<1>D         g2<0,1,0>D      16D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
mov(16)         g106<1>D        g4.7<0,1,0>D                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g51<1>UD        g49<1,1,0>UD    g2<0,1,0>UD     { align1 1H compacted };
mov(8)          g102<2>UD       g49<4,4,1>UD                    { align1 1Q $10.src };
mov(8)          g104<2>UD       g50<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
add(16)         g53<1>D         -g51<1,1,0>D    g2.1<0,1,0>D    { align1 1H compacted };
mov(8)          g102.1<2>UD     g53<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g104.1<2>UD     g54<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g102UD          g106UD          0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
add(16)         g54<1>D         g2<0,1,0>D      20D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@3 };
mov(16)         g111<1>D        g6.7<0,1,0>D                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g56<1>UD        g54<1,1,0>UD    0x00000014UD    { align1 1H I@2 compacted };
mov(8)          g107<2>UD       g54<4,4,1>UD                    { align1 1Q $11.src };
mov(8)          g109<2>UD       g55<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g58<1>D         -g56<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g107.1<2>UD     g58<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g109.1<2>UD     g59<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g107UD          g111UD          0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $12 };
add(16)         g59<1>D         g2<0,1,0>D      24D             { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
mov(16)         g116<1>D        g8.7<0,1,0>D                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g61<1>UD        g59<1,1,0>UD    0x00000018UD    { align1 1H I@2 compacted };
mov(8)          g112<2>UD       g59<4,4,1>UD                    { align1 1Q $12.src };
mov(8)          g114<2>UD       g60<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g63<1>D         -g61<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g114.1<2>UD     g64<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g112.1<2>UD     g63<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g112UD          g116UD          0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $13 };

LABEL24:
endif(16)       JIP:  LABEL0                                    { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL25                                   { align1 1H };

LABEL25:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q F@7 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_indirect_code[] = {
    0x80000065, 0x3c058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x40050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa003c0c, 0x00340000,
    0xe23d3040, 0x04013c03, 0x80030061, 0x71054410,
    0x00000000, 0x76543210, 0x00041b69, 0x19058660,
    0x02464005, 0x00000004, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa003d0c, 0x00300000, 0x64711a40, 0x00807195,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x0c050160, 0x00467105, 0x00000000,
    0xe0171965, 0x00f00c03, 0xa00e1940, 0x19001702,
    0x80102101, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x44260660, 0x00000324, 0x00000000,
    0x00030061, 0x42260660, 0x00000324, 0x00000000,
    0x00131a61, 0x44060660, 0x00000304, 0x00000000,
    0x00031a61, 0x42060660, 0x00000304, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x1a140000, 0xfb044224, 0x00040000,
    0x0004d270, 0x00010220, 0x52460e05, 0x00461a05,
    0x01040022, 0x0001c060, 0x00002be8, 0x00002be8,
    0xa01b0040, 0x00410303, 0x00040069, 0x27058660,
    0x02460e05, 0x00000003, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x271d1a70, 0x03101b03,
    0x00033261, 0x43060220, 0x00341b05, 0x00000000,
    0x00133261, 0x45060220, 0x00341c05, 0x00000000,
    0xa01f1b40, 0x03121d12, 0x00031961, 0x43260220,
    0x00341f05, 0x00000000, 0x00131a61, 0x45260220,
    0x00342005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x20140000,
    0xfb044324, 0x00040000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa0222340, 0x2001025a,
    0xa02a1940, 0x27002202, 0x27240070, 0x0210220b,
    0xe0280068, 0x01d00e03, 0x272c1b70, 0x22002a03,
    0x00033361, 0x44060220, 0x00342a05, 0x00000000,
    0x00133361, 0x46060220, 0x00342b05, 0x00000000,
    0xa0261d40, 0x02122432, 0x00041952, 0x2e040e68,
    0x0e2e2605, 0x2c052805, 0x00131961, 0x46260220,
    0x00342f05, 0x00000000, 0x00031a61, 0x44260220,
    0x00342e05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x10240000,
    0xfb044424, 0x000c0000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00032461, 0x3d060220,
    0x00341005, 0x00000000, 0x00132461, 0x3f060220,
    0x00341105, 0x00000000, 0x00042466, 0x00010220,
    0x22461005, 0x00461205, 0x00031b61, 0x3d260220,
    0x00341205, 0x00000000, 0x00131b61, 0x3f260220,
    0x00341305, 0x00000000, 0x01040022, 0x0001c060,
    0x00000e80, 0x00000e50, 0xa02f0040, 0x03001003,
    0xa0350040, 0x03801003, 0x27311a70, 0x10002f03,
    0x27371a70, 0x10003503, 0x00033461, 0x45060220,
    0x00342f05, 0x00000000, 0x00133461, 0x47060220,
    0x00343005, 0x00000000, 0x00030061, 0x49060220,
    0x00343505, 0x00000000, 0x00130061, 0x4b060220,
    0x00343605, 0x00000000, 0xa0331e40, 0x12023102,
    0xa0391e40, 0x12023702, 0x00031a61, 0x45260220,
    0x00343305, 0x00000000, 0x00131b61, 0x47260220,
    0x00343405, 0x00000000, 0x00031b61, 0x49260220,
    0x00343905, 0x00000000, 0x00131c61, 0x4b260220,
    0x00343a05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x34140000,
    0xfb044524, 0x00040000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x41240000,
    0xfb044924, 0x000c0000, 0x00042461, 0x79050020,
    0x0066341f, 0x00000000, 0x00042566, 0x00010220,
    0x22464105, 0x00464305, 0x01040022, 0x0001c060,
    0x00000ce0, 0x00000cc0, 0xa0453440, 0x08004103,
    0xa04b3540, 0x08c04103, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x27471a70, 0x41004503,
    0x00030061, 0x53060220, 0x00344505, 0x00000000,
    0x00130061, 0x55060220, 0x00344605, 0x00000000,
    0xe74d1c70, 0x08c04b03, 0x00030061, 0x38060220,
    0x00344b05, 0x00000000, 0x00130061, 0x3a060220,
    0x00344c05, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa0491e40, 0x43024702,
    0xa04f1c40, 0x43024d02, 0x00031a61, 0x53260220,
    0x00344905, 0x00000000, 0x00131b61, 0x55260220,
    0x00344a05, 0x00000000, 0x00031b61, 0x38260220,
    0x00344f05, 0x00000000, 0x00131c61, 0x3a260220,
    0x00345005, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x51140000,
    0xfb045324, 0x00040000, 0xa7002670, 0x7f835101,
    0x01040022, 0x0001c060, 0x000001b0, 0x000001a0,
    0xa0533640, 0x08404103, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xe7551970, 0x08405303,
    0x00030061, 0x5a060220, 0x00345305, 0x00000000,
    0x00130061, 0x5c060220, 0x00345405, 0x00000000,
    0xa0571b40, 0x43025502, 0x00031961, 0x5a260220,
    0x00345705, 0x00000000, 0x00131a61, 0x5c260220,
    0x00345805, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x58140000,
    0xfb045a24, 0x00040000, 0xa7002770, 0x7f835801,
    0x01040022, 0x0001c060, 0x000000e0, 0x000000d0,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xa0591140, 0x08804103, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0xe75b1970, 0x08805903,
    0x00030061, 0x60060220, 0x00345905, 0x00000000,
    0x00130061, 0x62060220, 0x00345a05, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xa05d1b40, 0x43025b02, 0x00031961, 0x60260220,
    0x00345d05, 0x00000000, 0x00131a61, 0x62260220,
    0x00345e05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x5e140000,
    0xfb046024, 0x00040000, 0xe7742870, 0x7f835e00,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00041161, 0x74054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00040961, 0x74054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000009f8,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x5f140000, 0xfb043824, 0x00040000,
    0xa7002970, 0x7f835f01, 0x01040022, 0x0001c060,
    0x000001b0, 0x000001a0, 0xa0613840, 0x09004103,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xe7631970, 0x09006103, 0x00030061, 0x68060220,
    0x00346105, 0x00000000, 0x00130061, 0x6a060220,
    0x00346205, 0x00000000, 0xa0651b40, 0x43026302,
    0x00031961, 0x68260220, 0x00346505, 0x00000000,
    0x00131a61, 0x6a260220, 0x00346605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044a31, 0x66140000, 0xfb046824, 0x00040000,
    0xa7002a70, 0x7f836601, 0x01040022, 0x0001c060,
    0x000000e0, 0x000000d0, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0xa0671140, 0x09404103,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0xe7691970, 0x09406703, 0x00030061, 0x7b060220,
    0x00346705, 0x00000000, 0x00130061, 0x7d060220,
    0x00346805, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0xa06b1b40, 0x43026902,
    0x00031961, 0x7b260220, 0x00346b05, 0x00000000,
    0x00131a61, 0x7d260220, 0x00346c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x6c140000, 0xfb047b24, 0x00040000,
    0xe7722b70, 0x7f836c00, 0x00040024, 0x0001c060,
    0x00000020, 0x00000020, 0x00041161, 0x72054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040024, 0x0001c060,
    0x00000020, 0x00000020, 0x00040961, 0x72054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000800, 0xae6d1170, 0x00007903,
    0x206f0965, 0x72006d03, 0xa07b3b66, 0x72226d02,
    0x00040a65, 0x00010220, 0x22466f05, 0x00467405,
    0x01040022, 0x0001c060, 0x00000538, 0x00000518,
    0xa07d3b40, 0x08404103, 0xa0070040, 0x09004103,
    0xa0623840, 0x01001003, 0xa06e0040, 0x02001003,
    0xe7041c70, 0x08407d03, 0x00031c61, 0x1c060220,
    0x00340705, 0x00000000, 0x00131d61, 0x1e060220,
    0x00340805, 0x00000000, 0x00033961, 0x39060220,
    0x00347d05, 0x00000000, 0x00133961, 0x3b060220,
    0x00347e05, 0x00000000, 0xe7090070, 0x09000703,
    0x00031f61, 0x45060220, 0x00346e05, 0x00000000,
    0x00131f61, 0x47060220, 0x00346f05, 0x00000000,
    0x27641f70, 0x10006203, 0xa0061f40, 0x43020402,
    0x27720070, 0x10006e03, 0xa0141e40, 0x43020902,
    0x00040061, 0x0a054220, 0x00000000, 0x000000c0,
    0xa0660940, 0x12026402, 0x00131d61, 0x3b260220,
    0x00340705, 0x00000000, 0x00031e61, 0x39260220,
    0x00340605, 0x00000000, 0xa0761e40, 0x12027202,
    0x00031e61, 0x1c260220, 0x00341405, 0x00000000,
    0x00131f61, 0x1e260220, 0x00341505, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x14240000, 0xfb043924, 0x000c0000,
    0x00031b61, 0x45260220, 0x00347605, 0x00000000,
    0x00131c61, 0x47260220, 0x00347705, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044d31, 0x18240000, 0xfb041c24, 0x000c0000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x1c440000, 0xfb043d24, 0x003c0000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044f31, 0x2c440000, 0xfb044524, 0x003c0000,
    0x25412d62, 0x1a001800, 0x20352c40, 0x14001800,
    0x25491262, 0x41005f00, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0xe03a1241, 0x3f003500,
    0x20340040, 0x51005f00, 0x20362c40, 0x16001a00,
    0xe04b1441, 0x34004900, 0x00031561, 0x41060220,
    0x00346205, 0x00000000, 0x00130061, 0x43060220,
    0x00346305, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x205bce41, 0x1e003a00,
    0x80002f01, 0x00000000, 0x00000000, 0x00000000,
    0x20771b41, 0x2e003a00, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0xe0381541, 0x3f003400,
    0x204e1440, 0x4b001800, 0x00031a61, 0x41260220,
    0x00346605, 0x00000000, 0x00131a61, 0x43260220,
    0x00346705, 0x00000000, 0x0004af5b, 0x7d040aa8,
    0x0a0a7705, 0x38052c05, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x0004de5b, 0x5d040aa8,
    0x0a0a5b05, 0x38051c05, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x20551340, 0x14204e00,
    0x00041361, 0x77054220, 0x00000000, 0x00000001,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x24440000, 0xfb044124, 0x003c0000,
    0x204d0040, 0x4b005f00, 0x204f0040, 0x4b001a00,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xe0591341, 0x3f005500, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x20531340, 0x51204d00,
    0x20561340, 0x16204f00, 0x20151341, 0x1e405900,
    0x203d3e41, 0x2e405900, 0x201a2041, 0x26405900,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x20671a41, 0x26003a00, 0xe0581641, 0x3f005300,
    0xe05a1641, 0x3f005600, 0xe03b3c41, 0x3f003600,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x0004c05b, 0x69040aa8, 0x0a0a6705, 0x38052405,
    0x0004145b, 0x17040aa8, 0x0a4a1505, 0x58051c05,
    0x0004175b, 0x34040aa8, 0x0a4a1a05, 0x58052405,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x0004175b, 0x3f040aa8, 0x0a4a3d05, 0x58052c05,
    0x0004de5b, 0x5f040aa8, 0x0a0a5d05, 0x3b052005,
    0x00042f5b, 0x04040aa8, 0x0a0a7d05, 0x3b053005,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x0004e05b, 0x6b040aa8, 0x0a0a6905, 0x3b052805,
    0x0004165b, 0x19040aa8, 0x0a4a1705, 0x5a052005,
    0x0004165b, 0x36040aa8, 0x0a4a3405, 0x5a052805,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x0004165b, 0x41040aa8, 0x0a4a3f05, 0x5a053005,
    0x80002e01, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x20610d40, 0x22005f00, 0x2014ef40, 0x32000400,
    0x206de040, 0x2a006b00, 0x20041340, 0x19006100,
    0x20463f40, 0x19206100, 0x204a1440, 0x41201400,
    0x20080040, 0x41001400, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x20481540, 0x36206d00,
    0x20060040, 0x36006d00, 0x00040024, 0x0001c060,
    0x00000030, 0x00000030, 0x00041a61, 0x77054220,
    0x00000000, 0x00000000, 0x00040061, 0x0a054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000290, 0x00040070, 0x00018660,
    0x26467405, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x01040b62, 0x42058220,
    0x02467b05, 0xffffffff, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0xae443070, 0x00010343,
    0x00041965, 0x00010220, 0x22464405, 0x00464205,
    0x01040022, 0x0001c060, 0x00000218, 0x00000218,
    0xa04e0040, 0x00c01003, 0xa0533640, 0x01c01003,
    0xa0581240, 0x02c01003, 0x00040061, 0x77054220,
    0x00000000, 0x00000001, 0x00040061, 0x79054220,
    0x00000000, 0x00000000, 0x27500a70, 0x10004e03,
    0x00030061, 0x1d060220, 0x00344e05, 0x00000000,
    0x00130061, 0x1f060220, 0x00344f05, 0x00000000,
    0x00030f61, 0x21060220, 0x00345305, 0x00000000,
    0x00130f61, 0x23060220, 0x00345405, 0x00000000,
    0x27553670, 0x10005303, 0x00031f61, 0x25060220,
    0x00345805, 0x00000000, 0x00131f61, 0x27060220,
    0x00345905, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x275a1770, 0x10005803,
    0xa0520a40, 0x12025002, 0xa0571d40, 0x12025502,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xa05c1b40, 0x12025a02, 0x00031b61, 0x1d260220,
    0x00345205, 0x00000000, 0x00131c61, 0x1f260220,
    0x00345305, 0x00000000, 0x00031c61, 0x21260220,
    0x00345705, 0x00000000, 0x00131d61, 0x23260220,
    0x00345805, 0x00000000, 0x00031d61, 0x25260220,
    0x00345c05, 0x00000000, 0x00131e61, 0x27260220,
    0x00345d05, 0x00000000, 0x80000d01, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x04140000,
    0xfb041d24, 0x00040000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x06140000,
    0xfb042124, 0x00040000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x08140000,
    0xfb042524, 0x00040000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x00041561, 0x46050220,
    0x00460405, 0x00000000, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x00041261, 0x48050220,
    0x00460605, 0x00000000, 0x80002501, 0x00000000,
    0x00000000, 0x00000000, 0x00041461, 0x4a050220,
    0x00460805, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040024, 0x0001c060,
    0x00000030, 0x00000030, 0x00041f61, 0x77054220,
    0x00000000, 0x00000000, 0x00041f61, 0x0a054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040024, 0x0001c060,
    0x00000040, 0x00000040, 0x00041c61, 0x77054220,
    0x00000000, 0x00000000, 0x00041c61, 0x0a054220,
    0x00000000, 0x00000000, 0x00041f61, 0x79054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00001bb0, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80040a61, 0x5d054660,
    0x00000000, 0x00000000, 0x00040061, 0x5d050660,
    0x00467705, 0x00000000, 0x00040070, 0x00018660,
    0x16460c05, 0x00000000, 0x80031a40, 0x5d260660,
    0x06445d06, 0x00445d26, 0x80021940, 0x5d470660,
    0x06425d27, 0x00425d47, 0x80021940, 0x5d670660,
    0x06425d27, 0x00425d67, 0x80021940, 0x5d850660,
    0x06005d64, 0x00345d85, 0x80021a40, 0x5e850660,
    0x06005e64, 0x00345e85, 0xa45e1940, 0x5e015d82,
    0x01040022, 0x0001c060, 0x000000e8, 0x000000d8,
    0xa05f1140, 0x02410203, 0x80000b01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x2a050660,
    0x00005ee4, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x27610a70, 0x02105f03,
    0x00033561, 0x26060220, 0x00345f05, 0x00000000,
    0x00133561, 0x28060220, 0x00346005, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xa0631b40, 0x02126112, 0x00031961, 0x26260220,
    0x00346305, 0x00000000, 0x00131a61, 0x28260220,
    0x00346405, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x75140000,
    0xfb182624, 0x01002a14, 0x00040024, 0x0001c060,
    0x00000020, 0x00000020, 0x00042561, 0x75054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00001a20, 0x80041161, 0x66054660,
    0x00000000, 0x00000000, 0x00040061, 0x66050660,
    0x00467705, 0x00000000, 0x00040070, 0x00018660,
    0x16467705, 0x00000000, 0x80043a40, 0x68058150,
    0x05587105, 0xffffffff, 0x80041961, 0x10014110,
    0x00000000, 0x0cc00cc0, 0x80040069, 0x10018510,
    0x01466805, 0x00020002, 0x80040940, 0x10018110,
    0x01461001, 0x0cc00cc0, 0xe3640961, 0x001b0004,
    0x80001961, 0x64054660, 0x00000000, 0x00000000,
    0x80031940, 0x64260660, 0x06446406, 0x00446426,
    0x80021940, 0x64470660, 0x06426427, 0x00426447,
    0x80021940, 0x64670660, 0x06426427, 0x00426467,
    0x80021940, 0x64850660, 0x06006464, 0x00346485,
    0x80021a40, 0x65850660, 0x06006564, 0x00346585,
    0xa4651940, 0x65016482, 0x80002501, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0693a40, 0x64017502,
    0x01040022, 0x0001c060, 0x00000330, 0x00000120,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00041461, 0x4a054220, 0x00000000, 0x7f800000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00041261, 0x48054220, 0x00000000, 0x7f800000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00041561, 0x46054220, 0x00000000, 0x7f800000,
    0x00041361, 0x08054220, 0x00000000, 0xff800000,
    0x00041161, 0x06054220, 0x00000000, 0xff800000,
    0x00041661, 0x04054220, 0x00000000, 0xff800000,
    0x00040061, 0x10054220, 0x00000000, 0x7f800000,
    0x00043b61, 0x7d054220, 0x00000000, 0x7f800000,
    0x00040061, 0x7b054220, 0x00000000, 0x7f800000,
    0x00040061, 0x16054220, 0x00000000, 0xff800000,
    0x00041361, 0x14054220, 0x00000000, 0xff800000,
    0x00040061, 0x12054220, 0x00000000, 0xff800000,
    0x00040024, 0x0001c060, 0x00000220, 0x00000220,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040969, 0x6b058660, 0x02466905, 0x00000005,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xa06e0940, 0x6b01026a, 0xe06c1168, 0x01b06903,
    0x00040069, 0x6a058660, 0x02467905, 0x00000018,
    0x27701b70, 0x02106e4b, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00031761, 0x2b060220,
    0x00346e05, 0x00000000, 0x00130061, 0x2d060220,
    0x00346f05, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x204c1c66, 0x6a000e03,
    0x00041c52, 0x72040660, 0x0e2e02e4, 0x70056c05,
    0x00131961, 0x2d260220, 0x00347305, 0x00000000,
    0x00031a61, 0x2b260220, 0x00347205, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x00000000, 0xfb0c2b24, 0x003c4644,
    0xa0740040, 0x01006e03, 0x27769570, 0x6e007403,
    0x00033561, 0x2c060220, 0x00347405, 0x00000000,
    0x00133561, 0x2e060220, 0x00347505, 0x00000000,
    0xa0781b40, 0x72027602, 0x00131961, 0x2e260220,
    0x00347905, 0x00000000, 0x00031a61, 0x2c260220,
    0x00347805, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xfb0c2c24, 0x003c0444, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x20123540, 0x04004600,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x20141440, 0x06004800, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x20163540, 0x08004a00,
    0x00041361, 0x7b050220, 0x00461205, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x00041261, 0x7d050220, 0x00461405, 0x00000000,
    0x00041161, 0x10050220, 0x00461605, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000015d8,
    0x00040070, 0x00018660, 0x16460c05, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xa32d1361, 0x7f810000, 0x602d0061, 0x00104600,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xa32f1361, 0x7f810000, 0x602f0061, 0x00104800,
    0xa3311361, 0x7f810000, 0x60310061, 0x00104a00,
    0xa3330e61, 0xff810000, 0x60330061, 0x00100400,
    0xa3351561, 0xff810000, 0x60350061, 0x00100600,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xa3371661, 0xff810000, 0x60370061, 0x00100800,
    0xa3791d61, 0x7f810000, 0x60790061, 0x00107b00,
    0x80002501, 0x00000000, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80031761, 0x77060220, 0x00442d26, 0x00000000,
    0xa3031d61, 0xff810000, 0x60030061, 0x00101200,
    0xa3051d61, 0xff810000, 0x60050061, 0x00101400,
    0x80031761, 0x18060220, 0x00442f26, 0x00000000,
    0xa3071d61, 0xff810000, 0x60070061, 0x00101600,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80031761, 0x25060220, 0x00443126, 0x00000000,
    0xa37b1f61, 0x7f810000, 0x607b0061, 0x00107d00,
    0x80031761, 0x3e060220, 0x00443326, 0x00000000,
    0x80031661, 0x6f060220, 0x00443726, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80031761, 0x4b060220, 0x00443526, 0x00000000,
    0x80002501, 0x00000000, 0x00000000, 0x00000000,
    0x80031e62, 0x75060aa0, 0x5a442d06, 0x00447706,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80031561, 0x1f060220, 0x00440326, 0x00000000,
    0xa37d1f61, 0x7f810000, 0x607d0061, 0x00101000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80031561, 0x27060220, 0x00440526, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80031461, 0x39060220, 0x00440726, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80031761, 0x09060220, 0x00447926, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80031f62, 0x23060aa0, 0x5a443106, 0x00442506,
    0x80031461, 0x0e060220, 0x00447b26, 0x00000000,
    0x80031f62, 0x3c060aa0, 0x4a443306, 0x00443e06,
    0x80031f62, 0x6d060aa0, 0x4a443706, 0x00446f06,
    0x80031f62, 0x13060aa0, 0x5a442f06, 0x00441806,
    0x80031e62, 0x49060aa0, 0x4a443506, 0x00444b06,
    0x80031761, 0x2d260220, 0x00447506, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80031e62, 0x1d060aa0, 0x4a440306, 0x00441f06,
    0x80031761, 0x1a060220, 0x00447d26, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80031d62, 0x2a060aa0, 0x4a440706, 0x00443906,
    0x80031c62, 0x73060aa0, 0x5a447906, 0x00440906,
    0x80031761, 0x31260220, 0x00442306, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80031c62, 0x0c060aa0, 0x5a447b06, 0x00440e06,
    0x80031761, 0x33260220, 0x00443c06, 0x00000000,
    0x80031761, 0x37260220, 0x00446d06, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80031661, 0x2f260220, 0x00441306, 0x00000000,
    0x80031561, 0x35260220, 0x00444906, 0x00000000,
    0x80031461, 0x03260220, 0x00441d06, 0x00000000,
    0x80031f62, 0x11060aa0, 0x5a447d06, 0x00441a06,
    0x80031461, 0x07260220, 0x00442a06, 0x00000000,
    0x80031361, 0x79260220, 0x00447306, 0x00000000,
    0x80031261, 0x7b260220, 0x00440c06, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80021f61, 0x43070220, 0x00423347, 0x00000000,
    0x80023261, 0x41070220, 0x00423327, 0x00000000,
    0x80021f61, 0x47070220, 0x00423727, 0x00000000,
    0x80021f61, 0x5d070220, 0x00423547, 0x00000000,
    0x80020061, 0x57070220, 0x00423527, 0x00000000,
    0x80033262, 0x22060aa0, 0x4a440506, 0x00442706,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021f61, 0x61070220, 0x00420347, 0x00000000,
    0x80020061, 0x5f070220, 0x00420327, 0x00000000,
    0x80031261, 0x7d260220, 0x00441106, 0x00000000,
    0x80020061, 0x6d070220, 0x00420747, 0x00000000,
    0x80023a61, 0x6b070220, 0x00420727, 0x00000000,
    0x80020061, 0x4f070220, 0x00427947, 0x00000000,
    0x80023561, 0x4d070220, 0x00427927, 0x00000000,
    0x80020061, 0x49070220, 0x00423747, 0x00000000,
    0x80023661, 0x55070220, 0x00427b47, 0x00000000,
    0x80023661, 0x53070220, 0x00427b27, 0x00000000,
    0x80020061, 0x1d070220, 0x00422f47, 0x00000000,
    0x80020062, 0x3f070aa0, 0x4a424107, 0x00424307,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80021361, 0x1b070220, 0x00422f27, 0x00000000,
    0x80020061, 0x2a070220, 0x00423147, 0x00000000,
    0x80020062, 0x51070aa0, 0x4a425707, 0x00425d07,
    0x80031361, 0x05260220, 0x00442206, 0x00000000,
    0x80023361, 0x0b070220, 0x00422d27, 0x00000000,
    0x80021561, 0x0d070220, 0x00422d47, 0x00000000,
    0x80023262, 0x20070aa0, 0x4a425f07, 0x00426107,
    0x80023761, 0x5b070220, 0x00427d47, 0x00000000,
    0x80023761, 0x59070220, 0x00427d27, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80023962, 0x3a070aa0, 0x4a426b07, 0x00426d07,
    0x80020062, 0x70070aa0, 0x4a424707, 0x00424907,
    0x80021f62, 0x0f070aa0, 0x5a425307, 0x00425507,
    0x80021661, 0x33470220, 0x00423f07, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80021761, 0x28070220, 0x00423127, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021f62, 0x19070aa0, 0x5a421b07, 0x00421d07,
    0x80021661, 0x35470220, 0x00425107, 0x00000000,
    0x80021f61, 0x67070220, 0x00420547, 0x00000000,
    0x80020061, 0x65070220, 0x00420527, 0x00000000,
    0x80021f62, 0x09070aa0, 0x5a420b07, 0x00420d07,
    0x80021661, 0x03470220, 0x00422007, 0x00000000,
    0x80021561, 0x07470220, 0x00423a07, 0x00000000,
    0x80021461, 0x37470220, 0x00427007, 0x00000000,
    0x80021361, 0x7b470220, 0x00420f07, 0x00000000,
    0x80021f62, 0x26070aa0, 0x5a422807, 0x00422a07,
    0x80021361, 0x2f470220, 0x00421907, 0x00000000,
    0x80020e61, 0x6c070220, 0x00423567, 0x00000000,
    0x80021561, 0x46070220, 0x00423327, 0x00000000,
    0x80021561, 0x48070220, 0x00423367, 0x00000000,
    0x80021261, 0x2d470220, 0x00420907, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80020f61, 0x62070220, 0x00420327, 0x00000000,
    0x80020e61, 0x6e070220, 0x00420727, 0x00000000,
    0x80020d61, 0x4a070220, 0x00423727, 0x00000000,
    0x80020062, 0x1b070aa0, 0x5a425907, 0x00425b07,
    0x80020d61, 0x56070220, 0x00427b27, 0x00000000,
    0x80021261, 0x31470220, 0x00422607, 0x00000000,
    0x80021f61, 0x22070220, 0x00422f67, 0x00000000,
    0x80020061, 0x20070220, 0x00422f27, 0x00000000,
    0x80020061, 0x70070220, 0x00420767, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80021f62, 0x44070aa0, 0x4a424607, 0x00424807,
    0x80021f61, 0x12070220, 0x00422d67, 0x00000000,
    0x80020061, 0x10070220, 0x00422d27, 0x00000000,
    0x80020062, 0x28070aa0, 0x4a426507, 0x00426707,
    0x80021361, 0x7d470220, 0x00421b07, 0x00000000,
    0x80021f61, 0x3b070220, 0x00423167, 0x00000000,
    0x80020061, 0x39070220, 0x00423127, 0x00000000,
    0x80021f62, 0x1e070aa0, 0x5a422007, 0x00422207,
    0x80020062, 0x0a070aa0, 0x5a424d07, 0x00424f07,
    0x80021461, 0x33670220, 0x00424407, 0x00000000,
    0x80021561, 0x58070220, 0x00427b67, 0x00000000,
    0x80021e62, 0x0e070aa0, 0x5a421007, 0x00421207,
    0x80021461, 0x05470220, 0x00422807, 0x00000000,
    0x80021e61, 0x5e070220, 0x00427d67, 0x00000000,
    0x80021661, 0x5c070220, 0x00427d27, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80021e62, 0x2b070aa0, 0x5a423907, 0x00423b07,
    0x80021461, 0x2f670220, 0x00421e07, 0x00000000,
    0x80021561, 0x64070220, 0x00420367, 0x00000000,
    0x80021561, 0x66070220, 0x00423527, 0x00000000,
    0x80021361, 0x79470220, 0x00420a07, 0x00000000,
    0x80021f62, 0x33850aa0, 0x4a003364, 0x00343385,
    0x80021f62, 0x34850aa0, 0x4a003464, 0x00343485,
    0x80021461, 0x2d670220, 0x00420e07, 0x00000000,
    0x80021f61, 0x6a070220, 0x00420567, 0x00000000,
    0x80021761, 0x68070220, 0x00420527, 0x00000000,
    0x80021561, 0x4c070220, 0x00423767, 0x00000000,
    0x80021f62, 0x1c070aa0, 0x5a425c07, 0x00425e07,
    0x80021461, 0x31670220, 0x00422b07, 0x00000000,
    0x80021f62, 0x2f850aa0, 0x5a002f64, 0x00342f85,
    0x80021f62, 0x30850aa0, 0x5a003064, 0x00343085,
    0x80021f62, 0x21070aa0, 0x4a426207, 0x00426407,
    0x80020062, 0x10070aa0, 0x5a425607, 0x00425807,
    0x80021f62, 0x60070aa0, 0x4a426607, 0x00426c07,
    0x80021e61, 0x52070220, 0x00427967, 0x00000000,
    0x80020061, 0x50070220, 0x00427927, 0x00000000,
    0x80031762, 0x34050aa0, 0x4a0033e4, 0x00463405,
    0x80020062, 0x3b070aa0, 0x4a426e07, 0x00427007,
    0x80021f62, 0x2d850aa0, 0x5a002d64, 0x00342d85,
    0x80021f62, 0x2e850aa0, 0x5a002e64, 0x00342e85,
    0x80021d62, 0x29070aa0, 0x4a426807, 0x00426a07,
    0x80021c62, 0x72070aa0, 0x4a424a07, 0x00424c07,
    0x80020061, 0x7d670220, 0x00421c07, 0x00000000,
    0x80021c62, 0x31850aa0, 0x5a003164, 0x00343185,
    0x80021c62, 0x32850aa0, 0x5a003264, 0x00343285,
    0x80030062, 0x30050aa0, 0x5a002fe4, 0x00463005,
    0x80020061, 0x03670220, 0x00422107, 0x00000000,
    0x80020061, 0x7b670220, 0x00421007, 0x00000000,
    0x80021761, 0x35670220, 0x00426007, 0x00000000,
    0x80021d62, 0x0b070aa0, 0x5a425007, 0x00425207,
    0x80021761, 0x07670220, 0x00423b07, 0x00000000,
    0x80031762, 0x2e050aa0, 0x5a002de4, 0x00462e05,
    0x80021761, 0x05670220, 0x00422907, 0x00000000,
    0x80021661, 0x37670220, 0x00427207, 0x00000000,
    0x80021f62, 0x7d850aa0, 0x5a007d64, 0x00347d85,
    0x80021f62, 0x7e850aa0, 0x5a007e64, 0x00347e85,
    0x80031662, 0x32050aa0, 0x5a0031e4, 0x00463205,
    0x80021e62, 0x03850aa0, 0x4a000364, 0x00340385,
    0x80021e62, 0x04850aa0, 0x4a000464, 0x00340485,
    0x80021d62, 0x7b850aa0, 0x5a007b64, 0x00347b85,
    0x80021d62, 0x7c850aa0, 0x5a007c64, 0x00347c85,
    0x80021c62, 0x35850aa0, 0x4a003564, 0x00343585,
    0x80021c62, 0x36850aa0, 0x4a003664, 0x00343685,
    0x80020061, 0x79670220, 0x00420b07, 0x00000000,
    0x80021c62, 0x07850aa0, 0x4a000764, 0x00340785,
    0x80021c62, 0x08850aa0, 0x4a000864, 0x00340885,
    0x80021b62, 0x05850aa0, 0x4a000564, 0x00340585,
    0x80021b62, 0x06850aa0, 0x4a000664, 0x00340685,
    0x80021a62, 0x37850aa0, 0x4a003764, 0x00343785,
    0x80021a62, 0x38850aa0, 0x4a003864, 0x00343885,
    0x80030062, 0x7e050aa0, 0x5a007de4, 0x00467e05,
    0x80030062, 0x04050aa0, 0x4a0003e4, 0x00460405,
    0x80030062, 0x7c050aa0, 0x5a007be4, 0x00467c05,
    0x80031762, 0x36050aa0, 0x4a0035e4, 0x00463605,
    0x80021962, 0x79850aa0, 0x5a007964, 0x00347985,
    0x80021962, 0x7a850aa0, 0x5a007a64, 0x00347a85,
    0x80030062, 0x08050aa0, 0x4a0007e4, 0x00460805,
    0x80031762, 0x06050aa0, 0x4a0005e4, 0x00460605,
    0x80031762, 0x38050aa0, 0x4a0037e4, 0x00463805,
    0x80031462, 0x7a050aa0, 0x5a0079e4, 0x00467a05,
    0x01040022, 0x0001c060, 0x00000858, 0x00000858,
    0xa0090040, 0x08010243, 0x80001e01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x3d050660,
    0x00002ee4, 0x00000000, 0x270b1a70, 0x0210092b,
    0x00030061, 0x39060220, 0x00340905, 0x00000000,
    0x80101f01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x3b060220, 0x00340a05, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa00d0040, 0x02120b1a, 0x00031961, 0x39260220,
    0x00340d05, 0x00000000, 0x00131a61, 0x3b260220,
    0x00340e05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xfb2a3924, 0x01003d14, 0xa00e0040, 0x08410243,
    0x00040061, 0x42050660, 0x000030e4, 0x00000000,
    0xe7101a70, 0x08400e03, 0x00033461, 0x3e060220,
    0x00340e05, 0x00000000, 0x00130061, 0x40060220,
    0x00340f05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa0120040, 0x0212101a,
    0x00031961, 0x3e260220, 0x00341205, 0x00000000,
    0x00131a61, 0x40260220, 0x00341305, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x00000000, 0xfb2a3e24, 0x01004214,
    0xa0130040, 0x08810243, 0x00040061, 0x47050660,
    0x000032e4, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xe7150070, 0x08801303,
    0x00033261, 0x43060220, 0x00341305, 0x00000000,
    0x00130061, 0x45060220, 0x00341405, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa0170040, 0x0212151a, 0x00031961, 0x43260220,
    0x00341705, 0x00000000, 0x00131a61, 0x45260220,
    0x00341805, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xfb2a4324, 0x01004714, 0xa0180040, 0x08c10243,
    0x00040061, 0x4c050660, 0x000034e4, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0xe71a0070, 0x08c01803, 0x00033261, 0x48060220,
    0x00341805, 0x00000000, 0x00130061, 0x4a060220,
    0x00341905, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa01c0040, 0x02121a1a,
    0x00031961, 0x48260220, 0x00341c05, 0x00000000,
    0x00131a61, 0x4a260220, 0x00341d05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x00000000, 0xfb2c4824, 0x01004c14,
    0xa01d0040, 0x09010243, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x51050660,
    0x000036e4, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xe71f0070, 0x09001d03,
    0x00033561, 0x4d060220, 0x00341d05, 0x00000000,
    0x00130061, 0x4f060220, 0x00341e05, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa0210040, 0x02121f1a, 0x00031961, 0x4d260220,
    0x00342105, 0x00000000, 0x00131a61, 0x4f260220,
    0x00342205, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xfb2c4d24, 0x01005114, 0xa0220040, 0x09410243,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x56050660, 0x000038e4, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0xe7240070, 0x09402203, 0x00033661, 0x52060220,
    0x00342205, 0x00000000, 0x00130061, 0x54060220,
    0x00342305, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa0260040, 0x0212241a,
    0x00031961, 0x52260220, 0x00342605, 0x00000000,
    0x00131a61, 0x54260220, 0x00342705, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x00000000, 0xfb2c5224, 0x01005614,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x5b050660, 0x00007ae4, 0x00000000,
    0x00033761, 0x57260660, 0x00000224, 0x00000000,
    0x00130061, 0x59260660, 0x00000224, 0x00000000,
    0x00031a61, 0x57060660, 0x00000204, 0x00000000,
    0x00131a61, 0x59060660, 0x00000204, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x00000000, 0xfb2a5724, 0x01005b14,
    0xa0270040, 0x00410203, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x60050660,
    0x00007ce4, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x27290070, 0x02102703,
    0x00033861, 0x5c060220, 0x00342705, 0x00000000,
    0x00130061, 0x5e060220, 0x00342805, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa02b0040, 0x02122912, 0x00031961, 0x5c260220,
    0x00342b05, 0x00000000, 0x00131a61, 0x5e260220,
    0x00342c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x00000000,
    0xfb2a5c24, 0x01006014, 0xa02c0040, 0x00810203,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x65050660, 0x00007ee4, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x272e0070, 0x02102c03, 0x00033961, 0x61060220,
    0x00342c05, 0x00000000, 0x00130061, 0x63060220,
    0x00342d05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa0300040, 0x02122e12,
    0x00031961, 0x61260220, 0x00343005, 0x00000000,
    0x00131a61, 0x63260220, 0x00343105, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044a31, 0x00000000, 0xfb2a6124, 0x01006514,
    0xa0310040, 0x01010203, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x6a050660,
    0x000004e4, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x27330070, 0x02103103,
    0x00033a61, 0x66060220, 0x00343105, 0x00000000,
    0x00130061, 0x68060220, 0x00343205, 0x00000000,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0xa0350040, 0x02123312, 0x00031961, 0x66260220,
    0x00343505, 0x00000000, 0x00131a61, 0x68260220,
    0x00343605, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x00000000,
    0xfb2c6624, 0x01006a14, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0xa0360040, 0x01410203,
    0x80001301, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x6f050660, 0x000006e4, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xe7381a70, 0x01403603, 0x00033b61, 0x6b060220,
    0x00343605, 0x00000000, 0x00130061, 0x6d060220,
    0x00343705, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xa03a1b40, 0x02123812,
    0x00031961, 0x6b260220, 0x00343a05, 0x00000000,
    0x00131a61, 0x6d260220, 0x00343b05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x00000000, 0xfb2c6b24, 0x01006f14,
    0xa03b3440, 0x01810203, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x74050660,
    0x000008e4, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xe73d1a70, 0x01803b03,
    0x00033c61, 0x70060220, 0x00343b05, 0x00000000,
    0x00130061, 0x72060220, 0x00343c05, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa03f1b40, 0x02123d12, 0x00131961, 0x72260220,
    0x00344005, 0x00000000, 0x00031a61, 0x70260220,
    0x00343f05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044d31, 0x00000000,
    0xfb2c7024, 0x01007414, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80031761, 0x7e050220,
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
      .base.program_size = 11616,
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
const char *gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_indirect_sha1 = "dfa121b693cd60b57687cc856eb30ff5586cd270";

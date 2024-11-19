#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
   { 24, 4 },
   { 32, 8 },
   { 40, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g111<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g62<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g111UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
add(1)          g112<1>UD       g111<0,1,0>UD   0x00000040UD    { align1 WE_all 1N $0.src compacted };
mov(8)          g55<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g75<1>D         g62<8,8,1>D     0x00000004UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g3UD            g112UD          nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
add(8)          g55.8<1>UW      g55<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g39<1>D         g55<8,8,1>UW                    { align1 1H };
add(16)         g41<1>D         g39<1,1,0>D     g75<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cmp.l.f0.0(16)  null<1>UD       g41<8,8,1>UD    g2.6<0,1,0>UD   { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g76<1>D         g41<8,8,1>D     0x00000003UD    { align1 1H };
add(16)         g79<1>D         g2.4<0,1,0>D    g76<1,1,0>D     { align1 1H I@1 compacted };
shr(16)         g77<1>UD        g41<1,1,0>UD    0x0000001dUD    { align1 1H compacted };
cmp.l.f0.0(16)  g81<1>UD        g79<1,1,0>UD    g2.4<0,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g63<2>UD        g79<4,4,1>UD                    { align1 1Q };
mov(8)          g65<2>UD        g80<4,4,1>UD                    { align1 2Q };
add3(16)        g83<1>D         g2.5<0,1,0>D    g77<8,8,1>D     -g81<1,1,1>D { align1 1H I@3 };
mov(8)          g65.1<2>UD      g84<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g63.1<2>UD      g83<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g43UD           g63UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mov(8)          g68<2>UD        g43<4,4,1>UD                    { align1 1Q $2.dst };
mov(8)          g70<2>UD        g44<4,4,1>UD                    { align1 2Q $2.dst };
or.nz.f0.0(16)  null<1>UD       g43<8,8,1>UD    g45<8,8,1>UD    { align1 1H $2.dst };
mov(8)          g68.1<2>UD      g45<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g70.1<2>UD      g46<4,4,1>UD                    { align1 2Q I@3 };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL1              { align1 1H };
add(16)         g84<1>D         g43<1,1,0>D     48D             { align1 1H compacted };
add(16)         g90<1>D         g43<1,1,0>D     56D             { align1 1H compacted };
cmp.l.f0.0(16)  g86<1>UD        g84<1,1,0>UD    g43<1,1,0>UD    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g92<1>UD        g90<1,1,0>UD    g43<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g64<2>UD        g84<4,4,1>UD                    { align1 1Q $2.src };
mov(8)          g66<2>UD        g85<4,4,1>UD                    { align1 2Q $2.src };
mov(8)          g72<2>UD        g90<4,4,1>UD                    { align1 1Q };
mov(8)          g74<2>UD        g91<4,4,1>UD                    { align1 2Q };
add(16)         g88<1>D         -g86<1,1,0>D    g45<1,1,0>D     { align1 1H I@6 compacted };
add(16)         g94<1>D         -g92<1,1,0>D    g45<1,1,0>D     { align1 1H I@6 compacted };
mov(8)          g64.1<2>UD      g88<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g66.1<2>UD      g89<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g72.1<2>UD      g94<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g74.1<2>UD      g95<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g89UD           g64UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g95UD           g72UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov(16)         g37<1>UD        g89.3<32,8,4>UB                 { align1 1H $2.dst };
or.nz.f0.0(16)  null<1>UD       g95<8,8,1>UD    g97<8,8,1>UD    { align1 1H $3.dst };
(+f0.0) if(16)  JIP:  LABEL4          UIP:  LABEL3              { align1 1H };
add(16)         g99<1>D         g95<1,1,0>D     128D            { align1 1H compacted };
add(16)         g105<1>D        g95<1,1,0>D     140D            { align1 1H compacted };
cmp.l.f0.0(16)  g101<1>UD       g99<1,1,0>UD    g95<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g73<2>UD        g99<4,4,1>UD                    { align1 1Q $3.src };
mov(8)          g75<2>UD        g100<4,4,1>UD                   { align1 2Q $3.src };
cmp.l.f0.0(16)  g107<1>UD       g105<1,1,0>UD   0x0000008cUD    { align1 1H I@4 compacted };
mov(8)          g63<2>UD        g105<4,4,1>UD                   { align1 1Q $2.src };
mov(8)          g65<2>UD        g106<4,4,1>UD                   { align1 2Q $2.src };
add(16)         g103<1>D        -g101<1,1,0>D   g97<1,1,0>D     { align1 1H I@6 compacted };
add(16)         g109<1>D        -g107<1,1,0>D   g97<1,1,0>D     { align1 1H I@4 compacted };
mov(8)          g73.1<2>UD      g103<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g75.1<2>UD      g104<4,4,1>UD                   { align1 2Q I@3 };
mov(8)          g63.1<2>UD      g109<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g65.1<2>UD      g110<4,4,1>UD                   { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g111UD          g73UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
cmp.l.f0.0(16)  null<1>F        (abs)g111<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $3.dst compacted };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL5              { align1 1H };
add(16)         g113<1>D        g95<1,1,0>D     132D            { align1 1H compacted };
cmp.l.f0.0(16)  g115<1>UD       g113<1,1,0>UD   0x00000084UD    { align1 1H I@1 compacted };
mov(8)          g74<2>UD        g113<4,4,1>UD                   { align1 1Q $3.src };
mov(8)          g76<2>UD        g114<4,4,1>UD                   { align1 2Q $3.src };
add(16)         g117<1>D        -g115<1,1,0>D   g97<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g74.1<2>UD      g117<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g76.1<2>UD      g118<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g118UD          g74UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
cmp.l.f0.0(16)  null<1>F        (abs)g118<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $3.dst compacted };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
add(16)         g119<1>D        g95<1,1,0>D     136D            { align1 1H F@1 compacted };
cmp.l.f0.0(16)  g121<1>UD       g119<1,1,0>UD   0x00000088UD    { align1 1H I@1 compacted };
mov(8)          g75<2>UD        g119<4,4,1>UD                   { align1 1Q $3.src };
mov(8)          g77<2>UD        g120<4,4,1>UD                   { align1 2Q $3.src };
add(16)         g123<1>D        -g121<1,1,0>D   g97<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g75.1<2>UD      g123<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g77.1<2>UD      g124<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g124UD          g75UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
cmp.l.f0.0(16)  g58<1>F         (abs)g124<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $3.dst compacted };
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
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g125UD          g63UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
cmp.l.f0.0(16)  null<1>F        (abs)g125<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $2.dst compacted };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
add(16)         g4<1>D          g95<1,1,0>D     144D            { align1 1H compacted };
cmp.l.f0.0(16)  g6<1>UD         g4<1,1,0>UD     0x00000090UD    { align1 1H I@1 compacted };
mov(8)          g76<2>UD        g4<4,4,1>UD                     { align1 1Q $3.src };
mov(8)          g78<2>UD        g5<4,4,1>UD                     { align1 2Q $3.src };
add(16)         g8<1>D          -g6<1,1,0>D     g97<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g76.1<2>UD      g8<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g78.1<2>UD      g9<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g9UD            g76UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
cmp.l.f0.0(16)  null<1>F        (abs)g9<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $3.dst compacted };
(+f0.0) if(16)  JIP:  LABEL14         UIP:  LABEL13             { align1 1H };
add(16)         g10<1>D         g95<1,1,0>D     148D            { align1 1H F@1 compacted };
cmp.l.f0.0(16)  g12<1>UD        g10<1,1,0>UD    0x00000094UD    { align1 1H I@1 compacted };
mov(8)          g77<2>UD        g10<4,4,1>UD                    { align1 1Q $3.src };
mov(8)          g79<2>UD        g11<4,4,1>UD                    { align1 2Q $3.src };
add(16)         g14<1>D         -g12<1,1,0>D    g97<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g77.1<2>UD      g14<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g79.1<2>UD      g15<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g15UD           g77UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
cmp.l.f0.0(16)  g56<1>F         (abs)g15<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $3.dst compacted };
else(16)        JIP:  LABEL13         UIP:  LABEL13             { align1 1H };

LABEL14:
mov(16)         g56<1>UD        0x00000000UD                    { align1 1H F@1 };

LABEL13:
endif(16)       JIP:  LABEL15                                   { align1 1H };

LABEL15:
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
mov(16)         g56<1>UD        0x00000000UD                    { align1 1H A@1 };

LABEL11:
endif(16)       JIP:  LABEL10                                   { align1 1H };
cmp.nz.f0.0(16) g16<1>D         g37<1,1,0>D     0D              { align1 1H F@1 compacted };
and(16)         g18<1>UD        g16<1,1,0>UD    g56<1,1,0>UD    { align1 1H A@1 compacted };
or(16)          g80<1>D         ~g16<1,1,0>D    ~g56<1,1,0>D    { align1 1H $3.src compacted };
and.nz.f0.0(16) null<1>UD       g18<8,8,1>UD    g58<8,8,1>UD    { align1 1H A@2 };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL16             { align1 1H };
add(16)         g82<1>D         g95<1,1,0>D     132D            { align1 1H compacted };
add(16)         g87<1>D         g95<1,1,0>D     144D            { align1 1H compacted };
add(16)         g48<1>D         g43<1,1,0>D     16D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
send(16)        g4UD            g68UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
mov(16)         g35<1>UD        0x000000c0UD                    { align1 1H };
cmp.l.f0.0(16)  g84<1>UD        g82<1,1,0>UD    0x00000084UD    { align1 1H I@4 compacted };
mov(8)          g99<2>UD        g87<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g101<2>UD       g88<4,4,1>UD                    { align1 2Q I@5 };
mov(8)          g64<2>UD        g82<4,4,1>UD                    { align1 1Q $2.src };
mov(8)          g66<2>UD        g83<4,4,1>UD                    { align1 2Q $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g72<2>UD        g48<4,4,1>UD                    { align1 1Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $3.src };
mov(8)          g74<2>UD        g49<4,4,1>UD                    { align1 2Q I@7 };
cmp.l.f0.0(16)  g89<1>UD        g87<1,1,0>UD    0x00000090UD    { align1 1H compacted };
add(16)         g82<1>D         g43<1,1,0>D     32D             { align1 1H compacted };
cmp.l.f0.0(16)  g56<1>UD        g48<1,1,0>UD    g43<1,1,0>UD    { align1 1H compacted };
add(16)         g86<1>D         -g84<1,1,0>D    g97<1,1,0>D     { align1 1H I@7 compacted };
add(16)         g91<1>D         -g89<1,1,0>D    g97<1,1,0>D     { align1 1H I@4 compacted };
cmp.l.f0.0(16)  g84<1>UD        g82<1,1,0>UD    g43<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g76<2>UD        g82<4,4,1>UD                    { align1 1Q $3.src };
mov(8)          g78<2>UD        g83<4,4,1>UD                    { align1 2Q $3.src };
add(16)         g60<1>D         -g56<1,1,0>D    g45<1,1,0>D     { align1 1H I@6 compacted };
mov(8)          g66.1<2>UD      g87<4,4,1>UD                    { align1 2Q I@6 };
mov(8)          g64.1<2>UD      g86<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g99.1<2>UD      g91<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g101.1<2>UD     g92<4,4,1>UD                    { align1 2Q I@7 };
add(16)         g86<1>D         -g84<1,1,0>D    g45<1,1,0>D     { align1 1H I@7 compacted };
mov(8)          g72.1<2>UD      g60<4,4,1>UD                    { align1 1Q I@6 };
mov(8)          g74.1<2>UD      g61<4,4,1>UD                    { align1 2Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
send(16)        g47UD           g64UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(16)        g51UD           g99UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
mov(8)          g76.1<2>UD      g86<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g78.1<2>UD      g87<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g12UD           g72UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g20UD           g76UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sel.ge(16)      g100<1>F        g51<1,1,0>F     g53<1,1,0>F     { align1 1H $6.dst compacted };
add(16)         g93<1>F         g51<1,1,0>F     g47<1,1,0>F     { align1 1H $5.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.ge(16)      g102<1>F        g125<1,1,0>F    g100<1,1,0>F    { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mul(16)         g98<1>F         g93<1,1,0>F     0x3f000000F  /* 0.5F */ { align1 1H F@2 compacted };
add(16)         g92<1>F         g125<1,1,0>F    g111<1,1,0>F    { align1 1H I@6 compacted };
add(16)         g94<1>F         g53<1,1,0>F     g49<1,1,0>F     { align1 1H $5.dst compacted };
mul(16)         g104<1>F        g102<1,1,0>F    0x34000000F  /* 1.19209e-07F */ { align1 1H F@4 compacted };
mul(16)         g121<1>F        g98<1,1,0>F     g6<1,1,0>F      { align1 1H @4 $4.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
mul(16)         g61<1>F         g98<1,1,0>F     g14<1,1,0>F     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
mul(16)         g87<1>F         g98<1,1,0>F     g22<1,1,0>F     { align1 1H I@1 compacted };
mul(16)         g96<1>F         g92<1,1,0>F     0x3f000000F  /* 0.5F */ { align1 1H F@6 compacted };
mul(16)         g99<1>F         g94<1,1,0>F     0x3f000000F  /* 0.5F */ { align1 1H F@6 compacted };
add(16)         g107<1>F        g51<1,1,0>F     g104<1,1,0>F    { align1 1H F@6 compacted };
mad(16)         g89<1>F         g87<8,8,1>F     g20<8,8,1>F     g96<1,1,1>F { align1 1H @3 $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mad(16)         g63<1>F         g61<8,8,1>F     g12<8,8,1>F     g96<1,1,1>F { align1 1H @6 $3.dst };
mad(16)         g123<1>F        g121<8,8,1>F    g4<8,8,1>F      g96<1,1,1>F { align1 1H @7 $4.dst };
mov(16)         g61<1>UD        0x00000001UD                    { align1 1H F@2 };
add(16)         g115<1>F        g107<1,1,0>F    -g47<1,1,0>F    { align1 1H F@4 compacted };
add(16)         g106<1>F        g125<1,1,0>F    g104<1,1,0>F    { align1 1H compacted };
add(16)         g108<1>F        g53<1,1,0>F     g104<1,1,0>F    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
mad(16)         g91<1>F         g89<8,8,1>F     g24<8,8,1>F     g99<1,1,1>F { align1 1H A@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mad(16)         g65<1>F         g63<8,8,1>F     g16<8,8,1>F     g99<1,1,1>F { align1 1H @6 $3.dst };
mad(16)         g125<1>F        g123<8,8,1>F    g8<8,8,1>F      g99<1,1,1>F { align1 1H @6 $4.dst };
mul(16)         g119<1>F        g115<1,1,0>F    0x3f000000F  /* 0.5F */ { align1 1H F@6 compacted };
add(16)         g113<1>F        g106<1,1,0>F    -g111<1,1,0>F   { align1 1H F@6 compacted };
add(16)         g116<1>F        g108<1,1,0>F    -g49<1,1,0>F    { align1 1H F@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g67<1>F         g65<1,1,0>F     g18<1,1,0>F     { align1 1H @5 $3.dst compacted };
mul(16)         g106<1>F        g119<1,1,0>F    (abs)g22<1,1,0>F { align1 1H F@4 compacted };
mul(16)         g94<1>F         g119<1,1,0>F    (abs)g6<1,1,0>F { align1 1H compacted };
mul(16)         g101<1>F        g119<1,1,0>F    (abs)g14<1,1,0>F { align1 1H compacted };
add(16)         g47<1>F         g125<1,1,0>F    g10<1,1,0>F     { align1 1H @7 $4.dst compacted };
mul(16)         g118<1>F        g113<1,1,0>F    0x3f000000F  /* 0.5F */ { align1 1H F@7 compacted };
mul(16)         g120<1>F        g116<1,1,0>F    0x3f000000F  /* 0.5F */ { align1 1H F@7 compacted };
mad(16)         g96<1>F         g94<8,8,1>F     (abs)g4<8,8,1>F g118<1,1,1>F { align1 1H F@2 };
mad(16)         g103<1>F        g101<8,8,1>F    (abs)g12<8,8,1>F g118<1,1,1>F { align1 1H F@5 };
mad(16)         g108<1>F        g106<8,8,1>F    (abs)g20<8,8,1>F g118<1,1,1>F { align1 1H F@7 };
add(16)         g93<1>F         g91<1,1,0>F     g26<1,1,0>F     { align1 1H $3.dst compacted };
mad(16)         g98<1>F         g96<8,8,1>F     (abs)g8<8,8,1>F g120<1,1,1>F { align1 1H F@4 };
mad(16)         g105<1>F        g103<8,8,1>F    (abs)g16<8,8,1>F g120<1,1,1>F { align1 1H F@4 };
mad(16)         g110<1>F        g108<8,8,1>F    (abs)g24<8,8,1>F g120<1,1,1>F { align1 1H F@4 };
add(16)         g21<1>F         g47<1,1,0>F     -g98<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g29<1>F         g47<1,1,0>F     g98<1,1,0>F     { align1 1H compacted };
add(16)         g23<1>F         g67<1,1,0>F     -g105<1,1,0>F   { align1 1H F@4 compacted };
add(16)         g31<1>F         g67<1,1,0>F     g105<1,1,0>F    { align1 1H compacted };
add(16)         g25<1>F         g93<1,1,0>F     -g110<1,1,0>F   { align1 1H F@5 compacted };
add(16)         g33<1>F         g93<1,1,0>F     g110<1,1,0>F    { align1 1H compacted };
else(16)        JIP:  LABEL16         UIP:  LABEL16             { align1 1H };

LABEL17:
mov(16)         g61<1>UD        0x00000000UD                    { align1 1H I@2 };
mov(16)         g35<1>UD        0x00000000UD                    { align1 1H };

LABEL16:
endif(16)       JIP:  LABEL10                                   { align1 1H };
cmp.nz.f0.0(16) null<1>D        g58<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g111<1>UD       g80<8,8,1>UD    0xffffffffUD    { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
cmp.nz.f0.0(16) g113<1>D        g3.2<0,1,0>D    0D              { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g113<8,8,1>UD   g111<8,8,1>UD   { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL18         UIP:  LABEL18             { align1 1H };
add(16)         g114<1>D        g43<1,1,0>D     12D             { align1 1H I@2 compacted };
add(16)         g119<1>D        g43<1,1,0>D     28D             { align1 1H F@2 compacted };
add(16)         g124<1>D        g43<1,1,0>D     44D             { align1 1H F@1 compacted };
mov(16)         g61<1>UD        0x00000001UD                    { align1 1H };
mov(16)         g37<1>UD        0x00000000UD                    { align1 1H };
cmp.l.f0.0(16)  g116<1>UD       g114<1,1,0>UD   g43<1,1,0>UD    { align1 1H I@5 compacted };
mov(8)          g77<2>UD        g114<4,4,1>UD                   { align1 1Q $3.src };
mov(8)          g79<2>UD        g115<4,4,1>UD                   { align1 2Q $3.src };
mov(8)          g81<2>UD        g119<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g83<2>UD        g120<4,4,1>UD                   { align1 2Q I@7 };
cmp.l.f0.0(16)  g121<1>UD       g119<1,1,0>UD   g43<1,1,0>UD    { align1 1H F@7 compacted };
mov(8)          g85<2>UD        g124<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g87<2>UD        g125<4,4,1>UD                   { align1 2Q I@7 };
cmp.l.f0.0(16)  g126<1>UD       g124<1,1,0>UD   g43<1,1,0>UD    { align1 1H F@1 compacted };
add(16)         g118<1>D        -g116<1,1,0>D   g45<1,1,0>D     { align1 1H A@2 compacted };
add(16)         g123<1>D        -g121<1,1,0>D   g45<1,1,0>D     { align1 1H I@5 compacted };
add(16)         g4<1>D          -g126<1,1,0>D   g45<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g77.1<2>UD      g118<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g79.1<2>UD      g119<4,4,1>UD                   { align1 2Q I@4 };
mov(8)          g81.1<2>UD      g123<4,4,1>UD                   { align1 1Q I@4 };
mov(8)          g83.1<2>UD      g124<4,4,1>UD                   { align1 2Q I@5 };
mov(8)          g85.1<2>UD      g4<4,4,1>UD                     { align1 1Q I@5 };
mov(8)          g87.1<2>UD      g5<4,4,1>UD                     { align1 2Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@5 };
send(16)        g29UD           g77UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
send(16)        g31UD           g81UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g33UD           g85UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
mov(16)         g21<1>UD        g29<8,8,1>UD                    { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
mov(16)         g23<1>UD        g31<8,8,1>UD                    { align1 1H F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
mov(16)         g25<1>UD        g33<8,8,1>UD                    { align1 1H F@2 };

LABEL18:
endif(16)       JIP:  LABEL10                                   { align1 1H };

LABEL10:
else(16)        JIP:  LABEL3          UIP:  LABEL3              { align1 1H };

LABEL4:
mov(16)         g61<1>UD        0x00000000UD                    { align1 1H I@7 };
mov(16)         g35<1>UD        0x00000000UD                    { align1 1H I@7 };

LABEL3:
endif(16)       JIP:  LABEL19                                   { align1 1H };

LABEL19:
else(16)        JIP:  LABEL1          UIP:  LABEL1              { align1 1H };

LABEL2:
mov(16)         g61<1>UD        0x00000000UD                    { align1 1H I@4 };
mov(16)         g35<1>UD        0x00000000UD                    { align1 1H I@4 };
mov(16)         g37<1>UD        0x00000000UD                    { align1 1H I@7 };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
mov(16)         g5<1>D          0D                              { align1 WE_all 1H I@4 };
mov(16)         g5<1>D          g61<8,8,1>D                     { align1 1H };
cmp.z.f0.0(16)  null<1>D        g39<8,8,1>D     0D              { align1 1H };
add(8)          g5.1<2>D        g5<8,4,2>D      g5.1<8,4,2>D    { align1 WE_all 1Q I@2 };
add(4)          g5.2<4>D        g5.1<8,2,4>D    g5.2<8,2,4>D    { align1 WE_all 1N I@1 };
add(4)          g5.3<4>D        g5.1<8,2,4>D    g5.3<8,2,4>D    { align1 WE_all 1N I@1 };
add(4)          g5.4<1>D        g5.3<0,1,0>D    g5.4<4,4,1>D    { align1 WE_all 1N I@1 };
add(4)          g6.4<1>D        g6.3<0,1,0>D    g6.4<4,4,1>D    { align1 WE_all 1N I@2 };
add(8)          g6<1>D          g5.7<0,1,0>D    g6<1,1,0>D      { align1 WE_all 1Q I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL21         UIP:  LABEL20             { align1 1H };
add(16)         g7<1>D          g2<0,1,0>D      36D             { align1 1H F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
mov(16)         g104<1>D        g6.7<0,1,0>D                    { align1 1H };
cmp.l.f0.0(16)  g9<1>UD         g7<1,1,0>UD     g2<0,1,0>UD     { align1 1H A@1 compacted };
mov(8)          g100<2>UD       g7<4,4,1>UD                     { align1 1Q };
mov(8)          g102<2>UD       g8<4,4,1>UD                     { align1 2Q F@7 };
add(16)         g11<1>D         -g9<1,1,0>D     g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g100.1<2>UD     g11<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g102.1<2>UD     g12<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g59UD           g100UD          g104UD          0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $9 };
else(16)        JIP:  LABEL20         UIP:  LABEL20             { align1 1H };

LABEL21:
mov(16)         g59<1>UD        0x00000000UD                    { align1 1H $9.dst };

LABEL20:
endif(16)       JIP:  LABEL0                                    { align1 1H };
mov(16)         g14<1>D         0D                              { align1 WE_all 1H F@1 };
mov(16)         g14<1>D         g61<8,8,1>D                     { align1 1H };
cmp.z.f0.0(16)  null<1>D        g61<8,8,1>D     0D              { align1 1H };
add(16)         g16<1>W         g55<16,16,1>UW  -1W             { align1 WE_all 1H F@1 };
mov(16)         a0<1>UW         0x01c0UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g16<8,8,1>W     0x0002UW        { align1 WE_all 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x01c0UW        { align1 WE_all 1H A@1 };
mov(16)         g12<1>UD        g[a0]<VxH,1,0>UD                { align1 WE_all 1H A@1 compacted };
mov(1)          g12<1>D         0D                              { align1 WE_all 1N I@1 };
add(8)          g12.1<2>D       g12<8,4,2>D     g12.1<8,4,2>D   { align1 WE_all 1Q I@1 };
add(4)          g12.2<4>D       g12.1<8,2,4>D   g12.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g12.3<4>D       g12.1<8,2,4>D   g12.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g12.4<1>D       g12.3<0,1,0>D   g12.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g13.4<1>D       g13.3<0,1,0>D   g13.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(8)          g13<1>D         g12.7<0,1,0>D   g13<1,1,0>D     { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g17<1>D         g59<0,1,0>D     g12<1,1,0>D     { align1 1H compacted };
(+f0.0) if(16)  JIP:  LABEL23         UIP:  LABEL22             { align1 1H };
mov(16)         g25<1>UD        0x7f800000UD                    { align1 1H F@2 };
mov(16)         g23<1>UD        0x7f800000UD                    { align1 1H F@4 };
mov(16)         g21<1>UD        0x7f800000UD                    { align1 1H F@6 };
mov(16)         g33<1>UD        0xff800000UD                    { align1 1H F@1 };
mov(16)         g31<1>UD        0xff800000UD                    { align1 1H F@3 };
mov(16)         g29<1>UD        0xff800000UD                    { align1 1H F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g68<1>UD        0x7f800000UD                    { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g66<1>UD        0x7f800000UD                    { align1 1H F@3 };
mov(16)         g64<1>UD        0x7f800000UD                    { align1 1H $2.src };
mov(16)         g74<1>UD        0xff800000UD                    { align1 1H $3.src };
mov(16)         g72<1>UD        0xff800000UD                    { align1 1H $3.src };
mov(16)         g70<1>UD        0xff800000UD                    { align1 1H $4.src };
else(16)        JIP:  LABEL22         UIP:  LABEL22             { align1 1H };

LABEL23:
shl(16)         g19<1>D         g17<8,8,1>D     0x00000005UD    { align1 1H I@2 };
shr(16)         g43<1>UD        g17<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
add(16)         g45<1>D         g3<0,1,0>D      g19<1,1,0>D     { align1 1H I@2 compacted };
shl(16)         g18<1>D         g37<8,8,1>D     0x00000018UD    { align1 1H };
cmp.l.f0.0(16)  g47<1>UD        g45<1,1,0>UD    g3<0,1,0>UD     { align1 1H A@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g105<2>UD       g45<4,4,1>UD                    { align1 1Q F@3 };
mov(8)          g107<2>UD       g46<4,4,1>UD                    { align1 2Q F@7 };
or(16)          g27<1>UD        g41<1,1,0>UD    g18<1,1,0>UD    { align1 1H A@4 compacted };
add3(16)        g49<1>D         g3.1<0,1,0>D    g43<8,8,1>D     -g47<1,1,1>D { align1 1H I@4 };
mov(8)          g107.1<2>UD     g50<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g105.1<2>UD     g49<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g105UD          g21UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $9 };
add(16)         g51<1>D         g45<1,1,0>D     16D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
cmp.l.f0.0(16)  g53<1>UD        g51<1,1,0>UD    g45<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g106<2>UD       g51<4,4,1>UD                    { align1 1Q $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $9.src };
mov(8)          g108<2>UD       g52<4,4,1>UD                    { align1 2Q F@7 };
add(16)         g55<1>D         -g53<1,1,0>D    g49<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g108.1<2>UD     g56<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g106.1<2>UD     g55<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g106UD          g29UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g70<1>F         g21<1,1,0>F     g29<1,1,0>F     { align1 1H $9.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g72<1>F         g23<1,1,0>F     g31<1,1,0>F     { align1 1H $9.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g74<1>F         g25<1,1,0>F     g33<1,1,0>F     { align1 1H $9.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g64<1>UD        g70<8,8,1>UD                    { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g66<1>UD        g72<8,8,1>UD                    { align1 1H F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g68<1>UD        g74<8,8,1>UD                    { align1 1H F@1 };

LABEL22:
endif(16)       JIP:  LABEL0                                    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g39<8,8,1>D     0D              { align1 1H };
mov(16)         g52<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@3 compacted };
mov(16)         g52<1>F         g21<1,1,0>F                     { align1 1H compacted };
mov(16)         g54<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@3 compacted };
mov(16)         g54<1>F         g23<1,1,0>F                     { align1 1H compacted };
mov(16)         g56<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@3 compacted };
mov(16)         g56<1>F         g25<1,1,0>F                     { align1 1H compacted };
mov(16)         g58<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g58<1>F         g29<1,1,0>F                     { align1 1H compacted };
mov(16)         g60<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H @6 $9.dst compacted };
mov(16)         g60<1>F         g31<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g62<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H F@6 compacted };
mov(16)         g62<1>F         g33<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g76<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@5 compacted };
mov(16)         g76<1>F         g64<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g78<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@4 compacted };
mov(16)         g78<1>F         g66<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g80<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@3 compacted };
mov(16)         g80<1>F         g68<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g82<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g82<1>F         g70<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g84<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g84<1>F         g72<1,1,0>F                     { align1 1H compacted };
mov(16)         g5<1>F          0xff800000F      /* -infF */    { align1 WE_all 1H I@3 compacted };
mov(16)         g5<1>F          g74<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g49<2>UD        g52.1<8,4,2>UD                  { align1 WE_all 1Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g86<2>UD        g54.1<8,4,2>UD                  { align1 WE_all 1Q $8.src };
mov(8)          g120<2>UD       g56.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
mov(8)          g15<2>UD        g58.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
mov(8)          g41<2>UD        g62.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g88<2>UD        g78.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g93<2>UD        g80.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g98<2>UD        g82.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g103<2>UD       g84.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(8)          g108<2>UD       g5.1<8,4,2>UD                   { align1 WE_all 1Q F@1 };
sel.l(8)        g47<2>F         g52<8,4,2>F     g49<8,4,2>F     { align1 WE_all 1Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g28<2>UD        g60.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
sel.l(8)        g118<2>F        g56<8,4,2>F     g120<8,4,2>F    { align1 WE_all 1Q I@7 };
mov(8)          g64<2>UD        g76.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
sel.ge(8)       g13<2>F         g58<8,4,2>F     g15<8,4,2>F     { align1 WE_all 1Q I@7 };
sel.ge(8)       g39<2>F         g62<8,4,2>F     g41<8,4,2>F     { align1 WE_all 1Q I@7 };
sel.l(8)        g67<2>F         g78<8,4,2>F     g88<8,4,2>F     { align1 WE_all 1Q I@7 };
sel.l(8)        g72<2>F         g54<8,4,2>F     g86<8,4,2>F     { align1 WE_all 1Q };
sel.l(8)        g91<2>F         g80<8,4,2>F     g93<8,4,2>F     { align1 WE_all 1Q I@6 };
sel.ge(8)       g96<2>F         g82<8,4,2>F     g98<8,4,2>F     { align1 WE_all 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.ge(8)       g101<2>F        g84<8,4,2>F     g103<8,4,2>F    { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sel.ge(8)       g106<2>F        g5<8,4,2>F      g108<8,4,2>F    { align1 WE_all 1Q I@3 };
mov(8)          g52.1<2>UD      g47<8,4,2>UD                    { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.ge(8)       g26<2>F         g60<8,4,2>F     g28<8,4,2>F     { align1 WE_all 1Q I@3 };
mov(8)          g56.1<2>UD      g118<8,4,2>UD                   { align1 WE_all 1Q F@7 };
sel.l(8)        g44<2>F         g76<8,4,2>F     g64<8,4,2>F     { align1 WE_all 1Q I@3 };
mov(8)          g58.1<2>UD      g13<8,4,2>UD                    { align1 WE_all 1Q F@7 };
mov(8)          g62.1<2>UD      g39<8,4,2>UD                    { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g78.1<2>UD      g67<8,4,2>UD                    { align1 WE_all 1Q F@7 };
mov(8)          g54.1<2>UD      g72<8,4,2>UD                    { align1 WE_all 1Q F@7 };
mov(8)          g80.1<2>UD      g91<8,4,2>UD                    { align1 WE_all 1Q F@6 };
mov(8)          g82.1<2>UD      g96<8,4,2>UD                    { align1 WE_all 1Q F@5 };
mov(8)          g84.1<2>UD      g101<8,4,2>UD                   { align1 WE_all 1Q F@4 };
mov(8)          g5.1<2>UD       g106<8,4,2>UD                   { align1 WE_all 1Q F@3 };
mov(8)          g60.1<2>UD      g26<8,4,2>UD                    { align1 WE_all 1Q F@2 };
mov(4)          g7<4>UD         g56.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g3<4>UD         g56.1<8,2,4>UD                  { align1 WE_all 1N $1.dst };
mov(8)          g76.1<2>UD      g44<8,4,2>UD                    { align1 WE_all 1Q F@1 };
mov(4)          g20<4>UD        g58.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g18<4>UD        g58.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g88<4>UD        g62.2<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g86<4>UD        g62.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g98<4>UD        g78.1<8,2,4>UD                  { align1 WE_all 1N F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(4)          g104<4>UD       g80.1<8,2,4>UD                  { align1 WE_all 1N F@4 };
mov(4)          g112<4>UD       g82.2<8,2,4>UD                  { align1 WE_all 1N $1.src };
mov(4)          g110<4>UD       g82.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g118<4>UD       g84.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g116<4>UD       g84.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g64<4>UD        g52.1<8,2,4>UD                  { align1 WE_all 1N F@1 };
mov(4)          g124<4>UD       g5.2<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g122<4>UD       g5.1<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g33<4>UD        g60.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g31<4>UD        g60.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g66<4>UD        g52.2<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g126<4>F        g3<8,2,4>F      g7<8,2,4>F      { align1 WE_all 1N };
mov(4)          g94<4>UD        g76.2<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g92<4>UD        g76.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g96<4>UD        g54.1<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g16<4>F         g18<8,2,4>F     g20<8,2,4>F     { align1 WE_all 1N };
sel.ge(4)       g42<4>F         g86<8,2,4>F     g88<8,2,4>F     { align1 WE_all 1N };
mov(4)          g100<4>UD       g78.2<8,2,4>UD                  { align1 WE_all 1N $9.src };
mov(4)          g102<4>UD       g54.2<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g106<4>UD       g80.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g29<4>F         g31<8,2,4>F     g33<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g50<4>F         g64<8,2,4>F     g66<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g56.2<4>UD      g126<8,2,4>UD                   { align1 WE_all 1N F@5 };
mov(4)          g58.2<4>UD      g16<8,2,4>UD                    { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(4)          g62.2<4>UD      g42<8,2,4>UD                    { align1 WE_all 1N F@3 };
sel.l(4)        g90<4>F         g96<8,2,4>F     g102<8,2,4>F    { align1 WE_all 1N I@5 };
mov(4)          g60.2<4>UD      g29<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g52.2<4>UD      g50<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g12<4>UD        g56.3<8,2,4>UD                  { align1 WE_all 1N I@5 };
mov(4)          g10<4>UD        g56.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g25<4>UD        g58.3<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g23<4>UD        g58.1<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g65<4>F         g92<8,2,4>F     g94<8,2,4>F     { align1 WE_all 1N };
mov(4)          g54.2<4>UD      g90<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g38<4>UD        g60.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g36<4>UD        g60.1<8,2,4>UD                  { align1 WE_all 1N $10.src };
mov(4)          g71<4>UD        g52.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g69<4>UD        g52.1<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g8<4>F          g10<8,2,4>F     g12<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g21<4>F         g23<8,2,4>F     g25<8,2,4>F     { align1 WE_all 1N I@6 };
mov(4)          g76.2<4>UD      g65<8,2,4>UD                    { align1 WE_all 1N F@3 };
sel.l(4)        g94<4>F         g104<8,2,4>F    g106<8,2,4>F    { align1 WE_all 1N };
sel.l(4)        g89<4>F         g98<8,2,4>F     g100<8,2,4>F    { align1 WE_all 1N I@6 };
mov(4)          g91<4>UD        g62.3<8,2,4>UD                  { align1 WE_all 1N F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sel.ge(4)       g34<4>F         g36<8,2,4>F     g38<8,2,4>F     { align1 WE_all 1N I@5 };
sel.l(4)        g67<4>F         g69<8,2,4>F     g71<8,2,4>F     { align1 WE_all 1N I@3 };
mov(4)          g56.3<4>UD      g8<8,2,4>UD                     { align1 WE_all 1N F@6 };
mov(4)          g58.3<4>UD      g21<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g80.2<4>UD      g94<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g78.2<4>UD      g89<8,2,4>UD                    { align1 WE_all 1N F@3 };
sel.ge(4)       g104<4>F        g116<8,2,4>F    g118<8,2,4>F    { align1 WE_all 1N };
mov(4)          g97<4>UD        g76.3<8,2,4>UD                  { align1 WE_all 1N A@4 };
sel.ge(4)       g99<4>F         g110<8,2,4>F    g112<8,2,4>F    { align1 WE_all 1N };
mov(4)          g60.3<4>UD      g34<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g52.3<4>UD      g67<8,2,4>UD                    { align1 WE_all 1N F@3 };
sel.l(4)        g56.4<1>F       g56.3<0,1,0>F   g56.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.l(4)        g57.4<1>F       g57.3<0,1,0>F   g57.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.ge(4)       g58.4<1>F       g58.3<0,1,0>F   g58.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.ge(4)       g59.4<1>F       g59.3<0,1,0>F   g59.4<4,4,1>F   { align1 WE_all 1N I@6 };
mov(4)          g107<4>UD       g80.1<8,2,4>UD                  { align1 WE_all 1N A@5 };
mov(4)          g101<4>UD       g78.1<8,2,4>UD                  { align1 WE_all 1N A@5 };
mov(4)          g84.2<4>UD      g104<8,2,4>UD                   { align1 WE_all 1N F@6 };
mov(4)          g95<4>UD        g76.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g89<4>UD        g62.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g82.2<4>UD      g99<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g117<4>UD       g54.3<8,2,4>UD                  { align1 WE_all 1N F@6 };
sel.ge(4)       g60.4<1>F       g60.3<0,1,0>F   g60.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.ge(4)       g61.4<1>F       g61.3<0,1,0>F   g61.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.l(4)        g52.4<1>F       g52.3<0,1,0>F   g52.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.l(4)        g53.4<1>F       g53.3<0,1,0>F   g53.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.l(8)        g57<1>F         g56.7<0,1,0>F   g57<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(4)       g109<4>F        g122<8,2,4>F    g124<8,2,4>F    { align1 WE_all 1N };
mov(4)          g111<4>UD       g54.1<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g59<1>F         g58.7<0,1,0>F   g59<8,8,1>F     { align1 WE_all 1Q F@7 };
mov(4)          g119<4>UD       g84.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
sel.l(4)        g66<4>F         g95<8,2,4>F     g97<8,2,4>F     { align1 WE_all 1N I@6 };
sel.ge(4)       g43<4>F         g89<8,2,4>F     g91<8,2,4>F     { align1 WE_all 1N I@5 };
mov(4)          g115<4>UD       g82.3<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g113<4>UD       g82.1<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g61<1>F         g60.7<0,1,0>F   g61<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.l(8)        g53<1>F         g52.7<0,1,0>F   g53<8,8,1>F     { align1 WE_all 1Q F@7 };
mov(4)          g103<4>UD       g78.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g5.2<4>UD       g109<8,2,4>UD                   { align1 WE_all 1N F@6 };
sel.l(4)        g105<4>F        g111<8,2,4>F    g117<8,2,4>F    { align1 WE_all 1N I@6 };
mov(4)          g76.3<4>UD      g66<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g62.3<4>UD      g43<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g121<4>UD       g84.3<8,2,4>UD                  { align1 WE_all 1N F@7 };
sel.l(4)        g90<4>F         g101<8,2,4>F    g103<8,2,4>F    { align1 WE_all 1N I@5 };
mov(4)          g3<4>UD         g5.3<8,2,4>UD                   { align1 WE_all 1N I@4 };
mov(4)          g125<4>UD       g5.1<8,2,4>UD                   { align1 WE_all 1N F@7 };
mov(4)          g54.3<4>UD      g105<8,2,4>UD                   { align1 WE_all 1N F@2 };
sel.l(4)        g76.4<1>F       g76.3<0,1,0>F   g76.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.l(4)        g77.4<1>F       g77.3<0,1,0>F   g77.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.ge(4)       g62.4<1>F       g62.3<0,1,0>F   g62.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g63.4<1>F       g63.3<0,1,0>F   g63.4<4,4,1>F   { align1 WE_all 1N I@5 };
mov(4)          g109<4>UD       g80.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g78.3<4>UD      g90<8,2,4>UD                    { align1 WE_all 1N F@5 };
sel.ge(4)       g100<4>F        g113<8,2,4>F    g115<8,2,4>F    { align1 WE_all 1N };
sel.l(4)        g54.4<1>F       g54.3<0,1,0>F   g54.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g55.4<1>F       g55.3<0,1,0>F   g55.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(8)        g77<1>F         g76.7<0,1,0>F   g77<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.ge(8)       g63<1>F         g62.7<0,1,0>F   g63<8,8,1>F     { align1 WE_all 1Q F@5 };
sel.ge(4)       g105<4>F        g119<8,2,4>F    g121<8,2,4>F    { align1 WE_all 1N I@3 };
sel.l(4)        g95<4>F         g107<8,2,4>F    g109<8,2,4>F    { align1 WE_all 1N I@2 };
sel.l(4)        g78.4<1>F       g78.3<0,1,0>F   g78.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g79.4<1>F       g79.3<0,1,0>F   g79.4<4,4,1>F   { align1 WE_all 1N I@1 };
mov(4)          g82.3<4>UD      g100<8,2,4>UD                   { align1 WE_all 1N F@7 };
sel.l(8)        g55<1>F         g54.7<0,1,0>F   g55<8,8,1>F     { align1 WE_all 1Q F@7 };
mov(4)          g84.3<4>UD      g105<8,2,4>UD                   { align1 WE_all 1N F@5 };
mov(4)          g80.3<4>UD      g95<8,2,4>UD                    { align1 WE_all 1N F@4 };
sel.ge(4)       g110<4>F        g125<8,2,4>F    g3<8,2,4>F      { align1 WE_all 1N I@7 };
sel.l(8)        g79<1>F         g78.7<0,1,0>F   g79<8,8,1>F     { align1 WE_all 1Q F@3 };
sel.ge(4)       g82.4<1>F       g82.3<0,1,0>F   g82.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g83.4<1>F       g83.3<0,1,0>F   g83.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g84.4<1>F       g84.3<0,1,0>F   g84.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g85.4<1>F       g85.3<0,1,0>F   g85.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g80.4<1>F       g80.3<0,1,0>F   g80.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g81.4<1>F       g81.3<0,1,0>F   g81.4<4,4,1>F   { align1 WE_all 1N I@1 };
mov(4)          g5.3<4>UD       g110<8,2,4>UD                   { align1 WE_all 1N F@7 };
sel.ge(8)       g83<1>F         g82.7<0,1,0>F   g83<8,8,1>F     { align1 WE_all 1Q F@5 };
sel.ge(8)       g85<1>F         g84.7<0,1,0>F   g85<8,8,1>F     { align1 WE_all 1Q F@4 };
sel.l(8)        g81<1>F         g80.7<0,1,0>F   g81<8,8,1>F     { align1 WE_all 1Q F@3 };
sel.ge(4)       g5.4<1>F        g5.3<0,1,0>F    g5.4<4,4,1>F    { align1 WE_all 1N I@1 };
sel.ge(4)       g6.4<1>F        g6.3<0,1,0>F    g6.4<4,4,1>F    { align1 WE_all 1N I@1 };
sel.ge(8)       g6<1>F          g5.7<0,1,0>F    g6<8,8,1>F      { align1 WE_all 1Q F@1 };
(+f0.0) if(16)  JIP:  LABEL24         UIP:  LABEL24             { align1 1H };
add(16)         g7<1>D          g2.2<0,1,0>D    128D            { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
mov(16)         g111<1>D        g53.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g9<1>UD         g7<1,1,0>UD     g2.2<0,1,0>UD   { align1 1H compacted };
mov(8)          g107<2>UD       g7<4,4,1>UD                     { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@6 };
mov(8)          g109<2>UD       g8<4,4,1>UD                     { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g11<1>D         -g9<1,1,0>D     g2.3<0,1,0>D    { align1 1H compacted };
mov(8)          g107.1<2>UD     g11<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g109.1<2>UD     g12<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g107UD          g111UD          0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $11 };
add(16)         g12<1>D         g2.2<0,1,0>D    132D            { align1 1H compacted };
mov(16)         g116<1>D        g55.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g14<1>UD        g12<1,1,0>UD    0x00000084UD    { align1 1H compacted };
mov(8)          g112<2>UD       g12<4,4,1>UD                    { align1 1Q $11.src };
mov(8)          g114<2>UD       g13<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g16<1>D         -g14<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
mov(8)          g112.1<2>UD     g16<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g114.1<2>UD     g17<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g112UD          g116UD          0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
add(16)         g17<1>D         g2.2<0,1,0>D    136D            { align1 1H compacted };
mov(16)         g121<1>D        g57.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g19<1>UD        g17<1,1,0>UD    0x00000088UD    { align1 1H compacted };
mov(8)          g117<2>UD       g17<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g119<2>UD       g18<4,4,1>UD                    { align1 2Q };
add(16)         g21<1>D         -g19<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g117.1<2>UD     g21<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g119.1<2>UD     g22<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g117UD          g121UD          0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $12 };
add(16)         g22<1>D         g2.2<0,1,0>D    140D            { align1 1H compacted };
mov(16)         g126<1>D        g59.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g24<1>UD        g22<1,1,0>UD    0x0000008cUD    { align1 1H compacted };
mov(8)          g122<2>UD       g22<4,4,1>UD                    { align1 1Q $12.src };
mov(8)          g124<2>UD       g23<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g26<1>D         -g24<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
mov(8)          g122.1<2>UD     g26<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g124.1<2>UD     g27<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g122UD          g126UD          0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $13 };
add(16)         g27<1>D         g2.2<0,1,0>D    144D            { align1 1H compacted };
mov(16)         g11<1>D         g61.7<0,1,0>D                   { align1 1H };
cmp.l.f0.0(16)  g29<1>UD        g27<1,1,0>UD    0x00000090UD    { align1 1H I@2 compacted };
mov(8)          g7<2>UD         g27<4,4,1>UD                    { align1 1Q };
mov(8)          g9<2>UD         g28<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g31<1>D         -g29<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
mov(8)          g7.1<2>UD       g31<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g9.1<2>UD       g32<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g7UD            g11UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $14 };
add(16)         g32<1>D         g2.2<0,1,0>D    148D            { align1 1H compacted };
mov(16)         g16<1>D         g63.7<0,1,0>D                   { align1 1H };
cmp.l.f0.0(16)  g34<1>UD        g32<1,1,0>UD    0x00000094UD    { align1 1H I@2 compacted };
mov(8)          g12<2>UD        g32<4,4,1>UD                    { align1 1Q $14.src };
mov(8)          g14<2>UD        g33<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g36<1>D         -g34<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
mov(8)          g12.1<2>UD      g36<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g14.1<2>UD      g37<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g12UD           g16UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $15 };
mov(16)         g21<1>D         g77.7<0,1,0>D                   { align1 1H };
mov(8)          g17.1<2>D       g2.1<0,1,0>D                    { align1 1Q $15.src };
mov(8)          g19.1<2>D       g2.1<0,1,0>D                    { align1 2Q };
mov(8)          g17<2>D         g2<0,1,0>D                      { align1 1Q I@2 };
mov(8)          g19<2>D         g2<0,1,0>D                      { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g17UD           g21UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };
add(16)         g37<1>D         g2<0,1,0>D      4D              { align1 1H compacted };
mov(16)         g26<1>D         g79.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g39<1>UD        g37<1,1,0>UD    g2<0,1,0>UD     { align1 1H compacted };
mov(8)          g22<2>UD        g37<4,4,1>UD                    { align1 1Q $0.src };
mov(8)          g24<2>UD        g38<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g41<1>D         -g39<1,1,0>D    g2.1<0,1,0>D    { align1 1H compacted };
mov(8)          g22.1<2>UD      g41<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g24.1<2>UD      g42<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g22UD           g26UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };
add(16)         g42<1>D         g2<0,1,0>D      8D              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
mov(16)         g31<1>D         g81.7<0,1,0>D                   { align1 1H };
cmp.l.f0.0(16)  g44<1>UD        g42<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@2 compacted };
mov(8)          g27<2>UD        g42<4,4,1>UD                    { align1 1Q $1.src };
mov(8)          g29<2>UD        g43<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g46<1>D         -g44<1,1,0>D    g2.1<0,1,0>D    { align1 1H compacted };
mov(8)          g27.1<2>UD      g46<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g29.1<2>UD      g47<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g27UD           g31UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $2 };
add(16)         g47<1>D         g2<0,1,0>D      16D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
mov(16)         g36<1>D         g83.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g49<1>UD        g47<1,1,0>UD    g2<0,1,0>UD     { align1 1H compacted };
mov(8)          g32<2>UD        g47<4,4,1>UD                    { align1 1Q $2.src };
mov(8)          g34<2>UD        g48<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g51<1>D         -g49<1,1,0>D    g2.1<0,1,0>D    { align1 1H compacted };
mov(8)          g32.1<2>UD      g51<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g34.1<2>UD      g52<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g32UD           g36UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $3 };
add(16)         g52<1>D         g2<0,1,0>D      20D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
mov(16)         g41<1>D         g85.7<0,1,0>D                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g54<1>UD        g52<1,1,0>UD    0x00000014UD    { align1 1H compacted };
mov(8)          g37<2>UD        g52<4,4,1>UD                    { align1 1Q $3.src };
mov(8)          g39<2>UD        g53<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g56<1>D         -g54<1,1,0>D    g2.1<0,1,0>D    { align1 1H compacted };
mov(8)          g37.1<2>UD      g56<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g39.1<2>UD      g57<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g37UD           g41UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };
add(16)         g57<1>D         g2<0,1,0>D      24D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g46<1>D         g6.7<0,1,0>D                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g59<1>UD        g57<1,1,0>UD    0x00000018UD    { align1 1H compacted };
mov(8)          g42<2>UD        g57<4,4,1>UD                    { align1 1Q $4.src };
mov(8)          g44<2>UD        g58<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g61<1>D         -g59<1,1,0>D    g2.1<0,1,0>D    { align1 1H compacted };
mov(8)          g44.1<2>UD      g62<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g42.1<2>UD      g61<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g42UD           g46UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $5 };

LABEL24:
endif(16)       JIP:  LABEL0                                    { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL25                                   { align1 1H };

LABEL25:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q $13.src };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_code[] = {
    0x80000065, 0x6f058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x3e050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa006f0c, 0x00340000,
    0xe2703040, 0x04016f03, 0x80030061, 0x37054410,
    0x00000000, 0x76543210, 0x00041b69, 0x4b058660,
    0x02463e05, 0x00000004, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa00700c, 0x00300000, 0x64371a40, 0x00803795,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x27050160, 0x00463705, 0x00000000,
    0xa0291940, 0x4b002702, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00041970, 0x00010220,
    0x52462905, 0x000002c4, 0x01040022, 0x0001c060,
    0x00002898, 0x00002898, 0x00040069, 0x4c058660,
    0x02462905, 0x00000003, 0xa04f1940, 0x4c01025a,
    0xe04d0068, 0x01d02903, 0x27511a70, 0x02104f0b,
    0x00030061, 0x3f060220, 0x00344f05, 0x00000000,
    0x00130061, 0x41060220, 0x00345005, 0x00000000,
    0x00041b52, 0x53040660, 0x0e2e02a4, 0x51054d05,
    0x00131961, 0x41260220, 0x00345405, 0x00000000,
    0x00031a61, 0x3f260220, 0x00345305, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x2b240000, 0xfb043f24, 0x000c0000,
    0x00032261, 0x44060220, 0x00342b05, 0x00000000,
    0x00132261, 0x46060220, 0x00342c05, 0x00000000,
    0x00042266, 0x00010220, 0x22462b05, 0x00462d05,
    0x00031b61, 0x44260220, 0x00342d05, 0x00000000,
    0x00131b61, 0x46260220, 0x00342e05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000d30, 0x00000d00,
    0xa0540040, 0x03002b03, 0xa05a0040, 0x03802b03,
    0x27561a70, 0x2b005403, 0x275c1a70, 0x2b005a03,
    0x00033261, 0x40060220, 0x00345405, 0x00000000,
    0x00133261, 0x42060220, 0x00345505, 0x00000000,
    0x00030061, 0x48060220, 0x00345a05, 0x00000000,
    0x00130061, 0x4a060220, 0x00345b05, 0x00000000,
    0xa0581e40, 0x2d025602, 0xa05e1e40, 0x2d025c02,
    0x00031a61, 0x40260220, 0x00345805, 0x00000000,
    0x00131b61, 0x42260220, 0x00345905, 0x00000000,
    0x00031b61, 0x48260220, 0x00345e05, 0x00000000,
    0x00131c61, 0x4a260220, 0x00345f05, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x59140000, 0xfb044024, 0x00040000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x5f240000, 0xfb044824, 0x000c0000,
    0x00042261, 0x25050020, 0x0066591f, 0x00000000,
    0x00042366, 0x00010220, 0x22465f05, 0x00466105,
    0x01040022, 0x0001c060, 0x00000bc0, 0x00000ba0,
    0xa0630040, 0x08005f03, 0xa0690040, 0x08c05f03,
    0x27651a70, 0x5f006303, 0x00033361, 0x49060220,
    0x00346305, 0x00000000, 0x00133361, 0x4b060220,
    0x00346405, 0x00000000, 0xe76b1c70, 0x08c06903,
    0x00033261, 0x3f060220, 0x00346905, 0x00000000,
    0x00133261, 0x41060220, 0x00346a05, 0x00000000,
    0xa0671e40, 0x61026502, 0xa06d1c40, 0x61026b02,
    0x00031a61, 0x49260220, 0x00346705, 0x00000000,
    0x00131b61, 0x4b260220, 0x00346805, 0x00000000,
    0x00031b61, 0x3f260220, 0x00346d05, 0x00000000,
    0x00131c61, 0x41260220, 0x00346e05, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x6f140000, 0xfb044924, 0x00040000,
    0xa7002370, 0x7f836f01, 0x01040022, 0x0001c060,
    0x00000170, 0x00000160, 0xa0710040, 0x08405f03,
    0xe7731970, 0x08407103, 0x00033361, 0x4a060220,
    0x00347105, 0x00000000, 0x00133361, 0x4c060220,
    0x00347205, 0x00000000, 0xa0751b40, 0x61027302,
    0x00031961, 0x4a260220, 0x00347505, 0x00000000,
    0x00131a61, 0x4c260220, 0x00347605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x76140000, 0xfb044a24, 0x00040000,
    0xa7002370, 0x7f837601, 0x01040022, 0x0001c060,
    0x000000b0, 0x000000a0, 0xa0771140, 0x08805f03,
    0xe7791970, 0x08807703, 0x00033361, 0x4b060220,
    0x00347705, 0x00000000, 0x00133361, 0x4d060220,
    0x00347805, 0x00000000, 0xa07b1b40, 0x61027902,
    0x00031961, 0x4b260220, 0x00347b05, 0x00000000,
    0x00131a61, 0x4d260220, 0x00347c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x7c140000, 0xfb044b24, 0x00040000,
    0xe73a2370, 0x7f837c00, 0x00040024, 0x0001c060,
    0x00000020, 0x00000020, 0x00041161, 0x3a054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040024, 0x0001c060,
    0x00000020, 0x00000020, 0x00040961, 0x3a054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000928, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x7d140000,
    0xfb043f24, 0x00040000, 0xa7002270, 0x7f837d01,
    0x01040022, 0x0001c060, 0x00000170, 0x00000160,
    0xa0040040, 0x09005f03, 0xe7061970, 0x09000403,
    0x00033361, 0x4c060220, 0x00340405, 0x00000000,
    0x00133361, 0x4e060220, 0x00340505, 0x00000000,
    0xa0081b40, 0x61020602, 0x00031961, 0x4c260220,
    0x00340805, 0x00000000, 0x00131a61, 0x4e260220,
    0x00340905, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x09140000,
    0xfb044c24, 0x00040000, 0xa7002370, 0x7f830901,
    0x01040022, 0x0001c060, 0x000000b0, 0x000000a0,
    0xa00a1140, 0x09405f03, 0xe70c1970, 0x09400a03,
    0x00033361, 0x4d060220, 0x00340a05, 0x00000000,
    0x00133361, 0x4f060220, 0x00340b05, 0x00000000,
    0xa00e1b40, 0x61020c02, 0x00031961, 0x4d260220,
    0x00340e05, 0x00000000, 0x00131a61, 0x4f260220,
    0x00340f05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x0f140000,
    0xfb044d24, 0x00040000, 0xe7382370, 0x7f830f00,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00041161, 0x38054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00040961, 0x38054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000780,
    0xae101170, 0x00002503, 0x20120965, 0x38001003,
    0xa0503366, 0x38221002, 0x00040a65, 0x00010220,
    0x22461205, 0x00463a05, 0x01040022, 0x0001c060,
    0x000004e8, 0x000004c8, 0xa0520040, 0x08405f03,
    0xa0570040, 0x09005f03, 0xa0300040, 0x01002b03,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x04440000, 0xfb044424, 0x003c0000,
    0x00040061, 0x23054220, 0x00000000, 0x000000c0,
    0xe7541c70, 0x08405203, 0x00031c61, 0x63060220,
    0x00345705, 0x00000000, 0x00131d61, 0x65060220,
    0x00345805, 0x00000000, 0x00033261, 0x40060220,
    0x00345205, 0x00000000, 0x00133261, 0x42060220,
    0x00345305, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00031f61, 0x48060220,
    0x00343005, 0x00000000, 0x80103301, 0x00000000,
    0x00000000, 0x00000000, 0x00131f61, 0x4a060220,
    0x00343105, 0x00000000, 0xe7590070, 0x09005703,
    0xa0520040, 0x02002b03, 0x27380070, 0x2b003003,
    0xa0561f40, 0x61025402, 0xa05b1c40, 0x61025902,
    0x27541c70, 0x2b005203, 0x00033361, 0x4c060220,
    0x00345205, 0x00000000, 0x00133361, 0x4e060220,
    0x00345305, 0x00000000, 0xa03c1e40, 0x2d023802,
    0x00131e61, 0x42260220, 0x00345705, 0x00000000,
    0x00031f61, 0x40260220, 0x00345605, 0x00000000,
    0x00031f61, 0x63260220, 0x00345b05, 0x00000000,
    0x00131f61, 0x65260220, 0x00345c05, 0x00000000,
    0xa0561f40, 0x2d025402, 0x00031e61, 0x48260220,
    0x00343c05, 0x00000000, 0x00131f61, 0x4a260220,
    0x00343d05, 0x00000000, 0x80001e01, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x2f240000,
    0xfb044024, 0x000c0000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x33240000,
    0xfb046324, 0x000c0000, 0x00031b61, 0x4c260220,
    0x00345605, 0x00000000, 0x00131c61, 0x4e260220,
    0x00345705, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x0c440000,
    0xfb044824, 0x003c0000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x14440000,
    0xfb044c24, 0x003c0000, 0x25642662, 0x35003300,
    0x205d2540, 0x2f003300, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x25661262, 0x64007d00,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xe0621241, 0x3f005d00, 0x205c1e40, 0x6f007d00,
    0x205e2540, 0x31003500, 0xe0681441, 0x34006600,
    0x2079c441, 0x06006200, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0x203d1b41, 0x0e006200,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x20571941, 0x16006200, 0xe0601641, 0x3f005c00,
    0xe0631641, 0x3f005e00, 0x206b1640, 0x68003300,
    0x0004b35b, 0x59040aa8, 0x0a0a5705, 0x60051405,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x0004e35b, 0x3f040aa8, 0x0a0a3d05, 0x60050c05,
    0x0004f45b, 0x7b040aa8, 0x0a0a7905, 0x60050405,
    0x00041261, 0x3d054220, 0x00000000, 0x00000001,
    0x20731440, 0x2f206b00, 0x206a0040, 0x68007d00,
    0x206c0040, 0x68003500, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0x00040e5b, 0x5b040aa8,
    0x0a0a5905, 0x63051805, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x0004e35b, 0x41040aa8,
    0x0a0a3f05, 0x63051005, 0x0004e45b, 0x7d040aa8,
    0x0a0a7b05, 0x63050805, 0xe0771641, 0x3f007300,
    0x20711640, 0x6f206a00, 0x20741640, 0x31206c00,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x2043d340, 0x12004100, 0x206a1441, 0x16407700,
    0x205e0041, 0x06407700, 0x20650041, 0x0e407700,
    0x202ff440, 0x0a007d00, 0xe0761741, 0x3f007100,
    0xe0781741, 0x3f007400, 0x0004125b, 0x60040aa8,
    0x0a4a5e05, 0x76050405, 0x0004155b, 0x67040aa8,
    0x0a4a6505, 0x76050c05, 0x0004175b, 0x6c040aa8,
    0x0a4a6a05, 0x76051405, 0x205d2340, 0x1a005b00,
    0x0004145b, 0x62040aa8, 0x0a4a6005, 0x78050805,
    0x0004145b, 0x69040aa8, 0x0a4a6705, 0x78051005,
    0x0004145b, 0x6e040aa8, 0x0a4a6c05, 0x78051805,
    0x20151340, 0x62202f00, 0x201d0040, 0x62002f00,
    0x20171440, 0x69204300, 0x201f0040, 0x69004300,
    0x20191540, 0x6e205d00, 0x20210040, 0x6e005d00,
    0x00040024, 0x0001c060, 0x00000030, 0x00000030,
    0x00041a61, 0x3d054220, 0x00000000, 0x00000000,
    0x00040061, 0x23054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000260,
    0x00040070, 0x00018660, 0x26463a05, 0x00000000,
    0x01040962, 0x6f058220, 0x02465005, 0xffffffff,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0xae710070, 0x00010343, 0x00041965, 0x00010220,
    0x22467105, 0x00466f05, 0x01040022, 0x0001c060,
    0x000001f8, 0x000001f8, 0xa0721a40, 0x00c02b03,
    0xa0771240, 0x01c02b03, 0xa07c1140, 0x02c02b03,
    0x00040061, 0x3d054220, 0x00000000, 0x00000001,
    0x00040061, 0x25054220, 0x00000000, 0x00000000,
    0x27741d70, 0x2b007203, 0x00033361, 0x4d060220,
    0x00347205, 0x00000000, 0x00133361, 0x4f060220,
    0x00347305, 0x00000000, 0x00031f61, 0x51060220,
    0x00347705, 0x00000000, 0x00131f61, 0x53060220,
    0x00347805, 0x00000000, 0x27791770, 0x2b007703,
    0x00031f61, 0x55060220, 0x00347c05, 0x00000000,
    0x00131f61, 0x57060220, 0x00347d05, 0x00000000,
    0x277e1170, 0x2b007c03, 0xa0760a40, 0x2d027402,
    0xa07b1d40, 0x2d027902, 0xa0041b40, 0x2d027e02,
    0x00031b61, 0x4d260220, 0x00347605, 0x00000000,
    0x00131c61, 0x4f260220, 0x00347705, 0x00000000,
    0x00031c61, 0x51260220, 0x00347b05, 0x00000000,
    0x00131d61, 0x53260220, 0x00347c05, 0x00000000,
    0x00031d61, 0x55260220, 0x00340405, 0x00000000,
    0x00131e61, 0x57260220, 0x00340505, 0x00000000,
    0x80000d01, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x1d140000, 0xfb044d24, 0x00040000,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x1f140000, 0xfb045124, 0x00040000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x21140000, 0xfb045524, 0x00040000,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x00041661, 0x15050220, 0x00461d05, 0x00000000,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x00041461, 0x17050220, 0x00461f05, 0x00000000,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x00041261, 0x19050220, 0x00462105, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040024, 0x0001c060, 0x00000030, 0x00000030,
    0x00041f61, 0x3d054220, 0x00000000, 0x00000000,
    0x00041f61, 0x23054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040024, 0x0001c060, 0x00000040, 0x00000040,
    0x00041c61, 0x3d054220, 0x00000000, 0x00000000,
    0x00041c61, 0x23054220, 0x00000000, 0x00000000,
    0x00041f61, 0x25054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00001a70,
    0x80041c61, 0x05054660, 0x00000000, 0x00000000,
    0x00040061, 0x05050660, 0x00463d05, 0x00000000,
    0x00040070, 0x00018660, 0x16462705, 0x00000000,
    0x80031a40, 0x05260660, 0x06440506, 0x00440526,
    0x80021940, 0x05470660, 0x06420527, 0x00420547,
    0x80021940, 0x05670660, 0x06420527, 0x00420567,
    0x80021940, 0x05850660, 0x06000564, 0x00340585,
    0x80021a40, 0x06850660, 0x06000664, 0x00340685,
    0xa4061940, 0x06010582, 0x01040022, 0x0001c060,
    0x000000c8, 0x000000b8, 0xa0071740, 0x02410203,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x68050660, 0x000006e4, 0x00000000,
    0x27090970, 0x02100703, 0x00030061, 0x64060220,
    0x00340705, 0x00000000, 0x00131761, 0x66060220,
    0x00340805, 0x00000000, 0xa00b1b40, 0x02120912,
    0x00031961, 0x64260220, 0x00340b05, 0x00000000,
    0x00131a61, 0x66260220, 0x00340c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x3b140000, 0xfb186424, 0x01006814,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00042961, 0x3b054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00001910,
    0x80041161, 0x0e054660, 0x00000000, 0x00000000,
    0x00040061, 0x0e050660, 0x00463d05, 0x00000000,
    0x00040070, 0x00018660, 0x16463d05, 0x00000000,
    0x80041140, 0x10058150, 0x05583705, 0xffffffff,
    0x80041961, 0x10014110, 0x00000000, 0x01c001c0,
    0x80040069, 0x10018510, 0x01461005, 0x00020002,
    0x80040940, 0x10018110, 0x01461001, 0x01c001c0,
    0xe30c0961, 0x001b0004, 0x80001961, 0x0c054660,
    0x00000000, 0x00000000, 0x80031940, 0x0c260660,
    0x06440c06, 0x00440c26, 0x80021940, 0x0c470660,
    0x06420c27, 0x00420c47, 0x80021940, 0x0c670660,
    0x06420c27, 0x00420c67, 0x80021940, 0x0c850660,
    0x06000c64, 0x00340c85, 0x80021a40, 0x0d850660,
    0x06000d64, 0x00340d85, 0xa40d1940, 0x0d010c82,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0xa0110040, 0x0c013b02, 0x01040022, 0x0001c060,
    0x00000350, 0x00000100, 0x00041261, 0x19054220,
    0x00000000, 0x7f800000, 0x00041461, 0x17054220,
    0x00000000, 0x7f800000, 0x00041661, 0x15054220,
    0x00000000, 0x7f800000, 0x00041161, 0x21054220,
    0x00000000, 0xff800000, 0x00041361, 0x1f054220,
    0x00000000, 0xff800000, 0x00041561, 0x1d054220,
    0x00000000, 0xff800000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00041361, 0x44054220,
    0x00000000, 0x7f800000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041361, 0x42054220,
    0x00000000, 0x7f800000, 0x00043261, 0x40054220,
    0x00000000, 0x7f800000, 0x00043361, 0x4a054220,
    0x00000000, 0xff800000, 0x00043361, 0x48054220,
    0x00000000, 0xff800000, 0x00043461, 0x46054220,
    0x00000000, 0xff800000, 0x00040024, 0x0001c060,
    0x00000260, 0x00000260, 0x00041a69, 0x13058660,
    0x02461105, 0x00000005, 0xe02b0068, 0x01b01103,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0xa02d1a40, 0x13010302, 0x00040069, 0x12058660,
    0x02462505, 0x00000018, 0x272f0a70, 0x03102d03,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x00031361, 0x69060220, 0x00342d05, 0x00000000,
    0x00131761, 0x6b060220, 0x00342e05, 0x00000000,
    0x201b0c66, 0x12002903, 0x00041c52, 0x31040660,
    0x0e2e0324, 0x2f052b05, 0x00131961, 0x6b260220,
    0x00343205, 0x00000000, 0x00031a61, 0x69260220,
    0x00343105, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x00000000,
    0xfb0c6924, 0x003c1544, 0xa0330040, 0x01002d03,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x27351970, 0x2d003303, 0x00033961, 0x6a060220,
    0x00343305, 0x00000000, 0x80103901, 0x00000000,
    0x00000000, 0x00000000, 0x00131761, 0x6c060220,
    0x00343405, 0x00000000, 0xa0371b40, 0x31023502,
    0x00131961, 0x6c260220, 0x00343805, 0x00000000,
    0x00031a61, 0x6a260220, 0x00343705, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044a31, 0x00000000, 0xfb0c6a24, 0x003c1d44,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x20463940, 0x1d001500, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x20483940, 0x1f001700,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x204a3940, 0x21001900, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041361, 0x40050220,
    0x00464605, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041261, 0x42050220,
    0x00464805, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00041161, 0x44050220,
    0x00464a05, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x000014a8, 0x00040070, 0x00018660,
    0x16462705, 0x00000000, 0xa3340b61, 0x7f810000,
    0x60340061, 0x00101500, 0xa3360b61, 0x7f810000,
    0x60360061, 0x00101700, 0xa3380b61, 0x7f810000,
    0x60380061, 0x00101900, 0xa33a0e61, 0xff810000,
    0x603a0061, 0x00101d00, 0xa33ce961, 0xff810000,
    0x603c0061, 0x00101f00, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa33e1661, 0xff810000,
    0x603e0061, 0x00102100, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa34c1d61, 0x7f810000,
    0x604c0061, 0x00104000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa34e1c61, 0x7f810000,
    0x604e0061, 0x00104200, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0xa3501b61, 0x7f810000,
    0x60500061, 0x00104400, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0xa3521c61, 0xff810000,
    0x60520061, 0x00104600, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xa3541c61, 0xff810000,
    0x60540061, 0x00104800, 0xa3051b61, 0xff810000,
    0x60050061, 0x00104a00, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80031f61, 0x31060220,
    0x00443426, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80033861, 0x56060220,
    0x00443626, 0x00000000, 0x80031761, 0x78060220,
    0x00443826, 0x00000000, 0x80031761, 0x0f060220,
    0x00443a26, 0x00000000, 0x80031761, 0x29060220,
    0x00443e26, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80031561, 0x58060220,
    0x00444e26, 0x00000000, 0x80031461, 0x5d060220,
    0x00445026, 0x00000000, 0x80031361, 0x62060220,
    0x00445226, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80031261, 0x67060220,
    0x00445426, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x6c060220,
    0x00440526, 0x00000000, 0x80031f62, 0x2f060aa0,
    0x5a443406, 0x00443106, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80031761, 0x1c060220,
    0x00443c26, 0x00000000, 0x80031f62, 0x76060aa0,
    0x5a443806, 0x00447806, 0x80031761, 0x40060220,
    0x00444c26, 0x00000000, 0x80031f62, 0x0d060aa0,
    0x4a443a06, 0x00440f06, 0x80031f62, 0x27060aa0,
    0x4a443e06, 0x00442906, 0x80031f62, 0x43060aa0,
    0x5a444e06, 0x00445806, 0x80030062, 0x48060aa0,
    0x5a443606, 0x00445606, 0x80031e62, 0x5b060aa0,
    0x5a445006, 0x00445d06, 0x80031d62, 0x60060aa0,
    0x4a445206, 0x00446206, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80031c62, 0x65060aa0,
    0x4a445406, 0x00446706, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80031b62, 0x6a060aa0,
    0x4a440506, 0x00446c06, 0x80031761, 0x34260220,
    0x00442f06, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80031b62, 0x1a060aa0,
    0x4a443c06, 0x00441c06, 0x80031761, 0x38260220,
    0x00447606, 0x00000000, 0x80031b62, 0x2c060aa0,
    0x5a444c06, 0x00444006, 0x80031761, 0x3a260220,
    0x00440d06, 0x00000000, 0x80031761, 0x3e260220,
    0x00442706, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80031761, 0x4e260220,
    0x00444306, 0x00000000, 0x80031761, 0x36260220,
    0x00444806, 0x00000000, 0x80031661, 0x50260220,
    0x00445b06, 0x00000000, 0x80031561, 0x52260220,
    0x00446006, 0x00000000, 0x80031461, 0x54260220,
    0x00446506, 0x00000000, 0x80031361, 0x05260220,
    0x00446a06, 0x00000000, 0x80031261, 0x3c260220,
    0x00441a06, 0x00000000, 0x80021f61, 0x07070220,
    0x00423847, 0x00000000, 0x80022161, 0x03070220,
    0x00423827, 0x00000000, 0x80031161, 0x4c260220,
    0x00442c06, 0x00000000, 0x80020061, 0x14070220,
    0x00423a47, 0x00000000, 0x80020061, 0x12070220,
    0x00423a27, 0x00000000, 0x80021761, 0x58070220,
    0x00423e47, 0x00000000, 0x80021761, 0x56070220,
    0x00423e27, 0x00000000, 0x80021561, 0x62070220,
    0x00424e27, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80021461, 0x68070220,
    0x00425027, 0x00000000, 0x80023161, 0x70070220,
    0x00425247, 0x00000000, 0x80020061, 0x6e070220,
    0x00425227, 0x00000000, 0x80020061, 0x76070220,
    0x00425447, 0x00000000, 0x80020061, 0x74070220,
    0x00425427, 0x00000000, 0x80021161, 0x40070220,
    0x00423427, 0x00000000, 0x80020061, 0x7c070220,
    0x00420547, 0x00000000, 0x80020061, 0x7a070220,
    0x00420527, 0x00000000, 0x80020061, 0x21070220,
    0x00423c47, 0x00000000, 0x80020061, 0x1f070220,
    0x00423c27, 0x00000000, 0x80020061, 0x42070220,
    0x00423447, 0x00000000, 0x80020062, 0x7e070aa0,
    0x5a420307, 0x00420707, 0x80021761, 0x5e070220,
    0x00424c47, 0x00000000, 0x80021761, 0x5c070220,
    0x00424c27, 0x00000000, 0x80020061, 0x60070220,
    0x00423627, 0x00000000, 0x80020062, 0x10070aa0,
    0x4a421207, 0x00421407, 0x80020062, 0x2a070aa0,
    0x4a425607, 0x00425807, 0x80023961, 0x64070220,
    0x00424e47, 0x00000000, 0x80021761, 0x66070220,
    0x00423647, 0x00000000, 0x80020061, 0x6a070220,
    0x00425047, 0x00000000, 0x80021f62, 0x1d070aa0,
    0x4a421f07, 0x00422107, 0x80021f62, 0x32070aa0,
    0x5a424007, 0x00424207, 0x80021561, 0x38470220,
    0x00427e07, 0x00000000, 0x80021461, 0x3a470220,
    0x00421007, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80021361, 0x3e470220,
    0x00422a07, 0x00000000, 0x80021d62, 0x5a070aa0,
    0x5a426007, 0x00426607, 0x80021361, 0x3c470220,
    0x00421d07, 0x00000000, 0x80021261, 0x34470220,
    0x00423207, 0x00000000, 0x80021d61, 0x0c070220,
    0x00423867, 0x00000000, 0x80020061, 0x0a070220,
    0x00423827, 0x00000000, 0x80021e61, 0x19070220,
    0x00423a67, 0x00000000, 0x80020061, 0x17070220,
    0x00423a27, 0x00000000, 0x80020062, 0x41070aa0,
    0x5a425c07, 0x00425e07, 0x80021261, 0x36470220,
    0x00425a07, 0x00000000, 0x80021f61, 0x26070220,
    0x00423c67, 0x00000000, 0x80023a61, 0x24070220,
    0x00423c27, 0x00000000, 0x80021f61, 0x47070220,
    0x00423467, 0x00000000, 0x80020061, 0x45070220,
    0x00423427, 0x00000000, 0x80021f62, 0x08070aa0,
    0x5a420a07, 0x00420c07, 0x80021e62, 0x15070aa0,
    0x4a421707, 0x00421907, 0x80021361, 0x4c470220,
    0x00424107, 0x00000000, 0x80020062, 0x5e070aa0,
    0x5a426807, 0x00426a07, 0x80021e62, 0x59070aa0,
    0x5a426207, 0x00426407, 0x80021561, 0x5b070220,
    0x00423e67, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80021d62, 0x22070aa0,
    0x4a422407, 0x00422607, 0x80021b62, 0x43070aa0,
    0x5a424507, 0x00424707, 0x80021661, 0x38670220,
    0x00420807, 0x00000000, 0x80021561, 0x3a670220,
    0x00421507, 0x00000000, 0x80021461, 0x50470220,
    0x00425e07, 0x00000000, 0x80021361, 0x4e470220,
    0x00425907, 0x00000000, 0x80020062, 0x68070aa0,
    0x4a427407, 0x00427607, 0x80020c61, 0x61070220,
    0x00424c67, 0x00000000, 0x80020062, 0x63070aa0,
    0x4a426e07, 0x00427007, 0x80021461, 0x3c670220,
    0x00422207, 0x00000000, 0x80021361, 0x34670220,
    0x00424307, 0x00000000, 0x80021f62, 0x38850aa0,
    0x5a003864, 0x00343885, 0x80021f62, 0x39850aa0,
    0x5a003964, 0x00343985, 0x80021e62, 0x3a850aa0,
    0x4a003a64, 0x00343a85, 0x80021e62, 0x3b850aa0,
    0x4a003b64, 0x00343b85, 0x80020d61, 0x6b070220,
    0x00425027, 0x00000000, 0x80020d61, 0x65070220,
    0x00424e27, 0x00000000, 0x80021661, 0x54470220,
    0x00426807, 0x00000000, 0x80020061, 0x5f070220,
    0x00424c27, 0x00000000, 0x80020061, 0x59070220,
    0x00423e27, 0x00000000, 0x80021561, 0x52470220,
    0x00426307, 0x00000000, 0x80021661, 0x75070220,
    0x00423667, 0x00000000, 0x80021f62, 0x3c850aa0,
    0x4a003c64, 0x00343c85, 0x80021f62, 0x3d850aa0,
    0x4a003d64, 0x00343d85, 0x80021f62, 0x34850aa0,
    0x5a003464, 0x00343485, 0x80021f62, 0x35850aa0,
    0x5a003564, 0x00343585, 0x80031762, 0x39050aa0,
    0x5a0038e4, 0x00463905, 0x80020062, 0x6d070aa0,
    0x4a427a07, 0x00427c07, 0x80020061, 0x6f070220,
    0x00423627, 0x00000000, 0x80031762, 0x3b050aa0,
    0x4a003ae4, 0x00463b05, 0x80021e61, 0x77070220,
    0x00425427, 0x00000000, 0x80021e62, 0x42070aa0,
    0x5a425f07, 0x00426107, 0x80021d62, 0x2b070aa0,
    0x4a425907, 0x00425b07, 0x80021c61, 0x73070220,
    0x00425267, 0x00000000, 0x80020061, 0x71070220,
    0x00425227, 0x00000000, 0x80031762, 0x3d050aa0,
    0x4a003ce4, 0x00463d05, 0x80031762, 0x35050aa0,
    0x5a0034e4, 0x00463505, 0x80020061, 0x67070220,
    0x00424e67, 0x00000000, 0x80021661, 0x05470220,
    0x00426d07, 0x00000000, 0x80021e62, 0x69070aa0,
    0x5a426f07, 0x00427507, 0x80021561, 0x4c670220,
    0x00424207, 0x00000000, 0x80021461, 0x3e670220,
    0x00422b07, 0x00000000, 0x80021761, 0x79070220,
    0x00425467, 0x00000000, 0x80021d62, 0x5a070aa0,
    0x5a426507, 0x00426707, 0x80021c61, 0x03070220,
    0x00420567, 0x00000000, 0x80021761, 0x7d070220,
    0x00420527, 0x00000000, 0x80021261, 0x36670220,
    0x00426907, 0x00000000, 0x80021e62, 0x4c850aa0,
    0x5a004c64, 0x00344c85, 0x80021e62, 0x4d850aa0,
    0x5a004d64, 0x00344d85, 0x80021d62, 0x3e850aa0,
    0x4a003e64, 0x00343e85, 0x80021d62, 0x3f850aa0,
    0x4a003f64, 0x00343f85, 0x80020061, 0x6d070220,
    0x00425067, 0x00000000, 0x80021561, 0x4e670220,
    0x00425a07, 0x00000000, 0x80020062, 0x64070aa0,
    0x4a427107, 0x00427307, 0x80021b62, 0x36850aa0,
    0x5a003664, 0x00343685, 0x80021b62, 0x37850aa0,
    0x5a003764, 0x00343785, 0x80031662, 0x4d050aa0,
    0x5a004ce4, 0x00464d05, 0x80031562, 0x3f050aa0,
    0x4a003ee4, 0x00463f05, 0x80021b62, 0x69070aa0,
    0x4a427707, 0x00427907, 0x80021a62, 0x5f070aa0,
    0x5a426b07, 0x00426d07, 0x80021962, 0x4e850aa0,
    0x5a004e64, 0x00344e85, 0x80021962, 0x4f850aa0,
    0x5a004f64, 0x00344f85, 0x80021761, 0x52670220,
    0x00426407, 0x00000000, 0x80031762, 0x37050aa0,
    0x5a0036e4, 0x00463705, 0x80021561, 0x54670220,
    0x00426907, 0x00000000, 0x80021461, 0x50670220,
    0x00425f07, 0x00000000, 0x80021f62, 0x6e070aa0,
    0x4a427d07, 0x00420307, 0x80031362, 0x4f050aa0,
    0x5a004ee4, 0x00464f05, 0x80021b62, 0x52850aa0,
    0x4a005264, 0x00345285, 0x80021b62, 0x53850aa0,
    0x4a005364, 0x00345385, 0x80021a62, 0x54850aa0,
    0x4a005464, 0x00345485, 0x80021a62, 0x55850aa0,
    0x4a005564, 0x00345585, 0x80021962, 0x50850aa0,
    0x5a005064, 0x00345085, 0x80021962, 0x51850aa0,
    0x5a005164, 0x00345185, 0x80021761, 0x05670220,
    0x00426e07, 0x00000000, 0x80031562, 0x53050aa0,
    0x4a0052e4, 0x00465305, 0x80031462, 0x55050aa0,
    0x4a0054e4, 0x00465505, 0x80031362, 0x51050aa0,
    0x5a0050e4, 0x00465105, 0x80021962, 0x05850aa0,
    0x4a000564, 0x00340585, 0x80021962, 0x06850aa0,
    0x4a000664, 0x00340685, 0x80031162, 0x06050aa0,
    0x4a0005e4, 0x00460605, 0x01040022, 0x0001c060,
    0x000007e8, 0x000007e8, 0xa0070040, 0x08010243,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x6f050660, 0x000035e4, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x27090070, 0x0210072b, 0x00030061, 0x6b060220,
    0x00340705, 0x00000000, 0x80101e01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x6d060220,
    0x00340805, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa00b0040, 0x0212091a,
    0x00031961, 0x6b260220, 0x00340b05, 0x00000000,
    0x00131a61, 0x6d260220, 0x00340c05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x00000000, 0xfb2a6b24, 0x01006f14,
    0xa00c0040, 0x08410243, 0x00040061, 0x74050660,
    0x000037e4, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xe70e0070, 0x08400c03,
    0x00033b61, 0x70060220, 0x00340c05, 0x00000000,
    0x00130061, 0x72060220, 0x00340d05, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa0100040, 0x02120e1a, 0x00031961, 0x70260220,
    0x00341005, 0x00000000, 0x00131a61, 0x72260220,
    0x00341105, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb2a7024, 0x01007414, 0xa0110040, 0x08810243,
    0x00040061, 0x79050660, 0x000039e4, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0xe7130070, 0x08801103, 0x00033161, 0x75060220,
    0x00341105, 0x00000000, 0x00130061, 0x77060220,
    0x00341205, 0x00000000, 0xa0151b40, 0x0212131a,
    0x00031961, 0x75260220, 0x00341505, 0x00000000,
    0x00131a61, 0x77260220, 0x00341605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x00000000, 0xfb2a7524, 0x01007914,
    0xa0160040, 0x08c10243, 0x00040061, 0x7e050660,
    0x00003be4, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xe7180070, 0x08c01603,
    0x00033c61, 0x7a060220, 0x00341605, 0x00000000,
    0x00130061, 0x7c060220, 0x00341705, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa01a0040, 0x0212181a, 0x00031961, 0x7a260220,
    0x00341a05, 0x00000000, 0x00131a61, 0x7c260220,
    0x00341b05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044d31, 0x00000000,
    0xfb2c7a24, 0x01007e14, 0xa01b0040, 0x09010243,
    0x00040061, 0x0b050660, 0x00003de4, 0x00000000,
    0xe71d1a70, 0x09001b03, 0x00030061, 0x07060220,
    0x00341b05, 0x00000000, 0x00130061, 0x09060220,
    0x00341c05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa01f0040, 0x02121d1a,
    0x00031961, 0x07260220, 0x00341f05, 0x00000000,
    0x00131a61, 0x09260220, 0x00342005, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x00000000, 0xfb2c0724, 0x01000b14,
    0xa0200040, 0x09410243, 0x00040061, 0x10050660,
    0x00003fe4, 0x00000000, 0xe7221a70, 0x09402003,
    0x00033e61, 0x0c060220, 0x00342005, 0x00000000,
    0x00130061, 0x0e060220, 0x00342105, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa0240040, 0x0212221a, 0x00031961, 0x0c260220,
    0x00342405, 0x00000000, 0x00131a61, 0x0e260220,
    0x00342505, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044f31, 0x00000000,
    0xfb2c0c24, 0x01001014, 0x00040061, 0x15050660,
    0x00004de4, 0x00000000, 0x00033f61, 0x11260660,
    0x00000224, 0x00000000, 0x00130061, 0x13260660,
    0x00000224, 0x00000000, 0x00031a61, 0x11060660,
    0x00000204, 0x00000000, 0x00131a61, 0x13060660,
    0x00000204, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x00000000,
    0xfb2a1124, 0x01001514, 0xa0250040, 0x00410203,
    0x00040061, 0x1a050660, 0x00004fe4, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x27270070, 0x02102503, 0x00033061, 0x16060220,
    0x00342505, 0x00000000, 0x00130061, 0x18060220,
    0x00342605, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa0290040, 0x02122712,
    0x00031961, 0x16260220, 0x00342905, 0x00000000,
    0x00131a61, 0x18260220, 0x00342a05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb2a1624, 0x01001a14,
    0xa02a0040, 0x00810203, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x1f050660,
    0x000051e4, 0x00000000, 0x272c1a70, 0x02102a03,
    0x00033161, 0x1b060220, 0x00342a05, 0x00000000,
    0x00130061, 0x1d060220, 0x00342b05, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa02e0040, 0x02122c12, 0x00031961, 0x1b260220,
    0x00342e05, 0x00000000, 0x00131a61, 0x1d260220,
    0x00342f05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xfb2a1b24, 0x01001f14, 0xa02f0040, 0x01010203,
    0x80001601, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x24050660, 0x000053e4, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x27310070, 0x02102f03, 0x00033261, 0x20060220,
    0x00342f05, 0x00000000, 0x00130061, 0x22060220,
    0x00343005, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa0330040, 0x02123112,
    0x00031961, 0x20260220, 0x00343305, 0x00000000,
    0x00131a61, 0x22260220, 0x00343405, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x00000000, 0xfb2c2024, 0x01002414,
    0xa0340040, 0x01410203, 0x80001501, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x29050660,
    0x000055e4, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xe7360070, 0x01403403,
    0x00033361, 0x25060220, 0x00343405, 0x00000000,
    0x00130061, 0x27060220, 0x00343505, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa0380040, 0x02123612, 0x00031961, 0x25260220,
    0x00343805, 0x00000000, 0x00131a61, 0x27260220,
    0x00343905, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xfb2c2524, 0x01002914, 0xa0390040, 0x01810203,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x2e050660, 0x000006e4, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0xe73b0070, 0x01803903, 0x00033461, 0x2a060220,
    0x00343905, 0x00000000, 0x00130061, 0x2c060220,
    0x00343a05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa03d0040, 0x02123b12,
    0x00131961, 0x2c260220, 0x00343e05, 0x00000000,
    0x00031a61, 0x2a260220, 0x00343d05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x00000000, 0xfb2c2a24, 0x01002e14,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80033d61, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers = {
   .prog_data = {
      .base.nr_params = 19,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 3,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 10656,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_printfs,
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
   .args = gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_args,
   .code = gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_code,
};
const char *gfx125_bvh_build_primref_primrefs_from_DXR_instances_pointers_sha1 = "2b79bc7529bc8b9d10a73f6482b101cce1f2a044";

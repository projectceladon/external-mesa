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

and(1)          g127<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g35<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g127UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g3<1>UW         0x76543210V                     { align1 WE_all 1Q };
shl(16)         g26<1>D         g35<8,8,1>D     0x00000004UD    { align1 1H I@2 };
add(8)          g3.8<1>UW       g3<1,1,0>UW     0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g28<1>D         g3<8,8,1>UW                     { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g12.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g14.1<2>F       g2.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g8.1<2>F        g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g10.1<2>F       g2.3<0,1,0>F                    { align1 2Q };
add(16)         g16<1>D         g2.2<0,1,0>D    168D            { align1 1H compacted };
and(16)         g31<1>UD        g2<0,1,0>UD     0x0000003fUD    { align1 1H compacted };
mov(8)          g12<2>F         g2<0,1,0>F                      { align1 1Q F@4 compacted };
mov(8)          g14<2>F         g2<0,1,0>F                      { align1 2Q F@4 compacted };
mov(8)          g8<2>F          g2.2<0,1,0>F                    { align1 1Q F@4 compacted };
mov(8)          g10<2>F         g2.2<0,1,0>F                    { align1 2Q F@4 compacted };
cmp.l.f0.0(16)  g57<1>UD        g16<1,1,0>UD    0x000000a8UD    { align1 1H I@2 compacted };
mov(8)          g37<2>UD        g16<4,4,1>UD                    { align1 1Q };
mov(8)          g39<2>UD        g17<4,4,1>UD                    { align1 2Q };
add(16)         g33<1>D         -g31<1,1,0>D    64D             { align1 1H I@4 compacted };
and(16)         g30<1>UD        g28<1,1,0>UD    0x0000000fUD    { align1 1H I@7 compacted };
add(8)          g20<1>D         -g57<8,8,1>D    g8.1<8,4,2>D    { align1 1Q A@2 };
add(8)          g21<1>D         -g58<8,8,1>D    g10.1<8,4,2>D   { align1 2Q A@1 };
and(16)         g35<1>UD        g33<1,1,0>UD    0x0000003fUD    { align1 1H I@4 compacted };
add(16)         g18<1>D         g26<1,1,0>D     g30<1,1,0>D     { align1 1H I@4 compacted };
mov(8)          g37.1<2>UD      g20<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g39.1<2>UD      g21<4,4,1>UD                    { align1 2Q I@4 };
add(16)         g41<1>D         g2<0,1,0>D      g35<1,1,0>D     { align1 1H I@4 compacted };
add(16)         g47<1>D         g2.2<0,1,0>D    g35<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g21UD           g37UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
cmp.l.f0.0(16)  g43<1>UD        g41<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g49<1>UD        g47<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@2 compacted };
add(8)          g45<1>D         -g43<8,8,1>D    g12.1<8,4,2>D   { align1 1Q A@2 };
add(8)          g46<1>D         -g44<8,8,1>D    g14.1<8,4,2>D   { align1 2Q A@3 };
add(8)          g51<1>D         -g49<8,8,1>D    g8.1<8,4,2>D    { align1 1Q I@3 };
add(8)          g52<1>D         -g50<8,8,1>D    g10.1<8,4,2>D   { align1 2Q I@4 };
cmp.l.f0.0(16)  null<1>UD       g35<8,8,1>UD    g21<8,8,1>UD    { align1 1H $1.dst };
shr(16)         g25<1>UD        g21<1,1,0>UD    0x00000008UD    { align1 1H compacted };
add(16)         g37<1>D         g21<1,1,0>D     -g35<1,1,0>D    { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shr(16)         g39<1>UD        g37<1,1,0>UD    0x00000002UD    { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g53<1>D         g25<8,8,1>D     0x00000004UD    { align1 1H I@4 };
mov(16)         g4<1>UD         g18<8,8,1>UD                    { align1 1H };

LABEL2:
cmp.ge.f0.0(16) null<1>UD       g4<8,8,1>UD     g39<8,8,1>UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL1        UIP:  LABEL1              { align1 1H };
shl(16)         g55<1>D         g4<8,8,1>D      0x00000002UD    { align1 1H };
shr(16)         g6<1>UD         g4<1,1,0>UD     0x0000001eUD    { align1 1H compacted };
add(16)         g59<1>D         g47<1,1,0>D     g55<1,1,0>D     { align1 1H I@2 compacted };
add(16)         g64<1>D         g41<1,1,0>D     g55<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g61<1>UD        g59<1,1,0>UD    g47<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g70<2>UD        g59<4,4,1>UD                    { align1 1Q $2.src };
mov(8)          g72<2>UD        g60<4,4,1>UD                    { align1 2Q $2.src };
cmp.l.f0.0(16)  g66<1>UD        g64<1,1,0>UD    g41<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g74<2>UD        g64<4,4,1>UD                    { align1 1Q $3.src };
mov(8)          g76<2>UD        g65<4,4,1>UD                    { align1 2Q $3.src };
add3(16)        g63<1>D         g51<8,8,1>D     g6<8,8,1>D      -g61<1,1,1>D { align1 1H I@6 };
add3(16)        g68<1>D         g45<8,8,1>D     g6<8,8,1>D      -g66<1,1,1>D { align1 1H I@4 };
mov(8)          g70.1<2>UD      g63<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g72.1<2>UD      g64<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g74.1<2>UD      g68<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g76.1<2>UD      g69<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g78UD           g70UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g74UD           g78UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $3 };
add3(16)        g4<1>D          0x0040UW        g53<8,8,1>D     g4<1,1,1>D { align1 1H };

LABEL1:
while(16)       JIP:  LABEL2                                    { align1 1H };
and(16)         g69<1>UD        g37<8,8,1>UD    0xfffffffcUD    { align1 1H $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g71<1>D         g37<1,1,0>D     -g69<1,1,0>D    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g18<8,8,1>UD    g71<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
add(16)         g72<1>D         g41<1,1,0>D     g69<1,1,0>D     { align1 1H $2.src compacted };
add(16)         g76<1>D         g47<1,1,0>D     g69<1,1,0>D     { align1 1H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g74<1>UD        g72<1,1,0>UD    g41<1,1,0>UD    { align1 1H I@2 compacted };
add(16)         g86<1>D         g72<1,1,0>D     g18<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g78<1>UD        g76<1,1,0>UD    g47<1,1,0>UD    { align1 1H I@3 compacted };
add(16)         g80<1>D         g76<1,1,0>D     g18<1,1,0>D     { align1 1H compacted };
mov(8)          g96<2>UD        g86<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g98<2>UD        g87<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g92<2>UD        g80<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g94<2>UD        g81<4,4,1>UD                    { align1 2Q I@4 };
cmp.l.f0.0(16)  g82<1>UD        g80<1,1,0>UD    g76<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  g88<1>UD        g86<1,1,0>UD    g72<1,1,0>UD    { align1 1H compacted };
add3(16)        g84<1>D         -g78<8,8,1>D    g51<8,8,1>D     -g82<1,1,1>D { align1 1H I@2 };
add3(16)        g90<1>D         -g74<8,8,1>D    g45<8,8,1>D     -g88<1,1,1>D { align1 1H I@2 };
mov(8)          g92.1<2>UD      g84<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g94.1<2>UD      g85<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g96.1<2>UD      g90<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g98.1<2>UD      g91<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g85UD           g92UD           nullUD          0x08200980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
mov(16)         g100<1>UD       g85<32,8,4>UB                   { align1 1H $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g96UD           g100UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $5 };

LABEL3:
endif(16)       JIP:  LABEL0                                    { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL4                                    { align1 1H };

LABEL4:
and(16)         g91<1>UD        g2<0,1,0>UD     0x00000003UD    { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g93<1>D         -g91<1,1,0>D    4D              { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
and.nz.f0.0(16) g95<1>UD        g93<1,1,0>UD    0x00000003UD    { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL5              { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g18<8,8,1>UD    g95<8,8,1>UD    { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL6              { align1 1H };
add(16)         g97<1>D         g2.2<0,1,0>D    g18<1,1,0>D     { align1 1H $5.src compacted };
add(16)         g103<1>D        g2<0,1,0>D      g18<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g99<1>UD        g97<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g109<2>UD       g97<4,4,1>UD                    { align1 1Q };
mov(8)          g111<2>UD       g98<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g105<1>UD       g103<1,1,0>UD   g2<0,1,0>UD     { align1 1H I@4 compacted };
mov(8)          g113<2>UD       g103<4,4,1>UD                   { align1 1Q };
mov(8)          g115<2>UD       g104<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(8)          g101<1>D        -g99<8,8,1>D    g8.1<8,4,2>D    { align1 1Q I@6 };
add(8)          g102<1>D        -g100<8,8,1>D   g10.1<8,4,2>D   { align1 2Q I@7 };
add(8)          g107<1>D        -g105<8,8,1>D   g12.1<8,4,2>D   { align1 1Q I@5 };
add(8)          g108<1>D        -g106<8,8,1>D   g14.1<8,4,2>D   { align1 2Q I@6 };
mov(8)          g109.1<2>UD     g101<4,4,1>UD                   { align1 1Q I@4 };
mov(8)          g111.1<2>UD     g102<4,4,1>UD                   { align1 2Q I@4 };
mov(8)          g113.1<2>UD     g107<4,4,1>UD                   { align1 1Q I@4 };
mov(8)          g115.1<2>UD     g108<4,4,1>UD                   { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g102UD          g109UD          nullUD          0x08200980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
mov(16)         g117<1>UD       g102<32,8,4>UB                  { align1 1H $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g113UD          g117UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $7 };

LABEL6:
endif(16)       JIP:  LABEL5                                    { align1 1H };
add(16)         g108<1>D        g2<0,1,0>D      g95<1,1,0>D     { align1 1H $6.src compacted };
add(16)         g114<1>D        g2.2<0,1,0>D    g95<1,1,0>D     { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g110<1>UD       g108<1,1,0>UD   g2<0,1,0>UD     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(16)  g116<1>UD       g114<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(8)          g112<1>D        -g110<8,8,1>D   g12.1<8,4,2>D   { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $7.src };
add(8)          g113<1>D        -g111<8,8,1>D   g14.1<8,4,2>D   { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(8)          g118<1>D        -g116<8,8,1>D   g8.1<8,4,2>D    { align1 1Q I@3 };
add(8)          g119<1>D        -g117<8,8,1>D   g10.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g12<2>UD        g108<4,4,1>UD                   { align1 1Q };
mov(8)          g14<2>UD        g109<4,4,1>UD                   { align1 2Q };
mov(8)          g8<2>UD         g114<4,4,1>UD                   { align1 1Q };
mov(8)          g10<2>UD        g115<4,4,1>UD                   { align1 2Q };
mov(8)          g12.1<2>UD      g112<4,4,1>UD                   { align1 1Q I@4 };
mov(8)          g14.1<2>UD      g113<4,4,1>UD                   { align1 2Q I@4 };
mov(8)          g8.1<2>UD       g118<4,4,1>UD                   { align1 1Q I@4 };
mov(8)          g10.1<2>UD      g119<4,4,1>UD                   { align1 2Q I@4 };

LABEL5:
endif(16)       JIP:  LABEL7                                    { align1 1H };

LABEL7:
and(8)          g119<1>UD       g12<8,4,2>UD    0x0000003fUD    { align1 1Q I@5 compacted };
and(8)          g120<1>UD       g14<8,4,2>UD    0x0000003fUD    { align1 2Q I@5 compacted };
add(16)         g121<1>D        -g119<1,1,0>D   64D             { align1 1H I@1 compacted };
and(16)         g123<1>UD       g121<1,1,0>UD   0x0000003fUD    { align1 1H I@1 compacted };
shr(16)         g125<1>UD       g123<1,1,0>UD   0x00000002UD    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g2<1>UD         g18<1,1,0>UD    g125<1,1,0>UD   { align1 1H A@1 compacted };
cmp.nz.f0.0(16) g4<1>D          g123<1,1,0>D    0D              { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g2<8,8,1>UD     g4<8,8,1>UD     { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL8              { align1 1H };
shl(16)         g16<1>D         g18<8,8,1>D     0x00000002UD    { align1 1H };
shr(16)         g57<1>UD        g18<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
mov(8)          g20<1>UD        g8.1<8,4,2>UD                   { align1 1Q };
mov(8)          g21<1>UD        g10.1<8,4,2>UD                  { align1 2Q };
mov(8)          g28<1>UD        g12.1<8,4,2>UD                  { align1 1Q };
mov(8)          g29<1>UD        g14.1<8,4,2>UD                  { align1 2Q };
add(8)          g22<1>D         g8<8,4,2>D      g16<1,1,0>D     { align1 1Q I@6 compacted };
add(8)          g23<1>D         g10<8,4,2>D     g17<1,1,0>D     { align1 2Q @7 $1.dst compacted };
add(8)          g30<1>D         g12<8,4,2>D     g16<1,1,0>D     { align1 1Q compacted };
add(8)          g31<1>D         g14<8,4,2>D     g17<1,1,0>D     { align1 2Q compacted };
cmp.l.f0.0(8)   g24<1>UD        g22<8,8,1>UD    g8<8,4,2>UD     { align1 1Q @4 $1.dst };
mov(8)          g118<2>UD       g22<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g25<1>UD        g23<8,8,1>UD    g10<8,4,2>UD    { align1 2Q I@5 };
mov(8)          g120<2>UD       g23<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(8)   g32<1>UD        g30<8,8,1>UD    g12<8,4,2>UD    { align1 1Q I@6 };
mov(8)          g122<2>UD       g30<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g33<1>UD        g31<8,8,1>UD    g14<8,4,2>UD    { align1 2Q I@7 };
mov(8)          g124<2>UD       g31<4,4,1>UD                    { align1 2Q };
add3(16)        g26<1>D         g20<8,8,1>D     g57<8,8,1>D     -g24<1,1,1>D { align1 1H I@6 };
add3(16)        g34<1>D         g28<8,8,1>D     g57<8,8,1>D     -g32<1,1,1>D { align1 1H I@3 };
mov(8)          g118.1<2>UD     g26<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g120.1<2>UD     g27<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g122.1<2>UD     g34<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g124.1<2>UD     g35<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g126UD          g118UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g122UD          g126UD          0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };

LABEL8:
endif(16)       JIP:  LABEL9                                    { align1 1H };

LABEL9:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q $0.src };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_copy_clone_indirect_code[] = {
    0x80000065, 0x7f058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x23050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa007f0c, 0x00340000,
    0x80030061, 0x03054410, 0x00000000, 0x76543210,
    0x00041a69, 0x1a058660, 0x02462305, 0x00000004,
    0x64031a40, 0x00800395, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x1c050160,
    0x00460305, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x210c0061, 0x001102cc,
    0x2a0e0061, 0x001102cc, 0x00030061, 0x08260aa0,
    0x00000264, 0x00000000, 0x00130061, 0x0a260aa0,
    0x00000264, 0x00000000, 0xa0100040, 0x0a810243,
    0xe01f0065, 0x03f10203, 0x210c1461, 0x00110204,
    0x2a0e1461, 0x00110204, 0x21081461, 0x00110244,
    0x2a0a1461, 0x00110244, 0xe7391a70, 0x0a801003,
    0x00030061, 0x25060220, 0x00341005, 0x00000000,
    0x00130061, 0x27060220, 0x00341105, 0x00000000,
    0xa0211c40, 0x04021f03, 0xe01e1f65, 0x00f01c03,
    0x00030a40, 0x14052660, 0x06463905, 0x00440826,
    0x00130940, 0x15052660, 0x06463a05, 0x00440a26,
    0xe0231c65, 0x03f02103, 0xa0121c40, 0x1e001a02,
    0x00031c61, 0x25260220, 0x00341405, 0x00000000,
    0x00131c61, 0x27260220, 0x00341505, 0x00000000,
    0xa0291c40, 0x23010202, 0xa02f0040, 0x23010242,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x15240000, 0xfb042524, 0x000c0000,
    0x272b1a70, 0x02102903, 0x27311a70, 0x02102f2b,
    0x00030a40, 0x2d052660, 0x06462b05, 0x00440c26,
    0x00130b40, 0x2e052660, 0x06462c05, 0x00440e26,
    0x00031b40, 0x33052660, 0x06463105, 0x00440826,
    0x00131c40, 0x34052660, 0x06463205, 0x00440a26,
    0x00042170, 0x00010220, 0x52462305, 0x00461505,
    0xe0190068, 0x00801503, 0xa0253140, 0x23201502,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xe0271968, 0x00202503, 0x01040022, 0x0001c060,
    0x00000350, 0x00000350, 0x00041c69, 0x35058660,
    0x02461905, 0x00000004, 0x00040061, 0x04050220,
    0x00461205, 0x00000000, 0x00041970, 0x00010220,
    0x42460405, 0x00462705, 0x01040028, 0x0001c660,
    0x00000158, 0x00000158, 0x00040069, 0x37058660,
    0x02460405, 0x00000002, 0xe0060068, 0x01e00403,
    0xa03b1a40, 0x37002f02, 0xa0400040, 0x37002902,
    0x273d1a70, 0x2f003b03, 0x00033261, 0x46060220,
    0x00343b05, 0x00000000, 0x00133261, 0x48060220,
    0x00343c05, 0x00000000, 0x27421c70, 0x29004003,
    0x00033361, 0x4a060220, 0x00344005, 0x00000000,
    0x00133361, 0x4c060220, 0x00344105, 0x00000000,
    0x00041e52, 0x3f040e68, 0x0e2e3305, 0x3d050605,
    0x00041c52, 0x44040e68, 0x0e2e2d05, 0x42050605,
    0x00031a61, 0x46260220, 0x00343f05, 0x00000000,
    0x00131b61, 0x48260220, 0x00344005, 0x00000000,
    0x00031b61, 0x4a260220, 0x00344405, 0x00000000,
    0x00131c61, 0x4c260220, 0x00344505, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x4e140000, 0xfb044624, 0x00040000,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x00000000, 0xfb0c4a24, 0x00044e14,
    0x00040052, 0x04044160, 0x0e0e0040, 0x04053505,
    0x00040027, 0x00014060, 0x00000000, 0xfffffe98,
    0x00043265, 0x45058220, 0x02462505, 0xfffffffc,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa0471940, 0x45202502, 0x00041970, 0x00010220,
    0x52461205, 0x00464705, 0x01040022, 0x0001c060,
    0x00000160, 0x00000160, 0xa0483240, 0x45002902,
    0xa04c3340, 0x45002f02, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x274a1a70, 0x29004803,
    0xa0560040, 0x12004802, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x274e1b70, 0x2f004c03,
    0xa0500040, 0x12004c02, 0x00031b61, 0x60060220,
    0x00345605, 0x00000000, 0x00131c61, 0x62060220,
    0x00345705, 0x00000000, 0x00031b61, 0x5c060220,
    0x00345005, 0x00000000, 0x00131c61, 0x5e060220,
    0x00345105, 0x00000000, 0x27520070, 0x4c005003,
    0x27580070, 0x48005603, 0x00041a52, 0x54042e68,
    0x0e2e4e05, 0x52053305, 0x00041a52, 0x5a042e68,
    0x0e2e4a05, 0x58052d05, 0x00031a61, 0x5c260220,
    0x00345405, 0x00000000, 0x00131b61, 0x5e260220,
    0x00345505, 0x00000000, 0x00031b61, 0x60260220,
    0x00345a05, 0x00000000, 0x00131c61, 0x62260220,
    0x00345b05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x55140000,
    0xf3005c24, 0x00020000, 0x00042461, 0x64050020,
    0x00665507, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x00000000,
    0xf3086024, 0x00026414, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0xe05b3465, 0x00310203,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa05d1940, 0x00425b03, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xee5f1965, 0x00305d03,
    0x01040022, 0x0001c060, 0x000002c0, 0x000002c0,
    0x00041a70, 0x00010220, 0x52461205, 0x00465f05,
    0x01040022, 0x0001c060, 0x00000160, 0x00000160,
    0xa0613540, 0x12010242, 0xa0670040, 0x12010202,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x27631a70, 0x0210612b, 0x00030061, 0x6d060220,
    0x00346105, 0x00000000, 0x00130061, 0x6f060220,
    0x00346205, 0x00000000, 0x27691c70, 0x02106703,
    0x00030061, 0x71060220, 0x00346705, 0x00000000,
    0x00130061, 0x73060220, 0x00346805, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00031e40, 0x65052660, 0x06466305, 0x00440826,
    0x00131f40, 0x66052660, 0x06466405, 0x00440a26,
    0x00031d40, 0x6b052660, 0x06466905, 0x00440c26,
    0x00131e40, 0x6c052660, 0x06466a05, 0x00440e26,
    0x00031c61, 0x6d260220, 0x00346505, 0x00000000,
    0x00131c61, 0x6f260220, 0x00346605, 0x00000000,
    0x00031c61, 0x71260220, 0x00346b05, 0x00000000,
    0x00131c61, 0x73260220, 0x00346c05, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x66140000, 0xf3006d24, 0x00020000,
    0x00042661, 0x75050020, 0x00666607, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x00000000, 0xf3087124, 0x00027514,
    0x00040025, 0x00004600, 0x00000000, 0x00000140,
    0xa06c3640, 0x5f010202, 0xa0723740, 0x5f010242,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x276e1a70, 0x02106c03, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x27741a70, 0x0210722b,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00031a40, 0x70052660, 0x06466e05, 0x00440c26,
    0x80103701, 0x00000000, 0x00000000, 0x00000000,
    0x00131b40, 0x71052660, 0x06466f05, 0x00440e26,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00031b40, 0x76052660, 0x06467405, 0x00440826,
    0x00131c40, 0x77052660, 0x06467505, 0x00440a26,
    0x00030061, 0x0c060220, 0x00346c05, 0x00000000,
    0x00130061, 0x0e060220, 0x00346d05, 0x00000000,
    0x00030061, 0x08060220, 0x00347205, 0x00000000,
    0x00130061, 0x0a060220, 0x00347305, 0x00000000,
    0x00031c61, 0x0c260220, 0x00347005, 0x00000000,
    0x00131c61, 0x0e260220, 0x00347105, 0x00000000,
    0x00031c61, 0x08260220, 0x00347605, 0x00000000,
    0x00131c61, 0x0a260220, 0x00347705, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0xe1771d65, 0x03fe0c03, 0xea781d65, 0x03fe0e03,
    0xa0791940, 0x04027703, 0xe07b1965, 0x03f07903,
    0xe07d1968, 0x00207b03, 0x27020970, 0x7d001203,
    0xae040070, 0x00007b03, 0x00041965, 0x00010220,
    0x22460205, 0x00460405, 0x01040022, 0x0001c060,
    0x000001c8, 0x000001c8, 0x00040069, 0x10058660,
    0x02461205, 0x00000002, 0xe0390068, 0x01e01203,
    0x00030061, 0x14050220, 0x00440826, 0x00000000,
    0x00130061, 0x15050220, 0x00440a26, 0x00000000,
    0x00030061, 0x1c050220, 0x00440c26, 0x00000000,
    0x00130061, 0x1d050220, 0x00440e26, 0x00000000,
    0xa1161e40, 0x100e0802, 0xaa17f140, 0x110e0a02,
    0xa11e0040, 0x100e0c02, 0xaa1f0040, 0x110e0e02,
    0x0003c170, 0x18050220, 0x52461605, 0x00440806,
    0x00030061, 0x76060220, 0x00341605, 0x00000000,
    0x00131d70, 0x19050220, 0x52461705, 0x00440a06,
    0x00130061, 0x78060220, 0x00341705, 0x00000000,
    0x00031e70, 0x20050220, 0x52461e05, 0x00440c06,
    0x00030061, 0x7a060220, 0x00341e05, 0x00000000,
    0x00131f70, 0x21050220, 0x52461f05, 0x00440e06,
    0x00130061, 0x7c060220, 0x00341f05, 0x00000000,
    0x00041e52, 0x1a040e68, 0x0e2e1405, 0x18053905,
    0x00041b52, 0x22040e68, 0x0e2e1c05, 0x20053905,
    0x00031a61, 0x76260220, 0x00341a05, 0x00000000,
    0x00131b61, 0x78260220, 0x00341b05, 0x00000000,
    0x00031b61, 0x7a260220, 0x00342205, 0x00000000,
    0x00131c61, 0x7c260220, 0x00342305, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x7e140000, 0xfb047624, 0x00040000,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb0c7a24, 0x00047e14,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80033061, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_copy_clone_indirect = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 2800,
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
const char *gfx125_bvh_copy_clone_indirect_sha1 = "50a31f1412c003be8573b2543a33f7f0b3e555d7";

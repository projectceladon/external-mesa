#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_copy_clone_indirect_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_copy_clone_indirect_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g21<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(8)          g3<1>UW         0x76543210V                     { align1 WE_all 1Q };
mov(16)         g44<1>UD        g0.1<0,1,0>UD                   { align1 1H };
add(1)          g22<1>UD        g21<0,1,0>UD    0x00000000UD    { align1 WE_all 1N I@3 compacted };
add(8)          g3.8<1>UW       g3<1,1,0>UW     0x0008UW        { align1 WE_all 1Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g22UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g119<1>D        g3<8,8,1>UW                     { align1 1H };
and(16)         g29<1>UD        g119<1,1,0>UD   0x0000000fUD    { align1 1H I@1 compacted };
shl(16)         g118<1>D        g44<8,8,1>D     0x00000004UD    { align1 1H I@5 };
add(16)         g12<1>D         g118<1,1,0>D    g29<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g4.1<2>F        g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g6.1<2>F        g2.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g8.1<2>F        g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g10.1<2>F       g2.3<0,1,0>F                    { align1 2Q };
mov(8)          g4<2>F          g2<0,1,0>F                      { align1 1Q F@4 compacted };
mov(8)          g6<2>F          g2<0,1,0>F                      { align1 2Q F@4 compacted };
mov(8)          g8<2>F          g2.2<0,1,0>F                    { align1 1Q F@4 compacted };
mov(8)          g10<2>F         g2.2<0,1,0>F                    { align1 2Q F@4 compacted };
and(8)          g30<1>UD        g4<8,4,2>UD     0x0000003fUD    { align1 1Q F@4 compacted };
and(8)          g31<1>UD        g6<8,4,2>UD     0x0000003fUD    { align1 2Q F@3 compacted };
add(8)          g15<1>D         g8<8,4,2>D      168D            { align1 1Q F@2 compacted };
add(8)          g16<1>D         g10<8,4,2>D     168D            { align1 2Q F@1 compacted };
add(16)         g32<1>D         -g30<1,1,0>D    64D             { align1 1H I@3 compacted };
mov(8)          g48<2>UD        g15<4,4,1>UD                    { align1 1Q I@3 };
cmp.l.f0.0(16)  g17<1>UD        g15<1,1,0>UD    0x000000a8UD    { align1 1H I@3 compacted };
mov(8)          g50<2>UD        g16<4,4,1>UD                    { align1 2Q };
and(16)         g34<1>UD        g32<1,1,0>UD    0x0000003fUD    { align1 1H I@4 compacted };
add(8)          g19<1>D         -g17<8,8,1>D    g8.1<8,4,2>D    { align1 1Q I@3 };
add(8)          g20<1>D         -g18<8,8,1>D    g10.1<8,4,2>D   { align1 2Q I@4 };
add(8)          g40<1>D         g4<8,4,2>D      g34<1,1,0>D     { align1 1Q I@3 compacted };
add(8)          g41<1>D         g6<8,4,2>D      g35<1,1,0>D     { align1 2Q I@4 compacted };
add(8)          g46<1>D         g8<8,4,2>D      g34<1,1,0>D     { align1 1Q compacted };
add(8)          g47<1>D         g10<8,4,2>D     g35<1,1,0>D     { align1 2Q compacted };
mov(8)          g48.1<2>UD      g19<4,4,1>UD                    { align1 1Q I@6 };
mov(8)          g50.1<2>UD      g20<4,4,1>UD                    { align1 2Q I@6 };
cmp.l.f0.0(8)   g42<1>UD        g40<8,8,1>UD    g4<8,4,2>UD     { align1 1Q I@6 };
cmp.l.f0.0(8)   g43<1>UD        g41<8,8,1>UD    g6<8,4,2>UD     { align1 2Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g21UD           g48UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(8)   g48<1>UD        g46<8,8,1>UD    g8<8,4,2>UD     { align1 1Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
cmp.l.f0.0(8)   g49<1>UD        g47<8,8,1>UD    g10<8,4,2>UD    { align1 2Q I@6 };
add(8)          g44<1>D         -g42<8,8,1>D    g4.1<8,4,2>D    { align1 1Q I@4 };
add(8)          g45<1>D         -g43<8,8,1>D    g6.1<8,4,2>D    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(8)          g50<1>D         -g48<8,8,1>D    g8.1<8,4,2>D    { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
add(8)          g51<1>D         -g49<8,8,1>D    g10.1<8,4,2>D   { align1 2Q I@4 };
cmp.l.f0.0(16)  null<1>UD       g34<8,8,1>UD    g21<8,8,1>UD    { align1 1H $1.dst };
shr(16)         g117<1>UD       g21<1,1,0>UD    0x00000008UD    { align1 1H compacted };
add(16)         g36<1>D         g21<1,1,0>D     -g34<1,1,0>D    { align1 1H compacted };
shr(16)         g38<1>UD        g36<1,1,0>UD    0x00000002UD    { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g52<1>D         g117<8,8,1>D    0x00000004UD    { align1 1H I@4 };
mov(16)         g14<1>UD        g12<8,8,1>UD                    { align1 1H };
add(16)         g54<1>D         g52<1,1,0>D     64D             { align1 1H I@2 compacted };

LABEL2:
cmp.ge.f0.0(16) null<1>UD       g14<8,8,1>UD    g38<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL1        UIP:  LABEL1              { align1 1H };
shl(16)         g56<1>D         g14<8,8,1>D     0x00000002UD    { align1 1H };
shr(16)         g64<1>UD        g14<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
add(16)         g60<1>D         g46<1,1,0>D     g56<1,1,0>D     { align1 1H I@2 compacted };
add(16)         g67<1>D         g40<1,1,0>D     g56<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g62<1>UD        g60<1,1,0>UD    g46<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g73<2>UD        g60<4,4,1>UD                    { align1 1Q $2.src };
mov(8)          g75<2>UD        g61<4,4,1>UD                    { align1 2Q $2.src };
cmp.l.f0.0(16)  g69<1>UD        g67<1,1,0>UD    g40<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g77<2>UD        g67<4,4,1>UD                    { align1 1Q $3.src };
mov(8)          g79<2>UD        g68<4,4,1>UD                    { align1 2Q $3.src };
add3(16)        g58<1>D         g50<8,8,1>D     g64<8,8,1>D     -g62<1,1,1>D { align1 1H I@6 };
add3(16)        g71<1>D         g44<8,8,1>D     g64<8,8,1>D     -g69<1,1,1>D { align1 1H I@4 };
mov(8)          g73.1<2>UD      g58<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g75.1<2>UD      g59<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g77.1<2>UD      g71<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g79.1<2>UD      g72<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g81UD           g73UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g77UD           g81UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $3 };
add(16)         g14<1>D         g54<1,1,0>D     g14<1,1,0>D     { align1 1H compacted };

LABEL1:
while(16)       JIP:  LABEL2                                    { align1 1H };
and(16)         g73<1>UD        g36<8,8,1>UD    0xfffffffcUD    { align1 1H $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g75<1>D         g36<1,1,0>D     -g73<1,1,0>D    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g12<8,8,1>UD    g75<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
add(16)         g76<1>D         g40<1,1,0>D     g73<1,1,0>D     { align1 1H $3.src compacted };
add(16)         g80<1>D         g46<1,1,0>D     g73<1,1,0>D     { align1 1H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g78<1>UD        g76<1,1,0>UD    g40<1,1,0>UD    { align1 1H I@2 compacted };
add(16)         g91<1>D         g76<1,1,0>D     g12<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g82<1>UD        g80<1,1,0>UD    g46<1,1,0>UD    { align1 1H I@3 compacted };
add(16)         g84<1>D         g80<1,1,0>D     g12<1,1,0>D     { align1 1H compacted };
mov(8)          g101<2>UD       g91<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g103<2>UD       g92<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g97<2>UD        g84<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g99<2>UD        g85<4,4,1>UD                    { align1 2Q I@4 };
cmp.l.f0.0(16)  g86<1>UD        g84<1,1,0>UD    g80<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  g93<1>UD        g91<1,1,0>UD    g76<1,1,0>UD    { align1 1H compacted };
add3(16)        g88<1>D         -g82<8,8,1>D    g50<8,8,1>D     -g86<1,1,1>D { align1 1H I@2 };
add3(16)        g95<1>D         -g78<8,8,1>D    g44<8,8,1>D     -g93<1,1,1>D { align1 1H I@2 };
mov(8)          g97.1<2>UD      g88<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g99.1<2>UD      g89<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g101.1<2>UD     g95<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g103.1<2>UD     g96<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g90UD           g97UD           nullUD          0x08200980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $4 };
mov(16)         g105<1>UD       g90<32,8,4>UB                   { align1 1H $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g101UD          g105UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $5 };

LABEL3:
endif(16)       JIP:  LABEL0                                    { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL4                                    { align1 1H };

LABEL4:
and(8)          g98<1>UD        g4<8,4,2>UD     0x00000003UD    { align1 1Q $4.src compacted };
and(8)          g99<1>UD        g6<8,4,2>UD     0x00000003UD    { align1 2Q $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g100<1>D        -g98<1,1,0>D    4D              { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
and.nz.f0.0(16) g102<1>UD       g100<1,1,0>UD   0x00000003UD    { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL5              { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g12<8,8,1>UD    g102<8,8,1>UD   { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL6              { align1 1H };
add(8)          g104<1>D        g8<8,4,2>D      g12<1,1,0>D     { align1 1Q $5.src compacted };
add(8)          g105<1>D        g10<8,4,2>D     g13<1,1,0>D     { align1 2Q $5.src compacted };
add(8)          g111<1>D        g4<8,4,2>D      g12<1,1,0>D     { align1 1Q compacted };
add(8)          g112<1>D        g6<8,4,2>D      g13<1,1,0>D     { align1 2Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(8)   g106<1>UD       g104<8,8,1>UD   g8<8,4,2>UD     { align1 1Q I@4 };
cmp.l.f0.0(8)   g107<1>UD       g105<8,8,1>UD   g10<8,4,2>UD    { align1 2Q I@4 };
mov(8)          g25<2>UD        g104<4,4,1>UD                   { align1 1Q };
mov(8)          g27<2>UD        g105<4,4,1>UD                   { align1 2Q };
cmp.l.f0.0(8)   g113<1>UD       g111<8,8,1>UD   g4<8,4,2>UD     { align1 1Q I@6 };
cmp.l.f0.0(8)   g114<1>UD       g112<8,8,1>UD   g6<8,4,2>UD     { align1 2Q I@6 };
mov(8)          g121<2>UD       g111<4,4,1>UD                   { align1 1Q };
mov(8)          g123<2>UD       g112<4,4,1>UD                   { align1 2Q };
add(8)          g108<1>D        -g106<8,8,1>D   g8.1<8,4,2>D    { align1 1Q I@7 };
add(8)          g109<1>D        -g107<8,8,1>D   g10.1<8,4,2>D   { align1 2Q I@7 };
add(8)          g115<1>D        -g113<8,8,1>D   g4.1<8,4,2>D    { align1 1Q I@6 };
add(8)          g116<1>D        -g114<8,8,1>D   g6.1<8,4,2>D    { align1 2Q I@6 };
mov(8)          g25.1<2>UD      g108<4,4,1>UD                   { align1 1Q I@4 };
mov(8)          g27.1<2>UD      g109<4,4,1>UD                   { align1 2Q I@4 };
mov(8)          g121.1<2>UD     g115<4,4,1>UD                   { align1 1Q I@4 };
mov(8)          g123.1<2>UD     g116<4,4,1>UD                   { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g110UD          g25UD           nullUD          0x08200980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $6 };
mov(16)         g125<1>UD       g110<32,8,4>UB                  { align1 1H $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g121UD          g125UD          0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $7 };

LABEL6:
endif(16)       JIP:  LABEL5                                    { align1 1H };
add(8)          g26<1>D         g4<8,4,2>D      g102<1,1,0>D    { align1 1Q $6.src compacted };
add(8)          g27<1>D         g6<8,4,2>D      g103<1,1,0>D    { align1 2Q $6.src compacted };
add(8)          g124<1>D        g8<8,4,2>D      g102<1,1,0>D    { align1 1Q $7.src compacted };
add(8)          g125<1>D        g10<8,4,2>D     g103<1,1,0>D    { align1 2Q $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(8)   g28<1>UD        g26<8,8,1>UD    g4<8,4,2>UD     { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $7.src };
cmp.l.f0.0(8)   g121<1>UD       g27<8,8,1>UD    g6<8,4,2>UD     { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(8)   g126<1>UD       g124<8,8,1>UD   g8<8,4,2>UD     { align1 1Q I@4 };
cmp.l.f0.0(8)   g127<1>UD       g125<8,8,1>UD   g10<8,4,2>UD    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(8)          g122<1>D        -g28<8,8,1>D    g4.1<8,4,2>D    { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $7.src };
add(8)          g123<1>D        -g121<8,8,1>D   g6.1<8,4,2>D    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(8)          g1<1>D          -g126<8,8,1>D   g8.1<8,4,2>D    { align1 1Q I@4 };
add(8)          g2<1>D          -g127<8,8,1>D   g10.1<8,4,2>D   { align1 2Q A@1 };
mov(8)          g4<2>UD         g26<4,4,1>UD                    { align1 1Q };
mov(8)          g6<2>UD         g27<4,4,1>UD                    { align1 2Q };
mov(8)          g8<2>UD         g124<4,4,1>UD                   { align1 1Q };
mov(8)          g10<2>UD        g125<4,4,1>UD                   { align1 2Q };
mov(8)          g4.1<2>UD       g122<4,4,1>UD                   { align1 1Q I@4 };
mov(8)          g6.1<2>UD       g123<4,4,1>UD                   { align1 2Q I@4 };
mov(8)          g8.1<2>UD       g1<4,4,1>UD                     { align1 1Q I@4 };
mov(8)          g10.1<2>UD      g2<4,4,1>UD                     { align1 2Q I@4 };

LABEL5:
endif(16)       JIP:  LABEL7                                    { align1 1H };

LABEL7:
and(8)          g2<1>UD         g4<8,4,2>UD     0x0000003fUD    { align1 1Q A@1 compacted };
and(8)          g3<1>UD         g6<8,4,2>UD     0x0000003fUD    { align1 2Q I@5 compacted };
add(16)         g14<1>D         -g2<1,1,0>D     64D             { align1 1H I@1 compacted };
and(16)         g16<1>UD        g14<1,1,0>UD    0x0000003fUD    { align1 1H I@1 compacted };
shr(16)         g18<1>UD        g16<1,1,0>UD    0x00000002UD    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g20<1>UD        g12<1,1,0>UD    g18<1,1,0>UD    { align1 1H I@1 compacted };
cmp.nz.f0.0(16) g22<1>D         g16<1,1,0>D     0D              { align1 1H $1.dst compacted };
and.nz.f0.0(16) null<1>UD       g20<8,8,1>UD    g22<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL8              { align1 1H };
shl(16)         g23<1>D         g12<8,8,1>D     0x00000002UD    { align1 1H $1.dst };
shr(16)         g117<1>UD       g12<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
mov(8)          g119<1>UD       g8.1<8,4,2>UD                   { align1 1Q };
mov(8)          g120<1>UD       g10.1<8,4,2>UD                  { align1 2Q };
mov(8)          g36<1>UD        g4.1<8,4,2>UD                   { align1 1Q };
mov(8)          g37<1>UD        g6.1<8,4,2>UD                   { align1 2Q };
add(8)          g29<1>D         g8<8,4,2>D      g23<1,1,0>D     { align1 1Q I@6 compacted };
add(8)          g30<1>D         g10<8,4,2>D     g24<1,1,0>D     { align1 2Q I@7 compacted };
add(8)          g38<1>D         g4<8,4,2>D      g23<1,1,0>D     { align1 1Q compacted };
add(8)          g39<1>D         g6<8,4,2>D      g24<1,1,0>D     { align1 2Q compacted };
cmp.l.f0.0(8)   g31<1>UD        g29<8,8,1>UD    g8<8,4,2>UD     { align1 1Q I@4 };
mov(8)          g12<2>UD        g29<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g32<1>UD        g30<8,8,1>UD    g10<8,4,2>UD    { align1 2Q I@5 };
mov(8)          g14<2>UD        g30<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(8)   g40<1>UD        g38<8,8,1>UD    g4<8,4,2>UD     { align1 1Q I@6 };
mov(8)          g16<2>UD        g38<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g41<1>UD        g39<8,8,1>UD    g6<8,4,2>UD     { align1 2Q I@7 };
mov(8)          g18<2>UD        g39<4,4,1>UD                    { align1 2Q };
add3(16)        g33<1>D         g119<8,8,1>D    g117<8,8,1>D    -g31<1,1,1>D { align1 1H I@6 };
add3(16)        g42<1>D         g36<8,8,1>D     g117<8,8,1>D    -g40<1,1,1>D { align1 1H I@3 };
mov(8)          g12.1<2>UD      g33<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g14.1<2>UD      g34<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g16.1<2>UD      g42<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g18.1<2>UD      g43<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g20UD           g12UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g16UD           g20UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $9 };

LABEL8:
endif(16)       JIP:  LABEL9                                    { align1 1H };

LABEL9:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_copy_clone_indirect_code[] = {
    0x80000065, 0x15058220, 0x02000004, 0xffffffc0,
    0x80030061, 0x03054410, 0x00000000, 0x76543210,
    0x00040061, 0x2c050220, 0x00000024, 0x00000000,
    0xe2161b40, 0x00011503, 0x64031b40, 0x00800395,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00160c, 0x00340000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x77050160, 0x00460305, 0x00000000,
    0xe01d1965, 0x00f07703, 0x00041d69, 0x76058660,
    0x02462c05, 0x00000004, 0xa00c1940, 0x1d007602,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x21040061, 0x001102cc, 0x2a060061, 0x001102cc,
    0x00030061, 0x08260aa0, 0x00000264, 0x00000000,
    0x00130061, 0x0a260aa0, 0x00000264, 0x00000000,
    0x21041461, 0x00110204, 0x2a061461, 0x00110204,
    0x21081461, 0x00110244, 0x2a0a1461, 0x00110244,
    0xe11e1465, 0x03fe0403, 0xea1f1365, 0x03fe0603,
    0xa10f1240, 0x0a8e0803, 0xaa101140, 0x0a8e0a03,
    0xa0201b40, 0x04021e03, 0x00031b61, 0x30060220,
    0x00340f05, 0x00000000, 0xe7111b70, 0x0a800f03,
    0x00130061, 0x32060220, 0x00341005, 0x00000000,
    0xe0221c65, 0x03f02003, 0x00031b40, 0x13052660,
    0x06461105, 0x00440826, 0x00131c40, 0x14052660,
    0x06461205, 0x00440a26, 0xa1281b40, 0x220e0402,
    0xaa291c40, 0x230e0602, 0xa12e0040, 0x220e0802,
    0xaa2f0040, 0x230e0a02, 0x00031e61, 0x30260220,
    0x00341305, 0x00000000, 0x00131e61, 0x32260220,
    0x00341405, 0x00000000, 0x00031e70, 0x2a050220,
    0x52462805, 0x00440406, 0x00131e70, 0x2b050220,
    0x52462905, 0x00440606, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x15240000,
    0xfb043024, 0x000c0000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00031e70, 0x30050220,
    0x52462e05, 0x00440806, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00131e70, 0x31050220,
    0x52462f05, 0x00440a06, 0x00031c40, 0x2c052660,
    0x06462a05, 0x00440426, 0x00131c40, 0x2d052660,
    0x06462b05, 0x00440626, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00031c40, 0x32052660,
    0x06463005, 0x00440826, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00131c40, 0x33052660,
    0x06463105, 0x00440a26, 0x00042170, 0x00010220,
    0x52462205, 0x00461505, 0xe0750068, 0x00801503,
    0xa0240040, 0x22201502, 0xe0261968, 0x00202403,
    0x01040022, 0x0001c060, 0x00000350, 0x00000350,
    0x00041c69, 0x34058660, 0x02467505, 0x00000004,
    0x00040061, 0x0e050220, 0x00460c05, 0x00000000,
    0xa0361a40, 0x04003403, 0x00041a70, 0x00010220,
    0x42460e05, 0x00462605, 0x01040028, 0x0001c660,
    0x00000150, 0x00000150, 0x00040069, 0x38058660,
    0x02460e05, 0x00000002, 0xe0400068, 0x01e00e03,
    0xa03c1a40, 0x38002e02, 0xa0430040, 0x38002802,
    0x273e1a70, 0x2e003c03, 0x00033261, 0x49060220,
    0x00343c05, 0x00000000, 0x00133261, 0x4b060220,
    0x00343d05, 0x00000000, 0x27451c70, 0x28004303,
    0x00033361, 0x4d060220, 0x00344305, 0x00000000,
    0x00133361, 0x4f060220, 0x00344405, 0x00000000,
    0x00041e52, 0x3a040e68, 0x0e2e3205, 0x3e054005,
    0x00041c52, 0x47040e68, 0x0e2e2c05, 0x45054005,
    0x00031a61, 0x49260220, 0x00343a05, 0x00000000,
    0x00131b61, 0x4b260220, 0x00343b05, 0x00000000,
    0x00031b61, 0x4d260220, 0x00344705, 0x00000000,
    0x00131c61, 0x4f260220, 0x00344805, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x51140000, 0xfb044924, 0x00040000,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x00000000, 0xfb0c4d24, 0x00045114,
    0xa00e0040, 0x0e003602, 0x00040027, 0x00014060,
    0x00000000, 0xfffffea0, 0x00043265, 0x49058220,
    0x02462405, 0xfffffffc, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa04b1940, 0x49202402,
    0x00041970, 0x00010220, 0x52460c05, 0x00464b05,
    0x01040022, 0x0001c060, 0x00000160, 0x00000160,
    0xa04c3340, 0x49002802, 0xa0503340, 0x49002e02,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x274e1a70, 0x28004c03, 0xa05b0040, 0x0c004c02,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x27521b70, 0x2e005003, 0xa0540040, 0x0c005002,
    0x00031b61, 0x65060220, 0x00345b05, 0x00000000,
    0x00131c61, 0x67060220, 0x00345c05, 0x00000000,
    0x00031b61, 0x61060220, 0x00345405, 0x00000000,
    0x00131c61, 0x63060220, 0x00345505, 0x00000000,
    0x27560070, 0x50005403, 0x275d0070, 0x4c005b03,
    0x00041a52, 0x58042e68, 0x0e2e5205, 0x56053205,
    0x00041a52, 0x5f042e68, 0x0e2e4e05, 0x5d052c05,
    0x00031a61, 0x61260220, 0x00345805, 0x00000000,
    0x00131b61, 0x63260220, 0x00345905, 0x00000000,
    0x00031b61, 0x65260220, 0x00345f05, 0x00000000,
    0x00131c61, 0x67260220, 0x00346005, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x5a140000, 0xf3006124, 0x00020000,
    0x00042461, 0x69050020, 0x00665a07, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x00000000, 0xf3086524, 0x00026914,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0xe1623465, 0x003e0403, 0xea633465, 0x003e0603,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xa0641940, 0x00426203, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xee661965, 0x00306403,
    0x01040022, 0x0001c060, 0x00000340, 0x00000340,
    0x00041a70, 0x00010220, 0x52460c05, 0x00466605,
    0x01040022, 0x0001c060, 0x00000190, 0x00000190,
    0xa1683540, 0x0c0e0802, 0xaa693540, 0x0d0e0a02,
    0xa16f0040, 0x0c0e0402, 0xaa700040, 0x0d0e0602,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00031c70, 0x6a050220, 0x52466805, 0x00440806,
    0x00131c70, 0x6b050220, 0x52466905, 0x00440a06,
    0x00030061, 0x19060220, 0x00346805, 0x00000000,
    0x00130061, 0x1b060220, 0x00346905, 0x00000000,
    0x00031e70, 0x71050220, 0x52466f05, 0x00440406,
    0x00131e70, 0x72050220, 0x52467005, 0x00440606,
    0x00030061, 0x79060220, 0x00346f05, 0x00000000,
    0x00130061, 0x7b060220, 0x00347005, 0x00000000,
    0x00031f40, 0x6c052660, 0x06466a05, 0x00440826,
    0x00131f40, 0x6d052660, 0x06466b05, 0x00440a26,
    0x00031e40, 0x73052660, 0x06467105, 0x00440426,
    0x00131e40, 0x74052660, 0x06467205, 0x00440626,
    0x00031c61, 0x19260220, 0x00346c05, 0x00000000,
    0x00131c61, 0x1b260220, 0x00346d05, 0x00000000,
    0x00031c61, 0x79260220, 0x00347305, 0x00000000,
    0x00131c61, 0x7b260220, 0x00347405, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x6e140000, 0xf3001924, 0x00020000,
    0x00042661, 0x7d050020, 0x00666e07, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x00000000, 0xf3087924, 0x00027d14,
    0x00040025, 0x00004600, 0x00000000, 0x00000190,
    0xa11a3640, 0x660e0402, 0xaa1b3640, 0x670e0602,
    0xa17c3740, 0x660e0802, 0xaa7d3740, 0x670e0a02,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00031c70, 0x1c050220, 0x52461a05, 0x00440406,
    0x80103701, 0x00000000, 0x00000000, 0x00000000,
    0x00131c70, 0x79050220, 0x52461b05, 0x00440606,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00031c70, 0x7e050220, 0x52467c05, 0x00440806,
    0x00131c70, 0x7f050220, 0x52467d05, 0x00440a06,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00031c40, 0x7a052660, 0x06461c05, 0x00440426,
    0x80103701, 0x00000000, 0x00000000, 0x00000000,
    0x00131c40, 0x7b052660, 0x06467905, 0x00440626,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x00031c40, 0x01052660, 0x06467e05, 0x00440826,
    0x00130940, 0x02052660, 0x06467f05, 0x00440a26,
    0x00030061, 0x04060220, 0x00341a05, 0x00000000,
    0x00130061, 0x06060220, 0x00341b05, 0x00000000,
    0x00030061, 0x08060220, 0x00347c05, 0x00000000,
    0x00130061, 0x0a060220, 0x00347d05, 0x00000000,
    0x00031c61, 0x04260220, 0x00347a05, 0x00000000,
    0x00131c61, 0x06260220, 0x00347b05, 0x00000000,
    0x00031c61, 0x08260220, 0x00340105, 0x00000000,
    0x00131c61, 0x0a260220, 0x00340205, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0xe1020965, 0x03fe0403, 0xea031d65, 0x03fe0603,
    0xa00e1940, 0x04020203, 0xe0101965, 0x03f00e03,
    0xe0121968, 0x00201003, 0x27141970, 0x12000c03,
    0xae162170, 0x00001003, 0x00041965, 0x00010220,
    0x22461405, 0x00461605, 0x01040022, 0x0001c060,
    0x000001b8, 0x000001b8, 0x00042169, 0x17058660,
    0x02460c05, 0x00000002, 0xe0750068, 0x01e00c03,
    0x00030061, 0x77050220, 0x00440826, 0x00000000,
    0x00130061, 0x78050220, 0x00440a26, 0x00000000,
    0x00030061, 0x24050220, 0x00440426, 0x00000000,
    0x00130061, 0x25050220, 0x00440626, 0x00000000,
    0xa11d1e40, 0x170e0802, 0xaa1e1f40, 0x180e0a02,
    0xa1260040, 0x170e0402, 0xaa270040, 0x180e0602,
    0x00031c70, 0x1f050220, 0x52461d05, 0x00440806,
    0x00030061, 0x0c060220, 0x00341d05, 0x00000000,
    0x00131d70, 0x20050220, 0x52461e05, 0x00440a06,
    0x00130061, 0x0e060220, 0x00341e05, 0x00000000,
    0x00031e70, 0x28050220, 0x52462605, 0x00440406,
    0x00030061, 0x10060220, 0x00342605, 0x00000000,
    0x00131f70, 0x29050220, 0x52462705, 0x00440606,
    0x00130061, 0x12060220, 0x00342705, 0x00000000,
    0x00041e52, 0x21040e68, 0x0e2e7705, 0x1f057505,
    0x00041b52, 0x2a040e68, 0x0e2e2405, 0x28057505,
    0x00031a61, 0x0c260220, 0x00342105, 0x00000000,
    0x00131b61, 0x0e260220, 0x00342205, 0x00000000,
    0x00031b61, 0x10260220, 0x00342a05, 0x00000000,
    0x00131c61, 0x12260220, 0x00342b05, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x14140000, 0xfb040c24, 0x00040000,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x00000000, 0xfb0c1024, 0x00041414,
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
      .base.program_size = 3072,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_copy_clone_indirect_relocs,
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
const char *gfx125_bvh_copy_clone_indirect_sha1 = "7af37fb0613f36d96c975318cb638e9b5afbbaf9";

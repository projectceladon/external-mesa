#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_leaf_primref_to_procedurals_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_leaf_primref_to_procedurals_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
   { 24, 8 },
   { 32, 8 },
   { 40, 4 },
   { 44, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g95<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(8)          g78<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(16)         g40<1>D         1D                              { align1 1H };
mov(16)         g91<1>UD        g0.1<0,1,0>UD                   { align1 1H };
add(1)          g96<1>UD        g95<0,1,0>UD    0x00000000UD    { align1 WE_all 1N I@4 compacted };
add(1)          g97<1>UD        g95<0,1,0>UD    0x00000040UD    { align1 WE_all 1N compacted };
add(8)          g78.8<1>UW      g78<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@5 compacted };
shl(16)         g79<1>D         g91<8,8,1>D     0x00000004UD    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(1)         g1UD            g96UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g3UD            g97UD           nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g96<1>D         g79<1,1,0>D     16D             { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g93.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g89.1<2>F       g2.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g20.1<2>F       g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g34.1<2>F       g2.3<0,1,0>F                    { align1 2Q };
mov(8)          g22.1<2>F       g2.5<0,1,0>F                    { align1 1Q };
mov(8)          g36.1<2>F       g2.5<0,1,0>F                    { align1 2Q };
mov(8)          g24.1<2>F       g2.7<0,1,0>F                    { align1 1Q };
mov(8)          g38.1<2>F       g2.7<0,1,0>F                    { align1 2Q };
mov(8)          g93<2>F         g2<0,1,0>F                      { align1 1Q F@7 compacted };
mov(8)          g89<2>F         g2<0,1,0>F                      { align1 2Q F@7 compacted };
mov(8)          g20<2>F         g2.2<0,1,0>F                    { align1 1Q F@7 compacted };
mov(8)          g34<2>F         g2.2<0,1,0>F                    { align1 2Q F@7 compacted };
mov(8)          g22<2>F         g2.4<0,1,0>F                    { align1 1Q F@7 compacted };
mov(8)          g36<2>F         g2.4<0,1,0>F                    { align1 2Q F@7 compacted };
mov(8)          g24<2>F         g2.6<0,1,0>F                    { align1 1Q F@7 compacted };
mov(8)          g38<2>F         g2.6<0,1,0>F                    { align1 2Q F@7 compacted };
add(8)          g95<1>D         g93<8,4,2>D     36D             { align1 1Q F@7 compacted };
add(8)          g91<1>D         g89<8,4,2>D     36D             { align1 2Q F@7 compacted };
cmp.l.f0.0(8)   g102<1>UD       g95<8,8,1>UD    g93<8,4,2>UD    { align1 1Q I@2 };
mov(8)          g98<2>UD        g95<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g92<1>UD        g91<8,8,1>UD    g89<8,4,2>UD    { align1 2Q I@3 };
mov(8)          g100<2>UD       g91<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
cmp.z.f0.0(16)  null<1>D        g3.2<0,1,0>D    8D              { align1 1H };
add(8)          g103<1>D        -g102<8,8,1>D   g93.1<8,4,2>D   { align1 1Q I@5 };
add(8)          g93<1>D         -g92<8,8,1>D    g89.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g98.1<2>UD      g103<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g100.1<2>UD     g93<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g94UD           g98UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
sel.l(16)       g28<1>UD        g96<1,1,0>UD    g94<1,1,0>UD    { align1 1H $2.dst compacted };
mul(16)         g76<1>D         g3.2<0,1,0>D    g94.1<16,8,2>UW { align1 1H };
mul(16)         g97<1>D         g3.2<0,1,0>D    g94<16,8,2>UW   { align1 1H $2.src };
add(16)         g97.1<2>UW      g97.1<16,8,2>UW g76<16,8,2>UW   { align1 1H I@1 };
(-f0.0) sel(16) g42<1>UD        g97<8,8,1>UD    0x00000004UD    { align1 1H I@1 };
cmp.nz.f0.0(16) null<1>D        g79<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
add(16)         g98<1>D         g79<1,1,0>D     -1D             { align1 1H $2.src compacted };
mov(8)          g106<1>UD       g22.1<8,4,2>UD                  { align1 1Q F@4 };
mov(8)          g107<1>UD       g36.1<8,4,2>UD                  { align1 2Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mul(16)         g100<1>D        g98<8,8,1>D     g3.4<0,1,0>UW   { align1 1H I@3 };
mul(16)         g81<1>D         g98<8,8,1>D     g3.5<0,1,0>UW   { align1 1H };
add(16)         g100.1<2>UW     g100.1<16,8,2>UW g81<16,8,2>UW  { align1 1H I@1 };
add(16)         g102<1>D        g100<1,1,0>D    g42<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g104<1>UD       g102<1,1,0>UD   g100<1,1,0>UD   { align1 1H I@1 compacted };
add(8)          g111<1>D        g22<8,4,2>D     g102<1,1,0>D    { align1 1Q compacted };
add(8)          g108<1>D        g36<8,4,2>D     g103<1,1,0>D    { align1 2Q compacted };
cmp.l.f0.0(8)   g109<1>UD       g111<8,8,1>UD   g22<8,4,2>UD    { align1 1Q I@2 };
mov(8)          g113<2>UD       g111<4,4,1>UD                   { align1 1Q };
cmp.l.f0.0(8)   g110<1>UD       g108<8,8,1>UD   g36<8,4,2>UD    { align1 2Q I@3 };
mov(8)          g115<2>UD       g108<4,4,1>UD                   { align1 2Q };
add3(16)        g111<1>D        g106<8,8,1>D    -g104<8,8,1>D   -g109<1,1,1>D { align1 1H I@2 };
mov(8)          g113.1<2>UD     g111<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g115.1<2>UD     g112<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g81UD           g113UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $3 };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g81<1>UD        0xffffffffUD                    { align1 1H $3.dst };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
mov(8)          g44<1>UD        g22.1<8,4,2>UD                  { align1 1Q A@4 };
mov(8)          g45<1>UD        g36.1<8,4,2>UD                  { align1 2Q A@3 };

LABEL4:
cmp.ge.f0.0(16) null<1>UD       g79<8,8,1>UD    g94<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL3        UIP:  LABEL3              { align1 1H };
mul(16)         g112<1>D        g79<8,8,1>D     g3.4<0,1,0>UW   { align1 1H $3.src };
mul(16)         g83<1>D         g79<8,8,1>D     g3.5<0,1,0>UW   { align1 1H };
add(16)         g112.1<2>UW     g112.1<16,8,2>UW g83<16,8,2>UW  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g114<1>D        g112<1,1,0>D    g42<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g116<1>UD       g114<1,1,0>UD   g112<1,1,0>UD   { align1 1H I@1 compacted };
add(8)          g118<1>D        g36<8,4,2>D     g115<1,1,0>D    { align1 2Q compacted };
add(8)          g112<1>D        g22<8,4,2>D     g114<1,1,0>D    { align1 1Q compacted };
cmp.l.f0.0(8)   g120<1>UD       g118<8,8,1>UD   g36<8,4,2>UD    { align1 2Q I@2 };
mov(8)          g126<2>UD       g118<4,4,1>UD                   { align1 2Q $4.src };
cmp.l.f0.0(8)   g119<1>UD       g112<8,8,1>UD   g22<8,4,2>UD    { align1 1Q I@3 };
mov(8)          g124<2>UD       g112<4,4,1>UD                   { align1 1Q $4.src };
add3(16)        g121<1>D        g44<8,8,1>D     -g116<8,8,1>D   -g119<1,1,1>D { align1 1H I@2 };
mov(8)          g124.1<2>UD     g121<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g126.1<2>UD     g122<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g122UD          g124UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
cmp.nz.f0.0(16) null<1>D        g122<8,8,1>D    g81<8,8,1>D     { align1 1H $4.dst };
(+f0.0) break(16) JIP:  LABEL3        UIP:  LABEL3              { align1 1H };
add(16)         g79<1>D         g79<1,1,0>D     1D              { align1 1H compacted };

LABEL3:
while(16)       JIP:  LABEL4                                    { align1 1H };
add(16)         g123<1>D        g28<1,1,0>D     -1D             { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mul(16)         g125<1>D        g123<8,8,1>D    g3.4<0,1,0>UW   { align1 1H I@1 };
mul(16)         g84<1>D         g123<8,8,1>D    g3.5<0,1,0>UW   { align1 1H };
add(16)         g125.1<2>UW     g125.1<16,8,2>UW g84<16,8,2>UW  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g1<1>D          g125<1,1,0>D    g42<1,1,0>D     { align1 1H A@1 compacted };
cmp.l.f0.0(16)  g4<1>UD         g1<1,1,0>UD     g125<1,1,0>UD   { align1 1H I@1 compacted };
add(8)          g113<1>D        g22<8,4,2>D     g1<1,1,0>D      { align1 1Q $3.src compacted };
add(8)          g6<1>D          g36<8,4,2>D     g2<1,1,0>D      { align1 2Q compacted };
cmp.l.f0.0(8)   g7<1>UD         g113<8,8,1>UD   g22<8,4,2>UD    { align1 1Q I@2 };
mov(8)          g12<2>UD        g113<4,4,1>UD                   { align1 1Q };
cmp.l.f0.0(8)   g8<1>UD         g6<8,8,1>UD     g36<8,4,2>UD    { align1 2Q I@3 };
mov(8)          g14<2>UD        g6<4,4,1>UD                     { align1 2Q };
add3(16)        g9<1>D          g44<8,8,1>D     -g4<8,8,1>D     -g7<1,1,1>D { align1 1H I@2 };
mov(8)          g12.1<2>UD      g9<4,4,1>UD                     { align1 1Q I@1 };
mov(8)          g14.1<2>UD      g10<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g10UD           g12UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $5 };

LABEL6:
cmp.ge.f0.0(16) null<1>UD       g28<8,8,1>UD    g94<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL5        UIP:  LABEL5              { align1 1H };
mul(16)         g12<1>D         g28<8,8,1>D     g3.4<0,1,0>UW   { align1 1H $5.src };
mul(16)         g85<1>D         g28<8,8,1>D     g3.5<0,1,0>UW   { align1 1H };
add(16)         g12.1<2>UW      g12.1<16,8,2>UW g85<16,8,2>UW   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g14<1>D         g12<1,1,0>D     g42<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g16<1>UD        g14<1,1,0>UD    g12<1,1,0>UD    { align1 1H I@1 compacted };
add(8)          g114<1>D        g22<8,4,2>D     g14<1,1,0>D     { align1 1Q $3.src compacted };
add(8)          g18<1>D         g36<8,4,2>D     g15<1,1,0>D     { align1 2Q compacted };
cmp.l.f0.0(8)   g26<1>UD        g114<8,8,1>UD   g22<8,4,2>UD    { align1 1Q I@2 };
mov(8)          g46<2>UD        g114<4,4,1>UD                   { align1 1Q $6.src };
cmp.l.f0.0(8)   g27<1>UD        g18<8,8,1>UD    g36<8,4,2>UD    { align1 2Q I@3 };
mov(8)          g48<2>UD        g18<4,4,1>UD                    { align1 2Q $6.src };
add3(16)        g30<1>D         g44<8,8,1>D     -g16<8,8,1>D    -g26<1,1,1>D { align1 1H I@2 };
mov(8)          g46.1<2>UD      g30<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g48.1<2>UD      g31<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g31UD           g46UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
cmp.nz.f0.0(16) null<1>D        g31<8,8,1>D     g10<8,8,1>D     { align1 1H $6.dst };
(+f0.0) break(16) JIP:  LABEL5        UIP:  LABEL5              { align1 1H };
add(16)         g28<1>D         g28<1,1,0>D     1D              { align1 1H compacted };

LABEL5:
while(16)       JIP:  LABEL6                                    { align1 1H };
mov(16)         g46<1>D         g78<8,8,1>UW                    { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
and(16)         g48<1>UD        g46<1,1,0>UD    0x0000000fUD    { align1 1H I@1 compacted };
mov(16)         g77<2>B         3W                              { align1 1H };
add(16)         g30<1>D         g79<1,1,0>D     g48<1,1,0>D     { align1 1H I@2 compacted };

LABEL18:
add(16)         g50<1>D         g28<1,1,0>D     g48<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g52<1>UD        g50<1,1,0>UD    g28<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g58<1>UD        g30<1,1,0>UD    g50<1,1,0>UD    { align1 1H I@3 compacted };
mov(16)         g54<1>D         -g52<8,8,1>D                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
and(16)         g60<1>UD        ~g52<8,8,1>D    g58<8,8,1>UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.g.f0.0(16)  g62<1>UD        g54<1,1,0>UD    0x00000000UD    { align1 1H compacted };
or.nz.f0.0(16)  null<1>UD       g62<8,8,1>UD    g60<8,8,1>UD    { align1 1H I@1 };
(-f0.0) break(16) JIP:  LABEL7        UIP:  LABEL7              { align1 1H };
mul(16)         g66<1>D         g30<8,8,1>D     g3.4<0,1,0>UW   { align1 1H $5.src };
mul(16)         g86<1>D         g30<8,8,1>D     g3.5<0,1,0>UW   { align1 1H };
add(16)         g66.1<2>UW      g66.1<16,8,2>UW g86<16,8,2>UW   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g68<1>D         g66<1,1,0>D     g3.3<0,1,0>D    { align1 1H I@1 compacted };
add(16)         g78<1>D         g66<1,1,0>D     g42<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(16)  g70<1>UD        g68<1,1,0>UD    g66<1,1,0>UD    { align1 1H I@2 compacted };
add(8)          g115<1>D        g22<8,4,2>D     g68<1,1,0>D     { align1 1Q $3.src compacted };
add(8)          g72<1>D         g36<8,4,2>D     g69<1,1,0>D     { align1 2Q $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(8)          g116<1>D        g22<8,4,2>D     g78<1,1,0>D     { align1 1Q I@4 compacted };
add(8)          g82<1>D         g36<8,4,2>D     g79<1,1,0>D     { align1 2Q @5 $3.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
cmp.l.f0.0(8)   g73<1>UD        g115<8,8,1>UD   g22<8,4,2>UD    { align1 1Q I@4 };
mov(8)          g58<2>UD        g115<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $8.src };
cmp.l.f0.0(8)   g74<1>UD        g72<8,8,1>UD    g36<8,4,2>UD    { align1 2Q I@5 };
mov(8)          g60<2>UD        g72<4,4,1>UD                    { align1 2Q };
mov(8)          g62<2>UD        g116<4,4,1>UD                   { align1 1Q I@6 };
cmp.l.f0.0(16)  g80<1>UD        g78<1,1,0>UD    g66<1,1,0>UD    { align1 1H $3.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $5.src };
mov(8)          g64<2>UD        g82<4,4,1>UD                    { align1 2Q I@7 };
cmp.l.f0.0(8)   g83<1>UD        g116<8,8,1>UD   g22<8,4,2>UD    { align1 1Q $3.dst };
cmp.l.f0.0(8)   g84<1>UD        g82<8,8,1>UD    g36<8,4,2>UD    { align1 2Q };
cmp.l.f0.0(16)  g88<1>UD        g30<1,1,0>UD    g28<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add3(16)        g75<1>D         g44<8,8,1>D     -g70<8,8,1>D    -g73<1,1,1>D { align1 1H I@7 };
add3(16)        g85<1>D         g44<8,8,1>D     -g80<8,8,1>D    -g83<1,1,1>D { align1 1H I@3 };
mov(8)          g58.1<2>UD      g75<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g60.1<2>UD      g76<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g62.1<2>UD      g85<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g64.1<2>UD      g86<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g82UD           g58UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g86UD           g62UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
cmp.z.f0.0(16)  g90<1>D         g86<1,1,0>D     g86<0,1,0>D     { align1 1H $5.dst compacted };
and.nz.f0.0(16) null<1>UD       g88<8,8,1>UD    g90<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL9          UIP:  LABEL8              { align1 1H };
mov(16)         g91<1>D         0D                              { align1 WE_all 1H $8.src };
mov(16)         g91<1>D         g40<8,8,1>D                     { align1 1H };
add(8)          g91.1<2>D       g91<8,4,2>D     g91.1<8,4,2>D   { align1 WE_all 1Q I@1 };
add(4)          g91.2<4>D       g91.1<8,2,4>D   g91.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g91.3<4>D       g91.1<8,2,4>D   g91.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g91.4<1>D       g91.3<0,1,0>D   g91.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g92.4<1>D       g92.3<0,1,0>D   g92.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(8)          g92<1>D         g91.7<0,1,0>D   g92<1,1,0>D     { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g32<1>UD        g92.7<0,1,0>UD                  { align1 1H };
else(16)        JIP:  LABEL8          UIP:  LABEL8              { align1 1H };

LABEL9:
mov(16)         g32<1>UD        0x00000000UD                    { align1 1H I@2 };

LABEL8:
endif(16)       JIP:  LABEL7                                    { align1 1H };
shl(16)         g92<1>D         g86<8,8,1>D     0x00000006UD    { align1 1H $8.src };
shr(16)         g94<1>UD        g86<1,1,0>UD    0x0000001aUD    { align1 1H compacted };
mov(8)          g96<1>UD        g24.1<8,4,2>UD                  { align1 1Q F@2 };
mov(8)          g97<1>UD        g38.1<8,4,2>UD                  { align1 2Q F@1 };
add(8)          g50<1>D         g24<8,4,2>D     g92<1,1,0>D     { align1 1Q I@4 compacted };
add(8)          g51<1>D         g38<8,4,2>D     g93<1,1,0>D     { align1 2Q I@5 compacted };
cmp.l.f0.0(8)   g98<1>UD        g50<8,8,1>UD    g24<8,4,2>UD    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $2.src };
cmp.l.f0.0(8)   g99<1>UD        g51<8,8,1>UD    g38<8,4,2>UD    { align1 2Q I@2 };
cmp.l.f0.0(16)  null<1>UD       g48<8,8,1>UD    0x00000008UD    { align1 1H };
add3(16)        g52<1>D         g96<8,8,1>D     g94<8,8,1>D     -g98<1,1,1>D { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL10             { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g48<8,8,1>UD    g32<0,1,0>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
shl(16)         g99<1>D         g82<8,8,1>D     0x00000005UD    { align1 1H $3.dst };
shr(16)         g101<1>UD       g82<1,1,0>UD    0x0000001bUD    { align1 1H $2.src compacted };
mov(8)          g103<1>UD       g20.1<8,4,2>UD                  { align1 1Q F@6 };
mov(8)          g104<1>UD       g34.1<8,4,2>UD                  { align1 2Q F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(8)          g105<1>D        g20<8,4,2>D     g99<1,1,0>D     { align1 1Q I@4 compacted };
add(8)          g106<1>D        g34<8,4,2>D     g100<1,1,0>D    { align1 2Q I@5 compacted };
cmp.l.f0.0(8)   g107<1>UD       g105<8,8,1>UD   g20<8,4,2>UD    { align1 1Q I@2 };
mov(8)          g63<2>UD        g105<4,4,1>UD                   { align1 1Q $5.src };
cmp.l.f0.0(8)   g108<1>UD       g106<8,8,1>UD   g34<8,4,2>UD    { align1 2Q I@3 };
mov(8)          g65<2>UD        g106<4,4,1>UD                   { align1 2Q $5.src };
add(16)         g111<1>D        g105<1,1,0>D    16D             { align1 1H compacted };
add3(16)        g109<1>D        g103<8,8,1>D    g101<8,8,1>D    -g107<1,1,1>D { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g113<1>UD       g111<1,1,0>UD   g105<1,1,0>UD   { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g13<2>UD        g111<4,4,1>UD                   { align1 1Q };
mov(8)          g15<2>UD        g112<4,4,1>UD                   { align1 2Q $5.src };
mov(8)          g63.1<2>UD      g109<4,4,1>UD                   { align1 1Q I@4 };
mov(8)          g65.1<2>UD      g110<4,4,1>UD                   { align1 2Q I@5 };
add(16)         g115<1>D        -g113<1,1,0>D   g109<1,1,0>D    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g4UD            g63UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $5 };
mov(8)          g13.1<2>UD      g115<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g15.1<2>UD      g116<4,4,1>UD                   { align1 2Q I@2 };
and(16)         g84<1>UD        g10<8,8,1>UD    0x07ffffffUD    { align1 1H $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g5UD            g13UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $5 };
shr(16)         g86<1>UD        g11<1,1,0>UD    0x0000001dUD    { align1 1H $5.dst compacted };
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
mov(16)         g82<1>UD        0xffffffffUD                    { align1 1H $3.dst };
mov(16)         g84<1>UD        0xffffffffUD                    { align1 1H I@4 };
mov(16)         g86<1>UD        0x00000000UD                    { align1 1H I@4 };

LABEL11:
endif(16)       JIP:  LABEL10                                   { align1 1H };
add(16)         g116<1>D        g46<1,1,0>D     15D             { align1 1H compacted };
add(16)         g118<1>D        g46<1,1,0>D     -1D             { align1 1H compacted };
add(16)         g124<1>D        g46<1,1,0>D     1D              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  null<1>D        g116<8,8,1>D    16D             { align1 1H I@3 };
mov(16)         a0<1>UW         0x0a80UW                        { align1 WE_all 1H I@3 };
shl(16)         a0<1>UW         g118<16,8,2>W   0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a80UW        { align1 1H A@1 };
mov(16)         g120<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         a0<1>UW         0x0a80UW                        { align1 WE_all 1H I@3 };
shl(16)         a0<1>UW         g124<16,8,2>W   0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a80UW        { align1 1H A@1 };
mov(16)         g126<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
(-f0.0) sel(16) g122<1>UD       g120<8,8,1>UD   0xffffffffUD    { align1 1H I@2 };
cmp.l.f0.0(16)  g1<1>D          g124<1,1,0>D    16D             { align1 1H F@1 compacted };
(+f0.0) sel(16) g4<1>UD         g126<8,8,1>UD   0xffffffffUD    { align1 1H @3 $5.dst };
cmp.nz.f0.0(16) g6<1>D          g122<1,1,0>D    g84<1,1,0>D     { align1 1H @3 $5.dst compacted };
cmp.nz.f0.0(16) null<1>D        g1<8,8,1>D      0D              { align1 1H I@3 };
mov(16)         g8<1>D          -g6<8,8,1>D                     { align1 1H @2 $5.dst };
mov(16)         a0<1>UW         0x0100UW                        { align1 WE_all 1H @1 $5.dst };
shl(16)         a0<1>UW         g124<16,8,2>W   0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0100UW        { align1 1H A@1 };
mov(16)         g10<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
(+f0.0) sel(16) g54<1>UD        g10<1,1,0>UD    0x00000000UD    { align1 1H I@1 compacted };
cmp.nz.f0.0(16) null<1>D        g6<8,8,1>D      0D              { align1 1H };
(+f0.0) sel(16) g11<1>UD        g48<1,1,0>UD    0x00000000UD    { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g17<2>UD        g11<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $5.src };
mov(8)          g13<2>UD        g12<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g17.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g13.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
mov(8)          g88<2>UD        0x00000000UD                    { align1 WE_all 1Q I@2 };
mov(8)          g88<2>UD        g17<8,4,2>UD                    { align1 1Q };
mov(8)          g90<2>UD        0x00000000UD                    { align1 WE_all 2Q I@2 };
mov(8)          g90<2>UD        g13<8,4,2>UD                    { align1 2Q };
mov(8)          g26<2>UD        g88<8,4,2>UD                    { align1 WE_all 1Q I@2 };
mov(8)          g88.1<2>UD      0x00000000UD                    { align1 WE_all 1Q };
mov(8)          g88.1<2>UD      g17.1<8,4,2>UD                  { align1 1Q };
mov(8)          g56<2>UD        g90<8,4,2>UD                    { align1 WE_all 2Q I@3 };
mov(8)          g90.1<2>UD      0x00000000UD                    { align1 WE_all 2Q };
mov(8)          g90.1<2>UD      g13.1<8,4,2>UD                  { align1 2Q };
mov(8)          g26.1<2>UD      g88.1<8,4,2>UD                  { align1 WE_all 1Q I@3 };
mov(8)          g56.1<2>UD      g90.1<8,4,2>UD                  { align1 WE_all 2Q I@2 };
cmp.g.f0.0(4)   null<1>UD       g26<8,2,4>UD    g26.2<8,2,4>UD  { align1 WE_all 1N I@2 };
(+f0.0) cmp.z.f0.0(4) null<1>UD g26.1<8,2,4>UD  g26.3<8,2,4>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(4) null<1>UD g26.1<8,2,4>UD  g26.3<8,2,4>UD  { align1 WE_all 1N };
(+f0.0) mov(4)  g26.2<4>UD      g26<8,2,4>UD                    { align1 WE_all 1N };
(+f0.0) mov(4)  g26.3<4>UD      g26.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(2)   null<1>UD       g26.2<0,1,0>UD  g26.4<4,2,2>UD  { align1 WE_all 1N I@1 };
(+f0.0) cmp.z.f0.0(2) null<1>UD g26.3<0,1,0>UD  g26.5<4,2,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(2) null<1>UD g26.3<0,1,0>UD  g26.5<4,2,2>UD  { align1 WE_all 1N };
(+f0.0) mov(2)  g26.4<2>UD      g26.2<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(2)  g26.5<2>UD      g26.3<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(2)   null<1>UD       g27.2<0,1,0>UD  g27.4<4,2,2>UD  { align1 WE_all 1N I@6 };
(+f0.0) cmp.z.f0.0(2) null<1>UD g27.3<0,1,0>UD  g27.5<4,2,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(2) null<1>UD g27.3<0,1,0>UD  g27.5<4,2,2>UD  { align1 WE_all 1N };
(+f0.0) mov(2)  g27.4<2>UD      g27.2<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(2)  g27.5<2>UD      g27.3<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(4)   null<1>UD       g26.6<0,1,0>UD  g27<8,4,2>UD    { align1 WE_all 1N I@1 };
(+f0.0) cmp.z.f0.0(4) null<1>UD g26.7<0,1,0>UD  g27.1<8,4,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(4) null<1>UD g26.7<0,1,0>UD  g27.1<8,4,2>UD  { align1 WE_all 1N };
(+f0.0) mov(4)  g27<2>UD        g26.6<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(4)  g27.1<2>UD      g26.7<0,1,0>UD                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(8)          g58.1<2>UD      g26.1<8,4,2>UD                  { align1 1Q $3.src };
cmp.g.f0.0(4)   null<1>UD       g56<8,2,4>UD    g56.2<8,2,4>UD  { align1 WE_all 1N };
mov(8)          g58<2>UD        g26<8,4,2>UD                    { align1 1Q I@2 };
(+f0.0) cmp.z.f0.0(4) null<1>UD g56.1<8,2,4>UD  g56.3<8,2,4>UD  { align1 WE_all 1N };
add(8)          g58<1>D         g48<8,8,1>D     -g58<8,4,2>D    { align1 1Q I@2 };
(-f0.0) cmp.g.f0.0(4) null<1>UD g56.1<8,2,4>UD  g56.3<8,2,4>UD  { align1 WE_all 1N };
(+f0.0) mov(4)  g56.2<4>UD      g56<8,2,4>UD                    { align1 WE_all 1N };
(+f0.0) mov(4)  g56.3<4>UD      g56.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(2)   null<1>UD       g56.2<0,1,0>UD  g56.4<4,2,2>UD  { align1 WE_all 1N I@1 };
(+f0.0) cmp.z.f0.0(2) null<1>UD g56.3<0,1,0>UD  g56.5<4,2,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(2) null<1>UD g56.3<0,1,0>UD  g56.5<4,2,2>UD  { align1 WE_all 1N };
(+f0.0) mov(2)  g56.4<2>UD      g56.2<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(2)  g56.5<2>UD      g56.3<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(2)   null<1>UD       g57.2<0,1,0>UD  g57.4<4,2,2>UD  { align1 WE_all 1N I@6 };
(+f0.0) cmp.z.f0.0(2) null<1>UD g57.3<0,1,0>UD  g57.5<4,2,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(2) null<1>UD g57.3<0,1,0>UD  g57.5<4,2,2>UD  { align1 WE_all 1N };
(+f0.0) mov(2)  g57.4<2>UD      g57.2<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(2)  g57.5<2>UD      g57.3<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(4)   null<1>UD       g56.6<0,1,0>UD  g57<8,4,2>UD    { align1 WE_all 1N I@1 };
(+f0.0) cmp.z.f0.0(4) null<1>UD g56.7<0,1,0>UD  g57.1<8,4,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(4) null<1>UD g56.7<0,1,0>UD  g57.1<8,4,2>UD  { align1 WE_all 1N };
(+f0.0) mov(4)  g57<2>UD        g56.6<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(4)  g57.1<2>UD      g56.7<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(8)   null<1>UD       g27.6<0,1,0>UD  g56<8,4,2>UD    { align1 WE_all 1Q I@1 };
(+f0.0) cmp.z.f0.0(8) null<1>UD g27.7<0,1,0>UD  g56.1<8,4,2>UD  { align1 WE_all 1Q };
(-f0.0) cmp.g.f0.0(8) null<1>UD g27.7<0,1,0>UD  g56.1<8,4,2>UD  { align1 WE_all 1Q };
(+f0.0) mov(8)  g56<2>UD        g27.6<0,1,0>UD                  { align1 WE_all 1Q };
(+f0.0) mov(8)  g56.1<2>UD      g27.7<0,1,0>UD                  { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@1 };
mov(8)          g15.1<2>UD      g56.1<8,4,2>UD                  { align1 2Q $5.src };
cmp.nz.f0.0(16) g60<1>D         g4<1,1,0>D      g84<1,1,0>D     { align1 1H $3.src compacted };
cmp.l.f0.0(16)  null<1>UD       g48<8,8,1>UD    g32<0,1,0>UD    { align1 1H };
mov(8)          g15<2>UD        g56<8,4,2>UD                    { align1 2Q I@3 };
add(8)          g59<1>D         g49<8,8,1>D     -g15<8,4,2>D    { align1 2Q I@1 };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL13             { align1 1H };
mov(16)         g62<1>D         0D                              { align1 WE_all 1H $5.src };
mov(16)         g62<1>D         -g6<8,8,1>D                     { align1 1H };
cmp.z.f0.0(16)  null<1>D        g48<8,8,1>D     0D              { align1 1H };
add(8)          g62.1<2>D       g62<8,4,2>D     g62.1<8,4,2>D   { align1 WE_all 1Q I@2 };
add(4)          g62.2<4>D       g62.1<8,2,4>D   g62.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g62.3<4>D       g62.1<8,2,4>D   g62.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g62.4<1>D       g62.3<0,1,0>D   g62.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g63.4<1>D       g63.3<0,1,0>D   g63.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(8)          g63<1>D         g62.7<0,1,0>D   g63<1,1,0>D     { align1 WE_all 1Q I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL15         UIP:  LABEL14             { align1 1H };
add(8)          g70<1>D         g24<8,4,2>D     28D             { align1 1Q compacted };
add(8)          g68<1>D         g38<8,4,2>D     28D             { align1 2Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
mov(16)         g71<1>D         g63.7<0,1,0>D                   { align1 1H };
cmp.l.f0.0(8)   g73<1>UD        g70<8,8,1>UD    g24<8,4,2>UD    { align1 1Q I@3 };
cmp.l.f0.0(8)   g69<1>UD        g68<8,8,1>UD    g38<8,4,2>UD    { align1 2Q I@3 };
mov(8)          g64<2>UD        g70<4,4,1>UD                    { align1 1Q $5.src };
mov(8)          g66<2>UD        g68<4,4,1>UD                    { align1 2Q $5.src };
add(8)          g74<1>D         -g73<8,8,1>D    g24.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g70<1>D         -g69<8,8,1>D    g38.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g64.1<2>UD      g74<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g66.1<2>UD      g70<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g88UD           g64UD           g71UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $5 };
else(16)        JIP:  LABEL14         UIP:  LABEL14             { align1 1H };

LABEL15:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
mov(16)         g88<1>UD        0x00000000UD                    { align1 1H };

LABEL14:
endif(16)       JIP:  LABEL13                                   { align1 1H };
mov(16)         g71<1>D         0D                              { align1 WE_all 1H $5.src };
mov(16)         g71<1>D         -g6<8,8,1>D                     { align1 1H };
add(16)         g73<1>D         g88<0,1,0>D     -1D             { align1 1H @3 $5.dst compacted };
add(8)          g71.1<2>D       g71<8,4,2>D     g71.1<8,4,2>D   { align1 WE_all 1Q I@2 };
add(4)          g71.2<4>D       g71.1<8,2,4>D   g71.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g71.3<4>D       g71.1<8,2,4>D   g71.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g71.4<1>D       g71.3<0,1,0>D   g71.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g72.4<1>D       g72.3<0,1,0>D   g72.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(8)          g72<1>D         g71.7<0,1,0>D   g72<1,1,0>D     { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g75<1>D         g73<1,1,0>D     g71<1,1,0>D     { align1 1H compacted };
shl(16)         g78<1>D         g75<8,8,1>D     0x00000006UD    { align1 1H I@1 };
shr(16)         g80<1>UD        g75<1,1,0>UD    0x0000001aUD    { align1 1H compacted };
add(8)          g88<1>D         g24<8,4,2>D     g78<1,1,0>D     { align1 1Q I@2 compacted };
add(8)          g89<1>D         g38<8,4,2>D     g79<1,1,0>D     { align1 2Q @3 $5.dst compacted };
cmp.l.f0.0(8)   g90<1>UD        g88<8,8,1>UD    g24<8,4,2>UD    { align1 1Q I@2 };
mov(8)          g65<2>UD        g88<4,4,1>UD                    { align1 1Q $5.src };
cmp.l.f0.0(8)   g91<1>UD        g89<8,8,1>UD    g38<8,4,2>UD    { align1 2Q I@3 };
mov(8)          g67<2>UD        g89<4,4,1>UD                    { align1 2Q $5.src };
mov.nz.f0.0(16) null<1>D        g60<8,8,1>D                     { align1 1H };
add3(16)        g92<1>D         g96<8,8,1>D     g80<8,8,1>D     -g90<1,1,1>D { align1 1H I@3 };
mov(8)          g65.1<2>UD      g92<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g67.1<2>UD      g93<4,4,1>UD                    { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL16         UIP:  LABEL16             { align1 1H };
and(16)         g94<1>UD        g84<8,8,1>UD    0x00ffffffUD    { align1 1H };
shl(16)         g96<1>D         g86<8,8,1>D     0x0000001eUD    { align1 1H };
add(16)         g98<1>D         g58<1,1,0>D     1D              { align1 1H compacted };
or(16)          g14<1>UD        g94<8,8,1>UD    0xff000000UD    { align1 1H I@3 };
or(16)          g16<1>UD        g84<1,1,0>UD    g96<1,1,0>UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
or(16)          g18<1>UD        g98<8,8,1>UD    0xfffffff0UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g65UD           g14UD           0x08007586                0x00000180
                            ugm MsgDesc: ( store_cmask, a64, d32, xyz, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 6 flat ) base_offset 0  { align1 1H $5 };

LABEL16:
endif(16)       JIP:  LABEL13                                   { align1 1H };
shl(16)         g99<1>D         g82<8,8,1>D     0x00000005UD    { align1 1H $2.src };
shr(16)         g101<1>UD       g82<1,1,0>UD    0x0000001bUD    { align1 1H $2.src compacted };
add(8)          g103<1>D        g20<8,4,2>D     16D             { align1 1Q F@6 compacted };
add(8)          g104<1>D        g34<8,4,2>D     16D             { align1 2Q F@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
shl(16)         g114<1>D        g58<8,8,1>D     0x00000002UD    { align1 1H I@7 };
add(16)         g116<1>D        g88<1,1,0>D     12D             { align1 1H compacted };
cmp.l.f0.0(8)   g75<1>UD        g103<8,8,1>UD   g20<8,4,2>UD    { align1 1Q I@4 };
cmp.l.f0.0(8)   g105<1>UD       g104<8,8,1>UD   g34<8,4,2>UD    { align1 2Q I@4 };
add(16)         g108<1>D        g103<1,1,0>D    g99<1,1,0>D     { align1 1H I@7 compacted };
add(16)         g120<1>D        g116<1,1,0>D    g114<1,1,0>D    { align1 1H I@4 compacted };
add(8)          g106<1>D        -g75<8,8,1>D    g20.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g107<1>D        -g105<8,8,1>D   g34.1<8,4,2>D   { align1 2Q I@4 };
cmp.l.f0.0(16)  g110<1>UD       g108<1,1,0>UD   g103<1,1,0>UD   { align1 1H I@4 compacted };
mov(8)          g66<2>UD        g108<4,4,1>UD                   { align1 1Q $5.src };
mov(8)          g68<2>UD        g109<4,4,1>UD                   { align1 2Q $5.src };
cmp.l.f0.0(16)  g118<1>UD       g116<1,1,0>UD   g88<1,1,0>UD    { align1 1H compacted };
mov(8)          g70<2>UD        g120<4,4,1>UD                   { align1 1Q I@7 };
mov(8)          g72<2>UD        g121<4,4,1>UD                   { align1 2Q I@7 };
cmp.l.f0.0(16)  g122<1>UD       g120<1,1,0>UD   g116<1,1,0>UD   { align1 1H compacted };
add3(16)        g112<1>D        g106<8,8,1>D    g101<8,8,1>D    -g110<1,1,1>D { align1 1H I@7 };
add3(16)        g124<1>D        -g118<8,8,1>D   g92<8,8,1>D     -g122<1,1,1>D { align1 1H I@2 };
mov(8)          g66.1<2>UD      g112<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g68.1<2>UD      g113<4,4,1>UD                   { align1 2Q I@3 };
mov(8)          g70.1<2>UD      g124<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g72.1<2>UD      g125<4,4,1>UD                   { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g6UD            g66UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $5 };
and(16)         g74<1>UD        g12<8,8,1>UD    0x1fffffffUD    { align1 1H $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g70UD           g74UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $7 };
cmp.z.f0.0(16)  null<1>D        g48<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL17             { align1 1H };
cmp.g.f0.0(16)  g125<1>UD       g50<1,1,0>UD    0x00000000UD    { align1 1H compacted };
add(16)         g4<1>D          g88<1,1,0>D     -g50<1,1,0>D    { align1 1H compacted };
add(16)         g62<1>D         g50<1,1,0>D     12D             { align1 1H compacted };
add(16)         g1<1>D          -g52<1,1,0>D    g125<1,1,0>D    { align1 1H A@1 compacted };
cmp.l.f0.0(16)  g6<1>UD         g4<1,1,0>UD     g88<1,1,0>UD    { align1 1H @3 $5.dst compacted };
cmp.g.f0.0(16)  g10<1>UD        g4<1,1,0>UD     0x00000000UD    { align1 1H $5.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g71<2>UD        g62<4,4,1>UD                    { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $7.src };
mov(8)          g73<2>UD        g63<4,4,1>UD                    { align1 2Q I@5 };
add3(16)        g8<1>D          g92<8,8,1>D     g1<8,8,1>D      -g6<1,1,1>D { align1 1H @4 $5.dst };
add(16)         g12<1>D         -g8<1,1,0>D     g10<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  null<1>D        g8<8,8,1>D      0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
(+f0.0) sel(16) g14<1>UD        g12<1,1,0>UD    g8<1,1,0>UD     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
(+f0.0) sel(16) g16<1>D         -g4<1,1,0>D     g4<1,1,0>D      { align1 1H compacted };
shl(16)         g58<1>D         g14<8,8,1>D     0x0000001aUD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
shr(16)         g18<1>UD        g16<1,1,0>UD    0x00000006UD    { align1 1H I@2 compacted };
or(16)          g60<1>UD        g18<1,1,0>UD    g58<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
(+f0.0) sel(16) g75<1>D         -g60<1,1,0>D    g60<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g64<1>UD        g62<1,1,0>UD    g50<1,1,0>UD    { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g66<1>D         -g64<1,1,0>D    g52<1,1,0>D     { align1 1H I@1 compacted };
mov(8)          g71.1<2>UD      g66<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g73.1<2>UD      g67<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g71UD           g75UD           0x08001586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $7 };
add(16)         g67<1>D         g50<1,1,0>D     16D             { align1 1H $5.src compacted };
mov(16)         g80<1>UD        g77<16,8,2>UB                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(16)  g69<1>UD        g67<1,1,0>UD    g50<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g72<2>UD        g67<4,4,1>UD                    { align1 1Q $7.src };
mov(8)          g74<2>UD        g68<4,4,1>UD                    { align1 2Q $7.src };
add(16)         g78<1>D         -g69<1,1,0>D    g52<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g72.1<2>UD      g78<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g74.1<2>UD      g79<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g72UD           g80UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $7 };

LABEL17:
endif(16)       JIP:  LABEL13                                   { align1 1H };
or(16)          g79<1>UD        g54<1,1,0>UD    g114<1,1,0>UD   { align1 1H $7.src compacted };
add(16)         g81<1>D         g50<1,1,0>D     22D             { align1 1H $7.src compacted };
mov(16)         g93<4>UB        g79<8,8,1>UD                    { align1 1H I@2 };
cmp.l.f0.0(16)  g83<1>UD        g81<1,1,0>UD    g50<1,1,0>UD    { align1 1H I@2 compacted };
add(16)         g85<1>D         g81<1,1,0>D     g48<1,1,0>D     { align1 1H compacted };
mov(16)         g91<1>UD        g93<32,8,4>UB                   { align1 1H I@3 };
cmp.l.f0.0(16)  g87<1>UD        g85<1,1,0>UD    g81<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g73<2>UD        g85<4,4,1>UD                    { align1 1Q $7.src };
mov(8)          g75<2>UD        g86<4,4,1>UD                    { align1 2Q $7.src };
add3(16)        g89<1>D         -g83<8,8,1>D    g52<8,8,1>D     -g87<1,1,1>D { align1 1H I@3 };
mov(8)          g73.1<2>UD      g89<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g75.1<2>UD      g90<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g73UD           g91UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $8 };

LABEL13:
endif(16)       JIP:  LABEL10                                   { align1 1H };

LABEL10:
endif(16)       JIP:  LABEL7                                    { align1 1H };
add(16)         g30<1>D         g30<1,1,0>D     g32<0,1,0>D     { align1 1H I@6 compacted };

LABEL7:
while(16)       JIP:  LABEL18                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_leaf_primref_to_procedurals_code[] = {
    0x80000065, 0x5f058220, 0x02000004, 0xffffffc0,
    0x80030061, 0x4e054410, 0x00000000, 0x76543210,
    0x00040061, 0x28054660, 0x00000000, 0x00000001,
    0x00040061, 0x5b050220, 0x00000024, 0x00000000,
    0xe2601c40, 0x00015f03, 0xe2610040, 0x04015f03,
    0x644e1d40, 0x00804e95, 0x00041c69, 0x4f058660,
    0x02465b05, 0x00000004, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa00600c, 0x00340000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa00610c, 0x00300000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa0601940, 0x01004f03,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x215d0061, 0x001102cc, 0x2a590061, 0x001102cc,
    0x00030061, 0x14260aa0, 0x00000264, 0x00000000,
    0x00130061, 0x22260aa0, 0x00000264, 0x00000000,
    0x00030061, 0x16260aa0, 0x000002a4, 0x00000000,
    0x00130061, 0x24260aa0, 0x000002a4, 0x00000000,
    0x00030061, 0x18260aa0, 0x000002e4, 0x00000000,
    0x00130061, 0x26260aa0, 0x000002e4, 0x00000000,
    0x215d1761, 0x00110204, 0x2a591761, 0x00110204,
    0x21141761, 0x00110244, 0x2a221761, 0x00110244,
    0x21161761, 0x0011025c, 0x2a241761, 0x0011025c,
    0x21181761, 0x0011026c, 0x2a261761, 0x0011026c,
    0xa15f1740, 0x024e5d03, 0xaa5b1740, 0x024e5903,
    0x00031a70, 0x66050220, 0x52465f05, 0x00445d06,
    0x00030061, 0x62060220, 0x00345f05, 0x00000000,
    0x00131b70, 0x5c050220, 0x52465b05, 0x00445906,
    0x00130061, 0x64060220, 0x00345b05, 0x00000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x00040070, 0x00018660, 0x16000344, 0x00000008,
    0x00031d40, 0x67052660, 0x06466605, 0x00445d26,
    0x00131c40, 0x5d052660, 0x06465c05, 0x00445926,
    0x00031a61, 0x62260220, 0x00346705, 0x00000000,
    0x00131a61, 0x64260220, 0x00345d05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x5e140000, 0xfb046224, 0x00040000,
    0x271c2262, 0x5e006003, 0x00040041, 0x4c050660,
    0x01000344, 0x00565e16, 0x00043241, 0x61050660,
    0x01000344, 0x00565e06, 0x00041940, 0x61160110,
    0x01566116, 0x00564c06, 0x11041962, 0x2a058220,
    0x02466105, 0x00000004, 0x00040070, 0x00018660,
    0x26464f05, 0x00000000, 0x01040022, 0x0001c060,
    0x00000148, 0x00000138, 0xa0623240, 0xfff04f03,
    0x00031461, 0x6a050220, 0x00441626, 0x00000000,
    0x00131361, 0x6b050220, 0x00442426, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00041b41, 0x64050660, 0x01466205, 0x00000344,
    0x00040041, 0x51050660, 0x01466205, 0x00000354,
    0x00041940, 0x64160110, 0x01566416, 0x00565106,
    0xa0661940, 0x2a006402, 0x27681970, 0x64006603,
    0xa16f0040, 0x660e1602, 0xaa6c0040, 0x670e2402,
    0x00031a70, 0x6d050220, 0x52466f05, 0x00441606,
    0x00030061, 0x71060220, 0x00346f05, 0x00000000,
    0x00131b70, 0x6e050220, 0x52466c05, 0x00442406,
    0x00130061, 0x73060220, 0x00346c05, 0x00000000,
    0x00041a52, 0x6f040e68, 0x0eae6a05, 0x6d056805,
    0x00031961, 0x71260220, 0x00346f05, 0x00000000,
    0x00131a61, 0x73260220, 0x00347005, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x51140000, 0xfb047124, 0x00040000,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00042361, 0x51054220, 0x00000000, 0xffffffff,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00030c61, 0x2c050220, 0x00441626, 0x00000000,
    0x00130b61, 0x2d050220, 0x00442426, 0x00000000,
    0x00041a70, 0x00010220, 0x42464f05, 0x00465e05,
    0x01040028, 0x0001c660, 0x00000148, 0x00000148,
    0x00043341, 0x70050660, 0x01464f05, 0x00000344,
    0x00040041, 0x53050660, 0x01464f05, 0x00000354,
    0x00041940, 0x70160110, 0x01567016, 0x00565306,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xa0721940, 0x2a007002, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x27741970, 0x70007203,
    0xaa760040, 0x730e2402, 0xa1700040, 0x720e1602,
    0x00131a70, 0x78050220, 0x52467605, 0x00442406,
    0x00133461, 0x7e060220, 0x00347605, 0x00000000,
    0x00031b70, 0x77050220, 0x52467005, 0x00441606,
    0x00033461, 0x7c060220, 0x00347005, 0x00000000,
    0x00041a52, 0x79040e68, 0x0eae2c05, 0x77057405,
    0x00031961, 0x7c260220, 0x00347905, 0x00000000,
    0x00131a61, 0x7e260220, 0x00347a05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x7a140000, 0xfb047c24, 0x00040000,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x00042470, 0x00010660, 0x26467a05, 0x00465105,
    0x01040028, 0x0001c660, 0x00000018, 0x00000018,
    0xa04f0040, 0x00104f03, 0x00040027, 0x00014060,
    0x00000000, 0xfffffea8, 0xa07b3440, 0xfff01c03,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x00041941, 0x7d050660, 0x01467b05, 0x00000344,
    0x00040041, 0x54050660, 0x01467b05, 0x00000354,
    0x00041940, 0x7d160110, 0x01567d16, 0x00565406,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa0010940, 0x2a007d02, 0x27041970, 0x7d000103,
    0xa1713340, 0x010e1602, 0xaa060040, 0x020e2402,
    0x00031a70, 0x07050220, 0x52467105, 0x00441606,
    0x00030061, 0x0c060220, 0x00347105, 0x00000000,
    0x00131b70, 0x08050220, 0x52460605, 0x00442406,
    0x00130061, 0x0e060220, 0x00340605, 0x00000000,
    0x00041a52, 0x09040e68, 0x0eae2c05, 0x07050405,
    0x00031961, 0x0c260220, 0x00340905, 0x00000000,
    0x00131a61, 0x0e260220, 0x00340a05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x0a140000, 0xfb040c24, 0x00040000,
    0x00041a70, 0x00010220, 0x42461c05, 0x00465e05,
    0x01040028, 0x0001c660, 0x00000138, 0x00000138,
    0x00043541, 0x0c050660, 0x01461c05, 0x00000344,
    0x00040041, 0x55050660, 0x01461c05, 0x00000354,
    0x00041940, 0x0c160110, 0x01560c16, 0x00565506,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xa00e1940, 0x2a000c02, 0x27101970, 0x0c000e03,
    0xa1723340, 0x0e0e1602, 0xaa120040, 0x0f0e2402,
    0x00031a70, 0x1a050220, 0x52467205, 0x00441606,
    0x00033661, 0x2e060220, 0x00347205, 0x00000000,
    0x00131b70, 0x1b050220, 0x52461205, 0x00442406,
    0x00133661, 0x30060220, 0x00341205, 0x00000000,
    0x00041a52, 0x1e040e68, 0x0eae2c05, 0x1a051005,
    0x00031961, 0x2e260220, 0x00341e05, 0x00000000,
    0x00131a61, 0x30260220, 0x00341f05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x1f140000, 0xfb042e24, 0x00040000,
    0x80002501, 0x00000000, 0x00000000, 0x00000000,
    0x00042670, 0x00010660, 0x26461f05, 0x00460a05,
    0x01040028, 0x0001c660, 0x00000018, 0x00000018,
    0xa01c0040, 0x00101c03, 0x00040027, 0x00014060,
    0x00000000, 0xfffffeb8, 0x00043661, 0x2e050160,
    0x00464e05, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xe0301965, 0x00f02e03,
    0x00040061, 0x4d064540, 0x00000000, 0x00030003,
    0xa01e1a40, 0x30004f02, 0xa0320040, 0x30001c02,
    0x27341970, 0x1c003203, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x273a1b70, 0x32001e03,
    0x00041a61, 0x36052660, 0x00463405, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00041a65, 0x3c052620, 0x02463405, 0x00463a05,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0xeb3e0070, 0x00003603, 0x00041966, 0x00010220,
    0x22463e05, 0x00463c05, 0x11040028, 0x0001c660,
    0x00001448, 0x00001448, 0x00043541, 0x42050660,
    0x01461e05, 0x00000344, 0x00040041, 0x56050660,
    0x01461e05, 0x00000354, 0x00041940, 0x42160110,
    0x01564216, 0x00565606, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa0441940, 0x0310421a,
    0xa04e0040, 0x2a004202, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x27461a70, 0x42004403,
    0xa1733340, 0x440e1602, 0xaa483740, 0x450e2402,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xa1741c40, 0x4e0e1602, 0xaa52d340, 0x4f0e2402,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00031c70, 0x49050220, 0x52467305, 0x00441606,
    0x00030061, 0x3a060220, 0x00347305, 0x00000000,
    0x80103801, 0x00000000, 0x00000000, 0x00000000,
    0x00131d70, 0x4a050220, 0x52464805, 0x00442406,
    0x00130061, 0x3c060220, 0x00344805, 0x00000000,
    0x00031e61, 0x3e060220, 0x00347405, 0x00000000,
    0x27502370, 0x42004e03, 0x80103501, 0x00000000,
    0x00000000, 0x00000000, 0x00131f61, 0x40060220,
    0x00345205, 0x00000000, 0x00032370, 0x53050220,
    0x52467405, 0x00441606, 0x00130070, 0x54050220,
    0x52465205, 0x00442406, 0x27580070, 0x1c001e03,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00041f52, 0x4b040e68, 0x0eae2c05, 0x49054605,
    0x00041b52, 0x55040e68, 0x0eae2c05, 0x53055005,
    0x00031a61, 0x3a260220, 0x00344b05, 0x00000000,
    0x00131b61, 0x3c260220, 0x00344c05, 0x00000000,
    0x00031b61, 0x3e260220, 0x00345505, 0x00000000,
    0x00131c61, 0x40260220, 0x00345605, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x52140000, 0xfb043a24, 0x00040000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x56140000, 0xfb043e24, 0x00040000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xac5a2570, 0x56105602, 0x00041965, 0x00010220,
    0x22465805, 0x00465a05, 0x01040022, 0x0001c060,
    0x000000c8, 0x000000b8, 0x80043861, 0x5b054660,
    0x00000000, 0x00000000, 0x00040061, 0x5b050660,
    0x00462805, 0x00000000, 0x80031940, 0x5b260660,
    0x06445b06, 0x00445b26, 0x80021940, 0x5b470660,
    0x06425b27, 0x00425b47, 0x80021940, 0x5b670660,
    0x06425b27, 0x00425b67, 0x80021940, 0x5b850660,
    0x06005b64, 0x00345b85, 0x80021a40, 0x5c850660,
    0x06005c64, 0x00345c85, 0xa45c1940, 0x5c015b82,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x20050220, 0x00005ce4, 0x00000000,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00041a61, 0x20054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00001140,
    0x00043869, 0x5c058660, 0x02465605, 0x00000006,
    0xe05e0068, 0x01a05603, 0x00031261, 0x60050220,
    0x00441826, 0x00000000, 0x00131161, 0x61050220,
    0x00442626, 0x00000000, 0xa1321c40, 0x5c0e1802,
    0xaa331d40, 0x5d0e2602, 0x00031a70, 0x62050220,
    0x52463205, 0x00441806, 0x80103201, 0x00000000,
    0x00000000, 0x00000000, 0x00131a70, 0x63050220,
    0x52463305, 0x00442606, 0x00040070, 0x00018220,
    0x52463005, 0x00000008, 0x00041a52, 0x34040e68,
    0x0e2e6005, 0x62055e05, 0x01040022, 0x0001c060,
    0x00001080, 0x00001080, 0x00040070, 0x00010220,
    0x52463005, 0x00002004, 0x01040022, 0x0001c060,
    0x000001f8, 0x000001c8, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00042369, 0x63058660,
    0x02465205, 0x00000005, 0xe0653268, 0x01b05203,
    0x00031661, 0x67050220, 0x00441426, 0x00000000,
    0x00131561, 0x68050220, 0x00442226, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xa1691c40, 0x630e1402, 0xaa6a1d40, 0x640e2202,
    0x00031a70, 0x6b050220, 0x52466905, 0x00441406,
    0x00033561, 0x3f060220, 0x00346905, 0x00000000,
    0x00131b70, 0x6c050220, 0x52466a05, 0x00442206,
    0x00133561, 0x41060220, 0x00346a05, 0x00000000,
    0xa06f0040, 0x01006903, 0x00041b52, 0x6d040e68,
    0x0e2e6705, 0x6b056505, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x27711a70, 0x69006f03,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x0d060220, 0x00346f05, 0x00000000,
    0x00133561, 0x0f060220, 0x00347005, 0x00000000,
    0x00031c61, 0x3f260220, 0x00346d05, 0x00000000,
    0x00131d61, 0x41260220, 0x00346e05, 0x00000000,
    0xa0731d40, 0x6d027102, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x04440000,
    0xfb043f24, 0x003c0000, 0x00031961, 0x0d260220,
    0x00347305, 0x00000000, 0x00131a61, 0x0f260220,
    0x00347405, 0x00000000, 0x00042565, 0x54058220,
    0x02460a05, 0x07ffffff, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x05440000,
    0xfb040d24, 0x003c0000, 0xe0562568, 0x01d00b03,
    0x00040024, 0x0001c060, 0x00000040, 0x00000040,
    0x00042361, 0x52054220, 0x00000000, 0xffffffff,
    0x00041c61, 0x54054220, 0x00000000, 0xffffffff,
    0x00041c61, 0x56054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000e68,
    0xa0740040, 0x00f02e03, 0xa0760040, 0xfff02e03,
    0xa07c0040, 0x00102e03, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00041b70, 0x00018660,
    0x56467405, 0x00000010, 0x80041b61, 0x10014110,
    0x00000000, 0x0a800a80, 0x00040069, 0x10018510,
    0x01567606, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0a800a80, 0xe0780961, 0x001b0004,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80041b61, 0x10014110, 0x00000000, 0x0a800a80,
    0x00040069, 0x10018510, 0x01567c06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0a800a80,
    0xe07e0961, 0x001b0004, 0x11041a62, 0x7a058220,
    0x02467805, 0xffffffff, 0xa7011170, 0x01007c03,
    0x0104b562, 0x04058220, 0x02467e05, 0xffffffff,
    0xae06b570, 0x54007a02, 0x00041b70, 0x00018660,
    0x26460105, 0x00000000, 0x0004a561, 0x08052660,
    0x00460605, 0x00000000, 0x80049561, 0x10014110,
    0x00000000, 0x01000100, 0x00040069, 0x10018510,
    0x01567c06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x01000100, 0xe00a0961, 0x001b0004,
    0xef361962, 0x00000a03, 0x00040070, 0x00018660,
    0x26460605, 0x00000000, 0xef0b3562, 0x00003003,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00031961, 0x11060220, 0x00340b05, 0x00000000,
    0x80103501, 0x00000000, 0x00000000, 0x00000000,
    0x00131a61, 0x0d060220, 0x00340c05, 0x00000000,
    0x00031a61, 0x11264220, 0x00000000, 0x00000000,
    0x00131a61, 0x0d264220, 0x00000000, 0x00000000,
    0x80031a61, 0x58064220, 0x00000000, 0x00000000,
    0x00030061, 0x58060220, 0x00441106, 0x00000000,
    0x80131a61, 0x5a064220, 0x00000000, 0x00000000,
    0x00130061, 0x5a060220, 0x00440d06, 0x00000000,
    0x80031a61, 0x1a060220, 0x00445806, 0x00000000,
    0x80030061, 0x58264220, 0x00000000, 0x00000000,
    0x00030061, 0x58260220, 0x00441126, 0x00000000,
    0x80131b61, 0x38060220, 0x00445a06, 0x00000000,
    0x80130061, 0x5a264220, 0x00000000, 0x00000000,
    0x00130061, 0x5a260220, 0x00440d26, 0x00000000,
    0x80031b61, 0x1a260220, 0x00445826, 0x00000000,
    0x80131a61, 0x38260220, 0x00445a26, 0x00000000,
    0x80021a70, 0x00010220, 0x32421a07, 0x00421a47,
    0x81020070, 0x00010220, 0x12421a27, 0x00421a67,
    0x91020070, 0x00010220, 0x32421a27, 0x00421a67,
    0x81020061, 0x1a470220, 0x00421a07, 0x00000000,
    0x81021961, 0x1a670220, 0x00421a27, 0x00000000,
    0x80011970, 0x00010220, 0x32001a44, 0x00321a86,
    0x81010070, 0x00010220, 0x12001a64, 0x00321aa6,
    0x91010070, 0x00010220, 0x32001a64, 0x00321aa6,
    0x81010061, 0x1a860220, 0x00001a44, 0x00000000,
    0x81011961, 0x1aa60220, 0x00001a64, 0x00000000,
    0x80011e70, 0x00010220, 0x32001b44, 0x00321b86,
    0x81010070, 0x00010220, 0x12001b64, 0x00321ba6,
    0x91010070, 0x00010220, 0x32001b64, 0x00321ba6,
    0x81010061, 0x1b860220, 0x00001b44, 0x00000000,
    0x81011961, 0x1ba60220, 0x00001b64, 0x00000000,
    0x80021970, 0x00010220, 0x32001ac4, 0x00441b06,
    0x81020070, 0x00010220, 0x12001ae4, 0x00441b26,
    0x91020070, 0x00010220, 0x32001ae4, 0x00441b26,
    0x81020061, 0x1b060220, 0x00001ac4, 0x00000000,
    0x81021961, 0x1b260220, 0x00001ae4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00033361, 0x3a260220, 0x00441a26, 0x00000000,
    0x80020070, 0x00010220, 0x32423807, 0x00423847,
    0x00031a61, 0x3a060220, 0x00441a06, 0x00000000,
    0x81020070, 0x00010220, 0x12423827, 0x00423867,
    0x00031a40, 0x3a050660, 0x06463005, 0x02443a06,
    0x91020070, 0x00010220, 0x32423827, 0x00423867,
    0x81020061, 0x38470220, 0x00423807, 0x00000000,
    0x81021961, 0x38670220, 0x00423827, 0x00000000,
    0x80011970, 0x00010220, 0x32003844, 0x00323886,
    0x81010070, 0x00010220, 0x12003864, 0x003238a6,
    0x91010070, 0x00010220, 0x32003864, 0x003238a6,
    0x81010061, 0x38860220, 0x00003844, 0x00000000,
    0x81011961, 0x38a60220, 0x00003864, 0x00000000,
    0x80011e70, 0x00010220, 0x32003944, 0x00323986,
    0x81010070, 0x00010220, 0x12003964, 0x003239a6,
    0x91010070, 0x00010220, 0x32003964, 0x003239a6,
    0x81010061, 0x39860220, 0x00003944, 0x00000000,
    0x81011961, 0x39a60220, 0x00003964, 0x00000000,
    0x80021970, 0x00010220, 0x320038c4, 0x00443906,
    0x81020070, 0x00010220, 0x120038e4, 0x00443926,
    0x91020070, 0x00010220, 0x320038e4, 0x00443926,
    0x81020061, 0x39060220, 0x000038c4, 0x00000000,
    0x81021961, 0x39260220, 0x000038e4, 0x00000000,
    0x80031970, 0x00010220, 0x32001bc4, 0x00443806,
    0x81030070, 0x00010220, 0x12001be4, 0x00443826,
    0x91030070, 0x00010220, 0x32001be4, 0x00443826,
    0x81030061, 0x38060220, 0x00001bc4, 0x00000000,
    0x81031961, 0x38260220, 0x00001be4, 0x00000000,
    0x80101901, 0x00000000, 0x00000000, 0x00000000,
    0x00133561, 0x0f260220, 0x00443826, 0x00000000,
    0xae3c3370, 0x54000402, 0x00040070, 0x00010220,
    0x52463005, 0x00002004, 0x00131b61, 0x0f060220,
    0x00443806, 0x00000000, 0x00131940, 0x3b050660,
    0x06463105, 0x02440f06, 0x01040022, 0x0001c060,
    0x00000850, 0x00000850, 0x80043561, 0x3e054660,
    0x00000000, 0x00000000, 0x00040061, 0x3e052660,
    0x00460605, 0x00000000, 0x00040070, 0x00018660,
    0x16463005, 0x00000000, 0x80031a40, 0x3e260660,
    0x06443e06, 0x00443e26, 0x80021940, 0x3e470660,
    0x06423e27, 0x00423e47, 0x80021940, 0x3e670660,
    0x06423e27, 0x00423e67, 0x80021940, 0x3e850660,
    0x06003e64, 0x00343e85, 0x80021a40, 0x3f850660,
    0x06003f64, 0x00343f85, 0xa43f1940, 0x3f013e82,
    0x01040022, 0x0001c060, 0x00000110, 0x000000f0,
    0xa1460040, 0x01ce1803, 0xaa440040, 0x01ce2603,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x47050660, 0x00003fe4, 0x00000000,
    0x00031b70, 0x49050220, 0x52464605, 0x00441806,
    0x00131b70, 0x45050220, 0x52464405, 0x00442606,
    0x00033561, 0x40060220, 0x00344605, 0x00000000,
    0x00133561, 0x42060220, 0x00344405, 0x00000000,
    0x00031c40, 0x4a052660, 0x06464905, 0x00441826,
    0x00131c40, 0x46052660, 0x06464505, 0x00442626,
    0x00031a61, 0x40260220, 0x00344a05, 0x00000000,
    0x00131a61, 0x42260220, 0x00344605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x58140000, 0xfb184024, 0x01004714,
    0x00040024, 0x0001c060, 0x00000030, 0x00000030,
    0x80002501, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x58054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x000006a8,
    0x80043561, 0x47054660, 0x00000000, 0x00000000,
    0x00040061, 0x47052660, 0x00460605, 0x00000000,
    0xa049b540, 0xfff15803, 0x80031a40, 0x47260660,
    0x06444706, 0x00444726, 0x80021940, 0x47470660,
    0x06424727, 0x00424747, 0x80021940, 0x47670660,
    0x06424727, 0x00424767, 0x80021940, 0x47850660,
    0x06004764, 0x00344785, 0x80021a40, 0x48850660,
    0x06004864, 0x00344885, 0xa4481940, 0x48014782,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xa04b0040, 0x47004902, 0x00041969, 0x4e058660,
    0x02464b05, 0x00000006, 0xe0500068, 0x01a04b03,
    0xa1581a40, 0x4e0e1802, 0xaa59b540, 0x4f0e2602,
    0x00031a70, 0x5a050220, 0x52465805, 0x00441806,
    0x00033561, 0x41060220, 0x00345805, 0x00000000,
    0x00131b70, 0x5b050220, 0x52465905, 0x00442606,
    0x00133561, 0x43060220, 0x00345905, 0x00000000,
    0x00040061, 0x00010660, 0x20463c05, 0x00000000,
    0x00041b52, 0x5c040e68, 0x0e2e6005, 0x5a055005,
    0x00031961, 0x41260220, 0x00345c05, 0x00000000,
    0x00131a61, 0x43260220, 0x00345d05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000090, 0x00000090,
    0x00040065, 0x5e058220, 0x02465405, 0x00ffffff,
    0x00040069, 0x60058660, 0x02465605, 0x0000001e,
    0xa0620040, 0x00103a03, 0x00041b66, 0x0e058220,
    0x02465e05, 0xff000000, 0x20101b66, 0x60005403,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00041b66, 0x12058220, 0x02466205, 0xfffffff0,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x00000000, 0xfb0c4124, 0x001c0e34,
    0x00040025, 0x00004600, 0x00000000, 0x000004c8,
    0x00043269, 0x63058660, 0x02465205, 0x00000005,
    0xe0653268, 0x01b05203, 0xa1671640, 0x010e1403,
    0xaa681540, 0x010e2203, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00041f69, 0x72058660,
    0x02463a05, 0x00000002, 0xa0740040, 0x00c05803,
    0x00031c70, 0x4b050220, 0x52466705, 0x00441406,
    0x00131c70, 0x69050220, 0x52466805, 0x00442206,
    0xa06c1f40, 0x63006702, 0xa0781c40, 0x72007402,
    0x00031c40, 0x6a052660, 0x06464b05, 0x00441426,
    0x00131c40, 0x6b052660, 0x06466905, 0x00442226,
    0x276e1c70, 0x67006c03, 0x00033561, 0x42060220,
    0x00346c05, 0x00000000, 0x00133561, 0x44060220,
    0x00346d05, 0x00000000, 0x27760070, 0x58007403,
    0x00031f61, 0x46060220, 0x00347805, 0x00000000,
    0x00131f61, 0x48060220, 0x00347905, 0x00000000,
    0x277a0070, 0x74007803, 0x00041f52, 0x70040e68,
    0x0e2e6a05, 0x6e056505, 0x00041a52, 0x7c042e68,
    0x0e2e7605, 0x7a055c05, 0x00031a61, 0x42260220,
    0x00347005, 0x00000000, 0x00131b61, 0x44260220,
    0x00347105, 0x00000000, 0x00031b61, 0x46260220,
    0x00347c05, 0x00000000, 0x00131c61, 0x48260220,
    0x00347d05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x06440000,
    0xfb044224, 0x003c0000, 0x00042565, 0x4a058220,
    0x02460c05, 0x1fffffff, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x00000000,
    0xfb0c4624, 0x00044a14, 0x00040070, 0x00018660,
    0x16463005, 0x00000000, 0x01040022, 0x0001c060,
    0x00000228, 0x00000228, 0xeb7d0070, 0x00003203,
    0xa0040040, 0x32205802, 0xa03e0040, 0x00c03203,
    0xa0010940, 0x7d023402, 0x2706b570, 0x58000403,
    0xeb0a2570, 0x00000403, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00031c61, 0x47060220,
    0x00343e05, 0x00000000, 0x80103701, 0x00000000,
    0x00000000, 0x00000000, 0x00131d61, 0x49060220,
    0x00343f05, 0x00000000, 0x0004c552, 0x08040e68,
    0x0e2e5c05, 0x06050105, 0xa00c1940, 0x0a020802,
    0x00040070, 0x00018660, 0x56460805, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x2f0e1a62, 0x08000c03, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xaf100062, 0x04020402,
    0x00041a69, 0x3a058660, 0x02460e05, 0x0000001a,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xe0121a68, 0x00601003, 0x203c1966, 0x3a001203,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xaf4b1962, 0x3c023c02, 0x27403570, 0x32003e03,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xa0421940, 0x34024002, 0x00031961, 0x47260220,
    0x00344205, 0x00000000, 0x00131a61, 0x49260220,
    0x00344305, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x00000000,
    0xfb0c4724, 0x00044b14, 0xa0433540, 0x01003203,
    0x00040061, 0x50050020, 0x00564d06, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x27451a70, 0x32004303, 0x00033761, 0x48060220,
    0x00344305, 0x00000000, 0x00133761, 0x4a060220,
    0x00344405, 0x00000000, 0xa04e1b40, 0x34024502,
    0x00031961, 0x48260220, 0x00344e05, 0x00000000,
    0x00131a61, 0x4a260220, 0x00344f05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x00000000, 0xf3084824, 0x00025014,
    0x00040025, 0x00004600, 0x00000000, 0x000000c8,
    0x204f3766, 0x72003603, 0xa0513740, 0x01603203,
    0x00041a61, 0x5d070200, 0x00464f05, 0x00000000,
    0x27531a70, 0x32005103, 0xa0550040, 0x30005102,
    0x00041b61, 0x5b050020, 0x00665d07, 0x00000000,
    0x27571a70, 0x51005503, 0x00033761, 0x49060220,
    0x00345505, 0x00000000, 0x00133761, 0x4b060220,
    0x00345605, 0x00000000, 0x00041b52, 0x59042e68,
    0x0e2e5305, 0x57053405, 0x00031961, 0x49260220,
    0x00345905, 0x00000000, 0x00131a61, 0x4b260220,
    0x00345a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xf3084924, 0x00025b14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000018, 0xa01e1e40, 0x20101e02,
    0x00040027, 0x00014060, 0x00000000, 0xffffeb28,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_leaf_primref_to_procedurals = {
   .prog_data = {
      .base.nr_params = 20,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 3,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 7488,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_leaf_primref_to_procedurals_relocs,
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
      .push.cross_thread.dwords = 20,
      .push.cross_thread.regs = 3,
      .push.cross_thread.size = 96,
   },
   .args_size = 48,
   .arg_count = 7,
   .args = gfx125_bvh_build_leaf_primref_to_procedurals_args,
   .code = gfx125_bvh_build_leaf_primref_to_procedurals_code,
};
const char *gfx125_bvh_build_leaf_primref_to_procedurals_sha1 = "cfa74c7db09b38b3551f9fd5c3f164d5b6ed19e3";

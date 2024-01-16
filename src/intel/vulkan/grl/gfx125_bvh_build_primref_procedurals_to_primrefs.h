#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_primref_procedurals_to_primrefs_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_primref_procedurals_to_primrefs_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
   { 24, 8 },
   { 32, 4 },
   { 36, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g66<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(8)          g13<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(16)         g54<1>UD        g0.1<0,1,0>UD                   { align1 1H };
add(1)          g67<1>UD        g66<0,1,0>UD    0x00000000UD    { align1 WE_all 1N I@3 compacted };
add(1)          g68<1>UD        g66<0,1,0>UD    0x00000040UD    { align1 WE_all 1N compacted };
add(8)          g13.8<1>UW      g13<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@4 compacted };
shl(16)         g116<1>D        g54<8,8,1>D     0x00000004UD    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(1)         g1UD            g67UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g3UD            g68UD           nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g40<1>D         g13<8,8,1>UW                    { align1 1H };
add(16)         g42<1>D         g116<1,1,0>D    g40<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g55.1<2>F       g2.7<0,1,0>F                    { align1 1Q I@3 };
mov(8)          g57.1<2>F       g2.7<0,1,0>F                    { align1 2Q };
mov(8)          g109.1<2>F      g2.5<0,1,0>F                    { align1 1Q };
mov(8)          g111.1<2>F      g2.5<0,1,0>F                    { align1 2Q };
mov(8)          g105.1<2>F      g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g107.1<2>F      g2.3<0,1,0>F                    { align1 2Q };
mov(8)          g23.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g25.1<2>F       g2.1<0,1,0>F                    { align1 2Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cmp.l.f0.0(16)  null<1>UD       g42<8,8,1>UD    g3.1<0,1,0>UD   { align1 1H I@1 };
mov(16)         g113<1>F        g3<0,1,0>F                      { align1 1H compacted };
and(16)         g10<1>UD        g3<0,1,0>UD     0x00ffffffUD    { align1 1H };
mov(8)          g55<2>F         g2.6<0,1,0>F                    { align1 1Q F@7 compacted };
mov(8)          g57<2>F         g2.6<0,1,0>F                    { align1 2Q F@7 compacted };
mov(8)          g109<2>F        g2.4<0,1,0>F                    { align1 1Q F@7 compacted };
mov(8)          g111<2>F        g2.4<0,1,0>F                    { align1 2Q F@7 compacted };
mov(8)          g105<2>F        g2.2<0,1,0>F                    { align1 1Q F@7 compacted };
mov(8)          g107<2>F        g2.2<0,1,0>F                    { align1 2Q F@7 compacted };
mov(8)          g23<2>F         g2<0,1,0>F                      { align1 1Q F@7 compacted };
mov(8)          g25<2>F         g2<0,1,0>F                      { align1 2Q F@7 compacted };
mov(16)         g115<1>UD       g113.3<32,8,4>UB                { align1 1H F@7 };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
send(16)        g44UD           g55UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
mul(8)          acc0<1>UD       g42<8,8,1>UD    g48<16,8,2>UW   { align1 1Q $1.dst };
mul(16)         g54<1>D         g42<8,8,1>D     g48<16,8,2>UW   { align1 1H $1.dst };
mul(16)         g28<1>D         g42<8,8,1>D     g48.1<16,8,2>UW { align1 1H };
mul(16)         g56<1>D         g42<8,8,1>D     g50<16,8,2>UW   { align1 1H $1.dst };
mach(8)         g52<1>UD        g42<1,1,0>UD    g48<1,1,0>UD    { align1 1Q compacted AccWrEnable };
add(16)         g54.1<2>UW      g54.1<16,8,2>UW g28<16,8,2>UW   { align1 1H I@3 };
mul(16)         g29<1>D         g42<8,8,1>D     g50.1<16,8,2>UW { align1 1H };
mul(8)          acc0<1>UD       g43<8,8,1>UD    g49<16,8,2>UW   { align1 2Q };
add(16)         g60<1>D         g44<1,1,0>D     g54<1,1,0>D     { align1 1H @3 $1.dst compacted };
add(16)         g56.1<2>UW      g56.1<16,8,2>UW g29<16,8,2>UW   { align1 1H I@3 };
mach(8)         g53<1>UD        g43<8,8,1>UD    g49<8,8,1>UD    { align1 2Q AccWrEnable };
cmp.l.f0.0(16)  g62<1>UD        g60<1,1,0>UD    g44<1,1,0>UD    { align1 1H I@3 compacted };
add(16)         g74<1>D         g60<1,1,0>D     16D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g58<1>D         g52<1,1,0>D     g56<1,1,0>D     { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g76<1>UD        g74<1,1,0>UD    g60<1,1,0>UD    { align1 1H I@2 compacted };
add3(16)        g64<1>D         g46<8,8,1>D     g58<8,8,1>D     -g62<1,1,1>D { align1 1H @2 $1.dst };
add(16)         g78<1>D         -g76<1,1,0>D    g64<1,1,0>D     { align1 1H I@1 compacted };
mov(8)          g56<2>UD        g60<4,4,1>UD                    { align1 1Q };
mov(8)          g58<2>UD        g61<4,4,1>UD                    { align1 2Q };
mov(8)          g56.1<2>UD      g64<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g58.1<2>UD      g65<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g66UD           g56UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
mov(8)          g57<2>UD        g74<4,4,1>UD                    { align1 1Q $2.src };
mov(8)          g59<2>UD        g75<4,4,1>UD                    { align1 2Q $2.src };
mov(8)          g57.1<2>UD      g78<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g59.1<2>UD      g79<4,4,1>UD                    { align1 2Q I@2 };
cmp.l.f0.0(16)  g81<1>F         (abs)g68<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $2.dst compacted };
cmp.l.f0.0(16)  g83<1>F         (abs)g66<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $2.dst compacted };
cmp.l.f0.0(16)  g87<1>F         (abs)g70<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $2.dst compacted };
and(16)         g85<1>UD        g81<1,1,0>UD    g83<1,1,0>UD    { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g80UD           g57UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $3 };
and(16)         g89<1>UD        g85<1,1,0>UD    g87<1,1,0>UD    { align1 1H A@1 compacted };
cmp.l.f0.0(16)  g91<1>F         (abs)g80<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $3.dst compacted };
sel.l(16)       g28<1>F         g68<1,1,0>F     g80<1,1,0>F     { align1 1H compacted };
cmp.l.f0.0(16)  g93<1>F         (abs)g72<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $2.dst compacted };
cmp.l.f0.0(16)  g97<1>F         (abs)g82<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $3.dst compacted };
and(16)         g95<1>UD        g91<1,1,0>UD    g93<1,1,0>UD    { align1 1H F@2 compacted };
and(16)         g99<1>UD        g95<1,1,0>UD    g97<1,1,0>UD    { align1 1H A@1 compacted };
and(16)         g101<1>UD       g89<1,1,0>UD    g99<1,1,0>UD    { align1 1H I@1 compacted };
mov(16)         g30<2>W         -g101<8,8,1>D                   { align1 1H I@1 };
and(16)         g103<1>UW       g30<16,8,2>UW   0x0001UW        { align1 1H I@1 };
mov(16)         g104<1>W        g103<32,16,2>B                  { align1 1H I@1 };
cmp.nz.f0.0(16) g37<1>W         g104<16,16,1>W  0W              { align1 1H I@1 };
mov.nz.f0.0(16) g35<1>D         g37<8,8,1>W                     { align1 1H I@1 };
mov(16)         g31<2>W         -g35<8,8,1>D                    { align1 1H I@1 };
(+f0.0) sel(16) g6<1>UD         g28<8,8,1>UD    0x7f800000UD    { align1 1H F@3 };
sel.ge(16)      g34<1>F         g70<1,1,0>F     g82<1,1,0>F     { align1 1H I@2 compacted };
sel.l(16)       g27<1>F         g66<1,1,0>F     g72<1,1,0>F     { align1 1H I@1 compacted };
sel.l(16)       g29<1>F         g70<1,1,0>F     g82<1,1,0>F     { align1 1H I@1 compacted };
mov(16)         g20<1>UW        g31<16,8,2>UW                   { align1 1H I@2 };
sel.ge(16)      g32<1>F         g68<1,1,0>F     g80<1,1,0>F     { align1 1H I@1 compacted };
(+f0.0) sel(16) g16<1>UD        g34<8,8,1>UD    0xff800000UD    { align1 1H F@4 };
(+f0.0) sel(16) g4<1>UD         g27<8,8,1>UD    0x7f800000UD    { align1 1H F@3 };
(+f0.0) sel(16) g8<1>UD         g29<8,8,1>UD    0x7f800000UD    { align1 1H F@2 };
sel.ge(16)      g30<1>F         g66<1,1,0>F     g72<1,1,0>F     { align1 1H I@1 compacted };
(+f0.0) sel(16) g14<1>UD        g32<8,8,1>UD    0xff800000UD    { align1 1H F@2 };
(+f0.0) sel(16) g12<1>UD        g30<8,8,1>UD    0xff800000UD    { align1 1H F@1 };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g20<1>UW        0x0000UW                        { align1 1H I@7 };
mov(16)         g8<1>UD         0x7f800000UD                    { align1 1H I@5 };
mov(16)         g6<1>UD         0x7f800000UD                    { align1 1H I@7 };
mov(16)         g4<1>UD         0x7f800000UD                    { align1 1H I@7 };
mov(16)         g16<1>UD        0xff800000UD                    { align1 1H I@7 };
mov(16)         g14<1>UD        0xff800000UD                    { align1 1H I@7 };
mov(16)         g12<1>UD        0xff800000UD                    { align1 1H I@7 };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
and(16)         g38<1>UW        g20<1,1,0>UW    0x0001UW        { align1 1H I@7 compacted };
mov(16)         g39<1>W         g38<32,16,2>B                   { align1 1H I@1 };
mov(1)          g32<2>UW        0x00000000UD                    { align1 WE_all 1N };
cmp.nz.f0.0(16) g120<1>W        g39<16,16,1>W   0W              { align1 1H I@2 };
mov(16)         g118<1>D        g120<8,8,1>W                    { align1 1H I@1 };
mov(1)          f0<1>UW         g32<0,1,0>UW                    { align1 WE_all 1N I@3 };
cmp.nz.f0.0(16) null<1>UD       g118<8,8,1>UD   0x00000000UD    { align1 1H I@2 };
mov(16)         g121<1>UD       f0<0,1,0>UW                     { align1 1H };
bfi1(16)        g123<1>UD       g40<8,8,1>D     0D              { align1 1H };
cbit(16)        g62<1>UD        g121<8,8,1>UD                   { align1 1H I@2 };
cmp.z.f0.0(16)  null<1>D        g40<8,8,1>D     0D              { align1 1H };
and(16)         g125<1>UD       g121<1,1,0>UD   g123<1,1,0>UD   { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cbit(16)        g1<1>UD         g125<8,8,1>UD                   { align1 1H A@1 };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
add(8)          g20<1>D         g23<8,4,2>D     36D             { align1 1Q F@2 compacted };
add(8)          g21<1>D         g25<8,4,2>D     36D             { align1 2Q F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(8)   g113<1>UD       g20<8,8,1>UD    g23<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g114<1>UD       g21<8,8,1>UD    g25<8,4,2>UD    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g58<2>UD        g20<4,4,1>UD                    { align1 1Q F@7 };
mov(8)          g60<2>UD        g21<4,4,1>UD                    { align1 2Q $3.src };
add(8)          g44<1>D         -g113<8,8,1>D   g23.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g45<1>D         -g114<8,8,1>D   g25.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g58.1<2>UD      g44<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g60.1<2>UD      g45<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g21UD           g58UD           g62UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $3 };

LABEL3:
endif(16)       JIP:  LABEL4                                    { align1 1H };

LABEL4:
add(16)         g46<1>D         g1<1,1,0>D      g21<0,1,0>D     { align1 1H @3 $3.dst compacted };
mov.nz.f0.0(16) null<1>D        g118<8,8,1>D                    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL5              { align1 1H };
shl(16)         g48<1>D         g46<8,8,1>D     0x00000005UD    { align1 1H I@3 };
mov(8)          g51<1>UD        g109.1<8,4,2>UD                 { align1 1Q F@6 };
mov(8)          g52<1>UD        g111.1<8,4,2>UD                 { align1 2Q F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
add(8)          g53<1>D         g109<8,4,2>D    g48<1,1,0>D     { align1 1Q I@3 compacted };
add(8)          g54<1>D         g111<8,4,2>D    g49<1,1,0>D     { align1 2Q I@4 compacted };
shr(16)         g49<1>UD        g46<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
shl(16)         g47<1>D         g115<8,8,1>D    0x0000001dUD    { align1 1H };
cmp.l.f0.0(8)   g55<1>UD        g53<8,8,1>UD    g109<8,4,2>UD   { align1 1Q A@4 };
mov(8)          g63<2>UD        g53<4,4,1>UD                    { align1 1Q $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $2.src };
cmp.l.f0.0(8)   g56<1>UD        g54<8,8,1>UD    g111<8,4,2>UD   { align1 2Q A@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N F@1 };
mov(8)          g65<2>UD        g54<4,4,1>UD                    { align1 2Q };
or(16)          g18<1>UD        g42<1,1,0>UD    g47<1,1,0>UD    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add3(16)        g57<1>D         g51<8,8,1>D     g49<8,8,1>D     -g55<1,1,1>D { align1 1H A@3 };
mov(8)          g65.1<2>UD      g58<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g63.1<2>UD      g57<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g63UD           g4UD            0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $4 };
add(16)         g60<1>D         g53<1,1,0>D     16D             { align1 1H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g62<1>UD        g60<1,1,0>UD    g53<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(8)          g66<2>UD        g60<4,4,1>UD                    { align1 1Q $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N F@2 };
mov(8)          g68<2>UD        g61<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g64<1>D         -g62<1,1,0>D    g57<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g68.1<2>UD      g65<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g66.1<2>UD      g64<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g66UD           g12UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $0 };

LABEL5:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g67<1>F         g4<1,1,0>F      g12<1,1,0>F     { align1 1H $4.src compacted };
cmp.ge.f0.0(16) g73<1>F         g12<1,1,0>F     g4<1,1,0>F      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g69<1>F         g6<1,1,0>F      g14<1,1,0>F     { align1 1H $4.src compacted };
mov(16)         g97<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g97<1>F         g4<1,1,0>F                      { align1 1H compacted };
mov(16)         g99<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g99<1>F         g6<1,1,0>F                      { align1 1H compacted };
mov(16)         g101<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H $4.src compacted };
mov(16)         g101<1>F        g8<1,1,0>F                      { align1 1H compacted };
mov(16)         g103<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g103<1>F        g12<1,1,0>F                     { align1 1H compacted };
mov(16)         g27<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g27<1>F         g14<1,1,0>F                     { align1 1H compacted };
mov(16)         g29<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H $0.src compacted };
mov(16)         g29<1>F         g16<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g71<1>F         g8<1,1,0>F      g16<1,1,0>F     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
(+f0.0) sel(16) g75<1>UD        g67<8,8,1>UD    0x7f800000UD    { align1 1H F@7 };
mov(8)          g35<2>UD        g97.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
mov(8)          g126<2>UD       g99.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
mov(8)          g109<2>UD       g101.1<8,4,2>UD                 { align1 WE_all 1Q F@5 };
mov(8)          g47<2>UD        g103.1<8,4,2>UD                 { align1 WE_all 1Q A@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g60<2>UD        g27.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g83<2>UD        g29.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
cmp.ge.f0.0(16) g77<1>F         g14<1,1,0>F     g6<1,1,0>F      { align1 1H compacted };
sel.l(8)        g33<2>F         g97<8,4,2>F     g35<8,4,2>F     { align1 WE_all 1Q I@6 };
sel.l(8)        g124<2>F        g99<8,4,2>F     g126<8,4,2>F    { align1 WE_all 1Q I@5 };
sel.l(8)        g20<2>F         g101<8,4,2>F    g109<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.ge(8)       g45<2>F         g103<8,4,2>F    g47<8,4,2>F     { align1 WE_all 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.ge(8)       g58<2>F         g27<8,4,2>F     g60<8,4,2>F     { align1 WE_all 1Q I@2 };
sel.ge(8)       g81<2>F         g29<8,4,2>F     g83<8,4,2>F     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
(+f0.0) sel(16) g79<1>UD        g69<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(8)          g97.1<2>UD      g33<8,4,2>UD                    { align1 WE_all 1Q A@6 };
mov(8)          g99.1<2>UD      g124<8,4,2>UD                   { align1 WE_all 1Q A@5 };
mov(8)          g101.1<2>UD     g20<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g103.1<2>UD     g45<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g27.1<2>UD      g58<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g29.1<2>UD      g81<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.ge.f0.0(16) g81<1>F         g16<1,1,0>F     g8<1,1,0>F      { align1 1H compacted };
mov(4)          g118<4>UD       g97.2<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g38<4>UD        g97.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g5<4>UD         g99.2<8,2,4>UD                  { align1 WE_all 1N A@7 };
mov(4)          g3<4>UD         g99.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g114<4>UD       g101.2<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g112<4>UD       g101.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g52<4>UD        g103.2<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g50<4>UD        g103.1<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(4)          g65<4>UD        g27.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g63<4>UD        g27.1<8,2,4>UD                  { align1 WE_all 1N $3.src };
mov(4)          g89<4>UD        g29.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g87<4>UD        g29.1<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g83<1>UD        g71<8,8,1>UD    0x7f800000UD    { align1 1H };
sel.l(4)        g36<4>F         g38<8,2,4>F     g118<8,2,4>F    { align1 WE_all 1N };
sel.l(4)        g1<4>F          g3<8,2,4>F      g5<8,2,4>F      { align1 WE_all 1N I@7 };
sel.l(4)        g110<4>F        g112<8,2,4>F    g114<8,2,4>F    { align1 WE_all 1N I@7 };
sel.ge(4)       g48<4>F         g50<8,2,4>F     g52<8,2,4>F     { align1 WE_all 1N I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.ge(4)       g61<4>F         g63<8,2,4>F     g65<8,2,4>F     { align1 WE_all 1N I@4 };
sel.ge(4)       g85<4>F         g87<8,2,4>F     g89<8,2,4>F     { align1 WE_all 1N I@2 };
cmp.nz.f0.0(16) null<1>D        g73<8,8,1>D     0D              { align1 1H };
mov(4)          g97.2<4>UD      g36<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g99.2<4>UD      g1<8,2,4>UD                     { align1 WE_all 1N F@5 };
mov(4)          g101.2<4>UD     g110<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g103.2<4>UD     g48<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g27.2<4>UD      g61<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g29.2<4>UD      g85<8,2,4>UD                    { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g85<1>UD        g67<8,8,1>UD    0xff800000UD    { align1 1H };
mov(4)          g123<4>UD       g97.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g121<4>UD       g97.1<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g10<4>UD        g99.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g8<4>UD         g99.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g44<4>UD        g101.3<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g42<4>UD        g101.1<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(4)          g57<4>UD        g103.3<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g55<4>UD        g103.1<8,2,4>UD                 { align1 WE_all 1N $2.src };
mov(4)          g73<4>UD        g27.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g94<4>UD        g29.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g92<4>UD        g29.1<8,2,4>UD                  { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>D        g77<8,8,1>D     0D              { align1 1H };
sel.l(4)        g119<4>F        g121<8,2,4>F    g123<8,2,4>F    { align1 WE_all 1N };
sel.l(4)        g6<4>F          g8<8,2,4>F      g10<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g115<4>F        g42<8,2,4>F     g44<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g53<4>F         g55<8,2,4>F     g57<8,2,4>F     { align1 WE_all 1N I@5 };
sel.ge(4)       g90<4>F         g92<8,2,4>F     g94<8,2,4>F     { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N F@1 };
add(8)          g92<1>D         g107<8,4,2>D    128D            { align1 2Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
(+f0.0) sel(16) g87<1>UD        g69<8,8,1>UD    0xff800000UD    { align1 1H };
mov(4)          g97.3<4>UD      g119<8,2,4>UD                   { align1 WE_all 1N F@5 };
mov(4)          g99.3<4>UD      g6<8,2,4>UD                     { align1 WE_all 1N F@4 };
mov(4)          g77<4>UD        g27.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g101.3<4>UD     g115<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g103.3<4>UD     g53<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g29.3<4>UD      g90<8,2,4>UD                    { align1 WE_all 1N F@1 };
add(8)          g91<1>D         g105<8,4,2>D    128D            { align1 1Q compacted };
cmp.nz.f0.0(16) null<1>D        g81<8,8,1>D     0D              { align1 1H };
sel.l(4)        g97.4<1>F       g97.3<0,1,0>F   g97.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.l(4)        g98.4<1>F       g98.3<0,1,0>F   g98.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.l(4)        g99.4<1>F       g99.3<0,1,0>F   g99.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.l(4)        g100.4<1>F      g100.3<0,1,0>F  g100.4<4,4,1>F  { align1 WE_all 1N I@7 };
sel.ge(4)       g66<4>F         g73<8,2,4>F     g77<8,2,4>F     { align1 WE_all 1N I@6 };
sel.l(4)        g101.4<1>F      g101.3<0,1,0>F  g101.4<4,4,1>F  { align1 WE_all 1N I@5 };
sel.l(4)        g102.4<1>F      g102.3<0,1,0>F  g102.4<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g103.4<1>F      g103.3<0,1,0>F  g103.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.ge(4)       g104.4<1>F      g104.3<0,1,0>F  g104.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.ge(4)       g29.4<1>F       g29.3<0,1,0>F   g29.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g30.4<1>F       g30.3<0,1,0>F   g30.4<4,4,1>F   { align1 WE_all 1N I@3 };
(+f0.0) sel(16) g89<1>UD        g71<8,8,1>UD    0xff800000UD    { align1 1H };
sel.l(8)        g98<1>F         g97.7<0,1,0>F   g98<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.l(8)        g100<1>F        g99.7<0,1,0>F   g100<8,8,1>F    { align1 WE_all 1Q F@7 };
mov(4)          g27.3<4>UD      g66<8,2,4>UD                    { align1 WE_all 1N F@7 };
sel.l(8)        g102<1>F        g101.7<0,1,0>F  g102<8,8,1>F    { align1 WE_all 1Q F@7 };
sel.ge(8)       g104<1>F        g103.7<0,1,0>F  g104<8,8,1>F    { align1 WE_all 1Q F@6 };
sel.ge(8)       g30<1>F         g29.7<0,1,0>F   g30<8,8,1>F     { align1 WE_all 1Q F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
cmp.l.f0.0(8)   g93<1>UD        g91<8,8,1>UD    g105<8,4,2>UD   { align1 1Q };
cmp.l.f0.0(8)   g94<1>UD        g92<8,8,1>UD    g107<8,4,2>UD   { align1 2Q };
cmp.l.f0.0(16)  null<1>UD       g40<8,8,1>UD    0x00000003UD    { align1 1H };
sel.ge(4)       g27.4<1>F       g27.3<0,1,0>F   g27.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g28.4<1>F       g28.3<0,1,0>F   g28.4<4,4,1>F   { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(8)          g95<1>D         -g93<8,8,1>D    g105.1<8,4,2>D  { align1 1Q };
add(8)          g96<1>D         -g94<8,8,1>D    g107.1<8,4,2>D  { align1 2Q I@3 };
sel.ge(8)       g28<1>F         g27.7<0,1,0>F   g28<8,8,1>F     { align1 WE_all 1Q F@1 };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
shl(16)         g31<1>D         g40<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g34<1>D         g91<1,1,0>D     g31<1,1,0>D     { align1 1H compacted };
shr(16)         g32<1>UD        g40<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
cmp.l.f0.0(16)  g36<1>UD        g34<1,1,0>UD    g91<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g67<2>UD        g34<4,4,1>UD                    { align1 1Q };
mov(8)          g69<2>UD        g35<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g118<1>UD       g40<1,1,0>UD    0x00000002UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add3(16)        g38<1>D         g95<8,8,1>D     g32<8,8,1>D     -g36<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
(+f0.0) sel(16) g120<1>UD       g100.7<0,1,0>UD g102.7<0,1,0>UD { align1 1H };
mov(8)          g69.1<2>UD      g39<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g67.1<2>UD      g38<4,4,1>UD                    { align1 1Q I@3 };
cmp.l.f0.0(16)  g122<1>UD       g40<1,1,0>UD    0x00000001UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g71<1>UD        g98.7<0,1,0>UD  g120<1,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g124UD          g67UD           g71UD           0x08240595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $5 };
add(16)         g125<1>D        g34<1,1,0>D     12D             { align1 1H $5.dst compacted };
cmp.l.f0.0(16)  g1<1>UD         g125<1,1,0>UD   g34<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g91<2>UD        g125<4,4,1>UD                   { align1 1Q };
mov(8)          g93<2>UD        g126<4,4,1>UD                   { align1 2Q };
cmp.nz.f0.0(16) null<1>D        g118<8,8,1>D    0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g3<1>D          -g1<1,1,0>D     g38<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g5<1>UD         g28.7<0,1,0>UD  g30.7<0,1,0>UD  { align1 1H };
mov(8)          g93.1<2>UD      g4<4,4,1>UD                     { align1 2Q I@2 };
mov(8)          g91.1<2>UD      g3<4,4,1>UD                     { align1 1Q I@3 };
cmp.nz.f0.0(16) null<1>D        g122<8,8,1>D    0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g95<1>UD        g104.7<0,1,0>UD g5<1,1,0>UD     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g7UD            g91UD           g95UD           0x08240596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $6 };

LABEL7:
endif(16)       JIP:  LABEL8                                    { align1 1H };

LABEL8:
mov(16)         g8<1>F          0x7f800000F      /* infF */     { align1 WE_all 1H $6.dst compacted };
mov(16)         g8<1>F          g75<1,1,0>F                     { align1 1H compacted };
mov(16)         g10<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g10<1>F         g79<1,1,0>F                     { align1 1H compacted };
mov(16)         g12<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g12<1>F         g83<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
mov(16)         g14<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g14<1>F         g85<1,1,0>F                     { align1 1H compacted };
mov(16)         g16<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g16<1>F         g87<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g18<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@7 compacted };
mov(16)         g18<1>F         g89<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  null<1>UD       g40<8,8,1>UD    0x00000003UD    { align1 1H };
mov(8)          g97<2>UD        g8.1<8,4,2>UD                   { align1 WE_all 1Q F@6 };
mov(8)          g32<2>UD        g10.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
mov(8)          g123<2>UD       g12.1<8,4,2>UD                  { align1 WE_all 1Q A@4 };
mov(8)          g105<2>UD       g14.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g42<2>UD        g16.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g55<2>UD        g18.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.l(8)        g95<2>F         g8<8,4,2>F      g97<8,4,2>F     { align1 WE_all 1Q I@6 };
sel.l(8)        g30<2>F         g10<8,4,2>F     g32<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.l(8)        g121<2>F        g12<8,4,2>F     g123<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.ge(8)       g20<2>F         g14<8,4,2>F     g105<8,4,2>F    { align1 WE_all 1Q I@3 };
sel.ge(8)       g116<2>F        g16<8,4,2>F     g42<8,4,2>F     { align1 WE_all 1Q I@2 };
sel.ge(8)       g53<2>F         g18<8,4,2>F     g55<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g8.1<2>UD       g95<8,4,2>UD                    { align1 WE_all 1Q A@6 };
mov(8)          g10.1<2>UD      g30<8,4,2>UD                    { align1 WE_all 1Q A@5 };
mov(8)          g12.1<2>UD      g121<8,4,2>UD                   { align1 WE_all 1Q A@4 };
mov(8)          g14.1<2>UD      g20<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g16.1<2>UD      g116<8,4,2>UD                   { align1 WE_all 1Q A@2 };
mov(8)          g18.1<2>UD      g53<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g102<4>UD       g8.2<8,2,4>UD                   { align1 WE_all 1N I@6 };
mov(4)          g100<4>UD       g8.1<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g37<4>UD        g10.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g35<4>UD        g10.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g1<4>UD         g12.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g126<4>UD       g12.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g110<4>UD       g14.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g108<4>UD       g14.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g47<4>UD        g16.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g45<4>UD        g16.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g60<4>UD        g18.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g58<4>UD        g18.1<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g98<4>F         g100<8,2,4>F    g102<8,2,4>F    { align1 WE_all 1N };
sel.l(4)        g33<4>F         g35<8,2,4>F     g37<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g124<4>F        g126<8,2,4>F    g1<8,2,4>F      { align1 WE_all 1N I@7 };
sel.ge(4)       g106<4>F        g108<8,2,4>F    g110<8,2,4>F    { align1 WE_all 1N I@5 };
sel.ge(4)       g43<4>F         g45<8,2,4>F     g47<8,2,4>F     { align1 WE_all 1N I@3 };
sel.ge(4)       g56<4>F         g58<8,2,4>F     g60<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g8.2<4>UD       g98<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g10.2<4>UD      g33<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g12.2<4>UD      g124<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g14.2<4>UD      g106<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g16.2<4>UD      g43<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g18.2<4>UD      g56<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g29<4>UD        g8.3<8,2,4>UD                   { align1 WE_all 1N I@6 };
mov(4)          g27<4>UD        g8.1<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g120<4>UD       g10.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g118<4>UD       g10.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g6<4>UD         g12.3<8,2,4>UD                  { align1 WE_all 1N @7 $6.dst };
mov(4)          g4<4>UD         g12.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g115<4>UD       g14.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g113<4>UD       g14.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g52<4>UD        g16.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g50<4>UD        g16.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g65<4>UD        g18.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g63<4>UD        g18.1<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g103<4>F        g27<8,2,4>F     g29<8,2,4>F     { align1 WE_all 1N };
sel.l(4)        g38<4>F         g118<8,2,4>F    g120<8,2,4>F    { align1 WE_all 1N I@7 };
sel.l(4)        g2<4>F          g4<8,2,4>F      g6<8,2,4>F      { align1 WE_all 1N I@7 };
sel.ge(4)       g111<4>F        g113<8,2,4>F    g115<8,2,4>F    { align1 WE_all 1N I@5 };
sel.ge(4)       g48<4>F         g50<8,2,4>F     g52<8,2,4>F     { align1 WE_all 1N I@3 };
sel.ge(4)       g61<4>F         g63<8,2,4>F     g65<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g8.3<4>UD       g103<8,2,4>UD                   { align1 WE_all 1N F@6 };
mov(4)          g10.3<4>UD      g38<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g12.3<4>UD      g2<8,2,4>UD                     { align1 WE_all 1N F@4 };
mov(4)          g14.3<4>UD      g111<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g16.3<4>UD      g48<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g18.3<4>UD      g61<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g8.4<1>F        g8.3<0,1,0>F    g8.4<4,4,1>F    { align1 WE_all 1N I@6 };
sel.l(4)        g9.4<1>F        g9.3<0,1,0>F    g9.4<4,4,1>F    { align1 WE_all 1N I@6 };
sel.l(4)        g10.4<1>F       g10.3<0,1,0>F   g10.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.l(4)        g11.4<1>F       g11.3<0,1,0>F   g11.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.l(4)        g12.4<1>F       g12.3<0,1,0>F   g12.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g13.4<1>F       g13.3<0,1,0>F   g13.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g14.4<1>F       g14.3<0,1,0>F   g14.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g15.4<1>F       g15.3<0,1,0>F   g15.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g16.4<1>F       g16.3<0,1,0>F   g16.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g17.4<1>F       g17.3<0,1,0>F   g17.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g18.4<1>F       g18.3<0,1,0>F   g18.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g19.4<1>F       g19.3<0,1,0>F   g19.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(8)        g9<1>F          g8.7<0,1,0>F    g9<8,8,1>F      { align1 WE_all 1Q };
sel.l(8)        g11<1>F         g10.7<0,1,0>F   g11<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.l(8)        g13<1>F         g12.7<0,1,0>F   g13<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(8)       g15<1>F         g14.7<0,1,0>F   g15<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(8)       g17<1>F         g16.7<0,1,0>F   g17<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(8)       g19<1>F         g18.7<0,1,0>F   g19<8,8,1>F     { align1 WE_all 1Q F@6 };
(+f0.0) if(16)  JIP:  LABEL9          UIP:  LABEL9              { align1 1H };
shl(16)         g20<1>D         g40<8,8,1>D     0x00000002UD    { align1 1H };
mov(8)          g105<1>UD       g23.1<8,4,2>UD                  { align1 1Q };
mov(8)          g106<1>UD       g25.1<8,4,2>UD                  { align1 2Q };
add(8)          g107<1>D        g23<8,4,2>D     g20<1,1,0>D     { align1 1Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@4 };
add(8)          g108<1>D        g25<8,4,2>D     g21<1,1,0>D     { align1 2Q compacted };
shr(16)         g21<1>UD        g40<1,1,0>UD    0x0000001eUD    { align1 1H $3.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(8)   g109<1>UD       g107<8,8,1>UD   g23<8,4,2>UD    { align1 1Q };
mov(8)          g96<2>UD        g107<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@4 };
cmp.l.f0.0(8)   g110<1>UD       g108<8,8,1>UD   g25<8,4,2>UD    { align1 2Q };
mov(8)          g98<2>UD        g108<4,4,1>UD                   { align1 2Q };
cmp.l.f0.0(16)  g113<1>UD       g40<1,1,0>UD    0x00000002UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add3(16)        g111<1>D        g105<8,8,1>D    g21<8,8,1>D     -g109<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g115<1>UD       g11.7<0,1,0>UD  g13.7<0,1,0>UD  { align1 1H };
mov(8)          g98.1<2>UD      g112<4,4,1>UD                   { align1 2Q I@2 };
mov(8)          g96.1<2>UD      g111<4,4,1>UD                   { align1 1Q I@3 };
cmp.l.f0.0(16)  g42<1>UD        g40<1,1,0>UD    0x00000001UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g100<1>UD       g9.7<0,1,0>UD   g115<1,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g44UD           g96UD           g100UD          0x08240595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $7 };
add(16)         g45<1>D         g107<1,1,0>D    16D             { align1 1H $7.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g47<1>UD        g45<1,1,0>UD    g107<1,1,0>UD   { align1 1H compacted };
mov(8)          g101<2>UD       g45<4,4,1>UD                    { align1 1Q $7.src };
mov(8)          g103<2>UD       g46<4,4,1>UD                    { align1 2Q };
cmp.nz.f0.0(16) null<1>D        g113<8,8,1>D    0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g49<1>D         -g47<1,1,0>D    g111<1,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g51<1>UD        g17.7<0,1,0>UD  g19.7<0,1,0>UD  { align1 1H };
mov(8)          g103.1<2>UD     g50<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g101.1<2>UD     g49<4,4,1>UD                    { align1 1Q I@3 };
cmp.nz.f0.0(16) null<1>D        g42<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
(+f0.0) sel(16) g27<1>UD        g15.7<0,1,0>UD  g51<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g53UD           g101UD          g27UD           0x08240596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $8 };

LABEL9:
endif(16)       JIP:  LABEL10                                   { align1 1H };

LABEL10:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
mov(16)         acc0<1>F        0x0F             /* 0F */       { align1 WE_all 1H I@1 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_primref_procedurals_to_primrefs_code[] = {
    0x80000065, 0x42058220, 0x02000004, 0xffffffc0,
    0x80030061, 0x0d054410, 0x00000000, 0x76543210,
    0x00040061, 0x36050220, 0x00000024, 0x00000000,
    0xe2431b40, 0x00014203, 0xe2440040, 0x04014203,
    0x640d1c40, 0x00800d95, 0x00041c69, 0x74058660,
    0x02463605, 0x00000004, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa00430c, 0x00340000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x030c0000,
    0xfa00440c, 0x00300000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x28050160,
    0x00460d05, 0x00000000, 0xa02a1940, 0x28007402,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x00031b61, 0x37260aa0, 0x000002e4, 0x00000000,
    0x00130061, 0x39260aa0, 0x000002e4, 0x00000000,
    0x00030061, 0x6d260aa0, 0x000002a4, 0x00000000,
    0x00130061, 0x6f260aa0, 0x000002a4, 0x00000000,
    0x00030061, 0x69260aa0, 0x00000264, 0x00000000,
    0x00130061, 0x6b260aa0, 0x00000264, 0x00000000,
    0x21170061, 0x001102cc, 0x2a190061, 0x001102cc,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x00041970, 0x00010220, 0x52462a05, 0x00000324,
    0x60710061, 0x00110300, 0x00040065, 0x0a058220,
    0x02000304, 0x00ffffff, 0x21371761, 0x0011026c,
    0x2a391761, 0x0011026c, 0x216d1761, 0x0011025c,
    0x2a6f1761, 0x0011025c, 0x21691761, 0x00110244,
    0x2a6b1761, 0x00110244, 0x21171761, 0x00110204,
    0x2a191761, 0x00110204, 0x00041761, 0x73050020,
    0x0066711f, 0x00000000, 0x01040022, 0x0001c060,
    0x000003c0, 0x00000350, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x2c440000,
    0xfb043724, 0x003c0000, 0x00032141, 0x20010220,
    0x01462a05, 0x00563006, 0x00042141, 0x36050660,
    0x01462a05, 0x00563006, 0x00040041, 0x1c050660,
    0x01462a05, 0x00563016, 0x00042141, 0x38050660,
    0x01462a05, 0x00563206, 0x3e340049, 0x30002a03,
    0x00041b40, 0x36160110, 0x01563616, 0x00561c06,
    0x00040041, 0x1d050660, 0x01462a05, 0x00563216,
    0x00130041, 0x20010220, 0x01462b05, 0x00563106,
    0xa03cb140, 0x36002c02, 0x00041b40, 0x38160110,
    0x01563816, 0x00561d06, 0x00130049, 0x35050222,
    0x02462b05, 0x00463105, 0x273e1b70, 0x2c003c03,
    0xa04a0040, 0x01003c03, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xa03a1b40, 0x38003402,
    0x274c1a70, 0x3c004a03, 0x0004a152, 0x40040e68,
    0x0e2e2e05, 0x3e053a05, 0xa04e1940, 0x40024c02,
    0x00030061, 0x38060220, 0x00343c05, 0x00000000,
    0x00130061, 0x3a060220, 0x00343d05, 0x00000000,
    0x00031a61, 0x38260220, 0x00344005, 0x00000000,
    0x00131a61, 0x3a260220, 0x00344105, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x42440000, 0xfb043824, 0x003c0000,
    0x00033261, 0x39060220, 0x00344a05, 0x00000000,
    0x00133261, 0x3b060220, 0x00344b05, 0x00000000,
    0x00031a61, 0x39260220, 0x00344e05, 0x00000000,
    0x00131a61, 0x3b260220, 0x00344f05, 0x00000000,
    0xe7512270, 0x7f834400, 0xe7532270, 0x7f834200,
    0xe7572270, 0x7f834600, 0x20551265, 0x53005103,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x50240000, 0xfb043924, 0x000c0000,
    0x20590965, 0x57005503, 0xe75b2370, 0x7f835000,
    0x271c0062, 0x50004400, 0xe75d2270, 0x7f834800,
    0xe7612370, 0x7f835200, 0x205f1265, 0x5d005b03,
    0x20630965, 0x61005f03, 0x20651965, 0x63005903,
    0x00041961, 0x1e062650, 0x00466505, 0x00000000,
    0x00041965, 0x67058110, 0x01561e06, 0x00010001,
    0x00041961, 0x68050450, 0x00686706, 0x00000000,
    0x00041970, 0x25058550, 0x25586805, 0x00000000,
    0x00041961, 0x23050560, 0x20462505, 0x00000000,
    0x00041961, 0x1f062650, 0x00462305, 0x00000000,
    0x01041362, 0x06058220, 0x02461c05, 0x7f800000,
    0x25221a62, 0x52004600, 0x271b1962, 0x48004200,
    0x271d1962, 0x52004600, 0x00041a61, 0x14050110,
    0x00561f06, 0x00000000, 0x25201962, 0x50004400,
    0x01041462, 0x10058220, 0x02462205, 0xff800000,
    0x01041362, 0x04058220, 0x02461b05, 0x7f800000,
    0x01041262, 0x08058220, 0x02461d05, 0x7f800000,
    0x251e1962, 0x48004200, 0x01041262, 0x0e058220,
    0x02462005, 0xff800000, 0x01041162, 0x0c058220,
    0x02461e05, 0xff800000, 0x00040024, 0x0001c060,
    0x00000080, 0x00000080, 0x00041f61, 0x14054110,
    0x00000000, 0x00000000, 0x00041d61, 0x08054220,
    0x00000000, 0x7f800000, 0x00041f61, 0x06054220,
    0x00000000, 0x7f800000, 0x00041f61, 0x04054220,
    0x00000000, 0x7f800000, 0x00041f61, 0x10054220,
    0x00000000, 0xff800000, 0x00041f61, 0x0e054220,
    0x00000000, 0xff800000, 0x00041f61, 0x0c054220,
    0x00000000, 0xff800000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x60261f65, 0x00101405,
    0x00041961, 0x27050450, 0x00682606, 0x00000000,
    0x80000061, 0x20064210, 0x00000000, 0x00000000,
    0x00041a70, 0x78058550, 0x25582705, 0x00000000,
    0x00041961, 0x76050560, 0x00467805, 0x00000000,
    0x80001b61, 0x30010110, 0x00002004, 0x00000000,
    0x00041a70, 0x00018220, 0x22467605, 0x00000000,
    0x00040061, 0x79050120, 0x00003000, 0x00000000,
    0x00040079, 0x7b058620, 0x06462805, 0x00000000,
    0x00041a4d, 0x3e050220, 0x00467905, 0x00000000,
    0x00040070, 0x00018660, 0x16462805, 0x00000000,
    0x207d1b65, 0x7b007903, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x0004094d, 0x01050220,
    0x00467d05, 0x00000000, 0x01040022, 0x0001c060,
    0x000000e0, 0x000000e0, 0xa1141240, 0x024e1703,
    0xaa151140, 0x024e1903, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00031a70, 0x71050220,
    0x52461405, 0x00441706, 0x00131a70, 0x72050220,
    0x52461505, 0x00441906, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00031761, 0x3a060220,
    0x00341405, 0x00000000, 0x00133361, 0x3c060220,
    0x00341505, 0x00000000, 0x00031c40, 0x2c052660,
    0x06467105, 0x00441726, 0x00131c40, 0x2d052660,
    0x06467205, 0x00441926, 0x00031a61, 0x3a260220,
    0x00342c05, 0x00000000, 0x00131a61, 0x3c260220,
    0x00342d05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x15140000,
    0xfb183a24, 0x01003e14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0xa02eb340, 0x15100102,
    0x00040061, 0x00010660, 0x20467605, 0x00000000,
    0x01040022, 0x0001c060, 0x00000258, 0x00000258,
    0x00041b69, 0x30058660, 0x02462e05, 0x00000005,
    0x00031661, 0x33050220, 0x00446d26, 0x00000000,
    0x00131561, 0x34050220, 0x00446f26, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0xa1351b40, 0x300e6d02, 0xaa361c40, 0x310e6f02,
    0xe0310068, 0x01b02e03, 0x00040069, 0x2f058660,
    0x02467305, 0x0000001d, 0x00030c70, 0x37050220,
    0x52463505, 0x00446d06, 0x00033361, 0x3f060220,
    0x00343505, 0x00000000, 0x80103201, 0x00000000,
    0x00000000, 0x00000000, 0x00130d70, 0x38050220,
    0x52463605, 0x00446f06, 0x80101101, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x41060220,
    0x00343605, 0x00000000, 0x20121d66, 0x2f002a03,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00040b52, 0x39040e68, 0x0e2e3305, 0x37053105,
    0x00131961, 0x41260220, 0x00343a05, 0x00000000,
    0x00031a61, 0x3f260220, 0x00343905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x00000000, 0xfb0c3f24, 0x003c0444,
    0xa03c3340, 0x01003503, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x273e1970, 0x35003c03,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00033461, 0x42060220, 0x00343c05, 0x00000000,
    0x80103001, 0x00000000, 0x00000000, 0x00000000,
    0x80101201, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x44060220, 0x00343d05, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa0401b40, 0x39023e02, 0x00131961, 0x44260220,
    0x00344105, 0x00000000, 0x00031a61, 0x42260220,
    0x00344005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x00000000,
    0xfb0c4224, 0x003c0c44, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x20433440, 0x0c000400,
    0x25490070, 0x04000c00, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x20453440, 0x0e000600,
    0xa3610061, 0x7f810000, 0x60610061, 0x00100400,
    0xa3630061, 0x7f810000, 0x60630061, 0x00100600,
    0xa3653461, 0x7f810000, 0x60650061, 0x00100800,
    0xa3670061, 0xff810000, 0x60670061, 0x00100c00,
    0xa31b0061, 0xff810000, 0x601b0061, 0x00100e00,
    0xa31d3061, 0xff810000, 0x601d0061, 0x00101000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x20470040, 0x10000800, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x01041762, 0x4b058220,
    0x02464305, 0x7f800000, 0x80031761, 0x23060220,
    0x00446126, 0x00000000, 0x80031661, 0x7e060220,
    0x00446326, 0x00000000, 0x80031561, 0x6d060220,
    0x00446526, 0x00000000, 0x80030c61, 0x2f060220,
    0x00446726, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80031361, 0x3c060220,
    0x00441b26, 0x00000000, 0x80031261, 0x53060220,
    0x00441d26, 0x00000000, 0x254d0070, 0x06000e00,
    0x80031e62, 0x21060aa0, 0x5a446106, 0x00442306,
    0x80031d62, 0x7c060aa0, 0x5a446306, 0x00447e06,
    0x80031c62, 0x14060aa0, 0x5a446506, 0x00446d06,
    0x80031b62, 0x2d060aa0, 0x4a446706, 0x00442f06,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80031a62, 0x3a060aa0, 0x4a441b06, 0x00443c06,
    0x80031962, 0x51060aa0, 0x4a441d06, 0x00445306,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x4f058220, 0x02464505, 0x7f800000,
    0x80030e61, 0x61260220, 0x00442106, 0x00000000,
    0x80030d61, 0x63260220, 0x00447c06, 0x00000000,
    0x80030c61, 0x65260220, 0x00441406, 0x00000000,
    0x80030b61, 0x67260220, 0x00442d06, 0x00000000,
    0x80030a61, 0x1b260220, 0x00443a06, 0x00000000,
    0x80030961, 0x1d260220, 0x00445106, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x25510070, 0x08001000, 0x80021e61, 0x76070220,
    0x00426147, 0x00000000, 0x80020061, 0x26070220,
    0x00426127, 0x00000000, 0x80020f61, 0x05070220,
    0x00426347, 0x00000000, 0x80020061, 0x03070220,
    0x00426327, 0x00000000, 0x80021f61, 0x72070220,
    0x00426547, 0x00000000, 0x80020061, 0x70070220,
    0x00426527, 0x00000000, 0x80021f61, 0x34070220,
    0x00426747, 0x00000000, 0x80020061, 0x32070220,
    0x00426727, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80021f61, 0x41070220,
    0x00421b47, 0x00000000, 0x80023361, 0x3f070220,
    0x00421b27, 0x00000000, 0x80020061, 0x59070220,
    0x00421d47, 0x00000000, 0x80020061, 0x57070220,
    0x00421d27, 0x00000000, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x53058220,
    0x02464705, 0x7f800000, 0x80020062, 0x24070aa0,
    0x5a422607, 0x00427607, 0x80021f62, 0x01070aa0,
    0x5a420307, 0x00420507, 0x80021f62, 0x6e070aa0,
    0x5a427007, 0x00427207, 0x80021e62, 0x30070aa0,
    0x4a423207, 0x00423407, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80021c62, 0x3d070aa0,
    0x4a423f07, 0x00424107, 0x80021a62, 0x55070aa0,
    0x4a425707, 0x00425907, 0x00040070, 0x00018660,
    0x26464905, 0x00000000, 0x80021661, 0x61470220,
    0x00422407, 0x00000000, 0x80021561, 0x63470220,
    0x00420107, 0x00000000, 0x80021461, 0x65470220,
    0x00426e07, 0x00000000, 0x80021361, 0x67470220,
    0x00423007, 0x00000000, 0x80021261, 0x1b470220,
    0x00423d07, 0x00000000, 0x80021161, 0x1d470220,
    0x00425507, 0x00000000, 0x01040062, 0x55058220,
    0x02464305, 0xff800000, 0x80021f61, 0x7b070220,
    0x00426167, 0x00000000, 0x80020061, 0x79070220,
    0x00426127, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80021f61, 0x0a070220,
    0x00426367, 0x00000000, 0x80021761, 0x08070220,
    0x00426327, 0x00000000, 0x80021f61, 0x2c070220,
    0x00426567, 0x00000000, 0x80020061, 0x2a070220,
    0x00426527, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80021f61, 0x39070220,
    0x00426767, 0x00000000, 0x80023261, 0x37070220,
    0x00426727, 0x00000000, 0x80020061, 0x49070220,
    0x00421b27, 0x00000000, 0x80020061, 0x5e070220,
    0x00421d67, 0x00000000, 0x80020061, 0x5c070220,
    0x00421d27, 0x00000000, 0x00040070, 0x00018660,
    0x26464d05, 0x00000000, 0x80020062, 0x77070aa0,
    0x5a427907, 0x00427b07, 0x80021f62, 0x06070aa0,
    0x5a420807, 0x00420a07, 0x80021f62, 0x73070aa0,
    0x5a422a07, 0x00422c07, 0x80021d62, 0x35070aa0,
    0x4a423707, 0x00423907, 0x80021a62, 0x5a070aa0,
    0x4a425c07, 0x00425e07, 0x80101101, 0x00000000,
    0x00000000, 0x00000000, 0xaa5c0040, 0x080e6b03,
    0x80001601, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x57058220, 0x02464505, 0xff800000,
    0x80021561, 0x61670220, 0x00427707, 0x00000000,
    0x80021461, 0x63670220, 0x00420607, 0x00000000,
    0x80020061, 0x4d070220, 0x00421b67, 0x00000000,
    0x80021361, 0x65670220, 0x00427307, 0x00000000,
    0x80021261, 0x67670220, 0x00423507, 0x00000000,
    0x80021161, 0x1d670220, 0x00425a07, 0x00000000,
    0xa15b0040, 0x080e6903, 0x00040070, 0x00018660,
    0x26465105, 0x00000000, 0x80021f62, 0x61850aa0,
    0x5a006164, 0x00346185, 0x80021f62, 0x62850aa0,
    0x5a006264, 0x00346285, 0x80021f62, 0x63850aa0,
    0x5a006364, 0x00346385, 0x80021f62, 0x64850aa0,
    0x5a006464, 0x00346485, 0x80021e62, 0x42070aa0,
    0x4a424907, 0x00424d07, 0x80021d62, 0x65850aa0,
    0x5a006564, 0x00346585, 0x80021d62, 0x66850aa0,
    0x5a006664, 0x00346685, 0x80021c62, 0x67850aa0,
    0x4a006764, 0x00346785, 0x80021c62, 0x68850aa0,
    0x4a006864, 0x00346885, 0x80021b62, 0x1d850aa0,
    0x4a001d64, 0x00341d85, 0x80021b62, 0x1e850aa0,
    0x4a001e64, 0x00341e85, 0x01040062, 0x59058220,
    0x02464705, 0xff800000, 0x80031762, 0x62050aa0,
    0x5a0061e4, 0x00466205, 0x80031762, 0x64050aa0,
    0x5a0063e4, 0x00466405, 0x80021761, 0x1b670220,
    0x00424207, 0x00000000, 0x80031762, 0x66050aa0,
    0x5a0065e4, 0x00466605, 0x80031662, 0x68050aa0,
    0x4a0067e4, 0x00466805, 0x80031562, 0x1e050aa0,
    0x4a001de4, 0x00461e05, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00030070, 0x5d050220,
    0x52465b05, 0x00446906, 0x00130070, 0x5e050220,
    0x52465c05, 0x00446b06, 0x00040070, 0x00018220,
    0x52462805, 0x00000003, 0x80021c62, 0x1b850aa0,
    0x4a001b64, 0x00341b85, 0x80021c62, 0x1c850aa0,
    0x4a001c64, 0x00341c85, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00030040, 0x5f052660,
    0x06465d05, 0x00446926, 0x00131b40, 0x60052660,
    0x06465e05, 0x00446b26, 0x80031162, 0x1c050aa0,
    0x4a001be4, 0x00461c05, 0x01040022, 0x0001c060,
    0x00000200, 0x00000200, 0x00040069, 0x1f058660,
    0x02462805, 0x00000002, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0220040, 0x1f005b02,
    0xe0200068, 0x01e02803, 0x27241a70, 0x5b002203,
    0x00030061, 0x43060220, 0x00342205, 0x00000000,
    0x00130061, 0x45060220, 0x00342305, 0x00000000,
    0xe7760070, 0x00202803, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x26040e68,
    0x0e2e5f05, 0x24052005, 0x80001601, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x78050220,
    0x020064e4, 0x000066e4, 0x00131a61, 0x45260220,
    0x00342705, 0x00000000, 0x00031b61, 0x43260220,
    0x00342605, 0x00000000, 0xe77a0070, 0x00102803,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x2f470062, 0x78016283, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x7c140000,
    0xfb2a4324, 0x01004714, 0xa07d2540, 0x00c02203,
    0x27011970, 0x22007d03, 0x00030061, 0x5b060220,
    0x00347d05, 0x00000000, 0x00130061, 0x5d060220,
    0x00347e05, 0x00000000, 0x00040070, 0x00018660,
    0x26467605, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0030040, 0x26020102,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x05050220, 0x02001ce4, 0x00001ee4,
    0x00131a61, 0x5d260220, 0x00340405, 0x00000000,
    0x00031b61, 0x5b260220, 0x00340305, 0x00000000,
    0x00040070, 0x00018660, 0x26467a05, 0x00000000,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x2f5f0062, 0x05016883, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x07140000,
    0xfb2c5b24, 0x01005f14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0xa3082661, 0x7f810000,
    0x60080061, 0x00104b00, 0xa30a0061, 0x7f810000,
    0x600a0061, 0x00104f00, 0xa30c0061, 0x7f810000,
    0x600c0061, 0x00105300, 0x80002501, 0x00000000,
    0x00000000, 0x00000000, 0xa30e0061, 0xff810000,
    0x600e0061, 0x00105500, 0xa3100061, 0xff810000,
    0x60100061, 0x00105700, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xa3121f61, 0xff810000,
    0x60120061, 0x00105900, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00040070, 0x00018220,
    0x52462805, 0x00000003, 0x80031661, 0x61060220,
    0x00440826, 0x00000000, 0x80031561, 0x20060220,
    0x00440a26, 0x00000000, 0x80002501, 0x00000000,
    0x00000000, 0x00000000, 0x80030c61, 0x7b060220,
    0x00440c26, 0x00000000, 0x80031361, 0x69060220,
    0x00440e26, 0x00000000, 0x80031261, 0x2a060220,
    0x00441026, 0x00000000, 0x80031161, 0x37060220,
    0x00441226, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80031e62, 0x5f060aa0,
    0x5a440806, 0x00446106, 0x80031d62, 0x1e060aa0,
    0x5a440a06, 0x00442006, 0x80031c62, 0x79060aa0,
    0x5a440c06, 0x00447b06, 0x80031b62, 0x14060aa0,
    0x4a440e06, 0x00446906, 0x80031a62, 0x74060aa0,
    0x4a441006, 0x00442a06, 0x80031962, 0x35060aa0,
    0x4a441206, 0x00443706, 0x80030e61, 0x08260220,
    0x00445f06, 0x00000000, 0x80030d61, 0x0a260220,
    0x00441e06, 0x00000000, 0x80030c61, 0x0c260220,
    0x00447906, 0x00000000, 0x80030b61, 0x0e260220,
    0x00441406, 0x00000000, 0x80030a61, 0x10260220,
    0x00447406, 0x00000000, 0x80030961, 0x12260220,
    0x00443506, 0x00000000, 0x80021e61, 0x66070220,
    0x00420847, 0x00000000, 0x80020061, 0x64070220,
    0x00420827, 0x00000000, 0x80021f61, 0x25070220,
    0x00420a47, 0x00000000, 0x80020061, 0x23070220,
    0x00420a27, 0x00000000, 0x80021f61, 0x01070220,
    0x00420c47, 0x00000000, 0x80020061, 0x7e070220,
    0x00420c27, 0x00000000, 0x80021f61, 0x6e070220,
    0x00420e47, 0x00000000, 0x80020061, 0x6c070220,
    0x00420e27, 0x00000000, 0x80021f61, 0x2f070220,
    0x00421047, 0x00000000, 0x80020061, 0x2d070220,
    0x00421027, 0x00000000, 0x80020061, 0x3c070220,
    0x00421247, 0x00000000, 0x80020061, 0x3a070220,
    0x00421227, 0x00000000, 0x80020062, 0x62070aa0,
    0x5a426407, 0x00426607, 0x80021f62, 0x21070aa0,
    0x5a422307, 0x00422507, 0x80021f62, 0x7c070aa0,
    0x5a427e07, 0x00420107, 0x80021d62, 0x6a070aa0,
    0x4a426c07, 0x00426e07, 0x80021b62, 0x2b070aa0,
    0x4a422d07, 0x00422f07, 0x80021962, 0x38070aa0,
    0x4a423a07, 0x00423c07, 0x80021661, 0x08470220,
    0x00426207, 0x00000000, 0x80021561, 0x0a470220,
    0x00422107, 0x00000000, 0x80021461, 0x0c470220,
    0x00427c07, 0x00000000, 0x80021361, 0x0e470220,
    0x00426a07, 0x00000000, 0x80021261, 0x10470220,
    0x00422b07, 0x00000000, 0x80021161, 0x12470220,
    0x00423807, 0x00000000, 0x80021e61, 0x1d070220,
    0x00420867, 0x00000000, 0x80020061, 0x1b070220,
    0x00420827, 0x00000000, 0x80021f61, 0x78070220,
    0x00420a67, 0x00000000, 0x80020061, 0x76070220,
    0x00420a27, 0x00000000, 0x8002f661, 0x06070220,
    0x00420c67, 0x00000000, 0x80020061, 0x04070220,
    0x00420c27, 0x00000000, 0x80021f61, 0x73070220,
    0x00420e67, 0x00000000, 0x80020061, 0x71070220,
    0x00420e27, 0x00000000, 0x80021f61, 0x34070220,
    0x00421067, 0x00000000, 0x80020061, 0x32070220,
    0x00421027, 0x00000000, 0x80020061, 0x41070220,
    0x00421267, 0x00000000, 0x80020061, 0x3f070220,
    0x00421227, 0x00000000, 0x80020062, 0x67070aa0,
    0x5a421b07, 0x00421d07, 0x80021f62, 0x26070aa0,
    0x5a427607, 0x00427807, 0x80021f62, 0x02070aa0,
    0x5a420407, 0x00420607, 0x80021d62, 0x6f070aa0,
    0x4a427107, 0x00427307, 0x80021b62, 0x30070aa0,
    0x4a423207, 0x00423407, 0x80021962, 0x3d070aa0,
    0x4a423f07, 0x00424107, 0x80021661, 0x08670220,
    0x00426707, 0x00000000, 0x80021561, 0x0a670220,
    0x00422607, 0x00000000, 0x80021461, 0x0c670220,
    0x00420207, 0x00000000, 0x80021361, 0x0e670220,
    0x00426f07, 0x00000000, 0x80021261, 0x10670220,
    0x00423007, 0x00000000, 0x80021161, 0x12670220,
    0x00423d07, 0x00000000, 0x80021e62, 0x08850aa0,
    0x5a000864, 0x00340885, 0x80021e62, 0x09850aa0,
    0x5a000964, 0x00340985, 0x80021d62, 0x0a850aa0,
    0x5a000a64, 0x00340a85, 0x80021d62, 0x0b850aa0,
    0x5a000b64, 0x00340b85, 0x80021c62, 0x0c850aa0,
    0x5a000c64, 0x00340c85, 0x80021c62, 0x0d850aa0,
    0x5a000d64, 0x00340d85, 0x80021b62, 0x0e850aa0,
    0x4a000e64, 0x00340e85, 0x80021b62, 0x0f850aa0,
    0x4a000f64, 0x00340f85, 0x80021a62, 0x10850aa0,
    0x4a001064, 0x00341085, 0x80021a62, 0x11850aa0,
    0x4a001164, 0x00341185, 0x80021962, 0x12850aa0,
    0x4a001264, 0x00341285, 0x80021962, 0x13850aa0,
    0x4a001364, 0x00341385, 0x80030062, 0x09050aa0,
    0x5a0008e4, 0x00460905, 0x80031762, 0x0b050aa0,
    0x5a000ae4, 0x00460b05, 0x80031762, 0x0d050aa0,
    0x5a000ce4, 0x00460d05, 0x80031762, 0x0f050aa0,
    0x4a000ee4, 0x00460f05, 0x80031762, 0x11050aa0,
    0x4a0010e4, 0x00461105, 0x80031662, 0x13050aa0,
    0x4a0012e4, 0x00461305, 0x01040022, 0x0001c060,
    0x00000260, 0x00000260, 0x00040069, 0x14058660,
    0x02462805, 0x00000002, 0x00030061, 0x69050220,
    0x00441726, 0x00000000, 0x00130061, 0x6a050220,
    0x00441926, 0x00000000, 0xa16b1b40, 0x140e1702,
    0x80101c01, 0x00000000, 0x00000000, 0x00000000,
    0xaa6c0040, 0x150e1902, 0xe0152368, 0x01e02803,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00030070, 0x6d050220, 0x52466b05, 0x00441706,
    0x00030061, 0x60060220, 0x00346b05, 0x00000000,
    0x80101c01, 0x00000000, 0x00000000, 0x00000000,
    0x00130070, 0x6e050220, 0x52466c05, 0x00441906,
    0x00130061, 0x62060220, 0x00346c05, 0x00000000,
    0xe7710070, 0x00202803, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x6f040e68,
    0x0e2e6905, 0x6d051505, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x73050220,
    0x02000be4, 0x00000de4, 0x00131a61, 0x62260220,
    0x00347005, 0x00000000, 0x00031b61, 0x60260220,
    0x00346f05, 0x00000000, 0xe72a0070, 0x00102803,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x2f640062, 0x73010983, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x2c140000,
    0xfb2a6024, 0x01006414, 0xa02d2740, 0x01006b03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x272f0070, 0x6b002d03, 0x00033761, 0x65060220,
    0x00342d05, 0x00000000, 0x00130061, 0x67060220,
    0x00342e05, 0x00000000, 0x00040070, 0x00018660,
    0x26467105, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0310040, 0x6f022f02,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x33050220, 0x020011e4, 0x000013e4,
    0x00131a61, 0x67260220, 0x00343205, 0x00000000,
    0x00031b61, 0x65260220, 0x00343105, 0x00000000,
    0x00040070, 0x00018660, 0x26462a05, 0x00000000,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0x2f1b0062, 0x33010f83, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x35140000,
    0xfb2c6524, 0x01001b14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80030061, 0x7e050220,
    0x00460005, 0x00000000, 0x80041961, 0x20014aa0,
    0x00000000, 0x00000000, 0x80040931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_primref_procedurals_to_primrefs = {
   .prog_data = {
      .base.nr_params = 18,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 3,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 7264,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_primref_procedurals_to_primrefs_relocs,
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
      .push.cross_thread.dwords = 18,
      .push.cross_thread.regs = 3,
      .push.cross_thread.size = 96,
   },
   .args_size = 40,
   .arg_count = 6,
   .args = gfx125_bvh_build_primref_procedurals_to_primrefs_args,
   .code = gfx125_bvh_build_primref_procedurals_to_primrefs_code,
};
const char *gfx125_bvh_build_primref_procedurals_to_primrefs_sha1 = "665ee8454bfec629286c18251425e055ccc8e99a";

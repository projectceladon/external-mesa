#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
   { 24, 8 },
   { 32, 8 },
   { 40, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g105<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(8)          g13<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(16)         g54<1>UD        g0.1<0,1,0>UD                   { align1 1H };
add(1)          g106<1>UD       g105<0,1,0>UD   0x00000000UD    { align1 WE_all 1N I@3 compacted };
add(1)          g107<1>UD       g105<0,1,0>UD   0x00000040UD    { align1 WE_all 1N compacted };
add(8)          g13.8<1>UW      g13<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@4 compacted };
shl(16)         g38<1>D         g54<8,8,1>D     0x00000004UD    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(1)         g1UD            g106UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g3UD            g107UD          nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g40<1>D         g13<8,8,1>UW                    { align1 1H };
add(16)         g42<1>D         g38<1,1,0>D     g40<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g31.1<2>F       g2.5<0,1,0>F                    { align1 1Q };
mov(8)          g33.1<2>F       g2.5<0,1,0>F                    { align1 2Q };
mov(8)          g27.1<2>F       g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g29.1<2>F       g2.3<0,1,0>F                    { align1 2Q };
mov(8)          g23.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g25.1<2>F       g2.1<0,1,0>F                    { align1 2Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mov(8)          g56.1<2>F       g3.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g58.1<2>F       g3.1<0,1,0>F                    { align1 2Q compacted };
and(16)         g10<1>UD        g3.2<0,1,0>UD   0x00ffffffUD    { align1 1H };
mov(8)          g31<2>F         g2.4<0,1,0>F                    { align1 1Q F@7 compacted };
mov(8)          g33<2>F         g2.4<0,1,0>F                    { align1 2Q F@7 compacted };
mov(8)          g27<2>F         g2.2<0,1,0>F                    { align1 1Q F@7 compacted };
mov(8)          g29<2>F         g2.2<0,1,0>F                    { align1 2Q F@7 compacted };
mov(8)          g23<2>F         g2<0,1,0>F                      { align1 1Q F@7 compacted };
mov(8)          g25<2>F         g2<0,1,0>F                      { align1 2Q F@7 compacted };
mov(8)          g56<2>F         g3<0,1,0>F                      { align1 1Q F@7 compacted };
mov(8)          g58<2>F         g3<0,1,0>F                      { align1 2Q F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
send(16)        g36UD           g56UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
mov(8)          g57.1<2>F       g2.7<0,1,0>F                    { align1 1Q $2.src };
mov(8)          g59.1<2>F       g2.7<0,1,0>F                    { align1 2Q $2.src };
mov(8)          g57<2>F         g2.6<0,1,0>F                    { align1 1Q F@2 compacted };
mov(8)          g59<2>F         g2.6<0,1,0>F                    { align1 2Q F@2 compacted };
cmp.l.f0.0(16)  null<1>UD       g42<8,8,1>UD    g36<8,8,1>UD    { align1 1H @2 $2.dst };
mov(16)         g35<1>F         g3.2<0,1,0>F                    { align1 1H I@1 compacted };
mov(16)         g37<1>UD        g35.3<32,8,4>UB                 { align1 1H F@1 };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
send(16)        g44UD           g57UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mul(8)          acc0<1>UD       g42<8,8,1>UD    g48<16,8,2>UW   { align1 1Q $3.dst };
mul(16)         g54<1>D         g42<8,8,1>D     g48<16,8,2>UW   { align1 1H $3.dst };
mul(16)         g125<1>D        g42<8,8,1>D     g48.1<16,8,2>UW { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mul(16)         g56<1>D         g42<8,8,1>D     g50<16,8,2>UW   { align1 1H $3.dst };
mach(8)         g52<1>UD        g42<1,1,0>UD    g48<1,1,0>UD    { align1 1Q compacted AccWrEnable };
add(16)         g54.1<2>UW      g54.1<16,8,2>UW g125<16,8,2>UW  { align1 1H I@3 };
mul(16)         g126<1>D        g42<8,8,1>D     g50.1<16,8,2>UW { align1 1H };
mul(8)          acc0<1>UD       g43<8,8,1>UD    g49<16,8,2>UW   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g60<1>D         g44<1,1,0>D     g54<1,1,0>D     { align1 1H $3.dst compacted };
add(16)         g56.1<2>UW      g56.1<16,8,2>UW g126<16,8,2>UW  { align1 1H I@3 };
mach(8)         g53<1>UD        g43<8,8,1>UD    g49<8,8,1>UD    { align1 2Q AccWrEnable };
cmp.l.f0.0(16)  g62<1>UD        g60<1,1,0>UD    g44<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g80<2>UD        g60<4,4,1>UD                    { align1 1Q };
mov(8)          g82<2>UD        g61<4,4,1>UD                    { align1 2Q };
add(16)         g74<1>D         g60<1,1,0>D     16D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g58<1>D         g52<1,1,0>D     g56<1,1,0>D     { align1 1H I@5 compacted };
cmp.l.f0.0(16)  g76<1>UD        g74<1,1,0>UD    g60<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g87<2>UD        g74<4,4,1>UD                    { align1 1Q };
mov(8)          g89<2>UD        g75<4,4,1>UD                    { align1 2Q };
add3(16)        g64<1>D         g46<8,8,1>D     g58<8,8,1>D     -g62<1,1,1>D { align1 1H @4 $3.dst };
mov(8)          g82.1<2>UD      g65<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g80.1<2>UD      g64<4,4,1>UD                    { align1 1Q I@2 };
add(16)         g78<1>D         -g76<1,1,0>D    g64<1,1,0>D     { align1 1H I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g66UD           g80UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $4 };
mov(8)          g89.1<2>UD      g79<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g87.1<2>UD      g78<4,4,1>UD                    { align1 1Q I@2 };
cmp.l.f0.0(16)  g81<1>F         (abs)g68<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $4.dst compacted };
cmp.l.f0.0(16)  g83<1>F         (abs)g66<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $4.dst compacted };
and(16)         g85<1>UD        g81<1,1,0>UD    g83<1,1,0>UD    { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g80UD           g87UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g87<1>F         (abs)g70<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $4.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
and(16)         g89<1>UD        g85<1,1,0>UD    g87<1,1,0>UD    { align1 1H A@1 compacted };
cmp.l.f0.0(16)  g91<1>F         (abs)g80<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $5.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.l(16)       g106<1>F        g68<1,1,0>F     g80<1,1,0>F     { align1 1H compacted };
sel.ge(16)      g110<1>F        g68<1,1,0>F     g80<1,1,0>F     { align1 1H compacted };
cmp.l.f0.0(16)  g93<1>F         (abs)g72<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $4.dst compacted };
cmp.l.f0.0(16)  g97<1>F         (abs)g82<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $5.dst compacted };
and(16)         g95<1>UD        g91<1,1,0>UD    g93<1,1,0>UD    { align1 1H F@2 compacted };
and(16)         g99<1>UD        g95<1,1,0>UD    g97<1,1,0>UD    { align1 1H A@1 compacted };
and(16)         g101<1>UD       g89<1,1,0>UD    g99<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(16)         g1<2>W          -g101<8,8,1>D                   { align1 1H A@1 };
and(16)         g103<1>UW       g1<16,8,2>UW    0x0001UW        { align1 1H I@1 };
mov(16)         g104<1>W        g103<32,16,2>B                  { align1 1H I@1 };
cmp.nz.f0.0(16) g115<1>W        g104<16,16,1>W  0W              { align1 1H I@1 };
mov.nz.f0.0(16) g113<1>D        g115<8,8,1>W                    { align1 1H I@1 };
mov(16)         g2<2>W          -g113<8,8,1>D                   { align1 1H A@1 };
(+f0.0) sel(16) g6<1>UD         g106<8,8,1>UD   0x7f800000UD    { align1 1H F@4 };
(+f0.0) sel(16) g14<1>UD        g110<8,8,1>UD   0xff800000UD    { align1 1H F@3 };
sel.ge(16)      g112<1>F        g70<1,1,0>F     g82<1,1,0>F     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
sel.l(16)       g105<1>F        g66<1,1,0>F     g72<1,1,0>F     { align1 1H compacted };
sel.l(16)       g107<1>F        g70<1,1,0>F     g82<1,1,0>F     { align1 1H I@2 compacted };
mov(16)         g20<1>UW        g2<16,8,2>UW                    { align1 1H I@3 };
(+f0.0) sel(16) g16<1>UD        g112<8,8,1>UD   0xff800000UD    { align1 1H F@3 };
(+f0.0) sel(16) g4<1>UD         g105<8,8,1>UD   0x7f800000UD    { align1 1H F@2 };
(+f0.0) sel(16) g8<1>UD         g107<8,8,1>UD   0x7f800000UD    { align1 1H F@1 };
sel.ge(16)      g108<1>F        g66<1,1,0>F     g72<1,1,0>F     { align1 1H I@1 compacted };
(+f0.0) sel(16) g12<1>UD        g108<8,8,1>UD   0xff800000UD    { align1 1H F@1 };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g20<1>UW        0x0000UW                        { align1 1H I@6 };
mov(16)         g8<1>UD         0x7f800000UD                    { align1 1H I@4 };
mov(16)         g6<1>UD         0x7f800000UD                    { align1 1H I@7 };
mov(16)         g4<1>UD         0x7f800000UD                    { align1 1H I@7 };
mov(16)         g16<1>UD        0xff800000UD                    { align1 1H I@7 };
mov(16)         g14<1>UD        0xff800000UD                    { align1 1H };
mov(16)         g12<1>UD        0xff800000UD                    { align1 1H I@7 };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
and(16)         g116<1>UW       g20<1,1,0>UW    0x0001UW        { align1 1H I@7 compacted };
mov(16)         g117<1>W        g116<32,16,2>B                  { align1 1H I@1 };
mov(1)          g3<2>UW         0x00000000UD                    { align1 WE_all 1N A@1 };
cmp.nz.f0.0(16) g120<1>W        g117<16,16,1>W  0W              { align1 1H I@2 };
mov(16)         g118<1>D        g120<8,8,1>W                    { align1 1H I@1 };
mov(1)          f0<1>UW         g3<0,1,0>UW                     { align1 WE_all 1N I@3 };
cmp.nz.f0.0(16) null<1>UD       g118<8,8,1>UD   0x00000000UD    { align1 1H I@2 };
mov(16)         g121<1>UD       f0<0,1,0>UW                     { align1 1H };
bfi1(16)        g123<1>UD       g40<8,8,1>D     0D              { align1 1H };
cbit(16)        g92<1>UD        g121<8,8,1>UD                   { align1 1H I@2 };
cmp.z.f0.0(16)  null<1>D        g40<8,8,1>D     0D              { align1 1H };
and(16)         g125<1>UD       g121<1,1,0>UD   g123<1,1,0>UD   { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cbit(16)        g1<1>UD         g125<8,8,1>UD                   { align1 1H A@1 };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
add(8)          g20<1>D         g23<8,4,2>D     36D             { align1 1Q F@7 compacted };
add(8)          g21<1>D         g25<8,4,2>D     36D             { align1 2Q F@7 compacted };
cmp.l.f0.0(8)   g35<1>UD        g20<8,8,1>UD    g23<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g36<1>UD        g21<8,8,1>UD    g25<8,4,2>UD    { align1 2Q I@2 };
mov(8)          g88<2>UD        g20<4,4,1>UD                    { align1 1Q };
mov(8)          g90<2>UD        g21<4,4,1>UD                    { align1 2Q };
add(8)          g44<1>D         -g35<8,8,1>D    g23.1<8,4,2>D   { align1 1Q I@4 };
add(8)          g45<1>D         -g36<8,8,1>D    g25.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g88.1<2>UD      g44<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g90.1<2>UD      g45<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g21UD           g88UD           g92UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $6 };

LABEL3:
endif(16)       JIP:  LABEL4                                    { align1 1H };

LABEL4:
add(16)         g46<1>D         g1<1,1,0>D      g21<0,1,0>D     { align1 1H @3 $6.dst compacted };
mov.nz.f0.0(16) null<1>D        g118<8,8,1>D                    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL5              { align1 1H };
shl(16)         g48<1>D         g46<8,8,1>D     0x00000005UD    { align1 1H I@3 };
mov(8)          g51<1>UD        g31.1<8,4,2>UD                  { align1 1Q };
mov(8)          g52<1>UD        g33.1<8,4,2>UD                  { align1 2Q };
add(8)          g53<1>D         g31<8,4,2>D     g48<1,1,0>D     { align1 1Q I@3 compacted };
add(8)          g54<1>D         g33<8,4,2>D     g49<1,1,0>D     { align1 2Q I@4 compacted };
shr(16)         g49<1>UD        g46<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
shl(16)         g47<1>D         g37<8,8,1>D     0x0000001dUD    { align1 1H };
cmp.l.f0.0(8)   g55<1>UD        g53<8,8,1>UD    g31<8,4,2>UD    { align1 1Q I@4 };
mov(8)          g93<2>UD        g53<4,4,1>UD                    { align1 1Q $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $2.src };
cmp.l.f0.0(8)   g56<1>UD        g54<8,8,1>UD    g33<8,4,2>UD    { align1 2Q I@5 };
mov(8)          g95<2>UD        g54<4,4,1>UD                    { align1 2Q };
or(16)          g18<1>UD        g42<1,1,0>UD    g47<1,1,0>UD    { align1 1H I@5 compacted };
add3(16)        g57<1>D         g51<8,8,1>D     g49<8,8,1>D     -g55<1,1,1>D { align1 1H A@3 };
mov(8)          g95.1<2>UD      g58<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g93.1<2>UD      g57<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g93UD           g4UD            0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $6 };
add(16)         g60<1>D         g53<1,1,0>D     16D             { align1 1H F@2 compacted };
cmp.l.f0.0(16)  g62<1>UD        g60<1,1,0>UD    g53<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g94<2>UD        g60<4,4,1>UD                    { align1 1Q $6.src };
mov(8)          g96<2>UD        g61<4,4,1>UD                    { align1 2Q $6.src };
add(16)         g64<1>D         -g62<1,1,0>D    g57<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g96.1<2>UD      g65<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g94.1<2>UD      g64<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g94UD           g12UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat ) base_offset 0  { align1 1H $7 };

LABEL5:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g67<1>F         g4<1,1,0>F      g12<1,1,0>F     { align1 1H $6.src compacted };
cmp.ge.f0.0(16) g73<1>F         g12<1,1,0>F     g4<1,1,0>F      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g69<1>F         g6<1,1,0>F      g14<1,1,0>F     { align1 1H $6.src compacted };
mov(16)         g97<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H $7.src compacted };
mov(16)         g97<1>F         g4<1,1,0>F                      { align1 1H compacted };
mov(16)         g99<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g99<1>F         g6<1,1,0>F                      { align1 1H compacted };
mov(16)         g101<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H $6.src compacted };
mov(16)         g101<1>F        g8<1,1,0>F                      { align1 1H compacted };
mov(16)         g103<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g103<1>F        g12<1,1,0>F                     { align1 1H compacted };
mov(16)         g105<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H $0.src compacted };
mov(16)         g105<1>F        g14<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g107<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H $7.src compacted };
mov(16)         g107<1>F        g16<1,1,0>F                     { align1 1H compacted };
add(16)         g71<1>F         g8<1,1,0>F      g16<1,1,0>F     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
(+f0.0) sel(16) g75<1>UD        g67<8,8,1>UD    0x7f800000UD    { align1 1H F@7 };
mov(8)          g31<2>UD        g97.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
mov(8)          g47<2>UD        g99.1<8,4,2>UD                  { align1 WE_all 1Q A@6 };
mov(8)          g60<2>UD        g101.1<8,4,2>UD                 { align1 WE_all 1Q A@5 };
mov(8)          g83<2>UD        g103.1<8,4,2>UD                 { align1 WE_all 1Q F@4 };
mov(8)          g109<2>UD       g105.1<8,4,2>UD                 { align1 WE_all 1Q F@3 };
mov(8)          g122<2>UD       g107.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
cmp.ge.f0.0(16) g77<1>F         g14<1,1,0>F     g6<1,1,0>F      { align1 1H compacted };
sel.l(8)        g20<2>F         g97<8,4,2>F     g31<8,4,2>F     { align1 WE_all 1Q I@6 };
sel.l(8)        g45<2>F         g99<8,4,2>F     g47<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.l(8)        g58<2>F         g101<8,4,2>F    g60<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.ge(8)       g81<2>F         g103<8,4,2>F    g83<8,4,2>F     { align1 WE_all 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.ge(8)       g95<2>F         g105<8,4,2>F    g109<8,4,2>F    { align1 WE_all 1Q I@2 };
sel.ge(8)       g120<2>F        g107<8,4,2>F    g122<8,4,2>F    { align1 WE_all 1Q I@1 };
(+f0.0) sel(16) g79<1>UD        g69<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(8)          g97.1<2>UD      g20<8,4,2>UD                    { align1 WE_all 1Q A@6 };
mov(8)          g99.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q A@5 };
mov(8)          g101.1<2>UD     g58<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g103.1<2>UD     g81<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g105.1<2>UD     g95<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g107.1<2>UD     g120<8,4,2>UD                   { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.ge.f0.0(16) g81<1>F         g16<1,1,0>F     g8<1,1,0>F      { align1 1H compacted };
mov(4)          g36<4>UD        g97.2<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g34<4>UD        g97.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g52<4>UD        g99.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g50<4>UD        g99.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g65<4>UD        g101.2<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g63<4>UD        g101.1<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(4)          g89<4>UD        g103.2<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g87<4>UD        g103.1<8,2,4>UD                 { align1 WE_all 1N $6.src };
mov(4)          g114<4>UD       g105.2<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g112<4>UD       g105.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g1<4>UD         g107.2<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g125<4>UD       g107.1<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g83<1>UD        g71<8,8,1>UD    0x7f800000UD    { align1 1H };
sel.l(4)        g32<4>F         g34<8,2,4>F     g36<8,2,4>F     { align1 WE_all 1N };
sel.l(4)        g48<4>F         g50<8,2,4>F     g52<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g61<4>F         g63<8,2,4>F     g65<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g85<4>F         g87<8,2,4>F     g89<8,2,4>F     { align1 WE_all 1N I@6 };
sel.ge(4)       g110<4>F        g112<8,2,4>F    g114<8,2,4>F    { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.ge(4)       g123<4>F        g125<8,2,4>F    g1<8,2,4>F      { align1 WE_all 1N I@2 };
cmp.nz.f0.0(16) null<1>D        g73<8,8,1>D     0D              { align1 1H };
mov(4)          g97.2<4>UD      g32<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g99.2<4>UD      g48<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g101.2<4>UD     g61<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g103.2<4>UD     g85<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g105.2<4>UD     g110<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g107.2<4>UD     g123<8,2,4>UD                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g85<1>UD        g67<8,8,1>UD    0xff800000UD    { align1 1H };
mov(4)          g44<4>UD        g97.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g42<4>UD        g97.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g57<4>UD        g99.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g55<4>UD        g99.1<8,2,4>UD                  { align1 WE_all 1N $2.src };
mov(4)          g73<4>UD        g101.1<8,2,4>UD                 { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(4)          g94<4>UD        g103.3<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g92<4>UD        g103.1<8,2,4>UD                 { align1 WE_all 1N $6.src };
mov(4)          g119<4>UD       g105.3<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g117<4>UD       g105.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g6<4>UD         g107.3<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g4<4>UD         g107.1<8,2,4>UD                 { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>D        g77<8,8,1>D     0D              { align1 1H };
sel.l(4)        g37<4>F         g42<8,2,4>F     g44<8,2,4>F     { align1 WE_all 1N };
sel.l(4)        g53<4>F         g55<8,2,4>F     g57<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.ge(4)       g90<4>F         g92<8,2,4>F     g94<8,2,4>F     { align1 WE_all 1N I@6 };
sel.ge(4)       g115<4>F        g117<8,2,4>F    g119<8,2,4>F    { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N F@2 };
add(8)          g92<1>D         g29<8,4,2>D     128D            { align1 2Q compacted };
sel.ge(4)       g2<4>F          g4<8,2,4>F      g6<8,2,4>F      { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
(+f0.0) sel(16) g87<1>UD        g69<8,8,1>UD    0xff800000UD    { align1 1H };
mov(4)          g97.3<4>UD      g37<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g99.3<4>UD      g53<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g77<4>UD        g101.3<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g103.3<4>UD     g90<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g105.3<4>UD     g115<8,2,4>UD                   { align1 WE_all 1N F@2 };
add(8)          g91<1>D         g27<8,4,2>D     128D            { align1 1Q compacted };
mov(4)          g107.3<4>UD     g2<8,2,4>UD                     { align1 WE_all 1N F@1 };
cmp.nz.f0.0(16) null<1>D        g81<8,8,1>D     0D              { align1 1H };
sel.l(4)        g97.4<1>F       g97.3<0,1,0>F   g97.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.l(4)        g98.4<1>F       g98.3<0,1,0>F   g98.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.l(4)        g99.4<1>F       g99.3<0,1,0>F   g99.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.l(4)        g100.4<1>F      g100.3<0,1,0>F  g100.4<4,4,1>F  { align1 WE_all 1N I@7 };
sel.l(4)        g66<4>F         g73<8,2,4>F     g77<8,2,4>F     { align1 WE_all 1N I@6 };
sel.ge(4)       g103.4<1>F      g103.3<0,1,0>F  g103.4<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g104.4<1>F      g104.3<0,1,0>F  g104.4<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g105.4<1>F      g105.3<0,1,0>F  g105.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.ge(4)       g106.4<1>F      g106.3<0,1,0>F  g106.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.ge(4)       g107.4<1>F      g107.3<0,1,0>F  g107.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.ge(4)       g108.4<1>F      g108.3<0,1,0>F  g108.4<4,4,1>F  { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g89<1>UD        g71<8,8,1>UD    0xff800000UD    { align1 1H };
sel.l(8)        g98<1>F         g97.7<0,1,0>F   g98<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.l(8)        g100<1>F        g99.7<0,1,0>F   g100<8,8,1>F    { align1 WE_all 1Q F@7 };
mov(4)          g101.3<4>UD     g66<8,2,4>UD                    { align1 WE_all 1N F@7 };
sel.ge(8)       g104<1>F        g103.7<0,1,0>F  g104<8,8,1>F    { align1 WE_all 1Q F@7 };
sel.ge(8)       g106<1>F        g105.7<0,1,0>F  g106<8,8,1>F    { align1 WE_all 1Q F@6 };
sel.ge(8)       g108<1>F        g107.7<0,1,0>F  g108<8,8,1>F    { align1 WE_all 1Q F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
cmp.l.f0.0(8)   g93<1>UD        g91<8,8,1>UD    g27<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(8)   g94<1>UD        g92<8,8,1>UD    g29<8,4,2>UD    { align1 2Q };
cmp.l.f0.0(16)  null<1>UD       g40<8,8,1>UD    0x00000003UD    { align1 1H };
sel.l(4)        g101.4<1>F      g101.3<0,1,0>F  g101.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g102.4<1>F      g102.3<0,1,0>F  g102.4<4,4,1>F  { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(8)          g95<1>D         -g93<8,8,1>D    g27.1<8,4,2>D   { align1 1Q };
add(8)          g96<1>D         -g94<8,8,1>D    g29.1<8,4,2>D   { align1 2Q I@3 };
sel.l(8)        g102<1>F        g101.7<0,1,0>F  g102<8,8,1>F    { align1 WE_all 1Q F@1 };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
shl(16)         g109<1>D        g40<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g112<1>D        g91<1,1,0>D     g109<1,1,0>D    { align1 1H compacted };
shr(16)         g110<1>UD       g40<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g114<1>UD       g112<1,1,0>UD   g91<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  g118<1>UD       g40<1,1,0>UD    0x00000002UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add3(16)        g116<1>D        g95<8,8,1>D     g110<8,8,1>D    -g114<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g120<1>UD       g100.7<0,1,0>UD g102.7<0,1,0>UD { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
cmp.l.f0.0(16)  g122<1>UD       g40<1,1,0>UD    0x00000001UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
mov(8)          g99<2>UD        g112<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N F@1 };
mov(8)          g101<2>UD       g113<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g109<1>UD       g98.7<0,1,0>UD  g120<1,1,0>UD   { align1 1H compacted };
mov(8)          g99.1<2>UD      g116<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g101.1<2>UD     g117<4,4,1>UD                   { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g124UD          g99UD           g109UD          0x08240595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $8 };
add(16)         g125<1>D        g112<1,1,0>D    12D             { align1 1H $8.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g1<1>UD         g125<1,1,0>UD   g112<1,1,0>UD   { align1 1H compacted };
cmp.nz.f0.0(16) null<1>D        g118<8,8,1>D    0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g3<1>D          -g1<1,1,0>D     g116<1,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g5<1>UD         g106.7<0,1,0>UD g108.7<0,1,0>UD { align1 1H };
mov(8)          g110<2>UD       g125<4,4,1>UD                   { align1 1Q $8.src };
mov(8)          g112<2>UD       g126<4,4,1>UD                   { align1 2Q };
cmp.nz.f0.0(16) null<1>D        g122<8,8,1>D    0D              { align1 1H };
mov(8)          g110.1<2>UD     g3<4,4,1>UD                     { align1 1Q I@3 };
mov(8)          g112.1<2>UD     g4<4,4,1>UD                     { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@6 };
(+f0.0) sel(16) g114<1>UD       g104.7<0,1,0>UD g5<1,1,0>UD     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g7UD            g110UD          g114UD          0x08240596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $9 };

LABEL7:
endif(16)       JIP:  LABEL8                                    { align1 1H };

LABEL8:
mov(16)         g8<1>F          0x7f800000F      /* infF */     { align1 WE_all 1H $9.dst compacted };
mov(16)         g8<1>F          g75<1,1,0>F                     { align1 1H compacted };
mov(16)         g10<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H $6.src compacted };
mov(16)         g10<1>F         g79<1,1,0>F                     { align1 1H compacted };
mov(16)         g12<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g12<1>F         g83<1,1,0>F                     { align1 1H compacted };
mov(16)         g14<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g14<1>F         g85<1,1,0>F                     { align1 1H compacted };
mov(16)         g16<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g16<1>F         g87<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g18<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@7 compacted };
mov(16)         g18<1>F         g89<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
cmp.l.f0.0(16)  null<1>UD       g40<8,8,1>UD    0x00000003UD    { align1 1H };
mov(8)          g27<2>UD        g8.1<8,4,2>UD                   { align1 WE_all 1Q F@6 };
mov(8)          g42<2>UD        g10.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g55<2>UD        g12.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g68<2>UD        g14.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g81<2>UD        g16.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g94<2>UD        g18.1<8,4,2>UD                  { align1 WE_all 1Q A@1 };
sel.l(8)        g20<2>F         g8<8,4,2>F      g27<8,4,2>F     { align1 WE_all 1Q I@6 };
sel.l(8)        g38<2>F         g10<8,4,2>F     g42<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.l(8)        g53<2>F         g12<8,4,2>F     g55<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.ge(8)       g66<2>F         g14<8,4,2>F     g68<8,4,2>F     { align1 WE_all 1Q I@3 };
sel.ge(8)       g79<2>F         g16<8,4,2>F     g81<8,4,2>F     { align1 WE_all 1Q I@2 };
sel.ge(8)       g92<2>F         g18<8,4,2>F     g94<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g8.1<2>UD       g20<8,4,2>UD                    { align1 WE_all 1Q A@6 };
mov(8)          g10.1<2>UD      g38<8,4,2>UD                    { align1 WE_all 1Q A@5 };
mov(8)          g12.1<2>UD      g53<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g14.1<2>UD      g66<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g16.1<2>UD      g79<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g18.1<2>UD      g92<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g32<4>UD        g8.2<8,2,4>UD                   { align1 WE_all 1N I@6 };
mov(4)          g30<4>UD        g8.1<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g47<4>UD        g10.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g45<4>UD        g10.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g60<4>UD        g12.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g58<4>UD        g12.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g73<4>UD        g14.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g71<4>UD        g14.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g86<4>UD        g16.2<8,2,4>UD                  { align1 WE_all 1N A@7 };
mov(4)          g84<4>UD        g16.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g99<4>UD        g18.2<8,2,4>UD                  { align1 WE_all 1N $8.src };
mov(4)          g97<4>UD        g18.1<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g28<4>F         g30<8,2,4>F     g32<8,2,4>F     { align1 WE_all 1N };
sel.l(4)        g43<4>F         g45<8,2,4>F     g47<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g56<4>F         g58<8,2,4>F     g60<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g69<4>F         g71<8,2,4>F     g73<8,2,4>F     { align1 WE_all 1N I@5 };
sel.ge(4)       g82<4>F         g84<8,2,4>F     g86<8,2,4>F     { align1 WE_all 1N I@3 };
sel.ge(4)       g95<4>F         g97<8,2,4>F     g99<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g8.2<4>UD       g28<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g10.2<4>UD      g43<8,2,4>UD                    { align1 WE_all 1N F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g12.2<4>UD      g56<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g14.2<4>UD      g69<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g16.2<4>UD      g82<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g18.2<4>UD      g95<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g37<4>UD        g8.3<8,2,4>UD                   { align1 WE_all 1N I@6 };
mov(4)          g35<4>UD        g8.1<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g52<4>UD        g10.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g50<4>UD        g10.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g65<4>UD        g12.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g63<4>UD        g12.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g78<4>UD        g14.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g76<4>UD        g14.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g91<4>UD        g16.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g89<4>UD        g16.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g104<4>UD       g18.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g102<4>UD       g18.1<8,2,4>UD                  { align1 WE_all 1N $8.src };
sel.l(4)        g33<4>F         g35<8,2,4>F     g37<8,2,4>F     { align1 WE_all 1N };
sel.l(4)        g48<4>F         g50<8,2,4>F     g52<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g61<4>F         g63<8,2,4>F     g65<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g74<4>F         g76<8,2,4>F     g78<8,2,4>F     { align1 WE_all 1N I@5 };
sel.ge(4)       g87<4>F         g89<8,2,4>F     g91<8,2,4>F     { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.ge(4)       g100<4>F        g102<8,2,4>F    g104<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g8.3<4>UD       g33<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g10.3<4>UD      g48<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g12.3<4>UD      g61<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g14.3<4>UD      g74<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g16.3<4>UD      g87<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g18.3<4>UD      g100<8,2,4>UD                   { align1 WE_all 1N F@1 };
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
mov(8)          g27<1>UD        g23.1<8,4,2>UD                  { align1 1Q };
mov(8)          g28<1>UD        g25.1<8,4,2>UD                  { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(8)          g29<1>D         g23<8,4,2>D     g20<1,1,0>D     { align1 1Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@4 };
add(8)          g30<1>D         g25<8,4,2>D     g21<1,1,0>D     { align1 2Q compacted };
shr(16)         g21<1>UD        g40<1,1,0>UD    0x0000001eUD    { align1 1H $6.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(8)   g31<1>UD        g29<8,8,1>UD    g23<8,4,2>UD    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g115<2>UD       g29<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@4 };
cmp.l.f0.0(8)   g32<1>UD        g30<8,8,1>UD    g25<8,4,2>UD    { align1 2Q };
mov(8)          g117<2>UD       g30<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g35<1>UD        g40<1,1,0>UD    0x00000002UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add3(16)        g33<1>D         g27<8,8,1>D     g21<8,8,1>D     -g31<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g37<1>UD        g11.7<0,1,0>UD  g13.7<0,1,0>UD  { align1 1H };
mov(8)          g117.1<2>UD     g34<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g115.1<2>UD     g33<4,4,1>UD                    { align1 1Q I@3 };
cmp.l.f0.0(16)  g42<1>UD        g40<1,1,0>UD    0x00000001UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g119<1>UD       g9.7<0,1,0>UD   g37<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g44UD           g115UD          g119UD          0x08240595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $9 };
add(16)         g45<1>D         g29<1,1,0>D     16D             { align1 1H $9.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g47<1>UD        g45<1,1,0>UD    g29<1,1,0>UD    { align1 1H compacted };
mov(8)          g120<2>UD       g45<4,4,1>UD                    { align1 1Q $9.src };
mov(8)          g122<2>UD       g46<4,4,1>UD                    { align1 2Q };
cmp.nz.f0.0(16) null<1>D        g35<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g49<1>D         -g47<1,1,0>D    g33<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g51<1>UD        g17.7<0,1,0>UD  g19.7<0,1,0>UD  { align1 1H };
mov(8)          g122.1<2>UD     g50<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g120.1<2>UD     g49<4,4,1>UD                    { align1 1Q I@3 };
cmp.nz.f0.0(16) null<1>D        g42<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
(+f0.0) sel(16) g124<1>UD       g15.7<0,1,0>UD  g51<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g53UD           g120UD          g124UD          0x08240596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $8 };

LABEL9:
endif(16)       JIP:  LABEL10                                   { align1 1H };

LABEL10:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
mov(16)         acc0<1>F        0x0F             /* 0F */       { align1 WE_all 1H I@1 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_code[] = {
    0x80000065, 0x69058220, 0x02000004, 0xffffffc0,
    0x80030061, 0x0d054410, 0x00000000, 0x76543210,
    0x00040061, 0x36050220, 0x00000024, 0x00000000,
    0xe26a1b40, 0x00016903, 0xe26b0040, 0x04016903,
    0x640d1c40, 0x00800d95, 0x00041c69, 0x26058660,
    0x02463605, 0x00000004, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa006a0c, 0x00340000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa006b0c, 0x00300000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x28050160,
    0x00460d05, 0x00000000, 0xa02a1940, 0x28002602,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x1f260aa0, 0x000002a4, 0x00000000,
    0x00130061, 0x21260aa0, 0x000002a4, 0x00000000,
    0x00030061, 0x1b260aa0, 0x00000264, 0x00000000,
    0x00130061, 0x1d260aa0, 0x00000264, 0x00000000,
    0x21170061, 0x001102cc, 0x2a190061, 0x001102cc,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x21380061, 0x001103cc, 0x2a3a0061, 0x001103cc,
    0x00040065, 0x0a058220, 0x02000344, 0x00ffffff,
    0x211f1761, 0x0011025c, 0x2a211761, 0x0011025c,
    0x211b1761, 0x00110244, 0x2a1d1761, 0x00110244,
    0x21171761, 0x00110204, 0x2a191761, 0x00110204,
    0x21381761, 0x00110304, 0x2a3a1761, 0x00110304,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x24140000, 0xfb043824, 0x00040000,
    0x00033261, 0x39260aa0, 0x000002e4, 0x00000000,
    0x00133261, 0x3b260aa0, 0x000002e4, 0x00000000,
    0x21391261, 0x0011026c, 0x2a3b1261, 0x0011026c,
    0x0004a270, 0x00010220, 0x52462a05, 0x00462405,
    0x60231961, 0x00110340, 0x00041161, 0x25050020,
    0x0066231f, 0x00000000, 0x01040022, 0x0001c060,
    0x00000450, 0x000003e0, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x2c440000,
    0xfb043924, 0x003c0000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00032341, 0x20010220,
    0x01462a05, 0x00563006, 0x00042341, 0x36050660,
    0x01462a05, 0x00563006, 0x00040041, 0x7d050660,
    0x01462a05, 0x00563016, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00042341, 0x38050660,
    0x01462a05, 0x00563206, 0x3e340049, 0x30002a03,
    0x00041b40, 0x36160110, 0x01563616, 0x00567d06,
    0x00040041, 0x7e050660, 0x01462a05, 0x00563216,
    0x00130041, 0x20010220, 0x01462b05, 0x00563106,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa03c2340, 0x36002c02, 0x00041b40, 0x38160110,
    0x01563816, 0x00567e06, 0x00130049, 0x35050222,
    0x02462b05, 0x00463105, 0x273e1b70, 0x2c003c03,
    0x00030061, 0x50060220, 0x00343c05, 0x00000000,
    0x00130061, 0x52060220, 0x00343d05, 0x00000000,
    0xa04a0040, 0x01003c03, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa03a1d40, 0x38003402,
    0x274c1a70, 0x3c004a03, 0x00030061, 0x57060220,
    0x00344a05, 0x00000000, 0x00130061, 0x59060220,
    0x00344b05, 0x00000000, 0x0004c352, 0x40040e68,
    0x0e2e2e05, 0x3e053a05, 0x00131961, 0x52260220,
    0x00344105, 0x00000000, 0x00031a61, 0x50260220,
    0x00344005, 0x00000000, 0xa04e1e40, 0x40024c02,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x42440000, 0xfb045024, 0x003c0000,
    0x00131961, 0x59260220, 0x00344f05, 0x00000000,
    0x00031a61, 0x57260220, 0x00344e05, 0x00000000,
    0xe7512470, 0x7f834400, 0xe7532470, 0x7f834200,
    0x20551165, 0x53005103, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x50240000,
    0xfb045724, 0x000c0000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xe7572470, 0x7f834600,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x20590965, 0x57005503, 0xe75b2570, 0x7f835000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x276a0062, 0x50004400, 0x256e0062, 0x50004400,
    0xe75d2470, 0x7f834800, 0xe7612570, 0x7f835200,
    0x205f1265, 0x5d005b03, 0x20630965, 0x61005f03,
    0x20651965, 0x63005903, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00040961, 0x01062650,
    0x00466505, 0x00000000, 0x00041965, 0x67058110,
    0x01560106, 0x00010001, 0x00041961, 0x68050450,
    0x00686706, 0x00000000, 0x00041970, 0x73058550,
    0x25586805, 0x00000000, 0x00041961, 0x71050560,
    0x20467305, 0x00000000, 0x00040961, 0x02062650,
    0x00467105, 0x00000000, 0x01041462, 0x06058220,
    0x02466a05, 0x7f800000, 0x01041362, 0x0e058220,
    0x02466e05, 0xff800000, 0x25701b62, 0x52004600,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x27690062, 0x48004200, 0x276b1a62, 0x52004600,
    0x00041b61, 0x14050110, 0x00560206, 0x00000000,
    0x01041362, 0x10058220, 0x02467005, 0xff800000,
    0x01041262, 0x04058220, 0x02466905, 0x7f800000,
    0x01041162, 0x08058220, 0x02466b05, 0x7f800000,
    0x256c1962, 0x48004200, 0x01041162, 0x0c058220,
    0x02466c05, 0xff800000, 0x00040024, 0x0001c060,
    0x00000080, 0x00000080, 0x00041e61, 0x14054110,
    0x00000000, 0x00000000, 0x00041c61, 0x08054220,
    0x00000000, 0x7f800000, 0x00041f61, 0x06054220,
    0x00000000, 0x7f800000, 0x00041f61, 0x04054220,
    0x00000000, 0x7f800000, 0x00041f61, 0x10054220,
    0x00000000, 0xff800000, 0x00040061, 0x0e054220,
    0x00000000, 0xff800000, 0x00041f61, 0x0c054220,
    0x00000000, 0xff800000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x60741f65, 0x00101405,
    0x00041961, 0x75050450, 0x00687406, 0x00000000,
    0x80000961, 0x03064210, 0x00000000, 0x00000000,
    0x00041a70, 0x78058550, 0x25587505, 0x00000000,
    0x00041961, 0x76050560, 0x00467805, 0x00000000,
    0x80001b61, 0x30010110, 0x00000304, 0x00000000,
    0x00041a70, 0x00018220, 0x22467605, 0x00000000,
    0x00040061, 0x79050120, 0x00003000, 0x00000000,
    0x00040079, 0x7b058620, 0x06462805, 0x00000000,
    0x00041a4d, 0x5c050220, 0x00467905, 0x00000000,
    0x00040070, 0x00018660, 0x16462805, 0x00000000,
    0x207d1b65, 0x7b007903, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x0004094d, 0x01050220,
    0x00467d05, 0x00000000, 0x01040022, 0x0001c060,
    0x000000c0, 0x000000c0, 0xa1141740, 0x024e1703,
    0xaa151740, 0x024e1903, 0x00031a70, 0x23050220,
    0x52461405, 0x00441706, 0x00131a70, 0x24050220,
    0x52461505, 0x00441906, 0x00030061, 0x58060220,
    0x00341405, 0x00000000, 0x00130061, 0x5a060220,
    0x00341505, 0x00000000, 0x00031c40, 0x2c052660,
    0x06462305, 0x00441726, 0x00131c40, 0x2d052660,
    0x06462405, 0x00441926, 0x00031a61, 0x58260220,
    0x00342c05, 0x00000000, 0x00131a61, 0x5a260220,
    0x00342d05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x15140000,
    0xfb185824, 0x01005c14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0xa02eb640, 0x15100102,
    0x00040061, 0x00010660, 0x20467605, 0x00000000,
    0x01040022, 0x0001c060, 0x00000188, 0x00000188,
    0x00041b69, 0x30058660, 0x02462e05, 0x00000005,
    0x00030061, 0x33050220, 0x00441f26, 0x00000000,
    0x00130061, 0x34050220, 0x00442126, 0x00000000,
    0xa1351b40, 0x300e1f02, 0xaa361c40, 0x310e2102,
    0xe0310068, 0x01b02e03, 0x00040069, 0x2f058660,
    0x02462505, 0x0000001d, 0x00031c70, 0x37050220,
    0x52463505, 0x00441f06, 0x00033661, 0x5d060220,
    0x00343505, 0x00000000, 0x80103201, 0x00000000,
    0x00000000, 0x00000000, 0x00131d70, 0x38050220,
    0x52463605, 0x00442106, 0x00130061, 0x5f060220,
    0x00343605, 0x00000000, 0x20121d66, 0x2f002a03,
    0x00040b52, 0x39040e68, 0x0e2e3305, 0x37053105,
    0x00131961, 0x5f260220, 0x00343a05, 0x00000000,
    0x00031a61, 0x5d260220, 0x00343905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xfb0c5d24, 0x003c0444,
    0xa03c1240, 0x01003503, 0x273e1970, 0x35003c03,
    0x00033661, 0x5e060220, 0x00343c05, 0x00000000,
    0x00133661, 0x60060220, 0x00343d05, 0x00000000,
    0xa0401b40, 0x39023e02, 0x00131961, 0x60260220,
    0x00344105, 0x00000000, 0x00031a61, 0x5e260220,
    0x00344005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x00000000,
    0xfb0c5e24, 0x003c0c44, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x20433640, 0x0c000400,
    0x25490070, 0x04000c00, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x20453640, 0x0e000600,
    0xa3613761, 0x7f810000, 0x60610061, 0x00100400,
    0xa3630061, 0x7f810000, 0x60630061, 0x00100600,
    0xa3653661, 0x7f810000, 0x60650061, 0x00100800,
    0xa3670061, 0xff810000, 0x60670061, 0x00100c00,
    0xa3693061, 0xff810000, 0x60690061, 0x00100e00,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa36b3761, 0xff810000, 0x606b0061, 0x00101000,
    0x20470040, 0x10000800, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x01041762, 0x4b058220,
    0x02464305, 0x7f800000, 0x80031761, 0x1f060220,
    0x00446126, 0x00000000, 0x80030e61, 0x2f060220,
    0x00446326, 0x00000000, 0x80030d61, 0x3c060220,
    0x00446526, 0x00000000, 0x80031461, 0x53060220,
    0x00446726, 0x00000000, 0x80031361, 0x6d060220,
    0x00446926, 0x00000000, 0x80031261, 0x7a060220,
    0x00446b26, 0x00000000, 0x254d0070, 0x06000e00,
    0x80031e62, 0x14060aa0, 0x5a446106, 0x00441f06,
    0x80031d62, 0x2d060aa0, 0x5a446306, 0x00442f06,
    0x80031c62, 0x3a060aa0, 0x5a446506, 0x00443c06,
    0x80031b62, 0x51060aa0, 0x4a446706, 0x00445306,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80031a62, 0x5f060aa0, 0x4a446906, 0x00446d06,
    0x80031962, 0x78060aa0, 0x4a446b06, 0x00447a06,
    0x01040062, 0x4f058220, 0x02464505, 0x7f800000,
    0x80030e61, 0x61260220, 0x00441406, 0x00000000,
    0x80030d61, 0x63260220, 0x00442d06, 0x00000000,
    0x80030c61, 0x65260220, 0x00443a06, 0x00000000,
    0x80030b61, 0x67260220, 0x00445106, 0x00000000,
    0x80030a61, 0x69260220, 0x00445f06, 0x00000000,
    0x80030961, 0x6b260220, 0x00447806, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x25510070, 0x08001000, 0x80021e61, 0x24070220,
    0x00426147, 0x00000000, 0x80020061, 0x22070220,
    0x00426127, 0x00000000, 0x80021f61, 0x34070220,
    0x00426347, 0x00000000, 0x80020061, 0x32070220,
    0x00426327, 0x00000000, 0x80021f61, 0x41070220,
    0x00426547, 0x00000000, 0x80020061, 0x3f070220,
    0x00426527, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80021f61, 0x59070220,
    0x00426747, 0x00000000, 0x80023661, 0x57070220,
    0x00426727, 0x00000000, 0x80021f61, 0x72070220,
    0x00426947, 0x00000000, 0x80020061, 0x70070220,
    0x00426927, 0x00000000, 0x80020061, 0x01070220,
    0x00426b47, 0x00000000, 0x80020061, 0x7d070220,
    0x00426b27, 0x00000000, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x53058220,
    0x02464705, 0x7f800000, 0x80020062, 0x20070aa0,
    0x5a422207, 0x00422407, 0x80021f62, 0x30070aa0,
    0x5a423207, 0x00423407, 0x80021f62, 0x3d070aa0,
    0x5a423f07, 0x00424107, 0x80021e62, 0x55070aa0,
    0x4a425707, 0x00425907, 0x80021c62, 0x6e070aa0,
    0x4a427007, 0x00427207, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80021a62, 0x7b070aa0,
    0x4a427d07, 0x00420107, 0x00040070, 0x00018660,
    0x26464905, 0x00000000, 0x80021661, 0x61470220,
    0x00422007, 0x00000000, 0x80021561, 0x63470220,
    0x00423007, 0x00000000, 0x80021461, 0x65470220,
    0x00423d07, 0x00000000, 0x80021361, 0x67470220,
    0x00425507, 0x00000000, 0x80021261, 0x69470220,
    0x00426e07, 0x00000000, 0x80021161, 0x6b470220,
    0x00427b07, 0x00000000, 0x01040062, 0x55058220,
    0x02464305, 0xff800000, 0x80021f61, 0x2c070220,
    0x00426167, 0x00000000, 0x80020061, 0x2a070220,
    0x00426127, 0x00000000, 0x80021f61, 0x39070220,
    0x00426367, 0x00000000, 0x80023261, 0x37070220,
    0x00426327, 0x00000000, 0x80021f61, 0x49070220,
    0x00426527, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80021f61, 0x5e070220,
    0x00426767, 0x00000000, 0x80023661, 0x5c070220,
    0x00426727, 0x00000000, 0x80021f61, 0x77070220,
    0x00426967, 0x00000000, 0x80020061, 0x75070220,
    0x00426927, 0x00000000, 0x80020061, 0x06070220,
    0x00426b67, 0x00000000, 0x80020061, 0x04070220,
    0x00426b27, 0x00000000, 0x00040070, 0x00018660,
    0x26464d05, 0x00000000, 0x80020062, 0x25070aa0,
    0x5a422a07, 0x00422c07, 0x80021f62, 0x35070aa0,
    0x5a423707, 0x00423907, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80021e62, 0x5a070aa0,
    0x4a425c07, 0x00425e07, 0x80021c62, 0x73070aa0,
    0x4a427507, 0x00427707, 0x80101201, 0x00000000,
    0x00000000, 0x00000000, 0xaa5c0040, 0x080e1d03,
    0x80021b62, 0x02070aa0, 0x4a420407, 0x00420607,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x57058220, 0x02464505, 0xff800000,
    0x80021561, 0x61670220, 0x00422507, 0x00000000,
    0x80021461, 0x63670220, 0x00423507, 0x00000000,
    0x80020061, 0x4d070220, 0x00426567, 0x00000000,
    0x80021361, 0x67670220, 0x00425a07, 0x00000000,
    0x80021261, 0x69670220, 0x00427307, 0x00000000,
    0xa15b0040, 0x080e1b03, 0x80021161, 0x6b670220,
    0x00420207, 0x00000000, 0x00040070, 0x00018660,
    0x26465105, 0x00000000, 0x80021f62, 0x61850aa0,
    0x5a006164, 0x00346185, 0x80021f62, 0x62850aa0,
    0x5a006264, 0x00346285, 0x80021f62, 0x63850aa0,
    0x5a006364, 0x00346385, 0x80021f62, 0x64850aa0,
    0x5a006464, 0x00346485, 0x80021e62, 0x42070aa0,
    0x5a424907, 0x00424d07, 0x80021d62, 0x67850aa0,
    0x4a006764, 0x00346785, 0x80021d62, 0x68850aa0,
    0x4a006864, 0x00346885, 0x80021c62, 0x69850aa0,
    0x4a006964, 0x00346985, 0x80021c62, 0x6a850aa0,
    0x4a006a64, 0x00346a85, 0x80021a62, 0x6b850aa0,
    0x4a006b64, 0x00346b85, 0x80021a62, 0x6c850aa0,
    0x4a006c64, 0x00346c85, 0x01040062, 0x59058220,
    0x02464705, 0xff800000, 0x80031762, 0x62050aa0,
    0x5a0061e4, 0x00466205, 0x80031762, 0x64050aa0,
    0x5a0063e4, 0x00466405, 0x80021761, 0x65670220,
    0x00424207, 0x00000000, 0x80031762, 0x68050aa0,
    0x4a0067e4, 0x00466805, 0x80031662, 0x6a050aa0,
    0x4a0069e4, 0x00466a05, 0x80031562, 0x6c050aa0,
    0x4a006be4, 0x00466c05, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00030070, 0x5d050220,
    0x52465b05, 0x00441b06, 0x00130070, 0x5e050220,
    0x52465c05, 0x00441d06, 0x00040070, 0x00018220,
    0x52462805, 0x00000003, 0x80021c62, 0x65850aa0,
    0x5a006564, 0x00346585, 0x80021c62, 0x66850aa0,
    0x5a006664, 0x00346685, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00030040, 0x5f052660,
    0x06465d05, 0x00441b26, 0x00131b40, 0x60052660,
    0x06465e05, 0x00441d26, 0x80031162, 0x66050aa0,
    0x5a0065e4, 0x00466605, 0x01040022, 0x0001c060,
    0x00000240, 0x00000240, 0x00040069, 0x6d058660,
    0x02462805, 0x00000002, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0700040, 0x6d005b02,
    0xe06e0068, 0x01e02803, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x27720070, 0x5b007003,
    0xe7760070, 0x00202803, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x74040e68,
    0x0e2e5f05, 0x72056e05, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x78050220,
    0x020064e4, 0x000066e4, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0xe77a0070, 0x00102803,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x63060220, 0x00347005, 0x00000000,
    0x80101101, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x65060220, 0x00347105, 0x00000000,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x2f6d0062, 0x78016283, 0x00031b61, 0x63260220,
    0x00347405, 0x00000000, 0x00131b61, 0x65260220,
    0x00347505, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x7c140000,
    0xfb2a6324, 0x01006d14, 0xa07d2840, 0x00c07003,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x27010070, 0x70007d03, 0x00040070, 0x00018660,
    0x26467605, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xa0030040, 0x74020102,
    0x80001401, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x05050220, 0x02006ae4, 0x00006ce4,
    0x00033861, 0x6e060220, 0x00347d05, 0x00000000,
    0x00130061, 0x70060220, 0x00347e05, 0x00000000,
    0x00040070, 0x00018660, 0x26467a05, 0x00000000,
    0x00031b61, 0x6e260220, 0x00340305, 0x00000000,
    0x00131b61, 0x70260220, 0x00340405, 0x00000000,
    0x80000e01, 0x00000000, 0x00000000, 0x00000000,
    0x2f720062, 0x05016883, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x07140000,
    0xfb2c6e24, 0x01007214, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0xa3082961, 0x7f810000,
    0x60080061, 0x00104b00, 0xa30a3661, 0x7f810000,
    0x600a0061, 0x00104f00, 0xa30c0061, 0x7f810000,
    0x600c0061, 0x00105300, 0xa30e0061, 0xff810000,
    0x600e0061, 0x00105500, 0xa3100061, 0xff810000,
    0x60100061, 0x00105700, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0xa3121f61, 0xff810000,
    0x60120061, 0x00105900, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00040070, 0x00018220,
    0x52462805, 0x00000003, 0x80031661, 0x1b060220,
    0x00440826, 0x00000000, 0x80031561, 0x2a060220,
    0x00440a26, 0x00000000, 0x80031461, 0x37060220,
    0x00440c26, 0x00000000, 0x80031361, 0x44060220,
    0x00440e26, 0x00000000, 0x80031261, 0x51060220,
    0x00441026, 0x00000000, 0x80030961, 0x5e060220,
    0x00441226, 0x00000000, 0x80031e62, 0x14060aa0,
    0x5a440806, 0x00441b06, 0x80031d62, 0x26060aa0,
    0x5a440a06, 0x00442a06, 0x80031c62, 0x35060aa0,
    0x5a440c06, 0x00443706, 0x80031b62, 0x42060aa0,
    0x4a440e06, 0x00444406, 0x80031a62, 0x4f060aa0,
    0x4a441006, 0x00445106, 0x80031962, 0x5c060aa0,
    0x4a441206, 0x00445e06, 0x80030e61, 0x08260220,
    0x00441406, 0x00000000, 0x80030d61, 0x0a260220,
    0x00442606, 0x00000000, 0x80030c61, 0x0c260220,
    0x00443506, 0x00000000, 0x80030b61, 0x0e260220,
    0x00444206, 0x00000000, 0x80030a61, 0x10260220,
    0x00444f06, 0x00000000, 0x80030961, 0x12260220,
    0x00445c06, 0x00000000, 0x80021e61, 0x20070220,
    0x00420847, 0x00000000, 0x80020061, 0x1e070220,
    0x00420827, 0x00000000, 0x80021f61, 0x2f070220,
    0x00420a47, 0x00000000, 0x80020061, 0x2d070220,
    0x00420a27, 0x00000000, 0x80021f61, 0x3c070220,
    0x00420c47, 0x00000000, 0x80020061, 0x3a070220,
    0x00420c27, 0x00000000, 0x80021f61, 0x49070220,
    0x00420e47, 0x00000000, 0x80020061, 0x47070220,
    0x00420e27, 0x00000000, 0x80020f61, 0x56070220,
    0x00421047, 0x00000000, 0x80021761, 0x54070220,
    0x00421027, 0x00000000, 0x80023861, 0x63070220,
    0x00421247, 0x00000000, 0x80020061, 0x61070220,
    0x00421227, 0x00000000, 0x80020062, 0x1c070aa0,
    0x5a421e07, 0x00422007, 0x80021f62, 0x2b070aa0,
    0x5a422d07, 0x00422f07, 0x80021f62, 0x38070aa0,
    0x5a423a07, 0x00423c07, 0x80021d62, 0x45070aa0,
    0x4a424707, 0x00424907, 0x80021b62, 0x52070aa0,
    0x4a425407, 0x00425607, 0x80021962, 0x5f070aa0,
    0x4a426107, 0x00426307, 0x80021661, 0x08470220,
    0x00421c07, 0x00000000, 0x80021561, 0x0a470220,
    0x00422b07, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80021461, 0x0c470220,
    0x00423807, 0x00000000, 0x80021361, 0x0e470220,
    0x00424507, 0x00000000, 0x80021261, 0x10470220,
    0x00425207, 0x00000000, 0x80021161, 0x12470220,
    0x00425f07, 0x00000000, 0x80021e61, 0x25070220,
    0x00420867, 0x00000000, 0x80020061, 0x23070220,
    0x00420827, 0x00000000, 0x80021f61, 0x34070220,
    0x00420a67, 0x00000000, 0x80020061, 0x32070220,
    0x00420a27, 0x00000000, 0x80021f61, 0x41070220,
    0x00420c67, 0x00000000, 0x80020061, 0x3f070220,
    0x00420c27, 0x00000000, 0x80021f61, 0x4e070220,
    0x00420e67, 0x00000000, 0x80020061, 0x4c070220,
    0x00420e27, 0x00000000, 0x80021f61, 0x5b070220,
    0x00421067, 0x00000000, 0x80020061, 0x59070220,
    0x00421027, 0x00000000, 0x80020061, 0x68070220,
    0x00421267, 0x00000000, 0x80023861, 0x66070220,
    0x00421227, 0x00000000, 0x80020062, 0x21070aa0,
    0x5a422307, 0x00422507, 0x80021f62, 0x30070aa0,
    0x5a423207, 0x00423407, 0x80021f62, 0x3d070aa0,
    0x5a423f07, 0x00424107, 0x80021d62, 0x4a070aa0,
    0x4a424c07, 0x00424e07, 0x80021b62, 0x57070aa0,
    0x4a425907, 0x00425b07, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x64070aa0,
    0x4a426607, 0x00426807, 0x80021661, 0x08670220,
    0x00422107, 0x00000000, 0x80021561, 0x0a670220,
    0x00423007, 0x00000000, 0x80021461, 0x0c670220,
    0x00423d07, 0x00000000, 0x80021361, 0x0e670220,
    0x00424a07, 0x00000000, 0x80021261, 0x10670220,
    0x00425707, 0x00000000, 0x80021161, 0x12670220,
    0x00426407, 0x00000000, 0x80021e62, 0x08850aa0,
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
    0x00000290, 0x00000290, 0x00040069, 0x14058660,
    0x02462805, 0x00000002, 0x00030061, 0x1b050220,
    0x00441726, 0x00000000, 0x00130061, 0x1c050220,
    0x00441926, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0xa11d1b40, 0x140e1702,
    0x80101c01, 0x00000000, 0x00000000, 0x00000000,
    0xaa1e0040, 0x150e1902, 0xe0152668, 0x01e02803,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00030070, 0x1f050220, 0x52461d05, 0x00441706,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x73060220, 0x00341d05, 0x00000000,
    0x80101c01, 0x00000000, 0x00000000, 0x00000000,
    0x00130070, 0x20050220, 0x52461e05, 0x00441906,
    0x00130061, 0x75060220, 0x00341e05, 0x00000000,
    0xe7230070, 0x00202803, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x21040e68,
    0x0e2e1b05, 0x1f051505, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x25050220,
    0x02000be4, 0x00000de4, 0x00131a61, 0x75260220,
    0x00342205, 0x00000000, 0x00031b61, 0x73260220,
    0x00342105, 0x00000000, 0xe72a0070, 0x00102803,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x2f770062, 0x25010983, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x2c140000,
    0xfb2a7324, 0x01007714, 0xa02d2940, 0x01001d03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x272f0070, 0x1d002d03, 0x00033961, 0x78060220,
    0x00342d05, 0x00000000, 0x00130061, 0x7a060220,
    0x00342e05, 0x00000000, 0x00040070, 0x00018660,
    0x26462305, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0310040, 0x21022f02,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x33050220, 0x020011e4, 0x000013e4,
    0x00131a61, 0x7a260220, 0x00343205, 0x00000000,
    0x00031b61, 0x78260220, 0x00343105, 0x00000000,
    0x00040070, 0x00018660, 0x26462a05, 0x00000000,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0x2f7c0062, 0x33010f83, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x35140000,
    0xfb2c7824, 0x01007c14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80030061, 0x7e050220,
    0x00460005, 0x00000000, 0x80041961, 0x20014aa0,
    0x00000000, 0x00000000, 0x80040931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_primref_procedurals_to_primrefs_indirect = {
   .prog_data = {
      .base.nr_params = 19,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 3,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 7296,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_relocs,
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
   .args = gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_args,
   .code = gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_code,
};
const char *gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_sha1 = "a998b6c5604e414fa0b578b52ab55511a90cd91b";

#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_primref_procedurals_to_primrefs_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_primref_procedurals_to_primrefs_printfs[] = {
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

and(1)          g8<1>UD         g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g4<1>UD         g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g8UD            nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
add(1)          g9<1>UD         g8<0,1,0>UD     0x00000040UD    { align1 WE_all 1N $0.src compacted };
mov(8)          g28<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g24<1>D         g4<8,8,1>D      0x00000004UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g3UD            g9UD            nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
add(8)          g28.8<1>UW      g28<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g26<1>UD        g28<8,8,1>UW                    { align1 1H };
add(16)         g29<1>D         g24<1,1,0>D     g26<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
cmp.l.f0.0(16)  null<1>UD       g29<8,8,1>UD    g3.1<0,1,0>UD   { align1 1H I@1 };
mov(16)         g23<1>UD        g3.3<0,1,0>UB                   { align1 1H };
and(16)         g10<1>UD        g3<0,1,0>UD     0x00ffffffUD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g44.1<2>D       g2.7<0,1,0>D                    { align1 1Q };
mov(8)          g46.1<2>D       g2.7<0,1,0>D                    { align1 2Q };
mov(8)          g44<2>D         g2.6<0,1,0>D                    { align1 1Q I@2 };
mov(8)          g46<2>D         g2.6<0,1,0>D                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g31UD           g44UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mul(8)          acc0<1>UD       g29<8,8,1>UD    g35<16,8,2>UW   { align1 1Q $2.dst };
mul(16)         g41<1>D         g29<8,8,1>D     g35<16,8,2>UW   { align1 1H $2.dst };
mul(16)         g50<1>D         g29<8,8,1>D     g35.1<16,8,2>UW { align1 1H };
mul(16)         g43<1>D         g29<8,8,1>D     g37<16,8,2>UW   { align1 1H $2.dst };
mach(8)         g39<1>UD        g29<1,1,0>UD    g35<1,1,0>UD    { align1 1Q compacted AccWrEnable };
add(16)         g41.1<2>UW      g41.1<16,8,2>UW g50<16,8,2>UW   { align1 1H I@3 };
mul(16)         g51<1>D         g29<8,8,1>D     g37.1<16,8,2>UW { align1 1H };
mul(8)          acc0<1>UD       g30<8,8,1>UD    g36<16,8,2>UW   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g47<1>D         g31<1,1,0>D     g41<1,1,0>D     { align1 1H $2.dst compacted };
add(16)         g43.1<2>UW      g43.1<16,8,2>UW g51<16,8,2>UW   { align1 1H I@3 };
mach(8)         g40<1>UD        g30<8,8,1>UD    g36<8,8,1>UD    { align1 2Q AccWrEnable };
cmp.l.f0.0(16)  g49<1>UD        g47<1,1,0>UD    g31<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g53<2>UD        g47<4,4,1>UD                    { align1 1Q };
mov(8)          g55<2>UD        g48<4,4,1>UD                    { align1 2Q };
add(16)         g65<1>D         g47<1,1,0>D     16D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g45<1>D         g39<1,1,0>D     g43<1,1,0>D     { align1 1H I@5 compacted };
cmp.l.f0.0(16)  g67<1>UD        g65<1,1,0>UD    g47<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g71<2>UD        g65<4,4,1>UD                    { align1 1Q };
mov(8)          g73<2>UD        g66<4,4,1>UD                    { align1 2Q };
add3(16)        g51<1>D         g33<8,8,1>D     g45<8,8,1>D     -g49<1,1,1>D { align1 1H @4 $2.dst };
mov(8)          g55.1<2>UD      g52<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g53.1<2>UD      g51<4,4,1>UD                    { align1 1Q I@2 };
add(16)         g69<1>D         -g67<1,1,0>D    g51<1,1,0>D     { align1 1H I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g57UD           g53UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov(8)          g73.1<2>UD      g70<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g71.1<2>UD      g69<4,4,1>UD                    { align1 1Q I@2 };
cmp.l.f0.0(16)  g76<1>F         (abs)g59<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $3.dst compacted };
cmp.l.f0.0(16)  g78<1>F         (abs)g57<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $3.dst compacted };
cmp.l.f0.0(16)  g82<1>F         (abs)g61<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $3.dst compacted };
and(16)         g80<1>UD        g76<1,1,0>UD    g78<1,1,0>UD    { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g75UD           g71UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
and(16)         g84<1>UD        g80<1,1,0>UD    g82<1,1,0>UD    { align1 1H A@1 compacted };
cmp.l.f0.0(16)  g86<1>F         (abs)g75<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $4.dst compacted };
sel.l(16)       g98<1>F         g59<1,1,0>F     g75<1,1,0>F     { align1 1H compacted };
sel.ge(16)      g102<1>F        g59<1,1,0>F     g75<1,1,0>F     { align1 1H compacted };
sel.ge(16)      g104<1>F        g61<1,1,0>F     g77<1,1,0>F     { align1 1H $4.dst compacted };
cmp.l.f0.0(16)  g88<1>F         (abs)g63<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $3.dst compacted };
cmp.l.f0.0(16)  g92<1>F         (abs)g77<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
and(16)         g90<1>UD        g86<1,1,0>UD    g88<1,1,0>UD    { align1 1H F@2 compacted };
and(16)         g94<1>UD        g90<1,1,0>UD    g92<1,1,0>UD    { align1 1H A@1 compacted };
and.nz.f0.0(16) g96<1>UD        g84<1,1,0>UD    g94<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g52<2>W         -g96<8,8,1>D                    { align1 1H I@1 };
(+f0.0) sel(16) g6<1>UD         g98<8,8,1>UD    0x7f800000UD    { align1 1H F@5 };
(+f0.0) sel(16) g16<1>UD        g104<8,8,1>UD   0xff800000UD    { align1 1H F@3 };
(+f0.0) sel(16) g14<1>UD        g102<8,8,1>UD   0xff800000UD    { align1 1H F@4 };
sel.l(16)       g97<1>F         g57<1,1,0>F     g63<1,1,0>F     { align1 1H I@3 compacted };
sel.l(16)       g99<1>F         g61<1,1,0>F     g77<1,1,0>F     { align1 1H I@3 compacted };
mov(16)         g20<1>UW        g52<16,8,2>UW                   { align1 1H I@4 };
(+f0.0) sel(16) g4<1>UD         g97<8,8,1>UD    0x7f800000UD    { align1 1H F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
(+f0.0) sel(16) g8<1>UD         g99<8,8,1>UD    0x7f800000UD    { align1 1H F@1 };
sel.ge(16)      g100<1>F        g57<1,1,0>F     g63<1,1,0>F     { align1 1H I@1 compacted };
(+f0.0) sel(16) g12<1>UD        g100<8,8,1>UD   0xff800000UD    { align1 1H F@1 };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g20<1>UW        0x0000UW                        { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
mov(16)         g8<1>UD         0x7f800000UD                    { align1 1H };
mov(16)         g6<1>UD         0x7f800000UD                    { align1 1H I@7 };
mov(16)         g4<1>UD         0x7f800000UD                    { align1 1H I@7 };
mov(16)         g16<1>UD        0xff800000UD                    { align1 1H };
mov(16)         g14<1>UD        0xff800000UD                    { align1 1H };
mov(16)         g12<1>UD        0xff800000UD                    { align1 1H I@7 };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
and(16)         g105<1>UW       g20<1,1,0>UW    0x0001UW        { align1 1H I@6 compacted };
cmp.nz.f0.0(16) g108<1>W        g105<16,16,1>W  0W              { align1 1H I@1 };
mov(16)         g106<1>D        g108<8,8,1>W                    { align1 1H I@1 };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g106<8,8,1>UD   0x00000000UD    { align1 1H I@2 };
mov(16)         g109<1>UD       f0<0,1,0>UW                     { align1 1H };
bfi1(16)        g111<1>UD       g26<8,8,1>D     0D              { align1 1H };
cbit(16)        g45<1>UD        g109<8,8,1>UD                   { align1 1H I@2 };
cmp.z.f0.0(16)  null<1>D        g26<8,8,1>D     0D              { align1 1H };
and(16)         g113<1>UD       g109<1,1,0>UD   g111<1,1,0>UD   { align1 1H I@3 compacted };
cbit(16)        g115<1>UD       g113<8,8,1>UD                   { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g117<1>D        g2<0,1,0>D      36D             { align1 1H compacted };
cmp.l.f0.0(16)  g119<1>UD       g117<1,1,0>UD   g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g123<2>UD       g117<4,4,1>UD                   { align1 1Q };
mov(8)          g125<2>UD       g118<4,4,1>UD                   { align1 2Q };
add(16)         g121<1>D        -g119<1,1,0>D   g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g123.1<2>UD     g121<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g125.1<2>UD     g122<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g21UD           g123UD          g45UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $5 };

LABEL3:
endif(16)       JIP:  LABEL4                                    { align1 1H };

LABEL4:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g124<1>D        g115<1,1,0>D    g21<0,1,0>D     { align1 1H $5.dst compacted };
mov.nz.f0.0(16) null<1>D        g106<8,8,1>D                    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL5              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
shl(16)         g126<1>D        g124<8,8,1>D    0x00000005UD    { align1 1H I@3 };
shr(16)         g20<1>UD        g124<1,1,0>UD   0x0000001bUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g31<1>D         g2.4<0,1,0>D    g126<1,1,0>D    { align1 1H I@2 compacted };
shl(16)         g125<1>D        g23<8,8,1>D     0x0000001dUD    { align1 1H };
cmp.l.f0.0(16)  g33<1>UD        g31<1,1,0>UD    g2.4<0,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g37<2>UD        g31<4,4,1>UD                    { align1 1Q };
mov(8)          g39<2>UD        g32<4,4,1>UD                    { align1 2Q };
or(16)          g18<1>UD        g29<1,1,0>UD    g125<1,1,0>UD   { align1 1H I@4 compacted };
add3(16)        g35<1>D         g2.5<0,1,0>D    g20<8,8,1>D     -g33<1,1,1>D { align1 1H I@4 };
mov(8)          g39.1<2>UD      g36<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g37.1<2>UD      g35<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g37UD           g4UD            0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $6 };
add(16)         g38<1>D         g31<1,1,0>D     16D             { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g40<1>UD        g38<1,1,0>UD    g31<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g44<2>UD        g38<4,4,1>UD                    { align1 1Q $5.src };
mov(8)          g46<2>UD        g39<4,4,1>UD                    { align1 2Q $5.src };
add(16)         g42<1>D         -g40<1,1,0>D    g35<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g46.1<2>UD      g43<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g44.1<2>UD      g42<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g44UD           g12UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $5 };

LABEL5:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g45<1>F         g4<1,1,0>F      g12<1,1,0>F     { align1 1H I@7 compacted };
cmp.ge.f0.0(16) g51<1>F         g12<1,1,0>F     g4<1,1,0>F      { align1 1H compacted };
mov(16)         g20<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@4 compacted };
mov(16)         g20<1>F         g4<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g22<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H $5.dst compacted };
mov(16)         g22<1>F         g6<1,1,0>F                      { align1 1H compacted };
mov(16)         g24<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H $6.src compacted };
mov(16)         g24<1>F         g8<1,1,0>F                      { align1 1H compacted };
mov(16)         g28<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g28<1>F         g12<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g30<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@7 compacted };
mov(16)         g30<1>F         g14<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g32<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@7 compacted };
mov(16)         g32<1>F         g16<1,1,0>F                     { align1 1H compacted };
add(16)         g47<1>F         g6<1,1,0>F      g14<1,1,0>F     { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g49<1>F         g8<1,1,0>F      g16<1,1,0>F     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
(+f0.0) sel(16) g53<1>UD        g45<8,8,1>UD    0x7f800000UD    { align1 1H F@7 };
mov(8)          g59<2>UD        g20.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
mov(8)          g75<2>UD        g22.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
mov(8)          g88<2>UD        g24.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
mov(8)          g101<2>UD       g28.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g114<2>UD       g30.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g34<2>UD        g32.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
cmp.ge.f0.0(16) g55<1>F         g14<1,1,0>F     g6<1,1,0>F      { align1 1H $3.src compacted };
sel.l(8)        g57<2>F         g20<8,4,2>F     g59<8,4,2>F     { align1 WE_all 1Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.l(8)        g73<2>F         g22<8,4,2>F     g75<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.l(8)        g86<2>F         g24<8,4,2>F     g88<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.ge(8)       g99<2>F         g28<8,4,2>F     g101<8,4,2>F    { align1 WE_all 1Q I@3 };
sel.ge(8)       g112<2>F        g30<8,4,2>F     g114<8,4,2>F    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.ge(8)       g125<2>F        g32<8,4,2>F     g34<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g20.1<2>UD      g57<8,4,2>UD                    { align1 WE_all 1Q A@6 };
mov(8)          g22.1<2>UD      g73<8,4,2>UD                    { align1 WE_all 1Q A@5 };
mov(8)          g24.1<2>UD      g86<8,4,2>UD                    { align1 WE_all 1Q A@4 };
(+f0.0) sel(16) g57<1>UD        g47<8,8,1>UD    0x7f800000UD    { align1 1H F@7 };
mov(8)          g28.1<2>UD      g99<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g30.1<2>UD      g112<8,4,2>UD                   { align1 WE_all 1Q A@2 };
mov(8)          g32.1<2>UD      g125<8,4,2>UD                   { align1 WE_all 1Q A@1 };
mov(4)          g67<4>UD        g20.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g65<4>UD        g20.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g80<4>UD        g22.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g78<4>UD        g22.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g93<4>UD        g24.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g91<4>UD        g24.1<8,2,4>UD                  { align1 WE_all 1N };
cmp.ge.f0.0(16) g59<1>F         g16<1,1,0>F     g8<1,1,0>F      { align1 1H compacted };
mov(4)          g106<4>UD       g28.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g104<4>UD       g28.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g119<4>UD       g30.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g117<4>UD       g30.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g39<4>UD        g32.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g37<4>UD        g32.1<8,2,4>UD                  { align1 WE_all 1N $6.src };
sel.l(4)        g63<4>F         g65<8,2,4>F     g67<8,2,4>F     { align1 WE_all 1N };
sel.l(4)        g76<4>F         g78<8,2,4>F     g80<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g89<4>F         g91<8,2,4>F     g93<8,2,4>F     { align1 WE_all 1N I@7 };
(+f0.0) sel(16) g61<1>UD        g49<8,8,1>UD    0x7f800000UD    { align1 1H };
sel.ge(4)       g102<4>F        g104<8,2,4>F    g106<8,2,4>F    { align1 WE_all 1N I@6 };
sel.ge(4)       g115<4>F        g117<8,2,4>F    g119<8,2,4>F    { align1 WE_all 1N I@4 };
sel.ge(4)       g35<4>F         g37<8,2,4>F     g39<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g20.2<4>UD      g63<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g22.2<4>UD      g76<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g24.2<4>UD      g89<8,2,4>UD                    { align1 WE_all 1N F@4 };
cmp.nz.f0.0(16) null<1>D        g51<8,8,1>D     0D              { align1 1H };
mov(4)          g28.2<4>UD      g102<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g30.2<4>UD      g115<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g32.2<4>UD      g35<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g72<4>UD        g20.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g70<4>UD        g20.1<8,2,4>UD                  { align1 WE_all 1N $4.src };
mov(4)          g85<4>UD        g22.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g83<4>UD        g22.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g98<4>UD        g24.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g96<4>UD        g24.1<8,2,4>UD                  { align1 WE_all 1N };
(+f0.0) sel(16) g63<1>UD        g45<8,8,1>UD    0xff800000UD    { align1 1H };
mov(4)          g111<4>UD       g28.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g109<4>UD       g28.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g124<4>UD       g30.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g122<4>UD       g30.1<8,2,4>UD                  { align1 WE_all 1N $5.src };
mov(4)          g42<4>UD        g32.1<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g68<4>F         g70<8,2,4>F     g72<8,2,4>F     { align1 WE_all 1N };
sel.l(4)        g81<4>F         g83<8,2,4>F     g85<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g94<4>F         g96<8,2,4>F     g98<8,2,4>F     { align1 WE_all 1N I@7 };
cmp.nz.f0.0(16) null<1>D        g55<8,8,1>D     0D              { align1 1H };
sel.ge(4)       g107<4>F        g109<8,2,4>F    g111<8,2,4>F    { align1 WE_all 1N I@5 };
sel.ge(4)       g120<4>F        g122<8,2,4>F    g124<8,2,4>F    { align1 WE_all 1N I@3 };
mov(4)          g44<4>UD        g32.3<8,2,4>UD                  { align1 WE_all 1N $5.src };
mov(4)          g20.3<4>UD      g68<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g22.3<4>UD      g81<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g24.3<4>UD      g94<8,2,4>UD                    { align1 WE_all 1N F@3 };
(+f0.0) sel(16) g65<1>UD        g47<8,8,1>UD    0xff800000UD    { align1 1H };
mov(4)          g28.3<4>UD      g107<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g30.3<4>UD      g120<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.ge(4)       g40<4>F         g42<8,2,4>F     g44<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g20.4<1>F       g20.3<0,1,0>F   g20.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.l(4)        g21.4<1>F       g21.3<0,1,0>F   g21.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.l(4)        g22.4<1>F       g22.3<0,1,0>F   g22.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.l(4)        g23.4<1>F       g23.3<0,1,0>F   g23.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.l(4)        g24.4<1>F       g24.3<0,1,0>F   g24.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g25.4<1>F       g25.3<0,1,0>F   g25.4<4,4,1>F   { align1 WE_all 1N I@4 };
cmp.nz.f0.0(16) null<1>D        g59<8,8,1>D     0D              { align1 1H };
sel.ge(4)       g28.4<1>F       g28.3<0,1,0>F   g28.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g29.4<1>F       g29.3<0,1,0>F   g29.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g30.4<1>F       g30.3<0,1,0>F   g30.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g31.4<1>F       g31.3<0,1,0>F   g31.4<4,4,1>F   { align1 WE_all 1N I@2 };
mov(4)          g32.3<4>UD      g40<8,2,4>UD                    { align1 WE_all 1N };
sel.l(8)        g21<1>F         g20.7<0,1,0>F   g21<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.l(8)        g23<1>F         g22.7<0,1,0>F   g23<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.l(8)        g25<1>F         g24.7<0,1,0>F   g25<8,8,1>F     { align1 WE_all 1Q F@7 };
(+f0.0) sel(16) g67<1>UD        g49<8,8,1>UD    0xff800000UD    { align1 1H };
sel.ge(8)       g29<1>F         g28.7<0,1,0>F   g29<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.ge(8)       g31<1>F         g30.7<0,1,0>F   g31<8,8,1>F     { align1 WE_all 1Q F@5 };
sel.ge(4)       g32.4<1>F       g32.3<0,1,0>F   g32.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g33.4<1>F       g33.3<0,1,0>F   g33.4<4,4,1>F   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  null<1>UD       g26<8,8,1>UD    0x00000003UD    { align1 1H };
sel.ge(8)       g33<1>F         g32.7<0,1,0>F   g33<8,8,1>F     { align1 WE_all 1Q F@1 };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g69<1>D         g2.2<0,1,0>D    128D            { align1 1H compacted };
shl(16)         g74<1>D         g26<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g71<1>UD        g69<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g77<1>D         g69<1,1,0>D     g74<1,1,0>D     { align1 1H compacted };
shr(16)         g75<1>UD        g26<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g73<1>D         -g71<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g79<1>UD        g77<1,1,0>UD    g69<1,1,0>UD    { align1 1H compacted };
mov(8)          g83<2>UD        g77<4,4,1>UD                    { align1 1Q };
mov(8)          g85<2>UD        g78<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g87<1>UD        g26<1,1,0>UD    0x00000002UD    { align1 1H compacted };
add3(16)        g81<1>D         g73<8,8,1>D     g75<8,8,1>D     -g79<1,1,1>D { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
(+f0.0) sel(16) g89<1>UD        g23.7<0,1,0>UD  g25.7<0,1,0>UD  { align1 1H };
mov(8)          g85.1<2>UD      g82<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g83.1<2>UD      g81<4,4,1>UD                    { align1 1Q I@3 };
cmp.l.f0.0(16)  g91<1>UD        g26<1,1,0>UD    0x00000001UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g46<1>UD        g21.7<0,1,0>UD  g89<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g83UD           g46UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $7 };
add(16)         g93<1>D         g77<1,1,0>D     12D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g95<1>UD        g93<1,1,0>UD    g77<1,1,0>UD    { align1 1H compacted };
cmp.nz.f0.0(16) null<1>D        g87<8,8,1>D     0D              { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g97<1>D         -g95<1,1,0>D    g81<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g100<1>UD       g31.7<0,1,0>UD  g33.7<0,1,0>UD  { align1 1H };
cmp.nz.f0.0(16) null<1>D        g91<8,8,1>D     0D              { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
(+f0.0) sel(16) g47<1>UD        g29.7<0,1,0>UD  g100<1,1,0>UD   { align1 1H $7.src compacted };
mov(8)          g99<2>UD        g93<4,4,1>UD                    { align1 1Q };
mov(8)          g101<2>UD       g94<4,4,1>UD                    { align1 2Q };
mov(8)          g99.1<2>UD      g97<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g101.1<2>UD     g98<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g99UD           g47UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };

LABEL7:
endif(16)       JIP:  LABEL8                                    { align1 1H };

LABEL8:
mov(16)         g33<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@1 compacted };
mov(16)         g33<1>F         g53<1,1,0>F                     { align1 1H compacted };
mov(16)         g35<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g35<1>F         g57<1,1,0>F                     { align1 1H compacted };
mov(16)         g37<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g37<1>F         g61<1,1,0>F                     { align1 1H compacted };
mov(16)         g39<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@5 compacted };
mov(16)         g39<1>F         g63<1,1,0>F                     { align1 1H compacted };
mov(16)         g41<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@5 compacted };
mov(16)         g41<1>F         g65<1,1,0>F                     { align1 1H compacted };
mov(16)         g43<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g43<1>F         g67<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
cmp.l.f0.0(16)  null<1>UD       g26<8,8,1>UD    0x00000003UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g47<2>UD        g33.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
mov(8)          g69<2>UD        g35.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g82<2>UD        g37.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g95<2>UD        g39.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g108<2>UD       g41.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g121<2>UD       g43.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.l(8)        g45<2>F         g33<8,4,2>F     g47<8,4,2>F     { align1 WE_all 1Q I@6 };
sel.l(8)        g58<2>F         g35<8,4,2>F     g69<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.l(8)        g80<2>F         g37<8,4,2>F     g82<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.ge(8)       g93<2>F         g39<8,4,2>F     g95<8,4,2>F     { align1 WE_all 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.ge(8)       g106<2>F        g41<8,4,2>F     g108<8,4,2>F    { align1 WE_all 1Q I@2 };
sel.ge(8)       g119<2>F        g43<8,4,2>F     g121<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g33.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q A@6 };
mov(8)          g35.1<2>UD      g58<8,4,2>UD                    { align1 WE_all 1Q A@5 };
mov(8)          g37.1<2>UD      g80<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g39.1<2>UD      g93<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g41.1<2>UD      g106<8,4,2>UD                   { align1 WE_all 1Q A@2 };
mov(8)          g43.1<2>UD      g119<8,4,2>UD                   { align1 WE_all 1Q A@1 };
mov(4)          g52<4>UD        g33.2<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g50<4>UD        g33.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g74<4>UD        g35.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g72<4>UD        g35.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g87<4>UD        g37.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g85<4>UD        g37.1<8,2,4>UD                  { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g100<4>UD       g39.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g98<4>UD        g39.1<8,2,4>UD                  { align1 WE_all 1N $8.src };
mov(4)          g113<4>UD       g41.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g111<4>UD       g41.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g126<4>UD       g43.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g124<4>UD       g43.1<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g48<4>F         g50<8,2,4>F     g52<8,2,4>F     { align1 WE_all 1N };
sel.l(4)        g70<4>F         g72<8,2,4>F     g74<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.l(4)        g83<4>F         g85<8,2,4>F     g87<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g96<4>F         g98<8,2,4>F     g100<8,2,4>F    { align1 WE_all 1N I@5 };
sel.ge(4)       g109<4>F        g111<8,2,4>F    g113<8,2,4>F    { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.ge(4)       g122<4>F        g124<8,2,4>F    g126<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g33.2<4>UD      g48<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g35.2<4>UD      g70<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g37.2<4>UD      g83<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g39.2<4>UD      g96<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g41.2<4>UD      g109<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g43.2<4>UD      g122<8,2,4>UD                   { align1 WE_all 1N F@1 };
mov(4)          g57<4>UD        g33.3<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g55<4>UD        g33.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g79<4>UD        g35.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g77<4>UD        g35.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g92<4>UD        g37.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g90<4>UD        g37.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g105<4>UD       g39.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g103<4>UD       g39.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g118<4>UD       g41.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g116<4>UD       g41.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g7<4>UD         g43.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g5<4>UD         g43.1<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g53<4>F         g55<8,2,4>F     g57<8,2,4>F     { align1 WE_all 1N };
sel.l(4)        g75<4>F         g77<8,2,4>F     g79<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g88<4>F         g90<8,2,4>F     g92<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.ge(4)       g101<4>F        g103<8,2,4>F    g105<8,2,4>F    { align1 WE_all 1N I@5 };
sel.ge(4)       g114<4>F        g116<8,2,4>F    g118<8,2,4>F    { align1 WE_all 1N I@3 };
sel.ge(4)       g3<4>F          g5<8,2,4>F      g7<8,2,4>F      { align1 WE_all 1N I@1 };
mov(4)          g33.3<4>UD      g53<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g35.3<4>UD      g75<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g37.3<4>UD      g88<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g39.3<4>UD      g101<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g41.3<4>UD      g114<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g43.3<4>UD      g3<8,2,4>UD                     { align1 WE_all 1N F@1 };
sel.l(4)        g33.4<1>F       g33.3<0,1,0>F   g33.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.l(4)        g34.4<1>F       g34.3<0,1,0>F   g34.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.l(4)        g35.4<1>F       g35.3<0,1,0>F   g35.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.l(4)        g36.4<1>F       g36.3<0,1,0>F   g36.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.l(4)        g37.4<1>F       g37.3<0,1,0>F   g37.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g38.4<1>F       g38.3<0,1,0>F   g38.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g39.4<1>F       g39.3<0,1,0>F   g39.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g40.4<1>F       g40.3<0,1,0>F   g40.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g41.4<1>F       g41.3<0,1,0>F   g41.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g42.4<1>F       g42.3<0,1,0>F   g42.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g43.4<1>F       g43.3<0,1,0>F   g43.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g44.4<1>F       g44.3<0,1,0>F   g44.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(8)        g34<1>F         g33.7<0,1,0>F   g34<8,8,1>F     { align1 WE_all 1Q };
sel.l(8)        g36<1>F         g35.7<0,1,0>F   g36<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.l(8)        g38<1>F         g37.7<0,1,0>F   g38<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(8)       g40<1>F         g39.7<0,1,0>F   g40<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(8)       g42<1>F         g41.7<0,1,0>F   g42<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(8)       g44<1>F         g43.7<0,1,0>F   g44<8,8,1>F     { align1 WE_all 1Q F@6 };
(+f0.0) if(16)  JIP:  LABEL9          UIP:  LABEL9              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g101<1>D        g26<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g104<1>D        g2<0,1,0>D      g101<1,1,0>D    { align1 1H compacted };
shr(16)         g102<1>UD       g26<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g106<1>UD       g104<1,1,0>UD   g2<0,1,0>UD     { align1 1H compacted };
mov(8)          g110<2>UD       g104<4,4,1>UD                   { align1 1Q };
mov(8)          g112<2>UD       g105<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
cmp.l.f0.0(16)  g114<1>UD       g26<1,1,0>UD    0x00000002UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add3(16)        g108<1>D        g2.1<0,1,0>D    g102<8,8,1>D    -g106<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g116<1>UD       g36.7<0,1,0>UD  g38.7<0,1,0>UD  { align1 1H };
mov(8)          g112.1<2>UD     g109<4,4,1>UD                   { align1 2Q I@2 };
mov(8)          g110.1<2>UD     g108<4,4,1>UD                   { align1 1Q I@3 };
cmp.l.f0.0(16)  g118<1>UD       g26<1,1,0>UD    0x00000001UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g48<1>UD        g34.7<0,1,0>UD  g116<1,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g110UD          g48UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $9 };
add(16)         g120<1>D        g104<1,1,0>D    16D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g122<1>UD       g120<1,1,0>UD   g104<1,1,0>UD   { align1 1H compacted };
cmp.nz.f0.0(16) null<1>D        g114<8,8,1>D    0D              { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g124<1>D        -g122<1,1,0>D   g108<1,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g2<1>UD         g42.7<0,1,0>UD  g44.7<0,1,0>UD  { align1 1H };
cmp.nz.f0.0(16) null<1>D        g118<8,8,1>D    0D              { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
(+f0.0) sel(16) g49<1>UD        g40.7<0,1,0>UD  g2<1,1,0>UD     { align1 1H $9.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g1<2>UD         g120<4,4,1>UD                   { align1 1Q };
mov(8)          g3<2>UD         g121<4,4,1>UD                   { align1 2Q };
mov(8)          g1.1<2>UD       g124<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g3.1<2>UD       g125<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g1UD            g49UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };

LABEL9:
endif(16)       JIP:  LABEL10                                   { align1 1H };

LABEL10:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_primref_procedurals_to_primrefs_code[] = {
    0x80000065, 0x08058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x04050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00080c, 0x00340000,
    0xe2093040, 0x04010803, 0x80030061, 0x1c054410,
    0x00000000, 0x76543210, 0x00041b69, 0x18058660,
    0x02460405, 0x00000004, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa00090c, 0x00300000, 0x641c1a40, 0x00801c95,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x1a050120, 0x00461c05, 0x00000000,
    0xa01d1940, 0x1a001802, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x00041970, 0x00010220,
    0x52461d05, 0x00000324, 0x00040061, 0x17050020,
    0x0000031c, 0x00000000, 0x00040065, 0x0a058220,
    0x02000304, 0x00ffffff, 0x01040022, 0x0001c060,
    0x00000400, 0x00000370, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x2c260660,
    0x000002e4, 0x00000000, 0x00130061, 0x2e260660,
    0x000002e4, 0x00000000, 0x00031a61, 0x2c060660,
    0x000002c4, 0x00000000, 0x00131a61, 0x2e060660,
    0x000002c4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x1f440000,
    0xfb002c24, 0x000c0000, 0x00032241, 0x20010220,
    0x01461d05, 0x00562306, 0x00042241, 0x29050660,
    0x01461d05, 0x00562306, 0x00040041, 0x32050660,
    0x01461d05, 0x00562316, 0x00042241, 0x2b050660,
    0x01461d05, 0x00562506, 0x3e270049, 0x23001d03,
    0x00041b40, 0x29160110, 0x01562916, 0x00563206,
    0x00040041, 0x33050660, 0x01461d05, 0x00562516,
    0x00130041, 0x20010220, 0x01461e05, 0x00562406,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa02f2240, 0x29001f02, 0x00041b40, 0x2b160110,
    0x01562b16, 0x00563306, 0x00130049, 0x28050222,
    0x02461e05, 0x00462405, 0x27311b70, 0x1f002f03,
    0x00030061, 0x35060220, 0x00342f05, 0x00000000,
    0x00130061, 0x37060220, 0x00343005, 0x00000000,
    0xa0410040, 0x01002f03, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0xa02d1d40, 0x2b002702,
    0x27431a70, 0x2f004103, 0x00030061, 0x47060220,
    0x00344105, 0x00000000, 0x00130061, 0x49060220,
    0x00344205, 0x00000000, 0x0004c252, 0x33040e68,
    0x0e2e2105, 0x31052d05, 0x00131961, 0x37260220,
    0x00343405, 0x00000000, 0x00031a61, 0x35260220,
    0x00343305, 0x00000000, 0xa0451e40, 0x33024302,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x39440000, 0xfb003524, 0x000c0000,
    0x00131961, 0x49260220, 0x00344605, 0x00000000,
    0x00031a61, 0x47260220, 0x00344505, 0x00000000,
    0xe74c2370, 0x7f833b00, 0xe74e2370, 0x7f833900,
    0xe7522370, 0x7f833d00, 0x20501265, 0x4e004c03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x4b240000, 0xfb004724, 0x00040000,
    0x20540965, 0x52005003, 0xe7562470, 0x7f834b00,
    0x27620062, 0x4b003b00, 0x25660062, 0x4b003b00,
    0x25682462, 0x4d003d00, 0xe7582370, 0x7f833f00,
    0xe75c0070, 0x7f834d00, 0x205a1265, 0x58005603,
    0x205e0965, 0x5c005a03, 0x2e601965, 0x5e005403,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00041961, 0x34062650, 0x00466005, 0x00000000,
    0x01041562, 0x06058220, 0x02466205, 0x7f800000,
    0x01041362, 0x10058220, 0x02466805, 0xff800000,
    0x01041462, 0x0e058220, 0x02466605, 0xff800000,
    0x27611b62, 0x3f003900, 0x27631b62, 0x4d003d00,
    0x00041c61, 0x14050110, 0x00563406, 0x00000000,
    0x01041262, 0x04058220, 0x02466105, 0x7f800000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x01041162, 0x08058220, 0x02466305, 0x7f800000,
    0x25641962, 0x3f003900, 0x01041162, 0x0c058220,
    0x02466405, 0xff800000, 0x00040024, 0x0001c060,
    0x000000a0, 0x000000a0, 0x00041d61, 0x14054110,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x08054220,
    0x00000000, 0x7f800000, 0x00041f61, 0x06054220,
    0x00000000, 0x7f800000, 0x00041f61, 0x04054220,
    0x00000000, 0x7f800000, 0x00040061, 0x10054220,
    0x00000000, 0xff800000, 0x00040061, 0x0e054220,
    0x00000000, 0xff800000, 0x00041f61, 0x0c054220,
    0x00000000, 0xff800000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x60691e65, 0x00101405,
    0x00041970, 0x6c058550, 0x25586905, 0x00000000,
    0x00041961, 0x6a050560, 0x00466c05, 0x00000000,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00041a70, 0x00018220, 0x22466a05, 0x00000000,
    0x00040061, 0x6d050120, 0x00003000, 0x00000000,
    0x00040079, 0x6f058620, 0x06461a05, 0x00000000,
    0x00041a4d, 0x2d050220, 0x00466d05, 0x00000000,
    0x00040070, 0x00018660, 0x16461a05, 0x00000000,
    0x20711b65, 0x6f006d03, 0x0004194d, 0x73050220,
    0x00467105, 0x00000000, 0x01040022, 0x0001c060,
    0x00000098, 0x00000098, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa0750040, 0x02410203,
    0x27771970, 0x02107503, 0x00030061, 0x7b060220,
    0x00347505, 0x00000000, 0x00130061, 0x7d060220,
    0x00347605, 0x00000000, 0xa0791b40, 0x02127712,
    0x00031961, 0x7b260220, 0x00347905, 0x00000000,
    0x00131a61, 0x7d260220, 0x00347a05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x15140000, 0xfb187b24, 0x01002d14,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa07c2540, 0x15107302, 0x00040061, 0x00010660,
    0x20466a05, 0x00000000, 0x01040022, 0x0001c060,
    0x00000168, 0x00000168, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00041b69, 0x7e058660,
    0x02467c05, 0x00000005, 0xe0140068, 0x01b07c03,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa01f1a40, 0x7e01025a, 0x00040069, 0x7d058660,
    0x02461705, 0x0000001d, 0x27211a70, 0x02101f0b,
    0x00030061, 0x25060220, 0x00341f05, 0x00000000,
    0x00130061, 0x27060220, 0x00342005, 0x00000000,
    0x20121c66, 0x7d001d03, 0x00041c52, 0x23040660,
    0x0e2e02a4, 0x21051405, 0x00131961, 0x27260220,
    0x00342405, 0x00000000, 0x00031a61, 0x25260220,
    0x00342305, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xfb082524, 0x000c0444, 0xa0263640, 0x01001f03,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x27281970, 0x1f002603, 0x00033561, 0x2c060220,
    0x00342605, 0x00000000, 0x00133561, 0x2e060220,
    0x00342705, 0x00000000, 0xa02a1b40, 0x23022802,
    0x00131961, 0x2e260220, 0x00342b05, 0x00000000,
    0x00031a61, 0x2c260220, 0x00342a05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x00000000, 0xfb082c24, 0x000c0c44,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x202d1f40, 0x0c000400, 0x25330070, 0x04000c00,
    0xa3141c61, 0x7f810000, 0x60140061, 0x00100400,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa3162561, 0x7f810000, 0x60160061, 0x00100600,
    0xa3183661, 0x7f810000, 0x60180061, 0x00100800,
    0xa31c0061, 0xff810000, 0x601c0061, 0x00100c00,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xa31e1f61, 0xff810000, 0x601e0061, 0x00100e00,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xa3201f61, 0xff810000, 0x60200061, 0x00101000,
    0x202f3540, 0x0e000600, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x20310040, 0x10000800,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x01041762, 0x35058220, 0x02462d05, 0x7f800000,
    0x80031761, 0x3b060220, 0x00441426, 0x00000000,
    0x80031761, 0x4b060220, 0x00441626, 0x00000000,
    0x80031661, 0x58060220, 0x00441826, 0x00000000,
    0x80031561, 0x65060220, 0x00441c26, 0x00000000,
    0x80031461, 0x72060220, 0x00441e26, 0x00000000,
    0x80031361, 0x22060220, 0x00442026, 0x00000000,
    0x25373370, 0x06000e00, 0x80031e62, 0x39060aa0,
    0x5a441406, 0x00443b06, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80031d62, 0x49060aa0,
    0x5a441606, 0x00444b06, 0x80031c62, 0x56060aa0,
    0x5a441806, 0x00445806, 0x80031b62, 0x63060aa0,
    0x4a441c06, 0x00446506, 0x80031a62, 0x70060aa0,
    0x4a441e06, 0x00447206, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80031962, 0x7d060aa0,
    0x4a442006, 0x00442206, 0x80030e61, 0x14260220,
    0x00443906, 0x00000000, 0x80030d61, 0x16260220,
    0x00444906, 0x00000000, 0x80030c61, 0x18260220,
    0x00445606, 0x00000000, 0x01041762, 0x39058220,
    0x02462f05, 0x7f800000, 0x80030b61, 0x1c260220,
    0x00446306, 0x00000000, 0x80030a61, 0x1e260220,
    0x00447006, 0x00000000, 0x80030961, 0x20260220,
    0x00447d06, 0x00000000, 0x80021f61, 0x43070220,
    0x00421447, 0x00000000, 0x80020061, 0x41070220,
    0x00421427, 0x00000000, 0x80021f61, 0x50070220,
    0x00421647, 0x00000000, 0x80020061, 0x4e070220,
    0x00421627, 0x00000000, 0x80021f61, 0x5d070220,
    0x00421847, 0x00000000, 0x80020061, 0x5b070220,
    0x00421827, 0x00000000, 0x253b0070, 0x08001000,
    0x80021f61, 0x6a070220, 0x00421c47, 0x00000000,
    0x80020061, 0x68070220, 0x00421c27, 0x00000000,
    0x80021f61, 0x77070220, 0x00421e47, 0x00000000,
    0x80020061, 0x75070220, 0x00421e27, 0x00000000,
    0x80020061, 0x27070220, 0x00422047, 0x00000000,
    0x80023661, 0x25070220, 0x00422027, 0x00000000,
    0x80020062, 0x3f070aa0, 0x5a424107, 0x00424307,
    0x80021f62, 0x4c070aa0, 0x5a424e07, 0x00425007,
    0x80021f62, 0x59070aa0, 0x5a425b07, 0x00425d07,
    0x01040062, 0x3d058220, 0x02463105, 0x7f800000,
    0x80021e62, 0x66070aa0, 0x4a426807, 0x00426a07,
    0x80021c62, 0x73070aa0, 0x4a427507, 0x00427707,
    0x80021a62, 0x23070aa0, 0x4a422507, 0x00422707,
    0x80021661, 0x14470220, 0x00423f07, 0x00000000,
    0x80021561, 0x16470220, 0x00424c07, 0x00000000,
    0x80021461, 0x18470220, 0x00425907, 0x00000000,
    0x00040070, 0x00018660, 0x26463305, 0x00000000,
    0x80021361, 0x1c470220, 0x00426607, 0x00000000,
    0x80021261, 0x1e470220, 0x00427307, 0x00000000,
    0x80021161, 0x20470220, 0x00422307, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80021f61, 0x48070220, 0x00421467, 0x00000000,
    0x80023461, 0x46070220, 0x00421427, 0x00000000,
    0x80021f61, 0x55070220, 0x00421667, 0x00000000,
    0x80020061, 0x53070220, 0x00421627, 0x00000000,
    0x80021f61, 0x62070220, 0x00421867, 0x00000000,
    0x80020061, 0x60070220, 0x00421827, 0x00000000,
    0x01040062, 0x3f058220, 0x02462d05, 0xff800000,
    0x80021f61, 0x6f070220, 0x00421c67, 0x00000000,
    0x80020061, 0x6d070220, 0x00421c27, 0x00000000,
    0x80020061, 0x7c070220, 0x00421e67, 0x00000000,
    0x80023561, 0x7a070220, 0x00421e27, 0x00000000,
    0x80020061, 0x2a070220, 0x00422027, 0x00000000,
    0x80020062, 0x44070aa0, 0x5a424607, 0x00424807,
    0x80021f62, 0x51070aa0, 0x5a425307, 0x00425507,
    0x80021f62, 0x5e070aa0, 0x5a426007, 0x00426207,
    0x00040070, 0x00018660, 0x26463705, 0x00000000,
    0x80021d62, 0x6b070aa0, 0x4a426d07, 0x00426f07,
    0x80021b62, 0x78070aa0, 0x4a427a07, 0x00427c07,
    0x80023561, 0x2c070220, 0x00422067, 0x00000000,
    0x80021561, 0x14670220, 0x00424407, 0x00000000,
    0x80021461, 0x16670220, 0x00425107, 0x00000000,
    0x80021361, 0x18670220, 0x00425e07, 0x00000000,
    0x01040062, 0x41058220, 0x02462f05, 0xff800000,
    0x80021261, 0x1c670220, 0x00426b07, 0x00000000,
    0x80021161, 0x1e670220, 0x00427807, 0x00000000,
    0x80021f62, 0x28070aa0, 0x4a422a07, 0x00422c07,
    0x80021e62, 0x14850aa0, 0x5a001464, 0x00341485,
    0x80021e62, 0x15850aa0, 0x5a001564, 0x00341585,
    0x80021d62, 0x16850aa0, 0x5a001664, 0x00341685,
    0x80021d62, 0x17850aa0, 0x5a001764, 0x00341785,
    0x80021c62, 0x18850aa0, 0x5a001864, 0x00341885,
    0x80021c62, 0x19850aa0, 0x5a001964, 0x00341985,
    0x00040070, 0x00018660, 0x26463b05, 0x00000000,
    0x80021b62, 0x1c850aa0, 0x4a001c64, 0x00341c85,
    0x80021b62, 0x1d850aa0, 0x4a001d64, 0x00341d85,
    0x80021a62, 0x1e850aa0, 0x4a001e64, 0x00341e85,
    0x80021a62, 0x1f850aa0, 0x4a001f64, 0x00341f85,
    0x80020061, 0x20670220, 0x00422807, 0x00000000,
    0x80031762, 0x15050aa0, 0x5a0014e4, 0x00461505,
    0x80031762, 0x17050aa0, 0x5a0016e4, 0x00461705,
    0x80031762, 0x19050aa0, 0x5a0018e4, 0x00461905,
    0x01040062, 0x43058220, 0x02463105, 0xff800000,
    0x80031662, 0x1d050aa0, 0x4a001ce4, 0x00461d05,
    0x80031562, 0x1f050aa0, 0x4a001ee4, 0x00461f05,
    0x80021a62, 0x20850aa0, 0x4a002064, 0x00342085,
    0x80021a62, 0x21850aa0, 0x4a002164, 0x00342185,
    0x00040070, 0x00018220, 0x52461a05, 0x00000003,
    0x80031162, 0x21050aa0, 0x4a0020e4, 0x00462105,
    0x01040022, 0x0001c060, 0x00000248, 0x00000248,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa0450040, 0x08010243, 0x00040069, 0x4a058660,
    0x02461a05, 0x00000002, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x27470070, 0x0210452b,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0xa04d0040, 0x4a004502, 0xe04b0068, 0x01e01a03,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa0490040, 0x0212471a, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x274f0070, 0x45004d03,
    0x00030061, 0x53060220, 0x00344d05, 0x00000000,
    0x00130061, 0x55060220, 0x00344e05, 0x00000000,
    0xe7570070, 0x00201a03, 0x00041c52, 0x51040e68,
    0x0e2e4905, 0x4f054b05, 0x80001601, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x59050220,
    0x020017e4, 0x000019e4, 0x00131a61, 0x55260220,
    0x00345205, 0x00000000, 0x00031b61, 0x53260220,
    0x00345105, 0x00000000, 0xe75b0070, 0x00101a03,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x2f2e0062, 0x59011583, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x00000000,
    0xfb2a5324, 0x01002e14, 0xa05d0040, 0x00c04d03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x275f0070, 0x4d005d03, 0x00041f70, 0x00018660,
    0x26465705, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xa0610040, 0x51025f02,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x64050220, 0x02001fe4, 0x000021e4,
    0x00041f70, 0x00018660, 0x26465b05, 0x00000000,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x2f2f3762, 0x64011d83, 0x00030061, 0x63060220,
    0x00345d05, 0x00000000, 0x00130061, 0x65060220,
    0x00345e05, 0x00000000, 0x00031a61, 0x63260220,
    0x00346105, 0x00000000, 0x00131a61, 0x65260220,
    0x00346205, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xfb2c6324, 0x01002f14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0xa3210961, 0x7f810000,
    0x60210061, 0x00103500, 0xa3230061, 0x7f810000,
    0x60230061, 0x00103900, 0xa3250061, 0x7f810000,
    0x60250061, 0x00103d00, 0xa3271d61, 0xff810000,
    0x60270061, 0x00103f00, 0xa3291d61, 0xff810000,
    0x60290061, 0x00104100, 0xa32b1c61, 0xff810000,
    0x602b0061, 0x00104300, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00040070, 0x00018220,
    0x52461a05, 0x00000003, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80031661, 0x2f060220,
    0x00442126, 0x00000000, 0x80031561, 0x45060220,
    0x00442326, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80031461, 0x52060220,
    0x00442526, 0x00000000, 0x80031361, 0x5f060220,
    0x00442726, 0x00000000, 0x80031261, 0x6c060220,
    0x00442926, 0x00000000, 0x80031161, 0x79060220,
    0x00442b26, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80031e62, 0x2d060aa0,
    0x5a442106, 0x00442f06, 0x80031d62, 0x3a060aa0,
    0x5a442306, 0x00444506, 0x80031c62, 0x50060aa0,
    0x5a442506, 0x00445206, 0x80031b62, 0x5d060aa0,
    0x4a442706, 0x00445f06, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80031a62, 0x6a060aa0,
    0x4a442906, 0x00446c06, 0x80031962, 0x77060aa0,
    0x4a442b06, 0x00447906, 0x80030e61, 0x21260220,
    0x00442d06, 0x00000000, 0x80030d61, 0x23260220,
    0x00443a06, 0x00000000, 0x80030c61, 0x25260220,
    0x00445006, 0x00000000, 0x80030b61, 0x27260220,
    0x00445d06, 0x00000000, 0x80030a61, 0x29260220,
    0x00446a06, 0x00000000, 0x80030961, 0x2b260220,
    0x00447706, 0x00000000, 0x80021e61, 0x34070220,
    0x00422147, 0x00000000, 0x80020061, 0x32070220,
    0x00422127, 0x00000000, 0x80021f61, 0x4a070220,
    0x00422347, 0x00000000, 0x80020061, 0x48070220,
    0x00422327, 0x00000000, 0x80021f61, 0x57070220,
    0x00422547, 0x00000000, 0x80023761, 0x55070220,
    0x00422527, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80021f61, 0x64070220,
    0x00422747, 0x00000000, 0x80023861, 0x62070220,
    0x00422727, 0x00000000, 0x80021f61, 0x71070220,
    0x00422947, 0x00000000, 0x80020061, 0x6f070220,
    0x00422927, 0x00000000, 0x80020061, 0x7e070220,
    0x00422b47, 0x00000000, 0x80020061, 0x7c070220,
    0x00422b27, 0x00000000, 0x80020062, 0x30070aa0,
    0x5a423207, 0x00423407, 0x80021f62, 0x46070aa0,
    0x5a424807, 0x00424a07, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80021f62, 0x53070aa0,
    0x5a425507, 0x00425707, 0x80021d62, 0x60070aa0,
    0x4a426207, 0x00426407, 0x80021b62, 0x6d070aa0,
    0x4a426f07, 0x00427107, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x7a070aa0,
    0x4a427c07, 0x00427e07, 0x80021661, 0x21470220,
    0x00423007, 0x00000000, 0x80021561, 0x23470220,
    0x00424607, 0x00000000, 0x80021461, 0x25470220,
    0x00425307, 0x00000000, 0x80021361, 0x27470220,
    0x00426007, 0x00000000, 0x80021261, 0x29470220,
    0x00426d07, 0x00000000, 0x80021161, 0x2b470220,
    0x00427a07, 0x00000000, 0x80021e61, 0x39070220,
    0x00422167, 0x00000000, 0x80020061, 0x37070220,
    0x00422127, 0x00000000, 0x80021f61, 0x4f070220,
    0x00422367, 0x00000000, 0x80020061, 0x4d070220,
    0x00422327, 0x00000000, 0x80021f61, 0x5c070220,
    0x00422567, 0x00000000, 0x80020061, 0x5a070220,
    0x00422527, 0x00000000, 0x80021f61, 0x69070220,
    0x00422767, 0x00000000, 0x80020061, 0x67070220,
    0x00422727, 0x00000000, 0x80021f61, 0x76070220,
    0x00422967, 0x00000000, 0x80020061, 0x74070220,
    0x00422927, 0x00000000, 0x80020061, 0x07070220,
    0x00422b67, 0x00000000, 0x80020061, 0x05070220,
    0x00422b27, 0x00000000, 0x80020062, 0x35070aa0,
    0x5a423707, 0x00423907, 0x80021f62, 0x4b070aa0,
    0x5a424d07, 0x00424f07, 0x80021f62, 0x58070aa0,
    0x5a425a07, 0x00425c07, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80021d62, 0x65070aa0,
    0x4a426707, 0x00426907, 0x80021b62, 0x72070aa0,
    0x4a427407, 0x00427607, 0x80021962, 0x03070aa0,
    0x4a420507, 0x00420707, 0x80021661, 0x21670220,
    0x00423507, 0x00000000, 0x80021561, 0x23670220,
    0x00424b07, 0x00000000, 0x80021461, 0x25670220,
    0x00425807, 0x00000000, 0x80021361, 0x27670220,
    0x00426507, 0x00000000, 0x80021261, 0x29670220,
    0x00427207, 0x00000000, 0x80021161, 0x2b670220,
    0x00420307, 0x00000000, 0x80021e62, 0x21850aa0,
    0x5a002164, 0x00342185, 0x80021e62, 0x22850aa0,
    0x5a002264, 0x00342285, 0x80021d62, 0x23850aa0,
    0x5a002364, 0x00342385, 0x80021d62, 0x24850aa0,
    0x5a002464, 0x00342485, 0x80021c62, 0x25850aa0,
    0x5a002564, 0x00342585, 0x80021c62, 0x26850aa0,
    0x5a002664, 0x00342685, 0x80021b62, 0x27850aa0,
    0x4a002764, 0x00342785, 0x80021b62, 0x28850aa0,
    0x4a002864, 0x00342885, 0x80021a62, 0x29850aa0,
    0x4a002964, 0x00342985, 0x80021a62, 0x2a850aa0,
    0x4a002a64, 0x00342a85, 0x80021962, 0x2b850aa0,
    0x4a002b64, 0x00342b85, 0x80021962, 0x2c850aa0,
    0x4a002c64, 0x00342c85, 0x80030062, 0x22050aa0,
    0x5a0021e4, 0x00462205, 0x80031762, 0x24050aa0,
    0x5a0023e4, 0x00462405, 0x80031762, 0x26050aa0,
    0x5a0025e4, 0x00462605, 0x80031762, 0x28050aa0,
    0x4a0027e4, 0x00462805, 0x80031762, 0x2a050aa0,
    0x4a0029e4, 0x00462a05, 0x80031662, 0x2c050aa0,
    0x4a002be4, 0x00462c05, 0x01040022, 0x0001c060,
    0x00000260, 0x00000260, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x65058660,
    0x02461a05, 0x00000002, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0680040, 0x65010202,
    0xe0660068, 0x01e01a03, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x276a0070, 0x02106803,
    0x00030061, 0x6e060220, 0x00346805, 0x00000000,
    0x00130061, 0x70060220, 0x00346905, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0xe7720070, 0x00201a03, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x6c040660,
    0x0e2e0224, 0x6a056605, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x74050220,
    0x020024e4, 0x000026e4, 0x00131a61, 0x70260220,
    0x00346d05, 0x00000000, 0x00031b61, 0x6e260220,
    0x00346c05, 0x00000000, 0xe7760070, 0x00101a03,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x2f300062, 0x74012283, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x00000000,
    0xfb2a6e24, 0x01003014, 0xa0780040, 0x01006803,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x277a0070, 0x68007803, 0x00041f70, 0x00018660,
    0x26467205, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xa07c0040, 0x6c027a02,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x02050220, 0x02002ae4, 0x00002ce4,
    0x00041f70, 0x00018660, 0x26467605, 0x00000000,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x2f313962, 0x02012883, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x01060220,
    0x00347805, 0x00000000, 0x00130061, 0x03060220,
    0x00347905, 0x00000000, 0x00031a61, 0x01260220,
    0x00347c05, 0x00000000, 0x00131a61, 0x03260220,
    0x00347d05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x00000000,
    0xfb2c0124, 0x01003114, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80030061, 0x7e050220,
    0x00460005, 0x00000000, 0x80040931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_primref_procedurals_to_primrefs = {
   .prog_data = {
      .base.nr_params = 18,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 3,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 6704,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_primref_procedurals_to_primrefs_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_primref_procedurals_to_primrefs_printfs,
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
const char *gfx125_bvh_build_primref_procedurals_to_primrefs_sha1 = "c25df8a3cc2f124807915840667b9d55eb9166bc";

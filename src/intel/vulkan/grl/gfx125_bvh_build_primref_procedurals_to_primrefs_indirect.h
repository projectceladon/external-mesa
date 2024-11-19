#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_printfs[] = {
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

and(1)          g47<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g121<1>UD       g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g47UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
add(1)          g48<1>UD        g47<0,1,0>UD    0x00000040UD    { align1 WE_all 1N $0.src compacted };
mov(8)          g13<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g24<1>D         g121<8,8,1>D    0x00000004UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g3UD            g48UD           nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
add(8)          g13.8<1>UW      g13<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g26<1>D         g13<8,8,1>UW                    { align1 1H };
add(16)         g28<1>D         g24<1,1,0>D     g26<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.dst };
mov(8)          g125.1<2>D      g3.1<0,1,0>D                    { align1 2Q };
mov(8)          g123.1<2>D      g3.1<0,1,0>D                    { align1 1Q };
and(16)         g10<1>UD        g3.2<0,1,0>UD   0x00ffffffUD    { align1 1H };
mov(8)          g125<2>D        g3<0,1,0>D                      { align1 2Q I@3 };
mov(8)          g123<2>D        g3<0,1,0>D                      { align1 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g22UD           g123UD          nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
cmp.l.f0.0(16)  null<1>UD       g28<8,8,1>UD    g22<8,8,1>UD    { align1 1H @6 $2.dst };
mov(16)         g23<1>UD        g3.11<0,1,0>UB                  { align1 1H };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g124.1<2>D      g2.7<0,1,0>D                    { align1 1Q $2.src };
mov(8)          g126.1<2>D      g2.7<0,1,0>D                    { align1 2Q $2.src };
mov(8)          g124<2>D        g2.6<0,1,0>D                    { align1 1Q I@2 };
mov(8)          g126<2>D        g2.6<0,1,0>D                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g30UD           g124UD          nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mul(8)          acc0<1>UD       g28<8,8,1>UD    g34<16,8,2>UW   { align1 1Q $2.dst };
mul(16)         g40<1>D         g28<8,8,1>D     g34<16,8,2>UW   { align1 1H $2.dst };
mul(16)         g76<1>D         g28<8,8,1>D     g34.1<16,8,2>UW { align1 1H };
mul(16)         g42<1>D         g28<8,8,1>D     g36<16,8,2>UW   { align1 1H $2.dst };
mach(8)         g38<1>UD        g28<1,1,0>UD    g34<1,1,0>UD    { align1 1Q compacted AccWrEnable };
add(16)         g40.1<2>UW      g40.1<16,8,2>UW g76<16,8,2>UW   { align1 1H I@3 };
mul(16)         g77<1>D         g28<8,8,1>D     g36.1<16,8,2>UW { align1 1H };
mul(8)          acc0<1>UD       g29<8,8,1>UD    g35<16,8,2>UW   { align1 2Q };
add(16)         g46<1>D         g30<1,1,0>D     g40<1,1,0>D     { align1 1H @3 $2.dst compacted };
add(16)         g42.1<2>UW      g42.1<16,8,2>UW g77<16,8,2>UW   { align1 1H I@3 };
mach(8)         g39<1>UD        g29<8,8,1>UD    g35<8,8,1>UD    { align1 2Q AccWrEnable };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g48<1>UD        g46<1,1,0>UD    g30<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g12<2>UD        g46<4,4,1>UD                    { align1 1Q };
mov(8)          g14<2>UD        g47<4,4,1>UD                    { align1 2Q };
add(16)         g59<1>D         g46<1,1,0>D     16D             { align1 1H compacted };
add(16)         g44<1>D         g38<1,1,0>D     g42<1,1,0>D     { align1 1H I@5 compacted };
cmp.l.f0.0(16)  g61<1>UD        g59<1,1,0>UD    g46<1,1,0>UD    { align1 1H I@2 compacted };
add3(16)        g50<1>D         g32<8,8,1>D     g44<8,8,1>D     -g48<1,1,1>D { align1 1H @2 $2.dst };
mov(8)          g14.1<2>UD      g51<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g12.1<2>UD      g50<4,4,1>UD                    { align1 1Q I@2 };
add(16)         g63<1>D         -g61<1,1,0>D    g50<1,1,0>D     { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g51UD           g12UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov(8)          g13<2>UD        g59<4,4,1>UD                    { align1 1Q $3.src };
mov(8)          g15<2>UD        g60<4,4,1>UD                    { align1 2Q $3.src };
mov(8)          g13.1<2>UD      g63<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g15.1<2>UD      g64<4,4,1>UD                    { align1 2Q I@2 };
cmp.l.f0.0(16)  g65<1>F         (abs)g53<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $3.dst compacted };
cmp.l.f0.0(16)  g67<1>F         (abs)g51<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $3.dst compacted };
cmp.l.f0.0(16)  g71<1>F         (abs)g55<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $3.dst compacted };
and(16)         g69<1>UD        g65<1,1,0>UD    g67<1,1,0>UD    { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g64UD           g13UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
and(16)         g73<1>UD        g69<1,1,0>UD    g71<1,1,0>UD    { align1 1H A@1 compacted };
cmp.l.f0.0(16)  g75<1>F         (abs)g64<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $4.dst compacted };
sel.l(16)       g87<1>F         g53<1,1,0>F     g64<1,1,0>F     { align1 1H compacted };
sel.ge(16)      g91<1>F         g53<1,1,0>F     g64<1,1,0>F     { align1 1H compacted };
sel.ge(16)      g93<1>F         g55<1,1,0>F     g66<1,1,0>F     { align1 1H $4.dst compacted };
cmp.l.f0.0(16)  g77<1>F         (abs)g57<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $3.dst compacted };
cmp.l.f0.0(16)  g81<1>F         (abs)g66<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
and(16)         g79<1>UD        g75<1,1,0>UD    g77<1,1,0>UD    { align1 1H F@2 compacted };
and(16)         g83<1>UD        g79<1,1,0>UD    g81<1,1,0>UD    { align1 1H A@1 compacted };
and.nz.f0.0(16) g85<1>UD        g73<1,1,0>UD    g83<1,1,0>UD    { align1 1H I@1 compacted };
mov(16)         g78<2>W         -g85<8,8,1>D                    { align1 1H I@1 };
(+f0.0) sel(16) g6<1>UD         g87<8,8,1>UD    0x7f800000UD    { align1 1H F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
(+f0.0) sel(16) g16<1>UD        g93<8,8,1>UD    0xff800000UD    { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
(+f0.0) sel(16) g14<1>UD        g91<8,8,1>UD    0xff800000UD    { align1 1H F@4 };
sel.l(16)       g86<1>F         g51<1,1,0>F     g57<1,1,0>F     { align1 1H I@3 compacted };
sel.l(16)       g88<1>F         g55<1,1,0>F     g66<1,1,0>F     { align1 1H I@3 compacted };
mov(16)         g20<1>UW        g78<16,8,2>UW                   { align1 1H I@4 };
(+f0.0) sel(16) g4<1>UD         g86<8,8,1>UD    0x7f800000UD    { align1 1H F@2 };
(+f0.0) sel(16) g8<1>UD         g88<8,8,1>UD    0x7f800000UD    { align1 1H F@1 };
sel.ge(16)      g89<1>F         g51<1,1,0>F     g57<1,1,0>F     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
(+f0.0) sel(16) g12<1>UD        g89<8,8,1>UD    0xff800000UD    { align1 1H F@1 };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g20<1>UW        0x0000UW                        { align1 1H I@5 };
mov(16)         g8<1>UD         0x7f800000UD                    { align1 1H I@4 };
mov(16)         g6<1>UD         0x7f800000UD                    { align1 1H I@7 };
mov(16)         g4<1>UD         0x7f800000UD                    { align1 1H I@7 };
mov(16)         g16<1>UD        0xff800000UD                    { align1 1H };
mov(16)         g14<1>UD        0xff800000UD                    { align1 1H };
mov(16)         g12<1>UD        0xff800000UD                    { align1 1H I@7 };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
and(16)         g94<1>UW        g20<1,1,0>UW    0x0001UW        { align1 1H I@6 compacted };
mov(16)         g95<1>W         g94<32,16,2>B                   { align1 1H I@1 };
cmp.nz.f0.0(16) g98<1>W         g95<16,16,1>W   0W              { align1 1H I@1 };
mov(16)         g96<1>D         g98<8,8,1>W                     { align1 1H I@1 };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g96<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g99<1>UD        f0<0,1,0>UW                     { align1 1H };
bfi1(16)        g101<1>UD       g26<8,8,1>D     0D              { align1 1H };
cbit(16)        g34<1>UD        g99<8,8,1>UD                    { align1 1H I@2 };
cmp.z.f0.0(16)  null<1>D        g26<8,8,1>D     0D              { align1 1H };
and(16)         g103<1>UD       g99<1,1,0>UD    g101<1,1,0>UD   { align1 1H I@3 compacted };
cbit(16)        g105<1>UD       g103<8,8,1>UD                   { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g107<1>D        g2<0,1,0>D      36D             { align1 1H compacted };
cmp.l.f0.0(16)  g109<1>UD       g107<1,1,0>UD   g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g30<2>UD        g107<4,4,1>UD                   { align1 1Q };
mov(8)          g32<2>UD        g108<4,4,1>UD                   { align1 2Q };
add(16)         g111<1>D        -g109<1,1,0>D   g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g30.1<2>UD      g111<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g32.1<2>UD      g112<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g21UD           g30UD           g34UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $5 };

LABEL3:
endif(16)       JIP:  LABEL4                                    { align1 1H };

LABEL4:
add(16)         g112<1>D        g105<1,1,0>D    g21<0,1,0>D     { align1 1H @3 $5.dst compacted };
mov.nz.f0.0(16) null<1>D        g96<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL5              { align1 1H };
shl(16)         g114<1>D        g112<8,8,1>D    0x00000005UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g117<1>D        g2.4<0,1,0>D    g114<1,1,0>D    { align1 1H I@1 compacted };
shr(16)         g115<1>UD       g112<1,1,0>UD   0x0000001bUD    { align1 1H compacted };
shl(16)         g113<1>D        g23<8,8,1>D     0x0000001dUD    { align1 1H };
cmp.l.f0.0(16)  g119<1>UD       g117<1,1,0>UD   g2.4<0,1,0>UD   { align1 1H I@3 compacted };
mov(8)          g35<2>UD        g117<4,4,1>UD                   { align1 1Q $5.src };
mov(8)          g37<2>UD        g118<4,4,1>UD                   { align1 2Q };
or(16)          g18<1>UD        g28<1,1,0>UD    g113<1,1,0>UD   { align1 1H I@4 compacted };
add3(16)        g121<1>D        g2.5<0,1,0>D    g115<8,8,1>D    -g119<1,1,1>D { align1 1H I@4 };
mov(8)          g37.1<2>UD      g122<4,4,1>UD                   { align1 2Q I@1 };
mov(8)          g35.1<2>UD      g121<4,4,1>UD                   { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g35UD           g4UD            0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $5 };
add(16)         g123<1>D        g117<1,1,0>D    16D             { align1 1H $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g125<1>UD       g123<1,1,0>UD   g117<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g36<2>UD        g123<4,4,1>UD                   { align1 1Q $5.src };
mov(8)          g38<2>UD        g124<4,4,1>UD                   { align1 2Q $5.src };
add(16)         g20<1>D         -g125<1,1,0>D   g121<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g38.1<2>UD      g21<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g36.1<2>UD      g20<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g36UD           g12UD           0x0800f586                0x00000200
                            ugm MsgDesc: ( store_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $6 };

LABEL5:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g21<1>F         g4<1,1,0>F      g12<1,1,0>F     { align1 1H I@3 compacted };
cmp.ge.f0.0(16) g30<1>F         g12<1,1,0>F     g4<1,1,0>F      { align1 1H $5.src compacted };
mov(16)         g48<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H $1.src compacted };
mov(16)         g48<1>F         g4<1,1,0>F                      { align1 1H compacted };
mov(16)         g50<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H $5.src compacted };
mov(16)         g50<1>F         g6<1,1,0>F                      { align1 1H compacted };
mov(16)         g52<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H $5.src compacted };
mov(16)         g52<1>F         g8<1,1,0>F                      { align1 1H compacted };
mov(16)         g54<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g54<1>F         g12<1,1,0>F                     { align1 1H compacted };
mov(16)         g56<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H $6.src compacted };
mov(16)         g56<1>F         g14<1,1,0>F                     { align1 1H compacted };
mov(16)         g58<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H $6.src compacted };
mov(16)         g58<1>F         g16<1,1,0>F                     { align1 1H compacted };
add(16)         g23<1>F         g6<1,1,0>F      g14<1,1,0>F     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
(+f0.0) sel(16) g32<1>UD        g21<8,8,1>UD    0x7f800000UD    { align1 1H F@7 };
mov(8)          g81<2>UD        g48.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
mov(8)          g94<2>UD        g50.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
mov(8)          g107<2>UD       g52.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g120<2>UD       g54.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g36<2>UD        g56.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g67<2>UD        g58.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
cmp.ge.f0.0(16) g34<1>F         g14<1,1,0>F     g6<1,1,0>F      { align1 1H $5.src compacted };
sel.l(8)        g79<2>F         g48<8,4,2>F     g81<8,4,2>F     { align1 WE_all 1Q I@6 };
sel.l(8)        g92<2>F         g50<8,4,2>F     g94<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.l(8)        g105<2>F        g52<8,4,2>F     g107<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.ge(8)       g118<2>F        g54<8,4,2>F     g120<8,4,2>F    { align1 WE_all 1Q I@3 };
sel.ge(8)       g28<2>F         g56<8,4,2>F     g36<8,4,2>F     { align1 WE_all 1Q I@2 };
sel.ge(8)       g65<2>F         g58<8,4,2>F     g67<8,4,2>F     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g36<1>UD        g23<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(8)          g48.1<2>UD      g79<8,4,2>UD                    { align1 WE_all 1Q A@6 };
mov(8)          g50.1<2>UD      g92<8,4,2>UD                    { align1 WE_all 1Q A@5 };
mov(8)          g52.1<2>UD      g105<8,4,2>UD                   { align1 WE_all 1Q A@4 };
mov(8)          g54.1<2>UD      g118<8,4,2>UD                   { align1 WE_all 1Q A@3 };
mov(8)          g56.1<2>UD      g28<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g58.1<2>UD      g65<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g28<1>F         g8<1,1,0>F      g16<1,1,0>F     { align1 1H compacted };
cmp.ge.f0.0(16) g38<1>F         g16<1,1,0>F     g8<1,1,0>F      { align1 1H $6.src compacted };
mov(4)          g86<4>UD        g48.2<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g84<4>UD        g48.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g99<4>UD        g50.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g97<4>UD        g50.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g112<4>UD       g52.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g110<4>UD       g52.1<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(4)          g125<4>UD       g54.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g123<4>UD       g54.1<8,2,4>UD                  { align1 WE_all 1N $2.src };
mov(4)          g46<4>UD        g56.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g44<4>UD        g56.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g72<4>UD        g58.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g70<4>UD        g58.1<8,2,4>UD                  { align1 WE_all 1N };
(+f0.0) sel(16) g40<1>UD        g28<8,8,1>UD    0x7f800000UD    { align1 1H F@2 };
sel.l(4)        g82<4>F         g84<8,2,4>F     g86<8,2,4>F     { align1 WE_all 1N };
sel.l(4)        g95<4>F         g97<8,2,4>F     g99<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g108<4>F        g110<8,2,4>F    g112<8,2,4>F    { align1 WE_all 1N I@7 };
sel.ge(4)       g121<4>F        g123<8,2,4>F    g125<8,2,4>F    { align1 WE_all 1N I@6 };
sel.ge(4)       g42<4>F         g44<8,2,4>F     g46<8,2,4>F     { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.ge(4)       g68<4>F         g70<8,2,4>F     g72<8,2,4>F     { align1 WE_all 1N I@2 };
cmp.nz.f0.0(16) null<1>D        g30<8,8,1>D     0D              { align1 1H };
mov(4)          g48.2<4>UD      g82<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g50.2<4>UD      g95<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g52.2<4>UD      g108<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g54.2<4>UD      g121<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g56.2<4>UD      g42<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g58.2<4>UD      g68<8,2,4>UD                    { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g42<1>UD        g21<8,8,1>UD    0xff800000UD    { align1 1H };
mov(4)          g91<4>UD        g48.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g89<4>UD        g48.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g104<4>UD       g50.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g102<4>UD       g50.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g117<4>UD       g52.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g115<4>UD       g52.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g5<4>UD         g54.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g3<4>UD         g54.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g64<4>UD        g56.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g62<4>UD        g56.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g77<4>UD        g58.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g75<4>UD        g58.1<8,2,4>UD                  { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>D        g34<8,8,1>D     0D              { align1 1H };
sel.l(4)        g87<4>F         g89<8,2,4>F     g91<8,2,4>F     { align1 WE_all 1N };
sel.l(4)        g100<4>F        g102<8,2,4>F    g104<8,2,4>F    { align1 WE_all 1N I@7 };
sel.l(4)        g113<4>F        g115<8,2,4>F    g117<8,2,4>F    { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.ge(4)       g126<4>F        g3<8,2,4>F      g5<8,2,4>F      { align1 WE_all 1N I@6 };
sel.ge(4)       g60<4>F         g62<8,2,4>F     g64<8,2,4>F     { align1 WE_all 1N I@4 };
sel.ge(4)       g73<4>F         g75<8,2,4>F     g77<8,2,4>F     { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
(+f0.0) sel(16) g44<1>UD        g23<8,8,1>UD    0xff800000UD    { align1 1H };
mov(4)          g48.3<4>UD      g87<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g50.3<4>UD      g100<8,2,4>UD                   { align1 WE_all 1N F@5 };
mov(4)          g52.3<4>UD      g113<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g54.3<4>UD      g126<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g56.3<4>UD      g60<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g58.3<4>UD      g73<8,2,4>UD                    { align1 WE_all 1N F@1 };
cmp.nz.f0.0(16) null<1>D        g38<8,8,1>D     0D              { align1 1H };
sel.l(4)        g48.4<1>F       g48.3<0,1,0>F   g48.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.l(4)        g49.4<1>F       g49.3<0,1,0>F   g49.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.l(4)        g50.4<1>F       g50.3<0,1,0>F   g50.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.l(4)        g51.4<1>F       g51.3<0,1,0>F   g51.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.l(4)        g52.4<1>F       g52.3<0,1,0>F   g52.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.l(4)        g53.4<1>F       g53.3<0,1,0>F   g53.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g54.4<1>F       g54.3<0,1,0>F   g54.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g55.4<1>F       g55.3<0,1,0>F   g55.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g56.4<1>F       g56.3<0,1,0>F   g56.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g57.4<1>F       g57.3<0,1,0>F   g57.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g58.4<1>F       g58.3<0,1,0>F   g58.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g59.4<1>F       g59.3<0,1,0>F   g59.4<4,4,1>F   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g46<1>UD        g28<8,8,1>UD    0xff800000UD    { align1 1H };
sel.l(8)        g49<1>F         g48.7<0,1,0>F   g49<8,8,1>F     { align1 WE_all 1Q };
sel.l(8)        g51<1>F         g50.7<0,1,0>F   g51<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.l(8)        g53<1>F         g52.7<0,1,0>F   g53<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(8)       g55<1>F         g54.7<0,1,0>F   g55<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(8)       g57<1>F         g56.7<0,1,0>F   g57<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(8)       g59<1>F         g58.7<0,1,0>F   g59<8,8,1>F     { align1 WE_all 1Q F@6 };
cmp.l.f0.0(16)  null<1>UD       g26<8,8,1>UD    0x00000003UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g60<1>D         g2.2<0,1,0>D    128D            { align1 1H compacted };
shl(16)         g65<1>D         g26<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g62<1>UD        g60<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
add(16)         g68<1>D         g60<1,1,0>D     g65<1,1,0>D     { align1 1H I@2 compacted };
shr(16)         g66<1>UD        g26<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g64<1>D         -g62<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g70<1>UD        g68<1,1,0>UD    g60<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  g74<1>UD        g26<1,1,0>UD    0x00000002UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add3(16)        g72<1>D         g64<8,8,1>D     g66<8,8,1>D     -g70<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g76<1>UD        g51.7<0,1,0>UD  g53.7<0,1,0>UD  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
cmp.l.f0.0(16)  g78<1>UD        g26<1,1,0>UD    0x00000001UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
mov(8)          g50<2>UD        g68<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N F@4 };
mov(8)          g52<2>UD        g69<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g60<1>UD        g49.7<0,1,0>UD  g76<1,1,0>UD    { align1 1H compacted };
mov(8)          g50.1<2>UD      g72<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g52.1<2>UD      g73<4,4,1>UD                    { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g50UD           g60UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $7 };
add(16)         g80<1>D         g68<1,1,0>D     12D             { align1 1H compacted };
cmp.l.f0.0(16)  g82<1>UD        g80<1,1,0>UD    g68<1,1,0>UD    { align1 1H I@1 compacted };
cmp.nz.f0.0(16) null<1>D        g74<8,8,1>D     0D              { align1 1H };
mov(8)          g61<2>UD        g80<4,4,1>UD                    { align1 1Q $7.src };
mov(8)          g63<2>UD        g81<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g84<1>D         -g82<1,1,0>D    g72<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g86<1>UD        g57.7<0,1,0>UD  g59.7<0,1,0>UD  { align1 1H };
mov(8)          g63.1<2>UD      g85<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g61.1<2>UD      g84<4,4,1>UD                    { align1 1Q I@3 };
cmp.nz.f0.0(16) null<1>D        g78<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
(+f0.0) sel(16) g65<1>UD        g55.7<0,1,0>UD  g86<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g61UD           g65UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };

LABEL7:
endif(16)       JIP:  LABEL8                                    { align1 1H };

LABEL8:
mov(16)         g87<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g87<1>F         g32<1,1,0>F                     { align1 1H compacted };
mov(16)         g89<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g89<1>F         g36<1,1,0>F                     { align1 1H compacted };
mov(16)         g91<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g91<1>F         g40<1,1,0>F                     { align1 1H compacted };
mov(16)         g93<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g93<1>F         g42<1,1,0>F                     { align1 1H compacted };
mov(16)         g95<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g95<1>F         g44<1,1,0>F                     { align1 1H compacted };
mov(16)         g97<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g97<1>F         g46<1,1,0>F                     { align1 1H compacted };
cmp.l.f0.0(16)  null<1>UD       g26<8,8,1>UD    0x00000003UD    { align1 1H };
mov(8)          g80<2>UD        g87.1<8,4,2>UD                  { align1 WE_all 1Q A@6 };
mov(8)          g106<2>UD       g89.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g119<2>UD       g91.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g8<2>UD         g93.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g21<2>UD        g95.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g36<2>UD        g97.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.l(8)        g78<2>F         g87<8,4,2>F     g80<8,4,2>F     { align1 WE_all 1Q I@6 };
sel.l(8)        g104<2>F        g89<8,4,2>F     g106<8,4,2>F    { align1 WE_all 1Q I@5 };
sel.l(8)        g117<2>F        g91<8,4,2>F     g119<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.ge(8)       g6<2>F          g93<8,4,2>F     g8<8,4,2>F      { align1 WE_all 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.ge(8)       g19<2>F         g95<8,4,2>F     g21<8,4,2>F     { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.ge(8)       g34<2>F         g97<8,4,2>F     g36<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g87.1<2>UD      g78<8,4,2>UD                    { align1 WE_all 1Q A@6 };
mov(8)          g89.1<2>UD      g104<8,4,2>UD                   { align1 WE_all 1Q A@5 };
mov(8)          g91.1<2>UD      g117<8,4,2>UD                   { align1 WE_all 1Q A@4 };
mov(8)          g93.1<2>UD      g6<8,4,2>UD                     { align1 WE_all 1Q A@3 };
mov(8)          g95.1<2>UD      g19<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g97.1<2>UD      g34<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g85<4>UD        g87.2<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g83<4>UD        g87.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g111<4>UD       g89.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g109<4>UD       g89.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g124<4>UD       g91.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g122<4>UD       g91.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g13<4>UD        g93.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g11<4>UD        g93.1<8,2,4>UD                  { align1 WE_all 1N $5.src };
mov(4)          g28<4>UD        g95.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g24<4>UD        g95.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g41<4>UD        g97.2<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g39<4>UD        g97.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
sel.l(4)        g81<4>F         g83<8,2,4>F     g85<8,2,4>F     { align1 WE_all 1N };
sel.l(4)        g107<4>F        g109<8,2,4>F    g111<8,2,4>F    { align1 WE_all 1N I@7 };
sel.l(4)        g120<4>F        g122<8,2,4>F    g124<8,2,4>F    { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.ge(4)       g9<4>F          g11<8,2,4>F     g13<8,2,4>F     { align1 WE_all 1N I@5 };
sel.ge(4)       g22<4>F         g24<8,2,4>F     g28<8,2,4>F     { align1 WE_all 1N I@3 };
sel.ge(4)       g37<4>F         g39<8,2,4>F     g41<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g87.2<4>UD      g81<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g89.2<4>UD      g107<8,2,4>UD                   { align1 WE_all 1N F@5 };
mov(4)          g91.2<4>UD      g120<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g93.2<4>UD      g9<8,2,4>UD                     { align1 WE_all 1N F@3 };
mov(4)          g95.2<4>UD      g22<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g97.2<4>UD      g37<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g103<4>UD       g87.3<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g101<4>UD       g87.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g116<4>UD       g89.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g114<4>UD       g89.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g5<4>UD         g91.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g3<4>UD         g91.1<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(4)          g18<4>UD        g93.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g16<4>UD        g93.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g33<4>UD        g95.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g31<4>UD        g95.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g46<4>UD        g97.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g44<4>UD        g97.1<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g99<4>F         g101<8,2,4>F    g103<8,2,4>F    { align1 WE_all 1N };
sel.l(4)        g112<4>F        g114<8,2,4>F    g116<8,2,4>F    { align1 WE_all 1N I@7 };
sel.l(4)        g125<4>F        g3<8,2,4>F      g5<8,2,4>F      { align1 WE_all 1N I@7 };
sel.ge(4)       g14<4>F         g16<8,2,4>F     g18<8,2,4>F     { align1 WE_all 1N I@5 };
sel.ge(4)       g29<4>F         g31<8,2,4>F     g33<8,2,4>F     { align1 WE_all 1N I@3 };
sel.ge(4)       g42<4>F         g44<8,2,4>F     g46<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g87.3<4>UD      g99<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g89.3<4>UD      g112<8,2,4>UD                   { align1 WE_all 1N F@5 };
mov(4)          g91.3<4>UD      g125<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g93.3<4>UD      g14<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g95.3<4>UD      g29<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g97.3<4>UD      g42<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g87.4<1>F       g87.3<0,1,0>F   g87.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.l(4)        g88.4<1>F       g88.3<0,1,0>F   g88.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.l(4)        g89.4<1>F       g89.3<0,1,0>F   g89.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.l(4)        g90.4<1>F       g90.3<0,1,0>F   g90.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.l(4)        g91.4<1>F       g91.3<0,1,0>F   g91.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g92.4<1>F       g92.3<0,1,0>F   g92.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g93.4<1>F       g93.3<0,1,0>F   g93.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g94.4<1>F       g94.3<0,1,0>F   g94.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g95.4<1>F       g95.3<0,1,0>F   g95.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g96.4<1>F       g96.3<0,1,0>F   g96.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g97.4<1>F       g97.3<0,1,0>F   g97.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g98.4<1>F       g98.3<0,1,0>F   g98.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(8)        g88<1>F         g87.7<0,1,0>F   g88<8,8,1>F     { align1 WE_all 1Q };
sel.l(8)        g90<1>F         g89.7<0,1,0>F   g90<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.l(8)        g92<1>F         g91.7<0,1,0>F   g92<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(8)       g94<1>F         g93.7<0,1,0>F   g94<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(8)       g96<1>F         g95.7<0,1,0>F   g96<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(8)       g98<1>F         g97.7<0,1,0>F   g98<8,8,1>F     { align1 WE_all 1Q F@6 };
(+f0.0) if(16)  JIP:  LABEL9          UIP:  LABEL9              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
shl(16)         g99<1>D         g26<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g102<1>D        g2<0,1,0>D      g99<1,1,0>D     { align1 1H compacted };
shr(16)         g100<1>UD       g26<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g104<1>UD       g102<1,1,0>UD   g2<0,1,0>UD     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g66<2>UD        g102<4,4,1>UD                   { align1 1Q };
mov(8)          g68<2>UD        g103<4,4,1>UD                   { align1 2Q };
cmp.l.f0.0(16)  g108<1>UD       g26<1,1,0>UD    0x00000002UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add3(16)        g106<1>D        g2.1<0,1,0>D    g100<8,8,1>D    -g104<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g110<1>UD       g90.7<0,1,0>UD  g92.7<0,1,0>UD  { align1 1H };
mov(8)          g68.1<2>UD      g107<4,4,1>UD                   { align1 2Q I@2 };
mov(8)          g66.1<2>UD      g106<4,4,1>UD                   { align1 1Q I@3 };
cmp.l.f0.0(16)  g112<1>UD       g26<1,1,0>UD    0x00000001UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g70<1>UD        g88.7<0,1,0>UD  g110<1,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g66UD           g70UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };
add(16)         g114<1>D        g102<1,1,0>D    16D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g116<1>UD       g114<1,1,0>UD   g102<1,1,0>UD   { align1 1H compacted };
cmp.nz.f0.0(16) null<1>D        g108<8,8,1>D    0D              { align1 1H I@7 };
mov(8)          g71<2>UD        g114<4,4,1>UD                   { align1 1Q $8.src };
mov(8)          g73<2>UD        g115<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g118<1>D        -g116<1,1,0>D   g106<1,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g120<1>UD       g96.7<0,1,0>UD  g98.7<0,1,0>UD  { align1 1H };
mov(8)          g73.1<2>UD      g119<4,4,1>UD                   { align1 2Q I@2 };
mov(8)          g71.1<2>UD      g118<4,4,1>UD                   { align1 1Q I@3 };
cmp.nz.f0.0(16) null<1>D        g112<8,8,1>D    0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
(+f0.0) sel(16) g75<1>UD        g94.7<0,1,0>UD  g120<1,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g71UD           g75UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $9 };

LABEL9:
endif(16)       JIP:  LABEL10                                   { align1 1H };

LABEL10:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_code[] = {
    0x80000065, 0x2f058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x79050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa002f0c, 0x00340000,
    0xe2303040, 0x04012f03, 0x80030061, 0x0d054410,
    0x00000000, 0x76543210, 0x00041b69, 0x18058660,
    0x02467905, 0x00000004, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa00300c, 0x00300000, 0x640d1a40, 0x00800d95,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x1a050160, 0x00460d05, 0x00000000,
    0xa01c1940, 0x1a001802, 0x80102101, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x7d260660,
    0x00000324, 0x00000000, 0x00030061, 0x7b260660,
    0x00000324, 0x00000000, 0x00040065, 0x0a058220,
    0x02000344, 0x00ffffff, 0x00131b61, 0x7d060660,
    0x00000304, 0x00000000, 0x00031b61, 0x7b060660,
    0x00000304, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x16140000,
    0xfb047b24, 0x00040000, 0x0004e270, 0x00010220,
    0x52461c05, 0x00461605, 0x00040061, 0x17050020,
    0x0000035c, 0x00000000, 0x01040022, 0x0001c060,
    0x000003f0, 0x00000380, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00033261, 0x7c260660,
    0x000002e4, 0x00000000, 0x00133261, 0x7e260660,
    0x000002e4, 0x00000000, 0x00031a61, 0x7c060660,
    0x000002c4, 0x00000000, 0x00131a61, 0x7e060660,
    0x000002c4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x1e440000,
    0xfb047c24, 0x003c0000, 0x00032241, 0x20010220,
    0x01461c05, 0x00562206, 0x00042241, 0x28050660,
    0x01461c05, 0x00562206, 0x00040041, 0x4c050660,
    0x01461c05, 0x00562216, 0x00042241, 0x2a050660,
    0x01461c05, 0x00562406, 0x3e260049, 0x22001c03,
    0x00041b40, 0x28160110, 0x01562816, 0x00564c06,
    0x00040041, 0x4d050660, 0x01461c05, 0x00562416,
    0x00130041, 0x20010220, 0x01461d05, 0x00562306,
    0xa02eb240, 0x28001e02, 0x00041b40, 0x2a160110,
    0x01562a16, 0x00564d06, 0x00130049, 0x27050222,
    0x02461d05, 0x00462305, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x27301b70, 0x1e002e03,
    0x00030061, 0x0c060220, 0x00342e05, 0x00000000,
    0x00130061, 0x0e060220, 0x00342f05, 0x00000000,
    0xa03b0040, 0x01002e03, 0xa02c1d40, 0x2a002602,
    0x273d1a70, 0x2e003b03, 0x0004a252, 0x32040e68,
    0x0e2e2005, 0x30052c05, 0x00131961, 0x0e260220,
    0x00343305, 0x00000000, 0x00031a61, 0x0c260220,
    0x00343205, 0x00000000, 0xa03f1c40, 0x32023d02,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x33440000, 0xfb040c24, 0x003c0000,
    0x00033361, 0x0d060220, 0x00343b05, 0x00000000,
    0x00133361, 0x0f060220, 0x00343c05, 0x00000000,
    0x00031a61, 0x0d260220, 0x00343f05, 0x00000000,
    0x00131a61, 0x0f260220, 0x00344005, 0x00000000,
    0xe7412370, 0x7f833500, 0xe7432370, 0x7f833300,
    0xe7472370, 0x7f833700, 0x20451265, 0x43004103,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x40240000, 0xfb040d24, 0x000c0000,
    0x20490965, 0x47004503, 0xe74b2470, 0x7f834000,
    0x27570062, 0x40003500, 0x255b0062, 0x40003500,
    0x255d2462, 0x42003700, 0xe74d2370, 0x7f833900,
    0xe7510070, 0x7f834200, 0x204f1265, 0x4d004b03,
    0x20530965, 0x51004f03, 0x2e551965, 0x53004903,
    0x00041961, 0x4e062650, 0x00465505, 0x00000000,
    0x01041562, 0x06058220, 0x02465705, 0x7f800000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x01041362, 0x10058220, 0x02465d05, 0xff800000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x01041462, 0x0e058220, 0x02465b05, 0xff800000,
    0x27561b62, 0x39003300, 0x27581b62, 0x42003700,
    0x00041c61, 0x14050110, 0x00564e06, 0x00000000,
    0x01041262, 0x04058220, 0x02465605, 0x7f800000,
    0x01041162, 0x08058220, 0x02465805, 0x7f800000,
    0x25591962, 0x39003300, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x01041162, 0x0c058220,
    0x02465905, 0xff800000, 0x00040024, 0x0001c060,
    0x00000080, 0x00000080, 0x00041d61, 0x14054110,
    0x00000000, 0x00000000, 0x00041c61, 0x08054220,
    0x00000000, 0x7f800000, 0x00041f61, 0x06054220,
    0x00000000, 0x7f800000, 0x00041f61, 0x04054220,
    0x00000000, 0x7f800000, 0x00040061, 0x10054220,
    0x00000000, 0xff800000, 0x00040061, 0x0e054220,
    0x00000000, 0xff800000, 0x00041f61, 0x0c054220,
    0x00000000, 0xff800000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x605e1e65, 0x00101405,
    0x00041961, 0x5f050450, 0x00685e06, 0x00000000,
    0x00041970, 0x62058550, 0x25585f05, 0x00000000,
    0x00041961, 0x60050560, 0x00466205, 0x00000000,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00041a70, 0x00018220, 0x22466005, 0x00000000,
    0x00040061, 0x63050120, 0x00003000, 0x00000000,
    0x00040079, 0x65058620, 0x06461a05, 0x00000000,
    0x00041a4d, 0x22050220, 0x00466305, 0x00000000,
    0x00040070, 0x00018660, 0x16461a05, 0x00000000,
    0x20671b65, 0x65006303, 0x0004194d, 0x69050220,
    0x00466705, 0x00000000, 0x01040022, 0x0001c060,
    0x00000098, 0x00000098, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa06b0040, 0x02410203,
    0x276d1970, 0x02106b03, 0x00030061, 0x1e060220,
    0x00346b05, 0x00000000, 0x00130061, 0x20060220,
    0x00346c05, 0x00000000, 0xa06f1b40, 0x02126d12,
    0x00031961, 0x1e260220, 0x00346f05, 0x00000000,
    0x00131a61, 0x20260220, 0x00347005, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x15140000, 0xfb181e24, 0x01002214,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0xa070b540, 0x15106902, 0x00040061, 0x00010660,
    0x20466005, 0x00000000, 0x01040022, 0x0001c060,
    0x00000168, 0x00000168, 0x00041b69, 0x72058660,
    0x02467005, 0x00000005, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa0751940, 0x7201025a,
    0xe0730068, 0x01b07003, 0x00040069, 0x71058660,
    0x02461705, 0x0000001d, 0x27771b70, 0x0210750b,
    0x00033561, 0x23060220, 0x00347505, 0x00000000,
    0x00130061, 0x25060220, 0x00347605, 0x00000000,
    0x20121c66, 0x71001c03, 0x00041c52, 0x79040660,
    0x0e2e02a4, 0x77057305, 0x00131961, 0x25260220,
    0x00347a05, 0x00000000, 0x00031a61, 0x23260220,
    0x00347905, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x00000000,
    0xfb0c2324, 0x003c0444, 0xa07b3240, 0x01007503,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x277d1970, 0x75007b03, 0x00033561, 0x24060220,
    0x00347b05, 0x00000000, 0x00133561, 0x26060220,
    0x00347c05, 0x00000000, 0xa0141b40, 0x79027d02,
    0x00131961, 0x26260220, 0x00341505, 0x00000000,
    0x00031a61, 0x24260220, 0x00341405, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xfb0c2424, 0x003c0c44,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80002501, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x20151b40, 0x0c000400, 0x251e3570, 0x04000c00,
    0xa3303161, 0x7f810000, 0x60300061, 0x00100400,
    0xa3323561, 0x7f810000, 0x60320061, 0x00100600,
    0xa3343561, 0x7f810000, 0x60340061, 0x00100800,
    0xa3360061, 0xff810000, 0x60360061, 0x00100c00,
    0xa3383661, 0xff810000, 0x60380061, 0x00100e00,
    0xa33a3661, 0xff810000, 0x603a0061, 0x00101000,
    0x20170040, 0x0e000600, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x01041762, 0x20058220,
    0x02461505, 0x7f800000, 0x80031761, 0x51060220,
    0x00443026, 0x00000000, 0x80031661, 0x5e060220,
    0x00443226, 0x00000000, 0x80031561, 0x6b060220,
    0x00443426, 0x00000000, 0x80031461, 0x78060220,
    0x00443626, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80031361, 0x24060220,
    0x00443826, 0x00000000, 0x80031261, 0x43060220,
    0x00443a26, 0x00000000, 0x25223570, 0x06000e00,
    0x80031e62, 0x4f060aa0, 0x5a443006, 0x00445106,
    0x80031d62, 0x5c060aa0, 0x5a443206, 0x00445e06,
    0x80031c62, 0x69060aa0, 0x5a443406, 0x00446b06,
    0x80031b62, 0x76060aa0, 0x4a443606, 0x00447806,
    0x80031a62, 0x1c060aa0, 0x4a443806, 0x00442406,
    0x80031962, 0x41060aa0, 0x4a443a06, 0x00444306,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x24058220, 0x02461705, 0x7f800000,
    0x80030e61, 0x30260220, 0x00444f06, 0x00000000,
    0x80030d61, 0x32260220, 0x00445c06, 0x00000000,
    0x80030c61, 0x34260220, 0x00446906, 0x00000000,
    0x80030b61, 0x36260220, 0x00447606, 0x00000000,
    0x80030a61, 0x38260220, 0x00441c06, 0x00000000,
    0x80030961, 0x3a260220, 0x00444106, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x201c0040, 0x10000800, 0x25263670, 0x08001000,
    0x80021e61, 0x56070220, 0x00423047, 0x00000000,
    0x80020061, 0x54070220, 0x00423027, 0x00000000,
    0x80021f61, 0x63070220, 0x00423247, 0x00000000,
    0x80020061, 0x61070220, 0x00423227, 0x00000000,
    0x80021f61, 0x70070220, 0x00423447, 0x00000000,
    0x80020061, 0x6e070220, 0x00423427, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80021f61, 0x7d070220, 0x00423647, 0x00000000,
    0x80023261, 0x7b070220, 0x00423627, 0x00000000,
    0x80021f61, 0x2e070220, 0x00423847, 0x00000000,
    0x80020061, 0x2c070220, 0x00423827, 0x00000000,
    0x80020061, 0x48070220, 0x00423a47, 0x00000000,
    0x80020061, 0x46070220, 0x00423a27, 0x00000000,
    0x01041262, 0x28058220, 0x02461c05, 0x7f800000,
    0x80020062, 0x52070aa0, 0x5a425407, 0x00425607,
    0x80021f62, 0x5f070aa0, 0x5a426107, 0x00426307,
    0x80021f62, 0x6c070aa0, 0x5a426e07, 0x00427007,
    0x80021e62, 0x79070aa0, 0x4a427b07, 0x00427d07,
    0x80021c62, 0x2a070aa0, 0x4a422c07, 0x00422e07,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80021a62, 0x44070aa0, 0x4a424607, 0x00424807,
    0x00040070, 0x00018660, 0x26461e05, 0x00000000,
    0x80021661, 0x30470220, 0x00425207, 0x00000000,
    0x80021561, 0x32470220, 0x00425f07, 0x00000000,
    0x80021461, 0x34470220, 0x00426c07, 0x00000000,
    0x80021361, 0x36470220, 0x00427907, 0x00000000,
    0x80021261, 0x38470220, 0x00422a07, 0x00000000,
    0x80021161, 0x3a470220, 0x00424407, 0x00000000,
    0x01040062, 0x2a058220, 0x02461505, 0xff800000,
    0x80021f61, 0x5b070220, 0x00423067, 0x00000000,
    0x80020061, 0x59070220, 0x00423027, 0x00000000,
    0x80021f61, 0x68070220, 0x00423267, 0x00000000,
    0x80020061, 0x66070220, 0x00423227, 0x00000000,
    0x80021f61, 0x75070220, 0x00423467, 0x00000000,
    0x80020061, 0x73070220, 0x00423427, 0x00000000,
    0x80021f61, 0x05070220, 0x00423667, 0x00000000,
    0x80020061, 0x03070220, 0x00423627, 0x00000000,
    0x80020061, 0x40070220, 0x00423867, 0x00000000,
    0x80020061, 0x3e070220, 0x00423827, 0x00000000,
    0x80020061, 0x4d070220, 0x00423a67, 0x00000000,
    0x80020061, 0x4b070220, 0x00423a27, 0x00000000,
    0x00040070, 0x00018660, 0x26462205, 0x00000000,
    0x80020062, 0x57070aa0, 0x5a425907, 0x00425b07,
    0x80021f62, 0x64070aa0, 0x5a426607, 0x00426807,
    0x80021f62, 0x71070aa0, 0x5a427307, 0x00427507,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80021e62, 0x7e070aa0, 0x4a420307, 0x00420507,
    0x80021c62, 0x3c070aa0, 0x4a423e07, 0x00424007,
    0x80021a62, 0x49070aa0, 0x4a424b07, 0x00424d07,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x2c058220, 0x02461705, 0xff800000,
    0x80021661, 0x30670220, 0x00425707, 0x00000000,
    0x80021561, 0x32670220, 0x00426407, 0x00000000,
    0x80021461, 0x34670220, 0x00427107, 0x00000000,
    0x80021361, 0x36670220, 0x00427e07, 0x00000000,
    0x80021261, 0x38670220, 0x00423c07, 0x00000000,
    0x80021161, 0x3a670220, 0x00424907, 0x00000000,
    0x00040070, 0x00018660, 0x26462605, 0x00000000,
    0x80021f62, 0x30850aa0, 0x5a003064, 0x00343085,
    0x80021f62, 0x31850aa0, 0x5a003164, 0x00343185,
    0x80021e62, 0x32850aa0, 0x5a003264, 0x00343285,
    0x80021e62, 0x33850aa0, 0x5a003364, 0x00343385,
    0x80021d62, 0x34850aa0, 0x5a003464, 0x00343485,
    0x80021d62, 0x35850aa0, 0x5a003564, 0x00343585,
    0x80021c62, 0x36850aa0, 0x4a003664, 0x00343685,
    0x80021c62, 0x37850aa0, 0x4a003764, 0x00343785,
    0x80021b62, 0x38850aa0, 0x4a003864, 0x00343885,
    0x80021b62, 0x39850aa0, 0x4a003964, 0x00343985,
    0x80021a62, 0x3a850aa0, 0x4a003a64, 0x00343a85,
    0x80021a62, 0x3b850aa0, 0x4a003b64, 0x00343b85,
    0x01040062, 0x2e058220, 0x02461c05, 0xff800000,
    0x80030062, 0x31050aa0, 0x5a0030e4, 0x00463105,
    0x80031762, 0x33050aa0, 0x5a0032e4, 0x00463305,
    0x80031762, 0x35050aa0, 0x5a0034e4, 0x00463505,
    0x80031762, 0x37050aa0, 0x4a0036e4, 0x00463705,
    0x80031762, 0x39050aa0, 0x4a0038e4, 0x00463905,
    0x80031662, 0x3b050aa0, 0x4a003ae4, 0x00463b05,
    0x00040070, 0x00018220, 0x52461a05, 0x00000003,
    0x01040022, 0x0001c060, 0x00000268, 0x00000268,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa03c0040, 0x08010243, 0x00040069, 0x41058660,
    0x02461a05, 0x00000002, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x273e0070, 0x02103c2b,
    0xa0441a40, 0x41003c02, 0xe0420068, 0x01e01a03,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa0400040, 0x02123e1a, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x27460070, 0x3c004403,
    0xe74a0070, 0x00201a03, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x48040e68,
    0x0e2e4005, 0x46054205, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x4c050220,
    0x020033e4, 0x000035e4, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0xe74e0070, 0x00101a03,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x32060220, 0x00344405, 0x00000000,
    0x80101401, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x34060220, 0x00344505, 0x00000000,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x2f3c0062, 0x4c013183, 0x00031b61, 0x32260220,
    0x00344805, 0x00000000, 0x00131b61, 0x34260220,
    0x00344905, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x00000000,
    0xfb2a3224, 0x01003c14, 0xa0500040, 0x00c04403,
    0x27521970, 0x44005003, 0x00040070, 0x00018660,
    0x26464a05, 0x00000000, 0x00033761, 0x3d060220,
    0x00345005, 0x00000000, 0x00130061, 0x3f060220,
    0x00345105, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0540040, 0x48025202,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x56050220, 0x020039e4, 0x00003be4,
    0x00131a61, 0x3f260220, 0x00345505, 0x00000000,
    0x00031b61, 0x3d260220, 0x00345405, 0x00000000,
    0x00040070, 0x00018660, 0x26464e05, 0x00000000,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0x2f410062, 0x56013783, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xfb2c3d24, 0x01004114, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0xa3571a61, 0x7f810000,
    0x60570061, 0x00102000, 0xa3590061, 0x7f810000,
    0x60590061, 0x00102400, 0xa35b0061, 0x7f810000,
    0x605b0061, 0x00102800, 0xa35d0061, 0xff810000,
    0x605d0061, 0x00102a00, 0xa35f0061, 0xff810000,
    0x605f0061, 0x00102c00, 0xa3611c61, 0xff810000,
    0x60610061, 0x00102e00, 0x00040070, 0x00018220,
    0x52461a05, 0x00000003, 0x80030e61, 0x50060220,
    0x00445726, 0x00000000, 0x80031561, 0x6a060220,
    0x00445926, 0x00000000, 0x80031461, 0x77060220,
    0x00445b26, 0x00000000, 0x80031361, 0x08060220,
    0x00445d26, 0x00000000, 0x80031261, 0x15060220,
    0x00445f26, 0x00000000, 0x80031161, 0x24060220,
    0x00446126, 0x00000000, 0x80031e62, 0x4e060aa0,
    0x5a445706, 0x00445006, 0x80031d62, 0x68060aa0,
    0x5a445906, 0x00446a06, 0x80031c62, 0x75060aa0,
    0x5a445b06, 0x00447706, 0x80031b62, 0x06060aa0,
    0x4a445d06, 0x00440806, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80031a62, 0x13060aa0,
    0x4a445f06, 0x00441506, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80031962, 0x22060aa0,
    0x4a446106, 0x00442406, 0x80030e61, 0x57260220,
    0x00444e06, 0x00000000, 0x80030d61, 0x59260220,
    0x00446806, 0x00000000, 0x80030c61, 0x5b260220,
    0x00447506, 0x00000000, 0x80030b61, 0x5d260220,
    0x00440606, 0x00000000, 0x80030a61, 0x5f260220,
    0x00441306, 0x00000000, 0x80030961, 0x61260220,
    0x00442206, 0x00000000, 0x80021e61, 0x55070220,
    0x00425747, 0x00000000, 0x80020061, 0x53070220,
    0x00425727, 0x00000000, 0x80021f61, 0x6f070220,
    0x00425947, 0x00000000, 0x80020061, 0x6d070220,
    0x00425927, 0x00000000, 0x80021f61, 0x7c070220,
    0x00425b47, 0x00000000, 0x80020061, 0x7a070220,
    0x00425b27, 0x00000000, 0x80021f61, 0x0d070220,
    0x00425d47, 0x00000000, 0x80023561, 0x0b070220,
    0x00425d27, 0x00000000, 0x80021f61, 0x1c070220,
    0x00425f47, 0x00000000, 0x80020061, 0x18070220,
    0x00425f27, 0x00000000, 0x80021761, 0x29070220,
    0x00426147, 0x00000000, 0x80021761, 0x27070220,
    0x00426127, 0x00000000, 0x80020062, 0x51070aa0,
    0x5a425307, 0x00425507, 0x80021f62, 0x6b070aa0,
    0x5a426d07, 0x00426f07, 0x80021f62, 0x78070aa0,
    0x5a427a07, 0x00427c07, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80021d62, 0x09070aa0,
    0x4a420b07, 0x00420d07, 0x80021b62, 0x16070aa0,
    0x4a421807, 0x00421c07, 0x80021962, 0x25070aa0,
    0x4a422707, 0x00422907, 0x80021661, 0x57470220,
    0x00425107, 0x00000000, 0x80021561, 0x59470220,
    0x00426b07, 0x00000000, 0x80021461, 0x5b470220,
    0x00427807, 0x00000000, 0x80021361, 0x5d470220,
    0x00420907, 0x00000000, 0x80021261, 0x5f470220,
    0x00421607, 0x00000000, 0x80021161, 0x61470220,
    0x00422507, 0x00000000, 0x80021e61, 0x67070220,
    0x00425767, 0x00000000, 0x80020061, 0x65070220,
    0x00425727, 0x00000000, 0x80021f61, 0x74070220,
    0x00425967, 0x00000000, 0x80020061, 0x72070220,
    0x00425927, 0x00000000, 0x80021f61, 0x05070220,
    0x00425b67, 0x00000000, 0x80020061, 0x03070220,
    0x00425b27, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80021f61, 0x12070220,
    0x00425d67, 0x00000000, 0x80020061, 0x10070220,
    0x00425d27, 0x00000000, 0x80021f61, 0x21070220,
    0x00425f67, 0x00000000, 0x80020061, 0x1f070220,
    0x00425f27, 0x00000000, 0x80020061, 0x2e070220,
    0x00426167, 0x00000000, 0x80020061, 0x2c070220,
    0x00426127, 0x00000000, 0x80020062, 0x63070aa0,
    0x5a426507, 0x00426707, 0x80021f62, 0x70070aa0,
    0x5a427207, 0x00427407, 0x80021f62, 0x7d070aa0,
    0x5a420307, 0x00420507, 0x80021d62, 0x0e070aa0,
    0x4a421007, 0x00421207, 0x80021b62, 0x1d070aa0,
    0x4a421f07, 0x00422107, 0x80021962, 0x2a070aa0,
    0x4a422c07, 0x00422e07, 0x80021661, 0x57670220,
    0x00426307, 0x00000000, 0x80021561, 0x59670220,
    0x00427007, 0x00000000, 0x80021461, 0x5b670220,
    0x00427d07, 0x00000000, 0x80021361, 0x5d670220,
    0x00420e07, 0x00000000, 0x80021261, 0x5f670220,
    0x00421d07, 0x00000000, 0x80021161, 0x61670220,
    0x00422a07, 0x00000000, 0x80021e62, 0x57850aa0,
    0x5a005764, 0x00345785, 0x80021e62, 0x58850aa0,
    0x5a005864, 0x00345885, 0x80021d62, 0x59850aa0,
    0x5a005964, 0x00345985, 0x80021d62, 0x5a850aa0,
    0x5a005a64, 0x00345a85, 0x80021c62, 0x5b850aa0,
    0x5a005b64, 0x00345b85, 0x80021c62, 0x5c850aa0,
    0x5a005c64, 0x00345c85, 0x80021b62, 0x5d850aa0,
    0x4a005d64, 0x00345d85, 0x80021b62, 0x5e850aa0,
    0x4a005e64, 0x00345e85, 0x80021a62, 0x5f850aa0,
    0x4a005f64, 0x00345f85, 0x80021a62, 0x60850aa0,
    0x4a006064, 0x00346085, 0x80021962, 0x61850aa0,
    0x4a006164, 0x00346185, 0x80021962, 0x62850aa0,
    0x4a006264, 0x00346285, 0x80030062, 0x58050aa0,
    0x5a0057e4, 0x00465805, 0x80031762, 0x5a050aa0,
    0x5a0059e4, 0x00465a05, 0x80031762, 0x5c050aa0,
    0x5a005be4, 0x00465c05, 0x80031762, 0x5e050aa0,
    0x4a005de4, 0x00465e05, 0x80031762, 0x60050aa0,
    0x4a005fe4, 0x00466005, 0x80031662, 0x62050aa0,
    0x4a0061e4, 0x00466205, 0x01040022, 0x0001c060,
    0x00000250, 0x00000250, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x63058660,
    0x02461a05, 0x00000002, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0660040, 0x63010202,
    0xe0640068, 0x01e01a03, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x27680070, 0x02106603,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x42060220, 0x00346605, 0x00000000,
    0x00130061, 0x44060220, 0x00346705, 0x00000000,
    0xe76c0070, 0x00201a03, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x6a040660,
    0x0e2e0224, 0x68056405, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x6e050220,
    0x02005ae4, 0x00005ce4, 0x00131a61, 0x44260220,
    0x00346b05, 0x00000000, 0x00031b61, 0x42260220,
    0x00346a05, 0x00000000, 0xe7700070, 0x00101a03,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x2f460062, 0x6e015883, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xfb2a4224, 0x01004614, 0xa0720040, 0x01006603,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x27740070, 0x66007203, 0x00041f70, 0x00018660,
    0x26466c05, 0x00000000, 0x00033861, 0x47060220,
    0x00347205, 0x00000000, 0x00130061, 0x49060220,
    0x00347305, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0760040, 0x6a027402,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x78050220, 0x020060e4, 0x000062e4,
    0x00131a61, 0x49260220, 0x00347705, 0x00000000,
    0x00031b61, 0x47260220, 0x00347605, 0x00000000,
    0x00040070, 0x00018660, 0x26467005, 0x00000000,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0x2f4b0062, 0x78015e83, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x00000000,
    0xfb2c4724, 0x01004b14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80030061, 0x7e050220,
    0x00460005, 0x00000000, 0x80040931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_primref_procedurals_to_primrefs_indirect = {
   .prog_data = {
      .base.nr_params = 19,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 3,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 6720,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_printfs,
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
const char *gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_sha1 = "6d5e6fec3d806fe9a6a63b6e9451a2272e3f611a";

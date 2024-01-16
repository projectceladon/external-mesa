#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_BFS_BFS_pass1_initial_batchable_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_BFS_BFS_pass1_initial_batchable_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g115<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g34<1>UD        g0.1<0,1,0>UD                   { align1 1H };
mov(16)         g59<1>D         1D                              { align1 1H };
mov(16)         g36<1>UD        0x00000000UD                    { align1 1H };
mov(8)          g33<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(1)          g116<1>UD       g115<0,1,0>UD   0x00000000UD    { align1 WE_all 1N I@5 compacted };
mov(8)          g48.1<2>F       0x0F             /* 0F */       { align1 2Q };
add(8)          g33.8<1>UW      g33<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g116UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g48<2>F         0x0F             /* 0F */       { align1 2Q F@1 };
mov(8)          g38.1<2>UD      g48.1<8,4,2>UD                  { align1 2Q F@1 };
mov(8)          g38<2>UD        g48<8,4,2>UD                    { align1 2Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g29.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g50.1<2>F       g2.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g31.1<2>F       g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g52.1<2>F       g2.3<0,1,0>F                    { align1 2Q };
mov(8)          g29<2>F         g2<0,1,0>F                      { align1 1Q F@4 compacted };
mov(8)          g50<2>F         g2<0,1,0>F                      { align1 2Q F@4 compacted };
mov(8)          g31<2>F         g2.2<0,1,0>F                    { align1 1Q F@4 compacted };
mov(8)          g52<2>F         g2.2<0,1,0>F                    { align1 2Q F@4 compacted };
add(8)          g99<1>D         g29<8,4,2>D     1064D           { align1 1Q F@4 compacted };
add(8)          g63<1>D         g29<8,4,2>D     1068D           { align1 1Q compacted };
mov(8)          g54<1>UD        g29.1<8,4,2>UD                  { align1 1Q };
add(8)          g56<1>D         g50<8,4,2>D     1064D           { align1 2Q F@3 compacted };
add(8)          g64<1>D         g50<8,4,2>D     1068D           { align1 2Q compacted };
mov(8)          g55<1>UD        g50.1<8,4,2>UD                  { align1 2Q };
cmp.l.f0.0(8)   g100<1>UD       g99<8,8,1>UD    g29<8,4,2>UD    { align1 1Q I@6 };
mov(8)          g19<2>UD        g99<4,4,1>UD                    { align1 1Q };
cmp.l.f0.0(8)   g65<1>UD        g63<8,8,1>UD    g29<8,4,2>UD    { align1 1Q I@7 };
cmp.l.f0.0(8)   g57<1>UD        g56<8,8,1>UD    g50<8,4,2>UD    { align1 2Q I@6 };
mov(8)          g21<2>UD        g56<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(8)   g66<1>UD        g64<8,8,1>UD    g50<8,4,2>UD    { align1 2Q I@7 };
add(8)          g101<1>D        -g100<8,8,1>D   g29.1<8,4,2>D   { align1 1Q I@6 };
mov(8)          g98.1<2>F       0x0F             /* 0F */       { align1 1Q I@6 };
add(8)          g58<1>D         -g57<8,8,1>D    g50.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g19.1<2>UD      g101<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g98<2>F         0x0F             /* 0F */       { align1 1Q F@1 };
mov(8)          g21.1<2>UD      g58<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g96.1<2>UD      g98.1<8,4,2>UD                  { align1 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g61UD           g19UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
mov(8)          g96<2>UD        g98<8,4,2>UD                    { align1 1Q I@1 };

LABEL3:
shl(8)          g67<1>D         g96<8,4,2>D     0x00000002UD    { align1 1Q I@1 };
shl(8)          g68<1>D         g38<8,4,2>D     0x00000002UD    { align1 2Q I@3 };
add(16)         g69<1>D         g63<1,1,0>D     g67<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g71<1>UD        g69<1,1,0>UD    g63<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g75<2>UD        g69<4,4,1>UD                    { align1 1Q };
mov(8)          g77<2>UD        g70<4,4,1>UD                    { align1 2Q };
add3(16)        g73<1>D         -g65<8,8,1>D    g54<8,8,1>D     -g71<1,1,1>D { align1 1H I@3 };
mov(8)          g77.1<2>UD      g74<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g75.1<2>UD      g73<4,4,1>UD                    { align1 1Q I@2 };
fbl(1)          g81<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
add(16)         g87<1>W         g33<16,16,1>UW  -1W             { align1 WE_all 1H };
shl(1)          a0<1>UD         g81<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@3 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g103<2>D        g[a0 352]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g103.1<2>D      g[a0 356]<0,1,0>D               { align1 WE_all 1N };
mov(1)          g107<2>UW       0x00000000UD                    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g20.1<2>UD      g103.1<0,1,0>UD                 { align1 WE_all 1Q I@2 };
mov(8)          g20<2>UD        g103<0,1,0>UD                   { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) g79UD    g20UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $1 };
mov(16)         g83<1>D         0D                              { align1 WE_all 1H $1.dst };
mov(16)         g83<1>D         g79<8,8,1>D                     { align1 1H };
mov(16)         a0<1>UW         0x0a60UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g87<8,8,1>W     0x0002UW        { align1 WE_all 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0a60UW        { align1 WE_all 1H A@1 };
mov(16)         g85<1>UD        g[a0]<VxH,1,0>UD                { align1 WE_all 1H A@1 compacted };
mov(1)          g85<1>D         0D                              { align1 WE_all 1N I@1 };
add(8)          g85.1<2>D       g85<8,4,2>D     g85.1<8,4,2>D   { align1 WE_all 1Q I@1 };
add(4)          g85.2<4>D       g85.1<8,2,4>D   g85.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g85.3<4>D       g85.1<8,2,4>D   g85.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g85.4<1>D       g85.3<0,1,0>D   g85.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g86.4<1>D       g86.3<0,1,0>D   g86.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(8)          g86<1>D         g85.7<0,1,0>D   g86<1,1,0>D     { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g88<1>D         g34<1,1,0>D     -g85<1,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g90<1>UD        g88<1,1,0>UD    g79<1,1,0>UD    { align1 1H I@1 compacted };
mov(1)          f0<1>UW         g107<0,1,0>UW                   { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g90<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov.nz.f0.0(16) g92<1>UD        f0<0,1,0>UW                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
mov(16)         g40<1>UD        0xffffffffUD                    { align1 1H };
break(16)       JIP:  LABEL0          UIP:  LABEL1              { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };
add(16)         g94<1>D         g85<1,1,0>D     g79<1,1,0>D     { align1 1H compacted };
add(16)         g36<1>D         g36<1,1,0>D     16D             { align1 1H compacted };
add(16)         g34<1>D         g34<1,1,0>D     -g95.7<0,1,0>D  { align1 1H I@2 compacted };
cmp.ge.f0.0(16) null<1>UD       g36<8,8,1>UD    g61<8,8,1>UD    { align1 1H @2 $1.dst };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL2              { align1 1H };
mov(16)         g40<1>UD        0x00000000UD                    { align1 1H I@7 };
break(16)       JIP:  LABEL2          UIP:  LABEL1              { align1 1H };

LABEL2:
endif(16)       JIP:  LABEL1                                    { align1 1H };
mov(8)          g96<2>UD        g36<4,4,1>UD                    { align1 1Q };
mov(8)          g38<2>UD        g37<4,4,1>UD                    { align1 2Q };
mov(8)          g96.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g38.1<2>UD      0x00000000UD                    { align1 2Q I@2 };

LABEL1:
while(16)       JIP:  LABEL3                                    { align1 1H };
mov.nz.f0.0(16) null<1>D        g40<8,8,1>D                     { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL4              { align1 1H };
fbl(16)         g95<1>UD        g92<8,8,1>UD                    { align1 1H I@3 };
cmp.z.f0.0(16)  null<1>D        g92<8,8,1>D     0D              { align1 1H };
(-f0.0) sel(16) g97<1>UD        g95<8,8,1>UD    0x00000020UD    { align1 1H I@2 };
add(16)         g41<1>D         g36<1,1,0>D     g97<1,1,0>D     { align1 1H I@1 compacted };
mov(16)         a0<1>UW         0x0b00UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g97<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0b00UW        { align1 1H A@1 };
mov(16)         g43<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
else(16)        JIP:  LABEL4          UIP:  LABEL4              { align1 1H };

LABEL5:
mov(16)         g41<1>UD        0x00000000UD                    { align1 1H I@2 };
mov(16)         g43<1>UD        0x00000000UD                    { align1 1H I@3 };

LABEL4:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
add(8)          g98<1>D         g29<8,4,2>D     2092D           { align1 1Q };
add(8)          g99<1>D         g50<8,4,2>D     2092D           { align1 2Q };
shl(16)         g102<1>D        g41<8,8,1>D     0x00000002UD    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(8)          g121<1>D        g29<8,4,2>D     11308D          { align1 1Q };
add(8)          g122<1>D        g50<8,4,2>D     11308D          { align1 2Q };
mov(8)          g61<1>UW        0x76543210UV                    { align1 WE_all 1Q $1.dst };
cmp.l.f0.0(16)  g100<1>UD       g98<1,1,0>UD    0x0000082cUD    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
add(16)         g104<1>D        g98<1,1,0>D     g102<1,1,0>D    { align1 1H compacted };
mov(8)          g61<1>UD        g61<8,8,1>UW                    { align1 WE_all 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g106<1>UD       g104<1,1,0>UD   g98<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g21<2>UD        g104<4,4,1>UD                   { align1 1Q };
mov(8)          g23<2>UD        g105<4,4,1>UD                   { align1 2Q };
cmp.l.f0.0(8)   g123<1>UD       g121<8,8,1>UD   g29<8,4,2>UD    { align1 1Q I@7 };
add(8)          g62<1>UD        g61<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q @5 $1.dst compacted };
add3(16)        g108<1>D        -g100<8,8,1>D   g54<8,8,1>D     -g106<1,1,1>D { align1 1H I@5 };
shl(16)         g61<1>UD        g61<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
mov(8)          g23.1<2>UD      g109<4,4,1>UD                   { align1 2Q I@2 };
mov(8)          g21.1<2>UD      g108<4,4,1>UD                   { align1 1Q I@3 };
add(16)         g61<1>UD        g61<1,1,0>UD    0x00000100UD    { align1 WE_all 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g109UD          g21UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
mov(16)         g124<1>UD       g109.1<16,8,2>UW                { align1 1H $2.dst };
mov(16)         g111<1>UD       g109<16,8,2>UW                  { align1 1H };
mul(16)         g126<1>D        g124<1,1,0>D    1484W           { align1 1H I@2 compacted };
cmp.l.f0.0(8)   g124<1>UD       g122<8,8,1>UD   g50<8,4,2>UD    { align1 2Q };
mul(8)          acc0<1>UD       g111<8,8,1>UD   0x0058UW        { align1 1Q I@3 };
asr(16)         g113<1>D        g111<8,8,1>D    0x0000001fUD    { align1 1H I@4 };
add(16)         g56<1>D         g121<1,1,0>D    g126<1,1,0>D    { align1 1H I@4 compacted };
mach(8)         g115<1>UD       g111<1,1,0>UD   0x00000058UD    { align1 1Q compacted AccWrEnable };
mul(16)         g117<1>D        g113<1,1,0>D    88W             { align1 1H I@3 compacted };
mul(8)          acc0<1>UD       g112<8,8,1>UD   0x0058UW        { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
mach(8)         g116<1>UD       g112<8,8,1>UD   0x00000058UD    { align1 2Q AccWrEnable };
add(16)         g119<1>D        g115<1,1,0>D    g117<1,1,0>D    { align1 1H I@1 compacted };
mul(16)         g116<1>D        g111<1,1,0>D    88W             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g61UD           g56UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $3 };
mov(8)          g64<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g39<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g64<1>UD        g64<8,8,1>UW                    { align1 WE_all 1Q I@2 };
mov(8)          g39<1>UD        g39<8,8,1>UW                    { align1 WE_all 1Q I@2 };
add(8)          g65<1>UD        g64<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
add(8)          g40<1>UD        g39<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
shl(16)         g64<1>UD        g64<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
shl(16)         g39<1>UD        g39<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
add(16)         g64<1>UD        g64<1,1,0>UD    0x00000100UD    { align1 WE_all 1H I@2 compacted };
add(16)         g39<1>UD        g39<1,1,0>UD    0x000000c0UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g62UD           g64UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cmp.l.f0.0(16)  g1<1>UD         g62<1,1,0>UD    g121<1,1,0>UD   { align1 1H F@3 compacted };
add3(16)        g37<1>D         -g123<8,8,1>D   g54<8,8,1>D     -g1<1,1,1>D { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g39UD           g37UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $5 };
mov(8)          g66<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g41<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g68<1>UW        0x76543210UV                    { align1 WE_all 2Q };
mov(8)          g45<1>UW        0x76543210UV                    { align1 WE_all 2Q };
add(8)          g2<1>D          g31<8,4,2>D     8D              { align1 1Q F@4 compacted };
add(8)          g3<1>D          g52<8,4,2>D     8D              { align1 2Q F@3 compacted };
and(16)         g35<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 1H compacted };
mov(8)          g66<1>UD        g66<8,8,1>UW                    { align1 WE_all 1Q I@7 };
mov(8)          g41<1>UD        g41<8,8,1>UW                    { align1 WE_all 1Q I@7 };
mov(8)          g68<1>UD        g68<8,8,1>UW                    { align1 WE_all 2Q I@7 };
mov(8)          g45<1>UD        g45<8,8,1>UW                    { align1 WE_all 2Q I@7 };
cmp.l.f0.0(8)   g102<1>UD       g2<8,8,1>UD     g31<8,4,2>UD    { align1 1Q I@7 };
cmp.l.f0.0(8)   g4<1>UD         g3<8,8,1>UD     g52<8,4,2>UD    { align1 2Q I@7 };
add(16)         g7<1>D          g2<1,1,0>D      g116<1,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
shl(16)         g37<1>D         g35<8,8,1>D     0x00000004UD    { align1 1H I@7 };
shl(8)          g66<1>UD        g66<1,1,0>UD    0x00000002UD    { align1 WE_all 1Q I@7 compacted };
shl(8)          g41<1>UD        g41<1,1,0>UD    0x00000002UD    { align1 WE_all 1Q I@7 compacted };
shl(8)          g68<1>UD        g68<8,8,1>UD    0x00000002UD    { align1 WE_all 2Q I@7 };
shl(8)          g45<1>UD        g45<8,8,1>UD    0x00000002UD    { align1 WE_all 2Q I@7 };
add(8)          g5<1>D          -g102<8,8,1>D   g31.1<8,4,2>D   { align1 1Q I@7 };
add(8)          g6<1>D          -g4<8,8,1>D     g52.1<8,4,2>D   { align1 2Q I@7 };
cmp.l.f0.0(16)  g9<1>UD         g7<1,1,0>UD     g2<1,1,0>UD     { align1 1H I@7 compacted };
add(8)          g66<1>UD        g66<1,1,0>UD    0x00000100UD    { align1 WE_all 1Q I@7 compacted };
add(8)          g41<1>UD        g41<1,1,0>UD    0x000000c0UD    { align1 WE_all 1Q I@7 compacted };
add(8)          g68<1>UD        g68<8,8,1>UD    0x00000120UD    { align1 WE_all 2Q I@7 };
add(8)          g45<1>UD        g45<8,8,1>UD    0x000000e0UD    { align1 WE_all 2Q I@7 };
add3(16)        g11<1>D         g5<8,8,1>D      g119<8,8,1>D    -g9<1,1,1>D { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(8)         g65UD           g66UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1Q @1 $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(8)         g40UD           g41UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1Q @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@3 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 3N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 3N };
send(8)         g67UD           g68UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 2Q @1 $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 3N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 3N };
send(8)         g42UD           g45UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 2Q @1 $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
mov(8)          g27<2>UD        g65<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $8.dst };
mov(8)          g29<2>UD        g67<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
mov(8)          g27.1<2>UD      g40<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g40<1>D         g33<8,8,1>UW                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $9.dst };
mov(8)          g29.1<2>UD      g42<4,4,1>UD                    { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g20UD           g27UD           nullUD          0x08607582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyz, L1STATE_L3MOCS dst_len = 6, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $10 };
mov(8)          g26<2>UD        g7<4,4,1>UD                     { align1 1Q $10.src };
mov(8)          g28<2>UD        g8<4,4,1>UD                     { align1 2Q $10.src };
mov(8)          g26.1<2>UD      g11<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g28.1<2>UD      g12<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g12UD           g26UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $11 };
shl(16)         g26<1>D         g43<8,8,1>D     0x00000009UD    { align1 1H $11.src };
add(16)         g42<1>D         g40<1,1,0>D     g37<1,1,0>D     { align1 1H I@7 compacted };
and(16)         g1<1>UD         g42<1,1,0>UD    0x000001ffUD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(16)         g28<1>D         g20<1,1,0>D     g26<1,1,0>D     { align1 1H @3 $10.dst compacted };
shl(16)         g54<1>D         g24<8,8,1>D     0x00000005UD    { align1 1H $10.dst };
shr(16)         g56<1>UD        g24<1,1,0>UD    0x0000001bUD    { align1 1H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g30<1>D         g28<1,1,0>D     512D            { align1 1H I@3 compacted };
add(16)         g43<1>D         g28<1,1,0>D     g1<1,1,0>D      { align1 1H I@5 compacted };
sel.l(16)       g34<1>UD        g30<1,1,0>UD    g22<1,1,0>UD    { align1 1H @2 $10.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
cmp.l.f0.0(16)  g45<1>UD        g43<1,1,0>UD    g34<1,1,0>UD    { align1 1H I@1 compacted };
add(16)         g49<1>D         g16<1,1,0>D     32D             { align1 1H $11.dst compacted };
mov(16)         g108<2>W        -g45<8,8,1>D                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g61<1>D         g49<1,1,0>D     g54<1,1,0>D     { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g51<1>UD        g49<1,1,0>UD    g16<1,1,0>UD    { align1 1H compacted };
and(16)         g47<1>UW        g108<16,8,2>UW  0x0001UW        { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g63<1>UD        g61<1,1,0>UD    g49<1,1,0>UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g67<1>D         g61<1,1,0>D     16D             { align1 1H compacted };
mov(8)          g28<2>UD        g61<4,4,1>UD                    { align1 1Q };
mov(8)          g30<2>UD        g62<4,4,1>UD                    { align1 2Q };
add(16)         g53<1>D         -g51<1,1,0>D    g18<1,1,0>D     { align1 1H @6 $11.dst compacted };
mov(16)         g48<1>W         g47<32,16,2>B                   { align1 1H I@6 };
cmp.l.f0.0(16)  g69<1>UD        g67<1,1,0>UD    0x00000010UD    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add3(16)        g65<1>D         g53<8,8,1>D     g56<8,8,1>D     -g63<1,1,1>D { align1 1H I@3 };
add(16)         g71<1>D         -g69<1,1,0>D    g65<1,1,0>D     { align1 1H I@1 compacted };
mov(8)          g30.1<2>UD      g66<4,4,1>UD                    { align1 2Q I@6 };
mov(8)          g28.1<2>UD      g65<4,4,1>UD                    { align1 1Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g20UD           g28UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $11 };
mov(8)          g29<2>UD        g67<4,4,1>UD                    { align1 1Q $11.src };
mov(8)          g31<2>UD        g68<4,4,1>UD                    { align1 2Q $11.src };
mov(8)          g29.1<2>UD      g71<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g31.1<2>UD      g72<4,4,1>UD                    { align1 2Q I@2 };
add(16)         g73<1>F         g26<1,1,0>F     -g20<1,1,0>F    { align1 1H $11.dst compacted };
sel.ge(16)      g79<1>F         g73<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@1 };
cmp.l.f0.0(16)  g92<1>F         g79<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H F@1 };
math inv(16)    g83<1>F         g79<8,8,1>F     null<8,8,1>F    { align1 1H $12 };
cmp.g.f0.0(16)  g94<1>F         g73<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g72UD           g29UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $11 };
mul(16)         g85<1>F         g83<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H $12.dst };
and.nz.f0.0(16) null<1>UD       g92<8,8,1>UD    g94<8,8,1>UD    { align1 1H F@2 };
(+f0.0) sel(16) g95<1>UD        g85<1,1,0>UD    0x00000000UD    { align1 1H F@1 compacted };
add(16)         g76<1>F         g72<1,1,0>F     -g22<1,1,0>F    { align1 1H $11.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g78<1>F         g74<1,1,0>F     -g24<1,1,0>F    { align1 1H $11.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
sel.ge(16)      g80<1>F         g76<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H $12.src };
cmp.g.f0.0(16)  g97<1>F         g76<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
sel.ge(16)      g82<1>F         g78<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@3 };
cmp.l.f0.0(16)  g99<1>F         g80<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
math inv(16)    g86<1>F         g80<8,8,1>F     null<8,8,1>F    { align1 1H $13 };
math inv(16)    g89<1>F         g82<8,8,1>F     null<8,8,1>F    { align1 1H @2 $14 };
and.nz.f0.0(16) null<1>UD       g99<8,8,1>UD    g97<8,8,1>UD    { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
mul(16)         g91<1>F         g89<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H I@3 };
mul(16)         g88<1>F         g86<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H $13.dst };
(+f0.0) sel(16) g100<1>UD       g88<1,1,0>UD    0x00000000UD    { align1 1H F@1 compacted };
cmp.g.f0.0(16)  g102<1>F        g78<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
cmp.l.f0.0(16)  g104<1>F        g82<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H $14.src };
and.nz.f0.0(16) null<1>UD       g104<8,8,1>UD   g102<8,8,1>UD   { align1 1H F@1 };
(+f0.0) sel(16) g105<1>UD       g91<1,1,0>UD    0x00000000UD    { align1 1H F@4 compacted };
cmp.nz.f0.0(16) g109<1>W        g48<16,16,1>W   0W              { align1 1H };
mov(16)         g107<1>D        g109<8,8,1>W                    { align1 1H I@1 };
mov(16)         g109<2>W        -g107<8,8,1>D                   { align1 1H I@1 };
and(16)         g111<1>UW       g109<16,8,2>UW  0x0001UW        { align1 1H I@1 };
mov(16)         g112<1>W        g111<32,16,2>B                  { align1 1H I@1 };
cmp.nz.f0.0(16) g115<1>W        g112<16,16,1>W  0W              { align1 1H I@1 };
mov.nz.f0.0(16) g113<1>D        g115<8,8,1>W                    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
shl(16)         g116<1>D        g43<8,8,1>D     0x00000005UD    { align1 1H };
mov(8)          g87<1>UW        0x76543210UV                    { align1 WE_all 1Q F@3 };
add(16)         g119<1>D        g12<1,1,0>D     g116<1,1,0>D    { align1 1H @2 $11.dst compacted };
mov(8)          g87<1>UD        g87<8,8,1>UW                    { align1 WE_all 1Q I@2 };
shr(16)         g117<1>UD       g43<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
cmp.l.f0.0(16)  g121<1>UD       g119<1,1,0>UD   g12<1,1,0>UD    { align1 1H I@3 compacted };
add(16)         g125<1>D        g119<1,1,0>D    16D             { align1 1H compacted };
add(8)          g88<1>UD        g87<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@4 compacted };
mov(8)          g42<2>UD        g119<4,4,1>UD                   { align1 1Q };
mov(8)          g44<2>UD        g120<4,4,1>UD                   { align1 2Q };
add3(16)        g123<1>D        g14<8,8,1>D     g117<8,8,1>D    -g121<1,1,1>D { align1 1H @5 $11.dst };
cmp.l.f0.0(16)  g3<1>UD         g125<1,1,0>UD   g119<1,1,0>UD   { align1 1H I@5 compacted };
shl(16)         g87<1>UD        g87<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@5 compacted };
mov(8)          g44.1<2>UD      g124<4,4,1>UD                   { align1 2Q I@3 };
mov(8)          g42.1<2>UD      g123<4,4,1>UD                   { align1 1Q I@4 };
add(16)         g5<1>D          -g3<1,1,0>D     g123<1,1,0>D    { align1 1H I@4 compacted };
add(16)         g87<1>UD        g87<1,1,0>UD    0x00000180UD    { align1 WE_all 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g32UD           g42UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g87UD           g32UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $11 };
mov(8)          g89<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g89<1>UD        g89<8,8,1>UW                    { align1 WE_all 1Q I@1 };
add(8)          g90<1>UD        g89<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@1 compacted };
shl(16)         g89<1>UD        g89<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g89<1>UD        g89<1,1,0>UD    0x000001c0UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g89UD           g34UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $11 };
mov(8)          g91<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g91<1>UD        g91<8,8,1>UW                    { align1 WE_all 1Q I@1 };
add(8)          g92<1>UD        g91<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g91<1>UD        g91<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g91<1>UD        g91<1,1,0>UD    0x00000200UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g91UD           g36UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $0 };
mov(8)          g93<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g93<1>UD        g93<8,8,1>UW                    { align1 WE_all 1Q I@1 };
add(8)          g94<1>UD        g93<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g93<1>UD        g93<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g93<1>UD        g93<1,1,0>UD    0x00000240UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g93UD           g38UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $5 };
mov(8)          g43<2>UD        g125<4,4,1>UD                   { align1 1Q $15.src };
mov(8)          g45<2>UD        g126<4,4,1>UD                   { align1 2Q $15.src };
mov(8)          g43.1<2>UD      g5<4,4,1>UD                     { align1 1Q I@2 };
mov(8)          g45.1<2>UD      g6<4,4,1>UD                     { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g12UD           g43UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $11 };

LABEL7:
endif(16)       JIP:  LABEL8                                    { align1 1H };

LABEL8:
shl(16)         g44<1>D         g1<8,8,1>D      0x00000002UD    { align1 1H $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g46<1>UD        g44<8,8,1>UD                    { align1 1H I@1 };

LABEL10:
cmp.ge.f0.0(16) null<1>UD       g46<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL9        UIP:  LABEL9              { align1 1H };
shl(16)         g48<1>D         g46<8,8,1>D     0x00000002UD    { align1 1H $11.src };
mov(16)         g28<1>UD        0x7f800000UD                    { align1 1H $11.src };
mov(16)         g30<1>UD        0x7f800000UD                    { align1 1H $11.src };
mov(16)         g32<1>UD        0x7f800000UD                    { align1 1H $11.src };
mov(16)         g34<1>UD        0x7f800000UD                    { align1 1H $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g48UD           g28UD           0x0400f506                0x00000200
                            slm MsgDesc: ( store_cmask, a32, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 8 flat ) base_offset 0  { align1 1H $11 };
add(16)         g46<1>D         g46<8,8,1>D     2048D           { align1 1H };

LABEL9:
while(16)       JIP:  LABEL10                                   { align1 1H };

LABEL12:
cmp.ge.f0.0(16) null<1>UD       g44<8,8,1>UD    0x00000030UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL11       UIP:  LABEL11             { align1 1H };
shl(16)         g6<1>D          g44<8,8,1>D     0x00000002UD    { align1 1H };
mov(16)         g51<1>UD        0x00000000UD                    { align1 1H $11.src };
mov(16)         g53<1>UD        0x00000000UD                    { align1 1H $11.src };
mov(16)         g55<1>UD        0x00000000UD                    { align1 1H $11.src };
mov(16)         g57<1>UD        0x00000000UD                    { align1 1H $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(16)         g49<1>D         g6<1,1,0>D      1152D           { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g49UD           g51UD           0x0400f506                0x00000200
                            slm MsgDesc: ( store_cmask, a32, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 8 flat ) base_offset 0  { align1 1H $11 };
add(16)         g44<1>D         g44<8,8,1>D     2048D           { align1 1H };

LABEL11:
while(16)       JIP:  LABEL12                                   { align1 1H };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(1)         g7UD            g0UD            nullUD          0x0210111f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, evict, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mov(8)          g8<1>UD         0x00000000UD                    { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(2)          g8.10<1>UB      g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g8UD            nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $2 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
mov(8)          g30<1>UW        0x76543210UV                    { align1 WE_all 1Q $11.src };
mov(16)         g110<2>W        -g113<8,8,1>D                   { align1 1H I@7 };
mov(8)          g30<1>UD        g30<8,8,1>UW                    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
and(16)         g36<1>UW        g110<16,8,2>UW  0x0001UW        { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(8)          g31<1>UD        g30<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g37<1>W         g36<32,16,2>B                   { align1 1H I@2 };
shl(16)         g30<1>UD        g30<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.nz.f0.0(16) g38<1>W         g37<16,16,1>W   0W              { align1 1H I@2 };
add(16)         g30<1>UD        g30<1,1,0>UD    0x00000080UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g28<1>D         g38<8,8,1>W                     { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g30UD           g28UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $3 };
mov(8)          g33<1>UW        0x76543210UV                    { align1 WE_all 1Q $11.src };
mov(8)          g102<1>UW       0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g83<1>UW        0x76543210UV                    { align1 WE_all 1Q F@1 };
mov(8)          g33<1>UD        g33<8,8,1>UW                    { align1 WE_all 1Q I@3 };
mov(8)          g102<1>UD       g102<8,8,1>UW                   { align1 WE_all 1Q I@3 };
mov(8)          g83<1>UD        g83<8,8,1>UW                    { align1 WE_all 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(8)          g34<1>UD        g33<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@3 compacted };
add(8)          g103<1>UD       g102<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@3 compacted };
add(8)          g84<1>UD        g83<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@3 compacted };
shl(16)         g33<1>UD        g33<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@3 compacted };
shl(16)         g102<1>UD       g102<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@3 compacted };
shl(16)         g83<1>UD        g83<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@3 compacted };
add(16)         g33<1>UD        g33<1,1,0>UD    0x00000080UD    { align1 WE_all 1H I@3 compacted };
add(16)         g102<1>UD       g102<1,1,0>UD   0x00000180UD    { align1 WE_all 1H I@3 compacted };
add(16)         g83<1>UD        g83<1,1,0>UD    0x00000140UD    { align1 WE_all 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g31UD           g33UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g97UD           g102UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
mov(16)         g111<2>W        -g31<8,8,1>D                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
add(16)         g9<1>F          g97<1,1,0>F     g12<1,1,0>F     { align1 1H $11.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
and(16)         g42<1>UW        g111<16,8,2>UW  0x0001UW        { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g29<1>F         g9<1,1,0>F      -g20<1,1,0>F    { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g43<1>W         g42<32,16,2>B                   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mul(16)         g32<1>F         g29<1,1,0>F     g95<1,1,0>F     { align1 1H A@1 compacted };
cmp.nz.f0.0(16) g44<1>W         g43<16,16,1>W   0W              { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g81<1>UD        g32<8,8,1>F                     { align1 1H F@1 };
mov(16)         g5<1>D          g44<8,8,1>W                     { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g83UD           g81UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $13 };
mov(8)          g107<1>UW       0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g119<1>UW       0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g107<1>UD       g107<8,8,1>UW                   { align1 WE_all 1Q I@2 };
mov(8)          g119<1>UD       g119<8,8,1>UW                   { align1 WE_all 1Q I@2 };
add(8)          g108<1>UD       g107<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@2 compacted };
add(8)          g120<1>UD       g119<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@2 compacted };
shl(16)         g107<1>UD       g107<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@2 compacted };
shl(16)         g119<1>UD       g119<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@2 compacted };
add(16)         g107<1>UD       g107<1,1,0>UD   0x000001c0UD    { align1 WE_all 1H I@2 compacted };
add(16)         g119<1>UD       g119<1,1,0>UD   0x00000000UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g103UD          g107UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
add(16)         g10<1>F         g103<1,1,0>F    g14<1,1,0>F     { align1 1H $11.dst compacted };
add(16)         g30<1>F         g10<1,1,0>F     -g22<1,1,0>F    { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mul(16)         g33<1>F         g30<1,1,0>F     g100<1,1,0>F    { align1 1H F@1 compacted };
mov(16)         g117<1>UD       g33<8,8,1>F                     { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g119UD          g117UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $7 };
mov(8)          g110<1>UW       0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g3<1>UW         0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g110<1>UD       g110<8,8,1>UW                   { align1 WE_all 1Q I@2 };
mov(8)          g3<1>UD         g3<8,8,1>UW                     { align1 WE_all 1Q I@2 };
add(8)          g111<1>UD       g110<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@2 compacted };
add(8)          g4<1>UD         g3<1,1,0>UD     0x00000008UD    { align1 WE_all 1Q I@2 compacted };
shl(16)         g110<1>UD       g110<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@2 compacted };
shl(16)         g3<1>UD         g3<1,1,0>UD     0x00000002UD    { align1 WE_all 1H I@2 compacted };
add(16)         g110<1>UD       g110<1,1,0>UD   0x00000200UD    { align1 WE_all 1H I@2 compacted };
add(16)         g3<1>UD         g3<1,1,0>UD     0x00000040UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g108UD          g110UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g28<1>F         g108<1,1,0>F    g16<1,1,0>F     { align1 1H $11.dst compacted };
add(16)         g31<1>F         g28<1,1,0>F     -g24<1,1,0>F    { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mul(16)         g34<1>F         g31<1,1,0>F     g105<1,1,0>F    { align1 1H F@1 compacted };
mov(16)         g126<1>UD       g34<8,8,1>F                     { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g3UD            g126UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $9 };
mov(1)          g112<2>UW       0x00000000UD                    { align1 WE_all 1N };
mov(1)          f0<1>UW         g112<0,1,0>UW                   { align1 WE_all 1N I@1 };
cmp.nz.f0.0(16) null<1>UD       g5<8,8,1>UD     0x00000000UD    { align1 1H };
mov(16)         g3<1>UD         f0<0,1,0>UW                     { align1 1H $9.src };
shl(16)         g45<1>D         g59<8,8,1>D     g40<8,8,1>UD    { align1 1H };
and(16)         g20<1>UD        g40<1,1,0>UD    0x00000003UD    { align1 1H F@7 compacted };
shr(16)         g22<1>UD        g40<1,1,0>UD    0x00000002UD    { align1 1H F@5 compacted };
and(16)         g24<1>UD        g45<1,1,0>UD    0x00000077UD    { align1 1H A@2 compacted };

LABEL15:
cmp.z.f0.0(16)  null<1>D        g3<8,8,1>D      0D              { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL13       UIP:  LABEL13             { align1 1H };
fbl(16)         g28<1>UD        g3<8,8,1>UD                     { align1 1H A@2 };
mov(8)          g9<1>UW         0x76543210UV                    { align1 WE_all 1Q A@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g9<1>UD         g9<8,8,1>UW                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(8)          g10<1>UD        g9<1,1,0>UD     0x00000008UD    { align1 WE_all 1Q A@1 compacted };
shl(16)         g9<1>UD         g9<1,1,0>UD     0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g9<1>UD         g9<1,1,0>UD     0x00000140UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g7UD            g9UD            nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $11 };
mov(8)          g9<1>UW         0x76543210UV                    { align1 WE_all 1Q $11.src };
mov(8)          g9<1>UD         g9<8,8,1>UW                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(8)          g10<1>UD        g9<1,1,0>UD     0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g9<1>UD         g9<1,1,0>UD     0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g9<1>UD         g9<1,1,0>UD     0x00000140UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
mov(16)         a0<1>UW         0x00e0UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g28<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x00e0UW        { align1 1H A@1 };
mov(16)         g26<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g7UD            g9UD            nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
cmp.z.f0.0(16)  g28<1>D         g26<1,1,0>D     g7<1,1,0>D      { align1 1H I@1 compacted };
and(16)         g7<1>UD         g28<1,1,0>UD    g5<1,1,0>UD     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         g9<2>W          -g7<8,8,1>D                     { align1 1H I@1 };
and(16)         g106<1>UW       g9<16,8,2>UW    0x0001UW        { align1 1H A@1 };
mov(8)          g10<1>UW        0x76543210UV                    { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g107<1>W        g106<32,16,2>B                  { align1 1H I@2 };
mov(8)          g10<1>UD        g10<8,8,1>UW                    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
cmp.nz.f0.0(16) g108<1>W        g107<16,16,1>W  0W              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(8)          g11<1>UD        g10<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@2 compacted };
mov.nz.f0.0(16) g28<1>D         g108<8,8,1>W                    { align1 1H I@2 };
shl(16)         g10<1>UD        g10<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
(+f0.0) sel(16) g7<1>UD         g12<8,8,1>UD    0xff800000UD    { align1 1H };
add(16)         g10<1>UD        g10<1,1,0>UD    0x00000180UD    { align1 WE_all 1H I@2 compacted };
mov(16)         g30<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@1 compacted };
mov(16)         g30<1>F         g7<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g7<1>UD         g14<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g116<2>UD       g30.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(16)         g32<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@2 compacted };
mov(16)         g32<1>F         g7<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g8UD            g10UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $14 };
mov(8)          g10<1>UW        0x76543210UV                    { align1 WE_all 1Q $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g118<2>UD       g32.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(8)          g10<1>UD        g10<8,8,1>UW                    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(8)          g11<1>UD        g10<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g10<1>UD        g10<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g10<1>UD        g10<1,1,0>UD    0x000001c0UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
(+f0.0) sel(16) g108<1>UD       g8<8,8,1>UD     0x7f800000UD    { align1 1H F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g8UD            g10UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $15 };
mov(8)          g10<1>UW        0x76543210UV                    { align1 WE_all 1Q $15.src };
mov(16)         g106<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g106<1>F        g108<1,1,0>F                    { align1 1H compacted };
mov(8)          g10<1>UD        g10<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(8)          g11<1>UD        g10<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g10<1>UD        g10<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g10<1>UD        g10<1,1,0>UD    0x00000200UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g110<1>UD       g8<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g7<1>UD         g16<8,8,1>UD    0xff800000UD    { align1 1H };
mov(16)         g108<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g108<1>F        g110<1,1,0>F                    { align1 1H compacted };
mov(16)         g110<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H I@1 compacted };
mov(16)         g110<1>F        g7<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g8UD            g10UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $13 };
mov(8)          g114<2>UD       g108.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
(+f0.0) sel(16) g112<1>UD       g8<8,8,1>UD     0x7f800000UD    { align1 1H };
mov(16)         g7<1>F          0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g7<1>F          g112<1,1,0>F                    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g20<8,8,1>D     1D              { align1 1H };
mov(8)          g112<2>UD       g106.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sel.l(8)        g9<2>F          g106<8,4,2>F    g112<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g106.1<2>UD     g9<8,4,2>UD                     { align1 WE_all 1Q A@1 };
mov(8)          g112<2>UD       g7.1<8,4,2>UD                   { align1 WE_all 1Q F@1 };
mov(4)          g36<4>UD        g106.1<8,2,4>UD                 { align1 WE_all 1N I@2 };
mov(4)          g38<4>UD        g106.2<8,2,4>UD                 { align1 WE_all 1N $5.src };
sel.l(8)        g9<2>F          g108<8,4,2>F    g114<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.l(4)        g34<4>F         g36<8,2,4>F     g38<8,2,4>F     { align1 WE_all 1N I@1 };
mov(8)          g108.1<2>UD     g9<8,4,2>UD                     { align1 WE_all 1Q A@2 };
mov(8)          g114<2>UD       g110.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
mov(4)          g106.2<4>UD     g34<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(4)          g48<4>UD        g108.1<8,2,4>UD                 { align1 WE_all 1N I@3 };
mov(4)          g50<4>UD        g108.2<8,2,4>UD                 { align1 WE_all 1N $11.src };
sel.ge(8)       g9<2>F          g30<8,4,2>F     g116<8,4,2>F    { align1 WE_all 1Q I@5 };
mov(4)          g42<4>UD        g106.1<8,2,4>UD                 { align1 WE_all 1N I@3 };
mov(4)          g44<4>UD        g106.3<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g46<4>F         g48<8,2,4>F     g50<8,2,4>F     { align1 WE_all 1N I@3 };
mov(8)          g30.1<2>UD      g9<8,4,2>UD                     { align1 WE_all 1Q F@2 };
sel.l(4)        g40<4>F         g42<8,2,4>F     g44<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g108.2<4>UD     g46<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g72<4>UD        g30.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g74<4>UD        g30.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g9<2>F          g32<8,4,2>F     g118<8,4,2>F    { align1 WE_all 1Q I@4 };
mov(4)          g106.3<4>UD     g40<8,2,4>UD                    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(4)          g54<4>UD        g108.1<8,2,4>UD                 { align1 WE_all 1N I@4 };
mov(4)          g56<4>UD        g108.3<8,2,4>UD                 { align1 WE_all 1N $11.src };
sel.ge(4)       g70<4>F         g72<8,2,4>F     g74<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g32.1<2>UD      g9<8,4,2>UD                     { align1 WE_all 1Q F@2 };
sel.l(4)        g106.4<1>F      g106.3<0,1,0>F  g106.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g107.4<1>F      g107.3<0,1,0>F  g107.4<4,4,1>F  { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.l(4)        g52<4>F         g54<8,2,4>F     g56<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g30.2<4>UD      g70<8,2,4>UD                    { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(4)          g84<4>UD        g32.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g86<4>UD        g32.2<8,2,4>UD                  { align1 WE_all 1N $11.src };
sel.l(8)        g9<2>F          g7<8,4,2>F      g112<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.l(8)        g107<1>F        g106.7<0,1,0>F  g107<8,8,1>F    { align1 WE_all 1Q F@3 };
mov(4)          g108.3<4>UD     g52<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g78<4>UD        g30.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g80<4>UD        g30.3<8,2,4>UD                  { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sel.ge(4)       g82<4>F         g84<8,2,4>F     g86<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g7.1<2>UD       g9<8,4,2>UD                     { align1 WE_all 1Q F@3 };
sel.l(4)        g108.4<1>F      g108.3<0,1,0>F  g108.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g109.4<1>F      g109.3<0,1,0>F  g109.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.ge(4)       g76<4>F         g78<8,2,4>F     g80<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g32.2<4>UD      g82<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g60<4>UD        g7.1<8,2,4>UD                   { align1 WE_all 1N I@2 };
mov(4)          g62<4>UD        g7.2<8,2,4>UD                   { align1 WE_all 1N };
sel.ge(8)       g9<2>F          g110<8,4,2>F    g114<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.l(8)        g109<1>F        g108.7<0,1,0>F  g109<8,8,1>F    { align1 WE_all 1Q F@3 };
mov(4)          g30.3<4>UD      g76<8,2,4>UD                    { align1 WE_all 1N F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(4)          g90<4>UD        g32.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g92<4>UD        g32.3<8,2,4>UD                  { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.l(4)        g58<4>F         g60<8,2,4>F     g62<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g110.1<2>UD     g9<8,4,2>UD                     { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g9<1>UD         g109.7<0,1,0>UD g107.7<0,1,0>UD { align1 1H };
sel.ge(4)       g30.4<1>F       g30.3<0,1,0>F   g30.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g31.4<1>F       g31.3<0,1,0>F   g31.4<4,4,1>F   { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.ge(4)       g88<4>F         g90<8,2,4>F     g92<8,2,4>F     { align1 WE_all 1N I@3 };
mov(4)          g7.2<4>UD       g58<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g96<4>UD        g110.1<8,2,4>UD                 { align1 WE_all 1N I@3 };
mov(4)          g98<4>UD        g110.2<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(8)       g31<1>F         g30.7<0,1,0>F   g31<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g32.3<4>UD      g88<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g66<4>UD        g7.1<8,2,4>UD                   { align1 WE_all 1N I@4 };
mov(4)          g68<4>UD        g7.3<8,2,4>UD                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.ge(4)       g94<4>F         g96<8,2,4>F     g98<8,2,4>F     { align1 WE_all 1N I@4 };
sel.ge(4)       g32.4<1>F       g32.3<0,1,0>F   g32.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g33.4<1>F       g33.3<0,1,0>F   g33.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g64<4>F         g66<8,2,4>F     g68<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g110.2<4>UD     g94<8,2,4>UD                    { align1 WE_all 1N F@4 };
sel.ge(8)       g33<1>F         g32.7<0,1,0>F   g33<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g7.3<4>UD       g64<8,2,4>UD                    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g102<4>UD       g110.1<8,2,4>UD                 { align1 WE_all 1N I@2 };
mov(4)          g104<4>UD       g110.3<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g106<1>UD       g33.7<0,1,0>UD  g31.7<0,1,0>UD  { align1 1H };
sel.l(4)        g7.4<1>F        g7.3<0,1,0>F    g7.4<4,4,1>F    { align1 WE_all 1N I@4 };
sel.l(4)        g8.4<1>F        g8.3<0,1,0>F    g8.4<4,4,1>F    { align1 WE_all 1N I@4 };
sel.ge(4)       g100<4>F        g102<8,2,4>F    g104<8,2,4>F    { align1 WE_all 1N I@2 };
cmp.z.f0.0(16)  null<1>D        g20<8,8,1>D     2D              { align1 1H };
sel.l(8)        g8<1>F          g7.7<0,1,0>F    g8<8,8,1>F      { align1 WE_all 1Q F@2 };
mov(4)          g110.3<4>UD     g100<8,2,4>UD                   { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g30<1>UD        g8.7<0,1,0>UD   g9<1,1,0>UD     { align1 1H compacted };
sel.ge(4)       g110.4<1>F      g110.3<0,1,0>F  g110.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.ge(4)       g111.4<1>F      g111.3<0,1,0>F  g111.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.ge(8)       g111<1>F        g110.7<0,1,0>F  g111<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g7<1>UD         g111.7<0,1,0>UD g106<1,1,0>UD   { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g22<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g9<1>F          g30<1,1,0>F     -g7<1,1,0>F     { align1 1H I@2 compacted };
cmp.nz.f0.0(16) null<1>D        g24<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL14         UIP:  LABEL14             { align1 1H };
mul(16)         g7<1>D          g26<1,1,0>D     6W              { align1 1H F@1 compacted };
mul(16)         g26<1>D         g22<1,1,0>D     3W              { align1 1H I@1 compacted };
add3(16)        g30<1>D         g7<8,8,1>D      g20<8,8,1>D     g26<1,1,1>D { align1 1H A@1 };
shl(16)         g7<1>D          g30<8,8,1>D     0x00000002UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g7UD            g9UD            0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat ) base_offset 0  { align1 1H $10 };

LABEL14:
endif(16)       JIP:  LABEL13                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
not(16)         g7<1>D          g28<8,8,1>D                     { align1 1H F@1 };
mov(1)          g120<2>UW       0x00000000UD                    { align1 WE_all 1N $7.src };
mov(1)          f0<1>UW         g120<0,1,0>UW                   { align1 WE_all 1N I@1 };
cmp.nz.f0.0(16) null<1>UD       g7<8,8,1>UD     0x00000000UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(16)         g8<1>UD         f0<0,1,0>UW                     { align1 1H F@1 };
and(16)         g3<1>UD         g3<1,1,0>UD     g8<1,1,0>UD     { align1 1H I@1 compacted };

LABEL13:
while(16)       JIP:  LABEL15                                   { align1 1H };
mov(8)          g122<1>UW       0x76543210UV                    { align1 WE_all 1Q };
mov(1)          g113<2>UW       0x00000000UD                    { align1 WE_all 1N };
mov(8)          g122<1>UD       g122<8,8,1>UW                   { align1 WE_all 1Q I@2 };
add(8)          g123<1>UD       g122<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g122<1>UD       g122<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g122<1>UD       g122<1,1,0>UD   0x00000000UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g120UD          g122UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g26<1>D         g120<1,1,0>D    16D             { align1 1H compacted };
mov(1)          f0<1>UW         g113<0,1,0>UW                   { align1 WE_all 1N I@6 };
cmp.nz.f0.0(16) null<1>UD       g5<8,8,1>UD     0x00000000UD    { align1 1H };
mov(16)         g3<1>UD         f0<0,1,0>UW                     { align1 1H };

LABEL18:
cmp.z.f0.0(16)  null<1>D        g3<8,8,1>D      0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL16       UIP:  LABEL16             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
fbl(16)         g7<1>UD         g3<8,8,1>UD                     { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         a0<1>UW         0x0340UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g7<16,8,2>W     0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0340UW        { align1 1H A@1 };
mov(16)         g28<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.z.f0.0(16)  g7<1>D          g28<1,1,0>D     g26<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
and(16)         g9<1>UD         g7<1,1,0>UD     g5<1,1,0>UD     { align1 1H A@1 compacted };
mov(16)         g7<2>W          -g9<8,8,1>D                     { align1 1H I@1 };
mov(8)          g10<1>UW        0x76543210UV                    { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
and(16)         g110<1>UW       g7<16,8,2>UW    0x0001UW        { align1 1H };
mov(8)          g10<1>UD        g10<8,8,1>UW                    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g111<1>W        g110<32,16,2>B                  { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(8)          g11<1>UD        g10<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
cmp.nz.f0.0(16) g112<1>W        g111<16,16,1>W  0W              { align1 1H };
shl(16)         g10<1>UD        g10<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
mov.nz.f0.0(16) g30<1>D         g112<8,8,1>W                    { align1 1H A@1 };
add(16)         g10<1>UD        g10<1,1,0>UD    0x00000180UD    { align1 WE_all 1H I@2 compacted };
(+f0.0) sel(16) g7<1>UD         g12<8,8,1>UD    0xff800000UD    { align1 1H };
mov(16)         g32<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@1 compacted };
mov(16)         g32<1>F         g7<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g7<1>UD         g14<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g118<2>UD       g32.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(16)         g34<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@2 compacted };
mov(16)         g34<1>F         g7<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g8UD            g10UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $1 };
mov(8)          g10<1>UW        0x76543210UV                    { align1 WE_all 1Q $1.src };
mov(8)          g120<2>UD       g34.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(8)          g10<1>UD        g10<8,8,1>UW                    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(8)          g11<1>UD        g10<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g10<1>UD        g10<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g10<1>UD        g10<1,1,0>UD    0x000001c0UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
(+f0.0) sel(16) g110<1>UD       g8<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g8UD            g10UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $2 };
mov(8)          g10<1>UW        0x76543210UV                    { align1 WE_all 1Q $2.src };
mov(16)         g108<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g108<1>F        g110<1,1,0>F                    { align1 1H compacted };
mov(8)          g10<1>UD        g10<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(8)          g11<1>UD        g10<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g10<1>UD        g10<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g10<1>UD        g10<1,1,0>UD    0x00000200UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
(+f0.0) sel(16) g112<1>UD       g8<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g7<1>UD         g16<8,8,1>UD    0xff800000UD    { align1 1H };
mov(16)         g110<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g110<1>F        g112<1,1,0>F                    { align1 1H compacted };
mov(16)         g112<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H I@1 compacted };
mov(16)         g112<1>F        g7<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g8UD            g10UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g116<2>UD       g110.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
(+f0.0) sel(16) g114<1>UD       g8<8,8,1>UD     0x7f800000UD    { align1 1H };
mov(16)         g7<1>F          0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g7<1>F          g114<1,1,0>F                    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g20<8,8,1>D     1D              { align1 1H };
mov(8)          g114<2>UD       g108.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sel.l(8)        g9<2>F          g108<8,4,2>F    g114<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g108.1<2>UD     g9<8,4,2>UD                     { align1 WE_all 1Q A@1 };
mov(8)          g114<2>UD       g7.1<8,4,2>UD                   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g38<4>UD        g108.1<8,2,4>UD                 { align1 WE_all 1N I@2 };
mov(4)          g40<4>UD        g108.2<8,2,4>UD                 { align1 WE_all 1N };
sel.l(8)        g9<2>F          g110<8,4,2>F    g116<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.l(4)        g36<4>F         g38<8,2,4>F     g40<8,2,4>F     { align1 WE_all 1N I@1 };
mov(8)          g110.1<2>UD     g9<8,4,2>UD                     { align1 WE_all 1Q A@2 };
mov(8)          g116<2>UD       g112.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
mov(4)          g108.2<4>UD     g36<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(4)          g50<4>UD        g110.1<8,2,4>UD                 { align1 WE_all 1N I@3 };
mov(4)          g52<4>UD        g110.2<8,2,4>UD                 { align1 WE_all 1N $11.src };
sel.ge(8)       g9<2>F          g32<8,4,2>F     g118<8,4,2>F    { align1 WE_all 1Q I@5 };
mov(4)          g44<4>UD        g108.1<8,2,4>UD                 { align1 WE_all 1N I@3 };
mov(4)          g46<4>UD        g108.3<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.l(4)        g48<4>F         g50<8,2,4>F     g52<8,2,4>F     { align1 WE_all 1N I@3 };
mov(8)          g32.1<2>UD      g9<8,4,2>UD                     { align1 WE_all 1Q F@2 };
sel.l(4)        g42<4>F         g44<8,2,4>F     g46<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g110.2<4>UD     g48<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g74<4>UD        g32.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g76<4>UD        g32.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g9<2>F          g34<8,4,2>F     g120<8,4,2>F    { align1 WE_all 1Q I@4 };
mov(4)          g108.3<4>UD     g42<8,2,4>UD                    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(4)          g56<4>UD        g110.1<8,2,4>UD                 { align1 WE_all 1N I@4 };
mov(4)          g58<4>UD        g110.3<8,2,4>UD                 { align1 WE_all 1N $11.src };
sel.ge(4)       g72<4>F         g74<8,2,4>F     g76<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g34.1<2>UD      g9<8,4,2>UD                     { align1 WE_all 1Q F@2 };
sel.l(4)        g108.4<1>F      g108.3<0,1,0>F  g108.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g109.4<1>F      g109.3<0,1,0>F  g109.4<4,4,1>F  { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.l(4)        g54<4>F         g56<8,2,4>F     g58<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g32.2<4>UD      g72<8,2,4>UD                    { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(4)          g86<4>UD        g34.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g88<4>UD        g34.2<8,2,4>UD                  { align1 WE_all 1N $11.src };
sel.l(8)        g9<2>F          g7<8,4,2>F      g114<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.l(8)        g109<1>F        g108.7<0,1,0>F  g109<8,8,1>F    { align1 WE_all 1Q F@3 };
mov(4)          g110.3<4>UD     g54<8,2,4>UD                    { align1 WE_all 1N F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(4)          g80<4>UD        g32.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g82<4>UD        g32.3<8,2,4>UD                  { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sel.ge(4)       g84<4>F         g86<8,2,4>F     g88<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g7.1<2>UD       g9<8,4,2>UD                     { align1 WE_all 1Q F@3 };
sel.l(4)        g110.4<1>F      g110.3<0,1,0>F  g110.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g111.4<1>F      g111.3<0,1,0>F  g111.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.ge(4)       g78<4>F         g80<8,2,4>F     g82<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g34.2<4>UD      g84<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g62<4>UD        g7.1<8,2,4>UD                   { align1 WE_all 1N I@2 };
mov(4)          g64<4>UD        g7.2<8,2,4>UD                   { align1 WE_all 1N };
sel.ge(8)       g9<2>F          g112<8,4,2>F    g116<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.l(8)        g111<1>F        g110.7<0,1,0>F  g111<8,8,1>F    { align1 WE_all 1Q F@3 };
mov(4)          g32.3<4>UD      g78<8,2,4>UD                    { align1 WE_all 1N F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g92<4>UD        g34.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g94<4>UD        g34.3<8,2,4>UD                  { align1 WE_all 1N $5.src };
sel.l(4)        g60<4>F         g62<8,2,4>F     g64<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g112.1<2>UD     g9<8,4,2>UD                     { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g9<1>UD         g111.7<0,1,0>UD g109.7<0,1,0>UD { align1 1H };
sel.ge(4)       g32.4<1>F       g32.3<0,1,0>F   g32.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g33.4<1>F       g33.3<0,1,0>F   g33.4<4,4,1>F   { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sel.ge(4)       g90<4>F         g92<8,2,4>F     g94<8,2,4>F     { align1 WE_all 1N I@3 };
mov(4)          g7.2<4>UD       g60<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g98<4>UD        g112.1<8,2,4>UD                 { align1 WE_all 1N I@3 };
mov(4)          g100<4>UD       g112.2<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(8)       g33<1>F         g32.7<0,1,0>F   g33<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g34.3<4>UD      g90<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g68<4>UD        g7.1<8,2,4>UD                   { align1 WE_all 1N I@4 };
mov(4)          g70<4>UD        g7.3<8,2,4>UD                   { align1 WE_all 1N };
sel.ge(4)       g96<4>F         g98<8,2,4>F     g100<8,2,4>F    { align1 WE_all 1N I@4 };
sel.ge(4)       g34.4<1>F       g34.3<0,1,0>F   g34.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g35.4<1>F       g35.3<0,1,0>F   g35.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g66<4>F         g68<8,2,4>F     g70<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g112.2<4>UD     g96<8,2,4>UD                    { align1 WE_all 1N F@4 };
sel.ge(8)       g35<1>F         g34.7<0,1,0>F   g35<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g7.3<4>UD       g66<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g104<4>UD       g112.1<8,2,4>UD                 { align1 WE_all 1N I@2 };
mov(4)          g106<4>UD       g112.3<8,2,4>UD                 { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g108<1>UD       g35.7<0,1,0>UD  g33.7<0,1,0>UD  { align1 1H };
sel.l(4)        g7.4<1>F        g7.3<0,1,0>F    g7.4<4,4,1>F    { align1 WE_all 1N I@4 };
sel.l(4)        g8.4<1>F        g8.3<0,1,0>F    g8.4<4,4,1>F    { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.ge(4)       g102<4>F        g104<8,2,4>F    g106<8,2,4>F    { align1 WE_all 1N I@2 };
cmp.z.f0.0(16)  null<1>D        g20<8,8,1>D     2D              { align1 1H };
sel.l(8)        g8<1>F          g7.7<0,1,0>F    g8<8,8,1>F      { align1 WE_all 1Q F@2 };
mov(4)          g112.3<4>UD     g102<8,2,4>UD                   { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g32<1>UD        g8.7<0,1,0>UD   g9<1,1,0>UD     { align1 1H compacted };
sel.ge(4)       g112.4<1>F      g112.3<0,1,0>F  g112.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.ge(4)       g113.4<1>F      g113.3<0,1,0>F  g113.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.ge(8)       g113<1>F        g112.7<0,1,0>F  g113<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g7<1>UD         g113.7<0,1,0>UD g108<1,1,0>UD   { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g22<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g9<1>F          g32<1,1,0>F     -g7<1,1,0>F     { align1 1H I@2 compacted };
cmp.nz.f0.0(16) null<1>D        g24<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL17             { align1 1H };
mul(16)         g7<1>D          g28<1,1,0>D     6W              { align1 1H F@1 compacted };
mul(16)         g28<1>D         g22<1,1,0>D     3W              { align1 1H I@1 compacted };
add3(16)        g32<1>D         g7<8,8,1>D      g20<8,8,1>D     g28<1,1,1>D { align1 1H A@1 };
shl(16)         g7<1>D          g32<8,8,1>D     0x00000002UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g7UD            g9UD            0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat ) base_offset 0  { align1 1H $10 };

LABEL17:
endif(16)       JIP:  LABEL16                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
not(16)         g7<1>D          g30<8,8,1>D                     { align1 1H F@1 };
mov(1)          g122<2>UW       0x00000000UD                    { align1 WE_all 1N $0.src };
mov(1)          f0<1>UW         g122<0,1,0>UW                   { align1 WE_all 1N I@1 };
cmp.nz.f0.0(16) null<1>UD       g7<8,8,1>UD     0x00000000UD    { align1 1H I@3 };
mov(16)         g7<1>UD         f0<0,1,0>UW                     { align1 1H };
and(16)         g3<1>UD         g3<1,1,0>UD     g7<1,1,0>UD     { align1 1H I@1 compacted };

LABEL16:
while(16)       JIP:  LABEL18                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(8)          g9<1>UW         0x76543210UV                    { align1 WE_all 1Q F@1 };
mov(1)          g114<2>UW       0x00000000UD                    { align1 WE_all 1N };
mov(8)          g9<1>UD         g9<8,8,1>UW                     { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(8)          g10<1>UD        g9<1,1,0>UD     0x00000008UD    { align1 WE_all 1Q A@1 compacted };
shl(16)         g9<1>UD         g9<1,1,0>UD     0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g9<1>UD         g9<1,1,0>UD     0x00000040UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g7UD            g9UD            nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
add(16)         g26<1>D         g7<1,1,0>D      32D             { align1 1H I@7 compacted };
mov(1)          f0<1>UW         g114<0,1,0>UW                   { align1 WE_all 1N I@6 };
cmp.nz.f0.0(16) null<1>UD       g5<8,8,1>UD     0x00000000UD    { align1 1H };
mov(16)         g3<1>UD         f0<0,1,0>UW                     { align1 1H I@7 };

LABEL21:
cmp.z.f0.0(16)  null<1>D        g3<8,8,1>D      0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL19       UIP:  LABEL19             { align1 1H };
fbl(16)         g7<1>UD         g3<8,8,1>UD                     { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         a0<1>UW         0x0340UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g7<16,8,2>W     0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0340UW        { align1 1H A@1 };
mov(16)         g28<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.z.f0.0(16)  g7<1>D          g28<1,1,0>D     g26<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(16)         g9<1>UD         g7<1,1,0>UD     g5<1,1,0>UD     { align1 1H compacted };
mov(16)         g7<2>W          -g9<8,8,1>D                     { align1 1H I@1 };
mov(8)          g10<1>UW        0x76543210UV                    { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(16)         g114<1>UW       g7<16,8,2>UW    0x0001UW        { align1 1H };
mov(8)          g10<1>UD        g10<8,8,1>UW                    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g115<1>W        g114<32,16,2>B                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(8)          g11<1>UD        g10<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.nz.f0.0(16) g116<1>W        g115<16,16,1>W  0W              { align1 1H };
shl(16)         g10<1>UD        g10<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
mov.nz.f0.0(16) g30<1>D         g116<8,8,1>W                    { align1 1H A@1 };
add(16)         g10<1>UD        g10<1,1,0>UD    0x00000180UD    { align1 WE_all 1H I@2 compacted };
(+f0.0) sel(16) g7<1>UD         g12<8,8,1>UD    0xff800000UD    { align1 1H };
mov(16)         g32<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@1 compacted };
mov(16)         g32<1>F         g7<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g7<1>UD         g14<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g118<2>UD       g32.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(16)         g34<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@2 compacted };
mov(16)         g34<1>F         g7<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g8UD            g10UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $4 };
mov(8)          g10<1>UW        0x76543210UV                    { align1 WE_all 1Q $4.src };
mov(8)          g120<2>UD       g34.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(8)          g10<1>UD        g10<8,8,1>UW                    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(8)          g11<1>UD        g10<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g10<1>UD        g10<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g10<1>UD        g10<1,1,0>UD    0x000001c0UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g110<1>UD       g8<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g8UD            g10UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $5 };
mov(8)          g10<1>UW        0x76543210UV                    { align1 WE_all 1Q $5.src };
mov(16)         g108<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g108<1>F        g110<1,1,0>F                    { align1 1H compacted };
mov(8)          g10<1>UD        g10<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(8)          g11<1>UD        g10<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g10<1>UD        g10<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g10<1>UD        g10<1,1,0>UD    0x00000200UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g112<1>UD       g8<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g7<1>UD         g16<8,8,1>UD    0xff800000UD    { align1 1H };
mov(16)         g110<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g110<1>F        g112<1,1,0>F                    { align1 1H compacted };
mov(16)         g112<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H I@1 compacted };
mov(16)         g112<1>F        g7<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g8UD            g10UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g116<2>UD       g110.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
(+f0.0) sel(16) g114<1>UD       g8<8,8,1>UD     0x7f800000UD    { align1 1H };
mov(16)         g7<1>F          0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g7<1>F          g114<1,1,0>F                    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g20<8,8,1>D     1D              { align1 1H };
mov(8)          g114<2>UD       g108.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sel.l(8)        g9<2>F          g108<8,4,2>F    g114<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g108.1<2>UD     g9<8,4,2>UD                     { align1 WE_all 1Q A@1 };
mov(8)          g114<2>UD       g7.1<8,4,2>UD                   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g38<4>UD        g108.1<8,2,4>UD                 { align1 WE_all 1N I@2 };
mov(4)          g40<4>UD        g108.2<8,2,4>UD                 { align1 WE_all 1N };
sel.l(8)        g9<2>F          g110<8,4,2>F    g116<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.l(4)        g36<4>F         g38<8,2,4>F     g40<8,2,4>F     { align1 WE_all 1N I@1 };
mov(8)          g110.1<2>UD     g9<8,4,2>UD                     { align1 WE_all 1Q A@2 };
mov(8)          g116<2>UD       g112.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
mov(4)          g108.2<4>UD     g36<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(4)          g50<4>UD        g110.1<8,2,4>UD                 { align1 WE_all 1N I@3 };
mov(4)          g52<4>UD        g110.2<8,2,4>UD                 { align1 WE_all 1N $11.src };
sel.ge(8)       g9<2>F          g32<8,4,2>F     g118<8,4,2>F    { align1 WE_all 1Q I@5 };
mov(4)          g44<4>UD        g108.1<8,2,4>UD                 { align1 WE_all 1N I@3 };
mov(4)          g46<4>UD        g108.3<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.l(4)        g48<4>F         g50<8,2,4>F     g52<8,2,4>F     { align1 WE_all 1N I@3 };
mov(8)          g32.1<2>UD      g9<8,4,2>UD                     { align1 WE_all 1Q F@2 };
sel.l(4)        g42<4>F         g44<8,2,4>F     g46<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g110.2<4>UD     g48<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g74<4>UD        g32.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g76<4>UD        g32.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g9<2>F          g34<8,4,2>F     g120<8,4,2>F    { align1 WE_all 1Q I@4 };
mov(4)          g108.3<4>UD     g42<8,2,4>UD                    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(4)          g56<4>UD        g110.1<8,2,4>UD                 { align1 WE_all 1N I@4 };
mov(4)          g58<4>UD        g110.3<8,2,4>UD                 { align1 WE_all 1N $11.src };
sel.ge(4)       g72<4>F         g74<8,2,4>F     g76<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g34.1<2>UD      g9<8,4,2>UD                     { align1 WE_all 1Q F@2 };
sel.l(4)        g108.4<1>F      g108.3<0,1,0>F  g108.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g109.4<1>F      g109.3<0,1,0>F  g109.4<4,4,1>F  { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.l(4)        g54<4>F         g56<8,2,4>F     g58<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g32.2<4>UD      g72<8,2,4>UD                    { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(4)          g86<4>UD        g34.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g88<4>UD        g34.2<8,2,4>UD                  { align1 WE_all 1N $11.src };
sel.l(8)        g9<2>F          g7<8,4,2>F      g114<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.l(8)        g109<1>F        g108.7<0,1,0>F  g109<8,8,1>F    { align1 WE_all 1Q F@3 };
mov(4)          g110.3<4>UD     g54<8,2,4>UD                    { align1 WE_all 1N F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(4)          g80<4>UD        g32.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g82<4>UD        g32.3<8,2,4>UD                  { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sel.ge(4)       g84<4>F         g86<8,2,4>F     g88<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g7.1<2>UD       g9<8,4,2>UD                     { align1 WE_all 1Q F@3 };
sel.l(4)        g110.4<1>F      g110.3<0,1,0>F  g110.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g111.4<1>F      g111.3<0,1,0>F  g111.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.ge(4)       g78<4>F         g80<8,2,4>F     g82<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g34.2<4>UD      g84<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g62<4>UD        g7.1<8,2,4>UD                   { align1 WE_all 1N I@2 };
mov(4)          g64<4>UD        g7.2<8,2,4>UD                   { align1 WE_all 1N };
sel.ge(8)       g9<2>F          g112<8,4,2>F    g116<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.l(8)        g111<1>F        g110.7<0,1,0>F  g111<8,8,1>F    { align1 WE_all 1Q F@3 };
mov(4)          g32.3<4>UD      g78<8,2,4>UD                    { align1 WE_all 1N F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g92<4>UD        g34.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g94<4>UD        g34.3<8,2,4>UD                  { align1 WE_all 1N $5.src };
sel.l(4)        g60<4>F         g62<8,2,4>F     g64<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g112.1<2>UD     g9<8,4,2>UD                     { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g9<1>UD         g111.7<0,1,0>UD g109.7<0,1,0>UD { align1 1H };
sel.ge(4)       g32.4<1>F       g32.3<0,1,0>F   g32.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g33.4<1>F       g33.3<0,1,0>F   g33.4<4,4,1>F   { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sel.ge(4)       g90<4>F         g92<8,2,4>F     g94<8,2,4>F     { align1 WE_all 1N I@3 };
mov(4)          g7.2<4>UD       g60<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g98<4>UD        g112.1<8,2,4>UD                 { align1 WE_all 1N I@3 };
mov(4)          g100<4>UD       g112.2<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(8)       g33<1>F         g32.7<0,1,0>F   g33<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g34.3<4>UD      g90<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g68<4>UD        g7.1<8,2,4>UD                   { align1 WE_all 1N I@4 };
mov(4)          g70<4>UD        g7.3<8,2,4>UD                   { align1 WE_all 1N };
sel.ge(4)       g96<4>F         g98<8,2,4>F     g100<8,2,4>F    { align1 WE_all 1N I@4 };
sel.ge(4)       g34.4<1>F       g34.3<0,1,0>F   g34.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g35.4<1>F       g35.3<0,1,0>F   g35.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g66<4>F         g68<8,2,4>F     g70<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g112.2<4>UD     g96<8,2,4>UD                    { align1 WE_all 1N F@4 };
sel.ge(8)       g35<1>F         g34.7<0,1,0>F   g35<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g7.3<4>UD       g66<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g104<4>UD       g112.1<8,2,4>UD                 { align1 WE_all 1N I@2 };
mov(4)          g106<4>UD       g112.3<8,2,4>UD                 { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g108<1>UD       g35.7<0,1,0>UD  g33.7<0,1,0>UD  { align1 1H };
sel.l(4)        g7.4<1>F        g7.3<0,1,0>F    g7.4<4,4,1>F    { align1 WE_all 1N I@4 };
sel.l(4)        g8.4<1>F        g8.3<0,1,0>F    g8.4<4,4,1>F    { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.ge(4)       g102<4>F        g104<8,2,4>F    g106<8,2,4>F    { align1 WE_all 1N I@2 };
cmp.z.f0.0(16)  null<1>D        g20<8,8,1>D     2D              { align1 1H };
sel.l(8)        g8<1>F          g7.7<0,1,0>F    g8<8,8,1>F      { align1 WE_all 1Q F@2 };
mov(4)          g112.3<4>UD     g102<8,2,4>UD                   { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g32<1>UD        g8.7<0,1,0>UD   g9<1,1,0>UD     { align1 1H compacted };
sel.ge(4)       g112.4<1>F      g112.3<0,1,0>F  g112.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.ge(4)       g113.4<1>F      g113.3<0,1,0>F  g113.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.ge(8)       g113<1>F        g112.7<0,1,0>F  g113<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g7<1>UD         g113.7<0,1,0>UD g108<1,1,0>UD   { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g22<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g9<1>F          g32<1,1,0>F     -g7<1,1,0>F     { align1 1H I@2 compacted };
cmp.nz.f0.0(16) null<1>D        g24<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL20         UIP:  LABEL20             { align1 1H };
mul(16)         g7<1>D          g28<1,1,0>D     6W              { align1 1H F@1 compacted };
mul(16)         g28<1>D         g22<1,1,0>D     3W              { align1 1H I@1 compacted };
add3(16)        g32<1>D         g7<8,8,1>D      g20<8,8,1>D     g28<1,1,1>D { align1 1H A@1 };
shl(16)         g7<1>D          g32<8,8,1>D     0x00000002UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g7UD            g9UD            0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat ) base_offset 0  { align1 1H $3 };

LABEL20:
endif(16)       JIP:  LABEL19                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
not(16)         g7<1>D          g30<8,8,1>D                     { align1 1H F@1 };
mov(1)          g122<2>UW       0x00000000UD                    { align1 WE_all 1N $0.src };
mov(1)          f0<1>UW         g122<0,1,0>UW                   { align1 WE_all 1N I@1 };
cmp.nz.f0.0(16) null<1>UD       g7<8,8,1>UD     0x00000000UD    { align1 1H I@3 };
mov(16)         g7<1>UD         f0<0,1,0>UW                     { align1 1H };
and(16)         g3<1>UD         g3<1,1,0>UD     g7<1,1,0>UD     { align1 1H I@1 compacted };

LABEL19:
while(16)       JIP:  LABEL21                                   { align1 1H };
mov(8)          g36<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g36<1>UD        g36<8,8,1>UW                    { align1 WE_all 1Q I@1 };
add(8)          g37<1>UD        g36<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g36<1>UD        g36<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g36<1>UD        g36<1,1,0>UD    0x00000080UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g34UD           g36UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
mov.nz.f0.0(16) null<1>D        g34<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL22         UIP:  LABEL22             { align1 1H };
mov(8)          g86<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g86<1>UD        g86<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(8)          g87<1>UD        g86<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g86<1>UD        g86<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g86<1>UD        g86<1,1,0>UD    0x00000140UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g84UD           g86UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shl(16)         g117<1>D        g84<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g52<1>D         g117<1,1,0>D    1152D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g52UD           nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1H $11 };
mov(8)          g125<1>UW       0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g125<1>UD       g125<8,8,1>UW                   { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(8)          g126<1>UD       g125<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g125<1>UD       g125<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g125<1>UD       g125<1,1,0>UD   0x00000000UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g123UD          g125UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shl(16)         g118<1>D        g123<8,8,1>D    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g53<1>D         g118<1,1,0>D    1216D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g53UD           nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1H $11 };
mov(8)          g12<1>UW        0x76543210UV                    { align1 WE_all 1Q F@7 };
mov(8)          g12<1>UD        g12<8,8,1>UW                    { align1 WE_all 1Q I@1 };
add(8)          g13<1>UD        g12<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@1 compacted };
shl(16)         g12<1>UD        g12<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g12<1>UD        g12<1,1,0>UD    0x00000040UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g10UD           g12UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
shl(16)         g119<1>D        g10<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g54<1>D         g119<1,1,0>D    1280D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g54UD           nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1H $11 };

LABEL22:
endif(16)       JIP:  LABEL23                                   { align1 1H };

LABEL23:
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g120UD          g0UD            nullUD          0x0210111f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, evict, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
mov(8)          g121<1>UD       0x00000000UD                    { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(2)          g121.10<1>UB    g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g121UD          nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $9 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g47<1>UD        g1<8,8,1>UD                     { align1 1H };

LABEL26:
cmp.ge.f0.0(16) null<1>UD       g47<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL24       UIP:  LABEL24             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
shl(16)         g55<1>D         g47<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g60UD           g55UD           nullUD          0x04201502                0x00000000
                            slm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1H $11 };
cmp.nz.f0.0(16) null<1>F        g60<1,1,0>F     0x7f800000F  /* infF */ { align1 1H $11.dst compacted };
(+f0.0) if(16)  JIP:  LABEL25         UIP:  LABEL25             { align1 1H };
mov(8)          g71<1>UW        0x76543210UV                    { align1 WE_all 1Q $10.src };
mov(8)          g74<1>UW        0x76543210UV                    { align1 WE_all 1Q $11.src };
mov(8)          g51<1>UW        0x76543210UV                    { align1 WE_all 1Q $11.src };
mov(8)          g71<1>UD        g71<8,8,1>UW                    { align1 WE_all 1Q I@3 };
mov(8)          g74<1>UD        g74<8,8,1>UW                    { align1 WE_all 1Q I@3 };
mov(8)          g51<1>UD        g51<8,8,1>UW                    { align1 WE_all 1Q I@3 };
add(8)          g72<1>UD        g71<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(8)          g75<1>UD        g74<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(8)          g52<1>UD        g51<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@3 compacted };
shl(16)         g71<1>UD        g71<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@3 compacted };
shl(16)         g74<1>UD        g74<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@3 compacted };
shl(16)         g51<1>UD        g51<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@3 compacted };
add(16)         g71<1>UD        g71<1,1,0>UD    0x00000100UD    { align1 WE_all 1H I@3 compacted };
add(16)         g74<1>UD        g74<1,1,0>UD    0x00000100UD    { align1 WE_all 1H I@3 compacted };
add(16)         g51<1>UD        g51<1,1,0>UD    0x000000c0UD    { align1 WE_all 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g69UD           g71UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g72UD           g74UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $11.src };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $11.src };
send(16)        g49UD           g51UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g122<1>D        g69<1,1,0>D     44D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
cmp.l.f0.0(16)  g124<1>UD       g122<1,1,0>UD   g72<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g126<1>D        g122<1,1,0>D    g55<1,1,0>D     { align1 1H $11.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g3<1>UD         g126<1,1,0>UD   g122<1,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(8)          g56<2>UD        g126<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $11.src };
mov(8)          g58<2>UD        g127<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
add3(16)        g5<1>D          -g124<8,8,1>D   g49<8,8,1>D     -g3<1,1,1>D { align1 1H I@3 };
mov(8)          g58.1<2>UD      g6<4,4,1>UD                     { align1 2Q I@1 };
mov(8)          g56.1<2>UD      g5<4,4,1>UD                     { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g6UD            g56UD           g60UD           0x08240595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $11 };

LABEL25:
endif(16)       JIP:  LABEL24                                   { align1 1H };
add(16)         g47<1>D         g47<1,1,0>D     512D            { align1 1H compacted };

LABEL24:
while(16)       JIP:  LABEL26                                   { align1 1H };

LABEL29:
cmp.ge.f0.0(16) null<1>UD       g1<8,8,1>UD     0x00000030UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL27       UIP:  LABEL27             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
shl(16)         g7<1>D          g1<8,8,1>D      0x00000002UD    { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g61<1>D         g7<1,1,0>D      1152D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g66UD           g61UD           nullUD          0x04201502                0x00000000
                            slm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1H $11 };
cmp.nz.f0.0(16) null<1>D        g66<8,8,1>D     0D              { align1 1H $11.dst };
(+f0.0) if(16)  JIP:  LABEL28         UIP:  LABEL28             { align1 1H };
mov(8)          g77<1>UW        0x76543210UV                    { align1 WE_all 1Q $12.src };
mov(8)          g80<1>UW        0x76543210UV                    { align1 WE_all 1Q $13.src };
mov(8)          g54<1>UW        0x76543210UV                    { align1 WE_all 1Q $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(8)          g77<1>UD        g77<8,8,1>UW                    { align1 WE_all 1Q I@3 };
mov(8)          g80<1>UD        g80<8,8,1>UW                    { align1 WE_all 1Q I@3 };
mov(8)          g54<1>UD        g54<8,8,1>UW                    { align1 WE_all 1Q I@3 };
add(8)          g78<1>UD        g77<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(8)          g81<1>UD        g80<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(8)          g55<1>UD        g54<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@3 compacted };
shl(16)         g77<1>UD        g77<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@3 compacted };
shl(16)         g80<1>UD        g80<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@3 compacted };
shl(16)         g54<1>UD        g54<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@3 compacted };
add(16)         g77<1>UD        g77<1,1,0>UD    0x00000100UD    { align1 WE_all 1H I@3 compacted };
add(16)         g80<1>UD        g80<1,1,0>UD    0x00000100UD    { align1 WE_all 1H I@3 compacted };
add(16)         g54<1>UD        g54<1,1,0>UD    0x000000c0UD    { align1 WE_all 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g75UD           g77UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g78UD           g80UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $11.src };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $11.src };
send(16)        g52UD           g54UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
add(16)         g9<1>D          g75<1,1,0>D     1196D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.l.f0.0(16)  g11<1>UD        g9<1,1,0>UD     g78<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
add(16)         g13<1>D         g9<1,1,0>D      g7<1,1,0>D      { align1 1H compacted };
cmp.l.f0.0(16)  g15<1>UD        g13<1,1,0>UD    g9<1,1,0>UD     { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(8)          g62<2>UD        g13<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $11.src };
mov(8)          g64<2>UD        g14<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
add3(16)        g17<1>D         -g11<8,8,1>D    g52<8,8,1>D     -g15<1,1,1>D { align1 1H A@3 };
mov(8)          g64.1<2>UD      g18<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g62.1<2>UD      g17<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g18UD           g62UD           g66UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $11 };

LABEL28:
endif(16)       JIP:  LABEL27                                   { align1 1H };
add(16)         g1<1>D          g1<1,1,0>D      512D            { align1 1H I@5 compacted };

LABEL27:
while(16)       JIP:  LABEL29                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q $9.src };
mov(16)         acc0<1>F        0x0F             /* 0F */       { align1 WE_all 1H I@1 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_BFS_BFS_pass1_initial_batchable_code[] = {
    0x80000065, 0x73058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x22050220, 0x00000024, 0x00000000,
    0x00040061, 0x3b054660, 0x00000000, 0x00000001,
    0x00040061, 0x24054220, 0x00000000, 0x00000000,
    0x80030061, 0x21054410, 0x00000000, 0x76543210,
    0xe2741d40, 0x00017303, 0x00130061, 0x30264aa0,
    0x00000000, 0x00000000, 0x64211a40, 0x00802195,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00740c, 0x00340000,
    0x00131161, 0x30064aa0, 0x00000000, 0x00000000,
    0x00131161, 0x26260220, 0x00443026, 0x00000000,
    0x00131961, 0x26060220, 0x00443006, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x211d0061, 0x001102cc, 0x2a320061, 0x001102cc,
    0x00030061, 0x1f260aa0, 0x00000264, 0x00000000,
    0x00130061, 0x34260aa0, 0x00000264, 0x00000000,
    0x211d1461, 0x00110204, 0x2a321461, 0x00110204,
    0x211f1461, 0x00110244, 0x2a341461, 0x00110244,
    0xa1631440, 0x428e1d03, 0xa13f0040, 0x42ce1d03,
    0x00030061, 0x36050220, 0x00441d26, 0x00000000,
    0xaa381340, 0x428e3203, 0xaa400040, 0x42ce3203,
    0x00130061, 0x37050220, 0x00443226, 0x00000000,
    0x00031e70, 0x64050220, 0x52466305, 0x00441d06,
    0x00030061, 0x13060220, 0x00346305, 0x00000000,
    0x00031f70, 0x41050220, 0x52463f05, 0x00441d06,
    0x00131e70, 0x39050220, 0x52463805, 0x00443206,
    0x00130061, 0x15060220, 0x00343805, 0x00000000,
    0x00131f70, 0x42050220, 0x52464005, 0x00443206,
    0x00031e40, 0x65052660, 0x06466405, 0x00441d26,
    0x00031e61, 0x62264aa0, 0x00000000, 0x00000000,
    0x00131c40, 0x3a052660, 0x06463905, 0x00443226,
    0x00031a61, 0x13260220, 0x00346505, 0x00000000,
    0x00031161, 0x62064aa0, 0x00000000, 0x00000000,
    0x00131a61, 0x15260220, 0x00343a05, 0x00000000,
    0x00031161, 0x60260220, 0x00446226, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x3d140000, 0xfb041324, 0x00040000,
    0x00031961, 0x60060220, 0x00446206, 0x00000000,
    0x00031969, 0x43058660, 0x02446006, 0x00000002,
    0x00131b69, 0x44058660, 0x02442606, 0x00000002,
    0xa0451940, 0x43003f02, 0x27471970, 0x3f004503,
    0x00030061, 0x4b060220, 0x00344505, 0x00000000,
    0x00130061, 0x4d060220, 0x00344605, 0x00000000,
    0x00041b52, 0x49042e68, 0x0e2e4105, 0x47053605,
    0x00131961, 0x4d260220, 0x00344a05, 0x00000000,
    0x00031a61, 0x4b260220, 0x00344905, 0x00000000,
    0xe251004c, 0x00114004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80040040, 0x57058150,
    0x05582105, 0xffffffff, 0x80001b69, 0x10018220,
    0x02005104, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000800, 0x80000961, 0x67060660,
    0x00010580, 0x00000000, 0x80000061, 0x67260660,
    0x00010590, 0x00000000, 0x80000061, 0x6b064210,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x14260220,
    0x00006724, 0x00000000, 0x80031961, 0x14060220,
    0x00006704, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004131, 0x4f140000,
    0xfb00140c, 0x00340000, 0x80042161, 0x53054660,
    0x00000000, 0x00000000, 0x00040061, 0x53050660,
    0x00464f05, 0x00000000, 0x80041961, 0x10014110,
    0x00000000, 0x0a600a60, 0x80040069, 0x10018510,
    0x01465705, 0x00020002, 0x80040940, 0x10018110,
    0x01461001, 0x0a600a60, 0xe3550961, 0x001b0004,
    0x80001961, 0x55054660, 0x00000000, 0x00000000,
    0x80031940, 0x55260660, 0x06445506, 0x00445526,
    0x80021940, 0x55470660, 0x06425527, 0x00425547,
    0x80021940, 0x55670660, 0x06425527, 0x00425567,
    0x80021940, 0x55850660, 0x06005564, 0x00345585,
    0x80021a40, 0x56850660, 0x06005664, 0x00345685,
    0xa4561940, 0x56015582, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0580040, 0x55202202,
    0x275a1970, 0x4f005803, 0x80000061, 0x30010110,
    0x00006b04, 0x00000000, 0x00041a70, 0x00018220,
    0x22465a05, 0x00000000, 0x00040061, 0x5c050120,
    0x20003000, 0x00000000, 0x01040022, 0x0001c060,
    0x00000030, 0x00000030, 0x00040061, 0x28054220,
    0x00000000, 0xffffffff, 0x00040028, 0x0001c660,
    0x000000c8, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x000000b8, 0xa05e0040, 0x4f005502,
    0xa0240040, 0x01002403, 0xa0221a40, 0x5f302252,
    0x0004a170, 0x00010220, 0x42462405, 0x00463d05,
    0x01040022, 0x0001c060, 0x00000030, 0x00000030,
    0x00041f61, 0x28054220, 0x00000000, 0x00000000,
    0x00040028, 0x0001c660, 0x00000060, 0x00000010,
    0x00040025, 0x00004600, 0x00000000, 0x00000050,
    0x00030061, 0x60060220, 0x00342405, 0x00000000,
    0x00130061, 0x26060220, 0x00342505, 0x00000000,
    0x00031a61, 0x60264220, 0x00000000, 0x00000000,
    0x00131a61, 0x26264220, 0x00000000, 0x00000000,
    0x00040027, 0x00014060, 0x00000000, 0xfffffcc0,
    0x00041a61, 0x00010660, 0x20462805, 0x00000000,
    0x01040022, 0x0001c060, 0x000000b0, 0x00000090,
    0x00041b4c, 0x5f050220, 0x00465c05, 0x00000000,
    0x00040070, 0x00018660, 0x16465c05, 0x00000000,
    0x11041a62, 0x61058220, 0x02465f05, 0x00000020,
    0xa0291940, 0x61002402, 0x80040061, 0x10014110,
    0x00000000, 0x0b000b00, 0x00040069, 0x10018510,
    0x01566106, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0b000b00, 0xe02b0961, 0x001b0004,
    0x00040024, 0x0001c060, 0x00000030, 0x00000030,
    0x00041a61, 0x29054220, 0x00000000, 0x00000000,
    0x00041b61, 0x2b054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00030040, 0x62058660, 0x06441d06, 0x0000082c,
    0x00130040, 0x63058660, 0x06443206, 0x0000082c,
    0x00041d69, 0x66058660, 0x02462905, 0x00000002,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00030040, 0x79058660, 0x06441d06, 0x00002c2c,
    0x00130040, 0x7a058660, 0x06443206, 0x00002c2c,
    0x80032161, 0x3d054010, 0x00000000, 0x76543210,
    0xe7641d70, 0x82c06203, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0xa0680040, 0x66006202,
    0x80031b61, 0x3d050120, 0x00463d05, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x276a0070, 0x62006803, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x15060220,
    0x00346805, 0x00000000, 0x00130061, 0x17060220,
    0x00346905, 0x00000000, 0x00031f70, 0x7b050220,
    0x52467905, 0x00441d06, 0xe43ed140, 0x00803d03,
    0x00041d52, 0x6c042e68, 0x0e2e6405, 0x6a053605,
    0xe33d1a69, 0x00203d03, 0x00131a61, 0x17260220,
    0x00346d05, 0x00000000, 0x00031b61, 0x15260220,
    0x00346c05, 0x00000000, 0xe33d1b40, 0x10003d03,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044231, 0x6d140000, 0xfb041524, 0x00040000,
    0x00042261, 0x7c050120, 0x00566d16, 0x00000000,
    0x00040061, 0x6f050120, 0x00566d06, 0x00000000,
    0x607e1a41, 0x5cc07c02, 0x00130070, 0x7c050220,
    0x52467a05, 0x00443206, 0x00031b41, 0x20018220,
    0x01466f05, 0x00580058, 0x00041c6c, 0x71058660,
    0x02466f05, 0x0000001f, 0xa0381c40, 0x7e007902,
    0xfe730049, 0x05806f03, 0x60751b41, 0x05807102,
    0x00130041, 0x20018220, 0x01467005, 0x00580058,
    0x80103001, 0x00000000, 0x00000000, 0x00000000,
    0x00130049, 0x74058222, 0x02467005, 0x00000058,
    0xa0771940, 0x75007302, 0x60740041, 0x05806f02,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049331, 0x00020100, 0xfa083d14, 0x04003804,
    0x80030061, 0x40054010, 0x00000000, 0x76543210,
    0x80030061, 0x27054010, 0x00000000, 0x76543210,
    0x80031a61, 0x40050120, 0x00464005, 0x00000000,
    0x80031a61, 0x27050120, 0x00462705, 0x00000000,
    0xe4411a40, 0x00804003, 0xe4281a40, 0x00802703,
    0xe3401a69, 0x00204003, 0xe3271a69, 0x00202703,
    0xe3401a40, 0x10004003, 0xe3271a40, 0x0c002703,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049431, 0x3e160100, 0xfa004014, 0x04000000,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x27011370, 0x79003e03, 0x00041952, 0x25042e68,
    0x0e2e7b05, 0x01053605, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049531, 0x00020100,
    0xfa082714, 0x04002504, 0x80030061, 0x42054010,
    0x00000000, 0x76543210, 0x80030061, 0x29054010,
    0x00000000, 0x76543210, 0x80130061, 0x44054010,
    0x00000000, 0x76543210, 0x80130061, 0x2d054010,
    0x00000000, 0x76543210, 0xa1021440, 0x008e1f03,
    0xaa031340, 0x008e3403, 0xe0230065, 0x0ff10043,
    0x80031f61, 0x42050120, 0x00464205, 0x00000000,
    0x80031f61, 0x29050120, 0x00462905, 0x00000000,
    0x80131f61, 0x44050120, 0x00464405, 0x00000000,
    0x80131f61, 0x2d050120, 0x00462d05, 0x00000000,
    0x00031f70, 0x66050220, 0x52460205, 0x00441f06,
    0x00131f70, 0x04050220, 0x52460305, 0x00443406,
    0xa0070040, 0x74000202, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00041f69, 0x25058660,
    0x02462305, 0x00000004, 0xe4421f69, 0x00204203,
    0xe4291f69, 0x00202903, 0x80131f69, 0x44058220,
    0x02464405, 0x00000002, 0x80131f69, 0x2d058220,
    0x02462d05, 0x00000002, 0x00031f40, 0x05052660,
    0x06466605, 0x00441f26, 0x00131f40, 0x06052660,
    0x06460405, 0x00443426, 0x27091f70, 0x02000703,
    0xe4421f40, 0x10004203, 0xe4291f40, 0x0c002903,
    0x80131f40, 0x44058220, 0x02464405, 0x00000120,
    0x80131f40, 0x2d058220, 0x02462d05, 0x000000e0,
    0x00041d52, 0x0b040e68, 0x0e2e0505, 0x09057705,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80039631, 0x410e0100, 0xfa00420c, 0x04000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80039731, 0x280e0100, 0xfa00290c, 0x04000000,
    0x80101b01, 0x00000000, 0x00000000, 0x00000000,
    0x80100065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80100066, 0x10218220, 0x02001020, 0x0000000f,
    0x80139831, 0x430e0100, 0xfa00440c, 0x04000000,
    0x80101a01, 0x00000000, 0x00000000, 0x00000000,
    0x80100065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80100066, 0x10218220, 0x02001020, 0x0000000f,
    0x80139931, 0x2a0e0100, 0xfa002d0c, 0x04000000,
    0x80002601, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x1b060220, 0x00344105, 0x00000000,
    0x80102801, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x1d060220, 0x00344305, 0x00000000,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x00031a61, 0x1b260220, 0x00342805, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x28050160, 0x00462105, 0x00000000,
    0x80102901, 0x00000000, 0x00000000, 0x00000000,
    0x00131b61, 0x1d260220, 0x00342a05, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044a31, 0x14340000, 0xfb041b24, 0x001c0000,
    0x00033a61, 0x1a060220, 0x00340705, 0x00000000,
    0x00133a61, 0x1c060220, 0x00340805, 0x00000000,
    0x00031a61, 0x1a260220, 0x00340b05, 0x00000000,
    0x00131a61, 0x1c260220, 0x00340c05, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x0c440000, 0xfb041a24, 0x003c0000,
    0x00043b69, 0x1a058660, 0x02462b05, 0x00000009,
    0xa02a1f40, 0x25002802, 0xe0011965, 0x1ff02a03,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0xa01cba40, 0x1a001402, 0x00042a69, 0x36058660,
    0x02461805, 0x00000005, 0xe0383368, 0x01b01803,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0xa01e1b40, 0x20001c03, 0xa02b1d40, 0x01001c02,
    0x2722aa62, 0x16001e03, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x272d1970, 0x22002b03,
    0xa0312b40, 0x02001003, 0x00041a61, 0x6c062650,
    0x00462d05, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa03d1a40, 0x36003102,
    0x27330070, 0x10003103, 0x00041b65, 0x2f058110,
    0x01566c06, 0x00010001, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x273f1b70, 0x31003d03,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xa0430040, 0x01003d03, 0x00030061, 0x1c060220,
    0x00343d05, 0x00000000, 0x00130061, 0x1e060220,
    0x00343e05, 0x00000000, 0xa035eb40, 0x12023302,
    0x00041e61, 0x30050450, 0x00682f06, 0x00000000,
    0xe7451d70, 0x01004303, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00041b52, 0x41040e68,
    0x0e2e3505, 0x3f053805, 0xa0471940, 0x41024502,
    0x00131e61, 0x1e260220, 0x00344205, 0x00000000,
    0x00031f61, 0x1c260220, 0x00344105, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x14440000, 0xfb041c24, 0x003c0000,
    0x00033b61, 0x1d060220, 0x00344305, 0x00000000,
    0x00133b61, 0x1f060220, 0x00344405, 0x00000000,
    0x00031a61, 0x1d260220, 0x00344705, 0x00000000,
    0x00131a61, 0x1f260220, 0x00344805, 0x00000000,
    0x20492b40, 0x14201a00, 0x00041162, 0x4f058aa0,
    0x4a464905, 0x0704ec3d, 0x00041170, 0x5c058aa0,
    0x5a464f05, 0x77f684df, 0x00044c38, 0x53050aa0,
    0x1a464f05, 0x00460001, 0x00040070, 0x5e058aa0,
    0x3a464905, 0x0704ec3d, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x48240000,
    0xfb041d24, 0x000c0000, 0x00042c41, 0x55058aa0,
    0x0a465305, 0x417d70a4, 0x00041265, 0x00010220,
    0x22465c05, 0x00465e05, 0xef5f1162, 0x00005503,
    0x204c2b40, 0x16204800, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x204e2b40, 0x18204a00,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x00043c62, 0x50058aa0, 0x4a464c05, 0x0704ec3d,
    0x00040070, 0x61058aa0, 0x3a464c05, 0x0704ec3d,
    0x00041362, 0x52058aa0, 0x4a464e05, 0x0704ec3d,
    0x00041370, 0x63058aa0, 0x5a465005, 0x77f684df,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044d38, 0x56050aa0, 0x1a465005, 0x00460001,
    0x0004ae38, 0x59050aa0, 0x1a465205, 0x00460001,
    0x00041165, 0x00010220, 0x22466305, 0x00466105,
    0x80002e01, 0x00000000, 0x00000000, 0x00000000,
    0x00041b41, 0x5b058aa0, 0x0a465905, 0x417d70a4,
    0x00042d41, 0x58058aa0, 0x0a465605, 0x417d70a4,
    0xef641162, 0x00005803, 0x00040070, 0x66058aa0,
    0x3a464e05, 0x0704ec3d, 0x00043e70, 0x68058aa0,
    0x5a465205, 0x77f684df, 0x00041165, 0x00010220,
    0x22466805, 0x00466605, 0xef691462, 0x00005b03,
    0x00040070, 0x6d058550, 0x25583005, 0x00000000,
    0x00041961, 0x6b050560, 0x00466d05, 0x00000000,
    0x00041961, 0x6d062650, 0x00466b05, 0x00000000,
    0x00041965, 0x6f058110, 0x01566d06, 0x00010001,
    0x00041961, 0x70050450, 0x00686f06, 0x00000000,
    0x00041970, 0x73058550, 0x25587005, 0x00000000,
    0x00041961, 0x71050560, 0x20467305, 0x00000000,
    0x01040022, 0x0001c060, 0x00000360, 0x00000360,
    0x00040069, 0x74058660, 0x02462b05, 0x00000005,
    0x80031361, 0x57054010, 0x00000000, 0x76543210,
    0xa077ab40, 0x74000c02, 0x80031a61, 0x57050120,
    0x00465705, 0x00000000, 0xe0750068, 0x01b02b03,
    0x27791b70, 0x0c007703, 0xa07d0040, 0x01007703,
    0xe4581c40, 0x00805703, 0x00030061, 0x2a060220,
    0x00347705, 0x00000000, 0x00130061, 0x2c060220,
    0x00347805, 0x00000000, 0x0004db52, 0x7b040e68,
    0x0e2e0e05, 0x79057505, 0x27031d70, 0x77007d03,
    0xe3571d69, 0x00205703, 0x00131b61, 0x2c260220,
    0x00347c05, 0x00000000, 0x00031c61, 0x2a260220,
    0x00347b05, 0x00000000, 0xa0051c40, 0x7b020302,
    0xe3571c40, 0x18005703, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044f31, 0x20440000,
    0xfb042a24, 0x003c0000, 0x80002f01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049b31, 0x00020100,
    0xfa085714, 0x04002004, 0x80030061, 0x59054010,
    0x00000000, 0x76543210, 0x80031961, 0x59050120,
    0x00465905, 0x00000000, 0xe45a0940, 0x00805903,
    0xe3591969, 0x00205903, 0xe3591940, 0x1c005903,
    0x80002f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049b31, 0x00020100, 0xfa085914, 0x04002204,
    0x80030061, 0x5b054010, 0x00000000, 0x76543210,
    0x80031961, 0x5b050120, 0x00465b05, 0x00000000,
    0xe45c1940, 0x00805b03, 0xe35b1969, 0x00205b03,
    0xe35b1940, 0x20005b03, 0x80002f01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049031, 0x00020100,
    0xfa085b14, 0x04002404, 0x80030061, 0x5d054010,
    0x00000000, 0x76543210, 0x80031961, 0x5d050120,
    0x00465d05, 0x00000000, 0xe45e1940, 0x00805d03,
    0xe35d1969, 0x00205d03, 0xe35d1940, 0x24005d03,
    0x80002f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049531, 0x00020100, 0xfa085d14, 0x04002604,
    0x00033f61, 0x2b060220, 0x00347d05, 0x00000000,
    0x00133f61, 0x2d060220, 0x00347e05, 0x00000000,
    0x00031a61, 0x2b260220, 0x00340505, 0x00000000,
    0x00131a61, 0x2d260220, 0x00340605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x0c440000, 0xfb042b24, 0x003c0000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00043b69, 0x2c058660, 0x02460105, 0x00000002,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x00041961, 0x2e050220, 0x00462c05, 0x00000000,
    0x00041970, 0x00018220, 0x42462e05, 0x00000120,
    0x01040028, 0x0001c660, 0x00000090, 0x00000090,
    0x00043b69, 0x30058660, 0x02462e05, 0x00000002,
    0x00043b61, 0x1c054220, 0x00000000, 0x7f800000,
    0x00043b61, 0x1e054220, 0x00000000, 0x7f800000,
    0x00043b61, 0x20054220, 0x00000000, 0x7f800000,
    0x00043b61, 0x22054220, 0x00000000, 0x7f800000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x00000000, 0xea0c3014, 0x003c1c44,
    0x00040040, 0x2e058660, 0x06462e05, 0x00000800,
    0x00040027, 0x00014060, 0x00000000, 0xffffff60,
    0x00041970, 0x00018220, 0x42462c05, 0x00000030,
    0x01040028, 0x0001c660, 0x000000a8, 0x000000a8,
    0x00040069, 0x06058660, 0x02462c05, 0x00000002,
    0x00043b61, 0x33054220, 0x00000000, 0x00000000,
    0x00043b61, 0x35054220, 0x00000000, 0x00000000,
    0x00043b61, 0x37054220, 0x00000000, 0x00000000,
    0x00043b61, 0x39054220, 0x00000000, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0xa0311d40, 0x48000603, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x00000000,
    0xea0c3114, 0x003c3344, 0x00040040, 0x2c058660,
    0x06462c05, 0x00000800, 0x00040027, 0x00014060,
    0x00000000, 0xffffff48, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x070c0000,
    0xe23e000c, 0x00040000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x80030061, 0x08054220,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80011961, 0x08550000,
    0x0000005c, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80044231, 0x00000000,
    0x3008080c, 0x00000000, 0x80040001, 0x00000000,
    0xe0000000, 0x00000000, 0x80033b61, 0x1e054010,
    0x00000000, 0x76543210, 0x00041f61, 0x6e062650,
    0x00467105, 0x00000000, 0x80031a61, 0x1e050120,
    0x00461e05, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00041a65, 0x24058110,
    0x01566e06, 0x00010001, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0xe41f1a40, 0x00801e03,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00041a61, 0x25050450, 0x00682406, 0x00000000,
    0xe31e1a69, 0x00201e03, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00041a70, 0x26058550,
    0x25582505, 0x00000000, 0xe31e1a40, 0x08001e03,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x00041a61, 0x1c050560, 0x00462605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049331, 0x00020100, 0xfa081e14, 0x04001c04,
    0x80033b61, 0x21054010, 0x00000000, 0x76543210,
    0x80030061, 0x66054010, 0x00000000, 0x76543210,
    0x80031161, 0x53054010, 0x00000000, 0x76543210,
    0x80031b61, 0x21050120, 0x00462105, 0x00000000,
    0x80031b61, 0x66050120, 0x00466605, 0x00000000,
    0x80031b61, 0x53050120, 0x00465305, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0xe4221b40, 0x00802103, 0xe4671b40, 0x00806603,
    0xe4541b40, 0x00805303, 0xe3211b69, 0x00202103,
    0xe3661b69, 0x00206603, 0xe3531b69, 0x00205303,
    0xe3211b40, 0x08002103, 0xe3661b40, 0x18006603,
    0xe3531b40, 0x14005303, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049431, 0x1f160100,
    0xfa002114, 0x04000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049531, 0x61160100,
    0xfa006614, 0x04000000, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x6f062650,
    0x00461f05, 0x00000000, 0x80002501, 0x00000000,
    0x00000000, 0x00000000, 0x20092b40, 0x0c006100,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x00041965, 0x2a058110, 0x01566f06, 0x00010001,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x201d1140, 0x14200900, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x00041961, 0x2b050450,
    0x00682a06, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x20200941, 0x5f001d00,
    0x00041970, 0x2c058550, 0x25582b05, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x00041161, 0x51050a20, 0x00462005, 0x00000000,
    0x00041a61, 0x05050560, 0x00462c05, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049d31, 0x00020100, 0xfa085314, 0x04005104,
    0x80030061, 0x6b054010, 0x00000000, 0x76543210,
    0x80030061, 0x77054010, 0x00000000, 0x76543210,
    0x80031a61, 0x6b050120, 0x00466b05, 0x00000000,
    0x80031a61, 0x77050120, 0x00467705, 0x00000000,
    0xe46c1a40, 0x00806b03, 0xe4781a40, 0x00807703,
    0xe36b1a69, 0x00206b03, 0xe3771a69, 0x00207703,
    0xe36b1a40, 0x1c006b03, 0xe3771a40, 0x00007703,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049631, 0x67160100, 0xfa006b14, 0x04000000,
    0x80002601, 0x00000000, 0x00000000, 0x00000000,
    0x200a2b40, 0x0e006700, 0x201e1140, 0x16200a00,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x20211141, 0x64001e00, 0x00041161, 0x75050a20,
    0x00462105, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049731, 0x00020100,
    0xfa087714, 0x04007504, 0x80030061, 0x6e054010,
    0x00000000, 0x76543210, 0x80030061, 0x03054010,
    0x00000000, 0x76543210, 0x80031a61, 0x6e050120,
    0x00466e05, 0x00000000, 0x80031a61, 0x03050120,
    0x00460305, 0x00000000, 0xe46f1a40, 0x00806e03,
    0xe4041a40, 0x00800303, 0xe36e1a69, 0x00206e03,
    0xe3031a69, 0x00200303, 0xe36e1a40, 0x20006e03,
    0xe3031a40, 0x04000303, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049831, 0x6c160100,
    0xfa006e14, 0x04000000, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x201c2b40, 0x10006c00,
    0x201f1140, 0x18201c00, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x20221141, 0x69001f00,
    0x00041161, 0x7e050a20, 0x00462205, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049931, 0x00020100, 0xfa080314, 0x04007e04,
    0x80000061, 0x70064210, 0x00000000, 0x00000000,
    0x80001961, 0x30010110, 0x00007004, 0x00000000,
    0x00040070, 0x00018220, 0x22460505, 0x00000000,
    0x00043961, 0x03050120, 0x00003000, 0x00000000,
    0x00040069, 0x2d050660, 0x02463b05, 0x00462805,
    0xe0141765, 0x00302803, 0xe0161568, 0x00202803,
    0xe0180a65, 0x07702d03, 0x00041a70, 0x00018660,
    0x16460305, 0x00000000, 0x01040028, 0x0001c660,
    0x00000d20, 0x00000d20, 0x00040a4c, 0x1c050220,
    0x00460305, 0x00000000, 0x80030d61, 0x09054010,
    0x00000000, 0x76543210, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80031961, 0x09050120,
    0x00460905, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0xe40a0940, 0x00800903,
    0xe3091969, 0x00200903, 0xe3091940, 0x14000903,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049b31, 0x07160100, 0xfa000914, 0x04000000,
    0x80033b61, 0x09054010, 0x00000000, 0x76543210,
    0x80031961, 0x09050120, 0x00460905, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0xe40a1940, 0x00800903, 0xe3091969, 0x00200903,
    0xe3091940, 0x14000903, 0x80002b01, 0x00000000,
    0x00000000, 0x00000000, 0x80040061, 0x10014110,
    0x00000000, 0x00e000e0, 0x00040069, 0x10018510,
    0x01561c06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x00e000e0, 0xe01a0961, 0x001b0004,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049c31, 0x07160100, 0xfa000914, 0x04000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80002c01, 0x00000000, 0x00000000, 0x00000000,
    0xac1c1970, 0x07001a02, 0x20071965, 0x05001c03,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x00041961, 0x09062650, 0x00460705, 0x00000000,
    0x00040965, 0x6a058110, 0x01560906, 0x00010001,
    0x80030061, 0x0a054010, 0x00000000, 0x76543210,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041a61, 0x6b050450, 0x00686a06, 0x00000000,
    0x80031a61, 0x0a050120, 0x00460a05, 0x00000000,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040070, 0x6c058550, 0x25586b05, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0xe40b0a40, 0x00800a03, 0x00041a61, 0x1c050560,
    0x20466c05, 0x00000000, 0xe30a1a69, 0x00200a03,
    0x01040062, 0x07058220, 0x02460c05, 0xff800000,
    0xe30a1a40, 0x18000a03, 0xa31e0961, 0xff810000,
    0x601e0061, 0x00100700, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x07058220,
    0x02460e05, 0xff800000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x74060220,
    0x00441e26, 0x00000000, 0xa3201a61, 0xff810000,
    0x60200061, 0x00100700, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049e31, 0x08160100,
    0xfa000a14, 0x04000000, 0x80033e61, 0x0a054010,
    0x00000000, 0x76543210, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x76060220,
    0x00442026, 0x00000000, 0x80031a61, 0x0a050120,
    0x00460a05, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0xe40b1940, 0x00800a03,
    0xe30a1969, 0x00200a03, 0xe30a1940, 0x1c000a03,
    0x80002e01, 0x00000000, 0x00000000, 0x00000000,
    0x01041562, 0x6c058220, 0x02460805, 0x7f800000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049f31, 0x08160100, 0xfa000a14, 0x04000000,
    0x80033f61, 0x0a054010, 0x00000000, 0x76543210,
    0xa36a1a61, 0x7f810000, 0x606a0061, 0x00106c00,
    0x80031961, 0x0a050120, 0x00460a05, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0xe40b1940, 0x00800a03, 0xe30a1969, 0x00200a03,
    0xe30a1940, 0x20000a03, 0x80002f01, 0x00000000,
    0x00000000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001501, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x6e058220,
    0x02460805, 0x7f800000, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x07058220,
    0x02461005, 0xff800000, 0xa36c1a61, 0x7f810000,
    0x606c0061, 0x00106e00, 0xa36e1961, 0xff810000,
    0x606e0061, 0x00100700, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049d31, 0x08160100,
    0xfa000a14, 0x04000000, 0x80031261, 0x72060220,
    0x00446c26, 0x00000000, 0x80002d01, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x70058220,
    0x02460805, 0x7f800000, 0xa3071961, 0x7f810000,
    0x60070061, 0x00107000, 0x00040070, 0x00018660,
    0x16461405, 0x00000001, 0x80031161, 0x70060220,
    0x00446a26, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80031962, 0x09060aa0,
    0x5a446a06, 0x00447006, 0x80030961, 0x6a260220,
    0x00440906, 0x00000000, 0x80031161, 0x70060220,
    0x00440726, 0x00000000, 0x80021a61, 0x24070220,
    0x00426a27, 0x00000000, 0x80023561, 0x26070220,
    0x00426a47, 0x00000000, 0x80031c62, 0x09060aa0,
    0x5a446c06, 0x00447206, 0x80021962, 0x22070aa0,
    0x5a422407, 0x00422607, 0x80030a61, 0x6c260220,
    0x00440906, 0x00000000, 0x80031261, 0x72060220,
    0x00446e26, 0x00000000, 0x80021161, 0x6a470220,
    0x00422207, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80021b61, 0x30070220,
    0x00426c27, 0x00000000, 0x80023b61, 0x32070220,
    0x00426c47, 0x00000000, 0x80031d62, 0x09060aa0,
    0x4a441e06, 0x00447406, 0x80021b61, 0x2a070220,
    0x00426a27, 0x00000000, 0x80020061, 0x2c070220,
    0x00426a67, 0x00000000, 0x80021b62, 0x2e070aa0,
    0x5a423007, 0x00423207, 0x80031261, 0x1e260220,
    0x00440906, 0x00000000, 0x80021a62, 0x28070aa0,
    0x5a422a07, 0x00422c07, 0x80021261, 0x6c470220,
    0x00422e07, 0x00000000, 0x80021a61, 0x48070220,
    0x00421e27, 0x00000000, 0x80020061, 0x4a070220,
    0x00421e47, 0x00000000, 0x80031c62, 0x09060aa0,
    0x4a442006, 0x00447606, 0x80021261, 0x6a670220,
    0x00422807, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80021c61, 0x36070220,
    0x00426c27, 0x00000000, 0x80023b61, 0x38070220,
    0x00426c67, 0x00000000, 0x80021c62, 0x46070aa0,
    0x4a424807, 0x00424a07, 0x80031261, 0x20260220,
    0x00440906, 0x00000000, 0x80021c62, 0x6a850aa0,
    0x5a006a64, 0x00346a85, 0x80021c62, 0x6b850aa0,
    0x5a006b64, 0x00346b85, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80021a62, 0x34070aa0,
    0x5a423607, 0x00423807, 0x80021461, 0x1e470220,
    0x00424607, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80021a61, 0x54070220,
    0x00422027, 0x00000000, 0x80023b61, 0x56070220,
    0x00422047, 0x00000000, 0x80031c62, 0x09060aa0,
    0x5a440706, 0x00447006, 0x80031362, 0x6b050aa0,
    0x5a006ae4, 0x00466b05, 0x80021361, 0x6c670220,
    0x00423407, 0x00000000, 0x80021c61, 0x4e070220,
    0x00421e27, 0x00000000, 0x80023d61, 0x50070220,
    0x00421e67, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80021c62, 0x52070aa0,
    0x4a425407, 0x00425607, 0x80031361, 0x07260220,
    0x00440906, 0x00000000, 0x80021c62, 0x6c850aa0,
    0x5a006c64, 0x00346c85, 0x80021c62, 0x6d850aa0,
    0x5a006d64, 0x00346d85, 0x80021a62, 0x4c070aa0,
    0x4a424e07, 0x00425007, 0x80021461, 0x20470220,
    0x00425207, 0x00000000, 0x80021a61, 0x3c070220,
    0x00420727, 0x00000000, 0x80020061, 0x3e070220,
    0x00420747, 0x00000000, 0x80031c62, 0x09060aa0,
    0x4a446e06, 0x00447206, 0x80031362, 0x6d050aa0,
    0x5a006ce4, 0x00466d05, 0x80021361, 0x1e670220,
    0x00424c07, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80021c61, 0x5a070220,
    0x00422027, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80023061, 0x5c070220,
    0x00422067, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80021c62, 0x3a070aa0,
    0x5a423c07, 0x00423e07, 0x80031361, 0x6e260220,
    0x00440906, 0x00000000, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x09050220,
    0x02006de4, 0x00006be4, 0x80021d62, 0x1e850aa0,
    0x4a001e64, 0x00341e85, 0x80021d62, 0x1f850aa0,
    0x4a001f64, 0x00341f85, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80021b62, 0x58070aa0,
    0x4a425a07, 0x00425c07, 0x80021461, 0x07470220,
    0x00423a07, 0x00000000, 0x80021b61, 0x60070220,
    0x00426e27, 0x00000000, 0x80020061, 0x62070220,
    0x00426e47, 0x00000000, 0x80031262, 0x1f050aa0,
    0x4a001ee4, 0x00461f05, 0x80021261, 0x20670220,
    0x00425807, 0x00000000, 0x80021c61, 0x42070220,
    0x00420727, 0x00000000, 0x80020061, 0x44070220,
    0x00420767, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80021c62, 0x5e070aa0,
    0x4a426007, 0x00426207, 0x80021b62, 0x20850aa0,
    0x4a002064, 0x00342085, 0x80021b62, 0x21850aa0,
    0x4a002164, 0x00342185, 0x80021962, 0x40070aa0,
    0x5a424207, 0x00424407, 0x80021461, 0x6e470220,
    0x00425e07, 0x00000000, 0x80031262, 0x21050aa0,
    0x4a0020e4, 0x00462105, 0x80021261, 0x07670220,
    0x00424007, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80021a61, 0x66070220,
    0x00426e27, 0x00000000, 0x80020061, 0x68070220,
    0x00426e67, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x6a050220,
    0x020021e4, 0x00001fe4, 0x80021c62, 0x07850aa0,
    0x5a000764, 0x00340785, 0x80021c62, 0x08850aa0,
    0x5a000864, 0x00340885, 0x80021a62, 0x64070aa0,
    0x4a426607, 0x00426807, 0x00040070, 0x00018660,
    0x16461405, 0x00000002, 0x80031262, 0x08050aa0,
    0x5a0007e4, 0x00460805, 0x80021261, 0x6e670220,
    0x00426407, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x2f1e0062, 0x09010883,
    0x80021a62, 0x6e850aa0, 0x4a006e64, 0x00346e85,
    0x80021a62, 0x6f850aa0, 0x4a006f64, 0x00346f85,
    0x80031162, 0x6f050aa0, 0x4a006ee4, 0x00466f05,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x2f070062, 0x6a016f83, 0x00040070, 0x00018660,
    0x16461605, 0x00000000, 0x2f091a62, 0x07201e00,
    0x00040070, 0x00018660, 0x26461805, 0x00000000,
    0x01040022, 0x0001c060, 0x00000060, 0x00000060,
    0x60071141, 0x00601a02, 0x601a1941, 0x00301602,
    0x00040952, 0x1e040e68, 0x0e0e0705, 0x1a051405,
    0x00041969, 0x07058660, 0x02461e05, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044a31, 0x00000000, 0xea2a0714, 0x01000914,
    0x00040025, 0x00004600, 0x00000000, 0x00000088,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x00041164, 0x07050660, 0x00461c05, 0x00000000,
    0x80003761, 0x78064210, 0x00000000, 0x00000000,
    0x80001961, 0x30010110, 0x00007804, 0x00000000,
    0x00041b70, 0x00018220, 0x22460705, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x00041161, 0x08050120, 0x00003000, 0x00000000,
    0x20031965, 0x08000303, 0x00040027, 0x00014060,
    0x00000000, 0xfffff2d0, 0x80030061, 0x7a054010,
    0x00000000, 0x76543210, 0x80000061, 0x71064210,
    0x00000000, 0x00000000, 0x80031a61, 0x7a050120,
    0x00467a05, 0x00000000, 0xe47b1940, 0x00807a03,
    0xe37a1969, 0x00207a03, 0xe37a1940, 0x00007a03,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049031, 0x78160100, 0xfa007a14, 0x04000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa01a0040, 0x01007803, 0x80001e61, 0x30010110,
    0x00007104, 0x00000000, 0x00040070, 0x00018220,
    0x22460505, 0x00000000, 0x00040061, 0x03050120,
    0x00003000, 0x00000000, 0x00041970, 0x00018660,
    0x16460305, 0x00000000, 0x01040028, 0x0001c660,
    0x00000c00, 0x00000c00, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x0004004c, 0x07050220,
    0x00460305, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80040961, 0x10014110,
    0x00000000, 0x03400340, 0x00040069, 0x10018510,
    0x01560706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x03400340, 0xe01c0961, 0x001b0004,
    0xac071970, 0x1a001c02, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x20090965, 0x05000703,
    0x00041961, 0x07062650, 0x00460905, 0x00000000,
    0x80030061, 0x0a054010, 0x00000000, 0x76543210,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040065, 0x6e058110, 0x01560706, 0x00010001,
    0x80031a61, 0x0a050120, 0x00460a05, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00041a61, 0x6f050450, 0x00686e06, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0xe40b0a40, 0x00800a03, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040070, 0x70058550,
    0x25586f05, 0x00000000, 0xe30a1a69, 0x00200a03,
    0x00040961, 0x1e050560, 0x20467005, 0x00000000,
    0xe30a1a40, 0x18000a03, 0x01040062, 0x07058220,
    0x02460c05, 0xff800000, 0xa3200961, 0xff810000,
    0x60200061, 0x00100700, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x07058220,
    0x02460e05, 0xff800000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x76060220,
    0x00442026, 0x00000000, 0xa3220a61, 0xff810000,
    0x60220061, 0x00100700, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049131, 0x08160100,
    0xfa000a14, 0x04000000, 0x80033161, 0x0a054010,
    0x00000000, 0x76543210, 0x80031161, 0x78060220,
    0x00442226, 0x00000000, 0x80031a61, 0x0a050120,
    0x00460a05, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0xe40b1940, 0x00800a03,
    0xe30a1969, 0x00200a03, 0xe30a1940, 0x1c000a03,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x6e058220, 0x02460805, 0x7f800000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049231, 0x08160100, 0xfa000a14, 0x04000000,
    0x80033261, 0x0a054010, 0x00000000, 0x76543210,
    0xa36c0a61, 0x7f810000, 0x606c0061, 0x00106e00,
    0x80031961, 0x0a050120, 0x00460a05, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xe40b1940, 0x00800a03, 0xe30a1969, 0x00200a03,
    0xe30a1940, 0x20000a03, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x70058220,
    0x02460805, 0x7f800000, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x07058220,
    0x02461005, 0xff800000, 0xa36e1a61, 0x7f810000,
    0x606e0061, 0x00107000, 0xa3701961, 0xff810000,
    0x60700061, 0x00100700, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049d31, 0x08160100,
    0xfa000a14, 0x04000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80031261, 0x74060220,
    0x00446e26, 0x00000000, 0x80002d01, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x72058220,
    0x02460805, 0x7f800000, 0xa3071961, 0x7f810000,
    0x60070061, 0x00107200, 0x00040070, 0x00018660,
    0x16461405, 0x00000001, 0x80031161, 0x72060220,
    0x00446c26, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80031962, 0x09060aa0,
    0x5a446c06, 0x00447206, 0x80030961, 0x6c260220,
    0x00440906, 0x00000000, 0x80031161, 0x72060220,
    0x00440726, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80021a61, 0x26070220,
    0x00426c27, 0x00000000, 0x80020061, 0x28070220,
    0x00426c47, 0x00000000, 0x80031c62, 0x09060aa0,
    0x5a446e06, 0x00447406, 0x80021962, 0x24070aa0,
    0x5a422607, 0x00422807, 0x80030a61, 0x6e260220,
    0x00440906, 0x00000000, 0x80031261, 0x74060220,
    0x00447026, 0x00000000, 0x80021161, 0x6c470220,
    0x00422407, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80021b61, 0x32070220,
    0x00426e27, 0x00000000, 0x80023b61, 0x34070220,
    0x00426e47, 0x00000000, 0x80031d62, 0x09060aa0,
    0x4a442006, 0x00447606, 0x80021b61, 0x2c070220,
    0x00426c27, 0x00000000, 0x80020061, 0x2e070220,
    0x00426c67, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80021b62, 0x30070aa0,
    0x5a423207, 0x00423407, 0x80031261, 0x20260220,
    0x00440906, 0x00000000, 0x80021a62, 0x2a070aa0,
    0x5a422c07, 0x00422e07, 0x80021261, 0x6e470220,
    0x00423007, 0x00000000, 0x80021a61, 0x4a070220,
    0x00422027, 0x00000000, 0x80020061, 0x4c070220,
    0x00422047, 0x00000000, 0x80031c62, 0x09060aa0,
    0x4a442206, 0x00447806, 0x80021261, 0x6c670220,
    0x00422a07, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80021c61, 0x38070220,
    0x00426e27, 0x00000000, 0x80023b61, 0x3a070220,
    0x00426e67, 0x00000000, 0x80021c62, 0x48070aa0,
    0x4a424a07, 0x00424c07, 0x80031261, 0x22260220,
    0x00440906, 0x00000000, 0x80021c62, 0x6c850aa0,
    0x5a006c64, 0x00346c85, 0x80021c62, 0x6d850aa0,
    0x5a006d64, 0x00346d85, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80021a62, 0x36070aa0,
    0x5a423807, 0x00423a07, 0x80021461, 0x20470220,
    0x00424807, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80021a61, 0x56070220,
    0x00422227, 0x00000000, 0x80023b61, 0x58070220,
    0x00422247, 0x00000000, 0x80031c62, 0x09060aa0,
    0x5a440706, 0x00447206, 0x80031362, 0x6d050aa0,
    0x5a006ce4, 0x00466d05, 0x80021361, 0x6e670220,
    0x00423607, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80021c61, 0x50070220,
    0x00422027, 0x00000000, 0x80023d61, 0x52070220,
    0x00422067, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80021c62, 0x54070aa0,
    0x4a425607, 0x00425807, 0x80031361, 0x07260220,
    0x00440906, 0x00000000, 0x80021c62, 0x6e850aa0,
    0x5a006e64, 0x00346e85, 0x80021c62, 0x6f850aa0,
    0x5a006f64, 0x00346f85, 0x80021a62, 0x4e070aa0,
    0x4a425007, 0x00425207, 0x80021461, 0x22470220,
    0x00425407, 0x00000000, 0x80021a61, 0x3e070220,
    0x00420727, 0x00000000, 0x80020061, 0x40070220,
    0x00420747, 0x00000000, 0x80031c62, 0x09060aa0,
    0x4a447006, 0x00447406, 0x80031362, 0x6f050aa0,
    0x5a006ee4, 0x00466f05, 0x80021361, 0x20670220,
    0x00424e07, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80021c61, 0x5c070220,
    0x00422227, 0x00000000, 0x80023561, 0x5e070220,
    0x00422267, 0x00000000, 0x80021c62, 0x3c070aa0,
    0x5a423e07, 0x00424007, 0x80031361, 0x70260220,
    0x00440906, 0x00000000, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x09050220,
    0x02006fe4, 0x00006de4, 0x80021d62, 0x20850aa0,
    0x4a002064, 0x00342085, 0x80021d62, 0x21850aa0,
    0x4a002164, 0x00342185, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80021b62, 0x5a070aa0,
    0x4a425c07, 0x00425e07, 0x80021461, 0x07470220,
    0x00423c07, 0x00000000, 0x80021b61, 0x62070220,
    0x00427027, 0x00000000, 0x80020061, 0x64070220,
    0x00427047, 0x00000000, 0x80031262, 0x21050aa0,
    0x4a0020e4, 0x00462105, 0x80021261, 0x22670220,
    0x00425a07, 0x00000000, 0x80021c61, 0x44070220,
    0x00420727, 0x00000000, 0x80020061, 0x46070220,
    0x00420767, 0x00000000, 0x80021c62, 0x60070aa0,
    0x4a426207, 0x00426407, 0x80021b62, 0x22850aa0,
    0x4a002264, 0x00342285, 0x80021b62, 0x23850aa0,
    0x4a002364, 0x00342385, 0x80021962, 0x42070aa0,
    0x5a424407, 0x00424607, 0x80021461, 0x70470220,
    0x00426007, 0x00000000, 0x80031262, 0x23050aa0,
    0x4a0022e4, 0x00462305, 0x80021261, 0x07670220,
    0x00424207, 0x00000000, 0x80021a61, 0x68070220,
    0x00427027, 0x00000000, 0x80023661, 0x6a070220,
    0x00427067, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x6c050220,
    0x020023e4, 0x000021e4, 0x80021c62, 0x07850aa0,
    0x5a000764, 0x00340785, 0x80021c62, 0x08850aa0,
    0x5a000864, 0x00340885, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80021a62, 0x66070aa0,
    0x4a426807, 0x00426a07, 0x00040070, 0x00018660,
    0x16461405, 0x00000002, 0x80031262, 0x08050aa0,
    0x5a0007e4, 0x00460805, 0x80021261, 0x70670220,
    0x00426607, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x2f200062, 0x09010883,
    0x80021a62, 0x70850aa0, 0x4a007064, 0x00347085,
    0x80021a62, 0x71850aa0, 0x4a007164, 0x00347185,
    0x80031162, 0x71050aa0, 0x4a0070e4, 0x00467105,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x2f070062, 0x6c017183, 0x00040070, 0x00018660,
    0x16461605, 0x00000000, 0x2f091a62, 0x07202000,
    0x00040070, 0x00018660, 0x26461805, 0x00000000,
    0x01040022, 0x0001c060, 0x00000060, 0x00000060,
    0x60071141, 0x00601c02, 0x601c1941, 0x00301602,
    0x00040952, 0x20040e68, 0x0e0e0705, 0x1c051405,
    0x00041969, 0x07058660, 0x02462005, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044a31, 0x00000000, 0xea2a0714, 0x01000914,
    0x00040025, 0x00004600, 0x00000000, 0x00000078,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x00041164, 0x07050660, 0x00461e05, 0x00000000,
    0x80003061, 0x7a064210, 0x00000000, 0x00000000,
    0x80001961, 0x30010110, 0x00007a04, 0x00000000,
    0x00041b70, 0x00018220, 0x22460705, 0x00000000,
    0x00040061, 0x07050120, 0x00003000, 0x00000000,
    0x20031965, 0x07000303, 0x00040027, 0x00014060,
    0x00000000, 0xfffff3f0, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x09054010,
    0x00000000, 0x76543210, 0x80000061, 0x72064210,
    0x00000000, 0x00000000, 0x80031a61, 0x09050120,
    0x00460905, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0xe40a0940, 0x00800903,
    0xe3091969, 0x00200903, 0xe3091940, 0x04000903,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049331, 0x07160100, 0xfa000914, 0x04000000,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0xa01a1f40, 0x02000703, 0x80001e61, 0x30010110,
    0x00007204, 0x00000000, 0x00040070, 0x00018220,
    0x22460505, 0x00000000, 0x00041f61, 0x03050120,
    0x00003000, 0x00000000, 0x00041970, 0x00018660,
    0x16460305, 0x00000000, 0x01040028, 0x0001c660,
    0x00000c10, 0x00000c10, 0x0004094c, 0x07050220,
    0x00460305, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80040961, 0x10014110,
    0x00000000, 0x03400340, 0x00040069, 0x10018510,
    0x01560706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x03400340, 0xe01c0961, 0x001b0004,
    0xac071970, 0x1a001c02, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x20090065, 0x05000703,
    0x00041961, 0x07062650, 0x00460905, 0x00000000,
    0x80030061, 0x0a054010, 0x00000000, 0x76543210,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040065, 0x72058110, 0x01560706, 0x00010001,
    0x80031a61, 0x0a050120, 0x00460a05, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x73050450, 0x00687206, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0xe40b0a40, 0x00800a03, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040070, 0x74058550,
    0x25587305, 0x00000000, 0xe30a1a69, 0x00200a03,
    0x00040961, 0x1e050560, 0x20467405, 0x00000000,
    0xe30a1a40, 0x18000a03, 0x01040062, 0x07058220,
    0x02460c05, 0xff800000, 0xa3200961, 0xff810000,
    0x60200061, 0x00100700, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x07058220,
    0x02460e05, 0xff800000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x76060220,
    0x00442026, 0x00000000, 0xa3220a61, 0xff810000,
    0x60220061, 0x00100700, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049431, 0x08160100,
    0xfa000a14, 0x04000000, 0x80033461, 0x0a054010,
    0x00000000, 0x76543210, 0x80031161, 0x78060220,
    0x00442226, 0x00000000, 0x80031a61, 0x0a050120,
    0x00460a05, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xe40b1940, 0x00800a03,
    0xe30a1969, 0x00200a03, 0xe30a1940, 0x1c000a03,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80001401, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x6e058220, 0x02460805, 0x7f800000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049531, 0x08160100, 0xfa000a14, 0x04000000,
    0x80033561, 0x0a054010, 0x00000000, 0x76543210,
    0xa36c0a61, 0x7f810000, 0x606c0061, 0x00106e00,
    0x80031961, 0x0a050120, 0x00460a05, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xe40b1940, 0x00800a03, 0xe30a1969, 0x00200a03,
    0xe30a1940, 0x20000a03, 0x80002501, 0x00000000,
    0x00000000, 0x00000000, 0x80001501, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x70058220,
    0x02460805, 0x7f800000, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x07058220,
    0x02461005, 0xff800000, 0xa36e1a61, 0x7f810000,
    0x606e0061, 0x00107000, 0xa3701961, 0xff810000,
    0x60700061, 0x00100700, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049d31, 0x08160100,
    0xfa000a14, 0x04000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80031261, 0x74060220,
    0x00446e26, 0x00000000, 0x80002d01, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x72058220,
    0x02460805, 0x7f800000, 0xa3071961, 0x7f810000,
    0x60070061, 0x00107200, 0x00040070, 0x00018660,
    0x16461405, 0x00000001, 0x80031161, 0x72060220,
    0x00446c26, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80031962, 0x09060aa0,
    0x5a446c06, 0x00447206, 0x80030961, 0x6c260220,
    0x00440906, 0x00000000, 0x80031161, 0x72060220,
    0x00440726, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80021a61, 0x26070220,
    0x00426c27, 0x00000000, 0x80020061, 0x28070220,
    0x00426c47, 0x00000000, 0x80031c62, 0x09060aa0,
    0x5a446e06, 0x00447406, 0x80021962, 0x24070aa0,
    0x5a422607, 0x00422807, 0x80030a61, 0x6e260220,
    0x00440906, 0x00000000, 0x80031261, 0x74060220,
    0x00447026, 0x00000000, 0x80021161, 0x6c470220,
    0x00422407, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80021b61, 0x32070220,
    0x00426e27, 0x00000000, 0x80023b61, 0x34070220,
    0x00426e47, 0x00000000, 0x80031d62, 0x09060aa0,
    0x4a442006, 0x00447606, 0x80021b61, 0x2c070220,
    0x00426c27, 0x00000000, 0x80020061, 0x2e070220,
    0x00426c67, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80021b62, 0x30070aa0,
    0x5a423207, 0x00423407, 0x80031261, 0x20260220,
    0x00440906, 0x00000000, 0x80021a62, 0x2a070aa0,
    0x5a422c07, 0x00422e07, 0x80021261, 0x6e470220,
    0x00423007, 0x00000000, 0x80021a61, 0x4a070220,
    0x00422027, 0x00000000, 0x80020061, 0x4c070220,
    0x00422047, 0x00000000, 0x80031c62, 0x09060aa0,
    0x4a442206, 0x00447806, 0x80021261, 0x6c670220,
    0x00422a07, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80021c61, 0x38070220,
    0x00426e27, 0x00000000, 0x80023b61, 0x3a070220,
    0x00426e67, 0x00000000, 0x80021c62, 0x48070aa0,
    0x4a424a07, 0x00424c07, 0x80031261, 0x22260220,
    0x00440906, 0x00000000, 0x80021c62, 0x6c850aa0,
    0x5a006c64, 0x00346c85, 0x80021c62, 0x6d850aa0,
    0x5a006d64, 0x00346d85, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80021a62, 0x36070aa0,
    0x5a423807, 0x00423a07, 0x80021461, 0x20470220,
    0x00424807, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80021a61, 0x56070220,
    0x00422227, 0x00000000, 0x80023b61, 0x58070220,
    0x00422247, 0x00000000, 0x80031c62, 0x09060aa0,
    0x5a440706, 0x00447206, 0x80031362, 0x6d050aa0,
    0x5a006ce4, 0x00466d05, 0x80021361, 0x6e670220,
    0x00423607, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80021c61, 0x50070220,
    0x00422027, 0x00000000, 0x80023d61, 0x52070220,
    0x00422067, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80021c62, 0x54070aa0,
    0x4a425607, 0x00425807, 0x80031361, 0x07260220,
    0x00440906, 0x00000000, 0x80021c62, 0x6e850aa0,
    0x5a006e64, 0x00346e85, 0x80021c62, 0x6f850aa0,
    0x5a006f64, 0x00346f85, 0x80021a62, 0x4e070aa0,
    0x4a425007, 0x00425207, 0x80021461, 0x22470220,
    0x00425407, 0x00000000, 0x80021a61, 0x3e070220,
    0x00420727, 0x00000000, 0x80020061, 0x40070220,
    0x00420747, 0x00000000, 0x80031c62, 0x09060aa0,
    0x4a447006, 0x00447406, 0x80031362, 0x6f050aa0,
    0x5a006ee4, 0x00466f05, 0x80021361, 0x20670220,
    0x00424e07, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80021c61, 0x5c070220,
    0x00422227, 0x00000000, 0x80023561, 0x5e070220,
    0x00422267, 0x00000000, 0x80021c62, 0x3c070aa0,
    0x5a423e07, 0x00424007, 0x80031361, 0x70260220,
    0x00440906, 0x00000000, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x09050220,
    0x02006fe4, 0x00006de4, 0x80021d62, 0x20850aa0,
    0x4a002064, 0x00342085, 0x80021d62, 0x21850aa0,
    0x4a002164, 0x00342185, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80021b62, 0x5a070aa0,
    0x4a425c07, 0x00425e07, 0x80021461, 0x07470220,
    0x00423c07, 0x00000000, 0x80021b61, 0x62070220,
    0x00427027, 0x00000000, 0x80020061, 0x64070220,
    0x00427047, 0x00000000, 0x80031262, 0x21050aa0,
    0x4a0020e4, 0x00462105, 0x80021261, 0x22670220,
    0x00425a07, 0x00000000, 0x80021c61, 0x44070220,
    0x00420727, 0x00000000, 0x80020061, 0x46070220,
    0x00420767, 0x00000000, 0x80021c62, 0x60070aa0,
    0x4a426207, 0x00426407, 0x80021b62, 0x22850aa0,
    0x4a002264, 0x00342285, 0x80021b62, 0x23850aa0,
    0x4a002364, 0x00342385, 0x80021962, 0x42070aa0,
    0x5a424407, 0x00424607, 0x80021461, 0x70470220,
    0x00426007, 0x00000000, 0x80031262, 0x23050aa0,
    0x4a0022e4, 0x00462305, 0x80021261, 0x07670220,
    0x00424207, 0x00000000, 0x80021a61, 0x68070220,
    0x00427027, 0x00000000, 0x80023661, 0x6a070220,
    0x00427067, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x6c050220,
    0x020023e4, 0x000021e4, 0x80021c62, 0x07850aa0,
    0x5a000764, 0x00340785, 0x80021c62, 0x08850aa0,
    0x5a000864, 0x00340885, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80021a62, 0x66070aa0,
    0x4a426807, 0x00426a07, 0x00040070, 0x00018660,
    0x16461405, 0x00000002, 0x80031262, 0x08050aa0,
    0x5a0007e4, 0x00460805, 0x80021261, 0x70670220,
    0x00426607, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x2f200062, 0x09010883,
    0x80021a62, 0x70850aa0, 0x4a007064, 0x00347085,
    0x80021a62, 0x71850aa0, 0x4a007164, 0x00347185,
    0x80031162, 0x71050aa0, 0x4a0070e4, 0x00467105,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x2f070062, 0x6c017183, 0x00040070, 0x00018660,
    0x16461605, 0x00000000, 0x2f091a62, 0x07202000,
    0x00040070, 0x00018660, 0x26461805, 0x00000000,
    0x01040022, 0x0001c060, 0x00000060, 0x00000060,
    0x60071141, 0x00601c02, 0x601c1941, 0x00301602,
    0x00040952, 0x20040e68, 0x0e0e0705, 0x1c051405,
    0x00041969, 0x07058660, 0x02462005, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x00000000, 0xea2a0714, 0x01000914,
    0x00040025, 0x00004600, 0x00000000, 0x00000078,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00041164, 0x07050660, 0x00461e05, 0x00000000,
    0x80003061, 0x7a064210, 0x00000000, 0x00000000,
    0x80001961, 0x30010110, 0x00007a04, 0x00000000,
    0x00041b70, 0x00018220, 0x22460705, 0x00000000,
    0x00040061, 0x07050120, 0x00003000, 0x00000000,
    0x20031965, 0x07000303, 0x00040027, 0x00014060,
    0x00000000, 0xfffff3e0, 0x80030061, 0x24054010,
    0x00000000, 0x76543210, 0x80031961, 0x24050120,
    0x00462405, 0x00000000, 0xe4251940, 0x00802403,
    0xe3241969, 0x00202403, 0xe3241940, 0x08002403,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049631, 0x22160100, 0xfa002414, 0x04000000,
    0x80002601, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x00010660, 0x20462205, 0x00000000,
    0x01040022, 0x0001c060, 0x00000330, 0x00000330,
    0x80030061, 0x56054010, 0x00000000, 0x76543210,
    0x80031961, 0x56050120, 0x00465605, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0xe4571940, 0x00805603, 0xe3561969, 0x00205603,
    0xe3561940, 0x14005603, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049b31, 0x54160100,
    0xfa005614, 0x04000000, 0x80002b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x75058660,
    0x02465405, 0x00000002, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0340040, 0x48007503,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x00000000, 0xea103414, 0x01000000,
    0x80030061, 0x7d054010, 0x00000000, 0x76543210,
    0x80031961, 0x7d050120, 0x00467d05, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xe47e1940, 0x00807d03, 0xe37d1969, 0x00207d03,
    0xe37d1940, 0x00007d03, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049931, 0x7b160100,
    0xfa007d14, 0x04000000, 0x80002901, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x76058660,
    0x02467b05, 0x00000002, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0350040, 0x4c007603,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x00000000, 0xea103514, 0x01000000,
    0x80031761, 0x0c054010, 0x00000000, 0x76543210,
    0x80031961, 0x0c050120, 0x00460c05, 0x00000000,
    0xe40d0940, 0x00800c03, 0xe30c1969, 0x00200c03,
    0xe30c1940, 0x04000c03, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049731, 0x0a160100,
    0xfa000c14, 0x04000000, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x77058660,
    0x02460a05, 0x00000002, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0360040, 0x50007703,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x00000000, 0xea103614, 0x01000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80000001, 0x00000000, 0x30000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004831, 0x780c0000, 0xe23e000c, 0x00040000,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80030061, 0x79054220, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80011961, 0x79550000, 0x0000005c, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80044931, 0x00000000, 0x3008790c, 0x00000000,
    0x80040001, 0x00000000, 0xe0000000, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x2f050220, 0x00460105, 0x00000000,
    0x00041970, 0x00018220, 0x42462f05, 0x00000120,
    0x01040028, 0x0001c660, 0x00000368, 0x00000368,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x37058660, 0x02462f05, 0x00000002,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x3c140000, 0xea043714, 0x00040000,
    0xae002b70, 0x7f803c01, 0x01040022, 0x0001c060,
    0x000002e8, 0x000002e8, 0x80033a61, 0x47054010,
    0x00000000, 0x76543210, 0x80033b61, 0x4a054010,
    0x00000000, 0x76543210, 0x80033b61, 0x33054010,
    0x00000000, 0x76543210, 0x80031b61, 0x47050120,
    0x00464705, 0x00000000, 0x80031b61, 0x4a050120,
    0x00464a05, 0x00000000, 0x80031b61, 0x33050120,
    0x00463305, 0x00000000, 0xe4481b40, 0x00804703,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0xe44b1b40, 0x00804a03, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0xe4341b40, 0x00803303,
    0xe3471b69, 0x00204703, 0xe34a1b69, 0x00204a03,
    0xe3331b69, 0x00203303, 0xe3471b40, 0x10004703,
    0xe34a1b40, 0x10004a03, 0xe3331b40, 0x0c003303,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049a31, 0x45160100, 0xfa004714, 0x04000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049b31, 0x48160100, 0xfa004a14, 0x04000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80003b65, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80003b66, 0x10218220, 0x02001020, 0x0000000f,
    0x80049b31, 0x31160100, 0xfa003314, 0x04000000,
    0x80002a01, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa07a0040, 0x02c04503, 0x80002b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x277c1970, 0x48007a03,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xa07e3b40, 0x37007a02, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x27031970, 0x7a007e03,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x38060220, 0x00347e05, 0x00000000,
    0x80103b01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x3a060220, 0x00347f05, 0x00000000,
    0x80002b01, 0x00000000, 0x00000000, 0x00000000,
    0x00041b52, 0x05042e68, 0x0e2e7c05, 0x03053105,
    0x00131961, 0x3a260220, 0x00340605, 0x00000000,
    0x00031a61, 0x38260220, 0x00340505, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x06140000, 0xfb2a3824, 0x01003c14,
    0x00040025, 0x00004600, 0x00000000, 0x00000018,
    0xa02f0040, 0x20002f03, 0x00040027, 0x00014060,
    0x00000000, 0xfffffc88, 0x00041970, 0x00018220,
    0x42460105, 0x00000030, 0x01040028, 0x0001c660,
    0x000003b8, 0x000003b8, 0x80002b01, 0x00000000,
    0x00000000, 0x00000000, 0x00040969, 0x07058660,
    0x02460105, 0x00000002, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0xa03d0040, 0x48000703,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044b31, 0x42140000, 0xea043d14, 0x00040000,
    0x00042b70, 0x00018660, 0x26464205, 0x00000000,
    0x01040022, 0x0001c060, 0x00000308, 0x00000308,
    0x80033c61, 0x4d054010, 0x00000000, 0x76543210,
    0x80033d61, 0x50054010, 0x00000000, 0x76543210,
    0x80033b61, 0x36054010, 0x00000000, 0x76543210,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80031b61, 0x4d050120, 0x00464d05, 0x00000000,
    0x80031b61, 0x50050120, 0x00465005, 0x00000000,
    0x80031b61, 0x36050120, 0x00463605, 0x00000000,
    0xe44e1b40, 0x00804d03, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0xe4511b40, 0x00805003,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0xe4371b40, 0x00803603, 0xe34d1b69, 0x00204d03,
    0xe3501b69, 0x00205003, 0xe3361b69, 0x00203603,
    0xe34d1b40, 0x10004d03, 0xe3501b40, 0x10005003,
    0xe3361b40, 0x0c003603, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049c31, 0x4b160100,
    0xfa004d14, 0x04000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049d31, 0x4e160100,
    0xfa005014, 0x04000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80003b65, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80003b66, 0x10218220,
    0x02001020, 0x0000000f, 0x80049b31, 0x34160100,
    0xfa003614, 0x04000000, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0xa0090040, 0x4ac04b03,
    0x80002d01, 0x00000000, 0x00000000, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x270b0070, 0x4e000903, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80001601, 0x00000000,
    0x00000000, 0x00000000, 0xa00d0040, 0x07000902,
    0x270f0970, 0x09000d03, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x3e060220,
    0x00340d05, 0x00000000, 0x80103b01, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x40060220,
    0x00340e05, 0x00000000, 0x80002b01, 0x00000000,
    0x00000000, 0x00000000, 0x00040b52, 0x11042e68,
    0x0e2e0b05, 0x0f053405, 0x00131961, 0x40260220,
    0x00341205, 0x00000000, 0x00031a61, 0x3e260220,
    0x00341105, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x12140000,
    0xfb183e24, 0x01004214, 0x00040025, 0x00004600,
    0x00000000, 0x00000018, 0xa0011d40, 0x20000103,
    0x00040027, 0x00014060, 0x00000000, 0xfffffc38,
    0x80033961, 0x7e050220, 0x00460005, 0x00000000,
    0x80041961, 0x20014aa0, 0x00000000, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_BFS_BFS_pass1_initial_batchable = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 1024,
      .base.total_shared = 1344,
      .base.program_size = 20976,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_BFS_BFS_pass1_initial_batchable_relocs,
      .base.uses_atomic_load_store = false,
      .local_size = { 512, 1, 1 },
      .prog_offset = { 0, 0, 0 },
      .prog_mask = 2,
      .prog_spilled = 6,
      .uses_barrier = true,
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
   .args = gfx125_bvh_build_BFS_BFS_pass1_initial_batchable_args,
   .code = gfx125_bvh_build_BFS_BFS_pass1_initial_batchable_code,
};
const char *gfx125_bvh_build_BFS_BFS_pass1_initial_batchable_sha1 = "e06c4f1e41479fedd48925f641bb52109b917865";

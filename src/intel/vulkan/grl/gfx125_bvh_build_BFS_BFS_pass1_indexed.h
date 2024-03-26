#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_BFS_BFS_pass1_indexed_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_BFS_BFS_pass1_indexed_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g31<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g46<1>UD        g0.1<0,1,0>UD                   { align1 1H };
mov(16)         g70<1>D         1D                              { align1 1H };
mov(16)         g48<1>UD        0x00000000UD                    { align1 1H };
mov(8)          g45<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(1)          g32<1>UD        g31<0,1,0>UD    0x00000000UD    { align1 WE_all 1N I@5 compacted };
mov(8)          g61.1<2>F       0x0F             /* 0F */       { align1 2Q };
add(8)          g45.8<1>UW      g45<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g32UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g61<2>F         0x0F             /* 0F */       { align1 2Q F@1 };
mov(8)          g50.1<2>UD      g61.1<8,4,2>UD                  { align1 2Q F@1 };
mov(8)          g50<2>UD        g61<8,4,2>UD                    { align1 2Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g43.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g63.1<2>F       g2.1<0,1,0>F                    { align1 2Q compacted };
mov(8)          g34.1<2>F       g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g36.1<2>F       g2.3<0,1,0>F                    { align1 2Q };
mov(8)          g43<2>F         g2<0,1,0>F                      { align1 1Q F@4 compacted };
mov(8)          g63<2>F         g2<0,1,0>F                      { align1 2Q F@4 compacted };
mov(8)          g34<2>F         g2.2<0,1,0>F                    { align1 1Q F@4 compacted };
mov(8)          g36<2>F         g2.2<0,1,0>F                    { align1 2Q F@4 compacted };
add(8)          g117<1>D        g43<8,4,2>D     1064D           { align1 1Q F@4 compacted };
add(8)          g74<1>D         g43<8,4,2>D     1068D           { align1 1Q compacted };
mov(8)          g65<1>UD        g43.1<8,4,2>UD                  { align1 1Q };
add(8)          g67<1>D         g63<8,4,2>D     1064D           { align1 2Q F@3 compacted };
add(8)          g75<1>D         g63<8,4,2>D     1068D           { align1 2Q compacted };
mov(8)          g66<1>UD        g63.1<8,4,2>UD                  { align1 2Q };
cmp.l.f0.0(8)   g118<1>UD       g117<8,8,1>UD   g43<8,4,2>UD    { align1 1Q I@6 };
mov(8)          g78<2>UD        g117<4,4,1>UD                   { align1 1Q };
cmp.l.f0.0(8)   g76<1>UD        g74<8,8,1>UD    g43<8,4,2>UD    { align1 1Q I@7 };
cmp.l.f0.0(8)   g68<1>UD        g67<8,8,1>UD    g63<8,4,2>UD    { align1 2Q I@6 };
mov(8)          g80<2>UD        g67<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(8)   g77<1>UD        g75<8,8,1>UD    g63<8,4,2>UD    { align1 2Q I@7 };
add(8)          g119<1>D        -g118<8,8,1>D   g43.1<8,4,2>D   { align1 1Q I@6 };
mov(8)          g116.1<2>F      0x0F             /* 0F */       { align1 1Q I@6 };
add(8)          g69<1>D         -g68<8,8,1>D    g63.1<8,4,2>D   { align1 2Q I@4 };
mov(8)          g78.1<2>UD      g119<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g116<2>F        0x0F             /* 0F */       { align1 1Q F@1 };
mov(8)          g80.1<2>UD      g69<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g114.1<2>UD     g116.1<8,4,2>UD                 { align1 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g72UD           g78UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $1 };
mov(8)          g114<2>UD       g116<8,4,2>UD                   { align1 1Q I@1 };

LABEL3:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shl(8)          g78<1>D         g114<8,4,2>D    0x00000002UD    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
shl(8)          g79<1>D         g50<8,4,2>D     0x00000002UD    { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g80<1>D         g74<1,1,0>D     g78<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g82<1>UD        g80<1,1,0>UD    g74<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g86<2>UD        g80<4,4,1>UD                    { align1 1Q };
mov(8)          g88<2>UD        g81<4,4,1>UD                    { align1 2Q };
add3(16)        g84<1>D         -g76<8,8,1>D    g65<8,8,1>D     -g82<1,1,1>D { align1 1H I@3 };
mov(8)          g88.1<2>UD      g85<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g86.1<2>UD      g84<4,4,1>UD                    { align1 1Q I@2 };
fbl(1)          g92<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N compacted };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
add(16)         g98<1>W         g45<16,16,1>UW  -1W             { align1 WE_all 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
shl(1)          a0<1>UD         g92<0,1,0>UD    0x00000003UD    { align1 WE_all 1N A@3 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g1<2>D          g[a0 192]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g1.1<2>D        g[a0 196]<0,1,0>D               { align1 WE_all 1N };
mov(1)          g5<2>UW         0x00000000UD                    { align1 WE_all 1N };
mov(8)          g79.1<2>UD      g1.1<0,1,0>UD                   { align1 WE_all 1Q I@2 };
mov(8)          g79<2>UD        g1<0,1,0>UD                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) g90UD    g79UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $1 };
mov(16)         g94<1>D         0D                              { align1 WE_all 1H $1.dst };
mov(16)         g94<1>D         g90<8,8,1>D                     { align1 1H };
mov(16)         a0<1>UW         0x0bc0UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g98<8,8,1>W     0x0002UW        { align1 WE_all 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0bc0UW        { align1 WE_all 1H A@1 };
mov(16)         g96<1>UD        g[a0]<VxH,1,0>UD                { align1 WE_all 1H A@1 compacted };
mov(1)          g96<1>D         0D                              { align1 WE_all 1N I@1 };
add(8)          g96.1<2>D       g96<8,4,2>D     g96.1<8,4,2>D   { align1 WE_all 1Q I@1 };
add(4)          g96.2<4>D       g96.1<8,2,4>D   g96.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g96.3<4>D       g96.1<8,2,4>D   g96.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g96.4<1>D       g96.3<0,1,0>D   g96.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g97.4<1>D       g97.3<0,1,0>D   g97.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(8)          g97<1>D         g96.7<0,1,0>D   g97<1,1,0>D     { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g99<1>D         g46<1,1,0>D     -g96<1,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g101<1>UD       g99<1,1,0>UD    g90<1,1,0>UD    { align1 1H I@1 compacted };
mov(1)          f0<1>UW         g5<0,1,0>UW                     { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g101<8,8,1>UD   0x00000000UD    { align1 1H I@2 };
mov.nz.f0.0(16) g103<1>UD       f0<0,1,0>UW                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
mov(16)         g52<1>UD        0xffffffffUD                    { align1 1H };
break(16)       JIP:  LABEL0          UIP:  LABEL1              { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };
add(16)         g105<1>D        g96<1,1,0>D     g90<1,1,0>D     { align1 1H compacted };
add(16)         g48<1>D         g48<1,1,0>D     16D             { align1 1H compacted };
add(16)         g46<1>D         g46<1,1,0>D     -g106.7<0,1,0>D { align1 1H I@2 compacted };
cmp.ge.f0.0(16) null<1>UD       g48<8,8,1>UD    g72<8,8,1>UD    { align1 1H @2 $1.dst };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL2              { align1 1H };
mov(16)         g52<1>UD        0x00000000UD                    { align1 1H I@7 };
break(16)       JIP:  LABEL2          UIP:  LABEL1              { align1 1H };

LABEL2:
endif(16)       JIP:  LABEL1                                    { align1 1H };
mov(8)          g114<2>UD       g48<4,4,1>UD                    { align1 1Q };
mov(8)          g50<2>UD        g49<4,4,1>UD                    { align1 2Q };
mov(8)          g114.1<2>UD     0x00000000UD                    { align1 1Q I@2 };
mov(8)          g50.1<2>UD      0x00000000UD                    { align1 2Q I@2 };

LABEL1:
while(16)       JIP:  LABEL3                                    { align1 1H };
mov.nz.f0.0(16) null<1>D        g52<8,8,1>D                     { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL4              { align1 1H };
fbl(16)         g106<1>UD       g103<8,8,1>UD                   { align1 1H I@6 };
cmp.z.f0.0(16)  null<1>D        g103<8,8,1>D    0D              { align1 1H };
(-f0.0) sel(16) g108<1>UD       g106<8,8,1>UD   0x00000020UD    { align1 1H I@2 };
add(16)         g53<1>D         g48<1,1,0>D     g108<1,1,0>D    { align1 1H I@1 compacted };
mov(16)         a0<1>UW         0x0c60UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g108<16,8,2>W   0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0c60UW        { align1 1H A@1 };
mov(16)         g55<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
else(16)        JIP:  LABEL4          UIP:  LABEL4              { align1 1H };

LABEL5:
mov(16)         g53<1>UD        0x00000000UD                    { align1 1H I@2 };
mov(16)         g55<1>UD        0x00000000UD                    { align1 1H I@3 };

LABEL4:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
shl(16)         g109<1>D        g53<8,8,1>D     0x00000002UD    { align1 1H I@3 };
add(8)          g111<1>D        g43<8,4,2>D     2094D           { align1 1Q };
add(8)          g112<1>D        g63<8,4,2>D     2094D           { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(8)          g122<1>D        g63<8,4,2>D     11308D          { align1 2Q };
mov(8)          g87<1>UW        0x76543210UV                    { align1 WE_all 1Q };
cmp.l.f0.0(8)   g113<1>UD       g111<8,8,1>UD   g43<8,4,2>UD    { align1 1Q I@4 };
cmp.l.f0.0(8)   g114<1>UD       g112<8,8,1>UD   g63<8,4,2>UD    { align1 2Q I@4 };
add(16)         g115<1>D        g111<1,1,0>D    g109<1,1,0>D    { align1 1H I@7 compacted };
mov(8)          g87<1>UD        g87<8,8,1>UW                    { align1 WE_all 1Q I@4 };
cmp.l.f0.0(16)  g117<1>UD       g115<1,1,0>UD   g111<1,1,0>UD   { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g80<2>UD        g115<4,4,1>UD                   { align1 1Q };
mov(8)          g82<2>UD        g116<4,4,1>UD                   { align1 2Q };
add(8)          g88<1>UD        g87<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@4 compacted };
add3(16)        g119<1>D        -g113<8,8,1>D   g65<8,8,1>D     -g117<1,1,1>D { align1 1H I@4 };
shl(16)         g87<1>UD        g87<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
mov(8)          g82.1<2>UD      g120<4,4,1>UD                   { align1 2Q I@2 };
mov(8)          g80.1<2>UD      g119<4,4,1>UD                   { align1 1Q I@3 };
add(16)         g87<1>UD        g87<1,1,0>UD    0x00000100UD    { align1 WE_all 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g120UD          g80UD           nullUD          0x08200b80                0x00000000
                            ugm MsgDesc: ( load, a64, d16u32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $2 };
mov(16)         g124<1>UD       g120<16,8,2>UW                  { align1 1H $2.dst };
add(8)          g121<1>D        g43<8,4,2>D     11308D          { align1 1Q };
mul(16)         g126<1>D        g124<1,1,0>D    1484W           { align1 1H I@2 compacted };
cmp.l.f0.0(8)   g123<1>UD       g121<8,8,1>UD   g43<8,4,2>UD    { align1 1Q I@2 };
cmp.l.f0.0(8)   g124<1>UD       g122<8,8,1>UD   g63<8,4,2>UD    { align1 2Q };
add(16)         g85<1>D         g121<1,1,0>D    g126<1,1,0>D    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g87UD           g85UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $3 };
mov(8)          g90<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g74<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g90<1>UD        g90<8,8,1>UW                    { align1 WE_all 1Q I@2 };
mov(8)          g74<1>UD        g74<8,8,1>UW                    { align1 WE_all 1Q I@2 };
add(8)          g91<1>UD        g90<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
add(8)          g75<1>UD        g74<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
shl(16)         g90<1>UD        g90<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
shl(16)         g74<1>UD        g74<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
add(16)         g90<1>UD        g90<1,1,0>UD    0x00000100UD    { align1 WE_all 1H I@2 compacted };
add(16)         g74<1>UD        g74<1,1,0>UD    0x000000c0UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g88UD           g90UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@3 };
cmp.l.f0.0(16)  g1<1>UD         g88<1,1,0>UD    g121<1,1,0>UD   { align1 1H compacted };
add3(16)        g72<1>D         -g123<8,8,1>D   g65<8,8,1>D     -g1<1,1,1>D { align1 1H @1 $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g74UD           g72UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $5 };
mov(8)          g92<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g76<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g94<1>UW        0x76543210UV                    { align1 WE_all 2Q };
mov(8)          g78<1>UW        0x76543210UV                    { align1 WE_all 2Q $1.src };
add(8)          g120<1>D        g34<8,4,2>D     52D             { align1 1Q F@4 compacted };
add(8)          g16<1>D         g36<8,4,2>D     52D             { align1 2Q F@3 compacted };
and(16)         g50<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g31<1>D         g45<8,8,1>UW                    { align1 1H };
mov(8)          g115<1>UW       0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g92<1>UD        g92<8,8,1>UW                    { align1 WE_all 1Q I@7 };
mov(8)          g76<1>UD        g76<8,8,1>UW                    { align1 WE_all 1Q I@7 };
mov(8)          g94<1>UD        g94<8,8,1>UW                    { align1 WE_all 2Q I@7 };
mov(8)          g78<1>UD        g78<8,8,1>UW                    { align1 WE_all 2Q I@7 };
shl(16)         g52<1>D         g50<8,8,1>D     0x00000004UD    { align1 1H I@7 };
mov(8)          g115<1>UD       g115<8,8,1>UW                   { align1 WE_all 1Q I@6 };
shl(8)          g92<1>UD        g92<1,1,0>UD    0x00000002UD    { align1 WE_all 1Q I@6 compacted };
shl(8)          g76<1>UD        g76<1,1,0>UD    0x00000002UD    { align1 WE_all 1Q I@6 compacted };
shl(8)          g94<1>UD        g94<8,8,1>UD    0x00000002UD    { align1 WE_all 2Q I@6 };
shl(8)          g78<1>UD        g78<8,8,1>UD    0x00000002UD    { align1 WE_all 2Q I@6 };
add(16)         g57<1>D         g31<1,1,0>D     g52<1,1,0>D     { align1 1H I@6 compacted };
add(8)          g116<1>UD       g115<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@6 compacted };
add(8)          g92<1>UD        g92<1,1,0>UD    0x00000100UD    { align1 WE_all 1Q I@6 compacted };
add(8)          g76<1>UD        g76<1,1,0>UD    0x000000c0UD    { align1 WE_all 1Q I@6 compacted };
add(8)          g94<1>UD        g94<8,8,1>UD    0x00000120UD    { align1 WE_all 2Q I@6 };
add(8)          g78<1>UD        g78<8,8,1>UD    0x000000e0UD    { align1 WE_all 2Q I@6 };
and(16)         g113<1>UD       g57<1,1,0>UD    0x000001ffUD    { align1 1H I@6 compacted };
shl(16)         g115<1>UD       g115<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(8)         g91UD           g92UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1Q @1 $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(8)         g75UD           g76UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1Q @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@4 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 3N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 3N };
send(8)         g93UD           g94UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 2Q @1 $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@3 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 3N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 3N };
send(8)         g77UD           g78UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 2Q @1 $8 };
add(16)         g115<1>UD       g115<1,1,0>UD   0x00000180UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
mov(8)          g81<2>UD        g91<4,4,1>UD                    { align1 1Q $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $6.dst };
mov(8)          g83<2>UD        g93<4,4,1>UD                    { align1 2Q $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
mov(8)          g81.1<2>UD      g75<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $8.dst };
mov(8)          g83.1<2>UD      g77<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g2UD            g81UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g82<2>UD        g120<4,4,1>UD                   { align1 1Q $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $3.src };
mov(8)          g84<2>UD        g16<4,4,1>UD                    { align1 2Q $9.src };
and(16)         g10<1>UD        g8<1,1,0>UD     0x00000001UD    { align1 1H $9.dst compacted };
cmp.nz.f0.0(16) g12<1>D         g10<1,1,0>D     0D              { align1 1H I@1 compacted };
cmp.l.f0.0(8)   g121<1>UD       g120<8,8,1>UD   g34<8,4,2>UD    { align1 1Q };
cmp.l.f0.0(8)   g17<1>UD        g16<8,8,1>UD    g36<8,4,2>UD    { align1 2Q };
add(8)          g122<1>D        -g121<8,8,1>D   g34.1<8,4,2>D   { align1 1Q I@2 };
add(8)          g18<1>D         -g17<8,8,1>D    g36.1<8,4,2>D   { align1 2Q I@2 };
mov(16)         g10<2>W         -g12<8,8,1>D                    { align1 1H I@5 };
mov(8)          g82.1<2>UD      g122<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g84.1<2>UD      g18<4,4,1>UD                    { align1 2Q I@3 };
and(16)         g14<1>UW        g10<16,8,2>UW   0x0001UW        { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g19UD           g82UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $9 };
mov(16)         g15<1>W         g14<32,16,2>B                   { align1 1H I@1 };
cmp.nz.f0.0(16) g23<1>W         g15<16,16,1>W   0W              { align1 1H I@1 };
mov(16)         g21<1>D         g23<8,8,1>W                     { align1 1H I@1 };
mov(16)         g11<2>W         -g21<8,8,1>D                    { align1 1H I@1 };
and(16)         g25<1>UW        g11<16,8,2>UW   0x0001UW        { align1 1H I@1 };
mov.nz.f0.0(16) null<1>W        g25<32,16,2>B                   { align1 1H I@1 };
(+f0.0) sel(16) g28<1>UD        g19<1,1,0>UD    0x00000000UD    { align1 1H $9.dst compacted };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g115UD          g113UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $10 };
shl(16)         g38<1>D         g55<8,8,1>D     0x00000009UD    { align1 1H };
mov(8)          g118<1>UW       0x76543210UV                    { align1 WE_all 1Q };
add(8)          g123<1>D        g34<8,4,2>D     16D             { align1 1Q compacted };
add(8)          g46<1>D         g36<8,4,2>D     16D             { align1 2Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g20UD           g34UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $11 };
add(16)         g40<1>D         g2<1,1,0>D      g38<1,1,0>D     { align1 1H @4 $9.dst compacted };
mov(8)          g118<1>UD       g118<8,8,1>UW                   { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
cmp.l.f0.0(8)   g124<1>UD       g123<8,8,1>UD   g34<8,4,2>UD    { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $11.src };
cmp.l.f0.0(8)   g47<1>UD        g46<8,8,1>UD    g36<8,4,2>UD    { align1 2Q I@4 };
mov(8)          g83<2>UD        g123<4,4,1>UD                   { align1 1Q $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $3.src };
mov(8)          g85<2>UD        g46<4,4,1>UD                    { align1 2Q $9.src };
add(16)         g42<1>D         g40<1,1,0>D     512D            { align1 1H I@6 compacted };
add(8)          g119<1>UD       g118<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@6 compacted };
add(8)          g125<1>D        -g124<8,8,1>D   g34.1<8,4,2>D   { align1 1Q I@6 };
add(8)          g48<1>D         -g47<8,8,1>D    g36.1<8,4,2>D   { align1 2Q I@6 };
sel.l(16)       g44<1>UD        g42<1,1,0>UD    g4<1,1,0>UD     { align1 1H @4 $9.dst compacted };
shl(16)         g118<1>UD       g118<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@4 compacted };
mov(8)          g83.1<2>UD      g125<4,4,1>UD                   { align1 1Q I@4 };
mov(8)          g85.1<2>UD      g48<4,4,1>UD                    { align1 2Q I@4 };
add(16)         g118<1>UD       g118<1,1,0>UD   0x00000180UD    { align1 WE_all 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g49UD           g83UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g116UD          g118UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
add(16)         g58<1>D         g40<1,1,0>D     g116<1,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g60<1>UD        g58<1,1,0>UD    g40<1,1,0>UD    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g62<1>UD        g58<1,1,0>UD    g44<1,1,0>UD    { align1 1H I@7 compacted };
and(16)         g64<1>UD        ~g60<8,8,1>D    g62<8,8,1>UD    { align1 1H I@1 };
mov(16)         g12<2>W         -g64<8,8,1>D                    { align1 1H I@1 };
and(16)         g66<1>UW        g12<16,8,2>UW   0x0001UW        { align1 1H I@1 };
mov(16)         g67<1>W         g66<32,16,2>B                   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.nz.f0.0(16) g72<1>W         g67<16,16,1>W   0W              { align1 1H I@1 };
mov.nz.f0.0(16) g68<1>D         g72<8,8,1>W                     { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
add(16)         g73<1>D         g28<1,1,0>D     g58<1,1,0>D     { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(16)  g75<1>UD        g73<1,1,0>UD    g28<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
shr(16)         g82<1>UD        g73<1,1,0>UD    0x0000001eUD    { align1 1H $9.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g77<1>D         -g75<1,1,0>D    -g60<1,1,0>D    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
shl(16)         g80<1>D         g77<8,8,1>D     0x00000002UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shl(16)         g78<1>D         g73<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
or(16)          g84<1>UD        g80<1,1,0>UD    g82<1,1,0>UD    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g86<1>D         g20<1,1,0>D     g78<1,1,0>D     { align1 1H @2 $11.dst compacted };
cmp.l.f0.0(16)  g88<1>UD        g86<1,1,0>UD    g20<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g92<2>UD        g86<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $6.src };
mov(8)          g94<2>UD        g87<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add3(16)        g90<1>D         g22<8,8,1>D     g84<8,8,1>D     -g88<1,1,1>D { align1 1H @3 $11.dst };
mov(8)          g94.1<2>UD      g91<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g92.1<2>UD      g90<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g56UD           g92UD           nullUD          0x08201582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $6 };
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
mov(16)         g56<1>UD        0x00000000UD                    { align1 1H $6.dst };

LABEL7:
endif(16)       JIP:  LABEL9                                    { align1 1H };

LABEL9:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g91<1>D         g49<1,1,0>D     32D             { align1 1H $12.dst compacted };
shl(16)         g97<1>D         g6<8,8,1>D      0x00000005UD    { align1 1H $9.dst };
shr(16)         g99<1>UD        g6<1,1,0>UD     0x0000001bUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g93<1>UD        g91<1,1,0>UD    g49<1,1,0>UD    { align1 1H I@3 compacted };
add(16)         g101<1>D        g91<1,1,0>D     g97<1,1,0>D     { align1 1H I@3 compacted };
mov(16)         g13<2>W         -g68<8,8,1>D                    { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g95<1>D         -g93<1,1,0>D    g51<1,1,0>D     { align1 1H @3 $12.dst compacted };
cmp.l.f0.0(16)  g103<1>UD       g101<1,1,0>UD   g91<1,1,0>UD    { align1 1H I@3 compacted };
add(16)         g107<1>D        g101<1,1,0>D    16D             { align1 1H compacted };
and(16)         g63<1>UW        g13<16,8,2>UW   0x0001UW        { align1 1H I@4 };
add3(16)        g105<1>D        g95<8,8,1>D     g99<8,8,1>D     -g103<1,1,1>D { align1 1H I@3 };
cmp.l.f0.0(16)  g109<1>UD       g107<1,1,0>UD   0x00000010UD    { align1 1H I@3 compacted };
mov(16)         g64<1>W         g63<32,16,2>B                   { align1 1H I@3 };
add(16)         g111<1>D        -g109<1,1,0>D   g105<1,1,0>D    { align1 1H I@2 compacted };
mov(8)          g93<2>UD        g101<4,4,1>UD                   { align1 1Q };
mov(8)          g95<2>UD        g102<4,4,1>UD                   { align1 2Q };
mov(8)          g93.1<2>UD      g105<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g95.1<2>UD      g106<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g33UD           g93UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $14 };
mov(8)          g94<2>UD        g107<4,4,1>UD                   { align1 1Q $14.src };
mov(8)          g96<2>UD        g108<4,4,1>UD                   { align1 2Q $14.src };
mov(8)          g94.1<2>UD      g111<4,4,1>UD                   { align1 1Q I@2 };
mov(8)          g96.1<2>UD      g112<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g113<1>F        g39<1,1,0>F     -g33<1,1,0>F    { align1 1H $14.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
sel.ge(16)      g119<1>F        g113<8,8,1>F    0x704ec3dF  /* 1e-34F */ { align1 1H };
cmp.l.f0.0(16)  g5<1>F          g119<8,8,1>F    0x77f684dfF  /* 1e+34F */ { align1 1H F@1 };
math inv(16)    g123<1>F        g119<8,8,1>F    null<8,8,1>F    { align1 1H $15 };
cmp.g.f0.0(16)  g7<1>F          g113<8,8,1>F    0x704ec3dF  /* 1e-34F */ { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g112UD          g94UD           nullUD          0x08403582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $0 };
mul(16)         g125<1>F        g123<8,8,1>F    0x417d70a4F  /* 15.84F */ { align1 1H $15.dst };
and.nz.f0.0(16) null<1>UD       g5<8,8,1>UD     g7<8,8,1>UD     { align1 1H F@2 };
(+f0.0) sel(16) g28<1>UD        g125<1,1,0>UD   0x00000000UD    { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
add(16)         g116<1>F        g112<1,1,0>F    -g35<1,1,0>F    { align1 1H $0.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g118<1>F        g114<1,1,0>F    -g37<1,1,0>F    { align1 1H $0.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sel.ge(16)      g120<1>F        g116<8,8,1>F    0x704ec3dF  /* 1e-34F */ { align1 1H F@2 };
cmp.g.f0.0(16)  g41<1>F         g116<8,8,1>F    0x704ec3dF  /* 1e-34F */ { align1 1H };
sel.ge(16)      g122<1>F        g118<8,8,1>F    0x704ec3dF  /* 1e-34F */ { align1 1H F@3 };
cmp.l.f0.0(16)  g43<1>F         g120<8,8,1>F    0x77f684dfF  /* 1e+34F */ { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
math inv(16)    g126<1>F        g120<8,8,1>F    null<8,8,1>F    { align1 1H $1 };
math inv(16)    g2<1>F          g122<8,8,1>F    null<8,8,1>F    { align1 1H @2 $2 };
and.nz.f0.0(16) null<1>UD       g43<8,8,1>UD    g41<8,8,1>UD    { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
mul(16)         g4<1>F          g2<8,8,1>F      0x417d70a4F  /* 15.84F */ { align1 1H I@3 };
mul(16)         g1<1>F          g126<8,8,1>F    0x417d70a4F  /* 15.84F */ { align1 1H $1.dst };
(+f0.0) sel(16) g50<1>UD        g1<1,1,0>UD     0x00000000UD    { align1 1H F@1 compacted };
cmp.g.f0.0(16)  g52<1>F         g118<8,8,1>F    0x704ec3dF  /* 1e-34F */ { align1 1H };
cmp.l.f0.0(16)  g54<1>F         g122<8,8,1>F    0x77f684dfF  /* 1e+34F */ { align1 1H $2.src };
and.nz.f0.0(16) null<1>UD       g54<8,8,1>UD    g52<8,8,1>UD    { align1 1H F@1 };
(+f0.0) sel(16) g61<1>UD        g4<1,1,0>UD     0x00000000UD    { align1 1H F@4 compacted };
cmp.nz.f0.0(16) g67<1>W         g64<16,16,1>W   0W              { align1 1H };
mov.nz.f0.0(16) g65<1>D         g67<8,8,1>W                     { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL10             { align1 1H };
shl(16)         g68<1>D         g56<8,8,1>D     0x00000005UD    { align1 1H $6.dst };
shr(16)         g72<1>UD        g56<1,1,0>UD    0x0000001bUD    { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g74<1>D         g24<1,1,0>D     g68<1,1,0>D     { align1 1H @2 $11.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.l.f0.0(16)  g76<1>UD        g74<1,1,0>UD    g24<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g80<1>D         g74<1,1,0>D     16D             { align1 1H $2.src compacted };
mov(8)          g95<2>UD        g74<4,4,1>UD                    { align1 1Q $0.src };
mov(8)          g97<2>UD        g75<4,4,1>UD                    { align1 2Q $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add3(16)        g78<1>D         g26<8,8,1>D     g72<8,8,1>D     -g76<1,1,1>D { align1 1H @4 $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
cmp.l.f0.0(16)  g82<1>UD        g80<1,1,0>UD    g74<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g97.1<2>UD      g79<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g95.1<2>UD      g78<4,4,1>UD                    { align1 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g84<1>D         -g82<1,1,0>D    g78<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
send(16)        g3UD            g95UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $0 };
mov(8)          g96<2>UD        g80<4,4,1>UD                    { align1 1Q $0.src };
mov(8)          g98<2>UD        g81<4,4,1>UD                    { align1 2Q $0.src };
mov(8)          g96.1<2>UD      g84<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g98.1<2>UD      g85<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g11UD           g96UD           nullUD          0x0880f582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xyzw, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat ) base_offset 0  { align1 1H $0 };

LABEL10:
endif(16)       JIP:  LABEL11                                   { align1 1H };

LABEL11:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g121<1>UW       0x76543210UV                    { align1 WE_all 1Q F@5 };
mov(8)          g121<1>UD       g121<8,8,1>UW                   { align1 WE_all 1Q I@1 };
add(8)          g122<1>UD       g121<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q A@1 compacted };
shl(16)         g121<1>UD       g121<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g121<1>UD       g121<1,1,0>UD   0x00000180UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g119UD          g121UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
shl(16)         g57<1>D         g119<8,8,1>D    0x00000002UD    { align1 1H $6.dst };
mov(16)         g59<1>UD        g57<8,8,1>UD                    { align1 1H I@1 };

LABEL13:
cmp.ge.f0.0(16) null<1>UD       g59<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL12       UIP:  LABEL12             { align1 1H };
shl(16)         g97<1>D         g59<8,8,1>D     0x00000002UD    { align1 1H $0.src };
mov(16)         g41<1>UD        0x7f800000UD                    { align1 1H $0.src };
mov(16)         g43<1>UD        0x7f800000UD                    { align1 1H $0.src };
mov(16)         g45<1>UD        0x7f800000UD                    { align1 1H $0.src };
mov(16)         g47<1>UD        0x7f800000UD                    { align1 1H $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g97UD           g41UD           0x0400f506                0x00000200
                            slm MsgDesc: ( store_cmask, a32, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 8 flat ) base_offset 0  { align1 1H $0 };
add(16)         g59<1>D         g59<8,8,1>D     2048D           { align1 1H };

LABEL12:
while(16)       JIP:  LABEL13                                   { align1 1H };

LABEL15:
cmp.ge.f0.0(16) null<1>UD       g57<8,8,1>UD    0x00000030UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL14       UIP:  LABEL14             { align1 1H };
shl(16)         g85<1>D         g57<8,8,1>D     0x00000002UD    { align1 1H $12.src };
mov(16)         g42<1>UD        0x00000000UD                    { align1 1H $0.src };
mov(16)         g44<1>UD        0x00000000UD                    { align1 1H $0.src };
mov(16)         g46<1>UD        0x00000000UD                    { align1 1H $0.src };
mov(16)         g48<1>UD        0x00000000UD                    { align1 1H $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g98<1>D         g85<1,1,0>D     1152D           { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g98UD           g42UD           0x0400f506                0x00000200
                            slm MsgDesc: ( store_cmask, a32, d32, xyzw, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 8 flat ) base_offset 0  { align1 1H $0 };
add(16)         g57<1>D         g57<8,8,1>D     2048D           { align1 1H };

LABEL14:
while(16)       JIP:  LABEL15                                   { align1 1H };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(1)         g86UD           g0UD            nullUD          0x0210111f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, evict, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
mov(8)          g87<1>UD        0x00000000UD                    { align1 WE_all 1Q $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(2)          g87.10<1>UB     g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g87UD           nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $5 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
mov(8)          g63<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(16)         g19<2>W         -g65<8,8,1>D                    { align1 1H $11.dst };
mov(8)          g63<1>UD        g63<8,8,1>UW                    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
and(16)         g98<1>UW        g19<16,8,2>UW   0x0001UW        { align1 1H I@2 };
add(8)          g64<1>UD        g63<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g99<1>W         g98<32,16,2>B                   { align1 1H I@2 };
shl(16)         g63<1>UD        g63<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
cmp.nz.f0.0(16) g100<1>W        g99<16,16,1>W   0W              { align1 1H I@2 };
add(16)         g63<1>UD        g63<1,1,0>UD    0x00000080UD    { align1 WE_all 1H I@2 compacted };
mov(16)         g59<1>D         g100<8,8,1>W                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g63UD           g59UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $6 };
mov(8)          g66<1>UW        0x76543210UV                    { align1 WE_all 1Q };
add(16)         g88<1>F         g3<1,1,0>F      g11<1,1,0>F     { align1 1H $0.dst compacted };
mov(8)          g109<1>UW       0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g66<1>UD        g66<8,8,1>UW                    { align1 WE_all 1Q I@2 };
add(16)         g91<1>F         g88<1,1,0>F     -g33<1,1,0>F    { align1 1H F@1 compacted };
mov(8)          g109<1>UD       g109<8,8,1>UW                   { align1 WE_all 1Q I@2 };
add(8)          g67<1>UD        g66<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mul(16)         g94<1>F         g91<1,1,0>F     g28<1,1,0>F     { align1 1H F@1 compacted };
add(8)          g110<1>UD       g109<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@2 compacted };
shl(16)         g66<1>UD        g66<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
mov(16)         g107<1>UD       g94<8,8,1>F                     { align1 1H F@1 };
shl(16)         g109<1>UD       g109<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@3 compacted };
add(16)         g66<1>UD        g66<1,1,0>UD    0x00000080UD    { align1 WE_all 1H I@3 compacted };
add(16)         g109<1>UD       g109<1,1,0>UD   0x00000140UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g64UD           g66UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
mov(16)         g20<2>W         -g64<8,8,1>D                    { align1 1H $11.dst };
and(16)         g102<1>UW       g20<16,8,2>UW   0x0001UW        { align1 1H I@1 };
mov(16)         g103<1>W        g102<32,16,2>B                  { align1 1H I@1 };
cmp.nz.f0.0(16) g104<1>W        g103<16,16,1>W  0W              { align1 1H I@1 };
mov(16)         g19<1>D         g104<8,8,1>W                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g109UD          g107UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g89<1>F         g5<1,1,0>F      g13<1,1,0>F     { align1 1H $0.dst compacted };
mov(8)          g43<1>UW        0x76543210UV                    { align1 WE_all 1Q $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(16)         g92<1>F         g89<1,1,0>F     -g35<1,1,0>F    { align1 1H F@1 compacted };
mov(8)          g43<1>UD        g43<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mul(16)         g95<1>F         g92<1,1,0>F     g50<1,1,0>F     { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(8)          g44<1>UD        g43<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g41<1>UD        g95<8,8,1>F                     { align1 1H F@1 };
shl(16)         g43<1>UD        g43<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
add(16)         g43<1>UD        g43<1,1,0>UD    0x00000000UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g43UD           g41UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $8 };
add(16)         g90<1>F         g7<1,1,0>F      g15<1,1,0>F     { align1 1H $0.dst compacted };
mov(8)          g52<1>UW        0x76543210UV                    { align1 WE_all 1Q };
add(16)         g93<1>F         g90<1,1,0>F     -g37<1,1,0>F    { align1 1H F@1 compacted };
mov(8)          g52<1>UD        g52<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mul(16)         g96<1>F         g93<1,1,0>F     g61<1,1,0>F     { align1 1H A@1 compacted };
add(8)          g53<1>UD        g52<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
mov(16)         g50<1>UD        g96<8,8,1>F                     { align1 1H F@1 };
shl(16)         g52<1>UD        g52<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
add(16)         g52<1>UD        g52<1,1,0>UD    0x00000040UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g52UD           g50UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $0 };
mov(1)          g21<2>UW        0x00000000UD                    { align1 WE_all 1N };
mov(1)          f0<1>UW         g21<0,1,0>UW                    { align1 WE_all 1N I@1 };
cmp.nz.f0.0(16) null<1>UD       g19<8,8,1>UD    0x00000000UD    { align1 1H };
mov(16)         g1<1>UD         f0<0,1,0>UW                     { align1 1H };
shl(16)         g105<1>D        g70<8,8,1>D     g31<8,8,1>UD    { align1 1H };
and(16)         g21<1>UD        g31<1,1,0>UD    0x00000003UD    { align1 1H $11.dst compacted };
shr(16)         g23<1>UD        g31<1,1,0>UD    0x00000002UD    { align1 1H $11.dst compacted };
and(16)         g25<1>UD        g105<1,1,0>UD   0x00000077UD    { align1 1H @3 $11.dst compacted };

LABEL18:
cmp.z.f0.0(16)  null<1>D        g1<8,8,1>D      0D              { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL16       UIP:  LABEL16             { align1 1H };
fbl(16)         g33<1>UD        g1<8,8,1>UD                     { align1 1H F@1 };
mov(8)          g31<1>UW        0x76543210UV                    { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g31<1>UD        g31<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(8)          g32<1>UD        g31<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@1 compacted };
shl(16)         g31<1>UD        g31<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g31<1>UD        g31<1,1,0>UD    0x00000140UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g29UD           g31UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $10 };
mov(8)          g31<1>UW        0x76543210UV                    { align1 WE_all 1Q $10.src };
mov(8)          g31<1>UD        g31<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(8)          g32<1>UD        g31<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g31<1>UD        g31<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g31<1>UD        g31<1,1,0>UD    0x00000140UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
mov(16)         a0<1>UW         0x03a0UW                        { align1 WE_all 1H F@7 };
shl(16)         a0<1>UW         g33<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x03a0UW        { align1 1H A@1 };
mov(16)         g27<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g29UD           g31UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
cmp.z.f0.0(16)  g33<1>D         g27<1,1,0>D     g29<1,1,0>D     { align1 1H I@1 compacted };
and(16)         g29<1>UD        g33<1,1,0>UD    g19<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g31<2>W         -g29<8,8,1>D                    { align1 1H I@1 };
and(16)         g126<1>UW       g31<16,8,2>UW   0x0001UW        { align1 1H I@1 };
mov(16)         g127<1>W        g126<32,16,2>B                  { align1 1H I@1 };
cmp.nz.f0.0(16) g31<1>W         g127<16,16,1>W  0W              { align1 1H I@1 };
mov.nz.f0.0(16) g29<1>D         g31<8,8,1>W                     { align1 1H I@1 };
(+f0.0) sel(16) g31<1>UD        g11<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g33<1>UD        g3<8,8,1>UD     0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g35<1>UD        g5<8,8,1>UD     0x7f800000UD    { align1 1H F@1 };
(+f0.0) sel(16) g43<1>UD        g7<8,8,1>UD     0x7f800000UD    { align1 1H $8.src };
mov(16)         g37<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@2 compacted };
mov(16)         g37<1>F         g31<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g31<1>UD        g13<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(8)          g85<2>UD        g37.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(16)         g39<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@2 compacted };
mov(16)         g39<1>F         g31<1,1,0>F                     { align1 1H compacted };
mov(16)         g31<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@5 compacted };
mov(16)         g31<1>F         g33<1,1,0>F                     { align1 1H compacted };
mov(16)         g33<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@4 compacted };
mov(16)         g33<1>F         g35<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g35<1>UD        g15<8,8,1>UD    0xff800000UD    { align1 1H };
mov(8)          g99<2>UD        g39.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g45<2>UD        g31.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g59<2>UD        g33.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g41<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g41<1>F         g35<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g21<8,8,1>D     1D              { align1 1H };
mov(16)         g35<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@7 compacted };
mov(16)         g35<1>F         g43<1,1,0>F                     { align1 1H compacted };
sel.l(8)        g43<2>F         g31<8,4,2>F     g45<8,4,2>F     { align1 WE_all 1Q I@3 };
mov(8)          g31.1<2>UD      g43<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(8)          g45<2>UD        g35.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(4)          g49<4>UD        g31.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g51<4>UD        g31.2<8,2,4>UD                  { align1 WE_all 1N $0.src };
sel.l(8)        g43<2>F         g33<8,4,2>F     g59<8,4,2>F     { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sel.l(4)        g47<4>F         g49<8,2,4>F     g51<8,2,4>F     { align1 WE_all 1N I@1 };
mov(8)          g33.1<2>UD      g43<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g59<2>UD        g41.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(4)          g31.2<4>UD      g47<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(4)          g63<4>UD        g33.1<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g65<4>UD        g33.2<8,2,4>UD                  { align1 WE_all 1N $7.src };
sel.ge(8)       g43<2>F         g37<8,4,2>F     g85<8,4,2>F     { align1 WE_all 1Q I@5 };
mov(4)          g55<4>UD        g31.1<8,2,4>UD                  { align1 WE_all 1N @3 $6.dst };
mov(4)          g57<4>UD        g31.3<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g61<4>F         g63<8,2,4>F     g65<8,2,4>F     { align1 WE_all 1N I@3 };
mov(8)          g37.1<2>UD      g43<8,4,2>UD                    { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sel.l(4)        g53<4>F         g55<8,2,4>F     g57<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g33.2<4>UD      g61<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g89<4>UD        g37.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g91<4>UD        g37.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g43<2>F         g39<8,4,2>F     g99<8,4,2>F     { align1 WE_all 1Q I@4 };
mov(4)          g31.3<4>UD      g53<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g69<4>UD        g33.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g71<4>UD        g33.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.ge(4)       g87<4>F         g89<8,2,4>F     g91<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g39.1<2>UD      g43<8,4,2>UD                    { align1 WE_all 1Q F@2 };
sel.l(4)        g31.4<1>F       g31.3<0,1,0>F   g31.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g32.4<1>F       g32.3<0,1,0>F   g32.4<4,4,1>F   { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.l(4)        g67<4>F         g69<8,2,4>F     g71<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g37.2<4>UD      g87<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g103<4>UD       g39.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g105<4>UD       g39.2<8,2,4>UD                  { align1 WE_all 1N };
sel.l(8)        g43<2>F         g35<8,4,2>F     g45<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(8)        g32<1>F         g31.7<0,1,0>F   g32<8,8,1>F     { align1 WE_all 1Q F@3 };
mov(4)          g33.3<4>UD      g67<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g95<4>UD        g37.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g97<4>UD        g37.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g101<4>F        g103<8,2,4>F    g105<8,2,4>F    { align1 WE_all 1N I@4 };
mov(8)          g35.1<2>UD      g43<8,4,2>UD                    { align1 WE_all 1Q F@3 };
sel.l(4)        g33.4<1>F       g33.3<0,1,0>F   g33.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g34.4<1>F       g34.3<0,1,0>F   g34.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g93<4>F         g95<8,2,4>F     g97<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g39.2<4>UD      g101<8,2,4>UD                   { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(4)          g75<4>UD        g35.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g77<4>UD        g35.2<8,2,4>UD                  { align1 WE_all 1N $8.src };
sel.ge(8)       g43<2>F         g41<8,4,2>F     g59<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(8)        g34<1>F         g33.7<0,1,0>F   g34<8,8,1>F     { align1 WE_all 1Q F@3 };
mov(4)          g37.3<4>UD      g93<8,2,4>UD                    { align1 WE_all 1N F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(4)          g109<4>UD       g39.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g111<4>UD       g39.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.l(4)        g73<4>F         g75<8,2,4>F     g77<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g41.1<2>UD      g43<8,4,2>UD                    { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g43<1>UD        g34.7<0,1,0>UD  g32.7<0,1,0>UD  { align1 1H };
sel.ge(4)       g37.4<1>F       g37.3<0,1,0>F   g37.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g38.4<1>F       g38.3<0,1,0>F   g38.4<4,4,1>F   { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.ge(4)       g107<4>F        g109<8,2,4>F    g111<8,2,4>F    { align1 WE_all 1N I@3 };
mov(4)          g35.2<4>UD      g73<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g115<4>UD       g41.1<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g117<4>UD       g41.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g38<1>F         g37.7<0,1,0>F   g38<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g39.3<4>UD      g107<8,2,4>UD                   { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(4)          g81<4>UD        g35.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g83<4>UD        g35.3<8,2,4>UD                  { align1 WE_all 1N $12.src };
sel.ge(4)       g113<4>F        g115<8,2,4>F    g117<8,2,4>F    { align1 WE_all 1N I@4 };
sel.ge(4)       g39.4<1>F       g39.3<0,1,0>F   g39.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g40.4<1>F       g40.3<0,1,0>F   g40.4<4,4,1>F   { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.l(4)        g79<4>F         g81<8,2,4>F     g83<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g41.2<4>UD      g113<8,2,4>UD                   { align1 WE_all 1N F@4 };
sel.ge(8)       g40<1>F         g39.7<0,1,0>F   g40<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g35.3<4>UD      g79<8,2,4>UD                    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(4)          g121<4>UD       g41.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g123<4>UD       g41.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g31<1>UD        g40.7<0,1,0>UD  g38.7<0,1,0>UD  { align1 1H };
sel.l(4)        g35.4<1>F       g35.3<0,1,0>F   g35.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g36.4<1>F       g36.3<0,1,0>F   g36.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g119<4>F        g121<8,2,4>F    g123<8,2,4>F    { align1 WE_all 1N I@2 };
cmp.z.f0.0(16)  null<1>D        g21<8,8,1>D     2D              { align1 1H };
sel.l(8)        g36<1>F         g35.7<0,1,0>F   g36<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g41.3<4>UD      g119<8,2,4>UD                   { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g33<1>UD        g36.7<0,1,0>UD  g43<1,1,0>UD    { align1 1H compacted };
sel.ge(4)       g41.4<1>F       g41.3<0,1,0>F   g41.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g42.4<1>F       g42.3<0,1,0>F   g42.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(8)       g42<1>F         g41.7<0,1,0>F   g42<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g35<1>UD        g42.7<0,1,0>UD  g31<1,1,0>UD    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g23<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g31<1>F         g33<1,1,0>F     -g35<1,1,0>F    { align1 1H I@2 compacted };
cmp.nz.f0.0(16) null<1>D        g25<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL17             { align1 1H };
mul(16)         g33<1>D         g27<1,1,0>D     6W              { align1 1H F@1 compacted };
mul(16)         g27<1>D         g23<1,1,0>D     3W              { align1 1H I@1 compacted };
add3(16)        g35<1>D         g33<8,8,1>D     g21<8,8,1>D     g27<1,1,1>D { align1 1H A@1 };
shl(16)         g27<1>D         g35<8,8,1>D     0x00000002UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g27UD           g31UD           0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat ) base_offset 0  { align1 1H $9 };

LABEL17:
endif(16)       JIP:  LABEL16                                   { align1 1H };
not(16)         g27<1>D         g29<8,8,1>D                     { align1 1H $9.src };
mov(1)          g125<2>UW       0x00000000UD                    { align1 WE_all 1N };
mov(1)          f0<1>UW         g125<0,1,0>UW                   { align1 WE_all 1N I@1 };
cmp.nz.f0.0(16) null<1>UD       g27<8,8,1>UD    0x00000000UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g30<1>UD        f0<0,1,0>UW                     { align1 1H F@1 };
and(16)         g1<1>UD         g1<1,1,0>UD     g30<1,1,0>UD    { align1 1H I@1 compacted };

LABEL16:
while(16)       JIP:  LABEL18                                   { align1 1H };
mov(8)          g46<1>UW        0x76543210UV                    { align1 WE_all 1Q $0.src };
mov(1)          g29<2>UW        0x00000000UD                    { align1 WE_all 1N A@7 };
mov(8)          g46<1>UD        g46<8,8,1>UW                    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(8)          g47<1>UD        g46<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g46<1>UD        g46<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g46<1>UD        g46<1,1,0>UD    0x00000000UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g44UD           g46UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
add(16)         g27<1>D         g44<1,1,0>D     16D             { align1 1H F@7 compacted };
mov(1)          f0<1>UW         g29<0,1,0>UW                    { align1 WE_all 1N I@6 };
cmp.nz.f0.0(16) null<1>UD       g19<8,8,1>UD    0x00000000UD    { align1 1H };
mov(16)         g1<1>UD         f0<0,1,0>UW                     { align1 1H };

LABEL21:
cmp.z.f0.0(16)  null<1>D        g1<8,8,1>D      0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL19       UIP:  LABEL19             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
fbl(16)         g31<1>UD        g1<8,8,1>UD                     { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
mov(16)         a0<1>UW         0x0360UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g31<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0360UW        { align1 1H A@1 };
mov(16)         g29<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.z.f0.0(16)  g31<1>D         g29<1,1,0>D     g27<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
and(16)         g33<1>UD        g31<1,1,0>UD    g19<1,1,0>UD    { align1 1H A@1 compacted };
mov(16)         g31<2>W         -g33<8,8,1>D                    { align1 1H I@1 };
and(16)         g33<1>UW        g31<16,8,2>UW   0x0001UW        { align1 1H I@1 };
mov(16)         g34<1>W         g33<32,16,2>B                   { align1 1H I@1 };
cmp.nz.f0.0(16) g35<1>W         g34<16,16,1>W   0W              { align1 1H A@1 };
mov.nz.f0.0(16) g31<1>D         g35<8,8,1>W                     { align1 1H I@1 };
(+f0.0) sel(16) g33<1>UD        g11<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g35<1>UD        g3<8,8,1>UD     0x7f800000UD    { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g37<1>UD        g5<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
(+f0.0) sel(16) g45<1>UD        g7<8,8,1>UD     0x7f800000UD    { align1 1H };
mov(16)         g39<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g39<1>F         g33<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g33<1>UD        g13<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g87<2>UD        g39.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g41<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@2 compacted };
mov(16)         g41<1>F         g33<1,1,0>F                     { align1 1H compacted };
mov(16)         g33<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@5 compacted };
mov(16)         g33<1>F         g35<1,1,0>F                     { align1 1H compacted };
mov(16)         g35<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@4 compacted };
mov(16)         g35<1>F         g37<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g37<1>UD        g15<8,8,1>UD    0xff800000UD    { align1 1H };
mov(8)          g101<2>UD       g41.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g47<2>UD        g33.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g61<2>UD        g35.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g43<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g43<1>F         g37<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g21<8,8,1>D     1D              { align1 1H };
mov(16)         g37<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@7 compacted };
mov(16)         g37<1>F         g45<1,1,0>F                     { align1 1H compacted };
sel.l(8)        g45<2>F         g33<8,4,2>F     g47<8,4,2>F     { align1 WE_all 1Q I@3 };
mov(8)          g33.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(8)          g47<2>UD        g37.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(4)          g51<4>UD        g33.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g53<4>UD        g33.2<8,2,4>UD                  { align1 WE_all 1N $0.src };
sel.l(8)        g45<2>F         g35<8,4,2>F     g61<8,4,2>F     { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sel.l(4)        g49<4>F         g51<8,2,4>F     g53<8,2,4>F     { align1 WE_all 1N I@1 };
mov(8)          g35.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g61<2>UD        g43.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(4)          g33.2<4>UD      g49<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(4)          g65<4>UD        g35.1<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g67<4>UD        g35.2<8,2,4>UD                  { align1 WE_all 1N $7.src };
sel.ge(8)       g45<2>F         g39<8,4,2>F     g87<8,4,2>F     { align1 WE_all 1Q I@5 };
mov(4)          g57<4>UD        g33.1<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g59<4>UD        g33.3<8,2,4>UD                  { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.l(4)        g63<4>F         g65<8,2,4>F     g67<8,2,4>F     { align1 WE_all 1N I@3 };
mov(8)          g39.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sel.l(4)        g55<4>F         g57<8,2,4>F     g59<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g35.2<4>UD      g63<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g91<4>UD        g39.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g93<4>UD        g39.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g45<2>F         g41<8,4,2>F     g101<8,4,2>F    { align1 WE_all 1Q I@4 };
mov(4)          g33.3<4>UD      g55<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g71<4>UD        g35.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g73<4>UD        g35.3<8,2,4>UD                  { align1 WE_all 1N $5.src };
sel.ge(4)       g89<4>F         g91<8,2,4>F     g93<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g41.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q F@2 };
sel.l(4)        g33.4<1>F       g33.3<0,1,0>F   g33.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g34.4<1>F       g34.3<0,1,0>F   g34.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g69<4>F         g71<8,2,4>F     g73<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g39.2<4>UD      g89<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g105<4>UD       g41.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g107<4>UD       g41.2<8,2,4>UD                  { align1 WE_all 1N $7.src };
sel.l(8)        g45<2>F         g37<8,4,2>F     g47<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(8)        g34<1>F         g33.7<0,1,0>F   g34<8,8,1>F     { align1 WE_all 1Q F@3 };
mov(4)          g35.3<4>UD      g69<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g97<4>UD        g39.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g99<4>UD        g39.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g103<4>F        g105<8,2,4>F    g107<8,2,4>F    { align1 WE_all 1N I@4 };
mov(8)          g37.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q F@3 };
sel.l(4)        g35.4<1>F       g35.3<0,1,0>F   g35.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g36.4<1>F       g36.3<0,1,0>F   g36.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g95<4>F         g97<8,2,4>F     g99<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g41.2<4>UD      g103<8,2,4>UD                   { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g77<4>UD        g37.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(4)          g79<4>UD        g37.2<8,2,4>UD                  { align1 WE_all 1N $1.src };
sel.ge(8)       g45<2>F         g43<8,4,2>F     g61<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(8)        g36<1>F         g35.7<0,1,0>F   g36<8,8,1>F     { align1 WE_all 1Q F@3 };
mov(4)          g39.3<4>UD      g95<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g111<4>UD       g41.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g113<4>UD       g41.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.l(4)        g75<4>F         g77<8,2,4>F     g79<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g43.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g45<1>UD        g36.7<0,1,0>UD  g34.7<0,1,0>UD  { align1 1H };
sel.ge(4)       g39.4<1>F       g39.3<0,1,0>F   g39.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g40.4<1>F       g40.3<0,1,0>F   g40.4<4,4,1>F   { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.ge(4)       g109<4>F        g111<8,2,4>F    g113<8,2,4>F    { align1 WE_all 1N I@3 };
mov(4)          g37.2<4>UD      g75<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g117<4>UD       g43.1<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g119<4>UD       g43.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g40<1>F         g39.7<0,1,0>F   g40<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g41.3<4>UD      g109<8,2,4>UD                   { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g83<4>UD        g37.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g85<4>UD        g37.3<8,2,4>UD                  { align1 WE_all 1N $12.src };
sel.ge(4)       g115<4>F        g117<8,2,4>F    g119<8,2,4>F    { align1 WE_all 1N I@4 };
sel.ge(4)       g41.4<1>F       g41.3<0,1,0>F   g41.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g42.4<1>F       g42.3<0,1,0>F   g42.4<4,4,1>F   { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.l(4)        g81<4>F         g83<8,2,4>F     g85<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g43.2<4>UD      g115<8,2,4>UD                   { align1 WE_all 1N F@4 };
sel.ge(8)       g42<1>F         g41.7<0,1,0>F   g42<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g37.3<4>UD      g81<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g123<4>UD       g43.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g125<4>UD       g43.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g33<1>UD        g42.7<0,1,0>UD  g40.7<0,1,0>UD  { align1 1H };
sel.l(4)        g37.4<1>F       g37.3<0,1,0>F   g37.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g38.4<1>F       g38.3<0,1,0>F   g38.4<4,4,1>F   { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.ge(4)       g121<4>F        g123<8,2,4>F    g125<8,2,4>F    { align1 WE_all 1N I@2 };
cmp.z.f0.0(16)  null<1>D        g21<8,8,1>D     2D              { align1 1H };
sel.l(8)        g38<1>F         g37.7<0,1,0>F   g38<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g43.3<4>UD      g121<8,2,4>UD                   { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g35<1>UD        g38.7<0,1,0>UD  g45<1,1,0>UD    { align1 1H compacted };
sel.ge(4)       g43.4<1>F       g43.3<0,1,0>F   g43.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g44.4<1>F       g44.3<0,1,0>F   g44.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(8)       g44<1>F         g43.7<0,1,0>F   g44<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g37<1>UD        g44.7<0,1,0>UD  g33<1,1,0>UD    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g23<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g33<1>F         g35<1,1,0>F     -g37<1,1,0>F    { align1 1H I@2 compacted };
cmp.nz.f0.0(16) null<1>D        g25<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL20         UIP:  LABEL20             { align1 1H };
mul(16)         g35<1>D         g29<1,1,0>D     6W              { align1 1H F@1 compacted };
mul(16)         g29<1>D         g23<1,1,0>D     3W              { align1 1H I@1 compacted };
add3(16)        g37<1>D         g35<8,8,1>D     g21<8,8,1>D     g29<1,1,1>D { align1 1H A@1 };
shl(16)         g29<1>D         g37<8,8,1>D     0x00000002UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g29UD           g33UD           0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat ) base_offset 0  { align1 1H $13 };

LABEL20:
endif(16)       JIP:  LABEL19                                   { align1 1H };
not(16)         g29<1>D         g31<8,8,1>D                     { align1 1H $13.src };
mov(1)          g127<2>UW       0x00000000UD                    { align1 WE_all 1N };
mov(1)          f0<1>UW         g127<0,1,0>UW                   { align1 WE_all 1N I@1 };
cmp.nz.f0.0(16) null<1>UD       g29<8,8,1>UD    0x00000000UD    { align1 1H I@3 };
mov(16)         g29<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g1<1>UD         g1<1,1,0>UD     g29<1,1,0>UD    { align1 1H I@1 compacted };

LABEL19:
while(16)       JIP:  LABEL21                                   { align1 1H };
mov(8)          g55<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(1)          g30<2>UW        0x00000000UD                    { align1 WE_all 1N };
mov(8)          g55<1>UD        g55<8,8,1>UW                    { align1 WE_all 1Q I@2 };
add(8)          g56<1>UD        g55<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q @1 $6.dst compacted };
shl(16)         g55<1>UD        g55<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g55<1>UD        g55<1,1,0>UD    0x00000040UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g53UD           g55UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
add(16)         g27<1>D         g53<1,1,0>D     32D             { align1 1H I@7 compacted };
mov(1)          f0<1>UW         g30<0,1,0>UW                    { align1 WE_all 1N I@6 };
cmp.nz.f0.0(16) null<1>UD       g19<8,8,1>UD    0x00000000UD    { align1 1H };
mov(16)         g1<1>UD         f0<0,1,0>UW                     { align1 1H I@7 };

LABEL24:
cmp.z.f0.0(16)  null<1>D        g1<8,8,1>D      0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL22       UIP:  LABEL22             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
fbl(16)         g31<1>UD        g1<8,8,1>UD                     { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
mov(16)         a0<1>UW         0x0360UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g31<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0360UW        { align1 1H A@1 };
mov(16)         g29<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.z.f0.0(16)  g31<1>D         g29<1,1,0>D     g27<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
and(16)         g33<1>UD        g31<1,1,0>UD    g19<1,1,0>UD    { align1 1H A@1 compacted };
mov(16)         g31<2>W         -g33<8,8,1>D                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(16)         g37<1>UW        g31<16,8,2>UW   0x0001UW        { align1 1H };
mov(16)         g38<1>W         g37<32,16,2>B                   { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.nz.f0.0(16) g39<1>W         g38<16,16,1>W   0W              { align1 1H };
mov.nz.f0.0(16) g31<1>D         g39<8,8,1>W                     { align1 1H I@1 };
(+f0.0) sel(16) g33<1>UD        g11<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g35<1>UD        g3<8,8,1>UD     0x7f800000UD    { align1 1H F@1 };
(+f0.0) sel(16) g37<1>UD        g5<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
(+f0.0) sel(16) g45<1>UD        g7<8,8,1>UD     0x7f800000UD    { align1 1H };
mov(16)         g39<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g39<1>F         g33<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g33<1>UD        g13<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g87<2>UD        g39.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g41<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@2 compacted };
mov(16)         g41<1>F         g33<1,1,0>F                     { align1 1H compacted };
mov(16)         g33<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@5 compacted };
mov(16)         g33<1>F         g35<1,1,0>F                     { align1 1H compacted };
mov(16)         g35<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@4 compacted };
mov(16)         g35<1>F         g37<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g37<1>UD        g15<8,8,1>UD    0xff800000UD    { align1 1H };
mov(8)          g101<2>UD       g41.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g47<2>UD        g33.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g61<2>UD        g35.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g43<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g43<1>F         g37<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g21<8,8,1>D     1D              { align1 1H };
mov(16)         g37<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@7 compacted };
mov(16)         g37<1>F         g45<1,1,0>F                     { align1 1H compacted };
sel.l(8)        g45<2>F         g33<8,4,2>F     g47<8,4,2>F     { align1 WE_all 1Q I@3 };
mov(8)          g33.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(8)          g47<2>UD        g37.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(4)          g51<4>UD        g33.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g53<4>UD        g33.2<8,2,4>UD                  { align1 WE_all 1N };
sel.l(8)        g45<2>F         g35<8,4,2>F     g61<8,4,2>F     { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sel.l(4)        g49<4>F         g51<8,2,4>F     g53<8,2,4>F     { align1 WE_all 1N I@1 };
mov(8)          g35.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g61<2>UD        g43.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(4)          g33.2<4>UD      g49<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(4)          g65<4>UD        g35.1<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g67<4>UD        g35.2<8,2,4>UD                  { align1 WE_all 1N $7.src };
sel.ge(8)       g45<2>F         g39<8,4,2>F     g87<8,4,2>F     { align1 WE_all 1Q I@5 };
mov(4)          g57<4>UD        g33.1<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g59<4>UD        g33.3<8,2,4>UD                  { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.l(4)        g63<4>F         g65<8,2,4>F     g67<8,2,4>F     { align1 WE_all 1N I@3 };
mov(8)          g39.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.l(4)        g55<4>F         g57<8,2,4>F     g59<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g35.2<4>UD      g63<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g91<4>UD        g39.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g93<4>UD        g39.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g45<2>F         g41<8,4,2>F     g101<8,4,2>F    { align1 WE_all 1Q I@4 };
mov(4)          g33.3<4>UD      g55<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g71<4>UD        g35.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g73<4>UD        g35.3<8,2,4>UD                  { align1 WE_all 1N $5.src };
sel.ge(4)       g89<4>F         g91<8,2,4>F     g93<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g41.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q F@2 };
sel.l(4)        g33.4<1>F       g33.3<0,1,0>F   g33.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g34.4<1>F       g34.3<0,1,0>F   g34.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g69<4>F         g71<8,2,4>F     g73<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g39.2<4>UD      g89<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g105<4>UD       g41.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g107<4>UD       g41.2<8,2,4>UD                  { align1 WE_all 1N $7.src };
sel.l(8)        g45<2>F         g37<8,4,2>F     g47<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(8)        g34<1>F         g33.7<0,1,0>F   g34<8,8,1>F     { align1 WE_all 1Q F@3 };
mov(4)          g35.3<4>UD      g69<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g97<4>UD        g39.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g99<4>UD        g39.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g103<4>F        g105<8,2,4>F    g107<8,2,4>F    { align1 WE_all 1N I@4 };
mov(8)          g37.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q F@3 };
sel.l(4)        g35.4<1>F       g35.3<0,1,0>F   g35.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g36.4<1>F       g36.3<0,1,0>F   g36.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g95<4>F         g97<8,2,4>F     g99<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g41.2<4>UD      g103<8,2,4>UD                   { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g77<4>UD        g37.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(4)          g79<4>UD        g37.2<8,2,4>UD                  { align1 WE_all 1N $1.src };
sel.ge(8)       g45<2>F         g43<8,4,2>F     g61<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(8)        g36<1>F         g35.7<0,1,0>F   g36<8,8,1>F     { align1 WE_all 1Q F@3 };
mov(4)          g39.3<4>UD      g95<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g111<4>UD       g41.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g113<4>UD       g41.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.l(4)        g75<4>F         g77<8,2,4>F     g79<8,2,4>F     { align1 WE_all 1N I@4 };
mov(8)          g43.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g45<1>UD        g36.7<0,1,0>UD  g34.7<0,1,0>UD  { align1 1H };
sel.ge(4)       g39.4<1>F       g39.3<0,1,0>F   g39.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g40.4<1>F       g40.3<0,1,0>F   g40.4<4,4,1>F   { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.ge(4)       g109<4>F        g111<8,2,4>F    g113<8,2,4>F    { align1 WE_all 1N I@3 };
mov(4)          g37.2<4>UD      g75<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g117<4>UD       g43.1<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g119<4>UD       g43.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g40<1>F         g39.7<0,1,0>F   g40<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g41.3<4>UD      g109<8,2,4>UD                   { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g83<4>UD        g37.1<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g85<4>UD        g37.3<8,2,4>UD                  { align1 WE_all 1N $12.src };
sel.ge(4)       g115<4>F        g117<8,2,4>F    g119<8,2,4>F    { align1 WE_all 1N I@4 };
sel.ge(4)       g41.4<1>F       g41.3<0,1,0>F   g41.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g42.4<1>F       g42.3<0,1,0>F   g42.4<4,4,1>F   { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.l(4)        g81<4>F         g83<8,2,4>F     g85<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g43.2<4>UD      g115<8,2,4>UD                   { align1 WE_all 1N F@4 };
sel.ge(8)       g42<1>F         g41.7<0,1,0>F   g42<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g37.3<4>UD      g81<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g123<4>UD       g43.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g125<4>UD       g43.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g33<1>UD        g42.7<0,1,0>UD  g40.7<0,1,0>UD  { align1 1H };
sel.l(4)        g37.4<1>F       g37.3<0,1,0>F   g37.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g38.4<1>F       g38.3<0,1,0>F   g38.4<4,4,1>F   { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.ge(4)       g121<4>F        g123<8,2,4>F    g125<8,2,4>F    { align1 WE_all 1N I@2 };
cmp.z.f0.0(16)  null<1>D        g21<8,8,1>D     2D              { align1 1H };
sel.l(8)        g38<1>F         g37.7<0,1,0>F   g38<8,8,1>F     { align1 WE_all 1Q F@2 };
mov(4)          g43.3<4>UD      g121<8,2,4>UD                   { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g35<1>UD        g38.7<0,1,0>UD  g45<1,1,0>UD    { align1 1H compacted };
sel.ge(4)       g43.4<1>F       g43.3<0,1,0>F   g43.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g44.4<1>F       g44.3<0,1,0>F   g44.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(8)       g44<1>F         g43.7<0,1,0>F   g44<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g37<1>UD        g44.7<0,1,0>UD  g33<1,1,0>UD    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g23<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g33<1>F         g35<1,1,0>F     -g37<1,1,0>F    { align1 1H I@2 compacted };
cmp.nz.f0.0(16) null<1>D        g25<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL23         UIP:  LABEL23             { align1 1H };
mul(16)         g35<1>D         g29<1,1,0>D     6W              { align1 1H F@1 compacted };
mul(16)         g29<1>D         g23<1,1,0>D     3W              { align1 1H I@1 compacted };
add3(16)        g37<1>D         g35<8,8,1>D     g21<8,8,1>D     g29<1,1,1>D { align1 1H A@1 };
shl(16)         g29<1>D         g37<8,8,1>D     0x00000002UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g29UD           g33UD           0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat ) base_offset 0  { align1 1H $13 };

LABEL23:
endif(16)       JIP:  LABEL22                                   { align1 1H };
not(16)         g29<1>D         g31<8,8,1>D                     { align1 1H $13.src };
mov(1)          g127<2>UW       0x00000000UD                    { align1 WE_all 1N };
mov(1)          f0<1>UW         g127<0,1,0>UW                   { align1 WE_all 1N I@1 };
cmp.nz.f0.0(16) null<1>UD       g29<8,8,1>UD    0x00000000UD    { align1 1H I@3 };
mov(16)         g29<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g1<1>UD         g1<1,1,0>UD     g29<1,1,0>UD    { align1 1H I@1 compacted };

LABEL22:
while(16)       JIP:  LABEL24                                   { align1 1H };
mov(8)          g69<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g69<1>UD        g69<8,8,1>UW                    { align1 WE_all 1Q I@1 };
add(8)          g70<1>UD        g69<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g69<1>UD        g69<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g69<1>UD        g69<1,1,0>UD    0x00000080UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g67UD           g69UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
mov.nz.f0.0(16) null<1>D        g67<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL25         UIP:  LABEL25             { align1 1H };
mov(8)          g112<1>UW       0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g112<1>UD       g112<8,8,1>UW                   { align1 WE_all 1Q I@1 };
add(8)          g113<1>UD       g112<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g112<1>UD       g112<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g112<1>UD       g112<1,1,0>UD   0x00000140UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $7.src };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $7.src };
send(16)        g110UD          g112UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
shl(16)         g40<1>D         g110<8,8,1>D    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g99<1>D         g40<1,1,0>D     1152D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g99UD           nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1H $15 };
mov(8)          g49<1>UW        0x76543210UV                    { align1 WE_all 1Q $0.src };
mov(8)          g49<1>UD        g49<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(8)          g50<1>UD        g49<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g49<1>UD        g49<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g49<1>UD        g49<1,1,0>UD    0x00000000UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $0.src };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $0.src };
send(16)        g47UD           g49UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
shl(16)         g41<1>D         g47<8,8,1>D     0x00000002UD    { align1 1H $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g100<1>D        g41<1,1,0>D     1216D           { align1 1H $15.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g100UD          nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1H $7 };
mov(8)          g58<1>UW        0x76543210UV                    { align1 WE_all 1Q };
mov(8)          g58<1>UD        g58<8,8,1>UW                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(8)          g59<1>UD        g58<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@1 compacted };
shl(16)         g58<1>UD        g58<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g58<1>UD        g58<1,1,0>UD    0x00000040UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g56UD           g58UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
shl(16)         g42<1>D         g56<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g101<1>D        g42<1,1,0>D     1280D           { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g101UD          nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1H $7 };

LABEL25:
endif(16)       JIP:  LABEL26                                   { align1 1H };

LABEL26:
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
send(1)         g43UD           g0UD            nullUD          0x0210111f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, evict, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g44<1>UD        0x00000000UD                    { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(2)          g44.10<1>UB     g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g44UD           nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $1 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
mov(8)          g124<1>UW       0x76543210UV                    { align1 WE_all 1Q F@6 };
mov(8)          g124<1>UD       g124<8,8,1>UW                   { align1 WE_all 1Q I@1 };
add(8)          g125<1>UD       g124<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q A@1 compacted };
shl(16)         g124<1>UD       g124<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g124<1>UD       g124<1,1,0>UD   0x00000180UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g122UD          g124UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g60<1>UD        g122<8,8,1>UD                   { align1 1H };

LABEL29:
cmp.ge.f0.0(16) null<1>UD       g60<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL27       UIP:  LABEL27             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shl(16)         g102<1>D        g60<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g107UD          g102UD          nullUD          0x04201502                0x00000000
                            slm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1H $7 };
cmp.nz.f0.0(16) null<1>F        g107<1,1,0>F    0x7f800000F  /* infF */ { align1 1H $7.dst compacted };
(+f0.0) if(16)  JIP:  LABEL28         UIP:  LABEL28             { align1 1H };
mov(8)          g97<1>UW        0x76543210UV                    { align1 WE_all 1Q $3.src };
mov(8)          g100<1>UW       0x76543210UV                    { align1 WE_all 1Q $7.src };
mov(8)          g81<1>UW        0x76543210UV                    { align1 WE_all 1Q $9.src };
mov(8)          g97<1>UD        g97<8,8,1>UW                    { align1 WE_all 1Q I@3 };
mov(8)          g100<1>UD       g100<8,8,1>UW                   { align1 WE_all 1Q I@3 };
mov(8)          g81<1>UD        g81<8,8,1>UW                    { align1 WE_all 1Q I@3 };
add(8)          g98<1>UD        g97<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(8)          g101<1>UD       g100<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(8)          g82<1>UD        g81<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q I@3 compacted };
shl(16)         g97<1>UD        g97<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@3 compacted };
shl(16)         g100<1>UD       g100<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@3 compacted };
shl(16)         g81<1>UD        g81<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@3 compacted };
add(16)         g97<1>UD        g97<1,1,0>UD    0x00000100UD    { align1 WE_all 1H I@3 compacted };
add(16)         g100<1>UD       g100<1,1,0>UD   0x00000100UD    { align1 WE_all 1H I@3 compacted };
add(16)         g81<1>UD        g81<1,1,0>UD    0x000000c0UD    { align1 WE_all 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g95UD           g97UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g98UD           g100UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g79UD           g81UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g45<1>D         g95<1,1,0>D     44D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g47<1>UD        g45<1,1,0>UD    g98<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g49<1>D         g45<1,1,0>D     g102<1,1,0>D    { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g51<1>UD        g49<1,1,0>UD    g45<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(8)          g103<2>UD       g49<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $7.src };
mov(8)          g105<2>UD       g50<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add3(16)        g53<1>D         -g47<8,8,1>D    g79<8,8,1>D     -g51<1,1,1>D { align1 1H };
mov(8)          g105.1<2>UD     g54<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g103.1<2>UD     g53<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g54UD           g103UD          g107UD          0x08240595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $7 };

LABEL28:
endif(16)       JIP:  LABEL27                                   { align1 1H };
add(16)         g60<1>D         g60<1,1,0>D     512D            { align1 1H compacted };

LABEL27:
while(16)       JIP:  LABEL29                                   { align1 1H };

LABEL32:
mov(8)          g2<1>UW         0x76543210UV                    { align1 WE_all 1Q $4.src };
mov(8)          g2<1>UD         g2<8,8,1>UW                     { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(8)          g3<1>UD         g2<1,1,0>UD     0x00000008UD    { align1 WE_all 1Q A@1 compacted };
shl(16)         g2<1>UD         g2<1,1,0>UD     0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g2<1>UD         g2<1,1,0>UD     0x00000180UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g125UD          g2UD            nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
cmp.ge.f0.0(16) null<1>UD       g125<8,8,1>UD   0x00000030UD    { align1 1H };
(+f0.0) break(16) JIP:  LABEL30       UIP:  LABEL30             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g5<1>UW         0x76543210UV                    { align1 WE_all 1Q F@6 };
mov(8)          g5<1>UD         g5<8,8,1>UW                     { align1 WE_all 1Q I@1 };
add(8)          g6<1>UD         g5<1,1,0>UD     0x00000008UD    { align1 WE_all 1Q A@1 compacted };
shl(16)         g5<1>UD         g5<1,1,0>UD     0x00000002UD    { align1 WE_all 1H I@1 compacted };
add(16)         g5<1>UD         g5<1,1,0>UD     0x00000180UD    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g3UD            g5UD            nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
shl(16)         g55<1>D         g3<8,8,1>D      0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g108<1>D        g55<1,1,0>D     1152D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g113UD          g108UD          nullUD          0x04201502                0x00000000
                            slm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1H $7 };
cmp.nz.f0.0(16) null<1>D        g113<8,8,1>D    0D              { align1 1H $7.dst };
(+f0.0) if(16)  JIP:  LABEL31         UIP:  LABEL31             { align1 1H };
mov(8)          g103<1>UW       0x76543210UV                    { align1 WE_all 1Q $7.src };
mov(8)          g106<1>UW       0x76543210UV                    { align1 WE_all 1Q $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(8)          g84<1>UW        0x76543210UV                    { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g103<1>UD       g103<8,8,1>UW                   { align1 WE_all 1Q I@3 };
mov(8)          g106<1>UD       g106<8,8,1>UW                   { align1 WE_all 1Q I@3 };
mov(8)          g84<1>UD        g84<8,8,1>UW                    { align1 WE_all 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(8)          g104<1>UD       g103<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(8)          g107<1>UD       g106<1,1,0>UD   0x00000008UD    { align1 WE_all 1Q A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(8)          g85<1>UD        g84<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@3 compacted };
shl(16)         g103<1>UD       g103<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@3 compacted };
shl(16)         g106<1>UD       g106<1,1,0>UD   0x00000002UD    { align1 WE_all 1H I@3 compacted };
shl(16)         g84<1>UD        g84<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@3 compacted };
add(16)         g103<1>UD       g103<1,1,0>UD   0x00000100UD    { align1 WE_all 1H I@3 compacted };
add(16)         g106<1>UD       g106<1,1,0>UD   0x00000100UD    { align1 WE_all 1H I@3 compacted };
add(16)         g84<1>UD        g84<1,1,0>UD    0x000000c0UD    { align1 WE_all 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $7.src };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $7.src };
send(16)        g101UD          g103UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $7.src };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $7.src };
send(16)        g104UD          g106UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $12.src };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $12.src };
send(16)        g82UD           g84UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g57<1>D         g101<1,1,0>D    1196D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g59<1>UD        g57<1,1,0>UD    g104<1,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
add(16)         g61<1>D         g57<1,1,0>D     g55<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g63<1>UD        g61<1,1,0>UD    g57<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g109<2>UD       g61<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $7.src };
mov(8)          g111<2>UD       g62<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add3(16)        g65<1>D         -g59<8,8,1>D    g82<8,8,1>D     -g63<1,1,1>D { align1 1H };
mov(8)          g111.1<2>UD     g66<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g109.1<2>UD     g65<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g66UD           g109UD          g113UD          0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat ) base_offset 0  { align1 1H $7 };

LABEL31:
endif(16)       JIP:  LABEL30                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g8<1>UW         0x76543210UV                    { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g12<1>UW        0x76543210UV                    { align1 WE_all 1Q F@7 };
mov(8)          g8<1>UD         g8<8,8,1>UW                     { align1 WE_all 1Q I@2 };
mov(8)          g12<1>UD        g12<8,8,1>UW                    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(8)          g9<1>UD         g8<1,1,0>UD     0x00000008UD    { align1 WE_all 1Q $0.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(8)          g13<1>UD        g12<1,1,0>UD    0x00000008UD    { align1 WE_all 1Q A@2 compacted };
shl(16)         g8<1>UD         g8<1,1,0>UD     0x00000002UD    { align1 WE_all 1H I@2 compacted };
shl(16)         g12<1>UD        g12<1,1,0>UD    0x00000002UD    { align1 WE_all 1H I@2 compacted };
add(16)         g8<1>UD         g8<1,1,0>UD     0x00000180UD    { align1 WE_all 1H I@2 compacted };
add(16)         g12<1>UD        g12<1,1,0>UD    0x00000180UD    { align1 WE_all 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g6UD            g8UD            nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 WE_all 1H @1 $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g10<1>D         g6<1,1,0>D      512D            { align1 1H F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(1)          a0.1<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(1)           a0.1<1>UD       a0.1<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g12UD           g10UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 0 ss ) surface_state_index 0  { align1 1H @1 $0 };

LABEL30:
while(16)       JIP:  LABEL32                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q A@2 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_BFS_BFS_pass1_indexed_code[] = {
    0x80000065, 0x1f058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x2e050220, 0x00000024, 0x00000000,
    0x00040061, 0x46054660, 0x00000000, 0x00000001,
    0x00040061, 0x30054220, 0x00000000, 0x00000000,
    0x80030061, 0x2d054410, 0x00000000, 0x76543210,
    0xe2201d40, 0x00011f03, 0x00130061, 0x3d264aa0,
    0x00000000, 0x00000000, 0x642d1a40, 0x00802d95,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00200c, 0x00340000,
    0x00131161, 0x3d064aa0, 0x00000000, 0x00000000,
    0x00131161, 0x32260220, 0x00443d26, 0x00000000,
    0x00131961, 0x32060220, 0x00443d06, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x212b0061, 0x001102cc, 0x2a3f0061, 0x001102cc,
    0x00030061, 0x22260aa0, 0x00000264, 0x00000000,
    0x00130061, 0x24260aa0, 0x00000264, 0x00000000,
    0x212b1461, 0x00110204, 0x2a3f1461, 0x00110204,
    0x21221461, 0x00110244, 0x2a241461, 0x00110244,
    0xa1751440, 0x428e2b03, 0xa14a0040, 0x42ce2b03,
    0x00030061, 0x41050220, 0x00442b26, 0x00000000,
    0xaa431340, 0x428e3f03, 0xaa4b0040, 0x42ce3f03,
    0x00130061, 0x42050220, 0x00443f26, 0x00000000,
    0x00031e70, 0x76050220, 0x52467505, 0x00442b06,
    0x00030061, 0x4e060220, 0x00347505, 0x00000000,
    0x00031f70, 0x4c050220, 0x52464a05, 0x00442b06,
    0x00131e70, 0x44050220, 0x52464305, 0x00443f06,
    0x00130061, 0x50060220, 0x00344305, 0x00000000,
    0x00131f70, 0x4d050220, 0x52464b05, 0x00443f06,
    0x00031e40, 0x77052660, 0x06467605, 0x00442b26,
    0x00031e61, 0x74264aa0, 0x00000000, 0x00000000,
    0x00131c40, 0x45052660, 0x06464405, 0x00443f26,
    0x00031a61, 0x4e260220, 0x00347705, 0x00000000,
    0x00031161, 0x74064aa0, 0x00000000, 0x00000000,
    0x00131a61, 0x50260220, 0x00344505, 0x00000000,
    0x00031161, 0x72260220, 0x00447426, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x48140000, 0xfb044e24, 0x00040000,
    0x00031961, 0x72060220, 0x00447406, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00031969, 0x4e058660, 0x02447206, 0x00000002,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x00131b69, 0x4f058660, 0x02443206, 0x00000002,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xa0500040, 0x4e004a02, 0x27521970, 0x4a005003,
    0x00030061, 0x56060220, 0x00345005, 0x00000000,
    0x00130061, 0x58060220, 0x00345105, 0x00000000,
    0x00041b52, 0x54042e68, 0x0e2e4c05, 0x52054105,
    0x00131961, 0x58260220, 0x00345505, 0x00000000,
    0x00031a61, 0x56260220, 0x00345405, 0x00000000,
    0xe25c004c, 0x00114004, 0x80000061, 0x30010220,
    0x00004000, 0x00000000, 0x80040040, 0x62058150,
    0x05582d05, 0xffffffff, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80000b69, 0x10018220,
    0x02005c04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000a00, 0x80000961, 0x01060660,
    0x00010300, 0x00000000, 0x80000061, 0x01260660,
    0x00010310, 0x00000000, 0x80000061, 0x05064210,
    0x00000000, 0x00000000, 0x80031a61, 0x4f260220,
    0x00000124, 0x00000000, 0x80031961, 0x4f060220,
    0x00000104, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004131, 0x5a140000,
    0xfb004f0c, 0x00340000, 0x80042161, 0x5e054660,
    0x00000000, 0x00000000, 0x00040061, 0x5e050660,
    0x00465a05, 0x00000000, 0x80041961, 0x10014110,
    0x00000000, 0x0bc00bc0, 0x80040069, 0x10018510,
    0x01466205, 0x00020002, 0x80040940, 0x10018110,
    0x01461001, 0x0bc00bc0, 0xe3600961, 0x001b0004,
    0x80001961, 0x60054660, 0x00000000, 0x00000000,
    0x80031940, 0x60260660, 0x06446006, 0x00446026,
    0x80021940, 0x60470660, 0x06426027, 0x00426047,
    0x80021940, 0x60670660, 0x06426027, 0x00426067,
    0x80021940, 0x60850660, 0x06006064, 0x00346085,
    0x80021a40, 0x61850660, 0x06006164, 0x00346185,
    0xa4611940, 0x61016082, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0630040, 0x60202e02,
    0x27651970, 0x5a006303, 0x80000061, 0x30010110,
    0x00000504, 0x00000000, 0x00041a70, 0x00018220,
    0x22466505, 0x00000000, 0x00040061, 0x67050120,
    0x20003000, 0x00000000, 0x01040022, 0x0001c060,
    0x00000030, 0x00000030, 0x00040061, 0x34054220,
    0x00000000, 0xffffffff, 0x00040028, 0x0001c660,
    0x000000c8, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x000000b8, 0xa0690040, 0x5a006002,
    0xa0300040, 0x01003003, 0xa02e1a40, 0x6a302e52,
    0x0004a170, 0x00010220, 0x42463005, 0x00464805,
    0x01040022, 0x0001c060, 0x00000030, 0x00000030,
    0x00041f61, 0x34054220, 0x00000000, 0x00000000,
    0x00040028, 0x0001c660, 0x00000060, 0x00000010,
    0x00040025, 0x00004600, 0x00000000, 0x00000050,
    0x00030061, 0x72060220, 0x00343005, 0x00000000,
    0x00130061, 0x32060220, 0x00343105, 0x00000000,
    0x00031a61, 0x72264220, 0x00000000, 0x00000000,
    0x00131a61, 0x32264220, 0x00000000, 0x00000000,
    0x00040027, 0x00014060, 0x00000000, 0xfffffc80,
    0x00041a61, 0x00010660, 0x20463405, 0x00000000,
    0x01040022, 0x0001c060, 0x000000b0, 0x00000090,
    0x00041e4c, 0x6a050220, 0x00466705, 0x00000000,
    0x00040070, 0x00018660, 0x16466705, 0x00000000,
    0x11041a62, 0x6c058220, 0x02466a05, 0x00000020,
    0xa0351940, 0x6c003002, 0x80040061, 0x10014110,
    0x00000000, 0x0c600c60, 0x00040069, 0x10018510,
    0x01566c06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0c600c60, 0xe0370961, 0x001b0004,
    0x00040024, 0x0001c060, 0x00000030, 0x00000030,
    0x00041a61, 0x35054220, 0x00000000, 0x00000000,
    0x00041b61, 0x37054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00041b69, 0x6d058660, 0x02463505, 0x00000002,
    0x00030040, 0x6f058660, 0x06442b06, 0x0000082e,
    0x00130040, 0x70058660, 0x06443f06, 0x0000082e,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00130040, 0x7a058660, 0x06443f06, 0x00002c2c,
    0x80030061, 0x57054010, 0x00000000, 0x76543210,
    0x00031c70, 0x71050220, 0x52466f05, 0x00442b06,
    0x00131c70, 0x72050220, 0x52467005, 0x00443f06,
    0xa0731f40, 0x6d006f02, 0x80031c61, 0x57050120,
    0x00465705, 0x00000000, 0x27751a70, 0x6f007303,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x50060220, 0x00347305, 0x00000000,
    0x00130061, 0x52060220, 0x00347405, 0x00000000,
    0xe4581c40, 0x00805703, 0x00041c52, 0x77042e68,
    0x0e2e7105, 0x75054105, 0xe3571a69, 0x00205703,
    0x00131a61, 0x52260220, 0x00347805, 0x00000000,
    0x00031b61, 0x50260220, 0x00347705, 0x00000000,
    0xe3571b40, 0x10005703, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x78140000,
    0xf7005024, 0x00020000, 0x00042261, 0x7c050120,
    0x00567806, 0x00000000, 0x00030040, 0x79058660,
    0x06442b06, 0x00002c2c, 0x607e1a41, 0x5cc07c02,
    0x00031a70, 0x7b050220, 0x52467905, 0x00442b06,
    0x00130070, 0x7c050220, 0x52467a05, 0x00443f06,
    0xa0551b40, 0x7e007902, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049331, 0x00020100,
    0xfa085714, 0x04005504, 0x80030061, 0x5a054010,
    0x00000000, 0x76543210, 0x80030061, 0x4a054010,
    0x00000000, 0x76543210, 0x80031a61, 0x5a050120,
    0x00465a05, 0x00000000, 0x80031a61, 0x4a050120,
    0x00464a05, 0x00000000, 0xe45b1a40, 0x00805a03,
    0xe44b1a40, 0x00804a03, 0xe35a1a69, 0x00205a03,
    0xe34a1a69, 0x00204a03, 0xe35a1a40, 0x10005a03,
    0xe34a1a40, 0x0c004a03, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049431, 0x58160100,
    0xfa005a14, 0x04000000, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80001301, 0x00000000,
    0x00000000, 0x00000000, 0x27010070, 0x79005803,
    0x00049152, 0x48042e68, 0x0e2e7b05, 0x01054105,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049531, 0x00020100, 0xfa084a14, 0x04004804,
    0x80030061, 0x5c054010, 0x00000000, 0x76543210,
    0x80030061, 0x4c054010, 0x00000000, 0x76543210,
    0x80130061, 0x5e054010, 0x00000000, 0x76543210,
    0x80133161, 0x4e054010, 0x00000000, 0x76543210,
    0xa1781440, 0x034e2203, 0xaa101340, 0x034e2403,
    0xe0320065, 0x0ff10043, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x1f050160,
    0x00462d05, 0x00000000, 0x80030061, 0x73054010,
    0x00000000, 0x76543210, 0x80031f61, 0x5c050120,
    0x00465c05, 0x00000000, 0x80031f61, 0x4c050120,
    0x00464c05, 0x00000000, 0x80131f61, 0x5e050120,
    0x00465e05, 0x00000000, 0x80131f61, 0x4e050120,
    0x00464e05, 0x00000000, 0x00041f69, 0x34058660,
    0x02463205, 0x00000004, 0x80031e61, 0x73050120,
    0x00467305, 0x00000000, 0xe45c1e69, 0x00205c03,
    0xe44c1e69, 0x00204c03, 0x80131e69, 0x5e058220,
    0x02465e05, 0x00000002, 0x80131e69, 0x4e058220,
    0x02464e05, 0x00000002, 0xa0391e40, 0x34001f02,
    0xe4741e40, 0x00807303, 0xe45c1e40, 0x10005c03,
    0xe44c1e40, 0x0c004c03, 0x80131e40, 0x5e058220,
    0x02465e05, 0x00000120, 0x80131e40, 0x4e058220,
    0x02464e05, 0x000000e0, 0xe0711e65, 0x1ff03903,
    0xe3731e69, 0x00207303, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80001e01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80039631, 0x5b0e0100,
    0xfa005c0c, 0x04000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80039731, 0x4b0e0100,
    0xfa004c0c, 0x04000000, 0x80101c01, 0x00000000,
    0x00000000, 0x00000000, 0x80100065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80100066, 0x10218220,
    0x02001020, 0x0000000f, 0x80139631, 0x5d0e0100,
    0xfa005e0c, 0x04000000, 0x80101b01, 0x00000000,
    0x00000000, 0x00000000, 0x80100065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80100066, 0x10218220,
    0x02001020, 0x0000000f, 0x80139831, 0x4d0e0100,
    0xfa004e0c, 0x04000000, 0xe3731940, 0x18007303,
    0x80002601, 0x00000000, 0x00000000, 0x00000000,
    0x00033261, 0x51060220, 0x00345b05, 0x00000000,
    0x80102601, 0x00000000, 0x00000000, 0x00000000,
    0x00133261, 0x53060220, 0x00345d05, 0x00000000,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x00031a61, 0x51260220, 0x00344b05, 0x00000000,
    0x80102801, 0x00000000, 0x00000000, 0x00000000,
    0x00131a61, 0x53260220, 0x00344d05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x02440000, 0xfb045124, 0x003c0000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x00033961, 0x52060220, 0x00347805, 0x00000000,
    0x80103301, 0x00000000, 0x00000000, 0x00000000,
    0x00133961, 0x54060220, 0x00341005, 0x00000000,
    0xe00a2965, 0x00100803, 0xae0c1970, 0x00000a03,
    0x00030070, 0x79050220, 0x52467805, 0x00442206,
    0x00130070, 0x11050220, 0x52461005, 0x00442406,
    0x00031a40, 0x7a052660, 0x06467905, 0x00442226,
    0x00131a40, 0x12052660, 0x06461105, 0x00442426,
    0x00041d61, 0x0a062650, 0x00460c05, 0x00000000,
    0x00031b61, 0x52260220, 0x00347a05, 0x00000000,
    0x00131b61, 0x54260220, 0x00341205, 0x00000000,
    0x00041b65, 0x0e058110, 0x01560a06, 0x00010001,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x13140000, 0xfb045224, 0x00040000,
    0x00041961, 0x0f050450, 0x00680e06, 0x00000000,
    0x00041970, 0x17058550, 0x25580f05, 0x00000000,
    0x00041961, 0x15050560, 0x00461705, 0x00000000,
    0x00041961, 0x0b062650, 0x00461505, 0x00000000,
    0x00041965, 0x19058110, 0x01560b06, 0x00010001,
    0x00041961, 0x00010450, 0x20681906, 0x00000000,
    0xef1c2962, 0x00001303, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049a31, 0x00020100,
    0xfa087314, 0x04007104, 0x00040069, 0x26058660,
    0x02463705, 0x00000009, 0x80030061, 0x76054010,
    0x00000000, 0x76543210, 0xa17b0040, 0x010e2203,
    0xaa2e0040, 0x010e2403, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x14440000,
    0xfb042224, 0x003c0000, 0xa028c940, 0x26000202,
    0x80031c61, 0x76050120, 0x00467605, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x00031c70, 0x7c050220, 0x52467b05, 0x00442206,
    0x80103b01, 0x00000000, 0x00000000, 0x00000000,
    0x00131c70, 0x2f050220, 0x52462e05, 0x00442406,
    0x00033961, 0x53060220, 0x00347b05, 0x00000000,
    0x80103301, 0x00000000, 0x00000000, 0x00000000,
    0x00133961, 0x55060220, 0x00342e05, 0x00000000,
    0xa02a1e40, 0x20002803, 0xe4771e40, 0x00807603,
    0x00031e40, 0x7d052660, 0x06467c05, 0x00442226,
    0x00131e40, 0x30052660, 0x06462f05, 0x00442426,
    0x272cc962, 0x04002a03, 0xe3761c69, 0x00207603,
    0x00031c61, 0x53260220, 0x00347d05, 0x00000000,
    0x00131c61, 0x55260220, 0x00343005, 0x00000000,
    0xe3761b40, 0x18007603, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x31240000,
    0xfb045324, 0x000c0000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049d31, 0x74160100,
    0xfa007614, 0x04000000, 0x80002d01, 0x00000000,
    0x00000000, 0x00000000, 0xa03a0040, 0x74002802,
    0x273c1970, 0x28003a03, 0x273e1f70, 0x2c003a03,
    0x00041965, 0x40052620, 0x02463c05, 0x00463e05,
    0x00041961, 0x0c062650, 0x00464005, 0x00000000,
    0x00041965, 0x42058110, 0x01560c06, 0x00010001,
    0x00041961, 0x43050450, 0x00684206, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00041970, 0x48058550, 0x25584305, 0x00000000,
    0x00041961, 0x44050560, 0x20464805, 0x00000000,
    0x01040022, 0x0001c060, 0x000001c8, 0x000001b8,
    0xa0493540, 0x3a001c02, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x274b1970, 0x1c004903,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0xe0523968, 0x01e04903, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xa04d1a40, 0x3c224b02,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x00041969, 0x50058660, 0x02464d05, 0x00000002,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x4e058660, 0x02464905, 0x00000002,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x20541a66, 0x52005003, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa056ab40, 0x4e001402,
    0x27581970, 0x14005603, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x5c060220,
    0x00345605, 0x00000000, 0x80103601, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x5e060220,
    0x00345705, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x0004bb52, 0x5a040e68,
    0x0e2e1605, 0x58055405, 0x00131961, 0x5e260220,
    0x00345b05, 0x00000000, 0x00031a61, 0x5c260220,
    0x00345a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x38140000,
    0xfb045c24, 0x00040000, 0x00040024, 0x0001c060,
    0x00000020, 0x00000020, 0x00042661, 0x38054220,
    0x00000000, 0x00000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xa05b2c40, 0x02003103,
    0x00042969, 0x61058660, 0x02460605, 0x00000005,
    0xe0630068, 0x01b00603, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x275d1b70, 0x31005b03,
    0xa0651b40, 0x61005b02, 0x00041f61, 0x0d062650,
    0x00464405, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xa05fbc40, 0x33025d02,
    0x27671b70, 0x5b006503, 0xa06b0040, 0x01006503,
    0x00041c65, 0x3f058110, 0x01560d06, 0x00010001,
    0x00041b52, 0x69040e68, 0x0e2e5f05, 0x67056305,
    0xe76d1b70, 0x01006b03, 0x00041b61, 0x40050450,
    0x00683f06, 0x00000000, 0xa06f1a40, 0x69026d02,
    0x00030061, 0x5d060220, 0x00346505, 0x00000000,
    0x00130061, 0x5f060220, 0x00346605, 0x00000000,
    0x00031a61, 0x5d260220, 0x00346905, 0x00000000,
    0x00131a61, 0x5f260220, 0x00346a05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x21440000, 0xfb045d24, 0x003c0000,
    0x00033e61, 0x5e060220, 0x00346b05, 0x00000000,
    0x00133e61, 0x60060220, 0x00346c05, 0x00000000,
    0x00031a61, 0x5e260220, 0x00346f05, 0x00000000,
    0x00131a61, 0x60260220, 0x00347005, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x20712e40, 0x21202700, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040062, 0x77058aa0,
    0x4a467105, 0x0704ec3d, 0x00041170, 0x05058aa0,
    0x5a467705, 0x77f684df, 0x00044f38, 0x7b050aa0,
    0x1a467705, 0x00460001, 0x00040070, 0x07058aa0,
    0x3a467105, 0x0704ec3d, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x70240000,
    0xfb045e24, 0x000c0000, 0x00042f41, 0x7d058aa0,
    0x0a467b05, 0x417d70a4, 0x00041265, 0x00010220,
    0x22460505, 0x00460705, 0xef1c1162, 0x00007d03,
    0x80002e01, 0x00000000, 0x00000000, 0x00000000,
    0x20742040, 0x23207000, 0x80002e01, 0x00000000,
    0x00000000, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x20762040, 0x25207200,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x00041262, 0x78058aa0, 0x4a467405, 0x0704ec3d,
    0x00040070, 0x29058aa0, 0x3a467405, 0x0704ec3d,
    0x00041362, 0x7a058aa0, 0x4a467605, 0x0704ec3d,
    0x00041370, 0x2b058aa0, 0x5a467805, 0x77f684df,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044138, 0x7e050aa0, 0x1a467805, 0x00460001,
    0x0004a238, 0x02050aa0, 0x1a467a05, 0x00460001,
    0x00041165, 0x00010220, 0x22462b05, 0x00462905,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x00041b41, 0x04058aa0, 0x0a460205, 0x417d70a4,
    0x00042141, 0x01058aa0, 0x0a467e05, 0x417d70a4,
    0xef321162, 0x00000103, 0x00040070, 0x34058aa0,
    0x3a467605, 0x0704ec3d, 0x00043270, 0x36058aa0,
    0x5a467a05, 0x77f684df, 0x00041165, 0x00010220,
    0x22463605, 0x00463405, 0xef3d1462, 0x00000403,
    0x00040070, 0x43058550, 0x25584005, 0x00000000,
    0x00041961, 0x41050560, 0x20464305, 0x00000000,
    0x01040022, 0x0001c060, 0x000001a0, 0x000001a0,
    0x00042669, 0x44058660, 0x02463805, 0x00000005,
    0xe0483568, 0x01b03803, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xa04aab40, 0x44001802,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x274c1970, 0x18004a03, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0xa0503240, 0x01004a03,
    0x00033061, 0x5f060220, 0x00344a05, 0x00000000,
    0x00133061, 0x61060220, 0x00344b05, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x0004cb52, 0x4e040e68, 0x0e2e1a05, 0x4c054805,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x27521c70, 0x4a005003, 0x00131a61, 0x61260220,
    0x00344f05, 0x00000000, 0x00031b61, 0x5f260220,
    0x00344e05, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0541b40, 0x4e025202,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x03440000, 0xfb045f24, 0x003c0000,
    0x00033061, 0x60060220, 0x00345005, 0x00000000,
    0x00133061, 0x62060220, 0x00345105, 0x00000000,
    0x00031a61, 0x60260220, 0x00345405, 0x00000000,
    0x00131a61, 0x62260220, 0x00345505, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x0b440000, 0xfb046024, 0x003c0000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80031561, 0x79054010, 0x00000000, 0x76543210,
    0x80031961, 0x79050120, 0x00467905, 0x00000000,
    0xe47a0940, 0x00807903, 0xe3791969, 0x00207903,
    0xe3791940, 0x18007903, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049331, 0x77160100,
    0xfa007914, 0x04000000, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0x00042669, 0x39058660,
    0x02467705, 0x00000002, 0x00041961, 0x3b050220,
    0x00463905, 0x00000000, 0x00041970, 0x00018220,
    0x42463b05, 0x00000120, 0x01040028, 0x0001c660,
    0x00000090, 0x00000090, 0x00043069, 0x61058660,
    0x02463b05, 0x00000002, 0x00043061, 0x29054220,
    0x00000000, 0x7f800000, 0x00043061, 0x2b054220,
    0x00000000, 0x7f800000, 0x00043061, 0x2d054220,
    0x00000000, 0x7f800000, 0x00043061, 0x2f054220,
    0x00000000, 0x7f800000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044031, 0x00000000,
    0xea0c6114, 0x003c2944, 0x00040040, 0x3b058660,
    0x06463b05, 0x00000800, 0x00040027, 0x00014060,
    0x00000000, 0xffffff60, 0x00041970, 0x00018220,
    0x42463905, 0x00000030, 0x01040028, 0x0001c660,
    0x000000a8, 0x000000a8, 0x00043c69, 0x55058660,
    0x02463905, 0x00000002, 0x00043061, 0x2a054220,
    0x00000000, 0x00000000, 0x00043061, 0x2c054220,
    0x00000000, 0x00000000, 0x00043061, 0x2e054220,
    0x00000000, 0x00000000, 0x00043061, 0x30054220,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xa0621d40, 0x48005503,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xea0c6214, 0x003c2a44,
    0x00040040, 0x39058660, 0x06463905, 0x00000800,
    0x00040027, 0x00014060, 0x00000000, 0xffffff48,
    0x80000001, 0x00000000, 0x30000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x80004431, 0x560c0000, 0xe23e000c, 0x00040000,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x80033361, 0x57054220, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80011961, 0x57550000, 0x0000005c, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80044531, 0x00000000, 0x3008570c, 0x00000000,
    0x80040001, 0x00000000, 0xe0000000, 0x00000000,
    0x80030061, 0x3f054010, 0x00000000, 0x76543210,
    0x00042b61, 0x13062650, 0x00464105, 0x00000000,
    0x80031a61, 0x3f050120, 0x00463f05, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00041a65, 0x62058110, 0x01561306, 0x00010001,
    0xe4401a40, 0x00803f03, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00041a61, 0x63050450,
    0x00686206, 0x00000000, 0xe33f1a69, 0x00203f03,
    0x00041a70, 0x64058550, 0x25586305, 0x00000000,
    0xe33f1a40, 0x08003f03, 0x00041a61, 0x3b050560,
    0x00466405, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000008f, 0x00049631, 0x00020100,
    0xfa083f14, 0x04003b04, 0x80030061, 0x42054010,
    0x00000000, 0x76543210, 0x20582040, 0x0b000300,
    0x80030061, 0x6d054010, 0x00000000, 0x76543210,
    0x80031a61, 0x42050120, 0x00464205, 0x00000000,
    0x205b1140, 0x21205800, 0x80031a61, 0x6d050120,
    0x00466d05, 0x00000000, 0xe4431a40, 0x00804203,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x205e1141, 0x1c005b00, 0xe46e1a40, 0x00806d03,
    0xe3421a69, 0x00204203, 0x00041161, 0x6b050a20,
    0x00465e05, 0x00000000, 0xe36d1b69, 0x00206d03,
    0xe3421b40, 0x08004203, 0xe36d1a40, 0x14006d03,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049731, 0x40160100, 0xfa004214, 0x04000000,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x00042b61, 0x14062650, 0x00464005, 0x00000000,
    0x00041965, 0x66058110, 0x01561406, 0x00010001,
    0x00041961, 0x67050450, 0x00686606, 0x00000000,
    0x00041970, 0x68058550, 0x25586705, 0x00000000,
    0x00041961, 0x13050560, 0x00466805, 0x00000000,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049731, 0x00020100, 0xfa086d14, 0x04006b04,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x20592040, 0x0d000500, 0x80033061, 0x2b054010,
    0x00000000, 0x76543210, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x205c1140, 0x23205900,
    0x80031961, 0x2b050120, 0x00462b05, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x205f1141, 0x32005c00, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xe42c1940, 0x00802b03,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00041161, 0x29050a20, 0x00465f05, 0x00000000,
    0xe32b1a69, 0x00202b03, 0xe32b1940, 0x00002b03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049831, 0x00020100, 0xfa082b14, 0x04002904,
    0x205a2040, 0x0f000700, 0x80030061, 0x34054010,
    0x00000000, 0x76543210, 0x205d1140, 0x25205a00,
    0x80031961, 0x34050120, 0x00463405, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x20600941, 0x3d005d00, 0xe4351940, 0x00803403,
    0x00041161, 0x32050a20, 0x00466005, 0x00000000,
    0xe3341a69, 0x00203403, 0xe3341940, 0x04003403,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049031, 0x00020100, 0xfa083414, 0x04003204,
    0x80000061, 0x15064210, 0x00000000, 0x00000000,
    0x80001961, 0x30010110, 0x00001504, 0x00000000,
    0x00040070, 0x00018220, 0x22461305, 0x00000000,
    0x00040061, 0x01050120, 0x00003000, 0x00000000,
    0x00040069, 0x69050660, 0x02464605, 0x00461f05,
    0xe0152b65, 0x00301f03, 0xe0172b68, 0x00201f03,
    0xe019bb65, 0x07706903, 0x00041a70, 0x00018660,
    0x16460105, 0x00000000, 0x01040028, 0x0001c660,
    0x00000b38, 0x00000b38, 0x0004114c, 0x21050220,
    0x00460105, 0x00000000, 0x80030061, 0x1f054010,
    0x00000000, 0x76543210, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80031961, 0x1f050120,
    0x00461f05, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0xe4200940, 0x00801f03,
    0xe31f1969, 0x00201f03, 0xe31f1940, 0x14001f03,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049a31, 0x1d160100, 0xfa001f14, 0x04000000,
    0x80033a61, 0x1f054010, 0x00000000, 0x76543210,
    0x80031961, 0x1f050120, 0x00461f05, 0x00000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0xe4201940, 0x00801f03, 0xe31f1969, 0x00201f03,
    0xe31f1940, 0x14001f03, 0x80002a01, 0x00000000,
    0x00000000, 0x00000000, 0x80002b01, 0x00000000,
    0x00000000, 0x00000000, 0x80041761, 0x10014110,
    0x00000000, 0x03a003a0, 0x00040069, 0x10018510,
    0x01562106, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x03a003a0, 0xe01b0961, 0x001b0004,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049b31, 0x1d160100, 0xfa001f14, 0x04000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80002b01, 0x00000000, 0x00000000, 0x00000000,
    0xac211970, 0x1d001b02, 0x201d1965, 0x13002103,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x00041961, 0x1f062650, 0x00461d05, 0x00000000,
    0x00041965, 0x7e058110, 0x01561f06, 0x00010001,
    0x00041961, 0x7f050450, 0x00687e06, 0x00000000,
    0x00041970, 0x1f058550, 0x25587f05, 0x00000000,
    0x00041961, 0x1d050560, 0x20461f05, 0x00000000,
    0x01040062, 0x1f058220, 0x02460b05, 0xff800000,
    0x01040062, 0x21058220, 0x02460305, 0x7f800000,
    0x01041162, 0x23058220, 0x02460505, 0x7f800000,
    0x01043862, 0x2b058220, 0x02460705, 0x7f800000,
    0xa3250a61, 0xff810000, 0x60250061, 0x00101f00,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x1f058220, 0x02460d05, 0xff800000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80031161, 0x55060220, 0x00442526, 0x00000000,
    0xa3270a61, 0xff810000, 0x60270061, 0x00101f00,
    0xa31f1d61, 0x7f810000, 0x601f0061, 0x00102100,
    0xa3211c61, 0x7f810000, 0x60210061, 0x00102300,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x23058220, 0x02460f05, 0xff800000,
    0x80031361, 0x63060220, 0x00442726, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80031261, 0x2d060220, 0x00441f26, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80031161, 0x3b060220, 0x00442126, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xa3290c61, 0xff810000, 0x60290061, 0x00102300,
    0x00040070, 0x00018660, 0x16461505, 0x00000001,
    0xa3231f61, 0x7f810000, 0x60230061, 0x00102b00,
    0x80031b62, 0x2b060aa0, 0x5a441f06, 0x00442d06,
    0x80030961, 0x1f260220, 0x00442b06, 0x00000000,
    0x80031161, 0x2d060220, 0x00442326, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80021a61, 0x31070220, 0x00421f27, 0x00000000,
    0x80023061, 0x33070220, 0x00421f47, 0x00000000,
    0x80031c62, 0x2b060aa0, 0x5a442106, 0x00443b06,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x2f070aa0, 0x5a423107, 0x00423307,
    0x80030a61, 0x21260220, 0x00442b06, 0x00000000,
    0x80031261, 0x3b060220, 0x00442926, 0x00000000,
    0x80021161, 0x1f470220, 0x00422f07, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80021b61, 0x3f070220, 0x00422127, 0x00000000,
    0x80023761, 0x41070220, 0x00422147, 0x00000000,
    0x80031d62, 0x2b060aa0, 0x4a442506, 0x00445506,
    0x8002b661, 0x37070220, 0x00421f27, 0x00000000,
    0x80020061, 0x39070220, 0x00421f67, 0x00000000,
    0x80021b62, 0x3d070aa0, 0x5a423f07, 0x00424107,
    0x80031261, 0x25260220, 0x00442b06, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80021a62, 0x35070aa0, 0x5a423707, 0x00423907,
    0x80021261, 0x21470220, 0x00423d07, 0x00000000,
    0x80021a61, 0x59070220, 0x00422527, 0x00000000,
    0x80020061, 0x5b070220, 0x00422547, 0x00000000,
    0x80031c62, 0x2b060aa0, 0x4a442706, 0x00446306,
    0x80021261, 0x1f670220, 0x00423507, 0x00000000,
    0x80021c61, 0x45070220, 0x00422127, 0x00000000,
    0x80020061, 0x47070220, 0x00422167, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80021c62, 0x57070aa0, 0x4a425907, 0x00425b07,
    0x80031261, 0x27260220, 0x00442b06, 0x00000000,
    0x80021c62, 0x1f850aa0, 0x5a001f64, 0x00341f85,
    0x80021c62, 0x20850aa0, 0x5a002064, 0x00342085,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80021a62, 0x43070aa0, 0x5a424507, 0x00424707,
    0x80021461, 0x25470220, 0x00425707, 0x00000000,
    0x80021a61, 0x67070220, 0x00422727, 0x00000000,
    0x80020061, 0x69070220, 0x00422747, 0x00000000,
    0x80031c62, 0x2b060aa0, 0x5a442306, 0x00442d06,
    0x80031362, 0x20050aa0, 0x5a001fe4, 0x00462005,
    0x80021361, 0x21670220, 0x00424307, 0x00000000,
    0x80021c61, 0x5f070220, 0x00422527, 0x00000000,
    0x80020061, 0x61070220, 0x00422567, 0x00000000,
    0x80021c62, 0x65070aa0, 0x4a426707, 0x00426907,
    0x80031361, 0x23260220, 0x00442b06, 0x00000000,
    0x80021c62, 0x21850aa0, 0x5a002164, 0x00342185,
    0x80021c62, 0x22850aa0, 0x5a002264, 0x00342285,
    0x80021a62, 0x5d070aa0, 0x4a425f07, 0x00426107,
    0x80021461, 0x27470220, 0x00426507, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80021a61, 0x4b070220, 0x00422327, 0x00000000,
    0x80023861, 0x4d070220, 0x00422347, 0x00000000,
    0x80031c62, 0x2b060aa0, 0x4a442906, 0x00443b06,
    0x80031362, 0x22050aa0, 0x5a0021e4, 0x00462205,
    0x80021361, 0x25670220, 0x00425d07, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80021c61, 0x6d070220, 0x00422727, 0x00000000,
    0x80020061, 0x6f070220, 0x00422767, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80021c62, 0x49070aa0, 0x5a424b07, 0x00424d07,
    0x80031361, 0x29260220, 0x00442b06, 0x00000000,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x2b050220, 0x020022e4, 0x000020e4,
    0x80021d62, 0x25850aa0, 0x4a002564, 0x00342585,
    0x80021d62, 0x26850aa0, 0x4a002664, 0x00342685,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80021b62, 0x6b070aa0, 0x4a426d07, 0x00426f07,
    0x80021461, 0x23470220, 0x00424907, 0x00000000,
    0x80021b61, 0x73070220, 0x00422927, 0x00000000,
    0x80020061, 0x75070220, 0x00422947, 0x00000000,
    0x80031262, 0x26050aa0, 0x4a0025e4, 0x00462605,
    0x80021261, 0x27670220, 0x00426b07, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80021c61, 0x51070220, 0x00422327, 0x00000000,
    0x80023c61, 0x53070220, 0x00422367, 0x00000000,
    0x80021c62, 0x71070aa0, 0x4a427307, 0x00427507,
    0x80021b62, 0x27850aa0, 0x4a002764, 0x00342785,
    0x80021b62, 0x28850aa0, 0x4a002864, 0x00342885,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x4f070aa0, 0x5a425107, 0x00425307,
    0x80021461, 0x29470220, 0x00427107, 0x00000000,
    0x80031262, 0x28050aa0, 0x4a0027e4, 0x00462805,
    0x80021261, 0x23670220, 0x00424f07, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80021a61, 0x79070220, 0x00422927, 0x00000000,
    0x80020061, 0x7b070220, 0x00422967, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x1f050220, 0x020028e4, 0x000026e4,
    0x80021c62, 0x23850aa0, 0x5a002364, 0x00342385,
    0x80021c62, 0x24850aa0, 0x5a002464, 0x00342485,
    0x80021a62, 0x77070aa0, 0x4a427907, 0x00427b07,
    0x00040070, 0x00018660, 0x16461505, 0x00000002,
    0x80031262, 0x24050aa0, 0x5a0023e4, 0x00462405,
    0x80021261, 0x29670220, 0x00427707, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x2f210062, 0x2b012483, 0x80021a62, 0x29850aa0,
    0x4a002964, 0x00342985, 0x80021a62, 0x2a850aa0,
    0x4a002a64, 0x00342a85, 0x80031162, 0x2a050aa0,
    0x4a0029e4, 0x00462a05, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x2f230062, 0x1f012a83,
    0x00040070, 0x00018660, 0x16461705, 0x00000000,
    0x2f1f1a62, 0x23202100, 0x00040070, 0x00018660,
    0x26461905, 0x00000000, 0x01040022, 0x0001c060,
    0x00000060, 0x00000060, 0x60211141, 0x00601b02,
    0x601b1941, 0x00301702, 0x00040952, 0x23040e68,
    0x0e0e2105, 0x1b051505, 0x00041969, 0x1b058660,
    0x02462305, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x00000000,
    0xea2a1b14, 0x01001f14, 0x00040025, 0x00004600,
    0x00000000, 0x00000078, 0x00043964, 0x1b050660,
    0x00461d05, 0x00000000, 0x80000061, 0x7d064210,
    0x00000000, 0x00000000, 0x80001961, 0x30010110,
    0x00007d04, 0x00000000, 0x00041b70, 0x00018220,
    0x22461b05, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x00041161, 0x1e050120,
    0x00003000, 0x00000000, 0x20011965, 0x1e000103,
    0x00040027, 0x00014060, 0x00000000, 0xfffff4b8,
    0x80033061, 0x2e054010, 0x00000000, 0x76543210,
    0x80000f61, 0x1d064210, 0x00000000, 0x00000000,
    0x80031a61, 0x2e050120, 0x00462e05, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xe42f1940, 0x00802e03, 0xe32e1969, 0x00202e03,
    0xe32e1940, 0x00002e03, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049c31, 0x2c160100,
    0xfa002e14, 0x04000000, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x80002b01, 0x00000000,
    0x00000000, 0x00000000, 0xa01b1740, 0x01002c03,
    0x80001e61, 0x30010110, 0x00001d04, 0x00000000,
    0x00040070, 0x00018220, 0x22461305, 0x00000000,
    0x00040061, 0x01050120, 0x00003000, 0x00000000,
    0x00041970, 0x00018660, 0x16460105, 0x00000000,
    0x01040028, 0x0001c660, 0x00000a28, 0x00000a28,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x0004094c, 0x1f050220, 0x00460105, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80040061, 0x10014110, 0x00000000, 0x03600360,
    0x00040069, 0x10018510, 0x01561f06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x03600360,
    0xe01d0961, 0x001b0004, 0xac1f1970, 0x1b001d02,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x20210965, 0x13001f03, 0x00041961, 0x1f062650,
    0x00462105, 0x00000000, 0x00041965, 0x21058110,
    0x01561f06, 0x00010001, 0x00041961, 0x22050450,
    0x00682106, 0x00000000, 0x00040970, 0x23058550,
    0x25582205, 0x00000000, 0x00041961, 0x1f050560,
    0x20462305, 0x00000000, 0x01040062, 0x21058220,
    0x02460b05, 0xff800000, 0x01041162, 0x23058220,
    0x02460305, 0x7f800000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x25058220,
    0x02460505, 0x7f800000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x2d058220,
    0x02460705, 0x7f800000, 0xa3270c61, 0xff810000,
    0x60270061, 0x00102100, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x21058220,
    0x02460d05, 0xff800000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x57060220,
    0x00442726, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xa3290a61, 0xff810000,
    0x60290061, 0x00102100, 0xa3211d61, 0x7f810000,
    0x60210061, 0x00102300, 0xa3231c61, 0x7f810000,
    0x60230061, 0x00102500, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x25058220,
    0x02460f05, 0xff800000, 0x80031361, 0x65060220,
    0x00442926, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80031261, 0x2f060220,
    0x00442126, 0x00000000, 0x80031161, 0x3d060220,
    0x00442326, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xa32b0c61, 0xff810000,
    0x602b0061, 0x00102500, 0x00040070, 0x00018660,
    0x16461505, 0x00000001, 0xa3251f61, 0x7f810000,
    0x60250061, 0x00102d00, 0x80031b62, 0x2d060aa0,
    0x5a442106, 0x00442f06, 0x80030961, 0x21260220,
    0x00442d06, 0x00000000, 0x80031161, 0x2f060220,
    0x00442526, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80021a61, 0x33070220,
    0x00422127, 0x00000000, 0x80023061, 0x35070220,
    0x00422147, 0x00000000, 0x80031c62, 0x2d060aa0,
    0x5a442306, 0x00443d06, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x31070aa0,
    0x5a423307, 0x00423507, 0x80030a61, 0x23260220,
    0x00442d06, 0x00000000, 0x80031261, 0x3d060220,
    0x00442b26, 0x00000000, 0x80021161, 0x21470220,
    0x00423107, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80021b61, 0x41070220,
    0x00422327, 0x00000000, 0x80023761, 0x43070220,
    0x00422347, 0x00000000, 0x80031d62, 0x2d060aa0,
    0x4a442706, 0x00445706, 0x80021b61, 0x39070220,
    0x00422127, 0x00000000, 0x80023661, 0x3b070220,
    0x00422167, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80021b62, 0x3f070aa0,
    0x5a424107, 0x00424307, 0x80031261, 0x27260220,
    0x00442d06, 0x00000000, 0x80002601, 0x00000000,
    0x00000000, 0x00000000, 0x80021a62, 0x37070aa0,
    0x5a423907, 0x00423b07, 0x80021261, 0x23470220,
    0x00423f07, 0x00000000, 0x80021a61, 0x5b070220,
    0x00422727, 0x00000000, 0x80020061, 0x5d070220,
    0x00422747, 0x00000000, 0x80031c62, 0x2d060aa0,
    0x4a442906, 0x00446506, 0x80021261, 0x21670220,
    0x00423707, 0x00000000, 0x80021c61, 0x47070220,
    0x00422327, 0x00000000, 0x80023561, 0x49070220,
    0x00422367, 0x00000000, 0x80021c62, 0x59070aa0,
    0x4a425b07, 0x00425d07, 0x80031261, 0x29260220,
    0x00442d06, 0x00000000, 0x80021c62, 0x21850aa0,
    0x5a002164, 0x00342185, 0x80021c62, 0x22850aa0,
    0x5a002264, 0x00342285, 0x80021a62, 0x45070aa0,
    0x5a424707, 0x00424907, 0x80021461, 0x27470220,
    0x00425907, 0x00000000, 0x80021a61, 0x69070220,
    0x00422927, 0x00000000, 0x80023761, 0x6b070220,
    0x00422947, 0x00000000, 0x80031c62, 0x2d060aa0,
    0x5a442506, 0x00442f06, 0x80031362, 0x22050aa0,
    0x5a0021e4, 0x00462205, 0x80021361, 0x23670220,
    0x00424507, 0x00000000, 0x80021c61, 0x61070220,
    0x00422727, 0x00000000, 0x80020061, 0x63070220,
    0x00422767, 0x00000000, 0x80021c62, 0x67070aa0,
    0x4a426907, 0x00426b07, 0x80031361, 0x25260220,
    0x00442d06, 0x00000000, 0x80021c62, 0x23850aa0,
    0x5a002364, 0x00342385, 0x80021c62, 0x24850aa0,
    0x5a002464, 0x00342485, 0x80021a62, 0x5f070aa0,
    0x4a426107, 0x00426307, 0x80021461, 0x29470220,
    0x00426707, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80021a61, 0x4d070220,
    0x00422527, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80023161, 0x4f070220,
    0x00422547, 0x00000000, 0x80031c62, 0x2d060aa0,
    0x4a442b06, 0x00443d06, 0x80031362, 0x24050aa0,
    0x5a0023e4, 0x00462405, 0x80021361, 0x27670220,
    0x00425f07, 0x00000000, 0x80021c61, 0x6f070220,
    0x00422927, 0x00000000, 0x80020061, 0x71070220,
    0x00422967, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80021c62, 0x4b070aa0,
    0x5a424d07, 0x00424f07, 0x80031361, 0x2b260220,
    0x00442d06, 0x00000000, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x2d050220,
    0x020024e4, 0x000022e4, 0x80021d62, 0x27850aa0,
    0x4a002764, 0x00342785, 0x80021d62, 0x28850aa0,
    0x4a002864, 0x00342885, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80021b62, 0x6d070aa0,
    0x4a426f07, 0x00427107, 0x80021461, 0x25470220,
    0x00424b07, 0x00000000, 0x80021b61, 0x75070220,
    0x00422b27, 0x00000000, 0x80020061, 0x77070220,
    0x00422b47, 0x00000000, 0x80031262, 0x28050aa0,
    0x4a0027e4, 0x00462805, 0x80021261, 0x29670220,
    0x00426d07, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80021c61, 0x53070220,
    0x00422527, 0x00000000, 0x80023c61, 0x55070220,
    0x00422567, 0x00000000, 0x80021c62, 0x73070aa0,
    0x4a427507, 0x00427707, 0x80021b62, 0x29850aa0,
    0x4a002964, 0x00342985, 0x80021b62, 0x2a850aa0,
    0x4a002a64, 0x00342a85, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x51070aa0,
    0x5a425307, 0x00425507, 0x80021461, 0x2b470220,
    0x00427307, 0x00000000, 0x80031262, 0x2a050aa0,
    0x4a0029e4, 0x00462a05, 0x80021261, 0x25670220,
    0x00425107, 0x00000000, 0x80021a61, 0x7b070220,
    0x00422b27, 0x00000000, 0x80020061, 0x7d070220,
    0x00422b67, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x21050220,
    0x02002ae4, 0x000028e4, 0x80021c62, 0x25850aa0,
    0x5a002564, 0x00342585, 0x80021c62, 0x26850aa0,
    0x5a002664, 0x00342685, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80021a62, 0x79070aa0,
    0x4a427b07, 0x00427d07, 0x00040070, 0x00018660,
    0x16461505, 0x00000002, 0x80031262, 0x26050aa0,
    0x5a0025e4, 0x00462605, 0x80021261, 0x2b670220,
    0x00427907, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x2f230062, 0x2d012683,
    0x80021a62, 0x2b850aa0, 0x4a002b64, 0x00342b85,
    0x80021a62, 0x2c850aa0, 0x4a002c64, 0x00342c85,
    0x80031162, 0x2c050aa0, 0x4a002be4, 0x00462c05,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x2f250062, 0x21012c83, 0x00040070, 0x00018660,
    0x16461705, 0x00000000, 0x2f211a62, 0x25202300,
    0x00040070, 0x00018660, 0x26461905, 0x00000000,
    0x01040022, 0x0001c060, 0x00000060, 0x00000060,
    0x60231141, 0x00601d02, 0x601d1941, 0x00301702,
    0x00040952, 0x25040e68, 0x0e0e2305, 0x1d051505,
    0x00041969, 0x1d058660, 0x02462505, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044d31, 0x00000000, 0xea2a1d14, 0x01002114,
    0x00040025, 0x00004600, 0x00000000, 0x00000068,
    0x00043d64, 0x1d050660, 0x00461f05, 0x00000000,
    0x80000061, 0x7f064210, 0x00000000, 0x00000000,
    0x80001961, 0x30010110, 0x00007f04, 0x00000000,
    0x00041b70, 0x00018220, 0x22461d05, 0x00000000,
    0x00040061, 0x1d050120, 0x00003000, 0x00000000,
    0x20011965, 0x1d000103, 0x00040027, 0x00014060,
    0x00000000, 0xfffff5c8, 0x80030061, 0x37054010,
    0x00000000, 0x76543210, 0x80000061, 0x1e064210,
    0x00000000, 0x00000000, 0x80031a61, 0x37050120,
    0x00463705, 0x00000000, 0xe4389640, 0x00803703,
    0xe3371969, 0x00203703, 0xe3371940, 0x04003703,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049731, 0x35160100, 0xfa003714, 0x04000000,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0xa01b1f40, 0x02003503, 0x80001e61, 0x30010110,
    0x00001e04, 0x00000000, 0x00040070, 0x00018220,
    0x22461305, 0x00000000, 0x00041f61, 0x01050120,
    0x00003000, 0x00000000, 0x00041970, 0x00018660,
    0x16460105, 0x00000000, 0x01040028, 0x0001c660,
    0x00000a38, 0x00000a38, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x0004094c, 0x1f050220,
    0x00460105, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80040061, 0x10014110,
    0x00000000, 0x03600360, 0x00040069, 0x10018510,
    0x01561f06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x03600360, 0xe01d0961, 0x001b0004,
    0xac1f1970, 0x1b001d02, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x20210965, 0x13001f03,
    0x00041961, 0x1f062650, 0x00462105, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00040065, 0x25058110, 0x01561f06, 0x00010001,
    0x00040961, 0x26050450, 0x00682506, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00040070, 0x27058550, 0x25582605, 0x00000000,
    0x00041961, 0x1f050560, 0x20462705, 0x00000000,
    0x01040062, 0x21058220, 0x02460b05, 0xff800000,
    0x01041162, 0x23058220, 0x02460305, 0x7f800000,
    0x01040062, 0x25058220, 0x02460505, 0x7f800000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x2d058220, 0x02460705, 0x7f800000,
    0xa3271c61, 0xff810000, 0x60270061, 0x00102100,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x21058220, 0x02460d05, 0xff800000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80031161, 0x57060220, 0x00442726, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xa3290a61, 0xff810000, 0x60290061, 0x00102100,
    0xa3211d61, 0x7f810000, 0x60210061, 0x00102300,
    0xa3231c61, 0x7f810000, 0x60230061, 0x00102500,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x25058220, 0x02460f05, 0xff800000,
    0x80031361, 0x65060220, 0x00442926, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80031261, 0x2f060220, 0x00442126, 0x00000000,
    0x80031161, 0x3d060220, 0x00442326, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xa32b0c61, 0xff810000, 0x602b0061, 0x00102500,
    0x00040070, 0x00018660, 0x16461505, 0x00000001,
    0xa3251f61, 0x7f810000, 0x60250061, 0x00102d00,
    0x80031b62, 0x2d060aa0, 0x5a442106, 0x00442f06,
    0x80030961, 0x21260220, 0x00442d06, 0x00000000,
    0x80031161, 0x2f060220, 0x00442526, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80021a61, 0x33070220, 0x00422127, 0x00000000,
    0x80020061, 0x35070220, 0x00422147, 0x00000000,
    0x80031c62, 0x2d060aa0, 0x5a442306, 0x00443d06,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x31070aa0, 0x5a423307, 0x00423507,
    0x80030a61, 0x23260220, 0x00442d06, 0x00000000,
    0x80031261, 0x3d060220, 0x00442b26, 0x00000000,
    0x80021161, 0x21470220, 0x00423107, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80021b61, 0x41070220, 0x00422327, 0x00000000,
    0x80023761, 0x43070220, 0x00422347, 0x00000000,
    0x80031d62, 0x2d060aa0, 0x4a442706, 0x00445706,
    0x80021b61, 0x39070220, 0x00422127, 0x00000000,
    0x80023661, 0x3b070220, 0x00422167, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80021b62, 0x3f070aa0, 0x5a424107, 0x00424307,
    0x80031261, 0x27260220, 0x00442d06, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80021a62, 0x37070aa0, 0x5a423907, 0x00423b07,
    0x80021261, 0x23470220, 0x00423f07, 0x00000000,
    0x80021a61, 0x5b070220, 0x00422727, 0x00000000,
    0x80020061, 0x5d070220, 0x00422747, 0x00000000,
    0x80031c62, 0x2d060aa0, 0x4a442906, 0x00446506,
    0x80021261, 0x21670220, 0x00423707, 0x00000000,
    0x80021c61, 0x47070220, 0x00422327, 0x00000000,
    0x80023561, 0x49070220, 0x00422367, 0x00000000,
    0x80021c62, 0x59070aa0, 0x4a425b07, 0x00425d07,
    0x80031261, 0x29260220, 0x00442d06, 0x00000000,
    0x80021c62, 0x21850aa0, 0x5a002164, 0x00342185,
    0x80021c62, 0x22850aa0, 0x5a002264, 0x00342285,
    0x80021a62, 0x45070aa0, 0x5a424707, 0x00424907,
    0x80021461, 0x27470220, 0x00425907, 0x00000000,
    0x80021a61, 0x69070220, 0x00422927, 0x00000000,
    0x80023761, 0x6b070220, 0x00422947, 0x00000000,
    0x80031c62, 0x2d060aa0, 0x5a442506, 0x00442f06,
    0x80031362, 0x22050aa0, 0x5a0021e4, 0x00462205,
    0x80021361, 0x23670220, 0x00424507, 0x00000000,
    0x80021c61, 0x61070220, 0x00422727, 0x00000000,
    0x80020061, 0x63070220, 0x00422767, 0x00000000,
    0x80021c62, 0x67070aa0, 0x4a426907, 0x00426b07,
    0x80031361, 0x25260220, 0x00442d06, 0x00000000,
    0x80021c62, 0x23850aa0, 0x5a002364, 0x00342385,
    0x80021c62, 0x24850aa0, 0x5a002464, 0x00342485,
    0x80021a62, 0x5f070aa0, 0x4a426107, 0x00426307,
    0x80021461, 0x29470220, 0x00426707, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021a61, 0x4d070220, 0x00422527, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80023161, 0x4f070220, 0x00422547, 0x00000000,
    0x80031c62, 0x2d060aa0, 0x4a442b06, 0x00443d06,
    0x80031362, 0x24050aa0, 0x5a0023e4, 0x00462405,
    0x80021361, 0x27670220, 0x00425f07, 0x00000000,
    0x80021c61, 0x6f070220, 0x00422927, 0x00000000,
    0x80020061, 0x71070220, 0x00422967, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80021c62, 0x4b070aa0, 0x5a424d07, 0x00424f07,
    0x80031361, 0x2b260220, 0x00442d06, 0x00000000,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x2d050220, 0x020024e4, 0x000022e4,
    0x80021d62, 0x27850aa0, 0x4a002764, 0x00342785,
    0x80021d62, 0x28850aa0, 0x4a002864, 0x00342885,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80021b62, 0x6d070aa0, 0x4a426f07, 0x00427107,
    0x80021461, 0x25470220, 0x00424b07, 0x00000000,
    0x80021b61, 0x75070220, 0x00422b27, 0x00000000,
    0x80020061, 0x77070220, 0x00422b47, 0x00000000,
    0x80031262, 0x28050aa0, 0x4a0027e4, 0x00462805,
    0x80021261, 0x29670220, 0x00426d07, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80021c61, 0x53070220, 0x00422527, 0x00000000,
    0x80023c61, 0x55070220, 0x00422567, 0x00000000,
    0x80021c62, 0x73070aa0, 0x4a427507, 0x00427707,
    0x80021b62, 0x29850aa0, 0x4a002964, 0x00342985,
    0x80021b62, 0x2a850aa0, 0x4a002a64, 0x00342a85,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x51070aa0, 0x5a425307, 0x00425507,
    0x80021461, 0x2b470220, 0x00427307, 0x00000000,
    0x80031262, 0x2a050aa0, 0x4a0029e4, 0x00462a05,
    0x80021261, 0x25670220, 0x00425107, 0x00000000,
    0x80021a61, 0x7b070220, 0x00422b27, 0x00000000,
    0x80020061, 0x7d070220, 0x00422b67, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x21050220, 0x02002ae4, 0x000028e4,
    0x80021c62, 0x25850aa0, 0x5a002564, 0x00342585,
    0x80021c62, 0x26850aa0, 0x5a002664, 0x00342685,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80021a62, 0x79070aa0, 0x4a427b07, 0x00427d07,
    0x00040070, 0x00018660, 0x16461505, 0x00000002,
    0x80031262, 0x26050aa0, 0x5a0025e4, 0x00462605,
    0x80021261, 0x2b670220, 0x00427907, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x2f230062, 0x2d012683, 0x80021a62, 0x2b850aa0,
    0x4a002b64, 0x00342b85, 0x80021a62, 0x2c850aa0,
    0x4a002c64, 0x00342c85, 0x80031162, 0x2c050aa0,
    0x4a002be4, 0x00462c05, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x2f250062, 0x21012c83,
    0x00040070, 0x00018660, 0x16461705, 0x00000000,
    0x2f211a62, 0x25202300, 0x00040070, 0x00018660,
    0x26461905, 0x00000000, 0x01040022, 0x0001c060,
    0x00000060, 0x00000060, 0x60231141, 0x00601d02,
    0x601d1941, 0x00301702, 0x00040952, 0x25040e68,
    0x0e0e2305, 0x1d051505, 0x00041969, 0x1d058660,
    0x02462505, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044d31, 0x00000000,
    0xea2a1d14, 0x01002114, 0x00040025, 0x00004600,
    0x00000000, 0x00000068, 0x00043d64, 0x1d050660,
    0x00461f05, 0x00000000, 0x80000061, 0x7f064210,
    0x00000000, 0x00000000, 0x80001961, 0x30010110,
    0x00007f04, 0x00000000, 0x00041b70, 0x00018220,
    0x22461d05, 0x00000000, 0x00040061, 0x1d050120,
    0x00003000, 0x00000000, 0x20011965, 0x1d000103,
    0x00040027, 0x00014060, 0x00000000, 0xfffff5b8,
    0x80030061, 0x45054010, 0x00000000, 0x76543210,
    0x80031961, 0x45050120, 0x00464505, 0x00000000,
    0xe4461940, 0x00804503, 0xe3451969, 0x00204503,
    0xe3451940, 0x08004503, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049e31, 0x43160100,
    0xfa004514, 0x04000000, 0x80002e01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x00010660,
    0x20464305, 0x00000000, 0x01040022, 0x0001c060,
    0x00000300, 0x00000300, 0x80030061, 0x70054010,
    0x00000000, 0x76543210, 0x80031961, 0x70050120,
    0x00467005, 0x00000000, 0xe4711940, 0x00807003,
    0xe3701969, 0x00207003, 0xe3701940, 0x14007003,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80003765, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80003766, 0x10218220, 0x02001020, 0x0000000f,
    0x80049731, 0x6e160100, 0xfa007014, 0x04000000,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x28058660, 0x02466e05, 0x00000002,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xa0630040, 0x48002803, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044f31, 0x00000000,
    0xea106314, 0x01000000, 0x80033061, 0x31054010,
    0x00000000, 0x76543210, 0x80031961, 0x31050120,
    0x00463105, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0xe4321940, 0x00803103,
    0xe3311969, 0x00203103, 0xe3311940, 0x00003103,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80003065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80003066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049031, 0x2f160100, 0xfa003114, 0x04000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x00043869, 0x29058660, 0x02462f05, 0x00000002,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xa0643f40, 0x4c002903, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x00000000,
    0xea106414, 0x01000000, 0x80030061, 0x3a054010,
    0x00000000, 0x76543210, 0x80031961, 0x3a050120,
    0x00463a05, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xe43b1940, 0x00803a03,
    0xe33a1969, 0x00203a03, 0xe33a1940, 0x04003a03,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049631, 0x38160100, 0xfa003a14, 0x04000000,
    0x80002601, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x2a058660, 0x02463805, 0x00000002,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xa0653740, 0x50002a03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x00000000,
    0xea106514, 0x01000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x2b0c0000,
    0xe23e000c, 0x00040000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80030061, 0x2c054220,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80011961, 0x2c550000,
    0x0000005c, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80044131, 0x00000000,
    0x30082c0c, 0x00000000, 0x80040001, 0x00000000,
    0xe0000000, 0x00000000, 0x80031661, 0x7c054010,
    0x00000000, 0x76543210, 0x80031961, 0x7c050120,
    0x00467c05, 0x00000000, 0xe47d0940, 0x00807c03,
    0xe37c1969, 0x00207c03, 0xe37c1940, 0x18007c03,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049231, 0x7a160100, 0xfa007c14, 0x04000000,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x3c050220, 0x00467a05, 0x00000000,
    0x00041970, 0x00018220, 0x42463c05, 0x00000120,
    0x01040028, 0x0001c660, 0x00000408, 0x00000408,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x66058660, 0x02463c05, 0x00000002,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x6b140000, 0xea046614, 0x00040000,
    0xae002770, 0x7f806b01, 0x01040022, 0x0001c060,
    0x00000388, 0x00000388, 0x80033361, 0x61054010,
    0x00000000, 0x76543210, 0x80033761, 0x64054010,
    0x00000000, 0x76543210, 0x80033961, 0x51054010,
    0x00000000, 0x76543210, 0x80031b61, 0x61050120,
    0x00466105, 0x00000000, 0x80031b61, 0x64050120,
    0x00466405, 0x00000000, 0x80031b61, 0x51050120,
    0x00465105, 0x00000000, 0xe4621b40, 0x00806103,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xe4651b40, 0x00806403, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0xe4521b40, 0x00805103,
    0xe3611b69, 0x00206103, 0xe3641b69, 0x00206403,
    0xe3511b69, 0x00205103, 0xe3611b40, 0x10006103,
    0xe3641b40, 0x10006403, 0xe3511b40, 0x0c005103,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049331, 0x5f160100, 0xfa006114, 0x04000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049731, 0x62160100, 0xfa006414, 0x04000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049931, 0x4f160100, 0xfa005114, 0x04000000,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0xa02d0040, 0x02c05f03, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x272f0070, 0x62002d03,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xa0313740, 0x66002d02, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x27330070, 0x2d003103,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x67060220, 0x00343105, 0x00000000,
    0x80103701, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x69060220, 0x00343205, 0x00000000,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x35042e68, 0x0e2e2f05, 0x33054f05,
    0x00131961, 0x69260220, 0x00343605, 0x00000000,
    0x00031a61, 0x67260220, 0x00343505, 0x00000000,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x36140000, 0xfb2a6724, 0x01006b14,
    0x00040025, 0x00004600, 0x00000000, 0x00000018,
    0xa03c0040, 0x20003c03, 0x00040027, 0x00014060,
    0x00000000, 0xfffffbe8, 0x80033461, 0x02054010,
    0x00000000, 0x76543210, 0x80031961, 0x02050120,
    0x00460205, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xe4030940, 0x00800203,
    0xe3021969, 0x00200203, 0xe3021940, 0x18000203,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000000f,
    0x80049431, 0x7d160100, 0xfa000214, 0x04000000,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x00040070, 0x00018220, 0x42467d05, 0x00000030,
    0x01040028, 0x0001c660, 0x000005e0, 0x000005e0,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80031661, 0x05054010, 0x00000000, 0x76543210,
    0x80031961, 0x05050120, 0x00460505, 0x00000000,
    0xe4060940, 0x00800503, 0xe3051969, 0x00200503,
    0xe3051940, 0x18000503, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049531, 0x03160100,
    0xfa000514, 0x04000000, 0x80002501, 0x00000000,
    0x00000000, 0x00000000, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x37058660,
    0x02460305, 0x00000002, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0xa06c0040, 0x48003703,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x71140000, 0xea046c14, 0x00040000,
    0x00042770, 0x00018660, 0x26467105, 0x00000000,
    0x01040022, 0x0001c060, 0x00000338, 0x00000338,
    0x80033761, 0x67054010, 0x00000000, 0x76543210,
    0x80033761, 0x6a054010, 0x00000000, 0x76543210,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80031761, 0x54054010, 0x00000000, 0x76543210,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80031b61, 0x67050120, 0x00466705, 0x00000000,
    0x80031b61, 0x6a050120, 0x00466a05, 0x00000000,
    0x80031b61, 0x54050120, 0x00465405, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xe4681b40, 0x00806703, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0xe46b0940, 0x00806a03,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0xe4550b40, 0x00805403, 0xe3671b69, 0x00206703,
    0xe36a1b69, 0x00206a03, 0xe3541b69, 0x00205403,
    0xe3671b40, 0x10006703, 0xe36a1b40, 0x10006a03,
    0xe3541b40, 0x0c005403, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003765, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80003766, 0x10218220,
    0x02001020, 0x0000000f, 0x80049731, 0x65160100,
    0xfa006714, 0x04000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80003765, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80003766, 0x10218220,
    0x02001020, 0x0000000f, 0x80049731, 0x68160100,
    0xfa006a14, 0x04000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80003c65, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80003c66, 0x10218220,
    0x02001020, 0x0000000f, 0x80049c31, 0x52160100,
    0xfa005414, 0x04000000, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xa0390040, 0x4ac06503,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x273b0070, 0x68003903, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0xa03d0040, 0x37003902,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x273f0070, 0x39003d03, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x6d060220,
    0x00343d05, 0x00000000, 0x80103701, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x6f060220,
    0x00343e05, 0x00000000, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x41042e68,
    0x0e2e3b05, 0x3f055205, 0x00131961, 0x6f260220,
    0x00344205, 0x00000000, 0x00031a61, 0x6d260220,
    0x00344105, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x42140000,
    0xfb186d24, 0x01007114, 0x00040025, 0x00004600,
    0x00000000, 0x00000168, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80031361, 0x08054010,
    0x00000000, 0x76543210, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80031761, 0x0c054010,
    0x00000000, 0x76543210, 0x80031a61, 0x08050120,
    0x00460805, 0x00000000, 0x80031a61, 0x0c050120,
    0x00460c05, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xe4092040, 0x00800803,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0xe40d0a40, 0x00800c03, 0xe3081a69, 0x00200803,
    0xe30c1a69, 0x00200c03, 0xe3081a40, 0x18000803,
    0xe30c1a40, 0x18000c03, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x10218220,
    0x020000a4, 0xfffffc00, 0x80000066, 0x10218220,
    0x02001020, 0x0000000f, 0x80049031, 0x06160100,
    0xfa000814, 0x04000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa00a1740, 0x20000603,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x10218220, 0x020000a4, 0xfffffc00,
    0x80000066, 0x10218220, 0x02001020, 0x0000008f,
    0x00049031, 0x00020100, 0xfa080c14, 0x04000a04,
    0x00040027, 0x00014060, 0x00000000, 0xfffff968,
    0x80030a61, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_BFS_BFS_pass1_indexed = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 1024,
      .base.total_shared = 1344,
      .base.program_size = 20880,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_BFS_BFS_pass1_indexed_relocs,
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
   .args = gfx125_bvh_build_BFS_BFS_pass1_indexed_args,
   .code = gfx125_bvh_build_BFS_BFS_pass1_indexed_code,
};
const char *gfx125_bvh_build_BFS_BFS_pass1_indexed_sha1 = "66a6db4dcfb3bb675da54f1d2dd7cf7a44cd9b98";

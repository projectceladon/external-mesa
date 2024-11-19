#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_postbuild_info_decoded_size_relocs[] = {
};
static const u_printf_info gfx125_bvh_postbuild_info_decoded_size_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_postbuild_info_decoded_size_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g117<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g1UD            g117UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g12.1<2>F       0x0F             /* 0F */       { align1 1Q };
mov(8)          g12<2>F         0x0F             /* 0F */       { align1 1Q F@1 };
mov(8)          g8.1<2>UD       g12.1<8,4,2>UD                  { align1 1Q F@1 };
mov(8)          g10.1<2>UD      g12.1<8,4,2>UD                  { align1 1Q };
mov(8)          g8<2>UD         g12<8,4,2>UD                    { align1 1Q I@2 };
mov(8)          g10<2>UD        g12<8,4,2>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(8)          g14<1>D         g2<0,1,0>D      160D            { align1 1Q compacted };
cmp.l.f0.0(8)   g15<1>UD        g14<1,1,0>UD    0x000000a0UD    { align1 1Q I@1 compacted };
mov(8)          g17<2>UD        g14<4,4,1>UD                    { align1 1Q };
add(8)          g16<1>D         -g15<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@2 compacted };
mov(8)          g17.1<2>UD      g16<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g18UD           g17UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $1 };
add(8)          g20<1>D         g2<0,1,0>D      g18<1,1,0>D     { align1 1Q $1.dst compacted };
cmp.l.f0.0(8)   g21<1>UD        g20<1,1,0>UD    g2<0,1,0>UD     { align1 1Q I@1 compacted };
add(8)          g22<1>D         -g21<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@1 compacted };

LABEL16:
cmp.z.f0.0(8)   g23<1>D         g8.1<8,4,2>D    0D              { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g24<1>UD        g8<8,4,2>UD     g19<1,1,0>UD    { align1 1Q $1.dst compacted };
and.nz.f0.0(8)  null<1>UD       g23<8,8,1>UD    g24<8,8,1>UD    { align1 1Q I@1 };
(-f0.0) break(8) JIP:  LABEL0         UIP:  LABEL0              { align1 1Q };
shl(8)          g25<1>D         g8<8,4,2>D      0x00000003UD    { align1 1Q };
shl(8)          g26<1>D         g8.1<8,4,2>D    0x00000003UD    { align1 1Q };
shr(8)          g27<1>UD        g8<8,4,2>UD     0x0000001dUD    { align1 1Q compacted };
add(8)          g29<1>D         g20<1,1,0>D     g25<1,1,0>D     { align1 1Q I@3 compacted };
or(8)           g3<1>UD         g26<1,1,0>UD    g27<1,1,0>UD    { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g30<1>UD        g29<1,1,0>UD    g20<1,1,0>UD    { align1 1Q I@2 compacted };
mov(8)          g32<2>UD        g29<4,4,1>UD                    { align1 1Q $2.src };
add(8)          g34<1>D         g29<1,1,0>D     4D              { align1 1Q $4.src compacted };
add3(8)         g31<1>D         g22<8,8,1>D     g3<8,8,1>D      -g30<1,1,1>D { align1 1Q I@3 };
cmp.l.f0.0(8)   g35<1>UD        g34<1,1,0>UD    g29<1,1,0>UD    { align1 1Q I@2 compacted };
mov(8)          g37<2>UD        g34<4,4,1>UD                    { align1 1Q $3.src };
mov(8)          g32.1<2>UD      g31<4,4,1>UD                    { align1 1Q I@3 };
add(8)          g36<1>D         -g35<1,1,0>D    g31<1,1,0>D     { align1 1Q I@3 compacted };
mov(8)          g37.1<2>UD      g36<4,4,1>UD                    { align1 1Q I@1 };
shr(8)          g39<1>UD        g36<1,1,0>UD    0x0000001eUD    { align1 1Q compacted };
cmp.z.f0.0(8)   null<1>D        g39<8,8,1>D     2D              { align1 1Q I@1 };
(+f0.0) if(8)   JIP:  LABEL2          UIP:  LABEL1              { align1 1Q };
and(1)          g40<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(8)          g43<1>UD        g34<8,8,1>UD    0xfffffffcUD    { align1 1Q };
and(8)          g45<1>UD        g34<1,1,0>UD    0x00000003UD    { align1 1Q compacted };
mov(8)          g41<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(8)          g44<1>UD        g43<1,1,0>UD    0x00000003UD    { align1 1Q I@3 compacted };
mov(8)          g41<1>UD        g41<8,8,1>UW                    { align1 WE_all 1Q I@2 };
or(8)           g46<1>UD        g45<1,1,0>UD    g44<1,1,0>UD    { align1 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(8)          g42<1>UD        g41<1,1,0>UD    0x00000002UD    { align1 1Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
or(8)           g47<1>UD        g46<1,1,0>UD    g42<1,1,0>UD    { align1 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g40<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(8)         g48UD           g47UD           nullUD          0x42100b00                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d16u32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1Q @1 $5 };
mov(8)          g28<1>UW        g48<16,8,2>UW                   { align1 1Q $5.dst };
else(8)         JIP:  LABEL1          UIP:  LABEL1              { align1 1Q };

LABEL2:
cmp.z.f0.0(8)   null<1>D        g39<8,8,1>D     1D              { align1 1Q };
(+f0.0) if(8)   JIP:  LABEL4          UIP:  LABEL3              { align1 1Q };
send(8)         g49UD           g34UD           nullUD          0x02100b00                0x00000000
                            slm MsgDesc: ( load, a32, d16u32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1Q $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g1<1>UW         g49<16,8,2>UW                   { align1 1Q $4.dst };
else(8)         JIP:  LABEL3          UIP:  LABEL3              { align1 1Q };

LABEL4:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
send(8)         g50UD           g37UD           nullUD          0x04100b80                0x00000000
                            ugm MsgDesc: ( load, a64, d16u32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(8)          g1<1>UW         g50<16,8,2>UW                   { align1 1Q $3.dst };

LABEL3:
endif(8)        JIP:  LABEL1                                    { align1 1Q };
mov(8)          g28<1>UW        g1<8,8,1>UW                     { align1 1Q I@2 };

LABEL1:
endif(8)        JIP:  LABEL0                                    { align1 1Q };
shr(8)          g51<1>UD        g31<1,1,0>UD    0x0000001eUD    { align1 1Q compacted };
cmp.nz.f0.0(8)  null<1>W        g28<8,8,1>W     0W              { align1 1Q I@3 };
(+f0.0) if(8)   JIP:  LABEL6          UIP:  LABEL5              { align1 1Q };
cmp.z.f0.0(8)   null<1>D        g51<8,8,1>D     2D              { align1 1Q I@3 };
(+f0.0) if(8)   JIP:  LABEL8          UIP:  LABEL7              { align1 1Q };
and(1)          g52<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(8)          g55<1>UD        g29<8,8,1>UD    0xfffffffcUD    { align1 1Q };
and(8)          g57<1>UD        g29<1,1,0>UD    0x00000003UD    { align1 1Q compacted };
mov(8)          g53<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(8)          g56<1>UD        g55<1,1,0>UD    0x00000003UD    { align1 1Q I@3 compacted };
mov(8)          g53<1>UD        g53<8,8,1>UW                    { align1 WE_all 1Q I@2 };
or(8)           g58<1>UD        g57<1,1,0>UD    g56<1,1,0>UD    { align1 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(8)          g54<1>UD        g53<1,1,0>UD    0x00000002UD    { align1 1Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
or(8)           g59<1>UD        g58<1,1,0>UD    g54<1,1,0>UD    { align1 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g52<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(8)         g99UD           g59UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1Q @1 $6 };
else(8)         JIP:  LABEL7          UIP:  LABEL7              { align1 1Q };

LABEL8:
cmp.z.f0.0(8)   null<1>D        g51<8,8,1>D     1D              { align1 1Q };
(+f0.0) if(8)   JIP:  LABEL10         UIP:  LABEL9              { align1 1Q };
mov(1)          g115<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g115<1>UD       g115<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g60<1>UD        g115<0,1,0>UD                   { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g60<0,1,0>UD    0x00000002UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g61<1>UD        g[a0 416]<0,1,0>UD              { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g110<1>UD       g61<0,1,0>UD                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g62UD           g110UD          nullUD          0x0210c500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
mov(8)          g91<1>UD        g62<0,1,0>UD                    { align1 1Q };
else(8)         JIP:  LABEL9          UIP:  LABEL9              { align1 1Q };

LABEL10:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(8)         g91UD           g32UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $2 };

LABEL9:
endif(8)        JIP:  LABEL7                                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
mov(8)          g99<1>UD        g91<8,8,1>UD                    { align1 1Q @3 $2.dst };

LABEL7:
endif(8)        JIP:  LABEL11                                   { align1 1Q };
add(8)          g63<1>D         g12<8,4,2>D     g99<1,1,0>D     { align1 1Q @2 $6.dst compacted };
cmp.l.f0.0(8)   g64<1>UD        g63<8,8,1>UD    g12<8,4,2>UD    { align1 1Q I@1 };
add(8)          g65<1>D         -g64<8,8,1>D    g12.1<8,4,2>D   { align1 1Q I@1 };
mov(8)          g12<2>UD        g63<4,4,1>UD                    { align1 1Q };
mov(8)          g12.1<2>UD      g65<4,4,1>UD                    { align1 1Q I@1 };

LABEL11:
else(8)         JIP:  LABEL5          UIP:  LABEL5              { align1 1Q };

LABEL6:
cmp.z.f0.0(8)   null<1>D        g51<8,8,1>D     2D              { align1 1Q I@3 };
(+f0.0) if(8)   JIP:  LABEL13         UIP:  LABEL12             { align1 1Q };
and(1)          g66<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(8)          g69<1>UD        g29<8,8,1>UD    0xfffffffcUD    { align1 1Q };
and(8)          g71<1>UD        g29<1,1,0>UD    0x00000003UD    { align1 1Q compacted };
mov(8)          g67<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(8)          g70<1>UD        g69<1,1,0>UD    0x00000003UD    { align1 1Q I@3 compacted };
mov(8)          g67<1>UD        g67<8,8,1>UW                    { align1 WE_all 1Q I@2 };
or(8)           g72<1>UD        g71<1,1,0>UD    g70<1,1,0>UD    { align1 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(8)          g68<1>UD        g67<1,1,0>UD    0x00000002UD    { align1 1Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
or(8)           g73<1>UD        g72<1,1,0>UD    g68<1,1,0>UD    { align1 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g66<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(8)         g7UD            g73UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1Q @1 $8 };
else(8)         JIP:  LABEL12         UIP:  LABEL12             { align1 1Q };

LABEL13:
cmp.z.f0.0(8)   null<1>D        g51<8,8,1>D     1D              { align1 1Q };
(+f0.0) if(8)   JIP:  LABEL15         UIP:  LABEL14             { align1 1Q };
mov(1)          g116<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g116<1>UD       g116<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g74<1>UD        g116<0,1,0>UD                   { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g74<0,1,0>UD    0x00000002UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g75<1>UD        g[a0 416]<0,1,0>UD              { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g111<1>UD       g75<0,1,0>UD                    { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g76UD           g111UD          nullUD          0x0210c500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
mov(8)          g6<1>UD         g76<0,1,0>UD                    { align1 1Q };
else(8)         JIP:  LABEL14         UIP:  LABEL14             { align1 1Q };

LABEL15:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(8)         g6UD            g32UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $2 };

LABEL14:
endif(8)        JIP:  LABEL12                                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
mov(8)          g7<1>UD         g6<8,8,1>UD                     { align1 1Q @3 $2.dst };

LABEL12:
endif(8)        JIP:  LABEL5                                    { align1 1Q };
add(8)          g77<1>D         g10<8,4,2>D     g7<1,1,0>D      { align1 1Q @2 $8.dst compacted };
cmp.l.f0.0(8)   g78<1>UD        g77<8,8,1>UD    g10<8,4,2>UD    { align1 1Q I@1 };
add(8)          g79<1>D         -g78<8,8,1>D    g10.1<8,4,2>D   { align1 1Q I@1 };
mov(8)          g10<2>UD        g77<4,4,1>UD                    { align1 1Q };
mov(8)          g10.1<2>UD      g79<4,4,1>UD                    { align1 1Q I@1 };

LABEL5:
endif(8)        JIP:  LABEL0                                    { align1 1Q };
add(8)          g80<1>D         g8<8,4,2>D      1D              { align1 1Q compacted };
cmp.l.f0.0(8)   g81<1>UD        g80<8,8,1>UD    g8<8,4,2>UD     { align1 1Q I@1 };
add(8)          g82<1>D         -g81<8,8,1>D    g8.1<8,4,2>D    { align1 1Q I@1 };
mov(8)          g8<2>UD         g80<4,4,1>UD                    { align1 1Q };
mov(8)          g8.1<2>UD       g82<4,4,1>UD                    { align1 1Q I@1 };

LABEL0:
while(8)        JIP:  LABEL16                                   { align1 1Q };
add(8)          g83<1>D         g2<0,1,0>D      156D            { align1 1Q compacted };
mul(8)          acc0<1>UD       g19<8,8,1>UD    0x0038UW        { align1 1Q $1.dst };
mul(8)          g89<1>D         g19<1,1,0>D     56W             { align1 1Q compacted };
mul(8)          g93<1>D         g10<8,4,2>D     36W             { align1 1Q compacted };
mul(8)          g94<1>D         g10.1<8,4,2>D   36W             { align1 1Q compacted };
mul(8)          g97<1>D         g12<8,4,2>D     24W             { align1 1Q compacted };
mul(8)          g98<1>D         g12.1<8,4,2>D   24W             { align1 1Q compacted };
cmp.l.f0.0(8)   g84<1>UD        g83<1,1,0>UD    0x0000009cUD    { align1 1Q I@7 compacted };
mov(8)          g86<2>UD        g83<4,4,1>UD                    { align1 1Q };
mach(8)         g88<1>UD        g19<1,1,0>UD    0x00000038UD    { align1 1Q compacted AccWrEnable };
add(8)          g103<1>D        g89<1,1,0>D     8D              { align1 1Q I@7 compacted };
add(8)          g100<1>D        g93<1,1,0>D     g97<1,1,0>D     { align1 1Q I@6 compacted };
mov(8)          g112.1<2>D      g2.3<0,1,0>D                    { align1 1Q };
add(8)          g85<1>D         -g84<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@6 compacted };
mul(8)          acc0<1>UD       g10<8,4,2>UD    0x0024UW        { align1 1Q };
cmp.l.f0.0(8)   g101<1>UD       g100<1,1,0>UD   g93<1,1,0>UD    { align1 1Q I@4 compacted };
cmp.l.f0.0(8)   g104<1>UD       g103<1,1,0>UD   g89<1,1,0>UD    { align1 1Q I@6 compacted };
mov(8)          g112<2>D        g2.2<0,1,0>D                    { align1 1Q I@5 };
mov(8)          g86.1<2>UD      g85<4,4,1>UD                    { align1 1Q I@5 };
mach(8)         g92<1>UD        g10<8,4,2>UD    0x00000024UD    { align1 1Q compacted AccWrEnable };
add(8)          g105<1>D        -g104<1,1,0>D   g88<1,1,0>D     { align1 1Q I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(8)         g87UD           g86UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $10 };
add(8)          g95<1>D         g92<1,1,0>D     g94<1,1,0>D     { align1 1Q I@2 compacted };
mul(8)          acc0<1>UD       g12<8,4,2>UD    0x0018UW        { align1 1Q };
mach(8)         g96<1>UD        g12<8,4,2>UD    0x00000018UD    { align1 1Q compacted AccWrEnable };
add(8)          g5<1>D          g96<1,1,0>D     g98<1,1,0>D     { align1 1Q I@1 compacted };
add3(8)         g102<1>D        g95<8,8,1>D     g5<8,8,1>D      -g101<1,1,1>D { align1 1Q I@1 };
shl(8)          g90<1>D         g87<8,8,1>D     0x00000006UD    { align1 1Q $10.dst };
shr(8)          g4<1>UD         g87<1,1,0>UD    0x0000001aUD    { align1 1Q compacted };
add(8)          g106<1>D        g103<1,1,0>D    g90<1,1,0>D     { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g107<1>UD       g106<1,1,0>UD   g103<1,1,0>UD   { align1 1Q I@1 compacted };
add(8)          g114<1>D        g106<1,1,0>D    g100<1,1,0>D    { align1 1Q compacted };
add3(8)         g108<1>D        g105<8,8,1>D    g4<8,8,1>D      -g107<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g109<1>UD       g114<1,1,0>UD   g106<1,1,0>UD   { align1 1Q I@2 compacted };
add3(8)         g115<1>D        g108<8,8,1>D    g102<8,8,1>D    -g109<1,1,1>D { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g112UD          g114UD          0x04001584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1Q $11 };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(8)         nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1Q A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_postbuild_info_decoded_size_code[] = {
    0x80000065, 0x75058220, 0x02000004, 0xffffffc0,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00750c, 0x00340000,
    0x00030061, 0x0c264aa0, 0x00000000, 0x00000000,
    0x00031161, 0x0c064aa0, 0x00000000, 0x00000000,
    0x00031161, 0x08260220, 0x00440c26, 0x00000000,
    0x00030061, 0x0a260220, 0x00440c26, 0x00000000,
    0x00031a61, 0x08060220, 0x00440c06, 0x00000000,
    0x00031a61, 0x0a060220, 0x00440c06, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa10e0040, 0x0a010203, 0xf00f1970, 0x0a000e03,
    0x00030061, 0x11060220, 0x00340e05, 0x00000000,
    0xa1101a40, 0x02120f12, 0x00031961, 0x11260220,
    0x00341005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034131, 0x12140000,
    0xfb001114, 0x00040000, 0xa1142140, 0x12010202,
    0x30151970, 0x02101403, 0xa1161940, 0x02121512,
    0xbd171a70, 0x000e0823, 0x30182170, 0x130e0803,
    0x00031965, 0x00010220, 0x22461705, 0x00461805,
    0x11030028, 0x0001c660, 0x00000818, 0x00000818,
    0x00030069, 0x19058660, 0x02440806, 0x00000003,
    0x00030069, 0x1a058660, 0x02440826, 0x00000003,
    0xe11b0068, 0x01de0803, 0xa11d1b40, 0x19001402,
    0x21031a66, 0x1b001a03, 0x301e1a70, 0x14001d03,
    0x00033261, 0x20060220, 0x00341d05, 0x00000000,
    0xa1223440, 0x00401d03, 0x00031b52, 0x1f040e68,
    0x0e2e1605, 0x1e050305, 0x30231a70, 0x1d002203,
    0x00033361, 0x25060220, 0x00342205, 0x00000000,
    0x00031b61, 0x20260220, 0x00341f05, 0x00000000,
    0xa1241b40, 0x1f022302, 0x00031961, 0x25260220,
    0x00342405, 0x00000000, 0xe1270068, 0x01e02403,
    0x00031970, 0x00018660, 0x16462705, 0x00000002,
    0x01030022, 0x0001c060, 0x000001b8, 0x000000e8,
    0x80000065, 0x28058220, 0x020000a4, 0xfffffc00,
    0x00030065, 0x2b058220, 0x02462205, 0xfffffffc,
    0xe12d0065, 0x00302203, 0x80030061, 0x29054410,
    0x00000000, 0x76543210, 0xe12c1b69, 0x00302b03,
    0x80031a61, 0x29050120, 0x00462905, 0x00000000,
    0x212e1a66, 0x2c002d03, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xe12a0069, 0x00202903,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x212f1966, 0x2a002e03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02002804, 0x0000000f, 0x00039531, 0x300e0100,
    0xf6002f0c, 0x04020000, 0x00032561, 0x1c050110,
    0x00563006, 0x00000000, 0x00030024, 0x0001c060,
    0x000000e0, 0x000000e0, 0x00030070, 0x00018660,
    0x16462705, 0x00000001, 0x01030022, 0x0001c060,
    0x000000a0, 0x00000050, 0x00034431, 0x310c0000,
    0xe600220c, 0x00020000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00032461, 0x01050110,
    0x00563106, 0x00000000, 0x00030024, 0x0001c060,
    0x00000060, 0x00000060, 0x80001e01, 0x00000000,
    0x00000000, 0x00000000, 0x00034331, 0x320c0000,
    0xf7002514, 0x00020000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00032361, 0x01050110,
    0x00563206, 0x00000000, 0x00030025, 0x00004600,
    0x00000000, 0x00000020, 0x00031a61, 0x1c050110,
    0x00460105, 0x00000000, 0x00030025, 0x00004600,
    0x00000000, 0x00000590, 0xe1330068, 0x01e01f03,
    0x00031b70, 0x00018550, 0x25461c05, 0x00000000,
    0x01030022, 0x0001c060, 0x00000510, 0x00000298,
    0x00031b70, 0x00018660, 0x16463305, 0x00000002,
    0x01030022, 0x0001c060, 0x00000210, 0x000000d8,
    0x80000065, 0x34058220, 0x020000a4, 0xfffffc00,
    0x00030065, 0x37058220, 0x02461d05, 0xfffffffc,
    0xe1390065, 0x00301d03, 0x80030061, 0x35054410,
    0x00000000, 0x76543210, 0xe1381b69, 0x00303703,
    0x80031a61, 0x35050120, 0x00463505, 0x00000000,
    0x213a1a66, 0x38003903, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xe1360069, 0x00203503,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x213b1966, 0x36003a03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02003404, 0x0000000f, 0x00039631, 0x630e0100,
    0xfa003b0c, 0x04000000, 0x00030024, 0x0001c060,
    0x00000148, 0x00000148, 0x00030070, 0x00018660,
    0x16463305, 0x00000001, 0x01030022, 0x0001c060,
    0x000000f8, 0x000000d8, 0xe2730961, 0x00114004,
    0x80000965, 0x73058220, 0x02007304, 0xffffffff,
    0x8000194c, 0x3c050220, 0x00007304, 0x00000000,
    0x80001969, 0x10018220, 0x02003c04, 0x00000002,
    0x80000940, 0x10018220, 0x02001000, 0x00000200,
    0x80000961, 0x3d050220, 0x00010680, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80031961, 0x6e050220, 0x00003d04, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80004731, 0x3e0c0000, 0xea006e0c, 0x00300000,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x5b050220, 0x00003e04, 0x00000000,
    0x00030024, 0x0001c060, 0x00000030, 0x00000030,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00034231, 0x5b0c0000, 0xfb002014, 0x00000000,
    0x00030025, 0x00004600, 0x00000000, 0x00000030,
    0x80002601, 0x00000000, 0x00000000, 0x00000000,
    0x0003b261, 0x63050220, 0x00465b05, 0x00000000,
    0x00030025, 0x00004600, 0x00000000, 0x00000058,
    0xa13fa640, 0x630e0c02, 0x00031970, 0x40050220,
    0x52463f05, 0x00440c06, 0x00031940, 0x41052660,
    0x06464005, 0x00440c26, 0x00030061, 0x0c060220,
    0x00343f05, 0x00000000, 0x00031961, 0x0c260220,
    0x00344105, 0x00000000, 0x00030024, 0x0001c060,
    0x00000288, 0x00000288, 0x00031b70, 0x00018660,
    0x16463305, 0x00000002, 0x01030022, 0x0001c060,
    0x00000210, 0x000000d8, 0x80000065, 0x42058220,
    0x020000a4, 0xfffffc00, 0x00030065, 0x45058220,
    0x02461d05, 0xfffffffc, 0xe1470065, 0x00301d03,
    0x80030061, 0x43054410, 0x00000000, 0x76543210,
    0xe1461b69, 0x00304503, 0x80031a61, 0x43050120,
    0x00464305, 0x00000000, 0x21481a66, 0x46004703,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0xe1440069, 0x00204303, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x21491966, 0x44004803,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004204, 0x0000000f,
    0x00039831, 0x070e0100, 0xfa00490c, 0x04000000,
    0x00030024, 0x0001c060, 0x00000148, 0x00000148,
    0x00030070, 0x00018660, 0x16463305, 0x00000001,
    0x01030022, 0x0001c060, 0x000000f8, 0x000000d8,
    0xe2740961, 0x00114004, 0x80000965, 0x74058220,
    0x02007404, 0xffffffff, 0x8000194c, 0x4a050220,
    0x00007404, 0x00000000, 0x80001969, 0x10018220,
    0x02004a04, 0x00000002, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x4b050220,
    0x00010680, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80031961, 0x6f050220,
    0x00004b04, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80004931, 0x4c0c0000,
    0xea006f0c, 0x00300000, 0x80002901, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x06050220,
    0x00004c04, 0x00000000, 0x00030024, 0x0001c060,
    0x00000030, 0x00000030, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00034231, 0x060c0000,
    0xfb002014, 0x00000000, 0x00030025, 0x00004600,
    0x00000000, 0x00000030, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x0003b261, 0x07050220,
    0x00460605, 0x00000000, 0x00030025, 0x00004600,
    0x00000000, 0x00000058, 0xa14da840, 0x070e0a02,
    0x00031970, 0x4e050220, 0x52464d05, 0x00440a06,
    0x00031940, 0x4f052660, 0x06464e05, 0x00440a26,
    0x00030061, 0x0a060220, 0x00344d05, 0x00000000,
    0x00031961, 0x0a260220, 0x00344f05, 0x00000000,
    0x00030025, 0x00004600, 0x00000000, 0x00000058,
    0xa1500040, 0x001e0803, 0x00031970, 0x51050220,
    0x52465005, 0x00440806, 0x00031940, 0x52052660,
    0x06465105, 0x00440826, 0x00030061, 0x08060220,
    0x00345005, 0x00000000, 0x00031961, 0x08260220,
    0x00345205, 0x00000000, 0x00030027, 0x00014060,
    0x00000000, 0xfffff7c8, 0xa1530040, 0x09c10203,
    0x00032141, 0x20018220, 0x01461305, 0x00380038,
    0x61590041, 0x03801302, 0x615d0041, 0x024e0a02,
    0x615e0041, 0x024e0a22, 0x61610041, 0x018e0c02,
    0x61620041, 0x018e0c22, 0xf0541f70, 0x09c05303,
    0x00030061, 0x56060220, 0x00345305, 0x00000000,
    0xfe580049, 0x03801303, 0xa1671f40, 0x00805903,
    0xa1641e40, 0x61005d02, 0x00030061, 0x70260660,
    0x00000264, 0x00000000, 0xa1551e40, 0x02125412,
    0x00030041, 0x20018220, 0x01440a06, 0x00240024,
    0x30651c70, 0x5d006403, 0x30681e70, 0x59006703,
    0x00031d61, 0x70060660, 0x00000244, 0x00000000,
    0x00031d61, 0x56260220, 0x00345505, 0x00000000,
    0xfe5c0049, 0x024e0a03, 0xa1691c40, 0x58026802,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00034a31, 0x570c0000, 0xfb005614, 0x00000000,
    0xa15f1a40, 0x5e005c02, 0x00030041, 0x20018220,
    0x01440c06, 0x00180018, 0xfe600049, 0x018e0c03,
    0xa1051940, 0x62006002, 0x00031952, 0x66040e68,
    0x0e2e5f05, 0x65050505, 0x00032a69, 0x5a058660,
    0x02465705, 0x00000006, 0xe1040068, 0x01a05703,
    0xa16a1a40, 0x5a006702, 0x306b1970, 0x67006a03,
    0xa1720040, 0x64006a02, 0x00031a52, 0x6c040e68,
    0x0e2e6905, 0x6b050405, 0x306d1a70, 0x6a007203,
    0x00031952, 0x73040e68, 0x0e2e6c05, 0x6d056605,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034b31, 0x00000000, 0xfb087014, 0x00047214,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80030931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_postbuild_info_decoded_size = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 2848,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_postbuild_info_decoded_size_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_postbuild_info_decoded_size_printfs,
      .base.uses_atomic_load_store = false,
      .local_size = { 1, 1, 1 },
      .prog_offset = { 0, 0, 0 },
      .prog_mask = 1,
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
   .args = gfx125_bvh_postbuild_info_decoded_size_args,
   .code = gfx125_bvh_postbuild_info_decoded_size_code,
};
const char *gfx125_bvh_postbuild_info_decoded_size_sha1 = "3b800750348bd29b6ae6fb7c36ba4cdd70af4ca4";

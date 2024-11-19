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
mov(8)          g83<1>UW        0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g117UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g83<1>UD        g83<8,8,1>UW                    { align1 WE_all 1Q I@1 };
mov(8)          g16.1<2>F       0x0F             /* 0F */       { align1 1Q };
mov(8)          g16<2>F         0x0F             /* 0F */       { align1 1Q F@1 };
mov(8)          g12.1<2>UD      g16.1<8,4,2>UD                  { align1 1Q F@1 };
mov(8)          g14.1<2>UD      g16.1<8,4,2>UD                  { align1 1Q };
mov(8)          g12<2>UD        g16<8,4,2>UD                    { align1 1Q I@2 };
mov(8)          g14<2>UD        g16<8,4,2>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(8)          g18<1>D         g2<0,1,0>D      160D            { align1 1Q compacted };
cmp.l.f0.0(8)   g19<1>UD        g18<1,1,0>UD    0x000000a0UD    { align1 1Q I@1 compacted };
mov(8)          g102<2>UD       g18<4,4,1>UD                    { align1 1Q };
add(8)          g20<1>D         -g19<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@2 compacted };
mov(8)          g102.1<2>UD     g20<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g21UD           g102UD          nullUD          0x04203582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $1 };
add(8)          g23<1>D         g2<0,1,0>D      g21<1,1,0>D     { align1 1Q $1.dst compacted };
cmp.l.f0.0(8)   g24<1>UD        g23<1,1,0>UD    g2<0,1,0>UD     { align1 1Q I@1 compacted };
add(8)          g25<1>D         -g24<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@1 compacted };

LABEL16:
cmp.z.f0.0(8)   g26<1>D         g12.1<8,4,2>D   0D              { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g27<1>UD        g12<8,4,2>UD    g22<1,1,0>UD    { align1 1Q $1.dst compacted };
and.nz.f0.0(8)  null<1>UD       g26<8,8,1>UD    g27<8,8,1>UD    { align1 1Q I@1 };
(-f0.0) break(8) JIP:  LABEL0         UIP:  LABEL0              { align1 1Q };
shl(8)          g28<1>D         g12<8,4,2>D     0x00000003UD    { align1 1Q };
shl(8)          g29<1>D         g12.1<8,4,2>D   0x00000003UD    { align1 1Q };
shr(8)          g30<1>UD        g12<8,4,2>UD    0x0000001dUD    { align1 1Q compacted };
add(8)          g32<1>D         g23<1,1,0>D     g28<1,1,0>D     { align1 1Q I@3 compacted };
or(8)           g6<1>UD         g29<1,1,0>UD    g30<1,1,0>UD    { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g33<1>UD        g32<1,1,0>UD    g23<1,1,0>UD    { align1 1Q I@2 compacted };
mov(8)          g3<2>UD         g32<4,4,1>UD                    { align1 1Q $2.src };
add(8)          g104<1>D        g32<1,1,0>D     4D              { align1 1Q $4.src compacted };
add3(8)         g34<1>D         g25<8,8,1>D     g6<8,8,1>D      -g33<1,1,1>D { align1 1Q I@3 };
cmp.l.f0.0(8)   g35<1>UD        g104<1,1,0>UD   g32<1,1,0>UD    { align1 1Q I@2 compacted };
mov(8)          g105<2>UD       g104<4,4,1>UD                   { align1 1Q $3.src };
mov(8)          g3.1<2>UD       g34<4,4,1>UD                    { align1 1Q I@3 };
add(8)          g36<1>D         -g35<1,1,0>D    g34<1,1,0>D     { align1 1Q I@3 compacted };
mov(8)          g105.1<2>UD     g36<4,4,1>UD                    { align1 1Q I@1 };
shr(8)          g37<1>UD        g36<1,1,0>UD    0x0000001eUD    { align1 1Q compacted };
cmp.z.f0.0(8)   null<1>D        g37<8,8,1>D     2D              { align1 1Q I@1 };
(+f0.0) if(8)   JIP:  LABEL2          UIP:  LABEL1              { align1 1Q };
and(1)          g38<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shl(8)          g39<1>UD        g83<1,1,0>UD    0x00000002UD    { align1 1Q compacted };
and(8)          g40<1>UD        g104<8,8,1>UD   0xfffffffcUD    { align1 1Q };
and(8)          g42<1>UD        g104<1,1,0>UD   0x00000003UD    { align1 1Q compacted };
shl(8)          g41<1>UD        g40<1,1,0>UD    0x00000003UD    { align1 1Q I@2 compacted };
or(8)           g43<1>UD        g42<1,1,0>UD    g41<1,1,0>UD    { align1 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
or(8)           g103<1>UD       g43<1,1,0>UD    g39<1,1,0>UD    { align1 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g38<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(8)         g44UD           g103UD          nullUD          0x42100b00                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d16u32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1Q @1 $1 };
mov(8)          g113<2>UW       g44<8,8,1>UD                    { align1 1Q $1.dst };
mov(8)          g91<1>UW        g113<16,8,2>UW                  { align1 1Q I@1 };
else(8)         JIP:  LABEL1          UIP:  LABEL1              { align1 1Q };

LABEL2:
cmp.z.f0.0(8)   null<1>D        g37<8,8,1>D     1D              { align1 1Q };
(+f0.0) if(8)   JIP:  LABEL4          UIP:  LABEL3              { align1 1Q };
send(8)         g45UD           g104UD          nullUD          0x02100b00                0x00000000
                            slm MsgDesc: ( load, a32, d16u32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1Q $4 };
mov(8)          g31<1>UW        g45<16,8,2>UW                   { align1 1Q $4.dst };
else(8)         JIP:  LABEL3          UIP:  LABEL3              { align1 1Q };

LABEL4:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(8)         g46UD           g105UD          nullUD          0x04100b80                0x00000000
                            ugm MsgDesc: ( load, a64, d16u32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $3 };
mov(8)          g114<2>HF       g46<16,8,2>HF                   { align1 1Q $3.dst };
mov(8)          g31<1>UW        g114<16,8,2>UW                  { align1 1Q A@1 };

LABEL3:
endif(8)        JIP:  LABEL1                                    { align1 1Q };
mov(8)          g91<1>UW        g31<8,8,1>UW                    { align1 1Q I@2 };

LABEL1:
endif(8)        JIP:  LABEL0                                    { align1 1Q };
shr(8)          g47<1>UD        g34<1,1,0>UD    0x0000001eUD    { align1 1Q compacted };
cmp.nz.f0.0(8)  g48<1>W         g91<8,8,1>W     0W              { align1 1Q I@3 };
mov.nz.f0.0(8)  null<1>D        g48<8,8,1>W                     { align1 1Q I@1 };
(+f0.0) if(8)   JIP:  LABEL6          UIP:  LABEL5              { align1 1Q };
cmp.z.f0.0(8)   null<1>D        g47<8,8,1>D     2D              { align1 1Q I@4 };
(+f0.0) if(8)   JIP:  LABEL8          UIP:  LABEL7              { align1 1Q };
and(1)          g49<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shl(8)          g50<1>UD        g83<1,1,0>UD    0x00000002UD    { align1 1Q compacted };
and(8)          g51<1>UD        g32<8,8,1>UD    0xfffffffcUD    { align1 1Q };
and(8)          g53<1>UD        g32<1,1,0>UD    0x00000003UD    { align1 1Q compacted };
shl(8)          g52<1>UD        g51<1,1,0>UD    0x00000003UD    { align1 1Q I@2 compacted };
or(8)           g54<1>UD        g53<1,1,0>UD    g52<1,1,0>UD    { align1 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
or(8)           g106<1>UD       g54<1,1,0>UD    g50<1,1,0>UD    { align1 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g49<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(8)         g9UD            g106UD          nullUD          0x42101502                a0.1<0>UD
                            ugm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1Q @1 $3 };
else(8)         JIP:  LABEL7          UIP:  LABEL7              { align1 1Q };

LABEL8:
cmp.z.f0.0(8)   null<1>D        g47<8,8,1>D     1D              { align1 1Q };
(+f0.0) if(8)   JIP:  LABEL10         UIP:  LABEL9              { align1 1Q };
mov(1)          g115<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g115<1>UD       g115<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g56<1>UD        g115<0,1,0>UD                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
shl(1)          a0<1>UD         g56<0,1,0>UD    0x00000002UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000400UD    { align1 WE_all 1N A@1 };
mov(1)          g57<1>UD        g[a0]<0,1,0>UD                  { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g55UD           g57UD           nullUD          0x0210c500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
mov(8)          g8<1>UD         g55<0,1,0>UD                    { align1 1Q };
else(8)         JIP:  LABEL9          UIP:  LABEL9              { align1 1Q };

LABEL10:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(8)         g8UD            g3UD            nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $2 };

LABEL9:
endif(8)        JIP:  LABEL7                                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
mov(8)          g9<1>UD         g8<8,8,1>UD                     { align1 1Q @3 $2.dst };

LABEL7:
endif(8)        JIP:  LABEL11                                   { align1 1Q };
add(8)          g58<1>D         g16<8,4,2>D     g9<1,1,0>D      { align1 1Q @2 $3.dst compacted };
cmp.l.f0.0(8)   g59<1>UD        g58<8,8,1>UD    g16<8,4,2>UD    { align1 1Q I@1 };
add(8)          g60<1>D         -g59<8,8,1>D    g16.1<8,4,2>D   { align1 1Q I@1 };
mov(8)          g16<2>UD        g58<4,4,1>UD                    { align1 1Q };
mov(8)          g16.1<2>UD      g60<4,4,1>UD                    { align1 1Q I@1 };

LABEL11:
else(8)         JIP:  LABEL5          UIP:  LABEL5              { align1 1Q };

LABEL6:
cmp.z.f0.0(8)   null<1>D        g47<8,8,1>D     2D              { align1 1Q I@4 };
(+f0.0) if(8)   JIP:  LABEL13         UIP:  LABEL12             { align1 1Q };
and(1)          g61<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shl(8)          g62<1>UD        g83<1,1,0>UD    0x00000002UD    { align1 1Q compacted };
and(8)          g63<1>UD        g32<8,8,1>UD    0xfffffffcUD    { align1 1Q };
and(8)          g65<1>UD        g32<1,1,0>UD    0x00000003UD    { align1 1Q compacted };
shl(8)          g64<1>UD        g63<1,1,0>UD    0x00000003UD    { align1 1Q I@2 compacted };
or(8)           g66<1>UD        g65<1,1,0>UD    g64<1,1,0>UD    { align1 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
or(8)           g107<1>UD       g66<1,1,0>UD    g62<1,1,0>UD    { align1 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g61<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(8)         g11UD           g107UD          nullUD          0x42101502                a0.1<0>UD
                            ugm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1Q @1 $6 };
else(8)         JIP:  LABEL12         UIP:  LABEL12             { align1 1Q };

LABEL13:
cmp.z.f0.0(8)   null<1>D        g47<8,8,1>D     1D              { align1 1Q };
(+f0.0) if(8)   JIP:  LABEL15         UIP:  LABEL14             { align1 1Q };
mov(1)          g116<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g116<1>UD       g116<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g68<1>UD        g116<0,1,0>UD                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shl(1)          a0<1>UD         g68<0,1,0>UD    0x00000002UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000400UD    { align1 WE_all 1N A@1 };
mov(1)          g69<1>UD        g[a0]<0,1,0>UD                  { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g67UD           g69UD           nullUD          0x0210c500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
mov(8)          g10<1>UD        g67<0,1,0>UD                    { align1 1Q };
else(8)         JIP:  LABEL14         UIP:  LABEL14             { align1 1Q };

LABEL15:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(8)         g10UD           g3UD            nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $2 };

LABEL14:
endif(8)        JIP:  LABEL12                                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
mov(8)          g11<1>UD        g10<8,8,1>UD                    { align1 1Q @3 $2.dst };

LABEL12:
endif(8)        JIP:  LABEL5                                    { align1 1Q };
add(8)          g70<1>D         g14<8,4,2>D     g11<1,1,0>D     { align1 1Q @2 $6.dst compacted };
cmp.l.f0.0(8)   g71<1>UD        g70<8,8,1>UD    g14<8,4,2>UD    { align1 1Q I@1 };
add(8)          g72<1>D         -g71<8,8,1>D    g14.1<8,4,2>D   { align1 1Q I@1 };
mov(8)          g14<2>UD        g70<4,4,1>UD                    { align1 1Q };
mov(8)          g14.1<2>UD      g72<4,4,1>UD                    { align1 1Q I@1 };

LABEL5:
endif(8)        JIP:  LABEL0                                    { align1 1Q };
add(8)          g73<1>D         g12<8,4,2>D     1D              { align1 1Q compacted };
cmp.l.f0.0(8)   g74<1>UD        g73<8,8,1>UD    g12<8,4,2>UD    { align1 1Q I@1 };
add(8)          g75<1>D         -g74<8,8,1>D    g12.1<8,4,2>D   { align1 1Q I@1 };
mov(8)          g12<2>UD        g73<4,4,1>UD                    { align1 1Q };
mov(8)          g12.1<2>UD      g75<4,4,1>UD                    { align1 1Q I@1 };

LABEL0:
while(8)        JIP:  LABEL16                                   { align1 1Q };
add(8)          g76<1>D         g2<0,1,0>D      156D            { align1 1Q compacted };
mul(8)          acc0<1>UD       g22<8,8,1>UD    0x0038UW        { align1 1Q $1.dst };
mul(8)          g81<1>D         g22<1,1,0>D     56W             { align1 1Q compacted };
mul(8)          g85<1>D         g14<8,4,2>D     36W             { align1 1Q compacted };
mul(8)          g86<1>D         g14.1<8,4,2>D   36W             { align1 1Q compacted };
mul(8)          g89<1>D         g16<8,4,2>D     24W             { align1 1Q compacted };
mul(8)          g90<1>D         g16.1<8,4,2>D   24W             { align1 1Q compacted };
cmp.l.f0.0(8)   g77<1>UD        g76<1,1,0>UD    0x0000009cUD    { align1 1Q I@7 compacted };
mov(8)          g108<2>UD       g76<4,4,1>UD                    { align1 1Q };
mach(8)         g80<1>UD        g22<1,1,0>UD    0x00000038UD    { align1 1Q compacted AccWrEnable };
add(8)          g95<1>D         g81<1,1,0>D     8D              { align1 1Q I@7 compacted };
add(8)          g92<1>D         g85<1,1,0>D     g89<1,1,0>D     { align1 1Q I@6 compacted };
mov(8)          g110.1<2>D      g2.3<0,1,0>D                    { align1 1Q };
add(8)          g78<1>D         -g77<1,1,0>D    g2.1<0,1,0>D    { align1 1Q I@6 compacted };
mul(8)          acc0<1>UD       g14<8,4,2>UD    0x0024UW        { align1 1Q };
cmp.l.f0.0(8)   g93<1>UD        g92<1,1,0>UD    g85<1,1,0>UD    { align1 1Q I@4 compacted };
cmp.l.f0.0(8)   g96<1>UD        g95<1,1,0>UD    g81<1,1,0>UD    { align1 1Q I@6 compacted };
mov(8)          g110<2>D        g2.2<0,1,0>D                    { align1 1Q I@5 };
mov(8)          g108.1<2>UD     g78<4,4,1>UD                    { align1 1Q I@5 };
mach(8)         g84<1>UD        g14<8,4,2>UD    0x00000024UD    { align1 1Q compacted AccWrEnable };
add(8)          g97<1>D         -g96<1,1,0>D    g80<1,1,0>D     { align1 1Q I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(8)         g79UD           g108UD          nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1Q $8 };
add(8)          g87<1>D         g84<1,1,0>D     g86<1,1,0>D     { align1 1Q I@2 compacted };
mul(8)          acc0<1>UD       g16<8,4,2>UD    0x0018UW        { align1 1Q };
mach(8)         g88<1>UD        g16<8,4,2>UD    0x00000018UD    { align1 1Q compacted AccWrEnable };
add(8)          g7<1>D          g88<1,1,0>D     g90<1,1,0>D     { align1 1Q I@1 compacted };
add3(8)         g94<1>D         g87<8,8,1>D     g7<8,8,1>D      -g93<1,1,1>D { align1 1Q I@1 };
shl(8)          g82<1>D         g79<8,8,1>D     0x00000006UD    { align1 1Q $8.dst };
shr(8)          g5<1>UD         g79<1,1,0>UD    0x0000001aUD    { align1 1Q compacted };
add(8)          g98<1>D         g95<1,1,0>D     g82<1,1,0>D     { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g99<1>UD        g98<1,1,0>UD    g95<1,1,0>UD    { align1 1Q I@1 compacted };
add(8)          g112<1>D        g98<1,1,0>D     g92<1,1,0>D     { align1 1Q compacted };
add3(8)         g100<1>D        g97<8,8,1>D     g5<8,8,1>D      -g99<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g101<1>UD       g112<1,1,0>UD   g98<1,1,0>UD    { align1 1Q I@2 compacted };
add3(8)         g113<1>D        g100<8,8,1>D    g94<8,8,1>D     -g101<1,1,1>D { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         nullUD          g110UD          g112UD          0x04003586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1Q $9 };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(8)         nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1Q A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_postbuild_info_decoded_size_code[] = {
    0x80000065, 0x75058220, 0x02000004, 0xffffffc0,
    0x80030061, 0x53054410, 0x00000000, 0x76543210,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00750c, 0x00340000,
    0x80031961, 0x53050120, 0x00465305, 0x00000000,
    0x00030061, 0x10264aa0, 0x00000000, 0x00000000,
    0x00031161, 0x10064aa0, 0x00000000, 0x00000000,
    0x00031161, 0x0c260220, 0x00441026, 0x00000000,
    0x00030061, 0x0e260220, 0x00441026, 0x00000000,
    0x00031a61, 0x0c060220, 0x00441006, 0x00000000,
    0x00031a61, 0x0e060220, 0x00441006, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa1120040, 0x0a010203, 0xf0131970, 0x0a001203,
    0x00030061, 0x66060220, 0x00341205, 0x00000000,
    0xa1141a40, 0x02121312, 0x00031961, 0x66260220,
    0x00341405, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00034131, 0x15140000,
    0xfb046614, 0x000c0000, 0xa1172140, 0x15010202,
    0x30181970, 0x02101703, 0xa1191940, 0x02121812,
    0xbd1a1a70, 0x000e0c23, 0x301b2170, 0x160e0c03,
    0x00031965, 0x00010220, 0x22461a05, 0x00461b05,
    0x11030028, 0x0001c660, 0x00000768, 0x00000768,
    0x00030069, 0x1c058660, 0x02440c06, 0x00000003,
    0x00030069, 0x1d058660, 0x02440c26, 0x00000003,
    0xe11e0068, 0x01de0c03, 0xa1201b40, 0x1c001702,
    0x21061a66, 0x1e001d03, 0x30211a70, 0x17002003,
    0x00033261, 0x03060220, 0x00342005, 0x00000000,
    0xa1683440, 0x00402003, 0x00031b52, 0x22040e68,
    0x0e2e1905, 0x21050605, 0x30231a70, 0x20006803,
    0x00033361, 0x69060220, 0x00346805, 0x00000000,
    0x00031b61, 0x03260220, 0x00342205, 0x00000000,
    0xa1241b40, 0x22022302, 0x00031961, 0x69260220,
    0x00342405, 0x00000000, 0xe1250068, 0x01e02403,
    0x00031970, 0x00018660, 0x16462505, 0x00000002,
    0x01030022, 0x0001c060, 0x00000178, 0x000000c8,
    0x80000065, 0x26058220, 0x020000a4, 0xfffffc00,
    0xe1270069, 0x00205303, 0x00030065, 0x28058220,
    0x02466805, 0xfffffffc, 0xe12a0065, 0x00306803,
    0xe1291a69, 0x00302803, 0x212b1966, 0x29002a03,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x21671966, 0x27002b03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02002604, 0x0000000f, 0x00039131, 0x2c0e0100,
    0xf600670c, 0x04020000, 0x00032161, 0x71060210,
    0x00462c05, 0x00000000, 0x00031961, 0x5b050110,
    0x00567106, 0x00000000, 0x00030024, 0x0001c060,
    0x000000c0, 0x000000c0, 0x00030070, 0x00018660,
    0x16462505, 0x00000001, 0x01030022, 0x0001c060,
    0x00000080, 0x00000040, 0x00034431, 0x2d0c0000,
    0xe600680c, 0x00020000, 0x00032461, 0x1f050110,
    0x00562d06, 0x00000000, 0x00030024, 0x0001c060,
    0x00000050, 0x00000050, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00034331, 0x2e0c0000,
    0xf7006914, 0x00020000, 0x00032361, 0x72060990,
    0x00562e06, 0x00000000, 0x00030961, 0x1f050110,
    0x00567206, 0x00000000, 0x00030025, 0x00004600,
    0x00000000, 0x00000020, 0x00031a61, 0x5b050110,
    0x00461f05, 0x00000000, 0x00030025, 0x00004600,
    0x00000000, 0x00000520, 0xe12f0068, 0x01e02203,
    0x00031b70, 0x30058550, 0x25465b05, 0x00000000,
    0x00031961, 0x00010560, 0x20463005, 0x00000000,
    0x01030022, 0x0001c060, 0x00000490, 0x00000258,
    0x00031c70, 0x00018660, 0x16462f05, 0x00000002,
    0x01030022, 0x0001c060, 0x000001d0, 0x000000a8,
    0x80000065, 0x31058220, 0x020000a4, 0xfffffc00,
    0xe1320069, 0x00205303, 0x00030065, 0x33058220,
    0x02462005, 0xfffffffc, 0xe1350065, 0x00302003,
    0xe1341a69, 0x00303303, 0x21361966, 0x34003503,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x216a1966, 0x32003603, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02003104, 0x0000000f, 0x00039331, 0x090e0100,
    0xfa046a0c, 0x04040000, 0x00030024, 0x0001c060,
    0x00000138, 0x00000138, 0x00030070, 0x00018660,
    0x16462f05, 0x00000001, 0x01030022, 0x0001c060,
    0x000000e8, 0x000000c8, 0xe2730961, 0x00114004,
    0x80000965, 0x73058220, 0x02007304, 0xffffffff,
    0x8000194c, 0x38050220, 0x00007304, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02003804, 0x00000002,
    0x80000940, 0x10018220, 0x02001000, 0x00000400,
    0x80000961, 0x39050220, 0x00010000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80004531, 0x370c0000, 0xea00390c, 0x00300000,
    0x80002501, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x08050220, 0x00003704, 0x00000000,
    0x00030024, 0x0001c060, 0x00000030, 0x00000030,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00034231, 0x080c0000, 0xfb040314, 0x00040000,
    0x00030025, 0x00004600, 0x00000000, 0x00000030,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x0003b261, 0x09050220, 0x00460805, 0x00000000,
    0x00030025, 0x00004600, 0x00000000, 0x00000058,
    0xa13aa340, 0x090e1002, 0x00031970, 0x3b050220,
    0x52463a05, 0x00441006, 0x00031940, 0x3c052660,
    0x06463b05, 0x00441026, 0x00030061, 0x10060220,
    0x00343a05, 0x00000000, 0x00031961, 0x10260220,
    0x00343c05, 0x00000000, 0x00030024, 0x0001c060,
    0x00000248, 0x00000248, 0x00031c70, 0x00018660,
    0x16462f05, 0x00000002, 0x01030022, 0x0001c060,
    0x000001d0, 0x000000a8, 0x80000065, 0x3d058220,
    0x020000a4, 0xfffffc00, 0xe13e0069, 0x00205303,
    0x00030065, 0x3f058220, 0x02462005, 0xfffffffc,
    0xe1410065, 0x00302003, 0xe1401a69, 0x00303f03,
    0x21421966, 0x40004103, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x216b1966, 0x3e004203,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003d04, 0x0000000f,
    0x00039631, 0x0b0e0100, 0xfa046b0c, 0x04040000,
    0x00030024, 0x0001c060, 0x00000138, 0x00000138,
    0x00030070, 0x00018660, 0x16462f05, 0x00000001,
    0x01030022, 0x0001c060, 0x000000e8, 0x000000c8,
    0xe2740961, 0x00114004, 0x80000965, 0x74058220,
    0x02007404, 0xffffffff, 0x8000194c, 0x44050220,
    0x00007404, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80001969, 0x10018220,
    0x02004404, 0x00000002, 0x80000940, 0x10018220,
    0x02001000, 0x00000400, 0x80000961, 0x45050220,
    0x00010000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80004731, 0x430c0000,
    0xea00450c, 0x00300000, 0x80002701, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x0a050220,
    0x00004304, 0x00000000, 0x00030024, 0x0001c060,
    0x00000030, 0x00000030, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00034231, 0x0a0c0000,
    0xfb040314, 0x00040000, 0x00030025, 0x00004600,
    0x00000000, 0x00000030, 0x80002601, 0x00000000,
    0x00000000, 0x00000000, 0x0003b261, 0x0b050220,
    0x00460a05, 0x00000000, 0x00030025, 0x00004600,
    0x00000000, 0x00000058, 0xa146a640, 0x0b0e0e02,
    0x00031970, 0x47050220, 0x52464605, 0x00440e06,
    0x00031940, 0x48052660, 0x06464705, 0x00440e26,
    0x00030061, 0x0e060220, 0x00344605, 0x00000000,
    0x00031961, 0x0e260220, 0x00344805, 0x00000000,
    0x00030025, 0x00004600, 0x00000000, 0x00000058,
    0xa1490040, 0x001e0c03, 0x00031970, 0x4a050220,
    0x52464905, 0x00440c06, 0x00031940, 0x4b052660,
    0x06464a05, 0x00440c26, 0x00030061, 0x0c060220,
    0x00344905, 0x00000000, 0x00031961, 0x0c260220,
    0x00344b05, 0x00000000, 0x00030027, 0x00014060,
    0x00000000, 0xfffff878, 0xa14c0040, 0x09c10203,
    0x00032141, 0x20018220, 0x01461605, 0x00380038,
    0x61510041, 0x03801602, 0x61550041, 0x024e0e02,
    0x61560041, 0x024e0e22, 0x61590041, 0x018e1002,
    0x615a0041, 0x018e1022, 0xf04d1f70, 0x09c04c03,
    0x00030061, 0x6c060220, 0x00344c05, 0x00000000,
    0xfe500049, 0x03801603, 0xa15f1f40, 0x00805103,
    0xa15c1e40, 0x59005502, 0x00030061, 0x6e260660,
    0x00000264, 0x00000000, 0xa14e1e40, 0x02124d12,
    0x00030041, 0x20018220, 0x01440e06, 0x00240024,
    0x305d1c70, 0x55005c03, 0x30601e70, 0x51005f03,
    0x00031d61, 0x6e060660, 0x00000244, 0x00000000,
    0x00031d61, 0x6c260220, 0x00344e05, 0x00000000,
    0xfe540049, 0x024e0e03, 0xa1611c40, 0x50026002,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00034831, 0x4f0c0000, 0xfb046c14, 0x00040000,
    0xa1571a40, 0x56005402, 0x00030041, 0x20018220,
    0x01441006, 0x00180018, 0xfe580049, 0x018e1003,
    0xa1071940, 0x5a005802, 0x00031952, 0x5e040e68,
    0x0e2e5705, 0x5d050705, 0x00032869, 0x52058660,
    0x02464f05, 0x00000006, 0xe1050068, 0x01a04f03,
    0xa1621a40, 0x52005f02, 0x30631970, 0x5f006203,
    0xa1700040, 0x5c006202, 0x00031a52, 0x64040e68,
    0x0e2e6105, 0x63050505, 0x30651a70, 0x62007003,
    0x00031952, 0x71040e68, 0x0e2e6405, 0x65055e05,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034931, 0x00000000, 0xfb0c6e14, 0x000c7014,
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
      .base.program_size = 2704,
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
const char *gfx125_bvh_postbuild_info_decoded_size_sha1 = "e64482782e10e55bfe76d65d78b6a14dd50cebfa";

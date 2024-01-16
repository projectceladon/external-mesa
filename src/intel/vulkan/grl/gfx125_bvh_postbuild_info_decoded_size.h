#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_postbuild_info_decoded_size_relocs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_postbuild_info_decoded_size_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g111<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(8)          g79<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(1)          g112<1>UD       g111<0,1,0>UD   0x00000000UD    { align1 WE_all 1N I@2 compacted };
mov(8)          g20.1<2>F       0x0F             /* 0F */       { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g1UD            g112UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g20<2>F         0x0F             /* 0F */       { align1 1Q F@1 };
mov(8)          g10.1<2>UD      g20.1<8,4,2>UD                  { align1 1Q F@1 };
mov(8)          g10<2>UD        g20<8,4,2>UD                    { align1 1Q I@1 };
mov(8)          g8.1<2>UD       g10.1<8,4,2>UD                  { align1 1Q I@1 };
mov(8)          g6.1<2>UD       g10.1<8,4,2>UD                  { align1 1Q };
mov(8)          g8<2>UD         g10<8,4,2>UD                    { align1 1Q I@2 };
mov(8)          g6<2>UD         g10<8,4,2>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g18.1<2>F       g2.1<0,1,0>F                    { align1 1Q compacted };
mov(8)          g3.1<2>F        g2.3<0,1,0>F                    { align1 1Q };
mov(8)          g18<2>F         g2<0,1,0>F                      { align1 1Q F@2 compacted };
mov(8)          g3<2>F          g2.2<0,1,0>F                    { align1 1Q F@2 compacted };
add(8)          g21<1>D         g18<8,4,2>D     160D            { align1 1Q F@2 compacted };
cmp.l.f0.0(8)   g22<1>UD        g21<1,1,0>UD    0x000000a0UD    { align1 1Q I@1 compacted };
mov(8)          g99<2>UD        g21<4,4,1>UD                    { align1 1Q };
add(8)          g23<1>D         -g22<8,8,1>D    g18.1<8,4,2>D   { align1 1Q I@2 };
mov(8)          g99.1<2>UD      g23<4,4,1>UD                    { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(8)         g25UD           g99UD           nullUD          0x04203582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $1 };
add(8)          g27<1>D         g18<8,4,2>D     g25<1,1,0>D     { align1 1Q $1.dst compacted };
cmp.l.f0.0(8)   g28<1>UD        g27<8,8,1>UD    g18<8,4,2>UD    { align1 1Q I@1 };
add(8)          g29<1>D         -g28<8,8,1>D    g18.1<8,4,2>D   { align1 1Q I@1 };

LABEL16:
cmp.z.f0.0(8)   g30<1>D         g10.1<8,4,2>D   0D              { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g31<1>UD        g10<8,4,2>UD    g26<1,1,0>UD    { align1 1Q $1.dst compacted };
and.nz.f0.0(8)  null<1>UD       g30<8,8,1>UD    g31<8,8,1>UD    { align1 1Q I@1 };
(-f0.0) break(8) JIP:  LABEL0         UIP:  LABEL0              { align1 1Q };
shl(8)          g32<1>D         g10<8,4,2>D     0x00000003UD    { align1 1Q };
shl(8)          g33<1>D         g10.1<8,4,2>D   0x00000003UD    { align1 1Q };
shr(8)          g34<1>UD        g10<8,4,2>UD    0x0000001dUD    { align1 1Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(8)          g107<1>D        g27<1,1,0>D     g32<1,1,0>D     { align1 1Q I@3 compacted };
or(8)           g12<1>UD        g33<1,1,0>UD    g34<1,1,0>UD    { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g37<1>UD        g107<1,1,0>UD   g27<1,1,0>UD    { align1 1Q I@2 compacted };
mov(8)          g108<2>UD       g107<4,4,1>UD                   { align1 1Q $2.src };
add(8)          g101<1>D        g107<1,1,0>D    4D              { align1 1Q $4.src compacted };
add3(8)         g38<1>D         g29<8,8,1>D     g12<8,8,1>D     -g37<1,1,1>D { align1 1Q I@3 };
cmp.l.f0.0(8)   g41<1>UD        g101<1,1,0>UD   g107<1,1,0>UD   { align1 1Q I@2 compacted };
mov(8)          g102<2>UD       g101<4,4,1>UD                   { align1 1Q $3.src };
mov(8)          g108.1<2>UD     g38<4,4,1>UD                    { align1 1Q I@3 };
add(8)          g42<1>D         -g41<1,1,0>D    g38<1,1,0>D     { align1 1Q I@3 compacted };
mov(8)          g102.1<2>UD     g42<4,4,1>UD                    { align1 1Q I@1 };
shr(8)          g44<1>UD        g42<1,1,0>UD    0x0000001eUD    { align1 1Q compacted };
cmp.z.f0.0(8)   null<1>D        g44<8,8,1>D     2D              { align1 1Q I@1 };
(+f0.0) if(8)   JIP:  LABEL2          UIP:  LABEL1              { align1 1Q };
and(1)          g46<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(8)          g48<1>UD        g101<8,8,1>D    0xfffffffcUD    { align1 1Q };
shl(8)          g49<1>UD        g79<8,8,1>UW    0x00000002UD    { align1 1Q };
and(8)          g100<1>UD       g101<8,8,1>D    0x00000003UD    { align1 1Q $1.src };
shl(8)          g48<1>UD        g48<1,1,0>UD    0x00000003UD    { align1 1Q I@3 compacted };
or(8)           g100<1>UD       g100<1,1,0>UD   g48<1,1,0>UD    { align1 1Q I@1 compacted };
or(8)           g100<1>UD       g100<1,1,0>UD   g49<1,1,0>UD    { align1 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g46<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(8)         g45UD           g100UD          nullUD          0x42101502                a0.1<0>UD
                            ugm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 1Q @1 $1 };
mov(8)          g35<1>UW        g45<16,8,2>UW                   { align1 1Q $1.dst };
else(8)         JIP:  LABEL1          UIP:  LABEL1              { align1 1Q };

LABEL2:
cmp.z.f0.0(8)   null<1>D        g44<8,8,1>D     1D              { align1 1Q };
(+f0.0) if(8)   JIP:  LABEL4          UIP:  LABEL3              { align1 1Q };
send(8)         g50UD           g101UD          nullUD          0x02101502                0x00000000
                            slm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 1Q $4 };
mov(8)          g87<1>UW        g50<16,8,2>UW                   { align1 1Q $4.dst };
else(8)         JIP:  LABEL3          UIP:  LABEL3              { align1 1Q };

LABEL4:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
send(8)         g51UD           g102UD          nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $3 };
mov(8)          g87<1>UW        g51<16,8,2>UW                   { align1 1Q @2 $3.dst };

LABEL3:
endif(8)        JIP:  LABEL1                                    { align1 1Q };
mov(8)          g35<1>UW        g87<8,8,1>UW                    { align1 1Q I@2 };

LABEL1:
endif(8)        JIP:  LABEL0                                    { align1 1Q };
shr(8)          g52<1>UD        g38<1,1,0>UD    0x0000001eUD    { align1 1Q compacted };
cmp.nz.f0.0(8)  g53<1>W         g35<8,8,1>W     0W              { align1 1Q I@3 };
mov.nz.f0.0(8)  null<1>D        g53<8,8,1>W                     { align1 1Q I@1 };
(+f0.0) if(8)   JIP:  LABEL6          UIP:  LABEL5              { align1 1Q };
cmp.z.f0.0(8)   null<1>D        g52<8,8,1>D     2D              { align1 1Q I@4 };
(+f0.0) if(8)   JIP:  LABEL8          UIP:  LABEL7              { align1 1Q };
and(1)          g54<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(8)          g56<1>UD        g107<8,8,1>D    0xfffffffcUD    { align1 1Q };
shl(8)          g57<1>UD        g79<8,8,1>UW    0x00000002UD    { align1 1Q };
and(8)          g103<1>UD       g107<8,8,1>D    0x00000003UD    { align1 1Q $3.src };
shl(8)          g56<1>UD        g56<1,1,0>UD    0x00000003UD    { align1 1Q I@3 compacted };
or(8)           g103<1>UD       g103<1,1,0>UD   g56<1,1,0>UD    { align1 1Q I@1 compacted };
or(8)           g103<1>UD       g103<1,1,0>UD   g57<1,1,0>UD    { align1 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g54<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(8)         g14UD           g103UD          nullUD          0x42101502                a0.1<0>UD
                            ugm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 1Q @1 $3 };
else(8)         JIP:  LABEL7          UIP:  LABEL7              { align1 1Q };

LABEL8:
cmp.z.f0.0(8)   null<1>D        g52<8,8,1>D     1D              { align1 1Q };
(+f0.0) if(8)   JIP:  LABEL10         UIP:  LABEL9              { align1 1Q };
send(8)         g15UD           g107UD          nullUD          0x02101502                0x00000000
                            slm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 1Q $2 };
else(8)         JIP:  LABEL9          UIP:  LABEL9              { align1 1Q };

LABEL10:
send(8)         g15UD           g108UD          nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $2 };

LABEL9:
endif(8)        JIP:  LABEL7                                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
mov(8)          g14<1>UD        g15<8,8,1>UD                    { align1 1Q $2.dst };

LABEL7:
endif(8)        JIP:  LABEL11                                   { align1 1Q };
add(8)          g58<1>D         g6<8,4,2>D      g14<1,1,0>D     { align1 1Q @2 $3.dst compacted };
cmp.l.f0.0(8)   g59<1>UD        g58<8,8,1>UD    g6<8,4,2>UD     { align1 1Q I@1 };
add(8)          g60<1>D         -g59<8,8,1>D    g6.1<8,4,2>D    { align1 1Q I@1 };
mov(8)          g6<2>UD         g58<4,4,1>UD                    { align1 1Q };
mov(8)          g6.1<2>UD       g60<4,4,1>UD                    { align1 1Q I@1 };

LABEL11:
else(8)         JIP:  LABEL5          UIP:  LABEL5              { align1 1Q };

LABEL6:
cmp.z.f0.0(8)   null<1>D        g52<8,8,1>D     2D              { align1 1Q I@4 };
(+f0.0) if(8)   JIP:  LABEL13         UIP:  LABEL12             { align1 1Q };
and(1)          g61<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(8)          g63<1>UD        g107<8,8,1>D    0xfffffffcUD    { align1 1Q $2.src };
shl(8)          g64<1>UD        g79<8,8,1>UW    0x00000002UD    { align1 1Q };
and(8)          g106<1>UD       g107<8,8,1>D    0x00000003UD    { align1 1Q $5.src };
shl(8)          g63<1>UD        g63<1,1,0>UD    0x00000003UD    { align1 1Q I@3 compacted };
or(8)           g106<1>UD       g106<1,1,0>UD   g63<1,1,0>UD    { align1 1Q I@1 compacted };
or(8)           g106<1>UD       g106<1,1,0>UD   g64<1,1,0>UD    { align1 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g61<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(8)         g16UD           g106UD          nullUD          0x42101502                a0.1<0>UD
                            ugm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 ss ) surface_state_index 0  { align1 1Q @1 $5 };
else(8)         JIP:  LABEL12         UIP:  LABEL12             { align1 1Q };

LABEL13:
cmp.z.f0.0(8)   null<1>D        g52<8,8,1>D     1D              { align1 1Q };
(+f0.0) if(8)   JIP:  LABEL15         UIP:  LABEL14             { align1 1Q };
send(8)         g17UD           g107UD          nullUD          0x02101502                0x00000000
                            slm MsgDesc: ( load_cmask, a32, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat ) base_offset 0  { align1 1Q $2 };
else(8)         JIP:  LABEL14         UIP:  LABEL14             { align1 1Q };

LABEL15:
send(8)         g17UD           g108UD          nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $2 };

LABEL14:
endif(8)        JIP:  LABEL12                                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
mov(8)          g16<1>UD        g17<8,8,1>UD                    { align1 1Q $2.dst };

LABEL12:
endif(8)        JIP:  LABEL5                                    { align1 1Q };
add(8)          g65<1>D         g8<8,4,2>D      g16<1,1,0>D     { align1 1Q @2 $5.dst compacted };
cmp.l.f0.0(8)   g66<1>UD        g65<8,8,1>UD    g8<8,4,2>UD     { align1 1Q I@1 };
add(8)          g67<1>D         -g66<8,8,1>D    g8.1<8,4,2>D    { align1 1Q I@1 };
mov(8)          g8<2>UD         g65<4,4,1>UD                    { align1 1Q };
mov(8)          g8.1<2>UD       g67<4,4,1>UD                    { align1 1Q I@1 };

LABEL5:
endif(8)        JIP:  LABEL0                                    { align1 1Q };
add(8)          g68<1>D         g10<8,4,2>D     1D              { align1 1Q compacted };
cmp.l.f0.0(8)   g69<1>UD        g68<8,8,1>UD    g10<8,4,2>UD    { align1 1Q I@1 };
add(8)          g70<1>D         -g69<8,8,1>D    g10.1<8,4,2>D   { align1 1Q I@1 };
mov(8)          g10<2>UD        g68<4,4,1>UD                    { align1 1Q };
mov(8)          g10.1<2>UD      g70<4,4,1>UD                    { align1 1Q I@1 };

LABEL0:
while(8)        JIP:  LABEL16                                   { align1 1Q };
add(8)          g71<1>D         g18<8,4,2>D     156D            { align1 1Q compacted };
mul(8)          acc0<1>UD       g26<8,8,1>UD    0x0038UW        { align1 1Q $1.dst };
mul(8)          g77<1>D         g26<1,1,0>D     56W             { align1 1Q compacted };
mul(8)          g81<1>D         g8<8,4,2>D      36W             { align1 1Q compacted };
mul(8)          g82<1>D         g8.1<8,4,2>D    36W             { align1 1Q compacted };
mul(8)          g85<1>D         g6<8,4,2>D      24W             { align1 1Q compacted };
mul(8)          g86<1>D         g6.1<8,4,2>D    24W             { align1 1Q compacted };
cmp.l.f0.0(8)   g72<1>UD        g71<1,1,0>UD    0x0000009cUD    { align1 1Q I@7 compacted };
mov(8)          g109<2>UD       g71<4,4,1>UD                    { align1 1Q $2.src };
mach(8)         g76<1>UD        g26<1,1,0>UD    0x00000038UD    { align1 1Q compacted AccWrEnable };
add(8)          g91<1>D         g77<1,1,0>D     8D              { align1 1Q I@7 compacted };
add(8)          g88<1>D         g81<1,1,0>D     g85<1,1,0>D     { align1 1Q I@6 compacted };
add(8)          g73<1>D         -g72<8,8,1>D    g18.1<8,4,2>D   { align1 1Q I@5 };
mul(8)          acc0<1>UD       g8<8,4,2>UD     0x0024UW        { align1 1Q };
cmp.l.f0.0(8)   g89<1>UD        g88<1,1,0>UD    g81<1,1,0>UD    { align1 1Q I@3 compacted };
cmp.l.f0.0(8)   g92<1>UD        g91<1,1,0>UD    g77<1,1,0>UD    { align1 1Q I@5 compacted };
mov(8)          g109.1<2>UD     g73<4,4,1>UD                    { align1 1Q I@4 };
mach(8)         g80<1>UD        g8<8,4,2>UD     0x00000024UD    { align1 1Q compacted AccWrEnable };
add(8)          g93<1>D         -g92<1,1,0>D    g76<1,1,0>D     { align1 1Q I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(8)         g75UD           g109UD          nullUD          0x04101582                0x00000000
                            ugm MsgDesc: ( load_cmask, a64, d32, x, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat ) base_offset 0  { align1 1Q $6 };
add(8)          g83<1>D         g80<1,1,0>D     g82<1,1,0>D     { align1 1Q I@2 compacted };
mul(8)          acc0<1>UD       g6<8,4,2>UD     0x0018UW        { align1 1Q };
mach(8)         g84<1>UD        g6<8,4,2>UD     0x00000018UD    { align1 1Q compacted AccWrEnable };
add(8)          g13<1>D         g84<1,1,0>D     g86<1,1,0>D     { align1 1Q I@1 compacted };
add3(8)         g90<1>D         g83<8,8,1>D     g13<8,8,1>D     -g89<1,1,1>D { align1 1Q I@1 };
shl(8)          g78<1>D         g75<8,8,1>D     0x00000006UD    { align1 1Q $6.dst };
shr(8)          g5<1>UD         g75<1,1,0>UD    0x0000001aUD    { align1 1Q compacted };
add(8)          g94<1>D         g91<1,1,0>D     g78<1,1,0>D     { align1 1Q I@2 compacted };
cmp.l.f0.0(8)   g95<1>UD        g94<1,1,0>UD    g91<1,1,0>UD    { align1 1Q I@1 compacted };
add(8)          g110<1>D        g94<1,1,0>D     g88<1,1,0>D     { align1 1Q $6.src compacted };
add3(8)         g96<1>D         g93<8,8,1>D     g5<8,8,1>D      -g95<1,1,1>D { align1 1Q I@2 };
cmp.l.f0.0(8)   g97<1>UD        g110<1,1,0>UD   g94<1,1,0>UD    { align1 1Q I@2 compacted };
add3(8)         g111<1>D        g96<8,8,1>D     g90<8,8,1>D     -g97<1,1,1>D { align1 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(8)         nullUD          g3UD            g110UD          0x04003586                0x00000080
                            ugm MsgDesc: ( store_cmask, a64, d32, xy, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat ) base_offset 0  { align1 1Q $7 };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
mov(16)         acc0<1>F        0x0F             /* 0F */       { align1 WE_all 1H I@1 };
send(8)         nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open) mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1Q A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_postbuild_info_decoded_size_code[] = {
    0x80000065, 0x6f058220, 0x02000004, 0xffffffc0,
    0x80030061, 0x4f054410, 0x00000000, 0x76543210,
    0xe2701a40, 0x00016f03, 0x00030061, 0x14264aa0,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa00700c, 0x00340000, 0x00031161, 0x14064aa0,
    0x00000000, 0x00000000, 0x00031161, 0x0a260220,
    0x00441426, 0x00000000, 0x00031961, 0x0a060220,
    0x00441406, 0x00000000, 0x00031961, 0x08260220,
    0x00440a26, 0x00000000, 0x00030061, 0x06260220,
    0x00440a26, 0x00000000, 0x00031a61, 0x08060220,
    0x00440a06, 0x00000000, 0x00031a61, 0x06060220,
    0x00440a06, 0x00000000, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x21120061, 0x001102cc,
    0x00030061, 0x03260aa0, 0x00000264, 0x00000000,
    0x21121261, 0x00110204, 0x21031261, 0x00110244,
    0xa1151240, 0x0a0e1203, 0xf0161970, 0x0a001503,
    0x00030061, 0x63060220, 0x00341505, 0x00000000,
    0x00031a40, 0x17052660, 0x06461605, 0x00441226,
    0x00031961, 0x63260220, 0x00341705, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00034131, 0x19140000, 0xfb046314, 0x000c0000,
    0xa11b2140, 0x190e1202, 0x00031970, 0x1c050220,
    0x52461b05, 0x00441206, 0x00031940, 0x1d052660,
    0x06461c05, 0x00441226, 0xbd1e1a70, 0x000e0a23,
    0x301f2170, 0x1a0e0a03, 0x00031965, 0x00010220,
    0x22461e05, 0x00461f05, 0x11030028, 0x0001c660,
    0x00000608, 0x00000608, 0x00030069, 0x20058660,
    0x02440a06, 0x00000003, 0x00030069, 0x21058660,
    0x02440a26, 0x00000003, 0xe1220068, 0x01de0a03,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa16b1b40, 0x20001b02, 0x210c1a66, 0x22002103,
    0x30251a70, 0x1b006b03, 0x00033261, 0x6c060220,
    0x00346b05, 0x00000000, 0xa1653440, 0x00406b03,
    0x00031b52, 0x26040e68, 0x0e2e1d05, 0x25050c05,
    0x30291a70, 0x6b006503, 0x00033361, 0x66060220,
    0x00346505, 0x00000000, 0x00031b61, 0x6c260220,
    0x00342605, 0x00000000, 0xa12a1b40, 0x26022902,
    0x00031961, 0x66260220, 0x00342a05, 0x00000000,
    0xe12c0068, 0x01e02a03, 0x00031970, 0x00018660,
    0x16462c05, 0x00000002, 0x01030022, 0x0001c060,
    0x00000158, 0x000000b8, 0x80000065, 0x2e058220,
    0x020000a4, 0xfffffc00, 0x00030065, 0x30058620,
    0x02466505, 0xfffffffc, 0x00030069, 0x31058120,
    0x02464f05, 0x00000002, 0x00033165, 0x64058620,
    0x02466505, 0x00000003, 0xe1301b69, 0x00303003,
    0x21641966, 0x30006403, 0x21641966, 0x31006403,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02002e04, 0x0000000f,
    0x00039131, 0x2d0e0100, 0xfa04640c, 0x04040000,
    0x00032161, 0x23050110, 0x00562d06, 0x00000000,
    0x00030024, 0x0001c060, 0x000000b0, 0x000000b0,
    0x00030070, 0x00018660, 0x16462c05, 0x00000001,
    0x01030022, 0x0001c060, 0x00000070, 0x00000040,
    0x00034431, 0x320c0000, 0xea04650c, 0x00040000,
    0x00032461, 0x57050110, 0x00563206, 0x00000000,
    0x00030024, 0x0001c060, 0x00000040, 0x00000040,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0x00034331, 0x330c0000, 0xfb046614, 0x00040000,
    0x0003a361, 0x57050110, 0x00563306, 0x00000000,
    0x00030025, 0x00004600, 0x00000000, 0x00000020,
    0x00031a61, 0x23050110, 0x00465705, 0x00000000,
    0x00030025, 0x00004600, 0x00000000, 0x000003d0,
    0xe1340068, 0x01e02603, 0x00031b70, 0x35058550,
    0x25462305, 0x00000000, 0x00031961, 0x00010560,
    0x20463505, 0x00000000, 0x01030022, 0x0001c060,
    0x00000340, 0x000001b0, 0x00031c70, 0x00018660,
    0x16463405, 0x00000002, 0x01030022, 0x0001c060,
    0x00000128, 0x000000a8, 0x80000065, 0x36058220,
    0x020000a4, 0xfffffc00, 0x00030065, 0x38058620,
    0x02466b05, 0xfffffffc, 0x00030069, 0x39058120,
    0x02464f05, 0x00000002, 0x00033365, 0x67058620,
    0x02466b05, 0x00000003, 0xe1381b69, 0x00303803,
    0x21671966, 0x38006703, 0x21671966, 0x39006703,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003604, 0x0000000f,
    0x00039331, 0x0e0e0100, 0xfa04670c, 0x04040000,
    0x00030024, 0x0001c060, 0x00000090, 0x00000090,
    0x00030070, 0x00018660, 0x16463405, 0x00000001,
    0x01030022, 0x0001c060, 0x00000040, 0x00000030,
    0x00034231, 0x0f0c0000, 0xea046b0c, 0x00040000,
    0x00030024, 0x0001c060, 0x00000020, 0x00000020,
    0x00034231, 0x0f0c0000, 0xfb046c14, 0x00040000,
    0x00030025, 0x00004600, 0x00000000, 0x00000030,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x00032261, 0x0e050220, 0x00460f05, 0x00000000,
    0x00030025, 0x00004600, 0x00000000, 0x00000058,
    0xa13aa340, 0x0e0e0602, 0x00031970, 0x3b050220,
    0x52463a05, 0x00440606, 0x00031940, 0x3c052660,
    0x06463b05, 0x00440626, 0x00030061, 0x06060220,
    0x00343a05, 0x00000000, 0x00031961, 0x06260220,
    0x00343c05, 0x00000000, 0x00030024, 0x0001c060,
    0x000001a0, 0x000001a0, 0x00031c70, 0x00018660,
    0x16463405, 0x00000002, 0x01030022, 0x0001c060,
    0x00000128, 0x000000a8, 0x80000065, 0x3d058220,
    0x020000a4, 0xfffffc00, 0x00033265, 0x3f058620,
    0x02466b05, 0xfffffffc, 0x00030069, 0x40058120,
    0x02464f05, 0x00000002, 0x00033565, 0x6a058620,
    0x02466b05, 0x00000003, 0xe13f1b69, 0x00303f03,
    0x216a1966, 0x3f006a03, 0x216a1966, 0x40006a03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003d04, 0x0000000f,
    0x00039531, 0x100e0100, 0xfa046a0c, 0x04040000,
    0x00030024, 0x0001c060, 0x00000090, 0x00000090,
    0x00030070, 0x00018660, 0x16463405, 0x00000001,
    0x01030022, 0x0001c060, 0x00000040, 0x00000030,
    0x00034231, 0x110c0000, 0xea046b0c, 0x00040000,
    0x00030024, 0x0001c060, 0x00000020, 0x00000020,
    0x00034231, 0x110c0000, 0xfb046c14, 0x00040000,
    0x00030025, 0x00004600, 0x00000000, 0x00000030,
    0x80002501, 0x00000000, 0x00000000, 0x00000000,
    0x00032261, 0x10050220, 0x00461105, 0x00000000,
    0x00030025, 0x00004600, 0x00000000, 0x00000058,
    0xa141a540, 0x100e0802, 0x00031970, 0x42050220,
    0x52464105, 0x00440806, 0x00031940, 0x43052660,
    0x06464205, 0x00440826, 0x00030061, 0x08060220,
    0x00344105, 0x00000000, 0x00031961, 0x08260220,
    0x00344305, 0x00000000, 0x00030025, 0x00004600,
    0x00000000, 0x00000058, 0xa1440040, 0x001e0a03,
    0x00031970, 0x45050220, 0x52464405, 0x00440a06,
    0x00031940, 0x46052660, 0x06464505, 0x00440a26,
    0x00030061, 0x0a060220, 0x00344405, 0x00000000,
    0x00031961, 0x0a260220, 0x00344605, 0x00000000,
    0x00030027, 0x00014060, 0x00000000, 0xfffff9d8,
    0xa1470040, 0x09ce1203, 0x00032141, 0x20018220,
    0x01461a05, 0x00380038, 0x614d0041, 0x03801a02,
    0x61510041, 0x024e0802, 0x61520041, 0x024e0822,
    0x61550041, 0x018e0602, 0x61560041, 0x018e0622,
    0xf0481f70, 0x09c04703, 0x00033261, 0x6d060220,
    0x00344705, 0x00000000, 0xfe4c0049, 0x03801a03,
    0xa15b1f40, 0x00804d03, 0xa1581e40, 0x55005102,
    0x00031d40, 0x49052660, 0x06464805, 0x00441226,
    0x00030041, 0x20018220, 0x01440806, 0x00240024,
    0x30591b70, 0x51005803, 0x305c1d70, 0x4d005b03,
    0x00031c61, 0x6d260220, 0x00344905, 0x00000000,
    0xfe500049, 0x024e0803, 0xa15d1b40, 0x4c025c02,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00034631, 0x4b0c0000, 0xfb046d14, 0x00040000,
    0xa1531a40, 0x52005002, 0x00030041, 0x20018220,
    0x01440606, 0x00180018, 0xfe540049, 0x018e0603,
    0xa10d1940, 0x56005402, 0x00031952, 0x5a040e68,
    0x0e2e5305, 0x59050d05, 0x00032669, 0x4e058660,
    0x02464b05, 0x00000006, 0xe1050068, 0x01a04b03,
    0xa15e1a40, 0x4e005b02, 0x305f1970, 0x5b005e03,
    0xa16e3640, 0x58005e02, 0x00031a52, 0x60040e68,
    0x0e2e5d05, 0x5f050505, 0x30611a70, 0x5e006e03,
    0x00031952, 0x6f040e68, 0x0e2e6005, 0x61055a05,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00034731, 0x00000000, 0xfb0c0314, 0x000c6e14,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80041961, 0x20014aa0, 0x00000000, 0x00000000,
    0x80030931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_postbuild_info_decoded_size = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 2432,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_postbuild_info_decoded_size_relocs,
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
const char *gfx125_bvh_postbuild_info_decoded_size_sha1 = "fba6dfe349776da73b335d7dd125277983eed506";

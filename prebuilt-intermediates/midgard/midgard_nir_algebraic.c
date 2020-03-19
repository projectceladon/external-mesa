#include "midgard_nir.h"

#include "nir.h"
#include "nir_builder.h"
#include "nir_search.h"
#include "nir_search_helpers.h"

/* What follows is NIR algebraic transform code for the following 53
 * transforms:
 *    ('ineg', 'a') => ('isub', 0, 'a')
 *    ('b32csel', 'a', 'b@32', 0) => ('iand', 'a', 'b')
 *    ('b32csel', 'a', 0, 'b@32') => ('iand', ('inot', 'a'), 'b')
 *    ('u2u8', 'a@32') => ('u2u8', ('u2u16', 'a'))
 *    ('u2u8', 'a@64') => ('u2u8', ('u2u16', ('u2u32', 'a')))
 *    ('u2u16', 'a@64') => ('u2u16', ('u2u32', 'a'))
 *    ('u2u32', 'a@8') => ('u2u32', ('u2u16', 'a'))
 *    ('u2u64', 'a@8') => ('u2u64', ('u2u32', ('u2u16', 'a')))
 *    ('u2u64', 'a@16') => ('u2u64', ('u2u32', 'a'))
 *    ('i2i8', 'a@32') => ('i2i8', ('i2i16', 'a'))
 *    ('i2i8', 'a@64') => ('i2i8', ('i2i16', ('i2i32', 'a')))
 *    ('i2i16', 'a@64') => ('i2i16', ('i2i32', 'a'))
 *    ('i2i32', 'a@8') => ('i2i32', ('i2i16', 'a'))
 *    ('i2i64', 'a@8') => ('i2i64', ('i2i32', ('i2i16', 'a')))
 *    ('i2i64', 'a@16') => ('i2i64', ('i2i32', 'a'))
 *    ('f2f16', 'a@64') => ('f2f16', ('f2f32', 'a'))
 *    ('f2f64', 'a@16') => ('f2f64', ('f2f32', 'a'))
 *    ('i2f16', 'a@8') => ('i2f16', ('i2i16', 'a'))
 *    ('i2f16', 'a@32') => ('f2f16', ('i2f32', 'a'))
 *    ('i2f16', 'a@64') => ('f2f16', ('f2f32', ('i2f64', 'a')))
 *    ('i2f32', 'a@8') => ('i2f32', ('i2i32', ('i2i16', 'a')))
 *    ('i2f32', 'a@16') => ('i2f32', ('i2i32', 'a'))
 *    ('i2f32', 'a@64') => ('f2f32', ('i2f64', 'a'))
 *    ('i2f64', 'a@8') => ('i2f64', ('i2i64', ('i2i32', ('i2i16', 'a'))))
 *    ('i2f64', 'a@16') => ('i2f64', ('i2i64', ('i2i32', 'a')))
 *    ('i2f64', 'a@32') => ('i2f64', ('i2i64', 'a'))
 *    ('u2f16', 'a@8') => ('u2f16', ('u2u16', 'a'))
 *    ('u2f16', 'a@32') => ('f2f16', ('u2f32', 'a'))
 *    ('u2f16', 'a@64') => ('f2f16', ('f2f32', ('u2f64', 'a')))
 *    ('u2f32', 'a@8') => ('u2f32', ('u2u32', ('u2u16', 'a')))
 *    ('u2f32', 'a@16') => ('u2f32', ('u2u32', 'a'))
 *    ('u2f32', 'a@64') => ('f2f32', ('u2f64', 'a'))
 *    ('u2f64', 'a@8') => ('u2f64', ('u2u64', ('u2u32', ('u2u16', 'a'))))
 *    ('u2f64', 'a@16') => ('u2f64', ('u2u64', ('u2u32', 'a')))
 *    ('u2f64', 'a@32') => ('u2f64', ('u2u64', 'a'))
 *    ('f2i8', 'a@16') => ('i2i8', ('f2i16', 'a'))
 *    ('f2i8', 'a@32') => ('i2i8', ('i2i16', ('f2i32', 'a')))
 *    ('f2i8', 'a@64') => ('i2i8', ('i2i16', ('i2i32', ('f2i64', 'a'))))
 *    ('f2i16', 'a@32') => ('i2i16', ('f2i32', 'a'))
 *    ('f2i16', 'a@64') => ('i2i16', ('i2i32', ('f2i64', 'a')))
 *    ('f2i32', 'a@16') => ('f2i32', ('f2f32', 'a'))
 *    ('f2i32', 'a@64') => ('i2i32', ('f2i64', 'a'))
 *    ('f2i64', 'a@16') => ('f2i64', ('f2f64', ('f2f32', 'a')))
 *    ('f2i64', 'a@32') => ('f2i64', ('f2f64', 'a'))
 *    ('f2u8', 'a@16') => ('u2u8', ('f2u16', 'a'))
 *    ('f2u8', 'a@32') => ('u2u8', ('u2u16', ('f2u32', 'a')))
 *    ('f2u8', 'a@64') => ('u2u8', ('u2u16', ('u2u32', ('f2u64', 'a'))))
 *    ('f2u16', 'a@32') => ('u2u16', ('f2u32', 'a'))
 *    ('f2u16', 'a@64') => ('u2u16', ('u2u32', ('f2u64', 'a')))
 *    ('f2u32', 'a@16') => ('f2u32', ('f2f32', 'a'))
 *    ('f2u32', 'a@64') => ('u2u32', ('f2u64', 'a'))
 *    ('f2u64', 'a@16') => ('f2u64', ('f2f64', ('f2f32', 'a')))
 *    ('f2u64', 'a@32') => ('f2u64', ('f2f64', 'a'))
 */


   static const nir_search_variable search0_0 = {
   { nir_search_value_variable, -1 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
   {0, 1, 2, 3},
};
static const nir_search_expression search0 = {
   { nir_search_value_expression, -1 },
   false, false,
   -1, 0,
   nir_op_ineg,
   { &search0_0.value },
   NULL,
};

   static const nir_search_constant replace0_0 = {
   { nir_search_value_constant, -1 },
   nir_type_int, { 0x0 /* 0 */ },
};

/* replace0_1 -> search0_0 in the cache */
static const nir_search_expression replace0 = {
   { nir_search_value_expression, -1 },
   false, false,
   -1, 0,
   nir_op_isub,
   { &replace0_0.value, &search0_0.value },
   NULL,
};

   static const nir_search_variable search1_0 = {
   { nir_search_value_variable, 32 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
   {0, 1, 2, 3},
};

static const nir_search_variable search1_1 = {
   { nir_search_value_variable, 32 },
   1, /* b */
   false,
   nir_type_invalid,
   NULL,
   {0, 1, 2, 3},
};

static const nir_search_constant search1_2 = {
   { nir_search_value_constant, 32 },
   nir_type_int, { 0x0 /* 0 */ },
};
static const nir_search_expression search1 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_b32csel,
   { &search1_0.value, &search1_1.value, &search1_2.value },
   NULL,
};

   /* replace1_0 -> search1_0 in the cache */

/* replace1_1 -> search1_1 in the cache */
static const nir_search_expression replace1 = {
   { nir_search_value_expression, 32 },
   false, false,
   0, 1,
   nir_op_iand,
   { &search1_0.value, &search1_1.value },
   NULL,
};

   /* search2_0 -> search1_0 in the cache */

/* search2_1 -> search1_2 in the cache */

/* search2_2 -> search1_1 in the cache */
static const nir_search_expression search2 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_b32csel,
   { &search1_0.value, &search1_2.value, &search1_1.value },
   NULL,
};

   /* replace2_0_0 -> search1_0 in the cache */
static const nir_search_expression replace2_0 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_inot,
   { &search1_0.value },
   NULL,
};

/* replace2_1 -> search1_1 in the cache */
static const nir_search_expression replace2 = {
   { nir_search_value_expression, 32 },
   false, false,
   0, 1,
   nir_op_iand,
   { &replace2_0.value, &search1_1.value },
   NULL,
};

   /* search3_0 -> search1_0 in the cache */
static const nir_search_expression search3 = {
   { nir_search_value_expression, 8 },
   false, false,
   -1, 0,
   nir_op_u2u8,
   { &search1_0.value },
   NULL,
};

   /* replace3_0_0 -> search1_0 in the cache */
static const nir_search_expression replace3_0 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_u2u16,
   { &search1_0.value },
   NULL,
};
static const nir_search_expression replace3 = {
   { nir_search_value_expression, 8 },
   false, false,
   -1, 0,
   nir_op_u2u8,
   { &replace3_0.value },
   NULL,
};

   static const nir_search_variable search4_0 = {
   { nir_search_value_variable, 64 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
   {0, 1, 2, 3},
};
static const nir_search_expression search4 = {
   { nir_search_value_expression, 8 },
   false, false,
   -1, 0,
   nir_op_u2u8,
   { &search4_0.value },
   NULL,
};

   /* replace4_0_0_0 -> search4_0 in the cache */
static const nir_search_expression replace4_0_0 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_u2u32,
   { &search4_0.value },
   NULL,
};
static const nir_search_expression replace4_0 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_u2u16,
   { &replace4_0_0.value },
   NULL,
};
static const nir_search_expression replace4 = {
   { nir_search_value_expression, 8 },
   false, false,
   -1, 0,
   nir_op_u2u8,
   { &replace4_0.value },
   NULL,
};

   /* search5_0 -> search4_0 in the cache */
static const nir_search_expression search5 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_u2u16,
   { &search4_0.value },
   NULL,
};

   /* replace5_0_0 -> search4_0 in the cache */
/* replace5_0 -> replace4_0_0 in the cache */
/* replace5 -> replace4_0 in the cache */

   static const nir_search_variable search6_0 = {
   { nir_search_value_variable, 8 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
   {0, 1, 2, 3},
};
static const nir_search_expression search6 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_u2u32,
   { &search6_0.value },
   NULL,
};

   /* replace6_0_0 -> search6_0 in the cache */
static const nir_search_expression replace6_0 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_u2u16,
   { &search6_0.value },
   NULL,
};
static const nir_search_expression replace6 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_u2u32,
   { &replace6_0.value },
   NULL,
};

   /* search7_0 -> search6_0 in the cache */
static const nir_search_expression search7 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_u2u64,
   { &search6_0.value },
   NULL,
};

   /* replace7_0_0_0 -> search6_0 in the cache */
/* replace7_0_0 -> replace6_0 in the cache */
/* replace7_0 -> replace6 in the cache */
static const nir_search_expression replace7 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_u2u64,
   { &replace6.value },
   NULL,
};

   static const nir_search_variable search8_0 = {
   { nir_search_value_variable, 16 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
   {0, 1, 2, 3},
};
static const nir_search_expression search8 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_u2u64,
   { &search8_0.value },
   NULL,
};

   /* replace8_0_0 -> search8_0 in the cache */
static const nir_search_expression replace8_0 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_u2u32,
   { &search8_0.value },
   NULL,
};
static const nir_search_expression replace8 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_u2u64,
   { &replace8_0.value },
   NULL,
};

   /* search9_0 -> search1_0 in the cache */
static const nir_search_expression search9 = {
   { nir_search_value_expression, 8 },
   false, false,
   -1, 0,
   nir_op_i2i8,
   { &search1_0.value },
   NULL,
};

   /* replace9_0_0 -> search1_0 in the cache */
static const nir_search_expression replace9_0 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_i2i16,
   { &search1_0.value },
   NULL,
};
static const nir_search_expression replace9 = {
   { nir_search_value_expression, 8 },
   false, false,
   -1, 0,
   nir_op_i2i8,
   { &replace9_0.value },
   NULL,
};

   /* search10_0 -> search4_0 in the cache */
static const nir_search_expression search10 = {
   { nir_search_value_expression, 8 },
   false, false,
   -1, 0,
   nir_op_i2i8,
   { &search4_0.value },
   NULL,
};

   /* replace10_0_0_0 -> search4_0 in the cache */
static const nir_search_expression replace10_0_0 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_i2i32,
   { &search4_0.value },
   NULL,
};
static const nir_search_expression replace10_0 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_i2i16,
   { &replace10_0_0.value },
   NULL,
};
static const nir_search_expression replace10 = {
   { nir_search_value_expression, 8 },
   false, false,
   -1, 0,
   nir_op_i2i8,
   { &replace10_0.value },
   NULL,
};

   /* search11_0 -> search4_0 in the cache */
static const nir_search_expression search11 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_i2i16,
   { &search4_0.value },
   NULL,
};

   /* replace11_0_0 -> search4_0 in the cache */
/* replace11_0 -> replace10_0_0 in the cache */
/* replace11 -> replace10_0 in the cache */

   /* search12_0 -> search6_0 in the cache */
static const nir_search_expression search12 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_i2i32,
   { &search6_0.value },
   NULL,
};

   /* replace12_0_0 -> search6_0 in the cache */
static const nir_search_expression replace12_0 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_i2i16,
   { &search6_0.value },
   NULL,
};
static const nir_search_expression replace12 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_i2i32,
   { &replace12_0.value },
   NULL,
};

   /* search13_0 -> search6_0 in the cache */
static const nir_search_expression search13 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_i2i64,
   { &search6_0.value },
   NULL,
};

   /* replace13_0_0_0 -> search6_0 in the cache */
/* replace13_0_0 -> replace12_0 in the cache */
/* replace13_0 -> replace12 in the cache */
static const nir_search_expression replace13 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_i2i64,
   { &replace12.value },
   NULL,
};

   /* search14_0 -> search8_0 in the cache */
static const nir_search_expression search14 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_i2i64,
   { &search8_0.value },
   NULL,
};

   /* replace14_0_0 -> search8_0 in the cache */
static const nir_search_expression replace14_0 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_i2i32,
   { &search8_0.value },
   NULL,
};
static const nir_search_expression replace14 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_i2i64,
   { &replace14_0.value },
   NULL,
};

   /* search15_0 -> search4_0 in the cache */
static const nir_search_expression search15 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_f2f16,
   { &search4_0.value },
   NULL,
};

   /* replace15_0_0 -> search4_0 in the cache */
static const nir_search_expression replace15_0 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_f2f32,
   { &search4_0.value },
   NULL,
};
static const nir_search_expression replace15 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_f2f16,
   { &replace15_0.value },
   NULL,
};

   /* search16_0 -> search8_0 in the cache */
static const nir_search_expression search16 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_f2f64,
   { &search8_0.value },
   NULL,
};

   /* replace16_0_0 -> search8_0 in the cache */
static const nir_search_expression replace16_0 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_f2f32,
   { &search8_0.value },
   NULL,
};
static const nir_search_expression replace16 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_f2f64,
   { &replace16_0.value },
   NULL,
};

   /* search17_0 -> search6_0 in the cache */
static const nir_search_expression search17 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_i2f16,
   { &search6_0.value },
   NULL,
};

   /* replace17_0_0 -> search6_0 in the cache */
/* replace17_0 -> replace12_0 in the cache */
static const nir_search_expression replace17 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_i2f16,
   { &replace12_0.value },
   NULL,
};

   /* search18_0 -> search1_0 in the cache */
static const nir_search_expression search18 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_i2f16,
   { &search1_0.value },
   NULL,
};

   /* replace18_0_0 -> search1_0 in the cache */
static const nir_search_expression replace18_0 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_i2f32,
   { &search1_0.value },
   NULL,
};
static const nir_search_expression replace18 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_f2f16,
   { &replace18_0.value },
   NULL,
};

   /* search19_0 -> search4_0 in the cache */
static const nir_search_expression search19 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_i2f16,
   { &search4_0.value },
   NULL,
};

   /* replace19_0_0_0 -> search4_0 in the cache */
static const nir_search_expression replace19_0_0 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_i2f64,
   { &search4_0.value },
   NULL,
};
static const nir_search_expression replace19_0 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_f2f32,
   { &replace19_0_0.value },
   NULL,
};
static const nir_search_expression replace19 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_f2f16,
   { &replace19_0.value },
   NULL,
};

   /* search20_0 -> search6_0 in the cache */
static const nir_search_expression search20 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_i2f32,
   { &search6_0.value },
   NULL,
};

   /* replace20_0_0_0 -> search6_0 in the cache */
/* replace20_0_0 -> replace12_0 in the cache */
/* replace20_0 -> replace12 in the cache */
static const nir_search_expression replace20 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_i2f32,
   { &replace12.value },
   NULL,
};

   /* search21_0 -> search8_0 in the cache */
static const nir_search_expression search21 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_i2f32,
   { &search8_0.value },
   NULL,
};

   /* replace21_0_0 -> search8_0 in the cache */
/* replace21_0 -> replace14_0 in the cache */
static const nir_search_expression replace21 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_i2f32,
   { &replace14_0.value },
   NULL,
};

   /* search22_0 -> search4_0 in the cache */
static const nir_search_expression search22 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_i2f32,
   { &search4_0.value },
   NULL,
};

   /* replace22_0_0 -> search4_0 in the cache */
/* replace22_0 -> replace19_0_0 in the cache */
/* replace22 -> replace19_0 in the cache */

   /* search23_0 -> search6_0 in the cache */
static const nir_search_expression search23 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_i2f64,
   { &search6_0.value },
   NULL,
};

   /* replace23_0_0_0_0 -> search6_0 in the cache */
/* replace23_0_0_0 -> replace12_0 in the cache */
/* replace23_0_0 -> replace12 in the cache */
/* replace23_0 -> replace13 in the cache */
static const nir_search_expression replace23 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_i2f64,
   { &replace13.value },
   NULL,
};

   /* search24_0 -> search8_0 in the cache */
static const nir_search_expression search24 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_i2f64,
   { &search8_0.value },
   NULL,
};

   /* replace24_0_0_0 -> search8_0 in the cache */
/* replace24_0_0 -> replace14_0 in the cache */
/* replace24_0 -> replace14 in the cache */
static const nir_search_expression replace24 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_i2f64,
   { &replace14.value },
   NULL,
};

   /* search25_0 -> search1_0 in the cache */
static const nir_search_expression search25 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_i2f64,
   { &search1_0.value },
   NULL,
};

   /* replace25_0_0 -> search1_0 in the cache */
static const nir_search_expression replace25_0 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_i2i64,
   { &search1_0.value },
   NULL,
};
static const nir_search_expression replace25 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_i2f64,
   { &replace25_0.value },
   NULL,
};

   /* search26_0 -> search6_0 in the cache */
static const nir_search_expression search26 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_u2f16,
   { &search6_0.value },
   NULL,
};

   /* replace26_0_0 -> search6_0 in the cache */
/* replace26_0 -> replace6_0 in the cache */
static const nir_search_expression replace26 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_u2f16,
   { &replace6_0.value },
   NULL,
};

   /* search27_0 -> search1_0 in the cache */
static const nir_search_expression search27 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_u2f16,
   { &search1_0.value },
   NULL,
};

   /* replace27_0_0 -> search1_0 in the cache */
static const nir_search_expression replace27_0 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_u2f32,
   { &search1_0.value },
   NULL,
};
static const nir_search_expression replace27 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_f2f16,
   { &replace27_0.value },
   NULL,
};

   /* search28_0 -> search4_0 in the cache */
static const nir_search_expression search28 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_u2f16,
   { &search4_0.value },
   NULL,
};

   /* replace28_0_0_0 -> search4_0 in the cache */
static const nir_search_expression replace28_0_0 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_u2f64,
   { &search4_0.value },
   NULL,
};
static const nir_search_expression replace28_0 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_f2f32,
   { &replace28_0_0.value },
   NULL,
};
static const nir_search_expression replace28 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_f2f16,
   { &replace28_0.value },
   NULL,
};

   /* search29_0 -> search6_0 in the cache */
static const nir_search_expression search29 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_u2f32,
   { &search6_0.value },
   NULL,
};

   /* replace29_0_0_0 -> search6_0 in the cache */
/* replace29_0_0 -> replace6_0 in the cache */
/* replace29_0 -> replace6 in the cache */
static const nir_search_expression replace29 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_u2f32,
   { &replace6.value },
   NULL,
};

   /* search30_0 -> search8_0 in the cache */
static const nir_search_expression search30 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_u2f32,
   { &search8_0.value },
   NULL,
};

   /* replace30_0_0 -> search8_0 in the cache */
/* replace30_0 -> replace8_0 in the cache */
static const nir_search_expression replace30 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_u2f32,
   { &replace8_0.value },
   NULL,
};

   /* search31_0 -> search4_0 in the cache */
static const nir_search_expression search31 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_u2f32,
   { &search4_0.value },
   NULL,
};

   /* replace31_0_0 -> search4_0 in the cache */
/* replace31_0 -> replace28_0_0 in the cache */
/* replace31 -> replace28_0 in the cache */

   /* search32_0 -> search6_0 in the cache */
static const nir_search_expression search32 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_u2f64,
   { &search6_0.value },
   NULL,
};

   /* replace32_0_0_0_0 -> search6_0 in the cache */
/* replace32_0_0_0 -> replace6_0 in the cache */
/* replace32_0_0 -> replace6 in the cache */
/* replace32_0 -> replace7 in the cache */
static const nir_search_expression replace32 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_u2f64,
   { &replace7.value },
   NULL,
};

   /* search33_0 -> search8_0 in the cache */
static const nir_search_expression search33 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_u2f64,
   { &search8_0.value },
   NULL,
};

   /* replace33_0_0_0 -> search8_0 in the cache */
/* replace33_0_0 -> replace8_0 in the cache */
/* replace33_0 -> replace8 in the cache */
static const nir_search_expression replace33 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_u2f64,
   { &replace8.value },
   NULL,
};

   /* search34_0 -> search1_0 in the cache */
static const nir_search_expression search34 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_u2f64,
   { &search1_0.value },
   NULL,
};

   /* replace34_0_0 -> search1_0 in the cache */
static const nir_search_expression replace34_0 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_u2u64,
   { &search1_0.value },
   NULL,
};
static const nir_search_expression replace34 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_u2f64,
   { &replace34_0.value },
   NULL,
};

   /* search35_0 -> search8_0 in the cache */
static const nir_search_expression search35 = {
   { nir_search_value_expression, 8 },
   false, false,
   -1, 0,
   nir_op_f2i8,
   { &search8_0.value },
   NULL,
};

   /* replace35_0_0 -> search8_0 in the cache */
static const nir_search_expression replace35_0 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_f2i16,
   { &search8_0.value },
   NULL,
};
static const nir_search_expression replace35 = {
   { nir_search_value_expression, 8 },
   false, false,
   -1, 0,
   nir_op_i2i8,
   { &replace35_0.value },
   NULL,
};

   /* search36_0 -> search1_0 in the cache */
static const nir_search_expression search36 = {
   { nir_search_value_expression, 8 },
   false, false,
   -1, 0,
   nir_op_f2i8,
   { &search1_0.value },
   NULL,
};

   /* replace36_0_0_0 -> search1_0 in the cache */
static const nir_search_expression replace36_0_0 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_f2i32,
   { &search1_0.value },
   NULL,
};
static const nir_search_expression replace36_0 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_i2i16,
   { &replace36_0_0.value },
   NULL,
};
static const nir_search_expression replace36 = {
   { nir_search_value_expression, 8 },
   false, false,
   -1, 0,
   nir_op_i2i8,
   { &replace36_0.value },
   NULL,
};

   /* search37_0 -> search4_0 in the cache */
static const nir_search_expression search37 = {
   { nir_search_value_expression, 8 },
   false, false,
   -1, 0,
   nir_op_f2i8,
   { &search4_0.value },
   NULL,
};

   /* replace37_0_0_0_0 -> search4_0 in the cache */
static const nir_search_expression replace37_0_0_0 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_f2i64,
   { &search4_0.value },
   NULL,
};
static const nir_search_expression replace37_0_0 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_i2i32,
   { &replace37_0_0_0.value },
   NULL,
};
static const nir_search_expression replace37_0 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_i2i16,
   { &replace37_0_0.value },
   NULL,
};
static const nir_search_expression replace37 = {
   { nir_search_value_expression, 8 },
   false, false,
   -1, 0,
   nir_op_i2i8,
   { &replace37_0.value },
   NULL,
};

   /* search38_0 -> search1_0 in the cache */
static const nir_search_expression search38 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_f2i16,
   { &search1_0.value },
   NULL,
};

   /* replace38_0_0 -> search1_0 in the cache */
/* replace38_0 -> replace36_0_0 in the cache */
/* replace38 -> replace36_0 in the cache */

   /* search39_0 -> search4_0 in the cache */
static const nir_search_expression search39 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_f2i16,
   { &search4_0.value },
   NULL,
};

   /* replace39_0_0_0 -> search4_0 in the cache */
/* replace39_0_0 -> replace37_0_0_0 in the cache */
/* replace39_0 -> replace37_0_0 in the cache */
/* replace39 -> replace37_0 in the cache */

   /* search40_0 -> search8_0 in the cache */
static const nir_search_expression search40 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_f2i32,
   { &search8_0.value },
   NULL,
};

   /* replace40_0_0 -> search8_0 in the cache */
/* replace40_0 -> replace16_0 in the cache */
static const nir_search_expression replace40 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_f2i32,
   { &replace16_0.value },
   NULL,
};

   /* search41_0 -> search4_0 in the cache */
static const nir_search_expression search41 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_f2i32,
   { &search4_0.value },
   NULL,
};

   /* replace41_0_0 -> search4_0 in the cache */
/* replace41_0 -> replace37_0_0_0 in the cache */
/* replace41 -> replace37_0_0 in the cache */

   /* search42_0 -> search8_0 in the cache */
static const nir_search_expression search42 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_f2i64,
   { &search8_0.value },
   NULL,
};

   /* replace42_0_0_0 -> search8_0 in the cache */
/* replace42_0_0 -> replace16_0 in the cache */
/* replace42_0 -> replace16 in the cache */
static const nir_search_expression replace42 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_f2i64,
   { &replace16.value },
   NULL,
};

   /* search43_0 -> search1_0 in the cache */
static const nir_search_expression search43 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_f2i64,
   { &search1_0.value },
   NULL,
};

   /* replace43_0_0 -> search1_0 in the cache */
static const nir_search_expression replace43_0 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_f2f64,
   { &search1_0.value },
   NULL,
};
static const nir_search_expression replace43 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_f2i64,
   { &replace43_0.value },
   NULL,
};

   /* search44_0 -> search8_0 in the cache */
static const nir_search_expression search44 = {
   { nir_search_value_expression, 8 },
   false, false,
   -1, 0,
   nir_op_f2u8,
   { &search8_0.value },
   NULL,
};

   /* replace44_0_0 -> search8_0 in the cache */
static const nir_search_expression replace44_0 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_f2u16,
   { &search8_0.value },
   NULL,
};
static const nir_search_expression replace44 = {
   { nir_search_value_expression, 8 },
   false, false,
   -1, 0,
   nir_op_u2u8,
   { &replace44_0.value },
   NULL,
};

   /* search45_0 -> search1_0 in the cache */
static const nir_search_expression search45 = {
   { nir_search_value_expression, 8 },
   false, false,
   -1, 0,
   nir_op_f2u8,
   { &search1_0.value },
   NULL,
};

   /* replace45_0_0_0 -> search1_0 in the cache */
static const nir_search_expression replace45_0_0 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_f2u32,
   { &search1_0.value },
   NULL,
};
static const nir_search_expression replace45_0 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_u2u16,
   { &replace45_0_0.value },
   NULL,
};
static const nir_search_expression replace45 = {
   { nir_search_value_expression, 8 },
   false, false,
   -1, 0,
   nir_op_u2u8,
   { &replace45_0.value },
   NULL,
};

   /* search46_0 -> search4_0 in the cache */
static const nir_search_expression search46 = {
   { nir_search_value_expression, 8 },
   false, false,
   -1, 0,
   nir_op_f2u8,
   { &search4_0.value },
   NULL,
};

   /* replace46_0_0_0_0 -> search4_0 in the cache */
static const nir_search_expression replace46_0_0_0 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_f2u64,
   { &search4_0.value },
   NULL,
};
static const nir_search_expression replace46_0_0 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_u2u32,
   { &replace46_0_0_0.value },
   NULL,
};
static const nir_search_expression replace46_0 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_u2u16,
   { &replace46_0_0.value },
   NULL,
};
static const nir_search_expression replace46 = {
   { nir_search_value_expression, 8 },
   false, false,
   -1, 0,
   nir_op_u2u8,
   { &replace46_0.value },
   NULL,
};

   /* search47_0 -> search1_0 in the cache */
static const nir_search_expression search47 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_f2u16,
   { &search1_0.value },
   NULL,
};

   /* replace47_0_0 -> search1_0 in the cache */
/* replace47_0 -> replace45_0_0 in the cache */
/* replace47 -> replace45_0 in the cache */

   /* search48_0 -> search4_0 in the cache */
static const nir_search_expression search48 = {
   { nir_search_value_expression, 16 },
   false, false,
   -1, 0,
   nir_op_f2u16,
   { &search4_0.value },
   NULL,
};

   /* replace48_0_0_0 -> search4_0 in the cache */
/* replace48_0_0 -> replace46_0_0_0 in the cache */
/* replace48_0 -> replace46_0_0 in the cache */
/* replace48 -> replace46_0 in the cache */

   /* search49_0 -> search8_0 in the cache */
static const nir_search_expression search49 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_f2u32,
   { &search8_0.value },
   NULL,
};

   /* replace49_0_0 -> search8_0 in the cache */
/* replace49_0 -> replace16_0 in the cache */
static const nir_search_expression replace49 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_f2u32,
   { &replace16_0.value },
   NULL,
};

   /* search50_0 -> search4_0 in the cache */
static const nir_search_expression search50 = {
   { nir_search_value_expression, 32 },
   false, false,
   -1, 0,
   nir_op_f2u32,
   { &search4_0.value },
   NULL,
};

   /* replace50_0_0 -> search4_0 in the cache */
/* replace50_0 -> replace46_0_0_0 in the cache */
/* replace50 -> replace46_0_0 in the cache */

   /* search51_0 -> search8_0 in the cache */
static const nir_search_expression search51 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_f2u64,
   { &search8_0.value },
   NULL,
};

   /* replace51_0_0_0 -> search8_0 in the cache */
/* replace51_0_0 -> replace16_0 in the cache */
/* replace51_0 -> replace16 in the cache */
static const nir_search_expression replace51 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_f2u64,
   { &replace16.value },
   NULL,
};

   /* search52_0 -> search1_0 in the cache */
static const nir_search_expression search52 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_f2u64,
   { &search1_0.value },
   NULL,
};

   /* replace52_0_0 -> search1_0 in the cache */
/* replace52_0 -> replace43_0 in the cache */
static const nir_search_expression replace52 = {
   { nir_search_value_expression, 64 },
   false, false,
   -1, 0,
   nir_op_f2u64,
   { &replace43_0.value },
   NULL,
};


static const struct transform midgard_nir_lower_algebraic_late_state2_xforms[] = {
  { &search0, &replace0.value, 0 },
};
static const struct transform midgard_nir_lower_algebraic_late_state3_xforms[] = {
  { &search1, &replace1.value, 0 },
};
static const struct transform midgard_nir_lower_algebraic_late_state4_xforms[] = {
  { &search2, &replace2.value, 0 },
};
static const struct transform midgard_nir_lower_algebraic_late_state5_xforms[] = {
  { &search1, &replace1.value, 0 },
  { &search2, &replace2.value, 0 },
};
static const struct transform midgard_nir_lower_algebraic_late_state6_xforms[] = {
  { &search3, &replace3.value, 0 },
  { &search4, &replace4.value, 0 },
  { &search5, &replace4_0.value, 0 },
  { &search6, &replace6.value, 0 },
  { &search7, &replace7.value, 0 },
  { &search8, &replace8.value, 0 },
};
static const struct transform midgard_nir_lower_algebraic_late_state7_xforms[] = {
  { &search9, &replace9.value, 0 },
  { &search10, &replace10.value, 0 },
  { &search11, &replace10_0.value, 0 },
  { &search12, &replace12.value, 0 },
  { &search13, &replace13.value, 0 },
  { &search14, &replace14.value, 0 },
};
static const struct transform midgard_nir_lower_algebraic_late_state8_xforms[] = {
  { &search15, &replace15.value, 0 },
  { &search16, &replace16.value, 0 },
};
static const struct transform midgard_nir_lower_algebraic_late_state9_xforms[] = {
  { &search17, &replace17.value, 0 },
  { &search18, &replace18.value, 0 },
  { &search19, &replace19.value, 0 },
  { &search20, &replace20.value, 0 },
  { &search21, &replace21.value, 0 },
  { &search22, &replace19_0.value, 0 },
  { &search23, &replace23.value, 0 },
  { &search24, &replace24.value, 0 },
  { &search25, &replace25.value, 0 },
};
static const struct transform midgard_nir_lower_algebraic_late_state10_xforms[] = {
  { &search26, &replace26.value, 0 },
  { &search27, &replace27.value, 0 },
  { &search28, &replace28.value, 0 },
  { &search29, &replace29.value, 0 },
  { &search30, &replace30.value, 0 },
  { &search31, &replace28_0.value, 0 },
  { &search32, &replace32.value, 0 },
  { &search33, &replace33.value, 0 },
  { &search34, &replace34.value, 0 },
};
static const struct transform midgard_nir_lower_algebraic_late_state11_xforms[] = {
  { &search35, &replace35.value, 0 },
  { &search36, &replace36.value, 0 },
  { &search37, &replace37.value, 0 },
  { &search38, &replace36_0.value, 0 },
  { &search39, &replace37_0.value, 0 },
  { &search40, &replace40.value, 0 },
  { &search41, &replace37_0_0.value, 0 },
  { &search42, &replace42.value, 0 },
  { &search43, &replace43.value, 0 },
};
static const struct transform midgard_nir_lower_algebraic_late_state12_xforms[] = {
  { &search44, &replace44.value, 0 },
  { &search45, &replace45.value, 0 },
  { &search46, &replace46.value, 0 },
  { &search47, &replace45_0.value, 0 },
  { &search48, &replace46_0.value, 0 },
  { &search49, &replace49.value, 0 },
  { &search50, &replace46_0_0.value, 0 },
  { &search51, &replace51.value, 0 },
  { &search52, &replace52.value, 0 },
};

static const struct per_op_table midgard_nir_lower_algebraic_late_table[nir_num_search_ops] = {
   [nir_op_ineg] = {
      .filter = (uint16_t []) {
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
      },
      
      .num_filtered_states = 1,
      .table = (uint16_t []) {
      
         2,
      },
   },
   [nir_op_b32csel] = {
      .filter = (uint16_t []) {
         0,
         1,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
      },
      
      .num_filtered_states = 2,
      .table = (uint16_t []) {
      
         0,
         3,
         4,
         5,
         0,
         3,
         4,
         5,
      },
   },
   [nir_search_op_u2u] = {
      .filter = (uint16_t []) {
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
      },
      
      .num_filtered_states = 1,
      .table = (uint16_t []) {
      
         6,
      },
   },
   [nir_search_op_i2i] = {
      .filter = (uint16_t []) {
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
      },
      
      .num_filtered_states = 1,
      .table = (uint16_t []) {
      
         7,
      },
   },
   [nir_search_op_f2f] = {
      .filter = (uint16_t []) {
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
      },
      
      .num_filtered_states = 1,
      .table = (uint16_t []) {
      
         8,
      },
   },
   [nir_search_op_i2f] = {
      .filter = (uint16_t []) {
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
      },
      
      .num_filtered_states = 1,
      .table = (uint16_t []) {
      
         9,
      },
   },
   [nir_search_op_u2f] = {
      .filter = (uint16_t []) {
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
      },
      
      .num_filtered_states = 1,
      .table = (uint16_t []) {
      
         10,
      },
   },
   [nir_search_op_f2i] = {
      .filter = (uint16_t []) {
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
      },
      
      .num_filtered_states = 1,
      .table = (uint16_t []) {
      
         11,
      },
   },
   [nir_search_op_f2u] = {
      .filter = (uint16_t []) {
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
      },
      
      .num_filtered_states = 1,
      .table = (uint16_t []) {
      
         12,
      },
   },
};

const struct transform *midgard_nir_lower_algebraic_late_transforms[] = {
   NULL,
   NULL,
   midgard_nir_lower_algebraic_late_state2_xforms,
   midgard_nir_lower_algebraic_late_state3_xforms,
   midgard_nir_lower_algebraic_late_state4_xforms,
   midgard_nir_lower_algebraic_late_state5_xforms,
   midgard_nir_lower_algebraic_late_state6_xforms,
   midgard_nir_lower_algebraic_late_state7_xforms,
   midgard_nir_lower_algebraic_late_state8_xforms,
   midgard_nir_lower_algebraic_late_state9_xforms,
   midgard_nir_lower_algebraic_late_state10_xforms,
   midgard_nir_lower_algebraic_late_state11_xforms,
   midgard_nir_lower_algebraic_late_state12_xforms,
};

const uint16_t midgard_nir_lower_algebraic_late_transform_counts[] = {
   0,
   0,
   (uint16_t)ARRAY_SIZE(midgard_nir_lower_algebraic_late_state2_xforms),
   (uint16_t)ARRAY_SIZE(midgard_nir_lower_algebraic_late_state3_xforms),
   (uint16_t)ARRAY_SIZE(midgard_nir_lower_algebraic_late_state4_xforms),
   (uint16_t)ARRAY_SIZE(midgard_nir_lower_algebraic_late_state5_xforms),
   (uint16_t)ARRAY_SIZE(midgard_nir_lower_algebraic_late_state6_xforms),
   (uint16_t)ARRAY_SIZE(midgard_nir_lower_algebraic_late_state7_xforms),
   (uint16_t)ARRAY_SIZE(midgard_nir_lower_algebraic_late_state8_xforms),
   (uint16_t)ARRAY_SIZE(midgard_nir_lower_algebraic_late_state9_xforms),
   (uint16_t)ARRAY_SIZE(midgard_nir_lower_algebraic_late_state10_xforms),
   (uint16_t)ARRAY_SIZE(midgard_nir_lower_algebraic_late_state11_xforms),
   (uint16_t)ARRAY_SIZE(midgard_nir_lower_algebraic_late_state12_xforms),
};

bool
midgard_nir_lower_algebraic_late(nir_shader *shader)
{
   bool progress = false;
   bool condition_flags[1];
   const nir_shader_compiler_options *options = shader->options;
   const shader_info *info = &shader->info;
   (void) options;
   (void) info;

   condition_flags[0] = true;

   nir_foreach_function(function, shader) {
      if (function->impl) {
         progress |= nir_algebraic_impl(function->impl, condition_flags,
                                        midgard_nir_lower_algebraic_late_transforms,
                                        midgard_nir_lower_algebraic_late_transform_counts,
                                        midgard_nir_lower_algebraic_late_table);
      }
   }

   return progress;
}


#include "nir.h"
#include "nir_builder.h"
#include "nir_search.h"
#include "nir_search_helpers.h"

/* What follows is NIR algebraic transform code for the following 2
 * transforms:
 *    ('fsin', 'a') => ('fsin', ('fdiv', 'a', 3.141592653589793))
 *    ('fcos', 'a') => ('fcos', ('fdiv', 'a', 3.141592653589793))
 */


   static const nir_search_variable search53_0 = {
   { nir_search_value_variable, -1 },
   0, /* a */
   false,
   nir_type_invalid,
   NULL,
   {0, 1, 2, 3},
};
static const nir_search_expression search53 = {
   { nir_search_value_expression, -1 },
   false, false,
   -1, 0,
   nir_op_fsin,
   { &search53_0.value },
   NULL,
};

   /* replace53_0_0 -> search53_0 in the cache */

static const nir_search_constant replace53_0_1 = {
   { nir_search_value_constant, -1 },
   nir_type_float, { 0x400921fb54442d18 /* 3.14159265359 */ },
};
static const nir_search_expression replace53_0 = {
   { nir_search_value_expression, -1 },
   false, false,
   -1, 0,
   nir_op_fdiv,
   { &search53_0.value, &replace53_0_1.value },
   NULL,
};
static const nir_search_expression replace53 = {
   { nir_search_value_expression, -1 },
   false, false,
   -1, 0,
   nir_op_fsin,
   { &replace53_0.value },
   NULL,
};

   /* search54_0 -> search53_0 in the cache */
static const nir_search_expression search54 = {
   { nir_search_value_expression, -1 },
   false, false,
   -1, 0,
   nir_op_fcos,
   { &search53_0.value },
   NULL,
};

   /* replace54_0_0 -> search53_0 in the cache */

/* replace54_0_1 -> replace53_0_1 in the cache */
/* replace54_0 -> replace53_0 in the cache */
static const nir_search_expression replace54 = {
   { nir_search_value_expression, -1 },
   false, false,
   -1, 0,
   nir_op_fcos,
   { &replace53_0.value },
   NULL,
};


static const struct transform midgard_nir_scale_trig_state2_xforms[] = {
  { &search53, &replace53.value, 0 },
};
static const struct transform midgard_nir_scale_trig_state3_xforms[] = {
  { &search54, &replace54.value, 0 },
};

static const struct per_op_table midgard_nir_scale_trig_table[nir_num_search_ops] = {
   [nir_op_fsin] = {
      .filter = (uint16_t []) {
         0,
         0,
         0,
         0,
      },
      
      .num_filtered_states = 1,
      .table = (uint16_t []) {
      
         2,
      },
   },
   [nir_op_fcos] = {
      .filter = (uint16_t []) {
         0,
         0,
         0,
         0,
      },
      
      .num_filtered_states = 1,
      .table = (uint16_t []) {
      
         3,
      },
   },
};

const struct transform *midgard_nir_scale_trig_transforms[] = {
   NULL,
   NULL,
   midgard_nir_scale_trig_state2_xforms,
   midgard_nir_scale_trig_state3_xforms,
};

const uint16_t midgard_nir_scale_trig_transform_counts[] = {
   0,
   0,
   (uint16_t)ARRAY_SIZE(midgard_nir_scale_trig_state2_xforms),
   (uint16_t)ARRAY_SIZE(midgard_nir_scale_trig_state3_xforms),
};

bool
midgard_nir_scale_trig(nir_shader *shader)
{
   bool progress = false;
   bool condition_flags[1];
   const nir_shader_compiler_options *options = shader->options;
   const shader_info *info = &shader->info;
   (void) options;
   (void) info;

   condition_flags[0] = true;

   nir_foreach_function(function, shader) {
      if (function->impl) {
         progress |= nir_algebraic_impl(function->impl, condition_flags,
                                        midgard_nir_scale_trig_transforms,
                                        midgard_nir_scale_trig_transform_counts,
                                        midgard_nir_scale_trig_table);
      }
   }

   return progress;
}


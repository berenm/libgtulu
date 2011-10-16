/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_DATA_HPP_
#define GTULU_INTERNAL_FORMAT_DATA_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/internal/constants_fwd.hpp"

#include "gtulu/internal/format/common.hpp"

namespace gtulu {
  namespace internal {

    namespace format {
      namespace data {

        META_ASPECT_DECLARE(format,
                            Format,
                            using cst::,
                            (gl_unsigned_byte)(gl_byte)(gl_unsigned_short)(gl_short)(gl_unsigned_int)(gl_int)(gl_half_float)(gl_float)(gl_double)(gl_unsigned_byte_3_3_2)(gl_unsigned_byte_2_3_3_rev)(gl_unsigned_short_5_6_5)(gl_unsigned_short_5_6_5_rev)(gl_unsigned_short_4_4_4_4)(gl_unsigned_short_4_4_4_4_rev)(gl_unsigned_short_5_5_5_1)(gl_unsigned_short_1_5_5_5_rev)(gl_unsigned_int_8_8_8_8)(gl_unsigned_int_8_8_8_8_rev)(gl_unsigned_int_10_10_10_2)(gl_unsigned_int_2_10_10_10_rev)(gl_int_2_10_10_10_rev)(gl_unsigned_int_24_8)(gl_unsigned_int_10f_11f_11f_rev)(gl_unsigned_int_5_9_9_9_rev)(gl_float_32_unsigned_int_24_8_rev))
        typedef std::uint32_t size_type;

        template< typename Format, typename Numeric, typename Packing, typename Order >
        struct data_format_aspect {
            typedef Format format;
            typedef Numeric numeric;
            typedef Packing packing;
            typedef Order order;
        };

        template< typename Format >
        struct data_format;

        template< typename Width, typename Packing = fcmn::packing::one_in_one, typename Order = fcmn::order::forward,
            typename Sign = fnum::sign::unsigned_, typename Integral = fnum::integral::integral >
        struct select_format;

#define DECLARE_FORMAT(format_m, numeric_m, packing_m, order_m)         \
      template< > struct data_format< format::format_m > {              \
         typedef data_format_aspect< format::format_m,                  \
                                     fcmn::numeric::numeric_m,            \
                                     fcmn::packing::packing_m,            \
                                     fcmn::order::order_m > aspect;       \
      };                                                                \
      typedef data_format< format::format_m > format_m;

#define DECLARE_FORMAT_SELECT(format_m, numeric_m, packing_m, order_m, width_m)         \
     DECLARE_FORMAT(format_m, numeric_m, packing_m, order_m)                            \
     template < > struct select_format< fnum::width::width_m,                             \
                                        fcmn::packing::packing_m,                         \
                                        fcmn::order::order_m,                             \
                                        typename fnum::get_sign<                          \
                                          fcmn::numeric::numeric_m                        \
                                        >::type,                                        \
                                        typename fnum::get_integral<                      \
                                          fcmn::numeric::numeric_m                        \
                                        >::type > {                                     \
         typedef format_m type;                                                         \
     };

        DECLARE_FORMAT_SELECT(gl_unsigned_byte, uint8_, one_in_one, forward, one_byte)
        DECLARE_FORMAT_SELECT(gl_byte, int8_, one_in_one, forward, one_byte)
        DECLARE_FORMAT_SELECT(gl_unsigned_short, uint16_, one_in_one, forward, two_bytes)
        DECLARE_FORMAT_SELECT(gl_short, int16_, one_in_one, forward, two_bytes)
        DECLARE_FORMAT_SELECT(gl_unsigned_int, uint32_, one_in_one, forward, four_bytes)
        DECLARE_FORMAT_SELECT(gl_int, int32_, one_in_one, forward, four_bytes)
        DECLARE_FORMAT_SELECT(gl_half_float, float16_, one_in_one, forward, two_bytes)
        DECLARE_FORMAT_SELECT(gl_float, float32_, one_in_one, forward, four_bytes)
        DECLARE_FORMAT_SELECT(gl_double, float64_, one_in_one, forward, eight_bytes)
        DECLARE_FORMAT_SELECT(gl_unsigned_byte_3_3_2, uint8_, three_in_one, forward, three_bits)
        DECLARE_FORMAT_SELECT(gl_unsigned_byte_2_3_3_rev, uint8_, three_in_one, reverse, three_bits)
        DECLARE_FORMAT_SELECT(gl_unsigned_short_5_6_5, uint16_, three_in_one, forward, five_bits)
        DECLARE_FORMAT_SELECT(gl_unsigned_short_5_6_5_rev, uint16_, three_in_one, reverse, five_bits)
        DECLARE_FORMAT_SELECT(gl_unsigned_short_4_4_4_4, uint16_, four_in_one, forward, four_bits)
        DECLARE_FORMAT_SELECT(gl_unsigned_short_4_4_4_4_rev, uint16_, four_in_one, reverse, four_bits)
        DECLARE_FORMAT_SELECT(gl_unsigned_short_5_5_5_1, uint16_, four_in_one, forward, five_bits)
        DECLARE_FORMAT_SELECT(gl_unsigned_short_1_5_5_5_rev, uint16_, four_in_one, reverse, five_bits)
        DECLARE_FORMAT_SELECT(gl_unsigned_int_8_8_8_8, uint32_, four_in_one, forward, one_byte)
        DECLARE_FORMAT_SELECT(gl_unsigned_int_8_8_8_8_rev, uint32_, four_in_one, reverse, one_byte)
        DECLARE_FORMAT_SELECT(gl_unsigned_int_10_10_10_2, uint32_, four_in_one, forward, ten_bits)
        DECLARE_FORMAT_SELECT(gl_unsigned_int_2_10_10_10_rev, uint32_, four_in_one, reverse, ten_bits)
        DECLARE_FORMAT_SELECT(gl_int_2_10_10_10_rev, int32_, four_in_one, reverse, ten_bits)
        DECLARE_FORMAT_SELECT(gl_unsigned_int_24_8, ufloat32_, two_in_one, forward, twentyfour_bits)
        DECLARE_FORMAT_SELECT(gl_unsigned_int_10f_11f_11f_rev, ufloat32_, three_in_one, reverse, eleven_bits)
        DECLARE_FORMAT_SELECT(gl_unsigned_int_5_9_9_9_rev, ufloat32_, three_in_one, reverse, fourteen_bits)
        DECLARE_FORMAT_SELECT(gl_float_32_unsigned_int_24_8_rev, float32_stride32_, two_in_one, reverse, four_bytes)

        template< typename Width, typename Packing, typename Order, typename Sign, typename Integral >
        struct select_format {
            typedef gl_unsigned_byte type;
        };

#undef DECLARE_FORMAT_SELECT
#undef DECLARE_FORMAT

      } // namespace data
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_DATA_HPP_ */

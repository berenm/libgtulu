/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_DATA_HPP_
#define GTULU_INTERNAL_FORMAT_DATA_HPP_

#include "gtulu/internal/constants_fwd.hpp"

#include "gtulu/internal/formats/common.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace data {

        META_ASPECT_DECLARE(format,
                            Format,
                            using cst::,
                            (gl_unsigned_byte)(gl_byte)(gl_unsigned_short)(gl_short)(gl_unsigned_int)(gl_int)(gl_half_float)(gl_float)(gl_double)(gl_unsigned_byte_3_3_2)(gl_unsigned_byte_2_3_3_rev)(gl_unsigned_short_5_6_5)(gl_unsigned_short_5_6_5_rev)(gl_unsigned_short_4_4_4_4)(gl_unsigned_short_4_4_4_4_rev)(gl_unsigned_short_5_5_5_1)(gl_unsigned_short_1_5_5_5_rev)(gl_unsigned_int_8_8_8_8)(gl_unsigned_int_8_8_8_8_rev)(gl_unsigned_int_10_10_10_2)(gl_unsigned_int_2_10_10_10_rev)(gl_unsigned_int_24_8)(gl_unsigned_int_10f_11f_11f_rev)(gl_unsigned_int_5_9_9_9_rev)(gl_float_32_unsigned_int_24_8_rev))
        typedef ::std::uint32_t size_type;

        template< typename Format, typename Sign, typename Integral, typename Precision, typename Packing,
            typename Order, size_type Size >
        struct data_format_aspect {
            typedef Format format;
            typedef Sign sign;
            typedef Integral integral;
            typedef Precision precision;
            typedef Packing packing;
            typedef Order order;

            static size_type const size_ = Size;
        };

        template< typename Format >
        struct data_format;

        template< typename Integral, typename Packing, size_type Size, typename Order = fc::order::forward >
        struct select_format;

#define DECLARE_FORMAT(format_m, sign_m, integral_m, precision_m, packing_m, order_m, size_m)   \
      template< > struct data_format< format::format_m > {                                      \
         typedef data_format_aspect< format::format_m,                                          \
                                     fc::sign::sign_m,                                          \
                                     fc::integral::integral_m,                                  \
                                     fc::precision::precision_m,                                \
                                     fc::packing::packing_m,                                    \
                                     fc::order::order_m,                                        \
                                     size_m > aspect;                                           \
      };                                                                                        \
      typedef data_format< format::format_m > format_m;                                         \

#define DECLARE_FORMAT_DEFAULT(format_m, sign_m, integral_m, precision_m, packing_m, order_m, size_m)   \
     DECLARE_FORMAT(format_m, sign_m, integral_m, precision_m, packing_m, order_m, size_m)              \
     template < > struct select_format< fc::integral::integral_m, fc::packing::packing_m,               \
                                        size_m, fc::order::order_m > {                                  \
         typedef format_m type;                                                                         \
     };

        DECLARE_FORMAT_DEFAULT(gl_unsigned_byte, unsigned_, integral, one_byte, one_in_one, forward, 1)
        DECLARE_FORMAT(gl_byte, signed_, integral, one_byte, one_in_one, forward, 1)
        DECLARE_FORMAT(gl_unsigned_short, unsigned_, integral, two_bytes, one_in_one, forward, 1)
        DECLARE_FORMAT(gl_short, signed_, integral, two_bytes, one_in_one, forward, 1)
        DECLARE_FORMAT(gl_unsigned_int, unsigned_, integral, four_bytes, one_in_one, forward, 1)
        DECLARE_FORMAT(gl_int, signed_, integral, four_bytes, one_in_one, forward, 1)
        DECLARE_FORMAT(gl_half_float, signed_, floating, two_bytes, one_in_one, forward, 1)
        DECLARE_FORMAT_DEFAULT(gl_float, signed_, floating, four_bytes, one_in_one, forward, 1)
        DECLARE_FORMAT(gl_double, signed_, floating, eight_bytes, one_in_one, forward, 1)
        DECLARE_FORMAT_DEFAULT(gl_unsigned_byte_3_3_2, unsigned_, integral, one_byte, three_in_one, forward, 3)
        DECLARE_FORMAT_DEFAULT(gl_unsigned_byte_2_3_3_rev, unsigned_, integral, one_byte, three_in_one, reverse, 3)
        DECLARE_FORMAT_DEFAULT(gl_unsigned_short_5_6_5, unsigned_, integral, two_bytes, three_in_one, forward, 5)
        DECLARE_FORMAT_DEFAULT(gl_unsigned_short_5_6_5_rev, unsigned_, integral, two_bytes, three_in_one, reverse, 5)
        DECLARE_FORMAT_DEFAULT(gl_unsigned_short_4_4_4_4, unsigned_, integral, two_bytes, four_in_one, forward, 4)
        DECLARE_FORMAT_DEFAULT(gl_unsigned_short_4_4_4_4_rev, unsigned_, integral, two_bytes, four_in_one, reverse, 4)
        DECLARE_FORMAT_DEFAULT(gl_unsigned_short_5_5_5_1, unsigned_, integral, two_bytes, four_in_one, forward, 5)
        DECLARE_FORMAT_DEFAULT(gl_unsigned_short_1_5_5_5_rev, unsigned_, integral, two_bytes, four_in_one, reverse, 5)
        DECLARE_FORMAT_DEFAULT(gl_unsigned_int_8_8_8_8, unsigned_, integral, four_bytes, four_in_one, forward, 8)
        DECLARE_FORMAT_DEFAULT(gl_unsigned_int_8_8_8_8_rev, unsigned_, integral, four_bytes, four_in_one, reverse, 8)
        DECLARE_FORMAT_DEFAULT(gl_unsigned_int_10_10_10_2, unsigned_, integral, four_bytes, four_in_one, forward, 10)
        DECLARE_FORMAT_DEFAULT(gl_unsigned_int_2_10_10_10_rev,
                               unsigned_,
                               integral,
                               four_bytes,
                               four_in_one,
                               reverse,
                               10)
        DECLARE_FORMAT_DEFAULT(gl_unsigned_int_24_8, unsigned_, floating, four_bytes, two_in_one, forward, 24)
        DECLARE_FORMAT_DEFAULT(gl_unsigned_int_10f_11f_11f_rev,
                               unsigned_,
                               floating,
                               four_bytes,
                               three_in_one,
                               reverse,
                               11)
        DECLARE_FORMAT_DEFAULT(gl_unsigned_int_5_9_9_9_rev, unsigned_, floating, four_bytes, three_in_one, reverse, 9)
        DECLARE_FORMAT_DEFAULT(gl_float_32_unsigned_int_24_8_rev,
                               unsigned_,
                               floating,
                               eight_bytes,
                               two_in_one,
                               reverse,
                               32)

        template< typename Integral, typename Packing, size_type Size, typename Order >
        struct select_format {
            typedef gl_unsigned_byte type;
        };

#undef DECLARE_FORMAT_DEFAULT
#undef DECLARE_FORMAT

      } // namespace data
    } // namespace formats

    namespace fd = ::gtulu::internal::formats::data;
    namespace fdf = ::gtulu::internal::formats::data::format;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_DATA_HPP_ */

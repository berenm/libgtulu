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

        namespace format {
          typedef cst::gl_unsigned_byte gl_unsigned_byte;
          typedef cst::gl_byte gl_byte;
          typedef cst::gl_unsigned_short gl_unsigned_short;
          typedef cst::gl_short gl_short;
          typedef cst::gl_unsigned_int gl_unsigned_int;
          typedef cst::gl_int gl_int;
          typedef cst::gl_half_float gl_half_float;
          typedef cst::gl_float gl_float;
          typedef cst::gl_double gl_double;
          typedef cst::gl_unsigned_byte_3_3_2 gl_unsigned_byte_3_3_2;
          typedef cst::gl_unsigned_byte_2_3_3_rev gl_unsigned_byte_2_3_3_rev;
          typedef cst::gl_unsigned_short_5_6_5 gl_unsigned_short_5_6_5;
          typedef cst::gl_unsigned_short_5_6_5_rev gl_unsigned_short_5_6_5_rev;
          typedef cst::gl_unsigned_short_4_4_4_4 gl_unsigned_short_4_4_4_4;
          typedef cst::gl_unsigned_short_4_4_4_4_rev gl_unsigned_short_4_4_4_4_rev;
          typedef cst::gl_unsigned_short_5_5_5_1 gl_unsigned_short_5_5_5_1;
          typedef cst::gl_unsigned_short_1_5_5_5_rev gl_unsigned_short_1_5_5_5_rev;
          typedef cst::gl_unsigned_int_8_8_8_8 gl_unsigned_int_8_8_8_8;
          typedef cst::gl_unsigned_int_8_8_8_8_rev gl_unsigned_int_8_8_8_8_rev;
          typedef cst::gl_unsigned_int_10_10_10_2 gl_unsigned_int_10_10_10_2;
          typedef cst::gl_unsigned_int_2_10_10_10_rev gl_unsigned_int_2_10_10_10_rev;
          typedef cst::gl_unsigned_int_24_8 gl_unsigned_int_24_8;
          typedef cst::gl_unsigned_int_10f_11f_11f_rev gl_unsigned_int_10f_11f_11f_rev;
          typedef cst::gl_unsigned_int_5_9_9_9_rev gl_unsigned_int_5_9_9_9_rev;
          typedef cst::gl_float_32_unsigned_int_24_8_rev gl_float_32_unsigned_int_24_8_rev;
        } // namespace format

        DECLARE_TRAIT_ASPECT(type, struct, (floating) (integer))
        DECLARE_TRAIT_ASPECT(value_type,
                             struct,
                             (unsigned_byte) (byte_) (unsigned_short) (short_) (unsigned_int) (int_) (half_float) (float_) (float_unsigned_int) (double_))
        DECLARE_TRAIT_ASPECT(order, struct, (normal) (reverse))
        DECLARE_TRAIT_ASPECT(normalized, struct, (normalized) (normal))
        DECLARE_TRAIT_ASPECT(packing, struct, (none) (rgb) (rgba) (depth_stencil))

        typedef ::std::uint32_t size_type;

        template< typename Format, typename ValueType, typename DataType, typename Packing, typename Order,
            size_type Size >
        struct data_metadata {
            typedef Format format;
            typedef ValueType value_type;
            typedef DataType type;
            typedef Packing packing;
            typedef Order order;
            static size_type const size_ = Size;
        };

        template< typename Format >
        struct data_format;

        template< typename DataType, typename Packing, size_type Size, typename Order = order::normal >
        struct format_selector;

#define DECLARE_DATA_FORMAT(format_m, value_type_m, type_m, packing_m, order_m, size_m) \
      template< > struct data_format< format::format_m > { \
         typedef data_metadata< format::format_m, \
                                value_type::value_type_m, \
                                type::type_m, \
                                packing::packing_m, \
                                order::order_m, \
                                size_m > info; \
      }; \
      typedef data_format< format::format_m > format_m; \
      DECLARE_HAS_TRAIT_FORMAT(order, order_m, format_m); \
      DECLARE_HAS_TRAIT_FORMAT(packing, packing_m, format_m); \
      DECLARE_HAS_TRAIT_FORMAT(type, type_m, format_m); \
      DECLARE_HAS_TRAIT_FORMAT(value_type, value_type_m, format_m); \

#define DECLARE_DATA_FORMAT_DEFAULT(format_m, value_type_m, type_m, packing_m, order_m, size_m) \
     DECLARE_DATA_FORMAT(format_m, value_type_m, type_m, packing_m, order_m, size_m) \
     template < > struct format_selector < type::type_m, packing::packing_m, size_m, order::order_m > { \
         typedef format_m format; \
     };

        DECLARE_DATA_FORMAT_DEFAULT(gl_unsigned_byte, unsigned_byte, integer, none, normal, 1)
        DECLARE_DATA_FORMAT(gl_byte, byte_, integer, none, normal, 1)
        DECLARE_DATA_FORMAT(gl_unsigned_short, unsigned_short, integer, none, normal, 1)
        DECLARE_DATA_FORMAT(gl_short, short_, integer, none, normal, 1)
        DECLARE_DATA_FORMAT(gl_unsigned_int, unsigned_int, integer, none, normal, 1)
        DECLARE_DATA_FORMAT(gl_int, int_, integer, none, normal, 1)
        DECLARE_DATA_FORMAT(gl_half_float, half_float, floating, none, normal, 1)
        DECLARE_DATA_FORMAT_DEFAULT(gl_float, float_, floating, none, normal, 1)
        DECLARE_DATA_FORMAT(gl_double, double_, floating, none, normal, 1)
        DECLARE_DATA_FORMAT_DEFAULT(gl_unsigned_byte_3_3_2, unsigned_byte, integer, rgb, normal, 3)
        DECLARE_DATA_FORMAT_DEFAULT(gl_unsigned_byte_2_3_3_rev, unsigned_byte, integer, rgb, reverse, 3)
        DECLARE_DATA_FORMAT_DEFAULT(gl_unsigned_short_5_6_5, unsigned_short, integer, rgb, normal, 5)
        DECLARE_DATA_FORMAT_DEFAULT(gl_unsigned_short_5_6_5_rev, unsigned_short, integer, rgb, reverse, 5)
        DECLARE_DATA_FORMAT_DEFAULT(gl_unsigned_short_4_4_4_4, unsigned_short, integer, rgba, normal, 4)
        DECLARE_DATA_FORMAT_DEFAULT(gl_unsigned_short_4_4_4_4_rev, unsigned_short, integer, rgba, reverse, 4)
        DECLARE_DATA_FORMAT_DEFAULT(gl_unsigned_short_5_5_5_1, unsigned_short, integer, rgba, normal, 5)
        DECLARE_DATA_FORMAT_DEFAULT(gl_unsigned_short_1_5_5_5_rev, unsigned_short, integer, rgba, reverse, 5)
        DECLARE_DATA_FORMAT_DEFAULT(gl_unsigned_int_8_8_8_8, unsigned_int, integer, rgba, normal, 8)
        DECLARE_DATA_FORMAT_DEFAULT(gl_unsigned_int_8_8_8_8_rev, unsigned_int, integer, rgba, reverse, 8)
        DECLARE_DATA_FORMAT_DEFAULT(gl_unsigned_int_10_10_10_2, unsigned_int, integer, rgba, normal, 10)
        DECLARE_DATA_FORMAT_DEFAULT(gl_unsigned_int_2_10_10_10_rev, unsigned_int, integer, rgba, reverse, 10)
        DECLARE_DATA_FORMAT_DEFAULT(gl_unsigned_int_24_8, unsigned_int, floating, depth_stencil, normal, 24)
        DECLARE_DATA_FORMAT_DEFAULT(gl_unsigned_int_10f_11f_11f_rev, unsigned_int, floating, rgb, reverse, 11)
        DECLARE_DATA_FORMAT_DEFAULT(gl_unsigned_int_5_9_9_9_rev, unsigned_int, floating, rgb, reverse, 9)
        DECLARE_DATA_FORMAT_DEFAULT(gl_float_32_unsigned_int_24_8_rev,
                                    float_unsigned_int,
                                    floating,
                                    depth_stencil,
                                    reverse,
                                    32)

        template< typename DataType, typename Packing, size_type Size, typename Order >
        struct format_selector {
            typedef gl_unsigned_byte format;
        };

#undef DECLARE_DATA_FORMAT_DEFAULT
#undef DECLARE_DATA_FORMAT

      } // namespace data
    } // namespace formats

    namespace fd = ::gtulu::internal::formats::data;
    namespace fdf = ::gtulu::internal::formats::data::format;
    namespace fdn = ::gtulu::internal::formats::data::normalized;
    namespace fdo = ::gtulu::internal::formats::data::order;
    namespace fdp = ::gtulu::internal::formats::data::packing;
    namespace fdt = ::gtulu::internal::formats::data::type;
    namespace fdv = ::gtulu::internal::formats::data::value_type;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_DATA_HPP_ */

/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_DATA_HPP_
#define GTULU_INTERNAL_FORMAT_DATA_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/formats/common.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace data {

#define DATA_FORMATS  ((unsigned_byte, GL_UNSIGNED_BYTE)) \
                      ((byte, GL_BYTE)) \
                      ((unsigned_short, GL_UNSIGNED_SHORT)) \
                      ((short, GL_SHORT)) \
                      ((unsigned_int, GL_UNSIGNED_INT)) \
                      ((int, GL_INT)) \
                      ((half_float, GL_HALF_FLOAT)) \
                      ((float, GL_FLOAT)) \
                      ((double, GL_DOUBLE)) \
                      ((unsigned_byte_3_3_2, GL_UNSIGNED_BYTE_3_3_2)) \
                      ((unsigned_byte_2_3_3_rev, GL_UNSIGNED_BYTE_2_3_3_REV)) \
                      ((unsigned_short_5_6_5, GL_UNSIGNED_SHORT_5_6_5)) \
                      ((unsigned_short_5_6_5_rev, GL_UNSIGNED_SHORT_5_6_5_REV)) \
                      ((unsigned_short_4_4_4_4, GL_UNSIGNED_SHORT_4_4_4_4)) \
                      ((unsigned_short_4_4_4_4_rev, GL_UNSIGNED_SHORT_4_4_4_4_REV)) \
                      ((unsigned_short_5_5_5_1, GL_UNSIGNED_SHORT_5_5_5_1)) \
                      ((unsigned_short_1_5_5_5_rev, GL_UNSIGNED_SHORT_1_5_5_5_REV)) \
                      ((unsigned_int_8_8_8_8, GL_UNSIGNED_INT_8_8_8_8)) \
                      ((unsigned_int_8_8_8_8_rev, GL_UNSIGNED_INT_8_8_8_8_REV)) \
                      ((unsigned_int_10_10_10_2, GL_UNSIGNED_INT_10_10_10_2)) \
                      ((unsigned_int_2_10_10_10_rev, GL_UNSIGNED_INT_2_10_10_10_REV)) \
                      ((unsigned_int_24_8, GL_UNSIGNED_INT_24_8)) \
                      ((unsigned_int_10f_11f_11f_rev, GL_UNSIGNED_INT_10F_11F_11F_REV)) \
                      ((unsigned_int_5_9_9_9_rev, GL_UNSIGNED_INT_5_9_9_9_REV)) \
                      ((float_32_unsigned_int_24_8_rev, GL_FLOAT_32_UNSIGNED_INT_24_8_REV)) \

        namespace format {
#define CONSTANT_LIST DATA_FORMATS
#include "meta/declare_constants.hpp"
#undef CONSTANT_LIST
        } // namespace format

        DECLARE_TRAIT_ASPECT(type, struct,
            (floating)
            (integer)
        )
        DECLARE_TRAIT_ASPECT(value_type, struct,
            (unsigned_byte)
            (byte_)
            (unsigned_short)
            (short_)
            (unsigned_int)
            (int_)
            (half_float)
            (float_)
            (float_unsigned_int)
            (double_)
        )
        DECLARE_TRAIT_ASPECT(order, struct,
            (normal)
            (reverse)
        )
        DECLARE_TRAIT_ASPECT(normalized, struct,
            (normalized)
            (normal)
        )
        DECLARE_TRAIT_ASPECT(packing, struct,
            (none)
            (rgb)
            (rgba)
            (depth_stencil)
        )

        typedef ::boost::uint32_t size_type;

        template< typename format_t, typename value_type_t, typename type_t, typename packing_t, typename order_t,
            size_type size_t >
        struct data_metadata {
            typedef format_t format;
            typedef value_type_t value_type;
            typedef type_t type;
            typedef packing_t packing;
            typedef order_t order;
            static const size_type size_ = size_t;
        };

        template< typename format_t >
        struct data_format;

        template< typename type_t, typename packing_t, size_type size_t, typename order_t = order::normal >
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
      DECLARE_HAS_TRAIT_FORMAT(order, order_m, format_m) \
      DECLARE_HAS_TRAIT_FORMAT(packing, packing_m, format_m) \
      DECLARE_HAS_TRAIT_FORMAT(type, type_m, format_m) \
      DECLARE_HAS_TRAIT_FORMAT(value_type, value_type_m, format_m) \

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
        DECLARE_DATA_FORMAT_DEFAULT(gl_float_32_unsigned_int_24_8_rev, float_unsigned_int, floating, depth_stencil, reverse, 32)

        template< typename type_t, typename packing_t, size_type size_t, typename order_t >
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

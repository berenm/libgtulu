/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_FORMAT_COMMON_HPP_
#define GTULU_INTERNAL_FORMAT_COMMON_HPP_

#include "gtulu/internal/constants_fwd.hpp"

#include "meta/type_traits.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace common {

        namespace numeric {

          META_ASPECT_DECLARE(format,
                              Format,
                              struct,
                              (signed_)(unsigned_)(integral_)(signed_integral)(unsigned_integral)(fixed_)(signed_fixed)(unsigned_fixed)(floating_)(signed_floating)(unsigned_floating)(bool_)(int8_)(int16_)(int32_)(int64_)(uint8_)(uint16_)(uint32_)(uint64_)(fixed16_)(fixed32_)(fixed64_)(ufixed16_)(ufixed32_)(ufixed64_)(float16_)(float32_)(float64_)(ufloat32_)(float32_stride32_))

          META_ASPECT_DECLARE(sign, Sign, struct, (signed_)(unsigned_)(any))
          META_ASPECT_DECLARE(integral, Integral, struct, (floating)(fixed)(integral)(boolean)(any))
          META_ASPECT_DECLARE(width, Width, struct, (one_byte)(two_bytes)(four_bytes)(eight_bytes)(any))

          template< typename Format, typename Sign, typename Integral, typename Width >
          struct numeric_format_aspect {
              typedef Format format;
              typedef Sign sign;
              typedef Integral integral;
              typedef Width width;
          };

          template< typename Format >
          struct numeric_format;

#define DECLARE_FORMAT(format_m, sign_m, integral_m, width_m)                   \
        template< > struct numeric_format< format::format_m > {                 \
           typedef numeric_format_aspect< format::format_m,                     \
                                       fc::numeric::sign::sign_m,               \
                                       fc::numeric::integral::integral_m,       \
                                       fc::numeric::width::width_m > aspect;    \
        };                                                                      \
        typedef numeric_format< format::format_m > format_m;

          DECLARE_FORMAT(signed_, signed_, any, any)
          DECLARE_FORMAT(unsigned_, unsigned_, any, any)

          DECLARE_FORMAT(integral_, any, integral, any)
          DECLARE_FORMAT(signed_integral, signed_, integral, any)
          DECLARE_FORMAT(unsigned_integral, unsigned_, integral, any)
          DECLARE_FORMAT(fixed_, any, fixed, any)
          DECLARE_FORMAT(unsigned_fixed, unsigned_, fixed, any)
          DECLARE_FORMAT(signed_fixed, signed_, fixed, any)
          DECLARE_FORMAT(floating_, any, floating, any)
          DECLARE_FORMAT(signed_floating, signed_, floating, any)
          DECLARE_FORMAT(unsigned_floating, unsigned_, floating, any)

          DECLARE_FORMAT(bool_, unsigned_, boolean, any)
          DECLARE_FORMAT(int8_, signed_, integral, one_byte)
          DECLARE_FORMAT(int16_, signed_, integral, two_bytes)
          DECLARE_FORMAT(int32_, signed_, integral, four_bytes)
          DECLARE_FORMAT(int64_, signed_, integral, eight_bytes)
          DECLARE_FORMAT(uint8_, unsigned_, integral, one_byte)
          DECLARE_FORMAT(uint16_, unsigned_, integral, two_bytes)
          DECLARE_FORMAT(uint32_, unsigned_, integral, four_bytes)
          DECLARE_FORMAT(uint64_, unsigned_, integral, eight_bytes)
          DECLARE_FORMAT(fixed16_, signed_, fixed, two_bytes)
          DECLARE_FORMAT(fixed32_, signed_, fixed, four_bytes)
          DECLARE_FORMAT(fixed64_, signed_, fixed, eight_bytes)
          DECLARE_FORMAT(ufixed16_, unsigned_, fixed, two_bytes)
          DECLARE_FORMAT(ufixed32_, unsigned_, fixed, four_bytes)
          DECLARE_FORMAT(ufixed64_, unsigned_, fixed, eight_bytes)
          DECLARE_FORMAT(float16_, signed_, floating, two_bytes)
          DECLARE_FORMAT(float32_, signed_, floating, four_bytes)
          DECLARE_FORMAT(float64_, signed_, floating, eight_bytes)
          DECLARE_FORMAT(ufloat32_, unsigned_, floating, four_bytes)
          DECLARE_FORMAT(float32_stride32_, signed_, floating, eight_bytes)

#undef DECLARE_FORMAT

        } // namespace numeric

        META_ASPECT_DECLARE(format,
                            Format,
                            struct,
                            (signed_)(unsigned_)(integral_)(signed_integral)(unsigned_integral)(fixed_)(signed_fixed)(unsigned_fixed)(floating_)(signed_floating)(unsigned_floating)(bool_)(int8_)(int16_)(int32_)(int64_)(uint8_)(uint16_)(uint32_)(uint64_)(fixed16_)(fixed32_)(fixed64_)(ufixed16_)(ufixed32_)(ufixed64_)(float16_)(float32_)(float64_)(ufloat32_)(float32_stride32_))

        META_ASPECT_DECLARE(dimension, Dimension, struct, (oned)(twod)(threed)(rectangle)(buffer)(cube_map))
        META_ASPECT_DECLARE(cardinality,
                            Cardinality,
                            struct,
                            (one)(two)(array)(two_by_two)(two_by_three)(two_by_four)(three)(three_by_two)(three_by_three)(three_by_four)(four)(four_by_two)(four_by_three)(four_by_four))
        META_ASPECT_DECLARE(packing, Packing, struct, (one_in_one)(two_in_one)(three_in_one)(four_in_one))
        META_ASPECT_DECLARE(component,
                            Component,
                            struct,
                            (depth)(stencil)(depth_stencil)(red)(green)(blue)(red_green)(red_green_blue)(red_green_blue_alpha))
        META_ASPECT_DECLARE(order, Order, struct, (forward)(reverse))
        META_ASPECT_DECLARE(normalization, Normalization, struct, (none)(normalized))
        META_ASPECT_DECLARE(compression, Compression, struct, (none)(compressed))
        META_ASPECT_DECLARE(target, Target, struct, (unknown)(any)(texture)(renderbuffer))
        META_ASPECT_DECLARE(count, Count, struct, (one)(two)(three)(four))
        META_ASPECT_DECLARE(sample, Sample, struct, (simple)(multi))
        META_ASPECT_DECLARE(compare, Compare, struct, (normal)(shadow))

      } // namespace common
    } // namespace formats

    namespace fc = ::gtulu::internal::formats::common;
    namespace fcn = ::gtulu::internal::formats::common::numeric;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_COMMON_HPP_ */

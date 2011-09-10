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

#include "gtulu/internal/formats/numeric.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace common {

        META_ASPECT_DECLARE(numeric,
                            Numeric,
                            using fn::,
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

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_COMMON_HPP_ */

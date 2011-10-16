/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_COMMON_HPP_
#define GTULU_INTERNAL_FORMAT_COMMON_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/internal/constants_fwd.hpp"

#include "meta/type_traits.hpp"

#include "gtulu/internal/format/numeric.hpp"

#include <boost/mpl/not.hpp>
#include <boost/mpl/or.hpp>
#include <boost/mpl/and.hpp>

namespace gtulu {
  namespace internal {

    namespace format {
      namespace common {

        META_ASPECT_DECLARE(numeric,
                            Numeric,
                            using fnum::,
                            (signed_)(unsigned_)(integral_)(signed_integral)(unsigned_integral)(fixed_)(signed_fixed)(unsigned_fixed)(floating_)(signed_floating)(unsigned_floating)(bool_)(int8_)(int16_)(int32_)(int64_)(uint8_)(uint16_)(uint32_)(uint64_)(fixed8_)(fixed16_)(fixed32_)(fixed64_)(ufixed8_)(ufixed16_)(ufixed32_)(ufixed64_)(float16_)(float32_)(float64_)(ufloat32_)(float32_stride32_)(ufixed2_)(ufixed_least2_)(ufixed4_)(ufixed5_)(ufixed10_)(ufixed12_)(ufixed14_)(ufixed24_)(uint1_)(uint2_)(uint4_)(float_least10_))

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
        META_ASPECT_DECLARE(precision,
                            Precision,
                            struct,
                            (at_least_one_bit)(at_least_two_bits)(at_least_three_bits)(at_least_four_bits)(at_least_five_bits)(at_least_six_bits)(at_least_seven_bits)(at_least_one_byte)(at_least_two_bytes)(at_least_four_bytes)(at_least_eight_bytes))

      } // namespace common
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_COMMON_HPP_ */

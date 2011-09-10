/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_CONVERSION_INTERNAL_HPP_
#define GTULU_INTERNAL_FORMAT_CONVERSION_INTERNAL_HPP_

#include "gtulu/internal/format/internal.hpp"
#include "gtulu/internal/format/data.hpp"
#include "gtulu/internal/format/group.hpp"
#include "gtulu/internal/format/conversion/common.hpp"

namespace gtulu {
  namespace internal {

    namespace format {
      namespace internal {

        template< typename Component >
        struct get_ideal_component_packing;

#define DECLARE_CONVERT(component_m, packing_m) \
    template< > struct get_ideal_component_packing< fc::component::component_m > { typedef fc::packing::packing_m type; };

        DECLARE_CONVERT(stencil, two_in_one)
        DECLARE_CONVERT(depth, two_in_one)
        DECLARE_CONVERT(depth_stencil, two_in_one)
        DECLARE_CONVERT(red, one_in_one)
        DECLARE_CONVERT(red_green_blue, three_in_one)
        DECLARE_CONVERT(red_green_blue_alpha, four_in_one)

#undef DECLARE_CONVERT

        template< typename InternalIntegral >
        struct get_ideal_group_integral;
        template< typename InternalIntegral >
        struct get_ideal_data_integral;

#define DECLARE_CONVERT(internal_integral_m, integral_m) \
    template< > struct get_ideal_group_integral< fn::integral::internal_integral_m > { typedef fn::integral::integral_m type; }; \
    template< > struct get_ideal_data_integral< fn::integral::internal_integral_m > { typedef fn::integral::integral_m type; };

        DECLARE_CONVERT(floating, floating)
        DECLARE_CONVERT(fixed, floating)
        DECLARE_CONVERT(integral, integral)

#undef DECLARE_CONVERT

      } // namespace internal
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONVERSION_INTERNAL_HPP_ */

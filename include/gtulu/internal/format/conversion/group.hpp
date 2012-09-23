/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_CONVERTION_GROUP_HPP_
#define GTULU_INTERNAL_FORMAT_CONVERTION_GROUP_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/internal/format/data.hpp"
#include "gtulu/internal/format/internal.hpp"
#include "gtulu/internal/format/conversion/common.hpp"

namespace gtulu {
  namespace internal {

    namespace format {
      namespace group {

        template< typename GroupComponent >
        struct get_ideal_internal_component;

#define DECLARE_CONVERT(group_component_m, internal_component_m) \
  template< > struct get_ideal_internal_component< fcmn::component::group_component_m > { typedef fcmn::component::internal_component_m type; };

        DECLARE_CONVERT(depth, depth)
        DECLARE_CONVERT(depth_stencil, depth_stencil)
        DECLARE_CONVERT(stencil, stencil)
        DECLARE_CONVERT(red, red)
        DECLARE_CONVERT(green, red_green)
        DECLARE_CONVERT(blue, red_green_blue)
        DECLARE_CONVERT(red_green, red_green)
        DECLARE_CONVERT(red_green_blue, red_green_blue)
        DECLARE_CONVERT(red_green_blue_alpha, red_green_blue_alpha)

#undef DECLARE_CONVERT

      } // namespace group
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONVERTION_GROUP_HPP_ */

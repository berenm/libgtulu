/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_CONSTRAINT_GROUP_HPP_
#define GTULU_INTERNAL_FORMAT_CONSTRAINT_GROUP_HPP_

#include "gtulu/internal/formats/group.hpp"
#include "gtulu/internal/formats/internal.hpp"

namespace gtulu {
  namespace internal {
    namespace bm = ::boost::mpl;

    namespace formats {
      namespace group {

        template< typename GroupFormat, typename InternalFormat >
        struct internal_type_check {
            typedef bm::or_< fc::integral::is_floating< InternalFormat >, fc::integral::is_fixed< InternalFormat > > is_internal_floating;
            typedef bm::or_< fc::integral::is_integral< InternalFormat > > is_internal_integral;

            typedef bm::and_< is_internal_floating, fc::integral::is_floating< GroupFormat > > are_both_floating;
            typedef bm::and_< is_internal_integral, fc::integral::is_integral< GroupFormat > > are_both_integral;

            typedef bm::or_< are_both_floating, are_both_integral > type;
            static_assert(type::value, "internal_type_t is not compatible with GroupFormat, floating group require floating, fixed or unsigned_fixed internal type, integer group require integer internal type and ::std::uint32_teger group require ::std::uint32_teger internal type.");
        };

        template< typename GroupFormat, typename InternalFormat >
        struct components_check {
            typedef bm::or_< fc::component::is_red< InternalFormat >, fc::component::is_red_green< InternalFormat >,
                fc::component::is_red_green_blue< InternalFormat >,
                fc::component::is_red_green_blue_alpha< InternalFormat > > has_red_component;
            typedef bm::or_< fc::component::is_green< InternalFormat >, fc::component::is_red_green< InternalFormat >,
                fc::component::is_red_green_blue< InternalFormat >,
                fc::component::is_red_green_blue_alpha< InternalFormat > > has_green_component;
            typedef bm::or_< fc::component::is_blue< InternalFormat >,
                fc::component::is_red_green_blue< InternalFormat >,
                fc::component::is_red_green_blue_alpha< InternalFormat > > has_blue_component;
            typedef fc::component::is_red_green_blue_alpha< InternalFormat > has_alpha_component;

            typedef bm::or_< fc::component::is_depth< InternalFormat >,
                fc::component::is_depth_stencil< InternalFormat > > has_depth_component;
            typedef bm::or_< fc::component::is_stencil< InternalFormat >,
                fc::component::is_depth_stencil< InternalFormat > > has_stencil_component;

            typedef bm::and_< fc::component::is_red< GroupFormat >, has_red_component > red_c;
            typedef bm::and_< fc::component::is_green< GroupFormat >, has_red_component > green_c;
            typedef bm::and_< fc::component::is_blue< GroupFormat >, has_red_component > blue_c;
            typedef bm::and_< fc::component::is_red_green< GroupFormat >,
                bm::and_< has_red_component, has_green_component > > rg_c;
            typedef bm::and_< fc::component::is_red_green_blue< GroupFormat >,
                bm::and_< has_red_component, has_green_component, has_blue_component > > rgb_c;
            typedef bm::and_< fc::component::is_red_green_blue_alpha< GroupFormat >,
                bm::and_< has_red_component, has_green_component, has_blue_component, has_alpha_component > > rgba_c;

            typedef bm::and_< fc::component::is_depth< GroupFormat >, has_depth_component > depth_c;
            typedef bm::and_< fc::component::is_stencil< GroupFormat >, has_stencil_component > stencil_c;
            typedef bm::and_< fc::component::is_depth_stencil< GroupFormat >,
                bm::and_< has_depth_component, has_stencil_component > > depth_stencil_c;

            typedef bm::or_< bm::or_< red_c, green_c, blue_c, rg_c, rgb_c >
                , bm::or_< rgba_c, depth_c, stencil_c, depth_stencil_c > > type;
            static_assert(type::value, "cannot find group components from GroupFormat in internal_type_t, groups with red component require red component in internal data, groups with green component require green component in internal data, etc...");
        };

        template< typename GroupFormat, typename InternalFormat >
        struct is_internal_compatible {
            typedef typename internal_type_check< GroupFormat, InternalFormat >::type internal_type_c;
            typedef typename components_check< GroupFormat, InternalFormat >::type components_c;

            typedef bm::and_< internal_type_c, components_c > type;
        };
      } // namespace group
    } // namespace formats

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONSTRAINT_GROUP_HPP_ */

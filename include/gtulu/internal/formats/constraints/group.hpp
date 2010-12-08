/**
 * @file
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

        template< typename group_format_t, typename internal_format_t >
        struct internal_type_check {
            typedef bm::or_< fit::is_floating< internal_format_t >, fit::is_fixed< internal_format_t >,
                fit::is_unsigned_fixed< internal_format_t > > is_internal_floating;
            typedef bm::or_< fit::is_integer< internal_format_t >, fit::is_unsigned_integer< internal_format_t > >
                is_internal_integer;

            typedef bm::and_< is_internal_floating, fgt::is_floating< group_format_t > > are_both_floating;
            typedef bm::and_< is_internal_integer, fgt::is_integer< group_format_t > > are_both_integer;

            typedef bm::or_< are_both_floating, are_both_integer > type;
            static_assert(type::value, "internal_type_t is not compatible with group_format_t, floating group require floating, fixed or unsigned_fixed internal type, integer group require integer internal type and ::std::uint32_teger group require ::std::uint32_teger internal type.");
        };

        template< typename group_format_t, typename internal_format_t >
        struct components_check {
            typedef bm::or_< fib::is_r< internal_format_t >, fib::is_rg< internal_format_t >, fib::is_rgb<
                internal_format_t >, fib::is_rgba< internal_format_t > > has_red_component;
            typedef bm::or_< fib::is_rg< internal_format_t >, fib::is_rgb< internal_format_t >, fib::is_rgba<
                internal_format_t > > has_green_component;
            typedef bm::or_< fib::is_rgb< internal_format_t >, fib::is_rgba< internal_format_t > > has_blue_component;
            typedef fib::is_rgba< internal_format_t > has_alpha_component;

            typedef bm::or_< fib::is_depth< internal_format_t >, fib::is_depth_stencil< internal_format_t > >
                has_depth_component;
            typedef bm::or_< fib::is_stencil< internal_format_t >, fib::is_depth_stencil< internal_format_t > >
                has_stencil_component;

            typedef bm::and_< fgb::is_r< group_format_t >, has_red_component > red_c;
            typedef bm::and_< fgb::is_g< group_format_t >, has_red_component > green_c;
            typedef bm::and_< fgb::is_b< group_format_t >, has_red_component > blue_c;
            typedef bm::and_< fgb::is_rg< group_format_t >, bm::and_< has_red_component, has_green_component > > rg_c;
            typedef bm::and_< fgb::is_rgb< group_format_t >, bm::and_< has_red_component, has_green_component,
                has_blue_component > > rgb_c;
            typedef bm::and_< fgb::is_rgba< group_format_t >, bm::and_< has_red_component, has_green_component,
                has_blue_component, has_alpha_component > > rgba_c;

            typedef bm::and_< fgb::is_depth< group_format_t >, has_depth_component > depth_c;
            typedef bm::and_< fgb::is_stencil< group_format_t >, has_stencil_component > stencil_c;
            typedef bm::and_< fgb::is_depth_stencil< group_format_t >, bm::and_< has_depth_component,
                has_stencil_component > > depth_stencil_c;

            typedef bm::or_< bm::or_< red_c, green_c, blue_c, rg_c, rgb_c >, bm::or_< rgba_c, depth_c, stencil_c,
                depth_stencil_c > > type;
            static_assert(type::value, "cannot find group components from group_format_t in internal_type_t, groups with red component require red component in internal data, groups with green component require green component in internal data, etc...");
        };

        template< typename group_format_t, typename internal_format_t >
        struct is_internal_compatible {
            typedef typename internal_type_check< group_format_t, internal_format_t >::type internal_type_c;
            typedef typename components_check< group_format_t, internal_format_t >::type components_c;

            typedef bm::and_< internal_type_c, components_c > type;
        };
      } // namespace group
    } // namespace formats

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONSTRAINT_GROUP_HPP_ */

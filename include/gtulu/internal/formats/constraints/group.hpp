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
            typedef bm::and_< bm::not_< fn::integral::is_floating< fc::get_numeric< InternalFormat >::type > >,
                bm::not_< fn::integral::is_fixed< fc::get_numeric< InternalFormat >::type > > > internal_is_neither_floating_or_fixed;

            typedef bm::and_< fn::integral::is_floating< fc::get_numeric< GroupFormat >::type >,
                internal_is_neither_floating_or_fixed > group_is_floating_but_internal_is_not;
            typedef bm::and_< fn::integral::is_integral< fc::get_numeric< GroupFormat >::type >,
                bm::not_< fn::integral::is_integral< fc::get_numeric< InternalFormat >::type > > > group_is_integral_but_internal_is_not;

            typedef bm::and_< bm::not_< group_is_floating_but_internal_is_not >,
                bm::not_< group_is_integral_but_internal_is_not > > type;

            static_assert(type::value, "GroupFormat is not compatible with InternalFormat");
            static_assert(type::value, "");
            static_assert(type::value, "  [3.7.2 Transfer of Pixel Rectangles]");
            static_assert(type::value, "  [3.9.3 Texture Image Specification]");
            static_assert(group_is_floating_but_internal_is_not::value, "  - GroupFormat is floating but InternalFormat is neither floating nor fixed.");
            static_assert(group_is_integral_but_internal_is_not::value, "  - GroupFormat is integral but InternalFormat is not.");
        };

        template< typename Format >
        struct has_no_red_component: bm::and_< bm::not_< fc::component::is_red< Format > >,
            bm::not_< fc::component::is_red_green< Format > >, bm::not_< fc::component::is_red_green_blue< Format > >,
            bm::not_< fc::component::is_red_green_blue_alpha< Format > > > {
        };
        template< typename Format >
        struct has_no_green_component: bm::and_< bm::not_< fc::component::is_green< Format > >,
            bm::not_< fc::component::is_red_green< Format > >, bm::not_< fc::component::is_red_green_blue< Format > >,
            bm::not_< fc::component::is_red_green_blue_alpha< Format > > > {
        };
        template< typename Format >
        struct has_no_blue_component: bm::and_< bm::not_< fc::component::is_blue< Format > >,
            bm::not_< fc::component::is_red_green_blue< Format > >,
            bm::not_< fc::component::is_red_green_blue_alpha< Format > > > {
        };
        template< typename Format >
        struct has_no_alpha_component: bm::not_< fc::component::is_red_green_blue_alpha< Format > > {
        };
        template< typename Format >
        struct has_no_depth_component: bm::and_< bm::not_< fc::component::is_depth< Format > >,
            bm::not_< fc::component::is_depth_stencil< Format > > > {
        };
        template< typename Format >
        struct has_no_stencil_component: bm::and_< bm::not_< fc::component::is_stencil< Format > >,
            bm::not_< fc::component::is_depth_stencil< Format > > > {
        };

        template< typename GroupFormat, typename InternalFormat >
        struct components_check {
            typedef has_no_red_component< InternalFormat > internal_has_no_red_component;
            typedef has_no_green_component< InternalFormat > internal_has_no_green_component;
            typedef has_no_blue_component< InternalFormat > internal_has_no_blue_component;
            typedef has_no_alpha_component< InternalFormat > internal_has_no_alpha_component;
            typedef has_no_depth_component< InternalFormat > internal_has_no_depth_component;
            typedef has_no_stencil_component< InternalFormat > internal_has_no_stencil_component;

            typedef bm::not_< has_no_red_component< GroupFormat > > group_has_red_component;
            typedef bm::not_< has_no_green_component< GroupFormat > > group_has_green_component;
            typedef bm::not_< has_no_blue_component< GroupFormat > > group_has_blue_component;
            typedef bm::not_< has_no_alpha_component< GroupFormat > > group_has_alpha_component;
            typedef bm::not_< has_no_depth_component< GroupFormat > > group_has_depth_component;
            typedef bm::not_< has_no_stencil_component< GroupFormat > > group_has_stencil_component;

            typedef bm::and_< group_has_red_component, internal_has_no_red_component > group_has_red_but_internal_has_not;
            typedef bm::and_< group_has_green_component, internal_has_no_green_component > group_has_green_but_internal_has_not;
            typedef bm::and_< group_has_blue_component, internal_has_no_blue_component > group_has_blue_but_internal_has_not;
            typedef bm::and_< group_has_alpha_component, internal_has_no_alpha_component > group_has_alpha_but_internal_has_not;
            typedef bm::and_< group_has_depth_component, internal_has_no_depth_component > group_has_depth_but_internal_has_not;
            typedef bm::and_< group_has_stencil_component, internal_has_no_stencil_component > group_has_stencil_but_internal_has_not;

            typedef bm::and_<
                bm::and_< bm::not_< group_has_red_but_internal_has_not >,
                    bm::not_< group_has_green_but_internal_has_not >, bm::not_< group_has_blue_but_internal_has_not >,
                    bm::not_< group_has_alpha_but_internal_has_not > >
                , bm::and_< bm::not_< group_has_depth_but_internal_has_not >,
                    bm::not_< group_has_stencil_but_internal_has_not > > > type;

            static_assert(type::value, "GroupFormat is not compatible with InternalFormat");
            static_assert(type::value, "");
            static_assert(type::value, "  [3.7.2 Transfer of Pixel Rectangles]");
            static_assert(type::value, "  [3.9.3 Texture Image Specification]");
            static_assert(group_has_red_but_internal_has_not::value, "  - GroupFormat has red component but InternalFormat doesn't.");
            static_assert(group_has_green_but_internal_has_not::value, "  - GroupFormat has green component but InternalFormat doesn't.");
            static_assert(group_has_blue_but_internal_has_not::value, "  - GroupFormat has blue component but InternalFormat doesn't.");
            static_assert(group_has_alpha_but_internal_has_not::value, "  - GroupFormat has alpha component but InternalFormat doesn't.");
            static_assert(group_has_depth_but_internal_has_not::value, "  - GroupFormat has depth component but InternalFormat doesn't.");
            static_assert(group_has_stencil_but_internal_has_not::value, "  - GroupFormat has stencil component but InternalFormat doesn't.");
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

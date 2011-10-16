/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_CONSTRAINT_GROUP_HPP_
#define GTULU_INTERNAL_FORMAT_CONSTRAINT_GROUP_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/internal/format/constraint/common.hpp"

#include "gtulu/internal/format/group.hpp"
#include "gtulu/internal/format/internal.hpp"

namespace gtulu {
  namespace internal {

    namespace format {
      namespace group {

        template< typename GroupFormat, typename InternalFormat >
        struct internal_type_check {
            typedef bm::and_<
                bm::not_< fnum::integral::is_floating< typename fcmn::get_numeric< InternalFormat >::type > >,
                bm::not_< fnum::integral::is_fixed< typename fcmn::get_numeric< InternalFormat >::type > > > internal_is_neither_floating_or_fixed;

            typedef bm::and_< fnum::integral::is_floating< typename fcmn::get_numeric< GroupFormat >::type >,
                internal_is_neither_floating_or_fixed > group_is_floating_but_internal_is_not;
            typedef bm::and_< fnum::integral::is_integral< typename fcmn::get_numeric< GroupFormat >::type >,
                bm::not_< fnum::integral::is_integral< typename fcmn::get_numeric< InternalFormat >::type > > > group_is_integral_but_internal_is_not;

            typedef bm::and_< bm::not_< group_is_floating_but_internal_is_not >,
                bm::not_< group_is_integral_but_internal_is_not > > type;

            static_assert(type::value, "GroupFormat is not compatible with InternalFormat");
            static_assert(type::value, "");
            static_assert(type::value, "  [3.7.2 Transfer of Pixel Rectangles]");
            static_assert(type::value, "  [3.9.3 Texture Image Specification]");
            static_assert(bm::not_< group_is_floating_but_internal_is_not >::value, "  - GroupFormat is floating but InternalFormat is neither floating nor fixed.");
            static_assert(bm::not_< group_is_integral_but_internal_is_not >::value, "  - GroupFormat is integral but InternalFormat is not.");
        };

        template< typename GroupFormat, typename InternalFormat >
        struct components_check {
            typedef fcmn::component::has_no_red< InternalFormat > internal_has_no_red_component;
            typedef fcmn::component::has_no_green< InternalFormat > internal_has_no_green_component;
            typedef fcmn::component::has_no_blue< InternalFormat > internal_has_no_blue_component;
            typedef fcmn::component::has_no_alpha< InternalFormat > internal_has_no_alpha_component;
            typedef fcmn::component::has_no_depth< InternalFormat > internal_has_no_depth_component;
            typedef fcmn::component::has_no_stencil< InternalFormat > internal_has_no_stencil_component;

            typedef fcmn::component::has_red< GroupFormat > group_has_red_component;
            typedef fcmn::component::has_green< GroupFormat > group_has_green_component;
            typedef fcmn::component::has_blue< GroupFormat > group_has_blue_component;
            typedef fcmn::component::has_alpha< GroupFormat > group_has_alpha_component;
            typedef fcmn::component::has_depth< GroupFormat > group_has_depth_component;
            typedef fcmn::component::has_stencil< GroupFormat > group_has_stencil_component;

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
            static_assert(bm::not_< group_has_red_but_internal_has_not >::value, "  - GroupFormat has red component but InternalFormat doesn't.");
            static_assert(bm::not_< group_has_green_but_internal_has_not >::value, "  - GroupFormat has green component but InternalFormat doesn't.");
            static_assert(bm::not_< group_has_blue_but_internal_has_not >::value, "  - GroupFormat has blue component but InternalFormat doesn't.");
            static_assert(bm::not_< group_has_alpha_but_internal_has_not >::value, "  - GroupFormat has alpha component but InternalFormat doesn't.");
            static_assert(bm::not_< group_has_depth_but_internal_has_not >::value, "  - GroupFormat has depth component but InternalFormat doesn't.");
            static_assert(bm::not_< group_has_stencil_but_internal_has_not >::value, "  - GroupFormat has stencil component but InternalFormat doesn't.");
        };

        template< typename GroupFormat, typename InternalFormat >
        struct is_internal_compatible {
            typedef typename internal_type_check< GroupFormat, InternalFormat >::type internal_type_c;
            typedef typename components_check< GroupFormat, InternalFormat >::type components_c;

            typedef bm::and_< internal_type_c, components_c > type;
        };
      } // namespace group
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONSTRAINT_GROUP_HPP_ */

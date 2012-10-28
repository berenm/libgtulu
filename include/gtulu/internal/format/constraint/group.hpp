/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_CONSTRAINT_GROUP_HPP_
#define GTULU_INTERNAL_FORMAT_CONSTRAINT_GROUP_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/internal/format/constraint/numeric.hpp"
#include "gtulu/internal/format/constraint/common.hpp"

#include "gtulu/internal/format/group.hpp"
#include "gtulu/internal/format/internal.hpp"

namespace gtulu {
  namespace internal {

    namespace format {
      namespace group {

        template< typename GroupFormat, typename InternalFormat >
        struct internal_type_check {
          using floating_check = fnum::integral::floating_implies_convertible< GroupFormat, InternalFormat >;
          using integral_check = meta::imply_same< fnum::integral::is_integral, GroupFormat, InternalFormat >;

          typedef meta::and_< floating_check, integral_check > type;

          static_assert(type::value, "GroupFormat is not compatible with InternalFormat");
          static_assert(type::value, "");
          static_assert(type::value, "  [3.7.2 Transfer of Pixel Rectangles]");
          static_assert(type::value, "  [3.9.3 Texture Image Specification]");
          static_assert(floating_check::value, "  - GroupFormat is floating but InternalFormat is neither floating nor fixed.");
          static_assert(integral_check::value, "  - GroupFormat is integral but InternalFormat is not.");
        };

        template< typename GroupFormat, typename InternalFormat >
        struct components_check {
          using r_check = meta::imply_same< fcmn::component::has_red, GroupFormat, InternalFormat >;
          using g_check = meta::imply_same< fcmn::component::has_green, GroupFormat, InternalFormat >;
          using b_check = meta::imply_same< fcmn::component::has_blue, GroupFormat, InternalFormat >;
          using a_check = meta::imply_same< fcmn::component::has_alpha, GroupFormat, InternalFormat >;
          using d_check = meta::imply_same< fcmn::component::has_depth, GroupFormat, InternalFormat >;
          using s_check = meta::imply_same< fcmn::component::has_stencil, GroupFormat, InternalFormat >;

          typedef meta::and_< r_check, g_check, b_check, a_check, d_check, s_check > type;

          static_assert(type::value, "GroupFormat is not compatible with InternalFormat");
          static_assert(type::value, "");
          static_assert(type::value, "  [3.7.2 Transfer of Pixel Rectangles]");
          static_assert(type::value, "  [3.9.3 Texture Image Specification]");
          static_assert(r_check::value, "  - GroupFormat has red component but InternalFormat doesn't.");
          static_assert(g_check::value, "  - GroupFormat has green component but InternalFormat doesn't.");
          static_assert(b_check::value, "  - GroupFormat has blue component but InternalFormat doesn't.");
          static_assert(a_check::value, "  - GroupFormat has alpha component but InternalFormat doesn't.");
          static_assert(d_check::value, "  - GroupFormat has depth component but InternalFormat doesn't.");
          static_assert(s_check::value, "  - GroupFormat has stencil component but InternalFormat doesn't.");
        };

        template< typename GroupFormat, typename InternalFormat >
        using is_internal_compatible =
                meta::and_< typename internal_type_check< GroupFormat, InternalFormat >::type,
                            typename components_check< GroupFormat, InternalFormat >::type >;

      } // namespace group
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONSTRAINT_GROUP_HPP_ */

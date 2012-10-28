/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_CONSTRAINT_TARGET_HPP_
#define GTULU_INTERNAL_FORMAT_CONSTRAINT_TARGET_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/internal/format/constraint/numeric.hpp"
#include "gtulu/internal/format/constraint/common.hpp"

#include "gtulu/internal/format/target.hpp"
#include "gtulu/internal/format/internal.hpp"

namespace gtulu {
  namespace internal {

    namespace format {
      namespace target {

        template< typename TargetFormat, typename InternalFormat >
        struct depth_stencil_check {
          typedef meta::imply< fcmn::component::has_depth_or_stencil< InternalFormat >,
                               fcmn::is_depth_stencil_capable< TargetFormat > > type;

          static_assert(type::value, "TargetFormat is not compatible with InternalFormat.");
          static_assert(type::value, "");
          static_assert(type::value, "  [3.8.1 Texture Image Specification]");
          static_assert(type::value, "  - InternalFormat has depth and/or stencil component but TargetFormat is not depth/stencil capable.");
          static_assert(type::value, "    Textures with a base internal format of DEPTH_COMPONENT or DEPTH_STENCIL are supported by texture image specification commands only if target is TEXTURE_1D, TEXTURE_2D, TEXTURE_1D_ARRAY, TEXTURE_2D_ARRAY, TEXTURE_RECTANGLE, TEXTURE_CUBE_MAP, PROXY_TEXTURE_1D, PROXY_TEXTURE_2D, PROXY_TEXTURE_1D_ARRAY, PROXY_TEXTURE_2D_ARRAY, PROXY_TEXTURE_RECTANGLE, or PROXY_TEXTURE_CUBE_MAP. Using these format in conjunction with any other target will result in an INVALID_OPERATION error.");
        };

        template< typename TargetFormat, typename InternalFormat >
        struct compression_check {
          typedef meta::imply< fcmn::compression::is_compressed< InternalFormat >,
                               fcmn::dimension::is_not_rectangle< TargetFormat > > type;
          static_assert(type::value, "Compressed InternalFormat is not compatible with rectangle TargetFormat.");
        };

        template< typename TargetFormat, typename InternalFormat >
        struct restriction_check {
          using rbuffer_check = meta::imply_same< fcmn::target::is_renderbuffer, InternalFormat, TargetFormat >;
          using texture_check = meta::imply_same< fcmn::target::is_texture, InternalFormat, TargetFormat >;

          typedef meta::and_< rbuffer_check, texture_check > type;

          static_assert(type::value, "TargetFormat is not compatible with InternalFormat.");
          static_assert(type::value, "");
          static_assert(type::value, "  [3.8.1 Texture Image Specification]");
          static_assert(rbuffer_check::value, "  - InternalFormat is renderbuffer only and TargetFormat is not renderbuffer.");
          static_assert(texture_check::value, "  - InternalFormat is texture only and TargetFormat is not texture.");
        };

        template< typename TargetFormat, typename InternalFormat >
        using is_internal_compatible =
                meta::and_< typename depth_stencil_check< TargetFormat, InternalFormat >::type,
                            typename restriction_check< TargetFormat, InternalFormat >::type,
                            typename compression_check< TargetFormat, InternalFormat >::type >;

      } // namespace target
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONSTRAINT_TARGET_HPP_ */

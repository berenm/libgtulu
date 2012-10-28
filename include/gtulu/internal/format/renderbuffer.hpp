/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_RENDERBUFFER_HPP_
#define GTULU_INTERNAL_FORMAT_RENDERBUFFER_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/internal/constants_fwd.hpp"

#include "gtulu/internal/format/common.hpp"

#include "gtulu/internal/format/constraint/data.hpp"
#include "gtulu/internal/format/constraint/group.hpp"
#include "gtulu/internal/format/constraint/target.hpp"

#include "gtulu/internal/format/conversion/internal.hpp"

namespace gtulu {
  namespace internal {

    namespace format {
      namespace renderbuffer {
        template< typename TargetFormat, typename InternalFormat >
        struct renderbuffer_format {
          using target_check  = ftgt::is_internal_compatible< TargetFormat, InternalFormat >;
          using texture_check = fcmn::target::is_texture< TargetFormat >;

          typedef meta::and_< target_check, texture_check > type;
          static_assert(type::value, "RenderbufferFormat is invalid.");

          typedef TargetFormat   target;
          typedef InternalFormat internal;
        };

        template< typename Component   = fcmn::component::red_green_blue_alpha,
                  typename Numeric     = fcmn::numeric::ufixed8_,
                  typename Compression = fcmn::compression::none >
        struct select_format {
          typedef typename fint::select_format< Component, Numeric, Compression >::type internal_format;

          typedef renderbuffer_format< ftgt::gl_renderbuffer, internal_format > type;
        };

      } // namespace renderbuffer
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_RENDERBUFFER_HPP_ */

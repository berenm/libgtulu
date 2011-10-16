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
        struct renderbuffer_format: ftgt::is_internal_compatible< TargetFormat, InternalFormat >,
        fcmn::target::is_renderbuffer< TargetFormat > {
            typedef TargetFormat target;
            typedef InternalFormat internal;
        };

        template< typename Component = fcmn::component::red_green_blue_alpha,
            typename Numeric = fcmn::numeric::ufixed8_, typename Compression = fcmn::compression::none >
        class select_format {
//            typedef typename fint::to_group_type< Type >::type group_type;
//            typedef typename fint::to_data_type< Type >::type data_type;
//            typedef typename fint::to_data_packing< Base >::packing data_packing;

            typedef typename fint::select_format< Component, Numeric, Compression >::type internal_format;

          public:
            typedef renderbuffer_format< ftgt::gl_renderbuffer, internal_format > type;
        };
      } // namespace renderbuffer
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_RENDERBUFFER_HPP_ */

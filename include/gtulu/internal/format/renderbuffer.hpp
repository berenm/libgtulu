/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_RENDERBUFFER_HPP_
#define GTULU_INTERNAL_FORMAT_RENDERBUFFER_HPP_

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
        struct renderbuffer_format: ft::is_internal_compatible< TargetFormat, InternalFormat >,
        fc::target::is_renderbuffer< TargetFormat > {
            typedef TargetFormat target;
            typedef InternalFormat internal;
        };

        template< typename Component = fc::component::red_green_blue_alpha, typename Numeric = fc::numeric::ufixed8_,
            typename Compression = fc::compression::none >
        class select_format {
//            typedef typename fi::to_group_type< Type >::type group_type;
//            typedef typename fi::to_data_type< Type >::type data_type;
//            typedef typename fi::to_data_packing< Base >::packing data_packing;

            typedef typename fi::select_format< Component, Numeric, Compression >::type internal_format;

          public:
            typedef renderbuffer_format< ft::gl_renderbuffer, internal_format > type;
        };
      } // namespace renderbuffer
    } // namespace format

    namespace frend = ::gtulu::internal::format::renderbuffer;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_RENDERBUFFER_HPP_ */

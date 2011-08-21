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

#include "gtulu/internal/formats/common.hpp"

#include "gtulu/internal/formats/constraints/data.hpp"
#include "gtulu/internal/formats/constraints/group.hpp"
#include "gtulu/internal/formats/constraints/target.hpp"

#include "gtulu/internal/formats/conversions/internal.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace renderbuffer {
        template< typename TargetFormat, typename InternalFormat >
        struct renderbuffer_format: ft::is_internal_compatible< TargetFormat, InternalFormat >,
        ft::is_of_target_base< TargetFormat, ftb::renderbuffer > {
            typedef TargetFormat target;
            typedef InternalFormat internal;
        };

        template< typename Base = fib::rgba, fi::size_type Size = 8, typename Type = fit::unsigned_fixed,
            typename Compression = fic::normal >
        class renderbuffer_format_selector {
            typedef typename fi::to_group_type< Type >::type group_type;
            typedef typename fi::to_data_type< Type >::type data_type;
            typedef typename fi::to_data_packing< Base >::packing data_packing;

            typedef typename fi::format_selector< Base, Size, Type, Compression >::format internal_format;

          public:
            typedef renderbuffer_format< ft::gl_renderbuffer, internal_format > format;
        };
      } // namespace renderbuffer
    } // namespace formats

    namespace frend = ::gtulu::internal::formats::renderbuffer;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_RENDERBUFFER_HPP_ */

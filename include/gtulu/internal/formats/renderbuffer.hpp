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
        template< typename target_format_t, typename internal_format_t >
        struct renderbuffer_format: ft::is_internal_compatible< target_format_t, internal_format_t >,
        ft::is_of_target_base< target_format_t, ftb::renderbuffer > {
            typedef target_format_t target;
            typedef internal_format_t internal;
        };

        template< typename base_t = fib::rgba, fi::size_type size_t = 8, typename type_t = fit::unsigned_fixed,
            typename compression_t = fic::normal >
        class renderbuffer_format_selector {
            typedef typename fi::to_group_type< type_t >::type group_type;
            typedef typename fi::to_data_type< type_t >::type data_type;
            typedef typename fi::to_data_packing< base_t >::packing data_packing;

            typedef typename fi::format_selector< base_t, size_t, type_t, compression_t >::format internal_format;

          public:
            typedef renderbuffer_format< ft::gl_renderbuffer, internal_format > format;
        };
      } // namespace renderbuffer
    } // namespace formats

    namespace frend = ::gtulu::internal::formats::renderbuffer;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_RENDERBUFFER_HPP_ */

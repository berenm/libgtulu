/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_BINDING_BIND_HPP_
#define GTULU_INTERNAL_BINDING_BIND_HPP_

#include "gtulu/namespaces.hpp"

namespace gtulu {
  namespace internal {

    namespace binding {
      namespace detail {

        template< typename Target, typename Source >
        struct binder {
          void bind(Target& target, Source& source);
          void bind(Target const& target, Source& source);
        };

      } // namespace detail

      template< typename Target, typename Source >
      void bind(Target& target, Source& source) {
        detail::binder< Target, Source >::bind(target, source);
      }

      template< typename Target, typename Source >
      void bind(Target const& target, Source& source) {
        detail::binder< Target, Source >::bind(target, source);
      }

    } // namespace binding

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_BINDING_BIND_HPP_ */

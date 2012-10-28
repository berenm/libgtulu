/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_CONSTRAINT_NUMERIC_HPP_
#define GTULU_INTERNAL_FORMAT_CONSTRAINT_NUMERIC_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/internal/format/numeric.hpp"

#include <boost/mpl/or.hpp>

namespace gtulu {
  namespace internal {

    namespace format {
      namespace numeric {

        namespace integral {

          template< typename F >
          using is_floating_convertible = meta::or_< is_floating< F >, is_fixed< F > >;

          template< typename A, typename B >
          using floating_implies_convertible = meta::imply< is_floating< A >, is_floating_convertible< B > >;

        }

      } // namespace numeric
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONSTRAINT_NUMERIC_HPP_ */

/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 14 août 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_CONVERSION_DIMENSION_HPP_
#define GTULU_INTERNAL_FORMAT_CONVERSION_DIMENSION_HPP_

#include "gtulu/internal/format/common.hpp"

#include <boost/mpl/int.hpp>

namespace gtulu {
  namespace internal {

    namespace format {
      namespace common {
        template< ::std::uint8_t Dimension1, ::std::uint8_t Dimension2 = 1 >
        struct to_typename;

        template< >
        struct to_typename< 1 > {
            typedef fc::cardinality::one type;
        };
        template< >
        struct to_typename< 2 > {
            typedef fc::cardinality::two type;
        };
        template< >
        struct to_typename< 2, 2 > {
            typedef fc::cardinality::two_by_two type;
        };
        template< >
        struct to_typename< 2, 3 > {
            typedef fc::cardinality::two_by_three type;
        };
        template< >
        struct to_typename< 2, 4 > {
            typedef fc::cardinality::two_by_four type;
        };
        template< >
        struct to_typename< 3 > {
            typedef fc::cardinality::three type;
        };
        template< >
        struct to_typename< 3, 2 > {
            typedef fc::cardinality::three_by_two type;
        };
        template< >
        struct to_typename< 3, 3 > {
            typedef fc::cardinality::three_by_three type;
        };
        template< >
        struct to_typename< 3, 4 > {
            typedef fc::cardinality::three_by_four type;
        };
        template< >
        struct to_typename< 4 > {
            typedef fc::cardinality::four type;
        };
        template< >
        struct to_typename< 4, 2 > {
            typedef fc::cardinality::four_by_two type;
        };
        template< >
        struct to_typename< 4, 3 > {
            typedef fc::cardinality::four_by_three type;
        };
        template< >
        struct to_typename< 4, 4 > {
            typedef fc::cardinality::four_by_four type;
        };

        template< typename Dimension >
        struct to_literal {
            typedef ::boost::mpl::int_< 1 > type;
        };
        template< >
        struct to_literal< fc::cardinality::two > {
            typedef ::boost::mpl::int_< 2 > type;
        };
        template< >
        struct to_literal< fc::cardinality::three > {
            typedef ::boost::mpl::int_< 3 > type;
        };
        template< >
        struct to_literal< fc::cardinality::four > {
            typedef ::boost::mpl::int_< 4 > type;
        };
      } // namespace common
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONVERSION_DIMENSION_HPP_ */

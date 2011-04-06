/**
 * @file
 * @date 14 août 2010
 * @todo comment
 * @copyright 2008-2011. All rights reserved.
 */

#ifndef GTULU_INTERNAL_FORMAT_CONVERSION_DIMENSION_HPP_
#define GTULU_INTERNAL_FORMAT_CONVERSION_DIMENSION_HPP_

#include "gtulu/internal/formats/common.hpp"

#include <boost/mpl/int.hpp>

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace common {
        template< ::std::uint8_t dim1_t, ::std::uint8_t dim2_t = 1 >
        struct to_typename;

        template< >
        struct to_typename< 1 > {
            typedef fcd::one type;
        };
        template< >
        struct to_typename< 2 > {
            typedef fcd::two type;
        };
        template< >
        struct to_typename< 2, 2 > {
            typedef fcd::two_by_two type;
        };
        template< >
        struct to_typename< 2, 3 > {
            typedef fcd::two_by_three type;
        };
        template< >
        struct to_typename< 2, 4 > {
            typedef fcd::two_by_four type;
        };
        template< >
        struct to_typename< 3 > {
            typedef fcd::three type;
        };
        template< >
        struct to_typename< 3, 2 > {
            typedef fcd::three_by_two type;
        };
        template< >
        struct to_typename< 3, 3 > {
            typedef fcd::three_by_three type;
        };
        template< >
        struct to_typename< 3, 4 > {
            typedef fcd::three_by_four type;
        };
        template< >
        struct to_typename< 4 > {
            typedef fcd::four type;
        };
        template< >
        struct to_typename< 4, 2 > {
            typedef fcd::four_by_two type;
        };
        template< >
        struct to_typename< 4, 3 > {
            typedef fcd::four_by_three type;
        };
        template< >
        struct to_typename< 4, 4 > {
            typedef fcd::four_by_four type;
        };

        template< typename dimension_t >
        struct to_literal {
            typedef ::boost::mpl::int_< 1 > type;
        };
        template< >
        struct to_literal< fcd::two > {
            typedef ::boost::mpl::int_< 2 > type;
        };
        template< >
        struct to_literal< fcd::three > {
            typedef ::boost::mpl::int_< 3 > type;
        };
        template< >
        struct to_literal< fcd::four > {
            typedef ::boost::mpl::int_< 4 > type;
        };
      } // namespace common
    } // namespace formats

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONVERSION_DIMENSION_HPP_ */

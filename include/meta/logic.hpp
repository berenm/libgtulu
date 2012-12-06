/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef __META_LOGIC_HPP__
#define __META_LOGIC_HPP__

#include "gtulu/namespaces.hpp"

#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/and.hpp>
#include <boost/mpl/or.hpp>
#include <boost/mpl/not.hpp>
#include <boost/mpl/int.hpp>
#include <boost/mpl/same_as.hpp>
#include <boost/preprocessor.hpp>

namespace gtulu {

  namespace meta {
    namespace mpl = ::boost::mpl;

    namespace detail {
      template< typename T1 = mpl::true_, typename T2 = mpl::true_, typename T3 = mpl::true_, typename T4 = mpl::true_, typename... Ts >
      struct and_;

      template< typename T1, typename T2, typename T3, typename T4 >
      struct and_< T1, T2, T3, T4 > {
        using type = mpl::and_< T1, T2, T3, T4 >;
      };

      template< typename T1, typename T2, typename T3, typename T4, typename T, typename... Ts >
      struct and_< T1, T2, T3, T4, T, Ts... > {
        using type = mpl::and_< T1, T2, T3, T4, typename and_< T, Ts... >::type >;
      };

      template< typename T1 = mpl::false_, typename T2 = mpl::false_, typename T3 = mpl::false_, typename T4 = mpl::false_, typename... Ts >
      struct or_;

      template< typename T1, typename T2, typename T3, typename T4 >
      struct or_< T1, T2, T3, T4 > {
        using type = mpl::or_< T1, T2, T3, T4 >;
      };

      template< typename T1, typename T2, typename T3, typename T4, typename T, typename... Ts >
      struct or_< T1, T2, T3, T4, T, Ts... > {
        using type = mpl::or_< T1, T2, T3, T4, typename or_< T, Ts... >::type >;
      };

    }

    using mpl::not_;
    using mpl::int_;
    using mpl::true_;
    using mpl::false_;
    using mpl::if_;

    template< typename A, typename B >
    struct is_same : mpl::false_ {};

    template< typename A >
    struct is_same< A, A > : mpl::true_ {};

    template< typename... Ts >
    using or_ = typename detail::or_< Ts... >::type;

    template< typename... Ts >
    using and_ = typename detail::and_< Ts... >::type;

    template< typename A, typename B >
    using imply = mpl::or_< mpl::not_< A >, B >;

    template< template< typename > class C, typename A, typename B >
    using imply_same = mpl::or_< mpl::not_< C< A > >, C< B > >;
  }

}

#endif /* __META_LOGIC_HPP__ */

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
      template< typename ... Ts >
      struct and_;

      template< >
      struct and_< > {
        typedef mpl::and_< > type;
      };

      template< typename T1 >
      struct and_< T1 > {
        typedef mpl::and_< T1 > type;
      };

      template< typename T1, typename T2 >
      struct and_< T1, T2 > {
        typedef mpl::and_< T1, T2 > type;
      };

      template< typename T1, typename T2, typename T3 >
      struct and_< T1, T2, T3 > {
        typedef mpl::and_< T1, T2, T3 > type;
      };

      template< typename T1, typename T2, typename T3, typename T4 >
      struct and_< T1, T2, T3, T4 > {
        typedef mpl::and_< T1, T2, T3, T4 > type;
      };

      template< typename T1, typename T2, typename T3, typename T4, typename ... Ts >
      struct and_< T1, T2, T3, T4, Ts ... > {
        typedef mpl::and_< T1, T2, T3, T4, typename and_< Ts ... >::type > type;
      };

      template< typename ... Ts >
      struct or_;

      template< >
      struct or_< > {
        typedef mpl::or_< > type;
      };

      template< typename T1 >
      struct or_< T1 > {
        typedef mpl::or_< T1 > type;
      };

      template< typename T1, typename T2 >
      struct or_< T1, T2 > {
        typedef mpl::or_< T1, T2 > type;
      };

      template< typename T1, typename T2, typename T3 >
      struct or_< T1, T2, T3 > {
        typedef mpl::or_< T1, T2, T3 > type;
      };

      template< typename T1, typename T2, typename T3, typename T4 >
      struct or_< T1, T2, T3, T4 > {
        typedef mpl::or_< T1, T2, T3, T4 > type;
      };

      template< typename T1, typename T2, typename T3, typename T4, typename ... Ts >
      struct or_< T1, T2, T3, T4, Ts ... > {
        typedef mpl::or_< T1, T2, T3, T4, typename or_< Ts ... >::type > type;
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

    template< typename ... Ts >
    using or_ = typename detail::or_< Ts ... >::type;

    template< typename ... Ts >
    using and_ = typename  detail::and_< Ts ... >::type;

    template< typename A, typename B >
    using imply = mpl::or_< mpl::not_< A >, B >;

    template< template< typename > class C, typename A, typename B >
    using imply_same = mpl::or_< mpl::not_< C< A > >, C< B > >;
  }

}

#endif /* __META_LOGIC_HPP__ */

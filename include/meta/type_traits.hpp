/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 14 août 2010
 * @todo comment
 */

#ifndef META_TYPE_TRAITS_HPP_
#define META_TYPE_TRAITS_HPP_

#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/and.hpp>
#include <boost/mpl/or.hpp>
#include <boost/mpl/not.hpp>
#include <boost/mpl/equal_to.hpp>
#include <boost/mpl/same_as.hpp>
#include <boost/mpl/vector.hpp>
#include <type_traits>

#include <boost/preprocessor.hpp>

#define DECLARE_TRAIT(n, data_m, trait_m) \
  BOOST_PP_TUPLE_ELEM(2, 0, data_m) trait_m; \
  template< typename T > struct BOOST_PP_CAT(is_, trait_m): ::boost::mpl::false_ {}; \
  template< > struct BOOST_PP_CAT(is_, trait_m)< trait_m >: ::boost::mpl::true_ {}; \
  template< > struct BOOST_PP_CAT(is_a_, BOOST_PP_TUPLE_ELEM(2, 1, data_m))< trait_m >: ::boost::mpl::true_ {};

#define TRAIT_CAT_PREFIX(_, prefix_m, trait_m) prefix_m trait_m

#define DECLARE_TRAIT_ASPECT(aspect_m, prefix_m, traits_m) \
    namespace aspect_m { \
      template< typename Trait > struct BOOST_PP_CAT(is_a_, aspect_m): ::boost::mpl::false_ {}; \
      BOOST_PP_SEQ_FOR_EACH(DECLARE_TRAIT, (prefix_m, aspect_m), traits_m) \
    } \
    template< typename Trait > struct BOOST_PP_CAT(is_a_, aspect_m): aspect_m:: BOOST_PP_CAT(is_a_, aspect_m) < Trait > {};

#define DECLARE_HAS_TRAIT(aspect_m, trait_m, type_m) \
    namespace aspect_m { \
      template< > struct is_##trait_m< type_m >: ::boost::mpl::true_ {}; \
    }

#define DECLARE_HAS_TRAIT(aspect_m, trait_m, type_m) \
    namespace aspect_m { \
      template< > struct is_##trait_m< type_m >: ::boost::mpl::true_ {}; \
    }

#define DECLARE_HAS_TRAIT_FORMAT(aspect_m, trait_m, type_m) \
    namespace aspect_m { \
      template< > struct is_##trait_m< format::type_m >: ::boost::mpl::true_ {}; \
      template< > struct is_##trait_m< type_m >: ::boost::mpl::true_ {}; \
    }

#define DECLARE_TRUE(template_specialization_m) \
  template< > struct template_specialization_m : ::boost::mpl::true_ {};

#define DECLARE_FALSE(template_specialization_m) \
  template< > struct template_specialization_m : ::boost::mpl::false_ {};

#endif /* META_TYPE_TRAITS_HPP_ */

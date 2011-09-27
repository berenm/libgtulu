/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef META_TYPE_TRAITS_HPP_
#define META_TYPE_TRAITS_HPP_

#include <type_traits>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/and.hpp>
#include <boost/mpl/or.hpp>
#include <boost/mpl/not.hpp>
#include <boost/mpl/same_as.hpp>
#include <boost/preprocessor.hpp>

#define META_ASPECT_DECLARE_TRAIT(aspect_m, prefix_m, trait_m)                  \
  namespace aspect_m {                                                          \
    prefix_m trait_m;                                                           \
    template< typename Type >                                                   \
    struct BOOST_PP_CAT(is_, trait_m):                                          \
      ::boost::is_same< typename BOOST_PP_CAT(get_, aspect_m)< Type >::type,    \
                        trait_m > {                                             \
    };                                                                          \
    template< typename Type >                                                   \
    struct BOOST_PP_CAT(is_not_, trait_m):                                      \
      ::boost::mpl::not_< BOOST_PP_CAT(is_, trait_m)< Type > > {                \
    };                                                                          \
  }                                                                             \
  template< >                                                                   \
  struct BOOST_PP_CAT(is_a_, aspect_m)< aspect_m::trait_m >:                    \
    ::boost::mpl::true_ {                                                       \
  };                                                                            \
  template< >                                                                   \
  struct BOOST_PP_CAT(get_, aspect_m)< aspect_m::trait_m > {                    \
    typedef aspect_m::trait_m type;                                             \
  };

#define META_ASPECT_DECLARE_TRAIT_EACH(n, data_m, trait_m) \
        META_ASPECT_DECLARE_TRAIT(BOOST_PP_TUPLE_ELEM(2, 0, data_m), BOOST_PP_TUPLE_ELEM(2, 1, data_m), trait_m)

#define META_ASPECT_DECLARE_PRINT_TRAIT(condition_m, trait_m)   \
      static_assert(condition_m,                                \
                    "  " BOOST_PP_STRINGIZE(trait_m));

#define META_ASPECT_DECLARE_PRINT_TRAIT_EACH(n, data_m, trait_m) \
        META_ASPECT_DECLARE_PRINT_TRAIT(data_m, trait_m)

#define META_ASPECT_DECLARE(aspect_m, aspect_template_m, prefix_m, traits_m)                    \
    template< typename Type >                                                                   \
    struct BOOST_PP_CAT(get_, aspect_m) {                                                       \
      typedef typename Type::aspect::aspect_m type;                                             \
    };                                                                                          \
    template< typename Trait >                                                                  \
    struct BOOST_PP_CAT(is_a_, aspect_m): ::boost::mpl::false_ {};                              \
    BOOST_PP_SEQ_FOR_EACH(META_ASPECT_DECLARE_TRAIT_EACH, (aspect_m, prefix_m), traits_m)       \
    template< typename aspect_template_m >                                                      \
    struct BOOST_PP_CAT(aspect_m, _check) {                                                     \
      static_assert(BOOST_PP_CAT(is_a_, aspect_m)< aspect_template_m >::value,                  \
                    BOOST_PP_STRINGIZE(aspect_template_m) " is not a valid "                    \
                    BOOST_PP_STRINGIZE(aspect_m) ", valid values are: ");                       \
      BOOST_PP_SEQ_FOR_EACH(META_ASPECT_DECLARE_PRINT_TRAIT_EACH,                               \
                            BOOST_PP_CAT(is_a_, aspect_m)< aspect_template_m >::value,          \
                            traits_m)                                                           \
      typedef aspect_template_m type;                                                           \
    };

#endif /* META_TYPE_TRAITS_HPP_ */

/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef __META_TYPE_TRAITS_HPP__
#define __META_TYPE_TRAITS_HPP__

#include "gtulu/namespaces.hpp"

#include <meta/logic.hpp>

#define META_ASPECT_DECLARE_TRAIT(aspect_m, prefix_m, trait_m)                                                                                  \
  namespace aspect_m {                                                                                                                          \
    prefix_m trait_m;                                                                                                                           \
                                                                                                                                                \
    namespace detail {                                                                                                                          \
      template< typename T, bool const IsA = BOOST_PP_CAT(is_a_, aspect_m) < T > ::value > struct BOOST_PP_CAT (is_, trait_m);                  \
      template< typename T > struct BOOST_PP_CAT (is_, trait_m) < T, false > : meta::is_same< BOOST_PP_CAT(get_, aspect_m) < T >, trait_m > {}; \
      template< typename T > struct BOOST_PP_CAT (is_, trait_m) < T, true > : meta::is_same< T, trait_m > {};                                   \
    }                                                                                                                                           \
                                                                                                                                                \
    template< typename T > using BOOST_PP_CAT(is_, trait_m)     = detail::BOOST_PP_CAT(is_, trait_m) < T >;                                     \
    template< typename T > using BOOST_PP_CAT(is_not_, trait_m) = meta::not_< BOOST_PP_CAT(is_, trait_m) < T > >;                               \
  }                                                                                                                                             \
  template< > struct BOOST_PP_CAT (is_a_, aspect_m) < aspect_m::trait_m > : meta::true_ {};                                                     \

#define META_ASPECT_DECLARE_TRAIT_EACH(n, data_m, trait_m) \
  META_ASPECT_DECLARE_TRAIT(BOOST_PP_TUPLE_ELEM(2, 0, data_m), BOOST_PP_TUPLE_ELEM(2, 1, data_m), trait_m)

#define META_ASPECT_DECLARE_PRINT_TRAIT(condition_m, trait_m) \
  static_assert(condition_m,                                  \
                "  " BOOST_PP_STRINGIZE(trait_m));

#define META_ASPECT_DECLARE_PRINT_TRAIT_EACH(n, data_m, trait_m) \
  META_ASPECT_DECLARE_PRINT_TRAIT(data_m, trait_m)

#define META_ASPECT_DECLARE(aspect_m, aspect_template_m, prefix_m, traits_m)                \
  template< typename T > using BOOST_PP_CAT(get_, aspect_m) = typename T::aspect::aspect_m; \
  template< typename Trait > struct BOOST_PP_CAT (is_a_, aspect_m) : meta::false_ {};       \
                                                                                            \
  BOOST_PP_SEQ_FOR_EACH(META_ASPECT_DECLARE_TRAIT_EACH, (aspect_m, prefix_m), traits_m)     \
                                                                                            \
  template< typename aspect_template_m >                                                    \
  struct BOOST_PP_CAT (aspect_m, _check) {                                                  \
    static_assert(BOOST_PP_CAT(is_a_, aspect_m) < aspect_template_m > ::value,              \
                  BOOST_PP_STRINGIZE(aspect_template_m) " is not a valid "                  \
                  BOOST_PP_STRINGIZE(aspect_m) ", valid values are: ");                     \
    BOOST_PP_SEQ_FOR_EACH(META_ASPECT_DECLARE_PRINT_TRAIT_EACH,                             \
                          BOOST_PP_CAT(is_a_, aspect_m) < aspect_template_m > ::value,      \
                          traits_m)                                                         \
    typedef aspect_template_m type;                                                         \
  };

#endif /* __META_TYPE_TRAITS_HPP_ */

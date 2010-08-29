/**
 * @file
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
#include <type_traits>

#include <boost/preprocessor.hpp>

#define DECLARE_TRAIT(n, data_m, trait_m) \
  data_m trait_m; \
  template< typename T > struct BOOST_PP_CAT(is_, trait_m): ::boost::mpl::false_ {}; \
  template< > struct BOOST_PP_CAT(is_, trait_m)< trait_m >: ::boost::mpl::true_ {};

#define DECLARE_TRAIT_ASPECT(aspect_m, prefix_m, traits_m) \
    namespace aspect_m { \
      BOOST_PP_SEQ_FOR_EACH(DECLARE_TRAIT, prefix_m, traits_m) \
    }

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

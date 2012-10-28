/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_CONVERSION_COMMON_HPP_
#define GTULU_INTERNAL_FORMAT_CONVERSION_COMMON_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/internal/format/common.hpp"
#include "gtulu/internal/format/conversion/numeric.hpp"

namespace gtulu {
  namespace internal {

    namespace format {
      namespace common {

        template< typename Format >
        struct to_value_type {
          typedef typename fnum::to_value_type< fcmn::get_numeric< Format > >::type type;
        };

        template< typename Format >
        struct size_of {
          static std::uint8_t const value = fnum::size_of<
            typename fnum::get_width< Format >::type >::value;
        };

        namespace dimension {
          template< typename Dimension >
          struct get_literal {
            typedef meta::int_< 0 > type;
          };

          template< >
          struct get_literal< fcmn::dimension::oned > {
            typedef meta::int_< 1 > type;
          };

          template< >
          struct get_literal< fcmn::dimension::twod > {
            typedef meta::int_< 2 > type;
          };

          template< >
          struct get_literal< fcmn::dimension::threed > {
            typedef meta::int_< 3 > type;
          };

        } // namespace dimension

        template< typename Format >
        struct get_dimension_literal {
          typedef typename fcmn::dimension::get_literal< fcmn::get_dimension< Format > >::type type;
        };

        namespace cardinality {
          template< typename Cardinality >
          struct get_literal {
            typedef meta::int_< 1 > type;
          };

          template< >
          struct get_literal< fcmn::cardinality::one > {
            typedef meta::int_< 1 > type;
          };

          template< >
          struct get_literal< fcmn::cardinality::two > {
            typedef meta::int_< 2 > type;
          };

          template< >
          struct get_literal< fcmn::cardinality::three > {
            typedef meta::int_< 3 > type;
          };

          template< >
          struct get_literal< fcmn::cardinality::four > {
            typedef meta::int_< 4 > type;
          };

          template< typename Cardinality >
          struct get_container {
            template< typename T > using type = T;
          };

          template< >
          struct get_container< fcmn::cardinality::one > {
            template< typename T > using type = gtulu::vec1< T >;
          };

          template< >
          struct get_container< fcmn::cardinality::two > {
            template< typename T > using type = gtulu::vec2< T >;
          };

          template< >
          struct get_container< fcmn::cardinality::three > {
            template< typename T > using type = gtulu::vec3< T >;
          };

          template< >
          struct get_container< fcmn::cardinality::four > {
            template< typename T > using type = gtulu::vec4< T >;
          };

          template< >
          struct get_container< fcmn::cardinality::two_by_two > {
            template< typename T > using type = gtulu::mat2x2< T >;
          };

          template< >
          struct get_container< fcmn::cardinality::two_by_three > {
            template< typename T > using type = gtulu::mat2x3< T >;
          };

          template< >
          struct get_container< fcmn::cardinality::two_by_four > {
            template< typename T > using type = gtulu::mat2x4< T >;
          };

          template< >
          struct get_container< fcmn::cardinality::three_by_two > {
            template< typename T > using type = gtulu::mat3x2< T >;
          };

          template< >
          struct get_container< fcmn::cardinality::three_by_three > {
            template< typename T > using type = gtulu::mat3x3< T >;
          };

          template< >
          struct get_container< fcmn::cardinality::three_by_four > {
            template< typename T > using type = gtulu::mat3x4< T >;
          };

          template< >
          struct get_container< fcmn::cardinality::four_by_two > {
            template< typename T > using type = gtulu::mat4x2< T >;
          };

          template< >
          struct get_container< fcmn::cardinality::four_by_three > {
            template< typename T > using type = gtulu::mat4x3< T >;
          };

          template< >
          struct get_container< fcmn::cardinality::four_by_four > {
            template< typename T > using type = gtulu::mat4x4< T >;
          };

        } // namespace cardinality

        template< typename Format >
        struct get_cardinality_literal {
          typedef typename fcmn::cardinality::get_literal< fcmn::get_cardinality< Format > >::type type;
        };

        template< typename Cardinality, typename T >
        struct to_container_type {
          typedef typename cardinality::get_container< Cardinality >::template type< T > type;
        };

      } // namespace common
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONVERSION_COMMON_HPP_ */

/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_CONSTRAINT_ATTRIBUTE_HPP_
#define GTULU_INTERNAL_FORMAT_CONSTRAINT_ATTRIBUTE_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/internal/format/constraint/numeric.hpp"
#include "gtulu/internal/format/constraint/common.hpp"

#include "gtulu/internal/format/attribute.hpp"
#include "gtulu/internal/format/data.hpp"

#include <boost/mpl/not.hpp>
#include <boost/mpl/or.hpp>
#include <boost/mpl/and.hpp>

namespace gtulu {
  namespace internal {

    namespace format {
      namespace attribute {

        template< typename AttributeFormat, typename DataFormat >
        struct data_packing_check {
          using is_one_in_one_packed  = fcmn::packing::is_one_in_one< DataFormat >;
          using is_four_in_one_packed = fcmn::packing::is_four_in_one< DataFormat >;
          using is_four_elements      = fcmn::cardinality::is_four< AttributeFormat >;
          using is_2_10_10_10         = meta::or_< fdat::format::is_gl_unsigned_int_2_10_10_10_rev< DataFormat >,
                                                   fdat::format::is_gl_int_2_10_10_10_rev< DataFormat > >;

          using packed_check   = meta::or_< is_one_in_one_packed, is_four_in_one_packed >;
          using packed4_check1 = meta::imply< is_four_in_one_packed, is_four_elements >;
          using packed4_check2 = meta::imply< is_four_in_one_packed, is_2_10_10_10 >;

          typedef meta::and_< packed_check, packed4_check1, packed4_check2 > type;

          static_assert(type::value, "AttributeFormat is not compatible with DataFormat");
          static_assert(type::value, "");
          static_assert(type::value, "  [2.8 Vertex Arrays]");
          static_assert(packed_check::value, "  - AttributeFormat requires one- or four-packed data and DataFormat is not.");
          static_assert(packed4_check1::value, "  - DataFormat is packed but AttributeFormat doesn't have four elements.");
          static_assert(packed4_check2::value, "  - DataFormat is four-packed but is not gl_unsigned_int_2_10_10_10_rev or gl_int_2_10_10_10_rev.");
        };

        template< typename AttributeFormat, typename DataFormat >
        struct data_type_check {
          typedef meta::imply_same< fnum::integral::is_integral, AttributeFormat, DataFormat > type;

          static_assert(type::value, "AttributeFormat is not compatible with DataFormat");
          static_assert(type::value, "");
          static_assert(type::value, "  [2.8 Vertex Arrays]");
          static_assert(type::value, "  - AttributeFormat is integral but DataFormat is not.");
        };

        template< typename AttributeFormat, typename DataFormat >
        using is_data_compatible =
                meta::and_< typename data_type_check< AttributeFormat, DataFormat >::type,
                            typename data_packing_check< AttributeFormat, DataFormat >::type >;

      } // namespace attribute
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONSTRAINT_ATTRIBUTE_HPP_ */

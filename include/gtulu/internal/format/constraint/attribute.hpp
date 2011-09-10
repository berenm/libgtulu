/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_CONSTRAINT_ATTRIBUTE_HPP_
#define GTULU_INTERNAL_FORMAT_CONSTRAINT_ATTRIBUTE_HPP_

#include "gtulu/internal/format/constraint/common.hpp"

#include "gtulu/internal/format/attribute.hpp"
#include "gtulu/internal/format/data.hpp"

#include <boost/mpl/not.hpp>
#include <boost/mpl/or.hpp>
#include <boost/mpl/and.hpp>

namespace gtulu {
  namespace internal {
    namespace bm = ::boost::mpl;

    namespace format {
      namespace attribute {

        template< typename AttributeFormat, typename DataFormat >
        struct data_packing_check {
            typedef fc::packing::is_one_in_one< DataFormat > is_one_in_one_packed;
            typedef fc::packing::is_four_in_one< DataFormat > is_four_in_one_packed;
            typedef fc::cardinality::is_four< AttributeFormat > is_four_elements;

            typedef bm::and_< bm::not_< is_one_in_one_packed >, bm::not_< is_four_in_one_packed > > is_not_one_or_four_packed;
            typedef bm::and_< is_four_in_one_packed, bm::not_< is_four_elements > > is_packed_but_not_four_elements;
            typedef bm::and_<
                is_four_in_one_packed,
                bm::and_< bm::not_< fdf::is_gl_unsigned_int_2_10_10_10_rev< DataFormat > >,
                    bm::not_< fdf::is_gl_int_2_10_10_10_rev< DataFormat > > > > is_packed_but_not_2_10_10_10;

            typedef bm::and_< bm::not_< is_not_one_or_four_packed >, bm::not_< is_packed_but_not_four_elements >,
                bm::not_< is_packed_but_not_2_10_10_10 > > type;

            static_assert(type::value, "AttributeFormat is not compatible with DataFormat");
            static_assert(type::value, "");
            static_assert(type::value, "  [2.8 Vertex Arrays]");
            static_assert(bm::not_< is_not_one_or_four_packed >::value, "  - AttributeFormat requires one- or four-packed data and DataFormat is not.");
            static_assert(bm::not_< is_packed_but_not_four_elements >::value, "  - DataFormat is packed but AttributeFormat doesn't have four elements.");
            static_assert(bm::not_< is_packed_but_not_2_10_10_10 >::value, "  - DataFormat is packed but is not gl_unsigned_int_2_10_10_10_rev or gl_int_2_10_10_10_rev.");
        };

        template< typename AttributeFormat, typename DataFormat >
        struct data_type_check {
            typedef bm::and_< fn::integral::is_integral< typename fc::get_numeric< AttributeFormat >::type >,
                bm::not_< fn::integral::is_integral< typename fc::get_numeric< DataFormat >::type > > > attribute_is_integral_but_data_is_not;

            typedef bm::not_< attribute_is_integral_but_data_is_not > type;

            static_assert(type::value, "AttributeFormat is not compatible with DataFormat");
            static_assert(type::value, "");
            static_assert(type::value, "  [2.8 Vertex Arrays]");
            static_assert(bm::not_< attribute_is_integral_but_data_is_not >::value, "  - AttributeFormat is integral but DataFormat is not.");
        };

        template< typename AttributeFormat, typename DataFormat >
        struct is_data_compatible {
            typedef typename data_type_check< AttributeFormat, DataFormat >::type data_type_c;
            typedef typename data_packing_check< AttributeFormat, DataFormat >::type data_packing_c;

            typedef bm::and_< data_type_c, data_packing_c > type;
        };

      } // namespace attribute
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONSTRAINT_ATTRIBUTE_HPP_ */

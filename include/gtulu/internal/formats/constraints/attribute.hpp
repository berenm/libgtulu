/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_CONSTRAINT_ATTRIBUTE_HPP_
#define GTULU_INTERNAL_FORMAT_CONSTRAINT_ATTRIBUTE_HPP_

#include "gtulu/internal/formats/attribute.hpp"
#include "gtulu/internal/formats/data.hpp"

namespace gtulu {
  namespace internal {
    namespace bm = ::boost::mpl;

    namespace formats {
      namespace attribute {

        template< typename AttributeFormat, typename DataFormat >
        struct data_packing_check {
            typedef fc::packing::is_one_in_one< DataFormat > type;
            static_assert(type::value, "AttributeFormat is not compatible with DataFormat, vertex attributes require non packed buffer data and DataFormat packing is not fc::packing::one_in_one.");
        };

        template< typename AttributeFormat, typename DataFormat >
        struct data_type_check {
            typedef fc::integral::is_floating< AttributeFormat > floating_check;
            typedef bm::and_< fc::integral::is_integral< DataFormat >, fc::integral::is_integral< AttributeFormat > > integer_check;

            typedef bm::or_< floating_check, integer_check > type;
            static_assert(type::value, "AttributeFormat is not compatible with DataFormat, integer attribute formats require integer data, only floating attribute formats can be used with any data format types.");
        };

        template< typename AttributeFormat, typename DataFormat >
        struct is_data_compatible {
            typedef typename data_type_check< AttributeFormat, DataFormat >::type data_type_c;
            typedef typename data_packing_check< AttributeFormat, DataFormat >::type data_packing_c;

            typedef bm::and_< data_type_c, data_packing_c > type;
        };

      } // namespace attribute
    } // namespace formats

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONSTRAINT_ATTRIBUTE_HPP_ */

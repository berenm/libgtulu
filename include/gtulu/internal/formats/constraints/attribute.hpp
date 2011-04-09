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

        template< typename attribute_format_t, typename data_format_t >
        struct data_packing_check {
            typedef fdp::is_none< data_format_t > type;
            static_assert(type::value, "attribute_format_t is not compatible with data_format_t, vertex attributes require non packed buffer data and data_format_t packing is not fdp::none.");
        };

        template< typename attribute_format_t, typename data_format_t >
        struct data_type_check {
            typedef fat::is_floating< attribute_format_t > floating_check;
            typedef bm::and_< fdt::is_integer< data_format_t >, type::is_integer< attribute_format_t > > integer_check;

            typedef bm::or_< floating_check, integer_check > type;
            static_assert(type::value, "attribute_format_t is not compatible with data_format_t, integer attribute formats require integer data, only floating attribute formats can be used with any data format types.");
        };

        template< typename attribute_format_t, typename data_format_t >
        struct is_data_compatible {
            typedef typename data_type_check< attribute_format_t, data_format_t >::type data_type_c;
            typedef typename data_packing_check< attribute_format_t, data_format_t >::type data_packing_c;

            typedef bm::and_< data_type_c, data_packing_c > type;
        };

      } // namespace attribute
    } // namespace formats

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONSTRAINT_ATTRIBUTE_HPP_ */

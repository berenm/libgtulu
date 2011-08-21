/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 2 janv. 2011
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_ATTRIBUTE_HPP_
#error "gtulu/internal/attribute/attribute_buffer.hpp should not be included directly, please include gtulu/internal/attribute.hpp instead."
#endif /* IN_GTULU_INTERNAL_ATTRIBUTE_HPP_ */

#ifndef GTULU_INTERNAL_ATTRIBUTE_BUFFER_CONSTRAINTS_HPP_
#define GTULU_INTERNAL_ATTRIBUTE_BUFFER_CONSTRAINTS_HPP_

#include "gtulu/internal/formats/conversions/dimension.hpp"
#include "gtulu/internal/formats/data.hpp"

#include <boost/mpl/equal_to.hpp>
#include <boost/mpl/or.hpp>
#include <boost/mpl/and.hpp>

namespace gtulu {
  namespace internal {
    namespace bm = ::boost::mpl;

    namespace attribute {

      template< typename DataFormat, typename Normalize >
      struct data_normalize_check {
          typedef fdt::is_integer< DataFormat > integer_check;
          typedef fdn::is_normal< Normalize > normal_check;
          typedef bm::or_< integer_check, normal_check > type;

          static_assert(type::value, "DataFormat is not compatible with Normalize, floating data cannot be normalized.");
      };

      template< typename DataFormat, typename Order >
      struct data_order_check {
          typedef fdo::is_normal< Order > normal_check;
          typedef bm::same_as< fd::gl_unsigned_byte >::apply< DataFormat > format_check;
          typedef bm::or_< normal_check, format_check > type;

          static_assert(type::value, "DataFormat is not compatible with Order, reverse data order require fd::gl_unsigned_byte data format.");
      };

      template< typename Normalize, typename Order >
      struct normalize_order_check {
          typedef fdn::is_normal< Normalize > normal_check;
          typedef fdo::is_normal< Order > order_check;
          typedef bm::or_< normal_check, order_check > type;

          static_assert(type::value, "Normalize is not compatible with Order, reverse order data cannot be normalized.");
      };

      template< typename Order, typename Count >
      struct order_count_check {
          typedef fdo::is_normal< Order > normal_check;
          typedef bm::equal_to< Count, bm::int_< 4 > > count_check;
          typedef bm::or_< normal_check, count_check > type;

          static_assert(type::value, "Order is not compatible with Count, reverse data order can only be used with 4 components.");
      };

      template< ::std::int32_t const Size, typename Order >
      struct buffer_binder_order {
          static ::std::int32_t const value = Size;
      };
      template< >
      struct buffer_binder_order< 4, fdo::reverse > {
          static ::std::int32_t const value = GL_BGRA;
      };

      template< typename AttributeFormat, typename DataFormat, typename Normalize, typename Order >
      struct attribute_buffer_binder_check {
          typedef typename fc::to_literal< typename AttributeFormat::info::count >::type count_t;

          typedef fa::is_data_compatible< AttributeFormat, DataFormat > attribute_data_c;
          typedef data_normalize_check< DataFormat, Normalize > data_normalize_c;
          typedef data_order_check< DataFormat, Order > data_order_c;
          typedef normalize_order_check< Normalize, Order > normalize_order_c;
          typedef order_count_check< Order, count_t > order_count_c;

          typedef bm::and_< attribute_data_c, data_normalize_c, data_order_c, normalize_order_c, order_count_c > type;

          static ::std::int32_t const count = buffer_binder_order< count_t::value, Order >::value;
          static bool const normalized = fdn::is_normalized< Normalize >::value;
      };

    } // namespace attribute

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_ATTRIBUTE_BUFFER_CONSTRAINTS_HPP_ */

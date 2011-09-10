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

#ifndef GTULU_INTERNAL_ATTRIBUTE_BUFFER_CONSTRAINT_HPP_
#define GTULU_INTERNAL_ATTRIBUTE_BUFFER_CONSTRAINT_HPP_

#include "gtulu/internal/format/conversion/dimension.hpp"
#include "gtulu/internal/format/constraint/attribute.hpp"
#include "gtulu/internal/format/data.hpp"

#include <boost/mpl/equal_to.hpp>
#include <boost/mpl/or.hpp>
#include <boost/mpl/and.hpp>

namespace gtulu {
  namespace internal {
    namespace bm = ::boost::mpl;

    namespace attribute {

      template< typename DataFormat, typename Normalize >
      struct data_normalize_check {
          typedef bm::and_< fn::integral::is_floating< typename fc::get_numeric< DataFormat >::type >,
              fc::normalization::is_normalized< Normalize > > data_is_floating_and_normalize_is_normalized;

          typedef bm::not_< data_is_floating_and_normalize_is_normalized > type;

          static_assert(type::value, "DataFormat is not compatible with Normalize, floating data cannot be normalized.");
      };

      template< typename DataFormat, typename Order >
      struct data_order_check {
          typedef bm::and_< fc::order::is_reverse< Order >, bm::not_< fd::format::is_gl_unsigned_byte< DataFormat > > > order_is_reverse_and_data_is_not_unsigned_byte;
          typedef bm::not_< order_is_reverse_and_data_is_not_unsigned_byte > type;

          static_assert(type::value, "DataFormat is not compatible with Order, reverse data order require fd::gl_unsigned_byte data format.");
      };

      template< typename Normalize, typename Order >
      struct normalize_order_check {
          typedef bm::and_< fc::order::is_reverse< Order >, fc::normalization::is_normalized< Normalize > > order_is_reverse_and_normalize_is_normalized;
          typedef bm::not_< order_is_reverse_and_normalize_is_normalized > type;

          static_assert(type::value, "Normalize is not compatible with Order, reverse order data cannot be normalized.");
      };

      template< typename Order, typename AttributeFormat >
      struct order_count_check {
          typedef bm::and_< fc::order::is_reverse< Order >, fc::cardinality::is_not_four< AttributeFormat > > order_is_reverse_and_cardinality_is_not_four;
          typedef bm::not_< order_is_reverse_and_cardinality_is_not_four > type;

          static_assert(type::value, "Order is not compatible with Count, reverse data order can only be used with 4 components.");
      };

      template< typename Cardinality, typename Order >
      struct buffer_binder_order;

      template< >
      struct buffer_binder_order< fc::cardinality::one, fc::order::forward > {
          static ::std::int32_t const value = 1;
      };
      template< >
      struct buffer_binder_order< fc::cardinality::two, fc::order::forward > {
          static ::std::int32_t const value = 2;
      };
      template< >
      struct buffer_binder_order< fc::cardinality::three, fc::order::forward > {
          static ::std::int32_t const value = 3;
      };
      template< >
      struct buffer_binder_order< fc::cardinality::four, fc::order::reverse > {
          static ::std::int32_t const value = cst::gl_bgra::value;
      };

      template< typename AttributeFormat, typename DataFormat, typename Normalize, typename Order >
      struct attribute_buffer_binder_check {
          typedef fa::is_data_compatible< AttributeFormat, DataFormat > attribute_data_c;
          typedef data_normalize_check< DataFormat, Normalize > data_normalize_c;
          typedef data_order_check< DataFormat, Order > data_order_c;
          typedef normalize_order_check< Normalize, Order > normalize_order_c;
          typedef order_count_check< Order, AttributeFormat > order_count_c;

          typedef bm::and_< attribute_data_c, data_normalize_c, data_order_c, normalize_order_c, order_count_c > type;

          static ::std::int32_t const count = buffer_binder_order<
              typename fc::get_cardinality< AttributeFormat >::type, Order >::value;
          static bool const normalized = fc::normalization::is_normalized< Normalize >::value;
      };

    } // namespace attribute

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_ATTRIBUTE_BUFFER_CONSTRAINT_HPP_ */

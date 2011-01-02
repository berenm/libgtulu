/**
 * @file
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

namespace gtulu {
  namespace internal {

    namespace attribute {

      template< typename data_format_t, typename normalize_t >
      struct data_normalize_check {
          typedef fdt::is_integer< data_format_t > integer_check;
          typedef fdn::is_normal< normalize_t > normal_check;
          typedef bm::or_< integer_check, normal_check > type;

          static_assert(type::value, "data_format_t is not compatible with normalize_t, floating data cannot be normalized.");
      };

      template< typename data_format_t, typename order_t >
      struct data_order_check {
          typedef fdo::is_normal< order_t > normal_check;
          typedef bm::same_as< fd::gl_unsigned_byte >::apply< data_format_t > format_check;
          typedef bm::or_< normal_check, format_check > type;

          static_assert(type::value, "data_format_t is not compatible with order_t, reverse data order require fd::gl_unsigned_byte data format.");
      };

      template< typename normalize_t, typename order_t >
      struct normalize_order_check {
          typedef fdn::is_normal< normalize_t > normal_check;
          typedef fdo::is_normal< order_t > order_check;
          typedef bm::or_< normal_check, order_check > type;

          static_assert(type::value, "normalize_t is not compatible with order_t, reverse order data cannot be normalized.");
      };

      template< typename order_t, typename count_t >
      struct order_count_check {
          typedef fdo::is_normal< order_t > normal_check;
          typedef bm::equal_to< count_t, bm::int_< 4 > > count_check;
          typedef bm::or_< normal_check, count_check > type;

          static_assert(type::value, "order_t is not compatible with count_t, reverse data order can only be used with 4 components.");
      };

      template< ::std::int32_t const size_t, typename data_order_t >
      struct buffer_binder_order {
          static ::std::int32_t const value = size_t;
      };
      template< >
      struct buffer_binder_order< 4, fdo::reverse > {
          static ::std::int32_t const value = GL_BGRA;
      };

      template< typename attribute_format_t, typename data_format_t, typename normalize_t, typename order_t >
      struct attribute_buffer_binder_check {
          typedef typename fc::to_literal< typename attribute_format_t::info::count >::type count_t;

          typedef fa::is_data_compatible< attribute_format_t, data_format_t > attribute_data_c;
          typedef data_normalize_check< data_format_t, normalize_t > data_normalize_c;
          typedef data_order_check< data_format_t, order_t > data_order_c;
          typedef normalize_order_check< normalize_t, order_t > normalize_order_c;
          typedef order_count_check< order_t, count_t > order_count_c;

          typedef bm::and_< attribute_data_c, data_normalize_c, data_order_c, normalize_order_c, order_count_c > type;

          static ::std::int32_t const count = buffer_binder_order< count_t::value, order_t >::value;
          static bool const normalized = fdn::is_normalized< normalize_t >::value;
      };

    } // namespace attribute

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_ATTRIBUTE_BUFFER_CONSTRAINTS_HPP_ */

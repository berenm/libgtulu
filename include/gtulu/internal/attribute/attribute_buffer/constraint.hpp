/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef IN_GTULU_INTERNAL_ATTRIBUTE_HPP_
# error "gtulu/internal/attribute/attribute_buffer.hpp should not be included directly, please include gtulu/internal/attribute.hpp instead."
#endif /* IN_GTULU_INTERNAL_ATTRIBUTE_HPP_ */

#ifndef GTULU_INTERNAL_ATTRIBUTE_BUFFER_CONSTRAINT_HPP_
# define GTULU_INTERNAL_ATTRIBUTE_BUFFER_CONSTRAINT_HPP_

# include "gtulu/namespaces.hpp"
# include "gtulu/internal/format/constraint/attribute.hpp"
# include "gtulu/internal/format/common.hpp"
# include "gtulu/internal/format/data.hpp"

# include <boost/mpl/or.hpp>
# include <boost/mpl/and.hpp>

namespace gtulu {
  namespace internal {

    namespace attribute {

      template< typename AttributeFormat, typename DataFormat, typename Normalize, typename Order >
      struct attribute_buffer_binder_check {
        using is_normalized = fcmn::normalization::is_normalized< Normalize >;

        using attribute_data_check  = fatt::is_data_compatible< AttributeFormat, DataFormat >;
        using data_normalize_check  = meta::imply< is_normalized, fnum::integral::is_not_floating< DataFormat > >;
        using data_order_check      = meta::imply< fcmn::order::is_reverse< Order >, fdat::format::is_gl_unsigned_byte< DataFormat > >;
        using normalize_order_check = meta::imply< fcmn::order::is_reverse< Order >, fcmn::normalization::is_not_normalized< Normalize > >;
        using order_count_check     = meta::imply< fcmn::order::is_reverse< Order >, fcmn::cardinality::is_four< AttributeFormat > >;

        typedef meta::and_< attribute_data_check, data_normalize_check, data_order_check, normalize_order_check, order_count_check > type;

        static_assert(type::value, "Attribute buffer binder is invalid.");
        static_assert(data_normalize_check::value, "DataFormat is not compatible with Normalize, floating data cannot be normalized.");
        static_assert(data_order_check::value, "DataFormat is not compatible with Order, reverse data order require fdat::gl_unsigned_byte data format.");
        static_assert(normalize_order_check::value, "Normalize is not compatible with Order, reverse order data cannot be normalized.");
        static_assert(order_count_check::value, "Order is not compatible with Count, reverse data order can only be used with 4 components.");

        static std::int32_t const count      = fcmn::get_cardinality_binder_count< AttributeFormat, Order >::value;
        static bool const         normalized = is_normalized::value;
      };

    } // namespace attribute

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_ATTRIBUTE_BUFFER_CONSTRAINT_HPP_ */

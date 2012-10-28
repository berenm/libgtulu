/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef IN_GTULU_INTERNAL_ATTRIBUTE_HPP_
# error "gtulu/internal/attribute/attribute_buffer.hpp should not be included directly, please include gtulu/internal/attribute.hpp instead."
#endif /* IN_GTULU_INTERNAL_ATTRIBUTE_HPP_ */

#ifndef GTULU_INTERNAL_ATTRIBUTE_BUFFER_HPP_
# define GTULU_INTERNAL_ATTRIBUTE_BUFFER_HPP_

# include "gtulu/namespaces.hpp"
# include "gtulu/internal/object/buffer.hpp"

# include "gtulu/internal/attribute/attribute_buffer/constraint.hpp"
# include "gtulu/internal/attribute/attribute_buffer/callable.hpp"

namespace gtulu {
  namespace internal {

    namespace attribute {

      template< typename AttributeFormat >
      struct attribute_buffer_binder {
        typedef attribute_buffer_binder_callable<
          fnum::integral::is_floating< AttributeFormat >::value > fnc_vertex_attrib_pointer_t;

        template< typename Normalize = fcmn::normalization::none, typename Order = fcmn::order::forward,
                  typename DataFormat >
        inline static void bind(location_t const                 location_in,
                                obj::buffer< DataFormat > const& buffer_in,
                                std::uint32_t const              offset_in,
                                std::uint32_t const              stride_in) {
          typedef attribute_buffer_binder_check< AttributeFormat, DataFormat, Normalize, Order > check_t;

          buf::array_buffer_slot::bind(buffer_in);
          fnc_vertex_attrib_pointer_t::template call< DataFormat >(location_in,
                                                                   offset_in,
                                                                   stride_in,
                                                                   check_t::count,
                                                                   check_t::normalized);

          fct::enable_vertex_attrib_array< >::call(location_in);
        }

      };

    } // namespace attribute

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_ATTRIBUTE_BUFFER_HPP_ */

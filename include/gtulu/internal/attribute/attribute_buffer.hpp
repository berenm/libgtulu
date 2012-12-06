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

namespace gtulu {
  namespace internal {

    namespace attribute {

      template< typename... Ts >
      struct vertex_attrib_pointer_integer {
        inline static void call(gtulu::uint32_t const index, gtulu::int32_t const size, bool const normalized, gtulu::int32_t const stride, void const* pointer) {
          fct::vertex_attrib_pointer_integer< Ts... >::call(index, size, stride, pointer);
        }
      };

      template< typename AttributeFormat, typename... Ts >
      using vertex_attrib_pointer =
              typename meta::if_< fnum::integral::is_integral< AttributeFormat >,
                                  vertex_attrib_pointer_integer< Ts... >,
                                  fct::vertex_attrib_pointer< Ts... >
                                  >::type;

      template< typename AttributeFormat >
      struct attribute_buffer_binder {

        template< typename Normalize = fcmn::normalization::none,
                  typename Order     = fcmn::order::forward,
                  typename DataFormat >
        inline static void bind(location_t const location, obj::buffer< DataFormat > const& buffer, std::uint32_t const offset, std::uint32_t const stride) {
          typedef attribute_buffer_binder_check< AttributeFormat, DataFormat, Normalize, Order > check_t;

          buf::array_buffer_slot::bind(buffer);
          vertex_attrib_pointer< AttributeFormat, fdat::get_format< DataFormat > >::call(location, check_t::count, check_t::normalized, stride, reinterpret_cast< void const* >(offset));
          fct::enable_vertex_attrib_array< >::call(location);
        }

      };

    } // namespace attribute

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_ATTRIBUTE_BUFFER_HPP_ */

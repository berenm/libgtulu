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

      template< typename AttributeFormat, typename DataFormat >
      using vertex_attrib_pointer = typename meta::if_< fnum::integral::is_floating< AttributeFormat >,
                                                        fct::vertex_attrib_pointer< typename DataFormat::aspect::format >,
                                                        fct::vertex_attrib_pointer_integer< typename DataFormat::aspect::format >
                                                        >::type;

      template< typename AttributeFormat >
      struct attribute_buffer_binder {

        template< typename Normalize = fcmn::normalization::none,
                  typename Order     = fcmn::order::forward,
                  typename DataFormat >
        inline static void bind(location_t const location, obj::buffer< DataFormat > const& buffer, std::uint32_t const offset, std::uint32_t const stride) {
          typedef attribute_buffer_binder_check< AttributeFormat, DataFormat, Normalize, Order > check_t;

          buf::array_buffer_slot::bind(buffer);
          vertex_attrib_pointer< AttributeFormat, DataFormat >(location, offset, stride, check_t::count, check_t::normalized);

          fct::enable_vertex_attrib_array< >::call(location);
        }

      };

    } // namespace attribute

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_ATTRIBUTE_BUFFER_HPP_ */

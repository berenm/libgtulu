/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_ATTRIBUTE_HPP_
#error "gtulu/internal/attribute/attribute_buffer.hpp should not be included directly, please include gtulu/internal/attribute.hpp instead."
#endif /* IN_GTULU_INTERNAL_ATTRIBUTE_HPP_ */

#ifndef GTULU_INTERNAL_ATTRIBUTE_BUFFER_HPP_
#define GTULU_INTERNAL_ATTRIBUTE_BUFFER_HPP_

#include "gtulu/internal/objects/buffer.hpp"

#include "gtulu/internal/attribute/attribute_buffer/constraints.hpp"
#include "gtulu/internal/attribute/attribute_buffer/callable.hpp"

namespace gtulu {
  namespace internal {

    namespace attribute {

      template< typename attribute_format_t >
      struct attribute_buffer_binder {
          typedef attribute_buffer_binder_callable< fat::is_floating< attribute_format_t >::value > fnc_vertex_attrib_pointer_t;

          template< typename normalize_t = fdn::normal, typename order_t = fdo::normal, typename data_format_t >
          inline static void bind(location_t const location_in,
                                  gio::buffer< data_format_t > const& buffer_in,
                                  ::std::uint32_t const offset_in,
                                  ::std::uint32_t const stride_in) {
            typedef attribute_buffer_binder_check< attribute_format_t, data_format_t, normalize_t, order_t > check_t;

            gib::array_buffer_slot::bind(buffer_in);
            fnc_vertex_attrib_pointer_t::template call< data_format_t >(location_in,
                                                                        offset_in,
                                                                        stride_in,
                                                                        check_t::count,
                                                                        check_t::normalized);

            fnc::gl_enable_vertex_attrib_array::call(location_in);
          }
      };

    } // namespace attribute

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_ATTRIBUTE_BUFFER_HPP_ */

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

#ifndef GTULU_INTERNAL_ATTRIBUTE_BUFFER_CALLABLE_HPP_
#define GTULU_INTERNAL_ATTRIBUTE_BUFFER_CALLABLE_HPP_

#include "gtulu/internal/functions_fwd.hpp"

namespace gtulu {
  namespace internal {

    namespace attribute {

      template< bool const IsFloating >
      struct attribute_buffer_binder_callable {
      };

      template< >
      struct attribute_buffer_binder_callable< true > {
          template< typename DataFormat >
          inline static void call(location_t const location_in,
                                  ::std::uint32_t const offset_in,
                                  ::std::uint32_t const stride_in,
                                  ::std::int32_t const count_in,
                                  bool const normalized_in) {
            fnc::gl_vertex_attrib_pointer::call< typename DataFormat::info::format >(location_in,
                                                                                     count_in,
                                                                                     normalized_in,
                                                                                     stride_in,
                                                                                     reinterpret_cast< void const* >(offset_in));
          }
      };

      template< >
      struct attribute_buffer_binder_callable< false > {
          template< typename DataFormat >
          inline static void call(location_t const location_in,
                                  ::std::uint32_t const offset_in,
                                  ::std::uint32_t const stride_in,
                                  ::std::int32_t const count_in,
                                  bool const normalized_in) {
            fnc::gl_vertex_attrib_pointer_integer::call< typename DataFormat::info::format >(location_in,
                                                                                             count_in,
                                                                                             stride_in,
                                                                                             reinterpret_cast< void const* >(offset_in));
          }
      };

    } // namespace attribute

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_ATTRIBUTE_BUFFER_CALLABLE_HPP_ */

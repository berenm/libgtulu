/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef IN_GTULU_INTERNAL_OUTPUT_HPP_
#error "gtulu/internal/output/output.hpp should not be included directly, please include gtulu/internal/output.hpp instead."
#endif /* IN_GTULU_INTERNAL_OUTPUT_HPP_ */

#ifndef GTULU_INTERNAL_OUTPUT_OUTPUT_HPP_
#define GTULU_INTERNAL_OUTPUT_OUTPUT_HPP_

#include "gtulu/namespaces.hpp"

namespace gtulu {
  namespace internal {

    namespace output {

      template< typename DataType >
      struct output_binder;

#define DECLARE_BINDER(type_m) \
    template< > \
    struct output_binder< fout::type::type_m > { \
        inline static void bind(location_t const location_in, fout::to_typename< fout::type::type_m >::type const value_in) { \
          fct::gl_uniform_1::call(location_in, value_in); \
        } \
        inline static void bind(location_t const location_in, std::uint32_t const number_in, fout::to_typename< fout::type::type_m >::type const* values_in) { \
          fct::gl_uniform_1::call(location_in, number_in, value_in); \
        } \
    };

      DECLARE_BINDER(floating)
      DECLARE_BINDER(integer)
      DECLARE_BINDER(unsigned_integer)

#undef DECLARE_BINDER

      template< typename Format, typename BinderType = output_binder< typename Format::aspect::type >,
          typename ValueType = typename fout::to_typename< typename Format::aspect::type >::type >
      struct output {
          typedef Format format;
          typedef ValueType value_type;
          typedef BinderType binder;
      };

#define DECLARE_OUTPUT(format_m) \
    typedef output< fout::format_m > format_m;
      DECLARE_OUTPUT(gl_float)
      DECLARE_OUTPUT(gl_int)
      DECLARE_OUTPUT(gl_unsigned_int)

#undef DECLARE_OUTPUT

    } // namespace output

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OUTPUT_OUTPUT_HPP_ */

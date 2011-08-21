/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_UNIFORM_HPP_
#error "gtulu/internal/uniform/uniform.hpp should not be included directly, please include gtulu/internal/uniform.hpp instead."
#endif /* IN_GTULU_INTERNAL_UNIFORM_HPP_ */

#ifndef GTULU_INTERNAL_UNIFORM_UNIFORM_HPP_
#define GTULU_INTERNAL_UNIFORM_UNIFORM_HPP_

namespace gtulu {
  namespace internal {

    namespace uniform {

      template< typename DataType >
      struct uniform_binder {
          inline static void bind(location_t const location_in,
                                  typename fu::to_typename< DataType >::type const value_in) {
            fnc::gl_uniform_1::call(location_in, value_in);
          }
          inline static void bind(location_t const location_in,
                                  ::std::uint32_t const number_in,
                                  typename fu::to_typename< DataType >::type const* values_in) {
            fnc::gl_uniform_1::call(location_in, number_in, values_in);
          }
      };

      template< typename Format, typename BinderType = uniform_binder< typename Format::info::type >,
          typename ValueType = typename fu::to_typename< typename Format::info::type >::type >
      struct uniform {
          typedef Format format;
          typedef ValueType value_type;
          typedef BinderType binder;
      };

#define DECLARE_UNIFORM(format_m) \
    typedef uniform< fu::format_m > format_m;

      DECLARE_UNIFORM(gl_float)
      DECLARE_UNIFORM(gl_int)
      DECLARE_UNIFORM(gl_unsigned_int)
      DECLARE_UNIFORM(gl_bool)

#undef DECLARE_UNIFORM

    } // namespace uniform

    namespace giu = ::gtulu::internal::uniform;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_UNIFORM_UNIFORM_HPP_ */

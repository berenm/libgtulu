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
#error "gtulu/internal/uniform/uniform_matrix.hpp should not be included directly, please include gtulu/internal/uniform.hpp instead."
#endif /* IN_GTULU_INTERNAL_UNIFORM_HPP_ */

#ifndef GTULU_INTERNAL_UNIFORM_MATRIX_HPP_
#define GTULU_INTERNAL_UNIFORM_MATRIX_HPP_

#include "gtulu/internal/formats/conversions/dimension.hpp"

namespace gtulu {
  namespace internal {

    namespace uniform {
      namespace matrix {

        template< typename type_t, typename dimension_t >
        struct uniform_binder;

#define DECLARE_BINDER(type_m, suffix_m, dimension1_m, dimension2_m) \
    template< > \
      struct uniform_binder< fut::type_m, fc::to_typename< dimension1_m, dimension2_m >::type > { \
          inline static void bind(location_t const location_in, ::std::uint32_t const number_in, fu::to_typename< fut::type_m >::type const* values_in, bool transpose_in = false) { \
            fnc::gl_uniform_matrix##suffix_m::call(location_in, number_in, transpose_in, values_in); \
          } \
      };

        DECLARE_BINDER(floating, _2, 2, 2)
        DECLARE_BINDER(floating, _2x3, 2, 3)
        DECLARE_BINDER(floating, _2x4, 2, 4)
        DECLARE_BINDER(floating, _3x2, 3, 2)
        DECLARE_BINDER(floating, _3, 3, 3)
        DECLARE_BINDER(floating, _3x4, 3, 4)
        DECLARE_BINDER(floating, _4x2, 4, 2)
        DECLARE_BINDER(floating, _4x3, 4, 3)
        DECLARE_BINDER(floating, _4, 4, 4)

#undef DECLARE_BINDER

        template< typename format_t, typename binder_t = uniform_binder< typename format_t::info::type,
            typename format_t::info::dimension > , typename value_t = typename fu::to_typename<
            typename format_t::info::type >::type >
        struct uniform {
            typedef format_t format;
            typedef value_t value_type;
            typedef binder_t binder;
        };
      } // namespace matrix

#define DECLARE_UNIFORM_MATRIX(format_m) \
    typedef matrix::uniform< fu::format_m > format_m;

      DECLARE_UNIFORM_MATRIX(gl_float_mat2)
      DECLARE_UNIFORM_MATRIX(gl_float_mat2x3)
      DECLARE_UNIFORM_MATRIX(gl_float_mat2x4)
      DECLARE_UNIFORM_MATRIX(gl_float_mat3x2)
      DECLARE_UNIFORM_MATRIX(gl_float_mat3)
      DECLARE_UNIFORM_MATRIX(gl_float_mat3x4)
      DECLARE_UNIFORM_MATRIX(gl_float_mat4x2)
      DECLARE_UNIFORM_MATRIX(gl_float_mat4x3)
      DECLARE_UNIFORM_MATRIX(gl_float_mat4)

#undef DECLARE_UNIFORM_MATRIX

    } // namespace uniform

    namespace gium = ::gtulu::internal::uniform::matrix;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_UNIFORM_MATRIX_HPP_ */

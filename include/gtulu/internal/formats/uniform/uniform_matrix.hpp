/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_FORMAT_UNIFORM_HPP_
#error "gtulu/internal/formats/uniform/uniform_matrix.hpp should not be included directly, please include gtulu/internal/formats/uniform.hpp instead."
#endif /* IN_GTULU_INTERNAL_FORMAT_UNIFORM_HPP_ */

#ifndef GTULU_INTERNAL_FORMAT_UNIFORM_MATRIX_HPP_
#define GTULU_INTERNAL_FORMAT_UNIFORM_MATRIX_HPP_

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace uniform {
        namespace matrix {

          META_ASPECT_DECLARE(dimension, Dimension, using fcd::,
              (two_by_two)
              (two_by_three)
              (two_by_four)
              (three_by_two)
              (three_by_three)
              (three_by_four)
              (four_by_two)
              (four_by_three)
              (four_by_four)
          )

          template< typename Format, typename DataType, typename Dimension >
          struct uniform_metadata: fu::uniform_metadata< Format, fub::matrix, DataType > {
            using fu::uniform_metadata< Format, fub::matrix, DataType >::format;
            using fu::uniform_metadata< Format, fub::matrix, DataType >::base;
            using fu::uniform_metadata< Format, fub::matrix, DataType >::type;
            using fu::uniform_metadata< Format, fub::matrix, DataType >::count;
            typedef Dimension dimension;
          };

          template< typename Format >
          struct uniform_format;
        } // namespace matrix

#define DECLARE_UNIFORM_FORMAT(format_m, type_m, dimension_m) \
    namespace matrix { \
      template< > struct uniform_format< fuf::format_m > { \
          typedef uniform_metadata< fuf::format_m, fut::type_m, dimension::dimension_m > info; \
      }; \
    } \
    typedef matrix::uniform_format< format::format_m > format_m; \
    DECLARE_HAS_TRAIT_FORMAT(base, matrix, format_m); \
    DECLARE_HAS_TRAIT_FORMAT(type, type_m, format_m); \
    namespace matrix { \
      DECLARE_HAS_TRAIT_FORMAT(dimension, dimension_m, format_m); \
    }

        DECLARE_UNIFORM_FORMAT(gl_float_mat2, floating, two_by_two)
        DECLARE_UNIFORM_FORMAT(gl_float_mat2x3, floating, two_by_three)
        DECLARE_UNIFORM_FORMAT(gl_float_mat2x4, floating, two_by_four)
        DECLARE_UNIFORM_FORMAT(gl_float_mat3x2, floating, three_by_two)
        DECLARE_UNIFORM_FORMAT(gl_float_mat3, floating, three_by_three)
        DECLARE_UNIFORM_FORMAT(gl_float_mat3x4, floating, three_by_four)
        DECLARE_UNIFORM_FORMAT(gl_float_mat4x2, floating, four_by_two)
        DECLARE_UNIFORM_FORMAT(gl_float_mat4x3, floating, four_by_three)
        DECLARE_UNIFORM_FORMAT(gl_float_mat4, floating, four_by_four)

#undef DECLARE_UNIFORM_FORMAT

      } // namespace uniform
    } // namespace formats

    namespace fum = ::gtulu::internal::formats::uniform::matrix;
    namespace fumd = ::gtulu::internal::formats::uniform::matrix::dimension;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_UNIFORM_MATRIX_HPP_ */

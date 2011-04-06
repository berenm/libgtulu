/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 * @copyright 2008-2011. All rights reserved.
 */

#ifndef IN_GTULU_INTERNAL_FORMAT_ATTRIBUTE_HPP_
#error "formats/attribute/attribute_matrix.hpp should not be included directly, please include formats/attribute.hpp instead."
#endif /* IN_GTULU_INTERNAL_FORMAT_ATTRIBUTE_HPP_ */

#ifndef GTULU_INTERNAL_FORMAT_ATTRIBUTE_MATRIX_HPP_
#define GTULU_INTERNAL_FORMAT_ATTRIBUTE_MATRIX_HPP_

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace attribute {
        namespace matrix {

          DECLARE_TRAIT_ASPECT(dimension, using fcd::,
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

          template< typename format_t, typename type_t, typename dimension_t >
          struct attribute_metadata: fa::attribute_metadata< format_t, fab::matrix, type_t > {
            using fa::attribute_metadata< format_t, fab::matrix, type_t >::format;
            using fa::attribute_metadata< format_t, fab::matrix, type_t >::base;
            using fa::attribute_metadata< format_t, fab::matrix, type_t >::type;
            using fa::attribute_metadata< format_t, fab::matrix, type_t >::count;
            typedef dimension_t dimension;
          };

          template< typename format_t >
          struct attribute_format;
        } // namespace matrix

#define DECLARE_ATTRIBUTE_FORMAT(format_m, type_m, dimension_m) \
    namespace matrix { \
      template< > struct attribute_format< faf::format_m > { \
          typedef attribute_metadata< faf::format_m, fat::type_m, dimension::dimension_m > info; \
      }; \
    } \
    typedef matrix::attribute_format< format::format_m > format_m; \
    DECLARE_HAS_TRAIT_FORMAT(base, matrix, format_m) \
    DECLARE_HAS_TRAIT_FORMAT(type, type_m, format_m) \
    namespace matrix { \
      DECLARE_HAS_TRAIT_FORMAT(dimension, dimension_m, format_m) \
    }

        DECLARE_ATTRIBUTE_FORMAT(gl_float_mat2, floating, two_by_two)
        DECLARE_ATTRIBUTE_FORMAT(gl_float_mat2x3, floating, two_by_three)
        DECLARE_ATTRIBUTE_FORMAT(gl_float_mat2x4, floating, two_by_four)
        DECLARE_ATTRIBUTE_FORMAT(gl_float_mat3x2, floating, three_by_two)
        DECLARE_ATTRIBUTE_FORMAT(gl_float_mat3, floating, three_by_three)
        DECLARE_ATTRIBUTE_FORMAT(gl_float_mat3x4, floating, three_by_four)
        DECLARE_ATTRIBUTE_FORMAT(gl_float_mat4x2, floating, four_by_two)
        DECLARE_ATTRIBUTE_FORMAT(gl_float_mat4x3, floating, four_by_three)
        DECLARE_ATTRIBUTE_FORMAT(gl_float_mat4, floating, four_by_four)

#undef DECLARE_ATTRIBUTE_FORMAT

      } // namespace attribute
    } // namespace formats

    namespace fam = ::gtulu::internal::formats::attribute::matrix;
    namespace famd = ::gtulu::internal::formats::attribute::matrix::dimension;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_ATTRIBUTE_MATRIX_HPP_ */

/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_FORMAT_ATTRIBUTE_HPP_
#error "formats/attribute/attribute_vector.hpp should not be included directly, please include formats/attribute.hpp instead."
#endif /* IN_GTULU_INTERNAL_FORMAT_ATTRIBUTE_HPP_ */

#ifndef GTULU_INTERNAL_FORMAT_ATTRIBUTE_VECTOR_HPP_
#define GTULU_INTERNAL_FORMAT_ATTRIBUTE_VECTOR_HPP_

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace attribute {
        namespace vector {

          DECLARE_TRAIT_ASPECT(count, using fcd::,
              (two)
              (three)
              (four)
          )

          template< typename format_t, typename type_t, typename count_t >
          struct attribute_metadata: fa::attribute_metadata< format_t, fab::vector, type_t > {
            using fa::attribute_metadata< format_t, fab::vector, type_t >::format;
            using fa::attribute_metadata< format_t, fab::vector, type_t >::base;
            using fa::attribute_metadata< format_t, fab::vector, type_t >::type;
            typedef count_t count;
          };

          template< typename format_t >
          struct attribute_format;
        } // namespace vector

#define DECLARE_ATTRIBUTE_FORMAT(format_m, type_m, count_m) \
    namespace vector { \
      template< > struct attribute_format< faf::format_m > { \
          typedef attribute_metadata< faf::format_m, fat::type_m, count::count_m > info; \
      }; \
    } \
    typedef vector::attribute_format< format::format_m > format_m; \
    DECLARE_HAS_TRAIT_FORMAT(base, vector, format_m) \
    DECLARE_HAS_TRAIT_FORMAT(type, type_m, format_m) \
    namespace vector { \
      DECLARE_HAS_TRAIT_FORMAT(count, count_m, format_m) \
    }

        DECLARE_ATTRIBUTE_FORMAT(gl_float_vec2, floating, two)
        DECLARE_ATTRIBUTE_FORMAT(gl_float_vec3, floating, three)
        DECLARE_ATTRIBUTE_FORMAT(gl_float_vec4, floating, four)
        DECLARE_ATTRIBUTE_FORMAT(gl_int_vec2, integer, two)
        DECLARE_ATTRIBUTE_FORMAT(gl_int_vec3, integer, three)
        DECLARE_ATTRIBUTE_FORMAT(gl_int_vec4, integer, four)
        DECLARE_ATTRIBUTE_FORMAT(gl_unsigned_int_vec2, unsigned_integer, two)
        DECLARE_ATTRIBUTE_FORMAT(gl_unsigned_int_vec3, unsigned_integer, three)
        DECLARE_ATTRIBUTE_FORMAT(gl_unsigned_int_vec4, unsigned_integer, four)
#undef DECLARE_ATTRIBUTE_FORMAT
      } // namespace attribute
    } // namespace formats

    namespace fav = ::gtulu::internal::formats::attribute::vector;
    namespace favc = ::gtulu::internal::formats::attribute::vector::count;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_ATTRIBUTE_VECTOR_HPP_ */

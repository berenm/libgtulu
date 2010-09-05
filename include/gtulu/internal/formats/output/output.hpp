/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_FORMAT_OUTPUT_HPP_
#error "gtulu/internal/formats/output/output.hpp should not be included directly, please include gtulu/internal/formats/output.hpp instead."
#endif /* IN_GTULU_INTERNAL_FORMAT_OUTPUT_HPP_ */

#ifndef GTULU_INTERNAL_FORMAT_OUTPUT_OUTPUT_HPP_
#define GTULU_INTERNAL_FORMAT_OUTPUT_OUTPUT_HPP_

#include <string>

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace output {

        namespace format {
          typedef cst::gl_float gl_float;
          typedef cst::gl_float_vec2 gl_float_vec2;
          typedef cst::gl_float_vec3 gl_float_vec3;
          typedef cst::gl_float_vec4 gl_float_vec4;
          typedef cst::gl_int gl_int;
          typedef cst::gl_int_vec2 gl_int_vec2;
          typedef cst::gl_int_vec3 gl_int_vec3;
          typedef cst::gl_int_vec4 gl_int_vec4;
          typedef cst::gl_unsigned_int gl_unsigned_int;
          typedef cst::gl_unsigned_int_vec2 gl_unsigned_int_vec2;
          typedef cst::gl_unsigned_int_vec3 gl_unsigned_int_vec3;
          typedef cst::gl_unsigned_int_vec4 gl_unsigned_int_vec4;

          const cst::gl_constant_base get(::std::string type_name);
        } // namespace format

        DECLARE_TRAIT_ASPECT(base, struct,
            (literal)
            (vector)
        )
        DECLARE_TRAIT_ASPECT(type, struct,
            (floating)
            (integer)
            (unsigned_integer)
        )

        template< typename format_t, typename base_t, typename type_t >
        struct output_metadata {
          typedef format_t format;
          typedef base_t base;
          typedef type_t type;
          typedef fcd::one count;
        };

        template< typename format_t >
        struct output_format;

#define DECLARE_OUTPUT_FORMAT(format_m, base_m, type_m) \
    template< > struct output_format< format::format_m > { \
        typedef output_metadata< format::format_m, base::base_m, type::type_m > info; \
    }; \
    typedef output_format< format::format_m > format_m; \
    DECLARE_HAS_TRAIT_FORMAT(base, base_m, format_m) \
    DECLARE_HAS_TRAIT_FORMAT(type, type_m, format_m)

        DECLARE_OUTPUT_FORMAT(gl_float, literal, floating)
        DECLARE_OUTPUT_FORMAT(gl_int, literal, integer)
        DECLARE_OUTPUT_FORMAT(gl_unsigned_int, literal, unsigned_integer)
#undef DECLARE_OUTPUT_FORMAT
      } // namespace output
    } // namespace formats

    namespace fo = ::gtulu::internal::formats::output;
    namespace fob = ::gtulu::internal::formats::output::base;
    namespace fof = ::gtulu::internal::formats::output::format;
    namespace fot = ::gtulu::internal::formats::output::type;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_OUTPUT_OUTPUT_HPP_ */

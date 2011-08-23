/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
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

        META_ASPECT_DECLARE(format, Format, using cst::,
            (gl_float)
            (gl_float_vec2)
            (gl_float_vec3)
            (gl_float_vec4)
            (gl_int)
            (gl_int_vec2)
            (gl_int_vec3)
            (gl_int_vec4)
            (gl_unsigned_int)
            (gl_unsigned_int_vec2)
            (gl_unsigned_int_vec3)
            (gl_unsigned_int_vec4)
        )

        namespace format {
          cst::gl_constant_base const get(::std::string type_name);
        } // namespace format

        META_ASPECT_DECLARE(base, Base, struct,
            (literal)
            (vector)
        )
        META_ASPECT_DECLARE(type, Type, struct,
            (floating)
            (integer)
            (unsigned_integer)
        )

        template< typename Format, typename Base, typename DataType >
        struct output_metadata {
          typedef Format format;
          typedef Base base;
          typedef DataType type;
          typedef fcd::one count;
        };

        template< typename Format >
        struct output_format;

#define DECLARE_OUTPUT_FORMAT(format_m, base_m, type_m) \
    template< > struct output_format< format::format_m > { \
        typedef output_metadata< format::format_m, base::base_m, type::type_m > info; \
    }; \
    typedef output_format< format::format_m > format_m; \
    DECLARE_HAS_TRAIT_FORMAT(base, base_m, format_m); \
    DECLARE_HAS_TRAIT_FORMAT(type, type_m, format_m);

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

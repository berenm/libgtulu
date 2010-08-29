/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_OUTPUT_HPP_
#error "gtulu/internal/output/output.hpp should not be included directly, please include gtulu/internal/output.hpp instead."
#endif

#ifndef GTULU_INTERNAL_OUTPUT_OUTPUT_HPP_
#define GTULU_INTERNAL_OUTPUT_OUTPUT_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/formats/output.hpp"

namespace gtulu {
  namespace internal {

    namespace output {

      template< typename type_t >
      struct output_binder {
          template< typename texture_format_t >
          void bind(const location_t location, const gio::texture< texture_format_t > & texture);

          template< typename renderbuffer_format_t >
          void bind(const location_t location, const gio::renderbuffer< renderbuffer_format_t > & renderbuffer);

          template< typename renderbuffer_format_t >
          void bind(const location_t location,
                    const gio::default_framebuffer< renderbuffer_format_t >::front_left& renderbuffer);
      };

#define DECLARE_BINDER(type_m, suffix_m) \
    template< > \
    struct output_binder< fo::type::type_m > { \
        inline static void bind(const location_t location, const fo::to_typename< fo::type::type_m >::type value) { \
          __gl_debug(glUniform1##suffix_m, (location)(value)); \
          glUniform1##suffix_m(location, value); \
          __gl_check_error \
        } \
        inline static void bind(const location_t location, const ::boost::uint32_t number, const fo::to_typename< fo::type::type_m >::type* values) { \
          __gl_debug(glUniform1##suffix_m##v, (location)(number)(values)); \
          glUniform1##suffix_m##v(location, number, values); \
          __gl_check_error \
        } \
    };

      DECLARE_BINDER(floating, f)
      DECLARE_BINDER(integer, i)
      DECLARE_BINDER(unsigned_integer, ui)
#undef DECLARE_BINDER

      template< typename format_t, typename binder_t = output_binder< typename format_t::info::type > ,
          typename value_t = typename fo::to_typename< typename format_t::info::type >::type >
      struct output {
          typedef format_t format;
          typedef value_t value_type;
          typedef binder_t binder;
      };
#define DECLARE_OUTPUT(format_m) \
    typedef output< fo::format_m > format_m;
      DECLARE_OUTPUT(gl_float)
      DECLARE_OUTPUT(gl_int)
      DECLARE_OUTPUT(gl_unsigned_int)

#undef DECLARE_OUTPUT
    } // namespace output

    namespace giou = ::gtulu::internal::output;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OUTPUT_OUTPUT_HPP_ */

/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_OUTPUT_HPP_
#error "gtulu/internal/output/output.hpp should not be included directly, please include gtulu/internal/output.hpp instead."
#endif /* IN_GTULU_INTERNAL_OUTPUT_HPP_ */

#ifndef GTULU_INTERNAL_OUTPUT_OUTPUT_HPP_
#define GTULU_INTERNAL_OUTPUT_OUTPUT_HPP_

namespace gtulu {
  namespace internal {

    namespace output {

      template< typename type_t >
      struct output_binder {
          template< typename texture_format_t >
          void bind(const location_t location_in, const gio::texture< texture_format_t > & texture_in);

          template< typename renderbuffer_format_t >
          void bind(const location_t location_in, const gio::renderbuffer< renderbuffer_format_t > & renderbuffer_in);

          template< typename renderbuffer_format_t >
          void bind(const location_t location_in,
                    const gio::default_framebuffer< renderbuffer_format_t >::front_left& renderbuffer_in);
      };

#define DECLARE_BINDER(type_m, suffix_m) \
    template< > \
    struct output_binder< fo::type::type_m > { \
        inline static void bind(const location_t location_in, const fo::to_typename< fo::type::type_m >::type value_in) { \
          fnc:: gl_uniform_1##suffix_m ::call(location_in, value_in); \
        } \
        inline static void bind(const location_t location_in, const ::std::uint32_t number_in, const fo::to_typename< fo::type::type_m >::type* values_in) { \
          fnc:: gl_uniform_1##suffix_m##v ::call(location_in, number_in, value_in); \
        } \
    };

      DECLARE_BINDER(floating, _f)
      DECLARE_BINDER(integer, _i)
      DECLARE_BINDER(unsigned_integer, _ui)
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

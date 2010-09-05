/**
 * @file
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

      template< typename type_t >
      struct uniform_binder;

#define DECLARE_BINDER(type_m, suffix_m) \
    template< > \
    struct uniform_binder< fut::type_m > { \
        inline static void bind(const location_t location, const fu::to_typename< fut::type_m >::type value) { \
          fnc:: gl_uniform_1##suffix_m ::call(location, value); \
        } \
        inline static void bind(const location_t location, const ::boost::uint32_t number, const fu::to_typename< fut::type_m >::type* values) { \
          fnc:: gl_uniform_1##suffix_m##v ::call(location, number, values); \
        } \
    };

      DECLARE_BINDER(floating, _f)
      DECLARE_BINDER(integer, _i)
      DECLARE_BINDER(unsigned_integer, _ui)
      DECLARE_BINDER(boolean, _i)
#undef DECLARE_BINDER

      template< typename format_t, typename binder_t = uniform_binder< typename format_t::info::type > ,
          typename value_t = typename fu::to_typename< typename format_t::info::type >::type >
      struct uniform {
          typedef format_t format;
          typedef value_t value_type;
          typedef binder_t binder;
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

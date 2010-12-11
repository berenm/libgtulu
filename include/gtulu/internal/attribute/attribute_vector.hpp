/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_ATTRIBUTE_HPP_
#error "gtulu/internal/attribute/attribute_vector.hpp should not be included directly, please include gtulu/internal/attribute.hpp instead."
#endif /* IN_GTULU_INTERNAL_ATTRIBUTE_HPP_ */

#ifndef GTULU_INTERNAL_ATTRIBUTE_VECTOR_HPP_
#define GTULU_INTERNAL_ATTRIBUTE_VECTOR_HPP_

#include "gtulu/internal/formats/conversions/dimension.hpp"

#include <boost/preprocessor.hpp>

namespace gtulu {
  namespace internal {

    namespace attribute {
      namespace vector {

        template< typename type_t, typename count_t >
        struct attribute_binder;

        template< >
        struct attribute_binder< fat::integer, fc::to_typename< 2 >::type > {
            inline static void bind(const location_t location_in,
                                    const ::std::int32_t value_in0,
                                    const ::std::int32_t value_in1) {
              fnc::gl_vertex_attrib_2_integer::call(location_in, value_in0, value_in1);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in, const ::std::int32_t* values_in) {
              fnc::gl_vertex_attrib_2_integer::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
        };
        template< >
        struct attribute_binder< fat::integer, fc::to_typename< 3 >::type > {
            inline static void bind(const location_t location_in,
                                    const ::std::int32_t value_in0,
                                    const ::std::int32_t value_in1,
                                    const ::std::int32_t value_in2) {
              fnc::gl_vertex_attrib_3_integer::call(location_in, value_in0, value_in1, value_in2);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in, const ::std::int32_t* values_in) {
              fnc::gl_vertex_attrib_3_integer::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
        };
        template< >
        struct attribute_binder< fat::integer, fc::to_typename< 4 >::type > {
            inline static void bind(const location_t location_in,
                                    const ::std::int32_t value_in0,
                                    const ::std::int32_t value_in1,
                                    const ::std::int32_t value_in2,
                                    const ::std::int32_t value_in3) {
              fnc::gl_vertex_attrib_4_integer::call(location_in, value_in0, value_in1, value_in2, value_in3);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in, const ::std::int32_t* values_in) {
              fnc::gl_vertex_attrib_4_integer::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
        };

        template< >
        struct attribute_binder< fat::unsigned_integer, fc::to_typename< 2 >::type > {
            inline static void bind(const location_t location_in,
                                    const ::std::uint32_t value_in0,
                                    const ::std::uint32_t value_in1) {
              fnc::gl_vertex_attrib_2_integer::call(location_in, value_in0, value_in1);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in, const ::std::uint32_t* values_in) {
              fnc::gl_vertex_attrib_2_integer::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
        };
        template< >
        struct attribute_binder< fat::unsigned_integer, fc::to_typename< 3 >::type > {
            inline static void bind(const location_t location_in,
                                    const ::std::uint32_t value_in0,
                                    const ::std::uint32_t value_in1,
                                    const ::std::uint32_t value_in2) {
              fnc::gl_vertex_attrib_3_integer::call(location_in, value_in0, value_in1, value_in2);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in, const ::std::uint32_t* values_in) {
              fnc::gl_vertex_attrib_3_integer::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
        };
        template< >
        struct attribute_binder< fat::unsigned_integer, fc::to_typename< 4 >::type > {
            inline static void bind(const location_t location_in,
                                    const ::std::uint32_t value_in0,
                                    const ::std::uint32_t value_in1,
                                    const ::std::uint32_t value_in2,
                                    const ::std::uint32_t value_in3) {
              fnc::gl_vertex_attrib_4_integer::call(location_in, value_in0, value_in1, value_in2, value_in3);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in, const ::std::uint32_t* values_in) {
              fnc::gl_vertex_attrib_4_integer::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
        };

        template< >
        struct attribute_binder< fat::floating, fc::to_typename< 2 >::type > {
            inline static void bind(const location_t location_in, const double value_in0, const double value_in1) {
              fnc::gl_vertex_attrib_2::call(location_in, value_in0, value_in1);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in, const double* values_in) {
              fnc::gl_vertex_attrib_2::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in, const float value_in0, const float value_in1) {
              fnc::gl_vertex_attrib_2::call(location_in, value_in0, value_in1);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in, const float* values_in) {
              fnc::gl_vertex_attrib_2::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in,
                                    const ::std::int16_t value_in0,
                                    const ::std::int16_t value_in1) {
              fnc::gl_vertex_attrib_2::call(location_in, value_in0, value_in1);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in, const ::std::int16_t* values_in) {
              fnc::gl_vertex_attrib_2::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
        };
        template< >
        struct attribute_binder< fat::floating, fc::to_typename< 3 >::type > {
            inline static void bind(const location_t location_in,
                                    const double value_in0,
                                    const double value_in1,
                                    const double value_in2) {
              fnc::gl_vertex_attrib_3::call(location_in, value_in0, value_in1, value_in2);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in, const double* values_in) {
              fnc::gl_vertex_attrib_3::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in,
                                    const float value_in0,
                                    const float value_in1,
                                    const float value_in2) {
              fnc::gl_vertex_attrib_3::call(location_in, value_in0, value_in1, value_in2);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in, const float* values_in) {
              fnc::gl_vertex_attrib_3::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in,
                                    const ::std::int16_t value_in0,
                                    const ::std::int16_t value_in1,
                                    const ::std::int16_t value_in2) {
              fnc::gl_vertex_attrib_3::call(location_in, value_in0, value_in1, value_in2);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in, const ::std::int16_t* values_in) {
              fnc::gl_vertex_attrib_3::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
        };

        template< >
        struct attribute_binder< fat::floating, favc::four > {
            inline static void bind(const location_t location_in,
                                    const double value_in0,
                                    const double value_in1,
                                    const double value_in2,
                                    const double value_in3) {
              fnc::gl_vertex_attrib_4::call(location_in, value_in0, value_in1, value_in2, value_in3);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in, const double* values_in) {
              fnc::gl_vertex_attrib_4::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in,
                                    const float value_in0,
                                    const float value_in1,
                                    const float value_in2,
                                    const float value_in3) {
              fnc::gl_vertex_attrib_4::call(location_in, value_in0, value_in1, value_in2, value_in3);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in, const float* values_in) {
              fnc::gl_vertex_attrib_4::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in,
                                    const ::std::int16_t value_in0,
                                    const ::std::int16_t value_in1,
                                    const ::std::int16_t value_in2,
                                    const ::std::int16_t value_in3) {
              fnc::gl_vertex_attrib_4::call(location_in, value_in0, value_in1, value_in2, value_in3);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in, const ::std::int16_t* values_in) {
              fnc::gl_vertex_attrib_4::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }

            inline static void bind(const location_t location_in, const ::std::int32_t* values_in) {
              fnc::gl_vertex_attrib_4::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in, const ::std::int8_t* values_in) {
              fnc::gl_vertex_attrib_4::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in, const ::std::uint32_t* values_in) {
              fnc::gl_vertex_attrib_4::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in, const ::std::uint16_t* values_in) {
              fnc::gl_vertex_attrib_4::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind(const location_t location_in, const ::std::uint8_t* values_in) {
              fnc::gl_vertex_attrib_4::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }

            inline static void bind_normalized(const location_t location_in,
                                               const ::std::uint8_t value_in0,
                                               const ::std::uint8_t value_in1,
                                               const ::std::uint8_t value_in2,
                                               const ::std::uint8_t value_in3) {
              fnc::gl_vertex_attrib_4_normalized::call(location_in, value_in0, value_in1, value_in2, value_in3);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind_normalized(const location_t location_in, const ::std::int32_t* values_in) {
              fnc::gl_vertex_attrib_4_normalized::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind_normalized(const location_t location_in, const ::std::int16_t* values_in) {
              fnc::gl_vertex_attrib_4_normalized::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind_normalized(const location_t location_in, const ::std::int8_t* values_in) {
              fnc::gl_vertex_attrib_4_normalized::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind_normalized(const location_t location_in, const ::std::uint32_t* values_in) {
              fnc::gl_vertex_attrib_4_normalized::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind_normalized(const location_t location_in, const ::std::uint16_t* values_in) {
              fnc::gl_vertex_attrib_4_normalized::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
            inline static void bind_normalized(const location_t location_in, const ::std::uint8_t* values_in) {
              fnc::gl_vertex_attrib_4_normalized::call(location_in, values_in);
              fnc::gl_disable_vertex_attrib_array::call(location_in);
            }
        };

        template< typename format_t, typename binder_t = attribute_binder< typename format_t::info::type,
            typename format_t::info::count > , typename buffer_binder_t = attribute_buffer_binder<
            typename format_t::info::type, typename format_t::info::count > ,
            typename value_t = typename fa::to_typename< typename format_t::info::type >::type >
        struct attribute {
            typedef format_t format;
            typedef value_t value_type;
            typedef binder_t binder;
            typedef buffer_binder_t buffer_binder;
        };
      } // namespace vector

#define DECLARE_ATTRIBUTE(format_m) \
  typedef vector::attribute< fa::format_m > format_m;

      DECLARE_ATTRIBUTE(gl_float_vec2)
      DECLARE_ATTRIBUTE(gl_float_vec3)
      DECLARE_ATTRIBUTE(gl_float_vec4)
      DECLARE_ATTRIBUTE(gl_int_vec2)
      DECLARE_ATTRIBUTE(gl_int_vec3)
      DECLARE_ATTRIBUTE(gl_int_vec4)
      DECLARE_ATTRIBUTE(gl_unsigned_int_vec2)
      DECLARE_ATTRIBUTE(gl_unsigned_int_vec3)
      DECLARE_ATTRIBUTE(gl_unsigned_int_vec4)

#undef DECLARE_ATTRIBUTE

    } // namespace attribute

    namespace giav = ::gtulu::internal::attribute::vector;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_ATTRIBUTE_VECTOR_HPP_ */

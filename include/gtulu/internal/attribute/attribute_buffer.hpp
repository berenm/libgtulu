/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_ATTRIBUTE_HPP_
#error "gtulu/internal/attribute/attribute_buffer.hpp should not be included directly, please include gtulu/internal/attribute.hpp instead."
#endif /* IN_GTULU_INTERNAL_ATTRIBUTE_HPP_ */

#ifndef GTULU_INTERNAL_ATTRIBUTE_BUFFER_HPP_
#define GTULU_INTERNAL_ATTRIBUTE_BUFFER_HPP_

#include "gtulu/internal/formats/conversions/dimension.hpp"

#include "gtulu/internal/formats/data.hpp"
#include "gtulu/internal/objects/buffer.hpp"

#include <boost/preprocessor.hpp>

/**
 * @todo verify that, it's a little bit ugly.
 */

namespace gtulu {
  namespace internal {

    namespace attribute {
      template< typename type_t, typename count_t >
      struct attribute_buffer_binder;

      template< typename attribute_type_t, typename buffer_format_t >
      struct is_buffer_format_compatible: fa::is_compatible< attribute_type_t, buffer_format_t > {
      };

      template< typename normalize_t, typename data_type_t >
      struct is_normalize_data_compatible;
      template< >
      struct is_normalize_data_compatible< fdn::normalized, fdt::integer > {
      };
      template< >
      struct is_normalize_data_compatible< fdn::normal, fdt::integer > {
      };
      template< >
      struct is_normalize_data_compatible< fdn::normal, fdt::floating > {
      };

      template< typename normalize_t, typename data_order_t >
      struct is_normalize_order_compatible;
      template< >
      struct is_normalize_order_compatible< fdn::normalized, fdo::normal > {
      };
      template< >
      struct is_normalize_order_compatible< fdn::normal, fdo::normal > {
      };
      template< >
      struct is_normalize_order_compatible< fdn::normal, fdo::reverse > {
      };

      template< typename data_order_t >
      struct is_data_order_normal;
      template< >
      struct is_data_order_normal< fdo::normal > {
      };
      template< typename data_format_t, typename data_order_t >
      struct is_data_order_compatible: is_data_order_normal< data_order_t > {
      };
      template< >
      struct is_data_order_compatible< fd::gl_unsigned_byte, fdo::reverse > {
      };

      template< typename data_order_t, const ::boost::int32_t count >
      struct is_order_count_compatible;
      template< >
      struct is_order_count_compatible< fdo::normal, 1 > {
      };
      template< >
      struct is_order_count_compatible< fdo::normal, 2 > {
      };
      template< >
      struct is_order_count_compatible< fdo::normal, 3 > {
      };
      template< >
      struct is_order_count_compatible< fdo::normal, 4 > {
      };
      template< >
      struct is_order_count_compatible< fdo::reverse, 4 > {
      };

      template< const ::boost::int32_t size_t, typename data_order_t >
      struct buffer_binder_order {
          static const ::boost::int32_t size_value = size_t;
      };
      template< >
      struct buffer_binder_order< 4, fdo::reverse > {
          static const ::boost::int32_t size_value = GL_BGRA;
      };

#define DECLARE_FLOATING_BUFFER_BINDER(type_m, count_m) \
    template< > \
    struct attribute_buffer_binder< fat::type_m, fc::to_typename< count_m >::type > { \
        typedef fat::floating attribute_type_t; \
        \
        template< typename buffer_format_t, typename normalize_t = fdn::normal, typename data_order_t = fdo::normal > \
        struct checked_binder: is_buffer_format_compatible< attribute_type_t, buffer_format_t > , \
                               is_normalize_data_compatible< normalize_t, typename buffer_format_t::info::type > , \
                               is_normalize_order_compatible< normalize_t, data_order_t > , \
                               is_data_order_compatible< buffer_format_t, data_order_t >, \
                               is_order_count_compatible< data_order_t, count_m > { \
            inline static void bind(const location_t location, const gio::buffer< buffer_format_t >& buffer, const ::boost::uint32_t offset, const ::boost::uint32_t stride) { \
              gib::array_buffer_slot::bind(buffer); \
              fnc::gl_vertex_attrib_pointer::call< typename buffer_format_t::info::format >(location, buffer_binder_order< count_m, data_order_t >::size_value, fdn::is_normalized< normalize_t >::value, stride, reinterpret_cast< const GLvoid* > (offset)); \
              fnc::gl_enable_vertex_attrib_array::call(location); \
            } \
        }; \
    }; \

      DECLARE_FLOATING_BUFFER_BINDER(floating, 1)
      DECLARE_FLOATING_BUFFER_BINDER(floating, 2)
      DECLARE_FLOATING_BUFFER_BINDER(floating, 3)
      DECLARE_FLOATING_BUFFER_BINDER(floating, 4)

#undef DECLARE_FLOATING_BUFFER_BINDER

#define DECLARE_INTEGER_BUFFER_BINDER(type_m, count_m) \
    template< > \
    struct attribute_buffer_binder< fat::type_m, fc::to_typename< count_m >::type > { \
        typedef fat::type_m attribute_type_t; \
        \
        template< typename buffer_format_t > \
        struct checked_binder: is_buffer_format_compatible< attribute_type_t, buffer_format_t > { \
            inline static void bind(const location_t location, const gio::buffer< buffer_format_t >& buffer, const ::boost::uint32_t offset, const ::boost::uint32_t stride) { \
              gib::array_buffer_slot::bind(buffer); \
              fnc::gl_vertex_attrib_ipointer::call< typename buffer_format_t::info::format >(location, count_m, stride, reinterpret_cast< const GLvoid* > (offset)); \
              fnc::gl_enable_vertex_attrib_array::call(location); \
            } \
        }; \
    }; \

      DECLARE_INTEGER_BUFFER_BINDER(integer, 1)
      DECLARE_INTEGER_BUFFER_BINDER(integer, 2)
      DECLARE_INTEGER_BUFFER_BINDER(integer, 3)
      DECLARE_INTEGER_BUFFER_BINDER(integer, 4)
      DECLARE_INTEGER_BUFFER_BINDER(unsigned_integer, 1)
      DECLARE_INTEGER_BUFFER_BINDER(unsigned_integer, 2)
      DECLARE_INTEGER_BUFFER_BINDER(unsigned_integer, 3)
      DECLARE_INTEGER_BUFFER_BINDER(unsigned_integer, 4)

#undef DECLARE_BINDER

    } // namespace attribute

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_ATTRIBUTE_BUFFER_HPP_ */

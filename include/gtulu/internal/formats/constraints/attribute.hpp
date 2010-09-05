/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_CONSTRAINT_ATTRIBUTE_HPP_
#define GTULU_INTERNAL_FORMAT_CONSTRAINT_ATTRIBUTE_HPP_

#include "gtulu/internal/formats/attribute.hpp"
#include "gtulu/internal/formats/data.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace attribute {

        template< typename attribute_type_t, typename data_packing_t >
        struct is_data_packing_compatible;

#define DECLARE_COMPATIBLE(attribute_m, packing_m) \
    template< > struct is_data_packing_compatible< type::attribute_m, fdp::packing_m > {};

        DECLARE_COMPATIBLE(floating, none)
        DECLARE_COMPATIBLE(integer, none)
        DECLARE_COMPATIBLE(unsigned_integer, none)

#undef DECLARE_COMPATIBLE

        template< typename attribute_type_t, typename data_value_type_t >
        struct is_data_value_type_compatible;

#define DECLARE_COMPATIBLE(attribute_m, value_type_m) \
    template< > struct is_data_value_type_compatible< type::attribute_m, fdv::value_type_m > {};

        DECLARE_COMPATIBLE(floating, byte_)
        DECLARE_COMPATIBLE(floating, unsigned_byte)
        DECLARE_COMPATIBLE(floating, short_)
        DECLARE_COMPATIBLE(floating, unsigned_short)
        DECLARE_COMPATIBLE(floating, int_)
        DECLARE_COMPATIBLE(floating, unsigned_int)
        DECLARE_COMPATIBLE(floating, float_)
        DECLARE_COMPATIBLE(floating, half_float)
        DECLARE_COMPATIBLE(floating, double_)
        DECLARE_COMPATIBLE(integer, byte_)
        DECLARE_COMPATIBLE(integer, unsigned_byte)
        DECLARE_COMPATIBLE(integer, short_)
        DECLARE_COMPATIBLE(integer, unsigned_short)
        DECLARE_COMPATIBLE(integer, int_)
        DECLARE_COMPATIBLE(integer, unsigned_int)
        DECLARE_COMPATIBLE(unsigned_integer, byte_)
        DECLARE_COMPATIBLE(unsigned_integer, unsigned_byte)
        DECLARE_COMPATIBLE(unsigned_integer, short_)
        DECLARE_COMPATIBLE(unsigned_integer, unsigned_short)
        DECLARE_COMPATIBLE(unsigned_integer, int_)
        DECLARE_COMPATIBLE(unsigned_integer, unsigned_int)

#undef DECLARE_COMPATIBLE

        template< typename attribute_type_t, typename data_format_t >
        struct is_compatible: is_data_packing_compatible< attribute_type_t, typename data_format_t::info::packing > ,
                              is_data_value_type_compatible< attribute_type_t, typename data_format_t::info::value_type > {
        };

      } // namespace attribute
    } // namespace formats

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONSTRAINT_ATTRIBUTE_HPP_ */

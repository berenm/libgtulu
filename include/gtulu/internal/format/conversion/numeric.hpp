/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_CONVERSION_NUMERIC_HPP_
#define GTULU_INTERNAL_FORMAT_CONVERSION_NUMERIC_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/internal/format/numeric.hpp"

#include <cstdint>

namespace gtulu {
  namespace internal {

    namespace format {
      namespace numeric {

        template< typename NumericFormat >
        struct to_value_type;

#define DECLARE_CONVERSION(value_type_m, numeric_format_m) \
  template< >                                              \
  struct to_value_type< numeric::numeric_format_m > {      \
    typedef value_type_m type;                             \
  };

        DECLARE_CONVERSION(bool, bool_)

        DECLARE_CONVERSION(std::int8_t, int8_)
        DECLARE_CONVERSION(std::int16_t, int16_)
        DECLARE_CONVERSION(std::int32_t, int32_)
        DECLARE_CONVERSION(std::int64_t, int64_)
        DECLARE_CONVERSION(std::uint8_t, uint8_)
        DECLARE_CONVERSION(std::uint16_t, uint16_)
        DECLARE_CONVERSION(std::uint32_t, uint32_)
        DECLARE_CONVERSION(std::uint64_t, uint64_)

        DECLARE_CONVERSION(std::int16_t, fixed16_)
        DECLARE_CONVERSION(std::int32_t, fixed32_)
        DECLARE_CONVERSION(std::int64_t, fixed64_)
        DECLARE_CONVERSION(std::uint16_t, ufixed16_)
        DECLARE_CONVERSION(std::uint32_t, ufixed32_)
        DECLARE_CONVERSION(std::uint64_t, ufixed64_)

        DECLARE_CONVERSION(std::int16_t, float16_)
        DECLARE_CONVERSION(float, float32_)
        DECLARE_CONVERSION(double, float64_)

        // Special case for uint32 packed floating points format
        DECLARE_CONVERSION(std::uint32_t, ufloat32_)

        // Special case for float32_uint24_8 packed floating point format
        DECLARE_CONVERSION(float, float32_stride32_)

#undef DECLARE_CONVERSION

        template< typename Width >
        struct size_of;

#define DECLARE_CONVERSION(value_m, width_m)   \
  template< >                                  \
  struct size_of< numeric::width::width_m > {  \
    static std::uint8_t const value = value_m; \
  };

        DECLARE_CONVERSION(1, one_bit)
        DECLARE_CONVERSION(1, two_bits)
        DECLARE_CONVERSION(1, three_bits)
        DECLARE_CONVERSION(1, four_bits)
        DECLARE_CONVERSION(1, five_bits)
        DECLARE_CONVERSION(2, ten_bits)
        DECLARE_CONVERSION(2, eleven_bits)
        DECLARE_CONVERSION(2, twelve_bits)
        DECLARE_CONVERSION(2, fourteen_bits)
        DECLARE_CONVERSION(3, twentyfour_bits)
        DECLARE_CONVERSION(1, one_byte)
        DECLARE_CONVERSION(2, two_bytes)
        DECLARE_CONVERSION(4, four_bytes)
        DECLARE_CONVERSION(8, eight_bytes)
        DECLARE_CONVERSION(1, any)

#undef DECLARE_CONVERSION

      } // namespace numeric
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONVERSION_NUMERIC_HPP_ */

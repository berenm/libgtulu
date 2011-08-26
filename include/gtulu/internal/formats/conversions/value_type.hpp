/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_FORMAT_CONVERSION_VALUE_TYPE_HPP_
#define GTULU_INTERNAL_FORMAT_CONVERSION_VALUE_TYPE_HPP_

#include "gtulu/internal/formats/common.hpp"

#include <cstdint>

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace common {
        template< typename Sign, typename Integral, typename Precision >
        struct to_value_type;

#define DECLARE_CONVERSION(value_type_m,sign_m,integral_m,precision_m) \
  template< > \
  struct to_value_type< sign::sign_m, integral::integral_m, precision::precision_m > { \
      typedef value_type_m type; \
  };

        DECLARE_CONVERSION(::std::uint8_t, unsigned_, integral, one_byte)
        DECLARE_CONVERSION(::std::int8_t, signed_, integral, one_byte)
        DECLARE_CONVERSION(::std::uint16_t, unsigned_, integral, two_bytes)
        DECLARE_CONVERSION(::std::int16_t, signed_, integral, two_bytes)
        DECLARE_CONVERSION(::std::uint32_t, unsigned_, integral, four_bytes)
        DECLARE_CONVERSION(::std::int32_t, signed_, integral, four_bytes)
        DECLARE_CONVERSION(::std::uint64_t, unsigned_, integral, eight_bytes)
        DECLARE_CONVERSION(::std::int64_t, signed_, integral, eight_bytes)

        DECLARE_CONVERSION(::std::uint8_t, unsigned_, fixed, one_byte)
        DECLARE_CONVERSION(::std::int8_t, signed_, fixed, one_byte)
        DECLARE_CONVERSION(::std::uint16_t, unsigned_, fixed, two_bytes)
        DECLARE_CONVERSION(::std::int16_t, signed_, fixed, two_bytes)
        DECLARE_CONVERSION(::std::uint32_t, unsigned_, fixed, four_bytes)
        DECLARE_CONVERSION(::std::int32_t, signed_, fixed, four_bytes)
        DECLARE_CONVERSION(::std::uint64_t, unsigned_, fixed, eight_bytes)
        DECLARE_CONVERSION(::std::int64_t, signed_, fixed, eight_bytes)

        DECLARE_CONVERSION(::std::int16_t, signed_, floating, two_bytes)
        DECLARE_CONVERSION(float, signed_, floating, four_bytes)
        DECLARE_CONVERSION(double, signed_, floating, eight_bytes)

        // Special case for uint32 packed floating points formats
        DECLARE_CONVERSION(::std::uint32_t, unsigned_, floating, four_bytes)

        // Special case for float32_uint24_8 packed floating point format
        DECLARE_CONVERSION(float, unsigned_, floating, eight_bytes)

#undef DECLARE_CONVERSION

      } // namespace common
    } // namespace formats

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONVERSION_VALUE_TYPE_HPP_ */

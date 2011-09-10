/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_FORMAT_NUMERIC_HPP_
#define GTULU_INTERNAL_FORMAT_NUMERIC_HPP_

#include "meta/type_traits.hpp"

#include <boost/mpl/find_if.hpp>
#include <boost/mpl/greater_equal.hpp>

namespace gtulu {
  namespace internal {

    namespace format {
      namespace numeric {

        META_ASPECT_DECLARE(format,
                            Format,
                            struct,
                            (signed_)(unsigned_)(integral_)(signed_integral)(unsigned_integral)(fixed_)(signed_fixed)(unsigned_fixed)(floating_)(signed_floating)(unsigned_floating)(bool_)(int8_)(int16_)(int32_)(int64_)(uint8_)(uint16_)(uint32_)(uint64_)(fixed8_)(fixed16_)(fixed32_)(fixed64_)(ufixed8_)(ufixed16_)(ufixed32_)(ufixed64_)(float16_)(float32_)(float64_)(ufloat32_)(float32_stride32_)(ufixed2_)(ufixed_least2_)(ufixed4_)(ufixed5_)(ufixed10_)(ufixed12_)(ufixed14_)(ufixed24_)(uint1_)(uint2_)(uint4_)(float_least10_))

        META_ASPECT_DECLARE(sign, Sign, struct, (signed_)(unsigned_)(any))
        META_ASPECT_DECLARE(integral, Integral, struct, (floating)(fixed)(integral)(boolean)(any))
        META_ASPECT_DECLARE(width,
                            Width,
                            struct,
                            (one_bit)(two_bits)(three_bits)(four_bits)(five_bits)(ten_bits)(eleven_bits)(twelve_bits)(fourteen_bits)(twentyfour_bits)(one_byte)(two_bytes)(four_bytes)(eight_bytes)(any))

        template< typename Format, typename Sign, typename Integral, typename Width >
        struct numeric_format_aspect {
            typedef Format format;
            typedef Sign sign;
            typedef Integral integral;
            typedef Width width;
        };

        template< typename Format >
        struct numeric_format;

#define DECLARE_FORMAT(format_m, sign_m, integral_m, width_m)      \
        template< > struct numeric_format< format::format_m > {    \
           typedef numeric_format_aspect< format::format_m,        \
                                          sign::sign_m,            \
                                          integral::integral_m,    \
                                          width::width_m > aspect; \
        };                                                         \
        typedef numeric_format< format::format_m > format_m;

        DECLARE_FORMAT(signed_, signed_, any, any)
        DECLARE_FORMAT(unsigned_, unsigned_, any, any)

        DECLARE_FORMAT(integral_, any, integral, any)
        DECLARE_FORMAT(signed_integral, signed_, integral, any)
        DECLARE_FORMAT(unsigned_integral, unsigned_, integral, any)
        DECLARE_FORMAT(fixed_, any, fixed, any)
        DECLARE_FORMAT(unsigned_fixed, unsigned_, fixed, any)
        DECLARE_FORMAT(signed_fixed, signed_, fixed, any)
        DECLARE_FORMAT(floating_, any, floating, any)
        DECLARE_FORMAT(signed_floating, signed_, floating, any)
        DECLARE_FORMAT(unsigned_floating, unsigned_, floating, any)

        DECLARE_FORMAT(bool_, unsigned_, boolean, any)
        DECLARE_FORMAT(int8_, signed_, integral, one_byte)
        DECLARE_FORMAT(int16_, signed_, integral, two_bytes)
        DECLARE_FORMAT(int32_, signed_, integral, four_bytes)
        DECLARE_FORMAT(int64_, signed_, integral, eight_bytes)
        DECLARE_FORMAT(uint8_, unsigned_, integral, one_byte)
        DECLARE_FORMAT(uint16_, unsigned_, integral, two_bytes)
        DECLARE_FORMAT(uint32_, unsigned_, integral, four_bytes)
        DECLARE_FORMAT(uint64_, unsigned_, integral, eight_bytes)
        DECLARE_FORMAT(fixed8_, signed_, fixed, one_byte)
        DECLARE_FORMAT(fixed16_, signed_, fixed, two_bytes)
        DECLARE_FORMAT(fixed32_, signed_, fixed, four_bytes)
        DECLARE_FORMAT(fixed64_, signed_, fixed, eight_bytes)
        DECLARE_FORMAT(ufixed8_, unsigned_, fixed, one_byte)
        DECLARE_FORMAT(ufixed16_, unsigned_, fixed, two_bytes)
        DECLARE_FORMAT(ufixed32_, unsigned_, fixed, four_bytes)
        DECLARE_FORMAT(ufixed64_, unsigned_, fixed, eight_bytes)
        DECLARE_FORMAT(float16_, signed_, floating, two_bytes)
        DECLARE_FORMAT(float32_, signed_, floating, four_bytes)
        DECLARE_FORMAT(float64_, signed_, floating, eight_bytes)
        DECLARE_FORMAT(ufloat32_, unsigned_, floating, four_bytes)
        DECLARE_FORMAT(float32_stride32_, signed_, floating, eight_bytes)

        DECLARE_FORMAT(ufixed2_, unsigned_, fixed, two_bits)
        DECLARE_FORMAT(ufixed_least2_, unsigned_, fixed, three_bits)
        DECLARE_FORMAT(ufixed4_, unsigned_, fixed, four_bits)
        DECLARE_FORMAT(ufixed5_, unsigned_, fixed, five_bits)
        DECLARE_FORMAT(ufixed10_, unsigned_, fixed, ten_bits)
        DECLARE_FORMAT(ufixed12_, unsigned_, fixed, twelve_bits)
        DECLARE_FORMAT(ufixed14_, unsigned_, fixed, fourteen_bits)
        DECLARE_FORMAT(ufixed24_, unsigned_, fixed, twentyfour_bits)
        DECLARE_FORMAT(uint1_, unsigned_, integral, one_bit)
        DECLARE_FORMAT(uint2_, unsigned_, integral, two_bits)
        DECLARE_FORMAT(uint4_, unsigned_, integral, four_bits)
        DECLARE_FORMAT(float_least10_, signed_, floating, eleven_bits)

#undef DECLARE_FORMAT

      } // namespace numeric
    } // namespace format

    namespace fn = ::gtulu::internal::format::numeric;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_NUMERIC_HPP_ */

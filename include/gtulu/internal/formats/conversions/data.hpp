/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_CONVERSION_DATA_HPP_
#define GTULU_INTERNAL_FORMAT_CONVERSION_DATA_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/formats/common.hpp"

#include "gtulu/internal/formats/data.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace data {

        template< typename type_t >
        struct to_typename;

#define DECLARE_CONVERT(data_m, typename_m) \
    template< > struct to_typename< value_type::data_m > { typedef typename_m type; };

        DECLARE_CONVERT(unsigned_byte, ::boost::uint8_t)
        DECLARE_CONVERT(byte_, ::boost::int8_t)
        DECLARE_CONVERT(unsigned_short, ::boost::uint16_t)
        DECLARE_CONVERT(short_, ::boost::int16_t)
        DECLARE_CONVERT(unsigned_int, ::boost::uint32_t)
        DECLARE_CONVERT(int_, ::boost::int32_t)
        DECLARE_CONVERT(half_float, void)
        DECLARE_CONVERT(float_, float)
        DECLARE_CONVERT(float_unsigned_int, void)
        DECLARE_CONVERT(double_, double)

#undef DECLARE_CONVERT
      } // namespace data
    } // namespace formats

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONVERSION_DATA_HPP_ */

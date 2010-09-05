/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_CONVERSION_ATTRIBUTE_HPP_
#define GTULU_INTERNAL_FORMAT_CONVERSION_ATTRIBUTE_HPP_

#include "gtulu/internal/formats/attribute.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace attribute {

        template< typename type_t >
        struct to_typename;

#define DECLARE_CONVERT(attribute_m, typename_m) \
    template< > struct to_typename< type::attribute_m > { typedef typename_m type; };

        DECLARE_CONVERT(floating, float)
        DECLARE_CONVERT(integer, ::boost::int32_t)
        DECLARE_CONVERT(unsigned_integer, ::boost::uint32_t)

#undef DECLARE_CONVERT
      } // namespace attribute
    } // namespace formats

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONVERSION_ATTRIBUTE_HPP_ */

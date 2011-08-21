/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
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

        template< typename DataType >
        struct to_typename;

#define DECLARE_CONVERT(attribute_m, typename_m) \
    template< > struct to_typename< type::attribute_m > { typedef typename_m type; };

        DECLARE_CONVERT(floating, float)
        DECLARE_CONVERT(integer, ::std::int32_t)
        DECLARE_CONVERT(unsigned_integer, ::std::uint32_t)

#undef DECLARE_CONVERT

      } // namespace attribute
    } // namespace formats

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONVERSION_ATTRIBUTE_HPP_ */

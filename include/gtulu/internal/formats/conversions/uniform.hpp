/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 * @copyright 2008-2011. All rights reserved.
 */

#ifndef GTULU_INTERNAL_FORMAT_CONVERSION_UNIFORM_HPP_
#define GTULU_INTERNAL_FORMAT_CONVERSION_UNIFORM_HPP_

#include "gtulu/internal/formats/uniform.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace uniform {

        template< typename type_t >
        struct to_typename;

#define DECLARE_CONVERT(uniform_m, typename_m) \
    template< > struct to_typename< type::uniform_m > { typedef typename_m type; };

        DECLARE_CONVERT(floating, float)
        DECLARE_CONVERT(integer, ::std::int32_t)
        DECLARE_CONVERT(unsigned_integer, ::std::uint32_t)
        DECLARE_CONVERT(boolean, ::std::int32_t)

#undef DECLARE_CONVERT

      } // namespace uniform
    } // namespace formats

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONVERSION_UNIFORM_HPP_ */

/**
 * @file
 * @date 14 août 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_CONVERTION_GROUP_HPP_
#define GTULU_INTERNAL_FORMAT_CONVERTION_GROUP_HPP_

#include "gtulu/internal/formats/data.hpp"
#include "gtulu/internal/formats/internal.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace group {

        template< typename base_t >
        struct to_internal_base;

#define DECLARE_CONVERT(group_m, internal_m) \
    template< > struct to_internal_base< base::group_m > { typedef fib::internal_m type; };

        DECLARE_CONVERT(depth, depth)
        DECLARE_CONVERT(depth_stencil, depth_stencil)
        DECLARE_CONVERT(stencil, stencil)
        DECLARE_CONVERT(r, r)
        DECLARE_CONVERT(g, rg)
        DECLARE_CONVERT(b, rgb)
        DECLARE_CONVERT(rg, rg)
        DECLARE_CONVERT(rgb, rgb)
        DECLARE_CONVERT(rgba, rgba)

#undef DECLARE_CONVERT
      } // namespace group
    } // namespace formats

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONVERTION_GROUP_HPP_ */

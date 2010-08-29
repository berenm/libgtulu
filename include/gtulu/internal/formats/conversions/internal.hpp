/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_CONVERSION_INTERNAL_HPP_
#define GTULU_INTERNAL_FORMAT_CONVERSION_INTERNAL_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/formats/common.hpp"

#include "gtulu/internal/formats/internal.hpp"
#include "gtulu/internal/formats/data.hpp"
#include "gtulu/internal/formats/group.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace internal {

        template< typename base_t >
        struct to_data_packing;

#define DECLARE_CONVERT(internal_m, data_m) \
    template< > struct to_data_packing< base::internal_m > { typedef fdp::data_m type; };

        DECLARE_CONVERT(stencil, depth_stencil)
        DECLARE_CONVERT(depth, depth_stencil)
        DECLARE_CONVERT(depth_stencil, depth_stencil)
        DECLARE_CONVERT(r, none)
        DECLARE_CONVERT(rgb, rgb)
        DECLARE_CONVERT(rgba, rgba)

#undef DECLARE_CONVERT

        template< typename type_t >
        struct to_group_type;
        template< typename type_t >
        struct to_data_type;

#define DECLARE_CONVERT(internal_m, common_m) \
    template< > struct to_group_type< type::internal_m > { typedef fgt::common_m type; }; \
    template< > struct to_data_type< type::internal_m > { typedef fdt::common_m type; };

        DECLARE_CONVERT(floating, floating)
        DECLARE_CONVERT(fixed, floating)
        DECLARE_CONVERT(unsigned_fixed, floating)
        DECLARE_CONVERT(integer, integer)
        DECLARE_CONVERT(unsigned_integer, integer)

#undef DECLARE_CONVERT

      } // namespace internal
    } // namespace formats

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONVERSION_INTERNAL_HPP_ */

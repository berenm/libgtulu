/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_CONSTRAINT_DATA_HPP_
#define GTULU_INTERNAL_FORMAT_CONSTRAINT_DATA_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/formats/common.hpp"

#include "gtulu/internal/formats/data.hpp"
#include "gtulu/internal/formats/group.hpp"
#include "gtulu/internal/formats/internal.hpp"

namespace gtulu {
  namespace internal {
    namespace bm = ::boost::mpl;

    namespace formats {
      namespace data {

        template< typename data_format_t, typename group_format_t >
        struct group_type_check {
            typedef bm::or_< fdt::is_floating< data_format_t >, fdt::is_integer< data_format_t > >
                is_floating_convertible;
            typedef fdt::is_integer< data_format_t > is_integer_convertible;

            typedef bm::and_< is_floating_convertible, fgt::is_floating< group_format_t > > floating_check;
            typedef bm::and_< is_integer_convertible, fgt::is_integer< group_format_t > > integer_check;

            typedef bm::or_< floating_check, integer_check > type;
            static_assert(type::value, "data_format_t is not compatible with group_format_t, floating group requires integer or floating data, integer group requires integer data.");
        };

        template< typename data_format_t, typename internal_format_t >
        struct data_packing_check {
            typedef fdp::is_none< data_format_t > not_packed;

            typedef bm::and_< fdp::is_rgb< data_format_t >, fib::is_rgb< internal_format_t > > rgb_packed_check;
            typedef bm::and_< fdp::is_rgba< data_format_t >, fib::is_rgba< internal_format_t > > rgba_packed_check;
            typedef bm::and_< fdp::is_depth_stencil< data_format_t >, fib::is_depth_stencil< internal_format_t > >
                depth_stencil_packed_check;

            typedef bm::or_< not_packed, rgb_packed_check, rgba_packed_check, depth_stencil_packed_check > type;
            static_assert(type::value, "data_format_t is not compatible with internal_format_t, rgb, rgba, depth_stencil packed data can only be used with, respectively, rgb, rgba, depth_stencil internal formats.");
        };

        template< typename data_format_t, typename group_format_t, typename internal_format_t >
        struct are_group_internal_compatible {
            typedef typename group_type_check< data_format_t, group_format_t >::type group_type_c;
            typedef typename data_packing_check< data_format_t, internal_format_t >::type data_packing_c;

            typedef bm::and_< group_type_c, data_packing_c > type;
        };
      } // namespace data
    } // namespace formats

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONSTRAINT_DATA_HPP_ */

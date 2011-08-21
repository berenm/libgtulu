/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_CONSTRAINT_DATA_HPP_
#define GTULU_INTERNAL_FORMAT_CONSTRAINT_DATA_HPP_

#include "gtulu/internal/formats/data.hpp"
#include "gtulu/internal/formats/group.hpp"
#include "gtulu/internal/formats/internal.hpp"

namespace gtulu {
  namespace internal {
    namespace bm = ::boost::mpl;

    namespace formats {
      namespace data {

        template< typename DataFormat, typename GroupFormat >
        struct group_type_check {
            typedef bm::or_< fdt::is_floating< DataFormat >, fdt::is_integer< DataFormat > > is_floating_convertible;
            typedef fdt::is_integer< DataFormat > is_integer_convertible;

            typedef bm::and_< is_floating_convertible, fgt::is_floating< GroupFormat > > floating_check;
            typedef bm::and_< is_integer_convertible, fgt::is_integer< GroupFormat > > integer_check;

            typedef bm::or_< floating_check, integer_check > type;
            static_assert(type::value, "DataFormat is not compatible with GroupFormat, floating group requires integer or floating data, integer group requires integer data.");
        };

        template< typename DataFormat, typename InternalFormat >
        struct data_packing_check {
            typedef fdp::is_none< DataFormat > not_packed;

            typedef bm::and_< fdp::is_rgb< DataFormat >, fib::is_rgb< InternalFormat > > rgb_packed_check;
            typedef bm::and_< fdp::is_rgba< DataFormat >, fib::is_rgba< InternalFormat > > rgba_packed_check;
            typedef bm::and_< fdp::is_depth_stencil< DataFormat >, fib::is_depth_stencil< InternalFormat > > depth_stencil_packed_check;

            typedef bm::or_< not_packed, rgb_packed_check, rgba_packed_check, depth_stencil_packed_check > type;
            static_assert(type::value, "DataFormat is not compatible with InternalFormat, rgb, rgba, depth_stencil packed data can only be used with, respectively, rgb, rgba, depth_stencil internal formats.");
        };

        template< typename DataFormat, typename GroupFormat, typename InternalFormat >
        struct are_group_internal_compatible {
            typedef typename group_type_check< DataFormat, GroupFormat >::type group_type_c;
            typedef typename data_packing_check< DataFormat, InternalFormat >::type data_packing_c;

            typedef bm::and_< group_type_c, data_packing_c > type;
        };
      } // namespace data
    } // namespace formats

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONSTRAINT_DATA_HPP_ */

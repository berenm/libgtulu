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

#include <boost/mpl/or.hpp>

namespace gtulu {
  namespace internal {
    namespace bm = ::boost::mpl;

    namespace formats {
      namespace data {

        template< typename DataFormat, typename GroupFormat >
        struct integral_check {
            typedef bm::or_< fc::integral::is_floating< DataFormat >, fc::integral::is_integral< DataFormat > > is_data_floating_convertible;
            typedef fc::integral::is_integral< DataFormat > is_data_integral_convertible;

            typedef fc::integral::is_floating< GroupFormat > is_group_floating;
            typedef fc::integral::is_integral< GroupFormat > is_group_integral;

            typedef bm::and_< is_group_floating, is_data_floating_convertible > floating_check;
            typedef bm::and_< is_group_integral, is_data_integral_convertible > integral_check;

            typedef bm::or_< floating_check, integral_check > type;
            static_assert(type::value, "DataFormat is not compatible with GroupFormat, floating GroupFormat requires integral or floating DataFormat, integral GroupFormat requires integral DataFormat.");
        };

        template< typename DataFormat, typename InternalFormat >
        struct packing_check {
            typedef fc::packing::is_one< DataFormat > simple_packing_check;

            typedef bm::and_< fc::packing::is_three_in_one< DataFormat >,
                fc::component::is_red_green_blue< InternalFormat > > rgb_packing_check;
            typedef bm::and_< fc::packing::is_four_in_one< DataFormat >,
                fc::component::is_red_green_blue_alpha< InternalFormat > > rgba_packing_check;
            typedef bm::and_< fc::packing::is_two_in_one< DataFormat >,
                fc::component::is_depth_stencil< InternalFormat > > depth_stencil_packing_check;

            typedef bm::or_< simple_packing_check, rgb_packing_check, rgba_packing_check, depth_stencil_packing_check > type;
            static_assert(type::value, "DataFormat packing is not compatible with InternalFormat component, two_in_one, three_in_one and four_in_one packing DataFormat can only be used with, respectively, depth_stencil, rgb and rgba component InternalFormat.");
        };

        template< typename DataFormat, typename GroupFormat, typename InternalFormat >
        struct are_group_internal_compatible {
            typedef typename integral_check< DataFormat, GroupFormat >::type integral_c;
            typedef typename packing_check< DataFormat, InternalFormat >::type packing_c;

            typedef bm::and_< integral_c, packing_c > type;
        };
      } // namespace data
    } // namespace formats

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONSTRAINT_DATA_HPP_ */

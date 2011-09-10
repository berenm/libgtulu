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
            typedef bm::and_< fn::integral::is_integral< fc::get_numeric< GroupFormat >::type >,
                bm::not_< fn::integral::is_integral< typename fc::get_numeric< DataFormat >::type > > > group_is_integral_but_data_is_not;
            typedef bm::not_< group_is_integral_but_data_is_not > type;

            static_assert(type::value, "GroupFormat is not compatible with DataFormat");
            static_assert(type::value, "");
            static_assert(type::value, "  [3.7.2 Transfer of Pixel Rectangles]");
            static_assert(type::value, "  [3.9.3 Texture Image Specification]");
            static_assert(group_is_integral_but_data_is_not::value, "  - GroupFormat is integral but DataFormat is not.");
        };

        template< typename DataFormat, typename GroupFormat >
        struct component_check {
            typedef bm::and_< fc::component::is_depth_stencil< GroupFormat >,
                bm::not_< fc::packing::is_two_in_one< DataFormat > > > group_is_depth_stencil_but_data_is_not_two_packed;

            typedef bm::not_< group_is_depth_stencil_but_data_is_not_two_packed > type;

            static_assert(type::value, "GroupFormat is not compatible with DataFormat");
            static_assert(type::value, "");
            static_assert(type::value, "  [3.7.2 Transfer of Pixel Rectangles]");
            static_assert(type::value, "  [3.9.3 Texture Image Specification]");
            static_assert(group_is_depth_stencil_but_data_is_not_two_packed::value, "  - GroupFormat is depth_stencil but DataFormat is not two_in_one packed.");
        };

        template< typename DataFormat, typename InternalFormat >
        struct packing_check {
            typedef bm::and_< fc::packing::is_four_in_one< DataFormat >,
                bm::not_< fc::component::is_red_green_blue_alpha< InternalFormat > > > data_is_four_packed_but_internal_is_not_rgba;
            typedef bm::and_< fc::packing::is_three_in_one< DataFormat >,
                bm::not_< fc::component::is_red_green_blue< InternalFormat > > > data_is_three_packed_but_internal_is_not_rgb;
            typedef bm::and_< fc::packing::is_two_in_one< DataFormat >,
                bm::not_< fc::component::is_depth_stencil< InternalFormat > > > data_is_two_packed_but_internal_is_not_depth_stencil;

            typedef bm::and_< bm::not_< data_is_four_packed_but_internal_is_not_rgba >,
                bm::not_< data_is_three_packed_but_internal_is_not_rgb >,
                bm::not_< data_is_two_packed_but_internal_is_not_depth_stencil > > type;

            static_assert(type::value, "DataFormat is not compatible with InternalFormat");
            static_assert(type::value, "");
            static_assert(type::value, "  [3.7.2 Transfer of Pixel Rectangles]");
            static_assert(type::value, "  [3.9.3 Texture Image Specification]");
            static_assert(data_is_four_packed_but_internal_is_not_rgba::value, "  - DataFormat is four_in_one packed but InternalFormat components aren't rgba.");
            static_assert(data_is_three_packed_but_internal_is_not_rgb::value, "  - DataFormat is three_in_one packed but InternalFormat components aren't rgb.");
            static_assert(data_is_two_packed_but_internal_is_not_depth_stencil::value, "  - DataFormat is two_in_one packed but InternalFormat components aren't depth_stencil.");
        };

        template< typename DataFormat, typename GroupFormat, typename InternalFormat >
        struct are_group_internal_compatible {
            typedef typename integral_check< DataFormat, GroupFormat >::type integral_c;
            typedef typename component_check< DataFormat, GroupFormat >::type component_c;
            typedef typename packing_check< DataFormat, InternalFormat >::type packing_c;

            typedef bm::and_< integral_c, component_c, packing_c > type;
        };
      } // namespace data
    } // namespace formats

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONSTRAINT_DATA_HPP_ */

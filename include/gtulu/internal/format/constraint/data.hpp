/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_CONSTRAINT_DATA_HPP_
#define GTULU_INTERNAL_FORMAT_CONSTRAINT_DATA_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/internal/format/constraint/numeric.hpp"
#include "gtulu/internal/format/constraint/common.hpp"

#include "gtulu/internal/format/data.hpp"
#include "gtulu/internal/format/group.hpp"
#include "gtulu/internal/format/internal.hpp"

namespace gtulu {
  namespace internal {

    namespace format {
      namespace data {

        template< typename DataFormat, typename GroupFormat >
        struct are_integral_compatible {
          typedef meta::imply_same< fnum::integral::is_integral, GroupFormat, DataFormat > type;

          static_assert(type::value, "GroupFormat is not compatible with DataFormat");
          static_assert(type::value, "");
          static_assert(type::value, "  [3.7.2 Transfer of Pixel Rectangles]");
          static_assert(type::value, "  [3.9.3 Texture Image Specification]");
          static_assert(type::value, "  - GroupFormat is integral but DataFormat is not.");
        };

        template< typename DataFormat, typename GroupFormat >
        struct are_component_compatible {
          typedef meta::imply< fcmn::component::is_depth_stencil< GroupFormat >,
                               fcmn::packing::is_two_in_one< DataFormat > > type;

          static_assert(type::value, "GroupFormat is not compatible with DataFormat");
          static_assert(type::value, "");
          static_assert(type::value, "  [3.7.2 Transfer of Pixel Rectangles]");
          static_assert(type::value, "  [3.9.3 Texture Image Specification]");
          static_assert(type::value, "  - GroupFormat is depth_stencil but DataFormat is not two_in_one packed.");
        };

        template< typename DataFormat, typename InternalFormat >
        struct are_packing_compatible {
          using pack4_check = meta::imply< fcmn::packing::is_four_in_one< DataFormat >,
                                           fcmn::component::is_red_green_blue_alpha< InternalFormat > >;
          using pack3_check = meta::imply< fcmn::packing::is_three_in_one< DataFormat >,
                                           fcmn::component::is_red_green_blue< InternalFormat > >;
          using pack2_check = meta::imply< fcmn::packing::is_two_in_one< DataFormat >,
                                           fcmn::component::is_depth_stencil< InternalFormat > >;
          typedef meta::and_< pack4_check, pack3_check, pack2_check > type;

          static_assert(type::value, "DataFormat is not compatible with InternalFormat");
          static_assert(type::value, "");
          static_assert(type::value, "  [3.7.2 Transfer of Pixel Rectangles]");
          static_assert(type::value, "  [3.9.3 Texture Image Specification]");
          static_assert(pack4_check::value, "  - DataFormat is four_in_one packed but InternalFormat components aren't rgba.");
          static_assert(pack3_check::value, "  - DataFormat is three_in_one packed but InternalFormat components aren't rgb.");
          static_assert(pack2_check::value, "  - DataFormat is two_in_one packed but InternalFormat components aren't depth_stencil.");
        };

        template< typename DataFormat, typename GroupFormat, typename InternalFormat >
        using are_group_internal_compatible =
                meta::and_< typename are_integral_compatible< DataFormat, GroupFormat >::type,
                            typename are_component_compatible< DataFormat, GroupFormat >::type,
                            typename are_packing_compatible< DataFormat, InternalFormat >::type >;

      } // namespace data
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONSTRAINT_DATA_HPP_ */

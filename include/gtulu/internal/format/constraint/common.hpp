/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_CONSTRAINT_COMMON_HPP_
#define GTULU_INTERNAL_FORMAT_CONSTRAINT_COMMON_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/internal/format/common.hpp"

#include <boost/mpl/not.hpp>
#include <boost/mpl/and.hpp>

namespace gtulu {
  namespace internal {

    namespace format {
      namespace common {

        namespace component {

          template< typename F > using has_no_red = meta::and_< is_not_red< F >,
                                                                is_not_red_green< F >,
                                                                is_not_red_green_blue< F >,
                                                                is_not_red_green_blue_alpha< F > >;
          template< typename F > using has_no_green = meta::and_< is_not_green< F >,
                                                                  is_not_red_green< F >,
                                                                  is_not_red_green_blue< F >,
                                                                  is_not_red_green_blue_alpha< F > >;
          template< typename F > using has_no_blue = meta::and_< is_not_blue< F >,
                                                                 is_not_red_green_blue< F >,
                                                                 is_not_red_green_blue_alpha< F > >;

          template< typename F > using has_no_alpha   = is_not_red_green_blue_alpha< F >;
          template< typename F > using has_no_depth   = meta::and_< is_not_depth< F >, is_not_depth_stencil< F > >;
          template< typename F > using has_no_stencil = meta::and_< is_not_stencil< F >, is_not_depth_stencil< F > >;

          template< typename F > using has_red     = meta::not_< has_no_red< F > >;
          template< typename F > using has_green   = meta::not_< has_no_green< F > >;
          template< typename F > using has_blue    = meta::not_< has_no_blue< F > >;
          template< typename F > using has_alpha   = meta::not_< has_no_alpha< F > >;
          template< typename F > using has_depth   = meta::not_< has_no_depth< F > >;
          template< typename F > using has_stencil = meta::not_< has_no_stencil< F > >;

          template< typename F > using has_depth_or_stencil = meta::or_< fcmn::component::has_depth< F >,
                                                                         fcmn::component::has_stencil< F > >;
          template< typename F > using has_no_depth_or_stencil = meta::not_< has_depth_or_stencil< F > >;

        } // namespace component

        template< typename F > using is_depth_stencil_capable = meta::and_< fcmn::dimension::is_not_buffer< F >,
                                                                            fcmn::dimension::is_not_threed< F >,
                                                                            fcmn::sample::is_simple< F > >;
        template< typename F > using is_not_depth_stencil_capable = meta::not_< is_depth_stencil_capable< F > >;

      } // namespace common
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONSTRAINT_COMMON_HPP_ */

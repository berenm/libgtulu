/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_FORMAT_CONSTRAINT_COMMON_HPP_
#define GTULU_INTERNAL_FORMAT_CONSTRAINT_COMMON_HPP_

#include "gtulu/internal/format/common.hpp"

#include <boost/mpl/not.hpp>
#include <boost/mpl/or.hpp>
#include <boost/mpl/and.hpp>

namespace gtulu {
  namespace internal {
    namespace bm = ::boost::mpl;

    namespace format {
      namespace common {

        namespace component {

          template< typename Format >
          struct has_no_red: bm::and_< is_not_red< Format >, is_not_red_green< Format >,
              is_not_red_green_blue< Format >, is_not_red_green_blue_alpha< Format > > {
          };
          template< typename Format >
          struct has_red: bm::not_< has_no_red< Format > > {
          };
          template< typename Format >
          struct has_no_green: bm::and_< is_not_green< Format >, is_not_red_green< Format >,
              is_not_red_green_blue< Format >, is_not_red_green_blue_alpha< Format > > {
          };
          template< typename Format >
          struct has_green: bm::not_< has_no_green< Format > > {
          };
          template< typename Format >
          struct has_no_blue: bm::and_< is_not_blue< Format >, is_not_red_green_blue< Format >,
              is_not_red_green_blue_alpha< Format > > {
          };
          template< typename Format >
          struct has_blue: bm::not_< has_no_blue< Format > > {
          };
          template< typename Format >
          struct has_no_alpha: is_not_red_green_blue_alpha< Format > {
          };
          template< typename Format >
          struct has_alpha: bm::not_< has_no_alpha< Format > > {
          };
          template< typename Format >
          struct has_no_depth: bm::and_< is_not_depth< Format >, is_not_depth_stencil< Format > > {
          };
          template< typename Format >
          struct has_depth: bm::not_< has_no_depth< Format > > {
          };
          template< typename Format >
          struct has_no_stencil: bm::and_< is_not_stencil< Format >, is_not_depth_stencil< Format > > {
          };
          template< typename Format >
          struct has_stencil: bm::not_< has_no_stencil< Format > > {
          };

        } // namespace component

      } // namespace common
    } // namespace format

    namespace fc = ::gtulu::internal::format::common;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONSTRAINT_COMMON_HPP_ */

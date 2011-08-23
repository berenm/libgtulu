/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_COMMON_HPP_
#define GTULU_INTERNAL_FORMAT_COMMON_HPP_

#include "gtulu/internal/constants_fwd.hpp"

#include "meta/type_traits.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace common {
        META_ASPECT_DECLARE(order, Order, struct, (normal) (reverse))
        META_ASPECT_DECLARE(type,
                            Type,
                            struct,
                            (floating) (fixed) (unsigned_fixed) (integer) (unsigned_integer) (boolean))
        META_ASPECT_DECLARE(dimension,
                            Dimension,
                            struct,
                            (one) (two) (two_by_two) (two_by_three) (two_by_four) (three) (three_by_two) (three_by_three) (three_by_four) (four) (four_by_two) (four_by_three) (four_by_four))

        META_ASPECT_DECLARE(base,
                            Base,
                            using cst::,
                            (gl_depth) (gl_stencil) (gl_depth_stencil) (gl_red) (gl_rg) (gl_rgb) (gl_rgba))
        namespace base {
          typedef cst::gl_red gl_r;
        } // namespace base

      } // namespace common
    } // namespace formats

    namespace fc = ::gtulu::internal::formats::common;
    namespace fcb = ::gtulu::internal::formats::common::base;
    namespace fcd = ::gtulu::internal::formats::common::dimension;
    namespace fco = ::gtulu::internal::formats::common::order;
    namespace fct = ::gtulu::internal::formats::common::type;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_COMMON_HPP_ */

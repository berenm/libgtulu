/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 * @copyright 2008-2011. All rights reserved.
 */

#ifndef GTULU_INTERNAL_FORMAT_COMMON_HPP_
#define GTULU_INTERNAL_FORMAT_COMMON_HPP_

#include "gtulu/internal/constants_fwd.hpp"

#include "meta/type_traits.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace common {
        DECLARE_TRAIT_ASPECT(order, struct,
            (normal)
            (reverse)
        )
        DECLARE_TRAIT_ASPECT(type, struct,
            (floating)
            (fixed)
            (unsigned_fixed)
            (integer)
            (unsigned_integer)
            (boolean)
        )
        DECLARE_TRAIT_ASPECT(dimension, struct,
            (one)
            (two)
            (two_by_two)
            (two_by_three)
            (two_by_four)
            (three)
            (three_by_two)
            (three_by_three)
            (three_by_four)
            (four)
            (four_by_two)
            (four_by_three)
            (four_by_four)
        )

        namespace base {
          typedef cst::gl_depth gl_depth;
          typedef cst::gl_stencil gl_stencil;
          typedef cst::gl_depth_stencil gl_depth_stencil;
          typedef cst::gl_red gl_r;
          typedef cst::gl_rg gl_rg;
          typedef cst::gl_rgb gl_rgb;
          typedef cst::gl_rgba gl_rgba;
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

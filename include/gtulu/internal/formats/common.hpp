/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_COMMON_HPP_
#define GTULU_INTERNAL_FORMAT_COMMON_HPP_

#include <boost/integer.hpp>
#include "gtulu/opengl.hpp"

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

#define COMMON_BASES  ((depth, GL_DEPTH)) \
                      ((stencil, GL_STENCIL)) \
                      ((depth_stencil, GL_DEPTH_STENCIL)) \
                      ((r, GL_RED)) \
                      ((rg, GL_RG)) \
                      ((rgb, GL_RGB)) \
                      ((rgba, GL_RGBA)) \

        namespace base {
#define CONSTANT_LIST COMMON_BASES
#include "meta/declare_constants.hpp"
#undef CONSTANT_LIST
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

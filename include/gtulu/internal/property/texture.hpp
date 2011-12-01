/**
 * @file
 *
 * Distributed under the Boost Software License)(Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_PROPERTY_TEXTURE_HPP_
#define GTULU_INTERNAL_PROPERTY_TEXTURE_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/internal/constants_fwd.hpp"

#include "meta/type_traits.hpp"

namespace gtulu {
  namespace internal {

    namespace property {
      namespace texture {

        META_ASPECT_DECLARE(property,
                            Property,
                            using cst::,
                            (gl_texture_base_level)(gl_texture_border_color)(gl_texture_compare_func)(gl_texture_compare_mode)(gl_texture_lod_bias)(gl_texture_min_filter)(gl_texture_mag_filter)(gl_texture_min_lod)(gl_texture_max_lod)(gl_texture_max_level)(gl_texture_swizzle_r)(gl_texture_swizzle_g)(gl_texture_swizzle_b)(gl_texture_swizzle_a)(gl_texture_swizzle_rgba)(gl_texture_wrap_s)(gl_texture_wrap_t)(gl_texture_wrap_r))

      } // namespace texture

    } // namespace property

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_PROPERTY_TEXTURE_HPP_ */

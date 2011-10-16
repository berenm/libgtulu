/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_OBJECT_TEXTURE_LOADABLE_HPP_
#define GTULU_INTERNAL_OBJECT_TEXTURE_LOADABLE_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/object/texture/base.hpp"
#include "gtulu/internal/format/texture.hpp"

namespace gtulu {
  namespace internal {

    namespace object {

      template< typename TargetFormat >
      struct texture_loadable_helper;

      template< >
      struct texture_loadable_helper< ftgt::gl_texture_rectangle > {
          template< typename TextureFormat >
          struct loader {

          };
      };

    } // namespace object

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECT_TEXTURE_LOADABLE_HPP_ */

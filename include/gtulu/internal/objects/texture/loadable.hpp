/**
 * @file
 * @date 30 juil. 2010
 * @todo comment
 * @copyright 2008-2011. All rights reserved.
 */

#ifndef GTULU_INTERNAL_OBJECTS_TEXTURE_LOADABLE_HPP_
#define GTULU_INTERNAL_OBJECTS_TEXTURE_LOADABLE_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/objects/texture/base.hpp"
#include "gtulu/internal/formats/texture.hpp"

namespace gtulu {
  namespace internal {

    namespace objects {

      template< typename target_format_t >
      struct texture_loadable_helper;

      template< >
      struct texture_loadable_helper< fta::gl_texture_rectangle > {
          template< typename texture_format_t >
          struct loader {

          };
      };

    } // namespace objects

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECTS_TEXTURE_LOADABLE_HPP_ */

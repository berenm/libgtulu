/**
 * @file
 * @date 30 juil. 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_OBJECTS_TEXTURE_BASE_HPP_
#define GTULU_INTERNAL_OBJECTS_TEXTURE_BASE_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/objects/object.hpp"

namespace gtulu {
  namespace internal {

    namespace objects {
      struct texture_base: public plug< texture_base > {
      };
    } // namespace objects

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECTS_TEXTURE_BASE_HPP_ */

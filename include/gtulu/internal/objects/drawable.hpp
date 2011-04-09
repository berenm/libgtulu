/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 26 juil. 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_OBJECTS_DRAWABLE_HPP_
#define GTULU_INTERNAL_OBJECTS_DRAWABLE_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/objects/object.hpp"

namespace gtulu {
  namespace internal {

    namespace objects {

      struct drawable: public virtual object_base {
      };

    } // namespace objects

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECTS_DRAWABLE_HPP_ */

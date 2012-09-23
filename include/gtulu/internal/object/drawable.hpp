/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_OBJECT_DRAWABLE_HPP_
#define GTULU_INTERNAL_OBJECT_DRAWABLE_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/object/object.hpp"

namespace gtulu {
  namespace internal {

    namespace object {

      struct drawable : public virtual object_base {};

    } // namespace object

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECT_DRAWABLE_HPP_ */

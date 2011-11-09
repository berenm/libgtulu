/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_OBJECT_BUFFER_USAGE_HPP_
#define GTULU_INTERNAL_OBJECT_BUFFER_USAGE_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"

#include "gtulu/internal/constants.hpp"

#include "meta/type_traits.hpp"

namespace gtulu {
  namespace internal {

    namespace buffer {

      META_ASPECT_DECLARE(usage,
                          Usage,
                          using cst::,
                          (gl_stream_draw)(gl_stream_read)(gl_stream_copy)(gl_static_draw)(gl_static_read)(gl_static_copy)(gl_dynamic_draw)(gl_dynamic_read)(gl_dynamic_copy))

    } // namespace buffer

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECT_BUFFER_USAGE_HPP_ */

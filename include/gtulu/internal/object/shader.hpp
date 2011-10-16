/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_SHADER_HPP_
#define GTULU_INTERNAL_SHADER_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/format/shader.hpp"
#include "gtulu/internal/format/shader/dynamic.hpp"

#include "gtulu/internal/object/object.hpp"

namespace gtulu {
  namespace internal {

    namespace object {

      template< typename ShaderFormat >
      struct shader: virtual public shader_base, public object< shader_base >, public ShaderFormat {
          virtual ~shader() {
          }
      };

      typedef shader< fshd::dynamic_shader_format > dynamic_shader_t;

    } // namespace object

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_SHADER_HPP_ */

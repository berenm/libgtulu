/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_SHADER_HPP_
#define GTULU_INTERNAL_SHADER_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/formats/shader.hpp"
#include "gtulu/internal/formats/shader/dynamic.hpp"

#include "gtulu/internal/objects/object.hpp"

namespace gtulu {
  namespace internal {

    namespace objects {

      template< typename ShaderFormat >
      struct shader: virtual public shader_base, public object< shader_base >, public ShaderFormat {
          virtual ~shader() {
          }
      };

      typedef shader< fs::dynamic_shader_format > dynamic_shader_t;

    } // namespace objects

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_SHADER_HPP_ */

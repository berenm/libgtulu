/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 * @copyright 2008-2011. All rights reserved.
 */

#ifndef GTULU_INTERNAL_PROGRAM_HPP_
#define GTULU_INTERNAL_PROGRAM_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/formats/program.hpp"
#include "gtulu/internal/formats/program/dynamic.hpp"

#include "gtulu/internal/objects/object.hpp"
#include "gtulu/internal/drawing.hpp"

namespace gtulu {
  namespace internal {

    namespace objects {
      template< typename program_format_t >
      struct program: virtual public program_base, public object< program_base > , public program_format_t {
      };

      typedef program< fp::dynamic_program_format > dynamic_program_t;

    } // namespace objects

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_PROGRAM_HPP_ */

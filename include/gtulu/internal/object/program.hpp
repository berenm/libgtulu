/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_PROGRAM_HPP_
#define GTULU_INTERNAL_PROGRAM_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/format/program.hpp"
#include "gtulu/internal/format/program/dynamic.hpp"

#include "gtulu/internal/object/object.hpp"
#include "gtulu/internal/drawing.hpp"

namespace gtulu {
  namespace internal {

    namespace object {
      template< typename ProgramFormat >
      struct program: virtual public program_base, public object< program_base >, public ProgramFormat {
          virtual ~program() {
          }
      };

      typedef program< fp::dynamic_program_format > dynamic_program_t;

    } // namespace object

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_PROGRAM_HPP_ */

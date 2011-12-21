/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_PROGRAM_HPP_
#define GTULU_INTERNAL_PROGRAM_HPP_

#include "gtulu/namespaces.hpp"
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
      struct program: virtual public program_base, virtual public object< program_base >, public ProgramFormat {
          program() :
              object< program_base >() {
          }

          virtual ~program() {
          }
      };

      typedef program< fprg::dynamic_program_format > dynamic_program_t;

    } // namespace object

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_PROGRAM_HPP_ */

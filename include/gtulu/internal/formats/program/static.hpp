/**
 * @file
 * @date 27 juil. 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMATS_PROGRAM_STATIC_HPP_
#define GTULU_INTERNAL_FORMATS_PROGRAM_STATIC_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/objects/program/base.hpp"

namespace gtulu {
  namespace internal {

    namespace gio = ::gtulu::internal::objects;

    namespace formats {
      namespace program {

        class static_program_format: virtual public gio::program_base {
        };

      } // namespace program
    } // namespace formats

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMATS_PROGRAM_STATIC_HPP_ */

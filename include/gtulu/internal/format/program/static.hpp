/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_PROGRAM_STATIC_HPP_
#define GTULU_INTERNAL_FORMAT_PROGRAM_STATIC_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/internal/object/program/base.hpp"

namespace gtulu {
  namespace internal {

    namespace format {
      namespace program {

        struct static_program_format: virtual public obj::program_base {
            virtual ~static_program_format() {
            }
        };

      } // namespace program
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_PROGRAM_STATIC_HPP_ */

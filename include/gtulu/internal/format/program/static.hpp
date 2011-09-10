/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 27 juil. 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_PROGRAM_STATIC_HPP_
#define GTULU_INTERNAL_FORMAT_PROGRAM_STATIC_HPP_

#include "gtulu/internal/object/program/base.hpp"

namespace gtulu {
  namespace internal {

    namespace gio = ::gtulu::internal::object;

    namespace format {
      namespace program {

        class static_program_format: virtual public gio::program_base {
            virtual ~static_program_format() {
            }
        };

      } // namespace program
    } // namespace format

    namespace gifp = ::gtulu::internal::format::program;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_PROGRAM_STATIC_HPP_ */

/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 3 sept. 2010
 * @todo comment
 */
#include "gtulu_opengl_pch.hpp"

#include "gtulu/internal/constants.hpp"

#include <string>

namespace gtulu {
  namespace internal {

    namespace constant {
      ::std::ostream& operator<<(::std::ostream& out, gl_constant_base const& constant) {
        return out << ::std::string(constant);
      }
    } // namespace constant

  } // namespace internal
} // namespace gtulu

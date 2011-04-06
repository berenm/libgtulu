/**
 * @file
 * @date 3 sept. 2010
 * @todo comment
 * @copyright 2008-2011. All rights reserved.
 */

#include "gtulu/internal/constants.hpp"

#include <string>

namespace gtulu {
  namespace internal {

    namespace constant {
      ::std::ostream& operator<<(::std::ostream& out, const gl_constant_base& constant) {
        return out << ::std::string(constant);
      }
    } // namespace constant

  } // namespace internal
} // namespace gtulu

/**
 * @file
 * @date 21 nov. 2009
 * @todo comment
 */

#include "gtulu/internal/error.hpp"

namespace gtulu {
  namespace internal {

    namespace error {
      namespace code {
#define CONSTANT_LIST ERROR_CODES
#include "meta/define_constants.hpp"
#undef CONSTANT_LIST
      } // namespace code
    } // namespace error

  } // namespace internal
} // namespace gtulu

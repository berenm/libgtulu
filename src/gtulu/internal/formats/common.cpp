/**
 * @file
 * @date 21 nov. 2009
 * @todo comment
 */

#include "gtulu/internal/formats/common.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace common {
        namespace base {
#define CONSTANT_LIST COMMON_BASES
#include "meta/define_constants.hpp"
#undef CONSTANT_LIST
        } // namespace base
      } // namespace common
    } // namespace formats

  } // namespace internal
} // namespace gtulu

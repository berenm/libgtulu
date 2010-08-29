/**
 * @file
 * @date 21 nov. 2009
 * @todo comment
 */

#include "gtulu/internal/formats/group.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace group {
        namespace format {
#define CONSTANT_LIST GROUP_FORMATS
#include "meta/define_constants.hpp"
#undef CONSTANT_LIST
        } // namespace format
      } // namespace group
    } // namespace formats

  } // namespace internal
} // namespace gtulu

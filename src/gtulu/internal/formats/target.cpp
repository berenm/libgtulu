/**
 * @file
 * @date 21 nov. 2009
 * @todo comment
 */

#include "gtulu/internal/formats/target.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace target {
        namespace format {
#define CONSTANT_LIST TARGET_FORMATS
#include "meta/define_constants.hpp"
#undef CONSTANT_LIST
        } // namespace format
      } // namespace target
    } // namespace formats

  } // namespace internal
} // namespace gtulu

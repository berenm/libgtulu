/**
 * @file
 * @date 21 nov. 2009
 * @todo comment
 */

#include "gtulu/internal/formats/internal.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace internal {
        namespace format {
#define CONSTANT_LIST INTERNAL_FORMATS
#include "meta/define_constants.hpp"
#undef CONSTANT_LIST
        } // namespace format
      } // namespace internal
    } // namespace formats

  } // namespace internal
} // namespace gtulu

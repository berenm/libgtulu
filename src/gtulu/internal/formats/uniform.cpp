/**
 * @file
 * @date 21 nov. 2009
 * @todo comment
 */

#include "gtulu/internal/formats/uniform.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace uniform {
        namespace format {
#define CONSTANT_LIST UNIFORM_FORMATS
#include "meta/define_constants.hpp"
#undef CONSTANT_LIST
        } // namespace format
      } // namespace uniform
    } // namespace formats

  } // namespace internal
} // namespace gtulu

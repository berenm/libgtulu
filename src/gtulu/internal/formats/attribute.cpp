/**
 * @file
 * @date 21 nov. 2009
 * @todo comment
 */

#include "gtulu/internal/formats/attribute.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace attribute {
        namespace format {
#define CONSTANT_LIST ATTRIBUTE_FORMATS
#include "meta/define_constants.hpp"
#undef CONSTANT_LIST
        } // namespace format
      } // namespace attribute
    } // namespace formats

  } // namespace internal
} // namespace gtulu

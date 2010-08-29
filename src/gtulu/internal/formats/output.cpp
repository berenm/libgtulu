/**
 * @file
 * @date 21 nov. 2009
 * @todo comment
 */

#include "gtulu/internal/formats/output.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace output {
        namespace format {
#define CONSTANT_LIST OUTPUT_FORMATS
#include "meta/define_constants.hpp"
#undef CONSTANT_LIST
        } // namespace format
      } // namespace output
    } // namespace formats

  } // namespace internal
} // namespace gtulu

/**
 * @file
 * @date 21 nov. 2009
 * @todo comment
 */

#include "gtulu/internal/formats/data.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace data {
        namespace format {
#define CONSTANT_LIST DATA_FORMATS
#include "meta/define_constants.hpp"
#undef CONSTANT_LIST
        } // namespace format
      } // namespace data
    } // namespace formats

  } // namespace internal
} // namespace gtulu

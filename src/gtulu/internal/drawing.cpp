/**
 * @file
 * @date 21 nov. 2009
 * @todo comment
 */

#include "gtulu/internal/drawing.hpp"

namespace gtulu {
  namespace internal {

    namespace drawing {
      namespace mode {
#define CONSTANT_LIST DRAWING_MODES
#include "meta/define_constants.hpp"
#undef CONSTANT_LIST
      } // namespace mode
    } // namespace drawing

  } // namespace internal
} // namespace gtulu

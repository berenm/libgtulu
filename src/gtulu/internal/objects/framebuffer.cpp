/**
 * @file
 * @date 21 nov. 2009
 * @todo comment
 */

#include "gtulu/internal/objects/framebuffer.hpp"

namespace gtulu {
  namespace internal {

    namespace framebuffer {
      namespace slots {
#define CONSTANT_LIST FRAMEBUFFER_SLOTS
#include "meta/define_constants.hpp"
#undef CONSTANT_LIST
      } // namespace slots
    } // namespace framebuffer

  } // namespace internal
} // namespace gtulu

/**
 * @file
 * @date 21 nov. 2009
 * @todo comment
 */

#include "gtulu/internal/objects/buffer.hpp"

namespace gtulu {
  namespace internal {

    namespace buffer {
      namespace slots {
#define CONSTANT_LIST BUFFER_SLOTS
#include "meta/define_constants.hpp"
#undef CONSTANT_LIST
      }

      namespace usages {
#define CONSTANT_LIST BUFFER_USAGES
#include "meta/define_constants.hpp"
#undef CONSTANT_LIST
      }
    }

    namespace objects {
    }

  }
}

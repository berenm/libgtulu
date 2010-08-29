/**
 * @file
 * @date 27 juil. 2010
 * @todo comment
 */

#include "gtulu/internal/formats/program.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace program {
        namespace attribute {
#define CONSTANT_LIST PROGRAM_ATTRIBUTES
#include "meta/define_constants.hpp"
#undef CONSTANT_LIST
        } // namespace attribute

      } // namespace program
    } // namespace formats

  } // namespace internal
} // namespace gtulu

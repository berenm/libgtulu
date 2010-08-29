/**
 * @file
 * @date 27 juil. 2010
 * @todo comment
 */

#include "gtulu/internal/formats/shader.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace shader {

        namespace attribute {
#define CONSTANT_LIST SHADER_ATTRIBUTES
#include "meta/define_constants.hpp"
#undef CONSTANT_LIST
        } // namespace attribute

        namespace type {
#define CONSTANT_LIST SHADER_TYPES
#include "meta/define_constants.hpp"
#undef CONSTANT_LIST
        } // namespace type

      } // namespace shader
    } // namespace formats

  } // namespace internal
} // namespace gtulu

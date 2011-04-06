/**
 * @file
 * @date 3 sept. 2010
 * @todo comment
 * @copyright 2008-2011. All rights reserved.
 */

#include "gtulu/internal/formats/output.hpp"

#include "gtulu/internal/constants.hpp"

#include <string>

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace output {

        namespace format {
          const cst::gl_constant_base get(::std::string type_name) {
            __info << "getting output format " << type_name;
            return cst::invalid_constant();
          }
        } // namespace format

      } // namespace output
    } // namespace formats

  } // namespace internal
} // namespace gtulu

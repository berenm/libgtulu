// #template#<format>_program_tpl
/**
 * @file
 */

#include "_program_tpl_program_format.hpp"

namespace gtulu {
  namespace internal {
    namespace formats {
      namespace program {

        // #template#<declare_shader_source>_program_tpl,_shader_tpl,_type_tpl,_source_tpl
        char const* _program_tpl_program_format::_shader_tpl__type_tpl_shader_format::source = _source_tpl;
        // #template#</declare_shader_source>
        ;

      } // namespace program
    } // namespace formats
  } // namespace internal
} // namespace gtulu

// #template#</format>

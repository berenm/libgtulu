/**
 * @file
 * @date 27 juil. 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_OBJECTS_SHADER_BASE_HPP_
#define GTULU_INTERNAL_OBJECTS_SHADER_BASE_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/objects/object.hpp"
#include "gtulu/internal/formats/shader.hpp"

namespace gtulu {
  namespace internal {

    namespace objects {
      class shader_base: public plug< shader_base > {
        public:
          virtual void compile();

          template< typename shader_attribute_t >
          inline ::boost::uint32_t get() const {
            ::boost::int32_t data;
            __gl_debug(glGetShaderiv, (handle_)(fsa::from_type< shader_attribute_t >())(&data));
            glGetShaderiv(handle_, fsa::from_type< shader_attribute_t >::value, &data);
            return data;
          }
          void set();

          void set_source(const char* code);

        protected:
          template< typename shader_type_t >
          void create_shader() {
            if (handle_ == 0) {
              __gl_debug(glCreateShader, (fst::from_type< shader_type_t >()));
              handle_ = glCreateShader(fst::from_type< shader_type_t >::value);
              __gl_check_error
            }
          }
      };
    } // namespace objects

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECTS_SHADER_BASE_HPP_ */

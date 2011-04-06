/**
 * @file
 * @date 27 juil. 2010
 * @todo comment
 * @copyright 2008-2011. All rights reserved.
 */

#ifndef GTULU_INTERNAL_OBJECTS_SHADER_BASE_HPP_
#define GTULU_INTERNAL_OBJECTS_SHADER_BASE_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/objects/object.hpp"
#include "gtulu/internal/formats/shader.hpp"

namespace gtulu {
  namespace internal {

    namespace objects {
      class shader_base: public plug< shader_base > {
        public:
          virtual void compile();

          template< typename shader_attribute_t >
          inline ::std::uint32_t get() const {
            ::std::int32_t data;
            fnc::gl_get_shader::call< shader_attribute_t >(handle_, &data);
            return data;
          }
          void set();

          void set_source(char const* code);

        protected:
          template< typename shader_type_t >
          void create_shader() {
            if (handle_ == 0) {
              handle_ = fnc::gl_create_shader::call< shader_type_t >();
            }
          }
      };
    } // namespace objects

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECTS_SHADER_BASE_HPP_ */

/**
 * @file
 * @date 27 juil. 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_OBJECTS_PROGRAM_BASE_HPP_
#define GTULU_INTERNAL_OBJECTS_PROGRAM_BASE_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/objects/object.hpp"
#include "gtulu/internal/formats/program.hpp"
#include "gtulu/internal/objects/shader/base.hpp"

namespace gtulu {
  namespace internal {

    namespace objects {
      class program_base: public plug< program_base > {
        public:
          void attach(const gio::shader_base& shader);
          void detach(const gio::shader_base& shader);

          virtual void link();
          virtual void validate();

          void enable() const;
          void disable() const;

          template< typename program_attribute_t >
          inline ::boost::uint32_t get() const {
            ::boost::int32_t data;
            __gl_debug(glGetProgramiv, (handle_)(fpa::from_type< program_attribute_t >())(&data));
            glGetProgramiv(handle_, fpa::from_type< program_attribute_t >::value, &data);
            return data;
          }

          void set();
          void loc();
      };
    } // namespace objects

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECTS_PROGRAM_BASE_HPP_ */

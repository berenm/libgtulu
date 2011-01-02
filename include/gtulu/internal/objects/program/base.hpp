/**
 * @file
 * @date 27 juil. 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_OBJECTS_PROGRAM_BASE_HPP_
#define GTULU_INTERNAL_OBJECTS_PROGRAM_BASE_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/objects/object.hpp"
#include "gtulu/internal/formats/program.hpp"
#include "gtulu/internal/objects/shader/base.hpp"

namespace gtulu {
  namespace internal {

    namespace objects {
      template< >
      template< typename target_type_t >
      void slot_binder< program_base >::bind(::std::uint32_t handle_) {
        static ::std::uint32_t bound_handle_ = 0;

        if (bound_handle_ != handle_) {
          fnc::gl_use_program::call(handle_);
          bound_handle_ = handle_;
        }
      }
    } // namespace objects

    namespace program {
      struct program_slot {
          static inline void bind(gio::plug< gio::program_base > const& program) {
            gio::slot_binder< gio::program_base >::bind(program);
          }
          static inline void unbind(gio::plug< gio::program_base > const& program) {
            gio::slot_binder< gio::program_base >::clear();
          }
      };
    } // namespace program

    namespace gip = ::gtulu::internal::program;

    namespace objects {

      class program_base: public plug< program_base > {
        public:
          void attach(gio::shader_base const& shader);
          void detach(gio::shader_base const& shader);

          virtual void link();
          virtual void validate();

          inline void bind() const {
            gip::program_slot::bind(*this);
          }

          inline void unbind() const {
            gip::program_slot::unbind(*this);
          }

          template< typename program_attribute_t >
          inline ::std::uint32_t get() const {
            ::std::int32_t data;
            fnc::gl_get_program::call< program_attribute_t >(handle_, &data);
            return data;
          }

          void set();
          void loc();
      };
    } // namespace objects

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECTS_PROGRAM_BASE_HPP_ */

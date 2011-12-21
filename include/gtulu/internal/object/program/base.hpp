/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_OBJECT_PROGRAM_BASE_HPP_
#define GTULU_INTERNAL_OBJECT_PROGRAM_BASE_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/object/object.hpp"
#include "gtulu/internal/format/program.hpp"
#include "gtulu/internal/object/shader/base.hpp"

namespace gtulu {
  namespace internal {

    namespace object {
      template< >
      template< typename TargetType >
      void slot_binder< program_base >::bind(std::uint32_t handle_) {
        static std::uint32_t bound_handle_ = 0;

        if (bound_handle_ != handle_) {
          fct::gl_use_program< >::call(handle_);
          bound_handle_ = handle_;
        }
      }
    } // namespace object

    namespace program {
      struct program_slot {
          static inline void bind(obj::plug< obj::program_base > const& program) {
            obj::slot_binder< obj::program_base >::bind(program);
          }
          static inline void unbind(obj::plug< obj::program_base > const& program) {
            obj::slot_binder< obj::program_base >::clear();
          }
          static inline void clear() {
            obj::slot_binder< obj::program_base >::clear();
          }
      };
    } // namespace program

    namespace object {

      struct program_base: public plug< program_base > {
          virtual ~program_base() {
          }

          void attach(obj::shader_base const& shader);
          void detach(obj::shader_base const& shader);

          virtual void link();
          virtual void validate();

          inline void bind() const {
            prg::program_slot::bind(*this);
          }

          inline void unbind() const {
            prg::program_slot::unbind(*this);
          }

          template< typename ProgramAttribute >
          inline std::uint32_t get() const {
            std::int32_t data;
            fct::gl_get_program< ProgramAttribute >::call(handle_, &data);
            return data;
          }

          void set();
          void loc();
      };
    } // namespace object

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECT_PROGRAM_BASE_HPP_ */

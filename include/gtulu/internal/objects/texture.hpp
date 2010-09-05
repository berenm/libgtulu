/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_OBJECTS_TEXTURE_HPP_
#define GTULU_INTERNAL_OBJECTS_TEXTURE_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/objects/object.hpp"
#include "gtulu/internal/objects/drawable.hpp"

#include "gtulu/internal/formats/constraints/target.hpp"
#include "gtulu/internal/formats/conversions/data.hpp"

#include "gtulu/internal/objects/texture/base.hpp"

#include <boost/shared_ptr.hpp>

namespace gtulu {
  namespace internal {

    namespace objects {
      template< >
      template< typename target_type_t >
      void slot_binder< texture_base >::bind(::boost::uint32_t handle_) {
        fnc::gl_bind_texture::call< typename target_type_t::info::format >(handle_);
      }
    } // namespace objects

    namespace texture {

      template< typename target_type_t >
      struct texture_slot: private ft::is_of_target_base< target_type_t, ftb::texture > {
          static inline void bind(const gio::plug< gio::texture_base >& buffer) {
            gio::slot_binder< gio::texture_base >::bind< target_type_t >(buffer);
          }
          static inline void unbind(const gio::plug< gio::texture_base >& buffer) {
            gio::slot_binder< gio::texture_base >::clear< target_type_t >();
          }
      };

    } // namespace texture

    namespace git = ::gtulu::internal::texture;

    namespace objects {

      template< typename texture_format_t >
      struct texture: public texture_base,
                      public object< texture_base > ,
                      public drawable,
                      private texture_format_t,
                      public texture_format_t::loader {
          inline void bind() const {
            git::texture_slot< typename texture_format_t::target >::bind(*this);
          }

          inline void unbind() const {
            git::texture_slot< typename texture_format_t::target >::unbind(*this);
          }

          typedef typename fd::to_typename< typename texture_format_t::data::info::value_type >::type data_type;

          inline void load(const data_type* data, ::std::size_t size, ::std::size_t width, ::std::size_t height,
                           ::std::size_t level) {
            bind();
            texture_format_t::loader::load(data, size, width, height, 0, level);
          }

          inline void load(const data_type* data, ::std::size_t width, ::std::size_t height) {
            bind();
            load(data, 0, width, height, 0);
            compute_mipmaps();
          }

          inline void compute_mipmaps() {
            bind();
            fnc::gl_generate_mipmap::call< typename texture_format_t::target::info::format >();
          }
      };

    } // namespace objects

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECTS_TEXTURE_HPP_ */

/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_OBJECT_TEXTURE_HPP_
#define GTULU_INTERNAL_OBJECT_TEXTURE_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/object/object.hpp"
#include "gtulu/internal/object/drawable.hpp"

#include "gtulu/internal/format/constraint/target.hpp"
#include "gtulu/internal/format/conversion/common.hpp"

#include "gtulu/internal/object/texture/base.hpp"
#include "gtulu/internal/object/texture/loader.hpp"

#include <boost/shared_ptr.hpp>

namespace gtulu {
  namespace internal {

    namespace object {
      template< >
      template< typename TargetType >
      void slot_binder< texture_base >::bind(std::uint32_t handle_) {
        fct::gl_bind_texture::call< typename TargetType::aspect::format >(handle_);
      }
    } // namespace object

    namespace texture {

      template< typename TargetType >
      struct texture_slot: private fcmn::target::is_texture< TargetType > {
          static inline void bind(obj::plug< obj::texture_base > const& buffer) {
            obj::slot_binder< obj::texture_base >::bind< TargetType >(buffer);
          }
          static inline void unbind(obj::plug< obj::texture_base > const& buffer) {
            obj::slot_binder< obj::texture_base >::clear< TargetType >();
          }
          static inline void clear() {
            obj::slot_binder< obj::texture_base >::clear< TargetType >();
          }
      };

    } // namespace texture

    namespace object {

      template< typename TextureFormat >
      struct texture: public texture_base, public object< texture_base >, public drawable, private TextureFormat {
          texture() {
            bind();
          }

          inline void bind() const {
            tex::texture_slot< typename TextureFormat::target_format >::bind(*this);
          }

          inline void unbind() const {
            tex::texture_slot< typename TextureFormat::target_format >::unbind(*this);
          }

          template< typename Data >
          inline void load(Data const& data_in, std::uint32_t const level = 0, std::uint8_t const border = 0) {
            bind();
            tex::texture_loader< TextureFormat >::load(data_in, level, border);
            compute_mipmaps();
          }

          template< typename Data >
          inline void load(Data const& data_in, dat::offset const& offset_in, std::uint32_t const level = 0) {
            bind();
            tex::texture_loader< TextureFormat >::load(data_in, offset_in, level);
            compute_mipmaps();
          }

          template< typename Data >
          inline void save(Data& data_out, std::uint32_t const mipmap = 0) {
            bind();
            tex::texture_loader< TextureFormat >::save(data_out, mipmap);
          }

          template< typename MinFilter >
          inline void set_minification() {
            fct::gl_tex_parameter::call< typename TextureFormat::target_format::aspect::format,
                cst::gl_texture_min_filter >(MinFilter::value);
          }

          inline void compute_mipmaps() {
            bind();
            fct::gl_generate_mipmap::call< typename TextureFormat::target_format::aspect::format >();
          }
      };

    } // namespace object

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECT_TEXTURE_HPP_ */

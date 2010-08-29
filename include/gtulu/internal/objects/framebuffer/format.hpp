/**
 * @file
 * @date 26 juil. 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_OBJECTS_FRAMEBUFFER_FORMAT_HPP_
#define GTULU_INTERNAL_OBJECTS_FRAMEBUFFER_FORMAT_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/objects/framebuffer.hpp"

#include "gtulu/internal/objects/framebuffer/attachment_manager.hpp"
#include "gtulu/internal/objects/framebuffer/attacher.hpp"

#include <vector>

namespace gtulu {
  namespace internal {

    namespace framebuffer {

      template< typename drawable_type_t >
      struct framebuffer_format_base;

      template< >
      struct framebuffer_format_base< const gio::drawable& > {
          attachment_manager manager;
          ::std::vector< GLenum > colors;

          framebuffer_format_base() {
            colors.resize(manager.max_attachment, GL_NONE);
          }

          void bind_colors() const {
            __gl_debug(glDrawBuffers, (colors.size())(colors.data()));
            glDrawBuffers(colors.size(), colors.data());
          }

          template< typename temporary_framebuffer_slot_t = gif::slots::gl_draw_framebuffer, typename texture_format_t >
          void set(const ::boost::uint32_t location, const gio::texture< texture_format_t >& drawable) {
            ::boost::shared_ptr< attachment > attachment = manager.get_current_or_new(drawable);
            gif::attacher< temporary_framebuffer_slot_t >::template attach< gif::layered::no >(
                attachment->get_color_number(), drawable, 0, 0);
            colors[location] = attachment->get_color_number();
          }

          template< typename temporary_framebuffer_slot_t = gif::slots::gl_draw_framebuffer >
          void set(const ::boost::uint32_t location, const gio::renderbuffer_base& drawable) {
            ::boost::shared_ptr< attachment > attachment = manager.get_current_or_new(drawable);
            gif::attacher< temporary_framebuffer_slot_t >::attach(attachment->get_color_number(), drawable);
            colors[location] = attachment->get_color_number();
          }
      };

      template< >
      struct framebuffer_format_base< const gio::default_drawable > {
          ::std::vector< GLenum > colors;

          framebuffer_format_base() {
            colors.resize(4, GL_NONE);
          }

          void bind_colors() const {
            __gl_debug(glDrawBuffers, (4)(colors.data()));
            glDrawBuffers(4, colors.data());
          }

          template< typename temporary_framebuffer_slot_t = gif::slots::gl_draw_framebuffer >
          void set(const ::boost::uint32_t location, const gio::default_drawable drawable) {
            colors[location] = static_cast< ::boost::uint32_t > (drawable);
          }
      };

    } // namespace framebuffer

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECTS_FRAMEBUFFER_FORMAT_HPP_ */

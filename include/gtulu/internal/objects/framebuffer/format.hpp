/**
 * @file
 * @date 26 juil. 2010
 * @todo comment
 * @copyright 2008-2011. All rights reserved.
 */

#ifndef GTULU_INTERNAL_OBJECTS_FRAMEBUFFER_FORMAT_HPP_
#define GTULU_INTERNAL_OBJECTS_FRAMEBUFFER_FORMAT_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

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
          ::std::vector< ::std::uint32_t > colors;

          framebuffer_format_base() {
            colors.resize(manager.max_attachment, 0);
          }

          void bind_colors() const {
            fnc::gl_draw_buffers::call(colors.size(), colors.data());
          }

          template< typename framebuffer_slot_type_t, typename texture_format_t >
          void set(::std::uint32_t const location, const gio::texture< texture_format_t >& drawable) {
            ::boost::shared_ptr< attachment > attachment = manager.get_current_or_new(drawable);
            gif::attacher< framebuffer_slot_type_t >::template attach< gif::layered::no >(attachment->get_color(),
                                                                                          drawable,
                                                                                          0,
                                                                                          0);
            colors[location] = ::std::uint32_t(attachment->get_color());
          }

          template< typename framebuffer_slot_type_t >
          void set(::std::uint32_t const location, gio::renderbuffer_base const& drawable) {
            ::boost::shared_ptr< attachment > attachment = manager.get_current_or_new(drawable);
            gif::attacher< framebuffer_slot_type_t >::attach(attachment->get_color(), drawable);
            colors[location] = ::std::uint32_t(attachment->get_color());
          }
      };

      template< >
      struct framebuffer_format_base< const gio::default_drawable > {
          ::std::vector< ::std::uint32_t > colors;

          framebuffer_format_base() {
            colors.resize(4, 0);
          }

          void bind_colors() const {
            fnc::gl_draw_buffers::call(4, colors.data());
          }

          template< typename framebuffer_slot_type_t >
          void set(::std::uint32_t const location, gio::default_drawable const drawable) {
            colors[location] = static_cast< ::std::uint32_t > (drawable);
          }
      };

    } // namespace framebuffer

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECTS_FRAMEBUFFER_FORMAT_HPP_ */

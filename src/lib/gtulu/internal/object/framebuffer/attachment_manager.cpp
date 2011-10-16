/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */
#include "gtulu_opengl_pch.hpp"

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"

#include "gtulu/internal/object/framebuffer/attachment_manager.hpp"

#include "gtulu/internal/context.hpp"

namespace gtulu {
  namespace internal {

    attachment_manager::attachment_manager() {
      max_attachment = ctx::gl_max_color_attachments::get();

      __gtulu_info() << "Max color attachments " << max_attachment;

      for (std::uint32_t unit_nb = 0; unit_nb < max_attachment; ++unit_nb) {
        attachments[unit_nb].reset();
      }
    }

    attachment_manager::~attachment_manager() {
      attachments.clear();
      attachment_mappings.clear();
    }

    boost::shared_ptr< attachment > attachment_manager::get_current(const std::uint32_t handle) {
      // Check if there is already a texture unit associated with this texture.
      return attachment_mappings[handle];
    }

    boost::shared_ptr< attachment > attachment_manager::get_new(const std::uint32_t handle) {
      boost::shared_ptr< attachment > unit_ptr;

      // Look for a free texture unit.
      attachment_map::iterator unit_it = attachments.begin();
      for (; unit_it != attachments.end(); ++unit_it) {
        if (unit_it->second.expired()) {
          break;
        }
      }

      if (unit_it != attachments.end()) {
        std::uint32_t unit_nb = unit_it->first;

        unit_ptr.reset(new attachment(unit_nb));
        attachments[unit_nb] = unit_ptr;
        attachment_mappings[handle] = unit_ptr;
      } else {
        __gtulu_error() << "unable to find a free color attachment slot."
              << "Maybe some attachment pointers are still active, or maybe the " << max_attachment
              << " color attachment limit has been reached.";
      }

      return unit_ptr;
    }

    boost::shared_ptr< attachment > attachment_manager::get_current_or_new(const std::uint32_t handle) {
      boost::shared_ptr< attachment > unit_ptr = get_current(handle);

      if (!unit_ptr) {
        unit_ptr = get_new(handle);
      }

      return unit_ptr;
    }

    void attachment_manager::clear() {
      attachment_mappings.clear();
    }

    boost::shared_ptr< attachment > attachment_manager::get_current(obj::texture_base const& texture) {
      return get_current(*texture);
    }
    boost::shared_ptr< attachment > attachment_manager::get_new(obj::texture_base const& texture) {
      return get_new(*texture);
    }
    boost::shared_ptr< attachment > attachment_manager::get_current_or_new(obj::texture_base const& texture) {
      return get_current_or_new(*texture);
    }

    boost::shared_ptr< attachment > attachment_manager::get_current(obj::renderbuffer_base const& renderbuffer) {
      return get_current(*renderbuffer);
    }
    boost::shared_ptr< attachment > attachment_manager::get_new(obj::renderbuffer_base const& renderbuffer) {
      return get_new(*renderbuffer);
    }
    boost::shared_ptr< attachment > attachment_manager::get_current_or_new(obj::renderbuffer_base const& renderbuffer) {
      return get_current_or_new(*renderbuffer);
    }

  } // namespace internal
} // namespace gtulu

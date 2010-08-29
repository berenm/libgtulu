/**
 * @file
 * @date 30 mai 2010
 * @todo comment
 */

#include <logging/logging.hpp>

#include "gtulu/internal/objects/framebuffer/attachment_manager.hpp"

namespace gtulu {
  namespace internal {

    attachment_manager::attachment_manager() {
      __gl_debug(glGetIntegerv, (GL_MAX_COLOR_ATTACHMENTS)(&max_attachment));
      glGetIntegerv(GL_MAX_COLOR_ATTACHMENTS, reinterpret_cast< ::boost::int32_t* > (&max_attachment));
      __gl_check_error

      __info
        << "Max color attachments " << max_attachment;

      for (::boost::uint32_t unit_nb = 0; unit_nb < max_attachment; ++unit_nb) {
        attachments[unit_nb].reset();
      }
    }

    attachment_manager::~attachment_manager() {
      attachments.clear();
      attachment_mappings.clear();
    }

    ::boost::shared_ptr< attachment > attachment_manager::get_current(const ::boost::uint32_t handle) {
      // Check if there is already a texture unit associated with this texture.
      return attachment_mappings[handle];
    }

    ::boost::shared_ptr< attachment > attachment_manager::get_new(const ::boost::uint32_t handle) {
      ::boost::shared_ptr< attachment > unit_ptr;

      // Look for a free texture unit.
      attachment_map::iterator unit_it = attachments.begin();
      for (; unit_it != attachments.end(); ++unit_it) {
        if (unit_it->second.expired()) {
          break;
        }
      }

      if (unit_it != attachments.end()) {
        ::boost::uint32_t unit_nb = unit_it->first;

        unit_ptr.reset(new attachment(unit_nb));
        attachments[unit_nb] = unit_ptr;
        attachment_mappings[handle] = unit_ptr;
      } else {
        __error
              << "unable to find a free color attachment slot - maybe some attachment pointers are still active, or maybe the "
              << max_attachment << " color attachment limit has been reached.";
      }

      return unit_ptr;
    }

    ::boost::shared_ptr< attachment > attachment_manager::get_current_or_new(const ::boost::uint32_t handle) {
      ::boost::shared_ptr< attachment > unit_ptr = get_current(handle);

      if (!unit_ptr) {
        unit_ptr = get_new(handle);
      }

      return unit_ptr;
    }

    void attachment_manager::clear() {
      attachment_mappings.clear();
    }

    ::boost::shared_ptr< attachment > attachment_manager::get_current(const gio::texture_base& texture) {
      return get_current(*texture);
    }
    ::boost::shared_ptr< attachment > attachment_manager::get_new(const gio::texture_base& texture) {
      return get_new(*texture);
    }
    ::boost::shared_ptr< attachment > attachment_manager::get_current_or_new(const gio::texture_base& texture) {
      return get_current_or_new(*texture);
    }

    ::boost::shared_ptr< attachment > attachment_manager::get_current(const gio::renderbuffer_base& renderbuffer) {
      return get_current(*renderbuffer);
    }
    ::boost::shared_ptr< attachment > attachment_manager::get_new(const gio::renderbuffer_base& renderbuffer) {
      return get_new(*renderbuffer);
    }
    ::boost::shared_ptr< attachment > attachment_manager::get_current_or_new(const gio::renderbuffer_base& renderbuffer) {
      return get_current_or_new(*renderbuffer);
    }

  } // namespace internal
} // namespace gtulu

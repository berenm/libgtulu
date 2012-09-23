/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */
#include "gtulu_opengl_pch.hpp"

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"

#include "gtulu/internal/texture_unit_manager.hpp"
#include "gtulu/internal/context.hpp"

namespace gtulu {
  namespace internal {
    boost::thread_specific_ptr< texture_unit_manager > texture_unit_manager::instance_ptr;

    texture_unit_manager::texture_unit_manager() {
      max_texture_unit = ctx::gl_max_combined_texture_image_units::get();

      __gtulu_info() << "Max combined texture units " << max_texture_unit;

      for (std::int32_t unit_nb = 0; unit_nb < max_texture_unit; ++unit_nb) {
        texture_units[unit_nb].reset();
      }
    }

    texture_unit_manager::~texture_unit_manager() {
      texture_units.clear();
      texture_unit_mappings.clear();
    }

    texture_unit_manager& texture_unit_manager::instance() {
      if (instance_ptr.get() == 0) {
        instance_ptr.reset(new texture_unit_manager());
      }

      return *instance_ptr;
    }

    boost::shared_ptr< texture_unit > texture_unit_manager::get_current(obj::texture_base const& texture) {
      // Check if there is already a texture unit associated with this texture.
      // TODO(rout): maybe the already bound texture unit has another sampler object bound to it and we do not want the same sampler object...
      return texture_unit_mappings[*texture];
    }

    boost::shared_ptr< texture_unit > texture_unit_manager::get_new(obj::texture_base const& texture) {
      boost::shared_ptr< texture_unit > unit_ptr;

      // Look for a free texture unit.
      texture_unit_map::iterator unit_it = texture_units.begin();
      for (; unit_it != texture_units.end(); ++unit_it) {
        if (unit_it->second.expired()) {
          break;
        }
      }

      if (unit_it != texture_units.end()) {
        std::uint32_t unit_nb = unit_it->first;

        unit_ptr.reset(new texture_unit(unit_nb));
        texture_units[unit_nb]          = unit_ptr;
        texture_unit_mappings[*texture] = unit_ptr;
      } else {
        __gtulu_error() << "unable to find a free texture unit."
                        << "Maybe some texture unit pointers are still active, or maybe the " << max_texture_unit
                        << " texture unit limit has been reached.";
      }

      return unit_ptr;
    }

    boost::shared_ptr< texture_unit > texture_unit_manager::get_current_or_new(obj::texture_base const& texture) {
      boost::shared_ptr< texture_unit > unit_ptr = get_current(texture);

      if (!unit_ptr) {
        unit_ptr = get_new(texture);
      }

      return unit_ptr;
    }

    void texture_unit_manager::clear() {
      texture_unit_mappings.clear();
    }

  } // namespace internal
} // namespace gtulu

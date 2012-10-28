/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_SHADER_DYNAMIC_HPP_
#define GTULU_INTERNAL_FORMAT_SHADER_DYNAMIC_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/internal/constants_fwd.hpp"

#include "gtulu/internal/object/shader/base.hpp"

#include <boost/filesystem/path.hpp>

#include <string>
#include <vector>

namespace gtulu {
  namespace internal {

    namespace format {
      namespace shader {

        struct output_info {
          output_info(std::uint32_t const id, std::string const name, cst::gl_constant_base const& type, std::uint32_t const size, location_t const location, std::uint32_t const index) :
            id(id), name(name), type(type), size(size), location(location), index(index) {}

          output_info(output_info const& copy) :
            id(copy.id), name(copy.name), type(copy.type), size(copy.size), location(copy.location), index(copy.index) {}

          output_info& operator=(output_info const& copy) {
            id       = copy.id;
            name     = copy.name;
            type     = copy.type;
            size     = copy.size;
            location = copy.location;
            index    = copy.index;
            return *this;
          }

          std::uint32_t         id;
          std::string           name;
          cst::gl_constant_base type;
          std::uint32_t         size;
          location_t            location;
          std::uint32_t         index;
        };

        typedef std::vector< output_info > output_vector_t;

        class dynamic_shader_format : virtual public obj::shader_base {
          protected:
            output_vector_t outputs_;

          public:
            dynamic_shader_format();

            output_vector_t const& get_outputs();
            void                   load_shader(boost::filesystem::path const& filename);

            void print();

            bool has_log_;
            bool has_log() const;

            std::string log_;
            void print_log() const;

            virtual void compile();
        };

      } // namespace shader
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_SHADER_DYNAMIC_HPP_ */

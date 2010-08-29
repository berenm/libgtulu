/**
 * @file
 * @date 26 juil. 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMATS_SHADER_DYNAMIC_HPP_
#define GTULU_INTERNAL_FORMATS_SHADER_DYNAMIC_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/formats/shader.hpp"
#include "gtulu/internal/formats/output.hpp"

#include "gtulu/internal/objects/shader/base.hpp"

#include <boost/filesystem/path.hpp>

#include <string>
#include <vector>

namespace gtulu {
  namespace internal {

    namespace gio = ::gtulu::internal::objects;

    namespace formats {
      namespace shader {

        struct output_info {
            ::boost::uint32_t id;
            ::std::string name;
            fof::gl_constant type;
            ::boost::uint32_t size;
            location_t location;
            ::boost::uint32_t index;
        };
        typedef ::std::vector< output_info > output_vector_t;

        class dynamic_shader_format: virtual public gio::shader_base {
          protected:
            output_vector_t outputs_;

          public:
            dynamic_shader_format();

            const output_vector_t& get_outputs();
            void load_shader(const ::boost::filesystem::path& filename);

            void print();

            bool has_log_;
            bool has_log() const;

            ::std::string log_;
            void print_log() const;

            virtual void compile();
        };
      }
    }

  }
}

#endif /* GTULU_INTERNAL_FORMATS_SHADER_DYNAMIC_HPP_ */

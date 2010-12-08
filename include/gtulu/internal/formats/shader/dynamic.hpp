/**
 * @file
 * @date 26 juil. 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMATS_SHADER_DYNAMIC_HPP_
#define GTULU_INTERNAL_FORMATS_SHADER_DYNAMIC_HPP_

#include "gtulu/internal/constants_fwd.hpp"

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
            output_info(::std::uint32_t id_in, ::std::string name_in, const cst::gl_constant_base& type_in,
                        ::std::uint32_t size_in, location_t location_in, ::std::uint32_t index_in) :
              id(id_in), name(name_in), type(type_in), size(size_in), location(location_in), index(index_in) {
            }
            output_info(const output_info& copy) :
              id(copy.id), name(copy.name), type(copy.type), size(copy.size), location(copy.location),
                  index(copy.index) {
            }

            output_info& operator=(output_info const& copy) {
              id = copy.id;
              name = copy.name;
              type = copy.type;
              size = copy.size;
              location = copy.location;
              index = copy.index;
              return *this;
            }

            ::std::uint32_t id;
            ::std::string name;
            cst::gl_constant_base type;
            ::std::uint32_t size;
            location_t location;
            ::std::uint32_t index;
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

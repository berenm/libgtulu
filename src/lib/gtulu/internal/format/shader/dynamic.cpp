/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */
#include "gtulu_opengl_pch.hpp"

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"

#include "gtulu/internal/format/shader/dynamic.hpp"
#include "gtulu/internal/format/output.hpp"

#include "gtulu/utils/file.hpp"

#include <string>
#include <vector>
#include <limits>

#include <boost/algorithm/string.hpp>
#include <boost/filesystem/fstream.hpp>
#include <boost/regex.hpp>
#include <boost/smart_ptr/scoped_array.hpp>
#include <boost/lexical_cast.hpp>

namespace gtulu {
  namespace internal {

    namespace format {
      namespace shader {

        fshd::output_vector_t const& dynamic_shader_format::get_outputs() {
          return outputs_;
        }

        dynamic_shader_format::dynamic_shader_format() :
            has_log_(false), log_("") {
        }

        void dynamic_shader_format::print() {
        }

        void dynamic_shader_format::load_shader(boost::filesystem::path const& filename) {
          std::string extension = filename.extension().string();
          bool parse_outputs = false;

          if (extension.compare(".fs") == 0 || extension.compare(".frag") == 0) {
            obj::shader_base::create_shader< fshd::type::gl_fragment_shader >();
            parse_outputs = true;
          } else if (extension.compare(".vs") == 0 || extension.compare(".vert") == 0) {
            obj::shader_base::create_shader< fshd::type::gl_vertex_shader >();
          } else if (extension.compare(".gs") == 0 || extension.compare(".geom") == 0) {
            obj::shader_base::create_shader< fshd::type::gl_geometry_shader >();
          } else {
            __gtulu_error() << "Unknown shader extension " << extension
                  << ", please use one of .fs/.frag, .gs/.geom or .vs/.vert.";
          }

          std::string source = gu::file::get_contents(filename);
          obj::shader_base::set_source(source.c_str());

          outputs_.clear();
          if (parse_outputs) {
            boost::regex expression("out\\s+(\\S+)\\s+(\\S+);");
            boost::regex array_expression("\\s*(\\S+)\\s*\\[(\\S*)\\]\\s*");
            boost::sregex_iterator it(source.begin(), source.end(), expression);
            boost::sregex_iterator end;

            std::uint32_t id = 0;
            while (it != end) {
              std::string type_name = it->str(1);
              std::string name = it->str(2);

              std::uint32_t size = 1;

              boost::sregex_iterator name_it(name.begin(), name.end(), array_expression);
              boost::sregex_iterator type_it(type_name.begin(), type_name.end(), array_expression);

              // We've found a static sized output vector, that's really nice...
              if (name_it != end) {
                name = name_it->str(1);
                size = boost::lexical_cast< std::uint32_t >(name_it->str(2));

                // We've just found a dynamic sized output vector, what a wonderful idea...
              } else if (type_it != end) {
                type_name = type_it->str(1);
                size = -1;
              }

              outputs_.push_back(output_info(id++, name, fout::format::get(type_name), size, -1, -1));
              ++it;
            }
          }
        }

        void dynamic_shader_format::compile() {
          obj::shader_base::compile();

          std::uint32_t length = obj::shader_base::get< fshd::property::gl_info_log_length >();

          has_log_ = length > 1;

          if (length > std::numeric_limits< std::uint32_t >::max()) {
            __gtulu_error() << "Log length too long.";
          } else if (!has_log_) {
            log_ = "";
          } else {
            char* buffer = new char[length];
            buffer[0] = 0;

            fct::get_shader_info_log< >::call(obj::shader_base::handle_,
                                              length,
                                              reinterpret_cast< std::int32_t* >(&length),
                                              buffer);

            log_ = std::string(buffer);

            delete[] buffer;
          }
        }

        bool dynamic_shader_format::has_log() const {
          return has_log_;
        }

        void dynamic_shader_format::print_log() const {
          if (has_log_) {
            std::vector< std::string > lines;
            boost::split(lines, log_, boost::is_any_of("\r\n"));

            for (std::vector< std::string >::iterator it = lines.begin(); it != lines.end(); ++it) {
              if (it->length() > 0) {
                __gtulu_warn() << "shader: " << *it;
              }
            }
          }
        }

      } // namespace shader
    } // namespace format

  } // namespace internal
} // namespace gtulu

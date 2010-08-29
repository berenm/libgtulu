/**
 * @file
 * @date 26 juil. 2010
 * @todo comment
 */

#include "gtulu/internal/formats/shader/dynamic.hpp"
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
    namespace gu = ::gtulu::utils;

    namespace formats {
      namespace shader {

        const fs::output_vector_t& dynamic_shader_format::get_outputs() {
          return outputs_;
        }

        dynamic_shader_format::dynamic_shader_format() :
          has_log_(false), log_("") {
        }

        void dynamic_shader_format::print() {
        }

        void dynamic_shader_format::load_shader(const ::boost::filesystem::path& filename) {
          ::std::string extension = filename.extension();
          bool parse_outputs = false;

          if (extension.compare(".fs") == 0 || extension.compare(".frag") == 0) {
            gio::shader_base::create_shader< fst::gl_fragment >();
            parse_outputs = true;
          } else if (extension.compare(".vs") == 0 || extension.compare(".vert") == 0) {
            gio::shader_base::create_shader< fst::gl_vertex >();
          } else if (extension.compare(".gs") == 0 || extension.compare(".geom") == 0) {
            gio::shader_base::create_shader< fst::gl_geometry >();
          } else {
            __error
              << "Unknown shader extension " << extension << ", please use one of .fs/.frag, .gs/.geom or .vs/.vert.";
          }

          ::std::string source = gu::file::get_contents(filename);
          gio::shader_base::set_source(source.c_str());

          outputs_.clear();
          if (parse_outputs) {
            ::boost::regex expression("out\\s+(\\S+)\\s+(\\S+);");
            ::boost::regex array_expression("\\s*(\\S+)\\s*\\[(\\S*)\\]\\s*");
            ::boost::sregex_iterator it(source.begin(), source.end(), expression);
            ::boost::sregex_iterator end;

            ::boost::uint32_t id = 0;
            while (it != end) {
              ::std::string type_name = it->str(1);
              ::std::string name = it->str(2);

              ::boost::uint32_t size = 1;

              ::boost::sregex_iterator name_it(name.begin(), name.end(), array_expression);
              ::boost::sregex_iterator type_it(type_name.begin(), type_name.end(), array_expression);

              // We've found a static sized output vector, that's really nice...
              if (name_it != end) {
                name = name_it->str(1);
                size = ::boost::lexical_cast< ::boost::uint32_t >(name_it->str(2));

                // We've just found a dynamic sized output vector, what a wonderful idea...
              } else if (type_it != end) {
                type_name = type_it->str(1);
                size = -1;
              }

              const fof::gl_constant& type = fof::gl_constant::get(type_name);

              output_info info;

              info.type = type;
              info.name = name;
              info.id = id++;
              info.index = -1;
              info.location = -1;
              info.size = size;

              outputs_.push_back(info);
              ++it;
            }
          }
        }

        void dynamic_shader_format::compile() {
          gio::shader_base::compile();

          ::boost::uint32_t length = gio::shader_base::get< fsa::gl_info_log_length >();

          has_log_ = length > 1;

          if (length > ::std::numeric_limits< ::boost::uint32_t >::max()) {
            __error
              << "Log length too long.";
          } else if (!has_log_) {
            log_ = "";
          } else {
            char* buffer = new char[length];
            __gl_debug(glGetShaderInfoLog, (gio::shader_base::handle_)(length)(&length)(buffer));
            glGetShaderInfoLog(gio::shader_base::handle_, length, reinterpret_cast< ::boost::int32_t* > (&length),
                buffer);
            __gl_check_error

            log_ = ::std::string(buffer);

            delete[] buffer;
          }
        }

        bool dynamic_shader_format::has_log() const {
          return has_log_;
        }

        void dynamic_shader_format::print_log() const {
          if (has_log_) {
            ::std::vector< ::std::string > lines;
            ::boost::split(lines, log_, ::boost::is_any_of("\r\n"));

            for (::std::vector< ::std::string >::iterator it = lines.begin(); it != lines.end(); ++it) {
              if (it->length() > 0) {
                __warnM(shader)
                  << *it;
              }
            }
          }
        }

      } // namespace shader
    } // namespace formats

  } // namespace internal
} // namespace gtulu

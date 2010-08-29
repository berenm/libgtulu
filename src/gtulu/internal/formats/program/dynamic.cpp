/**
 * @file
 * @date 27 juil. 2010
 * @todo comment
 */

#include "gtulu/internal/formats/program/dynamic.hpp"
#include "gtulu/internal/formats/program.hpp"

#include <string>
#include <vector>
#include <limits>

#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace program {

        ::boost::uint32_t dynamic_program_format::get_outputs_count() {
          return get_outputs().size();
        }

        ::boost::uint32_t dynamic_program_format::get_output_location(::std::string name) {
          fp::output_vector_t::iterator it = outputs_.begin();

          for (; it != outputs_.end(); ++it) {
            if (it->name.compare(name) == 0) {
              break;
            }
          }

          if (it != outputs_.end()) {
            return it->location;
          }

          return -1;
        }

        void dynamic_program_format::refresh_outputs() {
          outputs_.clear();

          shader_vector_t::iterator shader_it = shaders_.begin();
          for (; shader_it != shaders_.end(); shader_it++) {
            const fp::output_vector_t& outputs = shader_it->get_outputs();
            fp::output_vector_t::const_iterator output_it = outputs.begin();

            for (; output_it != outputs.end(); ++output_it) {
              fp::output_info info = *output_it;

              // TODO(rout): find a better way to handle dynamic sized arrays.
              ::boost::uint32_t max_array_size = 1024;
              for (::boost::uint32_t i = 0; i != info.size && i < max_array_size; ++i) {
                fp::output_info real_info = info;

                if (real_info.size != 1) {
                  real_info.name.append("[");
                  real_info.name.append(::boost::lexical_cast< ::std::string >(i));
                  real_info.name.append("]");
                }

                real_info.size = 1;
                __gl_debug(glGetFragDataLocation, (program_base::handle_)(real_info.name.c_str()));
                real_info.location = glGetFragDataLocation(program_base::handle_, real_info.name.c_str());
                //                __gl_debug(glGetFragDataIndex);
                //        info.index = glGetFragDataIndex(handle_, info.name.c_str());
                __gl_check_error

                if (real_info.location >= 0) {
                  outputs_.push_back(real_info);
                }
              }
            }
          }
        }

        void dynamic_program_format::attach(const shader_t& shader) {
          program_base::attach(shader);

          shaders_.push_back(const_cast< shader_t& > (shader));
        }

        void dynamic_program_format::detach(const shader_t& shader) {
          program_base::detach(shader);

          shader_vector_t::iterator it = shaders_.begin();
          for (; it != shaders_.end(); ++it) {
            if (&(*it) == &shader) {
              shaders_.erase(it);
            }
          }
        }

        ::boost::uint32_t dynamic_program_format::get_attribute_count() {
          return program_base::get< fpa::gl_active_attributes >();
        }

        ::boost::uint32_t dynamic_program_format::get_attribute_max_length() {
          return program_base::get< fpa::gl_active_attribute_max_length >();
        }

        fp::attribute_info dynamic_program_format::get_attribute_info(::boost::uint32_t id) {
          fp::attribute_info info;

          ::boost::uint32_t max_len = get_attribute_max_length();
          char* buffer = new char[max_len];

          GLsizei length;
          GLint size;
          GLenum type;
          __gl_debug(glGetActiveAttrib, (**this)(id)(max_len)(&length)(&size)(&type)(&buffer));
          glGetActiveAttrib(**this, id, max_len, &length, &size, &type, buffer);
          __gl_check_error

          __gl_debug(glGetAttribLocation, (**this)(buffer));
          GLint location = glGetAttribLocation(**this, buffer);
          __gl_check_error

          info.id = id;
          info.location = location;
          info.name = ::std::string(buffer);
          info.size = size;
          info.type = faf::gl_constant::get(type);

          delete[] buffer;

          return info;
        }

        ::boost::uint32_t dynamic_program_format::get_uniform_count() {
          return program_base::get< fpa::gl_active_uniforms >();
        }

        ::boost::uint32_t dynamic_program_format::get_uniform_max_length() {
          return program_base::get< fpa::gl_active_uniform_max_length >();
        }

        fp::uniform_info dynamic_program_format::get_uniform_info(::boost::uint32_t id) {
          fp::uniform_info info;

          ::boost::uint32_t max_len = get_uniform_max_length();
          char* buffer = new char[max_len];

          GLsizei length;
          GLint size;
          GLenum type;
          __gl_debug(glGetActiveUniform, (**this)(id)(max_len)(&length)(&size)(&type)(&buffer));
          glGetActiveUniform(**this, id, max_len, &length, &size, &type, buffer);
          __gl_check_error

          __gl_debug(glGetUniformLocation, (**this)(buffer));;
          GLint location = glGetUniformLocation(**this, buffer);
          __gl_check_error

          info.id = id;
          info.location = location;
          info.name = ::std::string(buffer);
          info.size = size;
          info.type = fuf::gl_constant::get(type);

          delete[] buffer;

          return info;
        }

        ::boost::uint32_t dynamic_program_format::get_uniform_block_count() {
          return program_base::get< fpa::gl_active_uniform_blocks >();
        }

        ::boost::uint32_t dynamic_program_format::get_uniform_block_max_length() {
          return program_base::get< fpa::gl_active_uniform_block_max_length >();
        }

        fp::uniform_block_info dynamic_program_format::get_uniform_block_info(::boost::uint32_t index) {
          return fp::uniform_block_info();
        }

        dynamic_program_format::dynamic_program_format() :
          has_link_log_(false), has_validation_log_(false), link_log_(""), validation_log_("") {
        }

        void dynamic_program_format::print() {
          __info
            << " ----- " << attributes_.size() << " attribute(s) ----- ";
          for (fp::attribute_vector_t::iterator it = attributes_.begin(); it != attributes_.end(); ++it) {
            __info
              << "id: " << it->id << ", name: " << it->name << ", type: " << it->type << ", size: " << it->size
                  << ", location: " << it->location;
          }

          __info
            << " ----- " << uniforms_.size() << " uniform(s)   ----- ";
          for (fp::uniform_vector_t::iterator it = uniforms_.begin(); it != uniforms_.end(); ++it) {
            __info
              << "id: " << it->id << ", name: " << it->name << ", type: " << it->type << ", size: " << it->size
                  << ", location: " << it->location;
          }

          __info
            << " ----- " << outputs_.size() << " output(s)    ----- ";
          for (fp::output_vector_t::iterator it = outputs_.begin(); it != outputs_.end(); ++it) {
            __info
              << "id: " << it->id << ", name: " << it->name << ", type: " << it->type << ", size: " << it->size
                  << ", location: " << it->location << ", index: " << it->index;
          }
        }

        void dynamic_program_format::link() {
          program_base::link();

          ::boost::uint32_t length = program_base::get< fpa::gl_info_log_length >();
          has_link_log_ = length > 1;

          if (length > ::std::numeric_limits< ::boost::uint32_t >::max()) {
            __error
              << "Log length too long.";
          } else if (!has_link_log_) {
            link_log_ = "";
          } else {
            char* buffer = new char[length];
            __gl_debug(glGetProgramInfoLog, (program_base::handle_)(length)(&length)(buffer));
            glGetProgramInfoLog(program_base::handle_, length, reinterpret_cast< ::boost::int32_t* > (&length), buffer);
            __gl_check_error

            link_log_ = ::std::string(buffer);

            delete[] buffer;
          }

          ::boost::uint32_t attribute_count = get_attribute_count();
          for (::boost::uint32_t i = 0; i < attribute_count; ++i) {
            attributes_.push_back(get_attribute_info(i));
          }

          ::boost::uint32_t uniform_count = get_uniform_count();
          for (::boost::uint32_t i = 0; i < uniform_count; ++i) {
            uniforms_.push_back(get_uniform_info(i));
          }

          ::boost::uint32_t uniform_block_count = get_uniform_block_count();
          for (::boost::uint32_t i = 0; i < uniform_block_count; ++i) {
            uniform_blocks_.push_back(get_uniform_block_info(i));
          }

          refresh_outputs();
        }

        void dynamic_program_format::validate() {
          program_base::validate();

          ::boost::uint32_t length = program_base::get< fpa::gl_info_log_length >();
          has_validation_log_ = length > 1;

          if (length > ::std::numeric_limits< ::boost::uint32_t >::max()) {
            __error
              << "Log length too long.";
          } else if (!has_validation_log_) {
            validation_log_ = "";
          } else {
            char* buffer = new char[length];
            __gl_debug(glGetProgramInfoLog, (program_base::handle_)(length)(&length)(buffer));
            glGetProgramInfoLog(program_base::handle_, length, reinterpret_cast< ::boost::int32_t* > (&length), buffer);
            __gl_check_error

            validation_log_ = ::std::string(buffer);

            delete[] buffer;
          }
        }

        bool dynamic_program_format::has_log() const {
          return has_link_log_ || has_validation_log_;
        }

        void dynamic_program_format::print_log() const {
          ::std::vector< ::std::string > lines;

          if (has_validation_log_) {
            ::boost::split(lines, validation_log_, ::boost::is_any_of("\r\n"));

            for (::std::vector< ::std::string >::iterator it = lines.begin(); it != lines.end(); ++it) {
              if (it->length() > 0) {
                __warnM(program)
                  << *it;
              }
            }
          }

          if (has_link_log_) {
            ::boost::split(lines, link_log_, ::boost::is_any_of("\r\n"));

            for (::std::vector< ::std::string >::iterator it = lines.begin(); it != lines.end(); ++it) {
              if (it->length() > 0) {
                __warnM(program)
                  << *it;
              }
            }
          }
        }

        const fp::attribute_vector_t& dynamic_program_format::get_attributes() {
          return attributes_;
        }

        const fp::uniform_vector_t& dynamic_program_format::get_uniforms() {
          return uniforms_;
        }

        const fp::uniform_block_vector_t& dynamic_program_format::get_uniform_blocks() {
          return uniform_blocks_;
        }

        const fp::output_vector_t& dynamic_program_format::get_outputs() {
          return outputs_;
        }

      } // namespace program
    } // namespace formats

  } // namespace internal
} // namespace gtulu
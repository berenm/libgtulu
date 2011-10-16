/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */
#include "gtulu_opengl_pch.hpp"

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"

#include "gtulu/internal/format/program/dynamic.hpp"
#include "gtulu/internal/format/attribute.hpp"
#include "gtulu/internal/format/uniform.hpp"
#include "gtulu/internal/format/sampler.hpp"

#include "gtulu/internal/format/program.hpp"

#include <string>
#include <vector>
#include <limits>

#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>

namespace gtulu {
  namespace internal {

    namespace format {
      namespace program {

        std::uint32_t dynamic_program_format::get_outputs_count() {
          return get_outputs().size();
        }

        std::uint32_t dynamic_program_format::get_output_location(std::string name) {
          fprg::output_vector_t::iterator it = outputs_.begin();

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
            fprg::output_vector_t const& outputs = shader_it->get_outputs();
            fprg::output_vector_t::const_iterator output_it = outputs.begin();

            for (; output_it != outputs.end(); ++output_it) {
              fprg::output_info info = *output_it;

              // TODO(rout): find a better way to handle dynamic sized arrays.
              std::uint32_t max_array_size = 1024;
              for (std::uint32_t i = 0; i != info.size && i < max_array_size; ++i) {
                fprg::output_info real_info = info;

                if (real_info.size != 1) {
                  real_info.name.append("[");
                  real_info.name.append(boost::lexical_cast< std::string >(i));
                  real_info.name.append("]");
                }

                real_info.size = 1;
                real_info.location = fct::gl_get_frag_data_location::call(program_base::handle_,
                                                                          real_info.name.c_str());
                real_info.index = fct::gl_get_frag_data_index::call(program_base::handle_, real_info.name.c_str());

                if (real_info.location >= 0) {
                  outputs_.push_back(real_info);
                }
              }
            }
          }
        }

        void dynamic_program_format::attach(shader_t const& shader) {
          program_base::attach(shader);

          shaders_.push_back(const_cast< shader_t& >(shader));
        }

        void dynamic_program_format::detach(shader_t const& shader) {
          program_base::detach(shader);

          shader_vector_t::iterator it = shaders_.begin();
          for (; it != shaders_.end(); ++it) {
            if (&(*it) == &shader) {
              shaders_.erase(it);
            }
          }
        }

        std::uint32_t dynamic_program_format::get_attribute_count() {
          return program_base::get< fprg::property::gl_active_attributes >();
        }

        std::uint32_t dynamic_program_format::get_attribute_max_length() {
          return program_base::get< fprg::property::gl_active_attribute_max_length >();
        }

        const fprg::attribute_info dynamic_program_format::get_attribute_info(std::uint32_t id) {
          std::uint32_t max_len = get_attribute_max_length();
          char* buffer = new char[max_len];
          buffer[0] = 0;

          GLsizei length;
          GLint size;
          GLenum type;
          fct::gl_get_active_attrib::call(**this, id, max_len, &length, &size, &type, buffer);
          GLint location = fct::gl_get_attrib_location::call(**this, buffer);

          std::string name = std::string(buffer);
          delete[] buffer;

          return fprg::attribute_info(id, name, fatt::format::get(type), size, location);
        }

        std::uint32_t dynamic_program_format::get_uniform_count() {
          return program_base::get< fprg::property::gl_active_uniforms >();
        }

        std::uint32_t dynamic_program_format::get_uniform_max_length() {
          return program_base::get< fprg::property::gl_active_uniform_max_length >();
        }

        const fprg::uniform_info dynamic_program_format::get_uniform_info(std::uint32_t id) {
          std::uint32_t max_len = get_uniform_max_length();
          char* buffer = new char[max_len];
          buffer[0] = 0;

          GLsizei length;
          GLint size;
          GLenum type;
          fct::gl_get_active_uniform::call(**this, id, max_len, &length, &size, &type, buffer);
          GLint location = fct::gl_get_uniform_location::call(**this, buffer);

          std::string name = std::string(buffer);
          delete[] buffer;

          if (funf::format::is_uniform(type)) {
            return fprg::uniform_info(id, name, funf::format::get(type), size, location);
          } else if (fsmp::format::is_sampler(type)) {
            return fprg::uniform_info(id, name, fsmp::format::get(type), size, location);
          } else {
            return fprg::uniform_info(id, name, cst::invalid_constant(), size, location);
          }
        }

        std::uint32_t dynamic_program_format::get_uniform_block_count() {
          return program_base::get< fprg::property::gl_active_uniform_blocks >();
        }

        std::uint32_t dynamic_program_format::get_uniform_block_max_length() {
          return program_base::get< fprg::property::gl_active_uniform_block_max_name_length >();
        }

        const fprg::uniform_block_info dynamic_program_format::get_uniform_block_info(std::uint32_t index) {
          return fprg::uniform_block_info(0, "", cst::invalid_constant(), 0, 0);
        }

        dynamic_program_format::dynamic_program_format() :
            has_link_log_(false), has_validation_log_(false), link_log_(""), validation_log_("") {
        }

        void dynamic_program_format::print() {
          __gtulu_info() << " ----- " << attributes_.size() << " attribute(s) ----- ";
          for (fprg::attribute_vector_t::iterator it = attributes_.begin(); it != attributes_.end(); ++it) {
            __gtulu_info() << "id: " << it->id << ", name: " << it->name << ", type: " << it->type << ", size: "
                  << it->size << ", location: " << it->location;
          }

          __gtulu_info() << " ----- " << uniforms_.size() << " uniform(s)   ----- ";
          for (fprg::uniform_vector_t::iterator it = uniforms_.begin(); it != uniforms_.end(); ++it) {
            __gtulu_info() << "id: " << it->id << ", name: " << it->name << ", type: " << it->type << ", size: "
                  << it->size << ", location: " << it->location;
          }

          __gtulu_info() << " ----- " << outputs_.size() << " output(s)    ----- ";
          for (fprg::output_vector_t::iterator it = outputs_.begin(); it != outputs_.end(); ++it) {
            __gtulu_info() << "id: " << it->id << ", name: " << it->name << ", type: " << it->type << ", size: "
                  << it->size << ", location: " << it->location << ", index: " << it->index;
          }
        }

        void dynamic_program_format::link() {
          program_base::link();

          std::uint32_t length = program_base::get< fprg::property::gl_info_log_length >();
          has_link_log_ = length > 1;

          if (length > std::numeric_limits< std::uint32_t >::max()) {
            __gtulu_error() << "Log length too long.";
          } else if (!has_link_log_) {
            link_log_ = "";
          } else {
            char* buffer = new char[length];
            buffer[0] = 0;

            fct::gl_get_program_info_log::call(program_base::handle_,
                                               length,
                                               reinterpret_cast< std::int32_t* >(&length),
                                               buffer);

            link_log_ = std::string(buffer);

            delete[] buffer;
          }

          std::uint32_t attribute_count = get_attribute_count();
          for (std::uint32_t i = 0; i < attribute_count; ++i) {
            attributes_.push_back(get_attribute_info(i));
          }

          std::uint32_t uniform_count = get_uniform_count();
          for (std::uint32_t i = 0; i < uniform_count; ++i) {
            uniforms_.push_back(get_uniform_info(i));
          }

          std::uint32_t uniform_block_count = get_uniform_block_count();
          for (std::uint32_t i = 0; i < uniform_block_count; ++i) {
            uniform_blocks_.push_back(get_uniform_block_info(i));
          }

          refresh_outputs();
        }

        void dynamic_program_format::validate() {
          program_base::validate();

          std::uint32_t length = program_base::get< fprg::property::gl_info_log_length >();
          has_validation_log_ = length > 1;

          if (length > std::numeric_limits< std::uint32_t >::max()) {
            __gtulu_error() << "Log length too long.";
          } else if (!has_validation_log_) {
            validation_log_ = "";
          } else {
            char* buffer = new char[length];
            buffer[0] = 0;

            fct::gl_get_program_info_log::call(program_base::handle_,
                                               length,
                                               reinterpret_cast< std::int32_t* >(&length),
                                               buffer);

            validation_log_ = std::string(buffer);

            delete[] buffer;
          }
        }

        bool dynamic_program_format::has_log() const {
          return has_link_log_ || has_validation_log_;
        }

        void dynamic_program_format::print_log() const {
          std::vector< std::string > lines;

          if (has_validation_log_) {
            boost::split(lines, validation_log_, boost::is_any_of("\r\n"));

            for (std::vector< std::string >::iterator it = lines.begin(); it != lines.end(); ++it) {
              if (it->length() > 0) {
                __gtulu_warn() << "program: " << *it;
              }
            }
          }

          if (has_link_log_) {
            boost::split(lines, link_log_, boost::is_any_of("\r\n"));

            for (std::vector< std::string >::iterator it = lines.begin(); it != lines.end(); ++it) {
              if (it->length() > 0) {
                __gtulu_warn() << "program: " << *it;
              }
            }
          }
        }

        fprg::attribute_vector_t const& dynamic_program_format::get_attributes() {
          return attributes_;
        }

        fprg::uniform_vector_t const& dynamic_program_format::get_uniforms() {
          return uniforms_;
        }

        fprg::uniform_block_vector_t const& dynamic_program_format::get_uniform_blocks() {
          return uniform_blocks_;
        }

        fprg::output_vector_t const& dynamic_program_format::get_outputs() {
          return outputs_;
        }

      } // namespace program
    } // namespace format

  } // namespace internal
} // namespace gtulu

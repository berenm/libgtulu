/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 27 juil. 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMATS_PROGRAM_DYNAMIC_HPP_
#define GTULU_INTERNAL_FORMATS_PROGRAM_DYNAMIC_HPP_

#include "gtulu/internal/constants_fwd.hpp"
#include "gtulu/internal/formats/shader/dynamic.hpp"

#include "gtulu/internal/objects/program/base.hpp"

#include <string>
#include <vector>

namespace gtulu {
  namespace internal {

    namespace gio = ::gtulu::internal::objects;

    namespace formats {
      namespace program {
        struct attribute_info {
            attribute_info(::std::uint32_t id_in,
                           ::std::string name_in,
                           cst::gl_constant_base const& type_in,
                           ::std::uint32_t size_in,
                           location_t location_in) :
              id(id_in), name(name_in), type(type_in), size(size_in), location(location_in) {
            }
            attribute_info(attribute_info const& copy) :
              id(copy.id), name(copy.name), type(copy.type), size(copy.size), location(copy.location) {
            }

            attribute_info& operator=(attribute_info const& copy) {
              id = copy.id;
              name = copy.name;
              type = copy.type;
              size = copy.size;
              location = copy.location;
              return *this;
            }

            ::std::uint32_t id;
            ::std::string name;
            cst::gl_constant_base type;
            ::std::uint32_t size;
            location_t location;
        };
        typedef ::std::vector< attribute_info > attribute_vector_t;

        struct uniform_info {
            uniform_info(::std::uint32_t id_in,
                         ::std::string name_in,
                         cst::gl_constant_base const& type_in,
                         ::std::uint32_t size_in,
                         location_t location_in) :
              id(id_in), name(name_in), type(type_in), size(size_in), location(location_in) {
            }
            uniform_info(attribute_info const& copy) :
              id(copy.id), name(copy.name), type(copy.type), size(copy.size), location(copy.location) {
            }

            uniform_info& operator=(uniform_info const& copy) {
              id = copy.id;
              name = copy.name;
              type = copy.type;
              size = copy.size;
              location = copy.location;
              return *this;
            }

            ::std::uint32_t id;
            ::std::string name;
            cst::gl_constant_base type;
            ::std::uint32_t size;
            location_t location;
        };
        typedef ::std::vector< uniform_info > uniform_vector_t;

        struct uniform_block_info {
            uniform_block_info(::std::uint32_t id_in,
                               ::std::string name_in,
                               cst::gl_constant_base const& type_in,
                               ::std::uint32_t size_in,
                               location_t location_in) :
              id(id_in), name(name_in), type(type_in), size(size_in), location(location_in) {
            }
            uniform_block_info(attribute_info const& copy) :
              id(copy.id), name(copy.name), type(copy.type), size(copy.size), location(copy.location) {
            }

            uniform_block_info& operator=(uniform_block_info const& copy) {
              id = copy.id;
              name = copy.name;
              type = copy.type;
              size = copy.size;
              location = copy.location;
              return *this;
            }

            ::std::uint32_t id;
            ::std::string name;
            cst::gl_constant_base type;
            ::std::uint32_t size;
            location_t location;
        };
        typedef ::std::vector< uniform_block_info > uniform_block_vector_t;

        using fs::output_info;
        using fs::output_vector_t;

        struct dynamic_program_format: virtual public gio::program_base {
            typedef fs::dynamic_shader_format shader_t;
            typedef ::std::vector< shader_t > shader_vector_t;

          protected:
            shader_vector_t shaders_;
            attribute_vector_t attributes_;
            uniform_vector_t uniforms_;
            uniform_block_vector_t uniform_blocks_;
            output_vector_t outputs_;

          protected:
            ::std::uint32_t get_attribute_count();
            ::std::uint32_t get_attribute_max_length();
            attribute_info const get_attribute_info(::std::uint32_t id);

            ::std::uint32_t get_uniform_count();
            ::std::uint32_t get_uniform_max_length();
            uniform_info const get_uniform_info(::std::uint32_t index);

            ::std::uint32_t get_uniform_block_count();
            ::std::uint32_t get_uniform_block_max_length();
            uniform_block_info const get_uniform_block_info(::std::uint32_t index);

            ::std::uint32_t get_outputs_count();
            ::std::uint32_t get_output_location(::std::string name);

            void refresh_outputs();
          public:
            dynamic_program_format();
            void print();

            void attach(shader_t const& shader);
            void detach(shader_t const& shader);

            bool has_link_log_;
            bool has_validation_log_;
            bool has_log() const;

            ::std::string link_log_;
            ::std::string validation_log_;
            void print_log() const;

            virtual void link();
            virtual void validate();

            attribute_vector_t const& get_attributes();
            uniform_vector_t const& get_uniforms();
            uniform_block_vector_t const& get_uniform_blocks();
            output_vector_t const& get_outputs();
        };

      } // namespace program
    } // namespace formats

    namespace gifp = ::gtulu::internal::formats::program;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMATS_PROGRAM_DYNAMIC_HPP_ */

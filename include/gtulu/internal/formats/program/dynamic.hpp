/**
 * @file
 * @date 27 juil. 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMATS_PROGRAM_DYNAMIC_HPP_
#define GTULU_INTERNAL_FORMATS_PROGRAM_DYNAMIC_HPP_

#include "gtulu/opengl.hpp"

#include "gtulu/internal/formats/attribute.hpp"
#include "gtulu/internal/formats/uniform.hpp"
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
            ::boost::uint32_t id;
            ::std::string name;
            faf::gl_constant type;
            ::boost::uint32_t size;
            location_t location;
        };
        typedef ::std::vector< attribute_info > attribute_vector_t;

        struct uniform_info {
            ::boost::uint32_t id;
            ::std::string name;
            fuf::gl_constant type;
            ::boost::uint32_t size;
            location_t location;
        };
        typedef ::std::vector< uniform_info > uniform_vector_t;

        struct uniform_block_info {
            ::boost::uint32_t id;
            ::std::string name;
            faf::gl_constant type;
            ::boost::uint32_t size;
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
            ::boost::uint32_t get_attribute_count();
            ::boost::uint32_t get_attribute_max_length();
            attribute_info get_attribute_info(::boost::uint32_t index);

            ::boost::uint32_t get_uniform_count();
            ::boost::uint32_t get_uniform_max_length();
            uniform_info get_uniform_info(::boost::uint32_t index);

            ::boost::uint32_t get_uniform_block_count();
            ::boost::uint32_t get_uniform_block_max_length();
            uniform_block_info get_uniform_block_info(::boost::uint32_t index);

            ::boost::uint32_t get_outputs_count();
            ::boost::uint32_t get_output_location(::std::string name);

            void refresh_outputs();
          public:
            dynamic_program_format();
            void print();

            void attach(const shader_t& shader);
            void detach(const shader_t& shader);

            bool has_link_log_;
            bool has_validation_log_;
            bool has_log() const;

            ::std::string link_log_;
            ::std::string validation_log_;
            void print_log() const;

            virtual void link();
            virtual void validate();

            const attribute_vector_t& get_attributes();
            const uniform_vector_t& get_uniforms();
            const uniform_block_vector_t& get_uniform_blocks();
            const output_vector_t& get_outputs();
        };
      } // namespace program
    } // namespace formats

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMATS_PROGRAM_DYNAMIC_HPP_ */
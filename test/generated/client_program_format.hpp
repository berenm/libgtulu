
/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_PROGRAM_FORMATCLIENT_HPP_
#define GTULU_PROGRAM_FORMATCLIENT_HPP_

#include "gtulu/namespaces.hpp"
#include <gtulu/opengl.hpp>
#include <gtulu/internal/format/shader/static.hpp>
#include <gtulu/internal/format/program/static.hpp>
#include <gtulu/internal/uniform.hpp>
#include <gtulu/internal/sampler.hpp>
#include <gtulu/internal/attribute.hpp>
#include <gtulu/internal/object/shader.hpp>
#include <gtulu/internal/object/program.hpp>
#include <gtulu/internal/object/vertexarray.hpp>
#include <gtulu/internal/object/framebuffer.hpp>
#include <gtulu/internal/object/framebuffer/attacher.hpp>
#include <gtulu/internal/object/framebuffer/format.hpp>
#include <gtulu/internal/object/texture.hpp>

#include <boost/shared_ptr.hpp>
#include <boost/preprocessor.hpp>

namespace gtulu {
  namespace internal {

    namespace format {
      namespace program {

        class client_program_format: public fprg::static_program_format {
          protected:
            // #template#<define_shader/>

            class client_fragment_shader_shader_format: public fshd::static_shader_format< fshd::type::gl_fragment_shader > {
              protected:
                static char const* source;

              public:
                client_fragment_shader_shader_format() :
                    fshd::static_shader_format< fshd::type::gl_fragment_shader >() {
                  set_source(get_source());

                  shader_base::compile();
                }

                char const* get_source() const {
                  return client_fragment_shader_shader_format::source;
                }
            };

            typedef obj::shader< client_fragment_shader_shader_format > client_fragment_shader_shader_t;
            

            class client_vertex_shader_shader_format: public fshd::static_shader_format< fshd::type::gl_vertex_shader > {
              protected:
                static char const* source;

              public:
                client_vertex_shader_shader_format() :
                    fshd::static_shader_format< fshd::type::gl_vertex_shader >() {
                  set_source(get_source());

                  shader_base::compile();
                }

                char const* get_source() const {
                  return client_vertex_shader_shader_format::source;
                }
            };

            typedef obj::shader< client_vertex_shader_shader_format > client_vertex_shader_shader_t;
            
          public:
            client_program_format() {
              // #template#<declare_shader/>

              client_fragment_shader_shader_t client_fragment_shader_shader;
              attach(client_fragment_shader_shader);
              

              client_vertex_shader_shader_t client_vertex_shader_shader;
              attach(client_vertex_shader_shader);
              

              link();
            }

            // #template#<uniform/>

            // #template#<uniform_sampler/>

            // #template#<uniform_array/>

            template< typename DrawableType = obj::drawable const& >
            struct framebuffer_format: public obj::framebuffer_base, public fbf::framebuffer_format_base< DrawableType > {
                // #template#<output/>

                // #template#<output_array/>
            };

            typedef obj::framebuffer< framebuffer_format< > > framebuffer_t;
            boost::shared_ptr< framebuffer_t > new_framebuffer() const {
              return boost::shared_ptr< framebuffer_t >(new framebuffer_t());
            }

            typedef obj::default_framebuffer< framebuffer_format< const obj::default_drawable > > default_framebuffer_t;
            boost::shared_ptr< default_framebuffer_t > get_default_framebuffer() const {
              return boost::shared_ptr< default_framebuffer_t >(new default_framebuffer_t());
            }

            struct vertex_array_format: public obj::vertexarray_base, public drw::drawable {
                template< typename DrawingMode = drw::mode::gl_triangles >
                inline void draw(obj::program< client_program_format > const& program_in,
                                 std::uint32_t const start_in,
                                 std::uint32_t const count_in,
                                 std::uint32_t const instance_count_in = 1) {
                  draw< DrawingMode >(program_in,
                                      *program_in.get_default_framebuffer(),
                                      start_in,
                                      count_in,
                                      instance_count_in);
                }

                template< typename DrawingMode = drw::mode::gl_triangles >
                inline void draw_multiple(obj::program< client_program_format > const& program_in,
                                          std::uint32_t const starts_in[],
                                          std::uint32_t const counts_in[],
                                          std::size_t const count_in) {
                  draw_multiple< DrawingMode >(program_in,
                                               *program_in.get_default_framebuffer(),
                                               starts_in,
                                               counts_in,
                                               count_in);
                }

                template< typename DrawingMode = drw::mode::gl_triangles, typename BufferFormat >
                inline void draw(obj::program< client_program_format > const& program_in,
                                 obj::buffer< BufferFormat > const& buffer_in,
                                 std::uint32_t const count_in,
                                 std::uint32_t const offset_in = 0,
                                 std::uint32_t const instance_count_in = 1,
                                 std::uint32_t const base_vertex_in = 0) {
                  draw< DrawingMode >(program_in,
                                      *program_in.get_default_framebuffer(),
                                      buffer_in,
                                      count_in,
                                      offset_in,
                                      instance_count_in,
                                      base_vertex_in);
                }

                template< typename DrawingMode = drw::mode::gl_triangles, typename BufferFormat >
                inline void draw_range(obj::program< client_program_format > const& program_in,
                                       obj::buffer< BufferFormat > const& buffer_in,
                                       std::uint32_t const count_in,
                                       std::uint32_t const min_index_in,
                                       std::uint32_t const max_index_in,
                                       std::uint32_t const offset_in = 0,
                                       std::uint32_t const base_vertex_in = 0) {
                  draw_range< DrawingMode >(program_in,
                                            *program_in.get_default_framebuffer(),
                                            buffer_in,
                                            count_in,
                                            min_index_in,
                                            max_index_in,
                                            offset_in,
                                            base_vertex_in);
                }

                template< typename DrawingMode = drw::mode::gl_triangles, typename BufferFormat >
                inline void draw_multiple(obj::program< client_program_format > const& program_in,
                                          obj::buffer< BufferFormat > const& buffer_in,
                                          std::uint32_t const counts_in[],
                                          std::uint32_t const offsets_in[],
                                          std::size_t const count_in) {
                  draw_multiple< DrawingMode >(program_in,
                                               *program_in.get_default_framebuffer(),
                                               buffer_in,
                                               counts_in,
                                               offsets_in,
                                               count_in);
                }

                template< typename DrawingMode = drw::mode::gl_triangles >
                inline void draw(obj::program< client_program_format > const& program_in,
                                 obj::framebuffer_base const& framebuffer_in,
                                 std::uint32_t const start_in,
                                 std::uint32_t const count_in,
                                 std::uint32_t const instance_count_in = 1) {
                  program_in.bind();
                  framebuffer_in.bind< fbf::draw_framebuffer_slot >();
                  obj::vertexarray_base::bind();
                  drw::drawable::draw< DrawingMode >(start_in, count_in, instance_count_in);
                }

                template< typename DrawingMode = drw::mode::gl_triangles >
                inline void draw_multiple(obj::program< client_program_format > const& program_in,
                                          obj::framebuffer_base const& framebuffer_in,
                                          std::uint32_t const starts_in[],
                                          std::uint32_t const counts_in[],
                                          std::size_t const count_in) {
                  program_in.bind();
                  framebuffer_in.bind< fbf::draw_framebuffer_slot >();
                  obj::vertexarray_base::bind();
                  drw::drawable::draw< DrawingMode >(starts_in, counts_in, count_in);
                }

                template< typename DrawingMode = drw::mode::gl_triangles, typename BufferFormat >
                inline void draw(obj::program< client_program_format > const& program_in,
                                 obj::framebuffer_base const& framebuffer_in,
                                 obj::buffer< BufferFormat > const& buffer_in,
                                 std::uint32_t const count_in,
                                 std::uint32_t const offset_in = 0,
                                 std::uint32_t const instance_count_in = 1,
                                 std::uint32_t const base_vertex_in = 0) {
                  program_in.bind();
                  framebuffer_in.bind< fbf::draw_framebuffer_slot >();
                  obj::vertexarray_base::bind();
                  drw::drawable::draw< DrawingMode >(buffer_in, count_in, offset_in, instance_count_in, base_vertex_in);
                }

                template< typename DrawingMode = drw::mode::gl_triangles, typename BufferFormat >
                inline void draw_range(obj::program< client_program_format > const& program_in,
                                       obj::framebuffer_base const& framebuffer_in,
                                       obj::buffer< BufferFormat > const& buffer_in,
                                       std::uint32_t const count_in,
                                       std::uint32_t const min_index_in,
                                       std::uint32_t const max_index_in,
                                       std::uint32_t const offset_in = 0,
                                       std::uint32_t const base_vertex_in = 0) {
                  program_in.bind();
                  framebuffer_in.bind< fbf::draw_framebuffer_slot >();
                  obj::vertexarray_base::bind();
                  drw::drawable::draw< DrawingMode >(buffer_in,
                                                     count_in,
                                                     min_index_in,
                                                     max_index_in,
                                                     offset_in,
                                                     base_vertex_in);
                }

                template< typename DrawingMode = drw::mode::gl_triangles, typename BufferFormat >
                inline void draw_multiple(obj::program< client_program_format > const& program_in,
                                          obj::framebuffer_base const& framebuffer_in,
                                          obj::buffer< BufferFormat > const& buffer_in,
                                          std::uint32_t const counts_in[],
                                          std::uint32_t const offsets_in[],
                                          std::size_t const count_in) {
                  program_in.bind();
                  framebuffer_in.bind< fbf::draw_framebuffer_slot >();
                  obj::vertexarray_base::bind();
                  drw::drawable::draw< DrawingMode >(buffer_in, counts_in, offsets_in, count_in);
                }

                // #template#<attribute/>

                // #template#<attribute_array/>
            };

            typedef obj::vertexarray< vertex_array_format > vertexarray_t;
            boost::shared_ptr< vertexarray_t > new_vertexarray() {
              return boost::shared_ptr< vertexarray_t >(new vertexarray_t());
            }
        };

      } // namespace program
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_PROGRAM_FORMATCLIENT_HPP_ */

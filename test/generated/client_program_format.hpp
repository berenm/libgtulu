
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

            typedef unf::gl_bool::binder use_tile_binder_t;
            typedef unf::gl_bool::value_type use_tile_value_t;

            void set_use_tile(BOOST_PP_ENUM_PARAMS(1, use_tile_value_t const use_tile_in)) {
              obj::program_base::bind();
              use_tile_binder_t::bind(4, BOOST_PP_ENUM_PARAMS(1, use_tile_in));
            }
            

            // #template#<uniform_sampler/>

            typedef smp::gl_sampler_3d::binder tilesets_binder_t;
            typedef smp::gl_sampler_3d::value_type tilesets_value_t;

            template< typename TextureFormat >
            void set_tilesets(obj::texture< TextureFormat > const& value_in) {
              obj::program_base::bind();
              tilesets_binder_t::bind(3, value_in);
            }
            

            typedef smp::gl_unsigned_int_sampler_2d::binder tiles_color_binder_t;
            typedef smp::gl_unsigned_int_sampler_2d::value_type tiles_color_value_t;

            template< typename TextureFormat >
            void set_tiles_color(obj::texture< TextureFormat > const& value_in) {
              obj::program_base::bind();
              tiles_color_binder_t::bind(2, value_in);
            }
            

            typedef smp::gl_unsigned_int_sampler_2d::binder tiles_binder_t;
            typedef smp::gl_unsigned_int_sampler_2d::value_type tiles_value_t;

            template< typename TextureFormat >
            void set_tiles(obj::texture< TextureFormat > const& value_in) {
              obj::program_base::bind();
              tiles_binder_t::bind(1, value_in);
            }
            

            typedef smp::gl_unsigned_int_sampler_2d::binder characters_binder_t;
            typedef smp::gl_unsigned_int_sampler_2d::value_type characters_value_t;

            template< typename TextureFormat >
            void set_characters(obj::texture< TextureFormat > const& value_in) {
              obj::program_base::bind();
              characters_binder_t::bind(0, value_in);
            }
            

            // #template#<uniform_array/>

            template< typename DrawableType = obj::drawable const& >
            struct framebuffer_format: public obj::framebuffer_base, public fbf::framebuffer_format_base< DrawableType > {
                // #template#<output/>

                template< typename TemporaryFramebufferSlot = fbf::draw_framebuffer_slot, typename NewDrawableType >
                void set_output_image(NewDrawableType const& drawable_in) {
                  obj::framebuffer_base::bind< TemporaryFramebufferSlot >();
                  fbf::framebuffer_format_base< DrawableType >::template set<
                      typename TemporaryFramebufferSlot::slot_type >(0, drawable_in);
                }
                

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

                typedef att::gl_float_vec2::binder position_binder_t;
                typedef att::gl_float_vec2::buffer_binder position_buffer_binder_t;

                template< typename DataFormat >
                void set_position(BOOST_PP_ENUM_PARAMS(2, DataFormat const position_in)) {
                  obj::vertexarray_base::bind();
                  position_binder_t::bind(0, BOOST_PP_ENUM_PARAMS(2, position_in));
                }
                template< typename BufferFormat >
                void set_position(obj::buffer< BufferFormat > const& buffer_in,
                                   std::uint32_t const offset_in = 0,
                                   std::uint32_t const stride_in = 0) {
                  obj::vertexarray_base::bind();
                  position_buffer_binder_t::bind(0, buffer_in, offset_in, stride_in);
                }
                template< typename BufferFormat >
                void set_position_normalized(obj::buffer< BufferFormat > const & buffer_in,
                                              std::uint32_t const offset_in = 0,
                                              std::uint32_t const stride_in = 0) {
                  obj::vertexarray_base::bind();
                  position_buffer_binder_t::bind < fcmn::normalization::normalized
                      > (0, buffer_in, offset_in, stride_in);
                }
                template< typename BufferFormat >
                void set_position_gbra(obj::buffer< BufferFormat > const & buffer_in,
                                        std::uint32_t const offset_in = 0,
                                        std::uint32_t const stride_in = 0) {
                  obj::vertexarray_base::bind();
                  position_buffer_binder_t::bind < fcmn::normalization::none, fcmn::order::reverse
                      > (0, buffer_in, offset_in, stride_in);
                }
                

                typedef att::gl_float_vec2::binder coordinates_binder_t;
                typedef att::gl_float_vec2::buffer_binder coordinates_buffer_binder_t;

                template< typename DataFormat >
                void set_coordinates(BOOST_PP_ENUM_PARAMS(2, DataFormat const coordinates_in)) {
                  obj::vertexarray_base::bind();
                  coordinates_binder_t::bind(1, BOOST_PP_ENUM_PARAMS(2, coordinates_in));
                }
                template< typename BufferFormat >
                void set_coordinates(obj::buffer< BufferFormat > const& buffer_in,
                                   std::uint32_t const offset_in = 0,
                                   std::uint32_t const stride_in = 0) {
                  obj::vertexarray_base::bind();
                  coordinates_buffer_binder_t::bind(1, buffer_in, offset_in, stride_in);
                }
                template< typename BufferFormat >
                void set_coordinates_normalized(obj::buffer< BufferFormat > const & buffer_in,
                                              std::uint32_t const offset_in = 0,
                                              std::uint32_t const stride_in = 0) {
                  obj::vertexarray_base::bind();
                  coordinates_buffer_binder_t::bind < fcmn::normalization::normalized
                      > (1, buffer_in, offset_in, stride_in);
                }
                template< typename BufferFormat >
                void set_coordinates_gbra(obj::buffer< BufferFormat > const & buffer_in,
                                        std::uint32_t const offset_in = 0,
                                        std::uint32_t const stride_in = 0) {
                  obj::vertexarray_base::bind();
                  coordinates_buffer_binder_t::bind < fcmn::normalization::none, fcmn::order::reverse
                      > (1, buffer_in, offset_in, stride_in);
                }
                

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

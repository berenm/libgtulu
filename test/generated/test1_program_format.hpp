/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_PROGRAM_FORMATTEST1_HPP_
#define GTULU_PROGRAM_FORMATTEST1_HPP_

#include <gtulu/opengl.hpp>
#include <gtulu/internal/format/shader/static.hpp>
#include <gtulu/internal/format/program/static.hpp>
#include <gtulu/internal/uniform.hpp>
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

        class test1_program_format: public fp::static_program_format {
          protected:
            // #template#<define_shader/>

            class test1_fragment_shader_shader_format: public fs::static_shader_format< fst::gl_fragment_shader > {
              protected:
                static char const* source;

              public:
                test1_fragment_shader_shader_format() :
                    fs::static_shader_format< fst::gl_fragment_shader >() {
                  set_source(get_source());

                  shader_base::compile();
                }

                char const* get_source() const {
                  return test1_fragment_shader_shader_format::source;
                }
            };

            typedef gio::shader< test1_fragment_shader_shader_format > test1_fragment_shader_shader_t;

            class test1_vertex_shader_shader_format: public fs::static_shader_format< fst::gl_vertex_shader > {
              protected:
                static char const* source;

              public:
                test1_vertex_shader_shader_format() :
                    fs::static_shader_format< fst::gl_vertex_shader >() {
                  set_source(get_source());

                  shader_base::compile();
                }

                char const* get_source() const {
                  return test1_vertex_shader_shader_format::source;
                }
            };

            typedef gio::shader< test1_vertex_shader_shader_format > test1_vertex_shader_shader_t;

          public:
            test1_program_format() {
              // #template#<declare_shader/>

              test1_fragment_shader_shader_t test1_fragment_shader_shader;
              attach(test1_fragment_shader_shader);

              test1_vertex_shader_shader_t test1_vertex_shader_shader;
              attach(test1_vertex_shader_shader);

              link();
            }

            // #template#<uniform/>

            // #template#<uniform_sampler/>

            typedef giu::gl_sampler_2d::binder background_binder_t;
            typedef giu::gl_sampler_2d::value_type background_value_t;

            template< typename texture_format_t >
            void set_background(gio::texture< texture_format_t > const& value_in) {
              gio::program_base::bind();
              background_binder_t::bind(0, value_in);
            }

            // #template#<uniform_array/>

            template< typename drawable_type_t = gio::drawable const& >
            struct framebuffer_format: public gio::framebuffer_base, public gif::framebuffer_format_base<
                                           drawable_type_t > {
                // #template#<output/>

                template< typename temporary_framebuffer_slot_t = gif::draw_framebuffer_slot,
                    typename new_drawable_type_t >
                void set_color(new_drawable_type_t const& drawable_in) {
                  gio::framebuffer_base::bind< temporary_framebuffer_slot_t >();
                  gif::framebuffer_format_base< drawable_type_t >::template set<
                      typename temporary_framebuffer_slot_t::slot_type >(0, drawable_in);
                }

                // #template#<output_array/>
            };

            typedef gio::framebuffer< framebuffer_format< > > framebuffer_t;
            ::boost::shared_ptr< framebuffer_t > new_framebuffer() const {
              return ::boost::shared_ptr< framebuffer_t >(new framebuffer_t());
            }

            typedef gio::default_framebuffer< framebuffer_format< const gio::default_drawable > > default_framebuffer_t;
            ::boost::shared_ptr< default_framebuffer_t > get_default_framebuffer() const {
              return ::boost::shared_ptr< default_framebuffer_t >(new default_framebuffer_t());
            }

            struct vertex_array_format: public gio::vertexarray_base, public gid::drawable {
                template< typename drawing_mode_t = gidm::gl_triangles >
                inline void draw(gio::program< test1_program_format > const& program_in,
                                 ::std::uint32_t const start_in,
                                 ::std::uint32_t const count_in,
                                 ::std::uint32_t const instance_count_in = 1) {
                  draw< drawing_mode_t >(program_in,
                                         *program_in.get_default_framebuffer(),
                                         start_in,
                                         count_in,
                                         instance_count_in);
                }

                template< typename drawing_mode_t = gidm::gl_triangles >
                inline void draw_multiple(gio::program< test1_program_format > const& program_in,
                                          ::std::uint32_t const starts_in[],
                                          ::std::uint32_t const counts_in[],
                                          ::std::size_t const count_in) {
                  draw_multiple< drawing_mode_t >(program_in,
                                                  *program_in.get_default_framebuffer(),
                                                  starts_in,
                                                  counts_in,
                                                  count_in);
                }

                template< typename drawing_mode_t = gidm::gl_triangles, typename buffer_format_t,
                    typename buffer_usage_t >
                inline void draw(gio::program< test1_program_format > const& program_in,
                                 gio::buffer< buffer_format_t, buffer_usage_t > const& buffer_in
                                 ,
                                 ::std::uint32_t const count_in
                                 ,
                                 ::std::uint32_t const offset_in = 0
                                 ,
                                 ::std::uint32_t const instance_count_in = 1
                                 ,
                                 ::std::uint32_t const base_vertex_in = 0) {
                  draw< drawing_mode_t >(program_in,
                                         *program_in.get_default_framebuffer(),
                                         buffer_in,
                                         count_in,
                                         offset_in,
                                         instance_count_in,
                                         base_vertex_in);
                }

                template< typename drawing_mode_t = gidm::gl_triangles, typename buffer_format_t,
                    typename buffer_usage_t >
                inline void draw_range(gio::program< test1_program_format > const& program_in,
                                       gio::buffer< buffer_format_t, buffer_usage_t > const& buffer_in
                                       ,
                                       ::std::uint32_t const count_in
                                       ,
                                       ::std::uint32_t const min_index_in
                                       ,
                                       ::std::uint32_t const max_index_in
                                       ,
                                       ::std::uint32_t const offset_in = 0
                                       ,
                                       ::std::uint32_t const base_vertex_in = 0) {
                  draw_range< drawing_mode_t >(program_in,
                                               *program_in.get_default_framebuffer(),
                                               buffer_in,
                                               count_in,
                                               min_index_in,
                                               max_index_in,
                                               offset_in,
                                               base_vertex_in);
                }

                template< typename drawing_mode_t = gidm::gl_triangles, typename buffer_format_t,
                    typename buffer_usage_t >
                inline void draw_multiple(gio::program< test1_program_format > const& program_in,
                                          gio::buffer< buffer_format_t, buffer_usage_t > const& buffer_in
                                          ,
                                          ::std::uint32_t const counts_in[]
                                          ,
                                          ::std::uint32_t const offsets_in[]
                                          ,
                                          ::std::size_t const count_in) {
                  draw_multiple< drawing_mode_t >(program_in,
                                                  *program_in.get_default_framebuffer(),
                                                  buffer_in,
                                                  counts_in,
                                                  offsets_in,
                                                  count_in);
                }

                template< typename drawing_mode_t = gidm::gl_triangles >
                inline void draw(gio::program< test1_program_format > const& program_in,
                                 gio::framebuffer_base const& framebuffer_in,
                                 ::std::uint32_t const start_in,
                                 ::std::uint32_t const count_in,
                                 ::std::uint32_t const instance_count_in = 1) {
                  program_in.bind();
                  framebuffer_in.bind< gif::draw_framebuffer_slot >();
                  gio::vertexarray_base::bind();
                  gid::drawable::draw< drawing_mode_t >(start_in, count_in, instance_count_in);
                }

                template< typename drawing_mode_t = gidm::gl_triangles >
                inline void draw_multiple(gio::program< test1_program_format > const& program_in,
                                          gio::framebuffer_base const& framebuffer_in,
                                          ::std::uint32_t const starts_in[],
                                          ::std::uint32_t const counts_in[],
                                          ::std::size_t const count_in) {
                  program_in.bind();
                  framebuffer_in.bind< gif::draw_framebuffer_slot >();
                  gio::vertexarray_base::bind();
                  gid::drawable::draw< drawing_mode_t >(starts_in, counts_in, count_in);
                }

                template< typename drawing_mode_t = gidm::gl_triangles, typename buffer_format_t,
                    typename buffer_usage_t >
                inline void draw(gio::program< test1_program_format > const& program_in,
                                 gio::framebuffer_base const& framebuffer_in,
                                 gio::buffer< buffer_format_t, buffer_usage_t > const& buffer_in
                                 ,
                                 ::std::uint32_t const count_in
                                 ,
                                 ::std::uint32_t const offset_in = 0
                                 ,
                                 ::std::uint32_t const instance_count_in = 1
                                 ,
                                 ::std::uint32_t const base_vertex_in = 0) {
                  program_in.bind();
                  framebuffer_in.bind< gif::draw_framebuffer_slot >();
                  gio::vertexarray_base::bind();
                  gid::drawable::draw< drawing_mode_t >(buffer_in,
                                                        count_in,
                                                        offset_in,
                                                        instance_count_in,
                                                        base_vertex_in);
                }

                template< typename drawing_mode_t = gidm::gl_triangles, typename buffer_format_t,
                    typename buffer_usage_t >
                inline void draw_range(gio::program< test1_program_format > const& program_in,
                                       gio::framebuffer_base const& framebuffer_in,
                                       gio::buffer< buffer_format_t, buffer_usage_t > const& buffer_in
                                       ,
                                       ::std::uint32_t const count_in
                                       ,
                                       ::std::uint32_t const min_index_in
                                       ,
                                       ::std::uint32_t const max_index_in
                                       ,
                                       ::std::uint32_t const offset_in = 0
                                       ,
                                       ::std::uint32_t const base_vertex_in = 0) {
                  program_in.bind();
                  framebuffer_in.bind< gif::draw_framebuffer_slot >();
                  gio::vertexarray_base::bind();
                  gid::drawable::draw< drawing_mode_t >(buffer_in,
                                                        count_in,
                                                        min_index_in,
                                                        max_index_in,
                                                        offset_in,
                                                        base_vertex_in);
                }

                template< typename drawing_mode_t = gidm::gl_triangles, typename buffer_format_t,
                    typename buffer_usage_t >
                inline void draw_multiple(gio::program< test1_program_format > const& program_in,
                                          gio::framebuffer_base const& framebuffer_in,
                                          gio::buffer< buffer_format_t, buffer_usage_t > const& buffer_in
                                          ,
                                          ::std::uint32_t const counts_in[]
                                          ,
                                          ::std::uint32_t const offsets_in[]
                                          ,
                                          ::std::size_t const count_in) {
                  program_in.bind();
                  framebuffer_in.bind< gif::draw_framebuffer_slot >();
                  gio::vertexarray_base::bind();
                  gid::drawable::draw< drawing_mode_t >(buffer_in, counts_in, offsets_in, count_in);
                }

                // #template#<attribute/>

                typedef gia::gl_float_vec2::binder texture_position_binder_t;
                typedef gia::gl_float_vec2::value_type texture_position_value_t;
                typedef gia::gl_float_vec2::buffer_binder texture_position_buffer_binder_t;

                void set_texture_position(BOOST_PP_ENUM_PARAMS(2, texture_position_value_t const texture_position_in)) {
                  gio::vertexarray_base::bind();
                  texture_position_binder_t::bind(1, BOOST_PP_ENUM_PARAMS(2, texture_position_in));
                }
                template< typename buffer_format_t, typename buffer_usage_t >
                void set_texture_position(gio::buffer< buffer_format_t, buffer_usage_t > const& buffer_in,
                ::std::uint32_t const offset_in = 0
                                          ,
                                          ::std::uint32_t const stride_in = 0) {
                  gio::vertexarray_base::bind();
                  texture_position_buffer_binder_t::bind(1, buffer_in, offset_in, stride_in);
                }
                template< typename buffer_format_t, typename buffer_usage_t >
                void set_texture_position_normalized(gio::buffer< buffer_format_t, buffer_usage_t > const & buffer_in,
                ::std::uint32_t const offset_in = 0
                                                     ,
                                                     ::std::uint32_t const stride_in = 0) {
                  gio::vertexarray_base::bind();
                  texture_position_buffer_binder_t::bind< fdn::normalized >(1, buffer_in, offset_in, stride_in);
                }
                template< typename buffer_format_t, typename buffer_usage_t >
                void set_texture_position_gbra(gio::buffer< buffer_format_t, buffer_usage_t > const & buffer_in,
                ::std::uint32_t const offset_in = 0
                                               ,
                                               ::std::uint32_t const stride_in = 0) {
                  gio::vertexarray_base::bind();
                  texture_position_buffer_binder_t::bind< fdn::normal, fdo::reverse >(1,
                                                                                      buffer_in,
                                                                                      offset_in,
                                                                                      stride_in);
                }

                typedef gia::gl_float_vec2::binder position_binder_t;
                typedef gia::gl_float_vec2::value_type position_value_t;
                typedef gia::gl_float_vec2::buffer_binder position_buffer_binder_t;

                void set_position(BOOST_PP_ENUM_PARAMS(2, position_value_t const position_in)) {
                  gio::vertexarray_base::bind();
                  position_binder_t::bind(0, BOOST_PP_ENUM_PARAMS(2, position_in));
                }
                template< typename buffer_format_t, typename buffer_usage_t >
                void set_position(gio::buffer< buffer_format_t, buffer_usage_t > const& buffer_in,
                ::std::uint32_t const offset_in = 0
                                  ,
                                  ::std::uint32_t const stride_in = 0) {
                  gio::vertexarray_base::bind();
                  position_buffer_binder_t::bind(0, buffer_in, offset_in, stride_in);
                }
                template< typename buffer_format_t, typename buffer_usage_t >
                void set_position_normalized(gio::buffer< buffer_format_t, buffer_usage_t > const & buffer_in,
                ::std::uint32_t const offset_in = 0
                                             ,
                                             ::std::uint32_t const stride_in = 0) {
                  gio::vertexarray_base::bind();
                  position_buffer_binder_t::bind< fdn::normalized >(0, buffer_in, offset_in, stride_in);
                }
                template< typename buffer_format_t, typename buffer_usage_t >
                void set_position_gbra(gio::buffer< buffer_format_t, buffer_usage_t > const & buffer_in,
                ::std::uint32_t const offset_in = 0
                                       ,
                                       ::std::uint32_t const stride_in = 0) {
                  gio::vertexarray_base::bind();
                  position_buffer_binder_t::bind< fdn::normal, fdo::reverse >(0, buffer_in, offset_in, stride_in);
                }

                // #template#<attribute_array/>
            };

            typedef gio::vertexarray< vertex_array_format > vertexarray_t;
            ::boost::shared_ptr< vertexarray_t > new_vertexarray() {
              return ::boost::shared_ptr< vertexarray_t >(new vertexarray_t());
            }
        };

      } // namespace program
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_PROGRAM_FORMATTEST1_HPP_ */



/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_PROGRAM_FORMATTEST3_HPP_
#define GTULU_PROGRAM_FORMATTEST3_HPP_

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

        class test3_program_format : public fprg::static_program_format {
          protected:
            // #template#<define_shader/>

            class test3_fragment_shader_shader_format : public fshd::static_shader_format< fshd::type::gl_fragment_shader > {
              protected:
                static char const* source;

              public:
                test3_fragment_shader_shader_format() :
                  fshd::static_shader_format< fshd::type::gl_fragment_shader >() {
                  set_source(get_source());

                  shader_base::compile();
                }

                char const* get_source() const {
                  return test3_fragment_shader_shader_format::source;
                }

            };

            typedef obj::shader< test3_fragment_shader_shader_format > test3_fragment_shader_shader_t;

            

            class test3_vertex_shader_shader_format : public fshd::static_shader_format< fshd::type::gl_vertex_shader > {
              protected:
                static char const* source;

              public:
                test3_vertex_shader_shader_format() :
                  fshd::static_shader_format< fshd::type::gl_vertex_shader >() {
                  set_source(get_source());

                  shader_base::compile();
                }

                char const* get_source() const {
                  return test3_vertex_shader_shader_format::source;
                }

            };

            typedef obj::shader< test3_vertex_shader_shader_format > test3_vertex_shader_shader_t;

            

          public:
            test3_program_format() {
              // #template#<declare_shader/>

              test3_fragment_shader_shader_t test3_fragment_shader_shader;

              attach(test3_fragment_shader_shader);

              

              test3_vertex_shader_shader_t test3_vertex_shader_shader;

              attach(test3_vertex_shader_shader);

              

              link();
            }

            // #template#<uniform/>

            // #template#<uniform_sampler/>

            // #template#<uniform_array/>

            template< typename DrawableType = obj::drawable const& >
            struct framebuffer_format : public obj::framebuffer_base, public fbf::framebuffer_format_base< DrawableType > {
              // #template#<output/>

              template< typename TemporaryFramebufferSlot = fbf::draw_framebuffer_slot, typename NewDrawableType >
              void set_color(NewDrawableType const& drawable) {
                obj::framebuffer_base::bind< TemporaryFramebufferSlot >();
                fbf::framebuffer_format_base< DrawableType >::template set<
                  typename TemporaryFramebufferSlot::slot_type >(0, drawable);
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

            struct vertex_array_format : public obj::vertexarray_base, public drw::drawable {
              template< typename DrawingMode = drw::mode::gl_triangles >
              inline void draw(obj::program< test3_program_format > const& program,
                               std::uint32_t const                                start,
                               std::uint32_t const                                count,
                               std::uint32_t const                                instance_count=1) {
                draw< DrawingMode >(program,
                                    *program.get_default_framebuffer(),
                                    start,
                                    count,
                                    instance_count);
              }

              template< typename DrawingMode = drw::mode::gl_triangles >
              inline void draw_multiple(obj::program< test3_program_format > const& program,
                                        std::uint32_t const                                starts[],
                                        std::uint32_t const                                counts[],
                                        std::size_t const                                  count) {
                draw_multiple< DrawingMode >(program,
                                             *program.get_default_framebuffer(),
                                             starts,
                                             counts,
                                             count);
              }

              template< typename DrawingMode = drw::mode::gl_triangles, typename BufferFormat >
              inline void draw(obj::program< test3_program_format > const& program,
                               obj::buffer< BufferFormat > const&                 buffer,
                               std::uint32_t const                                count,
                               std::uint32_t const                                offset=0,
                               std::uint32_t const                                instance_count=1,
                               std::uint32_t const                                base_vertex=0) {
                draw< DrawingMode >(program,
                                    *program.get_default_framebuffer(),
                                    buffer,
                                    count,
                                    offset,
                                    instance_count,
                                    base_vertex);
              }

              template< typename DrawingMode = drw::mode::gl_triangles, typename BufferFormat >
              inline void draw_range(obj::program< test3_program_format > const& program,
                                     obj::buffer< BufferFormat > const&                 buffer,
                                     std::uint32_t const                                count,
                                     std::uint32_t const                                min_index,
                                     std::uint32_t const                                max_index,
                                     std::uint32_t const                                offset=0,
                                     std::uint32_t const                                base_vertex=0) {
                draw_range< DrawingMode >(program,
                                          *program.get_default_framebuffer(),
                                          buffer,
                                          count,
                                          min_index,
                                          max_index,
                                          offset,
                                          base_vertex);
              }

              template< typename DrawingMode = drw::mode::gl_triangles, typename BufferFormat >
              inline void draw_multiple(obj::program< test3_program_format > const& program,
                                        obj::buffer< BufferFormat > const&                 buffer,
                                        std::uint32_t const                                counts[],
                                        std::uint32_t const                                offsets[],
                                        std::size_t const                                  count) {
                draw_multiple< DrawingMode >(program,
                                             *program.get_default_framebuffer(),
                                             buffer,
                                             counts,
                                             offsets,
                                             count);
              }

              template< typename DrawingMode = drw::mode::gl_triangles >
              inline void draw(obj::program< test3_program_format > const& program,
                               obj::framebuffer_base const&                       framebuffer,
                               std::uint32_t const                                start,
                               std::uint32_t const                                count,
                               std::uint32_t const                                instance_count=1) {
                program.bind();
                framebuffer.bind< fbf::draw_framebuffer_slot >();
                obj::vertexarray_base::bind();
                drw::drawable::draw< DrawingMode >(start, count, instance_count);
              }

              template< typename DrawingMode = drw::mode::gl_triangles >
              inline void draw_multiple(obj::program< test3_program_format > const& program,
                                        obj::framebuffer_base const&                       framebuffer,
                                        std::uint32_t const                                starts[],
                                        std::uint32_t const                                counts[],
                                        std::size_t const                                  count) {
                program.bind();
                framebuffer.bind< fbf::draw_framebuffer_slot >();
                obj::vertexarray_base::bind();
                drw::drawable::draw< DrawingMode >(starts, counts, count);
              }

              template< typename DrawingMode = drw::mode::gl_triangles, typename BufferFormat >
              inline void draw(obj::program< test3_program_format > const& program,
                               obj::framebuffer_base const&                       framebuffer,
                               obj::buffer< BufferFormat > const&                 buffer,
                               std::uint32_t const                                count,
                               std::uint32_t const                                offset=0,
                               std::uint32_t const                                instance_count=1,
                               std::uint32_t const                                base_vertex=0) {
                program.bind();
                framebuffer.bind< fbf::draw_framebuffer_slot >();
                obj::vertexarray_base::bind();
                drw::drawable::draw< DrawingMode >(buffer, count, offset, instance_count, base_vertex);
              }

              template< typename DrawingMode = drw::mode::gl_triangles, typename BufferFormat >
              inline void draw_range(obj::program< test3_program_format > const& program,
                                     obj::framebuffer_base const&                       framebuffer,
                                     obj::buffer< BufferFormat > const&                 buffer,
                                     std::uint32_t const                                count,
                                     std::uint32_t const                                min_index,
                                     std::uint32_t const                                max_index,
                                     std::uint32_t const                                offset=0,
                                     std::uint32_t const                                base_vertex=0) {
                program.bind();
                framebuffer.bind< fbf::draw_framebuffer_slot >();
                obj::vertexarray_base::bind();
                drw::drawable::draw< DrawingMode >(buffer,
                                                   count,
                                                   min_index,
                                                   max_index,
                                                   offset,
                                                   base_vertex);
              }

              template< typename DrawingMode = drw::mode::gl_triangles, typename BufferFormat >
              inline void draw_multiple(obj::program< test3_program_format > const& program,
                                        obj::framebuffer_base const&                       framebuffer,
                                        obj::buffer< BufferFormat > const&                 buffer,
                                        std::uint32_t const                                counts[],
                                        std::uint32_t const                                offsets[],
                                        std::size_t const                                  count) {
                program.bind();
                framebuffer.bind< fbf::draw_framebuffer_slot >();
                obj::vertexarray_base::bind();
                drw::drawable::draw< DrawingMode >(buffer, counts, offsets, count);
              }

              // #template#<attribute/>

              typedef att::gl_float_vec2::binder        position_binder_t;
              typedef att::gl_float_vec2::buffer_binder position_buffer_binder_t;

              template< typename DataFormat >
              void set_position(BOOST_PP_ENUM_PARAMS(2, DataFormat const position)) {
                obj::vertexarray_base::bind();
                position_binder_t::bind(0, BOOST_PP_ENUM_PARAMS(2, position));
              }

              template< typename BufferFormat >
              void set_position(obj::buffer< BufferFormat > const& buffer,
                                 std::uint32_t const                offset=0,
                                 std::uint32_t const                stride=0) {
                obj::vertexarray_base::bind();
                position_buffer_binder_t::bind(0, buffer, offset, stride);
              }

              template< typename BufferFormat >
              void set_position_normalized(obj::buffer< BufferFormat > const& buffer,
                                            std::uint32_t const                offset=0,
                                            std::uint32_t const                stride=0) {
                obj::vertexarray_base::bind();
                position_buffer_binder_t::bind< fcmn::normalization::normalized
                                                 >(0, buffer, offset, stride);
              }

              template< typename BufferFormat >
              void set_position_gbra(obj::buffer< BufferFormat > const& buffer,
                                      std::uint32_t const                offset=0,
                                      std::uint32_t const                stride=0) {
                obj::vertexarray_base::bind();
                position_buffer_binder_t::bind< fcmn::normalization::none, fcmn::order::reverse
                                                 >(0, buffer, offset, stride);
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

#endif /* GTULU_PROGRAM_FORMATTEST3_HPP_ */


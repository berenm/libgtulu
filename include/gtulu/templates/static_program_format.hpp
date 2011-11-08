// #template#<format>_program_tpl,_author_tpl,_date_tpl
/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_PROGRAM_FORMAT_program_upper_tpl_HPP_
#define GTULU_PROGRAM_FORMAT_program_upper_tpl_HPP_

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

        class _program_tpl_program_format: public fprg::static_program_format {
          protected:
            // #template#<define_shader>_shader_tpl,_type_tpl
            class _shader_tpl__type_tpl_shader_format: public fshd::static_shader_format< fshd::type::gl__type_tpl > {
              protected:
                static char const* source;

              public:
                _shader_tpl__type_tpl_shader_format() :
                    fshd::static_shader_format< fshd::type::gl__type_tpl >() {
                  set_source(get_source());

                  shader_base::compile();
                }

                char const* get_source() const {
                  return _shader_tpl__type_tpl_shader_format::source;
                }
            };

            typedef obj::shader< _shader_tpl__type_tpl_shader_format > _shader_tpl__type_tpl_shader_t;
            // #template#</define_shader>
          public:
            _program_tpl_program_format() {
              // #template#<declare_shader>_shader_tpl,_type_tpl
              _shader_tpl__type_tpl_shader_t _shader_tpl__type_tpl_shader;
              attach(_shader_tpl__type_tpl_shader);
              // #template#</declare_shader>

              link();
            }

            // #template#<uniform>_name_tpl,_type_tpl,_location_tpl,_size_tpl
            typedef unf::gl__type_tpl::binder _name_tpl_binder_t;
            typedef unf::gl__type_tpl::value_type _name_tpl_value_t;

            void set__name_tpl(BOOST_PP_ENUM_PARAMS(_size_tpl, _name_tpl_value_t const _name_tpl_in)) {
              obj::program_base::bind();
              _name_tpl_binder_t::bind(_location_tpl, BOOST_PP_ENUM_PARAMS(_size_tpl, _name_tpl_in));
            }
            // #template#</uniform>

            // #template#<uniform_sampler>_name_tpl,_type_tpl,_location_tpl
            typedef smp::gl__type_tpl::binder _name_tpl_binder_t;
            typedef smp::gl__type_tpl::value_type _name_tpl_value_t;

            template< typename TextureFormat >
            void set__name_tpl(obj::texture< TextureFormat > const& value_in) {
              obj::program_base::bind();
              _name_tpl_binder_t::bind(_location_tpl, value_in);
            }
            // #template#</uniform_sampler>

            // #template#<uniform_array>_name_tpl,_type_tpl,_location_tpl,_size_tpl,_count_tpl
            typedef unf::gl__type_tpl::binder _name_tpl_binder_t;
            typedef unf::gl__type_tpl::value_type _name_tpl_value_t;

            void set__name_tpl(_name_tpl_value_t const values_in[_size_tpl * _count_tpl]) {
              obj::program_base::bind();
              _name_tpl_binder_t::bind(_location_tpl, _count_tpl, values_in);
            }
            // #template#</uniform_array>

            template< typename DrawableType = obj::drawable const& >
            struct framebuffer_format: public obj::framebuffer_base, public fbf::framebuffer_format_base< DrawableType > {
                // #template#<output>_name_tpl,_type_tpl,_location_tpl,_index_tpl
                template< typename TemporaryFramebufferSlot = fbf::draw_framebuffer_slot, typename NewDrawableType >
                void set__name_tpl(NewDrawableType const& drawable_in) {
                  obj::framebuffer_base::bind< TemporaryFramebufferSlot >();
                  fbf::framebuffer_format_base< DrawableType >::template set<
                      typename TemporaryFramebufferSlot::slot_type >(_location_tpl, drawable_in);
                }
                // #template#</output>

                // #template#<output_array>_name_tpl,_type_tpl,_location_tpl,_index_tpl,_size_tpl
                // #template#</output_array>
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
                inline void draw(obj::program< _program_tpl_program_format > const& program_in,
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
                inline void draw_multiple(obj::program< _program_tpl_program_format > const& program_in,
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
                inline void draw(obj::program< _program_tpl_program_format > const& program_in,
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
                inline void draw_range(obj::program< _program_tpl_program_format > const& program_in,
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
                inline void draw_multiple(obj::program< _program_tpl_program_format > const& program_in,
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
                inline void draw(obj::program< _program_tpl_program_format > const& program_in,
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
                inline void draw_multiple(obj::program< _program_tpl_program_format > const& program_in,
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
                inline void draw(obj::program< _program_tpl_program_format > const& program_in,
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
                inline void draw_range(obj::program< _program_tpl_program_format > const& program_in,
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
                inline void draw_multiple(obj::program< _program_tpl_program_format > const& program_in,
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

                // #template#<attribute>_name_tpl,_type_tpl,_location_tpl,_size_tpl
                typedef att::gl__type_tpl::binder _name_tpl_binder_t;
                typedef att::gl__type_tpl::buffer_binder _name_tpl_buffer_binder_t;

                template< typename DataFormat >
                void set__name_tpl(BOOST_PP_ENUM_PARAMS(_size_tpl, DataFormat const _name_tpl_in)) {
                  obj::vertexarray_base::bind();
                  _name_tpl_binder_t::bind(_location_tpl, BOOST_PP_ENUM_PARAMS(_size_tpl, _name_tpl_in));
                }
                template< typename BufferFormat >
                void set__name_tpl(obj::buffer< BufferFormat > const& buffer_in,
                                   std::uint32_t const offset_in = 0,
                                   std::uint32_t const stride_in = 0) {
                  obj::vertexarray_base::bind();
                  _name_tpl_buffer_binder_t::bind(_location_tpl, buffer_in, offset_in, stride_in);
                }
                template< typename BufferFormat >
                void set__name_tpl_normalized(obj::buffer< BufferFormat > const & buffer_in,
                                              std::uint32_t const offset_in = 0,
                                              std::uint32_t const stride_in = 0) {
                  obj::vertexarray_base::bind();
                  _name_tpl_buffer_binder_t::bind < fcmn::normalization::normalized
                      > (_location_tpl, buffer_in, offset_in, stride_in);
                }
                template< typename BufferFormat >
                void set__name_tpl_gbra(obj::buffer< BufferFormat > const & buffer_in,
                                        std::uint32_t const offset_in = 0,
                                        std::uint32_t const stride_in = 0) {
                  obj::vertexarray_base::bind();
                  _name_tpl_buffer_binder_t::bind < fcmn::normalization::none, fcmn::order::reverse
                      > (_location_tpl, buffer_in, offset_in, stride_in);
                }
                // #template#</attribute>

                // #template#<attribute_array>_name_tpl,_type_tpl,_location_tpl,_size_tpl,_count_tpl
                typedef att::gl__type_tpl::binder _name_tpl_binder_t;
                typedef att::gl__type_tpl::buffer_binder _name_tpl_buffer_binder_t;

                template< typename DataFormat >
                void set__name_tpl(DataFormat const values_in[_size_tpl * _count_tpl]) {
                  obj::vertexarray_base::bind();
                  _name_tpl_binder_t::bind(_location_tpl, _count_tpl, values_in);
                }
                template< typename BufferFormat >
                void set__name_tpl(obj::buffer< BufferFormat > const & buffer_in,
                                   std::uint32_t const offset_in = 0,
                                   std::uint32_t const stride_in = 0) {
                  obj::vertexarray_base::bind();
                  _name_tpl_buffer_binder_t::bind(_location_tpl, buffer_in, offset_in, stride_in);
                }
                template< typename BufferFormat >
                void set__name_tpl_normalized(obj::buffer< BufferFormat > const& buffer_in,
                                              std::uint32_t const offset_in = 0,
                                              std::uint32_t const stride_in = 0) {
                  obj::vertexarray_base::bind();
                  _name_tpl_buffer_binder_t::bind < fcmn::normalization::normalized
                      > (_location_tpl, buffer_in, offset_in, stride_in);
                }
                template< typename BufferFormat >
                void set__name_tpl_gbra(const obj::buffer< BufferFormat >& buffer_in,
                                        const std::uint32_t offset_in = 0,
                                        const std::uint32_t stride_in = 0) {
                  obj::vertexarray_base::bind();
                  _name_tpl_buffer_binder_t::bind < fcmn::normalization::none, fcmn::order::reverse
                      > (_location_tpl, buffer_in, offset_in, stride_in);
                }
                // #template#</attribute_array>
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

#endif /* GTULU_PROGRAM_FORMAT_program_upper_tpl_HPP_ */
// #template#</format>

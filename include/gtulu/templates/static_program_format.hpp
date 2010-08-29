// #template#<format>_program_tpl,_author_tpl,_date_tpl
/**
 * @file
 */

#ifndef GTULU_PROGRAM_FORMAT_program_upper_tpl_HPP_
#define GTULU_PROGRAM_FORMAT_program_upper_tpl_HPP_

#include <gtulu/opengl.hpp>
#include <gtulu/internal/formats/shader/static.hpp>
#include <gtulu/internal/formats/program/static.hpp>
#include <gtulu/internal/uniform.hpp>
#include <gtulu/internal/attribute.hpp>
#include <gtulu/internal/objects/shader.hpp>
#include <gtulu/internal/objects/program.hpp>
#include <gtulu/internal/objects/vertexarray.hpp>
#include <gtulu/internal/objects/framebuffer.hpp>
#include <gtulu/internal/objects/framebuffer/attacher.hpp>
#include <gtulu/internal/objects/framebuffer/format.hpp>
#include <gtulu/internal/objects/texture.hpp>

#include <boost/shared_ptr.hpp>
#include <boost/preprocessor.hpp>

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace program {

        class _program_tpl_program_format: public fp::static_program_format {
          protected:
            // #template#<define_shader>_shader_tpl,_type_tpl
            class _shader_tpl__type_tpl_shader_format: public fs::static_shader_format< fst::gl__type_tpl > {
              protected:
                static const char* source;

              public:
                _shader_tpl__type_tpl_shader_format() :
                  fs::static_shader_format< fst::gl__type_tpl >() {
                  set_source(get_source());

                  shader_base::compile();
                }

                const char* get_source() const {
                  return _shader_tpl__type_tpl_shader_format::source;
                }
            };

            typedef gio::shader< _shader_tpl__type_tpl_shader_format > _shader_tpl__type_tpl_shader_t;
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
            typedef giu::gl__type_tpl::binder _name_tpl_binder_t;
            typedef giu::gl__type_tpl::value_type _name_tpl_value_t;

            void set__name_tpl(BOOST_PP_ENUM_PARAMS(_size_tpl, const _name_tpl_value_t _name_tpl)) {
              _name_tpl_binder_t::bind(_location_tpl, BOOST_PP_ENUM_PARAMS(_size_tpl, _name_tpl));
            }
            // #template#</uniform>

            // #template#<uniform_sampler>_name_tpl,_type_tpl,_location_tpl
            typedef giu::gl__type_tpl::binder _name_tpl_binder_t;
            typedef giu::gl__type_tpl::value_type _name_tpl_value_t;

            template< typename texture_format_t >
            void set__name_tpl(const gio::texture< texture_format_t >& value) {
              _name_tpl_binder_t::bind(_location_tpl, value);
            }
            // #template#</uniform_sampler>

            // #template#<uniform_array>_name_tpl,_type_tpl,_location_tpl,_size_tpl,_count_tpl
            typedef giu::gl__type_tpl::binder _name_tpl_binder_t;
            typedef giu::gl__type_tpl::value_type _name_tpl_value_t;

            void set__name_tpl(const _name_tpl_value_t values[_size_tpl * _count_tpl]) {
              _name_tpl_binder_t::bind(_location_tpl, _count_tpl, values);
            }
            // #template#</uniform_array>

            struct vertex_array_format {
                // #template#<attribute>_name_tpl,_type_tpl,_location_tpl,_size_tpl
                typedef gia::gl__type_tpl::binder _name_tpl_binder_t;
                typedef gia::gl__type_tpl::value_type _name_tpl_value_t;
                typedef gia::gl__type_tpl::buffer_binder _name_tpl_buffer_binder_t;

                void set__name_tpl(BOOST_PP_ENUM_PARAMS(_size_tpl, const _name_tpl_value_t _name_tpl)) {
                  _name_tpl_binder_t::bind(_location_tpl, BOOST_PP_ENUM_PARAMS(_size_tpl, _name_tpl));
                }
                template< typename buffer_format_t, typename buffer_usage_t >
                void set__name_tpl(const gio::buffer< buffer_format_t, buffer_usage_t >& buffer,
                                   const ::boost::uint32_t offset = 0, const ::boost::uint32_t stride = 0) {
                  _name_tpl_buffer_binder_t::checked_binder< buffer_format_t >::bind(_location_tpl, buffer, offset,
                      stride);
                }
                template< typename buffer_format_t, typename buffer_usage_t >
                void set__name_tpl_normalized(const gio::buffer< buffer_format_t, buffer_usage_t >& buffer,
                                              const ::boost::uint32_t offset = 0, const ::boost::uint32_t stride = 0) {
                  _name_tpl_buffer_binder_t::checked_binder< buffer_format_t, fdn::normalized >::bind(_location_tpl,
                      buffer, offset, stride);
                }
                template< typename buffer_format_t, typename buffer_usage_t >
                void set__name_tpl_gbra(const gio::buffer< buffer_format_t, buffer_usage_t >& buffer,
                                        const ::boost::uint32_t offset = 0, const ::boost::uint32_t stride = 0) {
                  _name_tpl_buffer_binder_t::checked_binder< buffer_format_t, fdn::normal, fdo::reverse >::bind(
                      _location_tpl, buffer, offset, stride);
                }
                // #template#</attribute>

                // #template#<attribute_array>_name_tpl,_type_tpl,_location_tpl,_size_tpl,_count_tpl
                typedef gia::gl__type_tpl::binder _name_tpl_binder_t;
                typedef gia::gl__type_tpl::value_type _name_tpl_value_t;
                typedef gia::gl__type_tpl::buffer_binder _name_tpl_buffer_binder_t;

                void set__name_tpl(const _name_tpl_value_t values[_size_tpl * _count_tpl]) {
                  _name_tpl_binder_t::bind(_location_tpl, _count_tpl, values);
                }
                template< typename buffer_format_t, typename buffer_usage_t >
                void set__name_tpl(const gio::buffer< buffer_format_t, buffer_usage_t >& buffer,
                                   const ::boost::uint32_t offset = 0, const ::boost::uint32_t stride = 0) {
                  _name_tpl_buffer_binder_t::checked_binder< buffer_format_t >::bind(_location_tpl, buffer, offset,
                      stride);
                }
                template< typename buffer_format_t, typename buffer_usage_t >
                void set__name_tpl_normalized(const gio::buffer< buffer_format_t, buffer_usage_t >& buffer,
                                              const ::boost::uint32_t offset = 0, const ::boost::uint32_t stride = 0) {
                  _name_tpl_buffer_binder_t::checked_binder< buffer_format_t, fdn::normalized >::bind(_location_tpl,
                      buffer, offset, stride);
                }
                template< typename buffer_format_t, typename buffer_usage_t >
                void set__name_tpl_gbra(const gio::buffer< buffer_format_t, buffer_usage_t >& buffer,
                                        const ::boost::uint32_t offset = 0, const ::boost::uint32_t stride = 0) {
                  _name_tpl_buffer_binder_t::checked_binder< buffer_format_t, fdn::normal, fdo::reverse >::bind(
                      _location_tpl, buffer, offset, stride);
                }
                // #template#</attribute_array>
            };

            typedef gio::vertexarray< vertex_array_format > vertexarray_t;
            ::boost::shared_ptr< vertexarray_t > new_vertexarray() {
              return ::boost::shared_ptr< vertexarray_t >(new vertexarray_t());
            }

            template< typename drawable_type_t = const gio::drawable& >
            struct framebuffer_format: public gif::framebuffer_format_base< drawable_type_t > {
                // #template#<output>_name_tpl,_type_tpl,_location_tpl,_index_tpl
                template< typename temporary_framebuffer_slot_t = gif::slots::gl_draw_framebuffer,
                    typename new_drawable_type_t >
                void set__name_tpl(const new_drawable_type_t& drawable) {
                  gif::framebuffer_format_base< drawable_type_t >::set(_location_tpl, drawable);
                }
                // #template#</output>

                // #template#<output_array>_name_tpl,_type_tpl,_location_tpl,_index_tpl,_size_tpl
                // #template#</output_array>
            };

            typedef gio::framebuffer< framebuffer_format< > > framebuffer_t;
            ::boost::shared_ptr< framebuffer_t > new_framebuffer() {
              return ::boost::shared_ptr< framebuffer_t >(new framebuffer_t());
            }

            typedef gio::default_framebuffer< framebuffer_format< const gio::default_drawable > > default_framebuffer_t;
            ::boost::shared_ptr< default_framebuffer_t > get_default_framebuffer() {
              return ::boost::shared_ptr< default_framebuffer_t >(new default_framebuffer_t());
            }
        };

      } // namespace program
    } // namespace formats

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_PROGRAM_FORMAT_program_upper_tpl_HPP_ */
// #template#</format>

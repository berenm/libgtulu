/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_TEXTURE_HPP_
#define GTULU_INTERNAL_FORMAT_TEXTURE_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/formats/common.hpp"

#include "gtulu/internal/formats/constraints/data.hpp"
#include "gtulu/internal/formats/constraints/group.hpp"
#include "gtulu/internal/formats/constraints/target.hpp"

#include "gtulu/internal/formats/conversions/group.hpp"
#include "gtulu/internal/formats/conversions/internal.hpp"

#include "gtulu/internal/objects/buffer.hpp"

namespace gtulu {
  namespace internal {

    namespace callers {
      namespace texture {

        template< typename texture_format_t >
        struct texture_image_1d {
            typedef typename texture_format_t::target::info::format target_t;
            typedef typename texture_format_t::internal::info::format internal_t;
            typedef typename texture_format_t::group::info::format group_t;
            typedef typename texture_format_t::data::info::format data_t;
            typedef typename fd::to_typename< typename texture_format_t::data::info::value_type >::type value_t;

            // TODO(rout): static_assert with function requirements.

            void load(value_t* data, ::std::size_t width, ::boost::uint32_t level, ::boost::uint8_t border) {
              fnc::gl_tex_image_1d::call< target_t, internal_t, group_t, data_t >(level, width, border, data);
            }

            void load(value_t* data, ::std::size_t xoffset, ::std::size_t width, ::boost::uint32_t level) {
              fnc::gl_tex_sub_image_1d::call< target_t, group_t, data_t >(level, xoffset, width, data);
            }
        };

        template< typename texture_format_t >
        struct texture_image_2d {
            typedef typename texture_format_t::target::info::format target_t;
            typedef typename texture_format_t::internal::info::format internal_t;
            typedef typename texture_format_t::group::info::format group_t;
            typedef typename texture_format_t::data::info::format data_t;
            typedef typename fd::to_typename< typename texture_format_t::data::info::value_type >::type value_t;

            // TODO(rout): static_assert with function requirements.

            void load(value_t* data, ::std::size_t width, ::std::size_t height, ::boost::uint32_t level,
                      ::boost::uint8_t border) {
              fnc::gl_tex_image_2d::call< target_t, internal_t, group_t, data_t >(level, width, height, border, data);
            }

            void load(value_t* data, ::std::size_t xoffset, ::std::size_t yoffset, ::std::size_t width,
                      ::std::size_t height, ::boost::uint32_t level) {
              fnc::gl_tex_sub_image_2d::call< target_t, group_t, data_t >(level, xoffset, yoffset, width, height, data);
            }
        };

        template< typename texture_format_t >
        struct texture_image_3d {
            typedef typename texture_format_t::target::info::format target_t;
            typedef typename texture_format_t::internal::info::format internal_t;
            typedef typename texture_format_t::group::info::format group_t;
            typedef typename texture_format_t::data::info::format data_t;
            typedef typename fd::to_typename< typename texture_format_t::data::info::value_type >::type value_t;

            // TODO(rout): static_assert with function requirements.

            void load(value_t* data, ::std::size_t width, ::std::size_t height, ::std::size_t depth,
                      ::boost::uint32_t level, ::boost::uint8_t border) {
              fnc::gl_tex_image_3d::call< target_t, internal_t, group_t, data_t >(level, width, height, depth, border,
                  data);
            }

            void load(value_t* data, ::std::size_t xoffset, ::std::size_t yoffset, ::std::size_t zoffset,
                      ::std::size_t width, ::std::size_t height, ::std::size_t depth, ::boost::uint32_t level) {
              fnc::gl_tex_sub_image_3d::call< target_t, group_t, data_t >(level, xoffset, yoffset, zoffset, width,
                  height, depth, data);
            }
        };

        template< typename texture_format_t >
        struct texture_caller_selector {
            //bm            ::if_< ftt::is_oned< typename texture_format_t::target >, texture_image_1d, texture_image_2d >;
            //            bm::if_< ftt::is_twod< typename texture_format_t::target >, texture_image_2d, texture_image_2d >;
            //            bm::if_< ftt::is_threed< typename texture_format_t::target >, texture_image_2d, texture_image_2d >;
            //            bm::if_< ftt::is_rectangle< typename texture_format_t::target >, texture_image_2d, texture_image_2d >;
            //            bm::if_< ftt::is_buffer< typename texture_format_t::target >, texture_image_2d, texture_image_2d >;
            //            bm::if_< ftt::is_cube_map< typename texture_format_t::target >, texture_image_2d, texture_image_2d >;
            //
            //            bm::if_< fic::is_compressed< typename texture_format_t::internal >, void >;
        };
      } // namespace texture
    } // namespace callers

    namespace formats {
      namespace texture {

        template< typename target_format_t >
        struct texture_loader {
            template< typename compression_t >
            struct compression_checker {
                template< typename internal_format_t >
                struct internal_checker {
                };
            };
        };

#define DECLARE_SIZES_1D \
        ::std::size_t width
#define DECLARE_SIZES_2D \
        ::std::size_t width, ::std::size_t height
#define DECLARE_SIZES_3D \
        ::std::size_t width, ::std::size_t height, ::std::size_t depth
#define DEFINE_SIZES_1D \
        width
#define DEFINE_SIZES_2D \
        width, height
#define DEFINE_SIZES_3D \
        width, height, depth

#define DECLARE_OFFSETS_1D \
        ::std::size_t xoffset
#define DECLARE_OFFSETS_2D \
        ::std::size_t xoffset, ::std::size_t yoffset
#define DECLARE_OFFSETS_3D \
        ::std::size_t xoffset, ::std::size_t yoffset, ::std::size_t zoffset
#define DEFINE_OFFSETS_1D \
        xoffset
#define DEFINE_OFFSETS_2D \
        xoffset, yoffset
#define DEFINE_OFFSETS_3D \
        xoffset, yoffset, zoffset

#define CALL_LOADER_METHOD(dimension_m, target_m) \
        fnc::gl_tex_image_##dimension_m##d ::call< ft::target_m::info::format, \
                                                   typename internal_format_t::info::format, \
                                                   typename group_format_t::info::format, \
                                                   typename data_format_t::info::format > (level, \
                                                       DEFINE_SIZES_##dimension_m##D, \
                                                       border, \
                                                       data);
#define CALL_LOADER_METHOD_SUB(dimension_m, target_m) \
        fnc::gl_tex_sub_image_##dimension_m##d ::call< ft::target_m::info::format, \
                                                       typename group_format_t::info::format, \
                                                       typename data_format_t::info::format > (level, \
                                                           DEFINE_OFFSETS_##dimension_m##D, \
                                                           DEFINE_SIZES_##dimension_m##D, \
                                                           data);
#define CALL_LOADER_METHOD_COMPRESSED(dimension_m, target_m) \
        fnc::gl_compressed_tex_image_##dimension_m##d ::call< ft::target_m::info::format, \
                                                              typename internal_format_t::info::format > (level, \
                                                                  DEFINE_SIZES_##dimension_m##D, \
                                                                  border, \
                                                                  data_size, \
                                                                  data);
#define CALL_LOADER_METHOD_COMPRESSED_SUB(dimension_m, target_m) \
        fnc::gl_compressed_tex_sub_image_##dimension_m##d ::call< ft::target_m::info::format, \
                                                                  typename internal_format_t::info::format > (level, \
                                                                      DEFINE_OFFSETS_##dimension_m##D, \
                                                                      DEFINE_SIZES_##dimension_m##D, \
                                                                      data_size, \
                                                                      data);
#define CALL_LOADER_METHOD_MULTISAMPLE(dimension_m, target_m) \
        fnc::gl_tex_image_##dimension_m##d_multisample ::call< ft::target_m::info::format, \
                                                                typename internal_format_t::info::format > (samples, \
                                                              DEFINE_SIZES_##dimension_m##D, \
                                                              fixedsamplelocations);
#define CALL_LOADER_METHOD_BUFFER(target_m) \
        fnc::gl_tex_buffer::call< ft::target_m::info::format, \
                                  typename internal_format_t::info::format > (*buffer);

#define DECLARE_TEXTURE_LOADER_METHOD_BUFFER(target_m) \
        inline static void load(const gio::buffer_base& buffer)
#define DEFINE_TEXTURE_LOADER_METHOD_BUFFER(target_m) \
        DECLARE_TEXTURE_LOADER_METHOD_BUFFER(target_m) { \
          CALL_LOADER_METHOD_BUFFER(target_m) \
        }

#define DECLARE_TEXTURE_LOADER_METHOD_MULTISAMPLE(dimension_m, target_m) \
        inline static void load(const ::std::size_t samples, DECLARE_SIZES_##dimension_m##D, const bool fixedsamplelocations)
#define DEFINE_TEXTURE_LOADER_METHOD_MULTISAMPLE(dimension_m, target_m) \
        DECLARE_TEXTURE_LOADER_METHOD_MULTISAMPLE(dimension_m, target_m) { \
          CALL_LOADER_METHOD_MULTISAMPLE(dimension_m, target_m) \
        }

#define DECLARE_TEXTURE_LOADER_METHOD(dimension_m, target_m) \
        inline static void load(const void* data, ::std::size_t data_size, DECLARE_SIZES_##dimension_m##D, ::boost::uint8_t border, ::boost::uint32_t level)
#define DEFINE_TEXTURE_LOADER_METHOD(dimension_m, target_m) \
        DECLARE_TEXTURE_LOADER_METHOD(dimension_m, target_m) { \
          CALL_LOADER_METHOD(dimension_m, target_m) \
        }

#define DECLARE_TEXTURE_LOADER_METHOD_SUB(dimension_m, target_m) \
        inline static void load(const void* data, ::std::size_t data_size, DECLARE_OFFSETS_##dimension_m##D, DECLARE_SIZES_##dimension_m##D, ::boost::uint32_t level)
#define DEFINE_TEXTURE_LOADER_METHOD_SUB(dimension_m, target_m) \
        DECLARE_TEXTURE_LOADER_METHOD_SUB(dimension_m, target_m) { \
          CALL_LOADER_METHOD_SUB(dimension_m, target_m) \
        }

#define DEFINE_TEXTURE_LOADER_METHOD_COMPRESSED(dimension_m, target_m) \
        DECLARE_TEXTURE_LOADER_METHOD(dimension_m, target_m) { \
          CALL_LOADER_METHOD_COMPRESSED(dimension_m, target_m) \
        }

#define DEFINE_TEXTURE_LOADER_METHOD_COMPRESSED_SUB(dimension_m, target_m) \
        DECLARE_TEXTURE_LOADER_METHOD_SUB(dimension_m, target_m) { \
          CALL_LOADER_METHOD_COMPRESSED_SUB(dimension_m, target_m) \
        }

#define DECLARE_TEXTURE_LOADER_CHECKER(dimension_m, target_m) \
    template< > \
    template< > \
    struct texture_loader< ft::target_m >::compression_checker< fic::normal > { \
        template< typename internal_format_t, typename group_format_t, typename data_format_t > \
        struct internal_checker { \
            DEFINE_TEXTURE_LOADER_METHOD(dimension_m, target_m) \
            DEFINE_TEXTURE_LOADER_METHOD_SUB(dimension_m, target_m) \
        }; \
    };

#define DECLARE_TEXTURE_LOADER_CHECKER_MULTISAMPLE(dimension_m, target_m) \
    template< > \
    template< > \
    struct texture_loader< ft::target_m >::compression_checker< fic::normal > { \
        template< typename internal_format_t, typename group_format_t, typename data_format_t > \
        struct internal_checker { \
            DEFINE_TEXTURE_LOADER_METHOD_MULTISAMPLE(dimension_m, target_m) \
        }; \
    };

#define DECLARE_TEXTURE_LOADER_CHECKER_BUFFER(target_m) \
    template< > \
    template< > \
    struct texture_loader< ft::target_m >::compression_checker< fic::normal > { \
        template< typename internal_format_t, typename group_format_t, typename data_format_t > \
        struct internal_checker { \
            DEFINE_TEXTURE_LOADER_METHOD_BUFFER(target_m) \
        }; \
    };

#define DECLARE_TEXTURE_LOADER_CHECKER_COMPRESSED(dimension_m, target_m) \
    template< > \
    template< > \
    struct texture_loader< ft::target_m >::compression_checker< fic::compressed > { \
        template< typename internal_format_t, typename group_format_t, typename data_format_t > \
        struct internal_checker { \
            DEFINE_TEXTURE_LOADER_METHOD_COMPRESSED(dimension_m, target_m) \
            DEFINE_TEXTURE_LOADER_METHOD_COMPRESSED_SUB(dimension_m, target_m) \
        }; \
    };

#define DECLARE_TEXTURE_LOADER_CHECKER_NO_COMPRESSED(dimension_m, target_m) \
    template< > \
    template< > \
    struct texture_loader< ft::target_m >::compression_checker< fic::compressed > { \
        template< typename internal_format_t, typename group_format_t, typename data_format_t > \
        struct internal_checker { \
            DECLARE_TEXTURE_LOADER_METHOD(dimension_m, target_m); \
            DECLARE_TEXTURE_LOADER_METHOD_SUB(dimension_m, target_m); \
        }; \
    };

#define DECLARE_TEXTURE_LOADER(dimension_m, target_m) \
        template< > \
        struct texture_loader< ft::target_m > { \
            template< typename compression_t > \
            struct compression_checker; \
        }; \
        \
        DECLARE_TEXTURE_LOADER_CHECKER(dimension_m, target_m) \
        DECLARE_TEXTURE_LOADER_CHECKER_COMPRESSED(dimension_m, target_m)

#define DECLARE_TEXTURE_LOADER_NO_COMPRESSED(dimension_m, target_m) \
        template< > \
        struct texture_loader< ft::target_m > { \
            template< typename compression_t > \
            struct compression_checker; \
        }; \
        \
        DECLARE_TEXTURE_LOADER_CHECKER(dimension_m, target_m) \
        DECLARE_TEXTURE_LOADER_CHECKER_NO_COMPRESSED(dimension_m, target_m)

#define DECLARE_TEXTURE_LOADER_MULTISAMPLE(dimension_m, target_m) \
        template< > \
        struct texture_loader< ft::target_m > { \
            template< typename compression_t > \
            struct compression_checker; \
        }; \
        \
        DECLARE_TEXTURE_LOADER_CHECKER_MULTISAMPLE(dimension_m, target_m) \
        DECLARE_TEXTURE_LOADER_CHECKER_NO_COMPRESSED(dimension_m, target_m)

#define DECLARE_TEXTURE_LOADER_BUFFER(target_m) \
        template< > \
        struct texture_loader< ft::target_m > { \
            template< typename compression_t > \
            struct compression_checker; \
        }; \
        \
        DECLARE_TEXTURE_LOADER_CHECKER_BUFFER(target_m) \
        DECLARE_TEXTURE_LOADER_CHECKER_NO_COMPRESSED(1, target_m)

        DECLARE_TEXTURE_LOADER(1, gl_texture_1d)
        DECLARE_TEXTURE_LOADER(2, gl_texture_2d)
        DECLARE_TEXTURE_LOADER(2, gl_texture_1d_array)
        DECLARE_TEXTURE_LOADER(3, gl_texture_3d)
        DECLARE_TEXTURE_LOADER(3, gl_texture_2d_array)
        DECLARE_TEXTURE_LOADER_NO_COMPRESSED(2, gl_texture_rectangle)
        DECLARE_TEXTURE_LOADER_MULTISAMPLE(2, gl_texture_2d_multisample)
        DECLARE_TEXTURE_LOADER_MULTISAMPLE(3, gl_texture_2d_multisample_array)
        DECLARE_TEXTURE_LOADER_BUFFER(gl_texture_buffer)

        template< >
        struct texture_loader< ft::gl_texture_cube_map > {
            template< typename compression_t >
            struct compression_checker;
        };

        template< >
        template< >
        struct texture_loader< ft::gl_texture_cube_map >::compression_checker< fic::normal > {
            template< typename internal_format_t, typename group_format_t, typename data_format_t >
            struct internal_checker {
                template< typename target_t >
                inline static void load(const void* data, ::std::size_t data_size, ::std::size_t width,
                                        ::std::size_t height, ::boost::uint8_t border, ::boost::uint32_t level) {
                  fnc::gl_tex_image_2d::call< target_t, typename internal_format_t::info::format,
                      typename group_format_t::info::format, typename data_format_t::info::format >(level, width,
                      height, border, data);
                }
                template< typename target_t >
                inline static void load(const void* data, ::std::size_t data_size, ::std::size_t xoffset,
                                        ::std::size_t yoffset, ::std::size_t width, ::std::size_t height,
                                        ::boost::uint32_t level) {
                  fnc::gl_tex_sub_image_2d::call< target_t, typename group_format_t::info::format,
                      typename data_format_t::info::format >(level, xoffset, yoffset, width, height, data);
                }
            };
        };
        template< >
        template< >
        struct texture_loader< ft::gl_texture_cube_map >::compression_checker< fic::compressed > {
            template< typename internal_format_t, typename group_format_t, typename data_format_t >
            struct internal_checker {
                template< typename target_t >
                inline static void load(const void* data, ::std::size_t data_size, ::std::size_t width,
                                        ::std::size_t height, ::boost::uint8_t border, ::boost::uint32_t level) {
                  fnc::gl_compressed_tex_image_2d::call< target_t, typename internal_format_t::info::format >(level,
                      width, height, border, data_size, data);
                }
                template< typename target_t >
                inline static void load(const void* data, ::std::size_t data_size, ::std::size_t xoffset,
                                        ::std::size_t yoffset, ::std::size_t width, ::std::size_t height,
                                        ::boost::uint32_t level) {
                  fnc::gl_compressed_tex_sub_image_2d::call< target_t, typename internal_format_t::info::format >(
                      level, xoffset, yoffset, width, height, data_size, data);
                }
            };
        };

#undef DECLARE_TEXTURE_LOADER
#undef DECLARE_TEXTURE_LOADER_BUFFER
#undef DECLARE_TEXTURE_LOADER_MULTISAMPLE
#undef DECLARE_TEXTURE_LOADER_NO_COMPRESSED

#undef DECLARE_TEXTURE_LOADER_CHECKER
#undef DECLARE_TEXTURE_LOADER_CHECKER_BUFFER
#undef DECLARE_TEXTURE_LOADER_CHECKER_COMPRESSED
#undef DECLARE_TEXTURE_LOADER_CHECKER_MULTISAMPLE
#undef DECLARE_TEXTURE_LOADER_CHECKER_NO_COMPRESSED

#undef DECLARE_TEXTURE_LOADER_METHOD
#undef DECLARE_TEXTURE_LOADER_METHOD_BUFFER
#undef DECLARE_TEXTURE_LOADER_METHOD_COMPRESSED
#undef DECLARE_TEXTURE_LOADER_METHOD_COMPRESSED_SUB
#undef DECLARE_TEXTURE_LOADER_METHOD_MULTISAMPLE
#undef DECLARE_TEXTURE_LOADER_METHOD_SUB

#undef DEFINE_TEXTURE_LOADER_METHOD
#undef DEFINE_TEXTURE_LOADER_METHOD_BUFFER
#undef DEFINE_TEXTURE_LOADER_METHOD_COMPRESSED
#undef DEFINE_TEXTURE_LOADER_METHOD_COMPRESSED_SUB
#undef DEFINE_TEXTURE_LOADER_METHOD_MULTISAMPLE
#undef DEFINE_TEXTURE_LOADER_METHOD_SUB

#undef DECLARE_OFFSETS_1D
#undef DECLARE_OFFSETS_2D
#undef DECLARE_OFFSETS_3D
#undef DECLARE_SIZES_1D
#undef DECLARE_SIZES_2D
#undef DECLARE_SIZES_3D

#undef DEFINE_OFFSETS_1D
#undef DEFINE_OFFSETS_2D
#undef DEFINE_OFFSETS_3D
#undef DEFINE_SIZES_1D
#undef DEFINE_SIZES_2D
#undef DEFINE_SIZES_3D

#undef CALL_LOADER_METHOD
#undef CALL_LOADER_METHOD_BUFFER
#undef CALL_LOADER_METHOD_COMPRESSED
#undef CALL_LOADER_METHOD_COMPRESSED_SUB
#undef CALL_LOADER_METHOD_MULTISAMPLE
#undef CALL_LOADER_METHOD_SUB
        //        template< >
        //        struct texture_loader< ft::gl_texture_1d > {
        //        template< typename internal_format_t, typename group_format_t, typename data_format_t >
        //        void load(int width, void* data, int level = 0, int border = 0) {
        //          glCopyTexImage1D((GLenum) target, (GLint) level, (GLenum) internalformat, (GLint) x, (GLint) y,
        //              (GLsizei) width, (GLint) border);
        //          glCopyTexImage2D((GLenum) target, (GLint) level, (GLenum) internalformat, (GLint) x, (GLint) y,
        //              (GLsizei) width, (GLsizei) height, (GLint) border);
        //          glCopyTexSubImage1D((GLenum) target, (GLint) level, (GLint) xoffset, (GLint) x, (GLint) y, (GLsizei) width);
        //          glCopyTexSubImage2D((GLenum) target, (GLint) level, (GLint) xoffset, (GLint) yoffset, (GLint) x, (GLint) y,
        //              (GLsizei) width, (GLsizei) height);
        //          glCopyTexSubImage3D((GLenum) target, (GLint) level, (GLint) xoffset, (GLint) yoffset, (GLint) zoffset,
        //              (GLint) x, (GLint) y, (GLsizei) width, (GLsizei) height);
        // -----------------
        //              glTexBuffer((GLenum) target, (GLenum) internalformat, (GLuint) buffer);
        //              glTexImage1D((GLenum) target, (GLint) level, (GLint) internalformat, (GLsizei) width, (GLint) border,
        //                  (GLenum) format, (GLenum) type, (GLvoid*) pixels);
        //              glTexImage2D((GLenum) target, (GLint) level, (GLint) internalformat, (GLsizei) width, (GLsizei) height,
        //                  (GLint) border, (GLenum) format, (GLenum) type, (GLvoid*) pixels);
        //              glTexImage2DMultisample((GLenum) target, (GLsizei) samples, (GLint) internalformat, (GLsizei) width,
        //                  (GLsizei) height, (GLboolean) fixedsamplelocations);
        //              glTexImage3D((GLenum) target, (GLint) level, (GLint) internalformat, (GLsizei) width, (GLsizei) height,
        //                  (GLsizei) depth, (GLint) boder, (GLenum) format, (GLenum) type, (GLvoid*) pixels);
        //              glTexImage3DMultisample((GLenum) target, (GLsizei) samples, (GLint) internalformat, (GLsizei) width,
        //                  (GLsizei) height, (GLsizei) depth, (GLboolean) fixedsamplelocations);
        //              glTexSubImage1D((GLenum) target, (GLint) level, (GLint) xoffset, (GLsizei) width, (GLenum) format,
        //                  (GLenum) type, (GLvoid*) pixels);
        //              glTexSubImage2D((GLenum) target, (GLint) level, (GLint) xoffset, (GLint) yoffset, (GLsizei) width,
        //                  (GLsizei) height, (GLenum) format, (GLenum) type, (GLvoid*) pixels);
        //              glTexSubImage3D((GLenum) target, (GLint) level, (GLint) xoffset, (GLint) yoffset, (GLint) zoffset,
        //                  (GLsizei) width, (GLsizei) height, (GLsizei) depth, (GLenum) format, (GLenum) type, (GLvoid*) pixels);
        //              glCompressedTexImage1D((GLenum) target, (GLint) level, (GLenum) internalformat, (GLsizei) width,
        //                  (GLint) border, (GLsizei) imagesize, (GLvoid*) data);
        //              glCompressedTexImage2D((GLenum) target, (GLint) level, (GLenum) internalformat, (GLsizei) width,
        //                  (GLsizei) height, (GLint) border, (GLsizei) imagesize, (GLvoid*) data);
        //              glCompressedTexImage3D((GLenum) target, (GLint) level, (GLenum) internalformat, (GLsizei) width,
        //                  (GLsizei) height, (GLsize) depth, (GLint) border, (GLsizei) imagesize, (GLvoid*) data);
        //              glCompressedTexSubImage1D((GLenum) target, (GLint) level, (GLint) xoffset, (GLsizei) width,
        //                  (GLenum) format, (GLsizei) imagesize, (GLvoid*) data);
        //              glCompressedTexSubImage2D((GLenum) target, (GLint) level, (GLint) xoffset, (GLint) yoffset,
        //                  (GLsizei) width, (GLsizei) height, (GLenum) format, (GLsizei) imagesize, (GLvoid*) data);
        //              glCompressedTexSubImage3D((GLenum) target, (GLint) level, (GLint) xoffset, (GLint) yoffset,
        //                  (GLint) zoffset, (GLsizei) width, (GLsizei) height, (GLsizei) depth, (GLenum) format,
        //                  (GLsizei) imagesize, (GLvoid*) data);
        //        }
        //        };

        //
        //#define DECLARE_LOADER(function_m)
        //
        //    template< >
        //    struct texture_loader< ft::gl_texture_1d > {
        //        template< typename internal_format_t, typename group_format_t, typename data_format_t >
        //        void load(frambuffer_base) {
        //        __gl_debug(glCopyTexImage1D);
        //          glCopyTexImage1D()
        //        }
        //
        //        void load(buffer_base) {
        //        __gl_debug(glCopyTexImage1D);
        //          glCopyTexImage1D()
        //        }
        //
        //        template< typename internal_format_t, typename group_format_t, typename data_format_t >
        //        void load(int width, void* data, int level = 0, int border = 0) {
        //        __gl_debug(glTexImage1D);
        //          glTexImage1D(ftf::from_type< ftf::gl_texture_1d >::value, level, fif::from_type<
        //              internal_format_t >::value, width, border, group_format_t::value,
        //              data_format_t::value, datgroup_format_t::value;
        //
        //   data_format_t::valueure_loader< ft::gl_texture_2d > {
        //        template< typename internal_format_t, typename group_format_t, typename data_format_t >
        //        void load(int width, int height, void* data, int level = 0, int border = 0) {
        //        __gl_debug(glTexImage2D);
        //          glTexImage2D(ftf::from_type< ftf::gl_texture_2d >::value, level, fif::from_type<
        //              internal_format_t >::value, width, height, border, group_format_t::value,
        //              data_format_t::value, data);
        //
        //        __ggroup_format_t::value    glTexImage2D(target, ldata_format_t::value format, type, pixels);
        //        __gl_debug(glTexImage3D);
        //          glTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
        //
        //        __gl_debug(glTexImage2DMultisample);
        //          glTexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
        //        __gl_debug(glTexImage3DMultisample);
        //          glTexImage3DMultisample(target, samples, internal, width, height, depth, fixed);
        //
        //        __gl_debug(glTexBuffer);
        //          glTexBuffer(target, internal_format, buffer);
        //
        //        __gl_debug(glTexSubImage1D);
        //          glTexSubImage1D(target, level, xoff, width, format, type, pixels);
        //        __gl_debug(glTexSubImage2D);
        //          glTexSubImage2D(target, level, xoff, yoff, width, height, format, type, pixels);
        //        __gl_debug(glTexSubImage3D);
        //          glTexSubImage3D(target, level, xoff, yoff, zoff, width, height, depth, format, type, pixels);
        //        }
        //    };

        template< typename target_format_t, typename internal_format_t, typename group_format_t, typename data_format_t >
        struct texture_format: fg::is_internal_compatible< group_format_t, internal_format_t >,
                               fd::are_group_internal_compatible< data_format_t, group_format_t, internal_format_t >,
                               ft::is_internal_compatible< target_format_t, internal_format_t >,
                               ft::is_of_target_base< target_format_t, ft::base::texture > {
            typedef target_format_t target;
            typedef internal_format_t internal;
            typedef group_format_t group;
            typedef data_format_t data;

            typedef typename texture_loader< target_format_t >::template compression_checker<
                typename internal_format_t::info::compression >::template internal_checker< internal_format_t,
                group_format_t, data_format_t > loader;
        };

        template< typename target_format_t, typename base_t = fgb::rgba, fi::size_type size_t = 8,
            typename type_t = fit::unsigned_fixed, typename compression_t = fic::normal,
            typename order_t = fg::order::normal >
        class texture_format_selector {
            typedef typename fi::to_data_type< type_t >::type ideal_data_type;
            typedef typename fg::to_internal_base< base_t >::type ideal_internal_base;
            typedef typename fi::to_data_packing< ideal_internal_base >::type ideal_data_packing;
            typedef typename fd::format_selector< ideal_data_type, ideal_data_packing, size_t, order_t >::format
                data_format;

            typedef typename data_format::info::type data_type;
            typedef typename data_format::info::packing data_packing;

            typedef typename fi::format_selector< ideal_internal_base, size_t, type_t, compression_t >::format
                internal_format;

            typedef typename internal_format::info::base internal_base;

            typedef typename fi::to_group_type< type_t >::type group_type;
            typedef typename fg::format_selector< base_t, group_type, order_t >::format group_format;

          public:
            typedef texture_format< target_format_t, internal_format, group_format, data_format > format;
        };
      } // namespace texture
    } // namespace formats

    namespace ftext = ::gtulu::internal::formats::texture;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_TEXTURE_HPP_ */

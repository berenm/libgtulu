/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */
#include "gtulu_opengl_pch.hpp"

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"

#include "gtulu/pango_cairo.hpp"

#include "gtulu/internal/storage/data/traits.hpp"
#include "gtulu/internal/storage/copy.hpp"

namespace gtulu {
  namespace internal {

    namespace storage {
      namespace data {

        template< >
        struct data_traits< cairo_surface_t* > {
          typedef cairo_surface_t* data_type_t;

          static uint8_t* write(data_type_t& data_in) {
            return cairo_image_surface_get_data(data_in);
          }

          static uint8_t const* read(data_type_t const& data_in) {
            return cairo_image_surface_get_data(data_in);
          }

          static std::size_t size(data_type_t const& data_in) {
            return 0;
          }

          static std::size_t value_size(data_type_t const& data_in) {
            return 0;
          }

          static std::size_t width(data_type_t const& data_in) {
            return cairo_image_surface_get_width(data_in);
          }

          static std::size_t height(data_type_t const& data_in) {
            return cairo_image_surface_get_height(data_in);
          }

          static std::size_t depth(data_type_t const& data_in) {
            return 1;
          }

        };

      } // namespace data
    } // namespace storage

  } // namespace internal

  namespace cairo {
    using namespace gtulu::internal;

    typedef ftex::select_format< ftgt::gl_texture_2d, fcmn::component::red_green_blue_alpha, fnum::ufixed8_,
                                 fcmn::compression::none, fcmn::order::reverse >::type cairo_texture_format;
    typedef obj::texture< cairo_texture_format > cairo_texture;

    void render(cairo_texture& texture, std::string const& text) {
      using namespace gtulu::internal;

      cairo_surface_t* cairo_surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32, texture.width(), texture.height());
      cairo_t*         cairo         = cairo_create(cairo_surface);
      PangoLayout*     pango_layout  = pango_cairo_create_layout(cairo);

      pango_layout_set_width(pango_layout, texture.width());
      pango_layout_set_height(pango_layout, texture.height());

      pango_layout_set_markup(pango_layout, text.c_str(), -1);
      pango_cairo_show_layout(cairo, pango_layout);

      sto::copy(texture, cairo_surface);

      cairo_surface_finish(cairo_surface);
      cairo_destroy(cairo);
      cairo_surface_destroy(cairo_surface);
    }

    cairo_texture make_texture(std::string const& text) {
      using namespace gtulu::internal;

      PangoContext* pango        = pango_font_map_create_context(pango_cairo_font_map_get_default());
      PangoLayout*  pango_layout = pango_layout_new(pango);

      pango_layout_set_markup(pango_layout, text.c_str(), -1);

      int width;
      int height;
      pango_layout_get_pixel_size(pango_layout, &width, &height);

      cairo_surface_t* cairo_surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32, width, height);
      cairo_t*         cairo         = cairo_create(cairo_surface);

      pango_cairo_update_context(cairo, pango);
      pango_cairo_show_layout(cairo, pango_layout);

      cairo_texture texture(cairo_surface);

      cairo_surface_finish(cairo_surface);
      cairo_destroy(cairo);
      cairo_surface_destroy(cairo_surface);

      return texture;
    }

  } // namespace cairo

} // namespace gtulu

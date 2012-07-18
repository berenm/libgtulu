/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_PANGO_CAIRO_HPP_
#define GTULU_PANGO_CAIRO_HPP_

#include "gtulu/namespaces.hpp"

#include <string>

#include "gtulu/internal/object/texture.hpp"
#include "gtulu/internal/format/texture.hpp"

namespace gtulu {

  namespace cairo {
    using namespace gtulu::internal;

    typedef ftex::select_format< ftgt::gl_texture_2d, fcmn::component::red_green_blue_alpha, fnum::ufixed8_,
        fcmn::compression::none, fcmn::order::reverse >::type cairo_texture_format;
    typedef obj::texture< cairo_texture_format > cairo_texture;

    void render(cairo_texture& texture, std::string const& text);
    cairo_texture make_texture(std::string const& text);

  } // namespace cairo

} // namespace gtulu

#endif /* GTULU_PANGO_CAIRO_HPP_ */

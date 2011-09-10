#version 330 core

// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE

uniform sampler2D background;

in vert {
  vec2 tex_coord;
} vertex;

out vec4 color;

void main() {
  color = texture(background, vertex.tex_coord * 2.0);
}
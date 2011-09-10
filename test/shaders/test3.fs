#version 330 core

// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE

in vec3 vertex_color;
out vec4 color;

void main() {
//  color.rgb = vertex_color.rgb;
  color.rg = gl_FragCoord.rg;
}
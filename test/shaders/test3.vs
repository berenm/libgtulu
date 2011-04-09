#version 330 core

// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt

in vec2 position;
in vec3 color;

out vec3 vertex_color;

void main() {
  gl_Position = vec4(position, 0.0, 1.0);
  vertex_color = color;
}

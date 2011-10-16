#version 330 core

in vec2 position;
in vec2 texture_position;

out vert {
  vec2 tex_coord;
} vertex;

void main() {
  gl_Position = vec4(position, 0.0, 1.0);
  vertex.tex_coord = texture_position;
}

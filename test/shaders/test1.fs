#version 330 core

uniform sampler2D background;

in vert {
  vec2 tex_coord;
} vertex;

out vec4 color;

void main() {
  color = texture(background, vertex.tex_coord);
}
#version 330 core

uniform sampler2D background;

in vert {
  vec2 tex_coord;
} vertex;

out vec4 output_image;

void main() {
  output_image = texture(background, vertex.tex_coord);
}

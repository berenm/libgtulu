#version 330 core

uniform usampler2D characters;

uniform usampler2D tiles;
uniform usampler2D tiles_color;

uniform bool use_tile;
uniform uvec2 tile_size;
uniform sampler3D tilesets;

in vert {
  vec2 coordinates;
} vertex;

out vec4 output_image;

void main() {
  vec4 c = texture(characters, vertex.coordinates);

  if (use_tile) {
    vec4 t = texture(tiles, vertex.coordinates);
    vec4 t_color = texture(tiles_color, vertex.coordinates);

    vec4 o = texture(tilesets, vec3(vertex.coordinates, t.r));

    o.r += t_color.r;
    o.g += t_color.g;
    o.b += t_color.b;
    output_image = o;
  } else {
    vec4 o = c;

    output_image = o;
  }
}

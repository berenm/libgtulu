#version 330 core

out vec4 output_image;

void main() {
  vec2 coord = (gl_PointCoord * 2.0f - vec2(1.0f, 1.0f));
  output_image = vec4(1.0, 0.0, 0.0, 1.0f - smoothstep(0.5f, 1.0f, dot(coord, coord)));
}

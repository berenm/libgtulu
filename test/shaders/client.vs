#version 330 core

in vec2 position;
in vec2 coordinates;

out vert {
  vec2 coordinates;
} vertex;

void main() {
  gl_Position = vec4(position, 0.0, 1.0);
  vertex.coordinates = coordinates;
}

#version 330 core

uniform uint width;
uniform uint height;

in vec2 position;

out vert {
  vec2 coordinates;
} vertex;

void main() {
  gl_Position = vec4(position, 0.0, 1.0);
  
  vertex.coordinates.x = position.x * width;
  vertex.coordinates.y = position.y * height;
}

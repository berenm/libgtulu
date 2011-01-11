#version 330 core

in vec3 vertex_color;
out vec4 color;

void main() {
//  color.rgb = vertex_color.rgb;
  color.rg = gl_FragCoord.rg;
}
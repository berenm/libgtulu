#version 330 core

in vec2 position;

float almostIdentity(float x, float m, float n) {
  if(x > m)
    return x;

  float a = 2.0f * n - m;
  float b = 2.0f * m - 3.0f * n;
  float t = x / m;

  return (a * t + b) * t * t + n;
}

void main() {
  gl_PointSize = almostIdentity((-position.y + 1.0) * 10.0f, 25.0f, 0.001f);
  gl_Position = vec4(position, 0.0, 1.0);
}

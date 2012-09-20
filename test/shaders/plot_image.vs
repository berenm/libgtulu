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
  float factor = smoothstep(0.3f, 0.6f, (-position.y + 1.0) / 2.0);
  gl_PointSize = almostIdentity(factor * 20.0f, 50.0f, 0.001f);
  gl_Position = vec4(position, 0.0, 1.0);
}

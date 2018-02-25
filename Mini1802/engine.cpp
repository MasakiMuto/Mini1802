#include "DxLib.h"
#include "engine.h"

namespace mini {

engine::engine() : x(320), y(240) {
}


void engine::update() {
  const int speed = 3;
  const int key = GetJoypadInputState(DX_INPUT_KEY_PAD1);
  if (key & PAD_INPUT_UP) {
    y -= speed;
  }
  if (key & PAD_INPUT_DOWN) {
    y += speed;
  }
  if (key & PAD_INPUT_LEFT) {
    x -= speed;
  }
  if (key & PAD_INPUT_RIGHT) {
    x += speed;
  }
}

void engine::render() const {
  DrawPixel(x, y, GetColor(255, 255, 255));
}

} // namespace mini

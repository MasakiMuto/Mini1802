#include "DxLib.h"
#include "Engine.h"

namespace mini {

Engine::Engine() : x(320), y(240) {
}


void Engine::update() {
  const int Speed = 3;
  int key = GetJoypadInputState(DX_INPUT_KEY_PAD1);
  if (key &PAD_INPUT_UP) {
    y -= Speed;
  }
  if (key & PAD_INPUT_DOWN) {
    y += Speed;
  }
  if (key & PAD_INPUT_LEFT) {
    x -= Speed;
  }
  if (key & PAD_INPUT_RIGHT) {
    x += Speed;
  }
}

void Engine::render() {
  DrawPixel(x, y, GetColor(255, 255, 255));
}

}// namespace mini

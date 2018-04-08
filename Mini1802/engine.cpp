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
  for(auto& actor : actors_) {
    actor->update();
  }
}

void engine::render() const {
  DrawPixel(x, y, GetColor(255, 255, 255));
  for(const auto& actor : actors_) {
    actor->render();
  }
}

  void engine::add_actor(std::unique_ptr<actor> actor) {
    actors_.push_back(std::move(actor));
  }

} // namespace mini

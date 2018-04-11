#include "player_input.h"
#include "actor.h"
#include <DxLib.h>

namespace mini {
  void player_input::update() {
    float x = 0;
    float y = 0;
    const int key = GetJoypadInputState(DX_INPUT_KEY_PAD1);
    if (key & PAD_INPUT_UP) {
      y -= 1;
    }
    if (key & PAD_INPUT_DOWN) {
      y += 1;
    }
    if (key & PAD_INPUT_LEFT) {
      x -= 1;
    }
    if (key & PAD_INPUT_RIGHT) {
      x += 1;
    }
    vector2f vel(x, y);
    vel.normalize();

    auto pos = get_actor().get_position();

    pos += vel * 3.0f;
    get_actor().set_position(pos);
  }

  void player_input::initialize() {
  }

}

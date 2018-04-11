#include "sprite.h"
#include "DxLib.h"
#include "actor.h"

namespace mini {

  sprite::sprite(actor& actor) : renderable(actor) {
  }

void sprite::render() const {
  auto& pos =  get_actor().get_position();
  DrawPixel(pos.get_x(), pos.get_y(), GetColor(255, 128, 128));  
}

}


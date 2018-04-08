#include "sprite.h"
#include "DxLib.h"

namespace mini {

  sprite::sprite(actor& actor) : renderable(actor) {
  }

void sprite::render() const {
  DrawPixel(x, 10, GetColor(255, 128, 128));  
}

}


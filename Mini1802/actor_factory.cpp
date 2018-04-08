#include "actor_factory.h"
#include "sprite.h"

namespace mini {

  std::unique_ptr<actor> actor_factory::create_player(int x) const {
    auto player = std::make_unique<actor>();
    auto& s = player->add_component<sprite>(*player);
    s.x = x;
    return player;
  }
}

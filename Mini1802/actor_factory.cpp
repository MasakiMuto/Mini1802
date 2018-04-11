#include "actor_factory.h"
#include "sprite.h"
#include "player_input.h"

namespace mini {

  std::unique_ptr<actor> actor_factory::create_player() const {
    auto player = std::make_unique<actor>();
    auto& s = player->add_component<sprite>(*player);
    player->add_component<player_input>(*player);
    return player;
  }
}

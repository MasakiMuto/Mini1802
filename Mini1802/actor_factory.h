#pragma once
#include <memory>
#include "actor.h"

namespace mini {

class actor_factory {
public:
  std::unique_ptr<actor> create_player() const;
};
  
}

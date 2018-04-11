#pragma once
#include "component.h"

namespace mini {
class player_input : public component {
public:
  explicit player_input(actor& actor) : component(actor){}
  void update() override;
  void initialize() override;
};
  
}


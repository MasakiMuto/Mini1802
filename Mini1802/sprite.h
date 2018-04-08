#pragma once
#include "renderable.h"

namespace mini {

class sprite : public renderable {
public:
  explicit sprite(actor& actor);
  void initialize() override{}
  void update() override {} 
  void render() const override;

  int x = 0;
};
  
}

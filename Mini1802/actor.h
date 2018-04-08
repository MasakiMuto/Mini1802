#pragma once

#include <vector>
#include <memory>
#include "component.h"

namespace mini {

class actor {
public:
  virtual ~actor() = default;

  void update();
  void render() const;

private:
  std::vector<std::unique_ptr<component>> components_;
};

}

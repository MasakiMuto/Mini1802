#pragma once
#include "component.h"

namespace mini {
class renderable : component {
public:
  virtual void render() const = 0;
};
}

#pragma once
#include "component.h"

namespace mini {
class renderable : public component {
public:
  virtual void render() const = 0;
protected:
  explicit renderable(actor& actor) : component(actor) {}
};
}

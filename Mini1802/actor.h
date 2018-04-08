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

  template<class T, class... Args> T& add_component(Args&&... args);
private:
  std::vector<std::unique_ptr<component>> components_;
};

  template <class T, class ... Args>
  T& actor::add_component(Args&&... args) {
    auto* p = new T(args...);
    components_.emplace_back(p);
    return *p;
  }

}

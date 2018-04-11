#pragma once

#include <vector>
#include <memory>
#include "component.h"
#include "vector2.h"

namespace mini {

class actor {
public:
  actor() = default;
  virtual ~actor() = default;

  void update();
  void render() const;
  const vector2f& get_position() const {
    return position_;
  }
  void set_position(const vector2f& val) {
    position_ = val;
  }

  template<class T, class... Args> T& add_component(Args&&... args);
private:
  std::vector<std::unique_ptr<component>> components_;
  vector2f position_;
};

  template <class T, class ... Args>
  T& actor::add_component(Args&&... args) {
    auto* p = new T(args...);
    components_.emplace_back(p);
    return *p;
  }

}

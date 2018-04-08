#pragma once
#include <vector>
#include <memory>
#include "actor.h"

namespace mini {

class engine {
public:
  engine();

  void update();
  void render() const;

  template<class T, class... Args> T& add_actor(Args&&... args);
  void add_actor(std::unique_ptr<actor> actor);
private:
  int x, y;

  std::vector<std::unique_ptr<actor>> actors_;

}; //class Engine
  template <class T, class ... Args>
  T& engine::add_actor(Args&&... args) {
    auto* p = new T(args...);
    actors_.emplace_back(p);
    return *p;
  }

} //namespace mini

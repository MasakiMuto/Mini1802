#pragma once

namespace mini {

class engine {
public:
  engine();

  void update();
  void render() const;
private:
  int x, y;

}; //class Engine

} //namespace mini

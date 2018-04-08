#include "actor.h"
#include "renderable.h"

namespace  mini {
void actor::update() {
  for(auto& component : components_) {
    component->update();
  }
}

void actor::render() const {
  for(const auto& component : components_) {
    const auto* r = dynamic_cast<renderable*>(component.get());
    if(r != nullptr) {
      r->render();
    }
  }
}

}


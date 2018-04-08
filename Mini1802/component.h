#pragma once
namespace mini {

class actor;

class component {
public:
  virtual ~component() = default;
  component() = delete;

  virtual void update() = 0;
  virtual void initialize() = 0;
protected:
  component(const actor& actor);
  const actor& get_actor_() const;
private:
  const actor& actor_;
};

inline component::component(const actor& actor): actor_(actor) {

}

}

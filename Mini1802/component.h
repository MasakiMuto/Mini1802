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
  explicit component(actor& actor);
  actor& get_actor() const { return actor_; }
private:
  actor& actor_;
};

inline component::component(actor& actor): actor_(actor) {

}

}

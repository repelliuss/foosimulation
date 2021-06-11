#ifndef HUMAN_GK_HPP_
#define HUMAN_GK_HPP_

#include <motion/ArmMotion.hpp>
#include <util/RunningAverage.hpp>

namespace godot {
class HumanGK : public ArmMotion {
  GODOT_CLASS(HumanGK, ArmMotion)

public:
  static void _register_methods();

  HumanGK() noexcept;

  void _init();
  void _ready();
  void _process(float deltatime);

  void on_new_position(int pos) noexcept;

private:
  util::RunningAverage ravg;
};
} // namespace godot

#endif // HUMAN_GK_HPP_

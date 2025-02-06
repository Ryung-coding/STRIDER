#include "teensy_worker.hpp"

using namespace std::chrono_literals;

TeensyNode::TeensyNode() : Node("teensy_node") {
  // Subscriber
  sbus_subscription_ = this->create_subscription<allocator_interfaces::msg::PwmVal>("pwm_val", 1, std::bind(&TeensyNode::allocatorCallback, this, std::placeholders::_1));
  killcmd_subscription_ = this->create_subscription<sbus_interfaces::msg::KillCmd>("sbus_kill", 1, std::bind(&TeensyNode::KillCmdCallback, this, std::placeholders::_1));
  watchdog_subscription_ = this->create_subscription<watchdog_interfaces::msg::NodeState>("watchdog_state", 1, std::bind(&TeensyNode::watchdogCallback, this, std::placeholders::_1));

  // Timer
  timer_ = this->create_wall_timer(1ms, std::bind(&TeensyNode::send_by_CAN, this));
}

void TeensyNode::send_by_CAN() {
  // Watchdog is abnormal or kill activated
  if (watchdog_state_ != 1 && kill_activated_) {
    f1_double_ = 0.0;
    f2_double_ = 0.0;
    f3_double_ = 0.0;
    f4_double_ = 0.0;
  }

  f1_pwm_ = static_cast<uint16_t>(f1_double_ * 2047) + 2048;
  f2_pwm_ = static_cast<uint16_t>(f2_double_ * 2047) + 2048;
  f3_pwm_ = static_cast<uint16_t>(f3_double_ * 2047) + 2048;
  f4_pwm_ = static_cast<uint16_t>(f4_double_ * 2047) + 2048;

  // CAN code (not yet)
  // RCLCPP_INFO(this->get_logger(), "PWM: f1 %u, f2 %u, f3 %u, f4 %u", f1_pwm_, f2_pwm_, f3_pwm_, f4_pwm_);
}

void TeensyNode::allocatorCallback(const allocator_interfaces::msg::PwmVal::SharedPtr msg) {
  // save newest pwm val
  f1_double_ = msg->f1;
  f2_double_ = msg->f2;
  f3_double_ = msg->f3;
  f4_double_ = msg->f4;    
}

void TeensyNode::KillCmdCallback(const sbus_interfaces::msg::KillCmd::SharedPtr msg) {
  // SBUS kill update
  kill_activated_ = msg->kill_activated;
  // RCLCPP_INFO(this->get_logger(), "kill_activated_: %s", kill_activated_ ? "true" : "false");
}

void TeensyNode::watchdogCallback(const watchdog_interfaces::msg::NodeState::SharedPtr msg) {
  // Watchdog update
  watchdog_state_ = msg->state;
}

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<TeensyNode>());
  rclcpp::shutdown();
  return 0;
}
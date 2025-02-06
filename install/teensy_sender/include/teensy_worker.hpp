#ifndef TEENSY_WORKER_HPP
#define TEENSY_WORKER_HPP

#include <rclcpp/rclcpp.hpp>
#include <chrono>
#include <functional>
#include "allocator_interfaces/msg/pwm_val.hpp"
#include "sbus_interfaces/msg/kill_cmd.hpp"
#include "watchdog_interfaces/msg/node_state.hpp"

class TeensyNode : public rclcpp::Node {
public:
  TeensyNode();

private:
  // Callback to handle received PwmVal messages
  void allocatorCallback(const allocator_interfaces::msg::PwmVal::SharedPtr msg);
  void KillCmdCallback(const sbus_interfaces::msg::KillCmd::SharedPtr msg);
  void watchdogCallback(const watchdog_interfaces::msg::NodeState::SharedPtr msg);

  // Periodic timer function to simulate CAN data send
  void send_by_CAN();

  // ROS2 subscriber for pwm_val topic
  rclcpp::Subscription<allocator_interfaces::msg::PwmVal>::SharedPtr sbus_subscription_;
  rclcpp::Subscription<sbus_interfaces::msg::KillCmd>::SharedPtr killcmd_subscription_;
  rclcpp::Subscription<watchdog_interfaces::msg::NodeState>::SharedPtr watchdog_subscription_;

  // Timer for periodic operations
  rclcpp::TimerBase::SharedPtr timer_;

  // Latest PWM values
  double f1_double_ = 0.0; // [0, 1]
  double f2_double_ = 0.0; // [0, 1]
  double f3_double_ = 0.0; // [0, 1]
  double f4_double_ = 0.0; // [0, 1]

  // teensy uses 12 bit analogWrite Resolution
  // range [2048, 4095]
  uint16_t f1_pwm_ = 2048;
  uint16_t f2_pwm_ = 2048;
  uint16_t f3_pwm_ = 2048;
  uint16_t f4_pwm_ = 2048;

  // Watchdog state
  uint8_t watchdog_state_ = 1; // default(normal) is 1.
  bool kill_activated_ = false;
};

#endif // TEENSY_WORKER_HPP

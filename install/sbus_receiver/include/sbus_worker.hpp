#ifndef SBUS_WORKER_HPP_
#define SBUS_WORKER_HPP_

#include <rclcpp/rclcpp.hpp>
#include <sbus_interfaces/msg/sbus_signal.hpp>
#include <sbus_interfaces/msg/kill_cmd.hpp>
#include "watchdog_interfaces/msg/node_state.hpp"
#include <thread>
#include <atomic>

class SbusWorker : public rclcpp::Node {
public:
  explicit SbusWorker(const rclcpp::NodeOptions & options);
  ~SbusWorker();

private:
  void signal_timer_callback();
  void heartbeat_timer_callback();
  void keyboard_listener();

  rclcpp::Publisher<sbus_interfaces::msg::SbusSignal>::SharedPtr signal_publisher_;
  rclcpp::Publisher<watchdog_interfaces::msg::NodeState>::SharedPtr heartbeat_publisher_;
  rclcpp::Publisher<sbus_interfaces::msg::KillCmd>::SharedPtr killcmd_publisher_;

  rclcpp::TimerBase::SharedPtr signal_timer_;
  rclcpp::TimerBase::SharedPtr heartbeat_timer_;

  struct SbusData {
    int16_t ch[18];      // 18-channel data
    uint8_t sbus_signal; // SBUS state
  };

  SbusData sbus_data_; // internal SBUS data
  std::atomic<bool> running_; // To control the keyboard listener thread
  std::thread keyboard_thread_; // Thread for keyboard input

  uint8_t heartbeat_state_ = 0;
  bool kill_toggle_state_ = false;
};

#endif // SBUS_WORKER_HPP_

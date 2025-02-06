#include "sbus_worker.hpp"
#include <iostream>
#include <termios.h>
#include <unistd.h>

SbusWorker::SbusWorker(const rclcpp::NodeOptions & options) : Node("sbus_node", options), running_(true) {
  // Initialize SBUS data
  for (int i = 0; i < 18; ++i) {sbus_data_.ch[i] = 400;}
  sbus_data_.ch[0] = 1000;
  sbus_data_.ch[1] = 1000;
  sbus_data_.ch[2] = 1000;
  sbus_data_.ch[5] = 500;
  sbus_data_.sbus_signal = 0;

  // Create a publisher
  signal_publisher_ = this->create_publisher<sbus_interfaces::msg::SbusSignal>("sbus_signal", 1);
  heartbeat_publisher_ = this->create_publisher<watchdog_interfaces::msg::NodeState>("sbus_state", 1);
  killcmd_publisher_ = this->create_publisher<sbus_interfaces::msg::KillCmd>("sbus_kill", 1);

  // Create a timer
  signal_timer_ = this->create_wall_timer(std::chrono::milliseconds(10), std::bind(&SbusWorker::signal_timer_callback, this));
  heartbeat_timer_ = this->create_wall_timer(std::chrono::milliseconds(100), std::bind(&SbusWorker::heartbeat_timer_callback, this));

  // Start keyboard listener thread
  keyboard_thread_ = std::thread(&SbusWorker::keyboard_listener, this);
}

void SbusWorker::signal_timer_callback() {
  // Populate message
  sbus_interfaces::msg::SbusSignal message;
  sbus_interfaces::msg::KillCmd kill_msg;

  for (int i = 0; i < 18; ++i) {message.ch[i] = sbus_data_.ch[i];}
  message.sbus_signal = sbus_data_.sbus_signal;
  
  if (sbus_data_.ch[5] == 500){kill_msg.kill_activated = false;}
  else {kill_msg.kill_activated = true;}

  // Publish message
  killcmd_publisher_->publish(kill_msg);
  signal_publisher_->publish(message);
}

void SbusWorker::heartbeat_timer_callback() {
  heartbeat_state_++;

  // Populate the NodeState message
  watchdog_interfaces::msg::NodeState state_msg;
  state_msg.state = heartbeat_state_;

  // Publish the sbus_state message
  heartbeat_publisher_->publish(state_msg);
}

void SbusWorker::keyboard_listener() {
  // Configure terminal for non-blocking input
  struct termios oldt, newt;
  tcgetattr(STDIN_FILENO, &oldt); // Save old terminal settings
  newt = oldt;
  newt.c_lflag &= ~(ICANON | ECHO); // Disable canonical mode and echo
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);

  char c;
  while (running_) {
    if (read(STDIN_FILENO, &c, 1) > 0) {
      switch (c) {
        case 'w':
          sbus_data_.ch[0] = std::min(sbus_data_.ch[0] + 20, 1600); break;
        case 's':
          sbus_data_.ch[0] = std::max(sbus_data_.ch[0] - 20, 400); break;
        case 'a':
          sbus_data_.ch[1] = std::max(sbus_data_.ch[1] - 20, 400); break;
        case 'd':
          sbus_data_.ch[1] = std::min(sbus_data_.ch[1] + 20, 1600); break;
        case 'q':
          sbus_data_.ch[2] = std::max(sbus_data_.ch[2] - 20, 400); break;
        case 'e':
          sbus_data_.ch[2] = std::min(sbus_data_.ch[2] + 20, 1600); break;
        case 'f':
          sbus_data_.ch[3] = std::max(sbus_data_.ch[3] - 20, 400); break;
        case 'r':
          sbus_data_.ch[3] = std::min(sbus_data_.ch[3] + 20, 1600); break;
        case 'k':
          if (kill_toggle_state_) {sbus_data_.ch[5] = 800;} // killed.
          else {sbus_data_.ch[5] = 500;} // not killed.
          kill_toggle_state_ = !kill_toggle_state_;
          break;
        default:
          break;
      }
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(1)); // Avoid busy waiting
  }

  // Restore terminal settings
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
}

SbusWorker::~SbusWorker() {
  // Stop the keyboard listener thread
  running_ = false;
  if (keyboard_thread_.joinable()) {
    keyboard_thread_.join();
  }
}

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);

  auto node = std::make_shared<SbusWorker>(rclcpp::NodeOptions());
  rclcpp::spin(node);

  rclcpp::shutdown();
  return 0;
}

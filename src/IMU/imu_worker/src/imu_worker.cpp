#include "imu_worker.hpp"
#include <chrono>
#include <functional>

using namespace std::chrono_literals;

IMUnode::IMUnode() : Node("imu_node") {
    imu_publisher_ = this->create_publisher<imu_interfaces::msg::ImuMeasured>(
        "imu_mea", 10
    );

    // Create a publisher for Heartbeat signal
    heartbeat_publisher_ = this->create_publisher<watchdog_interfaces::msg::NodeState>("imu_state", 10);

    timer_ = this->create_wall_timer(
        1ms, std::bind(&IMUnode::PublishMeasurement, this)
    );

    // Create a timer to publish Node state messages at 10Hz
    heartbeat_timer_ = this->create_wall_timer(
        std::chrono::milliseconds(100),
        std::bind(&IMUnode::heartbeat_timer_callback, this)
    );
}

void IMUnode::PublishMeasurement() {
    auto output_msg = imu_interfaces::msg::ImuMeasured();
    output_msg.q = {0.0, 0.0, 0.0};
    output_msg.qdot = {0.0, 0.0, 0.0};
    output_msg.qddot = {0.0, 0.0, 0.0};

    imu_publisher_->publish(output_msg);
}

void IMUnode::heartbeat_timer_callback() {
  heartbeat_state_++;

  // Populate the NodeState message
  watchdog_interfaces::msg::NodeState state_msg;
  state_msg.state = heartbeat_state_;

  // Publish the sbus_state message
  heartbeat_publisher_->publish(state_msg);
}

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<IMUnode>());
    rclcpp::shutdown();
    return 0;
}
#include "mocap_worker.hpp"
#include <chrono>
#include <functional>

using namespace std::chrono_literals;

OptiTrackNode::OptiTrackNode() : Node("optitrack_node") {
    mocap_publisher_ = this->create_publisher<mocap_interfaces::msg::MocapMeasured>(
        "optitrack_mea", 10
    );

    // Create a publisher for Heartbeat signal
    heartbeat_publisher_ = this->create_publisher<watchdog_interfaces::msg::NodeState>("optitrack_state", 10);
    

    timer_ = this->create_wall_timer(
        1ms, std::bind(&OptiTrackNode::PublishMeasurement, this)
    );

    // Create a timer to publish Node state messages at 10Hz
    heartbeat_timer_ = this->create_wall_timer(
        std::chrono::milliseconds(100),
        std::bind(&OptiTrackNode::heartbeat_timer_callback, this)
    );
}

void OptiTrackNode::PublishMeasurement() {
    auto output_msg = mocap_interfaces::msg::MocapMeasured();
    output_msg.pos = {0.0, 0.0, 0.0};
    output_msg.vel = {0.0, 0.0, 0.0};
    output_msg.acc = {0.0, 0.0, 0.0};

    mocap_publisher_->publish(output_msg);
}


void OptiTrackNode::heartbeat_timer_callback() {
  heartbeat_state_++;

  // Populate the NodeState message
  watchdog_interfaces::msg::NodeState state_msg;
  state_msg.state = heartbeat_state_;

  // Publish the sbus_state message
  heartbeat_publisher_->publish(state_msg);
}

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<OptiTrackNode>());
    rclcpp::shutdown();
    return 0;
}
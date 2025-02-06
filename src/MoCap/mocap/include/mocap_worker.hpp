#ifndef MOCAP_WORKER_HPP
#define MOCAP_WORKER_HPP

#include <rclcpp/rclcpp.hpp>
#include "mocap_interfaces/msg/mocap_measured.hpp"
#include "watchdog_interfaces/msg/node_state.hpp"

class OptiTrackNode : public rclcpp::Node {
public:
    OptiTrackNode();

private:
    void PublishMeasurement();
    void heartbeat_timer_callback();

    rclcpp::Publisher<mocap_interfaces::msg::MocapMeasured>::SharedPtr mocap_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;

    // Publisher&Timer for Heartbeat signal
    rclcpp::Publisher<watchdog_interfaces::msg::NodeState>::SharedPtr heartbeat_publisher_;
    rclcpp::TimerBase::SharedPtr heartbeat_timer_;

    uint8_t heartbeat_state_;  // previous node state
};

#endif // MOCAP_WORKER_HPP
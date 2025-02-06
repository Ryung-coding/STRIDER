#ifndef IMU_WORKER_HPP
#define IMU_WORKER_HPP

#include <rclcpp/rclcpp.hpp>
#include "imu_interfaces/msg/imu_measured.hpp"
#include "watchdog_interfaces/msg/node_state.hpp"

class IMUnode : public rclcpp::Node {
public:
    IMUnode();

private:
    void PublishMeasurement();
    void heartbeat_timer_callback();

    rclcpp::Publisher<imu_interfaces::msg::ImuMeasured>::SharedPtr imu_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    
    // Publisher&Timer for Heartbeat signal
    rclcpp::Publisher<watchdog_interfaces::msg::NodeState>::SharedPtr heartbeat_publisher_;
    rclcpp::TimerBase::SharedPtr heartbeat_timer_;

    uint8_t heartbeat_state_;  // previous node state
};

#endif // IMU_WORKER_HPP
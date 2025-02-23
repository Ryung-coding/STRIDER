#ifndef IMU_WORKER_HPP
#define IMU_WORKER_HPP

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/imu.hpp>
#include "imu_interfaces/msg/imu_measured.hpp"
#include "watchdog_interfaces/msg/node_state.hpp"

class IMUnode : public rclcpp::Node {
public:
    IMUnode();

private:
    void PublishMeasurement();
    void heartbeat_timer_callback();
    sensor_msgs::msg::Imu microstrain_raw_data;
    void microstrain_callback(const sensor_msgs::msg::Imu::SharedPtr msg);

    rclcpp::Publisher<imu_interfaces::msg::ImuMeasured>::SharedPtr imu_publisher_;
    
    rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr imu_subscription_;
    rclcpp::TimerBase::SharedPtr timer_;
    
    // Publisher&Timer for Heartbeat signal
    rclcpp::Publisher<watchdog_interfaces::msg::NodeState>::SharedPtr heartbeat_publisher_;
    rclcpp::TimerBase::SharedPtr heartbeat_timer_;

    uint8_t heartbeat_state_;  // previous node state
    std::array<double, 3> prev_omega_;
    double dt = 0.001;
};

#endif // IMU_WORKER_HPP


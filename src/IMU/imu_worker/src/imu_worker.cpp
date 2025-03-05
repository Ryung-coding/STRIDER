#include "imu_worker.hpp"
#include <chrono>
#include <functional>

using namespace std::chrono_literals;

IMUnode::IMUnode() : Node("imu_node"), heartbeat_state_(0), prev_omega_{0.0, 0.0, 0.0} {
    imu_publisher_ = this->create_publisher<imu_interfaces::msg::ImuMeasured>("imu_custom", 10);
    heartbeat_publisher_ = this->create_publisher<watchdog_interfaces::msg::NodeState>("imu_state", 10);
    imu_subscription_ = this->create_subscription<sensor_msgs::msg::Imu>("imu/data", 10, std::bind(&IMUnode::microstrain_callback, this, std::placeholders::_1));
    
    timer_ = this->create_wall_timer(
        1ms, std::bind(&IMUnode::PublishMeasurement, this)
    );

    // Create a timer to publish Node state messages at 10Hz
    heartbeat_timer_ = this->create_wall_timer(
        std::chrono::milliseconds(100),
        std::bind(&IMUnode::heartbeat_timer_callback, this)
    );
}

void IMUnode::microstrain_callback(const sensor_msgs::msg::Imu::SharedPtr msg) {
    microstrain_raw_data.orientation = msg->orientation;
    microstrain_raw_data.angular_velocity = msg->angular_velocity;
    microstrain_raw_data.linear_acceleration = msg->linear_acceleration;
}

void IMUnode::PublishMeasurement() {
    
    imu_interfaces::msg::ImuMeasured imu_custom_msg;

    double qx = microstrain_raw_data.orientation.x;
    double qy = microstrain_raw_data.orientation.y;
    double qz = microstrain_raw_data.orientation.z;
    double qw = microstrain_raw_data.orientation.w;
    
    double roll = atan2(2.0 * (qw * qx + qy * qz), 1.0 - 2.0 * (qx * qx + qy * qy));
    double pitch = asin(2.0 * (qw * qy - qz * qx));
    double yaw = atan2(2.0 * (qw * qz + qx * qy), 1.0 - 2.0 * (qy * qy + qz * qz));
    

    imu_custom_msg.angle = {roll, -pitch, -yaw}; //customizing "imu mark" version

    imu_custom_msg.omega = {microstrain_raw_data.angular_velocity.x, 
                            microstrain_raw_data.angular_velocity.y, 
                            microstrain_raw_data.angular_velocity.z};

    imu_custom_msg.alpha = {
        (microstrain_raw_data.angular_velocity.x - prev_omega_[0]) / dt,
        (microstrain_raw_data.angular_velocity.y - prev_omega_[1]) / dt,
        (microstrain_raw_data.angular_velocity.z - prev_omega_[2]) / dt
    };

    prev_omega_ = {microstrain_raw_data.angular_velocity.x, microstrain_raw_data.angular_velocity.y, microstrain_raw_data.angular_velocity.z};

    imu_custom_msg.acc_body = {microstrain_raw_data.linear_acceleration.x, 
                               microstrain_raw_data.linear_acceleration.y, 
                               microstrain_raw_data.linear_acceleration.z};

    imu_publisher_->publish(imu_custom_msg);
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

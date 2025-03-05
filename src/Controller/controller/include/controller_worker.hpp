#ifndef CONTROLLER_WORKER_HPP
#define CONTROLLER_WORKER_HPP

#include <rclcpp/rclcpp.hpp>
#include "sbus_interfaces/msg/sbus_signal.hpp"
#include "controller_interfaces/msg/controller_output.hpp"
#include "controller_interfaces/msg/controller_debug_val.hpp"
#include "allocator_interfaces/msg/joint_val.hpp"
#include "mocap_interfaces/msg/mocap_measured.hpp"
#include "imu_interfaces/msg/imu_measured.hpp"
#include "watchdog_interfaces/msg/node_state.hpp"

constexpr double PI = 3.1415926535897932384626433832706;

class PID_3 {
public:
  PID_3(const double Kp[3], const double Ki[3], const double Kd[3], const double Sat_gain[3], const double lpf_gain, const double dt);
  PID_3() {}
  double update(const double& ref, const double msr[3], double output[3]);

private:
  double Kp[3], Ki[3], Kd[3], dt;
  double integral[3], prev_err[3], Sat_gain[3];
  double lpfAlpha[3], lpfBeta[3], prev_derivative[3];
};

class ControllerNode : public rclcpp::Node {
public:
  ControllerNode();

private:
  void sbusCallback(const sbus_interfaces::msg::SbusSignal::SharedPtr msg);
  void jointValCallback(const allocator_interfaces::msg::JointVal::SharedPtr msg);
  void optitrackCallback(const mocap_interfaces::msg::MocapMeasured::SharedPtr msg);
  void imuCallback(const imu_interfaces::msg::ImuMeasured::SharedPtr msg);
  void contorller_timer_callback();
  void heartbeat_timer_callback();
  void debugging_timer_callback();

  //Four PID instances
  PID_3 pid_roll_, pid_pitch_, pid_yaw_, pid_z_;

    //Subscribers
  rclcpp::Subscription<sbus_interfaces::msg::SbusSignal>::SharedPtr sbus_subscription_;
  rclcpp::Subscription<allocator_interfaces::msg::JointVal>::SharedPtr joint_val_subscription_;
  rclcpp::Subscription<mocap_interfaces::msg::MocapMeasured>::SharedPtr optitrack_mea_subscription_;
  rclcpp::Subscription<imu_interfaces::msg::ImuMeasured>::SharedPtr imu_mea_subscription_;

    //Publishers
  rclcpp::Publisher<controller_interfaces::msg::ControllerOutput>::SharedPtr controller_publisher_;

    //Debugers
  rclcpp::Publisher<watchdog_interfaces::msg::NodeState>::SharedPtr heartbeat_publisher_;
  rclcpp::Publisher<controller_interfaces::msg::ControllerDebugVal>::SharedPtr debug_val_publisher_;

    //Timers for publishing
  rclcpp::TimerBase::SharedPtr contorller_timer_;
  rclcpp::TimerBase::SharedPtr heartbeat_timer_;
  rclcpp::TimerBase::SharedPtr debugging_timer_;
  
  allocator_interfaces::msg::JointVal latest_joint_val_;

  double weight = 0;

  double des_pos_[4] = {0.0, 0.0, 0.0, 0.0};
  double state_roll_[3] = {0.0, 0.0, 0.0};
  double state_pitch_[3] = {0.0, 0.0, 0.0};
  double state_yaw_[3] = {0.0, 0.0, 0.0};
  double state_x_[3] = {0.0, 0.0, 0.0};
  double state_y_[3] = {0.0, 0.0, 0.0};
  double state_z_[3] = {0.0, 0.0, 0.0};

  double arm1_pos[5] = {0.0, 0.0, 0.0, 0.0, 0.0};
  double arm2_pos[5] = {0.0, 0.0, 0.0, 0.0, 0.0};
  double arm3_pos[5] = {0.0, 0.0, 0.0, 0.0, 0.0};
  double arm4_pos[5] = {0.0, 0.0, 0.0, 0.0, 0.0};

  // for debugger
  double pid_midval_roll_[3] = {0.0, 0.0, 0.0};
  double pid_midval_pitch_[3] = {0.0, 0.0, 0.0};
  double pid_midval_yaw_[3] = {0.0, 0.0, 0.0};
  double pid_midval_z_[3] = {0.0, 0.0, 0.0};

  uint8_t heartbeat_state_ = 0; // previous node state
};

#endif // CONTROLLER_WORKER_HPP

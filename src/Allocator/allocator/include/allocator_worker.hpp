#ifndef ALLOCATOR_WORKER_HPP
#define ALLOCATOR_WORKER_HPP

#include <cmath> 
#include <vector>
#include "rclcpp/rclcpp.hpp"
#include "controller_interfaces/msg/controller_output.hpp"
#include "allocator_interfaces/msg/joint_val.hpp"
#include "allocator_interfaces/msg/pwm_val.hpp"
#include "allocator_interfaces/msg/allocator_debug_val.hpp"
#include "watchdog_interfaces/msg/node_state.hpp"
#include <Eigen/Dense>

using Eigen::Matrix3d;
using Eigen::Matrix4d;
using Eigen::Vector3d;
using Eigen::Vector4d;
using Eigen::VectorXd;
using Eigen::MatrixXd;

#define A1 0.13 // Arm length [m]
#define A2 0.15 // Arm length [m]
#define A3 0.18 // Arm length [m]
#define A4 0.6625 // Arm length [m]
#define A5 0.64 // Arm length [m]
#define A_B 0.06 // Arm length between {B} and {0} [m]

#define zeta 0.001 // Arm length [m]

#define xc 0.001 // Center of Mass position [m]
#define yc 0.001 // Center of Mass position [m]
#define zc 0.001 // Center of Mass position [m]

class AllocatorWorker : public rclcpp::Node {
public:
  AllocatorWorker();
  ~AllocatorWorker() = default;

private:
  void controllerCallback(const controller_interfaces::msg::ControllerOutput::SharedPtr msg);
  void JointValCallback(const allocator_interfaces::msg::JointVal::SharedPtr msg);
  void heartbeat_timer_callback();
  void debugging_timer_callback();
  void publishJointVal();
  void publishPwmVal();
  
  // Subscribers
  rclcpp::Subscription<controller_interfaces::msg::ControllerOutput>::SharedPtr controller_sub_;
  rclcpp::Subscription<allocator_interfaces::msg::JointVal>::SharedPtr joint_val_sub_;
  // Publishers
  rclcpp::Publisher<allocator_interfaces::msg::JointVal>::SharedPtr joint_publisher_;
  rclcpp::Publisher<allocator_interfaces::msg::PwmVal>::SharedPtr pwm_publisher_;
  rclcpp::Publisher<watchdog_interfaces::msg::NodeState>::SharedPtr heartbeat_publisher_;
  rclcpp::Publisher<allocator_interfaces::msg::AllocatorDebugVal>::SharedPtr debug_val_publisher_;

  // Timers for publishing
  rclcpp::TimerBase::SharedPtr joint_timer_;
  rclcpp::TimerBase::SharedPtr pwm_timer_;
  rclcpp::TimerBase::SharedPtr heartbeat_timer_;
  rclcpp::TimerBase::SharedPtr debugging_timer_;

  MatrixXd DH_params;
  Vector4d W1 = Vector4d::Zero(); // PID-control result [N N.m N.m N.m]
  Vector4d u = Vector4d::Zero(); // Allocated result [N N N N]
  Vector4d pwm = Vector4d::Zero(); // Allocated result [pwm pwm pwm pwm]
  Vector3d CoM = Vector3d::Zero(); //Center of Mass position [xc yc zc]
  VectorXd a1_q, a2_q, a3_q, a4_q;
  
  MatrixXd A_1 = MatrixXd::Zero(4, 12);
  MatrixXd A_2 = MatrixXd::Zero(12, 4);
  MatrixXd A = MatrixXd::Zero(4, 4);
  MatrixXd A_inv = MatrixXd::Zero(4,4);
  double pwm_alpha_=0.0;
  double pwm_beta_=0.0;

  uint8_t heartbeat_state_; // previous node state
};

#endif // ALLOCATOR_WORKER_HPP

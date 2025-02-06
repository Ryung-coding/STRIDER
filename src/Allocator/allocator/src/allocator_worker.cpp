#include "allocator_worker.hpp"

AllocatorWorker::AllocatorWorker() : Node("allocator_node") {

  // u = A * f
  const double l = 0.25;  // Arm length
  const double C_m = 1.0;  // this should be tuned.
  A = (Matrix4d() << 1.0, 1.0, 1.0, 1.0,
                     -l,  -l,   l,   l,
                     -l,   l,  -l,   l,
                     C_m, -C_m, -C_m, C_m).finished();
  A_inv = A.inverse();

  // F = a * pwm^2 - b
  pwm_alpha_ = 1.0;
  pwm_beta_ = -0.0;

  // Subscriber
  controller_sub_ = this->create_subscription<controller_interfaces::msg::ControllerOutput>("controller_output", 1, std::bind(&AllocatorWorker::controllerCallback, this, std::placeholders::_1));

  // Publishers
  joint_publisher_ = this->create_publisher<allocator_interfaces::msg::JointVal>("joint_val", 1);
  pwm_publisher_ = this->create_publisher<allocator_interfaces::msg::PwmVal>("pwm_val", 1);
  heartbeat_publisher_ = this->create_publisher<watchdog_interfaces::msg::NodeState>("allocator_state", 1);
  debug_val_publisher_ = this->create_publisher<allocator_interfaces::msg::AllocatorDebugVal>("allocator_info", 1);

  // Timers for periodic publishing
  joint_timer_ = this->create_wall_timer(std::chrono::milliseconds(10), std::bind(&AllocatorWorker::publishJointVal, this));
  pwm_timer_ = this->create_wall_timer(std::chrono::milliseconds(1), std::bind(&AllocatorWorker::publishPwmVal, this));
  heartbeat_timer_ = this->create_wall_timer(std::chrono::milliseconds(100), std::bind(&AllocatorWorker::heartbeat_timer_callback, this));
  debugging_timer_ = this->create_wall_timer(std::chrono::milliseconds(100), std::bind(&AllocatorWorker::debugging_timer_callback, this));
}

void AllocatorWorker::controllerCallback(const controller_interfaces::msg::ControllerOutput::SharedPtr msg) {
  // get [F Mx My Mz]
  f << msg->force, msg->moment[0], msg->moment[1], msg->moment[2];

  // compute f [f1 f2 f3 f4] in [N]
  u = A_inv * f;

  // resolve f[N] to pwm[0.0~1.0]
  pwm = ((u.array() - pwm_beta_).array() / pwm_alpha_).cwiseSqrt().matrix();
  pwm = pwm.cwiseMax(0.0).cwiseMin(1.0); // this clamps to [0, 1]

  RCLCPP_INFO(this->get_logger(), "Clamped PWM: [f1: %.2f, f2: %.2f, f3: %.2f, f4: %.2f]", u[0], u[1], u[2], u[3]);
}

void AllocatorWorker::publishJointVal() {
  auto joint_msg = allocator_interfaces::msg::JointVal();

  // this is dummy zero
  for (int i = 0; i < 5; ++i) {
    joint_msg.a1_q[i] = 0.0;
    joint_msg.a2_q[i] = 0.0;
    joint_msg.a3_q[i] = 0.0;
    joint_msg.a4_q[i] = 0.0;
  }

  joint_publisher_->publish(joint_msg);
}

void AllocatorWorker::publishPwmVal() {
  auto pwm_msg = allocator_interfaces::msg::PwmVal();
  // this range should be [0, 1]
  pwm_msg.f1 = pwm[0];
  pwm_msg.f2 = pwm[1];
  pwm_msg.f3 = pwm[2];
  pwm_msg.f4 = pwm[3];
  pwm_publisher_->publish(pwm_msg);
}

void AllocatorWorker::heartbeat_timer_callback() {
  heartbeat_state_++;

  // Populate the NodeState message
  watchdog_interfaces::msg::NodeState state_msg;
  state_msg.state = heartbeat_state_;

  // Publish the sbus_state message
  heartbeat_publisher_->publish(state_msg);
}

void AllocatorWorker::debugging_timer_callback() {
  // Populate the debugging message
  allocator_interfaces::msg::AllocatorDebugVal info_msg;
  info_msg.pwm[0] = pwm[0];
  info_msg.pwm[1] = pwm[1];
  info_msg.pwm[2] = pwm[2];
  info_msg.pwm[3] = pwm[3];

  // Publish
  debug_val_publisher_->publish(info_msg);
}

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<AllocatorWorker>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}

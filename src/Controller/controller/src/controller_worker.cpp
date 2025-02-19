#include "controller_worker.hpp"
#include <chrono>
#include <functional>

using namespace std::chrono_literals;

PID_3::PID_3(const double Kp[3], const double Ki[3], const double Kd[3], const double Sat_gain[3], const double lpf_gain, const double dt) {
  this->dt = dt;
  for (int i = 0; i < 3; i++) {
    this->Kp[i] = Kp[i];
    this->Ki[i] = Ki[i];
    this->Kd[i] = Kd[i];
    this->Sat_gain[i] = Sat_gain[i];
    this->prev_err[i] = 0.0;
    this->integral[i] = 0.0;
    this->lpfAlpha[i] = lpf_gain;
    this->lpfBeta[i] = 1 - lpfAlpha[i];
  }
}

double PID_3::update(const double& ref, const double msr[3], double output[3]) {
  double error = ref - msr[0];
  for (int8_t i = 0; i < 3; i++) {
    if (i > 0) { error = output[i-1] - msr[i]; }
    integral[i] += error * dt;
    integral[i] = std::clamp(integral[i], -Sat_gain[i], Sat_gain[i]);
    double derivative = (error - prev_err[i]) / dt;
    derivative = lpfAlpha[i] * derivative + lpfBeta[i] * prev_derivative[i];
    output[i] = Kp[i] * error + Ki[i] * integral[i] + Kd[i] * derivative;
    prev_err[i] = error;
    prev_derivative[i] = derivative;
  }
  return output[2];
}

// ---------------------------------------------------------------------------------- //

ControllerNode::ControllerNode() : Node("controller_node") {

  // PID_RollPitch parameters
  static const double Kp_rp[3] = {1.0, 1.0, 1.0};
  static const double Ki_rp[3] = {0.0, 0.0, 0.0};
  static const double Kd_rp[3] = {0.0, 0.0, 0.0};
  static const double Sat_gain_rp[3] = {0.0, 0.0, 0.0};
  static const double lpf_gain_rp = 0.0;

  // PID_Yaw parameters
  static const double Kp_yaw[3] = {1.0, 1.0, 1.0};
  static const double Ki_yaw[3] = {0.0, 0.0, 0.0};
  static const double Kd_yaw[3] = {0.0, 0.0, 0.0};
  static const double Sat_gain_yaw[3] = {0.0, 0.0, 0.0};
  static const double lpf_gain_yaw = 0.0;

  // PID_Z parameters
  static const double Kp_z[3] = {1.0, 1.0, 1.0};
  static const double Ki_z[3] = {0.0, 0.0, 0.0};
  static const double Kd_z[3] = {0.0, 0.0, 0.0};
  static const double Sat_gain_z[3] = {0.0, 0.0, 0.0};
  static const double lpf_gain_z = 0.0;

  static const double dt = 0.001;

  weight = 9.80665 * 2; // drone total mass

  // PID instances
  pid_roll_ = PID_3(Kp_rp, Ki_rp, Kd_rp, Sat_gain_rp, lpf_gain_rp, dt);
  pid_pitch_ = PID_3(Kp_rp, Ki_rp, Kd_rp, Sat_gain_rp, lpf_gain_rp, dt);
  pid_yaw_ = PID_3(Kp_yaw, Ki_yaw, Kd_yaw, Sat_gain_yaw, lpf_gain_yaw, dt);
  pid_z_ = PID_3(Kp_z, Ki_z, Kd_z, Sat_gain_z, lpf_gain_z, dt);

  // Subscription
  sbus_subscription_ = this->create_subscription<sbus_interfaces::msg::SbusSignal>("sbus_signal", 1, std::bind(&ControllerNode::sbusCallback, this, std::placeholders::_1));
  optitrack_mea_subscription_ = this->create_subscription<mocap_interfaces::msg::MocapMeasured>("optitrack_mea", 1, std::bind(&ControllerNode::optitrackCallback, this, std::placeholders::_1));
  imu_mea_subscription_ = this->create_subscription<imu_interfaces::msg::ImuMeasured>("imu_mea", 1, std::bind(&ControllerNode::imuCallback, this, std::placeholders::_1));

  // Publish
  controller_publisher_ = this->create_publisher<controller_interfaces::msg::ControllerOutput>("controller_output", 1);
  heartbeat_publisher_ = this->create_publisher<watchdog_interfaces::msg::NodeState>("controller_state", 1);
  debug_val_publisher_ = this->create_publisher<controller_interfaces::msg::ControllerDebugVal>("controller_info", 1);

  // Create Timer
  contorller_timer_ = this->create_wall_timer(std::chrono::milliseconds(1), std::bind(&ControllerNode::contorller_timer_callback, this));
  heartbeat_timer_ = this->create_wall_timer(std::chrono::milliseconds(100), std::bind(&ControllerNode::heartbeat_timer_callback, this));
  debugging_timer_ = this->create_wall_timer(std::chrono::milliseconds(100), std::bind(&ControllerNode::debugging_timer_callback, this));
}

void ControllerNode::contorller_timer_callback() {
  double Mx = pid_roll_.update(des_pos_[0], state_roll_, pid_midval_roll_); //[Nm]
  double My = pid_pitch_.update(des_pos_[1], state_pitch_, pid_midval_pitch_); //[Nm]
  double Mz = pid_yaw_.update(des_pos_[2], state_yaw_, pid_midval_yaw_); //[Nm]
  double F = pid_z_.update(des_pos_[3], state_z_, pid_midval_z_) + weight; //[N]

  auto output_msg = controller_interfaces::msg::ControllerOutput();
  output_msg.force = F;
  output_msg.moment = {Mx, My, Mz};

  controller_publisher_->publish(output_msg);
}

void ControllerNode::sbusCallback(const sbus_interfaces::msg::SbusSignal::SharedPtr msg) {
  // channel -> (min, max) = (400, 1600), default = 1000
  // des_rpy -> (min, max) = (-pi/8, pi/8), default = 0.0
  // des_z   -> (min, max) = (0, 2), default = 0.0
  des_pos_[0] = static_cast<double>(msg->ch[0]-1000) / 4800.0 * PI;
  des_pos_[1] = static_cast<double>(msg->ch[1]-1000) / 4800.0 * PI;
  des_pos_[2] = static_cast<double>(msg->ch[2]-1000) / 4800.0 * PI;
  des_pos_[3] = std::max(0.0, static_cast<double>(msg->ch[3]-400) / 600.0);

  // RCLCPP_INFO(this->get_logger(), "des_r: %.3f, des_p: %.3f, des_y: %.3f, des_z: %.3f", des_r_, des_p_, des_y_, des_z_);
}

void ControllerNode::optitrackCallback(const mocap_interfaces::msg::MocapMeasured::SharedPtr msg) {
  state_x_[0] = msg->pos[0]; state_x_[1] = msg->vel[0]; state_x_[2] = msg->acc[0];
  state_y_[0] = msg->pos[1]; state_y_[1] = msg->vel[1]; state_y_[2] = msg->acc[1];
  state_z_[0] = msg->pos[2]; state_z_[1] = msg->vel[2]; state_z_[2] = msg->acc[2];
}

void ControllerNode::imuCallback(const imu_interfaces::msg::ImuMeasured::SharedPtr msg) {
  state_roll_[0] = msg->q[0]; state_roll_[1] = msg->qdot[0]; state_roll_[2] = msg->qddot[0];
  state_pitch_[0] = msg->q[1]; state_pitch_[1] = msg->qdot[1]; state_pitch_[2] = msg->qddot[1];
  state_yaw_[0] = msg->q[2]; state_yaw_[1] = msg->qdot[2]; state_yaw_[2] = msg->qddot[2];
}

void ControllerNode::heartbeat_timer_callback() {
  heartbeat_state_++;

  // Populate the NodeState message
  watchdog_interfaces::msg::NodeState state_msg;
  state_msg.state = heartbeat_state_;

  // Publish the sbus_state message
  heartbeat_publisher_->publish(state_msg);
}

void ControllerNode::debugging_timer_callback() {
  // Populate the debugging message
  controller_interfaces::msg::ControllerDebugVal info_msg;
  
  for (int i = 0; i < 4; i++) {info_msg.des_pos[i] = des_pos_[i];  }

  info_msg.pid_mx[0] = pid_midval_roll_[0]; info_msg.pid_mx[1] = pid_midval_roll_[1]; info_msg.pid_mx[2] = pid_midval_roll_[2];
  info_msg.pid_my[0] = pid_midval_pitch_[0]; info_msg.pid_my[1] = pid_midval_pitch_[1]; info_msg.pid_my[2] = pid_midval_pitch_[2];
  info_msg.pid_mz[0] = pid_midval_yaw_[0]; info_msg.pid_mz[1] = pid_midval_yaw_[1]; info_msg.pid_mz[2] = pid_midval_yaw_[2];
  info_msg.pid_f[0] = pid_midval_z_[0]; info_msg.pid_f[1] = pid_midval_z_[1]; info_msg.pid_f[2] = pid_midval_z_[2];

  for (int i = 0; i < 3; i++) {
    info_msg.imu_roll[i] = state_roll_[i];
    info_msg.imu_pitch[i] = state_pitch_[i];
    info_msg.imu_yaw[i] = state_yaw_[i];
    info_msg.opti_x[i] = state_x_[i];
    info_msg.opti_y[i] = state_y_[i];
    info_msg.opti_z[i] = state_z_[i];
  }

  for (int i = 0; i < 5; i++) {
    info_msg.a1_mea[i] = arm1_pos[i];
    info_msg.a2_mea[i] = arm2_pos[i];
    info_msg.a3_mea[i] = arm3_pos[i];
    info_msg.a4_mea[i] = arm4_pos[i];
  }

  // Publish
  debug_val_publisher_->publish(info_msg);
}

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ControllerNode>());
  rclcpp::shutdown();
  return 0;
}

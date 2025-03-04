#include "allocator_worker.hpp"

AllocatorWorker::AllocatorWorker() : Node("allocator_node") {

    // Subscriber
  controller_sub_ = this->create_subscription<controller_interfaces::msg::ControllerOutput>("controller_output", 1, std::bind(&AllocatorWorker::controllerCallback, this, std::placeholders::_1));
  joint_val_sub_ = this->create_subscription<allocator_interfaces::msg::JointVal>("joint_mea", 1, std::bind(&AllocatorWorker::JointValCallback, this, std::placeholders::_1));
  
    // Publishers
  joint_publisher_ = this->create_publisher<allocator_interfaces::msg::JointVal>("joint_val", 1);
  pwm_publisher_ = this->create_publisher<allocator_interfaces::msg::PwmVal>("pwm_val", 1);

    // Debugers
  heartbeat_publisher_ = this->create_publisher<watchdog_interfaces::msg::NodeState>("allocator_state", 1);
  debug_val_publisher_ = this->create_publisher<allocator_interfaces::msg::AllocatorDebugVal>("allocator_info", 1);

    // Timers for periodic publishing
  joint_timer_ = this->create_wall_timer(std::chrono::milliseconds(10), std::bind(&AllocatorWorker::publishJointVal, this));
  pwm_timer_ = this->create_wall_timer(std::chrono::milliseconds(1), std::bind(&AllocatorWorker::publishPwmVal, this));
  heartbeat_timer_ = this->create_wall_timer(std::chrono::milliseconds(100), std::bind(&AllocatorWorker::heartbeat_timer_callback, this));
  debugging_timer_ = this->create_wall_timer(std::chrono::milliseconds(100), std::bind(&AllocatorWorker::debugging_timer_callback, this));
  
  a1_q.resize(5);
  a2_q.resize(5);
  a3_q.resize(5);
  a4_q.resize(5);
  DH_params.resize(7,4);

  DH_params << 
  //  a     alpha    d  theta
      0,    M_PI,    0, 0,       // O -> B
      A_B,  0,       0, M_PI,    // B -> 0
      A1,   M_PI/2,  0, 0,       // 0 -> 1
      A2,   0,       0, 0,       // 1 -> 2
      A3,   0,       0, 0,       // 2 -> 3
      A4,   M_PI/2,  0, M_PI,    // 3 -> 4
      A5,   0,       0, 0;       // 4 -> 5

  CoM << xc, yc, zc;
}


  //get Arm position(q)
void AllocatorWorker::JointValCallback(const allocator_interfaces::msg::JointVal::SharedPtr msg) {
  for (int i = 0; i < 5; i++) {
      a1_q(i) = msg->a1_q[i];
      a2_q(i) = msg->a2_q[i];
      a3_q(i) = msg->a3_q[i];
      a4_q(i) = msg->a4_q[i];
  }
}


  // get Wrench_1={o} frame [Tau_rall Tau_pitch Tau_yaw Fz]^T --> Under-actuated system Allocation part
void AllocatorWorker::controllerCallback(const controller_interfaces::msg::ControllerOutput::SharedPtr msg) {
  
  W1 << msg->moment[0], msg->moment[1], msg->moment[2], msg->force+10*4;

  for (int arm_number = 1; arm_number <= 4; arm_number++) {
      Matrix4d T05 = Matrix4d::Identity();
      VectorXd q = (arm_number == 1) ? a1_q : (arm_number == 2) ? a2_q : (arm_number == 3) ? a3_q : a4_q;

      for (size_t i = 0; i < 7; i++) {
          double a = DH_params(i, 0);
          double alpha = DH_params(i, 1);
          double d = DH_params(i, 2);
          double theta = DH_params(i, 3);
          if( i>=1 && i<=5) theta += q(i-1);
          

          Matrix4d T;
          T << cos(theta), -sin(theta) * cos(alpha),  sin(theta) * sin(alpha), a * cos(theta),
                sin(theta),  cos(theta) * cos(alpha), -cos(theta) * sin(alpha), a * sin(theta),
                0,          sin(alpha),              cos(alpha),               d,
                0,          0,                        0,                        1;

          T05 *= T;
      }

      if (arm_number == 1) Transformation_a1 = T05;
      else if (arm_number == 2) Transformation_a2 = T05;
      else if (arm_number == 3) Transformation_a3 = T05;
      else Transformation_a4 = T05;
  }

  Vector3d r1 = Transformation_a1.block<3,1>(0,3) - CoM;
  Vector3d r2 = Transformation_a2.block<3,1>(0,3) - CoM;
  Vector3d r3 = Transformation_a3.block<3,1>(0,3) - CoM;
  Vector3d r4 = Transformation_a4.block<3,1>(0,3) - CoM;
  
  Matrix3d skew1 = (Matrix3d() <<      0, -r1(2),  r1(1),               
                                   r1(2),      0, -r1(0),
                                  -r1(1),  r1(0),     0).finished();  

  Matrix3d skew2 = (Matrix3d() <<      0, -r2(2),  r2(1),               
                                   r2(2),      0, -r2(0),
                                  -r2(1),  r2(0),     0).finished();  

  Matrix3d skew3 = (Matrix3d() <<      0, -r3(2),  r3(1),               
                                   r3(2),      0, -r3(0),
                                  -r3(1),  r3(0),     0).finished();  

  Matrix3d skew4 = (Matrix3d() <<      0, -r4(2),  r4(1),               
                                   r4(2),      0, -r4(0),
                                  -r4(1),  r4(0),     0).finished();

  Matrix3d M1 = (skew1 - zeta * Matrix3d::Identity());
  Matrix3d M2 = (skew2 + zeta * Matrix3d::Identity());
  Matrix3d M3 = (skew3 - zeta * Matrix3d::Identity());
  Matrix3d M4 = (skew4 + zeta * Matrix3d::Identity());
  
  A_1.block<3,3>(0,0) = M1;
  A_1.block<3,3>(0,3) = M2;
  A_1.block<3,3>(0,6) = M3;
  A_1.block<3,3>(0,9) = M4;
  
  A_1(3,2)=1;
  A_1(3,5)=1;
  A_1(3,8)=1;
  A_1(3,11)=1;

  A_2.block<3,1>(0,0) = Transformation_a1.block<3,1>(0,0);
  A_2.block<3,1>(3,1) = Transformation_a2.block<3,1>(0,0);
  A_2.block<3,1>(6,2) = Transformation_a3.block<3,1>(0,0);
  A_2.block<3,1>(9,3) = Transformation_a4.block<3,1>(0,0);
    
    // std::ostringstream buf;  
    // buf << "\n" << A_1;
    // buf << "\n" << M1;
    // buf << "\n" << M2;
    // buf << "\n" << M3;
    // buf << "\n" << M4;
    // buf << "\n" << A_2;
    // buf << "\n" << Transformation_a1.block<3,1>(0,0);
    // buf << "\n" << Transformation_a2.block<3,1>(0,0);
    // buf << "\n" << Transformation_a3.block<3,1>(0,0);
    // buf << "\n" << Transformation_a4.block<3,1>(0,0);
    
    // RCLCPP_INFO(this->get_logger(), "%s", buf.str().c_str());
  A = A_1*A_2;

  A_inv = A.inverse();

  // compute f [f1 f2 f3 f4] in [N]
  f = A_inv * W1;

  // resolve f[N] to pwm[0.0~1.0] 1000 2000 0-100?
  pwm = ((f.array() - pwm_beta).array() / pwm_alpha).cwiseSqrt().matrix();
  pwm = pwm.cwiseMax(0.0).cwiseMin(1.0); // this clamps to [0, 1]

  RCLCPP_INFO(this->get_logger(), "[f1: %.2f, f2: %.2f, f3: %.2f, f4: %.2f Fz: %.2f]", f[0], f[1], f[2], f[3], f[0]+f[1]+f[2]+f[3]);
}


void AllocatorWorker::publishJointVal() {
  auto joint_msg = allocator_interfaces::msg::JointVal();

  // this is dummy zero---------------------------------------
  for (int i = 0; i < 5; i++) {
    joint_msg.a1_q[i] = 0.0;
    joint_msg.a2_q[i] = 0.0;
    joint_msg.a3_q[i] = 0.0;
    joint_msg.a4_q[i] = 0.0;
  }
  // this is dummy zero---------------------------------------

  joint_publisher_->publish(joint_msg);
}


void AllocatorWorker::publishPwmVal() {
  auto pwm_msg = allocator_interfaces::msg::PwmVal(); // this range should be [0, 1]

  pwm_msg.f1 = pwm[0];
  pwm_msg.f2 = pwm[1];
  pwm_msg.f3 = pwm[2];
  pwm_msg.f4 = pwm[3];
  pwm_publisher_->publish(pwm_msg);
}


  // Populate the NodeState message
void AllocatorWorker::heartbeat_timer_callback() {
  heartbeat_state_++;

  watchdog_interfaces::msg::NodeState state_msg;
  state_msg.state = heartbeat_state_;
  heartbeat_publisher_->publish(state_msg);
}


  // Populate the debugging message
void AllocatorWorker::debugging_timer_callback() {
  
  allocator_interfaces::msg::AllocatorDebugVal info_msg;
  info_msg.pwm[0] = pwm[0];
  info_msg.pwm[1] = pwm[1];
  info_msg.pwm[2] = pwm[2];
  info_msg.pwm[3] = pwm[3];
  debug_val_publisher_->publish(info_msg);
}


int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<AllocatorWorker>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}

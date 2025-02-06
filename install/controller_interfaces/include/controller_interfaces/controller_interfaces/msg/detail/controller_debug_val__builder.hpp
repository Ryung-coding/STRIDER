// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_interfaces:msg/ControllerDebugVal.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_DEBUG_VAL__BUILDER_HPP_
#define CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_DEBUG_VAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controller_interfaces/msg/detail/controller_debug_val__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace controller_interfaces
{

namespace msg
{

namespace builder
{

class Init_ControllerDebugVal_a4_mea
{
public:
  explicit Init_ControllerDebugVal_a4_mea(::controller_interfaces::msg::ControllerDebugVal & msg)
  : msg_(msg)
  {}
  ::controller_interfaces::msg::ControllerDebugVal a4_mea(::controller_interfaces::msg::ControllerDebugVal::_a4_mea_type arg)
  {
    msg_.a4_mea = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_interfaces::msg::ControllerDebugVal msg_;
};

class Init_ControllerDebugVal_a3_mea
{
public:
  explicit Init_ControllerDebugVal_a3_mea(::controller_interfaces::msg::ControllerDebugVal & msg)
  : msg_(msg)
  {}
  Init_ControllerDebugVal_a4_mea a3_mea(::controller_interfaces::msg::ControllerDebugVal::_a3_mea_type arg)
  {
    msg_.a3_mea = std::move(arg);
    return Init_ControllerDebugVal_a4_mea(msg_);
  }

private:
  ::controller_interfaces::msg::ControllerDebugVal msg_;
};

class Init_ControllerDebugVal_a2_mea
{
public:
  explicit Init_ControllerDebugVal_a2_mea(::controller_interfaces::msg::ControllerDebugVal & msg)
  : msg_(msg)
  {}
  Init_ControllerDebugVal_a3_mea a2_mea(::controller_interfaces::msg::ControllerDebugVal::_a2_mea_type arg)
  {
    msg_.a2_mea = std::move(arg);
    return Init_ControllerDebugVal_a3_mea(msg_);
  }

private:
  ::controller_interfaces::msg::ControllerDebugVal msg_;
};

class Init_ControllerDebugVal_a1_mea
{
public:
  explicit Init_ControllerDebugVal_a1_mea(::controller_interfaces::msg::ControllerDebugVal & msg)
  : msg_(msg)
  {}
  Init_ControllerDebugVal_a2_mea a1_mea(::controller_interfaces::msg::ControllerDebugVal::_a1_mea_type arg)
  {
    msg_.a1_mea = std::move(arg);
    return Init_ControllerDebugVal_a2_mea(msg_);
  }

private:
  ::controller_interfaces::msg::ControllerDebugVal msg_;
};

class Init_ControllerDebugVal_opti_z
{
public:
  explicit Init_ControllerDebugVal_opti_z(::controller_interfaces::msg::ControllerDebugVal & msg)
  : msg_(msg)
  {}
  Init_ControllerDebugVal_a1_mea opti_z(::controller_interfaces::msg::ControllerDebugVal::_opti_z_type arg)
  {
    msg_.opti_z = std::move(arg);
    return Init_ControllerDebugVal_a1_mea(msg_);
  }

private:
  ::controller_interfaces::msg::ControllerDebugVal msg_;
};

class Init_ControllerDebugVal_opti_y
{
public:
  explicit Init_ControllerDebugVal_opti_y(::controller_interfaces::msg::ControllerDebugVal & msg)
  : msg_(msg)
  {}
  Init_ControllerDebugVal_opti_z opti_y(::controller_interfaces::msg::ControllerDebugVal::_opti_y_type arg)
  {
    msg_.opti_y = std::move(arg);
    return Init_ControllerDebugVal_opti_z(msg_);
  }

private:
  ::controller_interfaces::msg::ControllerDebugVal msg_;
};

class Init_ControllerDebugVal_opti_x
{
public:
  explicit Init_ControllerDebugVal_opti_x(::controller_interfaces::msg::ControllerDebugVal & msg)
  : msg_(msg)
  {}
  Init_ControllerDebugVal_opti_y opti_x(::controller_interfaces::msg::ControllerDebugVal::_opti_x_type arg)
  {
    msg_.opti_x = std::move(arg);
    return Init_ControllerDebugVal_opti_y(msg_);
  }

private:
  ::controller_interfaces::msg::ControllerDebugVal msg_;
};

class Init_ControllerDebugVal_imu_yaw
{
public:
  explicit Init_ControllerDebugVal_imu_yaw(::controller_interfaces::msg::ControllerDebugVal & msg)
  : msg_(msg)
  {}
  Init_ControllerDebugVal_opti_x imu_yaw(::controller_interfaces::msg::ControllerDebugVal::_imu_yaw_type arg)
  {
    msg_.imu_yaw = std::move(arg);
    return Init_ControllerDebugVal_opti_x(msg_);
  }

private:
  ::controller_interfaces::msg::ControllerDebugVal msg_;
};

class Init_ControllerDebugVal_imu_pitch
{
public:
  explicit Init_ControllerDebugVal_imu_pitch(::controller_interfaces::msg::ControllerDebugVal & msg)
  : msg_(msg)
  {}
  Init_ControllerDebugVal_imu_yaw imu_pitch(::controller_interfaces::msg::ControllerDebugVal::_imu_pitch_type arg)
  {
    msg_.imu_pitch = std::move(arg);
    return Init_ControllerDebugVal_imu_yaw(msg_);
  }

private:
  ::controller_interfaces::msg::ControllerDebugVal msg_;
};

class Init_ControllerDebugVal_imu_roll
{
public:
  explicit Init_ControllerDebugVal_imu_roll(::controller_interfaces::msg::ControllerDebugVal & msg)
  : msg_(msg)
  {}
  Init_ControllerDebugVal_imu_pitch imu_roll(::controller_interfaces::msg::ControllerDebugVal::_imu_roll_type arg)
  {
    msg_.imu_roll = std::move(arg);
    return Init_ControllerDebugVal_imu_pitch(msg_);
  }

private:
  ::controller_interfaces::msg::ControllerDebugVal msg_;
};

class Init_ControllerDebugVal_pid_f
{
public:
  explicit Init_ControllerDebugVal_pid_f(::controller_interfaces::msg::ControllerDebugVal & msg)
  : msg_(msg)
  {}
  Init_ControllerDebugVal_imu_roll pid_f(::controller_interfaces::msg::ControllerDebugVal::_pid_f_type arg)
  {
    msg_.pid_f = std::move(arg);
    return Init_ControllerDebugVal_imu_roll(msg_);
  }

private:
  ::controller_interfaces::msg::ControllerDebugVal msg_;
};

class Init_ControllerDebugVal_pid_mz
{
public:
  explicit Init_ControllerDebugVal_pid_mz(::controller_interfaces::msg::ControllerDebugVal & msg)
  : msg_(msg)
  {}
  Init_ControllerDebugVal_pid_f pid_mz(::controller_interfaces::msg::ControllerDebugVal::_pid_mz_type arg)
  {
    msg_.pid_mz = std::move(arg);
    return Init_ControllerDebugVal_pid_f(msg_);
  }

private:
  ::controller_interfaces::msg::ControllerDebugVal msg_;
};

class Init_ControllerDebugVal_pid_my
{
public:
  explicit Init_ControllerDebugVal_pid_my(::controller_interfaces::msg::ControllerDebugVal & msg)
  : msg_(msg)
  {}
  Init_ControllerDebugVal_pid_mz pid_my(::controller_interfaces::msg::ControllerDebugVal::_pid_my_type arg)
  {
    msg_.pid_my = std::move(arg);
    return Init_ControllerDebugVal_pid_mz(msg_);
  }

private:
  ::controller_interfaces::msg::ControllerDebugVal msg_;
};

class Init_ControllerDebugVal_pid_mx
{
public:
  explicit Init_ControllerDebugVal_pid_mx(::controller_interfaces::msg::ControllerDebugVal & msg)
  : msg_(msg)
  {}
  Init_ControllerDebugVal_pid_my pid_mx(::controller_interfaces::msg::ControllerDebugVal::_pid_mx_type arg)
  {
    msg_.pid_mx = std::move(arg);
    return Init_ControllerDebugVal_pid_my(msg_);
  }

private:
  ::controller_interfaces::msg::ControllerDebugVal msg_;
};

class Init_ControllerDebugVal_des_pos
{
public:
  Init_ControllerDebugVal_des_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerDebugVal_pid_mx des_pos(::controller_interfaces::msg::ControllerDebugVal::_des_pos_type arg)
  {
    msg_.des_pos = std::move(arg);
    return Init_ControllerDebugVal_pid_mx(msg_);
  }

private:
  ::controller_interfaces::msg::ControllerDebugVal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_interfaces::msg::ControllerDebugVal>()
{
  return controller_interfaces::msg::builder::Init_ControllerDebugVal_des_pos();
}

}  // namespace controller_interfaces

#endif  // CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_DEBUG_VAL__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imu_interfaces:msg/ImuMeasured.idl
// generated code does not contain a copyright notice

#ifndef IMU_INTERFACES__MSG__DETAIL__IMU_MEASURED__BUILDER_HPP_
#define IMU_INTERFACES__MSG__DETAIL__IMU_MEASURED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imu_interfaces/msg/detail/imu_measured__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imu_interfaces
{

namespace msg
{

namespace builder
{

class Init_ImuMeasured_qddot
{
public:
  explicit Init_ImuMeasured_qddot(::imu_interfaces::msg::ImuMeasured & msg)
  : msg_(msg)
  {}
  ::imu_interfaces::msg::ImuMeasured qddot(::imu_interfaces::msg::ImuMeasured::_qddot_type arg)
  {
    msg_.qddot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imu_interfaces::msg::ImuMeasured msg_;
};

class Init_ImuMeasured_qdot
{
public:
  explicit Init_ImuMeasured_qdot(::imu_interfaces::msg::ImuMeasured & msg)
  : msg_(msg)
  {}
  Init_ImuMeasured_qddot qdot(::imu_interfaces::msg::ImuMeasured::_qdot_type arg)
  {
    msg_.qdot = std::move(arg);
    return Init_ImuMeasured_qddot(msg_);
  }

private:
  ::imu_interfaces::msg::ImuMeasured msg_;
};

class Init_ImuMeasured_q
{
public:
  Init_ImuMeasured_q()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImuMeasured_qdot q(::imu_interfaces::msg::ImuMeasured::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_ImuMeasured_qdot(msg_);
  }

private:
  ::imu_interfaces::msg::ImuMeasured msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imu_interfaces::msg::ImuMeasured>()
{
  return imu_interfaces::msg::builder::Init_ImuMeasured_q();
}

}  // namespace imu_interfaces

#endif  // IMU_INTERFACES__MSG__DETAIL__IMU_MEASURED__BUILDER_HPP_

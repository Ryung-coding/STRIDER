// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mocap_interfaces:msg/MocapMeasured.idl
// generated code does not contain a copyright notice

#ifndef MOCAP_INTERFACES__MSG__DETAIL__MOCAP_MEASURED__BUILDER_HPP_
#define MOCAP_INTERFACES__MSG__DETAIL__MOCAP_MEASURED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mocap_interfaces/msg/detail/mocap_measured__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mocap_interfaces
{

namespace msg
{

namespace builder
{

class Init_MocapMeasured_acc
{
public:
  explicit Init_MocapMeasured_acc(::mocap_interfaces::msg::MocapMeasured & msg)
  : msg_(msg)
  {}
  ::mocap_interfaces::msg::MocapMeasured acc(::mocap_interfaces::msg::MocapMeasured::_acc_type arg)
  {
    msg_.acc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mocap_interfaces::msg::MocapMeasured msg_;
};

class Init_MocapMeasured_vel
{
public:
  explicit Init_MocapMeasured_vel(::mocap_interfaces::msg::MocapMeasured & msg)
  : msg_(msg)
  {}
  Init_MocapMeasured_acc vel(::mocap_interfaces::msg::MocapMeasured::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_MocapMeasured_acc(msg_);
  }

private:
  ::mocap_interfaces::msg::MocapMeasured msg_;
};

class Init_MocapMeasured_pos
{
public:
  Init_MocapMeasured_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MocapMeasured_vel pos(::mocap_interfaces::msg::MocapMeasured::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_MocapMeasured_vel(msg_);
  }

private:
  ::mocap_interfaces::msg::MocapMeasured msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mocap_interfaces::msg::MocapMeasured>()
{
  return mocap_interfaces::msg::builder::Init_MocapMeasured_pos();
}

}  // namespace mocap_interfaces

#endif  // MOCAP_INTERFACES__MSG__DETAIL__MOCAP_MEASURED__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_interfaces:msg/ControllerOutput.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_OUTPUT__BUILDER_HPP_
#define CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_OUTPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controller_interfaces/msg/detail/controller_output__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace controller_interfaces
{

namespace msg
{

namespace builder
{

class Init_ControllerOutput_moment
{
public:
  explicit Init_ControllerOutput_moment(::controller_interfaces::msg::ControllerOutput & msg)
  : msg_(msg)
  {}
  ::controller_interfaces::msg::ControllerOutput moment(::controller_interfaces::msg::ControllerOutput::_moment_type arg)
  {
    msg_.moment = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_interfaces::msg::ControllerOutput msg_;
};

class Init_ControllerOutput_force
{
public:
  Init_ControllerOutput_force()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerOutput_moment force(::controller_interfaces::msg::ControllerOutput::_force_type arg)
  {
    msg_.force = std::move(arg);
    return Init_ControllerOutput_moment(msg_);
  }

private:
  ::controller_interfaces::msg::ControllerOutput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_interfaces::msg::ControllerOutput>()
{
  return controller_interfaces::msg::builder::Init_ControllerOutput_force();
}

}  // namespace controller_interfaces

#endif  // CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_OUTPUT__BUILDER_HPP_

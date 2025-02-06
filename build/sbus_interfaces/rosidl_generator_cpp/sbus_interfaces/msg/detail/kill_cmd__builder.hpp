// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbus_interfaces:msg/KillCmd.idl
// generated code does not contain a copyright notice

#ifndef SBUS_INTERFACES__MSG__DETAIL__KILL_CMD__BUILDER_HPP_
#define SBUS_INTERFACES__MSG__DETAIL__KILL_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbus_interfaces/msg/detail/kill_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbus_interfaces
{

namespace msg
{

namespace builder
{

class Init_KillCmd_kill_activated
{
public:
  Init_KillCmd_kill_activated()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sbus_interfaces::msg::KillCmd kill_activated(::sbus_interfaces::msg::KillCmd::_kill_activated_type arg)
  {
    msg_.kill_activated = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbus_interfaces::msg::KillCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbus_interfaces::msg::KillCmd>()
{
  return sbus_interfaces::msg::builder::Init_KillCmd_kill_activated();
}

}  // namespace sbus_interfaces

#endif  // SBUS_INTERFACES__MSG__DETAIL__KILL_CMD__BUILDER_HPP_

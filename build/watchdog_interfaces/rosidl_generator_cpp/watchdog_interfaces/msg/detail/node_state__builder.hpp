// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from watchdog_interfaces:msg/NodeState.idl
// generated code does not contain a copyright notice

#ifndef WATCHDOG_INTERFACES__MSG__DETAIL__NODE_STATE__BUILDER_HPP_
#define WATCHDOG_INTERFACES__MSG__DETAIL__NODE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "watchdog_interfaces/msg/detail/node_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace watchdog_interfaces
{

namespace msg
{

namespace builder
{

class Init_NodeState_state
{
public:
  Init_NodeState_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::watchdog_interfaces::msg::NodeState state(::watchdog_interfaces::msg::NodeState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::watchdog_interfaces::msg::NodeState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::watchdog_interfaces::msg::NodeState>()
{
  return watchdog_interfaces::msg::builder::Init_NodeState_state();
}

}  // namespace watchdog_interfaces

#endif  // WATCHDOG_INTERFACES__MSG__DETAIL__NODE_STATE__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbus_interfaces:msg/SbusSignal.idl
// generated code does not contain a copyright notice

#ifndef SBUS_INTERFACES__MSG__DETAIL__SBUS_SIGNAL__BUILDER_HPP_
#define SBUS_INTERFACES__MSG__DETAIL__SBUS_SIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbus_interfaces/msg/detail/sbus_signal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbus_interfaces
{

namespace msg
{

namespace builder
{

class Init_SbusSignal_sbus_signal
{
public:
  explicit Init_SbusSignal_sbus_signal(::sbus_interfaces::msg::SbusSignal & msg)
  : msg_(msg)
  {}
  ::sbus_interfaces::msg::SbusSignal sbus_signal(::sbus_interfaces::msg::SbusSignal::_sbus_signal_type arg)
  {
    msg_.sbus_signal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbus_interfaces::msg::SbusSignal msg_;
};

class Init_SbusSignal_ch
{
public:
  Init_SbusSignal_ch()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbusSignal_sbus_signal ch(::sbus_interfaces::msg::SbusSignal::_ch_type arg)
  {
    msg_.ch = std::move(arg);
    return Init_SbusSignal_sbus_signal(msg_);
  }

private:
  ::sbus_interfaces::msg::SbusSignal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbus_interfaces::msg::SbusSignal>()
{
  return sbus_interfaces::msg::builder::Init_SbusSignal_ch();
}

}  // namespace sbus_interfaces

#endif  // SBUS_INTERFACES__MSG__DETAIL__SBUS_SIGNAL__BUILDER_HPP_

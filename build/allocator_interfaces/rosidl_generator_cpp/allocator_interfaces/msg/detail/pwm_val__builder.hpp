// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from allocator_interfaces:msg/PwmVal.idl
// generated code does not contain a copyright notice

#ifndef ALLOCATOR_INTERFACES__MSG__DETAIL__PWM_VAL__BUILDER_HPP_
#define ALLOCATOR_INTERFACES__MSG__DETAIL__PWM_VAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "allocator_interfaces/msg/detail/pwm_val__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace allocator_interfaces
{

namespace msg
{

namespace builder
{

class Init_PwmVal_f4
{
public:
  explicit Init_PwmVal_f4(::allocator_interfaces::msg::PwmVal & msg)
  : msg_(msg)
  {}
  ::allocator_interfaces::msg::PwmVal f4(::allocator_interfaces::msg::PwmVal::_f4_type arg)
  {
    msg_.f4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::allocator_interfaces::msg::PwmVal msg_;
};

class Init_PwmVal_f3
{
public:
  explicit Init_PwmVal_f3(::allocator_interfaces::msg::PwmVal & msg)
  : msg_(msg)
  {}
  Init_PwmVal_f4 f3(::allocator_interfaces::msg::PwmVal::_f3_type arg)
  {
    msg_.f3 = std::move(arg);
    return Init_PwmVal_f4(msg_);
  }

private:
  ::allocator_interfaces::msg::PwmVal msg_;
};

class Init_PwmVal_f2
{
public:
  explicit Init_PwmVal_f2(::allocator_interfaces::msg::PwmVal & msg)
  : msg_(msg)
  {}
  Init_PwmVal_f3 f2(::allocator_interfaces::msg::PwmVal::_f2_type arg)
  {
    msg_.f2 = std::move(arg);
    return Init_PwmVal_f3(msg_);
  }

private:
  ::allocator_interfaces::msg::PwmVal msg_;
};

class Init_PwmVal_f1
{
public:
  Init_PwmVal_f1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PwmVal_f2 f1(::allocator_interfaces::msg::PwmVal::_f1_type arg)
  {
    msg_.f1 = std::move(arg);
    return Init_PwmVal_f2(msg_);
  }

private:
  ::allocator_interfaces::msg::PwmVal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::allocator_interfaces::msg::PwmVal>()
{
  return allocator_interfaces::msg::builder::Init_PwmVal_f1();
}

}  // namespace allocator_interfaces

#endif  // ALLOCATOR_INTERFACES__MSG__DETAIL__PWM_VAL__BUILDER_HPP_

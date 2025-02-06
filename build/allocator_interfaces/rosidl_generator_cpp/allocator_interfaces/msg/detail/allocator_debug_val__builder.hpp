// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from allocator_interfaces:msg/AllocatorDebugVal.idl
// generated code does not contain a copyright notice

#ifndef ALLOCATOR_INTERFACES__MSG__DETAIL__ALLOCATOR_DEBUG_VAL__BUILDER_HPP_
#define ALLOCATOR_INTERFACES__MSG__DETAIL__ALLOCATOR_DEBUG_VAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "allocator_interfaces/msg/detail/allocator_debug_val__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace allocator_interfaces
{

namespace msg
{

namespace builder
{

class Init_AllocatorDebugVal_loop_rate
{
public:
  explicit Init_AllocatorDebugVal_loop_rate(::allocator_interfaces::msg::AllocatorDebugVal & msg)
  : msg_(msg)
  {}
  ::allocator_interfaces::msg::AllocatorDebugVal loop_rate(::allocator_interfaces::msg::AllocatorDebugVal::_loop_rate_type arg)
  {
    msg_.loop_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::allocator_interfaces::msg::AllocatorDebugVal msg_;
};

class Init_AllocatorDebugVal_a4_des
{
public:
  explicit Init_AllocatorDebugVal_a4_des(::allocator_interfaces::msg::AllocatorDebugVal & msg)
  : msg_(msg)
  {}
  Init_AllocatorDebugVal_loop_rate a4_des(::allocator_interfaces::msg::AllocatorDebugVal::_a4_des_type arg)
  {
    msg_.a4_des = std::move(arg);
    return Init_AllocatorDebugVal_loop_rate(msg_);
  }

private:
  ::allocator_interfaces::msg::AllocatorDebugVal msg_;
};

class Init_AllocatorDebugVal_a3_des
{
public:
  explicit Init_AllocatorDebugVal_a3_des(::allocator_interfaces::msg::AllocatorDebugVal & msg)
  : msg_(msg)
  {}
  Init_AllocatorDebugVal_a4_des a3_des(::allocator_interfaces::msg::AllocatorDebugVal::_a3_des_type arg)
  {
    msg_.a3_des = std::move(arg);
    return Init_AllocatorDebugVal_a4_des(msg_);
  }

private:
  ::allocator_interfaces::msg::AllocatorDebugVal msg_;
};

class Init_AllocatorDebugVal_a2_des
{
public:
  explicit Init_AllocatorDebugVal_a2_des(::allocator_interfaces::msg::AllocatorDebugVal & msg)
  : msg_(msg)
  {}
  Init_AllocatorDebugVal_a3_des a2_des(::allocator_interfaces::msg::AllocatorDebugVal::_a2_des_type arg)
  {
    msg_.a2_des = std::move(arg);
    return Init_AllocatorDebugVal_a3_des(msg_);
  }

private:
  ::allocator_interfaces::msg::AllocatorDebugVal msg_;
};

class Init_AllocatorDebugVal_a1_des
{
public:
  explicit Init_AllocatorDebugVal_a1_des(::allocator_interfaces::msg::AllocatorDebugVal & msg)
  : msg_(msg)
  {}
  Init_AllocatorDebugVal_a2_des a1_des(::allocator_interfaces::msg::AllocatorDebugVal::_a1_des_type arg)
  {
    msg_.a1_des = std::move(arg);
    return Init_AllocatorDebugVal_a2_des(msg_);
  }

private:
  ::allocator_interfaces::msg::AllocatorDebugVal msg_;
};

class Init_AllocatorDebugVal_pwm
{
public:
  Init_AllocatorDebugVal_pwm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AllocatorDebugVal_a1_des pwm(::allocator_interfaces::msg::AllocatorDebugVal::_pwm_type arg)
  {
    msg_.pwm = std::move(arg);
    return Init_AllocatorDebugVal_a1_des(msg_);
  }

private:
  ::allocator_interfaces::msg::AllocatorDebugVal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::allocator_interfaces::msg::AllocatorDebugVal>()
{
  return allocator_interfaces::msg::builder::Init_AllocatorDebugVal_pwm();
}

}  // namespace allocator_interfaces

#endif  // ALLOCATOR_INTERFACES__MSG__DETAIL__ALLOCATOR_DEBUG_VAL__BUILDER_HPP_

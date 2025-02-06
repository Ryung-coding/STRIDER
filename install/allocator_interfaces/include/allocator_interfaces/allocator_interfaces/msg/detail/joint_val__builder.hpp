// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from allocator_interfaces:msg/JointVal.idl
// generated code does not contain a copyright notice

#ifndef ALLOCATOR_INTERFACES__MSG__DETAIL__JOINT_VAL__BUILDER_HPP_
#define ALLOCATOR_INTERFACES__MSG__DETAIL__JOINT_VAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "allocator_interfaces/msg/detail/joint_val__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace allocator_interfaces
{

namespace msg
{

namespace builder
{

class Init_JointVal_a4_q
{
public:
  explicit Init_JointVal_a4_q(::allocator_interfaces::msg::JointVal & msg)
  : msg_(msg)
  {}
  ::allocator_interfaces::msg::JointVal a4_q(::allocator_interfaces::msg::JointVal::_a4_q_type arg)
  {
    msg_.a4_q = std::move(arg);
    return std::move(msg_);
  }

private:
  ::allocator_interfaces::msg::JointVal msg_;
};

class Init_JointVal_a3_q
{
public:
  explicit Init_JointVal_a3_q(::allocator_interfaces::msg::JointVal & msg)
  : msg_(msg)
  {}
  Init_JointVal_a4_q a3_q(::allocator_interfaces::msg::JointVal::_a3_q_type arg)
  {
    msg_.a3_q = std::move(arg);
    return Init_JointVal_a4_q(msg_);
  }

private:
  ::allocator_interfaces::msg::JointVal msg_;
};

class Init_JointVal_a2_q
{
public:
  explicit Init_JointVal_a2_q(::allocator_interfaces::msg::JointVal & msg)
  : msg_(msg)
  {}
  Init_JointVal_a3_q a2_q(::allocator_interfaces::msg::JointVal::_a2_q_type arg)
  {
    msg_.a2_q = std::move(arg);
    return Init_JointVal_a3_q(msg_);
  }

private:
  ::allocator_interfaces::msg::JointVal msg_;
};

class Init_JointVal_a1_q
{
public:
  Init_JointVal_a1_q()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointVal_a2_q a1_q(::allocator_interfaces::msg::JointVal::_a1_q_type arg)
  {
    msg_.a1_q = std::move(arg);
    return Init_JointVal_a2_q(msg_);
  }

private:
  ::allocator_interfaces::msg::JointVal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::allocator_interfaces::msg::JointVal>()
{
  return allocator_interfaces::msg::builder::Init_JointVal_a1_q();
}

}  // namespace allocator_interfaces

#endif  // ALLOCATOR_INTERFACES__MSG__DETAIL__JOINT_VAL__BUILDER_HPP_

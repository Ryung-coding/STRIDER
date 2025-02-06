// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from allocator_interfaces:msg/JointVal.idl
// generated code does not contain a copyright notice

#ifndef ALLOCATOR_INTERFACES__MSG__DETAIL__JOINT_VAL__STRUCT_HPP_
#define ALLOCATOR_INTERFACES__MSG__DETAIL__JOINT_VAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__allocator_interfaces__msg__JointVal __attribute__((deprecated))
#else
# define DEPRECATED__allocator_interfaces__msg__JointVal __declspec(deprecated)
#endif

namespace allocator_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointVal_
{
  using Type = JointVal_<ContainerAllocator>;

  explicit JointVal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 5>::iterator, double>(this->a1_q.begin(), this->a1_q.end(), 0.0);
      std::fill<typename std::array<double, 5>::iterator, double>(this->a2_q.begin(), this->a2_q.end(), 0.0);
      std::fill<typename std::array<double, 5>::iterator, double>(this->a3_q.begin(), this->a3_q.end(), 0.0);
      std::fill<typename std::array<double, 5>::iterator, double>(this->a4_q.begin(), this->a4_q.end(), 0.0);
    }
  }

  explicit JointVal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : a1_q(_alloc),
    a2_q(_alloc),
    a3_q(_alloc),
    a4_q(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 5>::iterator, double>(this->a1_q.begin(), this->a1_q.end(), 0.0);
      std::fill<typename std::array<double, 5>::iterator, double>(this->a2_q.begin(), this->a2_q.end(), 0.0);
      std::fill<typename std::array<double, 5>::iterator, double>(this->a3_q.begin(), this->a3_q.end(), 0.0);
      std::fill<typename std::array<double, 5>::iterator, double>(this->a4_q.begin(), this->a4_q.end(), 0.0);
    }
  }

  // field types and members
  using _a1_q_type =
    std::array<double, 5>;
  _a1_q_type a1_q;
  using _a2_q_type =
    std::array<double, 5>;
  _a2_q_type a2_q;
  using _a3_q_type =
    std::array<double, 5>;
  _a3_q_type a3_q;
  using _a4_q_type =
    std::array<double, 5>;
  _a4_q_type a4_q;

  // setters for named parameter idiom
  Type & set__a1_q(
    const std::array<double, 5> & _arg)
  {
    this->a1_q = _arg;
    return *this;
  }
  Type & set__a2_q(
    const std::array<double, 5> & _arg)
  {
    this->a2_q = _arg;
    return *this;
  }
  Type & set__a3_q(
    const std::array<double, 5> & _arg)
  {
    this->a3_q = _arg;
    return *this;
  }
  Type & set__a4_q(
    const std::array<double, 5> & _arg)
  {
    this->a4_q = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    allocator_interfaces::msg::JointVal_<ContainerAllocator> *;
  using ConstRawPtr =
    const allocator_interfaces::msg::JointVal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<allocator_interfaces::msg::JointVal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<allocator_interfaces::msg::JointVal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      allocator_interfaces::msg::JointVal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<allocator_interfaces::msg::JointVal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      allocator_interfaces::msg::JointVal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<allocator_interfaces::msg::JointVal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<allocator_interfaces::msg::JointVal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<allocator_interfaces::msg::JointVal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__allocator_interfaces__msg__JointVal
    std::shared_ptr<allocator_interfaces::msg::JointVal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__allocator_interfaces__msg__JointVal
    std::shared_ptr<allocator_interfaces::msg::JointVal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointVal_ & other) const
  {
    if (this->a1_q != other.a1_q) {
      return false;
    }
    if (this->a2_q != other.a2_q) {
      return false;
    }
    if (this->a3_q != other.a3_q) {
      return false;
    }
    if (this->a4_q != other.a4_q) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointVal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointVal_

// alias to use template instance with default allocator
using JointVal =
  allocator_interfaces::msg::JointVal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace allocator_interfaces

#endif  // ALLOCATOR_INTERFACES__MSG__DETAIL__JOINT_VAL__STRUCT_HPP_

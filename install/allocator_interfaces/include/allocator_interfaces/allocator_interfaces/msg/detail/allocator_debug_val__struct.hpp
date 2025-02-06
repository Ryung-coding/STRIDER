// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from allocator_interfaces:msg/AllocatorDebugVal.idl
// generated code does not contain a copyright notice

#ifndef ALLOCATOR_INTERFACES__MSG__DETAIL__ALLOCATOR_DEBUG_VAL__STRUCT_HPP_
#define ALLOCATOR_INTERFACES__MSG__DETAIL__ALLOCATOR_DEBUG_VAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__allocator_interfaces__msg__AllocatorDebugVal __attribute__((deprecated))
#else
# define DEPRECATED__allocator_interfaces__msg__AllocatorDebugVal __declspec(deprecated)
#endif

namespace allocator_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AllocatorDebugVal_
{
  using Type = AllocatorDebugVal_<ContainerAllocator>;

  explicit AllocatorDebugVal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->pwm.begin(), this->pwm.end(), 0.0);
      std::fill<typename std::array<double, 5>::iterator, double>(this->a1_des.begin(), this->a1_des.end(), 0.0);
      std::fill<typename std::array<double, 5>::iterator, double>(this->a2_des.begin(), this->a2_des.end(), 0.0);
      std::fill<typename std::array<double, 5>::iterator, double>(this->a3_des.begin(), this->a3_des.end(), 0.0);
      std::fill<typename std::array<double, 5>::iterator, double>(this->a4_des.begin(), this->a4_des.end(), 0.0);
      this->loop_rate = 0.0;
    }
  }

  explicit AllocatorDebugVal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pwm(_alloc),
    a1_des(_alloc),
    a2_des(_alloc),
    a3_des(_alloc),
    a4_des(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->pwm.begin(), this->pwm.end(), 0.0);
      std::fill<typename std::array<double, 5>::iterator, double>(this->a1_des.begin(), this->a1_des.end(), 0.0);
      std::fill<typename std::array<double, 5>::iterator, double>(this->a2_des.begin(), this->a2_des.end(), 0.0);
      std::fill<typename std::array<double, 5>::iterator, double>(this->a3_des.begin(), this->a3_des.end(), 0.0);
      std::fill<typename std::array<double, 5>::iterator, double>(this->a4_des.begin(), this->a4_des.end(), 0.0);
      this->loop_rate = 0.0;
    }
  }

  // field types and members
  using _pwm_type =
    std::array<double, 4>;
  _pwm_type pwm;
  using _a1_des_type =
    std::array<double, 5>;
  _a1_des_type a1_des;
  using _a2_des_type =
    std::array<double, 5>;
  _a2_des_type a2_des;
  using _a3_des_type =
    std::array<double, 5>;
  _a3_des_type a3_des;
  using _a4_des_type =
    std::array<double, 5>;
  _a4_des_type a4_des;
  using _loop_rate_type =
    double;
  _loop_rate_type loop_rate;

  // setters for named parameter idiom
  Type & set__pwm(
    const std::array<double, 4> & _arg)
  {
    this->pwm = _arg;
    return *this;
  }
  Type & set__a1_des(
    const std::array<double, 5> & _arg)
  {
    this->a1_des = _arg;
    return *this;
  }
  Type & set__a2_des(
    const std::array<double, 5> & _arg)
  {
    this->a2_des = _arg;
    return *this;
  }
  Type & set__a3_des(
    const std::array<double, 5> & _arg)
  {
    this->a3_des = _arg;
    return *this;
  }
  Type & set__a4_des(
    const std::array<double, 5> & _arg)
  {
    this->a4_des = _arg;
    return *this;
  }
  Type & set__loop_rate(
    const double & _arg)
  {
    this->loop_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    allocator_interfaces::msg::AllocatorDebugVal_<ContainerAllocator> *;
  using ConstRawPtr =
    const allocator_interfaces::msg::AllocatorDebugVal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<allocator_interfaces::msg::AllocatorDebugVal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<allocator_interfaces::msg::AllocatorDebugVal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      allocator_interfaces::msg::AllocatorDebugVal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<allocator_interfaces::msg::AllocatorDebugVal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      allocator_interfaces::msg::AllocatorDebugVal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<allocator_interfaces::msg::AllocatorDebugVal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<allocator_interfaces::msg::AllocatorDebugVal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<allocator_interfaces::msg::AllocatorDebugVal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__allocator_interfaces__msg__AllocatorDebugVal
    std::shared_ptr<allocator_interfaces::msg::AllocatorDebugVal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__allocator_interfaces__msg__AllocatorDebugVal
    std::shared_ptr<allocator_interfaces::msg::AllocatorDebugVal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AllocatorDebugVal_ & other) const
  {
    if (this->pwm != other.pwm) {
      return false;
    }
    if (this->a1_des != other.a1_des) {
      return false;
    }
    if (this->a2_des != other.a2_des) {
      return false;
    }
    if (this->a3_des != other.a3_des) {
      return false;
    }
    if (this->a4_des != other.a4_des) {
      return false;
    }
    if (this->loop_rate != other.loop_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const AllocatorDebugVal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AllocatorDebugVal_

// alias to use template instance with default allocator
using AllocatorDebugVal =
  allocator_interfaces::msg::AllocatorDebugVal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace allocator_interfaces

#endif  // ALLOCATOR_INTERFACES__MSG__DETAIL__ALLOCATOR_DEBUG_VAL__STRUCT_HPP_

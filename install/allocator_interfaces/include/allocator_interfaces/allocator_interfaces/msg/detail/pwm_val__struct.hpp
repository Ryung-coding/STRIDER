// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from allocator_interfaces:msg/PwmVal.idl
// generated code does not contain a copyright notice

#ifndef ALLOCATOR_INTERFACES__MSG__DETAIL__PWM_VAL__STRUCT_HPP_
#define ALLOCATOR_INTERFACES__MSG__DETAIL__PWM_VAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__allocator_interfaces__msg__PwmVal __attribute__((deprecated))
#else
# define DEPRECATED__allocator_interfaces__msg__PwmVal __declspec(deprecated)
#endif

namespace allocator_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PwmVal_
{
  using Type = PwmVal_<ContainerAllocator>;

  explicit PwmVal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->f1 = 0.0;
      this->f2 = 0.0;
      this->f3 = 0.0;
      this->f4 = 0.0;
    }
  }

  explicit PwmVal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->f1 = 0.0;
      this->f2 = 0.0;
      this->f3 = 0.0;
      this->f4 = 0.0;
    }
  }

  // field types and members
  using _f1_type =
    double;
  _f1_type f1;
  using _f2_type =
    double;
  _f2_type f2;
  using _f3_type =
    double;
  _f3_type f3;
  using _f4_type =
    double;
  _f4_type f4;

  // setters for named parameter idiom
  Type & set__f1(
    const double & _arg)
  {
    this->f1 = _arg;
    return *this;
  }
  Type & set__f2(
    const double & _arg)
  {
    this->f2 = _arg;
    return *this;
  }
  Type & set__f3(
    const double & _arg)
  {
    this->f3 = _arg;
    return *this;
  }
  Type & set__f4(
    const double & _arg)
  {
    this->f4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    allocator_interfaces::msg::PwmVal_<ContainerAllocator> *;
  using ConstRawPtr =
    const allocator_interfaces::msg::PwmVal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<allocator_interfaces::msg::PwmVal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<allocator_interfaces::msg::PwmVal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      allocator_interfaces::msg::PwmVal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<allocator_interfaces::msg::PwmVal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      allocator_interfaces::msg::PwmVal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<allocator_interfaces::msg::PwmVal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<allocator_interfaces::msg::PwmVal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<allocator_interfaces::msg::PwmVal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__allocator_interfaces__msg__PwmVal
    std::shared_ptr<allocator_interfaces::msg::PwmVal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__allocator_interfaces__msg__PwmVal
    std::shared_ptr<allocator_interfaces::msg::PwmVal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PwmVal_ & other) const
  {
    if (this->f1 != other.f1) {
      return false;
    }
    if (this->f2 != other.f2) {
      return false;
    }
    if (this->f3 != other.f3) {
      return false;
    }
    if (this->f4 != other.f4) {
      return false;
    }
    return true;
  }
  bool operator!=(const PwmVal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PwmVal_

// alias to use template instance with default allocator
using PwmVal =
  allocator_interfaces::msg::PwmVal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace allocator_interfaces

#endif  // ALLOCATOR_INTERFACES__MSG__DETAIL__PWM_VAL__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from controller_interfaces:msg/ControllerOutput.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_OUTPUT__STRUCT_HPP_
#define CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_OUTPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__controller_interfaces__msg__ControllerOutput __attribute__((deprecated))
#else
# define DEPRECATED__controller_interfaces__msg__ControllerOutput __declspec(deprecated)
#endif

namespace controller_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControllerOutput_
{
  using Type = ControllerOutput_<ContainerAllocator>;

  explicit ControllerOutput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->force = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->moment.begin(), this->moment.end(), 0.0);
    }
  }

  explicit ControllerOutput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : moment(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->force = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->moment.begin(), this->moment.end(), 0.0);
    }
  }

  // field types and members
  using _force_type =
    double;
  _force_type force;
  using _moment_type =
    std::array<double, 3>;
  _moment_type moment;

  // setters for named parameter idiom
  Type & set__force(
    const double & _arg)
  {
    this->force = _arg;
    return *this;
  }
  Type & set__moment(
    const std::array<double, 3> & _arg)
  {
    this->moment = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_interfaces::msg::ControllerOutput_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_interfaces::msg::ControllerOutput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_interfaces::msg::ControllerOutput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_interfaces::msg::ControllerOutput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_interfaces::msg::ControllerOutput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_interfaces::msg::ControllerOutput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_interfaces::msg::ControllerOutput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_interfaces::msg::ControllerOutput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_interfaces::msg::ControllerOutput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_interfaces::msg::ControllerOutput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_interfaces__msg__ControllerOutput
    std::shared_ptr<controller_interfaces::msg::ControllerOutput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_interfaces__msg__ControllerOutput
    std::shared_ptr<controller_interfaces::msg::ControllerOutput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerOutput_ & other) const
  {
    if (this->force != other.force) {
      return false;
    }
    if (this->moment != other.moment) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerOutput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerOutput_

// alias to use template instance with default allocator
using ControllerOutput =
  controller_interfaces::msg::ControllerOutput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace controller_interfaces

#endif  // CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_OUTPUT__STRUCT_HPP_

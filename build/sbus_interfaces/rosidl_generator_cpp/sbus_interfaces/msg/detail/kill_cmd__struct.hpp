// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbus_interfaces:msg/KillCmd.idl
// generated code does not contain a copyright notice

#ifndef SBUS_INTERFACES__MSG__DETAIL__KILL_CMD__STRUCT_HPP_
#define SBUS_INTERFACES__MSG__DETAIL__KILL_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sbus_interfaces__msg__KillCmd __attribute__((deprecated))
#else
# define DEPRECATED__sbus_interfaces__msg__KillCmd __declspec(deprecated)
#endif

namespace sbus_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KillCmd_
{
  using Type = KillCmd_<ContainerAllocator>;

  explicit KillCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kill_activated = false;
    }
  }

  explicit KillCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kill_activated = false;
    }
  }

  // field types and members
  using _kill_activated_type =
    bool;
  _kill_activated_type kill_activated;

  // setters for named parameter idiom
  Type & set__kill_activated(
    const bool & _arg)
  {
    this->kill_activated = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbus_interfaces::msg::KillCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbus_interfaces::msg::KillCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbus_interfaces::msg::KillCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbus_interfaces::msg::KillCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbus_interfaces::msg::KillCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbus_interfaces::msg::KillCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbus_interfaces::msg::KillCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbus_interfaces::msg::KillCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbus_interfaces::msg::KillCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbus_interfaces::msg::KillCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbus_interfaces__msg__KillCmd
    std::shared_ptr<sbus_interfaces::msg::KillCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbus_interfaces__msg__KillCmd
    std::shared_ptr<sbus_interfaces::msg::KillCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KillCmd_ & other) const
  {
    if (this->kill_activated != other.kill_activated) {
      return false;
    }
    return true;
  }
  bool operator!=(const KillCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KillCmd_

// alias to use template instance with default allocator
using KillCmd =
  sbus_interfaces::msg::KillCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbus_interfaces

#endif  // SBUS_INTERFACES__MSG__DETAIL__KILL_CMD__STRUCT_HPP_

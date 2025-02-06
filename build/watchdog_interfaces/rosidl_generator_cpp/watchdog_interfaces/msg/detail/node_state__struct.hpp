// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from watchdog_interfaces:msg/NodeState.idl
// generated code does not contain a copyright notice

#ifndef WATCHDOG_INTERFACES__MSG__DETAIL__NODE_STATE__STRUCT_HPP_
#define WATCHDOG_INTERFACES__MSG__DETAIL__NODE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__watchdog_interfaces__msg__NodeState __attribute__((deprecated))
#else
# define DEPRECATED__watchdog_interfaces__msg__NodeState __declspec(deprecated)
#endif

namespace watchdog_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeState_
{
  using Type = NodeState_<ContainerAllocator>;

  explicit NodeState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  explicit NodeState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  // field types and members
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    watchdog_interfaces::msg::NodeState_<ContainerAllocator> *;
  using ConstRawPtr =
    const watchdog_interfaces::msg::NodeState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<watchdog_interfaces::msg::NodeState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<watchdog_interfaces::msg::NodeState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      watchdog_interfaces::msg::NodeState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<watchdog_interfaces::msg::NodeState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      watchdog_interfaces::msg::NodeState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<watchdog_interfaces::msg::NodeState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<watchdog_interfaces::msg::NodeState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<watchdog_interfaces::msg::NodeState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__watchdog_interfaces__msg__NodeState
    std::shared_ptr<watchdog_interfaces::msg::NodeState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__watchdog_interfaces__msg__NodeState
    std::shared_ptr<watchdog_interfaces::msg::NodeState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeState_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeState_

// alias to use template instance with default allocator
using NodeState =
  watchdog_interfaces::msg::NodeState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace watchdog_interfaces

#endif  // WATCHDOG_INTERFACES__MSG__DETAIL__NODE_STATE__STRUCT_HPP_

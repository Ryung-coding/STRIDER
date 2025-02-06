// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbus_interfaces:msg/SbusSignal.idl
// generated code does not contain a copyright notice

#ifndef SBUS_INTERFACES__MSG__DETAIL__SBUS_SIGNAL__STRUCT_HPP_
#define SBUS_INTERFACES__MSG__DETAIL__SBUS_SIGNAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sbus_interfaces__msg__SbusSignal __attribute__((deprecated))
#else
# define DEPRECATED__sbus_interfaces__msg__SbusSignal __declspec(deprecated)
#endif

namespace sbus_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbusSignal_
{
  using Type = SbusSignal_<ContainerAllocator>;

  explicit SbusSignal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int16_t, 18>::iterator, int16_t>(this->ch.begin(), this->ch.end(), 0);
      this->sbus_signal = 0;
    }
  }

  explicit SbusSignal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ch(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int16_t, 18>::iterator, int16_t>(this->ch.begin(), this->ch.end(), 0);
      this->sbus_signal = 0;
    }
  }

  // field types and members
  using _ch_type =
    std::array<int16_t, 18>;
  _ch_type ch;
  using _sbus_signal_type =
    uint8_t;
  _sbus_signal_type sbus_signal;

  // setters for named parameter idiom
  Type & set__ch(
    const std::array<int16_t, 18> & _arg)
  {
    this->ch = _arg;
    return *this;
  }
  Type & set__sbus_signal(
    const uint8_t & _arg)
  {
    this->sbus_signal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbus_interfaces::msg::SbusSignal_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbus_interfaces::msg::SbusSignal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbus_interfaces::msg::SbusSignal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbus_interfaces::msg::SbusSignal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbus_interfaces::msg::SbusSignal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbus_interfaces::msg::SbusSignal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbus_interfaces::msg::SbusSignal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbus_interfaces::msg::SbusSignal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbus_interfaces::msg::SbusSignal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbus_interfaces::msg::SbusSignal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbus_interfaces__msg__SbusSignal
    std::shared_ptr<sbus_interfaces::msg::SbusSignal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbus_interfaces__msg__SbusSignal
    std::shared_ptr<sbus_interfaces::msg::SbusSignal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbusSignal_ & other) const
  {
    if (this->ch != other.ch) {
      return false;
    }
    if (this->sbus_signal != other.sbus_signal) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbusSignal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbusSignal_

// alias to use template instance with default allocator
using SbusSignal =
  sbus_interfaces::msg::SbusSignal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbus_interfaces

#endif  // SBUS_INTERFACES__MSG__DETAIL__SBUS_SIGNAL__STRUCT_HPP_

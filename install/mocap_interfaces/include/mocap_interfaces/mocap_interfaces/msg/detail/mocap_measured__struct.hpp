// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mocap_interfaces:msg/MocapMeasured.idl
// generated code does not contain a copyright notice

#ifndef MOCAP_INTERFACES__MSG__DETAIL__MOCAP_MEASURED__STRUCT_HPP_
#define MOCAP_INTERFACES__MSG__DETAIL__MOCAP_MEASURED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mocap_interfaces__msg__MocapMeasured __attribute__((deprecated))
#else
# define DEPRECATED__mocap_interfaces__msg__MocapMeasured __declspec(deprecated)
#endif

namespace mocap_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MocapMeasured_
{
  using Type = MocapMeasured_<ContainerAllocator>;

  explicit MocapMeasured_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->pos.begin(), this->pos.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->vel.begin(), this->vel.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->acc.begin(), this->acc.end(), 0.0);
    }
  }

  explicit MocapMeasured_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos(_alloc),
    vel(_alloc),
    acc(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->pos.begin(), this->pos.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->vel.begin(), this->vel.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->acc.begin(), this->acc.end(), 0.0);
    }
  }

  // field types and members
  using _pos_type =
    std::array<double, 3>;
  _pos_type pos;
  using _vel_type =
    std::array<double, 3>;
  _vel_type vel;
  using _acc_type =
    std::array<double, 3>;
  _acc_type acc;

  // setters for named parameter idiom
  Type & set__pos(
    const std::array<double, 3> & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__vel(
    const std::array<double, 3> & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__acc(
    const std::array<double, 3> & _arg)
  {
    this->acc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mocap_interfaces::msg::MocapMeasured_<ContainerAllocator> *;
  using ConstRawPtr =
    const mocap_interfaces::msg::MocapMeasured_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mocap_interfaces::msg::MocapMeasured_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mocap_interfaces::msg::MocapMeasured_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mocap_interfaces::msg::MocapMeasured_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mocap_interfaces::msg::MocapMeasured_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mocap_interfaces::msg::MocapMeasured_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mocap_interfaces::msg::MocapMeasured_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mocap_interfaces::msg::MocapMeasured_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mocap_interfaces::msg::MocapMeasured_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mocap_interfaces__msg__MocapMeasured
    std::shared_ptr<mocap_interfaces::msg::MocapMeasured_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mocap_interfaces__msg__MocapMeasured
    std::shared_ptr<mocap_interfaces::msg::MocapMeasured_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MocapMeasured_ & other) const
  {
    if (this->pos != other.pos) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    if (this->acc != other.acc) {
      return false;
    }
    return true;
  }
  bool operator!=(const MocapMeasured_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MocapMeasured_

// alias to use template instance with default allocator
using MocapMeasured =
  mocap_interfaces::msg::MocapMeasured_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mocap_interfaces

#endif  // MOCAP_INTERFACES__MSG__DETAIL__MOCAP_MEASURED__STRUCT_HPP_

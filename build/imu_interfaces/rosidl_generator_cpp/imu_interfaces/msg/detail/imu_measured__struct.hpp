// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from imu_interfaces:msg/ImuMeasured.idl
// generated code does not contain a copyright notice

#ifndef IMU_INTERFACES__MSG__DETAIL__IMU_MEASURED__STRUCT_HPP_
#define IMU_INTERFACES__MSG__DETAIL__IMU_MEASURED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__imu_interfaces__msg__ImuMeasured __attribute__((deprecated))
#else
# define DEPRECATED__imu_interfaces__msg__ImuMeasured __declspec(deprecated)
#endif

namespace imu_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImuMeasured_
{
  using Type = ImuMeasured_<ContainerAllocator>;

  explicit ImuMeasured_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->q.begin(), this->q.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->qdot.begin(), this->qdot.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->qddot.begin(), this->qddot.end(), 0.0);
    }
  }

  explicit ImuMeasured_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : q(_alloc),
    qdot(_alloc),
    qddot(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->q.begin(), this->q.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->qdot.begin(), this->qdot.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->qddot.begin(), this->qddot.end(), 0.0);
    }
  }

  // field types and members
  using _q_type =
    std::array<double, 3>;
  _q_type q;
  using _qdot_type =
    std::array<double, 3>;
  _qdot_type qdot;
  using _qddot_type =
    std::array<double, 3>;
  _qddot_type qddot;

  // setters for named parameter idiom
  Type & set__q(
    const std::array<double, 3> & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__qdot(
    const std::array<double, 3> & _arg)
  {
    this->qdot = _arg;
    return *this;
  }
  Type & set__qddot(
    const std::array<double, 3> & _arg)
  {
    this->qddot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    imu_interfaces::msg::ImuMeasured_<ContainerAllocator> *;
  using ConstRawPtr =
    const imu_interfaces::msg::ImuMeasured_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<imu_interfaces::msg::ImuMeasured_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<imu_interfaces::msg::ImuMeasured_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      imu_interfaces::msg::ImuMeasured_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<imu_interfaces::msg::ImuMeasured_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      imu_interfaces::msg::ImuMeasured_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<imu_interfaces::msg::ImuMeasured_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<imu_interfaces::msg::ImuMeasured_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<imu_interfaces::msg::ImuMeasured_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__imu_interfaces__msg__ImuMeasured
    std::shared_ptr<imu_interfaces::msg::ImuMeasured_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__imu_interfaces__msg__ImuMeasured
    std::shared_ptr<imu_interfaces::msg::ImuMeasured_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImuMeasured_ & other) const
  {
    if (this->q != other.q) {
      return false;
    }
    if (this->qdot != other.qdot) {
      return false;
    }
    if (this->qddot != other.qddot) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImuMeasured_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImuMeasured_

// alias to use template instance with default allocator
using ImuMeasured =
  imu_interfaces::msg::ImuMeasured_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace imu_interfaces

#endif  // IMU_INTERFACES__MSG__DETAIL__IMU_MEASURED__STRUCT_HPP_

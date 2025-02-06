// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from controller_interfaces:msg/ControllerDebugVal.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_DEBUG_VAL__STRUCT_HPP_
#define CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_DEBUG_VAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__controller_interfaces__msg__ControllerDebugVal __attribute__((deprecated))
#else
# define DEPRECATED__controller_interfaces__msg__ControllerDebugVal __declspec(deprecated)
#endif

namespace controller_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControllerDebugVal_
{
  using Type = ControllerDebugVal_<ContainerAllocator>;

  explicit ControllerDebugVal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->des_pos.begin(), this->des_pos.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->pid_mx.begin(), this->pid_mx.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->pid_my.begin(), this->pid_my.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->pid_mz.begin(), this->pid_mz.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->pid_f.begin(), this->pid_f.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->imu_roll.begin(), this->imu_roll.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->imu_pitch.begin(), this->imu_pitch.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->imu_yaw.begin(), this->imu_yaw.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->opti_x.begin(), this->opti_x.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->opti_y.begin(), this->opti_y.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->opti_z.begin(), this->opti_z.end(), 0.0);
      std::fill<typename std::array<double, 5>::iterator, double>(this->a1_mea.begin(), this->a1_mea.end(), 0.0);
      std::fill<typename std::array<double, 5>::iterator, double>(this->a2_mea.begin(), this->a2_mea.end(), 0.0);
      std::fill<typename std::array<double, 5>::iterator, double>(this->a3_mea.begin(), this->a3_mea.end(), 0.0);
      std::fill<typename std::array<double, 5>::iterator, double>(this->a4_mea.begin(), this->a4_mea.end(), 0.0);
    }
  }

  explicit ControllerDebugVal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : des_pos(_alloc),
    pid_mx(_alloc),
    pid_my(_alloc),
    pid_mz(_alloc),
    pid_f(_alloc),
    imu_roll(_alloc),
    imu_pitch(_alloc),
    imu_yaw(_alloc),
    opti_x(_alloc),
    opti_y(_alloc),
    opti_z(_alloc),
    a1_mea(_alloc),
    a2_mea(_alloc),
    a3_mea(_alloc),
    a4_mea(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->des_pos.begin(), this->des_pos.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->pid_mx.begin(), this->pid_mx.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->pid_my.begin(), this->pid_my.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->pid_mz.begin(), this->pid_mz.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->pid_f.begin(), this->pid_f.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->imu_roll.begin(), this->imu_roll.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->imu_pitch.begin(), this->imu_pitch.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->imu_yaw.begin(), this->imu_yaw.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->opti_x.begin(), this->opti_x.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->opti_y.begin(), this->opti_y.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->opti_z.begin(), this->opti_z.end(), 0.0);
      std::fill<typename std::array<double, 5>::iterator, double>(this->a1_mea.begin(), this->a1_mea.end(), 0.0);
      std::fill<typename std::array<double, 5>::iterator, double>(this->a2_mea.begin(), this->a2_mea.end(), 0.0);
      std::fill<typename std::array<double, 5>::iterator, double>(this->a3_mea.begin(), this->a3_mea.end(), 0.0);
      std::fill<typename std::array<double, 5>::iterator, double>(this->a4_mea.begin(), this->a4_mea.end(), 0.0);
    }
  }

  // field types and members
  using _des_pos_type =
    std::array<double, 4>;
  _des_pos_type des_pos;
  using _pid_mx_type =
    std::array<double, 3>;
  _pid_mx_type pid_mx;
  using _pid_my_type =
    std::array<double, 3>;
  _pid_my_type pid_my;
  using _pid_mz_type =
    std::array<double, 3>;
  _pid_mz_type pid_mz;
  using _pid_f_type =
    std::array<double, 3>;
  _pid_f_type pid_f;
  using _imu_roll_type =
    std::array<double, 3>;
  _imu_roll_type imu_roll;
  using _imu_pitch_type =
    std::array<double, 3>;
  _imu_pitch_type imu_pitch;
  using _imu_yaw_type =
    std::array<double, 3>;
  _imu_yaw_type imu_yaw;
  using _opti_x_type =
    std::array<double, 3>;
  _opti_x_type opti_x;
  using _opti_y_type =
    std::array<double, 3>;
  _opti_y_type opti_y;
  using _opti_z_type =
    std::array<double, 3>;
  _opti_z_type opti_z;
  using _a1_mea_type =
    std::array<double, 5>;
  _a1_mea_type a1_mea;
  using _a2_mea_type =
    std::array<double, 5>;
  _a2_mea_type a2_mea;
  using _a3_mea_type =
    std::array<double, 5>;
  _a3_mea_type a3_mea;
  using _a4_mea_type =
    std::array<double, 5>;
  _a4_mea_type a4_mea;

  // setters for named parameter idiom
  Type & set__des_pos(
    const std::array<double, 4> & _arg)
  {
    this->des_pos = _arg;
    return *this;
  }
  Type & set__pid_mx(
    const std::array<double, 3> & _arg)
  {
    this->pid_mx = _arg;
    return *this;
  }
  Type & set__pid_my(
    const std::array<double, 3> & _arg)
  {
    this->pid_my = _arg;
    return *this;
  }
  Type & set__pid_mz(
    const std::array<double, 3> & _arg)
  {
    this->pid_mz = _arg;
    return *this;
  }
  Type & set__pid_f(
    const std::array<double, 3> & _arg)
  {
    this->pid_f = _arg;
    return *this;
  }
  Type & set__imu_roll(
    const std::array<double, 3> & _arg)
  {
    this->imu_roll = _arg;
    return *this;
  }
  Type & set__imu_pitch(
    const std::array<double, 3> & _arg)
  {
    this->imu_pitch = _arg;
    return *this;
  }
  Type & set__imu_yaw(
    const std::array<double, 3> & _arg)
  {
    this->imu_yaw = _arg;
    return *this;
  }
  Type & set__opti_x(
    const std::array<double, 3> & _arg)
  {
    this->opti_x = _arg;
    return *this;
  }
  Type & set__opti_y(
    const std::array<double, 3> & _arg)
  {
    this->opti_y = _arg;
    return *this;
  }
  Type & set__opti_z(
    const std::array<double, 3> & _arg)
  {
    this->opti_z = _arg;
    return *this;
  }
  Type & set__a1_mea(
    const std::array<double, 5> & _arg)
  {
    this->a1_mea = _arg;
    return *this;
  }
  Type & set__a2_mea(
    const std::array<double, 5> & _arg)
  {
    this->a2_mea = _arg;
    return *this;
  }
  Type & set__a3_mea(
    const std::array<double, 5> & _arg)
  {
    this->a3_mea = _arg;
    return *this;
  }
  Type & set__a4_mea(
    const std::array<double, 5> & _arg)
  {
    this->a4_mea = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_interfaces::msg::ControllerDebugVal_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_interfaces::msg::ControllerDebugVal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_interfaces::msg::ControllerDebugVal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_interfaces::msg::ControllerDebugVal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_interfaces::msg::ControllerDebugVal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_interfaces::msg::ControllerDebugVal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_interfaces::msg::ControllerDebugVal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_interfaces::msg::ControllerDebugVal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_interfaces::msg::ControllerDebugVal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_interfaces::msg::ControllerDebugVal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_interfaces__msg__ControllerDebugVal
    std::shared_ptr<controller_interfaces::msg::ControllerDebugVal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_interfaces__msg__ControllerDebugVal
    std::shared_ptr<controller_interfaces::msg::ControllerDebugVal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerDebugVal_ & other) const
  {
    if (this->des_pos != other.des_pos) {
      return false;
    }
    if (this->pid_mx != other.pid_mx) {
      return false;
    }
    if (this->pid_my != other.pid_my) {
      return false;
    }
    if (this->pid_mz != other.pid_mz) {
      return false;
    }
    if (this->pid_f != other.pid_f) {
      return false;
    }
    if (this->imu_roll != other.imu_roll) {
      return false;
    }
    if (this->imu_pitch != other.imu_pitch) {
      return false;
    }
    if (this->imu_yaw != other.imu_yaw) {
      return false;
    }
    if (this->opti_x != other.opti_x) {
      return false;
    }
    if (this->opti_y != other.opti_y) {
      return false;
    }
    if (this->opti_z != other.opti_z) {
      return false;
    }
    if (this->a1_mea != other.a1_mea) {
      return false;
    }
    if (this->a2_mea != other.a2_mea) {
      return false;
    }
    if (this->a3_mea != other.a3_mea) {
      return false;
    }
    if (this->a4_mea != other.a4_mea) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerDebugVal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerDebugVal_

// alias to use template instance with default allocator
using ControllerDebugVal =
  controller_interfaces::msg::ControllerDebugVal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace controller_interfaces

#endif  // CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_DEBUG_VAL__STRUCT_HPP_

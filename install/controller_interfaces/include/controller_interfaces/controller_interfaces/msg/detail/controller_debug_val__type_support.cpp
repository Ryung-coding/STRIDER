// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from controller_interfaces:msg/ControllerDebugVal.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "controller_interfaces/msg/detail/controller_debug_val__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace controller_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ControllerDebugVal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) controller_interfaces::msg::ControllerDebugVal(_init);
}

void ControllerDebugVal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<controller_interfaces::msg::ControllerDebugVal *>(message_memory);
  typed_message->~ControllerDebugVal();
}

size_t size_function__ControllerDebugVal__des_pos(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__ControllerDebugVal__des_pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerDebugVal__des_pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerDebugVal__des_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ControllerDebugVal__des_pos(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ControllerDebugVal__des_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ControllerDebugVal__des_pos(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ControllerDebugVal__pid_mx(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ControllerDebugVal__pid_mx(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerDebugVal__pid_mx(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerDebugVal__pid_mx(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ControllerDebugVal__pid_mx(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ControllerDebugVal__pid_mx(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ControllerDebugVal__pid_mx(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ControllerDebugVal__pid_my(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ControllerDebugVal__pid_my(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerDebugVal__pid_my(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerDebugVal__pid_my(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ControllerDebugVal__pid_my(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ControllerDebugVal__pid_my(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ControllerDebugVal__pid_my(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ControllerDebugVal__pid_mz(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ControllerDebugVal__pid_mz(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerDebugVal__pid_mz(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerDebugVal__pid_mz(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ControllerDebugVal__pid_mz(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ControllerDebugVal__pid_mz(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ControllerDebugVal__pid_mz(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ControllerDebugVal__pid_f(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ControllerDebugVal__pid_f(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerDebugVal__pid_f(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerDebugVal__pid_f(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ControllerDebugVal__pid_f(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ControllerDebugVal__pid_f(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ControllerDebugVal__pid_f(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ControllerDebugVal__imu_roll(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ControllerDebugVal__imu_roll(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerDebugVal__imu_roll(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerDebugVal__imu_roll(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ControllerDebugVal__imu_roll(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ControllerDebugVal__imu_roll(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ControllerDebugVal__imu_roll(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ControllerDebugVal__imu_pitch(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ControllerDebugVal__imu_pitch(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerDebugVal__imu_pitch(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerDebugVal__imu_pitch(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ControllerDebugVal__imu_pitch(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ControllerDebugVal__imu_pitch(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ControllerDebugVal__imu_pitch(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ControllerDebugVal__imu_yaw(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ControllerDebugVal__imu_yaw(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerDebugVal__imu_yaw(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerDebugVal__imu_yaw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ControllerDebugVal__imu_yaw(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ControllerDebugVal__imu_yaw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ControllerDebugVal__imu_yaw(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ControllerDebugVal__opti_x(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ControllerDebugVal__opti_x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerDebugVal__opti_x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerDebugVal__opti_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ControllerDebugVal__opti_x(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ControllerDebugVal__opti_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ControllerDebugVal__opti_x(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ControllerDebugVal__opti_y(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ControllerDebugVal__opti_y(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerDebugVal__opti_y(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerDebugVal__opti_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ControllerDebugVal__opti_y(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ControllerDebugVal__opti_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ControllerDebugVal__opti_y(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ControllerDebugVal__opti_z(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ControllerDebugVal__opti_z(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerDebugVal__opti_z(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerDebugVal__opti_z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ControllerDebugVal__opti_z(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ControllerDebugVal__opti_z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ControllerDebugVal__opti_z(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ControllerDebugVal__a1_mea(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__ControllerDebugVal__a1_mea(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerDebugVal__a1_mea(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerDebugVal__a1_mea(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ControllerDebugVal__a1_mea(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ControllerDebugVal__a1_mea(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ControllerDebugVal__a1_mea(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ControllerDebugVal__a2_mea(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__ControllerDebugVal__a2_mea(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerDebugVal__a2_mea(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerDebugVal__a2_mea(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ControllerDebugVal__a2_mea(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ControllerDebugVal__a2_mea(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ControllerDebugVal__a2_mea(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ControllerDebugVal__a3_mea(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__ControllerDebugVal__a3_mea(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerDebugVal__a3_mea(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerDebugVal__a3_mea(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ControllerDebugVal__a3_mea(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ControllerDebugVal__a3_mea(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ControllerDebugVal__a3_mea(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ControllerDebugVal__a4_mea(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__ControllerDebugVal__a4_mea(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerDebugVal__a4_mea(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerDebugVal__a4_mea(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ControllerDebugVal__a4_mea(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ControllerDebugVal__a4_mea(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ControllerDebugVal__a4_mea(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ControllerDebugVal_message_member_array[15] = {
  {
    "des_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(controller_interfaces::msg::ControllerDebugVal, des_pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerDebugVal__des_pos,  // size() function pointer
    get_const_function__ControllerDebugVal__des_pos,  // get_const(index) function pointer
    get_function__ControllerDebugVal__des_pos,  // get(index) function pointer
    fetch_function__ControllerDebugVal__des_pos,  // fetch(index, &value) function pointer
    assign_function__ControllerDebugVal__des_pos,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pid_mx",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(controller_interfaces::msg::ControllerDebugVal, pid_mx),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerDebugVal__pid_mx,  // size() function pointer
    get_const_function__ControllerDebugVal__pid_mx,  // get_const(index) function pointer
    get_function__ControllerDebugVal__pid_mx,  // get(index) function pointer
    fetch_function__ControllerDebugVal__pid_mx,  // fetch(index, &value) function pointer
    assign_function__ControllerDebugVal__pid_mx,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pid_my",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(controller_interfaces::msg::ControllerDebugVal, pid_my),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerDebugVal__pid_my,  // size() function pointer
    get_const_function__ControllerDebugVal__pid_my,  // get_const(index) function pointer
    get_function__ControllerDebugVal__pid_my,  // get(index) function pointer
    fetch_function__ControllerDebugVal__pid_my,  // fetch(index, &value) function pointer
    assign_function__ControllerDebugVal__pid_my,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pid_mz",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(controller_interfaces::msg::ControllerDebugVal, pid_mz),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerDebugVal__pid_mz,  // size() function pointer
    get_const_function__ControllerDebugVal__pid_mz,  // get_const(index) function pointer
    get_function__ControllerDebugVal__pid_mz,  // get(index) function pointer
    fetch_function__ControllerDebugVal__pid_mz,  // fetch(index, &value) function pointer
    assign_function__ControllerDebugVal__pid_mz,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pid_f",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(controller_interfaces::msg::ControllerDebugVal, pid_f),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerDebugVal__pid_f,  // size() function pointer
    get_const_function__ControllerDebugVal__pid_f,  // get_const(index) function pointer
    get_function__ControllerDebugVal__pid_f,  // get(index) function pointer
    fetch_function__ControllerDebugVal__pid_f,  // fetch(index, &value) function pointer
    assign_function__ControllerDebugVal__pid_f,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "imu_roll",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(controller_interfaces::msg::ControllerDebugVal, imu_roll),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerDebugVal__imu_roll,  // size() function pointer
    get_const_function__ControllerDebugVal__imu_roll,  // get_const(index) function pointer
    get_function__ControllerDebugVal__imu_roll,  // get(index) function pointer
    fetch_function__ControllerDebugVal__imu_roll,  // fetch(index, &value) function pointer
    assign_function__ControllerDebugVal__imu_roll,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "imu_pitch",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(controller_interfaces::msg::ControllerDebugVal, imu_pitch),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerDebugVal__imu_pitch,  // size() function pointer
    get_const_function__ControllerDebugVal__imu_pitch,  // get_const(index) function pointer
    get_function__ControllerDebugVal__imu_pitch,  // get(index) function pointer
    fetch_function__ControllerDebugVal__imu_pitch,  // fetch(index, &value) function pointer
    assign_function__ControllerDebugVal__imu_pitch,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "imu_yaw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(controller_interfaces::msg::ControllerDebugVal, imu_yaw),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerDebugVal__imu_yaw,  // size() function pointer
    get_const_function__ControllerDebugVal__imu_yaw,  // get_const(index) function pointer
    get_function__ControllerDebugVal__imu_yaw,  // get(index) function pointer
    fetch_function__ControllerDebugVal__imu_yaw,  // fetch(index, &value) function pointer
    assign_function__ControllerDebugVal__imu_yaw,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "opti_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(controller_interfaces::msg::ControllerDebugVal, opti_x),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerDebugVal__opti_x,  // size() function pointer
    get_const_function__ControllerDebugVal__opti_x,  // get_const(index) function pointer
    get_function__ControllerDebugVal__opti_x,  // get(index) function pointer
    fetch_function__ControllerDebugVal__opti_x,  // fetch(index, &value) function pointer
    assign_function__ControllerDebugVal__opti_x,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "opti_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(controller_interfaces::msg::ControllerDebugVal, opti_y),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerDebugVal__opti_y,  // size() function pointer
    get_const_function__ControllerDebugVal__opti_y,  // get_const(index) function pointer
    get_function__ControllerDebugVal__opti_y,  // get(index) function pointer
    fetch_function__ControllerDebugVal__opti_y,  // fetch(index, &value) function pointer
    assign_function__ControllerDebugVal__opti_y,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "opti_z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(controller_interfaces::msg::ControllerDebugVal, opti_z),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerDebugVal__opti_z,  // size() function pointer
    get_const_function__ControllerDebugVal__opti_z,  // get_const(index) function pointer
    get_function__ControllerDebugVal__opti_z,  // get(index) function pointer
    fetch_function__ControllerDebugVal__opti_z,  // fetch(index, &value) function pointer
    assign_function__ControllerDebugVal__opti_z,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "a1_mea",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(controller_interfaces::msg::ControllerDebugVal, a1_mea),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerDebugVal__a1_mea,  // size() function pointer
    get_const_function__ControllerDebugVal__a1_mea,  // get_const(index) function pointer
    get_function__ControllerDebugVal__a1_mea,  // get(index) function pointer
    fetch_function__ControllerDebugVal__a1_mea,  // fetch(index, &value) function pointer
    assign_function__ControllerDebugVal__a1_mea,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "a2_mea",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(controller_interfaces::msg::ControllerDebugVal, a2_mea),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerDebugVal__a2_mea,  // size() function pointer
    get_const_function__ControllerDebugVal__a2_mea,  // get_const(index) function pointer
    get_function__ControllerDebugVal__a2_mea,  // get(index) function pointer
    fetch_function__ControllerDebugVal__a2_mea,  // fetch(index, &value) function pointer
    assign_function__ControllerDebugVal__a2_mea,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "a3_mea",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(controller_interfaces::msg::ControllerDebugVal, a3_mea),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerDebugVal__a3_mea,  // size() function pointer
    get_const_function__ControllerDebugVal__a3_mea,  // get_const(index) function pointer
    get_function__ControllerDebugVal__a3_mea,  // get(index) function pointer
    fetch_function__ControllerDebugVal__a3_mea,  // fetch(index, &value) function pointer
    assign_function__ControllerDebugVal__a3_mea,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "a4_mea",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(controller_interfaces::msg::ControllerDebugVal, a4_mea),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerDebugVal__a4_mea,  // size() function pointer
    get_const_function__ControllerDebugVal__a4_mea,  // get_const(index) function pointer
    get_function__ControllerDebugVal__a4_mea,  // get(index) function pointer
    fetch_function__ControllerDebugVal__a4_mea,  // fetch(index, &value) function pointer
    assign_function__ControllerDebugVal__a4_mea,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ControllerDebugVal_message_members = {
  "controller_interfaces::msg",  // message namespace
  "ControllerDebugVal",  // message name
  15,  // number of fields
  sizeof(controller_interfaces::msg::ControllerDebugVal),
  ControllerDebugVal_message_member_array,  // message members
  ControllerDebugVal_init_function,  // function to initialize message memory (memory has to be allocated)
  ControllerDebugVal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ControllerDebugVal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ControllerDebugVal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace controller_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<controller_interfaces::msg::ControllerDebugVal>()
{
  return &::controller_interfaces::msg::rosidl_typesupport_introspection_cpp::ControllerDebugVal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_interfaces, msg, ControllerDebugVal)() {
  return &::controller_interfaces::msg::rosidl_typesupport_introspection_cpp::ControllerDebugVal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

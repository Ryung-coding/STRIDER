// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from imu_interfaces:msg/ImuMeasured.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "imu_interfaces/msg/detail/imu_measured__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace imu_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ImuMeasured_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) imu_interfaces::msg::ImuMeasured(_init);
}

void ImuMeasured_fini_function(void * message_memory)
{
  auto typed_message = static_cast<imu_interfaces::msg::ImuMeasured *>(message_memory);
  typed_message->~ImuMeasured();
}

size_t size_function__ImuMeasured__q(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ImuMeasured__q(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ImuMeasured__q(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImuMeasured__q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ImuMeasured__q(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ImuMeasured__q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ImuMeasured__q(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ImuMeasured__qdot(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ImuMeasured__qdot(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ImuMeasured__qdot(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImuMeasured__qdot(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ImuMeasured__qdot(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ImuMeasured__qdot(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ImuMeasured__qdot(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ImuMeasured__qddot(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ImuMeasured__qddot(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ImuMeasured__qddot(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImuMeasured__qddot(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ImuMeasured__qddot(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ImuMeasured__qddot(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ImuMeasured__qddot(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ImuMeasured_message_member_array[3] = {
  {
    "q",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(imu_interfaces::msg::ImuMeasured, q),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImuMeasured__q,  // size() function pointer
    get_const_function__ImuMeasured__q,  // get_const(index) function pointer
    get_function__ImuMeasured__q,  // get(index) function pointer
    fetch_function__ImuMeasured__q,  // fetch(index, &value) function pointer
    assign_function__ImuMeasured__q,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "qdot",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(imu_interfaces::msg::ImuMeasured, qdot),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImuMeasured__qdot,  // size() function pointer
    get_const_function__ImuMeasured__qdot,  // get_const(index) function pointer
    get_function__ImuMeasured__qdot,  // get(index) function pointer
    fetch_function__ImuMeasured__qdot,  // fetch(index, &value) function pointer
    assign_function__ImuMeasured__qdot,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "qddot",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(imu_interfaces::msg::ImuMeasured, qddot),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImuMeasured__qddot,  // size() function pointer
    get_const_function__ImuMeasured__qddot,  // get_const(index) function pointer
    get_function__ImuMeasured__qddot,  // get(index) function pointer
    fetch_function__ImuMeasured__qddot,  // fetch(index, &value) function pointer
    assign_function__ImuMeasured__qddot,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ImuMeasured_message_members = {
  "imu_interfaces::msg",  // message namespace
  "ImuMeasured",  // message name
  3,  // number of fields
  sizeof(imu_interfaces::msg::ImuMeasured),
  ImuMeasured_message_member_array,  // message members
  ImuMeasured_init_function,  // function to initialize message memory (memory has to be allocated)
  ImuMeasured_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ImuMeasured_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ImuMeasured_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace imu_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<imu_interfaces::msg::ImuMeasured>()
{
  return &::imu_interfaces::msg::rosidl_typesupport_introspection_cpp::ImuMeasured_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, imu_interfaces, msg, ImuMeasured)() {
  return &::imu_interfaces::msg::rosidl_typesupport_introspection_cpp::ImuMeasured_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

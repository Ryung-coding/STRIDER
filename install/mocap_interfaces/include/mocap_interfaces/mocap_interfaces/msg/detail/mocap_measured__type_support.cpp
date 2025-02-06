// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mocap_interfaces:msg/MocapMeasured.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mocap_interfaces/msg/detail/mocap_measured__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mocap_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MocapMeasured_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mocap_interfaces::msg::MocapMeasured(_init);
}

void MocapMeasured_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mocap_interfaces::msg::MocapMeasured *>(message_memory);
  typed_message->~MocapMeasured();
}

size_t size_function__MocapMeasured__pos(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__MocapMeasured__pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__MocapMeasured__pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MocapMeasured__pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MocapMeasured__pos(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MocapMeasured__pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MocapMeasured__pos(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__MocapMeasured__vel(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__MocapMeasured__vel(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__MocapMeasured__vel(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MocapMeasured__vel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MocapMeasured__vel(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MocapMeasured__vel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MocapMeasured__vel(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__MocapMeasured__acc(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__MocapMeasured__acc(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__MocapMeasured__acc(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MocapMeasured__acc(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MocapMeasured__acc(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MocapMeasured__acc(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MocapMeasured__acc(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MocapMeasured_message_member_array[3] = {
  {
    "pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(mocap_interfaces::msg::MocapMeasured, pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__MocapMeasured__pos,  // size() function pointer
    get_const_function__MocapMeasured__pos,  // get_const(index) function pointer
    get_function__MocapMeasured__pos,  // get(index) function pointer
    fetch_function__MocapMeasured__pos,  // fetch(index, &value) function pointer
    assign_function__MocapMeasured__pos,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(mocap_interfaces::msg::MocapMeasured, vel),  // bytes offset in struct
    nullptr,  // default value
    size_function__MocapMeasured__vel,  // size() function pointer
    get_const_function__MocapMeasured__vel,  // get_const(index) function pointer
    get_function__MocapMeasured__vel,  // get(index) function pointer
    fetch_function__MocapMeasured__vel,  // fetch(index, &value) function pointer
    assign_function__MocapMeasured__vel,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "acc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(mocap_interfaces::msg::MocapMeasured, acc),  // bytes offset in struct
    nullptr,  // default value
    size_function__MocapMeasured__acc,  // size() function pointer
    get_const_function__MocapMeasured__acc,  // get_const(index) function pointer
    get_function__MocapMeasured__acc,  // get(index) function pointer
    fetch_function__MocapMeasured__acc,  // fetch(index, &value) function pointer
    assign_function__MocapMeasured__acc,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MocapMeasured_message_members = {
  "mocap_interfaces::msg",  // message namespace
  "MocapMeasured",  // message name
  3,  // number of fields
  sizeof(mocap_interfaces::msg::MocapMeasured),
  MocapMeasured_message_member_array,  // message members
  MocapMeasured_init_function,  // function to initialize message memory (memory has to be allocated)
  MocapMeasured_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MocapMeasured_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MocapMeasured_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mocap_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mocap_interfaces::msg::MocapMeasured>()
{
  return &::mocap_interfaces::msg::rosidl_typesupport_introspection_cpp::MocapMeasured_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mocap_interfaces, msg, MocapMeasured)() {
  return &::mocap_interfaces::msg::rosidl_typesupport_introspection_cpp::MocapMeasured_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

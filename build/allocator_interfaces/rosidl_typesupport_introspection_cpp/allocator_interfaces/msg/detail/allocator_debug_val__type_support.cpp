// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from allocator_interfaces:msg/AllocatorDebugVal.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "allocator_interfaces/msg/detail/allocator_debug_val__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace allocator_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AllocatorDebugVal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) allocator_interfaces::msg::AllocatorDebugVal(_init);
}

void AllocatorDebugVal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<allocator_interfaces::msg::AllocatorDebugVal *>(message_memory);
  typed_message->~AllocatorDebugVal();
}

size_t size_function__AllocatorDebugVal__pwm(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__AllocatorDebugVal__pwm(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__AllocatorDebugVal__pwm(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__AllocatorDebugVal__pwm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__AllocatorDebugVal__pwm(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__AllocatorDebugVal__pwm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__AllocatorDebugVal__pwm(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__AllocatorDebugVal__a1_des(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__AllocatorDebugVal__a1_des(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__AllocatorDebugVal__a1_des(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__AllocatorDebugVal__a1_des(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__AllocatorDebugVal__a1_des(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__AllocatorDebugVal__a1_des(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__AllocatorDebugVal__a1_des(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__AllocatorDebugVal__a2_des(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__AllocatorDebugVal__a2_des(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__AllocatorDebugVal__a2_des(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__AllocatorDebugVal__a2_des(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__AllocatorDebugVal__a2_des(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__AllocatorDebugVal__a2_des(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__AllocatorDebugVal__a2_des(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__AllocatorDebugVal__a3_des(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__AllocatorDebugVal__a3_des(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__AllocatorDebugVal__a3_des(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__AllocatorDebugVal__a3_des(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__AllocatorDebugVal__a3_des(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__AllocatorDebugVal__a3_des(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__AllocatorDebugVal__a3_des(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__AllocatorDebugVal__a4_des(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__AllocatorDebugVal__a4_des(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__AllocatorDebugVal__a4_des(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__AllocatorDebugVal__a4_des(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__AllocatorDebugVal__a4_des(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__AllocatorDebugVal__a4_des(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__AllocatorDebugVal__a4_des(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AllocatorDebugVal_message_member_array[6] = {
  {
    "pwm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(allocator_interfaces::msg::AllocatorDebugVal, pwm),  // bytes offset in struct
    nullptr,  // default value
    size_function__AllocatorDebugVal__pwm,  // size() function pointer
    get_const_function__AllocatorDebugVal__pwm,  // get_const(index) function pointer
    get_function__AllocatorDebugVal__pwm,  // get(index) function pointer
    fetch_function__AllocatorDebugVal__pwm,  // fetch(index, &value) function pointer
    assign_function__AllocatorDebugVal__pwm,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "a1_des",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(allocator_interfaces::msg::AllocatorDebugVal, a1_des),  // bytes offset in struct
    nullptr,  // default value
    size_function__AllocatorDebugVal__a1_des,  // size() function pointer
    get_const_function__AllocatorDebugVal__a1_des,  // get_const(index) function pointer
    get_function__AllocatorDebugVal__a1_des,  // get(index) function pointer
    fetch_function__AllocatorDebugVal__a1_des,  // fetch(index, &value) function pointer
    assign_function__AllocatorDebugVal__a1_des,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "a2_des",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(allocator_interfaces::msg::AllocatorDebugVal, a2_des),  // bytes offset in struct
    nullptr,  // default value
    size_function__AllocatorDebugVal__a2_des,  // size() function pointer
    get_const_function__AllocatorDebugVal__a2_des,  // get_const(index) function pointer
    get_function__AllocatorDebugVal__a2_des,  // get(index) function pointer
    fetch_function__AllocatorDebugVal__a2_des,  // fetch(index, &value) function pointer
    assign_function__AllocatorDebugVal__a2_des,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "a3_des",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(allocator_interfaces::msg::AllocatorDebugVal, a3_des),  // bytes offset in struct
    nullptr,  // default value
    size_function__AllocatorDebugVal__a3_des,  // size() function pointer
    get_const_function__AllocatorDebugVal__a3_des,  // get_const(index) function pointer
    get_function__AllocatorDebugVal__a3_des,  // get(index) function pointer
    fetch_function__AllocatorDebugVal__a3_des,  // fetch(index, &value) function pointer
    assign_function__AllocatorDebugVal__a3_des,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "a4_des",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(allocator_interfaces::msg::AllocatorDebugVal, a4_des),  // bytes offset in struct
    nullptr,  // default value
    size_function__AllocatorDebugVal__a4_des,  // size() function pointer
    get_const_function__AllocatorDebugVal__a4_des,  // get_const(index) function pointer
    get_function__AllocatorDebugVal__a4_des,  // get(index) function pointer
    fetch_function__AllocatorDebugVal__a4_des,  // fetch(index, &value) function pointer
    assign_function__AllocatorDebugVal__a4_des,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "loop_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(allocator_interfaces::msg::AllocatorDebugVal, loop_rate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AllocatorDebugVal_message_members = {
  "allocator_interfaces::msg",  // message namespace
  "AllocatorDebugVal",  // message name
  6,  // number of fields
  sizeof(allocator_interfaces::msg::AllocatorDebugVal),
  AllocatorDebugVal_message_member_array,  // message members
  AllocatorDebugVal_init_function,  // function to initialize message memory (memory has to be allocated)
  AllocatorDebugVal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AllocatorDebugVal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AllocatorDebugVal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace allocator_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<allocator_interfaces::msg::AllocatorDebugVal>()
{
  return &::allocator_interfaces::msg::rosidl_typesupport_introspection_cpp::AllocatorDebugVal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, allocator_interfaces, msg, AllocatorDebugVal)() {
  return &::allocator_interfaces::msg::rosidl_typesupport_introspection_cpp::AllocatorDebugVal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

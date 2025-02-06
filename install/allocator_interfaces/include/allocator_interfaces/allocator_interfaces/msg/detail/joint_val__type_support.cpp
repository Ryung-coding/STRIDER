// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from allocator_interfaces:msg/JointVal.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "allocator_interfaces/msg/detail/joint_val__struct.hpp"
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

void JointVal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) allocator_interfaces::msg::JointVal(_init);
}

void JointVal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<allocator_interfaces::msg::JointVal *>(message_memory);
  typed_message->~JointVal();
}

size_t size_function__JointVal__a1_q(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__JointVal__a1_q(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__JointVal__a1_q(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointVal__a1_q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JointVal__a1_q(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JointVal__a1_q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JointVal__a1_q(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__JointVal__a2_q(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__JointVal__a2_q(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__JointVal__a2_q(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointVal__a2_q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JointVal__a2_q(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JointVal__a2_q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JointVal__a2_q(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__JointVal__a3_q(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__JointVal__a3_q(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__JointVal__a3_q(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointVal__a3_q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JointVal__a3_q(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JointVal__a3_q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JointVal__a3_q(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__JointVal__a4_q(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__JointVal__a4_q(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__JointVal__a4_q(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointVal__a4_q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JointVal__a4_q(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JointVal__a4_q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JointVal__a4_q(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointVal_message_member_array[4] = {
  {
    "a1_q",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(allocator_interfaces::msg::JointVal, a1_q),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointVal__a1_q,  // size() function pointer
    get_const_function__JointVal__a1_q,  // get_const(index) function pointer
    get_function__JointVal__a1_q,  // get(index) function pointer
    fetch_function__JointVal__a1_q,  // fetch(index, &value) function pointer
    assign_function__JointVal__a1_q,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "a2_q",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(allocator_interfaces::msg::JointVal, a2_q),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointVal__a2_q,  // size() function pointer
    get_const_function__JointVal__a2_q,  // get_const(index) function pointer
    get_function__JointVal__a2_q,  // get(index) function pointer
    fetch_function__JointVal__a2_q,  // fetch(index, &value) function pointer
    assign_function__JointVal__a2_q,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "a3_q",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(allocator_interfaces::msg::JointVal, a3_q),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointVal__a3_q,  // size() function pointer
    get_const_function__JointVal__a3_q,  // get_const(index) function pointer
    get_function__JointVal__a3_q,  // get(index) function pointer
    fetch_function__JointVal__a3_q,  // fetch(index, &value) function pointer
    assign_function__JointVal__a3_q,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "a4_q",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(allocator_interfaces::msg::JointVal, a4_q),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointVal__a4_q,  // size() function pointer
    get_const_function__JointVal__a4_q,  // get_const(index) function pointer
    get_function__JointVal__a4_q,  // get(index) function pointer
    fetch_function__JointVal__a4_q,  // fetch(index, &value) function pointer
    assign_function__JointVal__a4_q,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointVal_message_members = {
  "allocator_interfaces::msg",  // message namespace
  "JointVal",  // message name
  4,  // number of fields
  sizeof(allocator_interfaces::msg::JointVal),
  JointVal_message_member_array,  // message members
  JointVal_init_function,  // function to initialize message memory (memory has to be allocated)
  JointVal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointVal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointVal_message_members,
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
get_message_type_support_handle<allocator_interfaces::msg::JointVal>()
{
  return &::allocator_interfaces::msg::rosidl_typesupport_introspection_cpp::JointVal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, allocator_interfaces, msg, JointVal)() {
  return &::allocator_interfaces::msg::rosidl_typesupport_introspection_cpp::JointVal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

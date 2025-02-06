// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from controller_interfaces:msg/ControllerOutput.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "controller_interfaces/msg/detail/controller_output__struct.hpp"
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

void ControllerOutput_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) controller_interfaces::msg::ControllerOutput(_init);
}

void ControllerOutput_fini_function(void * message_memory)
{
  auto typed_message = static_cast<controller_interfaces::msg::ControllerOutput *>(message_memory);
  typed_message->~ControllerOutput();
}

size_t size_function__ControllerOutput__moment(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ControllerOutput__moment(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerOutput__moment(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerOutput__moment(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ControllerOutput__moment(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ControllerOutput__moment(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ControllerOutput__moment(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ControllerOutput_message_member_array[2] = {
  {
    "force",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_interfaces::msg::ControllerOutput, force),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "moment",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(controller_interfaces::msg::ControllerOutput, moment),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerOutput__moment,  // size() function pointer
    get_const_function__ControllerOutput__moment,  // get_const(index) function pointer
    get_function__ControllerOutput__moment,  // get(index) function pointer
    fetch_function__ControllerOutput__moment,  // fetch(index, &value) function pointer
    assign_function__ControllerOutput__moment,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ControllerOutput_message_members = {
  "controller_interfaces::msg",  // message namespace
  "ControllerOutput",  // message name
  2,  // number of fields
  sizeof(controller_interfaces::msg::ControllerOutput),
  ControllerOutput_message_member_array,  // message members
  ControllerOutput_init_function,  // function to initialize message memory (memory has to be allocated)
  ControllerOutput_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ControllerOutput_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ControllerOutput_message_members,
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
get_message_type_support_handle<controller_interfaces::msg::ControllerOutput>()
{
  return &::controller_interfaces::msg::rosidl_typesupport_introspection_cpp::ControllerOutput_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_interfaces, msg, ControllerOutput)() {
  return &::controller_interfaces::msg::rosidl_typesupport_introspection_cpp::ControllerOutput_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

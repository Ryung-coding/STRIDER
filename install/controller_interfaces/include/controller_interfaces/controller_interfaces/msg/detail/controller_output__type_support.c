// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from controller_interfaces:msg/ControllerOutput.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "controller_interfaces/msg/detail/controller_output__rosidl_typesupport_introspection_c.h"
#include "controller_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "controller_interfaces/msg/detail/controller_output__functions.h"
#include "controller_interfaces/msg/detail/controller_output__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__ControllerOutput_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_interfaces__msg__ControllerOutput__init(message_memory);
}

void controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__ControllerOutput_fini_function(void * message_memory)
{
  controller_interfaces__msg__ControllerOutput__fini(message_memory);
}

size_t controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__size_function__ControllerOutput__moment(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__get_const_function__ControllerOutput__moment(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__get_function__ControllerOutput__moment(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__fetch_function__ControllerOutput__moment(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__get_const_function__ControllerOutput__moment(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__assign_function__ControllerOutput__moment(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__get_function__ControllerOutput__moment(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__ControllerOutput_message_member_array[2] = {
  {
    "force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_interfaces__msg__ControllerOutput, force),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "moment",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(controller_interfaces__msg__ControllerOutput, moment),  // bytes offset in struct
    NULL,  // default value
    controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__size_function__ControllerOutput__moment,  // size() function pointer
    controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__get_const_function__ControllerOutput__moment,  // get_const(index) function pointer
    controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__get_function__ControllerOutput__moment,  // get(index) function pointer
    controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__fetch_function__ControllerOutput__moment,  // fetch(index, &value) function pointer
    controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__assign_function__ControllerOutput__moment,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__ControllerOutput_message_members = {
  "controller_interfaces__msg",  // message namespace
  "ControllerOutput",  // message name
  2,  // number of fields
  sizeof(controller_interfaces__msg__ControllerOutput),
  controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__ControllerOutput_message_member_array,  // message members
  controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__ControllerOutput_init_function,  // function to initialize message memory (memory has to be allocated)
  controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__ControllerOutput_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__ControllerOutput_message_type_support_handle = {
  0,
  &controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__ControllerOutput_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interfaces, msg, ControllerOutput)() {
  if (!controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__ControllerOutput_message_type_support_handle.typesupport_identifier) {
    controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__ControllerOutput_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &controller_interfaces__msg__ControllerOutput__rosidl_typesupport_introspection_c__ControllerOutput_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

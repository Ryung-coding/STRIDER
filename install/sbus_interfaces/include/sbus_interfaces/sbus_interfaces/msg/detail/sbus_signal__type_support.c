// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sbus_interfaces:msg/SbusSignal.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sbus_interfaces/msg/detail/sbus_signal__rosidl_typesupport_introspection_c.h"
#include "sbus_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sbus_interfaces/msg/detail/sbus_signal__functions.h"
#include "sbus_interfaces/msg/detail/sbus_signal__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__SbusSignal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sbus_interfaces__msg__SbusSignal__init(message_memory);
}

void sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__SbusSignal_fini_function(void * message_memory)
{
  sbus_interfaces__msg__SbusSignal__fini(message_memory);
}

size_t sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__size_function__SbusSignal__ch(
  const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__get_const_function__SbusSignal__ch(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__get_function__SbusSignal__ch(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__fetch_function__SbusSignal__ch(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__get_const_function__SbusSignal__ch(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__assign_function__SbusSignal__ch(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__get_function__SbusSignal__ch(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__SbusSignal_message_member_array[2] = {
  {
    "ch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(sbus_interfaces__msg__SbusSignal, ch),  // bytes offset in struct
    NULL,  // default value
    sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__size_function__SbusSignal__ch,  // size() function pointer
    sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__get_const_function__SbusSignal__ch,  // get_const(index) function pointer
    sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__get_function__SbusSignal__ch,  // get(index) function pointer
    sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__fetch_function__SbusSignal__ch,  // fetch(index, &value) function pointer
    sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__assign_function__SbusSignal__ch,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sbus_signal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sbus_interfaces__msg__SbusSignal, sbus_signal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__SbusSignal_message_members = {
  "sbus_interfaces__msg",  // message namespace
  "SbusSignal",  // message name
  2,  // number of fields
  sizeof(sbus_interfaces__msg__SbusSignal),
  sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__SbusSignal_message_member_array,  // message members
  sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__SbusSignal_init_function,  // function to initialize message memory (memory has to be allocated)
  sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__SbusSignal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__SbusSignal_message_type_support_handle = {
  0,
  &sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__SbusSignal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sbus_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sbus_interfaces, msg, SbusSignal)() {
  if (!sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__SbusSignal_message_type_support_handle.typesupport_identifier) {
    sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__SbusSignal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sbus_interfaces__msg__SbusSignal__rosidl_typesupport_introspection_c__SbusSignal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

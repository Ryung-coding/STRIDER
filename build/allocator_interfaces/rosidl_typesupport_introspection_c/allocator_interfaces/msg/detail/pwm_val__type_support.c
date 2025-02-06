// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from allocator_interfaces:msg/PwmVal.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "allocator_interfaces/msg/detail/pwm_val__rosidl_typesupport_introspection_c.h"
#include "allocator_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "allocator_interfaces/msg/detail/pwm_val__functions.h"
#include "allocator_interfaces/msg/detail/pwm_val__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void allocator_interfaces__msg__PwmVal__rosidl_typesupport_introspection_c__PwmVal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  allocator_interfaces__msg__PwmVal__init(message_memory);
}

void allocator_interfaces__msg__PwmVal__rosidl_typesupport_introspection_c__PwmVal_fini_function(void * message_memory)
{
  allocator_interfaces__msg__PwmVal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember allocator_interfaces__msg__PwmVal__rosidl_typesupport_introspection_c__PwmVal_message_member_array[4] = {
  {
    "f1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(allocator_interfaces__msg__PwmVal, f1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "f2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(allocator_interfaces__msg__PwmVal, f2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "f3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(allocator_interfaces__msg__PwmVal, f3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "f4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(allocator_interfaces__msg__PwmVal, f4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers allocator_interfaces__msg__PwmVal__rosidl_typesupport_introspection_c__PwmVal_message_members = {
  "allocator_interfaces__msg",  // message namespace
  "PwmVal",  // message name
  4,  // number of fields
  sizeof(allocator_interfaces__msg__PwmVal),
  allocator_interfaces__msg__PwmVal__rosidl_typesupport_introspection_c__PwmVal_message_member_array,  // message members
  allocator_interfaces__msg__PwmVal__rosidl_typesupport_introspection_c__PwmVal_init_function,  // function to initialize message memory (memory has to be allocated)
  allocator_interfaces__msg__PwmVal__rosidl_typesupport_introspection_c__PwmVal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t allocator_interfaces__msg__PwmVal__rosidl_typesupport_introspection_c__PwmVal_message_type_support_handle = {
  0,
  &allocator_interfaces__msg__PwmVal__rosidl_typesupport_introspection_c__PwmVal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_allocator_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, allocator_interfaces, msg, PwmVal)() {
  if (!allocator_interfaces__msg__PwmVal__rosidl_typesupport_introspection_c__PwmVal_message_type_support_handle.typesupport_identifier) {
    allocator_interfaces__msg__PwmVal__rosidl_typesupport_introspection_c__PwmVal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &allocator_interfaces__msg__PwmVal__rosidl_typesupport_introspection_c__PwmVal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

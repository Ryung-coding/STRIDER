// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from watchdog_interfaces:msg/NodeState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "watchdog_interfaces/msg/detail/node_state__rosidl_typesupport_introspection_c.h"
#include "watchdog_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "watchdog_interfaces/msg/detail/node_state__functions.h"
#include "watchdog_interfaces/msg/detail/node_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void watchdog_interfaces__msg__NodeState__rosidl_typesupport_introspection_c__NodeState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  watchdog_interfaces__msg__NodeState__init(message_memory);
}

void watchdog_interfaces__msg__NodeState__rosidl_typesupport_introspection_c__NodeState_fini_function(void * message_memory)
{
  watchdog_interfaces__msg__NodeState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember watchdog_interfaces__msg__NodeState__rosidl_typesupport_introspection_c__NodeState_message_member_array[1] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(watchdog_interfaces__msg__NodeState, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers watchdog_interfaces__msg__NodeState__rosidl_typesupport_introspection_c__NodeState_message_members = {
  "watchdog_interfaces__msg",  // message namespace
  "NodeState",  // message name
  1,  // number of fields
  sizeof(watchdog_interfaces__msg__NodeState),
  watchdog_interfaces__msg__NodeState__rosidl_typesupport_introspection_c__NodeState_message_member_array,  // message members
  watchdog_interfaces__msg__NodeState__rosidl_typesupport_introspection_c__NodeState_init_function,  // function to initialize message memory (memory has to be allocated)
  watchdog_interfaces__msg__NodeState__rosidl_typesupport_introspection_c__NodeState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t watchdog_interfaces__msg__NodeState__rosidl_typesupport_introspection_c__NodeState_message_type_support_handle = {
  0,
  &watchdog_interfaces__msg__NodeState__rosidl_typesupport_introspection_c__NodeState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_watchdog_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, watchdog_interfaces, msg, NodeState)() {
  if (!watchdog_interfaces__msg__NodeState__rosidl_typesupport_introspection_c__NodeState_message_type_support_handle.typesupport_identifier) {
    watchdog_interfaces__msg__NodeState__rosidl_typesupport_introspection_c__NodeState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &watchdog_interfaces__msg__NodeState__rosidl_typesupport_introspection_c__NodeState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

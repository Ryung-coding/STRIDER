// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from imu_interfaces:msg/ImuMeasured.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "imu_interfaces/msg/detail/imu_measured__rosidl_typesupport_introspection_c.h"
#include "imu_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "imu_interfaces/msg/detail/imu_measured__functions.h"
#include "imu_interfaces/msg/detail/imu_measured__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__ImuMeasured_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  imu_interfaces__msg__ImuMeasured__init(message_memory);
}

void imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__ImuMeasured_fini_function(void * message_memory)
{
  imu_interfaces__msg__ImuMeasured__fini(message_memory);
}

size_t imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__size_function__ImuMeasured__q(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__get_const_function__ImuMeasured__q(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__get_function__ImuMeasured__q(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__fetch_function__ImuMeasured__q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__get_const_function__ImuMeasured__q(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__assign_function__ImuMeasured__q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__get_function__ImuMeasured__q(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__size_function__ImuMeasured__qdot(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__get_const_function__ImuMeasured__qdot(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__get_function__ImuMeasured__qdot(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__fetch_function__ImuMeasured__qdot(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__get_const_function__ImuMeasured__qdot(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__assign_function__ImuMeasured__qdot(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__get_function__ImuMeasured__qdot(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__size_function__ImuMeasured__qddot(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__get_const_function__ImuMeasured__qddot(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__get_function__ImuMeasured__qddot(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__fetch_function__ImuMeasured__qddot(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__get_const_function__ImuMeasured__qddot(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__assign_function__ImuMeasured__qddot(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__get_function__ImuMeasured__qddot(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__ImuMeasured_message_member_array[3] = {
  {
    "q",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(imu_interfaces__msg__ImuMeasured, q),  // bytes offset in struct
    NULL,  // default value
    imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__size_function__ImuMeasured__q,  // size() function pointer
    imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__get_const_function__ImuMeasured__q,  // get_const(index) function pointer
    imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__get_function__ImuMeasured__q,  // get(index) function pointer
    imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__fetch_function__ImuMeasured__q,  // fetch(index, &value) function pointer
    imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__assign_function__ImuMeasured__q,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "qdot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(imu_interfaces__msg__ImuMeasured, qdot),  // bytes offset in struct
    NULL,  // default value
    imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__size_function__ImuMeasured__qdot,  // size() function pointer
    imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__get_const_function__ImuMeasured__qdot,  // get_const(index) function pointer
    imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__get_function__ImuMeasured__qdot,  // get(index) function pointer
    imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__fetch_function__ImuMeasured__qdot,  // fetch(index, &value) function pointer
    imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__assign_function__ImuMeasured__qdot,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "qddot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(imu_interfaces__msg__ImuMeasured, qddot),  // bytes offset in struct
    NULL,  // default value
    imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__size_function__ImuMeasured__qddot,  // size() function pointer
    imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__get_const_function__ImuMeasured__qddot,  // get_const(index) function pointer
    imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__get_function__ImuMeasured__qddot,  // get(index) function pointer
    imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__fetch_function__ImuMeasured__qddot,  // fetch(index, &value) function pointer
    imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__assign_function__ImuMeasured__qddot,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__ImuMeasured_message_members = {
  "imu_interfaces__msg",  // message namespace
  "ImuMeasured",  // message name
  3,  // number of fields
  sizeof(imu_interfaces__msg__ImuMeasured),
  imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__ImuMeasured_message_member_array,  // message members
  imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__ImuMeasured_init_function,  // function to initialize message memory (memory has to be allocated)
  imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__ImuMeasured_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__ImuMeasured_message_type_support_handle = {
  0,
  &imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__ImuMeasured_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_imu_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, imu_interfaces, msg, ImuMeasured)() {
  if (!imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__ImuMeasured_message_type_support_handle.typesupport_identifier) {
    imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__ImuMeasured_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &imu_interfaces__msg__ImuMeasured__rosidl_typesupport_introspection_c__ImuMeasured_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

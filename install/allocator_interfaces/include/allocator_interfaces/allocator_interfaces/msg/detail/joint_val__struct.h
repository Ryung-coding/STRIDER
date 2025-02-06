// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from allocator_interfaces:msg/JointVal.idl
// generated code does not contain a copyright notice

#ifndef ALLOCATOR_INTERFACES__MSG__DETAIL__JOINT_VAL__STRUCT_H_
#define ALLOCATOR_INTERFACES__MSG__DETAIL__JOINT_VAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/JointVal in the package allocator_interfaces.
typedef struct allocator_interfaces__msg__JointVal
{
  /// arm_1 thetas
  double a1_q[5];
  /// arm_2 thetas
  double a2_q[5];
  /// arm_3 thetas
  double a3_q[5];
  /// arm_4 thetas
  double a4_q[5];
} allocator_interfaces__msg__JointVal;

// Struct for a sequence of allocator_interfaces__msg__JointVal.
typedef struct allocator_interfaces__msg__JointVal__Sequence
{
  allocator_interfaces__msg__JointVal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} allocator_interfaces__msg__JointVal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ALLOCATOR_INTERFACES__MSG__DETAIL__JOINT_VAL__STRUCT_H_

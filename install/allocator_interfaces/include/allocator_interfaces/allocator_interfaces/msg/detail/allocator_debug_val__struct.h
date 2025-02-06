// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from allocator_interfaces:msg/AllocatorDebugVal.idl
// generated code does not contain a copyright notice

#ifndef ALLOCATOR_INTERFACES__MSG__DETAIL__ALLOCATOR_DEBUG_VAL__STRUCT_H_
#define ALLOCATOR_INTERFACES__MSG__DETAIL__ALLOCATOR_DEBUG_VAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/AllocatorDebugVal in the package allocator_interfaces.
typedef struct allocator_interfaces__msg__AllocatorDebugVal
{
  /// [0, 1]
  double pwm[4];
  /// arm_1 thetas
  double a1_des[5];
  /// arm_2 thetas
  double a2_des[5];
  /// arm_3 thetas
  double a3_des[5];
  /// arm_4 thetas
  double a4_des[5];
  /// loop Hz
  double loop_rate;
} allocator_interfaces__msg__AllocatorDebugVal;

// Struct for a sequence of allocator_interfaces__msg__AllocatorDebugVal.
typedef struct allocator_interfaces__msg__AllocatorDebugVal__Sequence
{
  allocator_interfaces__msg__AllocatorDebugVal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} allocator_interfaces__msg__AllocatorDebugVal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ALLOCATOR_INTERFACES__MSG__DETAIL__ALLOCATOR_DEBUG_VAL__STRUCT_H_

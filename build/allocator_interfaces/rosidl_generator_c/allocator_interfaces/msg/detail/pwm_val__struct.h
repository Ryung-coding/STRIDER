// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from allocator_interfaces:msg/PwmVal.idl
// generated code does not contain a copyright notice

#ifndef ALLOCATOR_INTERFACES__MSG__DETAIL__PWM_VAL__STRUCT_H_
#define ALLOCATOR_INTERFACES__MSG__DETAIL__PWM_VAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PwmVal in the package allocator_interfaces.
typedef struct allocator_interfaces__msg__PwmVal
{
  /// pwm for arm_1
  double f1;
  /// pwm for arm_2
  double f2;
  /// pwm for arm_3
  double f3;
  /// pwm for arm_4
  double f4;
} allocator_interfaces__msg__PwmVal;

// Struct for a sequence of allocator_interfaces__msg__PwmVal.
typedef struct allocator_interfaces__msg__PwmVal__Sequence
{
  allocator_interfaces__msg__PwmVal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} allocator_interfaces__msg__PwmVal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ALLOCATOR_INTERFACES__MSG__DETAIL__PWM_VAL__STRUCT_H_

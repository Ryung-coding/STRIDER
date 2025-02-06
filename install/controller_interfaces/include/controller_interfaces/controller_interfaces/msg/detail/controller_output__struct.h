// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_interfaces:msg/ControllerOutput.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_OUTPUT__STRUCT_H_
#define CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_OUTPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ControllerOutput in the package controller_interfaces.
typedef struct controller_interfaces__msg__ControllerOutput
{
  /// vertical Force
  double force;
  /// xyz Moment
  double moment[3];
} controller_interfaces__msg__ControllerOutput;

// Struct for a sequence of controller_interfaces__msg__ControllerOutput.
typedef struct controller_interfaces__msg__ControllerOutput__Sequence
{
  controller_interfaces__msg__ControllerOutput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_interfaces__msg__ControllerOutput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_OUTPUT__STRUCT_H_

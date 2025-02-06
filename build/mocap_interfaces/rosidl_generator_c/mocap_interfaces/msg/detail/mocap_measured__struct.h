// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mocap_interfaces:msg/MocapMeasured.idl
// generated code does not contain a copyright notice

#ifndef MOCAP_INTERFACES__MSG__DETAIL__MOCAP_MEASURED__STRUCT_H_
#define MOCAP_INTERFACES__MSG__DETAIL__MOCAP_MEASURED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MocapMeasured in the package mocap_interfaces.
typedef struct mocap_interfaces__msg__MocapMeasured
{
  double pos[3];
  double vel[3];
  double acc[3];
} mocap_interfaces__msg__MocapMeasured;

// Struct for a sequence of mocap_interfaces__msg__MocapMeasured.
typedef struct mocap_interfaces__msg__MocapMeasured__Sequence
{
  mocap_interfaces__msg__MocapMeasured * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mocap_interfaces__msg__MocapMeasured__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOCAP_INTERFACES__MSG__DETAIL__MOCAP_MEASURED__STRUCT_H_

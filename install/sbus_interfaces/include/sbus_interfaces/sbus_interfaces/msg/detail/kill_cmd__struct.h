// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbus_interfaces:msg/KillCmd.idl
// generated code does not contain a copyright notice

#ifndef SBUS_INTERFACES__MSG__DETAIL__KILL_CMD__STRUCT_H_
#define SBUS_INTERFACES__MSG__DETAIL__KILL_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/KillCmd in the package sbus_interfaces.
typedef struct sbus_interfaces__msg__KillCmd
{
  /// kill->true not_killed->false
  bool kill_activated;
} sbus_interfaces__msg__KillCmd;

// Struct for a sequence of sbus_interfaces__msg__KillCmd.
typedef struct sbus_interfaces__msg__KillCmd__Sequence
{
  sbus_interfaces__msg__KillCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbus_interfaces__msg__KillCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBUS_INTERFACES__MSG__DETAIL__KILL_CMD__STRUCT_H_

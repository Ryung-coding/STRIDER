// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbus_interfaces:msg/SbusSignal.idl
// generated code does not contain a copyright notice

#ifndef SBUS_INTERFACES__MSG__DETAIL__SBUS_SIGNAL__STRUCT_H_
#define SBUS_INTERFACES__MSG__DETAIL__SBUS_SIGNAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SbusSignal in the package sbus_interfaces.
typedef struct sbus_interfaces__msg__SbusSignal
{
  /// 18channel data
  int16_t ch[18];
  /// SBUS state
  uint8_t sbus_signal;
} sbus_interfaces__msg__SbusSignal;

// Struct for a sequence of sbus_interfaces__msg__SbusSignal.
typedef struct sbus_interfaces__msg__SbusSignal__Sequence
{
  sbus_interfaces__msg__SbusSignal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbus_interfaces__msg__SbusSignal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBUS_INTERFACES__MSG__DETAIL__SBUS_SIGNAL__STRUCT_H_

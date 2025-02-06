// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from imu_interfaces:msg/ImuMeasured.idl
// generated code does not contain a copyright notice

#ifndef IMU_INTERFACES__MSG__DETAIL__IMU_MEASURED__STRUCT_H_
#define IMU_INTERFACES__MSG__DETAIL__IMU_MEASURED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ImuMeasured in the package imu_interfaces.
typedef struct imu_interfaces__msg__ImuMeasured
{
  double q[3];
  double qdot[3];
  double qddot[3];
} imu_interfaces__msg__ImuMeasured;

// Struct for a sequence of imu_interfaces__msg__ImuMeasured.
typedef struct imu_interfaces__msg__ImuMeasured__Sequence
{
  imu_interfaces__msg__ImuMeasured * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} imu_interfaces__msg__ImuMeasured__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMU_INTERFACES__MSG__DETAIL__IMU_MEASURED__STRUCT_H_

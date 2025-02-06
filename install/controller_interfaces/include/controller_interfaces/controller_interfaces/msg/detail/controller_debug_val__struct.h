// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_interfaces:msg/ControllerDebugVal.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_DEBUG_VAL__STRUCT_H_
#define CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_DEBUG_VAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ControllerDebugVal in the package controller_interfaces.
typedef struct controller_interfaces__msg__ControllerDebugVal
{
  /// [roll, pitch, yaw, z] in [rad, rad, rad, m]
  double des_pos[4];
  /// pid_roll
  double pid_mx[3];
  /// pid_pitch
  double pid_my[3];
  /// pid_yaw
  double pid_mz[3];
  /// pid_z
  double pid_f[3];
  /// [rad, rad/s, rad/s^2]
  double imu_roll[3];
  /// [rad, rad/s, rad/s^2]
  double imu_pitch[3];
  /// [rad, rad/s, rad/s^2]
  double imu_yaw[3];
  /// [m, m/s, m/s^2]
  double opti_x[3];
  /// [m, m/s, m/s^2]
  double opti_y[3];
  /// [m, m/s, m/s^2]
  double opti_z[3];
  /// arm_1 thetas
  double a1_mea[5];
  /// arm_2 thetas
  double a2_mea[5];
  /// arm_3 thetas
  double a3_mea[5];
  /// arm_4 thetas
  double a4_mea[5];
} controller_interfaces__msg__ControllerDebugVal;

// Struct for a sequence of controller_interfaces__msg__ControllerDebugVal.
typedef struct controller_interfaces__msg__ControllerDebugVal__Sequence
{
  controller_interfaces__msg__ControllerDebugVal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_interfaces__msg__ControllerDebugVal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_DEBUG_VAL__STRUCT_H_

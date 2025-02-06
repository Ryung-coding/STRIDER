// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from imu_interfaces:msg/ImuMeasured.idl
// generated code does not contain a copyright notice

#ifndef IMU_INTERFACES__MSG__DETAIL__IMU_MEASURED__FUNCTIONS_H_
#define IMU_INTERFACES__MSG__DETAIL__IMU_MEASURED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "imu_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "imu_interfaces/msg/detail/imu_measured__struct.h"

/// Initialize msg/ImuMeasured message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * imu_interfaces__msg__ImuMeasured
 * )) before or use
 * imu_interfaces__msg__ImuMeasured__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_interfaces
bool
imu_interfaces__msg__ImuMeasured__init(imu_interfaces__msg__ImuMeasured * msg);

/// Finalize msg/ImuMeasured message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_interfaces
void
imu_interfaces__msg__ImuMeasured__fini(imu_interfaces__msg__ImuMeasured * msg);

/// Create msg/ImuMeasured message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * imu_interfaces__msg__ImuMeasured__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_interfaces
imu_interfaces__msg__ImuMeasured *
imu_interfaces__msg__ImuMeasured__create();

/// Destroy msg/ImuMeasured message.
/**
 * It calls
 * imu_interfaces__msg__ImuMeasured__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_interfaces
void
imu_interfaces__msg__ImuMeasured__destroy(imu_interfaces__msg__ImuMeasured * msg);

/// Check for msg/ImuMeasured message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_interfaces
bool
imu_interfaces__msg__ImuMeasured__are_equal(const imu_interfaces__msg__ImuMeasured * lhs, const imu_interfaces__msg__ImuMeasured * rhs);

/// Copy a msg/ImuMeasured message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_interfaces
bool
imu_interfaces__msg__ImuMeasured__copy(
  const imu_interfaces__msg__ImuMeasured * input,
  imu_interfaces__msg__ImuMeasured * output);

/// Initialize array of msg/ImuMeasured messages.
/**
 * It allocates the memory for the number of elements and calls
 * imu_interfaces__msg__ImuMeasured__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_interfaces
bool
imu_interfaces__msg__ImuMeasured__Sequence__init(imu_interfaces__msg__ImuMeasured__Sequence * array, size_t size);

/// Finalize array of msg/ImuMeasured messages.
/**
 * It calls
 * imu_interfaces__msg__ImuMeasured__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_interfaces
void
imu_interfaces__msg__ImuMeasured__Sequence__fini(imu_interfaces__msg__ImuMeasured__Sequence * array);

/// Create array of msg/ImuMeasured messages.
/**
 * It allocates the memory for the array and calls
 * imu_interfaces__msg__ImuMeasured__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_interfaces
imu_interfaces__msg__ImuMeasured__Sequence *
imu_interfaces__msg__ImuMeasured__Sequence__create(size_t size);

/// Destroy array of msg/ImuMeasured messages.
/**
 * It calls
 * imu_interfaces__msg__ImuMeasured__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_interfaces
void
imu_interfaces__msg__ImuMeasured__Sequence__destroy(imu_interfaces__msg__ImuMeasured__Sequence * array);

/// Check for msg/ImuMeasured message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_interfaces
bool
imu_interfaces__msg__ImuMeasured__Sequence__are_equal(const imu_interfaces__msg__ImuMeasured__Sequence * lhs, const imu_interfaces__msg__ImuMeasured__Sequence * rhs);

/// Copy an array of msg/ImuMeasured messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_interfaces
bool
imu_interfaces__msg__ImuMeasured__Sequence__copy(
  const imu_interfaces__msg__ImuMeasured__Sequence * input,
  imu_interfaces__msg__ImuMeasured__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IMU_INTERFACES__MSG__DETAIL__IMU_MEASURED__FUNCTIONS_H_

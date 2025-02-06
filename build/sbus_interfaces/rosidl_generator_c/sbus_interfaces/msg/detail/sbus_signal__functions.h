// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sbus_interfaces:msg/SbusSignal.idl
// generated code does not contain a copyright notice

#ifndef SBUS_INTERFACES__MSG__DETAIL__SBUS_SIGNAL__FUNCTIONS_H_
#define SBUS_INTERFACES__MSG__DETAIL__SBUS_SIGNAL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sbus_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "sbus_interfaces/msg/detail/sbus_signal__struct.h"

/// Initialize msg/SbusSignal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sbus_interfaces__msg__SbusSignal
 * )) before or use
 * sbus_interfaces__msg__SbusSignal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sbus_interfaces
bool
sbus_interfaces__msg__SbusSignal__init(sbus_interfaces__msg__SbusSignal * msg);

/// Finalize msg/SbusSignal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbus_interfaces
void
sbus_interfaces__msg__SbusSignal__fini(sbus_interfaces__msg__SbusSignal * msg);

/// Create msg/SbusSignal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sbus_interfaces__msg__SbusSignal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sbus_interfaces
sbus_interfaces__msg__SbusSignal *
sbus_interfaces__msg__SbusSignal__create();

/// Destroy msg/SbusSignal message.
/**
 * It calls
 * sbus_interfaces__msg__SbusSignal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbus_interfaces
void
sbus_interfaces__msg__SbusSignal__destroy(sbus_interfaces__msg__SbusSignal * msg);

/// Check for msg/SbusSignal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbus_interfaces
bool
sbus_interfaces__msg__SbusSignal__are_equal(const sbus_interfaces__msg__SbusSignal * lhs, const sbus_interfaces__msg__SbusSignal * rhs);

/// Copy a msg/SbusSignal message.
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
ROSIDL_GENERATOR_C_PUBLIC_sbus_interfaces
bool
sbus_interfaces__msg__SbusSignal__copy(
  const sbus_interfaces__msg__SbusSignal * input,
  sbus_interfaces__msg__SbusSignal * output);

/// Initialize array of msg/SbusSignal messages.
/**
 * It allocates the memory for the number of elements and calls
 * sbus_interfaces__msg__SbusSignal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbus_interfaces
bool
sbus_interfaces__msg__SbusSignal__Sequence__init(sbus_interfaces__msg__SbusSignal__Sequence * array, size_t size);

/// Finalize array of msg/SbusSignal messages.
/**
 * It calls
 * sbus_interfaces__msg__SbusSignal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbus_interfaces
void
sbus_interfaces__msg__SbusSignal__Sequence__fini(sbus_interfaces__msg__SbusSignal__Sequence * array);

/// Create array of msg/SbusSignal messages.
/**
 * It allocates the memory for the array and calls
 * sbus_interfaces__msg__SbusSignal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sbus_interfaces
sbus_interfaces__msg__SbusSignal__Sequence *
sbus_interfaces__msg__SbusSignal__Sequence__create(size_t size);

/// Destroy array of msg/SbusSignal messages.
/**
 * It calls
 * sbus_interfaces__msg__SbusSignal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbus_interfaces
void
sbus_interfaces__msg__SbusSignal__Sequence__destroy(sbus_interfaces__msg__SbusSignal__Sequence * array);

/// Check for msg/SbusSignal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbus_interfaces
bool
sbus_interfaces__msg__SbusSignal__Sequence__are_equal(const sbus_interfaces__msg__SbusSignal__Sequence * lhs, const sbus_interfaces__msg__SbusSignal__Sequence * rhs);

/// Copy an array of msg/SbusSignal messages.
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
ROSIDL_GENERATOR_C_PUBLIC_sbus_interfaces
bool
sbus_interfaces__msg__SbusSignal__Sequence__copy(
  const sbus_interfaces__msg__SbusSignal__Sequence * input,
  sbus_interfaces__msg__SbusSignal__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SBUS_INTERFACES__MSG__DETAIL__SBUS_SIGNAL__FUNCTIONS_H_

// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from allocator_interfaces:msg/PwmVal.idl
// generated code does not contain a copyright notice

#ifndef ALLOCATOR_INTERFACES__MSG__DETAIL__PWM_VAL__FUNCTIONS_H_
#define ALLOCATOR_INTERFACES__MSG__DETAIL__PWM_VAL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "allocator_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "allocator_interfaces/msg/detail/pwm_val__struct.h"

/// Initialize msg/PwmVal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * allocator_interfaces__msg__PwmVal
 * )) before or use
 * allocator_interfaces__msg__PwmVal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_allocator_interfaces
bool
allocator_interfaces__msg__PwmVal__init(allocator_interfaces__msg__PwmVal * msg);

/// Finalize msg/PwmVal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_allocator_interfaces
void
allocator_interfaces__msg__PwmVal__fini(allocator_interfaces__msg__PwmVal * msg);

/// Create msg/PwmVal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * allocator_interfaces__msg__PwmVal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_allocator_interfaces
allocator_interfaces__msg__PwmVal *
allocator_interfaces__msg__PwmVal__create();

/// Destroy msg/PwmVal message.
/**
 * It calls
 * allocator_interfaces__msg__PwmVal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_allocator_interfaces
void
allocator_interfaces__msg__PwmVal__destroy(allocator_interfaces__msg__PwmVal * msg);

/// Check for msg/PwmVal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_allocator_interfaces
bool
allocator_interfaces__msg__PwmVal__are_equal(const allocator_interfaces__msg__PwmVal * lhs, const allocator_interfaces__msg__PwmVal * rhs);

/// Copy a msg/PwmVal message.
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
ROSIDL_GENERATOR_C_PUBLIC_allocator_interfaces
bool
allocator_interfaces__msg__PwmVal__copy(
  const allocator_interfaces__msg__PwmVal * input,
  allocator_interfaces__msg__PwmVal * output);

/// Initialize array of msg/PwmVal messages.
/**
 * It allocates the memory for the number of elements and calls
 * allocator_interfaces__msg__PwmVal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_allocator_interfaces
bool
allocator_interfaces__msg__PwmVal__Sequence__init(allocator_interfaces__msg__PwmVal__Sequence * array, size_t size);

/// Finalize array of msg/PwmVal messages.
/**
 * It calls
 * allocator_interfaces__msg__PwmVal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_allocator_interfaces
void
allocator_interfaces__msg__PwmVal__Sequence__fini(allocator_interfaces__msg__PwmVal__Sequence * array);

/// Create array of msg/PwmVal messages.
/**
 * It allocates the memory for the array and calls
 * allocator_interfaces__msg__PwmVal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_allocator_interfaces
allocator_interfaces__msg__PwmVal__Sequence *
allocator_interfaces__msg__PwmVal__Sequence__create(size_t size);

/// Destroy array of msg/PwmVal messages.
/**
 * It calls
 * allocator_interfaces__msg__PwmVal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_allocator_interfaces
void
allocator_interfaces__msg__PwmVal__Sequence__destroy(allocator_interfaces__msg__PwmVal__Sequence * array);

/// Check for msg/PwmVal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_allocator_interfaces
bool
allocator_interfaces__msg__PwmVal__Sequence__are_equal(const allocator_interfaces__msg__PwmVal__Sequence * lhs, const allocator_interfaces__msg__PwmVal__Sequence * rhs);

/// Copy an array of msg/PwmVal messages.
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
ROSIDL_GENERATOR_C_PUBLIC_allocator_interfaces
bool
allocator_interfaces__msg__PwmVal__Sequence__copy(
  const allocator_interfaces__msg__PwmVal__Sequence * input,
  allocator_interfaces__msg__PwmVal__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ALLOCATOR_INTERFACES__MSG__DETAIL__PWM_VAL__FUNCTIONS_H_

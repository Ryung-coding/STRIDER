// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from allocator_interfaces:msg/AllocatorDebugVal.idl
// generated code does not contain a copyright notice

#ifndef ALLOCATOR_INTERFACES__MSG__DETAIL__ALLOCATOR_DEBUG_VAL__FUNCTIONS_H_
#define ALLOCATOR_INTERFACES__MSG__DETAIL__ALLOCATOR_DEBUG_VAL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "allocator_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "allocator_interfaces/msg/detail/allocator_debug_val__struct.h"

/// Initialize msg/AllocatorDebugVal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * allocator_interfaces__msg__AllocatorDebugVal
 * )) before or use
 * allocator_interfaces__msg__AllocatorDebugVal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_allocator_interfaces
bool
allocator_interfaces__msg__AllocatorDebugVal__init(allocator_interfaces__msg__AllocatorDebugVal * msg);

/// Finalize msg/AllocatorDebugVal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_allocator_interfaces
void
allocator_interfaces__msg__AllocatorDebugVal__fini(allocator_interfaces__msg__AllocatorDebugVal * msg);

/// Create msg/AllocatorDebugVal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * allocator_interfaces__msg__AllocatorDebugVal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_allocator_interfaces
allocator_interfaces__msg__AllocatorDebugVal *
allocator_interfaces__msg__AllocatorDebugVal__create();

/// Destroy msg/AllocatorDebugVal message.
/**
 * It calls
 * allocator_interfaces__msg__AllocatorDebugVal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_allocator_interfaces
void
allocator_interfaces__msg__AllocatorDebugVal__destroy(allocator_interfaces__msg__AllocatorDebugVal * msg);

/// Check for msg/AllocatorDebugVal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_allocator_interfaces
bool
allocator_interfaces__msg__AllocatorDebugVal__are_equal(const allocator_interfaces__msg__AllocatorDebugVal * lhs, const allocator_interfaces__msg__AllocatorDebugVal * rhs);

/// Copy a msg/AllocatorDebugVal message.
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
allocator_interfaces__msg__AllocatorDebugVal__copy(
  const allocator_interfaces__msg__AllocatorDebugVal * input,
  allocator_interfaces__msg__AllocatorDebugVal * output);

/// Initialize array of msg/AllocatorDebugVal messages.
/**
 * It allocates the memory for the number of elements and calls
 * allocator_interfaces__msg__AllocatorDebugVal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_allocator_interfaces
bool
allocator_interfaces__msg__AllocatorDebugVal__Sequence__init(allocator_interfaces__msg__AllocatorDebugVal__Sequence * array, size_t size);

/// Finalize array of msg/AllocatorDebugVal messages.
/**
 * It calls
 * allocator_interfaces__msg__AllocatorDebugVal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_allocator_interfaces
void
allocator_interfaces__msg__AllocatorDebugVal__Sequence__fini(allocator_interfaces__msg__AllocatorDebugVal__Sequence * array);

/// Create array of msg/AllocatorDebugVal messages.
/**
 * It allocates the memory for the array and calls
 * allocator_interfaces__msg__AllocatorDebugVal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_allocator_interfaces
allocator_interfaces__msg__AllocatorDebugVal__Sequence *
allocator_interfaces__msg__AllocatorDebugVal__Sequence__create(size_t size);

/// Destroy array of msg/AllocatorDebugVal messages.
/**
 * It calls
 * allocator_interfaces__msg__AllocatorDebugVal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_allocator_interfaces
void
allocator_interfaces__msg__AllocatorDebugVal__Sequence__destroy(allocator_interfaces__msg__AllocatorDebugVal__Sequence * array);

/// Check for msg/AllocatorDebugVal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_allocator_interfaces
bool
allocator_interfaces__msg__AllocatorDebugVal__Sequence__are_equal(const allocator_interfaces__msg__AllocatorDebugVal__Sequence * lhs, const allocator_interfaces__msg__AllocatorDebugVal__Sequence * rhs);

/// Copy an array of msg/AllocatorDebugVal messages.
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
allocator_interfaces__msg__AllocatorDebugVal__Sequence__copy(
  const allocator_interfaces__msg__AllocatorDebugVal__Sequence * input,
  allocator_interfaces__msg__AllocatorDebugVal__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ALLOCATOR_INTERFACES__MSG__DETAIL__ALLOCATOR_DEBUG_VAL__FUNCTIONS_H_

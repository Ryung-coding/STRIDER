// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from allocator_interfaces:msg/AllocatorDebugVal.idl
// generated code does not contain a copyright notice
#include "allocator_interfaces/msg/detail/allocator_debug_val__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
allocator_interfaces__msg__AllocatorDebugVal__init(allocator_interfaces__msg__AllocatorDebugVal * msg)
{
  if (!msg) {
    return false;
  }
  // pwm
  // a1_des
  // a2_des
  // a3_des
  // a4_des
  // loop_rate
  return true;
}

void
allocator_interfaces__msg__AllocatorDebugVal__fini(allocator_interfaces__msg__AllocatorDebugVal * msg)
{
  if (!msg) {
    return;
  }
  // pwm
  // a1_des
  // a2_des
  // a3_des
  // a4_des
  // loop_rate
}

bool
allocator_interfaces__msg__AllocatorDebugVal__are_equal(const allocator_interfaces__msg__AllocatorDebugVal * lhs, const allocator_interfaces__msg__AllocatorDebugVal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pwm
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->pwm[i] != rhs->pwm[i]) {
      return false;
    }
  }
  // a1_des
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->a1_des[i] != rhs->a1_des[i]) {
      return false;
    }
  }
  // a2_des
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->a2_des[i] != rhs->a2_des[i]) {
      return false;
    }
  }
  // a3_des
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->a3_des[i] != rhs->a3_des[i]) {
      return false;
    }
  }
  // a4_des
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->a4_des[i] != rhs->a4_des[i]) {
      return false;
    }
  }
  // loop_rate
  if (lhs->loop_rate != rhs->loop_rate) {
    return false;
  }
  return true;
}

bool
allocator_interfaces__msg__AllocatorDebugVal__copy(
  const allocator_interfaces__msg__AllocatorDebugVal * input,
  allocator_interfaces__msg__AllocatorDebugVal * output)
{
  if (!input || !output) {
    return false;
  }
  // pwm
  for (size_t i = 0; i < 4; ++i) {
    output->pwm[i] = input->pwm[i];
  }
  // a1_des
  for (size_t i = 0; i < 5; ++i) {
    output->a1_des[i] = input->a1_des[i];
  }
  // a2_des
  for (size_t i = 0; i < 5; ++i) {
    output->a2_des[i] = input->a2_des[i];
  }
  // a3_des
  for (size_t i = 0; i < 5; ++i) {
    output->a3_des[i] = input->a3_des[i];
  }
  // a4_des
  for (size_t i = 0; i < 5; ++i) {
    output->a4_des[i] = input->a4_des[i];
  }
  // loop_rate
  output->loop_rate = input->loop_rate;
  return true;
}

allocator_interfaces__msg__AllocatorDebugVal *
allocator_interfaces__msg__AllocatorDebugVal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  allocator_interfaces__msg__AllocatorDebugVal * msg = (allocator_interfaces__msg__AllocatorDebugVal *)allocator.allocate(sizeof(allocator_interfaces__msg__AllocatorDebugVal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(allocator_interfaces__msg__AllocatorDebugVal));
  bool success = allocator_interfaces__msg__AllocatorDebugVal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
allocator_interfaces__msg__AllocatorDebugVal__destroy(allocator_interfaces__msg__AllocatorDebugVal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    allocator_interfaces__msg__AllocatorDebugVal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
allocator_interfaces__msg__AllocatorDebugVal__Sequence__init(allocator_interfaces__msg__AllocatorDebugVal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  allocator_interfaces__msg__AllocatorDebugVal * data = NULL;

  if (size) {
    data = (allocator_interfaces__msg__AllocatorDebugVal *)allocator.zero_allocate(size, sizeof(allocator_interfaces__msg__AllocatorDebugVal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = allocator_interfaces__msg__AllocatorDebugVal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        allocator_interfaces__msg__AllocatorDebugVal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
allocator_interfaces__msg__AllocatorDebugVal__Sequence__fini(allocator_interfaces__msg__AllocatorDebugVal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      allocator_interfaces__msg__AllocatorDebugVal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

allocator_interfaces__msg__AllocatorDebugVal__Sequence *
allocator_interfaces__msg__AllocatorDebugVal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  allocator_interfaces__msg__AllocatorDebugVal__Sequence * array = (allocator_interfaces__msg__AllocatorDebugVal__Sequence *)allocator.allocate(sizeof(allocator_interfaces__msg__AllocatorDebugVal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = allocator_interfaces__msg__AllocatorDebugVal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
allocator_interfaces__msg__AllocatorDebugVal__Sequence__destroy(allocator_interfaces__msg__AllocatorDebugVal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    allocator_interfaces__msg__AllocatorDebugVal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
allocator_interfaces__msg__AllocatorDebugVal__Sequence__are_equal(const allocator_interfaces__msg__AllocatorDebugVal__Sequence * lhs, const allocator_interfaces__msg__AllocatorDebugVal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!allocator_interfaces__msg__AllocatorDebugVal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
allocator_interfaces__msg__AllocatorDebugVal__Sequence__copy(
  const allocator_interfaces__msg__AllocatorDebugVal__Sequence * input,
  allocator_interfaces__msg__AllocatorDebugVal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(allocator_interfaces__msg__AllocatorDebugVal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    allocator_interfaces__msg__AllocatorDebugVal * data =
      (allocator_interfaces__msg__AllocatorDebugVal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!allocator_interfaces__msg__AllocatorDebugVal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          allocator_interfaces__msg__AllocatorDebugVal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!allocator_interfaces__msg__AllocatorDebugVal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from allocator_interfaces:msg/PwmVal.idl
// generated code does not contain a copyright notice
#include "allocator_interfaces/msg/detail/pwm_val__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
allocator_interfaces__msg__PwmVal__init(allocator_interfaces__msg__PwmVal * msg)
{
  if (!msg) {
    return false;
  }
  // f1
  // f2
  // f3
  // f4
  return true;
}

void
allocator_interfaces__msg__PwmVal__fini(allocator_interfaces__msg__PwmVal * msg)
{
  if (!msg) {
    return;
  }
  // f1
  // f2
  // f3
  // f4
}

bool
allocator_interfaces__msg__PwmVal__are_equal(const allocator_interfaces__msg__PwmVal * lhs, const allocator_interfaces__msg__PwmVal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // f1
  if (lhs->f1 != rhs->f1) {
    return false;
  }
  // f2
  if (lhs->f2 != rhs->f2) {
    return false;
  }
  // f3
  if (lhs->f3 != rhs->f3) {
    return false;
  }
  // f4
  if (lhs->f4 != rhs->f4) {
    return false;
  }
  return true;
}

bool
allocator_interfaces__msg__PwmVal__copy(
  const allocator_interfaces__msg__PwmVal * input,
  allocator_interfaces__msg__PwmVal * output)
{
  if (!input || !output) {
    return false;
  }
  // f1
  output->f1 = input->f1;
  // f2
  output->f2 = input->f2;
  // f3
  output->f3 = input->f3;
  // f4
  output->f4 = input->f4;
  return true;
}

allocator_interfaces__msg__PwmVal *
allocator_interfaces__msg__PwmVal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  allocator_interfaces__msg__PwmVal * msg = (allocator_interfaces__msg__PwmVal *)allocator.allocate(sizeof(allocator_interfaces__msg__PwmVal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(allocator_interfaces__msg__PwmVal));
  bool success = allocator_interfaces__msg__PwmVal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
allocator_interfaces__msg__PwmVal__destroy(allocator_interfaces__msg__PwmVal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    allocator_interfaces__msg__PwmVal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
allocator_interfaces__msg__PwmVal__Sequence__init(allocator_interfaces__msg__PwmVal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  allocator_interfaces__msg__PwmVal * data = NULL;

  if (size) {
    data = (allocator_interfaces__msg__PwmVal *)allocator.zero_allocate(size, sizeof(allocator_interfaces__msg__PwmVal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = allocator_interfaces__msg__PwmVal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        allocator_interfaces__msg__PwmVal__fini(&data[i - 1]);
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
allocator_interfaces__msg__PwmVal__Sequence__fini(allocator_interfaces__msg__PwmVal__Sequence * array)
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
      allocator_interfaces__msg__PwmVal__fini(&array->data[i]);
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

allocator_interfaces__msg__PwmVal__Sequence *
allocator_interfaces__msg__PwmVal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  allocator_interfaces__msg__PwmVal__Sequence * array = (allocator_interfaces__msg__PwmVal__Sequence *)allocator.allocate(sizeof(allocator_interfaces__msg__PwmVal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = allocator_interfaces__msg__PwmVal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
allocator_interfaces__msg__PwmVal__Sequence__destroy(allocator_interfaces__msg__PwmVal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    allocator_interfaces__msg__PwmVal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
allocator_interfaces__msg__PwmVal__Sequence__are_equal(const allocator_interfaces__msg__PwmVal__Sequence * lhs, const allocator_interfaces__msg__PwmVal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!allocator_interfaces__msg__PwmVal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
allocator_interfaces__msg__PwmVal__Sequence__copy(
  const allocator_interfaces__msg__PwmVal__Sequence * input,
  allocator_interfaces__msg__PwmVal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(allocator_interfaces__msg__PwmVal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    allocator_interfaces__msg__PwmVal * data =
      (allocator_interfaces__msg__PwmVal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!allocator_interfaces__msg__PwmVal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          allocator_interfaces__msg__PwmVal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!allocator_interfaces__msg__PwmVal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

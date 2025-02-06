// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from allocator_interfaces:msg/JointVal.idl
// generated code does not contain a copyright notice
#include "allocator_interfaces/msg/detail/joint_val__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
allocator_interfaces__msg__JointVal__init(allocator_interfaces__msg__JointVal * msg)
{
  if (!msg) {
    return false;
  }
  // a1_q
  // a2_q
  // a3_q
  // a4_q
  return true;
}

void
allocator_interfaces__msg__JointVal__fini(allocator_interfaces__msg__JointVal * msg)
{
  if (!msg) {
    return;
  }
  // a1_q
  // a2_q
  // a3_q
  // a4_q
}

bool
allocator_interfaces__msg__JointVal__are_equal(const allocator_interfaces__msg__JointVal * lhs, const allocator_interfaces__msg__JointVal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a1_q
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->a1_q[i] != rhs->a1_q[i]) {
      return false;
    }
  }
  // a2_q
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->a2_q[i] != rhs->a2_q[i]) {
      return false;
    }
  }
  // a3_q
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->a3_q[i] != rhs->a3_q[i]) {
      return false;
    }
  }
  // a4_q
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->a4_q[i] != rhs->a4_q[i]) {
      return false;
    }
  }
  return true;
}

bool
allocator_interfaces__msg__JointVal__copy(
  const allocator_interfaces__msg__JointVal * input,
  allocator_interfaces__msg__JointVal * output)
{
  if (!input || !output) {
    return false;
  }
  // a1_q
  for (size_t i = 0; i < 5; ++i) {
    output->a1_q[i] = input->a1_q[i];
  }
  // a2_q
  for (size_t i = 0; i < 5; ++i) {
    output->a2_q[i] = input->a2_q[i];
  }
  // a3_q
  for (size_t i = 0; i < 5; ++i) {
    output->a3_q[i] = input->a3_q[i];
  }
  // a4_q
  for (size_t i = 0; i < 5; ++i) {
    output->a4_q[i] = input->a4_q[i];
  }
  return true;
}

allocator_interfaces__msg__JointVal *
allocator_interfaces__msg__JointVal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  allocator_interfaces__msg__JointVal * msg = (allocator_interfaces__msg__JointVal *)allocator.allocate(sizeof(allocator_interfaces__msg__JointVal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(allocator_interfaces__msg__JointVal));
  bool success = allocator_interfaces__msg__JointVal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
allocator_interfaces__msg__JointVal__destroy(allocator_interfaces__msg__JointVal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    allocator_interfaces__msg__JointVal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
allocator_interfaces__msg__JointVal__Sequence__init(allocator_interfaces__msg__JointVal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  allocator_interfaces__msg__JointVal * data = NULL;

  if (size) {
    data = (allocator_interfaces__msg__JointVal *)allocator.zero_allocate(size, sizeof(allocator_interfaces__msg__JointVal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = allocator_interfaces__msg__JointVal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        allocator_interfaces__msg__JointVal__fini(&data[i - 1]);
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
allocator_interfaces__msg__JointVal__Sequence__fini(allocator_interfaces__msg__JointVal__Sequence * array)
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
      allocator_interfaces__msg__JointVal__fini(&array->data[i]);
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

allocator_interfaces__msg__JointVal__Sequence *
allocator_interfaces__msg__JointVal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  allocator_interfaces__msg__JointVal__Sequence * array = (allocator_interfaces__msg__JointVal__Sequence *)allocator.allocate(sizeof(allocator_interfaces__msg__JointVal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = allocator_interfaces__msg__JointVal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
allocator_interfaces__msg__JointVal__Sequence__destroy(allocator_interfaces__msg__JointVal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    allocator_interfaces__msg__JointVal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
allocator_interfaces__msg__JointVal__Sequence__are_equal(const allocator_interfaces__msg__JointVal__Sequence * lhs, const allocator_interfaces__msg__JointVal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!allocator_interfaces__msg__JointVal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
allocator_interfaces__msg__JointVal__Sequence__copy(
  const allocator_interfaces__msg__JointVal__Sequence * input,
  allocator_interfaces__msg__JointVal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(allocator_interfaces__msg__JointVal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    allocator_interfaces__msg__JointVal * data =
      (allocator_interfaces__msg__JointVal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!allocator_interfaces__msg__JointVal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          allocator_interfaces__msg__JointVal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!allocator_interfaces__msg__JointVal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mocap_interfaces:msg/MocapMeasured.idl
// generated code does not contain a copyright notice
#include "mocap_interfaces/msg/detail/mocap_measured__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mocap_interfaces__msg__MocapMeasured__init(mocap_interfaces__msg__MocapMeasured * msg)
{
  if (!msg) {
    return false;
  }
  // pos
  // vel
  // acc
  return true;
}

void
mocap_interfaces__msg__MocapMeasured__fini(mocap_interfaces__msg__MocapMeasured * msg)
{
  if (!msg) {
    return;
  }
  // pos
  // vel
  // acc
}

bool
mocap_interfaces__msg__MocapMeasured__are_equal(const mocap_interfaces__msg__MocapMeasured * lhs, const mocap_interfaces__msg__MocapMeasured * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pos
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->pos[i] != rhs->pos[i]) {
      return false;
    }
  }
  // vel
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->vel[i] != rhs->vel[i]) {
      return false;
    }
  }
  // acc
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->acc[i] != rhs->acc[i]) {
      return false;
    }
  }
  return true;
}

bool
mocap_interfaces__msg__MocapMeasured__copy(
  const mocap_interfaces__msg__MocapMeasured * input,
  mocap_interfaces__msg__MocapMeasured * output)
{
  if (!input || !output) {
    return false;
  }
  // pos
  for (size_t i = 0; i < 3; ++i) {
    output->pos[i] = input->pos[i];
  }
  // vel
  for (size_t i = 0; i < 3; ++i) {
    output->vel[i] = input->vel[i];
  }
  // acc
  for (size_t i = 0; i < 3; ++i) {
    output->acc[i] = input->acc[i];
  }
  return true;
}

mocap_interfaces__msg__MocapMeasured *
mocap_interfaces__msg__MocapMeasured__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap_interfaces__msg__MocapMeasured * msg = (mocap_interfaces__msg__MocapMeasured *)allocator.allocate(sizeof(mocap_interfaces__msg__MocapMeasured), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mocap_interfaces__msg__MocapMeasured));
  bool success = mocap_interfaces__msg__MocapMeasured__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mocap_interfaces__msg__MocapMeasured__destroy(mocap_interfaces__msg__MocapMeasured * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mocap_interfaces__msg__MocapMeasured__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mocap_interfaces__msg__MocapMeasured__Sequence__init(mocap_interfaces__msg__MocapMeasured__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap_interfaces__msg__MocapMeasured * data = NULL;

  if (size) {
    data = (mocap_interfaces__msg__MocapMeasured *)allocator.zero_allocate(size, sizeof(mocap_interfaces__msg__MocapMeasured), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mocap_interfaces__msg__MocapMeasured__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mocap_interfaces__msg__MocapMeasured__fini(&data[i - 1]);
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
mocap_interfaces__msg__MocapMeasured__Sequence__fini(mocap_interfaces__msg__MocapMeasured__Sequence * array)
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
      mocap_interfaces__msg__MocapMeasured__fini(&array->data[i]);
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

mocap_interfaces__msg__MocapMeasured__Sequence *
mocap_interfaces__msg__MocapMeasured__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap_interfaces__msg__MocapMeasured__Sequence * array = (mocap_interfaces__msg__MocapMeasured__Sequence *)allocator.allocate(sizeof(mocap_interfaces__msg__MocapMeasured__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mocap_interfaces__msg__MocapMeasured__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mocap_interfaces__msg__MocapMeasured__Sequence__destroy(mocap_interfaces__msg__MocapMeasured__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mocap_interfaces__msg__MocapMeasured__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mocap_interfaces__msg__MocapMeasured__Sequence__are_equal(const mocap_interfaces__msg__MocapMeasured__Sequence * lhs, const mocap_interfaces__msg__MocapMeasured__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mocap_interfaces__msg__MocapMeasured__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mocap_interfaces__msg__MocapMeasured__Sequence__copy(
  const mocap_interfaces__msg__MocapMeasured__Sequence * input,
  mocap_interfaces__msg__MocapMeasured__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mocap_interfaces__msg__MocapMeasured);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mocap_interfaces__msg__MocapMeasured * data =
      (mocap_interfaces__msg__MocapMeasured *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mocap_interfaces__msg__MocapMeasured__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mocap_interfaces__msg__MocapMeasured__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mocap_interfaces__msg__MocapMeasured__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

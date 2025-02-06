// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from imu_interfaces:msg/ImuMeasured.idl
// generated code does not contain a copyright notice
#include "imu_interfaces/msg/detail/imu_measured__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
imu_interfaces__msg__ImuMeasured__init(imu_interfaces__msg__ImuMeasured * msg)
{
  if (!msg) {
    return false;
  }
  // q
  // qdot
  // qddot
  return true;
}

void
imu_interfaces__msg__ImuMeasured__fini(imu_interfaces__msg__ImuMeasured * msg)
{
  if (!msg) {
    return;
  }
  // q
  // qdot
  // qddot
}

bool
imu_interfaces__msg__ImuMeasured__are_equal(const imu_interfaces__msg__ImuMeasured * lhs, const imu_interfaces__msg__ImuMeasured * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // q
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->q[i] != rhs->q[i]) {
      return false;
    }
  }
  // qdot
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->qdot[i] != rhs->qdot[i]) {
      return false;
    }
  }
  // qddot
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->qddot[i] != rhs->qddot[i]) {
      return false;
    }
  }
  return true;
}

bool
imu_interfaces__msg__ImuMeasured__copy(
  const imu_interfaces__msg__ImuMeasured * input,
  imu_interfaces__msg__ImuMeasured * output)
{
  if (!input || !output) {
    return false;
  }
  // q
  for (size_t i = 0; i < 3; ++i) {
    output->q[i] = input->q[i];
  }
  // qdot
  for (size_t i = 0; i < 3; ++i) {
    output->qdot[i] = input->qdot[i];
  }
  // qddot
  for (size_t i = 0; i < 3; ++i) {
    output->qddot[i] = input->qddot[i];
  }
  return true;
}

imu_interfaces__msg__ImuMeasured *
imu_interfaces__msg__ImuMeasured__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_interfaces__msg__ImuMeasured * msg = (imu_interfaces__msg__ImuMeasured *)allocator.allocate(sizeof(imu_interfaces__msg__ImuMeasured), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(imu_interfaces__msg__ImuMeasured));
  bool success = imu_interfaces__msg__ImuMeasured__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
imu_interfaces__msg__ImuMeasured__destroy(imu_interfaces__msg__ImuMeasured * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    imu_interfaces__msg__ImuMeasured__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
imu_interfaces__msg__ImuMeasured__Sequence__init(imu_interfaces__msg__ImuMeasured__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_interfaces__msg__ImuMeasured * data = NULL;

  if (size) {
    data = (imu_interfaces__msg__ImuMeasured *)allocator.zero_allocate(size, sizeof(imu_interfaces__msg__ImuMeasured), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = imu_interfaces__msg__ImuMeasured__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        imu_interfaces__msg__ImuMeasured__fini(&data[i - 1]);
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
imu_interfaces__msg__ImuMeasured__Sequence__fini(imu_interfaces__msg__ImuMeasured__Sequence * array)
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
      imu_interfaces__msg__ImuMeasured__fini(&array->data[i]);
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

imu_interfaces__msg__ImuMeasured__Sequence *
imu_interfaces__msg__ImuMeasured__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_interfaces__msg__ImuMeasured__Sequence * array = (imu_interfaces__msg__ImuMeasured__Sequence *)allocator.allocate(sizeof(imu_interfaces__msg__ImuMeasured__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = imu_interfaces__msg__ImuMeasured__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
imu_interfaces__msg__ImuMeasured__Sequence__destroy(imu_interfaces__msg__ImuMeasured__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    imu_interfaces__msg__ImuMeasured__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
imu_interfaces__msg__ImuMeasured__Sequence__are_equal(const imu_interfaces__msg__ImuMeasured__Sequence * lhs, const imu_interfaces__msg__ImuMeasured__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!imu_interfaces__msg__ImuMeasured__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
imu_interfaces__msg__ImuMeasured__Sequence__copy(
  const imu_interfaces__msg__ImuMeasured__Sequence * input,
  imu_interfaces__msg__ImuMeasured__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(imu_interfaces__msg__ImuMeasured);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    imu_interfaces__msg__ImuMeasured * data =
      (imu_interfaces__msg__ImuMeasured *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!imu_interfaces__msg__ImuMeasured__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          imu_interfaces__msg__ImuMeasured__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!imu_interfaces__msg__ImuMeasured__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

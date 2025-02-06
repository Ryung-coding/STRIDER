// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sbus_interfaces:msg/KillCmd.idl
// generated code does not contain a copyright notice
#include "sbus_interfaces/msg/detail/kill_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sbus_interfaces__msg__KillCmd__init(sbus_interfaces__msg__KillCmd * msg)
{
  if (!msg) {
    return false;
  }
  // kill_activated
  return true;
}

void
sbus_interfaces__msg__KillCmd__fini(sbus_interfaces__msg__KillCmd * msg)
{
  if (!msg) {
    return;
  }
  // kill_activated
}

bool
sbus_interfaces__msg__KillCmd__are_equal(const sbus_interfaces__msg__KillCmd * lhs, const sbus_interfaces__msg__KillCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // kill_activated
  if (lhs->kill_activated != rhs->kill_activated) {
    return false;
  }
  return true;
}

bool
sbus_interfaces__msg__KillCmd__copy(
  const sbus_interfaces__msg__KillCmd * input,
  sbus_interfaces__msg__KillCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // kill_activated
  output->kill_activated = input->kill_activated;
  return true;
}

sbus_interfaces__msg__KillCmd *
sbus_interfaces__msg__KillCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbus_interfaces__msg__KillCmd * msg = (sbus_interfaces__msg__KillCmd *)allocator.allocate(sizeof(sbus_interfaces__msg__KillCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sbus_interfaces__msg__KillCmd));
  bool success = sbus_interfaces__msg__KillCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sbus_interfaces__msg__KillCmd__destroy(sbus_interfaces__msg__KillCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sbus_interfaces__msg__KillCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sbus_interfaces__msg__KillCmd__Sequence__init(sbus_interfaces__msg__KillCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbus_interfaces__msg__KillCmd * data = NULL;

  if (size) {
    data = (sbus_interfaces__msg__KillCmd *)allocator.zero_allocate(size, sizeof(sbus_interfaces__msg__KillCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sbus_interfaces__msg__KillCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sbus_interfaces__msg__KillCmd__fini(&data[i - 1]);
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
sbus_interfaces__msg__KillCmd__Sequence__fini(sbus_interfaces__msg__KillCmd__Sequence * array)
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
      sbus_interfaces__msg__KillCmd__fini(&array->data[i]);
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

sbus_interfaces__msg__KillCmd__Sequence *
sbus_interfaces__msg__KillCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbus_interfaces__msg__KillCmd__Sequence * array = (sbus_interfaces__msg__KillCmd__Sequence *)allocator.allocate(sizeof(sbus_interfaces__msg__KillCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sbus_interfaces__msg__KillCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sbus_interfaces__msg__KillCmd__Sequence__destroy(sbus_interfaces__msg__KillCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sbus_interfaces__msg__KillCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sbus_interfaces__msg__KillCmd__Sequence__are_equal(const sbus_interfaces__msg__KillCmd__Sequence * lhs, const sbus_interfaces__msg__KillCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sbus_interfaces__msg__KillCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sbus_interfaces__msg__KillCmd__Sequence__copy(
  const sbus_interfaces__msg__KillCmd__Sequence * input,
  sbus_interfaces__msg__KillCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sbus_interfaces__msg__KillCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sbus_interfaces__msg__KillCmd * data =
      (sbus_interfaces__msg__KillCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sbus_interfaces__msg__KillCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sbus_interfaces__msg__KillCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sbus_interfaces__msg__KillCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

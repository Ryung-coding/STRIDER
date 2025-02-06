// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from controller_interfaces:msg/ControllerOutput.idl
// generated code does not contain a copyright notice
#include "controller_interfaces/msg/detail/controller_output__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
controller_interfaces__msg__ControllerOutput__init(controller_interfaces__msg__ControllerOutput * msg)
{
  if (!msg) {
    return false;
  }
  // force
  // moment
  return true;
}

void
controller_interfaces__msg__ControllerOutput__fini(controller_interfaces__msg__ControllerOutput * msg)
{
  if (!msg) {
    return;
  }
  // force
  // moment
}

bool
controller_interfaces__msg__ControllerOutput__are_equal(const controller_interfaces__msg__ControllerOutput * lhs, const controller_interfaces__msg__ControllerOutput * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // force
  if (lhs->force != rhs->force) {
    return false;
  }
  // moment
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->moment[i] != rhs->moment[i]) {
      return false;
    }
  }
  return true;
}

bool
controller_interfaces__msg__ControllerOutput__copy(
  const controller_interfaces__msg__ControllerOutput * input,
  controller_interfaces__msg__ControllerOutput * output)
{
  if (!input || !output) {
    return false;
  }
  // force
  output->force = input->force;
  // moment
  for (size_t i = 0; i < 3; ++i) {
    output->moment[i] = input->moment[i];
  }
  return true;
}

controller_interfaces__msg__ControllerOutput *
controller_interfaces__msg__ControllerOutput__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_interfaces__msg__ControllerOutput * msg = (controller_interfaces__msg__ControllerOutput *)allocator.allocate(sizeof(controller_interfaces__msg__ControllerOutput), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_interfaces__msg__ControllerOutput));
  bool success = controller_interfaces__msg__ControllerOutput__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
controller_interfaces__msg__ControllerOutput__destroy(controller_interfaces__msg__ControllerOutput * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    controller_interfaces__msg__ControllerOutput__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
controller_interfaces__msg__ControllerOutput__Sequence__init(controller_interfaces__msg__ControllerOutput__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_interfaces__msg__ControllerOutput * data = NULL;

  if (size) {
    data = (controller_interfaces__msg__ControllerOutput *)allocator.zero_allocate(size, sizeof(controller_interfaces__msg__ControllerOutput), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_interfaces__msg__ControllerOutput__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_interfaces__msg__ControllerOutput__fini(&data[i - 1]);
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
controller_interfaces__msg__ControllerOutput__Sequence__fini(controller_interfaces__msg__ControllerOutput__Sequence * array)
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
      controller_interfaces__msg__ControllerOutput__fini(&array->data[i]);
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

controller_interfaces__msg__ControllerOutput__Sequence *
controller_interfaces__msg__ControllerOutput__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_interfaces__msg__ControllerOutput__Sequence * array = (controller_interfaces__msg__ControllerOutput__Sequence *)allocator.allocate(sizeof(controller_interfaces__msg__ControllerOutput__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = controller_interfaces__msg__ControllerOutput__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
controller_interfaces__msg__ControllerOutput__Sequence__destroy(controller_interfaces__msg__ControllerOutput__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    controller_interfaces__msg__ControllerOutput__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
controller_interfaces__msg__ControllerOutput__Sequence__are_equal(const controller_interfaces__msg__ControllerOutput__Sequence * lhs, const controller_interfaces__msg__ControllerOutput__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!controller_interfaces__msg__ControllerOutput__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
controller_interfaces__msg__ControllerOutput__Sequence__copy(
  const controller_interfaces__msg__ControllerOutput__Sequence * input,
  controller_interfaces__msg__ControllerOutput__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(controller_interfaces__msg__ControllerOutput);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    controller_interfaces__msg__ControllerOutput * data =
      (controller_interfaces__msg__ControllerOutput *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!controller_interfaces__msg__ControllerOutput__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          controller_interfaces__msg__ControllerOutput__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!controller_interfaces__msg__ControllerOutput__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

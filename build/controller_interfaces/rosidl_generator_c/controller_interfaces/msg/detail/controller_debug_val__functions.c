// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from controller_interfaces:msg/ControllerDebugVal.idl
// generated code does not contain a copyright notice
#include "controller_interfaces/msg/detail/controller_debug_val__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
controller_interfaces__msg__ControllerDebugVal__init(controller_interfaces__msg__ControllerDebugVal * msg)
{
  if (!msg) {
    return false;
  }
  // des_pos
  // pid_mx
  // pid_my
  // pid_mz
  // pid_f
  // imu_roll
  // imu_pitch
  // imu_yaw
  // opti_x
  // opti_y
  // opti_z
  // a1_mea
  // a2_mea
  // a3_mea
  // a4_mea
  return true;
}

void
controller_interfaces__msg__ControllerDebugVal__fini(controller_interfaces__msg__ControllerDebugVal * msg)
{
  if (!msg) {
    return;
  }
  // des_pos
  // pid_mx
  // pid_my
  // pid_mz
  // pid_f
  // imu_roll
  // imu_pitch
  // imu_yaw
  // opti_x
  // opti_y
  // opti_z
  // a1_mea
  // a2_mea
  // a3_mea
  // a4_mea
}

bool
controller_interfaces__msg__ControllerDebugVal__are_equal(const controller_interfaces__msg__ControllerDebugVal * lhs, const controller_interfaces__msg__ControllerDebugVal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // des_pos
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->des_pos[i] != rhs->des_pos[i]) {
      return false;
    }
  }
  // pid_mx
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->pid_mx[i] != rhs->pid_mx[i]) {
      return false;
    }
  }
  // pid_my
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->pid_my[i] != rhs->pid_my[i]) {
      return false;
    }
  }
  // pid_mz
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->pid_mz[i] != rhs->pid_mz[i]) {
      return false;
    }
  }
  // pid_f
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->pid_f[i] != rhs->pid_f[i]) {
      return false;
    }
  }
  // imu_roll
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->imu_roll[i] != rhs->imu_roll[i]) {
      return false;
    }
  }
  // imu_pitch
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->imu_pitch[i] != rhs->imu_pitch[i]) {
      return false;
    }
  }
  // imu_yaw
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->imu_yaw[i] != rhs->imu_yaw[i]) {
      return false;
    }
  }
  // opti_x
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->opti_x[i] != rhs->opti_x[i]) {
      return false;
    }
  }
  // opti_y
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->opti_y[i] != rhs->opti_y[i]) {
      return false;
    }
  }
  // opti_z
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->opti_z[i] != rhs->opti_z[i]) {
      return false;
    }
  }
  // a1_mea
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->a1_mea[i] != rhs->a1_mea[i]) {
      return false;
    }
  }
  // a2_mea
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->a2_mea[i] != rhs->a2_mea[i]) {
      return false;
    }
  }
  // a3_mea
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->a3_mea[i] != rhs->a3_mea[i]) {
      return false;
    }
  }
  // a4_mea
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->a4_mea[i] != rhs->a4_mea[i]) {
      return false;
    }
  }
  return true;
}

bool
controller_interfaces__msg__ControllerDebugVal__copy(
  const controller_interfaces__msg__ControllerDebugVal * input,
  controller_interfaces__msg__ControllerDebugVal * output)
{
  if (!input || !output) {
    return false;
  }
  // des_pos
  for (size_t i = 0; i < 4; ++i) {
    output->des_pos[i] = input->des_pos[i];
  }
  // pid_mx
  for (size_t i = 0; i < 3; ++i) {
    output->pid_mx[i] = input->pid_mx[i];
  }
  // pid_my
  for (size_t i = 0; i < 3; ++i) {
    output->pid_my[i] = input->pid_my[i];
  }
  // pid_mz
  for (size_t i = 0; i < 3; ++i) {
    output->pid_mz[i] = input->pid_mz[i];
  }
  // pid_f
  for (size_t i = 0; i < 3; ++i) {
    output->pid_f[i] = input->pid_f[i];
  }
  // imu_roll
  for (size_t i = 0; i < 3; ++i) {
    output->imu_roll[i] = input->imu_roll[i];
  }
  // imu_pitch
  for (size_t i = 0; i < 3; ++i) {
    output->imu_pitch[i] = input->imu_pitch[i];
  }
  // imu_yaw
  for (size_t i = 0; i < 3; ++i) {
    output->imu_yaw[i] = input->imu_yaw[i];
  }
  // opti_x
  for (size_t i = 0; i < 3; ++i) {
    output->opti_x[i] = input->opti_x[i];
  }
  // opti_y
  for (size_t i = 0; i < 3; ++i) {
    output->opti_y[i] = input->opti_y[i];
  }
  // opti_z
  for (size_t i = 0; i < 3; ++i) {
    output->opti_z[i] = input->opti_z[i];
  }
  // a1_mea
  for (size_t i = 0; i < 5; ++i) {
    output->a1_mea[i] = input->a1_mea[i];
  }
  // a2_mea
  for (size_t i = 0; i < 5; ++i) {
    output->a2_mea[i] = input->a2_mea[i];
  }
  // a3_mea
  for (size_t i = 0; i < 5; ++i) {
    output->a3_mea[i] = input->a3_mea[i];
  }
  // a4_mea
  for (size_t i = 0; i < 5; ++i) {
    output->a4_mea[i] = input->a4_mea[i];
  }
  return true;
}

controller_interfaces__msg__ControllerDebugVal *
controller_interfaces__msg__ControllerDebugVal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_interfaces__msg__ControllerDebugVal * msg = (controller_interfaces__msg__ControllerDebugVal *)allocator.allocate(sizeof(controller_interfaces__msg__ControllerDebugVal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_interfaces__msg__ControllerDebugVal));
  bool success = controller_interfaces__msg__ControllerDebugVal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
controller_interfaces__msg__ControllerDebugVal__destroy(controller_interfaces__msg__ControllerDebugVal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    controller_interfaces__msg__ControllerDebugVal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
controller_interfaces__msg__ControllerDebugVal__Sequence__init(controller_interfaces__msg__ControllerDebugVal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_interfaces__msg__ControllerDebugVal * data = NULL;

  if (size) {
    data = (controller_interfaces__msg__ControllerDebugVal *)allocator.zero_allocate(size, sizeof(controller_interfaces__msg__ControllerDebugVal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_interfaces__msg__ControllerDebugVal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_interfaces__msg__ControllerDebugVal__fini(&data[i - 1]);
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
controller_interfaces__msg__ControllerDebugVal__Sequence__fini(controller_interfaces__msg__ControllerDebugVal__Sequence * array)
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
      controller_interfaces__msg__ControllerDebugVal__fini(&array->data[i]);
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

controller_interfaces__msg__ControllerDebugVal__Sequence *
controller_interfaces__msg__ControllerDebugVal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_interfaces__msg__ControllerDebugVal__Sequence * array = (controller_interfaces__msg__ControllerDebugVal__Sequence *)allocator.allocate(sizeof(controller_interfaces__msg__ControllerDebugVal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = controller_interfaces__msg__ControllerDebugVal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
controller_interfaces__msg__ControllerDebugVal__Sequence__destroy(controller_interfaces__msg__ControllerDebugVal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    controller_interfaces__msg__ControllerDebugVal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
controller_interfaces__msg__ControllerDebugVal__Sequence__are_equal(const controller_interfaces__msg__ControllerDebugVal__Sequence * lhs, const controller_interfaces__msg__ControllerDebugVal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!controller_interfaces__msg__ControllerDebugVal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
controller_interfaces__msg__ControllerDebugVal__Sequence__copy(
  const controller_interfaces__msg__ControllerDebugVal__Sequence * input,
  controller_interfaces__msg__ControllerDebugVal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(controller_interfaces__msg__ControllerDebugVal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    controller_interfaces__msg__ControllerDebugVal * data =
      (controller_interfaces__msg__ControllerDebugVal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!controller_interfaces__msg__ControllerDebugVal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          controller_interfaces__msg__ControllerDebugVal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!controller_interfaces__msg__ControllerDebugVal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

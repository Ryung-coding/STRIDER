// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from allocator_interfaces:msg/AllocatorDebugVal.idl
// generated code does not contain a copyright notice
#include "allocator_interfaces/msg/detail/allocator_debug_val__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "allocator_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "allocator_interfaces/msg/detail/allocator_debug_val__struct.h"
#include "allocator_interfaces/msg/detail/allocator_debug_val__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _AllocatorDebugVal__ros_msg_type = allocator_interfaces__msg__AllocatorDebugVal;

static bool _AllocatorDebugVal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AllocatorDebugVal__ros_msg_type * ros_message = static_cast<const _AllocatorDebugVal__ros_msg_type *>(untyped_ros_message);
  // Field name: pwm
  {
    size_t size = 4;
    auto array_ptr = ros_message->pwm;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: a1_des
  {
    size_t size = 5;
    auto array_ptr = ros_message->a1_des;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: a2_des
  {
    size_t size = 5;
    auto array_ptr = ros_message->a2_des;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: a3_des
  {
    size_t size = 5;
    auto array_ptr = ros_message->a3_des;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: a4_des
  {
    size_t size = 5;
    auto array_ptr = ros_message->a4_des;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: loop_rate
  {
    cdr << ros_message->loop_rate;
  }

  return true;
}

static bool _AllocatorDebugVal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AllocatorDebugVal__ros_msg_type * ros_message = static_cast<_AllocatorDebugVal__ros_msg_type *>(untyped_ros_message);
  // Field name: pwm
  {
    size_t size = 4;
    auto array_ptr = ros_message->pwm;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: a1_des
  {
    size_t size = 5;
    auto array_ptr = ros_message->a1_des;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: a2_des
  {
    size_t size = 5;
    auto array_ptr = ros_message->a2_des;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: a3_des
  {
    size_t size = 5;
    auto array_ptr = ros_message->a3_des;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: a4_des
  {
    size_t size = 5;
    auto array_ptr = ros_message->a4_des;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: loop_rate
  {
    cdr >> ros_message->loop_rate;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_allocator_interfaces
size_t get_serialized_size_allocator_interfaces__msg__AllocatorDebugVal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AllocatorDebugVal__ros_msg_type * ros_message = static_cast<const _AllocatorDebugVal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pwm
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->pwm;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a1_des
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->a1_des;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a2_des
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->a2_des;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a3_des
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->a3_des;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a4_des
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->a4_des;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name loop_rate
  {
    size_t item_size = sizeof(ros_message->loop_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AllocatorDebugVal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_allocator_interfaces__msg__AllocatorDebugVal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_allocator_interfaces
size_t max_serialized_size_allocator_interfaces__msg__AllocatorDebugVal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: pwm
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a1_des
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a2_des
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a3_des
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a4_des
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: loop_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = allocator_interfaces__msg__AllocatorDebugVal;
    is_plain =
      (
      offsetof(DataType, loop_rate) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AllocatorDebugVal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_allocator_interfaces__msg__AllocatorDebugVal(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AllocatorDebugVal = {
  "allocator_interfaces::msg",
  "AllocatorDebugVal",
  _AllocatorDebugVal__cdr_serialize,
  _AllocatorDebugVal__cdr_deserialize,
  _AllocatorDebugVal__get_serialized_size,
  _AllocatorDebugVal__max_serialized_size
};

static rosidl_message_type_support_t _AllocatorDebugVal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AllocatorDebugVal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, allocator_interfaces, msg, AllocatorDebugVal)() {
  return &_AllocatorDebugVal__type_support;
}

#if defined(__cplusplus)
}
#endif

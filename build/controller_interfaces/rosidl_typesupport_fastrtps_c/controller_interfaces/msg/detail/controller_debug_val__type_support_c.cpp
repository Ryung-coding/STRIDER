// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from controller_interfaces:msg/ControllerDebugVal.idl
// generated code does not contain a copyright notice
#include "controller_interfaces/msg/detail/controller_debug_val__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "controller_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "controller_interfaces/msg/detail/controller_debug_val__struct.h"
#include "controller_interfaces/msg/detail/controller_debug_val__functions.h"
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


using _ControllerDebugVal__ros_msg_type = controller_interfaces__msg__ControllerDebugVal;

static bool _ControllerDebugVal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ControllerDebugVal__ros_msg_type * ros_message = static_cast<const _ControllerDebugVal__ros_msg_type *>(untyped_ros_message);
  // Field name: des_pos
  {
    size_t size = 4;
    auto array_ptr = ros_message->des_pos;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pid_mx
  {
    size_t size = 3;
    auto array_ptr = ros_message->pid_mx;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pid_my
  {
    size_t size = 3;
    auto array_ptr = ros_message->pid_my;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pid_mz
  {
    size_t size = 3;
    auto array_ptr = ros_message->pid_mz;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pid_f
  {
    size_t size = 3;
    auto array_ptr = ros_message->pid_f;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: imu_roll
  {
    size_t size = 3;
    auto array_ptr = ros_message->imu_roll;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: imu_pitch
  {
    size_t size = 3;
    auto array_ptr = ros_message->imu_pitch;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: imu_yaw
  {
    size_t size = 3;
    auto array_ptr = ros_message->imu_yaw;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: opti_x
  {
    size_t size = 3;
    auto array_ptr = ros_message->opti_x;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: opti_y
  {
    size_t size = 3;
    auto array_ptr = ros_message->opti_y;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: opti_z
  {
    size_t size = 3;
    auto array_ptr = ros_message->opti_z;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: a1_mea
  {
    size_t size = 5;
    auto array_ptr = ros_message->a1_mea;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: a2_mea
  {
    size_t size = 5;
    auto array_ptr = ros_message->a2_mea;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: a3_mea
  {
    size_t size = 5;
    auto array_ptr = ros_message->a3_mea;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: a4_mea
  {
    size_t size = 5;
    auto array_ptr = ros_message->a4_mea;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _ControllerDebugVal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ControllerDebugVal__ros_msg_type * ros_message = static_cast<_ControllerDebugVal__ros_msg_type *>(untyped_ros_message);
  // Field name: des_pos
  {
    size_t size = 4;
    auto array_ptr = ros_message->des_pos;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pid_mx
  {
    size_t size = 3;
    auto array_ptr = ros_message->pid_mx;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pid_my
  {
    size_t size = 3;
    auto array_ptr = ros_message->pid_my;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pid_mz
  {
    size_t size = 3;
    auto array_ptr = ros_message->pid_mz;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pid_f
  {
    size_t size = 3;
    auto array_ptr = ros_message->pid_f;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: imu_roll
  {
    size_t size = 3;
    auto array_ptr = ros_message->imu_roll;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: imu_pitch
  {
    size_t size = 3;
    auto array_ptr = ros_message->imu_pitch;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: imu_yaw
  {
    size_t size = 3;
    auto array_ptr = ros_message->imu_yaw;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: opti_x
  {
    size_t size = 3;
    auto array_ptr = ros_message->opti_x;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: opti_y
  {
    size_t size = 3;
    auto array_ptr = ros_message->opti_y;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: opti_z
  {
    size_t size = 3;
    auto array_ptr = ros_message->opti_z;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: a1_mea
  {
    size_t size = 5;
    auto array_ptr = ros_message->a1_mea;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: a2_mea
  {
    size_t size = 5;
    auto array_ptr = ros_message->a2_mea;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: a3_mea
  {
    size_t size = 5;
    auto array_ptr = ros_message->a3_mea;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: a4_mea
  {
    size_t size = 5;
    auto array_ptr = ros_message->a4_mea;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_interfaces
size_t get_serialized_size_controller_interfaces__msg__ControllerDebugVal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControllerDebugVal__ros_msg_type * ros_message = static_cast<const _ControllerDebugVal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name des_pos
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->des_pos;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pid_mx
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->pid_mx;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pid_my
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->pid_my;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pid_mz
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->pid_mz;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pid_f
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->pid_f;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_roll
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->imu_roll;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_pitch
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->imu_pitch;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_yaw
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->imu_yaw;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name opti_x
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->opti_x;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name opti_y
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->opti_y;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name opti_z
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->opti_z;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a1_mea
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->a1_mea;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a2_mea
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->a2_mea;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a3_mea
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->a3_mea;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a4_mea
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->a4_mea;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ControllerDebugVal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_controller_interfaces__msg__ControllerDebugVal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_interfaces
size_t max_serialized_size_controller_interfaces__msg__ControllerDebugVal(
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

  // member: des_pos
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pid_mx
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pid_my
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pid_mz
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pid_f
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: imu_roll
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: imu_pitch
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: imu_yaw
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: opti_x
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: opti_y
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: opti_z
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a1_mea
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a2_mea
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a3_mea
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a4_mea
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = controller_interfaces__msg__ControllerDebugVal;
    is_plain =
      (
      offsetof(DataType, a4_mea) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ControllerDebugVal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_controller_interfaces__msg__ControllerDebugVal(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ControllerDebugVal = {
  "controller_interfaces::msg",
  "ControllerDebugVal",
  _ControllerDebugVal__cdr_serialize,
  _ControllerDebugVal__cdr_deserialize,
  _ControllerDebugVal__get_serialized_size,
  _ControllerDebugVal__max_serialized_size
};

static rosidl_message_type_support_t _ControllerDebugVal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControllerDebugVal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, controller_interfaces, msg, ControllerDebugVal)() {
  return &_ControllerDebugVal__type_support;
}

#if defined(__cplusplus)
}
#endif

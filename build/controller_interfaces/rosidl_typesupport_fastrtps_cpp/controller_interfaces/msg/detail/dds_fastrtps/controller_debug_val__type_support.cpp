// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from controller_interfaces:msg/ControllerDebugVal.idl
// generated code does not contain a copyright notice
#include "controller_interfaces/msg/detail/controller_debug_val__rosidl_typesupport_fastrtps_cpp.hpp"
#include "controller_interfaces/msg/detail/controller_debug_val__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace controller_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_controller_interfaces
cdr_serialize(
  const controller_interfaces::msg::ControllerDebugVal & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: des_pos
  {
    cdr << ros_message.des_pos;
  }
  // Member: pid_mx
  {
    cdr << ros_message.pid_mx;
  }
  // Member: pid_my
  {
    cdr << ros_message.pid_my;
  }
  // Member: pid_mz
  {
    cdr << ros_message.pid_mz;
  }
  // Member: pid_f
  {
    cdr << ros_message.pid_f;
  }
  // Member: imu_roll
  {
    cdr << ros_message.imu_roll;
  }
  // Member: imu_pitch
  {
    cdr << ros_message.imu_pitch;
  }
  // Member: imu_yaw
  {
    cdr << ros_message.imu_yaw;
  }
  // Member: opti_x
  {
    cdr << ros_message.opti_x;
  }
  // Member: opti_y
  {
    cdr << ros_message.opti_y;
  }
  // Member: opti_z
  {
    cdr << ros_message.opti_z;
  }
  // Member: a1_mea
  {
    cdr << ros_message.a1_mea;
  }
  // Member: a2_mea
  {
    cdr << ros_message.a2_mea;
  }
  // Member: a3_mea
  {
    cdr << ros_message.a3_mea;
  }
  // Member: a4_mea
  {
    cdr << ros_message.a4_mea;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_controller_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  controller_interfaces::msg::ControllerDebugVal & ros_message)
{
  // Member: des_pos
  {
    cdr >> ros_message.des_pos;
  }

  // Member: pid_mx
  {
    cdr >> ros_message.pid_mx;
  }

  // Member: pid_my
  {
    cdr >> ros_message.pid_my;
  }

  // Member: pid_mz
  {
    cdr >> ros_message.pid_mz;
  }

  // Member: pid_f
  {
    cdr >> ros_message.pid_f;
  }

  // Member: imu_roll
  {
    cdr >> ros_message.imu_roll;
  }

  // Member: imu_pitch
  {
    cdr >> ros_message.imu_pitch;
  }

  // Member: imu_yaw
  {
    cdr >> ros_message.imu_yaw;
  }

  // Member: opti_x
  {
    cdr >> ros_message.opti_x;
  }

  // Member: opti_y
  {
    cdr >> ros_message.opti_y;
  }

  // Member: opti_z
  {
    cdr >> ros_message.opti_z;
  }

  // Member: a1_mea
  {
    cdr >> ros_message.a1_mea;
  }

  // Member: a2_mea
  {
    cdr >> ros_message.a2_mea;
  }

  // Member: a3_mea
  {
    cdr >> ros_message.a3_mea;
  }

  // Member: a4_mea
  {
    cdr >> ros_message.a4_mea;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_controller_interfaces
get_serialized_size(
  const controller_interfaces::msg::ControllerDebugVal & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: des_pos
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.des_pos[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pid_mx
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.pid_mx[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pid_my
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.pid_my[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pid_mz
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.pid_mz[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pid_f
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.pid_f[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_roll
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.imu_roll[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_pitch
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.imu_pitch[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_yaw
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.imu_yaw[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: opti_x
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.opti_x[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: opti_y
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.opti_y[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: opti_z
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.opti_z[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a1_mea
  {
    size_t array_size = 5;
    size_t item_size = sizeof(ros_message.a1_mea[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a2_mea
  {
    size_t array_size = 5;
    size_t item_size = sizeof(ros_message.a2_mea[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a3_mea
  {
    size_t array_size = 5;
    size_t item_size = sizeof(ros_message.a3_mea[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a4_mea
  {
    size_t array_size = 5;
    size_t item_size = sizeof(ros_message.a4_mea[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_controller_interfaces
max_serialized_size_ControllerDebugVal(
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


  // Member: des_pos
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pid_mx
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pid_my
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pid_mz
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pid_f
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: imu_roll
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: imu_pitch
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: imu_yaw
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: opti_x
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: opti_y
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: opti_z
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: a1_mea
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: a2_mea
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: a3_mea
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: a4_mea
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
    using DataType = controller_interfaces::msg::ControllerDebugVal;
    is_plain =
      (
      offsetof(DataType, a4_mea) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ControllerDebugVal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const controller_interfaces::msg::ControllerDebugVal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ControllerDebugVal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<controller_interfaces::msg::ControllerDebugVal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ControllerDebugVal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const controller_interfaces::msg::ControllerDebugVal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ControllerDebugVal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ControllerDebugVal(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ControllerDebugVal__callbacks = {
  "controller_interfaces::msg",
  "ControllerDebugVal",
  _ControllerDebugVal__cdr_serialize,
  _ControllerDebugVal__cdr_deserialize,
  _ControllerDebugVal__get_serialized_size,
  _ControllerDebugVal__max_serialized_size
};

static rosidl_message_type_support_t _ControllerDebugVal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ControllerDebugVal__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace controller_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_controller_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<controller_interfaces::msg::ControllerDebugVal>()
{
  return &controller_interfaces::msg::typesupport_fastrtps_cpp::_ControllerDebugVal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, controller_interfaces, msg, ControllerDebugVal)() {
  return &controller_interfaces::msg::typesupport_fastrtps_cpp::_ControllerDebugVal__handle;
}

#ifdef __cplusplus
}
#endif

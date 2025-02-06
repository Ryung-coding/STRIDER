// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mocap_interfaces:msg/MocapMeasured.idl
// generated code does not contain a copyright notice
#include "mocap_interfaces/msg/detail/mocap_measured__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mocap_interfaces/msg/detail/mocap_measured__struct.hpp"

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

namespace mocap_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mocap_interfaces
cdr_serialize(
  const mocap_interfaces::msg::MocapMeasured & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pos
  {
    cdr << ros_message.pos;
  }
  // Member: vel
  {
    cdr << ros_message.vel;
  }
  // Member: acc
  {
    cdr << ros_message.acc;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mocap_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mocap_interfaces::msg::MocapMeasured & ros_message)
{
  // Member: pos
  {
    cdr >> ros_message.pos;
  }

  // Member: vel
  {
    cdr >> ros_message.vel;
  }

  // Member: acc
  {
    cdr >> ros_message.acc;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mocap_interfaces
get_serialized_size(
  const mocap_interfaces::msg::MocapMeasured & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pos
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.pos[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.vel[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.acc[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mocap_interfaces
max_serialized_size_MocapMeasured(
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


  // Member: pos
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vel
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acc
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mocap_interfaces::msg::MocapMeasured;
    is_plain =
      (
      offsetof(DataType, acc) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MocapMeasured__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mocap_interfaces::msg::MocapMeasured *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MocapMeasured__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mocap_interfaces::msg::MocapMeasured *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MocapMeasured__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mocap_interfaces::msg::MocapMeasured *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MocapMeasured__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MocapMeasured(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MocapMeasured__callbacks = {
  "mocap_interfaces::msg",
  "MocapMeasured",
  _MocapMeasured__cdr_serialize,
  _MocapMeasured__cdr_deserialize,
  _MocapMeasured__get_serialized_size,
  _MocapMeasured__max_serialized_size
};

static rosidl_message_type_support_t _MocapMeasured__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MocapMeasured__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mocap_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mocap_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<mocap_interfaces::msg::MocapMeasured>()
{
  return &mocap_interfaces::msg::typesupport_fastrtps_cpp::_MocapMeasured__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mocap_interfaces, msg, MocapMeasured)() {
  return &mocap_interfaces::msg::typesupport_fastrtps_cpp::_MocapMeasured__handle;
}

#ifdef __cplusplus
}
#endif

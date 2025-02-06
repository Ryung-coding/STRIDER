// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sbus_interfaces:msg/KillCmd.idl
// generated code does not contain a copyright notice
#include "sbus_interfaces/msg/detail/kill_cmd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sbus_interfaces/msg/detail/kill_cmd__struct.hpp"

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

namespace sbus_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbus_interfaces
cdr_serialize(
  const sbus_interfaces::msg::KillCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: kill_activated
  cdr << (ros_message.kill_activated ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbus_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sbus_interfaces::msg::KillCmd & ros_message)
{
  // Member: kill_activated
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.kill_activated = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbus_interfaces
get_serialized_size(
  const sbus_interfaces::msg::KillCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: kill_activated
  {
    size_t item_size = sizeof(ros_message.kill_activated);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbus_interfaces
max_serialized_size_KillCmd(
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


  // Member: kill_activated
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sbus_interfaces::msg::KillCmd;
    is_plain =
      (
      offsetof(DataType, kill_activated) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _KillCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sbus_interfaces::msg::KillCmd *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _KillCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sbus_interfaces::msg::KillCmd *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _KillCmd__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sbus_interfaces::msg::KillCmd *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _KillCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_KillCmd(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _KillCmd__callbacks = {
  "sbus_interfaces::msg",
  "KillCmd",
  _KillCmd__cdr_serialize,
  _KillCmd__cdr_deserialize,
  _KillCmd__get_serialized_size,
  _KillCmd__max_serialized_size
};

static rosidl_message_type_support_t _KillCmd__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_KillCmd__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sbus_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sbus_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<sbus_interfaces::msg::KillCmd>()
{
  return &sbus_interfaces::msg::typesupport_fastrtps_cpp::_KillCmd__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sbus_interfaces, msg, KillCmd)() {
  return &sbus_interfaces::msg::typesupport_fastrtps_cpp::_KillCmd__handle;
}

#ifdef __cplusplus
}
#endif

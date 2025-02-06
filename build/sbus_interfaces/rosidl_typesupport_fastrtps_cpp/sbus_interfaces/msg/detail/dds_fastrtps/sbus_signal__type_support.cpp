// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sbus_interfaces:msg/SbusSignal.idl
// generated code does not contain a copyright notice
#include "sbus_interfaces/msg/detail/sbus_signal__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sbus_interfaces/msg/detail/sbus_signal__struct.hpp"

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
  const sbus_interfaces::msg::SbusSignal & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ch
  {
    cdr << ros_message.ch;
  }
  // Member: sbus_signal
  cdr << ros_message.sbus_signal;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbus_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sbus_interfaces::msg::SbusSignal & ros_message)
{
  // Member: ch
  {
    cdr >> ros_message.ch;
  }

  // Member: sbus_signal
  cdr >> ros_message.sbus_signal;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbus_interfaces
get_serialized_size(
  const sbus_interfaces::msg::SbusSignal & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ch
  {
    size_t array_size = 18;
    size_t item_size = sizeof(ros_message.ch[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sbus_signal
  {
    size_t item_size = sizeof(ros_message.sbus_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbus_interfaces
max_serialized_size_SbusSignal(
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


  // Member: ch
  {
    size_t array_size = 18;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: sbus_signal
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
    using DataType = sbus_interfaces::msg::SbusSignal;
    is_plain =
      (
      offsetof(DataType, sbus_signal) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SbusSignal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sbus_interfaces::msg::SbusSignal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SbusSignal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sbus_interfaces::msg::SbusSignal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SbusSignal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sbus_interfaces::msg::SbusSignal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SbusSignal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SbusSignal(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SbusSignal__callbacks = {
  "sbus_interfaces::msg",
  "SbusSignal",
  _SbusSignal__cdr_serialize,
  _SbusSignal__cdr_deserialize,
  _SbusSignal__get_serialized_size,
  _SbusSignal__max_serialized_size
};

static rosidl_message_type_support_t _SbusSignal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SbusSignal__callbacks,
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
get_message_type_support_handle<sbus_interfaces::msg::SbusSignal>()
{
  return &sbus_interfaces::msg::typesupport_fastrtps_cpp::_SbusSignal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sbus_interfaces, msg, SbusSignal)() {
  return &sbus_interfaces::msg::typesupport_fastrtps_cpp::_SbusSignal__handle;
}

#ifdef __cplusplus
}
#endif

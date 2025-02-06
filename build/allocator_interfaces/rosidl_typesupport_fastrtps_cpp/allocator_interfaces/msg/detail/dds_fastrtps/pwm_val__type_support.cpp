// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from allocator_interfaces:msg/PwmVal.idl
// generated code does not contain a copyright notice
#include "allocator_interfaces/msg/detail/pwm_val__rosidl_typesupport_fastrtps_cpp.hpp"
#include "allocator_interfaces/msg/detail/pwm_val__struct.hpp"

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

namespace allocator_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_allocator_interfaces
cdr_serialize(
  const allocator_interfaces::msg::PwmVal & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: f1
  cdr << ros_message.f1;
  // Member: f2
  cdr << ros_message.f2;
  // Member: f3
  cdr << ros_message.f3;
  // Member: f4
  cdr << ros_message.f4;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_allocator_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  allocator_interfaces::msg::PwmVal & ros_message)
{
  // Member: f1
  cdr >> ros_message.f1;

  // Member: f2
  cdr >> ros_message.f2;

  // Member: f3
  cdr >> ros_message.f3;

  // Member: f4
  cdr >> ros_message.f4;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_allocator_interfaces
get_serialized_size(
  const allocator_interfaces::msg::PwmVal & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: f1
  {
    size_t item_size = sizeof(ros_message.f1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f2
  {
    size_t item_size = sizeof(ros_message.f2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f3
  {
    size_t item_size = sizeof(ros_message.f3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f4
  {
    size_t item_size = sizeof(ros_message.f4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_allocator_interfaces
max_serialized_size_PwmVal(
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


  // Member: f1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: f2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: f3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: f4
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
    using DataType = allocator_interfaces::msg::PwmVal;
    is_plain =
      (
      offsetof(DataType, f4) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PwmVal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const allocator_interfaces::msg::PwmVal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PwmVal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<allocator_interfaces::msg::PwmVal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PwmVal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const allocator_interfaces::msg::PwmVal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PwmVal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PwmVal(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PwmVal__callbacks = {
  "allocator_interfaces::msg",
  "PwmVal",
  _PwmVal__cdr_serialize,
  _PwmVal__cdr_deserialize,
  _PwmVal__get_serialized_size,
  _PwmVal__max_serialized_size
};

static rosidl_message_type_support_t _PwmVal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PwmVal__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace allocator_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_allocator_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<allocator_interfaces::msg::PwmVal>()
{
  return &allocator_interfaces::msg::typesupport_fastrtps_cpp::_PwmVal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, allocator_interfaces, msg, PwmVal)() {
  return &allocator_interfaces::msg::typesupport_fastrtps_cpp::_PwmVal__handle;
}

#ifdef __cplusplus
}
#endif

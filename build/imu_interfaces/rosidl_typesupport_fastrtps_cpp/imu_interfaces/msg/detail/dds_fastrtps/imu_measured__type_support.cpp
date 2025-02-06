// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from imu_interfaces:msg/ImuMeasured.idl
// generated code does not contain a copyright notice
#include "imu_interfaces/msg/detail/imu_measured__rosidl_typesupport_fastrtps_cpp.hpp"
#include "imu_interfaces/msg/detail/imu_measured__struct.hpp"

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

namespace imu_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_imu_interfaces
cdr_serialize(
  const imu_interfaces::msg::ImuMeasured & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: q
  {
    cdr << ros_message.q;
  }
  // Member: qdot
  {
    cdr << ros_message.qdot;
  }
  // Member: qddot
  {
    cdr << ros_message.qddot;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_imu_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  imu_interfaces::msg::ImuMeasured & ros_message)
{
  // Member: q
  {
    cdr >> ros_message.q;
  }

  // Member: qdot
  {
    cdr >> ros_message.qdot;
  }

  // Member: qddot
  {
    cdr >> ros_message.qddot;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_imu_interfaces
get_serialized_size(
  const imu_interfaces::msg::ImuMeasured & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: q
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.q[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: qdot
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.qdot[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: qddot
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.qddot[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_imu_interfaces
max_serialized_size_ImuMeasured(
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


  // Member: q
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: qdot
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: qddot
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
    using DataType = imu_interfaces::msg::ImuMeasured;
    is_plain =
      (
      offsetof(DataType, qddot) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ImuMeasured__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const imu_interfaces::msg::ImuMeasured *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ImuMeasured__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<imu_interfaces::msg::ImuMeasured *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ImuMeasured__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const imu_interfaces::msg::ImuMeasured *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ImuMeasured__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ImuMeasured(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ImuMeasured__callbacks = {
  "imu_interfaces::msg",
  "ImuMeasured",
  _ImuMeasured__cdr_serialize,
  _ImuMeasured__cdr_deserialize,
  _ImuMeasured__get_serialized_size,
  _ImuMeasured__max_serialized_size
};

static rosidl_message_type_support_t _ImuMeasured__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ImuMeasured__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace imu_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_imu_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<imu_interfaces::msg::ImuMeasured>()
{
  return &imu_interfaces::msg::typesupport_fastrtps_cpp::_ImuMeasured__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, imu_interfaces, msg, ImuMeasured)() {
  return &imu_interfaces::msg::typesupport_fastrtps_cpp::_ImuMeasured__handle;
}

#ifdef __cplusplus
}
#endif

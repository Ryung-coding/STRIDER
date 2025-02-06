// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from imu_interfaces:msg/ImuMeasured.idl
// generated code does not contain a copyright notice

#ifndef IMU_INTERFACES__MSG__DETAIL__IMU_MEASURED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define IMU_INTERFACES__MSG__DETAIL__IMU_MEASURED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "imu_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "imu_interfaces/msg/detail/imu_measured__struct.hpp"

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

#include "fastcdr/Cdr.h"

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
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_imu_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  imu_interfaces::msg::ImuMeasured & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_imu_interfaces
get_serialized_size(
  const imu_interfaces::msg::ImuMeasured & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_imu_interfaces
max_serialized_size_ImuMeasured(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace imu_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_imu_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, imu_interfaces, msg, ImuMeasured)();

#ifdef __cplusplus
}
#endif

#endif  // IMU_INTERFACES__MSG__DETAIL__IMU_MEASURED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

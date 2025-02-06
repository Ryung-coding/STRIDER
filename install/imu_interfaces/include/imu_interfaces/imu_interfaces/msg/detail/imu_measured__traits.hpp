// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from imu_interfaces:msg/ImuMeasured.idl
// generated code does not contain a copyright notice

#ifndef IMU_INTERFACES__MSG__DETAIL__IMU_MEASURED__TRAITS_HPP_
#define IMU_INTERFACES__MSG__DETAIL__IMU_MEASURED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "imu_interfaces/msg/detail/imu_measured__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace imu_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImuMeasured & msg,
  std::ostream & out)
{
  out << "{";
  // member: q
  {
    if (msg.q.size() == 0) {
      out << "q: []";
    } else {
      out << "q: [";
      size_t pending_items = msg.q.size();
      for (auto item : msg.q) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: qdot
  {
    if (msg.qdot.size() == 0) {
      out << "qdot: []";
    } else {
      out << "qdot: [";
      size_t pending_items = msg.qdot.size();
      for (auto item : msg.qdot) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: qddot
  {
    if (msg.qddot.size() == 0) {
      out << "qddot: []";
    } else {
      out << "qddot: [";
      size_t pending_items = msg.qddot.size();
      for (auto item : msg.qddot) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImuMeasured & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: q
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.q.size() == 0) {
      out << "q: []\n";
    } else {
      out << "q:\n";
      for (auto item : msg.q) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: qdot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.qdot.size() == 0) {
      out << "qdot: []\n";
    } else {
      out << "qdot:\n";
      for (auto item : msg.qdot) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: qddot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.qddot.size() == 0) {
      out << "qddot: []\n";
    } else {
      out << "qddot:\n";
      for (auto item : msg.qddot) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImuMeasured & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace imu_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use imu_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const imu_interfaces::msg::ImuMeasured & msg,
  std::ostream & out, size_t indentation = 0)
{
  imu_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use imu_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const imu_interfaces::msg::ImuMeasured & msg)
{
  return imu_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<imu_interfaces::msg::ImuMeasured>()
{
  return "imu_interfaces::msg::ImuMeasured";
}

template<>
inline const char * name<imu_interfaces::msg::ImuMeasured>()
{
  return "imu_interfaces/msg/ImuMeasured";
}

template<>
struct has_fixed_size<imu_interfaces::msg::ImuMeasured>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<imu_interfaces::msg::ImuMeasured>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<imu_interfaces::msg::ImuMeasured>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IMU_INTERFACES__MSG__DETAIL__IMU_MEASURED__TRAITS_HPP_

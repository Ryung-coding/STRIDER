// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mocap_interfaces:msg/MocapMeasured.idl
// generated code does not contain a copyright notice

#ifndef MOCAP_INTERFACES__MSG__DETAIL__MOCAP_MEASURED__TRAITS_HPP_
#define MOCAP_INTERFACES__MSG__DETAIL__MOCAP_MEASURED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mocap_interfaces/msg/detail/mocap_measured__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mocap_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MocapMeasured & msg,
  std::ostream & out)
{
  out << "{";
  // member: pos
  {
    if (msg.pos.size() == 0) {
      out << "pos: []";
    } else {
      out << "pos: [";
      size_t pending_items = msg.pos.size();
      for (auto item : msg.pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vel
  {
    if (msg.vel.size() == 0) {
      out << "vel: []";
    } else {
      out << "vel: [";
      size_t pending_items = msg.vel.size();
      for (auto item : msg.vel) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acc
  {
    if (msg.acc.size() == 0) {
      out << "acc: []";
    } else {
      out << "acc: [";
      size_t pending_items = msg.acc.size();
      for (auto item : msg.acc) {
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
  const MocapMeasured & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pos.size() == 0) {
      out << "pos: []\n";
    } else {
      out << "pos:\n";
      for (auto item : msg.pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vel.size() == 0) {
      out << "vel: []\n";
    } else {
      out << "vel:\n";
      for (auto item : msg.vel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acc.size() == 0) {
      out << "acc: []\n";
    } else {
      out << "acc:\n";
      for (auto item : msg.acc) {
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

inline std::string to_yaml(const MocapMeasured & msg, bool use_flow_style = false)
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

}  // namespace mocap_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mocap_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mocap_interfaces::msg::MocapMeasured & msg,
  std::ostream & out, size_t indentation = 0)
{
  mocap_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mocap_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mocap_interfaces::msg::MocapMeasured & msg)
{
  return mocap_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mocap_interfaces::msg::MocapMeasured>()
{
  return "mocap_interfaces::msg::MocapMeasured";
}

template<>
inline const char * name<mocap_interfaces::msg::MocapMeasured>()
{
  return "mocap_interfaces/msg/MocapMeasured";
}

template<>
struct has_fixed_size<mocap_interfaces::msg::MocapMeasured>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mocap_interfaces::msg::MocapMeasured>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mocap_interfaces::msg::MocapMeasured>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOCAP_INTERFACES__MSG__DETAIL__MOCAP_MEASURED__TRAITS_HPP_

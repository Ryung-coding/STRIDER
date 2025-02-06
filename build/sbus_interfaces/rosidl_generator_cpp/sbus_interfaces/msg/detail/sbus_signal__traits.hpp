// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sbus_interfaces:msg/SbusSignal.idl
// generated code does not contain a copyright notice

#ifndef SBUS_INTERFACES__MSG__DETAIL__SBUS_SIGNAL__TRAITS_HPP_
#define SBUS_INTERFACES__MSG__DETAIL__SBUS_SIGNAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sbus_interfaces/msg/detail/sbus_signal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sbus_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SbusSignal & msg,
  std::ostream & out)
{
  out << "{";
  // member: ch
  {
    if (msg.ch.size() == 0) {
      out << "ch: []";
    } else {
      out << "ch: [";
      size_t pending_items = msg.ch.size();
      for (auto item : msg.ch) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sbus_signal
  {
    out << "sbus_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.sbus_signal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SbusSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ch.size() == 0) {
      out << "ch: []\n";
    } else {
      out << "ch:\n";
      for (auto item : msg.ch) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: sbus_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sbus_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.sbus_signal, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SbusSignal & msg, bool use_flow_style = false)
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

}  // namespace sbus_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sbus_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sbus_interfaces::msg::SbusSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  sbus_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sbus_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sbus_interfaces::msg::SbusSignal & msg)
{
  return sbus_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sbus_interfaces::msg::SbusSignal>()
{
  return "sbus_interfaces::msg::SbusSignal";
}

template<>
inline const char * name<sbus_interfaces::msg::SbusSignal>()
{
  return "sbus_interfaces/msg/SbusSignal";
}

template<>
struct has_fixed_size<sbus_interfaces::msg::SbusSignal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sbus_interfaces::msg::SbusSignal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sbus_interfaces::msg::SbusSignal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SBUS_INTERFACES__MSG__DETAIL__SBUS_SIGNAL__TRAITS_HPP_

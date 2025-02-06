// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_interfaces:msg/ControllerOutput.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_OUTPUT__TRAITS_HPP_
#define CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_OUTPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "controller_interfaces/msg/detail/controller_output__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace controller_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControllerOutput & msg,
  std::ostream & out)
{
  out << "{";
  // member: force
  {
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
    out << ", ";
  }

  // member: moment
  {
    if (msg.moment.size() == 0) {
      out << "moment: []";
    } else {
      out << "moment: [";
      size_t pending_items = msg.moment.size();
      for (auto item : msg.moment) {
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
  const ControllerOutput & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
    out << "\n";
  }

  // member: moment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.moment.size() == 0) {
      out << "moment: []\n";
    } else {
      out << "moment:\n";
      for (auto item : msg.moment) {
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

inline std::string to_yaml(const ControllerOutput & msg, bool use_flow_style = false)
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

}  // namespace controller_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use controller_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const controller_interfaces::msg::ControllerOutput & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const controller_interfaces::msg::ControllerOutput & msg)
{
  return controller_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<controller_interfaces::msg::ControllerOutput>()
{
  return "controller_interfaces::msg::ControllerOutput";
}

template<>
inline const char * name<controller_interfaces::msg::ControllerOutput>()
{
  return "controller_interfaces/msg/ControllerOutput";
}

template<>
struct has_fixed_size<controller_interfaces::msg::ControllerOutput>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controller_interfaces::msg::ControllerOutput>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controller_interfaces::msg::ControllerOutput>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_OUTPUT__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from watchdog_interfaces:msg/NodeState.idl
// generated code does not contain a copyright notice

#ifndef WATCHDOG_INTERFACES__MSG__DETAIL__NODE_STATE__TRAITS_HPP_
#define WATCHDOG_INTERFACES__MSG__DETAIL__NODE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "watchdog_interfaces/msg/detail/node_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace watchdog_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeState & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NodeState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeState & msg, bool use_flow_style = false)
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

}  // namespace watchdog_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use watchdog_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const watchdog_interfaces::msg::NodeState & msg,
  std::ostream & out, size_t indentation = 0)
{
  watchdog_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use watchdog_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const watchdog_interfaces::msg::NodeState & msg)
{
  return watchdog_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<watchdog_interfaces::msg::NodeState>()
{
  return "watchdog_interfaces::msg::NodeState";
}

template<>
inline const char * name<watchdog_interfaces::msg::NodeState>()
{
  return "watchdog_interfaces/msg/NodeState";
}

template<>
struct has_fixed_size<watchdog_interfaces::msg::NodeState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<watchdog_interfaces::msg::NodeState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<watchdog_interfaces::msg::NodeState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WATCHDOG_INTERFACES__MSG__DETAIL__NODE_STATE__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from allocator_interfaces:msg/PwmVal.idl
// generated code does not contain a copyright notice

#ifndef ALLOCATOR_INTERFACES__MSG__DETAIL__PWM_VAL__TRAITS_HPP_
#define ALLOCATOR_INTERFACES__MSG__DETAIL__PWM_VAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "allocator_interfaces/msg/detail/pwm_val__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace allocator_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PwmVal & msg,
  std::ostream & out)
{
  out << "{";
  // member: f1
  {
    out << "f1: ";
    rosidl_generator_traits::value_to_yaml(msg.f1, out);
    out << ", ";
  }

  // member: f2
  {
    out << "f2: ";
    rosidl_generator_traits::value_to_yaml(msg.f2, out);
    out << ", ";
  }

  // member: f3
  {
    out << "f3: ";
    rosidl_generator_traits::value_to_yaml(msg.f3, out);
    out << ", ";
  }

  // member: f4
  {
    out << "f4: ";
    rosidl_generator_traits::value_to_yaml(msg.f4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PwmVal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: f1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f1: ";
    rosidl_generator_traits::value_to_yaml(msg.f1, out);
    out << "\n";
  }

  // member: f2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f2: ";
    rosidl_generator_traits::value_to_yaml(msg.f2, out);
    out << "\n";
  }

  // member: f3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f3: ";
    rosidl_generator_traits::value_to_yaml(msg.f3, out);
    out << "\n";
  }

  // member: f4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f4: ";
    rosidl_generator_traits::value_to_yaml(msg.f4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PwmVal & msg, bool use_flow_style = false)
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

}  // namespace allocator_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use allocator_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const allocator_interfaces::msg::PwmVal & msg,
  std::ostream & out, size_t indentation = 0)
{
  allocator_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use allocator_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const allocator_interfaces::msg::PwmVal & msg)
{
  return allocator_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<allocator_interfaces::msg::PwmVal>()
{
  return "allocator_interfaces::msg::PwmVal";
}

template<>
inline const char * name<allocator_interfaces::msg::PwmVal>()
{
  return "allocator_interfaces/msg/PwmVal";
}

template<>
struct has_fixed_size<allocator_interfaces::msg::PwmVal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<allocator_interfaces::msg::PwmVal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<allocator_interfaces::msg::PwmVal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ALLOCATOR_INTERFACES__MSG__DETAIL__PWM_VAL__TRAITS_HPP_

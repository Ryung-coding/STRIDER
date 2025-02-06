// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from allocator_interfaces:msg/JointVal.idl
// generated code does not contain a copyright notice

#ifndef ALLOCATOR_INTERFACES__MSG__DETAIL__JOINT_VAL__TRAITS_HPP_
#define ALLOCATOR_INTERFACES__MSG__DETAIL__JOINT_VAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "allocator_interfaces/msg/detail/joint_val__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace allocator_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointVal & msg,
  std::ostream & out)
{
  out << "{";
  // member: a1_q
  {
    if (msg.a1_q.size() == 0) {
      out << "a1_q: []";
    } else {
      out << "a1_q: [";
      size_t pending_items = msg.a1_q.size();
      for (auto item : msg.a1_q) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: a2_q
  {
    if (msg.a2_q.size() == 0) {
      out << "a2_q: []";
    } else {
      out << "a2_q: [";
      size_t pending_items = msg.a2_q.size();
      for (auto item : msg.a2_q) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: a3_q
  {
    if (msg.a3_q.size() == 0) {
      out << "a3_q: []";
    } else {
      out << "a3_q: [";
      size_t pending_items = msg.a3_q.size();
      for (auto item : msg.a3_q) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: a4_q
  {
    if (msg.a4_q.size() == 0) {
      out << "a4_q: []";
    } else {
      out << "a4_q: [";
      size_t pending_items = msg.a4_q.size();
      for (auto item : msg.a4_q) {
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
  const JointVal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a1_q
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.a1_q.size() == 0) {
      out << "a1_q: []\n";
    } else {
      out << "a1_q:\n";
      for (auto item : msg.a1_q) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: a2_q
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.a2_q.size() == 0) {
      out << "a2_q: []\n";
    } else {
      out << "a2_q:\n";
      for (auto item : msg.a2_q) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: a3_q
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.a3_q.size() == 0) {
      out << "a3_q: []\n";
    } else {
      out << "a3_q:\n";
      for (auto item : msg.a3_q) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: a4_q
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.a4_q.size() == 0) {
      out << "a4_q: []\n";
    } else {
      out << "a4_q:\n";
      for (auto item : msg.a4_q) {
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

inline std::string to_yaml(const JointVal & msg, bool use_flow_style = false)
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
  const allocator_interfaces::msg::JointVal & msg,
  std::ostream & out, size_t indentation = 0)
{
  allocator_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use allocator_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const allocator_interfaces::msg::JointVal & msg)
{
  return allocator_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<allocator_interfaces::msg::JointVal>()
{
  return "allocator_interfaces::msg::JointVal";
}

template<>
inline const char * name<allocator_interfaces::msg::JointVal>()
{
  return "allocator_interfaces/msg/JointVal";
}

template<>
struct has_fixed_size<allocator_interfaces::msg::JointVal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<allocator_interfaces::msg::JointVal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<allocator_interfaces::msg::JointVal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ALLOCATOR_INTERFACES__MSG__DETAIL__JOINT_VAL__TRAITS_HPP_

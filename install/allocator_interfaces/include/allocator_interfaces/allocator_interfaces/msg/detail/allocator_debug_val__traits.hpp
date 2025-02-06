// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from allocator_interfaces:msg/AllocatorDebugVal.idl
// generated code does not contain a copyright notice

#ifndef ALLOCATOR_INTERFACES__MSG__DETAIL__ALLOCATOR_DEBUG_VAL__TRAITS_HPP_
#define ALLOCATOR_INTERFACES__MSG__DETAIL__ALLOCATOR_DEBUG_VAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "allocator_interfaces/msg/detail/allocator_debug_val__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace allocator_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const AllocatorDebugVal & msg,
  std::ostream & out)
{
  out << "{";
  // member: pwm
  {
    if (msg.pwm.size() == 0) {
      out << "pwm: []";
    } else {
      out << "pwm: [";
      size_t pending_items = msg.pwm.size();
      for (auto item : msg.pwm) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: a1_des
  {
    if (msg.a1_des.size() == 0) {
      out << "a1_des: []";
    } else {
      out << "a1_des: [";
      size_t pending_items = msg.a1_des.size();
      for (auto item : msg.a1_des) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: a2_des
  {
    if (msg.a2_des.size() == 0) {
      out << "a2_des: []";
    } else {
      out << "a2_des: [";
      size_t pending_items = msg.a2_des.size();
      for (auto item : msg.a2_des) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: a3_des
  {
    if (msg.a3_des.size() == 0) {
      out << "a3_des: []";
    } else {
      out << "a3_des: [";
      size_t pending_items = msg.a3_des.size();
      for (auto item : msg.a3_des) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: a4_des
  {
    if (msg.a4_des.size() == 0) {
      out << "a4_des: []";
    } else {
      out << "a4_des: [";
      size_t pending_items = msg.a4_des.size();
      for (auto item : msg.a4_des) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: loop_rate
  {
    out << "loop_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_rate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AllocatorDebugVal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pwm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pwm.size() == 0) {
      out << "pwm: []\n";
    } else {
      out << "pwm:\n";
      for (auto item : msg.pwm) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: a1_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.a1_des.size() == 0) {
      out << "a1_des: []\n";
    } else {
      out << "a1_des:\n";
      for (auto item : msg.a1_des) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: a2_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.a2_des.size() == 0) {
      out << "a2_des: []\n";
    } else {
      out << "a2_des:\n";
      for (auto item : msg.a2_des) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: a3_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.a3_des.size() == 0) {
      out << "a3_des: []\n";
    } else {
      out << "a3_des:\n";
      for (auto item : msg.a3_des) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: a4_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.a4_des.size() == 0) {
      out << "a4_des: []\n";
    } else {
      out << "a4_des:\n";
      for (auto item : msg.a4_des) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: loop_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AllocatorDebugVal & msg, bool use_flow_style = false)
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
  const allocator_interfaces::msg::AllocatorDebugVal & msg,
  std::ostream & out, size_t indentation = 0)
{
  allocator_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use allocator_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const allocator_interfaces::msg::AllocatorDebugVal & msg)
{
  return allocator_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<allocator_interfaces::msg::AllocatorDebugVal>()
{
  return "allocator_interfaces::msg::AllocatorDebugVal";
}

template<>
inline const char * name<allocator_interfaces::msg::AllocatorDebugVal>()
{
  return "allocator_interfaces/msg/AllocatorDebugVal";
}

template<>
struct has_fixed_size<allocator_interfaces::msg::AllocatorDebugVal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<allocator_interfaces::msg::AllocatorDebugVal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<allocator_interfaces::msg::AllocatorDebugVal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ALLOCATOR_INTERFACES__MSG__DETAIL__ALLOCATOR_DEBUG_VAL__TRAITS_HPP_

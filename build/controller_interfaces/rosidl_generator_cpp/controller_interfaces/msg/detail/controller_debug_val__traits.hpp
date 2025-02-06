// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_interfaces:msg/ControllerDebugVal.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_DEBUG_VAL__TRAITS_HPP_
#define CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_DEBUG_VAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "controller_interfaces/msg/detail/controller_debug_val__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace controller_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControllerDebugVal & msg,
  std::ostream & out)
{
  out << "{";
  // member: des_pos
  {
    if (msg.des_pos.size() == 0) {
      out << "des_pos: []";
    } else {
      out << "des_pos: [";
      size_t pending_items = msg.des_pos.size();
      for (auto item : msg.des_pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pid_mx
  {
    if (msg.pid_mx.size() == 0) {
      out << "pid_mx: []";
    } else {
      out << "pid_mx: [";
      size_t pending_items = msg.pid_mx.size();
      for (auto item : msg.pid_mx) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pid_my
  {
    if (msg.pid_my.size() == 0) {
      out << "pid_my: []";
    } else {
      out << "pid_my: [";
      size_t pending_items = msg.pid_my.size();
      for (auto item : msg.pid_my) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pid_mz
  {
    if (msg.pid_mz.size() == 0) {
      out << "pid_mz: []";
    } else {
      out << "pid_mz: [";
      size_t pending_items = msg.pid_mz.size();
      for (auto item : msg.pid_mz) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pid_f
  {
    if (msg.pid_f.size() == 0) {
      out << "pid_f: []";
    } else {
      out << "pid_f: [";
      size_t pending_items = msg.pid_f.size();
      for (auto item : msg.pid_f) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: imu_roll
  {
    if (msg.imu_roll.size() == 0) {
      out << "imu_roll: []";
    } else {
      out << "imu_roll: [";
      size_t pending_items = msg.imu_roll.size();
      for (auto item : msg.imu_roll) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: imu_pitch
  {
    if (msg.imu_pitch.size() == 0) {
      out << "imu_pitch: []";
    } else {
      out << "imu_pitch: [";
      size_t pending_items = msg.imu_pitch.size();
      for (auto item : msg.imu_pitch) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: imu_yaw
  {
    if (msg.imu_yaw.size() == 0) {
      out << "imu_yaw: []";
    } else {
      out << "imu_yaw: [";
      size_t pending_items = msg.imu_yaw.size();
      for (auto item : msg.imu_yaw) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: opti_x
  {
    if (msg.opti_x.size() == 0) {
      out << "opti_x: []";
    } else {
      out << "opti_x: [";
      size_t pending_items = msg.opti_x.size();
      for (auto item : msg.opti_x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: opti_y
  {
    if (msg.opti_y.size() == 0) {
      out << "opti_y: []";
    } else {
      out << "opti_y: [";
      size_t pending_items = msg.opti_y.size();
      for (auto item : msg.opti_y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: opti_z
  {
    if (msg.opti_z.size() == 0) {
      out << "opti_z: []";
    } else {
      out << "opti_z: [";
      size_t pending_items = msg.opti_z.size();
      for (auto item : msg.opti_z) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: a1_mea
  {
    if (msg.a1_mea.size() == 0) {
      out << "a1_mea: []";
    } else {
      out << "a1_mea: [";
      size_t pending_items = msg.a1_mea.size();
      for (auto item : msg.a1_mea) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: a2_mea
  {
    if (msg.a2_mea.size() == 0) {
      out << "a2_mea: []";
    } else {
      out << "a2_mea: [";
      size_t pending_items = msg.a2_mea.size();
      for (auto item : msg.a2_mea) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: a3_mea
  {
    if (msg.a3_mea.size() == 0) {
      out << "a3_mea: []";
    } else {
      out << "a3_mea: [";
      size_t pending_items = msg.a3_mea.size();
      for (auto item : msg.a3_mea) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: a4_mea
  {
    if (msg.a4_mea.size() == 0) {
      out << "a4_mea: []";
    } else {
      out << "a4_mea: [";
      size_t pending_items = msg.a4_mea.size();
      for (auto item : msg.a4_mea) {
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
  const ControllerDebugVal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: des_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.des_pos.size() == 0) {
      out << "des_pos: []\n";
    } else {
      out << "des_pos:\n";
      for (auto item : msg.des_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pid_mx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pid_mx.size() == 0) {
      out << "pid_mx: []\n";
    } else {
      out << "pid_mx:\n";
      for (auto item : msg.pid_mx) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pid_my
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pid_my.size() == 0) {
      out << "pid_my: []\n";
    } else {
      out << "pid_my:\n";
      for (auto item : msg.pid_my) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pid_mz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pid_mz.size() == 0) {
      out << "pid_mz: []\n";
    } else {
      out << "pid_mz:\n";
      for (auto item : msg.pid_mz) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pid_f
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pid_f.size() == 0) {
      out << "pid_f: []\n";
    } else {
      out << "pid_f:\n";
      for (auto item : msg.pid_f) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: imu_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.imu_roll.size() == 0) {
      out << "imu_roll: []\n";
    } else {
      out << "imu_roll:\n";
      for (auto item : msg.imu_roll) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: imu_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.imu_pitch.size() == 0) {
      out << "imu_pitch: []\n";
    } else {
      out << "imu_pitch:\n";
      for (auto item : msg.imu_pitch) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: imu_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.imu_yaw.size() == 0) {
      out << "imu_yaw: []\n";
    } else {
      out << "imu_yaw:\n";
      for (auto item : msg.imu_yaw) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: opti_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.opti_x.size() == 0) {
      out << "opti_x: []\n";
    } else {
      out << "opti_x:\n";
      for (auto item : msg.opti_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: opti_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.opti_y.size() == 0) {
      out << "opti_y: []\n";
    } else {
      out << "opti_y:\n";
      for (auto item : msg.opti_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: opti_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.opti_z.size() == 0) {
      out << "opti_z: []\n";
    } else {
      out << "opti_z:\n";
      for (auto item : msg.opti_z) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: a1_mea
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.a1_mea.size() == 0) {
      out << "a1_mea: []\n";
    } else {
      out << "a1_mea:\n";
      for (auto item : msg.a1_mea) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: a2_mea
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.a2_mea.size() == 0) {
      out << "a2_mea: []\n";
    } else {
      out << "a2_mea:\n";
      for (auto item : msg.a2_mea) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: a3_mea
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.a3_mea.size() == 0) {
      out << "a3_mea: []\n";
    } else {
      out << "a3_mea:\n";
      for (auto item : msg.a3_mea) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: a4_mea
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.a4_mea.size() == 0) {
      out << "a4_mea: []\n";
    } else {
      out << "a4_mea:\n";
      for (auto item : msg.a4_mea) {
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

inline std::string to_yaml(const ControllerDebugVal & msg, bool use_flow_style = false)
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
  const controller_interfaces::msg::ControllerDebugVal & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const controller_interfaces::msg::ControllerDebugVal & msg)
{
  return controller_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<controller_interfaces::msg::ControllerDebugVal>()
{
  return "controller_interfaces::msg::ControllerDebugVal";
}

template<>
inline const char * name<controller_interfaces::msg::ControllerDebugVal>()
{
  return "controller_interfaces/msg/ControllerDebugVal";
}

template<>
struct has_fixed_size<controller_interfaces::msg::ControllerDebugVal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controller_interfaces::msg::ControllerDebugVal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controller_interfaces::msg::ControllerDebugVal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_INTERFACES__MSG__DETAIL__CONTROLLER_DEBUG_VAL__TRAITS_HPP_

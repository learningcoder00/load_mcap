// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/DbaStateMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__DBA_STATE_MSG__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__DBA_STATE_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/dba_state_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DbaStateMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: publish_timestamp
  {
    out << "publish_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.publish_timestamp, out);
    out << ", ";
  }

  // member: epb_state
  {
    out << "epb_state: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_state, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: acc_enable
  {
    out << "acc_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_enable, out);
    out << ", ";
  }

  // member: brake_enable
  {
    out << "brake_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_enable, out);
    out << ", ";
  }

  // member: door_open_state
  {
    if (msg.door_open_state.size() == 0) {
      out << "door_open_state: []";
    } else {
      out << "door_open_state: [";
      size_t pending_items = msg.door_open_state.size();
      for (auto item : msg.door_open_state) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: turn_lamp_lever_state
  {
    out << "turn_lamp_lever_state: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_lamp_lever_state, out);
    out << ", ";
  }

  // member: late_enable
  {
    out << "late_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.late_enable, out);
    out << ", ";
  }

  // member: late_driveover
  {
    out << "late_driveover: ";
    rosidl_generator_traits::value_to_yaml(msg.late_driveover, out);
    out << ", ";
  }

  // member: longit_enable
  {
    out << "longit_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.longit_enable, out);
    out << ", ";
  }

  // member: longit_driveover
  {
    out << "longit_driveover: ";
    rosidl_generator_traits::value_to_yaml(msg.longit_driveover, out);
    out << ", ";
  }

  // member: gear
  {
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
    out << ", ";
  }

  // member: belt
  {
    if (msg.belt.size() == 0) {
      out << "belt: []";
    } else {
      out << "belt: [";
      size_t pending_items = msg.belt.size();
      for (auto item : msg.belt) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: save_map
  {
    out << "save_map: ";
    rosidl_generator_traits::value_to_yaml(msg.save_map, out);
    out << ", ";
  }

  // member: slot_id
  {
    out << "slot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.slot_id, out);
    out << ", ";
  }

  // member: park_out_direction
  {
    out << "park_out_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.park_out_direction, out);
    out << ", ";
  }

  // member: run_mode
  {
    out << "run_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.run_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DbaStateMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: publish_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "publish_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.publish_timestamp, out);
    out << "\n";
  }

  // member: epb_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epb_state: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_state, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: acc_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_enable, out);
    out << "\n";
  }

  // member: brake_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_enable, out);
    out << "\n";
  }

  // member: door_open_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.door_open_state.size() == 0) {
      out << "door_open_state: []\n";
    } else {
      out << "door_open_state:\n";
      for (auto item : msg.door_open_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: turn_lamp_lever_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_lamp_lever_state: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_lamp_lever_state, out);
    out << "\n";
  }

  // member: late_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "late_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.late_enable, out);
    out << "\n";
  }

  // member: late_driveover
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "late_driveover: ";
    rosidl_generator_traits::value_to_yaml(msg.late_driveover, out);
    out << "\n";
  }

  // member: longit_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longit_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.longit_enable, out);
    out << "\n";
  }

  // member: longit_driveover
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longit_driveover: ";
    rosidl_generator_traits::value_to_yaml(msg.longit_driveover, out);
    out << "\n";
  }

  // member: gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
    out << "\n";
  }

  // member: belt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.belt.size() == 0) {
      out << "belt: []\n";
    } else {
      out << "belt:\n";
      for (auto item : msg.belt) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: save_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "save_map: ";
    rosidl_generator_traits::value_to_yaml(msg.save_map, out);
    out << "\n";
  }

  // member: slot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.slot_id, out);
    out << "\n";
  }

  // member: park_out_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "park_out_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.park_out_direction, out);
    out << "\n";
  }

  // member: run_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "run_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.run_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DbaStateMsg & msg, bool use_flow_style = false)
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

}  // namespace deva_function_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_function_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_function_msgs::msg::DbaStateMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::DbaStateMsg & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::DbaStateMsg>()
{
  return "deva_function_msgs::msg::DbaStateMsg";
}

template<>
inline const char * name<deva_function_msgs::msg::DbaStateMsg>()
{
  return "deva_function_msgs/msg/DbaStateMsg";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::DbaStateMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::DbaStateMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_function_msgs::msg::DbaStateMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__DBA_STATE_MSG__TRAITS_HPP_

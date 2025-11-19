// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_control_msgs:msg/VehicleReportCommon.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_COMMON__TRAITS_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_COMMON__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_control_msgs/msg/detail/vehicle_report_common__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'pedal'
#include "deva_control_msgs/msg/detail/vehicle_report_pedal__traits.hpp"
// Member 'wheelspeed_rc'
#include "deva_control_msgs/msg/detail/wheel_speed__traits.hpp"
// Member 'belt'
#include "deva_control_msgs/msg/detail/vehicle_report_belt__traits.hpp"

namespace deva_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleReportCommon & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: protocol_version
  {
    out << "protocol_version: ";
    rosidl_generator_traits::value_to_yaml(msg.protocol_version, out);
    out << ", ";
  }

  // member: unix_ts
  {
    out << "unix_ts: ";
    rosidl_generator_traits::value_to_yaml(msg.unix_ts, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: speed_valid
  {
    out << "speed_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_valid, out);
    out << ", ";
  }

  // member: speed_directivity
  {
    out << "speed_directivity: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_directivity, out);
    out << ", ";
  }

  // member: wheelspeed_directivity
  {
    out << "wheelspeed_directivity: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelspeed_directivity, out);
    out << ", ";
  }

  // member: wheelspeed_valid
  {
    if (msg.wheelspeed_valid.size() == 0) {
      out << "wheelspeed_valid: []";
    } else {
      out << "wheelspeed_valid: [";
      size_t pending_items = msg.wheelspeed_valid.size();
      for (auto item : msg.wheelspeed_valid) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: wheelspeed_dir
  {
    if (msg.wheelspeed_dir.size() == 0) {
      out << "wheelspeed_dir: []";
    } else {
      out << "wheelspeed_dir: [";
      size_t pending_items = msg.wheelspeed_dir.size();
      for (auto item : msg.wheelspeed_dir) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: wheelspeed
  {
    if (msg.wheelspeed.size() == 0) {
      out << "wheelspeed: []";
    } else {
      out << "wheelspeed: [";
      size_t pending_items = msg.wheelspeed.size();
      for (auto item : msg.wheelspeed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gear_enable
  {
    out << "gear_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_enable, out);
    out << ", ";
  }

  // member: gear
  {
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
    out << ", ";
  }

  // member: epb_state
  {
    out << "epb_state: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_state, out);
    out << ", ";
  }

  // member: epb_flt
  {
    out << "epb_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_flt, out);
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

  // member: steer_angle_valid
  {
    out << "steer_angle_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_angle_valid, out);
    out << ", ";
  }

  // member: steer_angle
  {
    out << "steer_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_angle, out);
    out << ", ";
  }

  // member: steer_rotate_angle_speed
  {
    out << "steer_rotate_angle_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_rotate_angle_speed, out);
    out << ", ";
  }

  // member: steer_torque_valid
  {
    out << "steer_torque_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_torque_valid, out);
    out << ", ";
  }

  // member: steer_torque
  {
    out << "steer_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_torque, out);
    out << ", ";
  }

  // member: steer_rotate_torque_speed
  {
    out << "steer_rotate_torque_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_rotate_torque_speed, out);
    out << ", ";
  }

  // member: late_flt
  {
    out << "late_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.late_flt, out);
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

  // member: longit_torque_valid
  {
    out << "longit_torque_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.longit_torque_valid, out);
    out << ", ";
  }

  // member: longit_torque
  {
    out << "longit_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.longit_torque, out);
    out << ", ";
  }

  // member: longit_acc_valid
  {
    out << "longit_acc_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.longit_acc_valid, out);
    out << ", ";
  }

  // member: longit_acc
  {
    out << "longit_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.longit_acc, out);
    out << ", ";
  }

  // member: longit_flt
  {
    out << "longit_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.longit_flt, out);
    out << ", ";
  }

  // member: turn_lamp_lever_state
  {
    out << "turn_lamp_lever_state: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_lamp_lever_state, out);
    out << ", ";
  }

  // member: turn_lamp_left
  {
    out << "turn_lamp_left: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_lamp_left, out);
    out << ", ";
  }

  // member: turn_lamp_right
  {
    out << "turn_lamp_right: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_lamp_right, out);
    out << ", ";
  }

  // member: hazard_lamp
  {
    out << "hazard_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.hazard_lamp, out);
    out << ", ";
  }

  // member: wiper_front
  {
    out << "wiper_front: ";
    rosidl_generator_traits::value_to_yaml(msg.wiper_front, out);
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

  // member: late_acc
  {
    out << "late_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.late_acc, out);
    out << ", ";
  }

  // member: yaw_rate
  {
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << ", ";
  }

  // member: slope
  {
    out << "slope: ";
    rosidl_generator_traits::value_to_yaml(msg.slope, out);
    out << ", ";
  }

  // member: standstill
  {
    out << "standstill: ";
    rosidl_generator_traits::value_to_yaml(msg.standstill, out);
    out << ", ";
  }

  // member: pedal_valid
  {
    out << "pedal_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.pedal_valid, out);
    out << ", ";
  }

  // member: pedal
  {
    out << "pedal: ";
    to_flow_style_yaml(msg.pedal, out);
    out << ", ";
  }

  // member: wheelspeed_rc_valid
  {
    out << "wheelspeed_rc_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelspeed_rc_valid, out);
    out << ", ";
  }

  // member: wheelspeed_rc
  {
    out << "wheelspeed_rc: ";
    to_flow_style_yaml(msg.wheelspeed_rc, out);
    out << ", ";
  }

  // member: belt_valid
  {
    out << "belt_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.belt_valid, out);
    out << ", ";
  }

  // member: belt
  {
    out << "belt: ";
    to_flow_style_yaml(msg.belt, out);
    out << ", ";
  }

  // member: bywire_exit_reason
  {
    out << "bywire_exit_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.bywire_exit_reason, out);
    out << ", ";
  }

  // member: request_cancel
  {
    out << "request_cancel: ";
    rosidl_generator_traits::value_to_yaml(msg.request_cancel, out);
    out << ", ";
  }

  // member: action_brake
  {
    out << "action_brake: ";
    rosidl_generator_traits::value_to_yaml(msg.action_brake, out);
    out << ", ";
  }

  // member: action_throttle
  {
    out << "action_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.action_throttle, out);
    out << ", ";
  }

  // member: action_steer
  {
    out << "action_steer: ";
    rosidl_generator_traits::value_to_yaml(msg.action_steer, out);
    out << ", ";
  }

  // member: heavy_action_steer
  {
    out << "heavy_action_steer: ";
    rosidl_generator_traits::value_to_yaml(msg.heavy_action_steer, out);
    out << ", ";
  }

  // member: sustain_action_throttle
  {
    out << "sustain_action_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.sustain_action_throttle, out);
    out << ", ";
  }

  // member: sustain_action_steer
  {
    out << "sustain_action_steer: ";
    rosidl_generator_traits::value_to_yaml(msg.sustain_action_steer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleReportCommon & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: protocol_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "protocol_version: ";
    rosidl_generator_traits::value_to_yaml(msg.protocol_version, out);
    out << "\n";
  }

  // member: unix_ts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unix_ts: ";
    rosidl_generator_traits::value_to_yaml(msg.unix_ts, out);
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

  // member: speed_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_valid, out);
    out << "\n";
  }

  // member: speed_directivity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_directivity: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_directivity, out);
    out << "\n";
  }

  // member: wheelspeed_directivity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheelspeed_directivity: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelspeed_directivity, out);
    out << "\n";
  }

  // member: wheelspeed_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wheelspeed_valid.size() == 0) {
      out << "wheelspeed_valid: []\n";
    } else {
      out << "wheelspeed_valid:\n";
      for (auto item : msg.wheelspeed_valid) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: wheelspeed_dir
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wheelspeed_dir.size() == 0) {
      out << "wheelspeed_dir: []\n";
    } else {
      out << "wheelspeed_dir:\n";
      for (auto item : msg.wheelspeed_dir) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: wheelspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wheelspeed.size() == 0) {
      out << "wheelspeed: []\n";
    } else {
      out << "wheelspeed:\n";
      for (auto item : msg.wheelspeed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gear_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_enable, out);
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

  // member: epb_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epb_state: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_state, out);
    out << "\n";
  }

  // member: epb_flt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epb_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_flt, out);
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

  // member: steer_angle_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_angle_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_angle_valid, out);
    out << "\n";
  }

  // member: steer_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_angle, out);
    out << "\n";
  }

  // member: steer_rotate_angle_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_rotate_angle_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_rotate_angle_speed, out);
    out << "\n";
  }

  // member: steer_torque_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_torque_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_torque_valid, out);
    out << "\n";
  }

  // member: steer_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_torque, out);
    out << "\n";
  }

  // member: steer_rotate_torque_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_rotate_torque_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_rotate_torque_speed, out);
    out << "\n";
  }

  // member: late_flt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "late_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.late_flt, out);
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

  // member: longit_torque_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longit_torque_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.longit_torque_valid, out);
    out << "\n";
  }

  // member: longit_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longit_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.longit_torque, out);
    out << "\n";
  }

  // member: longit_acc_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longit_acc_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.longit_acc_valid, out);
    out << "\n";
  }

  // member: longit_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longit_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.longit_acc, out);
    out << "\n";
  }

  // member: longit_flt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longit_flt: ";
    rosidl_generator_traits::value_to_yaml(msg.longit_flt, out);
    out << "\n";
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

  // member: turn_lamp_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_lamp_left: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_lamp_left, out);
    out << "\n";
  }

  // member: turn_lamp_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_lamp_right: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_lamp_right, out);
    out << "\n";
  }

  // member: hazard_lamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hazard_lamp: ";
    rosidl_generator_traits::value_to_yaml(msg.hazard_lamp, out);
    out << "\n";
  }

  // member: wiper_front
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wiper_front: ";
    rosidl_generator_traits::value_to_yaml(msg.wiper_front, out);
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

  // member: late_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "late_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.late_acc, out);
    out << "\n";
  }

  // member: yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << "\n";
  }

  // member: slope
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slope: ";
    rosidl_generator_traits::value_to_yaml(msg.slope, out);
    out << "\n";
  }

  // member: standstill
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "standstill: ";
    rosidl_generator_traits::value_to_yaml(msg.standstill, out);
    out << "\n";
  }

  // member: pedal_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pedal_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.pedal_valid, out);
    out << "\n";
  }

  // member: pedal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pedal:\n";
    to_block_style_yaml(msg.pedal, out, indentation + 2);
  }

  // member: wheelspeed_rc_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheelspeed_rc_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelspeed_rc_valid, out);
    out << "\n";
  }

  // member: wheelspeed_rc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheelspeed_rc:\n";
    to_block_style_yaml(msg.wheelspeed_rc, out, indentation + 2);
  }

  // member: belt_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "belt_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.belt_valid, out);
    out << "\n";
  }

  // member: belt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "belt:\n";
    to_block_style_yaml(msg.belt, out, indentation + 2);
  }

  // member: bywire_exit_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bywire_exit_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.bywire_exit_reason, out);
    out << "\n";
  }

  // member: request_cancel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_cancel: ";
    rosidl_generator_traits::value_to_yaml(msg.request_cancel, out);
    out << "\n";
  }

  // member: action_brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_brake: ";
    rosidl_generator_traits::value_to_yaml(msg.action_brake, out);
    out << "\n";
  }

  // member: action_throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.action_throttle, out);
    out << "\n";
  }

  // member: action_steer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_steer: ";
    rosidl_generator_traits::value_to_yaml(msg.action_steer, out);
    out << "\n";
  }

  // member: heavy_action_steer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heavy_action_steer: ";
    rosidl_generator_traits::value_to_yaml(msg.heavy_action_steer, out);
    out << "\n";
  }

  // member: sustain_action_throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sustain_action_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.sustain_action_throttle, out);
    out << "\n";
  }

  // member: sustain_action_steer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sustain_action_steer: ";
    rosidl_generator_traits::value_to_yaml(msg.sustain_action_steer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleReportCommon & msg, bool use_flow_style = false)
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

}  // namespace deva_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_control_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_control_msgs::msg::VehicleReportCommon & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_control_msgs::msg::VehicleReportCommon & msg)
{
  return deva_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_control_msgs::msg::VehicleReportCommon>()
{
  return "deva_control_msgs::msg::VehicleReportCommon";
}

template<>
inline const char * name<deva_control_msgs::msg::VehicleReportCommon>()
{
  return "deva_control_msgs/msg/VehicleReportCommon";
}

template<>
struct has_fixed_size<deva_control_msgs::msg::VehicleReportCommon>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_control_msgs::msg::VehicleReportCommon>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_control_msgs::msg::VehicleReportCommon>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_COMMON__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs2:msg/TargetTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__TARGET_TRAJECTORY__TRAITS_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__TARGET_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs2/msg/detail/target_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'sensor_timestamp'
#include "deva_planning_msgs2/msg/detail/sensor_time__traits.hpp"
// Member 'trajectory_point'
#include "deva_planning_msgs2/msg/detail/trajectory_point__traits.hpp"
// Member 'path_point'
// Member 'stop_pose'
#include "deva_planning_msgs2/msg/detail/path_point__traits.hpp"

namespace deva_planning_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const TargetTrajectory & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: sensor_timestamp
  {
    out << "sensor_timestamp: ";
    to_flow_style_yaml(msg.sensor_timestamp, out);
    out << ", ";
  }

  // member: start_gnss_time
  {
    out << "start_gnss_time: ";
    rosidl_generator_traits::value_to_yaml(msg.start_gnss_time, out);
    out << ", ";
  }

  // member: total_path_length
  {
    out << "total_path_length: ";
    rosidl_generator_traits::value_to_yaml(msg.total_path_length, out);
    out << ", ";
  }

  // member: total_path_time
  {
    out << "total_path_time: ";
    rosidl_generator_traits::value_to_yaml(msg.total_path_time, out);
    out << ", ";
  }

  // member: trajectory_point
  {
    if (msg.trajectory_point.size() == 0) {
      out << "trajectory_point: []";
    } else {
      out << "trajectory_point: [";
      size_t pending_items = msg.trajectory_point.size();
      for (auto item : msg.trajectory_point) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: path_point
  {
    if (msg.path_point.size() == 0) {
      out << "path_point: []";
    } else {
      out << "path_point: [";
      size_t pending_items = msg.path_point.size();
      for (auto item : msg.path_point) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gear
  {
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
    out << ", ";
  }

  // member: is_estop
  {
    out << "is_estop: ";
    rosidl_generator_traits::value_to_yaml(msg.is_estop, out);
    out << ", ";
  }

  // member: estop_reason
  {
    out << "estop_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.estop_reason, out);
    out << ", ";
  }

  // member: is_stop
  {
    out << "is_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.is_stop, out);
    out << ", ";
  }

  // member: stop_pose
  {
    out << "stop_pose: ";
    to_flow_style_yaml(msg.stop_pose, out);
    out << ", ";
  }

  // member: stop_reason
  {
    out << "stop_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_reason, out);
    out << ", ";
  }

  // member: is_replan
  {
    out << "is_replan: ";
    rosidl_generator_traits::value_to_yaml(msg.is_replan, out);
    out << ", ";
  }

  // member: replan_reason
  {
    out << "replan_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.replan_reason, out);
    out << ", ";
  }

  // member: car_in_dead_end
  {
    out << "car_in_dead_end: ";
    rosidl_generator_traits::value_to_yaml(msg.car_in_dead_end, out);
    out << ", ";
  }

  // member: high_beam
  {
    out << "high_beam: ";
    rosidl_generator_traits::value_to_yaml(msg.high_beam, out);
    out << ", ";
  }

  // member: low_beam
  {
    out << "low_beam: ";
    rosidl_generator_traits::value_to_yaml(msg.low_beam, out);
    out << ", ";
  }

  // member: horn
  {
    out << "horn: ";
    rosidl_generator_traits::value_to_yaml(msg.horn, out);
    out << ", ";
  }

  // member: emergency_light
  {
    out << "emergency_light: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_light, out);
    out << ", ";
  }

  // member: trace_type
  {
    out << "trace_type: ";
    rosidl_generator_traits::value_to_yaml(msg.trace_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetTrajectory & msg,
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

  // member: sensor_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_timestamp:\n";
    to_block_style_yaml(msg.sensor_timestamp, out, indentation + 2);
  }

  // member: start_gnss_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_gnss_time: ";
    rosidl_generator_traits::value_to_yaml(msg.start_gnss_time, out);
    out << "\n";
  }

  // member: total_path_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_path_length: ";
    rosidl_generator_traits::value_to_yaml(msg.total_path_length, out);
    out << "\n";
  }

  // member: total_path_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_path_time: ";
    rosidl_generator_traits::value_to_yaml(msg.total_path_time, out);
    out << "\n";
  }

  // member: trajectory_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajectory_point.size() == 0) {
      out << "trajectory_point: []\n";
    } else {
      out << "trajectory_point:\n";
      for (auto item : msg.trajectory_point) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: path_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path_point.size() == 0) {
      out << "path_point: []\n";
    } else {
      out << "path_point:\n";
      for (auto item : msg.path_point) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

  // member: is_estop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_estop: ";
    rosidl_generator_traits::value_to_yaml(msg.is_estop, out);
    out << "\n";
  }

  // member: estop_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estop_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.estop_reason, out);
    out << "\n";
  }

  // member: is_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.is_stop, out);
    out << "\n";
  }

  // member: stop_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_pose:\n";
    to_block_style_yaml(msg.stop_pose, out, indentation + 2);
  }

  // member: stop_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_reason, out);
    out << "\n";
  }

  // member: is_replan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_replan: ";
    rosidl_generator_traits::value_to_yaml(msg.is_replan, out);
    out << "\n";
  }

  // member: replan_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "replan_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.replan_reason, out);
    out << "\n";
  }

  // member: car_in_dead_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "car_in_dead_end: ";
    rosidl_generator_traits::value_to_yaml(msg.car_in_dead_end, out);
    out << "\n";
  }

  // member: high_beam
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "high_beam: ";
    rosidl_generator_traits::value_to_yaml(msg.high_beam, out);
    out << "\n";
  }

  // member: low_beam
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "low_beam: ";
    rosidl_generator_traits::value_to_yaml(msg.low_beam, out);
    out << "\n";
  }

  // member: horn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horn: ";
    rosidl_generator_traits::value_to_yaml(msg.horn, out);
    out << "\n";
  }

  // member: emergency_light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_light: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_light, out);
    out << "\n";
  }

  // member: trace_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trace_type: ";
    rosidl_generator_traits::value_to_yaml(msg.trace_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetTrajectory & msg, bool use_flow_style = false)
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

}  // namespace deva_planning_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use deva_planning_msgs2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_planning_msgs2::msg::TargetTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs2::msg::TargetTrajectory & msg)
{
  return deva_planning_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs2::msg::TargetTrajectory>()
{
  return "deva_planning_msgs2::msg::TargetTrajectory";
}

template<>
inline const char * name<deva_planning_msgs2::msg::TargetTrajectory>()
{
  return "deva_planning_msgs2/msg/TargetTrajectory";
}

template<>
struct has_fixed_size<deva_planning_msgs2::msg::TargetTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_planning_msgs2::msg::TargetTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_planning_msgs2::msg::TargetTrajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__TARGET_TRAJECTORY__TRAITS_HPP_

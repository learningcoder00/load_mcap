// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_mdriver_msgs:msg/MPredictionObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__M_PREDICTION_OBSTACLE__TRAITS_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__M_PREDICTION_OBSTACLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_mdriver_msgs/msg/detail/m_prediction_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'perception_obstacle'
#include "deva_perception_msgs/msg/detail/moving_obstacle__traits.hpp"
// Member 'trajectory'
#include "deva_planning_msgs/msg/detail/trajectory_point__traits.hpp"
// Member 'acc_heading_steering_stats'
#include "deva_mdriver_msgs/msg/detail/acc_heading_steering_stats__traits.hpp"
// Member 'prediction_debug_info'
#include "deva_mdriver_msgs/msg/detail/debug_info__traits.hpp"

namespace deva_mdriver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MPredictionObstacle & msg,
  std::ostream & out)
{
  out << "{";
  // member: perception_obstacle
  {
    out << "perception_obstacle: ";
    to_flow_style_yaml(msg.perception_obstacle, out);
    out << ", ";
  }

  // member: trajectory
  {
    if (msg.trajectory.size() == 0) {
      out << "trajectory: []";
    } else {
      out << "trajectory: [";
      size_t pending_items = msg.trajectory.size();
      for (auto item : msg.trajectory) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: decision
  {
    if (msg.decision.size() == 0) {
      out << "decision: []";
    } else {
      out << "decision: [";
      size_t pending_items = msg.decision.size();
      for (auto item : msg.decision) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: obs_id
  {
    out << "obs_id: ";
    rosidl_generator_traits::value_to_yaml(msg.obs_id, out);
    out << ", ";
  }

  // member: score
  {
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << ", ";
  }

  // member: cov
  {
    if (msg.cov.size() == 0) {
      out << "cov: []";
    } else {
      out << "cov: [";
      size_t pending_items = msg.cov.size();
      for (auto item : msg.cov) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_static
  {
    out << "is_static: ";
    rosidl_generator_traits::value_to_yaml(msg.is_static, out);
    out << ", ";
  }

  // member: acc_heading_steering_stats
  {
    if (msg.acc_heading_steering_stats.size() == 0) {
      out << "acc_heading_steering_stats: []";
    } else {
      out << "acc_heading_steering_stats: [";
      size_t pending_items = msg.acc_heading_steering_stats.size();
      for (auto item : msg.acc_heading_steering_stats) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: prediction_debug_info
  {
    if (msg.prediction_debug_info.size() == 0) {
      out << "prediction_debug_info: []";
    } else {
      out << "prediction_debug_info: [";
      size_t pending_items = msg.prediction_debug_info.size();
      for (auto item : msg.prediction_debug_info) {
        to_flow_style_yaml(item, out);
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
  const MPredictionObstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: perception_obstacle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "perception_obstacle:\n";
    to_block_style_yaml(msg.perception_obstacle, out, indentation + 2);
  }

  // member: trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajectory.size() == 0) {
      out << "trajectory: []\n";
    } else {
      out << "trajectory:\n";
      for (auto item : msg.trajectory) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: decision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.decision.size() == 0) {
      out << "decision: []\n";
    } else {
      out << "decision:\n";
      for (auto item : msg.decision) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: obs_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obs_id: ";
    rosidl_generator_traits::value_to_yaml(msg.obs_id, out);
    out << "\n";
  }

  // member: score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << "\n";
  }

  // member: cov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cov.size() == 0) {
      out << "cov: []\n";
    } else {
      out << "cov:\n";
      for (auto item : msg.cov) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: is_static
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_static: ";
    rosidl_generator_traits::value_to_yaml(msg.is_static, out);
    out << "\n";
  }

  // member: acc_heading_steering_stats
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acc_heading_steering_stats.size() == 0) {
      out << "acc_heading_steering_stats: []\n";
    } else {
      out << "acc_heading_steering_stats:\n";
      for (auto item : msg.acc_heading_steering_stats) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: prediction_debug_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.prediction_debug_info.size() == 0) {
      out << "prediction_debug_info: []\n";
    } else {
      out << "prediction_debug_info:\n";
      for (auto item : msg.prediction_debug_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MPredictionObstacle & msg, bool use_flow_style = false)
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

}  // namespace deva_mdriver_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_mdriver_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_mdriver_msgs::msg::MPredictionObstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_mdriver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_mdriver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_mdriver_msgs::msg::MPredictionObstacle & msg)
{
  return deva_mdriver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_mdriver_msgs::msg::MPredictionObstacle>()
{
  return "deva_mdriver_msgs::msg::MPredictionObstacle";
}

template<>
inline const char * name<deva_mdriver_msgs::msg::MPredictionObstacle>()
{
  return "deva_mdriver_msgs/msg/MPredictionObstacle";
}

template<>
struct has_fixed_size<deva_mdriver_msgs::msg::MPredictionObstacle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_mdriver_msgs::msg::MPredictionObstacle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_mdriver_msgs::msg::MPredictionObstacle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__M_PREDICTION_OBSTACLE__TRAITS_HPP_

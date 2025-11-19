// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/DynamicObstWorldSpaceInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBST_WORLD_SPACE_INFO__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBST_WORLD_SPACE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/dynamic_obst_world_space_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'poly'
// Member 'poly_vcs'
#include "deva_perception_msgs/msg/detail/polygon__traits.hpp"
// Member 'position'
// Member 'vel'
// Member 'vel_abs_world'
// Member 'acc'
// Member 'acc_abs_world'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DynamicObstWorldSpaceInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: poly
  {
    out << "poly: ";
    to_flow_style_yaml(msg.poly, out);
    out << ", ";
  }

  // member: poly_vcs
  {
    out << "poly_vcs: ";
    to_flow_style_yaml(msg.poly_vcs, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: ttc
  {
    out << "ttc: ";
    rosidl_generator_traits::value_to_yaml(msg.ttc, out);
    out << ", ";
  }

  // member: vel
  {
    out << "vel: ";
    to_flow_style_yaml(msg.vel, out);
    out << ", ";
  }

  // member: vel_abs_world
  {
    out << "vel_abs_world: ";
    to_flow_style_yaml(msg.vel_abs_world, out);
    out << ", ";
  }

  // member: acc
  {
    out << "acc: ";
    to_flow_style_yaml(msg.acc, out);
    out << ", ";
  }

  // member: acc_abs_world
  {
    out << "acc_abs_world: ";
    to_flow_style_yaml(msg.acc_abs_world, out);
    out << ", ";
  }

  // member: motion_status
  {
    out << "motion_status: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_status, out);
    out << ", ";
  }

  // member: yaw_rate
  {
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << ", ";
  }

  // member: sigma_vel
  {
    if (msg.sigma_vel.size() == 0) {
      out << "sigma_vel: []";
    } else {
      out << "sigma_vel: [";
      size_t pending_items = msg.sigma_vel.size();
      for (auto item : msg.sigma_vel) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sigma_yaw
  {
    out << "sigma_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.sigma_yaw, out);
    out << ", ";
  }

  // member: sigma_width
  {
    out << "sigma_width: ";
    rosidl_generator_traits::value_to_yaml(msg.sigma_width, out);
    out << ", ";
  }

  // member: sigma_height
  {
    out << "sigma_height: ";
    rosidl_generator_traits::value_to_yaml(msg.sigma_height, out);
    out << ", ";
  }

  // member: sigma_length
  {
    out << "sigma_length: ";
    rosidl_generator_traits::value_to_yaml(msg.sigma_length, out);
    out << ", ";
  }

  // member: sigma_position
  {
    if (msg.sigma_position.size() == 0) {
      out << "sigma_position: []";
    } else {
      out << "sigma_position: [";
      size_t pending_items = msg.sigma_position.size();
      for (auto item : msg.sigma_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sigma_yaw_rate
  {
    out << "sigma_yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.sigma_yaw_rate, out);
    out << ", ";
  }

  // member: lane_assignment
  {
    out << "lane_assignment: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_assignment, out);
    out << ", ";
  }

  // member: cipv
  {
    out << "cipv: ";
    rosidl_generator_traits::value_to_yaml(msg.cipv, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DynamicObstWorldSpaceInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: poly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "poly:\n";
    to_block_style_yaml(msg.poly, out, indentation + 2);
  }

  // member: poly_vcs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "poly_vcs:\n";
    to_block_style_yaml(msg.poly_vcs, out, indentation + 2);
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: ttc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ttc: ";
    rosidl_generator_traits::value_to_yaml(msg.ttc, out);
    out << "\n";
  }

  // member: vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel:\n";
    to_block_style_yaml(msg.vel, out, indentation + 2);
  }

  // member: vel_abs_world
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_abs_world:\n";
    to_block_style_yaml(msg.vel_abs_world, out, indentation + 2);
  }

  // member: acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc:\n";
    to_block_style_yaml(msg.acc, out, indentation + 2);
  }

  // member: acc_abs_world
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_abs_world:\n";
    to_block_style_yaml(msg.acc_abs_world, out, indentation + 2);
  }

  // member: motion_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_status: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_status, out);
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

  // member: sigma_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sigma_vel.size() == 0) {
      out << "sigma_vel: []\n";
    } else {
      out << "sigma_vel:\n";
      for (auto item : msg.sigma_vel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: sigma_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sigma_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.sigma_yaw, out);
    out << "\n";
  }

  // member: sigma_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sigma_width: ";
    rosidl_generator_traits::value_to_yaml(msg.sigma_width, out);
    out << "\n";
  }

  // member: sigma_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sigma_height: ";
    rosidl_generator_traits::value_to_yaml(msg.sigma_height, out);
    out << "\n";
  }

  // member: sigma_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sigma_length: ";
    rosidl_generator_traits::value_to_yaml(msg.sigma_length, out);
    out << "\n";
  }

  // member: sigma_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sigma_position.size() == 0) {
      out << "sigma_position: []\n";
    } else {
      out << "sigma_position:\n";
      for (auto item : msg.sigma_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: sigma_yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sigma_yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.sigma_yaw_rate, out);
    out << "\n";
  }

  // member: lane_assignment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_assignment: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_assignment, out);
    out << "\n";
  }

  // member: cipv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cipv: ";
    rosidl_generator_traits::value_to_yaml(msg.cipv, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DynamicObstWorldSpaceInfo & msg, bool use_flow_style = false)
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

}  // namespace deva_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::DynamicObstWorldSpaceInfo>()
{
  return "deva_perception_msgs::msg::DynamicObstWorldSpaceInfo";
}

template<>
inline const char * name<deva_perception_msgs::msg::DynamicObstWorldSpaceInfo>()
{
  return "deva_perception_msgs/msg/DynamicObstWorldSpaceInfo";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::DynamicObstWorldSpaceInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::DynamicObstWorldSpaceInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::DynamicObstWorldSpaceInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBST_WORLD_SPACE_INFO__TRAITS_HPP_

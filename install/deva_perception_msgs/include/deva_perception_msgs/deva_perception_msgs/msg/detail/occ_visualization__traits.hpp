// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/OCCVisualization.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__OCC_VISUALIZATION__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__OCC_VISUALIZATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/occ_visualization__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
// Member 'lidar_header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OCCVisualization & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: lidar_header
  {
    out << "lidar_header: ";
    to_flow_style_yaml(msg.lidar_header, out);
    out << ", ";
  }

  // member: points_type
  {
    if (msg.points_type.size() == 0) {
      out << "points_type: []";
    } else {
      out << "points_type: [";
      size_t pending_items = msg.points_type.size();
      for (auto item : msg.points_type) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: voxel_pc_params
  {
    if (msg.voxel_pc_params.size() == 0) {
      out << "voxel_pc_params: []";
    } else {
      out << "voxel_pc_params: [";
      size_t pending_items = msg.voxel_pc_params.size();
      for (auto item : msg.voxel_pc_params) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: image_points_contours
  {
    if (msg.image_points_contours.size() == 0) {
      out << "image_points_contours: []";
    } else {
      out << "image_points_contours: [";
      size_t pending_items = msg.image_points_contours.size();
      for (auto item : msg.image_points_contours) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rfu_pixel_matrix
  {
    if (msg.rfu_pixel_matrix.size() == 0) {
      out << "rfu_pixel_matrix: []";
    } else {
      out << "rfu_pixel_matrix: [";
      size_t pending_items = msg.rfu_pixel_matrix.size();
      for (auto item : msg.rfu_pixel_matrix) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rfu_utm_matrix
  {
    if (msg.rfu_utm_matrix.size() == 0) {
      out << "rfu_utm_matrix: []";
    } else {
      out << "rfu_utm_matrix: [";
      size_t pending_items = msg.rfu_utm_matrix.size();
      for (auto item : msg.rfu_utm_matrix) {
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
  const OCCVisualization & msg,
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

  // member: lidar_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lidar_header:\n";
    to_block_style_yaml(msg.lidar_header, out, indentation + 2);
  }

  // member: points_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points_type.size() == 0) {
      out << "points_type: []\n";
    } else {
      out << "points_type:\n";
      for (auto item : msg.points_type) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: voxel_pc_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.voxel_pc_params.size() == 0) {
      out << "voxel_pc_params: []\n";
    } else {
      out << "voxel_pc_params:\n";
      for (auto item : msg.voxel_pc_params) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: image_points_contours
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.image_points_contours.size() == 0) {
      out << "image_points_contours: []\n";
    } else {
      out << "image_points_contours:\n";
      for (auto item : msg.image_points_contours) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rfu_pixel_matrix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rfu_pixel_matrix.size() == 0) {
      out << "rfu_pixel_matrix: []\n";
    } else {
      out << "rfu_pixel_matrix:\n";
      for (auto item : msg.rfu_pixel_matrix) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rfu_utm_matrix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rfu_utm_matrix.size() == 0) {
      out << "rfu_utm_matrix: []\n";
    } else {
      out << "rfu_utm_matrix:\n";
      for (auto item : msg.rfu_utm_matrix) {
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

inline std::string to_yaml(const OCCVisualization & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::OCCVisualization & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::OCCVisualization & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::OCCVisualization>()
{
  return "deva_perception_msgs::msg::OCCVisualization";
}

template<>
inline const char * name<deva_perception_msgs::msg::OCCVisualization>()
{
  return "deva_perception_msgs/msg/OCCVisualization";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::OCCVisualization>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::OCCVisualization>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::OCCVisualization>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__OCC_VISUALIZATION__TRAITS_HPP_

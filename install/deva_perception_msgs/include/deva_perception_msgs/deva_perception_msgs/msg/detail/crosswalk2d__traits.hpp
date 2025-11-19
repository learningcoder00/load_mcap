// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/Crosswalk2d.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CROSSWALK2D__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CROSSWALK2D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/crosswalk2d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pixel_points'
#include "deva_common_msgs/msg/detail/point2d__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Crosswalk2d & msg,
  std::ostream & out)
{
  out << "{";
  // member: lane_id
  {
    out << "lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_id, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: lu_point_pos_lgt
  {
    out << "lu_point_pos_lgt: ";
    rosidl_generator_traits::value_to_yaml(msg.lu_point_pos_lgt, out);
    out << ", ";
  }

  // member: lu_point_pos_lat
  {
    out << "lu_point_pos_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lu_point_pos_lat, out);
    out << ", ";
  }

  // member: ru_point_pos_lgt
  {
    out << "ru_point_pos_lgt: ";
    rosidl_generator_traits::value_to_yaml(msg.ru_point_pos_lgt, out);
    out << ", ";
  }

  // member: ru_point_pos_lat
  {
    out << "ru_point_pos_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.ru_point_pos_lat, out);
    out << ", ";
  }

  // member: rd_point_pos_lgt
  {
    out << "rd_point_pos_lgt: ";
    rosidl_generator_traits::value_to_yaml(msg.rd_point_pos_lgt, out);
    out << ", ";
  }

  // member: rd_point_pos_lat
  {
    out << "rd_point_pos_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.rd_point_pos_lat, out);
    out << ", ";
  }

  // member: ld_point_pos_lgt
  {
    out << "ld_point_pos_lgt: ";
    rosidl_generator_traits::value_to_yaml(msg.ld_point_pos_lgt, out);
    out << ", ";
  }

  // member: ld_point_pos_lat
  {
    out << "ld_point_pos_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.ld_point_pos_lat, out);
    out << ", ";
  }

  // member: pixel_points
  {
    if (msg.pixel_points.size() == 0) {
      out << "pixel_points: []";
    } else {
      out << "pixel_points: [";
      size_t pending_items = msg.pixel_points.size();
      for (auto item : msg.pixel_points) {
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
  const Crosswalk2d & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_id, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: lu_point_pos_lgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lu_point_pos_lgt: ";
    rosidl_generator_traits::value_to_yaml(msg.lu_point_pos_lgt, out);
    out << "\n";
  }

  // member: lu_point_pos_lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lu_point_pos_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lu_point_pos_lat, out);
    out << "\n";
  }

  // member: ru_point_pos_lgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ru_point_pos_lgt: ";
    rosidl_generator_traits::value_to_yaml(msg.ru_point_pos_lgt, out);
    out << "\n";
  }

  // member: ru_point_pos_lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ru_point_pos_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.ru_point_pos_lat, out);
    out << "\n";
  }

  // member: rd_point_pos_lgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rd_point_pos_lgt: ";
    rosidl_generator_traits::value_to_yaml(msg.rd_point_pos_lgt, out);
    out << "\n";
  }

  // member: rd_point_pos_lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rd_point_pos_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.rd_point_pos_lat, out);
    out << "\n";
  }

  // member: ld_point_pos_lgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ld_point_pos_lgt: ";
    rosidl_generator_traits::value_to_yaml(msg.ld_point_pos_lgt, out);
    out << "\n";
  }

  // member: ld_point_pos_lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ld_point_pos_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.ld_point_pos_lat, out);
    out << "\n";
  }

  // member: pixel_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pixel_points.size() == 0) {
      out << "pixel_points: []\n";
    } else {
      out << "pixel_points:\n";
      for (auto item : msg.pixel_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Crosswalk2d & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::Crosswalk2d & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::Crosswalk2d & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::Crosswalk2d>()
{
  return "deva_perception_msgs::msg::Crosswalk2d";
}

template<>
inline const char * name<deva_perception_msgs::msg::Crosswalk2d>()
{
  return "deva_perception_msgs/msg/Crosswalk2d";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::Crosswalk2d>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::Crosswalk2d>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::Crosswalk2d>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CROSSWALK2D__TRAITS_HPP_

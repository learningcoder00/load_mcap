// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/STBoundary.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ST_BOUNDARY__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ST_BOUNDARY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/st_boundary__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'equation_curves'
// Member 'extend_equation_curve'
#include "deva_common_msgs/msg/detail/equation_curve__traits.hpp"
// Member 'disperse_curve'
// Member 'extend_disperse_curve'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'lane_type'
#include "deva_perception_msgs/msg/detail/lane_type__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const STBoundary & msg,
  std::ostream & out)
{
  out << "{";
  // member: has_equation
  {
    out << "has_equation: ";
    rosidl_generator_traits::value_to_yaml(msg.has_equation, out);
    out << ", ";
  }

  // member: equation_curves
  {
    if (msg.equation_curves.size() == 0) {
      out << "equation_curves: []";
    } else {
      out << "equation_curves: [";
      size_t pending_items = msg.equation_curves.size();
      for (auto item : msg.equation_curves) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: has_disperse
  {
    out << "has_disperse: ";
    rosidl_generator_traits::value_to_yaml(msg.has_disperse, out);
    out << ", ";
  }

  // member: disperse_curve
  {
    if (msg.disperse_curve.size() == 0) {
      out << "disperse_curve: []";
    } else {
      out << "disperse_curve: [";
      size_t pending_items = msg.disperse_curve.size();
      for (auto item : msg.disperse_curve) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: has_extend_equation
  {
    out << "has_extend_equation: ";
    rosidl_generator_traits::value_to_yaml(msg.has_extend_equation, out);
    out << ", ";
  }

  // member: extend_equation_curve
  {
    out << "extend_equation_curve: ";
    to_flow_style_yaml(msg.extend_equation_curve, out);
    out << ", ";
  }

  // member: has_extend_disperse
  {
    out << "has_extend_disperse: ";
    rosidl_generator_traits::value_to_yaml(msg.has_extend_disperse, out);
    out << ", ";
  }

  // member: extend_disperse_curve
  {
    if (msg.extend_disperse_curve.size() == 0) {
      out << "extend_disperse_curve: []";
    } else {
      out << "extend_disperse_curve: [";
      size_t pending_items = msg.extend_disperse_curve.size();
      for (auto item : msg.extend_disperse_curve) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lane_type
  {
    if (msg.lane_type.size() == 0) {
      out << "lane_type: []";
    } else {
      out << "lane_type: [";
      size_t pending_items = msg.lane_type.size();
      for (auto item : msg.lane_type) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: left_id
  {
    out << "left_id: ";
    rosidl_generator_traits::value_to_yaml(msg.left_id, out);
    out << ", ";
  }

  // member: right_id
  {
    out << "right_id: ";
    rosidl_generator_traits::value_to_yaml(msg.right_id, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: reserve
  {
    out << "reserve: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve, out);
    out << ", ";
  }

  // member: global_track_id
  {
    out << "global_track_id: ";
    rosidl_generator_traits::value_to_yaml(msg.global_track_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const STBoundary & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: has_equation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_equation: ";
    rosidl_generator_traits::value_to_yaml(msg.has_equation, out);
    out << "\n";
  }

  // member: equation_curves
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.equation_curves.size() == 0) {
      out << "equation_curves: []\n";
    } else {
      out << "equation_curves:\n";
      for (auto item : msg.equation_curves) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: has_disperse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_disperse: ";
    rosidl_generator_traits::value_to_yaml(msg.has_disperse, out);
    out << "\n";
  }

  // member: disperse_curve
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.disperse_curve.size() == 0) {
      out << "disperse_curve: []\n";
    } else {
      out << "disperse_curve:\n";
      for (auto item : msg.disperse_curve) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: has_extend_equation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_extend_equation: ";
    rosidl_generator_traits::value_to_yaml(msg.has_extend_equation, out);
    out << "\n";
  }

  // member: extend_equation_curve
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extend_equation_curve:\n";
    to_block_style_yaml(msg.extend_equation_curve, out, indentation + 2);
  }

  // member: has_extend_disperse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_extend_disperse: ";
    rosidl_generator_traits::value_to_yaml(msg.has_extend_disperse, out);
    out << "\n";
  }

  // member: extend_disperse_curve
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.extend_disperse_curve.size() == 0) {
      out << "extend_disperse_curve: []\n";
    } else {
      out << "extend_disperse_curve:\n";
      for (auto item : msg.extend_disperse_curve) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: lane_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_type.size() == 0) {
      out << "lane_type: []\n";
    } else {
      out << "lane_type:\n";
      for (auto item : msg.lane_type) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: left_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_id: ";
    rosidl_generator_traits::value_to_yaml(msg.left_id, out);
    out << "\n";
  }

  // member: right_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_id: ";
    rosidl_generator_traits::value_to_yaml(msg.right_id, out);
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

  // member: reserve
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserve: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve, out);
    out << "\n";
  }

  // member: global_track_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_track_id: ";
    rosidl_generator_traits::value_to_yaml(msg.global_track_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const STBoundary & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::STBoundary & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::STBoundary & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::STBoundary>()
{
  return "deva_perception_msgs::msg::STBoundary";
}

template<>
inline const char * name<deva_perception_msgs::msg::STBoundary>()
{
  return "deva_perception_msgs/msg/STBoundary";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::STBoundary>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::STBoundary>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::STBoundary>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ST_BOUNDARY__TRAITS_HPP_

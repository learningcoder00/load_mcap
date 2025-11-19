// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/J6mRoadObject.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_ROAD_OBJECT__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_ROAD_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/j6m_road_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'road_object_id'
// Member 'referenced_lane_ids'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__traits.hpp"
// Member 'road_object_center_point'
// Member 'coordinates'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const J6mRoadObject & msg,
  std::ostream & out)
{
  out << "{";
  // member: road_object_id
  {
    out << "road_object_id: ";
    to_flow_style_yaml(msg.road_object_id, out);
    out << ", ";
  }

  // member: road_object_type
  {
    out << "road_object_type: ";
    rosidl_generator_traits::value_to_yaml(msg.road_object_type, out);
    out << ", ";
  }

  // member: road_object_subtype
  {
    out << "road_object_subtype: ";
    rosidl_generator_traits::value_to_yaml(msg.road_object_subtype, out);
    out << ", ";
  }

  // member: road_object_center_point
  {
    out << "road_object_center_point: ";
    to_flow_style_yaml(msg.road_object_center_point, out);
    out << ", ";
  }

  // member: road_object_heading
  {
    out << "road_object_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.road_object_heading, out);
    out << ", ";
  }

  // member: road_attributes
  {
    out << "road_attributes: ";
    rosidl_generator_traits::value_to_yaml(msg.road_attributes, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: offset
  {
    out << "offset: ";
    rosidl_generator_traits::value_to_yaml(msg.offset, out);
    out << ", ";
  }

  // member: coordinates
  {
    if (msg.coordinates.size() == 0) {
      out << "coordinates: []";
    } else {
      out << "coordinates: [";
      size_t pending_items = msg.coordinates.size();
      for (auto item : msg.coordinates) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: referenced_lane_ids
  {
    if (msg.referenced_lane_ids.size() == 0) {
      out << "referenced_lane_ids: []";
    } else {
      out << "referenced_lane_ids: [";
      size_t pending_items = msg.referenced_lane_ids.size();
      for (auto item : msg.referenced_lane_ids) {
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
  const J6mRoadObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: road_object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_object_id:\n";
    to_block_style_yaml(msg.road_object_id, out, indentation + 2);
  }

  // member: road_object_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_object_type: ";
    rosidl_generator_traits::value_to_yaml(msg.road_object_type, out);
    out << "\n";
  }

  // member: road_object_subtype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_object_subtype: ";
    rosidl_generator_traits::value_to_yaml(msg.road_object_subtype, out);
    out << "\n";
  }

  // member: road_object_center_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_object_center_point:\n";
    to_block_style_yaml(msg.road_object_center_point, out, indentation + 2);
  }

  // member: road_object_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_object_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.road_object_heading, out);
    out << "\n";
  }

  // member: road_attributes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_attributes: ";
    rosidl_generator_traits::value_to_yaml(msg.road_attributes, out);
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

  // member: offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset: ";
    rosidl_generator_traits::value_to_yaml(msg.offset, out);
    out << "\n";
  }

  // member: coordinates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coordinates.size() == 0) {
      out << "coordinates: []\n";
    } else {
      out << "coordinates:\n";
      for (auto item : msg.coordinates) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: referenced_lane_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.referenced_lane_ids.size() == 0) {
      out << "referenced_lane_ids: []\n";
    } else {
      out << "referenced_lane_ids:\n";
      for (auto item : msg.referenced_lane_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const J6mRoadObject & msg, bool use_flow_style = false)
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

}  // namespace deva_gaode_routing_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_gaode_routing_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_gaode_routing_msgs::msg::J6mRoadObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::J6mRoadObject & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::J6mRoadObject>()
{
  return "deva_gaode_routing_msgs::msg::J6mRoadObject";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::J6mRoadObject>()
{
  return "deva_gaode_routing_msgs/msg/J6mRoadObject";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::J6mRoadObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::J6mRoadObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::J6mRoadObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_ROAD_OBJECT__TRAITS_HPP_

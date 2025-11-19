// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_mdriver_msgs:msg/CenterLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINE__TRAITS_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_mdriver_msgs/msg/detail/center_line__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pts'
#include "deva_mdriver_msgs/msg/detail/center_line_point__traits.hpp"

namespace deva_mdriver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CenterLine & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: pts
  {
    if (msg.pts.size() == 0) {
      out << "pts: []";
    } else {
      out << "pts: [";
      size_t pending_items = msg.pts.size();
      for (auto item : msg.pts) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pre_ids
  {
    if (msg.pre_ids.size() == 0) {
      out << "pre_ids: []";
    } else {
      out << "pre_ids: [";
      size_t pending_items = msg.pre_ids.size();
      for (auto item : msg.pre_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: suc_ids
  {
    if (msg.suc_ids.size() == 0) {
      out << "suc_ids: []";
    } else {
      out << "suc_ids: [";
      size_t pending_items = msg.suc_ids.size();
      for (auto item : msg.suc_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left_line_attr
  {
    out << "left_line_attr: ";
    rosidl_generator_traits::value_to_yaml(msg.left_line_attr, out);
    out << ", ";
  }

  // member: right_line_attr
  {
    out << "right_line_attr: ";
    rosidl_generator_traits::value_to_yaml(msg.right_line_attr, out);
    out << ", ";
  }

  // member: left_line_dist
  {
    out << "left_line_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.left_line_dist, out);
    out << ", ";
  }

  // member: right_line_dist
  {
    out << "right_line_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.right_line_dist, out);
    out << ", ";
  }

  // member: traffic_elem_ids
  {
    if (msg.traffic_elem_ids.size() == 0) {
      out << "traffic_elem_ids: []";
    } else {
      out << "traffic_elem_ids: [";
      size_t pending_items = msg.traffic_elem_ids.size();
      for (auto item : msg.traffic_elem_ids) {
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
  const CenterLine & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: pts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pts.size() == 0) {
      out << "pts: []\n";
    } else {
      out << "pts:\n";
      for (auto item : msg.pts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: pre_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pre_ids.size() == 0) {
      out << "pre_ids: []\n";
    } else {
      out << "pre_ids:\n";
      for (auto item : msg.pre_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: suc_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.suc_ids.size() == 0) {
      out << "suc_ids: []\n";
    } else {
      out << "suc_ids:\n";
      for (auto item : msg.suc_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: left_line_attr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_line_attr: ";
    rosidl_generator_traits::value_to_yaml(msg.left_line_attr, out);
    out << "\n";
  }

  // member: right_line_attr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_line_attr: ";
    rosidl_generator_traits::value_to_yaml(msg.right_line_attr, out);
    out << "\n";
  }

  // member: left_line_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_line_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.left_line_dist, out);
    out << "\n";
  }

  // member: right_line_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_line_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.right_line_dist, out);
    out << "\n";
  }

  // member: traffic_elem_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.traffic_elem_ids.size() == 0) {
      out << "traffic_elem_ids: []\n";
    } else {
      out << "traffic_elem_ids:\n";
      for (auto item : msg.traffic_elem_ids) {
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

inline std::string to_yaml(const CenterLine & msg, bool use_flow_style = false)
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
  const deva_mdriver_msgs::msg::CenterLine & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_mdriver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_mdriver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_mdriver_msgs::msg::CenterLine & msg)
{
  return deva_mdriver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_mdriver_msgs::msg::CenterLine>()
{
  return "deva_mdriver_msgs::msg::CenterLine";
}

template<>
inline const char * name<deva_mdriver_msgs::msg::CenterLine>()
{
  return "deva_mdriver_msgs/msg/CenterLine";
}

template<>
struct has_fixed_size<deva_mdriver_msgs::msg::CenterLine>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_mdriver_msgs::msg::CenterLine>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_mdriver_msgs::msg::CenterLine>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINE__TRAITS_HPP_

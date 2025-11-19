// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/SFFusionTSListNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TS_LIST_NOA__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TS_LIST_NOA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/sf_fusion_ts_list_noa__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'trafficsign'
// Member 'trafficsign_all'
#include "deva_perception_msgs/msg/detail/sf_fusion_tsnoa__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFFusionTSListNOA & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: framenum
  {
    out << "framenum: ";
    rosidl_generator_traits::value_to_yaml(msg.framenum, out);
    out << ", ";
  }

  // member: reversed
  {
    if (msg.reversed.size() == 0) {
      out << "reversed: []";
    } else {
      out << "reversed: [";
      size_t pending_items = msg.reversed.size();
      for (auto item : msg.reversed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: trafficsign
  {
    if (msg.trafficsign.size() == 0) {
      out << "trafficsign: []";
    } else {
      out << "trafficsign: [";
      size_t pending_items = msg.trafficsign.size();
      for (auto item : msg.trafficsign) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: validsize
  {
    out << "validsize: ";
    rosidl_generator_traits::value_to_yaml(msg.validsize, out);
    out << ", ";
  }

  // member: trafficsign_all
  {
    if (msg.trafficsign_all.size() == 0) {
      out << "trafficsign_all: []";
    } else {
      out << "trafficsign_all: [";
      size_t pending_items = msg.trafficsign_all.size();
      for (auto item : msg.trafficsign_all) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: all_validsize
  {
    out << "all_validsize: ";
    rosidl_generator_traits::value_to_yaml(msg.all_validsize, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SFFusionTSListNOA & msg,
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

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: framenum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "framenum: ";
    rosidl_generator_traits::value_to_yaml(msg.framenum, out);
    out << "\n";
  }

  // member: reversed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reversed.size() == 0) {
      out << "reversed: []\n";
    } else {
      out << "reversed:\n";
      for (auto item : msg.reversed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: trafficsign
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trafficsign.size() == 0) {
      out << "trafficsign: []\n";
    } else {
      out << "trafficsign:\n";
      for (auto item : msg.trafficsign) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: validsize
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "validsize: ";
    rosidl_generator_traits::value_to_yaml(msg.validsize, out);
    out << "\n";
  }

  // member: trafficsign_all
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trafficsign_all.size() == 0) {
      out << "trafficsign_all: []\n";
    } else {
      out << "trafficsign_all:\n";
      for (auto item : msg.trafficsign_all) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: all_validsize
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all_validsize: ";
    rosidl_generator_traits::value_to_yaml(msg.all_validsize, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFFusionTSListNOA & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::SFFusionTSListNOA & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::SFFusionTSListNOA & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::SFFusionTSListNOA>()
{
  return "deva_perception_msgs::msg::SFFusionTSListNOA";
}

template<>
inline const char * name<deva_perception_msgs::msg::SFFusionTSListNOA>()
{
  return "deva_perception_msgs/msg/SFFusionTSListNOA";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::SFFusionTSListNOA>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::SFFusionTSListNOA>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::SFFusionTSListNOA>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TS_LIST_NOA__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_navi_msgs:msg/RestrictionInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__RESTRICTION_INFO_PROTO__TRAITS_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__RESTRICTION_INFO_PROTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_navi_msgs/msg/detail/restriction_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_navi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RestrictionInfoProto & msg,
  std::ostream & out)
{
  out << "{";
  // member: title
  {
    out << "title: ";
    rosidl_generator_traits::value_to_yaml(msg.title, out);
    out << ", ";
  }

  // member: desc
  {
    out << "desc: ";
    rosidl_generator_traits::value_to_yaml(msg.desc, out);
    out << ", ";
  }

  // member: tipc
  {
    out << "tipc: ";
    rosidl_generator_traits::value_to_yaml(msg.tipc, out);
    out << ", ";
  }

  // member: city_code
  {
    out << "city_code: ";
    rosidl_generator_traits::value_to_yaml(msg.city_code, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: title_type
  {
    out << "title_type: ";
    rosidl_generator_traits::value_to_yaml(msg.title_type, out);
    out << ", ";
  }

  // member: rule_ids
  {
    if (msg.rule_ids.size() == 0) {
      out << "rule_ids: []";
    } else {
      out << "rule_ids: [";
      size_t pending_items = msg.rule_ids.size();
      for (auto item : msg.rule_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tail_nums
  {
    if (msg.tail_nums.size() == 0) {
      out << "tail_nums: []";
    } else {
      out << "tail_nums: [";
      size_t pending_items = msg.tail_nums.size();
      for (auto item : msg.tail_nums) {
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
  const RestrictionInfoProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: title
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "title: ";
    rosidl_generator_traits::value_to_yaml(msg.title, out);
    out << "\n";
  }

  // member: desc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desc: ";
    rosidl_generator_traits::value_to_yaml(msg.desc, out);
    out << "\n";
  }

  // member: tipc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tipc: ";
    rosidl_generator_traits::value_to_yaml(msg.tipc, out);
    out << "\n";
  }

  // member: city_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "city_code: ";
    rosidl_generator_traits::value_to_yaml(msg.city_code, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: title_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "title_type: ";
    rosidl_generator_traits::value_to_yaml(msg.title_type, out);
    out << "\n";
  }

  // member: rule_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rule_ids.size() == 0) {
      out << "rule_ids: []\n";
    } else {
      out << "rule_ids:\n";
      for (auto item : msg.rule_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tail_nums
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tail_nums.size() == 0) {
      out << "tail_nums: []\n";
    } else {
      out << "tail_nums:\n";
      for (auto item : msg.tail_nums) {
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

inline std::string to_yaml(const RestrictionInfoProto & msg, bool use_flow_style = false)
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

}  // namespace deva_navi_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_navi_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_navi_msgs::msg::RestrictionInfoProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_navi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_navi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_navi_msgs::msg::RestrictionInfoProto & msg)
{
  return deva_navi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_navi_msgs::msg::RestrictionInfoProto>()
{
  return "deva_navi_msgs::msg::RestrictionInfoProto";
}

template<>
inline const char * name<deva_navi_msgs::msg::RestrictionInfoProto>()
{
  return "deva_navi_msgs/msg/RestrictionInfoProto";
}

template<>
struct has_fixed_size<deva_navi_msgs::msg::RestrictionInfoProto>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_navi_msgs::msg::RestrictionInfoProto>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_navi_msgs::msg::RestrictionInfoProto>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__RESTRICTION_INFO_PROTO__TRAITS_HPP_

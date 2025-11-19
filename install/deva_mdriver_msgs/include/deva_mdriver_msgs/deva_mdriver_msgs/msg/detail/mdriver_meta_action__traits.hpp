// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_mdriver_msgs:msg/MdriverMetaAction.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_META_ACTION__TRAITS_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_META_ACTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_mdriver_msgs/msg/detail/mdriver_meta_action__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_mdriver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MdriverMetaAction & msg,
  std::ostream & out)
{
  out << "{";
  // member: best_mdriver_meta_action
  {
    out << "best_mdriver_meta_action: ";
    rosidl_generator_traits::value_to_yaml(msg.best_mdriver_meta_action, out);
    out << ", ";
  }

  // member: score
  {
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << ", ";
  }

  // member: logits
  {
    if (msg.logits.size() == 0) {
      out << "logits: []";
    } else {
      out << "logits: [";
      size_t pending_items = msg.logits.size();
      for (auto item : msg.logits) {
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
  const MdriverMetaAction & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: best_mdriver_meta_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "best_mdriver_meta_action: ";
    rosidl_generator_traits::value_to_yaml(msg.best_mdriver_meta_action, out);
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

  // member: logits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.logits.size() == 0) {
      out << "logits: []\n";
    } else {
      out << "logits:\n";
      for (auto item : msg.logits) {
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

inline std::string to_yaml(const MdriverMetaAction & msg, bool use_flow_style = false)
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
  const deva_mdriver_msgs::msg::MdriverMetaAction & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_mdriver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_mdriver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_mdriver_msgs::msg::MdriverMetaAction & msg)
{
  return deva_mdriver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_mdriver_msgs::msg::MdriverMetaAction>()
{
  return "deva_mdriver_msgs::msg::MdriverMetaAction";
}

template<>
inline const char * name<deva_mdriver_msgs::msg::MdriverMetaAction>()
{
  return "deva_mdriver_msgs/msg/MdriverMetaAction";
}

template<>
struct has_fixed_size<deva_mdriver_msgs::msg::MdriverMetaAction>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_mdriver_msgs::msg::MdriverMetaAction>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_mdriver_msgs::msg::MdriverMetaAction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_META_ACTION__TRAITS_HPP_

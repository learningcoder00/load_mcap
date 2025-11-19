// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/TrafficObject.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_OBJECT__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/traffic_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'region'
// Member 'new_h_region'
// Member 'bind_ramp_region'
#include "deva_perception_msgs/msg/detail/traffic_region__traits.hpp"
// Member 'status'
#include "deva_perception_msgs/msg/detail/traffic_status__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficObject & msg,
  std::ostream & out)
{
  out << "{";
  // member: class_idx
  {
    out << "class_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.class_idx, out);
    out << ", ";
  }

  // member: det_is_focus_light
  {
    out << "det_is_focus_light: ";
    rosidl_generator_traits::value_to_yaml(msg.det_is_focus_light, out);
    out << ", ";
  }

  // member: sign_appx_type
  {
    out << "sign_appx_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sign_appx_type, out);
    out << ", ";
  }

  // member: region
  {
    out << "region: ";
    to_flow_style_yaml(msg.region, out);
    out << ", ";
  }

  // member: new_h_region
  {
    out << "new_h_region: ";
    to_flow_style_yaml(msg.new_h_region, out);
    out << ", ";
  }

  // member: status
  {
    if (msg.status.size() == 0) {
      out << "status: []";
    } else {
      out << "status: [";
      size_t pending_items = msg.status.size();
      for (auto item : msg.status) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: f120_ori_color
  {
    out << "f120_ori_color: ";
    rosidl_generator_traits::value_to_yaml(msg.f120_ori_color, out);
    out << ", ";
  }

  // member: f120_ori_color_light_type
  {
    out << "f120_ori_color_light_type: ";
    rosidl_generator_traits::value_to_yaml(msg.f120_ori_color_light_type, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << ", ";
  }

  // member: origin_color
  {
    out << "origin_color: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_color, out);
    out << ", ";
  }

  // member: light_type
  {
    out << "light_type: ";
    rosidl_generator_traits::value_to_yaml(msg.light_type, out);
    out << ", ";
  }

  // member: origin_light_type
  {
    out << "origin_light_type: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_light_type, out);
    out << ", ";
  }

  // member: count_down
  {
    out << "count_down: ";
    rosidl_generator_traits::value_to_yaml(msg.count_down, out);
    out << ", ";
  }

  // member: orig_count_down
  {
    out << "orig_count_down: ";
    rosidl_generator_traits::value_to_yaml(msg.orig_count_down, out);
    out << ", ";
  }

  // member: has_count_down
  {
    out << "has_count_down: ";
    rosidl_generator_traits::value_to_yaml(msg.has_count_down, out);
    out << ", ";
  }

  // member: ori_has_count_down
  {
    out << "ori_has_count_down: ";
    rosidl_generator_traits::value_to_yaml(msg.ori_has_count_down, out);
    out << ", ";
  }

  // member: f120_origin_sign_type
  {
    out << "f120_origin_sign_type: ";
    rosidl_generator_traits::value_to_yaml(msg.f120_origin_sign_type, out);
    out << ", ";
  }

  // member: origin_sign_type
  {
    out << "origin_sign_type: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_sign_type, out);
    out << ", ";
  }

  // member: sign_type
  {
    out << "sign_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sign_type, out);
    out << ", ";
  }

  // member: sign_confidence
  {
    out << "sign_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.sign_confidence, out);
    out << ", ";
  }

  // member: digit_confidence
  {
    out << "digit_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.digit_confidence, out);
    out << ", ";
  }

  // member: digit_type
  {
    out << "digit_type: ";
    rosidl_generator_traits::value_to_yaml(msg.digit_type, out);
    out << ", ";
  }

  // member: digit_class_idx
  {
    out << "digit_class_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.digit_class_idx, out);
    out << ", ";
  }

  // member: ego_x
  {
    out << "ego_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ego_x, out);
    out << ", ";
  }

  // member: ego_y
  {
    out << "ego_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ego_y, out);
    out << ", ";
  }

  // member: ego_z
  {
    out << "ego_z: ";
    rosidl_generator_traits::value_to_yaml(msg.ego_z, out);
    out << ", ";
  }

  // member: ramp_confidence
  {
    out << "ramp_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.ramp_confidence, out);
    out << ", ";
  }

  // member: is_ramp
  {
    out << "is_ramp: ";
    rosidl_generator_traits::value_to_yaml(msg.is_ramp, out);
    out << ", ";
  }

  // member: origin_is_ramp
  {
    out << "origin_is_ramp: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_is_ramp, out);
    out << ", ";
  }

  // member: is_ramp_from_41
  {
    out << "is_ramp_from_41: ";
    rosidl_generator_traits::value_to_yaml(msg.is_ramp_from_41, out);
    out << ", ";
  }

  // member: is_ramp_double_checked
  {
    out << "is_ramp_double_checked: ";
    rosidl_generator_traits::value_to_yaml(msg.is_ramp_double_checked, out);
    out << ", ";
  }

  // member: pole
  {
    out << "pole: ";
    rosidl_generator_traits::value_to_yaml(msg.pole, out);
    out << ", ";
  }

  // member: is_rechecked_ramp
  {
    out << "is_rechecked_ramp: ";
    rosidl_generator_traits::value_to_yaml(msg.is_rechecked_ramp, out);
    out << ", ";
  }

  // member: rechecked_ramp_score
  {
    out << "rechecked_ramp_score: ";
    rosidl_generator_traits::value_to_yaml(msg.rechecked_ramp_score, out);
    out << ", ";
  }

  // member: bind_ramp_region
  {
    out << "bind_ramp_region: ";
    to_flow_style_yaml(msg.bind_ramp_region, out);
    out << ", ";
  }

  // member: ego_x_out
  {
    out << "ego_x_out: ";
    rosidl_generator_traits::value_to_yaml(msg.ego_x_out, out);
    out << ", ";
  }

  // member: is_recheck_result
  {
    out << "is_recheck_result: ";
    rosidl_generator_traits::value_to_yaml(msg.is_recheck_result, out);
    out << ", ";
  }

  // member: model_depth
  {
    out << "model_depth: ";
    rosidl_generator_traits::value_to_yaml(msg.model_depth, out);
    out << ", ";
  }

  // member: tl_oriention
  {
    out << "tl_oriention: ";
    rosidl_generator_traits::value_to_yaml(msg.tl_oriention, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: class_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.class_idx, out);
    out << "\n";
  }

  // member: det_is_focus_light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "det_is_focus_light: ";
    rosidl_generator_traits::value_to_yaml(msg.det_is_focus_light, out);
    out << "\n";
  }

  // member: sign_appx_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sign_appx_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sign_appx_type, out);
    out << "\n";
  }

  // member: region
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "region:\n";
    to_block_style_yaml(msg.region, out, indentation + 2);
  }

  // member: new_h_region
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_h_region:\n";
    to_block_style_yaml(msg.new_h_region, out, indentation + 2);
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status.size() == 0) {
      out << "status: []\n";
    } else {
      out << "status:\n";
      for (auto item : msg.status) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: f120_ori_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f120_ori_color: ";
    rosidl_generator_traits::value_to_yaml(msg.f120_ori_color, out);
    out << "\n";
  }

  // member: f120_ori_color_light_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f120_ori_color_light_type: ";
    rosidl_generator_traits::value_to_yaml(msg.f120_ori_color_light_type, out);
    out << "\n";
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << "\n";
  }

  // member: origin_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_color: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_color, out);
    out << "\n";
  }

  // member: light_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_type: ";
    rosidl_generator_traits::value_to_yaml(msg.light_type, out);
    out << "\n";
  }

  // member: origin_light_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_light_type: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_light_type, out);
    out << "\n";
  }

  // member: count_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count_down: ";
    rosidl_generator_traits::value_to_yaml(msg.count_down, out);
    out << "\n";
  }

  // member: orig_count_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orig_count_down: ";
    rosidl_generator_traits::value_to_yaml(msg.orig_count_down, out);
    out << "\n";
  }

  // member: has_count_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_count_down: ";
    rosidl_generator_traits::value_to_yaml(msg.has_count_down, out);
    out << "\n";
  }

  // member: ori_has_count_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ori_has_count_down: ";
    rosidl_generator_traits::value_to_yaml(msg.ori_has_count_down, out);
    out << "\n";
  }

  // member: f120_origin_sign_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f120_origin_sign_type: ";
    rosidl_generator_traits::value_to_yaml(msg.f120_origin_sign_type, out);
    out << "\n";
  }

  // member: origin_sign_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_sign_type: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_sign_type, out);
    out << "\n";
  }

  // member: sign_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sign_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sign_type, out);
    out << "\n";
  }

  // member: sign_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sign_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.sign_confidence, out);
    out << "\n";
  }

  // member: digit_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "digit_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.digit_confidence, out);
    out << "\n";
  }

  // member: digit_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "digit_type: ";
    rosidl_generator_traits::value_to_yaml(msg.digit_type, out);
    out << "\n";
  }

  // member: digit_class_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "digit_class_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.digit_class_idx, out);
    out << "\n";
  }

  // member: ego_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ego_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ego_x, out);
    out << "\n";
  }

  // member: ego_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ego_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ego_y, out);
    out << "\n";
  }

  // member: ego_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ego_z: ";
    rosidl_generator_traits::value_to_yaml(msg.ego_z, out);
    out << "\n";
  }

  // member: ramp_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ramp_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.ramp_confidence, out);
    out << "\n";
  }

  // member: is_ramp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_ramp: ";
    rosidl_generator_traits::value_to_yaml(msg.is_ramp, out);
    out << "\n";
  }

  // member: origin_is_ramp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_is_ramp: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_is_ramp, out);
    out << "\n";
  }

  // member: is_ramp_from_41
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_ramp_from_41: ";
    rosidl_generator_traits::value_to_yaml(msg.is_ramp_from_41, out);
    out << "\n";
  }

  // member: is_ramp_double_checked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_ramp_double_checked: ";
    rosidl_generator_traits::value_to_yaml(msg.is_ramp_double_checked, out);
    out << "\n";
  }

  // member: pole
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pole: ";
    rosidl_generator_traits::value_to_yaml(msg.pole, out);
    out << "\n";
  }

  // member: is_rechecked_ramp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_rechecked_ramp: ";
    rosidl_generator_traits::value_to_yaml(msg.is_rechecked_ramp, out);
    out << "\n";
  }

  // member: rechecked_ramp_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rechecked_ramp_score: ";
    rosidl_generator_traits::value_to_yaml(msg.rechecked_ramp_score, out);
    out << "\n";
  }

  // member: bind_ramp_region
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bind_ramp_region:\n";
    to_block_style_yaml(msg.bind_ramp_region, out, indentation + 2);
  }

  // member: ego_x_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ego_x_out: ";
    rosidl_generator_traits::value_to_yaml(msg.ego_x_out, out);
    out << "\n";
  }

  // member: is_recheck_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_recheck_result: ";
    rosidl_generator_traits::value_to_yaml(msg.is_recheck_result, out);
    out << "\n";
  }

  // member: model_depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_depth: ";
    rosidl_generator_traits::value_to_yaml(msg.model_depth, out);
    out << "\n";
  }

  // member: tl_oriention
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tl_oriention: ";
    rosidl_generator_traits::value_to_yaml(msg.tl_oriention, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficObject & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::TrafficObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::TrafficObject & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::TrafficObject>()
{
  return "deva_perception_msgs::msg::TrafficObject";
}

template<>
inline const char * name<deva_perception_msgs::msg::TrafficObject>()
{
  return "deva_perception_msgs/msg/TrafficObject";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::TrafficObject>
  : std::integral_constant<bool, has_fixed_size<deva_perception_msgs::msg::TrafficRegion>::value && has_fixed_size<deva_perception_msgs::msg::TrafficStatus>::value> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::TrafficObject>
  : std::integral_constant<bool, has_bounded_size<deva_perception_msgs::msg::TrafficRegion>::value && has_bounded_size<deva_perception_msgs::msg::TrafficStatus>::value> {};

template<>
struct is_message<deva_perception_msgs::msg::TrafficObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_OBJECT__TRAITS_HPP_

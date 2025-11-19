// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_perception_msgs:msg/TrafficObject.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/traffic_object__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_perception_msgs/msg/detail/traffic_object__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace deva_perception_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_perception_msgs::msg::TrafficRegion &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_perception_msgs::msg::TrafficRegion &);
size_t get_serialized_size(
  const deva_perception_msgs::msg::TrafficRegion &,
  size_t current_alignment);
size_t
max_serialized_size_TrafficRegion(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_perception_msgs

// functions for deva_perception_msgs::msg::TrafficRegion already declared above

namespace deva_perception_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_perception_msgs::msg::TrafficStatus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_perception_msgs::msg::TrafficStatus &);
size_t get_serialized_size(
  const deva_perception_msgs::msg::TrafficStatus &,
  size_t current_alignment);
size_t
max_serialized_size_TrafficStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_perception_msgs

// functions for deva_perception_msgs::msg::TrafficRegion already declared above


namespace deva_perception_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_perception_msgs
cdr_serialize(
  const deva_perception_msgs::msg::TrafficObject & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: class_idx
  cdr << ros_message.class_idx;
  // Member: det_is_focus_light
  cdr << (ros_message.det_is_focus_light ? true : false);
  // Member: sign_appx_type
  cdr << ros_message.sign_appx_type;
  // Member: region
  deva_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.region,
    cdr);
  // Member: new_h_region
  deva_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.new_h_region,
    cdr);
  // Member: status
  {
    for (size_t i = 0; i < 4; i++) {
      deva_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.status[i],
        cdr);
    }
  }
  // Member: f120_ori_color
  cdr << ros_message.f120_ori_color;
  // Member: f120_ori_color_light_type
  cdr << ros_message.f120_ori_color_light_type;
  // Member: color
  cdr << ros_message.color;
  // Member: origin_color
  cdr << ros_message.origin_color;
  // Member: light_type
  cdr << ros_message.light_type;
  // Member: origin_light_type
  cdr << ros_message.origin_light_type;
  // Member: count_down
  cdr << ros_message.count_down;
  // Member: orig_count_down
  cdr << ros_message.orig_count_down;
  // Member: has_count_down
  cdr << (ros_message.has_count_down ? true : false);
  // Member: ori_has_count_down
  cdr << (ros_message.ori_has_count_down ? true : false);
  // Member: f120_origin_sign_type
  cdr << ros_message.f120_origin_sign_type;
  // Member: origin_sign_type
  cdr << ros_message.origin_sign_type;
  // Member: sign_type
  cdr << ros_message.sign_type;
  // Member: sign_confidence
  cdr << ros_message.sign_confidence;
  // Member: digit_confidence
  cdr << ros_message.digit_confidence;
  // Member: digit_type
  cdr << ros_message.digit_type;
  // Member: digit_class_idx
  cdr << ros_message.digit_class_idx;
  // Member: ego_x
  cdr << ros_message.ego_x;
  // Member: ego_y
  cdr << ros_message.ego_y;
  // Member: ego_z
  cdr << ros_message.ego_z;
  // Member: ramp_confidence
  cdr << ros_message.ramp_confidence;
  // Member: is_ramp
  cdr << (ros_message.is_ramp ? true : false);
  // Member: origin_is_ramp
  cdr << (ros_message.origin_is_ramp ? true : false);
  // Member: is_ramp_from_41
  cdr << (ros_message.is_ramp_from_41 ? true : false);
  // Member: is_ramp_double_checked
  cdr << (ros_message.is_ramp_double_checked ? true : false);
  // Member: pole
  cdr << ros_message.pole;
  // Member: is_rechecked_ramp
  cdr << (ros_message.is_rechecked_ramp ? true : false);
  // Member: rechecked_ramp_score
  cdr << ros_message.rechecked_ramp_score;
  // Member: bind_ramp_region
  deva_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.bind_ramp_region,
    cdr);
  // Member: ego_x_out
  cdr << ros_message.ego_x_out;
  // Member: is_recheck_result
  cdr << (ros_message.is_recheck_result ? true : false);
  // Member: model_depth
  cdr << ros_message.model_depth;
  // Member: tl_oriention
  cdr << ros_message.tl_oriention;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_perception_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_perception_msgs::msg::TrafficObject & ros_message)
{
  // Member: class_idx
  cdr >> ros_message.class_idx;

  // Member: det_is_focus_light
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.det_is_focus_light = tmp ? true : false;
  }

  // Member: sign_appx_type
  cdr >> ros_message.sign_appx_type;

  // Member: region
  deva_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.region);

  // Member: new_h_region
  deva_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.new_h_region);

  // Member: status
  {
    for (size_t i = 0; i < 4; i++) {
      deva_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.status[i]);
    }
  }

  // Member: f120_ori_color
  cdr >> ros_message.f120_ori_color;

  // Member: f120_ori_color_light_type
  cdr >> ros_message.f120_ori_color_light_type;

  // Member: color
  cdr >> ros_message.color;

  // Member: origin_color
  cdr >> ros_message.origin_color;

  // Member: light_type
  cdr >> ros_message.light_type;

  // Member: origin_light_type
  cdr >> ros_message.origin_light_type;

  // Member: count_down
  cdr >> ros_message.count_down;

  // Member: orig_count_down
  cdr >> ros_message.orig_count_down;

  // Member: has_count_down
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_count_down = tmp ? true : false;
  }

  // Member: ori_has_count_down
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ori_has_count_down = tmp ? true : false;
  }

  // Member: f120_origin_sign_type
  cdr >> ros_message.f120_origin_sign_type;

  // Member: origin_sign_type
  cdr >> ros_message.origin_sign_type;

  // Member: sign_type
  cdr >> ros_message.sign_type;

  // Member: sign_confidence
  cdr >> ros_message.sign_confidence;

  // Member: digit_confidence
  cdr >> ros_message.digit_confidence;

  // Member: digit_type
  cdr >> ros_message.digit_type;

  // Member: digit_class_idx
  cdr >> ros_message.digit_class_idx;

  // Member: ego_x
  cdr >> ros_message.ego_x;

  // Member: ego_y
  cdr >> ros_message.ego_y;

  // Member: ego_z
  cdr >> ros_message.ego_z;

  // Member: ramp_confidence
  cdr >> ros_message.ramp_confidence;

  // Member: is_ramp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_ramp = tmp ? true : false;
  }

  // Member: origin_is_ramp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.origin_is_ramp = tmp ? true : false;
  }

  // Member: is_ramp_from_41
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_ramp_from_41 = tmp ? true : false;
  }

  // Member: is_ramp_double_checked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_ramp_double_checked = tmp ? true : false;
  }

  // Member: pole
  cdr >> ros_message.pole;

  // Member: is_rechecked_ramp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_rechecked_ramp = tmp ? true : false;
  }

  // Member: rechecked_ramp_score
  cdr >> ros_message.rechecked_ramp_score;

  // Member: bind_ramp_region
  deva_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.bind_ramp_region);

  // Member: ego_x_out
  cdr >> ros_message.ego_x_out;

  // Member: is_recheck_result
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_recheck_result = tmp ? true : false;
  }

  // Member: model_depth
  cdr >> ros_message.model_depth;

  // Member: tl_oriention
  cdr >> ros_message.tl_oriention;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_perception_msgs
get_serialized_size(
  const deva_perception_msgs::msg::TrafficObject & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: class_idx
  {
    size_t item_size = sizeof(ros_message.class_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: det_is_focus_light
  {
    size_t item_size = sizeof(ros_message.det_is_focus_light);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sign_appx_type
  {
    size_t item_size = sizeof(ros_message.sign_appx_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: region

  current_alignment +=
    deva_perception_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.region, current_alignment);
  // Member: new_h_region

  current_alignment +=
    deva_perception_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.new_h_region, current_alignment);
  // Member: status
  {
    size_t array_size = 4;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_perception_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.status[index], current_alignment);
    }
  }
  // Member: f120_ori_color
  {
    size_t item_size = sizeof(ros_message.f120_ori_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f120_ori_color_light_type
  {
    size_t item_size = sizeof(ros_message.f120_ori_color_light_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: color
  {
    size_t item_size = sizeof(ros_message.color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: origin_color
  {
    size_t item_size = sizeof(ros_message.origin_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: light_type
  {
    size_t item_size = sizeof(ros_message.light_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: origin_light_type
  {
    size_t item_size = sizeof(ros_message.origin_light_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: count_down
  {
    size_t item_size = sizeof(ros_message.count_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: orig_count_down
  {
    size_t item_size = sizeof(ros_message.orig_count_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: has_count_down
  {
    size_t item_size = sizeof(ros_message.has_count_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ori_has_count_down
  {
    size_t item_size = sizeof(ros_message.ori_has_count_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f120_origin_sign_type
  {
    size_t item_size = sizeof(ros_message.f120_origin_sign_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: origin_sign_type
  {
    size_t item_size = sizeof(ros_message.origin_sign_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sign_type
  {
    size_t item_size = sizeof(ros_message.sign_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sign_confidence
  {
    size_t item_size = sizeof(ros_message.sign_confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: digit_confidence
  {
    size_t item_size = sizeof(ros_message.digit_confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: digit_type
  {
    size_t item_size = sizeof(ros_message.digit_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: digit_class_idx
  {
    size_t item_size = sizeof(ros_message.digit_class_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ego_x
  {
    size_t item_size = sizeof(ros_message.ego_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ego_y
  {
    size_t item_size = sizeof(ros_message.ego_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ego_z
  {
    size_t item_size = sizeof(ros_message.ego_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ramp_confidence
  {
    size_t item_size = sizeof(ros_message.ramp_confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_ramp
  {
    size_t item_size = sizeof(ros_message.is_ramp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: origin_is_ramp
  {
    size_t item_size = sizeof(ros_message.origin_is_ramp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_ramp_from_41
  {
    size_t item_size = sizeof(ros_message.is_ramp_from_41);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_ramp_double_checked
  {
    size_t item_size = sizeof(ros_message.is_ramp_double_checked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pole
  {
    size_t item_size = sizeof(ros_message.pole);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_rechecked_ramp
  {
    size_t item_size = sizeof(ros_message.is_rechecked_ramp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rechecked_ramp_score
  {
    size_t item_size = sizeof(ros_message.rechecked_ramp_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bind_ramp_region

  current_alignment +=
    deva_perception_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.bind_ramp_region, current_alignment);
  // Member: ego_x_out
  {
    size_t item_size = sizeof(ros_message.ego_x_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_recheck_result
  {
    size_t item_size = sizeof(ros_message.is_recheck_result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: model_depth
  {
    size_t item_size = sizeof(ros_message.model_depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tl_oriention
  {
    size_t item_size = sizeof(ros_message.tl_oriention);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_perception_msgs
max_serialized_size_TrafficObject(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: class_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: det_is_focus_light
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sign_appx_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: region
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_perception_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TrafficRegion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: new_h_region
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_perception_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TrafficRegion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: status
  {
    size_t array_size = 4;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_perception_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TrafficStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: f120_ori_color
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: f120_ori_color_light_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: color
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: origin_color
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: light_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: origin_light_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: count_down
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: orig_count_down
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: has_count_down
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ori_has_count_down
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: f120_origin_sign_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: origin_sign_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sign_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sign_confidence
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: digit_confidence
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: digit_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: digit_class_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ego_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ego_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ego_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ramp_confidence
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_ramp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: origin_is_ramp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_ramp_from_41
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_ramp_double_checked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pole
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_rechecked_ramp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rechecked_ramp_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bind_ramp_region
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_perception_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TrafficRegion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: ego_x_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_recheck_result
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: model_depth
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tl_oriention
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_perception_msgs::msg::TrafficObject;
    is_plain =
      (
      offsetof(DataType, tl_oriention) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _TrafficObject__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_perception_msgs::msg::TrafficObject *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrafficObject__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_perception_msgs::msg::TrafficObject *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrafficObject__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_perception_msgs::msg::TrafficObject *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrafficObject__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TrafficObject(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TrafficObject__callbacks = {
  "deva_perception_msgs::msg",
  "TrafficObject",
  _TrafficObject__cdr_serialize,
  _TrafficObject__cdr_deserialize,
  _TrafficObject__get_serialized_size,
  _TrafficObject__max_serialized_size
};

static rosidl_message_type_support_t _TrafficObject__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrafficObject__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_perception_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_perception_msgs::msg::TrafficObject>()
{
  return &deva_perception_msgs::msg::typesupport_fastrtps_cpp::_TrafficObject__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_perception_msgs, msg, TrafficObject)() {
  return &deva_perception_msgs::msg::typesupport_fastrtps_cpp::_TrafficObject__handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_perception_msgs:msg/TrafficObject.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/traffic_object__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_perception_msgs/msg/detail/traffic_object__struct.h"
#include "deva_perception_msgs/msg/detail/traffic_object__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "deva_perception_msgs/msg/detail/traffic_region__functions.h"  // bind_ramp_region, new_h_region, region
#include "deva_perception_msgs/msg/detail/traffic_status__functions.h"  // status

// forward declare type support functions
size_t get_serialized_size_deva_perception_msgs__msg__TrafficRegion(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_perception_msgs__msg__TrafficRegion(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficRegion)();
size_t get_serialized_size_deva_perception_msgs__msg__TrafficStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_perception_msgs__msg__TrafficStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficStatus)();


using _TrafficObject__ros_msg_type = deva_perception_msgs__msg__TrafficObject;

static bool _TrafficObject__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrafficObject__ros_msg_type * ros_message = static_cast<const _TrafficObject__ros_msg_type *>(untyped_ros_message);
  // Field name: class_idx
  {
    cdr << ros_message->class_idx;
  }

  // Field name: det_is_focus_light
  {
    cdr << (ros_message->det_is_focus_light ? true : false);
  }

  // Field name: sign_appx_type
  {
    cdr << ros_message->sign_appx_type;
  }

  // Field name: region
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficRegion
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->region, cdr))
    {
      return false;
    }
  }

  // Field name: new_h_region
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficRegion
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->new_h_region, cdr))
    {
      return false;
    }
  }

  // Field name: status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficStatus
      )()->data);
    size_t size = 4;
    auto array_ptr = ros_message->status;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: f120_ori_color
  {
    cdr << ros_message->f120_ori_color;
  }

  // Field name: f120_ori_color_light_type
  {
    cdr << ros_message->f120_ori_color_light_type;
  }

  // Field name: color
  {
    cdr << ros_message->color;
  }

  // Field name: origin_color
  {
    cdr << ros_message->origin_color;
  }

  // Field name: light_type
  {
    cdr << ros_message->light_type;
  }

  // Field name: origin_light_type
  {
    cdr << ros_message->origin_light_type;
  }

  // Field name: count_down
  {
    cdr << ros_message->count_down;
  }

  // Field name: orig_count_down
  {
    cdr << ros_message->orig_count_down;
  }

  // Field name: has_count_down
  {
    cdr << (ros_message->has_count_down ? true : false);
  }

  // Field name: ori_has_count_down
  {
    cdr << (ros_message->ori_has_count_down ? true : false);
  }

  // Field name: f120_origin_sign_type
  {
    cdr << ros_message->f120_origin_sign_type;
  }

  // Field name: origin_sign_type
  {
    cdr << ros_message->origin_sign_type;
  }

  // Field name: sign_type
  {
    cdr << ros_message->sign_type;
  }

  // Field name: sign_confidence
  {
    cdr << ros_message->sign_confidence;
  }

  // Field name: digit_confidence
  {
    cdr << ros_message->digit_confidence;
  }

  // Field name: digit_type
  {
    cdr << ros_message->digit_type;
  }

  // Field name: digit_class_idx
  {
    cdr << ros_message->digit_class_idx;
  }

  // Field name: ego_x
  {
    cdr << ros_message->ego_x;
  }

  // Field name: ego_y
  {
    cdr << ros_message->ego_y;
  }

  // Field name: ego_z
  {
    cdr << ros_message->ego_z;
  }

  // Field name: ramp_confidence
  {
    cdr << ros_message->ramp_confidence;
  }

  // Field name: is_ramp
  {
    cdr << (ros_message->is_ramp ? true : false);
  }

  // Field name: origin_is_ramp
  {
    cdr << (ros_message->origin_is_ramp ? true : false);
  }

  // Field name: is_ramp_from_41
  {
    cdr << (ros_message->is_ramp_from_41 ? true : false);
  }

  // Field name: is_ramp_double_checked
  {
    cdr << (ros_message->is_ramp_double_checked ? true : false);
  }

  // Field name: pole
  {
    cdr << ros_message->pole;
  }

  // Field name: is_rechecked_ramp
  {
    cdr << (ros_message->is_rechecked_ramp ? true : false);
  }

  // Field name: rechecked_ramp_score
  {
    cdr << ros_message->rechecked_ramp_score;
  }

  // Field name: bind_ramp_region
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficRegion
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bind_ramp_region, cdr))
    {
      return false;
    }
  }

  // Field name: ego_x_out
  {
    cdr << ros_message->ego_x_out;
  }

  // Field name: is_recheck_result
  {
    cdr << (ros_message->is_recheck_result ? true : false);
  }

  // Field name: model_depth
  {
    cdr << ros_message->model_depth;
  }

  // Field name: tl_oriention
  {
    cdr << ros_message->tl_oriention;
  }

  return true;
}

static bool _TrafficObject__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrafficObject__ros_msg_type * ros_message = static_cast<_TrafficObject__ros_msg_type *>(untyped_ros_message);
  // Field name: class_idx
  {
    cdr >> ros_message->class_idx;
  }

  // Field name: det_is_focus_light
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->det_is_focus_light = tmp ? true : false;
  }

  // Field name: sign_appx_type
  {
    cdr >> ros_message->sign_appx_type;
  }

  // Field name: region
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficRegion
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->region))
    {
      return false;
    }
  }

  // Field name: new_h_region
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficRegion
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->new_h_region))
    {
      return false;
    }
  }

  // Field name: status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficStatus
      )()->data);
    size_t size = 4;
    auto array_ptr = ros_message->status;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: f120_ori_color
  {
    cdr >> ros_message->f120_ori_color;
  }

  // Field name: f120_ori_color_light_type
  {
    cdr >> ros_message->f120_ori_color_light_type;
  }

  // Field name: color
  {
    cdr >> ros_message->color;
  }

  // Field name: origin_color
  {
    cdr >> ros_message->origin_color;
  }

  // Field name: light_type
  {
    cdr >> ros_message->light_type;
  }

  // Field name: origin_light_type
  {
    cdr >> ros_message->origin_light_type;
  }

  // Field name: count_down
  {
    cdr >> ros_message->count_down;
  }

  // Field name: orig_count_down
  {
    cdr >> ros_message->orig_count_down;
  }

  // Field name: has_count_down
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_count_down = tmp ? true : false;
  }

  // Field name: ori_has_count_down
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ori_has_count_down = tmp ? true : false;
  }

  // Field name: f120_origin_sign_type
  {
    cdr >> ros_message->f120_origin_sign_type;
  }

  // Field name: origin_sign_type
  {
    cdr >> ros_message->origin_sign_type;
  }

  // Field name: sign_type
  {
    cdr >> ros_message->sign_type;
  }

  // Field name: sign_confidence
  {
    cdr >> ros_message->sign_confidence;
  }

  // Field name: digit_confidence
  {
    cdr >> ros_message->digit_confidence;
  }

  // Field name: digit_type
  {
    cdr >> ros_message->digit_type;
  }

  // Field name: digit_class_idx
  {
    cdr >> ros_message->digit_class_idx;
  }

  // Field name: ego_x
  {
    cdr >> ros_message->ego_x;
  }

  // Field name: ego_y
  {
    cdr >> ros_message->ego_y;
  }

  // Field name: ego_z
  {
    cdr >> ros_message->ego_z;
  }

  // Field name: ramp_confidence
  {
    cdr >> ros_message->ramp_confidence;
  }

  // Field name: is_ramp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_ramp = tmp ? true : false;
  }

  // Field name: origin_is_ramp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->origin_is_ramp = tmp ? true : false;
  }

  // Field name: is_ramp_from_41
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_ramp_from_41 = tmp ? true : false;
  }

  // Field name: is_ramp_double_checked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_ramp_double_checked = tmp ? true : false;
  }

  // Field name: pole
  {
    cdr >> ros_message->pole;
  }

  // Field name: is_rechecked_ramp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_rechecked_ramp = tmp ? true : false;
  }

  // Field name: rechecked_ramp_score
  {
    cdr >> ros_message->rechecked_ramp_score;
  }

  // Field name: bind_ramp_region
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficRegion
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bind_ramp_region))
    {
      return false;
    }
  }

  // Field name: ego_x_out
  {
    cdr >> ros_message->ego_x_out;
  }

  // Field name: is_recheck_result
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_recheck_result = tmp ? true : false;
  }

  // Field name: model_depth
  {
    cdr >> ros_message->model_depth;
  }

  // Field name: tl_oriention
  {
    cdr >> ros_message->tl_oriention;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_perception_msgs
size_t get_serialized_size_deva_perception_msgs__msg__TrafficObject(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrafficObject__ros_msg_type * ros_message = static_cast<const _TrafficObject__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name class_idx
  {
    size_t item_size = sizeof(ros_message->class_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name det_is_focus_light
  {
    size_t item_size = sizeof(ros_message->det_is_focus_light);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sign_appx_type
  {
    size_t item_size = sizeof(ros_message->sign_appx_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name region

  current_alignment += get_serialized_size_deva_perception_msgs__msg__TrafficRegion(
    &(ros_message->region), current_alignment);
  // field.name new_h_region

  current_alignment += get_serialized_size_deva_perception_msgs__msg__TrafficRegion(
    &(ros_message->new_h_region), current_alignment);
  // field.name status
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->status;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_perception_msgs__msg__TrafficStatus(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name f120_ori_color
  {
    size_t item_size = sizeof(ros_message->f120_ori_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f120_ori_color_light_type
  {
    size_t item_size = sizeof(ros_message->f120_ori_color_light_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name color
  {
    size_t item_size = sizeof(ros_message->color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name origin_color
  {
    size_t item_size = sizeof(ros_message->origin_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name light_type
  {
    size_t item_size = sizeof(ros_message->light_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name origin_light_type
  {
    size_t item_size = sizeof(ros_message->origin_light_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name count_down
  {
    size_t item_size = sizeof(ros_message->count_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name orig_count_down
  {
    size_t item_size = sizeof(ros_message->orig_count_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_count_down
  {
    size_t item_size = sizeof(ros_message->has_count_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ori_has_count_down
  {
    size_t item_size = sizeof(ros_message->ori_has_count_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f120_origin_sign_type
  {
    size_t item_size = sizeof(ros_message->f120_origin_sign_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name origin_sign_type
  {
    size_t item_size = sizeof(ros_message->origin_sign_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sign_type
  {
    size_t item_size = sizeof(ros_message->sign_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sign_confidence
  {
    size_t item_size = sizeof(ros_message->sign_confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name digit_confidence
  {
    size_t item_size = sizeof(ros_message->digit_confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name digit_type
  {
    size_t item_size = sizeof(ros_message->digit_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name digit_class_idx
  {
    size_t item_size = sizeof(ros_message->digit_class_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ego_x
  {
    size_t item_size = sizeof(ros_message->ego_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ego_y
  {
    size_t item_size = sizeof(ros_message->ego_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ego_z
  {
    size_t item_size = sizeof(ros_message->ego_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ramp_confidence
  {
    size_t item_size = sizeof(ros_message->ramp_confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_ramp
  {
    size_t item_size = sizeof(ros_message->is_ramp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name origin_is_ramp
  {
    size_t item_size = sizeof(ros_message->origin_is_ramp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_ramp_from_41
  {
    size_t item_size = sizeof(ros_message->is_ramp_from_41);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_ramp_double_checked
  {
    size_t item_size = sizeof(ros_message->is_ramp_double_checked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pole
  {
    size_t item_size = sizeof(ros_message->pole);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_rechecked_ramp
  {
    size_t item_size = sizeof(ros_message->is_rechecked_ramp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rechecked_ramp_score
  {
    size_t item_size = sizeof(ros_message->rechecked_ramp_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bind_ramp_region

  current_alignment += get_serialized_size_deva_perception_msgs__msg__TrafficRegion(
    &(ros_message->bind_ramp_region), current_alignment);
  // field.name ego_x_out
  {
    size_t item_size = sizeof(ros_message->ego_x_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_recheck_result
  {
    size_t item_size = sizeof(ros_message->is_recheck_result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name model_depth
  {
    size_t item_size = sizeof(ros_message->model_depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tl_oriention
  {
    size_t item_size = sizeof(ros_message->tl_oriention);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TrafficObject__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_perception_msgs__msg__TrafficObject(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_perception_msgs
size_t max_serialized_size_deva_perception_msgs__msg__TrafficObject(
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

  // member: class_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: det_is_focus_light
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sign_appx_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: region
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_perception_msgs__msg__TrafficRegion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: new_h_region
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_perception_msgs__msg__TrafficRegion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: status
  {
    size_t array_size = 4;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_perception_msgs__msg__TrafficStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: f120_ori_color
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f120_ori_color_light_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: color
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: origin_color
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: light_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: origin_light_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: count_down
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: orig_count_down
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: has_count_down
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ori_has_count_down
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f120_origin_sign_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: origin_sign_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sign_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sign_confidence
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: digit_confidence
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: digit_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: digit_class_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ego_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ego_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ego_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ramp_confidence
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: is_ramp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: origin_is_ramp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_ramp_from_41
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_ramp_double_checked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pole
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: is_rechecked_ramp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rechecked_ramp_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bind_ramp_region
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_perception_msgs__msg__TrafficRegion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: ego_x_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: is_recheck_result
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: model_depth
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tl_oriention
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
    using DataType = deva_perception_msgs__msg__TrafficObject;
    is_plain =
      (
      offsetof(DataType, tl_oriention) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TrafficObject__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_perception_msgs__msg__TrafficObject(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TrafficObject = {
  "deva_perception_msgs::msg",
  "TrafficObject",
  _TrafficObject__cdr_serialize,
  _TrafficObject__cdr_deserialize,
  _TrafficObject__get_serialized_size,
  _TrafficObject__max_serialized_size
};

static rosidl_message_type_support_t _TrafficObject__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrafficObject,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficObject)() {
  return &_TrafficObject__type_support;
}

#if defined(__cplusplus)
}
#endif

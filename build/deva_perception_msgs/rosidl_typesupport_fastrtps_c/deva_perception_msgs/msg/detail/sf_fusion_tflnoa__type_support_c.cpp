// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_perception_msgs:msg/SFFusionTFLNOA.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/sf_fusion_tflnoa__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_perception_msgs/msg/detail/sf_fusion_tflnoa__struct.h"
#include "deva_perception_msgs/msg/detail/sf_fusion_tflnoa__functions.h"
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

#include "deva_perception_msgs/msg/detail/quadrangle_img__functions.h"  // tflquadrangleimg
#include "deva_perception_msgs/msg/detail/quadrangle_vcs__functions.h"  // tflquadranglevcs
#include "deva_perception_msgs/msg/detail/traffic_region__functions.h"  // f120_region, f30_region, region

// forward declare type support functions
size_t get_serialized_size_deva_perception_msgs__msg__QuadrangleImg(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_perception_msgs__msg__QuadrangleImg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, QuadrangleImg)();
size_t get_serialized_size_deva_perception_msgs__msg__QuadrangleVcs(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_perception_msgs__msg__QuadrangleVcs(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, QuadrangleVcs)();
size_t get_serialized_size_deva_perception_msgs__msg__TrafficRegion(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_perception_msgs__msg__TrafficRegion(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficRegion)();


using _SFFusionTFLNOA__ros_msg_type = deva_perception_msgs__msg__SFFusionTFLNOA;

static bool _SFFusionTFLNOA__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SFFusionTFLNOA__ros_msg_type * ros_message = static_cast<const _SFFusionTFLNOA__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: lifetime
  {
    cdr << ros_message->lifetime;
  }

  // Field name: relevancy
  {
    cdr << ros_message->relevancy;
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: color
  {
    cdr << ros_message->color;
  }

  // Field name: cycle_time
  {
    cdr << ros_message->cycle_time;
  }

  // Field name: number
  {
    cdr << ros_message->number;
  }

  // Field name: confi
  {
    cdr << ros_message->confi;
  }

  // Field name: flashstatus
  {
    cdr << ros_message->flashstatus;
  }

  // Field name: background
  {
    cdr << ros_message->background;
  }

  // Field name: reserved
  {
    cdr << ros_message->reserved;
  }

  // Field name: poslgt
  {
    cdr << ros_message->poslgt;
  }

  // Field name: poslat
  {
    cdr << ros_message->poslat;
  }

  // Field name: height
  {
    cdr << ros_message->height;
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

  // Field name: tflquadranglevcs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, QuadrangleVcs
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tflquadranglevcs, cdr))
    {
      return false;
    }
  }

  // Field name: tflquadrangleimg
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, QuadrangleImg
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tflquadrangleimg, cdr))
    {
      return false;
    }
  }

  // Field name: utmx
  {
    cdr << ros_message->utmx;
  }

  // Field name: utmy
  {
    cdr << ros_message->utmy;
  }

  // Field name: utmz
  {
    cdr << ros_message->utmz;
  }

  // Field name: type_list
  {
    size_t size = 4;
    auto array_ptr = ros_message->type_list;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: color_list
  {
    size_t size = 4;
    auto array_ptr = ros_message->color_list;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: blocked
  {
    cdr << ros_message->blocked;
  }

  // Field name: has_count_down
  {
    cdr << ros_message->has_count_down;
  }

  // Field name: light_num
  {
    cdr << ros_message->light_num;
  }

  // Field name: focus
  {
    cdr << ros_message->focus;
  }

  // Field name: pole
  {
    cdr << ros_message->pole;
  }

  // Field name: sync_from_track_id
  {
    cdr << ros_message->sync_from_track_id;
  }

  // Field name: source
  {
    cdr << ros_message->source;
  }

  // Field name: f120_region
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficRegion
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->f120_region, cdr))
    {
      return false;
    }
  }

  // Field name: f30_region
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficRegion
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->f30_region, cdr))
    {
      return false;
    }
  }

  // Field name: i_back1
  {
    cdr << ros_message->i_back1;
  }

  // Field name: i_back2
  {
    cdr << ros_message->i_back2;
  }

  // Field name: i_back3
  {
    cdr << ros_message->i_back3;
  }

  // Field name: f_back1
  {
    cdr << ros_message->f_back1;
  }

  // Field name: f_back2
  {
    cdr << ros_message->f_back2;
  }

  // Field name: f_back3
  {
    cdr << ros_message->f_back3;
  }

  return true;
}

static bool _SFFusionTFLNOA__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SFFusionTFLNOA__ros_msg_type * ros_message = static_cast<_SFFusionTFLNOA__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: lifetime
  {
    cdr >> ros_message->lifetime;
  }

  // Field name: relevancy
  {
    cdr >> ros_message->relevancy;
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: color
  {
    cdr >> ros_message->color;
  }

  // Field name: cycle_time
  {
    cdr >> ros_message->cycle_time;
  }

  // Field name: number
  {
    cdr >> ros_message->number;
  }

  // Field name: confi
  {
    cdr >> ros_message->confi;
  }

  // Field name: flashstatus
  {
    cdr >> ros_message->flashstatus;
  }

  // Field name: background
  {
    cdr >> ros_message->background;
  }

  // Field name: reserved
  {
    cdr >> ros_message->reserved;
  }

  // Field name: poslgt
  {
    cdr >> ros_message->poslgt;
  }

  // Field name: poslat
  {
    cdr >> ros_message->poslat;
  }

  // Field name: height
  {
    cdr >> ros_message->height;
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

  // Field name: tflquadranglevcs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, QuadrangleVcs
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tflquadranglevcs))
    {
      return false;
    }
  }

  // Field name: tflquadrangleimg
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, QuadrangleImg
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tflquadrangleimg))
    {
      return false;
    }
  }

  // Field name: utmx
  {
    cdr >> ros_message->utmx;
  }

  // Field name: utmy
  {
    cdr >> ros_message->utmy;
  }

  // Field name: utmz
  {
    cdr >> ros_message->utmz;
  }

  // Field name: type_list
  {
    size_t size = 4;
    auto array_ptr = ros_message->type_list;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: color_list
  {
    size_t size = 4;
    auto array_ptr = ros_message->color_list;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: blocked
  {
    cdr >> ros_message->blocked;
  }

  // Field name: has_count_down
  {
    cdr >> ros_message->has_count_down;
  }

  // Field name: light_num
  {
    cdr >> ros_message->light_num;
  }

  // Field name: focus
  {
    cdr >> ros_message->focus;
  }

  // Field name: pole
  {
    cdr >> ros_message->pole;
  }

  // Field name: sync_from_track_id
  {
    cdr >> ros_message->sync_from_track_id;
  }

  // Field name: source
  {
    cdr >> ros_message->source;
  }

  // Field name: f120_region
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficRegion
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->f120_region))
    {
      return false;
    }
  }

  // Field name: f30_region
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficRegion
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->f30_region))
    {
      return false;
    }
  }

  // Field name: i_back1
  {
    cdr >> ros_message->i_back1;
  }

  // Field name: i_back2
  {
    cdr >> ros_message->i_back2;
  }

  // Field name: i_back3
  {
    cdr >> ros_message->i_back3;
  }

  // Field name: f_back1
  {
    cdr >> ros_message->f_back1;
  }

  // Field name: f_back2
  {
    cdr >> ros_message->f_back2;
  }

  // Field name: f_back3
  {
    cdr >> ros_message->f_back3;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_perception_msgs
size_t get_serialized_size_deva_perception_msgs__msg__SFFusionTFLNOA(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SFFusionTFLNOA__ros_msg_type * ros_message = static_cast<const _SFFusionTFLNOA__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lifetime
  {
    size_t item_size = sizeof(ros_message->lifetime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name relevancy
  {
    size_t item_size = sizeof(ros_message->relevancy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name color
  {
    size_t item_size = sizeof(ros_message->color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cycle_time
  {
    size_t item_size = sizeof(ros_message->cycle_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name number
  {
    size_t item_size = sizeof(ros_message->number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name confi
  {
    size_t item_size = sizeof(ros_message->confi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flashstatus
  {
    size_t item_size = sizeof(ros_message->flashstatus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name background
  {
    size_t item_size = sizeof(ros_message->background);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved
  {
    size_t item_size = sizeof(ros_message->reserved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name poslgt
  {
    size_t item_size = sizeof(ros_message->poslgt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name poslat
  {
    size_t item_size = sizeof(ros_message->poslat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height
  {
    size_t item_size = sizeof(ros_message->height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name region

  current_alignment += get_serialized_size_deva_perception_msgs__msg__TrafficRegion(
    &(ros_message->region), current_alignment);
  // field.name tflquadranglevcs

  current_alignment += get_serialized_size_deva_perception_msgs__msg__QuadrangleVcs(
    &(ros_message->tflquadranglevcs), current_alignment);
  // field.name tflquadrangleimg

  current_alignment += get_serialized_size_deva_perception_msgs__msg__QuadrangleImg(
    &(ros_message->tflquadrangleimg), current_alignment);
  // field.name utmx
  {
    size_t item_size = sizeof(ros_message->utmx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name utmy
  {
    size_t item_size = sizeof(ros_message->utmy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name utmz
  {
    size_t item_size = sizeof(ros_message->utmz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name type_list
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->type_list;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name color_list
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->color_list;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blocked
  {
    size_t item_size = sizeof(ros_message->blocked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_count_down
  {
    size_t item_size = sizeof(ros_message->has_count_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name light_num
  {
    size_t item_size = sizeof(ros_message->light_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name focus
  {
    size_t item_size = sizeof(ros_message->focus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pole
  {
    size_t item_size = sizeof(ros_message->pole);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sync_from_track_id
  {
    size_t item_size = sizeof(ros_message->sync_from_track_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name source
  {
    size_t item_size = sizeof(ros_message->source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f120_region

  current_alignment += get_serialized_size_deva_perception_msgs__msg__TrafficRegion(
    &(ros_message->f120_region), current_alignment);
  // field.name f30_region

  current_alignment += get_serialized_size_deva_perception_msgs__msg__TrafficRegion(
    &(ros_message->f30_region), current_alignment);
  // field.name i_back1
  {
    size_t item_size = sizeof(ros_message->i_back1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name i_back2
  {
    size_t item_size = sizeof(ros_message->i_back2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name i_back3
  {
    size_t item_size = sizeof(ros_message->i_back3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f_back1
  {
    size_t item_size = sizeof(ros_message->f_back1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f_back2
  {
    size_t item_size = sizeof(ros_message->f_back2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f_back3
  {
    size_t item_size = sizeof(ros_message->f_back3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SFFusionTFLNOA__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_perception_msgs__msg__SFFusionTFLNOA(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_perception_msgs
size_t max_serialized_size_deva_perception_msgs__msg__SFFusionTFLNOA(
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

  // member: id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lifetime
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: relevancy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: type
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
  // member: cycle_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: confi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flashstatus
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: background
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserved
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: poslgt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: poslat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
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
  // member: tflquadranglevcs
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_perception_msgs__msg__QuadrangleVcs(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: tflquadrangleimg
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_perception_msgs__msg__QuadrangleImg(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: utmx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: utmy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: utmz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: type_list
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: color_list
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: blocked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_count_down
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: light_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: focus
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pole
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sync_from_track_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: source
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f120_region
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
  // member: f30_region
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
  // member: i_back1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: i_back2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: i_back3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f_back1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: f_back2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: f_back3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_perception_msgs__msg__SFFusionTFLNOA;
    is_plain =
      (
      offsetof(DataType, f_back3) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SFFusionTFLNOA__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_perception_msgs__msg__SFFusionTFLNOA(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SFFusionTFLNOA = {
  "deva_perception_msgs::msg",
  "SFFusionTFLNOA",
  _SFFusionTFLNOA__cdr_serialize,
  _SFFusionTFLNOA__cdr_deserialize,
  _SFFusionTFLNOA__get_serialized_size,
  _SFFusionTFLNOA__max_serialized_size
};

static rosidl_message_type_support_t _SFFusionTFLNOA__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SFFusionTFLNOA,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, SFFusionTFLNOA)() {
  return &_SFFusionTFLNOA__type_support;
}

#if defined(__cplusplus)
}
#endif

// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_gaode_routing_msgs:msg/WebCrossNaviInfo.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/web_cross_navi_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_gaode_routing_msgs/msg/detail/web_cross_navi_info__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/web_cross_navi_info__functions.h"
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

#include "rosidl_runtime_c/string.h"  // next_road_name
#include "rosidl_runtime_c/string_functions.h"  // next_road_name

// forward declare type support functions


using _WebCrossNaviInfo__ros_msg_type = deva_gaode_routing_msgs__msg__WebCrossNaviInfo;

static bool _WebCrossNaviInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WebCrossNaviInfo__ros_msg_type * ros_message = static_cast<const _WebCrossNaviInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: assist_action
  {
    cdr << ros_message->assist_action;
  }

  // Field name: cross_maneuver_id
  {
    cdr << ros_message->cross_maneuver_id;
  }

  // Field name: cur_to_segment_dist
  {
    cdr << ros_message->cur_to_segment_dist;
  }

  // Field name: cur_to_segment_time
  {
    cdr << ros_message->cur_to_segment_time;
  }

  // Field name: dest_direction
  {
    cdr << ros_message->dest_direction;
  }

  // Field name: main_action
  {
    cdr << ros_message->main_action;
  }

  // Field name: maneuver_id
  {
    cdr << ros_message->maneuver_id;
  }

  // Field name: next_road_name
  {
    const rosidl_runtime_c__String * str = &ros_message->next_road_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: out_cnt
  {
    cdr << ros_message->out_cnt;
  }

  // Field name: path_id
  {
    cdr << ros_message->path_id;
  }

  // Field name: rev
  {
    cdr << ros_message->rev;
  }

  // Field name: reversed
  {
    cdr << ros_message->reversed;
  }

  // Field name: seg_idx
  {
    cdr << ros_message->seg_idx;
  }

  // Field name: tunnel_flag
  {
    cdr << ros_message->tunnel_flag;
  }

  // Field name: via_num
  {
    cdr << ros_message->via_num;
  }

  return true;
}

static bool _WebCrossNaviInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WebCrossNaviInfo__ros_msg_type * ros_message = static_cast<_WebCrossNaviInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: assist_action
  {
    cdr >> ros_message->assist_action;
  }

  // Field name: cross_maneuver_id
  {
    cdr >> ros_message->cross_maneuver_id;
  }

  // Field name: cur_to_segment_dist
  {
    cdr >> ros_message->cur_to_segment_dist;
  }

  // Field name: cur_to_segment_time
  {
    cdr >> ros_message->cur_to_segment_time;
  }

  // Field name: dest_direction
  {
    cdr >> ros_message->dest_direction;
  }

  // Field name: main_action
  {
    cdr >> ros_message->main_action;
  }

  // Field name: maneuver_id
  {
    cdr >> ros_message->maneuver_id;
  }

  // Field name: next_road_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->next_road_name.data) {
      rosidl_runtime_c__String__init(&ros_message->next_road_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->next_road_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'next_road_name'\n");
      return false;
    }
  }

  // Field name: out_cnt
  {
    cdr >> ros_message->out_cnt;
  }

  // Field name: path_id
  {
    cdr >> ros_message->path_id;
  }

  // Field name: rev
  {
    cdr >> ros_message->rev;
  }

  // Field name: reversed
  {
    cdr >> ros_message->reversed;
  }

  // Field name: seg_idx
  {
    cdr >> ros_message->seg_idx;
  }

  // Field name: tunnel_flag
  {
    cdr >> ros_message->tunnel_flag;
  }

  // Field name: via_num
  {
    cdr >> ros_message->via_num;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t get_serialized_size_deva_gaode_routing_msgs__msg__WebCrossNaviInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WebCrossNaviInfo__ros_msg_type * ros_message = static_cast<const _WebCrossNaviInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name assist_action
  {
    size_t item_size = sizeof(ros_message->assist_action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cross_maneuver_id
  {
    size_t item_size = sizeof(ros_message->cross_maneuver_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cur_to_segment_dist
  {
    size_t item_size = sizeof(ros_message->cur_to_segment_dist);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cur_to_segment_time
  {
    size_t item_size = sizeof(ros_message->cur_to_segment_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dest_direction
  {
    size_t item_size = sizeof(ros_message->dest_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name main_action
  {
    size_t item_size = sizeof(ros_message->main_action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maneuver_id
  {
    size_t item_size = sizeof(ros_message->maneuver_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name next_road_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->next_road_name.size + 1);
  // field.name out_cnt
  {
    size_t item_size = sizeof(ros_message->out_cnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name path_id
  {
    size_t item_size = sizeof(ros_message->path_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rev
  {
    size_t item_size = sizeof(ros_message->rev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reversed
  {
    size_t item_size = sizeof(ros_message->reversed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seg_idx
  {
    size_t item_size = sizeof(ros_message->seg_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tunnel_flag
  {
    size_t item_size = sizeof(ros_message->tunnel_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name via_num
  {
    size_t item_size = sizeof(ros_message->via_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WebCrossNaviInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_gaode_routing_msgs__msg__WebCrossNaviInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t max_serialized_size_deva_gaode_routing_msgs__msg__WebCrossNaviInfo(
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

  // member: assist_action
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cross_maneuver_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cur_to_segment_dist
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cur_to_segment_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dest_direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: main_action
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: maneuver_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: next_road_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: out_cnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: path_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: reversed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: seg_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tunnel_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: via_num
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
    using DataType = deva_gaode_routing_msgs__msg__WebCrossNaviInfo;
    is_plain =
      (
      offsetof(DataType, via_num) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _WebCrossNaviInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_gaode_routing_msgs__msg__WebCrossNaviInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WebCrossNaviInfo = {
  "deva_gaode_routing_msgs::msg",
  "WebCrossNaviInfo",
  _WebCrossNaviInfo__cdr_serialize,
  _WebCrossNaviInfo__cdr_deserialize,
  _WebCrossNaviInfo__get_serialized_size,
  _WebCrossNaviInfo__max_serialized_size
};

static rosidl_message_type_support_t _WebCrossNaviInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WebCrossNaviInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebCrossNaviInfo)() {
  return &_WebCrossNaviInfo__type_support;
}

#if defined(__cplusplus)
}
#endif

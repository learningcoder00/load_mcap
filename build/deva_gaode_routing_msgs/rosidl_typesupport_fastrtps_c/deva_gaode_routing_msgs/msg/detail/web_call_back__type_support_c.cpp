// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_gaode_routing_msgs:msg/WebCallBack.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/web_call_back__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_gaode_routing_msgs/msg/detail/web_call_back__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/web_call_back__functions.h"
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

#include "deva_gaode_routing_msgs/msg/detail/camera_callback_info__functions.h"  // camera_callback
#include "deva_gaode_routing_msgs/msg/detail/web_cross_image__functions.h"  // cross_image
#include "deva_gaode_routing_msgs/msg/detail/web_cross_navi_info__functions.h"  // next_cross_info
#include "deva_gaode_routing_msgs/msg/detail/web_lane__functions.h"  // lane_info
#include "deva_gaode_routing_msgs/msg/detail/web_not_avoid_info__functions.h"  // not_avoid_info
#include "deva_gaode_routing_msgs/msg/detail/web_parallel_road__functions.h"  // parallel_road
#include "deva_gaode_routing_msgs/msg/detail/web_traffic_light__functions.h"  // traffic_light_cd
#include "rosidl_runtime_c/primitives_sequence.h"  // via_retain_dis
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // via_retain_dis

// forward declare type support functions
size_t get_serialized_size_deva_gaode_routing_msgs__msg__CameraCallbackInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__CameraCallbackInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, CameraCallbackInfo)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__WebCrossImage(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__WebCrossImage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebCrossImage)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__WebCrossNaviInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__WebCrossNaviInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebCrossNaviInfo)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__WebLane(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__WebLane(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebLane)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__WebNotAvoidInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__WebNotAvoidInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebNotAvoidInfo)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__WebParallelRoad(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__WebParallelRoad(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebParallelRoad)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__WebTrafficLight(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__WebTrafficLight(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebTrafficLight)();


using _WebCallBack__ros_msg_type = deva_gaode_routing_msgs__msg__WebCallBack;

static bool _WebCallBack__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WebCallBack__ros_msg_type * ros_message = static_cast<const _WebCallBack__ros_msg_type *>(untyped_ros_message);
  // Field name: index
  {
    cdr << ros_message->index;
  }

  // Field name: cur_step
  {
    cdr << ros_message->cur_step;
  }

  // Field name: cur_road
  {
    cdr << ros_message->cur_road;
  }

  // Field name: cur_point
  {
    cdr << ros_message->cur_point;
  }

  // Field name: cur_road_retain_dis
  {
    cdr << ros_message->cur_road_retain_dis;
  }

  // Field name: cur_step_retain_dis
  {
    cdr << ros_message->cur_step_retain_dis;
  }

  // Field name: cur_step_retain_time
  {
    cdr << ros_message->cur_step_retain_time;
  }

  // Field name: via_retain_dis
  {
    size_t size = ros_message->via_retain_dis.size;
    auto array_ptr = ros_message->via_retain_dis.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: path_retain_dis
  {
    cdr << ros_message->path_retain_dis;
  }

  // Field name: path_retain_time
  {
    cdr << ros_message->path_retain_time;
  }

  // Field name: trun_icon
  {
    cdr << ros_message->trun_icon;
  }

  // Field name: trun_icon_retain_dis
  {
    cdr << ros_message->trun_icon_retain_dis;
  }

  // Field name: lane_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebLane
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lane_info, cdr))
    {
      return false;
    }
  }

  // Field name: camera_callback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, CameraCallbackInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->camera_callback, cdr))
    {
      return false;
    }
  }

  // Field name: ring_out_cnt
  {
    cdr << ros_message->ring_out_cnt;
  }

  // Field name: roundabout_out_angle
  {
    cdr << ros_message->roundabout_out_angle;
  }

  // Field name: cur_link_speed
  {
    cdr << ros_message->cur_link_speed;
  }

  // Field name: not_avoid_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebNotAvoidInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->not_avoid_info, cdr))
    {
      return false;
    }
  }

  // Field name: cross_maneuver_id
  {
    cdr << ros_message->cross_maneuver_id;
  }

  // Field name: next_cross_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebCrossNaviInfo
      )()->data);
    size_t size = ros_message->next_cross_info.size;
    auto array_ptr = ros_message->next_cross_info.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: traffic_light_cd
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebTrafficLight
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->traffic_light_cd, cdr))
    {
      return false;
    }
  }

  // Field name: parallel_road
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebParallelRoad
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->parallel_road, cdr))
    {
      return false;
    }
  }

  // Field name: ownership
  {
    cdr << ros_message->ownership;
  }

  // Field name: cur_road_limit_speed
  {
    cdr << ros_message->cur_road_limit_speed;
  }

  // Field name: cross_image
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebCrossImage
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cross_image, cdr))
    {
      return false;
    }
  }

  // Field name: cur_cross_dir
  {
    cdr << ros_message->cur_cross_dir;
  }

  // Field name: cur_cross_dist
  {
    cdr << ros_message->cur_cross_dist;
  }

  return true;
}

static bool _WebCallBack__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WebCallBack__ros_msg_type * ros_message = static_cast<_WebCallBack__ros_msg_type *>(untyped_ros_message);
  // Field name: index
  {
    cdr >> ros_message->index;
  }

  // Field name: cur_step
  {
    cdr >> ros_message->cur_step;
  }

  // Field name: cur_road
  {
    cdr >> ros_message->cur_road;
  }

  // Field name: cur_point
  {
    cdr >> ros_message->cur_point;
  }

  // Field name: cur_road_retain_dis
  {
    cdr >> ros_message->cur_road_retain_dis;
  }

  // Field name: cur_step_retain_dis
  {
    cdr >> ros_message->cur_step_retain_dis;
  }

  // Field name: cur_step_retain_time
  {
    cdr >> ros_message->cur_step_retain_time;
  }

  // Field name: via_retain_dis
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->via_retain_dis.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->via_retain_dis);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->via_retain_dis, size)) {
      fprintf(stderr, "failed to create array for field 'via_retain_dis'");
      return false;
    }
    auto array_ptr = ros_message->via_retain_dis.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: path_retain_dis
  {
    cdr >> ros_message->path_retain_dis;
  }

  // Field name: path_retain_time
  {
    cdr >> ros_message->path_retain_time;
  }

  // Field name: trun_icon
  {
    cdr >> ros_message->trun_icon;
  }

  // Field name: trun_icon_retain_dis
  {
    cdr >> ros_message->trun_icon_retain_dis;
  }

  // Field name: lane_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebLane
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lane_info))
    {
      return false;
    }
  }

  // Field name: camera_callback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, CameraCallbackInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->camera_callback))
    {
      return false;
    }
  }

  // Field name: ring_out_cnt
  {
    cdr >> ros_message->ring_out_cnt;
  }

  // Field name: roundabout_out_angle
  {
    cdr >> ros_message->roundabout_out_angle;
  }

  // Field name: cur_link_speed
  {
    cdr >> ros_message->cur_link_speed;
  }

  // Field name: not_avoid_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebNotAvoidInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->not_avoid_info))
    {
      return false;
    }
  }

  // Field name: cross_maneuver_id
  {
    cdr >> ros_message->cross_maneuver_id;
  }

  // Field name: next_cross_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebCrossNaviInfo
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->next_cross_info.data) {
      deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence__fini(&ros_message->next_cross_info);
    }
    if (!deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence__init(&ros_message->next_cross_info, size)) {
      fprintf(stderr, "failed to create array for field 'next_cross_info'");
      return false;
    }
    auto array_ptr = ros_message->next_cross_info.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: traffic_light_cd
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebTrafficLight
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->traffic_light_cd))
    {
      return false;
    }
  }

  // Field name: parallel_road
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebParallelRoad
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->parallel_road))
    {
      return false;
    }
  }

  // Field name: ownership
  {
    cdr >> ros_message->ownership;
  }

  // Field name: cur_road_limit_speed
  {
    cdr >> ros_message->cur_road_limit_speed;
  }

  // Field name: cross_image
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebCrossImage
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cross_image))
    {
      return false;
    }
  }

  // Field name: cur_cross_dir
  {
    cdr >> ros_message->cur_cross_dir;
  }

  // Field name: cur_cross_dist
  {
    cdr >> ros_message->cur_cross_dist;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t get_serialized_size_deva_gaode_routing_msgs__msg__WebCallBack(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WebCallBack__ros_msg_type * ros_message = static_cast<const _WebCallBack__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name index
  {
    size_t item_size = sizeof(ros_message->index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cur_step
  {
    size_t item_size = sizeof(ros_message->cur_step);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cur_road
  {
    size_t item_size = sizeof(ros_message->cur_road);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cur_point
  {
    size_t item_size = sizeof(ros_message->cur_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cur_road_retain_dis
  {
    size_t item_size = sizeof(ros_message->cur_road_retain_dis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cur_step_retain_dis
  {
    size_t item_size = sizeof(ros_message->cur_step_retain_dis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cur_step_retain_time
  {
    size_t item_size = sizeof(ros_message->cur_step_retain_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name via_retain_dis
  {
    size_t array_size = ros_message->via_retain_dis.size;
    auto array_ptr = ros_message->via_retain_dis.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name path_retain_dis
  {
    size_t item_size = sizeof(ros_message->path_retain_dis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name path_retain_time
  {
    size_t item_size = sizeof(ros_message->path_retain_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trun_icon
  {
    size_t item_size = sizeof(ros_message->trun_icon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trun_icon_retain_dis
  {
    size_t item_size = sizeof(ros_message->trun_icon_retain_dis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_info

  current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__WebLane(
    &(ros_message->lane_info), current_alignment);
  // field.name camera_callback

  current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__CameraCallbackInfo(
    &(ros_message->camera_callback), current_alignment);
  // field.name ring_out_cnt
  {
    size_t item_size = sizeof(ros_message->ring_out_cnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roundabout_out_angle
  {
    size_t item_size = sizeof(ros_message->roundabout_out_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cur_link_speed
  {
    size_t item_size = sizeof(ros_message->cur_link_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name not_avoid_info

  current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__WebNotAvoidInfo(
    &(ros_message->not_avoid_info), current_alignment);
  // field.name cross_maneuver_id
  {
    size_t item_size = sizeof(ros_message->cross_maneuver_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name next_cross_info
  {
    size_t array_size = ros_message->next_cross_info.size;
    auto array_ptr = ros_message->next_cross_info.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__WebCrossNaviInfo(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name traffic_light_cd

  current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__WebTrafficLight(
    &(ros_message->traffic_light_cd), current_alignment);
  // field.name parallel_road

  current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__WebParallelRoad(
    &(ros_message->parallel_road), current_alignment);
  // field.name ownership
  {
    size_t item_size = sizeof(ros_message->ownership);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cur_road_limit_speed
  {
    size_t item_size = sizeof(ros_message->cur_road_limit_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cross_image

  current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__WebCrossImage(
    &(ros_message->cross_image), current_alignment);
  // field.name cur_cross_dir
  {
    size_t item_size = sizeof(ros_message->cur_cross_dir);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cur_cross_dist
  {
    size_t item_size = sizeof(ros_message->cur_cross_dist);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WebCallBack__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_gaode_routing_msgs__msg__WebCallBack(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t max_serialized_size_deva_gaode_routing_msgs__msg__WebCallBack(
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

  // member: index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cur_step
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cur_road
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cur_point
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cur_road_retain_dis
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cur_step_retain_dis
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cur_step_retain_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: via_retain_dis
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: path_retain_dis
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: path_retain_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: trun_icon
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: trun_icon_retain_dis
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lane_info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__WebLane(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: camera_callback
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__CameraCallbackInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: ring_out_cnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: roundabout_out_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cur_link_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: not_avoid_info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__WebNotAvoidInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: cross_maneuver_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: next_cross_info
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__WebCrossNaviInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: traffic_light_cd
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__WebTrafficLight(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: parallel_road
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__WebParallelRoad(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: ownership
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cur_road_limit_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cross_image
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__WebCrossImage(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: cur_cross_dir
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cur_cross_dist
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_gaode_routing_msgs__msg__WebCallBack;
    is_plain =
      (
      offsetof(DataType, cur_cross_dist) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _WebCallBack__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_gaode_routing_msgs__msg__WebCallBack(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WebCallBack = {
  "deva_gaode_routing_msgs::msg",
  "WebCallBack",
  _WebCallBack__cdr_serialize,
  _WebCallBack__cdr_deserialize,
  _WebCallBack__get_serialized_size,
  _WebCallBack__max_serialized_size
};

static rosidl_message_type_support_t _WebCallBack__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WebCallBack,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebCallBack)() {
  return &_WebCallBack__type_support;
}

#if defined(__cplusplus)
}
#endif

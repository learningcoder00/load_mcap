// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from environment_model_msgs:msg/EnvLine.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/env_line__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "environment_model_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "environment_model_msgs/msg/detail/env_line__struct.h"
#include "environment_model_msgs/msg/detail/env_line__functions.h"
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

#include "environment_model_msgs/msg/detail/env_point__functions.h"  // env_points
#include "environment_model_msgs/msg/detail/map_ids__functions.h"  // left_ids_map, overwide_pairs, right_ids_map
#include "environment_model_msgs/msg/detail/navi_score__functions.h"  // navi_score
#include "environment_model_msgs/msg/detail/pair_double_int__functions.h"  // merge_pos
#include "environment_model_msgs/msg/detail/pair_int__functions.h"  // channel_id, last_ids, perception_ids
#include "environment_model_msgs/msg/detail/pair_string__functions.h"  // signal_infos
#include "environment_model_msgs/msg/detail/pair_string_double__functions.h"  // object_infos
#include "environment_model_msgs/msg/detail/road_struct_type__functions.h"  // road_struct_type
#include "environment_model_msgs/msg/detail/vec2d__functions.h"  // left_road_bound_line, right_road_bound_line
#include "environment_model_msgs/msg/detail/virtual_line_info__functions.h"  // virtual_line_infos
#include "rosidl_runtime_c/primitives_sequence.h"  // lk_lines, merge_lines, split_lines
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // lk_lines, merge_lines, split_lines
#include "rosidl_runtime_c/string.h"  // lane_id, lane_sequence
#include "rosidl_runtime_c/string_functions.h"  // lane_id, lane_sequence

// forward declare type support functions
size_t get_serialized_size_environment_model_msgs__msg__EnvPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_environment_model_msgs__msg__EnvPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, EnvPoint)();
size_t get_serialized_size_environment_model_msgs__msg__MapIds(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_environment_model_msgs__msg__MapIds(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, MapIds)();
size_t get_serialized_size_environment_model_msgs__msg__NaviScore(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_environment_model_msgs__msg__NaviScore(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, NaviScore)();
size_t get_serialized_size_environment_model_msgs__msg__PairDoubleInt(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_environment_model_msgs__msg__PairDoubleInt(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, PairDoubleInt)();
size_t get_serialized_size_environment_model_msgs__msg__PairInt(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_environment_model_msgs__msg__PairInt(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, PairInt)();
size_t get_serialized_size_environment_model_msgs__msg__PairString(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_environment_model_msgs__msg__PairString(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, PairString)();
size_t get_serialized_size_environment_model_msgs__msg__PairStringDouble(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_environment_model_msgs__msg__PairStringDouble(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, PairStringDouble)();
size_t get_serialized_size_environment_model_msgs__msg__RoadStructType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_environment_model_msgs__msg__RoadStructType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, RoadStructType)();
size_t get_serialized_size_environment_model_msgs__msg__Vec2d(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_environment_model_msgs__msg__Vec2d(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, Vec2d)();
size_t get_serialized_size_environment_model_msgs__msg__VirtualLineInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_environment_model_msgs__msg__VirtualLineInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, VirtualLineInfo)();


using _EnvLine__ros_msg_type = environment_model_msgs__msg__EnvLine;

static bool _EnvLine__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EnvLine__ros_msg_type * ros_message = static_cast<const _EnvLine__ros_msg_type *>(untyped_ros_message);
  // Field name: env_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, EnvPoint
      )()->data);
    size_t size = ros_message->env_points.size;
    auto array_ptr = ros_message->env_points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: last_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, PairInt
      )()->data);
    size_t size = ros_message->last_ids.size;
    auto array_ptr = ros_message->last_ids.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: perception_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, PairInt
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->perception_ids, cdr))
    {
      return false;
    }
  }

  // Field name: ego_s
  {
    cdr << ros_message->ego_s;
  }

  // Field name: ego_l
  {
    cdr << ros_message->ego_l;
  }

  // Field name: is_on_road
  {
    cdr << (ros_message->is_on_road ? true : false);
  }

  // Field name: routing_status
  {
    cdr << ros_message->routing_status;
  }

  // Field name: is_reverse
  {
    cdr << (ros_message->is_reverse ? true : false);
  }

  // Field name: enum_turn_scenario
  {
    cdr << ros_message->enum_turn_scenario;
  }

  // Field name: merge_lines
  {
    size_t size = ros_message->merge_lines.size;
    auto array_ptr = ros_message->merge_lines.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: split_lines
  {
    size_t size = ros_message->split_lines.size;
    auto array_ptr = ros_message->split_lines.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: merge_pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, PairDoubleInt
      )()->data);
    size_t size = ros_message->merge_pos.size;
    auto array_ptr = ros_message->merge_pos.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: lk_lines
  {
    size_t size = ros_message->lk_lines.size;
    auto array_ptr = ros_message->lk_lines.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: left_ids_map
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, MapIds
      )()->data);
    size_t size = ros_message->left_ids_map.size;
    auto array_ptr = ros_message->left_ids_map.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: right_ids_map
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, MapIds
      )()->data);
    size_t size = ros_message->right_ids_map.size;
    auto array_ptr = ros_message->right_ids_map.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: enum_road_struct_type
  {
    cdr << ros_message->enum_road_struct_type;
  }

  // Field name: road_struct_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, RoadStructType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->road_struct_type, cdr))
    {
      return false;
    }
  }

  // Field name: signal_infos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, PairString
      )()->data);
    size_t size = ros_message->signal_infos.size;
    auto array_ptr = ros_message->signal_infos.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: object_infos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, PairStringDouble
      )()->data);
    size_t size = ros_message->object_infos.size;
    auto array_ptr = ros_message->object_infos.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: navi_score
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, NaviScore
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->navi_score, cdr))
    {
      return false;
    }
  }

  // Field name: virtual_line_infos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, VirtualLineInfo
      )()->data);
    size_t size = ros_message->virtual_line_infos.size;
    auto array_ptr = ros_message->virtual_line_infos.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: left_road_bound_line
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, Vec2d
      )()->data);
    size_t size = ros_message->left_road_bound_line.size;
    auto array_ptr = ros_message->left_road_bound_line.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: right_road_bound_line
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, Vec2d
      )()->data);
    size_t size = ros_message->right_road_bound_line.size;
    auto array_ptr = ros_message->right_road_bound_line.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: lane_offset
  {
    cdr << ros_message->lane_offset;
  }

  // Field name: lane_id
  {
    const rosidl_runtime_c__String * str = &ros_message->lane_id;
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

  // Field name: lane_sequence
  {
    size_t size = ros_message->lane_sequence.size;
    auto array_ptr = ros_message->lane_sequence.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: lane_seq_id
  {
    cdr << ros_message->lane_seq_id;
  }

  // Field name: channel_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, PairInt
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->channel_id, cdr))
    {
      return false;
    }
  }

  // Field name: virtual_line_to
  {
    cdr << (ros_message->virtual_line_to ? true : false);
  }

  // Field name: midd_line_id
  {
    cdr << ros_message->midd_line_id;
  }

  // Field name: overwide_pairs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, MapIds
      )()->data);
    size_t size = ros_message->overwide_pairs.size;
    auto array_ptr = ros_message->overwide_pairs.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: usemdriver
  {
    cdr << (ros_message->usemdriver ? true : false);
  }

  return true;
}

static bool _EnvLine__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EnvLine__ros_msg_type * ros_message = static_cast<_EnvLine__ros_msg_type *>(untyped_ros_message);
  // Field name: env_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, EnvPoint
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

    if (ros_message->env_points.data) {
      environment_model_msgs__msg__EnvPoint__Sequence__fini(&ros_message->env_points);
    }
    if (!environment_model_msgs__msg__EnvPoint__Sequence__init(&ros_message->env_points, size)) {
      fprintf(stderr, "failed to create array for field 'env_points'");
      return false;
    }
    auto array_ptr = ros_message->env_points.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: last_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, PairInt
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

    if (ros_message->last_ids.data) {
      environment_model_msgs__msg__PairInt__Sequence__fini(&ros_message->last_ids);
    }
    if (!environment_model_msgs__msg__PairInt__Sequence__init(&ros_message->last_ids, size)) {
      fprintf(stderr, "failed to create array for field 'last_ids'");
      return false;
    }
    auto array_ptr = ros_message->last_ids.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: perception_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, PairInt
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->perception_ids))
    {
      return false;
    }
  }

  // Field name: ego_s
  {
    cdr >> ros_message->ego_s;
  }

  // Field name: ego_l
  {
    cdr >> ros_message->ego_l;
  }

  // Field name: is_on_road
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_on_road = tmp ? true : false;
  }

  // Field name: routing_status
  {
    cdr >> ros_message->routing_status;
  }

  // Field name: is_reverse
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_reverse = tmp ? true : false;
  }

  // Field name: enum_turn_scenario
  {
    cdr >> ros_message->enum_turn_scenario;
  }

  // Field name: merge_lines
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

    if (ros_message->merge_lines.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->merge_lines);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->merge_lines, size)) {
      fprintf(stderr, "failed to create array for field 'merge_lines'");
      return false;
    }
    auto array_ptr = ros_message->merge_lines.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: split_lines
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

    if (ros_message->split_lines.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->split_lines);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->split_lines, size)) {
      fprintf(stderr, "failed to create array for field 'split_lines'");
      return false;
    }
    auto array_ptr = ros_message->split_lines.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: merge_pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, PairDoubleInt
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

    if (ros_message->merge_pos.data) {
      environment_model_msgs__msg__PairDoubleInt__Sequence__fini(&ros_message->merge_pos);
    }
    if (!environment_model_msgs__msg__PairDoubleInt__Sequence__init(&ros_message->merge_pos, size)) {
      fprintf(stderr, "failed to create array for field 'merge_pos'");
      return false;
    }
    auto array_ptr = ros_message->merge_pos.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: lk_lines
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

    if (ros_message->lk_lines.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->lk_lines);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->lk_lines, size)) {
      fprintf(stderr, "failed to create array for field 'lk_lines'");
      return false;
    }
    auto array_ptr = ros_message->lk_lines.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: left_ids_map
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, MapIds
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

    if (ros_message->left_ids_map.data) {
      environment_model_msgs__msg__MapIds__Sequence__fini(&ros_message->left_ids_map);
    }
    if (!environment_model_msgs__msg__MapIds__Sequence__init(&ros_message->left_ids_map, size)) {
      fprintf(stderr, "failed to create array for field 'left_ids_map'");
      return false;
    }
    auto array_ptr = ros_message->left_ids_map.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: right_ids_map
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, MapIds
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

    if (ros_message->right_ids_map.data) {
      environment_model_msgs__msg__MapIds__Sequence__fini(&ros_message->right_ids_map);
    }
    if (!environment_model_msgs__msg__MapIds__Sequence__init(&ros_message->right_ids_map, size)) {
      fprintf(stderr, "failed to create array for field 'right_ids_map'");
      return false;
    }
    auto array_ptr = ros_message->right_ids_map.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: enum_road_struct_type
  {
    cdr >> ros_message->enum_road_struct_type;
  }

  // Field name: road_struct_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, RoadStructType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->road_struct_type))
    {
      return false;
    }
  }

  // Field name: signal_infos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, PairString
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

    if (ros_message->signal_infos.data) {
      environment_model_msgs__msg__PairString__Sequence__fini(&ros_message->signal_infos);
    }
    if (!environment_model_msgs__msg__PairString__Sequence__init(&ros_message->signal_infos, size)) {
      fprintf(stderr, "failed to create array for field 'signal_infos'");
      return false;
    }
    auto array_ptr = ros_message->signal_infos.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: object_infos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, PairStringDouble
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

    if (ros_message->object_infos.data) {
      environment_model_msgs__msg__PairStringDouble__Sequence__fini(&ros_message->object_infos);
    }
    if (!environment_model_msgs__msg__PairStringDouble__Sequence__init(&ros_message->object_infos, size)) {
      fprintf(stderr, "failed to create array for field 'object_infos'");
      return false;
    }
    auto array_ptr = ros_message->object_infos.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: navi_score
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, NaviScore
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->navi_score))
    {
      return false;
    }
  }

  // Field name: virtual_line_infos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, VirtualLineInfo
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

    if (ros_message->virtual_line_infos.data) {
      environment_model_msgs__msg__VirtualLineInfo__Sequence__fini(&ros_message->virtual_line_infos);
    }
    if (!environment_model_msgs__msg__VirtualLineInfo__Sequence__init(&ros_message->virtual_line_infos, size)) {
      fprintf(stderr, "failed to create array for field 'virtual_line_infos'");
      return false;
    }
    auto array_ptr = ros_message->virtual_line_infos.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: left_road_bound_line
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, Vec2d
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

    if (ros_message->left_road_bound_line.data) {
      environment_model_msgs__msg__Vec2d__Sequence__fini(&ros_message->left_road_bound_line);
    }
    if (!environment_model_msgs__msg__Vec2d__Sequence__init(&ros_message->left_road_bound_line, size)) {
      fprintf(stderr, "failed to create array for field 'left_road_bound_line'");
      return false;
    }
    auto array_ptr = ros_message->left_road_bound_line.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: right_road_bound_line
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, Vec2d
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

    if (ros_message->right_road_bound_line.data) {
      environment_model_msgs__msg__Vec2d__Sequence__fini(&ros_message->right_road_bound_line);
    }
    if (!environment_model_msgs__msg__Vec2d__Sequence__init(&ros_message->right_road_bound_line, size)) {
      fprintf(stderr, "failed to create array for field 'right_road_bound_line'");
      return false;
    }
    auto array_ptr = ros_message->right_road_bound_line.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: lane_offset
  {
    cdr >> ros_message->lane_offset;
  }

  // Field name: lane_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->lane_id.data) {
      rosidl_runtime_c__String__init(&ros_message->lane_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->lane_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'lane_id'\n");
      return false;
    }
  }

  // Field name: lane_sequence
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

    if (ros_message->lane_sequence.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->lane_sequence);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->lane_sequence, size)) {
      fprintf(stderr, "failed to create array for field 'lane_sequence'");
      return false;
    }
    auto array_ptr = ros_message->lane_sequence.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'lane_sequence'\n");
        return false;
      }
    }
  }

  // Field name: lane_seq_id
  {
    cdr >> ros_message->lane_seq_id;
  }

  // Field name: channel_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, PairInt
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->channel_id))
    {
      return false;
    }
  }

  // Field name: virtual_line_to
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->virtual_line_to = tmp ? true : false;
  }

  // Field name: midd_line_id
  {
    cdr >> ros_message->midd_line_id;
  }

  // Field name: overwide_pairs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, MapIds
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

    if (ros_message->overwide_pairs.data) {
      environment_model_msgs__msg__MapIds__Sequence__fini(&ros_message->overwide_pairs);
    }
    if (!environment_model_msgs__msg__MapIds__Sequence__init(&ros_message->overwide_pairs, size)) {
      fprintf(stderr, "failed to create array for field 'overwide_pairs'");
      return false;
    }
    auto array_ptr = ros_message->overwide_pairs.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: usemdriver
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->usemdriver = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_model_msgs
size_t get_serialized_size_environment_model_msgs__msg__EnvLine(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EnvLine__ros_msg_type * ros_message = static_cast<const _EnvLine__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name env_points
  {
    size_t array_size = ros_message->env_points.size;
    auto array_ptr = ros_message->env_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__EnvPoint(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name last_ids
  {
    size_t array_size = ros_message->last_ids.size;
    auto array_ptr = ros_message->last_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__PairInt(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name perception_ids

  current_alignment += get_serialized_size_environment_model_msgs__msg__PairInt(
    &(ros_message->perception_ids), current_alignment);
  // field.name ego_s
  {
    size_t item_size = sizeof(ros_message->ego_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ego_l
  {
    size_t item_size = sizeof(ros_message->ego_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_on_road
  {
    size_t item_size = sizeof(ros_message->is_on_road);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name routing_status
  {
    size_t item_size = sizeof(ros_message->routing_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_reverse
  {
    size_t item_size = sizeof(ros_message->is_reverse);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enum_turn_scenario
  {
    size_t item_size = sizeof(ros_message->enum_turn_scenario);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name merge_lines
  {
    size_t array_size = ros_message->merge_lines.size;
    auto array_ptr = ros_message->merge_lines.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name split_lines
  {
    size_t array_size = ros_message->split_lines.size;
    auto array_ptr = ros_message->split_lines.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name merge_pos
  {
    size_t array_size = ros_message->merge_pos.size;
    auto array_ptr = ros_message->merge_pos.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__PairDoubleInt(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name lk_lines
  {
    size_t array_size = ros_message->lk_lines.size;
    auto array_ptr = ros_message->lk_lines.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_ids_map
  {
    size_t array_size = ros_message->left_ids_map.size;
    auto array_ptr = ros_message->left_ids_map.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__MapIds(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name right_ids_map
  {
    size_t array_size = ros_message->right_ids_map.size;
    auto array_ptr = ros_message->right_ids_map.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__MapIds(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name enum_road_struct_type
  {
    size_t item_size = sizeof(ros_message->enum_road_struct_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name road_struct_type

  current_alignment += get_serialized_size_environment_model_msgs__msg__RoadStructType(
    &(ros_message->road_struct_type), current_alignment);
  // field.name signal_infos
  {
    size_t array_size = ros_message->signal_infos.size;
    auto array_ptr = ros_message->signal_infos.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__PairString(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name object_infos
  {
    size_t array_size = ros_message->object_infos.size;
    auto array_ptr = ros_message->object_infos.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__PairStringDouble(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name navi_score

  current_alignment += get_serialized_size_environment_model_msgs__msg__NaviScore(
    &(ros_message->navi_score), current_alignment);
  // field.name virtual_line_infos
  {
    size_t array_size = ros_message->virtual_line_infos.size;
    auto array_ptr = ros_message->virtual_line_infos.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__VirtualLineInfo(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name left_road_bound_line
  {
    size_t array_size = ros_message->left_road_bound_line.size;
    auto array_ptr = ros_message->left_road_bound_line.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__Vec2d(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name right_road_bound_line
  {
    size_t array_size = ros_message->right_road_bound_line.size;
    auto array_ptr = ros_message->right_road_bound_line.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__Vec2d(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name lane_offset
  {
    size_t item_size = sizeof(ros_message->lane_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->lane_id.size + 1);
  // field.name lane_sequence
  {
    size_t array_size = ros_message->lane_sequence.size;
    auto array_ptr = ros_message->lane_sequence.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name lane_seq_id
  {
    size_t item_size = sizeof(ros_message->lane_seq_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name channel_id

  current_alignment += get_serialized_size_environment_model_msgs__msg__PairInt(
    &(ros_message->channel_id), current_alignment);
  // field.name virtual_line_to
  {
    size_t item_size = sizeof(ros_message->virtual_line_to);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name midd_line_id
  {
    size_t item_size = sizeof(ros_message->midd_line_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name overwide_pairs
  {
    size_t array_size = ros_message->overwide_pairs.size;
    auto array_ptr = ros_message->overwide_pairs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__MapIds(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name usemdriver
  {
    size_t item_size = sizeof(ros_message->usemdriver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EnvLine__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_environment_model_msgs__msg__EnvLine(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_model_msgs
size_t max_serialized_size_environment_model_msgs__msg__EnvLine(
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

  // member: env_points
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
        max_serialized_size_environment_model_msgs__msg__EnvPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: last_ids
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
        max_serialized_size_environment_model_msgs__msg__PairInt(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: perception_ids
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_environment_model_msgs__msg__PairInt(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: ego_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ego_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: is_on_road
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: routing_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_reverse
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enum_turn_scenario
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: merge_lines
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: split_lines
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: merge_pos
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
        max_serialized_size_environment_model_msgs__msg__PairDoubleInt(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: lk_lines
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_ids_map
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
        max_serialized_size_environment_model_msgs__msg__MapIds(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: right_ids_map
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
        max_serialized_size_environment_model_msgs__msg__MapIds(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: enum_road_struct_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: road_struct_type
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_environment_model_msgs__msg__RoadStructType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: signal_infos
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
        max_serialized_size_environment_model_msgs__msg__PairString(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: object_infos
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
        max_serialized_size_environment_model_msgs__msg__PairStringDouble(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: navi_score
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_environment_model_msgs__msg__NaviScore(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: virtual_line_infos
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
        max_serialized_size_environment_model_msgs__msg__VirtualLineInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: left_road_bound_line
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
        max_serialized_size_environment_model_msgs__msg__Vec2d(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: right_road_bound_line
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
        max_serialized_size_environment_model_msgs__msg__Vec2d(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: lane_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lane_id
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
  // member: lane_sequence
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: lane_seq_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: channel_id
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_environment_model_msgs__msg__PairInt(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: virtual_line_to
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: midd_line_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: overwide_pairs
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
        max_serialized_size_environment_model_msgs__msg__MapIds(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: usemdriver
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
    using DataType = environment_model_msgs__msg__EnvLine;
    is_plain =
      (
      offsetof(DataType, usemdriver) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EnvLine__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_environment_model_msgs__msg__EnvLine(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EnvLine = {
  "environment_model_msgs::msg",
  "EnvLine",
  _EnvLine__cdr_serialize,
  _EnvLine__cdr_deserialize,
  _EnvLine__get_serialized_size,
  _EnvLine__max_serialized_size
};

static rosidl_message_type_support_t _EnvLine__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EnvLine,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, EnvLine)() {
  return &_EnvLine__type_support;
}

#if defined(__cplusplus)
}
#endif

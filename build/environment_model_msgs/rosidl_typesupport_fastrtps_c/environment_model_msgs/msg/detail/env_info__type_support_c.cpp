// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from environment_model_msgs:msg/EnvInfo.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/env_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "environment_model_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "environment_model_msgs/msg/detail/env_info__struct.h"
#include "environment_model_msgs/msg/detail/env_info__functions.h"
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

#include "deva_common_msgs/msg/detail/header__functions.h"  // env_start_header, header, map_header
#include "environment_model_msgs/msg/detail/env_line__functions.h"  // env_lines
#include "environment_model_msgs/msg/detail/env_link__functions.h"  // links
#include "environment_model_msgs/msg/detail/env_object__functions.h"  // env_objects
#include "environment_model_msgs/msg/detail/env_signal__functions.h"  // env_signals
#include "environment_model_msgs/msg/detail/road_boundary__functions.h"  // road_boundaries
#include "environment_model_msgs/msg/detail/scenario_info__functions.h"  // scenario_info
#include "environment_model_msgs/msg/detail/vec2d__functions.h"  // junction_box, roadline, roadline_final
#include "environment_model_msgs/msg/detail/vec2d_array__functions.h"  // hdair_driveline, law_space, law_space_merged, passable_space

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_environment_model_msgs
size_t get_serialized_size_deva_common_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_environment_model_msgs
size_t max_serialized_size_deva_common_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_environment_model_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header)();
size_t get_serialized_size_environment_model_msgs__msg__EnvLine(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_environment_model_msgs__msg__EnvLine(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, EnvLine)();
size_t get_serialized_size_environment_model_msgs__msg__EnvLink(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_environment_model_msgs__msg__EnvLink(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, EnvLink)();
size_t get_serialized_size_environment_model_msgs__msg__EnvObject(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_environment_model_msgs__msg__EnvObject(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, EnvObject)();
size_t get_serialized_size_environment_model_msgs__msg__EnvSignal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_environment_model_msgs__msg__EnvSignal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, EnvSignal)();
size_t get_serialized_size_environment_model_msgs__msg__RoadBoundary(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_environment_model_msgs__msg__RoadBoundary(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, RoadBoundary)();
size_t get_serialized_size_environment_model_msgs__msg__ScenarioInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_environment_model_msgs__msg__ScenarioInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, ScenarioInfo)();
size_t get_serialized_size_environment_model_msgs__msg__Vec2d(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_environment_model_msgs__msg__Vec2d(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, Vec2d)();
size_t get_serialized_size_environment_model_msgs__msg__Vec2dArray(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_environment_model_msgs__msg__Vec2dArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, Vec2dArray)();


using _EnvInfo__ros_msg_type = environment_model_msgs__msg__EnvInfo;

static bool _EnvInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EnvInfo__ros_msg_type * ros_message = static_cast<const _EnvInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: index
  {
    cdr << ros_message->index;
  }

  // Field name: env_lines
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, EnvLine
      )()->data);
    size_t size = ros_message->env_lines.size;
    auto array_ptr = ros_message->env_lines.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: env_objects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, EnvObject
      )()->data);
    size_t size = ros_message->env_objects.size;
    auto array_ptr = ros_message->env_objects.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: env_signals
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, EnvSignal
      )()->data);
    size_t size = ros_message->env_signals.size;
    auto array_ptr = ros_message->env_signals.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: junction_box
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, Vec2d
      )()->data);
    size_t size = ros_message->junction_box.size;
    auto array_ptr = ros_message->junction_box.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: env_start_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->env_start_header, cdr))
    {
      return false;
    }
  }

  // Field name: map_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->map_header, cdr))
    {
      return false;
    }
  }

  // Field name: map_mode
  {
    cdr << ros_message->map_mode;
  }

  // Field name: routing_mode
  {
    cdr << ros_message->routing_mode;
  }

  // Field name: navi_index
  {
    cdr << ros_message->navi_index;
  }

  // Field name: has_map
  {
    cdr << (ros_message->has_map ? true : false);
  }

  // Field name: passable_space
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, Vec2dArray
      )()->data);
    size_t size = ros_message->passable_space.size;
    auto array_ptr = ros_message->passable_space.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: law_space
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, Vec2dArray
      )()->data);
    size_t size = ros_message->law_space.size;
    auto array_ptr = ros_message->law_space.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: roadline_final
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, Vec2d
      )()->data);
    size_t size = ros_message->roadline_final.size;
    auto array_ptr = ros_message->roadline_final.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: roadline
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, Vec2d
      )()->data);
    size_t size = ros_message->roadline.size;
    auto array_ptr = ros_message->roadline.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: law_space_merged
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, Vec2dArray
      )()->data);
    size_t size = ros_message->law_space_merged.size;
    auto array_ptr = ros_message->law_space_merged.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: meg_map_mode
  {
    cdr << ros_message->meg_map_mode;
  }

  // Field name: channel_valid
  {
    cdr << (ros_message->channel_valid ? true : false);
  }

  // Field name: dist_sd_junction
  {
    cdr << ros_message->dist_sd_junction;
  }

  // Field name: hdair_driveline
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, Vec2dArray
      )()->data);
    size_t size = ros_message->hdair_driveline.size;
    auto array_ptr = ros_message->hdair_driveline.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: links
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, EnvLink
      )()->data);
    size_t size = ros_message->links.size;
    auto array_ptr = ros_message->links.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: ownership
  {
    cdr << ros_message->ownership;
  }

  // Field name: road_boundaries
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, RoadBoundary
      )()->data);
    size_t size = ros_message->road_boundaries.size;
    auto array_ptr = ros_message->road_boundaries.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: scenario_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, ScenarioInfo
      )()->data);
    size_t size = ros_message->scenario_info.size;
    auto array_ptr = ros_message->scenario_info.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: highway_scene
  {
    cdr << ros_message->highway_scene;
  }

  return true;
}

static bool _EnvInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EnvInfo__ros_msg_type * ros_message = static_cast<_EnvInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: index
  {
    cdr >> ros_message->index;
  }

  // Field name: env_lines
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, EnvLine
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

    if (ros_message->env_lines.data) {
      environment_model_msgs__msg__EnvLine__Sequence__fini(&ros_message->env_lines);
    }
    if (!environment_model_msgs__msg__EnvLine__Sequence__init(&ros_message->env_lines, size)) {
      fprintf(stderr, "failed to create array for field 'env_lines'");
      return false;
    }
    auto array_ptr = ros_message->env_lines.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: env_objects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, EnvObject
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

    if (ros_message->env_objects.data) {
      environment_model_msgs__msg__EnvObject__Sequence__fini(&ros_message->env_objects);
    }
    if (!environment_model_msgs__msg__EnvObject__Sequence__init(&ros_message->env_objects, size)) {
      fprintf(stderr, "failed to create array for field 'env_objects'");
      return false;
    }
    auto array_ptr = ros_message->env_objects.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: env_signals
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, EnvSignal
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

    if (ros_message->env_signals.data) {
      environment_model_msgs__msg__EnvSignal__Sequence__fini(&ros_message->env_signals);
    }
    if (!environment_model_msgs__msg__EnvSignal__Sequence__init(&ros_message->env_signals, size)) {
      fprintf(stderr, "failed to create array for field 'env_signals'");
      return false;
    }
    auto array_ptr = ros_message->env_signals.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: junction_box
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

    if (ros_message->junction_box.data) {
      environment_model_msgs__msg__Vec2d__Sequence__fini(&ros_message->junction_box);
    }
    if (!environment_model_msgs__msg__Vec2d__Sequence__init(&ros_message->junction_box, size)) {
      fprintf(stderr, "failed to create array for field 'junction_box'");
      return false;
    }
    auto array_ptr = ros_message->junction_box.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: env_start_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->env_start_header))
    {
      return false;
    }
  }

  // Field name: map_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->map_header))
    {
      return false;
    }
  }

  // Field name: map_mode
  {
    cdr >> ros_message->map_mode;
  }

  // Field name: routing_mode
  {
    cdr >> ros_message->routing_mode;
  }

  // Field name: navi_index
  {
    cdr >> ros_message->navi_index;
  }

  // Field name: has_map
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_map = tmp ? true : false;
  }

  // Field name: passable_space
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, Vec2dArray
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

    if (ros_message->passable_space.data) {
      environment_model_msgs__msg__Vec2dArray__Sequence__fini(&ros_message->passable_space);
    }
    if (!environment_model_msgs__msg__Vec2dArray__Sequence__init(&ros_message->passable_space, size)) {
      fprintf(stderr, "failed to create array for field 'passable_space'");
      return false;
    }
    auto array_ptr = ros_message->passable_space.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: law_space
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, Vec2dArray
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

    if (ros_message->law_space.data) {
      environment_model_msgs__msg__Vec2dArray__Sequence__fini(&ros_message->law_space);
    }
    if (!environment_model_msgs__msg__Vec2dArray__Sequence__init(&ros_message->law_space, size)) {
      fprintf(stderr, "failed to create array for field 'law_space'");
      return false;
    }
    auto array_ptr = ros_message->law_space.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: roadline_final
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

    if (ros_message->roadline_final.data) {
      environment_model_msgs__msg__Vec2d__Sequence__fini(&ros_message->roadline_final);
    }
    if (!environment_model_msgs__msg__Vec2d__Sequence__init(&ros_message->roadline_final, size)) {
      fprintf(stderr, "failed to create array for field 'roadline_final'");
      return false;
    }
    auto array_ptr = ros_message->roadline_final.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: roadline
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

    if (ros_message->roadline.data) {
      environment_model_msgs__msg__Vec2d__Sequence__fini(&ros_message->roadline);
    }
    if (!environment_model_msgs__msg__Vec2d__Sequence__init(&ros_message->roadline, size)) {
      fprintf(stderr, "failed to create array for field 'roadline'");
      return false;
    }
    auto array_ptr = ros_message->roadline.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: law_space_merged
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, Vec2dArray
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

    if (ros_message->law_space_merged.data) {
      environment_model_msgs__msg__Vec2dArray__Sequence__fini(&ros_message->law_space_merged);
    }
    if (!environment_model_msgs__msg__Vec2dArray__Sequence__init(&ros_message->law_space_merged, size)) {
      fprintf(stderr, "failed to create array for field 'law_space_merged'");
      return false;
    }
    auto array_ptr = ros_message->law_space_merged.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: meg_map_mode
  {
    cdr >> ros_message->meg_map_mode;
  }

  // Field name: channel_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->channel_valid = tmp ? true : false;
  }

  // Field name: dist_sd_junction
  {
    cdr >> ros_message->dist_sd_junction;
  }

  // Field name: hdair_driveline
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, Vec2dArray
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

    if (ros_message->hdair_driveline.data) {
      environment_model_msgs__msg__Vec2dArray__Sequence__fini(&ros_message->hdair_driveline);
    }
    if (!environment_model_msgs__msg__Vec2dArray__Sequence__init(&ros_message->hdair_driveline, size)) {
      fprintf(stderr, "failed to create array for field 'hdair_driveline'");
      return false;
    }
    auto array_ptr = ros_message->hdair_driveline.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: links
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, EnvLink
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

    if (ros_message->links.data) {
      environment_model_msgs__msg__EnvLink__Sequence__fini(&ros_message->links);
    }
    if (!environment_model_msgs__msg__EnvLink__Sequence__init(&ros_message->links, size)) {
      fprintf(stderr, "failed to create array for field 'links'");
      return false;
    }
    auto array_ptr = ros_message->links.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: ownership
  {
    cdr >> ros_message->ownership;
  }

  // Field name: road_boundaries
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, RoadBoundary
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

    if (ros_message->road_boundaries.data) {
      environment_model_msgs__msg__RoadBoundary__Sequence__fini(&ros_message->road_boundaries);
    }
    if (!environment_model_msgs__msg__RoadBoundary__Sequence__init(&ros_message->road_boundaries, size)) {
      fprintf(stderr, "failed to create array for field 'road_boundaries'");
      return false;
    }
    auto array_ptr = ros_message->road_boundaries.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: scenario_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, ScenarioInfo
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

    if (ros_message->scenario_info.data) {
      environment_model_msgs__msg__ScenarioInfo__Sequence__fini(&ros_message->scenario_info);
    }
    if (!environment_model_msgs__msg__ScenarioInfo__Sequence__init(&ros_message->scenario_info, size)) {
      fprintf(stderr, "failed to create array for field 'scenario_info'");
      return false;
    }
    auto array_ptr = ros_message->scenario_info.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: highway_scene
  {
    cdr >> ros_message->highway_scene;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_model_msgs
size_t get_serialized_size_environment_model_msgs__msg__EnvInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EnvInfo__ros_msg_type * ros_message = static_cast<const _EnvInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_deva_common_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name index
  {
    size_t item_size = sizeof(ros_message->index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name env_lines
  {
    size_t array_size = ros_message->env_lines.size;
    auto array_ptr = ros_message->env_lines.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__EnvLine(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name env_objects
  {
    size_t array_size = ros_message->env_objects.size;
    auto array_ptr = ros_message->env_objects.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__EnvObject(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name env_signals
  {
    size_t array_size = ros_message->env_signals.size;
    auto array_ptr = ros_message->env_signals.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__EnvSignal(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name junction_box
  {
    size_t array_size = ros_message->junction_box.size;
    auto array_ptr = ros_message->junction_box.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__Vec2d(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name env_start_header

  current_alignment += get_serialized_size_deva_common_msgs__msg__Header(
    &(ros_message->env_start_header), current_alignment);
  // field.name map_header

  current_alignment += get_serialized_size_deva_common_msgs__msg__Header(
    &(ros_message->map_header), current_alignment);
  // field.name map_mode
  {
    size_t item_size = sizeof(ros_message->map_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name routing_mode
  {
    size_t item_size = sizeof(ros_message->routing_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name navi_index
  {
    size_t item_size = sizeof(ros_message->navi_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_map
  {
    size_t item_size = sizeof(ros_message->has_map);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name passable_space
  {
    size_t array_size = ros_message->passable_space.size;
    auto array_ptr = ros_message->passable_space.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__Vec2dArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name law_space
  {
    size_t array_size = ros_message->law_space.size;
    auto array_ptr = ros_message->law_space.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__Vec2dArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name roadline_final
  {
    size_t array_size = ros_message->roadline_final.size;
    auto array_ptr = ros_message->roadline_final.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__Vec2d(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name roadline
  {
    size_t array_size = ros_message->roadline.size;
    auto array_ptr = ros_message->roadline.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__Vec2d(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name law_space_merged
  {
    size_t array_size = ros_message->law_space_merged.size;
    auto array_ptr = ros_message->law_space_merged.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__Vec2dArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name meg_map_mode
  {
    size_t item_size = sizeof(ros_message->meg_map_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name channel_valid
  {
    size_t item_size = sizeof(ros_message->channel_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dist_sd_junction
  {
    size_t item_size = sizeof(ros_message->dist_sd_junction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hdair_driveline
  {
    size_t array_size = ros_message->hdair_driveline.size;
    auto array_ptr = ros_message->hdair_driveline.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__Vec2dArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name links
  {
    size_t array_size = ros_message->links.size;
    auto array_ptr = ros_message->links.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__EnvLink(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name ownership
  {
    size_t item_size = sizeof(ros_message->ownership);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name road_boundaries
  {
    size_t array_size = ros_message->road_boundaries.size;
    auto array_ptr = ros_message->road_boundaries.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__RoadBoundary(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name scenario_info
  {
    size_t array_size = ros_message->scenario_info.size;
    auto array_ptr = ros_message->scenario_info.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__ScenarioInfo(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name highway_scene
  {
    size_t item_size = sizeof(ros_message->highway_scene);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EnvInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_environment_model_msgs__msg__EnvInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_model_msgs
size_t max_serialized_size_environment_model_msgs__msg__EnvInfo(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_common_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: env_lines
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
        max_serialized_size_environment_model_msgs__msg__EnvLine(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: env_objects
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
        max_serialized_size_environment_model_msgs__msg__EnvObject(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: env_signals
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
        max_serialized_size_environment_model_msgs__msg__EnvSignal(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: junction_box
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
  // member: env_start_header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_common_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: map_header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_common_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: map_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: routing_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: navi_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: has_map
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: passable_space
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
        max_serialized_size_environment_model_msgs__msg__Vec2dArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: law_space
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
        max_serialized_size_environment_model_msgs__msg__Vec2dArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: roadline_final
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
  // member: roadline
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
  // member: law_space_merged
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
        max_serialized_size_environment_model_msgs__msg__Vec2dArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: meg_map_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: channel_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dist_sd_junction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: hdair_driveline
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
        max_serialized_size_environment_model_msgs__msg__Vec2dArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: links
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
        max_serialized_size_environment_model_msgs__msg__EnvLink(
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
  // member: road_boundaries
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
        max_serialized_size_environment_model_msgs__msg__RoadBoundary(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: scenario_info
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
        max_serialized_size_environment_model_msgs__msg__ScenarioInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: highway_scene
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
    using DataType = environment_model_msgs__msg__EnvInfo;
    is_plain =
      (
      offsetof(DataType, highway_scene) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EnvInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_environment_model_msgs__msg__EnvInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EnvInfo = {
  "environment_model_msgs::msg",
  "EnvInfo",
  _EnvInfo__cdr_serialize,
  _EnvInfo__cdr_deserialize,
  _EnvInfo__get_serialized_size,
  _EnvInfo__max_serialized_size
};

static rosidl_message_type_support_t _EnvInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EnvInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, EnvInfo)() {
  return &_EnvInfo__type_support;
}

#if defined(__cplusplus)
}
#endif

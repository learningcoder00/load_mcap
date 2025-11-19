// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_perception_msgs:msg/RVDynObstacle.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/rv_dyn_obstacle__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_perception_msgs/msg/detail/rv_dyn_obstacle__struct.h"
#include "deva_perception_msgs/msg/detail/rv_dyn_obstacle__functions.h"
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

#include "deva_common_msgs/msg/detail/bounding_box2d__functions.h"  // bbox, head_bbox, ped_bbox, tail_bbox
#include "deva_common_msgs/msg/detail/ground_point__functions.h"  // ground_points
#include "deva_perception_msgs/msg/detail/extra_info__functions.h"  // extra_infos
#include "deva_perception_msgs/msg/detail/obstacle_common__functions.h"  // obstacle
#include "deva_perception_msgs/msg/detail/subclassification_type__functions.h"  // subclassification_type

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_perception_msgs
size_t get_serialized_size_deva_common_msgs__msg__BoundingBox2d(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_perception_msgs
size_t max_serialized_size_deva_common_msgs__msg__BoundingBox2d(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_perception_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, BoundingBox2d)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_perception_msgs
size_t get_serialized_size_deva_common_msgs__msg__GroundPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_perception_msgs
size_t max_serialized_size_deva_common_msgs__msg__GroundPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_perception_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, GroundPoint)();
size_t get_serialized_size_deva_perception_msgs__msg__ExtraInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_perception_msgs__msg__ExtraInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, ExtraInfo)();
size_t get_serialized_size_deva_perception_msgs__msg__ObstacleCommon(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_perception_msgs__msg__ObstacleCommon(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, ObstacleCommon)();
size_t get_serialized_size_deva_perception_msgs__msg__SubclassificationType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_perception_msgs__msg__SubclassificationType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, SubclassificationType)();


using _RVDynObstacle__ros_msg_type = deva_perception_msgs__msg__RVDynObstacle;

static bool _RVDynObstacle__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RVDynObstacle__ros_msg_type * ros_message = static_cast<const _RVDynObstacle__ros_msg_type *>(untyped_ros_message);
  // Field name: obstacle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, ObstacleCommon
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->obstacle, cdr))
    {
      return false;
    }
  }

  // Field name: dynamic_obstacle_type
  {
    cdr << ros_message->dynamic_obstacle_type;
  }

  // Field name: det_score
  {
    cdr << ros_message->det_score;
  }

  // Field name: bbox
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, BoundingBox2d
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bbox, cdr))
    {
      return false;
    }
  }

  // Field name: head_bbox
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, BoundingBox2d
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->head_bbox, cdr))
    {
      return false;
    }
  }

  // Field name: tail_bbox
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, BoundingBox2d
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tail_bbox, cdr))
    {
      return false;
    }
  }

  // Field name: ground_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, GroundPoint
      )()->data);
    size_t size = ros_message->ground_points.size;
    auto array_ptr = ros_message->ground_points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: full_occ_score
  {
    cdr << ros_message->full_occ_score;
  }

  // Field name: head_occ_score
  {
    cdr << ros_message->head_occ_score;
  }

  // Field name: tail_occ_score
  {
    cdr << ros_message->tail_occ_score;
  }

  // Field name: full_trunc_score
  {
    cdr << ros_message->full_trunc_score;
  }

  // Field name: head_trunc_score
  {
    cdr << ros_message->head_trunc_score;
  }

  // Field name: tail_trunc_score
  {
    cdr << ros_message->tail_trunc_score;
  }

  // Field name: ped_bbox
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, BoundingBox2d
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ped_bbox, cdr))
    {
      return false;
    }
  }

  // Field name: subclassification_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, SubclassificationType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->subclassification_type, cdr))
    {
      return false;
    }
  }

  // Field name: subclass_score
  {
    cdr << ros_message->subclass_score;
  }

  // Field name: light_valid
  {
    cdr << (ros_message->light_valid ? true : false);
  }

  // Field name: turn_type
  {
    cdr << ros_message->turn_type;
  }

  // Field name: turn_score
  {
    cdr << ros_message->turn_score;
  }

  // Field name: brake_type
  {
    cdr << ros_message->brake_type;
  }

  // Field name: brake_score
  {
    cdr << ros_message->brake_score;
  }

  // Field name: hazard_type
  {
    cdr << ros_message->hazard_type;
  }

  // Field name: hazard_score
  {
    cdr << ros_message->hazard_score;
  }

  // Field name: extra_infos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, ExtraInfo
      )()->data);
    size_t size = ros_message->extra_infos.size;
    auto array_ptr = ros_message->extra_infos.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _RVDynObstacle__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RVDynObstacle__ros_msg_type * ros_message = static_cast<_RVDynObstacle__ros_msg_type *>(untyped_ros_message);
  // Field name: obstacle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, ObstacleCommon
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->obstacle))
    {
      return false;
    }
  }

  // Field name: dynamic_obstacle_type
  {
    cdr >> ros_message->dynamic_obstacle_type;
  }

  // Field name: det_score
  {
    cdr >> ros_message->det_score;
  }

  // Field name: bbox
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, BoundingBox2d
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bbox))
    {
      return false;
    }
  }

  // Field name: head_bbox
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, BoundingBox2d
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->head_bbox))
    {
      return false;
    }
  }

  // Field name: tail_bbox
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, BoundingBox2d
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tail_bbox))
    {
      return false;
    }
  }

  // Field name: ground_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, GroundPoint
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

    if (ros_message->ground_points.data) {
      deva_common_msgs__msg__GroundPoint__Sequence__fini(&ros_message->ground_points);
    }
    if (!deva_common_msgs__msg__GroundPoint__Sequence__init(&ros_message->ground_points, size)) {
      fprintf(stderr, "failed to create array for field 'ground_points'");
      return false;
    }
    auto array_ptr = ros_message->ground_points.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: full_occ_score
  {
    cdr >> ros_message->full_occ_score;
  }

  // Field name: head_occ_score
  {
    cdr >> ros_message->head_occ_score;
  }

  // Field name: tail_occ_score
  {
    cdr >> ros_message->tail_occ_score;
  }

  // Field name: full_trunc_score
  {
    cdr >> ros_message->full_trunc_score;
  }

  // Field name: head_trunc_score
  {
    cdr >> ros_message->head_trunc_score;
  }

  // Field name: tail_trunc_score
  {
    cdr >> ros_message->tail_trunc_score;
  }

  // Field name: ped_bbox
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, BoundingBox2d
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ped_bbox))
    {
      return false;
    }
  }

  // Field name: subclassification_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, SubclassificationType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->subclassification_type))
    {
      return false;
    }
  }

  // Field name: subclass_score
  {
    cdr >> ros_message->subclass_score;
  }

  // Field name: light_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->light_valid = tmp ? true : false;
  }

  // Field name: turn_type
  {
    cdr >> ros_message->turn_type;
  }

  // Field name: turn_score
  {
    cdr >> ros_message->turn_score;
  }

  // Field name: brake_type
  {
    cdr >> ros_message->brake_type;
  }

  // Field name: brake_score
  {
    cdr >> ros_message->brake_score;
  }

  // Field name: hazard_type
  {
    cdr >> ros_message->hazard_type;
  }

  // Field name: hazard_score
  {
    cdr >> ros_message->hazard_score;
  }

  // Field name: extra_infos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, ExtraInfo
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

    if (ros_message->extra_infos.data) {
      deva_perception_msgs__msg__ExtraInfo__Sequence__fini(&ros_message->extra_infos);
    }
    if (!deva_perception_msgs__msg__ExtraInfo__Sequence__init(&ros_message->extra_infos, size)) {
      fprintf(stderr, "failed to create array for field 'extra_infos'");
      return false;
    }
    auto array_ptr = ros_message->extra_infos.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_perception_msgs
size_t get_serialized_size_deva_perception_msgs__msg__RVDynObstacle(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RVDynObstacle__ros_msg_type * ros_message = static_cast<const _RVDynObstacle__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name obstacle

  current_alignment += get_serialized_size_deva_perception_msgs__msg__ObstacleCommon(
    &(ros_message->obstacle), current_alignment);
  // field.name dynamic_obstacle_type
  {
    size_t item_size = sizeof(ros_message->dynamic_obstacle_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name det_score
  {
    size_t item_size = sizeof(ros_message->det_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bbox

  current_alignment += get_serialized_size_deva_common_msgs__msg__BoundingBox2d(
    &(ros_message->bbox), current_alignment);
  // field.name head_bbox

  current_alignment += get_serialized_size_deva_common_msgs__msg__BoundingBox2d(
    &(ros_message->head_bbox), current_alignment);
  // field.name tail_bbox

  current_alignment += get_serialized_size_deva_common_msgs__msg__BoundingBox2d(
    &(ros_message->tail_bbox), current_alignment);
  // field.name ground_points
  {
    size_t array_size = ros_message->ground_points.size;
    auto array_ptr = ros_message->ground_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_common_msgs__msg__GroundPoint(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name full_occ_score
  {
    size_t item_size = sizeof(ros_message->full_occ_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name head_occ_score
  {
    size_t item_size = sizeof(ros_message->head_occ_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tail_occ_score
  {
    size_t item_size = sizeof(ros_message->tail_occ_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name full_trunc_score
  {
    size_t item_size = sizeof(ros_message->full_trunc_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name head_trunc_score
  {
    size_t item_size = sizeof(ros_message->head_trunc_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tail_trunc_score
  {
    size_t item_size = sizeof(ros_message->tail_trunc_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ped_bbox

  current_alignment += get_serialized_size_deva_common_msgs__msg__BoundingBox2d(
    &(ros_message->ped_bbox), current_alignment);
  // field.name subclassification_type

  current_alignment += get_serialized_size_deva_perception_msgs__msg__SubclassificationType(
    &(ros_message->subclassification_type), current_alignment);
  // field.name subclass_score
  {
    size_t item_size = sizeof(ros_message->subclass_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name light_valid
  {
    size_t item_size = sizeof(ros_message->light_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_type
  {
    size_t item_size = sizeof(ros_message->turn_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_score
  {
    size_t item_size = sizeof(ros_message->turn_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_type
  {
    size_t item_size = sizeof(ros_message->brake_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_score
  {
    size_t item_size = sizeof(ros_message->brake_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hazard_type
  {
    size_t item_size = sizeof(ros_message->hazard_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hazard_score
  {
    size_t item_size = sizeof(ros_message->hazard_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extra_infos
  {
    size_t array_size = ros_message->extra_infos.size;
    auto array_ptr = ros_message->extra_infos.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_perception_msgs__msg__ExtraInfo(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RVDynObstacle__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_perception_msgs__msg__RVDynObstacle(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_perception_msgs
size_t max_serialized_size_deva_perception_msgs__msg__RVDynObstacle(
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

  // member: obstacle
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_perception_msgs__msg__ObstacleCommon(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: dynamic_obstacle_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: det_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bbox
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_common_msgs__msg__BoundingBox2d(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: head_bbox
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_common_msgs__msg__BoundingBox2d(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: tail_bbox
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_common_msgs__msg__BoundingBox2d(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: ground_points
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
        max_serialized_size_deva_common_msgs__msg__GroundPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: full_occ_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: head_occ_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tail_occ_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: full_trunc_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: head_trunc_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tail_trunc_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ped_bbox
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_common_msgs__msg__BoundingBox2d(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: subclassification_type
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_perception_msgs__msg__SubclassificationType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: subclass_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: light_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: turn_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: turn_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brake_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brake_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hazard_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hazard_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: extra_infos
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
        max_serialized_size_deva_perception_msgs__msg__ExtraInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_perception_msgs__msg__RVDynObstacle;
    is_plain =
      (
      offsetof(DataType, extra_infos) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RVDynObstacle__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_perception_msgs__msg__RVDynObstacle(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RVDynObstacle = {
  "deva_perception_msgs::msg",
  "RVDynObstacle",
  _RVDynObstacle__cdr_serialize,
  _RVDynObstacle__cdr_deserialize,
  _RVDynObstacle__get_serialized_size,
  _RVDynObstacle__max_serialized_size
};

static rosidl_message_type_support_t _RVDynObstacle__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RVDynObstacle,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, RVDynObstacle)() {
  return &_RVDynObstacle__type_support;
}

#if defined(__cplusplus)
}
#endif

// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_mdriver_msgs:msg/MPredictionObstacle.idl
// generated code does not contain a copyright notice
#include "deva_mdriver_msgs/msg/detail/m_prediction_obstacle__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_mdriver_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_mdriver_msgs/msg/detail/m_prediction_obstacle__struct.h"
#include "deva_mdriver_msgs/msg/detail/m_prediction_obstacle__functions.h"
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

#include "deva_mdriver_msgs/msg/detail/acc_heading_steering_stats__functions.h"  // acc_heading_steering_stats
#include "deva_mdriver_msgs/msg/detail/debug_info__functions.h"  // prediction_debug_info
#include "deva_perception_msgs/msg/detail/moving_obstacle__functions.h"  // perception_obstacle
#include "deva_planning_msgs/msg/detail/trajectory_point__functions.h"  // trajectory
#include "rosidl_runtime_c/primitives_sequence.h"  // cov, decision
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // cov, decision

// forward declare type support functions
size_t get_serialized_size_deva_mdriver_msgs__msg__AccHeadingSteeringStats(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_mdriver_msgs__msg__AccHeadingSteeringStats(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_mdriver_msgs, msg, AccHeadingSteeringStats)();
size_t get_serialized_size_deva_mdriver_msgs__msg__DebugInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_mdriver_msgs__msg__DebugInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_mdriver_msgs, msg, DebugInfo)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_mdriver_msgs
size_t get_serialized_size_deva_perception_msgs__msg__MovingObstacle(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_mdriver_msgs
size_t max_serialized_size_deva_perception_msgs__msg__MovingObstacle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_mdriver_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, MovingObstacle)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_mdriver_msgs
size_t get_serialized_size_deva_planning_msgs__msg__TrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_mdriver_msgs
size_t max_serialized_size_deva_planning_msgs__msg__TrajectoryPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_mdriver_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs, msg, TrajectoryPoint)();


using _MPredictionObstacle__ros_msg_type = deva_mdriver_msgs__msg__MPredictionObstacle;

static bool _MPredictionObstacle__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MPredictionObstacle__ros_msg_type * ros_message = static_cast<const _MPredictionObstacle__ros_msg_type *>(untyped_ros_message);
  // Field name: perception_obstacle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, MovingObstacle
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->perception_obstacle, cdr))
    {
      return false;
    }
  }

  // Field name: trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs, msg, TrajectoryPoint
      )()->data);
    size_t size = ros_message->trajectory.size;
    auto array_ptr = ros_message->trajectory.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: decision
  {
    size_t size = ros_message->decision.size;
    auto array_ptr = ros_message->decision.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: obs_id
  {
    cdr << ros_message->obs_id;
  }

  // Field name: score
  {
    cdr << ros_message->score;
  }

  // Field name: cov
  {
    size_t size = ros_message->cov.size;
    auto array_ptr = ros_message->cov.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: is_static
  {
    cdr << ros_message->is_static;
  }

  // Field name: acc_heading_steering_stats
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_mdriver_msgs, msg, AccHeadingSteeringStats
      )()->data);
    size_t size = ros_message->acc_heading_steering_stats.size;
    auto array_ptr = ros_message->acc_heading_steering_stats.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: prediction_debug_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_mdriver_msgs, msg, DebugInfo
      )()->data);
    size_t size = ros_message->prediction_debug_info.size;
    auto array_ptr = ros_message->prediction_debug_info.data;
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

static bool _MPredictionObstacle__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MPredictionObstacle__ros_msg_type * ros_message = static_cast<_MPredictionObstacle__ros_msg_type *>(untyped_ros_message);
  // Field name: perception_obstacle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, MovingObstacle
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->perception_obstacle))
    {
      return false;
    }
  }

  // Field name: trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs, msg, TrajectoryPoint
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

    if (ros_message->trajectory.data) {
      deva_planning_msgs__msg__TrajectoryPoint__Sequence__fini(&ros_message->trajectory);
    }
    if (!deva_planning_msgs__msg__TrajectoryPoint__Sequence__init(&ros_message->trajectory, size)) {
      fprintf(stderr, "failed to create array for field 'trajectory'");
      return false;
    }
    auto array_ptr = ros_message->trajectory.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: decision
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

    if (ros_message->decision.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->decision);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->decision, size)) {
      fprintf(stderr, "failed to create array for field 'decision'");
      return false;
    }
    auto array_ptr = ros_message->decision.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: obs_id
  {
    cdr >> ros_message->obs_id;
  }

  // Field name: score
  {
    cdr >> ros_message->score;
  }

  // Field name: cov
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

    if (ros_message->cov.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->cov);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->cov, size)) {
      fprintf(stderr, "failed to create array for field 'cov'");
      return false;
    }
    auto array_ptr = ros_message->cov.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: is_static
  {
    cdr >> ros_message->is_static;
  }

  // Field name: acc_heading_steering_stats
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_mdriver_msgs, msg, AccHeadingSteeringStats
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

    if (ros_message->acc_heading_steering_stats.data) {
      deva_mdriver_msgs__msg__AccHeadingSteeringStats__Sequence__fini(&ros_message->acc_heading_steering_stats);
    }
    if (!deva_mdriver_msgs__msg__AccHeadingSteeringStats__Sequence__init(&ros_message->acc_heading_steering_stats, size)) {
      fprintf(stderr, "failed to create array for field 'acc_heading_steering_stats'");
      return false;
    }
    auto array_ptr = ros_message->acc_heading_steering_stats.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: prediction_debug_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_mdriver_msgs, msg, DebugInfo
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

    if (ros_message->prediction_debug_info.data) {
      deva_mdriver_msgs__msg__DebugInfo__Sequence__fini(&ros_message->prediction_debug_info);
    }
    if (!deva_mdriver_msgs__msg__DebugInfo__Sequence__init(&ros_message->prediction_debug_info, size)) {
      fprintf(stderr, "failed to create array for field 'prediction_debug_info'");
      return false;
    }
    auto array_ptr = ros_message->prediction_debug_info.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_mdriver_msgs
size_t get_serialized_size_deva_mdriver_msgs__msg__MPredictionObstacle(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MPredictionObstacle__ros_msg_type * ros_message = static_cast<const _MPredictionObstacle__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name perception_obstacle

  current_alignment += get_serialized_size_deva_perception_msgs__msg__MovingObstacle(
    &(ros_message->perception_obstacle), current_alignment);
  // field.name trajectory
  {
    size_t array_size = ros_message->trajectory.size;
    auto array_ptr = ros_message->trajectory.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_planning_msgs__msg__TrajectoryPoint(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name decision
  {
    size_t array_size = ros_message->decision.size;
    auto array_ptr = ros_message->decision.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obs_id
  {
    size_t item_size = sizeof(ros_message->obs_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name score
  {
    size_t item_size = sizeof(ros_message->score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cov
  {
    size_t array_size = ros_message->cov.size;
    auto array_ptr = ros_message->cov.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_static
  {
    size_t item_size = sizeof(ros_message->is_static);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_heading_steering_stats
  {
    size_t array_size = ros_message->acc_heading_steering_stats.size;
    auto array_ptr = ros_message->acc_heading_steering_stats.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_mdriver_msgs__msg__AccHeadingSteeringStats(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name prediction_debug_info
  {
    size_t array_size = ros_message->prediction_debug_info.size;
    auto array_ptr = ros_message->prediction_debug_info.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_mdriver_msgs__msg__DebugInfo(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MPredictionObstacle__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_mdriver_msgs__msg__MPredictionObstacle(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_mdriver_msgs
size_t max_serialized_size_deva_mdriver_msgs__msg__MPredictionObstacle(
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

  // member: perception_obstacle
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_perception_msgs__msg__MovingObstacle(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: trajectory
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
        max_serialized_size_deva_planning_msgs__msg__TrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: decision
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: obs_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cov
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
  // member: is_static
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acc_heading_steering_stats
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
        max_serialized_size_deva_mdriver_msgs__msg__AccHeadingSteeringStats(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: prediction_debug_info
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
        max_serialized_size_deva_mdriver_msgs__msg__DebugInfo(
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
    using DataType = deva_mdriver_msgs__msg__MPredictionObstacle;
    is_plain =
      (
      offsetof(DataType, prediction_debug_info) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MPredictionObstacle__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_mdriver_msgs__msg__MPredictionObstacle(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MPredictionObstacle = {
  "deva_mdriver_msgs::msg",
  "MPredictionObstacle",
  _MPredictionObstacle__cdr_serialize,
  _MPredictionObstacle__cdr_deserialize,
  _MPredictionObstacle__get_serialized_size,
  _MPredictionObstacle__max_serialized_size
};

static rosidl_message_type_support_t _MPredictionObstacle__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MPredictionObstacle,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_mdriver_msgs, msg, MPredictionObstacle)() {
  return &_MPredictionObstacle__type_support;
}

#if defined(__cplusplus)
}
#endif

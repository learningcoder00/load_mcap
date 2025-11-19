// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_planning_msgs2:msg/PolicyScenario.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/policy_scenario__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_planning_msgs2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_planning_msgs2/msg/detail/policy_scenario__struct.h"
#include "deva_planning_msgs2/msg/detail/policy_scenario__functions.h"
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

#include "deva_planning_msgs2/msg/detail/planning_obstacle__functions.h"  // critical_obstacles
#include "deva_planning_msgs2/msg/detail/semantic_tree_node__functions.h"  // tree_nodes
#include "deva_planning_msgs2/msg/detail/string2_double__functions.h"  // tree_score
#include "deva_planning_msgs2/msg/detail/string2_string__functions.h"  // scalable_multimap
#include "deva_planning_msgs2/msg/detail/tree_trajectory__functions.h"  // tree_output_trajs
#include "deva_planning_msgs2/msg/detail/u_int2_string__functions.h"  // game_obstacles
#include "rosidl_runtime_c/primitives_sequence.h"  // scalable_flags
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // scalable_flags
#include "rosidl_runtime_c/string.h"  // front_obstacle_id, rear_obstacle_id
#include "rosidl_runtime_c/string_functions.h"  // front_obstacle_id, rear_obstacle_id

// forward declare type support functions
size_t get_serialized_size_deva_planning_msgs2__msg__PlanningObstacle(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_planning_msgs2__msg__PlanningObstacle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, PlanningObstacle)();
size_t get_serialized_size_deva_planning_msgs2__msg__SemanticTreeNode(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_planning_msgs2__msg__SemanticTreeNode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, SemanticTreeNode)();
size_t get_serialized_size_deva_planning_msgs2__msg__String2Double(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_planning_msgs2__msg__String2Double(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, String2Double)();
size_t get_serialized_size_deva_planning_msgs2__msg__String2String(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_planning_msgs2__msg__String2String(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, String2String)();
size_t get_serialized_size_deva_planning_msgs2__msg__TreeTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_planning_msgs2__msg__TreeTrajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, TreeTrajectory)();
size_t get_serialized_size_deva_planning_msgs2__msg__UInt2String(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_planning_msgs2__msg__UInt2String(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, UInt2String)();


using _PolicyScenario__ros_msg_type = deva_planning_msgs2__msg__PolicyScenario;

static bool _PolicyScenario__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PolicyScenario__ros_msg_type * ros_message = static_cast<const _PolicyScenario__ros_msg_type *>(untyped_ros_message);
  // Field name: tree_id
  {
    cdr << ros_message->tree_id;
  }

  // Field name: behavior_type
  {
    cdr << ros_message->behavior_type;
  }

  // Field name: target_line_id
  {
    cdr << ros_message->target_line_id;
  }

  // Field name: current_line_id
  {
    cdr << ros_message->current_line_id;
  }

  // Field name: is_from_mdriver
  {
    cdr << (ros_message->is_from_mdriver ? true : false);
  }

  // Field name: front_obstacle_id
  {
    const rosidl_runtime_c__String * str = &ros_message->front_obstacle_id;
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

  // Field name: rear_obstacle_id
  {
    const rosidl_runtime_c__String * str = &ros_message->rear_obstacle_id;
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

  // Field name: game_obstacles
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, UInt2String
      )()->data);
    size_t size = ros_message->game_obstacles.size;
    auto array_ptr = ros_message->game_obstacles.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: critical_obstacles
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, PlanningObstacle
      )()->data);
    size_t size = ros_message->critical_obstacles.size;
    auto array_ptr = ros_message->critical_obstacles.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: tree_score
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, String2Double
      )()->data);
    size_t size = ros_message->tree_score.size;
    auto array_ptr = ros_message->tree_score.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: rollout_start_time
  {
    cdr << ros_message->rollout_start_time;
  }

  // Field name: tree_nodes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, SemanticTreeNode
      )()->data);
    size_t size = ros_message->tree_nodes.size;
    auto array_ptr = ros_message->tree_nodes.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: tree_output_trajs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, TreeTrajectory
      )()->data);
    size_t size = ros_message->tree_output_trajs.size;
    auto array_ptr = ros_message->tree_output_trajs.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: scalable_flags
  {
    size_t size = ros_message->scalable_flags.size;
    auto array_ptr = ros_message->scalable_flags.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: scalable_multimap
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, String2String
      )()->data);
    size_t size = ros_message->scalable_multimap.size;
    auto array_ptr = ros_message->scalable_multimap.data;
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

static bool _PolicyScenario__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PolicyScenario__ros_msg_type * ros_message = static_cast<_PolicyScenario__ros_msg_type *>(untyped_ros_message);
  // Field name: tree_id
  {
    cdr >> ros_message->tree_id;
  }

  // Field name: behavior_type
  {
    cdr >> ros_message->behavior_type;
  }

  // Field name: target_line_id
  {
    cdr >> ros_message->target_line_id;
  }

  // Field name: current_line_id
  {
    cdr >> ros_message->current_line_id;
  }

  // Field name: is_from_mdriver
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_from_mdriver = tmp ? true : false;
  }

  // Field name: front_obstacle_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->front_obstacle_id.data) {
      rosidl_runtime_c__String__init(&ros_message->front_obstacle_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->front_obstacle_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'front_obstacle_id'\n");
      return false;
    }
  }

  // Field name: rear_obstacle_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->rear_obstacle_id.data) {
      rosidl_runtime_c__String__init(&ros_message->rear_obstacle_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->rear_obstacle_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'rear_obstacle_id'\n");
      return false;
    }
  }

  // Field name: game_obstacles
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, UInt2String
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

    if (ros_message->game_obstacles.data) {
      deva_planning_msgs2__msg__UInt2String__Sequence__fini(&ros_message->game_obstacles);
    }
    if (!deva_planning_msgs2__msg__UInt2String__Sequence__init(&ros_message->game_obstacles, size)) {
      fprintf(stderr, "failed to create array for field 'game_obstacles'");
      return false;
    }
    auto array_ptr = ros_message->game_obstacles.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: critical_obstacles
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, PlanningObstacle
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

    if (ros_message->critical_obstacles.data) {
      deva_planning_msgs2__msg__PlanningObstacle__Sequence__fini(&ros_message->critical_obstacles);
    }
    if (!deva_planning_msgs2__msg__PlanningObstacle__Sequence__init(&ros_message->critical_obstacles, size)) {
      fprintf(stderr, "failed to create array for field 'critical_obstacles'");
      return false;
    }
    auto array_ptr = ros_message->critical_obstacles.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: tree_score
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, String2Double
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

    if (ros_message->tree_score.data) {
      deva_planning_msgs2__msg__String2Double__Sequence__fini(&ros_message->tree_score);
    }
    if (!deva_planning_msgs2__msg__String2Double__Sequence__init(&ros_message->tree_score, size)) {
      fprintf(stderr, "failed to create array for field 'tree_score'");
      return false;
    }
    auto array_ptr = ros_message->tree_score.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: rollout_start_time
  {
    cdr >> ros_message->rollout_start_time;
  }

  // Field name: tree_nodes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, SemanticTreeNode
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

    if (ros_message->tree_nodes.data) {
      deva_planning_msgs2__msg__SemanticTreeNode__Sequence__fini(&ros_message->tree_nodes);
    }
    if (!deva_planning_msgs2__msg__SemanticTreeNode__Sequence__init(&ros_message->tree_nodes, size)) {
      fprintf(stderr, "failed to create array for field 'tree_nodes'");
      return false;
    }
    auto array_ptr = ros_message->tree_nodes.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: tree_output_trajs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, TreeTrajectory
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

    if (ros_message->tree_output_trajs.data) {
      deva_planning_msgs2__msg__TreeTrajectory__Sequence__fini(&ros_message->tree_output_trajs);
    }
    if (!deva_planning_msgs2__msg__TreeTrajectory__Sequence__init(&ros_message->tree_output_trajs, size)) {
      fprintf(stderr, "failed to create array for field 'tree_output_trajs'");
      return false;
    }
    auto array_ptr = ros_message->tree_output_trajs.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: scalable_flags
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

    if (ros_message->scalable_flags.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->scalable_flags);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->scalable_flags, size)) {
      fprintf(stderr, "failed to create array for field 'scalable_flags'");
      return false;
    }
    auto array_ptr = ros_message->scalable_flags.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: scalable_multimap
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, String2String
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

    if (ros_message->scalable_multimap.data) {
      deva_planning_msgs2__msg__String2String__Sequence__fini(&ros_message->scalable_multimap);
    }
    if (!deva_planning_msgs2__msg__String2String__Sequence__init(&ros_message->scalable_multimap, size)) {
      fprintf(stderr, "failed to create array for field 'scalable_multimap'");
      return false;
    }
    auto array_ptr = ros_message->scalable_multimap.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_planning_msgs2
size_t get_serialized_size_deva_planning_msgs2__msg__PolicyScenario(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PolicyScenario__ros_msg_type * ros_message = static_cast<const _PolicyScenario__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name tree_id
  {
    size_t item_size = sizeof(ros_message->tree_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name behavior_type
  {
    size_t item_size = sizeof(ros_message->behavior_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_line_id
  {
    size_t item_size = sizeof(ros_message->target_line_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_line_id
  {
    size_t item_size = sizeof(ros_message->current_line_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_from_mdriver
  {
    size_t item_size = sizeof(ros_message->is_from_mdriver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_obstacle_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->front_obstacle_id.size + 1);
  // field.name rear_obstacle_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->rear_obstacle_id.size + 1);
  // field.name game_obstacles
  {
    size_t array_size = ros_message->game_obstacles.size;
    auto array_ptr = ros_message->game_obstacles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_planning_msgs2__msg__UInt2String(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name critical_obstacles
  {
    size_t array_size = ros_message->critical_obstacles.size;
    auto array_ptr = ros_message->critical_obstacles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_planning_msgs2__msg__PlanningObstacle(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name tree_score
  {
    size_t array_size = ros_message->tree_score.size;
    auto array_ptr = ros_message->tree_score.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_planning_msgs2__msg__String2Double(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name rollout_start_time
  {
    size_t item_size = sizeof(ros_message->rollout_start_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tree_nodes
  {
    size_t array_size = ros_message->tree_nodes.size;
    auto array_ptr = ros_message->tree_nodes.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_planning_msgs2__msg__SemanticTreeNode(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name tree_output_trajs
  {
    size_t array_size = ros_message->tree_output_trajs.size;
    auto array_ptr = ros_message->tree_output_trajs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_planning_msgs2__msg__TreeTrajectory(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name scalable_flags
  {
    size_t array_size = ros_message->scalable_flags.size;
    auto array_ptr = ros_message->scalable_flags.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scalable_multimap
  {
    size_t array_size = ros_message->scalable_multimap.size;
    auto array_ptr = ros_message->scalable_multimap.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_planning_msgs2__msg__String2String(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PolicyScenario__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_planning_msgs2__msg__PolicyScenario(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_planning_msgs2
size_t max_serialized_size_deva_planning_msgs2__msg__PolicyScenario(
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

  // member: tree_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: behavior_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: target_line_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: current_line_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: is_from_mdriver
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: front_obstacle_id
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
  // member: rear_obstacle_id
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
  // member: game_obstacles
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
        max_serialized_size_deva_planning_msgs2__msg__UInt2String(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: critical_obstacles
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
        max_serialized_size_deva_planning_msgs2__msg__PlanningObstacle(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: tree_score
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
        max_serialized_size_deva_planning_msgs2__msg__String2Double(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: rollout_start_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tree_nodes
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
        max_serialized_size_deva_planning_msgs2__msg__SemanticTreeNode(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: tree_output_trajs
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
        max_serialized_size_deva_planning_msgs2__msg__TreeTrajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: scalable_flags
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: scalable_multimap
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
        max_serialized_size_deva_planning_msgs2__msg__String2String(
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
    using DataType = deva_planning_msgs2__msg__PolicyScenario;
    is_plain =
      (
      offsetof(DataType, scalable_multimap) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PolicyScenario__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_planning_msgs2__msg__PolicyScenario(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PolicyScenario = {
  "deva_planning_msgs2::msg",
  "PolicyScenario",
  _PolicyScenario__cdr_serialize,
  _PolicyScenario__cdr_deserialize,
  _PolicyScenario__get_serialized_size,
  _PolicyScenario__max_serialized_size
};

static rosidl_message_type_support_t _PolicyScenario__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PolicyScenario,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, PolicyScenario)() {
  return &_PolicyScenario__type_support;
}

#if defined(__cplusplus)
}
#endif

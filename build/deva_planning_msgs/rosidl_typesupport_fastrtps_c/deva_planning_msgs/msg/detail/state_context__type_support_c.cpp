// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_planning_msgs:msg/StateContext.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs/msg/detail/state_context__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_planning_msgs/msg/detail/state_context__struct.h"
#include "deva_planning_msgs/msg/detail/state_context__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // cipv_obstacle_id, cutin_follow_obstacle_id, cutin_overtake_obstacle_id, nudge_obstacle_id
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // cipv_obstacle_id, cutin_follow_obstacle_id, cutin_overtake_obstacle_id, nudge_obstacle_id
#include "rosidl_runtime_c/string.h"  // front_obstacle_id, rear_obstacle_id
#include "rosidl_runtime_c/string_functions.h"  // front_obstacle_id, rear_obstacle_id
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_planning_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_planning_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_planning_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _StateContext__ros_msg_type = deva_planning_msgs__msg__StateContext;

static bool _StateContext__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StateContext__ros_msg_type * ros_message = static_cast<const _StateContext__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: behavior_type
  {
    cdr << ros_message->behavior_type;
  }

  // Field name: navi_map_mode
  {
    cdr << ros_message->navi_map_mode;
  }

  // Field name: routing_mode
  {
    cdr << ros_message->routing_mode;
  }

  // Field name: target_lane_seq_score
  {
    cdr << ros_message->target_lane_seq_score;
  }

  // Field name: state_score
  {
    cdr << ros_message->state_score;
  }

  // Field name: score
  {
    cdr << ros_message->score;
  }

  // Field name: use_mdriver_ego
  {
    cdr << ros_message->use_mdriver_ego;
  }

  // Field name: target_line_id
  {
    cdr << ros_message->target_line_id;
  }

  // Field name: current_line_id
  {
    cdr << ros_message->current_line_id;
  }

  // Field name: gap_id
  {
    cdr << ros_message->gap_id;
  }

  // Field name: gap_line_id
  {
    cdr << ros_message->gap_line_id;
  }

  // Field name: start_s
  {
    cdr << ros_message->start_s;
  }

  // Field name: end_s
  {
    cdr << ros_message->end_s;
  }

  // Field name: length
  {
    cdr << ros_message->length;
  }

  // Field name: future_length
  {
    cdr << ros_message->future_length;
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

  // Field name: cipv_obstacle_id
  {
    size_t size = ros_message->cipv_obstacle_id.size;
    auto array_ptr = ros_message->cipv_obstacle_id.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: nudge_obstacle_id
  {
    size_t size = ros_message->nudge_obstacle_id.size;
    auto array_ptr = ros_message->nudge_obstacle_id.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cutin_follow_obstacle_id
  {
    size_t size = ros_message->cutin_follow_obstacle_id.size;
    auto array_ptr = ros_message->cutin_follow_obstacle_id.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cutin_overtake_obstacle_id
  {
    size_t size = ros_message->cutin_overtake_obstacle_id.size;
    auto array_ptr = ros_message->cutin_overtake_obstacle_id.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: lane_change_task
  {
    cdr << ros_message->lane_change_task;
  }

  return true;
}

static bool _StateContext__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StateContext__ros_msg_type * ros_message = static_cast<_StateContext__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: behavior_type
  {
    cdr >> ros_message->behavior_type;
  }

  // Field name: navi_map_mode
  {
    cdr >> ros_message->navi_map_mode;
  }

  // Field name: routing_mode
  {
    cdr >> ros_message->routing_mode;
  }

  // Field name: target_lane_seq_score
  {
    cdr >> ros_message->target_lane_seq_score;
  }

  // Field name: state_score
  {
    cdr >> ros_message->state_score;
  }

  // Field name: score
  {
    cdr >> ros_message->score;
  }

  // Field name: use_mdriver_ego
  {
    cdr >> ros_message->use_mdriver_ego;
  }

  // Field name: target_line_id
  {
    cdr >> ros_message->target_line_id;
  }

  // Field name: current_line_id
  {
    cdr >> ros_message->current_line_id;
  }

  // Field name: gap_id
  {
    cdr >> ros_message->gap_id;
  }

  // Field name: gap_line_id
  {
    cdr >> ros_message->gap_line_id;
  }

  // Field name: start_s
  {
    cdr >> ros_message->start_s;
  }

  // Field name: end_s
  {
    cdr >> ros_message->end_s;
  }

  // Field name: length
  {
    cdr >> ros_message->length;
  }

  // Field name: future_length
  {
    cdr >> ros_message->future_length;
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

  // Field name: cipv_obstacle_id
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

    if (ros_message->cipv_obstacle_id.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->cipv_obstacle_id);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->cipv_obstacle_id, size)) {
      fprintf(stderr, "failed to create array for field 'cipv_obstacle_id'");
      return false;
    }
    auto array_ptr = ros_message->cipv_obstacle_id.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: nudge_obstacle_id
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

    if (ros_message->nudge_obstacle_id.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->nudge_obstacle_id);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->nudge_obstacle_id, size)) {
      fprintf(stderr, "failed to create array for field 'nudge_obstacle_id'");
      return false;
    }
    auto array_ptr = ros_message->nudge_obstacle_id.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cutin_follow_obstacle_id
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

    if (ros_message->cutin_follow_obstacle_id.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->cutin_follow_obstacle_id);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->cutin_follow_obstacle_id, size)) {
      fprintf(stderr, "failed to create array for field 'cutin_follow_obstacle_id'");
      return false;
    }
    auto array_ptr = ros_message->cutin_follow_obstacle_id.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cutin_overtake_obstacle_id
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

    if (ros_message->cutin_overtake_obstacle_id.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->cutin_overtake_obstacle_id);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->cutin_overtake_obstacle_id, size)) {
      fprintf(stderr, "failed to create array for field 'cutin_overtake_obstacle_id'");
      return false;
    }
    auto array_ptr = ros_message->cutin_overtake_obstacle_id.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: lane_change_task
  {
    cdr >> ros_message->lane_change_task;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_planning_msgs
size_t get_serialized_size_deva_planning_msgs__msg__StateContext(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StateContext__ros_msg_type * ros_message = static_cast<const _StateContext__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name behavior_type
  {
    size_t item_size = sizeof(ros_message->behavior_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name navi_map_mode
  {
    size_t item_size = sizeof(ros_message->navi_map_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name routing_mode
  {
    size_t item_size = sizeof(ros_message->routing_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_lane_seq_score
  {
    size_t item_size = sizeof(ros_message->target_lane_seq_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state_score
  {
    size_t item_size = sizeof(ros_message->state_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name score
  {
    size_t item_size = sizeof(ros_message->score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name use_mdriver_ego
  {
    size_t item_size = sizeof(ros_message->use_mdriver_ego);
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
  // field.name gap_id
  {
    size_t item_size = sizeof(ros_message->gap_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gap_line_id
  {
    size_t item_size = sizeof(ros_message->gap_line_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name start_s
  {
    size_t item_size = sizeof(ros_message->start_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_s
  {
    size_t item_size = sizeof(ros_message->end_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name length
  {
    size_t item_size = sizeof(ros_message->length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name future_length
  {
    size_t item_size = sizeof(ros_message->future_length);
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
  // field.name cipv_obstacle_id
  {
    size_t array_size = ros_message->cipv_obstacle_id.size;
    auto array_ptr = ros_message->cipv_obstacle_id.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nudge_obstacle_id
  {
    size_t array_size = ros_message->nudge_obstacle_id.size;
    auto array_ptr = ros_message->nudge_obstacle_id.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cutin_follow_obstacle_id
  {
    size_t array_size = ros_message->cutin_follow_obstacle_id.size;
    auto array_ptr = ros_message->cutin_follow_obstacle_id.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cutin_overtake_obstacle_id
  {
    size_t array_size = ros_message->cutin_overtake_obstacle_id.size;
    auto array_ptr = ros_message->cutin_overtake_obstacle_id.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_change_task
  {
    size_t item_size = sizeof(ros_message->lane_change_task);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StateContext__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_planning_msgs__msg__StateContext(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_planning_msgs
size_t max_serialized_size_deva_planning_msgs__msg__StateContext(
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
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: behavior_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: navi_map_mode
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
  // member: target_lane_seq_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: state_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: use_mdriver_ego
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
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
  // member: gap_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gap_line_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: start_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: end_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: future_length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
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
  // member: cipv_obstacle_id
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
  // member: nudge_obstacle_id
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
  // member: cutin_follow_obstacle_id
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
  // member: cutin_overtake_obstacle_id
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
  // member: lane_change_task
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
    using DataType = deva_planning_msgs__msg__StateContext;
    is_plain =
      (
      offsetof(DataType, lane_change_task) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _StateContext__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_planning_msgs__msg__StateContext(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StateContext = {
  "deva_planning_msgs::msg",
  "StateContext",
  _StateContext__cdr_serialize,
  _StateContext__cdr_deserialize,
  _StateContext__get_serialized_size,
  _StateContext__max_serialized_size
};

static rosidl_message_type_support_t _StateContext__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StateContext,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs, msg, StateContext)() {
  return &_StateContext__type_support;
}

#if defined(__cplusplus)
}
#endif

// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_planning_msgs2:msg/PlanningObstacle.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/planning_obstacle__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_planning_msgs2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_planning_msgs2/msg/detail/planning_obstacle__struct.h"
#include "deva_planning_msgs2/msg/detail/planning_obstacle__functions.h"
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

#include "deva_planning_msgs2/msg/detail/string2_string__functions.h"  // scalable_multimap
#include "rosidl_runtime_c/primitives_sequence.h"  // current_line_id, decision_tag, scalable_flags, scene_understanding, target_line_id
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // current_line_id, decision_tag, scalable_flags, scene_understanding, target_line_id
#include "rosidl_runtime_c/string.h"  // id
#include "rosidl_runtime_c/string_functions.h"  // id

// forward declare type support functions
size_t get_serialized_size_deva_planning_msgs2__msg__String2String(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_planning_msgs2__msg__String2String(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, String2String)();


using _PlanningObstacle__ros_msg_type = deva_planning_msgs2__msg__PlanningObstacle;

static bool _PlanningObstacle__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlanningObstacle__ros_msg_type * ros_message = static_cast<const _PlanningObstacle__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    const rosidl_runtime_c__String * str = &ros_message->id;
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

  // Field name: current_line_id
  {
    size_t size = ros_message->current_line_id.size;
    auto array_ptr = ros_message->current_line_id.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: target_line_id
  {
    size_t size = ros_message->target_line_id.size;
    auto array_ptr = ros_message->target_line_id.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: decision_tag
  {
    size_t size = ros_message->decision_tag.size;
    auto array_ptr = ros_message->decision_tag.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: scene_understanding
  {
    size_t size = ros_message->scene_understanding.size;
    auto array_ptr = ros_message->scene_understanding.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cutin_time
  {
    cdr << ros_message->cutin_time;
  }

  // Field name: cutout_time
  {
    cdr << ros_message->cutout_time;
  }

  // Field name: distance
  {
    cdr << ros_message->distance;
  }

  // Field name: ttc
  {
    cdr << ros_message->ttc;
  }

  // Field name: priority
  {
    cdr << ros_message->priority;
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

static bool _PlanningObstacle__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlanningObstacle__ros_msg_type * ros_message = static_cast<_PlanningObstacle__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->id.data) {
      rosidl_runtime_c__String__init(&ros_message->id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'id'\n");
      return false;
    }
  }

  // Field name: current_line_id
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

    if (ros_message->current_line_id.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->current_line_id);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->current_line_id, size)) {
      fprintf(stderr, "failed to create array for field 'current_line_id'");
      return false;
    }
    auto array_ptr = ros_message->current_line_id.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: target_line_id
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

    if (ros_message->target_line_id.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->target_line_id);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->target_line_id, size)) {
      fprintf(stderr, "failed to create array for field 'target_line_id'");
      return false;
    }
    auto array_ptr = ros_message->target_line_id.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: decision_tag
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

    if (ros_message->decision_tag.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->decision_tag);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->decision_tag, size)) {
      fprintf(stderr, "failed to create array for field 'decision_tag'");
      return false;
    }
    auto array_ptr = ros_message->decision_tag.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: scene_understanding
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

    if (ros_message->scene_understanding.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->scene_understanding);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->scene_understanding, size)) {
      fprintf(stderr, "failed to create array for field 'scene_understanding'");
      return false;
    }
    auto array_ptr = ros_message->scene_understanding.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cutin_time
  {
    cdr >> ros_message->cutin_time;
  }

  // Field name: cutout_time
  {
    cdr >> ros_message->cutout_time;
  }

  // Field name: distance
  {
    cdr >> ros_message->distance;
  }

  // Field name: ttc
  {
    cdr >> ros_message->ttc;
  }

  // Field name: priority
  {
    cdr >> ros_message->priority;
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
size_t get_serialized_size_deva_planning_msgs2__msg__PlanningObstacle(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlanningObstacle__ros_msg_type * ros_message = static_cast<const _PlanningObstacle__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->id.size + 1);
  // field.name current_line_id
  {
    size_t array_size = ros_message->current_line_id.size;
    auto array_ptr = ros_message->current_line_id.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_line_id
  {
    size_t array_size = ros_message->target_line_id.size;
    auto array_ptr = ros_message->target_line_id.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name decision_tag
  {
    size_t array_size = ros_message->decision_tag.size;
    auto array_ptr = ros_message->decision_tag.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scene_understanding
  {
    size_t array_size = ros_message->scene_understanding.size;
    auto array_ptr = ros_message->scene_understanding.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cutin_time
  {
    size_t item_size = sizeof(ros_message->cutin_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cutout_time
  {
    size_t item_size = sizeof(ros_message->cutout_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance
  {
    size_t item_size = sizeof(ros_message->distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ttc
  {
    size_t item_size = sizeof(ros_message->ttc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name priority
  {
    size_t item_size = sizeof(ros_message->priority);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
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

static uint32_t _PlanningObstacle__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_planning_msgs2__msg__PlanningObstacle(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_planning_msgs2
size_t max_serialized_size_deva_planning_msgs2__msg__PlanningObstacle(
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

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: current_line_id
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
  // member: target_line_id
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
  // member: decision_tag
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: scene_understanding
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cutin_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cutout_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ttc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: priority
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
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
    using DataType = deva_planning_msgs2__msg__PlanningObstacle;
    is_plain =
      (
      offsetof(DataType, scalable_multimap) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PlanningObstacle__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_planning_msgs2__msg__PlanningObstacle(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlanningObstacle = {
  "deva_planning_msgs2::msg",
  "PlanningObstacle",
  _PlanningObstacle__cdr_serialize,
  _PlanningObstacle__cdr_deserialize,
  _PlanningObstacle__get_serialized_size,
  _PlanningObstacle__max_serialized_size
};

static rosidl_message_type_support_t _PlanningObstacle__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlanningObstacle,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, PlanningObstacle)() {
  return &_PlanningObstacle__type_support;
}

#if defined(__cplusplus)
}
#endif

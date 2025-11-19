// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_mdriver_msgs:msg/MWorld.idl
// generated code does not contain a copyright notice
#include "deva_mdriver_msgs/msg/detail/m_world__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_mdriver_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_mdriver_msgs/msg/detail/m_world__struct.h"
#include "deva_mdriver_msgs/msg/detail/m_world__functions.h"
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

#include "deva_mdriver_msgs/msg/detail/m_prediction_obstacle__functions.h"  // all_obstacles
#include "deva_mdriver_msgs/msg/detail/mdriver_meta_action__functions.h"  // mdriver_meta_actions
#include "deva_mdriver_msgs/msg/detail/nudge_buffer__functions.h"  // nudge_buffer
#include "geometry_msgs/msg/detail/point__functions.h"  // refline_points
#include "rosidl_runtime_c/primitives_sequence.h"  // ego_ref_v
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // ego_ref_v

// forward declare type support functions
size_t get_serialized_size_deva_mdriver_msgs__msg__MPredictionObstacle(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_mdriver_msgs__msg__MPredictionObstacle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_mdriver_msgs, msg, MPredictionObstacle)();
size_t get_serialized_size_deva_mdriver_msgs__msg__MdriverMetaAction(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_mdriver_msgs__msg__MdriverMetaAction(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_mdriver_msgs, msg, MdriverMetaAction)();
size_t get_serialized_size_deva_mdriver_msgs__msg__NudgeBuffer(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_mdriver_msgs__msg__NudgeBuffer(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_mdriver_msgs, msg, NudgeBuffer)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_mdriver_msgs
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_mdriver_msgs
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_mdriver_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();


using _MWorld__ros_msg_type = deva_mdriver_msgs__msg__MWorld;

static bool _MWorld__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MWorld__ros_msg_type * ros_message = static_cast<const _MWorld__ros_msg_type *>(untyped_ros_message);
  // Field name: world_id
  {
    cdr << ros_message->world_id;
  }

  // Field name: meta_action
  {
    cdr << ros_message->meta_action;
  }

  // Field name: all_obstacles
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_mdriver_msgs, msg, MPredictionObstacle
      )()->data);
    size_t size = ros_message->all_obstacles.size;
    auto array_ptr = ros_message->all_obstacles.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: nudge_buffer
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_mdriver_msgs, msg, NudgeBuffer
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->nudge_buffer, cdr))
    {
      return false;
    }
  }

  // Field name: ego_ref_v
  {
    size_t size = ros_message->ego_ref_v.size;
    auto array_ptr = ros_message->ego_ref_v.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: mdriver_meta_actions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_mdriver_msgs, msg, MdriverMetaAction
      )()->data);
    size_t size = ros_message->mdriver_meta_actions.size;
    auto array_ptr = ros_message->mdriver_meta_actions.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: score
  {
    cdr << ros_message->score;
  }

  // Field name: refline_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    size_t size = 17;
    auto array_ptr = ros_message->refline_points;
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

static bool _MWorld__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MWorld__ros_msg_type * ros_message = static_cast<_MWorld__ros_msg_type *>(untyped_ros_message);
  // Field name: world_id
  {
    cdr >> ros_message->world_id;
  }

  // Field name: meta_action
  {
    cdr >> ros_message->meta_action;
  }

  // Field name: all_obstacles
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_mdriver_msgs, msg, MPredictionObstacle
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

    if (ros_message->all_obstacles.data) {
      deva_mdriver_msgs__msg__MPredictionObstacle__Sequence__fini(&ros_message->all_obstacles);
    }
    if (!deva_mdriver_msgs__msg__MPredictionObstacle__Sequence__init(&ros_message->all_obstacles, size)) {
      fprintf(stderr, "failed to create array for field 'all_obstacles'");
      return false;
    }
    auto array_ptr = ros_message->all_obstacles.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: nudge_buffer
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_mdriver_msgs, msg, NudgeBuffer
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->nudge_buffer))
    {
      return false;
    }
  }

  // Field name: ego_ref_v
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

    if (ros_message->ego_ref_v.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->ego_ref_v);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->ego_ref_v, size)) {
      fprintf(stderr, "failed to create array for field 'ego_ref_v'");
      return false;
    }
    auto array_ptr = ros_message->ego_ref_v.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: mdriver_meta_actions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_mdriver_msgs, msg, MdriverMetaAction
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

    if (ros_message->mdriver_meta_actions.data) {
      deva_mdriver_msgs__msg__MdriverMetaAction__Sequence__fini(&ros_message->mdriver_meta_actions);
    }
    if (!deva_mdriver_msgs__msg__MdriverMetaAction__Sequence__init(&ros_message->mdriver_meta_actions, size)) {
      fprintf(stderr, "failed to create array for field 'mdriver_meta_actions'");
      return false;
    }
    auto array_ptr = ros_message->mdriver_meta_actions.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: score
  {
    cdr >> ros_message->score;
  }

  // Field name: refline_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    size_t size = 17;
    auto array_ptr = ros_message->refline_points;
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
size_t get_serialized_size_deva_mdriver_msgs__msg__MWorld(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MWorld__ros_msg_type * ros_message = static_cast<const _MWorld__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name world_id
  {
    size_t item_size = sizeof(ros_message->world_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name meta_action
  {
    size_t item_size = sizeof(ros_message->meta_action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name all_obstacles
  {
    size_t array_size = ros_message->all_obstacles.size;
    auto array_ptr = ros_message->all_obstacles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_mdriver_msgs__msg__MPredictionObstacle(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name nudge_buffer

  current_alignment += get_serialized_size_deva_mdriver_msgs__msg__NudgeBuffer(
    &(ros_message->nudge_buffer), current_alignment);
  // field.name ego_ref_v
  {
    size_t array_size = ros_message->ego_ref_v.size;
    auto array_ptr = ros_message->ego_ref_v.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mdriver_meta_actions
  {
    size_t array_size = ros_message->mdriver_meta_actions.size;
    auto array_ptr = ros_message->mdriver_meta_actions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_mdriver_msgs__msg__MdriverMetaAction(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name score
  {
    size_t item_size = sizeof(ros_message->score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name refline_points
  {
    size_t array_size = 17;
    auto array_ptr = ros_message->refline_points;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Point(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MWorld__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_mdriver_msgs__msg__MWorld(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_mdriver_msgs
size_t max_serialized_size_deva_mdriver_msgs__msg__MWorld(
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

  // member: world_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: meta_action
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: all_obstacles
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
        max_serialized_size_deva_mdriver_msgs__msg__MPredictionObstacle(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: nudge_buffer
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_mdriver_msgs__msg__NudgeBuffer(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: ego_ref_v
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
  // member: mdriver_meta_actions
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
        max_serialized_size_deva_mdriver_msgs__msg__MdriverMetaAction(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: refline_points
  {
    size_t array_size = 17;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
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
    using DataType = deva_mdriver_msgs__msg__MWorld;
    is_plain =
      (
      offsetof(DataType, refline_points) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MWorld__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_mdriver_msgs__msg__MWorld(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MWorld = {
  "deva_mdriver_msgs::msg",
  "MWorld",
  _MWorld__cdr_serialize,
  _MWorld__cdr_deserialize,
  _MWorld__get_serialized_size,
  _MWorld__max_serialized_size
};

static rosidl_message_type_support_t _MWorld__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MWorld,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_mdriver_msgs, msg, MWorld)() {
  return &_MWorld__type_support;
}

#if defined(__cplusplus)
}
#endif

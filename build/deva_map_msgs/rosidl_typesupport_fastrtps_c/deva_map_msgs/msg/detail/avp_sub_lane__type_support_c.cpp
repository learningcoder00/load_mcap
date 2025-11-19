// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_map_msgs:msg/AvpSubLane.idl
// generated code does not contain a copyright notice
#include "deva_map_msgs/msg/detail/avp_sub_lane__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_map_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_map_msgs/msg/detail/avp_sub_lane__struct.h"
#include "deva_map_msgs/msg/detail/avp_sub_lane__functions.h"
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

#include "deva_map_msgs/msg/detail/avp_boundary__functions.h"  // drivable_boundary
#include "deva_map_msgs/msg/detail/path_point__functions.h"  // ref_line
#include "rosidl_runtime_c/string.h"  // lane_id, left_lane_ids, right_lane_ids, successor_lane_ids
#include "rosidl_runtime_c/string_functions.h"  // lane_id, left_lane_ids, right_lane_ids, successor_lane_ids

// forward declare type support functions
size_t get_serialized_size_deva_map_msgs__msg__AvpBoundary(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_map_msgs__msg__AvpBoundary(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, AvpBoundary)();
size_t get_serialized_size_deva_map_msgs__msg__PathPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_map_msgs__msg__PathPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, PathPoint)();


using _AvpSubLane__ros_msg_type = deva_map_msgs__msg__AvpSubLane;

static bool _AvpSubLane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AvpSubLane__ros_msg_type * ros_message = static_cast<const _AvpSubLane__ros_msg_type *>(untyped_ros_message);
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

  // Field name: ref_line
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, PathPoint
      )()->data);
    size_t size = ros_message->ref_line.size;
    auto array_ptr = ros_message->ref_line.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: drivable_boundary
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, AvpBoundary
      )()->data);
    size_t size = ros_message->drivable_boundary.size;
    auto array_ptr = ros_message->drivable_boundary.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: successor_lane_ids
  {
    size_t size = ros_message->successor_lane_ids.size;
    auto array_ptr = ros_message->successor_lane_ids.data;
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

  // Field name: left_lane_ids
  {
    size_t size = ros_message->left_lane_ids.size;
    auto array_ptr = ros_message->left_lane_ids.data;
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

  // Field name: right_lane_ids
  {
    size_t size = ros_message->right_lane_ids.size;
    auto array_ptr = ros_message->right_lane_ids.data;
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

  return true;
}

static bool _AvpSubLane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AvpSubLane__ros_msg_type * ros_message = static_cast<_AvpSubLane__ros_msg_type *>(untyped_ros_message);
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

  // Field name: ref_line
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, PathPoint
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

    if (ros_message->ref_line.data) {
      deva_map_msgs__msg__PathPoint__Sequence__fini(&ros_message->ref_line);
    }
    if (!deva_map_msgs__msg__PathPoint__Sequence__init(&ros_message->ref_line, size)) {
      fprintf(stderr, "failed to create array for field 'ref_line'");
      return false;
    }
    auto array_ptr = ros_message->ref_line.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: drivable_boundary
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, AvpBoundary
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

    if (ros_message->drivable_boundary.data) {
      deva_map_msgs__msg__AvpBoundary__Sequence__fini(&ros_message->drivable_boundary);
    }
    if (!deva_map_msgs__msg__AvpBoundary__Sequence__init(&ros_message->drivable_boundary, size)) {
      fprintf(stderr, "failed to create array for field 'drivable_boundary'");
      return false;
    }
    auto array_ptr = ros_message->drivable_boundary.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: successor_lane_ids
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

    if (ros_message->successor_lane_ids.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->successor_lane_ids);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->successor_lane_ids, size)) {
      fprintf(stderr, "failed to create array for field 'successor_lane_ids'");
      return false;
    }
    auto array_ptr = ros_message->successor_lane_ids.data;
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
        fprintf(stderr, "failed to assign string into field 'successor_lane_ids'\n");
        return false;
      }
    }
  }

  // Field name: left_lane_ids
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

    if (ros_message->left_lane_ids.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->left_lane_ids);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->left_lane_ids, size)) {
      fprintf(stderr, "failed to create array for field 'left_lane_ids'");
      return false;
    }
    auto array_ptr = ros_message->left_lane_ids.data;
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
        fprintf(stderr, "failed to assign string into field 'left_lane_ids'\n");
        return false;
      }
    }
  }

  // Field name: right_lane_ids
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

    if (ros_message->right_lane_ids.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->right_lane_ids);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->right_lane_ids, size)) {
      fprintf(stderr, "failed to create array for field 'right_lane_ids'");
      return false;
    }
    auto array_ptr = ros_message->right_lane_ids.data;
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
        fprintf(stderr, "failed to assign string into field 'right_lane_ids'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_map_msgs
size_t get_serialized_size_deva_map_msgs__msg__AvpSubLane(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AvpSubLane__ros_msg_type * ros_message = static_cast<const _AvpSubLane__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lane_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->lane_id.size + 1);
  // field.name ref_line
  {
    size_t array_size = ros_message->ref_line.size;
    auto array_ptr = ros_message->ref_line.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_map_msgs__msg__PathPoint(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name drivable_boundary
  {
    size_t array_size = ros_message->drivable_boundary.size;
    auto array_ptr = ros_message->drivable_boundary.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_map_msgs__msg__AvpBoundary(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name successor_lane_ids
  {
    size_t array_size = ros_message->successor_lane_ids.size;
    auto array_ptr = ros_message->successor_lane_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name left_lane_ids
  {
    size_t array_size = ros_message->left_lane_ids.size;
    auto array_ptr = ros_message->left_lane_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name right_lane_ids
  {
    size_t array_size = ros_message->right_lane_ids.size;
    auto array_ptr = ros_message->right_lane_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AvpSubLane__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_map_msgs__msg__AvpSubLane(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_map_msgs
size_t max_serialized_size_deva_map_msgs__msg__AvpSubLane(
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
  // member: ref_line
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
        max_serialized_size_deva_map_msgs__msg__PathPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: drivable_boundary
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
        max_serialized_size_deva_map_msgs__msg__AvpBoundary(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: successor_lane_ids
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
  // member: left_lane_ids
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
  // member: right_lane_ids
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_map_msgs__msg__AvpSubLane;
    is_plain =
      (
      offsetof(DataType, right_lane_ids) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AvpSubLane__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_map_msgs__msg__AvpSubLane(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AvpSubLane = {
  "deva_map_msgs::msg",
  "AvpSubLane",
  _AvpSubLane__cdr_serialize,
  _AvpSubLane__cdr_deserialize,
  _AvpSubLane__get_serialized_size,
  _AvpSubLane__max_serialized_size
};

static rosidl_message_type_support_t _AvpSubLane__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AvpSubLane,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, AvpSubLane)() {
  return &_AvpSubLane__type_support;
}

#if defined(__cplusplus)
}
#endif

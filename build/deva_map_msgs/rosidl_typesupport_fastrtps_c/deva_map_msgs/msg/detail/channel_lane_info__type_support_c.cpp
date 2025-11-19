// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_map_msgs:msg/ChannelLaneInfo.idl
// generated code does not contain a copyright notice
#include "deva_map_msgs/msg/detail/channel_lane_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_map_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_map_msgs/msg/detail/channel_lane_info__struct.h"
#include "deva_map_msgs/msg/detail/channel_lane_info__functions.h"
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

#include "deva_map_msgs/msg/detail/channel_lane_speed_limitation__functions.h"  // lanespeedlimitation_vec
#include "deva_map_msgs/msg/detail/channel_lane_type__functions.h"  // lanetype_vec
#include "deva_map_msgs/msg/detail/channel_turn_type__functions.h"  // turntype_vec
#include "rosidl_runtime_c/string.h"  // lane_id_vec
#include "rosidl_runtime_c/string_functions.h"  // lane_id_vec

// forward declare type support functions
size_t get_serialized_size_deva_map_msgs__msg__ChannelLaneSpeedLimitation(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_map_msgs__msg__ChannelLaneSpeedLimitation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, ChannelLaneSpeedLimitation)();
size_t get_serialized_size_deva_map_msgs__msg__ChannelLaneType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_map_msgs__msg__ChannelLaneType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, ChannelLaneType)();
size_t get_serialized_size_deva_map_msgs__msg__ChannelTurnType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_map_msgs__msg__ChannelTurnType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, ChannelTurnType)();


using _ChannelLaneInfo__ros_msg_type = deva_map_msgs__msg__ChannelLaneInfo;

static bool _ChannelLaneInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ChannelLaneInfo__ros_msg_type * ros_message = static_cast<const _ChannelLaneInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: lane_id_vec
  {
    size_t size = ros_message->lane_id_vec.size;
    auto array_ptr = ros_message->lane_id_vec.data;
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

  // Field name: lanetype_vec
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, ChannelLaneType
      )()->data);
    size_t size = ros_message->lanetype_vec.size;
    auto array_ptr = ros_message->lanetype_vec.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: turntype_vec
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, ChannelTurnType
      )()->data);
    size_t size = ros_message->turntype_vec.size;
    auto array_ptr = ros_message->turntype_vec.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: lanespeedlimitation_vec
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, ChannelLaneSpeedLimitation
      )()->data);
    size_t size = ros_message->lanespeedlimitation_vec.size;
    auto array_ptr = ros_message->lanespeedlimitation_vec.data;
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

static bool _ChannelLaneInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ChannelLaneInfo__ros_msg_type * ros_message = static_cast<_ChannelLaneInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: lane_id_vec
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

    if (ros_message->lane_id_vec.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->lane_id_vec);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->lane_id_vec, size)) {
      fprintf(stderr, "failed to create array for field 'lane_id_vec'");
      return false;
    }
    auto array_ptr = ros_message->lane_id_vec.data;
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
        fprintf(stderr, "failed to assign string into field 'lane_id_vec'\n");
        return false;
      }
    }
  }

  // Field name: lanetype_vec
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, ChannelLaneType
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

    if (ros_message->lanetype_vec.data) {
      deva_map_msgs__msg__ChannelLaneType__Sequence__fini(&ros_message->lanetype_vec);
    }
    if (!deva_map_msgs__msg__ChannelLaneType__Sequence__init(&ros_message->lanetype_vec, size)) {
      fprintf(stderr, "failed to create array for field 'lanetype_vec'");
      return false;
    }
    auto array_ptr = ros_message->lanetype_vec.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: turntype_vec
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, ChannelTurnType
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

    if (ros_message->turntype_vec.data) {
      deva_map_msgs__msg__ChannelTurnType__Sequence__fini(&ros_message->turntype_vec);
    }
    if (!deva_map_msgs__msg__ChannelTurnType__Sequence__init(&ros_message->turntype_vec, size)) {
      fprintf(stderr, "failed to create array for field 'turntype_vec'");
      return false;
    }
    auto array_ptr = ros_message->turntype_vec.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: lanespeedlimitation_vec
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, ChannelLaneSpeedLimitation
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

    if (ros_message->lanespeedlimitation_vec.data) {
      deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence__fini(&ros_message->lanespeedlimitation_vec);
    }
    if (!deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence__init(&ros_message->lanespeedlimitation_vec, size)) {
      fprintf(stderr, "failed to create array for field 'lanespeedlimitation_vec'");
      return false;
    }
    auto array_ptr = ros_message->lanespeedlimitation_vec.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_map_msgs
size_t get_serialized_size_deva_map_msgs__msg__ChannelLaneInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ChannelLaneInfo__ros_msg_type * ros_message = static_cast<const _ChannelLaneInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lane_id_vec
  {
    size_t array_size = ros_message->lane_id_vec.size;
    auto array_ptr = ros_message->lane_id_vec.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name lanetype_vec
  {
    size_t array_size = ros_message->lanetype_vec.size;
    auto array_ptr = ros_message->lanetype_vec.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_map_msgs__msg__ChannelLaneType(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name turntype_vec
  {
    size_t array_size = ros_message->turntype_vec.size;
    auto array_ptr = ros_message->turntype_vec.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_map_msgs__msg__ChannelTurnType(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name lanespeedlimitation_vec
  {
    size_t array_size = ros_message->lanespeedlimitation_vec.size;
    auto array_ptr = ros_message->lanespeedlimitation_vec.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_map_msgs__msg__ChannelLaneSpeedLimitation(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ChannelLaneInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_map_msgs__msg__ChannelLaneInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_map_msgs
size_t max_serialized_size_deva_map_msgs__msg__ChannelLaneInfo(
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

  // member: lane_id_vec
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
  // member: lanetype_vec
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
        max_serialized_size_deva_map_msgs__msg__ChannelLaneType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: turntype_vec
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
        max_serialized_size_deva_map_msgs__msg__ChannelTurnType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: lanespeedlimitation_vec
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
        max_serialized_size_deva_map_msgs__msg__ChannelLaneSpeedLimitation(
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
    using DataType = deva_map_msgs__msg__ChannelLaneInfo;
    is_plain =
      (
      offsetof(DataType, lanespeedlimitation_vec) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ChannelLaneInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_map_msgs__msg__ChannelLaneInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ChannelLaneInfo = {
  "deva_map_msgs::msg",
  "ChannelLaneInfo",
  _ChannelLaneInfo__cdr_serialize,
  _ChannelLaneInfo__cdr_deserialize,
  _ChannelLaneInfo__get_serialized_size,
  _ChannelLaneInfo__max_serialized_size
};

static rosidl_message_type_support_t _ChannelLaneInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ChannelLaneInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, ChannelLaneInfo)() {
  return &_ChannelLaneInfo__type_support;
}

#if defined(__cplusplus)
}
#endif

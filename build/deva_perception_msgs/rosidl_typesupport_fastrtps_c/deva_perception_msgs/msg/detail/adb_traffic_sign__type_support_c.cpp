// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_perception_msgs:msg/AdbTrafficSign.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/adb_traffic_sign__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_perception_msgs/msg/detail/adb_traffic_sign__struct.h"
#include "deva_perception_msgs/msg/detail/adb_traffic_sign__functions.h"
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

#include "deva_perception_msgs/msg/detail/extra_info__functions.h"  // extra_infos

// forward declare type support functions
size_t get_serialized_size_deva_perception_msgs__msg__ExtraInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_perception_msgs__msg__ExtraInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, ExtraInfo)();


using _AdbTrafficSign__ros_msg_type = deva_perception_msgs__msg__AdbTrafficSign;

static bool _AdbTrafficSign__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AdbTrafficSign__ros_msg_type * ros_message = static_cast<const _AdbTrafficSign__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: conf
  {
    cdr << ros_message->conf;
  }

  // Field name: parsing_conf
  {
    cdr << ros_message->parsing_conf;
  }

  // Field name: track_info
  {
    cdr << ros_message->track_info;
  }

  // Field name: age
  {
    cdr << ros_message->age;
  }

  // Field name: life_time
  {
    cdr << ros_message->life_time;
  }

  // Field name: distance
  {
    cdr << ros_message->distance;
  }

  // Field name: horizon_left_angle
  {
    cdr << ros_message->horizon_left_angle;
  }

  // Field name: horizon_right_angle
  {
    cdr << ros_message->horizon_right_angle;
  }

  // Field name: vertical_bottom_angle
  {
    cdr << ros_message->vertical_bottom_angle;
  }

  // Field name: vertical_top_angle
  {
    cdr << ros_message->vertical_top_angle;
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

static bool _AdbTrafficSign__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AdbTrafficSign__ros_msg_type * ros_message = static_cast<_AdbTrafficSign__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: conf
  {
    cdr >> ros_message->conf;
  }

  // Field name: parsing_conf
  {
    cdr >> ros_message->parsing_conf;
  }

  // Field name: track_info
  {
    cdr >> ros_message->track_info;
  }

  // Field name: age
  {
    cdr >> ros_message->age;
  }

  // Field name: life_time
  {
    cdr >> ros_message->life_time;
  }

  // Field name: distance
  {
    cdr >> ros_message->distance;
  }

  // Field name: horizon_left_angle
  {
    cdr >> ros_message->horizon_left_angle;
  }

  // Field name: horizon_right_angle
  {
    cdr >> ros_message->horizon_right_angle;
  }

  // Field name: vertical_bottom_angle
  {
    cdr >> ros_message->vertical_bottom_angle;
  }

  // Field name: vertical_top_angle
  {
    cdr >> ros_message->vertical_top_angle;
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
size_t get_serialized_size_deva_perception_msgs__msg__AdbTrafficSign(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AdbTrafficSign__ros_msg_type * ros_message = static_cast<const _AdbTrafficSign__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name conf
  {
    size_t item_size = sizeof(ros_message->conf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name parsing_conf
  {
    size_t item_size = sizeof(ros_message->parsing_conf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name track_info
  {
    size_t item_size = sizeof(ros_message->track_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name age
  {
    size_t item_size = sizeof(ros_message->age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name life_time
  {
    size_t item_size = sizeof(ros_message->life_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance
  {
    size_t item_size = sizeof(ros_message->distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name horizon_left_angle
  {
    size_t item_size = sizeof(ros_message->horizon_left_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name horizon_right_angle
  {
    size_t item_size = sizeof(ros_message->horizon_right_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vertical_bottom_angle
  {
    size_t item_size = sizeof(ros_message->vertical_bottom_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vertical_top_angle
  {
    size_t item_size = sizeof(ros_message->vertical_top_angle);
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

static uint32_t _AdbTrafficSign__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_perception_msgs__msg__AdbTrafficSign(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_perception_msgs
size_t max_serialized_size_deva_perception_msgs__msg__AdbTrafficSign(
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

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: conf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: parsing_conf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: track_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: age
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: life_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: horizon_left_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: horizon_right_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vertical_bottom_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vertical_top_angle
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
    using DataType = deva_perception_msgs__msg__AdbTrafficSign;
    is_plain =
      (
      offsetof(DataType, extra_infos) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AdbTrafficSign__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_perception_msgs__msg__AdbTrafficSign(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AdbTrafficSign = {
  "deva_perception_msgs::msg",
  "AdbTrafficSign",
  _AdbTrafficSign__cdr_serialize,
  _AdbTrafficSign__cdr_deserialize,
  _AdbTrafficSign__get_serialized_size,
  _AdbTrafficSign__max_serialized_size
};

static rosidl_message_type_support_t _AdbTrafficSign__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AdbTrafficSign,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, AdbTrafficSign)() {
  return &_AdbTrafficSign__type_support;
}

#if defined(__cplusplus)
}
#endif

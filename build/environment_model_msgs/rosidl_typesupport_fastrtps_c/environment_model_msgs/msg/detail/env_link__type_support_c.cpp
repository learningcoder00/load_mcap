// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from environment_model_msgs:msg/EnvLink.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/env_link__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "environment_model_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "environment_model_msgs/msg/detail/env_link__struct.h"
#include "environment_model_msgs/msg/detail/env_link__functions.h"
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


// forward declare type support functions


using _EnvLink__ros_msg_type = environment_model_msgs__msg__EnvLink;

static bool _EnvLink__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EnvLink__ros_msg_type * ros_message = static_cast<const _EnvLink__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: parent_link_id
  {
    cdr << ros_message->parent_link_id;
  }

  // Field name: angle_with_parent
  {
    cdr << ros_message->angle_with_parent;
  }

  // Field name: length
  {
    cdr << ros_message->length;
  }

  // Field name: is_on_routing
  {
    cdr << (ros_message->is_on_routing ? true : false);
  }

  // Field name: lane_num
  {
    cdr << ros_message->lane_num;
  }

  // Field name: sub_link_num
  {
    cdr << ros_message->sub_link_num;
  }

  return true;
}

static bool _EnvLink__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EnvLink__ros_msg_type * ros_message = static_cast<_EnvLink__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: parent_link_id
  {
    cdr >> ros_message->parent_link_id;
  }

  // Field name: angle_with_parent
  {
    cdr >> ros_message->angle_with_parent;
  }

  // Field name: length
  {
    cdr >> ros_message->length;
  }

  // Field name: is_on_routing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_on_routing = tmp ? true : false;
  }

  // Field name: lane_num
  {
    cdr >> ros_message->lane_num;
  }

  // Field name: sub_link_num
  {
    cdr >> ros_message->sub_link_num;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_model_msgs
size_t get_serialized_size_environment_model_msgs__msg__EnvLink(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EnvLink__ros_msg_type * ros_message = static_cast<const _EnvLink__ros_msg_type *>(untyped_ros_message);
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
  // field.name parent_link_id
  {
    size_t item_size = sizeof(ros_message->parent_link_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle_with_parent
  {
    size_t item_size = sizeof(ros_message->angle_with_parent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name length
  {
    size_t item_size = sizeof(ros_message->length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_on_routing
  {
    size_t item_size = sizeof(ros_message->is_on_routing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_num
  {
    size_t item_size = sizeof(ros_message->lane_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sub_link_num
  {
    size_t item_size = sizeof(ros_message->sub_link_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EnvLink__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_environment_model_msgs__msg__EnvLink(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_model_msgs
size_t max_serialized_size_environment_model_msgs__msg__EnvLink(
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

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: parent_link_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: angle_with_parent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: is_on_routing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sub_link_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = environment_model_msgs__msg__EnvLink;
    is_plain =
      (
      offsetof(DataType, sub_link_num) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EnvLink__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_environment_model_msgs__msg__EnvLink(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EnvLink = {
  "environment_model_msgs::msg",
  "EnvLink",
  _EnvLink__cdr_serialize,
  _EnvLink__cdr_deserialize,
  _EnvLink__get_serialized_size,
  _EnvLink__max_serialized_size
};

static rosidl_message_type_support_t _EnvLink__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EnvLink,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, EnvLink)() {
  return &_EnvLink__type_support;
}

#if defined(__cplusplus)
}
#endif

// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_gaode_routing_msgs:msg/WebVocalRecMsg.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/web_vocal_rec_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_gaode_routing_msgs/msg/detail/web_vocal_rec_msg__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/web_vocal_rec_msg__functions.h"
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

#include "rosidl_runtime_c/string.h"  // voice_content
#include "rosidl_runtime_c/string_functions.h"  // voice_content

// forward declare type support functions


using _WebVocalRecMsg__ros_msg_type = deva_gaode_routing_msgs__msg__WebVocalRecMsg;

static bool _WebVocalRecMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WebVocalRecMsg__ros_msg_type * ros_message = static_cast<const _WebVocalRecMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: sequence_num
  {
    cdr << ros_message->sequence_num;
  }

  // Field name: road_type
  {
    cdr << ros_message->road_type;
  }

  // Field name: conor_type
  {
    cdr << ros_message->conor_type;
  }

  // Field name: lane_num
  {
    cdr << ros_message->lane_num;
  }

  // Field name: distance
  {
    cdr << ros_message->distance;
  }

  // Field name: voice_content
  {
    const rosidl_runtime_c__String * str = &ros_message->voice_content;
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

  return true;
}

static bool _WebVocalRecMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WebVocalRecMsg__ros_msg_type * ros_message = static_cast<_WebVocalRecMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: sequence_num
  {
    cdr >> ros_message->sequence_num;
  }

  // Field name: road_type
  {
    cdr >> ros_message->road_type;
  }

  // Field name: conor_type
  {
    cdr >> ros_message->conor_type;
  }

  // Field name: lane_num
  {
    cdr >> ros_message->lane_num;
  }

  // Field name: distance
  {
    cdr >> ros_message->distance;
  }

  // Field name: voice_content
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->voice_content.data) {
      rosidl_runtime_c__String__init(&ros_message->voice_content);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->voice_content,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'voice_content'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t get_serialized_size_deva_gaode_routing_msgs__msg__WebVocalRecMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WebVocalRecMsg__ros_msg_type * ros_message = static_cast<const _WebVocalRecMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sequence_num
  {
    size_t item_size = sizeof(ros_message->sequence_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name road_type
  {
    size_t item_size = sizeof(ros_message->road_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name conor_type
  {
    size_t item_size = sizeof(ros_message->conor_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_num
  {
    size_t item_size = sizeof(ros_message->lane_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance
  {
    size_t item_size = sizeof(ros_message->distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name voice_content
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->voice_content.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _WebVocalRecMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_gaode_routing_msgs__msg__WebVocalRecMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t max_serialized_size_deva_gaode_routing_msgs__msg__WebVocalRecMsg(
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

  // member: sequence_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: road_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: conor_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lane_num
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
  // member: voice_content
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_gaode_routing_msgs__msg__WebVocalRecMsg;
    is_plain =
      (
      offsetof(DataType, voice_content) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _WebVocalRecMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_gaode_routing_msgs__msg__WebVocalRecMsg(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WebVocalRecMsg = {
  "deva_gaode_routing_msgs::msg",
  "WebVocalRecMsg",
  _WebVocalRecMsg__cdr_serialize,
  _WebVocalRecMsg__cdr_deserialize,
  _WebVocalRecMsg__get_serialized_size,
  _WebVocalRecMsg__max_serialized_size
};

static rosidl_message_type_support_t _WebVocalRecMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WebVocalRecMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebVocalRecMsg)() {
  return &_WebVocalRecMsg__type_support;
}

#if defined(__cplusplus)
}
#endif

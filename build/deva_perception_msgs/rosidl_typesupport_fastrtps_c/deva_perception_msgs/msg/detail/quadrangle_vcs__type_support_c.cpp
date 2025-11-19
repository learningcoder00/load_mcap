// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_perception_msgs:msg/QuadrangleVcs.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/quadrangle_vcs__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_perception_msgs/msg/detail/quadrangle_vcs__struct.h"
#include "deva_perception_msgs/msg/detail/quadrangle_vcs__functions.h"
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


using _QuadrangleVcs__ros_msg_type = deva_perception_msgs__msg__QuadrangleVcs;

static bool _QuadrangleVcs__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _QuadrangleVcs__ros_msg_type * ros_message = static_cast<const _QuadrangleVcs__ros_msg_type *>(untyped_ros_message);
  // Field name: leftuppointx
  {
    cdr << ros_message->leftuppointx;
  }

  // Field name: leftuppointy
  {
    cdr << ros_message->leftuppointy;
  }

  // Field name: leftuppointz
  {
    cdr << ros_message->leftuppointz;
  }

  // Field name: rightuppointx
  {
    cdr << ros_message->rightuppointx;
  }

  // Field name: rightuppointy
  {
    cdr << ros_message->rightuppointy;
  }

  // Field name: rightuppointz
  {
    cdr << ros_message->rightuppointz;
  }

  // Field name: rightdownpointx
  {
    cdr << ros_message->rightdownpointx;
  }

  // Field name: rightdownpointy
  {
    cdr << ros_message->rightdownpointy;
  }

  // Field name: rightdownpointz
  {
    cdr << ros_message->rightdownpointz;
  }

  // Field name: leftdownpointx
  {
    cdr << ros_message->leftdownpointx;
  }

  // Field name: leftdownpointy
  {
    cdr << ros_message->leftdownpointy;
  }

  // Field name: leftdownpointz
  {
    cdr << ros_message->leftdownpointz;
  }

  return true;
}

static bool _QuadrangleVcs__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _QuadrangleVcs__ros_msg_type * ros_message = static_cast<_QuadrangleVcs__ros_msg_type *>(untyped_ros_message);
  // Field name: leftuppointx
  {
    cdr >> ros_message->leftuppointx;
  }

  // Field name: leftuppointy
  {
    cdr >> ros_message->leftuppointy;
  }

  // Field name: leftuppointz
  {
    cdr >> ros_message->leftuppointz;
  }

  // Field name: rightuppointx
  {
    cdr >> ros_message->rightuppointx;
  }

  // Field name: rightuppointy
  {
    cdr >> ros_message->rightuppointy;
  }

  // Field name: rightuppointz
  {
    cdr >> ros_message->rightuppointz;
  }

  // Field name: rightdownpointx
  {
    cdr >> ros_message->rightdownpointx;
  }

  // Field name: rightdownpointy
  {
    cdr >> ros_message->rightdownpointy;
  }

  // Field name: rightdownpointz
  {
    cdr >> ros_message->rightdownpointz;
  }

  // Field name: leftdownpointx
  {
    cdr >> ros_message->leftdownpointx;
  }

  // Field name: leftdownpointy
  {
    cdr >> ros_message->leftdownpointy;
  }

  // Field name: leftdownpointz
  {
    cdr >> ros_message->leftdownpointz;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_perception_msgs
size_t get_serialized_size_deva_perception_msgs__msg__QuadrangleVcs(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _QuadrangleVcs__ros_msg_type * ros_message = static_cast<const _QuadrangleVcs__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name leftuppointx
  {
    size_t item_size = sizeof(ros_message->leftuppointx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name leftuppointy
  {
    size_t item_size = sizeof(ros_message->leftuppointy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name leftuppointz
  {
    size_t item_size = sizeof(ros_message->leftuppointz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rightuppointx
  {
    size_t item_size = sizeof(ros_message->rightuppointx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rightuppointy
  {
    size_t item_size = sizeof(ros_message->rightuppointy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rightuppointz
  {
    size_t item_size = sizeof(ros_message->rightuppointz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rightdownpointx
  {
    size_t item_size = sizeof(ros_message->rightdownpointx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rightdownpointy
  {
    size_t item_size = sizeof(ros_message->rightdownpointy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rightdownpointz
  {
    size_t item_size = sizeof(ros_message->rightdownpointz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name leftdownpointx
  {
    size_t item_size = sizeof(ros_message->leftdownpointx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name leftdownpointy
  {
    size_t item_size = sizeof(ros_message->leftdownpointy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name leftdownpointz
  {
    size_t item_size = sizeof(ros_message->leftdownpointz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _QuadrangleVcs__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_perception_msgs__msg__QuadrangleVcs(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_perception_msgs
size_t max_serialized_size_deva_perception_msgs__msg__QuadrangleVcs(
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

  // member: leftuppointx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: leftuppointy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: leftuppointz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rightuppointx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rightuppointy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rightuppointz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rightdownpointx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rightdownpointy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rightdownpointz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: leftdownpointx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: leftdownpointy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: leftdownpointz
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
    using DataType = deva_perception_msgs__msg__QuadrangleVcs;
    is_plain =
      (
      offsetof(DataType, leftdownpointz) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _QuadrangleVcs__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_perception_msgs__msg__QuadrangleVcs(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_QuadrangleVcs = {
  "deva_perception_msgs::msg",
  "QuadrangleVcs",
  _QuadrangleVcs__cdr_serialize,
  _QuadrangleVcs__cdr_deserialize,
  _QuadrangleVcs__get_serialized_size,
  _QuadrangleVcs__max_serialized_size
};

static rosidl_message_type_support_t _QuadrangleVcs__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_QuadrangleVcs,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, QuadrangleVcs)() {
  return &_QuadrangleVcs__type_support;
}

#if defined(__cplusplus)
}
#endif

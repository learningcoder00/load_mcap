// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_aeb_msgs:msg/SFVehSelf.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_veh_self__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_aeb_msgs/msg/detail/sf_veh_self__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_veh_self__functions.h"
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


using _SFVehSelf__ros_msg_type = deva_aeb_msgs__msg__SFVehSelf;

static bool _SFVehSelf__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SFVehSelf__ros_msg_type * ros_message = static_cast<const _SFVehSelf__ros_msg_type *>(untyped_ros_message);
  // Field name: vlgt
  {
    cdr << ros_message->vlgt;
  }

  // Field name: vlgtcmpfac
  {
    cdr << ros_message->vlgtcmpfac;
  }

  // Field name: algt
  {
    cdr << ros_message->algt;
  }

  // Field name: algtraw
  {
    cdr << ros_message->algtraw;
  }

  // Field name: alatraw
  {
    cdr << ros_message->alatraw;
  }

  // Field name: yawrate
  {
    cdr << ros_message->yawrate;
  }

  // Field name: yawrateraw
  {
    cdr << ros_message->yawrateraw;
  }

  // Field name: posnlgtdelta
  {
    cdr << ros_message->posnlgtdelta;
  }

  // Field name: posnlatdelta
  {
    cdr << ros_message->posnlatdelta;
  }

  // Field name: agdirdelta
  {
    cdr << ros_message->agdirdelta;
  }

  return true;
}

static bool _SFVehSelf__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SFVehSelf__ros_msg_type * ros_message = static_cast<_SFVehSelf__ros_msg_type *>(untyped_ros_message);
  // Field name: vlgt
  {
    cdr >> ros_message->vlgt;
  }

  // Field name: vlgtcmpfac
  {
    cdr >> ros_message->vlgtcmpfac;
  }

  // Field name: algt
  {
    cdr >> ros_message->algt;
  }

  // Field name: algtraw
  {
    cdr >> ros_message->algtraw;
  }

  // Field name: alatraw
  {
    cdr >> ros_message->alatraw;
  }

  // Field name: yawrate
  {
    cdr >> ros_message->yawrate;
  }

  // Field name: yawrateraw
  {
    cdr >> ros_message->yawrateraw;
  }

  // Field name: posnlgtdelta
  {
    cdr >> ros_message->posnlgtdelta;
  }

  // Field name: posnlatdelta
  {
    cdr >> ros_message->posnlatdelta;
  }

  // Field name: agdirdelta
  {
    cdr >> ros_message->agdirdelta;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t get_serialized_size_deva_aeb_msgs__msg__SFVehSelf(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SFVehSelf__ros_msg_type * ros_message = static_cast<const _SFVehSelf__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name vlgt
  {
    size_t item_size = sizeof(ros_message->vlgt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vlgtcmpfac
  {
    size_t item_size = sizeof(ros_message->vlgtcmpfac);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name algt
  {
    size_t item_size = sizeof(ros_message->algt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name algtraw
  {
    size_t item_size = sizeof(ros_message->algtraw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alatraw
  {
    size_t item_size = sizeof(ros_message->alatraw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yawrate
  {
    size_t item_size = sizeof(ros_message->yawrate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yawrateraw
  {
    size_t item_size = sizeof(ros_message->yawrateraw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name posnlgtdelta
  {
    size_t item_size = sizeof(ros_message->posnlgtdelta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name posnlatdelta
  {
    size_t item_size = sizeof(ros_message->posnlatdelta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name agdirdelta
  {
    size_t item_size = sizeof(ros_message->agdirdelta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SFVehSelf__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_aeb_msgs__msg__SFVehSelf(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t max_serialized_size_deva_aeb_msgs__msg__SFVehSelf(
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

  // member: vlgt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vlgtcmpfac
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: algt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: algtraw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: alatraw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yawrate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yawrateraw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: posnlgtdelta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: posnlatdelta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: agdirdelta
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
    using DataType = deva_aeb_msgs__msg__SFVehSelf;
    is_plain =
      (
      offsetof(DataType, agdirdelta) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SFVehSelf__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_aeb_msgs__msg__SFVehSelf(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SFVehSelf = {
  "deva_aeb_msgs::msg",
  "SFVehSelf",
  _SFVehSelf__cdr_serialize,
  _SFVehSelf__cdr_deserialize,
  _SFVehSelf__get_serialized_size,
  _SFVehSelf__max_serialized_size
};

static rosidl_message_type_support_t _SFVehSelf__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SFVehSelf,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFVehSelf)() {
  return &_SFVehSelf__type_support;
}

#if defined(__cplusplus)
}
#endif

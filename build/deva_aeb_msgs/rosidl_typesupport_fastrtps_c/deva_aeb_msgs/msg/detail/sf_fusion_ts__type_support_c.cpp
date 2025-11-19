// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_aeb_msgs:msg/SFFusionTS.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_fusion_ts__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_aeb_msgs/msg/detail/sf_fusion_ts__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_fusion_ts__functions.h"
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


using _SFFusionTS__ros_msg_type = deva_aeb_msgs__msg__SFFusionTS;

static bool _SFFusionTS__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SFFusionTS__ros_msg_type * ros_message = static_cast<const _SFFusionTS__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: dstlgttoeve
  {
    cdr << ros_message->dstlgttoeve;
  }

  // Field name: dstlattoeve
  {
    cdr << ros_message->dstlattoeve;
  }

  // Field name: height
  {
    cdr << ros_message->height;
  }

  // Field name: electcsgn
  {
    cdr << ros_message->electcsgn;
  }

  // Field name: lanelocn
  {
    cdr << ros_message->lanelocn;
  }

  // Field name: locn
  {
    cdr << ros_message->locn;
  }

  // Field name: rlvc
  {
    cdr << ros_message->rlvc;
  }

  // Field name: notrlvres
  {
    cdr << ros_message->notrlvres;
  }

  // Field name: qly
  {
    cdr << ros_message->qly;
  }

  // Field name: typ
  {
    cdr << ros_message->typ;
  }

  // Field name: val
  {
    cdr << ros_message->val;
  }

  // Field name: reserved
  {
    cdr << ros_message->reserved;
  }

  // Field name: spplinfoval
  {
    cdr << ros_message->spplinfoval;
  }

  // Field name: spplinfotype
  {
    cdr << ros_message->spplinfotype;
  }

  return true;
}

static bool _SFFusionTS__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SFFusionTS__ros_msg_type * ros_message = static_cast<_SFFusionTS__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: dstlgttoeve
  {
    cdr >> ros_message->dstlgttoeve;
  }

  // Field name: dstlattoeve
  {
    cdr >> ros_message->dstlattoeve;
  }

  // Field name: height
  {
    cdr >> ros_message->height;
  }

  // Field name: electcsgn
  {
    cdr >> ros_message->electcsgn;
  }

  // Field name: lanelocn
  {
    cdr >> ros_message->lanelocn;
  }

  // Field name: locn
  {
    cdr >> ros_message->locn;
  }

  // Field name: rlvc
  {
    cdr >> ros_message->rlvc;
  }

  // Field name: notrlvres
  {
    cdr >> ros_message->notrlvres;
  }

  // Field name: qly
  {
    cdr >> ros_message->qly;
  }

  // Field name: typ
  {
    cdr >> ros_message->typ;
  }

  // Field name: val
  {
    cdr >> ros_message->val;
  }

  // Field name: reserved
  {
    cdr >> ros_message->reserved;
  }

  // Field name: spplinfoval
  {
    cdr >> ros_message->spplinfoval;
  }

  // Field name: spplinfotype
  {
    cdr >> ros_message->spplinfotype;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t get_serialized_size_deva_aeb_msgs__msg__SFFusionTS(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SFFusionTS__ros_msg_type * ros_message = static_cast<const _SFFusionTS__ros_msg_type *>(untyped_ros_message);
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
  // field.name dstlgttoeve
  {
    size_t item_size = sizeof(ros_message->dstlgttoeve);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dstlattoeve
  {
    size_t item_size = sizeof(ros_message->dstlattoeve);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height
  {
    size_t item_size = sizeof(ros_message->height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name electcsgn
  {
    size_t item_size = sizeof(ros_message->electcsgn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lanelocn
  {
    size_t item_size = sizeof(ros_message->lanelocn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name locn
  {
    size_t item_size = sizeof(ros_message->locn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rlvc
  {
    size_t item_size = sizeof(ros_message->rlvc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name notrlvres
  {
    size_t item_size = sizeof(ros_message->notrlvres);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name qly
  {
    size_t item_size = sizeof(ros_message->qly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name typ
  {
    size_t item_size = sizeof(ros_message->typ);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name val
  {
    size_t item_size = sizeof(ros_message->val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved
  {
    size_t item_size = sizeof(ros_message->reserved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name spplinfoval
  {
    size_t item_size = sizeof(ros_message->spplinfoval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name spplinfotype
  {
    size_t item_size = sizeof(ros_message->spplinfotype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SFFusionTS__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_aeb_msgs__msg__SFFusionTS(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t max_serialized_size_deva_aeb_msgs__msg__SFFusionTS(
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

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dstlgttoeve
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dstlattoeve
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: electcsgn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lanelocn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: locn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rlvc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: notrlvres
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: qly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: typ
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserved
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: spplinfoval
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: spplinfotype
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
    using DataType = deva_aeb_msgs__msg__SFFusionTS;
    is_plain =
      (
      offsetof(DataType, spplinfotype) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SFFusionTS__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_aeb_msgs__msg__SFFusionTS(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SFFusionTS = {
  "deva_aeb_msgs::msg",
  "SFFusionTS",
  _SFFusionTS__cdr_serialize,
  _SFFusionTS__cdr_deserialize,
  _SFFusionTS__get_serialized_size,
  _SFFusionTS__max_serialized_size
};

static rosidl_message_type_support_t _SFFusionTS__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SFFusionTS,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFFusionTS)() {
  return &_SFFusionTS__type_support;
}

#if defined(__cplusplus)
}
#endif

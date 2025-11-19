// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_aeb_msgs:msg/SFVisionInfo.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_vision_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_aeb_msgs/msg/detail/sf_vision_info__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_vision_info__functions.h"
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


using _SFVisionInfo__ros_msg_type = deva_aeb_msgs__msg__SFVisionInfo;

static bool _SFVisionInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SFVisionInfo__ros_msg_type * ros_message = static_cast<const _SFVisionInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: cornerx
  {
    cdr << ros_message->cornerx;
  }

  // Field name: cornery
  {
    cdr << ros_message->cornery;
  }

  // Field name: distinlane
  {
    cdr << ros_message->distinlane;
  }

  // Field name: objcutinflag
  {
    cdr << ros_message->objcutinflag;
  }

  // Field name: objcutinlanetype
  {
    cdr << ros_message->objcutinlanetype;
  }

  // Field name: reserved
  {
    size_t size = 3;
    auto array_ptr = ros_message->reserved;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: visionposx
  {
    cdr << ros_message->visionposx;
  }

  // Field name: visionposy
  {
    cdr << ros_message->visionposy;
  }

  // Field name: laneassignment
  {
    cdr << ros_message->laneassignment;
  }

  // Field name: iscipv
  {
    cdr << ros_message->iscipv;
  }

  // Field name: mtncatergory
  {
    cdr << ros_message->mtncatergory;
  }

  // Field name: mtnstatus
  {
    cdr << ros_message->mtnstatus;
  }

  // Field name: distconvergence
  {
    cdr << ros_message->distconvergence;
  }

  // Field name: coverdproperty
  {
    cdr << ros_message->coverdproperty;
  }

  // Field name: unstable
  {
    cdr << ros_message->unstable;
  }

  return true;
}

static bool _SFVisionInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SFVisionInfo__ros_msg_type * ros_message = static_cast<_SFVisionInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: cornerx
  {
    cdr >> ros_message->cornerx;
  }

  // Field name: cornery
  {
    cdr >> ros_message->cornery;
  }

  // Field name: distinlane
  {
    cdr >> ros_message->distinlane;
  }

  // Field name: objcutinflag
  {
    cdr >> ros_message->objcutinflag;
  }

  // Field name: objcutinlanetype
  {
    cdr >> ros_message->objcutinlanetype;
  }

  // Field name: reserved
  {
    size_t size = 3;
    auto array_ptr = ros_message->reserved;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: visionposx
  {
    cdr >> ros_message->visionposx;
  }

  // Field name: visionposy
  {
    cdr >> ros_message->visionposy;
  }

  // Field name: laneassignment
  {
    cdr >> ros_message->laneassignment;
  }

  // Field name: iscipv
  {
    cdr >> ros_message->iscipv;
  }

  // Field name: mtncatergory
  {
    cdr >> ros_message->mtncatergory;
  }

  // Field name: mtnstatus
  {
    cdr >> ros_message->mtnstatus;
  }

  // Field name: distconvergence
  {
    cdr >> ros_message->distconvergence;
  }

  // Field name: coverdproperty
  {
    cdr >> ros_message->coverdproperty;
  }

  // Field name: unstable
  {
    cdr >> ros_message->unstable;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t get_serialized_size_deva_aeb_msgs__msg__SFVisionInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SFVisionInfo__ros_msg_type * ros_message = static_cast<const _SFVisionInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cornerx
  {
    size_t item_size = sizeof(ros_message->cornerx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cornery
  {
    size_t item_size = sizeof(ros_message->cornery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distinlane
  {
    size_t item_size = sizeof(ros_message->distinlane);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name objcutinflag
  {
    size_t item_size = sizeof(ros_message->objcutinflag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name objcutinlanetype
  {
    size_t item_size = sizeof(ros_message->objcutinlanetype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->reserved;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name visionposx
  {
    size_t item_size = sizeof(ros_message->visionposx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name visionposy
  {
    size_t item_size = sizeof(ros_message->visionposy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name laneassignment
  {
    size_t item_size = sizeof(ros_message->laneassignment);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name iscipv
  {
    size_t item_size = sizeof(ros_message->iscipv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mtncatergory
  {
    size_t item_size = sizeof(ros_message->mtncatergory);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mtnstatus
  {
    size_t item_size = sizeof(ros_message->mtnstatus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distconvergence
  {
    size_t item_size = sizeof(ros_message->distconvergence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name coverdproperty
  {
    size_t item_size = sizeof(ros_message->coverdproperty);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name unstable
  {
    size_t item_size = sizeof(ros_message->unstable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SFVisionInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_aeb_msgs__msg__SFVisionInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t max_serialized_size_deva_aeb_msgs__msg__SFVisionInfo(
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

  // member: cornerx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cornery
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: distinlane
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: objcutinflag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: objcutinlanetype
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserved
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: visionposx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: visionposy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: laneassignment
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: iscipv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mtncatergory
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mtnstatus
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: distconvergence
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: coverdproperty
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: unstable
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
    using DataType = deva_aeb_msgs__msg__SFVisionInfo;
    is_plain =
      (
      offsetof(DataType, unstable) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SFVisionInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_aeb_msgs__msg__SFVisionInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SFVisionInfo = {
  "deva_aeb_msgs::msg",
  "SFVisionInfo",
  _SFVisionInfo__cdr_serialize,
  _SFVisionInfo__cdr_deserialize,
  _SFVisionInfo__get_serialized_size,
  _SFVisionInfo__max_serialized_size
};

static rosidl_message_type_support_t _SFVisionInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SFVisionInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFVisionInfo)() {
  return &_SFVisionInfo__type_support;
}

#if defined(__cplusplus)
}
#endif

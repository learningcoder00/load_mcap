// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_aeb_msgs:msg/SFObjInfoNOA.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_obj_info_noa__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_aeb_msgs/msg/detail/sf_obj_info_noa__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_obj_info_noa__functions.h"
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


using _SFObjInfoNOA__ros_msg_type = deva_aeb_msgs__msg__SFObjInfoNOA;

static bool _SFObjInfoNOA__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SFObjInfoNOA__ros_msg_type * ros_message = static_cast<const _SFObjInfoNOA__ros_msg_type *>(untyped_ros_message);
  // Field name: length
  {
    cdr << ros_message->length;
  }

  // Field name: width
  {
    cdr << ros_message->width;
  }

  // Field name: hei
  {
    cdr << ros_message->hei;
  }

  // Field name: dstlatfrommidoflaneself
  {
    cdr << ros_message->dstlatfrommidoflaneself;
  }

  // Field name: typ
  {
    cdr << ros_message->typ;
  }

  // Field name: sidenear
  {
    cdr << ros_message->sidenear;
  }

  // Field name: indcrturn
  {
    cdr << ros_message->indcrturn;
  }

  // Field name: indcrbrkli
  {
    cdr << ros_message->indcrbrkli;
  }

  // Field name: indcrhzrdli
  {
    cdr << ros_message->indcrhzrdli;
  }

  // Field name: mtnpat
  {
    cdr << ros_message->mtnpat;
  }

  // Field name: mtnpathist
  {
    cdr << ros_message->mtnpathist;
  }

  // Field name: fusnsrcraw
  {
    cdr << ros_message->fusnsrcraw;
  }

  // Field name: clisnsideradarctrlwarnqly
  {
    cdr << ros_message->clisnsideradarctrlwarnqly;
  }

  // Field name: clisnsideradarctrlbrkqly
  {
    cdr << ros_message->clisnsideradarctrlbrkqly;
  }

  // Field name: reserved
  {
    size_t size = 2;
    auto array_ptr = ros_message->reserved;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: lan_assignment
  {
    cdr << ros_message->lan_assignment;
  }

  return true;
}

static bool _SFObjInfoNOA__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SFObjInfoNOA__ros_msg_type * ros_message = static_cast<_SFObjInfoNOA__ros_msg_type *>(untyped_ros_message);
  // Field name: length
  {
    cdr >> ros_message->length;
  }

  // Field name: width
  {
    cdr >> ros_message->width;
  }

  // Field name: hei
  {
    cdr >> ros_message->hei;
  }

  // Field name: dstlatfrommidoflaneself
  {
    cdr >> ros_message->dstlatfrommidoflaneself;
  }

  // Field name: typ
  {
    cdr >> ros_message->typ;
  }

  // Field name: sidenear
  {
    cdr >> ros_message->sidenear;
  }

  // Field name: indcrturn
  {
    cdr >> ros_message->indcrturn;
  }

  // Field name: indcrbrkli
  {
    cdr >> ros_message->indcrbrkli;
  }

  // Field name: indcrhzrdli
  {
    cdr >> ros_message->indcrhzrdli;
  }

  // Field name: mtnpat
  {
    cdr >> ros_message->mtnpat;
  }

  // Field name: mtnpathist
  {
    cdr >> ros_message->mtnpathist;
  }

  // Field name: fusnsrcraw
  {
    cdr >> ros_message->fusnsrcraw;
  }

  // Field name: clisnsideradarctrlwarnqly
  {
    cdr >> ros_message->clisnsideradarctrlwarnqly;
  }

  // Field name: clisnsideradarctrlbrkqly
  {
    cdr >> ros_message->clisnsideradarctrlbrkqly;
  }

  // Field name: reserved
  {
    size_t size = 2;
    auto array_ptr = ros_message->reserved;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: lan_assignment
  {
    cdr >> ros_message->lan_assignment;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t get_serialized_size_deva_aeb_msgs__msg__SFObjInfoNOA(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SFObjInfoNOA__ros_msg_type * ros_message = static_cast<const _SFObjInfoNOA__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name length
  {
    size_t item_size = sizeof(ros_message->length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name width
  {
    size_t item_size = sizeof(ros_message->width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hei
  {
    size_t item_size = sizeof(ros_message->hei);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dstlatfrommidoflaneself
  {
    size_t item_size = sizeof(ros_message->dstlatfrommidoflaneself);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name typ
  {
    size_t item_size = sizeof(ros_message->typ);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sidenear
  {
    size_t item_size = sizeof(ros_message->sidenear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name indcrturn
  {
    size_t item_size = sizeof(ros_message->indcrturn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name indcrbrkli
  {
    size_t item_size = sizeof(ros_message->indcrbrkli);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name indcrhzrdli
  {
    size_t item_size = sizeof(ros_message->indcrhzrdli);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mtnpat
  {
    size_t item_size = sizeof(ros_message->mtnpat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mtnpathist
  {
    size_t item_size = sizeof(ros_message->mtnpathist);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fusnsrcraw
  {
    size_t item_size = sizeof(ros_message->fusnsrcraw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name clisnsideradarctrlwarnqly
  {
    size_t item_size = sizeof(ros_message->clisnsideradarctrlwarnqly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name clisnsideradarctrlbrkqly
  {
    size_t item_size = sizeof(ros_message->clisnsideradarctrlbrkqly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->reserved;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lan_assignment
  {
    size_t item_size = sizeof(ros_message->lan_assignment);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SFObjInfoNOA__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_aeb_msgs__msg__SFObjInfoNOA(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t max_serialized_size_deva_aeb_msgs__msg__SFObjInfoNOA(
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

  // member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: width
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hei
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dstlatfrommidoflaneself
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: typ
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sidenear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: indcrturn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: indcrbrkli
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: indcrhzrdli
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mtnpat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mtnpathist
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fusnsrcraw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: clisnsideradarctrlwarnqly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: clisnsideradarctrlbrkqly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserved
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lan_assignment
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
    using DataType = deva_aeb_msgs__msg__SFObjInfoNOA;
    is_plain =
      (
      offsetof(DataType, lan_assignment) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SFObjInfoNOA__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_aeb_msgs__msg__SFObjInfoNOA(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SFObjInfoNOA = {
  "deva_aeb_msgs::msg",
  "SFObjInfoNOA",
  _SFObjInfoNOA__cdr_serialize,
  _SFObjInfoNOA__cdr_deserialize,
  _SFObjInfoNOA__get_serialized_size,
  _SFObjInfoNOA__max_serialized_size
};

static rosidl_message_type_support_t _SFObjInfoNOA__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SFObjInfoNOA,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFObjInfoNOA)() {
  return &_SFObjInfoNOA__type_support;
}

#if defined(__cplusplus)
}
#endif

// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_aeb_msgs:msg/SFLaneTwoSegEstimn.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_lane_two_seg_estimn__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_aeb_msgs/msg/detail/sf_lane_two_seg_estimn__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_lane_two_seg_estimn__functions.h"
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


using _SFLaneTwoSegEstimn__ros_msg_type = deva_aeb_msgs__msg__SFLaneTwoSegEstimn;

static bool _SFLaneTwoSegEstimn__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SFLaneTwoSegEstimn__ros_msg_type * ros_message = static_cast<const _SFLaneTwoSegEstimn__ros_msg_type *>(untyped_ros_message);
  // Field name: constcoeff
  {
    cdr << ros_message->constcoeff;
  }

  // Field name: firstordercoeff
  {
    cdr << ros_message->firstordercoeff;
  }

  // Field name: secondordercoeff
  {
    cdr << ros_message->secondordercoeff;
  }

  // Field name: thirdordercoeff
  {
    cdr << ros_message->thirdordercoeff;
  }

  // Field name: dstlgttoend
  {
    cdr << ros_message->dstlgttoend;
  }

  // Field name: startpointposx
  {
    cdr << ros_message->startpointposx;
  }

  // Field name: width
  {
    cdr << ros_message->width;
  }

  // Field name: parseconfi
  {
    cdr << ros_message->parseconfi;
  }

  // Field name: rmse
  {
    cdr << ros_message->rmse;
  }

  // Field name: obstacleflag
  {
    cdr << ros_message->obstacleflag;
  }

  // Field name: trackstatus
  {
    cdr << ros_message->trackstatus;
  }

  // Field name: poslat
  {
    cdr << ros_message->poslat;
  }

  // Field name: endpointposx
  {
    cdr << ros_message->endpointposx;
  }

  // Field name: endpointposy
  {
    cdr << ros_message->endpointposy;
  }

  // Field name: extendendpointposx
  {
    cdr << ros_message->extendendpointposx;
  }

  // Field name: extendendpointposy
  {
    cdr << ros_message->extendendpointposy;
  }

  // Field name: secondsegpointdistance
  {
    cdr << ros_message->secondsegpointdistance;
  }

  // Field name: secondsegthirdordercoeff
  {
    cdr << ros_message->secondsegthirdordercoeff;
  }

  return true;
}

static bool _SFLaneTwoSegEstimn__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SFLaneTwoSegEstimn__ros_msg_type * ros_message = static_cast<_SFLaneTwoSegEstimn__ros_msg_type *>(untyped_ros_message);
  // Field name: constcoeff
  {
    cdr >> ros_message->constcoeff;
  }

  // Field name: firstordercoeff
  {
    cdr >> ros_message->firstordercoeff;
  }

  // Field name: secondordercoeff
  {
    cdr >> ros_message->secondordercoeff;
  }

  // Field name: thirdordercoeff
  {
    cdr >> ros_message->thirdordercoeff;
  }

  // Field name: dstlgttoend
  {
    cdr >> ros_message->dstlgttoend;
  }

  // Field name: startpointposx
  {
    cdr >> ros_message->startpointposx;
  }

  // Field name: width
  {
    cdr >> ros_message->width;
  }

  // Field name: parseconfi
  {
    cdr >> ros_message->parseconfi;
  }

  // Field name: rmse
  {
    cdr >> ros_message->rmse;
  }

  // Field name: obstacleflag
  {
    cdr >> ros_message->obstacleflag;
  }

  // Field name: trackstatus
  {
    cdr >> ros_message->trackstatus;
  }

  // Field name: poslat
  {
    cdr >> ros_message->poslat;
  }

  // Field name: endpointposx
  {
    cdr >> ros_message->endpointposx;
  }

  // Field name: endpointposy
  {
    cdr >> ros_message->endpointposy;
  }

  // Field name: extendendpointposx
  {
    cdr >> ros_message->extendendpointposx;
  }

  // Field name: extendendpointposy
  {
    cdr >> ros_message->extendendpointposy;
  }

  // Field name: secondsegpointdistance
  {
    cdr >> ros_message->secondsegpointdistance;
  }

  // Field name: secondsegthirdordercoeff
  {
    cdr >> ros_message->secondsegthirdordercoeff;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t get_serialized_size_deva_aeb_msgs__msg__SFLaneTwoSegEstimn(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SFLaneTwoSegEstimn__ros_msg_type * ros_message = static_cast<const _SFLaneTwoSegEstimn__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name constcoeff
  {
    size_t item_size = sizeof(ros_message->constcoeff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name firstordercoeff
  {
    size_t item_size = sizeof(ros_message->firstordercoeff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name secondordercoeff
  {
    size_t item_size = sizeof(ros_message->secondordercoeff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name thirdordercoeff
  {
    size_t item_size = sizeof(ros_message->thirdordercoeff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dstlgttoend
  {
    size_t item_size = sizeof(ros_message->dstlgttoend);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name startpointposx
  {
    size_t item_size = sizeof(ros_message->startpointposx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name width
  {
    size_t item_size = sizeof(ros_message->width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name parseconfi
  {
    size_t item_size = sizeof(ros_message->parseconfi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rmse
  {
    size_t item_size = sizeof(ros_message->rmse);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstacleflag
  {
    size_t item_size = sizeof(ros_message->obstacleflag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trackstatus
  {
    size_t item_size = sizeof(ros_message->trackstatus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name poslat
  {
    size_t item_size = sizeof(ros_message->poslat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name endpointposx
  {
    size_t item_size = sizeof(ros_message->endpointposx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name endpointposy
  {
    size_t item_size = sizeof(ros_message->endpointposy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extendendpointposx
  {
    size_t item_size = sizeof(ros_message->extendendpointposx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extendendpointposy
  {
    size_t item_size = sizeof(ros_message->extendendpointposy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name secondsegpointdistance
  {
    size_t item_size = sizeof(ros_message->secondsegpointdistance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name secondsegthirdordercoeff
  {
    size_t item_size = sizeof(ros_message->secondsegthirdordercoeff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SFLaneTwoSegEstimn__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_aeb_msgs__msg__SFLaneTwoSegEstimn(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t max_serialized_size_deva_aeb_msgs__msg__SFLaneTwoSegEstimn(
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

  // member: constcoeff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: firstordercoeff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: secondordercoeff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: thirdordercoeff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dstlgttoend
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: startpointposx
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
  // member: parseconfi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rmse
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: obstacleflag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trackstatus
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: poslat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: endpointposx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: endpointposy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: extendendpointposx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: extendendpointposy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: secondsegpointdistance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: secondsegthirdordercoeff
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
    using DataType = deva_aeb_msgs__msg__SFLaneTwoSegEstimn;
    is_plain =
      (
      offsetof(DataType, secondsegthirdordercoeff) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SFLaneTwoSegEstimn__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_aeb_msgs__msg__SFLaneTwoSegEstimn(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SFLaneTwoSegEstimn = {
  "deva_aeb_msgs::msg",
  "SFLaneTwoSegEstimn",
  _SFLaneTwoSegEstimn__cdr_serialize,
  _SFLaneTwoSegEstimn__cdr_deserialize,
  _SFLaneTwoSegEstimn__get_serialized_size,
  _SFLaneTwoSegEstimn__max_serialized_size
};

static rosidl_message_type_support_t _SFLaneTwoSegEstimn__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SFLaneTwoSegEstimn,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFLaneTwoSegEstimn)() {
  return &_SFLaneTwoSegEstimn__type_support;
}

#if defined(__cplusplus)
}
#endif

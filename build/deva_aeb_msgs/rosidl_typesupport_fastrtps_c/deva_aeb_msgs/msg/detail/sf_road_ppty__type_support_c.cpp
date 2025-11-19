// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_aeb_msgs:msg/SFRoadPpty.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_road_ppty__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_aeb_msgs/msg/detail/sf_road_ppty__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_road_ppty__functions.h"
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


using _SFRoadPpty__ros_msg_type = deva_aeb_msgs__msg__SFRoadPpty;

static bool _SFRoadPpty__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SFRoadPpty__ros_msg_type * ros_message = static_cast<const _SFRoadPpty__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: framenum
  {
    cdr << ros_message->framenum;
  }

  // Field name: lanewidth
  {
    cdr << ros_message->lanewidth;
  }

  // Field name: offslat
  {
    cdr << ros_message->offslat;
  }

  // Field name: agdir
  {
    cdr << ros_message->agdir;
  }

  // Field name: crvt
  {
    cdr << ros_message->crvt;
  }

  // Field name: crvtrate
  {
    size_t size = 3;
    auto array_ptr = ros_message->crvtrate;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: crvtratevalidsize
  {
    cdr << ros_message->crvtratevalidsize;
  }

  // Field name: seglen
  {
    size_t size = 3;
    auto array_ptr = ros_message->seglen;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: seglenvalidsize
  {
    cdr << ros_message->seglenvalidsize;
  }

  // Field name: strtd
  {
    cdr << ros_message->strtd;
  }

  // Field name: vld
  {
    cdr << ros_message->vld;
  }

  // Field name: reserved
  {
    size_t size = 2;
    auto array_ptr = ros_message->reserved;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: titohiqly
  {
    size_t size = 32;
    auto array_ptr = ros_message->titohiqly;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: titohiqlyvalidsize
  {
    cdr << ros_message->titohiqlyvalidsize;
  }

  // Field name: objidtitohiqly
  {
    size_t size = 32;
    auto array_ptr = ros_message->objidtitohiqly;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: objidtitohiqlyvalidsize
  {
    cdr << ros_message->objidtitohiqlyvalidsize;
  }

  // Field name: distancewithlowconfidence
  {
    cdr << ros_message->distancewithlowconfidence;
  }

  // Field name: distancewithhiahconfidence
  {
    cdr << ros_message->distancewithhiahconfidence;
  }

  return true;
}

static bool _SFRoadPpty__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SFRoadPpty__ros_msg_type * ros_message = static_cast<_SFRoadPpty__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: framenum
  {
    cdr >> ros_message->framenum;
  }

  // Field name: lanewidth
  {
    cdr >> ros_message->lanewidth;
  }

  // Field name: offslat
  {
    cdr >> ros_message->offslat;
  }

  // Field name: agdir
  {
    cdr >> ros_message->agdir;
  }

  // Field name: crvt
  {
    cdr >> ros_message->crvt;
  }

  // Field name: crvtrate
  {
    size_t size = 3;
    auto array_ptr = ros_message->crvtrate;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: crvtratevalidsize
  {
    cdr >> ros_message->crvtratevalidsize;
  }

  // Field name: seglen
  {
    size_t size = 3;
    auto array_ptr = ros_message->seglen;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: seglenvalidsize
  {
    cdr >> ros_message->seglenvalidsize;
  }

  // Field name: strtd
  {
    cdr >> ros_message->strtd;
  }

  // Field name: vld
  {
    cdr >> ros_message->vld;
  }

  // Field name: reserved
  {
    size_t size = 2;
    auto array_ptr = ros_message->reserved;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: titohiqly
  {
    size_t size = 32;
    auto array_ptr = ros_message->titohiqly;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: titohiqlyvalidsize
  {
    cdr >> ros_message->titohiqlyvalidsize;
  }

  // Field name: objidtitohiqly
  {
    size_t size = 32;
    auto array_ptr = ros_message->objidtitohiqly;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: objidtitohiqlyvalidsize
  {
    cdr >> ros_message->objidtitohiqlyvalidsize;
  }

  // Field name: distancewithlowconfidence
  {
    cdr >> ros_message->distancewithlowconfidence;
  }

  // Field name: distancewithhiahconfidence
  {
    cdr >> ros_message->distancewithhiahconfidence;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t get_serialized_size_deva_aeb_msgs__msg__SFRoadPpty(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SFRoadPpty__ros_msg_type * ros_message = static_cast<const _SFRoadPpty__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name framenum
  {
    size_t item_size = sizeof(ros_message->framenum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lanewidth
  {
    size_t item_size = sizeof(ros_message->lanewidth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offslat
  {
    size_t item_size = sizeof(ros_message->offslat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name agdir
  {
    size_t item_size = sizeof(ros_message->agdir);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name crvt
  {
    size_t item_size = sizeof(ros_message->crvt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name crvtrate
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->crvtrate;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name crvtratevalidsize
  {
    size_t item_size = sizeof(ros_message->crvtratevalidsize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seglen
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->seglen;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seglenvalidsize
  {
    size_t item_size = sizeof(ros_message->seglenvalidsize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name strtd
  {
    size_t item_size = sizeof(ros_message->strtd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vld
  {
    size_t item_size = sizeof(ros_message->vld);
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
  // field.name titohiqly
  {
    size_t array_size = 32;
    auto array_ptr = ros_message->titohiqly;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name titohiqlyvalidsize
  {
    size_t item_size = sizeof(ros_message->titohiqlyvalidsize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name objidtitohiqly
  {
    size_t array_size = 32;
    auto array_ptr = ros_message->objidtitohiqly;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name objidtitohiqlyvalidsize
  {
    size_t item_size = sizeof(ros_message->objidtitohiqlyvalidsize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distancewithlowconfidence
  {
    size_t item_size = sizeof(ros_message->distancewithlowconfidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distancewithhiahconfidence
  {
    size_t item_size = sizeof(ros_message->distancewithhiahconfidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SFRoadPpty__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_aeb_msgs__msg__SFRoadPpty(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t max_serialized_size_deva_aeb_msgs__msg__SFRoadPpty(
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

  // member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: framenum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lanewidth
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: offslat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: agdir
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: crvt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: crvtrate
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: crvtratevalidsize
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: seglen
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: seglenvalidsize
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: strtd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vld
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
  // member: titohiqly
  {
    size_t array_size = 32;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: titohiqlyvalidsize
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: objidtitohiqly
  {
    size_t array_size = 32;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: objidtitohiqlyvalidsize
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: distancewithlowconfidence
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: distancewithhiahconfidence
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
    using DataType = deva_aeb_msgs__msg__SFRoadPpty;
    is_plain =
      (
      offsetof(DataType, distancewithhiahconfidence) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SFRoadPpty__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_aeb_msgs__msg__SFRoadPpty(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SFRoadPpty = {
  "deva_aeb_msgs::msg",
  "SFRoadPpty",
  _SFRoadPpty__cdr_serialize,
  _SFRoadPpty__cdr_deserialize,
  _SFRoadPpty__get_serialized_size,
  _SFRoadPpty__max_serialized_size
};

static rosidl_message_type_support_t _SFRoadPpty__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SFRoadPpty,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFRoadPpty)() {
  return &_SFRoadPpty__type_support;
}

#if defined(__cplusplus)
}
#endif

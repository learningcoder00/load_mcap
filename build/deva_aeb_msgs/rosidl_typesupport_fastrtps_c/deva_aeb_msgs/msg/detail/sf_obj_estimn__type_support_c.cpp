// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_aeb_msgs:msg/SFObjEstimn.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_obj_estimn__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_aeb_msgs/msg/detail/sf_obj_estimn__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_obj_estimn__functions.h"
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


using _SFObjEstimn__ros_msg_type = deva_aeb_msgs__msg__SFObjEstimn;

static bool _SFObjEstimn__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SFObjEstimn__ros_msg_type * ros_message = static_cast<const _SFObjEstimn__ros_msg_type *>(untyped_ros_message);
  // Field name: posnlgt
  {
    cdr << ros_message->posnlgt;
  }

  // Field name: posnlat
  {
    cdr << ros_message->posnlat;
  }

  // Field name: spd
  {
    cdr << ros_message->spd;
  }

  // Field name: vlgt
  {
    cdr << ros_message->vlgt;
  }

  // Field name: vlat
  {
    cdr << ros_message->vlat;
  }

  // Field name: a
  {
    cdr << ros_message->a;
  }

  // Field name: algt
  {
    cdr << ros_message->algt;
  }

  // Field name: alat
  {
    cdr << ros_message->alat;
  }

  // Field name: agdir
  {
    cdr << ros_message->agdir;
  }

  // Field name: crvt
  {
    cdr << ros_message->crvt;
  }

  return true;
}

static bool _SFObjEstimn__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SFObjEstimn__ros_msg_type * ros_message = static_cast<_SFObjEstimn__ros_msg_type *>(untyped_ros_message);
  // Field name: posnlgt
  {
    cdr >> ros_message->posnlgt;
  }

  // Field name: posnlat
  {
    cdr >> ros_message->posnlat;
  }

  // Field name: spd
  {
    cdr >> ros_message->spd;
  }

  // Field name: vlgt
  {
    cdr >> ros_message->vlgt;
  }

  // Field name: vlat
  {
    cdr >> ros_message->vlat;
  }

  // Field name: a
  {
    cdr >> ros_message->a;
  }

  // Field name: algt
  {
    cdr >> ros_message->algt;
  }

  // Field name: alat
  {
    cdr >> ros_message->alat;
  }

  // Field name: agdir
  {
    cdr >> ros_message->agdir;
  }

  // Field name: crvt
  {
    cdr >> ros_message->crvt;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t get_serialized_size_deva_aeb_msgs__msg__SFObjEstimn(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SFObjEstimn__ros_msg_type * ros_message = static_cast<const _SFObjEstimn__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name posnlgt
  {
    size_t item_size = sizeof(ros_message->posnlgt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name posnlat
  {
    size_t item_size = sizeof(ros_message->posnlat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name spd
  {
    size_t item_size = sizeof(ros_message->spd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vlgt
  {
    size_t item_size = sizeof(ros_message->vlgt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vlat
  {
    size_t item_size = sizeof(ros_message->vlat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a
  {
    size_t item_size = sizeof(ros_message->a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name algt
  {
    size_t item_size = sizeof(ros_message->algt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alat
  {
    size_t item_size = sizeof(ros_message->alat);
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

  return current_alignment - initial_alignment;
}

static uint32_t _SFObjEstimn__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_aeb_msgs__msg__SFObjEstimn(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t max_serialized_size_deva_aeb_msgs__msg__SFObjEstimn(
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

  // member: posnlgt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: posnlat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: spd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vlgt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vlat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: a
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
  // member: alat
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_aeb_msgs__msg__SFObjEstimn;
    is_plain =
      (
      offsetof(DataType, crvt) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SFObjEstimn__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_aeb_msgs__msg__SFObjEstimn(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SFObjEstimn = {
  "deva_aeb_msgs::msg",
  "SFObjEstimn",
  _SFObjEstimn__cdr_serialize,
  _SFObjEstimn__cdr_deserialize,
  _SFObjEstimn__get_serialized_size,
  _SFObjEstimn__max_serialized_size
};

static rosidl_message_type_support_t _SFObjEstimn__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SFObjEstimn,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFObjEstimn)() {
  return &_SFObjEstimn__type_support;
}

#if defined(__cplusplus)
}
#endif

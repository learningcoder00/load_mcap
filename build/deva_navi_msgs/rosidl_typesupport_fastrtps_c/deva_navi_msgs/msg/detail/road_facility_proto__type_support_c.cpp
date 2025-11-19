// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_navi_msgs:msg/RoadFacilityProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/road_facility_proto__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_navi_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_navi_msgs/msg/detail/road_facility_proto__struct.h"
#include "deva_navi_msgs/msg/detail/road_facility_proto__functions.h"
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

#include "deva_navi_msgs/msg/detail/group_time_range_proto__functions.h"  // time_range
#include "rosidl_runtime_c/primitives_sequence.h"  // speed_limit
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // speed_limit

// forward declare type support functions
size_t get_serialized_size_deva_navi_msgs__msg__GroupTimeRangeProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__GroupTimeRangeProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, GroupTimeRangeProto)();


using _RoadFacilityProto__ros_msg_type = deva_navi_msgs__msg__RoadFacilityProto;

static bool _RoadFacilityProto__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RoadFacilityProto__ros_msg_type * ros_message = static_cast<const _RoadFacilityProto__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: lon
  {
    cdr << ros_message->lon;
  }

  // Field name: lat
  {
    cdr << ros_message->lat;
  }

  // Field name: speed_limit
  {
    size_t size = ros_message->speed_limit.size;
    auto array_ptr = ros_message->speed_limit.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: dist_to_end
  {
    cdr << ros_message->dist_to_end;
  }

  // Field name: valid_lane
  {
    cdr << ros_message->valid_lane;
  }

  // Field name: lane_num
  {
    cdr << ros_message->lane_num;
  }

  // Field name: time_range
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, GroupTimeRangeProto
      )()->data);
    size_t size = ros_message->time_range.size;
    auto array_ptr = ros_message->time_range.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _RoadFacilityProto__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RoadFacilityProto__ros_msg_type * ros_message = static_cast<_RoadFacilityProto__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: lon
  {
    cdr >> ros_message->lon;
  }

  // Field name: lat
  {
    cdr >> ros_message->lat;
  }

  // Field name: speed_limit
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->speed_limit.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->speed_limit);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->speed_limit, size)) {
      fprintf(stderr, "failed to create array for field 'speed_limit'");
      return false;
    }
    auto array_ptr = ros_message->speed_limit.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: dist_to_end
  {
    cdr >> ros_message->dist_to_end;
  }

  // Field name: valid_lane
  {
    cdr >> ros_message->valid_lane;
  }

  // Field name: lane_num
  {
    cdr >> ros_message->lane_num;
  }

  // Field name: time_range
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, GroupTimeRangeProto
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->time_range.data) {
      deva_navi_msgs__msg__GroupTimeRangeProto__Sequence__fini(&ros_message->time_range);
    }
    if (!deva_navi_msgs__msg__GroupTimeRangeProto__Sequence__init(&ros_message->time_range, size)) {
      fprintf(stderr, "failed to create array for field 'time_range'");
      return false;
    }
    auto array_ptr = ros_message->time_range.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_navi_msgs
size_t get_serialized_size_deva_navi_msgs__msg__RoadFacilityProto(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RoadFacilityProto__ros_msg_type * ros_message = static_cast<const _RoadFacilityProto__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lon
  {
    size_t item_size = sizeof(ros_message->lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat
  {
    size_t item_size = sizeof(ros_message->lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_limit
  {
    size_t array_size = ros_message->speed_limit.size;
    auto array_ptr = ros_message->speed_limit.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dist_to_end
  {
    size_t item_size = sizeof(ros_message->dist_to_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name valid_lane
  {
    size_t item_size = sizeof(ros_message->valid_lane);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_num
  {
    size_t item_size = sizeof(ros_message->lane_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_range
  {
    size_t array_size = ros_message->time_range.size;
    auto array_ptr = ros_message->time_range.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_navi_msgs__msg__GroupTimeRangeProto(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RoadFacilityProto__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_navi_msgs__msg__RoadFacilityProto(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_navi_msgs
size_t max_serialized_size_deva_navi_msgs__msg__RoadFacilityProto(
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

  // member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lon
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_limit
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dist_to_end
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: valid_lane
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
  // member: time_range
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_navi_msgs__msg__GroupTimeRangeProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_navi_msgs__msg__RoadFacilityProto;
    is_plain =
      (
      offsetof(DataType, time_range) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RoadFacilityProto__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_navi_msgs__msg__RoadFacilityProto(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RoadFacilityProto = {
  "deva_navi_msgs::msg",
  "RoadFacilityProto",
  _RoadFacilityProto__cdr_serialize,
  _RoadFacilityProto__cdr_deserialize,
  _RoadFacilityProto__get_serialized_size,
  _RoadFacilityProto__max_serialized_size
};

static rosidl_message_type_support_t _RoadFacilityProto__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RoadFacilityProto,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, RoadFacilityProto)() {
  return &_RoadFacilityProto__type_support;
}

#if defined(__cplusplus)
}
#endif

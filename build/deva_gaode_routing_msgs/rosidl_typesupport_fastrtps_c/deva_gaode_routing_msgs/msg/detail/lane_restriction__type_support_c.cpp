// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_gaode_routing_msgs:msg/LaneRestriction.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/lane_restriction__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_gaode_routing_msgs/msg/detail/lane_restriction__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/lane_restriction__functions.h"
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

#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__functions.h"  // id
#include "rosidl_runtime_c/primitives_sequence.h"  // limit_vehicle_type, special_time_type
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // limit_vehicle_type, special_time_type
#include "rosidl_runtime_c/string.h"  // restrict_time_period
#include "rosidl_runtime_c/string_functions.h"  // restrict_time_period

// forward declare type support functions
size_t get_serialized_size_deva_gaode_routing_msgs__msg__FeatureIDType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__FeatureIDType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, FeatureIDType)();


using _LaneRestriction__ros_msg_type = deva_gaode_routing_msgs__msg__LaneRestriction;

static bool _LaneRestriction__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LaneRestriction__ros_msg_type * ros_message = static_cast<const _LaneRestriction__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, FeatureIDType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->id, cdr))
    {
      return false;
    }
  }

  // Field name: limit_vehicle_type
  {
    size_t size = ros_message->limit_vehicle_type.size;
    auto array_ptr = ros_message->limit_vehicle_type.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: special_time_type
  {
    size_t size = ros_message->special_time_type.size;
    auto array_ptr = ros_message->special_time_type.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: restrict_time_period
  {
    const rosidl_runtime_c__String * str = &ros_message->restrict_time_period;
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

  // Field name: lane_direction
  {
    cdr << ros_message->lane_direction;
  }

  // Field name: lane_retriction_type
  {
    cdr << ros_message->lane_retriction_type;
  }

  // Field name: lane_range_start
  {
    cdr << ros_message->lane_range_start;
  }

  // Field name: lane_range_end
  {
    cdr << ros_message->lane_range_end;
  }

  return true;
}

static bool _LaneRestriction__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LaneRestriction__ros_msg_type * ros_message = static_cast<_LaneRestriction__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, FeatureIDType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->id))
    {
      return false;
    }
  }

  // Field name: limit_vehicle_type
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

    if (ros_message->limit_vehicle_type.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->limit_vehicle_type);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->limit_vehicle_type, size)) {
      fprintf(stderr, "failed to create array for field 'limit_vehicle_type'");
      return false;
    }
    auto array_ptr = ros_message->limit_vehicle_type.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: special_time_type
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

    if (ros_message->special_time_type.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->special_time_type);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->special_time_type, size)) {
      fprintf(stderr, "failed to create array for field 'special_time_type'");
      return false;
    }
    auto array_ptr = ros_message->special_time_type.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: restrict_time_period
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->restrict_time_period.data) {
      rosidl_runtime_c__String__init(&ros_message->restrict_time_period);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->restrict_time_period,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'restrict_time_period'\n");
      return false;
    }
  }

  // Field name: lane_direction
  {
    cdr >> ros_message->lane_direction;
  }

  // Field name: lane_retriction_type
  {
    cdr >> ros_message->lane_retriction_type;
  }

  // Field name: lane_range_start
  {
    cdr >> ros_message->lane_range_start;
  }

  // Field name: lane_range_end
  {
    cdr >> ros_message->lane_range_end;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t get_serialized_size_deva_gaode_routing_msgs__msg__LaneRestriction(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LaneRestriction__ros_msg_type * ros_message = static_cast<const _LaneRestriction__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id

  current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__FeatureIDType(
    &(ros_message->id), current_alignment);
  // field.name limit_vehicle_type
  {
    size_t array_size = ros_message->limit_vehicle_type.size;
    auto array_ptr = ros_message->limit_vehicle_type.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name special_time_type
  {
    size_t array_size = ros_message->special_time_type.size;
    auto array_ptr = ros_message->special_time_type.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name restrict_time_period
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->restrict_time_period.size + 1);
  // field.name lane_direction
  {
    size_t item_size = sizeof(ros_message->lane_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_retriction_type
  {
    size_t item_size = sizeof(ros_message->lane_retriction_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_range_start
  {
    size_t item_size = sizeof(ros_message->lane_range_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_range_end
  {
    size_t item_size = sizeof(ros_message->lane_range_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LaneRestriction__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_gaode_routing_msgs__msg__LaneRestriction(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t max_serialized_size_deva_gaode_routing_msgs__msg__LaneRestriction(
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


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__FeatureIDType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: limit_vehicle_type
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: special_time_type
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: restrict_time_period
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
  // member: lane_direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_retriction_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_range_start
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: lane_range_end
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_gaode_routing_msgs__msg__LaneRestriction;
    is_plain =
      (
      offsetof(DataType, lane_range_end) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _LaneRestriction__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_gaode_routing_msgs__msg__LaneRestriction(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LaneRestriction = {
  "deva_gaode_routing_msgs::msg",
  "LaneRestriction",
  _LaneRestriction__cdr_serialize,
  _LaneRestriction__cdr_deserialize,
  _LaneRestriction__get_serialized_size,
  _LaneRestriction__max_serialized_size
};

static rosidl_message_type_support_t _LaneRestriction__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LaneRestriction,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, LaneRestriction)() {
  return &_LaneRestriction__type_support;
}

#if defined(__cplusplus)
}
#endif

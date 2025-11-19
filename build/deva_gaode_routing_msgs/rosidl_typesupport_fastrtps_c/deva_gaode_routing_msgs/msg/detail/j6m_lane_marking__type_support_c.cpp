// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_gaode_routing_msgs:msg/J6mLaneMarking.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane_marking__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane_marking__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane_marking__functions.h"
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

#include "deva_gaode_routing_msgs/msg/detail/coordinate__functions.h"  // lane_marking_coordinates
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__functions.h"  // lane_marking_id

// forward declare type support functions
size_t get_serialized_size_deva_gaode_routing_msgs__msg__Coordinate(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__Coordinate(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, Coordinate)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__LinkIDType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__LinkIDType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, LinkIDType)();


using _J6mLaneMarking__ros_msg_type = deva_gaode_routing_msgs__msg__J6mLaneMarking;

static bool _J6mLaneMarking__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _J6mLaneMarking__ros_msg_type * ros_message = static_cast<const _J6mLaneMarking__ros_msg_type *>(untyped_ros_message);
  // Field name: lane_marking_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, LinkIDType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lane_marking_id, cdr))
    {
      return false;
    }
  }

  // Field name: lane_marking_type
  {
    cdr << ros_message->lane_marking_type;
  }

  // Field name: lane_marking_length
  {
    cdr << ros_message->lane_marking_length;
  }

  // Field name: lane_marking_order_number
  {
    cdr << ros_message->lane_marking_order_number;
  }

  // Field name: lane_marking_offset
  {
    cdr << ros_message->lane_marking_offset;
  }

  // Field name: lane_marking_color
  {
    cdr << ros_message->lane_marking_color;
  }

  // Field name: lane_marking_confidence
  {
    cdr << ros_message->lane_marking_confidence;
  }

  // Field name: lane_marking_coordinates
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, Coordinate
      )()->data);
    size_t size = ros_message->lane_marking_coordinates.size;
    auto array_ptr = ros_message->lane_marking_coordinates.data;
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

static bool _J6mLaneMarking__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _J6mLaneMarking__ros_msg_type * ros_message = static_cast<_J6mLaneMarking__ros_msg_type *>(untyped_ros_message);
  // Field name: lane_marking_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, LinkIDType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lane_marking_id))
    {
      return false;
    }
  }

  // Field name: lane_marking_type
  {
    cdr >> ros_message->lane_marking_type;
  }

  // Field name: lane_marking_length
  {
    cdr >> ros_message->lane_marking_length;
  }

  // Field name: lane_marking_order_number
  {
    cdr >> ros_message->lane_marking_order_number;
  }

  // Field name: lane_marking_offset
  {
    cdr >> ros_message->lane_marking_offset;
  }

  // Field name: lane_marking_color
  {
    cdr >> ros_message->lane_marking_color;
  }

  // Field name: lane_marking_confidence
  {
    cdr >> ros_message->lane_marking_confidence;
  }

  // Field name: lane_marking_coordinates
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, Coordinate
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

    if (ros_message->lane_marking_coordinates.data) {
      deva_gaode_routing_msgs__msg__Coordinate__Sequence__fini(&ros_message->lane_marking_coordinates);
    }
    if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__init(&ros_message->lane_marking_coordinates, size)) {
      fprintf(stderr, "failed to create array for field 'lane_marking_coordinates'");
      return false;
    }
    auto array_ptr = ros_message->lane_marking_coordinates.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t get_serialized_size_deva_gaode_routing_msgs__msg__J6mLaneMarking(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _J6mLaneMarking__ros_msg_type * ros_message = static_cast<const _J6mLaneMarking__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lane_marking_id

  current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__LinkIDType(
    &(ros_message->lane_marking_id), current_alignment);
  // field.name lane_marking_type
  {
    size_t item_size = sizeof(ros_message->lane_marking_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_marking_length
  {
    size_t item_size = sizeof(ros_message->lane_marking_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_marking_order_number
  {
    size_t item_size = sizeof(ros_message->lane_marking_order_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_marking_offset
  {
    size_t item_size = sizeof(ros_message->lane_marking_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_marking_color
  {
    size_t item_size = sizeof(ros_message->lane_marking_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_marking_confidence
  {
    size_t item_size = sizeof(ros_message->lane_marking_confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_marking_coordinates
  {
    size_t array_size = ros_message->lane_marking_coordinates.size;
    auto array_ptr = ros_message->lane_marking_coordinates.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__Coordinate(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _J6mLaneMarking__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_gaode_routing_msgs__msg__J6mLaneMarking(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t max_serialized_size_deva_gaode_routing_msgs__msg__J6mLaneMarking(
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

  // member: lane_marking_id
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__LinkIDType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: lane_marking_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_marking_length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lane_marking_order_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_marking_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lane_marking_color
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_marking_confidence
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lane_marking_coordinates
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
        max_serialized_size_deva_gaode_routing_msgs__msg__Coordinate(
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
    using DataType = deva_gaode_routing_msgs__msg__J6mLaneMarking;
    is_plain =
      (
      offsetof(DataType, lane_marking_coordinates) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _J6mLaneMarking__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_gaode_routing_msgs__msg__J6mLaneMarking(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_J6mLaneMarking = {
  "deva_gaode_routing_msgs::msg",
  "J6mLaneMarking",
  _J6mLaneMarking__cdr_serialize,
  _J6mLaneMarking__cdr_deserialize,
  _J6mLaneMarking__get_serialized_size,
  _J6mLaneMarking__max_serialized_size
};

static rosidl_message_type_support_t _J6mLaneMarking__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_J6mLaneMarking,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, J6mLaneMarking)() {
  return &_J6mLaneMarking__type_support;
}

#if defined(__cplusplus)
}
#endif

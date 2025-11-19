// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_gaode_routing_msgs:msg/J6mData.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/j6m_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_gaode_routing_msgs/msg/detail/j6m_data__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/j6m_data__functions.h"
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

#include "deva_gaode_routing_msgs/msg/detail/j6m_intersection__functions.h"  // j6m_intersections
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane__functions.h"  // j6m_lanes
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane_marking__functions.h"  // j6m_lane_markings
#include "deva_gaode_routing_msgs/msg/detail/j6m_link__functions.h"  // j6m_links
#include "deva_gaode_routing_msgs/msg/detail/j6m_road_object__functions.h"  // j6m_road_objects

// forward declare type support functions
size_t get_serialized_size_deva_gaode_routing_msgs__msg__J6mIntersection(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__J6mIntersection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, J6mIntersection)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__J6mLane(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__J6mLane(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, J6mLane)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__J6mLaneMarking(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__J6mLaneMarking(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, J6mLaneMarking)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__J6mLink(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__J6mLink(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, J6mLink)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__J6mRoadObject(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__J6mRoadObject(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, J6mRoadObject)();


using _J6mData__ros_msg_type = deva_gaode_routing_msgs__msg__J6mData;

static bool _J6mData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _J6mData__ros_msg_type * ros_message = static_cast<const _J6mData__ros_msg_type *>(untyped_ros_message);
  // Field name: j6m_links
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, J6mLink
      )()->data);
    size_t size = ros_message->j6m_links.size;
    auto array_ptr = ros_message->j6m_links.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: j6m_intersections
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, J6mIntersection
      )()->data);
    size_t size = ros_message->j6m_intersections.size;
    auto array_ptr = ros_message->j6m_intersections.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: j6m_lanes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, J6mLane
      )()->data);
    size_t size = ros_message->j6m_lanes.size;
    auto array_ptr = ros_message->j6m_lanes.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: j6m_lane_markings
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, J6mLaneMarking
      )()->data);
    size_t size = ros_message->j6m_lane_markings.size;
    auto array_ptr = ros_message->j6m_lane_markings.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: j6m_road_objects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, J6mRoadObject
      )()->data);
    size_t size = ros_message->j6m_road_objects.size;
    auto array_ptr = ros_message->j6m_road_objects.data;
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

static bool _J6mData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _J6mData__ros_msg_type * ros_message = static_cast<_J6mData__ros_msg_type *>(untyped_ros_message);
  // Field name: j6m_links
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, J6mLink
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

    if (ros_message->j6m_links.data) {
      deva_gaode_routing_msgs__msg__J6mLink__Sequence__fini(&ros_message->j6m_links);
    }
    if (!deva_gaode_routing_msgs__msg__J6mLink__Sequence__init(&ros_message->j6m_links, size)) {
      fprintf(stderr, "failed to create array for field 'j6m_links'");
      return false;
    }
    auto array_ptr = ros_message->j6m_links.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: j6m_intersections
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, J6mIntersection
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

    if (ros_message->j6m_intersections.data) {
      deva_gaode_routing_msgs__msg__J6mIntersection__Sequence__fini(&ros_message->j6m_intersections);
    }
    if (!deva_gaode_routing_msgs__msg__J6mIntersection__Sequence__init(&ros_message->j6m_intersections, size)) {
      fprintf(stderr, "failed to create array for field 'j6m_intersections'");
      return false;
    }
    auto array_ptr = ros_message->j6m_intersections.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: j6m_lanes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, J6mLane
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

    if (ros_message->j6m_lanes.data) {
      deva_gaode_routing_msgs__msg__J6mLane__Sequence__fini(&ros_message->j6m_lanes);
    }
    if (!deva_gaode_routing_msgs__msg__J6mLane__Sequence__init(&ros_message->j6m_lanes, size)) {
      fprintf(stderr, "failed to create array for field 'j6m_lanes'");
      return false;
    }
    auto array_ptr = ros_message->j6m_lanes.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: j6m_lane_markings
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, J6mLaneMarking
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

    if (ros_message->j6m_lane_markings.data) {
      deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence__fini(&ros_message->j6m_lane_markings);
    }
    if (!deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence__init(&ros_message->j6m_lane_markings, size)) {
      fprintf(stderr, "failed to create array for field 'j6m_lane_markings'");
      return false;
    }
    auto array_ptr = ros_message->j6m_lane_markings.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: j6m_road_objects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, J6mRoadObject
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

    if (ros_message->j6m_road_objects.data) {
      deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence__fini(&ros_message->j6m_road_objects);
    }
    if (!deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence__init(&ros_message->j6m_road_objects, size)) {
      fprintf(stderr, "failed to create array for field 'j6m_road_objects'");
      return false;
    }
    auto array_ptr = ros_message->j6m_road_objects.data;
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
size_t get_serialized_size_deva_gaode_routing_msgs__msg__J6mData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _J6mData__ros_msg_type * ros_message = static_cast<const _J6mData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name j6m_links
  {
    size_t array_size = ros_message->j6m_links.size;
    auto array_ptr = ros_message->j6m_links.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__J6mLink(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name j6m_intersections
  {
    size_t array_size = ros_message->j6m_intersections.size;
    auto array_ptr = ros_message->j6m_intersections.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__J6mIntersection(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name j6m_lanes
  {
    size_t array_size = ros_message->j6m_lanes.size;
    auto array_ptr = ros_message->j6m_lanes.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__J6mLane(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name j6m_lane_markings
  {
    size_t array_size = ros_message->j6m_lane_markings.size;
    auto array_ptr = ros_message->j6m_lane_markings.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__J6mLaneMarking(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name j6m_road_objects
  {
    size_t array_size = ros_message->j6m_road_objects.size;
    auto array_ptr = ros_message->j6m_road_objects.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__J6mRoadObject(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _J6mData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_gaode_routing_msgs__msg__J6mData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t max_serialized_size_deva_gaode_routing_msgs__msg__J6mData(
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

  // member: j6m_links
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
        max_serialized_size_deva_gaode_routing_msgs__msg__J6mLink(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: j6m_intersections
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
        max_serialized_size_deva_gaode_routing_msgs__msg__J6mIntersection(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: j6m_lanes
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
        max_serialized_size_deva_gaode_routing_msgs__msg__J6mLane(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: j6m_lane_markings
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
        max_serialized_size_deva_gaode_routing_msgs__msg__J6mLaneMarking(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: j6m_road_objects
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
        max_serialized_size_deva_gaode_routing_msgs__msg__J6mRoadObject(
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
    using DataType = deva_gaode_routing_msgs__msg__J6mData;
    is_plain =
      (
      offsetof(DataType, j6m_road_objects) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _J6mData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_gaode_routing_msgs__msg__J6mData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_J6mData = {
  "deva_gaode_routing_msgs::msg",
  "J6mData",
  _J6mData__cdr_serialize,
  _J6mData__cdr_deserialize,
  _J6mData__get_serialized_size,
  _J6mData__max_serialized_size
};

static rosidl_message_type_support_t _J6mData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_J6mData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, J6mData)() {
  return &_J6mData__type_support;
}

#if defined(__cplusplus)
}
#endif

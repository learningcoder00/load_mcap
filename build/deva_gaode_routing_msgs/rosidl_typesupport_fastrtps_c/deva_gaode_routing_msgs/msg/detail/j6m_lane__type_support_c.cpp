// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_gaode_routing_msgs:msg/J6mLane.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane__functions.h"
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

#include "deva_gaode_routing_msgs/msg/detail/coordinate__functions.h"  // lane_coordinates
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__functions.h"  // lane_id, lane_predecessor_lane_ids, lane_referenced_roadobject_ids, lane_successor_lane_ids, left_lane_marking_ids, right_lane_marking_ids
#include "rosidl_runtime_c/string.h"  // lane_adas, lane_speed_limit
#include "rosidl_runtime_c/string_functions.h"  // lane_adas, lane_speed_limit

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


using _J6mLane__ros_msg_type = deva_gaode_routing_msgs__msg__J6mLane;

static bool _J6mLane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _J6mLane__ros_msg_type * ros_message = static_cast<const _J6mLane__ros_msg_type *>(untyped_ros_message);
  // Field name: lane_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, LinkIDType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lane_id, cdr))
    {
      return false;
    }
  }

  // Field name: lane_seq_num
  {
    cdr << ros_message->lane_seq_num;
  }

  // Field name: lane_type
  {
    cdr << ros_message->lane_type;
  }

  // Field name: lane_speed_limit
  {
    const rosidl_runtime_c__String * str = &ros_message->lane_speed_limit;
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

  // Field name: lane_max_width
  {
    cdr << ros_message->lane_max_width;
  }

  // Field name: lane_min_width
  {
    cdr << ros_message->lane_min_width;
  }

  // Field name: left_lane_marking_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, LinkIDType
      )()->data);
    size_t size = ros_message->left_lane_marking_ids.size;
    auto array_ptr = ros_message->left_lane_marking_ids.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: right_lane_marking_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, LinkIDType
      )()->data);
    size_t size = ros_message->right_lane_marking_ids.size;
    auto array_ptr = ros_message->right_lane_marking_ids.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: lane_adas
  {
    const rosidl_runtime_c__String * str = &ros_message->lane_adas;
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

  // Field name: lane_length
  {
    cdr << ros_message->lane_length;
  }

  // Field name: lane_turn_direction
  {
    cdr << ros_message->lane_turn_direction;
  }

  // Field name: lane_confidence
  {
    cdr << ros_message->lane_confidence;
  }

  // Field name: lane_travel_direction
  {
    cdr << ros_message->lane_travel_direction;
  }

  // Field name: lane_empir_speed
  {
    cdr << ros_message->lane_empir_speed;
  }

  // Field name: lane_empir_traj_count
  {
    cdr << ros_message->lane_empir_traj_count;
  }

  // Field name: lane_host_link_id
  {
    cdr << ros_message->lane_host_link_id;
  }

  // Field name: lane_host_link_type
  {
    cdr << ros_message->lane_host_link_type;
  }

  // Field name: lane_successor_lane_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, LinkIDType
      )()->data);
    size_t size = ros_message->lane_successor_lane_ids.size;
    auto array_ptr = ros_message->lane_successor_lane_ids.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: lane_predecessor_lane_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, LinkIDType
      )()->data);
    size_t size = ros_message->lane_predecessor_lane_ids.size;
    auto array_ptr = ros_message->lane_predecessor_lane_ids.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: lane_referenced_roadobject_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, LinkIDType
      )()->data);
    size_t size = ros_message->lane_referenced_roadobject_ids.size;
    auto array_ptr = ros_message->lane_referenced_roadobject_ids.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: lane_coordinates
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, Coordinate
      )()->data);
    size_t size = ros_message->lane_coordinates.size;
    auto array_ptr = ros_message->lane_coordinates.data;
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

static bool _J6mLane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _J6mLane__ros_msg_type * ros_message = static_cast<_J6mLane__ros_msg_type *>(untyped_ros_message);
  // Field name: lane_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, LinkIDType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lane_id))
    {
      return false;
    }
  }

  // Field name: lane_seq_num
  {
    cdr >> ros_message->lane_seq_num;
  }

  // Field name: lane_type
  {
    cdr >> ros_message->lane_type;
  }

  // Field name: lane_speed_limit
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->lane_speed_limit.data) {
      rosidl_runtime_c__String__init(&ros_message->lane_speed_limit);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->lane_speed_limit,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'lane_speed_limit'\n");
      return false;
    }
  }

  // Field name: lane_max_width
  {
    cdr >> ros_message->lane_max_width;
  }

  // Field name: lane_min_width
  {
    cdr >> ros_message->lane_min_width;
  }

  // Field name: left_lane_marking_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, LinkIDType
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

    if (ros_message->left_lane_marking_ids.data) {
      deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&ros_message->left_lane_marking_ids);
    }
    if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&ros_message->left_lane_marking_ids, size)) {
      fprintf(stderr, "failed to create array for field 'left_lane_marking_ids'");
      return false;
    }
    auto array_ptr = ros_message->left_lane_marking_ids.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: right_lane_marking_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, LinkIDType
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

    if (ros_message->right_lane_marking_ids.data) {
      deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&ros_message->right_lane_marking_ids);
    }
    if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&ros_message->right_lane_marking_ids, size)) {
      fprintf(stderr, "failed to create array for field 'right_lane_marking_ids'");
      return false;
    }
    auto array_ptr = ros_message->right_lane_marking_ids.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: lane_adas
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->lane_adas.data) {
      rosidl_runtime_c__String__init(&ros_message->lane_adas);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->lane_adas,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'lane_adas'\n");
      return false;
    }
  }

  // Field name: lane_length
  {
    cdr >> ros_message->lane_length;
  }

  // Field name: lane_turn_direction
  {
    cdr >> ros_message->lane_turn_direction;
  }

  // Field name: lane_confidence
  {
    cdr >> ros_message->lane_confidence;
  }

  // Field name: lane_travel_direction
  {
    cdr >> ros_message->lane_travel_direction;
  }

  // Field name: lane_empir_speed
  {
    cdr >> ros_message->lane_empir_speed;
  }

  // Field name: lane_empir_traj_count
  {
    cdr >> ros_message->lane_empir_traj_count;
  }

  // Field name: lane_host_link_id
  {
    cdr >> ros_message->lane_host_link_id;
  }

  // Field name: lane_host_link_type
  {
    cdr >> ros_message->lane_host_link_type;
  }

  // Field name: lane_successor_lane_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, LinkIDType
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

    if (ros_message->lane_successor_lane_ids.data) {
      deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&ros_message->lane_successor_lane_ids);
    }
    if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&ros_message->lane_successor_lane_ids, size)) {
      fprintf(stderr, "failed to create array for field 'lane_successor_lane_ids'");
      return false;
    }
    auto array_ptr = ros_message->lane_successor_lane_ids.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: lane_predecessor_lane_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, LinkIDType
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

    if (ros_message->lane_predecessor_lane_ids.data) {
      deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&ros_message->lane_predecessor_lane_ids);
    }
    if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&ros_message->lane_predecessor_lane_ids, size)) {
      fprintf(stderr, "failed to create array for field 'lane_predecessor_lane_ids'");
      return false;
    }
    auto array_ptr = ros_message->lane_predecessor_lane_ids.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: lane_referenced_roadobject_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, LinkIDType
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

    if (ros_message->lane_referenced_roadobject_ids.data) {
      deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&ros_message->lane_referenced_roadobject_ids);
    }
    if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&ros_message->lane_referenced_roadobject_ids, size)) {
      fprintf(stderr, "failed to create array for field 'lane_referenced_roadobject_ids'");
      return false;
    }
    auto array_ptr = ros_message->lane_referenced_roadobject_ids.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: lane_coordinates
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

    if (ros_message->lane_coordinates.data) {
      deva_gaode_routing_msgs__msg__Coordinate__Sequence__fini(&ros_message->lane_coordinates);
    }
    if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__init(&ros_message->lane_coordinates, size)) {
      fprintf(stderr, "failed to create array for field 'lane_coordinates'");
      return false;
    }
    auto array_ptr = ros_message->lane_coordinates.data;
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
size_t get_serialized_size_deva_gaode_routing_msgs__msg__J6mLane(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _J6mLane__ros_msg_type * ros_message = static_cast<const _J6mLane__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lane_id

  current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__LinkIDType(
    &(ros_message->lane_id), current_alignment);
  // field.name lane_seq_num
  {
    size_t item_size = sizeof(ros_message->lane_seq_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_type
  {
    size_t item_size = sizeof(ros_message->lane_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_speed_limit
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->lane_speed_limit.size + 1);
  // field.name lane_max_width
  {
    size_t item_size = sizeof(ros_message->lane_max_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_min_width
  {
    size_t item_size = sizeof(ros_message->lane_min_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_lane_marking_ids
  {
    size_t array_size = ros_message->left_lane_marking_ids.size;
    auto array_ptr = ros_message->left_lane_marking_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__LinkIDType(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name right_lane_marking_ids
  {
    size_t array_size = ros_message->right_lane_marking_ids.size;
    auto array_ptr = ros_message->right_lane_marking_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__LinkIDType(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name lane_adas
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->lane_adas.size + 1);
  // field.name lane_length
  {
    size_t item_size = sizeof(ros_message->lane_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_turn_direction
  {
    size_t item_size = sizeof(ros_message->lane_turn_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_confidence
  {
    size_t item_size = sizeof(ros_message->lane_confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_travel_direction
  {
    size_t item_size = sizeof(ros_message->lane_travel_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_empir_speed
  {
    size_t item_size = sizeof(ros_message->lane_empir_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_empir_traj_count
  {
    size_t item_size = sizeof(ros_message->lane_empir_traj_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_host_link_id
  {
    size_t item_size = sizeof(ros_message->lane_host_link_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_host_link_type
  {
    size_t item_size = sizeof(ros_message->lane_host_link_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_successor_lane_ids
  {
    size_t array_size = ros_message->lane_successor_lane_ids.size;
    auto array_ptr = ros_message->lane_successor_lane_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__LinkIDType(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name lane_predecessor_lane_ids
  {
    size_t array_size = ros_message->lane_predecessor_lane_ids.size;
    auto array_ptr = ros_message->lane_predecessor_lane_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__LinkIDType(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name lane_referenced_roadobject_ids
  {
    size_t array_size = ros_message->lane_referenced_roadobject_ids.size;
    auto array_ptr = ros_message->lane_referenced_roadobject_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__LinkIDType(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name lane_coordinates
  {
    size_t array_size = ros_message->lane_coordinates.size;
    auto array_ptr = ros_message->lane_coordinates.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__Coordinate(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _J6mLane__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_gaode_routing_msgs__msg__J6mLane(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t max_serialized_size_deva_gaode_routing_msgs__msg__J6mLane(
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

  // member: lane_id
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
  // member: lane_seq_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_speed_limit
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
  // member: lane_max_width
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lane_min_width
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_lane_marking_ids
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
        max_serialized_size_deva_gaode_routing_msgs__msg__LinkIDType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: right_lane_marking_ids
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
        max_serialized_size_deva_gaode_routing_msgs__msg__LinkIDType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: lane_adas
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
  // member: lane_length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lane_turn_direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_confidence
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lane_travel_direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_empir_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_empir_traj_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_host_link_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lane_host_link_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_successor_lane_ids
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
        max_serialized_size_deva_gaode_routing_msgs__msg__LinkIDType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: lane_predecessor_lane_ids
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
        max_serialized_size_deva_gaode_routing_msgs__msg__LinkIDType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: lane_referenced_roadobject_ids
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
        max_serialized_size_deva_gaode_routing_msgs__msg__LinkIDType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: lane_coordinates
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
    using DataType = deva_gaode_routing_msgs__msg__J6mLane;
    is_plain =
      (
      offsetof(DataType, lane_coordinates) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _J6mLane__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_gaode_routing_msgs__msg__J6mLane(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_J6mLane = {
  "deva_gaode_routing_msgs::msg",
  "J6mLane",
  _J6mLane__cdr_serialize,
  _J6mLane__cdr_deserialize,
  _J6mLane__get_serialized_size,
  _J6mLane__max_serialized_size
};

static rosidl_message_type_support_t _J6mLane__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_J6mLane,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, J6mLane)() {
  return &_J6mLane__type_support;
}

#if defined(__cplusplus)
}
#endif

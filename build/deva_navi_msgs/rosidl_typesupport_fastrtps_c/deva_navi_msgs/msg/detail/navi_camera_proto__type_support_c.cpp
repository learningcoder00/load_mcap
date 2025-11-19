// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_navi_msgs:msg/NaviCameraProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/navi_camera_proto__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_navi_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_navi_msgs/msg/detail/navi_camera_proto__struct.h"
#include "deva_navi_msgs/msg/detail/navi_camera_proto__functions.h"
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

#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__functions.h"  // coord_3d
#include "deva_navi_msgs/msg/detail/navi_sub_camera_proto__functions.h"  // sub_cameras
#include "rosidl_runtime_c/primitives_sequence.h"  // speed
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // speed

// forward declare type support functions
size_t get_serialized_size_deva_navi_msgs__msg__Coord3DDoubleProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__Coord3DDoubleProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, Coord3DDoubleProto)();
size_t get_serialized_size_deva_navi_msgs__msg__NaviSubCameraProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__NaviSubCameraProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, NaviSubCameraProto)();


using _NaviCameraProto__ros_msg_type = deva_navi_msgs__msg__NaviCameraProto;

static bool _NaviCameraProto__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NaviCameraProto__ros_msg_type * ros_message = static_cast<const _NaviCameraProto__ros_msg_type *>(untyped_ros_message);
  // Field name: coord_3d
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, Coord3DDoubleProto
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->coord_3d, cdr))
    {
      return false;
    }
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: distance
  {
    cdr << ros_message->distance;
  }

  // Field name: speed
  {
    size_t size = ros_message->speed.size;
    auto array_ptr = ros_message->speed.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: road_class
  {
    cdr << ros_message->road_class;
  }

  // Field name: segment_index
  {
    cdr << ros_message->segment_index;
  }

  // Field name: link_index
  {
    cdr << ros_message->link_index;
  }

  // Field name: distance_to_end
  {
    cdr << ros_message->distance_to_end;
  }

  // Field name: sub_cameras
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, NaviSubCameraProto
      )()->data);
    size_t size = ros_message->sub_cameras.size;
    auto array_ptr = ros_message->sub_cameras.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: penalty
  {
    cdr << ros_message->penalty;
  }

  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: is_new
  {
    cdr << (ros_message->is_new ? true : false);
  }

  // Field name: is_hidden
  {
    cdr << (ros_message->is_hidden ? true : false);
  }

  return true;
}

static bool _NaviCameraProto__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NaviCameraProto__ros_msg_type * ros_message = static_cast<_NaviCameraProto__ros_msg_type *>(untyped_ros_message);
  // Field name: coord_3d
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, Coord3DDoubleProto
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->coord_3d))
    {
      return false;
    }
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: distance
  {
    cdr >> ros_message->distance;
  }

  // Field name: speed
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

    if (ros_message->speed.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->speed);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->speed, size)) {
      fprintf(stderr, "failed to create array for field 'speed'");
      return false;
    }
    auto array_ptr = ros_message->speed.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: road_class
  {
    cdr >> ros_message->road_class;
  }

  // Field name: segment_index
  {
    cdr >> ros_message->segment_index;
  }

  // Field name: link_index
  {
    cdr >> ros_message->link_index;
  }

  // Field name: distance_to_end
  {
    cdr >> ros_message->distance_to_end;
  }

  // Field name: sub_cameras
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, NaviSubCameraProto
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

    if (ros_message->sub_cameras.data) {
      deva_navi_msgs__msg__NaviSubCameraProto__Sequence__fini(&ros_message->sub_cameras);
    }
    if (!deva_navi_msgs__msg__NaviSubCameraProto__Sequence__init(&ros_message->sub_cameras, size)) {
      fprintf(stderr, "failed to create array for field 'sub_cameras'");
      return false;
    }
    auto array_ptr = ros_message->sub_cameras.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: penalty
  {
    cdr >> ros_message->penalty;
  }

  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: is_new
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_new = tmp ? true : false;
  }

  // Field name: is_hidden
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_hidden = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_navi_msgs
size_t get_serialized_size_deva_navi_msgs__msg__NaviCameraProto(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NaviCameraProto__ros_msg_type * ros_message = static_cast<const _NaviCameraProto__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name coord_3d

  current_alignment += get_serialized_size_deva_navi_msgs__msg__Coord3DDoubleProto(
    &(ros_message->coord_3d), current_alignment);
  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance
  {
    size_t item_size = sizeof(ros_message->distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t array_size = ros_message->speed.size;
    auto array_ptr = ros_message->speed.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name road_class
  {
    size_t item_size = sizeof(ros_message->road_class);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name segment_index
  {
    size_t item_size = sizeof(ros_message->segment_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name link_index
  {
    size_t item_size = sizeof(ros_message->link_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance_to_end
  {
    size_t item_size = sizeof(ros_message->distance_to_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sub_cameras
  {
    size_t array_size = ros_message->sub_cameras.size;
    auto array_ptr = ros_message->sub_cameras.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_navi_msgs__msg__NaviSubCameraProto(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name penalty
  {
    size_t item_size = sizeof(ros_message->penalty);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_new
  {
    size_t item_size = sizeof(ros_message->is_new);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_hidden
  {
    size_t item_size = sizeof(ros_message->is_hidden);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NaviCameraProto__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_navi_msgs__msg__NaviCameraProto(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_navi_msgs
size_t max_serialized_size_deva_navi_msgs__msg__NaviCameraProto(
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

  // member: coord_3d
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_navi_msgs__msg__Coord3DDoubleProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed
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
  // member: road_class
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: segment_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: link_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: distance_to_end
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sub_cameras
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
        max_serialized_size_deva_navi_msgs__msg__NaviSubCameraProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: penalty
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: is_new
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_hidden
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
    using DataType = deva_navi_msgs__msg__NaviCameraProto;
    is_plain =
      (
      offsetof(DataType, is_hidden) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _NaviCameraProto__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_navi_msgs__msg__NaviCameraProto(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NaviCameraProto = {
  "deva_navi_msgs::msg",
  "NaviCameraProto",
  _NaviCameraProto__cdr_serialize,
  _NaviCameraProto__cdr_deserialize,
  _NaviCameraProto__get_serialized_size,
  _NaviCameraProto__max_serialized_size
};

static rosidl_message_type_support_t _NaviCameraProto__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NaviCameraProto,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, NaviCameraProto)() {
  return &_NaviCameraProto__type_support;
}

#if defined(__cplusplus)
}
#endif

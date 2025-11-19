// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_perception_msgs:msg/E2eAdbArray.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/e2e_adb_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_perception_msgs/msg/detail/e2e_adb_array__struct.h"
#include "deva_perception_msgs/msg/detail/e2e_adb_array__functions.h"
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

#include "deva_perception_msgs/msg/detail/e2e_adb__functions.h"  // e2e_adb_veh_obj
#include "deva_perception_msgs/msg/detail/e2e_adb_traffic_sign__functions.h"  // e2e_adb_traffic_sign
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_deva_perception_msgs__msg__E2eAdb(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_perception_msgs__msg__E2eAdb(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, E2eAdb)();
size_t get_serialized_size_deva_perception_msgs__msg__E2eAdbTrafficSign(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_perception_msgs__msg__E2eAdbTrafficSign(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, E2eAdbTrafficSign)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_perception_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_perception_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_perception_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _E2eAdbArray__ros_msg_type = deva_perception_msgs__msg__E2eAdbArray;

static bool _E2eAdbArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _E2eAdbArray__ros_msg_type * ros_message = static_cast<const _E2eAdbArray__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: pre_crash_front_data_closing_velocity
  {
    cdr << ros_message->pre_crash_front_data_closing_velocity;
  }

  // Field name: pre_crash_front_data_object_class
  {
    cdr << ros_message->pre_crash_front_data_object_class;
  }

  // Field name: pre_crash_front_data_overlap
  {
    cdr << ros_message->pre_crash_front_data_overlap;
  }

  // Field name: pre_crash_front_data_time_to_impact
  {
    cdr << ros_message->pre_crash_front_data_time_to_impact;
  }

  // Field name: lit_area
  {
    cdr << (ros_message->lit_area ? true : false);
  }

  // Field name: camera_sts_for_ahbc
  {
    cdr << ros_message->camera_sts_for_ahbc;
  }

  // Field name: too_many_cars
  {
    cdr << (ros_message->too_many_cars ? true : false);
  }

  // Field name: e2e_adb_veh_obj
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, E2eAdb
      )()->data);
    size_t size = ros_message->e2e_adb_veh_obj.size;
    auto array_ptr = ros_message->e2e_adb_veh_obj.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: e2e_adb_traffic_sign
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, E2eAdbTrafficSign
      )()->data);
    size_t size = ros_message->e2e_adb_traffic_sign.size;
    auto array_ptr = ros_message->e2e_adb_traffic_sign.data;
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

static bool _E2eAdbArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _E2eAdbArray__ros_msg_type * ros_message = static_cast<_E2eAdbArray__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: pre_crash_front_data_closing_velocity
  {
    cdr >> ros_message->pre_crash_front_data_closing_velocity;
  }

  // Field name: pre_crash_front_data_object_class
  {
    cdr >> ros_message->pre_crash_front_data_object_class;
  }

  // Field name: pre_crash_front_data_overlap
  {
    cdr >> ros_message->pre_crash_front_data_overlap;
  }

  // Field name: pre_crash_front_data_time_to_impact
  {
    cdr >> ros_message->pre_crash_front_data_time_to_impact;
  }

  // Field name: lit_area
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lit_area = tmp ? true : false;
  }

  // Field name: camera_sts_for_ahbc
  {
    cdr >> ros_message->camera_sts_for_ahbc;
  }

  // Field name: too_many_cars
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->too_many_cars = tmp ? true : false;
  }

  // Field name: e2e_adb_veh_obj
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, E2eAdb
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

    if (ros_message->e2e_adb_veh_obj.data) {
      deva_perception_msgs__msg__E2eAdb__Sequence__fini(&ros_message->e2e_adb_veh_obj);
    }
    if (!deva_perception_msgs__msg__E2eAdb__Sequence__init(&ros_message->e2e_adb_veh_obj, size)) {
      fprintf(stderr, "failed to create array for field 'e2e_adb_veh_obj'");
      return false;
    }
    auto array_ptr = ros_message->e2e_adb_veh_obj.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: e2e_adb_traffic_sign
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, E2eAdbTrafficSign
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

    if (ros_message->e2e_adb_traffic_sign.data) {
      deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence__fini(&ros_message->e2e_adb_traffic_sign);
    }
    if (!deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence__init(&ros_message->e2e_adb_traffic_sign, size)) {
      fprintf(stderr, "failed to create array for field 'e2e_adb_traffic_sign'");
      return false;
    }
    auto array_ptr = ros_message->e2e_adb_traffic_sign.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_perception_msgs
size_t get_serialized_size_deva_perception_msgs__msg__E2eAdbArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _E2eAdbArray__ros_msg_type * ros_message = static_cast<const _E2eAdbArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name pre_crash_front_data_closing_velocity
  {
    size_t item_size = sizeof(ros_message->pre_crash_front_data_closing_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pre_crash_front_data_object_class
  {
    size_t item_size = sizeof(ros_message->pre_crash_front_data_object_class);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pre_crash_front_data_overlap
  {
    size_t item_size = sizeof(ros_message->pre_crash_front_data_overlap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pre_crash_front_data_time_to_impact
  {
    size_t item_size = sizeof(ros_message->pre_crash_front_data_time_to_impact);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lit_area
  {
    size_t item_size = sizeof(ros_message->lit_area);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name camera_sts_for_ahbc
  {
    size_t item_size = sizeof(ros_message->camera_sts_for_ahbc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name too_many_cars
  {
    size_t item_size = sizeof(ros_message->too_many_cars);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name e2e_adb_veh_obj
  {
    size_t array_size = ros_message->e2e_adb_veh_obj.size;
    auto array_ptr = ros_message->e2e_adb_veh_obj.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_perception_msgs__msg__E2eAdb(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name e2e_adb_traffic_sign
  {
    size_t array_size = ros_message->e2e_adb_traffic_sign.size;
    auto array_ptr = ros_message->e2e_adb_traffic_sign.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_perception_msgs__msg__E2eAdbTrafficSign(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _E2eAdbArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_perception_msgs__msg__E2eAdbArray(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_perception_msgs
size_t max_serialized_size_deva_perception_msgs__msg__E2eAdbArray(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: pre_crash_front_data_closing_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pre_crash_front_data_object_class
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pre_crash_front_data_overlap
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pre_crash_front_data_time_to_impact
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lit_area
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: camera_sts_for_ahbc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: too_many_cars
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: e2e_adb_veh_obj
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
        max_serialized_size_deva_perception_msgs__msg__E2eAdb(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: e2e_adb_traffic_sign
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
        max_serialized_size_deva_perception_msgs__msg__E2eAdbTrafficSign(
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
    using DataType = deva_perception_msgs__msg__E2eAdbArray;
    is_plain =
      (
      offsetof(DataType, e2e_adb_traffic_sign) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _E2eAdbArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_perception_msgs__msg__E2eAdbArray(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_E2eAdbArray = {
  "deva_perception_msgs::msg",
  "E2eAdbArray",
  _E2eAdbArray__cdr_serialize,
  _E2eAdbArray__cdr_deserialize,
  _E2eAdbArray__get_serialized_size,
  _E2eAdbArray__max_serialized_size
};

static rosidl_message_type_support_t _E2eAdbArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_E2eAdbArray,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, E2eAdbArray)() {
  return &_E2eAdbArray__type_support;
}

#if defined(__cplusplus)
}
#endif

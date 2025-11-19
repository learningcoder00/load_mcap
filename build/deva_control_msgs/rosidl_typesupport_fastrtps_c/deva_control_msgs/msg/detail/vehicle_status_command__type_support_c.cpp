// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_control_msgs:msg/VehicleStatusCommand.idl
// generated code does not contain a copyright notice
#include "deva_control_msgs/msg/detail/vehicle_status_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_control_msgs/msg/detail/vehicle_status_command__struct.h"
#include "deva_control_msgs/msg/detail/vehicle_status_command__functions.h"
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

#include "rosidl_runtime_c/string.h"  // node_name, protocol_version
#include "rosidl_runtime_c/string_functions.h"  // node_name, protocol_version
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_control_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_control_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _VehicleStatusCommand__ros_msg_type = deva_control_msgs__msg__VehicleStatusCommand;

static bool _VehicleStatusCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleStatusCommand__ros_msg_type * ros_message = static_cast<const _VehicleStatusCommand__ros_msg_type *>(untyped_ros_message);
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

  // Field name: protocol_version
  {
    const rosidl_runtime_c__String * str = &ros_message->protocol_version;
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

  // Field name: node_name
  {
    const rosidl_runtime_c__String * str = &ros_message->node_name;
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

  // Field name: use_gear_cmd
  {
    cdr << (ros_message->use_gear_cmd ? true : false);
  }

  // Field name: gear_en
  {
    cdr << (ros_message->gear_en ? true : false);
  }

  // Field name: gear_cmd_val
  {
    cdr << ros_message->gear_cmd_val;
  }

  // Field name: use_epb_cmd
  {
    cdr << (ros_message->use_epb_cmd ? true : false);
  }

  // Field name: epb_en
  {
    cdr << (ros_message->epb_en ? true : false);
  }

  // Field name: epb_cmd_val
  {
    cdr << ros_message->epb_cmd_val;
  }

  // Field name: use_turn_light_cmd
  {
    cdr << (ros_message->use_turn_light_cmd ? true : false);
  }

  // Field name: turn_light_en
  {
    cdr << (ros_message->turn_light_en ? true : false);
  }

  // Field name: turn_light_cmd
  {
    cdr << ros_message->turn_light_cmd;
  }

  // Field name: use_wiper_cmd
  {
    cdr << (ros_message->use_wiper_cmd ? true : false);
  }

  // Field name: wiper_en
  {
    cdr << (ros_message->wiper_en ? true : false);
  }

  // Field name: wiper_cmd
  {
    cdr << (ros_message->wiper_cmd ? true : false);
  }

  // Field name: use_bywire_enable_cmd
  {
    cdr << (ros_message->use_bywire_enable_cmd ? true : false);
  }

  // Field name: lateral_en
  {
    cdr << (ros_message->lateral_en ? true : false);
  }

  // Field name: longitudinal_en
  {
    cdr << (ros_message->longitudinal_en ? true : false);
  }

  // Field name: use_park_cmd
  {
    cdr << (ros_message->use_park_cmd ? true : false);
  }

  // Field name: park_action
  {
    cdr << ros_message->park_action;
  }

  return true;
}

static bool _VehicleStatusCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleStatusCommand__ros_msg_type * ros_message = static_cast<_VehicleStatusCommand__ros_msg_type *>(untyped_ros_message);
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

  // Field name: protocol_version
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->protocol_version.data) {
      rosidl_runtime_c__String__init(&ros_message->protocol_version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->protocol_version,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'protocol_version'\n");
      return false;
    }
  }

  // Field name: node_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->node_name.data) {
      rosidl_runtime_c__String__init(&ros_message->node_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->node_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'node_name'\n");
      return false;
    }
  }

  // Field name: use_gear_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_gear_cmd = tmp ? true : false;
  }

  // Field name: gear_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gear_en = tmp ? true : false;
  }

  // Field name: gear_cmd_val
  {
    cdr >> ros_message->gear_cmd_val;
  }

  // Field name: use_epb_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_epb_cmd = tmp ? true : false;
  }

  // Field name: epb_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->epb_en = tmp ? true : false;
  }

  // Field name: epb_cmd_val
  {
    cdr >> ros_message->epb_cmd_val;
  }

  // Field name: use_turn_light_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_turn_light_cmd = tmp ? true : false;
  }

  // Field name: turn_light_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->turn_light_en = tmp ? true : false;
  }

  // Field name: turn_light_cmd
  {
    cdr >> ros_message->turn_light_cmd;
  }

  // Field name: use_wiper_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_wiper_cmd = tmp ? true : false;
  }

  // Field name: wiper_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wiper_en = tmp ? true : false;
  }

  // Field name: wiper_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wiper_cmd = tmp ? true : false;
  }

  // Field name: use_bywire_enable_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_bywire_enable_cmd = tmp ? true : false;
  }

  // Field name: lateral_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lateral_en = tmp ? true : false;
  }

  // Field name: longitudinal_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->longitudinal_en = tmp ? true : false;
  }

  // Field name: use_park_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_park_cmd = tmp ? true : false;
  }

  // Field name: park_action
  {
    cdr >> ros_message->park_action;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_control_msgs
size_t get_serialized_size_deva_control_msgs__msg__VehicleStatusCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleStatusCommand__ros_msg_type * ros_message = static_cast<const _VehicleStatusCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name protocol_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->protocol_version.size + 1);
  // field.name node_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->node_name.size + 1);
  // field.name use_gear_cmd
  {
    size_t item_size = sizeof(ros_message->use_gear_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_en
  {
    size_t item_size = sizeof(ros_message->gear_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_cmd_val
  {
    size_t item_size = sizeof(ros_message->gear_cmd_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name use_epb_cmd
  {
    size_t item_size = sizeof(ros_message->use_epb_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name epb_en
  {
    size_t item_size = sizeof(ros_message->epb_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name epb_cmd_val
  {
    size_t item_size = sizeof(ros_message->epb_cmd_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name use_turn_light_cmd
  {
    size_t item_size = sizeof(ros_message->use_turn_light_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_light_en
  {
    size_t item_size = sizeof(ros_message->turn_light_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_light_cmd
  {
    size_t item_size = sizeof(ros_message->turn_light_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name use_wiper_cmd
  {
    size_t item_size = sizeof(ros_message->use_wiper_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wiper_en
  {
    size_t item_size = sizeof(ros_message->wiper_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wiper_cmd
  {
    size_t item_size = sizeof(ros_message->wiper_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name use_bywire_enable_cmd
  {
    size_t item_size = sizeof(ros_message->use_bywire_enable_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lateral_en
  {
    size_t item_size = sizeof(ros_message->lateral_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitudinal_en
  {
    size_t item_size = sizeof(ros_message->longitudinal_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name use_park_cmd
  {
    size_t item_size = sizeof(ros_message->use_park_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name park_action
  {
    size_t item_size = sizeof(ros_message->park_action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleStatusCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_control_msgs__msg__VehicleStatusCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_control_msgs
size_t max_serialized_size_deva_control_msgs__msg__VehicleStatusCommand(
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
  // member: protocol_version
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
  // member: node_name
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
  // member: use_gear_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gear_en
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gear_cmd_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: use_epb_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: epb_en
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: epb_cmd_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: use_turn_light_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: turn_light_en
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: turn_light_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: use_wiper_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wiper_en
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wiper_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: use_bywire_enable_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lateral_en
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: longitudinal_en
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: use_park_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: park_action
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
    using DataType = deva_control_msgs__msg__VehicleStatusCommand;
    is_plain =
      (
      offsetof(DataType, park_action) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _VehicleStatusCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_control_msgs__msg__VehicleStatusCommand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VehicleStatusCommand = {
  "deva_control_msgs::msg",
  "VehicleStatusCommand",
  _VehicleStatusCommand__cdr_serialize,
  _VehicleStatusCommand__cdr_deserialize,
  _VehicleStatusCommand__get_serialized_size,
  _VehicleStatusCommand__max_serialized_size
};

static rosidl_message_type_support_t _VehicleStatusCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleStatusCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_control_msgs, msg, VehicleStatusCommand)() {
  return &_VehicleStatusCommand__type_support;
}

#if defined(__cplusplus)
}
#endif

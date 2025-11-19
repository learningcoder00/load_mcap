// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEBOther.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb_other__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb_other__struct.h"
#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb_other__functions.h"
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

#include "deva_aeb_msgs/msg/detail/sf_diag_list__functions.h"  // fusiondiaglist
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_sign_list__functions.h"  // fusionroadsignlist
#include "deva_aeb_msgs/msg/detail/sf_fusion_tfl_list__functions.h"  // fusiontfllist
#include "deva_aeb_msgs/msg/detail/sf_fusion_ts_list__functions.h"  // fusiontslist
#include "deva_aeb_msgs/msg/detail/sf_road_ppty__functions.h"  // roadppty
#include "deva_aeb_msgs/msg/detail/sf_veh_self__functions.h"  // vehself

// forward declare type support functions
size_t get_serialized_size_deva_aeb_msgs__msg__SFDiagList(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_aeb_msgs__msg__SFDiagList(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFDiagList)();
size_t get_serialized_size_deva_aeb_msgs__msg__SFFusionRoadSignList(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_aeb_msgs__msg__SFFusionRoadSignList(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFFusionRoadSignList)();
size_t get_serialized_size_deva_aeb_msgs__msg__SFFusionTFLList(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_aeb_msgs__msg__SFFusionTFLList(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFFusionTFLList)();
size_t get_serialized_size_deva_aeb_msgs__msg__SFFusionTSList(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_aeb_msgs__msg__SFFusionTSList(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFFusionTSList)();
size_t get_serialized_size_deva_aeb_msgs__msg__SFRoadPpty(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_aeb_msgs__msg__SFRoadPpty(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFRoadPpty)();
size_t get_serialized_size_deva_aeb_msgs__msg__SFVehSelf(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_aeb_msgs__msg__SFVehSelf(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFVehSelf)();


using _FusionInfoForAEBOther__ros_msg_type = deva_aeb_msgs__msg__FusionInfoForAEBOther;

static bool _FusionInfoForAEBOther__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FusionInfoForAEBOther__ros_msg_type * ros_message = static_cast<const _FusionInfoForAEBOther__ros_msg_type *>(untyped_ros_message);
  // Field name: roadppty
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFRoadPpty
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->roadppty, cdr))
    {
      return false;
    }
  }

  // Field name: vehself
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFVehSelf
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->vehself, cdr))
    {
      return false;
    }
  }

  // Field name: fusiontslist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFFusionTSList
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fusiontslist, cdr))
    {
      return false;
    }
  }

  // Field name: fusiontfllist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFFusionTFLList
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fusiontfllist, cdr))
    {
      return false;
    }
  }

  // Field name: fusionroadsignlist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFFusionRoadSignList
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fusionroadsignlist, cdr))
    {
      return false;
    }
  }

  // Field name: fusiondiaglist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFDiagList
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fusiondiaglist, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FusionInfoForAEBOther__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FusionInfoForAEBOther__ros_msg_type * ros_message = static_cast<_FusionInfoForAEBOther__ros_msg_type *>(untyped_ros_message);
  // Field name: roadppty
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFRoadPpty
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->roadppty))
    {
      return false;
    }
  }

  // Field name: vehself
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFVehSelf
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->vehself))
    {
      return false;
    }
  }

  // Field name: fusiontslist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFFusionTSList
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fusiontslist))
    {
      return false;
    }
  }

  // Field name: fusiontfllist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFFusionTFLList
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fusiontfllist))
    {
      return false;
    }
  }

  // Field name: fusionroadsignlist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFFusionRoadSignList
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fusionroadsignlist))
    {
      return false;
    }
  }

  // Field name: fusiondiaglist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFDiagList
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fusiondiaglist))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t get_serialized_size_deva_aeb_msgs__msg__FusionInfoForAEBOther(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FusionInfoForAEBOther__ros_msg_type * ros_message = static_cast<const _FusionInfoForAEBOther__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name roadppty

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__SFRoadPpty(
    &(ros_message->roadppty), current_alignment);
  // field.name vehself

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__SFVehSelf(
    &(ros_message->vehself), current_alignment);
  // field.name fusiontslist

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__SFFusionTSList(
    &(ros_message->fusiontslist), current_alignment);
  // field.name fusiontfllist

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__SFFusionTFLList(
    &(ros_message->fusiontfllist), current_alignment);
  // field.name fusionroadsignlist

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__SFFusionRoadSignList(
    &(ros_message->fusionroadsignlist), current_alignment);
  // field.name fusiondiaglist

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__SFDiagList(
    &(ros_message->fusiondiaglist), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FusionInfoForAEBOther__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_aeb_msgs__msg__FusionInfoForAEBOther(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t max_serialized_size_deva_aeb_msgs__msg__FusionInfoForAEBOther(
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

  // member: roadppty
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__SFRoadPpty(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: vehself
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__SFVehSelf(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: fusiontslist
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__SFFusionTSList(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: fusiontfllist
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__SFFusionTFLList(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: fusionroadsignlist
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__SFFusionRoadSignList(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: fusiondiaglist
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__SFDiagList(
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
    using DataType = deva_aeb_msgs__msg__FusionInfoForAEBOther;
    is_plain =
      (
      offsetof(DataType, fusiondiaglist) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FusionInfoForAEBOther__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_aeb_msgs__msg__FusionInfoForAEBOther(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FusionInfoForAEBOther = {
  "deva_aeb_msgs::msg",
  "FusionInfoForAEBOther",
  _FusionInfoForAEBOther__cdr_serialize,
  _FusionInfoForAEBOther__cdr_deserialize,
  _FusionInfoForAEBOther__get_serialized_size,
  _FusionInfoForAEBOther__max_serialized_size
};

static rosidl_message_type_support_t _FusionInfoForAEBOther__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FusionInfoForAEBOther,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, FusionInfoForAEBOther)() {
  return &_FusionInfoForAEBOther__type_support;
}

#if defined(__cplusplus)
}
#endif

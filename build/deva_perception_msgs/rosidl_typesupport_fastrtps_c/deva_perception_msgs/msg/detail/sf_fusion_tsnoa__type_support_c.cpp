// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_perception_msgs:msg/SFFusionTSNOA.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/sf_fusion_tsnoa__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_perception_msgs/msg/detail/sf_fusion_tsnoa__struct.h"
#include "deva_perception_msgs/msg/detail/sf_fusion_tsnoa__functions.h"
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

#include "deva_perception_msgs/msg/detail/quadrangle_img__functions.h"  // tsquadrangleimg
#include "deva_perception_msgs/msg/detail/quadrangle_vcs__functions.h"  // tsquadranglevcs
#include "deva_perception_msgs/msg/detail/traffic_region__functions.h"  // region

// forward declare type support functions
size_t get_serialized_size_deva_perception_msgs__msg__QuadrangleImg(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_perception_msgs__msg__QuadrangleImg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, QuadrangleImg)();
size_t get_serialized_size_deva_perception_msgs__msg__QuadrangleVcs(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_perception_msgs__msg__QuadrangleVcs(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, QuadrangleVcs)();
size_t get_serialized_size_deva_perception_msgs__msg__TrafficRegion(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_perception_msgs__msg__TrafficRegion(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficRegion)();


using _SFFusionTSNOA__ros_msg_type = deva_perception_msgs__msg__SFFusionTSNOA;

static bool _SFFusionTSNOA__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SFFusionTSNOA__ros_msg_type * ros_message = static_cast<const _SFFusionTSNOA__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: dstlgttoeve
  {
    cdr << ros_message->dstlgttoeve;
  }

  // Field name: dstlattoeve
  {
    cdr << ros_message->dstlattoeve;
  }

  // Field name: height
  {
    cdr << ros_message->height;
  }

  // Field name: direction
  {
    cdr << ros_message->direction;
  }

  // Field name: electcsgn
  {
    cdr << ros_message->electcsgn;
  }

  // Field name: lanelocn
  {
    cdr << ros_message->lanelocn;
  }

  // Field name: locn
  {
    cdr << ros_message->locn;
  }

  // Field name: rlvc
  {
    cdr << ros_message->rlvc;
  }

  // Field name: notrlvres
  {
    cdr << ros_message->notrlvres;
  }

  // Field name: qly
  {
    cdr << ros_message->qly;
  }

  // Field name: typ
  {
    cdr << ros_message->typ;
  }

  // Field name: val
  {
    cdr << ros_message->val;
  }

  // Field name: is_ramp
  {
    cdr << (ros_message->is_ramp ? true : false);
  }

  // Field name: region
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficRegion
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->region, cdr))
    {
      return false;
    }
  }

  // Field name: reserved
  {
    cdr << ros_message->reserved;
  }

  // Field name: spplinfoval
  {
    cdr << ros_message->spplinfoval;
  }

  // Field name: spplinfotype
  {
    cdr << ros_message->spplinfotype;
  }

  // Field name: tsquadranglevcs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, QuadrangleVcs
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tsquadranglevcs, cdr))
    {
      return false;
    }
  }

  // Field name: tsquadrangleimg
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, QuadrangleImg
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tsquadrangleimg, cdr))
    {
      return false;
    }
  }

  // Field name: utmx
  {
    cdr << ros_message->utmx;
  }

  // Field name: utmy
  {
    cdr << ros_message->utmy;
  }

  // Field name: utmz
  {
    cdr << ros_message->utmz;
  }

  // Field name: pole
  {
    cdr << ros_message->pole;
  }

  return true;
}

static bool _SFFusionTSNOA__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SFFusionTSNOA__ros_msg_type * ros_message = static_cast<_SFFusionTSNOA__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: dstlgttoeve
  {
    cdr >> ros_message->dstlgttoeve;
  }

  // Field name: dstlattoeve
  {
    cdr >> ros_message->dstlattoeve;
  }

  // Field name: height
  {
    cdr >> ros_message->height;
  }

  // Field name: direction
  {
    cdr >> ros_message->direction;
  }

  // Field name: electcsgn
  {
    cdr >> ros_message->electcsgn;
  }

  // Field name: lanelocn
  {
    cdr >> ros_message->lanelocn;
  }

  // Field name: locn
  {
    cdr >> ros_message->locn;
  }

  // Field name: rlvc
  {
    cdr >> ros_message->rlvc;
  }

  // Field name: notrlvres
  {
    cdr >> ros_message->notrlvres;
  }

  // Field name: qly
  {
    cdr >> ros_message->qly;
  }

  // Field name: typ
  {
    cdr >> ros_message->typ;
  }

  // Field name: val
  {
    cdr >> ros_message->val;
  }

  // Field name: is_ramp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_ramp = tmp ? true : false;
  }

  // Field name: region
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficRegion
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->region))
    {
      return false;
    }
  }

  // Field name: reserved
  {
    cdr >> ros_message->reserved;
  }

  // Field name: spplinfoval
  {
    cdr >> ros_message->spplinfoval;
  }

  // Field name: spplinfotype
  {
    cdr >> ros_message->spplinfotype;
  }

  // Field name: tsquadranglevcs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, QuadrangleVcs
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tsquadranglevcs))
    {
      return false;
    }
  }

  // Field name: tsquadrangleimg
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, QuadrangleImg
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tsquadrangleimg))
    {
      return false;
    }
  }

  // Field name: utmx
  {
    cdr >> ros_message->utmx;
  }

  // Field name: utmy
  {
    cdr >> ros_message->utmy;
  }

  // Field name: utmz
  {
    cdr >> ros_message->utmz;
  }

  // Field name: pole
  {
    cdr >> ros_message->pole;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_perception_msgs
size_t get_serialized_size_deva_perception_msgs__msg__SFFusionTSNOA(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SFFusionTSNOA__ros_msg_type * ros_message = static_cast<const _SFFusionTSNOA__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dstlgttoeve
  {
    size_t item_size = sizeof(ros_message->dstlgttoeve);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dstlattoeve
  {
    size_t item_size = sizeof(ros_message->dstlattoeve);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height
  {
    size_t item_size = sizeof(ros_message->height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name direction
  {
    size_t item_size = sizeof(ros_message->direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name electcsgn
  {
    size_t item_size = sizeof(ros_message->electcsgn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lanelocn
  {
    size_t item_size = sizeof(ros_message->lanelocn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name locn
  {
    size_t item_size = sizeof(ros_message->locn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rlvc
  {
    size_t item_size = sizeof(ros_message->rlvc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name notrlvres
  {
    size_t item_size = sizeof(ros_message->notrlvres);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name qly
  {
    size_t item_size = sizeof(ros_message->qly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name typ
  {
    size_t item_size = sizeof(ros_message->typ);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name val
  {
    size_t item_size = sizeof(ros_message->val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_ramp
  {
    size_t item_size = sizeof(ros_message->is_ramp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name region

  current_alignment += get_serialized_size_deva_perception_msgs__msg__TrafficRegion(
    &(ros_message->region), current_alignment);
  // field.name reserved
  {
    size_t item_size = sizeof(ros_message->reserved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name spplinfoval
  {
    size_t item_size = sizeof(ros_message->spplinfoval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name spplinfotype
  {
    size_t item_size = sizeof(ros_message->spplinfotype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tsquadranglevcs

  current_alignment += get_serialized_size_deva_perception_msgs__msg__QuadrangleVcs(
    &(ros_message->tsquadranglevcs), current_alignment);
  // field.name tsquadrangleimg

  current_alignment += get_serialized_size_deva_perception_msgs__msg__QuadrangleImg(
    &(ros_message->tsquadrangleimg), current_alignment);
  // field.name utmx
  {
    size_t item_size = sizeof(ros_message->utmx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name utmy
  {
    size_t item_size = sizeof(ros_message->utmy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name utmz
  {
    size_t item_size = sizeof(ros_message->utmz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pole
  {
    size_t item_size = sizeof(ros_message->pole);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SFFusionTSNOA__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_perception_msgs__msg__SFFusionTSNOA(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_perception_msgs
size_t max_serialized_size_deva_perception_msgs__msg__SFFusionTSNOA(
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

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dstlgttoeve
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dstlattoeve
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: electcsgn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lanelocn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: locn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rlvc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: notrlvres
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: qly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: typ
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_ramp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: region
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_perception_msgs__msg__TrafficRegion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: reserved
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: spplinfoval
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: spplinfotype
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tsquadranglevcs
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_perception_msgs__msg__QuadrangleVcs(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: tsquadrangleimg
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_perception_msgs__msg__QuadrangleImg(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: utmx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: utmy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: utmz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pole
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
    using DataType = deva_perception_msgs__msg__SFFusionTSNOA;
    is_plain =
      (
      offsetof(DataType, pole) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SFFusionTSNOA__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_perception_msgs__msg__SFFusionTSNOA(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SFFusionTSNOA = {
  "deva_perception_msgs::msg",
  "SFFusionTSNOA",
  _SFFusionTSNOA__cdr_serialize,
  _SFFusionTSNOA__cdr_deserialize,
  _SFFusionTSNOA__get_serialized_size,
  _SFFusionTSNOA__max_serialized_size
};

static rosidl_message_type_support_t _SFFusionTSNOA__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SFFusionTSNOA,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, SFFusionTSNOA)() {
  return &_SFFusionTSNOA__type_support;
}

#if defined(__cplusplus)
}
#endif

// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from environment_model_msgs:msg/EnvPoint.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/env_point__rosidl_typesupport_fastrtps_cpp.hpp"
#include "environment_model_msgs/msg/detail/env_point__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace environment_model_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const environment_model_msgs::msg::BoundPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  environment_model_msgs::msg::BoundPoint &);
size_t get_serialized_size(
  const environment_model_msgs::msg::BoundPoint &,
  size_t current_alignment);
size_t
max_serialized_size_BoundPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace environment_model_msgs

// functions for environment_model_msgs::msg::BoundPoint already declared above

// functions for environment_model_msgs::msg::BoundPoint already declared above

// functions for environment_model_msgs::msg::BoundPoint already declared above


namespace environment_model_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_environment_model_msgs
cdr_serialize(
  const environment_model_msgs::msg::EnvPoint & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: x
  cdr << ros_message.x;
  // Member: y
  cdr << ros_message.y;
  // Member: heading
  cdr << ros_message.heading;
  // Member: s
  cdr << ros_message.s;
  // Member: kappa
  cdr << ros_message.kappa;
  // Member: left_lan_bound
  environment_model_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.left_lan_bound,
    cdr);
  // Member: right_lane_bound
  environment_model_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.right_lane_bound,
    cdr);
  // Member: left_road_bound
  environment_model_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.left_road_bound,
    cdr);
  // Member: right_road_bound
  environment_model_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.right_road_bound,
    cdr);
  // Member: speed_limit
  cdr << ros_message.speed_limit;
  // Member: enum_lane_type
  cdr << ros_message.enum_lane_type;
  // Member: enum_road_type
  cdr << ros_message.enum_road_type;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_environment_model_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  environment_model_msgs::msg::EnvPoint & ros_message)
{
  // Member: x
  cdr >> ros_message.x;

  // Member: y
  cdr >> ros_message.y;

  // Member: heading
  cdr >> ros_message.heading;

  // Member: s
  cdr >> ros_message.s;

  // Member: kappa
  cdr >> ros_message.kappa;

  // Member: left_lan_bound
  environment_model_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.left_lan_bound);

  // Member: right_lane_bound
  environment_model_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.right_lane_bound);

  // Member: left_road_bound
  environment_model_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.left_road_bound);

  // Member: right_road_bound
  environment_model_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.right_road_bound);

  // Member: speed_limit
  cdr >> ros_message.speed_limit;

  // Member: enum_lane_type
  cdr >> ros_message.enum_lane_type;

  // Member: enum_road_type
  cdr >> ros_message.enum_road_type;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_environment_model_msgs
get_serialized_size(
  const environment_model_msgs::msg::EnvPoint & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: x
  {
    size_t item_size = sizeof(ros_message.x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y
  {
    size_t item_size = sizeof(ros_message.y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading
  {
    size_t item_size = sizeof(ros_message.heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: s
  {
    size_t item_size = sizeof(ros_message.s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: kappa
  {
    size_t item_size = sizeof(ros_message.kappa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_lan_bound

  current_alignment +=
    environment_model_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.left_lan_bound, current_alignment);
  // Member: right_lane_bound

  current_alignment +=
    environment_model_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.right_lane_bound, current_alignment);
  // Member: left_road_bound

  current_alignment +=
    environment_model_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.left_road_bound, current_alignment);
  // Member: right_road_bound

  current_alignment +=
    environment_model_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.right_road_bound, current_alignment);
  // Member: speed_limit
  {
    size_t item_size = sizeof(ros_message.speed_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enum_lane_type
  {
    size_t item_size = sizeof(ros_message.enum_lane_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enum_road_type
  {
    size_t item_size = sizeof(ros_message.enum_road_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_environment_model_msgs
max_serialized_size_EnvPoint(
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


  // Member: x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: kappa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: left_lan_bound
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        environment_model_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BoundPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: right_lane_bound
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        environment_model_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BoundPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: left_road_bound
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        environment_model_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BoundPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: right_road_bound
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        environment_model_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BoundPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: speed_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: enum_lane_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enum_road_type
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
    using DataType = environment_model_msgs::msg::EnvPoint;
    is_plain =
      (
      offsetof(DataType, enum_road_type) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _EnvPoint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const environment_model_msgs::msg::EnvPoint *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EnvPoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<environment_model_msgs::msg::EnvPoint *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EnvPoint__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const environment_model_msgs::msg::EnvPoint *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EnvPoint__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EnvPoint(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EnvPoint__callbacks = {
  "environment_model_msgs::msg",
  "EnvPoint",
  _EnvPoint__cdr_serialize,
  _EnvPoint__cdr_deserialize,
  _EnvPoint__get_serialized_size,
  _EnvPoint__max_serialized_size
};

static rosidl_message_type_support_t _EnvPoint__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EnvPoint__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace environment_model_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_environment_model_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<environment_model_msgs::msg::EnvPoint>()
{
  return &environment_model_msgs::msg::typesupport_fastrtps_cpp::_EnvPoint__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, environment_model_msgs, msg, EnvPoint)() {
  return &environment_model_msgs::msg::typesupport_fastrtps_cpp::_EnvPoint__handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_control_msgs:msg/ControlDebugSignal.idl
// generated code does not contain a copyright notice
#include "deva_control_msgs/msg/detail/control_debug_signal__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_control_msgs/msg/detail/control_debug_signal__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace deva_control_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
cdr_serialize(
  const deva_control_msgs::msg::ControlDebugSignal & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: c0_val
  cdr << ros_message.c0_val;
  // Member: c1_val
  cdr << ros_message.c1_val;
  // Member: c2_val
  cdr << ros_message.c2_val;
  // Member: station_error
  cdr << ros_message.station_error;
  // Member: speed_offset
  cdr << ros_message.speed_offset;
  // Member: speed_target
  cdr << ros_message.speed_target;
  // Member: speed_current
  cdr << ros_message.speed_current;
  // Member: speed_error
  cdr << ros_message.speed_error;
  // Member: preview_steer_error
  cdr << ros_message.preview_steer_error;
  // Member: preview_speed_target
  cdr << ros_message.preview_speed_target;
  // Member: distance_error
  cdr << ros_message.distance_error;
  // Member: angle_error
  cdr << ros_message.angle_error;
  // Member: debug_signal_4
  cdr << ros_message.debug_signal_4;
  // Member: debug_signal_5
  cdr << ros_message.debug_signal_5;
  // Member: debug_signal_6
  cdr << ros_message.debug_signal_6;
  // Member: debug_signal_7
  cdr << ros_message.debug_signal_7;
  // Member: debug_signal_8
  cdr << ros_message.debug_signal_8;
  // Member: debug_signal_9
  cdr << ros_message.debug_signal_9;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_control_msgs::msg::ControlDebugSignal & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: c0_val
  cdr >> ros_message.c0_val;

  // Member: c1_val
  cdr >> ros_message.c1_val;

  // Member: c2_val
  cdr >> ros_message.c2_val;

  // Member: station_error
  cdr >> ros_message.station_error;

  // Member: speed_offset
  cdr >> ros_message.speed_offset;

  // Member: speed_target
  cdr >> ros_message.speed_target;

  // Member: speed_current
  cdr >> ros_message.speed_current;

  // Member: speed_error
  cdr >> ros_message.speed_error;

  // Member: preview_steer_error
  cdr >> ros_message.preview_steer_error;

  // Member: preview_speed_target
  cdr >> ros_message.preview_speed_target;

  // Member: distance_error
  cdr >> ros_message.distance_error;

  // Member: angle_error
  cdr >> ros_message.angle_error;

  // Member: debug_signal_4
  cdr >> ros_message.debug_signal_4;

  // Member: debug_signal_5
  cdr >> ros_message.debug_signal_5;

  // Member: debug_signal_6
  cdr >> ros_message.debug_signal_6;

  // Member: debug_signal_7
  cdr >> ros_message.debug_signal_7;

  // Member: debug_signal_8
  cdr >> ros_message.debug_signal_8;

  // Member: debug_signal_9
  cdr >> ros_message.debug_signal_9;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
get_serialized_size(
  const deva_control_msgs::msg::ControlDebugSignal & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: c0_val
  {
    size_t item_size = sizeof(ros_message.c0_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: c1_val
  {
    size_t item_size = sizeof(ros_message.c1_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: c2_val
  {
    size_t item_size = sizeof(ros_message.c2_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: station_error
  {
    size_t item_size = sizeof(ros_message.station_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_offset
  {
    size_t item_size = sizeof(ros_message.speed_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_target
  {
    size_t item_size = sizeof(ros_message.speed_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_current
  {
    size_t item_size = sizeof(ros_message.speed_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_error
  {
    size_t item_size = sizeof(ros_message.speed_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: preview_steer_error
  {
    size_t item_size = sizeof(ros_message.preview_steer_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: preview_speed_target
  {
    size_t item_size = sizeof(ros_message.preview_speed_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: distance_error
  {
    size_t item_size = sizeof(ros_message.distance_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_error
  {
    size_t item_size = sizeof(ros_message.angle_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: debug_signal_4
  {
    size_t item_size = sizeof(ros_message.debug_signal_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: debug_signal_5
  {
    size_t item_size = sizeof(ros_message.debug_signal_5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: debug_signal_6
  {
    size_t item_size = sizeof(ros_message.debug_signal_6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: debug_signal_7
  {
    size_t item_size = sizeof(ros_message.debug_signal_7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: debug_signal_8
  {
    size_t item_size = sizeof(ros_message.debug_signal_8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: debug_signal_9
  {
    size_t item_size = sizeof(ros_message.debug_signal_9);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
max_serialized_size_ControlDebugSignal(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: c0_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: c1_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: c2_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: station_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: preview_steer_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: preview_speed_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: distance_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: debug_signal_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: debug_signal_5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: debug_signal_6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: debug_signal_7
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: debug_signal_8
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: debug_signal_9
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_control_msgs::msg::ControlDebugSignal;
    is_plain =
      (
      offsetof(DataType, debug_signal_9) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ControlDebugSignal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_control_msgs::msg::ControlDebugSignal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ControlDebugSignal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_control_msgs::msg::ControlDebugSignal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ControlDebugSignal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_control_msgs::msg::ControlDebugSignal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ControlDebugSignal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ControlDebugSignal(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ControlDebugSignal__callbacks = {
  "deva_control_msgs::msg",
  "ControlDebugSignal",
  _ControlDebugSignal__cdr_serialize,
  _ControlDebugSignal__cdr_deserialize,
  _ControlDebugSignal__get_serialized_size,
  _ControlDebugSignal__max_serialized_size
};

static rosidl_message_type_support_t _ControlDebugSignal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ControlDebugSignal__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_control_msgs::msg::ControlDebugSignal>()
{
  return &deva_control_msgs::msg::typesupport_fastrtps_cpp::_ControlDebugSignal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_control_msgs, msg, ControlDebugSignal)() {
  return &deva_control_msgs::msg::typesupport_fastrtps_cpp::_ControlDebugSignal__handle;
}

#ifdef __cplusplus
}
#endif

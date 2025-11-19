// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs:msg/StateContext.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs/msg/detail/state_context__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_planning_msgs/msg/detail/state_context__struct.hpp"

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


namespace deva_planning_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs
cdr_serialize(
  const deva_planning_msgs::msg::StateContext & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: behavior_type
  cdr << ros_message.behavior_type;
  // Member: navi_map_mode
  cdr << ros_message.navi_map_mode;
  // Member: routing_mode
  cdr << ros_message.routing_mode;
  // Member: target_lane_seq_score
  cdr << ros_message.target_lane_seq_score;
  // Member: state_score
  cdr << ros_message.state_score;
  // Member: score
  cdr << ros_message.score;
  // Member: use_mdriver_ego
  cdr << ros_message.use_mdriver_ego;
  // Member: target_line_id
  cdr << ros_message.target_line_id;
  // Member: current_line_id
  cdr << ros_message.current_line_id;
  // Member: gap_id
  cdr << ros_message.gap_id;
  // Member: gap_line_id
  cdr << ros_message.gap_line_id;
  // Member: start_s
  cdr << ros_message.start_s;
  // Member: end_s
  cdr << ros_message.end_s;
  // Member: length
  cdr << ros_message.length;
  // Member: future_length
  cdr << ros_message.future_length;
  // Member: front_obstacle_id
  cdr << ros_message.front_obstacle_id;
  // Member: rear_obstacle_id
  cdr << ros_message.rear_obstacle_id;
  // Member: cipv_obstacle_id
  {
    cdr << ros_message.cipv_obstacle_id;
  }
  // Member: nudge_obstacle_id
  {
    cdr << ros_message.nudge_obstacle_id;
  }
  // Member: cutin_follow_obstacle_id
  {
    cdr << ros_message.cutin_follow_obstacle_id;
  }
  // Member: cutin_overtake_obstacle_id
  {
    cdr << ros_message.cutin_overtake_obstacle_id;
  }
  // Member: lane_change_task
  cdr << ros_message.lane_change_task;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_planning_msgs::msg::StateContext & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: behavior_type
  cdr >> ros_message.behavior_type;

  // Member: navi_map_mode
  cdr >> ros_message.navi_map_mode;

  // Member: routing_mode
  cdr >> ros_message.routing_mode;

  // Member: target_lane_seq_score
  cdr >> ros_message.target_lane_seq_score;

  // Member: state_score
  cdr >> ros_message.state_score;

  // Member: score
  cdr >> ros_message.score;

  // Member: use_mdriver_ego
  cdr >> ros_message.use_mdriver_ego;

  // Member: target_line_id
  cdr >> ros_message.target_line_id;

  // Member: current_line_id
  cdr >> ros_message.current_line_id;

  // Member: gap_id
  cdr >> ros_message.gap_id;

  // Member: gap_line_id
  cdr >> ros_message.gap_line_id;

  // Member: start_s
  cdr >> ros_message.start_s;

  // Member: end_s
  cdr >> ros_message.end_s;

  // Member: length
  cdr >> ros_message.length;

  // Member: future_length
  cdr >> ros_message.future_length;

  // Member: front_obstacle_id
  cdr >> ros_message.front_obstacle_id;

  // Member: rear_obstacle_id
  cdr >> ros_message.rear_obstacle_id;

  // Member: cipv_obstacle_id
  {
    cdr >> ros_message.cipv_obstacle_id;
  }

  // Member: nudge_obstacle_id
  {
    cdr >> ros_message.nudge_obstacle_id;
  }

  // Member: cutin_follow_obstacle_id
  {
    cdr >> ros_message.cutin_follow_obstacle_id;
  }

  // Member: cutin_overtake_obstacle_id
  {
    cdr >> ros_message.cutin_overtake_obstacle_id;
  }

  // Member: lane_change_task
  cdr >> ros_message.lane_change_task;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs
get_serialized_size(
  const deva_planning_msgs::msg::StateContext & ros_message,
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
  // Member: behavior_type
  {
    size_t item_size = sizeof(ros_message.behavior_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: navi_map_mode
  {
    size_t item_size = sizeof(ros_message.navi_map_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: routing_mode
  {
    size_t item_size = sizeof(ros_message.routing_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_lane_seq_score
  {
    size_t item_size = sizeof(ros_message.target_lane_seq_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: state_score
  {
    size_t item_size = sizeof(ros_message.state_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: score
  {
    size_t item_size = sizeof(ros_message.score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: use_mdriver_ego
  {
    size_t item_size = sizeof(ros_message.use_mdriver_ego);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_line_id
  {
    size_t item_size = sizeof(ros_message.target_line_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_line_id
  {
    size_t item_size = sizeof(ros_message.current_line_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gap_id
  {
    size_t item_size = sizeof(ros_message.gap_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gap_line_id
  {
    size_t item_size = sizeof(ros_message.gap_line_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: start_s
  {
    size_t item_size = sizeof(ros_message.start_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: end_s
  {
    size_t item_size = sizeof(ros_message.end_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: length
  {
    size_t item_size = sizeof(ros_message.length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: future_length
  {
    size_t item_size = sizeof(ros_message.future_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_obstacle_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.front_obstacle_id.size() + 1);
  // Member: rear_obstacle_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.rear_obstacle_id.size() + 1);
  // Member: cipv_obstacle_id
  {
    size_t array_size = ros_message.cipv_obstacle_id.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.cipv_obstacle_id[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nudge_obstacle_id
  {
    size_t array_size = ros_message.nudge_obstacle_id.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.nudge_obstacle_id[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cutin_follow_obstacle_id
  {
    size_t array_size = ros_message.cutin_follow_obstacle_id.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.cutin_follow_obstacle_id[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cutin_overtake_obstacle_id
  {
    size_t array_size = ros_message.cutin_overtake_obstacle_id.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.cutin_overtake_obstacle_id[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_change_task
  {
    size_t item_size = sizeof(ros_message.lane_change_task);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs
max_serialized_size_StateContext(
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

  // Member: behavior_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: navi_map_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: routing_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: target_lane_seq_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: state_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: use_mdriver_ego
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: target_line_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: current_line_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gap_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gap_line_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: start_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: end_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: future_length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: front_obstacle_id
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

  // Member: rear_obstacle_id
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

  // Member: cipv_obstacle_id
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

  // Member: nudge_obstacle_id
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

  // Member: cutin_follow_obstacle_id
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

  // Member: cutin_overtake_obstacle_id
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

  // Member: lane_change_task
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
    using DataType = deva_planning_msgs::msg::StateContext;
    is_plain =
      (
      offsetof(DataType, lane_change_task) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _StateContext__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_planning_msgs::msg::StateContext *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StateContext__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_planning_msgs::msg::StateContext *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StateContext__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_planning_msgs::msg::StateContext *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StateContext__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_StateContext(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _StateContext__callbacks = {
  "deva_planning_msgs::msg",
  "StateContext",
  _StateContext__cdr_serialize,
  _StateContext__cdr_deserialize,
  _StateContext__get_serialized_size,
  _StateContext__max_serialized_size
};

static rosidl_message_type_support_t _StateContext__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StateContext__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_planning_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_planning_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_planning_msgs::msg::StateContext>()
{
  return &deva_planning_msgs::msg::typesupport_fastrtps_cpp::_StateContext__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_planning_msgs, msg, StateContext)() {
  return &deva_planning_msgs::msg::typesupport_fastrtps_cpp::_StateContext__handle;
}

#ifdef __cplusplus
}
#endif

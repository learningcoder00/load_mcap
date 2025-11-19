// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs2:msg/StateContext.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/state_context__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_planning_msgs2/msg/detail/state_context__struct.hpp"

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

namespace deva_planning_msgs2
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_planning_msgs2::msg::PolicyScenario &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_planning_msgs2::msg::PolicyScenario &);
size_t get_serialized_size(
  const deva_planning_msgs2::msg::PolicyScenario &,
  size_t current_alignment);
size_t
max_serialized_size_PolicyScenario(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_planning_msgs2

namespace deva_planning_msgs2
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_planning_msgs2::msg::UInt2String &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_planning_msgs2::msg::UInt2String &);
size_t get_serialized_size(
  const deva_planning_msgs2::msg::UInt2String &,
  size_t current_alignment);
size_t
max_serialized_size_UInt2String(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_planning_msgs2

namespace deva_planning_msgs2
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_planning_msgs2::msg::LaneBindInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_planning_msgs2::msg::LaneBindInfo &);
size_t get_serialized_size(
  const deva_planning_msgs2::msg::LaneBindInfo &,
  size_t current_alignment);
size_t
max_serialized_size_LaneBindInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_planning_msgs2

namespace deva_planning_msgs2
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_planning_msgs2::msg::Ref2SLBoundary &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_planning_msgs2::msg::Ref2SLBoundary &);
size_t get_serialized_size(
  const deva_planning_msgs2::msg::Ref2SLBoundary &,
  size_t current_alignment);
size_t
max_serialized_size_Ref2SLBoundary(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_planning_msgs2

namespace deva_planning_msgs2
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_planning_msgs2::msg::String2String &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_planning_msgs2::msg::String2String &);
size_t get_serialized_size(
  const deva_planning_msgs2::msg::String2String &,
  size_t current_alignment);
size_t
max_serialized_size_String2String(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_planning_msgs2

namespace deva_planning_msgs2
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_planning_msgs2::msg::String2UInt &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_planning_msgs2::msg::String2UInt &);
size_t get_serialized_size(
  const deva_planning_msgs2::msg::String2UInt &,
  size_t current_alignment);
size_t
max_serialized_size_String2UInt(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_planning_msgs2


namespace deva_planning_msgs2
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs2
cdr_serialize(
  const deva_planning_msgs2::msg::StateContext & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: behavior_type
  cdr << ros_message.behavior_type;
  // Member: routing_mode
  cdr << ros_message.routing_mode;
  // Member: current_turn_type
  cdr << ros_message.current_turn_type;
  // Member: use_mdriver_ego
  cdr << ros_message.use_mdriver_ego;
  // Member: target_line_id
  cdr << ros_message.target_line_id;
  // Member: current_line_id
  cdr << ros_message.current_line_id;
  // Member: front_obstacle_id
  cdr << ros_message.front_obstacle_id;
  // Member: rear_obstacle_id
  cdr << ros_message.rear_obstacle_id;
  // Member: lane_change_task
  cdr << ros_message.lane_change_task;
  // Member: best_tree_id
  cdr << ros_message.best_tree_id;
  // Member: mcts_trees
  {
    size_t size = ros_message.mcts_trees.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.mcts_trees[i],
        cdr);
    }
  }
  // Member: tagged_obstacle
  {
    size_t size = ros_message.tagged_obstacle.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.tagged_obstacle[i],
        cdr);
    }
  }
  // Member: lane_bind_infos
  {
    size_t size = ros_message.lane_bind_infos.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.lane_bind_infos[i],
        cdr);
    }
  }
  // Member: ego_sl_on_ref_lines
  {
    size_t size = ros_message.ego_sl_on_ref_lines.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.ego_sl_on_ref_lines[i],
        cdr);
    }
  }
  // Member: lane_change_cancel_reason
  cdr << ros_message.lane_change_cancel_reason;
  // Member: scalable_flags
  {
    cdr << ros_message.scalable_flags;
  }
  // Member: scalable_multimap
  {
    size_t size = ros_message.scalable_multimap.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.scalable_multimap[i],
        cdr);
    }
  }
  // Member: scalable_stream
  {
    size_t size = ros_message.scalable_stream.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.scalable_stream[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_planning_msgs2::msg::StateContext & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: behavior_type
  cdr >> ros_message.behavior_type;

  // Member: routing_mode
  cdr >> ros_message.routing_mode;

  // Member: current_turn_type
  cdr >> ros_message.current_turn_type;

  // Member: use_mdriver_ego
  cdr >> ros_message.use_mdriver_ego;

  // Member: target_line_id
  cdr >> ros_message.target_line_id;

  // Member: current_line_id
  cdr >> ros_message.current_line_id;

  // Member: front_obstacle_id
  cdr >> ros_message.front_obstacle_id;

  // Member: rear_obstacle_id
  cdr >> ros_message.rear_obstacle_id;

  // Member: lane_change_task
  cdr >> ros_message.lane_change_task;

  // Member: best_tree_id
  cdr >> ros_message.best_tree_id;

  // Member: mcts_trees
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

    ros_message.mcts_trees.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.mcts_trees[i]);
    }
  }

  // Member: tagged_obstacle
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

    ros_message.tagged_obstacle.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.tagged_obstacle[i]);
    }
  }

  // Member: lane_bind_infos
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

    ros_message.lane_bind_infos.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.lane_bind_infos[i]);
    }
  }

  // Member: ego_sl_on_ref_lines
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

    ros_message.ego_sl_on_ref_lines.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.ego_sl_on_ref_lines[i]);
    }
  }

  // Member: lane_change_cancel_reason
  cdr >> ros_message.lane_change_cancel_reason;

  // Member: scalable_flags
  {
    cdr >> ros_message.scalable_flags;
  }

  // Member: scalable_multimap
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

    ros_message.scalable_multimap.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.scalable_multimap[i]);
    }
  }

  // Member: scalable_stream
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

    ros_message.scalable_stream.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.scalable_stream[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs2
get_serialized_size(
  const deva_planning_msgs2::msg::StateContext & ros_message,
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
  // Member: routing_mode
  {
    size_t item_size = sizeof(ros_message.routing_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_turn_type
  {
    size_t item_size = sizeof(ros_message.current_turn_type);
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
  // Member: front_obstacle_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.front_obstacle_id.size() + 1);
  // Member: rear_obstacle_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.rear_obstacle_id.size() + 1);
  // Member: lane_change_task
  {
    size_t item_size = sizeof(ros_message.lane_change_task);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: best_tree_id
  {
    size_t item_size = sizeof(ros_message.best_tree_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mcts_trees
  {
    size_t array_size = ros_message.mcts_trees.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.mcts_trees[index], current_alignment);
    }
  }
  // Member: tagged_obstacle
  {
    size_t array_size = ros_message.tagged_obstacle.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.tagged_obstacle[index], current_alignment);
    }
  }
  // Member: lane_bind_infos
  {
    size_t array_size = ros_message.lane_bind_infos.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.lane_bind_infos[index], current_alignment);
    }
  }
  // Member: ego_sl_on_ref_lines
  {
    size_t array_size = ros_message.ego_sl_on_ref_lines.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.ego_sl_on_ref_lines[index], current_alignment);
    }
  }
  // Member: lane_change_cancel_reason
  {
    size_t item_size = sizeof(ros_message.lane_change_cancel_reason);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scalable_flags
  {
    size_t array_size = ros_message.scalable_flags.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.scalable_flags[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scalable_multimap
  {
    size_t array_size = ros_message.scalable_multimap.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.scalable_multimap[index], current_alignment);
    }
  }
  // Member: scalable_stream
  {
    size_t array_size = ros_message.scalable_stream.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.scalable_stream[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs2
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

  // Member: routing_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: current_turn_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
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

  // Member: lane_change_task
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: best_tree_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mcts_trees
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
      size_t inner_size =
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::max_serialized_size_PolicyScenario(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: tagged_obstacle
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
      size_t inner_size =
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::max_serialized_size_UInt2String(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: lane_bind_infos
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
      size_t inner_size =
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneBindInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: ego_sl_on_ref_lines
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
      size_t inner_size =
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::max_serialized_size_Ref2SLBoundary(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: lane_change_cancel_reason
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: scalable_flags
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: scalable_multimap
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
      size_t inner_size =
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::max_serialized_size_String2String(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: scalable_stream
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
      size_t inner_size =
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::max_serialized_size_String2UInt(
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
    using DataType = deva_planning_msgs2::msg::StateContext;
    is_plain =
      (
      offsetof(DataType, scalable_stream) +
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
    static_cast<const deva_planning_msgs2::msg::StateContext *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StateContext__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_planning_msgs2::msg::StateContext *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StateContext__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_planning_msgs2::msg::StateContext *>(
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
  "deva_planning_msgs2::msg",
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

}  // namespace deva_planning_msgs2

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_planning_msgs2
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_planning_msgs2::msg::StateContext>()
{
  return &deva_planning_msgs2::msg::typesupport_fastrtps_cpp::_StateContext__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_planning_msgs2, msg, StateContext)() {
  return &deva_planning_msgs2::msg::typesupport_fastrtps_cpp::_StateContext__handle;
}

#ifdef __cplusplus
}
#endif

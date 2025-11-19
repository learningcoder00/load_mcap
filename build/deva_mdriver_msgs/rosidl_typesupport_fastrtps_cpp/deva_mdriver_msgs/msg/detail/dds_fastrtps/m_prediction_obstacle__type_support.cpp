// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_mdriver_msgs:msg/MPredictionObstacle.idl
// generated code does not contain a copyright notice
#include "deva_mdriver_msgs/msg/detail/m_prediction_obstacle__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_mdriver_msgs/msg/detail/m_prediction_obstacle__struct.hpp"

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
namespace deva_perception_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_perception_msgs::msg::MovingObstacle &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_perception_msgs::msg::MovingObstacle &);
size_t get_serialized_size(
  const deva_perception_msgs::msg::MovingObstacle &,
  size_t current_alignment);
size_t
max_serialized_size_MovingObstacle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_perception_msgs

namespace deva_planning_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_planning_msgs::msg::TrajectoryPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_planning_msgs::msg::TrajectoryPoint &);
size_t get_serialized_size(
  const deva_planning_msgs::msg::TrajectoryPoint &,
  size_t current_alignment);
size_t
max_serialized_size_TrajectoryPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_planning_msgs

namespace deva_mdriver_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_mdriver_msgs::msg::AccHeadingSteeringStats &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_mdriver_msgs::msg::AccHeadingSteeringStats &);
size_t get_serialized_size(
  const deva_mdriver_msgs::msg::AccHeadingSteeringStats &,
  size_t current_alignment);
size_t
max_serialized_size_AccHeadingSteeringStats(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_mdriver_msgs

namespace deva_mdriver_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_mdriver_msgs::msg::DebugInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_mdriver_msgs::msg::DebugInfo &);
size_t get_serialized_size(
  const deva_mdriver_msgs::msg::DebugInfo &,
  size_t current_alignment);
size_t
max_serialized_size_DebugInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_mdriver_msgs


namespace deva_mdriver_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_mdriver_msgs
cdr_serialize(
  const deva_mdriver_msgs::msg::MPredictionObstacle & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: perception_obstacle
  deva_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.perception_obstacle,
    cdr);
  // Member: trajectory
  {
    size_t size = ros_message.trajectory.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.trajectory[i],
        cdr);
    }
  }
  // Member: decision
  {
    cdr << ros_message.decision;
  }
  // Member: obs_id
  cdr << ros_message.obs_id;
  // Member: score
  cdr << ros_message.score;
  // Member: cov
  {
    cdr << ros_message.cov;
  }
  // Member: is_static
  cdr << ros_message.is_static;
  // Member: acc_heading_steering_stats
  {
    size_t size = ros_message.acc_heading_steering_stats.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.acc_heading_steering_stats[i],
        cdr);
    }
  }
  // Member: prediction_debug_info
  {
    size_t size = ros_message.prediction_debug_info.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.prediction_debug_info[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_mdriver_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_mdriver_msgs::msg::MPredictionObstacle & ros_message)
{
  // Member: perception_obstacle
  deva_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.perception_obstacle);

  // Member: trajectory
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

    ros_message.trajectory.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.trajectory[i]);
    }
  }

  // Member: decision
  {
    cdr >> ros_message.decision;
  }

  // Member: obs_id
  cdr >> ros_message.obs_id;

  // Member: score
  cdr >> ros_message.score;

  // Member: cov
  {
    cdr >> ros_message.cov;
  }

  // Member: is_static
  cdr >> ros_message.is_static;

  // Member: acc_heading_steering_stats
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

    ros_message.acc_heading_steering_stats.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.acc_heading_steering_stats[i]);
    }
  }

  // Member: prediction_debug_info
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

    ros_message.prediction_debug_info.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.prediction_debug_info[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_mdriver_msgs
get_serialized_size(
  const deva_mdriver_msgs::msg::MPredictionObstacle & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: perception_obstacle

  current_alignment +=
    deva_perception_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.perception_obstacle, current_alignment);
  // Member: trajectory
  {
    size_t array_size = ros_message.trajectory.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.trajectory[index], current_alignment);
    }
  }
  // Member: decision
  {
    size_t array_size = ros_message.decision.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.decision[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: obs_id
  {
    size_t item_size = sizeof(ros_message.obs_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: score
  {
    size_t item_size = sizeof(ros_message.score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cov
  {
    size_t array_size = ros_message.cov.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.cov[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_static
  {
    size_t item_size = sizeof(ros_message.is_static);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_heading_steering_stats
  {
    size_t array_size = ros_message.acc_heading_steering_stats.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.acc_heading_steering_stats[index], current_alignment);
    }
  }
  // Member: prediction_debug_info
  {
    size_t array_size = ros_message.prediction_debug_info.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.prediction_debug_info[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_mdriver_msgs
max_serialized_size_MPredictionObstacle(
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


  // Member: perception_obstacle
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_perception_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MovingObstacle(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: trajectory
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
        deva_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: decision
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: obs_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cov
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: is_static
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: acc_heading_steering_stats
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
        deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_AccHeadingSteeringStats(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: prediction_debug_info
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
        deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_DebugInfo(
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
    using DataType = deva_mdriver_msgs::msg::MPredictionObstacle;
    is_plain =
      (
      offsetof(DataType, prediction_debug_info) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MPredictionObstacle__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_mdriver_msgs::msg::MPredictionObstacle *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MPredictionObstacle__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_mdriver_msgs::msg::MPredictionObstacle *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MPredictionObstacle__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_mdriver_msgs::msg::MPredictionObstacle *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MPredictionObstacle__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MPredictionObstacle(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MPredictionObstacle__callbacks = {
  "deva_mdriver_msgs::msg",
  "MPredictionObstacle",
  _MPredictionObstacle__cdr_serialize,
  _MPredictionObstacle__cdr_deserialize,
  _MPredictionObstacle__get_serialized_size,
  _MPredictionObstacle__max_serialized_size
};

static rosidl_message_type_support_t _MPredictionObstacle__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MPredictionObstacle__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_mdriver_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_mdriver_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_mdriver_msgs::msg::MPredictionObstacle>()
{
  return &deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::_MPredictionObstacle__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_mdriver_msgs, msg, MPredictionObstacle)() {
  return &deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::_MPredictionObstacle__handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_mdriver_msgs:msg/MWorld.idl
// generated code does not contain a copyright notice
#include "deva_mdriver_msgs/msg/detail/m_world__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_mdriver_msgs/msg/detail/m_world__struct.hpp"

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
namespace deva_mdriver_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_mdriver_msgs::msg::MPredictionObstacle &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_mdriver_msgs::msg::MPredictionObstacle &);
size_t get_serialized_size(
  const deva_mdriver_msgs::msg::MPredictionObstacle &,
  size_t current_alignment);
size_t
max_serialized_size_MPredictionObstacle(
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
  const deva_mdriver_msgs::msg::NudgeBuffer &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_mdriver_msgs::msg::NudgeBuffer &);
size_t get_serialized_size(
  const deva_mdriver_msgs::msg::NudgeBuffer &,
  size_t current_alignment);
size_t
max_serialized_size_NudgeBuffer(
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
  const deva_mdriver_msgs::msg::MdriverMetaAction &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_mdriver_msgs::msg::MdriverMetaAction &);
size_t get_serialized_size(
  const deva_mdriver_msgs::msg::MdriverMetaAction &,
  size_t current_alignment);
size_t
max_serialized_size_MdriverMetaAction(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_mdriver_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Point &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Point &);
size_t get_serialized_size(
  const geometry_msgs::msg::Point &,
  size_t current_alignment);
size_t
max_serialized_size_Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace deva_mdriver_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_mdriver_msgs
cdr_serialize(
  const deva_mdriver_msgs::msg::MWorld & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: world_id
  cdr << ros_message.world_id;
  // Member: meta_action
  cdr << ros_message.meta_action;
  // Member: all_obstacles
  {
    size_t size = ros_message.all_obstacles.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.all_obstacles[i],
        cdr);
    }
  }
  // Member: nudge_buffer
  deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.nudge_buffer,
    cdr);
  // Member: ego_ref_v
  {
    cdr << ros_message.ego_ref_v;
  }
  // Member: mdriver_meta_actions
  {
    size_t size = ros_message.mdriver_meta_actions.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.mdriver_meta_actions[i],
        cdr);
    }
  }
  // Member: score
  cdr << ros_message.score;
  // Member: refline_points
  {
    for (size_t i = 0; i < 17; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.refline_points[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_mdriver_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_mdriver_msgs::msg::MWorld & ros_message)
{
  // Member: world_id
  cdr >> ros_message.world_id;

  // Member: meta_action
  cdr >> ros_message.meta_action;

  // Member: all_obstacles
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

    ros_message.all_obstacles.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.all_obstacles[i]);
    }
  }

  // Member: nudge_buffer
  deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.nudge_buffer);

  // Member: ego_ref_v
  {
    cdr >> ros_message.ego_ref_v;
  }

  // Member: mdriver_meta_actions
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

    ros_message.mdriver_meta_actions.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.mdriver_meta_actions[i]);
    }
  }

  // Member: score
  cdr >> ros_message.score;

  // Member: refline_points
  {
    for (size_t i = 0; i < 17; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.refline_points[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_mdriver_msgs
get_serialized_size(
  const deva_mdriver_msgs::msg::MWorld & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: world_id
  {
    size_t item_size = sizeof(ros_message.world_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: meta_action
  {
    size_t item_size = sizeof(ros_message.meta_action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: all_obstacles
  {
    size_t array_size = ros_message.all_obstacles.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.all_obstacles[index], current_alignment);
    }
  }
  // Member: nudge_buffer

  current_alignment +=
    deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.nudge_buffer, current_alignment);
  // Member: ego_ref_v
  {
    size_t array_size = ros_message.ego_ref_v.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.ego_ref_v[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mdriver_meta_actions
  {
    size_t array_size = ros_message.mdriver_meta_actions.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.mdriver_meta_actions[index], current_alignment);
    }
  }
  // Member: score
  {
    size_t item_size = sizeof(ros_message.score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: refline_points
  {
    size_t array_size = 17;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.refline_points[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_mdriver_msgs
max_serialized_size_MWorld(
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


  // Member: world_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: meta_action
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: all_obstacles
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
        deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MPredictionObstacle(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: nudge_buffer
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_NudgeBuffer(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: ego_ref_v
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

  // Member: mdriver_meta_actions
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
        deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MdriverMetaAction(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: refline_points
  {
    size_t array_size = 17;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
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
    using DataType = deva_mdriver_msgs::msg::MWorld;
    is_plain =
      (
      offsetof(DataType, refline_points) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MWorld__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_mdriver_msgs::msg::MWorld *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MWorld__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_mdriver_msgs::msg::MWorld *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MWorld__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_mdriver_msgs::msg::MWorld *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MWorld__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MWorld(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MWorld__callbacks = {
  "deva_mdriver_msgs::msg",
  "MWorld",
  _MWorld__cdr_serialize,
  _MWorld__cdr_deserialize,
  _MWorld__get_serialized_size,
  _MWorld__max_serialized_size
};

static rosidl_message_type_support_t _MWorld__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MWorld__callbacks,
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
get_message_type_support_handle<deva_mdriver_msgs::msg::MWorld>()
{
  return &deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::_MWorld__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_mdriver_msgs, msg, MWorld)() {
  return &deva_mdriver_msgs::msg::typesupport_fastrtps_cpp::_MWorld__handle;
}

#ifdef __cplusplus
}
#endif

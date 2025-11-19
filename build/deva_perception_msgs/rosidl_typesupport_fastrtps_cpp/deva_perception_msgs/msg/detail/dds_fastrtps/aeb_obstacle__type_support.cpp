// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_perception_msgs:msg/AEBObstacle.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/aeb_obstacle__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_perception_msgs/msg/detail/aeb_obstacle__struct.hpp"

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
  const deva_perception_msgs::msg::ObstacleCommon &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_perception_msgs::msg::ObstacleCommon &);
size_t get_serialized_size(
  const deva_perception_msgs::msg::ObstacleCommon &,
  size_t current_alignment);
size_t
max_serialized_size_ObstacleCommon(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_perception_msgs

namespace deva_common_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_common_msgs::msg::BoundingBox2d &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_common_msgs::msg::BoundingBox2d &);
size_t get_serialized_size(
  const deva_common_msgs::msg::BoundingBox2d &,
  size_t current_alignment);
size_t
max_serialized_size_BoundingBox2d(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_common_msgs

// functions for deva_common_msgs::msg::BoundingBox2d already declared above

namespace deva_common_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_common_msgs::msg::GroundPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_common_msgs::msg::GroundPoint &);
size_t get_serialized_size(
  const deva_common_msgs::msg::GroundPoint &,
  size_t current_alignment);
size_t
max_serialized_size_GroundPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_common_msgs


namespace deva_perception_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_perception_msgs
cdr_serialize(
  const deva_perception_msgs::msg::AEBObstacle & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: obstacle
  deva_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.obstacle,
    cdr);
  // Member: obstacle_type
  cdr << ros_message.obstacle_type;
  // Member: head_bbox
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.head_bbox,
    cdr);
  // Member: tail_bbox
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.tail_bbox,
    cdr);
  // Member: ground_points
  {
    size_t size = ros_message.ground_points.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.ground_points[i],
        cdr);
    }
  }
  // Member: full_occ_score
  cdr << ros_message.full_occ_score;
  // Member: head_occ_score
  cdr << ros_message.head_occ_score;
  // Member: tail_occ_score
  cdr << ros_message.tail_occ_score;
  // Member: full_trunc_score
  cdr << ros_message.full_trunc_score;
  // Member: head_trunc_score
  cdr << ros_message.head_trunc_score;
  // Member: tail_trunc_score
  cdr << ros_message.tail_trunc_score;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_perception_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_perception_msgs::msg::AEBObstacle & ros_message)
{
  // Member: obstacle
  deva_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.obstacle);

  // Member: obstacle_type
  cdr >> ros_message.obstacle_type;

  // Member: head_bbox
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.head_bbox);

  // Member: tail_bbox
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.tail_bbox);

  // Member: ground_points
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

    ros_message.ground_points.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.ground_points[i]);
    }
  }

  // Member: full_occ_score
  cdr >> ros_message.full_occ_score;

  // Member: head_occ_score
  cdr >> ros_message.head_occ_score;

  // Member: tail_occ_score
  cdr >> ros_message.tail_occ_score;

  // Member: full_trunc_score
  cdr >> ros_message.full_trunc_score;

  // Member: head_trunc_score
  cdr >> ros_message.head_trunc_score;

  // Member: tail_trunc_score
  cdr >> ros_message.tail_trunc_score;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_perception_msgs
get_serialized_size(
  const deva_perception_msgs::msg::AEBObstacle & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: obstacle

  current_alignment +=
    deva_perception_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.obstacle, current_alignment);
  // Member: obstacle_type
  {
    size_t item_size = sizeof(ros_message.obstacle_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: head_bbox

  current_alignment +=
    deva_common_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.head_bbox, current_alignment);
  // Member: tail_bbox

  current_alignment +=
    deva_common_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.tail_bbox, current_alignment);
  // Member: ground_points
  {
    size_t array_size = ros_message.ground_points.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_common_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.ground_points[index], current_alignment);
    }
  }
  // Member: full_occ_score
  {
    size_t item_size = sizeof(ros_message.full_occ_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: head_occ_score
  {
    size_t item_size = sizeof(ros_message.head_occ_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tail_occ_score
  {
    size_t item_size = sizeof(ros_message.tail_occ_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: full_trunc_score
  {
    size_t item_size = sizeof(ros_message.full_trunc_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: head_trunc_score
  {
    size_t item_size = sizeof(ros_message.head_trunc_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tail_trunc_score
  {
    size_t item_size = sizeof(ros_message.tail_trunc_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_perception_msgs
max_serialized_size_AEBObstacle(
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


  // Member: obstacle
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_perception_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ObstacleCommon(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: obstacle_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: head_bbox
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_common_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BoundingBox2d(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: tail_bbox
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_common_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BoundingBox2d(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: ground_points
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
        deva_common_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_GroundPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: full_occ_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: head_occ_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tail_occ_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: full_trunc_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: head_trunc_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tail_trunc_score
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
    using DataType = deva_perception_msgs::msg::AEBObstacle;
    is_plain =
      (
      offsetof(DataType, tail_trunc_score) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _AEBObstacle__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_perception_msgs::msg::AEBObstacle *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AEBObstacle__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_perception_msgs::msg::AEBObstacle *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AEBObstacle__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_perception_msgs::msg::AEBObstacle *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AEBObstacle__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AEBObstacle(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AEBObstacle__callbacks = {
  "deva_perception_msgs::msg",
  "AEBObstacle",
  _AEBObstacle__cdr_serialize,
  _AEBObstacle__cdr_deserialize,
  _AEBObstacle__get_serialized_size,
  _AEBObstacle__max_serialized_size
};

static rosidl_message_type_support_t _AEBObstacle__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AEBObstacle__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_perception_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_perception_msgs::msg::AEBObstacle>()
{
  return &deva_perception_msgs::msg::typesupport_fastrtps_cpp::_AEBObstacle__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_perception_msgs, msg, AEBObstacle)() {
  return &deva_perception_msgs::msg::typesupport_fastrtps_cpp::_AEBObstacle__handle;
}

#ifdef __cplusplus
}
#endif

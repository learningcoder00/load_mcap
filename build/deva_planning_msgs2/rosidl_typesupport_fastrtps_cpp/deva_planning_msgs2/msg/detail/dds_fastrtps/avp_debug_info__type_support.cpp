// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs2:msg/AvpDebugInfo.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/avp_debug_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_planning_msgs2/msg/detail/avp_debug_info__struct.hpp"

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
namespace deva_planning_msgs2
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_planning_msgs2::msg::AvpRefLine &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_planning_msgs2::msg::AvpRefLine &);
size_t get_serialized_size(
  const deva_planning_msgs2::msg::AvpRefLine &,
  size_t current_alignment);
size_t
max_serialized_size_AvpRefLine(
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
  const deva_planning_msgs2::msg::AvpRefLineTreePointVec &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_planning_msgs2::msg::AvpRefLineTreePointVec &);
size_t get_serialized_size(
  const deva_planning_msgs2::msg::AvpRefLineTreePointVec &,
  size_t current_alignment);
size_t
max_serialized_size_AvpRefLineTreePointVec(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_planning_msgs2

// functions for deva_planning_msgs2::msg::AvpRefLineTreePointVec already declared above

// functions for deva_planning_msgs2::msg::AvpRefLineTreePointVec already declared above

namespace deva_planning_msgs2
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_planning_msgs2::msg::MpcPathData &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_planning_msgs2::msg::MpcPathData &);
size_t get_serialized_size(
  const deva_planning_msgs2::msg::MpcPathData &,
  size_t current_alignment);
size_t
max_serialized_size_MpcPathData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_planning_msgs2

// functions for deva_planning_msgs2::msg::MpcPathData already declared above

// functions for deva_planning_msgs2::msg::MpcPathData already declared above

namespace deva_planning_msgs2
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_planning_msgs2::msg::PathPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_planning_msgs2::msg::PathPoint &);
size_t get_serialized_size(
  const deva_planning_msgs2::msg::PathPoint &,
  size_t current_alignment);
size_t
max_serialized_size_PathPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_planning_msgs2

// functions for deva_planning_msgs2::msg::PathPoint already declared above

namespace deva_planning_msgs2
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_planning_msgs2::msg::StitchData &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_planning_msgs2::msg::StitchData &);
size_t get_serialized_size(
  const deva_planning_msgs2::msg::StitchData &,
  size_t current_alignment);
size_t
max_serialized_size_StitchData(
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
  const deva_planning_msgs2::msg::AvpDebugInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: solve_num
  cdr << ros_message.solve_num;
  // Member: acados_status
  cdr << ros_message.acados_status;
  // Member: origin_ref_line
  {
    size_t size = ros_message.origin_ref_line.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.origin_ref_line[i],
        cdr);
    }
  }
  // Member: smooth_line
  deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.smooth_line,
    cdr);
  // Member: used_ref_line_tree
  {
    size_t size = ros_message.used_ref_line_tree.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.used_ref_line_tree[i],
        cdr);
    }
  }
  // Member: driver_path
  {
    size_t size = ros_message.driver_path.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.driver_path[i],
        cdr);
    }
  }
  // Member: now_mpc_data
  {
    size_t size = ros_message.now_mpc_data.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.now_mpc_data[i],
        cdr);
    }
  }
  // Member: now_path_data
  {
    size_t size = ros_message.now_path_data.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.now_path_data[i],
        cdr);
    }
  }
  // Member: past_path_data
  {
    size_t size = ros_message.past_path_data.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.past_path_data[i],
        cdr);
    }
  }
  // Member: boundary_poses
  {
    size_t size = ros_message.boundary_poses.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.boundary_poses[i],
        cdr);
    }
  }
  // Member: obstacle_poses
  {
    size_t size = ros_message.obstacle_poses.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.obstacle_poses[i],
        cdr);
    }
  }
  // Member: stitch_data
  deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stitch_data,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_planning_msgs2::msg::AvpDebugInfo & ros_message)
{
  // Member: solve_num
  cdr >> ros_message.solve_num;

  // Member: acados_status
  cdr >> ros_message.acados_status;

  // Member: origin_ref_line
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

    ros_message.origin_ref_line.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.origin_ref_line[i]);
    }
  }

  // Member: smooth_line
  deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.smooth_line);

  // Member: used_ref_line_tree
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

    ros_message.used_ref_line_tree.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.used_ref_line_tree[i]);
    }
  }

  // Member: driver_path
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

    ros_message.driver_path.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.driver_path[i]);
    }
  }

  // Member: now_mpc_data
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

    ros_message.now_mpc_data.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.now_mpc_data[i]);
    }
  }

  // Member: now_path_data
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

    ros_message.now_path_data.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.now_path_data[i]);
    }
  }

  // Member: past_path_data
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

    ros_message.past_path_data.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.past_path_data[i]);
    }
  }

  // Member: boundary_poses
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

    ros_message.boundary_poses.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.boundary_poses[i]);
    }
  }

  // Member: obstacle_poses
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

    ros_message.obstacle_poses.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.obstacle_poses[i]);
    }
  }

  // Member: stitch_data
  deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stitch_data);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs2
get_serialized_size(
  const deva_planning_msgs2::msg::AvpDebugInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: solve_num
  {
    size_t item_size = sizeof(ros_message.solve_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acados_status
  {
    size_t item_size = sizeof(ros_message.acados_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: origin_ref_line
  {
    size_t array_size = ros_message.origin_ref_line.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.origin_ref_line[index], current_alignment);
    }
  }
  // Member: smooth_line

  current_alignment +=
    deva_planning_msgs2::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.smooth_line, current_alignment);
  // Member: used_ref_line_tree
  {
    size_t array_size = ros_message.used_ref_line_tree.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.used_ref_line_tree[index], current_alignment);
    }
  }
  // Member: driver_path
  {
    size_t array_size = ros_message.driver_path.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.driver_path[index], current_alignment);
    }
  }
  // Member: now_mpc_data
  {
    size_t array_size = ros_message.now_mpc_data.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.now_mpc_data[index], current_alignment);
    }
  }
  // Member: now_path_data
  {
    size_t array_size = ros_message.now_path_data.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.now_path_data[index], current_alignment);
    }
  }
  // Member: past_path_data
  {
    size_t array_size = ros_message.past_path_data.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.past_path_data[index], current_alignment);
    }
  }
  // Member: boundary_poses
  {
    size_t array_size = ros_message.boundary_poses.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.boundary_poses[index], current_alignment);
    }
  }
  // Member: obstacle_poses
  {
    size_t array_size = ros_message.obstacle_poses.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.obstacle_poses[index], current_alignment);
    }
  }
  // Member: stitch_data

  current_alignment +=
    deva_planning_msgs2::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stitch_data, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs2
max_serialized_size_AvpDebugInfo(
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


  // Member: solve_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: acados_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: origin_ref_line
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
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::max_serialized_size_AvpRefLine(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: smooth_line
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::max_serialized_size_AvpRefLineTreePointVec(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: used_ref_line_tree
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
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::max_serialized_size_AvpRefLineTreePointVec(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: driver_path
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
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::max_serialized_size_AvpRefLineTreePointVec(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: now_mpc_data
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
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::max_serialized_size_MpcPathData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: now_path_data
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
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::max_serialized_size_MpcPathData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: past_path_data
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
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::max_serialized_size_MpcPathData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: boundary_poses
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
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::max_serialized_size_PathPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: obstacle_poses
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
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::max_serialized_size_PathPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: stitch_data
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::max_serialized_size_StitchData(
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
    using DataType = deva_planning_msgs2::msg::AvpDebugInfo;
    is_plain =
      (
      offsetof(DataType, stitch_data) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _AvpDebugInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_planning_msgs2::msg::AvpDebugInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AvpDebugInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_planning_msgs2::msg::AvpDebugInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AvpDebugInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_planning_msgs2::msg::AvpDebugInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AvpDebugInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AvpDebugInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AvpDebugInfo__callbacks = {
  "deva_planning_msgs2::msg",
  "AvpDebugInfo",
  _AvpDebugInfo__cdr_serialize,
  _AvpDebugInfo__cdr_deserialize,
  _AvpDebugInfo__get_serialized_size,
  _AvpDebugInfo__max_serialized_size
};

static rosidl_message_type_support_t _AvpDebugInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AvpDebugInfo__callbacks,
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
get_message_type_support_handle<deva_planning_msgs2::msg::AvpDebugInfo>()
{
  return &deva_planning_msgs2::msg::typesupport_fastrtps_cpp::_AvpDebugInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_planning_msgs2, msg, AvpDebugInfo)() {
  return &deva_planning_msgs2::msg::typesupport_fastrtps_cpp::_AvpDebugInfo__handle;
}

#ifdef __cplusplus
}
#endif

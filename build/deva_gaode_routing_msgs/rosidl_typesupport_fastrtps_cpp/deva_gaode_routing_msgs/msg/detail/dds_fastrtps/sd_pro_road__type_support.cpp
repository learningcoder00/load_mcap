// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/SdProRoad.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_road__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_road__struct.hpp"

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
namespace deva_gaode_routing_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_gaode_routing_msgs::msg::CenterPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_gaode_routing_msgs::msg::CenterPoint &);
size_t get_serialized_size(
  const deva_gaode_routing_msgs::msg::CenterPoint &,
  size_t current_alignment);
size_t
max_serialized_size_CenterPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_gaode_routing_msgs

namespace deva_gaode_routing_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_gaode_routing_msgs::msg::SdProLane &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_gaode_routing_msgs::msg::SdProLane &);
size_t get_serialized_size(
  const deva_gaode_routing_msgs::msg::SdProLane &,
  size_t current_alignment);
size_t
max_serialized_size_SdProLane(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_gaode_routing_msgs

namespace deva_gaode_routing_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_gaode_routing_msgs::msg::SdProLaneConnect &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_gaode_routing_msgs::msg::SdProLaneConnect &);
size_t get_serialized_size(
  const deva_gaode_routing_msgs::msg::SdProLaneConnect &,
  size_t current_alignment);
size_t
max_serialized_size_SdProLaneConnect(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_gaode_routing_msgs

namespace deva_gaode_routing_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_gaode_routing_msgs::msg::TrfcSign &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_gaode_routing_msgs::msg::TrfcSign &);
size_t get_serialized_size(
  const deva_gaode_routing_msgs::msg::TrfcSign &,
  size_t current_alignment);
size_t
max_serialized_size_TrfcSign(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_gaode_routing_msgs

namespace deva_gaode_routing_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_gaode_routing_msgs::msg::Restriction &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_gaode_routing_msgs::msg::Restriction &);
size_t get_serialized_size(
  const deva_gaode_routing_msgs::msg::Restriction &,
  size_t current_alignment);
size_t
max_serialized_size_Restriction(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_gaode_routing_msgs

namespace deva_gaode_routing_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_gaode_routing_msgs::msg::CrossPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_gaode_routing_msgs::msg::CrossPoint &);
size_t get_serialized_size(
  const deva_gaode_routing_msgs::msg::CrossPoint &,
  size_t current_alignment);
size_t
max_serialized_size_CrossPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_gaode_routing_msgs


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
cdr_serialize(
  const deva_gaode_routing_msgs::msg::SdProRoad & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id
  cdr << ros_message.id;
  // Member: road_kind
  cdr << ros_message.road_kind;
  // Member: direction
  cdr << ros_message.direction;
  // Member: forms
  {
    cdr << ros_message.forms;
  }
  // Member: lane_count
  cdr << ros_message.lane_count;
  // Member: length
  cdr << ros_message.length;
  // Member: speed_limit_min
  cdr << ros_message.speed_limit_min;
  // Member: speed_limit_max
  cdr << ros_message.speed_limit_max;
  // Member: start_angle
  cdr << ros_message.start_angle;
  // Member: end_angle
  cdr << ros_message.end_angle;
  // Member: geo
  {
    size_t size = ros_message.geo.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.geo[i],
        cdr);
    }
  }
  // Member: lanes
  {
    size_t size = ros_message.lanes.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.lanes[i],
        cdr);
    }
  }
  // Member: next_ids
  {
    cdr << ros_message.next_ids;
  }
  // Member: pre_ids
  {
    cdr << ros_message.pre_ids;
  }
  // Member: product_type
  cdr << ros_message.product_type;
  // Member: lane_connect
  {
    size_t size = ros_message.lane_connect.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.lane_connect[i],
        cdr);
    }
  }
  // Member: trfc_signs
  {
    size_t size = ros_message.trfc_signs.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.trfc_signs[i],
        cdr);
    }
  }
  // Member: s_node_id
  cdr << ros_message.s_node_id;
  // Member: e_node_id
  cdr << ros_message.e_node_id;
  // Member: joint_type
  cdr << ros_message.joint_type;
  // Member: road_name
  cdr << ros_message.road_name;
  // Member: restriction
  {
    size_t size = ros_message.restriction.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.restriction[i],
        cdr);
    }
  }
  // Member: cross_point
  {
    size_t size = ros_message.cross_point.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.cross_point[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_gaode_routing_msgs::msg::SdProRoad & ros_message)
{
  // Member: id
  cdr >> ros_message.id;

  // Member: road_kind
  cdr >> ros_message.road_kind;

  // Member: direction
  cdr >> ros_message.direction;

  // Member: forms
  {
    cdr >> ros_message.forms;
  }

  // Member: lane_count
  cdr >> ros_message.lane_count;

  // Member: length
  cdr >> ros_message.length;

  // Member: speed_limit_min
  cdr >> ros_message.speed_limit_min;

  // Member: speed_limit_max
  cdr >> ros_message.speed_limit_max;

  // Member: start_angle
  cdr >> ros_message.start_angle;

  // Member: end_angle
  cdr >> ros_message.end_angle;

  // Member: geo
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

    ros_message.geo.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.geo[i]);
    }
  }

  // Member: lanes
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

    ros_message.lanes.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.lanes[i]);
    }
  }

  // Member: next_ids
  {
    cdr >> ros_message.next_ids;
  }

  // Member: pre_ids
  {
    cdr >> ros_message.pre_ids;
  }

  // Member: product_type
  cdr >> ros_message.product_type;

  // Member: lane_connect
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

    ros_message.lane_connect.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.lane_connect[i]);
    }
  }

  // Member: trfc_signs
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

    ros_message.trfc_signs.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.trfc_signs[i]);
    }
  }

  // Member: s_node_id
  cdr >> ros_message.s_node_id;

  // Member: e_node_id
  cdr >> ros_message.e_node_id;

  // Member: joint_type
  cdr >> ros_message.joint_type;

  // Member: road_name
  cdr >> ros_message.road_name;

  // Member: restriction
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

    ros_message.restriction.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.restriction[i]);
    }
  }

  // Member: cross_point
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

    ros_message.cross_point.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.cross_point[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
get_serialized_size(
  const deva_gaode_routing_msgs::msg::SdProRoad & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id
  {
    size_t item_size = sizeof(ros_message.id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: road_kind
  {
    size_t item_size = sizeof(ros_message.road_kind);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: direction
  {
    size_t item_size = sizeof(ros_message.direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: forms
  {
    size_t array_size = ros_message.forms.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.forms[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_count
  {
    size_t item_size = sizeof(ros_message.lane_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: length
  {
    size_t item_size = sizeof(ros_message.length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_limit_min
  {
    size_t item_size = sizeof(ros_message.speed_limit_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_limit_max
  {
    size_t item_size = sizeof(ros_message.speed_limit_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: start_angle
  {
    size_t item_size = sizeof(ros_message.start_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: end_angle
  {
    size_t item_size = sizeof(ros_message.end_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: geo
  {
    size_t array_size = ros_message.geo.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.geo[index], current_alignment);
    }
  }
  // Member: lanes
  {
    size_t array_size = ros_message.lanes.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.lanes[index], current_alignment);
    }
  }
  // Member: next_ids
  {
    size_t array_size = ros_message.next_ids.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.next_ids[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pre_ids
  {
    size_t array_size = ros_message.pre_ids.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.pre_ids[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: product_type
  {
    size_t item_size = sizeof(ros_message.product_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_connect
  {
    size_t array_size = ros_message.lane_connect.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.lane_connect[index], current_alignment);
    }
  }
  // Member: trfc_signs
  {
    size_t array_size = ros_message.trfc_signs.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.trfc_signs[index], current_alignment);
    }
  }
  // Member: s_node_id
  {
    size_t item_size = sizeof(ros_message.s_node_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: e_node_id
  {
    size_t item_size = sizeof(ros_message.e_node_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_type
  {
    size_t item_size = sizeof(ros_message.joint_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: road_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.road_name.size() + 1);
  // Member: restriction
  {
    size_t array_size = ros_message.restriction.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.restriction[index], current_alignment);
    }
  }
  // Member: cross_point
  {
    size_t array_size = ros_message.cross_point.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.cross_point[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
max_serialized_size_SdProRoad(
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


  // Member: id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: road_kind
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: forms
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

  // Member: lane_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed_limit_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed_limit_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: start_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: end_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: geo
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
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CenterPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: lanes
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
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SdProLane(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: next_ids
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

  // Member: pre_ids
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

  // Member: product_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lane_connect
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
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SdProLaneConnect(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: trfc_signs
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
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TrfcSign(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: s_node_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: e_node_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: joint_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: road_name
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

  // Member: restriction
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
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Restriction(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: cross_point
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
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CrossPoint(
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
    using DataType = deva_gaode_routing_msgs::msg::SdProRoad;
    is_plain =
      (
      offsetof(DataType, cross_point) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SdProRoad__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_gaode_routing_msgs::msg::SdProRoad *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SdProRoad__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_gaode_routing_msgs::msg::SdProRoad *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SdProRoad__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_gaode_routing_msgs::msg::SdProRoad *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SdProRoad__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SdProRoad(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SdProRoad__callbacks = {
  "deva_gaode_routing_msgs::msg",
  "SdProRoad",
  _SdProRoad__cdr_serialize,
  _SdProRoad__cdr_deserialize,
  _SdProRoad__get_serialized_size,
  _SdProRoad__max_serialized_size
};

static rosidl_message_type_support_t _SdProRoad__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SdProRoad__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_gaode_routing_msgs::msg::SdProRoad>()
{
  return &deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::_SdProRoad__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_gaode_routing_msgs, msg, SdProRoad)() {
  return &deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::_SdProRoad__handle;
}

#ifdef __cplusplus
}
#endif

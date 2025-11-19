// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_navi_msgs:msg/LinkInfoProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/link_info_proto__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_navi_msgs/msg/detail/link_info_proto__struct.hpp"

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
namespace deva_navi_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_navi_msgs::msg::Coord3DDoubleProto &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_navi_msgs::msg::Coord3DDoubleProto &);
size_t get_serialized_size(
  const deva_navi_msgs::msg::Coord3DDoubleProto &,
  size_t current_alignment);
size_t
max_serialized_size_Coord3DDoubleProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_navi_msgs

namespace deva_navi_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_navi_msgs::msg::GantryInfoProto &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_navi_msgs::msg::GantryInfoProto &);
size_t get_serialized_size(
  const deva_navi_msgs::msg::GantryInfoProto &,
  size_t current_alignment);
size_t
max_serialized_size_GantryInfoProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_navi_msgs

namespace deva_navi_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_navi_msgs::msg::NaviCameraProto &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_navi_msgs::msg::NaviCameraProto &);
size_t get_serialized_size(
  const deva_navi_msgs::msg::NaviCameraProto &,
  size_t current_alignment);
size_t
max_serialized_size_NaviCameraProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_navi_msgs

namespace deva_navi_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_navi_msgs::msg::RoadFacilityProto &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_navi_msgs::msg::RoadFacilityProto &);
size_t get_serialized_size(
  const deva_navi_msgs::msg::RoadFacilityProto &,
  size_t current_alignment);
size_t
max_serialized_size_RoadFacilityProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_navi_msgs

namespace deva_navi_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_navi_msgs::msg::TurnInfoProto &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_navi_msgs::msg::TurnInfoProto &);
size_t get_serialized_size(
  const deva_navi_msgs::msg::TurnInfoProto &,
  size_t current_alignment);
size_t
max_serialized_size_TurnInfoProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_navi_msgs


namespace deva_navi_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_navi_msgs
cdr_serialize(
  const deva_navi_msgs::msg::LinkInfoProto & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: points
  {
    size_t size = ros_message.points.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_navi_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.points[i],
        cdr);
    }
  }
  // Member: gantry_infos
  {
    size_t size = ros_message.gantry_infos.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_navi_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.gantry_infos[i],
        cdr);
    }
  }
  // Member: cameras
  {
    size_t size = ros_message.cameras.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_navi_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.cameras[i],
        cdr);
    }
  }
  // Member: is_valid
  cdr << (ros_message.is_valid ? true : false);
  // Member: related_path_id
  cdr << ros_message.related_path_id;
  // Member: related_segment_index
  cdr << ros_message.related_segment_index;
  // Member: link_index
  cdr << ros_message.link_index;
  // Member: length
  cdr << ros_message.length;
  // Member: travel_time
  cdr << ros_message.travel_time;
  // Member: static_travel_time
  cdr << ros_message.static_travel_time;
  // Member: road_name
  cdr << ros_message.road_name;
  // Member: road_facilities
  {
    size_t size = ros_message.road_facilities.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_navi_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.road_facilities[i],
        cdr);
    }
  }
  // Member: topo_id_64
  cdr << ros_message.topo_id_64;
  // Member: urid
  cdr << ros_message.urid;
  // Member: link_direction
  cdr << ros_message.link_direction;
  // Member: main_action
  cdr << ros_message.main_action;
  // Member: assistant_action
  cdr << ros_message.assistant_action;
  // Member: adcode
  cdr << ros_message.adcode;
  // Member: link_type
  cdr << ros_message.link_type;
  // Member: formway
  cdr << ros_message.formway;
  // Member: road_class
  cdr << ros_message.road_class;
  // Member: road_direction
  cdr << ros_message.road_direction;
  // Member: ownership
  cdr << ros_message.ownership;
  // Member: is_toll
  cdr << (ros_message.is_toll ? true : false);
  // Member: is_over_head
  cdr << (ros_message.is_over_head ? true : false);
  // Member: has_parallel_road
  cdr << (ros_message.has_parallel_road ? true : false);
  // Member: has_multi_out
  cdr << (ros_message.has_multi_out ? true : false);
  // Member: has_traffic_light
  cdr << (ros_message.has_traffic_light ? true : false);
  // Member: has_mix_fork
  cdr << (ros_message.has_mix_fork ? true : false);
  // Member: is_at_service
  cdr << (ros_message.is_at_service ? true : false);
  // Member: is_restricting
  cdr << (ros_message.is_restricting ? true : false);
  // Member: limit_flag
  cdr << ros_message.limit_flag;
  // Member: speed
  cdr << ros_message.speed;
  // Member: turn_infos
  {
    size_t size = ros_message.turn_infos.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_navi_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.turn_infos[i],
        cdr);
    }
  }
  // Member: service_name
  cdr << ros_message.service_name;
  // Member: inner_road
  cdr << (ros_message.inner_road ? true : false);
  // Member: is_parking_road
  cdr << (ros_message.is_parking_road ? true : false);
  // Member: traffic_status
  cdr << ros_message.traffic_status;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_navi_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_navi_msgs::msg::LinkInfoProto & ros_message)
{
  // Member: points
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

    ros_message.points.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_navi_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.points[i]);
    }
  }

  // Member: gantry_infos
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

    ros_message.gantry_infos.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_navi_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.gantry_infos[i]);
    }
  }

  // Member: cameras
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

    ros_message.cameras.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_navi_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.cameras[i]);
    }
  }

  // Member: is_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_valid = tmp ? true : false;
  }

  // Member: related_path_id
  cdr >> ros_message.related_path_id;

  // Member: related_segment_index
  cdr >> ros_message.related_segment_index;

  // Member: link_index
  cdr >> ros_message.link_index;

  // Member: length
  cdr >> ros_message.length;

  // Member: travel_time
  cdr >> ros_message.travel_time;

  // Member: static_travel_time
  cdr >> ros_message.static_travel_time;

  // Member: road_name
  cdr >> ros_message.road_name;

  // Member: road_facilities
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

    ros_message.road_facilities.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_navi_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.road_facilities[i]);
    }
  }

  // Member: topo_id_64
  cdr >> ros_message.topo_id_64;

  // Member: urid
  cdr >> ros_message.urid;

  // Member: link_direction
  cdr >> ros_message.link_direction;

  // Member: main_action
  cdr >> ros_message.main_action;

  // Member: assistant_action
  cdr >> ros_message.assistant_action;

  // Member: adcode
  cdr >> ros_message.adcode;

  // Member: link_type
  cdr >> ros_message.link_type;

  // Member: formway
  cdr >> ros_message.formway;

  // Member: road_class
  cdr >> ros_message.road_class;

  // Member: road_direction
  cdr >> ros_message.road_direction;

  // Member: ownership
  cdr >> ros_message.ownership;

  // Member: is_toll
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_toll = tmp ? true : false;
  }

  // Member: is_over_head
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_over_head = tmp ? true : false;
  }

  // Member: has_parallel_road
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_parallel_road = tmp ? true : false;
  }

  // Member: has_multi_out
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_multi_out = tmp ? true : false;
  }

  // Member: has_traffic_light
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_traffic_light = tmp ? true : false;
  }

  // Member: has_mix_fork
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_mix_fork = tmp ? true : false;
  }

  // Member: is_at_service
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_at_service = tmp ? true : false;
  }

  // Member: is_restricting
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_restricting = tmp ? true : false;
  }

  // Member: limit_flag
  cdr >> ros_message.limit_flag;

  // Member: speed
  cdr >> ros_message.speed;

  // Member: turn_infos
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

    ros_message.turn_infos.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_navi_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.turn_infos[i]);
    }
  }

  // Member: service_name
  cdr >> ros_message.service_name;

  // Member: inner_road
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.inner_road = tmp ? true : false;
  }

  // Member: is_parking_road
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_parking_road = tmp ? true : false;
  }

  // Member: traffic_status
  cdr >> ros_message.traffic_status;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_navi_msgs
get_serialized_size(
  const deva_navi_msgs::msg::LinkInfoProto & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: points
  {
    size_t array_size = ros_message.points.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_navi_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.points[index], current_alignment);
    }
  }
  // Member: gantry_infos
  {
    size_t array_size = ros_message.gantry_infos.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_navi_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.gantry_infos[index], current_alignment);
    }
  }
  // Member: cameras
  {
    size_t array_size = ros_message.cameras.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_navi_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.cameras[index], current_alignment);
    }
  }
  // Member: is_valid
  {
    size_t item_size = sizeof(ros_message.is_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: related_path_id
  {
    size_t item_size = sizeof(ros_message.related_path_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: related_segment_index
  {
    size_t item_size = sizeof(ros_message.related_segment_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: link_index
  {
    size_t item_size = sizeof(ros_message.link_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: length
  {
    size_t item_size = sizeof(ros_message.length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: travel_time
  {
    size_t item_size = sizeof(ros_message.travel_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: static_travel_time
  {
    size_t item_size = sizeof(ros_message.static_travel_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: road_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.road_name.size() + 1);
  // Member: road_facilities
  {
    size_t array_size = ros_message.road_facilities.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_navi_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.road_facilities[index], current_alignment);
    }
  }
  // Member: topo_id_64
  {
    size_t item_size = sizeof(ros_message.topo_id_64);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: urid
  {
    size_t item_size = sizeof(ros_message.urid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: link_direction
  {
    size_t item_size = sizeof(ros_message.link_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: main_action
  {
    size_t item_size = sizeof(ros_message.main_action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: assistant_action
  {
    size_t item_size = sizeof(ros_message.assistant_action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: adcode
  {
    size_t item_size = sizeof(ros_message.adcode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: link_type
  {
    size_t item_size = sizeof(ros_message.link_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: formway
  {
    size_t item_size = sizeof(ros_message.formway);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: road_class
  {
    size_t item_size = sizeof(ros_message.road_class);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: road_direction
  {
    size_t item_size = sizeof(ros_message.road_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ownership
  {
    size_t item_size = sizeof(ros_message.ownership);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_toll
  {
    size_t item_size = sizeof(ros_message.is_toll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_over_head
  {
    size_t item_size = sizeof(ros_message.is_over_head);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: has_parallel_road
  {
    size_t item_size = sizeof(ros_message.has_parallel_road);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: has_multi_out
  {
    size_t item_size = sizeof(ros_message.has_multi_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: has_traffic_light
  {
    size_t item_size = sizeof(ros_message.has_traffic_light);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: has_mix_fork
  {
    size_t item_size = sizeof(ros_message.has_mix_fork);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_at_service
  {
    size_t item_size = sizeof(ros_message.is_at_service);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_restricting
  {
    size_t item_size = sizeof(ros_message.is_restricting);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: limit_flag
  {
    size_t item_size = sizeof(ros_message.limit_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed
  {
    size_t item_size = sizeof(ros_message.speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: turn_infos
  {
    size_t array_size = ros_message.turn_infos.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_navi_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.turn_infos[index], current_alignment);
    }
  }
  // Member: service_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.service_name.size() + 1);
  // Member: inner_road
  {
    size_t item_size = sizeof(ros_message.inner_road);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_parking_road
  {
    size_t item_size = sizeof(ros_message.is_parking_road);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: traffic_status
  {
    size_t item_size = sizeof(ros_message.traffic_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_navi_msgs
max_serialized_size_LinkInfoProto(
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


  // Member: points
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
        deva_navi_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Coord3DDoubleProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: gantry_infos
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
        deva_navi_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_GantryInfoProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: cameras
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
        deva_navi_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_NaviCameraProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: is_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: related_path_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: related_segment_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: link_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: travel_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: static_travel_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
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

  // Member: road_facilities
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
        deva_navi_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RoadFacilityProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: topo_id_64
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: urid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: link_direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: main_action
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: assistant_action
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: adcode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: link_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: formway
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: road_class
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: road_direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ownership
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_toll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_over_head
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: has_parallel_road
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: has_multi_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: has_traffic_light
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: has_mix_fork
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_at_service
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_restricting
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: limit_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: turn_infos
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
        deva_navi_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TurnInfoProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: service_name
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

  // Member: inner_road
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_parking_road
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: traffic_status
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
    using DataType = deva_navi_msgs::msg::LinkInfoProto;
    is_plain =
      (
      offsetof(DataType, traffic_status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LinkInfoProto__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_navi_msgs::msg::LinkInfoProto *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LinkInfoProto__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_navi_msgs::msg::LinkInfoProto *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LinkInfoProto__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_navi_msgs::msg::LinkInfoProto *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LinkInfoProto__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LinkInfoProto(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LinkInfoProto__callbacks = {
  "deva_navi_msgs::msg",
  "LinkInfoProto",
  _LinkInfoProto__cdr_serialize,
  _LinkInfoProto__cdr_deserialize,
  _LinkInfoProto__get_serialized_size,
  _LinkInfoProto__max_serialized_size
};

static rosidl_message_type_support_t _LinkInfoProto__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LinkInfoProto__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_navi_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_navi_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_navi_msgs::msg::LinkInfoProto>()
{
  return &deva_navi_msgs::msg::typesupport_fastrtps_cpp::_LinkInfoProto__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_navi_msgs, msg, LinkInfoProto)() {
  return &deva_navi_msgs::msg::typesupport_fastrtps_cpp::_LinkInfoProto__handle;
}

#ifdef __cplusplus
}
#endif

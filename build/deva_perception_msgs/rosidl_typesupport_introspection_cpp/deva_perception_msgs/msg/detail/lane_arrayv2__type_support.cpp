// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_perception_msgs:msg/LaneArrayv2.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_perception_msgs/msg/detail/lane_arrayv2__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_perception_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LaneArrayv2_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_perception_msgs::msg::LaneArrayv2(_init);
}

void LaneArrayv2_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_perception_msgs::msg::LaneArrayv2 *>(message_memory);
  typed_message->~LaneArrayv2();
}

size_t size_function__LaneArrayv2__lane_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::Lanev2> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneArrayv2__lane_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::Lanev2> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneArrayv2__lane_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::Lanev2> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneArrayv2__lane_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::Lanev2 *>(
    get_const_function__LaneArrayv2__lane_array(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::Lanev2 *>(untyped_value);
  value = item;
}

void assign_function__LaneArrayv2__lane_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::Lanev2 *>(
    get_function__LaneArrayv2__lane_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::Lanev2 *>(untyped_value);
  item = value;
}

void resize_function__LaneArrayv2__lane_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::Lanev2> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LaneArrayv2__crosswalk_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::Crosswalk> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneArrayv2__crosswalk_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::Crosswalk> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneArrayv2__crosswalk_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::Crosswalk> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneArrayv2__crosswalk_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::Crosswalk *>(
    get_const_function__LaneArrayv2__crosswalk_array(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::Crosswalk *>(untyped_value);
  value = item;
}

void assign_function__LaneArrayv2__crosswalk_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::Crosswalk *>(
    get_function__LaneArrayv2__crosswalk_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::Crosswalk *>(untyped_value);
  item = value;
}

void resize_function__LaneArrayv2__crosswalk_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::Crosswalk> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LaneArrayv2__steering_arrow_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::SteeringArrow> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneArrayv2__steering_arrow_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::SteeringArrow> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneArrayv2__steering_arrow_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::SteeringArrow> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneArrayv2__steering_arrow_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::SteeringArrow *>(
    get_const_function__LaneArrayv2__steering_arrow_array(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::SteeringArrow *>(untyped_value);
  value = item;
}

void assign_function__LaneArrayv2__steering_arrow_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::SteeringArrow *>(
    get_function__LaneArrayv2__steering_arrow_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::SteeringArrow *>(untyped_value);
  item = value;
}

void resize_function__LaneArrayv2__steering_arrow_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::SteeringArrow> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LaneArrayv2__noparking_zone_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::NoparkingZone> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneArrayv2__noparking_zone_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::NoparkingZone> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneArrayv2__noparking_zone_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::NoparkingZone> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneArrayv2__noparking_zone_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::NoparkingZone *>(
    get_const_function__LaneArrayv2__noparking_zone_array(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::NoparkingZone *>(untyped_value);
  value = item;
}

void assign_function__LaneArrayv2__noparking_zone_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::NoparkingZone *>(
    get_function__LaneArrayv2__noparking_zone_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::NoparkingZone *>(untyped_value);
  item = value;
}

void resize_function__LaneArrayv2__noparking_zone_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::NoparkingZone> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LaneArrayv2__partition_zone_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::PartitionZone> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneArrayv2__partition_zone_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::PartitionZone> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneArrayv2__partition_zone_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::PartitionZone> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneArrayv2__partition_zone_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::PartitionZone *>(
    get_const_function__LaneArrayv2__partition_zone_array(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::PartitionZone *>(untyped_value);
  value = item;
}

void assign_function__LaneArrayv2__partition_zone_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::PartitionZone *>(
    get_function__LaneArrayv2__partition_zone_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::PartitionZone *>(untyped_value);
  item = value;
}

void resize_function__LaneArrayv2__partition_zone_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::PartitionZone> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LaneArrayv2__center_line_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::PerceptCenterLine> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneArrayv2__center_line_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::PerceptCenterLine> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneArrayv2__center_line_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::PerceptCenterLine> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneArrayv2__center_line_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::PerceptCenterLine *>(
    get_const_function__LaneArrayv2__center_line_array(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::PerceptCenterLine *>(untyped_value);
  value = item;
}

void assign_function__LaneArrayv2__center_line_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::PerceptCenterLine *>(
    get_function__LaneArrayv2__center_line_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::PerceptCenterLine *>(untyped_value);
  item = value;
}

void resize_function__LaneArrayv2__center_line_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::PerceptCenterLine> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LaneArrayv2__entrance_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::Entrance> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneArrayv2__entrance_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::Entrance> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneArrayv2__entrance_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::Entrance> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneArrayv2__entrance_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::Entrance *>(
    get_const_function__LaneArrayv2__entrance_array(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::Entrance *>(untyped_value);
  value = item;
}

void assign_function__LaneArrayv2__entrance_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::Entrance *>(
    get_function__LaneArrayv2__entrance_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::Entrance *>(untyped_value);
  item = value;
}

void resize_function__LaneArrayv2__entrance_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::Entrance> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LaneArrayv2_message_member_array[10] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::LaneArrayv2, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vehicle_left_lane_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::LaneArrayv2, vehicle_left_lane_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vehicle_right_lane_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::LaneArrayv2, vehicle_right_lane_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::Lanev2>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::LaneArrayv2, lane_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneArrayv2__lane_array,  // size() function pointer
    get_const_function__LaneArrayv2__lane_array,  // get_const(index) function pointer
    get_function__LaneArrayv2__lane_array,  // get(index) function pointer
    fetch_function__LaneArrayv2__lane_array,  // fetch(index, &value) function pointer
    assign_function__LaneArrayv2__lane_array,  // assign(index, value) function pointer
    resize_function__LaneArrayv2__lane_array  // resize(index) function pointer
  },
  {
    "crosswalk_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::Crosswalk>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::LaneArrayv2, crosswalk_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneArrayv2__crosswalk_array,  // size() function pointer
    get_const_function__LaneArrayv2__crosswalk_array,  // get_const(index) function pointer
    get_function__LaneArrayv2__crosswalk_array,  // get(index) function pointer
    fetch_function__LaneArrayv2__crosswalk_array,  // fetch(index, &value) function pointer
    assign_function__LaneArrayv2__crosswalk_array,  // assign(index, value) function pointer
    resize_function__LaneArrayv2__crosswalk_array  // resize(index) function pointer
  },
  {
    "steering_arrow_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::SteeringArrow>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::LaneArrayv2, steering_arrow_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneArrayv2__steering_arrow_array,  // size() function pointer
    get_const_function__LaneArrayv2__steering_arrow_array,  // get_const(index) function pointer
    get_function__LaneArrayv2__steering_arrow_array,  // get(index) function pointer
    fetch_function__LaneArrayv2__steering_arrow_array,  // fetch(index, &value) function pointer
    assign_function__LaneArrayv2__steering_arrow_array,  // assign(index, value) function pointer
    resize_function__LaneArrayv2__steering_arrow_array  // resize(index) function pointer
  },
  {
    "noparking_zone_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::NoparkingZone>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::LaneArrayv2, noparking_zone_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneArrayv2__noparking_zone_array,  // size() function pointer
    get_const_function__LaneArrayv2__noparking_zone_array,  // get_const(index) function pointer
    get_function__LaneArrayv2__noparking_zone_array,  // get(index) function pointer
    fetch_function__LaneArrayv2__noparking_zone_array,  // fetch(index, &value) function pointer
    assign_function__LaneArrayv2__noparking_zone_array,  // assign(index, value) function pointer
    resize_function__LaneArrayv2__noparking_zone_array  // resize(index) function pointer
  },
  {
    "partition_zone_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::PartitionZone>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::LaneArrayv2, partition_zone_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneArrayv2__partition_zone_array,  // size() function pointer
    get_const_function__LaneArrayv2__partition_zone_array,  // get_const(index) function pointer
    get_function__LaneArrayv2__partition_zone_array,  // get(index) function pointer
    fetch_function__LaneArrayv2__partition_zone_array,  // fetch(index, &value) function pointer
    assign_function__LaneArrayv2__partition_zone_array,  // assign(index, value) function pointer
    resize_function__LaneArrayv2__partition_zone_array  // resize(index) function pointer
  },
  {
    "center_line_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::PerceptCenterLine>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::LaneArrayv2, center_line_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneArrayv2__center_line_array,  // size() function pointer
    get_const_function__LaneArrayv2__center_line_array,  // get_const(index) function pointer
    get_function__LaneArrayv2__center_line_array,  // get(index) function pointer
    fetch_function__LaneArrayv2__center_line_array,  // fetch(index, &value) function pointer
    assign_function__LaneArrayv2__center_line_array,  // assign(index, value) function pointer
    resize_function__LaneArrayv2__center_line_array  // resize(index) function pointer
  },
  {
    "entrance_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::Entrance>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::LaneArrayv2, entrance_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneArrayv2__entrance_array,  // size() function pointer
    get_const_function__LaneArrayv2__entrance_array,  // get_const(index) function pointer
    get_function__LaneArrayv2__entrance_array,  // get(index) function pointer
    fetch_function__LaneArrayv2__entrance_array,  // fetch(index, &value) function pointer
    assign_function__LaneArrayv2__entrance_array,  // assign(index, value) function pointer
    resize_function__LaneArrayv2__entrance_array  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LaneArrayv2_message_members = {
  "deva_perception_msgs::msg",  // message namespace
  "LaneArrayv2",  // message name
  10,  // number of fields
  sizeof(deva_perception_msgs::msg::LaneArrayv2),
  LaneArrayv2_message_member_array,  // message members
  LaneArrayv2_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneArrayv2_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LaneArrayv2_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LaneArrayv2_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_perception_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_perception_msgs::msg::LaneArrayv2>()
{
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::LaneArrayv2_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_perception_msgs, msg, LaneArrayv2)() {
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::LaneArrayv2_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/SdProRoad.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_road__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SdProRoad_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_gaode_routing_msgs::msg::SdProRoad(_init);
}

void SdProRoad_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_gaode_routing_msgs::msg::SdProRoad *>(message_memory);
  typed_message->~SdProRoad();
}

size_t size_function__SdProRoad__forms(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SdProRoad__forms(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SdProRoad__forms(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SdProRoad__forms(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__SdProRoad__forms(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__SdProRoad__forms(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__SdProRoad__forms(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__SdProRoad__forms(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SdProRoad__geo(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::CenterPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SdProRoad__geo(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::CenterPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__SdProRoad__geo(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::CenterPoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__SdProRoad__geo(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::CenterPoint *>(
    get_const_function__SdProRoad__geo(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::CenterPoint *>(untyped_value);
  value = item;
}

void assign_function__SdProRoad__geo(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::CenterPoint *>(
    get_function__SdProRoad__geo(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::CenterPoint *>(untyped_value);
  item = value;
}

void resize_function__SdProRoad__geo(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::CenterPoint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SdProRoad__lanes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::SdProLane> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SdProRoad__lanes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::SdProLane> *>(untyped_member);
  return &member[index];
}

void * get_function__SdProRoad__lanes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::SdProLane> *>(untyped_member);
  return &member[index];
}

void fetch_function__SdProRoad__lanes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::SdProLane *>(
    get_const_function__SdProRoad__lanes(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::SdProLane *>(untyped_value);
  value = item;
}

void assign_function__SdProRoad__lanes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::SdProLane *>(
    get_function__SdProRoad__lanes(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::SdProLane *>(untyped_value);
  item = value;
}

void resize_function__SdProRoad__lanes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::SdProLane> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SdProRoad__next_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SdProRoad__next_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SdProRoad__next_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SdProRoad__next_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__SdProRoad__next_ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__SdProRoad__next_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__SdProRoad__next_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

void resize_function__SdProRoad__next_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SdProRoad__pre_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SdProRoad__pre_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SdProRoad__pre_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SdProRoad__pre_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__SdProRoad__pre_ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__SdProRoad__pre_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__SdProRoad__pre_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

void resize_function__SdProRoad__pre_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SdProRoad__lane_connect(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::SdProLaneConnect> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SdProRoad__lane_connect(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::SdProLaneConnect> *>(untyped_member);
  return &member[index];
}

void * get_function__SdProRoad__lane_connect(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::SdProLaneConnect> *>(untyped_member);
  return &member[index];
}

void fetch_function__SdProRoad__lane_connect(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::SdProLaneConnect *>(
    get_const_function__SdProRoad__lane_connect(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::SdProLaneConnect *>(untyped_value);
  value = item;
}

void assign_function__SdProRoad__lane_connect(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::SdProLaneConnect *>(
    get_function__SdProRoad__lane_connect(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::SdProLaneConnect *>(untyped_value);
  item = value;
}

void resize_function__SdProRoad__lane_connect(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::SdProLaneConnect> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SdProRoad__trfc_signs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::TrfcSign> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SdProRoad__trfc_signs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::TrfcSign> *>(untyped_member);
  return &member[index];
}

void * get_function__SdProRoad__trfc_signs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::TrfcSign> *>(untyped_member);
  return &member[index];
}

void fetch_function__SdProRoad__trfc_signs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::TrfcSign *>(
    get_const_function__SdProRoad__trfc_signs(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::TrfcSign *>(untyped_value);
  value = item;
}

void assign_function__SdProRoad__trfc_signs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::TrfcSign *>(
    get_function__SdProRoad__trfc_signs(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::TrfcSign *>(untyped_value);
  item = value;
}

void resize_function__SdProRoad__trfc_signs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::TrfcSign> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SdProRoad__restriction(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::Restriction> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SdProRoad__restriction(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::Restriction> *>(untyped_member);
  return &member[index];
}

void * get_function__SdProRoad__restriction(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::Restriction> *>(untyped_member);
  return &member[index];
}

void fetch_function__SdProRoad__restriction(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::Restriction *>(
    get_const_function__SdProRoad__restriction(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::Restriction *>(untyped_value);
  value = item;
}

void assign_function__SdProRoad__restriction(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::Restriction *>(
    get_function__SdProRoad__restriction(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::Restriction *>(untyped_value);
  item = value;
}

void resize_function__SdProRoad__restriction(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::Restriction> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SdProRoad__cross_point(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::CrossPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SdProRoad__cross_point(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::CrossPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__SdProRoad__cross_point(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::CrossPoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__SdProRoad__cross_point(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::CrossPoint *>(
    get_const_function__SdProRoad__cross_point(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::CrossPoint *>(untyped_value);
  value = item;
}

void assign_function__SdProRoad__cross_point(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::CrossPoint *>(
    get_function__SdProRoad__cross_point(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::CrossPoint *>(untyped_value);
  item = value;
}

void resize_function__SdProRoad__cross_point(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::CrossPoint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SdProRoad_message_member_array[23] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProRoad, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "road_kind",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProRoad, road_kind),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "direction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProRoad, direction),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "forms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProRoad, forms),  // bytes offset in struct
    nullptr,  // default value
    size_function__SdProRoad__forms,  // size() function pointer
    get_const_function__SdProRoad__forms,  // get_const(index) function pointer
    get_function__SdProRoad__forms,  // get(index) function pointer
    fetch_function__SdProRoad__forms,  // fetch(index, &value) function pointer
    assign_function__SdProRoad__forms,  // assign(index, value) function pointer
    resize_function__SdProRoad__forms  // resize(index) function pointer
  },
  {
    "lane_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProRoad, lane_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProRoad, length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed_limit_min",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProRoad, speed_limit_min),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed_limit_max",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProRoad, speed_limit_max),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "start_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProRoad, start_angle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "end_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProRoad, end_angle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "geo",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::CenterPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProRoad, geo),  // bytes offset in struct
    nullptr,  // default value
    size_function__SdProRoad__geo,  // size() function pointer
    get_const_function__SdProRoad__geo,  // get_const(index) function pointer
    get_function__SdProRoad__geo,  // get(index) function pointer
    fetch_function__SdProRoad__geo,  // fetch(index, &value) function pointer
    assign_function__SdProRoad__geo,  // assign(index, value) function pointer
    resize_function__SdProRoad__geo  // resize(index) function pointer
  },
  {
    "lanes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::SdProLane>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProRoad, lanes),  // bytes offset in struct
    nullptr,  // default value
    size_function__SdProRoad__lanes,  // size() function pointer
    get_const_function__SdProRoad__lanes,  // get_const(index) function pointer
    get_function__SdProRoad__lanes,  // get(index) function pointer
    fetch_function__SdProRoad__lanes,  // fetch(index, &value) function pointer
    assign_function__SdProRoad__lanes,  // assign(index, value) function pointer
    resize_function__SdProRoad__lanes  // resize(index) function pointer
  },
  {
    "next_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProRoad, next_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__SdProRoad__next_ids,  // size() function pointer
    get_const_function__SdProRoad__next_ids,  // get_const(index) function pointer
    get_function__SdProRoad__next_ids,  // get(index) function pointer
    fetch_function__SdProRoad__next_ids,  // fetch(index, &value) function pointer
    assign_function__SdProRoad__next_ids,  // assign(index, value) function pointer
    resize_function__SdProRoad__next_ids  // resize(index) function pointer
  },
  {
    "pre_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProRoad, pre_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__SdProRoad__pre_ids,  // size() function pointer
    get_const_function__SdProRoad__pre_ids,  // get_const(index) function pointer
    get_function__SdProRoad__pre_ids,  // get(index) function pointer
    fetch_function__SdProRoad__pre_ids,  // fetch(index, &value) function pointer
    assign_function__SdProRoad__pre_ids,  // assign(index, value) function pointer
    resize_function__SdProRoad__pre_ids  // resize(index) function pointer
  },
  {
    "product_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProRoad, product_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_connect",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::SdProLaneConnect>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProRoad, lane_connect),  // bytes offset in struct
    nullptr,  // default value
    size_function__SdProRoad__lane_connect,  // size() function pointer
    get_const_function__SdProRoad__lane_connect,  // get_const(index) function pointer
    get_function__SdProRoad__lane_connect,  // get(index) function pointer
    fetch_function__SdProRoad__lane_connect,  // fetch(index, &value) function pointer
    assign_function__SdProRoad__lane_connect,  // assign(index, value) function pointer
    resize_function__SdProRoad__lane_connect  // resize(index) function pointer
  },
  {
    "trfc_signs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::TrfcSign>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProRoad, trfc_signs),  // bytes offset in struct
    nullptr,  // default value
    size_function__SdProRoad__trfc_signs,  // size() function pointer
    get_const_function__SdProRoad__trfc_signs,  // get_const(index) function pointer
    get_function__SdProRoad__trfc_signs,  // get(index) function pointer
    fetch_function__SdProRoad__trfc_signs,  // fetch(index, &value) function pointer
    assign_function__SdProRoad__trfc_signs,  // assign(index, value) function pointer
    resize_function__SdProRoad__trfc_signs  // resize(index) function pointer
  },
  {
    "s_node_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProRoad, s_node_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "e_node_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProRoad, e_node_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProRoad, joint_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "road_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProRoad, road_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "restriction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::Restriction>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProRoad, restriction),  // bytes offset in struct
    nullptr,  // default value
    size_function__SdProRoad__restriction,  // size() function pointer
    get_const_function__SdProRoad__restriction,  // get_const(index) function pointer
    get_function__SdProRoad__restriction,  // get(index) function pointer
    fetch_function__SdProRoad__restriction,  // fetch(index, &value) function pointer
    assign_function__SdProRoad__restriction,  // assign(index, value) function pointer
    resize_function__SdProRoad__restriction  // resize(index) function pointer
  },
  {
    "cross_point",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::CrossPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProRoad, cross_point),  // bytes offset in struct
    nullptr,  // default value
    size_function__SdProRoad__cross_point,  // size() function pointer
    get_const_function__SdProRoad__cross_point,  // get_const(index) function pointer
    get_function__SdProRoad__cross_point,  // get(index) function pointer
    fetch_function__SdProRoad__cross_point,  // fetch(index, &value) function pointer
    assign_function__SdProRoad__cross_point,  // assign(index, value) function pointer
    resize_function__SdProRoad__cross_point  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SdProRoad_message_members = {
  "deva_gaode_routing_msgs::msg",  // message namespace
  "SdProRoad",  // message name
  23,  // number of fields
  sizeof(deva_gaode_routing_msgs::msg::SdProRoad),
  SdProRoad_message_member_array,  // message members
  SdProRoad_init_function,  // function to initialize message memory (memory has to be allocated)
  SdProRoad_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SdProRoad_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SdProRoad_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_gaode_routing_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_gaode_routing_msgs::msg::SdProRoad>()
{
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::SdProRoad_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_gaode_routing_msgs, msg, SdProRoad)() {
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::SdProRoad_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

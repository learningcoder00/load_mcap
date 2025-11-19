// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_map_msgs:msg/AvpSubLane.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_map_msgs/msg/detail/avp_sub_lane__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_map_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AvpSubLane_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_map_msgs::msg::AvpSubLane(_init);
}

void AvpSubLane_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_map_msgs::msg::AvpSubLane *>(message_memory);
  typed_message->~AvpSubLane();
}

size_t size_function__AvpSubLane__ref_line(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_map_msgs::msg::PathPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AvpSubLane__ref_line(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_map_msgs::msg::PathPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__AvpSubLane__ref_line(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_map_msgs::msg::PathPoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__AvpSubLane__ref_line(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_map_msgs::msg::PathPoint *>(
    get_const_function__AvpSubLane__ref_line(untyped_member, index));
  auto & value = *reinterpret_cast<deva_map_msgs::msg::PathPoint *>(untyped_value);
  value = item;
}

void assign_function__AvpSubLane__ref_line(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_map_msgs::msg::PathPoint *>(
    get_function__AvpSubLane__ref_line(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_map_msgs::msg::PathPoint *>(untyped_value);
  item = value;
}

void resize_function__AvpSubLane__ref_line(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_map_msgs::msg::PathPoint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AvpSubLane__drivable_boundary(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_map_msgs::msg::AvpBoundary> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AvpSubLane__drivable_boundary(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_map_msgs::msg::AvpBoundary> *>(untyped_member);
  return &member[index];
}

void * get_function__AvpSubLane__drivable_boundary(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_map_msgs::msg::AvpBoundary> *>(untyped_member);
  return &member[index];
}

void fetch_function__AvpSubLane__drivable_boundary(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_map_msgs::msg::AvpBoundary *>(
    get_const_function__AvpSubLane__drivable_boundary(untyped_member, index));
  auto & value = *reinterpret_cast<deva_map_msgs::msg::AvpBoundary *>(untyped_value);
  value = item;
}

void assign_function__AvpSubLane__drivable_boundary(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_map_msgs::msg::AvpBoundary *>(
    get_function__AvpSubLane__drivable_boundary(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_map_msgs::msg::AvpBoundary *>(untyped_value);
  item = value;
}

void resize_function__AvpSubLane__drivable_boundary(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_map_msgs::msg::AvpBoundary> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AvpSubLane__successor_lane_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AvpSubLane__successor_lane_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__AvpSubLane__successor_lane_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__AvpSubLane__successor_lane_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__AvpSubLane__successor_lane_ids(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__AvpSubLane__successor_lane_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__AvpSubLane__successor_lane_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__AvpSubLane__successor_lane_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AvpSubLane__left_lane_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AvpSubLane__left_lane_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__AvpSubLane__left_lane_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__AvpSubLane__left_lane_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__AvpSubLane__left_lane_ids(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__AvpSubLane__left_lane_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__AvpSubLane__left_lane_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__AvpSubLane__left_lane_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AvpSubLane__right_lane_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AvpSubLane__right_lane_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__AvpSubLane__right_lane_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__AvpSubLane__right_lane_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__AvpSubLane__right_lane_ids(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__AvpSubLane__right_lane_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__AvpSubLane__right_lane_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__AvpSubLane__right_lane_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AvpSubLane_message_member_array[6] = {
  {
    "lane_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs::msg::AvpSubLane, lane_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ref_line",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_map_msgs::msg::PathPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs::msg::AvpSubLane, ref_line),  // bytes offset in struct
    nullptr,  // default value
    size_function__AvpSubLane__ref_line,  // size() function pointer
    get_const_function__AvpSubLane__ref_line,  // get_const(index) function pointer
    get_function__AvpSubLane__ref_line,  // get(index) function pointer
    fetch_function__AvpSubLane__ref_line,  // fetch(index, &value) function pointer
    assign_function__AvpSubLane__ref_line,  // assign(index, value) function pointer
    resize_function__AvpSubLane__ref_line  // resize(index) function pointer
  },
  {
    "drivable_boundary",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_map_msgs::msg::AvpBoundary>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs::msg::AvpSubLane, drivable_boundary),  // bytes offset in struct
    nullptr,  // default value
    size_function__AvpSubLane__drivable_boundary,  // size() function pointer
    get_const_function__AvpSubLane__drivable_boundary,  // get_const(index) function pointer
    get_function__AvpSubLane__drivable_boundary,  // get(index) function pointer
    fetch_function__AvpSubLane__drivable_boundary,  // fetch(index, &value) function pointer
    assign_function__AvpSubLane__drivable_boundary,  // assign(index, value) function pointer
    resize_function__AvpSubLane__drivable_boundary  // resize(index) function pointer
  },
  {
    "successor_lane_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs::msg::AvpSubLane, successor_lane_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__AvpSubLane__successor_lane_ids,  // size() function pointer
    get_const_function__AvpSubLane__successor_lane_ids,  // get_const(index) function pointer
    get_function__AvpSubLane__successor_lane_ids,  // get(index) function pointer
    fetch_function__AvpSubLane__successor_lane_ids,  // fetch(index, &value) function pointer
    assign_function__AvpSubLane__successor_lane_ids,  // assign(index, value) function pointer
    resize_function__AvpSubLane__successor_lane_ids  // resize(index) function pointer
  },
  {
    "left_lane_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs::msg::AvpSubLane, left_lane_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__AvpSubLane__left_lane_ids,  // size() function pointer
    get_const_function__AvpSubLane__left_lane_ids,  // get_const(index) function pointer
    get_function__AvpSubLane__left_lane_ids,  // get(index) function pointer
    fetch_function__AvpSubLane__left_lane_ids,  // fetch(index, &value) function pointer
    assign_function__AvpSubLane__left_lane_ids,  // assign(index, value) function pointer
    resize_function__AvpSubLane__left_lane_ids  // resize(index) function pointer
  },
  {
    "right_lane_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs::msg::AvpSubLane, right_lane_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__AvpSubLane__right_lane_ids,  // size() function pointer
    get_const_function__AvpSubLane__right_lane_ids,  // get_const(index) function pointer
    get_function__AvpSubLane__right_lane_ids,  // get(index) function pointer
    fetch_function__AvpSubLane__right_lane_ids,  // fetch(index, &value) function pointer
    assign_function__AvpSubLane__right_lane_ids,  // assign(index, value) function pointer
    resize_function__AvpSubLane__right_lane_ids  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AvpSubLane_message_members = {
  "deva_map_msgs::msg",  // message namespace
  "AvpSubLane",  // message name
  6,  // number of fields
  sizeof(deva_map_msgs::msg::AvpSubLane),
  AvpSubLane_message_member_array,  // message members
  AvpSubLane_init_function,  // function to initialize message memory (memory has to be allocated)
  AvpSubLane_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AvpSubLane_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AvpSubLane_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_map_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_map_msgs::msg::AvpSubLane>()
{
  return &::deva_map_msgs::msg::rosidl_typesupport_introspection_cpp::AvpSubLane_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_map_msgs, msg, AvpSubLane)() {
  return &::deva_map_msgs::msg::rosidl_typesupport_introspection_cpp::AvpSubLane_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
